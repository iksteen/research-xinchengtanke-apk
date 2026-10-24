/* ARM64 IL2CPP native pseudocode from Ghidra.
 * Recovered implementation, not original C# source.
 * Function boundaries follow the IL2CPP method address table. */


/* TMPro.Examples.TMP_ExampleScript_01$$Awake @ 0x73f7b8
 * void TMPro_Examples_TMP_ExampleScript_01__Awake (TMPro_Examples_TMP_ExampleScript_01_o* __this, const MethodInfo* method); */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* TMPro.Examples.TMP_ExampleScript_01$$Awake
   void TMPro_Examples_TMP_ExampleScript_01__Awake (TMPro_Examples_TMP_ExampleScript_01_o* __this,
   const MethodInfo* method); */

void native_TMPro_Examples_TMP_ExampleScript_01__Awake_73f7b8(long param_1)

{
  long lVar1;
  undefined8 uVar2;
  undefined8 *puVar3;
  long *plVar4;
  long *plVar5;
  
  if ((bRam000000000133f631 & 1) == 0) {
    native_sub_43273c(&Method_UnityEngine_Component_GetComponent_TextMeshProUGUI____12e2b50);
    native_sub_43273c(&Method_UnityEngine_Component_GetComponent_TextMeshPro____12e2b48);
    native_sub_43273c(&Method_UnityEngine_GameObject_AddComponent_TextMeshProUGUI____12e48b8);
    native_sub_43273c(&Method_UnityEngine_GameObject_AddComponent_TextMeshPro____12e48a8);
    native_sub_43273c(&Method_UnityEngine_Resources_Load_Material____12e6330);
    native_sub_43273c(&Method_UnityEngine_Resources_Load_TMP_FontAsset____12e6340);
    native_sub_43273c(&StringLiteral_A___0080ff_simple__color__line_of_text__12ec028);
    native_sub_43273c(&StringLiteral_Fonts___Materials_Anton_SDF___Drop_Shadow_12ee018);
    native_sub_43273c(&StringLiteral_Fonts___Materials_Anton_SDF_12ee010);
    bRam000000000133f631 = 1;
  }
  if (*(int *)(param_1 + 0x18) == 0) {
    lVar1 = native_UnityEngine_Component__GetComponent_ActiveAnimation__49daec
                      (param_1,_Method_UnityEngine_Component_GetComponent_TextMeshPro____12e2b48);
    if (lVar1 == 0) {
      lVar1 = native_UnityEngine_Component__get_gameObject_8da66c(param_1);
      if (lVar1 == 0) goto LAB_0073f9d0;
      puVar3 = (undefined8 *)&Method_UnityEngine_GameObject_AddComponent_TextMeshPro____12e48a8;
      goto LAB_0073f8b8;
    }
  }
  else {
    lVar1 = native_UnityEngine_Component__GetComponent_ActiveAnimation__49daec
                      (param_1,_Method_UnityEngine_Component_GetComponent_TextMeshProUGUI____12e2b50
                      );
    if (lVar1 == 0) {
      lVar1 = native_UnityEngine_Component__get_gameObject_8da66c(param_1);
      if (lVar1 == 0) goto LAB_0073f9d0;
      puVar3 = (undefined8 *)&Method_UnityEngine_GameObject_AddComponent_TextMeshProUGUI____12e48b8;
LAB_0073f8b8:
      lVar1 = native_UnityEngine_GameObject__AddComponent_ActiveAnimation__4a2118(lVar1,*puVar3);
    }
  }
  plVar4 = (long *)(param_1 + 0x20);
  *plVar4 = lVar1;
  native_sub_4326e0(plVar4);
  lVar1 = *plVar4;
  uVar2 = native_UnityEngine_Resources__Load_Font__4a7de0
                    (_StringLiteral_Fonts___Materials_Anton_SDF_12ee010,
                     _Method_UnityEngine_Resources_Load_TMP_FontAsset____12e6340);
  if (lVar1 != 0) {
    native_TMPro_TMP_Text__set_font_4ba17c(lVar1,uVar2,0);
    plVar5 = (long *)*plVar4;
    uVar2 = native_UnityEngine_Resources__Load_Font__4a7de0
                      (_StringLiteral_Fonts___Materials_Anton_SDF___Drop_Shadow_12ee018,
                       _Method_UnityEngine_Resources_Load_Material____12e6330);
    if (plVar5 != (long *)0x0) {
      (**(code **)(*plVar5 + 0x578))(plVar5,uVar2,*(undefined8 *)(*plVar5 + 0x580));
      if (*plVar4 != 0) {
        native_TMPro_TMP_Text__set_fontSize_4bae20(0x42f00000,*plVar4,0);
        plVar5 = (long *)*plVar4;
        if (plVar5 != (long *)0x0) {
          (**(code **)(*plVar5 + 0x558))
                    (plVar5,_StringLiteral_A___0080ff_simple__color__line_of_text__12ec028,
                     *(undefined8 *)(*plVar5 + 0x560));
          if (*plVar4 != 0) {
            native_TMPro_TMP_Text__GetPreferredValues_4c0e9c(*plVar4,0);
            if ((*plVar4 != 0) &&
               (lVar1 = native_TMPro_TMP_Text__get_rectTransform_4b9320(*plVar4,0), lVar1 != 0)) {
              if (pcRam000000000133f8e8 == (code *)0x0) {
                pcRam000000000133f8e8 = (code *)native_sub_4326f0(&UNK_00e28502,0);
              }
              (*pcRam000000000133f8e8)(lVar1,&stack0xffffffffffffffd8);
              return;
            }
          }
        }
      }
    }
  }
LAB_0073f9d0:
                    /* WARNING: Subroutine does not return */
  native_sub_432810();
}



