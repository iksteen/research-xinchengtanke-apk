/* ARM64 IL2CPP native pseudocode from Ghidra.
 * Recovered implementation, not original C# source.
 * Function boundaries follow the IL2CPP method address table. */


/* NGUIMath$$Lerp @ 0x804dcc
 * float NGUIMath__Lerp (float from, float to, float factor, const MethodInfo* method); */

/* NGUIMath$$Lerp
   float NGUIMath__Lerp (float from, float to, float factor, const MethodInfo* method); */

float native_NGUIMath__Lerp_804dcc(float param_1,float param_2,float param_3)

{
  return param_2 * param_3 + (1.0 - param_3) * param_1;
}



/* NGUIMath$$ClampIndex @ 0x804de4
 * int32_t NGUIMath__ClampIndex (int32_t val, int32_t max, const MethodInfo* method); */

/* NGUIMath$$ClampIndex
   int32_t NGUIMath__ClampIndex (int32_t val, int32_t max, const MethodInfo* method); */

int native_NGUIMath__ClampIndex_804de4(int param_1,int param_2)

{
  if (-1 < param_1) {
    if (param_2 <= param_1) {
      param_1 = param_2 + -1;
    }
    return param_1;
  }
  return 0;
}



/* NGUIMath$$RepeatIndex @ 0x804e00
 * int32_t NGUIMath__RepeatIndex (int32_t val, int32_t max, const MethodInfo* method); */

/* NGUIMath$$RepeatIndex
   int32_t NGUIMath__RepeatIndex (int32_t val, int32_t max, const MethodInfo* method); */

int native_NGUIMath__RepeatIndex_804e00(int param_1,int param_2)

{
  if (0 < param_2) {
    do {
      param_1 = param_1 + param_2;
    } while (param_1 - param_2 < 0);
    do {
      param_1 = param_1 - param_2;
    } while (param_2 <= param_1);
    return param_1;
  }
  return 0;
}



/* NGUIMath$$WrapAngle @ 0x804e30
 * float NGUIMath__WrapAngle (float angle, const MethodInfo* method); */

/* NGUIMath$$WrapAngle
   float NGUIMath__WrapAngle (float angle, const MethodInfo* method); */

void native_NGUIMath__WrapAngle_804e30(float param_1)

{
  for (; 180.0 < param_1; param_1 = param_1 + -360.0) {
  }
  for (; param_1 < -180.0; param_1 = param_1 + 360.0) {
  }
  return;
}



/* NGUIMath$$Wrap01 @ 0x804e7c
 * float NGUIMath__Wrap01 (float val, const MethodInfo* method); */

/* NGUIMath$$Wrap01
   float NGUIMath__Wrap01 (float val, const MethodInfo* method); */

float native_NGUIMath__Wrap01_804e7c(float param_1)

{
  int iVar1;
  
  iVar1 = native_UnityEngine_Mathf__FloorToInt_8e506c(0);
  return param_1 - (float)iVar1;
}



/* NGUIMath$$HexToDecimal @ 0x804ea8
 * int32_t NGUIMath__HexToDecimal (uint16_t ch, int32_t defVal, const MethodInfo* method); */

/* NGUIMath$$HexToDecimal
   int32_t NGUIMath__HexToDecimal (uint16_t ch, int32_t defVal, const MethodInfo* method); */

undefined4 native_NGUIMath__HexToDecimal_804ea8(undefined2 param_1,undefined4 param_2)

{
  undefined4 uVar1;
  
  uVar1 = 1;
  switch(param_1) {
  case 0x30:
    return 0;
  case 0x31:
    goto code_r0x00804f04;
  case 0x32:
    return 2;
  case 0x33:
    return 3;
  case 0x34:
    return 4;
  case 0x35:
    return 5;
  case 0x36:
    return 6;
  case 0x37:
    return 7;
  case 0x38:
    return 8;
  case 0x39:
    return 9;
  default:
    return param_2;
  case 0x41:
  case 0x61:
    uVar1 = 10;
code_r0x00804f04:
    return uVar1;
  case 0x42:
  case 0x62:
    return 0xb;
  case 0x43:
  case 99:
    return 0xc;
  case 0x44:
  case 100:
    return 0xd;
  case 0x45:
  case 0x65:
    return 0xe;
  case 0x46:
  case 0x66:
    return 0xf;
  }
}



/* NGUIMath$$DecimalToHexChar @ 0x804f50
 * uint16_t NGUIMath__DecimalToHexChar (int32_t num, const MethodInfo* method); */

/* NGUIMath$$DecimalToHexChar
   uint16_t NGUIMath__DecimalToHexChar (int32_t num, const MethodInfo* method); */

int native_NGUIMath__DecimalToHexChar_804f50(int param_1)

{
  if (0xf < param_1) {
    return 0x46;
  }
  if (param_1 < 10) {
    return param_1 + 0x30;
  }
  return param_1 + 0x37;
}



/* NGUIMath$$DecimalToHex8 @ 0x804f78
 * System_String_o* NGUIMath__DecimalToHex8 (int32_t num, const MethodInfo* method); */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* NGUIMath$$DecimalToHex8
   System_String_o* NGUIMath__DecimalToHex8 (int32_t num, const MethodInfo* method); */

void native_NGUIMath__DecimalToHex8_804f78(uint param_1)

{
  uint uStack_24;
  
  if ((bRam0000000001340462 & 1) == 0) {
    uStack_24 = param_1;
    native_sub_43273c(&StringLiteral_X2_12f30f0);
    bRam0000000001340462 = 1;
  }
  uStack_24 = param_1 & 0xff;
  native_System_Int32__ToString_83c640(&uStack_24,_StringLiteral_X2_12f30f0,0);
  return;
}



/* NGUIMath$$DecimalToHex24 @ 0x804fe0
 * System_String_o* NGUIMath__DecimalToHex24 (int32_t num, const MethodInfo* method); */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* NGUIMath$$DecimalToHex24
   System_String_o* NGUIMath__DecimalToHex24 (int32_t num, const MethodInfo* method); */

void native_NGUIMath__DecimalToHex24_804fe0(uint param_1)

{
  uint uStack_24;
  
  if ((bRam0000000001340463 & 1) == 0) {
    uStack_24 = param_1;
    native_sub_43273c(&StringLiteral_X6_12f3100);
    bRam0000000001340463 = 1;
  }
  uStack_24 = param_1 & 0xffffff;
  native_System_Int32__ToString_83c640(&uStack_24,_StringLiteral_X6_12f3100,0);
  return;
}



/* NGUIMath$$DecimalToHex32 @ 0x805048
 * System_String_o* NGUIMath__DecimalToHex32 (int32_t num, const MethodInfo* method); */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* NGUIMath$$DecimalToHex32
   System_String_o* NGUIMath__DecimalToHex32 (int32_t num, const MethodInfo* method); */

void native_NGUIMath__DecimalToHex32_805048(undefined4 param_1)

{
  undefined4 uStack_14;
  
  uStack_14 = param_1;
  if ((bRam0000000001340464 & 1) == 0) {
    native_sub_43273c(&StringLiteral_X8_12f3108);
    bRam0000000001340464 = 1;
  }
  native_System_Int32__ToString_83c640(&uStack_14,_StringLiteral_X8_12f3108,0);
  return;
}



/* NGUIMath$$ColorToInt @ 0x80509c
 * int32_t NGUIMath__ColorToInt (UnityEngine_Color_o c, const MethodInfo* method); */

/* NGUIMath$$ColorToInt
   int32_t NGUIMath__ColorToInt (UnityEngine_Color_o c, const MethodInfo* method); */

uint native_NGUIMath__ColorToInt_80509c(float param_1,float param_2,float param_3,float param_4)

{
  int iVar1;
  int iVar2;
  int iVar3;
  uint uVar4;
  
  iVar1 = native_UnityEngine_Mathf__RoundToInt_8e50f0(param_1 * 255.0,0);
  iVar2 = native_UnityEngine_Mathf__RoundToInt_8e50f0(param_2 * 255.0,0);
  iVar3 = native_UnityEngine_Mathf__RoundToInt_8e50f0(param_3 * 255.0,0);
  uVar4 = native_UnityEngine_Mathf__RoundToInt_8e50f0(param_4 * 255.0,0);
  return iVar2 << 0x10 | iVar1 << 0x18 | iVar3 << 8 | uVar4;
}



/* NGUIMath$$IntToColor @ 0x80512c
 * UnityEngine_Color_o NGUIMath__IntToColor (int32_t val, const MethodInfo* method); */

/* NGUIMath$$IntToColor
   UnityEngine_Color_o NGUIMath__IntToColor (int32_t val, const MethodInfo* method); */

float native_NGUIMath__IntToColor_80512c(undefined8 param_1)

{
  native_UnityEngine_Color__get_black_8d9e24(0);
  return (float)((uint)((ulong)param_1 >> 0x18) & 0xff) * 0.003921569;
}



/* NGUIMath$$IntToBinary @ 0x805188
 * System_String_o* NGUIMath__IntToBinary (int32_t val, int32_t bits, const MethodInfo* method); */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* NGUIMath$$IntToBinary
   System_String_o* NGUIMath__IntToBinary (int32_t val, int32_t bits, const MethodInfo* method); */

undefined8 native_NGUIMath__IntToBinary_805188(uint param_1,uint param_2)

{
  bool bVar1;
  uint uVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  undefined2 auStack_44 [2];
  
  if ((bRam0000000001340465 & 1) == 0) {
    native_sub_43273c(&StringLiteral___12eac68);
    native_sub_43273c(&StringLiteral__12eaac0);
    bRam0000000001340465 = 1;
  }
  auStack_44[0] = 0;
  uVar3 = _StringLiteral__12eaac0;
  if (0 < (int)param_2) {
    do {
      if ((param_2 < 0x19) && ((1 << (ulong)(param_2 & 0x1f) & 0x1010100U) != 0)) {
        uVar3 = native_System_String__Concat_afbd68(uVar3,_StringLiteral___12eac68,0);
      }
      auStack_44[0] = 0x30;
      if ((1 << (ulong)(param_2 - 1 & 0x1f) & param_1) != 0) {
        auStack_44[0] = 0x31;
      }
      uVar4 = native_System_Char__ToString_793ee0(auStack_44,0);
      uVar3 = native_System_String__Concat_afbd68(uVar3,uVar4,0);
      uVar2 = param_2 - 1;
      bVar1 = 0 < (int)param_2;
      param_2 = uVar2;
    } while (uVar2 != 0 && bVar1);
  }
  return uVar3;
}



/* NGUIMath$$HexToColor @ 0x805284
 * UnityEngine_Color_o NGUIMath__HexToColor (uint32_t val, const MethodInfo* method); */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* NGUIMath$$HexToColor
   UnityEngine_Color_o NGUIMath__HexToColor (uint32_t val, const MethodInfo* method); */

float native_NGUIMath__HexToColor_805284(undefined8 param_1)

{
  if ((bRam0000000001340466 & 1) == 0) {
    native_sub_43273c(&NGUIMath_TypeInfo_12d53b8);
    bRam0000000001340466 = 1;
  }
  if (((*(byte *)(_NGUIMath_TypeInfo_12d53b8 + 0x133) >> 2 & 1) != 0) &&
     (*(int *)(_NGUIMath_TypeInfo_12d53b8 + 0xe0) == 0)) {
    native_sub_4327ec();
  }
  native_UnityEngine_Color__get_black_8d9e24(0);
  return (float)((uint)((ulong)param_1 >> 0x18) & 0xff) * 0.003921569;
}



/* NGUIMath$$ConvertToTexCoords @ 0x803574
 * UnityEngine_Rect_o NGUIMath__ConvertToTexCoords (UnityEngine_Rect_o rect, int32_t width, int32_t height, const MethodInfo* method); */

/* NGUIMath$$ConvertToTexCoords
   UnityEngine_Rect_o NGUIMath__ConvertToTexCoords (UnityEngine_Rect_o rect, int32_t width, int32_t
   height, const MethodInfo* method); */

undefined4
native_NGUIMath__ConvertToTexCoords_803574
          (undefined4 param_1,undefined4 param_2,undefined4 param_3,undefined4 param_4,int param_5,
          int param_6)

{
  float fVar1;
  undefined8 uStack_40;
  undefined8 uStack_38;
  undefined4 uStack_30;
  undefined4 uStack_2c;
  undefined4 uStack_28;
  undefined4 uStack_24;
  
  uStack_38 = CONCAT44(param_4,param_3);
  uStack_40 = CONCAT44(param_2,param_1);
  if ((param_5 != 0) && (param_6 != 0)) {
    uStack_30 = param_1;
    uStack_2c = param_2;
    uStack_28 = param_3;
    uStack_24 = param_4;
    fVar1 = (float)native_UnityEngine_Rect__get_xMin_76363c(&uStack_30,0);
    native_UnityEngine_Rect__set_xMin_7636a4(fVar1 / (float)param_5,&uStack_40,0);
    fVar1 = (float)native_UnityEngine_Rect__get_xMax_76365c(&uStack_30,0);
    native_UnityEngine_Rect__set_xMax_7636dc(fVar1 / (float)param_5,&uStack_40,0);
    fVar1 = (float)native_UnityEngine_Rect__get_yMax_76366c(&uStack_30,0);
    native_UnityEngine_Rect__set_yMin_7636c0(1.0 - fVar1 / (float)param_6,&uStack_40,0);
    fVar1 = (float)native_UnityEngine_Rect__get_yMin_763644(&uStack_30,0);
    native_UnityEngine_Rect__set_yMax_7636ec(1.0 - fVar1 / (float)param_6,&uStack_40,0);
  }
  return (undefined4)uStack_40;
}



/* NGUIMath$$ConvertToPixels @ 0x803314
 * UnityEngine_Rect_o NGUIMath__ConvertToPixels (UnityEngine_Rect_o rect, int32_t width, int32_t height, bool round, const MethodInfo* method); */

/* NGUIMath$$ConvertToPixels
   UnityEngine_Rect_o NGUIMath__ConvertToPixels (UnityEngine_Rect_o rect, int32_t width, int32_t
   height, bool round, const MethodInfo* method); */

undefined4
native_NGUIMath__ConvertToPixels_803314
          (undefined4 param_1,undefined4 param_2,undefined4 param_3,undefined4 param_4,int param_5,
          int param_6,uint param_7)

{
  int iVar1;
  float fVar2;
  float fVar3;
  undefined8 uStack_60;
  undefined8 uStack_58;
  undefined4 uStack_50;
  undefined4 uStack_4c;
  undefined4 uStack_48;
  undefined4 uStack_44;
  
  uStack_58 = CONCAT44(param_4,param_3);
  uStack_60 = CONCAT44(param_2,param_1);
  uStack_50 = param_1;
  uStack_4c = param_2;
  uStack_48 = param_3;
  uStack_44 = param_4;
  fVar2 = (float)native_UnityEngine_Rect__get_xMin_76363c(&uStack_50,0);
  fVar3 = (float)param_5;
  if ((param_7 & 1) == 0) {
    native_UnityEngine_Rect__set_xMin_7636a4(fVar2 * fVar3,&uStack_60,0);
    fVar2 = (float)native_UnityEngine_Rect__get_xMax_76365c(&uStack_50,0);
    native_UnityEngine_Rect__set_xMax_7636dc(fVar2 * fVar3,&uStack_60,0);
    fVar2 = (float)native_UnityEngine_Rect__get_yMax_76366c(&uStack_50,0);
    native_UnityEngine_Rect__set_yMin_7636c0((1.0 - fVar2) * (float)param_6,&uStack_60,0);
    fVar2 = (float)native_UnityEngine_Rect__get_yMin_763644(&uStack_50,0);
    fVar2 = (1.0 - fVar2) * (float)param_6;
  }
  else {
    iVar1 = native_UnityEngine_Mathf__RoundToInt_8e50f0(0);
    native_UnityEngine_Rect__set_xMin_7636a4((float)iVar1,&uStack_60,0);
    fVar2 = (float)native_UnityEngine_Rect__get_xMax_76365c(&uStack_50,0);
    iVar1 = native_UnityEngine_Mathf__RoundToInt_8e50f0(fVar2 * fVar3,0);
    native_UnityEngine_Rect__set_xMax_7636dc((float)iVar1,&uStack_60,0);
    fVar2 = (float)native_UnityEngine_Rect__get_yMax_76366c(&uStack_50,0);
    iVar1 = native_UnityEngine_Mathf__RoundToInt_8e50f0((1.0 - fVar2) * (float)param_6,0);
    native_UnityEngine_Rect__set_yMin_7636c0((float)iVar1,&uStack_60,0);
    fVar2 = (float)native_UnityEngine_Rect__get_yMin_763644(&uStack_50,0);
    iVar1 = native_UnityEngine_Mathf__RoundToInt_8e50f0((1.0 - fVar2) * (float)param_6,0);
    fVar2 = (float)iVar1;
  }
  native_UnityEngine_Rect__set_yMax_7636ec(fVar2,&uStack_60,0);
  return (undefined4)uStack_60;
}



/* NGUIMath$$MakePixelPerfect @ 0x8052e4
 * UnityEngine_Rect_o NGUIMath__MakePixelPerfect (UnityEngine_Rect_o rect, const MethodInfo* method); */

/* NGUIMath$$MakePixelPerfect
   UnityEngine_Rect_o NGUIMath__MakePixelPerfect (UnityEngine_Rect_o rect, const MethodInfo*
   method); */

undefined4
native_NGUIMath__MakePixelPerfect_8052e4
          (undefined4 param_1,undefined4 param_2,undefined4 param_3,undefined4 param_4)

{
  int iVar1;
  undefined4 uStack_20;
  undefined4 uStack_1c;
  undefined4 uStack_18;
  undefined4 uStack_14;
  
  uStack_20 = param_1;
  uStack_1c = param_2;
  uStack_18 = param_3;
  uStack_14 = param_4;
  native_UnityEngine_Rect__get_xMin_76363c(&uStack_20,0);
  iVar1 = native_UnityEngine_Mathf__RoundToInt_8e50f0(0);
  native_UnityEngine_Rect__set_xMin_7636a4((float)iVar1,&uStack_20,0);
  native_UnityEngine_Rect__get_yMin_763644(&uStack_20,0);
  iVar1 = native_UnityEngine_Mathf__RoundToInt_8e50f0(0);
  native_UnityEngine_Rect__set_yMin_7636c0((float)iVar1,&uStack_20,0);
  native_UnityEngine_Rect__get_xMax_76365c(&uStack_20,0);
  iVar1 = native_UnityEngine_Mathf__RoundToInt_8e50f0(0);
  native_UnityEngine_Rect__set_xMax_7636dc((float)iVar1,&uStack_20,0);
  native_UnityEngine_Rect__get_yMax_76366c(&uStack_20,0);
  iVar1 = native_UnityEngine_Mathf__RoundToInt_8e50f0(0);
  native_UnityEngine_Rect__set_yMax_7636ec((float)iVar1,&uStack_20,0);
  return uStack_20;
}



/* NGUIMath$$MakePixelPerfect @ 0x80539c
 * UnityEngine_Rect_o NGUIMath__MakePixelPerfect (UnityEngine_Rect_o rect, int32_t width, int32_t height, const MethodInfo* method); */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* NGUIMath$$MakePixelPerfect
   UnityEngine_Rect_o NGUIMath__MakePixelPerfect (UnityEngine_Rect_o rect, int32_t width, int32_t
   height, const MethodInfo* method); */

void native_NGUIMath__MakePixelPerfect_80539c
               (undefined8 param_1,undefined4 param_2,undefined4 param_3,undefined4 param_4,
               undefined4 param_5,undefined4 param_6)

{
  undefined4 uVar1;
  undefined4 uVar2;
  undefined4 uVar3;
  int iVar4;
  undefined4 uStack_60;
  undefined4 uStack_5c;
  undefined4 uStack_58;
  undefined4 uStack_54;
  
  uStack_60 = (undefined4)param_1;
  uStack_5c = param_2;
  uStack_58 = param_3;
  uStack_54 = param_4;
  if ((bRam0000000001340467 & 1) == 0) {
    native_sub_43273c(&NGUIMath_TypeInfo_12d53b8);
    bRam0000000001340467 = 1;
  }
  if (((*(byte *)(_NGUIMath_TypeInfo_12d53b8 + 0x133) >> 2 & 1) != 0) &&
     (*(int *)(_NGUIMath_TypeInfo_12d53b8 + 0xe0) == 0)) {
    native_sub_4327ec();
  }
  uVar1 = param_2;
  uVar2 = param_3;
  uVar3 = param_4;
  uStack_60 = native_NGUIMath__ConvertToPixels_803314(param_1,param_5,param_6,1);
  uStack_54 = uVar3;
  uStack_58 = uVar2;
  uStack_5c = uVar1;
  native_UnityEngine_Rect__get_xMin_76363c(&uStack_60,0);
  iVar4 = native_UnityEngine_Mathf__RoundToInt_8e50f0(0);
  native_UnityEngine_Rect__set_xMin_7636a4((float)iVar4,&uStack_60,0);
  native_UnityEngine_Rect__get_yMin_763644(&uStack_60,0);
  iVar4 = native_UnityEngine_Mathf__RoundToInt_8e50f0(0);
  native_UnityEngine_Rect__set_yMin_7636c0((float)iVar4,&uStack_60,0);
  native_UnityEngine_Rect__get_xMax_76365c(&uStack_60,0);
  iVar4 = native_UnityEngine_Mathf__RoundToInt_8e50f0(0);
  native_UnityEngine_Rect__set_xMax_7636dc((float)iVar4,&uStack_60,0);
  native_UnityEngine_Rect__get_yMax_76366c(&uStack_60,0);
  iVar4 = native_UnityEngine_Mathf__RoundToInt_8e50f0(0);
  native_UnityEngine_Rect__set_yMax_7636ec((float)iVar4,&uStack_60,0);
  native_NGUIMath__ConvertToTexCoords_803574
            (uStack_60,uStack_5c,uStack_58,uStack_54,param_5,param_6);
  return;
}



/* NGUIMath$$ConstrainRect @ 0x805500
 * UnityEngine_Vector2_o NGUIMath__ConstrainRect (UnityEngine_Vector2_o minRect, UnityEngine_Vector2_o maxRect, UnityEngine_Vector2_o minArea, UnityEngine_Vector2_o maxArea, const MethodInfo* method); */

/* NGUIMath$$ConstrainRect
   UnityEngine_Vector2_o NGUIMath__ConstrainRect (UnityEngine_Vector2_o minRect,
   UnityEngine_Vector2_o maxRect, UnityEngine_Vector2_o minArea, UnityEngine_Vector2_o maxArea,
   const MethodInfo* method); */

float native_NGUIMath__ConstrainRect_805500
                (float param_1,undefined1 param_2 [16],float param_3,undefined1 param_4 [16],
                float param_5,undefined1 param_6 [16],float param_7)

{
  float fVar1;
  float fVar2;
  
  fVar1 = (float)native_UnityEngine_Vector2__get_zero_765ef0(0);
  if (param_7 - param_5 < param_3 - param_1) {
    fVar2 = (param_3 - param_1) - (param_7 - param_5);
    param_5 = param_5 - fVar2;
    param_7 = param_7 + fVar2;
  }
  fVar2 = fVar1 + (param_5 - param_1);
  if (param_5 <= param_1) {
    fVar2 = fVar1;
  }
  fVar1 = fVar2 - (param_3 - param_7);
  if (param_3 <= param_7) {
    fVar1 = fVar2;
  }
  return fVar1;
}



/* NGUIMath$$CalculateAbsoluteWidgetBounds @ 0x8055d0
 * UnityEngine_Bounds_o NGUIMath__CalculateAbsoluteWidgetBounds (UnityEngine_Transform_o* trans, const MethodInfo* method); */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* NGUIMath$$CalculateAbsoluteWidgetBounds
   UnityEngine_Bounds_o NGUIMath__CalculateAbsoluteWidgetBounds (UnityEngine_Transform_o* trans,
   const MethodInfo* method); */

void native_NGUIMath__CalculateAbsoluteWidgetBounds_8055d0
               (undefined8 *param_1,undefined1 param_2 [16],ulong param_3,ulong param_4,long param_5
               )

