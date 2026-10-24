/* ARM64 IL2CPP native pseudocode from Ghidra.
 * Recovered implementation, not original C# source.
 * Function boundaries follow the IL2CPP method address table. */


/* MG_BlocksEngine2.Block.BE2_GhostBlock$$get_Type @ 0x5fd454
 * int32_t MG_BlocksEngine2_Block_BE2_GhostBlock__get_Type (MG_BlocksEngine2_Block_BE2_GhostBlock_o* __this, const MethodInfo* method); */

/* MG_BlocksEngine2.Block.BE2_GhostBlock$$get_Type
   int32_t MG_BlocksEngine2_Block_BE2_GhostBlock__get_Type (MG_BlocksEngine2_Block_BE2_GhostBlock_o*
   __this, const MethodInfo* method); */

undefined8 native_MG_BlocksEngine2_Block_BE2_GhostBlock__get_Type_5fd454(void)

{
  return 6;
}



/* MG_BlocksEngine2.Block.BE2_GhostBlock$$set_Type @ 0x5fd45c
 * void MG_BlocksEngine2_Block_BE2_GhostBlock__set_Type (MG_BlocksEngine2_Block_BE2_GhostBlock_o* __this, int32_t value, const MethodInfo* method); */

/* MG_BlocksEngine2.Block.BE2_GhostBlock$$set_Type
   void MG_BlocksEngine2_Block_BE2_GhostBlock__set_Type (MG_BlocksEngine2_Block_BE2_GhostBlock_o*
   __this, int32_t value, const MethodInfo* method); */

void native_MG_BlocksEngine2_Block_BE2_GhostBlock__set_Type_5fd45c(void)

{
  return;
}



/* MG_BlocksEngine2.Block.BE2_GhostBlock$$get_Layout @ 0x5fd460
 * MG_BlocksEngine2_Block_I_BE2_BlockLayout_o* MG_BlocksEngine2_Block_BE2_GhostBlock__get_Layout (MG_BlocksEngine2_Block_BE2_GhostBlock_o* __this, const MethodInfo* method); */

/* MG_BlocksEngine2.Block.BE2_GhostBlock$$get_Layout
   MG_BlocksEngine2_Block_I_BE2_BlockLayout_o* MG_BlocksEngine2_Block_BE2_GhostBlock__get_Layout
   (MG_BlocksEngine2_Block_BE2_GhostBlock_o* __this, const MethodInfo* method); */

undefined8 native_MG_BlocksEngine2_Block_BE2_GhostBlock__get_Layout_5fd460(long param_1)

{
  return *(undefined8 *)(param_1 + 0x18);
}



/* MG_BlocksEngine2.Block.BE2_GhostBlock$$set_Layout @ 0x5fd468
 * void MG_BlocksEngine2_Block_BE2_GhostBlock__set_Layout (MG_BlocksEngine2_Block_BE2_GhostBlock_o* __this, MG_BlocksEngine2_Block_I_BE2_BlockLayout_o* value, const MethodInfo* method); */

/* MG_BlocksEngine2.Block.BE2_GhostBlock$$set_Layout
   void MG_BlocksEngine2_Block_BE2_GhostBlock__set_Layout (MG_BlocksEngine2_Block_BE2_GhostBlock_o*
   __this, MG_BlocksEngine2_Block_I_BE2_BlockLayout_o* value, const MethodInfo* method); */

void native_MG_BlocksEngine2_Block_BE2_GhostBlock__set_Layout_5fd468
               (long param_1,undefined8 param_2)

