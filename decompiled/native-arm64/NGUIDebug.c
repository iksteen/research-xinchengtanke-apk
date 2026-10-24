/* ARM64 IL2CPP native pseudocode from Ghidra.
 * Recovered implementation, not original C# source.
 * Function boundaries follow the IL2CPP method address table. */


/* NGUIDebug$$get_debugRaycast @ 0x7fed18
 * bool NGUIDebug__get_debugRaycast (const MethodInfo* method); */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* NGUIDebug$$get_debugRaycast
   bool NGUIDebug__get_debugRaycast (const MethodInfo* method); */

undefined1 native_NGUIDebug__get_debugRaycast_7fed18(void)

{
  if ((bRam0000000001340422 & 1) == 0) {
    native_sub_43273c(&NGUIDebug_TypeInfo_12d53a8);
    bRam0000000001340422 = 1;
  }
  if (((*(byte *)(_NGUIDebug_TypeInfo_12d53a8 + 0x133) >> 2 & 1) != 0) &&
     (*(int *)(_NGUIDebug_TypeInfo_12d53a8 + 0xe0) == 0)) {
    native_sub_4327ec();
  }
  return **(undefined1 **)(_NGUIDebug_TypeInfo_12d53a8 + 0xb8);
}



/* NGUIDebug$$set_debugRaycast @ 0x7fed7c
 * void NGUIDebug__set_debugRaycast (bool value, const MethodInfo* method); */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* NGUIDebug$$set_debugRaycast
   void NGUIDebug__set_debugRaycast (bool value, const MethodInfo* method); */

void native_NGUIDebug__set_debugRaycast_7fed7c(byte param_1)

{
  ulong uVar1;
  long lVar2;
  undefined8 *puVar3;
  undefined8 uVar4;
  
  if ((bRam0000000001340423 & 1) == 0) {
    native_sub_43273c(&NGUIDebug_TypeInfo_12d53a8);
    bRam0000000001340423 = 1;
  }
  if (((*(byte *)(_NGUIDebug_TypeInfo_12d53a8 + 0x133) >> 2 & 1) != 0) &&
     (*(int *)(_NGUIDebug_TypeInfo_12d53a8 + 0xe0) == 0)) {
    native_sub_4327ec();
  }
  **(byte **)(_NGUIDebug_TypeInfo_12d53a8 + 0xb8) = param_1 & 1;
  if (((param_1 & 1) == 0) ||
     (uVar1 = native_UnityEngine_Application__get_isPlaying_8d60cc(0), (uVar1 & 1) == 0)) {
    return;
  }
  if (((*(byte *)(_NGUIDebug_TypeInfo_12d53a8 + 0x133) >> 2 & 1) != 0) &&
     (*(int *)(_NGUIDebug_TypeInfo_12d53a8 + 0xe0) == 0)) {
    native_sub_4327ec();
  }
  if ((bRam0000000001340424 & 1) == 0) {
    native_sub_43273c(&Method_UnityEngine_GameObject_AddComponent_NGUIDebug____12e4820);
    native_sub_43273c(&UnityEngine_GameObject_TypeInfo_12d47d8);
    native_sub_43273c(&NGUIDebug_TypeInfo_12d53a8);
    native_sub_43273c(&UnityEngine_Object_TypeInfo_12d54e0);
    native_sub_43273c(&StringLiteral__NGUI_Debug_12f3628);
    bRam0000000001340424 = 1;
  }
  if (((*(byte *)(_NGUIDebug_TypeInfo_12d53a8 + 0x133) >> 2 & 1) != 0) &&
     (*(int *)(_NGUIDebug_TypeInfo_12d53a8 + 0xe0) == 0)) {
    native_sub_4327ec();
  }
  uVar4 = *(undefined8 *)(*(long *)(_NGUIDebug_TypeInfo_12d53a8 + 0xb8) + 0x10);
  if (((*(byte *)(_UnityEngine_Object_TypeInfo_12d54e0 + 0x133) >> 2 & 1) != 0) &&
     (*(int *)(_UnityEngine_Object_TypeInfo_12d54e0 + 0xe0) == 0)) {
    native_sub_4327ec(_UnityEngine_Object_TypeInfo_12d54e0);
  }
  uVar1 = native_UnityEngine_Object__op_Equality_8e9a3c(uVar4,0,0);
  if ((uVar1 & 1) != 0) {
    lVar2 = native_sub_432808(_UnityEngine_GameObject_TypeInfo_12d47d8);
    native_UnityEngine_GameObject___ctor_8de828(lVar2,_StringLiteral__NGUI_Debug_12f3628,0);
    if (lVar2 != 0) {
      uVar4 = native_UnityEngine_GameObject__AddComponent_ActiveAnimation__4a2118
                        (lVar2,_Method_UnityEngine_GameObject_AddComponent_NGUIDebug____12e4820);
      if (((*(byte *)(_NGUIDebug_TypeInfo_12d53a8 + 0x133) >> 2 & 1) != 0) &&
         (*(int *)(_NGUIDebug_TypeInfo_12d53a8 + 0xe0) == 0)) {
        native_sub_4327ec(_NGUIDebug_TypeInfo_12d53a8);
      }
      puVar3 = (undefined8 *)(*(long *)(_NGUIDebug_TypeInfo_12d53a8 + 0xb8) + 0x10);
      *puVar3 = uVar4;
      native_sub_4326e0(puVar3,uVar4);
      if (((*(byte *)(_UnityEngine_Object_TypeInfo_12d54e0 + 0x133) >> 2 & 1) != 0) &&
         (*(int *)(_UnityEngine_Object_TypeInfo_12d54e0 + 0xe0) == 0)) {
        native_sub_4327ec();
      }
      if (pcRam0000000001341068 == (code *)0x0) {
        pcRam0000000001341068 = (code *)native_sub_4326f0(&UNK_00e2f897);
      }
                    /* WARNING: Could not recover jumptable at 0x008ea7dc. Too many branches */
                    /* WARNING: Treating indirect jump as call */
      (*pcRam0000000001341068)(lVar2);
      return;
    }
                    /* WARNING: Subroutine does not return */
    native_sub_432810();
  }
  return;
}



/* NGUIDebug$$CreateInstance @ 0x7fee1c
 * void NGUIDebug__CreateInstance (const MethodInfo* method); */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* NGUIDebug$$CreateInstance
   void NGUIDebug__CreateInstance (const MethodInfo* method); */

void native_NGUIDebug__CreateInstance_7fee1c(void)

