/* ARM64 IL2CPP native pseudocode from Ghidra.
 * Recovered implementation, not original C# source.
 * Function boundaries follow the IL2CPP method address table. */


/* TMPro.Examples.Benchmark01_UGUI$$Start @ 0xdd2548
 * System_Collections_IEnumerator_o* TMPro_Examples_Benchmark01_UGUI__Start (TMPro_Examples_Benchmark01_UGUI_o* __this, const MethodInfo* method); */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* TMPro.Examples.Benchmark01_UGUI$$Start
   System_Collections_IEnumerator_o* TMPro_Examples_Benchmark01_UGUI__Start
   (TMPro_Examples_Benchmark01_UGUI_o* __this, const MethodInfo* method); */

long native_TMPro_Examples_Benchmark01_UGUI__Start_dd2548(undefined8 param_1)

{
  long lVar1;
  
  if ((bRam0000000001346e37 & 1) == 0) {
    native_sub_43273c(&TMPro_Examples_Benchmark01_UGUI__Start_d__10_TypeInfo_12d70c0);
    bRam0000000001346e37 = 1;
  }
  lVar1 = native_sub_432808(_TMPro_Examples_Benchmark01_UGUI__Start_d__10_TypeInfo_12d70c0);
  native_TMPro_Examples_Benchmark01_UGUI__Start_d__10___ctor_549cbc(lVar1,0,0);
  if (lVar1 != 0) {
    *(undefined8 *)(lVar1 + 0x20) = param_1;
    native_sub_4326e0((undefined8 *)(lVar1 + 0x20),param_1);
    return lVar1;
  }
                    /* WARNING: Subroutine does not return */
  native_sub_432810();
}



/* TMPro.Examples.Benchmark01_UGUI$$.ctor @ 0xdd25c0
 * void TMPro_Examples_Benchmark01_UGUI___ctor (TMPro_Examples_Benchmark01_UGUI_o* __this, const MethodInfo* method); */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* TMPro.Examples.Benchmark01_UGUI$$.ctor
   void TMPro_Examples_Benchmark01_UGUI___ctor (TMPro_Examples_Benchmark01_UGUI_o* __this, const
   MethodInfo* method); */

undefined1  [16] native_TMPro_Examples_Benchmark01_UGUI___ctor_dd25c0(ulong param_1)

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


