/* ARM64 IL2CPP native pseudocode from Ghidra.
 * Recovered implementation, not original C# source.
 * Function boundaries follow the IL2CPP method address table. */


/* UIPlayAnimation$$get_dualState @ 0xaf536c
 * bool UIPlayAnimation__get_dualState (UIPlayAnimation_o* __this, const MethodInfo* method); */

/* UIPlayAnimation$$get_dualState
   bool UIPlayAnimation__get_dualState (UIPlayAnimation_o* __this, const MethodInfo* method); */

bool native_UIPlayAnimation__get_dualState_af536c(long param_1)

{
  return *(int *)(param_1 + 0x30) - 1U < 2;
}



/* UIPlayAnimation$$Awake @ 0xaf5380
 * void UIPlayAnimation__Awake (UIPlayAnimation_o* __this, const MethodInfo* method); */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* UIPlayAnimation$$Awake
   void UIPlayAnimation__Awake (UIPlayAnimation_o* __this, const MethodInfo* method); */

void native_UIPlayAnimation__Awake_af5380(long param_1)

{
  ulong *puVar1;
  char cVar2;
  bool bVar3;
  long lVar4;
  ulong uVar5;
  undefined8 *puVar6;
  undefined8 uVar7;
  
  if ((bRam0000000001342068 & 1) == 0) {
    native_sub_43273c(&Method_UnityEngine_Component_GetComponent_UIButton____12e2ba0);
    native_sub_43273c(&EventDelegate_TypeInfo_12d4590);
    native_sub_43273c(&UnityEngine_Object_TypeInfo_12d54e0);
    bRam0000000001342068 = 1;
  }
  lVar4 = native_UnityEngine_Component__GetComponent_ActiveAnimation__49daec
                    (param_1,_Method_UnityEngine_Component_GetComponent_UIButton____12e2ba0);
  if (((*(byte *)(_UnityEngine_Object_TypeInfo_12d54e0 + 0x133) >> 2 & 1) != 0) &&
     (*(int *)(_UnityEngine_Object_TypeInfo_12d54e0 + 0xe0) == 0)) {
    native_sub_4327ec(_UnityEngine_Object_TypeInfo_12d54e0);
  }
  uVar5 = native_UnityEngine_Object__op_Inequality_8d76fc(lVar4,0,0);
  if ((uVar5 & 1) != 0) {
    if (lVar4 == 0) {
                    /* WARNING: Subroutine does not return */
      native_sub_432810();
    }
    *(undefined1 *)(param_1 + 0x62) = *(undefined1 *)(lVar4 + 0x84);
  }
  uVar7 = *(undefined8 *)(param_1 + 0x50);
  if (((*(byte *)(_UnityEngine_Object_TypeInfo_12d54e0 + 0x133) >> 2 & 1) != 0) &&
     (*(int *)(_UnityEngine_Object_TypeInfo_12d54e0 + 0xe0) == 0)) {
    native_sub_4327ec();
  }
  uVar5 = native_UnityEngine_Object__op_Inequality_8d76fc(uVar7,0,0);
  if ((uVar5 & 1) != 0) {
    uVar7 = *(undefined8 *)(param_1 + 0x48);
    if (((*(byte *)(_EventDelegate_TypeInfo_12d4590 + 0x133) >> 2 & 1) != 0) &&
       (*(int *)(_EventDelegate_TypeInfo_12d4590 + 0xe0) == 0)) {
      native_sub_4327ec();
    }
    uVar5 = native_EventDelegate__IsValid_deef08(uVar7,0);
    if ((uVar5 & 1) != 0) {
      *(undefined8 *)(param_1 + 0x50) = 0;
      native_sub_4326e0((undefined8 *)(param_1 + 0x50),0);
      puVar6 = (undefined8 *)(param_1 + 0x58);
      *puVar6 = 0;
      if (iRam0000000001345318 != 0) {
        puVar1 = (ulong *)(((ulong)puVar6 >> 0x12 & 0x7fff) * 8 + 0x138ecd8);
        do {
          cVar2 = '\x01';
          bVar3 = (bool)ExclusiveMonitorPass(puVar1,0x10);
          if (bVar3) {
            *puVar1 = *puVar1 | 1L << ((ulong)puVar6 >> 0xc & 0x3f);
            cVar2 = ExclusiveMonitorsStatus();
          }
        } while (cVar2 != '\0');
      }
      return;
    }
  }
  return;
}



/* UIPlayAnimation$$Start @ 0xaf54d0
 * void UIPlayAnimation__Start (UIPlayAnimation_o* __this, const MethodInfo* method); */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* UIPlayAnimation$$Start
   void UIPlayAnimation__Start (UIPlayAnimation_o* __this, const MethodInfo* method); */

void native_UIPlayAnimation__Start_af54d0(long param_1)

