/* ARM64 IL2CPP native pseudocode from Ghidra.
 * Recovered implementation, not original C# source.
 * Function boundaries follow the IL2CPP method address table. */


/* TMPro.Examples.TextMeshProFloatingText$$Awake @ 0x6e186c
 * void TMPro_Examples_TextMeshProFloatingText__Awake (TMPro_Examples_TextMeshProFloatingText_o* __this, const MethodInfo* method); */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* TMPro.Examples.TextMeshProFloatingText$$Awake
   void TMPro_Examples_TextMeshProFloatingText__Awake (TMPro_Examples_TextMeshProFloatingText_o*
   __this, const MethodInfo* method); */

void native_TMPro_Examples_TextMeshProFloatingText__Awake_6e186c(long param_1)

{
  ulong *puVar1;
  char cVar2;
  bool bVar3;
  undefined8 uVar4;
  undefined8 uVar5;
  long lVar6;
  undefined8 *puVar7;
  
  if ((bRam000000000133f387 & 1) == 0) {
    native_sub_43273c(&UnityEngine_GameObject_TypeInfo_12d47d8);
    native_sub_43273c(&StringLiteral__floating_text_12eae58);
    bRam000000000133f387 = 1;
  }
  uVar4 = native_UnityEngine_Component__get_transform_8da62c(param_1,0);
  *(undefined8 *)(param_1 + 0x38) = uVar4;
  native_sub_4326e0(param_1 + 0x38);
  uVar4 = native_UnityEngine_Object__get_name_8e8098(param_1,0);
  uVar4 = native_System_String__Concat_afbd68(uVar4,_StringLiteral__floating_text_12eae58,0);
  uVar5 = native_sub_432808(_UnityEngine_GameObject_TypeInfo_12d47d8);
  native_UnityEngine_GameObject___ctor_8de828(uVar5,uVar4,0);
  *(undefined8 *)(param_1 + 0x20) = uVar5;
  native_sub_4326e0(param_1 + 0x20,uVar5);
  lVar6 = native_UnityEngine_Camera__get_main_8d93c0(0);
  if (lVar6 != 0) {
    uVar4 = native_UnityEngine_Component__get_transform_8da62c(lVar6,0);
    puVar7 = (undefined8 *)(param_1 + 0x48);
    *puVar7 = uVar4;
    if (iRam0000000001345318 != 0) {
      puVar1 = (ulong *)(((ulong)puVar7 >> 0x12 & 0x7fff) * 8 + 0x138ecd8);
      do {
        cVar2 = '\x01';
        bVar3 = (bool)ExclusiveMonitorPass(puVar1,0x10);
        if (bVar3) {
          *puVar1 = *puVar1 | 1L << ((ulong)puVar7 >> 0xc & 0x3f);
          cVar2 = ExclusiveMonitorsStatus();
        }
      } while (cVar2 != '\0');
    }
    return;
  }
                    /* WARNING: Subroutine does not return */
  native_sub_432810();
}



/* TMPro.Examples.TextMeshProFloatingText$$Start @ 0x6e1954
 * void TMPro_Examples_TextMeshProFloatingText__Start (TMPro_Examples_TextMeshProFloatingText_o* __this, const MethodInfo* method); */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* TMPro.Examples.TextMeshProFloatingText$$Start
   void TMPro_Examples_TextMeshProFloatingText__Start (TMPro_Examples_TextMeshProFloatingText_o*
   __this, const MethodInfo* method); */

void native_TMPro_Examples_TextMeshProFloatingText__Start_6e1954
               (undefined1 param_1 [16],float param_2,float param_3,long param_4)

