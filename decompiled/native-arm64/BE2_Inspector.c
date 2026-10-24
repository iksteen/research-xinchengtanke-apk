/* ARM64 IL2CPP native pseudocode from Ghidra.
 * Recovered implementation, not original C# source.
 * Function boundaries follow the IL2CPP method address table. */


/* MG_BlocksEngine2.EditorScript.BE2_Inspector$$get_Instance @ 0x602da4
 * MG_BlocksEngine2_EditorScript_BE2_Inspector_o* MG_BlocksEngine2_EditorScript_BE2_Inspector__get_Instance (const MethodInfo* method); */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* MG_BlocksEngine2.EditorScript.BE2_Inspector$$get_Instance
   MG_BlocksEngine2_EditorScript_BE2_Inspector_o*
   MG_BlocksEngine2_EditorScript_BE2_Inspector__get_Instance (const MethodInfo* method); */

undefined8 native_MG_BlocksEngine2_EditorScript_BE2_Inspector__get_Instance_602da4(void)

{
  ulong uVar1;
  undefined8 *puVar2;
  undefined8 uVar3;
  
  if ((bRam000000000133ee4e & 1) == 0) {
    native_sub_43273c(&MG_BlocksEngine2_EditorScript_BE2_Inspector_TypeInfo_12d3a10);
    native_sub_43273c(&Method_UnityEngine_Object_FindObjectOfType_BE2_Inspector____12e5a00);
    native_sub_43273c(&UnityEngine_Object_TypeInfo_12d54e0);
    bRam000000000133ee4e = 1;
  }
  uVar3 = **(undefined8 **)(_MG_BlocksEngine2_EditorScript_BE2_Inspector_TypeInfo_12d3a10 + 0xb8);
  if (((*(byte *)(_UnityEngine_Object_TypeInfo_12d54e0 + 0x133) >> 2 & 1) != 0) &&
     (*(int *)(_UnityEngine_Object_TypeInfo_12d54e0 + 0xe0) == 0)) {
    native_sub_4327ec();
  }
  uVar1 = native_UnityEngine_Object__op_Implicit_8e1b98(uVar3,0);
  if ((uVar1 & 1) == 0) {
    if (((*(byte *)(_UnityEngine_Object_TypeInfo_12d54e0 + 0x133) >> 2 & 1) != 0) &&
       (*(int *)(_UnityEngine_Object_TypeInfo_12d54e0 + 0xe0) == 0)) {
      native_sub_4327ec();
    }
    uVar3 = native_UnityEngine_Object__FindObjectOfType_BE2_DragDropManager__4a6274
                      (_Method_UnityEngine_Object_FindObjectOfType_BE2_Inspector____12e5a00);
    puVar2 = *(undefined8 **)(_MG_BlocksEngine2_EditorScript_BE2_Inspector_TypeInfo_12d3a10 + 0xb8);
    *puVar2 = uVar3;
    native_sub_4326e0(puVar2,uVar3);
  }
  return **(undefined8 **)(_MG_BlocksEngine2_EditorScript_BE2_Inspector_TypeInfo_12d3a10 + 0xb8);
}



/* MG_BlocksEngine2.EditorScript.BE2_Inspector$$set_Instance @ 0x60fb24
 * void MG_BlocksEngine2_EditorScript_BE2_Inspector__set_Instance (MG_BlocksEngine2_EditorScript_BE2_Inspector_o* value, const MethodInfo* method); */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* MG_BlocksEngine2.EditorScript.BE2_Inspector$$set_Instance
   void MG_BlocksEngine2_EditorScript_BE2_Inspector__set_Instance
   (MG_BlocksEngine2_EditorScript_BE2_Inspector_o* value, const MethodInfo* method); */

void native_MG_BlocksEngine2_EditorScript_BE2_Inspector__set_Instance_60fb24(undefined8 param_1)

