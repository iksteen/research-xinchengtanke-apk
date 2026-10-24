/* ARM64 IL2CPP native pseudocode from Ghidra.
 * Recovered implementation, not original C# source.
 * Function boundaries follow the IL2CPP method address table. */


/* TMPro.Examples.TMP_TextSelector_A$$Awake @ 0x6dc9a4
 * void TMPro_Examples_TMP_TextSelector_A__Awake (TMPro_Examples_TMP_TextSelector_A_o* __this, const MethodInfo* method); */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* TMPro.Examples.TMP_TextSelector_A$$Awake
   void TMPro_Examples_TMP_TextSelector_A__Awake (TMPro_Examples_TMP_TextSelector_A_o* __this, const
   MethodInfo* method); */

void native_TMPro_Examples_TMP_TextSelector_A__Awake_6dc9a4(long param_1)

{
  long lVar1;
  undefined8 uVar2;
  long *plVar3;
  
  if ((bRam000000000133f369 & 1) == 0) {
    native_sub_43273c(&Method_UnityEngine_GameObject_GetComponent_TextMeshPro____12e4a68);
    bRam000000000133f369 = 1;
  }
  lVar1 = native_UnityEngine_Component__get_gameObject_8da66c(param_1,0);
  if (lVar1 != 0) {
    lVar1 = native_UnityEngine_GameObject__GetComponent_BE2_BlockSectionHeader_Custom__4a2214
                      (lVar1,_Method_UnityEngine_GameObject_GetComponent_TextMeshPro____12e4a68);
    plVar3 = (long *)(param_1 + 0x18);
    *plVar3 = lVar1;
    native_sub_4326e0(plVar3,lVar1);
    uVar2 = native_UnityEngine_Camera__get_main_8d93c0(0);
    *(undefined8 *)(param_1 + 0x20) = uVar2;
    native_sub_4326e0(param_1 + 0x20);
    plVar3 = (long *)*plVar3;
    if (plVar3 != (long *)0x0) {
                    /* WARNING: Could not recover jumptable at 0x006dca40. Too many branches */
                    /* WARNING: Treating indirect jump as call */
      (**(code **)(*plVar3 + 0x7d8))(plVar3,0,0,*(undefined8 *)(*plVar3 + 0x7e0));
      return;
    }
  }
                    /* WARNING: Subroutine does not return */
  native_sub_432810();
}



/* TMPro.Examples.TMP_TextSelector_A$$LateUpdate @ 0x6dca48
 * void TMPro_Examples_TMP_TextSelector_A__LateUpdate (TMPro_Examples_TMP_TextSelector_A_o* __this, const MethodInfo* method); */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* TMPro.Examples.TMP_TextSelector_A$$LateUpdate
   void TMPro_Examples_TMP_TextSelector_A__LateUpdate (TMPro_Examples_TMP_TextSelector_A_o* __this,
   const MethodInfo* method); */

void native_TMPro_Examples_TMP_TextSelector_A__LateUpdate_6dca48
               (undefined1 param_1 [16],undefined8 param_2,undefined8 param_3,long param_4)

