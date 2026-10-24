/* ARM64 IL2CPP native pseudocode from Ghidra.
 * Recovered implementation, not original C# source.
 * Function boundaries follow the IL2CPP method address table. */


/* Assets.Scripts.Tools.HjdBleTool$$data_isalike @ 0x7f6e28
 * bool Assets_Scripts_Tools_HjdBleTool__data_isalike (System_Byte_array* newdata, System_Byte_array* olddata, const MethodInfo* method); */

/* Assets.Scripts.Tools.HjdBleTool$$data_isalike
   bool Assets_Scripts_Tools_HjdBleTool__data_isalike (System_Byte_array* newdata,
   System_Byte_array* olddata, const MethodInfo* method); */

undefined8 native_Assets_Scripts_Tools_HjdBleTool__data_isalike_7f6e28(long param_1,long param_2)

{
  undefined8 uVar1;
  char *pcVar2;
  char *pcVar3;
  uint uVar4;
  
  if (param_1 != 0) {
    pcVar2 = (char *)(param_2 + 0x20);
    pcVar3 = (char *)(param_1 + 0x20);
    uVar4 = 0xffffffff;
    do {
      if (*(uint *)(param_1 + 0x18) <= uVar4 + 1) {
LAB_007f6e98:
        uVar1 = native_sub_43283c();
                    /* WARNING: Subroutine does not return */
        native_sub_4327dc(uVar1,0);
      }
      if (param_2 == 0) break;
      if (*(uint *)(param_2 + 0x18) <= uVar4 + 1) goto LAB_007f6e98;
      if (*pcVar3 != *pcVar2) {
        return 0;
      }
      uVar4 = uVar4 + 1;
      pcVar2 = pcVar2 + 1;
      pcVar3 = pcVar3 + 1;
      if (5 < uVar4) {
        return 1;
      }
    } while( true );
  }
                    /* WARNING: Subroutine does not return */
  native_sub_432810();
}



/* Assets.Scripts.Tools.HjdBleTool$$data_copy @ 0x7f6ea8
 * void Assets_Scripts_Tools_HjdBleTool__data_copy (System_Byte_array* newdata, System_Byte_array* olddata, const MethodInfo* method); */

/* Assets.Scripts.Tools.HjdBleTool$$data_copy
   void Assets_Scripts_Tools_HjdBleTool__data_copy (System_Byte_array* newdata, System_Byte_array*
   olddata, const MethodInfo* method); */

void native_Assets_Scripts_Tools_HjdBleTool__data_copy_7f6ea8(long param_1,long param_2)

{
  bool bVar1;
  undefined8 uVar2;
  ulong uVar3;
  
  if (param_1 != 0) {
    uVar3 = 0;
    do {
      if (*(uint *)(param_1 + 0x18) <= uVar3) {
LAB_007f6efc:
        uVar2 = native_sub_43283c();
                    /* WARNING: Subroutine does not return */
        native_sub_4327dc(uVar2,0);
      }
      if (param_2 == 0) break;
      if (*(uint *)(param_2 + 0x18) <= uVar3) goto LAB_007f6efc;
      bVar1 = 5 < uVar3;
      *(undefined1 *)(param_2 + 0x20 + uVar3) = *(undefined1 *)(param_1 + 0x20 + uVar3);
      uVar3 = uVar3 + 1;
      if (bVar1) {
        return;
      }
    } while( true );
  }
                    /* WARNING: Subroutine does not return */
  native_sub_432810();
}



/* Assets.Scripts.Tools.HjdBleTool$$print_data @ 0x7f6f0c
 * System_String_o* Assets_Scripts_Tools_HjdBleTool__print_data (System_Byte_array* carbroad_data, const MethodInfo* method); */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* Assets.Scripts.Tools.HjdBleTool$$print_data
   System_String_o* Assets_Scripts_Tools_HjdBleTool__print_data (System_Byte_array* carbroad_data,
   const MethodInfo* method); */

undefined8 native_Assets_Scripts_Tools_HjdBleTool__print_data_7f6f0c(long param_1)

