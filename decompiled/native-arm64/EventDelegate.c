/* ARM64 IL2CPP native pseudocode from Ghidra.
 * Recovered implementation, not original C# source.
 * Function boundaries follow the IL2CPP method address table. */


/* EventDelegate$$get_target @ 0xded500
 * UnityEngine_MonoBehaviour_o* EventDelegate__get_target (EventDelegate_o* __this, const MethodInfo* method); */

/* EventDelegate$$get_target
   UnityEngine_MonoBehaviour_o* EventDelegate__get_target (EventDelegate_o* __this, const
   MethodInfo* method); */

undefined8 native_EventDelegate__get_target_ded500(long param_1)

{
  return *(undefined8 *)(param_1 + 0x10);
}



/* EventDelegate$$set_target @ 0xded508
 * void EventDelegate__set_target (EventDelegate_o* __this, UnityEngine_MonoBehaviour_o* value, const MethodInfo* method); */

/* EventDelegate$$set_target
   void EventDelegate__set_target (EventDelegate_o* __this, UnityEngine_MonoBehaviour_o* value,
   const MethodInfo* method); */

void native_EventDelegate__set_target_ded508(long param_1,undefined8 param_2)

{
  ulong *puVar1;
  char cVar2;
  bool bVar3;
  undefined8 *puVar4;
  
  *(undefined8 *)(param_1 + 0x10) = param_2;
  native_sub_4326e0();
  *(undefined8 *)(param_1 + 0x30) = 0;
  native_sub_4326e0((undefined8 *)(param_1 + 0x30),0);
  *(undefined2 *)(param_1 + 0x38) = 0;
  *(undefined8 *)(param_1 + 0x40) = 0;
  native_sub_4326e0((undefined8 *)(param_1 + 0x40),0);
  *(undefined8 *)(param_1 + 0x48) = 0;
  native_sub_4326e0((undefined8 *)(param_1 + 0x48),0);
  puVar4 = (undefined8 *)(param_1 + 0x20);
  *puVar4 = 0;
  if (iRam0000000001345318 != 0) {
    puVar1 = (ulong *)(((ulong)puVar4 >> 0x12 & 0x7fff) * 8 + 0x138ecd8);
    do {
      cVar2 = '\x01';
      bVar3 = (bool)ExclusiveMonitorPass(puVar1,0x10);
      if (bVar3) {
        *puVar1 = *puVar1 | 1L << ((ulong)puVar4 >> 0xc & 0x3f);
        cVar2 = ExclusiveMonitorsStatus();
      }
    } while (cVar2 != '\0');
  }
  return;
}



/* EventDelegate$$get_methodName @ 0xded56c
 * System_String_o* EventDelegate__get_methodName (EventDelegate_o* __this, const MethodInfo* method); */

/* EventDelegate$$get_methodName
   System_String_o* EventDelegate__get_methodName (EventDelegate_o* __this, const MethodInfo*
   method); */

undefined8 native_EventDelegate__get_methodName_ded56c(long param_1)

{
  return *(undefined8 *)(param_1 + 0x18);
}



/* EventDelegate$$set_methodName @ 0xded574
 * void EventDelegate__set_methodName (EventDelegate_o* __this, System_String_o* value, const MethodInfo* method); */

/* EventDelegate$$set_methodName
   void EventDelegate__set_methodName (EventDelegate_o* __this, System_String_o* value, const
   MethodInfo* method); */

void native_EventDelegate__set_methodName_ded574(long param_1,undefined8 param_2)

{
  ulong *puVar1;
  char cVar2;
  bool bVar3;
  undefined8 *puVar4;
  
  *(undefined8 *)(param_1 + 0x18) = param_2;
  native_sub_4326e0();
  *(undefined8 *)(param_1 + 0x30) = 0;
  native_sub_4326e0((undefined8 *)(param_1 + 0x30),0);
  *(undefined2 *)(param_1 + 0x38) = 0;
  *(undefined8 *)(param_1 + 0x40) = 0;
  native_sub_4326e0((undefined8 *)(param_1 + 0x40),0);
  *(undefined8 *)(param_1 + 0x48) = 0;
  native_sub_4326e0((undefined8 *)(param_1 + 0x48),0);
  puVar4 = (undefined8 *)(param_1 + 0x20);
  *puVar4 = 0;
  if (iRam0000000001345318 != 0) {
    puVar1 = (ulong *)(((ulong)puVar4 >> 0x12 & 0x7fff) * 8 + 0x138ecd8);
    do {
      cVar2 = '\x01';
      bVar3 = (bool)ExclusiveMonitorPass(puVar1,0x10);
      if (bVar3) {
        *puVar1 = *puVar1 | 1L << ((ulong)puVar4 >> 0xc & 0x3f);
        cVar2 = ExclusiveMonitorsStatus();
      }
    } while (cVar2 != '\0');
  }
  return;
}



/* EventDelegate$$get_parameters @ 0xded5d8
 * EventDelegate_Parameter_array* EventDelegate__get_parameters (EventDelegate_o* __this, const MethodInfo* method); */

/* EventDelegate$$get_parameters
   EventDelegate_Parameter_array* EventDelegate__get_parameters (EventDelegate_o* __this, const
   MethodInfo* method); */

undefined8 native_EventDelegate__get_parameters_ded5d8(long param_1)

{
  if (*(char *)(param_1 + 0x39) == '\0') {
    native_EventDelegate__Cache_ded608(param_1);
  }
  return *(undefined8 *)(param_1 + 0x20);
}



/* EventDelegate$$get_isValid @ 0xdedd50
 * bool EventDelegate__get_isValid (EventDelegate_o* __this, const MethodInfo* method); */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* EventDelegate$$get_isValid
   bool EventDelegate__get_isValid (EventDelegate_o* __this, const MethodInfo* method); */

uint native_EventDelegate__get_isValid_dedd50(long param_1)

{
  uint uVar1;
  ulong uVar2;
  undefined8 uVar3;
  
  if ((bRam0000000001346ee7 & 1) == 0) {
    native_sub_43273c(&UnityEngine_Object_TypeInfo_12d54e0);
    bRam0000000001346ee7 = 1;
  }
  if (*(char *)(param_1 + 0x39) == '\0') {
    native_EventDelegate__Cache_ded608(param_1);
  }
  if ((*(char *)(param_1 + 0x38) == '\0') || (*(long *)(param_1 + 0x30) == 0)) {
    uVar3 = *(undefined8 *)(param_1 + 0x10);
    if (((*(byte *)(_UnityEngine_Object_TypeInfo_12d54e0 + 0x133) >> 2 & 1) != 0) &&
       (*(int *)(_UnityEngine_Object_TypeInfo_12d54e0 + 0xe0) == 0)) {
      native_sub_4327ec();
    }
    uVar2 = native_UnityEngine_Object__op_Inequality_8d76fc(uVar3,0,0);
    if ((uVar2 & 1) == 0) {
      uVar1 = 0;
    }
    else {
      uVar1 = native_System_String__IsNullOrEmpty_b09430(*(undefined8 *)(param_1 + 0x18),0);
      uVar1 = uVar1 ^ 1;
    }
  }
  else {
    uVar1 = 1;
  }
  return uVar1 & 1;
}



/* EventDelegate$$get_isEnabled @ 0xdede08
 * bool EventDelegate__get_isEnabled (EventDelegate_o* __this, const MethodInfo* method); */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* EventDelegate$$get_isEnabled
   bool EventDelegate__get_isEnabled (EventDelegate_o* __this, const MethodInfo* method); */

undefined8 native_EventDelegate__get_isEnabled_dede08(long param_1)

{
  ulong uVar1;
  long lVar2;
  undefined8 uVar3;
  
  if ((bRam0000000001346ee8 & 1) == 0) {
    native_sub_43273c(&UnityEngine_Object_TypeInfo_12d54e0);
    bRam0000000001346ee8 = 1;
  }
  if (*(char *)(param_1 + 0x39) == '\0') {
    native_EventDelegate__Cache_ded608(param_1);
  }
  if ((*(char *)(param_1 + 0x38) == '\0') || (*(long *)(param_1 + 0x30) == 0)) {
    uVar3 = *(undefined8 *)(param_1 + 0x10);
    if (((*(byte *)(_UnityEngine_Object_TypeInfo_12d54e0 + 0x133) >> 2 & 1) != 0) &&
       (*(int *)(_UnityEngine_Object_TypeInfo_12d54e0 + 0xe0) == 0)) {
      native_sub_4327ec();
    }
    uVar1 = native_UnityEngine_Object__op_Equality_8e9a3c(uVar3,0,0);
    if ((uVar1 & 1) != 0) {
      return 0;
    }
    lVar2 = *(long *)(param_1 + 0x10);
    if (((*(byte *)(_UnityEngine_Object_TypeInfo_12d54e0 + 0x133) >> 2 & 1) != 0) &&
       (*(int *)(_UnityEngine_Object_TypeInfo_12d54e0 + 0xe0) == 0)) {
      native_sub_4327ec();
    }
    uVar1 = native_UnityEngine_Object__op_Equality_8e9a3c(lVar2,0,0);
    if ((uVar1 & 1) == 0) {
      if (lVar2 == 0) {
                    /* WARNING: Subroutine does not return */
        native_sub_432810();
      }
      if (pcRam0000000001340940 == (code *)0x0) {
        pcRam0000000001340940 = (code *)native_sub_4326f0(&UNK_00e2c6dd);
      }
                    /* WARNING: Could not recover jumptable at 0x008d7b08. Too many branches */
                    /* WARNING: Treating indirect jump as call */
      uVar3 = (*pcRam0000000001340940)(lVar2);
      return uVar3;
    }
  }
  return 1;
}



/* EventDelegate$$.ctor @ 0xdedf00
 * void EventDelegate___ctor (EventDelegate_o* __this, const MethodInfo* method); */

/* EventDelegate$$.ctor
   void EventDelegate___ctor (EventDelegate_o* __this, const MethodInfo* method); */

void native_EventDelegate___ctor_dedf00(void)

{
  return;
}



/* EventDelegate$$.ctor @ 0xde0bd0
 * void EventDelegate___ctor (EventDelegate_o* __this, EventDelegate_Callback_o* call, const MethodInfo* method); */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* EventDelegate$$.ctor
   void EventDelegate___ctor (EventDelegate_o* __this, EventDelegate_Callback_o* call, const
   MethodInfo* method); */

void native_EventDelegate___ctor_de0bd0(long param_1,long param_2)

{
  ulong *puVar1;
  char cVar2;
  bool bVar3;
  ulong uVar4;
  undefined8 uVar5;
  long *plVar6;
  undefined8 *puVar7;
  long *plVar8;
  long lVar9;
  
  native_System_Object___ctor_ad2798(param_1,0);
  if ((bRam0000000001346eeb & 1) == 0) {
    native_sub_43273c(&EventDelegate_TypeInfo_12d4590);
    native_sub_43273c(&UnityEngine_MonoBehaviour_TypeInfo_12d52e8);
    native_sub_43273c(&UnityEngine_Object_TypeInfo_12d54e0);
    bRam0000000001346eeb = 1;
  }
  native_EventDelegate__Clear_dee3d0(param_1);
  if (param_2 == 0) {
    return;
  }
  if (((*(byte *)(_EventDelegate_TypeInfo_12d4590 + 0x133) >> 2 & 1) != 0) &&
     (*(int *)(_EventDelegate_TypeInfo_12d4590 + 0xe0) == 0)) {
    native_sub_4327ec();
  }
  uVar4 = native_EventDelegate__IsValid_dee14c(param_2);
  if ((uVar4 & 1) == 0) {
    return;
  }
  plVar6 = *(long **)(param_2 + 0x20);
  if (plVar6 != (long *)0x0) {
    if (*(byte *)(_UnityEngine_MonoBehaviour_TypeInfo_12d52e8 + 300) <= *(byte *)(*plVar6 + 300)) {
      if (*(long *)(*(long *)(*plVar6 + 200) +
                    (ulong)*(byte *)(_UnityEngine_MonoBehaviour_TypeInfo_12d52e8 + 300) * 8 + -8) !=
          _UnityEngine_MonoBehaviour_TypeInfo_12d52e8) {
        plVar6 = (long *)0x0;
      }
      goto LAB_00dedfd4;
    }
  }
  plVar6 = (long *)0x0;
LAB_00dedfd4:
  plVar8 = (long *)(param_1 + 0x10);
  *plVar8 = (long)plVar6;
  native_sub_4326e0(plVar8);
  lVar9 = *plVar8;
  if (((*(byte *)(_UnityEngine_Object_TypeInfo_12d54e0 + 0x133) >> 2 & 1) != 0) &&
     (*(int *)(_UnityEngine_Object_TypeInfo_12d54e0 + 0xe0) == 0)) {
    native_sub_4327ec();
  }
  uVar4 = native_UnityEngine_Object__op_Equality_8e9a3c(lVar9,0,0);
  if ((uVar4 & 1) == 0) {
    if (((*(byte *)(_EventDelegate_TypeInfo_12d4590 + 0x133) >> 2 & 1) != 0) &&
       (*(int *)(_EventDelegate_TypeInfo_12d4590 + 0xe0) == 0)) {
      native_sub_4327ec();
    }
    uVar5 = native_EventDelegate__GetMethodName_dee120(param_2);
    *(undefined8 *)(param_1 + 0x18) = uVar5;
    native_sub_4326e0((undefined8 *)(param_1 + 0x18),uVar5);
    *(undefined1 *)(param_1 + 0x38) = 0;
    return;
  }
  *(undefined1 *)(param_1 + 0x38) = 1;
  *(long *)(param_1 + 0x30) = param_2;
  native_sub_4326e0((long *)(param_1 + 0x30),param_2);
  puVar7 = (undefined8 *)(param_1 + 0x18);
  *puVar7 = 0;
  if (iRam0000000001345318 != 0) {
    puVar1 = (ulong *)(((ulong)puVar7 >> 0x12 & 0x7fff) * 8 + 0x138ecd8);
    do {
      cVar2 = '\x01';
      bVar3 = (bool)ExclusiveMonitorPass(puVar1,0x10);
      if (bVar3) {
        *puVar1 = *puVar1 | 1L << ((ulong)puVar7 >> 0xc & 0x3f);
        cVar2 = ExclusiveMonitorsStatus();
      }
    } while (cVar2 != '\0');
  }
  return;
}