{
  ulong *puVar1;
  char cVar2;
  bool bVar3;
  undefined8 *puVar4;
  
  if ((bRam000000000133ee4f & 1) == 0) {
    native_sub_43273c(&MG_BlocksEngine2_EditorScript_BE2_Inspector_TypeInfo_12d3a10);
    bRam000000000133ee4f = 1;
  }
  puVar4 = *(undefined8 **)(_MG_BlocksEngine2_EditorScript_BE2_Inspector_TypeInfo_12d3a10 + 0xb8);
  *puVar4 = param_1;
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



/* MG_BlocksEngine2.EditorScript.BE2_Inspector$$get_Camera @ 0x603238
 * UnityEngine_Camera_o* MG_BlocksEngine2_EditorScript_BE2_Inspector__get_Camera (MG_BlocksEngine2_EditorScript_BE2_Inspector_o* __this, const MethodInfo* method); */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* MG_BlocksEngine2.EditorScript.BE2_Inspector$$get_Camera
   UnityEngine_Camera_o* MG_BlocksEngine2_EditorScript_BE2_Inspector__get_Camera
   (MG_BlocksEngine2_EditorScript_BE2_Inspector_o* __this, const MethodInfo* method); */

undefined8 native_MG_BlocksEngine2_EditorScript_BE2_Inspector__get_Camera_603238(long param_1)

{
  ulong uVar1;
  undefined8 *puVar2;
  undefined8 uVar3;
  
  if ((bRam000000000133ee50 & 1) == 0) {
    native_sub_43273c(&UnityEngine_Object_TypeInfo_12d54e0);
    bRam000000000133ee50 = 1;
  }
  puVar2 = (undefined8 *)(param_1 + 0xd0);
  uVar3 = *puVar2;
  if (((*(byte *)(_UnityEngine_Object_TypeInfo_12d54e0 + 0x133) >> 2 & 1) != 0) &&
     (*(int *)(_UnityEngine_Object_TypeInfo_12d54e0 + 0xe0) == 0)) {
    native_sub_4327ec();
  }
  uVar1 = native_UnityEngine_Object__op_Implicit_8e1b98(uVar3,0);
  if ((uVar1 & 1) == 0) {
    uVar3 = native_UnityEngine_Camera__get_main_8d93c0(0);
    *puVar2 = uVar3;
    native_sub_4326e0(puVar2,uVar3);
  }
  return *puVar2;
}



/* MG_BlocksEngine2.EditorScript.BE2_Inspector$$set_Camera @ 0x60fb78
 * void MG_BlocksEngine2_EditorScript_BE2_Inspector__set_Camera (MG_BlocksEngine2_EditorScript_BE2_Inspector_o* __this, UnityEngine_Camera_o* value, const MethodInfo* method); */

/* MG_BlocksEngine2.EditorScript.BE2_Inspector$$set_Camera
   void MG_BlocksEngine2_EditorScript_BE2_Inspector__set_Camera
   (MG_BlocksEngine2_EditorScript_BE2_Inspector_o* __this, UnityEngine_Camera_o* value, const
   MethodInfo* method); */

void native_MG_BlocksEngine2_EditorScript_BE2_Inspector__set_Camera_60fb78
               (long param_1,undefined8 param_2)

{
  ulong *puVar1;
  char cVar2;
  bool bVar3;
  undefined8 *puVar4;
  
  puVar4 = (undefined8 *)(param_1 + 0xd0);
  *puVar4 = param_2;
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



/* MG_BlocksEngine2.EditorScript.BE2_Inspector$$get_CanvasRenderMode @ 0x60fb80
 * int32_t MG_BlocksEngine2_EditorScript_BE2_Inspector__get_CanvasRenderMode (MG_BlocksEngine2_EditorScript_BE2_Inspector_o* __this, const MethodInfo* method); */

/* MG_BlocksEngine2.EditorScript.BE2_Inspector$$get_CanvasRenderMode
   int32_t MG_BlocksEngine2_EditorScript_BE2_Inspector__get_CanvasRenderMode
   (MG_BlocksEngine2_EditorScript_BE2_Inspector_o* __this, const MethodInfo* method); */

undefined4
native_MG_BlocksEngine2_EditorScript_BE2_Inspector__get_CanvasRenderMode_60fb80(long param_1)

{
  return *(undefined4 *)(param_1 + 0xd8);
}



/* MG_BlocksEngine2.EditorScript.BE2_Inspector$$set_CanvasRenderMode @ 0x60fb88
 * void MG_BlocksEngine2_EditorScript_BE2_Inspector__set_CanvasRenderMode (MG_BlocksEngine2_EditorScript_BE2_Inspector_o* __this, int32_t value, const MethodInfo* method); */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* MG_BlocksEngine2.EditorScript.BE2_Inspector$$set_CanvasRenderMode
   void MG_BlocksEngine2_EditorScript_BE2_Inspector__set_CanvasRenderMode
   (MG_BlocksEngine2_EditorScript_BE2_Inspector_o* __this, int32_t value, const MethodInfo* method);
    */

void native_MG_BlocksEngine2_EditorScript_BE2_Inspector__set_CanvasRenderMode_60fb88
               (long param_1,undefined4 param_2)

{
  uint uVar1;
  long lVar2;
  long lVar3;
  undefined8 uVar4;
  long lVar5;
  uint uVar6;
  
  if ((bRam000000000133ee51 & 1) == 0) {
    native_sub_43273c(&Method_UnityEngine_Object_FindObjectsOfType_BE2_Canvas____12e5a28);
    native_sub_43273c(&UnityEngine_Object_TypeInfo_12d54e0);
    bRam000000000133ee51 = 1;
  }
  if (((*(byte *)(_UnityEngine_Object_TypeInfo_12d54e0 + 0x133) >> 2 & 1) != 0) &&
     (*(int *)(_UnityEngine_Object_TypeInfo_12d54e0 + 0xe0) == 0)) {
    native_sub_4327ec();
  }
  lVar2 = native_UnityEngine_Object__FindObjectsOfType_BE2_Canvas__4a6368
                    (_Method_UnityEngine_Object_FindObjectsOfType_BE2_Canvas____12e5a28);
  if (lVar2 != 0) {
    uVar1 = *(uint *)(lVar2 + 0x18);
    if (0 < (int)uVar1) {
      uVar6 = 0;
      do {
        if (uVar1 <= uVar6) {
          uVar4 = native_sub_43283c();
                    /* WARNING: Subroutine does not return */
          native_sub_4327dc(uVar4,0);
        }
        lVar5 = *(long *)(lVar2 + (long)(int)uVar6 * 8 + 0x20);
        if ((lVar5 == 0) ||
           (lVar3 = native_MG_BlocksEngine2_Environment_BE2_Canvas__get_Canvas_574ec8(lVar5,0),
           lVar3 == 0)) goto LAB_0060fcc4;
        native_UnityEngine_Canvas__set_renderMode_db6098(lVar3,param_2,0);
        lVar3 = native_MG_BlocksEngine2_Environment_BE2_Canvas__get_Canvas_574ec8(lVar5,0);
        uVar4 = native_MG_BlocksEngine2_EditorScript_BE2_Inspector__get_Camera_603238(param_1);
        if (lVar3 == 0) goto LAB_0060fcc4;
        native_UnityEngine_Canvas__set_worldCamera_db66c0(lVar3,uVar4,0);
        lVar5 = native_MG_BlocksEngine2_Environment_BE2_Canvas__get_Canvas_574ec8(lVar5,0);
        if (lVar5 == 0) goto LAB_0060fcc4;
        native_UnityEngine_Canvas__set_planeDistance_db6288(0x41200000,lVar5,0);
        uVar1 = *(uint *)(lVar2 + 0x18);
        uVar6 = uVar6 + 1;
      } while ((int)uVar6 < (int)uVar1);
    }
    *(undefined4 *)(param_1 + 0xd8) = param_2;
    return;
  }
LAB_0060fcc4:
                    /* WARNING: Subroutine does not return */
  native_sub_432810();
}



/* MG_BlocksEngine2.EditorScript.BE2_Inspector$$TryAddInstructionToBlock @ 0x60fcd4
 * void MG_BlocksEngine2_EditorScript_BE2_Inspector__TryAddInstructionToBlock (MG_BlocksEngine2_EditorScript_BE2_Inspector_o* __this, System_String_o* className, UnityEngine_GameObject_o* blockGO, const MethodInfo* method); */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* MG_BlocksEngine2.EditorScript.BE2_Inspector$$TryAddInstructionToBlock
   void MG_BlocksEngine2_EditorScript_BE2_Inspector__TryAddInstructionToBlock
   (MG_BlocksEngine2_EditorScript_BE2_Inspector_o* __this, System_String_o* className,
   UnityEngine_GameObject_o* blockGO, const MethodInfo* method); */

void native_MG_BlocksEngine2_EditorScript_BE2_Inspector__TryAddInstructionToBlock_60fcd4
               (undefined8 param_1,undefined8 param_2,long param_3)

{
  undefined8 uVar1;
  ulong uVar2;
  undefined8 uVar3;
  undefined8 extraout_x1;
  undefined8 extraout_x1_00;
  undefined8 *puVar4;
  long lVar5;
  int *piVar6;
  long *plVar7;
  
  if ((bRam000000000133ee52 & 1) == 0) {
    native_sub_43273c(&UnityEngine_Debug_TypeInfo_12d4338);
    native_sub_43273c(&System_Type_TypeInfo_12d6340);
    native_sub_43273c(&StringLiteral___Instruction_added_12eb620);
    param_1 = native_sub_43273c(&StringLiteral___Instruction_not_added_12eb6d8);
    bRam000000000133ee52 = 1;
  }
  uVar1 = native_MG_BlocksEngine2_EditorScript_BE2_Inspector__TryGetType_60fe00(param_1,param_2);
  if (((*(byte *)(_System_Type_TypeInfo_12d6340 + 0x133) >> 2 & 1) != 0) &&
     (*(int *)(_System_Type_TypeInfo_12d6340 + 0xe0) == 0)) {
    native_sub_4327ec(_System_Type_TypeInfo_12d6340);
  }
  uVar2 = native_System_Type__op_Equality_b117c4(uVar1,0,0);
  if ((uVar2 & 1) == 0) {
    uVar1 = native_MG_BlocksEngine2_EditorScript_BE2_Inspector__TryGetType_60fe00(uVar2,param_2);
    if (param_3 == 0) {
                    /* WARNING: Subroutine does not return */
      native_sub_432810();
    }
    native_UnityEngine_GameObject__AddComponent_8de578(param_3,uVar1,0);
    if (((*(byte *)(_UnityEngine_Debug_TypeInfo_12d4338 + 0x133) >> 2 & 1) != 0) &&
       (*(int *)(_UnityEngine_Debug_TypeInfo_12d4338 + 0xe0) == 0)) {
      native_sub_4327ec();
    }
    puVar4 = (undefined8 *)&StringLiteral___Instruction_added_12eb620;
  }
  else {
    if (((*(byte *)(_UnityEngine_Debug_TypeInfo_12d4338 + 0x133) >> 2 & 1) != 0) &&
       (*(int *)(_UnityEngine_Debug_TypeInfo_12d4338 + 0xe0) == 0)) {
      native_sub_4327ec();
    }
    puVar4 = (undefined8 *)&StringLiteral___Instruction_not_added_12eb6d8;
  }
  uVar3 = *puVar4;
  uVar1 = 0;
  if ((bRam0000000001340b50 & 1) == 0) {
    native_sub_43273c(&UnityEngine_Debug_TypeInfo_12d4338,0);
    native_sub_43273c(&UnityEngine_ILogger_TypeInfo_12d4c10);
    bRam0000000001340b50 = 1;
    uVar1 = extraout_x1;
  }
  if (((*(byte *)(_UnityEngine_Debug_TypeInfo_12d4338 + 0x133) >> 2 & 1) != 0) &&
     (*(int *)(_UnityEngine_Debug_TypeInfo_12d4338 + 0xe0) == 0)) {
    native_sub_4327ec();
    uVar1 = extraout_x1_00;
  }
  if (cRam000000000134112a == '\0') {
    native_sub_43273c(&UnityEngine_Debug_TypeInfo_12d4338,uVar1);
    cRam000000000134112a = '\x01';
  }
  if (((*(byte *)(_UnityEngine_Debug_TypeInfo_12d4338 + 0x133) >> 2 & 1) != 0) &&
     (*(int *)(_UnityEngine_Debug_TypeInfo_12d4338 + 0xe0) == 0)) {
    native_sub_4327ec();
  }
  plVar7 = *(long **)(*(long *)(_UnityEngine_Debug_TypeInfo_12d4338 + 0xb8) + 8);
  if (plVar7 == (long *)0x0) {
                    /* WARNING: Subroutine does not return */
    native_sub_432810();
  }
  lVar5 = *plVar7;
  if ((ulong)*(ushort *)(lVar5 + 0x12a) != 0) {
    uVar2 = 0;
    piVar6 = (int *)(*(long *)(lVar5 + 0xb0) + 8);
    do {
      if (*(long *)(piVar6 + -2) == _UnityEngine_ILogger_TypeInfo_12d4c10) {
        puVar4 = (undefined8 *)(lVar5 + (long)(*piVar6 + 2) * 0x10 + 0x138);
        goto code_r0x008dc474;
      }
      uVar2 = uVar2 + 1;
      piVar6 = piVar6 + 4;
    } while (uVar2 < *(ushort *)(lVar5 + 0x12a));
  }
  puVar4 = (undefined8 *)native_sub_3c9b34(plVar7,_UnityEngine_ILogger_TypeInfo_12d4c10,2);
code_r0x008dc474:
                    /* WARNING: Could not recover jumptable at 0x008dc490. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)*puVar4)(plVar7,3,uVar3,puVar4[1]);
  return;
}



/* MG_BlocksEngine2.EditorScript.BE2_Inspector$$TryGetType @ 0x60fe00
 * System_Type_o* MG_BlocksEngine2_EditorScript_BE2_Inspector__TryGetType (MG_BlocksEngine2_EditorScript_BE2_Inspector_o* __this, System_String_o* typeName, const MethodInfo* method); */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* MG_BlocksEngine2.EditorScript.BE2_Inspector$$TryGetType
   System_Type_o* MG_BlocksEngine2_EditorScript_BE2_Inspector__TryGetType
   (MG_BlocksEngine2_EditorScript_BE2_Inspector_o* __this, System_String_o* typeName, const
   MethodInfo* method); */

undefined8
native_MG_BlocksEngine2_EditorScript_BE2_Inspector__TryGetType_60fe00
          (undefined8 param_1,undefined8 param_2)

{
  uint uVar1;
  undefined8 uVar2;
  ulong uVar3;
  long lVar4;
  long *plVar5;
  uint uVar6;
  
  if ((bRam000000000133ee53 & 1) == 0) {
    native_sub_43273c(&Method_MG_BlocksEngine2_EditorScript_BE2_Inspector_TryGetType___12e2260);
    native_sub_43273c(&Method_System_Type_GetType___12e75f8);
    native_sub_43273c(&System_Type_TypeInfo_12d6340);
    bRam000000000133ee53 = 1;
  }
  if (((*(byte *)(_System_Type_TypeInfo_12d6340 + 0x133) >> 2 & 1) != 0) &&
     (*(int *)(_System_Type_TypeInfo_12d6340 + 0xe0) == 0)) {
    native_sub_4327ec();
  }
  uVar2 = native_sub_43294c(_Method_System_Type_GetType___12e75f8,param_2,
                            _Method_MG_BlocksEngine2_EditorScript_BE2_Inspector_TryGetType___12e2260
                           );
  uVar3 = native_System_Type__op_Inequality_b118e0(uVar2,0,0);
  if ((uVar3 & 1) == 0) {
    lVar4 = native_System_AppDomain__get_CurrentDomain_959d1c(0);
    if ((lVar4 == 0) || (lVar4 = native_System_AppDomain__GetAssemblies_959d28(lVar4,0), lVar4 == 0)
       ) {
LAB_0060ff58:
                    /* WARNING: Subroutine does not return */
      native_sub_432810();
    }
    uVar1 = *(uint *)(lVar4 + 0x18);
    if (0 < (int)uVar1) {
      uVar6 = 0;
      do {
        if (uVar1 <= uVar6) {
          uVar2 = native_sub_43283c();
                    /* WARNING: Subroutine does not return */
          native_sub_4327dc(uVar2,0);
        }
        plVar5 = *(long **)(lVar4 + (long)(int)uVar6 * 8 + 0x20);
        if (plVar5 == (long *)0x0) goto LAB_0060ff58;
        uVar2 = (**(code **)(*plVar5 + 0x228))(plVar5,param_2,*(undefined8 *)(*plVar5 + 0x230));
        if (((*(byte *)(_System_Type_TypeInfo_12d6340 + 0x133) >> 2 & 1) != 0) &&
           (*(int *)(_System_Type_TypeInfo_12d6340 + 0xe0) == 0)) {
          native_sub_4327ec(_System_Type_TypeInfo_12d6340);
        }
        uVar3 = native_System_Type__op_Inequality_b118e0(uVar2,0,0);
        if ((uVar3 & 1) != 0) {
          return uVar2;
        }
        uVar1 = *(uint *)(lVar4 + 0x18);
        uVar6 = uVar6 + 1;
      } while ((int)uVar6 < (int)uVar1);
    }
    uVar2 = 0;
  }
  return uVar2;
}



/* MG_BlocksEngine2.EditorScript.BE2_Inspector$$AddBlockToSelectionMenu @ 0x60ff68
 * void MG_BlocksEngine2_EditorScript_BE2_Inspector__AddBlockToSelectionMenu (MG_BlocksEngine2_EditorScript_BE2_Inspector_o* __this, UnityEngine_Transform_o* blockTransform, const MethodInfo* method); */

/* MG_BlocksEngine2.EditorScript.BE2_Inspector$$AddBlockToSelectionMenu
   void MG_BlocksEngine2_EditorScript_BE2_Inspector__AddBlockToSelectionMenu
   (MG_BlocksEngine2_EditorScript_BE2_Inspector_o* __this, UnityEngine_Transform_o* blockTransform,
   const MethodInfo* method); */

void native_MG_BlocksEngine2_EditorScript_BE2_Inspector__AddBlockToSelectionMenu_60ff68
               (undefined8 param_1)

{
  long lVar1;
  ulong uVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  
  lVar1 = native_MG_BlocksEngine2_EditorScript_BE2_Inspector__C_AddBlockToSelectionMenu_60ff94();
  if (lVar1 == 0) {
    native_sub_432740(&System_NullReferenceException_TypeInfo_12d5498,0,0);
    uVar3 = native_sub_432808();
    uVar4 = native_sub_432740(&StringLiteral_routine_is_null_12f5ec0);
    native_System_NullReferenceException___ctor_ad2894(uVar3,uVar4,0);
  }
  else {
    if (pcRam0000000001340fe8 == (code *)0x0) {
      pcRam0000000001340fe8 = (code *)native_sub_4326f0(&UNK_00e2f589);
    }
    uVar2 = (*pcRam0000000001340fe8)(param_1);
    if ((uVar2 & 1) != 0) {
      if (pcRam0000000001340ff8 == (code *)0x0) {
        pcRam0000000001340ff8 = (code *)native_sub_4326f0(&UNK_00e2f61c);
      }
                    /* WARNING: Could not recover jumptable at 0x008e91f0. Too many branches */
                    /* WARNING: Treating indirect jump as call */
      (*pcRam0000000001340ff8)(param_1,lVar1);
      return;
    }
    native_sub_432740(&System_ArgumentException_TypeInfo_12d3800);
    uVar3 = native_sub_432808();
    uVar4 = native_sub_432740(&
                              StringLiteral_Coroutines_can_only_be_stopped_on_a_MonoBehaviour_12ed328
                             );
    native_System_ArgumentException___ctor_953858(uVar3,uVar4,0);
  }
  uVar4 = native_sub_432740(&Method_UnityEngine_MonoBehaviour_StartCoroutine___12e55d8);
                    /* WARNING: Subroutine does not return */
  native_sub_4327dc(uVar3,uVar4);
}



/* MG_BlocksEngine2.EditorScript.BE2_Inspector$$C_AddBlockToSelectionMenu @ 0x60ff94
 * System_Collections_IEnumerator_o* MG_BlocksEngine2_EditorScript_BE2_Inspector__C_AddBlockToSelectionMenu (MG_BlocksEngine2_EditorScript_BE2_Inspector_o* __this, UnityEngine_Transform_o* blockTransform, const MethodInfo* method); */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* MG_BlocksEngine2.EditorScript.BE2_Inspector$$C_AddBlockToSelectionMenu
   System_Collections_IEnumerator_o*
   MG_BlocksEngine2_EditorScript_BE2_Inspector__C_AddBlockToSelectionMenu
   (MG_BlocksEngine2_EditorScript_BE2_Inspector_o* __this, UnityEngine_Transform_o* blockTransform,
   const MethodInfo* method); */

long native_MG_BlocksEngine2_EditorScript_BE2_Inspector__C_AddBlockToSelectionMenu_60ff94
               (undefined8 param_1,undefined8 param_2)

{
  long lVar1;
  
  if ((bRam000000000133ee54 & 1) == 0) {
    native_sub_43273c(&
                      MG_BlocksEngine2_EditorScript_BE2_Inspector__C_AddBlockToSelectionMenu_d__38_TypeInfo_12d7040
                     );
    bRam000000000133ee54 = 1;
  }
  lVar1 = native_sub_432808(
                           _MG_BlocksEngine2_EditorScript_BE2_Inspector__C_AddBlockToSelectionMenu_d__38_TypeInfo_12d7040
                           );
  native_MG_BlocksEngine2_EditorScript_BE2_Inspector__C_AddBlockToSelectionMenu_d__38___ctor_548790
            (lVar1,0,0);
  if (lVar1 != 0) {
    *(undefined8 *)(lVar1 + 0x20) = param_2;
    native_sub_4326e0((undefined8 *)(lVar1 + 0x20),param_2);
    return lVar1;
  }
                    /* WARNING: Subroutine does not return */
  native_sub_432810();
}



/* MG_BlocksEngine2.EditorScript.BE2_Inspector$$BuildAndInstantiateBlock @ 0x61000c
 * UnityEngine_Transform_o* MG_BlocksEngine2_EditorScript_BE2_Inspector__BuildAndInstantiateBlock (MG_BlocksEngine2_EditorScript_BE2_Inspector_o* __this, System_String_o* instructionName, const MethodInfo* method); */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* MG_BlocksEngine2.EditorScript.BE2_Inspector$$BuildAndInstantiateBlock
   UnityEngine_Transform_o* MG_BlocksEngine2_EditorScript_BE2_Inspector__BuildAndInstantiateBlock
   (MG_BlocksEngine2_EditorScript_BE2_Inspector_o* __this, System_String_o* instructionName, const
   MethodInfo* method); */

long native_MG_BlocksEngine2_EditorScript_BE2_Inspector__BuildAndInstantiateBlock_61000c
               (undefined1 param_1 [16],undefined8 param_2,undefined8 param_3,undefined8 param_4,
               long param_5,undefined8 param_6)

{
  uint uVar1;
  bool bVar2;
  short sVar3;
  long lVar4;
  undefined8 uVar5;
  long lVar6;
  long *plVar7;
  long *plVar8;
  undefined8 *puVar9;
  long lVar10;
  long lVar11;
  long lVar12;
  long lVar13;
  ulong uVar14;
  ulong uVar15;
  int *piVar16;
  uint uVar17;
  undefined8 uVar18;
  long lVar19;
  ulong uVar20;
  int iVar21;
  long lVar22;
  uint uVar23;
  long lVar24;
  uint uVar25;
  undefined8 uVar26;
  ulong uVar27;
  ulong uVar28;
  undefined4 uVar29;
  undefined2 auStack_94 [2];
  
  if ((bRam000000000133ee55 & 1) == 0) {
    native_sub_43273c(&char___TypeInfo_12d3090);
    native_sub_43273c(&UnityEngine_Debug_TypeInfo_12d4338);
    native_sub_43273c(&Method_UnityEngine_GameObject_GetComponent_I_BE2_BlockLayout____12e49a0);
    native_sub_43273c(&Method_UnityEngine_GameObject_GetComponent_I_BE2_Block____12e4998);
    native_sub_43273c(&MG_BlocksEngine2_Block_I_BE2_BlockLayout_TypeInfo_12d4de0);
    native_sub_43273c(&MG_BlocksEngine2_Block_I_BE2_Block_TypeInfo_12d4dd8);
    native_sub_43273c(&Method_System_Collections_Generic_List_string__Add___12dcea0);
    native_sub_43273c(&Method_System_Collections_Generic_List_string___ctor___12dce88);
    native_sub_43273c(&Method_System_Collections_Generic_List_string__get_Count___12dcef8);
    native_sub_43273c(&Method_System_Collections_Generic_List_string__get_Item___12dcf00);
    native_sub_43273c(&System_Collections_Generic_List_string__TypeInfo_12d2b60);
    native_sub_43273c(&Method_UnityEngine_Object_FindObjectOfType_BE2_ProgrammingEnv____12e5a10);
    native_sub_43273c(&Method_UnityEngine_Object_Instantiate_GameObject____12e5a88);
    native_sub_43273c(&UnityEngine_Object_TypeInfo_12d54e0);
    native_sub_43273c(&StringLiteral__text_12eb120);
    native_sub_43273c(&StringLiteral___Block_created_12eb610);
    native_sub_43273c(&StringLiteral_Block_Cst__12ec7d0);
    native_sub_43273c(&StringLiteral__dropdown_12eb118);
    native_sub_43273c(&StringLiteral__12eaac0);
    bRam000000000133ee55 = 1;
  }
  auStack_94[0] = 0;
  iVar21 = *(int *)(param_5 + 0x88);
  if (iVar21 == 4) {
    uVar18 = *(undefined8 *)(param_5 + 0x28);
  }
  else if (iVar21 == 3) {
    uVar18 = *(undefined8 *)(param_5 + 0x30);
  }
  else if (iVar21 == 0) {
    uVar18 = *(undefined8 *)(param_5 + 0x20);
  }
  else {
    uVar18 = *(undefined8 *)(param_5 + 0x18);
  }
  uVar26 = native_UnityEngine_Quaternion__get_identity_7628fc(0);
  if (((*(byte *)(_UnityEngine_Object_TypeInfo_12d54e0 + 0x133) >> 2 & 1) != 0) &&
     (*(int *)(_UnityEngine_Object_TypeInfo_12d54e0 + 0xe0) == 0)) {
    native_sub_4327ec();
  }
  lVar4 = native_UnityEngine_Object__FindObjectOfType_BE2_DragDropManager__4a6274
                    (_Method_UnityEngine_Object_FindObjectOfType_BE2_ProgrammingEnv____12e5a10);
  if (lVar4 != 0) {
    uVar5 = native_UnityEngine_Component__get_transform_8da62c(lVar4,0);
    lVar4 = native_UnityEngine_Object__Instantiate_BE2_Ins_DefineFunction__4a67c0
                      (0x435b0000,0xc35b0000,0,uVar26,param_2,param_3,param_4,uVar18,uVar5,
                       _Method_UnityEngine_Object_Instantiate_GameObject____12e5a88);
    uVar18 = native_System_String__Concat_afbd68(_StringLiteral_Block_Cst__12ec7d0,param_6,0);
    if (lVar4 != 0) {
      native_UnityEngine_Object__set_name_8e9c08(lVar4,uVar18,0);
      lVar6 = native_UnityEngine_GameObject__get_transform_8de5c8(lVar4,0);
      if (lVar6 != 0) {
        native_UnityEngine_Transform__set_localPosition_7718a4(0x435b0000,0xc35b0000,0,lVar6,0);
        lVar6 = native_UnityEngine_GameObject__get_transform_8de5c8(lVar4,0);
        plVar7 = (long *)native_UnityEngine_GameObject__GetComponent_BE2_BlockSectionHeader_Custom__4a2214
                                   (lVar4,
                                    _Method_UnityEngine_GameObject_GetComponent_I_BE2_Block____12e4998
                                   );
        plVar8 = (long *)native_UnityEngine_GameObject__GetComponent_BE2_BlockSectionHeader_Custom__4a2214
                                   (lVar4,
                                    _Method_UnityEngine_GameObject_GetComponent_I_BE2_BlockLayout____12e49a0
                                   );
        if (*(int *)(param_5 + 0x88) == 2) {
          if (plVar7 == (long *)0x0) goto LAB_00610e64;
          lVar12 = *plVar7;
          if ((ulong)*(ushort *)(lVar12 + 0x12a) != 0) {
            uVar14 = 0;
            piVar16 = (int *)(*(long *)(lVar12 + 0xb0) + 8);
            do {
              if (*(long *)(piVar16 + -2) == _MG_BlocksEngine2_Block_I_BE2_Block_TypeInfo_12d4dd8) {
                puVar9 = (undefined8 *)(lVar12 + (long)(*piVar16 + 2) * 0x10 + 0x138);
                goto LAB_00610314;
              }
              uVar14 = uVar14 + 1;
              piVar16 = piVar16 + 4;
            } while (uVar14 < *(ushort *)(lVar12 + 0x12a));
          }
          puVar9 = (undefined8 *)
                   native_sub_3c9b34(plVar7,_MG_BlocksEngine2_Block_I_BE2_Block_TypeInfo_12d4dd8,2);
LAB_00610314:
          (*(code *)*puVar9)(plVar7,2,puVar9[1]);
        }
        if (plVar8 != (long *)0x0) {
          uVar29 = *(undefined4 *)(param_5 + 0x8c);
          uVar27 = (ulong)*(uint *)(param_5 + 0x90);
          lVar12 = *plVar8;
          uVar28 = (ulong)*(uint *)(param_5 + 0x94);
          uVar14 = (ulong)*(uint *)(param_5 + 0x98);
          if ((ulong)*(ushort *)(lVar12 + 0x12a) != 0) {
            uVar15 = 0;
            piVar16 = (int *)(*(long *)(lVar12 + 0xb0) + 8);
            do {
              if (*(long *)(piVar16 + -2) ==
                  _MG_BlocksEngine2_Block_I_BE2_BlockLayout_TypeInfo_12d4de0) {
                puVar9 = (undefined8 *)(lVar12 + (long)(*piVar16 + 4) * 0x10 + 0x138);
                goto LAB_00610390;
              }
              uVar15 = uVar15 + 1;
              piVar16 = piVar16 + 4;
            } while (uVar15 < *(ushort *)(lVar12 + 0x12a));
          }
          puVar9 = (undefined8 *)
                   native_sub_3c9b34(plVar8,
                                     _MG_BlocksEngine2_Block_I_BE2_BlockLayout_TypeInfo_12d4de0,4);
LAB_00610390:
          (*(code *)*puVar9)(uVar29,uVar27,uVar28,uVar14,plVar8,puVar9[1]);
          lVar19 = *(long *)(param_5 + 0xa0);
          lVar12 = native_sub_432750(_char___TypeInfo_12d3090,1);
          if (lVar12 != 0) {
            if (*(int *)(lVar12 + 0x18) == 0) {
LAB_00610e68:
              uVar18 = native_sub_43283c();
                    /* WARNING: Subroutine does not return */
              native_sub_4327dc(uVar18,0);
            }
            *(undefined2 *)(lVar12 + 0x20) = 10;
            if ((lVar19 != 0) &&
               (lVar12 = native_System_String__Split_b095f4(lVar19,lVar12,0), lVar12 != 0)) {
              if (0 < *(int *)(lVar12 + 0x18)) {
                uVar17 = 0;
                uVar23 = 0;
                do {
                  if (uVar17 == 0) {
                    if ((((lVar6 == 0) ||
                         (lVar19 = native_UnityEngine_Transform__GetChild_772ef0(lVar6,0,0),
                         lVar19 == 0)) ||
                        (lVar19 = native_UnityEngine_Component__get_gameObject_8da66c(lVar19,0),
                        lVar19 == 0)) ||
                       ((lVar10 = native_UnityEngine_GameObject__get_transform_8de5c8(lVar19,0),
                        lVar10 == 0 ||
                        (lVar10 = native_UnityEngine_Transform__GetChild_772ef0(lVar10,0,0),
                        lVar10 == 0)))) goto LAB_00610e64;
                    lVar10 = native_UnityEngine_Component__get_gameObject_8da66c(lVar10,0);
                  }
                  else {
                    uVar18 = *(undefined8 *)(param_5 + 0x38);
                    uVar26 = native_UnityEngine_Vector3__get_zero_776668(0);
                    uVar15 = uVar27;
                    uVar20 = uVar28;
                    uVar5 = native_UnityEngine_Quaternion__get_identity_7628fc(0);
                    if (((*(byte *)(_UnityEngine_Object_TypeInfo_12d54e0 + 0x133) >> 2 & 1) != 0) &&
                       (*(int *)(_UnityEngine_Object_TypeInfo_12d54e0 + 0xe0) == 0)) {
                      native_sub_4327ec();
                    }
                    lVar19 = native_UnityEngine_Object__Instantiate_BE2_Ins_DefineFunction__4a67c0
                                       (uVar26,uVar27,uVar28,uVar5,uVar15,uVar20,uVar14,uVar18,lVar6
                                        ,
                                        _Method_UnityEngine_Object_Instantiate_GameObject____12e5a88
                                       );
                    uVar18 = *(undefined8 *)(param_5 + 0x48);
                    uVar26 = native_UnityEngine_Vector3__get_zero_776668(0);
                    uVar14 = native_UnityEngine_Quaternion__get_identity_7628fc(0);
                    if (lVar19 == 0) goto LAB_00610e64;
                    uVar5 = native_UnityEngine_GameObject__get_transform_8de5c8(lVar19,0);
                    lVar10 = native_UnityEngine_Object__Instantiate_BE2_Ins_DefineFunction__4a67c0
                                       (uVar26,uVar18,uVar5,
                                        _Method_UnityEngine_Object_Instantiate_GameObject____12e5a88
                                       );
                  }
                  if (*(int *)(param_5 + 0x88) - 1U < 2) {
                    if (uVar17 == *(int *)(lVar12 + 0x18) - 1U) {
                      uVar18 = *(undefined8 *)(param_5 + 0x50);
                    }
                    else {
                      uVar18 = *(undefined8 *)(param_5 + 0x58);
                    }
                    uVar26 = native_UnityEngine_Vector3__get_zero_776668(0);
                    uVar14 = native_UnityEngine_Quaternion__get_identity_7628fc(0);
                    if (lVar19 == 0) goto LAB_00610e64;
                    uVar5 = native_UnityEngine_GameObject__get_transform_8de5c8(lVar19,0);
                    if (((*(byte *)(_UnityEngine_Object_TypeInfo_12d54e0 + 0x133) >> 2 & 1) != 0) &&
                       (*(int *)(_UnityEngine_Object_TypeInfo_12d54e0 + 0xe0) == 0)) {
                      native_sub_4327ec(_UnityEngine_Object_TypeInfo_12d54e0);
                    }
                    native_UnityEngine_Object__Instantiate_BE2_Ins_DefineFunction__4a67c0
                              (uVar26,uVar18,uVar5,
                               _Method_UnityEngine_Object_Instantiate_GameObject____12e5a88);
                  }
                  lVar19 = native_sub_432808(
                                            _System_Collections_Generic_List_string__TypeInfo_12d2b60
                                            );
                  native_System_Collections_Generic_List_XmlEventCache_XmlEvent______ctor_d3ff44
                            (lVar19,_Method_System_Collections_Generic_List_string___ctor___12dce88)
                  ;
                  if (*(uint *)(lVar12 + 0x18) <= uVar17) goto LAB_00610e68;
                  bVar2 = false;
                  iVar21 = 0;
                  plVar7 = (long *)(lVar12 + (long)(int)uVar17 * 8 + 0x20);
                  uVar18 = _StringLiteral__12eaac0;
                  while( true ) {
                    lVar11 = *plVar7;
                    if (lVar11 == 0) goto LAB_00610e64;
                    if (*(int *)(lVar11 + 0x10) <= iVar21) break;
                    sVar3 = native_System_String__get_Chars_b03810(lVar11,iVar21,0);
                    if (sVar3 == 0x24) {
                      if (lVar19 == 0) goto LAB_00610e64;
                      native_System_Collections_Generic_List_int_____Add_d40c00
                                (lVar19,uVar18,
                                 _Method_System_Collections_Generic_List_string__Add___12dcea0);
                      uVar18 = _StringLiteral__12eaac0;
LAB_006106bc:
                      if (*(uint *)(lVar12 + 0x18) <= uVar17) goto LAB_00610e68;
                      if (*plVar7 == 0) goto LAB_00610e64;
                      sVar3 = native_System_String__get_Chars_b03810(*plVar7,iVar21,0);
                      if (sVar3 == 0x20) {
                        if (lVar19 != 0) {
                          native_System_Collections_Generic_List_int_____Add_d40c00
                                    (lVar19,uVar18,
                                     _Method_System_Collections_Generic_List_string__Add___12dcea0);
                          uVar18 = _StringLiteral__12eaac0;
                          goto LAB_0061070c;
                        }
                        goto LAB_00610e64;
                      }
                      bVar2 = true;
                    }
                    else {
                      if (bVar2) goto LAB_006106bc;
LAB_0061070c:
                      bVar2 = false;
                    }
                    if (*(uint *)(lVar12 + 0x18) <= uVar17) goto LAB_00610e68;
                    if (*plVar7 == 0) goto LAB_00610e64;
                    auStack_94[0] = native_System_String__get_Chars_b03810(*plVar7,iVar21,0);
                    uVar26 = native_System_Char__ToString_793ee0(auStack_94,0);
                    uVar18 = native_System_String__Concat_afbd68(uVar18,uVar26,0);
                    iVar21 = iVar21 + 1;
                    if (*(uint *)(lVar12 + 0x18) <= uVar17) goto LAB_00610e68;
                  }
                  if (lVar19 == 0) goto LAB_00610e64;
                  native_System_Collections_Generic_List_int_____Add_d40c00
                            (lVar19,uVar18,
                             _Method_System_Collections_Generic_List_string__Add___12dcea0);
                  uVar15 = (ulong)*(uint *)(lVar19 + 0x18);
                  if (0 < (int)*(uint *)(lVar19 + 0x18)) {
                    uVar20 = 0;
                    do {
                      if ((uVar15 & 0xffffffff) <= uVar20) {
                        native_System_ThrowHelper__ThrowArgumentOutOfRangeException_9fe0f4(0);
                      }
                      uVar14 = native_System_String__op_Equality_afc18c
                                         (*(undefined8 *)
                                           (*(long *)(lVar19 + 0x10) + uVar20 * 8 + 0x20),
                                          _StringLiteral__text_12eb120,0);
                      if ((uVar14 & 1) == 0) {
                        if (*(uint *)(lVar19 + 0x18) <= uVar20) {
                          native_System_ThrowHelper__ThrowArgumentOutOfRangeException_9fe0f4(0);
                        }
                        uVar14 = native_System_String__op_Equality_afc18c
                                           (*(undefined8 *)
                                             (*(long *)(lVar19 + 0x10) + uVar20 * 8 + 0x20),
                                            _StringLiteral__dropdown_12eb118,0);
                        if ((uVar14 & 1) == 0) {
                          uVar18 = *(undefined8 *)(param_5 + 0x78);
                          uVar26 = native_UnityEngine_Vector3__get_zero_776668(0);
                          uVar14 = native_UnityEngine_Quaternion__get_identity_7628fc(0);
                          if (lVar10 == 0) goto LAB_00610e64;
                          uVar5 = native_UnityEngine_GameObject__get_transform_8de5c8(lVar10,0);
                          if (((*(byte *)(_UnityEngine_Object_TypeInfo_12d54e0 + 0x133) >> 2 & 1) !=
                               0) && (*(int *)(_UnityEngine_Object_TypeInfo_12d54e0 + 0xe0) == 0)) {
                            native_sub_4327ec(_UnityEngine_Object_TypeInfo_12d54e0);
                          }
                          lVar11 = native_UnityEngine_Object__Instantiate_BE2_Ins_DefineFunction__4a67c0
                                             (uVar26,uVar18,uVar5,
                                              _Method_UnityEngine_Object_Instantiate_GameObject____12e5a88
                                             );
                          if (lVar11 == 0) goto LAB_00610e64;
                          native_UnityEngine_GameObject__get_transform_8de5c8(lVar11,0);
                          lVar11 = native_MG_BlocksEngine2_Utils_BE2_Text__GetBE2Text_610e74();
                          if (*(uint *)(lVar19 + 0x18) <= uVar20) {
                            native_System_ThrowHelper__ThrowArgumentOutOfRangeException_9fe0f4(0);
                          }
                          lVar22 = *(long *)(*(long *)(lVar19 + 0x10) + uVar20 * 8 + 0x20);
                          lVar13 = native_sub_432750(_char___TypeInfo_12d3090,1);
                          if (lVar13 == 0) goto LAB_00610e64;
                          if (*(int *)(lVar13 + 0x18) == 0) goto LAB_00610e68;
                          *(undefined2 *)(lVar13 + 0x20) = 0x20;
                          if (lVar22 == 0) goto LAB_00610e64;
                          lVar13 = native_System_String__TrimEnd_b0a45c(lVar22,lVar13,0);
                          lVar22 = native_sub_432750(_char___TypeInfo_12d3090,1);
                          if (lVar22 == 0) goto LAB_00610e64;
                          if (*(int *)(lVar22 + 0x18) == 0) goto LAB_00610e68;
                          *(undefined2 *)(lVar22 + 0x20) = 0x20;
                          if ((lVar13 == 0) ||
                             (uVar18 = native_System_String__TrimStart_b0a440(lVar13,lVar22,0),
                             lVar11 == 0)) goto LAB_00610e64;
                          native_MG_BlocksEngine2_Utils_BE2_Text__set_text_610ef8(lVar11,uVar18);
                        }
                        else {
                          uVar18 = *(undefined8 *)(param_5 + 0x68);
                          uVar26 = native_UnityEngine_Vector3__get_zero_776668(0);
                          uVar14 = native_UnityEngine_Quaternion__get_identity_7628fc(0);
                          if (lVar10 == 0) goto LAB_00610e64;
                          uVar5 = native_UnityEngine_GameObject__get_transform_8de5c8(lVar10,0);
                          if (((*(byte *)(_UnityEngine_Object_TypeInfo_12d54e0 + 0x133) >> 2 & 1) !=
                               0) && (*(int *)(_UnityEngine_Object_TypeInfo_12d54e0 + 0xe0) == 0)) {
                            native_sub_4327ec(_UnityEngine_Object_TypeInfo_12d54e0);
                          }
                          lVar11 = native_UnityEngine_Object__Instantiate_BE2_Ins_DefineFunction__4a67c0
                                             (uVar26,uVar18,uVar5,
                                              _Method_UnityEngine_Object_Instantiate_GameObject____12e5a88
                                             );
                          if (lVar11 == 0) goto LAB_00610e64;
                          uVar18 = native_UnityEngine_GameObject__get_transform_8de5c8(lVar11,0);
                          lVar11 = native_MG_BlocksEngine2_Utils_BE2_Dropdown__GetBE2Component_566f34
                                             (uVar18,0);
                          if (lVar11 == 0) goto LAB_00610e64;
                          native_MG_BlocksEngine2_Utils_BE2_Dropdown__ClearOptions_580490(lVar11,0);
                          lVar13 = *(long *)(param_5 + 0xa8);
                          if (lVar13 == 0) goto LAB_00610e64;
                          if (*(uint *)(lVar13 + 0x18) <= uVar23) goto LAB_00610e68;
                          lVar22 = *(long *)(lVar13 + (long)(int)uVar23 * 8 + 0x20);
                          lVar13 = native_sub_432750(_char___TypeInfo_12d3090,1);
                          if (lVar13 == 0) goto LAB_00610e64;
                          if (*(int *)(lVar13 + 0x18) == 0) goto LAB_00610e68;
                          *(undefined2 *)(lVar13 + 0x20) = 0x2c;
                          if ((lVar22 == 0) ||
                             (lVar13 = native_System_String__Split_b095f4(lVar22,lVar13,0),
                             lVar13 == 0)) goto LAB_00610e64;
                          uVar1 = *(uint *)(lVar13 + 0x18);
                          if (0 < (int)uVar1) {
                            uVar25 = 0;
                            do {
                              if (uVar1 <= uVar25) goto LAB_00610e68;
                              lVar24 = *(long *)(lVar13 + (long)(int)uVar25 * 8 + 0x20);
                              lVar22 = native_sub_432750(_char___TypeInfo_12d3090,1);
                              if (lVar22 == 0) goto LAB_00610e64;
                              if (*(int *)(lVar22 + 0x18) == 0) goto LAB_00610e68;
                              *(undefined2 *)(lVar22 + 0x20) = 0x20;
                              if (lVar24 == 0) goto LAB_00610e64;
                              lVar22 = native_System_String__TrimEnd_b0a45c(lVar24,lVar22,0);
                              lVar24 = native_sub_432750(_char___TypeInfo_12d3090,1);
                              if (lVar24 == 0) goto LAB_00610e64;
                              if (*(int *)(lVar24 + 0x18) == 0) goto LAB_00610e68;
                              *(undefined2 *)(lVar24 + 0x20) = 0x20;
                              if (lVar22 == 0) goto LAB_00610e64;
                              uVar18 = native_System_String__TrimStart_b0a440(lVar22,lVar24,0);
                              native_MG_BlocksEngine2_Utils_BE2_Dropdown__AddOption_580570
                                        (lVar11,uVar18,0);
                              uVar1 = *(uint *)(lVar13 + 0x18);
                              uVar25 = uVar25 + 1;
                            } while ((int)uVar25 < (int)uVar1);
                          }
                          uVar23 = uVar23 + 1;
                        }
                      }
                      else {
                        uVar18 = *(undefined8 *)(param_5 + 0x70);
                        uVar26 = native_UnityEngine_Vector3__get_zero_776668(0);
                        uVar14 = native_UnityEngine_Quaternion__get_identity_7628fc(0);
                        if (lVar10 == 0) goto LAB_00610e64;
                        uVar5 = native_UnityEngine_GameObject__get_transform_8de5c8(lVar10,0);
                        if (((*(byte *)(_UnityEngine_Object_TypeInfo_12d54e0 + 0x133) >> 2 & 1) != 0
                            ) && (*(int *)(_UnityEngine_Object_TypeInfo_12d54e0 + 0xe0) == 0)) {
                          native_sub_4327ec(_UnityEngine_Object_TypeInfo_12d54e0);
                        }
                        lVar11 = native_UnityEngine_Object__Instantiate_BE2_Ins_DefineFunction__4a67c0
                                           (uVar26,uVar18,uVar5,
                                            _Method_UnityEngine_Object_Instantiate_GameObject____12e5a88
                                           );
                        if (lVar11 == 0) goto LAB_00610e64;
                        native_UnityEngine_GameObject__get_transform_8de5c8(lVar11,0);
                        lVar11 = native_MG_BlocksEngine2_Utils_BE2_InputField__GetBE2Component_601c18
                                           ();
                        lVar13 = *(long *)(param_5 + 0xa8);
                        if (lVar13 == 0) goto LAB_00610e64;
                        if (*(uint *)(lVar13 + 0x18) <= uVar23) goto LAB_00610e68;
                        lVar22 = *(long *)(lVar13 + (long)(int)uVar23 * 8 + 0x20);
                        lVar13 = native_sub_432750(_char___TypeInfo_12d3090,1);
                        if (lVar13 == 0) goto LAB_00610e64;
                        if (*(int *)(lVar13 + 0x18) == 0) goto LAB_00610e68;
                        *(undefined2 *)(lVar13 + 0x20) = 0x20;
                        if (lVar22 == 0) goto LAB_00610e64;
                        lVar13 = native_System_String__TrimEnd_b0a45c(lVar22,lVar13,0);
                        lVar22 = native_sub_432750(_char___TypeInfo_12d3090,1);
                        if (lVar22 == 0) goto LAB_00610e64;
                        if (*(int *)(lVar22 + 0x18) == 0) goto LAB_00610e68;
                        *(undefined2 *)(lVar22 + 0x20) = 0x20;
                        if ((lVar13 == 0) ||
                           (uVar18 = native_System_String__TrimStart_b0a440(lVar13,lVar22,0),
                           lVar11 == 0)) goto LAB_00610e64;
                        native_MG_BlocksEngine2_Utils_BE2_InputField__set_text_6024ec(lVar11,uVar18)
                        ;
                        uVar23 = uVar23 + 1;
                      }
                      uVar15 = (ulong)*(int *)(lVar19 + 0x18);
                      uVar20 = uVar20 + 1;
                    } while ((long)uVar20 < (long)uVar15);
                  }
                  uVar17 = uVar17 + 1;
                } while ((int)uVar17 < *(int *)(lVar12 + 0x18));
              }
              if (*(int *)(param_5 + 0x88) - 1U < 2) {
                uVar18 = *(undefined8 *)(param_5 + 0x60);
                uVar26 = native_UnityEngine_Vector3__get_zero_776668(0);
                uVar15 = uVar27;
                uVar20 = uVar28;
                uVar5 = native_UnityEngine_Quaternion__get_identity_7628fc(0);
                if (((*(byte *)(_UnityEngine_Object_TypeInfo_12d54e0 + 0x133) >> 2 & 1) != 0) &&
                   (*(int *)(_UnityEngine_Object_TypeInfo_12d54e0 + 0xe0) == 0)) {
                  native_sub_4327ec();
                }
                native_UnityEngine_Object__Instantiate_BE2_Ins_DefineFunction__4a67c0
                          (uVar26,uVar27,uVar28,uVar5,uVar15,uVar20,uVar14,uVar18,lVar6,
                           _Method_UnityEngine_Object_Instantiate_GameObject____12e5a88);
              }
              plVar7 = (long *)native_UnityEngine_GameObject__GetComponent_BE2_BlockSectionHeader_Custom__4a2214
                                         (lVar4,
                                          _Method_UnityEngine_GameObject_GetComponent_I_BE2_BlockLayout____12e49a0
                                         );
              if (plVar7 != (long *)0x0) {
                lVar4 = *plVar7;
                if ((ulong)*(ushort *)(lVar4 + 0x12a) != 0) {
                  uVar14 = 0;
                  piVar16 = (int *)(*(long *)(lVar4 + 0xb0) + 8);
                  do {
                    if (*(long *)(piVar16 + -2) ==
                        _MG_BlocksEngine2_Block_I_BE2_BlockLayout_TypeInfo_12d4de0) {
                      puVar9 = (undefined8 *)(lVar4 + (long)(*piVar16 + 6) * 0x10 + 0x138);
                      goto LAB_00610df0;
                    }
                    uVar14 = uVar14 + 1;
                    piVar16 = piVar16 + 4;
                  } while (uVar14 < *(ushort *)(lVar4 + 0x12a));
                }
                puVar9 = (undefined8 *)
                         native_sub_3c9b34(plVar7,
                                           _MG_BlocksEngine2_Block_I_BE2_BlockLayout_TypeInfo_12d4de0
                                           ,6);
LAB_00610df0:
                (*(code *)*puVar9)(plVar7,puVar9[1]);
                if (((*(byte *)(_UnityEngine_Debug_TypeInfo_12d4338 + 0x133) >> 2 & 1) != 0) &&
                   (*(int *)(_UnityEngine_Debug_TypeInfo_12d4338 + 0xe0) == 0)) {
                  native_sub_4327ec();
                }
                native_UnityEngine_Debug__Log_8dc36c(_StringLiteral___Block_created_12eb610,0);
                return lVar6;
              }
            }
          }
        }
      }
    }
  }
LAB_00610e64:
                    /* WARNING: Subroutine does not return */
  native_sub_432810();
}



/* MG_BlocksEngine2.EditorScript.BE2_Inspector$$AllIndexesOf @ 0x610fe4
 * System_Collections_Generic_List_int__o* MG_BlocksEngine2_EditorScript_BE2_Inspector__AllIndexesOf (MG_BlocksEngine2_EditorScript_BE2_Inspector_o* __this, System_String_o* str, System_String_o* value, const MethodInfo* method); */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* MG_BlocksEngine2.EditorScript.BE2_Inspector$$AllIndexesOf
   System_Collections_Generic_List_int__o* MG_BlocksEngine2_EditorScript_BE2_Inspector__AllIndexesOf
   (MG_BlocksEngine2_EditorScript_BE2_Inspector_o* __this, System_String_o* str, System_String_o*
   value, const MethodInfo* method); */

long native_MG_BlocksEngine2_EditorScript_BE2_Inspector__AllIndexesOf_610fe4
               (undefined8 param_1,long param_2,long param_3)

{
  int iVar1;
  long lVar2;
  
  if ((bRam000000000133ee56 & 1) == 0) {
    native_sub_43273c(&Method_System_Collections_Generic_List_int__Add___12dca88);
    native_sub_43273c(&Method_System_Collections_Generic_List_int___ctor___12dca80);
    native_sub_43273c(&System_Collections_Generic_List_int__TypeInfo_12d2aa0);
    bRam000000000133ee56 = 1;
  }
  lVar2 = native_sub_432808(_System_Collections_Generic_List_int__TypeInfo_12d2aa0);
  native_System_Collections_Generic_List_int____ctor_d38324
            (lVar2,_Method_System_Collections_Generic_List_int___ctor___12dca80);
  if (param_2 != 0) {
    iVar1 = native_System_String__IndexOf_b0c054(param_2,param_3,0,0);
    while( true ) {
      if (iVar1 == -1) {
        return lVar2;
      }
      if ((lVar2 == 0) ||
         (native_System_Collections_Generic_List_int___Add_d39078
                    (lVar2,iVar1,_Method_System_Collections_Generic_List_int__Add___12dca88),
         param_3 == 0)) break;
      iVar1 = native_System_String__IndexOf_b0c054
                        (param_2,param_3,*(int *)(param_3 + 0x10) + iVar1,0);
    }
  }
                    /* WARNING: Subroutine does not return */
  native_sub_432810();
}



/* MG_BlocksEngine2.EditorScript.BE2_Inspector$$CreateInstructionScript @ 0x6110e0
 * System_String_o* MG_BlocksEngine2_EditorScript_BE2_Inspector__CreateInstructionScript (MG_BlocksEngine2_EditorScript_BE2_Inspector_o* __this, System_String_o* instructionName, const MethodInfo* method); */

/* WARNING: Removing unreachable block (ram,0x006114c0) */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* MG_BlocksEngine2.EditorScript.BE2_Inspector$$CreateInstructionScript
   System_String_o* MG_BlocksEngine2_EditorScript_BE2_Inspector__CreateInstructionScript
   (MG_BlocksEngine2_EditorScript_BE2_Inspector_o* __this, System_String_o* instructionName, const
   MethodInfo* method); */

undefined8
native_MG_BlocksEngine2_EditorScript_BE2_Inspector__CreateInstructionScript_6110e0
          (undefined8 param_1,undefined8 param_2)

{
  uint uVar1;
  undefined2 uVar2;
  long lVar3;
  undefined8 uVar4;
  undefined8 uVar5;
  long *plVar6;
  long lVar7;
  ulong uVar8;
  undefined8 *puVar9;
  int *piVar10;
  uint uVar11;
  
  if ((bRam000000000133ee57 & 1) == 0) {
    native_sub_43273c(&char___TypeInfo_12d3090);
    native_sub_43273c(&UnityEngine_Debug_TypeInfo_12d4338);
    native_sub_43273c(&System_IDisposable_TypeInfo_12d4b00);
    native_sub_43273c(&System_IO_StreamReader_TypeInfo_12d5f10);
    native_sub_43273c(&System_IO_StreamWriter_TypeInfo_12d5f18);
    native_sub_43273c(&StringLiteral___12eab80);
    native_sub_43273c(&StringLiteral_BE2_Cst__12ec6e8);
    native_sub_43273c(&StringLiteral__instructionName__12f3360);
    native_sub_43273c(&StringLiteral___Instruction_already_exists_12eb6d0);
    native_sub_43273c(&StringLiteral___Start_creating_instruction_12eb628);
    native_sub_43273c(&
                      StringLiteral__BlocksEngine2_Scripts_EditorScripts_InstructionScriptTemplate_txt_12eb850
                     );
    native_sub_43273c(&StringLiteral__cs_12eb7f8);
    bRam000000000133ee57 = 1;
  }
  if (((*(byte *)(_UnityEngine_Debug_TypeInfo_12d4338 + 0x133) >> 2 & 1) != 0) &&
     (*(int *)(_UnityEngine_Debug_TypeInfo_12d4338 + 0xe0) == 0)) {
    native_sub_4327ec();
  }
  native_UnityEngine_Debug__Log_8dc36c(_StringLiteral___Start_creating_instruction_12eb628,0);
  lVar3 = native_MG_BlocksEngine2_EditorScript_BE2_Inspector__get_Instance_602da4();
  if (lVar3 != 0) {
    uVar4 = native_MG_BlocksEngine2_Utils_BE2_Paths__TranslateMarkupPath_611528
                      (*(undefined8 *)(lVar3 + 0xb0));
    uVar5 = native_UnityEngine_Application__get_dataPath_8d6134(0);
    uVar5 = native_System_String__Concat_afbd68
                      (uVar5,
                       _StringLiteral__BlocksEngine2_Scripts_EditorScripts_InstructionScriptTemplate_txt_12eb850
                       ,0);
    plVar6 = (long *)native_sub_432808(_System_IO_StreamReader_TypeInfo_12d5f10);
    native_System_IO_StreamReader___ctor_b05c98(plVar6,uVar5,0);
    if (plVar6 != (long *)0x0) {
      lVar3 = (**(code **)(*plVar6 + 0x1f8))(plVar6,*(undefined8 *)(*plVar6 + 0x200));
      (**(code **)(*plVar6 + 0x1a8))(plVar6,*(undefined8 *)(*plVar6 + 0x1b0));
      lVar7 = native_sub_432750(_char___TypeInfo_12d3090,1);
      if ((_StringLiteral___12eab80 != 0) &&
         (uVar2 = native_System_String__get_Chars_b03810(_StringLiteral___12eab80,0,0), lVar7 != 0))
      {
        if (*(int *)(lVar7 + 0x18) == 0) {
          uVar4 = native_sub_43283c();
                    /* WARNING: Subroutine does not return */
          native_sub_4327dc(uVar4,0);
        }
        *(undefined2 *)(lVar7 + 0x20) = uVar2;
        if (lVar3 != 0) {
          lVar3 = native_System_String__Split_b095f4(lVar3,lVar7,0);
          uVar5 = native_System_String__Concat_afbd68(_StringLiteral_BE2_Cst__12ec6e8,param_2,0);
          uVar4 = native_System_String__Concat_afc654(uVar4,uVar5,_StringLiteral__cs_12eb7f8,0);
          uVar8 = native_System_IO_File__Exists_bf1460(uVar4,0);
          if ((uVar8 & 1) == 0) {
            plVar6 = (long *)native_sub_432808(_System_IO_StreamWriter_TypeInfo_12d5f18);
            native_System_IO_StreamWriter___ctor_b07640(plVar6,uVar4,0);
            if (lVar3 == 0) {
                    /* WARNING: Subroutine does not return */
              native_sub_432810();
            }
            uVar1 = *(uint *)(lVar3 + 0x18);
            if (0 < (int)uVar1) {
              uVar11 = 0;
              do {
                if (uVar1 <= uVar11) {
                  uVar4 = native_sub_43283c();
                    /* WARNING: Subroutine does not return */
                  native_sub_4327dc(uVar4,0);
                }
                lVar7 = *(long *)(lVar3 + (long)(int)uVar11 * 8 + 0x20);
                if (lVar7 == 0) {
                    /* WARNING: Subroutine does not return */
                  native_sub_432810();
                }
                uVar8 = native_System_String__Contains_b0bafc
                                  (lVar7,_StringLiteral__instructionName__12f3360,0);
                if ((uVar8 & 1) != 0) {
                  lVar7 = native_System_String__Replace_afd9ac
                                    (lVar7,_StringLiteral__instructionName__12f3360,uVar5,0);
                }
                if (plVar6 == (long *)0x0) {
                    /* WARNING: Subroutine does not return */
                  native_sub_432810();
                }
                (**(code **)(*plVar6 + 0x268))(plVar6,lVar7,*(undefined8 *)(*plVar6 + 0x270));
                uVar1 = *(uint *)(lVar3 + 0x18);
                uVar11 = uVar11 + 1;
              } while ((int)uVar11 < (int)uVar1);
            }
            if (plVar6 != (long *)0x0) {
              lVar3 = *plVar6;
              if ((ulong)*(ushort *)(lVar3 + 0x12a) != 0) {
                uVar8 = 0;
                piVar10 = (int *)(*(long *)(lVar3 + 0xb0) + 8);
                do {
                  if (*(long *)(piVar10 + -2) == _System_IDisposable_TypeInfo_12d4b00) {
                    puVar9 = (undefined8 *)(lVar3 + (long)*piVar10 * 0x10 + 0x138);
                    goto LAB_00611420;
                  }
                  uVar8 = uVar8 + 1;
                  piVar10 = piVar10 + 4;
                } while (uVar8 < *(ushort *)(lVar3 + 0x12a));
              }
              puVar9 = (undefined8 *)
                       native_sub_3c9b34(plVar6,_System_IDisposable_TypeInfo_12d4b00,0);
LAB_00611420:
              (*(code *)*puVar9)(plVar6,puVar9[1]);
            }
          }
          else {
            if (((*(byte *)(_UnityEngine_Debug_TypeInfo_12d4338 + 0x133) >> 2 & 1) != 0) &&
               (*(int *)(_UnityEngine_Debug_TypeInfo_12d4338 + 0xe0) == 0)) {
              native_sub_4327ec();
            }
            native_UnityEngine_Debug__Log_8dc36c
                      (_StringLiteral___Instruction_already_exists_12eb6d0,0);
          }
          return uVar5;
        }
      }
    }
  }
                    /* WARNING: Subroutine does not return */
  native_sub_432810();
}



/* MG_BlocksEngine2.EditorScript.BE2_Inspector$$.ctor @ 0x6115f0
 * void MG_BlocksEngine2_EditorScript_BE2_Inspector___ctor (MG_BlocksEngine2_EditorScript_BE2_Inspector_o* __this, const MethodInfo* method); */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* MG_BlocksEngine2.EditorScript.BE2_Inspector$$.ctor
   void MG_BlocksEngine2_EditorScript_BE2_Inspector___ctor
   (MG_BlocksEngine2_EditorScript_BE2_Inspector_o* __this, const MethodInfo* method); */

undefined1  [16] native_MG_BlocksEngine2_EditorScript_BE2_Inspector___ctor_6115f0(ulong param_1)

{
  undefined1 auVar1 [16];
  
  if ((bRam000000000133ee58 & 1) == 0) {
    native_sub_43273c(&StringLiteral__dataPath__BlocksEngine2_Saves__12f3348);
    native_sub_43273c(&StringLiteral_Assets_BlocksEngine2_Prefabs_Resources_Blocks_Custom__12ec588);
    native_sub_43273c(&
                      StringLiteral__dataPath__BlocksEngine2_Scripts_EngineCore_Instruction_BlockInstructions_Custom__12f3350
                     );
    bRam000000000133ee58 = 1;
  }
  *(undefined8 *)(param_1 + 0xb0) =
       _StringLiteral__dataPath__BlocksEngine2_Scripts_EngineCore_Instruction_BlockInstructions_Custom__12f3350
  ;
  native_sub_4326e0();
  *(undefined8 *)(param_1 + 0xb8) =
       _StringLiteral_Assets_BlocksEngine2_Prefabs_Resources_Blocks_Custom__12ec588;
  native_sub_4326e0(param_1 + 0xb8);
  *(undefined1 *)(param_1 + 0xc0) = 1;
  *(undefined8 *)(param_1 + 200) = _StringLiteral__dataPath__BlocksEngine2_Saves__12f3348;
  native_sub_4326e0(param_1 + 200);
  *(undefined1 *)(param_1 + 0xdc) = 1;
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


