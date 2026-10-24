/* ARM64 IL2CPP native pseudocode from Ghidra.
 * Recovered implementation, not original C# source.
 * Function boundaries follow the IL2CPP method address table. */


/* UITextList$$get_paragraphs @ 0x943424
 * BetterList_UITextList_Paragraph__o* UITextList__get_paragraphs (UITextList_o* __this, const MethodInfo* method); */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* UITextList$$get_paragraphs
   BetterList_UITextList_Paragraph__o* UITextList__get_paragraphs (UITextList_o* __this, const
   MethodInfo* method); */

long native_UITextList__get_paragraphs_943424(long param_1)

{
  undefined8 uVar1;
  ulong uVar2;
  long *plVar3;
  long lVar4;
  
  if ((bRam0000000001341414 & 1) == 0) {
    native_sub_43273c(&Method_BetterList_UITextList_Paragraph___ctor___12d8a88);
    native_sub_43273c(&BetterList_UITextList_Paragraph__TypeInfo_12d2170);
    native_sub_43273c(&
                      Method_System_Collections_Generic_Dictionary_string__BetterList_UITextList_Paragraph___Add___12d96c8
                     );
    native_sub_43273c(&
                      Method_System_Collections_Generic_Dictionary_string__BetterList_UITextList_Paragraph___TryGetValue___12d96d0
                     );
    native_sub_43273c(&UITextList_TypeInfo_12d64d8);
    bRam0000000001341414 = 1;
  }
  plVar3 = (long *)(param_1 + 0x48);
  if (*plVar3 == 0) {
    if (((*(byte *)(_UITextList_TypeInfo_12d64d8 + 0x133) >> 2 & 1) != 0) &&
       (*(int *)(_UITextList_TypeInfo_12d64d8 + 0xe0) == 0)) {
      native_sub_4327ec();
    }
    lVar4 = **(long **)(_UITextList_TypeInfo_12d64d8 + 0xb8);
    uVar1 = native_UnityEngine_Object__get_name_8e8098(param_1,0);
    if (lVar4 == 0) {
LAB_00943588:
                    /* WARNING: Subroutine does not return */
      native_sub_432810();
    }
    uVar2 = native_System_Collections_Generic_Dictionary_Action__LinkedListNode_Action____TryGetValue_cdc420
                      (lVar4,uVar1,plVar3,
                       _Method_System_Collections_Generic_Dictionary_string__BetterList_UITextList_Paragraph___TryGetValue___12d96d0
                      );
    if ((uVar2 & 1) == 0) {
      lVar4 = native_sub_432808(_BetterList_UITextList_Paragraph__TypeInfo_12d2170);
      native_BetterList_object____ctor_ba2d1c
                (lVar4,_Method_BetterList_UITextList_Paragraph___ctor___12d8a88);
      *plVar3 = lVar4;
      native_sub_4326e0(plVar3,lVar4);
      if (((*(byte *)(_UITextList_TypeInfo_12d64d8 + 0x133) >> 2 & 1) != 0) &&
         (*(int *)(_UITextList_TypeInfo_12d64d8 + 0xe0) == 0)) {
        native_sub_4327ec();
      }
      lVar4 = **(long **)(_UITextList_TypeInfo_12d64d8 + 0xb8);
      uVar1 = native_UnityEngine_Object__get_name_8e8098(param_1,0);
      if (lVar4 == 0) goto LAB_00943588;
      native_System_Collections_Generic_Dictionary_Canvas__IndexedSet_Graphic____Add_cda620
                (lVar4,uVar1,*plVar3,
                 _Method_System_Collections_Generic_Dictionary_string__BetterList_UITextList_Paragraph___Add___12d96c8
                );
    }
  }
  return *plVar3;
}



/* UITextList$$get_paragraphCount @ 0x94358c
 * int32_t UITextList__get_paragraphCount (UITextList_o* __this, const MethodInfo* method); */

/* UITextList$$get_paragraphCount
   int32_t UITextList__get_paragraphCount (UITextList_o* __this, const MethodInfo* method); */

undefined4 native_UITextList__get_paragraphCount_94358c(void)

{
  long lVar1;
  
  lVar1 = native_UITextList__get_paragraphs_943424();
  if (lVar1 != 0) {
    return *(undefined4 *)(lVar1 + 0x18);
  }
                    /* WARNING: Subroutine does not return */
  native_sub_432810();
}



/* UITextList$$get_isValid @ 0x9435ac
 * bool UITextList__get_isValid (UITextList_o* __this, const MethodInfo* method); */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* UITextList$$get_isValid
   bool UITextList__get_isValid (UITextList_o* __this, const MethodInfo* method); */

uint native_UITextList__get_isValid_9435ac(long param_1)

{
  uint uVar1;
  ulong uVar2;
  undefined8 uVar3;
  
  if ((bRam0000000001341415 & 1) == 0) {
    native_sub_43273c(&UnityEngine_Object_TypeInfo_12d54e0);
    bRam0000000001341415 = 1;
  }
  uVar3 = *(undefined8 *)(param_1 + 0x18);
  if (((*(byte *)(_UnityEngine_Object_TypeInfo_12d54e0 + 0x133) >> 2 & 1) != 0) &&
     (*(int *)(_UnityEngine_Object_TypeInfo_12d54e0 + 0xe0) == 0)) {
    native_sub_4327ec();
  }
  uVar2 = native_UnityEngine_Object__op_Inequality_8d76fc(uVar3,0,0);
  if ((uVar2 & 1) != 0) {
    if (*(long *)(param_1 + 0x18) != 0) {
      uVar3 = native_UILabel__get_ambigiousFont_ae8074(*(long *)(param_1 + 0x18),0);
      if (((*(byte *)(_UnityEngine_Object_TypeInfo_12d54e0 + 0x133) >> 2 & 1) != 0) &&
         (*(int *)(_UnityEngine_Object_TypeInfo_12d54e0 + 0xe0) == 0)) {
        native_sub_4327ec(_UnityEngine_Object_TypeInfo_12d54e0);
      }
      if ((bRam0000000001341084 & 1) == 0) {
        native_sub_43273c(&UnityEngine_Object_TypeInfo_12d54e0,0,0);
        bRam0000000001341084 = 1;
      }
      if (((*(byte *)(_UnityEngine_Object_TypeInfo_12d54e0 + 0x133) >> 2 & 1) != 0) &&
         (*(int *)(_UnityEngine_Object_TypeInfo_12d54e0 + 0xe0) == 0)) {
        native_sub_4327ec();
      }
      uVar1 = native_UnityEngine_Object__CompareBaseObjects_8e9aac(uVar3,0);
      return ~uVar1 & 1;
    }
                    /* WARNING: Subroutine does not return */
    native_sub_432810();
  }
  return 0;
}



/* UITextList$$get_scrollValue @ 0x94367c
 * float UITextList__get_scrollValue (UITextList_o* __this, const MethodInfo* method); */

/* UITextList$$get_scrollValue
   float UITextList__get_scrollValue (UITextList_o* __this, const MethodInfo* method); */

undefined4 native_UITextList__get_scrollValue_94367c(long param_1)

{
  return *(undefined4 *)(param_1 + 0x38);
}



/* UITextList$$set_scrollValue @ 0x943684
 * void UITextList__set_scrollValue (UITextList_o* __this, float value, const MethodInfo* method); */

/* WARNING: Removing unreachable block (ram,0x00432c1c) */
/* WARNING: Removing unreachable block (ram,0x003cc494) */
/* WARNING: Removing unreachable block (ram,0x003cc4b8) */
/* WARNING: Removing unreachable block (ram,0x003cc4d4) */
/* WARNING: Removing unreachable block (ram,0x003cc4dc) */
/* WARNING: Removing unreachable block (ram,0x003cc4f0) */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* UITextList$$set_scrollValue
   void UITextList__set_scrollValue (UITextList_o* __this, float value, const MethodInfo* method);
    */

ulong native_UITextList__set_scrollValue_943684
                (undefined8 param_1,float param_2,undefined8 param_3,undefined8 param_4,long param_5
                )

{
  int *piVar1;
  int *piVar2;
  ulong *puVar3;
  char cVar4;
  bool bVar5;
  uint uVar6;
  int iVar7;
  int iVar8;
  uint uVar9;
  int iVar10;
  ulong uVar11;
  ulong uVar12;
  ulong uVar13;
  long *plVar14;
  long *plVar15;
  undefined8 *puVar16;
  long lVar17;
  int iVar18;
  undefined8 uVar19;
  long lVar20;
  uint uVar21;
  ulong uVar22;
  float extraout_s0;
  float extraout_s0_00;
  float fVar23;
  float fVar24;
  float fVar26;
  undefined8 uVar25;
  float fVar28;
  undefined8 uVar27;
  ulong uVar29;
  float fVar30;
  ulong uVar31;
  float fVar32;
  
  if ((bRam0000000001341416 & 1) == 0) {
    native_sub_43273c(&UnityEngine_Object_TypeInfo_12d54e0);
    bRam0000000001341416 = 1;
  }
  uVar25 = native_UnityEngine_Mathf__Clamp01_8d9d9c(param_1,0);
  uVar13 = native_UITextList__get_isValid_9435ac(param_5);
  if (((uVar13 & 1) == 0) || (*(float *)(param_5 + 0x38) == (float)uVar25)) {
    return uVar13;
  }
  uVar19 = *(undefined8 *)(param_5 + 0x20);
  if (((*(byte *)(_UnityEngine_Object_TypeInfo_12d54e0 + 0x133) >> 2 & 1) != 0) &&
     (*(int *)(_UnityEngine_Object_TypeInfo_12d54e0 + 0xe0) == 0)) {
    native_sub_4327ec();
  }
  uVar13 = native_UnityEngine_Object__op_Inequality_8d76fc(uVar19,0,0);
  if ((uVar13 & 1) != 0) {
    plVar14 = *(long **)(param_5 + 0x20);
    if (plVar14 != (long *)0x0) {
      if ((bRam00000000013426fb & 1) == 0) {
        native_sub_43273c(&EventDelegate_TypeInfo_12d4590);
        native_sub_43273c(&NGUITools_TypeInfo_12d53c8);
        native_sub_43273c(&UIProgressBar_TypeInfo_12d6498);
        bRam00000000013426fb = 1;
      }
      fVar23 = (float)native_UnityEngine_Mathf__Clamp01_8d9d9c(uVar25,0);
      if (*(float *)(plVar14 + 7) == fVar23) {
        uVar13 = 0;
      }
      else {
        fVar24 = (float)native_UIProgressBar__get_value_c2b6f0(plVar14);
        *(float *)(plVar14 + 7) = fVar23;
        if (((char)plVar14[8] != '\0') &&
           (fVar23 = (float)native_UIProgressBar__get_value_c2b6f0(plVar14), fVar24 != fVar23)) {
          if (((*(byte *)(_NGUITools_TypeInfo_12d53c8 + 0x133) >> 2 & 1) != 0) &&
             (*(int *)(_NGUITools_TypeInfo_12d53c8 + 0xe0) == 0)) {
            native_sub_4327ec();
          }
          uVar13 = native_NGUITools__GetActive_72d02c(plVar14,0);
          if ((uVar13 & 1) != 0) {
            lVar20 = plVar14[0xd];
            if (((*(byte *)(_EventDelegate_TypeInfo_12d4590 + 0x133) >> 2 & 1) != 0) &&
               (*(int *)(_EventDelegate_TypeInfo_12d4590 + 0xe0) == 0)) {
              native_sub_4327ec();
            }
            uVar13 = native_EventDelegate__IsValid_deef08(lVar20,0);
            if ((uVar13 & 1) != 0) {
              plVar15 = *(long **)(_UIProgressBar_TypeInfo_12d6498 + 0xb8);
              *plVar15 = (long)plVar14;
              native_sub_4326e0(plVar15,plVar14);
              lVar20 = plVar14[0xd];
              if (((*(byte *)(_EventDelegate_TypeInfo_12d4590 + 0x133) >> 2 & 1) != 0) &&
                 (*(int *)(_EventDelegate_TypeInfo_12d4590 + 0xe0) == 0)) {
                native_sub_4327ec();
              }
              native_EventDelegate__Execute_deecbc(lVar20,0);
              puVar16 = *(undefined8 **)(_UIProgressBar_TypeInfo_12d6498 + 0xb8);
              *puVar16 = 0;
              native_sub_4326e0(puVar16,0);
            }
          }
          (**(code **)(*plVar14 + 0x1a8))(plVar14,*(undefined8 *)(*plVar14 + 0x1b0));
        }
        uVar13 = 1;
      }
      return uVar13;
    }
                    /* WARNING: Subroutine does not return */
    native_sub_432810();
  }
  *(float *)(param_5 + 0x38) = (float)uVar25;
  if ((bRam000000000134141d & 1) == 0) {
    native_sub_43273c(&System_Text_StringBuilder_TypeInfo_12d5f30);
    native_sub_43273c(&StringLiteral___12eab80);
    native_sub_43273c(&StringLiteral__12eaac0);
    bRam000000000134141d = 1;
  }
  uVar13 = native_UITextList__get_isValid_9435ac(param_5);
  fVar23 = (float)param_4;
  if ((uVar13 & 1) == 0) {
    return uVar13;
  }
  plVar14 = *(long **)(param_5 + 0x18);
  if (plVar14 == (long *)0x0) goto LAB_009439d4;
  lVar20 = _StringLiteral__12eaac0;
  if (*(int *)(param_5 + 0x3c) != 0) {
    lVar20 = plVar14[0x15];
    fVar23 = (float)native_UITextList__get_lineHeight_9439e4(param_5);
    iVar7 = native_UnityEngine_Mathf__FloorToInt_8e506c((float)(int)lVar20 / fVar23,0);
    iVar8 = native_UnityEngine_Mathf__Max_8e4cd0(0,*(int *)(param_5 + 0x3c) - iVar7,0);
    uVar13 = (ulong)(uint)(float)iVar8;
    uVar9 = native_UnityEngine_Mathf__RoundToInt_8e50f0(*(float *)(param_5 + 0x38) * (float)iVar8,0)
    ;
    plVar15 = (long *)native_sub_432808(_System_Text_StringBuilder_TypeInfo_12d5f30);
    native_System_Text_StringBuilder___ctor_a4881c(plVar15,0);
    lVar20 = native_UITextList__get_paragraphs_943424(param_5);
    param_2 = (float)uVar13;
    fVar23 = (float)param_4;
    if (lVar20 == 0) {
LAB_009439d4:
                    /* WARNING: Subroutine does not return */
      native_sub_432810();
    }
    iVar8 = *(int *)(lVar20 + 0x18);
    if ((0 < iVar8) && (0 < iVar7)) {
      uVar21 = 0;
      uVar9 = uVar9 & ((int)uVar9 >> 0x1f ^ 0xffffffffU);
      do {
        if ((*(long *)(param_5 + 0x48) == 0) ||
           (lVar20 = *(long *)(*(long *)(param_5 + 0x48) + 0x10), lVar20 == 0)) goto LAB_009439d4;
        if (*(uint *)(lVar20 + 0x18) <= uVar21) {
LAB_009439d8:
          uVar25 = native_sub_43283c();
                    /* WARNING: Subroutine does not return */
          native_sub_4327dc(uVar25,0);
        }
        lVar20 = *(long *)(lVar20 + (long)(int)uVar21 * 8 + 0x20);
        if ((lVar20 == 0) || (lVar17 = *(long *)(lVar20 + 0x18), lVar17 == 0)) goto LAB_009439d4;
        iVar18 = (int)*(undefined8 *)(lVar17 + 0x18);
        if (0 < iVar18) {
          uVar22 = 0;
          while( true ) {
            if (*(uint *)(lVar17 + 0x18) <= uVar22) goto LAB_009439d8;
            uVar6 = uVar9 - 1;
            if ((int)uVar9 < 1) {
              if (plVar15 == (long *)0x0) goto LAB_009439d4;
              uVar25 = *(undefined8 *)(lVar17 + uVar22 * 8 + 0x20);
              iVar10 = native_System_Text_StringBuilder__get_Length_a49204(plVar15,0);
              if (0 < iVar10) {
                native_System_Text_StringBuilder__Append_a49d68(plVar15,_StringLiteral___12eab80,0);
              }
              native_System_Text_StringBuilder__Append_a49d68(plVar15,uVar25,0);
              iVar7 = iVar7 + -1;
              uVar6 = uVar9;
            }
            uVar9 = uVar6;
            uVar22 = uVar22 + 1;
            if (((long)iVar18 <= (long)uVar22) || (iVar7 < 1)) break;
            lVar17 = *(long *)(lVar20 + 0x18);
            if (lVar17 == 0) goto LAB_009439d4;
          }
        }
        param_2 = (float)uVar13;
        fVar23 = (float)param_4;
        uVar21 = uVar21 + 1;
      } while (((int)uVar21 < iVar8) && (0 < iVar7));
    }
    if (plVar15 == (long *)0x0) goto LAB_009439d4;
    plVar14 = *(long **)(param_5 + 0x18);
    lVar20 = (**(code **)(*plVar15 + 0x168))(plVar15,*(undefined8 *)(*plVar15 + 0x170));
    if (plVar14 == (long *)0x0) goto LAB_009439d4;
  }
  if ((bRam0000000001342005 & 1) == 0) {
    native_sub_43273c(&StringLiteral__12eaac0,lVar20,0);
    bRam0000000001342005 = 1;
  }
  uVar13 = native_System_String__op_Equality_afc18c(plVar14[0x35],lVar20,0);
  if ((uVar13 & 1) == 0) {
    uVar13 = native_System_String__IsNullOrEmpty_b09430(lVar20,0);
    lVar17 = plVar14[0x35];
    if ((uVar13 & 1) == 0) {
      uVar13 = native_System_String__op_Inequality_afbbb4(lVar17,lVar20,0);
      if ((uVar13 & 1) == 0) {
        return uVar13;
      }
      plVar14[0x35] = lVar20;
    }
    else {
      uVar13 = native_System_String__IsNullOrEmpty_b09430(lVar17,0);
      lVar20 = _StringLiteral__12eaac0;
      if ((uVar13 & 1) != 0) {
        return uVar13;
      }
      plVar14[0x35] = _StringLiteral__12eaac0;
    }
    native_sub_4326e0(plVar14 + 0x35,lVar20);
    (**(code **)(*plVar14 + 0x378))(plVar14,*(undefined8 *)(*plVar14 + 0x380));
    uVar13 = native_UILabel__ProcessAndRequest_ae7fdc(plVar14);
    if ((char)plVar14[0x1b] != '\0') {
      if ((bRam000000000134145d & 1) == 0) {
        native_sub_43273c(&Method_UnityEngine_Component_GetComponent_BoxCollider2D____12e2998,0);
        native_sub_43273c(&Method_UnityEngine_Component_GetComponent_BoxCollider____12e2990);
        native_sub_43273c(&NGUITools_TypeInfo_12d53c8);
        native_sub_43273c(&UnityEngine_Object_TypeInfo_12d54e0);
        bRam000000000134145d = 1;
      }
      lVar20 = native_UnityEngine_Component__GetComponent_ActiveAnimation__49daec
                         (plVar14,_Method_UnityEngine_Component_GetComponent_BoxCollider____12e2990)
      ;
      if (((*(byte *)(_UnityEngine_Object_TypeInfo_12d54e0 + 0x133) >> 2 & 1) != 0) &&
         (*(int *)(_UnityEngine_Object_TypeInfo_12d54e0 + 0xe0) == 0)) {
        native_sub_4327ec(_UnityEngine_Object_TypeInfo_12d54e0);
      }
      uVar13 = native_UnityEngine_Object__op_Inequality_8d76fc(lVar20,0,0);
      if ((uVar13 & 1) == 0) {
        lVar20 = native_UnityEngine_Component__GetComponent_ActiveAnimation__49daec
                           (plVar14,
                            _Method_UnityEngine_Component_GetComponent_BoxCollider2D____12e2998);
        fVar24 = (float)param_3;
        if (((*(byte *)(_NGUITools_TypeInfo_12d53c8 + 0x133) >> 2 & 1) != 0) &&
           (*(int *)(_NGUITools_TypeInfo_12d53c8 + 0xe0) == 0)) {
          native_sub_4327ec(_NGUITools_TypeInfo_12d53c8);
        }
        if ((bRam000000000133f58e & 1) == 0) {
          native_sub_43273c(&NGUITools_TypeInfo_12d53c8,lVar20,0);
          native_sub_43273c(&UnityEngine_Object_TypeInfo_12d54e0);
          native_sub_43273c(&StringLiteral_last_change_12f5390);
          bRam000000000133f58e = 1;
        }
        if (((*(byte *)(_UnityEngine_Object_TypeInfo_12d54e0 + 0x133) >> 2 & 1) != 0) &&
           (*(int *)(_UnityEngine_Object_TypeInfo_12d54e0 + 0xe0) == 0)) {
          native_sub_4327ec();
        }
        uVar13 = native_UnityEngine_Object__op_Inequality_8d76fc(lVar20,0,0);
        if ((uVar13 & 1) == 0) {
          return uVar13;
        }
        if (((*(byte *)(_UnityEngine_Object_TypeInfo_12d54e0 + 0x133) >> 2 & 1) != 0) &&
           (*(int *)(_UnityEngine_Object_TypeInfo_12d54e0 + 0xe0) == 0)) {
          native_sub_4327ec();
        }
        uVar13 = native_UnityEngine_Object__op_Inequality_8d76fc(plVar14,0,0);
        if ((uVar13 & 1) == 0) {
          return uVar13;
        }
        if (plVar14 == (long *)0x0) {
LAB_0072ea2c:
                    /* WARNING: Subroutine does not return */
          native_sub_432810();
        }
        lVar17 = *plVar14;
        if ((((*(float *)((long)plVar14 + 0x104) == 0.0) && (*(float *)(plVar14 + 0x21) == 0.0)) &&
            (param_2 = *(float *)((long)plVar14 + 0x10c), param_2 == 1.0)) &&
           (param_2 = *(float *)(plVar14 + 0x22), param_2 == 1.0)) {
          lVar17 = (**(code **)(lVar17 + 0x1d8))(plVar14,*(undefined8 *)(lVar17 + 0x1e0));
          if (lVar17 == 0) goto LAB_0072ea2c;
          if ((*(uint *)(lVar17 + 0x18) == 0) || (*(uint *)(lVar17 + 0x18) < 3)) {
LAB_0072ea30:
            uVar25 = native_sub_43283c();
                    /* WARNING: Subroutine does not return */
            native_sub_4327dc(uVar25,0);
          }
          uVar25 = *(undefined8 *)(lVar17 + 0x20);
          uVar19 = *(undefined8 *)(lVar17 + 0x38);
          fVar23 = (float)native_UnityEngine_Mathf__Clamp01_8d9d9c(0x3f000000,0);
          if (*(uint *)(lVar17 + 0x18) < 3) goto LAB_0072ea30;
          if (lVar20 == 0) goto LAB_0072ea2c;
          uVar27 = *(undefined8 *)(lVar17 + 0x38);
          fVar30 = (float)uVar25;
          fVar26 = (float)((ulong)uVar25 >> 0x20);
          fVar30 = fVar30 + ((float)uVar19 - fVar30) * fVar23;
          fVar26 = fVar26 + ((float)((ulong)uVar19 >> 0x20) - fVar26) * fVar23;
          uVar25 = CONCAT44(fVar26,fVar30);
          fVar28 = (float)uVar27 - (float)*(undefined8 *)(lVar17 + 0x20);
          fVar23 = (float)((ulong)uVar27 >> 0x20) -
                   (float)((ulong)*(undefined8 *)(lVar17 + 0x20) >> 0x20);
          uVar13 = CONCAT44(fVar23,fVar28);
          fVar24 = (float)native_UnityEngine_Collider2D__get_offset_db8b24(lVar20,0);
          fVar30 = fVar30 - fVar24;
          fVar24 = fVar26 - (float)uVar27;
          if ((fVar30 * fVar30 + fVar24 * fVar24 < 9.9999994e-11) &&
             (uVar19 = uVar25, uVar22 = native_UnityEngine_BoxCollider2D__get_size_db8988(lVar20,0),
             fVar28 = fVar28 - extraout_s0, fVar24 = fVar23 - (float)uVar19,
             fVar28 * fVar28 + fVar24 * fVar24 < 9.9999994e-11)) {
            return uVar22;
          }
          native_UnityEngine_Collider2D__set_offset_db8bcc(uVar25,fVar26,lVar20,0);
        }
        else {
          fVar30 = (float)(**(code **)(lVar17 + 0x2f8))(plVar14,*(undefined8 *)(lVar17 + 0x300));
          if (lVar20 == 0) goto LAB_0072ea2c;
          uVar13 = (ulong)(uint)(fVar24 - fVar30);
          fVar32 = (fVar30 + fVar24) * 0.5;
          fVar26 = (param_2 + fVar23) * 0.5;
          fVar23 = fVar23 - param_2;
          fVar28 = (float)native_UnityEngine_Collider2D__get_offset_db8b24(lVar20,0);
          fVar28 = fVar32 - fVar28;
          param_2 = fVar26 - param_2;
          param_2 = param_2 * param_2;
          if ((fVar28 * fVar28 + param_2 < 9.9999994e-11) &&
             (uVar22 = native_UnityEngine_BoxCollider2D__get_size_db8988(lVar20,0),
             fVar24 = (fVar24 - fVar30) - extraout_s0_00,
             fVar24 * fVar24 + (fVar23 - param_2) * (fVar23 - param_2) < 9.9999994e-11)) {
            return uVar22;
          }
          native_UnityEngine_Collider2D__set_offset_db8bcc(fVar32,fVar26,lVar20,0);
        }
        native_UnityEngine_BoxCollider2D__set_size_db8a30(uVar13,fVar23,lVar20,0);
        if ((*(byte *)(_NGUITools_TypeInfo_12d53c8 + 0x133) >> 2 & 1) == 0) {
          return _NGUITools_TypeInfo_12d53c8;
        }
        if (*(int *)(_NGUITools_TypeInfo_12d53c8 + 0xe0) != 0) {
          return _NGUITools_TypeInfo_12d53c8;
        }
      }
      else {
        if (((*(byte *)(_NGUITools_TypeInfo_12d53c8 + 0x133) >> 2 & 1) != 0) &&
           (*(int *)(_NGUITools_TypeInfo_12d53c8 + 0xe0) == 0)) {
          native_sub_4327ec();
        }
        if ((bRam000000000133f58d & 1) == 0) {
          native_sub_43273c(&NGUITools_TypeInfo_12d53c8,lVar20,0);
          native_sub_43273c(&UnityEngine_Object_TypeInfo_12d54e0);
          native_sub_43273c(&StringLiteral_last_change_12f5390);
          bRam000000000133f58d = 1;
        }
        if (((*(byte *)(_UnityEngine_Object_TypeInfo_12d54e0 + 0x133) >> 2 & 1) != 0) &&
           (*(int *)(_UnityEngine_Object_TypeInfo_12d54e0 + 0xe0) == 0)) {
          native_sub_4327ec();
        }
        uVar13 = native_UnityEngine_Object__op_Inequality_8d76fc(lVar20,0,0);
        if ((uVar13 & 1) == 0) {
          return uVar13;
        }
        if (((*(byte *)(_UnityEngine_Object_TypeInfo_12d54e0 + 0x133) >> 2 & 1) != 0) &&
           (*(int *)(_UnityEngine_Object_TypeInfo_12d54e0 + 0xe0) == 0)) {
          native_sub_4327ec();
        }
        uVar13 = native_UnityEngine_Object__op_Inequality_8d76fc(plVar14,0,0);
        if ((uVar13 & 1) == 0) {
          return uVar13;
        }
        if (plVar14 == (long *)0x0) {
LAB_0072e730:
                    /* WARNING: Subroutine does not return */
          native_sub_432810();
        }
        lVar17 = *plVar14;
        if ((((*(float *)((long)plVar14 + 0x104) == 0.0) && (*(float *)(plVar14 + 0x21) == 0.0)) &&
            (param_2 = *(float *)((long)plVar14 + 0x10c), param_2 == 1.0)) &&
           (param_2 = *(float *)(plVar14 + 0x22), param_2 == 1.0)) {
          lVar17 = (**(code **)(lVar17 + 0x1d8))(plVar14,*(undefined8 *)(lVar17 + 0x1e0));
          if (lVar17 == 0) goto LAB_0072e730;
          if ((*(uint *)(lVar17 + 0x18) == 0) || (*(uint *)(lVar17 + 0x18) < 3)) {
LAB_0072e734:
            uVar25 = native_sub_43283c();
                    /* WARNING: Subroutine does not return */
            native_sub_4327dc(uVar25,0);
          }
          uVar25 = *(undefined8 *)(lVar17 + 0x20);
          fVar30 = *(float *)(lVar17 + 0x28);
          uVar19 = *(undefined8 *)(lVar17 + 0x38);
          fVar24 = *(float *)(lVar17 + 0x40);
          fVar23 = (float)native_UnityEngine_Mathf__Clamp01_8d9d9c(0x3f000000,0);
          if (*(uint *)(lVar17 + 0x18) < 3) goto LAB_0072e734;
          if (lVar20 == 0) goto LAB_0072e730;
          fVar26 = (float)uVar25;
          fVar28 = (float)((ulong)uVar25 >> 0x20);
          fVar24 = fVar24 - fVar30;
          uVar12 = (ulong)(uint)fVar24;
          fVar28 = fVar28 + ((float)((ulong)uVar19 >> 0x20) - fVar28) * fVar23;
          uVar27 = CONCAT44(fVar28,fVar26 + ((float)uVar19 - fVar26) * fVar23);
          uVar31 = (ulong)(uint)(fVar30 + fVar24 * fVar23);
          fVar30 = (float)((ulong)*(undefined8 *)(lVar17 + 0x38) >> 0x20) -
                   (float)((ulong)*(undefined8 *)(lVar17 + 0x20) >> 0x20);
          uVar11 = CONCAT44(fVar30,(float)*(undefined8 *)(lVar17 + 0x38) -
                                   (float)*(undefined8 *)(lVar17 + 0x20));
          fVar23 = *(float *)(lVar17 + 0x40) - *(float *)(lVar17 + 0x28);
          uVar25 = uVar27;
          uVar19 = native_UnityEngine_BoxCollider__get_center_dba95c(lVar20,0);
          uVar13 = (ulong)(uint)fVar28;
          uVar22 = uVar13;
          uVar29 = uVar31;
          uVar12 = native_UnityEngine_Vector3__op_Inequality_776c48
                             (uVar27,uVar13,uVar31,uVar19,uVar25,uVar12,0);
          if ((uVar12 & 1) == 0) {
            uVar25 = native_UnityEngine_BoxCollider__get_size_dbaab4(lVar20,0);
            uVar22 = native_UnityEngine_Vector3__op_Inequality_776c48
                               (uVar11,fVar30,fVar23,uVar25,uVar22,uVar29,0);
            if ((uVar22 & 1) == 0) {
              return uVar22;
            }
          }
          native_UnityEngine_BoxCollider__set_center_dbaa0c(uVar27,uVar13,uVar31,lVar20,0);
        }
        else {
          fVar24 = (float)(**(code **)(lVar17 + 0x2f8))(plVar14,*(undefined8 *)(lVar17 + 0x300));
          if (lVar20 == 0) goto LAB_0072e730;
          uVar11 = (ulong)(uint)((float)param_3 - fVar24);
          fVar30 = fVar23 - param_2;
          uVar22 = (ulong)(uint)(param_2 + fVar23);
          uVar29 = (ulong)(uint)((param_2 + fVar23) * 0.5);
          fVar24 = (fVar24 + (float)param_3) * 0.5;
          uVar25 = native_UnityEngine_BoxCollider__get_center_dba95c(lVar20,0);
          uVar19 = 0;
          fVar23 = 0.0;
          uVar13 = uVar29;
          uVar22 = native_UnityEngine_Vector3__op_Inequality_776c48
                             (fVar24,uVar29,0,uVar25,uVar22,param_3,0);
          if ((uVar22 & 1) == 0) {
            uVar25 = native_UnityEngine_BoxCollider__get_size_dbaab4(lVar20,0);
            uVar13 = native_UnityEngine_Vector3__op_Inequality_776c48
                               (uVar11,fVar30,0,uVar25,uVar13,uVar19,0);
            if ((uVar13 & 1) == 0) {
              return uVar13;
            }
          }
          native_UnityEngine_BoxCollider__set_center_dbaa0c(fVar24,uVar29,0,lVar20,0);
        }
        native_UnityEngine_BoxCollider__set_size_dbab64(uVar11,fVar30,fVar23,lVar20,0);
        if ((*(byte *)(_NGUITools_TypeInfo_12d53c8 + 0x133) >> 2 & 1) == 0) {
          return _NGUITools_TypeInfo_12d53c8;
        }
        if (*(int *)(_NGUITools_TypeInfo_12d53c8 + 0xe0) != 0) {
          return _NGUITools_TypeInfo_12d53c8;
        }
      }
      uVar13 = _NGUITools_TypeInfo_12d53c8;
      if ((*(byte *)(_NGUITools_TypeInfo_12d53c8 + 0x133) >> 2 & 1) == 0) {
        return _NGUITools_TypeInfo_12d53c8;
      }
      piVar1 = (int *)(_NGUITools_TypeInfo_12d53c8 + 0xe0);
      while (*piVar1 == 1) {
        cVar4 = '\x01';
        bVar5 = (bool)ExclusiveMonitorPass(piVar1,0x10);
        if (bVar5) {
          *piVar1 = 1;
          cVar4 = ExclusiveMonitorsStatus();
        }
        if (cVar4 == '\0') {
          DataMemoryBarrier(2,3);
          return uVar13;
        }
      }
      ClearExclusiveLocal();
      DataMemoryBarrier(2,3);
      uVar22 = native_sub_432c38();
      if (uVar22 == uRam00000000013451d0) {
        iRam00000000013451d8 = iRam00000000013451d8 + 1;
      }
      else {
        iVar7 = 0;
        do {
          iVar8 = iRam0000000001345190;
          if (iRam0000000001345190 == iVar7) {
            cVar4 = '\x01';
            bVar5 = (bool)ExclusiveMonitorPass(0x1345190,0x10);
            if (bVar5) {
              cVar4 = ExclusiveMonitorsStatus();
              iRam0000000001345190 = iVar7 + 1;
            }
            if (cVar4 != '\0') goto code_r0x003cc248;
            bVar5 = true;
          }
          else {
            ClearExclusiveLocal();
code_r0x003cc248:
            bVar5 = false;
          }
          uVar11 = uVar22;
        } while ((iVar8 != 2) && (iVar7 = iVar8, !bVar5));
        while (iVar8 != 0) {
          uVar11 = native_sub_432bb4(0x1345190,2,0xffffffff);
          do {
            iVar8 = iRam0000000001345190;
            cVar4 = '\x01';
            bVar5 = (bool)ExclusiveMonitorPass(0x1345190,0x10);
            if (bVar5) {
              iRam0000000001345190 = 2;
              cVar4 = ExclusiveMonitorsStatus();
            }
          } while (cVar4 != '\0');
        }
        iRam00000000013451d8 = 1;
        uRam00000000013451d0 = uVar22;
        uVar22 = uVar11;
      }
      while (*piVar1 == 1) {
        cVar4 = '\x01';
        bVar5 = (bool)ExclusiveMonitorPass(piVar1,0x10);
        if (bVar5) {
          *piVar1 = 1;
          cVar4 = ExclusiveMonitorsStatus();
        }
        if (cVar4 == '\0') {
          DataMemoryBarrier(2,3);
          if (iRam00000000013451d8 < 1) {
            return uVar22;
          }
          if (iRam00000000013451d8 + -1 != 0) {
            iRam00000000013451d8 = iRam00000000013451d8 + -1;
            return uVar22;
          }
          uRam00000000013451d0 = 0;
          iRam00000000013451d8 = 0;
          do {
            iVar7 = iRam0000000001345190;
            cVar4 = '\x01';
            bVar5 = (bool)ExclusiveMonitorPass(0x1345190,0x10);
            if (bVar5) {
              iRam0000000001345190 = 0;
              cVar4 = ExclusiveMonitorsStatus();
            }
          } while (cVar4 != '\0');
          if (iVar7 != 2) {
            uRam00000000013451d0 = 0;
            iRam00000000013451d8 = 0;
            return uVar22;
          }
          uVar13 = (*(code *)&DAT_0155b260)(0x62,0x1345190,0x81,1,0,0,0);
          return uVar13;
        }
      }
      ClearExclusiveLocal();
      DataMemoryBarrier(2,3);
      piVar2 = (int *)(uVar13 + 0xdc);
      do {
        if (*piVar2 != 1) {
          ClearExclusiveLocal();
          DataMemoryBarrier(2,3);
          puVar3 = (ulong *)(uVar13 + 0xe8);
          uVar22 = native_sub_3aad3c();
          do {
            cVar4 = '\x01';
            bVar5 = (bool)ExclusiveMonitorPass(puVar3,0x10);
            if (bVar5) {
              *puVar3 = uVar22;
              cVar4 = ExclusiveMonitorsStatus();
            }
          } while (cVar4 != '\0');
          DataMemoryBarrier(2,3);
          do {
            cVar4 = '\x01';
            bVar5 = (bool)ExclusiveMonitorPass(piVar2,0x10);
            if (bVar5) {
              *piVar2 = 1;
              cVar4 = ExclusiveMonitorsStatus();
            }
          } while (cVar4 != '\0');
          DataMemoryBarrier(2,3);
          iVar7 = iRam00000000013451d8 + -1;
          if ((0 < iRam00000000013451d8) && (iRam00000000013451d8 = iVar7, iVar7 == 0)) {
            uRam00000000013451d0 = 0;
            iRam00000000013451d8 = 0;
            do {
              iVar7 = iRam0000000001345190;
              cVar4 = '\x01';
              bVar5 = (bool)ExclusiveMonitorPass(0x1345190,0x10);
              if (bVar5) {
                iRam0000000001345190 = 0;
                cVar4 = ExclusiveMonitorsStatus();
              }
            } while (cVar4 != '\0');
            if (iVar7 == 2) {
              uVar22 = native_sub_432c0c(0x1345190,1,0);
            }
          }
          if ((*(byte *)(uVar13 + 0x133) >> 2 & 1) != 0) {
            lVar20 = native_sub_3c573c(uVar13,&UNK_00edd9af,0xffffffff,0x800);
            uVar22 = 0;
            if (lVar20 != 0) {
              uVar22 = native_sub_3d704c(lVar20,0,0,&stack0xffffffffffffffb8);
            }
          }
          do {
            cVar4 = '\x01';
            bVar5 = (bool)ExclusiveMonitorPass(piVar1,0x10);
            if (bVar5) {
              *piVar1 = 1;
              cVar4 = ExclusiveMonitorsStatus();
            }
          } while (cVar4 != '\0');
          DataMemoryBarrier(2,3);
          do {
            cVar4 = '\x01';
            bVar5 = (bool)ExclusiveMonitorPass(puVar3,0x10);
            if (bVar5) {
              *puVar3 = 0;
              cVar4 = ExclusiveMonitorsStatus();
            }
          } while (cVar4 != '\0');
          DataMemoryBarrier(2,3);
          return uVar22;
        }
        cVar4 = '\x01';
        bVar5 = (bool)ExclusiveMonitorPass(piVar2,0x10);
        if (bVar5) {
          *piVar2 = 1;
          cVar4 = ExclusiveMonitorsStatus();
        }
      } while (cVar4 != '\0');
      DataMemoryBarrier(2,3);
      iVar7 = iRam00000000013451d8 + -1;
      if ((0 < iRam00000000013451d8) && (iRam00000000013451d8 = iVar7, iVar7 == 0)) {
        uRam00000000013451d0 = 0;
        iRam00000000013451d8 = 0;
        do {
          iVar7 = iRam0000000001345190;
          cVar4 = '\x01';
          bVar5 = (bool)ExclusiveMonitorPass(0x1345190,0x10);
          if (bVar5) {
            iRam0000000001345190 = 0;
            cVar4 = ExclusiveMonitorsStatus();
          }
        } while (cVar4 != '\0');
        if (iVar7 == 2) {
          native_sub_432c0c(0x1345190,1,0);
        }
      }
      uVar22 = native_sub_3aad3c();
      puVar3 = (ulong *)(uVar13 + 0xe8);
      do {
        uVar13 = *puVar3;
        if (uVar13 != uVar22) {
          ClearExclusiveLocal();
          break;
        }
        cVar4 = '\x01';
        bVar5 = (bool)ExclusiveMonitorPass(puVar3,0x10);
        if (bVar5) {
          *puVar3 = uVar22;
          cVar4 = ExclusiveMonitorsStatus();
        }
      } while (cVar4 != '\0');
      DataMemoryBarrier(2,3);
      if (uVar13 != uVar22) {
        do {
          iVar7 = *piVar1;
          if (iVar7 != 1) {
            ClearExclusiveLocal();
            break;
          }
          cVar4 = '\x01';
          bVar5 = (bool)ExclusiveMonitorPass(piVar1,0x10);
          if (bVar5) {
            *piVar1 = 1;
            cVar4 = ExclusiveMonitorsStatus();
          }
        } while (cVar4 != '\0');
        DataMemoryBarrier(2,3);
        while (iVar7 == 0) {
          uVar22 = native_sub_3a30dc(1,0);
          do {
            iVar7 = *piVar1;
            if (iVar7 != 1) {
              ClearExclusiveLocal();
              break;
            }
            cVar4 = '\x01';
            bVar5 = (bool)ExclusiveMonitorPass(piVar1,0x10);
            if (bVar5) {
              *piVar1 = 1;
              cVar4 = ExclusiveMonitorsStatus();
            }
          } while (cVar4 != '\0');
          DataMemoryBarrier(2,3);
        }
      }
      return uVar22;
    }
  }
  return uVar13;
}