{
  undefined4 uVar1;
  undefined4 uVar2;
  undefined4 uVar3;
  long lVar4;
  undefined8 uVar5;
  long lVar6;
  long *plVar7;
  long *plVar8;
  float fVar9;
  float fVar10;
  undefined4 auStack_48 [2];
  undefined4 auStack_38 [2];
  
  if ((bRam000000000133f388 & 1) == 0) {
    native_sub_43273c(&Method_UnityEngine_Component_GetComponent_Renderer____12e2ad8);
    native_sub_43273c(&Method_UnityEngine_GameObject_AddComponent_TextMeshPro____12e48a8);
    native_sub_43273c(&Method_UnityEngine_GameObject_AddComponent_TextMesh____12e48a0);
    native_sub_43273c(&Method_UnityEngine_Resources_Load_Font____12e6320);
    native_sub_43273c(&string_TypeInfo_12d5f28);
    native_sub_43273c(&StringLiteral_Fonts_ARIAL_12ee040);
    bRam000000000133f388 = 1;
  }
  if (*(int *)(param_4 + 0x6c) == 1) {
    if (*(long *)(param_4 + 0x20) != 0) {
      lVar4 = native_UnityEngine_GameObject__get_transform_8de5c8(*(long *)(param_4 + 0x20),0);
      plVar7 = (long *)(param_4 + 0x40);
      *plVar7 = lVar4;
      native_sub_4326e0(plVar7,lVar4);
      if (*(long *)(param_4 + 0x38) != 0) {
        lVar4 = *plVar7;
        fVar10 = (float)native_UnityEngine_Transform__get_position_77169c
                                  (*(long *)(param_4 + 0x38),0);
        if (lVar4 != 0) {
          native_UnityEngine_Transform__set_position_77174c
                    (fVar10 + 0.0,param_2 + 15.0,param_3 + 0.0,lVar4,0);
          if (*(long *)(param_4 + 0x20) != 0) {
            lVar4 = native_UnityEngine_GameObject__AddComponent_ActiveAnimation__4a2118
                              (*(long *)(param_4 + 0x20),
                               _Method_UnityEngine_GameObject_AddComponent_TextMesh____12e48a0);
            plVar7 = (long *)(param_4 + 0x30);
            *plVar7 = lVar4;
            native_sub_4326e0(plVar7,lVar4);
            lVar4 = *plVar7;
            uVar5 = native_UnityEngine_Resources__Load_Font__4a7de0
                              (_StringLiteral_Fonts_ARIAL_12ee040,
                               _Method_UnityEngine_Resources_Load_Font____12e6320);
            if (lVar4 != 0) {
              native_UnityEngine_TextMesh__set_font_db58b0(lVar4,uVar5,0);
              if (*plVar7 != 0) {
                lVar4 = native_UnityEngine_Component__GetComponent_ActiveAnimation__49daec
                                  (*plVar7,
                                   _Method_UnityEngine_Component_GetComponent_Renderer____12e2ad8);
                if (((*plVar7 != 0) &&
                    (lVar6 = native_UnityEngine_TextMesh__get_font_db5870(*plVar7,0), lVar6 != 0))
                   && (uVar5 = native_UnityEngine_Font__get_material_db3b30(lVar6,0), lVar4 != 0)) {
                  native_UnityEngine_Renderer__set_sharedMaterial_768f9c(lVar4,uVar5,0);
                  lVar4 = *plVar7;
                  uVar1 = native_UnityEngine_Random__Range_7630a8(0,0xff,0);
                  uVar2 = native_UnityEngine_Random__Range_7630a8(0,0xff,0);
                  uVar3 = native_UnityEngine_Random__Range_7630a8(0,0xff,0);
                  auStack_48[0] = 0;
                  native_UnityEngine_Color32___ctor_8d9fa0(auStack_48,uVar1,uVar2,uVar3,0xff,0);
                  native_UnityEngine_Color32__op_Implicit_8da288(auStack_48[0],0);
                  if (lVar4 != 0) {
                    native_UnityEngine_TextMesh__set_color_db5a4c(lVar4,0);
                    if (*plVar7 != 0) {
                      native_UnityEngine_TextMesh__set_anchor_db5950(*plVar7,7,0);
                      if (*plVar7 != 0) {
                        native_UnityEngine_TextMesh__set_fontSize_db5900(*plVar7,0x18,0);
                        uVar5 = native_TMPro_Examples_TextMeshProFloatingText__DisplayTextMeshFloatingText_6e1de8
                                          (param_4);
LAB_006e1d44:
                        native_UnityEngine_MonoBehaviour__StartCoroutine_8e9174(param_4,uVar5,0);
                        return;
                      }
                    }
                  }
                }
              }
            }
          }
        }
      }
    }
  }
  else {
    if (*(int *)(param_4 + 0x6c) != 0) {
      return;
    }
    if (*(long *)(param_4 + 0x20) != 0) {
      lVar4 = native_UnityEngine_GameObject__AddComponent_ActiveAnimation__4a2118
                        (*(long *)(param_4 + 0x20),
                         _Method_UnityEngine_GameObject_AddComponent_TextMeshPro____12e48a8);
      plVar7 = (long *)(param_4 + 0x28);
      *plVar7 = lVar4;
      native_sub_4326e0(plVar7,lVar4);
      if ((*plVar7 != 0) &&
         (lVar4 = native_TMPro_TMP_Text__get_rectTransform_4b9320(*plVar7,0), lVar4 != 0)) {
        fVar10 = 3.0;
        native_UnityEngine_RectTransform__set_sizeDelta_76500c(0x40400000,0x40400000,lVar4,0);
        if (*(long *)(param_4 + 0x20) != 0) {
          lVar4 = native_UnityEngine_GameObject__get_transform_8de5c8(*(long *)(param_4 + 0x20),0);
          plVar8 = (long *)(param_4 + 0x40);
          *plVar8 = lVar4;
          native_sub_4326e0(plVar8,lVar4);
          if (*(long *)(param_4 + 0x38) != 0) {
            lVar4 = *plVar8;
            fVar9 = (float)native_UnityEngine_Transform__get_position_77169c
                                     (*(long *)(param_4 + 0x38),0);
            if (lVar4 != 0) {
              native_UnityEngine_Transform__set_position_77174c
                        (fVar9 + 0.0,fVar10 + 15.0,param_3 + 0.0,lVar4,0);
              if (*plVar7 != 0) {
                native_TMPro_TMP_Text__set_alignment_4bb268(*plVar7,0x202,0);
                plVar8 = (long *)*plVar7;
                uVar1 = native_UnityEngine_Random__Range_7630a8(0,0xff,0);
                uVar2 = native_UnityEngine_Random__Range_7630a8(0,0xff,0);
                uVar3 = native_UnityEngine_Random__Range_7630a8(0,0xff,0);
                auStack_38[0] = 0;
                native_UnityEngine_Color32___ctor_8d9fa0(auStack_38,uVar1,uVar2,uVar3,0xff,0);
                native_UnityEngine_Color32__op_Implicit_8da288(auStack_38[0],0);
                if (plVar8 != (long *)0x0) {
                  (**(code **)(*plVar8 + 0x2a8))(plVar8,*(undefined8 *)(*plVar8 + 0x2b0));
                  if (*plVar7 != 0) {
                    native_TMPro_TMP_Text__set_fontSize_4bae20(0x41c00000,*plVar7,0);
                    if (*plVar7 != 0) {
                      native_TMPro_TMP_Text__set_enableKerning_4bb9a4(*plVar7,0,0);
                      plVar8 = (long *)*plVar7;
                      if (plVar8 != (long *)0x0) {
                        (**(code **)(*plVar8 + 0x558))
                                  (plVar8,**(undefined8 **)(_string_TypeInfo_12d5f28 + 0xb8),
                                   *(undefined8 *)(*plVar8 + 0x560));
                        if (*plVar7 != 0) {
                          native_TMPro_TMP_Text__set_isTextObjectScaleStatic_4bbd6c
                                    (*plVar7,*(undefined1 *)(param_4 + 0x70),0);
                          uVar5 = native_TMPro_Examples_TextMeshProFloatingText__DisplayTextMeshProFloatingText_6e1d70
                                            (param_4);
                          goto LAB_006e1d44;
                        }
                      }
                    }
                  }
                }
              }
            }
          }
        }
      }
    }
  }
                    /* WARNING: Subroutine does not return */
  native_sub_432810();
}



