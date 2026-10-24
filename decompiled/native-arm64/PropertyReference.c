/* ARM64 IL2CPP native pseudocode from Ghidra.
 * Recovered implementation, not original C# source.
 * Function boundaries follow the IL2CPP method address table. */


/* PropertyReference$$get_target @ 0x73bf14
 * UnityEngine_Component_o* PropertyReference__get_target (PropertyReference_o* __this, const MethodInfo* method); */

/* PropertyReference$$get_target
   UnityEngine_Component_o* PropertyReference__get_target (PropertyReference_o* __this, const
   MethodInfo* method); */

undefined8 native_PropertyReference__get_target_73bf14(long param_1)

{
  return *(undefined8 *)(param_1 + 0x10);
}



/* PropertyReference$$set_target @ 0x73bf1c
 * void PropertyReference__set_target (PropertyReference_o* __this, UnityEngine_Component_o* value, const MethodInfo* method); */

/* PropertyReference$$set_target
   void PropertyReference__set_target (PropertyReference_o* __this, UnityEngine_Component_o* value,
   const MethodInfo* method); */

void native_PropertyReference__set_target_73bf1c(long param_1,undefined8 param_2)

{
  ulong *puVar1;
  char cVar2;
  bool bVar3;
  undefined8 *puVar4;
  
  *(undefined8 *)(param_1 + 0x10) = param_2;
  native_sub_4326e0();
  *(undefined8 *)(param_1 + 0x28) = 0;
  native_sub_4326e0((undefined8 *)(param_1 + 0x28),0);
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



/* PropertyReference$$get_name @ 0x73bf5c
 * System_String_o* PropertyReference__get_name (PropertyReference_o* __this, const MethodInfo* method); */

/* PropertyReference$$get_name
   System_String_o* PropertyReference__get_name (PropertyReference_o* __this, const MethodInfo*
   method); */

undefined8 native_PropertyReference__get_name_73bf5c(long param_1)

{
  return *(undefined8 *)(param_1 + 0x18);
}



/* PropertyReference$$set_name @ 0x73bf64
 * void PropertyReference__set_name (PropertyReference_o* __this, System_String_o* value, const MethodInfo* method); */

/* PropertyReference$$set_name
   void PropertyReference__set_name (PropertyReference_o* __this, System_String_o* value, const
   MethodInfo* method); */

void native_PropertyReference__set_name_73bf64(long param_1,undefined8 param_2)

{
  ulong *puVar1;
  char cVar2;
  bool bVar3;
  undefined8 *puVar4;
  
  *(undefined8 *)(param_1 + 0x18) = param_2;
  native_sub_4326e0();
  *(undefined8 *)(param_1 + 0x28) = 0;
  native_sub_4326e0((undefined8 *)(param_1 + 0x28),0);
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



/* PropertyReference$$get_isValid @ 0x73b94c
 * bool PropertyReference__get_isValid (PropertyReference_o* __this, const MethodInfo* method); */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* PropertyReference$$get_isValid
   bool PropertyReference__get_isValid (PropertyReference_o* __this, const MethodInfo* method); */

uint native_PropertyReference__get_isValid_73b94c(long param_1)

{
  uint uVar1;
  ulong uVar2;
  undefined8 uVar3;
  
  if ((bRam000000000133f602 & 1) == 0) {
    native_sub_43273c(&UnityEngine_Object_TypeInfo_12d54e0);
    bRam000000000133f602 = 1;
  }
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
  return uVar1 & 1;
}



/* PropertyReference$$get_isEnabled @ 0x73bfa4
 * bool PropertyReference__get_isEnabled (PropertyReference_o* __this, const MethodInfo* method); */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* PropertyReference$$get_isEnabled
   bool PropertyReference__get_isEnabled (PropertyReference_o* __this, const MethodInfo* method); */

undefined8 native_PropertyReference__get_isEnabled_73bfa4(long param_1)

{
  ulong uVar1;
  long *plVar2;
  undefined8 uVar3;
  
  if ((bRam000000000133f603 & 1) == 0) {
    native_sub_43273c(&UnityEngine_MonoBehaviour_TypeInfo_12d52e8);
    native_sub_43273c(&UnityEngine_Object_TypeInfo_12d54e0);
    bRam000000000133f603 = 1;
  }
  uVar3 = *(undefined8 *)(param_1 + 0x10);
  if (((*(byte *)(_UnityEngine_Object_TypeInfo_12d54e0 + 0x133) >> 2 & 1) != 0) &&
     (*(int *)(_UnityEngine_Object_TypeInfo_12d54e0 + 0xe0) == 0)) {
    native_sub_4327ec();
  }
  uVar1 = native_UnityEngine_Object__op_Equality_8e9a3c(uVar3,0,0);
  if ((uVar1 & 1) != 0) {
    return 0;
  }
  plVar2 = *(long **)(param_1 + 0x10);
  if (plVar2 != (long *)0x0) {
    if (*(byte *)(_UnityEngine_MonoBehaviour_TypeInfo_12d52e8 + 300) <= *(byte *)(*plVar2 + 300)) {
      if (*(long *)(*(long *)(*plVar2 + 200) +
                    (ulong)*(byte *)(_UnityEngine_MonoBehaviour_TypeInfo_12d52e8 + 300) * 8 + -8) !=
          _UnityEngine_MonoBehaviour_TypeInfo_12d52e8) {
        plVar2 = (long *)0x0;
      }
      goto LAB_0073c068;
    }
  }
  plVar2 = (long *)0x0;
LAB_0073c068:
  if (((*(byte *)(_UnityEngine_Object_TypeInfo_12d54e0 + 0x133) >> 2 & 1) != 0) &&
     (*(int *)(_UnityEngine_Object_TypeInfo_12d54e0 + 0xe0) == 0)) {
    native_sub_4327ec();
  }
  uVar1 = native_UnityEngine_Object__op_Equality_8e9a3c(plVar2,0,0);
  if ((uVar1 & 1) != 0) {
    return 1;
  }
  if (plVar2 != (long *)0x0) {
    if (pcRam0000000001340940 == (code *)0x0) {
      pcRam0000000001340940 = (code *)native_sub_4326f0(&UNK_00e2c6dd);
    }
                    /* WARNING: Could not recover jumptable at 0x008d7b08. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    uVar3 = (*pcRam0000000001340940)(plVar2);
    return uVar3;
  }
                    /* WARNING: Subroutine does not return */
  native_sub_432810();
}



/* PropertyReference$$.ctor @ 0x73c0c8
 * void PropertyReference___ctor (PropertyReference_o* __this, const MethodInfo* method); */

/* PropertyReference$$.ctor
   void PropertyReference___ctor (PropertyReference_o* __this, const MethodInfo* method); */

void native_PropertyReference___ctor_73c0c8(void)

{
  return;
}



/* PropertyReference$$.ctor @ 0x73c0d0
 * void PropertyReference___ctor (PropertyReference_o* __this, UnityEngine_Component_o* target, System_String_o* fieldName, const MethodInfo* method); */

/* PropertyReference$$.ctor
   void PropertyReference___ctor (PropertyReference_o* __this, UnityEngine_Component_o* target,
   System_String_o* fieldName, const MethodInfo* method); */

void native_PropertyReference___ctor_73c0d0(long param_1,undefined8 param_2,undefined8 param_3)

{
  ulong *puVar1;
  char cVar2;
  bool bVar3;
  undefined8 *puVar4;
  
  native_System_Object___ctor_ad2798(param_1,0);
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



/* PropertyReference$$GetPropertyType @ 0x73bde4
 * System_Type_o* PropertyReference__GetPropertyType (PropertyReference_o* __this, const MethodInfo* method); */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* PropertyReference$$GetPropertyType
   System_Type_o* PropertyReference__GetPropertyType (PropertyReference_o* __this, const MethodInfo*
   method); */

undefined8 native_PropertyReference__GetPropertyType_73bde4(long param_1)

{
  ulong uVar1;
  long *plVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  code *UNRECOVERED_JUMPTABLE;
  
  if ((bRam000000000133f604 & 1) == 0) {
    native_sub_43273c(&System_Type_TypeInfo_12d6340);
    native_sub_43273c(&void_var_12d19f0);
    bRam000000000133f604 = 1;
  }
  uVar1 = native_System_Reflection_PropertyInfo__op_Equality_aa4fa4
                    (*(undefined8 *)(param_1 + 0x28),0,0);
  if ((((uVar1 & 1) != 0) &&
      (uVar1 = native_System_Reflection_FieldInfo__op_Equality_bf6ac0
                         (*(undefined8 *)(param_1 + 0x20),0,0), (uVar1 & 1) != 0)) &&
     (uVar1 = native_PropertyReference__get_isValid_73b94c(param_1), (uVar1 & 1) != 0)) {
    native_PropertyReference__Cache_73c120(param_1);
  }
  uVar1 = native_System_Reflection_PropertyInfo__op_Inequality_aa4ff0
                    (*(undefined8 *)(param_1 + 0x28),0,0);
  if ((uVar1 & 1) == 0) {
    uVar1 = native_System_Reflection_FieldInfo__op_Inequality_bf6e8c
                      (*(undefined8 *)(param_1 + 0x20),0,0);
    uVar4 = _void_var_12d19f0;
    if ((uVar1 & 1) == 0) {
      if (((*(byte *)(_System_Type_TypeInfo_12d6340 + 0x133) >> 2 & 1) != 0) &&
         (*(int *)(_System_Type_TypeInfo_12d6340 + 0xe0) == 0)) {
        native_sub_4327ec();
      }
      if ((bRam000000000134218b & 1) == 0) {
        native_sub_43273c(&IntPtr_TypeInfo_12d4ee0,0);
        native_sub_43273c(&System_Type_TypeInfo_12d6340);
        bRam000000000134218b = 1;
      }
      uVar1 = native_System_IntPtr__op_Equality_83db90(uVar4,0,0);
      uVar3 = 0;
      if ((uVar1 & 1) == 0) {
        if (((*(byte *)(_System_Type_TypeInfo_12d6340 + 0x133) >> 2 & 1) != 0) &&
           (*(int *)(_System_Type_TypeInfo_12d6340 + 0xe0) == 0)) {
          native_sub_4327ec();
        }
        uVar3 = native_sub_3bca1c(uVar4);
      }
      return uVar3;
    }
    plVar2 = *(long **)(param_1 + 0x20);
    if (plVar2 == (long *)0x0) goto LAB_0073befc;
    UNRECOVERED_JUMPTABLE = *(code **)(*plVar2 + 600);
    uVar4 = *(undefined8 *)(*plVar2 + 0x260);
  }
  else {
    plVar2 = *(long **)(param_1 + 0x28);
    if (plVar2 == (long *)0x0) {
LAB_0073befc:
                    /* WARNING: Subroutine does not return */
      native_sub_432810();
    }
    UNRECOVERED_JUMPTABLE = *(code **)(*plVar2 + 0x268);
    uVar4 = *(undefined8 *)(*plVar2 + 0x270);
  }
                    /* WARNING: Could not recover jumptable at 0x0073beb8. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  uVar4 = (*UNRECOVERED_JUMPTABLE)(plVar2,uVar4);
  return uVar4;
}



/* PropertyReference$$Equals @ 0x73c260
 * bool PropertyReference__Equals (PropertyReference_o* __this, Il2CppObject* obj, const MethodInfo* method); */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* PropertyReference$$Equals
   bool PropertyReference__Equals (PropertyReference_o* __this, Il2CppObject* obj, const MethodInfo*
   method); */

uint native_PropertyReference__Equals_73c260(long param_1,long *param_2)

{
  bool bVar1;
  uint uVar2;
  ulong uVar3;
  long lVar4;
  int iVar5;
  long *plVar6;
  long *plVar7;
  int iVar8;
  undefined8 uVar9;
  long lVar10;
  
  if ((bRam000000000133f605 & 1) == 0) {
    native_sub_43273c(&UnityEngine_Object_TypeInfo_12d54e0);
    native_sub_43273c(&PropertyReference_TypeInfo_12d5780);
    bRam000000000133f605 = 1;
  }
  if (param_2 == (long *)0x0) {
    uVar2 = native_PropertyReference__get_isValid_73b94c(param_1);
    uVar2 = uVar2 ^ 1;
  }
  else {
    if ((*(byte *)(_PropertyReference_TypeInfo_12d5780 + 300) <= *(byte *)(*param_2 + 300)) &&
       (*(long *)(*(long *)(*param_2 + 200) +
                  (ulong)*(byte *)(_PropertyReference_TypeInfo_12d5780 + 300) * 8 + -8) ==
        _PropertyReference_TypeInfo_12d5780)) {
      uVar9 = *(undefined8 *)(param_1 + 0x10);
      lVar10 = param_2[2];
      if (((*(byte *)(_UnityEngine_Object_TypeInfo_12d54e0 + 0x133) >> 2 & 1) != 0) &&
         (*(int *)(_UnityEngine_Object_TypeInfo_12d54e0 + 0xe0) == 0)) {
        native_sub_4327ec();
      }
      uVar3 = native_UnityEngine_Object__op_Equality_8e9a3c(uVar9,lVar10,0);
      if ((uVar3 & 1) != 0) {
        lVar10 = *(long *)(param_1 + 0x18);
        lVar4 = param_2[3];
        if (lVar10 == lVar4) {
          uVar2 = 1;
        }
        else {
          uVar2 = 0;
          if ((lVar10 != 0) && (lVar4 != 0)) {
            if (*(int *)(lVar10 + 0x10) == *(int *)(lVar4 + 0x10)) {
              if ((lVar10 == 0) || (lVar4 == 0)) {
                    /* WARNING: Subroutine does not return */
                native_sub_432810(lVar10,lVar4,0);
              }
              iVar5 = *(int *)(lVar10 + 0x10);
              plVar6 = (long *)(lVar10 + 0x14);
              plVar7 = (long *)(lVar4 + 0x14);
              uVar3 = native_System_Environment__get_Is64BitProcess_bf15dc(0);
              if ((uVar3 & 1) == 0) {
                iVar8 = iVar5;
                if (9 < iVar5) {
                  do {
                    if ((int)*plVar6 != (int)*plVar7) {
                      return 0;
                    }
                    if (*(int *)((long)plVar6 + 4) != *(int *)((long)plVar7 + 4)) {
                      return 0;
                    }
                    if ((int)plVar6[1] != (int)plVar7[1]) {
                      return 0;
                    }
                    if (*(int *)((long)plVar6 + 0xc) != *(int *)((long)plVar7 + 0xc)) {
                      return 0;
                    }
                    if ((int)plVar6[2] != (int)plVar7[2]) {
                      return 0;
                    }
                    iVar5 = iVar8 + -10;
                    plVar6 = (long *)((long)plVar6 + 0x14);
                    plVar7 = (long *)((long)plVar7 + 0x14);
                    bVar1 = 0x13 < iVar8;
                    iVar8 = iVar5;
                  } while (bVar1);
                }
              }
              else {
                iVar8 = iVar5;
                if (0xb < iVar5) {
                  do {
                    if (*plVar6 != *plVar7) {
                      return 0;
                    }
                    if (plVar6[1] != plVar7[1]) {
                      return 0;
                    }
                    if (plVar6[2] != plVar7[2]) {
                      return 0;
                    }
                    iVar5 = iVar8 + -0xc;
                    plVar6 = plVar6 + 3;
                    plVar7 = plVar7 + 3;
                    bVar1 = 0x17 < iVar8;
                    iVar8 = iVar5;
                  } while (bVar1);
                }
              }
              if (0 < iVar5) {
                iVar5 = iVar5 + 2;
                do {
                  if ((int)*plVar6 != (int)*plVar7) {
                    return 0;
                  }
                  iVar5 = iVar5 + -2;
                  plVar6 = (long *)((long)plVar6 + 4);
                  plVar7 = (long *)((long)plVar7 + 4);
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
    uVar2 = 0;
  }
  return uVar2 & 1;
}



/* PropertyReference$$GetHashCode @ 0x73c35c
 * int32_t PropertyReference__GetHashCode (PropertyReference_o* __this, const MethodInfo* method); */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* PropertyReference$$GetHashCode
   int32_t PropertyReference__GetHashCode (PropertyReference_o* __this, const MethodInfo* method);
    */

undefined4 native_PropertyReference__GetHashCode_73c35c(void)

{
  if ((bRam000000000133f606 & 1) == 0) {
    native_sub_43273c(&PropertyReference_TypeInfo_12d5780);
    bRam000000000133f606 = 1;
  }
  if (((*(byte *)(_PropertyReference_TypeInfo_12d5780 + 0x133) >> 2 & 1) != 0) &&
     (*(int *)(_PropertyReference_TypeInfo_12d5780 + 0xe0) == 0)) {
    native_sub_4327ec();
  }
  return **(undefined4 **)(_PropertyReference_TypeInfo_12d5780 + 0xb8);
}



/* PropertyReference$$Set @ 0x73c3c0
 * void PropertyReference__Set (PropertyReference_o* __this, UnityEngine_Component_o* target, System_String_o* methodName, const MethodInfo* method); */

/* PropertyReference$$Set
   void PropertyReference__Set (PropertyReference_o* __this, UnityEngine_Component_o* target,
   System_String_o* methodName, const MethodInfo* method); */

void native_PropertyReference__Set_73c3c0(long param_1,undefined8 param_2,undefined8 param_3)

{
  ulong *puVar1;
  char cVar2;
  bool bVar3;
  undefined8 *puVar4;
  
  *(undefined8 *)(param_1 + 0x10) = param_2;
  native_sub_4326e0();
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



/* PropertyReference$$Clear @ 0x73c3f4
 * void PropertyReference__Clear (PropertyReference_o* __this, const MethodInfo* method); */

/* PropertyReference$$Clear
   void PropertyReference__Clear (PropertyReference_o* __this, const MethodInfo* method); */

void native_PropertyReference__Clear_73c3f4(long param_1)

{
  ulong *puVar1;
  char cVar2;
  bool bVar3;
  undefined8 *puVar4;
  
  *(undefined8 *)(param_1 + 0x10) = 0;
  native_sub_4326e0((undefined8 *)(param_1 + 0x10),0);
  puVar4 = (undefined8 *)(param_1 + 0x18);
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



/* PropertyReference$$Reset @ 0x73b918
 * void PropertyReference__Reset (PropertyReference_o* __this, const MethodInfo* method); */

/* PropertyReference$$Reset
   void PropertyReference__Reset (PropertyReference_o* __this, const MethodInfo* method); */

void native_PropertyReference__Reset_73b918(long param_1)

{
  ulong *puVar1;
  char cVar2;
  bool bVar3;
  undefined8 *puVar4;
  
  *(undefined8 *)(param_1 + 0x20) = 0;
  native_sub_4326e0((undefined8 *)(param_1 + 0x20),0);
  puVar4 = (undefined8 *)(param_1 + 0x28);
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



/* PropertyReference$$ToString @ 0x73c428
 * System_String_o* PropertyReference__ToString (PropertyReference_o* __this, const MethodInfo* method); */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* PropertyReference$$ToString
   System_String_o* PropertyReference__ToString (PropertyReference_o* __this, const MethodInfo*
   method); */

long native_PropertyReference__ToString_73c428(long param_1)

{
  bool bVar1;
  bool bVar2;
  int iVar3;
  ulong uVar4;
  long *plVar5;
  long lVar6;
  long lVar7;
  long lVar8;
  long lVar9;
  
  if ((bRam000000000133f607 & 1) == 0) {
    native_sub_43273c(&PropertyReference_TypeInfo_12d5780);
    bRam000000000133f607 = 1;
  }
  lVar6 = *(long *)(param_1 + 0x10);
  lVar7 = *(long *)(param_1 + 0x18);
  if (((*(byte *)(_PropertyReference_TypeInfo_12d5780 + 0x133) >> 2 & 1) != 0) &&
     (*(int *)(_PropertyReference_TypeInfo_12d5780 + 0xe0) == 0)) {
    native_sub_4327ec();
  }
  if ((bRam000000000133f608 & 1) == 0) {
    native_sub_43273c(&UnityEngine_Object_TypeInfo_12d54e0);
    native_sub_43273c(&StringLiteral___property__12eb7d8);
    native_sub_43273c(&StringLiteral___12eb7a0);
    bRam000000000133f608 = 1;
  }
  if (((*(byte *)(_UnityEngine_Object_TypeInfo_12d54e0 + 0x133) >> 2 & 1) != 0) &&
     (*(int *)(_UnityEngine_Object_TypeInfo_12d54e0 + 0xe0) == 0)) {
    native_sub_4327ec();
  }
  uVar4 = native_UnityEngine_Object__op_Inequality_8d76fc(lVar6,0,0);
  if ((uVar4 & 1) == 0) {
    return 0;
  }
  if (((lVar6 == 0) ||
      (plVar5 = (long *)native_System_Object__GetType_adb48c(lVar6,0), plVar5 == (long *)0x0)) ||
     (lVar6 = (**(code **)(*plVar5 + 0x168))(plVar5,*(undefined8 *)(*plVar5 + 0x170)), lVar6 == 0))
  {
                    /* WARNING: Subroutine does not return */
    native_sub_432810();
  }
  iVar3 = native_System_String__LastIndexOf_b0c42c(lVar6,0x2e,0);
  if (0 < iVar3) {
    lVar6 = native_System_String__Substring_b0a110(lVar6,iVar3 + 1,0);
  }
  uVar4 = native_System_String__IsNullOrEmpty_b09430(lVar7,0);
  lVar9 = _StringLiteral___property__12eb7d8;
  lVar8 = _StringLiteral___12eb7a0;
  if ((uVar4 & 1) != 0) {
    if ((bRam000000000134213f & 1) == 0) {
      native_sub_43273c(&string_TypeInfo_12d5f28,_StringLiteral___property__12eb7d8,0);
      bRam000000000134213f = 1;
    }
    if (lVar6 == 0) {
      bVar1 = true;
    }
    else {
      bVar1 = *(int *)(lVar6 + 0x10) == 0;
    }
    if (lVar9 == 0) {
      bVar2 = true;
    }
    else {
      bVar2 = *(int *)(lVar9 + 0x10) == 0;
    }
    if (bVar1) {
      lVar6 = lVar9;
      if (bVar2) {
        lVar6 = **(long **)(_string_TypeInfo_12d5f28 + 0xb8);
      }
    }
    else if (!bVar2) {
      if ((lVar6 == 0) || (lVar9 == 0)) {
                    /* WARNING: Subroutine does not return */
        native_sub_432810();
      }
      iVar3 = *(int *)(lVar6 + 0x10);
      lVar7 = native_sub_3bca18(*(int *)(lVar9 + 0x10) + iVar3);
      native_System_String__FillStringChecked_b0a62c(lVar7,0,lVar6);
      native_System_String__FillStringChecked_b0a62c(lVar7,iVar3,lVar9);
      lVar6 = lVar7;
    }
    return lVar6;
  }
  if ((bRam0000000001342140 & 1) == 0) {
    native_sub_43273c(&string_TypeInfo_12d5f28,_StringLiteral___12eb7a0,lVar7,0);
    bRam0000000001342140 = 1;
  }
  if ((lVar6 != 0) ||
     (lVar9 = **(long **)(_string_TypeInfo_12d5f28 + 0xb8), lVar6 = lVar9, lVar8 != 0 || lVar7 != 0)
     ) {
    if (lVar8 == 0) {
      lVar8 = **(long **)(_string_TypeInfo_12d5f28 + 0xb8);
    }
    if (lVar7 == 0) {
      lVar7 = **(long **)(_string_TypeInfo_12d5f28 + 0xb8);
    }
    if (((lVar6 == 0) || (lVar8 == 0)) || (lVar7 == 0)) {
                    /* WARNING: Subroutine does not return */
      native_sub_432810();
    }
    lVar9 = native_sub_3bca18(*(int *)(lVar8 + 0x10) + *(int *)(lVar6 + 0x10) +
                              *(int *)(lVar7 + 0x10));
    native_System_String__FillStringChecked_b0a62c(lVar9,0,lVar6);
    native_System_String__FillStringChecked_b0a62c(lVar9,*(undefined4 *)(lVar6 + 0x10),lVar8);
    native_System_String__FillStringChecked_b0a62c
              (lVar9,*(int *)(lVar8 + 0x10) + *(int *)(lVar6 + 0x10),lVar7);
  }
  return lVar9;
}



/* PropertyReference$$ToString @ 0x73c490
 * System_String_o* PropertyReference__ToString (UnityEngine_Component_o* comp, System_String_o* property, const MethodInfo* method); */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* PropertyReference$$ToString
   System_String_o* PropertyReference__ToString (UnityEngine_Component_o* comp, System_String_o*
   property, const MethodInfo* method); */

long native_PropertyReference__ToString_73c490(long param_1,long param_2)

{
  bool bVar1;
  bool bVar2;
  int iVar3;
  ulong uVar4;
  long *plVar5;
  long lVar6;
  long lVar7;
  long lVar8;
  
  if ((bRam000000000133f608 & 1) == 0) {
    native_sub_43273c(&UnityEngine_Object_TypeInfo_12d54e0);
    native_sub_43273c(&StringLiteral___property__12eb7d8);
    native_sub_43273c(&StringLiteral___12eb7a0);
    bRam000000000133f608 = 1;
  }
  if (((*(byte *)(_UnityEngine_Object_TypeInfo_12d54e0 + 0x133) >> 2 & 1) != 0) &&
     (*(int *)(_UnityEngine_Object_TypeInfo_12d54e0 + 0xe0) == 0)) {
    native_sub_4327ec();
  }
  uVar4 = native_UnityEngine_Object__op_Inequality_8d76fc(param_1,0,0);
  if ((uVar4 & 1) == 0) {
    return 0;
  }
  if (((param_1 == 0) ||
      (plVar5 = (long *)native_System_Object__GetType_adb48c(param_1,0), plVar5 == (long *)0x0)) ||
     (lVar6 = (**(code **)(*plVar5 + 0x168))(plVar5,*(undefined8 *)(*plVar5 + 0x170)), lVar6 == 0))
  {
                    /* WARNING: Subroutine does not return */
    native_sub_432810();
  }
  iVar3 = native_System_String__LastIndexOf_b0c42c(lVar6,0x2e,0);
  if (0 < iVar3) {
    lVar6 = native_System_String__Substring_b0a110(lVar6,iVar3 + 1,0);
  }
  uVar4 = native_System_String__IsNullOrEmpty_b09430(param_2,0);
  lVar8 = _StringLiteral___property__12eb7d8;
  lVar7 = _StringLiteral___12eb7a0;
  if ((uVar4 & 1) != 0) {
    if ((bRam000000000134213f & 1) == 0) {
      native_sub_43273c(&string_TypeInfo_12d5f28,_StringLiteral___property__12eb7d8,0);
      bRam000000000134213f = 1;
    }
    if (lVar6 == 0) {
      bVar1 = true;
    }
    else {
      bVar1 = *(int *)(lVar6 + 0x10) == 0;
    }
    if (lVar8 == 0) {
      bVar2 = true;
    }
    else {
      bVar2 = *(int *)(lVar8 + 0x10) == 0;
    }
    if (bVar1) {
      lVar6 = lVar8;
      if (bVar2) {
        lVar6 = **(long **)(_string_TypeInfo_12d5f28 + 0xb8);
      }
    }
    else if (!bVar2) {
      if ((lVar6 == 0) || (lVar8 == 0)) {
                    /* WARNING: Subroutine does not return */
        native_sub_432810();
      }
      iVar3 = *(int *)(lVar6 + 0x10);
      lVar7 = native_sub_3bca18(*(int *)(lVar8 + 0x10) + iVar3);
      native_System_String__FillStringChecked_b0a62c(lVar7,0,lVar6);
      native_System_String__FillStringChecked_b0a62c(lVar7,iVar3,lVar8);
      lVar6 = lVar7;
    }
    return lVar6;
  }
  if ((bRam0000000001342140 & 1) == 0) {
    native_sub_43273c(&string_TypeInfo_12d5f28,_StringLiteral___12eb7a0,param_2,0);
    bRam0000000001342140 = 1;
  }
  if ((lVar6 != 0) ||
     (lVar8 = **(long **)(_string_TypeInfo_12d5f28 + 0xb8), lVar6 = lVar8,
     lVar7 != 0 || param_2 != 0)) {
    if (lVar7 == 0) {
      lVar7 = **(long **)(_string_TypeInfo_12d5f28 + 0xb8);
    }
    if (param_2 == 0) {
      param_2 = **(long **)(_string_TypeInfo_12d5f28 + 0xb8);
    }
    if (((lVar6 == 0) || (lVar7 == 0)) || (param_2 == 0)) {
                    /* WARNING: Subroutine does not return */
      native_sub_432810();
    }
    lVar8 = native_sub_3bca18(*(int *)(lVar7 + 0x10) + *(int *)(lVar6 + 0x10) +
                              *(int *)(param_2 + 0x10));
    native_System_String__FillStringChecked_b0a62c(lVar8,0,lVar6);
    native_System_String__FillStringChecked_b0a62c(lVar8,*(undefined4 *)(lVar6 + 0x10),lVar7);
    native_System_String__FillStringChecked_b0a62c
              (lVar8,*(int *)(lVar7 + 0x10) + *(int *)(lVar6 + 0x10),param_2);
  }
  return lVar8;
}



/* PropertyReference$$Get @ 0x73b9dc
 * Il2CppObject* PropertyReference__Get (PropertyReference_o* __this, const MethodInfo* method); */

/* PropertyReference$$Get
   Il2CppObject* PropertyReference__Get (PropertyReference_o* __this, const MethodInfo* method); */

undefined8 native_PropertyReference__Get_73b9dc(long param_1)

{
  ulong uVar1;
  long *plVar2;
  undefined8 uVar3;
  
  uVar1 = native_System_Reflection_PropertyInfo__op_Equality_aa4fa4
                    (*(undefined8 *)(param_1 + 0x28),0,0);
  if ((((uVar1 & 1) != 0) &&
      (uVar1 = native_System_Reflection_FieldInfo__op_Equality_bf6ac0
                         (*(undefined8 *)(param_1 + 0x20),0,0), (uVar1 & 1) != 0)) &&
     (uVar1 = native_PropertyReference__get_isValid_73b94c(param_1), (uVar1 & 1) != 0)) {
    native_PropertyReference__Cache_73c120(param_1);
  }
  uVar1 = native_System_Reflection_PropertyInfo__op_Inequality_aa4ff0
                    (*(undefined8 *)(param_1 + 0x28),0,0);
  if ((uVar1 & 1) == 0) {
    uVar1 = native_System_Reflection_FieldInfo__op_Inequality_bf6e8c
                      (*(undefined8 *)(param_1 + 0x20),0,0);
    if ((uVar1 & 1) == 0) {
      return 0;
    }
    plVar2 = *(long **)(param_1 + 0x20);
    if (plVar2 != (long *)0x0) {
                    /* WARNING: Could not recover jumptable at 0x0073bab4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
      uVar3 = (**(code **)(*plVar2 + 0x268))
                        (plVar2,*(undefined8 *)(param_1 + 0x10),*(undefined8 *)(*plVar2 + 0x270));
      return uVar3;
    }
  }
  else {
    plVar2 = *(long **)(param_1 + 0x28);
    if (plVar2 != (long *)0x0) {
      uVar1 = (**(code **)(*plVar2 + 0x248))(plVar2,*(undefined8 *)(*plVar2 + 0x250));
      if ((uVar1 & 1) == 0) {
        return 0;
      }
      plVar2 = *(long **)(param_1 + 0x28);
      if (plVar2 != (long *)0x0) {
                    /* WARNING: Could not recover jumptable at 0x0073ba7c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
        uVar3 = (**(code **)(*plVar2 + 0x2b8))
                          (plVar2,*(undefined8 *)(param_1 + 0x10),0,*(undefined8 *)(*plVar2 + 0x2c0)
                          );
        return uVar3;
      }
    }
  }
                    /* WARNING: Subroutine does not return */
  native_sub_432810();
}



/* PropertyReference$$Set @ 0x73bacc
 * bool PropertyReference__Set (PropertyReference_o* __this, Il2CppObject* value, const MethodInfo* method); */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* PropertyReference$$Set
   bool PropertyReference__Set (PropertyReference_o* __this, Il2CppObject* value, const MethodInfo*
   method); */

undefined8 native_PropertyReference__Set_73bacc(long param_1,long param_2)

{
  undefined8 uVar1;
  ulong uVar2;
  undefined8 uVar3;
  long *plVar4;
  undefined8 uVar5;
  undefined8 uVar6;
  long lStack_28;
  
  lStack_28 = param_2;
  if ((bRam000000000133f609 & 1) == 0) {
    native_sub_43273c(&UnityEngine_Debug_TypeInfo_12d4338);
    native_sub_43273c(&StringLiteral__to__12eaf18);
    native_sub_43273c(&StringLiteral_Unable_to_convert__12f2a38);
    bRam000000000133f609 = 1;
  }
  uVar2 = native_System_Reflection_PropertyInfo__op_Equality_aa4fa4
                    (*(undefined8 *)(param_1 + 0x28),0,0);
  if ((((uVar2 & 1) != 0) &&
      (uVar2 = native_System_Reflection_FieldInfo__op_Equality_bf6ac0
                         (*(undefined8 *)(param_1 + 0x20),0,0), (uVar2 & 1) != 0)) &&
     (uVar2 = native_PropertyReference__get_isValid_73b94c(param_1), (uVar2 & 1) != 0)) {
    native_PropertyReference__Cache_73c120(param_1);
  }
  uVar2 = native_System_Reflection_PropertyInfo__op_Equality_aa4fa4
                    (*(undefined8 *)(param_1 + 0x28),0,0);
  if (((uVar2 & 1) == 0) ||
     (uVar2 = native_System_Reflection_FieldInfo__op_Equality_bf6ac0
                        (*(undefined8 *)(param_1 + 0x20),0,0), (uVar2 & 1) == 0)) {
    if (param_2 == 0) {
      uVar2 = native_System_Reflection_PropertyInfo__op_Inequality_aa4ff0
                        (*(undefined8 *)(param_1 + 0x28),0,0);
      if ((uVar2 & 1) == 0) {
        if (*(long *)(param_1 + 0x20) == 0) {
                    /* WARNING: Subroutine does not return */
          native_sub_432810();
        }
        native_System_Reflection_FieldInfo__SetValue_bf691c
                  (*(long *)(param_1 + 0x20),*(undefined8 *)(param_1 + 0x10),0,0);
      }
      else {
        plVar4 = *(long **)(param_1 + 0x28);
        if (plVar4 == (long *)0x0) {
                    /* WARNING: Subroutine does not return */
          native_sub_432810();
        }
        uVar2 = (**(code **)(*plVar4 + 600))(plVar4,*(undefined8 *)(*plVar4 + 0x260));
        if ((uVar2 & 1) == 0) goto LAB_0073bb88;
        plVar4 = *(long **)(param_1 + 0x28);
        if (plVar4 == (long *)0x0) {
                    /* WARNING: Subroutine does not return */
          native_sub_432810();
        }
        (**(code **)(*plVar4 + 0x2d8))
                  (plVar4,*(undefined8 *)(param_1 + 0x10),0,0,*(undefined8 *)(*plVar4 + 0x2e0));
      }
    }
    else {
LAB_0073bb88:
      uVar2 = native_PropertyReference__Convert_73c5d8(param_1,&lStack_28);
      if ((uVar2 & 1) == 0) {
        uVar2 = native_UnityEngine_Application__get_isPlaying_8d60cc(0);
        if ((uVar2 & 1) != 0) {
          if (lStack_28 == 0) goto LAB_0073bd54;
          plVar4 = (long *)native_System_Object__GetType_adb48c(lStack_28,0);
          uVar5 = _StringLiteral_Unable_to_convert__12f2a38;
          if (plVar4 == (long *)0x0) {
            uVar3 = 0;
          }
          else {
            uVar3 = (**(code **)(*plVar4 + 0x168))(plVar4,*(undefined8 *)(*plVar4 + 0x170));
          }
          plVar4 = (long *)native_PropertyReference__GetPropertyType_73bde4(param_1);
          uVar1 = _StringLiteral__to__12eaf18;
          if (plVar4 == (long *)0x0) {
            uVar6 = 0;
          }
          else {
            uVar6 = (**(code **)(*plVar4 + 0x168))(plVar4,*(undefined8 *)(*plVar4 + 0x170));
          }
          uVar5 = native_System_String__Concat_afcabc(uVar5,uVar3,uVar1,uVar6,0);
          if (((*(byte *)(_UnityEngine_Debug_TypeInfo_12d4338 + 0x133) >> 2 & 1) != 0) &&
             (*(int *)(_UnityEngine_Debug_TypeInfo_12d4338 + 0xe0) == 0)) {
            native_sub_4327ec(_UnityEngine_Debug_TypeInfo_12d4338);
          }
          native_UnityEngine_Debug__LogError_8dc5cc(uVar5,0);
        }
        goto LAB_0073bd40;
      }
      uVar2 = native_System_Reflection_FieldInfo__op_Inequality_bf6e8c
                        (*(undefined8 *)(param_1 + 0x20),0,0);
      if ((uVar2 & 1) == 0) {
        plVar4 = *(long **)(param_1 + 0x28);
        if (plVar4 == (long *)0x0) goto LAB_0073bd54;
        uVar2 = (**(code **)(*plVar4 + 600))(plVar4,*(undefined8 *)(*plVar4 + 0x260));
        if ((uVar2 & 1) == 0) goto LAB_0073bd40;
        plVar4 = *(long **)(param_1 + 0x28);
        if (plVar4 == (long *)0x0) goto LAB_0073bd54;
        (**(code **)(*plVar4 + 0x2d8))
                  (plVar4,*(undefined8 *)(param_1 + 0x10),lStack_28,0,
                   *(undefined8 *)(*plVar4 + 0x2e0));
      }
      else {
        if (*(long *)(param_1 + 0x20) == 0) {
LAB_0073bd54:
                    /* WARNING: Subroutine does not return */
          native_sub_432810();
        }
        native_System_Reflection_FieldInfo__SetValue_bf691c
                  (*(long *)(param_1 + 0x20),*(undefined8 *)(param_1 + 0x10),lStack_28,0);
      }
    }
    uVar5 = 1;
  }
  else {
LAB_0073bd40:
    uVar5 = 0;
  }
  return uVar5;
}



/* PropertyReference$$Cache @ 0x73c120
 * bool PropertyReference__Cache (PropertyReference_o* __this, const MethodInfo* method); */

/* WARNING: Removing unreachable block (ram,0x00aa502c) */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* PropertyReference$$Cache
   bool PropertyReference__Cache (PropertyReference_o* __this, const MethodInfo* method); */

undefined4 native_PropertyReference__Cache_73c120(long param_1)

{
  ulong uVar1;
  long lVar2;
  undefined4 uVar3;
  undefined8 uVar4;
  
  if ((bRam000000000133f60a & 1) == 0) {
    native_sub_43273c(&UnityEngine_Object_TypeInfo_12d54e0);
    bRam000000000133f60a = 1;
  }
  uVar4 = *(undefined8 *)(param_1 + 0x10);
  if (((*(byte *)(_UnityEngine_Object_TypeInfo_12d54e0 + 0x133) >> 2 & 1) != 0) &&
     (*(int *)(_UnityEngine_Object_TypeInfo_12d54e0 + 0xe0) == 0)) {
    native_sub_4327ec();
  }
  uVar1 = native_UnityEngine_Object__op_Inequality_8d76fc(uVar4,0,0);
  if (((uVar1 & 1) == 0) ||
     (uVar1 = native_System_String__IsNullOrEmpty_b09430(*(undefined8 *)(param_1 + 0x18),0),
     (uVar1 & 1) != 0)) {
    *(undefined8 *)(param_1 + 0x20) = 0;
    native_sub_4326e0((undefined8 *)(param_1 + 0x20),0);
    *(undefined8 *)(param_1 + 0x28) = 0;
    uVar4 = 0;
  }
  else {
    if ((*(long *)(param_1 + 0x10) == 0) ||
       (lVar2 = native_System_Object__GetType_adb48c(*(long *)(param_1 + 0x10),0), lVar2 == 0)) {
                    /* WARNING: Subroutine does not return */
      native_sub_432810();
    }
    uVar4 = native_System_Type__GetField_b121d4(lVar2,*(undefined8 *)(param_1 + 0x18),0);
    *(undefined8 *)(param_1 + 0x20) = uVar4;
    native_sub_4326e0(param_1 + 0x20,uVar4);
    uVar4 = native_System_Type__GetProperty_b1240c(lVar2,*(undefined8 *)(param_1 + 0x18),0);
    *(undefined8 *)(param_1 + 0x28) = uVar4;
  }
  native_sub_4326e0(param_1 + 0x28,uVar4);
  uVar1 = native_System_Reflection_FieldInfo__op_Inequality_bf6e8c
                    (*(undefined8 *)(param_1 + 0x20),0,0);
  if ((uVar1 & 1) != 0) {
    return 1;
  }
  if (*(long *)(param_1 + 0x28) == 0) {
    uVar3 = 0;
  }
  else {
    if (*(long *)(param_1 + 0x28) == 0) {
                    /* WARNING: Subroutine does not return */
      native_sub_432810(0,0,0);
    }
    uVar3 = 1;
  }
  return uVar3;
}



/* PropertyReference$$Convert @ 0x73c5d8
 * bool PropertyReference__Convert (PropertyReference_o* __this, Il2CppObject** value, const MethodInfo* method); */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* PropertyReference$$Convert
   bool PropertyReference__Convert (PropertyReference_o* __this, Il2CppObject** value, const
   MethodInfo* method); */

uint native_PropertyReference__Convert_73c5d8(long param_1,long *param_2)

{
  undefined8 uVar1;
  undefined4 uVar2;
  uint uVar3;
  ulong uVar4;
  long *plVar5;
  long *plVar6;
  long lVar7;
  undefined4 *puVar8;
  double *pdVar9;
  float *pfVar10;
  int *piVar11;
  long *plVar12;
  undefined8 uVar13;
  float fVar14;
  double dVar15;
  double dVar16;
  undefined1 auVar17 [16];
  undefined8 uStack_98;
  long *plStack_90;
  long *plStack_88;
  undefined1 *puStack_80;
  code *pcStack_78;
  double dStack_70;
  undefined8 uStack_68;
  double dStack_58;
  
  if ((bRam000000000133f60b & 1) == 0) {
    native_sub_43273c(&UnityEngine_Object_TypeInfo_12d54e0);
    native_sub_43273c(&PropertyReference_TypeInfo_12d5780);
    bRam000000000133f60b = 1;
  }
  uVar13 = *(undefined8 *)(param_1 + 0x10);
  if (((*(byte *)(_UnityEngine_Object_TypeInfo_12d54e0 + 0x133) >> 2 & 1) != 0) &&
     (*(int *)(_UnityEngine_Object_TypeInfo_12d54e0 + 0xe0) == 0)) {
    native_sub_4327ec();
  }
  uVar4 = native_UnityEngine_Object__op_Equality_8e9a3c(uVar13,0,0);
  if ((uVar4 & 1) != 0) {
    return 0;
  }
  plVar5 = (long *)native_PropertyReference__GetPropertyType_73bde4(param_1);
  if (*param_2 == 0) {
    if (plVar5 == (long *)0x0) {
                    /* WARNING: Subroutine does not return */
      native_sub_432810();
    }
    uVar4 = native_System_Type__get_IsClass_b126b4(plVar5,0);
    plVar6 = plVar5;
    if ((uVar4 & 1) == 0) {
      return 0;
    }
  }
  else {
    plVar6 = (long *)native_System_Object__GetType_adb48c(*param_2,0);
  }
  if (((*(byte *)(_PropertyReference_TypeInfo_12d5780 + 0x133) >> 2 & 1) != 0) &&
     (*(int *)(_PropertyReference_TypeInfo_12d5780 + 0xe0) == 0)) {
    native_sub_4327ec();
  }
  if ((bRam000000000133f60e & 1) == 0) {
    native_sub_43273c(&double_var_12d1440);
    native_sub_43273c(&double_TypeInfo_12d4478);
    native_sub_43273c(&int_var_12d1610);
    native_sub_43273c(&int_TypeInfo_12d4ec0);
    native_sub_43273c(&System_Math_TypeInfo_12d51c0);
    native_sub_43273c(&float_var_12d1848);
    native_sub_43273c(&float_TypeInfo_12d5db0);
    native_sub_43273c(&string_var_12d1878);
    native_sub_43273c(&string_TypeInfo_12d5f28);
    native_sub_43273c(&System_Type_TypeInfo_12d6340);
    native_sub_43273c(&StringLiteral_null_12f59e8);
    bRam000000000133f60e = 1;
  }
  dStack_70 = 0.0;
  uStack_68 = 0;
  if (plVar5 == (long *)0x0) goto LAB_0073cee4;
  uVar4 = (**(code **)(*plVar5 + 0x7e8))(plVar5,plVar6,*(undefined8 *)(*plVar5 + 0x7f0));
  uVar13 = _string_var_12d1878;
  if ((uVar4 & 1) != 0) {
    return 1;
  }
  if (((*(byte *)(_System_Type_TypeInfo_12d6340 + 0x133) >> 2 & 1) != 0) &&
     (*(int *)(_System_Type_TypeInfo_12d6340 + 0xe0) == 0)) {
    native_sub_4327ec();
  }
  uVar13 = native_System_Type__GetTypeFromHandle_b0fb24(uVar13,0);
  uVar4 = native_System_Type__op_Equality_b117c4(plVar5,uVar13,0);
  uVar13 = _int_var_12d1610;
  plVar12 = (long *)*param_2;
  if ((uVar4 & 1) != 0) {
    lVar7 = _StringLiteral_null_12f59e8;
    if (plVar12 != (long *)0x0) {
      lVar7 = (**(code **)(*plVar12 + 0x168))(plVar12,*(undefined8 *)(*plVar12 + 0x170));
    }
    *param_2 = lVar7;
    goto LAB_0073c910;
  }
  if (plVar12 == (long *)0x0) {
    return 0;
  }
  if (((*(byte *)(_System_Type_TypeInfo_12d6340 + 0x133) >> 2 & 1) != 0) &&
     (*(int *)(_System_Type_TypeInfo_12d6340 + 0xe0) == 0)) {
    native_sub_4327ec();
  }
  uVar13 = native_System_Type__GetTypeFromHandle_b0fb24(uVar13,0);
  uVar4 = native_System_Type__op_Equality_b117c4(plVar5,uVar13,0);
  uVar1 = _string_var_12d1878;
  uVar13 = _float_var_12d1848;
  if ((uVar4 & 1) == 0) {
    if (((*(byte *)(_System_Type_TypeInfo_12d6340 + 0x133) >> 2 & 1) != 0) &&
       (*(int *)(_System_Type_TypeInfo_12d6340 + 0xe0) == 0)) {
      native_sub_4327ec();
    }
    uVar13 = native_System_Type__GetTypeFromHandle_b0fb24(uVar13,0);
    uVar4 = native_System_Type__op_Equality_b117c4(plVar5,uVar13,0);
    uVar1 = _string_var_12d1878;
    uVar13 = _double_var_12d1440;
    if ((uVar4 & 1) == 0) {
      if (((*(byte *)(_System_Type_TypeInfo_12d6340 + 0x133) >> 2 & 1) != 0) &&
         (*(int *)(_System_Type_TypeInfo_12d6340 + 0xe0) == 0)) {
        native_sub_4327ec();
      }
      uVar13 = native_System_Type__GetTypeFromHandle_b0fb24(uVar13,0);
      uVar4 = native_System_Type__op_Equality_b117c4(plVar5,uVar13,0);
      uVar13 = _string_var_12d1878;
      if ((uVar4 & 1) == 0) {
        return 0;
      }
      if (((*(byte *)(_System_Type_TypeInfo_12d6340 + 0x133) >> 2 & 1) != 0) &&
         (*(int *)(_System_Type_TypeInfo_12d6340 + 0xe0) == 0)) {
        native_sub_4327ec();
      }
      uVar13 = native_System_Type__GetTypeFromHandle_b0fb24(uVar13,0);
      uVar4 = native_System_Type__op_Equality_b117c4(plVar6,uVar13,0);
      uVar13 = _float_var_12d1848;
      if ((uVar4 & 1) != 0) {
        plVar6 = (long *)*param_2;
        if (((*(byte *)(_double_TypeInfo_12d4478 + 0x133) >> 2 & 1) != 0) &&
           (*(int *)(_double_TypeInfo_12d4478 + 0xe0) == 0)) {
          native_sub_4327ec();
        }
        if ((plVar6 != (long *)0x0) && (*plVar6 != _string_TypeInfo_12d5f28)) goto LAB_0073ceec;
        uVar4 = native_System_Double__TryParse_a70418(plVar6,&dStack_70,0);
        if ((uVar4 & 1) == 0) {
          return 0;
        }
        dStack_58 = dStack_70;
        lVar7 = _double_TypeInfo_12d4478;
LAB_0073ca9c:
        lVar7 = native_sub_4327fc(lVar7,&dStack_58);
        *param_2 = lVar7;
LAB_0073c910:
        native_sub_4326e0(param_2,lVar7);
        return 1;
      }
      if (((*(byte *)(_System_Type_TypeInfo_12d6340 + 0x133) >> 2 & 1) != 0) &&
         (*(int *)(_System_Type_TypeInfo_12d6340 + 0xe0) == 0)) {
        native_sub_4327ec();
      }
      uVar13 = native_System_Type__GetTypeFromHandle_b0fb24(uVar13,0);
      uVar4 = native_System_Type__op_Equality_b117c4(plVar6,uVar13,0);
      uVar13 = _int_var_12d1610;
      if ((uVar4 & 1) == 0) {
        if (((*(byte *)(_System_Type_TypeInfo_12d6340 + 0x133) >> 2 & 1) != 0) &&
           (*(int *)(_System_Type_TypeInfo_12d6340 + 0xe0) == 0)) {
          native_sub_4327ec();
        }
        uVar13 = native_System_Type__GetTypeFromHandle_b0fb24(uVar13,0);
        uVar4 = native_System_Type__op_Equality_b117c4(plVar6,uVar13,0);
        if ((uVar4 & 1) == 0) {
          return 0;
        }
        if ((long *)*param_2 == (long *)0x0) goto LAB_0073cee4;
        if (*(long *)(*(long *)*param_2 + 0x40) == *(long *)(_int_TypeInfo_12d4ec0 + 0x40)) {
          piVar11 = (int *)native_sub_432800();
          dStack_58 = (double)*piVar11;
          lVar7 = _double_TypeInfo_12d4478;
          goto LAB_0073cec4;
        }
      }
      else {
        if ((long *)*param_2 == (long *)0x0) goto LAB_0073cee4;
        if (*(long *)(*(long *)*param_2 + 0x40) == *(long *)(_float_TypeInfo_12d5db0 + 0x40)) {
          pfVar10 = (float *)native_sub_432800();
          dStack_58 = (double)*pfVar10;
          lVar7 = _double_TypeInfo_12d4478;
          goto LAB_0073cec4;
        }
      }
    }
    else {
      if (((*(byte *)(_System_Type_TypeInfo_12d6340 + 0x133) >> 2 & 1) != 0) &&
         (*(int *)(_System_Type_TypeInfo_12d6340 + 0xe0) == 0)) {
        native_sub_4327ec();
      }
      uVar13 = native_System_Type__GetTypeFromHandle_b0fb24(uVar1,0);
      uVar4 = native_System_Type__op_Equality_b117c4(plVar6,uVar13,0);
      uVar13 = _double_var_12d1440;
      if ((uVar4 & 1) == 0) {
        if (((*(byte *)(_System_Type_TypeInfo_12d6340 + 0x133) >> 2 & 1) != 0) &&
           (*(int *)(_System_Type_TypeInfo_12d6340 + 0xe0) == 0)) {
          native_sub_4327ec();
        }
        uVar13 = native_System_Type__GetTypeFromHandle_b0fb24(uVar13,0);
        uVar4 = native_System_Type__op_Equality_b117c4(plVar6,uVar13,0);
        uVar13 = _int_var_12d1610;
        if ((uVar4 & 1) == 0) {
          if (((*(byte *)(_System_Type_TypeInfo_12d6340 + 0x133) >> 2 & 1) != 0) &&
             (*(int *)(_System_Type_TypeInfo_12d6340 + 0xe0) == 0)) {
            native_sub_4327ec();
          }
          uVar13 = native_System_Type__GetTypeFromHandle_b0fb24(uVar13,0);
          uVar4 = native_System_Type__op_Equality_b117c4(plVar6,uVar13,0);
          if ((uVar4 & 1) == 0) {
            return 0;
          }
          if ((long *)*param_2 == (long *)0x0) goto LAB_0073cee4;
          if (*(long *)(*(long *)*param_2 + 0x40) == *(long *)(_int_TypeInfo_12d4ec0 + 0x40)) {
            piVar11 = (int *)native_sub_432800();
            fVar14 = (float)*piVar11;
LAB_0073cdd0:
            dStack_58 = (double)CONCAT44(dStack_58._4_4_,fVar14);
            lVar7 = _float_TypeInfo_12d5db0;
            goto LAB_0073cec4;
          }
        }
        else {
          if ((long *)*param_2 == (long *)0x0) goto LAB_0073cee4;
          if (*(long *)(*(long *)*param_2 + 0x40) == *(long *)(_double_TypeInfo_12d4478 + 0x40)) {
            pdVar9 = (double *)native_sub_432800();
            fVar14 = (float)*pdVar9;
            goto LAB_0073cdd0;
          }
        }
      }
      else {
        plVar5 = (long *)*param_2;
        if ((plVar5 == (long *)0x0) || (*plVar5 == _string_TypeInfo_12d5f28)) {
          uVar4 = native_System_Single__TryParse_af8aac(plVar5,&uStack_68,0);
          if ((uVar4 & 1) == 0) {
            return 0;
          }
          plVar5 = (long *)&float_TypeInfo_12d5db0;
          uVar2 = (undefined4)uStack_68;
          goto LAB_0073c9f8;
        }
      }
    }
  }
  else {
    if (((*(byte *)(_System_Type_TypeInfo_12d6340 + 0x133) >> 2 & 1) != 0) &&
       (*(int *)(_System_Type_TypeInfo_12d6340 + 0xe0) == 0)) {
      native_sub_4327ec();
    }
    uVar13 = native_System_Type__GetTypeFromHandle_b0fb24(uVar1,0);
    uVar4 = native_System_Type__op_Equality_b117c4(plVar6,uVar13,0);
    uVar13 = _float_var_12d1848;
    if ((uVar4 & 1) == 0) {
      if (((*(byte *)(_System_Type_TypeInfo_12d6340 + 0x133) >> 2 & 1) != 0) &&
         (*(int *)(_System_Type_TypeInfo_12d6340 + 0xe0) == 0)) {
        native_sub_4327ec();
      }
      uVar13 = native_System_Type__GetTypeFromHandle_b0fb24(uVar13,0);
      uVar4 = native_System_Type__op_Equality_b117c4(plVar6,uVar13,0);
      uVar13 = _double_var_12d1440;
      if ((uVar4 & 1) == 0) {
        if (((*(byte *)(_System_Type_TypeInfo_12d6340 + 0x133) >> 2 & 1) != 0) &&
           (*(int *)(_System_Type_TypeInfo_12d6340 + 0xe0) == 0)) {
          native_sub_4327ec();
        }
        uVar13 = native_System_Type__GetTypeFromHandle_b0fb24(uVar13,0);
        uVar4 = native_System_Type__op_Equality_b117c4(plVar6,uVar13,0);
        if ((uVar4 & 1) == 0) {
          return 0;
        }
        plVar6 = (long *)*param_2;
        if (((*(byte *)(_System_Math_TypeInfo_12d51c0 + 0x133) >> 2 & 1) != 0) &&
           (*(int *)(_System_Math_TypeInfo_12d51c0 + 0xe0) == 0)) {
          native_sub_4327ec();
        }
        if (plVar6 == (long *)0x0) goto LAB_0073cee4;
        if (*(long *)(*plVar6 + 0x40) != *(long *)(_double_TypeInfo_12d4478 + 0x40))
        goto LAB_0073ceec;
        pdVar9 = (double *)native_sub_432800(plVar6);
        dVar16 = *pdVar9;
        dVar15 = (double)func_0x002c9600(dVar16,&dStack_58);
        if (0.0 <= dVar16) {
          if (dVar15 == 0.5) {
            dVar15 = 1.0;
            goto LAB_0073ce74;
          }
          dVar16 = (double)(long)(dVar16 + 0.5);
        }
        else if (dVar15 == -0.5) {
          dVar15 = -1.0;
LAB_0073ce74:
          dVar16 = dStack_58;
          if (((long)dStack_58 & 1U) != 0) {
            dVar16 = dStack_58 + dVar15;
          }
        }
        else {
          dVar16 = (double)(long)(dVar16 + -0.5);
        }
        dVar15 = -dVar16;
        if (dVar16 != INFINITY) {
          dVar15 = dVar16;
        }
        dStack_58 = (double)CONCAT44(dStack_58._4_4_,(int)dVar15);
        lVar7 = _int_TypeInfo_12d4ec0;
LAB_0073cec4:
        lVar7 = native_sub_4327fc(lVar7,&dStack_58);
        *param_2 = lVar7;
        native_sub_4326e0(param_2,lVar7);
        return 0;
      }
      if ((long *)*param_2 == (long *)0x0) {
LAB_0073cee4:
                    /* WARNING: Subroutine does not return */
        native_sub_432810();
      }
      if (*(long *)(*(long *)*param_2 + 0x40) == *(long *)(_float_TypeInfo_12d5db0 + 0x40)) {
        puVar8 = (undefined4 *)native_sub_432800();
        uVar2 = native_UnityEngine_Mathf__RoundToInt_8e50f0(*puVar8,0);
        dStack_58 = (double)CONCAT44(dStack_58._4_4_,uVar2);
        lVar7 = _int_TypeInfo_12d4ec0;
        goto LAB_0073ca9c;
      }
    }
    else {
      plVar5 = (long *)*param_2;
      if ((plVar5 == (long *)0x0) || (*plVar5 == _string_TypeInfo_12d5f28)) {
        uVar4 = native_System_Int32__TryParse_83c7f0(plVar5,(long)&uStack_68 + 4,0);
        if ((uVar4 & 1) == 0) {
          return 0;
        }
        plVar5 = (long *)&int_TypeInfo_12d4ec0;
        uVar2 = uStack_68._4_4_;
LAB_0073c9f8:
        lVar7 = *plVar5;
        dStack_58 = (double)CONCAT44(dStack_58._4_4_,uVar2);
        goto LAB_0073ca9c;
      }
    }
  }
  native_sub_432b04();
LAB_0073ceec:
  auVar17 = native_sub_432b04(plVar6);
  pcStack_78 = native_PropertyReference__Convert_73cef4;
  plStack_90 = plVar6;
  plStack_88 = param_2;
  puStack_80 = &stack0xfffffffffffffff0;
  if ((bRam000000000133f60c & 1) == 0) {
    native_sub_43273c(&PropertyReference_TypeInfo_12d5780);
    bRam000000000133f60c = 1;
  }
  uStack_98 = 0;
  if (((*(byte *)(_PropertyReference_TypeInfo_12d5780 + 0x133) >> 2 & 1) != 0) &&
     (*(int *)(_PropertyReference_TypeInfo_12d5780 + 0xe0) == 0)) {
    native_sub_4327ec();
  }
  uVar3 = native_PropertyReference__Convert_73c6e8(&uStack_98,auVar17._0_8_,auVar17._8_8_);
  return uVar3 & 1;
}



/* PropertyReference$$Convert @ 0x73cef4
 * bool PropertyReference__Convert (System_Type_o* from, System_Type_o* to, const MethodInfo* method); */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* PropertyReference$$Convert
   bool PropertyReference__Convert (System_Type_o* from, System_Type_o* to, const MethodInfo*
   method); */

uint native_PropertyReference__Convert_73cef4(undefined8 param_1,undefined8 param_2)

{
  uint uVar1;
  undefined8 uStack_28;
  
  if ((bRam000000000133f60c & 1) == 0) {
    native_sub_43273c(&PropertyReference_TypeInfo_12d5780);
    bRam000000000133f60c = 1;
  }
  uStack_28 = 0;
  if (((*(byte *)(_PropertyReference_TypeInfo_12d5780 + 0x133) >> 2 & 1) != 0) &&
     (*(int *)(_PropertyReference_TypeInfo_12d5780 + 0xe0) == 0)) {
    native_sub_4327ec();
  }
  uVar1 = native_PropertyReference__Convert_73c6e8(&uStack_28,param_1,param_2);
  return uVar1 & 1;
}



/* PropertyReference$$Convert @ 0x73cf74
 * bool PropertyReference__Convert (Il2CppObject* value, System_Type_o* to, const MethodInfo* method); */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* PropertyReference$$Convert
   bool PropertyReference__Convert (Il2CppObject* value, System_Type_o* to, const MethodInfo*
   method); */

uint native_PropertyReference__Convert_73cf74(long param_1,undefined8 param_2)

{
  uint uVar1;
  undefined8 uVar2;
  long lStack_28;
  
  lStack_28 = param_1;
  if ((bRam000000000133f60d & 1) == 0) {
    native_sub_43273c(&PropertyReference_TypeInfo_12d5780);
    bRam000000000133f60d = 1;
  }
  if (param_1 == 0) {
    lStack_28 = 0;
    uVar2 = param_2;
    if (((*(byte *)(_PropertyReference_TypeInfo_12d5780 + 0x133) >> 2 & 1) != 0) &&
       (*(int *)(_PropertyReference_TypeInfo_12d5780 + 0xe0) == 0)) {
      native_sub_4327ec();
    }
  }
  else {
    uVar2 = native_System_Object__GetType_adb48c(param_1,0);
    if (((*(byte *)(_PropertyReference_TypeInfo_12d5780 + 0x133) >> 2 & 1) != 0) &&
       (*(int *)(_PropertyReference_TypeInfo_12d5780 + 0xe0) == 0)) {
      native_sub_4327ec(_PropertyReference_TypeInfo_12d5780);
    }
  }
  uVar1 = native_PropertyReference__Convert_73c6e8(&lStack_28,uVar2,param_2);
  return uVar1 & 1;
}



/* PropertyReference$$Convert @ 0x73c6e8
 * bool PropertyReference__Convert (Il2CppObject** value, System_Type_o* from, System_Type_o* to, const MethodInfo* method); */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* PropertyReference$$Convert
   bool PropertyReference__Convert (Il2CppObject** value, System_Type_o* from, System_Type_o* to,
   const MethodInfo* method); */

uint native_PropertyReference__Convert_73c6e8(long *param_1,long *param_2,long *param_3)

{
  undefined8 uVar1;
  undefined4 uVar2;
  uint uVar3;
  ulong uVar4;
  undefined8 uVar5;
  long lVar6;
  undefined4 *puVar7;
  double *pdVar8;
  float *pfVar9;
  int *piVar10;
  long *plVar11;
  float fVar12;
  double dVar13;
  double dVar14;
  undefined1 auVar15 [16];
  undefined8 uStack_98;
  long *plStack_90;
  long *plStack_88;
  undefined1 *puStack_80;
  code *pcStack_78;
  double dStack_70;
  undefined8 uStack_68;
  double dStack_58;
  
  if ((bRam000000000133f60e & 1) == 0) {
    native_sub_43273c(&double_var_12d1440);
    native_sub_43273c(&double_TypeInfo_12d4478);
    native_sub_43273c(&int_var_12d1610);
    native_sub_43273c(&int_TypeInfo_12d4ec0);
    native_sub_43273c(&System_Math_TypeInfo_12d51c0);
    native_sub_43273c(&float_var_12d1848);
    native_sub_43273c(&float_TypeInfo_12d5db0);
    native_sub_43273c(&string_var_12d1878);
    native_sub_43273c(&string_TypeInfo_12d5f28);
    native_sub_43273c(&System_Type_TypeInfo_12d6340);
    native_sub_43273c(&StringLiteral_null_12f59e8);
    bRam000000000133f60e = 1;
  }
  dStack_70 = 0.0;
  uStack_68 = 0;
  if (param_3 == (long *)0x0) goto LAB_0073cee4;
  uVar4 = (**(code **)(*param_3 + 0x7e8))(param_3,param_2,*(undefined8 *)(*param_3 + 0x7f0));
  uVar5 = _string_var_12d1878;
  if ((uVar4 & 1) != 0) {
    return 1;
  }
  if (((*(byte *)(_System_Type_TypeInfo_12d6340 + 0x133) >> 2 & 1) != 0) &&
     (*(int *)(_System_Type_TypeInfo_12d6340 + 0xe0) == 0)) {
    native_sub_4327ec();
  }
  uVar5 = native_System_Type__GetTypeFromHandle_b0fb24(uVar5,0);
  uVar4 = native_System_Type__op_Equality_b117c4(param_3,uVar5,0);
  uVar5 = _int_var_12d1610;
  plVar11 = (long *)*param_1;
  if ((uVar4 & 1) != 0) {
    lVar6 = _StringLiteral_null_12f59e8;
    if (plVar11 != (long *)0x0) {
      lVar6 = (**(code **)(*plVar11 + 0x168))(plVar11,*(undefined8 *)(*plVar11 + 0x170));
    }
    *param_1 = lVar6;
    goto LAB_0073c910;
  }
  if (plVar11 == (long *)0x0) {
    return 0;
  }
  if (((*(byte *)(_System_Type_TypeInfo_12d6340 + 0x133) >> 2 & 1) != 0) &&
     (*(int *)(_System_Type_TypeInfo_12d6340 + 0xe0) == 0)) {
    native_sub_4327ec();
  }
  uVar5 = native_System_Type__GetTypeFromHandle_b0fb24(uVar5,0);
  uVar4 = native_System_Type__op_Equality_b117c4(param_3,uVar5,0);
  uVar1 = _string_var_12d1878;
  uVar5 = _float_var_12d1848;
  if ((uVar4 & 1) == 0) {
    if (((*(byte *)(_System_Type_TypeInfo_12d6340 + 0x133) >> 2 & 1) != 0) &&
       (*(int *)(_System_Type_TypeInfo_12d6340 + 0xe0) == 0)) {
      native_sub_4327ec();
    }
    uVar5 = native_System_Type__GetTypeFromHandle_b0fb24(uVar5,0);
    uVar4 = native_System_Type__op_Equality_b117c4(param_3,uVar5,0);
    uVar1 = _string_var_12d1878;
    uVar5 = _double_var_12d1440;
    if ((uVar4 & 1) == 0) {
      if (((*(byte *)(_System_Type_TypeInfo_12d6340 + 0x133) >> 2 & 1) != 0) &&
         (*(int *)(_System_Type_TypeInfo_12d6340 + 0xe0) == 0)) {
        native_sub_4327ec();
      }
      uVar5 = native_System_Type__GetTypeFromHandle_b0fb24(uVar5,0);
      uVar4 = native_System_Type__op_Equality_b117c4(param_3,uVar5,0);
      uVar5 = _string_var_12d1878;
      if ((uVar4 & 1) == 0) {
        return 0;
      }
      if (((*(byte *)(_System_Type_TypeInfo_12d6340 + 0x133) >> 2 & 1) != 0) &&
         (*(int *)(_System_Type_TypeInfo_12d6340 + 0xe0) == 0)) {
        native_sub_4327ec();
      }
      uVar5 = native_System_Type__GetTypeFromHandle_b0fb24(uVar5,0);
      uVar4 = native_System_Type__op_Equality_b117c4(param_2,uVar5,0);
      uVar5 = _float_var_12d1848;
      if ((uVar4 & 1) != 0) {
        param_2 = (long *)*param_1;
        if (((*(byte *)(_double_TypeInfo_12d4478 + 0x133) >> 2 & 1) != 0) &&
           (*(int *)(_double_TypeInfo_12d4478 + 0xe0) == 0)) {
          native_sub_4327ec();
        }
        if ((param_2 != (long *)0x0) && (*param_2 != _string_TypeInfo_12d5f28)) goto LAB_0073ceec;
        uVar4 = native_System_Double__TryParse_a70418(param_2,&dStack_70,0);
        if ((uVar4 & 1) == 0) {
          return 0;
        }
        dStack_58 = dStack_70;
        lVar6 = _double_TypeInfo_12d4478;
LAB_0073ca9c:
        lVar6 = native_sub_4327fc(lVar6,&dStack_58);
        *param_1 = lVar6;
LAB_0073c910:
        native_sub_4326e0(param_1,lVar6);
        return 1;
      }
      if (((*(byte *)(_System_Type_TypeInfo_12d6340 + 0x133) >> 2 & 1) != 0) &&
         (*(int *)(_System_Type_TypeInfo_12d6340 + 0xe0) == 0)) {
        native_sub_4327ec();
      }
      uVar5 = native_System_Type__GetTypeFromHandle_b0fb24(uVar5,0);
      uVar4 = native_System_Type__op_Equality_b117c4(param_2,uVar5,0);
      uVar5 = _int_var_12d1610;
      if ((uVar4 & 1) == 0) {
        if (((*(byte *)(_System_Type_TypeInfo_12d6340 + 0x133) >> 2 & 1) != 0) &&
           (*(int *)(_System_Type_TypeInfo_12d6340 + 0xe0) == 0)) {
          native_sub_4327ec();
        }
        uVar5 = native_System_Type__GetTypeFromHandle_b0fb24(uVar5,0);
        uVar4 = native_System_Type__op_Equality_b117c4(param_2,uVar5,0);
        if ((uVar4 & 1) == 0) {
          return 0;
        }
        if ((long *)*param_1 == (long *)0x0) goto LAB_0073cee4;
        if (*(long *)(*(long *)*param_1 + 0x40) == *(long *)(_int_TypeInfo_12d4ec0 + 0x40)) {
          piVar10 = (int *)native_sub_432800();
          dStack_58 = (double)*piVar10;
          lVar6 = _double_TypeInfo_12d4478;
          goto LAB_0073cec4;
        }
      }
      else {
        if ((long *)*param_1 == (long *)0x0) goto LAB_0073cee4;
        if (*(long *)(*(long *)*param_1 + 0x40) == *(long *)(_float_TypeInfo_12d5db0 + 0x40)) {
          pfVar9 = (float *)native_sub_432800();
          dStack_58 = (double)*pfVar9;
          lVar6 = _double_TypeInfo_12d4478;
          goto LAB_0073cec4;
        }
      }
    }
    else {
      if (((*(byte *)(_System_Type_TypeInfo_12d6340 + 0x133) >> 2 & 1) != 0) &&
         (*(int *)(_System_Type_TypeInfo_12d6340 + 0xe0) == 0)) {
        native_sub_4327ec();
      }
      uVar5 = native_System_Type__GetTypeFromHandle_b0fb24(uVar1,0);
      uVar4 = native_System_Type__op_Equality_b117c4(param_2,uVar5,0);
      uVar5 = _double_var_12d1440;
      if ((uVar4 & 1) == 0) {
        if (((*(byte *)(_System_Type_TypeInfo_12d6340 + 0x133) >> 2 & 1) != 0) &&
           (*(int *)(_System_Type_TypeInfo_12d6340 + 0xe0) == 0)) {
          native_sub_4327ec();
        }
        uVar5 = native_System_Type__GetTypeFromHandle_b0fb24(uVar5,0);
        uVar4 = native_System_Type__op_Equality_b117c4(param_2,uVar5,0);
        uVar5 = _int_var_12d1610;
        if ((uVar4 & 1) == 0) {
          if (((*(byte *)(_System_Type_TypeInfo_12d6340 + 0x133) >> 2 & 1) != 0) &&
             (*(int *)(_System_Type_TypeInfo_12d6340 + 0xe0) == 0)) {
            native_sub_4327ec();
          }
          uVar5 = native_System_Type__GetTypeFromHandle_b0fb24(uVar5,0);
          uVar4 = native_System_Type__op_Equality_b117c4(param_2,uVar5,0);
          if ((uVar4 & 1) == 0) {
            return 0;
          }
          if ((long *)*param_1 == (long *)0x0) goto LAB_0073cee4;
          if (*(long *)(*(long *)*param_1 + 0x40) == *(long *)(_int_TypeInfo_12d4ec0 + 0x40)) {
            piVar10 = (int *)native_sub_432800();
            fVar12 = (float)*piVar10;
LAB_0073cdd0:
            dStack_58 = (double)CONCAT44(dStack_58._4_4_,fVar12);
            lVar6 = _float_TypeInfo_12d5db0;
            goto LAB_0073cec4;
          }
        }
        else {
          if ((long *)*param_1 == (long *)0x0) goto LAB_0073cee4;
          if (*(long *)(*(long *)*param_1 + 0x40) == *(long *)(_double_TypeInfo_12d4478 + 0x40)) {
            pdVar8 = (double *)native_sub_432800();
            fVar12 = (float)*pdVar8;
            goto LAB_0073cdd0;
          }
        }
      }
      else {
        plVar11 = (long *)*param_1;
        if ((plVar11 == (long *)0x0) || (*plVar11 == _string_TypeInfo_12d5f28)) {
          uVar4 = native_System_Single__TryParse_af8aac(plVar11,&uStack_68,0);
          if ((uVar4 & 1) == 0) {
            return 0;
          }
          plVar11 = (long *)&float_TypeInfo_12d5db0;
          uVar2 = (undefined4)uStack_68;
          goto LAB_0073c9f8;
        }
      }
    }
  }
  else {
    if (((*(byte *)(_System_Type_TypeInfo_12d6340 + 0x133) >> 2 & 1) != 0) &&
       (*(int *)(_System_Type_TypeInfo_12d6340 + 0xe0) == 0)) {
      native_sub_4327ec();
    }
    uVar5 = native_System_Type__GetTypeFromHandle_b0fb24(uVar1,0);
    uVar4 = native_System_Type__op_Equality_b117c4(param_2,uVar5,0);
    uVar5 = _float_var_12d1848;
    if ((uVar4 & 1) == 0) {
      if (((*(byte *)(_System_Type_TypeInfo_12d6340 + 0x133) >> 2 & 1) != 0) &&
         (*(int *)(_System_Type_TypeInfo_12d6340 + 0xe0) == 0)) {
        native_sub_4327ec();
      }
      uVar5 = native_System_Type__GetTypeFromHandle_b0fb24(uVar5,0);
      uVar4 = native_System_Type__op_Equality_b117c4(param_2,uVar5,0);
      uVar5 = _double_var_12d1440;
      if ((uVar4 & 1) == 0) {
        if (((*(byte *)(_System_Type_TypeInfo_12d6340 + 0x133) >> 2 & 1) != 0) &&
           (*(int *)(_System_Type_TypeInfo_12d6340 + 0xe0) == 0)) {
          native_sub_4327ec();
        }
        uVar5 = native_System_Type__GetTypeFromHandle_b0fb24(uVar5,0);
        uVar4 = native_System_Type__op_Equality_b117c4(param_2,uVar5,0);
        if ((uVar4 & 1) == 0) {
          return 0;
        }
        param_2 = (long *)*param_1;
        if (((*(byte *)(_System_Math_TypeInfo_12d51c0 + 0x133) >> 2 & 1) != 0) &&
           (*(int *)(_System_Math_TypeInfo_12d51c0 + 0xe0) == 0)) {
          native_sub_4327ec();
        }
        if (param_2 == (long *)0x0) goto LAB_0073cee4;
        if (*(long *)(*param_2 + 0x40) != *(long *)(_double_TypeInfo_12d4478 + 0x40))
        goto LAB_0073ceec;
        pdVar8 = (double *)native_sub_432800(param_2);
        dVar14 = *pdVar8;
        dVar13 = (double)func_0x002c9600(dVar14,&dStack_58);
        if (0.0 <= dVar14) {
          if (dVar13 == 0.5) {
            dVar13 = 1.0;
            goto LAB_0073ce74;
          }
          dVar14 = (double)(long)(dVar14 + 0.5);
        }
        else if (dVar13 == -0.5) {
          dVar13 = -1.0;
LAB_0073ce74:
          dVar14 = dStack_58;
          if (((long)dStack_58 & 1U) != 0) {
            dVar14 = dStack_58 + dVar13;
          }
        }
        else {
          dVar14 = (double)(long)(dVar14 + -0.5);
        }
        dVar13 = -dVar14;
        if (dVar14 != INFINITY) {
          dVar13 = dVar14;
        }
        dStack_58 = (double)CONCAT44(dStack_58._4_4_,(int)dVar13);
        lVar6 = _int_TypeInfo_12d4ec0;
LAB_0073cec4:
        lVar6 = native_sub_4327fc(lVar6,&dStack_58);
        *param_1 = lVar6;
        native_sub_4326e0(param_1,lVar6);
        return 0;
      }
      if ((long *)*param_1 == (long *)0x0) {
LAB_0073cee4:
                    /* WARNING: Subroutine does not return */
        native_sub_432810();
      }
      if (*(long *)(*(long *)*param_1 + 0x40) == *(long *)(_float_TypeInfo_12d5db0 + 0x40)) {
        puVar7 = (undefined4 *)native_sub_432800();
        uVar2 = native_UnityEngine_Mathf__RoundToInt_8e50f0(*puVar7,0);
        dStack_58 = (double)CONCAT44(dStack_58._4_4_,uVar2);
        lVar6 = _int_TypeInfo_12d4ec0;
        goto LAB_0073ca9c;
      }
    }
    else {
      plVar11 = (long *)*param_1;
      if ((plVar11 == (long *)0x0) || (*plVar11 == _string_TypeInfo_12d5f28)) {
        uVar4 = native_System_Int32__TryParse_83c7f0(plVar11,(long)&uStack_68 + 4,0);
        if ((uVar4 & 1) == 0) {
          return 0;
        }
        plVar11 = (long *)&int_TypeInfo_12d4ec0;
        uVar2 = uStack_68._4_4_;
LAB_0073c9f8:
        lVar6 = *plVar11;
        dStack_58 = (double)CONCAT44(dStack_58._4_4_,uVar2);
        goto LAB_0073ca9c;
      }
    }
  }
  native_sub_432b04();
LAB_0073ceec:
  auVar15 = native_sub_432b04(param_2);
  pcStack_78 = native_PropertyReference__Convert_73cef4;
  plStack_90 = param_2;
  plStack_88 = param_1;
  puStack_80 = &stack0xfffffffffffffff0;
  if ((bRam000000000133f60c & 1) == 0) {
    native_sub_43273c(&PropertyReference_TypeInfo_12d5780);
    bRam000000000133f60c = 1;
  }
  uStack_98 = 0;
  if (((*(byte *)(_PropertyReference_TypeInfo_12d5780 + 0x133) >> 2 & 1) != 0) &&
     (*(int *)(_PropertyReference_TypeInfo_12d5780 + 0xe0) == 0)) {
    native_sub_4327ec();
  }
  uVar3 = native_PropertyReference__Convert_73c6e8(&uStack_98,auVar15._0_8_,auVar15._8_8_);
  return uVar3 & 1;
}



/* PropertyReference$$.cctor @ 0x73d040
 * void PropertyReference___cctor (const MethodInfo* method); */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* PropertyReference$$.cctor
   void PropertyReference___cctor (const MethodInfo* method); */

void native_PropertyReference___cctor_73d040(void)

{
  undefined4 uVar1;
  
  if ((bRam000000000133f60f & 1) == 0) {
    native_sub_43273c(&PropertyReference_TypeInfo_12d5780);
    native_sub_43273c(&StringLiteral_PropertyBinding_12f0710);
    bRam000000000133f60f = 1;
  }
  if (_StringLiteral_PropertyBinding_12f0710 != (long *)0x0) {
    uVar1 = (**(code **)(*_StringLiteral_PropertyBinding_12f0710 + 0x158))
                      (_StringLiteral_PropertyBinding_12f0710,
                       *(undefined8 *)(*_StringLiteral_PropertyBinding_12f0710 + 0x160));
    **(undefined4 **)(_PropertyReference_TypeInfo_12d5780 + 0xb8) = uVar1;
    return;
  }
                    /* WARNING: Subroutine does not return */
  native_sub_432810();
}


