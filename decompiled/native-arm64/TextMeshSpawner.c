/* ARM64 IL2CPP native pseudocode from Ghidra.
 * Recovered implementation, not original C# source.
 * Function boundaries follow the IL2CPP method address table. */


/* TMPro.Examples.TextMeshSpawner$$Awake @ 0x6e25c0
 * void TMPro_Examples_TextMeshSpawner__Awake (TMPro_Examples_TextMeshSpawner_o* __this, const MethodInfo* method); */

/* TMPro.Examples.TextMeshSpawner$$Awake
   void TMPro_Examples_TextMeshSpawner__Awake (TMPro_Examples_TextMeshSpawner_o* __this, const
   MethodInfo* method); */

void native_TMPro_Examples_TextMeshSpawner__Awake_6e25c0(void)

{
  return;
}



/* TMPro.Examples.TextMeshSpawner$$Start @ 0x6e25c4
 * void TMPro_Examples_TextMeshSpawner__Start (TMPro_Examples_TextMeshSpawner_o* __this, const MethodInfo* method); */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* TMPro.Examples.TextMeshSpawner$$Start
   void TMPro_Examples_TextMeshSpawner__Start (TMPro_Examples_TextMeshSpawner_o* __this, const
   MethodInfo* method); */

void native_TMPro_Examples_TextMeshSpawner__Start_6e25c4(long param_1)