/* TMPro.Examples.TextMeshProFloatingText$$DisplayTextMeshProFloatingText @ 0x6e1d70
 * System_Collections_IEnumerator_o* TMPro_Examples_TextMeshProFloatingText__DisplayTextMeshProFloatingText (TMPro_Examples_TextMeshProFloatingText_o* __this, const MethodInfo* method); */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* TMPro.Examples.TextMeshProFloatingText$$DisplayTextMeshProFloatingText
   System_Collections_IEnumerator_o*
   TMPro_Examples_TextMeshProFloatingText__DisplayTextMeshProFloatingText
   (TMPro_Examples_TextMeshProFloatingText_o* __this, const MethodInfo* method); */

long native_TMPro_Examples_TextMeshProFloatingText__DisplayTextMeshProFloatingText_6e1d70
               (undefined8 param_1)

{
  long lVar1;
  
  if ((bRam000000000133f389 & 1) == 0) {
    native_sub_43273c(&
                      TMPro_Examples_TextMeshProFloatingText__DisplayTextMeshProFloatingText_d__15_TypeInfo_12d78d0
                     );
    bRam000000000133f389 = 1;
  }
  lVar1 = native_sub_432808(
                           _TMPro_Examples_TextMeshProFloatingText__DisplayTextMeshProFloatingText_d__15_TypeInfo_12d78d0
                           );
  native_TMPro_Examples_TextMeshProFloatingText__DisplayTextMeshProFloatingText_d__15___ctor_54ee70
            (lVar1,0,0);
  if (lVar1 != 0) {
    *(undefined8 *)(lVar1 + 0x20) = param_1;
    native_sub_4326e0((undefined8 *)(lVar1 + 0x20),param_1);
    return lVar1;
  }
                    /* WARNING: Subroutine does not return */
  native_sub_432810();
}



