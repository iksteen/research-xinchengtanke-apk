/* ARM64 IL2CPP native pseudocode from Ghidra.
 * Recovered implementation, not original C# source.
 * Function boundaries follow the IL2CPP method address table. */


/* MG_BlocksEngine2.Serializer.BE2_SerializableSection$$.ctor @ 0x619074
 * void MG_BlocksEngine2_Serializer_BE2_SerializableSection___ctor (MG_BlocksEngine2_Serializer_BE2_SerializableSection_o* __this, const MethodInfo* method); */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* MG_BlocksEngine2.Serializer.BE2_SerializableSection$$.ctor
   void MG_BlocksEngine2_Serializer_BE2_SerializableSection___ctor
   (MG_BlocksEngine2_Serializer_BE2_SerializableSection_o* __this, const MethodInfo* method); */

void native_MG_BlocksEngine2_Serializer_BE2_SerializableSection___ctor_619074(long param_1)

{
  ulong *puVar1;
  char cVar2;
  bool bVar3;
  undefined8 uVar4;
  
  if ((bRam000000000133eea9 & 1) == 0) {
    native_sub_43273c(&Method_System_Collections_Generic_List_BE2_SerializableInput___ctor___12dc4a0
                     );
    native_sub_43273c(&Method_System_Collections_Generic_List_BE2_SerializableBlock___ctor___12dc488
                     );
    native_sub_43273c(&System_Collections_Generic_List_BE2_SerializableInput__TypeInfo_12d2990);
    native_sub_43273c(&System_Collections_Generic_List_BE2_SerializableBlock__TypeInfo_12d2988);
    bRam000000000133eea9 = 1;
  }
  native_System_Object___ctor_ad2798(param_1,0);
  uVar4 = native_sub_432808(_System_Collections_Generic_List_BE2_SerializableBlock__TypeInfo_12d2988
                           );
  native_System_Collections_Generic_List_XmlEventCache_XmlEvent______ctor_d3ff44
            (uVar4,_Method_System_Collections_Generic_List_BE2_SerializableBlock___ctor___12dc488);
  *(undefined8 *)(param_1 + 0x10) = uVar4;
  native_sub_4326e0(param_1 + 0x10,uVar4);
  uVar4 = native_sub_432808(_System_Collections_Generic_List_BE2_SerializableInput__TypeInfo_12d2990
                           );
  native_System_Collections_Generic_List_XmlEventCache_XmlEvent______ctor_d3ff44
            (uVar4,_Method_System_Collections_Generic_List_BE2_SerializableInput___ctor___12dc4a0);
  *(undefined8 *)(param_1 + 0x18) = uVar4;
  if (iRam0000000001345318 != 0) {
    puVar1 = (ulong *)((param_1 + 0x18U >> 0x12 & 0x7fff) * 8 + 0x138ecd8);
    do {
      cVar2 = '\x01';
      bVar3 = (bool)ExclusiveMonitorPass(puVar1,0x10);
      if (bVar3) {
        *puVar1 = *puVar1 | 1L << (param_1 + 0x18U >> 0xc & 0x3f);
        cVar2 = ExclusiveMonitorsStatus();
      }
    } while (cVar2 != '\0');
  }
  return;
}


