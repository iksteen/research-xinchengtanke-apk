/* ARM64 IL2CPP native pseudocode from Ghidra.
 * Recovered implementation, not original C# source.
 * Function boundaries follow the IL2CPP method address table. */


/* PropertyBinding$$Start @ 0x73b664
 * void PropertyBinding__Start (PropertyBinding_o* __this, const MethodInfo* method); */

/* PropertyBinding$$Start
   void PropertyBinding__Start (PropertyBinding_o* __this, const MethodInfo* method); */

void native_PropertyBinding__Start_73b664(long param_1)

{
  native_PropertyBinding__UpdateTarget_73b6a4();
  if (*(int *)(param_1 + 0x2c) != 0) {
    return;
  }
  if (pcRam0000000001340948 == (code *)0x0) {
    pcRam0000000001340948 = (code *)native_sub_4326f0(&UNK_00e2c702);
  }
                    /* WARNING: Could not recover jumptable at 0x008d7b58. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*pcRam0000000001340948)(param_1,0);
  return;
}



/* PropertyBinding$$Update @ 0x73b868
 * void PropertyBinding__Update (PropertyBinding_o* __this, const MethodInfo* method); */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* PropertyBinding$$Update
   void PropertyBinding__Update (PropertyBinding_o* __this, const MethodInfo* method); */

ulong native_PropertyBinding__Update_73b868(ulong param_1)

{
  undefined8 uVar1;
  ulong uVar2;
  long lVar3;
  undefined8 uVar4;
  long *plVar5;
  undefined8 uVar6;
  undefined8 uVar7;
  long lVar8;
  long *plVar9;
  long lStack_28;
  
  if (*(int *)(param_1 + 0x2c) != 1) {
    return param_1;
  }
  if ((bRam000000000133f601 & 1) == 0) {
    native_sub_43273c(&System_Type_TypeInfo_12d6340);
    bRam000000000133f601 = 1;
  }
  uVar2 = *(ulong *)(param_1 + 0x18);
  if (((uVar2 == 0) || (*(long *)(param_1 + 0x20) == 0)) ||
     (uVar2 = native_PropertyReference__get_isValid_73b94c(), (uVar2 & 1) == 0)) {
    return uVar2;
  }
  if (*(long *)(param_1 + 0x20) == 0) goto LAB_0073b864;
  uVar2 = native_PropertyReference__get_isValid_73b94c();
  if ((uVar2 & 1) == 0) {
    return uVar2;
  }
  if (*(int *)(param_1 + 0x28) == 0) {
    if (*(long *)(param_1 + 0x18) == 0) goto LAB_0073b864;
    lVar8 = *(long *)(param_1 + 0x20);
    lVar3 = native_PropertyReference__Get_73b9dc();
  }
  else {
    lVar8 = *(long *)(param_1 + 0x18);
    if (*(int *)(param_1 + 0x28) == 1) {
      if (*(long *)(param_1 + 0x20) == 0) goto LAB_0073b864;
      lVar3 = native_PropertyReference__Get_73b9dc();
    }
    else {
      if (lVar8 == 0) goto LAB_0073b864;
      uVar7 = native_PropertyReference__GetPropertyType_73bde4(lVar8);
      if (*(long *)(param_1 + 0x20) == 0) goto LAB_0073b864;
      uVar4 = native_PropertyReference__GetPropertyType_73bde4(*(long *)(param_1 + 0x20));
      if (((*(byte *)(_System_Type_TypeInfo_12d6340 + 0x133) >> 2 & 1) != 0) &&
         (*(int *)(_System_Type_TypeInfo_12d6340 + 0xe0) == 0)) {
        native_sub_4327ec(_System_Type_TypeInfo_12d6340);
      }
      uVar2 = native_System_Type__op_Equality_b117c4(uVar7,uVar4,0);
      if ((uVar2 & 1) == 0) {
        return uVar2;
      }
      if (*(long *)(param_1 + 0x18) == 0) goto LAB_0073b864;
      lVar3 = native_PropertyReference__Get_73b9dc();
      plVar9 = (long *)(param_1 + 0x38);
      plVar5 = (long *)*plVar9;
      if ((plVar5 == (long *)0x0) ||
         (uVar2 = (**(code **)(*plVar5 + 0x138))(plVar5,lVar3,*(undefined8 *)(*plVar5 + 0x140)),
         (uVar2 & 1) == 0)) {
        *(long *)(param_1 + 0x38) = lVar3;
        native_sub_4326e0(plVar9,lVar3);
        lVar8 = *(long *)(param_1 + 0x20);
      }
      else {
        if (*(long *)(param_1 + 0x20) == 0) goto LAB_0073b864;
        lVar3 = native_PropertyReference__Get_73b9dc();
        plVar5 = (long *)*plVar9;
        if (plVar5 == (long *)0x0) goto LAB_0073b864;
        uVar2 = (**(code **)(*plVar5 + 0x138))(plVar5,lVar3,*(undefined8 *)(*plVar5 + 0x140));
        if ((uVar2 & 1) != 0) {
          return uVar2;
        }
        *(long *)(param_1 + 0x38) = lVar3;
        native_sub_4326e0(plVar9,lVar3);
        lVar8 = *(long *)(param_1 + 0x18);
      }
    }
  }
  if (lVar8 == 0) {
LAB_0073b864:
                    /* WARNING: Subroutine does not return */
    native_sub_432810();
  }
  lStack_28 = lVar3;
  if ((bRam000000000133f609 & 1) == 0) {
    native_sub_43273c(&UnityEngine_Debug_TypeInfo_12d4338);
    native_sub_43273c(&StringLiteral__to__12eaf18);
    native_sub_43273c(&StringLiteral_Unable_to_convert__12f2a38);
    bRam000000000133f609 = 1;
  }
  uVar2 = native_System_Reflection_PropertyInfo__op_Equality_aa4fa4
                    (*(undefined8 *)(lVar8 + 0x28),0,0);
  if ((((uVar2 & 1) != 0) &&
      (uVar2 = native_System_Reflection_FieldInfo__op_Equality_bf6ac0
                         (*(undefined8 *)(lVar8 + 0x20),0,0), (uVar2 & 1) != 0)) &&
     (uVar2 = native_PropertyReference__get_isValid_73b94c(lVar8), (uVar2 & 1) != 0)) {
    native_PropertyReference__Cache_73c120(lVar8);
  }
  uVar2 = native_System_Reflection_PropertyInfo__op_Equality_aa4fa4
                    (*(undefined8 *)(lVar8 + 0x28),0,0);
  if (((uVar2 & 1) == 0) ||
     (uVar2 = native_System_Reflection_FieldInfo__op_Equality_bf6ac0
                        (*(undefined8 *)(lVar8 + 0x20),0,0), (uVar2 & 1) == 0)) {
    if (lVar3 == 0) {
      uVar2 = native_System_Reflection_PropertyInfo__op_Inequality_aa4ff0
                        (*(undefined8 *)(lVar8 + 0x28),0,0);
      if ((uVar2 & 1) == 0) {
        if (*(long *)(lVar8 + 0x20) == 0) {
                    /* WARNING: Subroutine does not return */
          native_sub_432810();
        }
        native_System_Reflection_FieldInfo__SetValue_bf691c
                  (*(long *)(lVar8 + 0x20),*(undefined8 *)(lVar8 + 0x10),0,0);
      }
      else {
        plVar5 = *(long **)(lVar8 + 0x28);
        if (plVar5 == (long *)0x0) {
                    /* WARNING: Subroutine does not return */
          native_sub_432810();
        }
        uVar2 = (**(code **)(*plVar5 + 600))(plVar5,*(undefined8 *)(*plVar5 + 0x260));
        if ((uVar2 & 1) == 0) goto LAB_0073bb88;
        plVar5 = *(long **)(lVar8 + 0x28);
        if (plVar5 == (long *)0x0) {
                    /* WARNING: Subroutine does not return */
          native_sub_432810();
        }
        (**(code **)(*plVar5 + 0x2d8))
                  (plVar5,*(undefined8 *)(lVar8 + 0x10),0,0,*(undefined8 *)(*plVar5 + 0x2e0));
      }
    }
    else {
LAB_0073bb88:
      uVar2 = native_PropertyReference__Convert_73c5d8(lVar8,&lStack_28);
      if ((uVar2 & 1) == 0) {
        uVar2 = native_UnityEngine_Application__get_isPlaying_8d60cc(0);
        if ((uVar2 & 1) != 0) {
          if (lStack_28 == 0) goto LAB_0073bd54;
          plVar5 = (long *)native_System_Object__GetType_adb48c(lStack_28,0);
          uVar7 = _StringLiteral_Unable_to_convert__12f2a38;
          if (plVar5 == (long *)0x0) {
            uVar4 = 0;
          }
          else {
            uVar4 = (**(code **)(*plVar5 + 0x168))(plVar5,*(undefined8 *)(*plVar5 + 0x170));
          }
          plVar5 = (long *)native_PropertyReference__GetPropertyType_73bde4(lVar8);
          uVar1 = _StringLiteral__to__12eaf18;
          if (plVar5 == (long *)0x0) {
            uVar6 = 0;
          }
          else {
            uVar6 = (**(code **)(*plVar5 + 0x168))(plVar5,*(undefined8 *)(*plVar5 + 0x170));
          }
          uVar7 = native_System_String__Concat_afcabc(uVar7,uVar4,uVar1,uVar6,0);
          if (((*(byte *)(_UnityEngine_Debug_TypeInfo_12d4338 + 0x133) >> 2 & 1) != 0) &&
             (*(int *)(_UnityEngine_Debug_TypeInfo_12d4338 + 0xe0) == 0)) {
            native_sub_4327ec(_UnityEngine_Debug_TypeInfo_12d4338);
          }
          native_UnityEngine_Debug__LogError_8dc5cc(uVar7,0);
        }
        goto LAB_0073bd40;
      }
      uVar2 = native_System_Reflection_FieldInfo__op_Inequality_bf6e8c
                        (*(undefined8 *)(lVar8 + 0x20),0,0);
      if ((uVar2 & 1) == 0) {
        plVar5 = *(long **)(lVar8 + 0x28);
        if (plVar5 == (long *)0x0) goto LAB_0073bd54;
        uVar2 = (**(code **)(*plVar5 + 600))(plVar5,*(undefined8 *)(*plVar5 + 0x260));
        if ((uVar2 & 1) == 0) goto LAB_0073bd40;
        plVar5 = *(long **)(lVar8 + 0x28);
        if (plVar5 == (long *)0x0) goto LAB_0073bd54;
        (**(code **)(*plVar5 + 0x2d8))
                  (plVar5,*(undefined8 *)(lVar8 + 0x10),lStack_28,0,*(undefined8 *)(*plVar5 + 0x2e0)
                  );
      }
      else {
        if (*(long *)(lVar8 + 0x20) == 0) {
LAB_0073bd54:
                    /* WARNING: Subroutine does not return */
          native_sub_432810();
        }
        native_System_Reflection_FieldInfo__SetValue_bf691c
                  (*(long *)(lVar8 + 0x20),*(undefined8 *)(lVar8 + 0x10),lStack_28,0);
      }
    }
    uVar2 = 1;
  }
  else {
LAB_0073bd40:
    uVar2 = 0;
  }
  return uVar2;
}



/* PropertyBinding$$LateUpdate @ 0x73b87c
 * void PropertyBinding__LateUpdate (PropertyBinding_o* __this, const MethodInfo* method); */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* PropertyBinding$$LateUpdate
   void PropertyBinding__LateUpdate (PropertyBinding_o* __this, const MethodInfo* method); */

ulong native_PropertyBinding__LateUpdate_73b87c(ulong param_1)

{
  undefined8 uVar1;
  ulong uVar2;
  long lVar3;
  undefined8 uVar4;
  long *plVar5;
  undefined8 uVar6;
  undefined8 uVar7;
  long lVar8;
  long *plVar9;
  long lStack_28;
  
  if (*(int *)(param_1 + 0x2c) != 2) {
    return param_1;
  }
  if ((bRam000000000133f601 & 1) == 0) {
    native_sub_43273c(&System_Type_TypeInfo_12d6340);
    bRam000000000133f601 = 1;
  }
  uVar2 = *(ulong *)(param_1 + 0x18);
  if (((uVar2 == 0) || (*(long *)(param_1 + 0x20) == 0)) ||
     (uVar2 = native_PropertyReference__get_isValid_73b94c(), (uVar2 & 1) == 0)) {
    return uVar2;
  }
  if (*(long *)(param_1 + 0x20) == 0) goto LAB_0073b864;
  uVar2 = native_PropertyReference__get_isValid_73b94c();
  if ((uVar2 & 1) == 0) {
    return uVar2;
  }
  if (*(int *)(param_1 + 0x28) == 0) {
    if (*(long *)(param_1 + 0x18) == 0) goto LAB_0073b864;
    lVar8 = *(long *)(param_1 + 0x20);
    lVar3 = native_PropertyReference__Get_73b9dc();
  }
  else {
    lVar8 = *(long *)(param_1 + 0x18);
    if (*(int *)(param_1 + 0x28) == 1) {
      if (*(long *)(param_1 + 0x20) == 0) goto LAB_0073b864;
      lVar3 = native_PropertyReference__Get_73b9dc();
    }
    else {
      if (lVar8 == 0) goto LAB_0073b864;
      uVar7 = native_PropertyReference__GetPropertyType_73bde4(lVar8);
      if (*(long *)(param_1 + 0x20) == 0) goto LAB_0073b864;
      uVar4 = native_PropertyReference__GetPropertyType_73bde4(*(long *)(param_1 + 0x20));
      if (((*(byte *)(_System_Type_TypeInfo_12d6340 + 0x133) >> 2 & 1) != 0) &&
         (*(int *)(_System_Type_TypeInfo_12d6340 + 0xe0) == 0)) {
        native_sub_4327ec(_System_Type_TypeInfo_12d6340);
      }
      uVar2 = native_System_Type__op_Equality_b117c4(uVar7,uVar4,0);
      if ((uVar2 & 1) == 0) {
        return uVar2;
      }
      if (*(long *)(param_1 + 0x18) == 0) goto LAB_0073b864;
      lVar3 = native_PropertyReference__Get_73b9dc();
      plVar9 = (long *)(param_1 + 0x38);
      plVar5 = (long *)*plVar9;
      if ((plVar5 == (long *)0x0) ||
         (uVar2 = (**(code **)(*plVar5 + 0x138))(plVar5,lVar3,*(undefined8 *)(*plVar5 + 0x140)),
         (uVar2 & 1) == 0)) {
        *(long *)(param_1 + 0x38) = lVar3;
        native_sub_4326e0(plVar9,lVar3);
        lVar8 = *(long *)(param_1 + 0x20);
      }
      else {
        if (*(long *)(param_1 + 0x20) == 0) goto LAB_0073b864;
        lVar3 = native_PropertyReference__Get_73b9dc();
        plVar5 = (long *)*plVar9;
        if (plVar5 == (long *)0x0) goto LAB_0073b864;
        uVar2 = (**(code **)(*plVar5 + 0x138))(plVar5,lVar3,*(undefined8 *)(*plVar5 + 0x140));
        if ((uVar2 & 1) != 0) {
          return uVar2;
        }
        *(long *)(param_1 + 0x38) = lVar3;
        native_sub_4326e0(plVar9,lVar3);
        lVar8 = *(long *)(param_1 + 0x18);
      }
    }
  }
  if (lVar8 == 0) {
LAB_0073b864:
                    /* WARNING: Subroutine does not return */
    native_sub_432810();
  }
  lStack_28 = lVar3;
  if ((bRam000000000133f609 & 1) == 0) {
    native_sub_43273c(&UnityEngine_Debug_TypeInfo_12d4338);
    native_sub_43273c(&StringLiteral__to__12eaf18);
    native_sub_43273c(&StringLiteral_Unable_to_convert__12f2a38);
    bRam000000000133f609 = 1;
  }
  uVar2 = native_System_Reflection_PropertyInfo__op_Equality_aa4fa4
                    (*(undefined8 *)(lVar8 + 0x28),0,0);
  if ((((uVar2 & 1) != 0) &&
      (uVar2 = native_System_Reflection_FieldInfo__op_Equality_bf6ac0
                         (*(undefined8 *)(lVar8 + 0x20),0,0), (uVar2 & 1) != 0)) &&
     (uVar2 = native_PropertyReference__get_isValid_73b94c(lVar8), (uVar2 & 1) != 0)) {
    native_PropertyReference__Cache_73c120(lVar8);
  }
  uVar2 = native_System_Reflection_PropertyInfo__op_Equality_aa4fa4
                    (*(undefined8 *)(lVar8 + 0x28),0,0);
  if (((uVar2 & 1) == 0) ||
     (uVar2 = native_System_Reflection_FieldInfo__op_Equality_bf6ac0
                        (*(undefined8 *)(lVar8 + 0x20),0,0), (uVar2 & 1) == 0)) {
    if (lVar3 == 0) {
      uVar2 = native_System_Reflection_PropertyInfo__op_Inequality_aa4ff0
                        (*(undefined8 *)(lVar8 + 0x28),0,0);
      if ((uVar2 & 1) == 0) {
        if (*(long *)(lVar8 + 0x20) == 0) {
                    /* WARNING: Subroutine does not return */
          native_sub_432810();
        }
        native_System_Reflection_FieldInfo__SetValue_bf691c
                  (*(long *)(lVar8 + 0x20),*(undefined8 *)(lVar8 + 0x10),0,0);
      }
      else {
        plVar5 = *(long **)(lVar8 + 0x28);
        if (plVar5 == (long *)0x0) {
                    /* WARNING: Subroutine does not return */
          native_sub_432810();
        }
        uVar2 = (**(code **)(*plVar5 + 600))(plVar5,*(undefined8 *)(*plVar5 + 0x260));
        if ((uVar2 & 1) == 0) goto LAB_0073bb88;
        plVar5 = *(long **)(lVar8 + 0x28);
        if (plVar5 == (long *)0x0) {
                    /* WARNING: Subroutine does not return */
          native_sub_432810();
        }
        (**(code **)(*plVar5 + 0x2d8))
                  (plVar5,*(undefined8 *)(lVar8 + 0x10),0,0,*(undefined8 *)(*plVar5 + 0x2e0));
      }
    }
    else {
LAB_0073bb88:
      uVar2 = native_PropertyReference__Convert_73c5d8(lVar8,&lStack_28);
      if ((uVar2 & 1) == 0) {
        uVar2 = native_UnityEngine_Application__get_isPlaying_8d60cc(0);
        if ((uVar2 & 1) != 0) {
          if (lStack_28 == 0) goto LAB_0073bd54;
          plVar5 = (long *)native_System_Object__GetType_adb48c(lStack_28,0);
          uVar7 = _StringLiteral_Unable_to_convert__12f2a38;
          if (plVar5 == (long *)0x0) {
            uVar4 = 0;
          }
          else {
            uVar4 = (**(code **)(*plVar5 + 0x168))(plVar5,*(undefined8 *)(*plVar5 + 0x170));
          }
          plVar5 = (long *)native_PropertyReference__GetPropertyType_73bde4(lVar8);
          uVar1 = _StringLiteral__to__12eaf18;
          if (plVar5 == (long *)0x0) {
            uVar6 = 0;
          }
          else {
            uVar6 = (**(code **)(*plVar5 + 0x168))(plVar5,*(undefined8 *)(*plVar5 + 0x170));
          }
          uVar7 = native_System_String__Concat_afcabc(uVar7,uVar4,uVar1,uVar6,0);
          if (((*(byte *)(_UnityEngine_Debug_TypeInfo_12d4338 + 0x133) >> 2 & 1) != 0) &&
             (*(int *)(_UnityEngine_Debug_TypeInfo_12d4338 + 0xe0) == 0)) {
            native_sub_4327ec(_UnityEngine_Debug_TypeInfo_12d4338);
          }
          native_UnityEngine_Debug__LogError_8dc5cc(uVar7,0);
        }
        goto LAB_0073bd40;
      }
      uVar2 = native_System_Reflection_FieldInfo__op_Inequality_bf6e8c
                        (*(undefined8 *)(lVar8 + 0x20),0,0);
      if ((uVar2 & 1) == 0) {
        plVar5 = *(long **)(lVar8 + 0x28);
        if (plVar5 == (long *)0x0) goto LAB_0073bd54;
        uVar2 = (**(code **)(*plVar5 + 600))(plVar5,*(undefined8 *)(*plVar5 + 0x260));
        if ((uVar2 & 1) == 0) goto LAB_0073bd40;
        plVar5 = *(long **)(lVar8 + 0x28);
        if (plVar5 == (long *)0x0) goto LAB_0073bd54;
        (**(code **)(*plVar5 + 0x2d8))
                  (plVar5,*(undefined8 *)(lVar8 + 0x10),lStack_28,0,*(undefined8 *)(*plVar5 + 0x2e0)
                  );
      }
      else {
        if (*(long *)(lVar8 + 0x20) == 0) {
LAB_0073bd54:
                    /* WARNING: Subroutine does not return */
          native_sub_432810();
        }
        native_System_Reflection_FieldInfo__SetValue_bf691c
                  (*(long *)(lVar8 + 0x20),*(undefined8 *)(lVar8 + 0x10),lStack_28,0);
      }
    }
    uVar2 = 1;
  }
  else {
LAB_0073bd40:
    uVar2 = 0;
  }
  return uVar2;
}



/* PropertyBinding$$FixedUpdate @ 0x73b890
 * void PropertyBinding__FixedUpdate (PropertyBinding_o* __this, const MethodInfo* method); */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* PropertyBinding$$FixedUpdate
   void PropertyBinding__FixedUpdate (PropertyBinding_o* __this, const MethodInfo* method); */

ulong native_PropertyBinding__FixedUpdate_73b890(ulong param_1)

{
  undefined8 uVar1;
  ulong uVar2;
  long lVar3;
  undefined8 uVar4;
  long *plVar5;
  undefined8 uVar6;
  undefined8 uVar7;
  long lVar8;
  long *plVar9;
  long lStack_28;
  
  if (*(int *)(param_1 + 0x2c) != 3) {
    return param_1;
  }
  if ((bRam000000000133f601 & 1) == 0) {
    native_sub_43273c(&System_Type_TypeInfo_12d6340);
    bRam000000000133f601 = 1;
  }
  uVar2 = *(ulong *)(param_1 + 0x18);
  if (((uVar2 == 0) || (*(long *)(param_1 + 0x20) == 0)) ||
     (uVar2 = native_PropertyReference__get_isValid_73b94c(), (uVar2 & 1) == 0)) {
    return uVar2;
  }
  if (*(long *)(param_1 + 0x20) == 0) goto LAB_0073b864;
  uVar2 = native_PropertyReference__get_isValid_73b94c();
  if ((uVar2 & 1) == 0) {
    return uVar2;
  }
  if (*(int *)(param_1 + 0x28) == 0) {
    if (*(long *)(param_1 + 0x18) == 0) goto LAB_0073b864;
    lVar8 = *(long *)(param_1 + 0x20);
    lVar3 = native_PropertyReference__Get_73b9dc();
  }
  else {
    lVar8 = *(long *)(param_1 + 0x18);
    if (*(int *)(param_1 + 0x28) == 1) {
      if (*(long *)(param_1 + 0x20) == 0) goto LAB_0073b864;
      lVar3 = native_PropertyReference__Get_73b9dc();
    }
    else {
      if (lVar8 == 0) goto LAB_0073b864;
      uVar7 = native_PropertyReference__GetPropertyType_73bde4(lVar8);
      if (*(long *)(param_1 + 0x20) == 0) goto LAB_0073b864;
      uVar4 = native_PropertyReference__GetPropertyType_73bde4(*(long *)(param_1 + 0x20));
      if (((*(byte *)(_System_Type_TypeInfo_12d6340 + 0x133) >> 2 & 1) != 0) &&
         (*(int *)(_System_Type_TypeInfo_12d6340 + 0xe0) == 0)) {
        native_sub_4327ec(_System_Type_TypeInfo_12d6340);
      }
      uVar2 = native_System_Type__op_Equality_b117c4(uVar7,uVar4,0);
      if ((uVar2 & 1) == 0) {
        return uVar2;
      }
      if (*(long *)(param_1 + 0x18) == 0) goto LAB_0073b864;
      lVar3 = native_PropertyReference__Get_73b9dc();
      plVar9 = (long *)(param_1 + 0x38);
      plVar5 = (long *)*plVar9;
      if ((plVar5 == (long *)0x0) ||
         (uVar2 = (**(code **)(*plVar5 + 0x138))(plVar5,lVar3,*(undefined8 *)(*plVar5 + 0x140)),
         (uVar2 & 1) == 0)) {
        *(long *)(param_1 + 0x38) = lVar3;
        native_sub_4326e0(plVar9,lVar3);
        lVar8 = *(long *)(param_1 + 0x20);
      }
      else {
        if (*(long *)(param_1 + 0x20) == 0) goto LAB_0073b864;
        lVar3 = native_PropertyReference__Get_73b9dc();
        plVar5 = (long *)*plVar9;
        if (plVar5 == (long *)0x0) goto LAB_0073b864;
        uVar2 = (**(code **)(*plVar5 + 0x138))(plVar5,lVar3,*(undefined8 *)(*plVar5 + 0x140));
        if ((uVar2 & 1) != 0) {
          return uVar2;
        }
        *(long *)(param_1 + 0x38) = lVar3;
        native_sub_4326e0(plVar9,lVar3);
        lVar8 = *(long *)(param_1 + 0x18);
      }
    }
  }
  if (lVar8 == 0) {
LAB_0073b864:
                    /* WARNING: Subroutine does not return */
    native_sub_432810();
  }
  lStack_28 = lVar3;
  if ((bRam000000000133f609 & 1) == 0) {
    native_sub_43273c(&UnityEngine_Debug_TypeInfo_12d4338);
    native_sub_43273c(&StringLiteral__to__12eaf18);
    native_sub_43273c(&StringLiteral_Unable_to_convert__12f2a38);
    bRam000000000133f609 = 1;
  }
  uVar2 = native_System_Reflection_PropertyInfo__op_Equality_aa4fa4
                    (*(undefined8 *)(lVar8 + 0x28),0,0);
  if ((((uVar2 & 1) != 0) &&
      (uVar2 = native_System_Reflection_FieldInfo__op_Equality_bf6ac0
                         (*(undefined8 *)(lVar8 + 0x20),0,0), (uVar2 & 1) != 0)) &&
     (uVar2 = native_PropertyReference__get_isValid_73b94c(lVar8), (uVar2 & 1) != 0)) {
    native_PropertyReference__Cache_73c120(lVar8);
  }
  uVar2 = native_System_Reflection_PropertyInfo__op_Equality_aa4fa4
                    (*(undefined8 *)(lVar8 + 0x28),0,0);
  if (((uVar2 & 1) == 0) ||
     (uVar2 = native_System_Reflection_FieldInfo__op_Equality_bf6ac0
                        (*(undefined8 *)(lVar8 + 0x20),0,0), (uVar2 & 1) == 0)) {
    if (lVar3 == 0) {
      uVar2 = native_System_Reflection_PropertyInfo__op_Inequality_aa4ff0
                        (*(undefined8 *)(lVar8 + 0x28),0,0);
      if ((uVar2 & 1) == 0) {
        if (*(long *)(lVar8 + 0x20) == 0) {
                    /* WARNING: Subroutine does not return */
          native_sub_432810();
        }
        native_System_Reflection_FieldInfo__SetValue_bf691c
                  (*(long *)(lVar8 + 0x20),*(undefined8 *)(lVar8 + 0x10),0,0);
      }
      else {
        plVar5 = *(long **)(lVar8 + 0x28);
        if (plVar5 == (long *)0x0) {
                    /* WARNING: Subroutine does not return */
          native_sub_432810();
        }
        uVar2 = (**(code **)(*plVar5 + 600))(plVar5,*(undefined8 *)(*plVar5 + 0x260));
        if ((uVar2 & 1) == 0) goto LAB_0073bb88;
        plVar5 = *(long **)(lVar8 + 0x28);
        if (plVar5 == (long *)0x0) {
                    /* WARNING: Subroutine does not return */
          native_sub_432810();
        }
        (**(code **)(*plVar5 + 0x2d8))
                  (plVar5,*(undefined8 *)(lVar8 + 0x10),0,0,*(undefined8 *)(*plVar5 + 0x2e0));
      }
    }
    else {
LAB_0073bb88:
      uVar2 = native_PropertyReference__Convert_73c5d8(lVar8,&lStack_28);
      if ((uVar2 & 1) == 0) {
        uVar2 = native_UnityEngine_Application__get_isPlaying_8d60cc(0);
        if ((uVar2 & 1) != 0) {
          if (lStack_28 == 0) goto LAB_0073bd54;
          plVar5 = (long *)native_System_Object__GetType_adb48c(lStack_28,0);
          uVar7 = _StringLiteral_Unable_to_convert__12f2a38;
          if (plVar5 == (long *)0x0) {
            uVar4 = 0;
          }
          else {
            uVar4 = (**(code **)(*plVar5 + 0x168))(plVar5,*(undefined8 *)(*plVar5 + 0x170));
          }
          plVar5 = (long *)native_PropertyReference__GetPropertyType_73bde4(lVar8);
          uVar1 = _StringLiteral__to__12eaf18;
          if (plVar5 == (long *)0x0) {
            uVar6 = 0;
          }
          else {
            uVar6 = (**(code **)(*plVar5 + 0x168))(plVar5,*(undefined8 *)(*plVar5 + 0x170));
          }
          uVar7 = native_System_String__Concat_afcabc(uVar7,uVar4,uVar1,uVar6,0);
          if (((*(byte *)(_UnityEngine_Debug_TypeInfo_12d4338 + 0x133) >> 2 & 1) != 0) &&
             (*(int *)(_UnityEngine_Debug_TypeInfo_12d4338 + 0xe0) == 0)) {
            native_sub_4327ec(_UnityEngine_Debug_TypeInfo_12d4338);
          }
          native_UnityEngine_Debug__LogError_8dc5cc(uVar7,0);
        }
        goto LAB_0073bd40;
      }
      uVar2 = native_System_Reflection_FieldInfo__op_Inequality_bf6e8c
                        (*(undefined8 *)(lVar8 + 0x20),0,0);
      if ((uVar2 & 1) == 0) {
        plVar5 = *(long **)(lVar8 + 0x28);
        if (plVar5 == (long *)0x0) goto LAB_0073bd54;
        uVar2 = (**(code **)(*plVar5 + 600))(plVar5,*(undefined8 *)(*plVar5 + 0x260));
        if ((uVar2 & 1) == 0) goto LAB_0073bd40;
        plVar5 = *(long **)(lVar8 + 0x28);
        if (plVar5 == (long *)0x0) goto LAB_0073bd54;
        (**(code **)(*plVar5 + 0x2d8))
                  (plVar5,*(undefined8 *)(lVar8 + 0x10),lStack_28,0,*(undefined8 *)(*plVar5 + 0x2e0)
                  );
      }
      else {
        if (*(long *)(lVar8 + 0x20) == 0) {
LAB_0073bd54:
                    /* WARNING: Subroutine does not return */
          native_sub_432810();
        }
        native_System_Reflection_FieldInfo__SetValue_bf691c
                  (*(long *)(lVar8 + 0x20),*(undefined8 *)(lVar8 + 0x10),lStack_28,0);
      }
    }
    uVar2 = 1;
  }
  else {
LAB_0073bd40:
    uVar2 = 0;
  }
  return uVar2;
}



/* PropertyBinding$$OnValidate @ 0x73b8a4
 * void PropertyBinding__OnValidate (PropertyBinding_o* __this, const MethodInfo* method); */

/* PropertyBinding$$OnValidate
   void PropertyBinding__OnValidate (PropertyBinding_o* __this, const MethodInfo* method); */

void native_PropertyBinding__OnValidate_73b8a4(long param_1)

{
  ulong *puVar1;
  char cVar2;
  bool bVar3;
  undefined8 *puVar4;
  long lVar5;
  
  lVar5 = *(long *)(param_1 + 0x18);
  if (lVar5 != 0) {
    *(undefined8 *)(lVar5 + 0x20) = 0;
    native_sub_4326e0((undefined8 *)(lVar5 + 0x20),0);
    *(undefined8 *)(lVar5 + 0x28) = 0;
    native_sub_4326e0((undefined8 *)(lVar5 + 0x28),0);
  }
  lVar5 = *(long *)(param_1 + 0x20);
  if (lVar5 != 0) {
    *(undefined8 *)(lVar5 + 0x20) = 0;
    native_sub_4326e0((undefined8 *)(lVar5 + 0x20),0);
    puVar4 = (undefined8 *)(lVar5 + 0x28);
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
  return;
}



/* PropertyBinding$$UpdateTarget @ 0x73b6a4
 * void PropertyBinding__UpdateTarget (PropertyBinding_o* __this, const MethodInfo* method); */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* PropertyBinding$$UpdateTarget
   void PropertyBinding__UpdateTarget (PropertyBinding_o* __this, const MethodInfo* method); */

ulong native_PropertyBinding__UpdateTarget_73b6a4(long param_1)

{
  undefined8 uVar1;
  ulong uVar2;
  long lVar3;
  undefined8 uVar4;
  long *plVar5;
  undefined8 uVar6;
  undefined8 uVar7;
  long lVar8;
  long *plVar9;
  long lStack_28;
  
  if ((bRam000000000133f601 & 1) == 0) {
    native_sub_43273c(&System_Type_TypeInfo_12d6340);
    bRam000000000133f601 = 1;
  }
  uVar2 = *(ulong *)(param_1 + 0x18);
  if (((uVar2 == 0) || (*(long *)(param_1 + 0x20) == 0)) ||
     (uVar2 = native_PropertyReference__get_isValid_73b94c(), (uVar2 & 1) == 0)) {
    return uVar2;
  }
  if (*(long *)(param_1 + 0x20) == 0) goto LAB_0073b864;
  uVar2 = native_PropertyReference__get_isValid_73b94c();
  if ((uVar2 & 1) == 0) {
    return uVar2;
  }
  if (*(int *)(param_1 + 0x28) == 0) {
    if (*(long *)(param_1 + 0x18) == 0) goto LAB_0073b864;
    lVar8 = *(long *)(param_1 + 0x20);
    lVar3 = native_PropertyReference__Get_73b9dc();
  }
  else {
    lVar8 = *(long *)(param_1 + 0x18);
    if (*(int *)(param_1 + 0x28) == 1) {
      if (*(long *)(param_1 + 0x20) == 0) goto LAB_0073b864;
      lVar3 = native_PropertyReference__Get_73b9dc();
    }
    else {
      if (lVar8 == 0) goto LAB_0073b864;
      uVar7 = native_PropertyReference__GetPropertyType_73bde4(lVar8);
      if (*(long *)(param_1 + 0x20) == 0) goto LAB_0073b864;
      uVar4 = native_PropertyReference__GetPropertyType_73bde4(*(long *)(param_1 + 0x20));
      if (((*(byte *)(_System_Type_TypeInfo_12d6340 + 0x133) >> 2 & 1) != 0) &&
         (*(int *)(_System_Type_TypeInfo_12d6340 + 0xe0) == 0)) {
        native_sub_4327ec(_System_Type_TypeInfo_12d6340);
      }
      uVar2 = native_System_Type__op_Equality_b117c4(uVar7,uVar4,0);
      if ((uVar2 & 1) == 0) {
        return uVar2;
      }
      if (*(long *)(param_1 + 0x18) == 0) goto LAB_0073b864;
      lVar3 = native_PropertyReference__Get_73b9dc();
      plVar9 = (long *)(param_1 + 0x38);
      plVar5 = (long *)*plVar9;
      if ((plVar5 == (long *)0x0) ||
         (uVar2 = (**(code **)(*plVar5 + 0x138))(plVar5,lVar3,*(undefined8 *)(*plVar5 + 0x140)),
         (uVar2 & 1) == 0)) {
        *(long *)(param_1 + 0x38) = lVar3;
        native_sub_4326e0(plVar9,lVar3);
        lVar8 = *(long *)(param_1 + 0x20);
      }
      else {
        if (*(long *)(param_1 + 0x20) == 0) goto LAB_0073b864;
        lVar3 = native_PropertyReference__Get_73b9dc();
        plVar5 = (long *)*plVar9;
        if (plVar5 == (long *)0x0) goto LAB_0073b864;
        uVar2 = (**(code **)(*plVar5 + 0x138))(plVar5,lVar3,*(undefined8 *)(*plVar5 + 0x140));
        if ((uVar2 & 1) != 0) {
          return uVar2;
        }
        *(long *)(param_1 + 0x38) = lVar3;
        native_sub_4326e0(plVar9,lVar3);
        lVar8 = *(long *)(param_1 + 0x18);
      }
    }
  }
  if (lVar8 == 0) {
LAB_0073b864:
                    /* WARNING: Subroutine does not return */
    native_sub_432810();
  }
  lStack_28 = lVar3;
  if ((bRam000000000133f609 & 1) == 0) {
    native_sub_43273c(&UnityEngine_Debug_TypeInfo_12d4338);
    native_sub_43273c(&StringLiteral__to__12eaf18);
    native_sub_43273c(&StringLiteral_Unable_to_convert__12f2a38);
    bRam000000000133f609 = 1;
  }
  uVar2 = native_System_Reflection_PropertyInfo__op_Equality_aa4fa4
                    (*(undefined8 *)(lVar8 + 0x28),0,0);
  if ((((uVar2 & 1) != 0) &&
      (uVar2 = native_System_Reflection_FieldInfo__op_Equality_bf6ac0
                         (*(undefined8 *)(lVar8 + 0x20),0,0), (uVar2 & 1) != 0)) &&
     (uVar2 = native_PropertyReference__get_isValid_73b94c(lVar8), (uVar2 & 1) != 0)) {
    native_PropertyReference__Cache_73c120(lVar8);
  }
  uVar2 = native_System_Reflection_PropertyInfo__op_Equality_aa4fa4
                    (*(undefined8 *)(lVar8 + 0x28),0,0);
  if (((uVar2 & 1) == 0) ||
     (uVar2 = native_System_Reflection_FieldInfo__op_Equality_bf6ac0
                        (*(undefined8 *)(lVar8 + 0x20),0,0), (uVar2 & 1) == 0)) {
    if (lVar3 == 0) {
      uVar2 = native_System_Reflection_PropertyInfo__op_Inequality_aa4ff0
                        (*(undefined8 *)(lVar8 + 0x28),0,0);
      if ((uVar2 & 1) == 0) {
        if (*(long *)(lVar8 + 0x20) == 0) {
                    /* WARNING: Subroutine does not return */
          native_sub_432810();
        }
        native_System_Reflection_FieldInfo__SetValue_bf691c
                  (*(long *)(lVar8 + 0x20),*(undefined8 *)(lVar8 + 0x10),0,0);
      }
      else {
        plVar5 = *(long **)(lVar8 + 0x28);
        if (plVar5 == (long *)0x0) {
                    /* WARNING: Subroutine does not return */
          native_sub_432810();
        }
        uVar2 = (**(code **)(*plVar5 + 600))(plVar5,*(undefined8 *)(*plVar5 + 0x260));
        if ((uVar2 & 1) == 0) goto LAB_0073bb88;
        plVar5 = *(long **)(lVar8 + 0x28);
        if (plVar5 == (long *)0x0) {
                    /* WARNING: Subroutine does not return */
          native_sub_432810();
        }
        (**(code **)(*plVar5 + 0x2d8))
                  (plVar5,*(undefined8 *)(lVar8 + 0x10),0,0,*(undefined8 *)(*plVar5 + 0x2e0));
      }
    }
    else {
LAB_0073bb88:
      uVar2 = native_PropertyReference__Convert_73c5d8(lVar8,&lStack_28);
      if ((uVar2 & 1) == 0) {
        uVar2 = native_UnityEngine_Application__get_isPlaying_8d60cc(0);
        if ((uVar2 & 1) != 0) {
          if (lStack_28 == 0) goto LAB_0073bd54;
          plVar5 = (long *)native_System_Object__GetType_adb48c(lStack_28,0);
          uVar7 = _StringLiteral_Unable_to_convert__12f2a38;
          if (plVar5 == (long *)0x0) {
            uVar4 = 0;
          }
          else {
            uVar4 = (**(code **)(*plVar5 + 0x168))(plVar5,*(undefined8 *)(*plVar5 + 0x170));
          }
          plVar5 = (long *)native_PropertyReference__GetPropertyType_73bde4(lVar8);
          uVar1 = _StringLiteral__to__12eaf18;
          if (plVar5 == (long *)0x0) {
            uVar6 = 0;
          }
          else {
            uVar6 = (**(code **)(*plVar5 + 0x168))(plVar5,*(undefined8 *)(*plVar5 + 0x170));
          }
          uVar7 = native_System_String__Concat_afcabc(uVar7,uVar4,uVar1,uVar6,0);
          if (((*(byte *)(_UnityEngine_Debug_TypeInfo_12d4338 + 0x133) >> 2 & 1) != 0) &&
             (*(int *)(_UnityEngine_Debug_TypeInfo_12d4338 + 0xe0) == 0)) {
            native_sub_4327ec(_UnityEngine_Debug_TypeInfo_12d4338);
          }
          native_UnityEngine_Debug__LogError_8dc5cc(uVar7,0);
        }
        goto LAB_0073bd40;
      }
      uVar2 = native_System_Reflection_FieldInfo__op_Inequality_bf6e8c
                        (*(undefined8 *)(lVar8 + 0x20),0,0);
      if ((uVar2 & 1) == 0) {
        plVar5 = *(long **)(lVar8 + 0x28);
        if (plVar5 == (long *)0x0) goto LAB_0073bd54;
        uVar2 = (**(code **)(*plVar5 + 600))(plVar5,*(undefined8 *)(*plVar5 + 0x260));
        if ((uVar2 & 1) == 0) goto LAB_0073bd40;
        plVar5 = *(long **)(lVar8 + 0x28);
        if (plVar5 == (long *)0x0) goto LAB_0073bd54;
        (**(code **)(*plVar5 + 0x2d8))
                  (plVar5,*(undefined8 *)(lVar8 + 0x10),lStack_28,0,*(undefined8 *)(*plVar5 + 0x2e0)
                  );
      }
      else {
        if (*(long *)(lVar8 + 0x20) == 0) {
LAB_0073bd54:
                    /* WARNING: Subroutine does not return */
          native_sub_432810();
        }
        native_System_Reflection_FieldInfo__SetValue_bf691c
                  (*(long *)(lVar8 + 0x20),*(undefined8 *)(lVar8 + 0x10),lStack_28,0);
      }
    }
    uVar2 = 1;
  }
  else {
LAB_0073bd40:
    uVar2 = 0;
  }
  return uVar2;
}



/* PropertyBinding$$.ctor @ 0x73bf00
 * void PropertyBinding___ctor (PropertyBinding_o* __this, const MethodInfo* method); */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* PropertyBinding$$.ctor
   void PropertyBinding___ctor (PropertyBinding_o* __this, const MethodInfo* method); */

undefined1  [16] native_PropertyBinding___ctor_73bf00(ulong param_1)

{
  undefined1 auVar1 [16];
  
  *(undefined4 *)(param_1 + 0x2c) = 1;
  *(undefined1 *)(param_1 + 0x30) = 1;
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


