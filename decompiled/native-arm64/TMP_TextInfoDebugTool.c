/* ARM64 IL2CPP native pseudocode from Ghidra.
 * Recovered implementation, not original C# source.
 * Function boundaries follow the IL2CPP method address table. */


/* TMPro.Examples.TMP_TextInfoDebugTool$$.ctor @ 0x6dc99c
 * void TMPro_Examples_TMP_TextInfoDebugTool___ctor (TMPro_Examples_TMP_TextInfoDebugTool_o* __this, const MethodInfo* method); */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* TMPro.Examples.TMP_TextInfoDebugTool$$.ctor
   void TMPro_Examples_TMP_TextInfoDebugTool___ctor (TMPro_Examples_TMP_TextInfoDebugTool_o* __this,
   const MethodInfo* method); */

undefined1  [16] native_TMPro_Examples_TMP_TextInfoDebugTool___ctor_6dc99c(ulong param_1)

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