/* UITextList$$get_lineHeight @ 0x9439e4
 * float UITextList__get_lineHeight (UITextList_o* __this, const MethodInfo* method); */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* UITextList$$get_lineHeight
   float UITextList__get_lineHeight (UITextList_o* __this, const MethodInfo* method); */

float native_UITextList__get_lineHeight_9439e4(long param_1)

{
  ulong uVar1;
  long lVar2;
  undefined8 uVar3;
  float fVar4;
  int iVar5;
  
  if ((bRam0000000001341417 & 1) == 0) {
    native_sub_43273c(&UnityEngine_Object_TypeInfo_12d54e0);
    bRam0000000001341417 = 1;
  }
  uVar3 = *(undefined8 *)(param_1 + 0x18);
  if (((*(byte *)(_UnityEngine_Object_TypeInfo_12d54e0 + 0x133) >> 2 & 1) != 0) &&
     (*(int *)(_UnityEngine_Object_TypeInfo_12d54e0 + 0xe0) == 0)) {
    native_sub_4327ec();
  }
  uVar1 = native_UnityEngine_Object__op_Inequality_8d76fc(uVar3,0,0);
  if ((uVar1 & 1) == 0) {
    fVar4 = 20.0;
  }
  else {
    lVar2 = *(long *)(param_1 + 0x18);
    if (lVar2 == 0) {
                    /* WARNING: Subroutine does not return */
      native_sub_432810();
    }
    iVar5 = *(int *)(lVar2 + 0x1b0);
    fVar4 = (float)native_UILabel__get_effectiveSpacingY_ae8790(lVar2,0);
    fVar4 = fVar4 + (float)iVar5;
  }
  return fVar4;
}



/* UITextList$$get_scrollHeight @ 0x943a88
 * int32_t UITextList__get_scrollHeight (UITextList_o* __this, const MethodInfo* method); */

/* UITextList$$get_scrollHeight
   int32_t UITextList__get_scrollHeight (UITextList_o* __this, const MethodInfo* method); */

uint native_UITextList__get_scrollHeight_943a88(long param_1)

{
  uint uVar1;
  uint uVar2;
  ulong uVar3;
  float fVar4;
  int iVar5;
  
  uVar3 = native_UITextList__get_isValid_9435ac();
  if ((uVar3 & 1) == 0) {
    return 0;
  }
  if (*(long *)(param_1 + 0x18) != 0) {
    iVar5 = *(int *)(*(long *)(param_1 + 0x18) + 0xa8);
    fVar4 = (float)native_UITextList__get_lineHeight_9439e4(param_1);
    iVar5 = native_UnityEngine_Mathf__FloorToInt_8e506c((float)iVar5 / fVar4,0);
    uVar2 = *(int *)(param_1 + 0x3c) - iVar5;
    uVar1 = 0;
    if (uVar2 < 0x80000000) {
      uVar1 = uVar2;
    }
    return uVar1;
  }
                    /* WARNING: Subroutine does not return */
  native_sub_432810();
}



/* UITextList$$Clear @ 0x943b00
 * void UITextList__Clear (UITextList_o* __this, const MethodInfo* method); */

/* WARNING: Removing unreachable block (ram,0x00432c1c) */
/* WARNING: Removing unreachable block (ram,0x003cc494) */
/* WARNING: Removing unreachable block (ram,0x003cc4b8) */
/* WARNING: Removing unreachable block (ram,0x003cc4d4) */
/* WARNING: Removing unreachable block (ram,0x003cc4dc) */
/* WARNING: Removing unreachable block (ram,0x003cc4f0) */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* UITextList$$Clear
   void UITextList__Clear (UITextList_o* __this, const MethodInfo* method); */

void native_UITextList__Clear_943b00
               (undefined1 param_1 [16],float param_2,undefined8 param_3,undefined8 param_4,
               long param_5)

{
  int *piVar1;
  int *piVar2;
  undefined8 *puVar3;
  char cVar4;
  bool bVar5;
  uint uVar6;
  int iVar7;
  int iVar8;
  uint uVar9;
  int iVar10;
  ulong uVar11;
  ulong uVar12;
  long *plVar13;
  long *plVar14;
  long lVar15;
  long lVar16;
  int iVar17;
  uint uVar18;
  ulong uVar19;
  float fVar20;
  ulong uVar21;
  float fVar22;
  float fVar24;
  undefined8 uVar23;
  ulong uVar25;
  undefined8 uVar26;
  float fVar27;
  ulong uVar28;
  float fVar29;
  float fVar30;
  undefined8 uVar31;
  
  if ((bRam0000000001341418 & 1) == 0) {
    native_sub_43273c(&Method_BetterList_UITextList_Paragraph__Clear___12d8a98);
    bRam0000000001341418 = 1;
  }
  lVar15 = native_UITextList__get_paragraphs_943424(param_5);
  if (lVar15 == 0) {
                    /* WARNING: Subroutine does not return */
    native_sub_432810();
  }
  native_BetterList_object___Clear_ba24c0
            (lVar15,_Method_BetterList_UITextList_Paragraph__Clear___12d8a98);
  if ((bRam000000000134141d & 1) == 0) {
    native_sub_43273c(&System_Text_StringBuilder_TypeInfo_12d5f30);
    native_sub_43273c(&StringLiteral___12eab80);
    native_sub_43273c(&StringLiteral__12eaac0);
    bRam000000000134141d = 1;
  }
  uVar12 = native_UITextList__get_isValid_9435ac(param_5);
  fVar20 = (float)param_4;
  if ((uVar12 & 1) == 0) {
    return;
  }
  plVar13 = *(long **)(param_5 + 0x18);
  if (plVar13 == (long *)0x0) goto LAB_009439d4;
  lVar15 = _StringLiteral__12eaac0;
  if (*(int *)(param_5 + 0x3c) != 0) {
    lVar15 = plVar13[0x15];
    fVar20 = (float)native_UITextList__get_lineHeight_9439e4(param_5);
    iVar7 = native_UnityEngine_Mathf__FloorToInt_8e506c((float)(int)lVar15 / fVar20,0);
    iVar8 = native_UnityEngine_Mathf__Max_8e4cd0(0,*(int *)(param_5 + 0x3c) - iVar7,0);
    uVar12 = (ulong)(uint)(float)iVar8;
    uVar9 = native_UnityEngine_Mathf__RoundToInt_8e50f0(*(float *)(param_5 + 0x38) * (float)iVar8,0)
    ;
    plVar14 = (long *)native_sub_432808(_System_Text_StringBuilder_TypeInfo_12d5f30);
    native_System_Text_StringBuilder___ctor_a4881c(plVar14,0);
    lVar15 = native_UITextList__get_paragraphs_943424(param_5);
    param_2 = (float)uVar12;
    fVar20 = (float)param_4;
    if (lVar15 == 0) {
LAB_009439d4:
                    /* WARNING: Subroutine does not return */
      native_sub_432810();
    }
    iVar8 = *(int *)(lVar15 + 0x18);
    if ((0 < iVar8) && (0 < iVar7)) {
      uVar18 = 0;
      uVar9 = uVar9 & ((int)uVar9 >> 0x1f ^ 0xffffffffU);
      do {
        if ((*(long *)(param_5 + 0x48) == 0) ||
           (lVar15 = *(long *)(*(long *)(param_5 + 0x48) + 0x10), lVar15 == 0)) goto LAB_009439d4;
        if (*(uint *)(lVar15 + 0x18) <= uVar18) {
LAB_009439d8:
          uVar26 = native_sub_43283c();
                    /* WARNING: Subroutine does not return */
          native_sub_4327dc(uVar26,0);
        }
        lVar15 = *(long *)(lVar15 + (long)(int)uVar18 * 8 + 0x20);
        if ((lVar15 == 0) || (lVar16 = *(long *)(lVar15 + 0x18), lVar16 == 0)) goto LAB_009439d4;
        iVar17 = (int)*(undefined8 *)(lVar16 + 0x18);
        if (0 < iVar17) {
          uVar19 = 0;
          while( true ) {
            if (*(uint *)(lVar16 + 0x18) <= uVar19) goto LAB_009439d8;
            uVar6 = uVar9 - 1;
            if ((int)uVar9 < 1) {
              if (plVar14 == (long *)0x0) goto LAB_009439d4;
              uVar26 = *(undefined8 *)(lVar16 + uVar19 * 8 + 0x20);
              iVar10 = native_System_Text_StringBuilder__get_Length_a49204(plVar14,0);
              if (0 < iVar10) {
                native_System_Text_StringBuilder__Append_a49d68(plVar14,_StringLiteral___12eab80,0);
              }
              native_System_Text_StringBuilder__Append_a49d68(plVar14,uVar26,0);
              iVar7 = iVar7 + -1;
              uVar6 = uVar9;
            }
            uVar9 = uVar6;
            uVar19 = uVar19 + 1;
            if (((long)iVar17 <= (long)uVar19) || (iVar7 < 1)) break;
            lVar16 = *(long *)(lVar15 + 0x18);
            if (lVar16 == 0) goto LAB_009439d4;
          }
        }
        param_2 = (float)uVar12;
        fVar20 = (float)param_4;
        uVar18 = uVar18 + 1;
      } while (((int)uVar18 < iVar8) && (0 < iVar7));
    }
    if (plVar14 == (long *)0x0) goto LAB_009439d4;
    plVar13 = *(long **)(param_5 + 0x18);
    lVar15 = (**(code **)(*plVar14 + 0x168))(plVar14,*(undefined8 *)(*plVar14 + 0x170));
    if (plVar13 == (long *)0x0) goto LAB_009439d4;
  }
  if ((bRam0000000001342005 & 1) == 0) {
    native_sub_43273c(&StringLiteral__12eaac0,lVar15,0);
    bRam0000000001342005 = 1;
  }
  uVar12 = native_System_String__op_Equality_afc18c(plVar13[0x35],lVar15,0);
  if ((uVar12 & 1) == 0) {
    uVar12 = native_System_String__IsNullOrEmpty_b09430(lVar15,0);
    lVar16 = plVar13[0x35];
    if ((uVar12 & 1) == 0) {
      uVar12 = native_System_String__op_Inequality_afbbb4(lVar16,lVar15,0);
      if ((uVar12 & 1) == 0) {
        return;
      }
      plVar13[0x35] = lVar15;
    }
    else {
      uVar12 = native_System_String__IsNullOrEmpty_b09430(lVar16,0);
      lVar15 = _StringLiteral__12eaac0;
      if ((uVar12 & 1) != 0) {
        return;
      }
      plVar13[0x35] = _StringLiteral__12eaac0;
    }
    native_sub_4326e0(plVar13 + 0x35,lVar15);
    (**(code **)(*plVar13 + 0x378))(plVar13,*(undefined8 *)(*plVar13 + 0x380));
    native_UILabel__ProcessAndRequest_ae7fdc(plVar13);
    if ((char)plVar13[0x1b] != '\0') {
      if ((bRam000000000134145d & 1) == 0) {
        native_sub_43273c(&Method_UnityEngine_Component_GetComponent_BoxCollider2D____12e2998,0);
        native_sub_43273c(&Method_UnityEngine_Component_GetComponent_BoxCollider____12e2990);
        native_sub_43273c(&NGUITools_TypeInfo_12d53c8);
        native_sub_43273c(&UnityEngine_Object_TypeInfo_12d54e0);
        bRam000000000134145d = 1;
      }
      lVar15 = native_UnityEngine_Component__GetComponent_ActiveAnimation__49daec
                         (plVar13,_Method_UnityEngine_Component_GetComponent_BoxCollider____12e2990)
      ;
      if (((*(byte *)(_UnityEngine_Object_TypeInfo_12d54e0 + 0x133) >> 2 & 1) != 0) &&
         (*(int *)(_UnityEngine_Object_TypeInfo_12d54e0 + 0xe0) == 0)) {
        native_sub_4327ec(_UnityEngine_Object_TypeInfo_12d54e0);
      }
      uVar12 = native_UnityEngine_Object__op_Inequality_8d76fc(lVar15,0,0);
      if ((uVar12 & 1) == 0) {
        lVar15 = native_UnityEngine_Component__GetComponent_ActiveAnimation__49daec
                           (plVar13,
                            _Method_UnityEngine_Component_GetComponent_BoxCollider2D____12e2998);
        fVar29 = (float)param_3;
        if (((*(byte *)(_NGUITools_TypeInfo_12d53c8 + 0x133) >> 2 & 1) != 0) &&
           (*(int *)(_NGUITools_TypeInfo_12d53c8 + 0xe0) == 0)) {
          native_sub_4327ec(_NGUITools_TypeInfo_12d53c8);
        }
        if ((bRam000000000133f58e & 1) == 0) {
          native_sub_43273c(&NGUITools_TypeInfo_12d53c8,lVar15,0);
          native_sub_43273c(&UnityEngine_Object_TypeInfo_12d54e0);
          native_sub_43273c(&StringLiteral_last_change_12f5390);
          bRam000000000133f58e = 1;
        }
        if (((*(byte *)(_UnityEngine_Object_TypeInfo_12d54e0 + 0x133) >> 2 & 1) != 0) &&
           (*(int *)(_UnityEngine_Object_TypeInfo_12d54e0 + 0xe0) == 0)) {
          native_sub_4327ec();
        }
        uVar12 = native_UnityEngine_Object__op_Inequality_8d76fc(lVar15,0,0);
        if ((uVar12 & 1) == 0) {
          return;
        }
        if (((*(byte *)(_UnityEngine_Object_TypeInfo_12d54e0 + 0x133) >> 2 & 1) != 0) &&
           (*(int *)(_UnityEngine_Object_TypeInfo_12d54e0 + 0xe0) == 0)) {
          native_sub_4327ec();
        }
        uVar12 = native_UnityEngine_Object__op_Inequality_8d76fc(plVar13,0,0);
        if ((uVar12 & 1) == 0) {
          return;
        }
        if (plVar13 == (long *)0x0) {
LAB_0072ea2c:
                    /* WARNING: Subroutine does not return */
          native_sub_432810();
        }
        lVar16 = *plVar13;
        if ((((*(float *)((long)plVar13 + 0x104) == 0.0) && (*(float *)(plVar13 + 0x21) == 0.0)) &&
            (param_2 = *(float *)((long)plVar13 + 0x10c), param_2 == 1.0)) &&
           (param_2 = *(float *)(plVar13 + 0x22), param_2 == 1.0)) {
          lVar16 = (**(code **)(lVar16 + 0x1d8))(plVar13,*(undefined8 *)(lVar16 + 0x1e0));
          if (lVar16 == 0) goto LAB_0072ea2c;
          if ((*(uint *)(lVar16 + 0x18) == 0) || (*(uint *)(lVar16 + 0x18) < 3)) {
LAB_0072ea30:
            uVar26 = native_sub_43283c();
                    /* WARNING: Subroutine does not return */
            native_sub_4327dc(uVar26,0);
          }
          uVar26 = *(undefined8 *)(lVar16 + 0x20);
          uVar31 = *(undefined8 *)(lVar16 + 0x38);
          fVar20 = (float)native_UnityEngine_Mathf__Clamp01_8d9d9c(0x3f000000,0);
          if (*(uint *)(lVar16 + 0x18) < 3) goto LAB_0072ea30;
          if (lVar15 == 0) goto LAB_0072ea2c;
          uVar23 = *(undefined8 *)(lVar16 + 0x38);
          fVar27 = (float)uVar26;
          fVar22 = (float)((ulong)uVar26 >> 0x20);
          fVar27 = fVar27 + ((float)uVar31 - fVar27) * fVar20;
          fVar22 = fVar22 + ((float)((ulong)uVar31 >> 0x20) - fVar22) * fVar20;
          uVar26 = CONCAT44(fVar22,fVar27);
          fVar24 = (float)uVar23 - (float)*(undefined8 *)(lVar16 + 0x20);
          fVar20 = (float)((ulong)uVar23 >> 0x20) -
                   (float)((ulong)*(undefined8 *)(lVar16 + 0x20) >> 0x20);
          uVar12 = CONCAT44(fVar20,fVar24);
          fVar29 = (float)native_UnityEngine_Collider2D__get_offset_db8b24(lVar15,0);
          fVar27 = fVar27 - fVar29;
          fVar29 = fVar22 - (float)uVar23;
          if ((fVar27 * fVar27 + fVar29 * fVar29 < 9.9999994e-11) &&
             (uVar31 = uVar26,
             fVar29 = (float)native_UnityEngine_BoxCollider2D__get_size_db8988(lVar15,0),
             fVar24 = fVar24 - fVar29, fVar29 = fVar20 - (float)uVar31,
             fVar24 * fVar24 + fVar29 * fVar29 < 9.9999994e-11)) {
            return;
          }
          native_UnityEngine_Collider2D__set_offset_db8bcc(uVar26,fVar22,lVar15,0);
        }
        else {
          fVar27 = (float)(**(code **)(lVar16 + 0x2f8))(plVar13,*(undefined8 *)(lVar16 + 0x300));
          if (lVar15 == 0) goto LAB_0072ea2c;
          uVar12 = (ulong)(uint)(fVar29 - fVar27);
          fVar30 = (fVar27 + fVar29) * 0.5;
          fVar22 = (param_2 + fVar20) * 0.5;
          fVar20 = fVar20 - param_2;
          fVar24 = (float)native_UnityEngine_Collider2D__get_offset_db8b24(lVar15,0);
          fVar24 = fVar30 - fVar24;
          param_2 = fVar22 - param_2;
          param_2 = param_2 * param_2;
          if ((fVar24 * fVar24 + param_2 < 9.9999994e-11) &&
             (fVar24 = (float)native_UnityEngine_BoxCollider2D__get_size_db8988(lVar15,0),
             fVar24 = (fVar29 - fVar27) - fVar24,
             fVar24 * fVar24 + (fVar20 - param_2) * (fVar20 - param_2) < 9.9999994e-11)) {
            return;
          }
          native_UnityEngine_Collider2D__set_offset_db8bcc(fVar30,fVar22,lVar15,0);
        }
        native_UnityEngine_BoxCollider2D__set_size_db8a30(uVar12,fVar20,lVar15,0);
        if ((*(byte *)(_NGUITools_TypeInfo_12d53c8 + 0x133) >> 2 & 1) == 0) {
          return;
        }
        if (*(int *)(_NGUITools_TypeInfo_12d53c8 + 0xe0) != 0) {
          return;
        }
      }
      else {
        if (((*(byte *)(_NGUITools_TypeInfo_12d53c8 + 0x133) >> 2 & 1) != 0) &&
           (*(int *)(_NGUITools_TypeInfo_12d53c8 + 0xe0) == 0)) {
          native_sub_4327ec();
        }
        if ((bRam000000000133f58d & 1) == 0) {
          native_sub_43273c(&NGUITools_TypeInfo_12d53c8,lVar15,0);
          native_sub_43273c(&UnityEngine_Object_TypeInfo_12d54e0);
          native_sub_43273c(&StringLiteral_last_change_12f5390);
          bRam000000000133f58d = 1;
        }
        if (((*(byte *)(_UnityEngine_Object_TypeInfo_12d54e0 + 0x133) >> 2 & 1) != 0) &&
           (*(int *)(_UnityEngine_Object_TypeInfo_12d54e0 + 0xe0) == 0)) {
          native_sub_4327ec();
        }
        uVar12 = native_UnityEngine_Object__op_Inequality_8d76fc(lVar15,0,0);
        if ((uVar12 & 1) == 0) {
          return;
        }
        if (((*(byte *)(_UnityEngine_Object_TypeInfo_12d54e0 + 0x133) >> 2 & 1) != 0) &&
           (*(int *)(_UnityEngine_Object_TypeInfo_12d54e0 + 0xe0) == 0)) {
          native_sub_4327ec();
        }
        uVar12 = native_UnityEngine_Object__op_Inequality_8d76fc(plVar13,0,0);
        if ((uVar12 & 1) == 0) {
          return;
        }
        if (plVar13 == (long *)0x0) {
LAB_0072e730:
                    /* WARNING: Subroutine does not return */
          native_sub_432810();
        }
        lVar16 = *plVar13;
        if ((((*(float *)((long)plVar13 + 0x104) == 0.0) && (*(float *)(plVar13 + 0x21) == 0.0)) &&
            (param_2 = *(float *)((long)plVar13 + 0x10c), param_2 == 1.0)) &&
           (param_2 = *(float *)(plVar13 + 0x22), param_2 == 1.0)) {
          lVar16 = (**(code **)(lVar16 + 0x1d8))(plVar13,*(undefined8 *)(lVar16 + 0x1e0));
          if (lVar16 == 0) goto LAB_0072e730;
          if ((*(uint *)(lVar16 + 0x18) == 0) || (*(uint *)(lVar16 + 0x18) < 3)) {
LAB_0072e734:
            uVar26 = native_sub_43283c();
                    /* WARNING: Subroutine does not return */
            native_sub_4327dc(uVar26,0);
          }
          uVar26 = *(undefined8 *)(lVar16 + 0x20);
          fVar27 = *(float *)(lVar16 + 0x28);
          uVar31 = *(undefined8 *)(lVar16 + 0x38);
          fVar29 = *(float *)(lVar16 + 0x40);
          fVar20 = (float)native_UnityEngine_Mathf__Clamp01_8d9d9c(0x3f000000,0);
          if (*(uint *)(lVar16 + 0x18) < 3) goto LAB_0072e734;
          if (lVar15 == 0) goto LAB_0072e730;
          fVar22 = (float)uVar26;
          fVar24 = (float)((ulong)uVar26 >> 0x20);
          fVar29 = fVar29 - fVar27;
          uVar11 = (ulong)(uint)fVar29;
          fVar24 = fVar24 + ((float)((ulong)uVar31 >> 0x20) - fVar24) * fVar20;
          uVar23 = CONCAT44(fVar24,fVar22 + ((float)uVar31 - fVar22) * fVar20);
          uVar28 = (ulong)(uint)(fVar27 + fVar29 * fVar20);
          fVar27 = (float)((ulong)*(undefined8 *)(lVar16 + 0x38) >> 0x20) -
                   (float)((ulong)*(undefined8 *)(lVar16 + 0x20) >> 0x20);
          uVar21 = CONCAT44(fVar27,(float)*(undefined8 *)(lVar16 + 0x38) -
                                   (float)*(undefined8 *)(lVar16 + 0x20));
          fVar20 = *(float *)(lVar16 + 0x40) - *(float *)(lVar16 + 0x28);
          uVar26 = uVar23;
          uVar31 = native_UnityEngine_BoxCollider__get_center_dba95c(lVar15,0);
          uVar12 = (ulong)(uint)fVar24;
          uVar19 = uVar12;
          uVar25 = uVar28;
          uVar11 = native_UnityEngine_Vector3__op_Inequality_776c48
                             (uVar23,uVar12,uVar28,uVar31,uVar26,uVar11,0);
          if ((uVar11 & 1) == 0) {
            uVar26 = native_UnityEngine_BoxCollider__get_size_dbaab4(lVar15,0);
            uVar19 = native_UnityEngine_Vector3__op_Inequality_776c48
                               (uVar21,fVar27,fVar20,uVar26,uVar19,uVar25,0);
            if ((uVar19 & 1) == 0) {
              return;
            }
          }
          native_UnityEngine_BoxCollider__set_center_dbaa0c(uVar23,uVar12,uVar28,lVar15,0);
        }
        else {
          fVar29 = (float)(**(code **)(lVar16 + 0x2f8))(plVar13,*(undefined8 *)(lVar16 + 0x300));
          if (lVar15 == 0) goto LAB_0072e730;
          uVar21 = (ulong)(uint)((float)param_3 - fVar29);
          fVar27 = fVar20 - param_2;
          uVar19 = (ulong)(uint)(param_2 + fVar20);
          uVar25 = (ulong)(uint)((param_2 + fVar20) * 0.5);
          fVar29 = (fVar29 + (float)param_3) * 0.5;
          uVar26 = native_UnityEngine_BoxCollider__get_center_dba95c(lVar15,0);
          uVar31 = 0;
          fVar20 = 0.0;
          uVar12 = uVar25;
          uVar19 = native_UnityEngine_Vector3__op_Inequality_776c48
                             (fVar29,uVar25,0,uVar26,uVar19,param_3,0);
          if ((uVar19 & 1) == 0) {
            uVar26 = native_UnityEngine_BoxCollider__get_size_dbaab4(lVar15,0);
            uVar12 = native_UnityEngine_Vector3__op_Inequality_776c48
                               (uVar21,fVar27,0,uVar26,uVar12,uVar31,0);
            if ((uVar12 & 1) == 0) {
              return;
            }
          }
          native_UnityEngine_BoxCollider__set_center_dbaa0c(fVar29,uVar25,0,lVar15,0);
        }
        native_UnityEngine_BoxCollider__set_size_dbab64(uVar21,fVar27,fVar20,lVar15,0);
        if ((*(byte *)(_NGUITools_TypeInfo_12d53c8 + 0x133) >> 2 & 1) == 0) {
          return;
        }
        if (*(int *)(_NGUITools_TypeInfo_12d53c8 + 0xe0) != 0) {
          return;
        }
      }
      lVar15 = _NGUITools_TypeInfo_12d53c8;
      if ((*(byte *)(_NGUITools_TypeInfo_12d53c8 + 0x133) >> 2 & 1) == 0) {
        return;
      }
      piVar1 = (int *)(_NGUITools_TypeInfo_12d53c8 + 0xe0);
      while (*piVar1 == 1) {
        cVar4 = '\x01';
        bVar5 = (bool)ExclusiveMonitorPass(piVar1,0x10);
        if (bVar5) {
          *piVar1 = 1;
          cVar4 = ExclusiveMonitorsStatus();
        }
        if (cVar4 == '\0') {
          DataMemoryBarrier(2,3);
          return;
        }
      }
      ClearExclusiveLocal();
      DataMemoryBarrier(2,3);
      lVar16 = native_sub_432c38();
      if (lVar16 == lRam00000000013451d0) {
        iRam00000000013451d8 = iRam00000000013451d8 + 1;
      }
      else {
        iVar7 = 0;
        do {
          iVar8 = iRam0000000001345190;
          if (iRam0000000001345190 == iVar7) {
            cVar4 = '\x01';
            bVar5 = (bool)ExclusiveMonitorPass(0x1345190,0x10);
            if (bVar5) {
              cVar4 = ExclusiveMonitorsStatus();
              iRam0000000001345190 = iVar7 + 1;
            }
            if (cVar4 != '\0') goto code_r0x003cc248;
            bVar5 = true;
          }
          else {
            ClearExclusiveLocal();
code_r0x003cc248:
            bVar5 = false;
          }
        } while ((iVar8 != 2) && (iVar7 = iVar8, !bVar5));
        while (iVar8 != 0) {
          native_sub_432bb4(0x1345190,2,0xffffffff);
          do {
            iVar8 = iRam0000000001345190;
            cVar4 = '\x01';
            bVar5 = (bool)ExclusiveMonitorPass(0x1345190,0x10);
            if (bVar5) {
              iRam0000000001345190 = 2;
              cVar4 = ExclusiveMonitorsStatus();
            }
          } while (cVar4 != '\0');
        }
        iRam00000000013451d8 = 1;
        lRam00000000013451d0 = lVar16;
      }
      while (*piVar1 == 1) {
        cVar4 = '\x01';
        bVar5 = (bool)ExclusiveMonitorPass(piVar1,0x10);
        if (bVar5) {
          *piVar1 = 1;
          cVar4 = ExclusiveMonitorsStatus();
        }
        if (cVar4 == '\0') {
          DataMemoryBarrier(2,3);
          if (iRam00000000013451d8 < 1) {
            return;
          }
          if (iRam00000000013451d8 + -1 != 0) {
            iRam00000000013451d8 = iRam00000000013451d8 + -1;
            return;
          }
          lRam00000000013451d0 = 0;
          iRam00000000013451d8 = 0;
          do {
            iVar7 = iRam0000000001345190;
            cVar4 = '\x01';
            bVar5 = (bool)ExclusiveMonitorPass(0x1345190,0x10);
            if (bVar5) {
              iRam0000000001345190 = 0;
              cVar4 = ExclusiveMonitorsStatus();
            }
          } while (cVar4 != '\0');
          if (iVar7 != 2) {
            lRam00000000013451d0 = 0;
            iRam00000000013451d8 = 0;
            return;
          }
          (*(code *)&DAT_0155b260)(0x62,0x1345190,0x81,1,0,0,0);
          return;
        }
      }
      ClearExclusiveLocal();
      DataMemoryBarrier(2,3);
      piVar2 = (int *)(lVar15 + 0xdc);
      do {
        if (*piVar2 != 1) {
          ClearExclusiveLocal();
          DataMemoryBarrier(2,3);
          puVar3 = (undefined8 *)(lVar15 + 0xe8);
          uVar26 = native_sub_3aad3c();
          do {
            cVar4 = '\x01';
            bVar5 = (bool)ExclusiveMonitorPass(puVar3,0x10);
            if (bVar5) {
              *puVar3 = uVar26;
              cVar4 = ExclusiveMonitorsStatus();
            }
          } while (cVar4 != '\0');
          DataMemoryBarrier(2,3);
          do {
            cVar4 = '\x01';
            bVar5 = (bool)ExclusiveMonitorPass(piVar2,0x10);
            if (bVar5) {
              *piVar2 = 1;
              cVar4 = ExclusiveMonitorsStatus();
            }
          } while (cVar4 != '\0');
          DataMemoryBarrier(2,3);
          iVar7 = iRam00000000013451d8 + -1;
          if ((0 < iRam00000000013451d8) && (iRam00000000013451d8 = iVar7, iVar7 == 0)) {
            lRam00000000013451d0 = 0;
            iRam00000000013451d8 = 0;
            do {
              iVar7 = iRam0000000001345190;
              cVar4 = '\x01';
              bVar5 = (bool)ExclusiveMonitorPass(0x1345190,0x10);
              if (bVar5) {
                iRam0000000001345190 = 0;
                cVar4 = ExclusiveMonitorsStatus();
              }
            } while (cVar4 != '\0');
            if (iVar7 == 2) {
              native_sub_432c0c(0x1345190,1,0);
            }
          }
          if (((*(byte *)(lVar15 + 0x133) >> 2 & 1) != 0) &&
             (lVar15 = native_sub_3c573c(lVar15,&UNK_00edd9af,0xffffffff,0x800), lVar15 != 0)) {
            native_sub_3d704c(lVar15,0,0,&stack0xffffffffffffffb8);
          }
          do {
            cVar4 = '\x01';
            bVar5 = (bool)ExclusiveMonitorPass(piVar1,0x10);
            if (bVar5) {
              *piVar1 = 1;
              cVar4 = ExclusiveMonitorsStatus();
            }
          } while (cVar4 != '\0');
          DataMemoryBarrier(2,3);
          do {
            cVar4 = '\x01';
            bVar5 = (bool)ExclusiveMonitorPass(puVar3,0x10);
            if (bVar5) {
              *puVar3 = 0;
              cVar4 = ExclusiveMonitorsStatus();
            }
          } while (cVar4 != '\0');
          DataMemoryBarrier(2,3);
          return;
        }
        cVar4 = '\x01';
        bVar5 = (bool)ExclusiveMonitorPass(piVar2,0x10);
        if (bVar5) {
          *piVar2 = 1;
          cVar4 = ExclusiveMonitorsStatus();
        }
      } while (cVar4 != '\0');
      DataMemoryBarrier(2,3);
      iVar7 = iRam00000000013451d8 + -1;
      if ((0 < iRam00000000013451d8) && (iRam00000000013451d8 = iVar7, iVar7 == 0)) {
        lRam00000000013451d0 = 0;
        iRam00000000013451d8 = 0;
        do {
          iVar7 = iRam0000000001345190;
          cVar4 = '\x01';
          bVar5 = (bool)ExclusiveMonitorPass(0x1345190,0x10);
          if (bVar5) {
            iRam0000000001345190 = 0;
            cVar4 = ExclusiveMonitorsStatus();
          }
        } while (cVar4 != '\0');
        if (iVar7 == 2) {
          native_sub_432c0c(0x1345190,1,0);
        }
      }
      lVar16 = native_sub_3aad3c();
      plVar13 = (long *)(lVar15 + 0xe8);
      do {
        lVar15 = *plVar13;
        if (lVar15 != lVar16) {
          ClearExclusiveLocal();
          break;
        }
        cVar4 = '\x01';
        bVar5 = (bool)ExclusiveMonitorPass(plVar13,0x10);
        if (bVar5) {
          *plVar13 = lVar16;
          cVar4 = ExclusiveMonitorsStatus();
        }
      } while (cVar4 != '\0');
      DataMemoryBarrier(2,3);
      if (lVar15 != lVar16) {
        do {
          iVar7 = *piVar1;
          if (iVar7 != 1) {
            ClearExclusiveLocal();
            break;
          }
          cVar4 = '\x01';
          bVar5 = (bool)ExclusiveMonitorPass(piVar1,0x10);
          if (bVar5) {
            *piVar1 = 1;
            cVar4 = ExclusiveMonitorsStatus();
          }
        } while (cVar4 != '\0');
        DataMemoryBarrier(2,3);
        while (iVar7 == 0) {
          native_sub_3a30dc(1,0);
          do {
            iVar7 = *piVar1;
            if (iVar7 != 1) {
              ClearExclusiveLocal();
              break;
            }
            cVar4 = '\x01';
            bVar5 = (bool)ExclusiveMonitorPass(piVar1,0x10);
            if (bVar5) {
              *piVar1 = 1;
              cVar4 = ExclusiveMonitorsStatus();
            }
          } while (cVar4 != '\0');
          DataMemoryBarrier(2,3);
        }
      }
      return;
    }
  }
  return;
}



