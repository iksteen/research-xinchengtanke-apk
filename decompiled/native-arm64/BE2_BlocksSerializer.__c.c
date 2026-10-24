/* ARM64 IL2CPP native pseudocode from Ghidra.
 * Recovered implementation, not original C# source.
 * Function boundaries follow the IL2CPP method address table. */


/* MG_BlocksEngine2.Serializer.BE2_BlocksSerializer.<>c$$.cctor @ 0x9503ac
 * void MG_BlocksEngine2_Serializer_BE2_BlocksSerializer___c___cctor (const MethodInfo* method); */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* MG_BlocksEngine2.Serializer.BE2_BlocksSerializer.<>c$$.cctor
   void MG_BlocksEngine2_Serializer_BE2_BlocksSerializer___c___cctor (const MethodInfo* method); */

void native_MG_BlocksEngine2_Serializer_BE2_BlocksSerializer___c___cctor_9503ac(void)

{
  ulong *puVar1;
  char cVar2;
  bool bVar3;
  undefined8 uVar4;
  undefined8 *puVar5;
  
  if ((bRam0000000001341495 & 1) == 0) {
    native_sub_43273c(&MG_BlocksEngine2_Serializer_BE2_BlocksSerializer___c_TypeInfo_12d6fc0);
    bRam0000000001341495 = 1;
  }
  uVar4 = native_sub_432808(_MG_BlocksEngine2_Serializer_BE2_BlocksSerializer___c_TypeInfo_12d6fc0);
  native_System_Object___ctor_ad2798(uVar4,0);
  puVar5 = *(undefined8 **)
            (_MG_BlocksEngine2_Serializer_BE2_BlocksSerializer___c_TypeInfo_12d6fc0 + 0xb8);
  *puVar5 = uVar4;
  if (iRam0000000001345318 != 0) {
    puVar1 = (ulong *)(((ulong)puVar5 >> 0x12 & 0x7fff) * 8 + 0x138ecd8);
    do {
      cVar2 = '\x01';
      bVar3 = (bool)ExclusiveMonitorPass(puVar1,0x10);
      if (bVar3) {
        *puVar1 = *puVar1 | 1L << ((ulong)puVar5 >> 0xc & 0x3f);
        cVar2 = ExclusiveMonitorsStatus();
      }
    } while (cVar2 != '\0');
  }
  return;
}



/* MG_BlocksEngine2.Serializer.BE2_BlocksSerializer.<>c$$.ctor @ 0x950410
 * void MG_BlocksEngine2_Serializer_BE2_BlocksSerializer___c___ctor (MG_BlocksEngine2_Serializer_BE2_BlocksSerializer___c_o* __this, const MethodInfo* method); */

/* MG_BlocksEngine2.Serializer.BE2_BlocksSerializer.<>c$$.ctor
   void MG_BlocksEngine2_Serializer_BE2_BlocksSerializer___c___ctor
   (MG_BlocksEngine2_Serializer_BE2_BlocksSerializer___c_o* __this, const MethodInfo* method); */

void native_MG_BlocksEngine2_Serializer_BE2_BlocksSerializer___c___ctor_950410(void)

{
  return;
}



/* MG_BlocksEngine2.Serializer.BE2_BlocksSerializer.<>c$$<C_InitializeFunctionInstruction>b__11_0 @ 0x950418
 * bool MG_BlocksEngine2_Serializer_BE2_BlocksSerializer___c___C_InitializeFunctionInstruction_b__11_0 (MG_BlocksEngine2_Serializer_BE2_BlocksSerializer___c_o* __this, const MethodInfo* method); */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* MG_BlocksEngine2.Serializer.BE2_BlocksSerializer.<>c$$<C_InitializeFunctionInstruction>b__11_0
   bool 
   MG_BlocksEngine2_Serializer_BE2_BlocksSerializer___c___C_InitializeFunctionInstruction_b__11_0
   (MG_BlocksEngine2_Serializer_BE2_BlocksSerializer___c_o* __this, const MethodInfo* method); */

bool native_MG_BlocksEngine2_Serializer_BE2_BlocksSerializer___c___C_InitializeFunctionInstruction_b__11_0_950418
               (void)

{
  if ((bRam0000000001341496 & 1) == 0) {
    native_sub_43273c(&MG_BlocksEngine2_Serializer_BE2_BlocksSerializer_TypeInfo_12d3998);
    bRam0000000001341496 = 1;
  }
  if (((*(byte *)(_MG_BlocksEngine2_Serializer_BE2_BlocksSerializer_TypeInfo_12d3998 + 0x133) >> 2 &
       1) != 0) &&
     (*(int *)(_MG_BlocksEngine2_Serializer_BE2_BlocksSerializer_TypeInfo_12d3998 + 0xe0) == 0)) {
    native_sub_4327ec();
  }
  return **(int **)(_MG_BlocksEngine2_Serializer_BE2_BlocksSerializer_TypeInfo_12d3998 + 0xb8) == 0;
}