{
  ulong uVar1;
  long lVar2;
  undefined8 *puVar3;
  undefined8 uVar4;
  
  if ((bRam0000000001340424 & 1) == 0) {
    native_sub_43273c(&Method_UnityEngine_GameObject_AddComponent_NGUIDebug____12e4820);
    native_sub_43273c(&UnityEngine_GameObject_TypeInfo_12d47d8);
    native_sub_43273c(&NGUIDebug_TypeInfo_12d53a8);
    native_sub_43273c(&UnityEngine_Object_TypeInfo_12d54e0);
    native_sub_43273c(&StringLiteral__NGUI_Debug_12f3628);
    bRam0000000001340424 = 1;
  }
  if (((*(byte *)(_NGUIDebug_TypeInfo_12d53a8 + 0x133) >> 2 & 1) != 0) &&
     (*(int *)(_NGUIDebug_TypeInfo_12d53a8 + 0xe0) == 0)) {
    native_sub_4327ec();
  }
  uVar4 = *(undefined8 *)(*(long *)(_NGUIDebug_TypeInfo_12d53a8 + 0xb8) + 0x10);
  if (((*(byte *)(_UnityEngine_Object_TypeInfo_12d54e0 + 0x133) >> 2 & 1) != 0) &&
     (*(int *)(_UnityEngine_Object_TypeInfo_12d54e0 + 0xe0) == 0)) {
    native_sub_4327ec(_UnityEngine_Object_TypeInfo_12d54e0);
  }
  uVar1 = native_UnityEngine_Object__op_Equality_8e9a3c(uVar4,0,0);
  if ((uVar1 & 1) != 0) {
    lVar2 = native_sub_432808(_UnityEngine_GameObject_TypeInfo_12d47d8);
    native_UnityEngine_GameObject___ctor_8de828(lVar2,_StringLiteral__NGUI_Debug_12f3628,0);
    if (lVar2 != 0) {
      uVar4 = native_UnityEngine_GameObject__AddComponent_ActiveAnimation__4a2118
                        (lVar2,_Method_UnityEngine_GameObject_AddComponent_NGUIDebug____12e4820);
      if (((*(byte *)(_NGUIDebug_TypeInfo_12d53a8 + 0x133) >> 2 & 1) != 0) &&
         (*(int *)(_NGUIDebug_TypeInfo_12d53a8 + 0xe0) == 0)) {
        native_sub_4327ec(_NGUIDebug_TypeInfo_12d53a8);
      }
      puVar3 = (undefined8 *)(*(long *)(_NGUIDebug_TypeInfo_12d53a8 + 0xb8) + 0x10);
      *puVar3 = uVar4;
      native_sub_4326e0(puVar3,uVar4);
      if (((*(byte *)(_UnityEngine_Object_TypeInfo_12d54e0 + 0x133) >> 2 & 1) != 0) &&
         (*(int *)(_UnityEngine_Object_TypeInfo_12d54e0 + 0xe0) == 0)) {
        native_sub_4327ec();
      }
      if (pcRam0000000001341068 == (code *)0x0) {
        pcRam0000000001341068 = (code *)native_sub_4326f0(&UNK_00e2f897);
      }
                    /* WARNING: Could not recover jumptable at 0x008ea7dc. Too many branches */
                    /* WARNING: Treating indirect jump as call */
      (*pcRam0000000001341068)(lVar2);
      return;
    }
                    /* WARNING: Subroutine does not return */
    native_sub_432810();
  }
  return;
}



/* NGUIDebug$$LogString @ 0x7fef98
 * void NGUIDebug__LogString (System_String_o* text, const MethodInfo* method); */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* NGUIDebug$$LogString
   void NGUIDebug__LogString (System_String_o* text, const MethodInfo* method); */

void native_NGUIDebug__LogString_7fef98(undefined8 param_1)

{
  undefined8 *puVar1;
  ulong uVar2;
  undefined8 extraout_x1;
  undefined8 extraout_x1_00;
  long lVar3;
  int *piVar4;
  undefined8 uVar5;
  long *plVar6;
  
  if ((bRam0000000001340425 & 1) == 0) {
    native_sub_43273c(&UnityEngine_Debug_TypeInfo_12d4338);
    native_sub_43273c(&Method_System_Collections_Generic_List_string__Add___12dcea0);
    native_sub_43273c(&Method_System_Collections_Generic_List_string__RemoveAt___12dcee0);
    native_sub_43273c(&Method_System_Collections_Generic_List_string__get_Count___12dcef8);
    native_sub_43273c(&NGUIDebug_TypeInfo_12d53a8);
    bRam0000000001340425 = 1;
  }
  uVar2 = native_UnityEngine_Application__get_isPlaying_8d60cc(0);
  if ((uVar2 & 1) == 0) {
    if (((*(byte *)(_UnityEngine_Debug_TypeInfo_12d4338 + 0x133) >> 2 & 1) != 0) &&
       (*(int *)(_UnityEngine_Debug_TypeInfo_12d4338 + 0xe0) == 0)) {
      native_sub_4327ec();
    }
    uVar5 = 0;
    if ((bRam0000000001340b50 & 1) == 0) {
      native_sub_43273c(&UnityEngine_Debug_TypeInfo_12d4338,0);
      native_sub_43273c(&UnityEngine_ILogger_TypeInfo_12d4c10);
      bRam0000000001340b50 = 1;
      uVar5 = extraout_x1;
    }
    if (((*(byte *)(_UnityEngine_Debug_TypeInfo_12d4338 + 0x133) >> 2 & 1) != 0) &&
       (*(int *)(_UnityEngine_Debug_TypeInfo_12d4338 + 0xe0) == 0)) {
      native_sub_4327ec();
      uVar5 = extraout_x1_00;
    }
    if (cRam000000000134112a == '\0') {
      native_sub_43273c(&UnityEngine_Debug_TypeInfo_12d4338,uVar5);
      cRam000000000134112a = '\x01';
    }
    if (((*(byte *)(_UnityEngine_Debug_TypeInfo_12d4338 + 0x133) >> 2 & 1) != 0) &&
       (*(int *)(_UnityEngine_Debug_TypeInfo_12d4338 + 0xe0) == 0)) {
      native_sub_4327ec();
    }
    plVar6 = *(long **)(*(long *)(_UnityEngine_Debug_TypeInfo_12d4338 + 0xb8) + 8);
    if (plVar6 == (long *)0x0) {
                    /* WARNING: Subroutine does not return */
      native_sub_432810();
    }
    lVar3 = *plVar6;
    if ((ulong)*(ushort *)(lVar3 + 0x12a) != 0) {
      uVar2 = 0;
      piVar4 = (int *)(*(long *)(lVar3 + 0xb0) + 8);
      do {
        if (*(long *)(piVar4 + -2) == _UnityEngine_ILogger_TypeInfo_12d4c10) {
          puVar1 = (undefined8 *)(lVar3 + (long)(*piVar4 + 2) * 0x10 + 0x138);
          goto code_r0x008dc474;
        }
        uVar2 = uVar2 + 1;
        piVar4 = piVar4 + 4;
      } while (uVar2 < *(ushort *)(lVar3 + 0x12a));
    }
    puVar1 = (undefined8 *)native_sub_3c9b34(plVar6,_UnityEngine_ILogger_TypeInfo_12d4c10,2);
code_r0x008dc474:
                    /* WARNING: Could not recover jumptable at 0x008dc490. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*(code *)*puVar1)(plVar6,3,param_1,puVar1[1]);
    return;
  }
  if (((*(byte *)(_NGUIDebug_TypeInfo_12d53a8 + 0x133) >> 2 & 1) != 0) &&
     (*(int *)(_NGUIDebug_TypeInfo_12d53a8 + 0xe0) == 0)) {
    native_sub_4327ec();
  }
  lVar3 = *(long *)(*(long *)(_NGUIDebug_TypeInfo_12d53a8 + 0xb8) + 8);
  if (lVar3 != 0) {
    if (0x14 < *(int *)(lVar3 + 0x18)) {
      if (((*(byte *)(_NGUIDebug_TypeInfo_12d53a8 + 0x133) >> 2 & 1) != 0) &&
         (*(int *)(_NGUIDebug_TypeInfo_12d53a8 + 0xe0) == 0)) {
        native_sub_4327ec();
        lVar3 = *(long *)(*(long *)(_NGUIDebug_TypeInfo_12d53a8 + 0xb8) + 8);
        if (lVar3 == 0) goto LAB_007ff0f8;
      }
      native_System_Collections_Generic_List_int_____RemoveAt_d42280
                (lVar3,0,_Method_System_Collections_Generic_List_string__RemoveAt___12dcee0);
    }
    if (((*(byte *)(_NGUIDebug_TypeInfo_12d53a8 + 0x133) >> 2 & 1) != 0) &&
       (*(int *)(_NGUIDebug_TypeInfo_12d53a8 + 0xe0) == 0)) {
      native_sub_4327ec();
    }
    lVar3 = *(long *)(*(long *)(_NGUIDebug_TypeInfo_12d53a8 + 0xb8) + 8);
    if (lVar3 != 0) {
      native_System_Collections_Generic_List_int_____Add_d40c00
                (lVar3,param_1,_Method_System_Collections_Generic_List_string__Add___12dcea0);
      if ((bRam0000000001340424 & 1) == 0) {
        native_sub_43273c(&Method_UnityEngine_GameObject_AddComponent_NGUIDebug____12e4820);
        native_sub_43273c(&UnityEngine_GameObject_TypeInfo_12d47d8);
        native_sub_43273c(&NGUIDebug_TypeInfo_12d53a8);
        native_sub_43273c(&UnityEngine_Object_TypeInfo_12d54e0);
        native_sub_43273c(&StringLiteral__NGUI_Debug_12f3628);
        bRam0000000001340424 = 1;
      }
      if (((*(byte *)(_NGUIDebug_TypeInfo_12d53a8 + 0x133) >> 2 & 1) != 0) &&
         (*(int *)(_NGUIDebug_TypeInfo_12d53a8 + 0xe0) == 0)) {
        native_sub_4327ec();
      }
      uVar5 = *(undefined8 *)(*(long *)(_NGUIDebug_TypeInfo_12d53a8 + 0xb8) + 0x10);
      if (((*(byte *)(_UnityEngine_Object_TypeInfo_12d54e0 + 0x133) >> 2 & 1) != 0) &&
         (*(int *)(_UnityEngine_Object_TypeInfo_12d54e0 + 0xe0) == 0)) {
        native_sub_4327ec(_UnityEngine_Object_TypeInfo_12d54e0);
      }
      uVar2 = native_UnityEngine_Object__op_Equality_8e9a3c(uVar5,0,0);
      if ((uVar2 & 1) != 0) {
        lVar3 = native_sub_432808(_UnityEngine_GameObject_TypeInfo_12d47d8);
        native_UnityEngine_GameObject___ctor_8de828(lVar3,_StringLiteral__NGUI_Debug_12f3628,0);
        if (lVar3 != 0) {
          uVar5 = native_UnityEngine_GameObject__AddComponent_ActiveAnimation__4a2118
                            (lVar3,_Method_UnityEngine_GameObject_AddComponent_NGUIDebug____12e4820)
          ;
          if (((*(byte *)(_NGUIDebug_TypeInfo_12d53a8 + 0x133) >> 2 & 1) != 0) &&
             (*(int *)(_NGUIDebug_TypeInfo_12d53a8 + 0xe0) == 0)) {
            native_sub_4327ec(_NGUIDebug_TypeInfo_12d53a8);
          }
          puVar1 = (undefined8 *)(*(long *)(_NGUIDebug_TypeInfo_12d53a8 + 0xb8) + 0x10);
          *puVar1 = uVar5;
          native_sub_4326e0(puVar1,uVar5);
          if (((*(byte *)(_UnityEngine_Object_TypeInfo_12d54e0 + 0x133) >> 2 & 1) != 0) &&
             (*(int *)(_UnityEngine_Object_TypeInfo_12d54e0 + 0xe0) == 0)) {
            native_sub_4327ec();
          }
          if (pcRam0000000001341068 == (code *)0x0) {
            pcRam0000000001341068 = (code *)native_sub_4326f0(&UNK_00e2f897);
          }
                    /* WARNING: Could not recover jumptable at 0x008ea7dc. Too many branches */
                    /* WARNING: Treating indirect jump as call */
          (*pcRam0000000001341068)(lVar3);
          return;
        }
                    /* WARNING: Subroutine does not return */
        native_sub_432810();
      }
      return;
    }
  }
