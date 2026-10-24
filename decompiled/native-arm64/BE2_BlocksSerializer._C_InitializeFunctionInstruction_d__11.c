/* ARM64 IL2CPP native pseudocode from Ghidra.
 * Recovered implementation, not original C# source.
 * Function boundaries follow the IL2CPP method address table. */


/* MG_BlocksEngine2.Serializer.BE2_BlocksSerializer.<C_InitializeFunctionInstruction>d__11$$.ctor @ 0x5463b4
 * void MG_BlocksEngine2_Serializer_BE2_BlocksSerializer__C_InitializeFunctionInstruction_d__11___ctor (MG_BlocksEngine2_Serializer_BE2_BlocksSerializer__C_InitializeFunctionInstruction_d__11_o* __this, int32_t __1__state, const MethodInfo* method); */

/* MG_BlocksEngine2.Serializer.BE2_BlocksSerializer.<C_InitializeFunctionInstruction>d__11$$.ctor
   void 
   MG_BlocksEngine2_Serializer_BE2_BlocksSerializer__C_InitializeFunctionInstruction_d__11___ctor
   (MG_BlocksEngine2_Serializer_BE2_BlocksSerializer__C_InitializeFunctionInstruction_d__11_o*
   __this, int32_t __1__state, const MethodInfo* method); */

void native_MG_BlocksEngine2_Serializer_BE2_BlocksSerializer__C_InitializeFunctionInstruction_d__11___ctor_5463b4
               (long param_1,undefined4 param_2)

{
  native_System_Object___ctor_ad2798(param_1,0);
  *(undefined4 *)(param_1 + 0x10) = param_2;
  return;
}



/* MG_BlocksEngine2.Serializer.BE2_BlocksSerializer.<C_InitializeFunctionInstruction>d__11$$System.IDisposable.Dispose @ 0x5463e0
 * void MG_BlocksEngine2_Serializer_BE2_BlocksSerializer__C_InitializeFunctionInstruction_d__11__System_IDisposable_Dispose (MG_BlocksEngine2_Serializer_BE2_BlocksSerializer__C_InitializeFunctionInstruction_d__11_o* __this, const MethodInfo* method); */

/* MG_BlocksEngine2.Serializer.BE2_BlocksSerializer.<C_InitializeFunctionInstruction>d__11$$System.IDisposable.Dispose
   void 
   MG_BlocksEngine2_Serializer_BE2_BlocksSerializer__C_InitializeFunctionInstruction_d__11__System_IDisposable_Dispose
   (MG_BlocksEngine2_Serializer_BE2_BlocksSerializer__C_InitializeFunctionInstruction_d__11_o*
   __this, const MethodInfo* method); */

void native_MG_BlocksEngine2_Serializer_BE2_BlocksSerializer__C_InitializeFunctionInstruction_d__11__System_IDisposable_Dispose_5463e0
               (void)

{
  return;
}



/* MG_BlocksEngine2.Serializer.BE2_BlocksSerializer.<C_InitializeFunctionInstruction>d__11$$MoveNext @ 0x5463e4
 * bool MG_BlocksEngine2_Serializer_BE2_BlocksSerializer__C_InitializeFunctionInstruction_d__11__MoveNext (MG_BlocksEngine2_Serializer_BE2_BlocksSerializer__C_InitializeFunctionInstruction_d__11_o* __this, const MethodInfo* method); */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* MG_BlocksEngine2.Serializer.BE2_BlocksSerializer.<C_InitializeFunctionInstruction>d__11$$MoveNext
   bool 
   MG_BlocksEngine2_Serializer_BE2_BlocksSerializer__C_InitializeFunctionInstruction_d__11__MoveNext
   (MG_BlocksEngine2_Serializer_BE2_BlocksSerializer__C_InitializeFunctionInstruction_d__11_o*
   __this, const MethodInfo* method); */

undefined8
native_MG_BlocksEngine2_Serializer_BE2_BlocksSerializer__C_InitializeFunctionInstruction_d__11__MoveNext_5463e4
          (long param_1)

