/* ARM64 IL2CPP native pseudocode from Ghidra.
 * Recovered implementation, not original C# source.
 * Function boundaries follow the IL2CPP method address table. */


/* UIPopupList.<CloseIfUnselected>d__112$$.ctor @ 0x558354
 * void UIPopupList__CloseIfUnselected_d__112___ctor (UIPopupList__CloseIfUnselected_d__112_o* __this, int32_t __1__state, const MethodInfo* method); */

/* UIPopupList.<CloseIfUnselected>d__112$$.ctor
   void UIPopupList__CloseIfUnselected_d__112___ctor (UIPopupList__CloseIfUnselected_d__112_o*
   __this, int32_t __1__state, const MethodInfo* method); */

void native_UIPopupList__CloseIfUnselected_d__112___ctor_558354(long param_1,undefined4 param_2)

{
  native_System_Object___ctor_ad2798(param_1,0);
  *(undefined4 *)(param_1 + 0x10) = param_2;
  return;
}



/* UIPopupList.<CloseIfUnselected>d__112$$System.IDisposable.Dispose @ 0x558380
 * void UIPopupList__CloseIfUnselected_d__112__System_IDisposable_Dispose (UIPopupList__CloseIfUnselected_d__112_o* __this, const MethodInfo* method); */

/* UIPopupList.<CloseIfUnselected>d__112$$System.IDisposable.Dispose
   void UIPopupList__CloseIfUnselected_d__112__System_IDisposable_Dispose
   (UIPopupList__CloseIfUnselected_d__112_o* __this, const MethodInfo* method); */

void native_UIPopupList__CloseIfUnselected_d__112__System_IDisposable_Dispose_558380(void)

{
  return;
}



/* UIPopupList.<CloseIfUnselected>d__112$$MoveNext @ 0x558384
 * bool UIPopupList__CloseIfUnselected_d__112__MoveNext (UIPopupList__CloseIfUnselected_d__112_o* __this, const MethodInfo* method); */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* UIPopupList.<CloseIfUnselected>d__112$$MoveNext
   bool UIPopupList__CloseIfUnselected_d__112__MoveNext (UIPopupList__CloseIfUnselected_d__112_o*
   __this, const MethodInfo* method); */

undefined8 native_UIPopupList__CloseIfUnselected_d__112__MoveNext_558384(long param_1)

{
  long lVar1;
  ulong uVar2;
  undefined8 uVar3;
  long *plVar4;
  long lVar5;
  undefined8 uVar6;
  
  if ((bRam000000000133ea01 & 1) == 0) {
    native_sub_43273c(&NGUITools_TypeInfo_12d53c8);
    native_sub_43273c(&UnityEngine_Object_TypeInfo_12d54e0);
    native_sub_43273c(&UICamera_TypeInfo_12d6410);
    native_sub_43273c(&UIPopupList_TypeInfo_12d6490);
    bRam000000000133ea01 = 1;
  }
  if (*(int *)(param_1 + 0x10) == 1) {
    *(undefined4 *)(param_1 + 0x10) = 0xffffffff;
    plVar4 = *(long **)(param_1 + 0x20);
    if (((*(byte *)(_UICamera_TypeInfo_12d6410 + 0x133) >> 2 & 1) != 0) &&
       (*(int *)(_UICamera_TypeInfo_12d6410 + 0xe0) == 0)) {
      native_sub_4327ec();
    }
    lVar1 = native_UICamera__get_selectedObject_c9756c(0);
    if (plVar4 == (long *)0x0) {
LAB_005585c0:
                    /* WARNING: Subroutine does not return */
      native_sub_432810();
    }
    lVar5 = plVar4[0x22];
    if (((*(byte *)(_UnityEngine_Object_TypeInfo_12d54e0 + 0x133) >> 2 & 1) != 0) &&
       (*(int *)(_UnityEngine_Object_TypeInfo_12d54e0 + 0xe0) == 0)) {
      native_sub_4327ec();
    }
    uVar2 = native_UnityEngine_Object__op_Inequality_8d76fc(lVar1,lVar5,0);
    if ((uVar2 & 1) == 0) {
LAB_00558594:
      *(undefined8 *)(param_1 + 0x18) = 0;
      native_sub_4326e0((undefined8 *)(param_1 + 0x18),0);
      *(undefined4 *)(param_1 + 0x10) = 1;
      return 1;
    }
    if (((*(byte *)(_UnityEngine_Object_TypeInfo_12d54e0 + 0x133) >> 2 & 1) != 0) &&
       (*(int *)(_UnityEngine_Object_TypeInfo_12d54e0 + 0xe0) == 0)) {
      native_sub_4327ec();
    }
    uVar2 = native_UnityEngine_Object__op_Equality_8e9a3c(lVar1,0,0);
    if ((uVar2 & 1) == 0) {
      if (((*(byte *)(_UIPopupList_TypeInfo_12d6490 + 0x133) >> 2 & 1) != 0) &&
         (*(int *)(_UIPopupList_TypeInfo_12d6490 + 0xe0) == 0)) {
        native_sub_4327ec();
      }
      uVar6 = *(undefined8 *)(*(long *)(_UIPopupList_TypeInfo_12d6490 + 0xb8) + 8);
      if (((*(byte *)(_UnityEngine_Object_TypeInfo_12d54e0 + 0x133) >> 2 & 1) != 0) &&
         (*(int *)(_UnityEngine_Object_TypeInfo_12d54e0 + 0xe0) == 0)) {
        native_sub_4327ec(_UnityEngine_Object_TypeInfo_12d54e0);
      }
      uVar2 = native_UnityEngine_Object__op_Equality_8e9a3c(lVar1,uVar6,0);
      if ((uVar2 & 1) != 0) goto LAB_00558594;
      if (((*(byte *)(_UIPopupList_TypeInfo_12d6490 + 0x133) >> 2 & 1) != 0) &&
         (*(int *)(_UIPopupList_TypeInfo_12d6490 + 0xe0) == 0)) {
        native_sub_4327ec();
      }
      lVar5 = *(long *)(*(long *)(_UIPopupList_TypeInfo_12d6490 + 0xb8) + 8);
      if ((lVar5 == 0) ||
         (uVar6 = native_UnityEngine_GameObject__get_transform_8de5c8(lVar5,0), lVar1 == 0))
      goto LAB_005585c0;
      uVar3 = native_UnityEngine_GameObject__get_transform_8de5c8(lVar1,0);
      if (((*(byte *)(_NGUITools_TypeInfo_12d53c8 + 0x133) >> 2 & 1) != 0) &&
         (*(int *)(_NGUITools_TypeInfo_12d53c8 + 0xe0) == 0)) {
        native_sub_4327ec(_NGUITools_TypeInfo_12d53c8);
      }
      uVar2 = native_NGUITools__IsChild_730ee8(uVar6,uVar3,0);
      if ((uVar2 & 1) != 0) goto LAB_00558594;
    }
    (**(code **)(*plVar4 + 0x2d8))(plVar4,*(undefined8 *)(*plVar4 + 0x2e0));
  }
  else if (*(int *)(param_1 + 0x10) == 0) {
    *(undefined4 *)(param_1 + 0x10) = 0xffffffff;
    goto LAB_00558594;
  }
  return 0;
}