/* UITextList$$Start @ 0x943b60
 * void UITextList__Start (UITextList_o* __this, const MethodInfo* method); */

/* WARNING: Removing unreachable block (ram,0x00432c1c) */
/* WARNING: Removing unreachable block (ram,0x003cc494) */
/* WARNING: Removing unreachable block (ram,0x003cc4b8) */
/* WARNING: Removing unreachable block (ram,0x003cc4d4) */
/* WARNING: Removing unreachable block (ram,0x003cc4dc) */
/* WARNING: Removing unreachable block (ram,0x003cc4f0) */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* UITextList$$Start
   void UITextList__Start (UITextList_o* __this, const MethodInfo* method); */

ulong native_UITextList__Start_943b60
                (undefined1 param_1 [16],float param_2,undefined8 param_3,undefined8 param_4,
                long param_5)

{
  int *piVar1;
  int *piVar2;
  ulong *puVar3;
  char cVar4;
  bool bVar5;
  uint uVar6;
  int iVar7;
  int iVar8;
  uint uVar9;
  int iVar10;
  ulong uVar11;
  ulong uVar12;
  ulong uVar13;
  undefined8 uVar14;
  long *plVar15;
  undefined8 *puVar16;
  long lVar17;
  code *pcVar18;
  int iVar19;
  long *plVar20;
  long lVar21;
  undefined8 uVar22;
  uint uVar23;
  ulong uVar24;
  float extraout_s0;
  float extraout_s0_00;
  undefined4 uVar25;
  float fVar26;
  float fVar27;
  float fVar28;
  float fVar30;
  undefined8 uVar29;
  ulong uVar31;
  float fVar32;
  ulong uVar33;
  float fVar34;
  
  if ((bRam0000000001341419 & 1) == 0) {
    native_sub_43273c(&EventDelegate_Callback_TypeInfo_12d72e8);
    native_sub_43273c(&Method_UnityEngine_Component_GetComponentInChildren_UILabel____12e2cc0);
    native_sub_43273c(&EventDelegate_TypeInfo_12d4590);
    native_sub_43273c(&UnityEngine_Object_TypeInfo_12d54e0);
    native_sub_43273c(&Method_UITextList_OnScrollBar___12e78e0);
    bRam0000000001341419 = 1;
  }
  plVar20 = (long *)(param_5 + 0x18);
  lVar21 = *plVar20;
  if (((*(byte *)(_UnityEngine_Object_TypeInfo_12d54e0 + 0x133) >> 2 & 1) != 0) &&
     (*(int *)(_UnityEngine_Object_TypeInfo_12d54e0 + 0xe0) == 0)) {
    native_sub_4327ec();
  }
  uVar13 = native_UnityEngine_Object__op_Equality_8e9a3c(lVar21,0,0);
  if ((uVar13 & 1) != 0) {
    uVar14 = native_UnityEngine_Component__GetComponentInChildren_Animation__49db98
                       (param_5,
                        _Method_UnityEngine_Component_GetComponentInChildren_UILabel____12e2cc0);
    *(undefined8 *)(param_5 + 0x18) = uVar14;
    native_sub_4326e0(plVar20,uVar14);
  }
  uVar14 = *(undefined8 *)(param_5 + 0x20);
  if (((*(byte *)(_UnityEngine_Object_TypeInfo_12d54e0 + 0x133) >> 2 & 1) != 0) &&
     (*(int *)(_UnityEngine_Object_TypeInfo_12d54e0 + 0xe0) == 0)) {
    native_sub_4327ec();
  }
  uVar13 = native_UnityEngine_Object__op_Inequality_8d76fc(uVar14,0,0);
  if ((uVar13 & 1) != 0) {
    if (*(long *)(param_5 + 0x20) == 0) goto LAB_00943d20;
    uVar22 = *(undefined8 *)(*(long *)(param_5 + 0x20) + 0x68);
    uVar14 = native_sub_432808(_EventDelegate_Callback_TypeInfo_12d72e8);
    native_EventDelegate_Callback___ctor_54bd18
              (uVar14,param_5,_Method_UITextList_OnScrollBar___12e78e0,0);
    if (((*(byte *)(_EventDelegate_TypeInfo_12d4590 + 0x133) >> 2 & 1) != 0) &&
       (*(int *)(_EventDelegate_TypeInfo_12d4590 + 0xe0) == 0)) {
      native_sub_4327ec();
    }
    native_EventDelegate__Add_def10c(uVar22,uVar14,0);
  }
  if (*plVar20 != 0) {
    native_UILabel__set_overflowMethod_ae8958(*plVar20,1,0);
    plVar20 = (long *)*plVar20;
    if (plVar20 != (long *)0x0) {
      pcVar18 = *(code **)(*plVar20 + 0x2b8);
      if (*(int *)(param_5 + 0x28) == 1) {
        (*pcVar18)(plVar20,6);
        uVar25 = 0x3f800000;
      }
      else {
        (*pcVar18)(plVar20,0,*(undefined8 *)(*plVar20 + 0x2c0));
        uVar25 = 0;
      }
      if ((bRam0000000001341416 & 1) == 0) {
        native_sub_43273c(&UnityEngine_Object_TypeInfo_12d54e0);
        bRam0000000001341416 = 1;
      }
      uVar14 = native_UnityEngine_Mathf__Clamp01_8d9d9c(uVar25,0);
      uVar13 = native_UITextList__get_isValid_9435ac(param_5);
      if (((uVar13 & 1) == 0) || (*(float *)(param_5 + 0x38) == (float)uVar14)) {
        return uVar13;
      }
      uVar22 = *(undefined8 *)(param_5 + 0x20);
      if (((*(byte *)(_UnityEngine_Object_TypeInfo_12d54e0 + 0x133) >> 2 & 1) != 0) &&
         (*(int *)(_UnityEngine_Object_TypeInfo_12d54e0 + 0xe0) == 0)) {
        native_sub_4327ec();
      }
      uVar13 = native_UnityEngine_Object__op_Inequality_8d76fc(uVar22,0,0);
      if ((uVar13 & 1) != 0) {
        plVar20 = *(long **)(param_5 + 0x20);
        if (plVar20 != (long *)0x0) {
          if ((bRam00000000013426fb & 1) == 0) {
            native_sub_43273c(&EventDelegate_TypeInfo_12d4590);
            native_sub_43273c(&NGUITools_TypeInfo_12d53c8);
            native_sub_43273c(&UIProgressBar_TypeInfo_12d6498);
            bRam00000000013426fb = 1;
          }
          fVar26 = (float)native_UnityEngine_Mathf__Clamp01_8d9d9c(uVar14,0);
          if (*(float *)(plVar20 + 7) == fVar26) {
            uVar13 = 0;
          }
          else {
            fVar27 = (float)native_UIProgressBar__get_value_c2b6f0(plVar20);
            *(float *)(plVar20 + 7) = fVar26;
            if (((char)plVar20[8] != '\0') &&
               (fVar26 = (float)native_UIProgressBar__get_value_c2b6f0(plVar20), fVar27 != fVar26))
            {
              if (((*(byte *)(_NGUITools_TypeInfo_12d53c8 + 0x133) >> 2 & 1) != 0) &&
                 (*(int *)(_NGUITools_TypeInfo_12d53c8 + 0xe0) == 0)) {
                native_sub_4327ec();
              }
              uVar13 = native_NGUITools__GetActive_72d02c(plVar20,0);
              if ((uVar13 & 1) != 0) {
                lVar21 = plVar20[0xd];
                if (((*(byte *)(_EventDelegate_TypeInfo_12d4590 + 0x133) >> 2 & 1) != 0) &&
                   (*(int *)(_EventDelegate_TypeInfo_12d4590 + 0xe0) == 0)) {
                  native_sub_4327ec();
                }
                uVar13 = native_EventDelegate__IsValid_deef08(lVar21,0);
                if ((uVar13 & 1) != 0) {
                  plVar15 = *(long **)(_UIProgressBar_TypeInfo_12d6498 + 0xb8);
                  *plVar15 = (long)plVar20;
                  native_sub_4326e0(plVar15,plVar20);
                  lVar21 = plVar20[0xd];
                  if (((*(byte *)(_EventDelegate_TypeInfo_12d4590 + 0x133) >> 2 & 1) != 0) &&
                     (*(int *)(_EventDelegate_TypeInfo_12d4590 + 0xe0) == 0)) {
                    native_sub_4327ec();
                  }
                  native_EventDelegate__Execute_deecbc(lVar21,0);
                  puVar16 = *(undefined8 **)(_UIProgressBar_TypeInfo_12d6498 + 0xb8);
                  *puVar16 = 0;
                  native_sub_4326e0(puVar16,0);
                }
              }
              (**(code **)(*plVar20 + 0x1a8))(plVar20,*(undefined8 *)(*plVar20 + 0x1b0));
            }
            uVar13 = 1;
          }
          return uVar13;
        }
                    /* WARNING: Subroutine does not return */
        native_sub_432810();
      }
      *(float *)(param_5 + 0x38) = (float)uVar14;
      if ((bRam000000000134141d & 1) == 0) {
        native_sub_43273c(&System_Text_StringBuilder_TypeInfo_12d5f30);
        native_sub_43273c(&StringLiteral___12eab80);
        native_sub_43273c(&StringLiteral__12eaac0);
        bRam000000000134141d = 1;
      }
      uVar13 = native_UITextList__get_isValid_9435ac(param_5);
      fVar26 = (float)param_4;
      if ((uVar13 & 1) == 0) {
        return uVar13;
      }
      plVar20 = *(long **)(param_5 + 0x18);
      if (plVar20 == (long *)0x0) goto LAB_009439d4;
      lVar21 = _StringLiteral__12eaac0;
      if (*(int *)(param_5 + 0x3c) != 0) {
        lVar21 = plVar20[0x15];
        fVar26 = (float)native_UITextList__get_lineHeight_9439e4(param_5);
        iVar7 = native_UnityEngine_Mathf__FloorToInt_8e506c((float)(int)lVar21 / fVar26,0);
        iVar8 = native_UnityEngine_Mathf__Max_8e4cd0(0,*(int *)(param_5 + 0x3c) - iVar7,0);
        uVar13 = (ulong)(uint)(float)iVar8;
        uVar9 = native_UnityEngine_Mathf__RoundToInt_8e50f0
                          (*(float *)(param_5 + 0x38) * (float)iVar8,0);
        plVar15 = (long *)native_sub_432808(_System_Text_StringBuilder_TypeInfo_12d5f30);
        native_System_Text_StringBuilder___ctor_a4881c(plVar15,0);
        lVar21 = native_UITextList__get_paragraphs_943424(param_5);
        param_2 = (float)uVar13;
        fVar26 = (float)param_4;
        if (lVar21 == 0) {
LAB_009439d4:
                    /* WARNING: Subroutine does not return */
          native_sub_432810();
        }
        iVar8 = *(int *)(lVar21 + 0x18);
        if ((0 < iVar8) && (0 < iVar7)) {
          uVar23 = 0;
          uVar9 = uVar9 & ((int)uVar9 >> 0x1f ^ 0xffffffffU);
          do {
            if ((*(long *)(param_5 + 0x48) == 0) ||
               (lVar21 = *(long *)(*(long *)(param_5 + 0x48) + 0x10), lVar21 == 0))
            goto LAB_009439d4;
            if (*(uint *)(lVar21 + 0x18) <= uVar23) {
LAB_009439d8:
              uVar14 = native_sub_43283c();
                    /* WARNING: Subroutine does not return */
              native_sub_4327dc(uVar14,0);
            }
            lVar21 = *(long *)(lVar21 + (long)(int)uVar23 * 8 + 0x20);
            if ((lVar21 == 0) || (lVar17 = *(long *)(lVar21 + 0x18), lVar17 == 0))
            goto LAB_009439d4;
            iVar19 = (int)*(undefined8 *)(lVar17 + 0x18);
            if (0 < iVar19) {
              uVar24 = 0;
              while( true ) {
                if (*(uint *)(lVar17 + 0x18) <= uVar24) goto LAB_009439d8;
                uVar6 = uVar9 - 1;
                if ((int)uVar9 < 1) {
                  if (plVar15 == (long *)0x0) goto LAB_009439d4;
                  uVar14 = *(undefined8 *)(lVar17 + uVar24 * 8 + 0x20);
                  iVar10 = native_System_Text_StringBuilder__get_Length_a49204(plVar15,0);
                  if (0 < iVar10) {
                    native_System_Text_StringBuilder__Append_a49d68
                              (plVar15,_StringLiteral___12eab80,0);
                  }
                  native_System_Text_StringBuilder__Append_a49d68(plVar15,uVar14,0);
                  iVar7 = iVar7 + -1;
                  uVar6 = uVar9;
                }
                uVar9 = uVar6;
                uVar24 = uVar24 + 1;
                if (((long)iVar19 <= (long)uVar24) || (iVar7 < 1)) break;
                lVar17 = *(long *)(lVar21 + 0x18);
                if (lVar17 == 0) goto LAB_009439d4;
              }
            }
            param_2 = (float)uVar13;
            fVar26 = (float)param_4;
            uVar23 = uVar23 + 1;
          } while (((int)uVar23 < iVar8) && (0 < iVar7));
        }
        if (plVar15 == (long *)0x0) goto LAB_009439d4;
        plVar20 = *(long **)(param_5 + 0x18);
        lVar21 = (**(code **)(*plVar15 + 0x168))(plVar15,*(undefined8 *)(*plVar15 + 0x170));
        if (plVar20 == (long *)0x0) goto LAB_009439d4;
      }
      if ((bRam0000000001342005 & 1) == 0) {
        native_sub_43273c(&StringLiteral__12eaac0,lVar21,0);
        bRam0000000001342005 = 1;
      }
      uVar13 = native_System_String__op_Equality_afc18c(plVar20[0x35],lVar21,0);
      if ((uVar13 & 1) == 0) {
        uVar13 = native_System_String__IsNullOrEmpty_b09430(lVar21,0);
        lVar17 = plVar20[0x35];
        if ((uVar13 & 1) == 0) {
          uVar13 = native_System_String__op_Inequality_afbbb4(lVar17,lVar21,0);
          if ((uVar13 & 1) == 0) {
            return uVar13;
          }
          plVar20[0x35] = lVar21;
        }
        else {
          uVar13 = native_System_String__IsNullOrEmpty_b09430(lVar17,0);
          lVar21 = _StringLiteral__12eaac0;
          if ((uVar13 & 1) != 0) {
            return uVar13;
          }
          plVar20[0x35] = _StringLiteral__12eaac0;
        }
        native_sub_4326e0(plVar20 + 0x35,lVar21);
        (**(code **)(*plVar20 + 0x378))(plVar20,*(undefined8 *)(*plVar20 + 0x380));
        uVar13 = native_UILabel__ProcessAndRequest_ae7fdc(plVar20);
        if ((char)plVar20[0x1b] != '\0') {
          if ((bRam000000000134145d & 1) == 0) {
            native_sub_43273c(&Method_UnityEngine_Component_GetComponent_BoxCollider2D____12e2998,0)
            ;
            native_sub_43273c(&Method_UnityEngine_Component_GetComponent_BoxCollider____12e2990);
            native_sub_43273c(&NGUITools_TypeInfo_12d53c8);
            native_sub_43273c(&UnityEngine_Object_TypeInfo_12d54e0);
            bRam000000000134145d = 1;
          }
          lVar21 = native_UnityEngine_Component__GetComponent_ActiveAnimation__49daec
                             (plVar20,
                              _Method_UnityEngine_Component_GetComponent_BoxCollider____12e2990);
          if (((*(byte *)(_UnityEngine_Object_TypeInfo_12d54e0 + 0x133) >> 2 & 1) != 0) &&
             (*(int *)(_UnityEngine_Object_TypeInfo_12d54e0 + 0xe0) == 0)) {
            native_sub_4327ec(_UnityEngine_Object_TypeInfo_12d54e0);
          }
          uVar13 = native_UnityEngine_Object__op_Inequality_8d76fc(lVar21,0,0);
          if ((uVar13 & 1) == 0) {
            lVar21 = native_UnityEngine_Component__GetComponent_ActiveAnimation__49daec
                               (plVar20,
                                _Method_UnityEngine_Component_GetComponent_BoxCollider2D____12e2998)
            ;
            fVar27 = (float)param_3;
            if (((*(byte *)(_NGUITools_TypeInfo_12d53c8 + 0x133) >> 2 & 1) != 0) &&
               (*(int *)(_NGUITools_TypeInfo_12d53c8 + 0xe0) == 0)) {
              native_sub_4327ec(_NGUITools_TypeInfo_12d53c8);
            }
            if ((bRam000000000133f58e & 1) == 0) {
              native_sub_43273c(&NGUITools_TypeInfo_12d53c8,lVar21,0);
              native_sub_43273c(&UnityEngine_Object_TypeInfo_12d54e0);
              native_sub_43273c(&StringLiteral_last_change_12f5390);
              bRam000000000133f58e = 1;
            }
            if (((*(byte *)(_UnityEngine_Object_TypeInfo_12d54e0 + 0x133) >> 2 & 1) != 0) &&
               (*(int *)(_UnityEngine_Object_TypeInfo_12d54e0 + 0xe0) == 0)) {
              native_sub_4327ec();
            }
            uVar13 = native_UnityEngine_Object__op_Inequality_8d76fc(lVar21,0,0);
            if ((uVar13 & 1) == 0) {
              return uVar13;
            }
            if (((*(byte *)(_UnityEngine_Object_TypeInfo_12d54e0 + 0x133) >> 2 & 1) != 0) &&
               (*(int *)(_UnityEngine_Object_TypeInfo_12d54e0 + 0xe0) == 0)) {
              native_sub_4327ec();
            }
            uVar13 = native_UnityEngine_Object__op_Inequality_8d76fc(plVar20,0,0);
            if ((uVar13 & 1) == 0) {
              return uVar13;
            }
            if (plVar20 == (long *)0x0) {
LAB_0072ea2c:
                    /* WARNING: Subroutine does not return */
              native_sub_432810();
            }
            lVar17 = *plVar20;
            if ((((*(float *)((long)plVar20 + 0x104) == 0.0) && (*(float *)(plVar20 + 0x21) == 0.0))
                && (param_2 = *(float *)((long)plVar20 + 0x10c), param_2 == 1.0)) &&
               (param_2 = *(float *)(plVar20 + 0x22), param_2 == 1.0)) {
              lVar17 = (**(code **)(lVar17 + 0x1d8))(plVar20,*(undefined8 *)(lVar17 + 0x1e0));
              if (lVar17 == 0) goto LAB_0072ea2c;
              if ((*(uint *)(lVar17 + 0x18) == 0) || (*(uint *)(lVar17 + 0x18) < 3)) {
LAB_0072ea30:
                uVar14 = native_sub_43283c();
                    /* WARNING: Subroutine does not return */
                native_sub_4327dc(uVar14,0);
              }
              uVar14 = *(undefined8 *)(lVar17 + 0x20);
              uVar22 = *(undefined8 *)(lVar17 + 0x38);
              fVar26 = (float)native_UnityEngine_Mathf__Clamp01_8d9d9c(0x3f000000,0);
              if (*(uint *)(lVar17 + 0x18) < 3) goto LAB_0072ea30;
              if (lVar21 == 0) goto LAB_0072ea2c;
              uVar29 = *(undefined8 *)(lVar17 + 0x38);
              fVar32 = (float)uVar14;
              fVar28 = (float)((ulong)uVar14 >> 0x20);
              fVar32 = fVar32 + ((float)uVar22 - fVar32) * fVar26;
              fVar28 = fVar28 + ((float)((ulong)uVar22 >> 0x20) - fVar28) * fVar26;
              uVar14 = CONCAT44(fVar28,fVar32);
              fVar30 = (float)uVar29 - (float)*(undefined8 *)(lVar17 + 0x20);
              fVar26 = (float)((ulong)uVar29 >> 0x20) -
                       (float)((ulong)*(undefined8 *)(lVar17 + 0x20) >> 0x20);
              uVar13 = CONCAT44(fVar26,fVar30);
              fVar27 = (float)native_UnityEngine_Collider2D__get_offset_db8b24(lVar21,0);
              fVar32 = fVar32 - fVar27;
              fVar27 = fVar28 - (float)uVar29;
              if ((fVar32 * fVar32 + fVar27 * fVar27 < 9.9999994e-11) &&
                 (uVar22 = uVar14,
                 uVar24 = native_UnityEngine_BoxCollider2D__get_size_db8988(lVar21,0),
                 fVar30 = fVar30 - extraout_s0, fVar27 = fVar26 - (float)uVar22,
                 fVar30 * fVar30 + fVar27 * fVar27 < 9.9999994e-11)) {
                return uVar24;
              }
              native_UnityEngine_Collider2D__set_offset_db8bcc(uVar14,fVar28,lVar21,0);
            }
            else {
              fVar32 = (float)(**(code **)(lVar17 + 0x2f8))(plVar20,*(undefined8 *)(lVar17 + 0x300))
              ;
              if (lVar21 == 0) goto LAB_0072ea2c;
              uVar13 = (ulong)(uint)(fVar27 - fVar32);
              fVar34 = (fVar32 + fVar27) * 0.5;
              fVar28 = (param_2 + fVar26) * 0.5;
              fVar26 = fVar26 - param_2;
              fVar30 = (float)native_UnityEngine_Collider2D__get_offset_db8b24(lVar21,0);
              fVar30 = fVar34 - fVar30;
              param_2 = fVar28 - param_2;
              param_2 = param_2 * param_2;
              if ((fVar30 * fVar30 + param_2 < 9.9999994e-11) &&
                 (uVar24 = native_UnityEngine_BoxCollider2D__get_size_db8988(lVar21,0),
                 fVar27 = (fVar27 - fVar32) - extraout_s0_00,
                 fVar27 * fVar27 + (fVar26 - param_2) * (fVar26 - param_2) < 9.9999994e-11)) {
                return uVar24;
              }
              native_UnityEngine_Collider2D__set_offset_db8bcc(fVar34,fVar28,lVar21,0);
            }
            native_UnityEngine_BoxCollider2D__set_size_db8a30(uVar13,fVar26,lVar21,0);
            if ((*(byte *)(_NGUITools_TypeInfo_12d53c8 + 0x133) >> 2 & 1) == 0) {
              return _NGUITools_TypeInfo_12d53c8;
            }
            if (*(int *)(_NGUITools_TypeInfo_12d53c8 + 0xe0) != 0) {
              return _NGUITools_TypeInfo_12d53c8;
            }
          }
          else {
            if (((*(byte *)(_NGUITools_TypeInfo_12d53c8 + 0x133) >> 2 & 1) != 0) &&
               (*(int *)(_NGUITools_TypeInfo_12d53c8 + 0xe0) == 0)) {
              native_sub_4327ec();
            }
            if ((bRam000000000133f58d & 1) == 0) {
              native_sub_43273c(&NGUITools_TypeInfo_12d53c8,lVar21,0);
              native_sub_43273c(&UnityEngine_Object_TypeInfo_12d54e0);
              native_sub_43273c(&StringLiteral_last_change_12f5390);
              bRam000000000133f58d = 1;
            }
            if (((*(byte *)(_UnityEngine_Object_TypeInfo_12d54e0 + 0x133) >> 2 & 1) != 0) &&
               (*(int *)(_UnityEngine_Object_TypeInfo_12d54e0 + 0xe0) == 0)) {
              native_sub_4327ec();
            }
            uVar13 = native_UnityEngine_Object__op_Inequality_8d76fc(lVar21,0,0);
            if ((uVar13 & 1) == 0) {
              return uVar13;
            }
            if (((*(byte *)(_UnityEngine_Object_TypeInfo_12d54e0 + 0x133) >> 2 & 1) != 0) &&
               (*(int *)(_UnityEngine_Object_TypeInfo_12d54e0 + 0xe0) == 0)) {
              native_sub_4327ec();
            }
            uVar13 = native_UnityEngine_Object__op_Inequality_8d76fc(plVar20,0,0);
            if ((uVar13 & 1) == 0) {
              return uVar13;
            }
            if (plVar20 == (long *)0x0) {
LAB_0072e730:
                    /* WARNING: Subroutine does not return */
              native_sub_432810();
            }
            lVar17 = *plVar20;
            if ((((*(float *)((long)plVar20 + 0x104) == 0.0) && (*(float *)(plVar20 + 0x21) == 0.0))
                && (param_2 = *(float *)((long)plVar20 + 0x10c), param_2 == 1.0)) &&
               (param_2 = *(float *)(plVar20 + 0x22), param_2 == 1.0)) {
              lVar17 = (**(code **)(lVar17 + 0x1d8))(plVar20,*(undefined8 *)(lVar17 + 0x1e0));
              if (lVar17 == 0) goto LAB_0072e730;
              if ((*(uint *)(lVar17 + 0x18) == 0) || (*(uint *)(lVar17 + 0x18) < 3)) {
LAB_0072e734:
                uVar14 = native_sub_43283c();
                    /* WARNING: Subroutine does not return */
                native_sub_4327dc(uVar14,0);
              }
              uVar14 = *(undefined8 *)(lVar17 + 0x20);
              fVar32 = *(float *)(lVar17 + 0x28);
              uVar22 = *(undefined8 *)(lVar17 + 0x38);
              fVar27 = *(float *)(lVar17 + 0x40);
              fVar26 = (float)native_UnityEngine_Mathf__Clamp01_8d9d9c(0x3f000000,0);
              if (*(uint *)(lVar17 + 0x18) < 3) goto LAB_0072e734;
              if (lVar21 == 0) goto LAB_0072e730;
              fVar28 = (float)uVar14;
              fVar30 = (float)((ulong)uVar14 >> 0x20);
              fVar27 = fVar27 - fVar32;
              uVar12 = (ulong)(uint)fVar27;
              fVar30 = fVar30 + ((float)((ulong)uVar22 >> 0x20) - fVar30) * fVar26;
              uVar29 = CONCAT44(fVar30,fVar28 + ((float)uVar22 - fVar28) * fVar26);
              uVar33 = (ulong)(uint)(fVar32 + fVar27 * fVar26);
              fVar32 = (float)((ulong)*(undefined8 *)(lVar17 + 0x38) >> 0x20) -
                       (float)((ulong)*(undefined8 *)(lVar17 + 0x20) >> 0x20);
              uVar11 = CONCAT44(fVar32,(float)*(undefined8 *)(lVar17 + 0x38) -
                                       (float)*(undefined8 *)(lVar17 + 0x20));
              fVar26 = *(float *)(lVar17 + 0x40) - *(float *)(lVar17 + 0x28);
              uVar14 = uVar29;
              uVar22 = native_UnityEngine_BoxCollider__get_center_dba95c(lVar21,0);
              uVar13 = (ulong)(uint)fVar30;
              uVar24 = uVar13;
              uVar31 = uVar33;
              uVar12 = native_UnityEngine_Vector3__op_Inequality_776c48
                                 (uVar29,uVar13,uVar33,uVar22,uVar14,uVar12,0);
              if ((uVar12 & 1) == 0) {
                uVar14 = native_UnityEngine_BoxCollider__get_size_dbaab4(lVar21,0);
                uVar24 = native_UnityEngine_Vector3__op_Inequality_776c48
                                   (uVar11,fVar32,fVar26,uVar14,uVar24,uVar31,0);
                if ((uVar24 & 1) == 0) {
                  return uVar24;
                }
              }
              native_UnityEngine_BoxCollider__set_center_dbaa0c(uVar29,uVar13,uVar33,lVar21,0);
            }
            else {
              fVar27 = (float)(**(code **)(lVar17 + 0x2f8))(plVar20,*(undefined8 *)(lVar17 + 0x300))
              ;
              if (lVar21 == 0) goto LAB_0072e730;
              uVar11 = (ulong)(uint)((float)param_3 - fVar27);
              fVar32 = fVar26 - param_2;
              uVar24 = (ulong)(uint)(param_2 + fVar26);
              uVar31 = (ulong)(uint)((param_2 + fVar26) * 0.5);
              fVar27 = (fVar27 + (float)param_3) * 0.5;
              uVar14 = native_UnityEngine_BoxCollider__get_center_dba95c(lVar21,0);
              uVar22 = 0;
              fVar26 = 0.0;
              uVar13 = uVar31;
              uVar24 = native_UnityEngine_Vector3__op_Inequality_776c48
                                 (fVar27,uVar31,0,uVar14,uVar24,param_3,0);
              if ((uVar24 & 1) == 0) {
                uVar14 = native_UnityEngine_BoxCollider__get_size_dbaab4(lVar21,0);
                uVar13 = native_UnityEngine_Vector3__op_Inequality_776c48
                                   (uVar11,fVar32,0,uVar14,uVar13,uVar22,0);
                if ((uVar13 & 1) == 0) {
                  return uVar13;
                }
              }
              native_UnityEngine_BoxCollider__set_center_dbaa0c(fVar27,uVar31,0,lVar21,0);
            }
            native_UnityEngine_BoxCollider__set_size_dbab64(uVar11,fVar32,fVar26,lVar21,0);
            if ((*(byte *)(_NGUITools_TypeInfo_12d53c8 + 0x133) >> 2 & 1) == 0) {
              return _NGUITools_TypeInfo_12d53c8;
            }
            if (*(int *)(_NGUITools_TypeInfo_12d53c8 + 0xe0) != 0) {
              return _NGUITools_TypeInfo_12d53c8;
            }
          }
          uVar13 = _NGUITools_TypeInfo_12d53c8;
          if ((*(byte *)(_NGUITools_TypeInfo_12d53c8 + 0x133) >> 2 & 1) == 0) {
            return _NGUITools_TypeInfo_12d53c8;
          }
          piVar1 = (int *)(_NGUITools_TypeInfo_12d53c8 + 0xe0);
          while (*piVar1 == 1) {
            cVar4 = '\x01';
            bVar5 = (bool)ExclusiveMonitorPass(piVar1,0x10);
            if (bVar5) {
              *piVar1 = 1;
              cVar4 = ExclusiveMonitorsStatus();
            }
            if (cVar4 == '\0') {
              DataMemoryBarrier(2,3);
              return uVar13;
            }
          }
          ClearExclusiveLocal();
          DataMemoryBarrier(2,3);
          uVar24 = native_sub_432c38();
          if (uVar24 == uRam00000000013451d0) {
            iRam00000000013451d8 = iRam00000000013451d8 + 1;
          }
          else {
            iVar7 = 0;
            do {
              iVar8 = iRam0000000001345190;
              if (iRam0000000001345190 == iVar7) {
                cVar4 = '\x01';
                bVar5 = (bool)ExclusiveMonitorPass(0x1345190,0x10);
                if (bVar5) {
                  cVar4 = ExclusiveMonitorsStatus();
                  iRam0000000001345190 = iVar7 + 1;
                }
                if (cVar4 != '\0') goto code_r0x003cc248;
                bVar5 = true;
              }
              else {
                ClearExclusiveLocal();
code_r0x003cc248:
                bVar5 = false;
              }
              uVar11 = uVar24;
            } while ((iVar8 != 2) && (iVar7 = iVar8, !bVar5));
            while (iVar8 != 0) {
              uVar11 = native_sub_432bb4(0x1345190,2,0xffffffff);
              do {
                iVar8 = iRam0000000001345190;
                cVar4 = '\x01';
                bVar5 = (bool)ExclusiveMonitorPass(0x1345190,0x10);
                if (bVar5) {
                  iRam0000000001345190 = 2;
                  cVar4 = ExclusiveMonitorsStatus();
                }
              } while (cVar4 != '\0');
            }
            iRam00000000013451d8 = 1;
            uRam00000000013451d0 = uVar24;
            uVar24 = uVar11;
          }
          while (*piVar1 == 1) {
            cVar4 = '\x01';
            bVar5 = (bool)ExclusiveMonitorPass(piVar1,0x10);
            if (bVar5) {
              *piVar1 = 1;
              cVar4 = ExclusiveMonitorsStatus();
            }
            if (cVar4 == '\0') {
              DataMemoryBarrier(2,3);
              if (iRam00000000013451d8 < 1) {
                return uVar24;
              }
              if (iRam00000000013451d8 + -1 != 0) {
                iRam00000000013451d8 = iRam00000000013451d8 + -1;
                return uVar24;
              }
              uRam00000000013451d0 = 0;
              iRam00000000013451d8 = 0;
              do {
                iVar7 = iRam0000000001345190;
                cVar4 = '\x01';
                bVar5 = (bool)ExclusiveMonitorPass(0x1345190,0x10);
                if (bVar5) {
                  iRam0000000001345190 = 0;
                  cVar4 = ExclusiveMonitorsStatus();
                }
              } while (cVar4 != '\0');
              if (iVar7 != 2) {
                uRam00000000013451d0 = 0;
                iRam00000000013451d8 = 0;
                return uVar24;
              }
              uVar13 = (*(code *)&DAT_0155b260)(0x62,0x1345190,0x81,1,0,0,0);
              return uVar13;
            }
          }
          ClearExclusiveLocal();
          DataMemoryBarrier(2,3);
          piVar2 = (int *)(uVar13 + 0xdc);
          do {
            if (*piVar2 != 1) {
              ClearExclusiveLocal();
              DataMemoryBarrier(2,3);
              puVar3 = (ulong *)(uVar13 + 0xe8);
              uVar24 = native_sub_3aad3c();
              do {
                cVar4 = '\x01';
                bVar5 = (bool)ExclusiveMonitorPass(puVar3,0x10);
                if (bVar5) {
                  *puVar3 = uVar24;
                  cVar4 = ExclusiveMonitorsStatus();
                }
              } while (cVar4 != '\0');
              DataMemoryBarrier(2,3);
              do {
                cVar4 = '\x01';
                bVar5 = (bool)ExclusiveMonitorPass(piVar2,0x10);
                if (bVar5) {
                  *piVar2 = 1;
                  cVar4 = ExclusiveMonitorsStatus();
                }
              } while (cVar4 != '\0');
              DataMemoryBarrier(2,3);
              iVar7 = iRam00000000013451d8 + -1;
              if ((0 < iRam00000000013451d8) && (iRam00000000013451d8 = iVar7, iVar7 == 0)) {
                uRam00000000013451d0 = 0;
                iRam00000000013451d8 = 0;
                do {
                  iVar7 = iRam0000000001345190;
                  cVar4 = '\x01';
                  bVar5 = (bool)ExclusiveMonitorPass(0x1345190,0x10);
                  if (bVar5) {
                    iRam0000000001345190 = 0;
                    cVar4 = ExclusiveMonitorsStatus();
                  }
                } while (cVar4 != '\0');
                if (iVar7 == 2) {
                  uVar24 = native_sub_432c0c(0x1345190,1,0);
                }
              }
              if ((*(byte *)(uVar13 + 0x133) >> 2 & 1) != 0) {
                lVar21 = native_sub_3c573c(uVar13,&UNK_00edd9af,0xffffffff,0x800);
                uVar24 = 0;
                if (lVar21 != 0) {
                  uVar24 = native_sub_3d704c(lVar21,0,0,&stack0xffffffffffffffb8);
                }
              }
              do {
                cVar4 = '\x01';
                bVar5 = (bool)ExclusiveMonitorPass(piVar1,0x10);
                if (bVar5) {
                  *piVar1 = 1;
                  cVar4 = ExclusiveMonitorsStatus();
                }
              } while (cVar4 != '\0');
              DataMemoryBarrier(2,3);
              do {
                cVar4 = '\x01';
                bVar5 = (bool)ExclusiveMonitorPass(puVar3,0x10);
                if (bVar5) {
                  *puVar3 = 0;
                  cVar4 = ExclusiveMonitorsStatus();
                }
              } while (cVar4 != '\0');
              DataMemoryBarrier(2,3);
              return uVar24;
            }
            cVar4 = '\x01';
            bVar5 = (bool)ExclusiveMonitorPass(piVar2,0x10);
            if (bVar5) {
              *piVar2 = 1;
              cVar4 = ExclusiveMonitorsStatus();
            }
          } while (cVar4 != '\0');
          DataMemoryBarrier(2,3);
          iVar7 = iRam00000000013451d8 + -1;
          if ((0 < iRam00000000013451d8) && (iRam00000000013451d8 = iVar7, iVar7 == 0)) {
            uRam00000000013451d0 = 0;
            iRam00000000013451d8 = 0;
            do {
              iVar7 = iRam0000000001345190;
              cVar4 = '\x01';
              bVar5 = (bool)ExclusiveMonitorPass(0x1345190,0x10);
              if (bVar5) {
                iRam0000000001345190 = 0;
                cVar4 = ExclusiveMonitorsStatus();
              }
            } while (cVar4 != '\0');
            if (iVar7 == 2) {
              native_sub_432c0c(0x1345190,1,0);
            }
          }
          uVar24 = native_sub_3aad3c();
          puVar3 = (ulong *)(uVar13 + 0xe8);
          do {
            uVar13 = *puVar3;
            if (uVar13 != uVar24) {
              ClearExclusiveLocal();
              break;
            }
            cVar4 = '\x01';
            bVar5 = (bool)ExclusiveMonitorPass(puVar3,0x10);
            if (bVar5) {
              *puVar3 = uVar24;
              cVar4 = ExclusiveMonitorsStatus();
            }
          } while (cVar4 != '\0');
          DataMemoryBarrier(2,3);
          if (uVar13 != uVar24) {
            do {
              iVar7 = *piVar1;
              if (iVar7 != 1) {
                ClearExclusiveLocal();
                break;
              }
              cVar4 = '\x01';
              bVar5 = (bool)ExclusiveMonitorPass(piVar1,0x10);
              if (bVar5) {
                *piVar1 = 1;
                cVar4 = ExclusiveMonitorsStatus();
              }
            } while (cVar4 != '\0');
            DataMemoryBarrier(2,3);
            while (iVar7 == 0) {
              uVar24 = native_sub_3a30dc(1,0);
              do {
                iVar7 = *piVar1;
                if (iVar7 != 1) {
                  ClearExclusiveLocal();
                  break;
                }
                cVar4 = '\x01';
                bVar5 = (bool)ExclusiveMonitorPass(piVar1,0x10);
                if (bVar5) {
                  *piVar1 = 1;
                  cVar4 = ExclusiveMonitorsStatus();
                }
              } while (cVar4 != '\0');
              DataMemoryBarrier(2,3);
            }
          }
          return uVar24;
        }
      }
      return uVar13;
    }
  }
LAB_00943d20:
                    /* WARNING: Subroutine does not return */
  native_sub_432810();
}