LAB_007ff0f8:
                    /* WARNING: Subroutine does not return */
  native_sub_432810();
}



/* NGUIDebug$$Log @ 0x7ff0fc
 * void NGUIDebug__Log (System_Object_array* objs, const MethodInfo* method); */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* NGUIDebug$$Log
   void NGUIDebug__Log (System_Object_array* objs, const MethodInfo* method); */

void native_NGUIDebug__Log_7ff0fc(long param_1)

{
  uint uVar1;
  undefined8 *puVar2;
  ulong uVar3;
  long *plVar4;
  undefined8 uVar5;
  undefined8 uVar6;
  undefined8 extraout_x1;
  undefined8 extraout_x1_00;
  long lVar7;
  int *piVar8;
  uint uVar9;
  
  if ((bRam0000000001340426 & 1) == 0) {
    native_sub_43273c(&NGUIDebug_TypeInfo_12d53a8);
    native_sub_43273c(&StringLiteral____12eb638);
    native_sub_43273c(&StringLiteral__12eaac0);
    bRam0000000001340426 = 1;
  }
  if (param_1 == 0) {
LAB_007ff210:
                    /* WARNING: Subroutine does not return */
    native_sub_432810();
  }
  uVar1 = *(uint *)(param_1 + 0x18);
  uVar6 = _StringLiteral__12eaac0;
  if (0 < (int)uVar1) {
    uVar9 = 0;
    do {
      if (uVar1 <= uVar9) {
        uVar6 = native_sub_43283c();
                    /* WARNING: Subroutine does not return */
        native_sub_4327dc(uVar6,0);
      }
      plVar4 = *(long **)(param_1 + (long)(int)uVar9 * 8 + 0x20);
      if (plVar4 == (long *)0x0) goto LAB_007ff210;
      uVar5 = (**(code **)(*plVar4 + 0x168))(plVar4,*(undefined8 *)(*plVar4 + 0x170));
      if (uVar9 == 0) {
        uVar6 = native_System_String__Concat_afbd68(uVar6,uVar5,0);
      }
      else {
        uVar6 = native_System_String__Concat_afc654(uVar6,_StringLiteral____12eb638,uVar5,0);
      }
      uVar1 = *(uint *)(param_1 + 0x18);
      uVar9 = uVar9 + 1;
    } while ((int)uVar9 < (int)uVar1);
  }
  if (((*(byte *)(_NGUIDebug_TypeInfo_12d53a8 + 0x133) >> 2 & 1) != 0) &&
     (*(int *)(_NGUIDebug_TypeInfo_12d53a8 + 0xe0) == 0)) {
    native_sub_4327ec();
  }
  if ((bRam0000000001340425 & 1) == 0) {
    native_sub_43273c(&UnityEngine_Debug_TypeInfo_12d4338);
    native_sub_43273c(&Method_System_Collections_Generic_List_string__Add___12dcea0);
    native_sub_43273c(&Method_System_Collections_Generic_List_string__RemoveAt___12dcee0);
    native_sub_43273c(&Method_System_Collections_Generic_List_string__get_Count___12dcef8);
    native_sub_43273c(&NGUIDebug_TypeInfo_12d53a8);
    bRam0000000001340425 = 1;
  }
  uVar3 = native_UnityEngine_Application__get_isPlaying_8d60cc(0);
  if ((uVar3 & 1) == 0) {
    if (((*(byte *)(_UnityEngine_Debug_TypeInfo_12d4338 + 0x133) >> 2 & 1) != 0) &&
       (*(int *)(_UnityEngine_Debug_TypeInfo_12d4338 + 0xe0) == 0)) {
      native_sub_4327ec();
    }
    uVar5 = 0;
    if ((bRam0000000001340b50 & 1) == 0) {
      native_sub_43273c(&UnityEngine_Debug_TypeInfo_12d4338,0);
      native_sub_43273c(&UnityEngine_ILogger_TypeInfo_12d4c10);
      bRam0000000001340b50 = 1;
      uVar5 = extraout_x1;
    }
    if (((*(byte *)(_UnityEngine_Debug_TypeInfo_12d4338 + 0x133) >> 2 & 1) != 0) &&
       (*(int *)(_UnityEngine_Debug_TypeInfo_12d4338 + 0xe0) == 0)) {
      native_sub_4327ec();
      uVar5 = extraout_x1_00;
    }
    if (cRam000000000134112a == '\0') {
      native_sub_43273c(&UnityEngine_Debug_TypeInfo_12d4338,uVar5);
      cRam000000000134112a = '\x01';
    }
    if (((*(byte *)(_UnityEngine_Debug_TypeInfo_12d4338 + 0x133) >> 2 & 1) != 0) &&
       (*(int *)(_UnityEngine_Debug_TypeInfo_12d4338 + 0xe0) == 0)) {
      native_sub_4327ec();
    }
    plVar4 = *(long **)(*(long *)(_UnityEngine_Debug_TypeInfo_12d4338 + 0xb8) + 8);
    if (plVar4 == (long *)0x0) {
                    /* WARNING: Subroutine does not return */
      native_sub_432810();
    }
    lVar7 = *plVar4;
    if ((ulong)*(ushort *)(lVar7 + 0x12a) != 0) {
      uVar3 = 0;
      piVar8 = (int *)(*(long *)(lVar7 + 0xb0) + 8);
      do {
        if (*(long *)(piVar8 + -2) == _UnityEngine_ILogger_TypeInfo_12d4c10) {
          puVar2 = (undefined8 *)(lVar7 + (long)(*piVar8 + 2) * 0x10 + 0x138);
          goto code_r0x008dc474;
        }
        uVar3 = uVar3 + 1;
        piVar8 = piVar8 + 4;
      } while (uVar3 < *(ushort *)(lVar7 + 0x12a));
    }
    puVar2 = (undefined8 *)native_sub_3c9b34(plVar4,_UnityEngine_ILogger_TypeInfo_12d4c10,2);
code_r0x008dc474:
                    /* WARNING: Could not recover jumptable at 0x008dc490. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*(code *)*puVar2)(plVar4,3,uVar6,puVar2[1]);
    return;
  }
  if (((*(byte *)(_NGUIDebug_TypeInfo_12d53a8 + 0x133) >> 2 & 1) != 0) &&
     (*(int *)(_NGUIDebug_TypeInfo_12d53a8 + 0xe0) == 0)) {
    native_sub_4327ec();
  }
  lVar7 = *(long *)(*(long *)(_NGUIDebug_TypeInfo_12d53a8 + 0xb8) + 8);
  if (lVar7 != 0) {
    if (0x14 < *(int *)(lVar7 + 0x18)) {
      if (((*(byte *)(_NGUIDebug_TypeInfo_12d53a8 + 0x133) >> 2 & 1) != 0) &&
         (*(int *)(_NGUIDebug_TypeInfo_12d53a8 + 0xe0) == 0)) {
        native_sub_4327ec();
        lVar7 = *(long *)(*(long *)(_NGUIDebug_TypeInfo_12d53a8 + 0xb8) + 8);
        if (lVar7 == 0) goto LAB_007ff0f8;
      }
      native_System_Collections_Generic_List_int_____RemoveAt_d42280
                (lVar7,0,_Method_System_Collections_Generic_List_string__RemoveAt___12dcee0);
    }
    if (((*(byte *)(_NGUIDebug_TypeInfo_12d53a8 + 0x133) >> 2 & 1) != 0) &&
       (*(int *)(_NGUIDebug_TypeInfo_12d53a8 + 0xe0) == 0)) {
      native_sub_4327ec();
    }
    lVar7 = *(long *)(*(long *)(_NGUIDebug_TypeInfo_12d53a8 + 0xb8) + 8);
    if (lVar7 != 0) {
      native_System_Collections_Generic_List_int_____Add_d40c00
                (lVar7,uVar6,_Method_System_Collections_Generic_List_string__Add___12dcea0);
      if ((bRam0000000001340424 & 1) == 0) {
        native_sub_43273c(&Method_UnityEngine_GameObject_AddComponent_NGUIDebug____12e4820);
        native_sub_43273c(&UnityEngine_GameObject_TypeInfo_12d47d8);
        native_sub_43273c(&NGUIDebug_TypeInfo_12d53a8);
        native_sub_43273c(&UnityEngine_Object_TypeInfo_12d54e0);
        native_sub_43273c(&StringLiteral__NGUI_Debug_12f3628);
        bRam0000000001340424 = 1;
      }
      if (((*(byte *)(_NGUIDebug_TypeInfo_12d53a8 + 0x133) >> 2 & 1) != 0) &&
         (*(int *)(_NGUIDebug_TypeInfo_12d53a8 + 0xe0) == 0)) {
        native_sub_4327ec();
      }
      uVar6 = *(undefined8 *)(*(long *)(_NGUIDebug_TypeInfo_12d53a8 + 0xb8) + 0x10);
      if (((*(byte *)(_UnityEngine_Object_TypeInfo_12d54e0 + 0x133) >> 2 & 1) != 0) &&
         (*(int *)(_UnityEngine_Object_TypeInfo_12d54e0 + 0xe0) == 0)) {
        native_sub_4327ec(_UnityEngine_Object_TypeInfo_12d54e0);
      }
      uVar3 = native_UnityEngine_Object__op_Equality_8e9a3c(uVar6,0,0);
      if ((uVar3 & 1) != 0) {
        lVar7 = native_sub_432808(_UnityEngine_GameObject_TypeInfo_12d47d8);
        native_UnityEngine_GameObject___ctor_8de828(lVar7,_StringLiteral__NGUI_Debug_12f3628,0);
        if (lVar7 != 0) {
          uVar6 = native_UnityEngine_GameObject__AddComponent_ActiveAnimation__4a2118
                            (lVar7,_Method_UnityEngine_GameObject_AddComponent_NGUIDebug____12e4820)
          ;
          if (((*(byte *)(_NGUIDebug_TypeInfo_12d53a8 + 0x133) >> 2 & 1) != 0) &&
             (*(int *)(_NGUIDebug_TypeInfo_12d53a8 + 0xe0) == 0)) {
            native_sub_4327ec(_NGUIDebug_TypeInfo_12d53a8);
          }
          puVar2 = (undefined8 *)(*(long *)(_NGUIDebug_TypeInfo_12d53a8 + 0xb8) + 0x10);
          *puVar2 = uVar6;
          native_sub_4326e0(puVar2,uVar6);
          if (((*(byte *)(_UnityEngine_Object_TypeInfo_12d54e0 + 0x133) >> 2 & 1) != 0) &&
             (*(int *)(_UnityEngine_Object_TypeInfo_12d54e0 + 0xe0) == 0)) {
            native_sub_4327ec();
          }
          if (pcRam0000000001341068 == (code *)0x0) {
            pcRam0000000001341068 = (code *)native_sub_4326f0(&UNK_00e2f897);
          }
                    /* WARNING: Could not recover jumptable at 0x008ea7dc. Too many branches */
                    /* WARNING: Treating indirect jump as call */
          (*pcRam0000000001341068)(lVar7);
          return;
        }
                    /* WARNING: Subroutine does not return */
        native_sub_432810();
      }
      return;
    }
  }
