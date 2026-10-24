/* ARM64 IL2CPP native pseudocode from Ghidra.
 * Recovered implementation, not original C# source.
 * Function boundaries follow the IL2CPP method address table. */


/* UIInput$$get_defaultText @ 0x9f1958
 * System_String_o* UIInput__get_defaultText (UIInput_o* __this, const MethodInfo* method); */

/* UIInput$$get_defaultText
   System_String_o* UIInput__get_defaultText (UIInput_o* __this, const MethodInfo* method); */

undefined8 native_UIInput__get_defaultText_9f1958(long param_1)

{
  if (*(char *)(param_1 + 0xb4) != '\0') {
    native_UIInput__Init_9f1988(param_1);
  }
  return *(undefined8 *)(param_1 + 0x98);
}



/* UIInput$$set_defaultText @ 0x9f1ae0
 * void UIInput__set_defaultText (UIInput_o* __this, System_String_o* value, const MethodInfo* method); */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* UIInput$$set_defaultText
   void UIInput__set_defaultText (UIInput_o* __this, System_String_o* value, const MethodInfo*
   method); */

void native_UIInput__set_defaultText_9f1ae0(long *param_1,long param_2)

{
  undefined4 *puVar1;
  undefined4 *puVar2;
  bool bVar3;
  ushort uVar4;
  uint uVar5;
  uint uVar6;
  undefined4 uVar7;
  int iVar8;
  int iVar9;
  undefined4 uVar10;
  ulong uVar11;
  undefined8 uVar12;
  undefined8 *puVar13;
  undefined8 uVar14;
  long *plVar15;
  long *plVar16;
  int iVar17;
  long lVar18;
  long lVar19;
  int *piVar20;
  ushort uVar21;
  int iVar22;
  long lVar23;
  long *plVar24;
  long *plVar25;
  long *plVar26;
  float fVar27;
  
  if (*(char *)((long)param_1 + 0xb4) != '\0') {
    native_UIInput__Init_9f1988(param_1);
  }
  param_1[0x13] = param_2;
  native_sub_4326e0(param_1 + 0x13,param_2);
  if ((bRam0000000001341994 & 1) == 0) {
    native_sub_43273c(&INGUIFont_TypeInfo_12d4c70);
    native_sub_43273c(&Method_NGUITools_AddWidget_UITexture____12e56e8);
    native_sub_43273c(&NGUITools_TypeInfo_12d53c8);
    native_sub_43273c(&UnityEngine_Object_TypeInfo_12d54e0);
    native_sub_43273c(&UnityEngine_Texture2D_TypeInfo_12d61f0);
    native_sub_43273c(&UIInput_TypeInfo_12d6450);
    native_sub_43273c(&StringLiteral_x_12f6b98);
    native_sub_43273c(&StringLiteral__12eaac0);
    native_sub_43273c(&StringLiteral___12eb5f0);
    native_sub_43273c(&StringLiteral_Input_Caret_12ee890);
    native_sub_43273c(&StringLiteral_Input_Highlight_12ee898);
    bRam0000000001341994 = 1;
  }
  plVar26 = param_1 + 3;
  lVar23 = *plVar26;
  if (((*(byte *)(_UnityEngine_Object_TypeInfo_12d54e0 + 0x133) >> 2 & 1) != 0) &&
     (*(int *)(_UnityEngine_Object_TypeInfo_12d54e0 + 0xe0) == 0)) {
    native_sub_4327ec();
  }
  uVar11 = native_UnityEngine_Object__op_Inequality_8d76fc(lVar23,0,0);
  if ((uVar11 & 1) == 0) {
    return;
  }
  if (*(char *)((long)param_1 + 0xb4) != '\0') {
    native_UIInput__Init_9f1988(param_1);
  }
  uVar5 = native_UIInput__get_isSelected_9f283c(param_1);
  if (*(char *)((long)param_1 + 0xb4) != '\0') {
    native_UIInput__Init_9f1988(param_1);
  }
  lVar23 = param_1[0x12];
  uVar11 = native_System_String__IsNullOrEmpty_b09430(lVar23,0);
  if ((uVar11 & 1) == 0) {
    lVar18 = *plVar26;
    uVar6 = 0;
LAB_009f1c84:
    plVar16 = param_1 + 9;
    puVar1 = (undefined4 *)((long)param_1 + 0x4c);
    plVar24 = param_1 + 10;
    puVar2 = (undefined4 *)((long)param_1 + 0x54);
  }
  else {
    uVar12 = native_UnityEngine_Input__get_compositionString_dbdf20(0);
    uVar6 = native_System_String__IsNullOrEmpty_b09430(uVar12,0);
    lVar18 = *plVar26;
    if (((uVar5 | uVar6 ^ 0xffffffff) & 1) != 0) goto LAB_009f1c84;
    plVar16 = param_1 + 0x14;
    puVar1 = (undefined4 *)((long)param_1 + 0xa4);
    plVar24 = param_1 + 0x15;
    puVar2 = (undefined4 *)((long)param_1 + 0xac);
    uVar6 = 1;
  }
  if (lVar18 == 0) goto LAB_009f2784;
  native_UIWidget__set_color_947adc((int)*plVar16,*puVar1,(int)*plVar24,*puVar2,lVar18,0);
  uVar12 = _StringLiteral___12eb5f0;
  lVar18 = _StringLiteral__12eaac0;
  if ((uVar6 & 1) == 0) {
    if ((int)param_1[4] == 2) {
      if (*plVar26 == 0) goto LAB_009f2784;
      plVar16 = (long *)native_UILabel__get_font_ae77e8(*plVar26,0);
      uVar14 = uVar12;
      if (plVar16 != (long *)0x0) {
        lVar19 = *plVar16;
        if ((ulong)*(ushort *)(lVar19 + 0x12a) != 0) {
          uVar11 = 0;
          piVar20 = (int *)(*(long *)(lVar19 + 0xb0) + 8);
          do {
            if (*(long *)(piVar20 + -2) == _INGUIFont_TypeInfo_12d4c70) {
              puVar13 = (undefined8 *)(lVar19 + (long)(*piVar20 + 2) * 0x10 + 0x138);
              goto LAB_009f1da4;
            }
            uVar11 = uVar11 + 1;
            piVar20 = piVar20 + 4;
          } while (uVar11 < *(ushort *)(lVar19 + 0x12a));
        }
        puVar13 = (undefined8 *)native_sub_3c9b34(plVar16,_INGUIFont_TypeInfo_12d4c70,2);
LAB_009f1da4:
        lVar19 = (*(code *)*puVar13)(plVar16,puVar13[1]);
        if (lVar19 != 0) {
          lVar19 = *plVar16;
          if ((ulong)*(ushort *)(lVar19 + 0x12a) != 0) {
            uVar11 = 0;
            piVar20 = (int *)(*(long *)(lVar19 + 0xb0) + 8);
            do {
              if (*(long *)(piVar20 + -2) == _INGUIFont_TypeInfo_12d4c70) {
                puVar13 = (undefined8 *)(lVar19 + (long)(*piVar20 + 2) * 0x10 + 0x138);
                goto LAB_009f1e0c;
              }
              uVar11 = uVar11 + 1;
              piVar20 = piVar20 + 4;
            } while (uVar11 < *(ushort *)(lVar19 + 0x12a));
          }
          puVar13 = (undefined8 *)native_sub_3c9b34(plVar16,_INGUIFont_TypeInfo_12d4c70,2);
LAB_009f1e0c:
          lVar19 = (*(code *)*puVar13)(plVar16,puVar13[1]);
          if (lVar19 == 0) goto LAB_009f2784;
          lVar19 = native_BMFont__GetGlyph_dd1c0c(lVar19,0x2a,0);
          uVar14 = _StringLiteral_x_12f6b98;
          if (lVar19 != 0) {
            uVar14 = uVar12;
          }
        }
      }
      if (lVar23 == 0) goto LAB_009f2784;
      iVar8 = *(int *)(lVar23 + 0x10);
      if (0 < iVar8) {
        do {
          lVar18 = native_System_String__Concat_afbd68(lVar18,uVar14,0);
          iVar8 = iVar8 + -1;
        } while (iVar8 != 0);
      }
      lVar23 = lVar18;
      if ((uVar5 & 1) == 0) goto LAB_009f1ec8;
LAB_009f1e6c:
      if (lVar23 == 0) goto LAB_009f2784;
      uVar10 = *(undefined4 *)(lVar23 + 0x10);
      uVar7 = native_UIInput__get_cursorPosition_9f3090(param_1);
      iVar8 = native_UnityEngine_Mathf__Min_8e4c18(uVar10,uVar7,0);
      uVar12 = native_System_String__Substring_b09fac(lVar23,0,iVar8,0);
      uVar14 = native_UnityEngine_Input__get_compositionString_dbdf20(0);
      uVar12 = native_System_String__Concat_afbd68(uVar12,uVar14,0);
    }
    else {
      if ((uVar5 & 1) != 0) goto LAB_009f1e6c;
LAB_009f1ec8:
      if (lVar23 == 0) goto LAB_009f2784;
      uVar12 = native_System_String__Substring_b09fac(lVar23,0,0,0);
      iVar8 = 0;
    }
    uVar14 = native_System_String__Substring_b09fac(lVar23,iVar8,*(int *)(lVar23 + 0x10) - iVar8,0);
    lVar23 = native_System_String__Concat_afbd68(uVar12,uVar14,0);
    if ((uVar5 & 1) == 0) {
LAB_009f1fb0:
      if (((*(byte *)(_UIInput_TypeInfo_12d6450 + 0x133) >> 2 & 1) != 0) &&
         (*(int *)(_UIInput_TypeInfo_12d6450 + 0xe0) == 0)) {
        native_sub_4327ec();
      }
      *(undefined4 *)(*(long *)(_UIInput_TypeInfo_12d6450 + 0xb8) + 0x10) = 0;
      lVar18 = *plVar26;
      if (lVar18 == 0) goto LAB_009f2784;
      uVar10 = (undefined4)param_1[0x17];
      goto LAB_009f1fe8;
    }
    lVar18 = *plVar26;
    if (lVar18 == 0) goto LAB_009f2784;
    if ((*(int *)(lVar18 + 0x1e4) != 1) || (*(int *)(lVar18 + 0x1c0) != 1)) goto LAB_009f1fb0;
    iVar9 = native_UILabel__CalculateOffsetToFit_aedc24(lVar18,lVar23,0);
    uVar4 = *(ushort *)(_UIInput_TypeInfo_12d6450 + 0x132);
    uVar21 = uVar4 & 0x400;
    if (iVar9 == 0) {
      if (((uVar4 & 0x400) != 0) && (*(int *)(_UIInput_TypeInfo_12d6450 + 0xe0) == 0)) {
        native_sub_4327ec();
      }
      *(undefined4 *)(*(long *)(_UIInput_TypeInfo_12d6450 + 0xb8) + 0x10) = 0;
      lVar18 = *plVar26;
      if (lVar18 == 0) goto LAB_009f2784;
      uVar10 = (undefined4)param_1[0x17];
LAB_009f2678:
      native_UILabel__set_alignment_ae8458(lVar18,uVar10,0);
    }
    else {
      if (((uVar4 & 0x400) != 0) && (*(int *)(_UIInput_TypeInfo_12d6450 + 0xe0) == 0)) {
        native_sub_4327ec();
        uVar21 = *(ushort *)(_UIInput_TypeInfo_12d6450 + 0x132) & 0x400;
      }
      piVar20 = (int *)(*(long *)(_UIInput_TypeInfo_12d6450 + 0xb8) + 0x10);
      iVar22 = *piVar20;
      if (iVar8 < iVar22) {
        if ((uVar21 != 0) && (*(int *)(_UIInput_TypeInfo_12d6450 + 0xe0) == 0)) {
          native_sub_4327ec();
          piVar20 = (int *)(*(long *)(_UIInput_TypeInfo_12d6450 + 0xb8) + 0x10);
        }
        *piVar20 = iVar8;
LAB_009f266c:
        lVar18 = *plVar26;
        if (lVar18 == 0) goto LAB_009f2784;
        uVar10 = 1;
        goto LAB_009f2678;
      }
      if ((uVar21 != 0) && (*(int *)(_UIInput_TypeInfo_12d6450 + 0xe0) == 0)) {
        native_sub_4327ec();
        piVar20 = (int *)(*(long *)(_UIInput_TypeInfo_12d6450 + 0xb8) + 0x10);
        iVar22 = *piVar20;
      }
      if (iVar9 < iVar22) {
        if (((*(byte *)(_UIInput_TypeInfo_12d6450 + 0x133) >> 2 & 1) != 0) &&
           (*(int *)(_UIInput_TypeInfo_12d6450 + 0xe0) == 0)) {
          native_sub_4327ec();
          piVar20 = (int *)(*(long *)(_UIInput_TypeInfo_12d6450 + 0xb8) + 0x10);
        }
        *piVar20 = iVar9;
        goto LAB_009f266c;
      }
      if (lVar23 == 0) goto LAB_009f2784;
      lVar18 = *plVar26;
      uVar12 = native_System_String__Substring_b09fac(lVar23,0,iVar8,0);
      if (lVar18 == 0) goto LAB_009f2784;
      iVar8 = native_UILabel__CalculateOffsetToFit_aedc24(lVar18,uVar12,0);
      if (((*(byte *)(_UIInput_TypeInfo_12d6450 + 0x133) >> 2 & 1) != 0) &&
         (*(int *)(_UIInput_TypeInfo_12d6450 + 0xe0) == 0)) {
        native_sub_4327ec(_UIInput_TypeInfo_12d6450);
      }
      piVar20 = (int *)(*(long *)(_UIInput_TypeInfo_12d6450 + 0xb8) + 0x10);
      if (*piVar20 < iVar8) {
        if (((*(byte *)(_UIInput_TypeInfo_12d6450 + 0x133) >> 2 & 1) != 0) &&
           (*(int *)(_UIInput_TypeInfo_12d6450 + 0xe0) == 0)) {
          native_sub_4327ec(_UIInput_TypeInfo_12d6450);
          piVar20 = (int *)(*(long *)(_UIInput_TypeInfo_12d6450 + 0xb8) + 0x10);
        }
        *piVar20 = iVar8;
        lVar18 = *plVar26;
        if (lVar18 == 0) goto LAB_009f2784;
        uVar10 = 3;
        goto LAB_009f2678;
      }
    }
    if (((*(byte *)(_UIInput_TypeInfo_12d6450 + 0x133) >> 2 & 1) != 0) &&
       (*(int *)(_UIInput_TypeInfo_12d6450 + 0xe0) == 0)) {
      native_sub_4327ec();
    }
    iVar8 = *(int *)(*(long *)(_UIInput_TypeInfo_12d6450 + 0xb8) + 0x10);
    if (iVar8 != 0) {
      if (((*(byte *)(_UIInput_TypeInfo_12d6450 + 0x133) >> 2 & 1) != 0) &&
         (*(int *)(_UIInput_TypeInfo_12d6450 + 0xe0) == 0)) {
        native_sub_4327ec();
        iVar8 = *(int *)(*(long *)(_UIInput_TypeInfo_12d6450 + 0xb8) + 0x10);
      }
      if (lVar23 == 0) goto LAB_009f2784;
      lVar23 = native_System_String__Substring_b09fac
                         (lVar23,iVar8,*(int *)(lVar23 + 0x10) - iVar8,0);
    }
  }
  else {
    lVar18 = *plVar26;
    if (lVar18 == 0) goto LAB_009f2784;
    uVar10 = (undefined4)param_1[0x17];
    plVar16 = (long *)&StringLiteral__12eaac0;
    if ((uVar5 & 1) == 0) {
      plVar16 = param_1 + 0x13;
    }
    lVar23 = *plVar16;
LAB_009f1fe8:
    native_UILabel__set_alignment_ae8458(lVar18,uVar10,0);
  }
  if (*plVar26 == 0) goto LAB_009f2784;
  native_UILabel__set_text_ae81a8(*plVar26,lVar23,0);
  if ((uVar5 & 1) == 0) {
LAB_009f2280:
                    /* WARNING: Could not recover jumptable at 0x009f22a4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (**(code **)(*param_1 + 0x1c8))(param_1,*(undefined8 *)(*param_1 + 0x1d0));
    return;
  }
  if (((*(byte *)(_UIInput_TypeInfo_12d6450 + 0x133) >> 2 & 1) != 0) &&
     (*(int *)(_UIInput_TypeInfo_12d6450 + 0xe0) == 0)) {
    native_sub_4327ec();
  }
  if ((*(long *)(*(long *)(_UIInput_TypeInfo_12d6450 + 0xb8) + 0x20) != 0) &&
     (uVar11 = native_UIInput__get_inputShouldBeHidden_9f28e0(param_1), (uVar11 & 1) == 0))
  goto LAB_009f2280;
  lVar23 = param_1[0x18];
  if (((*(byte *)(_UIInput_TypeInfo_12d6450 + 0x133) >> 2 & 1) != 0) &&
     (*(int *)(_UIInput_TypeInfo_12d6450 + 0xe0) == 0)) {
    native_sub_4327ec();
  }
  iVar8 = *(int *)(*(long *)(_UIInput_TypeInfo_12d6450 + 0xb8) + 0x10);
  plVar16 = param_1 + 0x1b;
  lVar18 = *plVar16;
  iVar9 = *(int *)((long)param_1 + 0xc4);
  if (((*(byte *)(_UnityEngine_Object_TypeInfo_12d54e0 + 0x133) >> 2 & 1) != 0) &&
     (*(int *)(_UnityEngine_Object_TypeInfo_12d54e0 + 0xe0) == 0)) {
    native_sub_4327ec();
  }
  uVar11 = native_UnityEngine_Object__op_Equality_8e9a3c(lVar18,0,0);
  if ((uVar11 & 1) != 0) {
    lVar18 = native_sub_432808(_UnityEngine_Texture2D_TypeInfo_12d61f0);
    native_UnityEngine_Texture2D___ctor_76f4a4(lVar18,2,2,5,0,0);
    *plVar16 = lVar18;
    native_sub_4326e0(plVar16,lVar18);
    iVar22 = 0;
    do {
      iVar17 = 0;
      do {
        lVar18 = *plVar16;
        native_UnityEngine_Color__get_white_8d9e10(0);
        if (lVar18 == 0) goto LAB_009f2784;
        native_UnityEngine_Texture2D__SetPixel_76f52c(lVar18,iVar17,iVar22,0);
        bVar3 = iVar17 == 0;
        iVar17 = 1;
      } while (bVar3);
      bVar3 = iVar22 == 0;
      iVar22 = 1;
    } while (bVar3);
    if (*plVar16 == 0) goto LAB_009f2784;
    native_UnityEngine_Texture2D__Apply_76f804(*plVar16,0);
  }
  iVar22 = (int)lVar23 - iVar8;
  iVar9 = iVar9 - iVar8;
  if (iVar22 != iVar9) {
    plVar24 = param_1 + 0x19;
    lVar23 = *plVar24;
    if (((*(byte *)(_UnityEngine_Object_TypeInfo_12d54e0 + 0x133) >> 2 & 1) != 0) &&
       (*(int *)(_UnityEngine_Object_TypeInfo_12d54e0 + 0xe0) == 0)) {
      native_sub_4327ec();
    }
    uVar11 = native_UnityEngine_Object__op_Equality_8e9a3c(lVar23,0,0);
    if ((uVar11 & 1) == 0) {
      plVar15 = (long *)*plVar26;
      if (plVar15 == (long *)0x0) goto LAB_009f2784;
      plVar25 = (long *)*plVar24;
      uVar10 = (**(code **)(*plVar15 + 0x2a8))(plVar15,*(undefined8 *)(*plVar15 + 0x2b0));
      if (plVar25 == (long *)0x0) goto LAB_009f2784;
      (**(code **)(*plVar25 + 0x2b8))(plVar25,uVar10,*(undefined8 *)(*plVar25 + 0x2c0));
      plVar15 = (long *)*plVar24;
      if (plVar15 == (long *)0x0) goto LAB_009f2784;
      (**(code **)(*plVar15 + 0x338))(plVar15,*plVar16,*(undefined8 *)(*plVar15 + 0x340));
      plVar15 = (long *)*plVar24;
      if (plVar15 == (long *)0x0) goto LAB_009f2784;
      (**(code **)(*plVar15 + 0x378))(plVar15,*(undefined8 *)(*plVar15 + 0x380));
      if (*plVar24 == 0) goto LAB_009f2784;
      native_UnityEngine_Behaviour__set_enabled_8d7b0c(*plVar24,1,0);
    }
    else {
      if (*plVar26 == 0) goto LAB_009f2784;
      uVar12 = native_UIRect__get_cachedGameObject_c2d1c0(*plVar26,0);
      if (((*(byte *)(_NGUITools_TypeInfo_12d53c8 + 0x133) >> 2 & 1) != 0) &&
         (*(int *)(_NGUITools_TypeInfo_12d53c8 + 0xe0) == 0)) {
        native_sub_4327ec(_NGUITools_TypeInfo_12d53c8);
      }
      lVar23 = native_NGUITools__AddWidget_object__4a528c
                         (uVar12,0x7fffffff,_Method_NGUITools_AddWidget_UITexture____12e56e8);
      *plVar24 = lVar23;
      native_sub_4326e0(plVar24,lVar23);
      if (*plVar24 == 0) goto LAB_009f2784;
      native_UnityEngine_Object__set_name_8e9c08(*plVar24,_StringLiteral_Input_Highlight_12ee898,0);
      plVar15 = (long *)*plVar24;
      if (plVar15 == (long *)0x0) goto LAB_009f2784;
      (**(code **)(*plVar15 + 0x338))(plVar15,*plVar16,*(undefined8 *)(*plVar15 + 0x340));
      if (*plVar24 == 0) goto LAB_009f2784;
      *(undefined1 *)(*plVar24 + 0x100) = 0;
      plVar15 = (long *)*plVar26;
      if (plVar15 == (long *)0x0) goto LAB_009f2784;
      plVar25 = (long *)*plVar24;
      uVar10 = (**(code **)(*plVar15 + 0x2a8))(plVar15,*(undefined8 *)(*plVar15 + 0x2b0));
      if (plVar25 == (long *)0x0) goto LAB_009f2784;
      (**(code **)(*plVar25 + 0x2b8))(plVar25,uVar10,*(undefined8 *)(*plVar25 + 0x2c0));
      if (*plVar26 == 0) goto LAB_009f2784;
      lVar23 = *plVar24;
      uVar12 = native_UIRect__get_cachedTransform_c27c58(*plVar26,0);
      if (lVar23 == 0) goto LAB_009f2784;
      native_UIRect__SetAnchor_c2ea60(lVar23,uVar12,0);
    }
  }
  plVar24 = param_1 + 0x1a;
  lVar23 = *plVar24;
  if (((*(byte *)(_UnityEngine_Object_TypeInfo_12d54e0 + 0x133) >> 2 & 1) != 0) &&
     (*(int *)(_UnityEngine_Object_TypeInfo_12d54e0 + 0xe0) == 0)) {
    native_sub_4327ec();
  }
  uVar11 = native_UnityEngine_Object__op_Equality_8e9a3c(lVar23,0,0);
  if ((uVar11 & 1) == 0) {
    plVar15 = (long *)*plVar26;
    if (plVar15 == (long *)0x0) goto LAB_009f2784;
    plVar25 = (long *)*plVar24;
    uVar10 = (**(code **)(*plVar15 + 0x2a8))(plVar15,*(undefined8 *)(*plVar15 + 0x2b0));
    if (plVar25 == (long *)0x0) goto LAB_009f2784;
    (**(code **)(*plVar25 + 0x2b8))(plVar25,uVar10,*(undefined8 *)(*plVar25 + 0x2c0));
    plVar15 = (long *)*plVar24;
    if (plVar15 == (long *)0x0) goto LAB_009f2784;
    (**(code **)(*plVar15 + 0x338))(plVar15,*plVar16,*(undefined8 *)(*plVar15 + 0x340));
    plVar16 = (long *)*plVar24;
    if (plVar16 == (long *)0x0) goto LAB_009f2784;
    (**(code **)(*plVar16 + 0x378))(plVar16,*(undefined8 *)(*plVar16 + 0x380));
    if (*plVar24 == 0) goto LAB_009f2784;
    native_UnityEngine_Behaviour__set_enabled_8d7b0c(*plVar24,1,0);
  }
  else {
    if (*plVar26 == 0) goto LAB_009f2784;
    uVar12 = native_UIRect__get_cachedGameObject_c2d1c0(*plVar26,0);
    if (((*(byte *)(_NGUITools_TypeInfo_12d53c8 + 0x133) >> 2 & 1) != 0) &&
       (*(int *)(_NGUITools_TypeInfo_12d53c8 + 0xe0) == 0)) {
      native_sub_4327ec(_NGUITools_TypeInfo_12d53c8);
    }
    lVar23 = native_NGUITools__AddWidget_object__4a528c
                       (uVar12,0x7fffffff,_Method_NGUITools_AddWidget_UITexture____12e56e8);
    *plVar24 = lVar23;
    native_sub_4326e0(plVar24,lVar23);
    if (*plVar24 == 0) goto LAB_009f2784;
    native_UnityEngine_Object__set_name_8e9c08(*plVar24,_StringLiteral_Input_Caret_12ee890,0);
    plVar15 = (long *)*plVar24;
    if (plVar15 == (long *)0x0) goto LAB_009f2784;
    (**(code **)(*plVar15 + 0x338))(plVar15,*plVar16,*(undefined8 *)(*plVar15 + 0x340));
    if (*plVar24 == 0) goto LAB_009f2784;
    *(undefined1 *)(*plVar24 + 0x100) = 0;
    plVar16 = (long *)*plVar26;
    if (plVar16 == (long *)0x0) goto LAB_009f2784;
    plVar15 = (long *)*plVar24;
    uVar10 = (**(code **)(*plVar16 + 0x2a8))(plVar16,*(undefined8 *)(*plVar16 + 0x2b0));
    if (plVar15 == (long *)0x0) goto LAB_009f2784;
    (**(code **)(*plVar15 + 0x2b8))(plVar15,uVar10,*(undefined8 *)(*plVar15 + 0x2c0));
    if (*plVar26 == 0) goto LAB_009f2784;
    lVar23 = *plVar24;
    uVar12 = native_UIRect__get_cachedTransform_c27c58(*plVar26,0);
    if (lVar23 == 0) goto LAB_009f2784;
    native_UIRect__SetAnchor_c2ea60(lVar23,uVar12,0);
  }
  if (*plVar24 == 0) goto LAB_009f2784;
  lVar23 = *plVar26;
  uVar12 = *(undefined8 *)(*plVar24 + 0xf8);
  if (iVar22 == iVar9) {
    if (lVar23 == 0) goto LAB_009f2784;
    native_UILabel__PrintOverlay_aec838
              ((int)param_1[0xb],*(undefined4 *)((long)param_1 + 0x5c),(int)param_1[0xc],
               *(undefined4 *)((long)param_1 + 100),(int)param_1[0xd],
               *(undefined4 *)((long)param_1 + 0x6c),(int)param_1[0xe],
               *(undefined4 *)((long)param_1 + 0x74),lVar23,iVar22,iVar22,uVar12,0,0);
    lVar23 = param_1[0x19];
    if (((*(byte *)(_UnityEngine_Object_TypeInfo_12d54e0 + 0x133) >> 2 & 1) != 0) &&
       (*(int *)(_UnityEngine_Object_TypeInfo_12d54e0 + 0xe0) == 0)) {
      native_sub_4327ec();
    }
    uVar11 = native_UnityEngine_Object__op_Inequality_8d76fc(lVar23,0,0);
    if ((uVar11 & 1) != 0) {
      lVar23 = param_1[0x19];
      if (lVar23 == 0) goto LAB_009f2784;
      uVar5 = 0;
      goto LAB_009f25b0;
    }
  }
  else {
    if ((param_1[0x19] == 0) || (lVar23 == 0)) goto LAB_009f2784;
    native_UILabel__PrintOverlay_aec838
              ((int)param_1[0xb],*(undefined4 *)((long)param_1 + 0x5c),(int)param_1[0xc],
               *(undefined4 *)((long)param_1 + 100),(int)param_1[0xd],
               *(undefined4 *)((long)param_1 + 0x6c),(int)param_1[0xe],
               *(undefined4 *)((long)param_1 + 0x74),lVar23,iVar22,iVar9,uVar12,
               *(undefined8 *)(param_1[0x19] + 0xf8),0);
    lVar23 = param_1[0x19];
    if ((lVar23 == 0) || (*(long *)(lVar23 + 0xf8) == 0)) goto LAB_009f2784;
    uVar5 = native_UIGeometry__get_hasVertices_9ef420();
    uVar5 = uVar5 & 1;
LAB_009f25b0:
    native_UnityEngine_Behaviour__set_enabled_8d7b0c(lVar23,uVar5,0);
  }
  fVar27 = (float)native_RealTime__get_time_72d024(0);
  *(float *)(param_1 + 0x1c) = fVar27 + 0.5;
  if (param_1[3] != 0) {
    *(undefined4 *)((long)param_1 + 0xe4) = *(undefined4 *)(param_1[3] + 0x8c);
    return;
  }
LAB_009f2784:
                    /* WARNING: Subroutine does not return */
  native_sub_432810();
}



/* UIInput$$get_defaultColor @ 0x9f2788
 * UnityEngine_Color_o UIInput__get_defaultColor (UIInput_o* __this, const MethodInfo* method); */

/* UIInput$$get_defaultColor
   UnityEngine_Color_o UIInput__get_defaultColor (UIInput_o* __this, const MethodInfo* method); */

undefined4 native_UIInput__get_defaultColor_9f2788(long param_1)

{
  if (*(char *)(param_1 + 0xb4) != '\0') {
    native_UIInput__Init_9f1988(param_1);
  }
  return *(undefined4 *)(param_1 + 0xa0);
}



/* UIInput$$set_defaultColor @ 0x9f27bc
 * void UIInput__set_defaultColor (UIInput_o* __this, UnityEngine_Color_o value, const MethodInfo* method); */

/* UIInput$$set_defaultColor
   void UIInput__set_defaultColor (UIInput_o* __this, UnityEngine_Color_o value, const MethodInfo*
   method); */

void native_UIInput__set_defaultColor_9f27bc
               (undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
               long param_5)

{
  ulong uVar1;
  long *plVar2;
  float fVar3;
  float fVar4;
  
  *(int *)(param_5 + 0xa0) = (int)param_1;
  *(int *)(param_5 + 0xa4) = (int)param_2;
  *(int *)(param_5 + 0xa8) = (int)param_3;
  fVar4 = (float)param_4;
  *(float *)(param_5 + 0xac) = fVar4;
  uVar1 = native_UIInput__get_isSelected_9f283c();
  if ((uVar1 & 1) != 0) {
    return;
  }
  plVar2 = *(long **)(param_5 + 0x18);
  if (plVar2 != (long *)0x0) {
    uVar1 = native_UnityEngine_Color__op_Inequality_8d9d34
                      ((int)plVar2[0x12],*(undefined4 *)((long)plVar2 + 0x94),(int)plVar2[0x13],
                       *(undefined4 *)((long)plVar2 + 0x9c),param_1,param_2,param_3,param_4,0,0);
    if ((uVar1 & 1) != 0) {
      fVar3 = *(float *)((long)plVar2 + 0x9c);
      *(int *)(plVar2 + 0x12) = (int)param_1;
      *(int *)((long)plVar2 + 0x94) = (int)param_2;
      *(int *)(plVar2 + 0x13) = (int)param_3;
      *(float *)((long)plVar2 + 0x9c) = fVar4;
                    /* WARNING: Could not recover jumptable at 0x00947b5c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
      (**(code **)(*plVar2 + 0x1f8))(plVar2,fVar3 != fVar4,*(undefined8 *)(*plVar2 + 0x200));
      return;
    }
    return;
  }
                    /* WARNING: Subroutine does not return */
  native_sub_432810();
}



/* UIInput$$get_inputShouldBeHidden @ 0x9f28e0
 * bool UIInput__get_inputShouldBeHidden (UIInput_o* __this, const MethodInfo* method); */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* UIInput$$get_inputShouldBeHidden
   bool UIInput__get_inputShouldBeHidden (UIInput_o* __this, const MethodInfo* method); */

bool native_UIInput__get_inputShouldBeHidden_9f28e0(long param_1)

{
  ulong uVar1;
  undefined8 uVar2;
  
  if ((bRam0000000001341977 & 1) == 0) {
    native_sub_43273c(&UnityEngine_Object_TypeInfo_12d54e0);
    bRam0000000001341977 = 1;
  }
  if (*(char *)(param_1 + 0x2c) != '\0') {
    uVar2 = *(undefined8 *)(param_1 + 0x18);
    if (((*(byte *)(_UnityEngine_Object_TypeInfo_12d54e0 + 0x133) >> 2 & 1) != 0) &&
       (*(int *)(_UnityEngine_Object_TypeInfo_12d54e0 + 0xe0) == 0)) {
      native_sub_4327ec();
    }
    uVar1 = native_UnityEngine_Object__op_Inequality_8d76fc(uVar2,0,0);
    if ((uVar1 & 1) != 0) {
      if (*(long *)(param_1 + 0x18) == 0) {
                    /* WARNING: Subroutine does not return */
        native_sub_432810();
      }
      uVar1 = native_UILabel__get_multiLine_ae8998(*(long *)(param_1 + 0x18),0);
      if ((uVar1 & 1) == 0) {
        return *(int *)(param_1 + 0x20) != 2;
      }
    }
  }
  return false;
}



/* UIInput$$get_text @ 0x9f2988
 * System_String_o* UIInput__get_text (UIInput_o* __this, const MethodInfo* method); */

/* UIInput$$get_text
   System_String_o* UIInput__get_text (UIInput_o* __this, const MethodInfo* method); */

undefined8 native_UIInput__get_text_9f2988(long param_1)

{
  if (*(char *)(param_1 + 0xb4) != '\0') {
    native_UIInput__Init_9f1988(param_1);
  }
  return *(undefined8 *)(param_1 + 0x90);
}



/* UIInput$$set_text @ 0x9f29e8
 * void UIInput__set_text (UIInput_o* __this, System_String_o* value, const MethodInfo* method); */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* UIInput$$set_text
   void UIInput__set_text (UIInput_o* __this, System_String_o* value, const MethodInfo* method); */

void native_UIInput__set_text_9f29e8(long param_1,undefined8 param_2)

{
  ulong *puVar1;
  undefined4 uVar2;
  char cVar3;
  bool bVar4;
  ulong uVar5;
  long lVar6;
  long lVar7;
  undefined8 uVar8;
  undefined8 *puVar9;
  long *plVar10;
  
  if ((bRam0000000001341978 & 1) == 0) {
    native_sub_43273c(&UIInput_TypeInfo_12d6450);
    bRam0000000001341978 = 1;
  }
  if ((*(char *)(param_1 + 0xb4) != '\0') &&
     (native_UIInput__Init_9f1988(param_1), *(char *)(param_1 + 0xb4) != '\0')) {
    native_UIInput__Init_9f1988(param_1);
  }
  puVar9 = (undefined8 *)(param_1 + 0x90);
  uVar5 = native_System_String__op_Equality_afc18c(param_2,*puVar9,0);
  if ((uVar5 & 1) == 0) {
    if (((*(byte *)(_UIInput_TypeInfo_12d6450 + 0x133) >> 2 & 1) != 0) &&
       (*(int *)(_UIInput_TypeInfo_12d6450 + 0xe0) == 0)) {
      native_sub_4327ec();
    }
    *(undefined4 *)(*(long *)(_UIInput_TypeInfo_12d6450 + 0xb8) + 0x10) = 0;
    lVar6 = native_UIInput__Validate_9f2be8(param_1,param_2);
    uVar5 = native_UIInput__get_isSelected_9f283c(param_1);
    if ((uVar5 & 1) != 0) {
      if (((*(byte *)(_UIInput_TypeInfo_12d6450 + 0x133) >> 2 & 1) != 0) &&
         (*(int *)(_UIInput_TypeInfo_12d6450 + 0xe0) == 0)) {
        native_sub_4327ec();
      }
      if (*(long *)(*(long *)(_UIInput_TypeInfo_12d6450 + 0xb8) + 0x20) != 0) {
        plVar10 = (long *)(param_1 + 0xe8);
        uVar5 = native_System_String__op_Inequality_afbbb4(*plVar10,lVar6,0);
        if ((uVar5 & 1) != 0) {
          if (((*(byte *)(_UIInput_TypeInfo_12d6450 + 0x133) >> 2 & 1) != 0) &&
             (*(int *)(_UIInput_TypeInfo_12d6450 + 0xe0) == 0)) {
            native_sub_4327ec();
          }
          lVar7 = *(long *)(*(long *)(_UIInput_TypeInfo_12d6450 + 0xb8) + 0x20);
          if (lVar7 == 0) goto LAB_009f2be4;
          native_UnityEngine_TouchScreenKeyboard__set_text_77103c(lVar7,lVar6,0);
          *plVar10 = lVar6;
          native_sub_4326e0(plVar10,lVar6);
        }
      }
    }
    uVar5 = native_System_String__op_Inequality_afbbb4(*puVar9,lVar6,0);
    if ((uVar5 & 1) != 0) {
      *(long *)(param_1 + 0x90) = lVar6;
      native_sub_4326e0(puVar9,lVar6);
      *(undefined1 *)(param_1 + 0xbc) = 0;
      uVar5 = native_UIInput__get_isSelected_9f283c(param_1);
      if ((uVar5 & 1) == 0) {
        if (*(char *)(param_1 + 0xf8) != '\0') {
          native_UIInput__SaveToPlayerPrefs_9f2de4(param_1,lVar6);
        }
      }
      else {
        uVar5 = native_System_String__IsNullOrEmpty_b09430(lVar6,0);
        if ((uVar5 & 1) == 0) {
          if (lVar6 == 0) {
LAB_009f2be4:
                    /* WARNING: Subroutine does not return */
            native_sub_432810();
          }
          uVar2 = *(undefined4 *)(lVar6 + 0x10);
          *(undefined4 *)(param_1 + 0xc0) = uVar2;
          *(undefined4 *)(param_1 + 0xc4) = uVar2;
        }
        else {
          *(undefined8 *)(param_1 + 0xc0) = 0;
        }
      }
      native_UIInput__UpdateLabel_9f1b24(param_1);
      if ((bRam0000000001341996 & 1) == 0) {
        native_sub_43273c(&EventDelegate_TypeInfo_12d4590);
        native_sub_43273c(&UnityEngine_Object_TypeInfo_12d54e0);
        native_sub_43273c(&UIInput_TypeInfo_12d6450);
        bRam0000000001341996 = 1;
      }
      if (((*(byte *)(_UIInput_TypeInfo_12d6450 + 0x133) >> 2 & 1) != 0) &&
         (*(int *)(_UIInput_TypeInfo_12d6450 + 0xe0) == 0)) {
        native_sub_4327ec();
      }
      uVar8 = **(undefined8 **)(_UIInput_TypeInfo_12d6450 + 0xb8);
      if (((*(byte *)(_UnityEngine_Object_TypeInfo_12d54e0 + 0x133) >> 2 & 1) != 0) &&
         (*(int *)(_UnityEngine_Object_TypeInfo_12d54e0 + 0xe0) == 0)) {
        native_sub_4327ec(_UnityEngine_Object_TypeInfo_12d54e0);
      }
      uVar5 = native_UnityEngine_Object__op_Equality_8e9a3c(uVar8,0,0);
      if ((uVar5 & 1) != 0) {
        uVar8 = *(undefined8 *)(param_1 + 0x80);
        if (((*(byte *)(_EventDelegate_TypeInfo_12d4590 + 0x133) >> 2 & 1) != 0) &&
           (*(int *)(_EventDelegate_TypeInfo_12d4590 + 0xe0) == 0)) {
          native_sub_4327ec();
        }
        uVar5 = native_EventDelegate__IsValid_deef08(uVar8,0);
        if ((uVar5 & 1) != 0) {
          if (((*(byte *)(_UIInput_TypeInfo_12d6450 + 0x133) >> 2 & 1) != 0) &&
             (*(int *)(_UIInput_TypeInfo_12d6450 + 0xe0) == 0)) {
            native_sub_4327ec();
          }
          plVar10 = *(long **)(_UIInput_TypeInfo_12d6450 + 0xb8);
          *plVar10 = param_1;
          native_sub_4326e0(plVar10,param_1);
          uVar8 = *(undefined8 *)(param_1 + 0x80);
          if (((*(byte *)(_EventDelegate_TypeInfo_12d4590 + 0x133) >> 2 & 1) != 0) &&
             (*(int *)(_EventDelegate_TypeInfo_12d4590 + 0xe0) == 0)) {
            native_sub_4327ec();
          }
          native_EventDelegate__Execute_deecbc(uVar8,0);
          puVar9 = *(undefined8 **)(_UIInput_TypeInfo_12d6450 + 0xb8);
          *puVar9 = 0;
          if (iRam0000000001345318 != 0) {
            puVar1 = (ulong *)(((ulong)puVar9 >> 0x12 & 0x7fff) * 8 + 0x138ecd8);
            do {
              cVar3 = '\x01';
              bVar4 = (bool)ExclusiveMonitorPass(puVar1,0x10);
              if (bVar4) {
                *puVar1 = *puVar1 | 1L << ((ulong)puVar9 >> 0xc & 0x3f);
                cVar3 = ExclusiveMonitorsStatus();
              }
            } while (cVar3 != '\0');
          }
          return;
        }
      }
      return;
    }
  }
  return;
}



/* UIInput$$get_value @ 0x9f29b8
 * System_String_o* UIInput__get_value (UIInput_o* __this, const MethodInfo* method); */

/* UIInput$$get_value
   System_String_o* UIInput__get_value (UIInput_o* __this, const MethodInfo* method); */

undefined8 native_UIInput__get_value_9f29b8(long param_1)

{
  if (*(char *)(param_1 + 0xb4) != '\0') {
    native_UIInput__Init_9f1988(param_1);
  }
  return *(undefined8 *)(param_1 + 0x90);
}



/* UIInput$$set_value @ 0x9f29f0
 * void UIInput__set_value (UIInput_o* __this, System_String_o* value, const MethodInfo* method); */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* UIInput$$set_value
   void UIInput__set_value (UIInput_o* __this, System_String_o* value, const MethodInfo* method); */

void native_UIInput__set_value_9f29f0(long param_1,undefined8 param_2)

{
  ulong *puVar1;
  undefined4 uVar2;
  char cVar3;
  bool bVar4;
  ulong uVar5;
  long lVar6;
  long lVar7;
  undefined8 uVar8;
  undefined8 *puVar9;
  long *plVar10;
  
  if ((bRam0000000001341978 & 1) == 0) {
    native_sub_43273c(&UIInput_TypeInfo_12d6450);
    bRam0000000001341978 = 1;
  }
  if ((*(char *)(param_1 + 0xb4) != '\0') &&
     (native_UIInput__Init_9f1988(param_1), *(char *)(param_1 + 0xb4) != '\0')) {
    native_UIInput__Init_9f1988(param_1);
  }
  puVar9 = (undefined8 *)(param_1 + 0x90);
  uVar5 = native_System_String__op_Equality_afc18c(param_2,*puVar9,0);
  if ((uVar5 & 1) == 0) {
    if (((*(byte *)(_UIInput_TypeInfo_12d6450 + 0x133) >> 2 & 1) != 0) &&
       (*(int *)(_UIInput_TypeInfo_12d6450 + 0xe0) == 0)) {
      native_sub_4327ec();
    }
    *(undefined4 *)(*(long *)(_UIInput_TypeInfo_12d6450 + 0xb8) + 0x10) = 0;
    lVar6 = native_UIInput__Validate_9f2be8(param_1,param_2);
    uVar5 = native_UIInput__get_isSelected_9f283c(param_1);
    if ((uVar5 & 1) != 0) {
      if (((*(byte *)(_UIInput_TypeInfo_12d6450 + 0x133) >> 2 & 1) != 0) &&
         (*(int *)(_UIInput_TypeInfo_12d6450 + 0xe0) == 0)) {
        native_sub_4327ec();
      }
      if (*(long *)(*(long *)(_UIInput_TypeInfo_12d6450 + 0xb8) + 0x20) != 0) {
        plVar10 = (long *)(param_1 + 0xe8);
        uVar5 = native_System_String__op_Inequality_afbbb4(*plVar10,lVar6,0);
        if ((uVar5 & 1) != 0) {
          if (((*(byte *)(_UIInput_TypeInfo_12d6450 + 0x133) >> 2 & 1) != 0) &&
             (*(int *)(_UIInput_TypeInfo_12d6450 + 0xe0) == 0)) {
            native_sub_4327ec();
          }
          lVar7 = *(long *)(*(long *)(_UIInput_TypeInfo_12d6450 + 0xb8) + 0x20);
          if (lVar7 == 0) goto LAB_009f2be4;
          native_UnityEngine_TouchScreenKeyboard__set_text_77103c(lVar7,lVar6,0);
          *plVar10 = lVar6;
          native_sub_4326e0(plVar10,lVar6);
        }
      }
    }
    uVar5 = native_System_String__op_Inequality_afbbb4(*puVar9,lVar6,0);
    if ((uVar5 & 1) != 0) {
      *(long *)(param_1 + 0x90) = lVar6;
      native_sub_4326e0(puVar9,lVar6);
      *(undefined1 *)(param_1 + 0xbc) = 0;
      uVar5 = native_UIInput__get_isSelected_9f283c(param_1);
      if ((uVar5 & 1) == 0) {
        if (*(char *)(param_1 + 0xf8) != '\0') {
          native_UIInput__SaveToPlayerPrefs_9f2de4(param_1,lVar6);
        }
      }
      else {
        uVar5 = native_System_String__IsNullOrEmpty_b09430(lVar6,0);
        if ((uVar5 & 1) == 0) {
          if (lVar6 == 0) {
LAB_009f2be4:
                    /* WARNING: Subroutine does not return */
            native_sub_432810();
          }
          uVar2 = *(undefined4 *)(lVar6 + 0x10);
          *(undefined4 *)(param_1 + 0xc0) = uVar2;
          *(undefined4 *)(param_1 + 0xc4) = uVar2;
        }
        else {
          *(undefined8 *)(param_1 + 0xc0) = 0;
        }
      }
      native_UIInput__UpdateLabel_9f1b24(param_1);
      if ((bRam0000000001341996 & 1) == 0) {
        native_sub_43273c(&EventDelegate_TypeInfo_12d4590);
        native_sub_43273c(&UnityEngine_Object_TypeInfo_12d54e0);
        native_sub_43273c(&UIInput_TypeInfo_12d6450);
        bRam0000000001341996 = 1;
      }
      if (((*(byte *)(_UIInput_TypeInfo_12d6450 + 0x133) >> 2 & 1) != 0) &&
         (*(int *)(_UIInput_TypeInfo_12d6450 + 0xe0) == 0)) {
        native_sub_4327ec();
      }
      uVar8 = **(undefined8 **)(_UIInput_TypeInfo_12d6450 + 0xb8);
      if (((*(byte *)(_UnityEngine_Object_TypeInfo_12d54e0 + 0x133) >> 2 & 1) != 0) &&
         (*(int *)(_UnityEngine_Object_TypeInfo_12d54e0 + 0xe0) == 0)) {
        native_sub_4327ec(_UnityEngine_Object_TypeInfo_12d54e0);
      }
      uVar5 = native_UnityEngine_Object__op_Equality_8e9a3c(uVar8,0,0);
      if ((uVar5 & 1) != 0) {
        uVar8 = *(undefined8 *)(param_1 + 0x80);
        if (((*(byte *)(_EventDelegate_TypeInfo_12d4590 + 0x133) >> 2 & 1) != 0) &&
           (*(int *)(_EventDelegate_TypeInfo_12d4590 + 0xe0) == 0)) {
          native_sub_4327ec();
        }
        uVar5 = native_EventDelegate__IsValid_deef08(uVar8,0);
        if ((uVar5 & 1) != 0) {
          if (((*(byte *)(_UIInput_TypeInfo_12d6450 + 0x133) >> 2 & 1) != 0) &&
             (*(int *)(_UIInput_TypeInfo_12d6450 + 0xe0) == 0)) {
            native_sub_4327ec();
          }
          plVar10 = *(long **)(_UIInput_TypeInfo_12d6450 + 0xb8);
          *plVar10 = param_1;
          native_sub_4326e0(plVar10,param_1);
          uVar8 = *(undefined8 *)(param_1 + 0x80);
          if (((*(byte *)(_EventDelegate_TypeInfo_12d4590 + 0x133) >> 2 & 1) != 0) &&
             (*(int *)(_EventDelegate_TypeInfo_12d4590 + 0xe0) == 0)) {
            native_sub_4327ec();
          }
          native_EventDelegate__Execute_deecbc(uVar8,0);
          puVar9 = *(undefined8 **)(_UIInput_TypeInfo_12d6450 + 0xb8);
          *puVar9 = 0;
          if (iRam0000000001345318 != 0) {
            puVar1 = (ulong *)(((ulong)puVar9 >> 0x12 & 0x7fff) * 8 + 0x138ecd8);
            do {
              cVar3 = '\x01';
              bVar4 = (bool)ExclusiveMonitorPass(puVar1,0x10);
              if (bVar4) {
                *puVar1 = *puVar1 | 1L << ((ulong)puVar9 >> 0xc & 0x3f);
                cVar3 = ExclusiveMonitorsStatus();
              }
            } while (cVar3 != '\0');
          }
          return;
        }
      }
      return;
    }
  }
  return;
}



/* UIInput$$Set @ 0x9f29f8
 * void UIInput__Set (UIInput_o* __this, System_String_o* value, bool notify, const MethodInfo* method); */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* UIInput$$Set
   void UIInput__Set (UIInput_o* __this, System_String_o* value, bool notify, const MethodInfo*
   method); */

void native_UIInput__Set_9f29f8(long param_1,undefined8 param_2,ulong param_3)

{
  ulong *puVar1;
  undefined4 uVar2;
  char cVar3;
  bool bVar4;
  ulong uVar5;
  long lVar6;
  long lVar7;
  undefined8 uVar8;
  undefined8 *puVar9;
  long *plVar10;
  
  if ((bRam0000000001341978 & 1) == 0) {
    native_sub_43273c(&UIInput_TypeInfo_12d6450);
    bRam0000000001341978 = 1;
  }
  if (*(char *)(param_1 + 0xb4) != '\0') {
    native_UIInput__Init_9f1988(param_1);
    if (*(char *)(param_1 + 0xb4) != '\0') {
      native_UIInput__Init_9f1988(param_1);
    }
  }
  puVar9 = (undefined8 *)(param_1 + 0x90);
  uVar5 = native_System_String__op_Equality_afc18c(param_2,*puVar9,0);
  if ((uVar5 & 1) == 0) {
    if (((*(byte *)(_UIInput_TypeInfo_12d6450 + 0x133) >> 2 & 1) != 0) &&
       (*(int *)(_UIInput_TypeInfo_12d6450 + 0xe0) == 0)) {
      native_sub_4327ec();
    }
    *(undefined4 *)(*(long *)(_UIInput_TypeInfo_12d6450 + 0xb8) + 0x10) = 0;
    lVar6 = native_UIInput__Validate_9f2be8(param_1,param_2);
    uVar5 = native_UIInput__get_isSelected_9f283c(param_1);
    if ((uVar5 & 1) != 0) {
      if (((*(byte *)(_UIInput_TypeInfo_12d6450 + 0x133) >> 2 & 1) != 0) &&
         (*(int *)(_UIInput_TypeInfo_12d6450 + 0xe0) == 0)) {
        native_sub_4327ec();
      }
      if (*(long *)(*(long *)(_UIInput_TypeInfo_12d6450 + 0xb8) + 0x20) != 0) {
        plVar10 = (long *)(param_1 + 0xe8);
        uVar5 = native_System_String__op_Inequality_afbbb4(*plVar10,lVar6,0);
        if ((uVar5 & 1) != 0) {
          if (((*(byte *)(_UIInput_TypeInfo_12d6450 + 0x133) >> 2 & 1) != 0) &&
             (*(int *)(_UIInput_TypeInfo_12d6450 + 0xe0) == 0)) {
            native_sub_4327ec();
          }
          lVar7 = *(long *)(*(long *)(_UIInput_TypeInfo_12d6450 + 0xb8) + 0x20);
          if (lVar7 == 0) goto LAB_009f2be4;
          native_UnityEngine_TouchScreenKeyboard__set_text_77103c(lVar7,lVar6,0);
          *plVar10 = lVar6;
          native_sub_4326e0(plVar10,lVar6);
        }
      }
    }
    uVar5 = native_System_String__op_Inequality_afbbb4(*puVar9,lVar6,0);
    if ((uVar5 & 1) != 0) {
      *(long *)(param_1 + 0x90) = lVar6;
      native_sub_4326e0(puVar9,lVar6);
      *(undefined1 *)(param_1 + 0xbc) = 0;
      uVar5 = native_UIInput__get_isSelected_9f283c(param_1);
      if ((uVar5 & 1) == 0) {
        if (*(char *)(param_1 + 0xf8) != '\0') {
          native_UIInput__SaveToPlayerPrefs_9f2de4(param_1,lVar6);
        }
      }
      else {
        uVar5 = native_System_String__IsNullOrEmpty_b09430(lVar6,0);
        if ((uVar5 & 1) == 0) {
          if (lVar6 == 0) {
LAB_009f2be4:
                    /* WARNING: Subroutine does not return */
            native_sub_432810();
          }
          uVar2 = *(undefined4 *)(lVar6 + 0x10);
          *(undefined4 *)(param_1 + 0xc0) = uVar2;
          *(undefined4 *)(param_1 + 0xc4) = uVar2;
        }
        else {
          *(undefined8 *)(param_1 + 0xc0) = 0;
        }
      }
      native_UIInput__UpdateLabel_9f1b24(param_1);
      if ((param_3 & 1) != 0) {
        if ((bRam0000000001341996 & 1) == 0) {
          native_sub_43273c(&EventDelegate_TypeInfo_12d4590);
          native_sub_43273c(&UnityEngine_Object_TypeInfo_12d54e0);
          native_sub_43273c(&UIInput_TypeInfo_12d6450);
          bRam0000000001341996 = 1;
        }
        if (((*(byte *)(_UIInput_TypeInfo_12d6450 + 0x133) >> 2 & 1) != 0) &&
           (*(int *)(_UIInput_TypeInfo_12d6450 + 0xe0) == 0)) {
          native_sub_4327ec();
        }
        uVar8 = **(undefined8 **)(_UIInput_TypeInfo_12d6450 + 0xb8);
        if (((*(byte *)(_UnityEngine_Object_TypeInfo_12d54e0 + 0x133) >> 2 & 1) != 0) &&
           (*(int *)(_UnityEngine_Object_TypeInfo_12d54e0 + 0xe0) == 0)) {
          native_sub_4327ec(_UnityEngine_Object_TypeInfo_12d54e0);
        }
        uVar5 = native_UnityEngine_Object__op_Equality_8e9a3c(uVar8,0,0);
        if ((uVar5 & 1) != 0) {
          uVar8 = *(undefined8 *)(param_1 + 0x80);
          if (((*(byte *)(_EventDelegate_TypeInfo_12d4590 + 0x133) >> 2 & 1) != 0) &&
             (*(int *)(_EventDelegate_TypeInfo_12d4590 + 0xe0) == 0)) {
            native_sub_4327ec();
          }
          uVar5 = native_EventDelegate__IsValid_deef08(uVar8,0);
          if ((uVar5 & 1) != 0) {
            if (((*(byte *)(_UIInput_TypeInfo_12d6450 + 0x133) >> 2 & 1) != 0) &&
               (*(int *)(_UIInput_TypeInfo_12d6450 + 0xe0) == 0)) {
              native_sub_4327ec();
            }
            plVar10 = *(long **)(_UIInput_TypeInfo_12d6450 + 0xb8);
            *plVar10 = param_1;
            native_sub_4326e0(plVar10,param_1);
            uVar8 = *(undefined8 *)(param_1 + 0x80);
            if (((*(byte *)(_EventDelegate_TypeInfo_12d4590 + 0x133) >> 2 & 1) != 0) &&
               (*(int *)(_EventDelegate_TypeInfo_12d4590 + 0xe0) == 0)) {
              native_sub_4327ec();
            }
            native_EventDelegate__Execute_deecbc(uVar8,0);
            puVar9 = *(undefined8 **)(_UIInput_TypeInfo_12d6450 + 0xb8);
            *puVar9 = 0;
            if (iRam0000000001345318 != 0) {
              puVar1 = (ulong *)(((ulong)puVar9 >> 0x12 & 0x7fff) * 8 + 0x138ecd8);
              do {
                cVar3 = '\x01';
                bVar4 = (bool)ExclusiveMonitorPass(puVar1,0x10);
                if (bVar4) {
                  *puVar1 = *puVar1 | 1L << ((ulong)puVar9 >> 0xc & 0x3f);
                  cVar3 = ExclusiveMonitorsStatus();
                }
              } while (cVar3 != '\0');
            }
            return;
          }
        }
        return;
      }
    }
  }
  return;
}



/* UIInput$$get_selected @ 0x9f2fbc
 * bool UIInput__get_selected (UIInput_o* __this, const MethodInfo* method); */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* UIInput$$get_selected
   bool UIInput__get_selected (UIInput_o* __this, const MethodInfo* method); */

byte native_UIInput__get_selected_9f2fbc(long param_1)

{
  byte bVar1;
  long lVar2;
  
  if ((bRam0000000001341979 & 1) == 0) {
    native_sub_43273c(&UnityEngine_Object_TypeInfo_12d54e0);
    native_sub_43273c(&UIInput_TypeInfo_12d6450);
    bRam0000000001341979 = 1;
  }
  if (((*(byte *)(_UIInput_TypeInfo_12d6450 + 0x133) >> 2 & 1) != 0) &&
     (*(int *)(_UIInput_TypeInfo_12d6450 + 0xe0) == 0)) {
    native_sub_4327ec();
  }
  lVar2 = *(long *)(*(long *)(_UIInput_TypeInfo_12d6450 + 0xb8) + 8);
  if (((*(byte *)(_UnityEngine_Object_TypeInfo_12d54e0 + 0x133) >> 2 & 1) != 0) &&
     (*(int *)(_UnityEngine_Object_TypeInfo_12d54e0 + 0xe0) == 0)) {
    native_sub_4327ec(_UnityEngine_Object_TypeInfo_12d54e0);
  }
  if ((bRam0000000001341083 & 1) == 0) {
    native_sub_43273c(&UnityEngine_Object_TypeInfo_12d54e0,param_1,0);
    bRam0000000001341083 = 1;
  }
  if (((*(byte *)(_UnityEngine_Object_TypeInfo_12d54e0 + 0x133) >> 2 & 1) != 0) &&
     (*(int *)(_UnityEngine_Object_TypeInfo_12d54e0 + 0xe0) == 0)) {
    native_sub_4327ec();
  }
  if ((bRam0000000001341033 & 1) == 0) {
    native_sub_43273c(&UnityEngine_Object_TypeInfo_12d54e0);
    bRam0000000001341033 = 1;
  }
  if (lVar2 == 0 && param_1 == 0) {
    bVar1 = 1;
  }
  else {
    if (param_1 == 0) {
      param_1 = lVar2;
      if (((*(byte *)(_UnityEngine_Object_TypeInfo_12d54e0 + 0x133) >> 2 & 1) != 0) &&
         (*(int *)(_UnityEngine_Object_TypeInfo_12d54e0 + 0xe0) == 0)) {
        native_sub_4327ec();
      }
    }
    else {
      if (lVar2 != 0) {
        bVar1 = lVar2 == param_1;
        goto code_r0x008e9b5c;
      }
      if (((*(byte *)(_UnityEngine_Object_TypeInfo_12d54e0 + 0x133) >> 2 & 1) != 0) &&
         (*(int *)(_UnityEngine_Object_TypeInfo_12d54e0 + 0xe0) == 0)) {
        native_sub_4327ec();
      }
    }
    bVar1 = native_UnityEngine_Object__IsNativeObjectAlive_8e9b70(param_1);
    bVar1 = bVar1 ^ 1;
  }
code_r0x008e9b5c:
  return bVar1 & 1;
}



/* UIInput$$set_selected @ 0x9f2fc0
 * void UIInput__set_selected (UIInput_o* __this, bool value, const MethodInfo* method); */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* UIInput$$set_selected
   void UIInput__set_selected (UIInput_o* __this, bool value, const MethodInfo* method); */

void native_UIInput__set_selected_9f2fc0(undefined8 param_1,uint param_2)

{
  ulong *puVar1;
  char cVar2;
  bool bVar3;
  byte bVar4;
  uint uVar5;
  long lVar6;
  ulong uVar7;
  long lVar8;
  long *plVar9;
  undefined8 *puVar10;
  long lVar11;
  undefined8 uVar12;
  long lVar13;
  undefined8 uVar14;
  uint uVar15;
  undefined1 auStack_48 [4];
  undefined1 auStack_44 [4];
  
  if ((bRam000000000134197a & 1) == 0) {
    native_sub_43273c(&UICamera_TypeInfo_12d6410);
    bRam000000000134197a = 1;
  }
  if ((param_2 & 1) == 0) {
    uVar7 = native_UIInput__get_isSelected_9f283c(param_1);
    if ((uVar7 & 1) == 0) {
      return;
    }
    if (((*(byte *)(_UICamera_TypeInfo_12d6410 + 0x133) >> 2 & 1) != 0) &&
       (*(int *)(_UICamera_TypeInfo_12d6410 + 0xe0) == 0)) {
      native_sub_4327ec();
    }
    lVar6 = 0;
  }
  else {
    lVar6 = native_UnityEngine_Component__get_gameObject_8da66c(param_1,0);
    if (((*(byte *)(_UICamera_TypeInfo_12d6410 + 0x133) >> 2 & 1) != 0) &&
       (*(int *)(_UICamera_TypeInfo_12d6410 + 0xe0) == 0)) {
      native_sub_4327ec(_UICamera_TypeInfo_12d6410);
    }
  }
  if ((bRam00000000013428c8 & 1) == 0) {
    native_sub_43273c(&bool_TypeInfo_12d3bd0,0);
    native_sub_43273c(&Method_UnityEngine_GameObject_GetComponent_UIInput____12e4ab0);
    native_sub_43273c(&Method_UnityEngine_GameObject_GetComponent_UIKeyNavigation____12e4ab8);
    native_sub_43273c(&UnityEngine_Object_TypeInfo_12d54e0);
    native_sub_43273c(&UICamera_TypeInfo_12d6410);
    native_sub_43273c(&StringLiteral_OnSelect_12f02c0);
    bRam00000000013428c8 = 1;
  }
  if (((*(byte *)(_UICamera_TypeInfo_12d6410 + 0x133) >> 2 & 1) != 0) &&
     (*(int *)(_UICamera_TypeInfo_12d6410 + 0xe0) == 0)) {
    native_sub_4327ec();
  }
  uVar12 = *(undefined8 *)(*(long *)(_UICamera_TypeInfo_12d6410 + 0xb8) + 0x1e8);
  if (((*(byte *)(_UnityEngine_Object_TypeInfo_12d54e0 + 0x133) >> 2 & 1) != 0) &&
     (*(int *)(_UnityEngine_Object_TypeInfo_12d54e0 + 0xe0) == 0)) {
    native_sub_4327ec(_UnityEngine_Object_TypeInfo_12d54e0);
  }
  uVar7 = native_UnityEngine_Object__op_Equality_8e9a3c(uVar12,lVar6,0);
  if ((uVar7 & 1) != 0) {
    if (((*(ushort *)(_UICamera_TypeInfo_12d6410 + 0x132) >> 10 & 1) != 0) &&
       (*(int *)(_UICamera_TypeInfo_12d6410 + 0xe0) == 0)) {
      native_sub_4327ec(_UICamera_TypeInfo_12d6410);
    }
    native_UICamera__set_hoveredObject_c9622c(lVar6);
    lVar8 = *(long *)(*(long *)(_UICamera_TypeInfo_12d6410 + 0xb8) + 400);
    if (lVar8 != 0) {
      plVar9 = (long *)(lVar8 + 0x48);
      *plVar9 = lVar6;
      if (iRam0000000001345318 != 0) {
        puVar1 = (ulong *)(((ulong)plVar9 >> 0x12 & 0x7fff) * 8 + 0x138ecd8);
        do {
          cVar2 = '\x01';
          bVar3 = (bool)ExclusiveMonitorPass(puVar1,0x10);
          if (bVar3) {
            *puVar1 = *puVar1 | 1L << ((ulong)plVar9 >> 0xc & 0x3f);
            cVar2 = ExclusiveMonitorsStatus();
          }
        } while (cVar2 != '\0');
      }
      return;
    }
    goto LAB_00c97ea8;
  }
  if (((*(ushort *)(_UICamera_TypeInfo_12d6410 + 0x132) >> 10 & 1) != 0) &&
     (*(int *)(_UICamera_TypeInfo_12d6410 + 0xe0) == 0)) {
    native_sub_4327ec(_UICamera_TypeInfo_12d6410);
  }
  native_UICamera__ShowTooltip_c953cc(0);
  plVar9 = (long *)(_UICamera_TypeInfo_12d6410 + 0xb8);
  lVar8 = *plVar9;
  lVar13 = *(long *)(lVar8 + 0xb8);
  if (*(long *)(lVar8 + 0xe0) == 0) {
    if (((*(byte *)(_UICamera_TypeInfo_12d6410 + 0x133) >> 2 & 1) != 0) &&
       (*(int *)(_UICamera_TypeInfo_12d6410 + 0xe0) == 0)) {
      native_sub_4327ec();
      plVar9 = (long *)(_UICamera_TypeInfo_12d6410 + 0xb8);
      lVar8 = *plVar9;
    }
    *(undefined4 *)(lVar8 + 0xd4) = 0xffffff9c;
    lVar8 = *plVar9;
    *(undefined8 *)(lVar8 + 0xe0) = *(undefined8 *)(lVar8 + 400);
    native_sub_4326e0(lVar8 + 0xe0);
    uVar15 = 1;
  }
  else {
    uVar15 = 0;
  }
  if (((*(byte *)(_UICamera_TypeInfo_12d6410 + 0x133) >> 2 & 1) != 0) &&
     (*(int *)(_UICamera_TypeInfo_12d6410 + 0xe0) == 0)) {
    native_sub_4327ec();
  }
  lVar8 = _UICamera_TypeInfo_12d6410;
  *(undefined1 *)(*(long *)(_UICamera_TypeInfo_12d6410 + 0xb8) + 0xe8) = 0;
  uVar12 = *(undefined8 *)(*(long *)(lVar8 + 0xb8) + 0x1e8);
  if (((*(byte *)(_UnityEngine_Object_TypeInfo_12d54e0 + 0x133) >> 2 & 1) != 0) &&
     (*(int *)(_UnityEngine_Object_TypeInfo_12d54e0 + 0xe0) == 0)) {
    native_sub_4327ec(_UnityEngine_Object_TypeInfo_12d54e0);
  }
  uVar7 = native_UnityEngine_Object__op_Implicit_8e1b98(uVar12,0);
  if ((uVar7 & 1) != 0) {
    if (((*(byte *)(_UICamera_TypeInfo_12d6410 + 0x133) >> 2 & 1) != 0) &&
       (*(int *)(_UICamera_TypeInfo_12d6410 + 0xe0) == 0)) {
      native_sub_4327ec();
    }
    uVar14 = *(undefined8 *)(*(long *)(_UICamera_TypeInfo_12d6410 + 0xb8) + 0x1e8);
    auStack_44[0] = 0;
    uVar12 = native_sub_4327fc(_bool_TypeInfo_12d3bd0,auStack_44);
    native_UICamera__Notify_c96a08(uVar14,_StringLiteral_OnSelect_12f02c0,uVar12);
    lVar11 = *(long *)(_UICamera_TypeInfo_12d6410 + 0xb8);
    lVar8 = *(long *)(lVar11 + 0x120);
    if (lVar8 != 0) {
      if (((*(byte *)(_UICamera_TypeInfo_12d6410 + 0x133) >> 2 & 1) != 0) &&
         (*(int *)(_UICamera_TypeInfo_12d6410 + 0xe0) == 0)) {
        native_sub_4327ec(_UICamera_TypeInfo_12d6410);
        lVar11 = *(long *)(_UICamera_TypeInfo_12d6410 + 0xb8);
        lVar8 = *(long *)(lVar11 + 0x120);
        if (lVar8 == 0) goto LAB_00c97ea8;
      }
      native_UICamera_BoolDelegate__Invoke_550030(lVar8,*(undefined8 *)(lVar11 + 0x1e8),0,0);
    }
  }
  if (((*(byte *)(_UICamera_TypeInfo_12d6410 + 0x133) >> 2 & 1) != 0) &&
     (*(int *)(_UICamera_TypeInfo_12d6410 + 0xe0) == 0)) {
    native_sub_4327ec();
  }
  lVar8 = *(long *)(_UICamera_TypeInfo_12d6410 + 0xb8);
  *(long *)(lVar8 + 0x1e8) = lVar6;
  native_sub_4326e0(lVar8 + 0x1e8,lVar6);
  lVar8 = *(long *)(*(long *)(_UICamera_TypeInfo_12d6410 + 0xb8) + 0xe0);
  if (lVar8 == 0) goto LAB_00c97ea8;
  *(undefined4 *)(lVar8 + 0x70) = 0;
  if (((*(byte *)(_UnityEngine_Object_TypeInfo_12d54e0 + 0x133) >> 2 & 1) != 0) &&
     (*(int *)(_UnityEngine_Object_TypeInfo_12d54e0 + 0xe0) == 0)) {
    native_sub_4327ec();
  }
  uVar7 = native_UnityEngine_Object__op_Inequality_8d76fc(lVar6,0,0);
  if ((uVar7 & 1) != 0) {
    if (lVar6 == 0) goto LAB_00c97ea8;
    uVar12 = native_UnityEngine_GameObject__GetComponent_BE2_BlockSectionHeader_Custom__4a2214
                       (lVar6,_Method_UnityEngine_GameObject_GetComponent_UIKeyNavigation____12e4ab8
                       );
    if (((*(byte *)(_UnityEngine_Object_TypeInfo_12d54e0 + 0x133) >> 2 & 1) != 0) &&
       (*(int *)(_UnityEngine_Object_TypeInfo_12d54e0 + 0xe0) == 0)) {
      native_sub_4327ec(_UnityEngine_Object_TypeInfo_12d54e0);
    }
    uVar7 = native_UnityEngine_Object__op_Inequality_8d76fc(uVar12,0,0);
    if ((uVar7 & 1) == 0) {
      uVar12 = native_UnityEngine_GameObject__GetComponent_BE2_BlockSectionHeader_Custom__4a2214
                         (lVar6,_Method_UnityEngine_GameObject_GetComponent_UIInput____12e4ab0);
      if (((*(byte *)(_UnityEngine_Object_TypeInfo_12d54e0 + 0x133) >> 2 & 1) != 0) &&
         (*(int *)(_UnityEngine_Object_TypeInfo_12d54e0 + 0xe0) == 0)) {
        native_sub_4327ec(_UnityEngine_Object_TypeInfo_12d54e0);
      }
      uVar7 = native_UnityEngine_Object__op_Inequality_8d76fc(uVar12,0,0);
      if ((uVar7 & 1) == 0) goto LAB_00c97a78;
    }
    if (((*(byte *)(_UICamera_TypeInfo_12d6410 + 0x133) >> 2 & 1) != 0) &&
       (*(int *)(_UICamera_TypeInfo_12d6410 + 0xe0) == 0)) {
      native_sub_4327ec();
    }
    lVar8 = *(long *)(*(long *)(_UICamera_TypeInfo_12d6410 + 0xb8) + 400);
    if (lVar8 == 0) goto LAB_00c97ea8;
    plVar9 = (long *)(lVar8 + 0x48);
    *plVar9 = lVar6;
    native_sub_4326e0(plVar9,lVar6);
  }
LAB_00c97a78:
  if (((*(byte *)(_UICamera_TypeInfo_12d6410 + 0x133) >> 2 & 1) != 0) &&
     (*(int *)(_UICamera_TypeInfo_12d6410 + 0xe0) == 0)) {
    native_sub_4327ec();
  }
  uVar12 = *(undefined8 *)(*(long *)(_UICamera_TypeInfo_12d6410 + 0xb8) + 0x1e8);
  if (((*(byte *)(_UnityEngine_Object_TypeInfo_12d54e0 + 0x133) >> 2 & 1) != 0) &&
     (*(int *)(_UnityEngine_Object_TypeInfo_12d54e0 + 0xe0) == 0)) {
    native_sub_4327ec(_UnityEngine_Object_TypeInfo_12d54e0);
  }
  uVar5 = native_UnityEngine_Object__op_Implicit_8e1b98(uVar12,0);
  if ((uVar15 & uVar5) == 1) {
    if (((*(byte *)(_UICamera_TypeInfo_12d6410 + 0x133) >> 2 & 1) != 0) &&
       (*(int *)(_UICamera_TypeInfo_12d6410 + 0xe0) == 0)) {
      native_sub_4327ec();
    }
    uVar12 = *(undefined8 *)(*(long *)(_UICamera_TypeInfo_12d6410 + 0xb8) + 0x1e8);
    if (((*(byte *)(_UnityEngine_Object_TypeInfo_12d54e0 + 0x133) >> 2 & 1) != 0) &&
       (*(int *)(_UnityEngine_Object_TypeInfo_12d54e0 + 0xe0) == 0)) {
      native_sub_4327ec(_UnityEngine_Object_TypeInfo_12d54e0);
    }
    uVar7 = native_UnityEngine_Object__op_Inequality_8d76fc(uVar12,0,0);
    if ((uVar7 & 1) == 0) {
      if (((*(ushort *)(_UICamera_TypeInfo_12d6410 + 0x132) >> 10 & 1) != 0) &&
         (*(int *)(_UICamera_TypeInfo_12d6410 + 0xe0) == 0)) {
        native_sub_4327ec(_UICamera_TypeInfo_12d6410);
      }
      if ((**(long **)(_UICamera_TypeInfo_12d6410 + 0xb8) == 0) ||
         (lVar6 = *(long *)(**(long **)(_UICamera_TypeInfo_12d6410 + 0xb8) + 0x10), lVar6 == 0))
      goto LAB_00c97ea8;
      if (*(int *)(lVar6 + 0x18) == 0) {
        uVar12 = native_sub_43283c();
                    /* WARNING: Subroutine does not return */
        native_sub_4327dc(uVar12,0);
      }
      lVar6 = *(long *)(lVar6 + 0x20);
    }
    else {
      if (((*(ushort *)(_UICamera_TypeInfo_12d6410 + 0x132) >> 10 & 1) != 0) &&
         (*(int *)(_UICamera_TypeInfo_12d6410 + 0xe0) == 0)) {
        native_sub_4327ec(_UICamera_TypeInfo_12d6410);
      }
      lVar6 = *(long *)(*(long *)(_UICamera_TypeInfo_12d6410 + 0xb8) + 0x1e8);
      if (lVar6 == 0) goto LAB_00c97ea8;
      native_UnityEngine_GameObject__get_layer_8de608(lVar6,0);
      lVar6 = native_UICamera__FindCameraForLayer_c96d2c();
    }
    if (((*(byte *)(_UnityEngine_Object_TypeInfo_12d54e0 + 0x133) >> 2 & 1) != 0) &&
       (*(int *)(_UnityEngine_Object_TypeInfo_12d54e0 + 0xe0) == 0)) {
      native_sub_4327ec();
    }
    uVar7 = native_UnityEngine_Object__op_Inequality_8d76fc(lVar6,0,0);
    if ((uVar7 & 1) != 0) {
      if (((*(byte *)(_UICamera_TypeInfo_12d6410 + 0x133) >> 2 & 1) != 0) &&
         (*(int *)(_UICamera_TypeInfo_12d6410 + 0xe0) == 0)) {
        native_sub_4327ec();
      }
      plVar9 = (long *)(*(long *)(_UICamera_TypeInfo_12d6410 + 0xb8) + 0xb8);
      *plVar9 = lVar6;
      native_sub_4326e0(plVar9,lVar6);
      if (lVar6 == 0) goto LAB_00c97ea8;
      uVar12 = native_UICamera__get_cachedCamera_c95254(lVar6);
      puVar10 = (undefined8 *)(*(long *)(_UICamera_TypeInfo_12d6410 + 0xb8) + 0xc0);
      *puVar10 = uVar12;
      native_sub_4326e0(puVar10,uVar12);
    }
  }
  if (((*(byte *)(_UICamera_TypeInfo_12d6410 + 0x133) >> 2 & 1) != 0) &&
     (*(int *)(_UICamera_TypeInfo_12d6410 + 0xe0) == 0)) {
    native_sub_4327ec();
  }
  uVar12 = *(undefined8 *)(*(long *)(_UICamera_TypeInfo_12d6410 + 0xb8) + 0x1e8);
  if (((*(byte *)(_UnityEngine_Object_TypeInfo_12d54e0 + 0x133) >> 2 & 1) != 0) &&
     (*(int *)(_UnityEngine_Object_TypeInfo_12d54e0 + 0xe0) == 0)) {
    native_sub_4327ec(_UnityEngine_Object_TypeInfo_12d54e0);
  }
  uVar7 = native_UnityEngine_Object__op_Implicit_8e1b98(uVar12,0);
  if ((uVar7 & 1) != 0) {
    if (((*(byte *)(_UICamera_TypeInfo_12d6410 + 0x133) >> 2 & 1) != 0) &&
       (*(int *)(_UICamera_TypeInfo_12d6410 + 0xe0) == 0)) {
      native_sub_4327ec();
    }
    lVar6 = *(long *)(*(long *)(_UICamera_TypeInfo_12d6410 + 0xb8) + 0x1e8);
    if (lVar6 == 0) goto LAB_00c97ea8;
    uVar7 = native_UnityEngine_GameObject__get_activeInHierarchy_8de728(lVar6,0);
    if ((uVar7 & 1) == 0) {
      bVar4 = 0;
    }
    else {
      if (((*(byte *)(_UICamera_TypeInfo_12d6410 + 0x133) >> 2 & 1) != 0) &&
         (*(int *)(_UICamera_TypeInfo_12d6410 + 0xe0) == 0)) {
        native_sub_4327ec();
      }
      lVar6 = *(long *)(*(long *)(_UICamera_TypeInfo_12d6410 + 0xb8) + 0x1e8);
      if (lVar6 == 0) goto LAB_00c97ea8;
      uVar12 = native_UnityEngine_GameObject__GetComponent_BE2_BlockSectionHeader_Custom__4a2214
                         (lVar6,_Method_UnityEngine_GameObject_GetComponent_UIInput____12e4ab0);
      if (((*(byte *)(_UnityEngine_Object_TypeInfo_12d54e0 + 0x133) >> 2 & 1) != 0) &&
         (*(int *)(_UnityEngine_Object_TypeInfo_12d54e0 + 0xe0) == 0)) {
        native_sub_4327ec(_UnityEngine_Object_TypeInfo_12d54e0);
      }
      bVar4 = native_UnityEngine_Object__op_Inequality_8d76fc(uVar12,0,0);
      bVar4 = bVar4 & 1;
    }
    if (((*(byte *)(_UICamera_TypeInfo_12d6410 + 0x133) >> 2 & 1) != 0) &&
       (*(int *)(_UICamera_TypeInfo_12d6410 + 0xe0) == 0)) {
      native_sub_4327ec();
    }
    lVar6 = _UICamera_TypeInfo_12d6410;
    *(byte *)(*(long *)(_UICamera_TypeInfo_12d6410 + 0xb8) + 0xe8) = bVar4;
    lVar11 = *(long *)(lVar6 + 0xb8);
    lVar8 = *(long *)(lVar11 + 0x120);
    if (lVar8 != 0) {
      if (((*(byte *)(lVar6 + 0x133) >> 2 & 1) != 0) && (*(int *)(lVar6 + 0xe0) == 0)) {
        native_sub_4327ec();
        lVar11 = *(long *)(_UICamera_TypeInfo_12d6410 + 0xb8);
        lVar8 = *(long *)(lVar11 + 0x120);
        if (lVar8 == 0) goto LAB_00c97ea8;
      }
      native_UICamera_BoolDelegate__Invoke_550030(lVar8,*(undefined8 *)(lVar11 + 0x1e8),1,0);
      lVar6 = _UICamera_TypeInfo_12d6410;
    }
    if (((*(byte *)(lVar6 + 0x133) >> 2 & 1) != 0) && (*(int *)(lVar6 + 0xe0) == 0)) {
      native_sub_4327ec();
      lVar6 = _UICamera_TypeInfo_12d6410;
    }
    uVar14 = *(undefined8 *)(*(long *)(lVar6 + 0xb8) + 0x1e8);
    auStack_48[0] = 1;
    uVar12 = native_sub_4327fc(_bool_TypeInfo_12d3bd0,auStack_48);
    native_UICamera__Notify_c96a08(uVar14,_StringLiteral_OnSelect_12f02c0,uVar12);
  }
  if (uVar15 != 0) {
    if (((*(byte *)(_UICamera_TypeInfo_12d6410 + 0x133) >> 2 & 1) != 0) &&
       (*(int *)(_UICamera_TypeInfo_12d6410 + 0xe0) == 0)) {
      native_sub_4327ec();
    }
    plVar9 = (long *)(*(long *)(_UICamera_TypeInfo_12d6410 + 0xb8) + 0xb8);
    *plVar9 = lVar13;
    native_sub_4326e0(plVar9,lVar13);
    if (((*(byte *)(_UnityEngine_Object_TypeInfo_12d54e0 + 0x133) >> 2 & 1) != 0) &&
       (*(int *)(_UnityEngine_Object_TypeInfo_12d54e0 + 0xe0) == 0)) {
      native_sub_4327ec();
    }
    uVar7 = native_UnityEngine_Object__op_Inequality_8d76fc(lVar13,0,0);
    uVar12 = 0;
    if ((uVar7 & 1) != 0) {
      if (lVar13 == 0) {
LAB_00c97ea8:
                    /* WARNING: Subroutine does not return */
        native_sub_432810();
      }
      uVar12 = native_UICamera__get_cachedCamera_c95254(lVar13);
    }
    if (((*(byte *)(_UICamera_TypeInfo_12d6410 + 0x133) >> 2 & 1) != 0) &&
       (*(int *)(_UICamera_TypeInfo_12d6410 + 0xe0) == 0)) {
      native_sub_4327ec();
    }
    puVar10 = (undefined8 *)(*(long *)(_UICamera_TypeInfo_12d6410 + 0xb8) + 0xc0);
    *puVar10 = uVar12;
    native_sub_4326e0(puVar10,uVar12);
    puVar10 = (undefined8 *)(*(long *)(_UICamera_TypeInfo_12d6410 + 0xb8) + 0xe0);
    *puVar10 = 0;
    native_sub_4326e0(puVar10,0);
    *(undefined4 *)(*(long *)(_UICamera_TypeInfo_12d6410 + 0xb8) + 0xd4) = 0xffffff9c;
  }
  return;
}



/* UIInput$$get_isSelected @ 0x9f283c
 * bool UIInput__get_isSelected (UIInput_o* __this, const MethodInfo* method); */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* UIInput$$get_isSelected
   bool UIInput__get_isSelected (UIInput_o* __this, const MethodInfo* method); */

byte native_UIInput__get_isSelected_9f283c(long param_1)

{
  byte bVar1;
  long lVar2;
  
  if ((bRam0000000001341979 & 1) == 0) {
    native_sub_43273c(&UnityEngine_Object_TypeInfo_12d54e0);
    native_sub_43273c(&UIInput_TypeInfo_12d6450);
    bRam0000000001341979 = 1;
  }
  if (((*(byte *)(_UIInput_TypeInfo_12d6450 + 0x133) >> 2 & 1) != 0) &&
     (*(int *)(_UIInput_TypeInfo_12d6450 + 0xe0) == 0)) {
    native_sub_4327ec();
  }
  lVar2 = *(long *)(*(long *)(_UIInput_TypeInfo_12d6450 + 0xb8) + 8);
  if (((*(byte *)(_UnityEngine_Object_TypeInfo_12d54e0 + 0x133) >> 2 & 1) != 0) &&
     (*(int *)(_UnityEngine_Object_TypeInfo_12d54e0 + 0xe0) == 0)) {
    native_sub_4327ec(_UnityEngine_Object_TypeInfo_12d54e0);
  }
  if ((bRam0000000001341083 & 1) == 0) {
    native_sub_43273c(&UnityEngine_Object_TypeInfo_12d54e0,param_1,0);
    bRam0000000001341083 = 1;
  }
  if (((*(byte *)(_UnityEngine_Object_TypeInfo_12d54e0 + 0x133) >> 2 & 1) != 0) &&
     (*(int *)(_UnityEngine_Object_TypeInfo_12d54e0 + 0xe0) == 0)) {
    native_sub_4327ec();
  }
  if ((bRam0000000001341033 & 1) == 0) {
    native_sub_43273c(&UnityEngine_Object_TypeInfo_12d54e0);
    bRam0000000001341033 = 1;
  }
  if (lVar2 == 0 && param_1 == 0) {
    bVar1 = 1;
  }
  else {
    if (param_1 == 0) {
      param_1 = lVar2;
      if (((*(byte *)(_UnityEngine_Object_TypeInfo_12d54e0 + 0x133) >> 2 & 1) != 0) &&
         (*(int *)(_UnityEngine_Object_TypeInfo_12d54e0 + 0xe0) == 0)) {
        native_sub_4327ec();
      }
    }
    else {
      if (lVar2 != 0) {
        bVar1 = lVar2 == param_1;
        goto code_r0x008e9b5c;
      }
      if (((*(byte *)(_UnityEngine_Object_TypeInfo_12d54e0 + 0x133) >> 2 & 1) != 0) &&
         (*(int *)(_UnityEngine_Object_TypeInfo_12d54e0 + 0xe0) == 0)) {
        native_sub_4327ec();
      }
    }
    bVar1 = native_UnityEngine_Object__IsNativeObjectAlive_8e9b70(param_1);
    bVar1 = bVar1 ^ 1;
  }
code_r0x008e9b5c:
  return bVar1 & 1;
}



/* UIInput$$set_isSelected @ 0x9f2fc8
 * void UIInput__set_isSelected (UIInput_o* __this, bool value, const MethodInfo* method); */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* UIInput$$set_isSelected
   void UIInput__set_isSelected (UIInput_o* __this, bool value, const MethodInfo* method); */

void native_UIInput__set_isSelected_9f2fc8(undefined8 param_1,ulong param_2)

{
  ulong *puVar1;
  char cVar2;
  bool bVar3;
  byte bVar4;
  uint uVar5;
  long lVar6;
  ulong uVar7;
  long lVar8;
  long *plVar9;
  undefined8 *puVar10;
  long lVar11;
  undefined8 uVar12;
  long lVar13;
  undefined8 uVar14;
  uint uVar15;
  undefined1 auStack_48 [4];
  undefined1 auStack_44 [4];
  
  if ((bRam000000000134197a & 1) == 0) {
    native_sub_43273c(&UICamera_TypeInfo_12d6410);
    bRam000000000134197a = 1;
  }
  if ((param_2 & 1) == 0) {
    uVar7 = native_UIInput__get_isSelected_9f283c(param_1);
    if ((uVar7 & 1) == 0) {
      return;
    }
    if (((*(byte *)(_UICamera_TypeInfo_12d6410 + 0x133) >> 2 & 1) != 0) &&
       (*(int *)(_UICamera_TypeInfo_12d6410 + 0xe0) == 0)) {
      native_sub_4327ec();
    }
    lVar6 = 0;
  }
  else {
    lVar6 = native_UnityEngine_Component__get_gameObject_8da66c(param_1,0);
    if (((*(byte *)(_UICamera_TypeInfo_12d6410 + 0x133) >> 2 & 1) != 0) &&
       (*(int *)(_UICamera_TypeInfo_12d6410 + 0xe0) == 0)) {
      native_sub_4327ec(_UICamera_TypeInfo_12d6410);
    }
  }
  if ((bRam00000000013428c8 & 1) == 0) {
    native_sub_43273c(&bool_TypeInfo_12d3bd0,0);
    native_sub_43273c(&Method_UnityEngine_GameObject_GetComponent_UIInput____12e4ab0);
    native_sub_43273c(&Method_UnityEngine_GameObject_GetComponent_UIKeyNavigation____12e4ab8);
    native_sub_43273c(&UnityEngine_Object_TypeInfo_12d54e0);
    native_sub_43273c(&UICamera_TypeInfo_12d6410);
    native_sub_43273c(&StringLiteral_OnSelect_12f02c0);
    bRam00000000013428c8 = 1;
  }
  if (((*(byte *)(_UICamera_TypeInfo_12d6410 + 0x133) >> 2 & 1) != 0) &&
     (*(int *)(_UICamera_TypeInfo_12d6410 + 0xe0) == 0)) {
    native_sub_4327ec();
  }
  uVar12 = *(undefined8 *)(*(long *)(_UICamera_TypeInfo_12d6410 + 0xb8) + 0x1e8);
  if (((*(byte *)(_UnityEngine_Object_TypeInfo_12d54e0 + 0x133) >> 2 & 1) != 0) &&
     (*(int *)(_UnityEngine_Object_TypeInfo_12d54e0 + 0xe0) == 0)) {
    native_sub_4327ec(_UnityEngine_Object_TypeInfo_12d54e0);
  }
  uVar7 = native_UnityEngine_Object__op_Equality_8e9a3c(uVar12,lVar6,0);
  if ((uVar7 & 1) != 0) {
    if (((*(ushort *)(_UICamera_TypeInfo_12d6410 + 0x132) >> 10 & 1) != 0) &&
       (*(int *)(_UICamera_TypeInfo_12d6410 + 0xe0) == 0)) {
      native_sub_4327ec(_UICamera_TypeInfo_12d6410);
    }
    native_UICamera__set_hoveredObject_c9622c(lVar6);
    lVar8 = *(long *)(*(long *)(_UICamera_TypeInfo_12d6410 + 0xb8) + 400);
    if (lVar8 != 0) {
      plVar9 = (long *)(lVar8 + 0x48);
      *plVar9 = lVar6;
      if (iRam0000000001345318 != 0) {
        puVar1 = (ulong *)(((ulong)plVar9 >> 0x12 & 0x7fff) * 8 + 0x138ecd8);
        do {
          cVar2 = '\x01';
          bVar3 = (bool)ExclusiveMonitorPass(puVar1,0x10);
          if (bVar3) {
            *puVar1 = *puVar1 | 1L << ((ulong)plVar9 >> 0xc & 0x3f);
            cVar2 = ExclusiveMonitorsStatus();
          }
        } while (cVar2 != '\0');
      }
      return;
    }
    goto LAB_00c97ea8;
  }
  if (((*(ushort *)(_UICamera_TypeInfo_12d6410 + 0x132) >> 10 & 1) != 0) &&
     (*(int *)(_UICamera_TypeInfo_12d6410 + 0xe0) == 0)) {
    native_sub_4327ec(_UICamera_TypeInfo_12d6410);
  }
  native_UICamera__ShowTooltip_c953cc(0);
  plVar9 = (long *)(_UICamera_TypeInfo_12d6410 + 0xb8);
  lVar8 = *plVar9;
  lVar13 = *(long *)(lVar8 + 0xb8);
  if (*(long *)(lVar8 + 0xe0) == 0) {
    if (((*(byte *)(_UICamera_TypeInfo_12d6410 + 0x133) >> 2 & 1) != 0) &&
       (*(int *)(_UICamera_TypeInfo_12d6410 + 0xe0) == 0)) {
      native_sub_4327ec();
      plVar9 = (long *)(_UICamera_TypeInfo_12d6410 + 0xb8);
      lVar8 = *plVar9;
    }
    *(undefined4 *)(lVar8 + 0xd4) = 0xffffff9c;
    lVar8 = *plVar9;
    *(undefined8 *)(lVar8 + 0xe0) = *(undefined8 *)(lVar8 + 400);
    native_sub_4326e0(lVar8 + 0xe0);
    uVar15 = 1;
  }
  else {
    uVar15 = 0;
  }
  if (((*(byte *)(_UICamera_TypeInfo_12d6410 + 0x133) >> 2 & 1) != 0) &&
     (*(int *)(_UICamera_TypeInfo_12d6410 + 0xe0) == 0)) {
    native_sub_4327ec();
  }
  lVar8 = _UICamera_TypeInfo_12d6410;
  *(undefined1 *)(*(long *)(_UICamera_TypeInfo_12d6410 + 0xb8) + 0xe8) = 0;
  uVar12 = *(undefined8 *)(*(long *)(lVar8 + 0xb8) + 0x1e8);
  if (((*(byte *)(_UnityEngine_Object_TypeInfo_12d54e0 + 0x133) >> 2 & 1) != 0) &&
     (*(int *)(_UnityEngine_Object_TypeInfo_12d54e0 + 0xe0) == 0)) {
    native_sub_4327ec(_UnityEngine_Object_TypeInfo_12d54e0);
  }
  uVar7 = native_UnityEngine_Object__op_Implicit_8e1b98(uVar12,0);
  if ((uVar7 & 1) != 0) {
    if (((*(byte *)(_UICamera_TypeInfo_12d6410 + 0x133) >> 2 & 1) != 0) &&
       (*(int *)(_UICamera_TypeInfo_12d6410 + 0xe0) == 0)) {
      native_sub_4327ec();
    }
    uVar14 = *(undefined8 *)(*(long *)(_UICamera_TypeInfo_12d6410 + 0xb8) + 0x1e8);
    auStack_44[0] = 0;
    uVar12 = native_sub_4327fc(_bool_TypeInfo_12d3bd0,auStack_44);
    native_UICamera__Notify_c96a08(uVar14,_StringLiteral_OnSelect_12f02c0,uVar12);
    lVar11 = *(long *)(_UICamera_TypeInfo_12d6410 + 0xb8);
    lVar8 = *(long *)(lVar11 + 0x120);
    if (lVar8 != 0) {
      if (((*(byte *)(_UICamera_TypeInfo_12d6410 + 0x133) >> 2 & 1) != 0) &&
         (*(int *)(_UICamera_TypeInfo_12d6410 + 0xe0) == 0)) {
        native_sub_4327ec(_UICamera_TypeInfo_12d6410);
        lVar11 = *(long *)(_UICamera_TypeInfo_12d6410 + 0xb8);
        lVar8 = *(long *)(lVar11 + 0x120);
        if (lVar8 == 0) goto LAB_00c97ea8;
      }
      native_UICamera_BoolDelegate__Invoke_550030(lVar8,*(undefined8 *)(lVar11 + 0x1e8),0,0);
    }
  }
  if (((*(byte *)(_UICamera_TypeInfo_12d6410 + 0x133) >> 2 & 1) != 0) &&
     (*(int *)(_UICamera_TypeInfo_12d6410 + 0xe0) == 0)) {
    native_sub_4327ec();
  }
  lVar8 = *(long *)(_UICamera_TypeInfo_12d6410 + 0xb8);
  *(long *)(lVar8 + 0x1e8) = lVar6;
  native_sub_4326e0(lVar8 + 0x1e8,lVar6);
  lVar8 = *(long *)(*(long *)(_UICamera_TypeInfo_12d6410 + 0xb8) + 0xe0);
  if (lVar8 == 0) goto LAB_00c97ea8;
  *(undefined4 *)(lVar8 + 0x70) = 0;
  if (((*(byte *)(_UnityEngine_Object_TypeInfo_12d54e0 + 0x133) >> 2 & 1) != 0) &&
     (*(int *)(_UnityEngine_Object_TypeInfo_12d54e0 + 0xe0) == 0)) {
    native_sub_4327ec();
  }
  uVar7 = native_UnityEngine_Object__op_Inequality_8d76fc(lVar6,0,0);
  if ((uVar7 & 1) != 0) {
    if (lVar6 == 0) goto LAB_00c97ea8;
    uVar12 = native_UnityEngine_GameObject__GetComponent_BE2_BlockSectionHeader_Custom__4a2214
                       (lVar6,_Method_UnityEngine_GameObject_GetComponent_UIKeyNavigation____12e4ab8
                       );
    if (((*(byte *)(_UnityEngine_Object_TypeInfo_12d54e0 + 0x133) >> 2 & 1) != 0) &&
       (*(int *)(_UnityEngine_Object_TypeInfo_12d54e0 + 0xe0) == 0)) {
      native_sub_4327ec(_UnityEngine_Object_TypeInfo_12d54e0);
    }
    uVar7 = native_UnityEngine_Object__op_Inequality_8d76fc(uVar12,0,0);
    if ((uVar7 & 1) == 0) {
      uVar12 = native_UnityEngine_GameObject__GetComponent_BE2_BlockSectionHeader_Custom__4a2214
                         (lVar6,_Method_UnityEngine_GameObject_GetComponent_UIInput____12e4ab0);
      if (((*(byte *)(_UnityEngine_Object_TypeInfo_12d54e0 + 0x133) >> 2 & 1) != 0) &&
         (*(int *)(_UnityEngine_Object_TypeInfo_12d54e0 + 0xe0) == 0)) {
        native_sub_4327ec(_UnityEngine_Object_TypeInfo_12d54e0);
      }
      uVar7 = native_UnityEngine_Object__op_Inequality_8d76fc(uVar12,0,0);
      if ((uVar7 & 1) == 0) goto LAB_00c97a78;
    }
    if (((*(byte *)(_UICamera_TypeInfo_12d6410 + 0x133) >> 2 & 1) != 0) &&
       (*(int *)(_UICamera_TypeInfo_12d6410 + 0xe0) == 0)) {
      native_sub_4327ec();
    }
    lVar8 = *(long *)(*(long *)(_UICamera_TypeInfo_12d6410 + 0xb8) + 400);
    if (lVar8 == 0) goto LAB_00c97ea8;
    plVar9 = (long *)(lVar8 + 0x48);
    *plVar9 = lVar6;
    native_sub_4326e0(plVar9,lVar6);
  }
LAB_00c97a78:
  if (((*(byte *)(_UICamera_TypeInfo_12d6410 + 0x133) >> 2 & 1) != 0) &&
     (*(int *)(_UICamera_TypeInfo_12d6410 + 0xe0) == 0)) {
    native_sub_4327ec();
  }
  uVar12 = *(undefined8 *)(*(long *)(_UICamera_TypeInfo_12d6410 + 0xb8) + 0x1e8);
  if (((*(byte *)(_UnityEngine_Object_TypeInfo_12d54e0 + 0x133) >> 2 & 1) != 0) &&
     (*(int *)(_UnityEngine_Object_TypeInfo_12d54e0 + 0xe0) == 0)) {
    native_sub_4327ec(_UnityEngine_Object_TypeInfo_12d54e0);
  }
  uVar5 = native_UnityEngine_Object__op_Implicit_8e1b98(uVar12,0);
  if ((uVar15 & uVar5) == 1) {
    if (((*(byte *)(_UICamera_TypeInfo_12d6410 + 0x133) >> 2 & 1) != 0) &&
       (*(int *)(_UICamera_TypeInfo_12d6410 + 0xe0) == 0)) {
      native_sub_4327ec();
    }
    uVar12 = *(undefined8 *)(*(long *)(_UICamera_TypeInfo_12d6410 + 0xb8) + 0x1e8);
    if (((*(byte *)(_UnityEngine_Object_TypeInfo_12d54e0 + 0x133) >> 2 & 1) != 0) &&
       (*(int *)(_UnityEngine_Object_TypeInfo_12d54e0 + 0xe0) == 0)) {
      native_sub_4327ec(_UnityEngine_Object_TypeInfo_12d54e0);
    }
    uVar7 = native_UnityEngine_Object__op_Inequality_8d76fc(uVar12,0,0);
    if ((uVar7 & 1) == 0) {
      if (((*(ushort *)(_UICamera_TypeInfo_12d6410 + 0x132) >> 10 & 1) != 0) &&
         (*(int *)(_UICamera_TypeInfo_12d6410 + 0xe0) == 0)) {
        native_sub_4327ec(_UICamera_TypeInfo_12d6410);
      }
      if ((**(long **)(_UICamera_TypeInfo_12d6410 + 0xb8) == 0) ||
         (lVar6 = *(long *)(**(long **)(_UICamera_TypeInfo_12d6410 + 0xb8) + 0x10), lVar6 == 0))
      goto LAB_00c97ea8;
      if (*(int *)(lVar6 + 0x18) == 0) {
        uVar12 = native_sub_43283c();
                    /* WARNING: Subroutine does not return */
        native_sub_4327dc(uVar12,0);
      }
      lVar6 = *(long *)(lVar6 + 0x20);
    }
    else {
      if (((*(ushort *)(_UICamera_TypeInfo_12d6410 + 0x132) >> 10 & 1) != 0) &&
         (*(int *)(_UICamera_TypeInfo_12d6410 + 0xe0) == 0)) {
        native_sub_4327ec(_UICamera_TypeInfo_12d6410);
      }
      lVar6 = *(long *)(*(long *)(_UICamera_TypeInfo_12d6410 + 0xb8) + 0x1e8);
      if (lVar6 == 0) goto LAB_00c97ea8;
      native_UnityEngine_GameObject__get_layer_8de608(lVar6,0);
      lVar6 = native_UICamera__FindCameraForLayer_c96d2c();
    }
    if (((*(byte *)(_UnityEngine_Object_TypeInfo_12d54e0 + 0x133) >> 2 & 1) != 0) &&
       (*(int *)(_UnityEngine_Object_TypeInfo_12d54e0 + 0xe0) == 0)) {
      native_sub_4327ec();
    }
    uVar7 = native_UnityEngine_Object__op_Inequality_8d76fc(lVar6,0,0);
    if ((uVar7 & 1) != 0) {
      if (((*(byte *)(_UICamera_TypeInfo_12d6410 + 0x133) >> 2 & 1) != 0) &&
         (*(int *)(_UICamera_TypeInfo_12d6410 + 0xe0) == 0)) {
        native_sub_4327ec();
      }
      plVar9 = (long *)(*(long *)(_UICamera_TypeInfo_12d6410 + 0xb8) + 0xb8);
      *plVar9 = lVar6;
      native_sub_4326e0(plVar9,lVar6);
      if (lVar6 == 0) goto LAB_00c97ea8;
      uVar12 = native_UICamera__get_cachedCamera_c95254(lVar6);
      puVar10 = (undefined8 *)(*(long *)(_UICamera_TypeInfo_12d6410 + 0xb8) + 0xc0);
      *puVar10 = uVar12;
      native_sub_4326e0(puVar10,uVar12);
    }
  }
  if (((*(byte *)(_UICamera_TypeInfo_12d6410 + 0x133) >> 2 & 1) != 0) &&
     (*(int *)(_UICamera_TypeInfo_12d6410 + 0xe0) == 0)) {
    native_sub_4327ec();
  }
  uVar12 = *(undefined8 *)(*(long *)(_UICamera_TypeInfo_12d6410 + 0xb8) + 0x1e8);
  if (((*(byte *)(_UnityEngine_Object_TypeInfo_12d54e0 + 0x133) >> 2 & 1) != 0) &&
     (*(int *)(_UnityEngine_Object_TypeInfo_12d54e0 + 0xe0) == 0)) {
    native_sub_4327ec(_UnityEngine_Object_TypeInfo_12d54e0);
  }
  uVar7 = native_UnityEngine_Object__op_Implicit_8e1b98(uVar12,0);
  if ((uVar7 & 1) != 0) {
    if (((*(byte *)(_UICamera_TypeInfo_12d6410 + 0x133) >> 2 & 1) != 0) &&
       (*(int *)(_UICamera_TypeInfo_12d6410 + 0xe0) == 0)) {
      native_sub_4327ec();
    }
    lVar6 = *(long *)(*(long *)(_UICamera_TypeInfo_12d6410 + 0xb8) + 0x1e8);
    if (lVar6 == 0) goto LAB_00c97ea8;
    uVar7 = native_UnityEngine_GameObject__get_activeInHierarchy_8de728(lVar6,0);
    if ((uVar7 & 1) == 0) {
      bVar4 = 0;
    }
    else {
      if (((*(byte *)(_UICamera_TypeInfo_12d6410 + 0x133) >> 2 & 1) != 0) &&
         (*(int *)(_UICamera_TypeInfo_12d6410 + 0xe0) == 0)) {
        native_sub_4327ec();
      }
      lVar6 = *(long *)(*(long *)(_UICamera_TypeInfo_12d6410 + 0xb8) + 0x1e8);
      if (lVar6 == 0) goto LAB_00c97ea8;
      uVar12 = native_UnityEngine_GameObject__GetComponent_BE2_BlockSectionHeader_Custom__4a2214
                         (lVar6,_Method_UnityEngine_GameObject_GetComponent_UIInput____12e4ab0);
      if (((*(byte *)(_UnityEngine_Object_TypeInfo_12d54e0 + 0x133) >> 2 & 1) != 0) &&
         (*(int *)(_UnityEngine_Object_TypeInfo_12d54e0 + 0xe0) == 0)) {
        native_sub_4327ec(_UnityEngine_Object_TypeInfo_12d54e0);
      }
      bVar4 = native_UnityEngine_Object__op_Inequality_8d76fc(uVar12,0,0);
      bVar4 = bVar4 & 1;
    }
    if (((*(byte *)(_UICamera_TypeInfo_12d6410 + 0x133) >> 2 & 1) != 0) &&
       (*(int *)(_UICamera_TypeInfo_12d6410 + 0xe0) == 0)) {
      native_sub_4327ec();
    }
    lVar6 = _UICamera_TypeInfo_12d6410;
    *(byte *)(*(long *)(_UICamera_TypeInfo_12d6410 + 0xb8) + 0xe8) = bVar4;
    lVar11 = *(long *)(lVar6 + 0xb8);
    lVar8 = *(long *)(lVar11 + 0x120);
    if (lVar8 != 0) {
      if (((*(byte *)(lVar6 + 0x133) >> 2 & 1) != 0) && (*(int *)(lVar6 + 0xe0) == 0)) {
        native_sub_4327ec();
        lVar11 = *(long *)(_UICamera_TypeInfo_12d6410 + 0xb8);
        lVar8 = *(long *)(lVar11 + 0x120);
        if (lVar8 == 0) goto LAB_00c97ea8;
      }
      native_UICamera_BoolDelegate__Invoke_550030(lVar8,*(undefined8 *)(lVar11 + 0x1e8),1,0);
      lVar6 = _UICamera_TypeInfo_12d6410;
    }
    if (((*(byte *)(lVar6 + 0x133) >> 2 & 1) != 0) && (*(int *)(lVar6 + 0xe0) == 0)) {
      native_sub_4327ec();
      lVar6 = _UICamera_TypeInfo_12d6410;
    }
    uVar14 = *(undefined8 *)(*(long *)(lVar6 + 0xb8) + 0x1e8);
    auStack_48[0] = 1;
    uVar12 = native_sub_4327fc(_bool_TypeInfo_12d3bd0,auStack_48);
    native_UICamera__Notify_c96a08(uVar14,_StringLiteral_OnSelect_12f02c0,uVar12);
  }
  if (uVar15 != 0) {
    if (((*(byte *)(_UICamera_TypeInfo_12d6410 + 0x133) >> 2 & 1) != 0) &&
       (*(int *)(_UICamera_TypeInfo_12d6410 + 0xe0) == 0)) {
      native_sub_4327ec();
    }
    plVar9 = (long *)(*(long *)(_UICamera_TypeInfo_12d6410 + 0xb8) + 0xb8);
    *plVar9 = lVar13;
    native_sub_4326e0(plVar9,lVar13);
    if (((*(byte *)(_UnityEngine_Object_TypeInfo_12d54e0 + 0x133) >> 2 & 1) != 0) &&
       (*(int *)(_UnityEngine_Object_TypeInfo_12d54e0 + 0xe0) == 0)) {
      native_sub_4327ec();
    }
    uVar7 = native_UnityEngine_Object__op_Inequality_8d76fc(lVar13,0,0);
    uVar12 = 0;
    if ((uVar7 & 1) != 0) {
      if (lVar13 == 0) {
LAB_00c97ea8:
                    /* WARNING: Subroutine does not return */
        native_sub_432810();
      }
      uVar12 = native_UICamera__get_cachedCamera_c95254(lVar13);
    }
    if (((*(byte *)(_UICamera_TypeInfo_12d6410 + 0x133) >> 2 & 1) != 0) &&
       (*(int *)(_UICamera_TypeInfo_12d6410 + 0xe0) == 0)) {
      native_sub_4327ec();
    }
    puVar10 = (undefined8 *)(*(long *)(_UICamera_TypeInfo_12d6410 + 0xb8) + 0xc0);
    *puVar10 = uVar12;
    native_sub_4326e0(puVar10,uVar12);
    puVar10 = (undefined8 *)(*(long *)(_UICamera_TypeInfo_12d6410 + 0xb8) + 0xe0);
    *puVar10 = 0;
    native_sub_4326e0(puVar10,0);
    *(undefined4 *)(*(long *)(_UICamera_TypeInfo_12d6410 + 0xb8) + 0xd4) = 0xffffff9c;
  }
  return;
}



/* UIInput$$get_cursorPosition @ 0x9f3090
 * int32_t UIInput__get_cursorPosition (UIInput_o* __this, const MethodInfo* method); */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* UIInput$$get_cursorPosition
   int32_t UIInput__get_cursorPosition (UIInput_o* __this, const MethodInfo* method); */

undefined4 native_UIInput__get_cursorPosition_9f3090(long param_1)

{
  ulong uVar1;
  undefined4 *puVar2;
  
  if ((bRam000000000134197b & 1) == 0) {
    native_sub_43273c(&UIInput_TypeInfo_12d6450);
    bRam000000000134197b = 1;
  }
  if (((*(byte *)(_UIInput_TypeInfo_12d6450 + 0x133) >> 2 & 1) != 0) &&
     (*(int *)(_UIInput_TypeInfo_12d6450 + 0xe0) == 0)) {
    native_sub_4327ec();
  }
  if (((*(long *)(*(long *)(_UIInput_TypeInfo_12d6450 + 0xb8) + 0x20) == 0) ||
      (uVar1 = native_UIInput__get_inputShouldBeHidden_9f28e0(param_1), (uVar1 & 1) != 0)) &&
     (uVar1 = native_UIInput__get_isSelected_9f283c(param_1), (uVar1 & 1) != 0)) {
    puVar2 = (undefined4 *)(param_1 + 0xc4);
  }
  else {
    if (*(char *)(param_1 + 0xb4) != '\0') {
      native_UIInput__Init_9f1988(param_1);
    }
    if (*(long *)(param_1 + 0x90) == 0) {
                    /* WARNING: Subroutine does not return */
      native_sub_432810();
    }
    puVar2 = (undefined4 *)(*(long *)(param_1 + 0x90) + 0x10);
  }
  return *puVar2;
}



/* UIInput$$set_cursorPosition @ 0x9f3140
 * void UIInput__set_cursorPosition (UIInput_o* __this, int32_t value, const MethodInfo* method); */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* UIInput$$set_cursorPosition
   void UIInput__set_cursorPosition (UIInput_o* __this, int32_t value, const MethodInfo* method); */

void native_UIInput__set_cursorPosition_9f3140(long *param_1,undefined4 param_2)

{
  undefined4 *puVar1;
  undefined4 *puVar2;
  bool bVar3;
  ushort uVar4;
  uint uVar5;
  uint uVar6;
  undefined4 uVar7;
  int iVar8;
  int iVar9;
  undefined4 uVar10;
  undefined8 uVar11;
  undefined8 *puVar12;
  undefined8 uVar13;
  long *plVar14;
  long *plVar15;
  ulong uVar16;
  int iVar17;
  long lVar18;
  long lVar19;
  int *piVar20;
  ushort uVar21;
  int iVar22;
  long lVar23;
  long *plVar24;
  long *plVar25;
  long *plVar26;
  float fVar27;
  
  if ((bRam000000000134197c & 1) == 0) {
    native_sub_43273c(&UIInput_TypeInfo_12d6450);
    bRam000000000134197c = 1;
  }
  uVar16 = native_UIInput__get_isSelected_9f283c(param_1);
  if ((uVar16 & 1) == 0) {
    return;
  }
  if (((*(byte *)(_UIInput_TypeInfo_12d6450 + 0x133) >> 2 & 1) != 0) &&
     (*(int *)(_UIInput_TypeInfo_12d6450 + 0xe0) == 0)) {
    native_sub_4327ec();
  }
  if ((*(long *)(*(long *)(_UIInput_TypeInfo_12d6450 + 0xb8) + 0x20) != 0) &&
     (uVar16 = native_UIInput__get_inputShouldBeHidden_9f28e0(param_1), (uVar16 & 1) == 0)) {
    return;
  }
  *(undefined4 *)((long)param_1 + 0xc4) = param_2;
  if ((bRam0000000001341994 & 1) == 0) {
    native_sub_43273c(&INGUIFont_TypeInfo_12d4c70);
    native_sub_43273c(&Method_NGUITools_AddWidget_UITexture____12e56e8);
    native_sub_43273c(&NGUITools_TypeInfo_12d53c8);
    native_sub_43273c(&UnityEngine_Object_TypeInfo_12d54e0);
    native_sub_43273c(&UnityEngine_Texture2D_TypeInfo_12d61f0);
    native_sub_43273c(&UIInput_TypeInfo_12d6450);
    native_sub_43273c(&StringLiteral_x_12f6b98);
    native_sub_43273c(&StringLiteral__12eaac0);
    native_sub_43273c(&StringLiteral___12eb5f0);
    native_sub_43273c(&StringLiteral_Input_Caret_12ee890);
    native_sub_43273c(&StringLiteral_Input_Highlight_12ee898);
    bRam0000000001341994 = 1;
  }
  plVar26 = param_1 + 3;
  lVar23 = *plVar26;
  if (((*(byte *)(_UnityEngine_Object_TypeInfo_12d54e0 + 0x133) >> 2 & 1) != 0) &&
     (*(int *)(_UnityEngine_Object_TypeInfo_12d54e0 + 0xe0) == 0)) {
    native_sub_4327ec();
  }
  uVar16 = native_UnityEngine_Object__op_Inequality_8d76fc(lVar23,0,0);
  if ((uVar16 & 1) == 0) {
    return;
  }
  if (*(char *)((long)param_1 + 0xb4) != '\0') {
    native_UIInput__Init_9f1988(param_1);
  }
  uVar5 = native_UIInput__get_isSelected_9f283c(param_1);
  if (*(char *)((long)param_1 + 0xb4) != '\0') {
    native_UIInput__Init_9f1988(param_1);
  }
  lVar23 = param_1[0x12];
  uVar16 = native_System_String__IsNullOrEmpty_b09430(lVar23,0);
  if ((uVar16 & 1) == 0) {
    lVar18 = *plVar26;
    uVar6 = 0;
LAB_009f1c84:
    plVar15 = param_1 + 9;
    puVar1 = (undefined4 *)((long)param_1 + 0x4c);
    plVar24 = param_1 + 10;
    puVar2 = (undefined4 *)((long)param_1 + 0x54);
  }
  else {
    uVar11 = native_UnityEngine_Input__get_compositionString_dbdf20(0);
    uVar6 = native_System_String__IsNullOrEmpty_b09430(uVar11,0);
    lVar18 = *plVar26;
    if (((uVar5 | uVar6 ^ 0xffffffff) & 1) != 0) goto LAB_009f1c84;
    plVar15 = param_1 + 0x14;
    puVar1 = (undefined4 *)((long)param_1 + 0xa4);
    plVar24 = param_1 + 0x15;
    puVar2 = (undefined4 *)((long)param_1 + 0xac);
    uVar6 = 1;
  }
  if (lVar18 == 0) goto LAB_009f2784;
  native_UIWidget__set_color_947adc((int)*plVar15,*puVar1,(int)*plVar24,*puVar2,lVar18,0);
  uVar11 = _StringLiteral___12eb5f0;
  lVar18 = _StringLiteral__12eaac0;
  if ((uVar6 & 1) == 0) {
    if ((int)param_1[4] == 2) {
      if (*plVar26 == 0) goto LAB_009f2784;
      plVar15 = (long *)native_UILabel__get_font_ae77e8(*plVar26,0);
      uVar13 = uVar11;
      if (plVar15 != (long *)0x0) {
        lVar19 = *plVar15;
        if ((ulong)*(ushort *)(lVar19 + 0x12a) != 0) {
          uVar16 = 0;
          piVar20 = (int *)(*(long *)(lVar19 + 0xb0) + 8);
          do {
            if (*(long *)(piVar20 + -2) == _INGUIFont_TypeInfo_12d4c70) {
              puVar12 = (undefined8 *)(lVar19 + (long)(*piVar20 + 2) * 0x10 + 0x138);
              goto LAB_009f1da4;
            }
            uVar16 = uVar16 + 1;
            piVar20 = piVar20 + 4;
          } while (uVar16 < *(ushort *)(lVar19 + 0x12a));
        }
        puVar12 = (undefined8 *)native_sub_3c9b34(plVar15,_INGUIFont_TypeInfo_12d4c70,2);
LAB_009f1da4:
        lVar19 = (*(code *)*puVar12)(plVar15,puVar12[1]);
        if (lVar19 != 0) {
          lVar19 = *plVar15;
          if ((ulong)*(ushort *)(lVar19 + 0x12a) != 0) {
            uVar16 = 0;
            piVar20 = (int *)(*(long *)(lVar19 + 0xb0) + 8);
            do {
              if (*(long *)(piVar20 + -2) == _INGUIFont_TypeInfo_12d4c70) {
                puVar12 = (undefined8 *)(lVar19 + (long)(*piVar20 + 2) * 0x10 + 0x138);
                goto LAB_009f1e0c;
              }
              uVar16 = uVar16 + 1;
              piVar20 = piVar20 + 4;
            } while (uVar16 < *(ushort *)(lVar19 + 0x12a));
          }
          puVar12 = (undefined8 *)native_sub_3c9b34(plVar15,_INGUIFont_TypeInfo_12d4c70,2);
LAB_009f1e0c:
          lVar19 = (*(code *)*puVar12)(plVar15,puVar12[1]);
          if (lVar19 == 0) goto LAB_009f2784;
          lVar19 = native_BMFont__GetGlyph_dd1c0c(lVar19,0x2a,0);
          uVar13 = _StringLiteral_x_12f6b98;
          if (lVar19 != 0) {
            uVar13 = uVar11;
          }
        }
      }
      if (lVar23 == 0) goto LAB_009f2784;
      iVar8 = *(int *)(lVar23 + 0x10);
      if (0 < iVar8) {
        do {
          lVar18 = native_System_String__Concat_afbd68(lVar18,uVar13,0);
          iVar8 = iVar8 + -1;
        } while (iVar8 != 0);
      }
      lVar23 = lVar18;
      if ((uVar5 & 1) == 0) goto LAB_009f1ec8;
LAB_009f1e6c:
      if (lVar23 == 0) goto LAB_009f2784;
      uVar10 = *(undefined4 *)(lVar23 + 0x10);
      uVar7 = native_UIInput__get_cursorPosition_9f3090(param_1);
      iVar8 = native_UnityEngine_Mathf__Min_8e4c18(uVar10,uVar7,0);
      uVar11 = native_System_String__Substring_b09fac(lVar23,0,iVar8,0);
      uVar13 = native_UnityEngine_Input__get_compositionString_dbdf20(0);
      uVar11 = native_System_String__Concat_afbd68(uVar11,uVar13,0);
    }
    else {
      if ((uVar5 & 1) != 0) goto LAB_009f1e6c;
LAB_009f1ec8:
      if (lVar23 == 0) goto LAB_009f2784;
      uVar11 = native_System_String__Substring_b09fac(lVar23,0,0,0);
      iVar8 = 0;
    }
    uVar13 = native_System_String__Substring_b09fac(lVar23,iVar8,*(int *)(lVar23 + 0x10) - iVar8,0);
    lVar23 = native_System_String__Concat_afbd68(uVar11,uVar13,0);
    if ((uVar5 & 1) == 0) {
LAB_009f1fb0:
      if (((*(byte *)(_UIInput_TypeInfo_12d6450 + 0x133) >> 2 & 1) != 0) &&
         (*(int *)(_UIInput_TypeInfo_12d6450 + 0xe0) == 0)) {
        native_sub_4327ec();
      }
      *(undefined4 *)(*(long *)(_UIInput_TypeInfo_12d6450 + 0xb8) + 0x10) = 0;
      lVar18 = *plVar26;
      if (lVar18 == 0) goto LAB_009f2784;
      uVar10 = (undefined4)param_1[0x17];
      goto LAB_009f1fe8;
    }
    lVar18 = *plVar26;
    if (lVar18 == 0) goto LAB_009f2784;
    if ((*(int *)(lVar18 + 0x1e4) != 1) || (*(int *)(lVar18 + 0x1c0) != 1)) goto LAB_009f1fb0;
    iVar9 = native_UILabel__CalculateOffsetToFit_aedc24(lVar18,lVar23,0);
    uVar4 = *(ushort *)(_UIInput_TypeInfo_12d6450 + 0x132);
    uVar21 = uVar4 & 0x400;
    if (iVar9 == 0) {
      if (((uVar4 & 0x400) != 0) && (*(int *)(_UIInput_TypeInfo_12d6450 + 0xe0) == 0)) {
        native_sub_4327ec();
      }
      *(undefined4 *)(*(long *)(_UIInput_TypeInfo_12d6450 + 0xb8) + 0x10) = 0;
      lVar18 = *plVar26;
      if (lVar18 == 0) goto LAB_009f2784;
      uVar10 = (undefined4)param_1[0x17];
LAB_009f2678:
      native_UILabel__set_alignment_ae8458(lVar18,uVar10,0);
    }
    else {
      if (((uVar4 & 0x400) != 0) && (*(int *)(_UIInput_TypeInfo_12d6450 + 0xe0) == 0)) {
        native_sub_4327ec();
        uVar21 = *(ushort *)(_UIInput_TypeInfo_12d6450 + 0x132) & 0x400;
      }
      piVar20 = (int *)(*(long *)(_UIInput_TypeInfo_12d6450 + 0xb8) + 0x10);
      iVar22 = *piVar20;
      if (iVar8 < iVar22) {
        if ((uVar21 != 0) && (*(int *)(_UIInput_TypeInfo_12d6450 + 0xe0) == 0)) {
          native_sub_4327ec();
          piVar20 = (int *)(*(long *)(_UIInput_TypeInfo_12d6450 + 0xb8) + 0x10);
        }
        *piVar20 = iVar8;
LAB_009f266c:
        lVar18 = *plVar26;
        if (lVar18 == 0) goto LAB_009f2784;
        uVar10 = 1;
        goto LAB_009f2678;
      }
      if ((uVar21 != 0) && (*(int *)(_UIInput_TypeInfo_12d6450 + 0xe0) == 0)) {
        native_sub_4327ec();
        piVar20 = (int *)(*(long *)(_UIInput_TypeInfo_12d6450 + 0xb8) + 0x10);
        iVar22 = *piVar20;
      }
      if (iVar9 < iVar22) {
        if (((*(byte *)(_UIInput_TypeInfo_12d6450 + 0x133) >> 2 & 1) != 0) &&
           (*(int *)(_UIInput_TypeInfo_12d6450 + 0xe0) == 0)) {
          native_sub_4327ec();
          piVar20 = (int *)(*(long *)(_UIInput_TypeInfo_12d6450 + 0xb8) + 0x10);
        }
        *piVar20 = iVar9;
        goto LAB_009f266c;
      }
      if (lVar23 == 0) goto LAB_009f2784;
      lVar18 = *plVar26;
      uVar11 = native_System_String__Substring_b09fac(lVar23,0,iVar8,0);
      if (lVar18 == 0) goto LAB_009f2784;
      iVar8 = native_UILabel__CalculateOffsetToFit_aedc24(lVar18,uVar11,0);
      if (((*(byte *)(_UIInput_TypeInfo_12d6450 + 0x133) >> 2 & 1) != 0) &&
         (*(int *)(_UIInput_TypeInfo_12d6450 + 0xe0) == 0)) {
        native_sub_4327ec(_UIInput_TypeInfo_12d6450);
      }
      piVar20 = (int *)(*(long *)(_UIInput_TypeInfo_12d6450 + 0xb8) + 0x10);
      if (*piVar20 < iVar8) {
        if (((*(byte *)(_UIInput_TypeInfo_12d6450 + 0x133) >> 2 & 1) != 0) &&
           (*(int *)(_UIInput_TypeInfo_12d6450 + 0xe0) == 0)) {
          native_sub_4327ec(_UIInput_TypeInfo_12d6450);
          piVar20 = (int *)(*(long *)(_UIInput_TypeInfo_12d6450 + 0xb8) + 0x10);
        }
        *piVar20 = iVar8;
        lVar18 = *plVar26;
        if (lVar18 == 0) goto LAB_009f2784;
        uVar10 = 3;
        goto LAB_009f2678;
      }
    }
    if (((*(byte *)(_UIInput_TypeInfo_12d6450 + 0x133) >> 2 & 1) != 0) &&
       (*(int *)(_UIInput_TypeInfo_12d6450 + 0xe0) == 0)) {
      native_sub_4327ec();
    }
    iVar8 = *(int *)(*(long *)(_UIInput_TypeInfo_12d6450 + 0xb8) + 0x10);
    if (iVar8 != 0) {
      if (((*(byte *)(_UIInput_TypeInfo_12d6450 + 0x133) >> 2 & 1) != 0) &&
         (*(int *)(_UIInput_TypeInfo_12d6450 + 0xe0) == 0)) {
        native_sub_4327ec();
        iVar8 = *(int *)(*(long *)(_UIInput_TypeInfo_12d6450 + 0xb8) + 0x10);
      }
      if (lVar23 == 0) goto LAB_009f2784;
      lVar23 = native_System_String__Substring_b09fac
                         (lVar23,iVar8,*(int *)(lVar23 + 0x10) - iVar8,0);
    }
  }
  else {
    lVar18 = *plVar26;
    if (lVar18 == 0) goto LAB_009f2784;
    uVar10 = (undefined4)param_1[0x17];
    plVar15 = (long *)&StringLiteral__12eaac0;
    if ((uVar5 & 1) == 0) {
      plVar15 = param_1 + 0x13;
    }
    lVar23 = *plVar15;
LAB_009f1fe8:
    native_UILabel__set_alignment_ae8458(lVar18,uVar10,0);
  }
  if (*plVar26 == 0) goto LAB_009f2784;
  native_UILabel__set_text_ae81a8(*plVar26,lVar23,0);
  if ((uVar5 & 1) == 0) {
LAB_009f2280:
                    /* WARNING: Could not recover jumptable at 0x009f22a4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (**(code **)(*param_1 + 0x1c8))(param_1,*(undefined8 *)(*param_1 + 0x1d0));
    return;
  }
  if (((*(byte *)(_UIInput_TypeInfo_12d6450 + 0x133) >> 2 & 1) != 0) &&
     (*(int *)(_UIInput_TypeInfo_12d6450 + 0xe0) == 0)) {
    native_sub_4327ec();
  }
  if ((*(long *)(*(long *)(_UIInput_TypeInfo_12d6450 + 0xb8) + 0x20) != 0) &&
     (uVar16 = native_UIInput__get_inputShouldBeHidden_9f28e0(param_1), (uVar16 & 1) == 0))
  goto LAB_009f2280;
  lVar23 = param_1[0x18];
  if (((*(byte *)(_UIInput_TypeInfo_12d6450 + 0x133) >> 2 & 1) != 0) &&
     (*(int *)(_UIInput_TypeInfo_12d6450 + 0xe0) == 0)) {
    native_sub_4327ec();
  }
  iVar8 = *(int *)(*(long *)(_UIInput_TypeInfo_12d6450 + 0xb8) + 0x10);
  plVar15 = param_1 + 0x1b;
  lVar18 = *plVar15;
  iVar9 = *(int *)((long)param_1 + 0xc4);
  if (((*(byte *)(_UnityEngine_Object_TypeInfo_12d54e0 + 0x133) >> 2 & 1) != 0) &&
     (*(int *)(_UnityEngine_Object_TypeInfo_12d54e0 + 0xe0) == 0)) {
    native_sub_4327ec();
  }
  uVar16 = native_UnityEngine_Object__op_Equality_8e9a3c(lVar18,0,0);
  if ((uVar16 & 1) != 0) {
    lVar18 = native_sub_432808(_UnityEngine_Texture2D_TypeInfo_12d61f0);
    native_UnityEngine_Texture2D___ctor_76f4a4(lVar18,2,2,5,0,0);
    *plVar15 = lVar18;
    native_sub_4326e0(plVar15,lVar18);
    iVar22 = 0;
    do {
      iVar17 = 0;
      do {
        lVar18 = *plVar15;
        native_UnityEngine_Color__get_white_8d9e10(0);
        if (lVar18 == 0) goto LAB_009f2784;
        native_UnityEngine_Texture2D__SetPixel_76f52c(lVar18,iVar17,iVar22,0);
        bVar3 = iVar17 == 0;
        iVar17 = 1;
      } while (bVar3);
      bVar3 = iVar22 == 0;
      iVar22 = 1;
    } while (bVar3);
    if (*plVar15 == 0) goto LAB_009f2784;
    native_UnityEngine_Texture2D__Apply_76f804(*plVar15,0);
  }
  iVar22 = (int)lVar23 - iVar8;
  iVar9 = iVar9 - iVar8;
  if (iVar22 != iVar9) {
    plVar24 = param_1 + 0x19;
    lVar23 = *plVar24;
    if (((*(byte *)(_UnityEngine_Object_TypeInfo_12d54e0 + 0x133) >> 2 & 1) != 0) &&
       (*(int *)(_UnityEngine_Object_TypeInfo_12d54e0 + 0xe0) == 0)) {
      native_sub_4327ec();
    }
    uVar16 = native_UnityEngine_Object__op_Equality_8e9a3c(lVar23,0,0);
    if ((uVar16 & 1) == 0) {
      plVar14 = (long *)*plVar26;
      if (plVar14 == (long *)0x0) goto LAB_009f2784;
      plVar25 = (long *)*plVar24;
      uVar10 = (**(code **)(*plVar14 + 0x2a8))(plVar14,*(undefined8 *)(*plVar14 + 0x2b0));
      if (plVar25 == (long *)0x0) goto LAB_009f2784;
      (**(code **)(*plVar25 + 0x2b8))(plVar25,uVar10,*(undefined8 *)(*plVar25 + 0x2c0));
      plVar14 = (long *)*plVar24;
      if (plVar14 == (long *)0x0) goto LAB_009f2784;
      (**(code **)(*plVar14 + 0x338))(plVar14,*plVar15,*(undefined8 *)(*plVar14 + 0x340));
      plVar14 = (long *)*plVar24;
      if (plVar14 == (long *)0x0) goto LAB_009f2784;
      (**(code **)(*plVar14 + 0x378))(plVar14,*(undefined8 *)(*plVar14 + 0x380));
      if (*plVar24 == 0) goto LAB_009f2784;
      native_UnityEngine_Behaviour__set_enabled_8d7b0c(*plVar24,1,0);
    }
    else {
      if (*plVar26 == 0) goto LAB_009f2784;
      uVar11 = native_UIRect__get_cachedGameObject_c2d1c0(*plVar26,0);
      if (((*(byte *)(_NGUITools_TypeInfo_12d53c8 + 0x133) >> 2 & 1) != 0) &&
         (*(int *)(_NGUITools_TypeInfo_12d53c8 + 0xe0) == 0)) {
        native_sub_4327ec(_NGUITools_TypeInfo_12d53c8);
      }
      lVar23 = native_NGUITools__AddWidget_object__4a528c
                         (uVar11,0x7fffffff,_Method_NGUITools_AddWidget_UITexture____12e56e8);
      *plVar24 = lVar23;
      native_sub_4326e0(plVar24,lVar23);
      if (*plVar24 == 0) goto LAB_009f2784;
      native_UnityEngine_Object__set_name_8e9c08(*plVar24,_StringLiteral_Input_Highlight_12ee898,0);
      plVar14 = (long *)*plVar24;
      if (plVar14 == (long *)0x0) goto LAB_009f2784;
      (**(code **)(*plVar14 + 0x338))(plVar14,*plVar15,*(undefined8 *)(*plVar14 + 0x340));
      if (*plVar24 == 0) goto LAB_009f2784;
      *(undefined1 *)(*plVar24 + 0x100) = 0;
      plVar14 = (long *)*plVar26;
      if (plVar14 == (long *)0x0) goto LAB_009f2784;
      plVar25 = (long *)*plVar24;
      uVar10 = (**(code **)(*plVar14 + 0x2a8))(plVar14,*(undefined8 *)(*plVar14 + 0x2b0));
      if (plVar25 == (long *)0x0) goto LAB_009f2784;
      (**(code **)(*plVar25 + 0x2b8))(plVar25,uVar10,*(undefined8 *)(*plVar25 + 0x2c0));
      if (*plVar26 == 0) goto LAB_009f2784;
      lVar23 = *plVar24;
      uVar11 = native_UIRect__get_cachedTransform_c27c58(*plVar26,0);
      if (lVar23 == 0) goto LAB_009f2784;
      native_UIRect__SetAnchor_c2ea60(lVar23,uVar11,0);
    }
  }
  plVar24 = param_1 + 0x1a;
  lVar23 = *plVar24;
  if (((*(byte *)(_UnityEngine_Object_TypeInfo_12d54e0 + 0x133) >> 2 & 1) != 0) &&
     (*(int *)(_UnityEngine_Object_TypeInfo_12d54e0 + 0xe0) == 0)) {
    native_sub_4327ec();
  }
  uVar16 = native_UnityEngine_Object__op_Equality_8e9a3c(lVar23,0,0);
  if ((uVar16 & 1) == 0) {
    plVar14 = (long *)*plVar26;
    if (plVar14 == (long *)0x0) goto LAB_009f2784;
    plVar25 = (long *)*plVar24;
    uVar10 = (**(code **)(*plVar14 + 0x2a8))(plVar14,*(undefined8 *)(*plVar14 + 0x2b0));
    if (plVar25 == (long *)0x0) goto LAB_009f2784;
    (**(code **)(*plVar25 + 0x2b8))(plVar25,uVar10,*(undefined8 *)(*plVar25 + 0x2c0));
    plVar14 = (long *)*plVar24;
    if (plVar14 == (long *)0x0) goto LAB_009f2784;
    (**(code **)(*plVar14 + 0x338))(plVar14,*plVar15,*(undefined8 *)(*plVar14 + 0x340));
    plVar15 = (long *)*plVar24;
    if (plVar15 == (long *)0x0) goto LAB_009f2784;
    (**(code **)(*plVar15 + 0x378))(plVar15,*(undefined8 *)(*plVar15 + 0x380));
    if (*plVar24 == 0) goto LAB_009f2784;
    native_UnityEngine_Behaviour__set_enabled_8d7b0c(*plVar24,1,0);
  }
  else {
    if (*plVar26 == 0) goto LAB_009f2784;
    uVar11 = native_UIRect__get_cachedGameObject_c2d1c0(*plVar26,0);
    if (((*(byte *)(_NGUITools_TypeInfo_12d53c8 + 0x133) >> 2 & 1) != 0) &&
       (*(int *)(_NGUITools_TypeInfo_12d53c8 + 0xe0) == 0)) {
      native_sub_4327ec(_NGUITools_TypeInfo_12d53c8);
    }
    lVar23 = native_NGUITools__AddWidget_object__4a528c
                       (uVar11,0x7fffffff,_Method_NGUITools_AddWidget_UITexture____12e56e8);
    *plVar24 = lVar23;
    native_sub_4326e0(plVar24,lVar23);
    if (*plVar24 == 0) goto LAB_009f2784;
    native_UnityEngine_Object__set_name_8e9c08(*plVar24,_StringLiteral_Input_Caret_12ee890,0);
    plVar14 = (long *)*plVar24;
    if (plVar14 == (long *)0x0) goto LAB_009f2784;
    (**(code **)(*plVar14 + 0x338))(plVar14,*plVar15,*(undefined8 *)(*plVar14 + 0x340));
    if (*plVar24 == 0) goto LAB_009f2784;
    *(undefined1 *)(*plVar24 + 0x100) = 0;
    plVar15 = (long *)*plVar26;
    if (plVar15 == (long *)0x0) goto LAB_009f2784;
    plVar14 = (long *)*plVar24;
    uVar10 = (**(code **)(*plVar15 + 0x2a8))(plVar15,*(undefined8 *)(*plVar15 + 0x2b0));
    if (plVar14 == (long *)0x0) goto LAB_009f2784;
    (**(code **)(*plVar14 + 0x2b8))(plVar14,uVar10,*(undefined8 *)(*plVar14 + 0x2c0));
    if (*plVar26 == 0) goto LAB_009f2784;
    lVar23 = *plVar24;
    uVar11 = native_UIRect__get_cachedTransform_c27c58(*plVar26,0);
    if (lVar23 == 0) goto LAB_009f2784;
    native_UIRect__SetAnchor_c2ea60(lVar23,uVar11,0);
  }
  if (*plVar24 == 0) goto LAB_009f2784;
  lVar23 = *plVar26;
  uVar11 = *(undefined8 *)(*plVar24 + 0xf8);
  if (iVar22 == iVar9) {
    if (lVar23 == 0) goto LAB_009f2784;
    native_UILabel__PrintOverlay_aec838
              ((int)param_1[0xb],*(undefined4 *)((long)param_1 + 0x5c),(int)param_1[0xc],
               *(undefined4 *)((long)param_1 + 100),(int)param_1[0xd],
               *(undefined4 *)((long)param_1 + 0x6c),(int)param_1[0xe],
               *(undefined4 *)((long)param_1 + 0x74),lVar23,iVar22,iVar22,uVar11,0,0);
    lVar23 = param_1[0x19];
    if (((*(byte *)(_UnityEngine_Object_TypeInfo_12d54e0 + 0x133) >> 2 & 1) != 0) &&
       (*(int *)(_UnityEngine_Object_TypeInfo_12d54e0 + 0xe0) == 0)) {
      native_sub_4327ec();
    }
    uVar16 = native_UnityEngine_Object__op_Inequality_8d76fc(lVar23,0,0);
    if ((uVar16 & 1) != 0) {
      lVar23 = param_1[0x19];
      if (lVar23 == 0) goto LAB_009f2784;
      uVar5 = 0;
      goto LAB_009f25b0;
    }
  }
  else {
    if ((param_1[0x19] == 0) || (lVar23 == 0)) goto LAB_009f2784;
    native_UILabel__PrintOverlay_aec838
              ((int)param_1[0xb],*(undefined4 *)((long)param_1 + 0x5c),(int)param_1[0xc],
               *(undefined4 *)((long)param_1 + 100),(int)param_1[0xd],
               *(undefined4 *)((long)param_1 + 0x6c),(int)param_1[0xe],
               *(undefined4 *)((long)param_1 + 0x74),lVar23,iVar22,iVar9,uVar11,
               *(undefined8 *)(param_1[0x19] + 0xf8),0);
    lVar23 = param_1[0x19];
    if ((lVar23 == 0) || (*(long *)(lVar23 + 0xf8) == 0)) goto LAB_009f2784;
    uVar5 = native_UIGeometry__get_hasVertices_9ef420();
    uVar5 = uVar5 & 1;
LAB_009f25b0:
    native_UnityEngine_Behaviour__set_enabled_8d7b0c(lVar23,uVar5,0);
  }
  fVar27 = (float)native_RealTime__get_time_72d024(0);
  *(float *)(param_1 + 0x1c) = fVar27 + 0.5;
  if (param_1[3] != 0) {
    *(undefined4 *)((long)param_1 + 0xe4) = *(undefined4 *)(param_1[3] + 0x8c);
    return;
  }
LAB_009f2784:
                    /* WARNING: Subroutine does not return */
  native_sub_432810();
}



/* UIInput$$get_selectionStart @ 0x9f31e8
 * int32_t UIInput__get_selectionStart (UIInput_o* __this, const MethodInfo* method); */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* UIInput$$get_selectionStart
   int32_t UIInput__get_selectionStart (UIInput_o* __this, const MethodInfo* method); */

undefined4 native_UIInput__get_selectionStart_9f31e8(long param_1)

{
  undefined4 uVar1;
  ulong uVar2;
  undefined4 *puVar3;
  
  if ((bRam000000000134197d & 1) == 0) {
    native_sub_43273c(&UIInput_TypeInfo_12d6450);
    bRam000000000134197d = 1;
  }
  if (((*(byte *)(_UIInput_TypeInfo_12d6450 + 0x133) >> 2 & 1) != 0) &&
     (*(int *)(_UIInput_TypeInfo_12d6450 + 0xe0) == 0)) {
    native_sub_4327ec();
  }
  if ((*(long *)(*(long *)(_UIInput_TypeInfo_12d6450 + 0xb8) + 0x20) == 0) ||
     (uVar2 = native_UIInput__get_inputShouldBeHidden_9f28e0(param_1), (uVar2 & 1) != 0)) {
    uVar2 = native_UIInput__get_isSelected_9f283c(param_1);
    if ((uVar2 & 1) == 0) {
      if (*(char *)(param_1 + 0xb4) != '\0') {
        native_UIInput__Init_9f1988(param_1);
      }
      if (*(long *)(param_1 + 0x90) == 0) {
                    /* WARNING: Subroutine does not return */
        native_sub_432810();
      }
      puVar3 = (undefined4 *)(*(long *)(param_1 + 0x90) + 0x10);
    }
    else {
      puVar3 = (undefined4 *)(param_1 + 0xc0);
    }
    uVar1 = *puVar3;
  }
  else {
    uVar1 = 0;
  }
  return uVar1;
}



/* UIInput$$set_selectionStart @ 0x9f32a0
 * void UIInput__set_selectionStart (UIInput_o* __this, int32_t value, const MethodInfo* method); */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* UIInput$$set_selectionStart
   void UIInput__set_selectionStart (UIInput_o* __this, int32_t value, const MethodInfo* method); */

void native_UIInput__set_selectionStart_9f32a0(long *param_1,undefined4 param_2)

{
  undefined4 *puVar1;
  undefined4 *puVar2;
  bool bVar3;
  ushort uVar4;
  uint uVar5;
  uint uVar6;
  undefined4 uVar7;
  int iVar8;
  int iVar9;
  undefined4 uVar10;
  undefined8 uVar11;
  undefined8 *puVar12;
  undefined8 uVar13;
  long *plVar14;
  long *plVar15;
  ulong uVar16;
  int iVar17;
  long lVar18;
  long lVar19;
  int *piVar20;
  ushort uVar21;
  int iVar22;
  long lVar23;
  long *plVar24;
  long *plVar25;
  long *plVar26;
  float fVar27;
  
  if ((bRam000000000134197e & 1) == 0) {
    native_sub_43273c(&UIInput_TypeInfo_12d6450);
    bRam000000000134197e = 1;
  }
  uVar16 = native_UIInput__get_isSelected_9f283c(param_1);
  if ((uVar16 & 1) == 0) {
    return;
  }
  if (((*(byte *)(_UIInput_TypeInfo_12d6450 + 0x133) >> 2 & 1) != 0) &&
     (*(int *)(_UIInput_TypeInfo_12d6450 + 0xe0) == 0)) {
    native_sub_4327ec();
  }
  if ((*(long *)(*(long *)(_UIInput_TypeInfo_12d6450 + 0xb8) + 0x20) != 0) &&
     (uVar16 = native_UIInput__get_inputShouldBeHidden_9f28e0(param_1), (uVar16 & 1) == 0)) {
    return;
  }
  *(undefined4 *)(param_1 + 0x18) = param_2;
  if ((bRam0000000001341994 & 1) == 0) {
    native_sub_43273c(&INGUIFont_TypeInfo_12d4c70);
    native_sub_43273c(&Method_NGUITools_AddWidget_UITexture____12e56e8);
    native_sub_43273c(&NGUITools_TypeInfo_12d53c8);
    native_sub_43273c(&UnityEngine_Object_TypeInfo_12d54e0);
    native_sub_43273c(&UnityEngine_Texture2D_TypeInfo_12d61f0);
    native_sub_43273c(&UIInput_TypeInfo_12d6450);
    native_sub_43273c(&StringLiteral_x_12f6b98);
    native_sub_43273c(&StringLiteral__12eaac0);
    native_sub_43273c(&StringLiteral___12eb5f0);
    native_sub_43273c(&StringLiteral_Input_Caret_12ee890);
    native_sub_43273c(&StringLiteral_Input_Highlight_12ee898);
    bRam0000000001341994 = 1;
  }
  plVar26 = param_1 + 3;
  lVar23 = *plVar26;
  if (((*(byte *)(_UnityEngine_Object_TypeInfo_12d54e0 + 0x133) >> 2 & 1) != 0) &&
     (*(int *)(_UnityEngine_Object_TypeInfo_12d54e0 + 0xe0) == 0)) {
    native_sub_4327ec();
  }
  uVar16 = native_UnityEngine_Object__op_Inequality_8d76fc(lVar23,0,0);
  if ((uVar16 & 1) == 0) {
    return;
  }
  if (*(char *)((long)param_1 + 0xb4) != '\0') {
    native_UIInput__Init_9f1988(param_1);
  }
  uVar5 = native_UIInput__get_isSelected_9f283c(param_1);
  if (*(char *)((long)param_1 + 0xb4) != '\0') {
    native_UIInput__Init_9f1988(param_1);
  }
  lVar23 = param_1[0x12];
  uVar16 = native_System_String__IsNullOrEmpty_b09430(lVar23,0);
  if ((uVar16 & 1) == 0) {
    lVar18 = *plVar26;
    uVar6 = 0;
LAB_009f1c84:
    plVar15 = param_1 + 9;
    puVar1 = (undefined4 *)((long)param_1 + 0x4c);
    plVar24 = param_1 + 10;
    puVar2 = (undefined4 *)((long)param_1 + 0x54);
  }
  else {
    uVar11 = native_UnityEngine_Input__get_compositionString_dbdf20(0);
    uVar6 = native_System_String__IsNullOrEmpty_b09430(uVar11,0);
    lVar18 = *plVar26;
    if (((uVar5 | uVar6 ^ 0xffffffff) & 1) != 0) goto LAB_009f1c84;
    plVar15 = param_1 + 0x14;
    puVar1 = (undefined4 *)((long)param_1 + 0xa4);
    plVar24 = param_1 + 0x15;
    puVar2 = (undefined4 *)((long)param_1 + 0xac);
    uVar6 = 1;
  }
  if (lVar18 == 0) goto LAB_009f2784;
  native_UIWidget__set_color_947adc((int)*plVar15,*puVar1,(int)*plVar24,*puVar2,lVar18,0);
  uVar11 = _StringLiteral___12eb5f0;
  lVar18 = _StringLiteral__12eaac0;
  if ((uVar6 & 1) == 0) {
    if ((int)param_1[4] == 2) {
      if (*plVar26 == 0) goto LAB_009f2784;
      plVar15 = (long *)native_UILabel__get_font_ae77e8(*plVar26,0);
      uVar13 = uVar11;
      if (plVar15 != (long *)0x0) {
        lVar19 = *plVar15;
        if ((ulong)*(ushort *)(lVar19 + 0x12a) != 0) {
          uVar16 = 0;
          piVar20 = (int *)(*(long *)(lVar19 + 0xb0) + 8);
          do {
            if (*(long *)(piVar20 + -2) == _INGUIFont_TypeInfo_12d4c70) {
              puVar12 = (undefined8 *)(lVar19 + (long)(*piVar20 + 2) * 0x10 + 0x138);
              goto LAB_009f1da4;
            }
            uVar16 = uVar16 + 1;
            piVar20 = piVar20 + 4;
          } while (uVar16 < *(ushort *)(lVar19 + 0x12a));
        }
        puVar12 = (undefined8 *)native_sub_3c9b34(plVar15,_INGUIFont_TypeInfo_12d4c70,2);
LAB_009f1da4:
        lVar19 = (*(code *)*puVar12)(plVar15,puVar12[1]);
        if (lVar19 != 0) {
          lVar19 = *plVar15;
          if ((ulong)*(ushort *)(lVar19 + 0x12a) != 0) {
            uVar16 = 0;
            piVar20 = (int *)(*(long *)(lVar19 + 0xb0) + 8);
            do {
              if (*(long *)(piVar20 + -2) == _INGUIFont_TypeInfo_12d4c70) {
                puVar12 = (undefined8 *)(lVar19 + (long)(*piVar20 + 2) * 0x10 + 0x138);
                goto LAB_009f1e0c;
              }
              uVar16 = uVar16 + 1;
              piVar20 = piVar20 + 4;
            } while (uVar16 < *(ushort *)(lVar19 + 0x12a));
          }
          puVar12 = (undefined8 *)native_sub_3c9b34(plVar15,_INGUIFont_TypeInfo_12d4c70,2);
LAB_009f1e0c:
          lVar19 = (*(code *)*puVar12)(plVar15,puVar12[1]);
          if (lVar19 == 0) goto LAB_009f2784;
          lVar19 = native_BMFont__GetGlyph_dd1c0c(lVar19,0x2a,0);
          uVar13 = _StringLiteral_x_12f6b98;
          if (lVar19 != 0) {
            uVar13 = uVar11;
          }
        }
      }
      if (lVar23 == 0) goto LAB_009f2784;
      iVar8 = *(int *)(lVar23 + 0x10);
      if (0 < iVar8) {
        do {
          lVar18 = native_System_String__Concat_afbd68(lVar18,uVar13,0);
          iVar8 = iVar8 + -1;
        } while (iVar8 != 0);
      }
      lVar23 = lVar18;
      if ((uVar5 & 1) == 0) goto LAB_009f1ec8;
LAB_009f1e6c:
      if (lVar23 == 0) goto LAB_009f2784;
      uVar10 = *(undefined4 *)(lVar23 + 0x10);
      uVar7 = native_UIInput__get_cursorPosition_9f3090(param_1);
      iVar8 = native_UnityEngine_Mathf__Min_8e4c18(uVar10,uVar7,0);
      uVar11 = native_System_String__Substring_b09fac(lVar23,0,iVar8,0);
      uVar13 = native_UnityEngine_Input__get_compositionString_dbdf20(0);
      uVar11 = native_System_String__Concat_afbd68(uVar11,uVar13,0);
    }
    else {
      if ((uVar5 & 1) != 0) goto LAB_009f1e6c;
LAB_009f1ec8:
      if (lVar23 == 0) goto LAB_009f2784;
      uVar11 = native_System_String__Substring_b09fac(lVar23,0,0,0);
      iVar8 = 0;
    }
    uVar13 = native_System_String__Substring_b09fac(lVar23,iVar8,*(int *)(lVar23 + 0x10) - iVar8,0);
    lVar23 = native_System_String__Concat_afbd68(uVar11,uVar13,0);
    if ((uVar5 & 1) == 0) {
LAB_009f1fb0:
      if (((*(byte *)(_UIInput_TypeInfo_12d6450 + 0x133) >> 2 & 1) != 0) &&
         (*(int *)(_UIInput_TypeInfo_12d6450 + 0xe0) == 0)) {
        native_sub_4327ec();
      }
      *(undefined4 *)(*(long *)(_UIInput_TypeInfo_12d6450 + 0xb8) + 0x10) = 0;
      lVar18 = *plVar26;
      if (lVar18 == 0) goto LAB_009f2784;
      uVar10 = (undefined4)param_1[0x17];
      goto LAB_009f1fe8;
    }
    lVar18 = *plVar26;
    if (lVar18 == 0) goto LAB_009f2784;
    if ((*(int *)(lVar18 + 0x1e4) != 1) || (*(int *)(lVar18 + 0x1c0) != 1)) goto LAB_009f1fb0;
    iVar9 = native_UILabel__CalculateOffsetToFit_aedc24(lVar18,lVar23,0);
    uVar4 = *(ushort *)(_UIInput_TypeInfo_12d6450 + 0x132);
    uVar21 = uVar4 & 0x400;
    if (iVar9 == 0) {
      if (((uVar4 & 0x400) != 0) && (*(int *)(_UIInput_TypeInfo_12d6450 + 0xe0) == 0)) {
        native_sub_4327ec();
      }
      *(undefined4 *)(*(long *)(_UIInput_TypeInfo_12d6450 + 0xb8) + 0x10) = 0;
      lVar18 = *plVar26;
      if (lVar18 == 0) goto LAB_009f2784;
      uVar10 = (undefined4)param_1[0x17];
LAB_009f2678:
      native_UILabel__set_alignment_ae8458(lVar18,uVar10,0);
    }
    else {
      if (((uVar4 & 0x400) != 0) && (*(int *)(_UIInput_TypeInfo_12d6450 + 0xe0) == 0)) {
        native_sub_4327ec();
        uVar21 = *(ushort *)(_UIInput_TypeInfo_12d6450 + 0x132) & 0x400;
      }
      piVar20 = (int *)(*(long *)(_UIInput_TypeInfo_12d6450 + 0xb8) + 0x10);
      iVar22 = *piVar20;
      if (iVar8 < iVar22) {
        if ((uVar21 != 0) && (*(int *)(_UIInput_TypeInfo_12d6450 + 0xe0) == 0)) {
          native_sub_4327ec();
          piVar20 = (int *)(*(long *)(_UIInput_TypeInfo_12d6450 + 0xb8) + 0x10);
        }
        *piVar20 = iVar8;
LAB_009f266c:
        lVar18 = *plVar26;
        if (lVar18 == 0) goto LAB_009f2784;
        uVar10 = 1;
        goto LAB_009f2678;
      }
      if ((uVar21 != 0) && (*(int *)(_UIInput_TypeInfo_12d6450 + 0xe0) == 0)) {
        native_sub_4327ec();
        piVar20 = (int *)(*(long *)(_UIInput_TypeInfo_12d6450 + 0xb8) + 0x10);
        iVar22 = *piVar20;
      }
      if (iVar9 < iVar22) {
        if (((*(byte *)(_UIInput_TypeInfo_12d6450 + 0x133) >> 2 & 1) != 0) &&
           (*(int *)(_UIInput_TypeInfo_12d6450 + 0xe0) == 0)) {
          native_sub_4327ec();
          piVar20 = (int *)(*(long *)(_UIInput_TypeInfo_12d6450 + 0xb8) + 0x10);
        }
        *piVar20 = iVar9;
        goto LAB_009f266c;
      }
      if (lVar23 == 0) goto LAB_009f2784;
      lVar18 = *plVar26;
      uVar11 = native_System_String__Substring_b09fac(lVar23,0,iVar8,0);
      if (lVar18 == 0) goto LAB_009f2784;
      iVar8 = native_UILabel__CalculateOffsetToFit_aedc24(lVar18,uVar11,0);
      if (((*(byte *)(_UIInput_TypeInfo_12d6450 + 0x133) >> 2 & 1) != 0) &&
         (*(int *)(_UIInput_TypeInfo_12d6450 + 0xe0) == 0)) {
        native_sub_4327ec(_UIInput_TypeInfo_12d6450);
      }
      piVar20 = (int *)(*(long *)(_UIInput_TypeInfo_12d6450 + 0xb8) + 0x10);
      if (*piVar20 < iVar8) {
        if (((*(byte *)(_UIInput_TypeInfo_12d6450 + 0x133) >> 2 & 1) != 0) &&
           (*(int *)(_UIInput_TypeInfo_12d6450 + 0xe0) == 0)) {
          native_sub_4327ec(_UIInput_TypeInfo_12d6450);
          piVar20 = (int *)(*(long *)(_UIInput_TypeInfo_12d6450 + 0xb8) + 0x10);
        }
        *piVar20 = iVar8;
        lVar18 = *plVar26;
        if (lVar18 == 0) goto LAB_009f2784;
        uVar10 = 3;
        goto LAB_009f2678;
      }
    }
    if (((*(byte *)(_UIInput_TypeInfo_12d6450 + 0x133) >> 2 & 1) != 0) &&
       (*(int *)(_UIInput_TypeInfo_12d6450 + 0xe0) == 0)) {
      native_sub_4327ec();
    }
    iVar8 = *(int *)(*(long *)(_UIInput_TypeInfo_12d6450 + 0xb8) + 0x10);
    if (iVar8 != 0) {
      if (((*(byte *)(_UIInput_TypeInfo_12d6450 + 0x133) >> 2 & 1) != 0) &&
         (*(int *)(_UIInput_TypeInfo_12d6450 + 0xe0) == 0)) {
        native_sub_4327ec();
        iVar8 = *(int *)(*(long *)(_UIInput_TypeInfo_12d6450 + 0xb8) + 0x10);
      }
      if (lVar23 == 0) goto LAB_009f2784;
      lVar23 = native_System_String__Substring_b09fac
                         (lVar23,iVar8,*(int *)(lVar23 + 0x10) - iVar8,0);
    }
  }
  else {
    lVar18 = *plVar26;
    if (lVar18 == 0) goto LAB_009f2784;
    uVar10 = (undefined4)param_1[0x17];
    plVar15 = (long *)&StringLiteral__12eaac0;
    if ((uVar5 & 1) == 0) {
      plVar15 = param_1 + 0x13;
    }
    lVar23 = *plVar15;
LAB_009f1fe8:
    native_UILabel__set_alignment_ae8458(lVar18,uVar10,0);
  }
  if (*plVar26 == 0) goto LAB_009f2784;
  native_UILabel__set_text_ae81a8(*plVar26,lVar23,0);
  if ((uVar5 & 1) == 0) {
LAB_009f2280:
                    /* WARNING: Could not recover jumptable at 0x009f22a4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (**(code **)(*param_1 + 0x1c8))(param_1,*(undefined8 *)(*param_1 + 0x1d0));
    return;
  }
  if (((*(byte *)(_UIInput_TypeInfo_12d6450 + 0x133) >> 2 & 1) != 0) &&
     (*(int *)(_UIInput_TypeInfo_12d6450 + 0xe0) == 0)) {
    native_sub_4327ec();
  }
  if ((*(long *)(*(long *)(_UIInput_TypeInfo_12d6450 + 0xb8) + 0x20) != 0) &&
     (uVar16 = native_UIInput__get_inputShouldBeHidden_9f28e0(param_1), (uVar16 & 1) == 0))
  goto LAB_009f2280;
  lVar23 = param_1[0x18];
  if (((*(byte *)(_UIInput_TypeInfo_12d6450 + 0x133) >> 2 & 1) != 0) &&
     (*(int *)(_UIInput_TypeInfo_12d6450 + 0xe0) == 0)) {
    native_sub_4327ec();
  }
  iVar8 = *(int *)(*(long *)(_UIInput_TypeInfo_12d6450 + 0xb8) + 0x10);
  plVar15 = param_1 + 0x1b;
  lVar18 = *plVar15;
  iVar9 = *(int *)((long)param_1 + 0xc4);
  if (((*(byte *)(_UnityEngine_Object_TypeInfo_12d54e0 + 0x133) >> 2 & 1) != 0) &&
     (*(int *)(_UnityEngine_Object_TypeInfo_12d54e0 + 0xe0) == 0)) {
    native_sub_4327ec();
  }
  uVar16 = native_UnityEngine_Object__op_Equality_8e9a3c(lVar18,0,0);
  if ((uVar16 & 1) != 0) {
    lVar18 = native_sub_432808(_UnityEngine_Texture2D_TypeInfo_12d61f0);
    native_UnityEngine_Texture2D___ctor_76f4a4(lVar18,2,2,5,0,0);
    *plVar15 = lVar18;
    native_sub_4326e0(plVar15,lVar18);
    iVar22 = 0;
    do {
      iVar17 = 0;
      do {
        lVar18 = *plVar15;
        native_UnityEngine_Color__get_white_8d9e10(0);
        if (lVar18 == 0) goto LAB_009f2784;
        native_UnityEngine_Texture2D__SetPixel_76f52c(lVar18,iVar17,iVar22,0);
        bVar3 = iVar17 == 0;
        iVar17 = 1;
      } while (bVar3);
      bVar3 = iVar22 == 0;
      iVar22 = 1;
    } while (bVar3);
    if (*plVar15 == 0) goto LAB_009f2784;
    native_UnityEngine_Texture2D__Apply_76f804(*plVar15,0);
  }
  iVar22 = (int)lVar23 - iVar8;
  iVar9 = iVar9 - iVar8;
  if (iVar22 != iVar9) {
    plVar24 = param_1 + 0x19;
    lVar23 = *plVar24;
    if (((*(byte *)(_UnityEngine_Object_TypeInfo_12d54e0 + 0x133) >> 2 & 1) != 0) &&
       (*(int *)(_UnityEngine_Object_TypeInfo_12d54e0 + 0xe0) == 0)) {
      native_sub_4327ec();
    }
    uVar16 = native_UnityEngine_Object__op_Equality_8e9a3c(lVar23,0,0);
    if ((uVar16 & 1) == 0) {
      plVar14 = (long *)*plVar26;
      if (plVar14 == (long *)0x0) goto LAB_009f2784;
      plVar25 = (long *)*plVar24;
      uVar10 = (**(code **)(*plVar14 + 0x2a8))(plVar14,*(undefined8 *)(*plVar14 + 0x2b0));
      if (plVar25 == (long *)0x0) goto LAB_009f2784;
      (**(code **)(*plVar25 + 0x2b8))(plVar25,uVar10,*(undefined8 *)(*plVar25 + 0x2c0));
      plVar14 = (long *)*plVar24;
      if (plVar14 == (long *)0x0) goto LAB_009f2784;
      (**(code **)(*plVar14 + 0x338))(plVar14,*plVar15,*(undefined8 *)(*plVar14 + 0x340));
      plVar14 = (long *)*plVar24;
      if (plVar14 == (long *)0x0) goto LAB_009f2784;
      (**(code **)(*plVar14 + 0x378))(plVar14,*(undefined8 *)(*plVar14 + 0x380));
      if (*plVar24 == 0) goto LAB_009f2784;
      native_UnityEngine_Behaviour__set_enabled_8d7b0c(*plVar24,1,0);
    }
    else {
      if (*plVar26 == 0) goto LAB_009f2784;
      uVar11 = native_UIRect__get_cachedGameObject_c2d1c0(*plVar26,0);
      if (((*(byte *)(_NGUITools_TypeInfo_12d53c8 + 0x133) >> 2 & 1) != 0) &&
         (*(int *)(_NGUITools_TypeInfo_12d53c8 + 0xe0) == 0)) {
        native_sub_4327ec(_NGUITools_TypeInfo_12d53c8);
      }
      lVar23 = native_NGUITools__AddWidget_object__4a528c
                         (uVar11,0x7fffffff,_Method_NGUITools_AddWidget_UITexture____12e56e8);
      *plVar24 = lVar23;
      native_sub_4326e0(plVar24,lVar23);
      if (*plVar24 == 0) goto LAB_009f2784;
      native_UnityEngine_Object__set_name_8e9c08(*plVar24,_StringLiteral_Input_Highlight_12ee898,0);
      plVar14 = (long *)*plVar24;
      if (plVar14 == (long *)0x0) goto LAB_009f2784;
      (**(code **)(*plVar14 + 0x338))(plVar14,*plVar15,*(undefined8 *)(*plVar14 + 0x340));
      if (*plVar24 == 0) goto LAB_009f2784;
      *(undefined1 *)(*plVar24 + 0x100) = 0;
      plVar14 = (long *)*plVar26;
      if (plVar14 == (long *)0x0) goto LAB_009f2784;
      plVar25 = (long *)*plVar24;
      uVar10 = (**(code **)(*plVar14 + 0x2a8))(plVar14,*(undefined8 *)(*plVar14 + 0x2b0));
      if (plVar25 == (long *)0x0) goto LAB_009f2784;
      (**(code **)(*plVar25 + 0x2b8))(plVar25,uVar10,*(undefined8 *)(*plVar25 + 0x2c0));
      if (*plVar26 == 0) goto LAB_009f2784;
      lVar23 = *plVar24;
      uVar11 = native_UIRect__get_cachedTransform_c27c58(*plVar26,0);
      if (lVar23 == 0) goto LAB_009f2784;
      native_UIRect__SetAnchor_c2ea60(lVar23,uVar11,0);
    }
  }
  plVar24 = param_1 + 0x1a;
  lVar23 = *plVar24;
  if (((*(byte *)(_UnityEngine_Object_TypeInfo_12d54e0 + 0x133) >> 2 & 1) != 0) &&
     (*(int *)(_UnityEngine_Object_TypeInfo_12d54e0 + 0xe0) == 0)) {
    native_sub_4327ec();
  }
  uVar16 = native_UnityEngine_Object__op_Equality_8e9a3c(lVar23,0,0);
  if ((uVar16 & 1) == 0) {
    plVar14 = (long *)*plVar26;
    if (plVar14 == (long *)0x0) goto LAB_009f2784;
    plVar25 = (long *)*plVar24;
    uVar10 = (**(code **)(*plVar14 + 0x2a8))(plVar14,*(undefined8 *)(*plVar14 + 0x2b0));
    if (plVar25 == (long *)0x0) goto LAB_009f2784;
    (**(code **)(*plVar25 + 0x2b8))(plVar25,uVar10,*(undefined8 *)(*plVar25 + 0x2c0));
    plVar14 = (long *)*plVar24;
    if (plVar14 == (long *)0x0) goto LAB_009f2784;
    (**(code **)(*plVar14 + 0x338))(plVar14,*plVar15,*(undefined8 *)(*plVar14 + 0x340));
    plVar15 = (long *)*plVar24;
    if (plVar15 == (long *)0x0) goto LAB_009f2784;
    (**(code **)(*plVar15 + 0x378))(plVar15,*(undefined8 *)(*plVar15 + 0x380));
    if (*plVar24 == 0) goto LAB_009f2784;
    native_UnityEngine_Behaviour__set_enabled_8d7b0c(*plVar24,1,0);
  }
  else {
    if (*plVar26 == 0) goto LAB_009f2784;
    uVar11 = native_UIRect__get_cachedGameObject_c2d1c0(*plVar26,0);
    if (((*(byte *)(_NGUITools_TypeInfo_12d53c8 + 0x133) >> 2 & 1) != 0) &&
       (*(int *)(_NGUITools_TypeInfo_12d53c8 + 0xe0) == 0)) {
      native_sub_4327ec(_NGUITools_TypeInfo_12d53c8);
    }
    lVar23 = native_NGUITools__AddWidget_object__4a528c
                       (uVar11,0x7fffffff,_Method_NGUITools_AddWidget_UITexture____12e56e8);
    *plVar24 = lVar23;
    native_sub_4326e0(plVar24,lVar23);
    if (*plVar24 == 0) goto LAB_009f2784;
    native_UnityEngine_Object__set_name_8e9c08(*plVar24,_StringLiteral_Input_Caret_12ee890,0);
    plVar14 = (long *)*plVar24;
    if (plVar14 == (long *)0x0) goto LAB_009f2784;
    (**(code **)(*plVar14 + 0x338))(plVar14,*plVar15,*(undefined8 *)(*plVar14 + 0x340));
    if (*plVar24 == 0) goto LAB_009f2784;
    *(undefined1 *)(*plVar24 + 0x100) = 0;
    plVar15 = (long *)*plVar26;
    if (plVar15 == (long *)0x0) goto LAB_009f2784;
    plVar14 = (long *)*plVar24;
    uVar10 = (**(code **)(*plVar15 + 0x2a8))(plVar15,*(undefined8 *)(*plVar15 + 0x2b0));
    if (plVar14 == (long *)0x0) goto LAB_009f2784;
    (**(code **)(*plVar14 + 0x2b8))(plVar14,uVar10,*(undefined8 *)(*plVar14 + 0x2c0));
    if (*plVar26 == 0) goto LAB_009f2784;
    lVar23 = *plVar24;
    uVar11 = native_UIRect__get_cachedTransform_c27c58(*plVar26,0);
    if (lVar23 == 0) goto LAB_009f2784;
    native_UIRect__SetAnchor_c2ea60(lVar23,uVar11,0);
  }
  if (*plVar24 == 0) goto LAB_009f2784;
  lVar23 = *plVar26;
  uVar11 = *(undefined8 *)(*plVar24 + 0xf8);
  if (iVar22 == iVar9) {
    if (lVar23 == 0) goto LAB_009f2784;
    native_UILabel__PrintOverlay_aec838
              ((int)param_1[0xb],*(undefined4 *)((long)param_1 + 0x5c),(int)param_1[0xc],
               *(undefined4 *)((long)param_1 + 100),(int)param_1[0xd],
               *(undefined4 *)((long)param_1 + 0x6c),(int)param_1[0xe],
               *(undefined4 *)((long)param_1 + 0x74),lVar23,iVar22,iVar22,uVar11,0,0);
    lVar23 = param_1[0x19];
    if (((*(byte *)(_UnityEngine_Object_TypeInfo_12d54e0 + 0x133) >> 2 & 1) != 0) &&
       (*(int *)(_UnityEngine_Object_TypeInfo_12d54e0 + 0xe0) == 0)) {
      native_sub_4327ec();
    }
    uVar16 = native_UnityEngine_Object__op_Inequality_8d76fc(lVar23,0,0);
    if ((uVar16 & 1) != 0) {
      lVar23 = param_1[0x19];
      if (lVar23 == 0) goto LAB_009f2784;
      uVar5 = 0;
      goto LAB_009f25b0;
    }
  }
  else {
    if ((param_1[0x19] == 0) || (lVar23 == 0)) goto LAB_009f2784;
    native_UILabel__PrintOverlay_aec838
              ((int)param_1[0xb],*(undefined4 *)((long)param_1 + 0x5c),(int)param_1[0xc],
               *(undefined4 *)((long)param_1 + 100),(int)param_1[0xd],
               *(undefined4 *)((long)param_1 + 0x6c),(int)param_1[0xe],
               *(undefined4 *)((long)param_1 + 0x74),lVar23,iVar22,iVar9,uVar11,
               *(undefined8 *)(param_1[0x19] + 0xf8),0);
    lVar23 = param_1[0x19];
    if ((lVar23 == 0) || (*(long *)(lVar23 + 0xf8) == 0)) goto LAB_009f2784;
    uVar5 = native_UIGeometry__get_hasVertices_9ef420();
    uVar5 = uVar5 & 1;
LAB_009f25b0:
    native_UnityEngine_Behaviour__set_enabled_8d7b0c(lVar23,uVar5,0);
  }
  fVar27 = (float)native_RealTime__get_time_72d024(0);
  *(float *)(param_1 + 0x1c) = fVar27 + 0.5;
  if (param_1[3] != 0) {
    *(undefined4 *)((long)param_1 + 0xe4) = *(undefined4 *)(param_1[3] + 0x8c);
    return;
  }
LAB_009f2784:
                    /* WARNING: Subroutine does not return */
  native_sub_432810();
}



/* UIInput$$get_selectionEnd @ 0x9f3348
 * int32_t UIInput__get_selectionEnd (UIInput_o* __this, const MethodInfo* method); */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* UIInput$$get_selectionEnd
   int32_t UIInput__get_selectionEnd (UIInput_o* __this, const MethodInfo* method); */

undefined4 native_UIInput__get_selectionEnd_9f3348(long param_1)

{
  ulong uVar1;
  undefined4 *puVar2;
  
  if ((bRam000000000134197f & 1) == 0) {
    native_sub_43273c(&UIInput_TypeInfo_12d6450);
    bRam000000000134197f = 1;
  }
  if (((*(byte *)(_UIInput_TypeInfo_12d6450 + 0x133) >> 2 & 1) != 0) &&
     (*(int *)(_UIInput_TypeInfo_12d6450 + 0xe0) == 0)) {
    native_sub_4327ec();
  }
  if (((*(long *)(*(long *)(_UIInput_TypeInfo_12d6450 + 0xb8) + 0x20) == 0) ||
      (uVar1 = native_UIInput__get_inputShouldBeHidden_9f28e0(param_1), (uVar1 & 1) != 0)) &&
     (uVar1 = native_UIInput__get_isSelected_9f283c(param_1), (uVar1 & 1) != 0)) {
    puVar2 = (undefined4 *)(param_1 + 0xc4);
  }
  else {
    if (*(char *)(param_1 + 0xb4) != '\0') {
      native_UIInput__Init_9f1988(param_1);
    }
    if (*(long *)(param_1 + 0x90) == 0) {
                    /* WARNING: Subroutine does not return */
      native_sub_432810();
    }
    puVar2 = (undefined4 *)(*(long *)(param_1 + 0x90) + 0x10);
  }
  return *puVar2;
}



/* UIInput$$set_selectionEnd @ 0x9f33f8
 * void UIInput__set_selectionEnd (UIInput_o* __this, int32_t value, const MethodInfo* method); */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* UIInput$$set_selectionEnd
   void UIInput__set_selectionEnd (UIInput_o* __this, int32_t value, const MethodInfo* method); */

void native_UIInput__set_selectionEnd_9f33f8(long *param_1,undefined4 param_2)

{
  undefined4 *puVar1;
  undefined4 *puVar2;
  bool bVar3;
  ushort uVar4;
  uint uVar5;
  uint uVar6;
  undefined4 uVar7;
  int iVar8;
  int iVar9;
  undefined4 uVar10;
  undefined8 uVar11;
  undefined8 *puVar12;
  undefined8 uVar13;
  long *plVar14;
  long *plVar15;
  ulong uVar16;
  int iVar17;
  long lVar18;
  long lVar19;
  int *piVar20;
  ushort uVar21;
  int iVar22;
  long lVar23;
  long *plVar24;
  long *plVar25;
  long *plVar26;
  float fVar27;
  
  if ((bRam0000000001341980 & 1) == 0) {
    native_sub_43273c(&UIInput_TypeInfo_12d6450);
    bRam0000000001341980 = 1;
  }
  uVar16 = native_UIInput__get_isSelected_9f283c(param_1);
  if ((uVar16 & 1) == 0) {
    return;
  }
  if (((*(byte *)(_UIInput_TypeInfo_12d6450 + 0x133) >> 2 & 1) != 0) &&
     (*(int *)(_UIInput_TypeInfo_12d6450 + 0xe0) == 0)) {
    native_sub_4327ec();
  }
  if ((*(long *)(*(long *)(_UIInput_TypeInfo_12d6450 + 0xb8) + 0x20) != 0) &&
     (uVar16 = native_UIInput__get_inputShouldBeHidden_9f28e0(param_1), (uVar16 & 1) == 0)) {
    return;
  }
  *(undefined4 *)((long)param_1 + 0xc4) = param_2;
  if ((bRam0000000001341994 & 1) == 0) {
    native_sub_43273c(&INGUIFont_TypeInfo_12d4c70);
    native_sub_43273c(&Method_NGUITools_AddWidget_UITexture____12e56e8);
    native_sub_43273c(&NGUITools_TypeInfo_12d53c8);
    native_sub_43273c(&UnityEngine_Object_TypeInfo_12d54e0);
    native_sub_43273c(&UnityEngine_Texture2D_TypeInfo_12d61f0);
    native_sub_43273c(&UIInput_TypeInfo_12d6450);
    native_sub_43273c(&StringLiteral_x_12f6b98);
    native_sub_43273c(&StringLiteral__12eaac0);
    native_sub_43273c(&StringLiteral___12eb5f0);
    native_sub_43273c(&StringLiteral_Input_Caret_12ee890);
    native_sub_43273c(&StringLiteral_Input_Highlight_12ee898);
    bRam0000000001341994 = 1;
  }
  plVar26 = param_1 + 3;
  lVar23 = *plVar26;
  if (((*(byte *)(_UnityEngine_Object_TypeInfo_12d54e0 + 0x133) >> 2 & 1) != 0) &&
     (*(int *)(_UnityEngine_Object_TypeInfo_12d54e0 + 0xe0) == 0)) {
    native_sub_4327ec();
  }
  uVar16 = native_UnityEngine_Object__op_Inequality_8d76fc(lVar23,0,0);
  if ((uVar16 & 1) == 0) {
    return;
  }
  if (*(char *)((long)param_1 + 0xb4) != '\0') {
    native_UIInput__Init_9f1988(param_1);
  }
  uVar5 = native_UIInput__get_isSelected_9f283c(param_1);
  if (*(char *)((long)param_1 + 0xb4) != '\0') {
    native_UIInput__Init_9f1988(param_1);
  }
  lVar23 = param_1[0x12];
  uVar16 = native_System_String__IsNullOrEmpty_b09430(lVar23,0);
  if ((uVar16 & 1) == 0) {
    lVar18 = *plVar26;
    uVar6 = 0;
LAB_009f1c84:
    plVar15 = param_1 + 9;
    puVar1 = (undefined4 *)((long)param_1 + 0x4c);
    plVar24 = param_1 + 10;
    puVar2 = (undefined4 *)((long)param_1 + 0x54);
  }
  else {
    uVar11 = native_UnityEngine_Input__get_compositionString_dbdf20(0);
    uVar6 = native_System_String__IsNullOrEmpty_b09430(uVar11,0);
    lVar18 = *plVar26;
    if (((uVar5 | uVar6 ^ 0xffffffff) & 1) != 0) goto LAB_009f1c84;
    plVar15 = param_1 + 0x14;
    puVar1 = (undefined4 *)((long)param_1 + 0xa4);
    plVar24 = param_1 + 0x15;
    puVar2 = (undefined4 *)((long)param_1 + 0xac);
    uVar6 = 1;
  }
  if (lVar18 == 0) goto LAB_009f2784;
  native_UIWidget__set_color_947adc((int)*plVar15,*puVar1,(int)*plVar24,*puVar2,lVar18,0);
  uVar11 = _StringLiteral___12eb5f0;
  lVar18 = _StringLiteral__12eaac0;
  if ((uVar6 & 1) == 0) {
    if ((int)param_1[4] == 2) {
      if (*plVar26 == 0) goto LAB_009f2784;
      plVar15 = (long *)native_UILabel__get_font_ae77e8(*plVar26,0);
      uVar13 = uVar11;
      if (plVar15 != (long *)0x0) {
        lVar19 = *plVar15;
        if ((ulong)*(ushort *)(lVar19 + 0x12a) != 0) {
          uVar16 = 0;
          piVar20 = (int *)(*(long *)(lVar19 + 0xb0) + 8);
          do {
            if (*(long *)(piVar20 + -2) == _INGUIFont_TypeInfo_12d4c70) {
              puVar12 = (undefined8 *)(lVar19 + (long)(*piVar20 + 2) * 0x10 + 0x138);
              goto LAB_009f1da4;
            }
            uVar16 = uVar16 + 1;
            piVar20 = piVar20 + 4;
          } while (uVar16 < *(ushort *)(lVar19 + 0x12a));
        }
        puVar12 = (undefined8 *)native_sub_3c9b34(plVar15,_INGUIFont_TypeInfo_12d4c70,2);
LAB_009f1da4:
        lVar19 = (*(code *)*puVar12)(plVar15,puVar12[1]);
        if (lVar19 != 0) {
          lVar19 = *plVar15;
          if ((ulong)*(ushort *)(lVar19 + 0x12a) != 0) {
            uVar16 = 0;
            piVar20 = (int *)(*(long *)(lVar19 + 0xb0) + 8);
            do {
              if (*(long *)(piVar20 + -2) == _INGUIFont_TypeInfo_12d4c70) {
                puVar12 = (undefined8 *)(lVar19 + (long)(*piVar20 + 2) * 0x10 + 0x138);
                goto LAB_009f1e0c;
              }
              uVar16 = uVar16 + 1;
              piVar20 = piVar20 + 4;
            } while (uVar16 < *(ushort *)(lVar19 + 0x12a));
          }
          puVar12 = (undefined8 *)native_sub_3c9b34(plVar15,_INGUIFont_TypeInfo_12d4c70,2);
LAB_009f1e0c:
          lVar19 = (*(code *)*puVar12)(plVar15,puVar12[1]);
          if (lVar19 == 0) goto LAB_009f2784;
          lVar19 = native_BMFont__GetGlyph_dd1c0c(lVar19,0x2a,0);
          uVar13 = _StringLiteral_x_12f6b98;
          if (lVar19 != 0) {
            uVar13 = uVar11;
          }
        }
      }
      if (lVar23 == 0) goto LAB_009f2784;
      iVar8 = *(int *)(lVar23 + 0x10);
      if (0 < iVar8) {
        do {
          lVar18 = native_System_String__Concat_afbd68(lVar18,uVar13,0);
          iVar8 = iVar8 + -1;
        } while (iVar8 != 0);
      }
      lVar23 = lVar18;
      if ((uVar5 & 1) == 0) goto LAB_009f1ec8;
LAB_009f1e6c:
      if (lVar23 == 0) goto LAB_009f2784;
      uVar10 = *(undefined4 *)(lVar23 + 0x10);
      uVar7 = native_UIInput__get_cursorPosition_9f3090(param_1);
      iVar8 = native_UnityEngine_Mathf__Min_8e4c18(uVar10,uVar7,0);
      uVar11 = native_System_String__Substring_b09fac(lVar23,0,iVar8,0);
      uVar13 = native_UnityEngine_Input__get_compositionString_dbdf20(0);
      uVar11 = native_System_String__Concat_afbd68(uVar11,uVar13,0);
    }
    else {
      if ((uVar5 & 1) != 0) goto LAB_009f1e6c;
LAB_009f1ec8:
      if (lVar23 == 0) goto LAB_009f2784;
      uVar11 = native_System_String__Substring_b09fac(lVar23,0,0,0);
      iVar8 = 0;
    }
    uVar13 = native_System_String__Substring_b09fac(lVar23,iVar8,*(int *)(lVar23 + 0x10) - iVar8,0);
    lVar23 = native_System_String__Concat_afbd68(uVar11,uVar13,0);
    if ((uVar5 & 1) == 0) {
LAB_009f1fb0:
      if (((*(byte *)(_UIInput_TypeInfo_12d6450 + 0x133) >> 2 & 1) != 0) &&
         (*(int *)(_UIInput_TypeInfo_12d6450 + 0xe0) == 0)) {
        native_sub_4327ec();
      }
      *(undefined4 *)(*(long *)(_UIInput_TypeInfo_12d6450 + 0xb8) + 0x10) = 0;
      lVar18 = *plVar26;
      if (lVar18 == 0) goto LAB_009f2784;
      uVar10 = (undefined4)param_1[0x17];
      goto LAB_009f1fe8;
    }
    lVar18 = *plVar26;
    if (lVar18 == 0) goto LAB_009f2784;
    if ((*(int *)(lVar18 + 0x1e4) != 1) || (*(int *)(lVar18 + 0x1c0) != 1)) goto LAB_009f1fb0;
    iVar9 = native_UILabel__CalculateOffsetToFit_aedc24(lVar18,lVar23,0);
    uVar4 = *(ushort *)(_UIInput_TypeInfo_12d6450 + 0x132);
    uVar21 = uVar4 & 0x400;
    if (iVar9 == 0) {
      if (((uVar4 & 0x400) != 0) && (*(int *)(_UIInput_TypeInfo_12d6450 + 0xe0) == 0)) {
        native_sub_4327ec();
      }
      *(undefined4 *)(*(long *)(_UIInput_TypeInfo_12d6450 + 0xb8) + 0x10) = 0;
      lVar18 = *plVar26;
      if (lVar18 == 0) goto LAB_009f2784;
      uVar10 = (undefined4)param_1[0x17];
LAB_009f2678:
      native_UILabel__set_alignment_ae8458(lVar18,uVar10,0);
    }
    else {
      if (((uVar4 & 0x400) != 0) && (*(int *)(_UIInput_TypeInfo_12d6450 + 0xe0) == 0)) {
        native_sub_4327ec();
        uVar21 = *(ushort *)(_UIInput_TypeInfo_12d6450 + 0x132) & 0x400;
      }
      piVar20 = (int *)(*(long *)(_UIInput_TypeInfo_12d6450 + 0xb8) + 0x10);
      iVar22 = *piVar20;
      if (iVar8 < iVar22) {
        if ((uVar21 != 0) && (*(int *)(_UIInput_TypeInfo_12d6450 + 0xe0) == 0)) {
          native_sub_4327ec();
          piVar20 = (int *)(*(long *)(_UIInput_TypeInfo_12d6450 + 0xb8) + 0x10);
        }
        *piVar20 = iVar8;
LAB_009f266c:
        lVar18 = *plVar26;
        if (lVar18 == 0) goto LAB_009f2784;
        uVar10 = 1;
        goto LAB_009f2678;
      }
      if ((uVar21 != 0) && (*(int *)(_UIInput_TypeInfo_12d6450 + 0xe0) == 0)) {
        native_sub_4327ec();
        piVar20 = (int *)(*(long *)(_UIInput_TypeInfo_12d6450 + 0xb8) + 0x10);
        iVar22 = *piVar20;
      }
      if (iVar9 < iVar22) {
        if (((*(byte *)(_UIInput_TypeInfo_12d6450 + 0x133) >> 2 & 1) != 0) &&
           (*(int *)(_UIInput_TypeInfo_12d6450 + 0xe0) == 0)) {
          native_sub_4327ec();
          piVar20 = (int *)(*(long *)(_UIInput_TypeInfo_12d6450 + 0xb8) + 0x10);
        }
        *piVar20 = iVar9;
        goto LAB_009f266c;
      }
      if (lVar23 == 0) goto LAB_009f2784;
      lVar18 = *plVar26;
      uVar11 = native_System_String__Substring_b09fac(lVar23,0,iVar8,0);
      if (lVar18 == 0) goto LAB_009f2784;
      iVar8 = native_UILabel__CalculateOffsetToFit_aedc24(lVar18,uVar11,0);
      if (((*(byte *)(_UIInput_TypeInfo_12d6450 + 0x133) >> 2 & 1) != 0) &&
         (*(int *)(_UIInput_TypeInfo_12d6450 + 0xe0) == 0)) {
        native_sub_4327ec(_UIInput_TypeInfo_12d6450);
      }
      piVar20 = (int *)(*(long *)(_UIInput_TypeInfo_12d6450 + 0xb8) + 0x10);
      if (*piVar20 < iVar8) {
        if (((*(byte *)(_UIInput_TypeInfo_12d6450 + 0x133) >> 2 & 1) != 0) &&
           (*(int *)(_UIInput_TypeInfo_12d6450 + 0xe0) == 0)) {
          native_sub_4327ec(_UIInput_TypeInfo_12d6450);
          piVar20 = (int *)(*(long *)(_UIInput_TypeInfo_12d6450 + 0xb8) + 0x10);
        }
        *piVar20 = iVar8;
        lVar18 = *plVar26;
        if (lVar18 == 0) goto LAB_009f2784;
        uVar10 = 3;
        goto LAB_009f2678;
      }
    }
    if (((*(byte *)(_UIInput_TypeInfo_12d6450 + 0x133) >> 2 & 1) != 0) &&
       (*(int *)(_UIInput_TypeInfo_12d6450 + 0xe0) == 0)) {
      native_sub_4327ec();
    }
    iVar8 = *(int *)(*(long *)(_UIInput_TypeInfo_12d6450 + 0xb8) + 0x10);
    if (iVar8 != 0) {
      if (((*(byte *)(_UIInput_TypeInfo_12d6450 + 0x133) >> 2 & 1) != 0) &&
         (*(int *)(_UIInput_TypeInfo_12d6450 + 0xe0) == 0)) {
        native_sub_4327ec();
        iVar8 = *(int *)(*(long *)(_UIInput_TypeInfo_12d6450 + 0xb8) + 0x10);
      }
      if (lVar23 == 0) goto LAB_009f2784;
      lVar23 = native_System_String__Substring_b09fac
                         (lVar23,iVar8,*(int *)(lVar23 + 0x10) - iVar8,0);
    }
  }
  else {
    lVar18 = *plVar26;
    if (lVar18 == 0) goto LAB_009f2784;
    uVar10 = (undefined4)param_1[0x17];
    plVar15 = (long *)&StringLiteral__12eaac0;
    if ((uVar5 & 1) == 0) {
      plVar15 = param_1 + 0x13;
    }
    lVar23 = *plVar15;
LAB_009f1fe8:
    native_UILabel__set_alignment_ae8458(lVar18,uVar10,0);
  }
  if (*plVar26 == 0) goto LAB_009f2784;
  native_UILabel__set_text_ae81a8(*plVar26,lVar23,0);
  if ((uVar5 & 1) == 0) {
LAB_009f2280:
                    /* WARNING: Could not recover jumptable at 0x009f22a4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (**(code **)(*param_1 + 0x1c8))(param_1,*(undefined8 *)(*param_1 + 0x1d0));
    return;
  }
  if (((*(byte *)(_UIInput_TypeInfo_12d6450 + 0x133) >> 2 & 1) != 0) &&
     (*(int *)(_UIInput_TypeInfo_12d6450 + 0xe0) == 0)) {
    native_sub_4327ec();
  }
  if ((*(long *)(*(long *)(_UIInput_TypeInfo_12d6450 + 0xb8) + 0x20) != 0) &&
     (uVar16 = native_UIInput__get_inputShouldBeHidden_9f28e0(param_1), (uVar16 & 1) == 0))
  goto LAB_009f2280;
  lVar23 = param_1[0x18];
  if (((*(byte *)(_UIInput_TypeInfo_12d6450 + 0x133) >> 2 & 1) != 0) &&
     (*(int *)(_UIInput_TypeInfo_12d6450 + 0xe0) == 0)) {
    native_sub_4327ec();
  }
  iVar8 = *(int *)(*(long *)(_UIInput_TypeInfo_12d6450 + 0xb8) + 0x10);
  plVar15 = param_1 + 0x1b;
  lVar18 = *plVar15;
  iVar9 = *(int *)((long)param_1 + 0xc4);
  if (((*(byte *)(_UnityEngine_Object_TypeInfo_12d54e0 + 0x133) >> 2 & 1) != 0) &&
     (*(int *)(_UnityEngine_Object_TypeInfo_12d54e0 + 0xe0) == 0)) {
    native_sub_4327ec();
  }
  uVar16 = native_UnityEngine_Object__op_Equality_8e9a3c(lVar18,0,0);
  if ((uVar16 & 1) != 0) {
    lVar18 = native_sub_432808(_UnityEngine_Texture2D_TypeInfo_12d61f0);
    native_UnityEngine_Texture2D___ctor_76f4a4(lVar18,2,2,5,0,0);
    *plVar15 = lVar18;
    native_sub_4326e0(plVar15,lVar18);
    iVar22 = 0;
    do {
      iVar17 = 0;
      do {
        lVar18 = *plVar15;
        native_UnityEngine_Color__get_white_8d9e10(0);
        if (lVar18 == 0) goto LAB_009f2784;
        native_UnityEngine_Texture2D__SetPixel_76f52c(lVar18,iVar17,iVar22,0);
        bVar3 = iVar17 == 0;
        iVar17 = 1;
      } while (bVar3);
      bVar3 = iVar22 == 0;
      iVar22 = 1;
    } while (bVar3);
    if (*plVar15 == 0) goto LAB_009f2784;
    native_UnityEngine_Texture2D__Apply_76f804(*plVar15,0);
  }
  iVar22 = (int)lVar23 - iVar8;
  iVar9 = iVar9 - iVar8;
  if (iVar22 != iVar9) {
    plVar24 = param_1 + 0x19;
    lVar23 = *plVar24;
    if (((*(byte *)(_UnityEngine_Object_TypeInfo_12d54e0 + 0x133) >> 2 & 1) != 0) &&
       (*(int *)(_UnityEngine_Object_TypeInfo_12d54e0 + 0xe0) == 0)) {
      native_sub_4327ec();
    }
    uVar16 = native_UnityEngine_Object__op_Equality_8e9a3c(lVar23,0,0);
    if ((uVar16 & 1) == 0) {
      plVar14 = (long *)*plVar26;
      if (plVar14 == (long *)0x0) goto LAB_009f2784;
      plVar25 = (long *)*plVar24;
      uVar10 = (**(code **)(*plVar14 + 0x2a8))(plVar14,*(undefined8 *)(*plVar14 + 0x2b0));
      if (plVar25 == (long *)0x0) goto LAB_009f2784;
      (**(code **)(*plVar25 + 0x2b8))(plVar25,uVar10,*(undefined8 *)(*plVar25 + 0x2c0));
      plVar14 = (long *)*plVar24;
      if (plVar14 == (long *)0x0) goto LAB_009f2784;
      (**(code **)(*plVar14 + 0x338))(plVar14,*plVar15,*(undefined8 *)(*plVar14 + 0x340));
      plVar14 = (long *)*plVar24;
      if (plVar14 == (long *)0x0) goto LAB_009f2784;
      (**(code **)(*plVar14 + 0x378))(plVar14,*(undefined8 *)(*plVar14 + 0x380));
      if (*plVar24 == 0) goto LAB_009f2784;
      native_UnityEngine_Behaviour__set_enabled_8d7b0c(*plVar24,1,0);
    }
    else {
      if (*plVar26 == 0) goto LAB_009f2784;
      uVar11 = native_UIRect__get_cachedGameObject_c2d1c0(*plVar26,0);
      if (((*(byte *)(_NGUITools_TypeInfo_12d53c8 + 0x133) >> 2 & 1) != 0) &&
         (*(int *)(_NGUITools_TypeInfo_12d53c8 + 0xe0) == 0)) {
        native_sub_4327ec(_NGUITools_TypeInfo_12d53c8);
      }
      lVar23 = native_NGUITools__AddWidget_object__4a528c
                         (uVar11,0x7fffffff,_Method_NGUITools_AddWidget_UITexture____12e56e8);
      *plVar24 = lVar23;
      native_sub_4326e0(plVar24,lVar23);
      if (*plVar24 == 0) goto LAB_009f2784;
      native_UnityEngine_Object__set_name_8e9c08(*plVar24,_StringLiteral_Input_Highlight_12ee898,0);
      plVar14 = (long *)*plVar24;
      if (plVar14 == (long *)0x0) goto LAB_009f2784;
      (**(code **)(*plVar14 + 0x338))(plVar14,*plVar15,*(undefined8 *)(*plVar14 + 0x340));
      if (*plVar24 == 0) goto LAB_009f2784;
      *(undefined1 *)(*plVar24 + 0x100) = 0;
      plVar14 = (long *)*plVar26;
      if (plVar14 == (long *)0x0) goto LAB_009f2784;
      plVar25 = (long *)*plVar24;
      uVar10 = (**(code **)(*plVar14 + 0x2a8))(plVar14,*(undefined8 *)(*plVar14 + 0x2b0));
      if (plVar25 == (long *)0x0) goto LAB_009f2784;
      (**(code **)(*plVar25 + 0x2b8))(plVar25,uVar10,*(undefined8 *)(*plVar25 + 0x2c0));
      if (*plVar26 == 0) goto LAB_009f2784;
      lVar23 = *plVar24;
      uVar11 = native_UIRect__get_cachedTransform_c27c58(*plVar26,0);
      if (lVar23 == 0) goto LAB_009f2784;
      native_UIRect__SetAnchor_c2ea60(lVar23,uVar11,0);
    }
  }
  plVar24 = param_1 + 0x1a;
  lVar23 = *plVar24;
  if (((*(byte *)(_UnityEngine_Object_TypeInfo_12d54e0 + 0x133) >> 2 & 1) != 0) &&
     (*(int *)(_UnityEngine_Object_TypeInfo_12d54e0 + 0xe0) == 0)) {
    native_sub_4327ec();
  }
  uVar16 = native_UnityEngine_Object__op_Equality_8e9a3c(lVar23,0,0);
  if ((uVar16 & 1) == 0) {
    plVar14 = (long *)*plVar26;
    if (plVar14 == (long *)0x0) goto LAB_009f2784;
    plVar25 = (long *)*plVar24;
    uVar10 = (**(code **)(*plVar14 + 0x2a8))(plVar14,*(undefined8 *)(*plVar14 + 0x2b0));
    if (plVar25 == (long *)0x0) goto LAB_009f2784;
    (**(code **)(*plVar25 + 0x2b8))(plVar25,uVar10,*(undefined8 *)(*plVar25 + 0x2c0));
    plVar14 = (long *)*plVar24;
    if (plVar14 == (long *)0x0) goto LAB_009f2784;
    (**(code **)(*plVar14 + 0x338))(plVar14,*plVar15,*(undefined8 *)(*plVar14 + 0x340));
    plVar15 = (long *)*plVar24;
    if (plVar15 == (long *)0x0) goto LAB_009f2784;
    (**(code **)(*plVar15 + 0x378))(plVar15,*(undefined8 *)(*plVar15 + 0x380));
    if (*plVar24 == 0) goto LAB_009f2784;
    native_UnityEngine_Behaviour__set_enabled_8d7b0c(*plVar24,1,0);
  }
  else {
    if (*plVar26 == 0) goto LAB_009f2784;
    uVar11 = native_UIRect__get_cachedGameObject_c2d1c0(*plVar26,0);
    if (((*(byte *)(_NGUITools_TypeInfo_12d53c8 + 0x133) >> 2 & 1) != 0) &&
       (*(int *)(_NGUITools_TypeInfo_12d53c8 + 0xe0) == 0)) {
      native_sub_4327ec(_NGUITools_TypeInfo_12d53c8);
    }
    lVar23 = native_NGUITools__AddWidget_object__4a528c
                       (uVar11,0x7fffffff,_Method_NGUITools_AddWidget_UITexture____12e56e8);
    *plVar24 = lVar23;
    native_sub_4326e0(plVar24,lVar23);
    if (*plVar24 == 0) goto LAB_009f2784;
    native_UnityEngine_Object__set_name_8e9c08(*plVar24,_StringLiteral_Input_Caret_12ee890,0);
    plVar14 = (long *)*plVar24;
    if (plVar14 == (long *)0x0) goto LAB_009f2784;
    (**(code **)(*plVar14 + 0x338))(plVar14,*plVar15,*(undefined8 *)(*plVar14 + 0x340));
    if (*plVar24 == 0) goto LAB_009f2784;
    *(undefined1 *)(*plVar24 + 0x100) = 0;
    plVar15 = (long *)*plVar26;
    if (plVar15 == (long *)0x0) goto LAB_009f2784;
    plVar14 = (long *)*plVar24;
    uVar10 = (**(code **)(*plVar15 + 0x2a8))(plVar15,*(undefined8 *)(*plVar15 + 0x2b0));
    if (plVar14 == (long *)0x0) goto LAB_009f2784;
    (**(code **)(*plVar14 + 0x2b8))(plVar14,uVar10,*(undefined8 *)(*plVar14 + 0x2c0));
    if (*plVar26 == 0) goto LAB_009f2784;
    lVar23 = *plVar24;
    uVar11 = native_UIRect__get_cachedTransform_c27c58(*plVar26,0);
    if (lVar23 == 0) goto LAB_009f2784;
    native_UIRect__SetAnchor_c2ea60(lVar23,uVar11,0);
  }
  if (*plVar24 == 0) goto LAB_009f2784;
  lVar23 = *plVar26;
  uVar11 = *(undefined8 *)(*plVar24 + 0xf8);
  if (iVar22 == iVar9) {
    if (lVar23 == 0) goto LAB_009f2784;
    native_UILabel__PrintOverlay_aec838
              ((int)param_1[0xb],*(undefined4 *)((long)param_1 + 0x5c),(int)param_1[0xc],
               *(undefined4 *)((long)param_1 + 100),(int)param_1[0xd],
               *(undefined4 *)((long)param_1 + 0x6c),(int)param_1[0xe],
               *(undefined4 *)((long)param_1 + 0x74),lVar23,iVar22,iVar22,uVar11,0,0);
    lVar23 = param_1[0x19];
    if (((*(byte *)(_UnityEngine_Object_TypeInfo_12d54e0 + 0x133) >> 2 & 1) != 0) &&
       (*(int *)(_UnityEngine_Object_TypeInfo_12d54e0 + 0xe0) == 0)) {
      native_sub_4327ec();
    }
    uVar16 = native_UnityEngine_Object__op_Inequality_8d76fc(lVar23,0,0);
    if ((uVar16 & 1) != 0) {
      lVar23 = param_1[0x19];
      if (lVar23 == 0) goto LAB_009f2784;
      uVar5 = 0;
      goto LAB_009f25b0;
    }
  }
  else {
    if ((param_1[0x19] == 0) || (lVar23 == 0)) goto LAB_009f2784;
    native_UILabel__PrintOverlay_aec838
              ((int)param_1[0xb],*(undefined4 *)((long)param_1 + 0x5c),(int)param_1[0xc],
               *(undefined4 *)((long)param_1 + 100),(int)param_1[0xd],
               *(undefined4 *)((long)param_1 + 0x6c),(int)param_1[0xe],
               *(undefined4 *)((long)param_1 + 0x74),lVar23,iVar22,iVar9,uVar11,
               *(undefined8 *)(param_1[0x19] + 0xf8),0);
    lVar23 = param_1[0x19];
    if ((lVar23 == 0) || (*(long *)(lVar23 + 0xf8) == 0)) goto LAB_009f2784;
    uVar5 = native_UIGeometry__get_hasVertices_9ef420();
    uVar5 = uVar5 & 1;
LAB_009f25b0:
    native_UnityEngine_Behaviour__set_enabled_8d7b0c(lVar23,uVar5,0);
  }
  fVar27 = (float)native_RealTime__get_time_72d024(0);
  *(float *)(param_1 + 0x1c) = fVar27 + 0.5;
  if (param_1[3] != 0) {
    *(undefined4 *)((long)param_1 + 0xe4) = *(undefined4 *)(param_1[3] + 0x8c);
    return;
  }
LAB_009f2784:
                    /* WARNING: Subroutine does not return */
  native_sub_432810();
}



/* UIInput$$get_caret @ 0x9f34a0
 * UITexture_o* UIInput__get_caret (UIInput_o* __this, const MethodInfo* method); */

/* UIInput$$get_caret
   UITexture_o* UIInput__get_caret (UIInput_o* __this, const MethodInfo* method); */

undefined8 native_UIInput__get_caret_9f34a0(long param_1)

{
  return *(undefined8 *)(param_1 + 0xd0);
}



/* UIInput$$Validate @ 0x9f2be8
 * System_String_o* UIInput__Validate (UIInput_o* __this, System_String_o* val, const MethodInfo* method); */

/* WARNING: Removing unreachable block (ram,0x00a493ac) */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* UIInput$$Validate
   System_String_o* UIInput__Validate (UIInput_o* __this, System_String_o* val, const MethodInfo*
   method); */

long native_UIInput__Validate_9f2be8(long param_1,long param_2)

{
  uint uVar1;
  uint uVar2;
  uint uVar3;
  uint uVar4;
  undefined4 uVar5;
  int iVar6;
  ulong uVar7;
  long *plVar8;
  undefined8 uVar9;
  undefined8 uVar10;
  undefined *puVar11;
  undefined8 uVar12;
  long lVar13;
  uint uVar14;
  long lVar15;
  long lVar16;
  
  if ((bRam0000000001341981 & 1) == 0) {
    native_sub_43273c(&System_Text_StringBuilder_TypeInfo_12d5f30);
    native_sub_43273c(&StringLiteral__12eaac0);
    bRam0000000001341981 = 1;
  }
  uVar7 = native_System_String__IsNullOrEmpty_b09430(param_2,0);
  if ((uVar7 & 1) != 0) {
    return _StringLiteral__12eaac0;
  }
  if (param_2 != 0) {
    uVar5 = *(undefined4 *)(param_2 + 0x10);
    plVar8 = (long *)native_sub_432808(_System_Text_StringBuilder_TypeInfo_12d5f30);
    native_System_Text_StringBuilder___ctor_a48824(plVar8,uVar5,0);
    if (0 < *(int *)(param_2 + 0x10)) {
      iVar6 = 0;
      do {
        uVar4 = native_System_String__get_Chars_b03810(param_2,iVar6,0);
        lVar16 = *(long *)(param_1 + 0x88);
        if (lVar16 == 0) {
          if (*(int *)(param_1 + 0x30) != 0) {
            if (plVar8 == (long *)0x0) goto LAB_009f2de0;
            uVar9 = (**(code **)(*plVar8 + 0x168))(plVar8,*(undefined8 *)(*plVar8 + 0x170));
            uVar5 = native_System_Text_StringBuilder__get_Length_a49204(plVar8,0);
            uVar4 = native_UIInput__Validate_9f34a8(param_1,uVar9,uVar5,uVar4);
          }
        }
        else {
          if (plVar8 == (long *)0x0) goto LAB_009f2de0;
          uVar9 = (**(code **)(*plVar8 + 0x168))(plVar8,*(undefined8 *)(*plVar8 + 0x170));
          uVar5 = native_System_Text_StringBuilder__get_Length_a49204(plVar8,0);
          uVar4 = native_UIInput_OnValidate__Invoke_556f80(lVar16,uVar9,uVar5,uVar4,0);
        }
        if ((uVar4 & 0xffff) != 0) {
          if (plVar8 == (long *)0x0) goto LAB_009f2de0;
          native_System_Text_StringBuilder__Append_a4a9d8(plVar8,uVar4,0);
        }
        iVar6 = iVar6 + 1;
      } while (iVar6 < *(int *)(param_2 + 0x10));
    }
    if (*(int *)(param_1 + 0x34) < 1) {
      if (plVar8 != (long *)0x0) goto LAB_009f2dbc;
    }
    else if (plVar8 != (long *)0x0) {
      iVar6 = native_System_Text_StringBuilder__get_Length_a49204(plVar8,0);
      uVar4 = *(uint *)(param_1 + 0x34);
      uVar7 = (ulong)uVar4;
      if ((int)uVar4 < iVar6) {
        iVar6 = (int)plVar8[4] + *(int *)((long)plVar8 + 0x24);
        if (iVar6 < 0) {
          uVar9 = native_sub_432740(&
                                    StringLiteral_startIndex_cannot_be_larger_than_length_of_string__12f6240
                                    ,0,uVar7,0);
          uVar9 = native_System_Environment__GetResourceString_beaba8(uVar9,0);
          native_sub_432740(&System_ArgumentOutOfRangeException_TypeInfo_12d3810);
          uVar10 = native_sub_432808();
          puVar11 = &StringLiteral_startIndex_12f6228;
        }
        else {
          if ((int)uVar4 < 0) {
            puVar11 = &StringLiteral_Length_cannot_be_less_than_zero__12ef570;
          }
          else {
            if (-1 < (int)(iVar6 - uVar4)) {
              lVar16 = native_System_String__FastAllocateString_b088f8(uVar4,0);
              if (lVar16 == 0) {
                lVar15 = 0;
              }
              else {
                iVar6 = native_System_Runtime_CompilerServices_RuntimeHelpers__get_OffsetToStringData_7c2fd4
                                  (0);
                lVar15 = lVar16 + iVar6;
              }
              if (0 < (int)uVar4) {
                do {
                  uVar14 = (uint)uVar7;
                  if (plVar8 == (long *)0x0) {
code_r0x00a49338:
                    /* WARNING: Subroutine does not return */
                    native_sub_432810();
                  }
                  uVar3 = uVar4 - *(int *)((long)plVar8 + 0x24);
                  if (-1 < (int)uVar3) {
                    uVar1 = *(uint *)(plVar8 + 4);
                    if ((int)uVar3 <= (int)*(uint *)(plVar8 + 4)) {
                      uVar1 = uVar3;
                    }
                    uVar3 = uVar1 - uVar14;
                    uVar2 = uVar14;
                    if ((int)uVar3 < 0) {
                      uVar2 = uVar1;
                    }
                    uVar14 = uVar14 - uVar2;
                    if (0 < (int)uVar2) {
                      if ((long)uVar7 <= (long)(int)uVar4) {
                        lVar13 = plVar8[2];
                        if (lVar13 == 0) goto code_r0x00a49338;
                        if (uVar1 <= *(uint *)(lVar13 + 0x18)) {
                          uVar3 = uVar3 & ((int)uVar3 >> 0x1f ^ 0xffffffffU);
                          if (*(uint *)(lVar13 + 0x18) <= uVar3) {
                            uVar9 = native_sub_43283c();
                    /* WARNING: Subroutine does not return */
                            native_sub_4327dc(uVar9,0);
                          }
                          native_System_String__wstrcpy_b09390
                                    (lVar15 + (long)(int)uVar14 * 2,
                                     lVar13 + (long)(int)uVar3 * 2 + 0x20,uVar2,0);
                          goto code_r0x00a4930c;
                        }
                      }
                      uVar9 = native_sub_432740(&
                                                StringLiteral_Index_was_out_of_range__Must_be_non_negative_and_less_than_the_size_of_the_collection__12ee818
                                               );
                      uVar9 = native_System_Environment__GetResourceString_beaba8(uVar9,0);
                      native_sub_432740(&System_ArgumentOutOfRangeException_TypeInfo_12d3810);
                      uVar10 = native_sub_432808();
                      puVar11 = &StringLiteral_chunkCount_12f3e60;
                      goto code_r0x00a49370;
                    }
                  }
code_r0x00a4930c:
                  plVar8 = (long *)plVar8[3];
                  uVar7 = (ulong)uVar14;
                } while (0 < (int)uVar14);
              }
              return lVar16;
            }
            puVar11 = &
                      StringLiteral_Index_and_length_must_refer_to_a_location_within_the_string__12ee7f0
            ;
          }
          uVar9 = native_sub_432740(puVar11,0,uVar7,0);
          uVar9 = native_System_Environment__GetResourceString_beaba8(uVar9,0);
          native_sub_432740(&System_ArgumentOutOfRangeException_TypeInfo_12d3810);
          uVar10 = native_sub_432808();
          puVar11 = &StringLiteral_length_12f5428;
        }
code_r0x00a49370:
        uVar12 = native_sub_432740(puVar11);
        native_System_ArgumentOutOfRangeException___ctor_951f98(uVar10,uVar12,uVar9,0);
        uVar9 = native_sub_432740(&Method_System_Text_StringBuilder_ToString___12e6e48);
                    /* WARNING: Subroutine does not return */
        native_sub_4327dc(uVar10,uVar9);
      }
LAB_009f2dbc:
                    /* WARNING: Could not recover jumptable at 0x009f2ddc. Too many branches */
                    /* WARNING: Treating indirect jump as call */
      lVar16 = (**(code **)(*plVar8 + 0x168))(plVar8,*(undefined8 *)(*plVar8 + 0x170));
      return lVar16;
    }
  }
LAB_009f2de0:
                    /* WARNING: Subroutine does not return */
  native_sub_432810();
}



/* UIInput$$Start @ 0x9f3800
 * void UIInput__Start (UIInput_o* __this, const MethodInfo* method); */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* UIInput$$Start
   void UIInput__Start (UIInput_o* __this, const MethodInfo* method); */

void native_UIInput__Start_9f3800(long param_1)

{
  ulong uVar1;
  long lVar2;
  undefined8 *puVar3;
  undefined8 uVar4;
  
  if ((bRam0000000001341982 & 1) == 0) {
    native_sub_43273c(&Method_UnityEngine_Component_GetComponent_UIKeyNavigation____12e2bd0);
    native_sub_43273c(&Method_UnityEngine_GameObject_AddComponent_UIKeyNavigation____12e48e0);
    native_sub_43273c(&NGUITools_TypeInfo_12d53c8);
    native_sub_43273c(&UnityEngine_Object_TypeInfo_12d54e0);
    native_sub_43273c(&StringLiteral___12eab80);
    native_sub_43273c(&StringLiteral_last_change_12f5390);
    native_sub_43273c(&StringLiteral__n_12f33e0);
    bRam0000000001341982 = 1;
  }
  if (*(char *)(param_1 + 0xf8) == '\0') {
    puVar3 = (undefined8 *)(param_1 + 0x40);
    uVar4 = *puVar3;
    if (((*(byte *)(_UnityEngine_Object_TypeInfo_12d54e0 + 0x133) >> 2 & 1) != 0) &&
       (*(int *)(_UnityEngine_Object_TypeInfo_12d54e0 + 0xe0) == 0)) {
      native_sub_4327ec();
    }
    uVar1 = native_UnityEngine_Object__op_Inequality_8d76fc(uVar4,0,0);
    if ((uVar1 & 1) != 0) {
      uVar4 = native_UnityEngine_Component__GetComponent_ActiveAnimation__49daec
                        (param_1,
                         _Method_UnityEngine_Component_GetComponent_UIKeyNavigation____12e2bd0);
      if (((*(byte *)(_UnityEngine_Object_TypeInfo_12d54e0 + 0x133) >> 2 & 1) != 0) &&
         (*(int *)(_UnityEngine_Object_TypeInfo_12d54e0 + 0xe0) == 0)) {
        native_sub_4327ec(_UnityEngine_Object_TypeInfo_12d54e0);
      }
      uVar1 = native_UnityEngine_Object__op_Equality_8e9a3c(uVar4,0,0);
      if ((uVar1 & 1) != 0) {
        lVar2 = native_UnityEngine_Component__get_gameObject_8da66c(param_1,0);
        if ((lVar2 == 0) ||
           (lVar2 = native_UnityEngine_GameObject__AddComponent_ActiveAnimation__4a2118
                              (lVar2,
                               _Method_UnityEngine_GameObject_AddComponent_UIKeyNavigation____12e48e0
                              ), lVar2 == 0)) goto LAB_009f39f4;
        *(undefined8 *)(lVar2 + 0x28) = *puVar3;
        native_sub_4326e0();
      }
      *puVar3 = 0;
      native_sub_4326e0(puVar3,0);
      if (((*(byte *)(_NGUITools_TypeInfo_12d53c8 + 0x133) >> 2 & 1) != 0) &&
         (*(int *)(_NGUITools_TypeInfo_12d53c8 + 0xe0) == 0)) {
        native_sub_4327ec();
      }
      native_NGUITools__SetDirty_72ea3c(param_1,_StringLiteral_last_change_12f5390,0);
    }
    if ((*(char *)(param_1 + 0xbc) == '\0') ||
       (uVar1 = native_System_String__IsNullOrEmpty_b09430(*(undefined8 *)(param_1 + 0x38),0),
       (uVar1 & 1) != 0)) {
      if (*(long *)(param_1 + 0x90) == 0) {
LAB_009f39f4:
                    /* WARNING: Subroutine does not return */
        native_sub_432810();
      }
      uVar4 = native_System_String__Replace_afd9ac
                        (*(long *)(param_1 + 0x90),_StringLiteral__n_12f33e0,
                         _StringLiteral___12eab80,0);
      native_UIInput__Set_9f29f8(param_1,uVar4,1);
    }
    else {
      native_UIInput__LoadValue_9f39f8(param_1);
    }
    *(undefined1 *)(param_1 + 0xf8) = 1;
  }
  return;
}



/* UIInput$$Init @ 0x9f1988
 * void UIInput__Init (UIInput_o* __this, const MethodInfo* method); */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* UIInput$$Init
   void UIInput__Init (UIInput_o* __this, const MethodInfo* method); */

void native_UIInput__Init_9f1988(long *param_1)

{
  undefined4 *puVar1;
  undefined4 *puVar2;
  bool bVar3;
  ushort uVar4;
  uint uVar5;
  uint uVar6;
  undefined4 uVar7;
  int iVar8;
  int iVar9;
  ulong uVar10;
  undefined8 uVar11;
  undefined8 *puVar12;
  undefined8 uVar13;
  long *plVar14;
  long *plVar15;
  int iVar16;
  long lVar17;
  long lVar18;
  int *piVar19;
  ushort uVar20;
  int iVar21;
  long lVar22;
  long *plVar23;
  long *plVar24;
  long *plVar25;
  undefined4 uVar26;
  float fVar27;
  
  if ((bRam0000000001341983 & 1) == 0) {
    native_sub_43273c(&UnityEngine_Debug_TypeInfo_12d4338);
    native_sub_43273c(&UnityEngine_Object_TypeInfo_12d54e0);
    native_sub_43273c(&
                      StringLiteral_Input_fields_using_labels_with_justified_alignment_are_not_supported_at_this_time_12ee8b0
                     );
    bRam0000000001341983 = 1;
  }
  if (*(char *)((long)param_1 + 0xb4) == '\0') {
    return;
  }
  lVar22 = param_1[3];
  if (((*(byte *)(_UnityEngine_Object_TypeInfo_12d54e0 + 0x133) >> 2 & 1) != 0) &&
     (*(int *)(_UnityEngine_Object_TypeInfo_12d54e0 + 0xe0) == 0)) {
    native_sub_4327ec();
  }
  uVar10 = native_UnityEngine_Object__op_Inequality_8d76fc(lVar22,0,0);
  if ((uVar10 & 1) == 0) {
    return;
  }
  *(undefined1 *)((long)param_1 + 0xb4) = 0;
  if (param_1[3] == 0) {
LAB_009f1adc:
                    /* WARNING: Subroutine does not return */
    native_sub_432810();
  }
  param_1[0x13] = *(long *)(param_1[3] + 0x1a8);
  native_sub_4326e0(param_1 + 0x13);
  lVar22 = param_1[3];
  if (lVar22 == 0) goto LAB_009f1adc;
  lVar17 = *(long *)(lVar22 + 0x90);
  param_1[0x15] = *(long *)(lVar22 + 0x98);
  param_1[0x14] = lVar17;
  *(undefined1 *)(param_1 + 0x21) = *(undefined1 *)(lVar22 + 0x220);
  if (*(int *)(lVar22 + 0x1b8) == 4) {
    native_UILabel__set_alignment_ae8458(lVar22,1,0);
    if (((*(byte *)(_UnityEngine_Debug_TypeInfo_12d4338 + 0x133) >> 2 & 1) != 0) &&
       (*(int *)(_UnityEngine_Debug_TypeInfo_12d4338 + 0xe0) == 0)) {
      native_sub_4327ec();
    }
    native_UnityEngine_Debug__LogWarning_8dcbc8
              (_StringLiteral_Input_fields_using_labels_with_justified_alignment_are_not_supported_at_this_time_12ee8b0
               ,param_1,0);
    lVar22 = param_1[3];
    if (lVar22 == 0) goto LAB_009f1adc;
  }
  *(undefined4 *)(param_1 + 0x17) = *(undefined4 *)(lVar22 + 0x1b8);
  lVar22 = native_UIRect__get_cachedTransform_c27c58(lVar22,0);
  if (lVar22 == 0) goto LAB_009f1adc;
  uVar26 = native_UnityEngine_Transform__get_localPosition_7717f4(lVar22,0);
  *(undefined4 *)(param_1 + 0x16) = uVar26;
  if ((bRam0000000001341994 & 1) == 0) {
    native_sub_43273c(&INGUIFont_TypeInfo_12d4c70);
    native_sub_43273c(&Method_NGUITools_AddWidget_UITexture____12e56e8);
    native_sub_43273c(&NGUITools_TypeInfo_12d53c8);
    native_sub_43273c(&UnityEngine_Object_TypeInfo_12d54e0);
    native_sub_43273c(&UnityEngine_Texture2D_TypeInfo_12d61f0);
    native_sub_43273c(&UIInput_TypeInfo_12d6450);
    native_sub_43273c(&StringLiteral_x_12f6b98);
    native_sub_43273c(&StringLiteral__12eaac0);
    native_sub_43273c(&StringLiteral___12eb5f0);
    native_sub_43273c(&StringLiteral_Input_Caret_12ee890);
    native_sub_43273c(&StringLiteral_Input_Highlight_12ee898);
    bRam0000000001341994 = 1;
  }
  plVar25 = param_1 + 3;
  lVar22 = *plVar25;
  if (((*(byte *)(_UnityEngine_Object_TypeInfo_12d54e0 + 0x133) >> 2 & 1) != 0) &&
     (*(int *)(_UnityEngine_Object_TypeInfo_12d54e0 + 0xe0) == 0)) {
    native_sub_4327ec();
  }
  uVar10 = native_UnityEngine_Object__op_Inequality_8d76fc(lVar22,0,0);
  if ((uVar10 & 1) == 0) {
    return;
  }
  if (*(char *)((long)param_1 + 0xb4) != '\0') {
    native_UIInput__Init_9f1988(param_1);
  }
  uVar5 = native_UIInput__get_isSelected_9f283c(param_1);
  if (*(char *)((long)param_1 + 0xb4) != '\0') {
    native_UIInput__Init_9f1988(param_1);
  }
  lVar22 = param_1[0x12];
  uVar10 = native_System_String__IsNullOrEmpty_b09430(lVar22,0);
  if ((uVar10 & 1) == 0) {
    lVar17 = *plVar25;
    uVar6 = 0;
LAB_009f1c84:
    plVar15 = param_1 + 9;
    puVar1 = (undefined4 *)((long)param_1 + 0x4c);
    plVar23 = param_1 + 10;
    puVar2 = (undefined4 *)((long)param_1 + 0x54);
  }
  else {
    uVar11 = native_UnityEngine_Input__get_compositionString_dbdf20(0);
    uVar6 = native_System_String__IsNullOrEmpty_b09430(uVar11,0);
    lVar17 = *plVar25;
    if (((uVar5 | uVar6 ^ 0xffffffff) & 1) != 0) goto LAB_009f1c84;
    plVar15 = param_1 + 0x14;
    puVar1 = (undefined4 *)((long)param_1 + 0xa4);
    plVar23 = param_1 + 0x15;
    puVar2 = (undefined4 *)((long)param_1 + 0xac);
    uVar6 = 1;
  }
  if (lVar17 == 0) goto LAB_009f2784;
  native_UIWidget__set_color_947adc((int)*plVar15,*puVar1,(int)*plVar23,*puVar2,lVar17,0);
  uVar11 = _StringLiteral___12eb5f0;
  lVar17 = _StringLiteral__12eaac0;
  if ((uVar6 & 1) == 0) {
    if ((int)param_1[4] == 2) {
      if (*plVar25 == 0) goto LAB_009f2784;
      plVar15 = (long *)native_UILabel__get_font_ae77e8(*plVar25,0);
      uVar13 = uVar11;
      if (plVar15 != (long *)0x0) {
        lVar18 = *plVar15;
        if ((ulong)*(ushort *)(lVar18 + 0x12a) != 0) {
          uVar10 = 0;
          piVar19 = (int *)(*(long *)(lVar18 + 0xb0) + 8);
          do {
            if (*(long *)(piVar19 + -2) == _INGUIFont_TypeInfo_12d4c70) {
              puVar12 = (undefined8 *)(lVar18 + (long)(*piVar19 + 2) * 0x10 + 0x138);
              goto LAB_009f1da4;
            }
            uVar10 = uVar10 + 1;
            piVar19 = piVar19 + 4;
          } while (uVar10 < *(ushort *)(lVar18 + 0x12a));
        }
        puVar12 = (undefined8 *)native_sub_3c9b34(plVar15,_INGUIFont_TypeInfo_12d4c70,2);
LAB_009f1da4:
        lVar18 = (*(code *)*puVar12)(plVar15,puVar12[1]);
        if (lVar18 != 0) {
          lVar18 = *plVar15;
          if ((ulong)*(ushort *)(lVar18 + 0x12a) != 0) {
            uVar10 = 0;
            piVar19 = (int *)(*(long *)(lVar18 + 0xb0) + 8);
            do {
              if (*(long *)(piVar19 + -2) == _INGUIFont_TypeInfo_12d4c70) {
                puVar12 = (undefined8 *)(lVar18 + (long)(*piVar19 + 2) * 0x10 + 0x138);
                goto LAB_009f1e0c;
              }
              uVar10 = uVar10 + 1;
              piVar19 = piVar19 + 4;
            } while (uVar10 < *(ushort *)(lVar18 + 0x12a));
          }
          puVar12 = (undefined8 *)native_sub_3c9b34(plVar15,_INGUIFont_TypeInfo_12d4c70,2);
LAB_009f1e0c:
          lVar18 = (*(code *)*puVar12)(plVar15,puVar12[1]);
          if (lVar18 == 0) goto LAB_009f2784;
          lVar18 = native_BMFont__GetGlyph_dd1c0c(lVar18,0x2a,0);
          uVar13 = _StringLiteral_x_12f6b98;
          if (lVar18 != 0) {
            uVar13 = uVar11;
          }
        }
      }
      if (lVar22 == 0) goto LAB_009f2784;
      iVar8 = *(int *)(lVar22 + 0x10);
      if (0 < iVar8) {
        do {
          lVar17 = native_System_String__Concat_afbd68(lVar17,uVar13,0);
          iVar8 = iVar8 + -1;
        } while (iVar8 != 0);
      }
      lVar22 = lVar17;
      if ((uVar5 & 1) == 0) goto LAB_009f1ec8;
LAB_009f1e6c:
      if (lVar22 == 0) goto LAB_009f2784;
      uVar26 = *(undefined4 *)(lVar22 + 0x10);
      uVar7 = native_UIInput__get_cursorPosition_9f3090(param_1);
      iVar8 = native_UnityEngine_Mathf__Min_8e4c18(uVar26,uVar7,0);
      uVar11 = native_System_String__Substring_b09fac(lVar22,0,iVar8,0);
      uVar13 = native_UnityEngine_Input__get_compositionString_dbdf20(0);
      uVar11 = native_System_String__Concat_afbd68(uVar11,uVar13,0);
    }
    else {
      if ((uVar5 & 1) != 0) goto LAB_009f1e6c;
LAB_009f1ec8:
      if (lVar22 == 0) goto LAB_009f2784;
      uVar11 = native_System_String__Substring_b09fac(lVar22,0,0,0);
      iVar8 = 0;
    }
    uVar13 = native_System_String__Substring_b09fac(lVar22,iVar8,*(int *)(lVar22 + 0x10) - iVar8,0);
    lVar22 = native_System_String__Concat_afbd68(uVar11,uVar13,0);
    if ((uVar5 & 1) == 0) {
LAB_009f1fb0:
      if (((*(byte *)(_UIInput_TypeInfo_12d6450 + 0x133) >> 2 & 1) != 0) &&
         (*(int *)(_UIInput_TypeInfo_12d6450 + 0xe0) == 0)) {
        native_sub_4327ec();
      }
      *(undefined4 *)(*(long *)(_UIInput_TypeInfo_12d6450 + 0xb8) + 0x10) = 0;
      lVar17 = *plVar25;
      if (lVar17 == 0) goto LAB_009f2784;
      uVar26 = (undefined4)param_1[0x17];
      goto LAB_009f1fe8;
    }
    lVar17 = *plVar25;
    if (lVar17 == 0) goto LAB_009f2784;
    if ((*(int *)(lVar17 + 0x1e4) != 1) || (*(int *)(lVar17 + 0x1c0) != 1)) goto LAB_009f1fb0;
    iVar9 = native_UILabel__CalculateOffsetToFit_aedc24(lVar17,lVar22,0);
    uVar4 = *(ushort *)(_UIInput_TypeInfo_12d6450 + 0x132);
    uVar20 = uVar4 & 0x400;
    if (iVar9 == 0) {
      if (((uVar4 & 0x400) != 0) && (*(int *)(_UIInput_TypeInfo_12d6450 + 0xe0) == 0)) {
        native_sub_4327ec();
      }
      *(undefined4 *)(*(long *)(_UIInput_TypeInfo_12d6450 + 0xb8) + 0x10) = 0;
      lVar17 = *plVar25;
      if (lVar17 == 0) goto LAB_009f2784;
      uVar26 = (undefined4)param_1[0x17];
LAB_009f2678:
      native_UILabel__set_alignment_ae8458(lVar17,uVar26,0);
    }
    else {
      if (((uVar4 & 0x400) != 0) && (*(int *)(_UIInput_TypeInfo_12d6450 + 0xe0) == 0)) {
        native_sub_4327ec();
        uVar20 = *(ushort *)(_UIInput_TypeInfo_12d6450 + 0x132) & 0x400;
      }
      piVar19 = (int *)(*(long *)(_UIInput_TypeInfo_12d6450 + 0xb8) + 0x10);
      iVar21 = *piVar19;
      if (iVar8 < iVar21) {
        if ((uVar20 != 0) && (*(int *)(_UIInput_TypeInfo_12d6450 + 0xe0) == 0)) {
          native_sub_4327ec();
          piVar19 = (int *)(*(long *)(_UIInput_TypeInfo_12d6450 + 0xb8) + 0x10);
        }
        *piVar19 = iVar8;
LAB_009f266c:
        lVar17 = *plVar25;
        if (lVar17 == 0) goto LAB_009f2784;
        uVar26 = 1;
        goto LAB_009f2678;
      }
      if ((uVar20 != 0) && (*(int *)(_UIInput_TypeInfo_12d6450 + 0xe0) == 0)) {
        native_sub_4327ec();
        piVar19 = (int *)(*(long *)(_UIInput_TypeInfo_12d6450 + 0xb8) + 0x10);
        iVar21 = *piVar19;
      }
      if (iVar9 < iVar21) {
        if (((*(byte *)(_UIInput_TypeInfo_12d6450 + 0x133) >> 2 & 1) != 0) &&
           (*(int *)(_UIInput_TypeInfo_12d6450 + 0xe0) == 0)) {
          native_sub_4327ec();
          piVar19 = (int *)(*(long *)(_UIInput_TypeInfo_12d6450 + 0xb8) + 0x10);
        }
        *piVar19 = iVar9;
        goto LAB_009f266c;
      }
      if (lVar22 == 0) goto LAB_009f2784;
      lVar17 = *plVar25;
      uVar11 = native_System_String__Substring_b09fac(lVar22,0,iVar8,0);
      if (lVar17 == 0) goto LAB_009f2784;
      iVar8 = native_UILabel__CalculateOffsetToFit_aedc24(lVar17,uVar11,0);
      if (((*(byte *)(_UIInput_TypeInfo_12d6450 + 0x133) >> 2 & 1) != 0) &&
         (*(int *)(_UIInput_TypeInfo_12d6450 + 0xe0) == 0)) {
        native_sub_4327ec(_UIInput_TypeInfo_12d6450);
      }
      piVar19 = (int *)(*(long *)(_UIInput_TypeInfo_12d6450 + 0xb8) + 0x10);
      if (*piVar19 < iVar8) {
        if (((*(byte *)(_UIInput_TypeInfo_12d6450 + 0x133) >> 2 & 1) != 0) &&
           (*(int *)(_UIInput_TypeInfo_12d6450 + 0xe0) == 0)) {
          native_sub_4327ec(_UIInput_TypeInfo_12d6450);
          piVar19 = (int *)(*(long *)(_UIInput_TypeInfo_12d6450 + 0xb8) + 0x10);
        }
        *piVar19 = iVar8;
        lVar17 = *plVar25;
        if (lVar17 == 0) goto LAB_009f2784;
        uVar26 = 3;
        goto LAB_009f2678;
      }
    }
    if (((*(byte *)(_UIInput_TypeInfo_12d6450 + 0x133) >> 2 & 1) != 0) &&
       (*(int *)(_UIInput_TypeInfo_12d6450 + 0xe0) == 0)) {
      native_sub_4327ec();
    }
    iVar8 = *(int *)(*(long *)(_UIInput_TypeInfo_12d6450 + 0xb8) + 0x10);
    if (iVar8 != 0) {
      if (((*(byte *)(_UIInput_TypeInfo_12d6450 + 0x133) >> 2 & 1) != 0) &&
         (*(int *)(_UIInput_TypeInfo_12d6450 + 0xe0) == 0)) {
        native_sub_4327ec();
        iVar8 = *(int *)(*(long *)(_UIInput_TypeInfo_12d6450 + 0xb8) + 0x10);
      }
      if (lVar22 == 0) goto LAB_009f2784;
      lVar22 = native_System_String__Substring_b09fac
                         (lVar22,iVar8,*(int *)(lVar22 + 0x10) - iVar8,0);
    }
  }
  else {
    lVar17 = *plVar25;
    if (lVar17 == 0) goto LAB_009f2784;
    uVar26 = (undefined4)param_1[0x17];
    plVar15 = (long *)&StringLiteral__12eaac0;
    if ((uVar5 & 1) == 0) {
      plVar15 = param_1 + 0x13;
    }
    lVar22 = *plVar15;
LAB_009f1fe8:
    native_UILabel__set_alignment_ae8458(lVar17,uVar26,0);
  }
  if (*plVar25 == 0) goto LAB_009f2784;
  native_UILabel__set_text_ae81a8(*plVar25,lVar22,0);
  if ((uVar5 & 1) == 0) {
LAB_009f2280:
                    /* WARNING: Could not recover jumptable at 0x009f22a4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (**(code **)(*param_1 + 0x1c8))(param_1,*(undefined8 *)(*param_1 + 0x1d0));
    return;
  }
  if (((*(byte *)(_UIInput_TypeInfo_12d6450 + 0x133) >> 2 & 1) != 0) &&
     (*(int *)(_UIInput_TypeInfo_12d6450 + 0xe0) == 0)) {
    native_sub_4327ec();
  }
  if ((*(long *)(*(long *)(_UIInput_TypeInfo_12d6450 + 0xb8) + 0x20) != 0) &&
     (uVar10 = native_UIInput__get_inputShouldBeHidden_9f28e0(param_1), (uVar10 & 1) == 0))
  goto LAB_009f2280;
  lVar22 = param_1[0x18];
  if (((*(byte *)(_UIInput_TypeInfo_12d6450 + 0x133) >> 2 & 1) != 0) &&
     (*(int *)(_UIInput_TypeInfo_12d6450 + 0xe0) == 0)) {
    native_sub_4327ec();
  }
  iVar8 = *(int *)(*(long *)(_UIInput_TypeInfo_12d6450 + 0xb8) + 0x10);
  plVar15 = param_1 + 0x1b;
  lVar17 = *plVar15;
  iVar9 = *(int *)((long)param_1 + 0xc4);
  if (((*(byte *)(_UnityEngine_Object_TypeInfo_12d54e0 + 0x133) >> 2 & 1) != 0) &&
     (*(int *)(_UnityEngine_Object_TypeInfo_12d54e0 + 0xe0) == 0)) {
    native_sub_4327ec();
  }
  uVar10 = native_UnityEngine_Object__op_Equality_8e9a3c(lVar17,0,0);
  if ((uVar10 & 1) != 0) {
    lVar17 = native_sub_432808(_UnityEngine_Texture2D_TypeInfo_12d61f0);
    native_UnityEngine_Texture2D___ctor_76f4a4(lVar17,2,2,5,0,0);
    *plVar15 = lVar17;
    native_sub_4326e0(plVar15,lVar17);
    iVar21 = 0;
    do {
      iVar16 = 0;
      do {
        lVar17 = *plVar15;
        native_UnityEngine_Color__get_white_8d9e10(0);
        if (lVar17 == 0) goto LAB_009f2784;
        native_UnityEngine_Texture2D__SetPixel_76f52c(lVar17,iVar16,iVar21,0);
        bVar3 = iVar16 == 0;
        iVar16 = 1;
      } while (bVar3);
      bVar3 = iVar21 == 0;
      iVar21 = 1;
    } while (bVar3);
    if (*plVar15 == 0) goto LAB_009f2784;
    native_UnityEngine_Texture2D__Apply_76f804(*plVar15,0);
  }
  iVar21 = (int)lVar22 - iVar8;
  iVar9 = iVar9 - iVar8;
  if (iVar21 != iVar9) {
    plVar23 = param_1 + 0x19;
    lVar22 = *plVar23;
    if (((*(byte *)(_UnityEngine_Object_TypeInfo_12d54e0 + 0x133) >> 2 & 1) != 0) &&
       (*(int *)(_UnityEngine_Object_TypeInfo_12d54e0 + 0xe0) == 0)) {
      native_sub_4327ec();
    }
    uVar10 = native_UnityEngine_Object__op_Equality_8e9a3c(lVar22,0,0);
    if ((uVar10 & 1) == 0) {
      plVar14 = (long *)*plVar25;
      if (plVar14 == (long *)0x0) goto LAB_009f2784;
      plVar24 = (long *)*plVar23;
      uVar26 = (**(code **)(*plVar14 + 0x2a8))(plVar14,*(undefined8 *)(*plVar14 + 0x2b0));
      if (plVar24 == (long *)0x0) goto LAB_009f2784;
      (**(code **)(*plVar24 + 0x2b8))(plVar24,uVar26,*(undefined8 *)(*plVar24 + 0x2c0));
      plVar14 = (long *)*plVar23;
      if (plVar14 == (long *)0x0) goto LAB_009f2784;
      (**(code **)(*plVar14 + 0x338))(plVar14,*plVar15,*(undefined8 *)(*plVar14 + 0x340));
      plVar14 = (long *)*plVar23;
      if (plVar14 == (long *)0x0) goto LAB_009f2784;
      (**(code **)(*plVar14 + 0x378))(plVar14,*(undefined8 *)(*plVar14 + 0x380));
      if (*plVar23 == 0) goto LAB_009f2784;
      native_UnityEngine_Behaviour__set_enabled_8d7b0c(*plVar23,1,0);
    }
    else {
      if (*plVar25 == 0) goto LAB_009f2784;
      uVar11 = native_UIRect__get_cachedGameObject_c2d1c0(*plVar25,0);
      if (((*(byte *)(_NGUITools_TypeInfo_12d53c8 + 0x133) >> 2 & 1) != 0) &&
         (*(int *)(_NGUITools_TypeInfo_12d53c8 + 0xe0) == 0)) {
        native_sub_4327ec(_NGUITools_TypeInfo_12d53c8);
      }
      lVar22 = native_NGUITools__AddWidget_object__4a528c
                         (uVar11,0x7fffffff,_Method_NGUITools_AddWidget_UITexture____12e56e8);
      *plVar23 = lVar22;
      native_sub_4326e0(plVar23,lVar22);
      if (*plVar23 == 0) goto LAB_009f2784;
      native_UnityEngine_Object__set_name_8e9c08(*plVar23,_StringLiteral_Input_Highlight_12ee898,0);
      plVar14 = (long *)*plVar23;
      if (plVar14 == (long *)0x0) goto LAB_009f2784;
      (**(code **)(*plVar14 + 0x338))(plVar14,*plVar15,*(undefined8 *)(*plVar14 + 0x340));
      if (*plVar23 == 0) goto LAB_009f2784;
      *(undefined1 *)(*plVar23 + 0x100) = 0;
      plVar14 = (long *)*plVar25;
      if (plVar14 == (long *)0x0) goto LAB_009f2784;
      plVar24 = (long *)*plVar23;
      uVar26 = (**(code **)(*plVar14 + 0x2a8))(plVar14,*(undefined8 *)(*plVar14 + 0x2b0));
      if (plVar24 == (long *)0x0) goto LAB_009f2784;
      (**(code **)(*plVar24 + 0x2b8))(plVar24,uVar26,*(undefined8 *)(*plVar24 + 0x2c0));
      if (*plVar25 == 0) goto LAB_009f2784;
      lVar22 = *plVar23;
      uVar11 = native_UIRect__get_cachedTransform_c27c58(*plVar25,0);
      if (lVar22 == 0) goto LAB_009f2784;
      native_UIRect__SetAnchor_c2ea60(lVar22,uVar11,0);
    }
  }
  plVar23 = param_1 + 0x1a;
  lVar22 = *plVar23;
  if (((*(byte *)(_UnityEngine_Object_TypeInfo_12d54e0 + 0x133) >> 2 & 1) != 0) &&
     (*(int *)(_UnityEngine_Object_TypeInfo_12d54e0 + 0xe0) == 0)) {
    native_sub_4327ec();
  }
  uVar10 = native_UnityEngine_Object__op_Equality_8e9a3c(lVar22,0,0);
  if ((uVar10 & 1) == 0) {
    plVar14 = (long *)*plVar25;
    if (plVar14 == (long *)0x0) goto LAB_009f2784;
    plVar24 = (long *)*plVar23;
    uVar26 = (**(code **)(*plVar14 + 0x2a8))(plVar14,*(undefined8 *)(*plVar14 + 0x2b0));
    if (plVar24 == (long *)0x0) goto LAB_009f2784;
    (**(code **)(*plVar24 + 0x2b8))(plVar24,uVar26,*(undefined8 *)(*plVar24 + 0x2c0));
    plVar14 = (long *)*plVar23;
    if (plVar14 == (long *)0x0) goto LAB_009f2784;
    (**(code **)(*plVar14 + 0x338))(plVar14,*plVar15,*(undefined8 *)(*plVar14 + 0x340));
    plVar15 = (long *)*plVar23;
    if (plVar15 == (long *)0x0) goto LAB_009f2784;
    (**(code **)(*plVar15 + 0x378))(plVar15,*(undefined8 *)(*plVar15 + 0x380));
    if (*plVar23 == 0) goto LAB_009f2784;
    native_UnityEngine_Behaviour__set_enabled_8d7b0c(*plVar23,1,0);
  }
  else {
    if (*plVar25 == 0) goto LAB_009f2784;
    uVar11 = native_UIRect__get_cachedGameObject_c2d1c0(*plVar25,0);
    if (((*(byte *)(_NGUITools_TypeInfo_12d53c8 + 0x133) >> 2 & 1) != 0) &&
       (*(int *)(_NGUITools_TypeInfo_12d53c8 + 0xe0) == 0)) {
      native_sub_4327ec(_NGUITools_TypeInfo_12d53c8);
    }
    lVar22 = native_NGUITools__AddWidget_object__4a528c
                       (uVar11,0x7fffffff,_Method_NGUITools_AddWidget_UITexture____12e56e8);
    *plVar23 = lVar22;
    native_sub_4326e0(plVar23,lVar22);
    if (*plVar23 == 0) goto LAB_009f2784;
    native_UnityEngine_Object__set_name_8e9c08(*plVar23,_StringLiteral_Input_Caret_12ee890,0);
    plVar14 = (long *)*plVar23;
    if (plVar14 == (long *)0x0) goto LAB_009f2784;
    (**(code **)(*plVar14 + 0x338))(plVar14,*plVar15,*(undefined8 *)(*plVar14 + 0x340));
    if (*plVar23 == 0) goto LAB_009f2784;
    *(undefined1 *)(*plVar23 + 0x100) = 0;
    plVar15 = (long *)*plVar25;
    if (plVar15 == (long *)0x0) goto LAB_009f2784;
    plVar14 = (long *)*plVar23;
    uVar26 = (**(code **)(*plVar15 + 0x2a8))(plVar15,*(undefined8 *)(*plVar15 + 0x2b0));
    if (plVar14 == (long *)0x0) goto LAB_009f2784;
    (**(code **)(*plVar14 + 0x2b8))(plVar14,uVar26,*(undefined8 *)(*plVar14 + 0x2c0));
    if (*plVar25 == 0) goto LAB_009f2784;
    lVar22 = *plVar23;
    uVar11 = native_UIRect__get_cachedTransform_c27c58(*plVar25,0);
    if (lVar22 == 0) goto LAB_009f2784;
    native_UIRect__SetAnchor_c2ea60(lVar22,uVar11,0);
  }
  if (*plVar23 == 0) goto LAB_009f2784;
  lVar22 = *plVar25;
  uVar11 = *(undefined8 *)(*plVar23 + 0xf8);
  if (iVar21 == iVar9) {
    if (lVar22 == 0) goto LAB_009f2784;
    native_UILabel__PrintOverlay_aec838
              ((int)param_1[0xb],*(undefined4 *)((long)param_1 + 0x5c),(int)param_1[0xc],
               *(undefined4 *)((long)param_1 + 100),(int)param_1[0xd],
               *(undefined4 *)((long)param_1 + 0x6c),(int)param_1[0xe],
               *(undefined4 *)((long)param_1 + 0x74),lVar22,iVar21,iVar21,uVar11,0,0);
    lVar22 = param_1[0x19];
    if (((*(byte *)(_UnityEngine_Object_TypeInfo_12d54e0 + 0x133) >> 2 & 1) != 0) &&
       (*(int *)(_UnityEngine_Object_TypeInfo_12d54e0 + 0xe0) == 0)) {
      native_sub_4327ec();
    }
    uVar10 = native_UnityEngine_Object__op_Inequality_8d76fc(lVar22,0,0);
    if ((uVar10 & 1) != 0) {
      lVar22 = param_1[0x19];
      if (lVar22 == 0) goto LAB_009f2784;
      uVar5 = 0;
      goto LAB_009f25b0;
    }
  }
  else {
    if ((param_1[0x19] == 0) || (lVar22 == 0)) goto LAB_009f2784;
    native_UILabel__PrintOverlay_aec838
              ((int)param_1[0xb],*(undefined4 *)((long)param_1 + 0x5c),(int)param_1[0xc],
               *(undefined4 *)((long)param_1 + 100),(int)param_1[0xd],
               *(undefined4 *)((long)param_1 + 0x6c),(int)param_1[0xe],
               *(undefined4 *)((long)param_1 + 0x74),lVar22,iVar21,iVar9,uVar11,
               *(undefined8 *)(param_1[0x19] + 0xf8),0);
    lVar22 = param_1[0x19];
    if ((lVar22 == 0) || (*(long *)(lVar22 + 0xf8) == 0)) goto LAB_009f2784;
    uVar5 = native_UIGeometry__get_hasVertices_9ef420();
    uVar5 = uVar5 & 1;
LAB_009f25b0:
    native_UnityEngine_Behaviour__set_enabled_8d7b0c(lVar22,uVar5,0);
  }
  fVar27 = (float)native_RealTime__get_time_72d024(0);
  *(float *)(param_1 + 0x1c) = fVar27 + 0.5;
  if (param_1[3] != 0) {
    *(undefined4 *)((long)param_1 + 0xe4) = *(undefined4 *)(param_1[3] + 0x8c);
    return;
  }
LAB_009f2784:
                    /* WARNING: Subroutine does not return */
  native_sub_432810();
}



/* UIInput$$SaveToPlayerPrefs @ 0x9f2de4
 * void UIInput__SaveToPlayerPrefs (UIInput_o* __this, System_String_o* val, const MethodInfo* method); */

/* UIInput$$SaveToPlayerPrefs
   void UIInput__SaveToPlayerPrefs (UIInput_o* __this, System_String_o* val, const MethodInfo*
   method); */

void native_UIInput__SaveToPlayerPrefs_9f2de4(long param_1,undefined8 param_2)

{
  undefined8 uVar1;
  ulong uVar2;
  undefined8 uVar3;
  
  uVar2 = native_System_String__IsNullOrEmpty_b09430(*(undefined8 *)(param_1 + 0x38),0);
  if ((uVar2 & 1) != 0) {
    return;
  }
  uVar2 = native_System_String__IsNullOrEmpty_b09430(param_2,0);
  uVar3 = *(undefined8 *)(param_1 + 0x38);
  if ((uVar2 & 1) != 0) {
    if (pcRam000000000133f7a8 == (code *)0x0) {
      pcRam000000000133f7a8 = (code *)native_sub_4326f0(&UNK_00e27b88);
    }
                    /* WARNING: Could not recover jumptable at 0x00762088. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*pcRam000000000133f7a8)(uVar3);
    return;
  }
  if (pcRam000000000133f778 == (code *)0x0) {
    pcRam000000000133f778 = (code *)native_sub_4326f0(&UNK_00e27a58,param_2,0);
  }
  uVar2 = (*pcRam000000000133f778)(uVar3,param_2);
  if ((uVar2 & 1) != 0) {
    return;
  }
  native_sub_432740(&UnityEngine_PlayerPrefsException_TypeInfo_12d56f8);
  uVar3 = native_sub_432808();
  uVar1 = native_sub_432740(&StringLiteral_Could_not_store_preference_value_12ed488);
  native_UnityEngine_PlayerPrefsException___ctor_761cf8(uVar3,uVar1);
  uVar1 = native_sub_432740(&Method_UnityEngine_PlayerPrefs_SetString___12e5df0);
                    /* WARNING: Subroutine does not return */
  native_sub_4327dc(uVar3,uVar1);
}



/* UIInput$$OnSelect @ 0x9f3aec
 * void UIInput__OnSelect (UIInput_o* __this, bool isSelected, const MethodInfo* method); */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* UIInput$$OnSelect
   void UIInput__OnSelect (UIInput_o* __this, bool isSelected, const MethodInfo* method); */

void native_UIInput__OnSelect_9f3aec(long param_1,ulong param_2)

{
  undefined4 uVar1;
  ulong uVar2;
  long *plVar3;
  long lVar4;
  undefined8 *puVar5;
  undefined8 uVar6;
  undefined8 uVar7;
  undefined8 *puVar8;
  
  if ((bRam0000000001341984 & 1) == 0) {
    native_sub_43273c(&UnityEngine_Object_TypeInfo_12d54e0);
    bRam0000000001341984 = 1;
  }
  if ((param_2 & 1) != 0) {
    uVar7 = *(undefined8 *)(param_1 + 0x18);
    if (((*(byte *)(_UnityEngine_Object_TypeInfo_12d54e0 + 0x133) >> 2 & 1) != 0) &&
       (*(int *)(_UnityEngine_Object_TypeInfo_12d54e0 + 0xe0) == 0)) {
      native_sub_4327ec();
    }
    uVar2 = native_UnityEngine_Object__op_Inequality_8d76fc(uVar7,0,0);
    if ((uVar2 & 1) != 0) {
      if (*(long *)(param_1 + 0x18) == 0) {
                    /* WARNING: Subroutine does not return */
        native_sub_432810();
      }
      native_UILabel__set_supportEncoding_ae88fc(*(long *)(param_1 + 0x18),0,0);
    }
    if ((bRam0000000001341985 & 1) == 0) {
      native_sub_43273c(&NGUITools_TypeInfo_12d53c8);
      native_sub_43273c(&UnityEngine_Object_TypeInfo_12d54e0);
      native_sub_43273c(&UIInput_TypeInfo_12d6450);
      bRam0000000001341985 = 1;
    }
    uVar1 = native_UnityEngine_Time__get_frameCount_770964(0);
    *(undefined4 *)(param_1 + 0xf4) = uVar1;
    if (((*(byte *)(_UIInput_TypeInfo_12d6450 + 0x133) >> 2 & 1) != 0) &&
       (*(int *)(_UIInput_TypeInfo_12d6450 + 0xe0) == 0)) {
      native_sub_4327ec();
    }
    plVar3 = (long *)(*(long *)(_UIInput_TypeInfo_12d6450 + 0xb8) + 8);
    *plVar3 = param_1;
    native_sub_4326e0(plVar3,param_1);
    if (*(char *)(param_1 + 0xb4) != '\0') {
      native_UIInput__Init_9f1988(param_1);
    }
    uVar7 = *(undefined8 *)(param_1 + 0x18);
    if (((*(byte *)(_UnityEngine_Object_TypeInfo_12d54e0 + 0x133) >> 2 & 1) != 0) &&
       (*(int *)(_UnityEngine_Object_TypeInfo_12d54e0 + 0xe0) == 0)) {
      native_sub_4327ec();
    }
    uVar2 = native_UnityEngine_Object__op_Inequality_8d76fc(uVar7,0,0);
    if ((uVar2 & 1) != 0) {
      lVar4 = *(long *)(param_1 + 0x18);
      if (lVar4 == 0) {
                    /* WARNING: Subroutine does not return */
        native_sub_432810();
      }
      *(undefined1 *)(param_1 + 0x108) = *(undefined1 *)(lVar4 + 0x220);
      native_UILabel__set_overflowEllipsis_ae87d0(lVar4,0,0);
    }
    uVar7 = *(undefined8 *)(param_1 + 0x18);
    if (((*(byte *)(_UnityEngine_Object_TypeInfo_12d54e0 + 0x133) >> 2 & 1) != 0) &&
       (*(int *)(_UnityEngine_Object_TypeInfo_12d54e0 + 0xe0) == 0)) {
      native_sub_4327ec();
    }
    uVar2 = native_UnityEngine_Object__op_Inequality_8d76fc(uVar7,0,0);
    if ((uVar2 & 1) != 0) {
      if (((*(byte *)(_NGUITools_TypeInfo_12d53c8 + 0x133) >> 2 & 1) != 0) &&
         (*(int *)(_NGUITools_TypeInfo_12d53c8 + 0xe0) == 0)) {
        native_sub_4327ec();
      }
      uVar2 = native_NGUITools__GetActive_72d02c(param_1,0);
      if ((uVar2 & 1) != 0) {
        uVar1 = native_UnityEngine_Time__get_frameCount_770964(0);
        *(undefined4 *)(param_1 + 0xf0) = uVar1;
      }
    }
    return;
  }
  if ((bRam0000000001341986 & 1) == 0) {
    native_sub_43273c(&NGUITools_TypeInfo_12d53c8);
    native_sub_43273c(&UnityEngine_Object_TypeInfo_12d54e0);
    native_sub_43273c(&UIInput_TypeInfo_12d6450);
    bRam0000000001341986 = 1;
  }
  if (*(char *)(param_1 + 0xb4) != '\0') {
    native_UIInput__Init_9f1988(param_1);
  }
  uVar7 = *(undefined8 *)(param_1 + 0x18);
  if (((*(byte *)(_UnityEngine_Object_TypeInfo_12d54e0 + 0x133) >> 2 & 1) != 0) &&
     (*(int *)(_UnityEngine_Object_TypeInfo_12d54e0 + 0xe0) == 0)) {
    native_sub_4327ec();
  }
  uVar2 = native_UnityEngine_Object__op_Inequality_8d76fc(uVar7,0,0);
  if ((uVar2 & 1) != 0) {
    if (*(long *)(param_1 + 0x18) == 0) goto LAB_009f3f98;
    native_UILabel__set_overflowEllipsis_ae87d0
              (*(long *)(param_1 + 0x18),*(undefined1 *)(param_1 + 0x108),0);
  }
  uVar7 = *(undefined8 *)(param_1 + 0x18);
  if (((*(byte *)(_UnityEngine_Object_TypeInfo_12d54e0 + 0x133) >> 2 & 1) != 0) &&
     (*(int *)(_UnityEngine_Object_TypeInfo_12d54e0 + 0xe0) == 0)) {
    native_sub_4327ec();
  }
  uVar2 = native_UnityEngine_Object__op_Inequality_8d76fc(uVar7,0,0);
  if ((uVar2 & 1) != 0) {
    if (((*(byte *)(_NGUITools_TypeInfo_12d53c8 + 0x133) >> 2 & 1) != 0) &&
       (*(int *)(_NGUITools_TypeInfo_12d53c8 + 0xe0) == 0)) {
      native_sub_4327ec();
    }
    uVar2 = native_NGUITools__GetActive_72d02c(param_1,0);
    if ((uVar2 & 1) == 0) goto LAB_009f3f30;
    if (*(char *)(param_1 + 0xb4) != '\0') {
      native_UIInput__Init_9f1988(param_1);
    }
    puVar8 = (undefined8 *)(param_1 + 0x90);
    native_sub_4326e0(puVar8,*puVar8);
    if (((*(byte *)(_UIInput_TypeInfo_12d6450 + 0x133) >> 2 & 1) != 0) &&
       (*(int *)(_UIInput_TypeInfo_12d6450 + 0xe0) == 0)) {
      native_sub_4327ec();
    }
    plVar3 = (long *)(_UIInput_TypeInfo_12d6450 + 0xb8);
    lVar4 = *plVar3;
    if (*(long *)(lVar4 + 0x20) != 0) {
      if (((*(byte *)(_UIInput_TypeInfo_12d6450 + 0x133) >> 2 & 1) != 0) &&
         (*(int *)(_UIInput_TypeInfo_12d6450 + 0xe0) == 0)) {
        native_sub_4327ec();
        plVar3 = (long *)(_UIInput_TypeInfo_12d6450 + 0xb8);
        lVar4 = *plVar3;
      }
      *(undefined1 *)(lVar4 + 0x28) = 0;
      if (*(long *)(*plVar3 + 0x20) == 0) goto LAB_009f3f98;
      native_UnityEngine_TouchScreenKeyboard__set_active_77110c(*(long *)(*plVar3 + 0x20),0,0);
      puVar5 = (undefined8 *)(*(long *)(_UIInput_TypeInfo_12d6450 + 0xb8) + 0x20);
      *puVar5 = 0;
      native_sub_4326e0(puVar5,0);
    }
    uVar2 = native_System_String__IsNullOrEmpty_b09430(*(undefined8 *)(param_1 + 0x90),0);
    lVar4 = *(long *)(param_1 + 0x18);
    if ((uVar2 & 1) == 0) {
      if (lVar4 == 0) goto LAB_009f3f98;
      native_UILabel__set_text_ae81a8(lVar4,*puVar8,0);
    }
    else {
      if (lVar4 == 0) goto LAB_009f3f98;
      native_UILabel__set_text_ae81a8(lVar4,*(undefined8 *)(param_1 + 0x98),0);
      if (*(long *)(param_1 + 0x18) == 0) goto LAB_009f3f98;
      native_UIWidget__set_color_947adc
                (*(undefined4 *)(param_1 + 0xa0),*(undefined4 *)(param_1 + 0xa4),
                 *(undefined4 *)(param_1 + 0xa8),*(undefined4 *)(param_1 + 0xac),
                 *(long *)(param_1 + 0x18),0);
    }
    native_UnityEngine_Input__set_imeCompositionMode_dbdee0(0,0);
    if (*(long *)(param_1 + 0x18) == 0) {
LAB_009f3f98:
                    /* WARNING: Subroutine does not return */
      native_sub_432810();
    }
    native_UILabel__set_alignment_ae8458
              (*(long *)(param_1 + 0x18),*(undefined4 *)(param_1 + 0xb8),0);
  }
LAB_009f3f30:
  if (((*(byte *)(_UIInput_TypeInfo_12d6450 + 0x133) >> 2 & 1) != 0) &&
     (*(int *)(_UIInput_TypeInfo_12d6450 + 0xe0) == 0)) {
    native_sub_4327ec();
  }
  puVar8 = (undefined8 *)(*(long *)(_UIInput_TypeInfo_12d6450 + 0xb8) + 8);
  *puVar8 = 0;
  native_sub_4326e0(puVar8,0);
  native_UIInput__UpdateLabel_9f1b24(param_1);
  if (*(char *)(param_1 + 0x2e) == '\0') {
    return;
  }
  if ((bRam0000000001341993 & 1) == 0) {
    native_sub_43273c(&EventDelegate_TypeInfo_12d4590);
    native_sub_43273c(&NGUITools_TypeInfo_12d53c8);
    native_sub_43273c(&UnityEngine_Object_TypeInfo_12d54e0);
    native_sub_43273c(&UIInput_TypeInfo_12d6450);
    bRam0000000001341993 = 1;
  }
  if (((*(byte *)(_NGUITools_TypeInfo_12d53c8 + 0x133) >> 2 & 1) != 0) &&
     (*(int *)(_NGUITools_TypeInfo_12d53c8 + 0xe0) == 0)) {
    native_sub_4327ec();
  }
  uVar2 = native_NGUITools__GetActive_72d02c(param_1,0);
  if ((uVar2 & 1) == 0) {
    return;
  }
  if (*(char *)(param_1 + 0xb4) != '\0') {
    native_UIInput__Init_9f1988(param_1);
  }
  native_sub_4326e0((undefined8 *)(param_1 + 0x90),*(undefined8 *)(param_1 + 0x90));
  if (((*(byte *)(_UIInput_TypeInfo_12d6450 + 0x133) >> 2 & 1) != 0) &&
     (*(int *)(_UIInput_TypeInfo_12d6450 + 0xe0) == 0)) {
    native_sub_4327ec();
  }
  uVar7 = **(undefined8 **)(_UIInput_TypeInfo_12d6450 + 0xb8);
  if (((*(byte *)(_UnityEngine_Object_TypeInfo_12d54e0 + 0x133) >> 2 & 1) != 0) &&
     (*(int *)(_UnityEngine_Object_TypeInfo_12d54e0 + 0xe0) == 0)) {
    native_sub_4327ec(_UnityEngine_Object_TypeInfo_12d54e0);
  }
  uVar2 = native_UnityEngine_Object__op_Equality_8e9a3c(uVar7,0,0);
  if ((uVar2 & 1) != 0) {
    if (((*(byte *)(_UIInput_TypeInfo_12d6450 + 0x133) >> 2 & 1) != 0) &&
       (*(int *)(_UIInput_TypeInfo_12d6450 + 0xe0) == 0)) {
      native_sub_4327ec();
    }
    plVar3 = *(long **)(_UIInput_TypeInfo_12d6450 + 0xb8);
    *plVar3 = param_1;
    native_sub_4326e0(plVar3,param_1);
    uVar7 = *(undefined8 *)(param_1 + 0x78);
    if (((*(byte *)(_EventDelegate_TypeInfo_12d4590 + 0x133) >> 2 & 1) != 0) &&
       (*(int *)(_EventDelegate_TypeInfo_12d4590 + 0xe0) == 0)) {
      native_sub_4327ec();
    }
    native_EventDelegate__Execute_deecbc(uVar7,0);
    puVar8 = *(undefined8 **)(_UIInput_TypeInfo_12d6450 + 0xb8);
    *puVar8 = 0;
    native_sub_4326e0(puVar8,0);
  }
  uVar7 = *(undefined8 *)(param_1 + 0x90);
  uVar2 = native_System_String__IsNullOrEmpty_b09430(*(undefined8 *)(param_1 + 0x38),0);
  if ((uVar2 & 1) != 0) {
    return;
  }
  uVar2 = native_System_String__IsNullOrEmpty_b09430(uVar7,0);
  uVar6 = *(undefined8 *)(param_1 + 0x38);
  if ((uVar2 & 1) != 0) {
    if (pcRam000000000133f7a8 == (code *)0x0) {
      pcRam000000000133f7a8 = (code *)native_sub_4326f0(&UNK_00e27b88);
    }
                    /* WARNING: Could not recover jumptable at 0x00762088. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*pcRam000000000133f7a8)(uVar6);
    return;
  }
  if (pcRam000000000133f778 == (code *)0x0) {
    pcRam000000000133f778 = (code *)native_sub_4326f0(&UNK_00e27a58,uVar7,0);
  }
  uVar2 = (*pcRam000000000133f778)(uVar6,uVar7);
  if ((uVar2 & 1) != 0) {
    return;
  }
  native_sub_432740(&UnityEngine_PlayerPrefsException_TypeInfo_12d56f8);
  uVar7 = native_sub_432808();
  uVar6 = native_sub_432740(&StringLiteral_Could_not_store_preference_value_12ed488);
  native_UnityEngine_PlayerPrefsException___ctor_761cf8(uVar7,uVar6);
  uVar6 = native_sub_432740(&Method_UnityEngine_PlayerPrefs_SetString___12e5df0);
                    /* WARNING: Subroutine does not return */
  native_sub_4327dc(uVar7,uVar6);
}



/* UIInput$$OnSelectEvent @ 0x9f3ba0
 * void UIInput__OnSelectEvent (UIInput_o* __this, const MethodInfo* method); */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* UIInput$$OnSelectEvent
   void UIInput__OnSelectEvent (UIInput_o* __this, const MethodInfo* method); */

void native_UIInput__OnSelectEvent_9f3ba0(long param_1)

{
  undefined4 uVar1;
  long *plVar2;
  ulong uVar3;
  long lVar4;
  undefined8 uVar5;
  
  if ((bRam0000000001341985 & 1) == 0) {
    native_sub_43273c(&NGUITools_TypeInfo_12d53c8);
    native_sub_43273c(&UnityEngine_Object_TypeInfo_12d54e0);
    native_sub_43273c(&UIInput_TypeInfo_12d6450);
    bRam0000000001341985 = 1;
  }
  uVar1 = native_UnityEngine_Time__get_frameCount_770964(0);
  *(undefined4 *)(param_1 + 0xf4) = uVar1;
  if (((*(byte *)(_UIInput_TypeInfo_12d6450 + 0x133) >> 2 & 1) != 0) &&
     (*(int *)(_UIInput_TypeInfo_12d6450 + 0xe0) == 0)) {
    native_sub_4327ec();
  }
  plVar2 = (long *)(*(long *)(_UIInput_TypeInfo_12d6450 + 0xb8) + 8);
  *plVar2 = param_1;
  native_sub_4326e0(plVar2,param_1);
  if (*(char *)(param_1 + 0xb4) != '\0') {
    native_UIInput__Init_9f1988(param_1);
  }
  uVar5 = *(undefined8 *)(param_1 + 0x18);
  if (((*(byte *)(_UnityEngine_Object_TypeInfo_12d54e0 + 0x133) >> 2 & 1) != 0) &&
     (*(int *)(_UnityEngine_Object_TypeInfo_12d54e0 + 0xe0) == 0)) {
    native_sub_4327ec();
  }
  uVar3 = native_UnityEngine_Object__op_Inequality_8d76fc(uVar5,0,0);
  if ((uVar3 & 1) != 0) {
    lVar4 = *(long *)(param_1 + 0x18);
    if (lVar4 == 0) {
                    /* WARNING: Subroutine does not return */
      native_sub_432810();
    }
    *(undefined1 *)(param_1 + 0x108) = *(undefined1 *)(lVar4 + 0x220);
    native_UILabel__set_overflowEllipsis_ae87d0(lVar4,0,0);
  }
  uVar5 = *(undefined8 *)(param_1 + 0x18);
  if (((*(byte *)(_UnityEngine_Object_TypeInfo_12d54e0 + 0x133) >> 2 & 1) != 0) &&
     (*(int *)(_UnityEngine_Object_TypeInfo_12d54e0 + 0xe0) == 0)) {
    native_sub_4327ec();
  }
  uVar3 = native_UnityEngine_Object__op_Inequality_8d76fc(uVar5,0,0);
  if ((uVar3 & 1) != 0) {
    if (((*(byte *)(_NGUITools_TypeInfo_12d53c8 + 0x133) >> 2 & 1) != 0) &&
       (*(int *)(_NGUITools_TypeInfo_12d53c8 + 0xe0) == 0)) {
      native_sub_4327ec();
    }
    uVar3 = native_NGUITools__GetActive_72d02c(param_1,0);
    if ((uVar3 & 1) != 0) {
      uVar1 = native_UnityEngine_Time__get_frameCount_770964(0);
      *(undefined4 *)(param_1 + 0xf0) = uVar1;
    }
  }
  return;
}



/* UIInput$$OnDeselectEvent @ 0x9f3d10
 * void UIInput__OnDeselectEvent (UIInput_o* __this, const MethodInfo* method); */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* UIInput$$OnDeselectEvent
   void UIInput__OnDeselectEvent (UIInput_o* __this, const MethodInfo* method); */

void native_UIInput__OnDeselectEvent_9f3d10(long param_1)

{
  ulong uVar1;
  undefined8 *puVar2;
  undefined8 uVar3;
  long *plVar4;
  long lVar5;
  undefined8 uVar6;
  undefined8 *puVar7;
  
  if ((bRam0000000001341986 & 1) == 0) {
    native_sub_43273c(&NGUITools_TypeInfo_12d53c8);
    native_sub_43273c(&UnityEngine_Object_TypeInfo_12d54e0);
    native_sub_43273c(&UIInput_TypeInfo_12d6450);
    bRam0000000001341986 = 1;
  }
  if (*(char *)(param_1 + 0xb4) != '\0') {
    native_UIInput__Init_9f1988(param_1);
  }
  uVar6 = *(undefined8 *)(param_1 + 0x18);
  if (((*(byte *)(_UnityEngine_Object_TypeInfo_12d54e0 + 0x133) >> 2 & 1) != 0) &&
     (*(int *)(_UnityEngine_Object_TypeInfo_12d54e0 + 0xe0) == 0)) {
    native_sub_4327ec();
  }
  uVar1 = native_UnityEngine_Object__op_Inequality_8d76fc(uVar6,0,0);
  if ((uVar1 & 1) != 0) {
    if (*(long *)(param_1 + 0x18) == 0) goto LAB_009f3f98;
    native_UILabel__set_overflowEllipsis_ae87d0
              (*(long *)(param_1 + 0x18),*(undefined1 *)(param_1 + 0x108),0);
  }
  uVar6 = *(undefined8 *)(param_1 + 0x18);
  if (((*(byte *)(_UnityEngine_Object_TypeInfo_12d54e0 + 0x133) >> 2 & 1) != 0) &&
     (*(int *)(_UnityEngine_Object_TypeInfo_12d54e0 + 0xe0) == 0)) {
    native_sub_4327ec();
  }
  uVar1 = native_UnityEngine_Object__op_Inequality_8d76fc(uVar6,0,0);
  if ((uVar1 & 1) != 0) {
    if (((*(byte *)(_NGUITools_TypeInfo_12d53c8 + 0x133) >> 2 & 1) != 0) &&
       (*(int *)(_NGUITools_TypeInfo_12d53c8 + 0xe0) == 0)) {
      native_sub_4327ec();
    }
    uVar1 = native_NGUITools__GetActive_72d02c(param_1,0);
    if ((uVar1 & 1) == 0) goto LAB_009f3f30;
    if (*(char *)(param_1 + 0xb4) != '\0') {
      native_UIInput__Init_9f1988(param_1);
    }
    puVar7 = (undefined8 *)(param_1 + 0x90);
    native_sub_4326e0(puVar7,*puVar7);
    if (((*(byte *)(_UIInput_TypeInfo_12d6450 + 0x133) >> 2 & 1) != 0) &&
       (*(int *)(_UIInput_TypeInfo_12d6450 + 0xe0) == 0)) {
      native_sub_4327ec();
    }
    plVar4 = (long *)(_UIInput_TypeInfo_12d6450 + 0xb8);
    lVar5 = *plVar4;
    if (*(long *)(lVar5 + 0x20) != 0) {
      if (((*(byte *)(_UIInput_TypeInfo_12d6450 + 0x133) >> 2 & 1) != 0) &&
         (*(int *)(_UIInput_TypeInfo_12d6450 + 0xe0) == 0)) {
        native_sub_4327ec();
        plVar4 = (long *)(_UIInput_TypeInfo_12d6450 + 0xb8);
        lVar5 = *plVar4;
      }
      *(undefined1 *)(lVar5 + 0x28) = 0;
      if (*(long *)(*plVar4 + 0x20) == 0) goto LAB_009f3f98;
      native_UnityEngine_TouchScreenKeyboard__set_active_77110c(*(long *)(*plVar4 + 0x20),0,0);
      puVar2 = (undefined8 *)(*(long *)(_UIInput_TypeInfo_12d6450 + 0xb8) + 0x20);
      *puVar2 = 0;
      native_sub_4326e0(puVar2,0);
    }
    uVar1 = native_System_String__IsNullOrEmpty_b09430(*(undefined8 *)(param_1 + 0x90),0);
    lVar5 = *(long *)(param_1 + 0x18);
    if ((uVar1 & 1) == 0) {
      if (lVar5 == 0) goto LAB_009f3f98;
      native_UILabel__set_text_ae81a8(lVar5,*puVar7,0);
    }
    else {
      if (lVar5 == 0) goto LAB_009f3f98;
      native_UILabel__set_text_ae81a8(lVar5,*(undefined8 *)(param_1 + 0x98),0);
      if (*(long *)(param_1 + 0x18) == 0) goto LAB_009f3f98;
      native_UIWidget__set_color_947adc
                (*(undefined4 *)(param_1 + 0xa0),*(undefined4 *)(param_1 + 0xa4),
                 *(undefined4 *)(param_1 + 0xa8),*(undefined4 *)(param_1 + 0xac),
                 *(long *)(param_1 + 0x18),0);
    }
    native_UnityEngine_Input__set_imeCompositionMode_dbdee0(0,0);
    if (*(long *)(param_1 + 0x18) == 0) {
LAB_009f3f98:
                    /* WARNING: Subroutine does not return */
      native_sub_432810();
    }
    native_UILabel__set_alignment_ae8458
              (*(long *)(param_1 + 0x18),*(undefined4 *)(param_1 + 0xb8),0);
  }
LAB_009f3f30:
  if (((*(byte *)(_UIInput_TypeInfo_12d6450 + 0x133) >> 2 & 1) != 0) &&
     (*(int *)(_UIInput_TypeInfo_12d6450 + 0xe0) == 0)) {
    native_sub_4327ec();
  }
  puVar7 = (undefined8 *)(*(long *)(_UIInput_TypeInfo_12d6450 + 0xb8) + 8);
  *puVar7 = 0;
  native_sub_4326e0(puVar7,0);
  native_UIInput__UpdateLabel_9f1b24(param_1);
  if (*(char *)(param_1 + 0x2e) == '\0') {
    return;
  }
  if ((bRam0000000001341993 & 1) == 0) {
    native_sub_43273c(&EventDelegate_TypeInfo_12d4590);
    native_sub_43273c(&NGUITools_TypeInfo_12d53c8);
    native_sub_43273c(&UnityEngine_Object_TypeInfo_12d54e0);
    native_sub_43273c(&UIInput_TypeInfo_12d6450);
    bRam0000000001341993 = 1;
  }
  if (((*(byte *)(_NGUITools_TypeInfo_12d53c8 + 0x133) >> 2 & 1) != 0) &&
     (*(int *)(_NGUITools_TypeInfo_12d53c8 + 0xe0) == 0)) {
    native_sub_4327ec();
  }
  uVar1 = native_NGUITools__GetActive_72d02c(param_1,0);
  if ((uVar1 & 1) == 0) {
    return;
  }
  if (*(char *)(param_1 + 0xb4) != '\0') {
    native_UIInput__Init_9f1988(param_1);
  }
  native_sub_4326e0((undefined8 *)(param_1 + 0x90),*(undefined8 *)(param_1 + 0x90));
  if (((*(byte *)(_UIInput_TypeInfo_12d6450 + 0x133) >> 2 & 1) != 0) &&
     (*(int *)(_UIInput_TypeInfo_12d6450 + 0xe0) == 0)) {
    native_sub_4327ec();
  }
  uVar6 = **(undefined8 **)(_UIInput_TypeInfo_12d6450 + 0xb8);
  if (((*(byte *)(_UnityEngine_Object_TypeInfo_12d54e0 + 0x133) >> 2 & 1) != 0) &&
     (*(int *)(_UnityEngine_Object_TypeInfo_12d54e0 + 0xe0) == 0)) {
    native_sub_4327ec(_UnityEngine_Object_TypeInfo_12d54e0);
  }
  uVar1 = native_UnityEngine_Object__op_Equality_8e9a3c(uVar6,0,0);
  if ((uVar1 & 1) != 0) {
    if (((*(byte *)(_UIInput_TypeInfo_12d6450 + 0x133) >> 2 & 1) != 0) &&
       (*(int *)(_UIInput_TypeInfo_12d6450 + 0xe0) == 0)) {
      native_sub_4327ec();
    }
    plVar4 = *(long **)(_UIInput_TypeInfo_12d6450 + 0xb8);
    *plVar4 = param_1;
    native_sub_4326e0(plVar4,param_1);
    uVar6 = *(undefined8 *)(param_1 + 0x78);
    if (((*(byte *)(_EventDelegate_TypeInfo_12d4590 + 0x133) >> 2 & 1) != 0) &&
       (*(int *)(_EventDelegate_TypeInfo_12d4590 + 0xe0) == 0)) {
      native_sub_4327ec();
    }
    native_EventDelegate__Execute_deecbc(uVar6,0);
    puVar7 = *(undefined8 **)(_UIInput_TypeInfo_12d6450 + 0xb8);
    *puVar7 = 0;
    native_sub_4326e0(puVar7,0);
  }
  uVar6 = *(undefined8 *)(param_1 + 0x90);
  uVar1 = native_System_String__IsNullOrEmpty_b09430(*(undefined8 *)(param_1 + 0x38),0);
  if ((uVar1 & 1) != 0) {
    return;
  }
  uVar1 = native_System_String__IsNullOrEmpty_b09430(uVar6,0);
  uVar3 = *(undefined8 *)(param_1 + 0x38);
  if ((uVar1 & 1) != 0) {
    if (pcRam000000000133f7a8 == (code *)0x0) {
      pcRam000000000133f7a8 = (code *)native_sub_4326f0(&UNK_00e27b88);
    }
                    /* WARNING: Could not recover jumptable at 0x00762088. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*pcRam000000000133f7a8)(uVar3);
    return;
  }
  if (pcRam000000000133f778 == (code *)0x0) {
    pcRam000000000133f778 = (code *)native_sub_4326f0(&UNK_00e27a58,uVar6,0);
  }
  uVar1 = (*pcRam000000000133f778)(uVar3,uVar6);
  if ((uVar1 & 1) != 0) {
    return;
  }
  native_sub_432740(&UnityEngine_PlayerPrefsException_TypeInfo_12d56f8);
  uVar6 = native_sub_432808();
  uVar3 = native_sub_432740(&StringLiteral_Could_not_store_preference_value_12ed488);
  native_UnityEngine_PlayerPrefsException___ctor_761cf8(uVar6,uVar3);
  uVar3 = native_sub_432740(&Method_UnityEngine_PlayerPrefs_SetString___12e5df0);
                    /* WARNING: Subroutine does not return */
  native_sub_4327dc(uVar6,uVar3);
}



/* UIInput$$Update @ 0x9f413c
 * void UIInput__Update (UIInput_o* __this, const MethodInfo* method); */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* UIInput$$Update
   void UIInput__Update (UIInput_o* __this, const MethodInfo* method); */

void native_UIInput__Update_9f413c(long *param_1)

{
  bool bVar1;
  int iVar2;
  int iVar3;
  uint uVar4;
  undefined4 uVar5;
  ulong uVar6;
  undefined8 uVar7;
  undefined8 *puVar8;
  long lVar9;
  long *plVar10;
  long lVar11;
  byte bVar12;
  float fVar13;
  float fVar14;
  ushort auStack_44 [2];
  
  if ((bRam0000000001341987 & 1) == 0) {
    native_sub_43273c(&UnityEngine_Object_TypeInfo_12d54e0);
    native_sub_43273c(&UICamera_TypeInfo_12d6410);
    native_sub_43273c(&UIInput_TypeInfo_12d6450);
    native_sub_43273c(&StringLiteral___12eab80);
    native_sub_43273c(&StringLiteral___12f70d8);
    native_sub_43273c(&StringLiteral__12eaac0);
    bRam0000000001341987 = 1;
  }
  auStack_44[0] = 0;
  uVar6 = native_UIInput__get_isSelected_9f283c(param_1);
  if ((uVar6 & 1) == 0) {
    return;
  }
  iVar3 = *(int *)((long)param_1 + 0xf4);
  iVar2 = native_UnityEngine_Time__get_frameCount_770964(0);
  if (iVar3 == iVar2) {
    return;
  }
  if (*(char *)((long)param_1 + 0xb4) != '\0') {
    native_UIInput__Init_9f1988(param_1);
  }
  if (((*(byte *)(_UIInput_TypeInfo_12d6450 + 0x133) >> 2 & 1) != 0) &&
     (*(int *)(_UIInput_TypeInfo_12d6450 + 0xe0) == 0)) {
    native_sub_4327ec();
  }
  lVar11 = *(long *)(_UIInput_TypeInfo_12d6450 + 0xb8);
  if (*(char *)(lVar11 + 0x28) != '\0') {
    if (((*(byte *)(_UIInput_TypeInfo_12d6450 + 0x133) >> 2 & 1) != 0) &&
       (*(int *)(_UIInput_TypeInfo_12d6450 + 0xe0) == 0)) {
      native_sub_4327ec();
      lVar11 = *(long *)(_UIInput_TypeInfo_12d6450 + 0xb8);
    }
    lVar11 = *(long *)(lVar11 + 0x20);
    if (lVar11 != 0) {
      if (((*(byte *)(_UIInput_TypeInfo_12d6450 + 0x133) >> 2 & 1) != 0) &&
         (*(int *)(_UIInput_TypeInfo_12d6450 + 0xe0) == 0)) {
        native_sub_4327ec();
        lVar11 = *(long *)(*(long *)(_UIInput_TypeInfo_12d6450 + 0xb8) + 0x20);
        if (lVar11 == 0) goto LAB_009f504c;
      }
      uVar6 = native_UnityEngine_TouchScreenKeyboard__get_active_7710cc(lVar11,0);
      if ((uVar6 & 1) == 0) {
        return;
      }
    }
    if (((*(byte *)(_UIInput_TypeInfo_12d6450 + 0x133) >> 2 & 1) != 0) &&
       (*(int *)(_UIInput_TypeInfo_12d6450 + 0xe0) == 0)) {
      native_sub_4327ec();
    }
    *(undefined1 *)(*(long *)(_UIInput_TypeInfo_12d6450 + 0xb8) + 0x28) = 0;
  }
  lVar11 = param_1[0x1e];
  if (((int)lVar11 != -1) &&
     (iVar3 = native_UnityEngine_Time__get_frameCount_770964(0), (int)lVar11 != iVar3)) {
    *(undefined4 *)(param_1 + 0x1e) = 0xffffffff;
    uVar6 = native_System_String__IsNullOrEmpty_b09430(param_1[0x12],0);
    if ((uVar6 & 1) == 0) {
      if (param_1[0x12] == 0) goto LAB_009f504c;
      uVar5 = *(undefined4 *)(param_1[0x12] + 0x10);
    }
    else {
      uVar5 = 0;
    }
    *(undefined4 *)((long)param_1 + 0xc4) = uVar5;
    if (((*(byte *)(_UIInput_TypeInfo_12d6450 + 0x133) >> 2 & 1) != 0) &&
       (*(int *)(_UIInput_TypeInfo_12d6450 + 0xe0) == 0)) {
      native_sub_4327ec();
    }
    *(undefined4 *)(*(long *)(_UIInput_TypeInfo_12d6450 + 0xb8) + 0x10) = 0;
    uVar5 = 0;
    if (*(char *)((long)param_1 + 0x2d) == '\0') {
      uVar5 = *(undefined4 *)((long)param_1 + 0xc4);
    }
    *(undefined4 *)(param_1 + 0x18) = uVar5;
    if (param_1[3] == 0) goto LAB_009f504c;
    native_UIWidget__set_color_947adc
              ((int)param_1[9],*(undefined4 *)((long)param_1 + 0x4c),(int)param_1[10],
               *(undefined4 *)((long)param_1 + 0x54),param_1[3],0);
    uVar4 = native_UnityEngine_Application__get_platform_8d6250(0);
    if ((uVar4 < 0x17) && ((1 << (ulong)(uVar4 & 0x1f) & 0x7c0900U) != 0)) {
      uVar6 = native_UIInput__get_inputShouldBeHidden_9f28e0(param_1);
      if ((uVar6 & 1) == 0) {
        native_UnityEngine_TouchScreenKeyboard__set_hideInput_77108c(0,0);
        uVar5 = (undefined4)param_1[5];
        lVar11 = param_1[0x12];
        *(undefined4 *)(param_1 + 0x18) = *(undefined4 *)((long)param_1 + 0xc4);
      }
      else {
        native_UnityEngine_TouchScreenKeyboard__set_hideInput_77108c(1,0);
        uVar5 = (undefined4)param_1[5];
        lVar11 = _StringLiteral___12f70d8;
      }
      if (((*(byte *)(_UIInput_TypeInfo_12d6450 + 0x133) >> 2 & 1) != 0) &&
         (*(int *)(_UIInput_TypeInfo_12d6450 + 0xe0) == 0)) {
        native_sub_4327ec();
      }
      *(undefined1 *)(*(long *)(_UIInput_TypeInfo_12d6450 + 0xb8) + 0x28) = 1;
      if ((int)param_1[4] == 2) {
        uVar7 = native_UnityEngine_TouchScreenKeyboard__Open_770f6c(lVar11,uVar5,0,0,1,0);
      }
      else {
        uVar6 = native_UIInput__get_inputShouldBeHidden_9f28e0(param_1);
        if ((uVar6 & 1) == 0) {
          bVar1 = (int)param_1[4] == 1;
        }
        else {
          bVar1 = false;
        }
        if (param_1[3] == 0) goto LAB_009f504c;
        uVar6 = native_UILabel__get_multiLine_ae8998(param_1[3],0);
        if ((uVar6 & 1) == 0) {
          bVar12 = 0;
        }
        else {
          bVar12 = *(byte *)((long)param_1 + 0x2c) ^ 1;
        }
        if (*(char *)((long)param_1 + 0xb4) != '\0') {
          native_UIInput__Init_9f1988(param_1);
        }
        uVar7 = native_UnityEngine_TouchScreenKeyboard__Open_770f3c
                          (lVar11,uVar5,bVar1,bVar12 != 0,0,0,param_1[0x13],0);
      }
      if (((*(byte *)(_UIInput_TypeInfo_12d6450 + 0x133) >> 2 & 1) != 0) &&
         (*(int *)(_UIInput_TypeInfo_12d6450 + 0xe0) == 0)) {
        native_sub_4327ec();
      }
      puVar8 = (undefined8 *)(*(long *)(_UIInput_TypeInfo_12d6450 + 0xb8) + 0x20);
      *puVar8 = uVar7;
      native_sub_4326e0(puVar8,uVar7);
    }
    else {
      if (((*(byte *)(_UICamera_TypeInfo_12d6410 + 0x133) >> 2 & 1) != 0) &&
         (*(int *)(_UICamera_TypeInfo_12d6410 + 0xe0) == 0)) {
        native_sub_4327ec();
      }
      uVar7 = *(undefined8 *)(*(long *)(_UICamera_TypeInfo_12d6410 + 0xb8) + 0xb8);
      if (((*(byte *)(_UnityEngine_Object_TypeInfo_12d54e0 + 0x133) >> 2 & 1) != 0) &&
         (*(int *)(_UnityEngine_Object_TypeInfo_12d54e0 + 0xe0) == 0)) {
        native_sub_4327ec(_UnityEngine_Object_TypeInfo_12d54e0);
      }
      uVar6 = native_UnityEngine_Object__op_Inequality_8d76fc(uVar7,0,0);
      if ((uVar6 & 1) == 0) {
LAB_009f4ff8:
        plVar10 = (long *)param_1[3];
        if ((plVar10 == (long *)0x0) ||
           (lVar11 = (**(code **)(*plVar10 + 0x1e8))(plVar10,*(undefined8 *)(*plVar10 + 0x1f0)),
           lVar11 == 0)) goto LAB_009f504c;
        if (*(int *)(lVar11 + 0x18) == 0) {
LAB_009f5050:
          uVar7 = native_sub_43283c();
                    /* WARNING: Subroutine does not return */
          native_sub_4327dc(uVar7,0);
        }
        uVar6 = (ulong)*(uint *)(lVar11 + 0x20);
        fVar13 = *(float *)(lVar11 + 0x24);
      }
      else {
        if (((*(byte *)(_UICamera_TypeInfo_12d6410 + 0x133) >> 2 & 1) != 0) &&
           (*(int *)(_UICamera_TypeInfo_12d6410 + 0xe0) == 0)) {
          native_sub_4327ec();
        }
        lVar11 = *(long *)(*(long *)(_UICamera_TypeInfo_12d6410 + 0xb8) + 0xb8);
        if (lVar11 == 0) goto LAB_009f504c;
        uVar7 = native_UICamera__get_cachedCamera_c95254(lVar11,0);
        if (((*(byte *)(_UnityEngine_Object_TypeInfo_12d54e0 + 0x133) >> 2 & 1) != 0) &&
           (*(int *)(_UnityEngine_Object_TypeInfo_12d54e0 + 0xe0) == 0)) {
          native_sub_4327ec(_UnityEngine_Object_TypeInfo_12d54e0);
        }
        uVar6 = native_UnityEngine_Object__op_Inequality_8d76fc(uVar7,0,0);
        if ((uVar6 & 1) == 0) goto LAB_009f4ff8;
        if (((*(byte *)(_UICamera_TypeInfo_12d6410 + 0x133) >> 2 & 1) != 0) &&
           (*(int *)(_UICamera_TypeInfo_12d6410 + 0xe0) == 0)) {
          native_sub_4327ec();
        }
        lVar11 = *(long *)(*(long *)(_UICamera_TypeInfo_12d6410 + 0xb8) + 0xb8);
        if (lVar11 == 0) goto LAB_009f504c;
        lVar11 = native_UICamera__get_cachedCamera_c95254(lVar11,0);
        plVar10 = (long *)param_1[3];
        if ((plVar10 == (long *)0x0) ||
           (lVar9 = (**(code **)(*plVar10 + 0x1e8))(plVar10,*(undefined8 *)(*plVar10 + 0x1f0)),
           lVar9 == 0)) goto LAB_009f504c;
        if (*(int *)(lVar9 + 0x18) == 0) goto LAB_009f5050;
        if (lVar11 == 0) goto LAB_009f504c;
        fVar13 = *(float *)(lVar9 + 0x24);
        uVar6 = native_UnityEngine_Camera__WorldToScreenPoint_8d9158
                          (*(undefined4 *)(lVar9 + 0x20),fVar13,*(undefined4 *)(lVar9 + 0x28),lVar11
                           ,0);
      }
      iVar3 = native_UnityEngine_Screen__get_height_76a618(0);
      native_UnityEngine_Input__set_imeCompositionMode_dbdee0(1,0);
      native_UnityEngine_Input__set_compositionCursorPos_dbdfdc(uVar6,(float)iVar3 - fVar13,0);
    }
    native_UIInput__UpdateLabel_9f1b24(param_1);
    uVar7 = native_UnityEngine_Input__get_inputString_dbdd58(0);
    uVar6 = native_System_String__IsNullOrEmpty_b09430(uVar7,0);
    if ((uVar6 & 1) != 0) {
      return;
    }
  }
  if (((*(byte *)(_UIInput_TypeInfo_12d6450 + 0x133) >> 2 & 1) != 0) &&
     (*(int *)(_UIInput_TypeInfo_12d6450 + 0xe0) == 0)) {
    native_sub_4327ec();
  }
  lVar11 = *(long *)(*(long *)(_UIInput_TypeInfo_12d6450 + 0xb8) + 0x20);
  if (lVar11 == 0) {
    lVar11 = native_UnityEngine_Input__get_compositionString_dbdf20(0);
    uVar6 = native_System_String__IsNullOrEmpty_b09430(lVar11,0);
    if ((uVar6 & 1) != 0) {
      uVar7 = native_UnityEngine_Input__get_inputString_dbdd58(0);
      uVar6 = native_System_String__IsNullOrEmpty_b09430(uVar7,0);
      if ((uVar6 & 1) == 0) {
        lVar9 = native_UnityEngine_Input__get_inputString_dbdd58(0);
        if (lVar9 == 0) goto LAB_009f504c;
        if (0 < *(int *)(lVar9 + 0x10)) {
          iVar3 = 0;
          do {
            auStack_44[0] = native_System_String__get_Chars_b03810(lVar9,iVar3,0);
            if (((0x1f < auStack_44[0]) && (3 < auStack_44[0] - 0xf700)) &&
               (auStack_44[0] != 0xf728)) {
              uVar7 = native_System_Char__ToString_793ee0(auStack_44,0);
              (**(code **)(*param_1 + 0x198))(param_1,uVar7,*(undefined8 *)(*param_1 + 0x1a0));
            }
            iVar3 = iVar3 + 1;
          } while (iVar3 < *(int *)(lVar9 + 0x10));
        }
      }
    }
    if (((*(byte *)(_UIInput_TypeInfo_12d6450 + 0x133) >> 2 & 1) != 0) &&
       (*(int *)(_UIInput_TypeInfo_12d6450 + 0xe0) == 0)) {
      native_sub_4327ec();
    }
    uVar6 = native_System_String__op_Inequality_afbbb4
                      (*(undefined8 *)(*(long *)(_UIInput_TypeInfo_12d6450 + 0xb8) + 0x18),lVar11,0)
    ;
    if ((uVar6 & 1) != 0) {
      uVar6 = native_System_String__IsNullOrEmpty_b09430(lVar11,0);
      if ((uVar6 & 1) == 0) {
        if ((param_1[0x12] == 0) || (lVar11 == 0)) goto LAB_009f504c;
        iVar3 = *(int *)(lVar11 + 0x10) + *(int *)(param_1[0x12] + 0x10);
      }
      else {
        iVar3 = (int)param_1[0x18];
      }
      *(int *)((long)param_1 + 0xc4) = iVar3;
      if (((*(byte *)(_UIInput_TypeInfo_12d6450 + 0x133) >> 2 & 1) != 0) &&
         (*(int *)(_UIInput_TypeInfo_12d6450 + 0xe0) == 0)) {
        native_sub_4327ec();
      }
      plVar10 = (long *)(*(long *)(_UIInput_TypeInfo_12d6450 + 0xb8) + 0x18);
      *plVar10 = lVar11;
      native_sub_4326e0(plVar10,lVar11);
      native_UIInput__UpdateLabel_9f1b24(param_1);
      native_UIInput__ExecuteOnChange_9f2e54(param_1);
    }
  }
  else {
    if (((*(byte *)(_UIInput_TypeInfo_12d6450 + 0x133) >> 2 & 1) != 0) &&
       (*(int *)(_UIInput_TypeInfo_12d6450 + 0xe0) == 0)) {
      native_sub_4327ec();
      lVar11 = *(long *)(*(long *)(_UIInput_TypeInfo_12d6450 + 0xb8) + 0x20);
      if (lVar11 == 0) goto LAB_009f504c;
    }
    uVar6 = native_UnityEngine_TouchScreenKeyboard__get_done_77119c(lVar11,0);
    if ((uVar6 & 1) == 0) {
      if (((*(byte *)(_UIInput_TypeInfo_12d6450 + 0x133) >> 2 & 1) != 0) &&
         (*(int *)(_UIInput_TypeInfo_12d6450 + 0xe0) == 0)) {
        native_sub_4327ec();
      }
      lVar11 = *(long *)(*(long *)(_UIInput_TypeInfo_12d6450 + 0xb8) + 0x20);
      if (lVar11 == 0) goto LAB_009f504c;
      uVar6 = native_UnityEngine_TouchScreenKeyboard__get_active_7710cc(lVar11,0);
      if ((uVar6 & 1) == 0) goto LAB_009f4588;
      if (((*(byte *)(_UIInput_TypeInfo_12d6450 + 0x133) >> 2 & 1) != 0) &&
         (*(int *)(_UIInput_TypeInfo_12d6450 + 0xe0) == 0)) {
        native_sub_4327ec();
      }
      lVar11 = *(long *)(*(long *)(_UIInput_TypeInfo_12d6450 + 0xb8) + 0x20);
      if (lVar11 == 0) goto LAB_009f504c;
      lVar11 = native_UnityEngine_TouchScreenKeyboard__get_text_770ffc(lVar11,0);
    }
    else {
LAB_009f4588:
      lVar11 = param_1[0x1d];
    }
    uVar6 = native_UIInput__get_inputShouldBeHidden_9f28e0(param_1);
    if ((uVar6 & 1) == 0) {
      plVar10 = param_1 + 0x1d;
      uVar6 = native_System_String__op_Inequality_afbbb4(*plVar10,lVar11,0);
      if ((uVar6 & 1) != 0) {
        *plVar10 = lVar11;
        native_sub_4326e0(plVar10,lVar11);
        if (((*(byte *)(_UIInput_TypeInfo_12d6450 + 0x133) >> 2 & 1) != 0) &&
           (*(int *)(_UIInput_TypeInfo_12d6450 + 0xe0) == 0)) {
          native_sub_4327ec();
        }
        lVar9 = *(long *)(*(long *)(_UIInput_TypeInfo_12d6450 + 0xb8) + 0x20);
        if (lVar9 == 0) goto LAB_009f504c;
        uVar6 = native_UnityEngine_TouchScreenKeyboard__get_done_77119c(lVar9,0);
        if ((uVar6 & 1) == 0) {
          if (((*(byte *)(_UIInput_TypeInfo_12d6450 + 0x133) >> 2 & 1) != 0) &&
             (*(int *)(_UIInput_TypeInfo_12d6450 + 0xe0) == 0)) {
            native_sub_4327ec();
          }
          lVar9 = *(long *)(*(long *)(_UIInput_TypeInfo_12d6450 + 0xb8) + 0x20);
          if (lVar9 == 0) goto LAB_009f504c;
          uVar6 = native_UnityEngine_TouchScreenKeyboard__get_active_7710cc(lVar9,0);
          if ((uVar6 & 1) != 0) {
            native_UIInput__Set_9f29f8(param_1,lVar11,1);
          }
        }
      }
    }
    else {
      uVar6 = native_System_String__op_Inequality_afbbb4(lVar11,_StringLiteral___12f70d8,0);
      if ((uVar6 & 1) != 0) {
        uVar6 = native_System_String__IsNullOrEmpty_b09430(lVar11,0);
        if ((uVar6 & 1) == 0) {
          if (lVar11 == 0) goto LAB_009f504c;
          uVar7 = native_System_String__Substring_b0a110(lVar11,1,0);
          (**(code **)(*param_1 + 0x198))(param_1,uVar7,*(undefined8 *)(*param_1 + 0x1a0));
        }
        else {
          if (((*(byte *)(_UIInput_TypeInfo_12d6450 + 0x133) >> 2 & 1) != 0) &&
             (*(int *)(_UIInput_TypeInfo_12d6450 + 0xe0) == 0)) {
            native_sub_4327ec();
          }
          lVar11 = *(long *)(*(long *)(_UIInput_TypeInfo_12d6450 + 0xb8) + 0x20);
          if (lVar11 == 0) goto LAB_009f504c;
          uVar6 = native_UnityEngine_TouchScreenKeyboard__get_done_77119c(lVar11,0);
          if ((uVar6 & 1) == 0) {
            if (((*(byte *)(_UIInput_TypeInfo_12d6450 + 0x133) >> 2 & 1) != 0) &&
               (*(int *)(_UIInput_TypeInfo_12d6450 + 0xe0) == 0)) {
              native_sub_4327ec();
            }
            lVar11 = *(long *)(*(long *)(_UIInput_TypeInfo_12d6450 + 0xb8) + 0x20);
            if (lVar11 == 0) goto LAB_009f504c;
            uVar6 = native_UnityEngine_TouchScreenKeyboard__get_active_7710cc(lVar11,0);
            if ((uVar6 & 1) != 0) {
              native_UIInput__DoBackspace_9f505c(param_1);
            }
          }
        }
        if (((*(byte *)(_UIInput_TypeInfo_12d6450 + 0x133) >> 2 & 1) != 0) &&
           (*(int *)(_UIInput_TypeInfo_12d6450 + 0xe0) == 0)) {
          native_sub_4327ec();
        }
        lVar11 = *(long *)(*(long *)(_UIInput_TypeInfo_12d6450 + 0xb8) + 0x20);
        if (lVar11 == 0) goto LAB_009f504c;
        native_UnityEngine_TouchScreenKeyboard__set_text_77103c(lVar11,_StringLiteral___12f70d8,0);
      }
    }
    if (((*(byte *)(_UIInput_TypeInfo_12d6450 + 0x133) >> 2 & 1) != 0) &&
       (*(int *)(_UIInput_TypeInfo_12d6450 + 0xe0) == 0)) {
      native_sub_4327ec();
    }
    lVar11 = *(long *)(*(long *)(_UIInput_TypeInfo_12d6450 + 0xb8) + 0x20);
    if (lVar11 == 0) goto LAB_009f504c;
    uVar6 = native_UnityEngine_TouchScreenKeyboard__get_done_77119c(lVar11,0);
    if ((uVar6 & 1) == 0) {
      if (((*(byte *)(_UIInput_TypeInfo_12d6450 + 0x133) >> 2 & 1) != 0) &&
         (*(int *)(_UIInput_TypeInfo_12d6450 + 0xe0) == 0)) {
        native_sub_4327ec();
      }
      lVar11 = *(long *)(*(long *)(_UIInput_TypeInfo_12d6450 + 0xb8) + 0x20);
      if (lVar11 == 0) goto LAB_009f504c;
      uVar6 = native_UnityEngine_TouchScreenKeyboard__get_active_7710cc(lVar11,0);
      if ((uVar6 & 1) != 0) goto LAB_009f498c;
    }
    if (((*(byte *)(_UIInput_TypeInfo_12d6450 + 0x133) >> 2 & 1) != 0) &&
       (*(int *)(_UIInput_TypeInfo_12d6450 + 0xe0) == 0)) {
      native_sub_4327ec();
    }
    lVar11 = *(long *)(*(long *)(_UIInput_TypeInfo_12d6450 + 0xb8) + 0x20);
    if (lVar11 == 0) goto LAB_009f504c;
    uVar6 = native_UnityEngine_TouchScreenKeyboard__get_wasCanceled_77121c(lVar11,0);
    if ((uVar6 & 1) == 0) {
      native_UIInput__Submit_9f3f9c(param_1);
    }
    if (((*(byte *)(_UIInput_TypeInfo_12d6450 + 0x133) >> 2 & 1) != 0) &&
       (*(int *)(_UIInput_TypeInfo_12d6450 + 0xe0) == 0)) {
      native_sub_4327ec();
    }
    puVar8 = (undefined8 *)(*(long *)(_UIInput_TypeInfo_12d6450 + 0xb8) + 0x20);
    *puVar8 = 0;
    native_sub_4326e0(puVar8,0);
    native_UIInput__set_isSelected_9f2fc8(param_1,0);
    param_1[0x1d] = _StringLiteral__12eaac0;
    native_sub_4326e0(param_1 + 0x1d);
  }
LAB_009f498c:
  lVar11 = param_1[0x1a];
  if (((*(byte *)(_UnityEngine_Object_TypeInfo_12d54e0 + 0x133) >> 2 & 1) != 0) &&
     (*(int *)(_UnityEngine_Object_TypeInfo_12d54e0 + 0xe0) == 0)) {
    native_sub_4327ec();
  }
  uVar6 = native_UnityEngine_Object__op_Inequality_8d76fc(lVar11,0,0);
  if (((uVar6 & 1) != 0) &&
     (fVar14 = *(float *)(param_1 + 0x1c), fVar13 = (float)native_RealTime__get_time_72d024(0),
     fVar14 < fVar13)) {
    fVar13 = (float)native_RealTime__get_time_72d024(0);
    lVar11 = param_1[0x1a];
    *(float *)(param_1 + 0x1c) = fVar13 + 0.5;
    if (lVar11 == 0) goto LAB_009f504c;
    uVar4 = native_UnityEngine_Behaviour__get_enabled_8d7acc(lVar11,0);
    native_UnityEngine_Behaviour__set_enabled_8d7b0c(lVar11,~uVar4 & 1,0);
  }
  uVar6 = native_UIInput__get_isSelected_9f283c(param_1);
  if ((uVar6 & 1) != 0) {
    if (param_1[3] == 0) goto LAB_009f504c;
    if (*(float *)((long)param_1 + 0xe4) != *(float *)(param_1[3] + 0x8c)) {
      native_UIInput__UpdateLabel_9f1b24(param_1);
    }
  }
  lVar11 = param_1[0x20];
  if (((*(byte *)(_UnityEngine_Object_TypeInfo_12d54e0 + 0x133) >> 2 & 1) != 0) &&
     (*(int *)(_UnityEngine_Object_TypeInfo_12d54e0 + 0xe0) == 0)) {
    native_sub_4327ec();
  }
  plVar10 = param_1 + 0x20;
  uVar6 = native_UnityEngine_Object__op_Equality_8e9a3c(lVar11,0,0);
  if ((uVar6 & 1) != 0) {
    lVar11 = native_UnityEngine_Component__get_gameObject_8da66c(param_1,0);
    if (lVar11 == 0) goto LAB_009f504c;
    uVar5 = native_UnityEngine_GameObject__get_layer_8de608(lVar11,0);
    if (((*(byte *)(_UICamera_TypeInfo_12d6410 + 0x133) >> 2 & 1) != 0) &&
       (*(int *)(_UICamera_TypeInfo_12d6410 + 0xe0) == 0)) {
      native_sub_4327ec(_UICamera_TypeInfo_12d6410);
    }
    lVar11 = native_UICamera__FindCameraForLayer_c96d2c(uVar5,0);
    *plVar10 = lVar11;
    native_sub_4326e0(plVar10,lVar11);
  }
  lVar11 = *plVar10;
  if (((*(byte *)(_UnityEngine_Object_TypeInfo_12d54e0 + 0x133) >> 2 & 1) != 0) &&
     (*(int *)(_UnityEngine_Object_TypeInfo_12d54e0 + 0xe0) == 0)) {
    native_sub_4327ec();
  }
  uVar6 = native_UnityEngine_Object__op_Inequality_8d76fc(lVar11,0,0);
  if ((uVar6 & 1) == 0) {
    return;
  }
  if (param_1[3] == 0) goto LAB_009f504c;
  uVar6 = native_UILabel__get_multiLine_ae8998(param_1[3],0);
  if ((uVar6 & 1) == 0) {
    bVar1 = false;
  }
  else {
    uVar6 = native_UnityEngine_Input__GetKey_dbdbe4(0x132,0);
    if ((uVar6 & 1) == 0) {
      uVar4 = native_UnityEngine_Input__GetKey_dbdbe4(0x131,0);
      uVar4 = uVar4 & 1;
    }
    else {
      uVar4 = 1;
    }
    bVar1 = uVar4 != 0;
    if (*(int *)((long)param_1 + 0x24) != 1) {
      bVar1 = uVar4 == 0;
    }
  }
  if (((*(byte *)(_UICamera_TypeInfo_12d6410 + 0x133) >> 2 & 1) != 0) &&
     (*(int *)(_UICamera_TypeInfo_12d6410 + 0xe0) == 0)) {
    native_sub_4327ec();
  }
  if ((*plVar10 == 0) ||
     (lVar11 = *(long *)(*(long *)(_UICamera_TypeInfo_12d6410 + 0xb8) + 8), lVar11 == 0))
  goto LAB_009f504c;
  uVar6 = native_UICamera_GetKeyStateFunc__Invoke_551094(lVar11,*(undefined4 *)(*plVar10 + 0x7c),0);
  if ((uVar6 & 1) == 0) {
    if (*plVar10 == 0) goto LAB_009f504c;
    if (*(int *)(*plVar10 + 0x7c) == 0xd) {
      if (((*(byte *)(_UICamera_TypeInfo_12d6410 + 0x133) >> 2 & 1) != 0) &&
         (*(int *)(_UICamera_TypeInfo_12d6410 + 0xe0) == 0)) {
        native_sub_4327ec();
      }
      lVar11 = *(long *)(*(long *)(_UICamera_TypeInfo_12d6410 + 0xb8) + 8);
      if (lVar11 == 0) goto LAB_009f504c;
      uVar6 = native_UICamera_GetKeyStateFunc__Invoke_551094(lVar11,0x10f,0);
      if ((uVar6 & 1) != 0) goto LAB_009f4ba4;
    }
  }
  else {
LAB_009f4ba4:
    if (bVar1) {
      (**(code **)(*param_1 + 0x198))
                (param_1,_StringLiteral___12eab80,*(undefined8 *)(*param_1 + 0x1a0));
    }
    else {
      if (((*(byte *)(_UICamera_TypeInfo_12d6410 + 0x133) >> 2 & 1) != 0) &&
         (*(int *)(_UICamera_TypeInfo_12d6410 + 0xe0) == 0)) {
        native_sub_4327ec();
      }
      lVar11 = *(long *)(*(long *)(_UICamera_TypeInfo_12d6410 + 0xb8) + 400);
      if (lVar11 == 0) goto LAB_009f504c;
      uVar7 = *(undefined8 *)(lVar11 + 0x48);
      if (((*(byte *)(_UnityEngine_Object_TypeInfo_12d54e0 + 0x133) >> 2 & 1) != 0) &&
         (*(int *)(_UnityEngine_Object_TypeInfo_12d54e0 + 0xe0) == 0)) {
        native_sub_4327ec();
      }
      uVar6 = native_UnityEngine_Object__op_Inequality_8d76fc(uVar7,0,0);
      if ((uVar6 & 1) != 0) {
        if (((*(byte *)(_UICamera_TypeInfo_12d6410 + 0x133) >> 2 & 1) != 0) &&
           (*(int *)(_UICamera_TypeInfo_12d6410 + 0xe0) == 0)) {
          native_sub_4327ec();
        }
        lVar11 = *(long *)(*(long *)(_UICamera_TypeInfo_12d6410 + 0xb8) + 400);
        if (lVar11 == 0) goto LAB_009f504c;
        *(undefined4 *)(lVar11 + 0x70) = 0;
      }
      if (*plVar10 == 0) goto LAB_009f504c;
      uVar5 = *(undefined4 *)(*plVar10 + 0x7c);
      if (((*(byte *)(_UICamera_TypeInfo_12d6410 + 0x133) >> 2 & 1) != 0) &&
         (*(int *)(_UICamera_TypeInfo_12d6410 + 0xe0) == 0)) {
        native_sub_4327ec();
      }
      native_UICamera__set_currentKey_c94858(uVar5,0);
      native_UIInput__Submit_9f3f9c(param_1);
    }
  }
  if (((*(byte *)(_UICamera_TypeInfo_12d6410 + 0x133) >> 2 & 1) != 0) &&
     (*(int *)(_UICamera_TypeInfo_12d6410 + 0xe0) == 0)) {
    native_sub_4327ec();
  }
  if ((*plVar10 == 0) ||
     (lVar11 = *(long *)(*(long *)(_UICamera_TypeInfo_12d6410 + 0xb8) + 8), lVar11 == 0))
  goto LAB_009f504c;
  uVar6 = native_UICamera_GetKeyStateFunc__Invoke_551094(lVar11,*(undefined4 *)(*plVar10 + 0x80),0);
  if ((uVar6 & 1) == 0) {
    if (*plVar10 == 0) goto LAB_009f504c;
    if (*(int *)(*plVar10 + 0x80) == 0xd) {
      if (((*(byte *)(_UICamera_TypeInfo_12d6410 + 0x133) >> 2 & 1) != 0) &&
         (*(int *)(_UICamera_TypeInfo_12d6410 + 0xe0) == 0)) {
        native_sub_4327ec();
      }
      lVar11 = *(long *)(*(long *)(_UICamera_TypeInfo_12d6410 + 0xb8) + 8);
      if (lVar11 == 0) goto LAB_009f504c;
      uVar6 = native_UICamera_GetKeyStateFunc__Invoke_551094(lVar11,0x10f,0);
      if ((uVar6 & 1) != 0) goto LAB_009f4d14;
    }
  }
  else {
LAB_009f4d14:
    if (bVar1) {
      (**(code **)(*param_1 + 0x198))
                (param_1,_StringLiteral___12eab80,*(undefined8 *)(*param_1 + 0x1a0));
    }
    else {
      if (((*(byte *)(_UICamera_TypeInfo_12d6410 + 0x133) >> 2 & 1) != 0) &&
         (*(int *)(_UICamera_TypeInfo_12d6410 + 0xe0) == 0)) {
        native_sub_4327ec();
      }
      lVar11 = *(long *)(*(long *)(_UICamera_TypeInfo_12d6410 + 0xb8) + 400);
      if (lVar11 == 0) goto LAB_009f504c;
      uVar7 = *(undefined8 *)(lVar11 + 0x48);
      if (((*(byte *)(_UnityEngine_Object_TypeInfo_12d54e0 + 0x133) >> 2 & 1) != 0) &&
         (*(int *)(_UnityEngine_Object_TypeInfo_12d54e0 + 0xe0) == 0)) {
        native_sub_4327ec();
      }
      uVar6 = native_UnityEngine_Object__op_Inequality_8d76fc(uVar7,0,0);
      if ((uVar6 & 1) != 0) {
        if (((*(byte *)(_UICamera_TypeInfo_12d6410 + 0x133) >> 2 & 1) != 0) &&
           (*(int *)(_UICamera_TypeInfo_12d6410 + 0xe0) == 0)) {
          native_sub_4327ec();
        }
        lVar11 = *(long *)(*(long *)(_UICamera_TypeInfo_12d6410 + 0xb8) + 400);
        if (lVar11 == 0) goto LAB_009f504c;
        *(undefined4 *)(lVar11 + 0x70) = 0;
      }
      if (*plVar10 == 0) goto LAB_009f504c;
      uVar5 = *(undefined4 *)(*plVar10 + 0x80);
      if (((*(byte *)(_UICamera_TypeInfo_12d6410 + 0x133) >> 2 & 1) != 0) &&
         (*(int *)(_UICamera_TypeInfo_12d6410 + 0xe0) == 0)) {
        native_sub_4327ec();
      }
      native_UICamera__set_currentKey_c94858(uVar5,0);
      native_UIInput__Submit_9f3f9c(param_1);
    }
  }
  if (*plVar10 == 0) {
LAB_009f504c:
                    /* WARNING: Subroutine does not return */
    native_sub_432810();
  }
  if (*(char *)(*plVar10 + 0x2c) == '\0') {
    if (((*(byte *)(_UICamera_TypeInfo_12d6410 + 0x133) >> 2 & 1) != 0) &&
       (*(int *)(_UICamera_TypeInfo_12d6410 + 0xe0) == 0)) {
      native_sub_4327ec();
    }
    lVar11 = *(long *)(*(long *)(_UICamera_TypeInfo_12d6410 + 0xb8) + 0x10);
    if (lVar11 == 0) goto LAB_009f504c;
    uVar6 = native_UICamera_GetKeyStateFunc__Invoke_551094(lVar11,9,0);
    if ((uVar6 & 1) != 0) {
      native_UIInput__OnKey_9f50e4(param_1,9);
    }
  }
  return;
}



/* UIInput$$OnKey @ 0x9f50e4
 * void UIInput__OnKey (UIInput_o* __this, int32_t key, const MethodInfo* method); */

/* WARNING: Removing unreachable block (ram,0x009f3008) */
/* WARNING: Removing unreachable block (ram,0x009f3028) */
/* WARNING: Removing unreachable block (ram,0x009f3030) */
/* WARNING: Removing unreachable block (ram,0x009f3038) */
/* WARNING: Removing unreachable block (ram,0x00c979b4) */
/* WARNING: Removing unreachable block (ram,0x00c979d8) */
/* WARNING: Removing unreachable block (ram,0x00c979e0) */
/* WARNING: Removing unreachable block (ram,0x00c979e8) */
/* WARNING: Removing unreachable block (ram,0x00c979fc) */
/* WARNING: Removing unreachable block (ram,0x00c97a20) */
/* WARNING: Removing unreachable block (ram,0x00c97a28) */
/* WARNING: Removing unreachable block (ram,0x00c97a30) */
/* WARNING: Removing unreachable block (ram,0x00c97a44) */
/* WARNING: Removing unreachable block (ram,0x00c97a50) */
/* WARNING: Removing unreachable block (ram,0x00c97a58) */
/* WARNING: Removing unreachable block (ram,0x00c97a60) */
/* WARNING: Removing unreachable block (ram,0x00c97a6c) */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* UIInput$$OnKey
   void UIInput__OnKey (UIInput_o* __this, int32_t key, const MethodInfo* method); */

void native_UIInput__OnKey_9f50e4(long param_1,int param_2)

{
  ulong *puVar1;
  char cVar2;
  bool bVar3;
  byte bVar4;
  int iVar5;
  uint uVar6;
  ulong uVar7;
  undefined8 *puVar8;
  long lVar9;
  long *plVar10;
  long lVar11;
  long lVar12;
  long lVar13;
  undefined8 uVar14;
  undefined8 uVar15;
  uint uVar16;
  undefined1 auStack_48 [4];
  undefined1 auStack_44 [4];
  
  if ((bRam0000000001341988 & 1) == 0) {
    native_sub_43273c(&Method_UnityEngine_Component_GetComponent_UIKeyNavigation____12e2bd0);
    native_sub_43273c(&UnityEngine_Object_TypeInfo_12d54e0);
    native_sub_43273c(&UIInput_TypeInfo_12d6450);
    bRam0000000001341988 = 1;
  }
  iVar5 = native_UnityEngine_Time__get_frameCount_770964(0);
  if (((*(byte *)(_UIInput_TypeInfo_12d6450 + 0x133) >> 2 & 1) != 0) &&
     (*(int *)(_UIInput_TypeInfo_12d6450 + 0xe0) == 0)) {
    native_sub_4327ec(_UIInput_TypeInfo_12d6450);
  }
  if (*(int *)(*(long *)(_UIInput_TypeInfo_12d6450 + 0xb8) + 0x2c) != iVar5) {
    uVar15 = *(undefined8 *)(param_1 + 0x100);
    if (((*(byte *)(_UnityEngine_Object_TypeInfo_12d54e0 + 0x133) >> 2 & 1) != 0) &&
       (*(int *)(_UnityEngine_Object_TypeInfo_12d54e0 + 0xe0) == 0)) {
      native_sub_4327ec();
    }
    uVar7 = native_UnityEngine_Object__op_Inequality_8d76fc(uVar15,0,0);
    if ((uVar7 & 1) != 0) {
      lVar9 = *(long *)(param_1 + 0x100);
      if (lVar9 == 0) goto LAB_009f52d0;
      if ((*(int *)(lVar9 + 0x84) == param_2) || (*(int *)(lVar9 + 0x88) == param_2)) {
        if (((*(byte *)(_UIInput_TypeInfo_12d6450 + 0x133) >> 2 & 1) != 0) &&
           (*(int *)(_UIInput_TypeInfo_12d6450 + 0xe0) == 0)) {
          native_sub_4327ec();
        }
        *(int *)(*(long *)(_UIInput_TypeInfo_12d6450 + 0xb8) + 0x2c) = iVar5;
        if ((bRam000000000134197a & 1) == 0) {
          native_sub_43273c(&UICamera_TypeInfo_12d6410);
          bRam000000000134197a = 1;
        }
        uVar7 = native_UIInput__get_isSelected_9f283c(param_1);
        if ((uVar7 & 1) == 0) {
          return;
        }
        if (((*(byte *)(_UICamera_TypeInfo_12d6410 + 0x133) >> 2 & 1) != 0) &&
           (*(int *)(_UICamera_TypeInfo_12d6410 + 0xe0) == 0)) {
          native_sub_4327ec();
        }
        if ((bRam00000000013428c8 & 1) == 0) {
          native_sub_43273c(&bool_TypeInfo_12d3bd0,0);
          native_sub_43273c(&Method_UnityEngine_GameObject_GetComponent_UIInput____12e4ab0);
          native_sub_43273c(&Method_UnityEngine_GameObject_GetComponent_UIKeyNavigation____12e4ab8);
          native_sub_43273c(&UnityEngine_Object_TypeInfo_12d54e0);
          native_sub_43273c(&UICamera_TypeInfo_12d6410);
          native_sub_43273c(&StringLiteral_OnSelect_12f02c0);
          bRam00000000013428c8 = 1;
        }
        if (((*(byte *)(_UICamera_TypeInfo_12d6410 + 0x133) >> 2 & 1) != 0) &&
           (*(int *)(_UICamera_TypeInfo_12d6410 + 0xe0) == 0)) {
          native_sub_4327ec();
        }
        uVar15 = *(undefined8 *)(*(long *)(_UICamera_TypeInfo_12d6410 + 0xb8) + 0x1e8);
        if (((*(byte *)(_UnityEngine_Object_TypeInfo_12d54e0 + 0x133) >> 2 & 1) != 0) &&
           (*(int *)(_UnityEngine_Object_TypeInfo_12d54e0 + 0xe0) == 0)) {
          native_sub_4327ec(_UnityEngine_Object_TypeInfo_12d54e0);
        }
        uVar7 = native_UnityEngine_Object__op_Equality_8e9a3c(uVar15,0,0);
        if ((uVar7 & 1) == 0) {
          if (((*(ushort *)(_UICamera_TypeInfo_12d6410 + 0x132) >> 10 & 1) != 0) &&
             (*(int *)(_UICamera_TypeInfo_12d6410 + 0xe0) == 0)) {
            native_sub_4327ec(_UICamera_TypeInfo_12d6410);
          }
          native_UICamera__ShowTooltip_c953cc(0);
          plVar10 = (long *)(_UICamera_TypeInfo_12d6410 + 0xb8);
          lVar9 = *plVar10;
          lVar13 = *(long *)(lVar9 + 0xb8);
          if (*(long *)(lVar9 + 0xe0) == 0) {
            if (((*(byte *)(_UICamera_TypeInfo_12d6410 + 0x133) >> 2 & 1) != 0) &&
               (*(int *)(_UICamera_TypeInfo_12d6410 + 0xe0) == 0)) {
              native_sub_4327ec();
              plVar10 = (long *)(_UICamera_TypeInfo_12d6410 + 0xb8);
              lVar9 = *plVar10;
            }
            *(undefined4 *)(lVar9 + 0xd4) = 0xffffff9c;
            lVar9 = *plVar10;
            *(undefined8 *)(lVar9 + 0xe0) = *(undefined8 *)(lVar9 + 400);
            native_sub_4326e0(lVar9 + 0xe0);
            uVar16 = 1;
          }
          else {
            uVar16 = 0;
          }
          if (((*(byte *)(_UICamera_TypeInfo_12d6410 + 0x133) >> 2 & 1) != 0) &&
             (*(int *)(_UICamera_TypeInfo_12d6410 + 0xe0) == 0)) {
            native_sub_4327ec();
          }
          lVar9 = _UICamera_TypeInfo_12d6410;
          *(undefined1 *)(*(long *)(_UICamera_TypeInfo_12d6410 + 0xb8) + 0xe8) = 0;
          uVar15 = *(undefined8 *)(*(long *)(lVar9 + 0xb8) + 0x1e8);
          if (((*(byte *)(_UnityEngine_Object_TypeInfo_12d54e0 + 0x133) >> 2 & 1) != 0) &&
             (*(int *)(_UnityEngine_Object_TypeInfo_12d54e0 + 0xe0) == 0)) {
            native_sub_4327ec(_UnityEngine_Object_TypeInfo_12d54e0);
          }
          uVar7 = native_UnityEngine_Object__op_Implicit_8e1b98(uVar15,0);
          if ((uVar7 & 1) != 0) {
            if (((*(byte *)(_UICamera_TypeInfo_12d6410 + 0x133) >> 2 & 1) != 0) &&
               (*(int *)(_UICamera_TypeInfo_12d6410 + 0xe0) == 0)) {
              native_sub_4327ec();
            }
            uVar14 = *(undefined8 *)(*(long *)(_UICamera_TypeInfo_12d6410 + 0xb8) + 0x1e8);
            auStack_44[0] = 0;
            uVar15 = native_sub_4327fc(_bool_TypeInfo_12d3bd0,auStack_44);
            native_UICamera__Notify_c96a08(uVar14,_StringLiteral_OnSelect_12f02c0,uVar15);
            lVar11 = *(long *)(_UICamera_TypeInfo_12d6410 + 0xb8);
            lVar9 = *(long *)(lVar11 + 0x120);
            if (lVar9 != 0) {
              if (((*(byte *)(_UICamera_TypeInfo_12d6410 + 0x133) >> 2 & 1) != 0) &&
                 (*(int *)(_UICamera_TypeInfo_12d6410 + 0xe0) == 0)) {
                native_sub_4327ec(_UICamera_TypeInfo_12d6410);
                lVar11 = *(long *)(_UICamera_TypeInfo_12d6410 + 0xb8);
                lVar9 = *(long *)(lVar11 + 0x120);
                if (lVar9 == 0) goto LAB_00c97ea8;
              }
              native_UICamera_BoolDelegate__Invoke_550030(lVar9,*(undefined8 *)(lVar11 + 0x1e8),0,0)
              ;
            }
          }
          if (((*(byte *)(_UICamera_TypeInfo_12d6410 + 0x133) >> 2 & 1) != 0) &&
             (*(int *)(_UICamera_TypeInfo_12d6410 + 0xe0) == 0)) {
            native_sub_4327ec();
          }
          lVar9 = *(long *)(_UICamera_TypeInfo_12d6410 + 0xb8);
          *(undefined8 *)(lVar9 + 0x1e8) = 0;
          native_sub_4326e0(lVar9 + 0x1e8,0);
          lVar9 = *(long *)(*(long *)(_UICamera_TypeInfo_12d6410 + 0xb8) + 0xe0);
          if (lVar9 != 0) {
            *(undefined4 *)(lVar9 + 0x70) = 0;
            if (((*(byte *)(_UnityEngine_Object_TypeInfo_12d54e0 + 0x133) >> 2 & 1) != 0) &&
               (*(int *)(_UnityEngine_Object_TypeInfo_12d54e0 + 0xe0) == 0)) {
              native_sub_4327ec();
            }
            uVar7 = native_UnityEngine_Object__op_Inequality_8d76fc(0,0,0);
            if ((uVar7 & 1) == 0) {
              if (((*(byte *)(_UICamera_TypeInfo_12d6410 + 0x133) >> 2 & 1) != 0) &&
                 (*(int *)(_UICamera_TypeInfo_12d6410 + 0xe0) == 0)) {
                native_sub_4327ec();
              }
              uVar15 = *(undefined8 *)(*(long *)(_UICamera_TypeInfo_12d6410 + 0xb8) + 0x1e8);
              if (((*(byte *)(_UnityEngine_Object_TypeInfo_12d54e0 + 0x133) >> 2 & 1) != 0) &&
                 (*(int *)(_UnityEngine_Object_TypeInfo_12d54e0 + 0xe0) == 0)) {
                native_sub_4327ec(_UnityEngine_Object_TypeInfo_12d54e0);
              }
              uVar6 = native_UnityEngine_Object__op_Implicit_8e1b98(uVar15,0);
              if ((uVar16 & uVar6) == 1) {
                if (((*(byte *)(_UICamera_TypeInfo_12d6410 + 0x133) >> 2 & 1) != 0) &&
                   (*(int *)(_UICamera_TypeInfo_12d6410 + 0xe0) == 0)) {
                  native_sub_4327ec();
                }
                uVar15 = *(undefined8 *)(*(long *)(_UICamera_TypeInfo_12d6410 + 0xb8) + 0x1e8);
                if (((*(byte *)(_UnityEngine_Object_TypeInfo_12d54e0 + 0x133) >> 2 & 1) != 0) &&
                   (*(int *)(_UnityEngine_Object_TypeInfo_12d54e0 + 0xe0) == 0)) {
                  native_sub_4327ec(_UnityEngine_Object_TypeInfo_12d54e0);
                }
                uVar7 = native_UnityEngine_Object__op_Inequality_8d76fc(uVar15,0,0);
                if ((uVar7 & 1) == 0) {
                  if (((*(ushort *)(_UICamera_TypeInfo_12d6410 + 0x132) >> 10 & 1) != 0) &&
                     (*(int *)(_UICamera_TypeInfo_12d6410 + 0xe0) == 0)) {
                    native_sub_4327ec(_UICamera_TypeInfo_12d6410);
                  }
                  if ((**(long **)(_UICamera_TypeInfo_12d6410 + 0xb8) == 0) ||
                     (lVar9 = *(long *)(**(long **)(_UICamera_TypeInfo_12d6410 + 0xb8) + 0x10),
                     lVar9 == 0)) goto LAB_00c97ea8;
                  if (*(int *)(lVar9 + 0x18) == 0) {
                    uVar15 = native_sub_43283c();
                    /* WARNING: Subroutine does not return */
                    native_sub_4327dc(uVar15,0);
                  }
                  lVar9 = *(long *)(lVar9 + 0x20);
                }
                else {
                  if (((*(ushort *)(_UICamera_TypeInfo_12d6410 + 0x132) >> 10 & 1) != 0) &&
                     (*(int *)(_UICamera_TypeInfo_12d6410 + 0xe0) == 0)) {
                    native_sub_4327ec(_UICamera_TypeInfo_12d6410);
                  }
                  lVar9 = *(long *)(*(long *)(_UICamera_TypeInfo_12d6410 + 0xb8) + 0x1e8);
                  if (lVar9 == 0) goto LAB_00c97ea8;
                  native_UnityEngine_GameObject__get_layer_8de608(lVar9,0);
                  lVar9 = native_UICamera__FindCameraForLayer_c96d2c();
                }
                if (((*(byte *)(_UnityEngine_Object_TypeInfo_12d54e0 + 0x133) >> 2 & 1) != 0) &&
                   (*(int *)(_UnityEngine_Object_TypeInfo_12d54e0 + 0xe0) == 0)) {
                  native_sub_4327ec();
                }
                uVar7 = native_UnityEngine_Object__op_Inequality_8d76fc(lVar9,0,0);
                if ((uVar7 & 1) != 0) {
                  if (((*(byte *)(_UICamera_TypeInfo_12d6410 + 0x133) >> 2 & 1) != 0) &&
                     (*(int *)(_UICamera_TypeInfo_12d6410 + 0xe0) == 0)) {
                    native_sub_4327ec();
                  }
                  plVar10 = (long *)(*(long *)(_UICamera_TypeInfo_12d6410 + 0xb8) + 0xb8);
                  *plVar10 = lVar9;
                  native_sub_4326e0(plVar10,lVar9);
                  if (lVar9 == 0) goto LAB_00c97ea8;
                  uVar15 = native_UICamera__get_cachedCamera_c95254(lVar9);
                  puVar8 = (undefined8 *)(*(long *)(_UICamera_TypeInfo_12d6410 + 0xb8) + 0xc0);
                  *puVar8 = uVar15;
                  native_sub_4326e0(puVar8,uVar15);
                }
              }
              if (((*(byte *)(_UICamera_TypeInfo_12d6410 + 0x133) >> 2 & 1) != 0) &&
                 (*(int *)(_UICamera_TypeInfo_12d6410 + 0xe0) == 0)) {
                native_sub_4327ec();
              }
              uVar15 = *(undefined8 *)(*(long *)(_UICamera_TypeInfo_12d6410 + 0xb8) + 0x1e8);
              if (((*(byte *)(_UnityEngine_Object_TypeInfo_12d54e0 + 0x133) >> 2 & 1) != 0) &&
                 (*(int *)(_UnityEngine_Object_TypeInfo_12d54e0 + 0xe0) == 0)) {
                native_sub_4327ec(_UnityEngine_Object_TypeInfo_12d54e0);
              }
              uVar7 = native_UnityEngine_Object__op_Implicit_8e1b98(uVar15,0);
              if ((uVar7 & 1) != 0) {
                if (((*(byte *)(_UICamera_TypeInfo_12d6410 + 0x133) >> 2 & 1) != 0) &&
                   (*(int *)(_UICamera_TypeInfo_12d6410 + 0xe0) == 0)) {
                  native_sub_4327ec();
                }
                lVar9 = *(long *)(*(long *)(_UICamera_TypeInfo_12d6410 + 0xb8) + 0x1e8);
                if (lVar9 == 0) goto LAB_00c97ea8;
                uVar7 = native_UnityEngine_GameObject__get_activeInHierarchy_8de728(lVar9,0);
                if ((uVar7 & 1) == 0) {
                  bVar4 = 0;
                }
                else {
                  if (((*(byte *)(_UICamera_TypeInfo_12d6410 + 0x133) >> 2 & 1) != 0) &&
                     (*(int *)(_UICamera_TypeInfo_12d6410 + 0xe0) == 0)) {
                    native_sub_4327ec();
                  }
                  lVar9 = *(long *)(*(long *)(_UICamera_TypeInfo_12d6410 + 0xb8) + 0x1e8);
                  if (lVar9 == 0) goto LAB_00c97ea8;
                  uVar15 = native_UnityEngine_GameObject__GetComponent_BE2_BlockSectionHeader_Custom__4a2214
                                     (lVar9,
                                      _Method_UnityEngine_GameObject_GetComponent_UIInput____12e4ab0
                                     );
                  if (((*(byte *)(_UnityEngine_Object_TypeInfo_12d54e0 + 0x133) >> 2 & 1) != 0) &&
                     (*(int *)(_UnityEngine_Object_TypeInfo_12d54e0 + 0xe0) == 0)) {
                    native_sub_4327ec(_UnityEngine_Object_TypeInfo_12d54e0);
                  }
                  bVar4 = native_UnityEngine_Object__op_Inequality_8d76fc(uVar15,0,0);
                  bVar4 = bVar4 & 1;
                }
                if (((*(byte *)(_UICamera_TypeInfo_12d6410 + 0x133) >> 2 & 1) != 0) &&
                   (*(int *)(_UICamera_TypeInfo_12d6410 + 0xe0) == 0)) {
                  native_sub_4327ec();
                }
                lVar9 = _UICamera_TypeInfo_12d6410;
                *(byte *)(*(long *)(_UICamera_TypeInfo_12d6410 + 0xb8) + 0xe8) = bVar4;
                lVar12 = *(long *)(lVar9 + 0xb8);
                lVar11 = *(long *)(lVar12 + 0x120);
                if (lVar11 != 0) {
                  if (((*(byte *)(lVar9 + 0x133) >> 2 & 1) != 0) && (*(int *)(lVar9 + 0xe0) == 0)) {
                    native_sub_4327ec();
                    lVar12 = *(long *)(_UICamera_TypeInfo_12d6410 + 0xb8);
                    lVar11 = *(long *)(lVar12 + 0x120);
                    if (lVar11 == 0) goto LAB_00c97ea8;
                  }
                  native_UICamera_BoolDelegate__Invoke_550030
                            (lVar11,*(undefined8 *)(lVar12 + 0x1e8),1,0);
                  lVar9 = _UICamera_TypeInfo_12d6410;
                }
                if (((*(byte *)(lVar9 + 0x133) >> 2 & 1) != 0) && (*(int *)(lVar9 + 0xe0) == 0)) {
                  native_sub_4327ec();
                  lVar9 = _UICamera_TypeInfo_12d6410;
                }
                uVar14 = *(undefined8 *)(*(long *)(lVar9 + 0xb8) + 0x1e8);
                auStack_48[0] = 1;
                uVar15 = native_sub_4327fc(_bool_TypeInfo_12d3bd0,auStack_48);
                native_UICamera__Notify_c96a08(uVar14,_StringLiteral_OnSelect_12f02c0,uVar15);
              }
              if (uVar16 != 0) {
                if (((*(byte *)(_UICamera_TypeInfo_12d6410 + 0x133) >> 2 & 1) != 0) &&
                   (*(int *)(_UICamera_TypeInfo_12d6410 + 0xe0) == 0)) {
                  native_sub_4327ec();
                }
                plVar10 = (long *)(*(long *)(_UICamera_TypeInfo_12d6410 + 0xb8) + 0xb8);
                *plVar10 = lVar13;
                native_sub_4326e0(plVar10,lVar13);
                if (((*(byte *)(_UnityEngine_Object_TypeInfo_12d54e0 + 0x133) >> 2 & 1) != 0) &&
                   (*(int *)(_UnityEngine_Object_TypeInfo_12d54e0 + 0xe0) == 0)) {
                  native_sub_4327ec();
                }
                uVar7 = native_UnityEngine_Object__op_Inequality_8d76fc(lVar13,0,0);
                uVar15 = 0;
                if ((uVar7 & 1) != 0) {
                  if (lVar13 == 0) goto LAB_00c97ea8;
                  uVar15 = native_UICamera__get_cachedCamera_c95254(lVar13);
                }
                if (((*(byte *)(_UICamera_TypeInfo_12d6410 + 0x133) >> 2 & 1) != 0) &&
                   (*(int *)(_UICamera_TypeInfo_12d6410 + 0xe0) == 0)) {
                  native_sub_4327ec();
                }
                puVar8 = (undefined8 *)(*(long *)(_UICamera_TypeInfo_12d6410 + 0xb8) + 0xc0);
                *puVar8 = uVar15;
                native_sub_4326e0(puVar8,uVar15);
                puVar8 = (undefined8 *)(*(long *)(_UICamera_TypeInfo_12d6410 + 0xb8) + 0xe0);
                *puVar8 = 0;
                native_sub_4326e0(puVar8,0);
                *(undefined4 *)(*(long *)(_UICamera_TypeInfo_12d6410 + 0xb8) + 0xd4) = 0xffffff9c;
              }
              return;
            }
          }
        }
        else {
          if (((*(ushort *)(_UICamera_TypeInfo_12d6410 + 0x132) >> 10 & 1) != 0) &&
             (*(int *)(_UICamera_TypeInfo_12d6410 + 0xe0) == 0)) {
            native_sub_4327ec(_UICamera_TypeInfo_12d6410);
          }
          native_UICamera__set_hoveredObject_c9622c(0);
          lVar9 = *(long *)(*(long *)(_UICamera_TypeInfo_12d6410 + 0xb8) + 400);
          if (lVar9 != 0) {
            puVar8 = (undefined8 *)(lVar9 + 0x48);
            *puVar8 = 0;
            if (iRam0000000001345318 != 0) {
              puVar1 = (ulong *)(((ulong)puVar8 >> 0x12 & 0x7fff) * 8 + 0x138ecd8);
              do {
                cVar2 = '\x01';
                bVar3 = (bool)ExclusiveMonitorPass(puVar1,0x10);
                if (bVar3) {
                  *puVar1 = *puVar1 | 1L << ((ulong)puVar8 >> 0xc & 0x3f);
                  cVar2 = ExclusiveMonitorsStatus();
                }
              } while (cVar2 != '\0');
            }
            return;
          }
        }
LAB_00c97ea8:
                    /* WARNING: Subroutine does not return */
        native_sub_432810();
      }
    }
    if (param_2 == 9) {
      if (((*(byte *)(_UIInput_TypeInfo_12d6450 + 0x133) >> 2 & 1) != 0) &&
         (*(int *)(_UIInput_TypeInfo_12d6450 + 0xe0) == 0)) {
        native_sub_4327ec();
      }
      *(int *)(*(long *)(_UIInput_TypeInfo_12d6450 + 0xb8) + 0x2c) = iVar5;
      native_UIInput__set_isSelected_9f2fc8(param_1,0);
      plVar10 = (long *)native_UnityEngine_Component__GetComponent_ActiveAnimation__49daec
                                  (param_1,
                                   _Method_UnityEngine_Component_GetComponent_UIKeyNavigation____12e2bd0
                                  );
      if (((*(byte *)(_UnityEngine_Object_TypeInfo_12d54e0 + 0x133) >> 2 & 1) != 0) &&
         (*(int *)(_UnityEngine_Object_TypeInfo_12d54e0 + 0xe0) == 0)) {
        native_sub_4327ec(_UnityEngine_Object_TypeInfo_12d54e0);
      }
      uVar7 = native_UnityEngine_Object__op_Inequality_8d76fc(plVar10,0,0);
      if ((uVar7 & 1) != 0) {
        if (plVar10 != (long *)0x0) {
                    /* WARNING: Could not recover jumptable at 0x009f52b8. Too many branches */
                    /* WARNING: Treating indirect jump as call */
          (**(code **)(*plVar10 + 0x1a8))(plVar10,9,*(undefined8 *)(*plVar10 + 0x1b0));
          return;
        }
LAB_009f52d0:
                    /* WARNING: Subroutine does not return */
        native_sub_432810();
      }
    }
  }
  return;
}



/* UIInput$$DoBackspace @ 0x9f505c
 * void UIInput__DoBackspace (UIInput_o* __this, const MethodInfo* method); */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* UIInput$$DoBackspace
   void UIInput__DoBackspace (UIInput_o* __this, const MethodInfo* method); */

void native_UIInput__DoBackspace_9f505c(long *param_1)

{
  int iVar1;
  ulong uVar2;
  
  if ((bRam0000000001341989 & 1) == 0) {
    native_sub_43273c(&StringLiteral__12eaac0);
    bRam0000000001341989 = 1;
  }
  uVar2 = native_System_String__IsNullOrEmpty_b09430(param_1[0x12],0);
  if ((uVar2 & 1) == 0) {
    iVar1 = (int)param_1[0x18];
    if (iVar1 == *(int *)((long)param_1 + 0xc4)) {
      if (iVar1 < 1) {
        return;
      }
      *(int *)((long)param_1 + 0xc4) = iVar1 + -1;
    }
                    /* WARNING: Could not recover jumptable at 0x009f50e0. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (**(code **)(*param_1 + 0x198))
              (param_1,_StringLiteral__12eaac0,*(undefined8 *)(*param_1 + 0x1a0));
    return;
  }
  return;
}



/* UIInput$$Insert @ 0x9f52d4
 * void UIInput__Insert (UIInput_o* __this, System_String_o* text, const MethodInfo* method); */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* UIInput$$Insert
   void UIInput__Insert (UIInput_o* __this, System_String_o* text, const MethodInfo* method); */

void native_UIInput__Insert_9f52d4(long param_1,long param_2)

{
  ulong *puVar1;
  int iVar2;
  char cVar3;
  bool bVar4;
  uint uVar5;
  int iVar6;
  undefined4 uVar7;
  ulong uVar8;
  undefined8 *puVar9;
  long lVar10;
  long lVar11;
  long *plVar12;
  undefined8 uVar13;
  int iVar14;
  int iVar15;
  
  if ((bRam000000000134198a & 1) == 0) {
    native_sub_43273c(&System_Text_StringBuilder_TypeInfo_12d5f30);
    bRam000000000134198a = 1;
  }
  lVar10 = native_UIInput__GetLeftText_9f55b4(param_1);
  lVar11 = native_UIInput__GetRightText_9f56ac(param_1);
  if (((lVar11 != 0) && (lVar10 != 0)) && (param_2 != 0)) {
    iVar2 = *(int *)(lVar11 + 0x10);
    iVar14 = *(int *)(lVar10 + 0x10);
    iVar15 = *(int *)(param_2 + 0x10);
    plVar12 = (long *)native_sub_432808(_System_Text_StringBuilder_TypeInfo_12d5f30);
    native_System_Text_StringBuilder___ctor_a48824(plVar12,iVar14 + iVar2 + iVar15,0);
    if (plVar12 != (long *)0x0) {
      native_System_Text_StringBuilder__Append_a49d68(plVar12,lVar10,0);
      iVar14 = *(int *)(param_2 + 0x10);
      if (0 < iVar14) {
        iVar15 = 0;
        do {
          uVar5 = native_System_String__get_Chars_b03810(param_2,iVar15,0);
          if ((uVar5 & 0xffff) == 8) {
            native_UIInput__DoBackspace_9f505c(param_1);
          }
          else {
            if ((0 < *(int *)(param_1 + 0x34)) &&
               (iVar6 = native_System_Text_StringBuilder__get_Length_a49204(plVar12,0),
               *(int *)(param_1 + 0x34) <= iVar6 + iVar2)) break;
            lVar10 = *(long *)(param_1 + 0x88);
            if (lVar10 == 0) {
              if (*(int *)(param_1 + 0x30) != 0) {
                uVar13 = (**(code **)(*plVar12 + 0x168))(plVar12,*(undefined8 *)(*plVar12 + 0x170));
                uVar7 = native_System_Text_StringBuilder__get_Length_a49204(plVar12,0);
                uVar5 = native_UIInput__Validate_9f34a8(param_1,uVar13,uVar7,uVar5);
              }
            }
            else {
              uVar13 = (**(code **)(*plVar12 + 0x168))(plVar12,*(undefined8 *)(*plVar12 + 0x170));
              uVar7 = native_System_Text_StringBuilder__get_Length_a49204(plVar12,0);
              uVar5 = native_UIInput_OnValidate__Invoke_556f80(lVar10,uVar13,uVar7,uVar5,0);
            }
            if ((uVar5 & 0xffff) != 0) {
              native_System_Text_StringBuilder__Append_a4a9d8(plVar12,uVar5,0);
            }
          }
          iVar15 = iVar15 + 1;
        } while (iVar15 < iVar14);
      }
      uVar7 = native_System_Text_StringBuilder__get_Length_a49204(plVar12,0);
      *(undefined4 *)(param_1 + 0xc0) = uVar7;
      *(undefined4 *)(param_1 + 0xc4) = uVar7;
      iVar2 = *(int *)(lVar11 + 0x10);
      if (0 < iVar2) {
        iVar14 = 0;
        do {
          uVar5 = native_System_String__get_Chars_b03810(lVar11,iVar14,0);
          lVar10 = *(long *)(param_1 + 0x88);
          if (lVar10 == 0) {
            if (*(int *)(param_1 + 0x30) != 0) {
              uVar13 = (**(code **)(*plVar12 + 0x168))(plVar12,*(undefined8 *)(*plVar12 + 0x170));
              uVar7 = native_System_Text_StringBuilder__get_Length_a49204(plVar12,0);
              uVar5 = native_UIInput__Validate_9f34a8(param_1,uVar13,uVar7,uVar5);
            }
          }
          else {
            uVar13 = (**(code **)(*plVar12 + 0x168))(plVar12,*(undefined8 *)(*plVar12 + 0x170));
            uVar7 = native_System_Text_StringBuilder__get_Length_a49204(plVar12,0);
            uVar5 = native_UIInput_OnValidate__Invoke_556f80(lVar10,uVar13,uVar7,uVar5,0);
          }
          if ((uVar5 & 0xffff) != 0) {
            native_System_Text_StringBuilder__Append_a4a9d8(plVar12,uVar5,0);
          }
          iVar14 = iVar14 + 1;
        } while (iVar2 != iVar14);
      }
      uVar13 = (**(code **)(*plVar12 + 0x168))(plVar12,*(undefined8 *)(*plVar12 + 0x170));
      *(undefined8 *)(param_1 + 0x90) = uVar13;
      native_sub_4326e0();
      native_UIInput__UpdateLabel_9f1b24(param_1);
      if ((bRam0000000001341996 & 1) == 0) {
        native_sub_43273c(&EventDelegate_TypeInfo_12d4590);
        native_sub_43273c(&UnityEngine_Object_TypeInfo_12d54e0);
        native_sub_43273c(&UIInput_TypeInfo_12d6450);
        bRam0000000001341996 = 1;
      }
      if (((*(byte *)(_UIInput_TypeInfo_12d6450 + 0x133) >> 2 & 1) != 0) &&
         (*(int *)(_UIInput_TypeInfo_12d6450 + 0xe0) == 0)) {
        native_sub_4327ec();
      }
      uVar13 = **(undefined8 **)(_UIInput_TypeInfo_12d6450 + 0xb8);
      if (((*(byte *)(_UnityEngine_Object_TypeInfo_12d54e0 + 0x133) >> 2 & 1) != 0) &&
         (*(int *)(_UnityEngine_Object_TypeInfo_12d54e0 + 0xe0) == 0)) {
        native_sub_4327ec(_UnityEngine_Object_TypeInfo_12d54e0);
      }
      uVar8 = native_UnityEngine_Object__op_Equality_8e9a3c(uVar13,0,0);
      if ((uVar8 & 1) != 0) {
        uVar13 = *(undefined8 *)(param_1 + 0x80);
        if (((*(byte *)(_EventDelegate_TypeInfo_12d4590 + 0x133) >> 2 & 1) != 0) &&
           (*(int *)(_EventDelegate_TypeInfo_12d4590 + 0xe0) == 0)) {
          native_sub_4327ec();
        }
        uVar8 = native_EventDelegate__IsValid_deef08(uVar13,0);
        if ((uVar8 & 1) != 0) {
          if (((*(byte *)(_UIInput_TypeInfo_12d6450 + 0x133) >> 2 & 1) != 0) &&
             (*(int *)(_UIInput_TypeInfo_12d6450 + 0xe0) == 0)) {
            native_sub_4327ec();
          }
          plVar12 = *(long **)(_UIInput_TypeInfo_12d6450 + 0xb8);
          *plVar12 = param_1;
          native_sub_4326e0(plVar12,param_1);
          uVar13 = *(undefined8 *)(param_1 + 0x80);
          if (((*(byte *)(_EventDelegate_TypeInfo_12d4590 + 0x133) >> 2 & 1) != 0) &&
             (*(int *)(_EventDelegate_TypeInfo_12d4590 + 0xe0) == 0)) {
            native_sub_4327ec();
          }
          native_EventDelegate__Execute_deecbc(uVar13,0);
          puVar9 = *(undefined8 **)(_UIInput_TypeInfo_12d6450 + 0xb8);
          *puVar9 = 0;
          if (iRam0000000001345318 != 0) {
            puVar1 = (ulong *)(((ulong)puVar9 >> 0x12 & 0x7fff) * 8 + 0x138ecd8);
            do {
              cVar3 = '\x01';
              bVar4 = (bool)ExclusiveMonitorPass(puVar1,0x10);
              if (bVar4) {
                *puVar1 = *puVar1 | 1L << ((ulong)puVar9 >> 0xc & 0x3f);
                cVar3 = ExclusiveMonitorsStatus();
              }
            } while (cVar3 != '\0');
          }
          return;
        }
      }
      return;
    }
  }
                    /* WARNING: Subroutine does not return */
  native_sub_432810();
}



/* UIInput$$GetLeftText @ 0x9f55b4
 * System_String_o* UIInput__GetLeftText (UIInput_o* __this, const MethodInfo* method); */

/* WARNING: Removing unreachable block (ram,0x00b0a05c) */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* UIInput$$GetLeftText
   System_String_o* UIInput__GetLeftText (UIInput_o* __this, const MethodInfo* method); */

long native_UIInput__GetLeftText_9f55b4(long param_1)

{
  uint uVar1;
  int iVar2;
  int iVar3;
  long lVar4;
  ulong uVar5;
  undefined *puVar6;
  undefined8 uVar7;
  undefined8 uVar8;
  undefined8 uVar9;
  long lVar10;
  
  if ((bRam000000000134198b & 1) == 0) {
    native_sub_43273c(&int___TypeInfo_12d3258);
    native_sub_43273c(&StringLiteral__12eaac0);
    bRam000000000134198b = 1;
  }
  lVar4 = native_sub_432750(_int___TypeInfo_12d3258,3);
  if (lVar4 != 0) {
    uVar1 = *(uint *)(lVar4 + 0x18);
    if ((uVar1 == 0) ||
       (*(undefined4 *)(lVar4 + 0x20) = *(undefined4 *)(param_1 + 0xc0), uVar1 == 1)) {
LAB_009f569c:
      uVar7 = native_sub_43283c();
                    /* WARNING: Subroutine does not return */
      native_sub_4327dc(uVar7,0);
    }
    *(undefined4 *)(lVar4 + 0x24) = *(undefined4 *)(param_1 + 0xc4);
    if (*(long *)(param_1 + 0x90) != 0) {
      if (uVar1 < 3) goto LAB_009f569c;
      *(undefined4 *)(lVar4 + 0x28) = *(undefined4 *)(*(long *)(param_1 + 0x90) + 0x10);
      iVar3 = native_UnityEngine_Mathf__Min_8e4c24(lVar4,0);
      uVar5 = native_System_String__IsNullOrEmpty_b09430(*(undefined8 *)(param_1 + 0x90),0);
      if ((iVar3 < 0) || ((uVar5 & 1) != 0)) {
        return _StringLiteral__12eaac0;
      }
      lVar4 = *(long *)(param_1 + 0x90);
      if (lVar4 != 0) {
        if ((bRam0000000001342123 & 1) == 0) {
          native_sub_43273c(&string_TypeInfo_12d5f28,0,iVar3,0);
          bRam0000000001342123 = 1;
        }
        iVar2 = *(int *)(lVar4 + 0x10);
        if (iVar2 < 0) {
          uVar7 = native_sub_432740(&
                                    StringLiteral_startIndex_cannot_be_larger_than_length_of_string__12f6240
                                   );
          uVar7 = native_System_Environment__GetResourceString_beaba8(uVar7,0);
          native_sub_432740(&System_ArgumentOutOfRangeException_TypeInfo_12d3810);
          uVar8 = native_sub_432808();
          puVar6 = &StringLiteral_startIndex_12f6228;
        }
        else {
          if (iVar3 < 0) {
            puVar6 = &StringLiteral_Length_cannot_be_less_than_zero__12ef570;
          }
          else {
            if (-1 < iVar2 - iVar3) {
              if (iVar3 == 0) {
                lVar4 = **(long **)(_string_TypeInfo_12d5f28 + 0xb8);
              }
              else if (iVar2 != iVar3) {
                lVar10 = native_sub_3bca18(iVar3);
                if (lVar10 == 0) {
                    /* WARNING: Subroutine does not return */
                  native_sub_432810();
                }
                native_System_Buffer__Memcpy_85e1a8(lVar10 + 0x14,lVar4 + 0x14,iVar3 << 1,0);
                return lVar10;
              }
              return lVar4;
            }
            puVar6 = &
                     StringLiteral_Index_and_length_must_refer_to_a_location_within_the_string__12ee7f0
            ;
          }
          uVar7 = native_sub_432740(puVar6);
          uVar7 = native_System_Environment__GetResourceString_beaba8(uVar7,0);
          native_sub_432740(&System_ArgumentOutOfRangeException_TypeInfo_12d3810);
          uVar8 = native_sub_432808();
          puVar6 = &StringLiteral_length_12f5428;
        }
        uVar9 = native_sub_432740(puVar6);
        native_System_ArgumentOutOfRangeException___ctor_951f98(uVar8,uVar9,uVar7,0);
        uVar7 = native_sub_432740(&Method_System_String_Substring___12e6d80);
                    /* WARNING: Subroutine does not return */
        native_sub_4327dc(uVar8,uVar7);
      }
    }
  }
                    /* WARNING: Subroutine does not return */
  native_sub_432810();
}



/* UIInput$$GetRightText @ 0x9f56ac
 * System_String_o* UIInput__GetRightText (UIInput_o* __this, const MethodInfo* method); */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* UIInput$$GetRightText
   System_String_o* UIInput__GetRightText (UIInput_o* __this, const MethodInfo* method); */

long native_UIInput__GetRightText_9f56ac(long param_1)

{
  int iVar1;
  int iVar2;
  int iVar3;
  ulong uVar4;
  long lVar5;
  undefined *puVar6;
  undefined8 uVar7;
  undefined8 uVar8;
  undefined8 uVar9;
  long lVar10;
  
  if ((bRam000000000134198c & 1) == 0) {
    native_sub_43273c(&StringLiteral__12eaac0);
    bRam000000000134198c = 1;
  }
  iVar3 = native_UnityEngine_Mathf__Max_8e4cd0
                    (*(undefined4 *)(param_1 + 0xc0),*(undefined4 *)(param_1 + 0xc4),0);
  uVar4 = native_System_String__IsNullOrEmpty_b09430(*(undefined8 *)(param_1 + 0x90),0);
  if ((uVar4 & 1) != 0) {
    return _StringLiteral__12eaac0;
  }
  lVar5 = *(long *)(param_1 + 0x90);
  if (lVar5 == 0) {
                    /* WARNING: Subroutine does not return */
    native_sub_432810();
  }
  if (*(int *)(lVar5 + 0x10) <= iVar3) {
    return _StringLiteral__12eaac0;
  }
  iVar2 = *(int *)(lVar5 + 0x10) - iVar3;
  if ((bRam0000000001342123 & 1) == 0) {
    native_sub_43273c(&string_TypeInfo_12d5f28);
    bRam0000000001342123 = 1;
  }
  if (iVar3 < 0) {
    puVar6 = &StringLiteral_StartIndex_cannot_be_less_than_zero__12f1060;
  }
  else {
    iVar1 = *(int *)(lVar5 + 0x10);
    if (iVar3 <= iVar1) {
      if (iVar2 < 0) {
        puVar6 = &StringLiteral_Length_cannot_be_less_than_zero__12ef570;
      }
      else {
        if (iVar3 <= iVar1 - iVar2) {
          if (iVar2 == 0) {
            lVar5 = **(long **)(_string_TypeInfo_12d5f28 + 0xb8);
          }
          else if ((iVar3 != 0) || (iVar1 != iVar2)) {
            lVar10 = native_sub_3bca18(iVar2);
            if (lVar10 == 0) {
                    /* WARNING: Subroutine does not return */
              native_sub_432810();
            }
            native_System_Buffer__Memcpy_85e1a8
                      (lVar10 + 0x14,lVar5 + (long)iVar3 * 2 + 0x14,iVar2 * 2,0);
            return lVar10;
          }
          return lVar5;
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



/* UIInput$$GetSelection @ 0x9f5744
 * System_String_o* UIInput__GetSelection (UIInput_o* __this, const MethodInfo* method); */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* UIInput$$GetSelection
   System_String_o* UIInput__GetSelection (UIInput_o* __this, const MethodInfo* method); */

long native_UIInput__GetSelection_9f5744(long param_1)

{
  int iVar1;
  int iVar2;
  int iVar3;
  ulong uVar4;
  undefined *puVar5;
  undefined8 uVar6;
  undefined8 uVar7;
  undefined8 uVar8;
  long lVar9;
  long lVar10;
  
  if ((bRam000000000134198d & 1) == 0) {
    native_sub_43273c(&StringLiteral__12eaac0);
    bRam000000000134198d = 1;
  }
  uVar4 = native_System_String__IsNullOrEmpty_b09430(*(undefined8 *)(param_1 + 0x90),0);
  if ((uVar4 & 1) != 0) {
    return _StringLiteral__12eaac0;
  }
  if (*(int *)(param_1 + 0xc0) == *(int *)(param_1 + 0xc4)) {
    return _StringLiteral__12eaac0;
  }
  iVar2 = native_UnityEngine_Mathf__Min_8e4c18(*(int *)(param_1 + 0xc0),*(int *)(param_1 + 0xc4),0);
  iVar3 = native_UnityEngine_Mathf__Max_8e4cd0
                    (*(undefined4 *)(param_1 + 0xc0),*(undefined4 *)(param_1 + 0xc4),0);
  lVar10 = *(long *)(param_1 + 0x90);
  if (lVar10 == 0) {
                    /* WARNING: Subroutine does not return */
    native_sub_432810();
  }
  iVar3 = iVar3 - iVar2;
  if ((bRam0000000001342123 & 1) == 0) {
    native_sub_43273c(&string_TypeInfo_12d5f28,iVar2,iVar3,0);
    bRam0000000001342123 = 1;
  }
  if (iVar2 < 0) {
    puVar5 = &StringLiteral_StartIndex_cannot_be_less_than_zero__12f1060;
  }
  else {
    iVar1 = *(int *)(lVar10 + 0x10);
    if (iVar2 <= iVar1) {
      if (iVar3 < 0) {
        puVar5 = &StringLiteral_Length_cannot_be_less_than_zero__12ef570;
      }
      else {
        if (iVar2 <= iVar1 - iVar3) {
          if (iVar3 == 0) {
            lVar10 = **(long **)(_string_TypeInfo_12d5f28 + 0xb8);
          }
          else if ((iVar2 != 0) || (iVar1 != iVar3)) {
            lVar9 = native_sub_3bca18(iVar3);
            if (lVar9 == 0) {
                    /* WARNING: Subroutine does not return */
              native_sub_432810();
            }
            native_System_Buffer__Memcpy_85e1a8
                      (lVar9 + 0x14,lVar10 + (long)iVar2 * 2 + 0x14,iVar3 * 2,0);
            return lVar9;
          }
          return lVar10;
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



/* UIInput$$GetCharUnderMouse @ 0x9f57ec
 * int32_t UIInput__GetCharUnderMouse (UIInput_o* __this, const MethodInfo* method); */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* UIInput$$GetCharUnderMouse
   int32_t UIInput__GetCharUnderMouse (UIInput_o* __this, const MethodInfo* method); */

int native_UIInput__GetCharUnderMouse_9f57ec(long param_1)

{
  uint uVar1;
  int iVar2;
  int iVar3;
  long *plVar4;
  long lVar5;
  ulong uVar6;
  undefined8 uVar7;
  undefined8 uStack_90;
  undefined8 uStack_88;
  undefined8 uStack_80;
  undefined8 uStack_70;
  undefined8 uStack_68;
  undefined8 uStack_60;
  undefined4 uStack_54;
  undefined8 uStack_50;
  undefined8 uStack_48;
  undefined8 uStack_40;
  undefined8 uStack_38;
  undefined8 uStack_30;
  
  if ((bRam000000000134198e & 1) == 0) {
    native_sub_43273c(&UICamera_TypeInfo_12d6410);
    native_sub_43273c(&UIInput_TypeInfo_12d6450);
    bRam000000000134198e = 1;
  }
  uStack_40 = 0;
  uStack_38 = 0;
  uStack_30 = 0;
  uStack_50 = 0;
  uStack_48 = 0;
  uStack_54 = 0;
  plVar4 = *(long **)(param_1 + 0x18);
  if (plVar4 != (long *)0x0) {
    lVar5 = (**(code **)(*plVar4 + 0x1e8))(plVar4,*(undefined8 *)(*plVar4 + 0x1f0));
    if (((*(byte *)(_UICamera_TypeInfo_12d6410 + 0x133) >> 2 & 1) != 0) &&
       (*(int *)(_UICamera_TypeInfo_12d6410 + 0xe0) == 0)) {
      native_sub_4327ec(_UICamera_TypeInfo_12d6410);
    }
    native_UICamera__get_currentRay_c94b78(&uStack_70,0);
    uStack_30 = uStack_60;
    uStack_38 = uStack_68;
    uStack_40 = uStack_70;
    if (lVar5 != 0) {
      uVar1 = *(uint *)(lVar5 + 0x18);
      if (((uVar1 == 0) || (uVar1 == 1)) || (uVar1 < 3)) {
        uVar7 = native_sub_43283c();
                    /* WARNING: Subroutine does not return */
        native_sub_4327dc(uVar7,0);
      }
      native_UnityEngine_Plane___ctor_8eb91c
                (*(undefined4 *)(lVar5 + 0x20),*(undefined4 *)(lVar5 + 0x24),
                 *(undefined4 *)(lVar5 + 0x28),*(undefined4 *)(lVar5 + 0x2c),
                 *(undefined4 *)(lVar5 + 0x30),*(undefined4 *)(lVar5 + 0x34),&uStack_50,0);
      uStack_80 = uStack_30;
      uStack_88 = uStack_38;
      uStack_90 = uStack_40;
      uVar6 = native_UnityEngine_Plane__Raycast_8eb9a4(&uStack_50,&uStack_90,&uStack_54,0);
      if ((uVar6 & 1) == 0) {
        iVar3 = 0;
      }
      else {
        if (((*(byte *)(_UIInput_TypeInfo_12d6450 + 0x133) >> 2 & 1) != 0) &&
           (*(int *)(_UIInput_TypeInfo_12d6450 + 0xe0) == 0)) {
          native_sub_4327ec();
        }
        lVar5 = *(long *)(param_1 + 0x18);
        iVar2 = *(int *)(*(long *)(_UIInput_TypeInfo_12d6450 + 0xb8) + 0x10);
        native_UnityEngine_Ray__GetPoint_7631f4(uStack_54,&uStack_40,0);
        if (lVar5 == 0) goto LAB_009f597c;
        iVar3 = native_UILabel__GetCharacterIndexAtPosition_aeb90c(lVar5,0,0);
        iVar3 = iVar3 + iVar2;
      }
      return iVar3;
    }
  }
LAB_009f597c:
                    /* WARNING: Subroutine does not return */
  native_sub_432810();
}



/* UIInput$$OnPress @ 0x9f5980
 * void UIInput__OnPress (UIInput_o* __this, bool isPressed, const MethodInfo* method); */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* UIInput$$OnPress
   void UIInput__OnPress (UIInput_o* __this, bool isPressed, const MethodInfo* method); */

void native_UIInput__OnPress_9f5980(long *param_1,ulong param_2)

{
  long lVar1;
  long lVar2;
  long lVar3;
  bool bVar4;
  ushort uVar5;
  uint uVar6;
  uint uVar7;
  undefined4 uVar8;
  int iVar9;
  int iVar10;
  undefined4 uVar11;
  undefined8 uVar12;
  undefined8 *puVar13;
  undefined8 uVar14;
  long *plVar15;
  long *plVar16;
  ulong uVar17;
  int iVar18;
  long lVar19;
  long lVar20;
  int *piVar21;
  ushort uVar22;
  int iVar23;
  long lVar24;
  long *plVar25;
  long *plVar26;
  long *plVar27;
  float fVar28;
  
  if ((bRam000000000134198f & 1) == 0) {
    native_sub_43273c(&UnityEngine_Object_TypeInfo_12d54e0);
    native_sub_43273c(&UICamera_TypeInfo_12d6410);
    bRam000000000134198f = 1;
  }
  if (((param_2 & 1) == 0) ||
     (uVar17 = native_UIInput__get_isSelected_9f283c(param_1), (uVar17 & 1) == 0)) {
    return;
  }
  lVar24 = param_1[3];
  if (((*(byte *)(_UnityEngine_Object_TypeInfo_12d54e0 + 0x133) >> 2 & 1) != 0) &&
     (*(int *)(_UnityEngine_Object_TypeInfo_12d54e0 + 0xe0) == 0)) {
    native_sub_4327ec();
  }
  uVar17 = native_UnityEngine_Object__op_Inequality_8d76fc(lVar24,0,0);
  if ((uVar17 & 1) == 0) {
    return;
  }
  if (((*(byte *)(_UICamera_TypeInfo_12d6410 + 0x133) >> 2 & 1) != 0) &&
     (*(int *)(_UICamera_TypeInfo_12d6410 + 0xe0) == 0)) {
    native_sub_4327ec();
  }
  iVar10 = native_UICamera__get_currentScheme_c92518(0);
  if (iVar10 != 0) {
    if (((*(byte *)(_UICamera_TypeInfo_12d6410 + 0x133) >> 2 & 1) != 0) &&
       (*(int *)(_UICamera_TypeInfo_12d6410 + 0xe0) == 0)) {
      native_sub_4327ec();
    }
    iVar10 = native_UICamera__get_currentScheme_c92518(0);
    if (iVar10 != 1) {
      return;
    }
  }
  uVar11 = native_UIInput__GetCharUnderMouse_9f57ec(param_1);
  native_UIInput__set_selectionEnd_9f33f8(param_1,uVar11);
  uVar17 = native_UnityEngine_Input__GetKey_dbdbe4(0x130,0);
  if ((uVar17 & 1) != 0) {
    return;
  }
  uVar17 = native_UnityEngine_Input__GetKey_dbdbe4(0x12f,0);
  if ((uVar17 & 1) != 0) {
    return;
  }
  uVar11 = *(undefined4 *)((long)param_1 + 0xc4);
  if ((bRam000000000134197e & 1) == 0) {
    native_sub_43273c(&UIInput_TypeInfo_12d6450);
    bRam000000000134197e = 1;
  }
  uVar17 = native_UIInput__get_isSelected_9f283c(param_1);
  if ((uVar17 & 1) == 0) {
    return;
  }
  if (((*(byte *)(_UIInput_TypeInfo_12d6450 + 0x133) >> 2 & 1) != 0) &&
     (*(int *)(_UIInput_TypeInfo_12d6450 + 0xe0) == 0)) {
    native_sub_4327ec();
  }
  if ((*(long *)(*(long *)(_UIInput_TypeInfo_12d6450 + 0xb8) + 0x20) != 0) &&
     (uVar17 = native_UIInput__get_inputShouldBeHidden_9f28e0(param_1), (uVar17 & 1) == 0)) {
    return;
  }
  *(undefined4 *)(param_1 + 0x18) = uVar11;
  if ((bRam0000000001341994 & 1) == 0) {
    native_sub_43273c(&INGUIFont_TypeInfo_12d4c70);
    native_sub_43273c(&Method_NGUITools_AddWidget_UITexture____12e56e8);
    native_sub_43273c(&NGUITools_TypeInfo_12d53c8);
    native_sub_43273c(&UnityEngine_Object_TypeInfo_12d54e0);
    native_sub_43273c(&UnityEngine_Texture2D_TypeInfo_12d61f0);
    native_sub_43273c(&UIInput_TypeInfo_12d6450);
    native_sub_43273c(&StringLiteral_x_12f6b98);
    native_sub_43273c(&StringLiteral__12eaac0);
    native_sub_43273c(&StringLiteral___12eb5f0);
    native_sub_43273c(&StringLiteral_Input_Caret_12ee890);
    native_sub_43273c(&StringLiteral_Input_Highlight_12ee898);
    bRam0000000001341994 = 1;
  }
  plVar27 = param_1 + 3;
  lVar24 = *plVar27;
  if (((*(byte *)(_UnityEngine_Object_TypeInfo_12d54e0 + 0x133) >> 2 & 1) != 0) &&
     (*(int *)(_UnityEngine_Object_TypeInfo_12d54e0 + 0xe0) == 0)) {
    native_sub_4327ec();
  }
  uVar17 = native_UnityEngine_Object__op_Inequality_8d76fc(lVar24,0,0);
  if ((uVar17 & 1) == 0) {
    return;
  }
  if (*(char *)((long)param_1 + 0xb4) != '\0') {
    native_UIInput__Init_9f1988(param_1);
  }
  uVar6 = native_UIInput__get_isSelected_9f283c(param_1);
  if (*(char *)((long)param_1 + 0xb4) != '\0') {
    native_UIInput__Init_9f1988(param_1);
  }
  lVar24 = param_1[0x12];
  uVar17 = native_System_String__IsNullOrEmpty_b09430(lVar24,0);
  if ((uVar17 & 1) == 0) {
    lVar19 = *plVar27;
    uVar7 = 0;
LAB_009f1c84:
    lVar20 = 0x48;
    lVar1 = 0x4c;
    lVar2 = 0x50;
    lVar3 = 0x54;
  }
  else {
    uVar12 = native_UnityEngine_Input__get_compositionString_dbdf20(0);
    uVar7 = native_System_String__IsNullOrEmpty_b09430(uVar12,0);
    lVar19 = *plVar27;
    if (((uVar6 | uVar7 ^ 0xffffffff) & 1) != 0) goto LAB_009f1c84;
    lVar20 = 0xa0;
    lVar1 = 0xa4;
    lVar2 = 0xa8;
    lVar3 = 0xac;
    uVar7 = 1;
  }
  if (lVar19 == 0) goto LAB_009f2784;
  native_UIWidget__set_color_947adc
            (*(undefined4 *)((long)param_1 + lVar20),*(undefined4 *)((long)param_1 + lVar1),
             *(undefined4 *)((long)param_1 + lVar2),*(undefined4 *)((long)param_1 + lVar3),lVar19,0)
  ;
  uVar12 = _StringLiteral___12eb5f0;
  lVar19 = _StringLiteral__12eaac0;
  if ((uVar7 & 1) == 0) {
    if ((int)param_1[4] == 2) {
      if (*plVar27 == 0) goto LAB_009f2784;
      plVar16 = (long *)native_UILabel__get_font_ae77e8(*plVar27,0);
      uVar14 = uVar12;
      if (plVar16 != (long *)0x0) {
        lVar20 = *plVar16;
        if ((ulong)*(ushort *)(lVar20 + 0x12a) != 0) {
          uVar17 = 0;
          piVar21 = (int *)(*(long *)(lVar20 + 0xb0) + 8);
          do {
            if (*(long *)(piVar21 + -2) == _INGUIFont_TypeInfo_12d4c70) {
              puVar13 = (undefined8 *)(lVar20 + (long)(*piVar21 + 2) * 0x10 + 0x138);
              goto LAB_009f1da4;
            }
            uVar17 = uVar17 + 1;
            piVar21 = piVar21 + 4;
          } while (uVar17 < *(ushort *)(lVar20 + 0x12a));
        }
        puVar13 = (undefined8 *)native_sub_3c9b34(plVar16,_INGUIFont_TypeInfo_12d4c70,2);
LAB_009f1da4:
        lVar20 = (*(code *)*puVar13)(plVar16,puVar13[1]);
        if (lVar20 != 0) {
          lVar20 = *plVar16;
          if ((ulong)*(ushort *)(lVar20 + 0x12a) != 0) {
            uVar17 = 0;
            piVar21 = (int *)(*(long *)(lVar20 + 0xb0) + 8);
            do {
              if (*(long *)(piVar21 + -2) == _INGUIFont_TypeInfo_12d4c70) {
                puVar13 = (undefined8 *)(lVar20 + (long)(*piVar21 + 2) * 0x10 + 0x138);
                goto LAB_009f1e0c;
              }
              uVar17 = uVar17 + 1;
              piVar21 = piVar21 + 4;
            } while (uVar17 < *(ushort *)(lVar20 + 0x12a));
          }
          puVar13 = (undefined8 *)native_sub_3c9b34(plVar16,_INGUIFont_TypeInfo_12d4c70,2);
LAB_009f1e0c:
          lVar20 = (*(code *)*puVar13)(plVar16,puVar13[1]);
          if (lVar20 == 0) goto LAB_009f2784;
          lVar20 = native_BMFont__GetGlyph_dd1c0c(lVar20,0x2a,0);
          uVar14 = _StringLiteral_x_12f6b98;
          if (lVar20 != 0) {
            uVar14 = uVar12;
          }
        }
      }
      if (lVar24 == 0) goto LAB_009f2784;
      iVar10 = *(int *)(lVar24 + 0x10);
      if (0 < iVar10) {
        do {
          lVar19 = native_System_String__Concat_afbd68(lVar19,uVar14,0);
          iVar10 = iVar10 + -1;
        } while (iVar10 != 0);
      }
      lVar24 = lVar19;
      if ((uVar6 & 1) == 0) goto LAB_009f1ec8;
LAB_009f1e6c:
      if (lVar24 == 0) goto LAB_009f2784;
      uVar11 = *(undefined4 *)(lVar24 + 0x10);
      uVar8 = native_UIInput__get_cursorPosition_9f3090(param_1);
      iVar10 = native_UnityEngine_Mathf__Min_8e4c18(uVar11,uVar8,0);
      uVar12 = native_System_String__Substring_b09fac(lVar24,0,iVar10,0);
      uVar14 = native_UnityEngine_Input__get_compositionString_dbdf20(0);
      uVar12 = native_System_String__Concat_afbd68(uVar12,uVar14,0);
    }
    else {
      if ((uVar6 & 1) != 0) goto LAB_009f1e6c;
LAB_009f1ec8:
      if (lVar24 == 0) goto LAB_009f2784;
      uVar12 = native_System_String__Substring_b09fac(lVar24,0,0,0);
      iVar10 = 0;
    }
    uVar14 = native_System_String__Substring_b09fac
                       (lVar24,iVar10,*(int *)(lVar24 + 0x10) - iVar10,0);
    lVar24 = native_System_String__Concat_afbd68(uVar12,uVar14,0);
    if ((uVar6 & 1) == 0) {
LAB_009f1fb0:
      if (((*(byte *)(_UIInput_TypeInfo_12d6450 + 0x133) >> 2 & 1) != 0) &&
         (*(int *)(_UIInput_TypeInfo_12d6450 + 0xe0) == 0)) {
        native_sub_4327ec();
      }
      *(undefined4 *)(*(long *)(_UIInput_TypeInfo_12d6450 + 0xb8) + 0x10) = 0;
      lVar19 = *plVar27;
      if (lVar19 == 0) goto LAB_009f2784;
      uVar11 = (undefined4)param_1[0x17];
      goto LAB_009f1fe8;
    }
    lVar19 = *plVar27;
    if (lVar19 == 0) goto LAB_009f2784;
    if ((*(int *)(lVar19 + 0x1e4) != 1) || (*(int *)(lVar19 + 0x1c0) != 1)) goto LAB_009f1fb0;
    iVar9 = native_UILabel__CalculateOffsetToFit_aedc24(lVar19,lVar24,0);
    uVar5 = *(ushort *)(_UIInput_TypeInfo_12d6450 + 0x132);
    uVar22 = uVar5 & 0x400;
    if (iVar9 == 0) {
      if (((uVar5 & 0x400) != 0) && (*(int *)(_UIInput_TypeInfo_12d6450 + 0xe0) == 0)) {
        native_sub_4327ec();
      }
      *(undefined4 *)(*(long *)(_UIInput_TypeInfo_12d6450 + 0xb8) + 0x10) = 0;
      lVar19 = *plVar27;
      if (lVar19 == 0) goto LAB_009f2784;
      uVar11 = (undefined4)param_1[0x17];
LAB_009f2678:
      native_UILabel__set_alignment_ae8458(lVar19,uVar11,0);
    }
    else {
      if (((uVar5 & 0x400) != 0) && (*(int *)(_UIInput_TypeInfo_12d6450 + 0xe0) == 0)) {
        native_sub_4327ec();
        uVar22 = *(ushort *)(_UIInput_TypeInfo_12d6450 + 0x132) & 0x400;
      }
      piVar21 = (int *)(*(long *)(_UIInput_TypeInfo_12d6450 + 0xb8) + 0x10);
      iVar23 = *piVar21;
      if (iVar10 < iVar23) {
        if ((uVar22 != 0) && (*(int *)(_UIInput_TypeInfo_12d6450 + 0xe0) == 0)) {
          native_sub_4327ec();
          piVar21 = (int *)(*(long *)(_UIInput_TypeInfo_12d6450 + 0xb8) + 0x10);
        }
        *piVar21 = iVar10;
LAB_009f266c:
        lVar19 = *plVar27;
        if (lVar19 == 0) goto LAB_009f2784;
        uVar11 = 1;
        goto LAB_009f2678;
      }
      if ((uVar22 != 0) && (*(int *)(_UIInput_TypeInfo_12d6450 + 0xe0) == 0)) {
        native_sub_4327ec();
        piVar21 = (int *)(*(long *)(_UIInput_TypeInfo_12d6450 + 0xb8) + 0x10);
        iVar23 = *piVar21;
      }
      if (iVar9 < iVar23) {
        if (((*(byte *)(_UIInput_TypeInfo_12d6450 + 0x133) >> 2 & 1) != 0) &&
           (*(int *)(_UIInput_TypeInfo_12d6450 + 0xe0) == 0)) {
          native_sub_4327ec();
          piVar21 = (int *)(*(long *)(_UIInput_TypeInfo_12d6450 + 0xb8) + 0x10);
        }
        *piVar21 = iVar9;
        goto LAB_009f266c;
      }
      if (lVar24 == 0) goto LAB_009f2784;
      lVar19 = *plVar27;
      uVar12 = native_System_String__Substring_b09fac(lVar24,0,iVar10,0);
      if (lVar19 == 0) goto LAB_009f2784;
      iVar10 = native_UILabel__CalculateOffsetToFit_aedc24(lVar19,uVar12,0);
      if (((*(byte *)(_UIInput_TypeInfo_12d6450 + 0x133) >> 2 & 1) != 0) &&
         (*(int *)(_UIInput_TypeInfo_12d6450 + 0xe0) == 0)) {
        native_sub_4327ec(_UIInput_TypeInfo_12d6450);
      }
      piVar21 = (int *)(*(long *)(_UIInput_TypeInfo_12d6450 + 0xb8) + 0x10);
      if (*piVar21 < iVar10) {
        if (((*(byte *)(_UIInput_TypeInfo_12d6450 + 0x133) >> 2 & 1) != 0) &&
           (*(int *)(_UIInput_TypeInfo_12d6450 + 0xe0) == 0)) {
          native_sub_4327ec(_UIInput_TypeInfo_12d6450);
          piVar21 = (int *)(*(long *)(_UIInput_TypeInfo_12d6450 + 0xb8) + 0x10);
        }
        *piVar21 = iVar10;
        lVar19 = *plVar27;
        if (lVar19 == 0) goto LAB_009f2784;
        uVar11 = 3;
        goto LAB_009f2678;
      }
    }
    if (((*(byte *)(_UIInput_TypeInfo_12d6450 + 0x133) >> 2 & 1) != 0) &&
       (*(int *)(_UIInput_TypeInfo_12d6450 + 0xe0) == 0)) {
      native_sub_4327ec();
    }
    iVar10 = *(int *)(*(long *)(_UIInput_TypeInfo_12d6450 + 0xb8) + 0x10);
    if (iVar10 != 0) {
      if (((*(byte *)(_UIInput_TypeInfo_12d6450 + 0x133) >> 2 & 1) != 0) &&
         (*(int *)(_UIInput_TypeInfo_12d6450 + 0xe0) == 0)) {
        native_sub_4327ec();
        iVar10 = *(int *)(*(long *)(_UIInput_TypeInfo_12d6450 + 0xb8) + 0x10);
      }
      if (lVar24 == 0) goto LAB_009f2784;
      lVar24 = native_System_String__Substring_b09fac
                         (lVar24,iVar10,*(int *)(lVar24 + 0x10) - iVar10,0);
    }
  }
  else {
    lVar19 = *plVar27;
    if (lVar19 == 0) goto LAB_009f2784;
    uVar11 = (undefined4)param_1[0x17];
    plVar16 = (long *)&StringLiteral__12eaac0;
    if ((uVar6 & 1) == 0) {
      plVar16 = param_1 + 0x13;
    }
    lVar24 = *plVar16;
LAB_009f1fe8:
    native_UILabel__set_alignment_ae8458(lVar19,uVar11,0);
  }
  if (*plVar27 == 0) goto LAB_009f2784;
  native_UILabel__set_text_ae81a8(*plVar27,lVar24,0);
  if ((uVar6 & 1) == 0) {
LAB_009f2280:
                    /* WARNING: Could not recover jumptable at 0x009f22a4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (**(code **)(*param_1 + 0x1c8))(param_1,*(undefined8 *)(*param_1 + 0x1d0));
    return;
  }
  if (((*(byte *)(_UIInput_TypeInfo_12d6450 + 0x133) >> 2 & 1) != 0) &&
     (*(int *)(_UIInput_TypeInfo_12d6450 + 0xe0) == 0)) {
    native_sub_4327ec();
  }
  if ((*(long *)(*(long *)(_UIInput_TypeInfo_12d6450 + 0xb8) + 0x20) != 0) &&
     (uVar17 = native_UIInput__get_inputShouldBeHidden_9f28e0(param_1), (uVar17 & 1) == 0))
  goto LAB_009f2280;
  lVar24 = param_1[0x18];
  if (((*(byte *)(_UIInput_TypeInfo_12d6450 + 0x133) >> 2 & 1) != 0) &&
     (*(int *)(_UIInput_TypeInfo_12d6450 + 0xe0) == 0)) {
    native_sub_4327ec();
  }
  iVar10 = *(int *)(*(long *)(_UIInput_TypeInfo_12d6450 + 0xb8) + 0x10);
  plVar16 = param_1 + 0x1b;
  lVar19 = *plVar16;
  iVar9 = *(int *)((long)param_1 + 0xc4);
  if (((*(byte *)(_UnityEngine_Object_TypeInfo_12d54e0 + 0x133) >> 2 & 1) != 0) &&
     (*(int *)(_UnityEngine_Object_TypeInfo_12d54e0 + 0xe0) == 0)) {
    native_sub_4327ec();
  }
  uVar17 = native_UnityEngine_Object__op_Equality_8e9a3c(lVar19,0,0);
  if ((uVar17 & 1) != 0) {
    lVar19 = native_sub_432808(_UnityEngine_Texture2D_TypeInfo_12d61f0);
    native_UnityEngine_Texture2D___ctor_76f4a4(lVar19,2,2,5,0,0);
    *plVar16 = lVar19;
    native_sub_4326e0(plVar16,lVar19);
    iVar23 = 0;
    do {
      iVar18 = 0;
      do {
        lVar19 = *plVar16;
        native_UnityEngine_Color__get_white_8d9e10(0);
        if (lVar19 == 0) goto LAB_009f2784;
        native_UnityEngine_Texture2D__SetPixel_76f52c(lVar19,iVar18,iVar23,0);
        bVar4 = iVar18 == 0;
        iVar18 = 1;
      } while (bVar4);
      bVar4 = iVar23 == 0;
      iVar23 = 1;
    } while (bVar4);
    if (*plVar16 == 0) goto LAB_009f2784;
    native_UnityEngine_Texture2D__Apply_76f804(*plVar16,0);
  }
  iVar23 = (int)lVar24 - iVar10;
  iVar9 = iVar9 - iVar10;
  if (iVar23 != iVar9) {
    plVar25 = param_1 + 0x19;
    lVar24 = *plVar25;
    if (((*(byte *)(_UnityEngine_Object_TypeInfo_12d54e0 + 0x133) >> 2 & 1) != 0) &&
       (*(int *)(_UnityEngine_Object_TypeInfo_12d54e0 + 0xe0) == 0)) {
      native_sub_4327ec();
    }
    uVar17 = native_UnityEngine_Object__op_Equality_8e9a3c(lVar24,0,0);
    if ((uVar17 & 1) == 0) {
      plVar15 = (long *)*plVar27;
      if (plVar15 == (long *)0x0) goto LAB_009f2784;
      plVar26 = (long *)*plVar25;
      uVar11 = (**(code **)(*plVar15 + 0x2a8))(plVar15,*(undefined8 *)(*plVar15 + 0x2b0));
      if (plVar26 == (long *)0x0) goto LAB_009f2784;
      (**(code **)(*plVar26 + 0x2b8))(plVar26,uVar11,*(undefined8 *)(*plVar26 + 0x2c0));
      plVar15 = (long *)*plVar25;
      if (plVar15 == (long *)0x0) goto LAB_009f2784;
      (**(code **)(*plVar15 + 0x338))(plVar15,*plVar16,*(undefined8 *)(*plVar15 + 0x340));
      plVar15 = (long *)*plVar25;
      if (plVar15 == (long *)0x0) goto LAB_009f2784;
      (**(code **)(*plVar15 + 0x378))(plVar15,*(undefined8 *)(*plVar15 + 0x380));
      if (*plVar25 == 0) goto LAB_009f2784;
      native_UnityEngine_Behaviour__set_enabled_8d7b0c(*plVar25,1,0);
    }
    else {
      if (*plVar27 == 0) goto LAB_009f2784;
      uVar12 = native_UIRect__get_cachedGameObject_c2d1c0(*plVar27,0);
      if (((*(byte *)(_NGUITools_TypeInfo_12d53c8 + 0x133) >> 2 & 1) != 0) &&
         (*(int *)(_NGUITools_TypeInfo_12d53c8 + 0xe0) == 0)) {
        native_sub_4327ec(_NGUITools_TypeInfo_12d53c8);
      }
      lVar24 = native_NGUITools__AddWidget_object__4a528c
                         (uVar12,0x7fffffff,_Method_NGUITools_AddWidget_UITexture____12e56e8);
      *plVar25 = lVar24;
      native_sub_4326e0(plVar25,lVar24);
      if (*plVar25 == 0) goto LAB_009f2784;
      native_UnityEngine_Object__set_name_8e9c08(*plVar25,_StringLiteral_Input_Highlight_12ee898,0);
      plVar15 = (long *)*plVar25;
      if (plVar15 == (long *)0x0) goto LAB_009f2784;
      (**(code **)(*plVar15 + 0x338))(plVar15,*plVar16,*(undefined8 *)(*plVar15 + 0x340));
      if (*plVar25 == 0) goto LAB_009f2784;
      *(undefined1 *)(*plVar25 + 0x100) = 0;
      plVar15 = (long *)*plVar27;
      if (plVar15 == (long *)0x0) goto LAB_009f2784;
      plVar26 = (long *)*plVar25;
      uVar11 = (**(code **)(*plVar15 + 0x2a8))(plVar15,*(undefined8 *)(*plVar15 + 0x2b0));
      if (plVar26 == (long *)0x0) goto LAB_009f2784;
      (**(code **)(*plVar26 + 0x2b8))(plVar26,uVar11,*(undefined8 *)(*plVar26 + 0x2c0));
      if (*plVar27 == 0) goto LAB_009f2784;
      lVar24 = *plVar25;
      uVar12 = native_UIRect__get_cachedTransform_c27c58(*plVar27,0);
      if (lVar24 == 0) goto LAB_009f2784;
      native_UIRect__SetAnchor_c2ea60(lVar24,uVar12,0);
    }
  }
  plVar25 = param_1 + 0x1a;
  lVar24 = *plVar25;
  if (((*(byte *)(_UnityEngine_Object_TypeInfo_12d54e0 + 0x133) >> 2 & 1) != 0) &&
     (*(int *)(_UnityEngine_Object_TypeInfo_12d54e0 + 0xe0) == 0)) {
    native_sub_4327ec();
  }
  uVar17 = native_UnityEngine_Object__op_Equality_8e9a3c(lVar24,0,0);
  if ((uVar17 & 1) == 0) {
    plVar15 = (long *)*plVar27;
    if (plVar15 == (long *)0x0) goto LAB_009f2784;
    plVar26 = (long *)*plVar25;
    uVar11 = (**(code **)(*plVar15 + 0x2a8))(plVar15,*(undefined8 *)(*plVar15 + 0x2b0));
    if (plVar26 == (long *)0x0) goto LAB_009f2784;
    (**(code **)(*plVar26 + 0x2b8))(plVar26,uVar11,*(undefined8 *)(*plVar26 + 0x2c0));
    plVar15 = (long *)*plVar25;
    if (plVar15 == (long *)0x0) goto LAB_009f2784;
    (**(code **)(*plVar15 + 0x338))(plVar15,*plVar16,*(undefined8 *)(*plVar15 + 0x340));
    plVar16 = (long *)*plVar25;
    if (plVar16 == (long *)0x0) goto LAB_009f2784;
    (**(code **)(*plVar16 + 0x378))(plVar16,*(undefined8 *)(*plVar16 + 0x380));
    if (*plVar25 == 0) goto LAB_009f2784;
    native_UnityEngine_Behaviour__set_enabled_8d7b0c(*plVar25,1,0);
  }
  else {
    if (*plVar27 == 0) goto LAB_009f2784;
    uVar12 = native_UIRect__get_cachedGameObject_c2d1c0(*plVar27,0);
    if (((*(byte *)(_NGUITools_TypeInfo_12d53c8 + 0x133) >> 2 & 1) != 0) &&
       (*(int *)(_NGUITools_TypeInfo_12d53c8 + 0xe0) == 0)) {
      native_sub_4327ec(_NGUITools_TypeInfo_12d53c8);
    }
    lVar24 = native_NGUITools__AddWidget_object__4a528c
                       (uVar12,0x7fffffff,_Method_NGUITools_AddWidget_UITexture____12e56e8);
    *plVar25 = lVar24;
    native_sub_4326e0(plVar25,lVar24);
    if (*plVar25 == 0) goto LAB_009f2784;
    native_UnityEngine_Object__set_name_8e9c08(*plVar25,_StringLiteral_Input_Caret_12ee890,0);
    plVar15 = (long *)*plVar25;
    if (plVar15 == (long *)0x0) goto LAB_009f2784;
    (**(code **)(*plVar15 + 0x338))(plVar15,*plVar16,*(undefined8 *)(*plVar15 + 0x340));
    if (*plVar25 == 0) goto LAB_009f2784;
    *(undefined1 *)(*plVar25 + 0x100) = 0;
    plVar16 = (long *)*plVar27;
    if (plVar16 == (long *)0x0) goto LAB_009f2784;
    plVar15 = (long *)*plVar25;
    uVar11 = (**(code **)(*plVar16 + 0x2a8))(plVar16,*(undefined8 *)(*plVar16 + 0x2b0));
    if (plVar15 == (long *)0x0) goto LAB_009f2784;
    (**(code **)(*plVar15 + 0x2b8))(plVar15,uVar11,*(undefined8 *)(*plVar15 + 0x2c0));
    if (*plVar27 == 0) goto LAB_009f2784;
    lVar24 = *plVar25;
    uVar12 = native_UIRect__get_cachedTransform_c27c58(*plVar27,0);
    if (lVar24 == 0) goto LAB_009f2784;
    native_UIRect__SetAnchor_c2ea60(lVar24,uVar12,0);
  }
  if (*plVar25 == 0) goto LAB_009f2784;
  lVar24 = *plVar27;
  uVar12 = *(undefined8 *)(*plVar25 + 0xf8);
  if (iVar23 == iVar9) {
    if (lVar24 == 0) goto LAB_009f2784;
    native_UILabel__PrintOverlay_aec838
              ((int)param_1[0xb],*(undefined4 *)((long)param_1 + 0x5c),(int)param_1[0xc],
               *(undefined4 *)((long)param_1 + 100),(int)param_1[0xd],
               *(undefined4 *)((long)param_1 + 0x6c),(int)param_1[0xe],
               *(undefined4 *)((long)param_1 + 0x74),lVar24,iVar23,iVar23,uVar12,0,0);
    lVar24 = param_1[0x19];
    if (((*(byte *)(_UnityEngine_Object_TypeInfo_12d54e0 + 0x133) >> 2 & 1) != 0) &&
       (*(int *)(_UnityEngine_Object_TypeInfo_12d54e0 + 0xe0) == 0)) {
      native_sub_4327ec();
    }
    uVar17 = native_UnityEngine_Object__op_Inequality_8d76fc(lVar24,0,0);
    if ((uVar17 & 1) != 0) {
      lVar24 = param_1[0x19];
      if (lVar24 == 0) goto LAB_009f2784;
      uVar6 = 0;
      goto LAB_009f25b0;
    }
  }
  else {
    if ((param_1[0x19] == 0) || (lVar24 == 0)) goto LAB_009f2784;
    native_UILabel__PrintOverlay_aec838
              ((int)param_1[0xb],*(undefined4 *)((long)param_1 + 0x5c),(int)param_1[0xc],
               *(undefined4 *)((long)param_1 + 100),(int)param_1[0xd],
               *(undefined4 *)((long)param_1 + 0x6c),(int)param_1[0xe],
               *(undefined4 *)((long)param_1 + 0x74),lVar24,iVar23,iVar9,uVar12,
               *(undefined8 *)(param_1[0x19] + 0xf8),0);
    lVar24 = param_1[0x19];
    if ((lVar24 == 0) || (*(long *)(lVar24 + 0xf8) == 0)) goto LAB_009f2784;
    uVar6 = native_UIGeometry__get_hasVertices_9ef420();
    uVar6 = uVar6 & 1;
LAB_009f25b0:
    native_UnityEngine_Behaviour__set_enabled_8d7b0c(lVar24,uVar6,0);
  }
  fVar28 = (float)native_RealTime__get_time_72d024(0);
  *(float *)(param_1 + 0x1c) = fVar28 + 0.5;
  if (param_1[3] != 0) {
    *(undefined4 *)((long)param_1 + 0xe4) = *(undefined4 *)(param_1[3] + 0x8c);
    return;
  }
LAB_009f2784:
                    /* WARNING: Subroutine does not return */
  native_sub_432810();
}



/* UIInput$$OnDrag @ 0x9f5abc
 * void UIInput__OnDrag (UIInput_o* __this, UnityEngine_Vector2_o delta, const MethodInfo* method); */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* UIInput$$OnDrag
   void UIInput__OnDrag (UIInput_o* __this, UnityEngine_Vector2_o delta, const MethodInfo* method);
    */

void native_UIInput__OnDrag_9f5abc(long *param_1)

{
  long lVar1;
  long lVar2;
  long lVar3;
  bool bVar4;
  ushort uVar5;
  uint uVar6;
  uint uVar7;
  undefined4 uVar8;
  int iVar9;
  int iVar10;
  undefined4 uVar11;
  undefined8 uVar12;
  undefined8 *puVar13;
  undefined8 uVar14;
  long *plVar15;
  long *plVar16;
  ulong uVar17;
  int iVar18;
  long lVar19;
  long lVar20;
  int *piVar21;
  ushort uVar22;
  int iVar23;
  long lVar24;
  long *plVar25;
  long *plVar26;
  long *plVar27;
  float fVar28;
  
  if ((bRam0000000001341990 & 1) == 0) {
    native_sub_43273c(&UnityEngine_Object_TypeInfo_12d54e0);
    native_sub_43273c(&UICamera_TypeInfo_12d6410);
    bRam0000000001341990 = 1;
  }
  lVar24 = param_1[3];
  if (((*(byte *)(_UnityEngine_Object_TypeInfo_12d54e0 + 0x133) >> 2 & 1) != 0) &&
     (*(int *)(_UnityEngine_Object_TypeInfo_12d54e0 + 0xe0) == 0)) {
    native_sub_4327ec();
  }
  uVar17 = native_UnityEngine_Object__op_Inequality_8d76fc(lVar24,0,0);
  if ((uVar17 & 1) == 0) {
    return;
  }
  if (((*(byte *)(_UICamera_TypeInfo_12d6410 + 0x133) >> 2 & 1) != 0) &&
     (*(int *)(_UICamera_TypeInfo_12d6410 + 0xe0) == 0)) {
    native_sub_4327ec();
  }
  iVar10 = native_UICamera__get_currentScheme_c92518(0);
  if (iVar10 != 0) {
    if (((*(byte *)(_UICamera_TypeInfo_12d6410 + 0x133) >> 2 & 1) != 0) &&
       (*(int *)(_UICamera_TypeInfo_12d6410 + 0xe0) == 0)) {
      native_sub_4327ec();
    }
    iVar10 = native_UICamera__get_currentScheme_c92518(0);
    if (iVar10 != 1) {
      return;
    }
  }
  uVar11 = native_UIInput__GetCharUnderMouse_9f57ec(param_1);
  if ((bRam0000000001341980 & 1) == 0) {
    native_sub_43273c(&UIInput_TypeInfo_12d6450);
    bRam0000000001341980 = 1;
  }
  uVar17 = native_UIInput__get_isSelected_9f283c(param_1);
  if ((uVar17 & 1) == 0) {
    return;
  }
  if (((*(byte *)(_UIInput_TypeInfo_12d6450 + 0x133) >> 2 & 1) != 0) &&
     (*(int *)(_UIInput_TypeInfo_12d6450 + 0xe0) == 0)) {
    native_sub_4327ec();
  }
  if ((*(long *)(*(long *)(_UIInput_TypeInfo_12d6450 + 0xb8) + 0x20) != 0) &&
     (uVar17 = native_UIInput__get_inputShouldBeHidden_9f28e0(param_1), (uVar17 & 1) == 0)) {
    return;
  }
  *(undefined4 *)((long)param_1 + 0xc4) = uVar11;
  if ((bRam0000000001341994 & 1) == 0) {
    native_sub_43273c(&INGUIFont_TypeInfo_12d4c70);
    native_sub_43273c(&Method_NGUITools_AddWidget_UITexture____12e56e8);
    native_sub_43273c(&NGUITools_TypeInfo_12d53c8);
    native_sub_43273c(&UnityEngine_Object_TypeInfo_12d54e0);
    native_sub_43273c(&UnityEngine_Texture2D_TypeInfo_12d61f0);
    native_sub_43273c(&UIInput_TypeInfo_12d6450);
    native_sub_43273c(&StringLiteral_x_12f6b98);
    native_sub_43273c(&StringLiteral__12eaac0);
    native_sub_43273c(&StringLiteral___12eb5f0);
    native_sub_43273c(&StringLiteral_Input_Caret_12ee890);
    native_sub_43273c(&StringLiteral_Input_Highlight_12ee898);
    bRam0000000001341994 = 1;
  }
  plVar27 = param_1 + 3;
  lVar24 = *plVar27;
  if (((*(byte *)(_UnityEngine_Object_TypeInfo_12d54e0 + 0x133) >> 2 & 1) != 0) &&
     (*(int *)(_UnityEngine_Object_TypeInfo_12d54e0 + 0xe0) == 0)) {
    native_sub_4327ec();
  }
  uVar17 = native_UnityEngine_Object__op_Inequality_8d76fc(lVar24,0,0);
  if ((uVar17 & 1) == 0) {
    return;
  }
  if (*(char *)((long)param_1 + 0xb4) != '\0') {
    native_UIInput__Init_9f1988(param_1);
  }
  uVar6 = native_UIInput__get_isSelected_9f283c(param_1);
  if (*(char *)((long)param_1 + 0xb4) != '\0') {
    native_UIInput__Init_9f1988(param_1);
  }
  lVar24 = param_1[0x12];
  uVar17 = native_System_String__IsNullOrEmpty_b09430(lVar24,0);
  if ((uVar17 & 1) == 0) {
    lVar19 = *plVar27;
    uVar7 = 0;
LAB_009f1c84:
    lVar20 = 0x48;
    lVar1 = 0x4c;
    lVar2 = 0x50;
    lVar3 = 0x54;
  }
  else {
    uVar12 = native_UnityEngine_Input__get_compositionString_dbdf20(0);
    uVar7 = native_System_String__IsNullOrEmpty_b09430(uVar12,0);
    lVar19 = *plVar27;
    if (((uVar6 | uVar7 ^ 0xffffffff) & 1) != 0) goto LAB_009f1c84;
    lVar20 = 0xa0;
    lVar1 = 0xa4;
    lVar2 = 0xa8;
    lVar3 = 0xac;
    uVar7 = 1;
  }
  if (lVar19 == 0) goto LAB_009f2784;
  native_UIWidget__set_color_947adc
            (*(undefined4 *)((long)param_1 + lVar20),*(undefined4 *)((long)param_1 + lVar1),
             *(undefined4 *)((long)param_1 + lVar2),*(undefined4 *)((long)param_1 + lVar3),lVar19,0)
  ;
  uVar12 = _StringLiteral___12eb5f0;
  lVar19 = _StringLiteral__12eaac0;
  if ((uVar7 & 1) == 0) {
    if ((int)param_1[4] == 2) {
      if (*plVar27 == 0) goto LAB_009f2784;
      plVar16 = (long *)native_UILabel__get_font_ae77e8(*plVar27,0);
      uVar14 = uVar12;
      if (plVar16 != (long *)0x0) {
        lVar20 = *plVar16;
        if ((ulong)*(ushort *)(lVar20 + 0x12a) != 0) {
          uVar17 = 0;
          piVar21 = (int *)(*(long *)(lVar20 + 0xb0) + 8);
          do {
            if (*(long *)(piVar21 + -2) == _INGUIFont_TypeInfo_12d4c70) {
              puVar13 = (undefined8 *)(lVar20 + (long)(*piVar21 + 2) * 0x10 + 0x138);
              goto LAB_009f1da4;
            }
            uVar17 = uVar17 + 1;
            piVar21 = piVar21 + 4;
          } while (uVar17 < *(ushort *)(lVar20 + 0x12a));
        }
        puVar13 = (undefined8 *)native_sub_3c9b34(plVar16,_INGUIFont_TypeInfo_12d4c70,2);
LAB_009f1da4:
        lVar20 = (*(code *)*puVar13)(plVar16,puVar13[1]);
        if (lVar20 != 0) {
          lVar20 = *plVar16;
          if ((ulong)*(ushort *)(lVar20 + 0x12a) != 0) {
            uVar17 = 0;
            piVar21 = (int *)(*(long *)(lVar20 + 0xb0) + 8);
            do {
              if (*(long *)(piVar21 + -2) == _INGUIFont_TypeInfo_12d4c70) {
                puVar13 = (undefined8 *)(lVar20 + (long)(*piVar21 + 2) * 0x10 + 0x138);
                goto LAB_009f1e0c;
              }
              uVar17 = uVar17 + 1;
              piVar21 = piVar21 + 4;
            } while (uVar17 < *(ushort *)(lVar20 + 0x12a));
          }
          puVar13 = (undefined8 *)native_sub_3c9b34(plVar16,_INGUIFont_TypeInfo_12d4c70,2);
LAB_009f1e0c:
          lVar20 = (*(code *)*puVar13)(plVar16,puVar13[1]);
          if (lVar20 == 0) goto LAB_009f2784;
          lVar20 = native_BMFont__GetGlyph_dd1c0c(lVar20,0x2a,0);
          uVar14 = _StringLiteral_x_12f6b98;
          if (lVar20 != 0) {
            uVar14 = uVar12;
          }
        }
      }
      if (lVar24 == 0) goto LAB_009f2784;
      iVar10 = *(int *)(lVar24 + 0x10);
      if (0 < iVar10) {
        do {
          lVar19 = native_System_String__Concat_afbd68(lVar19,uVar14,0);
          iVar10 = iVar10 + -1;
        } while (iVar10 != 0);
      }
      lVar24 = lVar19;
      if ((uVar6 & 1) == 0) goto LAB_009f1ec8;
LAB_009f1e6c:
      if (lVar24 == 0) goto LAB_009f2784;
      uVar11 = *(undefined4 *)(lVar24 + 0x10);
      uVar8 = native_UIInput__get_cursorPosition_9f3090(param_1);
      iVar10 = native_UnityEngine_Mathf__Min_8e4c18(uVar11,uVar8,0);
      uVar12 = native_System_String__Substring_b09fac(lVar24,0,iVar10,0);
      uVar14 = native_UnityEngine_Input__get_compositionString_dbdf20(0);
      uVar12 = native_System_String__Concat_afbd68(uVar12,uVar14,0);
    }
    else {
      if ((uVar6 & 1) != 0) goto LAB_009f1e6c;
LAB_009f1ec8:
      if (lVar24 == 0) goto LAB_009f2784;
      uVar12 = native_System_String__Substring_b09fac(lVar24,0,0,0);
      iVar10 = 0;
    }
    uVar14 = native_System_String__Substring_b09fac
                       (lVar24,iVar10,*(int *)(lVar24 + 0x10) - iVar10,0);
    lVar24 = native_System_String__Concat_afbd68(uVar12,uVar14,0);
    if ((uVar6 & 1) == 0) {
LAB_009f1fb0:
      if (((*(byte *)(_UIInput_TypeInfo_12d6450 + 0x133) >> 2 & 1) != 0) &&
         (*(int *)(_UIInput_TypeInfo_12d6450 + 0xe0) == 0)) {
        native_sub_4327ec();
      }
      *(undefined4 *)(*(long *)(_UIInput_TypeInfo_12d6450 + 0xb8) + 0x10) = 0;
      lVar19 = *plVar27;
      if (lVar19 == 0) goto LAB_009f2784;
      uVar11 = (undefined4)param_1[0x17];
      goto LAB_009f1fe8;
    }
    lVar19 = *plVar27;
    if (lVar19 == 0) goto LAB_009f2784;
    if ((*(int *)(lVar19 + 0x1e4) != 1) || (*(int *)(lVar19 + 0x1c0) != 1)) goto LAB_009f1fb0;
    iVar9 = native_UILabel__CalculateOffsetToFit_aedc24(lVar19,lVar24,0);
    uVar5 = *(ushort *)(_UIInput_TypeInfo_12d6450 + 0x132);
    uVar22 = uVar5 & 0x400;
    if (iVar9 == 0) {
      if (((uVar5 & 0x400) != 0) && (*(int *)(_UIInput_TypeInfo_12d6450 + 0xe0) == 0)) {
        native_sub_4327ec();
      }
      *(undefined4 *)(*(long *)(_UIInput_TypeInfo_12d6450 + 0xb8) + 0x10) = 0;
      lVar19 = *plVar27;
      if (lVar19 == 0) goto LAB_009f2784;
      uVar11 = (undefined4)param_1[0x17];
LAB_009f2678:
      native_UILabel__set_alignment_ae8458(lVar19,uVar11,0);
    }
    else {
      if (((uVar5 & 0x400) != 0) && (*(int *)(_UIInput_TypeInfo_12d6450 + 0xe0) == 0)) {
        native_sub_4327ec();
        uVar22 = *(ushort *)(_UIInput_TypeInfo_12d6450 + 0x132) & 0x400;
      }
      piVar21 = (int *)(*(long *)(_UIInput_TypeInfo_12d6450 + 0xb8) + 0x10);
      iVar23 = *piVar21;
      if (iVar10 < iVar23) {
        if ((uVar22 != 0) && (*(int *)(_UIInput_TypeInfo_12d6450 + 0xe0) == 0)) {
          native_sub_4327ec();
          piVar21 = (int *)(*(long *)(_UIInput_TypeInfo_12d6450 + 0xb8) + 0x10);
        }
        *piVar21 = iVar10;
LAB_009f266c:
        lVar19 = *plVar27;
        if (lVar19 == 0) goto LAB_009f2784;
        uVar11 = 1;
        goto LAB_009f2678;
      }
      if ((uVar22 != 0) && (*(int *)(_UIInput_TypeInfo_12d6450 + 0xe0) == 0)) {
        native_sub_4327ec();
        piVar21 = (int *)(*(long *)(_UIInput_TypeInfo_12d6450 + 0xb8) + 0x10);
        iVar23 = *piVar21;
      }
      if (iVar9 < iVar23) {
        if (((*(byte *)(_UIInput_TypeInfo_12d6450 + 0x133) >> 2 & 1) != 0) &&
           (*(int *)(_UIInput_TypeInfo_12d6450 + 0xe0) == 0)) {
          native_sub_4327ec();
          piVar21 = (int *)(*(long *)(_UIInput_TypeInfo_12d6450 + 0xb8) + 0x10);
        }
        *piVar21 = iVar9;
        goto LAB_009f266c;
      }
      if (lVar24 == 0) goto LAB_009f2784;
      lVar19 = *plVar27;
      uVar12 = native_System_String__Substring_b09fac(lVar24,0,iVar10,0);
      if (lVar19 == 0) goto LAB_009f2784;
      iVar10 = native_UILabel__CalculateOffsetToFit_aedc24(lVar19,uVar12,0);
      if (((*(byte *)(_UIInput_TypeInfo_12d6450 + 0x133) >> 2 & 1) != 0) &&
         (*(int *)(_UIInput_TypeInfo_12d6450 + 0xe0) == 0)) {
        native_sub_4327ec(_UIInput_TypeInfo_12d6450);
      }
      piVar21 = (int *)(*(long *)(_UIInput_TypeInfo_12d6450 + 0xb8) + 0x10);
      if (*piVar21 < iVar10) {
        if (((*(byte *)(_UIInput_TypeInfo_12d6450 + 0x133) >> 2 & 1) != 0) &&
           (*(int *)(_UIInput_TypeInfo_12d6450 + 0xe0) == 0)) {
          native_sub_4327ec(_UIInput_TypeInfo_12d6450);
          piVar21 = (int *)(*(long *)(_UIInput_TypeInfo_12d6450 + 0xb8) + 0x10);
        }
        *piVar21 = iVar10;
        lVar19 = *plVar27;
        if (lVar19 == 0) goto LAB_009f2784;
        uVar11 = 3;
        goto LAB_009f2678;
      }
    }
    if (((*(byte *)(_UIInput_TypeInfo_12d6450 + 0x133) >> 2 & 1) != 0) &&
       (*(int *)(_UIInput_TypeInfo_12d6450 + 0xe0) == 0)) {
      native_sub_4327ec();
    }
    iVar10 = *(int *)(*(long *)(_UIInput_TypeInfo_12d6450 + 0xb8) + 0x10);
    if (iVar10 != 0) {
      if (((*(byte *)(_UIInput_TypeInfo_12d6450 + 0x133) >> 2 & 1) != 0) &&
         (*(int *)(_UIInput_TypeInfo_12d6450 + 0xe0) == 0)) {
        native_sub_4327ec();
        iVar10 = *(int *)(*(long *)(_UIInput_TypeInfo_12d6450 + 0xb8) + 0x10);
      }
      if (lVar24 == 0) goto LAB_009f2784;
      lVar24 = native_System_String__Substring_b09fac
                         (lVar24,iVar10,*(int *)(lVar24 + 0x10) - iVar10,0);
    }
  }
  else {
    lVar19 = *plVar27;
    if (lVar19 == 0) goto LAB_009f2784;
    uVar11 = (undefined4)param_1[0x17];
    plVar16 = (long *)&StringLiteral__12eaac0;
    if ((uVar6 & 1) == 0) {
      plVar16 = param_1 + 0x13;
    }
    lVar24 = *plVar16;
LAB_009f1fe8:
    native_UILabel__set_alignment_ae8458(lVar19,uVar11,0);
  }
  if (*plVar27 == 0) goto LAB_009f2784;
  native_UILabel__set_text_ae81a8(*plVar27,lVar24,0);
  if ((uVar6 & 1) == 0) {
LAB_009f2280:
                    /* WARNING: Could not recover jumptable at 0x009f22a4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (**(code **)(*param_1 + 0x1c8))(param_1,*(undefined8 *)(*param_1 + 0x1d0));
    return;
  }
  if (((*(byte *)(_UIInput_TypeInfo_12d6450 + 0x133) >> 2 & 1) != 0) &&
     (*(int *)(_UIInput_TypeInfo_12d6450 + 0xe0) == 0)) {
    native_sub_4327ec();
  }
  if ((*(long *)(*(long *)(_UIInput_TypeInfo_12d6450 + 0xb8) + 0x20) != 0) &&
     (uVar17 = native_UIInput__get_inputShouldBeHidden_9f28e0(param_1), (uVar17 & 1) == 0))
  goto LAB_009f2280;
  lVar24 = param_1[0x18];
  if (((*(byte *)(_UIInput_TypeInfo_12d6450 + 0x133) >> 2 & 1) != 0) &&
     (*(int *)(_UIInput_TypeInfo_12d6450 + 0xe0) == 0)) {
    native_sub_4327ec();
  }
  iVar10 = *(int *)(*(long *)(_UIInput_TypeInfo_12d6450 + 0xb8) + 0x10);
  plVar16 = param_1 + 0x1b;
  lVar19 = *plVar16;
  iVar9 = *(int *)((long)param_1 + 0xc4);
  if (((*(byte *)(_UnityEngine_Object_TypeInfo_12d54e0 + 0x133) >> 2 & 1) != 0) &&
     (*(int *)(_UnityEngine_Object_TypeInfo_12d54e0 + 0xe0) == 0)) {
    native_sub_4327ec();
  }
  uVar17 = native_UnityEngine_Object__op_Equality_8e9a3c(lVar19,0,0);
  if ((uVar17 & 1) != 0) {
    lVar19 = native_sub_432808(_UnityEngine_Texture2D_TypeInfo_12d61f0);
    native_UnityEngine_Texture2D___ctor_76f4a4(lVar19,2,2,5,0,0);
    *plVar16 = lVar19;
    native_sub_4326e0(plVar16,lVar19);
    iVar23 = 0;
    do {
      iVar18 = 0;
      do {
        lVar19 = *plVar16;
        native_UnityEngine_Color__get_white_8d9e10(0);
        if (lVar19 == 0) goto LAB_009f2784;
        native_UnityEngine_Texture2D__SetPixel_76f52c(lVar19,iVar18,iVar23,0);
        bVar4 = iVar18 == 0;
        iVar18 = 1;
      } while (bVar4);
      bVar4 = iVar23 == 0;
      iVar23 = 1;
    } while (bVar4);
    if (*plVar16 == 0) goto LAB_009f2784;
    native_UnityEngine_Texture2D__Apply_76f804(*plVar16,0);
  }
  iVar23 = (int)lVar24 - iVar10;
  iVar9 = iVar9 - iVar10;
  if (iVar23 != iVar9) {
    plVar25 = param_1 + 0x19;
    lVar24 = *plVar25;
    if (((*(byte *)(_UnityEngine_Object_TypeInfo_12d54e0 + 0x133) >> 2 & 1) != 0) &&
       (*(int *)(_UnityEngine_Object_TypeInfo_12d54e0 + 0xe0) == 0)) {
      native_sub_4327ec();
    }
    uVar17 = native_UnityEngine_Object__op_Equality_8e9a3c(lVar24,0,0);
    if ((uVar17 & 1) == 0) {
      plVar15 = (long *)*plVar27;
      if (plVar15 == (long *)0x0) goto LAB_009f2784;
      plVar26 = (long *)*plVar25;
      uVar11 = (**(code **)(*plVar15 + 0x2a8))(plVar15,*(undefined8 *)(*plVar15 + 0x2b0));
      if (plVar26 == (long *)0x0) goto LAB_009f2784;
      (**(code **)(*plVar26 + 0x2b8))(plVar26,uVar11,*(undefined8 *)(*plVar26 + 0x2c0));
      plVar15 = (long *)*plVar25;
      if (plVar15 == (long *)0x0) goto LAB_009f2784;
      (**(code **)(*plVar15 + 0x338))(plVar15,*plVar16,*(undefined8 *)(*plVar15 + 0x340));
      plVar15 = (long *)*plVar25;
      if (plVar15 == (long *)0x0) goto LAB_009f2784;
      (**(code **)(*plVar15 + 0x378))(plVar15,*(undefined8 *)(*plVar15 + 0x380));
      if (*plVar25 == 0) goto LAB_009f2784;
      native_UnityEngine_Behaviour__set_enabled_8d7b0c(*plVar25,1,0);
    }
    else {
      if (*plVar27 == 0) goto LAB_009f2784;
      uVar12 = native_UIRect__get_cachedGameObject_c2d1c0(*plVar27,0);
      if (((*(byte *)(_NGUITools_TypeInfo_12d53c8 + 0x133) >> 2 & 1) != 0) &&
         (*(int *)(_NGUITools_TypeInfo_12d53c8 + 0xe0) == 0)) {
        native_sub_4327ec(_NGUITools_TypeInfo_12d53c8);
      }
      lVar24 = native_NGUITools__AddWidget_object__4a528c
                         (uVar12,0x7fffffff,_Method_NGUITools_AddWidget_UITexture____12e56e8);
      *plVar25 = lVar24;
      native_sub_4326e0(plVar25,lVar24);
      if (*plVar25 == 0) goto LAB_009f2784;
      native_UnityEngine_Object__set_name_8e9c08(*plVar25,_StringLiteral_Input_Highlight_12ee898,0);
      plVar15 = (long *)*plVar25;
      if (plVar15 == (long *)0x0) goto LAB_009f2784;
      (**(code **)(*plVar15 + 0x338))(plVar15,*plVar16,*(undefined8 *)(*plVar15 + 0x340));
      if (*plVar25 == 0) goto LAB_009f2784;
      *(undefined1 *)(*plVar25 + 0x100) = 0;
      plVar15 = (long *)*plVar27;
      if (plVar15 == (long *)0x0) goto LAB_009f2784;
      plVar26 = (long *)*plVar25;
      uVar11 = (**(code **)(*plVar15 + 0x2a8))(plVar15,*(undefined8 *)(*plVar15 + 0x2b0));
      if (plVar26 == (long *)0x0) goto LAB_009f2784;
      (**(code **)(*plVar26 + 0x2b8))(plVar26,uVar11,*(undefined8 *)(*plVar26 + 0x2c0));
      if (*plVar27 == 0) goto LAB_009f2784;
      lVar24 = *plVar25;
      uVar12 = native_UIRect__get_cachedTransform_c27c58(*plVar27,0);
      if (lVar24 == 0) goto LAB_009f2784;
      native_UIRect__SetAnchor_c2ea60(lVar24,uVar12,0);
    }
  }
  plVar25 = param_1 + 0x1a;
  lVar24 = *plVar25;
  if (((*(byte *)(_UnityEngine_Object_TypeInfo_12d54e0 + 0x133) >> 2 & 1) != 0) &&
     (*(int *)(_UnityEngine_Object_TypeInfo_12d54e0 + 0xe0) == 0)) {
    native_sub_4327ec();
  }
  uVar17 = native_UnityEngine_Object__op_Equality_8e9a3c(lVar24,0,0);
  if ((uVar17 & 1) == 0) {
    plVar15 = (long *)*plVar27;
    if (plVar15 == (long *)0x0) goto LAB_009f2784;
    plVar26 = (long *)*plVar25;
    uVar11 = (**(code **)(*plVar15 + 0x2a8))(plVar15,*(undefined8 *)(*plVar15 + 0x2b0));
    if (plVar26 == (long *)0x0) goto LAB_009f2784;
    (**(code **)(*plVar26 + 0x2b8))(plVar26,uVar11,*(undefined8 *)(*plVar26 + 0x2c0));
    plVar15 = (long *)*plVar25;
    if (plVar15 == (long *)0x0) goto LAB_009f2784;
    (**(code **)(*plVar15 + 0x338))(plVar15,*plVar16,*(undefined8 *)(*plVar15 + 0x340));
    plVar16 = (long *)*plVar25;
    if (plVar16 == (long *)0x0) goto LAB_009f2784;
    (**(code **)(*plVar16 + 0x378))(plVar16,*(undefined8 *)(*plVar16 + 0x380));
    if (*plVar25 == 0) goto LAB_009f2784;
    native_UnityEngine_Behaviour__set_enabled_8d7b0c(*plVar25,1,0);
  }
  else {
    if (*plVar27 == 0) goto LAB_009f2784;
    uVar12 = native_UIRect__get_cachedGameObject_c2d1c0(*plVar27,0);
    if (((*(byte *)(_NGUITools_TypeInfo_12d53c8 + 0x133) >> 2 & 1) != 0) &&
       (*(int *)(_NGUITools_TypeInfo_12d53c8 + 0xe0) == 0)) {
      native_sub_4327ec(_NGUITools_TypeInfo_12d53c8);
    }
    lVar24 = native_NGUITools__AddWidget_object__4a528c
                       (uVar12,0x7fffffff,_Method_NGUITools_AddWidget_UITexture____12e56e8);
    *plVar25 = lVar24;
    native_sub_4326e0(plVar25,lVar24);
    if (*plVar25 == 0) goto LAB_009f2784;
    native_UnityEngine_Object__set_name_8e9c08(*plVar25,_StringLiteral_Input_Caret_12ee890,0);
    plVar15 = (long *)*plVar25;
    if (plVar15 == (long *)0x0) goto LAB_009f2784;
    (**(code **)(*plVar15 + 0x338))(plVar15,*plVar16,*(undefined8 *)(*plVar15 + 0x340));
    if (*plVar25 == 0) goto LAB_009f2784;
    *(undefined1 *)(*plVar25 + 0x100) = 0;
    plVar16 = (long *)*plVar27;
    if (plVar16 == (long *)0x0) goto LAB_009f2784;
    plVar15 = (long *)*plVar25;
    uVar11 = (**(code **)(*plVar16 + 0x2a8))(plVar16,*(undefined8 *)(*plVar16 + 0x2b0));
    if (plVar15 == (long *)0x0) goto LAB_009f2784;
    (**(code **)(*plVar15 + 0x2b8))(plVar15,uVar11,*(undefined8 *)(*plVar15 + 0x2c0));
    if (*plVar27 == 0) goto LAB_009f2784;
    lVar24 = *plVar25;
    uVar12 = native_UIRect__get_cachedTransform_c27c58(*plVar27,0);
    if (lVar24 == 0) goto LAB_009f2784;
    native_UIRect__SetAnchor_c2ea60(lVar24,uVar12,0);
  }
  if (*plVar25 == 0) goto LAB_009f2784;
  lVar24 = *plVar27;
  uVar12 = *(undefined8 *)(*plVar25 + 0xf8);
  if (iVar23 == iVar9) {
    if (lVar24 == 0) goto LAB_009f2784;
    native_UILabel__PrintOverlay_aec838
              ((int)param_1[0xb],*(undefined4 *)((long)param_1 + 0x5c),(int)param_1[0xc],
               *(undefined4 *)((long)param_1 + 100),(int)param_1[0xd],
               *(undefined4 *)((long)param_1 + 0x6c),(int)param_1[0xe],
               *(undefined4 *)((long)param_1 + 0x74),lVar24,iVar23,iVar23,uVar12,0,0);
    lVar24 = param_1[0x19];
    if (((*(byte *)(_UnityEngine_Object_TypeInfo_12d54e0 + 0x133) >> 2 & 1) != 0) &&
       (*(int *)(_UnityEngine_Object_TypeInfo_12d54e0 + 0xe0) == 0)) {
      native_sub_4327ec();
    }
    uVar17 = native_UnityEngine_Object__op_Inequality_8d76fc(lVar24,0,0);
    if ((uVar17 & 1) != 0) {
      lVar24 = param_1[0x19];
      if (lVar24 == 0) goto LAB_009f2784;
      uVar6 = 0;
      goto LAB_009f25b0;
    }
  }
  else {
    if ((param_1[0x19] == 0) || (lVar24 == 0)) goto LAB_009f2784;
    native_UILabel__PrintOverlay_aec838
              ((int)param_1[0xb],*(undefined4 *)((long)param_1 + 0x5c),(int)param_1[0xc],
               *(undefined4 *)((long)param_1 + 100),(int)param_1[0xd],
               *(undefined4 *)((long)param_1 + 0x6c),(int)param_1[0xe],
               *(undefined4 *)((long)param_1 + 0x74),lVar24,iVar23,iVar9,uVar12,
               *(undefined8 *)(param_1[0x19] + 0xf8),0);
    lVar24 = param_1[0x19];
    if ((lVar24 == 0) || (*(long *)(lVar24 + 0xf8) == 0)) goto LAB_009f2784;
    uVar6 = native_UIGeometry__get_hasVertices_9ef420();
    uVar6 = uVar6 & 1;
LAB_009f25b0:
    native_UnityEngine_Behaviour__set_enabled_8d7b0c(lVar24,uVar6,0);
  }
  fVar28 = (float)native_RealTime__get_time_72d024(0);
  *(float *)(param_1 + 0x1c) = fVar28 + 0.5;
  if (param_1[3] != 0) {
    *(undefined4 *)((long)param_1 + 0xe4) = *(undefined4 *)(param_1[3] + 0x8c);
    return;
  }
LAB_009f2784:
                    /* WARNING: Subroutine does not return */
  native_sub_432810();
}



/* UIInput$$OnDisable @ 0x9f5bac
 * void UIInput__OnDisable (UIInput_o* __this, const MethodInfo* method); */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* UIInput$$OnDisable
   void UIInput__OnDisable (UIInput_o* __this, const MethodInfo* method); */

void native_UIInput__OnDisable_9f5bac(long *param_1)

{
  undefined8 uVar1;
  undefined8 *puVar2;
  long *plVar3;
  ulong uVar4;
  long lVar5;
  long *plVar6;
  long lVar7;
  undefined8 uVar8;
  
  if ((bRam0000000001341991 & 1) == 0) {
    native_sub_43273c(&UnityEngine_Object_TypeInfo_12d54e0);
    native_sub_43273c(&UIInput_TypeInfo_12d6450);
    bRam0000000001341991 = 1;
  }
  (**(code **)(*param_1 + 0x1c8))(param_1,*(undefined8 *)(*param_1 + 0x1d0));
  if (((*(byte *)(_UIInput_TypeInfo_12d6450 + 0x133) >> 2 & 1) != 0) &&
     (*(int *)(_UIInput_TypeInfo_12d6450 + 0xe0) == 0)) {
    native_sub_4327ec();
  }
  uVar8 = *(undefined8 *)(*(long *)(_UIInput_TypeInfo_12d6450 + 0xb8) + 8);
  if (((*(byte *)(_UnityEngine_Object_TypeInfo_12d54e0 + 0x133) >> 2 & 1) != 0) &&
     (*(int *)(_UnityEngine_Object_TypeInfo_12d54e0 + 0xe0) == 0)) {
    native_sub_4327ec(_UnityEngine_Object_TypeInfo_12d54e0);
  }
  uVar4 = native_UnityEngine_Object__op_Equality_8e9a3c(uVar8,param_1,0);
  if ((uVar4 & 1) == 0) {
    return;
  }
  if ((bRam0000000001341986 & 1) == 0) {
    native_sub_43273c(&NGUITools_TypeInfo_12d53c8);
    native_sub_43273c(&UnityEngine_Object_TypeInfo_12d54e0);
    native_sub_43273c(&UIInput_TypeInfo_12d6450);
    bRam0000000001341986 = 1;
  }
  if (*(char *)((long)param_1 + 0xb4) != '\0') {
    native_UIInput__Init_9f1988(param_1);
  }
  lVar7 = param_1[3];
  if (((*(byte *)(_UnityEngine_Object_TypeInfo_12d54e0 + 0x133) >> 2 & 1) != 0) &&
     (*(int *)(_UnityEngine_Object_TypeInfo_12d54e0 + 0xe0) == 0)) {
    native_sub_4327ec();
  }
  uVar4 = native_UnityEngine_Object__op_Inequality_8d76fc(lVar7,0,0);
  if ((uVar4 & 1) != 0) {
    if (param_1[3] == 0) goto LAB_009f3f98;
    native_UILabel__set_overflowEllipsis_ae87d0(param_1[3],(char)param_1[0x21],0);
  }
  lVar7 = param_1[3];
  if (((*(byte *)(_UnityEngine_Object_TypeInfo_12d54e0 + 0x133) >> 2 & 1) != 0) &&
     (*(int *)(_UnityEngine_Object_TypeInfo_12d54e0 + 0xe0) == 0)) {
    native_sub_4327ec();
  }
  uVar4 = native_UnityEngine_Object__op_Inequality_8d76fc(lVar7,0,0);
  if ((uVar4 & 1) != 0) {
    if (((*(byte *)(_NGUITools_TypeInfo_12d53c8 + 0x133) >> 2 & 1) != 0) &&
       (*(int *)(_NGUITools_TypeInfo_12d53c8 + 0xe0) == 0)) {
      native_sub_4327ec();
    }
    uVar4 = native_NGUITools__GetActive_72d02c(param_1,0);
    if ((uVar4 & 1) == 0) goto LAB_009f3f30;
    if (*(char *)((long)param_1 + 0xb4) != '\0') {
      native_UIInput__Init_9f1988(param_1);
    }
    plVar3 = param_1 + 0x12;
    native_sub_4326e0(plVar3,*plVar3);
    if (((*(byte *)(_UIInput_TypeInfo_12d6450 + 0x133) >> 2 & 1) != 0) &&
       (*(int *)(_UIInput_TypeInfo_12d6450 + 0xe0) == 0)) {
      native_sub_4327ec();
    }
    plVar6 = (long *)(_UIInput_TypeInfo_12d6450 + 0xb8);
    lVar7 = *plVar6;
    if (*(long *)(lVar7 + 0x20) != 0) {
      if (((*(byte *)(_UIInput_TypeInfo_12d6450 + 0x133) >> 2 & 1) != 0) &&
         (*(int *)(_UIInput_TypeInfo_12d6450 + 0xe0) == 0)) {
        native_sub_4327ec();
        plVar6 = (long *)(_UIInput_TypeInfo_12d6450 + 0xb8);
        lVar7 = *plVar6;
      }
      *(undefined1 *)(lVar7 + 0x28) = 0;
      if (*(long *)(*plVar6 + 0x20) == 0) goto LAB_009f3f98;
      native_UnityEngine_TouchScreenKeyboard__set_active_77110c(*(long *)(*plVar6 + 0x20),0,0);
      puVar2 = (undefined8 *)(*(long *)(_UIInput_TypeInfo_12d6450 + 0xb8) + 0x20);
      *puVar2 = 0;
      native_sub_4326e0(puVar2,0);
    }
    uVar4 = native_System_String__IsNullOrEmpty_b09430(param_1[0x12],0);
    lVar7 = param_1[3];
    if ((uVar4 & 1) == 0) {
      if (lVar7 == 0) goto LAB_009f3f98;
      native_UILabel__set_text_ae81a8(lVar7,*plVar3,0);
    }
    else {
      if (lVar7 == 0) goto LAB_009f3f98;
      native_UILabel__set_text_ae81a8(lVar7,param_1[0x13],0);
      if (param_1[3] == 0) goto LAB_009f3f98;
      native_UIWidget__set_color_947adc
                ((int)param_1[0x14],*(undefined4 *)((long)param_1 + 0xa4),(int)param_1[0x15],
                 *(undefined4 *)((long)param_1 + 0xac),param_1[3],0);
    }
    native_UnityEngine_Input__set_imeCompositionMode_dbdee0(0,0);
    if (param_1[3] == 0) {
LAB_009f3f98:
                    /* WARNING: Subroutine does not return */
      native_sub_432810();
    }
    native_UILabel__set_alignment_ae8458(param_1[3],(int)param_1[0x17],0);
  }
LAB_009f3f30:
  if (((*(byte *)(_UIInput_TypeInfo_12d6450 + 0x133) >> 2 & 1) != 0) &&
     (*(int *)(_UIInput_TypeInfo_12d6450 + 0xe0) == 0)) {
    native_sub_4327ec();
  }
  puVar2 = (undefined8 *)(*(long *)(_UIInput_TypeInfo_12d6450 + 0xb8) + 8);
  *puVar2 = 0;
  native_sub_4326e0(puVar2,0);
  native_UIInput__UpdateLabel_9f1b24(param_1);
  if (*(char *)((long)param_1 + 0x2e) == '\0') {
    return;
  }
  if ((bRam0000000001341993 & 1) == 0) {
    native_sub_43273c(&EventDelegate_TypeInfo_12d4590);
    native_sub_43273c(&NGUITools_TypeInfo_12d53c8);
    native_sub_43273c(&UnityEngine_Object_TypeInfo_12d54e0);
    native_sub_43273c(&UIInput_TypeInfo_12d6450);
    bRam0000000001341993 = 1;
  }
  if (((*(byte *)(_NGUITools_TypeInfo_12d53c8 + 0x133) >> 2 & 1) != 0) &&
     (*(int *)(_NGUITools_TypeInfo_12d53c8 + 0xe0) == 0)) {
    native_sub_4327ec();
  }
  uVar4 = native_NGUITools__GetActive_72d02c(param_1,0);
  if ((uVar4 & 1) == 0) {
    return;
  }
  if (*(char *)((long)param_1 + 0xb4) != '\0') {
    native_UIInput__Init_9f1988(param_1);
  }
  native_sub_4326e0(param_1 + 0x12,param_1[0x12]);
  if (((*(byte *)(_UIInput_TypeInfo_12d6450 + 0x133) >> 2 & 1) != 0) &&
     (*(int *)(_UIInput_TypeInfo_12d6450 + 0xe0) == 0)) {
    native_sub_4327ec();
  }
  uVar8 = **(undefined8 **)(_UIInput_TypeInfo_12d6450 + 0xb8);
  if (((*(byte *)(_UnityEngine_Object_TypeInfo_12d54e0 + 0x133) >> 2 & 1) != 0) &&
     (*(int *)(_UnityEngine_Object_TypeInfo_12d54e0 + 0xe0) == 0)) {
    native_sub_4327ec(_UnityEngine_Object_TypeInfo_12d54e0);
  }
  uVar4 = native_UnityEngine_Object__op_Equality_8e9a3c(uVar8,0,0);
  if ((uVar4 & 1) != 0) {
    if (((*(byte *)(_UIInput_TypeInfo_12d6450 + 0x133) >> 2 & 1) != 0) &&
       (*(int *)(_UIInput_TypeInfo_12d6450 + 0xe0) == 0)) {
      native_sub_4327ec();
    }
    plVar3 = *(long **)(_UIInput_TypeInfo_12d6450 + 0xb8);
    *plVar3 = (long)param_1;
    native_sub_4326e0(plVar3,param_1);
    lVar7 = param_1[0xf];
    if (((*(byte *)(_EventDelegate_TypeInfo_12d4590 + 0x133) >> 2 & 1) != 0) &&
       (*(int *)(_EventDelegate_TypeInfo_12d4590 + 0xe0) == 0)) {
      native_sub_4327ec();
    }
    native_EventDelegate__Execute_deecbc(lVar7,0);
    puVar2 = *(undefined8 **)(_UIInput_TypeInfo_12d6450 + 0xb8);
    *puVar2 = 0;
    native_sub_4326e0(puVar2,0);
  }
  lVar7 = param_1[0x12];
  uVar4 = native_System_String__IsNullOrEmpty_b09430(param_1[7],0);
  if ((uVar4 & 1) != 0) {
    return;
  }
  uVar4 = native_System_String__IsNullOrEmpty_b09430(lVar7,0);
  lVar5 = param_1[7];
  if ((uVar4 & 1) != 0) {
    if (pcRam000000000133f7a8 == (code *)0x0) {
      pcRam000000000133f7a8 = (code *)native_sub_4326f0(&UNK_00e27b88);
    }
                    /* WARNING: Could not recover jumptable at 0x00762088. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*pcRam000000000133f7a8)(lVar5);
    return;
  }
  if (pcRam000000000133f778 == (code *)0x0) {
    pcRam000000000133f778 = (code *)native_sub_4326f0(&UNK_00e27a58,lVar7,0);
  }
  uVar4 = (*pcRam000000000133f778)(lVar5,lVar7);
  if ((uVar4 & 1) != 0) {
    return;
  }
  native_sub_432740(&UnityEngine_PlayerPrefsException_TypeInfo_12d56f8);
  uVar8 = native_sub_432808();
  uVar1 = native_sub_432740(&StringLiteral_Could_not_store_preference_value_12ed488);
  native_UnityEngine_PlayerPrefsException___ctor_761cf8(uVar8,uVar1);
  uVar1 = native_sub_432740(&Method_UnityEngine_PlayerPrefs_SetString___12e5df0);
                    /* WARNING: Subroutine does not return */
  native_sub_4327dc(uVar8,uVar1);
}



/* UIInput$$Cleanup @ 0x9f5c78
 * void UIInput__Cleanup (UIInput_o* __this, const MethodInfo* method); */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* UIInput$$Cleanup
   void UIInput__Cleanup (UIInput_o* __this, const MethodInfo* method); */

void native_UIInput__Cleanup_9f5c78(long param_1)

{
  ulong *puVar1;
  char cVar2;
  bool bVar3;
  ulong uVar4;
  undefined8 *puVar5;
  undefined8 uVar6;
  
  if ((bRam0000000001341992 & 1) == 0) {
    native_sub_43273c(&NGUITools_TypeInfo_12d53c8);
    native_sub_43273c(&UnityEngine_Object_TypeInfo_12d54e0);
    bRam0000000001341992 = 1;
  }
  uVar6 = *(undefined8 *)(param_1 + 200);
  if (((*(byte *)(_UnityEngine_Object_TypeInfo_12d54e0 + 0x133) >> 2 & 1) != 0) &&
     (*(int *)(_UnityEngine_Object_TypeInfo_12d54e0 + 0xe0) == 0)) {
    native_sub_4327ec();
  }
  uVar4 = native_UnityEngine_Object__op_Implicit_8e1b98(uVar6,0);
  if ((uVar4 & 1) != 0) {
    if (*(long *)(param_1 + 200) == 0) goto LAB_009f5dc8;
    native_UnityEngine_Behaviour__set_enabled_8d7b0c(*(long *)(param_1 + 200),0,0);
  }
  uVar6 = *(undefined8 *)(param_1 + 0xd0);
  if (((*(byte *)(_UnityEngine_Object_TypeInfo_12d54e0 + 0x133) >> 2 & 1) != 0) &&
     (*(int *)(_UnityEngine_Object_TypeInfo_12d54e0 + 0xe0) == 0)) {
    native_sub_4327ec();
  }
  uVar4 = native_UnityEngine_Object__op_Implicit_8e1b98(uVar6,0);
  if ((uVar4 & 1) != 0) {
    if (*(long *)(param_1 + 0xd0) == 0) {
LAB_009f5dc8:
                    /* WARNING: Subroutine does not return */
      native_sub_432810();
    }
    native_UnityEngine_Behaviour__set_enabled_8d7b0c(*(long *)(param_1 + 0xd0),0,0);
  }
  puVar5 = (undefined8 *)(param_1 + 0xd8);
  uVar6 = *puVar5;
  if (((*(byte *)(_UnityEngine_Object_TypeInfo_12d54e0 + 0x133) >> 2 & 1) != 0) &&
     (*(int *)(_UnityEngine_Object_TypeInfo_12d54e0 + 0xe0) == 0)) {
    native_sub_4327ec();
  }
  uVar4 = native_UnityEngine_Object__op_Implicit_8e1b98(uVar6,0);
  if ((uVar4 & 1) != 0) {
    uVar6 = *puVar5;
    if (((*(byte *)(_NGUITools_TypeInfo_12d53c8 + 0x133) >> 2 & 1) != 0) &&
       (*(int *)(_NGUITools_TypeInfo_12d53c8 + 0xe0) == 0)) {
      native_sub_4327ec();
    }
    native_NGUITools__Destroy_731234(uVar6,0);
    *puVar5 = 0;
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
  return;
}



/* UIInput$$Submit @ 0x9f3f9c
 * void UIInput__Submit (UIInput_o* __this, const MethodInfo* method); */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* UIInput$$Submit
   void UIInput__Submit (UIInput_o* __this, const MethodInfo* method); */

void native_UIInput__Submit_9f3f9c(long param_1)

{
  ulong uVar1;
  long *plVar2;
  undefined8 *puVar3;
  undefined8 uVar4;
  undefined8 uVar5;
  
  if ((bRam0000000001341993 & 1) == 0) {
    native_sub_43273c(&EventDelegate_TypeInfo_12d4590);
    native_sub_43273c(&NGUITools_TypeInfo_12d53c8);
    native_sub_43273c(&UnityEngine_Object_TypeInfo_12d54e0);
    native_sub_43273c(&UIInput_TypeInfo_12d6450);
    bRam0000000001341993 = 1;
  }
  if (((*(byte *)(_NGUITools_TypeInfo_12d53c8 + 0x133) >> 2 & 1) != 0) &&
     (*(int *)(_NGUITools_TypeInfo_12d53c8 + 0xe0) == 0)) {
    native_sub_4327ec();
  }
  uVar1 = native_NGUITools__GetActive_72d02c(param_1,0);
  if ((uVar1 & 1) == 0) {
    return;
  }
  if (*(char *)(param_1 + 0xb4) != '\0') {
    native_UIInput__Init_9f1988(param_1);
  }
  native_sub_4326e0((undefined8 *)(param_1 + 0x90),*(undefined8 *)(param_1 + 0x90));
  if (((*(byte *)(_UIInput_TypeInfo_12d6450 + 0x133) >> 2 & 1) != 0) &&
     (*(int *)(_UIInput_TypeInfo_12d6450 + 0xe0) == 0)) {
    native_sub_4327ec();
  }
  uVar5 = **(undefined8 **)(_UIInput_TypeInfo_12d6450 + 0xb8);
  if (((*(byte *)(_UnityEngine_Object_TypeInfo_12d54e0 + 0x133) >> 2 & 1) != 0) &&
     (*(int *)(_UnityEngine_Object_TypeInfo_12d54e0 + 0xe0) == 0)) {
    native_sub_4327ec(_UnityEngine_Object_TypeInfo_12d54e0);
  }
  uVar1 = native_UnityEngine_Object__op_Equality_8e9a3c(uVar5,0,0);
  if ((uVar1 & 1) != 0) {
    if (((*(byte *)(_UIInput_TypeInfo_12d6450 + 0x133) >> 2 & 1) != 0) &&
       (*(int *)(_UIInput_TypeInfo_12d6450 + 0xe0) == 0)) {
      native_sub_4327ec();
    }
    plVar2 = *(long **)(_UIInput_TypeInfo_12d6450 + 0xb8);
    *plVar2 = param_1;
    native_sub_4326e0(plVar2,param_1);
    uVar5 = *(undefined8 *)(param_1 + 0x78);
    if (((*(byte *)(_EventDelegate_TypeInfo_12d4590 + 0x133) >> 2 & 1) != 0) &&
       (*(int *)(_EventDelegate_TypeInfo_12d4590 + 0xe0) == 0)) {
      native_sub_4327ec();
    }
    native_EventDelegate__Execute_deecbc(uVar5,0);
    puVar3 = *(undefined8 **)(_UIInput_TypeInfo_12d6450 + 0xb8);
    *puVar3 = 0;
    native_sub_4326e0(puVar3,0);
  }
  uVar5 = *(undefined8 *)(param_1 + 0x90);
  uVar1 = native_System_String__IsNullOrEmpty_b09430(*(undefined8 *)(param_1 + 0x38),0);
  if ((uVar1 & 1) != 0) {
    return;
  }
  uVar1 = native_System_String__IsNullOrEmpty_b09430(uVar5,0);
  uVar4 = *(undefined8 *)(param_1 + 0x38);
  if ((uVar1 & 1) != 0) {
    if (pcRam000000000133f7a8 == (code *)0x0) {
      pcRam000000000133f7a8 = (code *)native_sub_4326f0(&UNK_00e27b88);
    }
                    /* WARNING: Could not recover jumptable at 0x00762088. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*pcRam000000000133f7a8)(uVar4);
    return;
  }
  if (pcRam000000000133f778 == (code *)0x0) {
    pcRam000000000133f778 = (code *)native_sub_4326f0(&UNK_00e27a58,uVar5,0);
  }
  uVar1 = (*pcRam000000000133f778)(uVar4,uVar5);
  if ((uVar1 & 1) != 0) {
    return;
  }
  native_sub_432740(&UnityEngine_PlayerPrefsException_TypeInfo_12d56f8);
  uVar5 = native_sub_432808();
  uVar4 = native_sub_432740(&StringLiteral_Could_not_store_preference_value_12ed488);
  native_UnityEngine_PlayerPrefsException___ctor_761cf8(uVar5,uVar4);
  uVar4 = native_sub_432740(&Method_UnityEngine_PlayerPrefs_SetString___12e5df0);
                    /* WARNING: Subroutine does not return */
  native_sub_4327dc(uVar5,uVar4);
}



/* UIInput$$UpdateLabel @ 0x9f1b24
 * void UIInput__UpdateLabel (UIInput_o* __this, const MethodInfo* method); */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* UIInput$$UpdateLabel
   void UIInput__UpdateLabel (UIInput_o* __this, const MethodInfo* method); */

void native_UIInput__UpdateLabel_9f1b24(long *param_1)

{
  undefined4 *puVar1;
  undefined4 *puVar2;
  bool bVar3;
  ushort uVar4;
  uint uVar5;
  uint uVar6;
  undefined4 uVar7;
  int iVar8;
  int iVar9;
  undefined4 uVar10;
  ulong uVar11;
  undefined8 uVar12;
  undefined8 *puVar13;
  undefined8 uVar14;
  long *plVar15;
  long *plVar16;
  int iVar17;
  long lVar18;
  long lVar19;
  int *piVar20;
  ushort uVar21;
  int iVar22;
  long lVar23;
  long *plVar24;
  long *plVar25;
  long *plVar26;
  float fVar27;
  
  if ((bRam0000000001341994 & 1) == 0) {
    native_sub_43273c(&INGUIFont_TypeInfo_12d4c70);
    native_sub_43273c(&Method_NGUITools_AddWidget_UITexture____12e56e8);
    native_sub_43273c(&NGUITools_TypeInfo_12d53c8);
    native_sub_43273c(&UnityEngine_Object_TypeInfo_12d54e0);
    native_sub_43273c(&UnityEngine_Texture2D_TypeInfo_12d61f0);
    native_sub_43273c(&UIInput_TypeInfo_12d6450);
    native_sub_43273c(&StringLiteral_x_12f6b98);
    native_sub_43273c(&StringLiteral__12eaac0);
    native_sub_43273c(&StringLiteral___12eb5f0);
    native_sub_43273c(&StringLiteral_Input_Caret_12ee890);
    native_sub_43273c(&StringLiteral_Input_Highlight_12ee898);
    bRam0000000001341994 = 1;
  }
  plVar26 = param_1 + 3;
  lVar23 = *plVar26;
  if (((*(byte *)(_UnityEngine_Object_TypeInfo_12d54e0 + 0x133) >> 2 & 1) != 0) &&
     (*(int *)(_UnityEngine_Object_TypeInfo_12d54e0 + 0xe0) == 0)) {
    native_sub_4327ec();
  }
  uVar11 = native_UnityEngine_Object__op_Inequality_8d76fc(lVar23,0,0);
  if ((uVar11 & 1) == 0) {
    return;
  }
  if (*(char *)((long)param_1 + 0xb4) != '\0') {
    native_UIInput__Init_9f1988(param_1);
  }
  uVar5 = native_UIInput__get_isSelected_9f283c(param_1);
  if (*(char *)((long)param_1 + 0xb4) != '\0') {
    native_UIInput__Init_9f1988(param_1);
  }
  lVar23 = param_1[0x12];
  uVar11 = native_System_String__IsNullOrEmpty_b09430(lVar23,0);
  if ((uVar11 & 1) == 0) {
    lVar18 = *plVar26;
    uVar6 = 0;
LAB_009f1c84:
    plVar16 = param_1 + 9;
    puVar1 = (undefined4 *)((long)param_1 + 0x4c);
    plVar24 = param_1 + 10;
    puVar2 = (undefined4 *)((long)param_1 + 0x54);
  }
  else {
    uVar12 = native_UnityEngine_Input__get_compositionString_dbdf20(0);
    uVar6 = native_System_String__IsNullOrEmpty_b09430(uVar12,0);
    lVar18 = *plVar26;
    if (((uVar5 | uVar6 ^ 0xffffffff) & 1) != 0) goto LAB_009f1c84;
    plVar16 = param_1 + 0x14;
    puVar1 = (undefined4 *)((long)param_1 + 0xa4);
    plVar24 = param_1 + 0x15;
    puVar2 = (undefined4 *)((long)param_1 + 0xac);
    uVar6 = 1;
  }
  if (lVar18 == 0) goto LAB_009f2784;
  native_UIWidget__set_color_947adc((int)*plVar16,*puVar1,(int)*plVar24,*puVar2,lVar18,0);
  uVar12 = _StringLiteral___12eb5f0;
  lVar18 = _StringLiteral__12eaac0;
  if ((uVar6 & 1) == 0) {
    if ((int)param_1[4] == 2) {
      if (*plVar26 == 0) goto LAB_009f2784;
      plVar16 = (long *)native_UILabel__get_font_ae77e8(*plVar26,0);
      uVar14 = uVar12;
      if (plVar16 != (long *)0x0) {
        lVar19 = *plVar16;
        if ((ulong)*(ushort *)(lVar19 + 0x12a) != 0) {
          uVar11 = 0;
          piVar20 = (int *)(*(long *)(lVar19 + 0xb0) + 8);
          do {
            if (*(long *)(piVar20 + -2) == _INGUIFont_TypeInfo_12d4c70) {
              puVar13 = (undefined8 *)(lVar19 + (long)(*piVar20 + 2) * 0x10 + 0x138);
              goto LAB_009f1da4;
            }
            uVar11 = uVar11 + 1;
            piVar20 = piVar20 + 4;
          } while (uVar11 < *(ushort *)(lVar19 + 0x12a));
        }
        puVar13 = (undefined8 *)native_sub_3c9b34(plVar16,_INGUIFont_TypeInfo_12d4c70,2);
LAB_009f1da4:
        lVar19 = (*(code *)*puVar13)(plVar16,puVar13[1]);
        if (lVar19 != 0) {
          lVar19 = *plVar16;
          if ((ulong)*(ushort *)(lVar19 + 0x12a) != 0) {
            uVar11 = 0;
            piVar20 = (int *)(*(long *)(lVar19 + 0xb0) + 8);
            do {
              if (*(long *)(piVar20 + -2) == _INGUIFont_TypeInfo_12d4c70) {
                puVar13 = (undefined8 *)(lVar19 + (long)(*piVar20 + 2) * 0x10 + 0x138);
                goto LAB_009f1e0c;
              }
              uVar11 = uVar11 + 1;
              piVar20 = piVar20 + 4;
            } while (uVar11 < *(ushort *)(lVar19 + 0x12a));
          }
          puVar13 = (undefined8 *)native_sub_3c9b34(plVar16,_INGUIFont_TypeInfo_12d4c70,2);
LAB_009f1e0c:
          lVar19 = (*(code *)*puVar13)(plVar16,puVar13[1]);
          if (lVar19 == 0) goto LAB_009f2784;
          lVar19 = native_BMFont__GetGlyph_dd1c0c(lVar19,0x2a,0);
          uVar14 = _StringLiteral_x_12f6b98;
          if (lVar19 != 0) {
            uVar14 = uVar12;
          }
        }
      }
      if (lVar23 == 0) goto LAB_009f2784;
      iVar8 = *(int *)(lVar23 + 0x10);
      if (0 < iVar8) {
        do {
          lVar18 = native_System_String__Concat_afbd68(lVar18,uVar14,0);
          iVar8 = iVar8 + -1;
        } while (iVar8 != 0);
      }
      lVar23 = lVar18;
      if ((uVar5 & 1) == 0) goto LAB_009f1ec8;
LAB_009f1e6c:
      if (lVar23 == 0) goto LAB_009f2784;
      uVar10 = *(undefined4 *)(lVar23 + 0x10);
      uVar7 = native_UIInput__get_cursorPosition_9f3090(param_1);
      iVar8 = native_UnityEngine_Mathf__Min_8e4c18(uVar10,uVar7,0);
      uVar12 = native_System_String__Substring_b09fac(lVar23,0,iVar8,0);
      uVar14 = native_UnityEngine_Input__get_compositionString_dbdf20(0);
      uVar12 = native_System_String__Concat_afbd68(uVar12,uVar14,0);
    }
    else {
      if ((uVar5 & 1) != 0) goto LAB_009f1e6c;
LAB_009f1ec8:
      if (lVar23 == 0) goto LAB_009f2784;
      uVar12 = native_System_String__Substring_b09fac(lVar23,0,0,0);
      iVar8 = 0;
    }
    uVar14 = native_System_String__Substring_b09fac(lVar23,iVar8,*(int *)(lVar23 + 0x10) - iVar8,0);
    lVar23 = native_System_String__Concat_afbd68(uVar12,uVar14,0);
    if ((uVar5 & 1) == 0) {
LAB_009f1fb0:
      if (((*(byte *)(_UIInput_TypeInfo_12d6450 + 0x133) >> 2 & 1) != 0) &&
         (*(int *)(_UIInput_TypeInfo_12d6450 + 0xe0) == 0)) {
        native_sub_4327ec();
      }
      *(undefined4 *)(*(long *)(_UIInput_TypeInfo_12d6450 + 0xb8) + 0x10) = 0;
      lVar18 = *plVar26;
      if (lVar18 == 0) goto LAB_009f2784;
      uVar10 = (undefined4)param_1[0x17];
      goto LAB_009f1fe8;
    }
    lVar18 = *plVar26;
    if (lVar18 == 0) goto LAB_009f2784;
    if ((*(int *)(lVar18 + 0x1e4) != 1) || (*(int *)(lVar18 + 0x1c0) != 1)) goto LAB_009f1fb0;
    iVar9 = native_UILabel__CalculateOffsetToFit_aedc24(lVar18,lVar23,0);
    uVar4 = *(ushort *)(_UIInput_TypeInfo_12d6450 + 0x132);
    uVar21 = uVar4 & 0x400;
    if (iVar9 == 0) {
      if (((uVar4 & 0x400) != 0) && (*(int *)(_UIInput_TypeInfo_12d6450 + 0xe0) == 0)) {
        native_sub_4327ec();
      }
      *(undefined4 *)(*(long *)(_UIInput_TypeInfo_12d6450 + 0xb8) + 0x10) = 0;
      lVar18 = *plVar26;
      if (lVar18 == 0) goto LAB_009f2784;
      uVar10 = (undefined4)param_1[0x17];
LAB_009f2678:
      native_UILabel__set_alignment_ae8458(lVar18,uVar10,0);
    }
    else {
      if (((uVar4 & 0x400) != 0) && (*(int *)(_UIInput_TypeInfo_12d6450 + 0xe0) == 0)) {
        native_sub_4327ec();
        uVar21 = *(ushort *)(_UIInput_TypeInfo_12d6450 + 0x132) & 0x400;
      }
      piVar20 = (int *)(*(long *)(_UIInput_TypeInfo_12d6450 + 0xb8) + 0x10);
      iVar22 = *piVar20;
      if (iVar8 < iVar22) {
        if ((uVar21 != 0) && (*(int *)(_UIInput_TypeInfo_12d6450 + 0xe0) == 0)) {
          native_sub_4327ec();
          piVar20 = (int *)(*(long *)(_UIInput_TypeInfo_12d6450 + 0xb8) + 0x10);
        }
        *piVar20 = iVar8;
LAB_009f266c:
        lVar18 = *plVar26;
        if (lVar18 == 0) goto LAB_009f2784;
        uVar10 = 1;
        goto LAB_009f2678;
      }
      if ((uVar21 != 0) && (*(int *)(_UIInput_TypeInfo_12d6450 + 0xe0) == 0)) {
        native_sub_4327ec();
        piVar20 = (int *)(*(long *)(_UIInput_TypeInfo_12d6450 + 0xb8) + 0x10);
        iVar22 = *piVar20;
      }
      if (iVar9 < iVar22) {
        if (((*(byte *)(_UIInput_TypeInfo_12d6450 + 0x133) >> 2 & 1) != 0) &&
           (*(int *)(_UIInput_TypeInfo_12d6450 + 0xe0) == 0)) {
          native_sub_4327ec();
          piVar20 = (int *)(*(long *)(_UIInput_TypeInfo_12d6450 + 0xb8) + 0x10);
        }
        *piVar20 = iVar9;
        goto LAB_009f266c;
      }
      if (lVar23 == 0) goto LAB_009f2784;
      lVar18 = *plVar26;
      uVar12 = native_System_String__Substring_b09fac(lVar23,0,iVar8,0);
      if (lVar18 == 0) goto LAB_009f2784;
      iVar8 = native_UILabel__CalculateOffsetToFit_aedc24(lVar18,uVar12,0);
      if (((*(byte *)(_UIInput_TypeInfo_12d6450 + 0x133) >> 2 & 1) != 0) &&
         (*(int *)(_UIInput_TypeInfo_12d6450 + 0xe0) == 0)) {
        native_sub_4327ec(_UIInput_TypeInfo_12d6450);
      }
      piVar20 = (int *)(*(long *)(_UIInput_TypeInfo_12d6450 + 0xb8) + 0x10);
      if (*piVar20 < iVar8) {
        if (((*(byte *)(_UIInput_TypeInfo_12d6450 + 0x133) >> 2 & 1) != 0) &&
           (*(int *)(_UIInput_TypeInfo_12d6450 + 0xe0) == 0)) {
          native_sub_4327ec(_UIInput_TypeInfo_12d6450);
          piVar20 = (int *)(*(long *)(_UIInput_TypeInfo_12d6450 + 0xb8) + 0x10);
        }
        *piVar20 = iVar8;
        lVar18 = *plVar26;
        if (lVar18 == 0) goto LAB_009f2784;
        uVar10 = 3;
        goto LAB_009f2678;
      }
    }
    if (((*(byte *)(_UIInput_TypeInfo_12d6450 + 0x133) >> 2 & 1) != 0) &&
       (*(int *)(_UIInput_TypeInfo_12d6450 + 0xe0) == 0)) {
      native_sub_4327ec();
    }
    iVar8 = *(int *)(*(long *)(_UIInput_TypeInfo_12d6450 + 0xb8) + 0x10);
    if (iVar8 != 0) {
      if (((*(byte *)(_UIInput_TypeInfo_12d6450 + 0x133) >> 2 & 1) != 0) &&
         (*(int *)(_UIInput_TypeInfo_12d6450 + 0xe0) == 0)) {
        native_sub_4327ec();
        iVar8 = *(int *)(*(long *)(_UIInput_TypeInfo_12d6450 + 0xb8) + 0x10);
      }
      if (lVar23 == 0) goto LAB_009f2784;
      lVar23 = native_System_String__Substring_b09fac
                         (lVar23,iVar8,*(int *)(lVar23 + 0x10) - iVar8,0);
    }
  }
  else {
    lVar18 = *plVar26;
    if (lVar18 == 0) goto LAB_009f2784;
    uVar10 = (undefined4)param_1[0x17];
    plVar16 = (long *)&StringLiteral__12eaac0;
    if ((uVar5 & 1) == 0) {
      plVar16 = param_1 + 0x13;
    }
    lVar23 = *plVar16;
LAB_009f1fe8:
    native_UILabel__set_alignment_ae8458(lVar18,uVar10,0);
  }
  if (*plVar26 == 0) goto LAB_009f2784;
  native_UILabel__set_text_ae81a8(*plVar26,lVar23,0);
  if ((uVar5 & 1) == 0) {
LAB_009f2280:
                    /* WARNING: Could not recover jumptable at 0x009f22a4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (**(code **)(*param_1 + 0x1c8))(param_1,*(undefined8 *)(*param_1 + 0x1d0));
    return;
  }
  if (((*(byte *)(_UIInput_TypeInfo_12d6450 + 0x133) >> 2 & 1) != 0) &&
     (*(int *)(_UIInput_TypeInfo_12d6450 + 0xe0) == 0)) {
    native_sub_4327ec();
  }
  if ((*(long *)(*(long *)(_UIInput_TypeInfo_12d6450 + 0xb8) + 0x20) != 0) &&
     (uVar11 = native_UIInput__get_inputShouldBeHidden_9f28e0(param_1), (uVar11 & 1) == 0))
  goto LAB_009f2280;
  lVar23 = param_1[0x18];
  if (((*(byte *)(_UIInput_TypeInfo_12d6450 + 0x133) >> 2 & 1) != 0) &&
     (*(int *)(_UIInput_TypeInfo_12d6450 + 0xe0) == 0)) {
    native_sub_4327ec();
  }
  iVar8 = *(int *)(*(long *)(_UIInput_TypeInfo_12d6450 + 0xb8) + 0x10);
  plVar16 = param_1 + 0x1b;
  lVar18 = *plVar16;
  iVar9 = *(int *)((long)param_1 + 0xc4);
  if (((*(byte *)(_UnityEngine_Object_TypeInfo_12d54e0 + 0x133) >> 2 & 1) != 0) &&
     (*(int *)(_UnityEngine_Object_TypeInfo_12d54e0 + 0xe0) == 0)) {
    native_sub_4327ec();
  }
  uVar11 = native_UnityEngine_Object__op_Equality_8e9a3c(lVar18,0,0);
  if ((uVar11 & 1) != 0) {
    lVar18 = native_sub_432808(_UnityEngine_Texture2D_TypeInfo_12d61f0);
    native_UnityEngine_Texture2D___ctor_76f4a4(lVar18,2,2,5,0,0);
    *plVar16 = lVar18;
    native_sub_4326e0(plVar16,lVar18);
    iVar22 = 0;
    do {
      iVar17 = 0;
      do {
        lVar18 = *plVar16;
        native_UnityEngine_Color__get_white_8d9e10(0);
        if (lVar18 == 0) goto LAB_009f2784;
        native_UnityEngine_Texture2D__SetPixel_76f52c(lVar18,iVar17,iVar22,0);
        bVar3 = iVar17 == 0;
        iVar17 = 1;
      } while (bVar3);
      bVar3 = iVar22 == 0;
      iVar22 = 1;
    } while (bVar3);
    if (*plVar16 == 0) goto LAB_009f2784;
    native_UnityEngine_Texture2D__Apply_76f804(*plVar16,0);
  }
  iVar22 = (int)lVar23 - iVar8;
  iVar9 = iVar9 - iVar8;
  if (iVar22 != iVar9) {
    plVar24 = param_1 + 0x19;
    lVar23 = *plVar24;
    if (((*(byte *)(_UnityEngine_Object_TypeInfo_12d54e0 + 0x133) >> 2 & 1) != 0) &&
       (*(int *)(_UnityEngine_Object_TypeInfo_12d54e0 + 0xe0) == 0)) {
      native_sub_4327ec();
    }
    uVar11 = native_UnityEngine_Object__op_Equality_8e9a3c(lVar23,0,0);
    if ((uVar11 & 1) == 0) {
      plVar15 = (long *)*plVar26;
      if (plVar15 == (long *)0x0) goto LAB_009f2784;
      plVar25 = (long *)*plVar24;
      uVar10 = (**(code **)(*plVar15 + 0x2a8))(plVar15,*(undefined8 *)(*plVar15 + 0x2b0));
      if (plVar25 == (long *)0x0) goto LAB_009f2784;
      (**(code **)(*plVar25 + 0x2b8))(plVar25,uVar10,*(undefined8 *)(*plVar25 + 0x2c0));
      plVar15 = (long *)*plVar24;
      if (plVar15 == (long *)0x0) goto LAB_009f2784;
      (**(code **)(*plVar15 + 0x338))(plVar15,*plVar16,*(undefined8 *)(*plVar15 + 0x340));
      plVar15 = (long *)*plVar24;
      if (plVar15 == (long *)0x0) goto LAB_009f2784;
      (**(code **)(*plVar15 + 0x378))(plVar15,*(undefined8 *)(*plVar15 + 0x380));
      if (*plVar24 == 0) goto LAB_009f2784;
      native_UnityEngine_Behaviour__set_enabled_8d7b0c(*plVar24,1,0);
    }
    else {
      if (*plVar26 == 0) goto LAB_009f2784;
      uVar12 = native_UIRect__get_cachedGameObject_c2d1c0(*plVar26,0);
      if (((*(byte *)(_NGUITools_TypeInfo_12d53c8 + 0x133) >> 2 & 1) != 0) &&
         (*(int *)(_NGUITools_TypeInfo_12d53c8 + 0xe0) == 0)) {
        native_sub_4327ec(_NGUITools_TypeInfo_12d53c8);
      }
      lVar23 = native_NGUITools__AddWidget_object__4a528c
                         (uVar12,0x7fffffff,_Method_NGUITools_AddWidget_UITexture____12e56e8);
      *plVar24 = lVar23;
      native_sub_4326e0(plVar24,lVar23);
      if (*plVar24 == 0) goto LAB_009f2784;
      native_UnityEngine_Object__set_name_8e9c08(*plVar24,_StringLiteral_Input_Highlight_12ee898,0);
      plVar15 = (long *)*plVar24;
      if (plVar15 == (long *)0x0) goto LAB_009f2784;
      (**(code **)(*plVar15 + 0x338))(plVar15,*plVar16,*(undefined8 *)(*plVar15 + 0x340));
      if (*plVar24 == 0) goto LAB_009f2784;
      *(undefined1 *)(*plVar24 + 0x100) = 0;
      plVar15 = (long *)*plVar26;
      if (plVar15 == (long *)0x0) goto LAB_009f2784;
      plVar25 = (long *)*plVar24;
      uVar10 = (**(code **)(*plVar15 + 0x2a8))(plVar15,*(undefined8 *)(*plVar15 + 0x2b0));
      if (plVar25 == (long *)0x0) goto LAB_009f2784;
      (**(code **)(*plVar25 + 0x2b8))(plVar25,uVar10,*(undefined8 *)(*plVar25 + 0x2c0));
      if (*plVar26 == 0) goto LAB_009f2784;
      lVar23 = *plVar24;
      uVar12 = native_UIRect__get_cachedTransform_c27c58(*plVar26,0);
      if (lVar23 == 0) goto LAB_009f2784;
      native_UIRect__SetAnchor_c2ea60(lVar23,uVar12,0);
    }
  }
  plVar24 = param_1 + 0x1a;
  lVar23 = *plVar24;
  if (((*(byte *)(_UnityEngine_Object_TypeInfo_12d54e0 + 0x133) >> 2 & 1) != 0) &&
     (*(int *)(_UnityEngine_Object_TypeInfo_12d54e0 + 0xe0) == 0)) {
    native_sub_4327ec();
  }
  uVar11 = native_UnityEngine_Object__op_Equality_8e9a3c(lVar23,0,0);
  if ((uVar11 & 1) == 0) {
    plVar15 = (long *)*plVar26;
    if (plVar15 == (long *)0x0) goto LAB_009f2784;
    plVar25 = (long *)*plVar24;
    uVar10 = (**(code **)(*plVar15 + 0x2a8))(plVar15,*(undefined8 *)(*plVar15 + 0x2b0));
    if (plVar25 == (long *)0x0) goto LAB_009f2784;
    (**(code **)(*plVar25 + 0x2b8))(plVar25,uVar10,*(undefined8 *)(*plVar25 + 0x2c0));
    plVar15 = (long *)*plVar24;
    if (plVar15 == (long *)0x0) goto LAB_009f2784;
    (**(code **)(*plVar15 + 0x338))(plVar15,*plVar16,*(undefined8 *)(*plVar15 + 0x340));
    plVar16 = (long *)*plVar24;
    if (plVar16 == (long *)0x0) goto LAB_009f2784;
    (**(code **)(*plVar16 + 0x378))(plVar16,*(undefined8 *)(*plVar16 + 0x380));
    if (*plVar24 == 0) goto LAB_009f2784;
    native_UnityEngine_Behaviour__set_enabled_8d7b0c(*plVar24,1,0);
  }
  else {
    if (*plVar26 == 0) goto LAB_009f2784;
    uVar12 = native_UIRect__get_cachedGameObject_c2d1c0(*plVar26,0);
    if (((*(byte *)(_NGUITools_TypeInfo_12d53c8 + 0x133) >> 2 & 1) != 0) &&
       (*(int *)(_NGUITools_TypeInfo_12d53c8 + 0xe0) == 0)) {
      native_sub_4327ec(_NGUITools_TypeInfo_12d53c8);
    }
    lVar23 = native_NGUITools__AddWidget_object__4a528c
                       (uVar12,0x7fffffff,_Method_NGUITools_AddWidget_UITexture____12e56e8);
    *plVar24 = lVar23;
    native_sub_4326e0(plVar24,lVar23);
    if (*plVar24 == 0) goto LAB_009f2784;
    native_UnityEngine_Object__set_name_8e9c08(*plVar24,_StringLiteral_Input_Caret_12ee890,0);
    plVar15 = (long *)*plVar24;
    if (plVar15 == (long *)0x0) goto LAB_009f2784;
    (**(code **)(*plVar15 + 0x338))(plVar15,*plVar16,*(undefined8 *)(*plVar15 + 0x340));
    if (*plVar24 == 0) goto LAB_009f2784;
    *(undefined1 *)(*plVar24 + 0x100) = 0;
    plVar16 = (long *)*plVar26;
    if (plVar16 == (long *)0x0) goto LAB_009f2784;
    plVar15 = (long *)*plVar24;
    uVar10 = (**(code **)(*plVar16 + 0x2a8))(plVar16,*(undefined8 *)(*plVar16 + 0x2b0));
    if (plVar15 == (long *)0x0) goto LAB_009f2784;
    (**(code **)(*plVar15 + 0x2b8))(plVar15,uVar10,*(undefined8 *)(*plVar15 + 0x2c0));
    if (*plVar26 == 0) goto LAB_009f2784;
    lVar23 = *plVar24;
    uVar12 = native_UIRect__get_cachedTransform_c27c58(*plVar26,0);
    if (lVar23 == 0) goto LAB_009f2784;
    native_UIRect__SetAnchor_c2ea60(lVar23,uVar12,0);
  }
  if (*plVar24 == 0) goto LAB_009f2784;
  lVar23 = *plVar26;
  uVar12 = *(undefined8 *)(*plVar24 + 0xf8);
  if (iVar22 == iVar9) {
    if (lVar23 == 0) goto LAB_009f2784;
    native_UILabel__PrintOverlay_aec838
              ((int)param_1[0xb],*(undefined4 *)((long)param_1 + 0x5c),(int)param_1[0xc],
               *(undefined4 *)((long)param_1 + 100),(int)param_1[0xd],
               *(undefined4 *)((long)param_1 + 0x6c),(int)param_1[0xe],
               *(undefined4 *)((long)param_1 + 0x74),lVar23,iVar22,iVar22,uVar12,0,0);
    lVar23 = param_1[0x19];
    if (((*(byte *)(_UnityEngine_Object_TypeInfo_12d54e0 + 0x133) >> 2 & 1) != 0) &&
       (*(int *)(_UnityEngine_Object_TypeInfo_12d54e0 + 0xe0) == 0)) {
      native_sub_4327ec();
    }
    uVar11 = native_UnityEngine_Object__op_Inequality_8d76fc(lVar23,0,0);
    if ((uVar11 & 1) != 0) {
      lVar23 = param_1[0x19];
      if (lVar23 == 0) goto LAB_009f2784;
      uVar5 = 0;
      goto LAB_009f25b0;
    }
  }
  else {
    if ((param_1[0x19] == 0) || (lVar23 == 0)) goto LAB_009f2784;
    native_UILabel__PrintOverlay_aec838
              ((int)param_1[0xb],*(undefined4 *)((long)param_1 + 0x5c),(int)param_1[0xc],
               *(undefined4 *)((long)param_1 + 100),(int)param_1[0xd],
               *(undefined4 *)((long)param_1 + 0x6c),(int)param_1[0xe],
               *(undefined4 *)((long)param_1 + 0x74),lVar23,iVar22,iVar9,uVar12,
               *(undefined8 *)(param_1[0x19] + 0xf8),0);
    lVar23 = param_1[0x19];
    if ((lVar23 == 0) || (*(long *)(lVar23 + 0xf8) == 0)) goto LAB_009f2784;
    uVar5 = native_UIGeometry__get_hasVertices_9ef420();
    uVar5 = uVar5 & 1;
LAB_009f25b0:
    native_UnityEngine_Behaviour__set_enabled_8d7b0c(lVar23,uVar5,0);
  }
  fVar27 = (float)native_RealTime__get_time_72d024(0);
  *(float *)(param_1 + 0x1c) = fVar27 + 0.5;
  if (param_1[3] != 0) {
    *(undefined4 *)((long)param_1 + 0xe4) = *(undefined4 *)(param_1[3] + 0x8c);
    return;
  }
LAB_009f2784:
                    /* WARNING: Subroutine does not return */
  native_sub_432810();
}



/* UIInput$$Validate @ 0x9f34a8
 * uint16_t UIInput__Validate (UIInput_o* __this, System_String_o* text, int32_t pos, uint16_t ch, const MethodInfo* method); */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* UIInput$$Validate
   uint16_t UIInput__Validate (UIInput_o* __this, System_String_o* text, int32_t pos, uint16_t ch,
   const MethodInfo* method); */

ulong native_UIInput__Validate_9f34a8(long param_1,long param_2,int param_3,ulong param_4)

{
  uint uVar1;
  bool bVar2;
  bool bVar3;
  short sVar4;
  short sVar5;
  undefined4 uVar6;
  ulong uVar7;
  uint uVar8;
  ulong uVar9;
  
  uVar9 = param_4 & 0xffffffff;
  if ((bRam0000000001341995 & 1) == 0) {
    native_sub_43273c(&StringLiteral___12eb6c8);
    native_sub_43273c(&StringLiteral___12eb180);
    native_sub_43273c(&StringLiteral___12eb7a0);
    bRam0000000001341995 = 1;
  }
  uVar8 = (uint)param_4;
  if (*(int *)(param_1 + 0x30) == 0) {
    return uVar9;
  }
  uVar7 = native_UnityEngine_Behaviour__get_enabled_8d7acc(param_1,0);
  if ((uVar7 & 1) == 0) {
    return uVar9;
  }
  switch(*(undefined4 *)(param_1 + 0x30)) {
  case 1:
    if (0x2f < (uVar8 & 0xffff)) {
code_r0x009f365c:
      bVar2 = 0x38 < (uVar8 & 0xffff);
      bVar3 = (uVar8 & 0xffff) == 0x39;
      goto code_r0x009f3660;
    }
    if (param_3 != 0) {
      return 0;
    }
    if ((uVar8 & 0xffff) != 0x2d) {
      return 0;
    }
    break;
  case 2:
    if (0x2f < (uVar8 & 0xffff)) goto code_r0x009f365c;
    if ((param_3 != 0) || ((uVar8 & 0xffff) != 0x2d)) {
      if ((uVar8 & 0xffff) != 0x2e) {
        return 0;
      }
      if (param_2 != 0) {
        uVar9 = native_System_String__Contains_b0bafc(param_2,_StringLiteral___12eb7a0,0);
        if ((uVar9 & 1) != 0) {
          return 0;
        }
        return 0x2e;
      }
      goto code_r0x009f37fc;
    }
    break;
  case 3:
    if (0x40 < (uVar8 & 0xffff)) {
      if ((uVar8 & 0xffff) < 0x5b) {
        return uVar9;
      }
      uVar8 = uVar8 - 0x61 & 0xffff;
      bVar2 = 0x18 < uVar8;
      bVar3 = uVar8 == 0x19;
      goto code_r0x009f3660;
    }
    goto code_r0x009f3608;
  case 4:
    if ((uVar8 - 0x41 & 0xffff) < 0x1a) {
code_r0x009f37b4:
      return (ulong)(uVar8 + 0x20);
    }
    uVar1 = uVar8 & 0xffff;
    if (0x60 < uVar1) {
      bVar2 = 0x79 < uVar1;
      bVar3 = uVar1 == 0x7a;
      goto code_r0x009f3660;
    }
code_r0x009f3608:
    uVar8 = uVar8 - 0x30 & 0xffff;
    bVar2 = 8 < uVar8;
    bVar3 = uVar8 == 9;
code_r0x009f3660:
    if (bVar2 && !bVar3) {
      return 0;
    }
    return uVar9;
  case 5:
    if (param_2 != 0) {
      if (*(int *)(param_2 + 0x10) < 1) {
        sVar5 = 10;
        sVar4 = 0x20;
      }
      else {
        uVar6 = native_UnityEngine_Mathf__Clamp_8e5208(param_3,0,*(int *)(param_2 + 0x10) + -1,0);
        sVar4 = native_System_String__get_Chars_b03810(param_2,uVar6,0);
        if (*(int *)(param_2 + 0x10) < 1) {
          sVar5 = 10;
        }
        else {
          uVar6 = native_UnityEngine_Mathf__Clamp_8e5208
                            (param_3 + 1,0,*(int *)(param_2 + 0x10) + -1,0);
          sVar5 = native_System_String__get_Chars_b03810(param_2,uVar6,0);
        }
      }
      if ((uVar8 - 0x61 & 0xffff) < 0x1a) {
        uVar1 = uVar8 - 0x20;
        if (sVar4 != 0x20) {
          uVar1 = uVar8;
        }
        return (ulong)uVar1;
      }
      if (0x19 < (uVar8 - 0x41 & 0xffff)) {
        if ((uVar8 & 0xffff) == 0x20) {
          if (sVar4 == 0x20) {
            return 0;
          }
          if (sVar4 == 0x27) {
            return 0;
          }
          if (sVar5 == 0x27) {
            return 0;
          }
          if (sVar5 == 0x20) {
            return 0;
          }
          return 0x20;
        }
        if ((uVar8 & 0xffff) != 0x27) {
          return 0;
        }
        if (sVar4 == 0x20) {
          return 0;
        }
        if (sVar4 == 0x27) {
          return 0;
        }
        if (sVar5 == 0x27) {
          return 0;
        }
        uVar9 = native_System_String__Contains_b0bafc(param_2,_StringLiteral___12eb180,0);
        if ((uVar9 & 1) != 0) {
          return 0;
        }
        return 0x27;
      }
      if (sVar4 == 0x20) {
        return uVar9;
      }
      if (sVar4 == 0x27) {
        return uVar9;
      }
      goto code_r0x009f37b4;
    }
    goto code_r0x009f37fc;
  case 6:
    if (((uVar8 & 0xffff) < 0x3f) && ((1L << (param_4 & 0x3f) & 0x5c00840400000200U) != 0)) {
      return 0;
    }
    uVar1 = (uVar8 & 0xffff) - 0x5c;
    if ((uVar1 < 0x21) && ((1L << ((ulong)uVar1 & 0x3f) & 0x100000015U) != 0)) {
      return 0;
    }
    uVar1 = 0;
    if ((uVar8 & 0xffff) != 10) {
      uVar1 = uVar8;
    }
    return (ulong)uVar1;
  default:
    goto LAB_009f3668;
  }
  if (param_2 == 0) {
code_r0x009f37fc:
                    /* WARNING: Subroutine does not return */
    native_sub_432810();
  }
  uVar9 = native_System_String__Contains_b0bafc(param_2,_StringLiteral___12eb6c8,0);
  if ((uVar9 & 1) == 0) {
    return 0x2d;
  }
LAB_009f3668:
  return 0;
}



/* UIInput$$ExecuteOnChange @ 0x9f2e54
 * void UIInput__ExecuteOnChange (UIInput_o* __this, const MethodInfo* method); */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* UIInput$$ExecuteOnChange
   void UIInput__ExecuteOnChange (UIInput_o* __this, const MethodInfo* method); */

void native_UIInput__ExecuteOnChange_9f2e54(long param_1)

{
  ulong *puVar1;
  char cVar2;
  bool bVar3;
  ulong uVar4;
  long *plVar5;
  undefined8 *puVar6;
  undefined8 uVar7;
  
  if ((bRam0000000001341996 & 1) == 0) {
    native_sub_43273c(&EventDelegate_TypeInfo_12d4590);
    native_sub_43273c(&UnityEngine_Object_TypeInfo_12d54e0);
    native_sub_43273c(&UIInput_TypeInfo_12d6450);
    bRam0000000001341996 = 1;
  }
  if (((*(byte *)(_UIInput_TypeInfo_12d6450 + 0x133) >> 2 & 1) != 0) &&
     (*(int *)(_UIInput_TypeInfo_12d6450 + 0xe0) == 0)) {
    native_sub_4327ec();
  }
  uVar7 = **(undefined8 **)(_UIInput_TypeInfo_12d6450 + 0xb8);
  if (((*(byte *)(_UnityEngine_Object_TypeInfo_12d54e0 + 0x133) >> 2 & 1) != 0) &&
     (*(int *)(_UnityEngine_Object_TypeInfo_12d54e0 + 0xe0) == 0)) {
    native_sub_4327ec(_UnityEngine_Object_TypeInfo_12d54e0);
  }
  uVar4 = native_UnityEngine_Object__op_Equality_8e9a3c(uVar7,0,0);
  if ((uVar4 & 1) != 0) {
    uVar7 = *(undefined8 *)(param_1 + 0x80);
    if (((*(byte *)(_EventDelegate_TypeInfo_12d4590 + 0x133) >> 2 & 1) != 0) &&
       (*(int *)(_EventDelegate_TypeInfo_12d4590 + 0xe0) == 0)) {
      native_sub_4327ec();
    }
    uVar4 = native_EventDelegate__IsValid_deef08(uVar7,0);
    if ((uVar4 & 1) != 0) {
      if (((*(byte *)(_UIInput_TypeInfo_12d6450 + 0x133) >> 2 & 1) != 0) &&
         (*(int *)(_UIInput_TypeInfo_12d6450 + 0xe0) == 0)) {
        native_sub_4327ec();
      }
      plVar5 = *(long **)(_UIInput_TypeInfo_12d6450 + 0xb8);
      *plVar5 = param_1;
      native_sub_4326e0(plVar5,param_1);
      uVar7 = *(undefined8 *)(param_1 + 0x80);
      if (((*(byte *)(_EventDelegate_TypeInfo_12d4590 + 0x133) >> 2 & 1) != 0) &&
         (*(int *)(_EventDelegate_TypeInfo_12d4590 + 0xe0) == 0)) {
        native_sub_4327ec();
      }
      native_EventDelegate__Execute_deecbc(uVar7,0);
      puVar6 = *(undefined8 **)(_UIInput_TypeInfo_12d6450 + 0xb8);
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
  }
  return;
}



/* UIInput$$RemoveFocus @ 0x9f5dcc
 * void UIInput__RemoveFocus (UIInput_o* __this, const MethodInfo* method); */

/* WARNING: Removing unreachable block (ram,0x009f3008) */
/* WARNING: Removing unreachable block (ram,0x009f3028) */
/* WARNING: Removing unreachable block (ram,0x009f3030) */
/* WARNING: Removing unreachable block (ram,0x009f3038) */
/* WARNING: Removing unreachable block (ram,0x00c979b4) */
/* WARNING: Removing unreachable block (ram,0x00c979d8) */
/* WARNING: Removing unreachable block (ram,0x00c979e0) */
/* WARNING: Removing unreachable block (ram,0x00c979e8) */
/* WARNING: Removing unreachable block (ram,0x00c979fc) */
/* WARNING: Removing unreachable block (ram,0x00c97a20) */
/* WARNING: Removing unreachable block (ram,0x00c97a28) */
/* WARNING: Removing unreachable block (ram,0x00c97a30) */
/* WARNING: Removing unreachable block (ram,0x00c97a44) */
/* WARNING: Removing unreachable block (ram,0x00c97a50) */
/* WARNING: Removing unreachable block (ram,0x00c97a58) */
/* WARNING: Removing unreachable block (ram,0x00c97a60) */
/* WARNING: Removing unreachable block (ram,0x00c97a6c) */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* UIInput$$RemoveFocus
   void UIInput__RemoveFocus (UIInput_o* __this, const MethodInfo* method); */

void native_UIInput__RemoveFocus_9f5dcc(undefined8 param_1)

{
  ulong *puVar1;
  char cVar2;
  bool bVar3;
  byte bVar4;
  uint uVar5;
  ulong uVar6;
  long lVar7;
  undefined8 *puVar8;
  long *plVar9;
  long lVar10;
  long lVar11;
  undefined8 uVar12;
  long lVar13;
  undefined8 uVar14;
  uint uVar15;
  undefined1 auStack_48 [4];
  undefined1 auStack_44 [4];
  
  if ((bRam000000000134197a & 1) == 0) {
    native_sub_43273c(&UICamera_TypeInfo_12d6410);
    bRam000000000134197a = 1;
  }
  uVar6 = native_UIInput__get_isSelected_9f283c(param_1);
  if ((uVar6 & 1) == 0) {
    return;
  }
  if (((*(byte *)(_UICamera_TypeInfo_12d6410 + 0x133) >> 2 & 1) != 0) &&
     (*(int *)(_UICamera_TypeInfo_12d6410 + 0xe0) == 0)) {
    native_sub_4327ec();
  }
  if ((bRam00000000013428c8 & 1) == 0) {
    native_sub_43273c(&bool_TypeInfo_12d3bd0,0);
    native_sub_43273c(&Method_UnityEngine_GameObject_GetComponent_UIInput____12e4ab0);
    native_sub_43273c(&Method_UnityEngine_GameObject_GetComponent_UIKeyNavigation____12e4ab8);
    native_sub_43273c(&UnityEngine_Object_TypeInfo_12d54e0);
    native_sub_43273c(&UICamera_TypeInfo_12d6410);
    native_sub_43273c(&StringLiteral_OnSelect_12f02c0);
    bRam00000000013428c8 = 1;
  }
  if (((*(byte *)(_UICamera_TypeInfo_12d6410 + 0x133) >> 2 & 1) != 0) &&
     (*(int *)(_UICamera_TypeInfo_12d6410 + 0xe0) == 0)) {
    native_sub_4327ec();
  }
  uVar12 = *(undefined8 *)(*(long *)(_UICamera_TypeInfo_12d6410 + 0xb8) + 0x1e8);
  if (((*(byte *)(_UnityEngine_Object_TypeInfo_12d54e0 + 0x133) >> 2 & 1) != 0) &&
     (*(int *)(_UnityEngine_Object_TypeInfo_12d54e0 + 0xe0) == 0)) {
    native_sub_4327ec(_UnityEngine_Object_TypeInfo_12d54e0);
  }
  uVar6 = native_UnityEngine_Object__op_Equality_8e9a3c(uVar12,0,0);
  if ((uVar6 & 1) == 0) {
    if (((*(ushort *)(_UICamera_TypeInfo_12d6410 + 0x132) >> 10 & 1) != 0) &&
       (*(int *)(_UICamera_TypeInfo_12d6410 + 0xe0) == 0)) {
      native_sub_4327ec(_UICamera_TypeInfo_12d6410);
    }
    native_UICamera__ShowTooltip_c953cc(0);
    plVar9 = (long *)(_UICamera_TypeInfo_12d6410 + 0xb8);
    lVar7 = *plVar9;
    lVar13 = *(long *)(lVar7 + 0xb8);
    if (*(long *)(lVar7 + 0xe0) == 0) {
      if (((*(byte *)(_UICamera_TypeInfo_12d6410 + 0x133) >> 2 & 1) != 0) &&
         (*(int *)(_UICamera_TypeInfo_12d6410 + 0xe0) == 0)) {
        native_sub_4327ec();
        plVar9 = (long *)(_UICamera_TypeInfo_12d6410 + 0xb8);
        lVar7 = *plVar9;
      }
      *(undefined4 *)(lVar7 + 0xd4) = 0xffffff9c;
      lVar7 = *plVar9;
      *(undefined8 *)(lVar7 + 0xe0) = *(undefined8 *)(lVar7 + 400);
      native_sub_4326e0(lVar7 + 0xe0);
      uVar15 = 1;
    }
    else {
      uVar15 = 0;
    }
    if (((*(byte *)(_UICamera_TypeInfo_12d6410 + 0x133) >> 2 & 1) != 0) &&
       (*(int *)(_UICamera_TypeInfo_12d6410 + 0xe0) == 0)) {
      native_sub_4327ec();
    }
    lVar7 = _UICamera_TypeInfo_12d6410;
    *(undefined1 *)(*(long *)(_UICamera_TypeInfo_12d6410 + 0xb8) + 0xe8) = 0;
    uVar12 = *(undefined8 *)(*(long *)(lVar7 + 0xb8) + 0x1e8);
    if (((*(byte *)(_UnityEngine_Object_TypeInfo_12d54e0 + 0x133) >> 2 & 1) != 0) &&
       (*(int *)(_UnityEngine_Object_TypeInfo_12d54e0 + 0xe0) == 0)) {
      native_sub_4327ec(_UnityEngine_Object_TypeInfo_12d54e0);
    }
    uVar6 = native_UnityEngine_Object__op_Implicit_8e1b98(uVar12,0);
    if ((uVar6 & 1) != 0) {
      if (((*(byte *)(_UICamera_TypeInfo_12d6410 + 0x133) >> 2 & 1) != 0) &&
         (*(int *)(_UICamera_TypeInfo_12d6410 + 0xe0) == 0)) {
        native_sub_4327ec();
      }
      uVar14 = *(undefined8 *)(*(long *)(_UICamera_TypeInfo_12d6410 + 0xb8) + 0x1e8);
      auStack_44[0] = 0;
      uVar12 = native_sub_4327fc(_bool_TypeInfo_12d3bd0,auStack_44);
      native_UICamera__Notify_c96a08(uVar14,_StringLiteral_OnSelect_12f02c0,uVar12);
      lVar10 = *(long *)(_UICamera_TypeInfo_12d6410 + 0xb8);
      lVar7 = *(long *)(lVar10 + 0x120);
      if (lVar7 != 0) {
        if (((*(byte *)(_UICamera_TypeInfo_12d6410 + 0x133) >> 2 & 1) != 0) &&
           (*(int *)(_UICamera_TypeInfo_12d6410 + 0xe0) == 0)) {
          native_sub_4327ec(_UICamera_TypeInfo_12d6410);
          lVar10 = *(long *)(_UICamera_TypeInfo_12d6410 + 0xb8);
          lVar7 = *(long *)(lVar10 + 0x120);
          if (lVar7 == 0) goto LAB_00c97ea8;
        }
        native_UICamera_BoolDelegate__Invoke_550030(lVar7,*(undefined8 *)(lVar10 + 0x1e8),0,0);
      }
    }
    if (((*(byte *)(_UICamera_TypeInfo_12d6410 + 0x133) >> 2 & 1) != 0) &&
       (*(int *)(_UICamera_TypeInfo_12d6410 + 0xe0) == 0)) {
      native_sub_4327ec();
    }
    lVar7 = *(long *)(_UICamera_TypeInfo_12d6410 + 0xb8);
    *(undefined8 *)(lVar7 + 0x1e8) = 0;
    native_sub_4326e0(lVar7 + 0x1e8,0);
    lVar7 = *(long *)(*(long *)(_UICamera_TypeInfo_12d6410 + 0xb8) + 0xe0);
    if (lVar7 != 0) {
      *(undefined4 *)(lVar7 + 0x70) = 0;
      if (((*(byte *)(_UnityEngine_Object_TypeInfo_12d54e0 + 0x133) >> 2 & 1) != 0) &&
         (*(int *)(_UnityEngine_Object_TypeInfo_12d54e0 + 0xe0) == 0)) {
        native_sub_4327ec();
      }
      uVar6 = native_UnityEngine_Object__op_Inequality_8d76fc(0,0,0);
      if ((uVar6 & 1) == 0) {
        if (((*(byte *)(_UICamera_TypeInfo_12d6410 + 0x133) >> 2 & 1) != 0) &&
           (*(int *)(_UICamera_TypeInfo_12d6410 + 0xe0) == 0)) {
          native_sub_4327ec();
        }
        uVar12 = *(undefined8 *)(*(long *)(_UICamera_TypeInfo_12d6410 + 0xb8) + 0x1e8);
        if (((*(byte *)(_UnityEngine_Object_TypeInfo_12d54e0 + 0x133) >> 2 & 1) != 0) &&
           (*(int *)(_UnityEngine_Object_TypeInfo_12d54e0 + 0xe0) == 0)) {
          native_sub_4327ec(_UnityEngine_Object_TypeInfo_12d54e0);
        }
        uVar5 = native_UnityEngine_Object__op_Implicit_8e1b98(uVar12,0);
        if ((uVar15 & uVar5) == 1) {
          if (((*(byte *)(_UICamera_TypeInfo_12d6410 + 0x133) >> 2 & 1) != 0) &&
             (*(int *)(_UICamera_TypeInfo_12d6410 + 0xe0) == 0)) {
            native_sub_4327ec();
          }
          uVar12 = *(undefined8 *)(*(long *)(_UICamera_TypeInfo_12d6410 + 0xb8) + 0x1e8);
          if (((*(byte *)(_UnityEngine_Object_TypeInfo_12d54e0 + 0x133) >> 2 & 1) != 0) &&
             (*(int *)(_UnityEngine_Object_TypeInfo_12d54e0 + 0xe0) == 0)) {
            native_sub_4327ec(_UnityEngine_Object_TypeInfo_12d54e0);
          }
          uVar6 = native_UnityEngine_Object__op_Inequality_8d76fc(uVar12,0,0);
          if ((uVar6 & 1) == 0) {
            if (((*(ushort *)(_UICamera_TypeInfo_12d6410 + 0x132) >> 10 & 1) != 0) &&
               (*(int *)(_UICamera_TypeInfo_12d6410 + 0xe0) == 0)) {
              native_sub_4327ec(_UICamera_TypeInfo_12d6410);
            }
            if ((**(long **)(_UICamera_TypeInfo_12d6410 + 0xb8) == 0) ||
               (lVar7 = *(long *)(**(long **)(_UICamera_TypeInfo_12d6410 + 0xb8) + 0x10), lVar7 == 0
               )) goto LAB_00c97ea8;
            if (*(int *)(lVar7 + 0x18) == 0) {
              uVar12 = native_sub_43283c();
                    /* WARNING: Subroutine does not return */
              native_sub_4327dc(uVar12,0);
            }
            lVar7 = *(long *)(lVar7 + 0x20);
          }
          else {
            if (((*(ushort *)(_UICamera_TypeInfo_12d6410 + 0x132) >> 10 & 1) != 0) &&
               (*(int *)(_UICamera_TypeInfo_12d6410 + 0xe0) == 0)) {
              native_sub_4327ec(_UICamera_TypeInfo_12d6410);
            }
            lVar7 = *(long *)(*(long *)(_UICamera_TypeInfo_12d6410 + 0xb8) + 0x1e8);
            if (lVar7 == 0) goto LAB_00c97ea8;
            native_UnityEngine_GameObject__get_layer_8de608(lVar7,0);
            lVar7 = native_UICamera__FindCameraForLayer_c96d2c();
          }
          if (((*(byte *)(_UnityEngine_Object_TypeInfo_12d54e0 + 0x133) >> 2 & 1) != 0) &&
             (*(int *)(_UnityEngine_Object_TypeInfo_12d54e0 + 0xe0) == 0)) {
            native_sub_4327ec();
          }
          uVar6 = native_UnityEngine_Object__op_Inequality_8d76fc(lVar7,0,0);
          if ((uVar6 & 1) != 0) {
            if (((*(byte *)(_UICamera_TypeInfo_12d6410 + 0x133) >> 2 & 1) != 0) &&
               (*(int *)(_UICamera_TypeInfo_12d6410 + 0xe0) == 0)) {
              native_sub_4327ec();
            }
            plVar9 = (long *)(*(long *)(_UICamera_TypeInfo_12d6410 + 0xb8) + 0xb8);
            *plVar9 = lVar7;
            native_sub_4326e0(plVar9,lVar7);
            if (lVar7 == 0) goto LAB_00c97ea8;
            uVar12 = native_UICamera__get_cachedCamera_c95254(lVar7);
            puVar8 = (undefined8 *)(*(long *)(_UICamera_TypeInfo_12d6410 + 0xb8) + 0xc0);
            *puVar8 = uVar12;
            native_sub_4326e0(puVar8,uVar12);
          }
        }
        if (((*(byte *)(_UICamera_TypeInfo_12d6410 + 0x133) >> 2 & 1) != 0) &&
           (*(int *)(_UICamera_TypeInfo_12d6410 + 0xe0) == 0)) {
          native_sub_4327ec();
        }
        uVar12 = *(undefined8 *)(*(long *)(_UICamera_TypeInfo_12d6410 + 0xb8) + 0x1e8);
        if (((*(byte *)(_UnityEngine_Object_TypeInfo_12d54e0 + 0x133) >> 2 & 1) != 0) &&
           (*(int *)(_UnityEngine_Object_TypeInfo_12d54e0 + 0xe0) == 0)) {
          native_sub_4327ec(_UnityEngine_Object_TypeInfo_12d54e0);
        }
        uVar6 = native_UnityEngine_Object__op_Implicit_8e1b98(uVar12,0);
        if ((uVar6 & 1) != 0) {
          if (((*(byte *)(_UICamera_TypeInfo_12d6410 + 0x133) >> 2 & 1) != 0) &&
             (*(int *)(_UICamera_TypeInfo_12d6410 + 0xe0) == 0)) {
            native_sub_4327ec();
          }
          lVar7 = *(long *)(*(long *)(_UICamera_TypeInfo_12d6410 + 0xb8) + 0x1e8);
          if (lVar7 == 0) goto LAB_00c97ea8;
          uVar6 = native_UnityEngine_GameObject__get_activeInHierarchy_8de728(lVar7,0);
          if ((uVar6 & 1) == 0) {
            bVar4 = 0;
          }
          else {
            if (((*(byte *)(_UICamera_TypeInfo_12d6410 + 0x133) >> 2 & 1) != 0) &&
               (*(int *)(_UICamera_TypeInfo_12d6410 + 0xe0) == 0)) {
              native_sub_4327ec();
            }
            lVar7 = *(long *)(*(long *)(_UICamera_TypeInfo_12d6410 + 0xb8) + 0x1e8);
            if (lVar7 == 0) goto LAB_00c97ea8;
            uVar12 = native_UnityEngine_GameObject__GetComponent_BE2_BlockSectionHeader_Custom__4a2214
                               (lVar7,_Method_UnityEngine_GameObject_GetComponent_UIInput____12e4ab0
                               );
            if (((*(byte *)(_UnityEngine_Object_TypeInfo_12d54e0 + 0x133) >> 2 & 1) != 0) &&
               (*(int *)(_UnityEngine_Object_TypeInfo_12d54e0 + 0xe0) == 0)) {
              native_sub_4327ec(_UnityEngine_Object_TypeInfo_12d54e0);
            }
            bVar4 = native_UnityEngine_Object__op_Inequality_8d76fc(uVar12,0,0);
            bVar4 = bVar4 & 1;
          }
          if (((*(byte *)(_UICamera_TypeInfo_12d6410 + 0x133) >> 2 & 1) != 0) &&
             (*(int *)(_UICamera_TypeInfo_12d6410 + 0xe0) == 0)) {
            native_sub_4327ec();
          }
          lVar7 = _UICamera_TypeInfo_12d6410;
          *(byte *)(*(long *)(_UICamera_TypeInfo_12d6410 + 0xb8) + 0xe8) = bVar4;
          lVar11 = *(long *)(lVar7 + 0xb8);
          lVar10 = *(long *)(lVar11 + 0x120);
          if (lVar10 != 0) {
            if (((*(byte *)(lVar7 + 0x133) >> 2 & 1) != 0) && (*(int *)(lVar7 + 0xe0) == 0)) {
              native_sub_4327ec();
              lVar11 = *(long *)(_UICamera_TypeInfo_12d6410 + 0xb8);
              lVar10 = *(long *)(lVar11 + 0x120);
              if (lVar10 == 0) goto LAB_00c97ea8;
            }
            native_UICamera_BoolDelegate__Invoke_550030(lVar10,*(undefined8 *)(lVar11 + 0x1e8),1,0);
            lVar7 = _UICamera_TypeInfo_12d6410;
          }
          if (((*(byte *)(lVar7 + 0x133) >> 2 & 1) != 0) && (*(int *)(lVar7 + 0xe0) == 0)) {
            native_sub_4327ec();
            lVar7 = _UICamera_TypeInfo_12d6410;
          }
          uVar14 = *(undefined8 *)(*(long *)(lVar7 + 0xb8) + 0x1e8);
          auStack_48[0] = 1;
          uVar12 = native_sub_4327fc(_bool_TypeInfo_12d3bd0,auStack_48);
          native_UICamera__Notify_c96a08(uVar14,_StringLiteral_OnSelect_12f02c0,uVar12);
        }
        if (uVar15 != 0) {
          if (((*(byte *)(_UICamera_TypeInfo_12d6410 + 0x133) >> 2 & 1) != 0) &&
             (*(int *)(_UICamera_TypeInfo_12d6410 + 0xe0) == 0)) {
            native_sub_4327ec();
          }
          plVar9 = (long *)(*(long *)(_UICamera_TypeInfo_12d6410 + 0xb8) + 0xb8);
          *plVar9 = lVar13;
          native_sub_4326e0(plVar9,lVar13);
          if (((*(byte *)(_UnityEngine_Object_TypeInfo_12d54e0 + 0x133) >> 2 & 1) != 0) &&
             (*(int *)(_UnityEngine_Object_TypeInfo_12d54e0 + 0xe0) == 0)) {
            native_sub_4327ec();
          }
          uVar6 = native_UnityEngine_Object__op_Inequality_8d76fc(lVar13,0,0);
          uVar12 = 0;
          if ((uVar6 & 1) != 0) {
            if (lVar13 == 0) goto LAB_00c97ea8;
            uVar12 = native_UICamera__get_cachedCamera_c95254(lVar13);
          }
          if (((*(byte *)(_UICamera_TypeInfo_12d6410 + 0x133) >> 2 & 1) != 0) &&
             (*(int *)(_UICamera_TypeInfo_12d6410 + 0xe0) == 0)) {
            native_sub_4327ec();
          }
          puVar8 = (undefined8 *)(*(long *)(_UICamera_TypeInfo_12d6410 + 0xb8) + 0xc0);
          *puVar8 = uVar12;
          native_sub_4326e0(puVar8,uVar12);
          puVar8 = (undefined8 *)(*(long *)(_UICamera_TypeInfo_12d6410 + 0xb8) + 0xe0);
          *puVar8 = 0;
          native_sub_4326e0(puVar8,0);
          *(undefined4 *)(*(long *)(_UICamera_TypeInfo_12d6410 + 0xb8) + 0xd4) = 0xffffff9c;
        }
        return;
      }
    }
  }
  else {
    if (((*(ushort *)(_UICamera_TypeInfo_12d6410 + 0x132) >> 10 & 1) != 0) &&
       (*(int *)(_UICamera_TypeInfo_12d6410 + 0xe0) == 0)) {
      native_sub_4327ec(_UICamera_TypeInfo_12d6410);
    }
    native_UICamera__set_hoveredObject_c9622c(0);
    lVar7 = *(long *)(*(long *)(_UICamera_TypeInfo_12d6410 + 0xb8) + 400);
    if (lVar7 != 0) {
      puVar8 = (undefined8 *)(lVar7 + 0x48);
      *puVar8 = 0;
      if (iRam0000000001345318 != 0) {
        puVar1 = (ulong *)(((ulong)puVar8 >> 0x12 & 0x7fff) * 8 + 0x138ecd8);
        do {
          cVar2 = '\x01';
          bVar3 = (bool)ExclusiveMonitorPass(puVar1,0x10);
          if (bVar3) {
            *puVar1 = *puVar1 | 1L << ((ulong)puVar8 >> 0xc & 0x3f);
            cVar2 = ExclusiveMonitorsStatus();
          }
        } while (cVar2 != '\0');
      }
      return;
    }
  }
LAB_00c97ea8:
                    /* WARNING: Subroutine does not return */
  native_sub_432810();
}



/* UIInput$$SaveValue @ 0x9f5dd4
 * void UIInput__SaveValue (UIInput_o* __this, const MethodInfo* method); */

/* UIInput$$SaveValue
   void UIInput__SaveValue (UIInput_o* __this, const MethodInfo* method); */

void native_UIInput__SaveValue_9f5dd4(long param_1)

{
  ulong uVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  
  uVar2 = *(undefined8 *)(param_1 + 0x90);
  uVar1 = native_System_String__IsNullOrEmpty_b09430(*(undefined8 *)(param_1 + 0x38),0);
  if ((uVar1 & 1) != 0) {
    return;
  }
  uVar1 = native_System_String__IsNullOrEmpty_b09430(uVar2,0);
  uVar3 = *(undefined8 *)(param_1 + 0x38);
  if ((uVar1 & 1) != 0) {
    if (pcRam000000000133f7a8 == (code *)0x0) {
      pcRam000000000133f7a8 = (code *)native_sub_4326f0(&UNK_00e27b88);
    }
                    /* WARNING: Could not recover jumptable at 0x00762088. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*pcRam000000000133f7a8)(uVar3);
    return;
  }
  if (pcRam000000000133f778 == (code *)0x0) {
    pcRam000000000133f778 = (code *)native_sub_4326f0(&UNK_00e27a58,uVar2,0);
  }
  uVar1 = (*pcRam000000000133f778)(uVar3,uVar2);
  if ((uVar1 & 1) != 0) {
    return;
  }
  native_sub_432740(&UnityEngine_PlayerPrefsException_TypeInfo_12d56f8);
  uVar2 = native_sub_432808();
  uVar3 = native_sub_432740(&StringLiteral_Could_not_store_preference_value_12ed488);
  native_UnityEngine_PlayerPrefsException___ctor_761cf8(uVar2,uVar3);
  uVar3 = native_sub_432740(&Method_UnityEngine_PlayerPrefs_SetString___12e5df0);
                    /* WARNING: Subroutine does not return */
  native_sub_4327dc(uVar2,uVar3);
}



/* UIInput$$LoadValue @ 0x9f39f8
 * void UIInput__LoadValue (UIInput_o* __this, const MethodInfo* method); */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* UIInput$$LoadValue
   void UIInput__LoadValue (UIInput_o* __this, const MethodInfo* method); */

void native_UIInput__LoadValue_9f39f8(long param_1)

{
  ulong *puVar1;
  undefined4 uVar2;
  char cVar3;
  bool bVar4;
  long lVar5;
  ulong uVar6;
  long lVar7;
  undefined8 uVar8;
  undefined8 *puVar9;
  long *plVar10;
  
  if ((bRam0000000001341997 & 1) == 0) {
    native_sub_43273c(&StringLiteral___12eab80);
    native_sub_43273c(&StringLiteral__n_12f33e0);
    native_sub_43273c(&StringLiteral__12eaac0);
    bRam0000000001341997 = 1;
  }
  uVar6 = native_System_String__IsNullOrEmpty_b09430(*(undefined8 *)(param_1 + 0x38),0);
  if ((uVar6 & 1) != 0) {
    return;
  }
  lVar7 = *(long *)(param_1 + 0x90);
  if (lVar7 == 0) {
                    /* WARNING: Subroutine does not return */
    native_sub_432810();
  }
  uVar8 = native_System_String__Replace_afd9ac
                    (lVar7,_StringLiteral__n_12f33e0,_StringLiteral___12eab80,0);
  *(undefined8 *)(param_1 + 0x90) = _StringLiteral__12eaac0;
  native_sub_4326e0((long *)(param_1 + 0x90));
  uVar6 = native_UnityEngine_PlayerPrefs__HasKey_76200c(*(undefined8 *)(param_1 + 0x38),0);
  if ((uVar6 & 1) != 0) {
    uVar8 = native_UnityEngine_PlayerPrefs__GetString_761f94(*(undefined8 *)(param_1 + 0x38),0);
  }
  if ((bRam0000000001341978 & 1) == 0) {
    native_sub_43273c(&UIInput_TypeInfo_12d6450);
    bRam0000000001341978 = 1;
  }
  if ((*(char *)(param_1 + 0xb4) != '\0') &&
     (native_UIInput__Init_9f1988(param_1), *(char *)(param_1 + 0xb4) != '\0')) {
    native_UIInput__Init_9f1988(param_1);
  }
  puVar9 = (undefined8 *)(param_1 + 0x90);
  uVar6 = native_System_String__op_Equality_afc18c(uVar8,*puVar9,0);
  if ((uVar6 & 1) == 0) {
    if (((*(byte *)(_UIInput_TypeInfo_12d6450 + 0x133) >> 2 & 1) != 0) &&
       (*(int *)(_UIInput_TypeInfo_12d6450 + 0xe0) == 0)) {
      native_sub_4327ec();
    }
    *(undefined4 *)(*(long *)(_UIInput_TypeInfo_12d6450 + 0xb8) + 0x10) = 0;
    lVar7 = native_UIInput__Validate_9f2be8(param_1,uVar8);
    uVar6 = native_UIInput__get_isSelected_9f283c(param_1);
    if ((uVar6 & 1) != 0) {
      if (((*(byte *)(_UIInput_TypeInfo_12d6450 + 0x133) >> 2 & 1) != 0) &&
         (*(int *)(_UIInput_TypeInfo_12d6450 + 0xe0) == 0)) {
        native_sub_4327ec();
      }
      if (*(long *)(*(long *)(_UIInput_TypeInfo_12d6450 + 0xb8) + 0x20) != 0) {
        plVar10 = (long *)(param_1 + 0xe8);
        uVar6 = native_System_String__op_Inequality_afbbb4(*plVar10,lVar7,0);
        if ((uVar6 & 1) != 0) {
          if (((*(byte *)(_UIInput_TypeInfo_12d6450 + 0x133) >> 2 & 1) != 0) &&
             (*(int *)(_UIInput_TypeInfo_12d6450 + 0xe0) == 0)) {
            native_sub_4327ec();
          }
          lVar5 = *(long *)(*(long *)(_UIInput_TypeInfo_12d6450 + 0xb8) + 0x20);
          if (lVar5 == 0) goto LAB_009f2be4;
          native_UnityEngine_TouchScreenKeyboard__set_text_77103c(lVar5,lVar7,0);
          *plVar10 = lVar7;
          native_sub_4326e0(plVar10,lVar7);
        }
      }
    }
    uVar6 = native_System_String__op_Inequality_afbbb4(*puVar9,lVar7,0);
    if ((uVar6 & 1) != 0) {
      *(long *)(param_1 + 0x90) = lVar7;
      native_sub_4326e0(puVar9,lVar7);
      *(undefined1 *)(param_1 + 0xbc) = 0;
      uVar6 = native_UIInput__get_isSelected_9f283c(param_1);
      if ((uVar6 & 1) == 0) {
        if (*(char *)(param_1 + 0xf8) != '\0') {
          native_UIInput__SaveToPlayerPrefs_9f2de4(param_1,lVar7);
        }
      }
      else {
        uVar6 = native_System_String__IsNullOrEmpty_b09430(lVar7,0);
        if ((uVar6 & 1) == 0) {
          if (lVar7 == 0) {
LAB_009f2be4:
                    /* WARNING: Subroutine does not return */
            native_sub_432810();
          }
          uVar2 = *(undefined4 *)(lVar7 + 0x10);
          *(undefined4 *)(param_1 + 0xc0) = uVar2;
          *(undefined4 *)(param_1 + 0xc4) = uVar2;
        }
        else {
          *(undefined8 *)(param_1 + 0xc0) = 0;
        }
      }
      native_UIInput__UpdateLabel_9f1b24(param_1);
      if ((bRam0000000001341996 & 1) == 0) {
        native_sub_43273c(&EventDelegate_TypeInfo_12d4590);
        native_sub_43273c(&UnityEngine_Object_TypeInfo_12d54e0);
        native_sub_43273c(&UIInput_TypeInfo_12d6450);
        bRam0000000001341996 = 1;
      }
      if (((*(byte *)(_UIInput_TypeInfo_12d6450 + 0x133) >> 2 & 1) != 0) &&
         (*(int *)(_UIInput_TypeInfo_12d6450 + 0xe0) == 0)) {
        native_sub_4327ec();
      }
      uVar8 = **(undefined8 **)(_UIInput_TypeInfo_12d6450 + 0xb8);
      if (((*(byte *)(_UnityEngine_Object_TypeInfo_12d54e0 + 0x133) >> 2 & 1) != 0) &&
         (*(int *)(_UnityEngine_Object_TypeInfo_12d54e0 + 0xe0) == 0)) {
        native_sub_4327ec(_UnityEngine_Object_TypeInfo_12d54e0);
      }
      uVar6 = native_UnityEngine_Object__op_Equality_8e9a3c(uVar8,0,0);
      if ((uVar6 & 1) != 0) {
        uVar8 = *(undefined8 *)(param_1 + 0x80);
        if (((*(byte *)(_EventDelegate_TypeInfo_12d4590 + 0x133) >> 2 & 1) != 0) &&
           (*(int *)(_EventDelegate_TypeInfo_12d4590 + 0xe0) == 0)) {
          native_sub_4327ec();
        }
        uVar6 = native_EventDelegate__IsValid_deef08(uVar8,0);
        if ((uVar6 & 1) != 0) {
          if (((*(byte *)(_UIInput_TypeInfo_12d6450 + 0x133) >> 2 & 1) != 0) &&
             (*(int *)(_UIInput_TypeInfo_12d6450 + 0xe0) == 0)) {
            native_sub_4327ec();
          }
          plVar10 = *(long **)(_UIInput_TypeInfo_12d6450 + 0xb8);
          *plVar10 = param_1;
          native_sub_4326e0(plVar10,param_1);
          uVar8 = *(undefined8 *)(param_1 + 0x80);
          if (((*(byte *)(_EventDelegate_TypeInfo_12d4590 + 0x133) >> 2 & 1) != 0) &&
             (*(int *)(_EventDelegate_TypeInfo_12d4590 + 0xe0) == 0)) {
            native_sub_4327ec();
          }
          native_EventDelegate__Execute_deecbc(uVar8,0);
          puVar9 = *(undefined8 **)(_UIInput_TypeInfo_12d6450 + 0xb8);
          *puVar9 = 0;
          if (iRam0000000001345318 != 0) {
            puVar1 = (ulong *)(((ulong)puVar9 >> 0x12 & 0x7fff) * 8 + 0x138ecd8);
            do {
              cVar3 = '\x01';
              bVar4 = (bool)ExclusiveMonitorPass(puVar1,0x10);
              if (bVar4) {
                *puVar1 = *puVar1 | 1L << ((ulong)puVar9 >> 0xc & 0x3f);
                cVar3 = ExclusiveMonitorsStatus();
              }
            } while (cVar3 != '\0');
          }
          return;
        }
      }
      return;
    }
  }
  return;
}



/* UIInput$$.ctor @ 0x9f5ddc
 * void UIInput___ctor (UIInput_o* __this, const MethodInfo* method); */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* UIInput$$.ctor
   void UIInput___ctor (UIInput_o* __this, const MethodInfo* method); */

void native_UIInput___ctor_9f5ddc
               (undefined1 param_1 [16],undefined4 param_2,undefined4 param_3,undefined4 param_4,
               long param_5)

{
  undefined8 uVar1;
  undefined4 uVar2;
  undefined4 uVar3;
  undefined4 uVar4;
  undefined4 uVar5;
  undefined8 uStack_60;
  undefined8 uStack_58;
  undefined8 uStack_50;
  undefined8 uStack_48;
  
  if ((bRam0000000001341998 & 1) == 0) {
    native_sub_43273c(&Method_System_Collections_Generic_List_EventDelegate___ctor___12dc738);
    native_sub_43273c(&System_Collections_Generic_List_EventDelegate__TypeInfo_12d2a08);
    native_sub_43273c(&StringLiteral__12eaac0);
    bRam0000000001341998 = 1;
  }
  *(undefined1 *)(param_5 + 0x2d) = 1;
  uVar2 = native_UnityEngine_Color__get_white_8d9e10(0);
  *(undefined4 *)(param_5 + 0x50) = param_3;
  *(undefined4 *)(param_5 + 0x54) = param_4;
  *(undefined4 *)(param_5 + 0x48) = uVar2;
  *(undefined4 *)(param_5 + 0x4c) = param_2;
  uStack_50 = 0;
  uStack_48 = 0;
  native_UnityEngine_Color___ctor_8d980c(0x3f800000,0x3f800000,0x3f800000,0x3f4ccccd,&uStack_50,0);
  uVar3 = 0x3f5fdfe0;
  uVar4 = 0x3f0d8d8e;
  *(undefined8 *)(param_5 + 0x60) = uStack_48;
  *(undefined8 *)(param_5 + 0x58) = uStack_50;
  uVar5 = 0x3f000000;
  uStack_60 = 0;
  uStack_58 = 0;
  native_UnityEngine_Color___ctor_8d980c(0x3f800000,&uStack_60,0);
  *(undefined8 *)(param_5 + 0x70) = uStack_58;
  *(undefined8 *)(param_5 + 0x68) = uStack_60;
  uVar1 = native_sub_432808(_System_Collections_Generic_List_EventDelegate__TypeInfo_12d2a08);
  native_System_Collections_Generic_List_XmlEventCache_XmlEvent______ctor_d3ff44
            (uVar1,_Method_System_Collections_Generic_List_EventDelegate___ctor___12dc738);
  *(undefined8 *)(param_5 + 0x78) = uVar1;
  native_sub_4326e0(param_5 + 0x78,uVar1);
  uVar1 = native_sub_432808(_System_Collections_Generic_List_EventDelegate__TypeInfo_12d2a08);
  native_System_Collections_Generic_List_XmlEventCache_XmlEvent______ctor_d3ff44
            (uVar1,_Method_System_Collections_Generic_List_EventDelegate___ctor___12dc738);
  *(undefined8 *)(param_5 + 0x80) = uVar1;
  native_sub_4326e0(param_5 + 0x80,uVar1);
  *(undefined8 *)(param_5 + 0x98) = _StringLiteral__12eaac0;
  native_sub_4326e0(param_5 + 0x98);
  uVar2 = native_UnityEngine_Color__get_white_8d9e10(0);
  *(undefined4 *)(param_5 + 0xa0) = uVar2;
  *(undefined4 *)(param_5 + 0xa4) = uVar3;
  *(undefined4 *)(param_5 + 0xa8) = uVar4;
  *(undefined4 *)(param_5 + 0xac) = uVar5;
  *(undefined1 *)(param_5 + 0xb4) = 1;
  *(undefined4 *)(param_5 + 0xb8) = 1;
  *(undefined1 *)(param_5 + 0xbc) = 1;
  *(undefined8 *)(param_5 + 0xe8) = _StringLiteral__12eaac0;
  native_sub_4326e0(param_5 + 0xe8);
  *(undefined8 *)(param_5 + 0xf0) = 0xffffffffffffffff;
  native_UnityEngine_MonoBehaviour___ctor_8e971c(param_5,0);
  return;
}



/* UIInput$$.cctor @ 0x9f5f78
 * void UIInput___cctor (const MethodInfo* method); */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* UIInput$$.cctor
   void UIInput___cctor (const MethodInfo* method); */

void native_UIInput___cctor_9f5f78(void)

{
  long lVar1;
  
  if ((bRam0000000001341999 & 1) == 0) {
    native_sub_43273c(&UIInput_TypeInfo_12d6450);
    native_sub_43273c(&StringLiteral__12eaac0);
    bRam0000000001341999 = 1;
  }
  lVar1 = _UIInput_TypeInfo_12d6450;
  *(undefined4 *)(*(long *)(_UIInput_TypeInfo_12d6450 + 0xb8) + 0x10) = 0;
  *(undefined8 *)(*(long *)(lVar1 + 0xb8) + 0x18) = _StringLiteral__12eaac0;
  native_sub_4326e0();
  lVar1 = _UIInput_TypeInfo_12d6450;
  *(undefined1 *)(*(long *)(_UIInput_TypeInfo_12d6450 + 0xb8) + 0x28) = 0;
  *(undefined4 *)(*(long *)(lVar1 + 0xb8) + 0x2c) = 0;
  return;
}