/* TMPro.Examples.TextMeshProFloatingText$$DisplayTextMeshFloatingText @ 0x6e1de8
 * System_Collections_IEnumerator_o* TMPro_Examples_TextMeshProFloatingText__DisplayTextMeshFloatingText (TMPro_Examples_TextMeshProFloatingText_o* __this, const MethodInfo* method); */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* TMPro.Examples.TextMeshProFloatingText$$DisplayTextMeshFloatingText
   System_Collections_IEnumerator_o*
   TMPro_Examples_TextMeshProFloatingText__DisplayTextMeshFloatingText
   (TMPro_Examples_TextMeshProFloatingText_o* __this, const MethodInfo* method); */

long native_TMPro_Examples_TextMeshProFloatingText__DisplayTextMeshFloatingText_6e1de8
               (undefined8 param_1)

{
  long lVar1;
  
  if ((bRam000000000133f38a & 1) == 0) {
    native_sub_43273c(&
                      TMPro_Examples_TextMeshProFloatingText__DisplayTextMeshFloatingText_d__16_TypeInfo_12d78c8
                     );
    bRam000000000133f38a = 1;
  }
  lVar1 = native_sub_432808(
                           _TMPro_Examples_TextMeshProFloatingText__DisplayTextMeshFloatingText_d__16_TypeInfo_12d78c8
                           );
  native_TMPro_Examples_TextMeshProFloatingText__DisplayTextMeshFloatingText_d__16___ctor_54e99c
            (lVar1,0,0);
  if (lVar1 != 0) {
    *(undefined8 *)(lVar1 + 0x20) = param_1;
    native_sub_4326e0((undefined8 *)(lVar1 + 0x20),param_1);
    return lVar1;
  }
                    /* WARNING: Subroutine does not return */
  native_sub_432810();
}



/* TMPro.Examples.TextMeshProFloatingText$$.ctor @ 0x6e1e60
 * void TMPro_Examples_TextMeshProFloatingText___ctor (TMPro_Examples_TextMeshProFloatingText_o* __this, const MethodInfo* method); */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* TMPro.Examples.TextMeshProFloatingText$$.ctor
   void TMPro_Examples_TextMeshProFloatingText___ctor (TMPro_Examples_TextMeshProFloatingText_o*
   __this, const MethodInfo* method); */

undefined1  [16]
native_TMPro_Examples_TextMeshProFloatingText___ctor_6e1e60
          (undefined1 param_1 [16],undefined4 param_2,undefined4 param_3,undefined4 param_4,
          ulong param_5)

