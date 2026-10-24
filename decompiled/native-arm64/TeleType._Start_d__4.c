/* ARM64 IL2CPP native pseudocode from Ghidra.
 * Recovered implementation, not original C# source.
 * Function boundaries follow the IL2CPP method address table. */


/* TMPro.Examples.TeleType.<Start>d__4$$.ctor @ 0x54e250
 * void TMPro_Examples_TeleType__Start_d__4___ctor (TMPro_Examples_TeleType__Start_d__4_o* __this, int32_t __1__state, const MethodInfo* method); */

/* TMPro.Examples.TeleType.<Start>d__4$$.ctor
   void TMPro_Examples_TeleType__Start_d__4___ctor (TMPro_Examples_TeleType__Start_d__4_o* __this,
   int32_t __1__state, const MethodInfo* method); */

void native_TMPro_Examples_TeleType__Start_d__4___ctor_54e250(long param_1,undefined4 param_2)

{
  native_System_Object___ctor_ad2798(param_1,0);
  *(undefined4 *)(param_1 + 0x10) = param_2;
  return;
}



/* TMPro.Examples.TeleType.<Start>d__4$$System.IDisposable.Dispose @ 0x54e27c
 * void TMPro_Examples_TeleType__Start_d__4__System_IDisposable_Dispose (TMPro_Examples_TeleType__Start_d__4_o* __this, const MethodInfo* method); */

/* TMPro.Examples.TeleType.<Start>d__4$$System.IDisposable.Dispose
   void TMPro_Examples_TeleType__Start_d__4__System_IDisposable_Dispose
   (TMPro_Examples_TeleType__Start_d__4_o* __this, const MethodInfo* method); */

void native_TMPro_Examples_TeleType__Start_d__4__System_IDisposable_Dispose_54e27c(void)

{
  return;
}



/* TMPro.Examples.TeleType.<Start>d__4$$MoveNext @ 0x54e280
 * bool TMPro_Examples_TeleType__Start_d__4__MoveNext (TMPro_Examples_TeleType__Start_d__4_o* __this, const MethodInfo* method); */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* TMPro.Examples.TeleType.<Start>d__4$$MoveNext
   bool TMPro_Examples_TeleType__Start_d__4__MoveNext (TMPro_Examples_TeleType__Start_d__4_o*
   __this, const MethodInfo* method); */

undefined8 native_TMPro_Examples_TeleType__Start_d__4__MoveNext_54e280(long param_1)

{
  int iVar1;
  undefined8 uVar2;
  long *plVar3;
  undefined4 uVar4;
  long lVar5;
  int iVar6;
  long lVar7;
  
  if ((bRam000000000133e9e2 & 1) == 0) {
    native_sub_43273c(&UnityEngine_WaitForSeconds_TypeInfo_12d6740);
    bRam000000000133e9e2 = 1;
  }
  if (4 < *(uint *)(param_1 + 0x10)) {
    return 0;
  }
  lVar7 = *(long *)(param_1 + 0x20);
  switch(*(uint *)(param_1 + 0x10)) {
  case 0:
    *(undefined4 *)(param_1 + 0x10) = 0xffffffff;
    if ((lVar7 == 0) || (plVar3 = *(long **)(lVar7 + 0x28), plVar3 == (long *)0x0))
    goto code_r0x0054e4d4;
    (**(code **)(*plVar3 + 0x7d8))(plVar3,0,0,*(undefined8 *)(*plVar3 + 0x7e0));
    if ((*(long *)(lVar7 + 0x28) == 0) ||
       (lVar5 = *(long *)(*(long *)(lVar7 + 0x28) + 0x360), lVar5 == 0)) goto code_r0x0054e4d4;
    iVar6 = 0;
    *(undefined4 *)(param_1 + 0x28) = *(undefined4 *)(lVar5 + 0x18);
    *(undefined4 *)(param_1 + 0x2c) = 0;
    break;
  case 1:
    *(undefined4 *)(param_1 + 0x10) = 0xffffffff;
    if ((lVar7 == 0) || (plVar3 = *(long **)(lVar7 + 0x28), plVar3 == (long *)0x0))
    goto code_r0x0054e4d4;
    (**(code **)(*plVar3 + 0x558))
              (plVar3,*(undefined8 *)(lVar7 + 0x20),*(undefined8 *)(*plVar3 + 0x560));
    uVar2 = native_sub_432808(_UnityEngine_WaitForSeconds_TypeInfo_12d6740);
    native_UnityEngine_WaitForSeconds___ctor_7775c8(0x3f800000,uVar2,0);
    *(undefined8 *)(param_1 + 0x18) = uVar2;
    native_sub_4326e0((undefined8 *)(param_1 + 0x18),uVar2);
    uVar4 = 2;
    goto code_r0x0054e4b4;
  case 2:
    *(undefined4 *)(param_1 + 0x10) = 0xffffffff;
    if ((lVar7 == 0) || (plVar3 = *(long **)(lVar7 + 0x28), plVar3 == (long *)0x0))
    goto code_r0x0054e4d4;
    (**(code **)(*plVar3 + 0x558))
              (plVar3,*(undefined8 *)(lVar7 + 0x18),*(undefined8 *)(*plVar3 + 0x560));
    uVar2 = native_sub_432808(_UnityEngine_WaitForSeconds_TypeInfo_12d6740);
    native_UnityEngine_WaitForSeconds___ctor_7775c8(0x3f800000,uVar2,0);
    *(undefined8 *)(param_1 + 0x18) = uVar2;
    native_sub_4326e0((undefined8 *)(param_1 + 0x18),uVar2);
    uVar4 = 3;
    goto code_r0x0054e4b4;
  case 3:
    *(undefined4 *)(param_1 + 0x10) = 0xffffffff;
    goto code_r0x0054e470;
  case 4:
    *(undefined4 *)(param_1 + 0x10) = 0xffffffff;
    if (lVar7 == 0) goto code_r0x0054e4d4;
    iVar6 = *(int *)(param_1 + 0x28) + 1;
    iVar1 = 0;
    if (iVar6 != 0) {
      iVar1 = *(int *)(param_1 + 0x2c) / iVar6;
    }
    iVar6 = *(int *)(param_1 + 0x2c) - iVar1 * iVar6;
  }
  if (*(long *)(lVar7 + 0x28) == 0) {
code_r0x0054e4d4:
                    /* WARNING: Subroutine does not return */
    native_sub_432810();
  }
  native_TMPro_TMP_Text__set_maxVisibleCharacters_4bbe74(*(long *)(lVar7 + 0x28),iVar6,0);
  if (iVar6 < *(int *)(param_1 + 0x28)) {
code_r0x0054e470:
    *(int *)(param_1 + 0x2c) = *(int *)(param_1 + 0x2c) + 1;
    uVar2 = native_sub_432808(_UnityEngine_WaitForSeconds_TypeInfo_12d6740);
    native_UnityEngine_WaitForSeconds___ctor_7775c8(0x3d4ccccd,uVar2,0);
    *(undefined8 *)(param_1 + 0x18) = uVar2;
    native_sub_4326e0(param_1 + 0x18,uVar2);
    uVar4 = 4;
  }
  else {
    uVar2 = native_sub_432808(_UnityEngine_WaitForSeconds_TypeInfo_12d6740);
    native_UnityEngine_WaitForSeconds___ctor_7775c8(0x3f800000,uVar2,0);
    *(undefined8 *)(param_1 + 0x18) = uVar2;
    native_sub_4326e0((undefined8 *)(param_1 + 0x18),uVar2);
    uVar4 = 1;
  }
code_r0x0054e4b4:
  *(undefined4 *)(param_1 + 0x10) = uVar4;
  return 1;
}