/* TMPro.Examples.TMP_ExampleScript_01$$Update @ 0x73f9d4
 * void TMPro_Examples_TMP_ExampleScript_01__Update (TMPro_Examples_TMP_ExampleScript_01_o* __this, const MethodInfo* method); */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* TMPro.Examples.TMP_ExampleScript_01$$Update
   void TMPro_Examples_TMP_ExampleScript_01__Update (TMPro_Examples_TMP_ExampleScript_01_o* __this,
   const MethodInfo* method); */

void native_TMPro_Examples_TMP_ExampleScript_01__Update_73f9d4(long param_1)

{
  if ((bRam000000000133f632 & 1) == 0) {
    native_sub_43273c(&StringLiteral_The_count_is___0080ff__0___color__12f1be0);
    bRam000000000133f632 = 1;
  }
  if (*(char *)(param_1 + 0x1c) == '\0') {
    if (*(long *)(param_1 + 0x20) == 0) {
                    /* WARNING: Subroutine does not return */
      native_sub_432810();
    }
    native_TMPro_TMP_Text__SetText_4bf80c
              ((float)(*(int *)(param_1 + 0x28) % 1000),*(long *)(param_1 + 0x20),
               _StringLiteral_The_count_is___0080ff__0___color__12f1be0,0);
    *(int *)(param_1 + 0x28) = *(int *)(param_1 + 0x28) + 1;
  }
  return;
}



/* TMPro.Examples.TMP_ExampleScript_01$$.ctor @ 0x73fa6c
 * void TMPro_Examples_TMP_ExampleScript_01___ctor (TMPro_Examples_TMP_ExampleScript_01_o* __this, const MethodInfo* method); */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* TMPro.Examples.TMP_ExampleScript_01$$.ctor
   void TMPro_Examples_TMP_ExampleScript_01___ctor (TMPro_Examples_TMP_ExampleScript_01_o* __this,
   const MethodInfo* method); */

undefined1  [16] native_TMPro_Examples_TMP_ExampleScript_01___ctor_73fa6c(ulong param_1)

{
  undefined1 auVar1 [16];
  
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