{
  undefined4 uVar1;
  undefined1 auVar2 [16];
  
  uVar1 = native_UnityEngine_Vector3__get_zero_776668(0);
  *(undefined4 *)(param_5 + 0x50) = uVar1;
  *(undefined4 *)(param_5 + 0x54) = param_2;
  *(undefined4 *)(param_5 + 0x58) = param_3;
  uVar1 = native_UnityEngine_Quaternion__get_identity_7628fc(0);
  *(undefined4 *)(param_5 + 0x5c) = uVar1;
  *(undefined4 *)(param_5 + 0x60) = param_2;
  *(undefined4 *)(param_5 + 100) = param_3;
  *(undefined4 *)(param_5 + 0x68) = param_4;
  if ((bRam0000000001340ae0 & 1) == 0) {
    native_sub_43273c(&UnityEngine_Object_TypeInfo_12d54e0,0);
    bRam0000000001340ae0 = 1;
  }
  if (((*(byte *)(_UnityEngine_Object_TypeInfo_12d54e0 + 0x133) >> 2 & 1) != 0) &&
     (*(int *)(_UnityEngine_Object_TypeInfo_12d54e0 + 0xe0) == 0)) {
    native_sub_4327ec();
  }
  auVar2._8_8_ = 0;
  auVar2._0_8_ = param_5;
  return auVar2;
}



/* TMPro.Examples.TextMeshProFloatingText$$.cctor @ 0x6e1ea4
 * void TMPro_Examples_TextMeshProFloatingText___cctor (const MethodInfo* method); */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* TMPro.Examples.TextMeshProFloatingText$$.cctor
   void TMPro_Examples_TextMeshProFloatingText___cctor (const MethodInfo* method); */

void native_TMPro_Examples_TextMeshProFloatingText___cctor_6e1ea4(void)