/* UITextList$$Update @ 0x943d24
 * void UITextList__Update (UITextList_o* __this, const MethodInfo* method); */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* UITextList$$Update
   void UITextList__Update (UITextList_o* __this, const MethodInfo* method); */

void native_UITextList__Update_943d24(long param_1)

{
  int iVar1;
  ulong uVar2;
  long lVar3;
  long lVar4;
  long lVar5;
  int iVar6;
  long *plVar7;
  undefined8 uVar8;
  long lVar9;
  float fVar10;
  long lStack_48;
  
  uVar2 = native_UITextList__get_isValid_9435ac();
  if ((uVar2 & 1) == 0) {
    return;
  }
  lVar5 = *(long *)(param_1 + 0x18);
  if (lVar5 == 0) {
                    /* WARNING: Subroutine does not return */
    native_sub_432810();
  }
  if ((*(int *)(lVar5 + 0xa4) == *(int *)(param_1 + 0x40)) &&
     (*(int *)(lVar5 + 0xa8) == *(int *)(param_1 + 0x44))) {
    return;
  }
  if ((bRam000000000134141c & 1) == 0) {
    native_sub_43273c(&char___TypeInfo_12d3090);
    native_sub_43273c(&NGUIText_TypeInfo_12d53c0);
    native_sub_43273c(&UnityEngine_Object_TypeInfo_12d54e0);
    native_sub_43273c(&UIScrollBar_TypeInfo_12d64b0);
    bRam000000000134141c = 1;
  }
  lStack_48 = 0;
  uVar2 = native_UITextList__get_isValid_9435ac(param_1);
  if ((uVar2 & 1) == 0) {
    return;
  }
  lVar5 = *(long *)(param_1 + 0x18);
  if (lVar5 != 0) {
    *(undefined4 *)(param_1 + 0x40) = *(undefined4 *)(lVar5 + 0xa4);
    *(undefined4 *)(param_1 + 0x44) = *(undefined4 *)(lVar5 + 0xa8);
    native_UILabel__UpdateNGUIText_aeae48(lVar5,0);
    if (((*(byte *)(_NGUIText_TypeInfo_12d53c0 + 0x133) >> 2 & 1) != 0) &&
       (*(int *)(_NGUIText_TypeInfo_12d53c0 + 0xe0) == 0)) {
      native_sub_4327ec();
    }
    lVar5 = _NGUIText_TypeInfo_12d53c0;
    *(undefined4 *)(*(long *)(_NGUIText_TypeInfo_12d53c0 + 0xb8) + 0x44) = 1000000;
    *(undefined4 *)(*(long *)(lVar5 + 0xb8) + 0x4c) = 1000000;
    *(undefined4 *)(param_1 + 0x3c) = 0;
    lVar5 = native_UITextList__get_paragraphs_943424(param_1);
    if (lVar5 != 0) {
      lVar9 = 0;
      while ((int)(uint)lVar9 < *(int *)(lVar5 + 0x18)) {
        if ((*(long *)(param_1 + 0x48) == 0) ||
           (lVar5 = *(long *)(*(long *)(param_1 + 0x48) + 0x10), lVar5 == 0)) goto LAB_009440b4;
        if (*(uint *)(lVar5 + 0x18) <= (uint)lVar9) goto LAB_009440b8;
        lVar5 = *(long *)(lVar5 + lVar9 * 8 + 0x20);
        if (lVar5 == 0) goto LAB_009440b4;
        uVar8 = *(undefined8 *)(lVar5 + 0x10);
        if (((*(byte *)(_NGUIText_TypeInfo_12d53c0 + 0x133) >> 2 & 1) != 0) &&
           (*(int *)(_NGUIText_TypeInfo_12d53c0 + 0xe0) == 0)) {
          native_sub_4327ec();
        }
        native_NGUIText__WrapText_80dd68(uVar8,&lStack_48,0,1,0,0);
        lVar4 = lStack_48;
        lVar3 = native_sub_432750(_char___TypeInfo_12d3090,1);
        if (lVar3 == 0) goto LAB_009440b4;
        if (*(int *)(lVar3 + 0x18) == 0) goto LAB_009440b8;
        *(undefined2 *)(lVar3 + 0x20) = 10;
        if (lVar4 == 0) goto LAB_009440b4;
        lVar4 = native_System_String__Split_b095f4(lVar4,lVar3,0);
        plVar7 = (long *)(lVar5 + 0x18);
        *plVar7 = lVar4;
        native_sub_4326e0(plVar7,lVar4);
        if (*plVar7 == 0) goto LAB_009440b4;
        *(int *)(param_1 + 0x3c) = *(int *)(param_1 + 0x3c) + *(int *)(*plVar7 + 0x18);
        lVar5 = native_UITextList__get_paragraphs_943424(param_1);
        lVar9 = lVar9 + 1;
        if (lVar5 == 0) goto LAB_009440b4;
      }
      lVar5 = *(long *)(param_1 + 0x48);
      *(undefined4 *)(param_1 + 0x3c) = 0;
      if (lVar5 != 0) {
        iVar1 = *(int *)(lVar5 + 0x18);
        if (iVar1 < 1) goto LAB_00943fac;
        lVar9 = 0;
        iVar6 = 0;
        goto LAB_00943f6c;
      }
    }
  }
  goto LAB_009440b4;
LAB_00943f6c:
  do {
    lVar4 = *(long *)(lVar5 + 0x10);
    if (lVar4 == 0) goto LAB_009440b4;
    if (*(uint *)(lVar4 + 0x18) <= (uint)lVar9) {
LAB_009440b8:
      uVar8 = native_sub_43283c();
                    /* WARNING: Subroutine does not return */
      native_sub_4327dc(uVar8,0);
    }
    lVar4 = *(long *)(lVar4 + lVar9 * 8 + 0x20);
    if ((lVar4 == 0) || (lVar4 = *(long *)(lVar4 + 0x18), lVar4 == 0)) goto LAB_009440b4;
    lVar9 = lVar9 + 1;
    iVar6 = iVar6 + *(int *)(lVar4 + 0x18);
    *(int *)(param_1 + 0x3c) = iVar6;
  } while ((int)lVar9 < iVar1);
LAB_00943fac:
  uVar8 = *(undefined8 *)(param_1 + 0x20);
  if (((*(byte *)(_UnityEngine_Object_TypeInfo_12d54e0 + 0x133) >> 2 & 1) != 0) &&
     (*(int *)(_UnityEngine_Object_TypeInfo_12d54e0 + 0xe0) == 0)) {
    native_sub_4327ec();
  }
  uVar2 = native_UnityEngine_Object__op_Inequality_8d76fc(uVar8,0,0);
  if ((uVar2 & 1) == 0) goto LAB_0094408c;
  plVar7 = *(long **)(param_1 + 0x20);
  if (plVar7 == (long *)0x0) {
LAB_0094400c:
    plVar7 = (long *)0x0;
  }
  else {
    if (*(byte *)(*plVar7 + 300) < *(byte *)(_UIScrollBar_TypeInfo_12d64b0 + 300))
    goto LAB_0094400c;
    if (*(long *)(*(long *)(*plVar7 + 200) +
                  (ulong)*(byte *)(_UIScrollBar_TypeInfo_12d64b0 + 300) * 8 + -8) !=
        _UIScrollBar_TypeInfo_12d64b0) {
      plVar7 = (long *)0x0;
    }
  }
  if (((*(byte *)(_UnityEngine_Object_TypeInfo_12d54e0 + 0x133) >> 2 & 1) != 0) &&
     (*(int *)(_UnityEngine_Object_TypeInfo_12d54e0 + 0xe0) == 0)) {
    native_sub_4327ec();
  }
  uVar2 = native_UnityEngine_Object__op_Inequality_8d76fc(plVar7,0,0);
  if ((uVar2 & 1) != 0) {
    if (*(int *)(param_1 + 0x3c) == 0) {
      fVar10 = 1.0;
    }
    else {
      iVar1 = native_UITextList__get_scrollHeight_943a88(param_1);
      fVar10 = 1.0 - (float)iVar1 / (float)*(int *)(param_1 + 0x3c);
    }
    if (plVar7 == (long *)0x0) {
LAB_009440b4:
                    /* WARNING: Subroutine does not return */
      native_sub_432810();
    }
    native_UIScrollBar__set_barSize_c309c0(fVar10,plVar7,0);
  }
LAB_0094408c:
  native_UITextList__UpdateVisibleText_943768(param_1);
  return;
}



/* UITextList$$OnScroll @ 0x9440c4
 * void UITextList__OnScroll (UITextList_o* __this, float val, const MethodInfo* method); */

/* WARNING: Removing unreachable block (ram,0x00432c1c) */
/* WARNING: Removing unreachable block (ram,0x003cc494) */
/* WARNING: Removing unreachable block (ram,0x003cc4b8) */
/* WARNING: Removing unreachable block (ram,0x003cc4d4) */
/* WARNING: Removing unreachable block (ram,0x003cc4dc) */
/* WARNING: Removing unreachable block (ram,0x003cc4f0) */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* UITextList$$OnScroll
   void UITextList__OnScroll (UITextList_o* __this, float val, const MethodInfo* method); */

ulong native_UITextList__OnScroll_9440c4
                (float param_1,undefined1 param_2 [16],undefined1 param_3 [16],undefined8 param_4,
                long param_5)

{
  int *piVar1;
  int *piVar2;
  ulong *puVar3;
  char cVar4;
  bool bVar5;
  uint uVar6;
  int iVar7;
  int iVar8;
  uint uVar9;
  int iVar10;
  ulong uVar11;
  ulong uVar12;
  long *plVar13;
  ulong uVar14;
  long *plVar15;
  undefined8 *puVar16;
  long lVar17;
  int iVar18;
  undefined8 uVar19;
  long lVar20;
  uint uVar21;
  ulong uVar22;
  float extraout_s0;
  float extraout_s0_00;
  float fVar23;
  float fVar25;
  undefined8 uVar24;
  float fVar26;
  float fVar29;
  ulong uVar27;
  undefined8 uVar28;
  float fVar30;
  ulong uVar31;
  float fVar32;
  float fVar33;
  
  uVar14 = native_UITextList__get_scrollHeight_943a88();
  if ((int)uVar14 == 0) {
    return uVar14;
  }
  fVar23 = (float)native_UITextList__get_lineHeight_9439e4(param_5);
  fVar26 = *(float *)(param_5 + 0x38);
  fVar30 = (float)(int)uVar14;
  uVar14 = (ulong)(uint)fVar30;
  fVar23 = fVar26 - (fVar23 * param_1) / fVar30;
  if ((bRam0000000001341416 & 1) == 0) {
    native_sub_43273c(&UnityEngine_Object_TypeInfo_12d54e0);
    bRam0000000001341416 = 1;
  }
  uVar24 = native_UnityEngine_Mathf__Clamp01_8d9d9c(fVar23,0);
  uVar12 = native_UITextList__get_isValid_9435ac(param_5);
  if (((uVar12 & 1) == 0) || (*(float *)(param_5 + 0x38) == (float)uVar24)) {
    return uVar12;
  }
  uVar19 = *(undefined8 *)(param_5 + 0x20);
  if (((*(byte *)(_UnityEngine_Object_TypeInfo_12d54e0 + 0x133) >> 2 & 1) != 0) &&
     (*(int *)(_UnityEngine_Object_TypeInfo_12d54e0 + 0xe0) == 0)) {
    native_sub_4327ec();
  }
  uVar12 = native_UnityEngine_Object__op_Inequality_8d76fc(uVar19,0,0);
  if ((uVar12 & 1) != 0) {
    plVar13 = *(long **)(param_5 + 0x20);
    if (plVar13 != (long *)0x0) {
      if ((bRam00000000013426fb & 1) == 0) {
        native_sub_43273c(&EventDelegate_TypeInfo_12d4590);
        native_sub_43273c(&NGUITools_TypeInfo_12d53c8);
        native_sub_43273c(&UIProgressBar_TypeInfo_12d6498);
        bRam00000000013426fb = 1;
      }
      fVar23 = (float)native_UnityEngine_Mathf__Clamp01_8d9d9c(uVar24,0);
      if (*(float *)(plVar13 + 7) == fVar23) {
        uVar14 = 0;
      }
      else {
        fVar26 = (float)native_UIProgressBar__get_value_c2b6f0(plVar13);
        *(float *)(plVar13 + 7) = fVar23;
        if (((char)plVar13[8] != '\0') &&
           (fVar23 = (float)native_UIProgressBar__get_value_c2b6f0(plVar13), fVar26 != fVar23)) {
          if (((*(byte *)(_NGUITools_TypeInfo_12d53c8 + 0x133) >> 2 & 1) != 0) &&
             (*(int *)(_NGUITools_TypeInfo_12d53c8 + 0xe0) == 0)) {
            native_sub_4327ec();
          }
          uVar14 = native_NGUITools__GetActive_72d02c(plVar13,0);
          if ((uVar14 & 1) != 0) {
            lVar20 = plVar13[0xd];
            if (((*(byte *)(_EventDelegate_TypeInfo_12d4590 + 0x133) >> 2 & 1) != 0) &&
               (*(int *)(_EventDelegate_TypeInfo_12d4590 + 0xe0) == 0)) {
              native_sub_4327ec();
            }
            uVar14 = native_EventDelegate__IsValid_deef08(lVar20,0);
            if ((uVar14 & 1) != 0) {
              plVar15 = *(long **)(_UIProgressBar_TypeInfo_12d6498 + 0xb8);
              *plVar15 = (long)plVar13;
              native_sub_4326e0(plVar15,plVar13);
              lVar20 = plVar13[0xd];
              if (((*(byte *)(_EventDelegate_TypeInfo_12d4590 + 0x133) >> 2 & 1) != 0) &&
                 (*(int *)(_EventDelegate_TypeInfo_12d4590 + 0xe0) == 0)) {
                native_sub_4327ec();
              }
              native_EventDelegate__Execute_deecbc(lVar20,0);
              puVar16 = *(undefined8 **)(_UIProgressBar_TypeInfo_12d6498 + 0xb8);
              *puVar16 = 0;
              native_sub_4326e0(puVar16,0);
            }
          }
          (**(code **)(*plVar13 + 0x1a8))(plVar13,*(undefined8 *)(*plVar13 + 0x1b0));
        }
        uVar14 = 1;
      }
      return uVar14;
    }
                    /* WARNING: Subroutine does not return */
    native_sub_432810();
  }
  *(float *)(param_5 + 0x38) = (float)uVar24;
  if ((bRam000000000134141d & 1) == 0) {
    native_sub_43273c(&System_Text_StringBuilder_TypeInfo_12d5f30);
    native_sub_43273c(&StringLiteral___12eab80);
    native_sub_43273c(&StringLiteral__12eaac0);
    bRam000000000134141d = 1;
  }
  uVar12 = native_UITextList__get_isValid_9435ac(param_5);
  fVar23 = (float)param_4;
  if ((uVar12 & 1) == 0) {
    return uVar12;
  }
  plVar13 = *(long **)(param_5 + 0x18);
  if (plVar13 == (long *)0x0) goto LAB_009439d4;
  lVar20 = _StringLiteral__12eaac0;
  if (*(int *)(param_5 + 0x3c) != 0) {
    lVar20 = plVar13[0x15];
    fVar23 = (float)native_UITextList__get_lineHeight_9439e4(param_5);
    iVar7 = native_UnityEngine_Mathf__FloorToInt_8e506c((float)(int)lVar20 / fVar23,0);
    iVar8 = native_UnityEngine_Mathf__Max_8e4cd0(0,*(int *)(param_5 + 0x3c) - iVar7,0);
    uVar12 = (ulong)(uint)(float)iVar8;
    uVar9 = native_UnityEngine_Mathf__RoundToInt_8e50f0(*(float *)(param_5 + 0x38) * (float)iVar8,0)
    ;
    plVar15 = (long *)native_sub_432808(_System_Text_StringBuilder_TypeInfo_12d5f30);
    native_System_Text_StringBuilder___ctor_a4881c(plVar15,0);
    lVar20 = native_UITextList__get_paragraphs_943424(param_5);
    fVar26 = (float)uVar12;
    fVar23 = (float)param_4;
    if (lVar20 == 0) {
LAB_009439d4:
                    /* WARNING: Subroutine does not return */
      native_sub_432810();
    }
    iVar8 = *(int *)(lVar20 + 0x18);
    if ((0 < iVar8) && (0 < iVar7)) {
      uVar21 = 0;
      uVar9 = uVar9 & ((int)uVar9 >> 0x1f ^ 0xffffffffU);
      do {
        if ((*(long *)(param_5 + 0x48) == 0) ||
           (lVar20 = *(long *)(*(long *)(param_5 + 0x48) + 0x10), lVar20 == 0)) goto LAB_009439d4;
        if (*(uint *)(lVar20 + 0x18) <= uVar21) {
LAB_009439d8:
          uVar24 = native_sub_43283c();
                    /* WARNING: Subroutine does not return */
          native_sub_4327dc(uVar24,0);
        }
        lVar20 = *(long *)(lVar20 + (long)(int)uVar21 * 8 + 0x20);
        if ((lVar20 == 0) || (lVar17 = *(long *)(lVar20 + 0x18), lVar17 == 0)) goto LAB_009439d4;
        iVar18 = (int)*(undefined8 *)(lVar17 + 0x18);
        if (0 < iVar18) {
          uVar22 = 0;
          while( true ) {
            if (*(uint *)(lVar17 + 0x18) <= uVar22) goto LAB_009439d8;
            uVar6 = uVar9 - 1;
            if ((int)uVar9 < 1) {
              if (plVar15 == (long *)0x0) goto LAB_009439d4;
              uVar24 = *(undefined8 *)(lVar17 + uVar22 * 8 + 0x20);
              iVar10 = native_System_Text_StringBuilder__get_Length_a49204(plVar15,0);
              if (0 < iVar10) {
                native_System_Text_StringBuilder__Append_a49d68(plVar15,_StringLiteral___12eab80,0);
              }
              native_System_Text_StringBuilder__Append_a49d68(plVar15,uVar24,0);
              iVar7 = iVar7 + -1;
              uVar6 = uVar9;
            }
            uVar9 = uVar6;
            uVar22 = uVar22 + 1;
            if (((long)iVar18 <= (long)uVar22) || (iVar7 < 1)) break;
            lVar17 = *(long *)(lVar20 + 0x18);
            if (lVar17 == 0) goto LAB_009439d4;
          }
        }
        fVar26 = (float)uVar12;
        fVar23 = (float)param_4;
        uVar21 = uVar21 + 1;
      } while (((int)uVar21 < iVar8) && (0 < iVar7));
    }
    if (plVar15 == (long *)0x0) goto LAB_009439d4;
    plVar13 = *(long **)(param_5 + 0x18);
    lVar20 = (**(code **)(*plVar15 + 0x168))(plVar15,*(undefined8 *)(*plVar15 + 0x170));
    if (plVar13 == (long *)0x0) goto LAB_009439d4;
  }
  if ((bRam0000000001342005 & 1) == 0) {
    native_sub_43273c(&StringLiteral__12eaac0,lVar20,0);
    bRam0000000001342005 = 1;
  }
  uVar12 = native_System_String__op_Equality_afc18c(plVar13[0x35],lVar20,0);
  if ((uVar12 & 1) == 0) {
    uVar12 = native_System_String__IsNullOrEmpty_b09430(lVar20,0);
    lVar17 = plVar13[0x35];
    if ((uVar12 & 1) == 0) {
      uVar12 = native_System_String__op_Inequality_afbbb4(lVar17,lVar20,0);
      if ((uVar12 & 1) == 0) {
        return uVar12;
      }
      plVar13[0x35] = lVar20;
    }
    else {
      uVar12 = native_System_String__IsNullOrEmpty_b09430(lVar17,0);
      lVar20 = _StringLiteral__12eaac0;
      if ((uVar12 & 1) != 0) {
        return uVar12;
      }
      plVar13[0x35] = _StringLiteral__12eaac0;
    }
    native_sub_4326e0(plVar13 + 0x35,lVar20);
    (**(code **)(*plVar13 + 0x378))(plVar13,*(undefined8 *)(*plVar13 + 0x380));
    uVar12 = native_UILabel__ProcessAndRequest_ae7fdc(plVar13);
    if ((char)plVar13[0x1b] != '\0') {
      if ((bRam000000000134145d & 1) == 0) {
        native_sub_43273c(&Method_UnityEngine_Component_GetComponent_BoxCollider2D____12e2998,0);
        native_sub_43273c(&Method_UnityEngine_Component_GetComponent_BoxCollider____12e2990);
        native_sub_43273c(&NGUITools_TypeInfo_12d53c8);
        native_sub_43273c(&UnityEngine_Object_TypeInfo_12d54e0);
        bRam000000000134145d = 1;
      }
      lVar20 = native_UnityEngine_Component__GetComponent_ActiveAnimation__49daec
                         (plVar13,_Method_UnityEngine_Component_GetComponent_BoxCollider____12e2990)
      ;
      if (((*(byte *)(_UnityEngine_Object_TypeInfo_12d54e0 + 0x133) >> 2 & 1) != 0) &&
         (*(int *)(_UnityEngine_Object_TypeInfo_12d54e0 + 0xe0) == 0)) {
        native_sub_4327ec(_UnityEngine_Object_TypeInfo_12d54e0);
      }
      uVar12 = native_UnityEngine_Object__op_Inequality_8d76fc(lVar20,0,0);
      if ((uVar12 & 1) == 0) {
        lVar20 = native_UnityEngine_Component__GetComponent_ActiveAnimation__49daec
                           (plVar13,
                            _Method_UnityEngine_Component_GetComponent_BoxCollider2D____12e2998);
        fVar30 = (float)uVar14;
        if (((*(byte *)(_NGUITools_TypeInfo_12d53c8 + 0x133) >> 2 & 1) != 0) &&
           (*(int *)(_NGUITools_TypeInfo_12d53c8 + 0xe0) == 0)) {
          native_sub_4327ec(_NGUITools_TypeInfo_12d53c8);
        }
        if ((bRam000000000133f58e & 1) == 0) {
          native_sub_43273c(&NGUITools_TypeInfo_12d53c8,lVar20,0);
          native_sub_43273c(&UnityEngine_Object_TypeInfo_12d54e0);
          native_sub_43273c(&StringLiteral_last_change_12f5390);
          bRam000000000133f58e = 1;
        }
        if (((*(byte *)(_UnityEngine_Object_TypeInfo_12d54e0 + 0x133) >> 2 & 1) != 0) &&
           (*(int *)(_UnityEngine_Object_TypeInfo_12d54e0 + 0xe0) == 0)) {
          native_sub_4327ec();
        }
        uVar14 = native_UnityEngine_Object__op_Inequality_8d76fc(lVar20,0,0);
        if ((uVar14 & 1) == 0) {
          return uVar14;
        }
        if (((*(byte *)(_UnityEngine_Object_TypeInfo_12d54e0 + 0x133) >> 2 & 1) != 0) &&
           (*(int *)(_UnityEngine_Object_TypeInfo_12d54e0 + 0xe0) == 0)) {
          native_sub_4327ec();
        }
        uVar14 = native_UnityEngine_Object__op_Inequality_8d76fc(plVar13,0,0);
        if ((uVar14 & 1) == 0) {
          return uVar14;
        }
        if (plVar13 == (long *)0x0) {
LAB_0072ea2c:
                    /* WARNING: Subroutine does not return */
          native_sub_432810();
        }
        lVar17 = *plVar13;
        if ((((*(float *)((long)plVar13 + 0x104) == 0.0) && (*(float *)(plVar13 + 0x21) == 0.0)) &&
            (fVar26 = *(float *)((long)plVar13 + 0x10c), fVar26 == 1.0)) &&
           (fVar26 = *(float *)(plVar13 + 0x22), fVar26 == 1.0)) {
          lVar17 = (**(code **)(lVar17 + 0x1d8))(plVar13,*(undefined8 *)(lVar17 + 0x1e0));
          if (lVar17 == 0) goto LAB_0072ea2c;
          if ((*(uint *)(lVar17 + 0x18) == 0) || (*(uint *)(lVar17 + 0x18) < 3)) {
LAB_0072ea30:
            uVar24 = native_sub_43283c();
                    /* WARNING: Subroutine does not return */
            native_sub_4327dc(uVar24,0);
          }
          uVar24 = *(undefined8 *)(lVar17 + 0x20);
          uVar19 = *(undefined8 *)(lVar17 + 0x38);
          fVar23 = (float)native_UnityEngine_Mathf__Clamp01_8d9d9c(0x3f000000,0);
          if (*(uint *)(lVar17 + 0x18) < 3) goto LAB_0072ea30;
          if (lVar20 == 0) goto LAB_0072ea2c;
          uVar28 = *(undefined8 *)(lVar17 + 0x38);
          fVar30 = (float)uVar24;
          fVar29 = (float)((ulong)uVar24 >> 0x20);
          fVar30 = fVar30 + ((float)uVar19 - fVar30) * fVar23;
          fVar29 = fVar29 + ((float)((ulong)uVar19 >> 0x20) - fVar29) * fVar23;
          uVar24 = CONCAT44(fVar29,fVar30);
          fVar25 = (float)uVar28 - (float)*(undefined8 *)(lVar17 + 0x20);
          fVar23 = (float)((ulong)uVar28 >> 0x20) -
                   (float)((ulong)*(undefined8 *)(lVar17 + 0x20) >> 0x20);
          uVar14 = CONCAT44(fVar23,fVar25);
          fVar26 = (float)native_UnityEngine_Collider2D__get_offset_db8b24(lVar20,0);
          fVar30 = fVar30 - fVar26;
          fVar26 = fVar29 - (float)uVar28;
          if ((fVar30 * fVar30 + fVar26 * fVar26 < 9.9999994e-11) &&
             (uVar19 = uVar24, uVar12 = native_UnityEngine_BoxCollider2D__get_size_db8988(lVar20,0),
             fVar25 = fVar25 - extraout_s0, fVar26 = fVar23 - (float)uVar19,
             fVar25 * fVar25 + fVar26 * fVar26 < 9.9999994e-11)) {
            return uVar12;
          }
          native_UnityEngine_Collider2D__set_offset_db8bcc(uVar24,fVar29,lVar20,0);
        }
        else {
          fVar25 = (float)(**(code **)(lVar17 + 0x2f8))(plVar13,*(undefined8 *)(lVar17 + 0x300));
          if (lVar20 == 0) goto LAB_0072ea2c;
          uVar14 = (ulong)(uint)(fVar30 - fVar25);
          fVar33 = (fVar25 + fVar30) * 0.5;
          fVar32 = (fVar26 + fVar23) * 0.5;
          fVar23 = fVar23 - fVar26;
          fVar29 = (float)native_UnityEngine_Collider2D__get_offset_db8b24(lVar20,0);
          fVar29 = fVar33 - fVar29;
          fVar26 = fVar32 - fVar26;
          fVar26 = fVar26 * fVar26;
          if ((fVar29 * fVar29 + fVar26 < 9.9999994e-11) &&
             (uVar12 = native_UnityEngine_BoxCollider2D__get_size_db8988(lVar20,0),
             fVar30 = (fVar30 - fVar25) - extraout_s0_00,
             fVar30 * fVar30 + (fVar23 - fVar26) * (fVar23 - fVar26) < 9.9999994e-11)) {
            return uVar12;
          }
          native_UnityEngine_Collider2D__set_offset_db8bcc(fVar33,fVar32,lVar20,0);
        }
        native_UnityEngine_BoxCollider2D__set_size_db8a30(uVar14,fVar23,lVar20,0);
        if ((*(byte *)(_NGUITools_TypeInfo_12d53c8 + 0x133) >> 2 & 1) == 0) {
          return _NGUITools_TypeInfo_12d53c8;
        }
        if (*(int *)(_NGUITools_TypeInfo_12d53c8 + 0xe0) != 0) {
          return _NGUITools_TypeInfo_12d53c8;
        }
      }
      else {
        if (((*(byte *)(_NGUITools_TypeInfo_12d53c8 + 0x133) >> 2 & 1) != 0) &&
           (*(int *)(_NGUITools_TypeInfo_12d53c8 + 0xe0) == 0)) {
          native_sub_4327ec();
        }
        if ((bRam000000000133f58d & 1) == 0) {
          native_sub_43273c(&NGUITools_TypeInfo_12d53c8,lVar20,0);
          native_sub_43273c(&UnityEngine_Object_TypeInfo_12d54e0);
          native_sub_43273c(&StringLiteral_last_change_12f5390);
          bRam000000000133f58d = 1;
        }
        if (((*(byte *)(_UnityEngine_Object_TypeInfo_12d54e0 + 0x133) >> 2 & 1) != 0) &&
           (*(int *)(_UnityEngine_Object_TypeInfo_12d54e0 + 0xe0) == 0)) {
          native_sub_4327ec();
        }
        uVar12 = native_UnityEngine_Object__op_Inequality_8d76fc(lVar20,0,0);
        if ((uVar12 & 1) == 0) {
          return uVar12;
        }
        if (((*(byte *)(_UnityEngine_Object_TypeInfo_12d54e0 + 0x133) >> 2 & 1) != 0) &&
           (*(int *)(_UnityEngine_Object_TypeInfo_12d54e0 + 0xe0) == 0)) {
          native_sub_4327ec();
        }
        uVar12 = native_UnityEngine_Object__op_Inequality_8d76fc(plVar13,0,0);
        if ((uVar12 & 1) == 0) {
          return uVar12;
        }
        if (plVar13 == (long *)0x0) {
LAB_0072e730:
                    /* WARNING: Subroutine does not return */
          native_sub_432810();
        }
        lVar17 = *plVar13;
        if ((((*(float *)((long)plVar13 + 0x104) == 0.0) && (*(float *)(plVar13 + 0x21) == 0.0)) &&
            (fVar26 = *(float *)((long)plVar13 + 0x10c), fVar26 == 1.0)) &&
           (fVar26 = *(float *)(plVar13 + 0x22), fVar26 == 1.0)) {
          lVar17 = (**(code **)(lVar17 + 0x1d8))(plVar13,*(undefined8 *)(lVar17 + 0x1e0));
          if (lVar17 == 0) goto LAB_0072e730;
          if ((*(uint *)(lVar17 + 0x18) == 0) || (*(uint *)(lVar17 + 0x18) < 3)) {
LAB_0072e734:
            uVar24 = native_sub_43283c();
                    /* WARNING: Subroutine does not return */
            native_sub_4327dc(uVar24,0);
          }
          uVar24 = *(undefined8 *)(lVar17 + 0x20);
          fVar30 = *(float *)(lVar17 + 0x28);
          uVar19 = *(undefined8 *)(lVar17 + 0x38);
          fVar26 = *(float *)(lVar17 + 0x40);
          fVar23 = (float)native_UnityEngine_Mathf__Clamp01_8d9d9c(0x3f000000,0);
          if (*(uint *)(lVar17 + 0x18) < 3) goto LAB_0072e734;
          if (lVar20 == 0) goto LAB_0072e730;
          fVar25 = (float)uVar24;
          fVar29 = (float)((ulong)uVar24 >> 0x20);
          fVar26 = fVar26 - fVar30;
          uVar11 = (ulong)(uint)fVar26;
          fVar29 = fVar29 + ((float)((ulong)uVar19 >> 0x20) - fVar29) * fVar23;
          uVar28 = CONCAT44(fVar29,fVar25 + ((float)uVar19 - fVar25) * fVar23);
          uVar31 = (ulong)(uint)(fVar30 + fVar26 * fVar23);
          fVar25 = (float)((ulong)*(undefined8 *)(lVar17 + 0x38) >> 0x20) -
                   (float)((ulong)*(undefined8 *)(lVar17 + 0x20) >> 0x20);
          uVar22 = CONCAT44(fVar25,(float)*(undefined8 *)(lVar17 + 0x38) -
                                   (float)*(undefined8 *)(lVar17 + 0x20));
          fVar23 = *(float *)(lVar17 + 0x40) - *(float *)(lVar17 + 0x28);
          uVar24 = uVar28;
          uVar19 = native_UnityEngine_BoxCollider__get_center_dba95c(lVar20,0);
          uVar14 = (ulong)(uint)fVar29;
          uVar12 = uVar14;
          uVar27 = uVar31;
          uVar11 = native_UnityEngine_Vector3__op_Inequality_776c48
                             (uVar28,uVar14,uVar31,uVar19,uVar24,uVar11,0);
          if ((uVar11 & 1) == 0) {
            uVar24 = native_UnityEngine_BoxCollider__get_size_dbaab4(lVar20,0);
            uVar12 = native_UnityEngine_Vector3__op_Inequality_776c48
                               (uVar22,fVar25,fVar23,uVar24,uVar12,uVar27,0);
            if ((uVar12 & 1) == 0) {
              return uVar12;
            }
          }
          native_UnityEngine_BoxCollider__set_center_dbaa0c(uVar28,uVar14,uVar31,lVar20,0);
        }
        else {
          fVar30 = (float)(**(code **)(lVar17 + 0x2f8))(plVar13,*(undefined8 *)(lVar17 + 0x300));
          if (lVar20 == 0) goto LAB_0072e730;
          uVar22 = (ulong)(uint)((float)uVar14 - fVar30);
          fVar25 = fVar23 - fVar26;
          uVar27 = (ulong)(uint)(fVar26 + fVar23);
          uVar11 = (ulong)(uint)((fVar26 + fVar23) * 0.5);
          fVar26 = (fVar30 + (float)uVar14) * 0.5;
          uVar24 = native_UnityEngine_BoxCollider__get_center_dba95c(lVar20,0);
          uVar19 = 0;
          fVar23 = 0.0;
          uVar12 = uVar11;
          uVar14 = native_UnityEngine_Vector3__op_Inequality_776c48
                             (fVar26,uVar11,0,uVar24,uVar27,uVar14,0);
          if ((uVar14 & 1) == 0) {
            uVar24 = native_UnityEngine_BoxCollider__get_size_dbaab4(lVar20,0);
            uVar14 = native_UnityEngine_Vector3__op_Inequality_776c48
                               (uVar22,fVar25,0,uVar24,uVar12,uVar19,0);
            if ((uVar14 & 1) == 0) {
              return uVar14;
            }
          }
          native_UnityEngine_BoxCollider__set_center_dbaa0c(fVar26,uVar11,0,lVar20,0);
        }
        native_UnityEngine_BoxCollider__set_size_dbab64(uVar22,fVar25,fVar23,lVar20,0);
        if ((*(byte *)(_NGUITools_TypeInfo_12d53c8 + 0x133) >> 2 & 1) == 0) {
          return _NGUITools_TypeInfo_12d53c8;
        }
        if (*(int *)(_NGUITools_TypeInfo_12d53c8 + 0xe0) != 0) {
          return _NGUITools_TypeInfo_12d53c8;
        }
      }
      uVar14 = _NGUITools_TypeInfo_12d53c8;
      if ((*(byte *)(_NGUITools_TypeInfo_12d53c8 + 0x133) >> 2 & 1) == 0) {
        return _NGUITools_TypeInfo_12d53c8;
      }
      piVar1 = (int *)(_NGUITools_TypeInfo_12d53c8 + 0xe0);
      while (*piVar1 == 1) {
        cVar4 = '\x01';
        bVar5 = (bool)ExclusiveMonitorPass(piVar1,0x10);
        if (bVar5) {
          *piVar1 = 1;
          cVar4 = ExclusiveMonitorsStatus();
        }
        if (cVar4 == '\0') {
          DataMemoryBarrier(2,3);
          return uVar14;
        }
      }
      ClearExclusiveLocal();
      DataMemoryBarrier(2,3);
      uVar12 = native_sub_432c38();
      if (uVar12 == uRam00000000013451d0) {
        iRam00000000013451d8 = iRam00000000013451d8 + 1;
      }
      else {
        iVar7 = 0;
        do {
          iVar8 = iRam0000000001345190;
          if (iRam0000000001345190 == iVar7) {
            cVar4 = '\x01';
            bVar5 = (bool)ExclusiveMonitorPass(0x1345190,0x10);
            if (bVar5) {
              cVar4 = ExclusiveMonitorsStatus();
              iRam0000000001345190 = iVar7 + 1;
            }
            if (cVar4 != '\0') goto code_r0x003cc248;
            bVar5 = true;
          }
          else {
            ClearExclusiveLocal();
code_r0x003cc248:
            bVar5 = false;
          }
          uVar22 = uVar12;
        } while ((iVar8 != 2) && (iVar7 = iVar8, !bVar5));
        while (iVar8 != 0) {
          uVar22 = native_sub_432bb4(0x1345190,2,0xffffffff);
          do {
            iVar8 = iRam0000000001345190;
            cVar4 = '\x01';
            bVar5 = (bool)ExclusiveMonitorPass(0x1345190,0x10);
            if (bVar5) {
              iRam0000000001345190 = 2;
              cVar4 = ExclusiveMonitorsStatus();
            }
          } while (cVar4 != '\0');
        }
        iRam00000000013451d8 = 1;
        uRam00000000013451d0 = uVar12;
        uVar12 = uVar22;
      }
      while (*piVar1 == 1) {
        cVar4 = '\x01';
        bVar5 = (bool)ExclusiveMonitorPass(piVar1,0x10);
        if (bVar5) {
          *piVar1 = 1;
          cVar4 = ExclusiveMonitorsStatus();
        }
        if (cVar4 == '\0') {
          DataMemoryBarrier(2,3);
          if (iRam00000000013451d8 < 1) {
            return uVar12;
          }
          if (iRam00000000013451d8 + -1 != 0) {
            iRam00000000013451d8 = iRam00000000013451d8 + -1;
            return uVar12;
          }
          uRam00000000013451d0 = 0;
          iRam00000000013451d8 = 0;
          do {
            iVar7 = iRam0000000001345190;
            cVar4 = '\x01';
            bVar5 = (bool)ExclusiveMonitorPass(0x1345190,0x10);
            if (bVar5) {
              iRam0000000001345190 = 0;
              cVar4 = ExclusiveMonitorsStatus();
            }
          } while (cVar4 != '\0');
          if (iVar7 != 2) {
            uRam00000000013451d0 = 0;
            iRam00000000013451d8 = 0;
            return uVar12;
          }
          uVar14 = (*(code *)&DAT_0155b260)(0x62,0x1345190,0x81,1,0,0,0);
          return uVar14;
        }
      }
      ClearExclusiveLocal();
      DataMemoryBarrier(2,3);
      piVar2 = (int *)(uVar14 + 0xdc);
      do {
        if (*piVar2 != 1) {
          ClearExclusiveLocal();
          DataMemoryBarrier(2,3);
          puVar3 = (ulong *)(uVar14 + 0xe8);
          uVar12 = native_sub_3aad3c();
          do {
            cVar4 = '\x01';
            bVar5 = (bool)ExclusiveMonitorPass(puVar3,0x10);
            if (bVar5) {
              *puVar3 = uVar12;
              cVar4 = ExclusiveMonitorsStatus();
            }
          } while (cVar4 != '\0');
          DataMemoryBarrier(2,3);
          do {
            cVar4 = '\x01';
            bVar5 = (bool)ExclusiveMonitorPass(piVar2,0x10);
            if (bVar5) {
              *piVar2 = 1;
              cVar4 = ExclusiveMonitorsStatus();
            }
          } while (cVar4 != '\0');
          DataMemoryBarrier(2,3);
          iVar7 = iRam00000000013451d8 + -1;
          if ((0 < iRam00000000013451d8) && (iRam00000000013451d8 = iVar7, iVar7 == 0)) {
            uRam00000000013451d0 = 0;
            iRam00000000013451d8 = 0;
            do {
              iVar7 = iRam0000000001345190;
              cVar4 = '\x01';
              bVar5 = (bool)ExclusiveMonitorPass(0x1345190,0x10);
              if (bVar5) {
                iRam0000000001345190 = 0;
                cVar4 = ExclusiveMonitorsStatus();
              }
            } while (cVar4 != '\0');
            if (iVar7 == 2) {
              uVar12 = native_sub_432c0c(0x1345190,1,0);
            }
          }
          if ((*(byte *)(uVar14 + 0x133) >> 2 & 1) != 0) {
            lVar20 = native_sub_3c573c(uVar14,&UNK_00edd9af,0xffffffff,0x800);
            uVar12 = 0;
            if (lVar20 != 0) {
              uVar12 = native_sub_3d704c(lVar20,0,0,&stack0xffffffffffffffb8);
            }
          }
          do {
            cVar4 = '\x01';
            bVar5 = (bool)ExclusiveMonitorPass(piVar1,0x10);
            if (bVar5) {
              *piVar1 = 1;
              cVar4 = ExclusiveMonitorsStatus();
            }
          } while (cVar4 != '\0');
          DataMemoryBarrier(2,3);
          do {
            cVar4 = '\x01';
            bVar5 = (bool)ExclusiveMonitorPass(puVar3,0x10);
            if (bVar5) {
              *puVar3 = 0;
              cVar4 = ExclusiveMonitorsStatus();
            }
          } while (cVar4 != '\0');
          DataMemoryBarrier(2,3);
          return uVar12;
        }
        cVar4 = '\x01';
        bVar5 = (bool)ExclusiveMonitorPass(piVar2,0x10);
        if (bVar5) {
          *piVar2 = 1;
          cVar4 = ExclusiveMonitorsStatus();
        }
      } while (cVar4 != '\0');
      DataMemoryBarrier(2,3);
      iVar7 = iRam00000000013451d8 + -1;
      if ((0 < iRam00000000013451d8) && (iRam00000000013451d8 = iVar7, iVar7 == 0)) {
        uRam00000000013451d0 = 0;
        iRam00000000013451d8 = 0;
        do {
          iVar7 = iRam0000000001345190;
          cVar4 = '\x01';
          bVar5 = (bool)ExclusiveMonitorPass(0x1345190,0x10);
          if (bVar5) {
            iRam0000000001345190 = 0;
            cVar4 = ExclusiveMonitorsStatus();
          }
        } while (cVar4 != '\0');
        if (iVar7 == 2) {
          native_sub_432c0c(0x1345190,1,0);
        }
      }
      uVar12 = native_sub_3aad3c();
      puVar3 = (ulong *)(uVar14 + 0xe8);
      do {
        uVar14 = *puVar3;
        if (uVar14 != uVar12) {
          ClearExclusiveLocal();
          break;
        }
        cVar4 = '\x01';
        bVar5 = (bool)ExclusiveMonitorPass(puVar3,0x10);
        if (bVar5) {
          *puVar3 = uVar12;
          cVar4 = ExclusiveMonitorsStatus();
        }
      } while (cVar4 != '\0');
      DataMemoryBarrier(2,3);
      if (uVar14 != uVar12) {
        do {
          iVar7 = *piVar1;
          if (iVar7 != 1) {
            ClearExclusiveLocal();
            break;
          }
          cVar4 = '\x01';
          bVar5 = (bool)ExclusiveMonitorPass(piVar1,0x10);
          if (bVar5) {
            *piVar1 = 1;
            cVar4 = ExclusiveMonitorsStatus();
          }
        } while (cVar4 != '\0');
        DataMemoryBarrier(2,3);
        while (iVar7 == 0) {
          uVar12 = native_sub_3a30dc(1,0);
          do {
            iVar7 = *piVar1;
            if (iVar7 != 1) {
              ClearExclusiveLocal();
              break;
            }
            cVar4 = '\x01';
            bVar5 = (bool)ExclusiveMonitorPass(piVar1,0x10);
            if (bVar5) {
              *piVar1 = 1;
              cVar4 = ExclusiveMonitorsStatus();
            }
          } while (cVar4 != '\0');
          DataMemoryBarrier(2,3);
        }
      }
      return uVar12;
    }
  }
  return uVar12;
}



