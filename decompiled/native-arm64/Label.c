/* ARM64 IL2CPP native pseudocode from Ghidra.
 * Recovered implementation, not original C# source.
 * Function boundaries follow the IL2CPP method address table. */


/* MG_BlocksEngine2.UI.FunctionBlock.Label$$.ctor @ 0x7f7be8
 * void MG_BlocksEngine2_UI_FunctionBlock_Label___ctor (MG_BlocksEngine2_UI_FunctionBlock_Label_o* __this, const MethodInfo* method); */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* MG_BlocksEngine2.UI.FunctionBlock.Label$$.ctor
   void MG_BlocksEngine2_UI_FunctionBlock_Label___ctor (MG_BlocksEngine2_UI_FunctionBlock_Label_o*
   __this, const MethodInfo* method); */

undefined1  [16] native_MG_BlocksEngine2_UI_FunctionBlock_Label___ctor_7f7be8(ulong param_1)

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