{
  ulong *puVar1;
  char cVar2;
  bool bVar3;
  undefined8 *puVar4;
  
  puVar4 = (undefined8 *)(param_1 + 0x18);
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



/* MG_BlocksEngine2.Block.BE2_GhostBlock$$get_Instruction @ 0x5fd470
 * MG_BlocksEngine2_Block_Instruction_I_BE2_Instruction_o* MG_BlocksEngine2_Block_BE2_GhostBlock__get_Instruction (MG_BlocksEngine2_Block_BE2_GhostBlock_o* __this, const MethodInfo* method); */

/* MG_BlocksEngine2.Block.BE2_GhostBlock$$get_Instruction
   MG_BlocksEngine2_Block_Instruction_I_BE2_Instruction_o*
   MG_BlocksEngine2_Block_BE2_GhostBlock__get_Instruction (MG_BlocksEngine2_Block_BE2_GhostBlock_o*
   __this, const MethodInfo* method); */

undefined8 native_MG_BlocksEngine2_Block_BE2_GhostBlock__get_Instruction_5fd470(long param_1)

{
  return *(undefined8 *)(param_1 + 0x20);
}



/* MG_BlocksEngine2.Block.BE2_GhostBlock$$set_Instruction @ 0x5fd478
 * void MG_BlocksEngine2_Block_BE2_GhostBlock__set_Instruction (MG_BlocksEngine2_Block_BE2_GhostBlock_o* __this, MG_BlocksEngine2_Block_Instruction_I_BE2_Instruction_o* value, const MethodInfo* method); */

/* MG_BlocksEngine2.Block.BE2_GhostBlock$$set_Instruction
   void MG_BlocksEngine2_Block_BE2_GhostBlock__set_Instruction
   (MG_BlocksEngine2_Block_BE2_GhostBlock_o* __this,
   MG_BlocksEngine2_Block_Instruction_I_BE2_Instruction_o* value, const MethodInfo* method); */

void native_MG_BlocksEngine2_Block_BE2_GhostBlock__set_Instruction_5fd478
               (long param_1,undefined8 param_2)

{
  ulong *puVar1;
  char cVar2;
  bool bVar3;
  undefined8 *puVar4;
  
  puVar4 = (undefined8 *)(param_1 + 0x20);
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



/* MG_BlocksEngine2.Block.BE2_GhostBlock$$get_Transform @ 0x5fd480
 * UnityEngine_Transform_o* MG_BlocksEngine2_Block_BE2_GhostBlock__get_Transform (MG_BlocksEngine2_Block_BE2_GhostBlock_o* __this, const MethodInfo* method); */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* MG_BlocksEngine2.Block.BE2_GhostBlock$$get_Transform
   UnityEngine_Transform_o* MG_BlocksEngine2_Block_BE2_GhostBlock__get_Transform
   (MG_BlocksEngine2_Block_BE2_GhostBlock_o* __this, const MethodInfo* method); */

undefined8 native_MG_BlocksEngine2_Block_BE2_GhostBlock__get_Transform_5fd480(long param_1)

{
  ulong uVar1;
  undefined8 uVar2;
  
  if ((bRam000000000133edcb & 1) == 0) {
    native_sub_43273c(&UnityEngine_Object_TypeInfo_12d54e0);
    bRam000000000133edcb = 1;
  }
  uVar2 = *(undefined8 *)(param_1 + 0x28);
  if (((*(byte *)(_UnityEngine_Object_TypeInfo_12d54e0 + 0x133) >> 2 & 1) != 0) &&
     (*(int *)(_UnityEngine_Object_TypeInfo_12d54e0 + 0xe0) == 0)) {
    native_sub_4327ec();
  }
  uVar1 = native_UnityEngine_Object__op_Implicit_8e1b98(uVar2,0);
  if ((uVar1 & 1) != 0) {
    return *(undefined8 *)(param_1 + 0x28);
  }
  if (pcRam0000000001340ab8 == (code *)0x0) {
    pcRam0000000001340ab8 = (code *)native_sub_4326f0(&UNK_00e2d0e1);
  }
                    /* WARNING: Could not recover jumptable at 0x008da668. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  uVar2 = (*pcRam0000000001340ab8)(param_1);
  return uVar2;
}



/* MG_BlocksEngine2.Block.BE2_GhostBlock$$get_ParentSection @ 0x5fd508
 * MG_BlocksEngine2_Block_I_BE2_BlockSection_o* MG_BlocksEngine2_Block_BE2_GhostBlock__get_ParentSection (MG_BlocksEngine2_Block_BE2_GhostBlock_o* __this, const MethodInfo* method); */

/* MG_BlocksEngine2.Block.BE2_GhostBlock$$get_ParentSection
   MG_BlocksEngine2_Block_I_BE2_BlockSection_o*
   MG_BlocksEngine2_Block_BE2_GhostBlock__get_ParentSection
   (MG_BlocksEngine2_Block_BE2_GhostBlock_o* __this, const MethodInfo* method); */

undefined8 native_MG_BlocksEngine2_Block_BE2_GhostBlock__get_ParentSection_5fd508(long param_1)

{
  return *(undefined8 *)(param_1 + 0x30);
}



/* MG_BlocksEngine2.Block.BE2_GhostBlock$$set_ParentSection @ 0x5fd510
 * void MG_BlocksEngine2_Block_BE2_GhostBlock__set_ParentSection (MG_BlocksEngine2_Block_BE2_GhostBlock_o* __this, MG_BlocksEngine2_Block_I_BE2_BlockSection_o* value, const MethodInfo* method); */

/* MG_BlocksEngine2.Block.BE2_GhostBlock$$set_ParentSection
   void MG_BlocksEngine2_Block_BE2_GhostBlock__set_ParentSection
   (MG_BlocksEngine2_Block_BE2_GhostBlock_o* __this, MG_BlocksEngine2_Block_I_BE2_BlockSection_o*
   value, const MethodInfo* method); */

void native_MG_BlocksEngine2_Block_BE2_GhostBlock__set_ParentSection_5fd510
               (long param_1,undefined8 param_2)

{
  ulong *puVar1;
  char cVar2;
  bool bVar3;
  undefined8 *puVar4;
  
  puVar4 = (undefined8 *)(param_1 + 0x30);
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



/* MG_BlocksEngine2.Block.BE2_GhostBlock$$get_Drag @ 0x5fd518
 * MG_BlocksEngine2_DragDrop_I_BE2_Drag_o* MG_BlocksEngine2_Block_BE2_GhostBlock__get_Drag (MG_BlocksEngine2_Block_BE2_GhostBlock_o* __this, const MethodInfo* method); */

/* MG_BlocksEngine2.Block.BE2_GhostBlock$$get_Drag
   MG_BlocksEngine2_DragDrop_I_BE2_Drag_o* MG_BlocksEngine2_Block_BE2_GhostBlock__get_Drag
   (MG_BlocksEngine2_Block_BE2_GhostBlock_o* __this, const MethodInfo* method); */

undefined8 native_MG_BlocksEngine2_Block_BE2_GhostBlock__get_Drag_5fd518(long param_1)

{
  return *(undefined8 *)(param_1 + 0x38);
}



/* MG_BlocksEngine2.Block.BE2_GhostBlock$$set_Drag @ 0x5fd520
 * void MG_BlocksEngine2_Block_BE2_GhostBlock__set_Drag (MG_BlocksEngine2_Block_BE2_GhostBlock_o* __this, MG_BlocksEngine2_DragDrop_I_BE2_Drag_o* value, const MethodInfo* method); */

/* MG_BlocksEngine2.Block.BE2_GhostBlock$$set_Drag
   void MG_BlocksEngine2_Block_BE2_GhostBlock__set_Drag (MG_BlocksEngine2_Block_BE2_GhostBlock_o*
   __this, MG_BlocksEngine2_DragDrop_I_BE2_Drag_o* value, const MethodInfo* method); */

void native_MG_BlocksEngine2_Block_BE2_GhostBlock__set_Drag_5fd520(long param_1,undefined8 param_2)

{
  ulong *puVar1;
  char cVar2;
  bool bVar3;
  undefined8 *puVar4;
  
  puVar4 = (undefined8 *)(param_1 + 0x38);
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



/* MG_BlocksEngine2.Block.BE2_GhostBlock$$Awake @ 0x5fd528
 * void MG_BlocksEngine2_Block_BE2_GhostBlock__Awake (MG_BlocksEngine2_Block_BE2_GhostBlock_o* __this, const MethodInfo* method); */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* MG_BlocksEngine2.Block.BE2_GhostBlock$$Awake
   void MG_BlocksEngine2_Block_BE2_GhostBlock__Awake (MG_BlocksEngine2_Block_BE2_GhostBlock_o*
   __this, const MethodInfo* method); */

void native_MG_BlocksEngine2_Block_BE2_GhostBlock__Awake_5fd528(long param_1)

{
  ulong *puVar1;
  char cVar2;
  bool bVar3;
  undefined8 uVar4;
  
  if ((bRam000000000133edcc & 1) == 0) {
    native_sub_43273c(&Method_UnityEngine_Component_GetComponent_I_BE2_BlockLayout____12e2a10);
    bRam000000000133edcc = 1;
  }
  uVar4 = native_UnityEngine_Component__get_transform_8da62c(param_1,0);
  *(undefined8 *)(param_1 + 0x28) = uVar4;
  native_sub_4326e0(param_1 + 0x28);
  uVar4 = native_UnityEngine_Component__GetComponent_ActiveAnimation__49daec
                    (param_1,_Method_UnityEngine_Component_GetComponent_I_BE2_BlockLayout____12e2a10
                    );
  *(undefined8 *)(param_1 + 0x18) = uVar4;
  if (iRam0000000001345318 != 0) {
    puVar1 = (ulong *)((param_1 + 0x18U >> 0x12 & 0x7fff) * 8 + 0x138ecd8);
    do {
      cVar2 = '\x01';
      bVar3 = (bool)ExclusiveMonitorPass(puVar1,0x10);
      if (bVar3) {
        *puVar1 = *puVar1 | 1L << (param_1 + 0x18U >> 0xc & 0x3f);
        cVar2 = ExclusiveMonitorsStatus();
      }
    } while (cVar2 != '\0');
  }
  return;
}



/* MG_BlocksEngine2.Block.BE2_GhostBlock$$SetShadowActive @ 0x5fd5a0
 * void MG_BlocksEngine2_Block_BE2_GhostBlock__SetShadowActive (MG_BlocksEngine2_Block_BE2_GhostBlock_o* __this, bool value, const MethodInfo* method); */

/* MG_BlocksEngine2.Block.BE2_GhostBlock$$SetShadowActive
   void MG_BlocksEngine2_Block_BE2_GhostBlock__SetShadowActive
   (MG_BlocksEngine2_Block_BE2_GhostBlock_o* __this, bool value, const MethodInfo* method); */

void native_MG_BlocksEngine2_Block_BE2_GhostBlock__SetShadowActive_5fd5a0(void)

{
  return;
}



/* MG_BlocksEngine2.Block.BE2_GhostBlock$$.ctor @ 0x5fd5a4
 * void MG_BlocksEngine2_Block_BE2_GhostBlock___ctor (MG_BlocksEngine2_Block_BE2_GhostBlock_o* __this, const MethodInfo* method); */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* MG_BlocksEngine2.Block.BE2_GhostBlock$$.ctor
   void MG_BlocksEngine2_Block_BE2_GhostBlock___ctor (MG_BlocksEngine2_Block_BE2_GhostBlock_o*
   __this, const MethodInfo* method); */

undefined1  [16] native_MG_BlocksEngine2_Block_BE2_GhostBlock___ctor_5fd5a4(ulong param_1)

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


