/* ARM64 IL2CPP native pseudocode from Ghidra.
 * Recovered implementation, not original C# source.
 * Function boundaries follow the IL2CPP method address table. */


/* ContainerScreenLoadingUIController.<LoadNewScene>d__6$$.ctor @ 0x54b7a8
 * void ContainerScreenLoadingUIController__LoadNewScene_d__6___ctor (ContainerScreenLoadingUIController__LoadNewScene_d__6_o* __this, int32_t __1__state, const MethodInfo* method); */

/* ContainerScreenLoadingUIController.<LoadNewScene>d__6$$.ctor
   void ContainerScreenLoadingUIController__LoadNewScene_d__6___ctor
   (ContainerScreenLoadingUIController__LoadNewScene_d__6_o* __this, int32_t __1__state, const
   MethodInfo* method); */

void native_ContainerScreenLoadingUIController__LoadNewScene_d__6___ctor_54b7a8
               (long param_1,undefined4 param_2)

{
  native_System_Object___ctor_ad2798(param_1,0);
  *(undefined4 *)(param_1 + 0x10) = param_2;
  return;
}



/* ContainerScreenLoadingUIController.<LoadNewScene>d__6$$System.IDisposable.Dispose @ 0x54b7d4
 * void ContainerScreenLoadingUIController__LoadNewScene_d__6__System_IDisposable_Dispose (ContainerScreenLoadingUIController__LoadNewScene_d__6_o* __this, const MethodInfo* method); */

/* ContainerScreenLoadingUIController.<LoadNewScene>d__6$$System.IDisposable.Dispose
   void ContainerScreenLoadingUIController__LoadNewScene_d__6__System_IDisposable_Dispose
   (ContainerScreenLoadingUIController__LoadNewScene_d__6_o* __this, const MethodInfo* method); */

void native_ContainerScreenLoadingUIController__LoadNewScene_d__6__System_IDisposable_Dispose_54b7d4
               (void)

{
  return;
}



/* ContainerScreenLoadingUIController.<LoadNewScene>d__6$$MoveNext @ 0x54b7d8
 * bool ContainerScreenLoadingUIController__LoadNewScene_d__6__MoveNext (ContainerScreenLoadingUIController__LoadNewScene_d__6_o* __this, const MethodInfo* method); */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* ContainerScreenLoadingUIController.<LoadNewScene>d__6$$MoveNext
   bool ContainerScreenLoadingUIController__LoadNewScene_d__6__MoveNext
   (ContainerScreenLoadingUIController__LoadNewScene_d__6_o* __this, const MethodInfo* method); */

undefined8
native_ContainerScreenLoadingUIController__LoadNewScene_d__6__MoveNext_54b7d8(long param_1)

{
  int iVar1;
  long lVar2;
  undefined8 uVar3;
  long *plVar4;
  long lVar5;
  float fVar6;
  float fVar7;
  
  if ((bRam000000000133e9cf & 1) == 0) {
    native_sub_43273c(&ContainerScreenLoadingUIController_TypeInfo_12d3f80);
    native_sub_43273c(&UnityEngine_SceneManagement_SceneManager_TypeInfo_12d5bc0);
    native_sub_43273c(&UnityEngine_WaitForEndOfFrame_TypeInfo_12d6738);
    bRam000000000133e9cf = 1;
  }
  iVar1 = *(int *)(param_1 + 0x10);
  lVar5 = *(long *)(param_1 + 0x20);
  if (iVar1 == 2) {
    *(undefined4 *)(param_1 + 0x10) = 0xffffffff;
joined_r0x0054b8ec:
    if (lVar5 != 0) {
      if (*(float *)(lVar5 + 0x20) < 1.0) {
        *(float *)(lVar5 + 0x20) = *(float *)(lVar5 + 0x20) + *(float *)(param_1 + 0x28);
        uVar3 = native_sub_432808(_UnityEngine_WaitForEndOfFrame_TypeInfo_12d6738);
        native_UnityEngine_WaitForEndOfFrame___ctor_7775b8(uVar3,0);
        *(undefined8 *)(param_1 + 0x18) = uVar3;
        native_sub_4326e0(param_1 + 0x18,uVar3);
        *(undefined4 *)(param_1 + 0x10) = 2;
        return 1;
      }
      if (*(long *)(param_1 + 0x30) != 0) {
        native_UnityEngine_AsyncOperation__set_allowSceneActivation_8d6be4
                  (*(long *)(param_1 + 0x30),1,0);
        return 0;
      }
    }
  }
  else {
    if (iVar1 == 1) {
      *(undefined4 *)(param_1 + 0x10) = 0xffffffff;
      goto LAB_0054b948;
    }
    if (iVar1 != 0) {
      return 0;
    }
    *(undefined4 *)(param_1 + 0x10) = 0xffffffff;
    *(undefined4 *)(param_1 + 0x28) = 0x3cf5c28f;
    if (((*(byte *)(_ContainerScreenLoadingUIController_TypeInfo_12d3f80 + 0x133) >> 2 & 1) != 0) &&
       (*(int *)(_ContainerScreenLoadingUIController_TypeInfo_12d3f80 + 0xe0) == 0)) {
      native_sub_4327ec();
    }
    uVar3 = **(undefined8 **)(_ContainerScreenLoadingUIController_TypeInfo_12d3f80 + 0xb8);
    if (((*(byte *)(_UnityEngine_SceneManagement_SceneManager_TypeInfo_12d5bc0 + 0x133) >> 2 & 1) !=
         0) && (*(int *)(_UnityEngine_SceneManagement_SceneManager_TypeInfo_12d5bc0 + 0xe0) == 0)) {
      native_sub_4327ec(_UnityEngine_SceneManagement_SceneManager_TypeInfo_12d5bc0);
    }
    lVar2 = native_UnityEngine_SceneManagement_SceneManager__LoadSceneAsync_76a010(uVar3,0,0);
    plVar4 = (long *)(param_1 + 0x30);
    *plVar4 = lVar2;
    native_sub_4326e0(plVar4,lVar2);
    if (*plVar4 != 0) {
      native_UnityEngine_AsyncOperation__set_allowSceneActivation_8d6be4(*plVar4,0,0);
      while (*(long *)(param_1 + 0x30) != 0) {
        fVar6 = (float)native_UnityEngine_AsyncOperation__get_progress_8d6ba4
                                 (*(long *)(param_1 + 0x30),0);
        if (0.9 <= fVar6) goto joined_r0x0054b8ec;
LAB_0054b948:
        if ((lVar5 == 0) || (*(long *)(param_1 + 0x30) == 0)) break;
        fVar7 = *(float *)(lVar5 + 0x20);
        fVar6 = (float)native_UnityEngine_AsyncOperation__get_progress_8d6ba4
                                 (*(long *)(param_1 + 0x30),0);
        if (fVar7 < fVar6) {
          *(float *)(lVar5 + 0x20) = *(float *)(lVar5 + 0x20) + *(float *)(param_1 + 0x28);
          uVar3 = native_sub_432808(_UnityEngine_WaitForEndOfFrame_TypeInfo_12d6738);
          native_UnityEngine_WaitForEndOfFrame___ctor_7775b8(uVar3,0);
          *(undefined8 *)(param_1 + 0x18) = uVar3;
          native_sub_4326e0(param_1 + 0x18,uVar3);
          *(undefined4 *)(param_1 + 0x10) = 1;
          return 1;
        }
      }
    }
  }
                    /* WARNING: Subroutine does not return */
  native_sub_432810();
}



