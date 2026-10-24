/* ARM64 IL2CPP native pseudocode from Ghidra.
 * Recovered implementation, not original C# source.
 * Function boundaries follow the IL2CPP method address table. */


/* FixedJoystick$$.ctor @ 0xdef8e4
 * void FixedJoystick___ctor (FixedJoystick_o* __this, const MethodInfo* method); */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* FixedJoystick$$.ctor
   void FixedJoystick___ctor (FixedJoystick_o* __this, const MethodInfo* method); */

undefined1  [16]
native_FixedJoystick___ctor_def8e4(undefined1 param_1 [16],undefined4 param_2,ulong param_3)

{
  undefined4 uVar1;
  undefined1 auVar2 [16];
  
  *(undefined4 *)(param_3 + 0x18) = 0x3f800000;
  uVar1 = native_UnityEngine_Vector2__get_zero_765ef0(0,0);
  *(undefined4 *)(param_3 + 0x50) = uVar1;
  *(undefined4 *)(param_3 + 0x54) = param_2;
  if ((bRam0000000001340ae0 & 1) == 0) {
    native_sub_43273c(&UnityEngine_Object_TypeInfo_12d54e0,0);
    bRam0000000001340ae0 = 1;
  }
  if (((*(byte *)(_UnityEngine_Object_TypeInfo_12d54e0 + 0x133) >> 2 & 1) != 0) &&
     (*(int *)(_UnityEngine_Object_TypeInfo_12d54e0 + 0xe0) == 0)) {
    native_sub_4327ec();
  }
  auVar2._8_8_ = 0;
  auVar2._0_8_ = param_3;
  return auVar2;
}