{
  int iVar1;
  uint uVar2;
  undefined4 uVar3;
  undefined4 uVar4;
  undefined4 uVar5;
  undefined8 uVar6;
  undefined8 uVar7;
  ulong uVar8;
  long *plVar9;
  long lVar10;
  long lVar11;
  long lVar12;
  uint uVar13;
  undefined8 uVar14;
  ulong uVar15;
  undefined4 auStack_a8 [2];
  undefined8 uStack_a0;
  undefined4 uStack_98;
  undefined8 uStack_90;
  undefined8 uStack_88;
  undefined8 uStack_80;
  undefined8 uStack_78;
  undefined8 uStack_70;
  undefined4 auStack_58 [2];
  
  if ((bRam000000000133f36a & 1) == 0) {
    native_sub_43273c(&UnityEngine_RectTransformUtility_TypeInfo_12d58f8);
    native_sub_43273c(&TMPro_TMP_TextUtilities_TypeInfo_12d60a8);
    native_sub_43273c(&StringLiteral_id_01_12f4cd8);
    native_sub_43273c(&StringLiteral_id_02_12f4ce0);
    bRam000000000133f36a = 1;
  }
  auStack_58[0] = 0;
  uStack_70 = 0;
  uStack_98 = 0;
  uStack_a0 = 0;
  uStack_88 = 0;
  uStack_90 = 0;
  uStack_78 = 0;
  uStack_80 = 0;
  auStack_a8[0] = 0;
  *(undefined1 *)(param_4 + 0x28) = 0;
  if (*(long *)(param_4 + 0x18) != 0) {
    uVar6 = native_TMPro_TMP_Text__get_rectTransform_4b9320(*(long *)(param_4 + 0x18),0);
    uVar14 = native_UnityEngine_Input__get_mousePosition_dbdd8c(0);
    uVar7 = native_UnityEngine_Camera__get_main_8d93c0(0);
    if (((*(byte *)(_TMPro_TMP_TextUtilities_TypeInfo_12d60a8 + 0x133) >> 2 & 1) != 0) &&
       (*(int *)(_TMPro_TMP_TextUtilities_TypeInfo_12d60a8 + 0xe0) == 0)) {
      native_sub_4327ec(_TMPro_TMP_TextUtilities_TypeInfo_12d60a8);
    }
    uVar8 = native_TMPro_TMP_TextUtilities__IsIntersectingRectTransform_6a9928
                      (uVar14,param_2,param_3,uVar6,uVar7,0);
    if ((uVar8 & 1) == 0) {
      if (*(char *)(param_4 + 0x28) == '\0') {
        return;
      }
    }
    else {
      *(undefined1 *)(param_4 + 0x28) = 1;
    }
    uVar7 = *(undefined8 *)(param_4 + 0x18);
    uVar14 = native_UnityEngine_Input__get_mousePosition_dbdd8c(0);
    uVar6 = native_UnityEngine_Camera__get_main_8d93c0(0);
    if (((*(byte *)(_TMPro_TMP_TextUtilities_TypeInfo_12d60a8 + 0x133) >> 2 & 1) != 0) &&
       (*(int *)(_TMPro_TMP_TextUtilities_TypeInfo_12d60a8 + 0xe0) == 0)) {
      native_sub_4327ec(_TMPro_TMP_TextUtilities_TypeInfo_12d60a8);
    }
    uVar2 = native_TMPro_TMP_TextUtilities__FindIntersectingCharacter_6a9a58
                      (uVar14,param_2,param_3,uVar7,uVar6,1,0);
    if (((uVar2 != 0xffffffff) && (uVar2 != *(uint *)(param_4 + 0x30))) &&
       ((uVar8 = native_UnityEngine_Input__GetKey_dbdbe4(0x130,0), (uVar8 & 1) != 0 ||
        (uVar8 = native_UnityEngine_Input__GetKey_dbdbe4(0x12f,0), (uVar8 & 1) != 0)))) {
      *(uint *)(param_4 + 0x30) = uVar2;
      if (((*(long *)(param_4 + 0x18) == 0) ||
          (lVar10 = *(long *)(*(long *)(param_4 + 0x18) + 0x360), lVar10 == 0)) ||
         (lVar10 = *(long *)(lVar10 + 0x38), lVar10 == 0)) goto LAB_006dd164;
      if (*(uint *)(lVar10 + 0x18) <= uVar2) goto LAB_006dd158;
      lVar10 = lVar10 + (long)(int)uVar2 * 0x178;
      uVar2 = *(uint *)(lVar10 + 0x58);
      uVar13 = *(uint *)(lVar10 + 0x6c);
      uVar3 = native_UnityEngine_Random__Range_7630a8(0,0xff,0);
      uVar4 = native_UnityEngine_Random__Range_7630a8(0,0xff,0);
      uVar5 = native_UnityEngine_Random__Range_7630a8(0,0xff,0);
      native_UnityEngine_Color32___ctor_8d9fa0(auStack_58,uVar3,uVar4,uVar5,0xff,0);
      if (((*(long *)(param_4 + 0x18) == 0) ||
          (lVar10 = *(long *)(*(long *)(param_4 + 0x18) + 0x360), lVar10 == 0)) ||
         (lVar10 = *(long *)(lVar10 + 0x60), lVar10 == 0)) goto LAB_006dd164;
      if (*(uint *)(lVar10 + 0x18) <= uVar2) goto LAB_006dd158;
      lVar10 = *(long *)(lVar10 + (long)(int)uVar2 * 0x50 + 0x58);
      if (lVar10 == 0) goto LAB_006dd164;
      if (*(uint *)(lVar10 + 0x18) <= uVar13) goto LAB_006dd158;
      *(undefined4 *)(lVar10 + (long)(int)uVar13 * 4 + 0x20) = auStack_58[0];
      if (*(uint *)(lVar10 + 0x18) <= uVar13 + 1) goto LAB_006dd158;
      *(undefined4 *)(lVar10 + (long)(int)(uVar13 + 1) * 4 + 0x20) = auStack_58[0];
      if (*(uint *)(lVar10 + 0x18) <= uVar13 + 2) goto LAB_006dd158;
      *(undefined4 *)(lVar10 + (long)(int)(uVar13 + 2) * 4 + 0x20) = auStack_58[0];
      if (*(uint *)(lVar10 + 0x18) <= uVar13 + 3) goto LAB_006dd158;
      *(undefined4 *)(lVar10 + (long)(int)(uVar13 + 3) * 4 + 0x20) = auStack_58[0];
      if (((*(long *)(param_4 + 0x18) == 0) ||
          (lVar11 = *(long *)(*(long *)(param_4 + 0x18) + 0x360), lVar11 == 0)) ||
         (lVar11 = *(long *)(lVar11 + 0x60), lVar11 == 0)) goto LAB_006dd164;
      if (*(uint *)(lVar11 + 0x18) <= uVar2) goto LAB_006dd158;
      lVar11 = *(long *)(lVar11 + (long)(int)uVar2 * 0x50 + 0x20);
      if (lVar11 == 0) goto LAB_006dd164;
      native_UnityEngine_Mesh__set_colors32_8e781c(lVar11,lVar10,0);
    }
    uVar6 = *(undefined8 *)(param_4 + 0x18);
    uVar14 = native_UnityEngine_Input__get_mousePosition_dbdd8c(0);
    uVar7 = *(undefined8 *)(param_4 + 0x20);
    if (((*(byte *)(_TMPro_TMP_TextUtilities_TypeInfo_12d60a8 + 0x133) >> 2 & 1) != 0) &&
       (*(int *)(_TMPro_TMP_TextUtilities_TypeInfo_12d60a8 + 0xe0) == 0)) {
      native_sub_4327ec();
    }
    uVar2 = native_TMPro_TMP_TextUtilities__FindIntersectingLink_6aa9c0
                      (uVar14,param_2,param_3,uVar6,uVar7,0);
    if (uVar2 == 0xffffffff) {
      if (*(uint *)(param_4 + 0x2c) != 0xffffffff) {
        *(undefined4 *)(param_4 + 0x2c) = 0xffffffff;
      }
    }
    else if (uVar2 != *(uint *)(param_4 + 0x2c)) {
      lVar10 = *(long *)(param_4 + 0x18);
      *(uint *)(param_4 + 0x2c) = uVar2;
      if (((lVar10 == 0) || (*(long *)(lVar10 + 0x360) == 0)) ||
         (lVar11 = *(long *)(*(long *)(lVar10 + 0x360) + 0x48), lVar11 == 0)) goto LAB_006dd164;
      if (*(uint *)(lVar11 + 0x18) <= uVar2) goto LAB_006dd158;
      lVar11 = lVar11 + (long)(int)uVar2 * 0x28;
      uStack_70 = *(undefined8 *)(lVar11 + 0x40);
      uStack_88 = *(undefined8 *)(lVar11 + 0x28);
      param_2 = *(undefined8 *)(lVar11 + 0x20);
      uStack_78 = *(undefined8 *)(lVar11 + 0x38);
      uStack_80 = *(undefined8 *)(lVar11 + 0x30);
      uStack_90 = param_2;
      uVar6 = native_TMPro_TMP_Text__get_rectTransform_4b9320(lVar10,0);
      uVar14 = native_UnityEngine_Input__get_mousePosition_dbdd8c(0);
      uVar7 = *(undefined8 *)(param_4 + 0x20);
      if (((*(byte *)(_UnityEngine_RectTransformUtility_TypeInfo_12d58f8 + 0x133) >> 2 & 1) != 0) &&
         (*(int *)(_UnityEngine_RectTransformUtility_TypeInfo_12d58f8 + 0xe0) == 0)) {
        native_sub_4327ec();
      }
      native_UnityEngine_RectTransformUtility__ScreenPointToWorldPointInRectangle_db7dfc
                (uVar14,param_2,uVar6,uVar7,&uStack_a0,0);
      lVar10 = native_TMPro_TMP_LinkInfo__GetLinkID_8963bc(&uStack_90,0);
      if ((lVar10 != 0) &&
         (uVar8 = native_System_String__op_Equality_afc18c(lVar10,_StringLiteral_id_01_12f4cd8,0),
         (uVar8 & 1) == 0)) {
        native_System_String__op_Equality_afc18c(lVar10,_StringLiteral_id_02_12f4ce0,0);
      }
    }
    uVar7 = *(undefined8 *)(param_4 + 0x18);
    uVar14 = native_UnityEngine_Input__get_mousePosition_dbdd8c(0);
    uVar6 = native_UnityEngine_Camera__get_main_8d93c0(0);
    if (((*(byte *)(_TMPro_TMP_TextUtilities_TypeInfo_12d60a8 + 0x133) >> 2 & 1) != 0) &&
       (*(int *)(_TMPro_TMP_TextUtilities_TypeInfo_12d60a8 + 0xe0) == 0)) {
      native_sub_4327ec(_TMPro_TMP_TextUtilities_TypeInfo_12d60a8);
    }
    uVar2 = native_TMPro_TMP_TextUtilities__FindIntersectingWord_6a9c80
                      (uVar14,param_2,param_3,uVar7,uVar6,0);
    if ((uVar2 == 0xffffffff) || (uVar2 == *(uint *)(param_4 + 0x34))) {
      return;
    }
    lVar10 = *(long *)(param_4 + 0x18);
    *(uint *)(param_4 + 0x34) = uVar2;
    if (((lVar10 != 0) && (*(long *)(lVar10 + 0x360) != 0)) &&
       (lVar11 = *(long *)(*(long *)(lVar10 + 0x360) + 0x40), lVar11 != 0)) {
      if (*(uint *)(lVar11 + 0x18) <= uVar2) {
LAB_006dd158:
        uVar6 = native_sub_43283c();
                    /* WARNING: Subroutine does not return */
        native_sub_4327dc(uVar6,0);
      }
      lVar11 = lVar11 + (long)(int)uVar2 * 0x18;
      uVar2 = *(uint *)(lVar11 + 0x28);
      iVar1 = *(int *)(lVar11 + 0x30);
      lVar10 = native_TMPro_TextMeshPro__get_transform_6af9f0(lVar10,0);
      if (((*(long *)(param_4 + 0x18) != 0) &&
          (lVar11 = *(long *)(*(long *)(param_4 + 0x18) + 0x360), lVar11 != 0)) &&
         (lVar11 = *(long *)(lVar11 + 0x38), lVar11 != 0)) {
        if (*(uint *)(lVar11 + 0x18) <= uVar2) goto LAB_006dd158;
        if (lVar10 != 0) {
          lVar11 = lVar11 + (long)(int)uVar2 * 0x178;
          uVar8 = (ulong)*(uint *)(lVar11 + 0x120);
          uVar15 = (ulong)*(uint *)(lVar11 + 0x124);
          uVar6 = native_UnityEngine_Transform__TransformPoint_7728d8
                            (*(undefined4 *)(lVar11 + 0x11c),uVar8,uVar15,lVar10,0);
          lVar10 = native_UnityEngine_Camera__get_main_8d93c0(0);
          if (lVar10 != 0) {
            native_UnityEngine_Camera__WorldToScreenPoint_8d9158(uVar6,uVar8,uVar15,lVar10,0);
            if (((*(long *)(param_4 + 0x18) != 0) &&
                (lVar10 = *(long *)(*(long *)(param_4 + 0x18) + 0x360), lVar10 != 0)) &&
               (lVar10 = *(long *)(lVar10 + 0x60), lVar10 != 0)) {
              if (*(int *)(lVar10 + 0x18) == 0) goto LAB_006dd158;
              lVar10 = *(long *)(lVar10 + 0x58);
              uVar3 = native_UnityEngine_Random__Range_7630a8(0,0xff,0);
              uVar4 = native_UnityEngine_Random__Range_7630a8(0,0xff,0);
              uVar5 = native_UnityEngine_Random__Range_7630a8(0,0xff,0);
              native_UnityEngine_Color32___ctor_8d9fa0(auStack_a8,uVar3,uVar4,uVar5,0xff,0);
              plVar9 = *(long **)(param_4 + 0x18);
              if (plVar9 != (long *)0x0) {
                lVar11 = 0;
                while (lVar11 < iVar1) {
                  if ((plVar9[0x6c] == 0) || (lVar12 = *(long *)(plVar9[0x6c] + 0x38), lVar12 == 0))
                  goto LAB_006dd164;
                  uVar13 = uVar2 + (int)lVar11;
                  if (*(uint *)(lVar12 + 0x18) <= uVar13) goto LAB_006dd158;
                  if (lVar10 == 0) goto LAB_006dd164;
                  uVar13 = *(uint *)(lVar12 + (long)(int)uVar13 * 0x178 + 0x6c);
                  if (*(uint *)(lVar10 + 0x18) <= uVar13) goto LAB_006dd158;
                  *(undefined4 *)(lVar10 + (long)(int)uVar13 * 4 + 0x20) = auStack_a8[0];
                  if (*(uint *)(lVar10 + 0x18) <= uVar13 + 1) goto LAB_006dd158;
                  *(undefined4 *)(lVar10 + (long)(int)(uVar13 + 1) * 4 + 0x20) = auStack_a8[0];
                  if (*(uint *)(lVar10 + 0x18) <= uVar13 + 2) goto LAB_006dd158;
                  *(undefined4 *)(lVar10 + (long)(int)(uVar13 + 2) * 4 + 0x20) = auStack_a8[0];
                  if (*(uint *)(lVar10 + 0x18) <= uVar13 + 3) goto LAB_006dd158;
                  lVar11 = lVar11 + 1;
                  *(undefined4 *)(lVar10 + (long)(int)(uVar13 + 3) * 4 + 0x20) = auStack_a8[0];
                  plVar9 = *(long **)(param_4 + 0x18);
                  if (plVar9 == (long *)0x0) goto LAB_006dd164;
                }
                lVar11 = (**(code **)(*plVar9 + 0x608))(plVar9,*(undefined8 *)(*plVar9 + 0x610));
                if (lVar11 != 0) {
                  native_UnityEngine_Mesh__set_colors32_8e781c(lVar11,lVar10,0);
                  return;
                }
              }
            }
          }
        }
      }
    }
  }
LAB_006dd164:
                    /* WARNING: Subroutine does not return */
  native_sub_432810();
}



