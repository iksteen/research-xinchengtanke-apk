/* ARM64 IL2CPP native pseudocode from Ghidra.
 * Recovered implementation, not original C# source.
 * Function boundaries follow the IL2CPP method address table. */


/* MG_BlocksEngine2.Serializer.DefineItem$$.ctor @ 0xdecca4
 * void MG_BlocksEngine2_Serializer_DefineItem___ctor (MG_BlocksEngine2_Serializer_DefineItem_o* __this, System_String_o* type, System_String_o* value, const MethodInfo* method); */

/* MG_BlocksEngine2.Serializer.DefineItem$$.ctor
   void MG_BlocksEngine2_Serializer_DefineItem___ctor (MG_BlocksEngine2_Serializer_DefineItem_o*
   __this, System_String_o* type, System_String_o* value, const MethodInfo* method); */

void native_MG_BlocksEngine2_Serializer_DefineItem___ctor_decca4
               (long param_1,undefined8 param_2,undefined8 param_3)

{
  ulong *puVar1;
  char cVar2;
  bool bVar3;
  undefined8 *puVar4;
  
  native_System_Object___ctor_ad2798(param_1,0);
  *(undefined8 *)(param_1 + 0x10) = param_2;
  native_sub_4326e0((undefined8 *)(param_1 + 0x10),param_2);
  puVar4 = (undefined8 *)(param_1 + 0x18);
  *puVar4 = param_3;
  if (iRam0000000001345318 != 0) {
    puVar1 = (ulong *)(((ulong)puVar4 >> 0x12 & 0x7fff) * 8 + 0x138ecd8);
    do {
      cVar2 = '\x01';
      bVar3 = (bool)ExclusiveMonitorPass(puVar1,0x10);
      if (bVar3) {
        *puVar1 = *puVar1 | 1L << ((ulong)puVar4 >> 0xc & 0x3f);
        cVar2 = ExclusiveMonitorsStatus();
      }
    } while (cVar2 != '\0');
  }
  return;
}


