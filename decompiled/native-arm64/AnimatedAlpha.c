/* ARM64 IL2CPP native pseudocode from Ghidra.
 * Recovered implementation, not original C# source.
 * Function boundaries follow the IL2CPP method address table. */


/* AnimatedAlpha$$OnEnable @ 0x562b04
 * void AnimatedAlpha__OnEnable (AnimatedAlpha_o* __this, const MethodInfo* method); */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* AnimatedAlpha$$OnEnable
   void AnimatedAlpha__OnEnable (AnimatedAlpha_o* __this, const MethodInfo* method); */

void native_AnimatedAlpha__OnEnable_562b04(long param_1)

{
  undefined8 uVar1;
  ulong uVar2;
  long *plVar3;
  
  if ((bRam000000000133ea28 & 1) == 0) {
    native_sub_43273c(&Method_UnityEngine_Component_GetComponent_UIPanel____12e2be0);
    native_sub_43273c(&Method_UnityEngine_Component_GetComponent_UIWidget____12e2c30);
    bRam000000000133ea28 = 1;
  }
  uVar1 = native_UnityEngine_Component__GetComponent_ActiveAnimation__49daec
                    (param_1,_Method_UnityEngine_Component_GetComponent_UIWidget____12e2c30);
  *(undefined8 *)(param_1 + 0x20) = uVar1;
  native_sub_4326e0(param_1 + 0x20);
  uVar1 = native_UnityEngine_Component__GetComponent_ActiveAnimation__49daec
                    (param_1,_Method_UnityEngine_Component_GetComponent_UIPanel____12e2be0);
  *(undefined8 *)(param_1 + 0x28) = uVar1;
  native_sub_4326e0(param_1 + 0x28);
  if ((bRam000000000133ea29 & 1) == 0) {
    native_sub_43273c(&UnityEngine_Object_TypeInfo_12d54e0);
    bRam000000000133ea29 = 1;
  }
  uVar1 = *(undefined8 *)(param_1 + 0x20);
  if (((*(byte *)(_UnityEngine_Object_TypeInfo_12d54e0 + 0x133) >> 2 & 1) != 0) &&
     (*(int *)(_UnityEngine_Object_TypeInfo_12d54e0 + 0xe0) == 0)) {
    native_sub_4327ec();
  }
  uVar2 = native_UnityEngine_Object__op_Inequality_8d76fc(uVar1,0,0);
  if ((uVar2 & 1) != 0) {
    plVar3 = *(long **)(param_1 + 0x20);
    if (plVar3 == (long *)0x0) goto LAB_00562c80;
    (**(code **)(*plVar3 + 0x1b8))
              (*(undefined4 *)(param_1 + 0x18),plVar3,*(undefined8 *)(*plVar3 + 0x1c0));
  }
  uVar1 = *(undefined8 *)(param_1 + 0x28);
  if (((*(byte *)(_UnityEngine_Object_TypeInfo_12d54e0 + 0x133) >> 2 & 1) != 0) &&
     (*(int *)(_UnityEngine_Object_TypeInfo_12d54e0 + 0xe0) == 0)) {
    native_sub_4327ec();
  }
  uVar2 = native_UnityEngine_Object__op_Inequality_8d76fc(uVar1,0,0);
  if ((uVar2 & 1) == 0) {
    return;
  }
  plVar3 = *(long **)(param_1 + 0x28);
  if (plVar3 != (long *)0x0) {
                    /* WARNING: Could not recover jumptable at 0x00562c6c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (**(code **)(*plVar3 + 0x1b8))
              (*(undefined4 *)(param_1 + 0x18),plVar3,*(undefined8 *)(*plVar3 + 0x1c0));
    return;
  }
LAB_00562c80:
                    /* WARNING: Subroutine does not return */
  native_sub_432810();
}



/* AnimatedAlpha$$LateUpdate @ 0x562b98
 * void AnimatedAlpha__LateUpdate (AnimatedAlpha_o* __this, const MethodInfo* method); */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* AnimatedAlpha$$LateUpdate
   void AnimatedAlpha__LateUpdate (AnimatedAlpha_o* __this, const MethodInfo* method); */

void native_AnimatedAlpha__LateUpdate_562b98(long param_1)

{
  ulong uVar1;
  long *plVar2;
  undefined8 uVar3;
  
  if ((bRam000000000133ea29 & 1) == 0) {
    native_sub_43273c(&UnityEngine_Object_TypeInfo_12d54e0);
    bRam000000000133ea29 = 1;
  }
  uVar3 = *(undefined8 *)(param_1 + 0x20);
  if (((*(byte *)(_UnityEngine_Object_TypeInfo_12d54e0 + 0x133) >> 2 & 1) != 0) &&
     (*(int *)(_UnityEngine_Object_TypeInfo_12d54e0 + 0xe0) == 0)) {
    native_sub_4327ec();
  }
  uVar1 = native_UnityEngine_Object__op_Inequality_8d76fc(uVar3,0,0);
  if ((uVar1 & 1) != 0) {
    plVar2 = *(long **)(param_1 + 0x20);
    if (plVar2 == (long *)0x0) goto LAB_00562c80;
    (**(code **)(*plVar2 + 0x1b8))
              (*(undefined4 *)(param_1 + 0x18),plVar2,*(undefined8 *)(*plVar2 + 0x1c0));
  }
  uVar3 = *(undefined8 *)(param_1 + 0x28);
  if (((*(byte *)(_UnityEngine_Object_TypeInfo_12d54e0 + 0x133) >> 2 & 1) != 0) &&
     (*(int *)(_UnityEngine_Object_TypeInfo_12d54e0 + 0xe0) == 0)) {
    native_sub_4327ec();
  }
  uVar1 = native_UnityEngine_Object__op_Inequality_8d76fc(uVar3,0,0);
  if ((uVar1 & 1) == 0) {
    return;
  }
  plVar2 = *(long **)(param_1 + 0x28);
  if (plVar2 != (long *)0x0) {
                    /* WARNING: Could not recover jumptable at 0x00562c6c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (**(code **)(*plVar2 + 0x1b8))
              (*(undefined4 *)(param_1 + 0x18),plVar2,*(undefined8 *)(*plVar2 + 0x1c0));
    return;
  }
LAB_00562c80:
                    /* WARNING: Subroutine does not return */
  native_sub_432810();
}



/* AnimatedAlpha$$.ctor @ 0x562c84
 * void AnimatedAlpha___ctor (AnimatedAlpha_o* __this, const MethodInfo* method); */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* AnimatedAlpha$$.ctor
   void AnimatedAlpha___ctor (AnimatedAlpha_o* __this, const MethodInfo* method); */

undefined1  [16] native_AnimatedAlpha___ctor_562c84(ulong param_1)

{
  undefined1 auVar1 [16];
  
  *(undefined4 *)(param_1 + 0x18) = 0x3f800000;
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