/* TMPro.Examples.TMP_TextSelector_A$$OnPointerEnter @ 0x6dd168
 * void TMPro_Examples_TMP_TextSelector_A__OnPointerEnter (TMPro_Examples_TMP_TextSelector_A_o* __this, UnityEngine_EventSystems_PointerEventData_o* eventData, const MethodInfo* method); */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* TMPro.Examples.TMP_TextSelector_A$$OnPointerEnter
   void TMPro_Examples_TMP_TextSelector_A__OnPointerEnter (TMPro_Examples_TMP_TextSelector_A_o*
   __this, UnityEngine_EventSystems_PointerEventData_o* eventData, const MethodInfo* method); */

void native_TMPro_Examples_TMP_TextSelector_A__OnPointerEnter_6dd168(long param_1)

{
  if ((bRam000000000133f36b & 1) == 0) {
    native_sub_43273c(&UnityEngine_Debug_TypeInfo_12d4338);
    native_sub_43273c(&StringLiteral_OnPointerEnter___12f02a0);
    bRam000000000133f36b = 1;
  }
  if (((*(byte *)(_UnityEngine_Debug_TypeInfo_12d4338 + 0x133) >> 2 & 1) != 0) &&
     (*(int *)(_UnityEngine_Debug_TypeInfo_12d4338 + 0xe0) == 0)) {
    native_sub_4327ec();
  }
  native_UnityEngine_Debug__Log_8dc36c(_StringLiteral_OnPointerEnter___12f02a0,0);
  *(undefined1 *)(param_1 + 0x28) = 1;
  return;
}



