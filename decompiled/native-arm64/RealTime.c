/* ARM64 IL2CPP native pseudocode from Ghidra.
 * Recovered implementation, not original C# source.
 * Function boundaries follow the IL2CPP method address table. */


/* RealTime$$get_time @ 0x72d024
 * float RealTime__get_time (const MethodInfo* method); */

/* RealTime$$get_time
   float RealTime__get_time (const MethodInfo* method); */

void native_RealTime__get_time_72d024(void)

{
  if (pcRam000000000133fd88 == (code *)0x0) {
    pcRam000000000133fd88 = (code *)native_sub_4326f0(&UNK_00e2a530);
  }
                    /* WARNING: Could not recover jumptable at 0x00770890. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*pcRam000000000133fd88)();
  return;
}



/* RealTime$$get_deltaTime @ 0x73d0b8
 * float RealTime__get_deltaTime (const MethodInfo* method); */

/* RealTime$$get_deltaTime
   float RealTime__get_deltaTime (const MethodInfo* method); */

void native_RealTime__get_deltaTime_73d0b8(void)

{
  if (pcRam000000000133fd90 == (code *)0x0) {
    pcRam000000000133fd90 = (code *)native_sub_4326f0(&UNK_00e2a555);
  }
                    /* WARNING: Could not recover jumptable at 0x007708c4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*pcRam000000000133fd90)();
  return;
}



/* RealTime$$.ctor @ 0x73d0c0
 * void RealTime___ctor (RealTime_o* __this, const MethodInfo* method); */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* RealTime$$.ctor
   void RealTime___ctor (RealTime_o* __this, const MethodInfo* method); */

undefined1  [16] native_RealTime___ctor_73d0c0(ulong param_1)

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


