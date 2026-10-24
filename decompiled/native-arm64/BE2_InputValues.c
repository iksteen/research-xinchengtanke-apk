/* ARM64 IL2CPP native pseudocode from Ghidra.
 * Recovered implementation, not original C# source.
 * Function boundaries follow the IL2CPP method address table. */


/* MG_BlocksEngine2.Block.BE2_InputValues$$.ctor @ 0x6033d4
 * void MG_BlocksEngine2_Block_BE2_InputValues___ctor (MG_BlocksEngine2_Block_BE2_InputValues_o* __this, System_String_o* stringValue, float floatValue, bool isText, const MethodInfo* method); */

/* MG_BlocksEngine2.Block.BE2_InputValues$$.ctor
   void MG_BlocksEngine2_Block_BE2_InputValues___ctor (MG_BlocksEngine2_Block_BE2_InputValues_o*
   __this, System_String_o* stringValue, float floatValue, bool isText, const MethodInfo* method);
    */

void native_MG_BlocksEngine2_Block_BE2_InputValues___ctor_6033d4
               (undefined4 param_1,long param_2,undefined8 param_3,byte param_4)

{
  native_System_Object___ctor_ad2798(param_2,0);
  *(undefined8 *)(param_2 + 0x18) = param_3;
  *(byte *)(param_2 + 0x10) = param_4 & 1;
  native_sub_4326e0((undefined8 *)(param_2 + 0x18),param_3);
  *(undefined4 *)(param_2 + 0x20) = param_1;
  return;
}