/* EventDelegate$$.ctor @ 0xdee094
 * void EventDelegate___ctor (EventDelegate_o* __this, UnityEngine_MonoBehaviour_o* target, System_String_o* methodName, const MethodInfo* method); */

/* EventDelegate$$.ctor
   void EventDelegate___ctor (EventDelegate_o* __this, UnityEngine_MonoBehaviour_o* target,
   System_String_o* methodName, const MethodInfo* method); */

void native_EventDelegate___ctor_dee094(long param_1,undefined8 param_2,undefined8 param_3)

{
  ulong *puVar1;
  char cVar2;
  bool bVar3;
  undefined8 *puVar4;
  
  native_System_Object___ctor_ad2798(param_1,0);
  native_EventDelegate__Clear_dee3d0();
  *(undefined8 *)(param_1 + 0x10) = param_2;
  native_sub_4326e0((undefined8 *)(param_1 + 0x10),param_2);
  puVar4 = (undefined8 *)(param_1 + 0x18);
  *puVar4 = param_3;
  if (iRam0000000001345318 != 0) {
    puVar1 = (ulong *)(((ulong)puVar4 >> 0x12 & 0x7fff) * 8 + 0x138ecd8);
    do {
      cVar2 = '\x01';
      bVar3 = (bool)ExclusiveMonitorPass(puVar1,0x10);
      if (bVar3) {
        *puVar1 = *puVar1 | 1L << ((ulong)puVar4 >> 0xc & 0x3f);
        cVar2 = ExclusiveMonitorsStatus();
      }
    } while (cVar2 != '\0');
  }
  return;
}



/* EventDelegate$$GetMethodName @ 0xdee120
 * System_String_o* EventDelegate__GetMethodName (EventDelegate_Callback_o* callback, const MethodInfo* method); */

/* EventDelegate$$GetMethodName
   System_String_o* EventDelegate__GetMethodName (EventDelegate_Callback_o* callback, const
   MethodInfo* method); */

void native_EventDelegate__GetMethodName_dee120(long param_1)