{
  undefined8 uVar1;
  ulong uVar2;
  undefined8 uVar3;
  ulong uVar4;
  
  if ((bRam00000000013403e7 & 1) == 0) {
    native_sub_43273c(&UnityEngine_Debug_TypeInfo_12d4338);
    native_sub_43273c(&string_TypeInfo_12d5f28);
    native_sub_43273c(&StringLiteral_sthjd_hjd_ble_now_send_data____12f6280);
    native_sub_43273c(&StringLiteral___12eac68);
    native_sub_43273c(&StringLiteral_x2_12f6d70);
    bRam00000000013403e7 = 1;
  }
  if (param_1 != 0) {
    uVar3 = **(undefined8 **)(_string_TypeInfo_12d5f28 + 0xb8);
    if (0 < (int)*(ulong *)(param_1 + 0x18)) {
      uVar4 = 0;
      uVar2 = *(ulong *)(param_1 + 0x18) & 0xffffffff;
      do {
        if (uVar2 <= uVar4) {
          uVar3 = native_sub_43283c();
                    /* WARNING: Subroutine does not return */
          native_sub_4327dc(uVar3,0);
        }
        uVar1 = native_System_Byte__ToString_85e8cc
                          (param_1 + 0x20 + uVar4,_StringLiteral_x2_12f6d70,0);
        uVar3 = native_System_String__Concat_afc654(uVar3,uVar1,_StringLiteral___12eac68,0);
        uVar2 = (ulong)*(uint *)(param_1 + 0x18);
        uVar4 = uVar4 + 1;
      } while ((long)uVar4 < (long)(int)*(uint *)(param_1 + 0x18));
    }
    uVar1 = native_System_String__Concat_afbd68
                      (_StringLiteral_sthjd_hjd_ble_now_send_data____12f6280,uVar3,0);
    if (((*(byte *)(_UnityEngine_Debug_TypeInfo_12d4338 + 0x133) >> 2 & 1) != 0) &&
       (*(int *)(_UnityEngine_Debug_TypeInfo_12d4338 + 0xe0) == 0)) {
      native_sub_4327ec(_UnityEngine_Debug_TypeInfo_12d4338);
    }
    native_UnityEngine_Debug__Log_8dc36c(uVar1,0);
    return uVar3;
  }
                    /* WARNING: Subroutine does not return */
  native_sub_432810();
}



/* Assets.Scripts.Tools.HjdBleTool$$setIntegerSomeBit @ 0x7f7068
 * uint8_t Assets_Scripts_Tools_HjdBleTool__setIntegerSomeBit (uint8_t data, int32_t _Mask, bool flag, const MethodInfo* method); */

/* Assets.Scripts.Tools.HjdBleTool$$setIntegerSomeBit
   uint8_t Assets_Scripts_Tools_HjdBleTool__setIntegerSomeBit (uint8_t data, int32_t _Mask, bool
   flag, const MethodInfo* method); */

uint native_Assets_Scripts_Tools_HjdBleTool__setIntegerSomeBit_7f7068
               (uint param_1,uint param_2,uint param_3)

{
  uint uVar1;
  uint uVar2;
  
  uVar2 = 1 << (ulong)(param_2 & 0x1f);
  uVar1 = uVar2 | param_1;
  if ((param_3 & 1) == 0) {
    uVar1 = param_1 & (uVar2 ^ 0xffffffff);
  }
  return uVar1;
}



/* Assets.Scripts.Tools.HjdBleTool$$setOrIntegerBit @ 0x7f7084
 * uint8_t Assets_Scripts_Tools_HjdBleTool__setOrIntegerBit (uint8_t data, uint8_t orbit, const MethodInfo* method); */

/* Assets.Scripts.Tools.HjdBleTool$$setOrIntegerBit
   uint8_t Assets_Scripts_Tools_HjdBleTool__setOrIntegerBit (uint8_t data, uint8_t orbit, const
   MethodInfo* method); */

uint native_Assets_Scripts_Tools_HjdBleTool__setOrIntegerBit_7f7084(uint param_1,uint param_2)

{
  return param_2 | param_1;
}



/* Assets.Scripts.Tools.HjdBleTool$$.ctor @ 0x7f708c
 * void Assets_Scripts_Tools_HjdBleTool___ctor (Assets_Scripts_Tools_HjdBleTool_o* __this, const MethodInfo* method); */

/* Assets.Scripts.Tools.HjdBleTool$$.ctor
   void Assets_Scripts_Tools_HjdBleTool___ctor (Assets_Scripts_Tools_HjdBleTool_o* __this, const
   MethodInfo* method); */

void native_Assets_Scripts_Tools_HjdBleTool___ctor_7f708c(void)

{
  return;
}


