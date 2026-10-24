/* ARM64 IL2CPP native pseudocode from Ghidra.
 * Recovered implementation, not original C# source.
 * Function boundaries follow the IL2CPP method address table. */


/* TMPro.Examples.ShaderPropAnimator.<AnimateProperties>d__6$$.ctor @ 0x54d078
 * void TMPro_Examples_ShaderPropAnimator__AnimateProperties_d__6___ctor (TMPro_Examples_ShaderPropAnimator__AnimateProperties_d__6_o* __this, int32_t __1__state, const MethodInfo* method); */

/* TMPro.Examples.ShaderPropAnimator.<AnimateProperties>d__6$$.ctor
   void TMPro_Examples_ShaderPropAnimator__AnimateProperties_d__6___ctor
   (TMPro_Examples_ShaderPropAnimator__AnimateProperties_d__6_o* __this, int32_t __1__state, const
   MethodInfo* method); */

void native_TMPro_Examples_ShaderPropAnimator__AnimateProperties_d__6___ctor_54d078
               (long param_1,undefined4 param_2)

{
  native_System_Object___ctor_ad2798(param_1,0);
  *(undefined4 *)(param_1 + 0x10) = param_2;
  return;
}



/* TMPro.Examples.ShaderPropAnimator.<AnimateProperties>d__6$$System.IDisposable.Dispose @ 0x54d0a4
 * void TMPro_Examples_ShaderPropAnimator__AnimateProperties_d__6__System_IDisposable_Dispose (TMPro_Examples_ShaderPropAnimator__AnimateProperties_d__6_o* __this, const MethodInfo* method); */

/* TMPro.Examples.ShaderPropAnimator.<AnimateProperties>d__6$$System.IDisposable.Dispose
   void TMPro_Examples_ShaderPropAnimator__AnimateProperties_d__6__System_IDisposable_Dispose
   (TMPro_Examples_ShaderPropAnimator__AnimateProperties_d__6_o* __this, const MethodInfo* method);
    */

void native_TMPro_Examples_ShaderPropAnimator__AnimateProperties_d__6__System_IDisposable_Dispose_54d0a4
               (void)

{
  return;
}



/* TMPro.Examples.ShaderPropAnimator.<AnimateProperties>d__6$$MoveNext @ 0x54d0a8
 * bool TMPro_Examples_ShaderPropAnimator__AnimateProperties_d__6__MoveNext (TMPro_Examples_ShaderPropAnimator__AnimateProperties_d__6_o* __this, const MethodInfo* method); */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* TMPro.Examples.ShaderPropAnimator.<AnimateProperties>d__6$$MoveNext
   bool TMPro_Examples_ShaderPropAnimator__AnimateProperties_d__6__MoveNext
   (TMPro_Examples_ShaderPropAnimator__AnimateProperties_d__6_o* __this, const MethodInfo* method);
    */

undefined8
native_TMPro_Examples_ShaderPropAnimator__AnimateProperties_d__6__MoveNext_54d0a8(long param_1)

{
  long lVar1;
  long lVar2;
  undefined4 uVar3;
  float fVar4;
  float fVar5;
  undefined8 uVar6;
  float fVar7;
  
  if ((bRam000000000133e9dc & 1) == 0) {
    native_sub_43273c(&TMPro_ShaderUtilities_TypeInfo_12d5d90);
    native_sub_43273c(&UnityEngine_WaitForEndOfFrame_TypeInfo_12d6738);
    bRam000000000133e9dc = 1;
  }
  lVar2 = *(long *)(param_1 + 0x20);
  if (*(int *)(param_1 + 0x10) == 1) {
    *(undefined4 *)(param_1 + 0x10) = 0xffffffff;
    if (lVar2 == 0) goto LAB_0054d210;
  }
  else {
    if (*(int *)(param_1 + 0x10) != 0) {
      return 0;
    }
    *(undefined4 *)(param_1 + 0x10) = 0xffffffff;
    uVar3 = native_UnityEngine_Random__Range_76305c(0,0x3f800000,0);
    if (lVar2 == 0) goto LAB_0054d210;
    *(undefined4 *)(lVar2 + 0x30) = uVar3;
  }
  if (*(long *)(lVar2 + 0x28) != 0) {
    uVar6 = native_UnityEngine_AnimationCurve__Evaluate_8d5be4
                      (*(undefined4 *)(lVar2 + 0x30),*(long *)(lVar2 + 0x28),0);
    lVar1 = *(long *)(lVar2 + 0x20);
    if (((*(byte *)(_TMPro_ShaderUtilities_TypeInfo_12d5d90 + 0x133) >> 2 & 1) != 0) &&
       (*(int *)(_TMPro_ShaderUtilities_TypeInfo_12d5d90 + 0xe0) == 0)) {
      native_sub_4327ec();
    }
    if (lVar1 != 0) {
      native_UnityEngine_Material__SetFloat_8e412c
                (uVar6,lVar1,
                 *(undefined4 *)(*(long *)(_TMPro_ShaderUtilities_TypeInfo_12d5d90 + 0xb8) + 0x7c),0
                );
      fVar7 = *(float *)(lVar2 + 0x30);
      fVar4 = (float)native_UnityEngine_Time__get_deltaTime_77082c(0);
      fVar5 = (float)native_UnityEngine_Random__Range_76305c(0x3e4ccccd,0x3e99999a,0);
      *(float *)(lVar2 + 0x30) = fVar7 + fVar4 * fVar5;
      uVar6 = native_sub_432808(_UnityEngine_WaitForEndOfFrame_TypeInfo_12d6738);
      native_UnityEngine_WaitForEndOfFrame___ctor_7775b8(uVar6,0);
      *(undefined8 *)(param_1 + 0x18) = uVar6;
      native_sub_4326e0((undefined8 *)(param_1 + 0x18),uVar6);
      *(undefined4 *)(param_1 + 0x10) = 1;
      return 1;
    }
  }
LAB_0054d210:
                    /* WARNING: Subroutine does not return */
  native_sub_432810();
}



