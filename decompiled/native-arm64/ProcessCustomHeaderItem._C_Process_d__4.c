/* ARM64 IL2CPP native pseudocode from Ghidra.
 * Recovered implementation, not original C# source.
 * Function boundaries follow the IL2CPP method address table. */


/* MG_BlocksEngine2.Horizontal.ProcessCustomHeaderItem.<C_Process>d__4$$.ctor @ 0x54cdfc
 * void MG_BlocksEngine2_Horizontal_ProcessCustomHeaderItem__C_Process_d__4___ctor (MG_BlocksEngine2_Horizontal_ProcessCustomHeaderItem__C_Process_d__4_o* __this, int32_t __1__state, const MethodInfo* method); */

/* MG_BlocksEngine2.Horizontal.ProcessCustomHeaderItem.<C_Process>d__4$$.ctor
   void MG_BlocksEngine2_Horizontal_ProcessCustomHeaderItem__C_Process_d__4___ctor
   (MG_BlocksEngine2_Horizontal_ProcessCustomHeaderItem__C_Process_d__4_o* __this, int32_t
   __1__state, const MethodInfo* method); */

void native_MG_BlocksEngine2_Horizontal_ProcessCustomHeaderItem__C_Process_d__4___ctor_54cdfc
               (long param_1,undefined4 param_2)

{
  native_System_Object___ctor_ad2798(param_1,0);
  *(undefined4 *)(param_1 + 0x10) = param_2;
  return;
}



/* MG_BlocksEngine2.Horizontal.ProcessCustomHeaderItem.<C_Process>d__4$$System.IDisposable.Dispose @ 0x54ce28
 * void MG_BlocksEngine2_Horizontal_ProcessCustomHeaderItem__C_Process_d__4__System_IDisposable_Dispose (MG_BlocksEngine2_Horizontal_ProcessCustomHeaderItem__C_Process_d__4_o* __this, const MethodInfo* method); */

/* MG_BlocksEngine2.Horizontal.ProcessCustomHeaderItem.<C_Process>d__4$$System.IDisposable.Dispose
   void 
   MG_BlocksEngine2_Horizontal_ProcessCustomHeaderItem__C_Process_d__4__System_IDisposable_Dispose
   (MG_BlocksEngine2_Horizontal_ProcessCustomHeaderItem__C_Process_d__4_o* __this, const MethodInfo*
   method); */

void native_MG_BlocksEngine2_Horizontal_ProcessCustomHeaderItem__C_Process_d__4__System_IDisposable_Dispose_54ce28
               (void)

{
  return;
}



/* MG_BlocksEngine2.Horizontal.ProcessCustomHeaderItem.<C_Process>d__4$$MoveNext @ 0x54ce2c
 * bool MG_BlocksEngine2_Horizontal_ProcessCustomHeaderItem__C_Process_d__4__MoveNext (MG_BlocksEngine2_Horizontal_ProcessCustomHeaderItem__C_Process_d__4_o* __this, const MethodInfo* method); */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* MG_BlocksEngine2.Horizontal.ProcessCustomHeaderItem.<C_Process>d__4$$MoveNext
   bool MG_BlocksEngine2_Horizontal_ProcessCustomHeaderItem__C_Process_d__4__MoveNext
   (MG_BlocksEngine2_Horizontal_ProcessCustomHeaderItem__C_Process_d__4_o* __this, const MethodInfo*
   method); */

bool native_MG_BlocksEngine2_Horizontal_ProcessCustomHeaderItem__C_Process_d__4__MoveNext_54ce2c
               (long param_1)

