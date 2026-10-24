/* ARM64 IL2CPP native pseudocode from Ghidra.
 * Recovered implementation, not original C# source.
 * Function boundaries follow the IL2CPP method address table. */


/* EnvMapAnimator.<Start>d__4$$.ctor @ 0x54bae0
 * void EnvMapAnimator__Start_d__4___ctor (EnvMapAnimator__Start_d__4_o* __this, int32_t __1__state, const MethodInfo* method); */

/* EnvMapAnimator.<Start>d__4$$.ctor
   void EnvMapAnimator__Start_d__4___ctor (EnvMapAnimator__Start_d__4_o* __this, int32_t __1__state,
   const MethodInfo* method); */

void native_EnvMapAnimator__Start_d__4___ctor_54bae0(long param_1,undefined4 param_2)

{
  native_System_Object___ctor_ad2798(param_1,0);
  *(undefined4 *)(param_1 + 0x10) = param_2;
  return;
}



/* EnvMapAnimator.<Start>d__4$$System.IDisposable.Dispose @ 0x54bb0c
 * void EnvMapAnimator__Start_d__4__System_IDisposable_Dispose (EnvMapAnimator__Start_d__4_o* __this, const MethodInfo* method); */

/* EnvMapAnimator.<Start>d__4$$System.IDisposable.Dispose
   void EnvMapAnimator__Start_d__4__System_IDisposable_Dispose (EnvMapAnimator__Start_d__4_o*
   __this, const MethodInfo* method); */

void native_EnvMapAnimator__Start_d__4__System_IDisposable_Dispose_54bb0c(void)

{
  return;
}



/* EnvMapAnimator.<Start>d__4$$MoveNext @ 0x54bb10
 * bool EnvMapAnimator__Start_d__4__MoveNext (EnvMapAnimator__Start_d__4_o* __this, const MethodInfo* method); */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* EnvMapAnimator.<Start>d__4$$MoveNext
   bool EnvMapAnimator__Start_d__4__MoveNext (EnvMapAnimator__Start_d__4_o* __this, const
   MethodInfo* method); */

undefined8
native_EnvMapAnimator__Start_d__4__MoveNext_54bb10
          (undefined1 param_1 [16],undefined8 param_2,undefined8 param_3,long param_4)

{
  long lVar1;
  float fVar2;
  float fVar3;
  float fVar4;
  undefined8 uVar5;
  undefined8 uVar6;
  ulong uVar7;
  ulong uVar8;
  ulong uVar9;
  float fVar10;
  float fVar11;
  undefined8 uStack_e0;
  undefined8 uStack_d8;
  undefined8 uStack_d0;
  undefined8 uStack_c8;
  undefined8 uStack_c0;
  undefined8 uStack_b8;
  undefined8 uStack_b0;
  undefined8 uStack_a8;
  undefined8 uStack_a0;
  undefined8 uStack_98;
  undefined8 uStack_90;
  undefined8 uStack_88;
  undefined8 uStack_80;
  undefined8 uStack_78;
  undefined8 uStack_70;
  undefined8 uStack_68;
  
  if ((bRam000000000133e9d1 & 1) == 0) {
    native_sub_43273c(&StringLiteral__EnvMatrix_12f3580);
    bRam000000000133e9d1 = 1;
  }
  lVar1 = *(long *)(param_4 + 0x20);
  if (*(int *)(param_4 + 0x10) == 1) {
    *(undefined4 *)(param_4 + 0x10) = 0xffffffff;
  }
  else {
    if (*(int *)(param_4 + 0x10) != 0) {
      return 0;
    }
    *(undefined8 *)(param_4 + 0x28) = 0;
    *(undefined4 *)(param_4 + 0x10) = 0xffffffff;
    *(undefined8 *)(param_4 + 0x58) = 0;
    *(undefined8 *)(param_4 + 0x60) = 0;
    *(undefined8 *)(param_4 + 0x48) = 0;
    *(undefined8 *)(param_4 + 0x50) = 0;
    *(undefined8 *)(param_4 + 0x38) = 0;
    *(undefined8 *)(param_4 + 0x40) = 0;
    *(undefined8 *)(param_4 + 0x30) = 0;
  }
  uVar5 = native_UnityEngine_Vector3__get_zero_776668(0);
  fVar2 = (float)native_UnityEngine_Time__get_time_7707f8(0);
  if (lVar1 != 0) {
    fVar10 = *(float *)(lVar1 + 0x18);
    fVar3 = (float)native_UnityEngine_Time__get_time_7707f8(0);
    fVar11 = *(float *)(lVar1 + 0x1c);
    fVar4 = (float)native_UnityEngine_Time__get_time_7707f8(0);
    uVar9 = (ulong)(uint)(fVar2 * fVar10);
    uVar7 = (ulong)(uint)(fVar3 * fVar11);
    uVar8 = (ulong)(uint)(fVar4 * *(float *)(lVar1 + 0x20));
    uVar6 = native_UnityEngine_Quaternion__Euler_762bc4(uVar9,0);
    native_UnityEngine_Vector3__get_one_776a20(0);
    native_UnityEngine_Matrix4x4__SetTRS_8e57d0
              (uVar5,param_2,param_3,uVar6,uVar7,uVar8,uVar9,(undefined8 *)(param_4 + 0x28),0);
    uStack_b8 = *(undefined8 *)(param_4 + 0x50);
    uStack_c0 = *(undefined8 *)(param_4 + 0x48);
    uStack_a8 = *(undefined8 *)(param_4 + 0x60);
    uStack_b0 = *(undefined8 *)(param_4 + 0x58);
    uStack_d8 = *(undefined8 *)(param_4 + 0x30);
    uStack_e0 = *(undefined8 *)(param_4 + 0x28);
    uStack_c8 = *(undefined8 *)(param_4 + 0x40);
    uStack_d0 = *(undefined8 *)(param_4 + 0x38);
    uStack_a0 = uStack_e0;
    uStack_98 = uStack_d8;
    uStack_90 = uStack_d0;
    uStack_88 = uStack_c8;
    uStack_80 = uStack_c0;
    uStack_78 = uStack_b8;
    uStack_70 = uStack_b0;
    uStack_68 = uStack_a8;
    if (*(long *)(lVar1 + 0x30) != 0) {
      native_UnityEngine_Material__SetMatrix_8e4260
                (*(long *)(lVar1 + 0x30),_StringLiteral__EnvMatrix_12f3580,&uStack_e0,0);
      *(undefined8 *)(param_4 + 0x18) = 0;
      native_sub_4326e0((undefined8 *)(param_4 + 0x18),0);
      *(undefined4 *)(param_4 + 0x10) = 1;
      return 1;
    }
  }
                    /* WARNING: Subroutine does not return */
  native_sub_432810();
}



