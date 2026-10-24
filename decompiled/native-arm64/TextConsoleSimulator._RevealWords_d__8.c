/* ARM64 IL2CPP native pseudocode from Ghidra.
 * Recovered implementation, not original C# source.
 * Function boundaries follow the IL2CPP method address table. */


/* TMPro.Examples.TextConsoleSimulator.<RevealWords>d__8$$.ctor @ 0x54e728
 * void TMPro_Examples_TextConsoleSimulator__RevealWords_d__8___ctor (TMPro_Examples_TextConsoleSimulator__RevealWords_d__8_o* __this, int32_t __1__state, const MethodInfo* method); */

/* TMPro.Examples.TextConsoleSimulator.<RevealWords>d__8$$.ctor
   void TMPro_Examples_TextConsoleSimulator__RevealWords_d__8___ctor
   (TMPro_Examples_TextConsoleSimulator__RevealWords_d__8_o* __this, int32_t __1__state, const
   MethodInfo* method); */

void native_TMPro_Examples_TextConsoleSimulator__RevealWords_d__8___ctor_54e728
               (long param_1,undefined4 param_2)

{
  native_System_Object___ctor_ad2798(param_1,0);
  *(undefined4 *)(param_1 + 0x10) = param_2;
  return;
}



/* TMPro.Examples.TextConsoleSimulator.<RevealWords>d__8$$System.IDisposable.Dispose @ 0x54e754
 * void TMPro_Examples_TextConsoleSimulator__RevealWords_d__8__System_IDisposable_Dispose (TMPro_Examples_TextConsoleSimulator__RevealWords_d__8_o* __this, const MethodInfo* method); */

/* TMPro.Examples.TextConsoleSimulator.<RevealWords>d__8$$System.IDisposable.Dispose
   void TMPro_Examples_TextConsoleSimulator__RevealWords_d__8__System_IDisposable_Dispose
   (TMPro_Examples_TextConsoleSimulator__RevealWords_d__8_o* __this, const MethodInfo* method); */

void native_TMPro_Examples_TextConsoleSimulator__RevealWords_d__8__System_IDisposable_Dispose_54e754
               (void)

{
  return;
}



/* TMPro.Examples.TextConsoleSimulator.<RevealWords>d__8$$MoveNext @ 0x54e758
 * bool TMPro_Examples_TextConsoleSimulator__RevealWords_d__8__MoveNext (TMPro_Examples_TextConsoleSimulator__RevealWords_d__8_o* __this, const MethodInfo* method); */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* TMPro.Examples.TextConsoleSimulator.<RevealWords>d__8$$MoveNext
   bool TMPro_Examples_TextConsoleSimulator__RevealWords_d__8__MoveNext
   (TMPro_Examples_TextConsoleSimulator__RevealWords_d__8_o* __this, const MethodInfo* method); */

undefined8
native_TMPro_Examples_TextConsoleSimulator__RevealWords_d__8__MoveNext_54e758(long param_1)

{
  int iVar1;
  int iVar2;
  int iVar3;
  long *plVar4;
  undefined8 uVar5;
  undefined4 uVar6;
  int iVar7;
  long lVar8;
  
  if ((bRam000000000133e9e4 & 1) == 0) {
    native_sub_43273c(&UnityEngine_WaitForSeconds_TypeInfo_12d6740);
    bRam000000000133e9e4 = 1;
  }
  iVar7 = *(int *)(param_1 + 0x10);
  if (iVar7 == 2) {
    iVar7 = *(int *)(param_1 + 0x30);
    iVar2 = *(int *)(param_1 + 0x28);
    *(undefined4 *)(param_1 + 0x10) = 0xffffffff;
LAB_0054e818:
    iVar1 = iVar2 + 1;
    iVar3 = 0;
    if (iVar1 != 0) {
      iVar3 = iVar7 / iVar1;
    }
    iVar7 = iVar7 - iVar3 * iVar1;
    if (iVar7 == 0) {
      *(undefined4 *)(param_1 + 0x34) = 0;
    }
    else {
      if (iVar7 < iVar2) {
        if (((*(long *)(param_1 + 0x20) == 0) ||
            (lVar8 = *(long *)(*(long *)(param_1 + 0x20) + 0x360), lVar8 == 0)) ||
           (lVar8 = *(long *)(lVar8 + 0x40), lVar8 == 0)) goto LAB_0054e93c;
        if (*(uint *)(lVar8 + 0x18) <= iVar7 - 1U) {
          uVar5 = native_sub_43283c();
                    /* WARNING: Subroutine does not return */
          native_sub_4327dc(uVar5,0);
        }
        iVar7 = *(int *)(lVar8 + (long)(int)(iVar7 - 1U) * 0x18 + 0x2c) + 1;
      }
      else {
        if (iVar7 != iVar2) goto LAB_0054e888;
        iVar7 = *(int *)(param_1 + 0x2c);
      }
      *(int *)(param_1 + 0x34) = iVar7;
    }
LAB_0054e888:
    if (*(long *)(param_1 + 0x20) == 0) {
LAB_0054e93c:
                    /* WARNING: Subroutine does not return */
      native_sub_432810();
    }
    native_TMPro_TMP_Text__set_maxVisibleCharacters_4bbe74
              (*(long *)(param_1 + 0x20),*(undefined4 *)(param_1 + 0x34),0);
    if (*(int *)(param_1 + 0x2c) <= *(int *)(param_1 + 0x34)) {
      uVar5 = native_sub_432808(_UnityEngine_WaitForSeconds_TypeInfo_12d6740);
      native_UnityEngine_WaitForSeconds___ctor_7775c8(0x3f800000,uVar5,0);
      *(undefined8 *)(param_1 + 0x18) = uVar5;
      native_sub_4326e0((undefined8 *)(param_1 + 0x18),uVar5);
      uVar6 = 1;
      goto LAB_0054e928;
    }
  }
  else {
    if (iVar7 != 1) {
      if (iVar7 != 0) {
        return 0;
      }
      plVar4 = *(long **)(param_1 + 0x20);
      *(undefined4 *)(param_1 + 0x10) = 0xffffffff;
      if (plVar4 == (long *)0x0) goto LAB_0054e93c;
      (**(code **)(*plVar4 + 0x7d8))(plVar4,0,0,*(undefined8 *)(*plVar4 + 0x7e0));
      lVar8 = *(long *)(param_1 + 0x20);
      if ((lVar8 == 0) || (*(long *)(lVar8 + 0x360) == 0)) goto LAB_0054e93c;
      iVar2 = *(int *)(*(long *)(lVar8 + 0x360) + 0x24);
      *(int *)(param_1 + 0x28) = iVar2;
      if (*(long *)(lVar8 + 0x360) == 0) goto LAB_0054e93c;
      uVar6 = *(undefined4 *)(*(long *)(lVar8 + 0x360) + 0x18);
      iVar7 = 0;
      *(undefined8 *)(param_1 + 0x30) = 0;
      *(undefined4 *)(param_1 + 0x2c) = uVar6;
      goto LAB_0054e818;
    }
    *(undefined4 *)(param_1 + 0x10) = 0xffffffff;
  }
  *(int *)(param_1 + 0x30) = *(int *)(param_1 + 0x30) + 1;
  uVar5 = native_sub_432808(_UnityEngine_WaitForSeconds_TypeInfo_12d6740);
  native_UnityEngine_WaitForSeconds___ctor_7775c8(0x3dcccccd,uVar5,0);
  *(undefined8 *)(param_1 + 0x18) = uVar5;
  native_sub_4326e0(param_1 + 0x18,uVar5);
  uVar6 = 2;
LAB_0054e928:
  *(undefined4 *)(param_1 + 0x10) = uVar6;
  return 1;
}



