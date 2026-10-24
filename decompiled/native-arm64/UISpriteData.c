/* ARM64 IL2CPP native pseudocode from Ghidra.
 * Recovered implementation, not original C# source.
 * Function boundaries follow the IL2CPP method address table. */


/* UISpriteData$$get_hasBorder @ 0x940b38
 * bool UISpriteData__get_hasBorder (UISpriteData_o* __this, const MethodInfo* method); */

/* UISpriteData$$get_hasBorder
   bool UISpriteData__get_hasBorder (UISpriteData_o* __this, const MethodInfo* method); */

bool native_UISpriteData__get_hasBorder_940b38(long param_1)

{
  return ((*(int *)(param_1 + 0x2c) != 0 || *(int *)(param_1 + 0x28) != 0) ||
         *(int *)(param_1 + 0x30) != 0) || *(int *)(param_1 + 0x34) != 0;
}



/* UISpriteData$$get_hasPadding @ 0x940b58
 * bool UISpriteData__get_hasPadding (UISpriteData_o* __this, const MethodInfo* method); */

/* UISpriteData$$get_hasPadding
   bool UISpriteData__get_hasPadding (UISpriteData_o* __this, const MethodInfo* method); */

bool native_UISpriteData__get_hasPadding_940b58(long param_1)

{
  return ((*(int *)(param_1 + 0x3c) != 0 || *(int *)(param_1 + 0x38) != 0) ||
         *(int *)(param_1 + 0x40) != 0) || *(int *)(param_1 + 0x44) != 0;
}



/* UISpriteData$$SetRect @ 0x940b78
 * void UISpriteData__SetRect (UISpriteData_o* __this, int32_t x, int32_t y, int32_t width, int32_t height, const MethodInfo* method); */

/* UISpriteData$$SetRect
   void UISpriteData__SetRect (UISpriteData_o* __this, int32_t x, int32_t y, int32_t width, int32_t
   height, const MethodInfo* method); */

void native_UISpriteData__SetRect_940b78
               (long param_1,undefined4 param_2,undefined4 param_3,undefined4 param_4,
               undefined4 param_5)

{
  *(undefined4 *)(param_1 + 0x18) = param_2;
  *(undefined4 *)(param_1 + 0x1c) = param_3;
  *(undefined4 *)(param_1 + 0x20) = param_4;
  *(undefined4 *)(param_1 + 0x24) = param_5;
  return;
}



/* UISpriteData$$SetPadding @ 0x940b84
 * void UISpriteData__SetPadding (UISpriteData_o* __this, int32_t left, int32_t bottom, int32_t right, int32_t top, const MethodInfo* method); */

/* UISpriteData$$SetPadding
   void UISpriteData__SetPadding (UISpriteData_o* __this, int32_t left, int32_t bottom, int32_t
   right, int32_t top, const MethodInfo* method); */

void native_UISpriteData__SetPadding_940b84
               (long param_1,undefined4 param_2,undefined4 param_3,undefined4 param_4,
               undefined4 param_5)

{
  *(undefined4 *)(param_1 + 0x40) = param_5;
  *(undefined4 *)(param_1 + 0x44) = param_3;
  *(undefined4 *)(param_1 + 0x38) = param_2;
  *(undefined4 *)(param_1 + 0x3c) = param_4;
  return;
}



/* UISpriteData$$SetBorder @ 0x940b90
 * void UISpriteData__SetBorder (UISpriteData_o* __this, int32_t left, int32_t bottom, int32_t right, int32_t top, const MethodInfo* method); */

/* UISpriteData$$SetBorder
   void UISpriteData__SetBorder (UISpriteData_o* __this, int32_t left, int32_t bottom, int32_t
   right, int32_t top, const MethodInfo* method); */

void native_UISpriteData__SetBorder_940b90
               (long param_1,undefined4 param_2,undefined4 param_3,undefined4 param_4,
               undefined4 param_5)

{
  *(undefined4 *)(param_1 + 0x30) = param_5;
  *(undefined4 *)(param_1 + 0x34) = param_3;
  *(undefined4 *)(param_1 + 0x28) = param_2;
  *(undefined4 *)(param_1 + 0x2c) = param_4;
  return;
}



