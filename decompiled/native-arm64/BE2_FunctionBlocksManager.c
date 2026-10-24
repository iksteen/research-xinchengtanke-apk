/* ARM64 IL2CPP native pseudocode from Ghidra.
 * Recovered implementation, not original C# source.
 * Function boundaries follow the IL2CPP method address table. */


/* MG_BlocksEngine2.Environment.BE2_FunctionBlocksManager$$get_Instance @ 0x5fd2f8
 * MG_BlocksEngine2_Environment_BE2_FunctionBlocksManager_o* MG_BlocksEngine2_Environment_BE2_FunctionBlocksManager__get_Instance (const MethodInfo* method); */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* MG_BlocksEngine2.Environment.BE2_FunctionBlocksManager$$get_Instance
   MG_BlocksEngine2_Environment_BE2_FunctionBlocksManager_o*
   MG_BlocksEngine2_Environment_BE2_FunctionBlocksManager__get_Instance (const MethodInfo* method);
    */

undefined8 native_MG_BlocksEngine2_Environment_BE2_FunctionBlocksManager__get_Instance_5fd2f8(void)

{
  ulong uVar1;
  undefined8 *puVar2;
  undefined8 uVar3;
  
  if ((bRam000000000133edc9 & 1) == 0) {
    native_sub_43273c(&MG_BlocksEngine2_Environment_BE2_FunctionBlocksManager_TypeInfo_12d39c8);
    native_sub_43273c(&
                      Method_UnityEngine_Object_FindObjectOfType_BE2_FunctionBlocksManager____12e59f8
                     );
    native_sub_43273c(&UnityEngine_Object_TypeInfo_12d54e0);
    bRam000000000133edc9 = 1;
  }
  uVar3 = **(undefined8 **)
            (_MG_BlocksEngine2_Environment_BE2_FunctionBlocksManager_TypeInfo_12d39c8 + 0xb8);
  if (((*(byte *)(_UnityEngine_Object_TypeInfo_12d54e0 + 0x133) >> 2 & 1) != 0) &&
     (*(int *)(_UnityEngine_Object_TypeInfo_12d54e0 + 0xe0) == 0)) {
    native_sub_4327ec();
  }
  uVar1 = native_UnityEngine_Object__op_Equality_8e9a3c(uVar3,0,0);
  if ((uVar1 & 1) != 0) {
    if (((*(byte *)(_UnityEngine_Object_TypeInfo_12d54e0 + 0x133) >> 2 & 1) != 0) &&
       (*(int *)(_UnityEngine_Object_TypeInfo_12d54e0 + 0xe0) == 0)) {
      native_sub_4327ec();
    }
    uVar3 = native_UnityEngine_Object__FindObjectOfType_BE2_DragDropManager__4a6274
                      (
                      _Method_UnityEngine_Object_FindObjectOfType_BE2_FunctionBlocksManager____12e59f8
                      );
    puVar2 = *(undefined8 **)
              (_MG_BlocksEngine2_Environment_BE2_FunctionBlocksManager_TypeInfo_12d39c8 + 0xb8);
    *puVar2 = uVar3;
    native_sub_4326e0(puVar2,uVar3);
  }
  return **(undefined8 **)
           (_MG_BlocksEngine2_Environment_BE2_FunctionBlocksManager_TypeInfo_12d39c8 + 0xb8);
}



/* MG_BlocksEngine2.Environment.BE2_FunctionBlocksManager$$set_Instance @ 0x5fd3e4
 * void MG_BlocksEngine2_Environment_BE2_FunctionBlocksManager__set_Instance (MG_BlocksEngine2_Environment_BE2_FunctionBlocksManager_o* value, const MethodInfo* method); */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* MG_BlocksEngine2.Environment.BE2_FunctionBlocksManager$$set_Instance
   void MG_BlocksEngine2_Environment_BE2_FunctionBlocksManager__set_Instance
   (MG_BlocksEngine2_Environment_BE2_FunctionBlocksManager_o* value, const MethodInfo* method); */

void native_MG_BlocksEngine2_Environment_BE2_FunctionBlocksManager__set_Instance_5fd3e4
               (undefined8 param_1)

