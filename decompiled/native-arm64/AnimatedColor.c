/* ARM64 IL2CPP native pseudocode from Ghidra.
 * Recovered implementation, not original C# source.
 * Function boundaries follow the IL2CPP method address table. */


/* AnimatedColor$$OnEnable @ 0x562c94
 * void AnimatedColor__OnEnable (AnimatedColor_o* __this, const MethodInfo* method); */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* AnimatedColor$$OnEnable
   void AnimatedColor__OnEnable (AnimatedColor_o* __this, const MethodInfo* method); */

void native_AnimatedColor__OnEnable_562c94(long param_1)

{
  undefined8 uVar1;
  long *plVar2;
  ulong uVar3;
  undefined4 uVar4;
  float fVar5;
  undefined4 uVar6;
  undefined4 uVar7;
  float fVar8;
  
  if ((bRam000000000133ea2a & 1) == 0) {
    native_sub_43273c(&Method_UnityEngine_Component_GetComponent_UIWidget____12e2c30);
    bRam000000000133ea2a = 1;
  }
  uVar1 = native_UnityEngine_Component__GetComponent_ActiveAnimation__49daec
                    (param_1,_Method_UnityEngine_Component_GetComponent_UIWidget____12e2c30);
  *(undefined8 *)(param_1 + 0x28) = uVar1;
  native_sub_4326e0(param_1 + 0x28);
  plVar2 = *(long **)(param_1 + 0x28);
  if (plVar2 != (long *)0x0) {
    uVar4 = *(undefined4 *)(param_1 + 0x18);
    uVar6 = *(undefined4 *)(param_1 + 0x1c);
    uVar7 = *(undefined4 *)(param_1 + 0x20);
    fVar8 = *(float *)(param_1 + 0x24);
    uVar3 = native_UnityEngine_Color__op_Inequality_8d9d34
                      ((int)plVar2[0x12],*(undefined4 *)((long)plVar2 + 0x94),(int)plVar2[0x13],
                       *(undefined4 *)((long)plVar2 + 0x9c),uVar4,uVar6,uVar7,fVar8,0,0);
    if ((uVar3 & 1) != 0) {
      fVar5 = *(float *)((long)plVar2 + 0x9c);
      *(undefined4 *)(plVar2 + 0x12) = uVar4;
      *(undefined4 *)((long)plVar2 + 0x94) = uVar6;
      *(undefined4 *)(plVar2 + 0x13) = uVar7;
      *(float *)((long)plVar2 + 0x9c) = fVar8;
                    /* WARNING: Could not recover jumptable at 0x00947b5c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
      (**(code **)(*plVar2 + 0x1f8))(plVar2,fVar5 != fVar8,*(undefined8 *)(*plVar2 + 0x200));
      return;
    }
    return;
  }
                    /* WARNING: Subroutine does not return */
  native_sub_432810();
}



/* AnimatedColor$$LateUpdate @ 0x562cf8
 * void AnimatedColor__LateUpdate (AnimatedColor_o* __this, const MethodInfo* method); */

/* AnimatedColor$$LateUpdate
   void AnimatedColor__LateUpdate (AnimatedColor_o* __this, const MethodInfo* method); */

void native_AnimatedColor__LateUpdate_562cf8(long param_1)

{
  long *plVar1;
  ulong uVar2;
  undefined4 uVar3;
  float fVar4;
  undefined4 uVar5;
  undefined4 uVar6;
  float fVar7;
  
  plVar1 = *(long **)(param_1 + 0x28);
  if (plVar1 == (long *)0x0) {
                    /* WARNING: Subroutine does not return */
    native_sub_432810();
  }
  uVar3 = *(undefined4 *)(param_1 + 0x18);
  uVar5 = *(undefined4 *)(param_1 + 0x1c);
  uVar6 = *(undefined4 *)(param_1 + 0x20);
  fVar7 = *(float *)(param_1 + 0x24);
  uVar2 = native_UnityEngine_Color__op_Inequality_8d9d34
                    ((int)plVar1[0x12],*(undefined4 *)((long)plVar1 + 0x94),(int)plVar1[0x13],
                     *(undefined4 *)((long)plVar1 + 0x9c),uVar3,uVar5,uVar6,fVar7,0,0);
  if ((uVar2 & 1) != 0) {
    fVar4 = *(float *)((long)plVar1 + 0x9c);
    *(undefined4 *)(plVar1 + 0x12) = uVar3;
    *(undefined4 *)((long)plVar1 + 0x94) = uVar5;
    *(undefined4 *)(plVar1 + 0x13) = uVar6;
    *(float *)((long)plVar1 + 0x9c) = fVar7;
                    /* WARNING: Could not recover jumptable at 0x00947b5c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (**(code **)(*plVar1 + 0x1f8))(plVar1,fVar4 != fVar7,*(undefined8 *)(*plVar1 + 0x200));
    return;
  }
  return;
}



/* AnimatedColor$$.ctor @ 0x562d20
 * void AnimatedColor___ctor (AnimatedColor_o* __this, const MethodInfo* method); */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* AnimatedColor$$.ctor
   void AnimatedColor___ctor (AnimatedColor_o* __this, const MethodInfo* method); */

undefined1  [16]
native_AnimatedColor___ctor_562d20
          (undefined1 param_1 [16],undefined4 param_2,undefined4 param_3,undefined4 param_4,
          ulong param_5)

{
  undefined4 uVar1;
  undefined1 auVar2 [16];
  
  uVar1 = native_UnityEngine_Color__get_white_8d9e10(0);
  *(undefined4 *)(param_5 + 0x18) = uVar1;
  *(undefined4 *)(param_5 + 0x1c) = param_2;
  *(undefined4 *)(param_5 + 0x20) = param_3;
  *(undefined4 *)(param_5 + 0x24) = param_4;
  if ((bRam0000000001340ae0 & 1) == 0) {
    native_sub_43273c(&UnityEngine_Object_TypeInfo_12d54e0,0);
    bRam0000000001340ae0 = 1;
  }
  if (((*(byte *)(_UnityEngine_Object_TypeInfo_12d54e0 + 0x133) >> 2 & 1) != 0) &&
     (*(int *)(_UnityEngine_Object_TypeInfo_12d54e0 + 0xe0) == 0)) {
    native_sub_4327ec();
  }
  auVar2._8_8_ = 0;
  auVar2._0_8_ = param_5;
  return auVar2;
}