/* ContainerScreenLoadingUIController.<LoadNewScene>d__6$$System.Collections.Generic.IEnumerator<System.Object>.get_Current @ 0x54ba18
 * Il2CppObject* ContainerScreenLoadingUIController__LoadNewScene_d__6__System_Collections_Generic_IEnumerator_System_Object__get_Current (ContainerScreenLoadingUIController__LoadNewScene_d__6_o* __this, const MethodInfo* method); */

/* ContainerScreenLoadingUIController.<LoadNewScene>d__6$$System.Collections.Generic.IEnumerator<System.Object>.get_Current
   Il2CppObject*
   ContainerScreenLoadingUIController__LoadNewScene_d__6__System_Collections_Generic_IEnumerator_System_Object__get_Current
   (ContainerScreenLoadingUIController__LoadNewScene_d__6_o* __this, const MethodInfo* method); */

undefined8
native_ContainerScreenLoadingUIController__LoadNewScene_d__6__System_Collections_Generic_IEnumerator_System_Object__get_Current_54ba18
          (long param_1)

{
  return *(undefined8 *)(param_1 + 0x18);
}



/* ContainerScreenLoadingUIController.<LoadNewScene>d__6$$System.Collections.IEnumerator.Reset @ 0x54ba20
 * void ContainerScreenLoadingUIController__LoadNewScene_d__6__System_Collections_IEnumerator_Reset (ContainerScreenLoadingUIController__LoadNewScene_d__6_o* __this, const MethodInfo* method); */

/* ContainerScreenLoadingUIController.<LoadNewScene>d__6$$System.Collections.IEnumerator.Reset
   void ContainerScreenLoadingUIController__LoadNewScene_d__6__System_Collections_IEnumerator_Reset
   (ContainerScreenLoadingUIController__LoadNewScene_d__6_o* __this, const MethodInfo* method); */

void native_ContainerScreenLoadingUIController__LoadNewScene_d__6__System_Collections_IEnumerator_Reset_54ba20
               (void)

{
  undefined8 uVar1;
  undefined8 uVar2;
  
  native_sub_432740(&System_NotSupportedException_TypeInfo_12d5468);
  uVar1 = native_sub_432808();
  native_System_NotSupportedException___ctor_ad264c(uVar1,0);
  uVar2 = native_sub_432740(&
                            Method_ContainerScreenLoadingUIController__LoadNewScene_d__6_System_Collections_IEnumerator_Reset___12e9948
                           );
                    /* WARNING: Subroutine does not return */
  native_sub_4327dc(uVar1,uVar2);
}



/* ContainerScreenLoadingUIController.<LoadNewScene>d__6$$System.Collections.IEnumerator.get_Current @ 0x54ba60
 * Il2CppObject* ContainerScreenLoadingUIController__LoadNewScene_d__6__System_Collections_IEnumerator_get_Current (ContainerScreenLoadingUIController__LoadNewScene_d__6_o* __this, const MethodInfo* method); */

/* ContainerScreenLoadingUIController.<LoadNewScene>d__6$$System.Collections.IEnumerator.get_Current
   Il2CppObject*
   ContainerScreenLoadingUIController__LoadNewScene_d__6__System_Collections_IEnumerator_get_Current
   (ContainerScreenLoadingUIController__LoadNewScene_d__6_o* __this, const MethodInfo* method); */

undefined8
native_ContainerScreenLoadingUIController__LoadNewScene_d__6__System_Collections_IEnumerator_get_Current_54ba60
          (long param_1)

{
  return *(undefined8 *)(param_1 + 0x18);
}