/* UITextList$$OnDrag @ 0x944128
 * void UITextList__OnDrag (UITextList_o* __this, UnityEngine_Vector2_o delta, const MethodInfo* method); */

/* WARNING: Removing unreachable block (ram,0x00432c1c) */
/* WARNING: Removing unreachable block (ram,0x003cc494) */
/* WARNING: Removing unreachable block (ram,0x003cc4b8) */
/* WARNING: Removing unreachable block (ram,0x003cc4d4) */
/* WARNING: Removing unreachable block (ram,0x003cc4dc) */
/* WARNING: Removing unreachable block (ram,0x003cc4f0) */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* UITextList$$OnDrag
   void UITextList__OnDrag (UITextList_o* __this, UnityEngine_Vector2_o delta, const MethodInfo*
   method); */

ulong native_UITextList__OnDrag_944128
                (undefined1 param_1 [16],float param_2,undefined1 param_3 [16],undefined8 param_4,
                long param_5)

{
  int *piVar1;
  int *piVar2;
  ulong *puVar3;
  char cVar4;
  bool bVar5;
  uint uVar6;
  int iVar7;
  int iVar8;
  uint uVar9;
  int iVar10;
  ulong uVar11;
  ulong uVar12;
  long *plVar13;
  ulong uVar14;
  long *plVar15;
  undefined8 *puVar16;
  long lVar17;
  int iVar18;
  undefined8 uVar19;
  long lVar20;
  uint uVar21;
  ulong uVar22;
  float extraout_s0;
  float extraout_s0_00;
  float fVar23;
  float fVar25;
  undefined8 uVar24;
  float fVar26;
  float fVar29;
  ulong uVar27;
  undefined8 uVar28;
  float fVar30;
  ulong uVar31;
  float fVar32;
  float fVar33;
  
  uVar14 = native_UITextList__get_scrollHeight_943a88();
  if ((int)uVar14 == 0) {
    return uVar14;
  }
  fVar23 = (float)native_UITextList__get_lineHeight_9439e4(param_5);
  fVar26 = *(float *)(param_5 + 0x38);
  fVar30 = (float)(int)uVar14;
  uVar14 = (ulong)(uint)fVar30;
  fVar23 = fVar26 + (param_2 / fVar23) / fVar30;
  if ((bRam0000000001341416 & 1) == 0) {
    native_sub_43273c(&UnityEngine_Object_TypeInfo_12d54e0);
    bRam0000000001341416 = 1;
  }
  uVar24 = native_UnityEngine_Mathf__Clamp01_8d9d9c(fVar23,0);
  uVar12 = native_UITextList__get_isValid_9435ac(param_5);
  if (((uVar12 & 1) == 0) || (*(float *)(param_5 + 0x38) == (float)uVar24)) {
    return uVar12;
  }
  uVar19 = *(undefined8 *)(param_5 + 0x20);
  if (((*(byte *)(_UnityEngine_Object_TypeInfo_12d54e0 + 0x133) >> 2 & 1) != 0) &&
     (*(int *)(_UnityEngine_Object_TypeInfo_12d54e0 + 0xe0) == 0)) {
    native_sub_4327ec();
  }
  uVar12 = native_UnityEngine_Object__op_Inequality_8d76fc(uVar19,0,0);
  if ((uVar12 & 1) != 0) {
    plVar13 = *(long **)(param_5 + 0x20);
    if (plVar13 != (long *)0x0) {
      if ((bRam00000000013426fb & 1) == 0) {
        native_sub_43273c(&EventDelegate_TypeInfo_12d4590);
        native_sub_43273c(&NGUITools_TypeInfo_12d53c8);
        native_sub_43273c(&UIProgressBar_TypeInfo_12d6498);
        bRam00000000013426fb = 1;
      }
      fVar23 = (float)native_UnityEngine_Mathf__Clamp01_8d9d9c(uVar24,0);
      if (*(float *)(plVar13 + 7) == fVar23) {
        uVar14 = 0;
      }
      else {
        fVar26 = (float)native_UIProgressBar__get_value_c2b6f0(plVar13);
        *(float *)(plVar13 + 7) = fVar23;
        if (((char)plVar13[8] != '\0') &&
           (fVar23 = (float)native_UIProgressBar__get_value_c2b6f0(plVar13), fVar26 != fVar23)) {
          if (((*(byte *)(_NGUITools_TypeInfo_12d53c8 + 0x133) >> 2 & 1) != 0) &&
             (*(int *)(_NGUITools_TypeInfo_12d53c8 + 0xe0) == 0)) {
            native_sub_4327ec();
          }
          uVar14 = native_NGUITools__GetActive_72d02c(plVar13,0);
          if ((uVar14 & 1) != 0) {
            lVar20 = plVar13[0xd];
            if (((*(byte *)(_EventDelegate_TypeInfo_12d4590 + 0x133) >> 2 & 1) != 0) &&
               (*(int *)(_EventDelegate_TypeInfo_12d4590 + 0xe0) == 0)) {
              native_sub_4327ec();
            }
            uVar14 = native_EventDelegate__IsValid_deef08(lVar20,0);
            if ((uVar14 & 1) != 0) {
              plVar15 = *(long **)(_UIProgressBar_TypeInfo_12d6498 + 0xb8);
              *plVar15 = (long)plVar13;
              native_sub_4326e0(plVar15,plVar13);
              lVar20 = plVar13[0xd];
              if (((*(byte *)(_EventDelegate_TypeInfo_12d4590 + 0x133) >> 2 & 1) != 0) &&
                 (*(int *)(_EventDelegate_TypeInfo_12d4590 + 0xe0) == 0)) {
                native_sub_4327ec();
              }
              native_EventDelegate__Execute_deecbc(lVar20,0);
              puVar16 = *(undefined8 **)(_UIProgressBar_TypeInfo_12d6498 + 0xb8);
              *puVar16 = 0;
              native_sub_4326e0(puVar16,0);
            }
          }
          (**(code **)(*plVar13 + 0x1a8))(plVar13,*(undefined8 *)(*plVar13 + 0x1b0));
        }
        uVar14 = 1;
      }
      return uVar14;
    }
                    /* WARNING: Subroutine does not return */
    native_sub_432810();
  }
  *(float *)(param_5 + 0x38) = (float)uVar24;
  if ((bRam000000000134141d & 1) == 0) {
    native_sub_43273c(&System_Text_StringBuilder_TypeInfo_12d5f30);
    native_sub_43273c(&StringLiteral___12eab80);
    native_sub_43273c(&StringLiteral__12eaac0);
    bRam000000000134141d = 1;
  }
  uVar12 = native_UITextList__get_isValid_9435ac(param_5);
  fVar23 = (float)param_4;
  if ((uVar12 & 1) == 0) {
    return uVar12;
  }
  plVar13 = *(long **)(param_5 + 0x18);
  if (plVar13 == (long *)0x0) goto LAB_009439d4;
  lVar20 = _StringLiteral__12eaac0;
  if (*(int *)(param_5 + 0x3c) != 0) {
    lVar20 = plVar13[0x15];
    fVar23 = (float)native_UITextList__get_lineHeight_9439e4(param_5);
    iVar7 = native_UnityEngine_Mathf__FloorToInt_8e506c((float)(int)lVar20 / fVar23,0);
    iVar8 = native_UnityEngine_Mathf__Max_8e4cd0(0,*(int *)(param_5 + 0x3c) - iVar7,0);
    uVar12 = (ulong)(uint)(float)iVar8;
    uVar9 = native_UnityEngine_Mathf__RoundToInt_8e50f0(*(float *)(param_5 + 0x38) * (float)iVar8,0)
    ;
    plVar15 = (long *)native_sub_432808(_System_Text_StringBuilder_TypeInfo_12d5f30);
    native_System_Text_StringBuilder___ctor_a4881c(plVar15,0);
    lVar20 = native_UITextList__get_paragraphs_943424(param_5);
    fVar26 = (float)uVar12;
    fVar23 = (float)param_4;
    if (lVar20 == 0) {
LAB_009439d4:
                    /* WARNING: Subroutine does not return */
      native_sub_432810();
    }
    iVar8 = *(int *)(lVar20 + 0x18);
    if ((0 < iVar8) && (0 < iVar7)) {
      uVar21 = 0;
      uVar9 = uVar9 & ((int)uVar9 >> 0x1f ^ 0xffffffffU);
      do {
        if ((*(long *)(param_5 + 0x48) == 0) ||
           (lVar20 = *(long *)(*(long *)(param_5 + 0x48) + 0x10), lVar20 == 0)) goto LAB_009439d4;
        if (*(uint *)(lVar20 + 0x18) <= uVar21) {
LAB_009439d8:
          uVar24 = native_sub_43283c();
                    /* WARNING: Subroutine does not return */
          native_sub_4327dc(uVar24,0);
        }
        lVar20 = *(long *)(lVar20 + (long)(int)uVar21 * 8 + 0x20);
        if ((lVar20 == 0) || (lVar17 = *(long *)(lVar20 + 0x18), lVar17 == 0)) goto LAB_009439d4;
        iVar18 = (int)*(undefined8 *)(lVar17 + 0x18);
        if (0 < iVar18) {
          uVar22 = 0;
          while( true ) {
            if (*(uint *)(lVar17 + 0x18) <= uVar22) goto LAB_009439d8;
            uVar6 = uVar9 - 1;
            if ((int)uVar9 < 1) {
              if (plVar15 == (long *)0x0) goto LAB_009439d4;
              uVar24 = *(undefined8 *)(lVar17 + uVar22 * 8 + 0x20);
              iVar10 = native_System_Text_StringBuilder__get_Length_a49204(plVar15,0);
              if (0 < iVar10) {
                native_System_Text_StringBuilder__Append_a49d68(plVar15,_StringLiteral___12eab80,0);
              }
              native_System_Text_StringBuilder__Append_a49d68(plVar15,uVar24,0);
              iVar7 = iVar7 + -1;
              uVar6 = uVar9;
            }
            uVar9 = uVar6;
            uVar22 = uVar22 + 1;
            if (((long)iVar18 <= (long)uVar22) || (iVar7 < 1)) break;
            lVar17 = *(long *)(lVar20 + 0x18);
            if (lVar17 == 0) goto LAB_009439d4;
          }
        }
        fVar26 = (float)uVar12;
        fVar23 = (float)param_4;
        uVar21 = uVar21 + 1;
      } while (((int)uVar21 < iVar8) && (0 < iVar7));
    }
    if (plVar15 == (long *)0x0) goto LAB_009439d4;
    plVar13 = *(long **)(param_5 + 0x18);
    lVar20 = (**(code **)(*plVar15 + 0x168))(plVar15,*(undefined8 *)(*plVar15 + 0x170));
    if (plVar13 == (long *)0x0) goto LAB_009439d4;
  }
  if ((bRam0000000001342005 & 1) == 0) {
    native_sub_43273c(&StringLiteral__12eaac0,lVar20,0);
    bRam0000000001342005 = 1;
  }
  uVar12 = native_System_String__op_Equality_afc18c(plVar13[0x35],lVar20,0);
  if ((uVar12 & 1) == 0) {
    uVar12 = native_System_String__IsNullOrEmpty_b09430(lVar20,0);
    lVar17 = plVar13[0x35];
    if ((uVar12 & 1) == 0) {
      uVar12 = native_System_String__op_Inequality_afbbb4(lVar17,lVar20,0);
      if ((uVar12 & 1) == 0) {
        return uVar12;
      }
      plVar13[0x35] = lVar20;
    }
    else {
      uVar12 = native_System_String__IsNullOrEmpty_b09430(lVar17,0);
      lVar20 = _StringLiteral__12eaac0;
      if ((uVar12 & 1) != 0) {
        return uVar12;
      }
      plVar13[0x35] = _StringLiteral__12eaac0;
    }
    native_sub_4326e0(plVar13 + 0x35,lVar20);
    (**(code **)(*plVar13 + 0x378))(plVar13,*(undefined8 *)(*plVar13 + 0x380));
    uVar12 = native_UILabel__ProcessAndRequest_ae7fdc(plVar13);
    if ((char)plVar13[0x1b] != '\0') {
      if ((bRam000000000134145d & 1) == 0) {
        native_sub_43273c(&Method_UnityEngine_Component_GetComponent_BoxCollider2D____12e2998,0);
        native_sub_43273c(&Method_UnityEngine_Component_GetComponent_BoxCollider____12e2990);
        native_sub_43273c(&NGUITools_TypeInfo_12d53c8);
        native_sub_43273c(&UnityEngine_Object_TypeInfo_12d54e0);
        bRam000000000134145d = 1;
      }
      lVar20 = native_UnityEngine_Component__GetComponent_ActiveAnimation__49daec
                         (plVar13,_Method_UnityEngine_Component_GetComponent_BoxCollider____12e2990)
      ;
      if (((*(byte *)(_UnityEngine_Object_TypeInfo_12d54e0 + 0x133) >> 2 & 1) != 0) &&
         (*(int *)(_UnityEngine_Object_TypeInfo_12d54e0 + 0xe0) == 0)) {
        native_sub_4327ec(_UnityEngine_Object_TypeInfo_12d54e0);
      }
      uVar12 = native_UnityEngine_Object__op_Inequality_8d76fc(lVar20,0,0);
      if ((uVar12 & 1) == 0) {
        lVar20 = native_UnityEngine_Component__GetComponent_ActiveAnimation__49daec
                           (plVar13,
                            _Method_UnityEngine_Component_GetComponent_BoxCollider2D____12e2998);
        fVar30 = (float)uVar14;
        if (((*(byte *)(_NGUITools_TypeInfo_12d53c8 + 0x133) >> 2 & 1) != 0) &&
           (*(int *)(_NGUITools_TypeInfo_12d53c8 + 0xe0) == 0)) {
          native_sub_4327ec(_NGUITools_TypeInfo_12d53c8);
        }
        if ((bRam000000000133f58e & 1) == 0) {
          native_sub_43273c(&NGUITools_TypeInfo_12d53c8,lVar20,0);
          native_sub_43273c(&UnityEngine_Object_TypeInfo_12d54e0);
          native_sub_43273c(&StringLiteral_last_change_12f5390);
          bRam000000000133f58e = 1;
        }
        if (((*(byte *)(_UnityEngine_Object_TypeInfo_12d54e0 + 0x133) >> 2 & 1) != 0) &&
           (*(int *)(_UnityEngine_Object_TypeInfo_12d54e0 + 0xe0) == 0)) {
          native_sub_4327ec();
        }
        uVar14 = native_UnityEngine_Object__op_Inequality_8d76fc(lVar20,0,0);
        if ((uVar14 & 1) == 0) {
          return uVar14;
        }
        if (((*(byte *)(_UnityEngine_Object_TypeInfo_12d54e0 + 0x133) >> 2 & 1) != 0) &&
           (*(int *)(_UnityEngine_Object_TypeInfo_12d54e0 + 0xe0) == 0)) {
          native_sub_4327ec();
        }
        uVar14 = native_UnityEngine_Object__op_Inequality_8d76fc(plVar13,0,0);
        if ((uVar14 & 1) == 0) {
          return uVar14;
        }
        if (plVar13 == (long *)0x0) {
LAB_0072ea2c:
                    /* WARNING: Subroutine does not return */
          native_sub_432810();
        }
        lVar17 = *plVar13;
        if ((((*(float *)((long)plVar13 + 0x104) == 0.0) && (*(float *)(plVar13 + 0x21) == 0.0)) &&
            (fVar26 = *(float *)((long)plVar13 + 0x10c), fVar26 == 1.0)) &&
           (fVar26 = *(float *)(plVar13 + 0x22), fVar26 == 1.0)) {
          lVar17 = (**(code **)(lVar17 + 0x1d8))(plVar13,*(undefined8 *)(lVar17 + 0x1e0));
          if (lVar17 == 0) goto LAB_0072ea2c;
          if ((*(uint *)(lVar17 + 0x18) == 0) || (*(uint *)(lVar17 + 0x18) < 3)) {
LAB_0072ea30:
            uVar24 = native_sub_43283c();
                    /* WARNING: Subroutine does not return */
            native_sub_4327dc(uVar24,0);
          }
          uVar24 = *(undefined8 *)(lVar17 + 0x20);
          uVar19 = *(undefined8 *)(lVar17 + 0x38);
          fVar23 = (float)native_UnityEngine_Mathf__Clamp01_8d9d9c(0x3f000000,0);
          if (*(uint *)(lVar17 + 0x18) < 3) goto LAB_0072ea30;
          if (lVar20 == 0) goto LAB_0072ea2c;
          uVar28 = *(undefined8 *)(lVar17 + 0x38);
          fVar30 = (float)uVar24;
          fVar29 = (float)((ulong)uVar24 >> 0x20);
          fVar30 = fVar30 + ((float)uVar19 - fVar30) * fVar23;
          fVar29 = fVar29 + ((float)((ulong)uVar19 >> 0x20) - fVar29) * fVar23;
          uVar24 = CONCAT44(fVar29,fVar30);
          fVar25 = (float)uVar28 - (float)*(undefined8 *)(lVar17 + 0x20);
          fVar23 = (float)((ulong)uVar28 >> 0x20) -
                   (float)((ulong)*(undefined8 *)(lVar17 + 0x20) >> 0x20);
          uVar14 = CONCAT44(fVar23,fVar25);
          fVar26 = (float)native_UnityEngine_Collider2D__get_offset_db8b24(lVar20,0);
          fVar30 = fVar30 - fVar26;
          fVar26 = fVar29 - (float)uVar28;
          if ((fVar30 * fVar30 + fVar26 * fVar26 < 9.9999994e-11) &&
             (uVar19 = uVar24, uVar12 = native_UnityEngine_BoxCollider2D__get_size_db8988(lVar20,0),
             fVar25 = fVar25 - extraout_s0, fVar26 = fVar23 - (float)uVar19,
             fVar25 * fVar25 + fVar26 * fVar26 < 9.9999994e-11)) {
            return uVar12;
          }
          native_UnityEngine_Collider2D__set_offset_db8bcc(uVar24,fVar29,lVar20,0);
        }
        else {
          fVar25 = (float)(**(code **)(lVar17 + 0x2f8))(plVar13,*(undefined8 *)(lVar17 + 0x300));
          if (lVar20 == 0) goto LAB_0072ea2c;
          uVar14 = (ulong)(uint)(fVar30 - fVar25);
          fVar33 = (fVar25 + fVar30) * 0.5;
          fVar32 = (fVar26 + fVar23) * 0.5;
          fVar23 = fVar23 - fVar26;
          fVar29 = (float)native_UnityEngine_Collider2D__get_offset_db8b24(lVar20,0);
          fVar29 = fVar33 - fVar29;
          fVar26 = fVar32 - fVar26;
          fVar26 = fVar26 * fVar26;
          if ((fVar29 * fVar29 + fVar26 < 9.9999994e-11) &&
             (uVar12 = native_UnityEngine_BoxCollider2D__get_size_db8988(lVar20,0),
             fVar30 = (fVar30 - fVar25) - extraout_s0_00,
             fVar30 * fVar30 + (fVar23 - fVar26) * (fVar23 - fVar26) < 9.9999994e-11)) {
            return uVar12;
          }
          native_UnityEngine_Collider2D__set_offset_db8bcc(fVar33,fVar32,lVar20,0);
        }
        native_UnityEngine_BoxCollider2D__set_size_db8a30(uVar14,fVar23,lVar20,0);
        if ((*(byte *)(_NGUITools_TypeInfo_12d53c8 + 0x133) >> 2 & 1) == 0) {
          return _NGUITools_TypeInfo_12d53c8;
        }
        if (*(int *)(_NGUITools_TypeInfo_12d53c8 + 0xe0) != 0) {
          return _NGUITools_TypeInfo_12d53c8;
        }
      }
      else {
        if (((*(byte *)(_NGUITools_TypeInfo_12d53c8 + 0x133) >> 2 & 1) != 0) &&
           (*(int *)(_NGUITools_TypeInfo_12d53c8 + 0xe0) == 0)) {
          native_sub_4327ec();
        }
        if ((bRam000000000133f58d & 1) == 0) {
          native_sub_43273c(&NGUITools_TypeInfo_12d53c8,lVar20,0);
          native_sub_43273c(&UnityEngine_Object_TypeInfo_12d54e0);
          native_sub_43273c(&StringLiteral_last_change_12f5390);
          bRam000000000133f58d = 1;
        }
        if (((*(byte *)(_UnityEngine_Object_TypeInfo_12d54e0 + 0x133) >> 2 & 1) != 0) &&
           (*(int *)(_UnityEngine_Object_TypeInfo_12d54e0 + 0xe0) == 0)) {
          native_sub_4327ec();
        }
        uVar12 = native_UnityEngine_Object__op_Inequality_8d76fc(lVar20,0,0);
        if ((uVar12 & 1) == 0) {
          return uVar12;
        }
        if (((*(byte *)(_UnityEngine_Object_TypeInfo_12d54e0 + 0x133) >> 2 & 1) != 0) &&
           (*(int *)(_UnityEngine_Object_TypeInfo_12d54e0 + 0xe0) == 0)) {
          native_sub_4327ec();
        }
        uVar12 = native_UnityEngine_Object__op_Inequality_8d76fc(plVar13,0,0);
        if ((uVar12 & 1) == 0) {
          return uVar12;
        }
        if (plVar13 == (long *)0x0) {
LAB_0072e730:
                    /* WARNING: Subroutine does not return */
          native_sub_432810();
        }
        lVar17 = *plVar13;
        if ((((*(float *)((long)plVar13 + 0x104) == 0.0) && (*(float *)(plVar13 + 0x21) == 0.0)) &&
            (fVar26 = *(float *)((long)plVar13 + 0x10c), fVar26 == 1.0)) &&
           (fVar26 = *(float *)(plVar13 + 0x22), fVar26 == 1.0)) {
          lVar17 = (**(code **)(lVar17 + 0x1d8))(plVar13,*(undefined8 *)(lVar17 + 0x1e0));
          if (lVar17 == 0) goto LAB_0072e730;
          if ((*(uint *)(lVar17 + 0x18) == 0) || (*(uint *)(lVar17 + 0x18) < 3)) {
LAB_0072e734:
            uVar24 = native_sub_43283c();
                    /* WARNING: Subroutine does not return */
            native_sub_4327dc(uVar24,0);
          }
          uVar24 = *(undefined8 *)(lVar17 + 0x20);
          fVar30 = *(float *)(lVar17 + 0x28);
          uVar19 = *(undefined8 *)(lVar17 + 0x38);
          fVar26 = *(float *)(lVar17 + 0x40);
          fVar23 = (float)native_UnityEngine_Mathf__Clamp01_8d9d9c(0x3f000000,0);
          if (*(uint *)(lVar17 + 0x18) < 3) goto LAB_0072e734;
          if (lVar20 == 0) goto LAB_0072e730;
          fVar25 = (float)uVar24;
          fVar29 = (float)((ulong)uVar24 >> 0x20);
          fVar26 = fVar26 - fVar30;
          uVar11 = (ulong)(uint)fVar26;
          fVar29 = fVar29 + ((float)((ulong)uVar19 >> 0x20) - fVar29) * fVar23;
          uVar28 = CONCAT44(fVar29,fVar25 + ((float)uVar19 - fVar25) * fVar23);
          uVar31 = (ulong)(uint)(fVar30 + fVar26 * fVar23);
          fVar25 = (float)((ulong)*(undefined8 *)(lVar17 + 0x38) >> 0x20) -
                   (float)((ulong)*(undefined8 *)(lVar17 + 0x20) >> 0x20);
          uVar22 = CONCAT44(fVar25,(float)*(undefined8 *)(lVar17 + 0x38) -
                                   (float)*(undefined8 *)(lVar17 + 0x20));
          fVar23 = *(float *)(lVar17 + 0x40) - *(float *)(lVar17 + 0x28);
          uVar24 = uVar28;
          uVar19 = native_UnityEngine_BoxCollider__get_center_dba95c(lVar20,0);
          uVar14 = (ulong)(uint)fVar29;
          uVar12 = uVar14;
          uVar27 = uVar31;
          uVar11 = native_UnityEngine_Vector3__op_Inequality_776c48
                             (uVar28,uVar14,uVar31,uVar19,uVar24,uVar11,0);
          if ((uVar11 & 1) == 0) {
            uVar24 = native_UnityEngine_BoxCollider__get_size_dbaab4(lVar20,0);
            uVar12 = native_UnityEngine_Vector3__op_Inequality_776c48
                               (uVar22,fVar25,fVar23,uVar24,uVar12,uVar27,0);
            if ((uVar12 & 1) == 0) {
              return uVar12;
            }
          }
          native_UnityEngine_BoxCollider__set_center_dbaa0c(uVar28,uVar14,uVar31,lVar20,0);
        }
        else {
          fVar30 = (float)(**(code **)(lVar17 + 0x2f8))(plVar13,*(undefined8 *)(lVar17 + 0x300));
          if (lVar20 == 0) goto LAB_0072e730;
          uVar22 = (ulong)(uint)((float)uVar14 - fVar30);
          fVar25 = fVar23 - fVar26;
          uVar27 = (ulong)(uint)(fVar26 + fVar23);
          uVar11 = (ulong)(uint)((fVar26 + fVar23) * 0.5);
          fVar26 = (fVar30 + (float)uVar14) * 0.5;
          uVar24 = native_UnityEngine_BoxCollider__get_center_dba95c(lVar20,0);
          uVar19 = 0;
          fVar23 = 0.0;
          uVar12 = uVar11;
          uVar14 = native_UnityEngine_Vector3__op_Inequality_776c48
                             (fVar26,uVar11,0,uVar24,uVar27,uVar14,0);
          if ((uVar14 & 1) == 0) {
            uVar24 = native_UnityEngine_BoxCollider__get_size_dbaab4(lVar20,0);
            uVar14 = native_UnityEngine_Vector3__op_Inequality_776c48
                               (uVar22,fVar25,0,uVar24,uVar12,uVar19,0);
            if ((uVar14 & 1) == 0) {
              return uVar14;
            }
          }
          native_UnityEngine_BoxCollider__set_center_dbaa0c(fVar26,uVar11,0,lVar20,0);
        }
        native_UnityEngine_BoxCollider__set_size_dbab64(uVar22,fVar25,fVar23,lVar20,0);
        if ((*(byte *)(_NGUITools_TypeInfo_12d53c8 + 0x133) >> 2 & 1) == 0) {
          return _NGUITools_TypeInfo_12d53c8;
        }
        if (*(int *)(_NGUITools_TypeInfo_12d53c8 + 0xe0) != 0) {
          return _NGUITools_TypeInfo_12d53c8;
        }
      }
      uVar14 = _NGUITools_TypeInfo_12d53c8;
      if ((*(byte *)(_NGUITools_TypeInfo_12d53c8 + 0x133) >> 2 & 1) == 0) {
        return _NGUITools_TypeInfo_12d53c8;
      }
      piVar1 = (int *)(_NGUITools_TypeInfo_12d53c8 + 0xe0);
      while (*piVar1 == 1) {
        cVar4 = '\x01';
        bVar5 = (bool)ExclusiveMonitorPass(piVar1,0x10);
        if (bVar5) {
          *piVar1 = 1;
          cVar4 = ExclusiveMonitorsStatus();
        }
        if (cVar4 == '\0') {
          DataMemoryBarrier(2,3);
          return uVar14;
        }
      }
      ClearExclusiveLocal();
      DataMemoryBarrier(2,3);
      uVar12 = native_sub_432c38();
      if (uVar12 == uRam00000000013451d0) {
        iRam00000000013451d8 = iRam00000000013451d8 + 1;
      }
      else {
        iVar7 = 0;
        do {
          iVar8 = iRam0000000001345190;
          if (iRam0000000001345190 == iVar7) {
            cVar4 = '\x01';
            bVar5 = (bool)ExclusiveMonitorPass(0x1345190,0x10);
            if (bVar5) {
              cVar4 = ExclusiveMonitorsStatus();
              iRam0000000001345190 = iVar7 + 1;
            }
            if (cVar4 != '\0') goto code_r0x003cc248;
            bVar5 = true;
          }
          else {
            ClearExclusiveLocal();
code_r0x003cc248:
            bVar5 = false;
          }
          uVar22 = uVar12;
        } while ((iVar8 != 2) && (iVar7 = iVar8, !bVar5));
        while (iVar8 != 0) {
          uVar22 = native_sub_432bb4(0x1345190,2,0xffffffff);
          do {
            iVar8 = iRam0000000001345190;
            cVar4 = '\x01';
            bVar5 = (bool)ExclusiveMonitorPass(0x1345190,0x10);
            if (bVar5) {
              iRam0000000001345190 = 2;
              cVar4 = ExclusiveMonitorsStatus();
            }
          } while (cVar4 != '\0');
        }
        iRam00000000013451d8 = 1;
        uRam00000000013451d0 = uVar12;
        uVar12 = uVar22;
      }
      while (*piVar1 == 1) {
        cVar4 = '\x01';
        bVar5 = (bool)ExclusiveMonitorPass(piVar1,0x10);
        if (bVar5) {
          *piVar1 = 1;
          cVar4 = ExclusiveMonitorsStatus();
        }
        if (cVar4 == '\0') {
          DataMemoryBarrier(2,3);
          if (iRam00000000013451d8 < 1) {
            return uVar12;
          }
          if (iRam00000000013451d8 + -1 != 0) {
            iRam00000000013451d8 = iRam00000000013451d8 + -1;
            return uVar12;
          }
          uRam00000000013451d0 = 0;
          iRam00000000013451d8 = 0;
          do {
            iVar7 = iRam0000000001345190;
            cVar4 = '\x01';
            bVar5 = (bool)ExclusiveMonitorPass(0x1345190,0x10);
            if (bVar5) {
              iRam0000000001345190 = 0;
              cVar4 = ExclusiveMonitorsStatus();
            }
          } while (cVar4 != '\0');
          if (iVar7 != 2) {
            uRam00000000013451d0 = 0;
            iRam00000000013451d8 = 0;
            return uVar12;
          }
          uVar14 = (*(code *)&DAT_0155b260)(0x62,0x1345190,0x81,1,0,0,0);
          return uVar14;
        }
      }
      ClearExclusiveLocal();
      DataMemoryBarrier(2,3);
      piVar2 = (int *)(uVar14 + 0xdc);
      do {
        if (*piVar2 != 1) {
          ClearExclusiveLocal();
          DataMemoryBarrier(2,3);
          puVar3 = (ulong *)(uVar14 + 0xe8);
          uVar12 = native_sub_3aad3c();
          do {
            cVar4 = '\x01';
            bVar5 = (bool)ExclusiveMonitorPass(puVar3,0x10);
            if (bVar5) {
              *puVar3 = uVar12;
              cVar4 = ExclusiveMonitorsStatus();
            }
          } while (cVar4 != '\0');
          DataMemoryBarrier(2,3);
          do {
            cVar4 = '\x01';
            bVar5 = (bool)ExclusiveMonitorPass(piVar2,0x10);
            if (bVar5) {
              *piVar2 = 1;
              cVar4 = ExclusiveMonitorsStatus();
            }
          } while (cVar4 != '\0');
          DataMemoryBarrier(2,3);
          iVar7 = iRam00000000013451d8 + -1;
          if ((0 < iRam00000000013451d8) && (iRam00000000013451d8 = iVar7, iVar7 == 0)) {
            uRam00000000013451d0 = 0;
            iRam00000000013451d8 = 0;
            do {
              iVar7 = iRam0000000001345190;
              cVar4 = '\x01';
              bVar5 = (bool)ExclusiveMonitorPass(0x1345190,0x10);
              if (bVar5) {
                iRam0000000001345190 = 0;
                cVar4 = ExclusiveMonitorsStatus();
              }
            } while (cVar4 != '\0');
            if (iVar7 == 2) {
              uVar12 = native_sub_432c0c(0x1345190,1,0);
            }
          }
          if ((*(byte *)(uVar14 + 0x133) >> 2 & 1) != 0) {
            lVar20 = native_sub_3c573c(uVar14,&UNK_00edd9af,0xffffffff,0x800);
            uVar12 = 0;
            if (lVar20 != 0) {
              uVar12 = native_sub_3d704c(lVar20,0,0,&stack0xffffffffffffffb8);
            }
          }
          do {
            cVar4 = '\x01';
            bVar5 = (bool)ExclusiveMonitorPass(piVar1,0x10);
            if (bVar5) {
              *piVar1 = 1;
              cVar4 = ExclusiveMonitorsStatus();
            }
          } while (cVar4 != '\0');
          DataMemoryBarrier(2,3);
          do {
            cVar4 = '\x01';
            bVar5 = (bool)ExclusiveMonitorPass(puVar3,0x10);
            if (bVar5) {
              *puVar3 = 0;
              cVar4 = ExclusiveMonitorsStatus();
            }
          } while (cVar4 != '\0');
          DataMemoryBarrier(2,3);
          return uVar12;
        }
        cVar4 = '\x01';
        bVar5 = (bool)ExclusiveMonitorPass(piVar2,0x10);
        if (bVar5) {
          *piVar2 = 1;
          cVar4 = ExclusiveMonitorsStatus();
        }
      } while (cVar4 != '\0');
      DataMemoryBarrier(2,3);
      iVar7 = iRam00000000013451d8 + -1;
      if ((0 < iRam00000000013451d8) && (iRam00000000013451d8 = iVar7, iVar7 == 0)) {
        uRam00000000013451d0 = 0;
        iRam00000000013451d8 = 0;
        do {
          iVar7 = iRam0000000001345190;
          cVar4 = '\x01';
          bVar5 = (bool)ExclusiveMonitorPass(0x1345190,0x10);
          if (bVar5) {
            iRam0000000001345190 = 0;
            cVar4 = ExclusiveMonitorsStatus();
          }
        } while (cVar4 != '\0');
        if (iVar7 == 2) {
          native_sub_432c0c(0x1345190,1,0);
        }
      }
      uVar12 = native_sub_3aad3c();
      puVar3 = (ulong *)(uVar14 + 0xe8);
      do {
        uVar14 = *puVar3;
        if (uVar14 != uVar12) {
          ClearExclusiveLocal();
          break;
        }
        cVar4 = '\x01';
        bVar5 = (bool)ExclusiveMonitorPass(puVar3,0x10);
        if (bVar5) {
          *puVar3 = uVar12;
          cVar4 = ExclusiveMonitorsStatus();
        }
      } while (cVar4 != '\0');
      DataMemoryBarrier(2,3);
      if (uVar14 != uVar12) {
        do {
          iVar7 = *piVar1;
          if (iVar7 != 1) {
            ClearExclusiveLocal();
            break;
          }
          cVar4 = '\x01';
          bVar5 = (bool)ExclusiveMonitorPass(piVar1,0x10);
          if (bVar5) {
            *piVar1 = 1;
            cVar4 = ExclusiveMonitorsStatus();
          }
        } while (cVar4 != '\0');
        DataMemoryBarrier(2,3);
        while (iVar7 == 0) {
          uVar12 = native_sub_3a30dc(1,0);
          do {
            iVar7 = *piVar1;
            if (iVar7 != 1) {
              ClearExclusiveLocal();
              break;
            }
            cVar4 = '\x01';
            bVar5 = (bool)ExclusiveMonitorPass(piVar1,0x10);
            if (bVar5) {
              *piVar1 = 1;
              cVar4 = ExclusiveMonitorsStatus();
            }
          } while (cVar4 != '\0');
          DataMemoryBarrier(2,3);
        }
      }
      return uVar12;
    }
  }
  return uVar12;
}



