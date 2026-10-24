/* ARM64 IL2CPP native pseudocode from Ghidra.
 * Recovered implementation, not original C# source.
 * Function boundaries follow the IL2CPP method address table. */


/* MG_BlocksEngine2.Serializer.BE2_SerializableBlock$$.ctor @ 0x618f9c
 * void MG_BlocksEngine2_Serializer_BE2_SerializableBlock___ctor (MG_BlocksEngine2_Serializer_BE2_SerializableBlock_o* __this, const MethodInfo* method); */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* MG_BlocksEngine2.Serializer.BE2_SerializableBlock$$.ctor
   void MG_BlocksEngine2_Serializer_BE2_SerializableBlock___ctor
   (MG_BlocksEngine2_Serializer_BE2_SerializableBlock_o* __this, const MethodInfo* method); */

void native_MG_BlocksEngine2_Serializer_BE2_SerializableBlock___ctor_618f9c(long param_1)

{
  ulong *puVar1;
  char cVar2;
  bool bVar3;
  undefined8 uVar4;
  
  if ((bRam000000000133eea8 & 1) == 0) {
    native_sub_43273c(&
                      Method_System_Collections_Generic_List_BE2_SerializableSection___ctor___12dc4c0
                     );
    native_sub_43273c(&Method_System_Collections_Generic_List_DefineItem___ctor___12dc720);
    native_sub_43273c(&System_Collections_Generic_List_DefineItem__TypeInfo_12d2a00);
    native_sub_43273c(&System_Collections_Generic_List_BE2_SerializableSection__TypeInfo_12d2998);
    bRam000000000133eea8 = 1;
  }
  uVar4 = native_sub_432808(_System_Collections_Generic_List_DefineItem__TypeInfo_12d2a00);
  native_System_Collections_Generic_List_XmlEventCache_XmlEvent______ctor_d3ff44
            (uVar4,_Method_System_Collections_Generic_List_DefineItem___ctor___12dc720);
  *(undefined8 *)(param_1 + 0x50) = uVar4;
  native_sub_4326e0((undefined8 *)(param_1 + 0x50),uVar4);
  native_System_Object___ctor_ad2798(param_1,0);
  uVar4 = native_sub_432808(
                           _System_Collections_Generic_List_BE2_SerializableSection__TypeInfo_12d2998
                           );
  native_System_Collections_Generic_List_XmlEventCache_XmlEvent______ctor_d3ff44
            (uVar4,_Method_System_Collections_Generic_List_BE2_SerializableSection___ctor___12dc4c0)
  ;
  *(undefined8 *)(param_1 + 0x28) = uVar4;
  if (iRam0000000001345318 != 0) {
    puVar1 = (ulong *)((param_1 + 0x28U >> 0x12 & 0x7fff) * 8 + 0x138ecd8);
    do {
      cVar2 = '\x01';
      bVar3 = (bool)ExclusiveMonitorPass(puVar1,0x10);
      if (bVar3) {
        *puVar1 = *puVar1 | 1L << (param_1 + 0x28U >> 0xc & 0x3f);
        cVar2 = ExclusiveMonitorsStatus();
      }
    } while (cVar2 != '\0');
  }
  return;
}


