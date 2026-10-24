/* ARM64 IL2CPP native pseudocode from Ghidra.
 * Recovered implementation, not original C# source.
 * Function boundaries follow the IL2CPP method address table. */


/* UIAtlas.Sprite$$get_hasPadding @ 0x54f530
 * bool UIAtlas_Sprite__get_hasPadding (UIAtlas_Sprite_o* __this, const MethodInfo* method); */

/* UIAtlas.Sprite$$get_hasPadding
   bool UIAtlas_Sprite__get_hasPadding (UIAtlas_Sprite_o* __this, const MethodInfo* method); */

bool native_UIAtlas_Sprite__get_hasPadding_54f530(long param_1)

{
  if (((*(float *)(param_1 + 0x3c) == 0.0) && (*(float *)(param_1 + 0x40) == 0.0)) &&
     (*(float *)(param_1 + 0x44) == 0.0)) {
    return *(float *)(param_1 + 0x48) != 0.0;
  }
  return true;
}



/* UIAtlas.Sprite$$.ctor @ 0x54f56c
 * void UIAtlas_Sprite___ctor (UIAtlas_Sprite_o* __this, const MethodInfo* method); */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* UIAtlas.Sprite$$.ctor
   void UIAtlas_Sprite___ctor (UIAtlas_Sprite_o* __this, const MethodInfo* method); */

void native_UIAtlas_Sprite___ctor_54f56c(long param_1)

{
  undefined8 uStack_50;
  undefined8 uStack_48;
  undefined8 uStack_40;
  undefined8 uStack_38;
  
  if ((bRam000000000133e9e8 & 1) == 0) {
    native_sub_43273c(&StringLiteral_Unity_Bug_12f2bb8);
    bRam000000000133e9e8 = 1;
  }
  *(undefined8 *)(param_1 + 0x10) = _StringLiteral_Unity_Bug_12f2bb8;
  native_sub_4326e0();
  uStack_40 = 0;
  uStack_38 = 0;
  native_UnityEngine_Rect___ctor_7635c8(0,0,0x3f800000,0x3f800000,&uStack_40,0);
  *(undefined8 *)(param_1 + 0x20) = uStack_38;
  *(undefined8 *)(param_1 + 0x18) = uStack_40;
  uStack_50 = 0;
  uStack_48 = 0;
  native_UnityEngine_Rect___ctor_7635c8(0,0,0x3f800000,0x3f800000,&uStack_50,0);
  *(undefined8 *)(param_1 + 0x30) = uStack_48;
  *(undefined8 *)(param_1 + 0x28) = uStack_50;
  native_System_Object___ctor_ad2798(param_1,0);
  return;
}


