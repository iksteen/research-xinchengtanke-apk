/* ARM64 IL2CPP native pseudocode from Ghidra.
 * Recovered implementation, not original C# source.
 * Function boundaries follow the IL2CPP method address table. */


/* MG_BlocksEngine2.Attribute.SerializeAsVariableAttribute$$.ctor @ 0x73d698
 * void MG_BlocksEngine2_Attribute_SerializeAsVariableAttribute___ctor (MG_BlocksEngine2_Attribute_SerializeAsVariableAttribute_o* __this, System_Type_o* variablesManagerType, const MethodInfo* method); */

/* MG_BlocksEngine2.Attribute.SerializeAsVariableAttribute$$.ctor
   void MG_BlocksEngine2_Attribute_SerializeAsVariableAttribute___ctor
   (MG_BlocksEngine2_Attribute_SerializeAsVariableAttribute_o* __this, System_Type_o*
   variablesManagerType, const MethodInfo* method); */

void native_MG_BlocksEngine2_Attribute_SerializeAsVariableAttribute___ctor_73d698
               (long param_1,undefined8 param_2)

{
  ulong *puVar1;
  char cVar2;
  bool bVar3;
  undefined8 *puVar4;
  
  native_System_Attribute___ctor_96262c(param_1,0);
  puVar4 = (undefined8 *)(param_1 + 0x10);
  *puVar4 = param_2;
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