/* TMPro.Examples.ShaderPropAnimator.<AnimateProperties>d__6$$System.Collections.Generic.IEnumerator<System.Object>.get_Current @ 0x54d214
 * Il2CppObject* TMPro_Examples_ShaderPropAnimator__AnimateProperties_d__6__System_Collections_Generic_IEnumerator_System_Object__get_Current (TMPro_Examples_ShaderPropAnimator__AnimateProperties_d__6_o* __this, const MethodInfo* method); */

/* TMPro.Examples.ShaderPropAnimator.<AnimateProperties>d__6$$System.Collections.Generic.IEnumerator<System.Object>.get_Current
   Il2CppObject*
   TMPro_Examples_ShaderPropAnimator__AnimateProperties_d__6__System_Collections_Generic_IEnumerator_System_Object__get_Current
   (TMPro_Examples_ShaderPropAnimator__AnimateProperties_d__6_o* __this, const MethodInfo* method);
    */

undefined8
native_TMPro_Examples_ShaderPropAnimator__AnimateProperties_d__6__System_Collections_Generic_IEnumerator_System_Object__get_Current_54d214
          (long param_1)

{
  return *(undefined8 *)(param_1 + 0x18);
}



/* TMPro.Examples.ShaderPropAnimator.<AnimateProperties>d__6$$System.Collections.IEnumerator.Reset @ 0x54d21c
 * void TMPro_Examples_ShaderPropAnimator__AnimateProperties_d__6__System_Collections_IEnumerator_Reset (TMPro_Examples_ShaderPropAnimator__AnimateProperties_d__6_o* __this, const MethodInfo* method); */

/* TMPro.Examples.ShaderPropAnimator.<AnimateProperties>d__6$$System.Collections.IEnumerator.Reset
   void 
   TMPro_Examples_ShaderPropAnimator__AnimateProperties_d__6__System_Collections_IEnumerator_Reset
   (TMPro_Examples_ShaderPropAnimator__AnimateProperties_d__6_o* __this, const MethodInfo* method);
    */

void native_TMPro_Examples_ShaderPropAnimator__AnimateProperties_d__6__System_Collections_IEnumerator_Reset_54d21c
               (void)

{
  undefined8 uVar1;
  undefined8 uVar2;
  
  native_sub_432740(&System_NotSupportedException_TypeInfo_12d5468);
  uVar1 = native_sub_432808();
  native_System_NotSupportedException___ctor_ad264c(uVar1,0);
  uVar2 = native_sub_432740(&
                            Method_TMPro_Examples_ShaderPropAnimator__AnimateProperties_d__6_System_Collections_IEnumerator_Reset___12e9da8
                           );
                    /* WARNING: Subroutine does not return */
  native_sub_4327dc(uVar1,uVar2);
}



/* TMPro.Examples.ShaderPropAnimator.<AnimateProperties>d__6$$System.Collections.IEnumerator.get_Current @ 0x54d25c
 * Il2CppObject* TMPro_Examples_ShaderPropAnimator__AnimateProperties_d__6__System_Collections_IEnumerator_get_Current (TMPro_Examples_ShaderPropAnimator__AnimateProperties_d__6_o* __this, const MethodInfo* method); */

/* TMPro.Examples.ShaderPropAnimator.<AnimateProperties>d__6$$System.Collections.IEnumerator.get_Current
   Il2CppObject*
   TMPro_Examples_ShaderPropAnimator__AnimateProperties_d__6__System_Collections_IEnumerator_get_Current
   (TMPro_Examples_ShaderPropAnimator__AnimateProperties_d__6_o* __this, const MethodInfo* method);
    */

undefined8
native_TMPro_Examples_ShaderPropAnimator__AnimateProperties_d__6__System_Collections_IEnumerator_get_Current_54d25c
          (long param_1)

{
  return *(undefined8 *)(param_1 + 0x18);
}