LAB_007ff0f8:
                    /* WARNING: Subroutine does not return */
  native_sub_432810();
}



/* NGUIDebug$$Log @ 0x7ff214
 * void NGUIDebug__Log (System_String_o* s, const MethodInfo* method); */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* NGUIDebug$$Log
   void NGUIDebug__Log (System_String_o* s, const MethodInfo* method); */

void native_NGUIDebug__Log_7ff214(long param_1)

{
  ulong uVar1;
  long lVar2;
  ulong uVar3;
  undefined8 uVar4;
  
  if ((bRam0000000001340427 & 1) == 0) {
    native_sub_43273c(&char___TypeInfo_12d3090);
    native_sub_43273c(&NGUIDebug_TypeInfo_12d53a8);
    bRam0000000001340427 = 1;
  }
  uVar1 = native_System_String__IsNullOrEmpty_b09430(param_1,0);
  if ((uVar1 & 1) != 0) {
    return;
  }
  lVar2 = native_sub_432750(_char___TypeInfo_12d3090,1);
  if (lVar2 == 0) {
LAB_007ff328:
                    /* WARNING: Subroutine does not return */
    native_sub_432810();
  }
  if (*(int *)(lVar2 + 0x18) != 0) {
    *(undefined2 *)(lVar2 + 0x20) = 10;
    if ((param_1 == 0) || (lVar2 = native_System_String__Split_b095f4(param_1,lVar2,0), lVar2 == 0))
    goto LAB_007ff328;
    if ((int)*(ulong *)(lVar2 + 0x18) < 1) {
      return;
    }
    uVar1 = 0;
    uVar3 = *(ulong *)(lVar2 + 0x18) & 0xffffffff;
    while (uVar1 < uVar3) {
      uVar4 = *(undefined8 *)(lVar2 + 0x20 + uVar1 * 8);
      if (((*(byte *)(_NGUIDebug_TypeInfo_12d53a8 + 0x133) >> 2 & 1) != 0) &&
         (*(int *)(_NGUIDebug_TypeInfo_12d53a8 + 0xe0) == 0)) {
        native_sub_4327ec();
      }
      native_NGUIDebug__LogString_7fef98(uVar4);
      uVar3 = (ulong)*(uint *)(lVar2 + 0x18);
      uVar1 = uVar1 + 1;
      if ((long)(int)*(uint *)(lVar2 + 0x18) <= (long)uVar1) {
        return;
      }
    }
  }
  uVar4 = native_sub_43283c();
                    /* WARNING: Subroutine does not return */
  native_sub_4327dc(uVar4,0);
}