/* UITextList$$OnScrollBar @ 0x94418c
 * void UITextList__OnScrollBar (UITextList_o* __this, const MethodInfo* method); */

/* WARNING: Removing unreachable block (ram,0x00432c1c) */
/* WARNING: Removing unreachable block (ram,0x003cc494) */
/* WARNING: Removing unreachable block (ram,0x003cc4b8) */
/* WARNING: Removing unreachable block (ram,0x003cc4d4) */
/* WARNING: Removing unreachable block (ram,0x003cc4dc) */
/* WARNING: Removing unreachable block (ram,0x003cc4f0) */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* UITextList$$OnScrollBar
   void UITextList__OnScrollBar (UITextList_o* __this, const MethodInfo* method); */

void native_UITextList__OnScrollBar_94418c
               (undefined1 param_1 [16],float param_2,undefined8 param_3,undefined8 param_4,
               long param_5)

{
  int *piVar1;
  int *piVar2;
  undefined8 *puVar3;
  char cVar4;
  bool bVar5;
  uint uVar6;
  int iVar7;
  int iVar8;
  uint uVar9;
  int iVar10;
  ulong uVar11;
  ulong uVar12;
  long *plVar13;
  long *plVar14;
  long lVar15;
  long lVar16;
  int iVar17;
  uint uVar18;
  ulong uVar19;
  float fVar20;
  undefined4 uVar21;
  ulong uVar22;
  float fVar23;
  float fVar25;
  undefined8 uVar24;
  ulong uVar26;
  undefined8 uVar27;
  float fVar28;
  ulong uVar29;
  float fVar30;
  float fVar31;
  undefined8 uVar32;
  
  if ((bRam000000000134141a & 1) == 0) {
    native_sub_43273c(&UIProgressBar_TypeInfo_12d6498);
    bRam000000000134141a = 1;
  }
  if (**(long **)(_UIProgressBar_TypeInfo_12d6498 + 0xb8) == 0) {
                    /* WARNING: Subroutine does not return */
    native_sub_432810();
  }
  uVar21 = native_UIProgressBar__get_value_c2b6f0
                     (**(long **)(_UIProgressBar_TypeInfo_12d6498 + 0xb8),0);
  *(undefined4 *)(param_5 + 0x38) = uVar21;
  if ((bRam000000000134141d & 1) == 0) {
    native_sub_43273c(&System_Text_StringBuilder_TypeInfo_12d5f30);
    native_sub_43273c(&StringLiteral___12eab80);
    native_sub_43273c(&StringLiteral__12eaac0);
    bRam000000000134141d = 1;
  }
  uVar12 = native_UITextList__get_isValid_9435ac(param_5);
  fVar20 = (float)param_4;
  if ((uVar12 & 1) == 0) {
    return;
  }
  plVar13 = *(long **)(param_5 + 0x18);
  if (plVar13 == (long *)0x0) goto LAB_009439d4;
  lVar15 = _StringLiteral__12eaac0;
  if (*(int *)(param_5 + 0x3c) != 0) {
    lVar15 = plVar13[0x15];
    fVar20 = (float)native_UITextList__get_lineHeight_9439e4(param_5);
    iVar7 = native_UnityEngine_Mathf__FloorToInt_8e506c((float)(int)lVar15 / fVar20,0);
    iVar8 = native_UnityEngine_Mathf__Max_8e4cd0(0,*(int *)(param_5 + 0x3c) - iVar7,0);
    uVar12 = (ulong)(uint)(float)iVar8;
    uVar9 = native_UnityEngine_Mathf__RoundToInt_8e50f0(*(float *)(param_5 + 0x38) * (float)iVar8,0)
    ;
    plVar14 = (long *)native_sub_432808(_System_Text_StringBuilder_TypeInfo_12d5f30);
    native_System_Text_StringBuilder___ctor_a4881c(plVar14,0);
    lVar15 = native_UITextList__get_paragraphs_943424(param_5);
    param_2 = (float)uVar12;
    fVar20 = (float)param_4;
    if (lVar15 == 0) {
LAB_009439d4:
                    /* WARNING: Subroutine does not return */
      native_sub_432810();
    }
    iVar8 = *(int *)(lVar15 + 0x18);
    if ((0 < iVar8) && (0 < iVar7)) {
      uVar18 = 0;
      uVar9 = uVar9 & ((int)uVar9 >> 0x1f ^ 0xffffffffU);
      do {
        if ((*(long *)(param_5 + 0x48) == 0) ||
           (lVar15 = *(long *)(*(long *)(param_5 + 0x48) + 0x10), lVar15 == 0)) goto LAB_009439d4;
        if (*(uint *)(lVar15 + 0x18) <= uVar18) {
LAB_009439d8:
          uVar27 = native_sub_43283c();
                    /* WARNING: Subroutine does not return */
          native_sub_4327dc(uVar27,0);
        }
        lVar15 = *(long *)(lVar15 + (long)(int)uVar18 * 8 + 0x20);
        if ((lVar15 == 0) || (lVar16 = *(long *)(lVar15 + 0x18), lVar16 == 0)) goto LAB_009439d4;
        iVar17 = (int)*(undefined8 *)(lVar16 + 0x18);
        if (0 < iVar17) {
          uVar19 = 0;
          while( true ) {
            if (*(uint *)(lVar16 + 0x18) <= uVar19) goto LAB_009439d8;
            uVar6 = uVar9 - 1;
            if ((int)uVar9 < 1) {
              if (plVar14 == (long *)0x0) goto LAB_009439d4;
              uVar27 = *(undefined8 *)(lVar16 + uVar19 * 8 + 0x20);
              iVar10 = native_System_Text_StringBuilder__get_Length_a49204(plVar14,0);
              if (0 < iVar10) {
                native_System_Text_StringBuilder__Append_a49d68(plVar14,_StringLiteral___12eab80,0);
              }
              native_System_Text_StringBuilder__Append_a49d68(plVar14,uVar27,0);
              iVar7 = iVar7 + -1;
              uVar6 = uVar9;
            }
            uVar9 = uVar6;
            uVar19 = uVar19 + 1;
            if (((long)iVar17 <= (long)uVar19) || (iVar7 < 1)) break;
            lVar16 = *(long *)(lVar15 + 0x18);
            if (lVar16 == 0) goto LAB_009439d4;
          }
        }
        param_2 = (float)uVar12;
        fVar20 = (float)param_4;
        uVar18 = uVar18 + 1;
      } while (((int)uVar18 < iVar8) && (0 < iVar7));
    }
    if (plVar14 == (long *)0x0) goto LAB_009439d4;
    plVar13 = *(long **)(param_5 + 0x18);
    lVar15 = (**(code **)(*plVar14 + 0x168))(plVar14,*(undefined8 *)(*plVar14 + 0x170));
    if (plVar13 == (long *)0x0) goto LAB_009439d4;
  }
  if ((bRam0000000001342005 & 1) == 0) {
    native_sub_43273c(&StringLiteral__12eaac0,lVar15,0);
    bRam0000000001342005 = 1;
  }
  uVar12 = native_System_String__op_Equality_afc18c(plVar13[0x35],lVar15,0);
  if ((uVar12 & 1) == 0) {
    uVar12 = native_System_String__IsNullOrEmpty_b09430(lVar15,0);
    lVar16 = plVar13[0x35];
    if ((uVar12 & 1) == 0) {
      uVar12 = native_System_String__op_Inequality_afbbb4(lVar16,lVar15,0);
      if ((uVar12 & 1) == 0) {
        return;
      }
      plVar13[0x35] = lVar15;
    }
    else {
      uVar12 = native_System_String__IsNullOrEmpty_b09430(lVar16,0);
      lVar15 = _StringLiteral__12eaac0;
      if ((uVar12 & 1) != 0) {
        return;
      }
      plVar13[0x35] = _StringLiteral__12eaac0;
    }
    native_sub_4326e0(plVar13 + 0x35,lVar15);
    (**(code **)(*plVar13 + 0x378))(plVar13,*(undefined8 *)(*plVar13 + 0x380));
    native_UILabel__ProcessAndRequest_ae7fdc(plVar13);
    if ((char)plVar13[0x1b] != '\0') {
      if ((bRam000000000134145d & 1) == 0) {
        native_sub_43273c(&Method_UnityEngine_Component_GetComponent_BoxCollider2D____12e2998,0);
        native_sub_43273c(&Method_UnityEngine_Component_GetComponent_BoxCollider____12e2990);
        native_sub_43273c(&NGUITools_TypeInfo_12d53c8);
        native_sub_43273c(&UnityEngine_Object_TypeInfo_12d54e0);
        bRam000000000134145d = 1;
      }
      lVar15 = native_UnityEngine_Component__GetComponent_ActiveAnimation__49daec
                         (plVar13,_Method_UnityEngine_Component_GetComponent_BoxCollider____12e2990)
      ;
      if (((*(byte *)(_UnityEngine_Object_TypeInfo_12d54e0 + 0x133) >> 2 & 1) != 0) &&
         (*(int *)(_UnityEngine_Object_TypeInfo_12d54e0 + 0xe0) == 0)) {
        native_sub_4327ec(_UnityEngine_Object_TypeInfo_12d54e0);
      }
      uVar12 = native_UnityEngine_Object__op_Inequality_8d76fc(lVar15,0,0);
      if ((uVar12 & 1) == 0) {
        lVar15 = native_UnityEngine_Component__GetComponent_ActiveAnimation__49daec
                           (plVar13,
                            _Method_UnityEngine_Component_GetComponent_BoxCollider2D____12e2998);
        fVar30 = (float)param_3;
        if (((*(byte *)(_NGUITools_TypeInfo_12d53c8 + 0x133) >> 2 & 1) != 0) &&
           (*(int *)(_NGUITools_TypeInfo_12d53c8 + 0xe0) == 0)) {
          native_sub_4327ec(_NGUITools_TypeInfo_12d53c8);
        }
        if ((bRam000000000133f58e & 1) == 0) {
          native_sub_43273c(&NGUITools_TypeInfo_12d53c8,lVar15,0);
          native_sub_43273c(&UnityEngine_Object_TypeInfo_12d54e0);
          native_sub_43273c(&StringLiteral_last_change_12f5390);
          bRam000000000133f58e = 1;
        }
        if (((*(byte *)(_UnityEngine_Object_TypeInfo_12d54e0 + 0x133) >> 2 & 1) != 0) &&
           (*(int *)(_UnityEngine_Object_TypeInfo_12d54e0 + 0xe0) == 0)) {
          native_sub_4327ec();
        }
        uVar12 = native_UnityEngine_Object__op_Inequality_8d76fc(lVar15,0,0);
        if ((uVar12 & 1) == 0) {
          return;
        }
        if (((*(byte *)(_UnityEngine_Object_TypeInfo_12d54e0 + 0x133) >> 2 & 1) != 0) &&
           (*(int *)(_UnityEngine_Object_TypeInfo_12d54e0 + 0xe0) == 0)) {
          native_sub_4327ec();
        }
        uVar12 = native_UnityEngine_Object__op_Inequality_8d76fc(plVar13,0,0);
        if ((uVar12 & 1) == 0) {
          return;
        }
        if (plVar13 == (long *)0x0) {
LAB_0072ea2c:
                    /* WARNING: Subroutine does not return */
          native_sub_432810();
        }
        lVar16 = *plVar13;
        if ((((*(float *)((long)plVar13 + 0x104) == 0.0) && (*(float *)(plVar13 + 0x21) == 0.0)) &&
            (param_2 = *(float *)((long)plVar13 + 0x10c), param_2 == 1.0)) &&
           (param_2 = *(float *)(plVar13 + 0x22), param_2 == 1.0)) {
          lVar16 = (**(code **)(lVar16 + 0x1d8))(plVar13,*(undefined8 *)(lVar16 + 0x1e0));
          if (lVar16 == 0) goto LAB_0072ea2c;
          if ((*(uint *)(lVar16 + 0x18) == 0) || (*(uint *)(lVar16 + 0x18) < 3)) {
LAB_0072ea30:
            uVar27 = native_sub_43283c();
                    /* WARNING: Subroutine does not return */
            native_sub_4327dc(uVar27,0);
          }
          uVar27 = *(undefined8 *)(lVar16 + 0x20);
          uVar32 = *(undefined8 *)(lVar16 + 0x38);
          fVar20 = (float)native_UnityEngine_Mathf__Clamp01_8d9d9c(0x3f000000,0);
          if (*(uint *)(lVar16 + 0x18) < 3) goto LAB_0072ea30;
          if (lVar15 == 0) goto LAB_0072ea2c;
          uVar24 = *(undefined8 *)(lVar16 + 0x38);
          fVar28 = (float)uVar27;
          fVar23 = (float)((ulong)uVar27 >> 0x20);
          fVar28 = fVar28 + ((float)uVar32 - fVar28) * fVar20;
          fVar23 = fVar23 + ((float)((ulong)uVar32 >> 0x20) - fVar23) * fVar20;
          uVar27 = CONCAT44(fVar23,fVar28);
          fVar25 = (float)uVar24 - (float)*(undefined8 *)(lVar16 + 0x20);
          fVar20 = (float)((ulong)uVar24 >> 0x20) -
                   (float)((ulong)*(undefined8 *)(lVar16 + 0x20) >> 0x20);
          uVar12 = CONCAT44(fVar20,fVar25);
          fVar30 = (float)native_UnityEngine_Collider2D__get_offset_db8b24(lVar15,0);
          fVar28 = fVar28 - fVar30;
          fVar30 = fVar23 - (float)uVar24;
          if ((fVar28 * fVar28 + fVar30 * fVar30 < 9.9999994e-11) &&
             (uVar32 = uVar27,
             fVar30 = (float)native_UnityEngine_BoxCollider2D__get_size_db8988(lVar15,0),
             fVar25 = fVar25 - fVar30, fVar30 = fVar20 - (float)uVar32,
             fVar25 * fVar25 + fVar30 * fVar30 < 9.9999994e-11)) {
            return;
          }
          native_UnityEngine_Collider2D__set_offset_db8bcc(uVar27,fVar23,lVar15,0);
        }
        else {
          fVar28 = (float)(**(code **)(lVar16 + 0x2f8))(plVar13,*(undefined8 *)(lVar16 + 0x300));
          if (lVar15 == 0) goto LAB_0072ea2c;
          uVar12 = (ulong)(uint)(fVar30 - fVar28);
          fVar31 = (fVar28 + fVar30) * 0.5;
          fVar23 = (param_2 + fVar20) * 0.5;
          fVar20 = fVar20 - param_2;
          fVar25 = (float)native_UnityEngine_Collider2D__get_offset_db8b24(lVar15,0);
          fVar25 = fVar31 - fVar25;
          param_2 = fVar23 - param_2;
          param_2 = param_2 * param_2;
          if ((fVar25 * fVar25 + param_2 < 9.9999994e-11) &&
             (fVar25 = (float)native_UnityEngine_BoxCollider2D__get_size_db8988(lVar15,0),
             fVar25 = (fVar30 - fVar28) - fVar25,
             fVar25 * fVar25 + (fVar20 - param_2) * (fVar20 - param_2) < 9.9999994e-11)) {
            return;
          }
          native_UnityEngine_Collider2D__set_offset_db8bcc(fVar31,fVar23,lVar15,0);
        }
        native_UnityEngine_BoxCollider2D__set_size_db8a30(uVar12,fVar20,lVar15,0);
        if ((*(byte *)(_NGUITools_TypeInfo_12d53c8 + 0x133) >> 2 & 1) == 0) {
          return;
        }
        if (*(int *)(_NGUITools_TypeInfo_12d53c8 + 0xe0) != 0) {
          return;
        }
      }
      else {
        if (((*(byte *)(_NGUITools_TypeInfo_12d53c8 + 0x133) >> 2 & 1) != 0) &&
           (*(int *)(_NGUITools_TypeInfo_12d53c8 + 0xe0) == 0)) {
          native_sub_4327ec();
        }
        if ((bRam000000000133f58d & 1) == 0) {
          native_sub_43273c(&NGUITools_TypeInfo_12d53c8,lVar15,0);
          native_sub_43273c(&UnityEngine_Object_TypeInfo_12d54e0);
          native_sub_43273c(&StringLiteral_last_change_12f5390);
          bRam000000000133f58d = 1;
        }
        if (((*(byte *)(_UnityEngine_Object_TypeInfo_12d54e0 + 0x133) >> 2 & 1) != 0) &&
           (*(int *)(_UnityEngine_Object_TypeInfo_12d54e0 + 0xe0) == 0)) {
          native_sub_4327ec();
        }
        uVar12 = native_UnityEngine_Object__op_Inequality_8d76fc(lVar15,0,0);
        if ((uVar12 & 1) == 0) {
          return;
        }
        if (((*(byte *)(_UnityEngine_Object_TypeInfo_12d54e0 + 0x133) >> 2 & 1) != 0) &&
           (*(int *)(_UnityEngine_Object_TypeInfo_12d54e0 + 0xe0) == 0)) {
          native_sub_4327ec();
        }
        uVar12 = native_UnityEngine_Object__op_Inequality_8d76fc(plVar13,0,0);
        if ((uVar12 & 1) == 0) {
          return;
        }
        if (plVar13 == (long *)0x0) {
LAB_0072e730:
                    /* WARNING: Subroutine does not return */
          native_sub_432810();
        }
        lVar16 = *plVar13;
        if ((((*(float *)((long)plVar13 + 0x104) == 0.0) && (*(float *)(plVar13 + 0x21) == 0.0)) &&
            (param_2 = *(float *)((long)plVar13 + 0x10c), param_2 == 1.0)) &&
           (param_2 = *(float *)(plVar13 + 0x22), param_2 == 1.0)) {
          lVar16 = (**(code **)(lVar16 + 0x1d8))(plVar13,*(undefined8 *)(lVar16 + 0x1e0));
          if (lVar16 == 0) goto LAB_0072e730;
          if ((*(uint *)(lVar16 + 0x18) == 0) || (*(uint *)(lVar16 + 0x18) < 3)) {
LAB_0072e734:
            uVar27 = native_sub_43283c();
                    /* WARNING: Subroutine does not return */
            native_sub_4327dc(uVar27,0);
          }
          uVar27 = *(undefined8 *)(lVar16 + 0x20);
          fVar28 = *(float *)(lVar16 + 0x28);
          uVar32 = *(undefined8 *)(lVar16 + 0x38);
          fVar30 = *(float *)(lVar16 + 0x40);
          fVar20 = (float)native_UnityEngine_Mathf__Clamp01_8d9d9c(0x3f000000,0);
          if (*(uint *)(lVar16 + 0x18) < 3) goto LAB_0072e734;
          if (lVar15 == 0) goto LAB_0072e730;
          fVar23 = (float)uVar27;
          fVar25 = (float)((ulong)uVar27 >> 0x20);
          fVar30 = fVar30 - fVar28;
          uVar11 = (ulong)(uint)fVar30;
          fVar25 = fVar25 + ((float)((ulong)uVar32 >> 0x20) - fVar25) * fVar20;
          uVar24 = CONCAT44(fVar25,fVar23 + ((float)uVar32 - fVar23) * fVar20);
          uVar29 = (ulong)(uint)(fVar28 + fVar30 * fVar20);
          fVar28 = (float)((ulong)*(undefined8 *)(lVar16 + 0x38) >> 0x20) -
                   (float)((ulong)*(undefined8 *)(lVar16 + 0x20) >> 0x20);
          uVar22 = CONCAT44(fVar28,(float)*(undefined8 *)(lVar16 + 0x38) -
                                   (float)*(undefined8 *)(lVar16 + 0x20));
          fVar20 = *(float *)(lVar16 + 0x40) - *(float *)(lVar16 + 0x28);
          uVar27 = uVar24;
          uVar32 = native_UnityEngine_BoxCollider__get_center_dba95c(lVar15,0);
          uVar12 = (ulong)(uint)fVar25;
          uVar19 = uVar12;
          uVar26 = uVar29;
          uVar11 = native_UnityEngine_Vector3__op_Inequality_776c48
                             (uVar24,uVar12,uVar29,uVar32,uVar27,uVar11,0);
          if ((uVar11 & 1) == 0) {
            uVar27 = native_UnityEngine_BoxCollider__get_size_dbaab4(lVar15,0);
            uVar19 = native_UnityEngine_Vector3__op_Inequality_776c48
                               (uVar22,fVar28,fVar20,uVar27,uVar19,uVar26,0);
            if ((uVar19 & 1) == 0) {
              return;
            }
          }
          native_UnityEngine_BoxCollider__set_center_dbaa0c(uVar24,uVar12,uVar29,lVar15,0);
        }
        else {
          fVar30 = (float)(**(code **)(lVar16 + 0x2f8))(plVar13,*(undefined8 *)(lVar16 + 0x300));
          if (lVar15 == 0) goto LAB_0072e730;
          uVar22 = (ulong)(uint)((float)param_3 - fVar30);
          fVar28 = fVar20 - param_2;
          uVar19 = (ulong)(uint)(param_2 + fVar20);
          uVar26 = (ulong)(uint)((param_2 + fVar20) * 0.5);
          fVar30 = (fVar30 + (float)param_3) * 0.5;
          uVar27 = native_UnityEngine_BoxCollider__get_center_dba95c(lVar15,0);
          uVar32 = 0;
          fVar20 = 0.0;
          uVar12 = uVar26;
          uVar19 = native_UnityEngine_Vector3__op_Inequality_776c48
                             (fVar30,uVar26,0,uVar27,uVar19,param_3,0);
          if ((uVar19 & 1) == 0) {
            uVar27 = native_UnityEngine_BoxCollider__get_size_dbaab4(lVar15,0);
            uVar12 = native_UnityEngine_Vector3__op_Inequality_776c48
                               (uVar22,fVar28,0,uVar27,uVar12,uVar32,0);
            if ((uVar12 & 1) == 0) {
              return;
            }
          }
          native_UnityEngine_BoxCollider__set_center_dbaa0c(fVar30,uVar26,0,lVar15,0);
        }
        native_UnityEngine_BoxCollider__set_size_dbab64(uVar22,fVar28,fVar20,lVar15,0);
        if ((*(byte *)(_NGUITools_TypeInfo_12d53c8 + 0x133) >> 2 & 1) == 0) {
          return;
        }
        if (*(int *)(_NGUITools_TypeInfo_12d53c8 + 0xe0) != 0) {
          return;
        }
      }
      lVar15 = _NGUITools_TypeInfo_12d53c8;
      if ((*(byte *)(_NGUITools_TypeInfo_12d53c8 + 0x133) >> 2 & 1) == 0) {
        return;
      }
      piVar1 = (int *)(_NGUITools_TypeInfo_12d53c8 + 0xe0);
      while (*piVar1 == 1) {
        cVar4 = '\x01';
        bVar5 = (bool)ExclusiveMonitorPass(piVar1,0x10);
        if (bVar5) {
          *piVar1 = 1;
          cVar4 = ExclusiveMonitorsStatus();
        }
        if (cVar4 == '\0') {
          DataMemoryBarrier(2,3);
          return;
        }
      }
      ClearExclusiveLocal();
      DataMemoryBarrier(2,3);
      lVar16 = native_sub_432c38();
      if (lVar16 == lRam00000000013451d0) {
        iRam00000000013451d8 = iRam00000000013451d8 + 1;
      }
      else {
        iVar7 = 0;
        do {
          iVar8 = iRam0000000001345190;
          if (iRam0000000001345190 == iVar7) {
            cVar4 = '\x01';
            bVar5 = (bool)ExclusiveMonitorPass(0x1345190,0x10);
            if (bVar5) {
              cVar4 = ExclusiveMonitorsStatus();
              iRam0000000001345190 = iVar7 + 1;
            }
            if (cVar4 != '\0') goto code_r0x003cc248;
            bVar5 = true;
          }
          else {
            ClearExclusiveLocal();
code_r0x003cc248:
            bVar5 = false;
          }
        } while ((iVar8 != 2) && (iVar7 = iVar8, !bVar5));
        while (iVar8 != 0) {
          native_sub_432bb4(0x1345190,2,0xffffffff);
          do {
            iVar8 = iRam0000000001345190;
            cVar4 = '\x01';
            bVar5 = (bool)ExclusiveMonitorPass(0x1345190,0x10);
            if (bVar5) {
              iRam0000000001345190 = 2;
              cVar4 = ExclusiveMonitorsStatus();
            }
          } while (cVar4 != '\0');
        }
        iRam00000000013451d8 = 1;
        lRam00000000013451d0 = lVar16;
      }
      while (*piVar1 == 1) {
        cVar4 = '\x01';
        bVar5 = (bool)ExclusiveMonitorPass(piVar1,0x10);
        if (bVar5) {
          *piVar1 = 1;
          cVar4 = ExclusiveMonitorsStatus();
        }
        if (cVar4 == '\0') {
          DataMemoryBarrier(2,3);
          if (iRam00000000013451d8 < 1) {
            return;
          }
          if (iRam00000000013451d8 + -1 != 0) {
            iRam00000000013451d8 = iRam00000000013451d8 + -1;
            return;
          }
          lRam00000000013451d0 = 0;
          iRam00000000013451d8 = 0;
          do {
            iVar7 = iRam0000000001345190;
            cVar4 = '\x01';
            bVar5 = (bool)ExclusiveMonitorPass(0x1345190,0x10);
            if (bVar5) {
              iRam0000000001345190 = 0;
              cVar4 = ExclusiveMonitorsStatus();
            }
          } while (cVar4 != '\0');
          if (iVar7 != 2) {
            lRam00000000013451d0 = 0;
            iRam00000000013451d8 = 0;
            return;
          }
          (*(code *)&DAT_0155b260)(0x62,0x1345190,0x81,1,0,0,0);
          return;
        }
      }
      ClearExclusiveLocal();
      DataMemoryBarrier(2,3);
      piVar2 = (int *)(lVar15 + 0xdc);
      do {
        if (*piVar2 != 1) {
          ClearExclusiveLocal();
          DataMemoryBarrier(2,3);
          puVar3 = (undefined8 *)(lVar15 + 0xe8);
          uVar27 = native_sub_3aad3c();
          do {
            cVar4 = '\x01';
            bVar5 = (bool)ExclusiveMonitorPass(puVar3,0x10);
            if (bVar5) {
              *puVar3 = uVar27;
              cVar4 = ExclusiveMonitorsStatus();
            }
          } while (cVar4 != '\0');
          DataMemoryBarrier(2,3);
          do {
            cVar4 = '\x01';
            bVar5 = (bool)ExclusiveMonitorPass(piVar2,0x10);
            if (bVar5) {
              *piVar2 = 1;
              cVar4 = ExclusiveMonitorsStatus();
            }
          } while (cVar4 != '\0');
          DataMemoryBarrier(2,3);
          iVar7 = iRam00000000013451d8 + -1;
          if ((0 < iRam00000000013451d8) && (iRam00000000013451d8 = iVar7, iVar7 == 0)) {
            lRam00000000013451d0 = 0;
            iRam00000000013451d8 = 0;
            do {
              iVar7 = iRam0000000001345190;
              cVar4 = '\x01';
              bVar5 = (bool)ExclusiveMonitorPass(0x1345190,0x10);
              if (bVar5) {
                iRam0000000001345190 = 0;
                cVar4 = ExclusiveMonitorsStatus();
              }
            } while (cVar4 != '\0');
            if (iVar7 == 2) {
              native_sub_432c0c(0x1345190,1,0);
            }
          }
          if (((*(byte *)(lVar15 + 0x133) >> 2 & 1) != 0) &&
             (lVar15 = native_sub_3c573c(lVar15,&UNK_00edd9af,0xffffffff,0x800), lVar15 != 0)) {
            native_sub_3d704c(lVar15,0,0,&stack0xffffffffffffffb8);
          }
          do {
            cVar4 = '\x01';
            bVar5 = (bool)ExclusiveMonitorPass(piVar1,0x10);
            if (bVar5) {
              *piVar1 = 1;
              cVar4 = ExclusiveMonitorsStatus();
            }
          } while (cVar4 != '\0');
          DataMemoryBarrier(2,3);
          do {
            cVar4 = '\x01';
            bVar5 = (bool)ExclusiveMonitorPass(puVar3,0x10);
            if (bVar5) {
              *puVar3 = 0;
              cVar4 = ExclusiveMonitorsStatus();
            }
          } while (cVar4 != '\0');
          DataMemoryBarrier(2,3);
          return;
        }
        cVar4 = '\x01';
        bVar5 = (bool)ExclusiveMonitorPass(piVar2,0x10);
        if (bVar5) {
          *piVar2 = 1;
          cVar4 = ExclusiveMonitorsStatus();
        }
      } while (cVar4 != '\0');
      DataMemoryBarrier(2,3);
      iVar7 = iRam00000000013451d8 + -1;
      if ((0 < iRam00000000013451d8) && (iRam00000000013451d8 = iVar7, iVar7 == 0)) {
        lRam00000000013451d0 = 0;
        iRam00000000013451d8 = 0;
        do {
          iVar7 = iRam0000000001345190;
          cVar4 = '\x01';
          bVar5 = (bool)ExclusiveMonitorPass(0x1345190,0x10);
          if (bVar5) {
            iRam0000000001345190 = 0;
            cVar4 = ExclusiveMonitorsStatus();
          }
        } while (cVar4 != '\0');
        if (iVar7 == 2) {
          native_sub_432c0c(0x1345190,1,0);
        }
      }
      lVar16 = native_sub_3aad3c();
      plVar13 = (long *)(lVar15 + 0xe8);
      do {
        lVar15 = *plVar13;
        if (lVar15 != lVar16) {
          ClearExclusiveLocal();
          break;
        }
        cVar4 = '\x01';
        bVar5 = (bool)ExclusiveMonitorPass(plVar13,0x10);
        if (bVar5) {
          *plVar13 = lVar16;
          cVar4 = ExclusiveMonitorsStatus();
        }
      } while (cVar4 != '\0');
      DataMemoryBarrier(2,3);
      if (lVar15 != lVar16) {
        do {
          iVar7 = *piVar1;
          if (iVar7 != 1) {
            ClearExclusiveLocal();
            break;
          }
          cVar4 = '\x01';
          bVar5 = (bool)ExclusiveMonitorPass(piVar1,0x10);
          if (bVar5) {
            *piVar1 = 1;
            cVar4 = ExclusiveMonitorsStatus();
          }
        } while (cVar4 != '\0');
        DataMemoryBarrier(2,3);
        while (iVar7 == 0) {
          native_sub_3a30dc(1,0);
          do {
            iVar7 = *piVar1;
            if (iVar7 != 1) {
              ClearExclusiveLocal();
              break;
            }
            cVar4 = '\x01';
            bVar5 = (bool)ExclusiveMonitorPass(piVar1,0x10);
            if (bVar5) {
              *piVar1 = 1;
              cVar4 = ExclusiveMonitorsStatus();
            }
          } while (cVar4 != '\0');
          DataMemoryBarrier(2,3);
        }
      }
      return;
    }
  }
  return;
}