/* UISpriteData$$CopyFrom @ 0x940b9c
 * void UISpriteData__CopyFrom (UISpriteData_o* __this, UISpriteData_o* sd, const MethodInfo* method); */

/* UISpriteData$$CopyFrom
   void UISpriteData__CopyFrom (UISpriteData_o* __this, UISpriteData_o* sd, const MethodInfo*
   method); */

void native_UISpriteData__CopyFrom_940b9c(long param_1,long param_2)

{
  if (param_2 != 0) {
    *(undefined8 *)(param_1 + 0x10) = *(undefined8 *)(param_2 + 0x10);
    native_sub_4326e0((undefined8 *)(param_1 + 0x10));
    *(undefined4 *)(param_1 + 0x18) = *(undefined4 *)(param_2 + 0x18);
    *(undefined4 *)(param_1 + 0x1c) = *(undefined4 *)(param_2 + 0x1c);
    *(undefined4 *)(param_1 + 0x20) = *(undefined4 *)(param_2 + 0x20);
    *(undefined4 *)(param_1 + 0x24) = *(undefined4 *)(param_2 + 0x24);
    *(undefined4 *)(param_1 + 0x28) = *(undefined4 *)(param_2 + 0x28);
    *(undefined4 *)(param_1 + 0x2c) = *(undefined4 *)(param_2 + 0x2c);
    *(undefined4 *)(param_1 + 0x30) = *(undefined4 *)(param_2 + 0x30);
    *(undefined4 *)(param_1 + 0x34) = *(undefined4 *)(param_2 + 0x34);
    *(undefined4 *)(param_1 + 0x38) = *(undefined4 *)(param_2 + 0x38);
    *(undefined4 *)(param_1 + 0x3c) = *(undefined4 *)(param_2 + 0x3c);
    *(undefined4 *)(param_1 + 0x40) = *(undefined4 *)(param_2 + 0x40);
    *(undefined4 *)(param_1 + 0x44) = *(undefined4 *)(param_2 + 0x44);
    return;
  }
                    /* WARNING: Subroutine does not return */
  native_sub_432810();
}



/* UISpriteData$$CopyBorderFrom @ 0x940c34
 * void UISpriteData__CopyBorderFrom (UISpriteData_o* __this, UISpriteData_o* sd, const MethodInfo* method); */

/* UISpriteData$$CopyBorderFrom
   void UISpriteData__CopyBorderFrom (UISpriteData_o* __this, UISpriteData_o* sd, const MethodInfo*
   method); */

void native_UISpriteData__CopyBorderFrom_940c34(long param_1,long param_2)

{
  if (param_2 != 0) {
    *(undefined4 *)(param_1 + 0x28) = *(undefined4 *)(param_2 + 0x28);
    *(undefined4 *)(param_1 + 0x2c) = *(undefined4 *)(param_2 + 0x2c);
    *(undefined4 *)(param_1 + 0x30) = *(undefined4 *)(param_2 + 0x30);
    *(undefined4 *)(param_1 + 0x34) = *(undefined4 *)(param_2 + 0x34);
    return;
  }
                    /* WARNING: Subroutine does not return */
  native_sub_432810();
}



/* UISpriteData$$.ctor @ 0x940c68
 * void UISpriteData___ctor (UISpriteData_o* __this, const MethodInfo* method); */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* UISpriteData$$.ctor
   void UISpriteData___ctor (UISpriteData_o* __this, const MethodInfo* method); */

undefined1  [16] native_UISpriteData___ctor_940c68(ulong param_1)

{
  undefined1 auVar1 [16];
  
  if ((bRam0000000001341409 & 1) == 0) {
    native_sub_43273c(&StringLiteral_Sprite_12f0fd8);
    bRam0000000001341409 = 1;
  }
  *(undefined8 *)(param_1 + 0x10) = _StringLiteral_Sprite_12f0fd8;
  native_sub_4326e0();
  auVar1._8_8_ = 0;
  auVar1._0_8_ = param_1;
  return auVar1;
}