{
  ulong uVar1;
  byte bVar2;
  float *pfVar3;
  uint uVar4;
  uint uVar5;
  long lVar6;
  long *plVar7;
  int iVar8;
  float fVar9;
  undefined8 uVar10;
  undefined8 uVar11;
  float fVar12;
  float fVar13;
  ulong uVar14;
  float fVar15;
  float fVar16;
  float fVar17;
  float fVar18;
  float fVar19;
  float fVar20;
  float fVar21;
  float fVar22;
  undefined8 uStack_98;
  undefined8 uStack_90;
  undefined8 uStack_88;
  
  if ((bRam0000000001340468 & 1) == 0) {
    native_sub_43273c(&Method_UnityEngine_Component_GetComponentsInChildren_UIWidget____12e2e48);
    native_sub_43273c(&Method_System_Collections_Generic_List_UIWidget__Clear___12dd420);
    native_sub_43273c(&Method_System_Collections_Generic_List_UIWidget__RemoveAt___12dd438);
    native_sub_43273c(&Method_System_Collections_Generic_List_UIWidget__get_Count___12dd448);
    native_sub_43273c(&Method_System_Collections_Generic_List_UIWidget__get_Item___12dd450);
    native_sub_43273c(&NGUIMath_TypeInfo_12d53b8);
    native_sub_43273c(&UnityEngine_Object_TypeInfo_12d54e0);
    bRam0000000001340468 = 1;
  }
  uStack_90 = 0;
  uStack_88 = 0;
  uStack_98 = 0;
  if (((*(byte *)(_UnityEngine_Object_TypeInfo_12d54e0 + 0x133) >> 2 & 1) != 0) &&
     (*(int *)(_UnityEngine_Object_TypeInfo_12d54e0 + 0xe0) == 0)) {
    native_sub_4327ec();
  }
  uVar1 = native_UnityEngine_Object__op_Inequality_8d76fc(param_5,0,0);
  if ((uVar1 & 1) == 0) {
    uVar11 = native_UnityEngine_Vector3__get_zero_776668(0);
LAB_00805958:
    uVar1 = param_3;
    uVar14 = param_4;
    uVar10 = native_UnityEngine_Vector3__get_zero_776668(0);
    param_1[1] = 0;
    param_1[2] = 0;
    *param_1 = 0;
    native_UnityEngine_Bounds___ctor_8d7d14(uVar11,param_3,param_4,uVar10,uVar1,uVar14,param_1,0);
    return;
  }
  if (((*(byte *)(_NGUIMath_TypeInfo_12d53b8 + 0x133) >> 2 & 1) != 0) &&
     (*(int *)(_NGUIMath_TypeInfo_12d53b8 + 0xe0) == 0)) {
    native_sub_4327ec();
  }
  if ((**(long **)(_NGUIMath_TypeInfo_12d53b8 + 0xb8) != 0) &&
     (native_System_Collections_Generic_List_Action___Clear_d40e80
                (**(long **)(_NGUIMath_TypeInfo_12d53b8 + 0xb8),
                 _Method_System_Collections_Generic_List_UIWidget__Clear___12dd420), param_5 != 0))
  {
    native_UnityEngine_Component__GetComponentsInChildren_Component__49de84
              (param_5,**(undefined8 **)(_NGUIMath_TypeInfo_12d53b8 + 0xb8),
               _Method_UnityEngine_Component_GetComponentsInChildren_UIWidget____12e2e48);
    if (**(long **)(_NGUIMath_TypeInfo_12d53b8 + 0xb8) != 0) {
      iVar8 = *(int *)(**(long **)(_NGUIMath_TypeInfo_12d53b8 + 0xb8) + 0x18);
      bVar2 = *(byte *)(_NGUIMath_TypeInfo_12d53b8 + 0x133) >> 2 & 1;
      if (0 < iVar8) {
        uVar4 = 0;
        do {
          if ((bVar2 != 0) && (*(int *)(_NGUIMath_TypeInfo_12d53b8 + 0xe0) == 0)) {
            native_sub_4327ec();
          }
          lVar6 = **(long **)(_NGUIMath_TypeInfo_12d53b8 + 0xb8);
          if (lVar6 == 0) goto LAB_00805a3c;
          if (*(uint *)(lVar6 + 0x18) <= uVar4) {
            native_System_ThrowHelper__ThrowArgumentOutOfRangeException_9fe0f4(0);
          }
          plVar7 = *(long **)(*(long *)(lVar6 + 0x10) + (long)(int)uVar4 * 8 + 0x20);
          if (plVar7 == (long *)0x0) goto LAB_00805a3c;
          uVar1 = (**(code **)(*plVar7 + 0x398))(plVar7,*(undefined8 *)(*plVar7 + 0x3a0));
          if (((uVar1 & 1) == 0) ||
             (uVar1 = native_UnityEngine_Behaviour__get_enabled_8d7acc(plVar7,0), uVar5 = uVar4,
             (uVar1 & 1) == 0)) {
            if (((*(byte *)(_NGUIMath_TypeInfo_12d53b8 + 0x133) >> 2 & 1) != 0) &&
               (*(int *)(_NGUIMath_TypeInfo_12d53b8 + 0xe0) == 0)) {
              native_sub_4327ec();
            }
            if (**(long **)(_NGUIMath_TypeInfo_12d53b8 + 0xb8) == 0) goto LAB_00805a3c;
            uVar5 = uVar4 - 1;
            native_System_Collections_Generic_List_int_____RemoveAt_d42280
                      (**(long **)(_NGUIMath_TypeInfo_12d53b8 + 0xb8),uVar4,
                       _Method_System_Collections_Generic_List_UIWidget__RemoveAt___12dd438);
            iVar8 = iVar8 + -1;
          }
          uVar4 = uVar5 + 1;
          bVar2 = *(byte *)(_NGUIMath_TypeInfo_12d53b8 + 0x133) >> 2 & 1;
        } while ((int)uVar4 < iVar8);
      }
      if ((bVar2 != 0) && (*(int *)(_NGUIMath_TypeInfo_12d53b8 + 0xe0) == 0)) {
        native_sub_4327ec();
      }
      lVar6 = **(long **)(_NGUIMath_TypeInfo_12d53b8 + 0xb8);
      if (lVar6 != 0) {
        if (*(int *)(lVar6 + 0x18) == 0) {
          uVar11 = native_UnityEngine_Transform__get_position_77169c(param_5,0);
          goto LAB_00805958;
        }
        if (((*(byte *)(_NGUIMath_TypeInfo_12d53b8 + 0x133) >> 2 & 1) != 0) &&
           (*(int *)(_NGUIMath_TypeInfo_12d53b8 + 0xe0) == 0)) {
          native_sub_4327ec();
          lVar6 = **(long **)(_NGUIMath_TypeInfo_12d53b8 + 0xb8);
          if (lVar6 == 0) goto LAB_00805a3c;
        }
        iVar8 = *(int *)(lVar6 + 0x18);
        if (iVar8 < 1) {
          fVar22 = 3.4028235e+38;
          fVar19 = -3.4028235e+38;
          fVar15 = fVar19;
          fVar17 = fVar19;
          fVar9 = fVar22;
          fVar13 = fVar22;
        }
        else {
          fVar15 = -3.4028235e+38;
          fVar13 = 3.4028235e+38;
          uVar4 = 0;
          fVar17 = fVar15;
          fVar19 = fVar15;
          fVar9 = fVar13;
          fVar22 = fVar13;
          do {
            if (((*(byte *)(_NGUIMath_TypeInfo_12d53b8 + 0x133) >> 2 & 1) != 0) &&
               (*(int *)(_NGUIMath_TypeInfo_12d53b8 + 0xe0) == 0)) {
              native_sub_4327ec();
            }
            lVar6 = **(long **)(_NGUIMath_TypeInfo_12d53b8 + 0xb8);
            if (lVar6 == 0) goto LAB_00805a3c;
            if (*(uint *)(lVar6 + 0x18) <= uVar4) {
              native_System_ThrowHelper__ThrowArgumentOutOfRangeException_9fe0f4(0);
            }
            plVar7 = *(long **)(*(long *)(lVar6 + 0x10) + (long)(int)uVar4 * 8 + 0x20);
            if ((plVar7 == (long *)0x0) ||
               (lVar6 = (**(code **)(*plVar7 + 0x1e8))(plVar7,*(undefined8 *)(*plVar7 + 0x1f0)),
               lVar6 == 0)) goto LAB_00805a3c;
            uVar1 = 0xffffffffffffffff;
            pfVar3 = (float *)(lVar6 + 0x28);
            fVar18 = fVar17;
            fVar16 = fVar15;
            fVar20 = fVar13;
            fVar21 = fVar9;
            do {
              uVar1 = uVar1 + 1;
              if (*(uint *)(lVar6 + 0x18) <= uVar1) {
                uVar11 = native_sub_43283c();
                    /* WARNING: Subroutine does not return */
                native_sub_4327dc(uVar11,0);
              }
              fVar9 = pfVar3[-2];
              fVar12 = pfVar3[-1];
              param_3 = (ulong)(uint)fVar12;
              fVar13 = *pfVar3;
              param_4 = (ulong)(uint)fVar13;
              fVar17 = fVar9;
              if (fVar9 <= fVar19) {
                fVar17 = fVar19;
              }
              fVar19 = fVar17;
              fVar17 = fVar12;
              if (fVar12 <= fVar18) {
                fVar17 = fVar18;
              }
              fVar15 = fVar13;
              if (fVar13 <= fVar16) {
                fVar15 = fVar16;
              }
              if (fVar21 <= fVar9) {
                fVar9 = fVar21;
              }
              if (fVar22 <= fVar12) {
                fVar12 = fVar22;
              }
              fVar22 = fVar12;
              if (fVar20 <= fVar13) {
                fVar13 = fVar20;
              }
              pfVar3 = pfVar3 + 3;
              fVar18 = fVar17;
              fVar16 = fVar15;
              fVar20 = fVar13;
              fVar21 = fVar9;
            } while (uVar1 < 3);
            uVar4 = uVar4 + 1;
          } while ((int)uVar4 < iVar8);
        }
        uVar11 = native_UnityEngine_Vector3__get_zero_776668(0);
        native_UnityEngine_Bounds___ctor_8d7d14
                  (fVar9,fVar22,fVar13,uVar11,param_3,param_4,&uStack_98,0);
        native_UnityEngine_Bounds__Encapsulate_8d80dc(fVar19,fVar17,fVar15,&uStack_98,0);
        param_1[2] = uStack_88;
        param_1[1] = uStack_90;
        *param_1 = uStack_98;
        return;
      }
    }
  }
LAB_00805a3c:
                    /* WARNING: Subroutine does not return */
  native_sub_432810();
}



/* NGUIMath$$CalculateRelativeWidgetBounds @ 0x805a40
 * UnityEngine_Bounds_o NGUIMath__CalculateRelativeWidgetBounds (UnityEngine_Transform_o* trans, const MethodInfo* method); */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* NGUIMath$$CalculateRelativeWidgetBounds
   UnityEngine_Bounds_o NGUIMath__CalculateRelativeWidgetBounds (UnityEngine_Transform_o* trans,
   const MethodInfo* method); */

void native_NGUIMath__CalculateRelativeWidgetBounds_805a40(undefined8 *param_1,long param_2)

{
  uint uVar1;
  long lVar2;
  undefined8 uStack_48;
  undefined8 uStack_40;
  undefined8 uStack_38;
  
  if ((bRam0000000001340469 & 1) == 0) {
    native_sub_43273c(&NGUIMath_TypeInfo_12d53b8);
    bRam0000000001340469 = 1;
  }
  if ((param_2 != 0) &&
     (lVar2 = native_UnityEngine_Component__get_gameObject_8da66c(param_2,0), lVar2 != 0)) {
    uVar1 = native_UnityEngine_GameObject__get_activeSelf_8de6e8(lVar2,0);
    if (((*(byte *)(_NGUIMath_TypeInfo_12d53b8 + 0x133) >> 2 & 1) != 0) &&
       (*(int *)(_NGUIMath_TypeInfo_12d53b8 + 0xe0) == 0)) {
      native_sub_4327ec(_NGUIMath_TypeInfo_12d53b8);
    }
    native_NGUIMath__CalculateRelativeWidgetBounds_805b00(&uStack_48,param_2,param_2,~uVar1 & 1,1);
    param_1[2] = uStack_38;
    param_1[1] = uStack_40;
    *param_1 = uStack_48;
    return;
  }
                    /* WARNING: Subroutine does not return */
  native_sub_432810();
}



/* NGUIMath$$CalculateRelativeWidgetBounds @ 0x805d80
 * UnityEngine_Bounds_o NGUIMath__CalculateRelativeWidgetBounds (UnityEngine_Transform_o* trans, bool considerInactive, const MethodInfo* method); */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* NGUIMath$$CalculateRelativeWidgetBounds
   UnityEngine_Bounds_o NGUIMath__CalculateRelativeWidgetBounds (UnityEngine_Transform_o* trans,
   bool considerInactive, const MethodInfo* method); */

void native_NGUIMath__CalculateRelativeWidgetBounds_805d80
               (undefined8 *param_1,undefined8 param_2,uint param_3)

{
  undefined8 uStack_48;
  undefined8 uStack_40;
  undefined8 uStack_38;
  
  if ((bRam000000000134046a & 1) == 0) {
    native_sub_43273c(&NGUIMath_TypeInfo_12d53b8);
    bRam000000000134046a = 1;
  }
  if (((*(byte *)(_NGUIMath_TypeInfo_12d53b8 + 0x133) >> 2 & 1) != 0) &&
     (*(int *)(_NGUIMath_TypeInfo_12d53b8 + 0xe0) == 0)) {
    native_sub_4327ec();
  }
  native_NGUIMath__CalculateRelativeWidgetBounds_805b00(&uStack_48,param_2,param_2,param_3 & 1,1);
  param_1[2] = uStack_38;
  param_1[1] = uStack_40;
  *param_1 = uStack_48;
  return;
}



/* NGUIMath$$CalculateRelativeWidgetBounds @ 0x805e1c
 * UnityEngine_Bounds_o NGUIMath__CalculateRelativeWidgetBounds (UnityEngine_Transform_o* relativeTo, UnityEngine_Transform_o* content, const MethodInfo* method); */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* NGUIMath$$CalculateRelativeWidgetBounds
   UnityEngine_Bounds_o NGUIMath__CalculateRelativeWidgetBounds (UnityEngine_Transform_o*
   relativeTo, UnityEngine_Transform_o* content, const MethodInfo* method); */

void native_NGUIMath__CalculateRelativeWidgetBounds_805e1c
               (undefined8 *param_1,undefined8 param_2,long param_3)

{
  uint uVar1;
  long lVar2;
  undefined8 uStack_48;
  undefined8 uStack_40;
  undefined8 uStack_38;
  
  if ((bRam000000000134046b & 1) == 0) {
    native_sub_43273c(&NGUIMath_TypeInfo_12d53b8);
    bRam000000000134046b = 1;
  }
  if ((param_3 != 0) &&
     (lVar2 = native_UnityEngine_Component__get_gameObject_8da66c(param_3,0), lVar2 != 0)) {
    uVar1 = native_UnityEngine_GameObject__get_activeSelf_8de6e8(lVar2,0);
    if (((*(byte *)(_NGUIMath_TypeInfo_12d53b8 + 0x133) >> 2 & 1) != 0) &&
       (*(int *)(_NGUIMath_TypeInfo_12d53b8 + 0xe0) == 0)) {
      native_sub_4327ec(_NGUIMath_TypeInfo_12d53b8);
    }
    native_NGUIMath__CalculateRelativeWidgetBounds_805b00(&uStack_48,param_2,param_3,~uVar1 & 1,1);
    param_1[2] = uStack_38;
    param_1[1] = uStack_40;
    *param_1 = uStack_48;
    return;
  }
                    /* WARNING: Subroutine does not return */
  native_sub_432810();
}



/* NGUIMath$$CalculateRelativeWidgetBounds @ 0x805b00
 * UnityEngine_Bounds_o NGUIMath__CalculateRelativeWidgetBounds (UnityEngine_Transform_o* relativeTo, UnityEngine_Transform_o* content, bool considerInactive, bool considerChildren, const MethodInfo* method); */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* NGUIMath$$CalculateRelativeWidgetBounds
   UnityEngine_Bounds_o NGUIMath__CalculateRelativeWidgetBounds (UnityEngine_Transform_o*
   relativeTo, UnityEngine_Transform_o* content, bool considerInactive, bool considerChildren, const
   MethodInfo* method); */

void native_NGUIMath__CalculateRelativeWidgetBounds_805b00
               (undefined8 *param_1,undefined1 param_2 [16],undefined8 param_3,undefined8 param_4,
               long param_5,long param_6,uint param_7,uint param_8)

{
  undefined4 uVar1;
  undefined4 uVar2;
  ulong uVar3;
  undefined8 uVar4;
  undefined8 uVar5;
  undefined8 uVar6;
  undefined8 uVar7;
  undefined8 uStack_138;
  undefined8 uStack_130;
  undefined8 uStack_128;
  undefined8 uStack_120;
  undefined8 uStack_118;
  undefined8 uStack_110;
  undefined8 uStack_108;
  undefined8 uStack_100;
  undefined8 uStack_f8;
  undefined8 uStack_f0;
  undefined8 uStack_e8;
  undefined8 uStack_e0;
  undefined4 uStack_d8;
  undefined8 uStack_d0;
  undefined4 uStack_c8;
  undefined8 uStack_c0;
  undefined8 uStack_b8;
  undefined8 uStack_b0;
  undefined8 uStack_a8;
  undefined8 uStack_a0;
  undefined8 uStack_98;
  undefined8 uStack_90;
  undefined8 uStack_88;
  char acStack_74 [4];
  
  if ((bRam000000000134046c & 1) == 0) {
    native_sub_43273c(&NGUIMath_TypeInfo_12d53b8);
    native_sub_43273c(&UnityEngine_Object_TypeInfo_12d54e0);
    bRam000000000134046c = 1;
  }
  acStack_74[0] = '\0';
  uStack_c8 = 0;
  uStack_d0 = 0;
  uStack_d8 = 0;
  uStack_e0 = 0;
  uStack_98 = 0;
  uStack_a0 = 0;
  uStack_88 = 0;
  uStack_90 = 0;
  uStack_a8 = 0;
  uStack_b0 = 0;
  uStack_b8 = 0;
  uStack_c0 = 0;
  uStack_f0 = 0;
  uStack_e8 = 0;
  uStack_f8 = 0;
  if (((*(byte *)(_UnityEngine_Object_TypeInfo_12d54e0 + 0x133) >> 2 & 1) != 0) &&
     (*(int *)(_UnityEngine_Object_TypeInfo_12d54e0 + 0xe0) == 0)) {
    native_sub_4327ec();
  }
  uVar3 = native_UnityEngine_Object__op_Inequality_8d76fc(param_6,0,0);
  if ((uVar3 & 1) != 0) {
    if (((*(byte *)(_UnityEngine_Object_TypeInfo_12d54e0 + 0x133) >> 2 & 1) != 0) &&
       (*(int *)(_UnityEngine_Object_TypeInfo_12d54e0 + 0xe0) == 0)) {
      native_sub_4327ec();
    }
    uVar3 = native_UnityEngine_Object__op_Inequality_8d76fc(param_5,0,0);
    if ((uVar3 & 1) != 0) {
      acStack_74[0] = '\0';
      if (param_5 == 0) {
LAB_00805d7c:
                    /* WARNING: Subroutine does not return */
        native_sub_432810();
      }
      native_UnityEngine_Transform__get_worldToLocalMatrix_772138(&uStack_138,param_5,0);
      uStack_e0 = 0xff7fffffff7fffff;
      uStack_d0 = 0x7f7fffff7f7fffff;
      uStack_98 = uStack_110;
      uStack_a0 = uStack_118;
      uStack_88 = uStack_100;
      uStack_90 = uStack_108;
      uStack_a8 = uStack_120;
      uStack_b0 = uStack_128;
      uStack_c8 = 0x7f7fffff;
      uStack_b8 = uStack_130;
      uStack_c0 = uStack_138;
      uStack_d8 = 0xff7fffff;
      param_3 = uStack_118;
      param_4 = uStack_128;
      if (((*(byte *)(_NGUIMath_TypeInfo_12d53b8 + 0x133) >> 2 & 1) != 0) &&
         (*(int *)(_NGUIMath_TypeInfo_12d53b8 + 0xe0) == 0)) {
        native_sub_4327ec();
        param_3 = uStack_118;
        param_4 = uStack_128;
      }
      native_NGUIMath__CalculateRelativeWidgetBounds_805ee4
                (param_6,param_7 & 1,1,&uStack_c0,&uStack_d0,&uStack_e0,acStack_74,param_8 & 1);
      uVar2 = uStack_c8;
      if (acStack_74[0] != '\0') {
        uVar3 = uStack_d0 & 0xffffffff;
        uVar1 = uStack_d0._4_4_;
        uVar4 = native_UnityEngine_Vector3__get_zero_776668(0);
        native_UnityEngine_Bounds___ctor_8d7d14
                  (uVar3,uVar1,uVar2,uVar4,param_3,param_4,&uStack_f8,0);
        native_UnityEngine_Bounds__Encapsulate_8d80dc
                  (uStack_e0 & 0xffffffff,uStack_e0._4_4_,uStack_d8,&uStack_f8,0);
        param_1[2] = uStack_e8;
        param_1[1] = uStack_f0;
        *param_1 = uStack_f8;
        return;
      }
      if (param_6 == 0) goto LAB_00805d7c;
      native_UnityEngine_Transform__get_position_77169c(param_6,0);
      uVar4 = native_UnityEngine_Matrix4x4__MultiplyPoint3x4_8e5cec(&uStack_c0,0);
      goto LAB_00805cf8;
    }
  }
  uVar4 = native_UnityEngine_Vector3__get_zero_776668(0);
LAB_00805cf8:
  uVar6 = param_3;
  uVar7 = param_4;
  uVar5 = native_UnityEngine_Vector3__get_zero_776668(0);
  param_1[1] = 0;
  param_1[2] = 0;
  *param_1 = 0;
  native_UnityEngine_Bounds___ctor_8d7d14(uVar4,param_3,param_4,uVar5,uVar6,uVar7,param_1,0);
  return;
}



/* NGUIMath$$CalculateRelativeWidgetBounds @ 0x805ee4
 * void NGUIMath__CalculateRelativeWidgetBounds (UnityEngine_Transform_o* content, bool considerInactive, bool isRoot, UnityEngine_Matrix4x4_o* toLocal, UnityEngine_Vector3_o* vMin, UnityEngine_Vector3_o* vMax, bool* isSet, bool considerChildren, const MethodInfo* method); */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* NGUIMath$$CalculateRelativeWidgetBounds
   void NGUIMath__CalculateRelativeWidgetBounds (UnityEngine_Transform_o* content, bool
   considerInactive, bool isRoot, UnityEngine_Matrix4x4_o* toLocal, UnityEngine_Vector3_o* vMin,
   UnityEngine_Vector3_o* vMax, bool* isSet, bool considerChildren, const MethodInfo* method); */

void native_NGUIMath__CalculateRelativeWidgetBounds_805ee4
               (long param_1,uint param_2,ulong param_3,undefined8 param_4,float *param_5,
               float *param_6,undefined1 *param_7,ulong param_8)

{
  int iVar1;
  ulong uVar2;
  undefined8 uVar3;
  long lVar4;
  float *pfVar5;
  int iVar6;
  long *plVar7;
  float fVar8;
  float fVar9;
  float fVar10;
  
  if ((bRam000000000134046d & 1) == 0) {
    native_sub_43273c(&Method_UnityEngine_Component_GetComponent_UIPanel____12e2be0);
    native_sub_43273c(&Method_UnityEngine_Component_GetComponent_UIWidget____12e2c30);
    native_sub_43273c(&NGUIMath_TypeInfo_12d53b8);
    native_sub_43273c(&NGUITools_TypeInfo_12d53c8);
    native_sub_43273c(&UnityEngine_Object_TypeInfo_12d54e0);
    bRam000000000134046d = 1;
  }
  if (((*(byte *)(_UnityEngine_Object_TypeInfo_12d54e0 + 0x133) >> 2 & 1) != 0) &&
     (*(int *)(_UnityEngine_Object_TypeInfo_12d54e0 + 0xe0) == 0)) {
    native_sub_4327ec();
  }
  uVar2 = native_UnityEngine_Object__op_Equality_8e9a3c(param_1,0,0);
  if ((uVar2 & 1) == 0) {
    if ((param_2 & 1) == 0) {
      if (param_1 == 0) goto LAB_00806348;
      uVar3 = native_UnityEngine_Component__get_gameObject_8da66c(param_1,0);
      if (((*(byte *)(_NGUITools_TypeInfo_12d53c8 + 0x133) >> 2 & 1) != 0) &&
         (*(int *)(_NGUITools_TypeInfo_12d53c8 + 0xe0) == 0)) {
        native_sub_4327ec(_NGUITools_TypeInfo_12d53c8);
      }
      uVar2 = native_NGUITools__GetActive_72d0d4(uVar3,0);
      if ((uVar2 & 1) == 0) {
        return;
      }
    }
    if ((param_3 & 1) == 0) {
      if (param_1 == 0) goto LAB_00806348;
      plVar7 = (long *)native_UnityEngine_Component__GetComponent_ActiveAnimation__49daec
                                 (param_1,
                                  _Method_UnityEngine_Component_GetComponent_UIPanel____12e2be0);
    }
    else {
      plVar7 = (long *)0x0;
    }
    if (((*(byte *)(_UnityEngine_Object_TypeInfo_12d54e0 + 0x133) >> 2 & 1) != 0) &&
       (*(int *)(_UnityEngine_Object_TypeInfo_12d54e0 + 0xe0) == 0)) {
      native_sub_4327ec();
    }
    uVar2 = native_UnityEngine_Object__op_Inequality_8d76fc(plVar7,0,0);
    if ((uVar2 & 1) != 0) {
      if (plVar7 == (long *)0x0) goto LAB_00806348;
      uVar2 = native_UnityEngine_Behaviour__get_enabled_8d7acc(plVar7,0);
      if ((uVar2 & 1) == 0) {
        return;
      }
    }
    if (((*(byte *)(_UnityEngine_Object_TypeInfo_12d54e0 + 0x133) >> 2 & 1) != 0) &&
       (*(int *)(_UnityEngine_Object_TypeInfo_12d54e0 + 0xe0) == 0)) {
      native_sub_4327ec();
    }
    uVar2 = native_UnityEngine_Object__op_Inequality_8d76fc(plVar7,0,0);
    if ((uVar2 & 1) != 0) {
      if (plVar7 == (long *)0x0) goto LAB_00806348;
      if ((int)plVar7[0x28] != 0) {
        lVar4 = (**(code **)(*plVar7 + 0x1e8))(plVar7,*(undefined8 *)(*plVar7 + 0x1f0));
        if (lVar4 != 0) {
          pfVar5 = (float *)(lVar4 + 0x28);
          uVar2 = 0xffffffffffffffff;
          while (uVar2 + 1 < (ulong)*(uint *)(lVar4 + 0x18)) {
            fVar9 = pfVar5[-1];
            fVar10 = *pfVar5;
            fVar8 = (float)native_UnityEngine_Matrix4x4__MultiplyPoint3x4_8e5cec
                                     (pfVar5[-2],param_4,0);
            if (*param_6 < fVar8) {
              *param_6 = fVar8;
            }
            if (param_6[1] < fVar9) {
              param_6[1] = fVar9;
            }
            if (param_6[2] < fVar10) {
              param_6[2] = fVar10;
            }
            if (fVar8 < *param_5) {
              *param_5 = fVar8;
            }
            if (fVar9 < param_5[1]) {
              param_5[1] = fVar9;
            }
            if (fVar10 < param_5[2]) {
              param_5[2] = fVar10;
            }
            uVar2 = uVar2 + 1;
            pfVar5 = pfVar5 + 3;
            *param_7 = 1;
            if (2 < uVar2) {
              return;
            }
          }
LAB_0080633c:
          uVar3 = native_sub_43283c();
                    /* WARNING: Subroutine does not return */
          native_sub_4327dc(uVar3,0);
        }
        goto LAB_00806348;
      }
    }
    if (param_1 == 0) {
LAB_00806348:
                    /* WARNING: Subroutine does not return */
      native_sub_432810();
    }
    plVar7 = (long *)native_UnityEngine_Component__GetComponent_ActiveAnimation__49daec
                               (param_1,
                                _Method_UnityEngine_Component_GetComponent_UIWidget____12e2c30);
    if (((*(byte *)(_UnityEngine_Object_TypeInfo_12d54e0 + 0x133) >> 2 & 1) != 0) &&
       (*(int *)(_UnityEngine_Object_TypeInfo_12d54e0 + 0xe0) == 0)) {
      native_sub_4327ec(_UnityEngine_Object_TypeInfo_12d54e0);
    }
    uVar2 = native_UnityEngine_Object__op_Inequality_8d76fc(plVar7,0,0);
    if ((uVar2 & 1) != 0) {
      if (plVar7 == (long *)0x0) goto LAB_00806348;
      uVar2 = native_UnityEngine_Behaviour__get_enabled_8d7acc(plVar7,0);
      if ((((uVar2 & 1) != 0) &&
          (uVar2 = (**(code **)(*plVar7 + 0x398))(plVar7,*(undefined8 *)(*plVar7 + 0x3a0)),
          (uVar2 & 1) != 0)) && ((char)plVar7[0x16] == '\0')) {
        lVar4 = (**(code **)(*plVar7 + 0x1e8))(plVar7,*(undefined8 *)(*plVar7 + 0x1f0));
        if (lVar4 == 0) goto LAB_00806348;
        pfVar5 = (float *)(lVar4 + 0x28);
        uVar2 = 0xffffffffffffffff;
        do {
          if ((ulong)*(uint *)(lVar4 + 0x18) <= uVar2 + 1) goto LAB_0080633c;
          fVar9 = pfVar5[-1];
          fVar10 = *pfVar5;
          fVar8 = (float)native_UnityEngine_Matrix4x4__MultiplyPoint3x4_8e5cec(pfVar5[-2],param_4,0)
          ;
          if (*param_6 < fVar8) {
            *param_6 = fVar8;
          }
          if (param_6[1] < fVar9) {
            param_6[1] = fVar9;
          }
          if (param_6[2] < fVar10) {
            param_6[2] = fVar10;
          }
          if (fVar8 < *param_5) {
            *param_5 = fVar8;
          }
          if (fVar9 < param_5[1]) {
            param_5[1] = fVar9;
          }
          if (fVar10 < param_5[2]) {
            param_5[2] = fVar10;
          }
          uVar2 = uVar2 + 1;
          pfVar5 = pfVar5 + 3;
          *param_7 = 1;
        } while (uVar2 < 3);
        if ((param_8 & 1) == 0) {
          return;
        }
      }
    }
    iVar1 = native_UnityEngine_Transform__get_childCount_772a64(param_1,0);
    if (0 < iVar1) {
      iVar6 = 0;
      do {
        uVar3 = native_UnityEngine_Transform__GetChild_772ef0(param_1,iVar6,0);
        if (((*(byte *)(_NGUIMath_TypeInfo_12d53b8 + 0x133) >> 2 & 1) != 0) &&
           (*(int *)(_NGUIMath_TypeInfo_12d53b8 + 0xe0) == 0)) {
          native_sub_4327ec(_NGUIMath_TypeInfo_12d53b8);
        }
        native_NGUIMath__CalculateRelativeWidgetBounds_805ee4
                  (uVar3,param_2 & 1,0,param_4,param_5,param_6,param_7,1);
        iVar6 = iVar6 + 1;
      } while (iVar1 != iVar6);
    }
  }
  return;
}



/* NGUIMath$$SpringDampen @ 0x80634c
 * UnityEngine_Vector3_o NGUIMath__SpringDampen (UnityEngine_Vector3_o* velocity, float strength, float deltaTime, const MethodInfo* method); */

/* NGUIMath$$SpringDampen
   UnityEngine_Vector3_o NGUIMath__SpringDampen (UnityEngine_Vector3_o* velocity, float strength,
   float deltaTime, const MethodInfo* method); */

void native_NGUIMath__SpringDampen_80634c(float param_1,float param_2,undefined8 *param_3)

{
  int iVar1;
  float fVar2;
  float fVar3;
  
  if (1.0 < param_2) {
    param_2 = 1.0;
  }
  fVar3 = param_1 * -0.001 + 1.0;
  iVar1 = native_UnityEngine_Mathf__RoundToInt_8e50f0(param_2 * 1000.0,0);
  fVar2 = (float)func_0x002c89c0(fVar3,(float)iVar1);
  func_0x002c9a20(fVar3);
  *param_3 = CONCAT44((float)((ulong)*param_3 >> 0x20) * fVar2,(float)*param_3 * fVar2);
  *(float *)(param_3 + 1) = fVar2 * *(float *)(param_3 + 1);
  return;
}



/* NGUIMath$$SpringDampen @ 0x80641c
 * UnityEngine_Vector2_o NGUIMath__SpringDampen (UnityEngine_Vector2_o* velocity, float strength, float deltaTime, const MethodInfo* method); */

/* NGUIMath$$SpringDampen
   UnityEngine_Vector2_o NGUIMath__SpringDampen (UnityEngine_Vector2_o* velocity, float strength,
   float deltaTime, const MethodInfo* method); */

void native_NGUIMath__SpringDampen_80641c(float param_1,float param_2,undefined8 *param_3)

{
  int iVar1;
  float fVar2;
  float fVar3;
  
  if (1.0 < param_2) {
    param_2 = 1.0;
  }
  fVar3 = param_1 * -0.001 + 1.0;
  iVar1 = native_UnityEngine_Mathf__RoundToInt_8e50f0(param_2 * 1000.0,0);
  fVar2 = (float)func_0x002c89c0(fVar3,(float)iVar1);
  func_0x002c9a20(fVar3);
  *param_3 = CONCAT44((float)((ulong)*param_3 >> 0x20) * fVar2,(float)*param_3 * fVar2);
  return;
}



/* NGUIMath$$SpringLerp @ 0x8064c4
 * float NGUIMath__SpringLerp (float strength, float deltaTime, const MethodInfo* method); */