/* TMPro.Examples.TeleType.<Start>d__4$$System.Collections.Generic.IEnumerator<System.Object>.get_Current @ 0x54e4d8
 * Il2CppObject* TMPro_Examples_TeleType__Start_d__4__System_Collections_Generic_IEnumerator_System_Object__get_Current (TMPro_Examples_TeleType__Start_d__4_o* __this, const MethodInfo* method); */

/* TMPro.Examples.TeleType.<Start>d__4$$System.Collections.Generic.IEnumerator<System.Object>.get_Current
   Il2CppObject*
   TMPro_Examples_TeleType__Start_d__4__System_Collections_Generic_IEnumerator_System_Object__get_Current
   (TMPro_Examples_TeleType__Start_d__4_o* __this, const MethodInfo* method); */

undefined8
native_TMPro_Examples_TeleType__Start_d__4__System_Collections_Generic_IEnumerator_System_Object__get_Current_54e4d8
          (long param_1)

{
  return *(undefined8 *)(param_1 + 0x18);
}



/* TMPro.Examples.TeleType.<Start>d__4$$System.Collections.IEnumerator.Reset @ 0x54e4e0
 * void TMPro_Examples_TeleType__Start_d__4__System_Collections_IEnumerator_Reset (TMPro_Examples_TeleType__Start_d__4_o* __this, const MethodInfo* method); */

/* TMPro.Examples.TeleType.<Start>d__4$$System.Collections.IEnumerator.Reset
   void TMPro_Examples_TeleType__Start_d__4__System_Collections_IEnumerator_Reset
   (TMPro_Examples_TeleType__Start_d__4_o* __this, const MethodInfo* method); */

void native_TMPro_Examples_TeleType__Start_d__4__System_Collections_IEnumerator_Reset_54e4e0(void)

{
  undefined8 uVar1;
  undefined8 uVar2;
  
  native_sub_432740(&System_NotSupportedException_TypeInfo_12d5468);
  uVar1 = native_sub_432808();
  native_System_NotSupportedException___ctor_ad264c(uVar1,0);
  uVar2 = native_sub_432740(&
                            Method_TMPro_Examples_TeleType__Start_d__4_System_Collections_IEnumerator_Reset___12ea018
                           );
                    /* WARNING: Subroutine does not return */
  native_sub_4327dc(uVar1,uVar2);
}



/* TMPro.Examples.TeleType.<Start>d__4$$System.Collections.IEnumerator.get_Current @ 0x54e520
 * Il2CppObject* TMPro_Examples_TeleType__Start_d__4__System_Collections_IEnumerator_get_Current (TMPro_Examples_TeleType__Start_d__4_o* __this, const MethodInfo* method); */

/* TMPro.Examples.TeleType.<Start>d__4$$System.Collections.IEnumerator.get_Current
   Il2CppObject* TMPro_Examples_TeleType__Start_d__4__System_Collections_IEnumerator_get_Current
   (TMPro_Examples_TeleType__Start_d__4_o* __this, const MethodInfo* method); */

undefined8
native_TMPro_Examples_TeleType__Start_d__4__System_Collections_IEnumerator_get_Current_54e520
          (long param_1)

{
  return *(undefined8 *)(param_1 + 0x18);
}


