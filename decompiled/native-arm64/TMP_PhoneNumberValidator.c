/* ARM64 IL2CPP native pseudocode from Ghidra.
 * Recovered implementation, not original C# source.
 * Function boundaries follow the IL2CPP method address table. */


/* TMPro.TMP_PhoneNumberValidator$$Validate @ 0x740058
 * uint16_t TMPro_TMP_PhoneNumberValidator__Validate (TMPro_TMP_PhoneNumberValidator_o* __this, System_String_o** text, int32_t* pos, uint16_t ch, const MethodInfo* method); */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* TMPro.TMP_PhoneNumberValidator$$Validate
   uint16_t TMPro_TMP_PhoneNumberValidator__Validate (TMPro_TMP_PhoneNumberValidator_o* __this,
   System_String_o** text, int32_t* pos, uint16_t ch, const MethodInfo* method); */

uint native_TMPro_TMP_PhoneNumberValidator__Validate_740058
               (undefined8 param_1,long *param_2,undefined4 *param_3,uint param_4)

{
  int iVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  undefined4 uVar4;
  long lVar5;
  uint uVar6;
  ushort auStack_64 [2];
  
  auStack_64[0] = (ushort)param_4;
  if ((bRam000000000133f635 & 1) == 0) {
    native_sub_43273c(&UnityEngine_Debug_TypeInfo_12d4338);
    native_sub_43273c(&StringLiteral___12eac68);
    native_sub_43273c(&StringLiteral___12eb6c8);
    native_sub_43273c(&StringLiteral___12eb450);
    native_sub_43273c(&StringLiteral____12eb598);
    native_sub_43273c(&StringLiteral_Trying_to_validate____12f27f0);
    bRam000000000133f635 = 1;
  }
  if (((*(byte *)(_UnityEngine_Debug_TypeInfo_12d4338 + 0x133) >> 2 & 1) != 0) &&
     (*(int *)(_UnityEngine_Debug_TypeInfo_12d4338 + 0xe0) == 0)) {
    native_sub_4327ec();
  }
  native_UnityEngine_Debug__Log_8dc36c(_StringLiteral_Trying_to_validate____12f27f0,0);
  if (*param_2 == 0) {
                    /* WARNING: Subroutine does not return */
    native_sub_432810();
  }
  iVar1 = *(int *)(*param_2 + 0x10);
  if (0 < (int)(iVar1 + 1U)) {
    uVar6 = 0;
    do {
      switch(uVar6 & 0x7fffffff) {
      case 0:
        if (iVar1 == 0) {
          uVar3 = native_System_Char__ToString_793ee0(auStack_64,0);
          lVar5 = _StringLiteral___12eb450;
code_r0x0074034c:
          lVar5 = native_System_String__Concat_afbd68(lVar5,uVar3,0);
          *param_2 = lVar5;
          native_sub_4326e0(param_2,lVar5);
        }
        goto code_r0x00740364;
      case 1:
        if (iVar1 == 1) {
          lVar5 = *param_2;
          uVar3 = native_System_Char__ToString_793ee0(auStack_64,0);
          goto code_r0x0074034c;
        }
code_r0x00740364:
        uVar4 = 2;
        break;
      case 2:
        if (iVar1 == 2) {
          lVar5 = *param_2;
          uVar3 = native_System_Char__ToString_793ee0(auStack_64,0);
          lVar5 = native_System_String__Concat_afbd68(lVar5,uVar3,0);
          *param_2 = lVar5;
          native_sub_4326e0(param_2,lVar5);
        }
        uVar4 = 3;
        break;
      case 3:
        if (iVar1 == 3) {
          lVar5 = *param_2;
          uVar3 = native_System_Char__ToString_793ee0(auStack_64,0);
          lVar5 = native_System_String__Concat_afc654(lVar5,uVar3,_StringLiteral____12eb598,0);
          *param_2 = lVar5;
          native_sub_4326e0(param_2,lVar5);
        }
        uVar4 = 6;
        break;
      case 4:
        if (iVar1 == 4) {
          lVar5 = *param_2;
          uVar2 = native_System_Char__ToString_793ee0(auStack_64,0);
          uVar3 = _StringLiteral____12eb598;
code_r0x00740388:
          lVar5 = native_System_String__Concat_afc654(lVar5,uVar3,uVar2,0);
code_r0x00740404:
          *param_2 = lVar5;
          native_sub_4326e0(param_2,lVar5);
        }
        goto code_r0x00740414;
      case 5:
        if (iVar1 == 5) {
          lVar5 = *param_2;
          uVar2 = native_System_Char__ToString_793ee0(auStack_64,0);
          uVar3 = _StringLiteral___12eac68;
          goto code_r0x00740388;
        }
        goto code_r0x00740414;
      case 6:
        if (iVar1 == 6) {
          lVar5 = *param_2;
          uVar3 = native_System_Char__ToString_793ee0(auStack_64,0);
          lVar5 = native_System_String__Concat_afbd68(lVar5,uVar3,0);
          goto code_r0x00740404;
        }
code_r0x00740414:
        uVar4 = 7;
        break;
      case 7:
        if (iVar1 == 7) {
          lVar5 = *param_2;
          uVar3 = native_System_Char__ToString_793ee0(auStack_64,0);
          lVar5 = native_System_String__Concat_afbd68(lVar5,uVar3,0);
          *param_2 = lVar5;
          native_sub_4326e0(param_2,lVar5);
        }
        uVar4 = 8;
        break;
      case 8:
        if (iVar1 == 8) {
          lVar5 = *param_2;
          uVar3 = native_System_Char__ToString_793ee0(auStack_64,0);
          lVar5 = native_System_String__Concat_afc654(lVar5,uVar3,_StringLiteral___12eb6c8,0);
          *param_2 = lVar5;
          native_sub_4326e0(param_2,lVar5);
        }
        uVar4 = 10;
        break;
      case 9:
        if (iVar1 == 9) {
          lVar5 = *param_2;
          uVar3 = native_System_Char__ToString_793ee0(auStack_64,0);
          lVar5 = native_System_String__Concat_afc654(lVar5,_StringLiteral___12eb6c8,uVar3,0);
code_r0x00740488:
          *param_2 = lVar5;
          native_sub_4326e0(param_2,lVar5);
        }
        goto code_r0x00740498;
      case 10:
        if (iVar1 == 10) {
          lVar5 = *param_2;
          uVar3 = native_System_Char__ToString_793ee0(auStack_64,0);
          lVar5 = native_System_String__Concat_afbd68(lVar5,uVar3,0);
          goto code_r0x00740488;
        }
code_r0x00740498:
        uVar4 = 0xb;
        break;
      case 0xb:
        if (iVar1 == 0xb) {
          lVar5 = *param_2;
          uVar3 = native_System_Char__ToString_793ee0(auStack_64,0);
          lVar5 = native_System_String__Concat_afbd68(lVar5,uVar3,0);
          *param_2 = lVar5;
          native_sub_4326e0(param_2,lVar5);
        }
        uVar4 = 0xc;
        break;
      case 0xc:
        if (iVar1 == 0xc) {
          lVar5 = *param_2;
          uVar3 = native_System_Char__ToString_793ee0(auStack_64,0);
          lVar5 = native_System_String__Concat_afbd68(lVar5,uVar3,0);
          *param_2 = lVar5;
          native_sub_4326e0(param_2,lVar5);
        }
        uVar4 = 0xd;
        break;
      case 0xd:
        if (iVar1 == 0xd) {
          lVar5 = *param_2;
          uVar3 = native_System_Char__ToString_793ee0(auStack_64,0);
          lVar5 = native_System_String__Concat_afbd68(lVar5,uVar3,0);
          *param_2 = lVar5;
          native_sub_4326e0(param_2,lVar5);
        }
        uVar4 = 0xe;
        break;
      default:
        goto LAB_007404a0;
      }
      *param_3 = uVar4;
LAB_007404a0:
      uVar6 = uVar6 + 1;
    } while (iVar1 + 1U != uVar6);
    param_4 = (uint)auStack_64[0];
  }
  return param_4;
}



/* TMPro.TMP_PhoneNumberValidator$$.ctor @ 0x7404d8
 * void TMPro_TMP_PhoneNumberValidator___ctor (TMPro_TMP_PhoneNumberValidator_o* __this, const MethodInfo* method); */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* TMPro.TMP_PhoneNumberValidator$$.ctor
   void TMPro_TMP_PhoneNumberValidator___ctor (TMPro_TMP_PhoneNumberValidator_o* __this, const
   MethodInfo* method); */

void native_TMPro_TMP_PhoneNumberValidator___ctor_7404d8(undefined8 param_1)

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