/* NGUIDebug$$Clear @ 0x7ff32c
 * void NGUIDebug__Clear (const MethodInfo* method); */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* NGUIDebug$$Clear
   void NGUIDebug__Clear (const MethodInfo* method); */

void native_NGUIDebug__Clear_7ff32c(void)

{
  long lVar1;
  
  if ((bRam0000000001340428 & 1) == 0) {
    native_sub_43273c(&Method_System_Collections_Generic_List_string__Clear___12dcea8);
    native_sub_43273c(&NGUIDebug_TypeInfo_12d53a8);
    bRam0000000001340428 = 1;
  }
  if (((*(byte *)(_NGUIDebug_TypeInfo_12d53a8 + 0x133) >> 2 & 1) != 0) &&
     (*(int *)(_NGUIDebug_TypeInfo_12d53a8 + 0xe0) == 0)) {
    native_sub_4327ec();
  }
  lVar1 = *(long *)(*(long *)(_NGUIDebug_TypeInfo_12d53a8 + 0xb8) + 8);
  if (lVar1 != 0) {
    if (0 < *(int *)(lVar1 + 0x18)) {
      native_System_Array__Clear_95191c(*(undefined8 *)(lVar1 + 0x10),0,*(int *)(lVar1 + 0x18),0);
      *(undefined4 *)(lVar1 + 0x18) = 0;
    }
    *(int *)(lVar1 + 0x1c) = *(int *)(lVar1 + 0x1c) + 1;
    return;
  }
                    /* WARNING: Subroutine does not return */
  native_sub_432810();
}



/* NGUIDebug$$DrawBounds @ 0x7ff3b0
 * void NGUIDebug__DrawBounds (UnityEngine_Bounds_o b, const MethodInfo* method); */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* NGUIDebug$$DrawBounds
   void NGUIDebug__DrawBounds (UnityEngine_Bounds_o b, const MethodInfo* method); */

void native_NGUIDebug__DrawBounds_7ff3b0
               (undefined1 param_1 [16],float param_2,undefined8 param_3,undefined8 param_4)

{
  float fVar1;
  float fVar2;
  float fVar3;
  float fVar4;
  
  if ((bRam0000000001340429 & 1) == 0) {
    native_sub_43273c(&UnityEngine_Debug_TypeInfo_12d4338);
    bRam0000000001340429 = 1;
  }
  native_UnityEngine_Bounds__get_center_8d7d98(param_4,0);
  fVar1 = (float)native_UnityEngine_Bounds__get_center_8d7d98(param_4,0);
  fVar2 = (float)native_UnityEngine_Bounds__get_extents_8d7da4(param_4,0);
  fVar1 = fVar1 - fVar2;
  fVar3 = (float)native_UnityEngine_Bounds__get_center_8d7d98(param_4,0);
  fVar2 = param_2;
  fVar4 = (float)native_UnityEngine_Bounds__get_extents_8d7da4(param_4,0);
  native_UnityEngine_Color__get_red_8d9dd4(0);
  if (((*(byte *)(_UnityEngine_Debug_TypeInfo_12d4338 + 0x133) >> 2 & 1) != 0) &&
     (*(int *)(_UnityEngine_Debug_TypeInfo_12d4338 + 0xe0) == 0)) {
    native_sub_4327ec();
  }
  native_UnityEngine_Debug__DrawLine_8dc108(fVar1,0);
  native_UnityEngine_Color__get_red_8d9dd4(0);
  native_UnityEngine_Debug__DrawLine_8dc108(fVar1,0);
  native_UnityEngine_Color__get_red_8d9dd4(0);
  native_UnityEngine_Debug__DrawLine_8dc108(fVar3 + fVar4,0);
  native_UnityEngine_Color__get_red_8d9dd4(0);
  native_UnityEngine_Debug__DrawLine_8dc108
            (fVar1,param_2 + fVar2,param_3,fVar3 + fVar4,param_2 + fVar2,param_3,0);
  return;
}



/* NGUIDebug$$OnGUI @ 0x7ff56c
 * void NGUIDebug__OnGUI (NGUIDebug_o* __this, const MethodInfo* method); */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* NGUIDebug$$OnGUI
   void NGUIDebug__OnGUI (NGUIDebug_o* __this, const MethodInfo* method); */

void native_NGUIDebug__OnGUI_7ff56c(void)

