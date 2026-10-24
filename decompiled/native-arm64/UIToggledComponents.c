/* ARM64 IL2CPP native pseudocode from Ghidra.
 * Recovered implementation, not original C# source.
 * Function boundaries follow the IL2CPP method address table. */


/* UIToggledComponents$$Awake @ 0x946cf4
 * void UIToggledComponents__Awake (UIToggledComponents_o* __this, const MethodInfo* method); */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* UIToggledComponents$$Awake
   void UIToggledComponents__Awake (UIToggledComponents_o* __this, const MethodInfo* method); */

long * native_UIToggledComponents__Awake_946cf4(long param_1)

{
  uint uVar1;
  ulong uVar2;
  long lVar3;
  ulong uVar4;
  long lVar5;
  undefined8 *puVar6;
  undefined8 uVar7;
  long *plVar8;
  
  if ((bRam0000000001341434 & 1) == 0) {
    native_sub_43273c(&EventDelegate_Callback_TypeInfo_12d72e8);
    native_sub_43273c(&Method_UnityEngine_Component_GetComponent_UIToggle____12e2c28);
    native_sub_43273c(&EventDelegate_TypeInfo_12d4590);
    native_sub_43273c(&Method_System_Collections_Generic_List_MonoBehaviour__Add___12dcc10);
    native_sub_43273c(&Method_System_Collections_Generic_List_MonoBehaviour__get_Count___12dcc18);
    native_sub_43273c(&UnityEngine_Object_TypeInfo_12d54e0);
    native_sub_43273c(&Method_UIToggledComponents_Toggle___12e78e8);
    bRam0000000001341434 = 1;
  }
  puVar6 = (undefined8 *)(param_1 + 0x28);
  uVar7 = *puVar6;
  if (((*(byte *)(_UnityEngine_Object_TypeInfo_12d54e0 + 0x133) >> 2 & 1) != 0) &&
     (*(int *)(_UnityEngine_Object_TypeInfo_12d54e0 + 0xe0) == 0)) {
    native_sub_4327ec();
  }
  uVar2 = native_UnityEngine_Object__op_Inequality_8d76fc(uVar7,0,0);
  if ((uVar2 & 1) != 0) {
    lVar3 = *(long *)(param_1 + 0x18);
    if (lVar3 == 0) goto LAB_00946e84;
    if (*(int *)(lVar3 + 0x18) == 0) {
      lVar5 = *(long *)(param_1 + 0x20);
      if (lVar5 == 0) goto LAB_00946e84;
      if (*(int *)(lVar5 + 0x18) == 0) {
        if (*(char *)(param_1 + 0x30) != '\0') {
          lVar3 = lVar5;
        }
        native_System_Collections_Generic_List_int_____Add_d40c00
                  (lVar3,*(undefined8 *)(param_1 + 0x28),
                   _Method_System_Collections_Generic_List_MonoBehaviour__Add___12dcc10);
        goto LAB_00946ddc;
      }
    }
    *puVar6 = 0;
    native_sub_4326e0(puVar6,0);
  }
LAB_00946ddc:
  lVar3 = native_UnityEngine_Component__GetComponent_ActiveAnimation__49daec
                    (param_1,_Method_UnityEngine_Component_GetComponent_UIToggle____12e2c28);
  if (lVar3 != 0) {
    lVar3 = *(long *)(lVar3 + 0x50);
    uVar7 = native_sub_432808(_EventDelegate_Callback_TypeInfo_12d72e8);
    native_EventDelegate_Callback___ctor_54bd18
              (uVar7,param_1,_Method_UIToggledComponents_Toggle___12e78e8,0);
    if (((*(byte *)(_EventDelegate_TypeInfo_12d4590 + 0x133) >> 2 & 1) != 0) &&
       (*(int *)(_EventDelegate_TypeInfo_12d4590 + 0xe0) == 0)) {
      native_sub_4327ec();
    }
    if ((bRam0000000001346ef3 & 1) == 0) {
      native_sub_43273c(&EventDelegate_TypeInfo_12d4590,uVar7,0);
      bRam0000000001346ef3 = 1;
    }
    if (((*(byte *)(_EventDelegate_TypeInfo_12d4590 + 0x133) >> 2 & 1) != 0) &&
       (*(int *)(_EventDelegate_TypeInfo_12d4590 + 0xe0) == 0)) {
      native_sub_4327ec();
    }
    if ((bRam0000000001346ef4 & 1) == 0) {
      native_sub_43273c(&UnityEngine_Debug_TypeInfo_12d4338);
      native_sub_43273c(&EventDelegate_TypeInfo_12d4590);
      native_sub_43273c(&Method_System_Collections_Generic_List_EventDelegate__Add___12dc740);
      native_sub_43273c(&Method_System_Collections_Generic_List_EventDelegate__get_Count___12dc760);
      native_sub_43273c(&Method_System_Collections_Generic_List_EventDelegate__get_Item___12dc768);
      native_sub_43273c(&StringLiteral_Attempting_to_add_a_callback_to_a_list_that_s_null_12ec670);
      bRam0000000001346ef4 = 1;
    }
    if (lVar3 == 0) {
      if (((*(byte *)(_UnityEngine_Debug_TypeInfo_12d4338 + 0x133) >> 2 & 1) != 0) &&
         (*(int *)(_UnityEngine_Debug_TypeInfo_12d4338 + 0xe0) == 0)) {
        native_sub_4327ec();
      }
      native_UnityEngine_Debug__LogWarning_8dca9c
                (_StringLiteral_Attempting_to_add_a_callback_to_a_list_that_s_null_12ec670,0);
      plVar8 = (long *)0x0;
    }
    else {
      uVar1 = *(uint *)(lVar3 + 0x18);
      if (0 < (int)uVar1) {
        uVar2 = 0;
        lVar5 = (long)(int)uVar1;
        while( true ) {
          if (uVar1 <= uVar2) {
            native_System_ThrowHelper__ThrowArgumentOutOfRangeException_9fe0f4(0);
          }
          plVar8 = *(long **)(*(long *)(lVar3 + 0x10) + uVar2 * 8 + 0x20);
          if ((plVar8 != (long *)0x0) &&
             (uVar4 = (**(code **)(*plVar8 + 0x138))(plVar8,uVar7,*(undefined8 *)(*plVar8 + 0x140)),
             (uVar4 & 1) != 0)) {
            return plVar8;
          }
          uVar2 = uVar2 + 1;
          if (lVar5 <= (long)uVar2) break;
          uVar1 = *(uint *)(lVar3 + 0x18);
        }
      }
      plVar8 = (long *)native_sub_432808(_EventDelegate_TypeInfo_12d4590);
      native_System_Object___ctor_ad2798(plVar8,0);
      native_EventDelegate__Set_dedf08(plVar8,uVar7);
      if (plVar8 == (long *)0x0) {
                    /* WARNING: Subroutine does not return */
        native_sub_432810();
      }
      *(undefined1 *)(plVar8 + 5) = 0;
      native_System_Collections_Generic_List_int_____Add_d40c00
                (lVar3,plVar8,_Method_System_Collections_Generic_List_EventDelegate__Add___12dc740);
    }
    return plVar8;
  }
LAB_00946e84:
                    /* WARNING: Subroutine does not return */
  native_sub_432810();
}



