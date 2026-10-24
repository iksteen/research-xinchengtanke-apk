/* ARM64 IL2CPP native pseudocode from Ghidra.
 * Recovered implementation, not original C# source.
 * Function boundaries follow the IL2CPP method address table. */


/* TMPro.Examples.Benchmark03$$Awake @ 0xdd2c2c
 * void TMPro_Examples_Benchmark03__Awake (TMPro_Examples_Benchmark03_o* __this, const MethodInfo* method); */

/* TMPro.Examples.Benchmark03$$Awake
   void TMPro_Examples_Benchmark03__Awake (TMPro_Examples_Benchmark03_o* __this, const MethodInfo*
   method); */

void native_TMPro_Examples_Benchmark03__Awake_dd2c2c(void)

{
  return;
}



/* TMPro.Examples.Benchmark03$$Start @ 0xdd2c30
 * void TMPro_Examples_Benchmark03__Start (TMPro_Examples_Benchmark03_o* __this, const MethodInfo* method); */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* TMPro.Examples.Benchmark03$$Start
   void TMPro_Examples_Benchmark03__Start (TMPro_Examples_Benchmark03_o* __this, const MethodInfo*
   method); */

void native_TMPro_Examples_Benchmark03__Start_dd2c30(long param_1)

{
  long lVar1;
  long lVar2;
  undefined8 uVar3;
  long *plVar4;
  undefined8 uVar5;
  undefined8 *puVar6;
  long lVar7;
  int iVar8;
  undefined4 auStack_88 [2];
  undefined4 auStack_78 [2];
  
  if ((bRam0000000001346e39 & 1) == 0) {
    native_sub_43273c(&Method_UnityEngine_Component_GetComponent_Renderer____12e2ad8);
    native_sub_43273c(&Method_UnityEngine_GameObject_AddComponent_TextMeshPro____12e48a8);
    native_sub_43273c(&Method_UnityEngine_GameObject_AddComponent_TextMesh____12e48a0);
    native_sub_43273c(&UnityEngine_GameObject_TypeInfo_12d47d8);
    native_sub_43273c(&TMPro_TMP_FontAsset_TypeInfo_12d6008);
    native_sub_43273c(&StringLiteral_TextMeshPro_Distance_Field_12f15f8);
    native_sub_43273c(&StringLiteral___12ec010);
    native_sub_43273c(&StringLiteral_TextMeshPro_Mobile_Distance_Field_SSD_12f1610);
    bRam0000000001346e39 = 1;
  }
  switch(*(undefined4 *)(param_1 + 0x1c)) {
  case 0:
    uVar3 = *(undefined8 *)(param_1 + 0x20);
    if (((*(byte *)(_TMPro_TMP_FontAsset_TypeInfo_12d6008 + 0x133) >> 2 & 1) != 0) &&
       (*(int *)(_TMPro_TMP_FontAsset_TypeInfo_12d6008 + 0xe0) == 0)) {
      native_sub_4327ec();
    }
    uVar5 = 0x1045;
    break;
  case 1:
    uVar3 = *(undefined8 *)(param_1 + 0x20);
    if (((*(byte *)(_TMPro_TMP_FontAsset_TypeInfo_12d6008 + 0x133) >> 2 & 1) != 0) &&
       (*(int *)(_TMPro_TMP_FontAsset_TypeInfo_12d6008 + 0xe0) == 0)) {
      native_sub_4327ec();
    }
    lVar7 = native_TMPro_TMP_FontAsset__CreateFontAsset_665704
                      (uVar3,0x5a,9,0x1045,0x100,0x100,1,1,0);
    if (lVar7 == 0) goto LAB_00dd30e8;
    lVar1 = *(long *)(lVar7 + 0x20);
    puVar6 = (undefined8 *)&StringLiteral_TextMeshPro_Mobile_Distance_Field_SSD_12f1610;
    goto code_r0x00dd2de0;
  case 2:
    uVar3 = *(undefined8 *)(param_1 + 0x20);
    if (((*(byte *)(_TMPro_TMP_FontAsset_TypeInfo_12d6008 + 0x133) >> 2 & 1) != 0) &&
       (*(int *)(_TMPro_TMP_FontAsset_TypeInfo_12d6008 + 0xe0) == 0)) {
      native_sub_4327ec();
    }
    lVar7 = native_TMPro_TMP_FontAsset__CreateFontAsset_665704
                      (uVar3,0x5a,9,0x1045,0x100,0x100,1,1,0);
    if (lVar7 == 0) goto LAB_00dd30e8;
    lVar1 = *(long *)(lVar7 + 0x20);
    puVar6 = (undefined8 *)&StringLiteral_TextMeshPro_Distance_Field_12f15f8;
code_r0x00dd2de0:
    uVar3 = native_UnityEngine_Shader__Find_76b254(*puVar6,0);
    if (lVar1 == 0) {
LAB_00dd30e8:
                    /* WARNING: Subroutine does not return */
      native_sub_432810();
    }
    native_UnityEngine_Material__set_shader_8e30b8(lVar1,uVar3,0);
    goto code_r0x00dd2e60;
  case 3:
    uVar3 = *(undefined8 *)(param_1 + 0x20);
    if (((*(byte *)(_TMPro_TMP_FontAsset_TypeInfo_12d6008 + 0x133) >> 2 & 1) != 0) &&
       (*(int *)(_TMPro_TMP_FontAsset_TypeInfo_12d6008 + 0xe0) == 0)) {
      native_sub_4327ec();
    }
    uVar5 = 0x1015;
    break;
  default:
    lVar7 = 0;
    goto code_r0x00dd2e60;
  }
  lVar7 = native_TMPro_TMP_FontAsset__CreateFontAsset_665704(uVar3,0x5a,9,uVar5,0x100,0x100,1,1,0);
code_r0x00dd2e60:
  if (0 < *(int *)(param_1 + 0x18)) {
    iVar8 = 0;
    do {
      if (*(uint *)(param_1 + 0x1c) < 4) {
        lVar1 = native_sub_432808(_UnityEngine_GameObject_TypeInfo_12d47d8);
        native_UnityEngine_GameObject___ctor_8de914(lVar1,0);
        if ((lVar1 == 0) ||
           (lVar2 = native_UnityEngine_GameObject__get_transform_8de5c8(lVar1,0), lVar2 == 0))
        goto LAB_00dd30e8;
        native_UnityEngine_Transform__set_position_77174c(0,0x3f99999a,0,lVar2,0);
        plVar4 = (long *)native_UnityEngine_GameObject__AddComponent_ActiveAnimation__4a2118
                                   (lVar1,
                                    _Method_UnityEngine_GameObject_AddComponent_TextMeshPro____12e48a8
                                   );
        if (plVar4 == (long *)0x0) goto LAB_00dd30e8;
        native_TMPro_TMP_Text__set_font_4ba17c(plVar4,lVar7,0);
        native_TMPro_TMP_Text__set_fontSize_4bae20(0x43000000,plVar4,0);
        (**(code **)(*plVar4 + 0x558))
                  (plVar4,_StringLiteral___12ec010,*(undefined8 *)(*plVar4 + 0x560));
        native_TMPro_TMP_Text__set_alignment_4bb268(plVar4,0x202,0);
        auStack_78[0] = 0;
        native_UnityEngine_Color32___ctor_8d9fa0(auStack_78,0xff,0xff,0,0xff,0);
        native_UnityEngine_Color32__op_Implicit_8da288(auStack_78[0],0);
        (**(code **)(*plVar4 + 0x2a8))(plVar4,*(undefined8 *)(*plVar4 + 0x2b0));
        if (*(int *)(param_1 + 0x1c) == 3) {
          native_TMPro_TMP_Text__set_fontSize_4bae20(0x43040000,plVar4,0);
        }
      }
      else if (*(uint *)(param_1 + 0x1c) == 4) {
        lVar1 = native_sub_432808(_UnityEngine_GameObject_TypeInfo_12d47d8);
        native_UnityEngine_GameObject___ctor_8de914(lVar1,0);
        if ((lVar1 == 0) ||
           (lVar2 = native_UnityEngine_GameObject__get_transform_8de5c8(lVar1,0), lVar2 == 0))
        goto LAB_00dd30e8;
        native_UnityEngine_Transform__set_position_77174c(0,0x3f99999a,0,lVar2,0);
        lVar1 = native_UnityEngine_GameObject__AddComponent_ActiveAnimation__4a2118
                          (lVar1,_Method_UnityEngine_GameObject_AddComponent_TextMesh____12e48a0);
        if (lVar1 == 0) goto LAB_00dd30e8;
        lVar2 = native_UnityEngine_Component__GetComponent_ActiveAnimation__49daec
                          (lVar1,_Method_UnityEngine_Component_GetComponent_Renderer____12e2ad8);
        if ((*(long *)(param_1 + 0x20) == 0) ||
           (uVar3 = native_UnityEngine_Font__get_material_db3b30(*(long *)(param_1 + 0x20),0),
           lVar2 == 0)) goto LAB_00dd30e8;
        native_UnityEngine_Renderer__set_sharedMaterial_768f9c(lVar2,uVar3,0);
        native_UnityEngine_TextMesh__set_font_db58b0(lVar1,*(undefined8 *)(param_1 + 0x20),0);
        native_UnityEngine_TextMesh__set_anchor_db5950(lVar1,4,0);
        native_UnityEngine_TextMesh__set_fontSize_db5900(lVar1,0x82,0);
        auStack_88[0] = 0;
        native_UnityEngine_Color32___ctor_8d9fa0(auStack_88,0xff,0xff,0,0xff,0);
        native_UnityEngine_Color32__op_Implicit_8da288(auStack_88[0],0);
        native_UnityEngine_TextMesh__set_color_db5a4c(lVar1,0);
        native_UnityEngine_TextMesh__set_text_db5820(lVar1,_StringLiteral___12ec010,0);
      }
      iVar8 = iVar8 + 1;
    } while (iVar8 < *(int *)(param_1 + 0x18));
  }
  return;
}



/* TMPro.Examples.Benchmark03$$.ctor @ 0xdd30ec
 * void TMPro_Examples_Benchmark03___ctor (TMPro_Examples_Benchmark03_o* __this, const MethodInfo* method); */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* TMPro.Examples.Benchmark03$$.ctor
   void TMPro_Examples_Benchmark03___ctor (TMPro_Examples_Benchmark03_o* __this, const MethodInfo*
   method); */

undefined1  [16] native_TMPro_Examples_Benchmark03___ctor_dd30ec(ulong param_1)

{
  undefined1 auVar1 [16];
  
  *(undefined4 *)(param_1 + 0x18) = 100;
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


