/* ARM64 IL2CPP native pseudocode from Ghidra.
 * Recovered implementation, not original C# source.
 * Function boundaries follow the IL2CPP method address table. */


/* UIPopupList.<UpdateTweenPosition>d__95$$.ctor @ 0x558614
 * void UIPopupList__UpdateTweenPosition_d__95___ctor (UIPopupList__UpdateTweenPosition_d__95_o* __this, int32_t __1__state, const MethodInfo* method); */

/* UIPopupList.<UpdateTweenPosition>d__95$$.ctor
   void UIPopupList__UpdateTweenPosition_d__95___ctor (UIPopupList__UpdateTweenPosition_d__95_o*
   __this, int32_t __1__state, const MethodInfo* method); */

void native_UIPopupList__UpdateTweenPosition_d__95___ctor_558614(long param_1,undefined4 param_2)

{
  native_System_Object___ctor_ad2798(param_1,0);
  *(undefined4 *)(param_1 + 0x10) = param_2;
  return;
}



/* UIPopupList.<UpdateTweenPosition>d__95$$System.IDisposable.Dispose @ 0x558640
 * void UIPopupList__UpdateTweenPosition_d__95__System_IDisposable_Dispose (UIPopupList__UpdateTweenPosition_d__95_o* __this, const MethodInfo* method); */

/* UIPopupList.<UpdateTweenPosition>d__95$$System.IDisposable.Dispose
   void UIPopupList__UpdateTweenPosition_d__95__System_IDisposable_Dispose
   (UIPopupList__UpdateTweenPosition_d__95_o* __this, const MethodInfo* method); */

void native_UIPopupList__UpdateTweenPosition_d__95__System_IDisposable_Dispose_558640(void)

{
  return;
}



/* UIPopupList.<UpdateTweenPosition>d__95$$MoveNext @ 0x558644
 * bool UIPopupList__UpdateTweenPosition_d__95__MoveNext (UIPopupList__UpdateTweenPosition_d__95_o* __this, const MethodInfo* method); */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* UIPopupList.<UpdateTweenPosition>d__95$$MoveNext
   bool UIPopupList__UpdateTweenPosition_d__95__MoveNext (UIPopupList__UpdateTweenPosition_d__95_o*
   __this, const MethodInfo* method); */

undefined8
native_UIPopupList__UpdateTweenPosition_d__95__MoveNext_558644
          (undefined1 param_1 [16],undefined4 param_2,undefined4 param_3,long param_4)

{
  ulong uVar1;
  undefined8 uVar2;
  long *plVar3;
  long lVar4;
  long *plVar5;
  undefined4 uVar6;
  
  if ((bRam000000000133ea02 & 1) == 0) {
    native_sub_43273c(&Method_UnityEngine_Component_GetComponent_TweenPosition____12e2b78);
    native_sub_43273c(&UnityEngine_Object_TypeInfo_12d54e0);
    bRam000000000133ea02 = 1;
  }
  plVar3 = *(long **)(param_4 + 0x20);
  if (*(int *)(param_4 + 0x10) == 1) {
    *(undefined4 *)(param_4 + 0x10) = 0xffffffff;
  }
  else {
    if (*(int *)(param_4 + 0x10) != 0) {
      return 0;
    }
    *(undefined4 *)(param_4 + 0x10) = 0xffffffff;
    if (plVar3 == (long *)0x0) goto LAB_0055880c;
    lVar4 = plVar3[0x1e];
    if (((*(byte *)(_UnityEngine_Object_TypeInfo_12d54e0 + 0x133) >> 2 & 1) != 0) &&
       (*(int *)(_UnityEngine_Object_TypeInfo_12d54e0 + 0xe0) == 0)) {
      native_sub_4327ec();
    }
    uVar1 = native_UnityEngine_Object__op_Inequality_8d76fc(lVar4,0,0);
    if ((uVar1 & 1) == 0) goto LAB_005587f4;
    lVar4 = plVar3[0x1f];
    if (((*(byte *)(_UnityEngine_Object_TypeInfo_12d54e0 + 0x133) >> 2 & 1) != 0) &&
       (*(int *)(_UnityEngine_Object_TypeInfo_12d54e0 + 0xe0) == 0)) {
      native_sub_4327ec();
    }
    uVar1 = native_UnityEngine_Object__op_Inequality_8d76fc(lVar4,0,0);
    if ((uVar1 & 1) == 0) goto LAB_005587f4;
    if (plVar3[0x1e] == 0) goto LAB_0055880c;
    uVar2 = native_UnityEngine_Component__GetComponent_ActiveAnimation__49daec
                      (plVar3[0x1e],
                       _Method_UnityEngine_Component_GetComponent_TweenPosition____12e2b78);
    *(undefined8 *)(param_4 + 0x28) = uVar2;
    native_sub_4326e0((undefined8 *)(param_4 + 0x28),uVar2);
  }
  plVar5 = (long *)(param_4 + 0x28);
  lVar4 = *plVar5;
  if (((*(byte *)(_UnityEngine_Object_TypeInfo_12d54e0 + 0x133) >> 2 & 1) != 0) &&
     (*(int *)(_UnityEngine_Object_TypeInfo_12d54e0 + 0xe0) == 0)) {
    native_sub_4327ec();
  }
  uVar1 = native_UnityEngine_Object__op_Inequality_8d76fc(lVar4,0,0);
  if ((uVar1 & 1) != 0) {
    if (*plVar5 == 0) goto LAB_0055880c;
    uVar1 = native_UnityEngine_Behaviour__get_enabled_8d7acc(*plVar5,0);
    if ((uVar1 & 1) != 0) {
      if (plVar3 != (long *)0x0) {
        lVar4 = *plVar5;
        uVar6 = (**(code **)(*plVar3 + 0x248))(plVar3,*(undefined8 *)(*plVar3 + 0x250));
        if (lVar4 != 0) {
          *(undefined4 *)(lVar4 + 0x8c) = uVar6;
          *(undefined4 *)(lVar4 + 0x90) = param_2;
          *(undefined4 *)(lVar4 + 0x94) = param_3;
          *(undefined8 *)(param_4 + 0x18) = 0;
          native_sub_4326e0((undefined8 *)(param_4 + 0x18),0);
          *(undefined4 *)(param_4 + 0x10) = 1;
          return 1;
        }
      }
      goto LAB_0055880c;
    }
  }
  *plVar5 = 0;
  native_sub_4326e0(plVar5,0);
  if (plVar3 != (long *)0x0) {
LAB_005587f4:
    *(undefined1 *)((long)plVar3 + 0x15a) = 0;
    return 0;
  }
LAB_0055880c:
                    /* WARNING: Subroutine does not return */
  native_sub_432810();
}



