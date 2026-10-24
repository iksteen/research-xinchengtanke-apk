/* ARM64 IL2CPP native pseudocode from Ghidra.
 * Recovered implementation, not original C# source.
 * Function boundaries follow the IL2CPP method address table. */


/* TMPro.Examples.TMP_FrameRateCounter$$Awake @ 0x73fa74
 * void TMPro_Examples_TMP_FrameRateCounter__Awake (TMPro_Examples_TMP_FrameRateCounter_o* __this, const MethodInfo* method); */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* TMPro.Examples.TMP_FrameRateCounter$$Awake
   void TMPro_Examples_TMP_FrameRateCounter__Awake (TMPro_Examples_TMP_FrameRateCounter_o* __this,
   const MethodInfo* method); */

void native_TMPro_Examples_TMP_FrameRateCounter__Awake_73fa74(long param_1)

{
  ulong uVar1;
  undefined8 uVar2;
  long lVar3;
  long lVar4;
  long *plVar5;
  long *plVar6;
  
  if ((bRam000000000133f633 & 1) == 0) {
    native_sub_43273c(&Method_UnityEngine_GameObject_AddComponent_TextMeshPro____12e48a8);
    native_sub_43273c(&UnityEngine_GameObject_TypeInfo_12d47d8);
    native_sub_43273c(&Method_UnityEngine_Resources_Load_Material____12e6330);
    native_sub_43273c(&Method_UnityEngine_Resources_Load_TMP_FontAsset____12e6340);
    native_sub_43273c(&StringLiteral_Fonts___Materials_LiberationSans_SDF___Overlay_12ee038);
    native_sub_43273c(&StringLiteral_Frame_Counter_12ee0c8);
    native_sub_43273c(&StringLiteral_Fonts___Materials_LiberationSans_SDF_12ee020);
    bRam000000000133f633 = 1;
  }
  uVar1 = native_UnityEngine_Behaviour__get_enabled_8d7acc(param_1,0);
  if ((uVar1 & 1) == 0) {
    return;
  }
  uVar2 = native_UnityEngine_Camera__get_main_8d93c0(0);
  *(undefined8 *)(param_1 + 0x40) = uVar2;
  native_sub_4326e0();
  native_UnityEngine_Application__set_targetFrameRate_8d6210(9999,0);
  lVar3 = native_sub_432808(_UnityEngine_GameObject_TypeInfo_12d47d8);
  native_UnityEngine_GameObject___ctor_8de828(lVar3,_StringLiteral_Frame_Counter_12ee0c8,0);
  if (lVar3 != 0) {
    lVar4 = native_UnityEngine_GameObject__AddComponent_ActiveAnimation__4a2118
                      (lVar3,_Method_UnityEngine_GameObject_AddComponent_TextMeshPro____12e48a8);
    plVar5 = (long *)(param_1 + 0x30);
    *plVar5 = lVar4;
    native_sub_4326e0(plVar5,lVar4);
    lVar4 = *plVar5;
    uVar2 = native_UnityEngine_Resources__Load_Font__4a7de0
                      (_StringLiteral_Fonts___Materials_LiberationSans_SDF_12ee020,
                       _Method_UnityEngine_Resources_Load_TMP_FontAsset____12e6340);
    if (lVar4 != 0) {
      native_TMPro_TMP_Text__set_font_4ba17c(lVar4,uVar2,0);
      plVar6 = (long *)*plVar5;
      uVar2 = native_UnityEngine_Resources__Load_Font__4a7de0
                        (_StringLiteral_Fonts___Materials_LiberationSans_SDF___Overlay_12ee038,
                         _Method_UnityEngine_Resources_Load_Material____12e6330);
      if (plVar6 != (long *)0x0) {
        (**(code **)(*plVar6 + 0x578))(plVar6,uVar2,*(undefined8 *)(*plVar6 + 0x580));
        lVar3 = native_UnityEngine_GameObject__get_transform_8de5c8(lVar3,0);
        plVar6 = (long *)(param_1 + 0x38);
        *plVar6 = lVar3;
        native_sub_4326e0(plVar6,lVar3);
        if (*(long *)(param_1 + 0x40) != 0) {
          lVar3 = *plVar6;
          uVar2 = native_UnityEngine_Component__get_transform_8da62c(*(long *)(param_1 + 0x40),0);
          if (lVar3 != 0) {
            native_UnityEngine_Transform__SetParent_77208c(lVar3,uVar2,0);
            lVar3 = *plVar6;
            native_UnityEngine_Quaternion__get_identity_7628fc(0);
            if (lVar3 != 0) {
              native_UnityEngine_Transform__set_localRotation_771984(lVar3,0);
              if (*plVar5 != 0) {
                native_TMPro_TMP_Text__set_enableWordWrapping_4bb4f4(*plVar5,0,0);
                if (*plVar5 != 0) {
                  native_TMPro_TMP_Text__set_fontSize_4bae20(0x41c00000,*plVar5,0);
                  native_TMPro_Examples_TMP_FrameRateCounter__Set_FrameCounter_Position_73fc9c
                            (param_1,*(undefined4 *)(param_1 + 0x24));
                  *(undefined4 *)(param_1 + 0x48) = *(undefined4 *)(param_1 + 0x24);
                  return;
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



/* TMPro.Examples.TMP_FrameRateCounter$$Start @ 0x73fea4
 * void TMPro_Examples_TMP_FrameRateCounter__Start (TMPro_Examples_TMP_FrameRateCounter_o* __this, const MethodInfo* method); */

/* TMPro.Examples.TMP_FrameRateCounter$$Start
   void TMPro_Examples_TMP_FrameRateCounter__Start (TMPro_Examples_TMP_FrameRateCounter_o* __this,
   const MethodInfo* method); */

void native_TMPro_Examples_TMP_FrameRateCounter__Start_73fea4(long param_1)

{
  undefined4 uVar1;
  
  uVar1 = native_UnityEngine_Time__get_realtimeSinceStartup_770998(0);
  *(undefined4 *)(param_1 + 0x1c) = uVar1;
  *(undefined4 *)(param_1 + 0x20) = 0;
  return;
}



/* TMPro.Examples.TMP_FrameRateCounter$$Update @ 0x73fed0
 * void TMPro_Examples_TMP_FrameRateCounter__Update (TMPro_Examples_TMP_FrameRateCounter_o* __this, const MethodInfo* method); */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* TMPro.Examples.TMP_FrameRateCounter$$Update
   void TMPro_Examples_TMP_FrameRateCounter__Update (TMPro_Examples_TMP_FrameRateCounter_o* __this,
   const MethodInfo* method); */

void native_TMPro_Examples_TMP_FrameRateCounter__Update_73fed0(long param_1)

{
  long lVar1;
  undefined8 uVar2;
  int iVar3;
  undefined8 *puVar4;
  float fVar5;
  float fVar6;
  float fVar7;
  
  if ((bRam000000000133f634 & 1) == 0) {
    native_sub_43273c(&StringLiteral__color_green__12ebf60);
    native_sub_43273c(&StringLiteral__color_red__12ebf68);
    native_sub_43273c(&StringLiteral__color_yellow__12ebf70);
    native_sub_43273c(&StringLiteral__0_2___color____8080ff_FPS____FF8000__1_2____8080ff_MS_12f6f50)
    ;
    bRam000000000133f634 = 1;
  }
  iVar3 = *(int *)(param_1 + 0x24);
  if (iVar3 != *(int *)(param_1 + 0x48)) {
    native_TMPro_Examples_TMP_FrameRateCounter__Set_FrameCounter_Position_73fc9c(param_1);
    iVar3 = *(int *)(param_1 + 0x24);
  }
  *(int *)(param_1 + 0x48) = iVar3;
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



/* TMPro.Examples.TMP_FrameRateCounter$$Set_FrameCounter_Position @ 0x73fc9c
 * void TMPro_Examples_TMP_FrameRateCounter__Set_FrameCounter_Position (TMPro_Examples_TMP_FrameRateCounter_o* __this, int32_t anchor_position, const MethodInfo* method); */

/* TMPro.Examples.TMP_FrameRateCounter$$Set_FrameCounter_Position
   void TMPro_Examples_TMP_FrameRateCounter__Set_FrameCounter_Position
   (TMPro_Examples_TMP_FrameRateCounter_o* __this, int32_t anchor_position, const MethodInfo*
   method); */

void native_TMPro_Examples_TMP_FrameRateCounter__Set_FrameCounter_Position_73fc9c
               (long param_1,undefined4 param_2)

{
  long lVar1;
  long lVar2;
  long *plVar3;
  undefined4 uVar4;
  undefined8 uVar5;
  undefined8 uStack_40;
  undefined8 uStack_38;
  
  uStack_38 = 0;
  plVar3 = *(long **)(param_1 + 0x30);
  uStack_40 = 0;
  native_UnityEngine_Vector4___ctor_776f24(0x3f800000,0x3f800000,0x3f800000,0x3f800000,&uStack_40,0)
  ;
  if (plVar3 == (long *)0x0) goto LAB_0073fea0;
  (**(code **)(*plVar3 + 0x5d8))
            ((undefined4)uStack_40,uStack_40._4_4_,uStack_38 & 0xffffffff,uStack_38._4_4_,plVar3,
             *(undefined8 *)(*plVar3 + 0x5e0));
  switch(param_2) {
  case 0:
    if (*(long *)(param_1 + 0x30) == 0) goto LAB_0073fea0;
    native_TMPro_TMP_Text__set_alignment_4bb268(*(long *)(param_1 + 0x30),0x101,0);
    if ((*(long *)(param_1 + 0x30) == 0) ||
       (lVar1 = native_TMPro_TMP_Text__get_rectTransform_4b9320(*(long *)(param_1 + 0x30),0),
       lVar1 == 0)) goto LAB_0073fea0;
    native_UnityEngine_RectTransform__set_pivot_765158(0,0x3f800000,lVar1,0);
    lVar1 = *(long *)(param_1 + 0x40);
    if (lVar1 == 0) goto LAB_0073fea0;
    lVar2 = *(long *)(param_1 + 0x38);
    uVar5 = 0x3f800000;
    uVar4 = 0;
    break;
  case 1:
    if (*(long *)(param_1 + 0x30) == 0) goto LAB_0073fea0;
    native_TMPro_TMP_Text__set_alignment_4bb268(*(long *)(param_1 + 0x30),0x401,0);
    if ((*(long *)(param_1 + 0x30) == 0) ||
       (lVar1 = native_TMPro_TMP_Text__get_rectTransform_4b9320(*(long *)(param_1 + 0x30),0),
       lVar1 == 0)) goto LAB_0073fea0;
    native_UnityEngine_RectTransform__set_pivot_765158(0,0,lVar1,0);
    lVar1 = *(long *)(param_1 + 0x40);
    if (lVar1 == 0) goto LAB_0073fea0;
    lVar2 = *(long *)(param_1 + 0x38);
    uVar4 = 0;
    goto code_r0x0073fe70;
  case 2:
    if (*(long *)(param_1 + 0x30) == 0) goto LAB_0073fea0;
    native_TMPro_TMP_Text__set_alignment_4bb268(*(long *)(param_1 + 0x30),0x104,0);
    if ((*(long *)(param_1 + 0x30) == 0) ||
       (lVar1 = native_TMPro_TMP_Text__get_rectTransform_4b9320(*(long *)(param_1 + 0x30),0),
       lVar1 == 0)) goto LAB_0073fea0;
    native_UnityEngine_RectTransform__set_pivot_765158(0x3f800000,0x3f800000,lVar1,0);
    lVar1 = *(long *)(param_1 + 0x40);
    if (lVar1 == 0) goto LAB_0073fea0;
    lVar2 = *(long *)(param_1 + 0x38);
    uVar4 = 0x3f800000;
    uVar5 = 0x3f800000;
    break;
  case 3:
    if (*(long *)(param_1 + 0x30) == 0) goto LAB_0073fea0;
    native_TMPro_TMP_Text__set_alignment_4bb268(*(long *)(param_1 + 0x30),0x404,0);
    if ((*(long *)(param_1 + 0x30) == 0) ||
       (lVar1 = native_TMPro_TMP_Text__get_rectTransform_4b9320(*(long *)(param_1 + 0x30),0),
       lVar1 == 0)) goto LAB_0073fea0;
    native_UnityEngine_RectTransform__set_pivot_765158(0x3f800000,0,lVar1,0);
    lVar1 = *(long *)(param_1 + 0x40);
    if (lVar1 == 0) goto LAB_0073fea0;
    lVar2 = *(long *)(param_1 + 0x38);
    uVar4 = 0x3f800000;
code_r0x0073fe70:
    uVar5 = 0;
    break;
  default:
    goto LAB_0073fe8c;
  }
  native_UnityEngine_Camera__ViewportToWorldPoint_8d9168(uVar4,uVar5,0x42c80000,lVar1,0);
  if (lVar2 == 0) {
LAB_0073fea0:
                    /* WARNING: Subroutine does not return */
    native_sub_432810();
  }
  native_UnityEngine_Transform__set_position_77174c(lVar2,0);
LAB_0073fe8c:
  return;
}



/* TMPro.Examples.TMP_FrameRateCounter$$.ctor @ 0x740040
 * void TMPro_Examples_TMP_FrameRateCounter___ctor (TMPro_Examples_TMP_FrameRateCounter_o* __this, const MethodInfo* method); */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* TMPro.Examples.TMP_FrameRateCounter$$.ctor
   void TMPro_Examples_TMP_FrameRateCounter___ctor (TMPro_Examples_TMP_FrameRateCounter_o* __this,
   const MethodInfo* method); */

undefined1  [16] native_TMPro_Examples_TMP_FrameRateCounter___ctor_740040(ulong param_1)

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