/* UIToggledComponents$$Toggle @ 0x946e88
 * void UIToggledComponents__Toggle (UIToggledComponents_o* __this, const MethodInfo* method); */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* UIToggledComponents$$Toggle
   void UIToggledComponents__Toggle (UIToggledComponents_o* __this, const MethodInfo* method); */

void native_UIToggledComponents__Toggle_946e88(long param_1)

{
  long lVar1;
  ulong uVar2;
  long lVar3;
  long lVar4;
  long lVar5;
  
  if ((bRam0000000001341435 & 1) == 0) {
    native_sub_43273c(&Method_System_Collections_Generic_List_MonoBehaviour__get_Count___12dcc18);
    native_sub_43273c(&Method_System_Collections_Generic_List_MonoBehaviour__get_Item___12dcc20);
    native_sub_43273c(&UIToggle_TypeInfo_12d64e0);
    bRam0000000001341435 = 1;
  }
  uVar2 = native_UnityEngine_Behaviour__get_enabled_8d7acc(param_1,0);
  if ((uVar2 & 1) == 0) {
    return;
  }
  lVar4 = *(long *)(param_1 + 0x18);
  if (lVar4 != 0) {
    lVar5 = 0;
    while( true ) {
      if ((int)*(uint *)(lVar4 + 0x18) <= (int)(uint)lVar5) break;
      if (*(uint *)(lVar4 + 0x18) <= (uint)lVar5) {
        native_System_ThrowHelper__ThrowArgumentOutOfRangeException_9fe0f4(0);
      }
      lVar4 = *(long *)(*(long *)(lVar4 + 0x10) + lVar5 * 8 + 0x20);
      if (((*(byte *)(_UIToggle_TypeInfo_12d64e0 + 0x133) >> 2 & 1) != 0) &&
         (*(int *)(_UIToggle_TypeInfo_12d64e0 + 0xe0) == 0)) {
        native_sub_4327ec();
      }
      lVar3 = *(long *)(*(long *)(_UIToggle_TypeInfo_12d64e0 + 0xb8) + 8);
      if ((lVar3 == 0) || (lVar4 == 0)) goto LAB_0094701c;
      lVar1 = 0x48;
      if (*(char *)(lVar3 + 0x89) != '\0') {
        lVar1 = 0x88;
      }
      native_UnityEngine_Behaviour__set_enabled_8d7b0c(lVar4,*(undefined1 *)(lVar3 + lVar1),0);
      lVar4 = *(long *)(param_1 + 0x18);
      lVar5 = lVar5 + 1;
      if (lVar4 == 0) goto LAB_0094701c;
    }
    lVar4 = *(long *)(param_1 + 0x20);
    if (lVar4 != 0) {
      lVar5 = 0;
      goto LAB_00946f98;
    }
  }
  goto LAB_0094701c;
  while( true ) {
    lVar1 = 0x48;
    if (*(char *)(lVar3 + 0x89) != '\0') {
      lVar1 = 0x88;
    }
    native_UnityEngine_Behaviour__set_enabled_8d7b0c(lVar4,*(char *)(lVar3 + lVar1) == '\0',0);
    lVar4 = *(long *)(param_1 + 0x20);
    lVar5 = lVar5 + 1;
    if (lVar4 == 0) break;
LAB_00946f98:
    if ((int)*(uint *)(lVar4 + 0x18) <= (int)(uint)lVar5) {
      return;
    }
    if (*(uint *)(lVar4 + 0x18) <= (uint)lVar5) {
      native_System_ThrowHelper__ThrowArgumentOutOfRangeException_9fe0f4(0);
    }
    lVar4 = *(long *)(*(long *)(lVar4 + 0x10) + lVar5 * 8 + 0x20);
    if (((*(byte *)(_UIToggle_TypeInfo_12d64e0 + 0x133) >> 2 & 1) != 0) &&
       (*(int *)(_UIToggle_TypeInfo_12d64e0 + 0xe0) == 0)) {
      native_sub_4327ec();
    }
    lVar3 = *(long *)(*(long *)(_UIToggle_TypeInfo_12d64e0 + 0xb8) + 8);
    if ((lVar3 == 0) || (lVar4 == 0)) break;
  }
LAB_0094701c:
                    /* WARNING: Subroutine does not return */
  native_sub_432810();
}



/* UIToggledComponents$$.ctor @ 0x947034
 * void UIToggledComponents___ctor (UIToggledComponents_o* __this, const MethodInfo* method); */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* UIToggledComponents$$.ctor
   void UIToggledComponents___ctor (UIToggledComponents_o* __this, const MethodInfo* method); */

undefined1  [16] native_UIToggledComponents___ctor_947034(ulong param_1)

{
  undefined1 auVar1 [16];
  
  if ((bRam0000000001340ae0 & 1) == 0) {
    native_sub_43273c(&UnityEngine_Object_TypeInfo_12d54e0,0);
    bRam0000000001340ae0 = 1;
  }
  if (((*(byte *)(_UnityEngine_Object_TypeInfo_12d54e0 + 0x133) >> 2 & 1) != 0) &&
     (*(int *)(_UnityEngine_Object_TypeInfo_12d54e0 + 0xe0) == 0)) {
    native_sub_4327ec();
  }
  auVar1._8_8_ = 0;
  auVar1._0_8_ = param_1;
  return auVar1;
}