{
  long *plVar1;
  ulong uVar2;
  undefined8 uVar3;
  long *plVar4;
  long lVar5;
  
  if ((bRam0000000001342069 & 1) == 0) {
    native_sub_43273c(&Method_UnityEngine_Component_GetComponentInChildren_Animation____12e2c50);
    native_sub_43273c(&Method_UnityEngine_Component_GetComponentInChildren_Animator____12e2c58);
    native_sub_43273c(&UnityEngine_Object_TypeInfo_12d54e0);
    bRam0000000001342069 = 1;
  }
  plVar4 = (long *)(param_1 + 0x18);
  lVar5 = *plVar4;
  *(undefined1 *)(param_1 + 0x60) = 1;
  if (((*(byte *)(_UnityEngine_Object_TypeInfo_12d54e0 + 0x133) >> 2 & 1) != 0) &&
     (*(int *)(_UnityEngine_Object_TypeInfo_12d54e0 + 0xe0) == 0)) {
    native_sub_4327ec();
  }
  uVar2 = native_UnityEngine_Object__op_Equality_8e9a3c(lVar5,0,0);
  plVar1 = (long *)(param_1 + 0x20);
  if ((uVar2 & 1) != 0) {
    lVar5 = *plVar1;
    if (((*(byte *)(_UnityEngine_Object_TypeInfo_12d54e0 + 0x133) >> 2 & 1) != 0) &&
       (*(int *)(_UnityEngine_Object_TypeInfo_12d54e0 + 0xe0) == 0)) {
      native_sub_4327ec();
    }
    uVar2 = native_UnityEngine_Object__op_Equality_8e9a3c(lVar5,0,0);
    if ((uVar2 & 1) != 0) {
      uVar3 = native_UnityEngine_Component__GetComponentInChildren_Animation__49db98
                        (param_1,
                         _Method_UnityEngine_Component_GetComponentInChildren_Animator____12e2c58);
      *(undefined8 *)(param_1 + 0x20) = uVar3;
      native_sub_4326e0(plVar1,uVar3);
    }
  }
  lVar5 = *plVar1;
  if (((*(byte *)(_UnityEngine_Object_TypeInfo_12d54e0 + 0x133) >> 2 & 1) != 0) &&
     (*(int *)(_UnityEngine_Object_TypeInfo_12d54e0 + 0xe0) == 0)) {
    native_sub_4327ec();
  }
  uVar2 = native_UnityEngine_Object__op_Inequality_8d76fc(lVar5,0,0);
  if ((uVar2 & 1) == 0) {
    lVar5 = *plVar4;
    if (((*(byte *)(_UnityEngine_Object_TypeInfo_12d54e0 + 0x133) >> 2 & 1) != 0) &&
       (*(int *)(_UnityEngine_Object_TypeInfo_12d54e0 + 0xe0) == 0)) {
      native_sub_4327ec();
    }
    uVar2 = native_UnityEngine_Object__op_Equality_8e9a3c(lVar5,0,0);
    if ((uVar2 & 1) != 0) {
      uVar3 = native_UnityEngine_Component__GetComponentInChildren_Animation__49db98
                        (param_1,
                         _Method_UnityEngine_Component_GetComponentInChildren_Animation____12e2c50);
      *(undefined8 *)(param_1 + 0x18) = uVar3;
      native_sub_4326e0(plVar4,uVar3);
    }
    lVar5 = *plVar4;
    if (((*(byte *)(_UnityEngine_Object_TypeInfo_12d54e0 + 0x133) >> 2 & 1) != 0) &&
       (*(int *)(_UnityEngine_Object_TypeInfo_12d54e0 + 0xe0) == 0)) {
      native_sub_4327ec();
    }
    uVar2 = native_UnityEngine_Object__op_Inequality_8d76fc(lVar5,0,0);
    if ((uVar2 & 1) == 0) {
      return;
    }
    if (*plVar4 == 0) goto LAB_00af56dc;
    uVar2 = native_UnityEngine_Behaviour__get_enabled_8d7acc(*plVar4,0);
    if ((uVar2 & 1) == 0) {
      return;
    }
    lVar5 = *plVar4;
  }
  else {
    if (*plVar1 == 0) goto LAB_00af56dc;
    uVar2 = native_UnityEngine_Behaviour__get_enabled_8d7acc(*plVar1,0);
    if ((uVar2 & 1) == 0) {
      return;
    }
    lVar5 = *plVar1;
  }
  if (lVar5 != 0) {
    if (pcRam0000000001340948 == (code *)0x0) {
      pcRam0000000001340948 = (code *)native_sub_4326f0(&UNK_00e2c702);
    }
                    /* WARNING: Could not recover jumptable at 0x008d7b58. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*pcRam0000000001340948)(lVar5,0);
    return;
  }
LAB_00af56dc:
                    /* WARNING: Subroutine does not return */
  native_sub_432810();
}



/* UIPlayAnimation$$OnEnable @ 0xaf56e0
 * void UIPlayAnimation__OnEnable (UIPlayAnimation_o* __this, const MethodInfo* method); */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* UIPlayAnimation$$OnEnable
   void UIPlayAnimation__OnEnable (UIPlayAnimation_o* __this, const MethodInfo* method); */

long * native_UIPlayAnimation__OnEnable_af56e0(long param_1)

{
  byte bVar1;
  uint uVar2;
  undefined8 uVar3;
  long *plVar4;
  ulong uVar5;
  long lVar6;
  undefined8 uVar7;
  ulong uVar8;
  long lVar9;
  
  if ((bRam000000000134206a & 1) == 0) {
    native_sub_43273c(&EventDelegate_Callback_TypeInfo_12d72e8);
    native_sub_43273c(&Method_UnityEngine_Component_GetComponent_UIToggle____12e2c28);
    native_sub_43273c(&EventDelegate_TypeInfo_12d4590);
    native_sub_43273c(&UnityEngine_Object_TypeInfo_12d54e0);
    native_sub_43273c(&UICamera_TypeInfo_12d6410);
    native_sub_43273c(&Method_UIPlayAnimation_OnToggle___12e7860);
    bRam000000000134206a = 1;
  }
  if (*(char *)(param_1 + 0x60) != '\0') {
    uVar3 = native_UnityEngine_Component__get_gameObject_8da66c(param_1,0);
    if (((*(byte *)(_UICamera_TypeInfo_12d6410 + 0x133) >> 2 & 1) != 0) &&
       (*(int *)(_UICamera_TypeInfo_12d6410 + 0xe0) == 0)) {
      native_sub_4327ec(_UICamera_TypeInfo_12d6410);
    }
    uVar2 = native_UICamera__IsHighlighted_c92014(uVar3,0);
    native_UIPlayAnimation__OnHover_af59b8(param_1,uVar2 & 1);
  }
  if (((*(byte *)(_UICamera_TypeInfo_12d6410 + 0x133) >> 2 & 1) != 0) &&
     (*(int *)(_UICamera_TypeInfo_12d6410 + 0xe0) == 0)) {
    native_sub_4327ec();
  }
  lVar6 = *(long *)(*(long *)(_UICamera_TypeInfo_12d6410 + 0xb8) + 0xe0);
  if (lVar6 != 0) {
    uVar2 = *(uint *)(param_1 + 0x30);
    if ((uVar2 == 5) || (uVar2 == 2)) {
      if (((*(byte *)(_UICamera_TypeInfo_12d6410 + 0x133) >> 2 & 1) != 0) &&
         (*(int *)(_UICamera_TypeInfo_12d6410 + 0xe0) == 0)) {
        native_sub_4327ec();
        lVar6 = *(long *)(*(long *)(_UICamera_TypeInfo_12d6410 + 0xb8) + 0xe0);
        if (lVar6 == 0) goto LAB_00af59b4;
      }
      uVar7 = *(undefined8 *)(lVar6 + 0x50);
      uVar3 = native_UnityEngine_Component__get_gameObject_8da66c(param_1,0);
      if (((*(byte *)(_UnityEngine_Object_TypeInfo_12d54e0 + 0x133) >> 2 & 1) != 0) &&
         (*(int *)(_UnityEngine_Object_TypeInfo_12d54e0 + 0xe0) == 0)) {
        native_sub_4327ec(_UnityEngine_Object_TypeInfo_12d54e0);
      }
      bVar1 = native_UnityEngine_Object__op_Equality_8e9a3c(uVar7,uVar3,0);
      uVar2 = *(uint *)(param_1 + 0x30);
      *(byte *)(param_1 + 0x61) = bVar1 & 1;
    }
    if ((uVar2 | 2) == 3) {
      if (((*(byte *)(_UICamera_TypeInfo_12d6410 + 0x133) >> 2 & 1) != 0) &&
         (*(int *)(_UICamera_TypeInfo_12d6410 + 0xe0) == 0)) {
        native_sub_4327ec();
      }
      lVar6 = *(long *)(*(long *)(_UICamera_TypeInfo_12d6410 + 0xb8) + 0xe0);
      if (lVar6 == 0) goto LAB_00af59b4;
      uVar7 = *(undefined8 *)(lVar6 + 0x48);
      uVar3 = native_UnityEngine_Component__get_gameObject_8da66c(param_1,0);
      if (((*(byte *)(_UnityEngine_Object_TypeInfo_12d54e0 + 0x133) >> 2 & 1) != 0) &&
         (*(int *)(_UnityEngine_Object_TypeInfo_12d54e0 + 0xe0) == 0)) {
        native_sub_4327ec(_UnityEngine_Object_TypeInfo_12d54e0);
      }
      bVar1 = native_UnityEngine_Object__op_Equality_8e9a3c(uVar7,uVar3,0);
      *(byte *)(param_1 + 0x61) = bVar1 & 1;
    }
  }
  lVar6 = native_UnityEngine_Component__GetComponent_ActiveAnimation__49daec
                    (param_1,_Method_UnityEngine_Component_GetComponent_UIToggle____12e2c28);
  if (((*(byte *)(_UnityEngine_Object_TypeInfo_12d54e0 + 0x133) >> 2 & 1) != 0) &&
     (*(int *)(_UnityEngine_Object_TypeInfo_12d54e0 + 0xe0) == 0)) {
    native_sub_4327ec(_UnityEngine_Object_TypeInfo_12d54e0);
  }
  plVar4 = (long *)native_UnityEngine_Object__op_Inequality_8d76fc(lVar6,0,0);
  if (((ulong)plVar4 & 1) == 0) {
    return plVar4;
  }
  if (lVar6 != 0) {
    lVar6 = *(long *)(lVar6 + 0x50);
    uVar3 = native_sub_432808(_EventDelegate_Callback_TypeInfo_12d72e8);
    native_EventDelegate_Callback___ctor_54bd18
              (uVar3,param_1,_Method_UIPlayAnimation_OnToggle___12e7860,0);
    if (((*(byte *)(_EventDelegate_TypeInfo_12d4590 + 0x133) >> 2 & 1) != 0) &&
       (*(int *)(_EventDelegate_TypeInfo_12d4590 + 0xe0) == 0)) {
      native_sub_4327ec();
    }
    if ((bRam0000000001346ef3 & 1) == 0) {
      native_sub_43273c(&EventDelegate_TypeInfo_12d4590,uVar3,0);
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
    if (lVar6 == 0) {
      if (((*(byte *)(_UnityEngine_Debug_TypeInfo_12d4338 + 0x133) >> 2 & 1) != 0) &&
         (*(int *)(_UnityEngine_Debug_TypeInfo_12d4338 + 0xe0) == 0)) {
        native_sub_4327ec();
      }
      native_UnityEngine_Debug__LogWarning_8dca9c
                (_StringLiteral_Attempting_to_add_a_callback_to_a_list_that_s_null_12ec670,0);
      plVar4 = (long *)0x0;
    }
    else {
      uVar2 = *(uint *)(lVar6 + 0x18);
      if (0 < (int)uVar2) {
        uVar8 = 0;
        lVar9 = (long)(int)uVar2;
        while( true ) {
          if (uVar2 <= uVar8) {
            native_System_ThrowHelper__ThrowArgumentOutOfRangeException_9fe0f4(0);
          }
          plVar4 = *(long **)(*(long *)(lVar6 + 0x10) + uVar8 * 8 + 0x20);
          if ((plVar4 != (long *)0x0) &&
             (uVar5 = (**(code **)(*plVar4 + 0x138))(plVar4,uVar3,*(undefined8 *)(*plVar4 + 0x140)),
             (uVar5 & 1) != 0)) {
            return plVar4;
          }
          uVar8 = uVar8 + 1;
          if (lVar9 <= (long)uVar8) break;
          uVar2 = *(uint *)(lVar6 + 0x18);
        }
      }
      plVar4 = (long *)native_sub_432808(_EventDelegate_TypeInfo_12d4590);
      native_System_Object___ctor_ad2798(plVar4,0);
      native_EventDelegate__Set_dedf08(plVar4,uVar3);
      if (plVar4 == (long *)0x0) {
                    /* WARNING: Subroutine does not return */
        native_sub_432810();
      }
      *(undefined1 *)(plVar4 + 5) = 0;
      native_System_Collections_Generic_List_int_____Add_d40c00
                (lVar6,plVar4,_Method_System_Collections_Generic_List_EventDelegate__Add___12dc740);
    }
    return plVar4;
  }
LAB_00af59b4:
                    /* WARNING: Subroutine does not return */
  native_sub_432810();
}



/* UIPlayAnimation$$OnDisable @ 0xaf5a30
 * void UIPlayAnimation__OnDisable (UIPlayAnimation_o* __this, const MethodInfo* method); */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* UIPlayAnimation$$OnDisable
   void UIPlayAnimation__OnDisable (UIPlayAnimation_o* __this, const MethodInfo* method); */

ulong native_UIPlayAnimation__OnDisable_af5a30(undefined8 param_1)

{
  uint uVar1;
  long lVar2;
  ulong uVar3;
  undefined8 uVar4;
  long *plVar5;
  ulong uVar6;
  long lVar7;
  
  if ((bRam000000000134206b & 1) == 0) {
    native_sub_43273c(&EventDelegate_Callback_TypeInfo_12d72e8);
    native_sub_43273c(&Method_UnityEngine_Component_GetComponent_UIToggle____12e2c28);
    native_sub_43273c(&EventDelegate_TypeInfo_12d4590);
    native_sub_43273c(&UnityEngine_Object_TypeInfo_12d54e0);
    native_sub_43273c(&Method_UIPlayAnimation_OnToggle___12e7860);
    bRam000000000134206b = 1;
  }
  lVar2 = native_UnityEngine_Component__GetComponent_ActiveAnimation__49daec
                    (param_1,_Method_UnityEngine_Component_GetComponent_UIToggle____12e2c28);
  if (((*(byte *)(_UnityEngine_Object_TypeInfo_12d54e0 + 0x133) >> 2 & 1) != 0) &&
     (*(int *)(_UnityEngine_Object_TypeInfo_12d54e0 + 0xe0) == 0)) {
    native_sub_4327ec(_UnityEngine_Object_TypeInfo_12d54e0);
  }
  uVar3 = native_UnityEngine_Object__op_Inequality_8d76fc(lVar2,0,0);
  if ((uVar3 & 1) == 0) {
    return uVar3;
  }
  if (lVar2 == 0) {
                    /* WARNING: Subroutine does not return */
    native_sub_432810();
  }
  lVar2 = *(long *)(lVar2 + 0x50);
  uVar4 = native_sub_432808(_EventDelegate_Callback_TypeInfo_12d72e8);
  native_EventDelegate_Callback___ctor_54bd18
            (uVar4,param_1,_Method_UIPlayAnimation_OnToggle___12e7860,0);
  if (((*(byte *)(_EventDelegate_TypeInfo_12d4590 + 0x133) >> 2 & 1) != 0) &&
     (*(int *)(_EventDelegate_TypeInfo_12d4590 + 0xe0) == 0)) {
    native_sub_4327ec();
  }
  if ((bRam0000000001346ef7 & 1) == 0) {
    native_sub_43273c(&Method_System_Collections_Generic_List_EventDelegate__RemoveAt___12dc758,
                      uVar4,0);
    native_sub_43273c(&Method_System_Collections_Generic_List_EventDelegate__get_Count___12dc760);
    native_sub_43273c(&Method_System_Collections_Generic_List_EventDelegate__get_Item___12dc768);
    bRam0000000001346ef7 = 1;
  }
  if ((lVar2 != 0) && (uVar1 = *(uint *)(lVar2 + 0x18), 0 < (int)uVar1)) {
    uVar3 = 0;
    lVar7 = (long)(int)uVar1;
    while( true ) {
      if (uVar1 <= uVar3) {
        native_System_ThrowHelper__ThrowArgumentOutOfRangeException_9fe0f4(0);
      }
      plVar5 = *(long **)(*(long *)(lVar2 + 0x10) + uVar3 * 8 + 0x20);
      if ((plVar5 != (long *)0x0) &&
         (uVar6 = (**(code **)(*plVar5 + 0x138))(plVar5,uVar4,*(undefined8 *)(*plVar5 + 0x140)),
         (uVar6 & 1) != 0)) {
        native_System_Collections_Generic_List_int_____RemoveAt_d42280
                  (lVar2,uVar3 & 0xffffffff,
                   _Method_System_Collections_Generic_List_EventDelegate__RemoveAt___12dc758);
        return 1;
      }
      uVar3 = uVar3 + 1;
      if (lVar7 <= (long)uVar3) break;
      uVar1 = *(uint *)(lVar2 + 0x18);
    }
  }
  return 0;
}



/* UIPlayAnimation$$OnHover @ 0xaf59b8
 * void UIPlayAnimation__OnHover (UIPlayAnimation_o* __this, bool isOver, const MethodInfo* method); */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* UIPlayAnimation$$OnHover
   void UIPlayAnimation__OnHover (UIPlayAnimation_o* __this, bool isOver, const MethodInfo* method);
    */

void native_UIPlayAnimation__OnHover_af59b8(long param_1,byte param_2)

{
  bool bVar1;
  ulong uVar2;
  undefined8 uVar3;
  long lVar4;
  long lVar5;
  undefined8 uVar6;
  int iVar7;
  
  uVar2 = native_UnityEngine_Behaviour__get_enabled_8d7acc(param_1,0);
  if ((uVar2 & 1) == 0) {
    return;
  }
  iVar7 = *(int *)(param_1 + 0x30);
  if (((iVar7 != 4 || (param_2 & 1) != 0) && (iVar7 != 1)) && ((iVar7 == 3 & param_2) == 0)) {
    return;
  }
  bVar1 = (bool)(param_2 & 1);
  if ((bRam0000000001342073 & 1) == 0) {
    native_sub_43273c(&EventDelegate_Callback_TypeInfo_12d72e8);
    native_sub_43273c(&EventDelegate_TypeInfo_12d4590);
    native_sub_43273c(&Method_System_Collections_Generic_List_EventDelegate__get_Count___12dc760);
    native_sub_43273c(&UnityEngine_Object_TypeInfo_12d54e0);
    native_sub_43273c(&UICamera_TypeInfo_12d6410);
    native_sub_43273c(&Method_UIPlayAnimation_OnFinished___12e7858);
    bRam0000000001342073 = 1;
  }
  uVar6 = *(undefined8 *)(param_1 + 0x18);
  if (((*(byte *)(_UnityEngine_Object_TypeInfo_12d54e0 + 0x133) >> 2 & 1) != 0) &&
     (*(int *)(_UnityEngine_Object_TypeInfo_12d54e0 + 0xe0) == 0)) {
    native_sub_4327ec();
  }
  uVar2 = native_UnityEngine_Object__op_Implicit_8e1b98(uVar6,0);
  if ((uVar2 & 1) == 0) {
    uVar6 = *(undefined8 *)(param_1 + 0x20);
    if (((*(byte *)(_UnityEngine_Object_TypeInfo_12d54e0 + 0x133) >> 2 & 1) != 0) &&
       (*(int *)(_UnityEngine_Object_TypeInfo_12d54e0 + 0xe0) == 0)) {
      native_sub_4327ec();
    }
    uVar2 = native_UnityEngine_Object__op_Implicit_8e1b98(uVar6,0);
    if ((uVar2 & 1) == 0) {
      return;
    }
  }
  if (iVar7 - 1U < 2) {
    if ((*(char *)(param_1 + 0x61) != '\0') == bVar1) {
      return;
    }
    *(bool *)(param_1 + 0x61) = bVar1;
  }
  if (*(char *)(param_1 + 0x39) != '\0') {
    if (((*(byte *)(_UICamera_TypeInfo_12d6410 + 0x133) >> 2 & 1) != 0) &&
       (*(int *)(_UICamera_TypeInfo_12d6410 + 0xe0) == 0)) {
      native_sub_4327ec();
    }
    uVar6 = native_UICamera__get_selectedObject_c9756c(0);
    uVar3 = native_UnityEngine_Component__get_gameObject_8da66c(param_1,0);
    if (((*(byte *)(_UnityEngine_Object_TypeInfo_12d54e0 + 0x133) >> 2 & 1) != 0) &&
       (*(int *)(_UnityEngine_Object_TypeInfo_12d54e0 + 0xe0) == 0)) {
      native_sub_4327ec(_UnityEngine_Object_TypeInfo_12d54e0);
    }
    uVar2 = native_UnityEngine_Object__op_Equality_8e9a3c(uVar6,uVar3,0);
    if ((uVar2 & 1) != 0) {
      if (((*(byte *)(_UICamera_TypeInfo_12d6410 + 0x133) >> 2 & 1) != 0) &&
         (*(int *)(_UICamera_TypeInfo_12d6410 + 0xe0) == 0)) {
        native_sub_4327ec();
      }
      native_UICamera__set_selectedObject_c976a4(0,0);
    }
  }
  uVar6 = *(undefined8 *)(param_1 + 0x18);
  iVar7 = -*(int *)(param_1 + 0x34);
  if (bVar1 != false) {
    iVar7 = *(int *)(param_1 + 0x34);
  }
  if (((*(byte *)(_UnityEngine_Object_TypeInfo_12d54e0 + 0x133) >> 2 & 1) != 0) &&
     (*(int *)(_UnityEngine_Object_TypeInfo_12d54e0 + 0xe0) == 0)) {
    native_sub_4327ec();
  }
  uVar2 = native_UnityEngine_Object__op_Implicit_8e1b98(uVar6,0);
  if ((uVar2 & 1) == 0) {
    lVar4 = native_ActiveAnimation__Play_561f30
                      (*(undefined8 *)(param_1 + 0x20),*(undefined8 *)(param_1 + 0x28),iVar7,
                       *(undefined4 *)(param_1 + 0x3c),*(undefined4 *)(param_1 + 0x40),0);
  }
  else {
    lVar4 = native_ActiveAnimation__Play_561c20
                      (*(undefined8 *)(param_1 + 0x18),*(undefined8 *)(param_1 + 0x28),iVar7,
                       *(undefined4 *)(param_1 + 0x3c),*(undefined4 *)(param_1 + 0x40),0);
  }
  if (((*(byte *)(_UnityEngine_Object_TypeInfo_12d54e0 + 0x133) >> 2 & 1) != 0) &&
     (*(int *)(_UnityEngine_Object_TypeInfo_12d54e0 + 0xe0) == 0)) {
    native_sub_4327ec();
  }
  uVar2 = native_UnityEngine_Object__op_Inequality_8d76fc(lVar4,0,0);
  if ((uVar2 & 1) == 0) {
    return;
  }
  if (*(char *)(param_1 + 0x38) != '\0') {
    if (lVar4 == 0) goto LAB_00af5e3c;
    native_ActiveAnimation__Reset_560c68(lVar4,0);
  }
  lVar5 = *(long *)(param_1 + 0x48);
  if (lVar5 != 0) {
    iVar7 = -1;
    do {
      iVar7 = iVar7 + 1;
      if (*(int *)(lVar5 + 0x18) <= iVar7) {
        return;
      }
      if (lVar4 == 0) break;
      uVar3 = *(undefined8 *)(lVar4 + 0x18);
      uVar6 = native_sub_432808(_EventDelegate_Callback_TypeInfo_12d72e8);
      native_EventDelegate_Callback___ctor_54bd18
                (uVar6,param_1,_Method_UIPlayAnimation_OnFinished___12e7858,0);
      if (((*(byte *)(_EventDelegate_TypeInfo_12d4590 + 0x133) >> 2 & 1) != 0) &&
         (*(int *)(_EventDelegate_TypeInfo_12d4590 + 0xe0) == 0)) {
        native_sub_4327ec();
      }
      native_EventDelegate__Add_def180(uVar3,uVar6,1,0);
      lVar5 = *(long *)(param_1 + 0x48);
    } while (lVar5 != 0);
  }
LAB_00af5e3c:
                    /* WARNING: Subroutine does not return */
  native_sub_432810();
}



/* UIPlayAnimation$$OnPress @ 0xaf5e58
 * void UIPlayAnimation__OnPress (UIPlayAnimation_o* __this, bool isPressed, const MethodInfo* method); */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* UIPlayAnimation$$OnPress
   void UIPlayAnimation__OnPress (UIPlayAnimation_o* __this, bool isPressed, const MethodInfo*
   method); */

void native_UIPlayAnimation__OnPress_af5e58(long param_1,byte param_2)

{
  undefined8 uVar1;
  long lVar2;
  ulong uVar3;
  long lVar4;
  undefined8 uVar5;
  int iVar6;
  
  if ((bRam000000000134206c & 1) == 0) {
    native_sub_43273c(&UICamera_TypeInfo_12d6410);
    bRam000000000134206c = 1;
  }
  uVar3 = native_UnityEngine_Behaviour__get_enabled_8d7acc(param_1,0);
  if ((uVar3 & 1) == 0) {
    return;
  }
  if (((*(byte *)(_UICamera_TypeInfo_12d6410 + 0x133) >> 2 & 1) != 0) &&
     (*(int *)(_UICamera_TypeInfo_12d6410 + 0xe0) == 0)) {
    native_sub_4327ec();
  }
  iVar6 = *(int *)(*(long *)(_UICamera_TypeInfo_12d6410 + 0xb8) + 0xd4);
  if (iVar6 == -2) {
    return;
  }
  if (((*(byte *)(_UICamera_TypeInfo_12d6410 + 0x133) >> 2 & 1) != 0) &&
     (*(int *)(_UICamera_TypeInfo_12d6410 + 0xe0) == 0)) {
    native_sub_4327ec();
    iVar6 = *(int *)(*(long *)(_UICamera_TypeInfo_12d6410 + 0xb8) + 0xd4);
  }
  if (iVar6 == -3) {
    return;
  }
  iVar6 = *(int *)(param_1 + 0x30);
  if (((iVar6 != 6 || (param_2 & 1) != 0) && (iVar6 != 2)) && ((iVar6 == 5 & param_2) == 0)) {
    return;
  }
  if ((bRam0000000001342073 & 1) == 0) {
    native_sub_43273c(&EventDelegate_Callback_TypeInfo_12d72e8);
    native_sub_43273c(&EventDelegate_TypeInfo_12d4590);
    native_sub_43273c(&Method_System_Collections_Generic_List_EventDelegate__get_Count___12dc760);
    native_sub_43273c(&UnityEngine_Object_TypeInfo_12d54e0);
    native_sub_43273c(&UICamera_TypeInfo_12d6410);
    native_sub_43273c(&Method_UIPlayAnimation_OnFinished___12e7858);
    bRam0000000001342073 = 1;
  }
  uVar5 = *(undefined8 *)(param_1 + 0x18);
  if (((*(byte *)(_UnityEngine_Object_TypeInfo_12d54e0 + 0x133) >> 2 & 1) != 0) &&
     (*(int *)(_UnityEngine_Object_TypeInfo_12d54e0 + 0xe0) == 0)) {
    native_sub_4327ec();
  }
  uVar3 = native_UnityEngine_Object__op_Implicit_8e1b98(uVar5,0);
  if ((uVar3 & 1) == 0) {
    uVar5 = *(undefined8 *)(param_1 + 0x20);
    if (((*(byte *)(_UnityEngine_Object_TypeInfo_12d54e0 + 0x133) >> 2 & 1) != 0) &&
       (*(int *)(_UnityEngine_Object_TypeInfo_12d54e0 + 0xe0) == 0)) {
      native_sub_4327ec();
    }
    uVar3 = native_UnityEngine_Object__op_Implicit_8e1b98(uVar5,0);
    if ((uVar3 & 1) == 0) {
      return;
    }
  }
  if (iVar6 - 1U < 2) {
    if ((*(char *)(param_1 + 0x61) != '\0') == (bool)(param_2 & 1)) {
      return;
    }
    *(byte *)(param_1 + 0x61) = param_2 & 1;
  }
  if (*(char *)(param_1 + 0x39) != '\0') {
    if (((*(byte *)(_UICamera_TypeInfo_12d6410 + 0x133) >> 2 & 1) != 0) &&
       (*(int *)(_UICamera_TypeInfo_12d6410 + 0xe0) == 0)) {
      native_sub_4327ec();
    }
    uVar5 = native_UICamera__get_selectedObject_c9756c(0);
    uVar1 = native_UnityEngine_Component__get_gameObject_8da66c(param_1,0);
    if (((*(byte *)(_UnityEngine_Object_TypeInfo_12d54e0 + 0x133) >> 2 & 1) != 0) &&
       (*(int *)(_UnityEngine_Object_TypeInfo_12d54e0 + 0xe0) == 0)) {
      native_sub_4327ec(_UnityEngine_Object_TypeInfo_12d54e0);
    }
    uVar3 = native_UnityEngine_Object__op_Equality_8e9a3c(uVar5,uVar1,0);
    if ((uVar3 & 1) != 0) {
      if (((*(byte *)(_UICamera_TypeInfo_12d6410 + 0x133) >> 2 & 1) != 0) &&
         (*(int *)(_UICamera_TypeInfo_12d6410 + 0xe0) == 0)) {
        native_sub_4327ec();
      }
      native_UICamera__set_selectedObject_c976a4(0,0);
    }
  }
  uVar5 = *(undefined8 *)(param_1 + 0x18);
  iVar6 = -*(int *)(param_1 + 0x34);
  if ((param_2 & 1) != 0) {
    iVar6 = *(int *)(param_1 + 0x34);
  }
  if (((*(byte *)(_UnityEngine_Object_TypeInfo_12d54e0 + 0x133) >> 2 & 1) != 0) &&
     (*(int *)(_UnityEngine_Object_TypeInfo_12d54e0 + 0xe0) == 0)) {
    native_sub_4327ec();
  }
  uVar3 = native_UnityEngine_Object__op_Implicit_8e1b98(uVar5,0);
  if ((uVar3 & 1) == 0) {
    lVar2 = native_ActiveAnimation__Play_561f30
                      (*(undefined8 *)(param_1 + 0x20),*(undefined8 *)(param_1 + 0x28),iVar6,
                       *(undefined4 *)(param_1 + 0x3c),*(undefined4 *)(param_1 + 0x40),0);
  }
  else {
    lVar2 = native_ActiveAnimation__Play_561c20
                      (*(undefined8 *)(param_1 + 0x18),*(undefined8 *)(param_1 + 0x28),iVar6,
                       *(undefined4 *)(param_1 + 0x3c),*(undefined4 *)(param_1 + 0x40),0);
  }
  if (((*(byte *)(_UnityEngine_Object_TypeInfo_12d54e0 + 0x133) >> 2 & 1) != 0) &&
     (*(int *)(_UnityEngine_Object_TypeInfo_12d54e0 + 0xe0) == 0)) {
    native_sub_4327ec();
  }
  uVar3 = native_UnityEngine_Object__op_Inequality_8d76fc(lVar2,0,0);
  if ((uVar3 & 1) == 0) {
    return;
  }
  if (*(char *)(param_1 + 0x38) != '\0') {
    if (lVar2 == 0) goto LAB_00af5e3c;
    native_ActiveAnimation__Reset_560c68(lVar2,0);
  }
  lVar4 = *(long *)(param_1 + 0x48);
  if (lVar4 != 0) {
    iVar6 = -1;
    do {
      iVar6 = iVar6 + 1;
      if (*(int *)(lVar4 + 0x18) <= iVar6) {
        return;
      }
      if (lVar2 == 0) break;
      uVar1 = *(undefined8 *)(lVar2 + 0x18);
      uVar5 = native_sub_432808(_EventDelegate_Callback_TypeInfo_12d72e8);
      native_EventDelegate_Callback___ctor_54bd18
                (uVar5,param_1,_Method_UIPlayAnimation_OnFinished___12e7858,0);
      if (((*(byte *)(_EventDelegate_TypeInfo_12d4590 + 0x133) >> 2 & 1) != 0) &&
         (*(int *)(_EventDelegate_TypeInfo_12d4590 + 0xe0) == 0)) {
        native_sub_4327ec();
      }
      native_EventDelegate__Add_def180(uVar1,uVar5,1,0);
      lVar4 = *(long *)(param_1 + 0x48);
    } while (lVar4 != 0);
  }
LAB_00af5e3c:
                    /* WARNING: Subroutine does not return */
  native_sub_432810();
}



/* UIPlayAnimation$$OnClick @ 0xaf5f5c
 * void UIPlayAnimation__OnClick (UIPlayAnimation_o* __this, const MethodInfo* method); */

/* WARNING: Removing unreachable block (ram,0x00af5c4c) */
/* WARNING: Removing unreachable block (ram,0x00af5c60) */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* UIPlayAnimation$$OnClick
   void UIPlayAnimation__OnClick (UIPlayAnimation_o* __this, const MethodInfo* method); */

void native_UIPlayAnimation__OnClick_af5f5c(long param_1)

{
  undefined4 uVar1;
  undefined8 uVar2;
  long lVar3;
  ulong uVar4;
  long lVar5;
  undefined8 uVar6;
  int iVar7;
  
  if ((bRam000000000134206d & 1) == 0) {
    native_sub_43273c(&UICamera_TypeInfo_12d6410);
    bRam000000000134206d = 1;
  }
  if (((*(byte *)(_UICamera_TypeInfo_12d6410 + 0x133) >> 2 & 1) != 0) &&
     (*(int *)(_UICamera_TypeInfo_12d6410 + 0xe0) == 0)) {
    native_sub_4327ec();
  }
  iVar7 = *(int *)(*(long *)(_UICamera_TypeInfo_12d6410 + 0xb8) + 0xd4);
  if (iVar7 == -2) {
    return;
  }
  if (((*(byte *)(_UICamera_TypeInfo_12d6410 + 0x133) >> 2 & 1) != 0) &&
     (*(int *)(_UICamera_TypeInfo_12d6410 + 0xe0) == 0)) {
    native_sub_4327ec();
    iVar7 = *(int *)(*(long *)(_UICamera_TypeInfo_12d6410 + 0xb8) + 0xd4);
  }
  if (iVar7 == -3) {
    return;
  }
  uVar4 = native_UnityEngine_Behaviour__get_enabled_8d7acc(param_1,0);
  if ((uVar4 & 1) == 0) {
    return;
  }
  if (*(int *)(param_1 + 0x30) != 0) {
    return;
  }
  if ((bRam0000000001342073 & 1) == 0) {
    native_sub_43273c(&EventDelegate_Callback_TypeInfo_12d72e8);
    native_sub_43273c(&EventDelegate_TypeInfo_12d4590);
    native_sub_43273c(&Method_System_Collections_Generic_List_EventDelegate__get_Count___12dc760);
    native_sub_43273c(&UnityEngine_Object_TypeInfo_12d54e0);
    native_sub_43273c(&UICamera_TypeInfo_12d6410);
    native_sub_43273c(&Method_UIPlayAnimation_OnFinished___12e7858);
    bRam0000000001342073 = 1;
  }
  uVar6 = *(undefined8 *)(param_1 + 0x18);
  if (((*(byte *)(_UnityEngine_Object_TypeInfo_12d54e0 + 0x133) >> 2 & 1) != 0) &&
     (*(int *)(_UnityEngine_Object_TypeInfo_12d54e0 + 0xe0) == 0)) {
    native_sub_4327ec();
  }
  uVar4 = native_UnityEngine_Object__op_Implicit_8e1b98(uVar6,0);
  if ((uVar4 & 1) == 0) {
    uVar6 = *(undefined8 *)(param_1 + 0x20);
    if (((*(byte *)(_UnityEngine_Object_TypeInfo_12d54e0 + 0x133) >> 2 & 1) != 0) &&
       (*(int *)(_UnityEngine_Object_TypeInfo_12d54e0 + 0xe0) == 0)) {
      native_sub_4327ec();
    }
    uVar4 = native_UnityEngine_Object__op_Implicit_8e1b98(uVar6,0);
    if ((uVar4 & 1) == 0) {
      return;
    }
  }
  if (*(char *)(param_1 + 0x39) != '\0') {
    if (((*(byte *)(_UICamera_TypeInfo_12d6410 + 0x133) >> 2 & 1) != 0) &&
       (*(int *)(_UICamera_TypeInfo_12d6410 + 0xe0) == 0)) {
      native_sub_4327ec();
    }
    uVar6 = native_UICamera__get_selectedObject_c9756c(0);
    uVar2 = native_UnityEngine_Component__get_gameObject_8da66c(param_1,0);
    if (((*(byte *)(_UnityEngine_Object_TypeInfo_12d54e0 + 0x133) >> 2 & 1) != 0) &&
       (*(int *)(_UnityEngine_Object_TypeInfo_12d54e0 + 0xe0) == 0)) {
      native_sub_4327ec(_UnityEngine_Object_TypeInfo_12d54e0);
    }
    uVar4 = native_UnityEngine_Object__op_Equality_8e9a3c(uVar6,uVar2,0);
    if ((uVar4 & 1) != 0) {
      if (((*(byte *)(_UICamera_TypeInfo_12d6410 + 0x133) >> 2 & 1) != 0) &&
         (*(int *)(_UICamera_TypeInfo_12d6410 + 0xe0) == 0)) {
        native_sub_4327ec();
      }
      native_UICamera__set_selectedObject_c976a4(0,0);
    }
  }
  uVar1 = *(undefined4 *)(param_1 + 0x34);
  uVar6 = *(undefined8 *)(param_1 + 0x18);
  if (((*(byte *)(_UnityEngine_Object_TypeInfo_12d54e0 + 0x133) >> 2 & 1) != 0) &&
     (*(int *)(_UnityEngine_Object_TypeInfo_12d54e0 + 0xe0) == 0)) {
    native_sub_4327ec();
  }
  uVar4 = native_UnityEngine_Object__op_Implicit_8e1b98(uVar6,0);
  if ((uVar4 & 1) == 0) {
    lVar3 = native_ActiveAnimation__Play_561f30
                      (*(undefined8 *)(param_1 + 0x20),*(undefined8 *)(param_1 + 0x28),uVar1,
                       *(undefined4 *)(param_1 + 0x3c),*(undefined4 *)(param_1 + 0x40),0);
  }
  else {
    lVar3 = native_ActiveAnimation__Play_561c20
                      (*(undefined8 *)(param_1 + 0x18),*(undefined8 *)(param_1 + 0x28),uVar1,
                       *(undefined4 *)(param_1 + 0x3c),*(undefined4 *)(param_1 + 0x40),0);
  }
  if (((*(byte *)(_UnityEngine_Object_TypeInfo_12d54e0 + 0x133) >> 2 & 1) != 0) &&
     (*(int *)(_UnityEngine_Object_TypeInfo_12d54e0 + 0xe0) == 0)) {
    native_sub_4327ec();
  }
  uVar4 = native_UnityEngine_Object__op_Inequality_8d76fc(lVar3,0,0);
  if ((uVar4 & 1) == 0) {
    return;
  }
  if (*(char *)(param_1 + 0x38) != '\0') {
    if (lVar3 == 0) goto LAB_00af5e3c;
    native_ActiveAnimation__Reset_560c68(lVar3,0);
  }
  lVar5 = *(long *)(param_1 + 0x48);
  if (lVar5 != 0) {
    iVar7 = -1;
    do {
      iVar7 = iVar7 + 1;
      if (*(int *)(lVar5 + 0x18) <= iVar7) {
        return;
      }
      if (lVar3 == 0) break;
      uVar2 = *(undefined8 *)(lVar3 + 0x18);
      uVar6 = native_sub_432808(_EventDelegate_Callback_TypeInfo_12d72e8);
      native_EventDelegate_Callback___ctor_54bd18
                (uVar6,param_1,_Method_UIPlayAnimation_OnFinished___12e7858,0);
      if (((*(byte *)(_EventDelegate_TypeInfo_12d4590 + 0x133) >> 2 & 1) != 0) &&
         (*(int *)(_EventDelegate_TypeInfo_12d4590 + 0xe0) == 0)) {
        native_sub_4327ec();
      }
      native_EventDelegate__Add_def180(uVar2,uVar6,1,0);
      lVar5 = *(long *)(param_1 + 0x48);
    } while (lVar5 != 0);
  }
LAB_00af5e3c:
                    /* WARNING: Subroutine does not return */
  native_sub_432810();
}



/* UIPlayAnimation$$OnDoubleClick @ 0xaf6024
 * void UIPlayAnimation__OnDoubleClick (UIPlayAnimation_o* __this, const MethodInfo* method); */

/* WARNING: Removing unreachable block (ram,0x00af5c4c) */
/* WARNING: Removing unreachable block (ram,0x00af5c60) */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* UIPlayAnimation$$OnDoubleClick
   void UIPlayAnimation__OnDoubleClick (UIPlayAnimation_o* __this, const MethodInfo* method); */

void native_UIPlayAnimation__OnDoubleClick_af6024(long param_1)

{
  undefined4 uVar1;
  undefined8 uVar2;
  long lVar3;
  ulong uVar4;
  long lVar5;
  undefined8 uVar6;
  int iVar7;
  
  if ((bRam000000000134206e & 1) == 0) {
    native_sub_43273c(&UICamera_TypeInfo_12d6410);
    bRam000000000134206e = 1;
  }
  if (((*(byte *)(_UICamera_TypeInfo_12d6410 + 0x133) >> 2 & 1) != 0) &&
     (*(int *)(_UICamera_TypeInfo_12d6410 + 0xe0) == 0)) {
    native_sub_4327ec();
  }
  iVar7 = *(int *)(*(long *)(_UICamera_TypeInfo_12d6410 + 0xb8) + 0xd4);
  if (iVar7 == -2) {
    return;
  }
  if (((*(byte *)(_UICamera_TypeInfo_12d6410 + 0x133) >> 2 & 1) != 0) &&
     (*(int *)(_UICamera_TypeInfo_12d6410 + 0xe0) == 0)) {
    native_sub_4327ec();
    iVar7 = *(int *)(*(long *)(_UICamera_TypeInfo_12d6410 + 0xb8) + 0xd4);
  }
  if (iVar7 == -3) {
    return;
  }
  uVar4 = native_UnityEngine_Behaviour__get_enabled_8d7acc(param_1,0);
  if ((uVar4 & 1) == 0) {
    return;
  }
  if (*(int *)(param_1 + 0x30) != 10) {
    return;
  }
  if ((bRam0000000001342073 & 1) == 0) {
    native_sub_43273c(&EventDelegate_Callback_TypeInfo_12d72e8);
    native_sub_43273c(&EventDelegate_TypeInfo_12d4590);
    native_sub_43273c(&Method_System_Collections_Generic_List_EventDelegate__get_Count___12dc760);
    native_sub_43273c(&UnityEngine_Object_TypeInfo_12d54e0);
    native_sub_43273c(&UICamera_TypeInfo_12d6410);
    native_sub_43273c(&Method_UIPlayAnimation_OnFinished___12e7858);
    bRam0000000001342073 = 1;
  }
  uVar6 = *(undefined8 *)(param_1 + 0x18);
  if (((*(byte *)(_UnityEngine_Object_TypeInfo_12d54e0 + 0x133) >> 2 & 1) != 0) &&
     (*(int *)(_UnityEngine_Object_TypeInfo_12d54e0 + 0xe0) == 0)) {
    native_sub_4327ec();
  }
  uVar4 = native_UnityEngine_Object__op_Implicit_8e1b98(uVar6,0);
  if ((uVar4 & 1) == 0) {
    uVar6 = *(undefined8 *)(param_1 + 0x20);
    if (((*(byte *)(_UnityEngine_Object_TypeInfo_12d54e0 + 0x133) >> 2 & 1) != 0) &&
       (*(int *)(_UnityEngine_Object_TypeInfo_12d54e0 + 0xe0) == 0)) {
      native_sub_4327ec();
    }
    uVar4 = native_UnityEngine_Object__op_Implicit_8e1b98(uVar6,0);
    if ((uVar4 & 1) == 0) {
      return;
    }
  }
  if (*(char *)(param_1 + 0x39) != '\0') {
    if (((*(byte *)(_UICamera_TypeInfo_12d6410 + 0x133) >> 2 & 1) != 0) &&
       (*(int *)(_UICamera_TypeInfo_12d6410 + 0xe0) == 0)) {
      native_sub_4327ec();
    }
    uVar6 = native_UICamera__get_selectedObject_c9756c(0);
    uVar2 = native_UnityEngine_Component__get_gameObject_8da66c(param_1,0);
    if (((*(byte *)(_UnityEngine_Object_TypeInfo_12d54e0 + 0x133) >> 2 & 1) != 0) &&
       (*(int *)(_UnityEngine_Object_TypeInfo_12d54e0 + 0xe0) == 0)) {
      native_sub_4327ec(_UnityEngine_Object_TypeInfo_12d54e0);
    }
    uVar4 = native_UnityEngine_Object__op_Equality_8e9a3c(uVar6,uVar2,0);
    if ((uVar4 & 1) != 0) {
      if (((*(byte *)(_UICamera_TypeInfo_12d6410 + 0x133) >> 2 & 1) != 0) &&
         (*(int *)(_UICamera_TypeInfo_12d6410 + 0xe0) == 0)) {
        native_sub_4327ec();
      }
      native_UICamera__set_selectedObject_c976a4(0,0);
    }
  }
  uVar1 = *(undefined4 *)(param_1 + 0x34);
  uVar6 = *(undefined8 *)(param_1 + 0x18);
  if (((*(byte *)(_UnityEngine_Object_TypeInfo_12d54e0 + 0x133) >> 2 & 1) != 0) &&
     (*(int *)(_UnityEngine_Object_TypeInfo_12d54e0 + 0xe0) == 0)) {
    native_sub_4327ec();
  }
  uVar4 = native_UnityEngine_Object__op_Implicit_8e1b98(uVar6,0);
  if ((uVar4 & 1) == 0) {
    lVar3 = native_ActiveAnimation__Play_561f30
                      (*(undefined8 *)(param_1 + 0x20),*(undefined8 *)(param_1 + 0x28),uVar1,
                       *(undefined4 *)(param_1 + 0x3c),*(undefined4 *)(param_1 + 0x40),0);
  }
  else {
    lVar3 = native_ActiveAnimation__Play_561c20
                      (*(undefined8 *)(param_1 + 0x18),*(undefined8 *)(param_1 + 0x28),uVar1,
                       *(undefined4 *)(param_1 + 0x3c),*(undefined4 *)(param_1 + 0x40),0);
  }
  if (((*(byte *)(_UnityEngine_Object_TypeInfo_12d54e0 + 0x133) >> 2 & 1) != 0) &&
     (*(int *)(_UnityEngine_Object_TypeInfo_12d54e0 + 0xe0) == 0)) {
    native_sub_4327ec();
  }
  uVar4 = native_UnityEngine_Object__op_Inequality_8d76fc(lVar3,0,0);
  if ((uVar4 & 1) == 0) {
    return;
  }
  if (*(char *)(param_1 + 0x38) != '\0') {
    if (lVar3 == 0) goto LAB_00af5e3c;
    native_ActiveAnimation__Reset_560c68(lVar3,0);
  }
  lVar5 = *(long *)(param_1 + 0x48);
  if (lVar5 != 0) {
    iVar7 = -1;
    do {
      iVar7 = iVar7 + 1;
      if (*(int *)(lVar5 + 0x18) <= iVar7) {
        return;
      }
      if (lVar3 == 0) break;
      uVar2 = *(undefined8 *)(lVar3 + 0x18);
      uVar6 = native_sub_432808(_EventDelegate_Callback_TypeInfo_12d72e8);
      native_EventDelegate_Callback___ctor_54bd18
                (uVar6,param_1,_Method_UIPlayAnimation_OnFinished___12e7858,0);
      if (((*(byte *)(_EventDelegate_TypeInfo_12d4590 + 0x133) >> 2 & 1) != 0) &&
         (*(int *)(_EventDelegate_TypeInfo_12d4590 + 0xe0) == 0)) {
        native_sub_4327ec();
      }
      native_EventDelegate__Add_def180(uVar2,uVar6,1,0);
      lVar5 = *(long *)(param_1 + 0x48);
    } while (lVar5 != 0);
  }
LAB_00af5e3c:
                    /* WARNING: Subroutine does not return */
  native_sub_432810();
}



/* UIPlayAnimation$$OnSelect @ 0xaf60f0
 * void UIPlayAnimation__OnSelect (UIPlayAnimation_o* __this, bool isSelected, const MethodInfo* method); */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* UIPlayAnimation$$OnSelect
   void UIPlayAnimation__OnSelect (UIPlayAnimation_o* __this, bool isSelected, const MethodInfo*
   method); */

void native_UIPlayAnimation__OnSelect_af60f0(long param_1,byte param_2)

{
  bool bVar1;
  undefined8 uVar2;
  long lVar3;
  ulong uVar4;
  long lVar5;
  undefined8 uVar6;
  int iVar7;
  
  uVar4 = native_UnityEngine_Behaviour__get_enabled_8d7acc(param_1,0);
  if ((uVar4 & 1) == 0) {
    return;
  }
  iVar7 = *(int *)(param_1 + 0x30);
  if (((iVar7 != 0xd || (param_2 & 1) != 0) && (iVar7 != 0xb)) && ((iVar7 == 0xc & param_2) == 0)) {
    return;
  }
  bVar1 = (bool)(param_2 & 1);
  if ((bRam0000000001342073 & 1) == 0) {
    native_sub_43273c(&EventDelegate_Callback_TypeInfo_12d72e8);
    native_sub_43273c(&EventDelegate_TypeInfo_12d4590);
    native_sub_43273c(&Method_System_Collections_Generic_List_EventDelegate__get_Count___12dc760);
    native_sub_43273c(&UnityEngine_Object_TypeInfo_12d54e0);
    native_sub_43273c(&UICamera_TypeInfo_12d6410);
    native_sub_43273c(&Method_UIPlayAnimation_OnFinished___12e7858);
    bRam0000000001342073 = 1;
  }
  uVar6 = *(undefined8 *)(param_1 + 0x18);
  if (((*(byte *)(_UnityEngine_Object_TypeInfo_12d54e0 + 0x133) >> 2 & 1) != 0) &&
     (*(int *)(_UnityEngine_Object_TypeInfo_12d54e0 + 0xe0) == 0)) {
    native_sub_4327ec();
  }
  uVar4 = native_UnityEngine_Object__op_Implicit_8e1b98(uVar6,0);
  if ((uVar4 & 1) == 0) {
    uVar6 = *(undefined8 *)(param_1 + 0x20);
    if (((*(byte *)(_UnityEngine_Object_TypeInfo_12d54e0 + 0x133) >> 2 & 1) != 0) &&
       (*(int *)(_UnityEngine_Object_TypeInfo_12d54e0 + 0xe0) == 0)) {
      native_sub_4327ec();
    }
    uVar4 = native_UnityEngine_Object__op_Implicit_8e1b98(uVar6,0);
    if ((uVar4 & 1) == 0) {
      return;
    }
  }
  if (iVar7 - 1U < 2) {
    if ((*(char *)(param_1 + 0x61) != '\0') == bVar1) {
      return;
    }
    *(bool *)(param_1 + 0x61) = bVar1;
  }
  if (*(char *)(param_1 + 0x39) != '\0') {
    if (((*(byte *)(_UICamera_TypeInfo_12d6410 + 0x133) >> 2 & 1) != 0) &&
       (*(int *)(_UICamera_TypeInfo_12d6410 + 0xe0) == 0)) {
      native_sub_4327ec();
    }
    uVar6 = native_UICamera__get_selectedObject_c9756c(0);
    uVar2 = native_UnityEngine_Component__get_gameObject_8da66c(param_1,0);
    if (((*(byte *)(_UnityEngine_Object_TypeInfo_12d54e0 + 0x133) >> 2 & 1) != 0) &&
       (*(int *)(_UnityEngine_Object_TypeInfo_12d54e0 + 0xe0) == 0)) {
      native_sub_4327ec(_UnityEngine_Object_TypeInfo_12d54e0);
    }
    uVar4 = native_UnityEngine_Object__op_Equality_8e9a3c(uVar6,uVar2,0);
    if ((uVar4 & 1) != 0) {
      if (((*(byte *)(_UICamera_TypeInfo_12d6410 + 0x133) >> 2 & 1) != 0) &&
         (*(int *)(_UICamera_TypeInfo_12d6410 + 0xe0) == 0)) {
        native_sub_4327ec();
      }
      native_UICamera__set_selectedObject_c976a4(0,0);
    }
  }
  uVar6 = *(undefined8 *)(param_1 + 0x18);
  iVar7 = -*(int *)(param_1 + 0x34);
  if (bVar1 != false) {
    iVar7 = *(int *)(param_1 + 0x34);
  }
  if (((*(byte *)(_UnityEngine_Object_TypeInfo_12d54e0 + 0x133) >> 2 & 1) != 0) &&
     (*(int *)(_UnityEngine_Object_TypeInfo_12d54e0 + 0xe0) == 0)) {
    native_sub_4327ec();
  }
  uVar4 = native_UnityEngine_Object__op_Implicit_8e1b98(uVar6,0);
  if ((uVar4 & 1) == 0) {
    lVar3 = native_ActiveAnimation__Play_561f30
                      (*(undefined8 *)(param_1 + 0x20),*(undefined8 *)(param_1 + 0x28),iVar7,
                       *(undefined4 *)(param_1 + 0x3c),*(undefined4 *)(param_1 + 0x40),0);
  }
  else {
    lVar3 = native_ActiveAnimation__Play_561c20
                      (*(undefined8 *)(param_1 + 0x18),*(undefined8 *)(param_1 + 0x28),iVar7,
                       *(undefined4 *)(param_1 + 0x3c),*(undefined4 *)(param_1 + 0x40),0);
  }
  if (((*(byte *)(_UnityEngine_Object_TypeInfo_12d54e0 + 0x133) >> 2 & 1) != 0) &&
     (*(int *)(_UnityEngine_Object_TypeInfo_12d54e0 + 0xe0) == 0)) {
    native_sub_4327ec();
  }
  uVar4 = native_UnityEngine_Object__op_Inequality_8d76fc(lVar3,0,0);
  if ((uVar4 & 1) == 0) {
    return;
  }
  if (*(char *)(param_1 + 0x38) != '\0') {
    if (lVar3 == 0) goto LAB_00af5e3c;
    native_ActiveAnimation__Reset_560c68(lVar3,0);
  }
  lVar5 = *(long *)(param_1 + 0x48);
  if (lVar5 != 0) {
    iVar7 = -1;
    do {
      iVar7 = iVar7 + 1;
      if (*(int *)(lVar5 + 0x18) <= iVar7) {
        return;
      }
      if (lVar3 == 0) break;
      uVar2 = *(undefined8 *)(lVar3 + 0x18);
      uVar6 = native_sub_432808(_EventDelegate_Callback_TypeInfo_12d72e8);
      native_EventDelegate_Callback___ctor_54bd18
                (uVar6,param_1,_Method_UIPlayAnimation_OnFinished___12e7858,0);
      if (((*(byte *)(_EventDelegate_TypeInfo_12d4590 + 0x133) >> 2 & 1) != 0) &&
         (*(int *)(_EventDelegate_TypeInfo_12d4590 + 0xe0) == 0)) {
        native_sub_4327ec();
      }
      native_EventDelegate__Add_def180(uVar2,uVar6,1,0);
      lVar5 = *(long *)(param_1 + 0x48);
    } while (lVar5 != 0);
  }
LAB_00af5e3c:
                    /* WARNING: Subroutine does not return */
  native_sub_432810();
}



/* UIPlayAnimation$$OnToggle @ 0xaf6168
 * void UIPlayAnimation__OnToggle (UIPlayAnimation_o* __this, const MethodInfo* method); */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* UIPlayAnimation$$OnToggle
   void UIPlayAnimation__OnToggle (UIPlayAnimation_o* __this, const MethodInfo* method); */

void native_UIPlayAnimation__OnToggle_af6168(long param_1)

{
  bool bVar1;
  byte bVar2;
  undefined8 uVar3;
  ulong uVar4;
  long lVar5;
  long lVar6;
  undefined8 uVar7;
  int iVar8;
  
  if ((bRam000000000134206f & 1) == 0) {
    native_sub_43273c(&UnityEngine_Object_TypeInfo_12d54e0);
    native_sub_43273c(&UIToggle_TypeInfo_12d64e0);
    bRam000000000134206f = 1;
  }
  uVar4 = native_UnityEngine_Behaviour__get_enabled_8d7acc(param_1,0);
  if ((uVar4 & 1) == 0) {
    return;
  }
  if (((*(byte *)(_UIToggle_TypeInfo_12d64e0 + 0x133) >> 2 & 1) != 0) &&
     (*(int *)(_UIToggle_TypeInfo_12d64e0 + 0xe0) == 0)) {
    native_sub_4327ec();
  }
  uVar7 = *(undefined8 *)(*(long *)(_UIToggle_TypeInfo_12d64e0 + 0xb8) + 8);
  if (((*(byte *)(_UnityEngine_Object_TypeInfo_12d54e0 + 0x133) >> 2 & 1) != 0) &&
     (*(int *)(_UnityEngine_Object_TypeInfo_12d54e0 + 0xe0) == 0)) {
    native_sub_4327ec(_UnityEngine_Object_TypeInfo_12d54e0);
  }
  uVar4 = native_UnityEngine_Object__op_Equality_8e9a3c(uVar7,0,0);
  if ((uVar4 & 1) != 0) {
    return;
  }
  iVar8 = *(int *)(param_1 + 0x30);
  if (iVar8 != 7) {
    if (iVar8 == 8) {
      if (((*(byte *)(_UIToggle_TypeInfo_12d64e0 + 0x133) >> 2 & 1) != 0) &&
         (*(int *)(_UIToggle_TypeInfo_12d64e0 + 0xe0) == 0)) {
        native_sub_4327ec();
      }
      lVar5 = *(long *)(*(long *)(_UIToggle_TypeInfo_12d64e0 + 0xb8) + 8);
      if (lVar5 == 0) goto LAB_00af630c;
      uVar4 = native_UIToggle__get_value_945b24(lVar5,0);
      if ((uVar4 & 1) != 0) goto LAB_00af62b4;
      iVar8 = *(int *)(param_1 + 0x30);
    }
    if (iVar8 != 9) {
      return;
    }
    if (((*(byte *)(_UIToggle_TypeInfo_12d64e0 + 0x133) >> 2 & 1) != 0) &&
       (*(int *)(_UIToggle_TypeInfo_12d64e0 + 0xe0) == 0)) {
      native_sub_4327ec();
    }
    lVar5 = *(long *)(*(long *)(_UIToggle_TypeInfo_12d64e0 + 0xb8) + 8);
    if (lVar5 == 0) goto LAB_00af630c;
    uVar4 = native_UIToggle__get_value_945b24(lVar5,0);
    if ((uVar4 & 1) != 0) {
      return;
    }
  }
LAB_00af62b4:
  if (((*(byte *)(_UIToggle_TypeInfo_12d64e0 + 0x133) >> 2 & 1) != 0) &&
     (*(int *)(_UIToggle_TypeInfo_12d64e0 + 0xe0) == 0)) {
    native_sub_4327ec();
  }
  lVar5 = *(long *)(*(long *)(_UIToggle_TypeInfo_12d64e0 + 0xb8) + 8);
  if (lVar5 == 0) {
LAB_00af630c:
                    /* WARNING: Subroutine does not return */
    native_sub_432810();
  }
  bVar2 = native_UIToggle__get_value_945b24(lVar5,0);
  iVar8 = *(int *)(param_1 + 0x30);
  bVar1 = (bool)(bVar2 & 1);
  if ((bRam0000000001342073 & 1) == 0) {
    native_sub_43273c(&EventDelegate_Callback_TypeInfo_12d72e8);
    native_sub_43273c(&EventDelegate_TypeInfo_12d4590);
    native_sub_43273c(&Method_System_Collections_Generic_List_EventDelegate__get_Count___12dc760);
    native_sub_43273c(&UnityEngine_Object_TypeInfo_12d54e0);
    native_sub_43273c(&UICamera_TypeInfo_12d6410);
    native_sub_43273c(&Method_UIPlayAnimation_OnFinished___12e7858);
    bRam0000000001342073 = 1;
  }
  uVar7 = *(undefined8 *)(param_1 + 0x18);
  if (((*(byte *)(_UnityEngine_Object_TypeInfo_12d54e0 + 0x133) >> 2 & 1) != 0) &&
     (*(int *)(_UnityEngine_Object_TypeInfo_12d54e0 + 0xe0) == 0)) {
    native_sub_4327ec();
  }
  uVar4 = native_UnityEngine_Object__op_Implicit_8e1b98(uVar7,0);
  if ((uVar4 & 1) == 0) {
    uVar7 = *(undefined8 *)(param_1 + 0x20);
    if (((*(byte *)(_UnityEngine_Object_TypeInfo_12d54e0 + 0x133) >> 2 & 1) != 0) &&
       (*(int *)(_UnityEngine_Object_TypeInfo_12d54e0 + 0xe0) == 0)) {
      native_sub_4327ec();
    }
    uVar4 = native_UnityEngine_Object__op_Implicit_8e1b98(uVar7,0);
    if ((uVar4 & 1) == 0) {
      return;
    }
  }
  if (iVar8 - 1U < 2) {
    if ((*(char *)(param_1 + 0x61) != '\0') == bVar1) {
      return;
    }
    *(bool *)(param_1 + 0x61) = bVar1;
  }
  if (*(char *)(param_1 + 0x39) != '\0') {
    if (((*(byte *)(_UICamera_TypeInfo_12d6410 + 0x133) >> 2 & 1) != 0) &&
       (*(int *)(_UICamera_TypeInfo_12d6410 + 0xe0) == 0)) {
      native_sub_4327ec();
    }
    uVar7 = native_UICamera__get_selectedObject_c9756c(0);
    uVar3 = native_UnityEngine_Component__get_gameObject_8da66c(param_1,0);
    if (((*(byte *)(_UnityEngine_Object_TypeInfo_12d54e0 + 0x133) >> 2 & 1) != 0) &&
       (*(int *)(_UnityEngine_Object_TypeInfo_12d54e0 + 0xe0) == 0)) {
      native_sub_4327ec(_UnityEngine_Object_TypeInfo_12d54e0);
    }
    uVar4 = native_UnityEngine_Object__op_Equality_8e9a3c(uVar7,uVar3,0);
    if ((uVar4 & 1) != 0) {
      if (((*(byte *)(_UICamera_TypeInfo_12d6410 + 0x133) >> 2 & 1) != 0) &&
         (*(int *)(_UICamera_TypeInfo_12d6410 + 0xe0) == 0)) {
        native_sub_4327ec();
      }
      native_UICamera__set_selectedObject_c976a4(0,0);
    }
  }
  uVar7 = *(undefined8 *)(param_1 + 0x18);
  iVar8 = -*(int *)(param_1 + 0x34);
  if (bVar1 != false) {
    iVar8 = *(int *)(param_1 + 0x34);
  }
  if (((*(byte *)(_UnityEngine_Object_TypeInfo_12d54e0 + 0x133) >> 2 & 1) != 0) &&
     (*(int *)(_UnityEngine_Object_TypeInfo_12d54e0 + 0xe0) == 0)) {
    native_sub_4327ec();
  }
  uVar4 = native_UnityEngine_Object__op_Implicit_8e1b98(uVar7,0);
  if ((uVar4 & 1) == 0) {
    lVar5 = native_ActiveAnimation__Play_561f30
                      (*(undefined8 *)(param_1 + 0x20),*(undefined8 *)(param_1 + 0x28),iVar8,
                       *(undefined4 *)(param_1 + 0x3c),*(undefined4 *)(param_1 + 0x40),0);
  }
  else {
    lVar5 = native_ActiveAnimation__Play_561c20
                      (*(undefined8 *)(param_1 + 0x18),*(undefined8 *)(param_1 + 0x28),iVar8,
                       *(undefined4 *)(param_1 + 0x3c),*(undefined4 *)(param_1 + 0x40),0);
  }
  if (((*(byte *)(_UnityEngine_Object_TypeInfo_12d54e0 + 0x133) >> 2 & 1) != 0) &&
     (*(int *)(_UnityEngine_Object_TypeInfo_12d54e0 + 0xe0) == 0)) {
    native_sub_4327ec();
  }
  uVar4 = native_UnityEngine_Object__op_Inequality_8d76fc(lVar5,0,0);
  if ((uVar4 & 1) == 0) {
    return;
  }
  if (*(char *)(param_1 + 0x38) != '\0') {
    if (lVar5 == 0) goto LAB_00af5e3c;
    native_ActiveAnimation__Reset_560c68(lVar5,0);
  }
  lVar6 = *(long *)(param_1 + 0x48);
  if (lVar6 != 0) {
    iVar8 = -1;
    do {
      iVar8 = iVar8 + 1;
      if (*(int *)(lVar6 + 0x18) <= iVar8) {
        return;
      }
      if (lVar5 == 0) break;
      uVar3 = *(undefined8 *)(lVar5 + 0x18);
      uVar7 = native_sub_432808(_EventDelegate_Callback_TypeInfo_12d72e8);
      native_EventDelegate_Callback___ctor_54bd18
                (uVar7,param_1,_Method_UIPlayAnimation_OnFinished___12e7858,0);
      if (((*(byte *)(_EventDelegate_TypeInfo_12d4590 + 0x133) >> 2 & 1) != 0) &&
         (*(int *)(_EventDelegate_TypeInfo_12d4590 + 0xe0) == 0)) {
        native_sub_4327ec();
      }
      native_EventDelegate__Add_def180(uVar3,uVar7,1,0);
      lVar6 = *(long *)(param_1 + 0x48);
    } while (lVar6 != 0);
  }
LAB_00af5e3c:
                    /* WARNING: Subroutine does not return */
  native_sub_432810();
}



/* UIPlayAnimation$$OnDragOver @ 0xaf6310
 * void UIPlayAnimation__OnDragOver (UIPlayAnimation_o* __this, const MethodInfo* method); */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* UIPlayAnimation$$OnDragOver
   void UIPlayAnimation__OnDragOver (UIPlayAnimation_o* __this, const MethodInfo* method); */

void native_UIPlayAnimation__OnDragOver_af6310(long param_1)

{
  undefined4 uVar1;
  ulong uVar2;
  undefined8 uVar3;
  long lVar4;
  long lVar5;
  undefined8 uVar6;
  int iVar7;
  
  if ((bRam0000000001342070 & 1) == 0) {
    native_sub_43273c(&UnityEngine_Object_TypeInfo_12d54e0);
    native_sub_43273c(&UICamera_TypeInfo_12d6410);
    bRam0000000001342070 = 1;
  }
  uVar2 = native_UnityEngine_Behaviour__get_enabled_8d7acc(param_1,0);
  if (((uVar2 & 1) == 0) || (1 < *(int *)(param_1 + 0x30) - 1U)) {
    return;
  }
  if (((*(byte *)(_UICamera_TypeInfo_12d6410 + 0x133) >> 2 & 1) != 0) &&
     (*(int *)(_UICamera_TypeInfo_12d6410 + 0xe0) == 0)) {
    native_sub_4327ec();
  }
  lVar5 = *(long *)(*(long *)(_UICamera_TypeInfo_12d6410 + 0xb8) + 0xe0);
  if (lVar5 == 0) {
                    /* WARNING: Subroutine does not return */
    native_sub_432810();
  }
  uVar6 = *(undefined8 *)(lVar5 + 0x58);
  uVar3 = native_UnityEngine_Component__get_gameObject_8da66c(param_1,0);
  if (((*(byte *)(_UnityEngine_Object_TypeInfo_12d54e0 + 0x133) >> 2 & 1) != 0) &&
     (*(int *)(_UnityEngine_Object_TypeInfo_12d54e0 + 0xe0) == 0)) {
    native_sub_4327ec(_UnityEngine_Object_TypeInfo_12d54e0);
  }
  uVar2 = native_UnityEngine_Object__op_Equality_8e9a3c(uVar6,uVar3,0);
  if ((uVar2 & 1) == 0) {
    if (*(char *)(param_1 + 0x62) == '\0') {
      return;
    }
    if (*(int *)(param_1 + 0x30) != 2) {
      return;
    }
  }
  if ((bRam0000000001342073 & 1) == 0) {
    native_sub_43273c(&EventDelegate_Callback_TypeInfo_12d72e8);
    native_sub_43273c(&EventDelegate_TypeInfo_12d4590);
    native_sub_43273c(&Method_System_Collections_Generic_List_EventDelegate__get_Count___12dc760);
    native_sub_43273c(&UnityEngine_Object_TypeInfo_12d54e0);
    native_sub_43273c(&UICamera_TypeInfo_12d6410);
    native_sub_43273c(&Method_UIPlayAnimation_OnFinished___12e7858);
    bRam0000000001342073 = 1;
  }
  uVar3 = *(undefined8 *)(param_1 + 0x18);
  if (((*(byte *)(_UnityEngine_Object_TypeInfo_12d54e0 + 0x133) >> 2 & 1) != 0) &&
     (*(int *)(_UnityEngine_Object_TypeInfo_12d54e0 + 0xe0) == 0)) {
    native_sub_4327ec();
  }
  uVar2 = native_UnityEngine_Object__op_Implicit_8e1b98(uVar3,0);
  if ((uVar2 & 1) == 0) {
    uVar3 = *(undefined8 *)(param_1 + 0x20);
    if (((*(byte *)(_UnityEngine_Object_TypeInfo_12d54e0 + 0x133) >> 2 & 1) != 0) &&
       (*(int *)(_UnityEngine_Object_TypeInfo_12d54e0 + 0xe0) == 0)) {
      native_sub_4327ec();
    }
    uVar2 = native_UnityEngine_Object__op_Implicit_8e1b98(uVar3,0);
    if ((uVar2 & 1) == 0) {
      return;
    }
  }
  if (*(char *)(param_1 + 0x61) != '\0') {
    return;
  }
  *(undefined1 *)(param_1 + 0x61) = 1;
  if (*(char *)(param_1 + 0x39) != '\0') {
    if (((*(byte *)(_UICamera_TypeInfo_12d6410 + 0x133) >> 2 & 1) != 0) &&
       (*(int *)(_UICamera_TypeInfo_12d6410 + 0xe0) == 0)) {
      native_sub_4327ec();
    }
    uVar3 = native_UICamera__get_selectedObject_c9756c(0);
    uVar6 = native_UnityEngine_Component__get_gameObject_8da66c(param_1,0);
    if (((*(byte *)(_UnityEngine_Object_TypeInfo_12d54e0 + 0x133) >> 2 & 1) != 0) &&
       (*(int *)(_UnityEngine_Object_TypeInfo_12d54e0 + 0xe0) == 0)) {
      native_sub_4327ec(_UnityEngine_Object_TypeInfo_12d54e0);
    }
    uVar2 = native_UnityEngine_Object__op_Equality_8e9a3c(uVar3,uVar6,0);
    if ((uVar2 & 1) != 0) {
      if (((*(byte *)(_UICamera_TypeInfo_12d6410 + 0x133) >> 2 & 1) != 0) &&
         (*(int *)(_UICamera_TypeInfo_12d6410 + 0xe0) == 0)) {
        native_sub_4327ec();
      }
      native_UICamera__set_selectedObject_c976a4(0,0);
    }
  }
  uVar1 = *(undefined4 *)(param_1 + 0x34);
  uVar3 = *(undefined8 *)(param_1 + 0x18);
  if (((*(byte *)(_UnityEngine_Object_TypeInfo_12d54e0 + 0x133) >> 2 & 1) != 0) &&
     (*(int *)(_UnityEngine_Object_TypeInfo_12d54e0 + 0xe0) == 0)) {
    native_sub_4327ec();
  }
  uVar2 = native_UnityEngine_Object__op_Implicit_8e1b98(uVar3,0);
  if ((uVar2 & 1) == 0) {
    lVar5 = native_ActiveAnimation__Play_561f30
                      (*(undefined8 *)(param_1 + 0x20),*(undefined8 *)(param_1 + 0x28),uVar1,
                       *(undefined4 *)(param_1 + 0x3c),*(undefined4 *)(param_1 + 0x40),0);
  }
  else {
    lVar5 = native_ActiveAnimation__Play_561c20
                      (*(undefined8 *)(param_1 + 0x18),*(undefined8 *)(param_1 + 0x28),uVar1,
                       *(undefined4 *)(param_1 + 0x3c),*(undefined4 *)(param_1 + 0x40),0);
  }
  if (((*(byte *)(_UnityEngine_Object_TypeInfo_12d54e0 + 0x133) >> 2 & 1) != 0) &&
     (*(int *)(_UnityEngine_Object_TypeInfo_12d54e0 + 0xe0) == 0)) {
    native_sub_4327ec();
  }
  uVar2 = native_UnityEngine_Object__op_Inequality_8d76fc(lVar5,0,0);
  if ((uVar2 & 1) == 0) {
    return;
  }
  if (*(char *)(param_1 + 0x38) != '\0') {
    if (lVar5 == 0) goto LAB_00af5e3c;
    native_ActiveAnimation__Reset_560c68(lVar5,0);
  }
  lVar4 = *(long *)(param_1 + 0x48);
  if (lVar4 != 0) {
    iVar7 = -1;
    do {
      iVar7 = iVar7 + 1;
      if (*(int *)(lVar4 + 0x18) <= iVar7) {
        return;
      }
      if (lVar5 == 0) break;
      uVar6 = *(undefined8 *)(lVar5 + 0x18);
      uVar3 = native_sub_432808(_EventDelegate_Callback_TypeInfo_12d72e8);
      native_EventDelegate_Callback___ctor_54bd18
                (uVar3,param_1,_Method_UIPlayAnimation_OnFinished___12e7858,0);
      if (((*(byte *)(_EventDelegate_TypeInfo_12d4590 + 0x133) >> 2 & 1) != 0) &&
         (*(int *)(_EventDelegate_TypeInfo_12d4590 + 0xe0) == 0)) {
        native_sub_4327ec();
      }
      native_EventDelegate__Add_def180(uVar6,uVar3,1,0);
      lVar4 = *(long *)(param_1 + 0x48);
    } while (lVar4 != 0);
  }
LAB_00af5e3c:
                    /* WARNING: Subroutine does not return */
  native_sub_432810();
}



/* UIPlayAnimation$$OnDragOut @ 0xaf6430
 * void UIPlayAnimation__OnDragOut (UIPlayAnimation_o* __this, const MethodInfo* method); */

/* WARNING: Removing unreachable block (ram,0x00af5d14) */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* UIPlayAnimation$$OnDragOut
   void UIPlayAnimation__OnDragOut (UIPlayAnimation_o* __this, const MethodInfo* method); */

void native_UIPlayAnimation__OnDragOut_af6430(long param_1)

{
  long lVar1;
  ulong uVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  long lVar5;
  int iVar6;
  
  if ((bRam0000000001342071 & 1) == 0) {
    native_sub_43273c(&UnityEngine_Object_TypeInfo_12d54e0);
    native_sub_43273c(&UICamera_TypeInfo_12d6410);
    bRam0000000001342071 = 1;
  }
  uVar2 = native_UnityEngine_Behaviour__get_enabled_8d7acc(param_1,0);
  if (((uVar2 & 1) == 0) || (1 < *(int *)(param_1 + 0x30) - 1U)) {
    return;
  }
  if (((*(byte *)(_UICamera_TypeInfo_12d6410 + 0x133) >> 2 & 1) != 0) &&
     (*(int *)(_UICamera_TypeInfo_12d6410 + 0xe0) == 0)) {
    native_sub_4327ec();
  }
  uVar3 = native_UICamera__get_hoveredObject_c9114c(0);
  uVar4 = native_UnityEngine_Component__get_gameObject_8da66c(param_1,0);
  if (((*(byte *)(_UnityEngine_Object_TypeInfo_12d54e0 + 0x133) >> 2 & 1) != 0) &&
     (*(int *)(_UnityEngine_Object_TypeInfo_12d54e0 + 0xe0) == 0)) {
    native_sub_4327ec(_UnityEngine_Object_TypeInfo_12d54e0);
  }
  uVar2 = native_UnityEngine_Object__op_Inequality_8d76fc(uVar3,uVar4,0);
  if ((uVar2 & 1) == 0) {
    return;
  }
  if ((bRam0000000001342073 & 1) == 0) {
    native_sub_43273c(&EventDelegate_Callback_TypeInfo_12d72e8);
    native_sub_43273c(&EventDelegate_TypeInfo_12d4590);
    native_sub_43273c(&Method_System_Collections_Generic_List_EventDelegate__get_Count___12dc760);
    native_sub_43273c(&UnityEngine_Object_TypeInfo_12d54e0);
    native_sub_43273c(&UICamera_TypeInfo_12d6410);
    native_sub_43273c(&Method_UIPlayAnimation_OnFinished___12e7858);
    bRam0000000001342073 = 1;
  }
  uVar3 = *(undefined8 *)(param_1 + 0x18);
  if (((*(byte *)(_UnityEngine_Object_TypeInfo_12d54e0 + 0x133) >> 2 & 1) != 0) &&
     (*(int *)(_UnityEngine_Object_TypeInfo_12d54e0 + 0xe0) == 0)) {
    native_sub_4327ec();
  }
  uVar2 = native_UnityEngine_Object__op_Implicit_8e1b98(uVar3,0);
  if ((uVar2 & 1) == 0) {
    uVar3 = *(undefined8 *)(param_1 + 0x20);
    if (((*(byte *)(_UnityEngine_Object_TypeInfo_12d54e0 + 0x133) >> 2 & 1) != 0) &&
       (*(int *)(_UnityEngine_Object_TypeInfo_12d54e0 + 0xe0) == 0)) {
      native_sub_4327ec();
    }
    uVar2 = native_UnityEngine_Object__op_Implicit_8e1b98(uVar3,0);
    if ((uVar2 & 1) == 0) {
      return;
    }
  }
  if (*(char *)(param_1 + 0x61) == '\0') {
    return;
  }
  *(undefined1 *)(param_1 + 0x61) = 0;
  if (*(char *)(param_1 + 0x39) != '\0') {
    if (((*(byte *)(_UICamera_TypeInfo_12d6410 + 0x133) >> 2 & 1) != 0) &&
       (*(int *)(_UICamera_TypeInfo_12d6410 + 0xe0) == 0)) {
      native_sub_4327ec();
    }
    uVar3 = native_UICamera__get_selectedObject_c9756c(0);
    uVar4 = native_UnityEngine_Component__get_gameObject_8da66c(param_1,0);
    if (((*(byte *)(_UnityEngine_Object_TypeInfo_12d54e0 + 0x133) >> 2 & 1) != 0) &&
       (*(int *)(_UnityEngine_Object_TypeInfo_12d54e0 + 0xe0) == 0)) {
      native_sub_4327ec(_UnityEngine_Object_TypeInfo_12d54e0);
    }
    uVar2 = native_UnityEngine_Object__op_Equality_8e9a3c(uVar3,uVar4,0);
    if ((uVar2 & 1) != 0) {
      if (((*(byte *)(_UICamera_TypeInfo_12d6410 + 0x133) >> 2 & 1) != 0) &&
         (*(int *)(_UICamera_TypeInfo_12d6410 + 0xe0) == 0)) {
        native_sub_4327ec();
      }
      native_UICamera__set_selectedObject_c976a4(0,0);
    }
  }
  iVar6 = *(int *)(param_1 + 0x34);
  uVar3 = *(undefined8 *)(param_1 + 0x18);
  if (((*(byte *)(_UnityEngine_Object_TypeInfo_12d54e0 + 0x133) >> 2 & 1) != 0) &&
     (*(int *)(_UnityEngine_Object_TypeInfo_12d54e0 + 0xe0) == 0)) {
    native_sub_4327ec();
  }
  uVar2 = native_UnityEngine_Object__op_Implicit_8e1b98(uVar3,0);
  if ((uVar2 & 1) == 0) {
    lVar1 = native_ActiveAnimation__Play_561f30
                      (*(undefined8 *)(param_1 + 0x20),*(undefined8 *)(param_1 + 0x28),-iVar6,
                       *(undefined4 *)(param_1 + 0x3c),*(undefined4 *)(param_1 + 0x40),0);
  }
  else {
    lVar1 = native_ActiveAnimation__Play_561c20
                      (*(undefined8 *)(param_1 + 0x18),*(undefined8 *)(param_1 + 0x28),-iVar6,
                       *(undefined4 *)(param_1 + 0x3c),*(undefined4 *)(param_1 + 0x40),0);
  }
  if (((*(byte *)(_UnityEngine_Object_TypeInfo_12d54e0 + 0x133) >> 2 & 1) != 0) &&
     (*(int *)(_UnityEngine_Object_TypeInfo_12d54e0 + 0xe0) == 0)) {
    native_sub_4327ec();
  }
  uVar2 = native_UnityEngine_Object__op_Inequality_8d76fc(lVar1,0,0);
  if ((uVar2 & 1) == 0) {
    return;
  }
  if (*(char *)(param_1 + 0x38) != '\0') {
    if (lVar1 == 0) goto LAB_00af5e3c;
    native_ActiveAnimation__Reset_560c68(lVar1,0);
  }
  lVar5 = *(long *)(param_1 + 0x48);
  if (lVar5 != 0) {
    iVar6 = -1;
    do {
      iVar6 = iVar6 + 1;
      if (*(int *)(lVar5 + 0x18) <= iVar6) {
        return;
      }
      if (lVar1 == 0) break;
      uVar4 = *(undefined8 *)(lVar1 + 0x18);
      uVar3 = native_sub_432808(_EventDelegate_Callback_TypeInfo_12d72e8);
      native_EventDelegate_Callback___ctor_54bd18
                (uVar3,param_1,_Method_UIPlayAnimation_OnFinished___12e7858,0);
      if (((*(byte *)(_EventDelegate_TypeInfo_12d4590 + 0x133) >> 2 & 1) != 0) &&
         (*(int *)(_EventDelegate_TypeInfo_12d4590 + 0xe0) == 0)) {
        native_sub_4327ec();
      }
      native_EventDelegate__Add_def180(uVar4,uVar3,1,0);
      lVar5 = *(long *)(param_1 + 0x48);
    } while (lVar5 != 0);
  }
LAB_00af5e3c:
                    /* WARNING: Subroutine does not return */
  native_sub_432810();
}



/* UIPlayAnimation$$OnDrop @ 0xaf6530
 * void UIPlayAnimation__OnDrop (UIPlayAnimation_o* __this, UnityEngine_GameObject_o* go, const MethodInfo* method); */

/* WARNING: Removing unreachable block (ram,0x00af5d14) */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* UIPlayAnimation$$OnDrop
   void UIPlayAnimation__OnDrop (UIPlayAnimation_o* __this, UnityEngine_GameObject_o* go, const
   MethodInfo* method); */

void native_UIPlayAnimation__OnDrop_af6530(long param_1)

{
  ulong uVar1;
  undefined8 uVar2;
  long lVar3;
  long lVar4;
  undefined8 uVar5;
  int iVar6;
  
  if ((bRam0000000001342072 & 1) == 0) {
    native_sub_43273c(&UnityEngine_Object_TypeInfo_12d54e0);
    native_sub_43273c(&UICamera_TypeInfo_12d6410);
    bRam0000000001342072 = 1;
  }
  uVar1 = native_UnityEngine_Behaviour__get_enabled_8d7acc(param_1,0);
  if (((uVar1 & 1) == 0) || (*(int *)(param_1 + 0x30) != 2)) {
    return;
  }
  if (((*(byte *)(_UICamera_TypeInfo_12d6410 + 0x133) >> 2 & 1) != 0) &&
     (*(int *)(_UICamera_TypeInfo_12d6410 + 0xe0) == 0)) {
    native_sub_4327ec();
  }
  lVar4 = *(long *)(*(long *)(_UICamera_TypeInfo_12d6410 + 0xb8) + 0xe0);
  if (lVar4 == 0) {
                    /* WARNING: Subroutine does not return */
    native_sub_432810();
  }
  uVar5 = *(undefined8 *)(lVar4 + 0x58);
  uVar2 = native_UnityEngine_Component__get_gameObject_8da66c(param_1,0);
  if (((*(byte *)(_UnityEngine_Object_TypeInfo_12d54e0 + 0x133) >> 2 & 1) != 0) &&
     (*(int *)(_UnityEngine_Object_TypeInfo_12d54e0 + 0xe0) == 0)) {
    native_sub_4327ec(_UnityEngine_Object_TypeInfo_12d54e0);
  }
  uVar1 = native_UnityEngine_Object__op_Inequality_8d76fc(uVar5,uVar2,0);
  if ((uVar1 & 1) == 0) {
    return;
  }
  if ((bRam0000000001342073 & 1) == 0) {
    native_sub_43273c(&EventDelegate_Callback_TypeInfo_12d72e8);
    native_sub_43273c(&EventDelegate_TypeInfo_12d4590);
    native_sub_43273c(&Method_System_Collections_Generic_List_EventDelegate__get_Count___12dc760);
    native_sub_43273c(&UnityEngine_Object_TypeInfo_12d54e0);
    native_sub_43273c(&UICamera_TypeInfo_12d6410);
    native_sub_43273c(&Method_UIPlayAnimation_OnFinished___12e7858);
    bRam0000000001342073 = 1;
  }
  uVar2 = *(undefined8 *)(param_1 + 0x18);
  if (((*(byte *)(_UnityEngine_Object_TypeInfo_12d54e0 + 0x133) >> 2 & 1) != 0) &&
     (*(int *)(_UnityEngine_Object_TypeInfo_12d54e0 + 0xe0) == 0)) {
    native_sub_4327ec();
  }
  uVar1 = native_UnityEngine_Object__op_Implicit_8e1b98(uVar2,0);
  if ((uVar1 & 1) == 0) {
    uVar2 = *(undefined8 *)(param_1 + 0x20);
    if (((*(byte *)(_UnityEngine_Object_TypeInfo_12d54e0 + 0x133) >> 2 & 1) != 0) &&
       (*(int *)(_UnityEngine_Object_TypeInfo_12d54e0 + 0xe0) == 0)) {
      native_sub_4327ec();
    }
    uVar1 = native_UnityEngine_Object__op_Implicit_8e1b98(uVar2,0);
    if ((uVar1 & 1) == 0) {
      return;
    }
  }
  if (*(char *)(param_1 + 0x61) == '\0') {
    return;
  }
  *(undefined1 *)(param_1 + 0x61) = 0;
  if (*(char *)(param_1 + 0x39) != '\0') {
    if (((*(byte *)(_UICamera_TypeInfo_12d6410 + 0x133) >> 2 & 1) != 0) &&
       (*(int *)(_UICamera_TypeInfo_12d6410 + 0xe0) == 0)) {
      native_sub_4327ec();
    }
    uVar2 = native_UICamera__get_selectedObject_c9756c(0);
    uVar5 = native_UnityEngine_Component__get_gameObject_8da66c(param_1,0);
    if (((*(byte *)(_UnityEngine_Object_TypeInfo_12d54e0 + 0x133) >> 2 & 1) != 0) &&
       (*(int *)(_UnityEngine_Object_TypeInfo_12d54e0 + 0xe0) == 0)) {
      native_sub_4327ec(_UnityEngine_Object_TypeInfo_12d54e0);
    }
    uVar1 = native_UnityEngine_Object__op_Equality_8e9a3c(uVar2,uVar5,0);
    if ((uVar1 & 1) != 0) {
      if (((*(byte *)(_UICamera_TypeInfo_12d6410 + 0x133) >> 2 & 1) != 0) &&
         (*(int *)(_UICamera_TypeInfo_12d6410 + 0xe0) == 0)) {
        native_sub_4327ec();
      }
      native_UICamera__set_selectedObject_c976a4(0,0);
    }
  }
  iVar6 = *(int *)(param_1 + 0x34);
  uVar2 = *(undefined8 *)(param_1 + 0x18);
  if (((*(byte *)(_UnityEngine_Object_TypeInfo_12d54e0 + 0x133) >> 2 & 1) != 0) &&
     (*(int *)(_UnityEngine_Object_TypeInfo_12d54e0 + 0xe0) == 0)) {
    native_sub_4327ec();
  }
  uVar1 = native_UnityEngine_Object__op_Implicit_8e1b98(uVar2,0);
  if ((uVar1 & 1) == 0) {
    lVar4 = native_ActiveAnimation__Play_561f30
                      (*(undefined8 *)(param_1 + 0x20),*(undefined8 *)(param_1 + 0x28),-iVar6,
                       *(undefined4 *)(param_1 + 0x3c),*(undefined4 *)(param_1 + 0x40),0);
  }
  else {
    lVar4 = native_ActiveAnimation__Play_561c20
                      (*(undefined8 *)(param_1 + 0x18),*(undefined8 *)(param_1 + 0x28),-iVar6,
                       *(undefined4 *)(param_1 + 0x3c),*(undefined4 *)(param_1 + 0x40),0);
  }
  if (((*(byte *)(_UnityEngine_Object_TypeInfo_12d54e0 + 0x133) >> 2 & 1) != 0) &&
     (*(int *)(_UnityEngine_Object_TypeInfo_12d54e0 + 0xe0) == 0)) {
    native_sub_4327ec();
  }
  uVar1 = native_UnityEngine_Object__op_Inequality_8d76fc(lVar4,0,0);
  if ((uVar1 & 1) == 0) {
    return;
  }
  if (*(char *)(param_1 + 0x38) != '\0') {
    if (lVar4 == 0) goto LAB_00af5e3c;
    native_ActiveAnimation__Reset_560c68(lVar4,0);
  }
  lVar3 = *(long *)(param_1 + 0x48);
  if (lVar3 != 0) {
    iVar6 = -1;
    do {
      iVar6 = iVar6 + 1;
      if (*(int *)(lVar3 + 0x18) <= iVar6) {
        return;
      }
      if (lVar4 == 0) break;
      uVar5 = *(undefined8 *)(lVar4 + 0x18);
      uVar2 = native_sub_432808(_EventDelegate_Callback_TypeInfo_12d72e8);
      native_EventDelegate_Callback___ctor_54bd18
                (uVar2,param_1,_Method_UIPlayAnimation_OnFinished___12e7858,0);
      if (((*(byte *)(_EventDelegate_TypeInfo_12d4590 + 0x133) >> 2 & 1) != 0) &&
         (*(int *)(_EventDelegate_TypeInfo_12d4590 + 0xe0) == 0)) {
        native_sub_4327ec();
      }
      native_EventDelegate__Add_def180(uVar5,uVar2,1,0);
      lVar3 = *(long *)(param_1 + 0x48);
    } while (lVar3 != 0);
  }
LAB_00af5e3c:
                    /* WARNING: Subroutine does not return */
  native_sub_432810();
}



/* UIPlayAnimation$$Play @ 0xaf6638
 * void UIPlayAnimation__Play (UIPlayAnimation_o* __this, bool forward, const MethodInfo* method); */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* UIPlayAnimation$$Play
   void UIPlayAnimation__Play (UIPlayAnimation_o* __this, bool forward, const MethodInfo* method);
    */

void native_UIPlayAnimation__Play_af6638(long param_1,byte param_2)

{
  bool bVar1;
  ulong uVar2;
  undefined8 uVar3;
  long lVar4;
  long lVar5;
  undefined8 uVar6;
  int iVar7;
  
  bVar1 = (bool)(param_2 & 1);
  if ((bRam0000000001342073 & 1) == 0) {
    native_sub_43273c(&EventDelegate_Callback_TypeInfo_12d72e8);
    native_sub_43273c(&EventDelegate_TypeInfo_12d4590);
    native_sub_43273c(&Method_System_Collections_Generic_List_EventDelegate__get_Count___12dc760);
    native_sub_43273c(&UnityEngine_Object_TypeInfo_12d54e0);
    native_sub_43273c(&UICamera_TypeInfo_12d6410);
    native_sub_43273c(&Method_UIPlayAnimation_OnFinished___12e7858);
    bRam0000000001342073 = 1;
  }
  uVar6 = *(undefined8 *)(param_1 + 0x18);
  if (((*(byte *)(_UnityEngine_Object_TypeInfo_12d54e0 + 0x133) >> 2 & 1) != 0) &&
     (*(int *)(_UnityEngine_Object_TypeInfo_12d54e0 + 0xe0) == 0)) {
    native_sub_4327ec();
  }
  uVar2 = native_UnityEngine_Object__op_Implicit_8e1b98(uVar6,0);
  if ((uVar2 & 1) == 0) {
    uVar6 = *(undefined8 *)(param_1 + 0x20);
    if (((*(byte *)(_UnityEngine_Object_TypeInfo_12d54e0 + 0x133) >> 2 & 1) != 0) &&
       (*(int *)(_UnityEngine_Object_TypeInfo_12d54e0 + 0xe0) == 0)) {
      native_sub_4327ec();
    }
    uVar2 = native_UnityEngine_Object__op_Implicit_8e1b98(uVar6,0);
    if ((uVar2 & 1) == 0) {
      return;
    }
  }
  if ((*(char *)(param_1 + 0x61) != '\0') == bVar1) {
    return;
  }
  *(bool *)(param_1 + 0x61) = bVar1;
  if (*(char *)(param_1 + 0x39) != '\0') {
    if (((*(byte *)(_UICamera_TypeInfo_12d6410 + 0x133) >> 2 & 1) != 0) &&
       (*(int *)(_UICamera_TypeInfo_12d6410 + 0xe0) == 0)) {
      native_sub_4327ec();
    }
    uVar6 = native_UICamera__get_selectedObject_c9756c(0);
    uVar3 = native_UnityEngine_Component__get_gameObject_8da66c(param_1,0);
    if (((*(byte *)(_UnityEngine_Object_TypeInfo_12d54e0 + 0x133) >> 2 & 1) != 0) &&
       (*(int *)(_UnityEngine_Object_TypeInfo_12d54e0 + 0xe0) == 0)) {
      native_sub_4327ec(_UnityEngine_Object_TypeInfo_12d54e0);
    }
    uVar2 = native_UnityEngine_Object__op_Equality_8e9a3c(uVar6,uVar3,0);
    if ((uVar2 & 1) != 0) {
      if (((*(byte *)(_UICamera_TypeInfo_12d6410 + 0x133) >> 2 & 1) != 0) &&
         (*(int *)(_UICamera_TypeInfo_12d6410 + 0xe0) == 0)) {
        native_sub_4327ec();
      }
      native_UICamera__set_selectedObject_c976a4(0,0);
    }
  }
  uVar6 = *(undefined8 *)(param_1 + 0x18);
  iVar7 = -*(int *)(param_1 + 0x34);
  if (bVar1 != false) {
    iVar7 = *(int *)(param_1 + 0x34);
  }
  if (((*(byte *)(_UnityEngine_Object_TypeInfo_12d54e0 + 0x133) >> 2 & 1) != 0) &&
     (*(int *)(_UnityEngine_Object_TypeInfo_12d54e0 + 0xe0) == 0)) {
    native_sub_4327ec();
  }
  uVar2 = native_UnityEngine_Object__op_Implicit_8e1b98(uVar6,0);
  if ((uVar2 & 1) == 0) {
    lVar4 = native_ActiveAnimation__Play_561f30
                      (*(undefined8 *)(param_1 + 0x20),*(undefined8 *)(param_1 + 0x28),iVar7,
                       *(undefined4 *)(param_1 + 0x3c),*(undefined4 *)(param_1 + 0x40),0);
  }
  else {
    lVar4 = native_ActiveAnimation__Play_561c20
                      (*(undefined8 *)(param_1 + 0x18),*(undefined8 *)(param_1 + 0x28),iVar7,
                       *(undefined4 *)(param_1 + 0x3c),*(undefined4 *)(param_1 + 0x40),0);
  }
  if (((*(byte *)(_UnityEngine_Object_TypeInfo_12d54e0 + 0x133) >> 2 & 1) != 0) &&
     (*(int *)(_UnityEngine_Object_TypeInfo_12d54e0 + 0xe0) == 0)) {
    native_sub_4327ec();
  }
  uVar2 = native_UnityEngine_Object__op_Inequality_8d76fc(lVar4,0,0);
  if ((uVar2 & 1) == 0) {
    return;
  }
  if (*(char *)(param_1 + 0x38) != '\0') {
    if (lVar4 == 0) goto LAB_00af5e3c;
    native_ActiveAnimation__Reset_560c68(lVar4,0);
  }
  lVar5 = *(long *)(param_1 + 0x48);
  if (lVar5 != 0) {
    iVar7 = -1;
    do {
      iVar7 = iVar7 + 1;
      if (*(int *)(lVar5 + 0x18) <= iVar7) {
        return;
      }
      if (lVar4 == 0) break;
      uVar3 = *(undefined8 *)(lVar4 + 0x18);
      uVar6 = native_sub_432808(_EventDelegate_Callback_TypeInfo_12d72e8);
      native_EventDelegate_Callback___ctor_54bd18
                (uVar6,param_1,_Method_UIPlayAnimation_OnFinished___12e7858,0);
      if (((*(byte *)(_EventDelegate_TypeInfo_12d4590 + 0x133) >> 2 & 1) != 0) &&
         (*(int *)(_EventDelegate_TypeInfo_12d4590 + 0xe0) == 0)) {
        native_sub_4327ec();
      }
      native_EventDelegate__Add_def180(uVar3,uVar6,1,0);
      lVar5 = *(long *)(param_1 + 0x48);
    } while (lVar5 != 0);
  }
LAB_00af5e3c:
                    /* WARNING: Subroutine does not return */
  native_sub_432810();
}



/* UIPlayAnimation$$Play @ 0xaf5b68
 * void UIPlayAnimation__Play (UIPlayAnimation_o* __this, bool forward, bool onlyIfDifferent, const MethodInfo* method); */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* UIPlayAnimation$$Play
   void UIPlayAnimation__Play (UIPlayAnimation_o* __this, bool forward, bool onlyIfDifferent, const
   MethodInfo* method); */

void native_UIPlayAnimation__Play_af5b68(long param_1,byte param_2,ulong param_3)

{
  ulong uVar1;
  undefined8 uVar2;
  long lVar3;
  long lVar4;
  undefined8 uVar5;
  int iVar6;
  
  if ((bRam0000000001342073 & 1) == 0) {
    native_sub_43273c(&EventDelegate_Callback_TypeInfo_12d72e8);
    native_sub_43273c(&EventDelegate_TypeInfo_12d4590);
    native_sub_43273c(&Method_System_Collections_Generic_List_EventDelegate__get_Count___12dc760);
    native_sub_43273c(&UnityEngine_Object_TypeInfo_12d54e0);
    native_sub_43273c(&UICamera_TypeInfo_12d6410);
    native_sub_43273c(&Method_UIPlayAnimation_OnFinished___12e7858);
    bRam0000000001342073 = 1;
  }
  uVar5 = *(undefined8 *)(param_1 + 0x18);
  if (((*(byte *)(_UnityEngine_Object_TypeInfo_12d54e0 + 0x133) >> 2 & 1) != 0) &&
     (*(int *)(_UnityEngine_Object_TypeInfo_12d54e0 + 0xe0) == 0)) {
    native_sub_4327ec();
  }
  uVar1 = native_UnityEngine_Object__op_Implicit_8e1b98(uVar5,0);
  if ((uVar1 & 1) == 0) {
    uVar5 = *(undefined8 *)(param_1 + 0x20);
    if (((*(byte *)(_UnityEngine_Object_TypeInfo_12d54e0 + 0x133) >> 2 & 1) != 0) &&
       (*(int *)(_UnityEngine_Object_TypeInfo_12d54e0 + 0xe0) == 0)) {
      native_sub_4327ec();
    }
    uVar1 = native_UnityEngine_Object__op_Implicit_8e1b98(uVar5,0);
    if ((uVar1 & 1) == 0) {
      return;
    }
  }
  if ((param_3 & 1) != 0) {
    if (((*(char *)(param_1 + 0x61) != '\0' ^ param_2) & 1) == 0) {
      return;
    }
    *(byte *)(param_1 + 0x61) = param_2 & 1;
  }
  if (*(char *)(param_1 + 0x39) != '\0') {
    if (((*(byte *)(_UICamera_TypeInfo_12d6410 + 0x133) >> 2 & 1) != 0) &&
       (*(int *)(_UICamera_TypeInfo_12d6410 + 0xe0) == 0)) {
      native_sub_4327ec();
    }
    uVar5 = native_UICamera__get_selectedObject_c9756c(0);
    uVar2 = native_UnityEngine_Component__get_gameObject_8da66c(param_1,0);
    if (((*(byte *)(_UnityEngine_Object_TypeInfo_12d54e0 + 0x133) >> 2 & 1) != 0) &&
       (*(int *)(_UnityEngine_Object_TypeInfo_12d54e0 + 0xe0) == 0)) {
      native_sub_4327ec(_UnityEngine_Object_TypeInfo_12d54e0);
    }
    uVar1 = native_UnityEngine_Object__op_Equality_8e9a3c(uVar5,uVar2,0);
    if ((uVar1 & 1) != 0) {
      if (((*(byte *)(_UICamera_TypeInfo_12d6410 + 0x133) >> 2 & 1) != 0) &&
         (*(int *)(_UICamera_TypeInfo_12d6410 + 0xe0) == 0)) {
        native_sub_4327ec();
      }
      native_UICamera__set_selectedObject_c976a4(0,0);
    }
  }
  uVar5 = *(undefined8 *)(param_1 + 0x18);
  iVar6 = -*(int *)(param_1 + 0x34);
  if ((param_2 & 1) != 0) {
    iVar6 = *(int *)(param_1 + 0x34);
  }
  if (((*(byte *)(_UnityEngine_Object_TypeInfo_12d54e0 + 0x133) >> 2 & 1) != 0) &&
     (*(int *)(_UnityEngine_Object_TypeInfo_12d54e0 + 0xe0) == 0)) {
    native_sub_4327ec();
  }
  uVar1 = native_UnityEngine_Object__op_Implicit_8e1b98(uVar5,0);
  if ((uVar1 & 1) == 0) {
    lVar3 = native_ActiveAnimation__Play_561f30
                      (*(undefined8 *)(param_1 + 0x20),*(undefined8 *)(param_1 + 0x28),iVar6,
                       *(undefined4 *)(param_1 + 0x3c),*(undefined4 *)(param_1 + 0x40),0);
  }
  else {
    lVar3 = native_ActiveAnimation__Play_561c20
                      (*(undefined8 *)(param_1 + 0x18),*(undefined8 *)(param_1 + 0x28),iVar6,
                       *(undefined4 *)(param_1 + 0x3c),*(undefined4 *)(param_1 + 0x40),0);
  }
  if (((*(byte *)(_UnityEngine_Object_TypeInfo_12d54e0 + 0x133) >> 2 & 1) != 0) &&
     (*(int *)(_UnityEngine_Object_TypeInfo_12d54e0 + 0xe0) == 0)) {
    native_sub_4327ec();
  }
  uVar1 = native_UnityEngine_Object__op_Inequality_8d76fc(lVar3,0,0);
  if ((uVar1 & 1) == 0) {
    return;
  }
  if (*(char *)(param_1 + 0x38) != '\0') {
    if (lVar3 == 0) goto LAB_00af5e3c;
    native_ActiveAnimation__Reset_560c68(lVar3,0);
  }
  lVar4 = *(long *)(param_1 + 0x48);
  if (lVar4 != 0) {
    iVar6 = -1;
    do {
      iVar6 = iVar6 + 1;
      if (*(int *)(lVar4 + 0x18) <= iVar6) {
        return;
      }
      if (lVar3 == 0) break;
      uVar2 = *(undefined8 *)(lVar3 + 0x18);
      uVar5 = native_sub_432808(_EventDelegate_Callback_TypeInfo_12d72e8);
      native_EventDelegate_Callback___ctor_54bd18
                (uVar5,param_1,_Method_UIPlayAnimation_OnFinished___12e7858,0);
      if (((*(byte *)(_EventDelegate_TypeInfo_12d4590 + 0x133) >> 2 & 1) != 0) &&
         (*(int *)(_EventDelegate_TypeInfo_12d4590 + 0xe0) == 0)) {
        native_sub_4327ec();
      }
      native_EventDelegate__Add_def180(uVar2,uVar5,1,0);
      lVar4 = *(long *)(param_1 + 0x48);
    } while (lVar4 != 0);
  }
LAB_00af5e3c:
                    /* WARNING: Subroutine does not return */
  native_sub_432810();
}



/* UIPlayAnimation$$PlayForward @ 0xaf6644
 * void UIPlayAnimation__PlayForward (UIPlayAnimation_o* __this, const MethodInfo* method); */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* UIPlayAnimation$$PlayForward
   void UIPlayAnimation__PlayForward (UIPlayAnimation_o* __this, const MethodInfo* method); */

void native_UIPlayAnimation__PlayForward_af6644(long param_1)

{
  undefined4 uVar1;
  ulong uVar2;
  undefined8 uVar3;
  long lVar4;
  long lVar5;
  undefined8 uVar6;
  int iVar7;
  
  if ((bRam0000000001342073 & 1) == 0) {
    native_sub_43273c(&EventDelegate_Callback_TypeInfo_12d72e8);
    native_sub_43273c(&EventDelegate_TypeInfo_12d4590);
    native_sub_43273c(&Method_System_Collections_Generic_List_EventDelegate__get_Count___12dc760);
    native_sub_43273c(&UnityEngine_Object_TypeInfo_12d54e0);
    native_sub_43273c(&UICamera_TypeInfo_12d6410);
    native_sub_43273c(&Method_UIPlayAnimation_OnFinished___12e7858);
    bRam0000000001342073 = 1;
  }
  uVar6 = *(undefined8 *)(param_1 + 0x18);
  if (((*(byte *)(_UnityEngine_Object_TypeInfo_12d54e0 + 0x133) >> 2 & 1) != 0) &&
     (*(int *)(_UnityEngine_Object_TypeInfo_12d54e0 + 0xe0) == 0)) {
    native_sub_4327ec();
  }
  uVar2 = native_UnityEngine_Object__op_Implicit_8e1b98(uVar6,0);
  if ((uVar2 & 1) == 0) {
    uVar6 = *(undefined8 *)(param_1 + 0x20);
    if (((*(byte *)(_UnityEngine_Object_TypeInfo_12d54e0 + 0x133) >> 2 & 1) != 0) &&
       (*(int *)(_UnityEngine_Object_TypeInfo_12d54e0 + 0xe0) == 0)) {
      native_sub_4327ec();
    }
    uVar2 = native_UnityEngine_Object__op_Implicit_8e1b98(uVar6,0);
    if ((uVar2 & 1) == 0) {
      return;
    }
  }
  if (*(char *)(param_1 + 0x61) != '\0') {
    return;
  }
  *(undefined1 *)(param_1 + 0x61) = 1;
  if (*(char *)(param_1 + 0x39) != '\0') {
    if (((*(byte *)(_UICamera_TypeInfo_12d6410 + 0x133) >> 2 & 1) != 0) &&
       (*(int *)(_UICamera_TypeInfo_12d6410 + 0xe0) == 0)) {
      native_sub_4327ec();
    }
    uVar6 = native_UICamera__get_selectedObject_c9756c(0);
    uVar3 = native_UnityEngine_Component__get_gameObject_8da66c(param_1,0);
    if (((*(byte *)(_UnityEngine_Object_TypeInfo_12d54e0 + 0x133) >> 2 & 1) != 0) &&
       (*(int *)(_UnityEngine_Object_TypeInfo_12d54e0 + 0xe0) == 0)) {
      native_sub_4327ec(_UnityEngine_Object_TypeInfo_12d54e0);
    }
    uVar2 = native_UnityEngine_Object__op_Equality_8e9a3c(uVar6,uVar3,0);
    if ((uVar2 & 1) != 0) {
      if (((*(byte *)(_UICamera_TypeInfo_12d6410 + 0x133) >> 2 & 1) != 0) &&
         (*(int *)(_UICamera_TypeInfo_12d6410 + 0xe0) == 0)) {
        native_sub_4327ec();
      }
      native_UICamera__set_selectedObject_c976a4(0,0);
    }
  }
  uVar1 = *(undefined4 *)(param_1 + 0x34);
  uVar6 = *(undefined8 *)(param_1 + 0x18);
  if (((*(byte *)(_UnityEngine_Object_TypeInfo_12d54e0 + 0x133) >> 2 & 1) != 0) &&
     (*(int *)(_UnityEngine_Object_TypeInfo_12d54e0 + 0xe0) == 0)) {
    native_sub_4327ec();
  }
  uVar2 = native_UnityEngine_Object__op_Implicit_8e1b98(uVar6,0);
  if ((uVar2 & 1) == 0) {
    lVar4 = native_ActiveAnimation__Play_561f30
                      (*(undefined8 *)(param_1 + 0x20),*(undefined8 *)(param_1 + 0x28),uVar1,
                       *(undefined4 *)(param_1 + 0x3c),*(undefined4 *)(param_1 + 0x40),0);
  }
  else {
    lVar4 = native_ActiveAnimation__Play_561c20
                      (*(undefined8 *)(param_1 + 0x18),*(undefined8 *)(param_1 + 0x28),uVar1,
                       *(undefined4 *)(param_1 + 0x3c),*(undefined4 *)(param_1 + 0x40),0);
  }
  if (((*(byte *)(_UnityEngine_Object_TypeInfo_12d54e0 + 0x133) >> 2 & 1) != 0) &&
     (*(int *)(_UnityEngine_Object_TypeInfo_12d54e0 + 0xe0) == 0)) {
    native_sub_4327ec();
  }
  uVar2 = native_UnityEngine_Object__op_Inequality_8d76fc(lVar4,0,0);
  if ((uVar2 & 1) == 0) {
    return;
  }
  if (*(char *)(param_1 + 0x38) != '\0') {
    if (lVar4 == 0) goto LAB_00af5e3c;
    native_ActiveAnimation__Reset_560c68(lVar4,0);
  }
  lVar5 = *(long *)(param_1 + 0x48);
  if (lVar5 != 0) {
    iVar7 = -1;
    do {
      iVar7 = iVar7 + 1;
      if (*(int *)(lVar5 + 0x18) <= iVar7) {
        return;
      }
      if (lVar4 == 0) break;
      uVar3 = *(undefined8 *)(lVar4 + 0x18);
      uVar6 = native_sub_432808(_EventDelegate_Callback_TypeInfo_12d72e8);
      native_EventDelegate_Callback___ctor_54bd18
                (uVar6,param_1,_Method_UIPlayAnimation_OnFinished___12e7858,0);
      if (((*(byte *)(_EventDelegate_TypeInfo_12d4590 + 0x133) >> 2 & 1) != 0) &&
         (*(int *)(_EventDelegate_TypeInfo_12d4590 + 0xe0) == 0)) {
        native_sub_4327ec();
      }
      native_EventDelegate__Add_def180(uVar3,uVar6,1,0);
      lVar5 = *(long *)(param_1 + 0x48);
    } while (lVar5 != 0);
  }
LAB_00af5e3c:
                    /* WARNING: Subroutine does not return */
  native_sub_432810();
}



/* UIPlayAnimation$$PlayReverse @ 0xaf6650
 * void UIPlayAnimation__PlayReverse (UIPlayAnimation_o* __this, const MethodInfo* method); */

/* WARNING: Removing unreachable block (ram,0x00af5d14) */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* UIPlayAnimation$$PlayReverse
   void UIPlayAnimation__PlayReverse (UIPlayAnimation_o* __this, const MethodInfo* method); */

void native_UIPlayAnimation__PlayReverse_af6650(long param_1)

{
  ulong uVar1;
  undefined8 uVar2;
  long lVar3;
  long lVar4;
  undefined8 uVar5;
  int iVar6;
  
  if ((bRam0000000001342073 & 1) == 0) {
    native_sub_43273c(&EventDelegate_Callback_TypeInfo_12d72e8);
    native_sub_43273c(&EventDelegate_TypeInfo_12d4590);
    native_sub_43273c(&Method_System_Collections_Generic_List_EventDelegate__get_Count___12dc760);
    native_sub_43273c(&UnityEngine_Object_TypeInfo_12d54e0);
    native_sub_43273c(&UICamera_TypeInfo_12d6410);
    native_sub_43273c(&Method_UIPlayAnimation_OnFinished___12e7858);
    bRam0000000001342073 = 1;
  }
  uVar5 = *(undefined8 *)(param_1 + 0x18);
  if (((*(byte *)(_UnityEngine_Object_TypeInfo_12d54e0 + 0x133) >> 2 & 1) != 0) &&
     (*(int *)(_UnityEngine_Object_TypeInfo_12d54e0 + 0xe0) == 0)) {
    native_sub_4327ec();
  }
  uVar1 = native_UnityEngine_Object__op_Implicit_8e1b98(uVar5,0);
  if ((uVar1 & 1) == 0) {
    uVar5 = *(undefined8 *)(param_1 + 0x20);
    if (((*(byte *)(_UnityEngine_Object_TypeInfo_12d54e0 + 0x133) >> 2 & 1) != 0) &&
       (*(int *)(_UnityEngine_Object_TypeInfo_12d54e0 + 0xe0) == 0)) {
      native_sub_4327ec();
    }
    uVar1 = native_UnityEngine_Object__op_Implicit_8e1b98(uVar5,0);
    if ((uVar1 & 1) == 0) {
      return;
    }
  }
  if (*(char *)(param_1 + 0x61) == '\0') {
    return;
  }
  *(undefined1 *)(param_1 + 0x61) = 0;
  if (*(char *)(param_1 + 0x39) != '\0') {
    if (((*(byte *)(_UICamera_TypeInfo_12d6410 + 0x133) >> 2 & 1) != 0) &&
       (*(int *)(_UICamera_TypeInfo_12d6410 + 0xe0) == 0)) {
      native_sub_4327ec();
    }
    uVar5 = native_UICamera__get_selectedObject_c9756c(0);
    uVar2 = native_UnityEngine_Component__get_gameObject_8da66c(param_1,0);
    if (((*(byte *)(_UnityEngine_Object_TypeInfo_12d54e0 + 0x133) >> 2 & 1) != 0) &&
       (*(int *)(_UnityEngine_Object_TypeInfo_12d54e0 + 0xe0) == 0)) {
      native_sub_4327ec(_UnityEngine_Object_TypeInfo_12d54e0);
    }
    uVar1 = native_UnityEngine_Object__op_Equality_8e9a3c(uVar5,uVar2,0);
    if ((uVar1 & 1) != 0) {
      if (((*(byte *)(_UICamera_TypeInfo_12d6410 + 0x133) >> 2 & 1) != 0) &&
         (*(int *)(_UICamera_TypeInfo_12d6410 + 0xe0) == 0)) {
        native_sub_4327ec();
      }
      native_UICamera__set_selectedObject_c976a4(0,0);
    }
  }
  iVar6 = *(int *)(param_1 + 0x34);
  uVar5 = *(undefined8 *)(param_1 + 0x18);
  if (((*(byte *)(_UnityEngine_Object_TypeInfo_12d54e0 + 0x133) >> 2 & 1) != 0) &&
     (*(int *)(_UnityEngine_Object_TypeInfo_12d54e0 + 0xe0) == 0)) {
    native_sub_4327ec();
  }
  uVar1 = native_UnityEngine_Object__op_Implicit_8e1b98(uVar5,0);
  if ((uVar1 & 1) == 0) {
    lVar3 = native_ActiveAnimation__Play_561f30
                      (*(undefined8 *)(param_1 + 0x20),*(undefined8 *)(param_1 + 0x28),-iVar6,
                       *(undefined4 *)(param_1 + 0x3c),*(undefined4 *)(param_1 + 0x40),0);
  }
  else {
    lVar3 = native_ActiveAnimation__Play_561c20
                      (*(undefined8 *)(param_1 + 0x18),*(undefined8 *)(param_1 + 0x28),-iVar6,
                       *(undefined4 *)(param_1 + 0x3c),*(undefined4 *)(param_1 + 0x40),0);
  }
  if (((*(byte *)(_UnityEngine_Object_TypeInfo_12d54e0 + 0x133) >> 2 & 1) != 0) &&
     (*(int *)(_UnityEngine_Object_TypeInfo_12d54e0 + 0xe0) == 0)) {
    native_sub_4327ec();
  }
  uVar1 = native_UnityEngine_Object__op_Inequality_8d76fc(lVar3,0,0);
  if ((uVar1 & 1) == 0) {
    return;
  }
  if (*(char *)(param_1 + 0x38) != '\0') {
    if (lVar3 == 0) goto LAB_00af5e3c;
    native_ActiveAnimation__Reset_560c68(lVar3,0);
  }
  lVar4 = *(long *)(param_1 + 0x48);
  if (lVar4 != 0) {
    iVar6 = -1;
    do {
      iVar6 = iVar6 + 1;
      if (*(int *)(lVar4 + 0x18) <= iVar6) {
        return;
      }
      if (lVar3 == 0) break;
      uVar2 = *(undefined8 *)(lVar3 + 0x18);
      uVar5 = native_sub_432808(_EventDelegate_Callback_TypeInfo_12d72e8);
      native_EventDelegate_Callback___ctor_54bd18
                (uVar5,param_1,_Method_UIPlayAnimation_OnFinished___12e7858,0);
      if (((*(byte *)(_EventDelegate_TypeInfo_12d4590 + 0x133) >> 2 & 1) != 0) &&
         (*(int *)(_EventDelegate_TypeInfo_12d4590 + 0xe0) == 0)) {
        native_sub_4327ec();
      }
      native_EventDelegate__Add_def180(uVar2,uVar5,1,0);
      lVar4 = *(long *)(param_1 + 0x48);
    } while (lVar4 != 0);
  }
LAB_00af5e3c:
                    /* WARNING: Subroutine does not return */
  native_sub_432810();
}



/* UIPlayAnimation$$OnFinished @ 0xaf665c
 * void UIPlayAnimation__OnFinished (UIPlayAnimation_o* __this, const MethodInfo* method); */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* UIPlayAnimation$$OnFinished
   void UIPlayAnimation__OnFinished (UIPlayAnimation_o* __this, const MethodInfo* method); */

void native_UIPlayAnimation__OnFinished_af665c(long param_1)

{
  ulong *puVar1;
  char cVar2;
  bool bVar3;
  ulong uVar4;
  long *plVar5;
  undefined8 *puVar6;
  undefined8 uVar7;
  long lVar8;
  
  if ((bRam0000000001342074 & 1) == 0) {
    native_sub_43273c(&EventDelegate_TypeInfo_12d4590);
    native_sub_43273c(&UnityEngine_Object_TypeInfo_12d54e0);
    native_sub_43273c(&UIPlayAnimation_TypeInfo_12d6480);
    bRam0000000001342074 = 1;
  }
  if (((*(byte *)(_UIPlayAnimation_TypeInfo_12d6480 + 0x133) >> 2 & 1) != 0) &&
     (*(int *)(_UIPlayAnimation_TypeInfo_12d6480 + 0xe0) == 0)) {
    native_sub_4327ec();
  }
  uVar7 = **(undefined8 **)(_UIPlayAnimation_TypeInfo_12d6480 + 0xb8);
  if (((*(byte *)(_UnityEngine_Object_TypeInfo_12d54e0 + 0x133) >> 2 & 1) != 0) &&
     (*(int *)(_UnityEngine_Object_TypeInfo_12d54e0 + 0xe0) == 0)) {
    native_sub_4327ec(_UnityEngine_Object_TypeInfo_12d54e0);
  }
  uVar4 = native_UnityEngine_Object__op_Equality_8e9a3c(uVar7,0,0);
  if ((uVar4 & 1) != 0) {
    if (((*(byte *)(_UIPlayAnimation_TypeInfo_12d6480 + 0x133) >> 2 & 1) != 0) &&
       (*(int *)(_UIPlayAnimation_TypeInfo_12d6480 + 0xe0) == 0)) {
      native_sub_4327ec();
    }
    plVar5 = *(long **)(_UIPlayAnimation_TypeInfo_12d6480 + 0xb8);
    *plVar5 = param_1;
    native_sub_4326e0(plVar5,param_1);
    uVar7 = *(undefined8 *)(param_1 + 0x48);
    if (((*(byte *)(_EventDelegate_TypeInfo_12d4590 + 0x133) >> 2 & 1) != 0) &&
       (*(int *)(_EventDelegate_TypeInfo_12d4590 + 0xe0) == 0)) {
      native_sub_4327ec();
    }
    native_EventDelegate__Execute_deecbc(uVar7,0);
    plVar5 = (long *)(param_1 + 0x50);
    lVar8 = *plVar5;
    if (((*(byte *)(_UnityEngine_Object_TypeInfo_12d54e0 + 0x133) >> 2 & 1) != 0) &&
       (*(int *)(_UnityEngine_Object_TypeInfo_12d54e0 + 0xe0) == 0)) {
      native_sub_4327ec();
    }
    uVar4 = native_UnityEngine_Object__op_Inequality_8d76fc(lVar8,0,0);
    if (((uVar4 & 1) != 0) &&
       (uVar4 = native_System_String__IsNullOrEmpty_b09430(*(undefined8 *)(param_1 + 0x58),0),
       (uVar4 & 1) == 0)) {
      if (*plVar5 == 0) {
                    /* WARNING: Subroutine does not return */
        native_sub_432810();
      }
      native_UnityEngine_GameObject__SendMessage_8de464(*plVar5,*(undefined8 *)(param_1 + 0x58),1,0)
      ;
    }
    *plVar5 = 0;
    native_sub_4326e0(plVar5,0);
    if (((*(byte *)(_UIPlayAnimation_TypeInfo_12d6480 + 0x133) >> 2 & 1) != 0) &&
       (*(int *)(_UIPlayAnimation_TypeInfo_12d6480 + 0xe0) == 0)) {
      native_sub_4327ec();
    }
    puVar6 = *(undefined8 **)(_UIPlayAnimation_TypeInfo_12d6480 + 0xb8);
    *puVar6 = 0;
    if (iRam0000000001345318 != 0) {
      puVar1 = (ulong *)(((ulong)puVar6 >> 0x12 & 0x7fff) * 8 + 0x138ecd8);
      do {
        cVar2 = '\x01';
        bVar3 = (bool)ExclusiveMonitorPass(puVar1,0x10);
        if (bVar3) {
          *puVar1 = *puVar1 | 1L << ((ulong)puVar6 >> 0xc & 0x3f);
          cVar2 = ExclusiveMonitorsStatus();
        }
      } while (cVar2 != '\0');
    }
    return;
  }
  return;
}



/* UIPlayAnimation$$.ctor @ 0xaf682c
 * void UIPlayAnimation___ctor (UIPlayAnimation_o* __this, const MethodInfo* method); */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* UIPlayAnimation$$.ctor
   void UIPlayAnimation___ctor (UIPlayAnimation_o* __this, const MethodInfo* method); */

undefined1  [16] native_UIPlayAnimation___ctor_af682c(ulong param_1)

{
  undefined8 uVar1;
  undefined1 auVar2 [16];
  
  if ((bRam0000000001342075 & 1) == 0) {
    native_sub_43273c(&Method_System_Collections_Generic_List_EventDelegate___ctor___12dc738);
    native_sub_43273c(&System_Collections_Generic_List_EventDelegate__TypeInfo_12d2a08);
    bRam0000000001342075 = 1;
  }
  *(undefined4 *)(param_1 + 0x34) = 1;
  uVar1 = native_sub_432808(_System_Collections_Generic_List_EventDelegate__TypeInfo_12d2a08);
  native_System_Collections_Generic_List_XmlEventCache_XmlEvent______ctor_d3ff44
            (uVar1,_Method_System_Collections_Generic_List_EventDelegate___ctor___12dc738);
  *(undefined8 *)(param_1 + 0x48) = uVar1;
  native_sub_4326e0(param_1 + 0x48,uVar1);
  if ((bRam0000000001340ae0 & 1) == 0) {
    native_sub_43273c(&UnityEngine_Object_TypeInfo_12d54e0,0);
    bRam0000000001340ae0 = 1;
  }
  if (((*(byte *)(_UnityEngine_Object_TypeInfo_12d54e0 + 0x133) >> 2 & 1) != 0) &&
     (*(int *)(_UnityEngine_Object_TypeInfo_12d54e0 + 0xe0) == 0)) {
    native_sub_4327ec();
  }
  auVar2._8_8_ = 0;
  auVar2._0_8_ = param_1;
  return auVar2;
}



/* UIPlayAnimation$$.cctor @ 0xaf68b8
 * void UIPlayAnimation___cctor (const MethodInfo* method); */

/* UIPlayAnimation$$.cctor
   void UIPlayAnimation___cctor (const MethodInfo* method); */

void native_UIPlayAnimation___cctor_af68b8(void)

{
  return;
}


