/* ARM64 IL2CPP native pseudocode from Ghidra.
 * Recovered implementation, not original C# source.
 * Function boundaries follow the IL2CPP method address table. */


/* MinMaxRangeAttribute$$.ctor @ 0x7fc750
 * void MinMaxRangeAttribute___ctor (MinMaxRangeAttribute_o* __this, float minLimit, float maxLimit, const MethodInfo* method); */

/* MinMaxRangeAttribute$$.ctor
   void MinMaxRangeAttribute___ctor (MinMaxRangeAttribute_o* __this, float minLimit, float maxLimit,
   const MethodInfo* method); */

void native_MinMaxRangeAttribute___ctor_7fc750(undefined4 param_1,undefined4 param_2,long param_3)

{
  native_UnityEngine_PropertyAttribute___ctor_762194(param_3,0);
  *(undefined4 *)(param_3 + 0x10) = param_1;
  *(undefined4 *)(param_3 + 0x14) = param_2;
  return;
}


