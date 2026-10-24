/* ARM64 IL2CPP native pseudocode from Ghidra.
 * Recovered implementation, not original C# source.
 * Function boundaries follow the IL2CPP method address table. */


/* TMPro.TMP_DigitValidator$$Validate @ 0x73f72c
 * uint16_t TMPro_TMP_DigitValidator__Validate (TMPro_TMP_DigitValidator_o* __this, System_String_o** text, int32_t* pos, uint16_t ch, const MethodInfo* method); */

/* TMPro.TMP_DigitValidator$$Validate
   uint16_t TMPro_TMP_DigitValidator__Validate (TMPro_TMP_DigitValidator_o* __this,
   System_String_o** text, int32_t* pos, uint16_t ch, const MethodInfo* method); */

short native_TMPro_TMP_DigitValidator__Validate_73f72c
                (undefined8 param_1,undefined8 *param_2,int *param_3,short param_4)

{
  undefined8 uVar1;
  undefined8 uVar2;
  short asStack_24 [2];
  
  if ((ushort)(param_4 - 0x30U) < 10) {
    uVar2 = *param_2;
    asStack_24[0] = param_4;
    uVar1 = native_System_Char__ToString_793ee0(asStack_24,0);
    uVar1 = native_System_String__Concat_afbd68(uVar2,uVar1,0);
    *param_2 = uVar1;
    native_sub_4326e0(param_2,uVar1);
    *param_3 = *param_3 + 1;
  }
  else {
    asStack_24[0] = 0;
  }
  return asStack_24[0];
}



/* TMPro.TMP_DigitValidator$$.ctor @ 0x73f7b0
 * void TMPro_TMP_DigitValidator___ctor (TMPro_TMP_DigitValidator_o* __this, const MethodInfo* method); */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* TMPro.TMP_DigitValidator$$.ctor
   void TMPro_TMP_DigitValidator___ctor (TMPro_TMP_DigitValidator_o* __this, const MethodInfo*
   method); */

void native_TMPro_TMP_DigitValidator___ctor_73f7b0(undefined8 param_1)

{
  if ((bRam000000000133fac8 & 1) == 0) {
    native_sub_43273c(&UnityEngine_Object_TypeInfo_12d54e0,0);
    bRam000000000133fac8 = 1;
  }
  if (((*(byte *)(_UnityEngine_Object_TypeInfo_12d54e0 + 0x133) >> 2 & 1) != 0) &&
     (*(int *)(_UnityEngine_Object_TypeInfo_12d54e0 + 0xe0) == 0)) {
    native_sub_4327ec();
  }
  native_UnityEngine_Object___ctor_8dacf4(param_1,0);
  if (pcRam000000000133fad0 == (code *)0x0) {
    pcRam000000000133fad0 = (code *)native_sub_4326f0(&UNK_00e29142);
  }
                    /* WARNING: Could not recover jumptable at 0x00766bfc. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*pcRam000000000133fad0)(param_1);
  return;
}