/* TMPro.Examples.TMP_TextSelector_A$$OnPointerExit @ 0x6dd1ec
 * void TMPro_Examples_TMP_TextSelector_A__OnPointerExit (TMPro_Examples_TMP_TextSelector_A_o* __this, UnityEngine_EventSystems_PointerEventData_o* eventData, const MethodInfo* method); */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* TMPro.Examples.TMP_TextSelector_A$$OnPointerExit
   void TMPro_Examples_TMP_TextSelector_A__OnPointerExit (TMPro_Examples_TMP_TextSelector_A_o*
   __this, UnityEngine_EventSystems_PointerEventData_o* eventData, const MethodInfo* method); */

void native_TMPro_Examples_TMP_TextSelector_A__OnPointerExit_6dd1ec(long param_1)

{
  if ((bRam000000000133f36c & 1) == 0) {
    native_sub_43273c(&UnityEngine_Debug_TypeInfo_12d4338);
    native_sub_43273c(&StringLiteral_OnPointerExit___12f02a8);
    bRam000000000133f36c = 1;
  }
  if (((*(byte *)(_UnityEngine_Debug_TypeInfo_12d4338 + 0x133) >> 2 & 1) != 0) &&
     (*(int *)(_UnityEngine_Debug_TypeInfo_12d4338 + 0xe0) == 0)) {
    native_sub_4327ec();
  }
  native_UnityEngine_Debug__Log_8dc36c(_StringLiteral_OnPointerExit___12f02a8,0);
  *(undefined1 *)(param_1 + 0x28) = 0;
  return;
}