{
  long *plVar1;
  
  if ((param_1 != 0) &&
     (plVar1 = (long *)native_System_Delegate__get_Method_a6b39c(param_1,0), plVar1 != (long *)0x0))
  {
                    /* WARNING: Could not recover jumptable at 0x00dee144. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (**(code **)(*plVar1 + 0x1a8))(plVar1,*(undefined8 *)(*plVar1 + 0x1b0));
    return;
  }
                    /* WARNING: Subroutine does not return */
  native_sub_432810();
}



/* EventDelegate$$IsValid @ 0xdee14c
 * bool EventDelegate__IsValid (EventDelegate_Callback_o* callback, const MethodInfo* method); */

/* EventDelegate$$IsValid
   bool EventDelegate__IsValid (EventDelegate_Callback_o* callback, const MethodInfo* method); */

uint native_EventDelegate__IsValid_dee14c(long param_1)

{
  uint uVar1;
  undefined8 uVar2;
  
  if (param_1 != 0) {
    uVar2 = native_System_Delegate__get_Method_a6b39c(param_1,0);
    uVar1 = native_System_Reflection_MethodInfo__op_Equality_911664(uVar2,0,0);
    return ~uVar1 & 1;
  }
  return 0;
}



/* EventDelegate$$Equals @ 0xdee174
 * bool EventDelegate__Equals (EventDelegate_o* __this, Il2CppObject* obj, const MethodInfo* method); */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* EventDelegate$$Equals
   bool EventDelegate__Equals (EventDelegate_o* __this, Il2CppObject* obj, const MethodInfo*
   method); */

uint native_EventDelegate__Equals_dee174(long param_1,long *param_2)

{
  bool bVar1;
  uint uVar2;
  ulong uVar3;
  long lVar4;
  int iVar5;
  long lVar6;
  long *plVar7;
  long *plVar8;
  int iVar9;
  undefined8 uVar10;
  
  if ((bRam0000000001346ee9 & 1) == 0) {
    native_sub_43273c(&EventDelegate_Callback_TypeInfo_12d72e8);
    native_sub_43273c(&EventDelegate_TypeInfo_12d4590);
    native_sub_43273c(&UnityEngine_MonoBehaviour_TypeInfo_12d52e8);
    native_sub_43273c(&UnityEngine_Object_TypeInfo_12d54e0);
    bRam0000000001346ee9 = 1;
  }
  if (param_2 == (long *)0x0) {
    uVar2 = native_EventDelegate__get_isValid_dedd50(param_1);
    uVar2 = uVar2 ^ 1;
    goto LAB_00dee358;
  }
  lVar6 = *param_2;
  if (lVar6 == _EventDelegate_Callback_TypeInfo_12d72e8) {
    uVar3 = (**(code **)(_EventDelegate_Callback_TypeInfo_12d72e8 + 0x138))
                      (param_2,*(undefined8 *)(param_1 + 0x30),
                       *(undefined8 *)(_EventDelegate_Callback_TypeInfo_12d72e8 + 0x140));
    if ((uVar3 & 1) != 0) {
      uVar2 = 1;
      goto LAB_00dee358;
    }
    plVar7 = (long *)param_2[4];
    if (plVar7 == (long *)0x0) {
LAB_00dee2b8:
      plVar7 = (long *)0x0;
    }
    else {
      if (*(byte *)(*plVar7 + 300) < *(byte *)(_UnityEngine_MonoBehaviour_TypeInfo_12d52e8 + 300))
      goto LAB_00dee2b8;
      if (*(long *)(*(long *)(*plVar7 + 200) +
                    (ulong)*(byte *)(_UnityEngine_MonoBehaviour_TypeInfo_12d52e8 + 300) * 8 + -8) !=
          _UnityEngine_MonoBehaviour_TypeInfo_12d52e8) {
        plVar7 = (long *)0x0;
      }
    }
    uVar10 = *(undefined8 *)(param_1 + 0x10);
    if (((*(byte *)(_UnityEngine_Object_TypeInfo_12d54e0 + 0x133) >> 2 & 1) != 0) &&
       (*(int *)(_UnityEngine_Object_TypeInfo_12d54e0 + 0xe0) == 0)) {
      native_sub_4327ec();
    }
    uVar3 = native_UnityEngine_Object__op_Equality_8e9a3c(uVar10,plVar7,0);
    if ((uVar3 & 1) != 0) {
      lVar6 = *(long *)(param_1 + 0x18);
      if (((*(byte *)(_EventDelegate_TypeInfo_12d4590 + 0x133) >> 2 & 1) != 0) &&
         (*(int *)(_EventDelegate_TypeInfo_12d4590 + 0xe0) == 0)) {
        native_sub_4327ec();
      }
      lVar4 = native_EventDelegate__GetMethodName_dee120(param_2);
native_System_String__Equals_b09094:
      if (lVar6 == lVar4) {
        uVar2 = 1;
      }
      else {
        uVar2 = 0;
        if ((lVar6 != 0) && (lVar4 != 0)) {
          if (*(int *)(lVar6 + 0x10) == *(int *)(lVar4 + 0x10)) {
            if ((lVar6 == 0) || (lVar4 == 0)) {
                    /* WARNING: Subroutine does not return */
              native_sub_432810(lVar6,lVar4,0);
            }
            iVar5 = *(int *)(lVar6 + 0x10);
            plVar7 = (long *)(lVar6 + 0x14);
            plVar8 = (long *)(lVar4 + 0x14);
            uVar3 = native_System_Environment__get_Is64BitProcess_bf15dc(0);
            if ((uVar3 & 1) == 0) {
              iVar9 = iVar5;
              if (9 < iVar5) {
                do {
                  if ((int)*plVar7 != (int)*plVar8) {
                    return 0;
                  }
                  if (*(int *)((long)plVar7 + 4) != *(int *)((long)plVar8 + 4)) {
                    return 0;
                  }
                  if ((int)plVar7[1] != (int)plVar8[1]) {
                    return 0;
                  }
                  if (*(int *)((long)plVar7 + 0xc) != *(int *)((long)plVar8 + 0xc)) {
                    return 0;
                  }
                  if ((int)plVar7[2] != (int)plVar8[2]) {
                    return 0;
                  }
                  iVar5 = iVar9 + -10;
                  plVar7 = (long *)((long)plVar7 + 0x14);
                  plVar8 = (long *)((long)plVar8 + 0x14);
                  bVar1 = 0x13 < iVar9;
                  iVar9 = iVar5;
                } while (bVar1);
              }
            }
            else {
              iVar9 = iVar5;
              if (0xb < iVar5) {
                do {
                  if (*plVar7 != *plVar8) {
                    return 0;
                  }
                  if (plVar7[1] != plVar8[1]) {
                    return 0;
                  }
                  if (plVar7[2] != plVar8[2]) {
                    return 0;
                  }
                  iVar5 = iVar9 + -0xc;
                  plVar7 = plVar7 + 3;
                  plVar8 = plVar8 + 3;
                  bVar1 = 0x17 < iVar9;
                  iVar9 = iVar5;
                } while (bVar1);
              }
            }
            if (0 < iVar5) {
              iVar5 = iVar5 + 2;
              do {
                if ((int)*plVar7 != (int)*plVar8) {
                  return 0;
                }
                iVar5 = iVar5 + -2;
                plVar7 = (long *)((long)plVar7 + 4);
                plVar8 = (long *)((long)plVar8 + 4);
              } while (2 < iVar5);
            }
            return 1;
          }
          uVar2 = 0;
        }
      }
      return uVar2;
    }
  }
  else if ((*(byte *)(_EventDelegate_TypeInfo_12d4590 + 300) <= *(byte *)(lVar6 + 300)) &&
          (*(long *)(*(long *)(lVar6 + 200) +
                     (ulong)*(byte *)(_EventDelegate_TypeInfo_12d4590 + 300) * 8 + -8) ==
           _EventDelegate_TypeInfo_12d4590)) {
    uVar10 = *(undefined8 *)(param_1 + 0x10);
    lVar6 = param_2[2];
    if (((*(byte *)(_UnityEngine_Object_TypeInfo_12d54e0 + 0x133) >> 2 & 1) != 0) &&
       (*(int *)(_UnityEngine_Object_TypeInfo_12d54e0 + 0xe0) == 0)) {
      native_sub_4327ec();
    }
    uVar3 = native_UnityEngine_Object__op_Equality_8e9a3c(uVar10,lVar6,0);
    if ((uVar3 & 1) != 0) {
      lVar6 = *(long *)(param_1 + 0x18);
      lVar4 = param_2[3];
      goto native_System_String__Equals_b09094;
    }
  }
  uVar2 = 0;
LAB_00dee358:
  return uVar2 & 1;
}



/* EventDelegate$$GetHashCode @ 0xdee36c
 * int32_t EventDelegate__GetHashCode (EventDelegate_o* __this, const MethodInfo* method); */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* EventDelegate$$GetHashCode
   int32_t EventDelegate__GetHashCode (EventDelegate_o* __this, const MethodInfo* method); */

undefined4 native_EventDelegate__GetHashCode_dee36c(void)

{
  if ((bRam0000000001346eea & 1) == 0) {
    native_sub_43273c(&EventDelegate_TypeInfo_12d4590);
    bRam0000000001346eea = 1;
  }
  if (((*(byte *)(_EventDelegate_TypeInfo_12d4590 + 0x133) >> 2 & 1) != 0) &&
     (*(int *)(_EventDelegate_TypeInfo_12d4590 + 0xe0) == 0)) {
    native_sub_4327ec();
  }
  return **(undefined4 **)(_EventDelegate_TypeInfo_12d4590 + 0xb8);
}



/* EventDelegate$$Set @ 0xdedf08
 * void EventDelegate__Set (EventDelegate_o* __this, EventDelegate_Callback_o* call, const MethodInfo* method); */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* EventDelegate$$Set
   void EventDelegate__Set (EventDelegate_o* __this, EventDelegate_Callback_o* call, const
   MethodInfo* method); */

void native_EventDelegate__Set_dedf08(long param_1,long param_2)

{
  ulong *puVar1;
  char cVar2;
  bool bVar3;
  ulong uVar4;
  undefined8 uVar5;
  long *plVar6;
  undefined8 *puVar7;
  long *plVar8;
  long lVar9;
  
  if ((bRam0000000001346eeb & 1) == 0) {
    native_sub_43273c(&EventDelegate_TypeInfo_12d4590);
    native_sub_43273c(&UnityEngine_MonoBehaviour_TypeInfo_12d52e8);
    native_sub_43273c(&UnityEngine_Object_TypeInfo_12d54e0);
    bRam0000000001346eeb = 1;
  }
  native_EventDelegate__Clear_dee3d0(param_1);
  if (param_2 == 0) {
    return;
  }
  if (((*(byte *)(_EventDelegate_TypeInfo_12d4590 + 0x133) >> 2 & 1) != 0) &&
     (*(int *)(_EventDelegate_TypeInfo_12d4590 + 0xe0) == 0)) {
    native_sub_4327ec();
  }
  uVar4 = native_EventDelegate__IsValid_dee14c(param_2);
  if ((uVar4 & 1) == 0) {
    return;
  }
  plVar6 = *(long **)(param_2 + 0x20);
  if (plVar6 != (long *)0x0) {
    if (*(byte *)(_UnityEngine_MonoBehaviour_TypeInfo_12d52e8 + 300) <= *(byte *)(*plVar6 + 300)) {
      if (*(long *)(*(long *)(*plVar6 + 200) +
                    (ulong)*(byte *)(_UnityEngine_MonoBehaviour_TypeInfo_12d52e8 + 300) * 8 + -8) !=
          _UnityEngine_MonoBehaviour_TypeInfo_12d52e8) {
        plVar6 = (long *)0x0;
      }
      goto LAB_00dedfd4;
    }
  }
  plVar6 = (long *)0x0;
LAB_00dedfd4:
  plVar8 = (long *)(param_1 + 0x10);
  *plVar8 = (long)plVar6;
  native_sub_4326e0(plVar8);
  lVar9 = *plVar8;
  if (((*(byte *)(_UnityEngine_Object_TypeInfo_12d54e0 + 0x133) >> 2 & 1) != 0) &&
     (*(int *)(_UnityEngine_Object_TypeInfo_12d54e0 + 0xe0) == 0)) {
    native_sub_4327ec();
  }
  uVar4 = native_UnityEngine_Object__op_Equality_8e9a3c(lVar9,0,0);
  if ((uVar4 & 1) == 0) {
    if (((*(byte *)(_EventDelegate_TypeInfo_12d4590 + 0x133) >> 2 & 1) != 0) &&
       (*(int *)(_EventDelegate_TypeInfo_12d4590 + 0xe0) == 0)) {
      native_sub_4327ec();
    }
    uVar5 = native_EventDelegate__GetMethodName_dee120(param_2);
    *(undefined8 *)(param_1 + 0x18) = uVar5;
    native_sub_4326e0((undefined8 *)(param_1 + 0x18),uVar5);
    *(undefined1 *)(param_1 + 0x38) = 0;
    return;
  }
  *(undefined1 *)(param_1 + 0x38) = 1;
  *(long *)(param_1 + 0x30) = param_2;
  native_sub_4326e0((long *)(param_1 + 0x30),param_2);
  puVar7 = (undefined8 *)(param_1 + 0x18);
  *puVar7 = 0;
  if (iRam0000000001345318 != 0) {
    puVar1 = (ulong *)(((ulong)puVar7 >> 0x12 & 0x7fff) * 8 + 0x138ecd8);
    do {
      cVar2 = '\x01';
      bVar3 = (bool)ExclusiveMonitorPass(puVar1,0x10);
      if (bVar3) {
        *puVar1 = *puVar1 | 1L << ((ulong)puVar7 >> 0xc & 0x3f);
        cVar2 = ExclusiveMonitorsStatus();
      }
    } while (cVar2 != '\0');
  }
  return;
}



/* EventDelegate$$Set @ 0xdee0d4
 * void EventDelegate__Set (EventDelegate_o* __this, UnityEngine_MonoBehaviour_o* target, System_String_o* methodName, const MethodInfo* method); */

/* EventDelegate$$Set
   void EventDelegate__Set (EventDelegate_o* __this, UnityEngine_MonoBehaviour_o* target,
   System_String_o* methodName, const MethodInfo* method); */

void native_EventDelegate__Set_dee0d4(long param_1,undefined8 param_2,undefined8 param_3)

{
  ulong *puVar1;
  char cVar2;
  bool bVar3;
  undefined8 *puVar4;
  
  native_EventDelegate__Clear_dee3d0();
  *(undefined8 *)(param_1 + 0x10) = param_2;
  native_sub_4326e0((undefined8 *)(param_1 + 0x10),param_2);
  puVar4 = (undefined8 *)(param_1 + 0x18);
  *puVar4 = param_3;
  if (iRam0000000001345318 != 0) {
    puVar1 = (ulong *)(((ulong)puVar4 >> 0x12 & 0x7fff) * 8 + 0x138ecd8);
    do {
      cVar2 = '\x01';
      bVar3 = (bool)ExclusiveMonitorPass(puVar1,0x10);
      if (bVar3) {
        *puVar1 = *puVar1 | 1L << ((ulong)puVar4 >> 0xc & 0x3f);
        cVar2 = ExclusiveMonitorsStatus();
      }
    } while (cVar2 != '\0');
  }
  return;
}



/* EventDelegate$$Cache @ 0xded608
 * void EventDelegate__Cache (EventDelegate_o* __this, const MethodInfo* method); */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* EventDelegate$$Cache
   void EventDelegate__Cache (EventDelegate_o* __this, const MethodInfo* method); */

ulong native_EventDelegate__Cache_ded608(ulong param_1)

{
  uint uVar1;
  ulong uVar2;
  long *plVar3;
  undefined8 uVar4;
  undefined8 uVar5;
  long lVar6;
  long lVar7;
  long lVar8;
  undefined8 uVar9;
  undefined8 *puVar10;
  long *plVar11;
  undefined8 *puVar12;
  undefined8 uVar13;
  long lVar14;
  long *plVar15;
  long *plVar16;
  ulong uVar17;
  
  uVar2 = param_1;
  if ((bRam0000000001346eec & 1) == 0) {
    native_sub_43273c(&EventDelegate_Callback_var_12d1d48);
    native_sub_43273c(&EventDelegate_Callback_TypeInfo_12d72e8);
    native_sub_43273c(&UnityEngine_Debug_TypeInfo_12d4338);
    native_sub_43273c(&EventDelegate_TypeInfo_12d4590);
    native_sub_43273c(&UnityEngine_MonoBehaviour_TypeInfo_12d52e8);
    native_sub_43273c(&UnityEngine_Object_TypeInfo_12d54e0);
    native_sub_43273c(&EventDelegate_Parameter___TypeInfo_12d3538);
    native_sub_43273c(&EventDelegate_Parameter_TypeInfo_12d72f0);
    native_sub_43273c(&System_Type_TypeInfo_12d6340);
    native_sub_43273c(&void_var_12d19f0);
    native_sub_43273c(&StringLiteral___on__12eb1e0);
    native_sub_43273c(&StringLiteral__must_have_a__void__return_type__12eaeb0);
    native_sub_43273c(&StringLiteral_Could_not_find_method___12ed410);
    uVar2 = native_sub_43273c(&StringLiteral___12eb7a0);
    bRam0000000001346eec = 1;
  }
  *(undefined1 *)(param_1 + 0x39) = 1;
  if (*(char *)(param_1 + 0x38) != '\0') {
    return uVar2;
  }
  plVar11 = (long *)(param_1 + 0x30);
  if (*plVar11 != 0) {
    plVar16 = *(long **)(*plVar11 + 0x20);
    uVar13 = *(undefined8 *)(param_1 + 0x10);
    if (((*(byte *)(_UnityEngine_Object_TypeInfo_12d54e0 + 0x133) >> 2 & 1) != 0) &&
       (*(int *)(_UnityEngine_Object_TypeInfo_12d54e0 + 0xe0) == 0)) {
      native_sub_4327ec();
    }
    if (plVar16 == (long *)0x0) {
LAB_00ded758:
      plVar16 = (long *)0x0;
    }
    else {
      if (*(byte *)(*plVar16 + 300) < *(byte *)(_UnityEngine_MonoBehaviour_TypeInfo_12d52e8 + 300))
      goto LAB_00ded758;
      if (*(long *)(*(long *)(*plVar16 + 200) +
                    (ulong)*(byte *)(_UnityEngine_MonoBehaviour_TypeInfo_12d52e8 + 300) * 8 + -8) !=
          _UnityEngine_MonoBehaviour_TypeInfo_12d52e8) {
        plVar16 = (long *)0x0;
      }
    }
    uVar2 = native_UnityEngine_Object__op_Inequality_8d76fc(plVar16,uVar13,0);
    if ((uVar2 & 1) == 0) {
      lVar14 = *plVar11;
      if (((*(byte *)(_EventDelegate_TypeInfo_12d4590 + 0x133) >> 2 & 1) != 0) &&
         (*(int *)(_EventDelegate_TypeInfo_12d4590 + 0xe0) == 0)) {
        native_sub_4327ec();
      }
      uVar13 = native_EventDelegate__GetMethodName_dee120(lVar14);
      uVar2 = native_System_String__op_Inequality_afbbb4(uVar13,*(undefined8 *)(param_1 + 0x18),0);
      if ((uVar2 & 1) == 0) {
        return uVar2;
      }
    }
  }
  plVar16 = (long *)(param_1 + 0x10);
  lVar14 = *plVar16;
  if (((*(byte *)(_UnityEngine_Object_TypeInfo_12d54e0 + 0x133) >> 2 & 1) != 0) &&
     (*(int *)(_UnityEngine_Object_TypeInfo_12d54e0 + 0xe0) == 0)) {
    native_sub_4327ec();
  }
  uVar2 = native_UnityEngine_Object__op_Inequality_8d76fc(lVar14,0,0);
  if ((uVar2 & 1) == 0) {
    return uVar2;
  }
  uVar2 = native_System_String__IsNullOrEmpty_b09430(*(undefined8 *)(param_1 + 0x18),0);
  if ((uVar2 & 1) != 0) {
    return uVar2;
  }
  if (*plVar16 == 0) goto LAB_00dedcf4;
  plVar3 = (long *)native_System_Object__GetType_adb48c(*plVar16,0);
  plVar15 = (long *)(param_1 + 0x40);
  *plVar15 = 0;
  native_sub_4326e0(plVar15,0);
  while( true ) {
    if (((*(byte *)(_System_Type_TypeInfo_12d6340 + 0x133) >> 2 & 1) != 0) &&
       (*(int *)(_System_Type_TypeInfo_12d6340 + 0xe0) == 0)) {
      native_sub_4327ec();
    }
    uVar2 = native_System_Type__op_Inequality_b118e0(plVar3,0,0);
    if ((uVar2 & 1) == 0) break;
    if (plVar3 == (long *)0x0) {
                    /* WARNING: Subroutine does not return */
      native_sub_432810();
    }
    lVar14 = native_System_Type__GetMethod_b0ff48(plVar3,*(undefined8 *)(param_1 + 0x18),0x34,0);
    *plVar15 = lVar14;
    native_sub_4326e0(plVar15);
    uVar2 = native_System_Reflection_MethodInfo__op_Inequality_914de0(*plVar15,0,0);
    if ((uVar2 & 1) != 0) break;
    plVar3 = (long *)(**(code **)(*plVar3 + 0x308))(plVar3,*(undefined8 *)(*plVar3 + 0x310));
  }
  uVar2 = native_System_Reflection_MethodInfo__op_Equality_911664(*plVar15,0,0);
  if ((uVar2 & 1) != 0) {
    if (*(long *)(param_1 + 0x10) != 0) {
      uVar9 = *(undefined8 *)(param_1 + 0x18);
      plVar11 = (long *)native_System_Object__GetType_adb48c(*(long *)(param_1 + 0x10),0);
      uVar5 = _StringLiteral_Could_not_find_method___12ed410;
      uVar13 = _StringLiteral___on__12eb1e0;
      if (plVar11 == (long *)0x0) {
        uVar4 = 0;
      }
      else {
        uVar4 = (**(code **)(*plVar11 + 0x168))(plVar11,*(undefined8 *)(*plVar11 + 0x170));
      }
      uVar13 = native_System_String__Concat_afcabc(uVar5,uVar9,uVar13,uVar4,0);
      lVar14 = *plVar16;
LAB_00dedae0:
      if (((*(byte *)(_UnityEngine_Debug_TypeInfo_12d4338 + 0x133) >> 2 & 1) != 0) &&
         (*(int *)(_UnityEngine_Debug_TypeInfo_12d4338 + 0xe0) == 0)) {
        native_sub_4327ec(_UnityEngine_Debug_TypeInfo_12d4338);
      }
      uVar2 = native_UnityEngine_Debug__LogError_8dc6f8(uVar13,lVar14,0);
      return uVar2;
    }
    goto LAB_00dedcf4;
  }
  plVar3 = (long *)*plVar15;
  if (plVar3 == (long *)0x0) goto LAB_00dedcf4;
  uVar5 = (**(code **)(*plVar3 + 0x398))(plVar3,*(undefined8 *)(*plVar3 + 0x3a0));
  uVar13 = _void_var_12d19f0;
  if (((*(byte *)(_System_Type_TypeInfo_12d6340 + 0x133) >> 2 & 1) != 0) &&
     (*(int *)(_System_Type_TypeInfo_12d6340 + 0xe0) == 0)) {
    native_sub_4327ec(_System_Type_TypeInfo_12d6340);
  }
  uVar13 = native_System_Type__GetTypeFromHandle_b0fb24(uVar13,0);
  uVar2 = native_System_Type__op_Inequality_b118e0(uVar5,uVar13,0);
  if ((uVar2 & 1) != 0) {
    if (*plVar16 != 0) {
      plVar11 = (long *)native_System_Object__GetType_adb48c(*plVar16,0);
      uVar13 = 0;
      if (plVar11 != (long *)0x0) {
        uVar13 = (**(code **)(*plVar11 + 0x168))(plVar11,*(undefined8 *)(*plVar11 + 0x170));
      }
      uVar13 = native_System_String__Concat_afcabc
                         (uVar13,_StringLiteral___12eb7a0,*(undefined8 *)(param_1 + 0x18),
                          _StringLiteral__must_have_a__void__return_type__12eaeb0,0);
      lVar14 = *(long *)(param_1 + 0x10);
      goto LAB_00dedae0;
    }
    goto LAB_00dedcf4;
  }
  plVar15 = (long *)*plVar15;
  if (plVar15 == (long *)0x0) goto LAB_00dedcf4;
  lVar14 = (**(code **)(*plVar15 + 0x248))(plVar15,*(undefined8 *)(*plVar15 + 0x250));
  plVar16 = (long *)(param_1 + 0x48);
  *plVar16 = lVar14;
  native_sub_4326e0(plVar16,lVar14);
  uVar13 = _EventDelegate_Callback_var_12d1d48;
  if (*plVar16 == 0) goto LAB_00dedcf4;
  if (*(long *)(*plVar16 + 0x18) == 0) {
    if (((*(byte *)(_System_Type_TypeInfo_12d6340 + 0x133) >> 2 & 1) != 0) &&
       (*(int *)(_System_Type_TypeInfo_12d6340 + 0xe0) == 0)) {
      native_sub_4327ec();
    }
    uVar13 = native_System_Type__GetTypeFromHandle_b0fb24(uVar13,0);
    plVar16 = (long *)native_System_Delegate__CreateDelegate_a6c1f4
                                (uVar13,*(undefined8 *)(param_1 + 0x10),
                                 *(undefined8 *)(param_1 + 0x18),0);
    if ((plVar16 != (long *)0x0) && (*plVar16 != _EventDelegate_Callback_TypeInfo_12d72e8)) {
      uVar13 = native_sub_432b04(plVar16);
      func_0x002ca530();
      func_0x002ca1e0(uVar13);
      lVar14 = native_sub_31dbc4();
      if ((bRam0000000001346ee7 & 1) == 0) {
        native_sub_43273c(&UnityEngine_Object_TypeInfo_12d54e0);
        bRam0000000001346ee7 = 1;
      }
      if (*(char *)(lVar14 + 0x39) == '\0') {
        native_EventDelegate__Cache_ded608(lVar14);
      }
      if ((*(char *)(lVar14 + 0x38) == '\0') || (*(long *)(lVar14 + 0x30) == 0)) {
        uVar13 = *(undefined8 *)(lVar14 + 0x10);
        if (((*(byte *)(_UnityEngine_Object_TypeInfo_12d54e0 + 0x133) >> 2 & 1) != 0) &&
           (*(int *)(_UnityEngine_Object_TypeInfo_12d54e0 + 0xe0) == 0)) {
          native_sub_4327ec();
        }
        uVar2 = native_UnityEngine_Object__op_Inequality_8d76fc(uVar13,0,0);
        if ((uVar2 & 1) == 0) {
          uVar1 = 0;
        }
        else {
          uVar1 = native_System_String__IsNullOrEmpty_b09430(*(undefined8 *)(lVar14 + 0x18),0);
          uVar1 = uVar1 ^ 1;
        }
      }
      else {
        uVar1 = 1;
      }
      return (ulong)(uVar1 & 1);
    }
    *(long **)(param_1 + 0x30) = plVar16;
    native_sub_4326e0(plVar11,plVar16);
    *(undefined8 *)(param_1 + 0x50) = 0;
    native_sub_4326e0((undefined8 *)(param_1 + 0x50),0);
    *(undefined8 *)(param_1 + 0x20) = 0;
    uVar2 = native_sub_4326e0((undefined8 *)(param_1 + 0x20),0);
    return uVar2;
  }
  *(undefined8 *)(param_1 + 0x30) = 0;
  uVar2 = native_sub_4326e0(plVar11,0);
  puVar10 = (undefined8 *)(param_1 + 0x20);
  plVar11 = (long *)*puVar10;
  lVar14 = *(long *)(param_1 + 0x48);
  if (plVar11 == (long *)0x0) {
    if (lVar14 == 0) goto LAB_00dedcf4;
LAB_00dedbc4:
    uVar13 = native_sub_432750(_EventDelegate_Parameter___TypeInfo_12d3538,
                               *(undefined4 *)(lVar14 + 0x18));
    *puVar10 = uVar13;
    uVar2 = native_sub_4326e0(puVar10,uVar13);
    plVar11 = (long *)*puVar10;
    if (plVar11 == (long *)0x0) goto LAB_00dedcf4;
    lVar14 = plVar11[3];
    if (0 < (int)lVar14) {
      uVar17 = 0;
      lVar8 = 0x20;
      do {
        lVar6 = native_sub_432808(_EventDelegate_Parameter_TypeInfo_12d72f0);
        native_EventDelegate_Parameter___ctor_54bfc8(lVar6,0);
        if (plVar11 == (long *)0x0) goto LAB_00dedcf4;
        if ((lVar6 != 0) &&
           (lVar7 = native_sub_4327f8(lVar6,*(undefined8 *)(*plVar11 + 0x40)), lVar7 == 0)) {
          uVar13 = native_sub_432830();
                    /* WARNING: Subroutine does not return */
          native_sub_4327dc(uVar13,0);
        }
        if (*(uint *)(plVar11 + 3) <= uVar17) goto LAB_00dedcf8;
        *(long *)((long)plVar11 + lVar8) = lVar6;
        uVar2 = native_sub_4326e0((long *)((long)plVar11 + lVar8),lVar6);
        plVar11 = (long *)*puVar10;
        uVar17 = uVar17 + 1;
        lVar8 = lVar8 + 8;
      } while ((long)uVar17 < (long)(int)lVar14);
      if (plVar11 == (long *)0x0) goto LAB_00dedcf4;
    }
  }
  else {
    if (lVar14 == 0) goto LAB_00dedcf4;
    if ((int)plVar11[3] != *(int *)(lVar14 + 0x18)) goto LAB_00dedbc4;
  }
  lVar14 = plVar11[3];
  if ((int)lVar14 < 1) {
    return uVar2;
  }
  if (plVar11 != (long *)0x0) {
    uVar1 = 0;
    do {
      if (*(uint *)(plVar11 + 3) <= uVar1) {
LAB_00dedcf8:
        uVar13 = native_sub_43283c();
                    /* WARNING: Subroutine does not return */
        native_sub_4327dc(uVar13,0);
      }
      lVar8 = *plVar16;
      if (lVar8 == 0) break;
      if (*(uint *)(lVar8 + 0x18) <= uVar1) goto LAB_00dedcf8;
      plVar3 = *(long **)(lVar8 + (long)(int)uVar1 * 8 + 0x20);
      if (plVar3 == (long *)0x0) break;
      lVar8 = plVar11[(long)(int)uVar1 + 4];
      uVar13 = (**(code **)(*plVar3 + 0x1a8))(plVar3,*(undefined8 *)(*plVar3 + 0x1b0));
      if (lVar8 == 0) break;
      puVar12 = (undefined8 *)(lVar8 + 0x28);
      *puVar12 = uVar13;
      uVar2 = native_sub_4326e0(puVar12,uVar13);
      uVar1 = uVar1 + 1;
      if ((int)lVar14 <= (int)uVar1) {
        return uVar2;
      }
      plVar11 = (long *)*puVar10;
    } while (plVar11 != (long *)0x0);
  }
LAB_00dedcf4:
                    /* WARNING: Subroutine does not return */
  native_sub_432810();
}



/* EventDelegate$$Execute @ 0xdee45c
 * bool EventDelegate__Execute (EventDelegate_o* __this, const MethodInfo* method); */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* EventDelegate$$Execute
   bool EventDelegate__Execute (EventDelegate_o* __this, const MethodInfo* method); */

undefined8 native_EventDelegate__Execute_dee45c(long param_1)

{
  int iVar1;
  ulong uVar2;
  undefined8 uVar3;
  long lVar4;
  long lVar5;
  uint uVar6;
  long lVar7;
  long *plVar8;
  long *plVar9;
  
  if ((bRam0000000001346eed & 1) == 0) {
    native_sub_43273c(&object___TypeInfo_12d32d8);
    bRam0000000001346eed = 1;
  }
  if (*(char *)(param_1 + 0x39) == '\0') {
    native_EventDelegate__Cache_ded608(param_1);
  }
  if (*(long *)(param_1 + 0x30) != 0) {
    native_EventDelegate_Callback__Invoke_54bd84(*(long *)(param_1 + 0x30),0);
    return 1;
  }
  uVar2 = native_System_Reflection_MethodInfo__op_Inequality_914de0
                    (*(undefined8 *)(param_1 + 0x40),0,0);
  if ((uVar2 & 1) == 0) {
    return 0;
  }
  lVar5 = *(long *)(param_1 + 0x20);
  if ((lVar5 == 0) || (*(int *)(lVar5 + 0x18) == 0)) {
    if (*(long *)(param_1 + 0x40) != 0) {
      native_System_Reflection_MethodBase__Invoke_914ed8
                (*(long *)(param_1 + 0x40),*(undefined8 *)(param_1 + 0x10),0,0);
      return 1;
    }
  }
  else {
    plVar8 = (long *)(param_1 + 0x50);
    if ((*plVar8 == 0) || (*(int *)(*plVar8 + 0x18) != *(int *)(lVar5 + 0x18))) {
      uVar3 = native_sub_432750(_object___TypeInfo_12d32d8);
      *(undefined8 *)(param_1 + 0x50) = uVar3;
      native_sub_4326e0(plVar8,uVar3);
      lVar5 = *(long *)(param_1 + 0x20);
      if (lVar5 == 0) goto LAB_00deeab8;
    }
    iVar1 = *(int *)(lVar5 + 0x18);
    if (iVar1 < 1) {
LAB_00dee5ec:
      if (*(long *)(param_1 + 0x40) == 0) {
                    /* WARNING: Subroutine does not return */
        native_sub_432810();
      }
      native_System_Reflection_MethodBase__Invoke_914ed8
                (*(long *)(param_1 + 0x40),*(undefined8 *)(param_1 + 0x10),
                 *(undefined8 *)(param_1 + 0x50),0);
      if (*plVar8 != 0) {
        iVar1 = *(int *)(*plVar8 + 0x18);
        if (iVar1 < 1) {
          return 1;
        }
        uVar6 = 0;
        lVar5 = 0x20;
        while (lVar4 = *(long *)(param_1 + 0x48), lVar4 != 0) {
          if (*(uint *)(lVar4 + 0x18) <= uVar6) {
LAB_00deeb24:
            uVar3 = native_sub_43283c();
                    /* WARNING: Subroutine does not return */
            native_sub_4327dc(uVar3,0);
          }
          if (*(long *)(lVar4 + lVar5) == 0) break;
          uVar2 = native_System_Reflection_ParameterInfo__get_IsIn_a9b1fc
                            (*(long *)(lVar4 + lVar5),0);
          if ((uVar2 & 1) == 0) {
            lVar4 = *(long *)(param_1 + 0x48);
            if (lVar4 == 0) break;
            if (*(uint *)(lVar4 + 0x18) <= uVar6) goto LAB_00deeb24;
            if (*(long *)(lVar4 + lVar5) == 0) break;
            uVar2 = native_System_Reflection_ParameterInfo__get_IsOut_a9b23c
                              (*(long *)(lVar4 + lVar5),0);
            if ((uVar2 & 1) != 0) goto LAB_00dee670;
          }
          else {
LAB_00dee670:
            lVar4 = *(long *)(param_1 + 0x20);
            if (lVar4 == 0) break;
            if (*(uint *)(lVar4 + 0x18) <= uVar6) goto LAB_00deeb24;
            lVar7 = *plVar8;
            if (lVar7 == 0) break;
            if (*(uint *)(lVar7 + 0x18) <= uVar6) goto LAB_00deeb24;
            if (*(long *)(lVar4 + lVar5) == 0) break;
            *(undefined8 *)(*(long *)(lVar4 + lVar5) + 0x20) = *(undefined8 *)(lVar7 + lVar5);
            native_sub_4326e0();
          }
          lVar4 = *plVar8;
          if (lVar4 == 0) break;
          if (*(uint *)(lVar4 + 0x18) <= uVar6) goto LAB_00deeb24;
          *(undefined8 *)(lVar4 + lVar5) = 0;
          native_sub_4326e0((undefined8 *)(lVar4 + lVar5),0);
          uVar6 = uVar6 + 1;
          lVar5 = lVar5 + 8;
          if (iVar1 <= (int)uVar6) {
            return 1;
          }
        }
      }
    }
    else if (lVar5 != 0) {
      uVar6 = 0;
      do {
        if (*(uint *)(lVar5 + 0x18) <= uVar6) goto LAB_00deeb24;
        lVar5 = *(long *)(lVar5 + (long)(int)uVar6 * 8 + 0x20);
        if (lVar5 == 0) break;
        plVar9 = (long *)*plVar8;
        lVar5 = native_EventDelegate_Parameter__get_value_54c1dc(lVar5,0);
        if (plVar9 == (long *)0x0) break;
        if ((lVar5 != 0) &&
           (lVar4 = native_sub_4327f8(lVar5,*(undefined8 *)(*plVar9 + 0x40)), lVar4 == 0)) {
          uVar3 = native_sub_432830();
                    /* WARNING: Subroutine does not return */
          native_sub_4327dc(uVar3,0);
        }
        if (*(uint *)(plVar9 + 3) <= uVar6) goto LAB_00deeb24;
        plVar9[(long)(int)uVar6 + 4] = lVar5;
        native_sub_4326e0(plVar9 + (long)(int)uVar6 + 4,lVar5);
        uVar6 = uVar6 + 1;
        if (iVar1 <= (int)uVar6) goto LAB_00dee5ec;
        lVar5 = *(long *)(param_1 + 0x20);
      } while (lVar5 != 0);
    }
  }
LAB_00deeab8:
                    /* WARNING: Subroutine does not return */
  native_sub_432810();
}



/* EventDelegate$$Clear @ 0xdee3d0
 * void EventDelegate__Clear (EventDelegate_o* __this, const MethodInfo* method); */

/* EventDelegate$$Clear
   void EventDelegate__Clear (EventDelegate_o* __this, const MethodInfo* method); */

void native_EventDelegate__Clear_dee3d0(long param_1)

{
  ulong *puVar1;
  char cVar2;
  bool bVar3;
  undefined8 *puVar4;
  
  *(undefined8 *)(param_1 + 0x10) = 0;
  native_sub_4326e0((undefined8 *)(param_1 + 0x10),0);
  *(undefined8 *)(param_1 + 0x18) = 0;
  native_sub_4326e0((undefined8 *)(param_1 + 0x18),0);
  *(undefined1 *)(param_1 + 0x38) = 0;
  *(undefined8 *)(param_1 + 0x30) = 0;
  native_sub_4326e0((undefined8 *)(param_1 + 0x30),0);
  *(undefined8 *)(param_1 + 0x20) = 0;
  native_sub_4326e0((undefined8 *)(param_1 + 0x20),0);
  *(undefined1 *)(param_1 + 0x39) = 0;
  *(undefined8 *)(param_1 + 0x40) = 0;
  native_sub_4326e0((undefined8 *)(param_1 + 0x40),0);
  *(undefined8 *)(param_1 + 0x48) = 0;
  native_sub_4326e0((undefined8 *)(param_1 + 0x48),0);
  puVar4 = (undefined8 *)(param_1 + 0x50);
  *puVar4 = 0;
  if (iRam0000000001345318 != 0) {
    puVar1 = (ulong *)(((ulong)puVar4 >> 0x12 & 0x7fff) * 8 + 0x138ecd8);
    do {
      cVar2 = '\x01';
      bVar3 = (bool)ExclusiveMonitorPass(puVar1,0x10);
      if (bVar3) {
        *puVar1 = *puVar1 | 1L << ((ulong)puVar4 >> 0xc & 0x3f);
        cVar2 = ExclusiveMonitorsStatus();
      }
    } while (cVar2 != '\0');
  }
  return;
}



/* EventDelegate$$ToString @ 0xdeeb64
 * System_String_o* EventDelegate__ToString (EventDelegate_o* __this, const MethodInfo* method); */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* EventDelegate$$ToString
   System_String_o* EventDelegate__ToString (EventDelegate_o* __this, const MethodInfo* method); */

long native_EventDelegate__ToString_deeb64(long param_1)

{
  bool bVar1;
  bool bVar2;
  int iVar3;
  long lVar4;
  ulong uVar5;
  long *plVar6;
  long lVar7;
  long lVar8;
  undefined8 uVar9;
  long lVar10;
  
  if ((bRam0000000001346eee & 1) == 0) {
    native_sub_43273c(&UnityEngine_Object_TypeInfo_12d54e0);
    native_sub_43273c(&StringLiteral__delegate__12f3358);
    native_sub_43273c(&StringLiteral___12eb830);
    native_sub_43273c(&StringLiteral___delegate__12eb870);
    bRam0000000001346eee = 1;
  }
  uVar9 = *(undefined8 *)(param_1 + 0x10);
  if (((*(byte *)(_UnityEngine_Object_TypeInfo_12d54e0 + 0x133) >> 2 & 1) != 0) &&
     (*(int *)(_UnityEngine_Object_TypeInfo_12d54e0 + 0xe0) == 0)) {
    native_sub_4327ec();
  }
  uVar5 = native_UnityEngine_Object__op_Inequality_8d76fc(uVar9,0,0);
  if ((uVar5 & 1) == 0) {
    lVar7 = 0;
    if (*(char *)(param_1 + 0x38) != '\0') {
      lVar7 = _StringLiteral__delegate__12f3358;
    }
    return lVar7;
  }
  if (((*(long *)(param_1 + 0x10) == 0) ||
      (plVar6 = (long *)native_System_Object__GetType_adb48c(*(long *)(param_1 + 0x10),0),
      plVar6 == (long *)0x0)) ||
     (lVar7 = (**(code **)(*plVar6 + 0x168))(plVar6,*(undefined8 *)(*plVar6 + 0x170)), lVar7 == 0))
  {
                    /* WARNING: Subroutine does not return */
    native_sub_432810();
  }
  iVar3 = native_System_String__LastIndexOf_b0c42c(lVar7,0x2e,0);
  if (0 < iVar3) {
    lVar7 = native_System_String__Substring_b0a110(lVar7,iVar3 + 1,0);
  }
  uVar5 = native_System_String__IsNullOrEmpty_b09430(*(undefined8 *)(param_1 + 0x18),0);
  lVar8 = _StringLiteral___delegate__12eb870;
  lVar4 = _StringLiteral___12eb830;
  if ((uVar5 & 1) != 0) {
    if ((bRam000000000134213f & 1) == 0) {
      native_sub_43273c(&string_TypeInfo_12d5f28,_StringLiteral___delegate__12eb870,0);
      bRam000000000134213f = 1;
    }
    if (lVar7 == 0) {
      bVar1 = true;
    }
    else {
      bVar1 = *(int *)(lVar7 + 0x10) == 0;
    }
    if (lVar8 == 0) {
      bVar2 = true;
    }
    else {
      bVar2 = *(int *)(lVar8 + 0x10) == 0;
    }
    if (bVar1) {
      lVar7 = lVar8;
      if (bVar2) {
        lVar7 = **(long **)(_string_TypeInfo_12d5f28 + 0xb8);
      }
    }
    else if (!bVar2) {
      if ((lVar7 == 0) || (lVar8 == 0)) {
                    /* WARNING: Subroutine does not return */
        native_sub_432810();
      }
      iVar3 = *(int *)(lVar7 + 0x10);
      lVar4 = native_sub_3bca18(*(int *)(lVar8 + 0x10) + iVar3);
      native_System_String__FillStringChecked_b0a62c(lVar4,0,lVar7);
      native_System_String__FillStringChecked_b0a62c(lVar4,iVar3,lVar8);
      lVar7 = lVar4;
    }
    return lVar7;
  }
  lVar8 = *(long *)(param_1 + 0x18);
  if ((bRam0000000001342140 & 1) == 0) {
    native_sub_43273c(&string_TypeInfo_12d5f28,_StringLiteral___12eb830,lVar8,0);
    bRam0000000001342140 = 1;
  }
  if ((lVar7 != 0) ||
     (lVar10 = **(long **)(_string_TypeInfo_12d5f28 + 0xb8), lVar7 = lVar10,
     lVar4 != 0 || lVar8 != 0)) {
    if (lVar4 == 0) {
      lVar4 = **(long **)(_string_TypeInfo_12d5f28 + 0xb8);
    }
    if (lVar8 == 0) {
      lVar8 = **(long **)(_string_TypeInfo_12d5f28 + 0xb8);
    }
    if (((lVar7 == 0) || (lVar4 == 0)) || (lVar8 == 0)) {
                    /* WARNING: Subroutine does not return */
      native_sub_432810();
    }
    lVar10 = native_sub_3bca18(*(int *)(lVar4 + 0x10) + *(int *)(lVar7 + 0x10) +
                               *(int *)(lVar8 + 0x10));
    native_System_String__FillStringChecked_b0a62c(lVar10,0,lVar7);
    native_System_String__FillStringChecked_b0a62c(lVar10,*(undefined4 *)(lVar7 + 0x10),lVar4);
    native_System_String__FillStringChecked_b0a62c
              (lVar10,*(int *)(lVar4 + 0x10) + *(int *)(lVar7 + 0x10),lVar8);
  }
  return lVar10;
}



/* EventDelegate$$Execute @ 0xdeecbc
 * void EventDelegate__Execute (System_Collections_Generic_List_EventDelegate__o* list, const MethodInfo* method); */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* EventDelegate$$Execute
   void EventDelegate__Execute (System_Collections_Generic_List_EventDelegate__o* list, const
   MethodInfo* method); */

void native_EventDelegate__Execute_deecbc(long param_1)

{
  int iVar1;
  ulong uVar2;
  ulong uVar3;
  long lVar4;
  
  if ((bRam0000000001346eef & 1) == 0) {
    native_sub_43273c(&Method_System_Collections_Generic_List_EventDelegate__RemoveAt___12dc758);
    native_sub_43273c(&Method_System_Collections_Generic_List_EventDelegate__get_Count___12dc760);
    native_sub_43273c(&Method_System_Collections_Generic_List_EventDelegate__get_Item___12dc768);
    bRam0000000001346eef = 1;
  }
  if ((param_1 != 0) &&
     (uVar2 = (ulong)*(uint *)(param_1 + 0x18), 0 < (int)*(uint *)(param_1 + 0x18))) {
    uVar3 = 0;
    do {
      if ((uVar2 & 0xffffffff) <= uVar3) {
        native_System_ThrowHelper__ThrowArgumentOutOfRangeException_9fe0f4(0);
      }
      lVar4 = *(long *)(*(long *)(param_1 + 0x10) + uVar3 * 8 + 0x20);
      if (lVar4 == 0) {
LAB_00deed4c:
        iVar1 = *(int *)(param_1 + 0x18);
        uVar3 = uVar3 + 1;
      }
      else {
        native_EventDelegate__Execute_dee45c(lVar4);
        if ((long)(int)*(uint *)(param_1 + 0x18) <= (long)uVar3) {
          return;
        }
        if (*(uint *)(param_1 + 0x18) <= uVar3) {
          native_System_ThrowHelper__ThrowArgumentOutOfRangeException_9fe0f4(0);
        }
        if (*(long *)(*(long *)(param_1 + 0x10) + uVar3 * 8 + 0x20) == lVar4) {
          if (*(char *)(lVar4 + 0x28) == '\0') goto LAB_00deed4c;
          native_System_Collections_Generic_List_int_____RemoveAt_d42280
                    (param_1,uVar3 & 0xffffffff,
                     _Method_System_Collections_Generic_List_EventDelegate__RemoveAt___12dc758);
        }
        iVar1 = *(int *)(param_1 + 0x18);
      }
      uVar2 = (ulong)iVar1;
    } while ((long)uVar3 < (long)uVar2);
  }
  return;
}



/* EventDelegate$$IsValid @ 0xdeef08
 * bool EventDelegate__IsValid (System_Collections_Generic_List_EventDelegate__o* list, const MethodInfo* method); */

/* EventDelegate$$IsValid
   bool EventDelegate__IsValid (System_Collections_Generic_List_EventDelegate__o* list, const
   MethodInfo* method); */

undefined8 native_EventDelegate__IsValid_deef08(long param_1)

{
  uint uVar1;
  ulong uVar2;
  ulong uVar3;
  long lVar4;
  
  if ((bRam0000000001346ef0 & 1) == 0) {
    native_sub_43273c(&Method_System_Collections_Generic_List_EventDelegate__get_Count___12dc760);
    native_sub_43273c(&Method_System_Collections_Generic_List_EventDelegate__get_Item___12dc768);
    bRam0000000001346ef0 = 1;
  }
  if ((param_1 != 0) && (uVar1 = *(uint *)(param_1 + 0x18), 0 < (int)uVar1)) {
    uVar3 = 0;
    lVar4 = (long)(int)uVar1;
    while( true ) {
      if (uVar1 <= uVar3) {
        native_System_ThrowHelper__ThrowArgumentOutOfRangeException_9fe0f4(0);
      }
      if ((*(long *)(*(long *)(param_1 + 0x10) + uVar3 * 8 + 0x20) != 0) &&
         (uVar2 = native_EventDelegate__get_isValid_dedd50(), (uVar2 & 1) != 0)) {
        return 1;
      }
      uVar3 = uVar3 + 1;
      if (lVar4 <= (long)uVar3) break;
      uVar1 = *(uint *)(param_1 + 0x18);
    }
  }
  return 0;
}



/* EventDelegate$$Set @ 0xdeefb8
 * EventDelegate_o* EventDelegate__Set (System_Collections_Generic_List_EventDelegate__o* list, EventDelegate_Callback_o* callback, const MethodInfo* method); */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* EventDelegate$$Set
   EventDelegate_o* EventDelegate__Set (System_Collections_Generic_List_EventDelegate__o* list,
   EventDelegate_Callback_o* callback, const MethodInfo* method); */

undefined8 native_EventDelegate__Set_deefb8(long param_1,undefined8 param_2)

{
  undefined8 uVar1;
  
  if ((bRam0000000001346ef1 & 1) == 0) {
    native_sub_43273c(&EventDelegate_TypeInfo_12d4590);
    native_sub_43273c(&Method_System_Collections_Generic_List_EventDelegate__Add___12dc740);
    native_sub_43273c(&Method_System_Collections_Generic_List_EventDelegate__Clear___12dc748);
    bRam0000000001346ef1 = 1;
  }
  if (param_1 == 0) {
    uVar1 = 0;
  }
  else {
    uVar1 = native_sub_432808(_EventDelegate_TypeInfo_12d4590);
    native_System_Object___ctor_ad2798(uVar1,0);
    native_EventDelegate__Set_dedf08(uVar1,param_2);
    native_System_Collections_Generic_List_Action___Clear_d40e80
              (param_1,_Method_System_Collections_Generic_List_EventDelegate__Clear___12dc748);
    native_System_Collections_Generic_List_int_____Add_d40c00
              (param_1,uVar1,_Method_System_Collections_Generic_List_EventDelegate__Add___12dc740);
  }
  return uVar1;
}



/* EventDelegate$$Set @ 0xdef07c
 * void EventDelegate__Set (System_Collections_Generic_List_EventDelegate__o* list, EventDelegate_o* del, const MethodInfo* method); */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* EventDelegate$$Set
   void EventDelegate__Set (System_Collections_Generic_List_EventDelegate__o* list, EventDelegate_o*
   del, const MethodInfo* method); */

void native_EventDelegate__Set_def07c(long param_1,undefined8 param_2)

{
  undefined8 *puVar1;
  undefined8 uVar2;
  uint uVar3;
  long lVar4;
  
  if ((bRam0000000001346ef2 & 1) == 0) {
    native_sub_43273c(&Method_System_Collections_Generic_List_EventDelegate__Add___12dc740);
    native_sub_43273c(&Method_System_Collections_Generic_List_EventDelegate__Clear___12dc748);
    bRam0000000001346ef2 = 1;
  }
  if (param_1 == 0) {
    return;
  }
  native_System_Collections_Generic_List_Action___Clear_d40e80
            (param_1,_Method_System_Collections_Generic_List_EventDelegate__Clear___12dc748);
  lVar4 = *(long *)(param_1 + 0x10);
  if (lVar4 != 0) {
    uVar3 = *(uint *)(param_1 + 0x18);
    if (uVar3 == *(uint *)(lVar4 + 0x18)) {
      (*(code *)**(undefined8 **)
                  (*(long *)(*(long *)(
                                      _Method_System_Collections_Generic_List_EventDelegate__Add___12dc740
                                      + 0x18) + 0xc0) + 0x60))(param_1,uVar3 + 1);
      uVar3 = *(uint *)(param_1 + 0x18);
      lVar4 = *(long *)(param_1 + 0x10);
      *(uint *)(param_1 + 0x18) = uVar3 + 1;
      if (lVar4 == 0) goto code_r0x00d40c5c;
    }
    else {
      *(uint *)(param_1 + 0x18) = uVar3 + 1;
    }
    if (uVar3 < *(uint *)(lVar4 + 0x18)) {
      puVar1 = (undefined8 *)(lVar4 + (long)(int)uVar3 * 8 + 0x20);
      *puVar1 = param_2;
      native_sub_4326e0(puVar1,param_2);
      *(int *)(param_1 + 0x1c) = *(int *)(param_1 + 0x1c) + 1;
      return;
    }
    uVar2 = native_sub_43283c();
                    /* WARNING: Subroutine does not return */
    native_sub_4327dc(uVar2,0);
  }
code_r0x00d40c5c:
                    /* WARNING: Subroutine does not return */
  native_sub_432810();
}



/* EventDelegate$$Add @ 0xdef10c
 * EventDelegate_o* EventDelegate__Add (System_Collections_Generic_List_EventDelegate__o* list, EventDelegate_Callback_o* callback, const MethodInfo* method); */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* EventDelegate$$Add
   EventDelegate_o* EventDelegate__Add (System_Collections_Generic_List_EventDelegate__o* list,
   EventDelegate_Callback_o* callback, const MethodInfo* method); */

long * native_EventDelegate__Add_def10c(long param_1,undefined8 param_2)

{
  uint uVar1;
  ulong uVar2;
  long *plVar3;
  ulong uVar4;
  long lVar5;
  
  if ((bRam0000000001346ef3 & 1) == 0) {
    native_sub_43273c(&EventDelegate_TypeInfo_12d4590);
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
  if (param_1 == 0) {
    if (((*(byte *)(_UnityEngine_Debug_TypeInfo_12d4338 + 0x133) >> 2 & 1) != 0) &&
       (*(int *)(_UnityEngine_Debug_TypeInfo_12d4338 + 0xe0) == 0)) {
      native_sub_4327ec();
    }
    native_UnityEngine_Debug__LogWarning_8dca9c
              (_StringLiteral_Attempting_to_add_a_callback_to_a_list_that_s_null_12ec670,0);
    plVar3 = (long *)0x0;
  }
  else {
    uVar1 = *(uint *)(param_1 + 0x18);
    if (0 < (int)uVar1) {
      uVar4 = 0;
      lVar5 = (long)(int)uVar1;
      while( true ) {
        if (uVar1 <= uVar4) {
          native_System_ThrowHelper__ThrowArgumentOutOfRangeException_9fe0f4(0);
        }
        plVar3 = *(long **)(*(long *)(param_1 + 0x10) + uVar4 * 8 + 0x20);
        if ((plVar3 != (long *)0x0) &&
           (uVar2 = (**(code **)(*plVar3 + 0x138))(plVar3,param_2,*(undefined8 *)(*plVar3 + 0x140)),
           (uVar2 & 1) != 0)) {
          return plVar3;
        }
        uVar4 = uVar4 + 1;
        if (lVar5 <= (long)uVar4) break;
        uVar1 = *(uint *)(param_1 + 0x18);
      }
    }
    plVar3 = (long *)native_sub_432808(_EventDelegate_TypeInfo_12d4590);
    native_System_Object___ctor_ad2798(plVar3,0);
    native_EventDelegate__Set_dedf08(plVar3,param_2);
    if (plVar3 == (long *)0x0) {
                    /* WARNING: Subroutine does not return */
      native_sub_432810();
    }
    *(undefined1 *)(plVar3 + 5) = 0;
    native_System_Collections_Generic_List_int_____Add_d40c00
              (param_1,plVar3,_Method_System_Collections_Generic_List_EventDelegate__Add___12dc740);
  }
  return plVar3;
}



/* EventDelegate$$Add @ 0xdef180
 * EventDelegate_o* EventDelegate__Add (System_Collections_Generic_List_EventDelegate__o* list, EventDelegate_Callback_o* callback, bool oneShot, const MethodInfo* method); */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* EventDelegate$$Add
   EventDelegate_o* EventDelegate__Add (System_Collections_Generic_List_EventDelegate__o* list,
   EventDelegate_Callback_o* callback, bool oneShot, const MethodInfo* method); */

long * native_EventDelegate__Add_def180(long param_1,undefined8 param_2,byte param_3)

{
  uint uVar1;
  ulong uVar2;
  long *plVar3;
  ulong uVar4;
  long lVar5;
  
  if ((bRam0000000001346ef4 & 1) == 0) {
    native_sub_43273c(&UnityEngine_Debug_TypeInfo_12d4338);
    native_sub_43273c(&EventDelegate_TypeInfo_12d4590);
    native_sub_43273c(&Method_System_Collections_Generic_List_EventDelegate__Add___12dc740);
    native_sub_43273c(&Method_System_Collections_Generic_List_EventDelegate__get_Count___12dc760);
    native_sub_43273c(&Method_System_Collections_Generic_List_EventDelegate__get_Item___12dc768);
    native_sub_43273c(&StringLiteral_Attempting_to_add_a_callback_to_a_list_that_s_null_12ec670);
    bRam0000000001346ef4 = 1;
  }
  if (param_1 == 0) {
    if (((*(byte *)(_UnityEngine_Debug_TypeInfo_12d4338 + 0x133) >> 2 & 1) != 0) &&
       (*(int *)(_UnityEngine_Debug_TypeInfo_12d4338 + 0xe0) == 0)) {
      native_sub_4327ec();
    }
    native_UnityEngine_Debug__LogWarning_8dca9c
              (_StringLiteral_Attempting_to_add_a_callback_to_a_list_that_s_null_12ec670,0);
    plVar3 = (long *)0x0;
  }
  else {
    uVar1 = *(uint *)(param_1 + 0x18);
    if (0 < (int)uVar1) {
      uVar4 = 0;
      lVar5 = (long)(int)uVar1;
      while( true ) {
        if (uVar1 <= uVar4) {
          native_System_ThrowHelper__ThrowArgumentOutOfRangeException_9fe0f4(0);
        }
        plVar3 = *(long **)(*(long *)(param_1 + 0x10) + uVar4 * 8 + 0x20);
        if ((plVar3 != (long *)0x0) &&
           (uVar2 = (**(code **)(*plVar3 + 0x138))(plVar3,param_2,*(undefined8 *)(*plVar3 + 0x140)),
           (uVar2 & 1) != 0)) {
          return plVar3;
        }
        uVar4 = uVar4 + 1;
        if (lVar5 <= (long)uVar4) break;
        uVar1 = *(uint *)(param_1 + 0x18);
      }
    }
    plVar3 = (long *)native_sub_432808(_EventDelegate_TypeInfo_12d4590);
    native_System_Object___ctor_ad2798(plVar3,0);
    native_EventDelegate__Set_dedf08(plVar3,param_2);
    if (plVar3 == (long *)0x0) {
                    /* WARNING: Subroutine does not return */
      native_sub_432810();
    }
    *(byte *)(plVar3 + 5) = param_3 & 1;
    native_System_Collections_Generic_List_int_____Add_d40c00
              (param_1,plVar3,_Method_System_Collections_Generic_List_EventDelegate__Add___12dc740);
  }
  return plVar3;
}



/* EventDelegate$$Add @ 0xdef304
 * void EventDelegate__Add (System_Collections_Generic_List_EventDelegate__o* list, EventDelegate_o* ev, const MethodInfo* method); */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* EventDelegate$$Add
   void EventDelegate__Add (System_Collections_Generic_List_EventDelegate__o* list, EventDelegate_o*
   ev, const MethodInfo* method); */

long * native_EventDelegate__Add_def304(long param_1,long param_2)

{
  char cVar1;
  bool bVar2;
  ulong uVar3;
  ulong uVar4;
  long lVar5;
  undefined8 extraout_x1;
  undefined8 extraout_x1_00;
  undefined8 uVar6;
  uint uVar7;
  long lVar8;
  int *piVar9;
  undefined8 *puVar10;
  long *plVar11;
  undefined8 uVar12;
  long lVar13;
  
  if ((bRam0000000001346ef5 & 1) == 0) {
    native_sub_43273c(&EventDelegate_TypeInfo_12d4590);
    bRam0000000001346ef5 = 1;
  }
  if (param_2 == 0) {
                    /* WARNING: Subroutine does not return */
    native_sub_432810();
  }
  cVar1 = *(char *)(param_2 + 0x28);
  if (((*(byte *)(_EventDelegate_TypeInfo_12d4590 + 0x133) >> 2 & 1) != 0) &&
     (*(int *)(_EventDelegate_TypeInfo_12d4590 + 0xe0) == 0)) {
    native_sub_4327ec();
  }
  bVar2 = cVar1 != '\0';
  if ((bRam0000000001346ef6 & 1) == 0) {
    native_sub_43273c(&UnityEngine_Debug_TypeInfo_12d4338);
    native_sub_43273c(&EventDelegate_TypeInfo_12d4590);
    native_sub_43273c(&Method_System_Collections_Generic_List_EventDelegate__Add___12dc740);
    native_sub_43273c(&Method_System_Collections_Generic_List_EventDelegate__get_Count___12dc760);
    native_sub_43273c(&Method_System_Collections_Generic_List_EventDelegate__get_Item___12dc768);
    native_sub_43273c(&UnityEngine_Object_TypeInfo_12d54e0);
    native_sub_43273c(&EventDelegate_Parameter___TypeInfo_12d3538);
    native_sub_43273c(&StringLiteral_Attempting_to_add_a_callback_to_a_list_that_s_null_12ec670);
    bRam0000000001346ef6 = 1;
  }
  if (param_2 == 0) goto LAB_00def5fc;
  if (*(char *)(param_2 + 0x38) == '\0') {
    uVar12 = *(undefined8 *)(param_2 + 0x10);
    if (((*(byte *)(_UnityEngine_Object_TypeInfo_12d54e0 + 0x133) >> 2 & 1) != 0) &&
       (*(int *)(_UnityEngine_Object_TypeInfo_12d54e0 + 0xe0) == 0)) {
      native_sub_4327ec();
    }
    uVar4 = native_UnityEngine_Object__op_Equality_8e9a3c(uVar12,0,0);
    if (((uVar4 & 1) == 0) &&
       (uVar4 = native_System_String__IsNullOrEmpty_b09430(*(undefined8 *)(param_2 + 0x18),0),
       (uVar4 & 1) == 0)) {
      if (param_1 == 0) {
        if (((*(byte *)(_UnityEngine_Debug_TypeInfo_12d4338 + 0x133) >> 2 & 1) != 0) &&
           (*(int *)(_UnityEngine_Debug_TypeInfo_12d4338 + 0xe0) == 0)) {
          native_sub_4327ec();
        }
        uVar12 = _StringLiteral_Attempting_to_add_a_callback_to_a_list_that_s_null_12ec670;
        uVar6 = 0;
        if ((bRam0000000001340b57 & 1) == 0) {
          native_sub_43273c(&UnityEngine_Debug_TypeInfo_12d4338,0);
          native_sub_43273c(&UnityEngine_ILogger_TypeInfo_12d4c10);
          bRam0000000001340b57 = 1;
          uVar6 = extraout_x1;
        }
        if (((*(byte *)(_UnityEngine_Debug_TypeInfo_12d4338 + 0x133) >> 2 & 1) != 0) &&
           (*(int *)(_UnityEngine_Debug_TypeInfo_12d4338 + 0xe0) == 0)) {
          native_sub_4327ec();
          uVar6 = extraout_x1_00;
        }
        if (cRam000000000134112a == '\0') {
          native_sub_43273c(&UnityEngine_Debug_TypeInfo_12d4338,uVar6);
          cRam000000000134112a = '\x01';
        }
        if (((*(byte *)(_UnityEngine_Debug_TypeInfo_12d4338 + 0x133) >> 2 & 1) != 0) &&
           (*(int *)(_UnityEngine_Debug_TypeInfo_12d4338 + 0xe0) == 0)) {
          native_sub_4327ec();
        }
        plVar11 = *(long **)(*(long *)(_UnityEngine_Debug_TypeInfo_12d4338 + 0xb8) + 8);
        if (plVar11 == (long *)0x0) {
                    /* WARNING: Subroutine does not return */
          native_sub_432810();
        }
        lVar13 = *plVar11;
        if ((ulong)*(ushort *)(lVar13 + 0x12a) != 0) {
          uVar4 = 0;
          piVar9 = (int *)(*(long *)(lVar13 + 0xb0) + 8);
          do {
            if (*(long *)(piVar9 + -2) == _UnityEngine_ILogger_TypeInfo_12d4c10) {
              puVar10 = (undefined8 *)(lVar13 + (long)(*piVar9 + 2) * 0x10 + 0x138);
              goto code_r0x008dcba4;
            }
            uVar4 = uVar4 + 1;
            piVar9 = piVar9 + 4;
          } while (uVar4 < *(ushort *)(lVar13 + 0x12a));
        }
        puVar10 = (undefined8 *)native_sub_3c9b34(plVar11,_UnityEngine_ILogger_TypeInfo_12d4c10,2);
code_r0x008dcba4:
                    /* WARNING: Could not recover jumptable at 0x008dcbc0. Too many branches */
                    /* WARNING: Treating indirect jump as call */
        plVar11 = (long *)(*(code *)*puVar10)(plVar11,2,uVar12,puVar10[1]);
        return plVar11;
      }
      uVar7 = *(uint *)(param_1 + 0x18);
      if (0 < (int)uVar7) {
        uVar4 = 0;
        lVar13 = (long)(int)uVar7;
        while( true ) {
          if (uVar7 <= uVar4) {
            native_System_ThrowHelper__ThrowArgumentOutOfRangeException_9fe0f4(0);
          }
          plVar11 = *(long **)(*(long *)(param_1 + 0x10) + uVar4 * 8 + 0x20);
          if ((plVar11 != (long *)0x0) &&
             (plVar11 = (long *)(**(code **)(*plVar11 + 0x138))
                                          (plVar11,param_2,*(undefined8 *)(*plVar11 + 0x140)),
             ((ulong)plVar11 & 1) != 0)) {
            return plVar11;
          }
          uVar4 = uVar4 + 1;
          if (lVar13 <= (long)uVar4) break;
          uVar7 = *(uint *)(param_1 + 0x18);
        }
      }
      uVar12 = *(undefined8 *)(param_2 + 0x10);
      uVar6 = *(undefined8 *)(param_2 + 0x18);
      lVar13 = native_sub_432808(_EventDelegate_TypeInfo_12d4590);
      native_System_Object___ctor_ad2798(lVar13,0);
      native_EventDelegate__Set_dee0d4(lVar13,uVar12,uVar6);
      if (lVar13 != 0) {
        *(bool *)(lVar13 + 0x28) = bVar2;
        if ((*(long *)(param_2 + 0x20) == 0) || (*(long *)(*(long *)(param_2 + 0x20) + 0x18) == 0))
        {
code_r0x00d40c00:
          lVar8 = *(long *)(param_1 + 0x10);
          if (lVar8 == 0) {
code_r0x00d40c5c:
                    /* WARNING: Subroutine does not return */
            native_sub_432810();
          }
          uVar7 = *(uint *)(param_1 + 0x18);
          if (uVar7 == *(uint *)(lVar8 + 0x18)) {
            (*(code *)**(undefined8 **)
                        (*(long *)(*(long *)(
                                            _Method_System_Collections_Generic_List_EventDelegate__Add___12dc740
                                            + 0x18) + 0xc0) + 0x60))(param_1,uVar7 + 1);
            uVar7 = *(uint *)(param_1 + 0x18);
            lVar8 = *(long *)(param_1 + 0x10);
            *(uint *)(param_1 + 0x18) = uVar7 + 1;
            if (lVar8 == 0) goto code_r0x00d40c5c;
          }
          else {
            *(uint *)(param_1 + 0x18) = uVar7 + 1;
          }
          if (*(uint *)(lVar8 + 0x18) <= uVar7) {
            uVar12 = native_sub_43283c();
                    /* WARNING: Subroutine does not return */
            native_sub_4327dc(uVar12,0);
          }
          plVar11 = (long *)(lVar8 + (long)(int)uVar7 * 8 + 0x20);
          *plVar11 = lVar13;
          plVar11 = (long *)native_sub_4326e0(plVar11,lVar13);
          *(int *)(param_1 + 0x1c) = *(int *)(param_1 + 0x1c) + 1;
          return plVar11;
        }
        uVar12 = native_sub_432750(_EventDelegate_Parameter___TypeInfo_12d3538);
        puVar10 = (undefined8 *)(lVar13 + 0x20);
        *puVar10 = uVar12;
        native_sub_4326e0(puVar10,uVar12);
        lVar8 = *(long *)(param_2 + 0x20);
        if (lVar8 != 0) {
          uVar4 = 0;
          do {
            if ((long)(int)*(uint *)(lVar8 + 0x18) <= (long)uVar4) goto code_r0x00d40c00;
            if (*(uint *)(lVar8 + 0x18) <= uVar4) {
LAB_00def68c:
              uVar12 = native_sub_43283c();
                    /* WARNING: Subroutine does not return */
              native_sub_4327dc(uVar12,0);
            }
            plVar11 = (long *)*puVar10;
            if (plVar11 == (long *)0x0) break;
            lVar8 = *(long *)(lVar8 + uVar4 * 8 + 0x20);
            if ((lVar8 != 0) &&
               (lVar5 = native_sub_4327f8(lVar8,*(undefined8 *)(*plVar11 + 0x40)), lVar5 == 0)) {
              uVar12 = native_sub_432830();
                    /* WARNING: Subroutine does not return */
              native_sub_4327dc(uVar12,0);
            }
            if (*(uint *)(plVar11 + 3) <= uVar4) goto LAB_00def68c;
            plVar11[uVar4 + 4] = lVar8;
            native_sub_4326e0(plVar11 + uVar4 + 4,lVar8);
            lVar8 = *(long *)(param_2 + 0x20);
            uVar4 = uVar4 + 1;
          } while (lVar8 != 0);
        }
      }
LAB_00def5fc:
                    /* WARNING: Subroutine does not return */
      native_sub_432810();
    }
  }
  uVar12 = *(undefined8 *)(param_2 + 0x30);
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
  if (param_1 == 0) {
    if (((*(byte *)(_UnityEngine_Debug_TypeInfo_12d4338 + 0x133) >> 2 & 1) != 0) &&
       (*(int *)(_UnityEngine_Debug_TypeInfo_12d4338 + 0xe0) == 0)) {
      native_sub_4327ec();
    }
    native_UnityEngine_Debug__LogWarning_8dca9c
              (_StringLiteral_Attempting_to_add_a_callback_to_a_list_that_s_null_12ec670,0);
    plVar11 = (long *)0x0;
  }
  else {
    uVar7 = *(uint *)(param_1 + 0x18);
    if (0 < (int)uVar7) {
      uVar4 = 0;
      lVar13 = (long)(int)uVar7;
      while( true ) {
        if (uVar7 <= uVar4) {
          native_System_ThrowHelper__ThrowArgumentOutOfRangeException_9fe0f4(0);
        }
        plVar11 = *(long **)(*(long *)(param_1 + 0x10) + uVar4 * 8 + 0x20);
        if ((plVar11 != (long *)0x0) &&
           (uVar3 = (**(code **)(*plVar11 + 0x138))
                              (plVar11,uVar12,*(undefined8 *)(*plVar11 + 0x140)), (uVar3 & 1) != 0))
        {
          return plVar11;
        }
        uVar4 = uVar4 + 1;
        if (lVar13 <= (long)uVar4) break;
        uVar7 = *(uint *)(param_1 + 0x18);
      }
    }
    plVar11 = (long *)native_sub_432808(_EventDelegate_TypeInfo_12d4590);
    native_System_Object___ctor_ad2798(plVar11,0);
    native_EventDelegate__Set_dedf08(plVar11,uVar12);
    if (plVar11 == (long *)0x0) {
                    /* WARNING: Subroutine does not return */
      native_sub_432810();
    }
    *(bool *)(plVar11 + 5) = bVar2;
    native_System_Collections_Generic_List_int_____Add_d40c00
              (param_1,plVar11,_Method_System_Collections_Generic_List_EventDelegate__Add___12dc740)
    ;
  }
  return plVar11;
}



/* EventDelegate$$Add @ 0xdef388
 * void EventDelegate__Add (System_Collections_Generic_List_EventDelegate__o* list, EventDelegate_o* ev, bool oneShot, const MethodInfo* method); */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* EventDelegate$$Add
   void EventDelegate__Add (System_Collections_Generic_List_EventDelegate__o* list, EventDelegate_o*
   ev, bool oneShot, const MethodInfo* method); */

long * native_EventDelegate__Add_def388(long param_1,long param_2,byte param_3)

{
  ulong uVar1;
  ulong uVar2;
  long lVar3;
  undefined8 extraout_x1;
  undefined8 extraout_x1_00;
  undefined8 uVar4;
  uint uVar5;
  long lVar6;
  int *piVar7;
  undefined8 *puVar8;
  long *plVar9;
  undefined8 uVar10;
  long lVar11;
  
  if ((bRam0000000001346ef6 & 1) == 0) {
    native_sub_43273c(&UnityEngine_Debug_TypeInfo_12d4338);
    native_sub_43273c(&EventDelegate_TypeInfo_12d4590);
    native_sub_43273c(&Method_System_Collections_Generic_List_EventDelegate__Add___12dc740);
    native_sub_43273c(&Method_System_Collections_Generic_List_EventDelegate__get_Count___12dc760);
    native_sub_43273c(&Method_System_Collections_Generic_List_EventDelegate__get_Item___12dc768);
    native_sub_43273c(&UnityEngine_Object_TypeInfo_12d54e0);
    native_sub_43273c(&EventDelegate_Parameter___TypeInfo_12d3538);
    native_sub_43273c(&StringLiteral_Attempting_to_add_a_callback_to_a_list_that_s_null_12ec670);
    bRam0000000001346ef6 = 1;
  }
  if (param_2 == 0) goto LAB_00def5fc;
  if (*(char *)(param_2 + 0x38) == '\0') {
    uVar10 = *(undefined8 *)(param_2 + 0x10);
    if (((*(byte *)(_UnityEngine_Object_TypeInfo_12d54e0 + 0x133) >> 2 & 1) != 0) &&
       (*(int *)(_UnityEngine_Object_TypeInfo_12d54e0 + 0xe0) == 0)) {
      native_sub_4327ec();
    }
    uVar2 = native_UnityEngine_Object__op_Equality_8e9a3c(uVar10,0,0);
    if (((uVar2 & 1) == 0) &&
       (uVar2 = native_System_String__IsNullOrEmpty_b09430(*(undefined8 *)(param_2 + 0x18),0),
       (uVar2 & 1) == 0)) {
      if (param_1 == 0) {
        if (((*(byte *)(_UnityEngine_Debug_TypeInfo_12d4338 + 0x133) >> 2 & 1) != 0) &&
           (*(int *)(_UnityEngine_Debug_TypeInfo_12d4338 + 0xe0) == 0)) {
          native_sub_4327ec();
        }
        uVar10 = _StringLiteral_Attempting_to_add_a_callback_to_a_list_that_s_null_12ec670;
        uVar4 = 0;
        if ((bRam0000000001340b57 & 1) == 0) {
          native_sub_43273c(&UnityEngine_Debug_TypeInfo_12d4338,0);
          native_sub_43273c(&UnityEngine_ILogger_TypeInfo_12d4c10);
          bRam0000000001340b57 = 1;
          uVar4 = extraout_x1;
        }
        if (((*(byte *)(_UnityEngine_Debug_TypeInfo_12d4338 + 0x133) >> 2 & 1) != 0) &&
           (*(int *)(_UnityEngine_Debug_TypeInfo_12d4338 + 0xe0) == 0)) {
          native_sub_4327ec();
          uVar4 = extraout_x1_00;
        }
        if (cRam000000000134112a == '\0') {
          native_sub_43273c(&UnityEngine_Debug_TypeInfo_12d4338,uVar4);
          cRam000000000134112a = '\x01';
        }
        if (((*(byte *)(_UnityEngine_Debug_TypeInfo_12d4338 + 0x133) >> 2 & 1) != 0) &&
           (*(int *)(_UnityEngine_Debug_TypeInfo_12d4338 + 0xe0) == 0)) {
          native_sub_4327ec();
        }
        plVar9 = *(long **)(*(long *)(_UnityEngine_Debug_TypeInfo_12d4338 + 0xb8) + 8);
        if (plVar9 == (long *)0x0) {
                    /* WARNING: Subroutine does not return */
          native_sub_432810();
        }
        lVar11 = *plVar9;
        if ((ulong)*(ushort *)(lVar11 + 0x12a) != 0) {
          uVar2 = 0;
          piVar7 = (int *)(*(long *)(lVar11 + 0xb0) + 8);
          do {
            if (*(long *)(piVar7 + -2) == _UnityEngine_ILogger_TypeInfo_12d4c10) {
              puVar8 = (undefined8 *)(lVar11 + (long)(*piVar7 + 2) * 0x10 + 0x138);
              goto code_r0x008dcba4;
            }
            uVar2 = uVar2 + 1;
            piVar7 = piVar7 + 4;
          } while (uVar2 < *(ushort *)(lVar11 + 0x12a));
        }
        puVar8 = (undefined8 *)native_sub_3c9b34(plVar9,_UnityEngine_ILogger_TypeInfo_12d4c10,2);
code_r0x008dcba4:
                    /* WARNING: Could not recover jumptable at 0x008dcbc0. Too many branches */
                    /* WARNING: Treating indirect jump as call */
        plVar9 = (long *)(*(code *)*puVar8)(plVar9,2,uVar10,puVar8[1]);
        return plVar9;
      }
      uVar5 = *(uint *)(param_1 + 0x18);
      if (0 < (int)uVar5) {
        uVar2 = 0;
        lVar11 = (long)(int)uVar5;
        while( true ) {
          if (uVar5 <= uVar2) {
            native_System_ThrowHelper__ThrowArgumentOutOfRangeException_9fe0f4(0);
          }
          plVar9 = *(long **)(*(long *)(param_1 + 0x10) + uVar2 * 8 + 0x20);
          if ((plVar9 != (long *)0x0) &&
             (plVar9 = (long *)(**(code **)(*plVar9 + 0x138))
                                         (plVar9,param_2,*(undefined8 *)(*plVar9 + 0x140)),
             ((ulong)plVar9 & 1) != 0)) {
            return plVar9;
          }
          uVar2 = uVar2 + 1;
          if (lVar11 <= (long)uVar2) break;
          uVar5 = *(uint *)(param_1 + 0x18);
        }
      }
      uVar10 = *(undefined8 *)(param_2 + 0x10);
      uVar4 = *(undefined8 *)(param_2 + 0x18);
      lVar11 = native_sub_432808(_EventDelegate_TypeInfo_12d4590);
      native_System_Object___ctor_ad2798(lVar11,0);
      native_EventDelegate__Set_dee0d4(lVar11,uVar10,uVar4);
      if (lVar11 != 0) {
        *(byte *)(lVar11 + 0x28) = param_3 & 1;
        if ((*(long *)(param_2 + 0x20) == 0) || (*(long *)(*(long *)(param_2 + 0x20) + 0x18) == 0))
        {
code_r0x00d40c00:
          lVar6 = *(long *)(param_1 + 0x10);
          if (lVar6 == 0) {
code_r0x00d40c5c:
                    /* WARNING: Subroutine does not return */
            native_sub_432810();
          }
          uVar5 = *(uint *)(param_1 + 0x18);
          if (uVar5 == *(uint *)(lVar6 + 0x18)) {
            (*(code *)**(undefined8 **)
                        (*(long *)(*(long *)(
                                            _Method_System_Collections_Generic_List_EventDelegate__Add___12dc740
                                            + 0x18) + 0xc0) + 0x60))(param_1,uVar5 + 1);
            uVar5 = *(uint *)(param_1 + 0x18);
            lVar6 = *(long *)(param_1 + 0x10);
            *(uint *)(param_1 + 0x18) = uVar5 + 1;
            if (lVar6 == 0) goto code_r0x00d40c5c;
          }
          else {
            *(uint *)(param_1 + 0x18) = uVar5 + 1;
          }
          if (*(uint *)(lVar6 + 0x18) <= uVar5) {
            uVar10 = native_sub_43283c();
                    /* WARNING: Subroutine does not return */
            native_sub_4327dc(uVar10,0);
          }
          plVar9 = (long *)(lVar6 + (long)(int)uVar5 * 8 + 0x20);
          *plVar9 = lVar11;
          plVar9 = (long *)native_sub_4326e0(plVar9,lVar11);
          *(int *)(param_1 + 0x1c) = *(int *)(param_1 + 0x1c) + 1;
          return plVar9;
        }
        uVar10 = native_sub_432750(_EventDelegate_Parameter___TypeInfo_12d3538);
        puVar8 = (undefined8 *)(lVar11 + 0x20);
        *puVar8 = uVar10;
        native_sub_4326e0(puVar8,uVar10);
        lVar6 = *(long *)(param_2 + 0x20);
        if (lVar6 != 0) {
          uVar2 = 0;
          do {
            if ((long)(int)*(uint *)(lVar6 + 0x18) <= (long)uVar2) goto code_r0x00d40c00;
            if (*(uint *)(lVar6 + 0x18) <= uVar2) {
LAB_00def68c:
              uVar10 = native_sub_43283c();
                    /* WARNING: Subroutine does not return */
              native_sub_4327dc(uVar10,0);
            }
            plVar9 = (long *)*puVar8;
            if (plVar9 == (long *)0x0) break;
            lVar6 = *(long *)(lVar6 + uVar2 * 8 + 0x20);
            if ((lVar6 != 0) &&
               (lVar3 = native_sub_4327f8(lVar6,*(undefined8 *)(*plVar9 + 0x40)), lVar3 == 0)) {
              uVar10 = native_sub_432830();
                    /* WARNING: Subroutine does not return */
              native_sub_4327dc(uVar10,0);
            }
            if (*(uint *)(plVar9 + 3) <= uVar2) goto LAB_00def68c;
            plVar9[uVar2 + 4] = lVar6;
            native_sub_4326e0(plVar9 + uVar2 + 4,lVar6);
            lVar6 = *(long *)(param_2 + 0x20);
            uVar2 = uVar2 + 1;
          } while (lVar6 != 0);
        }
      }
LAB_00def5fc:
                    /* WARNING: Subroutine does not return */
      native_sub_432810();
    }
  }
  uVar10 = *(undefined8 *)(param_2 + 0x30);
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
  if (param_1 == 0) {
    if (((*(byte *)(_UnityEngine_Debug_TypeInfo_12d4338 + 0x133) >> 2 & 1) != 0) &&
       (*(int *)(_UnityEngine_Debug_TypeInfo_12d4338 + 0xe0) == 0)) {
      native_sub_4327ec();
    }
    native_UnityEngine_Debug__LogWarning_8dca9c
              (_StringLiteral_Attempting_to_add_a_callback_to_a_list_that_s_null_12ec670,0);
    plVar9 = (long *)0x0;
  }
  else {
    uVar5 = *(uint *)(param_1 + 0x18);
    if (0 < (int)uVar5) {
      uVar2 = 0;
      lVar11 = (long)(int)uVar5;
      while( true ) {
        if (uVar5 <= uVar2) {
          native_System_ThrowHelper__ThrowArgumentOutOfRangeException_9fe0f4(0);
        }
        plVar9 = *(long **)(*(long *)(param_1 + 0x10) + uVar2 * 8 + 0x20);
        if ((plVar9 != (long *)0x0) &&
           (uVar1 = (**(code **)(*plVar9 + 0x138))(plVar9,uVar10,*(undefined8 *)(*plVar9 + 0x140)),
           (uVar1 & 1) != 0)) {
          return plVar9;
        }
        uVar2 = uVar2 + 1;
        if (lVar11 <= (long)uVar2) break;
        uVar5 = *(uint *)(param_1 + 0x18);
      }
    }
    plVar9 = (long *)native_sub_432808(_EventDelegate_TypeInfo_12d4590);
    native_System_Object___ctor_ad2798(plVar9,0);
    native_EventDelegate__Set_dedf08(plVar9,uVar10);
    if (plVar9 == (long *)0x0) {
                    /* WARNING: Subroutine does not return */
      native_sub_432810();
    }
    *(byte *)(plVar9 + 5) = param_3 & 1;
    native_System_Collections_Generic_List_int_____Add_d40c00
              (param_1,plVar9,_Method_System_Collections_Generic_List_EventDelegate__Add___12dc740);
  }
  return plVar9;
}



/* EventDelegate$$Remove @ 0xdef6a4
 * bool EventDelegate__Remove (System_Collections_Generic_List_EventDelegate__o* list, EventDelegate_Callback_o* callback, const MethodInfo* method); */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* EventDelegate$$Remove
   bool EventDelegate__Remove (System_Collections_Generic_List_EventDelegate__o* list,
   EventDelegate_Callback_o* callback, const MethodInfo* method); */

undefined8 native_EventDelegate__Remove_def6a4(long param_1,undefined8 param_2)

{
  uint uVar1;
  long *plVar2;
  ulong uVar3;
  ulong uVar4;
  long lVar5;
  
  if ((bRam0000000001346ef7 & 1) == 0) {
    native_sub_43273c(&Method_System_Collections_Generic_List_EventDelegate__RemoveAt___12dc758);
    native_sub_43273c(&Method_System_Collections_Generic_List_EventDelegate__get_Count___12dc760);
    native_sub_43273c(&Method_System_Collections_Generic_List_EventDelegate__get_Item___12dc768);
    bRam0000000001346ef7 = 1;
  }
  if ((param_1 != 0) && (uVar1 = *(uint *)(param_1 + 0x18), 0 < (int)uVar1)) {
    uVar4 = 0;
    lVar5 = (long)(int)uVar1;
    while( true ) {
      if (uVar1 <= uVar4) {
        native_System_ThrowHelper__ThrowArgumentOutOfRangeException_9fe0f4(0);
      }
      plVar2 = *(long **)(*(long *)(param_1 + 0x10) + uVar4 * 8 + 0x20);
      if ((plVar2 != (long *)0x0) &&
         (uVar3 = (**(code **)(*plVar2 + 0x138))(plVar2,param_2,*(undefined8 *)(*plVar2 + 0x140)),
         (uVar3 & 1) != 0)) {
        native_System_Collections_Generic_List_int_____RemoveAt_d42280
                  (param_1,uVar4 & 0xffffffff,
                   _Method_System_Collections_Generic_List_EventDelegate__RemoveAt___12dc758);
        return 1;
      }
      uVar4 = uVar4 + 1;
      if (lVar5 <= (long)uVar4) break;
      uVar1 = *(uint *)(param_1 + 0x18);
    }
  }
  return 0;
}



/* EventDelegate$$Remove @ 0xdef788
 * bool EventDelegate__Remove (System_Collections_Generic_List_EventDelegate__o* list, EventDelegate_o* ev, const MethodInfo* method); */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* EventDelegate$$Remove
   bool EventDelegate__Remove (System_Collections_Generic_List_EventDelegate__o* list,
   EventDelegate_o* ev, const MethodInfo* method); */

undefined8 native_EventDelegate__Remove_def788(long param_1,undefined8 param_2)

{
  uint uVar1;
  long *plVar2;
  ulong uVar3;
  ulong uVar4;
  long lVar5;
  
  if ((bRam0000000001346ef8 & 1) == 0) {
    native_sub_43273c(&Method_System_Collections_Generic_List_EventDelegate__RemoveAt___12dc758);
    native_sub_43273c(&Method_System_Collections_Generic_List_EventDelegate__get_Count___12dc760);
    native_sub_43273c(&Method_System_Collections_Generic_List_EventDelegate__get_Item___12dc768);
    bRam0000000001346ef8 = 1;
  }
  if ((param_1 != 0) && (uVar1 = *(uint *)(param_1 + 0x18), 0 < (int)uVar1)) {
    uVar4 = 0;
    lVar5 = (long)(int)uVar1;
    while( true ) {
      if (uVar1 <= uVar4) {
        native_System_ThrowHelper__ThrowArgumentOutOfRangeException_9fe0f4(0);
      }
      plVar2 = *(long **)(*(long *)(param_1 + 0x10) + uVar4 * 8 + 0x20);
      if ((plVar2 != (long *)0x0) &&
         (uVar3 = (**(code **)(*plVar2 + 0x138))(plVar2,param_2,*(undefined8 *)(*plVar2 + 0x140)),
         (uVar3 & 1) != 0)) {
        native_System_Collections_Generic_List_int_____RemoveAt_d42280
                  (param_1,uVar4 & 0xffffffff,
                   _Method_System_Collections_Generic_List_EventDelegate__RemoveAt___12dc758);
        return 1;
      }
      uVar4 = uVar4 + 1;
      if (lVar5 <= (long)uVar4) break;
      uVar1 = *(uint *)(param_1 + 0x18);
    }
  }
  return 0;
}



/* EventDelegate$$.cctor @ 0xdef86c
 * void EventDelegate___cctor (const MethodInfo* method); */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* EventDelegate$$.cctor
   void EventDelegate___cctor (const MethodInfo* method); */

void native_EventDelegate___cctor_def86c(void)

{
  undefined4 uVar1;
  
  if ((bRam0000000001346ef9 & 1) == 0) {
    native_sub_43273c(&EventDelegate_TypeInfo_12d4590);
    native_sub_43273c(&StringLiteral_EventDelegate_12edca8);
    bRam0000000001346ef9 = 1;
  }
  if (_StringLiteral_EventDelegate_12edca8 != (long *)0x0) {
    uVar1 = (**(code **)(*_StringLiteral_EventDelegate_12edca8 + 0x158))
                      (_StringLiteral_EventDelegate_12edca8,
                       *(undefined8 *)(*_StringLiteral_EventDelegate_12edca8 + 0x160));
    **(undefined4 **)(_EventDelegate_TypeInfo_12d4590 + 0xb8) = uVar1;
    return;
  }
                    /* WARNING: Subroutine does not return */
  native_sub_432810();
}