{
  int iVar1;
  undefined8 uVar2;
  long lVar3;
  long *plVar4;
  long lVar5;
  long lVar6;
  uint uStack_24;
  
  if ((bRam000000000133e9db & 1) == 0) {
    native_sub_43273c(&
                      MG_BlocksEngine2_Horizontal_Environment_BE2_HorizontalFunctionBlocksManager_TypeInfo_12d39d8
                     );
    native_sub_43273c(&char___TypeInfo_12d3090);
    native_sub_43273c(&Method_UnityEngine_Component_GetComponent_Image____12e2a78);
    native_sub_43273c(&Method_System_Collections_Generic_List_Sprite__get_Item___12dce68);
    native_sub_43273c(&UnityEngine_WaitForEndOfFrame_TypeInfo_12d6738);
    bRam000000000133e9db = 1;
  }
  uStack_24 = 0;
  iVar1 = *(int *)(param_1 + 0x10);
  if (iVar1 != 1) {
    if (iVar1 == 0) {
      *(undefined4 *)(param_1 + 0x10) = 0xffffffff;
      uVar2 = native_sub_432808(_UnityEngine_WaitForEndOfFrame_TypeInfo_12d6738);
      native_UnityEngine_WaitForEndOfFrame___ctor_7775b8(uVar2,0);
      *(undefined8 *)(param_1 + 0x18) = uVar2;
      native_sub_4326e0(param_1 + 0x18,uVar2);
      *(undefined4 *)(param_1 + 0x10) = 1;
    }
    return iVar1 == 0;
  }
  lVar6 = *(long *)(param_1 + 0x20);
  *(undefined4 *)(param_1 + 0x10) = 0xffffffff;
  uStack_24 = 0xffffffff;
  if ((lVar6 != 0) && (*(long *)(lVar6 + 0x18) != 0)) {
    lVar5 = *(long *)(*(long *)(lVar6 + 0x18) + 0x20);
    lVar3 = native_sub_432750(_char___TypeInfo_12d3090,1);
    if (lVar3 != 0) {
      if (*(int *)(lVar3 + 0x18) == 0) {
LAB_0054d01c:
        uVar2 = native_sub_43283c();
                    /* WARNING: Subroutine does not return */
        native_sub_4327dc(uVar2,0);
      }
      *(undefined2 *)(lVar3 + 0x20) = 0x3a;
      if ((lVar5 != 0) && (lVar3 = native_System_String__Split_b095f4(lVar5,lVar3,0), lVar3 != 0)) {
        if (*(uint *)(lVar3 + 0x18) < 2) goto LAB_0054d01c;
        native_System_Int32__TryParse_83c7f0(*(undefined8 *)(lVar3 + 0x28),&uStack_24,0);
        if ((int)uStack_24 < 0) {
          return false;
        }
        if (*(long *)(lVar6 + 0x18) != 0) {
          lVar6 = native_UnityEngine_Component__GetComponent_ActiveAnimation__49daec
                            (*(long *)(lVar6 + 0x18),
                             _Method_UnityEngine_Component_GetComponent_Image____12e2a78);
          plVar4 = (long *)native_MG_BlocksEngine2_Environment_BE2_FunctionBlocksManager__get_Instance_5fd2f8
                                     (0);
          if (plVar4 != (long *)0x0) {
            if (((*(byte *)(
                           _MG_BlocksEngine2_Horizontal_Environment_BE2_HorizontalFunctionBlocksManager_TypeInfo_12d39d8
                           + 300) <= *(byte *)(*plVar4 + 300)) &&
                (*(long *)(*(long *)(*plVar4 + 200) +
                           (ulong)*(byte *)(
                                           _MG_BlocksEngine2_Horizontal_Environment_BE2_HorizontalFunctionBlocksManager_TypeInfo_12d39d8
                                           + 300) * 8 + -8) ==
                 _MG_BlocksEngine2_Horizontal_Environment_BE2_HorizontalFunctionBlocksManager_TypeInfo_12d39d8
                )) && (lVar3 = plVar4[9], lVar3 != 0)) {
              lVar5 = (long)(int)uStack_24;
              if (*(uint *)(lVar3 + 0x18) <= uStack_24) {
                native_System_ThrowHelper__ThrowArgumentOutOfRangeException_9fe0f4(0);
              }
              if (lVar6 != 0) {
                native_UnityEngine_UI_Image__set_sprite_cb7458
                          (lVar6,*(undefined8 *)(*(long *)(lVar3 + 0x10) + lVar5 * 8 + 0x20),0);
                return false;
              }
            }
          }
        }
      }
    }
  }
                    /* WARNING: Subroutine does not return */
  native_sub_432810();
}