/* NGUIMath$$SpringLerp
   float NGUIMath__SpringLerp (float strength, float deltaTime, const MethodInfo* method); */

undefined1  [16] native_NGUIMath__SpringLerp_8064c4(float param_1,float param_2)

{
  int iVar1;
  undefined4 uVar2;
  undefined4 extraout_s0;
  undefined4 extraout_var;
  undefined4 uVar4;
  undefined8 extraout_var_00;
  undefined8 uVar5;
  undefined1 auVar3 [16];
  
  if (1.0 < param_2) {
    param_2 = 1.0;
  }
  iVar1 = native_UnityEngine_Mathf__RoundToInt_8e50f0(param_2 * 1000.0,0);
  if (iVar1 < 1) {
    uVar2 = 0;
    uVar4 = 0;
    uVar5 = 0;
  }
  else {
    uVar2 = 0;
    do {
      native_UnityEngine_Mathf__Lerp_8e5224(uVar2,0x3f800000,param_1 * 0.001,0);
      iVar1 = iVar1 + -1;
      uVar2 = extraout_s0;
      uVar4 = extraout_var;
      uVar5 = extraout_var_00;
    } while (iVar1 != 0);
  }
  auVar3._4_4_ = uVar4;
  auVar3._0_4_ = uVar2;
  auVar3._8_8_ = uVar5;
  return auVar3;
}



/* NGUIMath$$SpringLerp @ 0x806544
 * float NGUIMath__SpringLerp (float from, float to, float strength, float deltaTime, const MethodInfo* method); */

/* WARNING: Removing unreachable block (ram,0x0080656c) */
/* NGUIMath$$SpringLerp
   float NGUIMath__SpringLerp (float from, float to, float strength, float deltaTime, const
   MethodInfo* method); */

undefined1  [16]
native_NGUIMath__SpringLerp_806544
          (undefined1 param_1 [16],undefined8 param_2,float param_3,float param_4)

{
  int iVar1;
  undefined1 auVar2 [16];
  undefined8 uVar3;
  undefined8 uVar4;
  
  uVar4 = param_1._8_8_;
  uVar3 = param_1._0_8_;
  iVar1 = native_UnityEngine_Mathf__RoundToInt_8e50f0(param_4 * 1000.0,0);
  auVar2._8_8_ = uVar4;
  auVar2._0_8_ = uVar3;
  if (0 < iVar1) {
    do {
      auVar2 = native_UnityEngine_Mathf__Lerp_8e5224(uVar3,param_2,param_3 * 0.001,0);
      uVar3 = auVar2._0_8_;
      iVar1 = iVar1 + -1;
    } while (iVar1 != 0);
  }
  return auVar2;
}



/* NGUIMath$$SpringLerp @ 0x8065d0
 * UnityEngine_Vector2_o NGUIMath__SpringLerp (UnityEngine_Vector2_o from, UnityEngine_Vector2_o to, float strength, float deltaTime, const MethodInfo* method); */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* NGUIMath$$SpringLerp
   UnityEngine_Vector2_o NGUIMath__SpringLerp (UnityEngine_Vector2_o from, UnityEngine_Vector2_o to,
   float strength, float deltaTime, const MethodInfo* method); */

float native_NGUIMath__SpringLerp_8065d0
                (float param_1,undefined1 param_2 [16],float param_3,undefined1 param_4 [16],
                undefined8 param_5,undefined8 param_6)

{
  float fVar1;
  
  if ((bRam000000000134046e & 1) == 0) {
    native_sub_43273c(&NGUIMath_TypeInfo_12d53b8);
    bRam000000000134046e = 1;
  }
  if (((*(byte *)(_NGUIMath_TypeInfo_12d53b8 + 0x133) >> 2 & 1) != 0) &&
     (*(int *)(_NGUIMath_TypeInfo_12d53b8 + 0xe0) == 0)) {
    native_sub_4327ec();
  }
  native_NGUIMath__SpringLerp_8064c4(param_5,param_6);
  fVar1 = (float)native_UnityEngine_Mathf__Clamp01_8d9d9c(0);
  return param_1 + (param_3 - param_1) * fVar1;
}



/* NGUIMath$$SpringLerp @ 0x806684
 * UnityEngine_Vector3_o NGUIMath__SpringLerp (UnityEngine_Vector3_o from, UnityEngine_Vector3_o to, float strength, float deltaTime, const MethodInfo* method); */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* NGUIMath$$SpringLerp
   UnityEngine_Vector3_o NGUIMath__SpringLerp (UnityEngine_Vector3_o from, UnityEngine_Vector3_o to,
   float strength, float deltaTime, const MethodInfo* method); */

float native_NGUIMath__SpringLerp_806684
                (float param_1,undefined1 param_2 [16],undefined1 param_3 [16],float param_4,
                undefined1 param_5 [16],undefined1 param_6 [16],undefined8 param_7,
                undefined8 param_8)

{
  float fVar1;
  
  if ((bRam000000000134046f & 1) == 0) {
    native_sub_43273c(&NGUIMath_TypeInfo_12d53b8);
    bRam000000000134046f = 1;
  }
  if (((*(byte *)(_NGUIMath_TypeInfo_12d53b8 + 0x133) >> 2 & 1) != 0) &&
     (*(int *)(_NGUIMath_TypeInfo_12d53b8 + 0xe0) == 0)) {
    native_sub_4327ec();
  }
  native_NGUIMath__SpringLerp_8064c4(param_7,param_8);
  fVar1 = (float)native_UnityEngine_Mathf__Clamp01_8d9d9c(0);
  return param_1 + (param_4 - param_1) * fVar1;
}



/* NGUIMath$$SpringLerp @ 0x806754
 * UnityEngine_Quaternion_o NGUIMath__SpringLerp (UnityEngine_Quaternion_o from, UnityEngine_Quaternion_o to, float strength, float deltaTime, const MethodInfo* method); */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* NGUIMath$$SpringLerp
   UnityEngine_Quaternion_o NGUIMath__SpringLerp (UnityEngine_Quaternion_o from,
   UnityEngine_Quaternion_o to, float strength, float deltaTime, const MethodInfo* method); */

undefined4 native_NGUIMath__SpringLerp_806754(void)

{
  undefined4 uVar1;
  undefined4 in_stack_00000000;
  undefined4 in_stack_00000008;
  
  if ((bRam0000000001340470 & 1) == 0) {
    native_sub_43273c(&NGUIMath_TypeInfo_12d53b8);
    bRam0000000001340470 = 1;
  }
  if (((*(byte *)(_NGUIMath_TypeInfo_12d53b8 + 0x133) >> 2 & 1) != 0) &&
     (*(int *)(_NGUIMath_TypeInfo_12d53b8 + 0xe0) == 0)) {
    native_sub_4327ec();
  }
  uVar1 = native_NGUIMath__SpringLerp_8064c4(in_stack_00000000,in_stack_00000008);
  if (pcRam000000000133f7e8 == (code *)0x0) {
    pcRam000000000133f7e8 = (code *)native_sub_4326f0(&UNK_00e27d29);
  }
  (*pcRam000000000133f7e8)
            (uVar1,&stack0xffffffffffffffd0,&stack0xffffffffffffffc0,&stack0xffffffffffffffb0);
  return 0;
}



/* NGUIMath$$RotateTowards @ 0x806820
 * float NGUIMath__RotateTowards (float from, float to, float maxAngle, const MethodInfo* method); */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* NGUIMath$$RotateTowards
   float NGUIMath__RotateTowards (float from, float to, float maxAngle, const MethodInfo* method);
    */

float native_NGUIMath__RotateTowards_806820(float param_1,float param_2,float param_3)

{
  if ((bRam0000000001340471 & 1) == 0) {
    native_sub_43273c(&NGUIMath_TypeInfo_12d53b8);
    bRam0000000001340471 = 1;
  }
  if (((*(byte *)(_NGUIMath_TypeInfo_12d53b8 + 0x133) >> 2 & 1) != 0) &&
     (*(int *)(_NGUIMath_TypeInfo_12d53b8 + 0xe0) == 0)) {
    native_sub_4327ec();
  }
  for (param_2 = param_2 - param_1; 180.0 < param_2; param_2 = param_2 + -360.0) {
  }
  for (; param_2 < -180.0; param_2 = param_2 + 360.0) {
  }
  if (param_3 < ABS(param_2)) {
    param_2 = (float)native_UnityEngine_Mathf__Sign_8e51d8(0);
    param_2 = param_2 * param_3;
  }
  return param_2 + param_1;
}



/* NGUIMath$$DistancePointToLineSegment @ 0x8068fc
 * float NGUIMath__DistancePointToLineSegment (UnityEngine_Vector2_o point, UnityEngine_Vector2_o a, UnityEngine_Vector2_o b, const MethodInfo* method); */

/* NGUIMath$$DistancePointToLineSegment
   float NGUIMath__DistancePointToLineSegment (UnityEngine_Vector2_o point, UnityEngine_Vector2_o a,
   UnityEngine_Vector2_o b, const MethodInfo* method); */

void native_NGUIMath__DistancePointToLineSegment_8068fc
               (float param_1,float param_2,float param_3,float param_4,float param_5,float param_6)

{
  float fVar1;
  float fVar2;
  float fVar3;
  float fStack_58;
  float fStack_54;
  
  fVar2 = param_5 - param_3;
  fVar3 = param_6 - param_4;
  fStack_58 = fVar2;
  fStack_54 = fVar3;
  fVar1 = (float)native_UnityEngine_Vector2__get_sqrMagnitude_775674(&fStack_58,0);
  fStack_58 = param_1 - param_3;
  fStack_54 = param_2 - param_4;
  if ((fVar1 != 0.0) && (fVar1 = (fStack_58 * fVar2 + fStack_54 * fVar3) / fVar1, 0.0 <= fVar1)) {
    if (fVar1 <= 1.0) {
      fStack_58 = param_1 - (param_3 + fVar2 * fVar1);
      fStack_54 = param_2 - (param_4 + fVar3 * fVar1);
    }
    else {
      fStack_58 = param_1 - param_5;
      fStack_54 = param_2 - param_6;
    }
  }
  native_UnityEngine_Vector2__get_magnitude_7752bc(&fStack_58,0);
  return;
}



/* NGUIMath$$DistanceToRectangle @ 0x8069cc
 * float NGUIMath__DistanceToRectangle (UnityEngine_Vector2_array* screenPoints, UnityEngine_Vector2_o mousePos, const MethodInfo* method); */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* NGUIMath$$DistanceToRectangle
   float NGUIMath__DistanceToRectangle (UnityEngine_Vector2_array* screenPoints,
   UnityEngine_Vector2_o mousePos, const MethodInfo* method); */

float native_NGUIMath__DistanceToRectangle_8069cc
                (undefined8 param_1,undefined8 param_2,long param_3)

{
  long lVar1;
  long lVar2;
  bool bVar3;
  undefined8 uVar4;
  uint uVar5;
  uint uVar6;
  ulong uVar7;
  undefined4 *puVar8;
  uint uVar9;
  int iVar10;
  ulong uVar11;
  uint uVar12;
  uint uVar13;
  float fVar14;
  float fVar15;
  float fVar16;
  float fVar17;
  undefined4 uVar18;
  undefined4 uVar19;
  
  if ((bRam0000000001340472 & 1) == 0) {
    native_sub_43273c(&NGUIMath_TypeInfo_12d53b8);
    bRam0000000001340472 = 1;
  }
  bVar3 = false;
  uVar12 = 0xffffffff;
  uVar6 = 0;
  uVar13 = 0;
  do {
    uVar9 = uVar6;
    if (((*(byte *)(_NGUIMath_TypeInfo_12d53b8 + 0x133) >> 2 & 1) != 0) &&
       (*(int *)(_NGUIMath_TypeInfo_12d53b8 + 0xe0) == 0)) {
      native_sub_4327ec();
    }
    if (param_3 == 0) {
                    /* WARNING: Subroutine does not return */
      native_sub_432810();
    }
    uVar6 = uVar12 + 1 & 3;
    uVar5 = (uint)*(ulong *)(param_3 + 0x18);
    if ((uVar5 <= uVar6) || (uVar5 <= (uVar13 & 3))) goto LAB_00806b74;
    lVar1 = param_3 + (ulong)uVar6 * 8;
    fVar14 = *(float *)(lVar1 + 0x24);
    lVar2 = param_3 + (ulong)(uVar13 & 3) * 8;
    fVar15 = *(float *)(lVar2 + 0x24);
    fVar17 = (float)param_2;
    if ((fVar14 <= fVar17 == fVar17 < fVar15) &&
       (fVar16 = *(float *)(lVar1 + 0x20),
       (float)param_1 <
       fVar16 + ((fVar17 - fVar14) * (*(float *)(lVar2 + 0x20) - fVar16)) / (fVar15 - fVar14))) {
      bVar3 = (bool)(bVar3 ^ 1);
    }
    uVar12 = uVar12 + 1;
    uVar6 = uVar9 + 1;
    uVar13 = uVar9;
  } while (uVar12 < 4);
  if (bVar3) {
    return 0.0;
  }
  uVar7 = *(ulong *)(param_3 + 0x18) & 0xffffffff;
  if (uVar7 != 0) {
    uVar11 = 0;
    puVar8 = (undefined4 *)(param_3 + 0x24);
    fVar14 = -1.0;
    uVar12 = 1;
    do {
      uVar6 = (uint)uVar7;
      uVar19 = puVar8[-1];
      uVar18 = *puVar8;
      if (((*(byte *)(_NGUIMath_TypeInfo_12d53b8 + 0x133) >> 2 & 1) != 0) &&
         (*(int *)(_NGUIMath_TypeInfo_12d53b8 + 0xe0) == 0)) {
        native_sub_4327ec();
        uVar6 = *(uint *)(param_3 + 0x18);
      }
      if (uVar6 <= uVar12) break;
      lVar1 = param_3 + (ulong)uVar12 * 8;
      fVar15 = (float)native_NGUIMath__DistancePointToLineSegment_8068fc
                                (param_1,param_2,uVar19,uVar18,*(undefined4 *)(lVar1 + 0x20),
                                 *(undefined4 *)(lVar1 + 0x24));
      bVar3 = true;
      if ((fVar14 <= fVar15) && (bVar3 = false, !NAN(fVar14))) {
        bVar3 = fVar14 < 0.0;
      }
      if (!bVar3) {
        fVar15 = fVar14;
      }
      fVar14 = fVar15;
      if (2 < uVar11) {
        return fVar14;
      }
      uVar7 = (ulong)*(uint *)(param_3 + 0x18);
      iVar10 = (int)uVar11;
      uVar11 = uVar11 + 1;
      uVar12 = iVar10 + 2U & 3;
      puVar8 = puVar8 + 2;
    } while (uVar11 < uVar7);
  }
LAB_00806b74:
  uVar4 = native_sub_43283c();
                    /* WARNING: Subroutine does not return */
  native_sub_4327dc(uVar4,0);
}



/* NGUIMath$$DistanceToRectangle @ 0x806ba8
 * float NGUIMath__DistanceToRectangle (UnityEngine_Vector3_array* worldPoints, UnityEngine_Vector2_o mousePos, UnityEngine_Camera_o* cam, const MethodInfo* method); */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* NGUIMath$$DistanceToRectangle
   float NGUIMath__DistanceToRectangle (UnityEngine_Vector3_array* worldPoints,
   UnityEngine_Vector2_o mousePos, UnityEngine_Camera_o* cam, const MethodInfo* method); */

float native_NGUIMath__DistanceToRectangle_806ba8
                (undefined8 param_1,undefined8 param_2,long param_3,long param_4)

{
  long lVar1;
  long lVar2;
  bool bVar3;
  undefined8 uVar4;
  long lVar5;
  uint uVar6;
  uint uVar7;
  undefined4 *puVar8;
  uint uVar9;
  int iVar10;
  ulong uVar11;
  uint uVar12;
  undefined4 *puVar13;
  uint uVar14;
  ulong uVar15;
  float fVar16;
  undefined4 uVar17;
  float fVar18;
  undefined4 uVar19;
  float fVar20;
  float fVar21;
  
  if ((bRam0000000001340473 & 1) == 0) {
    native_sub_43273c(&NGUIMath_TypeInfo_12d53b8);
    native_sub_43273c(&UnityEngine_Vector2___TypeInfo_12d3470);
    bRam0000000001340473 = 1;
  }
  lVar5 = native_sub_432750(_UnityEngine_Vector2___TypeInfo_12d3470,4);
  if (param_3 == 0) {
LAB_00806cc0:
                    /* WARNING: Subroutine does not return */
    native_sub_432810();
  }
  puVar8 = (undefined4 *)(param_3 + 0x28);
  puVar13 = (undefined4 *)(lVar5 + 0x24);
  uVar15 = 0xffffffffffffffff;
  do {
    if ((ulong)*(uint *)(param_3 + 0x18) <= uVar15 + 1) {
LAB_00806cc4:
      uVar4 = native_sub_43283c();
                    /* WARNING: Subroutine does not return */
      native_sub_4327dc(uVar4,0);
    }
    if (param_4 == 0) goto LAB_00806cc0;
    uVar19 = puVar8[-1];
    uVar17 = native_UnityEngine_Camera__WorldToScreenPoint_8d9158
                       (puVar8[-2],uVar19,*puVar8,param_4,0);
    if (lVar5 == 0) goto LAB_00806cc0;
    if ((ulong)*(uint *)(lVar5 + 0x18) <= uVar15 + 1) goto LAB_00806cc4;
    uVar15 = uVar15 + 1;
    puVar13[-1] = uVar17;
    *puVar13 = uVar19;
    puVar8 = puVar8 + 3;
    puVar13 = puVar13 + 2;
  } while (uVar15 < 3);
  if (((*(byte *)(_NGUIMath_TypeInfo_12d53b8 + 0x133) >> 2 & 1) != 0) &&
     (*(int *)(_NGUIMath_TypeInfo_12d53b8 + 0xe0) == 0)) {
    native_sub_4327ec();
  }
  if ((bRam0000000001340472 & 1) == 0) {
    native_sub_43273c(&NGUIMath_TypeInfo_12d53b8);
    bRam0000000001340472 = 1;
  }
  bVar3 = false;
  uVar12 = 0xffffffff;
  uVar7 = 0;
  uVar14 = 0;
  do {
    uVar9 = uVar7;
    if (((*(byte *)(_NGUIMath_TypeInfo_12d53b8 + 0x133) >> 2 & 1) != 0) &&
       (*(int *)(_NGUIMath_TypeInfo_12d53b8 + 0xe0) == 0)) {
      native_sub_4327ec();
    }
    if (lVar5 == 0) {
                    /* WARNING: Subroutine does not return */
      native_sub_432810();
    }
    uVar7 = uVar12 + 1 & 3;
    uVar6 = (uint)*(ulong *)(lVar5 + 0x18);
    if ((uVar6 <= uVar7) || (uVar6 <= (uVar14 & 3))) goto LAB_00806b74;
    lVar1 = lVar5 + (ulong)uVar7 * 8;
    fVar16 = *(float *)(lVar1 + 0x24);
    lVar2 = lVar5 + (ulong)(uVar14 & 3) * 8;
    fVar18 = *(float *)(lVar2 + 0x24);
    fVar21 = (float)param_2;
    if ((fVar16 <= fVar21 == fVar21 < fVar18) &&
       (fVar20 = *(float *)(lVar1 + 0x20),
       (float)param_1 <
       fVar20 + ((fVar21 - fVar16) * (*(float *)(lVar2 + 0x20) - fVar20)) / (fVar18 - fVar16))) {
      bVar3 = (bool)(bVar3 ^ 1);
    }
    uVar12 = uVar12 + 1;
    uVar7 = uVar9 + 1;
    uVar14 = uVar9;
  } while (uVar12 < 4);
  if (bVar3) {
    return 0.0;
  }
  uVar15 = *(ulong *)(lVar5 + 0x18) & 0xffffffff;
  if (uVar15 != 0) {
    uVar11 = 0;
    puVar8 = (undefined4 *)(lVar5 + 0x24);
    fVar16 = -1.0;
    uVar12 = 1;
    do {
      uVar7 = (uint)uVar15;
      uVar19 = puVar8[-1];
      uVar17 = *puVar8;
      if (((*(byte *)(_NGUIMath_TypeInfo_12d53b8 + 0x133) >> 2 & 1) != 0) &&
         (*(int *)(_NGUIMath_TypeInfo_12d53b8 + 0xe0) == 0)) {
        native_sub_4327ec();
        uVar7 = *(uint *)(lVar5 + 0x18);
      }
      if (uVar7 <= uVar12) break;
      lVar1 = lVar5 + (ulong)uVar12 * 8;
      fVar18 = (float)native_NGUIMath__DistancePointToLineSegment_8068fc
                                (param_1,param_2,uVar19,uVar17,*(undefined4 *)(lVar1 + 0x20),
                                 *(undefined4 *)(lVar1 + 0x24));
      bVar3 = true;
      if ((fVar16 <= fVar18) && (bVar3 = false, !NAN(fVar16))) {
        bVar3 = fVar16 < 0.0;
      }
      if (!bVar3) {
        fVar18 = fVar16;
      }
      fVar16 = fVar18;
      if (2 < uVar11) {
        return fVar16;
      }
      uVar15 = (ulong)*(uint *)(lVar5 + 0x18);
      iVar10 = (int)uVar11;
      uVar11 = uVar11 + 1;
      uVar12 = iVar10 + 2U & 3;
      puVar8 = puVar8 + 2;
    } while (uVar11 < uVar15);
  }
LAB_00806b74:
  uVar4 = native_sub_43283c();
                    /* WARNING: Subroutine does not return */
  native_sub_4327dc(uVar4,0);
}



/* NGUIMath$$GetPivotOffset @ 0x806cd0
 * UnityEngine_Vector2_o NGUIMath__GetPivotOffset (int32_t pv, const MethodInfo* method); */

/* NGUIMath$$GetPivotOffset
   UnityEngine_Vector2_o NGUIMath__GetPivotOffset (int32_t pv, const MethodInfo* method); */

undefined4 native_NGUIMath__GetPivotOffset_806cd0(int param_1)

{
  undefined4 uVar1;
  
  native_UnityEngine_Vector2__get_zero_765ef0(0);
  uVar1 = 0;
  if (param_1 - 1U < 8) {
    uVar1 = *(undefined4 *)(&UNK_00e2bc10 + (long)(int)(param_1 - 1U) * 4);
  }
  return uVar1;
}



/* NGUIMath$$GetPivot @ 0x806d28
 * int32_t NGUIMath__GetPivot (UnityEngine_Vector2_o offset, const MethodInfo* method); */

/* NGUIMath$$GetPivot
   int32_t NGUIMath__GetPivot (UnityEngine_Vector2_o offset, const MethodInfo* method); */

undefined4 native_NGUIMath__GetPivot_806d28(float param_1,float param_2)

{
  undefined4 uVar1;
  
  if (param_1 == 0.0) {
    if (param_2 == 0.0) {
      return 6;
    }
    uVar1 = 0;
    if (param_2 != 1.0) {
      uVar1 = 3;
    }
    return uVar1;
  }
  if (param_1 == 1.0) {
    if (param_2 == 0.0) {
      return 8;
    }
    uVar1 = 2;
    if (param_2 != 1.0) {
      uVar1 = 5;
    }
    return uVar1;
  }
  if (param_2 == 0.0) {
    return 7;
  }
  uVar1 = 4;
  if (param_2 == 1.0) {
    uVar1 = 1;
  }
  return uVar1;
}



/* NGUIMath$$MoveWidget @ 0x806da4
 * void NGUIMath__MoveWidget (UIRect_o* w, float x, float y, const MethodInfo* method); */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* NGUIMath$$MoveWidget
   void NGUIMath__MoveWidget (UIRect_o* w, float x, float y, const MethodInfo* method); */

void native_NGUIMath__MoveWidget_806da4(float param_1,float param_2,float param_3,long *param_4)