/* UIPopupList.<CloseIfUnselected>d__112$$System.Collections.Generic.IEnumerator<System.Object>.get_Current @ 0x5585c4
 * Il2CppObject* UIPopupList__CloseIfUnselected_d__112__System_Collections_Generic_IEnumerator_System_Object__get_Current (UIPopupList__CloseIfUnselected_d__112_o* __this, const MethodInfo* method); */

/* UIPopupList.<CloseIfUnselected>d__112$$System.Collections.Generic.IEnumerator<System.Object>.get_Current
   Il2CppObject*
   UIPopupList__CloseIfUnselected_d__112__System_Collections_Generic_IEnumerator_System_Object__get_Current
   (UIPopupList__CloseIfUnselected_d__112_o* __this, const MethodInfo* method); */

undefined8
native_UIPopupList__CloseIfUnselected_d__112__System_Collections_Generic_IEnumerator_System_Object__get_Current_5585c4
          (long param_1)

{
  return *(undefined8 *)(param_1 + 0x18);
}



/* UIPopupList.<CloseIfUnselected>d__112$$System.Collections.IEnumerator.Reset @ 0x5585cc
 * void UIPopupList__CloseIfUnselected_d__112__System_Collections_IEnumerator_Reset (UIPopupList__CloseIfUnselected_d__112_o* __this, const MethodInfo* method); */

/* UIPopupList.<CloseIfUnselected>d__112$$System.Collections.IEnumerator.Reset
   void UIPopupList__CloseIfUnselected_d__112__System_Collections_IEnumerator_Reset
   (UIPopupList__CloseIfUnselected_d__112_o* __this, const MethodInfo* method); */

void native_UIPopupList__CloseIfUnselected_d__112__System_Collections_IEnumerator_Reset_5585cc(void)

{
  undefined8 uVar1;
  undefined8 uVar2;
  
  native_sub_432740(&System_NotSupportedException_TypeInfo_12d5468);
  uVar1 = native_sub_432808();
  native_System_NotSupportedException___ctor_ad264c(uVar1,0);
  uVar2 = native_sub_432740(&
                            Method_UIPopupList__CloseIfUnselected_d__112_System_Collections_IEnumerator_Reset___12ea158
                           );
                    /* WARNING: Subroutine does not return */
  native_sub_4327dc(uVar1,uVar2);
}



/* UIPopupList.<CloseIfUnselected>d__112$$System.Collections.IEnumerator.get_Current @ 0x55860c
 * Il2CppObject* UIPopupList__CloseIfUnselected_d__112__System_Collections_IEnumerator_get_Current (UIPopupList__CloseIfUnselected_d__112_o* __this, const MethodInfo* method); */

/* UIPopupList.<CloseIfUnselected>d__112$$System.Collections.IEnumerator.get_Current
   Il2CppObject* UIPopupList__CloseIfUnselected_d__112__System_Collections_IEnumerator_get_Current
   (UIPopupList__CloseIfUnselected_d__112_o* __this, const MethodInfo* method); */

undefined8
native_UIPopupList__CloseIfUnselected_d__112__System_Collections_IEnumerator_get_Current_55860c
          (long param_1)

{
  return *(undefined8 *)(param_1 + 0x18);
}