/* EnvMapAnimator.<Start>d__4$$System.Collections.Generic.IEnumerator<System.Object>.get_Current @ 0x54bcc8
 * Il2CppObject* EnvMapAnimator__Start_d__4__System_Collections_Generic_IEnumerator_System_Object__get_Current (EnvMapAnimator__Start_d__4_o* __this, const MethodInfo* method); */

/* EnvMapAnimator.<Start>d__4$$System.Collections.Generic.IEnumerator<System.Object>.get_Current
   Il2CppObject*
   EnvMapAnimator__Start_d__4__System_Collections_Generic_IEnumerator_System_Object__get_Current
   (EnvMapAnimator__Start_d__4_o* __this, const MethodInfo* method); */

undefined8
native_EnvMapAnimator__Start_d__4__System_Collections_Generic_IEnumerator_System_Object__get_Current_54bcc8
          (long param_1)

{
  return *(undefined8 *)(param_1 + 0x18);
}



/* EnvMapAnimator.<Start>d__4$$System.Collections.IEnumerator.Reset @ 0x54bcd0
 * void EnvMapAnimator__Start_d__4__System_Collections_IEnumerator_Reset (EnvMapAnimator__Start_d__4_o* __this, const MethodInfo* method); */

/* EnvMapAnimator.<Start>d__4$$System.Collections.IEnumerator.Reset
   void EnvMapAnimator__Start_d__4__System_Collections_IEnumerator_Reset
   (EnvMapAnimator__Start_d__4_o* __this, const MethodInfo* method); */

void native_EnvMapAnimator__Start_d__4__System_Collections_IEnumerator_Reset_54bcd0(void)

{
  undefined8 uVar1;
  undefined8 uVar2;
  
  native_sub_432740(&System_NotSupportedException_TypeInfo_12d5468);
  uVar1 = native_sub_432808();
  native_System_NotSupportedException___ctor_ad264c(uVar1,0);
  uVar2 = native_sub_432740(&
                            Method_EnvMapAnimator__Start_d__4_System_Collections_IEnumerator_Reset___12e9a20
                           );
                    /* WARNING: Subroutine does not return */
  native_sub_4327dc(uVar1,uVar2);
}



/* EnvMapAnimator.<Start>d__4$$System.Collections.IEnumerator.get_Current @ 0x54bd10
 * Il2CppObject* EnvMapAnimator__Start_d__4__System_Collections_IEnumerator_get_Current (EnvMapAnimator__Start_d__4_o* __this, const MethodInfo* method); */

/* EnvMapAnimator.<Start>d__4$$System.Collections.IEnumerator.get_Current
   Il2CppObject* EnvMapAnimator__Start_d__4__System_Collections_IEnumerator_get_Current
   (EnvMapAnimator__Start_d__4_o* __this, const MethodInfo* method); */

undefined8
native_EnvMapAnimator__Start_d__4__System_Collections_IEnumerator_get_Current_54bd10(long param_1)

{
  return *(undefined8 *)(param_1 + 0x18);
}


