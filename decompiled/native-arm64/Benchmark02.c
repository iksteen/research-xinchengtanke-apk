/* ARM64 IL2CPP native pseudocode from Ghidra.
 * Recovered implementation, not original C# source.
 * Function boundaries follow the IL2CPP method address table. */


/* TMPro.Examples.Benchmark02$$Start @ 0xdd25c8
 * void TMPro_Examples_Benchmark02__Start (TMPro_Examples_Benchmark02_o* __this, const MethodInfo* method); */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* TMPro.Examples.Benchmark02$$Start
   void TMPro_Examples_Benchmark02__Start (TMPro_Examples_Benchmark02_o* __this, const MethodInfo*
   method); */

void native_TMPro_Examples_Benchmark02__Start_dd25c8(long param_1)

{
  long *plVar1;
  int iVar2;
  long lVar3;
  long lVar4;
  long *plVar5;
  long lVar6;
  long lVar7;
  int iVar8;
  undefined8 uVar9;
  undefined8 uVar10;
  undefined4 auStack_b8 [2];
  undefined4 auStack_b0 [2];
  undefined4 auStack_a8 [2];
  
  if ((bRam0000000001346e38 & 1) == 0) {
    native_sub_43273c(&Method_UnityEngine_Component_GetComponent_Renderer____12e2ad8);
    native_sub_43273c(&Method_UnityEngine_GameObject_AddComponent_Canvas____12e47d0);
    native_sub_43273c(&Method_UnityEngine_GameObject_AddComponent_TextMeshProFloatingText____12e48b0
                     );
    native_sub_43273c(&Method_UnityEngine_GameObject_AddComponent_TextMeshProUGUI____12e48b8);
    native_sub_43273c(&Method_UnityEngine_GameObject_AddComponent_TextMeshPro____12e48a8);
    native_sub_43273c(&Method_UnityEngine_GameObject_AddComponent_TextMesh____12e48a0);
    native_sub_43273c(&UnityEngine_GameObject_TypeInfo_12d47d8);
    native_sub_43273c(&Method_UnityEngine_Resources_Load_Font____12e6320);
    native_sub_43273c(&StringLiteral___12eaf78);
    native_sub_43273c(&StringLiteral_Fonts_ARIAL_12ee040);
    bRam0000000001346e38 = 1;
  }
  if (0 < *(int *)(param_1 + 0x1c)) {
    iVar8 = 0;
    plVar1 = (long *)(param_1 + 0x28);
    do {
      iVar2 = *(int *)(param_1 + 0x18);
      if (iVar2 == 2) {
        lVar3 = native_sub_432808(_UnityEngine_GameObject_TypeInfo_12d47d8);
        native_UnityEngine_GameObject___ctor_8de914(lVar3,0);
        if (lVar3 == 0) {
LAB_00dd2c18:
                    /* WARNING: Subroutine does not return */
          native_sub_432810();
        }
        lVar4 = native_UnityEngine_GameObject__AddComponent_ActiveAnimation__4a2118
                          (lVar3,_Method_UnityEngine_GameObject_AddComponent_Canvas____12e47d0);
        uVar9 = native_UnityEngine_Camera__get_main_8d93c0(0);
        if (lVar4 == 0) goto LAB_00dd2c18;
        native_UnityEngine_Canvas__set_worldCamera_db66c0(lVar4,uVar9,0);
        lVar4 = native_UnityEngine_GameObject__get_transform_8de5c8(lVar3,0);
        if (lVar4 == 0) goto LAB_00dd2c18;
        native_UnityEngine_Transform__set_localScale_771e30
                  (0x3dcccccd,0x3dcccccd,0x3dcccccd,lVar4,0);
        lVar4 = native_UnityEngine_GameObject__get_transform_8de5c8(lVar3,0);
        uVar9 = native_UnityEngine_Random__Range_76305c(0xc2be0000,0x42be0000,0);
        uVar10 = native_UnityEngine_Random__Range_76305c(0xc2be0000,0x42be0000,0);
        if (lVar4 == 0) goto LAB_00dd2c18;
        native_UnityEngine_Transform__set_position_77174c(uVar9,0x40a00000,uVar10,lVar4,0);
        lVar4 = native_sub_432808(_UnityEngine_GameObject_TypeInfo_12d47d8);
        native_UnityEngine_GameObject___ctor_8de914(lVar4,0);
        if ((lVar4 == 0) ||
           (plVar5 = (long *)native_UnityEngine_GameObject__AddComponent_ActiveAnimation__4a2118
                                       (lVar4,
                                        _Method_UnityEngine_GameObject_AddComponent_TextMeshProUGUI____12e48b8
                                       ), plVar5 == (long *)0x0)) goto LAB_00dd2c18;
        lVar4 = native_TMPro_TMP_Text__get_rectTransform_4b9320(plVar5,0);
        uVar9 = native_UnityEngine_GameObject__get_transform_8de5c8(lVar3,0);
        if (lVar4 == 0) goto LAB_00dd2c18;
        native_UnityEngine_Transform__SetParent_7720e0(lVar4,uVar9,0,0);
        auStack_b8[0] = 0;
        native_UnityEngine_Color32___ctor_8d9fa0(auStack_b8,0xff,0xff,0,0xff,0);
        native_UnityEngine_Color32__op_Implicit_8da288(auStack_b8[0],0);
        (**(code **)(*plVar5 + 0x2a8))(plVar5,*(undefined8 *)(*plVar5 + 0x2b0));
        native_TMPro_TMP_Text__set_alignment_4bb268(plVar5,0x402,0);
        native_TMPro_TMP_Text__set_fontSize_4bae20(0x42c00000,plVar5,0);
        (**(code **)(*plVar5 + 0x558))
                  (plVar5,_StringLiteral___12eaf78,*(undefined8 *)(*plVar5 + 0x560));
        lVar3 = native_UnityEngine_GameObject__AddComponent_ActiveAnimation__4a2118
                          (lVar3,
                           _Method_UnityEngine_GameObject_AddComponent_TextMeshProFloatingText____12e48b0
                          );
        *plVar1 = lVar3;
        native_sub_4326e0(plVar1,lVar3);
        if (*plVar1 == 0) goto LAB_00dd2c18;
        *(undefined4 *)(*plVar1 + 0x6c) = 0;
      }
      else if (iVar2 == 1) {
        lVar3 = native_sub_432808(_UnityEngine_GameObject_TypeInfo_12d47d8);
        native_UnityEngine_GameObject___ctor_8de914(lVar3,0);
        if (lVar3 == 0) goto LAB_00dd2c18;
        lVar4 = native_UnityEngine_GameObject__get_transform_8de5c8(lVar3,0);
        uVar9 = native_UnityEngine_Random__Range_76305c(0xc2be0000,0x42be0000,0);
        uVar10 = native_UnityEngine_Random__Range_76305c(0xc2be0000,0x42be0000,0);
        if (lVar4 == 0) goto LAB_00dd2c18;
        native_UnityEngine_Transform__set_position_77174c(uVar9,0x3e800000,uVar10,lVar4,0);
        lVar4 = native_UnityEngine_GameObject__AddComponent_ActiveAnimation__4a2118
                          (lVar3,_Method_UnityEngine_GameObject_AddComponent_TextMesh____12e48a0);
        uVar9 = native_UnityEngine_Resources__Load_Font__4a7de0
                          (_StringLiteral_Fonts_ARIAL_12ee040,
                           _Method_UnityEngine_Resources_Load_Font____12e6320);
        if (lVar4 == 0) goto LAB_00dd2c18;
        native_UnityEngine_TextMesh__set_font_db58b0(lVar4,uVar9,0);
        lVar6 = native_UnityEngine_Component__GetComponent_ActiveAnimation__49daec
                          (lVar4,_Method_UnityEngine_Component_GetComponent_Renderer____12e2ad8);
        lVar7 = native_UnityEngine_TextMesh__get_font_db5870(lVar4,0);
        if ((lVar7 == 0) ||
           (uVar9 = native_UnityEngine_Font__get_material_db3b30(lVar7,0), lVar6 == 0))
        goto LAB_00dd2c18;
        native_UnityEngine_Renderer__set_sharedMaterial_768f9c(lVar6,uVar9,0);
        native_UnityEngine_TextMesh__set_anchor_db5950(lVar4,7,0);
        native_UnityEngine_TextMesh__set_fontSize_db5900(lVar4,0x60,0);
        auStack_b0[0] = 0;
        native_UnityEngine_Color32___ctor_8d9fa0(auStack_b0,0xff,0xff,0,0xff,0);
        native_UnityEngine_Color32__op_Implicit_8da288(auStack_b0[0],0);
        native_UnityEngine_TextMesh__set_color_db5a4c(lVar4,0);
        native_UnityEngine_TextMesh__set_text_db5820(lVar4,_StringLiteral___12eaf78,0);
        lVar3 = native_UnityEngine_GameObject__AddComponent_ActiveAnimation__4a2118
                          (lVar3,
                           _Method_UnityEngine_GameObject_AddComponent_TextMeshProFloatingText____12e48b0
                          );
        *plVar1 = lVar3;
        native_sub_4326e0(plVar1,lVar3);
        if (*plVar1 == 0) goto LAB_00dd2c18;
        *(undefined4 *)(*plVar1 + 0x6c) = 1;
      }
      else if (iVar2 == 0) {
        lVar3 = native_sub_432808(_UnityEngine_GameObject_TypeInfo_12d47d8);
        native_UnityEngine_GameObject___ctor_8de914(lVar3,0);
        if (lVar3 == 0) goto LAB_00dd2c18;
        lVar4 = native_UnityEngine_GameObject__get_transform_8de5c8(lVar3,0);
        uVar9 = native_UnityEngine_Random__Range_76305c(0xc2be0000,0x42be0000,0);
        uVar10 = native_UnityEngine_Random__Range_76305c(0xc2be0000,0x42be0000,0);
        if (lVar4 == 0) goto LAB_00dd2c18;
        native_UnityEngine_Transform__set_position_77174c(uVar9,0x3e800000,uVar10,lVar4,0);
        plVar5 = (long *)native_UnityEngine_GameObject__AddComponent_ActiveAnimation__4a2118
                                   (lVar3,
                                    _Method_UnityEngine_GameObject_AddComponent_TextMeshPro____12e48a8
                                   );
        if (plVar5 == (long *)0x0) goto LAB_00dd2c18;
        (**(code **)(*plVar5 + 0x5f8))(plVar5,1,*(undefined8 *)(*plVar5 + 0x600));
        lVar4 = native_TMPro_TMP_Text__get_rectTransform_4b9320(plVar5,0);
        if (lVar4 == 0) goto LAB_00dd2c18;
        native_UnityEngine_RectTransform__set_pivot_765158(0x3f000000,0,lVar4,0);
        native_TMPro_TMP_Text__set_alignment_4bb268(plVar5,0x402,0);
        native_TMPro_TMP_Text__set_fontSize_4bae20(0x42c00000,plVar5,0);
        native_TMPro_TMP_Text__set_enableKerning_4bb9a4(plVar5,0,0);
        auStack_a8[0] = 0;
        native_UnityEngine_Color32___ctor_8d9fa0(auStack_a8,0xff,0xff,0,0xff,0);
        native_UnityEngine_Color32__op_Implicit_8da288(auStack_a8[0],0);
        (**(code **)(*plVar5 + 0x2a8))(plVar5,*(undefined8 *)(*plVar5 + 0x2b0));
        (**(code **)(*plVar5 + 0x558))
                  (plVar5,_StringLiteral___12eaf78,*(undefined8 *)(*plVar5 + 0x560));
        native_TMPro_TMP_Text__set_isTextObjectScaleStatic_4bbd6c
                  (plVar5,*(undefined1 *)(param_1 + 0x20),0);
        uVar9 = native_UnityEngine_GameObject__AddComponent_ActiveAnimation__4a2118
                          (lVar3,
                           _Method_UnityEngine_GameObject_AddComponent_TextMeshProFloatingText____12e48b0
                          );
        *(undefined8 *)(param_1 + 0x28) = uVar9;
        native_sub_4326e0(plVar1,uVar9);
        if (*(long *)(param_1 + 0x28) == 0) goto LAB_00dd2c18;
        *(undefined4 *)(*(long *)(param_1 + 0x28) + 0x6c) = 0;
        if (*plVar1 == 0) goto LAB_00dd2c18;
        *(undefined1 *)(*plVar1 + 0x70) = *(undefined1 *)(param_1 + 0x20);
      }
      iVar8 = iVar8 + 1;
    } while (iVar8 < *(int *)(param_1 + 0x1c));
  }
  return;
}



/* TMPro.Examples.Benchmark02$$.ctor @ 0xdd2c1c
 * void TMPro_Examples_Benchmark02___ctor (TMPro_Examples_Benchmark02_o* __this, const MethodInfo* method); */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* TMPro.Examples.Benchmark02$$.ctor
   void TMPro_Examples_Benchmark02___ctor (TMPro_Examples_Benchmark02_o* __this, const MethodInfo*
   method); */

undefined1  [16] native_TMPro_Examples_Benchmark02___ctor_dd2c1c(ulong param_1)

{
  undefined1 auVar1 [16];
  
  *(undefined4 *)(param_1 + 0x1c) = 0xc;
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