/* UITextList$$Add @ 0x9441f4
 * void UITextList__Add (UITextList_o* __this, System_String_o* text, const MethodInfo* method); */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* UITextList$$Add
   void UITextList__Add (UITextList_o* __this, System_String_o* text, const MethodInfo* method); */

void native_UITextList__Add_9441f4(long param_1,undefined8 param_2)

{
  int iVar1;
  ulong uVar2;
  long lVar3;
  long lVar4;
  long lVar5;
  long lVar6;
  int iVar7;
  long *plVar8;
  undefined8 uVar9;
  float fVar10;
  long lStack_48;
  
  if ((bRam000000000134141b & 1) == 0) {
    native_sub_43273c(&Method_BetterList_UITextList_Paragraph__Add___12d8a90,param_2,0);
    native_sub_43273c(&Method_BetterList_UITextList_Paragraph__RemoveAt___12d8aa0);
    native_sub_43273c(&UITextList_Paragraph_TypeInfo_12d7aa0);
    bRam000000000134141b = 1;
  }
  lVar5 = native_UITextList__get_paragraphs_943424(param_1);
  if (lVar5 == 0) {
LAB_00944300:
                    /* WARNING: Subroutine does not return */
    native_sub_432810();
  }
  if (*(int *)(lVar5 + 0x18) < *(int *)(param_1 + 0x2c)) {
    lVar6 = native_sub_432808(_UITextList_Paragraph_TypeInfo_12d7aa0);
    native_UITextList_Paragraph___ctor_55b2ec(lVar6,0);
  }
  else {
    lVar5 = *(long *)(param_1 + 0x48);
    if ((lVar5 == 0) || (lVar6 = *(long *)(lVar5 + 0x10), lVar6 == 0)) goto LAB_00944300;
    if (*(int *)(lVar6 + 0x18) == 0) {
      uVar9 = native_sub_43283c();
                    /* WARNING: Subroutine does not return */
      native_sub_4327dc(uVar9,0);
    }
    lVar6 = *(long *)(lVar6 + 0x20);
    native_BetterList_object___RemoveAt_ba2984
              (lVar5,0,_Method_BetterList_UITextList_Paragraph__RemoveAt___12d8aa0);
  }
  if (lVar6 == 0) goto LAB_00944300;
  *(undefined8 *)(lVar6 + 0x10) = param_2;
  native_sub_4326e0((undefined8 *)(lVar6 + 0x10),param_2);
  if (*(long *)(param_1 + 0x48) == 0) goto LAB_00944300;
  native_BetterList_object___Add_ba24d8
            (*(long *)(param_1 + 0x48),lVar6,_Method_BetterList_UITextList_Paragraph__Add___12d8a90)
  ;
  if ((bRam000000000134141c & 1) == 0) {
    native_sub_43273c(&char___TypeInfo_12d3090);
    native_sub_43273c(&NGUIText_TypeInfo_12d53c0);
    native_sub_43273c(&UnityEngine_Object_TypeInfo_12d54e0);
    native_sub_43273c(&UIScrollBar_TypeInfo_12d64b0);
    bRam000000000134141c = 1;
  }
  lStack_48 = 0;
  uVar2 = native_UITextList__get_isValid_9435ac(param_1);
  if ((uVar2 & 1) == 0) {
    return;
  }
  lVar5 = *(long *)(param_1 + 0x18);
  if (lVar5 != 0) {
    *(undefined4 *)(param_1 + 0x40) = *(undefined4 *)(lVar5 + 0xa4);
    *(undefined4 *)(param_1 + 0x44) = *(undefined4 *)(lVar5 + 0xa8);
    native_UILabel__UpdateNGUIText_aeae48(lVar5,0);
    if (((*(byte *)(_NGUIText_TypeInfo_12d53c0 + 0x133) >> 2 & 1) != 0) &&
       (*(int *)(_NGUIText_TypeInfo_12d53c0 + 0xe0) == 0)) {
      native_sub_4327ec();
    }
    lVar5 = _NGUIText_TypeInfo_12d53c0;
    *(undefined4 *)(*(long *)(_NGUIText_TypeInfo_12d53c0 + 0xb8) + 0x44) = 1000000;
    *(undefined4 *)(*(long *)(lVar5 + 0xb8) + 0x4c) = 1000000;
    *(undefined4 *)(param_1 + 0x3c) = 0;
    lVar5 = native_UITextList__get_paragraphs_943424(param_1);
    if (lVar5 != 0) {
      lVar6 = 0;
      while ((int)(uint)lVar6 < *(int *)(lVar5 + 0x18)) {
        if ((*(long *)(param_1 + 0x48) == 0) ||
           (lVar5 = *(long *)(*(long *)(param_1 + 0x48) + 0x10), lVar5 == 0)) goto LAB_009440b4;
        if (*(uint *)(lVar5 + 0x18) <= (uint)lVar6) goto LAB_009440b8;
        lVar5 = *(long *)(lVar5 + lVar6 * 8 + 0x20);
        if (lVar5 == 0) goto LAB_009440b4;
        uVar9 = *(undefined8 *)(lVar5 + 0x10);
        if (((*(byte *)(_NGUIText_TypeInfo_12d53c0 + 0x133) >> 2 & 1) != 0) &&
           (*(int *)(_NGUIText_TypeInfo_12d53c0 + 0xe0) == 0)) {
          native_sub_4327ec();
        }
        native_NGUIText__WrapText_80dd68(uVar9,&lStack_48,0,1,0,0);
        lVar4 = lStack_48;
        lVar3 = native_sub_432750(_char___TypeInfo_12d3090,1);
        if (lVar3 == 0) goto LAB_009440b4;
        if (*(int *)(lVar3 + 0x18) == 0) goto LAB_009440b8;
        *(undefined2 *)(lVar3 + 0x20) = 10;
        if (lVar4 == 0) goto LAB_009440b4;
        lVar4 = native_System_String__Split_b095f4(lVar4,lVar3,0);
        plVar8 = (long *)(lVar5 + 0x18);
        *plVar8 = lVar4;
        native_sub_4326e0(plVar8,lVar4);
        if (*plVar8 == 0) goto LAB_009440b4;
        *(int *)(param_1 + 0x3c) = *(int *)(param_1 + 0x3c) + *(int *)(*plVar8 + 0x18);
        lVar5 = native_UITextList__get_paragraphs_943424(param_1);
        lVar6 = lVar6 + 1;
        if (lVar5 == 0) goto LAB_009440b4;
      }
      lVar5 = *(long *)(param_1 + 0x48);
      *(undefined4 *)(param_1 + 0x3c) = 0;
      if (lVar5 != 0) {
        iVar1 = *(int *)(lVar5 + 0x18);
        if (iVar1 < 1) goto LAB_00943fac;
        lVar6 = 0;
        iVar7 = 0;
        goto LAB_00943f6c;
      }
    }
  }
  goto LAB_009440b4;
LAB_00943f6c:
  do {
    lVar4 = *(long *)(lVar5 + 0x10);
    if (lVar4 == 0) goto LAB_009440b4;
    if (*(uint *)(lVar4 + 0x18) <= (uint)lVar6) {
LAB_009440b8:
      uVar9 = native_sub_43283c();
                    /* WARNING: Subroutine does not return */
      native_sub_4327dc(uVar9,0);
    }
    lVar4 = *(long *)(lVar4 + lVar6 * 8 + 0x20);
    if ((lVar4 == 0) || (lVar4 = *(long *)(lVar4 + 0x18), lVar4 == 0)) goto LAB_009440b4;
    lVar6 = lVar6 + 1;
    iVar7 = iVar7 + *(int *)(lVar4 + 0x18);
    *(int *)(param_1 + 0x3c) = iVar7;
  } while ((int)lVar6 < iVar1);
LAB_00943fac:
  uVar9 = *(undefined8 *)(param_1 + 0x20);
  if (((*(byte *)(_UnityEngine_Object_TypeInfo_12d54e0 + 0x133) >> 2 & 1) != 0) &&
     (*(int *)(_UnityEngine_Object_TypeInfo_12d54e0 + 0xe0) == 0)) {
    native_sub_4327ec();
  }
  uVar2 = native_UnityEngine_Object__op_Inequality_8d76fc(uVar9,0,0);
  if ((uVar2 & 1) == 0) goto LAB_0094408c;
  plVar8 = *(long **)(param_1 + 0x20);
  if (plVar8 == (long *)0x0) {
LAB_0094400c:
    plVar8 = (long *)0x0;
  }
  else {
    if (*(byte *)(*plVar8 + 300) < *(byte *)(_UIScrollBar_TypeInfo_12d64b0 + 300))
    goto LAB_0094400c;
    if (*(long *)(*(long *)(*plVar8 + 200) +
                  (ulong)*(byte *)(_UIScrollBar_TypeInfo_12d64b0 + 300) * 8 + -8) !=
        _UIScrollBar_TypeInfo_12d64b0) {
      plVar8 = (long *)0x0;
    }
  }
  if (((*(byte *)(_UnityEngine_Object_TypeInfo_12d54e0 + 0x133) >> 2 & 1) != 0) &&
     (*(int *)(_UnityEngine_Object_TypeInfo_12d54e0 + 0xe0) == 0)) {
    native_sub_4327ec();
  }
  uVar2 = native_UnityEngine_Object__op_Inequality_8d76fc(plVar8,0,0);
  if ((uVar2 & 1) != 0) {
    if (*(int *)(param_1 + 0x3c) == 0) {
      fVar10 = 1.0;
    }
    else {
      iVar1 = native_UITextList__get_scrollHeight_943a88(param_1);
      fVar10 = 1.0 - (float)iVar1 / (float)*(int *)(param_1 + 0x3c);
    }
    if (plVar8 == (long *)0x0) {
LAB_009440b4:
                    /* WARNING: Subroutine does not return */
      native_sub_432810();
    }
    native_UIScrollBar__set_barSize_c309c0(fVar10,plVar8,0);
  }
LAB_0094408c:
  native_UITextList__UpdateVisibleText_943768(param_1);
  return;
}



/* UITextList$$Add @ 0x9441fc
 * void UITextList__Add (UITextList_o* __this, System_String_o* text, bool updateVisible, const MethodInfo* method); */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* UITextList$$Add
   void UITextList__Add (UITextList_o* __this, System_String_o* text, bool updateVisible, const
   MethodInfo* method); */

void native_UITextList__Add_9441fc(long param_1,undefined8 param_2)

{
  int iVar1;
  ulong uVar2;
  long lVar3;
  long lVar4;
  long lVar5;
  long lVar6;
  int iVar7;
  long *plVar8;
  undefined8 uVar9;
  float fVar10;
  long lStack_48;
  
  if ((bRam000000000134141b & 1) == 0) {
    native_sub_43273c(&Method_BetterList_UITextList_Paragraph__Add___12d8a90);
    native_sub_43273c(&Method_BetterList_UITextList_Paragraph__RemoveAt___12d8aa0);
    native_sub_43273c(&UITextList_Paragraph_TypeInfo_12d7aa0);
    bRam000000000134141b = 1;
  }
  lVar5 = native_UITextList__get_paragraphs_943424(param_1);
  if (lVar5 == 0) {
LAB_00944300:
                    /* WARNING: Subroutine does not return */
    native_sub_432810();
  }
  if (*(int *)(lVar5 + 0x18) < *(int *)(param_1 + 0x2c)) {
    lVar6 = native_sub_432808(_UITextList_Paragraph_TypeInfo_12d7aa0);
    native_UITextList_Paragraph___ctor_55b2ec(lVar6,0);
  }
  else {
    lVar5 = *(long *)(param_1 + 0x48);
    if ((lVar5 == 0) || (lVar6 = *(long *)(lVar5 + 0x10), lVar6 == 0)) goto LAB_00944300;
    if (*(int *)(lVar6 + 0x18) == 0) {
      uVar9 = native_sub_43283c();
                    /* WARNING: Subroutine does not return */
      native_sub_4327dc(uVar9,0);
    }
    lVar6 = *(long *)(lVar6 + 0x20);
    native_BetterList_object___RemoveAt_ba2984
              (lVar5,0,_Method_BetterList_UITextList_Paragraph__RemoveAt___12d8aa0);
  }
  if (lVar6 == 0) goto LAB_00944300;
  *(undefined8 *)(lVar6 + 0x10) = param_2;
  native_sub_4326e0((undefined8 *)(lVar6 + 0x10),param_2);
  if (*(long *)(param_1 + 0x48) == 0) goto LAB_00944300;
  native_BetterList_object___Add_ba24d8
            (*(long *)(param_1 + 0x48),lVar6,_Method_BetterList_UITextList_Paragraph__Add___12d8a90)
  ;
  if ((bRam000000000134141c & 1) == 0) {
    native_sub_43273c(&char___TypeInfo_12d3090);
    native_sub_43273c(&NGUIText_TypeInfo_12d53c0);
    native_sub_43273c(&UnityEngine_Object_TypeInfo_12d54e0);
    native_sub_43273c(&UIScrollBar_TypeInfo_12d64b0);
    bRam000000000134141c = 1;
  }
  lStack_48 = 0;
  uVar2 = native_UITextList__get_isValid_9435ac(param_1);
  if ((uVar2 & 1) == 0) {
    return;
  }
  lVar5 = *(long *)(param_1 + 0x18);
  if (lVar5 != 0) {
    *(undefined4 *)(param_1 + 0x40) = *(undefined4 *)(lVar5 + 0xa4);
    *(undefined4 *)(param_1 + 0x44) = *(undefined4 *)(lVar5 + 0xa8);
    native_UILabel__UpdateNGUIText_aeae48(lVar5,0);
    if (((*(byte *)(_NGUIText_TypeInfo_12d53c0 + 0x133) >> 2 & 1) != 0) &&
       (*(int *)(_NGUIText_TypeInfo_12d53c0 + 0xe0) == 0)) {
      native_sub_4327ec();
    }
    lVar5 = _NGUIText_TypeInfo_12d53c0;
    *(undefined4 *)(*(long *)(_NGUIText_TypeInfo_12d53c0 + 0xb8) + 0x44) = 1000000;
    *(undefined4 *)(*(long *)(lVar5 + 0xb8) + 0x4c) = 1000000;
    *(undefined4 *)(param_1 + 0x3c) = 0;
    lVar5 = native_UITextList__get_paragraphs_943424(param_1);
    if (lVar5 != 0) {
      lVar6 = 0;
      while ((int)(uint)lVar6 < *(int *)(lVar5 + 0x18)) {
        if ((*(long *)(param_1 + 0x48) == 0) ||
           (lVar5 = *(long *)(*(long *)(param_1 + 0x48) + 0x10), lVar5 == 0)) goto LAB_009440b4;
        if (*(uint *)(lVar5 + 0x18) <= (uint)lVar6) goto LAB_009440b8;
        lVar5 = *(long *)(lVar5 + lVar6 * 8 + 0x20);
        if (lVar5 == 0) goto LAB_009440b4;
        uVar9 = *(undefined8 *)(lVar5 + 0x10);
        if (((*(byte *)(_NGUIText_TypeInfo_12d53c0 + 0x133) >> 2 & 1) != 0) &&
           (*(int *)(_NGUIText_TypeInfo_12d53c0 + 0xe0) == 0)) {
          native_sub_4327ec();
        }
        native_NGUIText__WrapText_80dd68(uVar9,&lStack_48,0,1,0,0);
        lVar4 = lStack_48;
        lVar3 = native_sub_432750(_char___TypeInfo_12d3090,1);
        if (lVar3 == 0) goto LAB_009440b4;
        if (*(int *)(lVar3 + 0x18) == 0) goto LAB_009440b8;
        *(undefined2 *)(lVar3 + 0x20) = 10;
        if (lVar4 == 0) goto LAB_009440b4;
        lVar4 = native_System_String__Split_b095f4(lVar4,lVar3,0);
        plVar8 = (long *)(lVar5 + 0x18);
        *plVar8 = lVar4;
        native_sub_4326e0(plVar8,lVar4);
        if (*plVar8 == 0) goto LAB_009440b4;
        *(int *)(param_1 + 0x3c) = *(int *)(param_1 + 0x3c) + *(int *)(*plVar8 + 0x18);
        lVar5 = native_UITextList__get_paragraphs_943424(param_1);
        lVar6 = lVar6 + 1;
        if (lVar5 == 0) goto LAB_009440b4;
      }
      lVar5 = *(long *)(param_1 + 0x48);
      *(undefined4 *)(param_1 + 0x3c) = 0;
      if (lVar5 != 0) {
        iVar1 = *(int *)(lVar5 + 0x18);
        if (iVar1 < 1) goto LAB_00943fac;
        lVar6 = 0;
        iVar7 = 0;
        goto LAB_00943f6c;
      }
    }
  }
  goto LAB_009440b4;
LAB_00943f6c:
  do {
    lVar4 = *(long *)(lVar5 + 0x10);
    if (lVar4 == 0) goto LAB_009440b4;
    if (*(uint *)(lVar4 + 0x18) <= (uint)lVar6) {
LAB_009440b8:
      uVar9 = native_sub_43283c();
                    /* WARNING: Subroutine does not return */
      native_sub_4327dc(uVar9,0);
    }
    lVar4 = *(long *)(lVar4 + lVar6 * 8 + 0x20);
    if ((lVar4 == 0) || (lVar4 = *(long *)(lVar4 + 0x18), lVar4 == 0)) goto LAB_009440b4;
    lVar6 = lVar6 + 1;
    iVar7 = iVar7 + *(int *)(lVar4 + 0x18);
    *(int *)(param_1 + 0x3c) = iVar7;
  } while ((int)lVar6 < iVar1);
LAB_00943fac:
  uVar9 = *(undefined8 *)(param_1 + 0x20);
  if (((*(byte *)(_UnityEngine_Object_TypeInfo_12d54e0 + 0x133) >> 2 & 1) != 0) &&
     (*(int *)(_UnityEngine_Object_TypeInfo_12d54e0 + 0xe0) == 0)) {
    native_sub_4327ec();
  }
  uVar2 = native_UnityEngine_Object__op_Inequality_8d76fc(uVar9,0,0);
  if ((uVar2 & 1) == 0) goto LAB_0094408c;
  plVar8 = *(long **)(param_1 + 0x20);
  if (plVar8 == (long *)0x0) {
LAB_0094400c:
    plVar8 = (long *)0x0;
  }
  else {
    if (*(byte *)(*plVar8 + 300) < *(byte *)(_UIScrollBar_TypeInfo_12d64b0 + 300))
    goto LAB_0094400c;
    if (*(long *)(*(long *)(*plVar8 + 200) +
                  (ulong)*(byte *)(_UIScrollBar_TypeInfo_12d64b0 + 300) * 8 + -8) !=
        _UIScrollBar_TypeInfo_12d64b0) {
      plVar8 = (long *)0x0;
    }
  }
  if (((*(byte *)(_UnityEngine_Object_TypeInfo_12d54e0 + 0x133) >> 2 & 1) != 0) &&
     (*(int *)(_UnityEngine_Object_TypeInfo_12d54e0 + 0xe0) == 0)) {
    native_sub_4327ec();
  }
  uVar2 = native_UnityEngine_Object__op_Inequality_8d76fc(plVar8,0,0);
  if ((uVar2 & 1) != 0) {
    if (*(int *)(param_1 + 0x3c) == 0) {
      fVar10 = 1.0;
    }
    else {
      iVar1 = native_UITextList__get_scrollHeight_943a88(param_1);
      fVar10 = 1.0 - (float)iVar1 / (float)*(int *)(param_1 + 0x3c);
    }
    if (plVar8 == (long *)0x0) {
LAB_009440b4:
                    /* WARNING: Subroutine does not return */
      native_sub_432810();
    }
    native_UIScrollBar__set_barSize_c309c0(fVar10,plVar8,0);
  }
LAB_0094408c:
  native_UITextList__UpdateVisibleText_943768(param_1);
  return;
}



/* UITextList$$Rebuild @ 0x943d84
 * void UITextList__Rebuild (UITextList_o* __this, const MethodInfo* method); */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* UITextList$$Rebuild
   void UITextList__Rebuild (UITextList_o* __this, const MethodInfo* method); */

void native_UITextList__Rebuild_943d84(long param_1)

{
  int iVar1;
  ulong uVar2;
  long lVar3;
  long lVar4;
  long lVar5;
  int iVar6;
  long *plVar7;
  undefined8 uVar8;
  long lVar9;
  float fVar10;
  long lStack_48;
  
  if ((bRam000000000134141c & 1) == 0) {
    native_sub_43273c(&char___TypeInfo_12d3090);
    native_sub_43273c(&NGUIText_TypeInfo_12d53c0);
    native_sub_43273c(&UnityEngine_Object_TypeInfo_12d54e0);
    native_sub_43273c(&UIScrollBar_TypeInfo_12d64b0);
    bRam000000000134141c = 1;
  }
  lStack_48 = 0;
  uVar2 = native_UITextList__get_isValid_9435ac(param_1);
  if ((uVar2 & 1) == 0) {
    return;
  }
  lVar3 = *(long *)(param_1 + 0x18);
  if (lVar3 != 0) {
    *(undefined4 *)(param_1 + 0x40) = *(undefined4 *)(lVar3 + 0xa4);
    *(undefined4 *)(param_1 + 0x44) = *(undefined4 *)(lVar3 + 0xa8);
    native_UILabel__UpdateNGUIText_aeae48(lVar3,0);
    if (((*(byte *)(_NGUIText_TypeInfo_12d53c0 + 0x133) >> 2 & 1) != 0) &&
       (*(int *)(_NGUIText_TypeInfo_12d53c0 + 0xe0) == 0)) {
      native_sub_4327ec();
    }
    lVar3 = _NGUIText_TypeInfo_12d53c0;
    *(undefined4 *)(*(long *)(_NGUIText_TypeInfo_12d53c0 + 0xb8) + 0x44) = 1000000;
    *(undefined4 *)(*(long *)(lVar3 + 0xb8) + 0x4c) = 1000000;
    *(undefined4 *)(param_1 + 0x3c) = 0;
    lVar3 = native_UITextList__get_paragraphs_943424(param_1);
    if (lVar3 != 0) {
      lVar9 = 0;
      while ((int)(uint)lVar9 < *(int *)(lVar3 + 0x18)) {
        if ((*(long *)(param_1 + 0x48) == 0) ||
           (lVar3 = *(long *)(*(long *)(param_1 + 0x48) + 0x10), lVar3 == 0)) goto LAB_009440b4;
        if (*(uint *)(lVar3 + 0x18) <= (uint)lVar9) goto LAB_009440b8;
        lVar3 = *(long *)(lVar3 + lVar9 * 8 + 0x20);
        if (lVar3 == 0) goto LAB_009440b4;
        uVar8 = *(undefined8 *)(lVar3 + 0x10);
        if (((*(byte *)(_NGUIText_TypeInfo_12d53c0 + 0x133) >> 2 & 1) != 0) &&
           (*(int *)(_NGUIText_TypeInfo_12d53c0 + 0xe0) == 0)) {
          native_sub_4327ec();
        }
        native_NGUIText__WrapText_80dd68(uVar8,&lStack_48,0,1,0,0);
        lVar5 = lStack_48;
        lVar4 = native_sub_432750(_char___TypeInfo_12d3090,1);
        if (lVar4 == 0) goto LAB_009440b4;
        if (*(int *)(lVar4 + 0x18) == 0) goto LAB_009440b8;
        *(undefined2 *)(lVar4 + 0x20) = 10;
        if (lVar5 == 0) goto LAB_009440b4;
        lVar5 = native_System_String__Split_b095f4(lVar5,lVar4,0);
        plVar7 = (long *)(lVar3 + 0x18);
        *plVar7 = lVar5;
        native_sub_4326e0(plVar7,lVar5);
        if (*plVar7 == 0) goto LAB_009440b4;
        *(int *)(param_1 + 0x3c) = *(int *)(param_1 + 0x3c) + *(int *)(*plVar7 + 0x18);
        lVar3 = native_UITextList__get_paragraphs_943424(param_1);
        lVar9 = lVar9 + 1;
        if (lVar3 == 0) goto LAB_009440b4;
      }
      lVar3 = *(long *)(param_1 + 0x48);
      *(undefined4 *)(param_1 + 0x3c) = 0;
      if (lVar3 != 0) {
        iVar1 = *(int *)(lVar3 + 0x18);
        if (iVar1 < 1) goto LAB_00943fac;
        lVar9 = 0;
        iVar6 = 0;
        goto LAB_00943f6c;
      }
    }
  }
  goto LAB_009440b4;
LAB_00943f6c:
  do {
    lVar5 = *(long *)(lVar3 + 0x10);
    if (lVar5 == 0) goto LAB_009440b4;
    if (*(uint *)(lVar5 + 0x18) <= (uint)lVar9) {
LAB_009440b8:
      uVar8 = native_sub_43283c();
                    /* WARNING: Subroutine does not return */
      native_sub_4327dc(uVar8,0);
    }
    lVar5 = *(long *)(lVar5 + lVar9 * 8 + 0x20);
    if ((lVar5 == 0) || (lVar5 = *(long *)(lVar5 + 0x18), lVar5 == 0)) goto LAB_009440b4;
    lVar9 = lVar9 + 1;
    iVar6 = iVar6 + *(int *)(lVar5 + 0x18);
    *(int *)(param_1 + 0x3c) = iVar6;
  } while ((int)lVar9 < iVar1);
LAB_00943fac:
  uVar8 = *(undefined8 *)(param_1 + 0x20);
  if (((*(byte *)(_UnityEngine_Object_TypeInfo_12d54e0 + 0x133) >> 2 & 1) != 0) &&
     (*(int *)(_UnityEngine_Object_TypeInfo_12d54e0 + 0xe0) == 0)) {
    native_sub_4327ec();
  }
  uVar2 = native_UnityEngine_Object__op_Inequality_8d76fc(uVar8,0,0);
  if ((uVar2 & 1) == 0) goto LAB_0094408c;
  plVar7 = *(long **)(param_1 + 0x20);
  if (plVar7 == (long *)0x0) {
LAB_0094400c:
    plVar7 = (long *)0x0;
  }
  else {
    if (*(byte *)(*plVar7 + 300) < *(byte *)(_UIScrollBar_TypeInfo_12d64b0 + 300))
    goto LAB_0094400c;
    if (*(long *)(*(long *)(*plVar7 + 200) +
                  (ulong)*(byte *)(_UIScrollBar_TypeInfo_12d64b0 + 300) * 8 + -8) !=
        _UIScrollBar_TypeInfo_12d64b0) {
      plVar7 = (long *)0x0;
    }
  }
  if (((*(byte *)(_UnityEngine_Object_TypeInfo_12d54e0 + 0x133) >> 2 & 1) != 0) &&
     (*(int *)(_UnityEngine_Object_TypeInfo_12d54e0 + 0xe0) == 0)) {
    native_sub_4327ec();
  }
  uVar2 = native_UnityEngine_Object__op_Inequality_8d76fc(plVar7,0,0);
  if ((uVar2 & 1) != 0) {
    if (*(int *)(param_1 + 0x3c) == 0) {
      fVar10 = 1.0;
    }
    else {
      iVar1 = native_UITextList__get_scrollHeight_943a88(param_1);
      fVar10 = 1.0 - (float)iVar1 / (float)*(int *)(param_1 + 0x3c);
    }
    if (plVar7 == (long *)0x0) {
LAB_009440b4:
                    /* WARNING: Subroutine does not return */
      native_sub_432810();
    }
    native_UIScrollBar__set_barSize_c309c0(fVar10,plVar7,0);
  }
LAB_0094408c:
  native_UITextList__UpdateVisibleText_943768(param_1);
  return;
}