{
  int iVar1;
  undefined4 uVar2;
  undefined4 uVar3;
  long *plVar4;
  undefined8 uVar5;
  undefined4 *puVar6;
  long lVar7;
  ulong uVar8;
  long lVar9;
  float fVar10;
  ulong uVar11;
  undefined8 uVar12;
  ulong uVar13;
  ulong uVar14;
  undefined8 uStack_90;
  undefined8 uStack_88;
  undefined8 uStack_78;
  
  if ((bRam000000000134042a & 1) == 0) {
    native_sub_43273c(&UICamera_ControlScheme_TypeInfo_12d79e8);
    native_sub_43273c(&UnityEngine_GUI_TypeInfo_12d4770);
    native_sub_43273c(&Method_System_Collections_Generic_List_string__get_Count___12dcef8);
    native_sub_43273c(&Method_System_Collections_Generic_List_string__get_Item___12dcf00);
    native_sub_43273c(&NGUIDebug_TypeInfo_12d53a8);
    native_sub_43273c(&NGUITools_TypeInfo_12d53c8);
    native_sub_43273c(&UICamera_TypeInfo_12d6410);
    native_sub_43273c(&StringLiteral_Controller___12ed2f8);
    native_sub_43273c(&StringLiteral_Active_events___12ec200);
    native_sub_43273c(&StringLiteral___ignore_controller_12eb6a0);
    native_sub_43273c(&StringLiteral___disabled_controller_12eb690);
    native_sub_43273c(&StringLiteral___input_focus_12eb6a8);
    native_sub_43273c(&StringLiteral_Selection___12f0d48);
    native_sub_43273c(&StringLiteral___12eaf90);
    native_sub_43273c(&StringLiteral_Scheme___12f0c88);
    native_sub_43273c(&StringLiteral_Hover___12ee3f8);
    native_sub_43273c(&StringLiteral__12eaac0);
    bRam000000000134042a = 1;
  }
  uVar8 = 0x447a0000;
  uVar11 = 0x40a00000;
  uVar14 = 0x41b00000;
  uStack_90 = 0;
  uStack_88 = 0;
  uStack_78 = 0;
  native_UnityEngine_Rect___ctor_7635c8(0x40a00000,0x40a00000,0x447a0000,0x41b00000,&uStack_90,0);
  if (((*(byte *)(_NGUIDebug_TypeInfo_12d53a8 + 0x133) >> 2 & 1) != 0) &&
     (*(int *)(_NGUIDebug_TypeInfo_12d53a8 + 0xe0) == 0)) {
    native_sub_4327ec();
  }
  if (**(char **)(_NGUIDebug_TypeInfo_12d53a8 + 0xb8) != '\0') {
    if (((*(byte *)(_UICamera_TypeInfo_12d6410 + 0x133) >> 2 & 1) != 0) &&
       (*(int *)(_UICamera_TypeInfo_12d6410 + 0xe0) == 0)) {
      native_sub_4327ec();
    }
    uVar3 = native_UICamera__get_currentScheme_c92518(0);
    uStack_78 = CONCAT44(uVar3,(undefined4)uStack_78);
    plVar4 = (long *)native_sub_4327fc(_UICamera_ControlScheme_TypeInfo_12d79e8,(long)&uStack_78 + 4
                                      );
    if (plVar4 == (long *)0x0) goto LAB_007fff64;
    uVar5 = (**(code **)(*plVar4 + 0x168))(plVar4,*(undefined8 *)(*plVar4 + 0x170));
    puVar6 = (undefined4 *)native_sub_432800(plVar4);
    uStack_78 = CONCAT44(*puVar6,(undefined4)uStack_78);
    uVar5 = native_System_String__Concat_afbd68(_StringLiteral_Scheme___12f0c88,uVar5,0);
    uVar12 = native_UnityEngine_Color__get_black_8d9e24(0);
    if (((*(byte *)(_UnityEngine_GUI_TypeInfo_12d4770 + 0x133) >> 2 & 1) != 0) &&
       (*(int *)(_UnityEngine_GUI_TypeInfo_12d4770 + 0xe0) == 0)) {
      native_sub_4327ec();
    }
    native_UnityEngine_GUI__set_color_d7c1f0(uVar12,uVar11,uVar8,uVar14,0);
    native_UnityEngine_GUI__Label_d7ca84
              (uStack_90 & 0xffffffff,uStack_90._4_4_,uStack_88 & 0xffffffff,uStack_88._4_4_,uVar5,0
              );
    fVar10 = (float)native_UnityEngine_Rect__get_y_763604(&uStack_90,0);
    native_UnityEngine_Rect__set_y_76360c(fVar10 + -1.0,&uStack_90,0);
    fVar10 = (float)native_UnityEngine_Rect__get_x_7635f4(&uStack_90,0);
    native_UnityEngine_Rect__set_x_7635fc(fVar10 + -1.0,&uStack_90,0);
    native_UnityEngine_Color__get_white_8d9e10(0);
    native_UnityEngine_GUI__set_color_d7c1f0(0);
    native_UnityEngine_GUI__Label_d7ca84
              (uStack_90 & 0xffffffff,uStack_90._4_4_,uStack_88 & 0xffffffff,uStack_88._4_4_,uVar5,0
              );
    fVar10 = (float)native_UnityEngine_Rect__get_y_763604(&uStack_90,0);
    native_UnityEngine_Rect__set_y_76360c(fVar10 + 18.0,&uStack_90,0);
    fVar10 = (float)native_UnityEngine_Rect__get_x_7635f4(&uStack_90,0);
    native_UnityEngine_Rect__set_x_7635fc(fVar10 + 1.0,&uStack_90,0);
    uVar5 = native_UICamera__get_hoveredObject_c9114c(0);
    if (((*(byte *)(_NGUITools_TypeInfo_12d53c8 + 0x133) >> 2 & 1) != 0) &&
       (*(int *)(_NGUITools_TypeInfo_12d53c8 + 0xe0) == 0)) {
      native_sub_4327ec(_NGUITools_TypeInfo_12d53c8);
    }
    lVar7 = native_NGUITools__GetHierarchy_72d178(uVar5,0);
    if (lVar7 == 0) goto LAB_007fff64;
    uVar5 = native_System_String__Replace_afd9ac
                      (lVar7,_StringLiteral___12eaf90,_StringLiteral__12eaac0,0);
    uVar5 = native_System_String__Concat_afbd68(_StringLiteral_Hover___12ee3f8,uVar5,0);
    native_UnityEngine_Color__get_black_8d9e24(0);
    native_UnityEngine_GUI__set_color_d7c1f0(0);
    native_UnityEngine_GUI__Label_d7ca84
              (uStack_90 & 0xffffffff,uStack_90._4_4_,uStack_88 & 0xffffffff,uStack_88._4_4_,uVar5,0
              );
    fVar10 = (float)native_UnityEngine_Rect__get_y_763604(&uStack_90,0);
    native_UnityEngine_Rect__set_y_76360c(fVar10 + -1.0,&uStack_90,0);
    fVar10 = (float)native_UnityEngine_Rect__get_x_7635f4(&uStack_90,0);
    native_UnityEngine_Rect__set_x_7635fc(fVar10 + -1.0,&uStack_90,0);
    native_UnityEngine_Color__get_white_8d9e10(0);
    native_UnityEngine_GUI__set_color_d7c1f0(0);
    native_UnityEngine_GUI__Label_d7ca84
              (uStack_90 & 0xffffffff,uStack_90._4_4_,uStack_88 & 0xffffffff,uStack_88._4_4_,uVar5,0
              );
    fVar10 = (float)native_UnityEngine_Rect__get_y_763604(&uStack_90,0);
    native_UnityEngine_Rect__set_y_76360c(fVar10 + 18.0,&uStack_90,0);
    fVar10 = (float)native_UnityEngine_Rect__get_x_7635f4(&uStack_90,0);
    native_UnityEngine_Rect__set_x_7635fc(fVar10 + 1.0,&uStack_90,0);
    uVar5 = native_UICamera__get_selectedObject_c9756c(0);
    lVar7 = native_NGUITools__GetHierarchy_72d178(uVar5,0);
    if (lVar7 == 0) goto LAB_007fff64;
    uVar5 = native_System_String__Replace_afd9ac
                      (lVar7,_StringLiteral___12eaf90,_StringLiteral__12eaac0,0);
    uVar5 = native_System_String__Concat_afbd68(_StringLiteral_Selection___12f0d48,uVar5,0);
    native_UnityEngine_Color__get_black_8d9e24(0);
    native_UnityEngine_GUI__set_color_d7c1f0(0);
    native_UnityEngine_GUI__Label_d7ca84
              (uStack_90 & 0xffffffff,uStack_90._4_4_,uStack_88 & 0xffffffff,uStack_88._4_4_,uVar5,0
              );
    fVar10 = (float)native_UnityEngine_Rect__get_y_763604(&uStack_90,0);
    native_UnityEngine_Rect__set_y_76360c(fVar10 + -1.0,&uStack_90,0);
    fVar10 = (float)native_UnityEngine_Rect__get_x_7635f4(&uStack_90,0);
    native_UnityEngine_Rect__set_x_7635fc(fVar10 + -1.0,&uStack_90,0);
    native_UnityEngine_Color__get_white_8d9e10(0);
    native_UnityEngine_GUI__set_color_d7c1f0(0);
    native_UnityEngine_GUI__Label_d7ca84
              (uStack_90 & 0xffffffff,uStack_90._4_4_,uStack_88 & 0xffffffff,uStack_88._4_4_,uVar5,0
              );
    fVar10 = (float)native_UnityEngine_Rect__get_y_763604(&uStack_90,0);
    native_UnityEngine_Rect__set_y_76360c(fVar10 + 18.0,&uStack_90,0);
    fVar10 = (float)native_UnityEngine_Rect__get_x_7635f4(&uStack_90,0);
    native_UnityEngine_Rect__set_x_7635fc(fVar10 + 1.0,&uStack_90,0);
    uVar5 = native_UICamera__get_controllerNavigationObject_c96e8c(0);
    lVar7 = native_NGUITools__GetHierarchy_72d178(uVar5,0);
    if (lVar7 == 0) goto LAB_007fff64;
    uVar5 = native_System_String__Replace_afd9ac
                      (lVar7,_StringLiteral___12eaf90,_StringLiteral__12eaac0,0);
    uVar5 = native_System_String__Concat_afbd68(_StringLiteral_Controller___12ed2f8,uVar5,0);
    native_UnityEngine_Color__get_black_8d9e24(0);
    native_UnityEngine_GUI__set_color_d7c1f0(0);
    native_UnityEngine_GUI__Label_d7ca84
              (uStack_90 & 0xffffffff,uStack_90._4_4_,uStack_88 & 0xffffffff,uStack_88._4_4_,uVar5,0
              );
    fVar10 = (float)native_UnityEngine_Rect__get_y_763604(&uStack_90,0);
    native_UnityEngine_Rect__set_y_76360c(fVar10 + -1.0,&uStack_90,0);
    fVar10 = (float)native_UnityEngine_Rect__get_x_7635f4(&uStack_90,0);
    native_UnityEngine_Rect__set_x_7635fc(fVar10 + -1.0,&uStack_90,0);
    native_UnityEngine_Color__get_white_8d9e10(0);
    native_UnityEngine_GUI__set_color_d7c1f0(0);
    uVar11 = uStack_90 >> 0x20;
    uVar13 = uStack_88 & 0xffffffff;
    uVar14 = uStack_88 >> 0x20;
    native_UnityEngine_GUI__Label_d7ca84(uStack_90 & 0xffffffff,uVar11,uVar13,uVar14,uVar5,0);
    fVar10 = (float)native_UnityEngine_Rect__get_y_763604(&uStack_90,0);
    native_UnityEngine_Rect__set_y_76360c(fVar10 + 18.0,&uStack_90,0);
    fVar10 = (float)native_UnityEngine_Rect__get_x_7635f4(&uStack_90,0);
    native_UnityEngine_Rect__set_x_7635fc(fVar10 + 1.0,&uStack_90,0);
    uVar3 = native_UICamera__CountInputSources_c98160(0);
    uStack_78 = CONCAT44(uStack_78._4_4_,uVar3);
    uVar5 = native_System_Int32__ToString_83c60c(&uStack_78,0);
    uVar5 = native_System_String__Concat_afbd68(_StringLiteral_Active_events___12ec200,uVar5,0);
    uVar8 = native_UICamera__get_disableController_c94230(0);
    if ((uVar8 & 1) != 0) {
      uVar5 = native_System_String__Concat_afbd68
                        (uVar5,_StringLiteral___disabled_controller_12eb690,0);
    }
    if (((*(byte *)(_UICamera_TypeInfo_12d6410 + 0x133) >> 2 & 1) != 0) &&
       (*(int *)(_UICamera_TypeInfo_12d6410 + 0xe0) == 0)) {
      native_sub_4327ec(_UICamera_TypeInfo_12d6410);
    }
    if (*(char *)(*(long *)(_UICamera_TypeInfo_12d6410 + 0xb8) + 0x5a) != '\0') {
      uVar5 = native_System_String__Concat_afbd68
                        (uVar5,_StringLiteral___ignore_controller_12eb6a0,0);
    }
    if (((*(byte *)(_UICamera_TypeInfo_12d6410 + 0x133) >> 2 & 1) != 0) &&
       (*(int *)(_UICamera_TypeInfo_12d6410 + 0xe0) == 0)) {
      native_sub_4327ec(_UICamera_TypeInfo_12d6410);
    }
    uVar8 = native_UICamera__get_inputHasFocus_c94cbc(0);
    if ((uVar8 & 1) != 0) {
      uVar5 = native_System_String__Concat_afbd68(uVar5,_StringLiteral___input_focus_12eb6a8,0);
    }
    uVar12 = native_UnityEngine_Color__get_black_8d9e24(0);
    if (((*(byte *)(_UnityEngine_GUI_TypeInfo_12d4770 + 0x133) >> 2 & 1) != 0) &&
       (*(int *)(_UnityEngine_GUI_TypeInfo_12d4770 + 0xe0) == 0)) {
      native_sub_4327ec();
    }
    native_UnityEngine_GUI__set_color_d7c1f0(uVar12,uVar11,uVar13,uVar14,0);
    native_UnityEngine_GUI__Label_d7ca84
              (uStack_90 & 0xffffffff,uStack_90._4_4_,uStack_88 & 0xffffffff,uStack_88._4_4_,uVar5,0
              );
    fVar10 = (float)native_UnityEngine_Rect__get_y_763604(&uStack_90,0);
    native_UnityEngine_Rect__set_y_76360c(fVar10 + -1.0,&uStack_90,0);
    fVar10 = (float)native_UnityEngine_Rect__get_x_7635f4(&uStack_90,0);
    native_UnityEngine_Rect__set_x_7635fc(fVar10 + -1.0,&uStack_90,0);
    native_UnityEngine_Color__get_white_8d9e10(0);
    native_UnityEngine_GUI__set_color_d7c1f0(0);
    uVar11 = uStack_90 >> 0x20;
    uVar8 = uStack_88 & 0xffffffff;
    uVar14 = uStack_88 >> 0x20;
    native_UnityEngine_GUI__Label_d7ca84(uStack_90 & 0xffffffff,uVar11,uVar8,uVar14,uVar5,0);
    fVar10 = (float)native_UnityEngine_Rect__get_y_763604(&uStack_90,0);
    native_UnityEngine_Rect__set_y_76360c(fVar10 + 18.0,&uStack_90,0);
    fVar10 = (float)native_UnityEngine_Rect__get_x_7635f4(&uStack_90,0);
    native_UnityEngine_Rect__set_x_7635fc(fVar10 + 1.0,&uStack_90,0);
  }
  if (((*(byte *)(_NGUIDebug_TypeInfo_12d53a8 + 0x133) >> 2 & 1) != 0) &&
     (*(int *)(_NGUIDebug_TypeInfo_12d53a8 + 0xe0) == 0)) {
    native_sub_4327ec();
  }
  lVar7 = *(long *)(*(long *)(_NGUIDebug_TypeInfo_12d53a8 + 0xb8) + 8);
  if (lVar7 != 0) {
    iVar1 = *(int *)(lVar7 + 0x18);
    if (0 < iVar1) {
      lVar7 = 4;
      do {
        uVar5 = native_UnityEngine_Color__get_black_8d9e24(0);
        if (((*(byte *)(_UnityEngine_GUI_TypeInfo_12d4770 + 0x133) >> 2 & 1) != 0) &&
           (*(int *)(_UnityEngine_GUI_TypeInfo_12d4770 + 0xe0) == 0)) {
          native_sub_4327ec();
        }
        native_UnityEngine_GUI__set_color_d7c1f0(uVar5,uVar11,uVar8,uVar14,0);
        uVar14 = uStack_90 & 0xffffffff;
        uVar3 = uStack_90._4_4_;
        uVar11 = uStack_88 & 0xffffffff;
        uVar2 = uStack_88._4_4_;
        if (((*(byte *)(_NGUIDebug_TypeInfo_12d53a8 + 0x133) >> 2 & 1) != 0) &&
           (*(int *)(_NGUIDebug_TypeInfo_12d53a8 + 0xe0) == 0)) {
          native_sub_4327ec();
        }
        lVar9 = *(long *)(*(long *)(_NGUIDebug_TypeInfo_12d53a8 + 0xb8) + 8);
        if (lVar9 == 0) goto LAB_007fff64;
        if ((ulong)*(uint *)(lVar9 + 0x18) <= lVar7 - 4U) {
          native_System_ThrowHelper__ThrowArgumentOutOfRangeException_9fe0f4(0);
        }
        native_UnityEngine_GUI__Label_d7ca84
                  (uVar14,uVar3,uVar11,uVar2,*(undefined8 *)(*(long *)(lVar9 + 0x10) + lVar7 * 8),0)
        ;
        fVar10 = (float)native_UnityEngine_Rect__get_y_763604(&uStack_90,0);
        native_UnityEngine_Rect__set_y_76360c(fVar10 + -1.0,&uStack_90,0);
        fVar10 = (float)native_UnityEngine_Rect__get_x_7635f4(&uStack_90,0);
        native_UnityEngine_Rect__set_x_7635fc(fVar10 + -1.0,&uStack_90,0);
        native_UnityEngine_Color__get_white_8d9e10(0);
        native_UnityEngine_GUI__set_color_d7c1f0(0);
        lVar9 = *(long *)(*(long *)(_NGUIDebug_TypeInfo_12d53a8 + 0xb8) + 8);
        if (lVar9 == 0) goto LAB_007fff64;
        uVar13 = uStack_90 & 0xffffffff;
        uVar11 = uStack_90 >> 0x20;
        uVar8 = uStack_88 & 0xffffffff;
        uVar14 = uStack_88 >> 0x20;
        if ((ulong)*(uint *)(lVar9 + 0x18) <= lVar7 - 4U) {
          native_System_ThrowHelper__ThrowArgumentOutOfRangeException_9fe0f4(0);
        }
        native_UnityEngine_GUI__Label_d7ca84
                  (uVar13,*(undefined8 *)(*(long *)(lVar9 + 0x10) + lVar7 * 8),0);
        fVar10 = (float)native_UnityEngine_Rect__get_y_763604(&uStack_90,0);
        native_UnityEngine_Rect__set_y_76360c(fVar10 + 18.0,&uStack_90,0);
        fVar10 = (float)native_UnityEngine_Rect__get_x_7635f4(&uStack_90,0);
        native_UnityEngine_Rect__set_x_7635fc(fVar10 + 1.0,&uStack_90,0);
        lVar9 = lVar7 + -3;
        lVar7 = lVar7 + 1;
      } while (lVar9 < iVar1);
    }
    return;
  }
LAB_007fff64:
                    /* WARNING: Subroutine does not return */
  native_sub_432810();
}