{
  ulong *puVar1;
  char cVar2;
  bool bVar3;
  undefined8 uVar4;
  undefined8 *puVar5;
  long *plVar6;
  long lVar7;
  long lVar8;
  long *plVar9;
  
  if ((bRam000000000133f38b & 1) == 0) {
    native_sub_43273c(&TMPro_Examples_TextMeshProFloatingText_TypeInfo_12d61c0);
    native_sub_43273c(&UnityEngine_WaitForEndOfFrame_TypeInfo_12d6738);
    native_sub_43273c(&UnityEngine_WaitForSeconds___TypeInfo_12d3488);
    native_sub_43273c(&UnityEngine_WaitForSeconds_TypeInfo_12d6740);
    bRam000000000133f38b = 1;
  }
  uVar4 = native_sub_432808(_UnityEngine_WaitForEndOfFrame_TypeInfo_12d6738);
  native_UnityEngine_WaitForEndOfFrame___ctor_7775b8(uVar4,0);
  puVar5 = *(undefined8 **)(_TMPro_Examples_TextMeshProFloatingText_TypeInfo_12d61c0 + 0xb8);
  *puVar5 = uVar4;
  native_sub_4326e0(puVar5,uVar4);
  plVar6 = (long *)native_sub_432750(_UnityEngine_WaitForSeconds___TypeInfo_12d3488,0x14);
  lVar7 = native_sub_432808(_UnityEngine_WaitForSeconds_TypeInfo_12d6740);
  native_UnityEngine_WaitForSeconds___ctor_7775c8(0x3d4ccccd,lVar7,0);
  if (plVar6 == (long *)0x0) {
                    /* WARNING: Subroutine does not return */
    native_sub_432810();
  }
  if ((lVar7 != 0) && (lVar8 = native_sub_4327f8(lVar7,*(undefined8 *)(*plVar6 + 0x40)), lVar8 == 0)
     ) {
LAB_006e25b0:
    uVar4 = native_sub_432830();
                    /* WARNING: Subroutine does not return */
    native_sub_4327dc(uVar4,0);
  }
  if ((int)plVar6[3] != 0) {
    plVar6[4] = lVar7;
    native_sub_4326e0(plVar6 + 4,lVar7);
    lVar7 = native_sub_432808(_UnityEngine_WaitForSeconds_TypeInfo_12d6740);
    native_UnityEngine_WaitForSeconds___ctor_7775c8(0x3dcccccd,lVar7,0);
    if ((lVar7 != 0) &&
       (lVar8 = native_sub_4327f8(lVar7,*(undefined8 *)(*plVar6 + 0x40)), lVar8 == 0))
    goto LAB_006e25b0;
    if (1 < *(uint *)(plVar6 + 3)) {
      plVar6[5] = lVar7;
      native_sub_4326e0(plVar6 + 5,lVar7);
      lVar7 = native_sub_432808(_UnityEngine_WaitForSeconds_TypeInfo_12d6740);
      native_UnityEngine_WaitForSeconds___ctor_7775c8(0x3e19999a,lVar7,0);
      if ((lVar7 != 0) &&
         (lVar8 = native_sub_4327f8(lVar7,*(undefined8 *)(*plVar6 + 0x40)), lVar8 == 0))
      goto LAB_006e25b0;
      if (2 < *(uint *)(plVar6 + 3)) {
        plVar6[6] = lVar7;
        native_sub_4326e0(plVar6 + 6,lVar7);
        lVar7 = native_sub_432808(_UnityEngine_WaitForSeconds_TypeInfo_12d6740);
        native_UnityEngine_WaitForSeconds___ctor_7775c8(0x3e4ccccd,lVar7,0);
        if ((lVar7 != 0) &&
           (lVar8 = native_sub_4327f8(lVar7,*(undefined8 *)(*plVar6 + 0x40)), lVar8 == 0))
        goto LAB_006e25b0;
        if (3 < *(uint *)(plVar6 + 3)) {
          plVar6[7] = lVar7;
          native_sub_4326e0(plVar6 + 7,lVar7);
          lVar7 = native_sub_432808(_UnityEngine_WaitForSeconds_TypeInfo_12d6740);
          native_UnityEngine_WaitForSeconds___ctor_7775c8(0x3e800000,lVar7,0);
          if ((lVar7 != 0) &&
             (lVar8 = native_sub_4327f8(lVar7,*(undefined8 *)(*plVar6 + 0x40)), lVar8 == 0))
          goto LAB_006e25b0;
          if (4 < *(uint *)(plVar6 + 3)) {
            plVar6[8] = lVar7;
            native_sub_4326e0(plVar6 + 8,lVar7);
            lVar7 = native_sub_432808(_UnityEngine_WaitForSeconds_TypeInfo_12d6740);
            native_UnityEngine_WaitForSeconds___ctor_7775c8(0x3e99999a,lVar7,0);
            if ((lVar7 != 0) &&
               (lVar8 = native_sub_4327f8(lVar7,*(undefined8 *)(*plVar6 + 0x40)), lVar8 == 0))
            goto LAB_006e25b0;
            if (5 < *(uint *)(plVar6 + 3)) {
              plVar6[9] = lVar7;
              native_sub_4326e0(plVar6 + 9,lVar7);
              lVar7 = native_sub_432808(_UnityEngine_WaitForSeconds_TypeInfo_12d6740);
              native_UnityEngine_WaitForSeconds___ctor_7775c8(0x3eb33333,lVar7,0);
              if ((lVar7 != 0) &&
                 (lVar8 = native_sub_4327f8(lVar7,*(undefined8 *)(*plVar6 + 0x40)), lVar8 == 0))
              goto LAB_006e25b0;
              if (6 < *(uint *)(plVar6 + 3)) {
                plVar6[10] = lVar7;
                native_sub_4326e0(plVar6 + 10,lVar7);
                lVar7 = native_sub_432808(_UnityEngine_WaitForSeconds_TypeInfo_12d6740);
                native_UnityEngine_WaitForSeconds___ctor_7775c8(0x3ecccccd,lVar7,0);
                if ((lVar7 != 0) &&
                   (lVar8 = native_sub_4327f8(lVar7,*(undefined8 *)(*plVar6 + 0x40)), lVar8 == 0))
                goto LAB_006e25b0;
                if (7 < *(uint *)(plVar6 + 3)) {
                  plVar6[0xb] = lVar7;
                  native_sub_4326e0(plVar6 + 0xb,lVar7);
                  lVar7 = native_sub_432808(_UnityEngine_WaitForSeconds_TypeInfo_12d6740);
                  native_UnityEngine_WaitForSeconds___ctor_7775c8(0x3ee66666,lVar7,0);
                  if ((lVar7 != 0) &&
                     (lVar8 = native_sub_4327f8(lVar7,*(undefined8 *)(*plVar6 + 0x40)), lVar8 == 0))
                  goto LAB_006e25b0;
                  if (8 < *(uint *)(plVar6 + 3)) {
                    plVar6[0xc] = lVar7;
                    native_sub_4326e0(plVar6 + 0xc,lVar7);
                    lVar7 = native_sub_432808(_UnityEngine_WaitForSeconds_TypeInfo_12d6740);
                    native_UnityEngine_WaitForSeconds___ctor_7775c8(0x3f000000,lVar7,0);
                    if ((lVar7 != 0) &&
                       (lVar8 = native_sub_4327f8(lVar7,*(undefined8 *)(*plVar6 + 0x40)), lVar8 == 0
                       )) goto LAB_006e25b0;
                    if (9 < *(uint *)(plVar6 + 3)) {
                      plVar6[0xd] = lVar7;
                      native_sub_4326e0(plVar6 + 0xd,lVar7);
                      lVar7 = native_sub_432808(_UnityEngine_WaitForSeconds_TypeInfo_12d6740);
                      native_UnityEngine_WaitForSeconds___ctor_7775c8(0x3f0ccccd,lVar7,0);
                      if ((lVar7 != 0) &&
                         (lVar8 = native_sub_4327f8(lVar7,*(undefined8 *)(*plVar6 + 0x40)),
                         lVar8 == 0)) goto LAB_006e25b0;
                      if (10 < *(uint *)(plVar6 + 3)) {
                        plVar6[0xe] = lVar7;
                        native_sub_4326e0(plVar6 + 0xe,lVar7);
                        lVar7 = native_sub_432808(_UnityEngine_WaitForSeconds_TypeInfo_12d6740);
                        native_UnityEngine_WaitForSeconds___ctor_7775c8(0x3f19999a,lVar7,0);
                        if ((lVar7 != 0) &&
                           (lVar8 = native_sub_4327f8(lVar7,*(undefined8 *)(*plVar6 + 0x40)),
                           lVar8 == 0)) goto LAB_006e25b0;
                        if (0xb < *(uint *)(plVar6 + 3)) {
                          plVar6[0xf] = lVar7;
                          native_sub_4326e0(plVar6 + 0xf,lVar7);
                          lVar7 = native_sub_432808(_UnityEngine_WaitForSeconds_TypeInfo_12d6740);
                          native_UnityEngine_WaitForSeconds___ctor_7775c8(0x3f266666,lVar7,0);
                          if ((lVar7 != 0) &&
                             (lVar8 = native_sub_4327f8(lVar7,*(undefined8 *)(*plVar6 + 0x40)),
                             lVar8 == 0)) goto LAB_006e25b0;
                          if (0xc < *(uint *)(plVar6 + 3)) {
                            plVar6[0x10] = lVar7;
                            native_sub_4326e0(plVar6 + 0x10,lVar7);
                            lVar7 = native_sub_432808(_UnityEngine_WaitForSeconds_TypeInfo_12d6740);
                            native_UnityEngine_WaitForSeconds___ctor_7775c8(0x3f333333,lVar7,0);
                            if ((lVar7 != 0) &&
                               (lVar8 = native_sub_4327f8(lVar7,*(undefined8 *)(*plVar6 + 0x40)),
                               lVar8 == 0)) goto LAB_006e25b0;
                            if (0xd < *(uint *)(plVar6 + 3)) {
                              plVar6[0x11] = lVar7;
                              native_sub_4326e0(plVar6 + 0x11,lVar7);
                              lVar7 = native_sub_432808(_UnityEngine_WaitForSeconds_TypeInfo_12d6740
                                                       );
                              native_UnityEngine_WaitForSeconds___ctor_7775c8(0x3f400000,lVar7,0);
                              if ((lVar7 != 0) &&
                                 (lVar8 = native_sub_4327f8(lVar7,*(undefined8 *)(*plVar6 + 0x40)),
                                 lVar8 == 0)) goto LAB_006e25b0;
                              if (0xe < *(uint *)(plVar6 + 3)) {
                                plVar6[0x12] = lVar7;
                                native_sub_4326e0(plVar6 + 0x12,lVar7);
                                lVar7 = native_sub_432808(
                                                  _UnityEngine_WaitForSeconds_TypeInfo_12d6740);
                                native_UnityEngine_WaitForSeconds___ctor_7775c8(0x3f4ccccd,lVar7,0);
                                if ((lVar7 != 0) &&
                                   (lVar8 = native_sub_4327f8(lVar7,*(undefined8 *)(*plVar6 + 0x40))
                                   , lVar8 == 0)) goto LAB_006e25b0;
                                if (0xf < *(uint *)(plVar6 + 3)) {
                                  plVar6[0x13] = lVar7;
                                  native_sub_4326e0(plVar6 + 0x13,lVar7);
                                  lVar7 = native_sub_432808(
                                                  _UnityEngine_WaitForSeconds_TypeInfo_12d6740);
                                  native_UnityEngine_WaitForSeconds___ctor_7775c8
                                            (0x3f59999a,lVar7,0);
                                  if ((lVar7 != 0) &&
                                     (lVar8 = native_sub_4327f8(lVar7,*(undefined8 *)
                                                                       (*plVar6 + 0x40)), lVar8 == 0
                                     )) goto LAB_006e25b0;
                                  if (0x10 < *(uint *)(plVar6 + 3)) {
                                    plVar6[0x14] = lVar7;
                                    native_sub_4326e0(plVar6 + 0x14,lVar7);
                                    lVar7 = native_sub_432808(
                                                  _UnityEngine_WaitForSeconds_TypeInfo_12d6740);
                                    native_UnityEngine_WaitForSeconds___ctor_7775c8
                                              (0x3f666666,lVar7,0);
                                    if ((lVar7 != 0) &&
                                       (lVar8 = native_sub_4327f8(lVar7,*(undefined8 *)
                                                                         (*plVar6 + 0x40)),
                                       lVar8 == 0)) goto LAB_006e25b0;
                                    if (0x11 < *(uint *)(plVar6 + 3)) {
                                      plVar6[0x15] = lVar7;
                                      native_sub_4326e0(plVar6 + 0x15,lVar7);
                                      lVar7 = native_sub_432808(
                                                  _UnityEngine_WaitForSeconds_TypeInfo_12d6740);
                                      native_UnityEngine_WaitForSeconds___ctor_7775c8
                                                (0x3f733333,lVar7,0);
                                      if ((lVar7 != 0) &&
                                         (lVar8 = native_sub_4327f8(lVar7,*(undefined8 *)
                                                                           (*plVar6 + 0x40)),
                                         lVar8 == 0)) goto LAB_006e25b0;
                                      if (0x12 < *(uint *)(plVar6 + 3)) {
                                        plVar6[0x16] = lVar7;
                                        native_sub_4326e0(plVar6 + 0x16,lVar7);
                                        lVar7 = native_sub_432808(
                                                  _UnityEngine_WaitForSeconds_TypeInfo_12d6740);
                                        native_UnityEngine_WaitForSeconds___ctor_7775c8
                                                  (0x3f800000,lVar7,0);
                                        if ((lVar7 != 0) &&
                                           (lVar8 = native_sub_4327f8(lVar7,*(undefined8 *)
                                                                             (*plVar6 + 0x40)),
                                           lVar8 == 0)) goto LAB_006e25b0;
                                        if (0x13 < *(uint *)(plVar6 + 3)) {
                                          plVar6[0x17] = lVar7;
                                          native_sub_4326e0(plVar6 + 0x17,lVar7);
                                          plVar9 = (long *)(*(long *)(
                                                  _TMPro_Examples_TextMeshProFloatingText_TypeInfo_12d61c0
                                                  + 0xb8) + 8);
                                          *plVar9 = (long)plVar6;
                                          if (iRam0000000001345318 != 0) {
                                            puVar1 = (ulong *)(((ulong)plVar9 >> 0x12 & 0x7fff) * 8
                                                              + 0x138ecd8);
                                            do {
                                              cVar2 = '\x01';
                                              bVar3 = (bool)ExclusiveMonitorPass(puVar1,0x10);
                                              if (bVar3) {
                                                *puVar1 = *puVar1 | 1L << ((ulong)plVar9 >> 0xc &
                                                                          0x3f);
                                                cVar2 = ExclusiveMonitorsStatus();
                                              }
                                            } while (cVar2 != '\0');
                                          }
                                          return;
                                        }
                                      }
                                    }
                                  }
                                }
                              }
                            }
                          }
                        }
                      }
                    }
                  }
                }
              }
            }
          }
        }
      }
    }
  }
  uVar4 = native_sub_43283c();
                    /* WARNING: Subroutine does not return */
  native_sub_4327dc(uVar4,0);
}