/* UITextList$$UpdateVisibleText @ 0x943768
 * void UITextList__UpdateVisibleText (UITextList_o* __this, const MethodInfo* method); */

/* WARNING: Removing unreachable block (ram,0x00432c1c) */
/* WARNING: Removing unreachable block (ram,0x003cc494) */
/* WARNING: Removing unreachable block (ram,0x003cc4b8) */
/* WARNING: Removing unreachable block (ram,0x003cc4d4) */
/* WARNING: Removing unreachable block (ram,0x003cc4dc) */
/* WARNING: Removing unreachable block (ram,0x003cc4f0) */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* UITextList$$UpdateVisibleText
   void UITextList__UpdateVisibleText (UITextList_o* __this, const MethodInfo* method); */

void native_UITextList__UpdateVisibleText_943768
               (undefined1 param_1 [16],float param_2,undefined8 param_3,undefined8 param_4,
               long param_5)

{
  int *piVar1;
  int *piVar2;
  undefined8 *puVar3;
  char cVar4;
  bool bVar5;
  uint uVar6;
  int iVar7;
  int iVar8;
  uint uVar9;
  int iVar10;
  ulong uVar11;
  ulong uVar12;
  long *plVar13;
  long *plVar14;
  long lVar15;
  long lVar16;
  int iVar17;
  uint uVar18;
  ulong uVar19;
  float fVar20;
  ulong uVar21;
  float fVar22;
  float fVar24;
  undefined8 uVar23;
  ulong uVar25;
  undefined8 uVar26;
  float fVar27;
  ulong uVar28;
  float fVar29;
  float fVar30;
  undefined8 uVar31;
  
  if ((bRam000000000134141d & 1) == 0) {
    native_sub_43273c(&System_Text_StringBuilder_TypeInfo_12d5f30);
    native_sub_43273c(&StringLiteral___12eab80);
    native_sub_43273c(&StringLiteral__12eaac0);
    bRam000000000134141d = 1;
  }
  uVar12 = native_UITextList__get_isValid_9435ac(param_5);
  fVar20 = (float)param_4;
  if ((uVar12 & 1) == 0) {
    return;
  }
  plVar13 = *(long **)(param_5 + 0x18);
  if (plVar13 == (long *)0x0) goto LAB_009439d4;
  lVar15 = _StringLiteral__12eaac0;
  if (*(int *)(param_5 + 0x3c) != 0) {
    lVar15 = plVar13[0x15];
    fVar20 = (float)native_UITextList__get_lineHeight_9439e4(param_5);
    iVar7 = native_UnityEngine_Mathf__FloorToInt_8e506c((float)(int)lVar15 / fVar20,0);
    iVar8 = native_UnityEngine_Mathf__Max_8e4cd0(0,*(int *)(param_5 + 0x3c) - iVar7,0);
    uVar12 = (ulong)(uint)(float)iVar8;
    uVar9 = native_UnityEngine_Mathf__RoundToInt_8e50f0(*(float *)(param_5 + 0x38) * (float)iVar8,0)
    ;
    plVar14 = (long *)native_sub_432808(_System_Text_StringBuilder_TypeInfo_12d5f30);
    native_System_Text_StringBuilder___ctor_a4881c(plVar14,0);
    lVar15 = native_UITextList__get_paragraphs_943424(param_5);
    param_2 = (float)uVar12;
    fVar20 = (float)param_4;
    if (lVar15 == 0) {
LAB_009439d4:
                    /* WARNING: Subroutine does not return */
      native_sub_432810();
    }
    iVar8 = *(int *)(lVar15 + 0x18);
    if ((0 < iVar8) && (0 < iVar7)) {
      uVar18 = 0;
      uVar9 = uVar9 & ((int)uVar9 >> 0x1f ^ 0xffffffffU);
      do {
        if ((*(long *)(param_5 + 0x48) == 0) ||
           (lVar15 = *(long *)(*(long *)(param_5 + 0x48) + 0x10), lVar15 == 0)) goto LAB_009439d4;
        if (*(uint *)(lVar15 + 0x18) <= uVar18) {
LAB_009439d8:
          uVar26 = native_sub_43283c();
                    /* WARNING: Subroutine does not return */
          native_sub_4327dc(uVar26,0);
        }
        lVar15 = *(long *)(lVar15 + (long)(int)uVar18 * 8 + 0x20);
        if ((lVar15 == 0) || (lVar16 = *(long *)(lVar15 + 0x18), lVar16 == 0)) goto LAB_009439d4;
        iVar17 = (int)*(undefined8 *)(lVar16 + 0x18);
        if (0 < iVar17) {
          uVar19 = 0;
          while( true ) {
            if (*(uint *)(lVar16 + 0x18) <= uVar19) goto LAB_009439d8;
            uVar6 = uVar9 - 1;
            if ((int)uVar9 < 1) {
              if (plVar14 == (long *)0x0) goto LAB_009439d4;
              uVar26 = *(undefined8 *)(lVar16 + uVar19 * 8 + 0x20);
              iVar10 = native_System_Text_StringBuilder__get_Length_a49204(plVar14,0);
              if (0 < iVar10) {
                native_System_Text_StringBuilder__Append_a49d68(plVar14,_StringLiteral___12eab80,0);
              }
              native_System_Text_StringBuilder__Append_a49d68(plVar14,uVar26,0);
              iVar7 = iVar7 + -1;
              uVar6 = uVar9;
            }
            uVar9 = uVar6;
            uVar19 = uVar19 + 1;
            if (((long)iVar17 <= (long)uVar19) || (iVar7 < 1)) break;
            lVar16 = *(long *)(lVar15 + 0x18);
            if (lVar16 == 0) goto LAB_009439d4;
          }
        }
        param_2 = (float)uVar12;
        fVar20 = (float)param_4;
        uVar18 = uVar18 + 1;
      } while (((int)uVar18 < iVar8) && (0 < iVar7));
    }
    if (plVar14 == (long *)0x0) goto LAB_009439d4;
    plVar13 = *(long **)(param_5 + 0x18);
    lVar15 = (**(code **)(*plVar14 + 0x168))(plVar14,*(undefined8 *)(*plVar14 + 0x170));
    if (plVar13 == (long *)0x0) goto LAB_009439d4;
  }
  if ((bRam0000000001342005 & 1) == 0) {
    native_sub_43273c(&StringLiteral__12eaac0,lVar15,0);
    bRam0000000001342005 = 1;
  }
  uVar12 = native_System_String__op_Equality_afc18c(plVar13[0x35],lVar15,0);
  if ((uVar12 & 1) == 0) {
    uVar12 = native_System_String__IsNullOrEmpty_b09430(lVar15,0);
    lVar16 = plVar13[0x35];
    if ((uVar12 & 1) == 0) {
      uVar12 = native_System_String__op_Inequality_afbbb4(lVar16,lVar15,0);
      if ((uVar12 & 1) == 0) {
        return;
      }
      plVar13[0x35] = lVar15;
    }
    else {
      uVar12 = native_System_String__IsNullOrEmpty_b09430(lVar16,0);
      lVar15 = _StringLiteral__12eaac0;
      if ((uVar12 & 1) != 0) {
        return;
      }
      plVar13[0x35] = _StringLiteral__12eaac0;
    }
    native_sub_4326e0(plVar13 + 0x35,lVar15);
    (**(code **)(*plVar13 + 0x378))(plVar13,*(undefined8 *)(*plVar13 + 0x380));
    native_UILabel__ProcessAndRequest_ae7fdc(plVar13);
    if ((char)plVar13[0x1b] != '\0') {
      if ((bRam000000000134145d & 1) == 0) {
        native_sub_43273c(&Method_UnityEngine_Component_GetComponent_BoxCollider2D____12e2998,0);
        native_sub_43273c(&Method_UnityEngine_Component_GetComponent_BoxCollider____12e2990);
        native_sub_43273c(&NGUITools_TypeInfo_12d53c8);
        native_sub_43273c(&UnityEngine_Object_TypeInfo_12d54e0);
        bRam000000000134145d = 1;
      }
      lVar15 = native_UnityEngine_Component__GetComponent_ActiveAnimation__49daec
                         (plVar13,_Method_UnityEngine_Component_GetComponent_BoxCollider____12e2990)
      ;
      if (((*(byte *)(_UnityEngine_Object_TypeInfo_12d54e0 + 0x133) >> 2 & 1) != 0) &&
         (*(int *)(_UnityEngine_Object_TypeInfo_12d54e0 + 0xe0) == 0)) {
        native_sub_4327ec(_UnityEngine_Object_TypeInfo_12d54e0);
      }
      uVar12 = native_UnityEngine_Object__op_Inequality_8d76fc(lVar15,0,0);
      if ((uVar12 & 1) == 0) {
        lVar15 = native_UnityEngine_Component__GetComponent_ActiveAnimation__49daec
                           (plVar13,
                            _Method_UnityEngine_Component_GetComponent_BoxCollider2D____12e2998);
        fVar29 = (float)param_3;
        if (((*(byte *)(_NGUITools_TypeInfo_12d53c8 + 0x133) >> 2 & 1) != 0) &&
           (*(int *)(_NGUITools_TypeInfo_12d53c8 + 0xe0) == 0)) {
          native_sub_4327ec(_NGUITools_TypeInfo_12d53c8);
        }
        if ((bRam000000000133f58e & 1) == 0) {
          native_sub_43273c(&NGUITools_TypeInfo_12d53c8,lVar15,0);
          native_sub_43273c(&UnityEngine_Object_TypeInfo_12d54e0);
          native_sub_43273c(&StringLiteral_last_change_12f5390);
          bRam000000000133f58e = 1;
        }
        if (((*(byte *)(_UnityEngine_Object_TypeInfo_12d54e0 + 0x133) >> 2 & 1) != 0) &&
           (*(int *)(_UnityEngine_Object_TypeInfo_12d54e0 + 0xe0) == 0)) {
          native_sub_4327ec();
        }
        uVar12 = native_UnityEngine_Object__op_Inequality_8d76fc(lVar15,0,0);
        if ((uVar12 & 1) == 0) {
          return;
        }
        if (((*(byte *)(_UnityEngine_Object_TypeInfo_12d54e0 + 0x133) >> 2 & 1) != 0) &&
           (*(int *)(_UnityEngine_Object_TypeInfo_12d54e0 + 0xe0) == 0)) {
          native_sub_4327ec();
        }
        uVar12 = native_UnityEngine_Object__op_Inequality_8d76fc(plVar13,0,0);
        if ((uVar12 & 1) == 0) {
          return;
        }
        if (plVar13 == (long *)0x0) {
LAB_0072ea2c:
                    /* WARNING: Subroutine does not return */
          native_sub_432810();
        }
        lVar16 = *plVar13;
        if ((((*(float *)((long)plVar13 + 0x104) == 0.0) && (*(float *)(plVar13 + 0x21) == 0.0)) &&
            (param_2 = *(float *)((long)plVar13 + 0x10c), param_2 == 1.0)) &&
           (param_2 = *(float *)(plVar13 + 0x22), param_2 == 1.0)) {
          lVar16 = (**(code **)(lVar16 + 0x1d8))(plVar13,*(undefined8 *)(lVar16 + 0x1e0));
          if (lVar16 == 0) goto LAB_0072ea2c;
          if ((*(uint *)(lVar16 + 0x18) == 0) || (*(uint *)(lVar16 + 0x18) < 3)) {
LAB_0072ea30:
            uVar26 = native_sub_43283c();
                    /* WARNING: Subroutine does not return */
            native_sub_4327dc(uVar26,0);
          }
          uVar26 = *(undefined8 *)(lVar16 + 0x20);
          uVar31 = *(undefined8 *)(lVar16 + 0x38);
          fVar20 = (float)native_UnityEngine_Mathf__Clamp01_8d9d9c(0x3f000000,0);
          if (*(uint *)(lVar16 + 0x18) < 3) goto LAB_0072ea30;
          if (lVar15 == 0) goto LAB_0072ea2c;
          uVar23 = *(undefined8 *)(lVar16 + 0x38);
          fVar27 = (float)uVar26;
          fVar22 = (float)((ulong)uVar26 >> 0x20);
          fVar27 = fVar27 + ((float)uVar31 - fVar27) * fVar20;
          fVar22 = fVar22 + ((float)((ulong)uVar31 >> 0x20) - fVar22) * fVar20;
          uVar26 = CONCAT44(fVar22,fVar27);
          fVar24 = (float)uVar23 - (float)*(undefined8 *)(lVar16 + 0x20);
          fVar20 = (float)((ulong)uVar23 >> 0x20) -
                   (float)((ulong)*(undefined8 *)(lVar16 + 0x20) >> 0x20);
          uVar12 = CONCAT44(fVar20,fVar24);
          fVar29 = (float)native_UnityEngine_Collider2D__get_offset_db8b24(lVar15,0);
          fVar27 = fVar27 - fVar29;
          fVar29 = fVar22 - (float)uVar23;
          if ((fVar27 * fVar27 + fVar29 * fVar29 < 9.9999994e-11) &&
             (uVar31 = uVar26,
             fVar29 = (float)native_UnityEngine_BoxCollider2D__get_size_db8988(lVar15,0),
             fVar24 = fVar24 - fVar29, fVar29 = fVar20 - (float)uVar31,
             fVar24 * fVar24 + fVar29 * fVar29 < 9.9999994e-11)) {
            return;
          }
          native_UnityEngine_Collider2D__set_offset_db8bcc(uVar26,fVar22,lVar15,0);
        }
        else {
          fVar27 = (float)(**(code **)(lVar16 + 0x2f8))(plVar13,*(undefined8 *)(lVar16 + 0x300));
          if (lVar15 == 0) goto LAB_0072ea2c;
          uVar12 = (ulong)(uint)(fVar29 - fVar27);
          fVar30 = (fVar27 + fVar29) * 0.5;
          fVar22 = (param_2 + fVar20) * 0.5;
          fVar20 = fVar20 - param_2;
          fVar24 = (float)native_UnityEngine_Collider2D__get_offset_db8b24(lVar15,0);
          fVar24 = fVar30 - fVar24;
          param_2 = fVar22 - param_2;
          param_2 = param_2 * param_2;
          if ((fVar24 * fVar24 + param_2 < 9.9999994e-11) &&
             (fVar24 = (float)native_UnityEngine_BoxCollider2D__get_size_db8988(lVar15,0),
             fVar24 = (fVar29 - fVar27) - fVar24,
             fVar24 * fVar24 + (fVar20 - param_2) * (fVar20 - param_2) < 9.9999994e-11)) {
            return;
          }
          native_UnityEngine_Collider2D__set_offset_db8bcc(fVar30,fVar22,lVar15,0);
        }
        native_UnityEngine_BoxCollider2D__set_size_db8a30(uVar12,fVar20,lVar15,0);
        if ((*(byte *)(_NGUITools_TypeInfo_12d53c8 + 0x133) >> 2 & 1) == 0) {
          return;
        }
        if (*(int *)(_NGUITools_TypeInfo_12d53c8 + 0xe0) != 0) {
          return;
        }
      }
      else {
        if (((*(byte *)(_NGUITools_TypeInfo_12d53c8 + 0x133) >> 2 & 1) != 0) &&
           (*(int *)(_NGUITools_TypeInfo_12d53c8 + 0xe0) == 0)) {
          native_sub_4327ec();
        }
        if ((bRam000000000133f58d & 1) == 0) {
          native_sub_43273c(&NGUITools_TypeInfo_12d53c8,lVar15,0);
          native_sub_43273c(&UnityEngine_Object_TypeInfo_12d54e0);
          native_sub_43273c(&StringLiteral_last_change_12f5390);
          bRam000000000133f58d = 1;
        }
        if (((*(byte *)(_UnityEngine_Object_TypeInfo_12d54e0 + 0x133) >> 2 & 1) != 0) &&
           (*(int *)(_UnityEngine_Object_TypeInfo_12d54e0 + 0xe0) == 0)) {
          native_sub_4327ec();
        }
        uVar12 = native_UnityEngine_Object__op_Inequality_8d76fc(lVar15,0,0);
        if ((uVar12 & 1) == 0) {
          return;
        }
        if (((*(byte *)(_UnityEngine_Object_TypeInfo_12d54e0 + 0x133) >> 2 & 1) != 0) &&
           (*(int *)(_UnityEngine_Object_TypeInfo_12d54e0 + 0xe0) == 0)) {
          native_sub_4327ec();
        }
        uVar12 = native_UnityEngine_Object__op_Inequality_8d76fc(plVar13,0,0);
        if ((uVar12 & 1) == 0) {
          return;
        }
        if (plVar13 == (long *)0x0) {
LAB_0072e730:
                    /* WARNING: Subroutine does not return */
          native_sub_432810();
        }
        lVar16 = *plVar13;
        if ((((*(float *)((long)plVar13 + 0x104) == 0.0) && (*(float *)(plVar13 + 0x21) == 0.0)) &&
            (param_2 = *(float *)((long)plVar13 + 0x10c), param_2 == 1.0)) &&
           (param_2 = *(float *)(plVar13 + 0x22), param_2 == 1.0)) {
          lVar16 = (**(code **)(lVar16 + 0x1d8))(plVar13,*(undefined8 *)(lVar16 + 0x1e0));
          if (lVar16 == 0) goto LAB_0072e730;
          if ((*(uint *)(lVar16 + 0x18) == 0) || (*(uint *)(lVar16 + 0x18) < 3)) {
LAB_0072e734:
            uVar26 = native_sub_43283c();
                    /* WARNING: Subroutine does not return */
            native_sub_4327dc(uVar26,0);
          }
          uVar26 = *(undefined8 *)(lVar16 + 0x20);
          fVar27 = *(float *)(lVar16 + 0x28);
          uVar31 = *(undefined8 *)(lVar16 + 0x38);
          fVar29 = *(float *)(lVar16 + 0x40);
          fVar20 = (float)native_UnityEngine_Mathf__Clamp01_8d9d9c(0x3f000000,0);
          if (*(uint *)(lVar16 + 0x18) < 3) goto LAB_0072e734;
          if (lVar15 == 0) goto LAB_0072e730;
          fVar22 = (float)uVar26;
          fVar24 = (float)((ulong)uVar26 >> 0x20);
          fVar29 = fVar29 - fVar27;
          uVar11 = (ulong)(uint)fVar29;
          fVar24 = fVar24 + ((float)((ulong)uVar31 >> 0x20) - fVar24) * fVar20;
          uVar23 = CONCAT44(fVar24,fVar22 + ((float)uVar31 - fVar22) * fVar20);
          uVar28 = (ulong)(uint)(fVar27 + fVar29 * fVar20);
          fVar27 = (float)((ulong)*(undefined8 *)(lVar16 + 0x38) >> 0x20) -
                   (float)((ulong)*(undefined8 *)(lVar16 + 0x20) >> 0x20);
          uVar21 = CONCAT44(fVar27,(float)*(undefined8 *)(lVar16 + 0x38) -
                                   (float)*(undefined8 *)(lVar16 + 0x20));
          fVar20 = *(float *)(lVar16 + 0x40) - *(float *)(lVar16 + 0x28);
          uVar26 = uVar23;
          uVar31 = native_UnityEngine_BoxCollider__get_center_dba95c(lVar15,0);
          uVar12 = (ulong)(uint)fVar24;
          uVar19 = uVar12;
          uVar25 = uVar28;
          uVar11 = native_UnityEngine_Vector3__op_Inequality_776c48
                             (uVar23,uVar12,uVar28,uVar31,uVar26,uVar11,0);
          if ((uVar11 & 1) == 0) {
            uVar26 = native_UnityEngine_BoxCollider__get_size_dbaab4(lVar15,0);
            uVar19 = native_UnityEngine_Vector3__op_Inequality_776c48
                               (uVar21,fVar27,fVar20,uVar26,uVar19,uVar25,0);
            if ((uVar19 & 1) == 0) {
              return;
            }
          }
          native_UnityEngine_BoxCollider__set_center_dbaa0c(uVar23,uVar12,uVar28,lVar15,0);
        }
        else {
          fVar29 = (float)(**(code **)(lVar16 + 0x2f8))(plVar13,*(undefined8 *)(lVar16 + 0x300));
          if (lVar15 == 0) goto LAB_0072e730;
          uVar21 = (ulong)(uint)((float)param_3 - fVar29);
          fVar27 = fVar20 - param_2;
          uVar19 = (ulong)(uint)(param_2 + fVar20);
          uVar25 = (ulong)(uint)((param_2 + fVar20) * 0.5);
          fVar29 = (fVar29 + (float)param_3) * 0.5;
          uVar26 = native_UnityEngine_BoxCollider__get_center_dba95c(lVar15,0);
          uVar31 = 0;
          fVar20 = 0.0;
          uVar12 = uVar25;
          uVar19 = native_UnityEngine_Vector3__op_Inequality_776c48
                             (fVar29,uVar25,0,uVar26,uVar19,param_3,0);
          if ((uVar19 & 1) == 0) {
            uVar26 = native_UnityEngine_BoxCollider__get_size_dbaab4(lVar15,0);
            uVar12 = native_UnityEngine_Vector3__op_Inequality_776c48
                               (uVar21,fVar27,0,uVar26,uVar12,uVar31,0);
            if ((uVar12 & 1) == 0) {
              return;
            }
          }
          native_UnityEngine_BoxCollider__set_center_dbaa0c(fVar29,uVar25,0,lVar15,0);
        }
        native_UnityEngine_BoxCollider__set_size_dbab64(uVar21,fVar27,fVar20,lVar15,0);
        if ((*(byte *)(_NGUITools_TypeInfo_12d53c8 + 0x133) >> 2 & 1) == 0) {
          return;
        }
        if (*(int *)(_NGUITools_TypeInfo_12d53c8 + 0xe0) != 0) {
          return;
        }
      }
      lVar15 = _NGUITools_TypeInfo_12d53c8;
      if ((*(byte *)(_NGUITools_TypeInfo_12d53c8 + 0x133) >> 2 & 1) == 0) {
        return;
      }
      piVar1 = (int *)(_NGUITools_TypeInfo_12d53c8 + 0xe0);
      while (*piVar1 == 1) {
        cVar4 = '\x01';
        bVar5 = (bool)ExclusiveMonitorPass(piVar1,0x10);
        if (bVar5) {
          *piVar1 = 1;
          cVar4 = ExclusiveMonitorsStatus();
        }
        if (cVar4 == '\0') {
          DataMemoryBarrier(2,3);
          return;
        }
      }
      ClearExclusiveLocal();
      DataMemoryBarrier(2,3);
      lVar16 = native_sub_432c38();
      if (lVar16 == lRam00000000013451d0) {
        iRam00000000013451d8 = iRam00000000013451d8 + 1;
      }
      else {
        iVar7 = 0;
        do {
          iVar8 = iRam0000000001345190;
          if (iRam0000000001345190 == iVar7) {
            cVar4 = '\x01';
            bVar5 = (bool)ExclusiveMonitorPass(0x1345190,0x10);
            if (bVar5) {
              cVar4 = ExclusiveMonitorsStatus();
              iRam0000000001345190 = iVar7 + 1;
            }
            if (cVar4 != '\0') goto code_r0x003cc248;
            bVar5 = true;
          }
          else {
            ClearExclusiveLocal();
code_r0x003cc248:
            bVar5 = false;
          }
        } while ((iVar8 != 2) && (iVar7 = iVar8, !bVar5));
        while (iVar8 != 0) {
          native_sub_432bb4(0x1345190,2,0xffffffff);
          do {
            iVar8 = iRam0000000001345190;
            cVar4 = '\x01';
            bVar5 = (bool)ExclusiveMonitorPass(0x1345190,0x10);
            if (bVar5) {
              iRam0000000001345190 = 2;
              cVar4 = ExclusiveMonitorsStatus();
            }
          } while (cVar4 != '\0');
        }
        iRam00000000013451d8 = 1;
        lRam00000000013451d0 = lVar16;
      }
      while (*piVar1 == 1) {
        cVar4 = '\x01';
        bVar5 = (bool)ExclusiveMonitorPass(piVar1,0x10);
        if (bVar5) {
          *piVar1 = 1;
          cVar4 = ExclusiveMonitorsStatus();
        }
        if (cVar4 == '\0') {
          DataMemoryBarrier(2,3);
          if (iRam00000000013451d8 < 1) {
            return;
          }
          if (iRam00000000013451d8 + -1 != 0) {
            iRam00000000013451d8 = iRam00000000013451d8 + -1;
            return;
          }
          lRam00000000013451d0 = 0;
          iRam00000000013451d8 = 0;
          do {
            iVar7 = iRam0000000001345190;
            cVar4 = '\x01';
            bVar5 = (bool)ExclusiveMonitorPass(0x1345190,0x10);
            if (bVar5) {
              iRam0000000001345190 = 0;
              cVar4 = ExclusiveMonitorsStatus();
            }
          } while (cVar4 != '\0');
          if (iVar7 != 2) {
            lRam00000000013451d0 = 0;
            iRam00000000013451d8 = 0;
            return;
          }
          (*(code *)&DAT_0155b260)(0x62,0x1345190,0x81,1,0,0,0);
          return;
        }
      }
      ClearExclusiveLocal();
      DataMemoryBarrier(2,3);
      piVar2 = (int *)(lVar15 + 0xdc);
      do {
        if (*piVar2 != 1) {
          ClearExclusiveLocal();
          DataMemoryBarrier(2,3);
          puVar3 = (undefined8 *)(lVar15 + 0xe8);
          uVar26 = native_sub_3aad3c();
          do {
            cVar4 = '\x01';
            bVar5 = (bool)ExclusiveMonitorPass(puVar3,0x10);
            if (bVar5) {
              *puVar3 = uVar26;
              cVar4 = ExclusiveMonitorsStatus();
            }
          } while (cVar4 != '\0');
          DataMemoryBarrier(2,3);
          do {
            cVar4 = '\x01';
            bVar5 = (bool)ExclusiveMonitorPass(piVar2,0x10);
            if (bVar5) {
              *piVar2 = 1;
              cVar4 = ExclusiveMonitorsStatus();
            }
          } while (cVar4 != '\0');
          DataMemoryBarrier(2,3);
          iVar7 = iRam00000000013451d8 + -1;
          if ((0 < iRam00000000013451d8) && (iRam00000000013451d8 = iVar7, iVar7 == 0)) {
            lRam00000000013451d0 = 0;
            iRam00000000013451d8 = 0;
            do {
              iVar7 = iRam0000000001345190;
              cVar4 = '\x01';
              bVar5 = (bool)ExclusiveMonitorPass(0x1345190,0x10);
              if (bVar5) {
                iRam0000000001345190 = 0;
                cVar4 = ExclusiveMonitorsStatus();
              }
            } while (cVar4 != '\0');
            if (iVar7 == 2) {
              native_sub_432c0c(0x1345190,1,0);
            }
          }
          if (((*(byte *)(lVar15 + 0x133) >> 2 & 1) != 0) &&
             (lVar15 = native_sub_3c573c(lVar15,&UNK_00edd9af,0xffffffff,0x800), lVar15 != 0)) {
            native_sub_3d704c(lVar15,0,0,&stack0xffffffffffffffb8);
          }
          do {
            cVar4 = '\x01';
            bVar5 = (bool)ExclusiveMonitorPass(piVar1,0x10);
            if (bVar5) {
              *piVar1 = 1;
              cVar4 = ExclusiveMonitorsStatus();
            }
          } while (cVar4 != '\0');
          DataMemoryBarrier(2,3);
          do {
            cVar4 = '\x01';
            bVar5 = (bool)ExclusiveMonitorPass(puVar3,0x10);
            if (bVar5) {
              *puVar3 = 0;
              cVar4 = ExclusiveMonitorsStatus();
            }
          } while (cVar4 != '\0');
          DataMemoryBarrier(2,3);
          return;
        }
        cVar4 = '\x01';
        bVar5 = (bool)ExclusiveMonitorPass(piVar2,0x10);
        if (bVar5) {
          *piVar2 = 1;
          cVar4 = ExclusiveMonitorsStatus();
        }
      } while (cVar4 != '\0');
      DataMemoryBarrier(2,3);
      iVar7 = iRam00000000013451d8 + -1;
      if ((0 < iRam00000000013451d8) && (iRam00000000013451d8 = iVar7, iVar7 == 0)) {
        lRam00000000013451d0 = 0;
        iRam00000000013451d8 = 0;
        do {
          iVar7 = iRam0000000001345190;
          cVar4 = '\x01';
          bVar5 = (bool)ExclusiveMonitorPass(0x1345190,0x10);
          if (bVar5) {
            iRam0000000001345190 = 0;
            cVar4 = ExclusiveMonitorsStatus();
          }
        } while (cVar4 != '\0');
        if (iVar7 == 2) {
          native_sub_432c0c(0x1345190,1,0);
        }
      }
      lVar16 = native_sub_3aad3c();
      plVar13 = (long *)(lVar15 + 0xe8);
      do {
        lVar15 = *plVar13;
        if (lVar15 != lVar16) {
          ClearExclusiveLocal();
          break;
        }
        cVar4 = '\x01';
        bVar5 = (bool)ExclusiveMonitorPass(plVar13,0x10);
        if (bVar5) {
          *plVar13 = lVar16;
          cVar4 = ExclusiveMonitorsStatus();
        }
      } while (cVar4 != '\0');
      DataMemoryBarrier(2,3);
      if (lVar15 != lVar16) {
        do {
          iVar7 = *piVar1;
          if (iVar7 != 1) {
            ClearExclusiveLocal();
            break;
          }
          cVar4 = '\x01';
          bVar5 = (bool)ExclusiveMonitorPass(piVar1,0x10);
          if (bVar5) {
            *piVar1 = 1;
            cVar4 = ExclusiveMonitorsStatus();
          }
        } while (cVar4 != '\0');
        DataMemoryBarrier(2,3);
        while (iVar7 == 0) {
          native_sub_3a30dc(1,0);
          do {
            iVar7 = *piVar1;
            if (iVar7 != 1) {
              ClearExclusiveLocal();
              break;
            }
            cVar4 = '\x01';
            bVar5 = (bool)ExclusiveMonitorPass(piVar1,0x10);
            if (bVar5) {
              *piVar1 = 1;
              cVar4 = ExclusiveMonitorsStatus();
            }
          } while (cVar4 != '\0');
          DataMemoryBarrier(2,3);
        }
      }
      return;
    }
  }
  return;
}



/* UITextList$$.ctor @ 0x944310
 * void UITextList___ctor (UITextList_o* __this, const MethodInfo* method); */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* UITextList$$.ctor
   void UITextList___ctor (UITextList_o* __this, const MethodInfo* method); */

undefined1  [16] native_UITextList___ctor_944310(ulong param_1)

{
  long lVar1;
  undefined8 uVar2;
  undefined1 auVar3 [16];
  
  if ((bRam000000000134141e & 1) == 0) {
    native_sub_43273c(&char___TypeInfo_12d3090);
    bRam000000000134141e = 1;
  }
  *(undefined4 *)(param_1 + 0x2c) = 100;
  lVar1 = native_sub_432750(_char___TypeInfo_12d3090,1);
  if (lVar1 != 0) {
    if (*(int *)(lVar1 + 0x18) != 0) {
      *(undefined2 *)(lVar1 + 0x20) = 10;
      *(long *)(param_1 + 0x30) = lVar1;
      native_sub_4326e0();
      if ((bRam0000000001340ae0 & 1) == 0) {
        native_sub_43273c(&UnityEngine_Object_TypeInfo_12d54e0,0);
        bRam0000000001340ae0 = 1;
      }
      if (((*(byte *)(_UnityEngine_Object_TypeInfo_12d54e0 + 0x133) >> 2 & 1) != 0) &&
         (*(int *)(_UnityEngine_Object_TypeInfo_12d54e0 + 0xe0) == 0)) {
        native_sub_4327ec();
      }
      auVar3._8_8_ = 0;
      auVar3._0_8_ = param_1;
      return auVar3;
    }
    uVar2 = native_sub_43283c();
                    /* WARNING: Subroutine does not return */
    native_sub_4327dc(uVar2,0);
  }
                    /* WARNING: Subroutine does not return */
  native_sub_432810();
}



/* UITextList$$.cctor @ 0x9443a4
 * void UITextList___cctor (const MethodInfo* method); */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* UITextList$$.cctor
   void UITextList___cctor (const MethodInfo* method); */

void native_UITextList___cctor_9443a4(void)

{
  ulong *puVar1;
  char cVar2;
  bool bVar3;
  undefined8 uVar4;
  undefined8 *puVar5;
  
  if ((bRam000000000134141f & 1) == 0) {
    native_sub_43273c(&
                      Method_System_Collections_Generic_Dictionary_string__BetterList_UITextList_Paragraph____ctor___12d96c0
                     );
    native_sub_43273c(&
                      System_Collections_Generic_Dictionary_string__BetterList_UITextList_Paragraph___TypeInfo_12d2350
                     );
    native_sub_43273c(&UITextList_TypeInfo_12d64d8);
    bRam000000000134141f = 1;
  }
  uVar4 = native_sub_432808(
                           _System_Collections_Generic_Dictionary_string__BetterList_UITextList_Paragraph___TypeInfo_12d2350
                           );
  native_System_Collections_Generic_Dictionary_Action__LinkedListNode_Action_____ctor_cda13c
            (uVar4,
             _Method_System_Collections_Generic_Dictionary_string__BetterList_UITextList_Paragraph____ctor___12d96c0
            );
  puVar5 = *(undefined8 **)(_UITextList_TypeInfo_12d64d8 + 0xb8);
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