/* MG_BlocksEngine2.Horizontal.ProcessCustomHeaderItem.<C_Process>d__4$$System.Collections.Generic.IEnumerator<System.Object>.get_Current @ 0x54d028
 * Il2CppObject* MG_BlocksEngine2_Horizontal_ProcessCustomHeaderItem__C_Process_d__4__System_Collections_Generic_IEnumerator_System_Object__get_Current (MG_BlocksEngine2_Horizontal_ProcessCustomHeaderItem__C_Process_d__4_o* __this, const MethodInfo* method); */

/* MG_BlocksEngine2.Horizontal.ProcessCustomHeaderItem.<C_Process>d__4$$System.Collections.Generic.IEnumerator<System.Object>.get_Current
   Il2CppObject*
   MG_BlocksEngine2_Horizontal_ProcessCustomHeaderItem__C_Process_d__4__System_Collections_Generic_IEnumerator_System_Object__get_Current
   (MG_BlocksEngine2_Horizontal_ProcessCustomHeaderItem__C_Process_d__4_o* __this, const MethodInfo*
   method); */

undefined8
native_MG_BlocksEngine2_Horizontal_ProcessCustomHeaderItem__C_Process_d__4__System_Collections_Generic_IEnumerator_System_Object__get_Current_54d028
          (long param_1)

{
  return *(undefined8 *)(param_1 + 0x18);
}



/* MG_BlocksEngine2.Horizontal.ProcessCustomHeaderItem.<C_Process>d__4$$System.Collections.IEnumerator.Reset @ 0x54d030
 * void MG_BlocksEngine2_Horizontal_ProcessCustomHeaderItem__C_Process_d__4__System_Collections_IEnumerator_Reset (MG_BlocksEngine2_Horizontal_ProcessCustomHeaderItem__C_Process_d__4_o* __this, const MethodInfo* method); */

/* MG_BlocksEngine2.Horizontal.ProcessCustomHeaderItem.<C_Process>d__4$$System.Collections.IEnumerator.Reset
   void 
   MG_BlocksEngine2_Horizontal_ProcessCustomHeaderItem__C_Process_d__4__System_Collections_IEnumerator_Reset
   (MG_BlocksEngine2_Horizontal_ProcessCustomHeaderItem__C_Process_d__4_o* __this, const MethodInfo*
   method); */

void native_MG_BlocksEngine2_Horizontal_ProcessCustomHeaderItem__C_Process_d__4__System_Collections_IEnumerator_Reset_54d030
               (void)

{
  undefined8 uVar1;
  undefined8 uVar2;
  
  native_sub_432740(&System_NotSupportedException_TypeInfo_12d5468);
  uVar1 = native_sub_432808();
  native_System_NotSupportedException___ctor_ad264c(uVar1,0);
  uVar2 = native_sub_432740(&
                            Method_MG_BlocksEngine2_Horizontal_ProcessCustomHeaderItem__C_Process_d__4_System_Collections_IEnumerator_Reset___12e9d50
                           );
                    /* WARNING: Subroutine does not return */
  native_sub_4327dc(uVar1,uVar2);
}



/* MG_BlocksEngine2.Horizontal.ProcessCustomHeaderItem.<C_Process>d__4$$System.Collections.IEnumerator.get_Current @ 0x54d070
 * Il2CppObject* MG_BlocksEngine2_Horizontal_ProcessCustomHeaderItem__C_Process_d__4__System_Collections_IEnumerator_get_Current (MG_BlocksEngine2_Horizontal_ProcessCustomHeaderItem__C_Process_d__4_o* __this, const MethodInfo* method); */

/* MG_BlocksEngine2.Horizontal.ProcessCustomHeaderItem.<C_Process>d__4$$System.Collections.IEnumerator.get_Current
   Il2CppObject*
   MG_BlocksEngine2_Horizontal_ProcessCustomHeaderItem__C_Process_d__4__System_Collections_IEnumerator_get_Current
   (MG_BlocksEngine2_Horizontal_ProcessCustomHeaderItem__C_Process_d__4_o* __this, const MethodInfo*
   method); */

undefined8
native_MG_BlocksEngine2_Horizontal_ProcessCustomHeaderItem__C_Process_d__4__System_Collections_IEnumerator_get_Current_54d070
          (long param_1)

{
  return *(undefined8 *)(param_1 + 0x18);
}


