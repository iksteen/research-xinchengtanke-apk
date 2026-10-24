/* ARM64 IL2CPP native pseudocode from Ghidra.
 * Recovered implementation, not original C# source.
 * Function boundaries follow the IL2CPP method address table. */


/* TMPro.Examples.TMP_UiFrameRateCounter$$Awake @ 0x6dec24
 * void TMPro_Examples_TMP_UiFrameRateCounter__Awake (TMPro_Examples_TMP_UiFrameRateCounter_o* __this, const MethodInfo* method); */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* TMPro.Examples.TMP_UiFrameRateCounter$$Awake
   void TMPro_Examples_TMP_UiFrameRateCounter__Awake (TMPro_Examples_TMP_UiFrameRateCounter_o*
   __this, const MethodInfo* method); */

void native_TMPro_Examples_TMP_UiFrameRateCounter__Awake_6dec24(long param_1)

{
  ulong uVar1;
  long lVar2;
  long lVar3;
  undefined8 uVar4;
  long *plVar5;
  long *plVar6;
  
  if ((bRam000000000133f372 & 1) == 0) {
    native_sub_43273c(&Method_UnityEngine_GameObject_AddComponent_RectTransform____12e4830);
    native_sub_43273c(&Method_UnityEngine_GameObject_AddComponent_TextMeshProUGUI____12e48b8);
    native_sub_43273c(&UnityEngine_GameObject_TypeInfo_12d47d8);
    native_sub_43273c(&Method_UnityEngine_Resources_Load_Material____12e6330);
    native_sub_43273c(&Method_UnityEngine_Resources_Load_TMP_FontAsset____12e6340);
    native_sub_43273c(&StringLiteral_Fonts___Materials_LiberationSans_SDF___Overlay_12ee038);
    native_sub_43273c(&StringLiteral_Frame_Counter_12ee0c8);
    native_sub_43273c(&StringLiteral_Fonts___Materials_LiberationSans_SDF_12ee020);
    bRam000000000133f372 = 1;
  }
  uVar1 = native_UnityEngine_Behaviour__get_enabled_8d7acc(param_1,0);
  if ((uVar1 & 1) == 0) {
    return;
  }
  native_UnityEngine_Application__set_targetFrameRate_8d6210(1000,0);
  lVar2 = native_sub_432808(_UnityEngine_GameObject_TypeInfo_12d47d8);
  native_UnityEngine_GameObject___ctor_8de828(lVar2,_StringLiteral_Frame_Counter_12ee0c8,0);
  if (lVar2 != 0) {
    lVar3 = native_UnityEngine_GameObject__AddComponent_ActiveAnimation__4a2118
                      (lVar2,_Method_UnityEngine_GameObject_AddComponent_RectTransform____12e4830);
    plVar5 = (long *)(param_1 + 0x38);
    *plVar5 = lVar3;
    native_sub_4326e0(plVar5,lVar3);
    lVar3 = *plVar5;
    uVar4 = native_UnityEngine_Component__get_transform_8da62c(param_1,0);
    if (lVar3 != 0) {
      native_UnityEngine_Transform__SetParent_7720e0(lVar3,uVar4,0,0);
      lVar2 = native_UnityEngine_GameObject__AddComponent_ActiveAnimation__4a2118
                        (lVar2,
                         _Method_UnityEngine_GameObject_AddComponent_TextMeshProUGUI____12e48b8);
      plVar5 = (long *)(param_1 + 0x30);
      *plVar5 = lVar2;
      native_sub_4326e0(plVar5,lVar2);
      lVar2 = *plVar5;
      uVar4 = native_UnityEngine_Resources__Load_Font__4a7de0
                        (_StringLiteral_Fonts___Materials_LiberationSans_SDF_12ee020,
                         _Method_UnityEngine_Resources_Load_TMP_FontAsset____12e6340);
      if (lVar2 != 0) {
        native_TMPro_TMP_Text__set_font_4ba17c(lVar2,uVar4,0);
        plVar6 = (long *)*plVar5;
        uVar4 = native_UnityEngine_Resources__Load_Font__4a7de0
                          (_StringLiteral_Fonts___Materials_LiberationSans_SDF___Overlay_12ee038,
                           _Method_UnityEngine_Resources_Load_Material____12e6330);
        if (plVar6 != (long *)0x0) {
          (**(code **)(*plVar6 + 0x578))(plVar6,uVar4,*(undefined8 *)(*plVar6 + 0x580));
          if (*plVar5 != 0) {
            native_TMPro_TMP_Text__set_enableWordWrapping_4bb4f4(*plVar5,0,0);
            if (*plVar5 != 0) {
              native_TMPro_TMP_Text__set_fontSize_4bae20(0x42100000,*plVar5,0);
              if (*plVar5 != 0) {
                native_TMPro_TMP_Text__set_isOverlay_4bbb54(*plVar5,1,0);
                native_TMPro_Examples_TMP_UiFrameRateCounter__Set_FrameCounter_Position_6dee44
                          (param_1,*(undefined4 *)(param_1 + 0x24));
                *(undefined4 *)(param_1 + 0x40) = *(undefined4 *)(param_1 + 0x24);
                return;
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



/* TMPro.Examples.TMP_UiFrameRateCounter$$Start @ 0x6df088
 * void TMPro_Examples_TMP_UiFrameRateCounter__Start (TMPro_Examples_TMP_UiFrameRateCounter_o* __this, const MethodInfo* method); */

/* TMPro.Examples.TMP_UiFrameRateCounter$$Start
   void TMPro_Examples_TMP_UiFrameRateCounter__Start (TMPro_Examples_TMP_UiFrameRateCounter_o*
   __this, const MethodInfo* method); */

void native_TMPro_Examples_TMP_UiFrameRateCounter__Start_6df088(long param_1)

{
  undefined4 uVar1;
  
  uVar1 = native_UnityEngine_Time__get_realtimeSinceStartup_770998(0);
  *(undefined4 *)(param_1 + 0x1c) = uVar1;
  *(undefined4 *)(param_1 + 0x20) = 0;
  return;
}



/* TMPro.Examples.TMP_UiFrameRateCounter$$Update @ 0x6df0b4
 * void TMPro_Examples_TMP_UiFrameRateCounter__Update (TMPro_Examples_TMP_UiFrameRateCounter_o* __this, const MethodInfo* method); */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* TMPro.Examples.TMP_UiFrameRateCounter$$Update
   void TMPro_Examples_TMP_UiFrameRateCounter__Update (TMPro_Examples_TMP_UiFrameRateCounter_o*
   __this, const MethodInfo* method); */

void native_TMPro_Examples_TMP_UiFrameRateCounter__Update_6df0b4(long param_1)

{
  long lVar1;
  undefined8 uVar2;
  int iVar3;
  undefined8 *puVar4;
  float fVar5;
  float fVar6;
  float fVar7;
  
  if ((bRam000000000133f373 & 1) == 0) {
    native_sub_43273c(&StringLiteral__color_green__12ebf60);
    native_sub_43273c(&StringLiteral__color_red__12ebf68);
    native_sub_43273c(&StringLiteral__color_yellow__12ebf70);
    native_sub_43273c(&StringLiteral__0_2___color____8080ff_FPS____FF8000__1_2____8080ff_MS_12f6f50)
    ;
    bRam000000000133f373 = 1;
  }
  iVar3 = *(int *)(param_1 + 0x24);
  if (iVar3 != *(int *)(param_1 + 0x40)) {
    native_TMPro_Examples_TMP_UiFrameRateCounter__Set_FrameCounter_Position_6dee44(param_1);
    iVar3 = *(int *)(param_1 + 0x24);
  }
  *(int *)(param_1 + 0x40) = iVar3;
  *(int *)(param_1 + 0x20) = *(int *)(param_1 + 0x20) + 1;
  fVar5 = (float)native_UnityEngine_Time__get_realtimeSinceStartup_770998(0);
  if (*(float *)(param_1 + 0x1c) + *(float *)(param_1 + 0x18) < fVar5) {
    fVar7 = (float)*(int *)(param_1 + 0x20) / (fVar5 - *(float *)(param_1 + 0x1c));
    fVar6 = (float)native_UnityEngine_Mathf__Max_8d9f90(fVar7,0x3727c5ac,0);
    if (30.0 <= fVar7) {
      if (10.0 <= fVar7) {
        puVar4 = (undefined8 *)&StringLiteral__color_green__12ebf60;
      }
      else {
        puVar4 = (undefined8 *)&StringLiteral__color_red__12ebf68;
      }
    }
    else {
      puVar4 = (undefined8 *)&StringLiteral__color_yellow__12ebf70;
    }
    *(undefined8 *)(param_1 + 0x28) = *puVar4;
    native_sub_4326e0();
    lVar1 = *(long *)(param_1 + 0x30);
    uVar2 = native_System_String__Concat_afbd68
                      (*(undefined8 *)(param_1 + 0x28),
                       _StringLiteral__0_2___color____8080ff_FPS____FF8000__1_2____8080ff_MS_12f6f50
                       ,0);
    if (lVar1 == 0) {
                    /* WARNING: Subroutine does not return */
      native_sub_432810();
    }
    native_TMPro_TMP_Text__SetText_4bfaf8(fVar7,1000.0 / fVar6,lVar1,uVar2,0);
    *(undefined4 *)(param_1 + 0x20) = 0;
    *(float *)(param_1 + 0x1c) = fVar5;
  }
  return;
}



/* TMPro.Examples.TMP_UiFrameRateCounter$$Set_FrameCounter_Position @ 0x6dee44
 * void TMPro_Examples_TMP_UiFrameRateCounter__Set_FrameCounter_Position (TMPro_Examples_TMP_UiFrameRateCounter_o* __this, int32_t anchor_position, const MethodInfo* method); */

/* TMPro.Examples.TMP_UiFrameRateCounter$$Set_FrameCounter_Position
   void TMPro_Examples_TMP_UiFrameRateCounter__Set_FrameCounter_Position
   (TMPro_Examples_TMP_UiFrameRateCounter_o* __this, int32_t anchor_position, const MethodInfo*
   method); */

void native_TMPro_Examples_TMP_UiFrameRateCounter__Set_FrameCounter_Position_6dee44
               (long param_1,undefined4 param_2)

{
  long lVar1;
  
  switch(param_2) {
  case 0:
    if (*(long *)(param_1 + 0x30) == 0) goto code_r0x006df084;
    native_TMPro_TMP_Text__set_alignment_4bb268(*(long *)(param_1 + 0x30),0x101,0);
    if (*(long *)(param_1 + 0x38) == 0) goto code_r0x006df084;
    native_UnityEngine_RectTransform__set_pivot_765158(0,0x3f800000,*(long *)(param_1 + 0x38),0);
    if (*(long *)(param_1 + 0x38) == 0) goto code_r0x006df084;
    native_UnityEngine_RectTransform__set_anchorMin_764c28
              (0x3c23d70a,0x3f7d70a4,*(long *)(param_1 + 0x38),0);
    if (*(long *)(param_1 + 0x38) == 0) goto code_r0x006df084;
    native_UnityEngine_RectTransform__set_anchorMax_764d74
              (0x3c23d70a,0x3f7d70a4,*(long *)(param_1 + 0x38),0);
    lVar1 = *(long *)(param_1 + 0x38);
    break;
  case 1:
    if (*(long *)(param_1 + 0x30) == 0) goto code_r0x006df084;
    native_TMPro_TMP_Text__set_alignment_4bb268(*(long *)(param_1 + 0x30),0x401,0);
    if (*(long *)(param_1 + 0x38) == 0) goto code_r0x006df084;
    native_UnityEngine_RectTransform__set_pivot_765158(0,0,*(long *)(param_1 + 0x38),0);
    if (*(long *)(param_1 + 0x38) == 0) goto code_r0x006df084;
    native_UnityEngine_RectTransform__set_anchorMin_764c28
              (0x3c23d70a,0x3c23d70a,*(long *)(param_1 + 0x38),0);
    if (*(long *)(param_1 + 0x38) == 0) goto code_r0x006df084;
    native_UnityEngine_RectTransform__set_anchorMax_764d74
              (0x3c23d70a,0x3c23d70a,*(long *)(param_1 + 0x38),0);
    lVar1 = *(long *)(param_1 + 0x38);
    break;
  case 2:
    if (*(long *)(param_1 + 0x30) == 0) goto code_r0x006df084;
    native_TMPro_TMP_Text__set_alignment_4bb268(*(long *)(param_1 + 0x30),0x104,0);
    if (*(long *)(param_1 + 0x38) == 0) goto code_r0x006df084;
    native_UnityEngine_RectTransform__set_pivot_765158
              (0x3f800000,0x3f800000,*(long *)(param_1 + 0x38),0);
    if (*(long *)(param_1 + 0x38) == 0) goto code_r0x006df084;
    native_UnityEngine_RectTransform__set_anchorMin_764c28
              (0x3f7d70a4,0x3f7d70a4,*(long *)(param_1 + 0x38),0);
    if (*(long *)(param_1 + 0x38) == 0) goto code_r0x006df084;
    native_UnityEngine_RectTransform__set_anchorMax_764d74
              (0x3f7d70a4,0x3f7d70a4,*(long *)(param_1 + 0x38),0);
    lVar1 = *(long *)(param_1 + 0x38);
    break;
  case 3:
    if (*(long *)(param_1 + 0x30) == 0) goto code_r0x006df084;
    native_TMPro_TMP_Text__set_alignment_4bb268(*(long *)(param_1 + 0x30),0x404,0);
    if (*(long *)(param_1 + 0x38) == 0) goto code_r0x006df084;
    native_UnityEngine_RectTransform__set_pivot_765158(0x3f800000,0,*(long *)(param_1 + 0x38),0);
    if (*(long *)(param_1 + 0x38) == 0) goto code_r0x006df084;
    native_UnityEngine_RectTransform__set_anchorMin_764c28
              (0x3f7d70a4,0x3c23d70a,*(long *)(param_1 + 0x38),0);
    if (*(long *)(param_1 + 0x38) == 0) goto code_r0x006df084;
    native_UnityEngine_RectTransform__set_anchorMax_764d74
              (0x3f7d70a4,0x3c23d70a,*(long *)(param_1 + 0x38),0);
    lVar1 = *(long *)(param_1 + 0x38);
    break;
  default:
    return;
  }
  if (lVar1 != 0) {
    if (pcRam000000000133f8d8 == (code *)0x0) {
      pcRam000000000133f8d8 = (code *)native_sub_4326f0(&UNK_00e2846b,0);
    }
    (*pcRam000000000133f8d8)(lVar1,&stack0xffffffffffffffd8);
    return;
  }
code_r0x006df084:
                    /* WARNING: Subroutine does not return */
  native_sub_432810();
}



/* TMPro.Examples.TMP_UiFrameRateCounter$$.ctor @ 0x6df224
 * void TMPro_Examples_TMP_UiFrameRateCounter___ctor (TMPro_Examples_TMP_UiFrameRateCounter_o* __this, const MethodInfo* method); */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* TMPro.Examples.TMP_UiFrameRateCounter$$.ctor
   void TMPro_Examples_TMP_UiFrameRateCounter___ctor (TMPro_Examples_TMP_UiFrameRateCounter_o*
   __this, const MethodInfo* method); */

undefined1  [16] native_TMPro_Examples_TMP_UiFrameRateCounter___ctor_6df224(ulong param_1)

{
  undefined1 auVar1 [16];
  
  *(undefined4 *)(param_1 + 0x18) = 0x40a00000;
  *(undefined4 *)(param_1 + 0x24) = 2;
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


