/* ARM64 IL2CPP native pseudocode from Ghidra.
 * Recovered implementation, not original C# source.
 * Function boundaries follow the IL2CPP method address table. */


/* TMPro.Examples.Benchmark01$$Start @ 0xdd24c8
 * System_Collections_IEnumerator_o* TMPro_Examples_Benchmark01__Start (TMPro_Examples_Benchmark01_o* __this, const MethodInfo* method); */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* TMPro.Examples.Benchmark01$$Start
   System_Collections_IEnumerator_o* TMPro_Examples_Benchmark01__Start
   (TMPro_Examples_Benchmark01_o* __this, const MethodInfo* method); */

long native_TMPro_Examples_Benchmark01__Start_dd24c8(undefined8 param_1)

{
  long lVar1;
  
  if ((bRam0000000001346e36 & 1) == 0) {
    native_sub_43273c(&TMPro_Examples_Benchmark01__Start_d__10_TypeInfo_12d70b8);
    bRam0000000001346e36 = 1;
  }
  lVar1 = native_sub_432808(_TMPro_Examples_Benchmark01__Start_d__10_TypeInfo_12d70b8);
  native_TMPro_Examples_Benchmark01__Start_d__10___ctor_549654(lVar1,0,0);
  if (lVar1 != 0) {
    *(undefined8 *)(lVar1 + 0x20) = param_1;
    native_sub_4326e0((undefined8 *)(lVar1 + 0x20),param_1);
    return lVar1;
  }
                    /* WARNING: Subroutine does not return */
  native_sub_432810();
}



/* TMPro.Examples.Benchmark01$$.ctor @ 0xdd2540
 * void TMPro_Examples_Benchmark01___ctor (TMPro_Examples_Benchmark01_o* __this, const MethodInfo* method); */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* TMPro.Examples.Benchmark01$$.ctor
   void TMPro_Examples_Benchmark01___ctor (TMPro_Examples_Benchmark01_o* __this, const MethodInfo*
   method); */

undefined1  [16] native_TMPro_Examples_Benchmark01___ctor_dd2540(ulong param_1)

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