{
  int iVar1;
  undefined8 uVar2;
  long *plVar3;
  undefined8 *puVar4;
  long lVar5;
  
  if ((bRam000000000133e996 & 1) == 0) {
    native_sub_43273c(&Method_System_Func_bool___ctor___12db208);
    native_sub_43273c(&System_Func_bool__TypeInfo_12d25d0);
    native_sub_43273c(&
                      Method_MG_BlocksEngine2_Serializer_BE2_BlocksSerializer___c__C_InitializeFunctionInstruction_b__11_0___12e95e8
                     );
    native_sub_43273c(&MG_BlocksEngine2_Serializer_BE2_BlocksSerializer___c_TypeInfo_12d6fc0);
    native_sub_43273c(&UnityEngine_WaitForEndOfFrame_TypeInfo_12d6738);
    native_sub_43273c(&UnityEngine_WaitUntil_TypeInfo_12d6768);
    bRam000000000133e996 = 1;
  }
  iVar1 = *(int *)(param_1 + 0x10);
  if (iVar1 == 2) {
    *(undefined4 *)(param_1 + 0x10) = 0xffffffff;
    if (*(long *)(param_1 + 0x20) == 0) goto LAB_005465cc;
    native_BE2_Ins_FunctionBlock__RebuildFunctionInstance_607424(*(long *)(param_1 + 0x20),0);
  }
  else {
    if (iVar1 == 1) {
      *(undefined4 *)(param_1 + 0x10) = 0xffffffff;
      if (*(long *)(param_1 + 0x20) != 0) {
        native_BE2_Ins_FunctionBlock__Initialize_60717c
                  (*(long *)(param_1 + 0x20),*(undefined8 *)(param_1 + 0x28),0);
        if (((*(byte *)(_MG_BlocksEngine2_Serializer_BE2_BlocksSerializer___c_TypeInfo_12d6fc0 +
                       0x133) >> 2 & 1) != 0) &&
           (*(int *)(_MG_BlocksEngine2_Serializer_BE2_BlocksSerializer___c_TypeInfo_12d6fc0 + 0xe0)
            == 0)) {
          native_sub_4327ec();
        }
        puVar4 = *(undefined8 **)
                  (_MG_BlocksEngine2_Serializer_BE2_BlocksSerializer___c_TypeInfo_12d6fc0 + 0xb8);
        lVar5 = puVar4[1];
        if (lVar5 == 0) {
          if (((*(byte *)(_MG_BlocksEngine2_Serializer_BE2_BlocksSerializer___c_TypeInfo_12d6fc0 +
                         0x133) >> 2 & 1) != 0) &&
             (*(int *)(_MG_BlocksEngine2_Serializer_BE2_BlocksSerializer___c_TypeInfo_12d6fc0 + 0xe0
                      ) == 0)) {
            native_sub_4327ec();
            puVar4 = *(undefined8 **)
                      (_MG_BlocksEngine2_Serializer_BE2_BlocksSerializer___c_TypeInfo_12d6fc0 + 0xb8
                      );
          }
          uVar2 = *puVar4;
          lVar5 = native_sub_432808(_System_Func_bool__TypeInfo_12d25d0);
          native_System_Func_bool____ctor_b4a600
                    (lVar5,uVar2,
                     _Method_MG_BlocksEngine2_Serializer_BE2_BlocksSerializer___c__C_InitializeFunctionInstruction_b__11_0___12e95e8
                     ,_Method_System_Func_bool___ctor___12db208);
          plVar3 = (long *)(*(long *)(
                                     _MG_BlocksEngine2_Serializer_BE2_BlocksSerializer___c_TypeInfo_12d6fc0
                                     + 0xb8) + 8);
          *plVar3 = lVar5;
          native_sub_4326e0(plVar3,lVar5);
        }
        uVar2 = native_sub_432808(_UnityEngine_WaitUntil_TypeInfo_12d6768);
        native_UnityEngine_WaitUntil___ctor_777758(uVar2,lVar5,0);
        *(undefined8 *)(param_1 + 0x18) = uVar2;
        native_sub_4326e0((undefined8 *)(param_1 + 0x18),uVar2);
        *(undefined4 *)(param_1 + 0x10) = 2;
        return 1;
      }
LAB_005465cc:
                    /* WARNING: Subroutine does not return */
      native_sub_432810();
    }
    if (iVar1 == 0) {
      *(undefined4 *)(param_1 + 0x10) = 0xffffffff;
      uVar2 = native_sub_432808(_UnityEngine_WaitForEndOfFrame_TypeInfo_12d6738);
      native_UnityEngine_WaitForEndOfFrame___ctor_7775b8(uVar2,0);
      *(undefined8 *)(param_1 + 0x18) = uVar2;
      native_sub_4326e0(param_1 + 0x18,uVar2);
      *(undefined4 *)(param_1 + 0x10) = 1;
      return 1;
    }
  }
  return 0;
}