{
  bool bVar1;
  int iVar2;
  int iVar3;
  long lVar4;
  ulong uVar5;
  undefined8 uVar6;
  int iVar7;
  float fVar8;
  float fVar9;
  
  if ((bRam0000000001340474 & 1) == 0) {
    native_sub_43273c(&NGUIMath_TypeInfo_12d53b8);
    bRam0000000001340474 = 1;
  }
  if (((*(byte *)(_NGUIMath_TypeInfo_12d53b8 + 0x133) >> 2 & 1) != 0) &&
     (*(int *)(_NGUIMath_TypeInfo_12d53b8 + 0xe0) == 0)) {
    native_sub_4327ec();
  }
  fVar9 = param_2;
  if ((bRam0000000001340475 & 1) == 0) {
    native_sub_43273c(&UnityEngine_Object_TypeInfo_12d54e0);
    bRam0000000001340475 = 1;
  }
  iVar2 = native_UnityEngine_Mathf__FloorToInt_8e506c(param_1 + 0.5,0);
  iVar3 = native_UnityEngine_Mathf__FloorToInt_8e506c(param_2 + 0.5,0);
  if (param_4 != (long *)0x0) {
    lVar4 = native_UIRect__get_cachedTransform_c27c58(param_4,0);
    if (lVar4 != 0) {
      fVar8 = (float)native_UnityEngine_Transform__get_localPosition_7717f4(lVar4,0);
      native_UnityEngine_Transform__set_localPosition_7718a4
                (fVar8 + (float)iVar2,fVar9 + (float)iVar3,param_3 + 0.0,lVar4,0);
      if (param_4[3] != 0) {
        uVar6 = *(undefined8 *)(param_4[3] + 0x10);
        if (((*(byte *)(_UnityEngine_Object_TypeInfo_12d54e0 + 0x133) >> 2 & 1) != 0) &&
           (*(int *)(_UnityEngine_Object_TypeInfo_12d54e0 + 0xe0) == 0)) {
          native_sub_4327ec();
        }
        uVar5 = native_UnityEngine_Object__op_Implicit_8e1b98(uVar6,0);
        if ((uVar5 & 1) == 0) {
          iVar7 = 0;
        }
        else {
          lVar4 = param_4[3];
          if (lVar4 == 0) goto LAB_00807050;
          iVar7 = 1;
          *(int *)(lVar4 + 0x1c) = *(int *)(lVar4 + 0x1c) + iVar2;
        }
        if (param_4[4] != 0) {
          uVar6 = *(undefined8 *)(param_4[4] + 0x10);
          if (((*(byte *)(_UnityEngine_Object_TypeInfo_12d54e0 + 0x133) >> 2 & 1) != 0) &&
             (*(int *)(_UnityEngine_Object_TypeInfo_12d54e0 + 0xe0) == 0)) {
            native_sub_4327ec();
          }
          uVar5 = native_UnityEngine_Object__op_Implicit_8e1b98(uVar6,0);
          if ((uVar5 & 1) != 0) {
            lVar4 = param_4[4];
            if (lVar4 == 0) goto LAB_00807050;
            iVar7 = iVar7 + 1;
            *(int *)(lVar4 + 0x1c) = *(int *)(lVar4 + 0x1c) + iVar2;
          }
          if (param_4[5] != 0) {
            uVar6 = *(undefined8 *)(param_4[5] + 0x10);
            if (((*(byte *)(_UnityEngine_Object_TypeInfo_12d54e0 + 0x133) >> 2 & 1) != 0) &&
               (*(int *)(_UnityEngine_Object_TypeInfo_12d54e0 + 0xe0) == 0)) {
              native_sub_4327ec();
            }
            uVar5 = native_UnityEngine_Object__op_Implicit_8e1b98(uVar6,0);
            if ((uVar5 & 1) != 0) {
              lVar4 = param_4[5];
              if (lVar4 == 0) goto LAB_00807050;
              iVar7 = iVar7 + 1;
              *(int *)(lVar4 + 0x1c) = *(int *)(lVar4 + 0x1c) + iVar3;
            }
            if (param_4[6] != 0) {
              uVar6 = *(undefined8 *)(param_4[6] + 0x10);
              if (((*(byte *)(_UnityEngine_Object_TypeInfo_12d54e0 + 0x133) >> 2 & 1) != 0) &&
                 (*(int *)(_UnityEngine_Object_TypeInfo_12d54e0 + 0xe0) == 0)) {
                native_sub_4327ec();
              }
              uVar5 = native_UnityEngine_Object__op_Implicit_8e1b98(uVar6,0);
              if ((uVar5 & 1) == 0) {
                if (iVar7 == 0) {
                  return;
                }
              }
              else {
                lVar4 = param_4[6];
                if (lVar4 == 0) goto LAB_00807050;
                *(int *)(lVar4 + 0x1c) = *(int *)(lVar4 + 0x1c) + iVar3;
              }
              uVar5 = native_UIRect__get_isAnchored_c2d8cc(param_4,0);
              if ((uVar5 & 1) == 0) {
                return;
              }
              *(undefined4 *)((long)param_4 + 0x5c) = 0xffffffff;
              *(undefined1 *)((long)param_4 + 0x5a) = 1;
              iVar2 = native_UnityEngine_Time__get_frameCount_770964(0);
              if ((bRam0000000001342713 & 1) == 0) {
                native_sub_43273c(&UnityEngine_Object_TypeInfo_12d54e0);
                bRam0000000001342713 = 1;
              }
              *(int *)((long)param_4 + 0x5c) = iVar2;
              *(undefined1 *)((long)param_4 + 0x5a) = 0;
              if (param_4[3] != 0) {
                uVar6 = *(undefined8 *)(param_4[3] + 0x10);
                if (((*(byte *)(_UnityEngine_Object_TypeInfo_12d54e0 + 0x133) >> 2 & 1) != 0) &&
                   (*(int *)(_UnityEngine_Object_TypeInfo_12d54e0 + 0xe0) == 0)) {
                  native_sub_4327ec();
                }
                uVar5 = native_UnityEngine_Object__op_Implicit_8e1b98(uVar6,0);
                if ((uVar5 & 1) == 0) {
                  bVar1 = false;
                }
                else {
                  if (param_4[3] == 0) goto LAB_00c2ea0c;
                  uVar6 = *(undefined8 *)(param_4[3] + 0x20);
                  if (((*(byte *)(_UnityEngine_Object_TypeInfo_12d54e0 + 0x133) >> 2 & 1) != 0) &&
                     (*(int *)(_UnityEngine_Object_TypeInfo_12d54e0 + 0xe0) == 0)) {
                    native_sub_4327ec();
                  }
                  uVar5 = native_UnityEngine_Object__op_Inequality_8d76fc(uVar6,0,0);
                  if ((uVar5 & 1) != 0) {
                    if ((param_4[3] == 0) || (lVar4 = *(long *)(param_4[3] + 0x20), lVar4 == 0))
                    goto LAB_00c2ea0c;
                    if (*(int *)(lVar4 + 0x5c) != iVar2) {
                      native_UIRect__Update_c2e62c();
                    }
                  }
                  bVar1 = true;
                }
                if (param_4[5] != 0) {
                  uVar6 = *(undefined8 *)(param_4[5] + 0x10);
                  if (((*(byte *)(_UnityEngine_Object_TypeInfo_12d54e0 + 0x133) >> 2 & 1) != 0) &&
                     (*(int *)(_UnityEngine_Object_TypeInfo_12d54e0 + 0xe0) == 0)) {
                    native_sub_4327ec();
                  }
                  uVar5 = native_UnityEngine_Object__op_Implicit_8e1b98(uVar6,0);
                  if ((uVar5 & 1) != 0) {
                    if (param_4[5] == 0) goto LAB_00c2ea0c;
                    uVar6 = *(undefined8 *)(param_4[5] + 0x20);
                    if (((*(byte *)(_UnityEngine_Object_TypeInfo_12d54e0 + 0x133) >> 2 & 1) != 0) &&
                       (*(int *)(_UnityEngine_Object_TypeInfo_12d54e0 + 0xe0) == 0)) {
                      native_sub_4327ec();
                    }
                    uVar5 = native_UnityEngine_Object__op_Inequality_8d76fc(uVar6,0,0);
                    if ((uVar5 & 1) != 0) {
                      if ((param_4[5] == 0) || (lVar4 = *(long *)(param_4[5] + 0x20), lVar4 == 0))
                      goto LAB_00c2ea0c;
                      if (*(int *)(lVar4 + 0x5c) != iVar2) {
                        native_UIRect__Update_c2e62c();
                      }
                    }
                    bVar1 = true;
                  }
                  if (param_4[4] != 0) {
                    uVar6 = *(undefined8 *)(param_4[4] + 0x10);
                    if (((*(byte *)(_UnityEngine_Object_TypeInfo_12d54e0 + 0x133) >> 2 & 1) != 0) &&
                       (*(int *)(_UnityEngine_Object_TypeInfo_12d54e0 + 0xe0) == 0)) {
                      native_sub_4327ec();
                    }
                    uVar5 = native_UnityEngine_Object__op_Implicit_8e1b98(uVar6,0);
                    if ((uVar5 & 1) != 0) {
                      if (param_4[4] == 0) goto LAB_00c2ea0c;
                      uVar6 = *(undefined8 *)(param_4[4] + 0x20);
                      if (((*(byte *)(_UnityEngine_Object_TypeInfo_12d54e0 + 0x133) >> 2 & 1) != 0)
                         && (*(int *)(_UnityEngine_Object_TypeInfo_12d54e0 + 0xe0) == 0)) {
                        native_sub_4327ec();
                      }
                      uVar5 = native_UnityEngine_Object__op_Inequality_8d76fc(uVar6,0,0);
                      if ((uVar5 & 1) != 0) {
                        if ((param_4[4] == 0) || (lVar4 = *(long *)(param_4[4] + 0x20), lVar4 == 0))
                        goto LAB_00c2ea0c;
                        if (*(int *)(lVar4 + 0x5c) != iVar2) {
                          native_UIRect__Update_c2e62c();
                        }
                      }
                      bVar1 = true;
                    }
                    if (param_4[6] != 0) {
                      uVar6 = *(undefined8 *)(param_4[6] + 0x10);
                      if (((*(byte *)(_UnityEngine_Object_TypeInfo_12d54e0 + 0x133) >> 2 & 1) != 0)
                         && (*(int *)(_UnityEngine_Object_TypeInfo_12d54e0 + 0xe0) == 0)) {
                        native_sub_4327ec();
                      }
                      uVar5 = native_UnityEngine_Object__op_Implicit_8e1b98(uVar6,0);
                      if ((uVar5 & 1) == 0) {
                        if (!bVar1) {
                          return;
                        }
                      }
                      else {
                        if (param_4[6] == 0) goto LAB_00c2ea0c;
                        uVar6 = *(undefined8 *)(param_4[6] + 0x20);
                        if (((*(byte *)(_UnityEngine_Object_TypeInfo_12d54e0 + 0x133) >> 2 & 1) != 0
                            ) && (*(int *)(_UnityEngine_Object_TypeInfo_12d54e0 + 0xe0) == 0)) {
                          native_sub_4327ec();
                        }
                        uVar5 = native_UnityEngine_Object__op_Inequality_8d76fc(uVar6,0,0);
                        if ((uVar5 & 1) != 0) {
                          if ((param_4[6] == 0) ||
                             (lVar4 = *(long *)(param_4[6] + 0x20), lVar4 == 0)) goto LAB_00c2ea0c;
                          if (*(int *)(lVar4 + 0x5c) != iVar2) {
                            native_UIRect__Update_c2e62c();
                          }
                        }
                      }
                    /* WARNING: Could not recover jumptable at 0x00c2e9f4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
                      (**(code **)(*param_4 + 600))(param_4,*(undefined8 *)(*param_4 + 0x260));
                      return;
                    }
                  }
                }
              }
LAB_00c2ea0c:
                    /* WARNING: Subroutine does not return */
              native_sub_432810();
            }
          }
        }
      }
    }
  }
LAB_00807050:
                    /* WARNING: Subroutine does not return */
  native_sub_432810();
}



/* NGUIMath$$MoveRect @ 0x806e1c
 * void NGUIMath__MoveRect (UIRect_o* rect, float x, float y, const MethodInfo* method); */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* NGUIMath$$MoveRect
   void NGUIMath__MoveRect (UIRect_o* rect, float x, float y, const MethodInfo* method); */

void native_NGUIMath__MoveRect_806e1c(float param_1,float param_2,float param_3,long *param_4)

{
  bool bVar1;
  int iVar2;
  int iVar3;
  long lVar4;
  ulong uVar5;
  undefined8 uVar6;
  int iVar7;
  float fVar8;
  float fVar9;
  
  fVar9 = param_2;
  if ((bRam0000000001340475 & 1) == 0) {
    native_sub_43273c(&UnityEngine_Object_TypeInfo_12d54e0);
    bRam0000000001340475 = 1;
  }
  iVar2 = native_UnityEngine_Mathf__FloorToInt_8e506c(param_1 + 0.5,0);
  iVar3 = native_UnityEngine_Mathf__FloorToInt_8e506c(param_2 + 0.5,0);
  if (param_4 != (long *)0x0) {
    lVar4 = native_UIRect__get_cachedTransform_c27c58(param_4,0);
    if (lVar4 != 0) {
      fVar8 = (float)native_UnityEngine_Transform__get_localPosition_7717f4(lVar4,0);
      native_UnityEngine_Transform__set_localPosition_7718a4
                (fVar8 + (float)iVar2,fVar9 + (float)iVar3,param_3 + 0.0,lVar4,0);
      if (param_4[3] != 0) {
        uVar6 = *(undefined8 *)(param_4[3] + 0x10);
        if (((*(byte *)(_UnityEngine_Object_TypeInfo_12d54e0 + 0x133) >> 2 & 1) != 0) &&
           (*(int *)(_UnityEngine_Object_TypeInfo_12d54e0 + 0xe0) == 0)) {
          native_sub_4327ec();
        }
        uVar5 = native_UnityEngine_Object__op_Implicit_8e1b98(uVar6,0);
        if ((uVar5 & 1) == 0) {
          iVar7 = 0;
        }
        else {
          lVar4 = param_4[3];
          if (lVar4 == 0) goto LAB_00807050;
          iVar7 = 1;
          *(int *)(lVar4 + 0x1c) = *(int *)(lVar4 + 0x1c) + iVar2;
        }
        if (param_4[4] != 0) {
          uVar6 = *(undefined8 *)(param_4[4] + 0x10);
          if (((*(byte *)(_UnityEngine_Object_TypeInfo_12d54e0 + 0x133) >> 2 & 1) != 0) &&
             (*(int *)(_UnityEngine_Object_TypeInfo_12d54e0 + 0xe0) == 0)) {
            native_sub_4327ec();
          }
          uVar5 = native_UnityEngine_Object__op_Implicit_8e1b98(uVar6,0);
          if ((uVar5 & 1) != 0) {
            lVar4 = param_4[4];
            if (lVar4 == 0) goto LAB_00807050;
            iVar7 = iVar7 + 1;
            *(int *)(lVar4 + 0x1c) = *(int *)(lVar4 + 0x1c) + iVar2;
          }
          if (param_4[5] != 0) {
            uVar6 = *(undefined8 *)(param_4[5] + 0x10);
            if (((*(byte *)(_UnityEngine_Object_TypeInfo_12d54e0 + 0x133) >> 2 & 1) != 0) &&
               (*(int *)(_UnityEngine_Object_TypeInfo_12d54e0 + 0xe0) == 0)) {
              native_sub_4327ec();
            }
            uVar5 = native_UnityEngine_Object__op_Implicit_8e1b98(uVar6,0);
            if ((uVar5 & 1) != 0) {
              lVar4 = param_4[5];
              if (lVar4 == 0) goto LAB_00807050;
              iVar7 = iVar7 + 1;
              *(int *)(lVar4 + 0x1c) = *(int *)(lVar4 + 0x1c) + iVar3;
            }
            if (param_4[6] != 0) {
              uVar6 = *(undefined8 *)(param_4[6] + 0x10);
              if (((*(byte *)(_UnityEngine_Object_TypeInfo_12d54e0 + 0x133) >> 2 & 1) != 0) &&
                 (*(int *)(_UnityEngine_Object_TypeInfo_12d54e0 + 0xe0) == 0)) {
                native_sub_4327ec();
              }
              uVar5 = native_UnityEngine_Object__op_Implicit_8e1b98(uVar6,0);
              if ((uVar5 & 1) == 0) {
                if (iVar7 == 0) {
                  return;
                }
              }
              else {
                lVar4 = param_4[6];
                if (lVar4 == 0) goto LAB_00807050;
                *(int *)(lVar4 + 0x1c) = *(int *)(lVar4 + 0x1c) + iVar3;
              }
              uVar5 = native_UIRect__get_isAnchored_c2d8cc(param_4,0);
              if ((uVar5 & 1) == 0) {
                return;
              }
              *(undefined4 *)((long)param_4 + 0x5c) = 0xffffffff;
              *(undefined1 *)((long)param_4 + 0x5a) = 1;
              iVar2 = native_UnityEngine_Time__get_frameCount_770964(0);
              if ((bRam0000000001342713 & 1) == 0) {
                native_sub_43273c(&UnityEngine_Object_TypeInfo_12d54e0);
                bRam0000000001342713 = 1;
              }
              *(int *)((long)param_4 + 0x5c) = iVar2;
              *(undefined1 *)((long)param_4 + 0x5a) = 0;
              if (param_4[3] != 0) {
                uVar6 = *(undefined8 *)(param_4[3] + 0x10);
                if (((*(byte *)(_UnityEngine_Object_TypeInfo_12d54e0 + 0x133) >> 2 & 1) != 0) &&
                   (*(int *)(_UnityEngine_Object_TypeInfo_12d54e0 + 0xe0) == 0)) {
                  native_sub_4327ec();
                }
                uVar5 = native_UnityEngine_Object__op_Implicit_8e1b98(uVar6,0);
                if ((uVar5 & 1) == 0) {
                  bVar1 = false;
                }
                else {
                  if (param_4[3] == 0) goto LAB_00c2ea0c;
                  uVar6 = *(undefined8 *)(param_4[3] + 0x20);
                  if (((*(byte *)(_UnityEngine_Object_TypeInfo_12d54e0 + 0x133) >> 2 & 1) != 0) &&
                     (*(int *)(_UnityEngine_Object_TypeInfo_12d54e0 + 0xe0) == 0)) {
                    native_sub_4327ec();
                  }
                  uVar5 = native_UnityEngine_Object__op_Inequality_8d76fc(uVar6,0,0);
                  if ((uVar5 & 1) != 0) {
                    if ((param_4[3] == 0) || (lVar4 = *(long *)(param_4[3] + 0x20), lVar4 == 0))
                    goto LAB_00c2ea0c;
                    if (*(int *)(lVar4 + 0x5c) != iVar2) {
                      native_UIRect__Update_c2e62c();
                    }
                  }
                  bVar1 = true;
                }
                if (param_4[5] != 0) {
                  uVar6 = *(undefined8 *)(param_4[5] + 0x10);
                  if (((*(byte *)(_UnityEngine_Object_TypeInfo_12d54e0 + 0x133) >> 2 & 1) != 0) &&
                     (*(int *)(_UnityEngine_Object_TypeInfo_12d54e0 + 0xe0) == 0)) {
                    native_sub_4327ec();
                  }
                  uVar5 = native_UnityEngine_Object__op_Implicit_8e1b98(uVar6,0);
                  if ((uVar5 & 1) != 0) {
                    if (param_4[5] == 0) goto LAB_00c2ea0c;
                    uVar6 = *(undefined8 *)(param_4[5] + 0x20);
                    if (((*(byte *)(_UnityEngine_Object_TypeInfo_12d54e0 + 0x133) >> 2 & 1) != 0) &&
                       (*(int *)(_UnityEngine_Object_TypeInfo_12d54e0 + 0xe0) == 0)) {
                      native_sub_4327ec();
                    }
                    uVar5 = native_UnityEngine_Object__op_Inequality_8d76fc(uVar6,0,0);
                    if ((uVar5 & 1) != 0) {
                      if ((param_4[5] == 0) || (lVar4 = *(long *)(param_4[5] + 0x20), lVar4 == 0))
                      goto LAB_00c2ea0c;
                      if (*(int *)(lVar4 + 0x5c) != iVar2) {
                        native_UIRect__Update_c2e62c();
                      }
                    }
                    bVar1 = true;
                  }
                  if (param_4[4] != 0) {
                    uVar6 = *(undefined8 *)(param_4[4] + 0x10);
                    if (((*(byte *)(_UnityEngine_Object_TypeInfo_12d54e0 + 0x133) >> 2 & 1) != 0) &&
                       (*(int *)(_UnityEngine_Object_TypeInfo_12d54e0 + 0xe0) == 0)) {
                      native_sub_4327ec();
                    }
                    uVar5 = native_UnityEngine_Object__op_Implicit_8e1b98(uVar6,0);
                    if ((uVar5 & 1) != 0) {
                      if (param_4[4] == 0) goto LAB_00c2ea0c;
                      uVar6 = *(undefined8 *)(param_4[4] + 0x20);
                      if (((*(byte *)(_UnityEngine_Object_TypeInfo_12d54e0 + 0x133) >> 2 & 1) != 0)
                         && (*(int *)(_UnityEngine_Object_TypeInfo_12d54e0 + 0xe0) == 0)) {
                        native_sub_4327ec();
                      }
                      uVar5 = native_UnityEngine_Object__op_Inequality_8d76fc(uVar6,0,0);
                      if ((uVar5 & 1) != 0) {
                        if ((param_4[4] == 0) || (lVar4 = *(long *)(param_4[4] + 0x20), lVar4 == 0))
                        goto LAB_00c2ea0c;
                        if (*(int *)(lVar4 + 0x5c) != iVar2) {
                          native_UIRect__Update_c2e62c();
                        }
                      }
                      bVar1 = true;
                    }
                    if (param_4[6] != 0) {
                      uVar6 = *(undefined8 *)(param_4[6] + 0x10);
                      if (((*(byte *)(_UnityEngine_Object_TypeInfo_12d54e0 + 0x133) >> 2 & 1) != 0)
                         && (*(int *)(_UnityEngine_Object_TypeInfo_12d54e0 + 0xe0) == 0)) {
                        native_sub_4327ec();
                      }
                      uVar5 = native_UnityEngine_Object__op_Implicit_8e1b98(uVar6,0);
                      if ((uVar5 & 1) == 0) {
                        if (!bVar1) {
                          return;
                        }
                      }
                      else {
                        if (param_4[6] == 0) goto LAB_00c2ea0c;
                        uVar6 = *(undefined8 *)(param_4[6] + 0x20);
                        if (((*(byte *)(_UnityEngine_Object_TypeInfo_12d54e0 + 0x133) >> 2 & 1) != 0
                            ) && (*(int *)(_UnityEngine_Object_TypeInfo_12d54e0 + 0xe0) == 0)) {
                          native_sub_4327ec();
                        }
                        uVar5 = native_UnityEngine_Object__op_Inequality_8d76fc(uVar6,0,0);
                        if ((uVar5 & 1) != 0) {
                          if ((param_4[6] == 0) ||
                             (lVar4 = *(long *)(param_4[6] + 0x20), lVar4 == 0)) goto LAB_00c2ea0c;
                          if (*(int *)(lVar4 + 0x5c) != iVar2) {
                            native_UIRect__Update_c2e62c();
                          }
                        }
                      }
                    /* WARNING: Could not recover jumptable at 0x00c2e9f4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
                      (**(code **)(*param_4 + 600))(param_4,*(undefined8 *)(*param_4 + 0x260));
                      return;
                    }
                  }
                }
              }
LAB_00c2ea0c:
                    /* WARNING: Subroutine does not return */
              native_sub_432810();
            }
          }
        }
      }
    }
  }
LAB_00807050:
                    /* WARNING: Subroutine does not return */
  native_sub_432810();
}



/* NGUIMath$$ResizeWidget @ 0x807054
 * void NGUIMath__ResizeWidget (UIWidget_o* w, int32_t pivot, float x, float y, int32_t minWidth, int32_t minHeight, const MethodInfo* method); */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* NGUIMath$$ResizeWidget
   void NGUIMath__ResizeWidget (UIWidget_o* w, int32_t pivot, float x, float y, int32_t minWidth,
   int32_t minHeight, const MethodInfo* method); */

void native_NGUIMath__ResizeWidget_807054(float param_1,ulong param_2,long *param_3,int param_4)

{
  uint uVar1;
  uint uVar2;
  uint uVar3;
  uint uVar4;
  uint uVar5;
  undefined4 uVar6;
  uint uVar7;
  uint uVar8;
  long *plVar9;
  long lVar10;
  long lVar11;
  undefined8 uVar12;
  float fVar13;
  float fVar14;
  undefined4 uVar15;
  float fVar16;
  float fVar17;
  float fVar18;
  float fVar19;
  float fVar20;
  float fVar21;
  float fVar22;
  ulong uVar23;
  ulong uVar24;
  ulong uVar25;
  float fVar26;
  float fVar27;
  ulong uVar28;
  ulong uVar29;
  ulong uVar30;
  ulong uVar31;
  ulong uVar32;
  ulong uVar33;
  float fVar34;
  ulong uVar35;
  ulong uVar36;
  float fVar37;
  float fVar38;
  float fVar39;
  
  if ((bRam0000000001340476 & 1) == 0) {
    native_sub_43273c(&NGUIMath_TypeInfo_12d53b8);
    bRam0000000001340476 = 1;
  }
  if (((*(byte *)(_NGUIMath_TypeInfo_12d53b8 + 0x133) >> 2 & 1) != 0) &&
     (*(int *)(_NGUIMath_TypeInfo_12d53b8 + 0xe0) == 0)) {
    native_sub_4327ec();
  }
  uVar25 = param_2;
  if ((bRam0000000001340477 & 1) == 0) {
    native_sub_43273c(&NGUIMath_TypeInfo_12d53b8);
    bRam0000000001340477 = 1;
  }
  if (param_4 == 4) {
    if (param_3 == (long *)0x0) goto LAB_00807454;
    uVar2 = native_UnityEngine_Mathf__RoundToInt_8e50f0
                      (param_1 - (float)*(int *)((long)param_3 + 0xa4),0);
    uVar3 = native_UnityEngine_Mathf__RoundToInt_8e50f0
                      ((float)param_2 - (float)(int)param_3[0x15],0);
    if ((uVar3 | uVar2) < 2) {
      return;
    }
    if (((*(byte *)(_NGUIMath_TypeInfo_12d53b8 + 0x133) >> 2 & 1) != 0) &&
       (*(int *)(_NGUIMath_TypeInfo_12d53b8 + 0xe0) == 0)) {
      native_sub_4327ec();
    }
    uVar33 = (ulong)(uint)(float)((int)uVar2 >> 1);
    uVar25 = (ulong)(uint)(float)((int)uVar3 >> 1);
    fVar13 = (float)-((int)uVar2 >> 1);
    uVar23 = (ulong)(uint)(float)-((int)uVar3 >> 1);
    if ((bRam0000000001340479 & 1) == 0) {
      native_sub_43273c(&NGUIMath_TypeInfo_12d53b8);
      bRam0000000001340479 = 1;
    }
    if (((*(byte *)(_NGUIMath_TypeInfo_12d53b8 + 0x133) >> 2 & 1) != 0) &&
       (*(int *)(_NGUIMath_TypeInfo_12d53b8 + 0xe0) == 0)) {
      native_sub_4327ec();
    }
    goto native_NGUIMath__AdjustWidget_807510;
  }
  if ((param_3 == (long *)0x0) ||
     (lVar10 = native_UIRect__get_cachedTransform_c27c58(param_3,0), lVar10 == 0)) {
LAB_00807454:
                    /* WARNING: Subroutine does not return */
    native_sub_432810();
  }
  native_UnityEngine_Transform__get_localRotation_771c84(lVar10,0);
  native_UnityEngine_Quaternion__Inverse_762204(0);
  uVar24 = native_UnityEngine_Quaternion__op_Multiply_7629c0(0);
  uVar33 = uVar24;
  switch(param_4) {
  case 0:
    if (((*(byte *)(_NGUIMath_TypeInfo_12d53b8 + 0x133) >> 2 & 1) != 0) &&
       (*(int *)(_NGUIMath_TypeInfo_12d53b8 + 0xe0) == 0)) {
      native_sub_4327ec();
    }
    uVar33 = 0;
    break;
  case 1:
    if (((*(byte *)(_NGUIMath_TypeInfo_12d53b8 + 0x133) >> 2 & 1) != 0) &&
       (*(int *)(_NGUIMath_TypeInfo_12d53b8 + 0xe0) == 0)) {
      native_sub_4327ec();
    }
    uVar33 = 0;
    uVar24 = 0;
    break;
  case 2:
    if (((*(byte *)(_NGUIMath_TypeInfo_12d53b8 + 0x133) >> 2 & 1) != 0) &&
       (*(int *)(_NGUIMath_TypeInfo_12d53b8 + 0xe0) == 0)) {
      native_sub_4327ec();
    }
    uVar24 = 0;
    break;
  case 3:
    if (((*(byte *)(_NGUIMath_TypeInfo_12d53b8 + 0x133) >> 2 & 1) != 0) &&
       (*(int *)(_NGUIMath_TypeInfo_12d53b8 + 0xe0) == 0)) {
      native_sub_4327ec();
    }
    uVar23 = 0;
    uVar33 = 0;
    uVar25 = 0;
    goto code_r0x00807428;
  default:
    return;
  case 5:
    if (((*(byte *)(_NGUIMath_TypeInfo_12d53b8 + 0x133) >> 2 & 1) != 0) &&
       (*(int *)(_NGUIMath_TypeInfo_12d53b8 + 0xe0) == 0)) {
      native_sub_4327ec();
    }
    uVar25 = 0;
    goto code_r0x00807424;
  case 6:
    if (((*(byte *)(_NGUIMath_TypeInfo_12d53b8 + 0x133) >> 2 & 1) != 0) &&
       (*(int *)(_NGUIMath_TypeInfo_12d53b8 + 0xe0) == 0)) {
      native_sub_4327ec();
    }
    goto code_r0x008073ec;
  case 7:
    if (((*(byte *)(_NGUIMath_TypeInfo_12d53b8 + 0x133) >> 2 & 1) != 0) &&
       (*(int *)(_NGUIMath_TypeInfo_12d53b8 + 0xe0) == 0)) {
      native_sub_4327ec();
    }
    uVar24 = 0;
code_r0x008073ec:
    uVar33 = 0;
    uVar23 = uVar25;
    uVar25 = 0;
    goto code_r0x00807428;
  case 8:
    if (((*(byte *)(_NGUIMath_TypeInfo_12d53b8 + 0x133) >> 2 & 1) != 0) &&
       (*(int *)(_NGUIMath_TypeInfo_12d53b8 + 0xe0) == 0)) {
      native_sub_4327ec();
    }
code_r0x00807424:
    uVar24 = 0;
    uVar23 = uVar25;
    uVar25 = 0;
    goto code_r0x00807428;
  }
  uVar23 = 0;
code_r0x00807428:
  fVar13 = (float)uVar24;
native_NGUIMath__AdjustWidget_807510:
  uVar24 = uVar23;
  uVar35 = uVar33;
  uVar36 = uVar25;
  if ((bRam000000000134047a & 1) == 0) {
    native_sub_43273c(&UnityEngine_Object_TypeInfo_12d54e0);
    bRam000000000134047a = 1;
  }
  if (param_3 == (long *)0x0) goto LAB_00807ccc;
  fVar14 = (float)native_UIWidget__get_pivotOffset_944f8c(param_3,0);
  fVar26 = (float)uVar24;
  uVar28 = uVar24;
  lVar10 = native_UIRect__get_cachedTransform_c27c58(param_3,0);
  if (lVar10 == 0) goto LAB_00807ccc;
  uVar15 = native_UnityEngine_Transform__get_localRotation_771c84(lVar10,0);
  uVar2 = native_UnityEngine_Mathf__FloorToInt_8e506c(fVar13 + 0.5,0);
  uVar4 = native_UnityEngine_Mathf__FloorToInt_8e506c((float)uVar23 + 0.5,0);
  uVar3 = native_UnityEngine_Mathf__FloorToInt_8e506c((float)uVar33 + 0.5,0);
  uVar5 = native_UnityEngine_Mathf__FloorToInt_8e506c((float)uVar25 + 0.5,0);
  if ((fVar14 == 0.5) && ((uVar2 == 0 || (uVar3 == 0)))) {
    uVar2 = uVar2 & 0xfffffffe;
    uVar3 = uVar3 & 0xfffffffe;
  }
  if ((fVar26 == 0.5) && ((uVar4 == 0 || (uVar5 == 0)))) {
    uVar4 = uVar4 & 0xfffffffe;
    uVar5 = uVar5 & 0xfffffffe;
  }
  fVar39 = (float)(int)uVar2;
  fVar13 = (float)(int)uVar5;
  uVar25 = uVar28;
  fVar16 = (float)native_UnityEngine_Quaternion__op_Multiply_7629c0
                            (uVar15,uVar28,uVar35,uVar36,fVar39,fVar13,0,0);
  fVar38 = (float)(int)uVar3;
  uVar23 = uVar28;
  fVar17 = (float)native_UnityEngine_Quaternion__op_Multiply_7629c0
                            (uVar15,uVar28,uVar35,uVar36,fVar38,fVar13,0,0);
  fVar37 = (float)(int)uVar4;
  uVar33 = uVar28;
  fVar18 = (float)native_UnityEngine_Quaternion__op_Multiply_7629c0
                            (uVar15,uVar28,uVar35,uVar36,fVar39,fVar37,0,0);
  uVar29 = uVar28;
  fVar19 = (float)native_UnityEngine_Quaternion__op_Multiply_7629c0
                            (uVar15,uVar28,uVar35,uVar36,fVar38,fVar37,0,0);
  uVar30 = uVar28;
  fVar39 = (float)native_UnityEngine_Quaternion__op_Multiply_7629c0
                            (uVar15,uVar28,uVar35,uVar36,fVar39,0,0,0);
  uVar31 = uVar28;
  fVar20 = (float)native_UnityEngine_Quaternion__op_Multiply_7629c0
                            (uVar15,uVar28,uVar35,uVar36,fVar38,0,0,0);
  fVar27 = (float)uVar31;
  uVar31 = uVar28;
  fVar21 = (float)native_UnityEngine_Quaternion__op_Multiply_7629c0
                            (uVar15,uVar28,uVar35,uVar36,0,fVar13,0,0);
  fVar13 = (float)uVar31;
  uVar31 = uVar28;
  uVar32 = uVar35;
  fVar22 = (float)native_UnityEngine_Quaternion__op_Multiply_7629c0
                            (uVar15,uVar28,uVar35,uVar36,0,fVar37,0,0);
  fVar34 = (float)uVar32;
  uVar32 = uVar31;
  fVar38 = (float)native_UnityEngine_Vector3__get_zero_776668(0);
  fVar37 = fVar34;
  if ((fVar14 == 0.0) && (fVar26 == 1.0)) {
    uVar32 = uVar25 & 0xffffffff;
    fVar38 = fVar16;
  }
  else if ((fVar14 == 1.0) && (fVar26 == 0.0)) {
    uVar32 = uVar29 & 0xffffffff;
    fVar38 = fVar19;
  }
  else if ((fVar14 == 0.0) && (fVar26 == 0.0)) {
    uVar32 = uVar33 & 0xffffffff;
    fVar38 = fVar18;
  }
  else if ((fVar14 == 1.0) && (fVar26 == 1.0)) {
    uVar32 = uVar23 & 0xffffffff;
    fVar38 = fVar17;
  }
  else {
    fVar16 = (float)uVar31;
    fVar17 = (float)uVar30;
    if ((fVar14 == 0.0) && (fVar26 == 0.5)) {
      fVar38 = fVar39 + (fVar21 + fVar22) * 0.5;
      uVar32 = (ulong)(uint)(fVar17 + (fVar13 + fVar16) * 0.5);
      fVar37 = fVar39;
    }
    else if ((fVar14 == 1.0) && (fVar26 == 0.5)) {
      fVar38 = fVar20 + (fVar21 + fVar22) * 0.5;
      fVar16 = fVar13 + fVar16;
      fVar13 = fVar27;
LAB_008078c0:
      uVar32 = (ulong)(uint)(fVar13 + fVar16 * 0.5);
      fVar37 = fVar13;
    }
    else if (fVar14 == 0.5) {
      if (fVar26 == 1.0) {
        fVar38 = fVar21 + (fVar39 + fVar20) * 0.5;
        fVar16 = fVar17 + fVar27;
        goto LAB_008078c0;
      }
      if (fVar26 == 0.0) {
        fVar38 = fVar22 + (fVar39 + fVar20) * 0.5;
        uVar32 = (ulong)(uint)(fVar16 + (fVar17 + fVar27) * 0.5);
      }
      else if (fVar26 == 0.5) {
        fVar38 = (fVar39 + fVar20 + fVar21 + fVar22) * 0.5;
        uVar32 = (ulong)(uint)((fVar27 + fVar17 + fVar13 + fVar16) * 0.5);
        fVar37 = fVar27;
      }
    }
  }
  fVar13 = (float)uVar32;
  uVar6 = (**(code **)(*param_3 + 0x3b8))(param_3,*(undefined8 *)(*param_3 + 0x3c0));
  uVar7 = native_UnityEngine_Mathf__Max_8e4cd0(2,uVar6,0);
  uVar6 = (**(code **)(*param_3 + 0x3c8))(param_3,*(undefined8 *)(*param_3 + 0x3d0));
  uVar8 = native_UnityEngine_Mathf__Max_8e4cd0(2,uVar6,0);
  uVar3 = (uVar3 - uVar2) + *(int *)((long)param_3 + 0xa4);
  uVar5 = (uVar5 - uVar4) + (int)param_3[0x15];
  uVar25 = native_UnityEngine_Vector3__get_zero_776668(0);
  uVar1 = 100000;
  if ((int)uVar3 < 0x186a1) {
    uVar1 = uVar3;
  }
  if ((int)uVar7 <= (int)uVar3) {
    uVar7 = uVar1;
  }
  uVar23 = uVar32;
  fVar16 = fVar37;
  if (uVar7 - uVar3 != 0) {
    uVar23 = (ulong)(uint)(float)(int)(uVar7 - uVar3);
    uVar3 = uVar7;
    fVar16 = fVar14;
    if (uVar2 == 0) {
      fVar17 = (float)native_UnityEngine_Mathf__Lerp_8e5224(0,uVar23,fVar14,0);
      uVar25 = (ulong)(uint)((float)uVar25 + fVar17);
    }
    else {
      uVar33 = 0;
      fVar17 = (float)native_UnityEngine_Mathf__Lerp_8e5224(uVar23,0,fVar14,0);
      uVar25 = (ulong)(uint)((float)uVar25 - fVar17);
      uVar23 = uVar33;
    }
  }
  fVar17 = (float)uVar23;
  uVar2 = 100000;
  if ((int)uVar5 < 0x186a1) {
    uVar2 = uVar5;
  }
  if ((int)uVar8 <= (int)uVar5) {
    uVar8 = uVar2;
  }
  if (uVar8 - uVar5 != 0) {
    fVar18 = (float)(int)(uVar8 - uVar5);
    uVar5 = uVar8;
    fVar16 = fVar26;
    if (uVar4 == 0) {
      fVar17 = fVar18;
      fVar18 = (float)native_UnityEngine_Mathf__Lerp_8e5224(0,fVar18,uVar24 & 0xffffffff,0);
      uVar32 = (ulong)(uint)((float)uVar32 + fVar18);
    }
    else {
      fVar17 = 0.0;
      fVar18 = (float)native_UnityEngine_Mathf__Lerp_8e5224(fVar18,0,uVar24 & 0xffffffff,0);
      uVar32 = (ulong)(uint)((float)uVar32 - fVar18);
    }
  }
  uVar2 = uVar3 & 0xfffffffe;
  if (fVar14 != 0.5) {
    uVar2 = uVar3;
  }
  uVar3 = uVar5 & 0xfffffffe;
  if (fVar26 != 0.5) {
    uVar3 = uVar5;
  }
  fVar18 = (float)native_UnityEngine_Transform__get_localPosition_7717f4(lVar10,0);
  fVar37 = (float)native_UnityEngine_Quaternion__op_Multiply_7629c0
                            (uVar15,uVar28,uVar35,uVar36,uVar25,uVar32,fVar37,0);
  fVar37 = fVar38 + fVar18 + fVar37;
  fVar13 = fVar13 + fVar17 + (float)uVar28;
  uVar23 = (ulong)(uint)fVar13;
  uVar33 = (ulong)(uint)(fVar34 + fVar16 + (float)uVar35);
  native_UnityEngine_Transform__set_localPosition_7718a4(fVar37,uVar23,uVar33,lVar10,0);
  native_UIWidget__SetDimensions_94987c(param_3,uVar2,uVar3,0);
  uVar25 = native_UIRect__get_isAnchored_c2d8cc(param_3,0);
  if ((uVar25 & 1) == 0) {
    return;
  }
  lVar10 = native_UnityEngine_Transform__get_parent_765eb0(lVar10,0);
  if (param_3[3] != 0) {
    uVar12 = *(undefined8 *)(param_3[3] + 0x10);
    if (((*(byte *)(_UnityEngine_Object_TypeInfo_12d54e0 + 0x133) >> 2 & 1) != 0) &&
       (*(int *)(_UnityEngine_Object_TypeInfo_12d54e0 + 0xe0) == 0)) {
      native_sub_4327ec();
    }
    fVar37 = fVar37 - fVar14 * (float)(int)uVar2;
    uVar25 = native_UnityEngine_Object__op_Implicit_8e1b98(uVar12,0);
    if ((uVar25 & 1) != 0) {
      if (param_3[3] == 0) goto LAB_00807ccc;
      native_UIRect_AnchorPoint__SetHorizontal_559078(fVar37,param_3[3],lVar10,0);
    }
    if (param_3[4] != 0) {
      uVar12 = *(undefined8 *)(param_3[4] + 0x10);
      if (((*(byte *)(_UnityEngine_Object_TypeInfo_12d54e0 + 0x133) >> 2 & 1) != 0) &&
         (*(int *)(_UnityEngine_Object_TypeInfo_12d54e0 + 0xe0) == 0)) {
        native_sub_4327ec();
      }
      uVar25 = native_UnityEngine_Object__op_Implicit_8e1b98(uVar12,0);
      if ((uVar25 & 1) != 0) {
        if (param_3[4] == 0) goto LAB_00807ccc;
        native_UIRect_AnchorPoint__SetHorizontal_559078
                  (fVar37 + (float)(int)uVar2,param_3[4],lVar10,0);
      }
      if (param_3[5] != 0) {
        uVar12 = *(undefined8 *)(param_3[5] + 0x10);
        if (((*(byte *)(_UnityEngine_Object_TypeInfo_12d54e0 + 0x133) >> 2 & 1) != 0) &&
           (*(int *)(_UnityEngine_Object_TypeInfo_12d54e0 + 0xe0) == 0)) {
          native_sub_4327ec();
        }
        fVar13 = fVar13 - fVar26 * (float)(int)uVar3;
        uVar25 = native_UnityEngine_Object__op_Implicit_8e1b98(uVar12,0);
        if ((uVar25 & 1) != 0) {
          if (param_3[5] == 0) goto LAB_00807ccc;
          native_UIRect_AnchorPoint__SetVertical_5591e0(fVar13,param_3[5],lVar10,0);
        }
        if (param_3[6] != 0) {
          uVar12 = *(undefined8 *)(param_3[6] + 0x10);
          if (((*(byte *)(_UnityEngine_Object_TypeInfo_12d54e0 + 0x133) >> 2 & 1) != 0) &&
             (*(int *)(_UnityEngine_Object_TypeInfo_12d54e0 + 0xe0) == 0)) {
            native_sub_4327ec();
          }
          uVar25 = native_UnityEngine_Object__op_Implicit_8e1b98(uVar12,0);
          if ((uVar25 & 1) == 0) {
            return;
          }
          lVar11 = param_3[6];
          if (lVar11 != 0) {
            if ((bRam000000000133ea04 & 1) == 0) {
              native_sub_43273c(&UnityEngine_Object_TypeInfo_12d54e0,lVar10,0);
              bRam000000000133ea04 = 1;
            }
            uVar12 = *(undefined8 *)(lVar11 + 0x20);
            if (((*(byte *)(_UnityEngine_Object_TypeInfo_12d54e0 + 0x133) >> 2 & 1) != 0) &&
               (*(int *)(_UnityEngine_Object_TypeInfo_12d54e0 + 0xe0) == 0)) {
              native_sub_4327ec();
            }
            uVar25 = native_UnityEngine_Object__op_Implicit_8e1b98(uVar12,0);
            if ((uVar25 & 1) == 0) {
              if (*(long *)(lVar11 + 0x10) != 0) {
                uVar12 = native_UnityEngine_Transform__get_position_77169c
                                   (*(long *)(lVar11 + 0x10),0);
                if (((*(byte *)(_UnityEngine_Object_TypeInfo_12d54e0 + 0x133) >> 2 & 1) != 0) &&
                   (*(int *)(_UnityEngine_Object_TypeInfo_12d54e0 + 0xe0) == 0)) {
                  native_sub_4327ec();
                }
                uVar25 = native_UnityEngine_Object__op_Inequality_8d76fc(lVar10,0,0);
                if ((uVar25 & 1) != 0) {
                  if (lVar10 == 0) goto LAB_00559338;
                  native_UnityEngine_Transform__InverseTransformPoint_7729a0
                            (uVar12,uVar23,uVar33,lVar10,0);
                }
LAB_00559308:
                uVar15 = native_UnityEngine_Mathf__FloorToInt_8e506c
                                   (((fVar13 + (float)(int)uVar3) - (float)uVar23) + 0.5,0);
                *(undefined4 *)(lVar11 + 0x1c) = uVar15;
                return;
              }
            }
            else {
              plVar9 = *(long **)(lVar11 + 0x20);
              if ((plVar9 != (long *)0x0) &&
                 (lVar10 = (**(code **)(*plVar9 + 0x208))
                                     (plVar9,lVar10,*(undefined8 *)(*plVar9 + 0x210)), lVar10 != 0))
              {
                if (*(uint *)(lVar10 + 0x18) < 4) {
                  uVar12 = native_sub_43283c();
                    /* WARNING: Subroutine does not return */
                  native_sub_4327dc(uVar12,0);
                }
                uVar23 = native_UnityEngine_Mathf__Lerp_8e5224
                                   (*(undefined4 *)(lVar10 + 0x48),*(undefined4 *)(lVar10 + 0x30),
                                    *(undefined4 *)(lVar11 + 0x18),0);
                goto LAB_00559308;
              }
            }
LAB_00559338:
                    /* WARNING: Subroutine does not return */
            native_sub_432810();
          }
        }
      }
    }
  }
LAB_00807ccc:
                    /* WARNING: Subroutine does not return */
  native_sub_432810();
}



/* NGUIMath$$ResizeWidget @ 0x8070f4
 * void NGUIMath__ResizeWidget (UIWidget_o* w, int32_t pivot, float x, float y, int32_t minWidth, int32_t minHeight, int32_t maxWidth, int32_t maxHeight, const MethodInfo* method); */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* NGUIMath$$ResizeWidget
   void NGUIMath__ResizeWidget (UIWidget_o* w, int32_t pivot, float x, float y, int32_t minWidth,
   int32_t minHeight, int32_t maxWidth, int32_t maxHeight, const MethodInfo* method); */

void native_NGUIMath__ResizeWidget_8070f4
               (float param_1,ulong param_2,long *param_3,int param_4,undefined4 param_5,
               undefined4 param_6,uint param_7,uint param_8)

{
  uint uVar1;
  uint uVar2;
  uint uVar3;
  uint uVar4;
  undefined4 uVar5;
  uint uVar6;
  uint uVar7;
  long *plVar8;
  long lVar9;
  long lVar10;
  undefined8 uVar11;
  float fVar12;
  float fVar13;
  undefined4 uVar14;
  float fVar15;
  float fVar16;
  float fVar17;
  float fVar18;
  float fVar19;
  float fVar20;
  float fVar21;
  ulong uVar22;
  ulong uVar23;
  ulong uVar24;
  float fVar25;
  float fVar26;
  ulong uVar27;
  ulong uVar28;
  ulong uVar29;
  ulong uVar30;
  ulong uVar31;
  ulong uVar32;
  float fVar33;
  ulong uVar34;
  ulong uVar35;
  float fVar36;
  float fVar37;
  float fVar38;
  
  uVar24 = param_2;
  if ((bRam0000000001340477 & 1) == 0) {
    native_sub_43273c(&NGUIMath_TypeInfo_12d53b8);
    bRam0000000001340477 = 1;
  }
  if (param_4 == 4) {
    if (param_3 == (long *)0x0) goto LAB_00807454;
    uVar1 = native_UnityEngine_Mathf__RoundToInt_8e50f0
                      (param_1 - (float)*(int *)((long)param_3 + 0xa4),0);
    uVar2 = native_UnityEngine_Mathf__RoundToInt_8e50f0
                      ((float)param_2 - (float)(int)param_3[0x15],0);
    if ((uVar2 | uVar1) < 2) {
      return;
    }
    if (((*(byte *)(_NGUIMath_TypeInfo_12d53b8 + 0x133) >> 2 & 1) != 0) &&
       (*(int *)(_NGUIMath_TypeInfo_12d53b8 + 0xe0) == 0)) {
      native_sub_4327ec();
    }
    uVar32 = (ulong)(uint)(float)((int)uVar1 >> 1);
    uVar24 = (ulong)(uint)(float)((int)uVar2 >> 1);
    fVar12 = (float)-((int)uVar1 >> 1);
    uVar22 = (ulong)(uint)(float)-((int)uVar2 >> 1);
    if ((bRam0000000001340479 & 1) == 0) {
      native_sub_43273c(&NGUIMath_TypeInfo_12d53b8);
      bRam0000000001340479 = 1;
    }
    if (((*(byte *)(_NGUIMath_TypeInfo_12d53b8 + 0x133) >> 2 & 1) != 0) &&
       (*(int *)(_NGUIMath_TypeInfo_12d53b8 + 0xe0) == 0)) {
      native_sub_4327ec();
    }
    param_7 = 100000;
    param_8 = 100000;
    goto native_NGUIMath__AdjustWidget_807510;
  }
  if ((param_3 == (long *)0x0) ||
     (lVar9 = native_UIRect__get_cachedTransform_c27c58(param_3,0), lVar9 == 0)) {
LAB_00807454:
                    /* WARNING: Subroutine does not return */
    native_sub_432810();
  }
  native_UnityEngine_Transform__get_localRotation_771c84(lVar9,0);
  native_UnityEngine_Quaternion__Inverse_762204(0);
  uVar23 = native_UnityEngine_Quaternion__op_Multiply_7629c0(0);
  uVar32 = uVar23;
  switch(param_4) {
  case 0:
    if (((*(byte *)(_NGUIMath_TypeInfo_12d53b8 + 0x133) >> 2 & 1) != 0) &&
       (*(int *)(_NGUIMath_TypeInfo_12d53b8 + 0xe0) == 0)) {
      native_sub_4327ec();
    }
    uVar32 = 0;
    break;
  case 1:
    if (((*(byte *)(_NGUIMath_TypeInfo_12d53b8 + 0x133) >> 2 & 1) != 0) &&
       (*(int *)(_NGUIMath_TypeInfo_12d53b8 + 0xe0) == 0)) {
      native_sub_4327ec();
    }
    uVar32 = 0;
    uVar23 = 0;
    break;
  case 2:
    if (((*(byte *)(_NGUIMath_TypeInfo_12d53b8 + 0x133) >> 2 & 1) != 0) &&
       (*(int *)(_NGUIMath_TypeInfo_12d53b8 + 0xe0) == 0)) {
      native_sub_4327ec();
    }
    uVar23 = 0;
    break;
  case 3:
    if (((*(byte *)(_NGUIMath_TypeInfo_12d53b8 + 0x133) >> 2 & 1) != 0) &&
       (*(int *)(_NGUIMath_TypeInfo_12d53b8 + 0xe0) == 0)) {
      native_sub_4327ec();
    }
    uVar22 = 0;
    uVar32 = 0;
    uVar24 = 0;
    goto code_r0x00807428;
  default:
    return;
  case 5:
    if (((*(byte *)(_NGUIMath_TypeInfo_12d53b8 + 0x133) >> 2 & 1) != 0) &&
       (*(int *)(_NGUIMath_TypeInfo_12d53b8 + 0xe0) == 0)) {
      native_sub_4327ec();
    }
    uVar24 = 0;
    goto code_r0x00807424;
  case 6:
    if (((*(byte *)(_NGUIMath_TypeInfo_12d53b8 + 0x133) >> 2 & 1) != 0) &&
       (*(int *)(_NGUIMath_TypeInfo_12d53b8 + 0xe0) == 0)) {
      native_sub_4327ec();
    }
    goto code_r0x008073ec;
  case 7:
    if (((*(byte *)(_NGUIMath_TypeInfo_12d53b8 + 0x133) >> 2 & 1) != 0) &&
       (*(int *)(_NGUIMath_TypeInfo_12d53b8 + 0xe0) == 0)) {
      native_sub_4327ec();
    }
    uVar23 = 0;
code_r0x008073ec:
    uVar32 = 0;
    uVar22 = uVar24;
    uVar24 = 0;
    goto code_r0x00807428;
  case 8:
    if (((*(byte *)(_NGUIMath_TypeInfo_12d53b8 + 0x133) >> 2 & 1) != 0) &&
       (*(int *)(_NGUIMath_TypeInfo_12d53b8 + 0xe0) == 0)) {
      native_sub_4327ec();
    }
code_r0x00807424:
    uVar23 = 0;
    uVar22 = uVar24;
    uVar24 = 0;
    goto code_r0x00807428;
  }
  uVar22 = 0;
code_r0x00807428:
  fVar12 = (float)uVar23;
native_NGUIMath__AdjustWidget_807510:
  uVar23 = uVar22;
  uVar34 = uVar32;
  uVar35 = uVar24;
  if ((bRam000000000134047a & 1) == 0) {
    native_sub_43273c(&UnityEngine_Object_TypeInfo_12d54e0);
    bRam000000000134047a = 1;
  }
  if (param_3 == (long *)0x0) goto LAB_00807ccc;
  fVar13 = (float)native_UIWidget__get_pivotOffset_944f8c(param_3,0);
  fVar25 = (float)uVar23;
  uVar27 = uVar23;
  lVar9 = native_UIRect__get_cachedTransform_c27c58(param_3,0);
  if (lVar9 == 0) goto LAB_00807ccc;
  uVar14 = native_UnityEngine_Transform__get_localRotation_771c84(lVar9,0);
  uVar1 = native_UnityEngine_Mathf__FloorToInt_8e506c(fVar12 + 0.5,0);
  uVar3 = native_UnityEngine_Mathf__FloorToInt_8e506c((float)uVar22 + 0.5,0);
  uVar2 = native_UnityEngine_Mathf__FloorToInt_8e506c((float)uVar32 + 0.5,0);
  uVar4 = native_UnityEngine_Mathf__FloorToInt_8e506c((float)uVar24 + 0.5,0);
  if ((fVar13 == 0.5) && ((uVar1 == 0 || (uVar2 == 0)))) {
    uVar1 = uVar1 & 0xfffffffe;
    uVar2 = uVar2 & 0xfffffffe;
  }
  if ((fVar25 == 0.5) && ((uVar3 == 0 || (uVar4 == 0)))) {
    uVar3 = uVar3 & 0xfffffffe;
    uVar4 = uVar4 & 0xfffffffe;
  }
  fVar38 = (float)(int)uVar1;
  fVar12 = (float)(int)uVar4;
  uVar24 = uVar27;
  fVar15 = (float)native_UnityEngine_Quaternion__op_Multiply_7629c0
                            (uVar14,uVar27,uVar34,uVar35,fVar38,fVar12,0,0);
  fVar37 = (float)(int)uVar2;
  uVar22 = uVar27;
  fVar16 = (float)native_UnityEngine_Quaternion__op_Multiply_7629c0
                            (uVar14,uVar27,uVar34,uVar35,fVar37,fVar12,0,0);
  fVar36 = (float)(int)uVar3;
  uVar32 = uVar27;
  fVar17 = (float)native_UnityEngine_Quaternion__op_Multiply_7629c0
                            (uVar14,uVar27,uVar34,uVar35,fVar38,fVar36,0,0);
  uVar28 = uVar27;
  fVar18 = (float)native_UnityEngine_Quaternion__op_Multiply_7629c0
                            (uVar14,uVar27,uVar34,uVar35,fVar37,fVar36,0,0);
  uVar29 = uVar27;
  fVar38 = (float)native_UnityEngine_Quaternion__op_Multiply_7629c0
                            (uVar14,uVar27,uVar34,uVar35,fVar38,0,0,0);
  uVar30 = uVar27;
  fVar19 = (float)native_UnityEngine_Quaternion__op_Multiply_7629c0
                            (uVar14,uVar27,uVar34,uVar35,fVar37,0,0,0);
  fVar26 = (float)uVar30;
  uVar30 = uVar27;
  fVar20 = (float)native_UnityEngine_Quaternion__op_Multiply_7629c0
                            (uVar14,uVar27,uVar34,uVar35,0,fVar12,0,0);
  fVar12 = (float)uVar30;
  uVar30 = uVar27;
  uVar31 = uVar34;
  fVar21 = (float)native_UnityEngine_Quaternion__op_Multiply_7629c0
                            (uVar14,uVar27,uVar34,uVar35,0,fVar36,0,0);
  fVar33 = (float)uVar31;
  uVar31 = uVar30;
  fVar37 = (float)native_UnityEngine_Vector3__get_zero_776668(0);
  fVar36 = fVar33;
  if ((fVar13 == 0.0) && (fVar25 == 1.0)) {
    uVar31 = uVar24 & 0xffffffff;
    fVar37 = fVar15;
  }
  else if ((fVar13 == 1.0) && (fVar25 == 0.0)) {
    uVar31 = uVar28 & 0xffffffff;
    fVar37 = fVar18;
  }
  else if ((fVar13 == 0.0) && (fVar25 == 0.0)) {
    uVar31 = uVar32 & 0xffffffff;
    fVar37 = fVar17;
  }
  else if ((fVar13 == 1.0) && (fVar25 == 1.0)) {
    uVar31 = uVar22 & 0xffffffff;
    fVar37 = fVar16;
  }
  else {
    fVar15 = (float)uVar30;
    fVar16 = (float)uVar29;
    if ((fVar13 == 0.0) && (fVar25 == 0.5)) {
      fVar37 = fVar38 + (fVar20 + fVar21) * 0.5;
      uVar31 = (ulong)(uint)(fVar16 + (fVar12 + fVar15) * 0.5);
      fVar36 = fVar38;
    }
    else if ((fVar13 == 1.0) && (fVar25 == 0.5)) {
      fVar37 = fVar19 + (fVar20 + fVar21) * 0.5;
      fVar15 = fVar12 + fVar15;
      fVar12 = fVar26;
LAB_008078c0:
      uVar31 = (ulong)(uint)(fVar12 + fVar15 * 0.5);
      fVar36 = fVar12;
    }
    else if (fVar13 == 0.5) {
      if (fVar25 == 1.0) {
        fVar37 = fVar20 + (fVar38 + fVar19) * 0.5;
        fVar15 = fVar16 + fVar26;
        goto LAB_008078c0;
      }
      if (fVar25 == 0.0) {
        fVar37 = fVar21 + (fVar38 + fVar19) * 0.5;
        uVar31 = (ulong)(uint)(fVar15 + (fVar16 + fVar26) * 0.5);
      }
      else if (fVar25 == 0.5) {
        fVar37 = (fVar38 + fVar19 + fVar20 + fVar21) * 0.5;
        uVar31 = (ulong)(uint)((fVar26 + fVar16 + fVar12 + fVar15) * 0.5);
        fVar36 = fVar26;
      }
    }
  }
  fVar12 = (float)uVar31;
  uVar5 = (**(code **)(*param_3 + 0x3b8))(param_3,*(undefined8 *)(*param_3 + 0x3c0));
  uVar6 = native_UnityEngine_Mathf__Max_8e4cd0(param_5,uVar5,0);
  uVar5 = (**(code **)(*param_3 + 0x3c8))(param_3,*(undefined8 *)(*param_3 + 0x3d0));
  uVar7 = native_UnityEngine_Mathf__Max_8e4cd0(param_6,uVar5,0);
  uVar2 = (uVar2 - uVar1) + *(int *)((long)param_3 + 0xa4);
  uVar4 = (uVar4 - uVar3) + (int)param_3[0x15];
  uVar24 = native_UnityEngine_Vector3__get_zero_776668(0);
  if ((int)uVar2 <= (int)param_7) {
    param_7 = uVar2;
  }
  if ((int)uVar6 <= (int)uVar2) {
    uVar6 = param_7;
  }
  uVar22 = uVar31;
  fVar15 = fVar36;
  if (uVar6 - uVar2 != 0) {
    uVar22 = (ulong)(uint)(float)(int)(uVar6 - uVar2);
    uVar2 = uVar6;
    fVar15 = fVar13;
    if (uVar1 == 0) {
      fVar16 = (float)native_UnityEngine_Mathf__Lerp_8e5224(0,uVar22,fVar13,0);
      uVar24 = (ulong)(uint)((float)uVar24 + fVar16);
    }
    else {
      uVar32 = 0;
      fVar16 = (float)native_UnityEngine_Mathf__Lerp_8e5224(uVar22,0,fVar13,0);
      uVar24 = (ulong)(uint)((float)uVar24 - fVar16);
      uVar22 = uVar32;
    }
  }
  fVar16 = (float)uVar22;
  if ((int)uVar4 <= (int)param_8) {
    param_8 = uVar4;
  }
  if ((int)uVar7 <= (int)uVar4) {
    uVar7 = param_8;
  }
  if (uVar7 - uVar4 != 0) {
    fVar17 = (float)(int)(uVar7 - uVar4);
    uVar4 = uVar7;
    fVar15 = fVar25;
    if (uVar3 == 0) {
      fVar16 = fVar17;
      fVar17 = (float)native_UnityEngine_Mathf__Lerp_8e5224(0,fVar17,uVar23 & 0xffffffff,0);
      uVar31 = (ulong)(uint)((float)uVar31 + fVar17);
    }
    else {
      fVar16 = 0.0;
      fVar17 = (float)native_UnityEngine_Mathf__Lerp_8e5224(fVar17,0,uVar23 & 0xffffffff,0);
      uVar31 = (ulong)(uint)((float)uVar31 - fVar17);
    }
  }
  uVar1 = uVar2 & 0xfffffffe;
  if (fVar13 != 0.5) {
    uVar1 = uVar2;
  }
  uVar2 = uVar4 & 0xfffffffe;
  if (fVar25 != 0.5) {
    uVar2 = uVar4;
  }
  fVar17 = (float)native_UnityEngine_Transform__get_localPosition_7717f4(lVar9,0);
  fVar36 = (float)native_UnityEngine_Quaternion__op_Multiply_7629c0
                            (uVar14,uVar27,uVar34,uVar35,uVar24,uVar31,fVar36,0);
  fVar36 = fVar37 + fVar17 + fVar36;
  fVar12 = fVar12 + fVar16 + (float)uVar27;
  uVar22 = (ulong)(uint)fVar12;
  uVar32 = (ulong)(uint)(fVar33 + fVar15 + (float)uVar34);
  native_UnityEngine_Transform__set_localPosition_7718a4(fVar36,uVar22,uVar32,lVar9,0);
  native_UIWidget__SetDimensions_94987c(param_3,uVar1,uVar2,0);
  uVar24 = native_UIRect__get_isAnchored_c2d8cc(param_3,0);
  if ((uVar24 & 1) == 0) {
    return;
  }
  lVar9 = native_UnityEngine_Transform__get_parent_765eb0(lVar9,0);
  if (param_3[3] != 0) {
    uVar11 = *(undefined8 *)(param_3[3] + 0x10);
    if (((*(byte *)(_UnityEngine_Object_TypeInfo_12d54e0 + 0x133) >> 2 & 1) != 0) &&
       (*(int *)(_UnityEngine_Object_TypeInfo_12d54e0 + 0xe0) == 0)) {
      native_sub_4327ec();
    }
    fVar36 = fVar36 - fVar13 * (float)(int)uVar1;
    uVar24 = native_UnityEngine_Object__op_Implicit_8e1b98(uVar11,0);
    if ((uVar24 & 1) != 0) {
      if (param_3[3] == 0) goto LAB_00807ccc;
      native_UIRect_AnchorPoint__SetHorizontal_559078(fVar36,param_3[3],lVar9,0);
    }
    if (param_3[4] != 0) {
      uVar11 = *(undefined8 *)(param_3[4] + 0x10);
      if (((*(byte *)(_UnityEngine_Object_TypeInfo_12d54e0 + 0x133) >> 2 & 1) != 0) &&
         (*(int *)(_UnityEngine_Object_TypeInfo_12d54e0 + 0xe0) == 0)) {
        native_sub_4327ec();
      }
      uVar24 = native_UnityEngine_Object__op_Implicit_8e1b98(uVar11,0);
      if ((uVar24 & 1) != 0) {
        if (param_3[4] == 0) goto LAB_00807ccc;
        native_UIRect_AnchorPoint__SetHorizontal_559078
                  (fVar36 + (float)(int)uVar1,param_3[4],lVar9,0);
      }
      if (param_3[5] != 0) {
        uVar11 = *(undefined8 *)(param_3[5] + 0x10);
        if (((*(byte *)(_UnityEngine_Object_TypeInfo_12d54e0 + 0x133) >> 2 & 1) != 0) &&
           (*(int *)(_UnityEngine_Object_TypeInfo_12d54e0 + 0xe0) == 0)) {
          native_sub_4327ec();
        }
        fVar12 = fVar12 - fVar25 * (float)(int)uVar2;
        uVar24 = native_UnityEngine_Object__op_Implicit_8e1b98(uVar11,0);
        if ((uVar24 & 1) != 0) {
          if (param_3[5] == 0) goto LAB_00807ccc;
          native_UIRect_AnchorPoint__SetVertical_5591e0(fVar12,param_3[5],lVar9,0);
        }
        if (param_3[6] != 0) {
          uVar11 = *(undefined8 *)(param_3[6] + 0x10);
          if (((*(byte *)(_UnityEngine_Object_TypeInfo_12d54e0 + 0x133) >> 2 & 1) != 0) &&
             (*(int *)(_UnityEngine_Object_TypeInfo_12d54e0 + 0xe0) == 0)) {
            native_sub_4327ec();
          }
          uVar24 = native_UnityEngine_Object__op_Implicit_8e1b98(uVar11,0);
          if ((uVar24 & 1) == 0) {
            return;
          }
          lVar10 = param_3[6];
          if (lVar10 != 0) {
            if ((bRam000000000133ea04 & 1) == 0) {
              native_sub_43273c(&UnityEngine_Object_TypeInfo_12d54e0,lVar9,0);
              bRam000000000133ea04 = 1;
            }
            uVar11 = *(undefined8 *)(lVar10 + 0x20);
            if (((*(byte *)(_UnityEngine_Object_TypeInfo_12d54e0 + 0x133) >> 2 & 1) != 0) &&
               (*(int *)(_UnityEngine_Object_TypeInfo_12d54e0 + 0xe0) == 0)) {
              native_sub_4327ec();
            }
            uVar24 = native_UnityEngine_Object__op_Implicit_8e1b98(uVar11,0);
            if ((uVar24 & 1) == 0) {
              if (*(long *)(lVar10 + 0x10) != 0) {
                uVar11 = native_UnityEngine_Transform__get_position_77169c
                                   (*(long *)(lVar10 + 0x10),0);
                if (((*(byte *)(_UnityEngine_Object_TypeInfo_12d54e0 + 0x133) >> 2 & 1) != 0) &&
                   (*(int *)(_UnityEngine_Object_TypeInfo_12d54e0 + 0xe0) == 0)) {
                  native_sub_4327ec();
                }
                uVar24 = native_UnityEngine_Object__op_Inequality_8d76fc(lVar9,0,0);
                if ((uVar24 & 1) != 0) {
                  if (lVar9 == 0) goto LAB_00559338;
                  native_UnityEngine_Transform__InverseTransformPoint_7729a0
                            (uVar11,uVar22,uVar32,lVar9,0);
                }
LAB_00559308:
                uVar14 = native_UnityEngine_Mathf__FloorToInt_8e506c
                                   (((fVar12 + (float)(int)uVar2) - (float)uVar22) + 0.5,0);
                *(undefined4 *)(lVar10 + 0x1c) = uVar14;
                return;
              }
            }
            else {
              plVar8 = *(long **)(lVar10 + 0x20);
              if ((plVar8 != (long *)0x0) &&
                 (lVar9 = (**(code **)(*plVar8 + 0x208))
                                    (plVar8,lVar9,*(undefined8 *)(*plVar8 + 0x210)), lVar9 != 0)) {
                if (*(uint *)(lVar9 + 0x18) < 4) {
                  uVar11 = native_sub_43283c();
                    /* WARNING: Subroutine does not return */
                  native_sub_4327dc(uVar11,0);
                }
                uVar22 = native_UnityEngine_Mathf__Lerp_8e5224
                                   (*(undefined4 *)(lVar9 + 0x48),*(undefined4 *)(lVar9 + 0x30),
                                    *(undefined4 *)(lVar10 + 0x18),0);
                goto LAB_00559308;
              }
            }
LAB_00559338:
                    /* WARNING: Subroutine does not return */
            native_sub_432810();
          }
        }
      }
    }
  }
LAB_00807ccc:
                    /* WARNING: Subroutine does not return */
  native_sub_432810();
}



/* NGUIMath$$AdjustWidget @ 0x807cd0
 * void NGUIMath__AdjustWidget (UIWidget_o* w, float left, float bottom, float right, float top, const MethodInfo* method); */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* NGUIMath$$AdjustWidget
   void NGUIMath__AdjustWidget (UIWidget_o* w, float left, float bottom, float right, float top,
   const MethodInfo* method); */

void native_NGUIMath__AdjustWidget_807cd0
               (float param_1,ulong param_2,undefined8 param_3,undefined8 param_4,long *param_5)

{
  uint uVar1;
  uint uVar2;
  uint uVar3;
  uint uVar4;
  uint uVar5;
  undefined4 uVar6;
  uint uVar7;
  uint uVar8;
  long *plVar9;
  long lVar10;
  ulong uVar11;
  long lVar12;
  undefined8 uVar13;
  float fVar14;
  undefined4 uVar15;
  float fVar16;
  float fVar17;
  float fVar18;
  float fVar19;
  float fVar20;
  float fVar21;
  float fVar22;
  ulong uVar23;
  ulong uVar24;
  float fVar25;
  float fVar26;
  ulong uVar27;
  ulong uVar28;
  ulong uVar29;
  ulong uVar30;
  ulong uVar31;
  ulong uVar32;
  float fVar33;
  undefined8 uVar35;
  float fVar36;
  float fVar37;
  float fVar38;
  float fVar39;
  undefined8 uVar34;
  
  if ((bRam0000000001340478 & 1) == 0) {
    native_sub_43273c(&NGUIMath_TypeInfo_12d53b8);
    bRam0000000001340478 = 1;
  }
  if (((*(byte *)(_NGUIMath_TypeInfo_12d53b8 + 0x133) >> 2 & 1) != 0) &&
     (*(int *)(_NGUIMath_TypeInfo_12d53b8 + 0xe0) == 0)) {
    native_sub_4327ec();
  }
  uVar11 = param_2;
  uVar13 = param_3;
  uVar35 = param_4;
  if ((bRam000000000134047a & 1) == 0) {
    native_sub_43273c(&UnityEngine_Object_TypeInfo_12d54e0);
    bRam000000000134047a = 1;
  }
  if (param_5 == (long *)0x0) goto LAB_00807ccc;
  fVar14 = (float)native_UIWidget__get_pivotOffset_944f8c(param_5,0);
  fVar25 = (float)uVar11;
  uVar23 = uVar11;
  lVar10 = native_UIRect__get_cachedTransform_c27c58(param_5,0);
  if (lVar10 == 0) goto LAB_00807ccc;
  uVar15 = native_UnityEngine_Transform__get_localRotation_771c84(lVar10,0);
  uVar2 = native_UnityEngine_Mathf__FloorToInt_8e506c(param_1 + 0.5,0);
  uVar3 = native_UnityEngine_Mathf__FloorToInt_8e506c((float)param_2 + 0.5,0);
  uVar4 = native_UnityEngine_Mathf__FloorToInt_8e506c((float)param_3 + 0.5,0);
  uVar5 = native_UnityEngine_Mathf__FloorToInt_8e506c((float)param_4 + 0.5,0);
  if ((fVar14 == 0.5) && ((uVar2 == 0 || (uVar4 == 0)))) {
    uVar2 = uVar2 & 0xfffffffe;
    uVar4 = uVar4 & 0xfffffffe;
  }
  if ((fVar25 == 0.5) && ((uVar3 == 0 || (uVar5 == 0)))) {
    uVar3 = uVar3 & 0xfffffffe;
    uVar5 = uVar5 & 0xfffffffe;
  }
  fVar39 = (float)(int)uVar2;
  fVar37 = (float)(int)uVar5;
  uVar24 = uVar23;
  fVar16 = (float)native_UnityEngine_Quaternion__op_Multiply_7629c0
                            (uVar15,uVar23,uVar13,uVar35,fVar39,fVar37,0,0);
  fVar38 = (float)(int)uVar4;
  uVar27 = uVar23;
  fVar17 = (float)native_UnityEngine_Quaternion__op_Multiply_7629c0
                            (uVar15,uVar23,uVar13,uVar35,fVar38,fVar37,0,0);
  fVar36 = (float)(int)uVar3;
  uVar32 = uVar23;
  fVar18 = (float)native_UnityEngine_Quaternion__op_Multiply_7629c0
                            (uVar15,uVar23,uVar13,uVar35,fVar39,fVar36,0,0);
  uVar28 = uVar23;
  fVar19 = (float)native_UnityEngine_Quaternion__op_Multiply_7629c0
                            (uVar15,uVar23,uVar13,uVar35,fVar38,fVar36,0,0);
  uVar29 = uVar23;
  fVar39 = (float)native_UnityEngine_Quaternion__op_Multiply_7629c0
                            (uVar15,uVar23,uVar13,uVar35,fVar39,0,0,0);
  uVar30 = uVar23;
  fVar20 = (float)native_UnityEngine_Quaternion__op_Multiply_7629c0
                            (uVar15,uVar23,uVar13,uVar35,fVar38,0,0,0);
  fVar26 = (float)uVar30;
  uVar30 = uVar23;
  fVar21 = (float)native_UnityEngine_Quaternion__op_Multiply_7629c0
                            (uVar15,uVar23,uVar13,uVar35,0,fVar37,0,0);
  fVar37 = (float)uVar30;
  uVar30 = uVar23;
  uVar34 = uVar13;
  fVar22 = (float)native_UnityEngine_Quaternion__op_Multiply_7629c0
                            (uVar15,uVar23,uVar13,uVar35,0,fVar36,0,0);
  fVar33 = (float)uVar34;
  uVar31 = uVar30;
  fVar38 = (float)native_UnityEngine_Vector3__get_zero_776668(0);
  fVar36 = fVar33;
  if ((fVar14 == 0.0) && (fVar25 == 1.0)) {
    uVar31 = uVar24 & 0xffffffff;
    fVar38 = fVar16;
  }
  else if ((fVar14 == 1.0) && (fVar25 == 0.0)) {
    uVar31 = uVar28 & 0xffffffff;
    fVar38 = fVar19;
  }
  else if ((fVar14 == 0.0) && (fVar25 == 0.0)) {
    uVar31 = uVar32 & 0xffffffff;
    fVar38 = fVar18;
  }
  else if ((fVar14 == 1.0) && (fVar25 == 1.0)) {
    uVar31 = uVar27 & 0xffffffff;
    fVar38 = fVar17;
  }
  else {
    fVar16 = (float)uVar30;
    fVar17 = (float)uVar29;
    if ((fVar14 == 0.0) && (fVar25 == 0.5)) {
      fVar38 = fVar39 + (fVar21 + fVar22) * 0.5;
      uVar31 = (ulong)(uint)(fVar17 + (fVar37 + fVar16) * 0.5);
      fVar36 = fVar39;
    }
    else if ((fVar14 == 1.0) && (fVar25 == 0.5)) {
      fVar38 = fVar20 + (fVar21 + fVar22) * 0.5;
      fVar16 = fVar37 + fVar16;
      fVar37 = fVar26;
LAB_008078c0:
      uVar31 = (ulong)(uint)(fVar37 + fVar16 * 0.5);
      fVar36 = fVar37;
    }
    else if (fVar14 == 0.5) {
      if (fVar25 == 1.0) {
        fVar38 = fVar21 + (fVar39 + fVar20) * 0.5;
        fVar16 = fVar17 + fVar26;
        goto LAB_008078c0;
      }
      if (fVar25 == 0.0) {
        fVar38 = fVar22 + (fVar39 + fVar20) * 0.5;
        uVar31 = (ulong)(uint)(fVar16 + (fVar17 + fVar26) * 0.5);
      }
      else if (fVar25 == 0.5) {
        fVar38 = (fVar39 + fVar20 + fVar21 + fVar22) * 0.5;
        uVar31 = (ulong)(uint)((fVar26 + fVar17 + fVar37 + fVar16) * 0.5);
        fVar36 = fVar26;
      }
    }
  }
  fVar37 = (float)uVar31;
  uVar6 = (**(code **)(*param_5 + 0x3b8))(param_5,*(undefined8 *)(*param_5 + 0x3c0));
  uVar7 = native_UnityEngine_Mathf__Max_8e4cd0(2,uVar6,0);
  uVar6 = (**(code **)(*param_5 + 0x3c8))(param_5,*(undefined8 *)(*param_5 + 0x3d0));
  uVar8 = native_UnityEngine_Mathf__Max_8e4cd0(2,uVar6,0);
  uVar4 = (uVar4 - uVar2) + *(int *)((long)param_5 + 0xa4);
  uVar5 = (uVar5 - uVar3) + (int)param_5[0x15];
  uVar24 = native_UnityEngine_Vector3__get_zero_776668(0);
  uVar1 = 100000;
  if ((int)uVar4 < 0x186a1) {
    uVar1 = uVar4;
  }
  if ((int)uVar7 <= (int)uVar4) {
    uVar7 = uVar1;
  }
  uVar27 = uVar31;
  fVar16 = fVar36;
  if (uVar7 - uVar4 != 0) {
    uVar27 = (ulong)(uint)(float)(int)(uVar7 - uVar4);
    uVar4 = uVar7;
    fVar16 = fVar14;
    if (uVar2 == 0) {
      fVar17 = (float)native_UnityEngine_Mathf__Lerp_8e5224(0,uVar27,fVar14,0);
      uVar24 = (ulong)(uint)((float)uVar24 + fVar17);
    }
    else {
      uVar32 = 0;
      fVar17 = (float)native_UnityEngine_Mathf__Lerp_8e5224(uVar27,0,fVar14,0);
      uVar24 = (ulong)(uint)((float)uVar24 - fVar17);
      uVar27 = uVar32;
    }
  }
  fVar17 = (float)uVar27;
  uVar2 = 100000;
  if ((int)uVar5 < 0x186a1) {
    uVar2 = uVar5;
  }
  if ((int)uVar8 <= (int)uVar5) {
    uVar8 = uVar2;
  }
  if (uVar8 - uVar5 != 0) {
    fVar18 = (float)(int)(uVar8 - uVar5);
    uVar5 = uVar8;
    fVar16 = fVar25;
    if (uVar3 == 0) {
      fVar17 = fVar18;
      fVar18 = (float)native_UnityEngine_Mathf__Lerp_8e5224(0,fVar18,uVar11 & 0xffffffff,0);
      uVar31 = (ulong)(uint)((float)uVar31 + fVar18);
    }
    else {
      fVar17 = 0.0;
      fVar18 = (float)native_UnityEngine_Mathf__Lerp_8e5224(fVar18,0,uVar11 & 0xffffffff,0);
      uVar31 = (ulong)(uint)((float)uVar31 - fVar18);
    }
  }
  uVar2 = uVar4 & 0xfffffffe;
  if (fVar14 != 0.5) {
    uVar2 = uVar4;
  }
  uVar4 = uVar5 & 0xfffffffe;
  if (fVar25 != 0.5) {
    uVar4 = uVar5;
  }
  fVar18 = (float)native_UnityEngine_Transform__get_localPosition_7717f4(lVar10,0);
  fVar36 = (float)native_UnityEngine_Quaternion__op_Multiply_7629c0
                            (uVar15,uVar23,uVar13,uVar35,uVar24,uVar31,fVar36,0);
  fVar36 = fVar38 + fVar18 + fVar36;
  fVar37 = fVar37 + fVar17 + (float)uVar23;
  uVar23 = (ulong)(uint)fVar37;
  uVar24 = (ulong)(uint)(fVar33 + fVar16 + (float)uVar13);
  native_UnityEngine_Transform__set_localPosition_7718a4(fVar36,uVar23,uVar24,lVar10,0);
  native_UIWidget__SetDimensions_94987c(param_5,uVar2,uVar4,0);
  uVar11 = native_UIRect__get_isAnchored_c2d8cc(param_5,0);
  if ((uVar11 & 1) == 0) {
    return;
  }
  lVar10 = native_UnityEngine_Transform__get_parent_765eb0(lVar10,0);
  if (param_5[3] != 0) {
    uVar13 = *(undefined8 *)(param_5[3] + 0x10);
    if (((*(byte *)(_UnityEngine_Object_TypeInfo_12d54e0 + 0x133) >> 2 & 1) != 0) &&
       (*(int *)(_UnityEngine_Object_TypeInfo_12d54e0 + 0xe0) == 0)) {
      native_sub_4327ec();
    }
    fVar36 = fVar36 - fVar14 * (float)(int)uVar2;
    uVar11 = native_UnityEngine_Object__op_Implicit_8e1b98(uVar13,0);
    if ((uVar11 & 1) != 0) {
      if (param_5[3] == 0) goto LAB_00807ccc;
      native_UIRect_AnchorPoint__SetHorizontal_559078(fVar36,param_5[3],lVar10,0);
    }
    if (param_5[4] != 0) {
      uVar13 = *(undefined8 *)(param_5[4] + 0x10);
      if (((*(byte *)(_UnityEngine_Object_TypeInfo_12d54e0 + 0x133) >> 2 & 1) != 0) &&
         (*(int *)(_UnityEngine_Object_TypeInfo_12d54e0 + 0xe0) == 0)) {
        native_sub_4327ec();
      }
      uVar11 = native_UnityEngine_Object__op_Implicit_8e1b98(uVar13,0);
      if ((uVar11 & 1) != 0) {
        if (param_5[4] == 0) goto LAB_00807ccc;
        native_UIRect_AnchorPoint__SetHorizontal_559078
                  (fVar36 + (float)(int)uVar2,param_5[4],lVar10,0);
      }
      if (param_5[5] != 0) {
        uVar13 = *(undefined8 *)(param_5[5] + 0x10);
        if (((*(byte *)(_UnityEngine_Object_TypeInfo_12d54e0 + 0x133) >> 2 & 1) != 0) &&
           (*(int *)(_UnityEngine_Object_TypeInfo_12d54e0 + 0xe0) == 0)) {
          native_sub_4327ec();
        }
        fVar37 = fVar37 - fVar25 * (float)(int)uVar4;
        uVar11 = native_UnityEngine_Object__op_Implicit_8e1b98(uVar13,0);
        if ((uVar11 & 1) != 0) {
          if (param_5[5] == 0) goto LAB_00807ccc;
          native_UIRect_AnchorPoint__SetVertical_5591e0(fVar37,param_5[5],lVar10,0);
        }
        if (param_5[6] != 0) {
          uVar13 = *(undefined8 *)(param_5[6] + 0x10);
          if (((*(byte *)(_UnityEngine_Object_TypeInfo_12d54e0 + 0x133) >> 2 & 1) != 0) &&
             (*(int *)(_UnityEngine_Object_TypeInfo_12d54e0 + 0xe0) == 0)) {
            native_sub_4327ec();
          }
          uVar11 = native_UnityEngine_Object__op_Implicit_8e1b98(uVar13,0);
          if ((uVar11 & 1) == 0) {
            return;
          }
          lVar12 = param_5[6];
          if (lVar12 != 0) {
            if ((bRam000000000133ea04 & 1) == 0) {
              native_sub_43273c(&UnityEngine_Object_TypeInfo_12d54e0,lVar10,0);
              bRam000000000133ea04 = 1;
            }
            uVar13 = *(undefined8 *)(lVar12 + 0x20);
            if (((*(byte *)(_UnityEngine_Object_TypeInfo_12d54e0 + 0x133) >> 2 & 1) != 0) &&
               (*(int *)(_UnityEngine_Object_TypeInfo_12d54e0 + 0xe0) == 0)) {
              native_sub_4327ec();
            }
            uVar11 = native_UnityEngine_Object__op_Implicit_8e1b98(uVar13,0);
            if ((uVar11 & 1) == 0) {
              if (*(long *)(lVar12 + 0x10) != 0) {
                uVar13 = native_UnityEngine_Transform__get_position_77169c
                                   (*(long *)(lVar12 + 0x10),0);
                if (((*(byte *)(_UnityEngine_Object_TypeInfo_12d54e0 + 0x133) >> 2 & 1) != 0) &&
                   (*(int *)(_UnityEngine_Object_TypeInfo_12d54e0 + 0xe0) == 0)) {
                  native_sub_4327ec();
                }
                uVar11 = native_UnityEngine_Object__op_Inequality_8d76fc(lVar10,0,0);
                if ((uVar11 & 1) != 0) {
                  if (lVar10 == 0) goto LAB_00559338;
                  native_UnityEngine_Transform__InverseTransformPoint_7729a0
                            (uVar13,uVar23,uVar24,lVar10,0);
                }
LAB_00559308:
                uVar15 = native_UnityEngine_Mathf__FloorToInt_8e506c
                                   (((fVar37 + (float)(int)uVar4) - (float)uVar23) + 0.5,0);
                *(undefined4 *)(lVar12 + 0x1c) = uVar15;
                return;
              }
            }
            else {
              plVar9 = *(long **)(lVar12 + 0x20);
              if ((plVar9 != (long *)0x0) &&
                 (lVar10 = (**(code **)(*plVar9 + 0x208))
                                     (plVar9,lVar10,*(undefined8 *)(*plVar9 + 0x210)), lVar10 != 0))
              {
                if (*(uint *)(lVar10 + 0x18) < 4) {
                  uVar13 = native_sub_43283c();
                    /* WARNING: Subroutine does not return */
                  native_sub_4327dc(uVar13,0);
                }
                uVar23 = native_UnityEngine_Mathf__Lerp_8e5224
                                   (*(undefined4 *)(lVar10 + 0x48),*(undefined4 *)(lVar10 + 0x30),
                                    *(undefined4 *)(lVar12 + 0x18),0);
                goto LAB_00559308;
              }
            }
LAB_00559338:
                    /* WARNING: Subroutine does not return */
            native_sub_432810();
          }
        }
      }
    }
  }
LAB_00807ccc:
                    /* WARNING: Subroutine does not return */
  native_sub_432810();
}



/* NGUIMath$$AdjustWidget @ 0x807458
 * void NGUIMath__AdjustWidget (UIWidget_o* w, float left, float bottom, float right, float top, int32_t minWidth, int32_t minHeight, const MethodInfo* method); */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* NGUIMath$$AdjustWidget
   void NGUIMath__AdjustWidget (UIWidget_o* w, float left, float bottom, float right, float top,
   int32_t minWidth, int32_t minHeight, const MethodInfo* method); */

void native_NGUIMath__AdjustWidget_807458
               (float param_1,ulong param_2,undefined8 param_3,undefined8 param_4,long *param_5,
               undefined4 param_6,undefined4 param_7)

{
  uint uVar1;
  uint uVar2;
  uint uVar3;
  uint uVar4;
  uint uVar5;
  undefined4 uVar6;
  uint uVar7;
  uint uVar8;
  long *plVar9;
  long lVar10;
  ulong uVar11;
  long lVar12;
  undefined8 uVar13;
  float fVar14;
  undefined4 uVar15;
  float fVar16;
  float fVar17;
  float fVar18;
  float fVar19;
  float fVar20;
  float fVar21;
  float fVar22;
  ulong uVar23;
  ulong uVar24;
  float fVar25;
  float fVar26;
  ulong uVar27;
  ulong uVar28;
  ulong uVar29;
  ulong uVar30;
  ulong uVar31;
  ulong uVar32;
  float fVar33;
  undefined8 uVar35;
  float fVar36;
  float fVar37;
  float fVar38;
  float fVar39;
  undefined8 uVar34;
  
  if ((bRam0000000001340479 & 1) == 0) {
    native_sub_43273c(&NGUIMath_TypeInfo_12d53b8);
    bRam0000000001340479 = 1;
  }
  if (((*(byte *)(_NGUIMath_TypeInfo_12d53b8 + 0x133) >> 2 & 1) != 0) &&
     (*(int *)(_NGUIMath_TypeInfo_12d53b8 + 0xe0) == 0)) {
    native_sub_4327ec();
  }
  uVar11 = param_2;
  uVar13 = param_3;
  uVar35 = param_4;
  if ((bRam000000000134047a & 1) == 0) {
    native_sub_43273c(&UnityEngine_Object_TypeInfo_12d54e0);
    bRam000000000134047a = 1;
  }
  if (param_5 == (long *)0x0) goto LAB_00807ccc;
  fVar14 = (float)native_UIWidget__get_pivotOffset_944f8c(param_5,0);
  fVar25 = (float)uVar11;
  uVar23 = uVar11;
  lVar10 = native_UIRect__get_cachedTransform_c27c58(param_5,0);
  if (lVar10 == 0) goto LAB_00807ccc;
  uVar15 = native_UnityEngine_Transform__get_localRotation_771c84(lVar10,0);
  uVar2 = native_UnityEngine_Mathf__FloorToInt_8e506c(param_1 + 0.5,0);
  uVar3 = native_UnityEngine_Mathf__FloorToInt_8e506c((float)param_2 + 0.5,0);
  uVar4 = native_UnityEngine_Mathf__FloorToInt_8e506c((float)param_3 + 0.5,0);
  uVar5 = native_UnityEngine_Mathf__FloorToInt_8e506c((float)param_4 + 0.5,0);
  if ((fVar14 == 0.5) && ((uVar2 == 0 || (uVar4 == 0)))) {
    uVar2 = uVar2 & 0xfffffffe;
    uVar4 = uVar4 & 0xfffffffe;
  }
  if ((fVar25 == 0.5) && ((uVar3 == 0 || (uVar5 == 0)))) {
    uVar3 = uVar3 & 0xfffffffe;
    uVar5 = uVar5 & 0xfffffffe;
  }
  fVar39 = (float)(int)uVar2;
  fVar37 = (float)(int)uVar5;
  uVar24 = uVar23;
  fVar16 = (float)native_UnityEngine_Quaternion__op_Multiply_7629c0
                            (uVar15,uVar23,uVar13,uVar35,fVar39,fVar37,0,0);
  fVar38 = (float)(int)uVar4;
  uVar27 = uVar23;
  fVar17 = (float)native_UnityEngine_Quaternion__op_Multiply_7629c0
                            (uVar15,uVar23,uVar13,uVar35,fVar38,fVar37,0,0);
  fVar36 = (float)(int)uVar3;
  uVar32 = uVar23;
  fVar18 = (float)native_UnityEngine_Quaternion__op_Multiply_7629c0
                            (uVar15,uVar23,uVar13,uVar35,fVar39,fVar36,0,0);
  uVar28 = uVar23;
  fVar19 = (float)native_UnityEngine_Quaternion__op_Multiply_7629c0
                            (uVar15,uVar23,uVar13,uVar35,fVar38,fVar36,0,0);
  uVar29 = uVar23;
  fVar39 = (float)native_UnityEngine_Quaternion__op_Multiply_7629c0
                            (uVar15,uVar23,uVar13,uVar35,fVar39,0,0,0);
  uVar30 = uVar23;
  fVar20 = (float)native_UnityEngine_Quaternion__op_Multiply_7629c0
                            (uVar15,uVar23,uVar13,uVar35,fVar38,0,0,0);
  fVar26 = (float)uVar30;
  uVar30 = uVar23;
  fVar21 = (float)native_UnityEngine_Quaternion__op_Multiply_7629c0
                            (uVar15,uVar23,uVar13,uVar35,0,fVar37,0,0);
  fVar37 = (float)uVar30;
  uVar30 = uVar23;
  uVar34 = uVar13;
  fVar22 = (float)native_UnityEngine_Quaternion__op_Multiply_7629c0
                            (uVar15,uVar23,uVar13,uVar35,0,fVar36,0,0);
  fVar33 = (float)uVar34;
  uVar31 = uVar30;
  fVar38 = (float)native_UnityEngine_Vector3__get_zero_776668(0);
  fVar36 = fVar33;
  if ((fVar14 == 0.0) && (fVar25 == 1.0)) {
    uVar31 = uVar24 & 0xffffffff;
    fVar38 = fVar16;
  }
  else if ((fVar14 == 1.0) && (fVar25 == 0.0)) {
    uVar31 = uVar28 & 0xffffffff;
    fVar38 = fVar19;
  }
  else if ((fVar14 == 0.0) && (fVar25 == 0.0)) {
    uVar31 = uVar32 & 0xffffffff;
    fVar38 = fVar18;
  }
  else if ((fVar14 == 1.0) && (fVar25 == 1.0)) {
    uVar31 = uVar27 & 0xffffffff;
    fVar38 = fVar17;
  }
  else {
    fVar16 = (float)uVar30;
    fVar17 = (float)uVar29;
    if ((fVar14 == 0.0) && (fVar25 == 0.5)) {
      fVar38 = fVar39 + (fVar21 + fVar22) * 0.5;
      uVar31 = (ulong)(uint)(fVar17 + (fVar37 + fVar16) * 0.5);
      fVar36 = fVar39;
    }
    else if ((fVar14 == 1.0) && (fVar25 == 0.5)) {
      fVar38 = fVar20 + (fVar21 + fVar22) * 0.5;
      fVar16 = fVar37 + fVar16;
      fVar37 = fVar26;
LAB_008078c0:
      uVar31 = (ulong)(uint)(fVar37 + fVar16 * 0.5);
      fVar36 = fVar37;
    }
    else if (fVar14 == 0.5) {
      if (fVar25 == 1.0) {
        fVar38 = fVar21 + (fVar39 + fVar20) * 0.5;
        fVar16 = fVar17 + fVar26;
        goto LAB_008078c0;
      }
      if (fVar25 == 0.0) {
        fVar38 = fVar22 + (fVar39 + fVar20) * 0.5;
        uVar31 = (ulong)(uint)(fVar16 + (fVar17 + fVar26) * 0.5);
      }
      else if (fVar25 == 0.5) {
        fVar38 = (fVar39 + fVar20 + fVar21 + fVar22) * 0.5;
        uVar31 = (ulong)(uint)((fVar26 + fVar17 + fVar37 + fVar16) * 0.5);
        fVar36 = fVar26;
      }
    }
  }
  fVar37 = (float)uVar31;
  uVar6 = (**(code **)(*param_5 + 0x3b8))(param_5,*(undefined8 *)(*param_5 + 0x3c0));
  uVar7 = native_UnityEngine_Mathf__Max_8e4cd0(param_6,uVar6,0);
  uVar6 = (**(code **)(*param_5 + 0x3c8))(param_5,*(undefined8 *)(*param_5 + 0x3d0));
  uVar8 = native_UnityEngine_Mathf__Max_8e4cd0(param_7,uVar6,0);
  uVar4 = (uVar4 - uVar2) + *(int *)((long)param_5 + 0xa4);
  uVar5 = (uVar5 - uVar3) + (int)param_5[0x15];
  uVar24 = native_UnityEngine_Vector3__get_zero_776668(0);
  uVar1 = 100000;
  if ((int)uVar4 < 0x186a1) {
    uVar1 = uVar4;
  }
  if ((int)uVar7 <= (int)uVar4) {
    uVar7 = uVar1;
  }
  uVar27 = uVar31;
  fVar16 = fVar36;
  if (uVar7 - uVar4 != 0) {
    uVar27 = (ulong)(uint)(float)(int)(uVar7 - uVar4);
    uVar4 = uVar7;
    fVar16 = fVar14;
    if (uVar2 == 0) {
      fVar17 = (float)native_UnityEngine_Mathf__Lerp_8e5224(0,uVar27,fVar14,0);
      uVar24 = (ulong)(uint)((float)uVar24 + fVar17);
    }
    else {
      uVar32 = 0;
      fVar17 = (float)native_UnityEngine_Mathf__Lerp_8e5224(uVar27,0,fVar14,0);
      uVar24 = (ulong)(uint)((float)uVar24 - fVar17);
      uVar27 = uVar32;
    }
  }
  fVar17 = (float)uVar27;
  uVar2 = 100000;
  if ((int)uVar5 < 0x186a1) {
    uVar2 = uVar5;
  }
  if ((int)uVar8 <= (int)uVar5) {
    uVar8 = uVar2;
  }
  if (uVar8 - uVar5 != 0) {
    fVar18 = (float)(int)(uVar8 - uVar5);
    uVar5 = uVar8;
    fVar16 = fVar25;
    if (uVar3 == 0) {
      fVar17 = fVar18;
      fVar18 = (float)native_UnityEngine_Mathf__Lerp_8e5224(0,fVar18,uVar11 & 0xffffffff,0);
      uVar31 = (ulong)(uint)((float)uVar31 + fVar18);
    }
    else {
      fVar17 = 0.0;
      fVar18 = (float)native_UnityEngine_Mathf__Lerp_8e5224(fVar18,0,uVar11 & 0xffffffff,0);
      uVar31 = (ulong)(uint)((float)uVar31 - fVar18);
    }
  }
  uVar2 = uVar4 & 0xfffffffe;
  if (fVar14 != 0.5) {
    uVar2 = uVar4;
  }
  uVar4 = uVar5 & 0xfffffffe;
  if (fVar25 != 0.5) {
    uVar4 = uVar5;
  }
  fVar18 = (float)native_UnityEngine_Transform__get_localPosition_7717f4(lVar10,0);
  fVar36 = (float)native_UnityEngine_Quaternion__op_Multiply_7629c0
                            (uVar15,uVar23,uVar13,uVar35,uVar24,uVar31,fVar36,0);
  fVar36 = fVar38 + fVar18 + fVar36;
  fVar37 = fVar37 + fVar17 + (float)uVar23;
  uVar23 = (ulong)(uint)fVar37;
  uVar24 = (ulong)(uint)(fVar33 + fVar16 + (float)uVar13);
  native_UnityEngine_Transform__set_localPosition_7718a4(fVar36,uVar23,uVar24,lVar10,0);
  native_UIWidget__SetDimensions_94987c(param_5,uVar2,uVar4,0);
  uVar11 = native_UIRect__get_isAnchored_c2d8cc(param_5,0);
  if ((uVar11 & 1) == 0) {
    return;
  }
  lVar10 = native_UnityEngine_Transform__get_parent_765eb0(lVar10,0);
  if (param_5[3] != 0) {
    uVar13 = *(undefined8 *)(param_5[3] + 0x10);
    if (((*(byte *)(_UnityEngine_Object_TypeInfo_12d54e0 + 0x133) >> 2 & 1) != 0) &&
       (*(int *)(_UnityEngine_Object_TypeInfo_12d54e0 + 0xe0) == 0)) {
      native_sub_4327ec();
    }
    fVar36 = fVar36 - fVar14 * (float)(int)uVar2;
    uVar11 = native_UnityEngine_Object__op_Implicit_8e1b98(uVar13,0);
    if ((uVar11 & 1) != 0) {
      if (param_5[3] == 0) goto LAB_00807ccc;
      native_UIRect_AnchorPoint__SetHorizontal_559078(fVar36,param_5[3],lVar10,0);
    }
    if (param_5[4] != 0) {
      uVar13 = *(undefined8 *)(param_5[4] + 0x10);
      if (((*(byte *)(_UnityEngine_Object_TypeInfo_12d54e0 + 0x133) >> 2 & 1) != 0) &&
         (*(int *)(_UnityEngine_Object_TypeInfo_12d54e0 + 0xe0) == 0)) {
        native_sub_4327ec();
      }
      uVar11 = native_UnityEngine_Object__op_Implicit_8e1b98(uVar13,0);
      if ((uVar11 & 1) != 0) {
        if (param_5[4] == 0) goto LAB_00807ccc;
        native_UIRect_AnchorPoint__SetHorizontal_559078
                  (fVar36 + (float)(int)uVar2,param_5[4],lVar10,0);
      }
      if (param_5[5] != 0) {
        uVar13 = *(undefined8 *)(param_5[5] + 0x10);
        if (((*(byte *)(_UnityEngine_Object_TypeInfo_12d54e0 + 0x133) >> 2 & 1) != 0) &&
           (*(int *)(_UnityEngine_Object_TypeInfo_12d54e0 + 0xe0) == 0)) {
          native_sub_4327ec();
        }
        fVar37 = fVar37 - fVar25 * (float)(int)uVar4;
        uVar11 = native_UnityEngine_Object__op_Implicit_8e1b98(uVar13,0);
        if ((uVar11 & 1) != 0) {
          if (param_5[5] == 0) goto LAB_00807ccc;
          native_UIRect_AnchorPoint__SetVertical_5591e0(fVar37,param_5[5],lVar10,0);
        }
        if (param_5[6] != 0) {
          uVar13 = *(undefined8 *)(param_5[6] + 0x10);
          if (((*(byte *)(_UnityEngine_Object_TypeInfo_12d54e0 + 0x133) >> 2 & 1) != 0) &&
             (*(int *)(_UnityEngine_Object_TypeInfo_12d54e0 + 0xe0) == 0)) {
            native_sub_4327ec();
          }
          uVar11 = native_UnityEngine_Object__op_Implicit_8e1b98(uVar13,0);
          if ((uVar11 & 1) == 0) {
            return;
          }
          lVar12 = param_5[6];
          if (lVar12 != 0) {
            if ((bRam000000000133ea04 & 1) == 0) {
              native_sub_43273c(&UnityEngine_Object_TypeInfo_12d54e0,lVar10,0);
              bRam000000000133ea04 = 1;
            }
            uVar13 = *(undefined8 *)(lVar12 + 0x20);
            if (((*(byte *)(_UnityEngine_Object_TypeInfo_12d54e0 + 0x133) >> 2 & 1) != 0) &&
               (*(int *)(_UnityEngine_Object_TypeInfo_12d54e0 + 0xe0) == 0)) {
              native_sub_4327ec();
            }
            uVar11 = native_UnityEngine_Object__op_Implicit_8e1b98(uVar13,0);
            if ((uVar11 & 1) == 0) {
              if (*(long *)(lVar12 + 0x10) != 0) {
                uVar13 = native_UnityEngine_Transform__get_position_77169c
                                   (*(long *)(lVar12 + 0x10),0);
                if (((*(byte *)(_UnityEngine_Object_TypeInfo_12d54e0 + 0x133) >> 2 & 1) != 0) &&
                   (*(int *)(_UnityEngine_Object_TypeInfo_12d54e0 + 0xe0) == 0)) {
                  native_sub_4327ec();
                }
                uVar11 = native_UnityEngine_Object__op_Inequality_8d76fc(lVar10,0,0);
                if ((uVar11 & 1) != 0) {
                  if (lVar10 == 0) goto LAB_00559338;
                  native_UnityEngine_Transform__InverseTransformPoint_7729a0
                            (uVar13,uVar23,uVar24,lVar10,0);
                }
LAB_00559308:
                uVar15 = native_UnityEngine_Mathf__FloorToInt_8e506c
                                   (((fVar37 + (float)(int)uVar4) - (float)uVar23) + 0.5,0);
                *(undefined4 *)(lVar12 + 0x1c) = uVar15;
                return;
              }
            }
            else {
              plVar9 = *(long **)(lVar12 + 0x20);
              if ((plVar9 != (long *)0x0) &&
                 (lVar10 = (**(code **)(*plVar9 + 0x208))
                                     (plVar9,lVar10,*(undefined8 *)(*plVar9 + 0x210)), lVar10 != 0))
              {
                if (*(uint *)(lVar10 + 0x18) < 4) {
                  uVar13 = native_sub_43283c();
                    /* WARNING: Subroutine does not return */
                  native_sub_4327dc(uVar13,0);
                }
                uVar23 = native_UnityEngine_Mathf__Lerp_8e5224
                                   (*(undefined4 *)(lVar10 + 0x48),*(undefined4 *)(lVar10 + 0x30),
                                    *(undefined4 *)(lVar12 + 0x18),0);
                goto LAB_00559308;
              }
            }
LAB_00559338:
                    /* WARNING: Subroutine does not return */
            native_sub_432810();
          }
        }
      }
    }
  }
LAB_00807ccc:
                    /* WARNING: Subroutine does not return */
  native_sub_432810();
}



/* NGUIMath$$AdjustWidget @ 0x807510
 * void NGUIMath__AdjustWidget (UIWidget_o* w, float left, float bottom, float right, float top, int32_t minWidth, int32_t minHeight, int32_t maxWidth, int32_t maxHeight, const MethodInfo* method); */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* NGUIMath$$AdjustWidget
   void NGUIMath__AdjustWidget (UIWidget_o* w, float left, float bottom, float right, float top,
   int32_t minWidth, int32_t minHeight, int32_t maxWidth, int32_t maxHeight, const MethodInfo*
   method); */

void native_NGUIMath__AdjustWidget_807510
               (float param_1,ulong param_2,undefined8 param_3,undefined8 param_4,long *param_5,
               undefined4 param_6,undefined4 param_7,uint param_8,uint param_9)

{
  uint uVar1;
  uint uVar2;
  uint uVar3;
  uint uVar4;
  undefined4 uVar5;
  uint uVar6;
  uint uVar7;
  long *plVar8;
  long lVar9;
  ulong uVar10;
  long lVar11;
  undefined8 uVar12;
  float fVar13;
  undefined4 uVar14;
  float fVar15;
  float fVar16;
  float fVar17;
  float fVar18;
  float fVar19;
  float fVar20;
  float fVar21;
  ulong uVar22;
  ulong uVar23;
  float fVar24;
  float fVar25;
  ulong uVar26;
  ulong uVar27;
  ulong uVar28;
  ulong uVar29;
  ulong uVar30;
  ulong uVar31;
  float fVar32;
  undefined8 uVar34;
  float fVar35;
  float fVar36;
  float fVar37;
  float fVar38;
  undefined8 uVar33;
  
  uVar10 = param_2;
  uVar12 = param_3;
  uVar34 = param_4;
  if ((bRam000000000134047a & 1) == 0) {
    native_sub_43273c(&UnityEngine_Object_TypeInfo_12d54e0);
    bRam000000000134047a = 1;
  }
  if (param_5 == (long *)0x0) goto LAB_00807ccc;
  fVar13 = (float)native_UIWidget__get_pivotOffset_944f8c(param_5,0);
  fVar24 = (float)uVar10;
  uVar22 = uVar10;
  lVar9 = native_UIRect__get_cachedTransform_c27c58(param_5,0);
  if (lVar9 == 0) goto LAB_00807ccc;
  uVar14 = native_UnityEngine_Transform__get_localRotation_771c84(lVar9,0);
  uVar1 = native_UnityEngine_Mathf__FloorToInt_8e506c(param_1 + 0.5,0);
  uVar2 = native_UnityEngine_Mathf__FloorToInt_8e506c((float)param_2 + 0.5,0);
  uVar3 = native_UnityEngine_Mathf__FloorToInt_8e506c((float)param_3 + 0.5,0);
  uVar4 = native_UnityEngine_Mathf__FloorToInt_8e506c((float)param_4 + 0.5,0);
  if ((fVar13 == 0.5) && ((uVar1 == 0 || (uVar3 == 0)))) {
    uVar1 = uVar1 & 0xfffffffe;
    uVar3 = uVar3 & 0xfffffffe;
  }
  if ((fVar24 == 0.5) && ((uVar2 == 0 || (uVar4 == 0)))) {
    uVar2 = uVar2 & 0xfffffffe;
    uVar4 = uVar4 & 0xfffffffe;
  }
  fVar38 = (float)(int)uVar1;
  fVar36 = (float)(int)uVar4;
  uVar23 = uVar22;
  fVar15 = (float)native_UnityEngine_Quaternion__op_Multiply_7629c0
                            (uVar14,uVar22,uVar12,uVar34,fVar38,fVar36,0,0);
  fVar37 = (float)(int)uVar3;
  uVar26 = uVar22;
  fVar16 = (float)native_UnityEngine_Quaternion__op_Multiply_7629c0
                            (uVar14,uVar22,uVar12,uVar34,fVar37,fVar36,0,0);
  fVar35 = (float)(int)uVar2;
  uVar31 = uVar22;
  fVar17 = (float)native_UnityEngine_Quaternion__op_Multiply_7629c0
                            (uVar14,uVar22,uVar12,uVar34,fVar38,fVar35,0,0);
  uVar27 = uVar22;
  fVar18 = (float)native_UnityEngine_Quaternion__op_Multiply_7629c0
                            (uVar14,uVar22,uVar12,uVar34,fVar37,fVar35,0,0);
  uVar28 = uVar22;
  fVar38 = (float)native_UnityEngine_Quaternion__op_Multiply_7629c0
                            (uVar14,uVar22,uVar12,uVar34,fVar38,0,0,0);
  uVar29 = uVar22;
  fVar19 = (float)native_UnityEngine_Quaternion__op_Multiply_7629c0
                            (uVar14,uVar22,uVar12,uVar34,fVar37,0,0,0);
  fVar25 = (float)uVar29;
  uVar29 = uVar22;
  fVar20 = (float)native_UnityEngine_Quaternion__op_Multiply_7629c0
                            (uVar14,uVar22,uVar12,uVar34,0,fVar36,0,0);
  fVar36 = (float)uVar29;
  uVar29 = uVar22;
  uVar33 = uVar12;
  fVar21 = (float)native_UnityEngine_Quaternion__op_Multiply_7629c0
                            (uVar14,uVar22,uVar12,uVar34,0,fVar35,0,0);
  fVar32 = (float)uVar33;
  uVar30 = uVar29;
  fVar37 = (float)native_UnityEngine_Vector3__get_zero_776668(0);
  fVar35 = fVar32;
  if ((fVar13 == 0.0) && (fVar24 == 1.0)) {
    uVar30 = uVar23 & 0xffffffff;
    fVar37 = fVar15;
  }
  else if ((fVar13 == 1.0) && (fVar24 == 0.0)) {
    uVar30 = uVar27 & 0xffffffff;
    fVar37 = fVar18;
  }
  else if ((fVar13 == 0.0) && (fVar24 == 0.0)) {
    uVar30 = uVar31 & 0xffffffff;
    fVar37 = fVar17;
  }
  else if ((fVar13 == 1.0) && (fVar24 == 1.0)) {
    uVar30 = uVar26 & 0xffffffff;
    fVar37 = fVar16;
  }
  else {
    fVar15 = (float)uVar29;
    fVar16 = (float)uVar28;
    if ((fVar13 == 0.0) && (fVar24 == 0.5)) {
      fVar37 = fVar38 + (fVar20 + fVar21) * 0.5;
      uVar30 = (ulong)(uint)(fVar16 + (fVar36 + fVar15) * 0.5);
      fVar35 = fVar38;
    }
    else if ((fVar13 == 1.0) && (fVar24 == 0.5)) {
      fVar37 = fVar19 + (fVar20 + fVar21) * 0.5;
      fVar15 = fVar36 + fVar15;
      fVar36 = fVar25;
LAB_008078c0:
      uVar30 = (ulong)(uint)(fVar36 + fVar15 * 0.5);
      fVar35 = fVar36;
    }
    else if (fVar13 == 0.5) {
      if (fVar24 == 1.0) {
        fVar37 = fVar20 + (fVar38 + fVar19) * 0.5;
        fVar15 = fVar16 + fVar25;
        goto LAB_008078c0;
      }
      if (fVar24 == 0.0) {
        fVar37 = fVar21 + (fVar38 + fVar19) * 0.5;
        uVar30 = (ulong)(uint)(fVar15 + (fVar16 + fVar25) * 0.5);
      }
      else if (fVar24 == 0.5) {
        fVar37 = (fVar38 + fVar19 + fVar20 + fVar21) * 0.5;
        uVar30 = (ulong)(uint)((fVar25 + fVar16 + fVar36 + fVar15) * 0.5);
        fVar35 = fVar25;
      }
    }
  }
  fVar36 = (float)uVar30;
  uVar5 = (**(code **)(*param_5 + 0x3b8))(param_5,*(undefined8 *)(*param_5 + 0x3c0));
  uVar6 = native_UnityEngine_Mathf__Max_8e4cd0(param_6,uVar5,0);
  uVar5 = (**(code **)(*param_5 + 0x3c8))(param_5,*(undefined8 *)(*param_5 + 0x3d0));
  uVar7 = native_UnityEngine_Mathf__Max_8e4cd0(param_7,uVar5,0);
  uVar3 = (uVar3 - uVar1) + *(int *)((long)param_5 + 0xa4);
  uVar4 = (uVar4 - uVar2) + (int)param_5[0x15];
  uVar23 = native_UnityEngine_Vector3__get_zero_776668(0);
  if ((int)uVar3 <= (int)param_8) {
    param_8 = uVar3;
  }
  if ((int)uVar6 <= (int)uVar3) {
    uVar6 = param_8;
  }
  uVar26 = uVar30;
  fVar15 = fVar35;
  if (uVar6 - uVar3 != 0) {
    uVar26 = (ulong)(uint)(float)(int)(uVar6 - uVar3);
    uVar3 = uVar6;
    fVar15 = fVar13;
    if (uVar1 == 0) {
      fVar16 = (float)native_UnityEngine_Mathf__Lerp_8e5224(0,uVar26,fVar13,0);
      uVar23 = (ulong)(uint)((float)uVar23 + fVar16);
    }
    else {
      uVar31 = 0;
      fVar16 = (float)native_UnityEngine_Mathf__Lerp_8e5224(uVar26,0,fVar13,0);
      uVar23 = (ulong)(uint)((float)uVar23 - fVar16);
      uVar26 = uVar31;
    }
  }
  fVar16 = (float)uVar26;
  if ((int)uVar4 <= (int)param_9) {
    param_9 = uVar4;
  }
  if ((int)uVar7 <= (int)uVar4) {
    uVar7 = param_9;
  }
  if (uVar7 - uVar4 != 0) {
    fVar17 = (float)(int)(uVar7 - uVar4);
    uVar4 = uVar7;
    fVar15 = fVar24;
    if (uVar2 == 0) {
      fVar16 = fVar17;
      fVar17 = (float)native_UnityEngine_Mathf__Lerp_8e5224(0,fVar17,uVar10 & 0xffffffff,0);
      uVar30 = (ulong)(uint)((float)uVar30 + fVar17);
    }
    else {
      fVar16 = 0.0;
      fVar17 = (float)native_UnityEngine_Mathf__Lerp_8e5224(fVar17,0,uVar10 & 0xffffffff,0);
      uVar30 = (ulong)(uint)((float)uVar30 - fVar17);
    }
  }
  uVar1 = uVar3 & 0xfffffffe;
  if (fVar13 != 0.5) {
    uVar1 = uVar3;
  }
  uVar3 = uVar4 & 0xfffffffe;
  if (fVar24 != 0.5) {
    uVar3 = uVar4;
  }
  fVar17 = (float)native_UnityEngine_Transform__get_localPosition_7717f4(lVar9,0);
  fVar35 = (float)native_UnityEngine_Quaternion__op_Multiply_7629c0
                            (uVar14,uVar22,uVar12,uVar34,uVar23,uVar30,fVar35,0);
  fVar35 = fVar37 + fVar17 + fVar35;
  fVar36 = fVar36 + fVar16 + (float)uVar22;
  uVar22 = (ulong)(uint)fVar36;
  uVar23 = (ulong)(uint)(fVar32 + fVar15 + (float)uVar12);
  native_UnityEngine_Transform__set_localPosition_7718a4(fVar35,uVar22,uVar23,lVar9,0);
  native_UIWidget__SetDimensions_94987c(param_5,uVar1,uVar3,0);
  uVar10 = native_UIRect__get_isAnchored_c2d8cc(param_5,0);
  if ((uVar10 & 1) == 0) {
    return;
  }
  lVar9 = native_UnityEngine_Transform__get_parent_765eb0(lVar9,0);
  if (param_5[3] != 0) {
    uVar12 = *(undefined8 *)(param_5[3] + 0x10);
    if (((*(byte *)(_UnityEngine_Object_TypeInfo_12d54e0 + 0x133) >> 2 & 1) != 0) &&
       (*(int *)(_UnityEngine_Object_TypeInfo_12d54e0 + 0xe0) == 0)) {
      native_sub_4327ec();
    }
    fVar35 = fVar35 - fVar13 * (float)(int)uVar1;
    uVar10 = native_UnityEngine_Object__op_Implicit_8e1b98(uVar12,0);
    if ((uVar10 & 1) != 0) {
      if (param_5[3] == 0) goto LAB_00807ccc;
      native_UIRect_AnchorPoint__SetHorizontal_559078(fVar35,param_5[3],lVar9,0);
    }
    if (param_5[4] != 0) {
      uVar12 = *(undefined8 *)(param_5[4] + 0x10);
      if (((*(byte *)(_UnityEngine_Object_TypeInfo_12d54e0 + 0x133) >> 2 & 1) != 0) &&
         (*(int *)(_UnityEngine_Object_TypeInfo_12d54e0 + 0xe0) == 0)) {
        native_sub_4327ec();
      }
      uVar10 = native_UnityEngine_Object__op_Implicit_8e1b98(uVar12,0);
      if ((uVar10 & 1) != 0) {
        if (param_5[4] == 0) goto LAB_00807ccc;
        native_UIRect_AnchorPoint__SetHorizontal_559078
                  (fVar35 + (float)(int)uVar1,param_5[4],lVar9,0);
      }
      if (param_5[5] != 0) {
        uVar12 = *(undefined8 *)(param_5[5] + 0x10);
        if (((*(byte *)(_UnityEngine_Object_TypeInfo_12d54e0 + 0x133) >> 2 & 1) != 0) &&
           (*(int *)(_UnityEngine_Object_TypeInfo_12d54e0 + 0xe0) == 0)) {
          native_sub_4327ec();
        }
        fVar36 = fVar36 - fVar24 * (float)(int)uVar3;
        uVar10 = native_UnityEngine_Object__op_Implicit_8e1b98(uVar12,0);
        if ((uVar10 & 1) != 0) {
          if (param_5[5] == 0) goto LAB_00807ccc;
          native_UIRect_AnchorPoint__SetVertical_5591e0(fVar36,param_5[5],lVar9,0);
        }
        if (param_5[6] != 0) {
          uVar12 = *(undefined8 *)(param_5[6] + 0x10);
          if (((*(byte *)(_UnityEngine_Object_TypeInfo_12d54e0 + 0x133) >> 2 & 1) != 0) &&
             (*(int *)(_UnityEngine_Object_TypeInfo_12d54e0 + 0xe0) == 0)) {
            native_sub_4327ec();
          }
          uVar10 = native_UnityEngine_Object__op_Implicit_8e1b98(uVar12,0);
          if ((uVar10 & 1) == 0) {
            return;
          }
          lVar11 = param_5[6];
          if (lVar11 != 0) {
            if ((bRam000000000133ea04 & 1) == 0) {
              native_sub_43273c(&UnityEngine_Object_TypeInfo_12d54e0,lVar9,0);
              bRam000000000133ea04 = 1;
            }
            uVar12 = *(undefined8 *)(lVar11 + 0x20);
            if (((*(byte *)(_UnityEngine_Object_TypeInfo_12d54e0 + 0x133) >> 2 & 1) != 0) &&
               (*(int *)(_UnityEngine_Object_TypeInfo_12d54e0 + 0xe0) == 0)) {
              native_sub_4327ec();
            }
            uVar10 = native_UnityEngine_Object__op_Implicit_8e1b98(uVar12,0);
            if ((uVar10 & 1) == 0) {
              if (*(long *)(lVar11 + 0x10) != 0) {
                uVar12 = native_UnityEngine_Transform__get_position_77169c
                                   (*(long *)(lVar11 + 0x10),0);
                if (((*(byte *)(_UnityEngine_Object_TypeInfo_12d54e0 + 0x133) >> 2 & 1) != 0) &&
                   (*(int *)(_UnityEngine_Object_TypeInfo_12d54e0 + 0xe0) == 0)) {
                  native_sub_4327ec();
                }
                uVar10 = native_UnityEngine_Object__op_Inequality_8d76fc(lVar9,0,0);
                if ((uVar10 & 1) != 0) {
                  if (lVar9 == 0) goto LAB_00559338;
                  native_UnityEngine_Transform__InverseTransformPoint_7729a0
                            (uVar12,uVar22,uVar23,lVar9,0);
                }
LAB_00559308:
                uVar14 = native_UnityEngine_Mathf__FloorToInt_8e506c
                                   (((fVar36 + (float)(int)uVar3) - (float)uVar22) + 0.5,0);
                *(undefined4 *)(lVar11 + 0x1c) = uVar14;
                return;
              }
            }
            else {
              plVar8 = *(long **)(lVar11 + 0x20);
              if ((plVar8 != (long *)0x0) &&
                 (lVar9 = (**(code **)(*plVar8 + 0x208))
                                    (plVar8,lVar9,*(undefined8 *)(*plVar8 + 0x210)), lVar9 != 0)) {
                if (*(uint *)(lVar9 + 0x18) < 4) {
                  uVar12 = native_sub_43283c();
                    /* WARNING: Subroutine does not return */
                  native_sub_4327dc(uVar12,0);
                }
                uVar22 = native_UnityEngine_Mathf__Lerp_8e5224
                                   (*(undefined4 *)(lVar9 + 0x48),*(undefined4 *)(lVar9 + 0x30),
                                    *(undefined4 *)(lVar11 + 0x18),0);
                goto LAB_00559308;
              }
            }
LAB_00559338:
                    /* WARNING: Subroutine does not return */
            native_sub_432810();
          }
        }
      }
    }
  }
LAB_00807ccc:
                    /* WARNING: Subroutine does not return */
  native_sub_432810();
}



/* NGUIMath$$AdjustByDPI @ 0x807d78
 * int32_t NGUIMath__AdjustByDPI (float height, const MethodInfo* method); */

/* NGUIMath$$AdjustByDPI
   int32_t NGUIMath__AdjustByDPI (float height, const MethodInfo* method); */

int native_NGUIMath__AdjustByDPI_807d78(float param_1)

{
  int iVar1;
  uint uVar2;
  float fVar3;
  
  fVar3 = (float)native_UnityEngine_Screen__get_dpi_76a64c(0);
  iVar1 = native_UnityEngine_Application__get_platform_8d6250(0);
  if (fVar3 == 0.0) {
    if ((iVar1 == 0xb) || (iVar1 == 8)) {
      fVar3 = 160.0;
    }
    else {
      fVar3 = 96.0;
    }
  }
  uVar2 = native_UnityEngine_Mathf__RoundToInt_8e50f0((96.0 / fVar3) * param_1,0);
  return (uVar2 & 1) + uVar2;
}



/* NGUIMath$$ScreenToPixels @ 0x807df4
 * UnityEngine_Vector2_o NGUIMath__ScreenToPixels (UnityEngine_Vector2_o pos, UnityEngine_Transform_o* relativeTo, const MethodInfo* method); */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* NGUIMath$$ScreenToPixels
   UnityEngine_Vector2_o NGUIMath__ScreenToPixels (UnityEngine_Vector2_o pos,
   UnityEngine_Transform_o* relativeTo, const MethodInfo* method); */

undefined1  [16]
native_NGUIMath__ScreenToPixels_807df4(undefined1 param_1 [16],undefined8 param_2,long param_3)

{
  undefined4 uVar1;
  long lVar2;
  ulong uVar3;
  undefined8 uVar4;
  undefined1 auVar5 [16];
  undefined8 uVar6;
  undefined4 uStack_34;
  
  uVar6 = param_1._8_8_;
  if ((bRam000000000134047b & 1) == 0) {
    native_sub_43273c(&UnityEngine_Debug_TypeInfo_12d4338);
    native_sub_43273c(&NGUITools_TypeInfo_12d53c8);
    native_sub_43273c(&UnityEngine_Object_TypeInfo_12d54e0);
    native_sub_43273c(&StringLiteral_No_camera_found_for_layer__12efd90);
    bRam000000000134047b = 1;
  }
  uStack_34 = 0;
  if ((param_3 != 0) &&
     (lVar2 = native_UnityEngine_Component__get_gameObject_8da66c(param_3,0), lVar2 != 0)) {
    uVar1 = native_UnityEngine_GameObject__get_layer_8de608(lVar2,0);
    uStack_34 = uVar1;
    if (((*(byte *)(_NGUITools_TypeInfo_12d53c8 + 0x133) >> 2 & 1) != 0) &&
       (*(int *)(_NGUITools_TypeInfo_12d53c8 + 0xe0) == 0)) {
      native_sub_4327ec(_NGUITools_TypeInfo_12d53c8);
    }
    lVar2 = native_NGUITools__FindCameraForLayer_72d2e8(uVar1,0);
    if (((*(byte *)(_UnityEngine_Object_TypeInfo_12d54e0 + 0x133) >> 2 & 1) != 0) &&
       (*(int *)(_UnityEngine_Object_TypeInfo_12d54e0 + 0xe0) == 0)) {
      native_sub_4327ec(_UnityEngine_Object_TypeInfo_12d54e0);
    }
    uVar3 = native_UnityEngine_Object__op_Equality_8e9a3c(lVar2,0,0);
    if ((uVar3 & 1) == 0) {
      if (lVar2 == 0) goto LAB_00807f98;
      native_UnityEngine_Camera__ScreenToWorldPoint_8d9170(param_1._0_8_,param_2,0,lVar2,0);
      auVar5 = native_UnityEngine_Transform__InverseTransformPoint_7729a0(param_3,0);
    }
    else {
      uVar4 = native_System_Int32__ToString_83c60c(&uStack_34,0);
      uVar4 = native_System_String__Concat_afbd68
                        (_StringLiteral_No_camera_found_for_layer__12efd90,uVar4,0);
      if (((*(byte *)(_UnityEngine_Debug_TypeInfo_12d4338 + 0x133) >> 2 & 1) != 0) &&
         (*(int *)(_UnityEngine_Debug_TypeInfo_12d4338 + 0xe0) == 0)) {
        native_sub_4327ec(_UnityEngine_Debug_TypeInfo_12d4338);
      }
      native_UnityEngine_Debug__LogWarning_8dca9c(uVar4,0);
      auVar5._8_8_ = uVar6;
      auVar5._0_8_ = param_1._0_8_;
    }
    return auVar5;
  }
LAB_00807f98:
                    /* WARNING: Subroutine does not return */
  native_sub_432810();
}



/* NGUIMath$$ScreenToParentPixels @ 0x807f9c
 * UnityEngine_Vector2_o NGUIMath__ScreenToParentPixels (UnityEngine_Vector2_o pos, UnityEngine_Transform_o* relativeTo, const MethodInfo* method); */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* NGUIMath$$ScreenToParentPixels
   UnityEngine_Vector2_o NGUIMath__ScreenToParentPixels (UnityEngine_Vector2_o pos,
   UnityEngine_Transform_o* relativeTo, const MethodInfo* method); */

undefined1  [16]
native_NGUIMath__ScreenToParentPixels_807f9c
          (undefined1 param_1 [16],undefined8 param_2,long param_3)

{
  uint uVar1;
  long lVar2;
  undefined8 uVar3;
  ulong uVar4;
  undefined1 auVar5 [16];
  undefined1 auVar6 [16];
  undefined8 uVar7;
  uint uStack_44;
  
  uVar7 = param_1._8_8_;
  if ((bRam000000000134047c & 1) == 0) {
    native_sub_43273c(&UnityEngine_Debug_TypeInfo_12d4338);
    native_sub_43273c(&NGUITools_TypeInfo_12d53c8);
    native_sub_43273c(&UnityEngine_Object_TypeInfo_12d54e0);
    native_sub_43273c(&StringLiteral_No_camera_found_for_layer__12efd90);
    bRam000000000134047c = 1;
  }
  uStack_44 = 0;
  if ((param_3 != 0) &&
     (lVar2 = native_UnityEngine_Component__get_gameObject_8da66c(param_3,0), lVar2 != 0)) {
    uVar1 = native_UnityEngine_GameObject__get_layer_8de608(lVar2,0);
    uStack_44 = uVar1;
    uVar3 = native_UnityEngine_Transform__get_parent_765eb0(param_3,0);
    if (((*(byte *)(_UnityEngine_Object_TypeInfo_12d54e0 + 0x133) >> 2 & 1) != 0) &&
       (*(int *)(_UnityEngine_Object_TypeInfo_12d54e0 + 0xe0) == 0)) {
      native_sub_4327ec(_UnityEngine_Object_TypeInfo_12d54e0);
    }
    uVar4 = native_UnityEngine_Object__op_Inequality_8d76fc(uVar3,0,0);
    if ((uVar4 & 1) != 0) {
      param_3 = native_UnityEngine_Transform__get_parent_765eb0(param_3,0);
    }
    if (((*(byte *)(_NGUITools_TypeInfo_12d53c8 + 0x133) >> 2 & 1) != 0) &&
       (*(int *)(_NGUITools_TypeInfo_12d53c8 + 0xe0) == 0)) {
      native_sub_4327ec();
    }
    lVar2 = native_NGUITools__FindCameraForLayer_72d2e8(uVar1,0);
    if (((*(byte *)(_UnityEngine_Object_TypeInfo_12d54e0 + 0x133) >> 2 & 1) != 0) &&
       (*(int *)(_UnityEngine_Object_TypeInfo_12d54e0 + 0xe0) == 0)) {
      native_sub_4327ec(_UnityEngine_Object_TypeInfo_12d54e0);
    }
    uVar4 = native_UnityEngine_Object__op_Equality_8e9a3c(lVar2,0,0);
    if ((uVar4 & 1) == 0) {
      if (lVar2 == 0) goto LAB_008081dc;
      uVar3 = 0;
      auVar5 = native_UnityEngine_Camera__ScreenToWorldPoint_8d9170(param_1._0_8_,param_2,0,lVar2,0)
      ;
      uVar7 = auVar5._8_8_;
      if (((*(byte *)(_UnityEngine_Object_TypeInfo_12d54e0 + 0x133) >> 2 & 1) != 0) &&
         (*(int *)(_UnityEngine_Object_TypeInfo_12d54e0 + 0xe0) == 0)) {
        native_sub_4327ec();
      }
      uVar4 = native_UnityEngine_Object__op_Inequality_8d76fc(param_3,0,0);
      auVar6._8_8_ = uVar7;
      auVar6._0_8_ = auVar5._0_8_;
      if ((uVar4 & 1) != 0) {
        if (param_3 == 0) goto LAB_008081dc;
        auVar6 = native_UnityEngine_Transform__InverseTransformPoint_7729a0
                           (auVar5._0_8_,param_2,uVar3,param_3,0);
      }
    }
    else {
      uVar3 = native_System_Int32__ToString_83c60c(&uStack_44,0);
      uVar3 = native_System_String__Concat_afbd68
                        (_StringLiteral_No_camera_found_for_layer__12efd90,uVar3,0);
      if (((*(byte *)(_UnityEngine_Debug_TypeInfo_12d4338 + 0x133) >> 2 & 1) != 0) &&
         (*(int *)(_UnityEngine_Debug_TypeInfo_12d4338 + 0xe0) == 0)) {
        native_sub_4327ec(_UnityEngine_Debug_TypeInfo_12d4338);
      }
      native_UnityEngine_Debug__LogWarning_8dca9c(uVar3,0);
      auVar6._8_8_ = uVar7;
      auVar6._0_8_ = param_1._0_8_;
    }
    return auVar6;
  }
LAB_008081dc:
                    /* WARNING: Subroutine does not return */
  native_sub_432810();
}



/* NGUIMath$$WorldToLocalPoint @ 0x8081e0
 * UnityEngine_Vector3_o NGUIMath__WorldToLocalPoint (UnityEngine_Vector3_o worldPos, UnityEngine_Camera_o* worldCam, UnityEngine_Camera_o* uiCam, UnityEngine_Transform_o* relativeTo, const MethodInfo* method); */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* NGUIMath$$WorldToLocalPoint
   UnityEngine_Vector3_o NGUIMath__WorldToLocalPoint (UnityEngine_Vector3_o worldPos,
   UnityEngine_Camera_o* worldCam, UnityEngine_Camera_o* uiCam, UnityEngine_Transform_o* relativeTo,
   const MethodInfo* method); */

undefined1  [16]
native_NGUIMath__WorldToLocalPoint_8081e0
          (undefined1 param_1 [16],undefined8 param_2,undefined8 param_3,long param_4,long param_5,
          long param_6)

{
  ulong uVar1;
  long lVar2;
  undefined1 auVar3 [16];
  undefined1 auVar4 [16];
  undefined8 uVar5;
  undefined8 uVar6;
  
  uVar5 = param_1._8_8_;
  if ((bRam000000000134047d & 1) == 0) {
    native_sub_43273c(&UnityEngine_Object_TypeInfo_12d54e0);
    bRam000000000134047d = 1;
  }
  if (((*(byte *)(_UnityEngine_Object_TypeInfo_12d54e0 + 0x133) >> 2 & 1) != 0) &&
     (*(int *)(_UnityEngine_Object_TypeInfo_12d54e0 + 0xe0) == 0)) {
    native_sub_4327ec();
  }
  uVar1 = native_UnityEngine_Object__op_Inequality_8d76fc(param_4,param_5,0);
  auVar3._8_8_ = uVar5;
  auVar3._0_8_ = param_1._0_8_;
  if ((uVar1 & 1) != 0) {
    if ((param_4 == 0) ||
       (native_UnityEngine_Camera__WorldToViewportPoint_8d9160
                  (param_1._0_8_,param_2,param_3,param_4,0), param_5 == 0)) goto LAB_00808358;
    auVar3 = native_UnityEngine_Camera__ViewportToWorldPoint_8d9168(param_5,0);
  }
  uVar6 = auVar3._8_8_;
  uVar5 = auVar3._0_8_;
  if (((*(byte *)(_UnityEngine_Object_TypeInfo_12d54e0 + 0x133) >> 2 & 1) != 0) &&
     (*(int *)(_UnityEngine_Object_TypeInfo_12d54e0 + 0xe0) == 0)) {
    native_sub_4327ec();
  }
  uVar1 = native_UnityEngine_Object__op_Equality_8e9a3c(param_6,0,0);
  auVar4._8_8_ = uVar6;
  auVar4._0_8_ = uVar5;
  if ((uVar1 & 1) == 0) {
    if (param_6 == 0) {
LAB_00808358:
                    /* WARNING: Subroutine does not return */
      native_sub_432810();
    }
    lVar2 = native_UnityEngine_Transform__get_parent_765eb0(param_6,0);
    if (((*(byte *)(_UnityEngine_Object_TypeInfo_12d54e0 + 0x133) >> 2 & 1) != 0) &&
       (*(int *)(_UnityEngine_Object_TypeInfo_12d54e0 + 0xe0) == 0)) {
      native_sub_4327ec(_UnityEngine_Object_TypeInfo_12d54e0);
    }
    uVar1 = native_UnityEngine_Object__op_Equality_8e9a3c(lVar2,0,0);
    auVar4._8_8_ = uVar6;
    if ((uVar1 & 1) == 0) {
      if (lVar2 == 0) goto LAB_00808358;
      auVar4 = native_UnityEngine_Transform__InverseTransformPoint_7729a0
                         (uVar5,param_2,param_3,lVar2,0);
    }
  }
  return auVar4;
}



/* NGUIMath$$OverlayPosition @ 0x80835c
 * void NGUIMath__OverlayPosition (UnityEngine_Transform_o* trans, UnityEngine_Vector3_o worldPos, UnityEngine_Camera_o* worldCam, UnityEngine_Camera_o* myCam, const MethodInfo* method); */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* NGUIMath$$OverlayPosition
   void NGUIMath__OverlayPosition (UnityEngine_Transform_o* trans, UnityEngine_Vector3_o worldPos,
   UnityEngine_Camera_o* worldCam, UnityEngine_Camera_o* myCam, const MethodInfo* method); */

void native_NGUIMath__OverlayPosition_80835c
               (undefined8 param_1,long param_2,long param_3,long param_4)

{
  ulong uVar1;
  long lVar2;
  
  if ((bRam000000000134047e & 1) == 0) {
    native_sub_43273c(&UnityEngine_Object_TypeInfo_12d54e0);
    bRam000000000134047e = 1;
  }
  if (((*(byte *)(_UnityEngine_Object_TypeInfo_12d54e0 + 0x133) >> 2 & 1) != 0) &&
     (*(int *)(_UnityEngine_Object_TypeInfo_12d54e0 + 0xe0) == 0)) {
    native_sub_4327ec();
  }
  uVar1 = native_UnityEngine_Object__op_Inequality_8d76fc(param_3,param_4,0);
  if ((uVar1 & 1) != 0) {
    if ((param_3 == 0) ||
       (native_UnityEngine_Camera__WorldToViewportPoint_8d9160(param_1,param_3,0), param_4 == 0))
    goto LAB_008084b0;
    param_1 = native_UnityEngine_Camera__ViewportToWorldPoint_8d9168(param_4,0);
  }
  if (param_2 != 0) {
    lVar2 = native_UnityEngine_Transform__get_parent_765eb0(param_2,0);
    if (((*(byte *)(_UnityEngine_Object_TypeInfo_12d54e0 + 0x133) >> 2 & 1) != 0) &&
       (*(int *)(_UnityEngine_Object_TypeInfo_12d54e0 + 0xe0) == 0)) {
      native_sub_4327ec(_UnityEngine_Object_TypeInfo_12d54e0);
    }
    uVar1 = native_UnityEngine_Object__op_Inequality_8d76fc(lVar2,0,0);
    if ((uVar1 & 1) != 0) {
      if (lVar2 == 0) goto LAB_008084b0;
      native_UnityEngine_Transform__InverseTransformPoint_7729a0(param_1,lVar2,0);
    }
    if (pcRam000000000133fee8 == (code *)0x0) {
      pcRam000000000133fee8 = (code *)native_sub_4326f0(&UNK_00e2ada3,0);
    }
    (*pcRam000000000133fee8)(param_2,&stack0xffffffffffffffd0);
    return;
  }
LAB_008084b0:
                    /* WARNING: Subroutine does not return */
  native_sub_432810();
}



/* NGUIMath$$OverlayPosition @ 0x8084b4
 * void NGUIMath__OverlayPosition (UnityEngine_Transform_o* trans, UnityEngine_Vector3_o worldPos, UnityEngine_Camera_o* worldCam, const MethodInfo* method); */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* NGUIMath$$OverlayPosition
   void NGUIMath__OverlayPosition (UnityEngine_Transform_o* trans, UnityEngine_Vector3_o worldPos,
   UnityEngine_Camera_o* worldCam, const MethodInfo* method); */

void native_NGUIMath__OverlayPosition_8084b4(undefined8 param_1,long param_2,long param_3)

{
  undefined4 uVar1;
  long lVar2;
  ulong uVar3;
  
  if ((bRam000000000134047f & 1) == 0) {
    native_sub_43273c(&NGUIMath_TypeInfo_12d53b8);
    native_sub_43273c(&NGUITools_TypeInfo_12d53c8);
    native_sub_43273c(&UnityEngine_Object_TypeInfo_12d54e0);
    bRam000000000134047f = 1;
  }
  if ((param_2 == 0) ||
     (lVar2 = native_UnityEngine_Component__get_gameObject_8da66c(param_2,0), lVar2 == 0)) {
                    /* WARNING: Subroutine does not return */
    native_sub_432810();
  }
  uVar1 = native_UnityEngine_GameObject__get_layer_8de608(lVar2,0);
  if (((*(byte *)(_NGUITools_TypeInfo_12d53c8 + 0x133) >> 2 & 1) != 0) &&
     (*(int *)(_NGUITools_TypeInfo_12d53c8 + 0xe0) == 0)) {
    native_sub_4327ec(_NGUITools_TypeInfo_12d53c8);
  }
  lVar2 = native_NGUITools__FindCameraForLayer_72d2e8(uVar1,0);
  if (((*(byte *)(_UnityEngine_Object_TypeInfo_12d54e0 + 0x133) >> 2 & 1) != 0) &&
     (*(int *)(_UnityEngine_Object_TypeInfo_12d54e0 + 0xe0) == 0)) {
    native_sub_4327ec(_UnityEngine_Object_TypeInfo_12d54e0);
  }
  uVar3 = native_UnityEngine_Object__op_Inequality_8d76fc(lVar2,0,0);
  if ((uVar3 & 1) == 0) {
    return;
  }
  if (((*(byte *)(_NGUIMath_TypeInfo_12d53b8 + 0x133) >> 2 & 1) != 0) &&
     (*(int *)(_NGUIMath_TypeInfo_12d53b8 + 0xe0) == 0)) {
    native_sub_4327ec();
  }
  if ((bRam000000000134047e & 1) == 0) {
    native_sub_43273c(&UnityEngine_Object_TypeInfo_12d54e0);
    bRam000000000134047e = 1;
  }
  if (((*(byte *)(_UnityEngine_Object_TypeInfo_12d54e0 + 0x133) >> 2 & 1) != 0) &&
     (*(int *)(_UnityEngine_Object_TypeInfo_12d54e0 + 0xe0) == 0)) {
    native_sub_4327ec();
  }
  uVar3 = native_UnityEngine_Object__op_Inequality_8d76fc(param_3,lVar2,0);
  if ((uVar3 & 1) != 0) {
    if ((param_3 == 0) ||
       (native_UnityEngine_Camera__WorldToViewportPoint_8d9160(param_1,param_3,0), lVar2 == 0))
    goto LAB_008084b0;
    param_1 = native_UnityEngine_Camera__ViewportToWorldPoint_8d9168(lVar2,0);
  }
  if (param_2 != 0) {
    lVar2 = native_UnityEngine_Transform__get_parent_765eb0(param_2,0);
    if (((*(byte *)(_UnityEngine_Object_TypeInfo_12d54e0 + 0x133) >> 2 & 1) != 0) &&
       (*(int *)(_UnityEngine_Object_TypeInfo_12d54e0 + 0xe0) == 0)) {
      native_sub_4327ec(_UnityEngine_Object_TypeInfo_12d54e0);
    }
    uVar3 = native_UnityEngine_Object__op_Inequality_8d76fc(lVar2,0,0);
    if ((uVar3 & 1) != 0) {
      if (lVar2 == 0) goto LAB_008084b0;
      native_UnityEngine_Transform__InverseTransformPoint_7729a0(param_1,lVar2,0);
    }
    if (pcRam000000000133fee8 == (code *)0x0) {
      pcRam000000000133fee8 = (code *)native_sub_4326f0(&UNK_00e2ada3,0);
    }
    (*pcRam000000000133fee8)(param_2,&stack0xffffffffffffffd0);
    return;
  }
LAB_008084b0:
                    /* WARNING: Subroutine does not return */
  native_sub_432810();
}



/* NGUIMath$$OverlayPosition @ 0x808610
 * void NGUIMath__OverlayPosition (UnityEngine_Transform_o* trans, UnityEngine_Transform_o* target, const MethodInfo* method); */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* NGUIMath$$OverlayPosition
   void NGUIMath__OverlayPosition (UnityEngine_Transform_o* trans, UnityEngine_Transform_o* target,
   const MethodInfo* method); */

void native_NGUIMath__OverlayPosition_808610(long param_1,long param_2)

{
  undefined4 uVar1;
  long lVar2;
  long lVar3;
  undefined8 uVar4;
  ulong uVar5;
  
  if ((bRam0000000001340480 & 1) == 0) {
    native_sub_43273c(&NGUIMath_TypeInfo_12d53b8);
    native_sub_43273c(&NGUITools_TypeInfo_12d53c8);
    native_sub_43273c(&UnityEngine_Object_TypeInfo_12d54e0);
    bRam0000000001340480 = 1;
  }
  if ((param_1 == 0) ||
     (lVar2 = native_UnityEngine_Component__get_gameObject_8da66c(param_1,0), lVar2 == 0)) {
LAB_008087d4:
                    /* WARNING: Subroutine does not return */
    native_sub_432810();
  }
  uVar1 = native_UnityEngine_GameObject__get_layer_8de608(lVar2,0);
  if (((*(byte *)(_NGUITools_TypeInfo_12d53c8 + 0x133) >> 2 & 1) != 0) &&
     (*(int *)(_NGUITools_TypeInfo_12d53c8 + 0xe0) == 0)) {
    native_sub_4327ec(_NGUITools_TypeInfo_12d53c8);
  }
  lVar2 = native_NGUITools__FindCameraForLayer_72d2e8(uVar1,0);
  if ((param_2 == 0) ||
     (lVar3 = native_UnityEngine_Component__get_gameObject_8da66c(param_2,0), lVar3 == 0))
  goto LAB_008087d4;
  uVar4 = native_UnityEngine_GameObject__get_layer_8de608(lVar3,0);
  lVar3 = native_NGUITools__FindCameraForLayer_72d2e8(uVar4,0);
  if (((*(byte *)(_UnityEngine_Object_TypeInfo_12d54e0 + 0x133) >> 2 & 1) != 0) &&
     (*(int *)(_UnityEngine_Object_TypeInfo_12d54e0 + 0xe0) == 0)) {
    native_sub_4327ec(_UnityEngine_Object_TypeInfo_12d54e0);
  }
  uVar5 = native_UnityEngine_Object__op_Inequality_8d76fc(lVar2,0,0);
  if ((uVar5 & 1) == 0) {
    return;
  }
  if (((*(byte *)(_UnityEngine_Object_TypeInfo_12d54e0 + 0x133) >> 2 & 1) != 0) &&
     (*(int *)(_UnityEngine_Object_TypeInfo_12d54e0 + 0xe0) == 0)) {
    native_sub_4327ec();
  }
  uVar5 = native_UnityEngine_Object__op_Inequality_8d76fc(lVar3,0,0);
  if ((uVar5 & 1) == 0) {
    return;
  }
  uVar4 = native_UnityEngine_Transform__get_position_77169c(param_2,0);
  if (((*(byte *)(_NGUIMath_TypeInfo_12d53b8 + 0x133) >> 2 & 1) != 0) &&
     (*(int *)(_NGUIMath_TypeInfo_12d53b8 + 0xe0) == 0)) {
    native_sub_4327ec();
  }
  if ((bRam000000000134047e & 1) == 0) {
    native_sub_43273c(&UnityEngine_Object_TypeInfo_12d54e0);
    bRam000000000134047e = 1;
  }
  if (((*(byte *)(_UnityEngine_Object_TypeInfo_12d54e0 + 0x133) >> 2 & 1) != 0) &&
     (*(int *)(_UnityEngine_Object_TypeInfo_12d54e0 + 0xe0) == 0)) {
    native_sub_4327ec();
  }
  uVar5 = native_UnityEngine_Object__op_Inequality_8d76fc(lVar3,lVar2,0);
  if ((uVar5 & 1) != 0) {
    if ((lVar3 == 0) ||
       (native_UnityEngine_Camera__WorldToViewportPoint_8d9160(uVar4,lVar3,0), lVar2 == 0))
    goto LAB_008084b0;
    uVar4 = native_UnityEngine_Camera__ViewportToWorldPoint_8d9168(lVar2,0);
  }
  if (param_1 == 0) {
LAB_008084b0:
                    /* WARNING: Subroutine does not return */
    native_sub_432810();
  }
  lVar2 = native_UnityEngine_Transform__get_parent_765eb0(param_1,0);
  if (((*(byte *)(_UnityEngine_Object_TypeInfo_12d54e0 + 0x133) >> 2 & 1) != 0) &&
     (*(int *)(_UnityEngine_Object_TypeInfo_12d54e0 + 0xe0) == 0)) {
    native_sub_4327ec(_UnityEngine_Object_TypeInfo_12d54e0);
  }
  uVar5 = native_UnityEngine_Object__op_Inequality_8d76fc(lVar2,0,0);
  if ((uVar5 & 1) != 0) {
    if (lVar2 == 0) goto LAB_008084b0;
    native_UnityEngine_Transform__InverseTransformPoint_7729a0(uVar4,lVar2,0);
  }
  if (pcRam000000000133fee8 == (code *)0x0) {
    pcRam000000000133fee8 = (code *)native_sub_4326f0(&UNK_00e2ada3,0);
  }
  (*pcRam000000000133fee8)(param_1,&stack0xffffffffffffffd0);
  return;
}



/* NGUIMath$$.cctor @ 0x8087d8
 * void NGUIMath___cctor (const MethodInfo* method); */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* NGUIMath$$.cctor
   void NGUIMath___cctor (const MethodInfo* method); */

void native_NGUIMath___cctor_8087d8(void)

{
  ulong *puVar1;
  char cVar2;
  bool bVar3;
  undefined8 uVar4;
  undefined8 *puVar5;
  
  if ((bRam0000000001340481 & 1) == 0) {
    native_sub_43273c(&Method_System_Collections_Generic_List_UIWidget___ctor___12dd410);
    native_sub_43273c(&System_Collections_Generic_List_UIWidget__TypeInfo_12d2c48);
    native_sub_43273c(&NGUIMath_TypeInfo_12d53b8);
    bRam0000000001340481 = 1;
  }
  uVar4 = native_sub_432808(_System_Collections_Generic_List_UIWidget__TypeInfo_12d2c48);
  native_System_Collections_Generic_List_XmlEventCache_XmlEvent______ctor_d3ff44
            (uVar4,_Method_System_Collections_Generic_List_UIWidget___ctor___12dd410);
  puVar5 = *(undefined8 **)(_NGUIMath_TypeInfo_12d53b8 + 0xb8);
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


