/* ARM64 IL2CPP native pseudocode from Ghidra.
 * Recovered implementation, not original C# source.
 * Function boundaries follow the IL2CPP method address table. */


/* TMPro.Examples.TextConsoleSimulator.<RevealCharacters>d__7$$.ctor @ 0x54e528
 * void TMPro_Examples_TextConsoleSimulator__RevealCharacters_d__7___ctor (TMPro_Examples_TextConsoleSimulator__RevealCharacters_d__7_o* __this, int32_t __1__state, const MethodInfo* method); */

/* TMPro.Examples.TextConsoleSimulator.<RevealCharacters>d__7$$.ctor
   void TMPro_Examples_TextConsoleSimulator__RevealCharacters_d__7___ctor
   (TMPro_Examples_TextConsoleSimulator__RevealCharacters_d__7_o* __this, int32_t __1__state, const
   MethodInfo* method); */

void native_TMPro_Examples_TextConsoleSimulator__RevealCharacters_d__7___ctor_54e528
               (long param_1,undefined4 param_2)

{
  native_System_Object___ctor_ad2798(param_1,0);
  *(undefined4 *)(param_1 + 0x10) = param_2;
  return;
}



/* TMPro.Examples.TextConsoleSimulator.<RevealCharacters>d__7$$System.IDisposable.Dispose @ 0x54e554
 * void TMPro_Examples_TextConsoleSimulator__RevealCharacters_d__7__System_IDisposable_Dispose (TMPro_Examples_TextConsoleSimulator__RevealCharacters_d__7_o* __this, const MethodInfo* method); */

/* TMPro.Examples.TextConsoleSimulator.<RevealCharacters>d__7$$System.IDisposable.Dispose
   void TMPro_Examples_TextConsoleSimulator__RevealCharacters_d__7__System_IDisposable_Dispose
   (TMPro_Examples_TextConsoleSimulator__RevealCharacters_d__7_o* __this, const MethodInfo* method);
    */

void native_TMPro_Examples_TextConsoleSimulator__RevealCharacters_d__7__System_IDisposable_Dispose_54e554
               (void)

{
  return;
}



/* TMPro.Examples.TextConsoleSimulator.<RevealCharacters>d__7$$MoveNext @ 0x54e558
 * bool TMPro_Examples_TextConsoleSimulator__RevealCharacters_d__7__MoveNext (TMPro_Examples_TextConsoleSimulator__RevealCharacters_d__7_o* __this, const MethodInfo* method); */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* TMPro.Examples.TextConsoleSimulator.<RevealCharacters>d__7$$MoveNext
   bool TMPro_Examples_TextConsoleSimulator__RevealCharacters_d__7__MoveNext
   (TMPro_Examples_TextConsoleSimulator__RevealCharacters_d__7_o* __this, const MethodInfo* method);
    */

undefined8
native_TMPro_Examples_TextConsoleSimulator__RevealCharacters_d__7__MoveNext_54e558(long param_1)

{
  long *plVar1;
  undefined8 uVar2;
  int iVar3;
  undefined4 uVar4;
  long lVar5;
  
  if ((bRam000000000133e9e3 & 1) == 0) {
    native_sub_43273c(&UnityEngine_WaitForSeconds_TypeInfo_12d6740);
    bRam000000000133e9e3 = 1;
  }
  iVar3 = *(int *)(param_1 + 0x10);
  lVar5 = *(long *)(param_1 + 0x28);
  if (iVar3 == 2) {
    *(undefined4 *)(param_1 + 0x10) = 0xffffffff;
joined_r0x0054e620:
    if (lVar5 == 0) goto LAB_0054e6d4;
    if (*(char *)(lVar5 + 0x20) != '\0') {
      if (*(long *)(param_1 + 0x30) == 0) goto LAB_0054e6d4;
      *(undefined4 *)(param_1 + 0x38) = *(undefined4 *)(*(long *)(param_1 + 0x30) + 0x18);
      *(undefined1 *)(lVar5 + 0x20) = 0;
    }
    iVar3 = *(int *)(param_1 + 0x3c);
    if (*(int *)(param_1 + 0x38) < iVar3) {
      uVar2 = native_sub_432808(_UnityEngine_WaitForSeconds_TypeInfo_12d6740);
      native_UnityEngine_WaitForSeconds___ctor_7775c8(0x3f800000,uVar2,0);
      *(undefined8 *)(param_1 + 0x18) = uVar2;
      native_sub_4326e0((undefined8 *)(param_1 + 0x18),uVar2);
      uVar4 = 1;
      goto LAB_0054e6b4;
    }
  }
  else {
    if (iVar3 != 1) {
      if (iVar3 != 0) {
        return 0;
      }
      plVar1 = *(long **)(param_1 + 0x20);
      *(undefined4 *)(param_1 + 0x10) = 0xffffffff;
      if (plVar1 == (long *)0x0) goto LAB_0054e6d4;
      (**(code **)(*plVar1 + 0x7d8))(plVar1,0,0,*(undefined8 *)(*plVar1 + 0x7e0));
      if (*(long *)(param_1 + 0x20) == 0) goto LAB_0054e6d4;
      plVar1 = (long *)(param_1 + 0x30);
      *plVar1 = *(long *)(*(long *)(param_1 + 0x20) + 0x360);
      native_sub_4326e0(plVar1);
      if (*plVar1 == 0) goto LAB_0054e6d4;
      *(undefined4 *)(param_1 + 0x38) = *(undefined4 *)(*plVar1 + 0x18);
      *(undefined4 *)(param_1 + 0x3c) = 0;
      goto joined_r0x0054e620;
    }
    iVar3 = 0;
    *(undefined4 *)(param_1 + 0x10) = 0xffffffff;
    *(undefined4 *)(param_1 + 0x3c) = 0;
  }
  if (*(long *)(param_1 + 0x20) != 0) {
    native_TMPro_TMP_Text__set_maxVisibleCharacters_4bbe74(*(long *)(param_1 + 0x20),iVar3,0);
    *(undefined8 *)(param_1 + 0x18) = 0;
    *(int *)(param_1 + 0x3c) = *(int *)(param_1 + 0x3c) + 1;
    native_sub_4326e0((undefined8 *)(param_1 + 0x18),0);
    uVar4 = 2;
LAB_0054e6b4:
    *(undefined4 *)(param_1 + 0x10) = uVar4;
    return 1;
  }
LAB_0054e6d4:
                    /* WARNING: Subroutine does not return */
  native_sub_432810();
}