/* NGUIDebug$$.ctor @ 0x7fff68
 * void NGUIDebug___ctor (NGUIDebug_o* __this, const MethodInfo* method); */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* NGUIDebug$$.ctor
   void NGUIDebug___ctor (NGUIDebug_o* __this, const MethodInfo* method); */

undefined1  [16] native_NGUIDebug___ctor_7fff68(ulong param_1)

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



/* NGUIDebug$$.cctor @ 0x7fff70
 * void NGUIDebug___cctor (const MethodInfo* method); */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* NGUIDebug$$.cctor
   void NGUIDebug___cctor (const MethodInfo* method); */

void native_NGUIDebug___cctor_7fff70(void)

{
  ulong *puVar1;
  char cVar2;
  bool bVar3;
  undefined8 uVar4;
  undefined8 *puVar5;
  
  if ((bRam000000000134042b & 1) == 0) {
    native_sub_43273c(&Method_System_Collections_Generic_List_string___ctor___12dce88);
    native_sub_43273c(&System_Collections_Generic_List_string__TypeInfo_12d2b60);
    native_sub_43273c(&NGUIDebug_TypeInfo_12d53a8);
    bRam000000000134042b = 1;
  }
  **(undefined1 **)(_NGUIDebug_TypeInfo_12d53a8 + 0xb8) = 0;
  uVar4 = native_sub_432808(_System_Collections_Generic_List_string__TypeInfo_12d2b60);
  native_System_Collections_Generic_List_XmlEventCache_XmlEvent______ctor_d3ff44
            (uVar4,_Method_System_Collections_Generic_List_string___ctor___12dce88);
  puVar5 = (undefined8 *)(*(long *)(_NGUIDebug_TypeInfo_12d53a8 + 0xb8) + 8);
  *puVar5 = uVar4;
  native_sub_4326e0(puVar5,uVar4);
  puVar5 = (undefined8 *)(*(long *)(_NGUIDebug_TypeInfo_12d53a8 + 0xb8) + 0x10);
  *puVar5 = 0;
  if (iRam0000000001345318 != 0) {
    puVar1 = (ulong *)(((ulong)puVar5 >> 0x12 & 0x7fff) * 8 + 0x138ecd8);
    do {
      cVar2 = '\x01';
      bVar3 = (bool)ExclusiveMonitorPass(puVar1,0x10);
      if (bVar3) {
        *puVar1 = *puVar1 | 1L << ((ulong)puVar5 >> 0xc & 0x3f);
        cVar2 = ExclusiveMonitorsStatus();
      }
    } while (cVar2 != '\0');
  }
  return;
}