/* TMPro.Examples.TextConsoleSimulator.<RevealWords>d__8$$System.Collections.Generic.IEnumerator<System.Object>.get_Current @ 0x54e94c
 * Il2CppObject* TMPro_Examples_TextConsoleSimulator__RevealWords_d__8__System_Collections_Generic_IEnumerator_System_Object__get_Current (TMPro_Examples_TextConsoleSimulator__RevealWords_d__8_o* __this, const MethodInfo* method); */

/* TMPro.Examples.TextConsoleSimulator.<RevealWords>d__8$$System.Collections.Generic.IEnumerator<System.Object>.get_Current
   Il2CppObject*
   TMPro_Examples_TextConsoleSimulator__RevealWords_d__8__System_Collections_Generic_IEnumerator_System_Object__get_Current
   (TMPro_Examples_TextConsoleSimulator__RevealWords_d__8_o* __this, const MethodInfo* method); */

undefined8
native_TMPro_Examples_TextConsoleSimulator__RevealWords_d__8__System_Collections_Generic_IEnumerator_System_Object__get_Current_54e94c
          (long param_1)

{
  return *(undefined8 *)(param_1 + 0x18);
}



/* TMPro.Examples.TextConsoleSimulator.<RevealWords>d__8$$System.Collections.IEnumerator.Reset @ 0x54e954
 * void TMPro_Examples_TextConsoleSimulator__RevealWords_d__8__System_Collections_IEnumerator_Reset (TMPro_Examples_TextConsoleSimulator__RevealWords_d__8_o* __this, const MethodInfo* method); */

/* TMPro.Examples.TextConsoleSimulator.<RevealWords>d__8$$System.Collections.IEnumerator.Reset
   void TMPro_Examples_TextConsoleSimulator__RevealWords_d__8__System_Collections_IEnumerator_Reset
   (TMPro_Examples_TextConsoleSimulator__RevealWords_d__8_o* __this, const MethodInfo* method); */

void native_TMPro_Examples_TextConsoleSimulator__RevealWords_d__8__System_Collections_IEnumerator_Reset_54e954
               (void)

{
  undefined8 uVar1;
  undefined8 uVar2;
  
  native_sub_432740(&System_NotSupportedException_TypeInfo_12d5468);
  uVar1 = native_sub_432808();
  native_System_NotSupportedException___ctor_ad264c(uVar1,0);
  uVar2 = native_sub_432740(&
                            Method_TMPro_Examples_TextConsoleSimulator__RevealWords_d__8_System_Collections_IEnumerator_Reset___12ea030
                           );
                    /* WARNING: Subroutine does not return */
  native_sub_4327dc(uVar1,uVar2);
}



/* TMPro.Examples.TextConsoleSimulator.<RevealWords>d__8$$System.Collections.IEnumerator.get_Current @ 0x54e994
 * Il2CppObject* TMPro_Examples_TextConsoleSimulator__RevealWords_d__8__System_Collections_IEnumerator_get_Current (TMPro_Examples_TextConsoleSimulator__RevealWords_d__8_o* __this, const MethodInfo* method); */

/* TMPro.Examples.TextConsoleSimulator.<RevealWords>d__8$$System.Collections.IEnumerator.get_Current
   Il2CppObject*
   TMPro_Examples_TextConsoleSimulator__RevealWords_d__8__System_Collections_IEnumerator_get_Current
   (TMPro_Examples_TextConsoleSimulator__RevealWords_d__8_o* __this, const MethodInfo* method); */

undefined8
native_TMPro_Examples_TextConsoleSimulator__RevealWords_d__8__System_Collections_IEnumerator_get_Current_54e994
          (long param_1)

{
  return *(undefined8 *)(param_1 + 0x18);
}