/* TMPro.Examples.TextConsoleSimulator.<RevealCharacters>d__7$$System.Collections.Generic.IEnumerator<System.Object>.get_Current @ 0x54e6d8
 * Il2CppObject* TMPro_Examples_TextConsoleSimulator__RevealCharacters_d__7__System_Collections_Generic_IEnumerator_System_Object__get_Current (TMPro_Examples_TextConsoleSimulator__RevealCharacters_d__7_o* __this, const MethodInfo* method); */

/* TMPro.Examples.TextConsoleSimulator.<RevealCharacters>d__7$$System.Collections.Generic.IEnumerator<System.Object>.get_Current
   Il2CppObject*
   TMPro_Examples_TextConsoleSimulator__RevealCharacters_d__7__System_Collections_Generic_IEnumerator_System_Object__get_Current
   (TMPro_Examples_TextConsoleSimulator__RevealCharacters_d__7_o* __this, const MethodInfo* method);
    */

undefined8
native_TMPro_Examples_TextConsoleSimulator__RevealCharacters_d__7__System_Collections_Generic_IEnumerator_System_Object__get_Current_54e6d8
          (long param_1)

{
  return *(undefined8 *)(param_1 + 0x18);
}



/* TMPro.Examples.TextConsoleSimulator.<RevealCharacters>d__7$$System.Collections.IEnumerator.Reset @ 0x54e6e0
 * void TMPro_Examples_TextConsoleSimulator__RevealCharacters_d__7__System_Collections_IEnumerator_Reset (TMPro_Examples_TextConsoleSimulator__RevealCharacters_d__7_o* __this, const MethodInfo* method); */

/* TMPro.Examples.TextConsoleSimulator.<RevealCharacters>d__7$$System.Collections.IEnumerator.Reset
   void 
   TMPro_Examples_TextConsoleSimulator__RevealCharacters_d__7__System_Collections_IEnumerator_Reset
   (TMPro_Examples_TextConsoleSimulator__RevealCharacters_d__7_o* __this, const MethodInfo* method);
    */

void native_TMPro_Examples_TextConsoleSimulator__RevealCharacters_d__7__System_Collections_IEnumerator_Reset_54e6e0
               (void)

{
  undefined8 uVar1;
  undefined8 uVar2;
  
  native_sub_432740(&System_NotSupportedException_TypeInfo_12d5468);
  uVar1 = native_sub_432808();
  native_System_NotSupportedException___ctor_ad264c(uVar1,0);
  uVar2 = native_sub_432740(&
                            Method_TMPro_Examples_TextConsoleSimulator__RevealCharacters_d__7_System_Collections_IEnumerator_Reset___12ea028
                           );
                    /* WARNING: Subroutine does not return */
  native_sub_4327dc(uVar1,uVar2);
}



/* TMPro.Examples.TextConsoleSimulator.<RevealCharacters>d__7$$System.Collections.IEnumerator.get_Current @ 0x54e720
 * Il2CppObject* TMPro_Examples_TextConsoleSimulator__RevealCharacters_d__7__System_Collections_IEnumerator_get_Current (TMPro_Examples_TextConsoleSimulator__RevealCharacters_d__7_o* __this, const MethodInfo* method); */

/* TMPro.Examples.TextConsoleSimulator.<RevealCharacters>d__7$$System.Collections.IEnumerator.get_Current
   Il2CppObject*
   TMPro_Examples_TextConsoleSimulator__RevealCharacters_d__7__System_Collections_IEnumerator_get_Current
   (TMPro_Examples_TextConsoleSimulator__RevealCharacters_d__7_o* __this, const MethodInfo* method);
    */

undefined8
native_TMPro_Examples_TextConsoleSimulator__RevealCharacters_d__7__System_Collections_IEnumerator_get_Current_54e720
          (long param_1)

{
  return *(undefined8 *)(param_1 + 0x18);
}


