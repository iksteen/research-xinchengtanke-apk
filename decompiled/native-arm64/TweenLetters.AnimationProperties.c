/* ARM64 IL2CPP native pseudocode from Ghidra.
 * Recovered implementation, not original C# source.
 * Function boundaries follow the IL2CPP method address table. */


/* TweenLetters.AnimationProperties$$Upgrade @ 0x54f35c
 * void TweenLetters_AnimationProperties__Upgrade (TweenLetters_AnimationProperties_o* __this, const MethodInfo* method); */

/* TweenLetters.AnimationProperties$$Upgrade
   void TweenLetters_AnimationProperties__Upgrade (TweenLetters_AnimationProperties_o* __this, const
   MethodInfo* method); */

void native_TweenLetters_AnimationProperties__Upgrade_54f35c(long param_1)

{
  *(undefined1 *)(param_1 + 0x28) = 1;
  *(undefined4 *)(param_1 + 0x70) = *(undefined4 *)(param_1 + 0x40);
  *(undefined4 *)(param_1 + 0x74) = *(undefined4 *)(param_1 + 0x44);
  *(undefined4 *)(param_1 + 0x7c) = *(undefined4 *)(param_1 + 0x40);
  *(undefined4 *)(param_1 + 0x80) = *(undefined4 *)(param_1 + 0x44);
  *(undefined4 *)(param_1 + 0x78) = *(undefined4 *)(param_1 + 0x48);
  *(undefined4 *)(param_1 + 0x84) = *(undefined4 *)(param_1 + 0x48);
  *(undefined4 *)(param_1 + 0x88) = *(undefined4 *)(param_1 + 0x4c);
  *(undefined4 *)(param_1 + 0x8c) = *(undefined4 *)(param_1 + 0x50);
  *(undefined4 *)(param_1 + 0x90) = *(undefined4 *)(param_1 + 0x54);
  *(undefined4 *)(param_1 + 0x94) = *(undefined4 *)(param_1 + 0x4c);
  *(undefined4 *)(param_1 + 0x98) = *(undefined4 *)(param_1 + 0x50);
  *(float *)(param_1 + 0x58) = *(float *)(param_1 + 0x34) - *(float *)(param_1 + 0x2c);
  *(float *)(param_1 + 0x5c) = *(float *)(param_1 + 0x38) - *(float *)(param_1 + 0x30);
  *(float *)(param_1 + 0x60) = *(float *)(param_1 + 0x3c);
  *(float *)(param_1 + 100) = *(float *)(param_1 + 0x34) + *(float *)(param_1 + 0x2c);
  *(float *)(param_1 + 0x68) = *(float *)(param_1 + 0x38) + *(float *)(param_1 + 0x30);
  *(float *)(param_1 + 0x6c) = *(float *)(param_1 + 0x3c) + 0.0;
  *(undefined4 *)(param_1 + 0x9c) = *(undefined4 *)(param_1 + 0x54);
  return;
}



/* TweenLetters.AnimationProperties$$.ctor @ 0x54f3c0
 * void TweenLetters_AnimationProperties___ctor (TweenLetters_AnimationProperties_o* __this, const MethodInfo* method); */

/* TweenLetters.AnimationProperties$$.ctor
   void TweenLetters_AnimationProperties___ctor (TweenLetters_AnimationProperties_o* __this, const
   MethodInfo* method); */

undefined1  [16]
native_TweenLetters_AnimationProperties___ctor_54f3c0
          (undefined1 param_1 [16],undefined4 param_2,undefined4 param_3,ulong param_4)

{
  undefined4 uVar1;
  undefined1 auVar2 [16];
  
  *(undefined8 *)(param_4 + 0x14) = 0x3f00000000000002;
  *(undefined8 *)(param_4 + 0x20) = 0x3f4000003e800000;
  uVar1 = native_UnityEngine_Vector2__get_zero_765ef0(0);
  *(undefined4 *)(param_4 + 0x2c) = uVar1;
  *(undefined4 *)(param_4 + 0x30) = param_2;
  uVar1 = native_UnityEngine_Vector3__get_zero_776668(0);
  *(undefined4 *)(param_4 + 0x34) = uVar1;
  *(undefined4 *)(param_4 + 0x38) = param_2;
  *(undefined4 *)(param_4 + 0x3c) = param_3;
  uVar1 = native_UnityEngine_Vector3__get_zero_776668(0);
  *(undefined4 *)(param_4 + 0x40) = uVar1;
  *(undefined4 *)(param_4 + 0x44) = param_2;
  *(undefined4 *)(param_4 + 0x48) = param_3;
  uVar1 = native_UnityEngine_Vector3__get_one_776a20(0);
  *(undefined4 *)(param_4 + 0x4c) = uVar1;
  *(undefined4 *)(param_4 + 0x50) = param_2;
  *(undefined4 *)(param_4 + 0x54) = param_3;
  uVar1 = native_UnityEngine_Vector3__get_zero_776668(0);
  *(undefined4 *)(param_4 + 0x58) = uVar1;
  *(undefined4 *)(param_4 + 0x5c) = param_2;
  *(undefined4 *)(param_4 + 0x60) = param_3;
  uVar1 = native_UnityEngine_Vector3__get_zero_776668(0);
  *(undefined4 *)(param_4 + 100) = uVar1;
  *(undefined4 *)(param_4 + 0x68) = param_2;
  *(undefined4 *)(param_4 + 0x6c) = param_3;
  uVar1 = native_UnityEngine_Vector3__get_zero_776668(0);
  *(undefined4 *)(param_4 + 0x70) = uVar1;
  *(undefined4 *)(param_4 + 0x74) = param_2;
  *(undefined4 *)(param_4 + 0x78) = param_3;
  uVar1 = native_UnityEngine_Vector3__get_zero_776668(0);
  *(undefined4 *)(param_4 + 0x7c) = uVar1;
  *(undefined4 *)(param_4 + 0x80) = param_2;
  *(undefined4 *)(param_4 + 0x84) = param_3;
  uVar1 = native_UnityEngine_Vector3__get_one_776a20(0);
  *(undefined4 *)(param_4 + 0x88) = uVar1;
  *(undefined4 *)(param_4 + 0x8c) = param_2;
  *(undefined4 *)(param_4 + 0x90) = param_3;
  uVar1 = native_UnityEngine_Vector3__get_one_776a20(0);
  *(undefined4 *)(param_4 + 0x94) = uVar1;
  *(undefined4 *)(param_4 + 0x98) = param_2;
  *(undefined4 *)(param_4 + 0x9c) = param_3;
  auVar2._8_8_ = 0;
  auVar2._0_8_ = param_4;
  return auVar2;
}