/* UIPopupList.<UpdateTweenPosition>d__95$$System.Collections.Generic.IEnumerator<System.Object>.get_Current @ 0x558810
 * Il2CppObject* UIPopupList__UpdateTweenPosition_d__95__System_Collections_Generic_IEnumerator_System_Object__get_Current (UIPopupList__UpdateTweenPosition_d__95_o* __this, const MethodInfo* method); */

/* UIPopupList.<UpdateTweenPosition>d__95$$System.Collections.Generic.IEnumerator<System.Object>.get_Current
   Il2CppObject*
   UIPopupList__UpdateTweenPosition_d__95__System_Collections_Generic_IEnumerator_System_Object__get_Current
   (UIPopupList__UpdateTweenPosition_d__95_o* __this, const MethodInfo* method); */

undefined8
native_UIPopupList__UpdateTweenPosition_d__95__System_Collections_Generic_IEnumerator_System_Object__get_Current_558810
          (long param_1)

{
  return *(undefined8 *)(param_1 + 0x18);
}



/* UIPopupList.<UpdateTweenPosition>d__95$$System.Collections.IEnumerator.Reset @ 0x558818
 * void UIPopupList__UpdateTweenPosition_d__95__System_Collections_IEnumerator_Reset (UIPopupList__UpdateTweenPosition_d__95_o* __this, const MethodInfo* method); */

/* UIPopupList.<UpdateTweenPosition>d__95$$System.Collections.IEnumerator.Reset
   void UIPopupList__UpdateTweenPosition_d__95__System_Collections_IEnumerator_Reset
   (UIPopupList__UpdateTweenPosition_d__95_o* __this, const MethodInfo* method); */

void native_UIPopupList__UpdateTweenPosition_d__95__System_Collections_IEnumerator_Reset_558818
               (void)

{
  undefined8 uVar1;
  undefined8 uVar2;
  
  native_sub_432740(&System_NotSupportedException_TypeInfo_12d5468);
  uVar1 = native_sub_432808();
  native_System_NotSupportedException___ctor_ad264c(uVar1,0);
  uVar2 = native_sub_432740(&
                            Method_UIPopupList__UpdateTweenPosition_d__95_System_Collections_IEnumerator_Reset___12ea160
                           );
                    /* WARNING: Subroutine does not return */
  native_sub_4327dc(uVar1,uVar2);
}



/* UIPopupList.<UpdateTweenPosition>d__95$$System.Collections.IEnumerator.get_Current @ 0x558858
 * Il2CppObject* UIPopupList__UpdateTweenPosition_d__95__System_Collections_IEnumerator_get_Current (UIPopupList__UpdateTweenPosition_d__95_o* __this, const MethodInfo* method); */

/* UIPopupList.<UpdateTweenPosition>d__95$$System.Collections.IEnumerator.get_Current
   Il2CppObject* UIPopupList__UpdateTweenPosition_d__95__System_Collections_IEnumerator_get_Current
   (UIPopupList__UpdateTweenPosition_d__95_o* __this, const MethodInfo* method); */

undefined8
native_UIPopupList__UpdateTweenPosition_d__95__System_Collections_IEnumerator_get_Current_558858
          (long param_1)

{
  return *(undefined8 *)(param_1 + 0x18);
}