/* MG_BlocksEngine2.Serializer.BE2_BlocksSerializer.<C_InitializeFunctionInstruction>d__11$$System.Collections.Generic.IEnumerator<System.Object>.get_Current @ 0x5465d0
 * Il2CppObject* MG_BlocksEngine2_Serializer_BE2_BlocksSerializer__C_InitializeFunctionInstruction_d__11__System_Collections_Generic_IEnumerator_System_Object__get_Current (MG_BlocksEngine2_Serializer_BE2_BlocksSerializer__C_InitializeFunctionInstruction_d__11_o* __this, const MethodInfo* method); */

/* MG_BlocksEngine2.Serializer.BE2_BlocksSerializer.<C_InitializeFunctionInstruction>d__11$$System.Collections.Generic.IEnumerator<System.Object>.get_Current
   Il2CppObject*
   MG_BlocksEngine2_Serializer_BE2_BlocksSerializer__C_InitializeFunctionInstruction_d__11__System_Collections_Generic_IEnumerator_System_Object__get_Current
   (MG_BlocksEngine2_Serializer_BE2_BlocksSerializer__C_InitializeFunctionInstruction_d__11_o*
   __this, const MethodInfo* method); */

undefined8
native_MG_BlocksEngine2_Serializer_BE2_BlocksSerializer__C_InitializeFunctionInstruction_d__11__System_Collections_Generic_IEnumerator_System_Object__get_Current_5465d0
          (long param_1)

{
  return *(undefined8 *)(param_1 + 0x18);
}



/* MG_BlocksEngine2.Serializer.BE2_BlocksSerializer.<C_InitializeFunctionInstruction>d__11$$System.Collections.IEnumerator.Reset @ 0x5465d8
 * void MG_BlocksEngine2_Serializer_BE2_BlocksSerializer__C_InitializeFunctionInstruction_d__11__System_Collections_IEnumerator_Reset (MG_BlocksEngine2_Serializer_BE2_BlocksSerializer__C_InitializeFunctionInstruction_d__11_o* __this, const MethodInfo* method); */

/* MG_BlocksEngine2.Serializer.BE2_BlocksSerializer.<C_InitializeFunctionInstruction>d__11$$System.Collections.IEnumerator.Reset
   void 
   MG_BlocksEngine2_Serializer_BE2_BlocksSerializer__C_InitializeFunctionInstruction_d__11__System_Collections_IEnumerator_Reset
   (MG_BlocksEngine2_Serializer_BE2_BlocksSerializer__C_InitializeFunctionInstruction_d__11_o*
   __this, const MethodInfo* method); */

void native_MG_BlocksEngine2_Serializer_BE2_BlocksSerializer__C_InitializeFunctionInstruction_d__11__System_Collections_IEnumerator_Reset_5465d8
               (void)

{
  undefined8 uVar1;
  undefined8 uVar2;
  
  native_sub_432740(&System_NotSupportedException_TypeInfo_12d5468);
  uVar1 = native_sub_432808();
  native_System_NotSupportedException___ctor_ad264c(uVar1,0);
  uVar2 = native_sub_432740(&
                            Method_MG_BlocksEngine2_Serializer_BE2_BlocksSerializer__C_InitializeFunctionInstruction_d__11_System_Collections_IEnumerator_Reset___12e95f8
                           );
                    /* WARNING: Subroutine does not return */
  native_sub_4327dc(uVar1,uVar2);
}



/* MG_BlocksEngine2.Serializer.BE2_BlocksSerializer.<C_InitializeFunctionInstruction>d__11$$System.Collections.IEnumerator.get_Current @ 0x546618
 * Il2CppObject* MG_BlocksEngine2_Serializer_BE2_BlocksSerializer__C_InitializeFunctionInstruction_d__11__System_Collections_IEnumerator_get_Current (MG_BlocksEngine2_Serializer_BE2_BlocksSerializer__C_InitializeFunctionInstruction_d__11_o* __this, const MethodInfo* method); */

/* MG_BlocksEngine2.Serializer.BE2_BlocksSerializer.<C_InitializeFunctionInstruction>d__11$$System.Collections.IEnumerator.get_Current
   Il2CppObject*
   MG_BlocksEngine2_Serializer_BE2_BlocksSerializer__C_InitializeFunctionInstruction_d__11__System_Collections_IEnumerator_get_Current
   (MG_BlocksEngine2_Serializer_BE2_BlocksSerializer__C_InitializeFunctionInstruction_d__11_o*
   __this, const MethodInfo* method); */

undefined8
native_MG_BlocksEngine2_Serializer_BE2_BlocksSerializer__C_InitializeFunctionInstruction_d__11__System_Collections_IEnumerator_get_Current_546618
          (long param_1)

{
  return *(undefined8 *)(param_1 + 0x18);
}