/* TMPro.Examples.TMP_TextSelector_A$$.ctor @ 0x6dd26c
 * void TMPro_Examples_TMP_TextSelector_A___ctor (TMPro_Examples_TMP_TextSelector_A_o* __this, const MethodInfo* method); */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* TMPro.Examples.TMP_TextSelector_A$$.ctor
   void TMPro_Examples_TMP_TextSelector_A___ctor (TMPro_Examples_TMP_TextSelector_A_o* __this, const
   MethodInfo* method); */

long native_TMPro_Examples_TMP_TextSelector_A___ctor_6dd26c(long param_1)

{
  *(undefined8 *)(param_1 + 0x2c) = 0xffffffffffffffff;
  *(undefined4 *)(param_1 + 0x34) = 0xffffffff;
  if ((bRam0000000001340ae0 & 1) == 0) {
    native_sub_43273c(&UnityEngine_Object_TypeInfo_12d54e0,0);
    bRam0000000001340ae0 = 1;
  }
  if (((*(byte *)(_UnityEngine_Object_TypeInfo_12d54e0 + 0x133) >> 2 & 1) != 0) &&
     (*(int *)(_UnityEngine_Object_TypeInfo_12d54e0 + 0xe0) == 0)) {
    native_sub_4327ec();
  }
  return param_1;
}