{
  ulong *puVar1;
  char cVar2;
  bool bVar3;
  undefined8 *puVar4;
  
  if ((bRam000000000133edca & 1) == 0) {
    native_sub_43273c(&MG_BlocksEngine2_Environment_BE2_FunctionBlocksManager_TypeInfo_12d39c8);
    bRam000000000133edca = 1;
  }
  puVar4 = *(undefined8 **)
            (_MG_BlocksEngine2_Environment_BE2_FunctionBlocksManager_TypeInfo_12d39c8 + 0xb8);
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



/* MG_BlocksEngine2.Environment.BE2_FunctionBlocksManager$$CreateFunctionBlock @ 0x5fd438
 * void MG_BlocksEngine2_Environment_BE2_FunctionBlocksManager__CreateFunctionBlock (MG_BlocksEngine2_Environment_BE2_FunctionBlocksManager_o* __this, System_Collections_Generic_List_DefineItem__o* items, const MethodInfo* method); */

/* MG_BlocksEngine2.Environment.BE2_FunctionBlocksManager$$CreateFunctionBlock
   void MG_BlocksEngine2_Environment_BE2_FunctionBlocksManager__CreateFunctionBlock
   (MG_BlocksEngine2_Environment_BE2_FunctionBlocksManager_o* __this,
   System_Collections_Generic_List_DefineItem__o* items, const MethodInfo* method); */

void native_MG_BlocksEngine2_Environment_BE2_FunctionBlocksManager__CreateFunctionBlock_5fd438(void)

{
  return;
}



/* MG_BlocksEngine2.Environment.BE2_FunctionBlocksManager$$CreateSelectionFunction @ 0x5fd43c
 * void MG_BlocksEngine2_Environment_BE2_FunctionBlocksManager__CreateSelectionFunction (MG_BlocksEngine2_Environment_BE2_FunctionBlocksManager_o* __this, System_Collections_Generic_List_DefineItem__o* items, BE2_Ins_DefineFunction_o* defineBlockIns, const MethodInfo* method); */

/* MG_BlocksEngine2.Environment.BE2_FunctionBlocksManager$$CreateSelectionFunction
   void MG_BlocksEngine2_Environment_BE2_FunctionBlocksManager__CreateSelectionFunction
   (MG_BlocksEngine2_Environment_BE2_FunctionBlocksManager_o* __this,
   System_Collections_Generic_List_DefineItem__o* items, BE2_Ins_DefineFunction_o* defineBlockIns,
   const MethodInfo* method); */

void native_MG_BlocksEngine2_Environment_BE2_FunctionBlocksManager__CreateSelectionFunction_5fd43c
               (void)

{
  return;
}



/* MG_BlocksEngine2.Environment.BE2_FunctionBlocksManager$$.ctor @ 0x5fd440
 * void MG_BlocksEngine2_Environment_BE2_FunctionBlocksManager___ctor (MG_BlocksEngine2_Environment_BE2_FunctionBlocksManager_o* __this, const MethodInfo* method); */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* MG_BlocksEngine2.Environment.BE2_FunctionBlocksManager$$.ctor
   void MG_BlocksEngine2_Environment_BE2_FunctionBlocksManager___ctor
   (MG_BlocksEngine2_Environment_BE2_FunctionBlocksManager_o* __this, const MethodInfo* method); */

long native_MG_BlocksEngine2_Environment_BE2_FunctionBlocksManager___ctor_5fd440(long param_1)

{
  *(undefined8 *)(param_1 + 0x40) = 0xc2c8000043960000;
  if ((bRam0000000001340ae0 & 1) == 0) {
    native_sub_43273c(&UnityEngine_Object_TypeInfo_12d54e0,0);
    bRam0000000001340ae0 = 1;
  }
  if (((*(byte *)(_UnityEngine_Object_TypeInfo_12d54e0 + 0x133) >> 2 & 1) != 0) &&
     (*(int *)(_UnityEngine_Object_TypeInfo_12d54e0 + 0xe0) == 0)) {
    native_sub_4327ec();
  }
  return param_1;
}