{
  long *plVar1;
  int iVar2;
  long lVar3;
  long lVar4;
  long lVar5;
  long *plVar6;
  int iVar7;
  undefined8 uVar8;
  undefined8 uVar9;
  undefined4 auStack_98 [2];
  undefined4 auStack_88 [2];
  
  if ((bRam000000000133f38c & 1) == 0) {
    native_sub_43273c(&Method_UnityEngine_Component_GetComponent_Renderer____12e2ad8);
    native_sub_43273c(&Method_UnityEngine_GameObject_AddComponent_TextMeshProFloatingText____12e48b0
                     );
    native_sub_43273c(&Method_UnityEngine_GameObject_AddComponent_TextMeshPro____12e48a8);
    native_sub_43273c(&Method_UnityEngine_GameObject_AddComponent_TextMesh____12e48a0);
    native_sub_43273c(&UnityEngine_GameObject_TypeInfo_12d47d8);
    native_sub_43273c(&StringLiteral___12eaf78);
    bRam000000000133f38c = 1;
  }
  if (0 < *(int *)(param_1 + 0x1c)) {
    iVar7 = 0;
    plVar1 = (long *)(param_1 + 0x28);
    do {
      iVar2 = *(int *)(param_1 + 0x18);
      lVar3 = native_sub_432808(_UnityEngine_GameObject_TypeInfo_12d47d8);
      native_UnityEngine_GameObject___ctor_8de914(lVar3,0);
      if (lVar3 == 0) goto LAB_006e2904;
      lVar4 = native_UnityEngine_GameObject__get_transform_8de5c8(lVar3,0);
      uVar8 = native_UnityEngine_Random__Range_76305c(0xc2be0000,0x42be0000,0);
      uVar9 = native_UnityEngine_Random__Range_76305c(0xc2be0000,0x42be0000,0);
      if (iVar2 == 0) {
        if (lVar4 == 0) goto LAB_006e2904;
        native_UnityEngine_Transform__set_position_77174c(uVar8,0x3f000000,uVar9,lVar4,0);
        plVar6 = (long *)native_UnityEngine_GameObject__AddComponent_ActiveAnimation__4a2118
                                   (lVar3,
                                    _Method_UnityEngine_GameObject_AddComponent_TextMeshPro____12e48a8
                                   );
        if (plVar6 == (long *)0x0) goto LAB_006e2904;
        native_TMPro_TMP_Text__set_fontSize_4bae20(0x42c00000,plVar6,0);
        (**(code **)(*plVar6 + 0x558))
                  (plVar6,_StringLiteral___12eaf78,*(undefined8 *)(*plVar6 + 0x560));
        auStack_88[0] = 0;
        native_UnityEngine_Color32___ctor_8d9fa0(auStack_88,0xff,0xff,0,0xff,0);
        native_UnityEngine_Color32__op_Implicit_8da288(auStack_88[0],0);
        (**(code **)(*plVar6 + 0x2a8))(plVar6,*(undefined8 *)(*plVar6 + 0x2b0));
        lVar3 = native_UnityEngine_GameObject__AddComponent_ActiveAnimation__4a2118
                          (lVar3,
                           _Method_UnityEngine_GameObject_AddComponent_TextMeshProFloatingText____12e48b0
                          );
        *plVar1 = lVar3;
        native_sub_4326e0(plVar1,lVar3);
        if (*plVar1 == 0) goto LAB_006e2904;
        *(undefined4 *)(*plVar1 + 0x6c) = 0;
      }
      else {
        if (lVar4 == 0) {
LAB_006e2904:
                    /* WARNING: Subroutine does not return */
          native_sub_432810();
        }
        native_UnityEngine_Transform__set_position_77174c(uVar8,0x3f000000,uVar9,lVar4,0);
        lVar4 = native_UnityEngine_GameObject__AddComponent_ActiveAnimation__4a2118
                          (lVar3,_Method_UnityEngine_GameObject_AddComponent_TextMesh____12e48a0);
        if (lVar4 == 0) goto LAB_006e2904;
        lVar5 = native_UnityEngine_Component__GetComponent_ActiveAnimation__49daec
                          (lVar4,_Method_UnityEngine_Component_GetComponent_Renderer____12e2ad8);
        if ((*(long *)(param_1 + 0x20) == 0) ||
           (uVar8 = native_UnityEngine_Font__get_material_db3b30(*(long *)(param_1 + 0x20),0),
           lVar5 == 0)) goto LAB_006e2904;
        native_UnityEngine_Renderer__set_sharedMaterial_768f9c(lVar5,uVar8,0);
        native_UnityEngine_TextMesh__set_font_db58b0(lVar4,*(undefined8 *)(param_1 + 0x20),0);
        native_UnityEngine_TextMesh__set_anchor_db5950(lVar4,7,0);
        native_UnityEngine_TextMesh__set_fontSize_db5900(lVar4,0x60,0);
        auStack_98[0] = 0;
        native_UnityEngine_Color32___ctor_8d9fa0(auStack_98,0xff,0xff,0,0xff,0);
        native_UnityEngine_Color32__op_Implicit_8da288(auStack_98[0],0);
        native_UnityEngine_TextMesh__set_color_db5a4c(lVar4,0);
        native_UnityEngine_TextMesh__set_text_db5820(lVar4,_StringLiteral___12eaf78,0);
        uVar8 = native_UnityEngine_GameObject__AddComponent_ActiveAnimation__4a2118
                          (lVar3,
                           _Method_UnityEngine_GameObject_AddComponent_TextMeshProFloatingText____12e48b0
                          );
        *(undefined8 *)(param_1 + 0x28) = uVar8;
        native_sub_4326e0(plVar1,uVar8);
        if (*(long *)(param_1 + 0x28) == 0) goto LAB_006e2904;
        *(undefined4 *)(*(long *)(param_1 + 0x28) + 0x6c) = 1;
      }
      iVar7 = iVar7 + 1;
    } while (iVar7 < *(int *)(param_1 + 0x1c));
  }
  return;
}



/* TMPro.Examples.TextMeshSpawner$$.ctor @ 0x6e2908
 * void TMPro_Examples_TextMeshSpawner___ctor (TMPro_Examples_TextMeshSpawner_o* __this, const MethodInfo* method); */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* TMPro.Examples.TextMeshSpawner$$.ctor
   void TMPro_Examples_TextMeshSpawner___ctor (TMPro_Examples_TextMeshSpawner_o* __this, const
   MethodInfo* method); */

undefined1  [16] native_TMPro_Examples_TextMeshSpawner___ctor_6e2908(ulong param_1)

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


