/* ARM64 IL2CPP native pseudocode from Ghidra.
 * Recovered implementation, not original C# source.
 * Function boundaries follow the IL2CPP method address table. */


/* MG_BlocksEngine2.Block.Instruction.BE2_InstructionBase$$get_Instruction @ 0x6116a0
 * MG_BlocksEngine2_Block_Instruction_I_BE2_Instruction_o* MG_BlocksEngine2_Block_Instruction_BE2_InstructionBase__get_Instruction (MG_BlocksEngine2_Block_Instruction_BE2_InstructionBase_o* __this, const MethodInfo* method); */

/* MG_BlocksEngine2.Block.Instruction.BE2_InstructionBase$$get_Instruction
   MG_BlocksEngine2_Block_Instruction_I_BE2_Instruction_o*
   MG_BlocksEngine2_Block_Instruction_BE2_InstructionBase__get_Instruction
   (MG_BlocksEngine2_Block_Instruction_BE2_InstructionBase_o* __this, const MethodInfo* method); */

undefined8
native_MG_BlocksEngine2_Block_Instruction_BE2_InstructionBase__get_Instruction_6116a0(long param_1)

{
  return *(undefined8 *)(param_1 + 0x38);
}



/* MG_BlocksEngine2.Block.Instruction.BE2_InstructionBase$$set_Instruction @ 0x6116a8
 * void MG_BlocksEngine2_Block_Instruction_BE2_InstructionBase__set_Instruction (MG_BlocksEngine2_Block_Instruction_BE2_InstructionBase_o* __this, MG_BlocksEngine2_Block_Instruction_I_BE2_Instruction_o* value, const MethodInfo* method); */

/* MG_BlocksEngine2.Block.Instruction.BE2_InstructionBase$$set_Instruction
   void MG_BlocksEngine2_Block_Instruction_BE2_InstructionBase__set_Instruction
   (MG_BlocksEngine2_Block_Instruction_BE2_InstructionBase_o* __this,
   MG_BlocksEngine2_Block_Instruction_I_BE2_Instruction_o* value, const MethodInfo* method); */

void native_MG_BlocksEngine2_Block_Instruction_BE2_InstructionBase__set_Instruction_6116a8
               (long param_1,undefined8 param_2)

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



/* MG_BlocksEngine2.Block.Instruction.BE2_InstructionBase$$get_Block @ 0x6116b0
 * MG_BlocksEngine2_Block_I_BE2_Block_o* MG_BlocksEngine2_Block_Instruction_BE2_InstructionBase__get_Block (MG_BlocksEngine2_Block_Instruction_BE2_InstructionBase_o* __this, const MethodInfo* method); */

/* MG_BlocksEngine2.Block.Instruction.BE2_InstructionBase$$get_Block
   MG_BlocksEngine2_Block_I_BE2_Block_o*
   MG_BlocksEngine2_Block_Instruction_BE2_InstructionBase__get_Block
   (MG_BlocksEngine2_Block_Instruction_BE2_InstructionBase_o* __this, const MethodInfo* method); */

undefined8
native_MG_BlocksEngine2_Block_Instruction_BE2_InstructionBase__get_Block_6116b0(long param_1)

{
  return *(undefined8 *)(param_1 + 0x40);
}



/* MG_BlocksEngine2.Block.Instruction.BE2_InstructionBase$$set_Block @ 0x6116b8
 * void MG_BlocksEngine2_Block_Instruction_BE2_InstructionBase__set_Block (MG_BlocksEngine2_Block_Instruction_BE2_InstructionBase_o* __this, MG_BlocksEngine2_Block_I_BE2_Block_o* value, const MethodInfo* method); */

/* MG_BlocksEngine2.Block.Instruction.BE2_InstructionBase$$set_Block
   void MG_BlocksEngine2_Block_Instruction_BE2_InstructionBase__set_Block
   (MG_BlocksEngine2_Block_Instruction_BE2_InstructionBase_o* __this,
   MG_BlocksEngine2_Block_I_BE2_Block_o* value, const MethodInfo* method); */

void native_MG_BlocksEngine2_Block_Instruction_BE2_InstructionBase__set_Block_6116b8
               (long param_1,undefined8 param_2)

{
  ulong *puVar1;
  char cVar2;
  bool bVar3;
  undefined8 *puVar4;
  
  puVar4 = (undefined8 *)(param_1 + 0x40);
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



/* MG_BlocksEngine2.Block.Instruction.BE2_InstructionBase$$get_BlocksStack @ 0x6116c0
 * MG_BlocksEngine2_Core_I_BE2_BlocksStack_o* MG_BlocksEngine2_Block_Instruction_BE2_InstructionBase__get_BlocksStack (MG_BlocksEngine2_Block_Instruction_BE2_InstructionBase_o* __this, const MethodInfo* method); */

/* MG_BlocksEngine2.Block.Instruction.BE2_InstructionBase$$get_BlocksStack
   MG_BlocksEngine2_Core_I_BE2_BlocksStack_o*
   MG_BlocksEngine2_Block_Instruction_BE2_InstructionBase__get_BlocksStack
   (MG_BlocksEngine2_Block_Instruction_BE2_InstructionBase_o* __this, const MethodInfo* method); */

undefined8
native_MG_BlocksEngine2_Block_Instruction_BE2_InstructionBase__get_BlocksStack_6116c0(long param_1)

{
  return *(undefined8 *)(param_1 + 0x48);
}



/* MG_BlocksEngine2.Block.Instruction.BE2_InstructionBase$$set_BlocksStack @ 0x6116c8
 * void MG_BlocksEngine2_Block_Instruction_BE2_InstructionBase__set_BlocksStack (MG_BlocksEngine2_Block_Instruction_BE2_InstructionBase_o* __this, MG_BlocksEngine2_Core_I_BE2_BlocksStack_o* value, const MethodInfo* method); */

/* MG_BlocksEngine2.Block.Instruction.BE2_InstructionBase$$set_BlocksStack
   void MG_BlocksEngine2_Block_Instruction_BE2_InstructionBase__set_BlocksStack
   (MG_BlocksEngine2_Block_Instruction_BE2_InstructionBase_o* __this,
   MG_BlocksEngine2_Core_I_BE2_BlocksStack_o* value, const MethodInfo* method); */

void native_MG_BlocksEngine2_Block_Instruction_BE2_InstructionBase__set_BlocksStack_6116c8
               (long param_1,undefined8 param_2)

{
  ulong *puVar1;
  char cVar2;
  bool bVar3;
  undefined8 *puVar4;
  
  puVar4 = (undefined8 *)(param_1 + 0x48);
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



/* MG_BlocksEngine2.Block.Instruction.BE2_InstructionBase$$get_TargetObject @ 0x6116d0
 * MG_BlocksEngine2_Environment_I_BE2_TargetObject_o* MG_BlocksEngine2_Block_Instruction_BE2_InstructionBase__get_TargetObject (MG_BlocksEngine2_Block_Instruction_BE2_InstructionBase_o* __this, const MethodInfo* method); */

/* MG_BlocksEngine2.Block.Instruction.BE2_InstructionBase$$get_TargetObject
   MG_BlocksEngine2_Environment_I_BE2_TargetObject_o*
   MG_BlocksEngine2_Block_Instruction_BE2_InstructionBase__get_TargetObject
   (MG_BlocksEngine2_Block_Instruction_BE2_InstructionBase_o* __this, const MethodInfo* method); */

undefined8
native_MG_BlocksEngine2_Block_Instruction_BE2_InstructionBase__get_TargetObject_6116d0(long param_1)

{
  return *(undefined8 *)(param_1 + 0x50);
}



/* MG_BlocksEngine2.Block.Instruction.BE2_InstructionBase$$set_TargetObject @ 0x6116d8
 * void MG_BlocksEngine2_Block_Instruction_BE2_InstructionBase__set_TargetObject (MG_BlocksEngine2_Block_Instruction_BE2_InstructionBase_o* __this, MG_BlocksEngine2_Environment_I_BE2_TargetObject_o* value, const MethodInfo* method); */

/* MG_BlocksEngine2.Block.Instruction.BE2_InstructionBase$$set_TargetObject
   void MG_BlocksEngine2_Block_Instruction_BE2_InstructionBase__set_TargetObject
   (MG_BlocksEngine2_Block_Instruction_BE2_InstructionBase_o* __this,
   MG_BlocksEngine2_Environment_I_BE2_TargetObject_o* value, const MethodInfo* method); */

void native_MG_BlocksEngine2_Block_Instruction_BE2_InstructionBase__set_TargetObject_6116d8
               (long param_1,undefined8 param_2)

{
  ulong *puVar1;
  char cVar2;
  bool bVar3;
  undefined8 *puVar4;
  
  puVar4 = (undefined8 *)(param_1 + 0x50);
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



/* MG_BlocksEngine2.Block.Instruction.BE2_InstructionBase$$get_LocationsArray @ 0x6116e0
 * System_Int32_array* MG_BlocksEngine2_Block_Instruction_BE2_InstructionBase__get_LocationsArray (MG_BlocksEngine2_Block_Instruction_BE2_InstructionBase_o* __this, const MethodInfo* method); */

/* MG_BlocksEngine2.Block.Instruction.BE2_InstructionBase$$get_LocationsArray
   System_Int32_array* MG_BlocksEngine2_Block_Instruction_BE2_InstructionBase__get_LocationsArray
   (MG_BlocksEngine2_Block_Instruction_BE2_InstructionBase_o* __this, const MethodInfo* method); */

undefined8
native_MG_BlocksEngine2_Block_Instruction_BE2_InstructionBase__get_LocationsArray_6116e0
          (long param_1)

{
  return *(undefined8 *)(param_1 + 0x58);
}



/* MG_BlocksEngine2.Block.Instruction.BE2_InstructionBase$$set_LocationsArray @ 0x6116e8
 * void MG_BlocksEngine2_Block_Instruction_BE2_InstructionBase__set_LocationsArray (MG_BlocksEngine2_Block_Instruction_BE2_InstructionBase_o* __this, System_Int32_array* value, const MethodInfo* method); */

/* MG_BlocksEngine2.Block.Instruction.BE2_InstructionBase$$set_LocationsArray
   void MG_BlocksEngine2_Block_Instruction_BE2_InstructionBase__set_LocationsArray
   (MG_BlocksEngine2_Block_Instruction_BE2_InstructionBase_o* __this, System_Int32_array* value,
   const MethodInfo* method); */

void native_MG_BlocksEngine2_Block_Instruction_BE2_InstructionBase__set_LocationsArray_6116e8
               (long param_1,undefined8 param_2)

{
  ulong *puVar1;
  char cVar2;
  bool bVar3;
  undefined8 *puVar4;
  
  puVar4 = (undefined8 *)(param_1 + 0x58);
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



/* MG_BlocksEngine2.Block.Instruction.BE2_InstructionBase$$OnAwake @ 0x6116f0
 * void MG_BlocksEngine2_Block_Instruction_BE2_InstructionBase__OnAwake (MG_BlocksEngine2_Block_Instruction_BE2_InstructionBase_o* __this, const MethodInfo* method); */

/* MG_BlocksEngine2.Block.Instruction.BE2_InstructionBase$$OnAwake
   void MG_BlocksEngine2_Block_Instruction_BE2_InstructionBase__OnAwake
   (MG_BlocksEngine2_Block_Instruction_BE2_InstructionBase_o* __this, const MethodInfo* method); */

void native_MG_BlocksEngine2_Block_Instruction_BE2_InstructionBase__OnAwake_6116f0(void)

{
  return;
}



/* MG_BlocksEngine2.Block.Instruction.BE2_InstructionBase$$OnStart @ 0x6116f4
 * void MG_BlocksEngine2_Block_Instruction_BE2_InstructionBase__OnStart (MG_BlocksEngine2_Block_Instruction_BE2_InstructionBase_o* __this, const MethodInfo* method); */

/* MG_BlocksEngine2.Block.Instruction.BE2_InstructionBase$$OnStart
   void MG_BlocksEngine2_Block_Instruction_BE2_InstructionBase__OnStart
   (MG_BlocksEngine2_Block_Instruction_BE2_InstructionBase_o* __this, const MethodInfo* method); */

void native_MG_BlocksEngine2_Block_Instruction_BE2_InstructionBase__OnStart_6116f4(void)

{
  return;
}



/* MG_BlocksEngine2.Block.Instruction.BE2_InstructionBase$$OnButtonPlay @ 0x6116f8
 * void MG_BlocksEngine2_Block_Instruction_BE2_InstructionBase__OnButtonPlay (MG_BlocksEngine2_Block_Instruction_BE2_InstructionBase_o* __this, const MethodInfo* method); */

/* MG_BlocksEngine2.Block.Instruction.BE2_InstructionBase$$OnButtonPlay
   void MG_BlocksEngine2_Block_Instruction_BE2_InstructionBase__OnButtonPlay
   (MG_BlocksEngine2_Block_Instruction_BE2_InstructionBase_o* __this, const MethodInfo* method); */

void native_MG_BlocksEngine2_Block_Instruction_BE2_InstructionBase__OnButtonPlay_6116f8(void)

{
  return;
}



/* MG_BlocksEngine2.Block.Instruction.BE2_InstructionBase$$OnButtonStop @ 0x6116fc
 * void MG_BlocksEngine2_Block_Instruction_BE2_InstructionBase__OnButtonStop (MG_BlocksEngine2_Block_Instruction_BE2_InstructionBase_o* __this, const MethodInfo* method); */

/* MG_BlocksEngine2.Block.Instruction.BE2_InstructionBase$$OnButtonStop
   void MG_BlocksEngine2_Block_Instruction_BE2_InstructionBase__OnButtonStop
   (MG_BlocksEngine2_Block_Instruction_BE2_InstructionBase_o* __this, const MethodInfo* method); */

void native_MG_BlocksEngine2_Block_Instruction_BE2_InstructionBase__OnButtonStop_6116fc(void)

{
  return;
}



/* MG_BlocksEngine2.Block.Instruction.BE2_InstructionBase$$OnPrepareToPlay @ 0x611700
 * void MG_BlocksEngine2_Block_Instruction_BE2_InstructionBase__OnPrepareToPlay (MG_BlocksEngine2_Block_Instruction_BE2_InstructionBase_o* __this, const MethodInfo* method); */

/* MG_BlocksEngine2.Block.Instruction.BE2_InstructionBase$$OnPrepareToPlay
   void MG_BlocksEngine2_Block_Instruction_BE2_InstructionBase__OnPrepareToPlay
   (MG_BlocksEngine2_Block_Instruction_BE2_InstructionBase_o* __this, const MethodInfo* method); */

void native_MG_BlocksEngine2_Block_Instruction_BE2_InstructionBase__OnPrepareToPlay_611700(void)

{
  return;
}



/* MG_BlocksEngine2.Block.Instruction.BE2_InstructionBase$$OnStackActive @ 0x611704
 * void MG_BlocksEngine2_Block_Instruction_BE2_InstructionBase__OnStackActive (MG_BlocksEngine2_Block_Instruction_BE2_InstructionBase_o* __this, const MethodInfo* method); */

/* MG_BlocksEngine2.Block.Instruction.BE2_InstructionBase$$OnStackActive
   void MG_BlocksEngine2_Block_Instruction_BE2_InstructionBase__OnStackActive
   (MG_BlocksEngine2_Block_Instruction_BE2_InstructionBase_o* __this, const MethodInfo* method); */

void native_MG_BlocksEngine2_Block_Instruction_BE2_InstructionBase__OnStackActive_611704(void)

{
  return;
}



/* MG_BlocksEngine2.Block.Instruction.BE2_InstructionBase$$OnEnableInstruction @ 0x611708
 * void MG_BlocksEngine2_Block_Instruction_BE2_InstructionBase__OnEnableInstruction (MG_BlocksEngine2_Block_Instruction_BE2_InstructionBase_o* __this, const MethodInfo* method); */

/* MG_BlocksEngine2.Block.Instruction.BE2_InstructionBase$$OnEnableInstruction
   void MG_BlocksEngine2_Block_Instruction_BE2_InstructionBase__OnEnableInstruction
   (MG_BlocksEngine2_Block_Instruction_BE2_InstructionBase_o* __this, const MethodInfo* method); */

void native_MG_BlocksEngine2_Block_Instruction_BE2_InstructionBase__OnEnableInstruction_611708(void)

{
  return;
}



/* MG_BlocksEngine2.Block.Instruction.BE2_InstructionBase$$OnDisableInstruction @ 0x61170c
 * void MG_BlocksEngine2_Block_Instruction_BE2_InstructionBase__OnDisableInstruction (MG_BlocksEngine2_Block_Instruction_BE2_InstructionBase_o* __this, const MethodInfo* method); */

/* MG_BlocksEngine2.Block.Instruction.BE2_InstructionBase$$OnDisableInstruction
   void MG_BlocksEngine2_Block_Instruction_BE2_InstructionBase__OnDisableInstruction
   (MG_BlocksEngine2_Block_Instruction_BE2_InstructionBase_o* __this, const MethodInfo* method); */

void native_MG_BlocksEngine2_Block_Instruction_BE2_InstructionBase__OnDisableInstruction_61170c
               (void)

{
  return;
}



/* MG_BlocksEngine2.Block.Instruction.BE2_InstructionBase$$Awake @ 0x611710
 * void MG_BlocksEngine2_Block_Instruction_BE2_InstructionBase__Awake (MG_BlocksEngine2_Block_Instruction_BE2_InstructionBase_o* __this, const MethodInfo* method); */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* MG_BlocksEngine2.Block.Instruction.BE2_InstructionBase$$Awake
   void MG_BlocksEngine2_Block_Instruction_BE2_InstructionBase__Awake
   (MG_BlocksEngine2_Block_Instruction_BE2_InstructionBase_o* __this, const MethodInfo* method); */

void native_MG_BlocksEngine2_Block_Instruction_BE2_InstructionBase__Awake_611710(long *param_1)

{
  int iVar1;
  long lVar2;
  undefined8 *puVar3;
  ulong uVar4;
  int *piVar5;
  long *plVar6;
  
  if ((bRam000000000133ee59 & 1) == 0) {
    native_sub_43273c(&Method_UnityEngine_Component_GetComponent_I_BE2_BlockLayout____12e2a10);
    native_sub_43273c(&Method_UnityEngine_Component_GetComponent_I_BE2_Block____12e2a08);
    native_sub_43273c(&Method_UnityEngine_Component_GetComponent_I_BE2_BlocksStack____12e2a40);
    native_sub_43273c(&Method_UnityEngine_Component_GetComponent_I_BE2_Instruction____12e2a50);
    native_sub_43273c(&MG_BlocksEngine2_Block_I_BE2_Block_TypeInfo_12d4dd8);
    bRam000000000133ee59 = 1;
  }
  param_1[0xd] = (long)param_1;
  native_sub_4326e0(param_1 + 0xd,param_1);
  lVar2 = native_UnityEngine_Component__GetComponent_ActiveAnimation__49daec
                    (param_1,_Method_UnityEngine_Component_GetComponent_I_BE2_Instruction____12e2a50
                    );
  param_1[7] = lVar2;
  native_sub_4326e0(param_1 + 7);
  lVar2 = native_UnityEngine_Component__GetComponent_ActiveAnimation__49daec
                    (param_1,_Method_UnityEngine_Component_GetComponent_I_BE2_Block____12e2a08);
  param_1[8] = lVar2;
  native_sub_4326e0(param_1 + 8);
  lVar2 = native_UnityEngine_Component__GetComponent_ActiveAnimation__49daec
                    (param_1,_Method_UnityEngine_Component_GetComponent_I_BE2_BlockLayout____12e2a10
                    );
  param_1[3] = lVar2;
  native_sub_4326e0(param_1 + 3);
  plVar6 = (long *)param_1[8];
  if (plVar6 == (long *)0x0) {
                    /* WARNING: Subroutine does not return */
    native_sub_432810();
  }
  lVar2 = *plVar6;
  if ((ulong)*(ushort *)(lVar2 + 0x12a) != 0) {
    uVar4 = 0;
    piVar5 = (int *)(*(long *)(lVar2 + 0xb0) + 8);
    do {
      if (*(long *)(piVar5 + -2) == _MG_BlocksEngine2_Block_I_BE2_Block_TypeInfo_12d4dd8) {
        puVar3 = (undefined8 *)(lVar2 + (long)(*piVar5 + 1) * 0x10 + 0x138);
        goto LAB_00611854;
      }
      uVar4 = uVar4 + 1;
      piVar5 = piVar5 + 4;
    } while (uVar4 < *(ushort *)(lVar2 + 0x12a));
  }
  puVar3 = (undefined8 *)
           native_sub_3c9b34(plVar6,_MG_BlocksEngine2_Block_I_BE2_Block_TypeInfo_12d4dd8,1);
LAB_00611854:
  iVar1 = (*(code *)*puVar3)(plVar6,puVar3[1]);
  if (iVar1 == 4) {
    lVar2 = native_UnityEngine_Component__GetComponent_ActiveAnimation__49daec
                      (param_1,
                       _Method_UnityEngine_Component_GetComponent_I_BE2_BlocksStack____12e2a40);
    param_1[9] = lVar2;
    native_sub_4326e0(param_1 + 9);
  }
                    /* WARNING: Could not recover jumptable at 0x006118a4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(*param_1 + 0x268))(param_1,*(undefined8 *)(*param_1 + 0x270));
  return;
}



/* MG_BlocksEngine2.Block.Instruction.BE2_InstructionBase$$Start @ 0x6118ac
 * void MG_BlocksEngine2_Block_Instruction_BE2_InstructionBase__Start (MG_BlocksEngine2_Block_Instruction_BE2_InstructionBase_o* __this, const MethodInfo* method); */

/* MG_BlocksEngine2.Block.Instruction.BE2_InstructionBase$$Start
   void MG_BlocksEngine2_Block_Instruction_BE2_InstructionBase__Start
   (MG_BlocksEngine2_Block_Instruction_BE2_InstructionBase_o* __this, const MethodInfo* method); */

void native_MG_BlocksEngine2_Block_Instruction_BE2_InstructionBase__Start_6118ac(long *param_1)

{
  native_MG_BlocksEngine2_Block_Instruction_BE2_InstructionBase__Initialize_608e84();
                    /* WARNING: Could not recover jumptable at 0x006118d8. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(*param_1 + 0x278))(param_1,*(undefined8 *)(*param_1 + 0x280));
  return;
}



/* MG_BlocksEngine2.Block.Instruction.BE2_InstructionBase$$Initialize @ 0x608e84
 * void MG_BlocksEngine2_Block_Instruction_BE2_InstructionBase__Initialize (MG_BlocksEngine2_Block_Instruction_BE2_InstructionBase_o* __this, const MethodInfo* method); */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* MG_BlocksEngine2.Block.Instruction.BE2_InstructionBase$$Initialize
   void MG_BlocksEngine2_Block_Instruction_BE2_InstructionBase__Initialize
   (MG_BlocksEngine2_Block_Instruction_BE2_InstructionBase_o* __this, const MethodInfo* method); */

void native_MG_BlocksEngine2_Block_Instruction_BE2_InstructionBase__Initialize_608e84(long param_1)

{
  undefined8 *puVar1;
  undefined8 uVar2;
  long lVar3;
  ulong uVar4;
  int *piVar5;
  long *plVar6;
  undefined8 uStack_38;
  
  if ((bRam000000000133ee5a & 1) == 0) {
    native_sub_43273c(&
                      Method_MG_BlocksEngine2_Utils_BE2_ArrayUtils_FindAll_I_BE2_BlockSection____12e20e0
                     );
    native_sub_43273c(&MG_BlocksEngine2_Block_I_BE2_BlockLayout_TypeInfo_12d4de0);
    native_sub_43273c(&MG_BlocksEngine2_Block_I_BE2_BlockSectionHeader_TypeInfo_12d4df8);
    native_sub_43273c(&MG_BlocksEngine2_Block_I_BE2_BlockSection_TypeInfo_12d4de8);
    native_sub_43273c(&MG_BlocksEngine2_Block_I_BE2_Block_TypeInfo_12d4dd8);
    native_sub_43273c(&int___TypeInfo_12d3258);
    native_sub_43273c(&Method_System_Predicate_I_BE2_BlockSection___ctor___12ddae8);
    native_sub_43273c(&System_Predicate_I_BE2_BlockSection__TypeInfo_12d2d90);
    native_sub_43273c(&
                      Method_MG_BlocksEngine2_Block_Instruction_BE2_InstructionBase___c__Initialize_b__34_0___12e9678
                     );
    native_sub_43273c(&MG_BlocksEngine2_Block_Instruction_BE2_InstructionBase___c_TypeInfo_12d7048);
    bRam000000000133ee5a = 1;
  }
  uStack_38 = 0;
  plVar6 = *(long **)(param_1 + 0x40);
  if (plVar6 != (long *)0x0) {
    lVar3 = *plVar6;
    if ((ulong)*(ushort *)(lVar3 + 0x12a) != 0) {
      uVar4 = 0;
      piVar5 = (int *)(*(long *)(lVar3 + 0xb0) + 8);
      do {
        if (*(long *)(piVar5 + -2) == _MG_BlocksEngine2_Block_I_BE2_Block_TypeInfo_12d4dd8) {
          puVar1 = (undefined8 *)(lVar3 + (long)(*piVar5 + 3) * 0x10 + 0x138);
          goto LAB_00608f94;
        }
        uVar4 = uVar4 + 1;
        piVar5 = piVar5 + 4;
      } while (uVar4 < *(ushort *)(lVar3 + 0x12a));
    }
    puVar1 = (undefined8 *)
             native_sub_3c9b34(plVar6,_MG_BlocksEngine2_Block_I_BE2_Block_TypeInfo_12d4dd8,3);
LAB_00608f94:
    plVar6 = (long *)(*(code *)*puVar1)(plVar6,puVar1[1]);
    if (plVar6 != (long *)0x0) {
      lVar3 = *plVar6;
      if ((ulong)*(ushort *)(lVar3 + 0x12a) != 0) {
        uVar4 = 0;
        piVar5 = (int *)(*(long *)(lVar3 + 0xb0) + 8);
        do {
          if (*(long *)(piVar5 + -2) == _MG_BlocksEngine2_Block_I_BE2_BlockLayout_TypeInfo_12d4de0)
          {
            puVar1 = (undefined8 *)(lVar3 + (long)(*piVar5 + 2) * 0x10 + 0x138);
            goto LAB_00609008;
          }
          uVar4 = uVar4 + 1;
          piVar5 = piVar5 + 4;
        } while (uVar4 < *(ushort *)(lVar3 + 0x12a));
      }
      puVar1 = (undefined8 *)
               native_sub_3c9b34(plVar6,_MG_BlocksEngine2_Block_I_BE2_BlockLayout_TypeInfo_12d4de0,2
                                );
LAB_00609008:
      lVar3 = (*(code *)*puVar1)(plVar6,puVar1[1]);
      if (lVar3 != 0) {
        if (*(int *)(lVar3 + 0x18) == 0) {
          uVar2 = native_sub_43283c();
                    /* WARNING: Subroutine does not return */
          native_sub_4327dc(uVar2,0);
        }
        plVar6 = *(long **)(lVar3 + 0x20);
        if (plVar6 != (long *)0x0) {
          lVar3 = *plVar6;
          if ((ulong)*(ushort *)(lVar3 + 0x12a) != 0) {
            uVar4 = 0;
            piVar5 = (int *)(*(long *)(lVar3 + 0xb0) + 8);
            do {
              if (*(long *)(piVar5 + -2) ==
                  _MG_BlocksEngine2_Block_I_BE2_BlockSection_TypeInfo_12d4de8) {
                puVar1 = (undefined8 *)(lVar3 + (long)(*piVar5 + 1) * 0x10 + 0x138);
                goto LAB_00609088;
              }
              uVar4 = uVar4 + 1;
              piVar5 = piVar5 + 4;
            } while (uVar4 < *(ushort *)(lVar3 + 0x12a));
          }
          puVar1 = (undefined8 *)
                   native_sub_3c9b34(plVar6,
                                     _MG_BlocksEngine2_Block_I_BE2_BlockSection_TypeInfo_12d4de8,1);
LAB_00609088:
          uVar2 = (*(code *)*puVar1)(plVar6,puVar1[1]);
          puVar1 = (undefined8 *)(param_1 + 0x28);
          *puVar1 = uVar2;
          native_sub_4326e0(puVar1,uVar2);
          plVar6 = (long *)*puVar1;
          if (plVar6 != (long *)0x0) {
            lVar3 = *plVar6;
            if ((ulong)*(ushort *)(lVar3 + 0x12a) != 0) {
              uVar4 = 0;
              piVar5 = (int *)(*(long *)(lVar3 + 0xb0) + 8);
              do {
                if (*(long *)(piVar5 + -2) ==
                    _MG_BlocksEngine2_Block_I_BE2_BlockSectionHeader_TypeInfo_12d4df8) {
                  puVar1 = (undefined8 *)(lVar3 + (long)(*piVar5 + 7) * 0x10 + 0x138);
                  goto LAB_00609110;
                }
                uVar4 = uVar4 + 1;
                piVar5 = piVar5 + 4;
              } while (uVar4 < *(ushort *)(lVar3 + 0x12a));
            }
            puVar1 = (undefined8 *)
                     native_sub_3c9b34(plVar6,
                                       _MG_BlocksEngine2_Block_I_BE2_BlockSectionHeader_TypeInfo_12d4df8
                                       ,7);
LAB_00609110:
            (*(code *)*puVar1)(plVar6,puVar1[1]);
            plVar6 = *(long **)(param_1 + 0x18);
            if (plVar6 != (long *)0x0) {
              lVar3 = *plVar6;
              if ((ulong)*(ushort *)(lVar3 + 0x12a) != 0) {
                uVar4 = 0;
                piVar5 = (int *)(*(long *)(lVar3 + 0xb0) + 8);
                do {
                  if (*(long *)(piVar5 + -2) ==
                      _MG_BlocksEngine2_Block_I_BE2_BlockLayout_TypeInfo_12d4de0) {
                    puVar1 = (undefined8 *)(lVar3 + (long)(*piVar5 + 2) * 0x10 + 0x138);
                    goto LAB_0060917c;
                  }
                  uVar4 = uVar4 + 1;
                  piVar5 = piVar5 + 4;
                } while (uVar4 < *(ushort *)(lVar3 + 0x12a));
              }
              puVar1 = (undefined8 *)
                       native_sub_3c9b34(plVar6,
                                         _MG_BlocksEngine2_Block_I_BE2_BlockLayout_TypeInfo_12d4de0,
                                         2);
LAB_0060917c:
              uStack_38 = (*(code *)*puVar1)(plVar6,puVar1[1]);
              if (((*(byte *)(
                             _MG_BlocksEngine2_Block_Instruction_BE2_InstructionBase___c_TypeInfo_12d7048
                             + 0x133) >> 2 & 1) != 0) &&
                 (*(int *)(
                          _MG_BlocksEngine2_Block_Instruction_BE2_InstructionBase___c_TypeInfo_12d7048
                          + 0xe0) == 0)) {
                native_sub_4327ec(
                                 _MG_BlocksEngine2_Block_Instruction_BE2_InstructionBase___c_TypeInfo_12d7048
                                 );
              }
              puVar1 = *(undefined8 **)
                        (
                        _MG_BlocksEngine2_Block_Instruction_BE2_InstructionBase___c_TypeInfo_12d7048
                        + 0xb8);
              lVar3 = puVar1[1];
              if (lVar3 == 0) {
                if (((*(byte *)(
                               _MG_BlocksEngine2_Block_Instruction_BE2_InstructionBase___c_TypeInfo_12d7048
                               + 0x133) >> 2 & 1) != 0) &&
                   (*(int *)(
                            _MG_BlocksEngine2_Block_Instruction_BE2_InstructionBase___c_TypeInfo_12d7048
                            + 0xe0) == 0)) {
                  native_sub_4327ec(
                                   _MG_BlocksEngine2_Block_Instruction_BE2_InstructionBase___c_TypeInfo_12d7048
                                   );
                  puVar1 = *(undefined8 **)
                            (
                            _MG_BlocksEngine2_Block_Instruction_BE2_InstructionBase___c_TypeInfo_12d7048
                            + 0xb8);
                }
                uVar2 = *puVar1;
                lVar3 = native_sub_432808(_System_Predicate_I_BE2_BlockSection__TypeInfo_12d2d90);
                native_System_Predicate_BaseInvokableCall____ctor_ac31d4
                          (lVar3,uVar2,
                           _Method_MG_BlocksEngine2_Block_Instruction_BE2_InstructionBase___c__Initialize_b__34_0___12e9678
                           ,_Method_System_Predicate_I_BE2_BlockSection___ctor___12ddae8);
                plVar6 = (long *)(*(long *)(
                                           _MG_BlocksEngine2_Block_Instruction_BE2_InstructionBase___c_TypeInfo_12d7048
                                           + 0xb8) + 8);
                *plVar6 = lVar3;
                native_sub_4326e0(plVar6,lVar3);
              }
              lVar3 = native_MG_BlocksEngine2_Utils_BE2_ArrayUtils__FindAll_I_BE2_BlockSection__49b540
                                (&uStack_38,lVar3,
                                 _Method_MG_BlocksEngine2_Utils_BE2_ArrayUtils_FindAll_I_BE2_BlockSection____12e20e0
                                );
              if ((lVar3 != 0) &&
                 (uVar2 = native_sub_432750(_int___TypeInfo_12d3258,*(int *)(lVar3 + 0x18) + 1),
                 param_1 != 0)) {
                *(undefined8 *)(param_1 + 0x58) = uVar2;
                native_sub_4326e0((undefined8 *)(param_1 + 0x58),uVar2);
                plVar6 = *(long **)(param_1 + 0x18);
                if (plVar6 != (long *)0x0) {
                  lVar3 = *plVar6;
                  if ((ulong)*(ushort *)(lVar3 + 0x12a) != 0) {
                    uVar4 = 0;
                    piVar5 = (int *)(*(long *)(lVar3 + 0xb0) + 8);
                    do {
                      if (*(long *)(piVar5 + -2) ==
                          _MG_BlocksEngine2_Block_I_BE2_BlockLayout_TypeInfo_12d4de0) {
                        puVar1 = (undefined8 *)(lVar3 + (long)(*piVar5 + 2) * 0x10 + 0x138);
                        goto LAB_006092d8;
                      }
                      uVar4 = uVar4 + 1;
                      piVar5 = piVar5 + 4;
                    } while (uVar4 < *(ushort *)(lVar3 + 0x12a));
                  }
                  puVar1 = (undefined8 *)
                           native_sub_3c9b34(plVar6,
                                             _MG_BlocksEngine2_Block_I_BE2_BlockLayout_TypeInfo_12d4de0
                                             ,2);
LAB_006092d8:
                  uVar2 = (*(code *)*puVar1)(plVar6,puVar1[1]);
                  *(undefined8 *)(param_1 + 0x20) = uVar2;
                  native_sub_4326e0((undefined8 *)(param_1 + 0x20),uVar2);
                  return;
                }
              }
            }
          }
        }
      }
    }
  }
                    /* WARNING: Subroutine does not return */
  native_sub_432810();
}



/* MG_BlocksEngine2.Block.Instruction.BE2_InstructionBase$$OnEnable @ 0x6118dc
 * void MG_BlocksEngine2_Block_Instruction_BE2_InstructionBase__OnEnable (MG_BlocksEngine2_Block_Instruction_BE2_InstructionBase_o* __this, const MethodInfo* method); */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* MG_BlocksEngine2.Block.Instruction.BE2_InstructionBase$$OnEnable
   void MG_BlocksEngine2_Block_Instruction_BE2_InstructionBase__OnEnable
   (MG_BlocksEngine2_Block_Instruction_BE2_InstructionBase_o* __this, const MethodInfo* method); */

void native_MG_BlocksEngine2_Block_Instruction_BE2_InstructionBase__OnEnable_6118dc(long *param_1)

{
  long lVar1;
  undefined8 uVar2;
  
  if ((bRam000000000133ee5b & 1) == 0) {
    native_sub_43273c(&
                      Method_MG_BlocksEngine2_Block_Instruction_BE2_InstructionBase_GetBlockStack___12e2268
                     );
    native_sub_43273c(&UnityEngine_Events_UnityAction_TypeInfo_12d65d0);
    bRam000000000133ee5b = 1;
  }
  lVar1 = native_MG_BlocksEngine2_Core_BE2_MainEventsManager__get_Instance_6001fc();
  uVar2 = native_sub_432808(_UnityEngine_Events_UnityAction_TypeInfo_12d65d0);
  if ((param_1 != (long *)0x0) &&
     (native_UnityEngine_Events_UnityAction___ctor_773130
                (uVar2,param_1,*(undefined8 *)(*param_1 + 0x290),0), lVar1 != 0)) {
    native_MG_BlocksEngine2_Core_BE2_EventsManager__StartListening_563268(lVar1,0,uVar2,0);
    lVar1 = native_MG_BlocksEngine2_Core_BE2_MainEventsManager__get_Instance_6001fc();
    uVar2 = native_sub_432808(_UnityEngine_Events_UnityAction_TypeInfo_12d65d0);
    native_UnityEngine_Events_UnityAction___ctor_773130
              (uVar2,param_1,*(undefined8 *)(*param_1 + 0x2a0),0);
    if (lVar1 != 0) {
      native_MG_BlocksEngine2_Core_BE2_EventsManager__StartListening_563268(lVar1,1,uVar2,0);
      lVar1 = native_MG_BlocksEngine2_Core_BE2_MainEventsManager__get_Instance_6001fc();
      uVar2 = native_sub_432808(_UnityEngine_Events_UnityAction_TypeInfo_12d65d0);
      native_UnityEngine_Events_UnityAction___ctor_773130
                (uVar2,param_1,
                 _Method_MG_BlocksEngine2_Block_Instruction_BE2_InstructionBase_GetBlockStack___12e2268
                 ,0);
      if (lVar1 != 0) {
        native_MG_BlocksEngine2_Core_BE2_EventsManager__StartListening_563268(lVar1,3,uVar2,0);
                    /* WARNING: Could not recover jumptable at 0x00611a14. Too many branches */
                    /* WARNING: Treating indirect jump as call */
        (**(code **)(*param_1 + 0x2c8))(param_1,*(undefined8 *)(*param_1 + 0x2d0));
        return;
      }
    }
  }
                    /* WARNING: Subroutine does not return */
  native_sub_432810();
}



/* MG_BlocksEngine2.Block.Instruction.BE2_InstructionBase$$OnDisable @ 0x611a1c
 * void MG_BlocksEngine2_Block_Instruction_BE2_InstructionBase__OnDisable (MG_BlocksEngine2_Block_Instruction_BE2_InstructionBase_o* __this, const MethodInfo* method); */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* MG_BlocksEngine2.Block.Instruction.BE2_InstructionBase$$OnDisable
   void MG_BlocksEngine2_Block_Instruction_BE2_InstructionBase__OnDisable
   (MG_BlocksEngine2_Block_Instruction_BE2_InstructionBase_o* __this, const MethodInfo* method); */

void native_MG_BlocksEngine2_Block_Instruction_BE2_InstructionBase__OnDisable_611a1c(long *param_1)

{
  long lVar1;
  undefined8 uVar2;
  
  if ((bRam000000000133ee5c & 1) == 0) {
    native_sub_43273c(&
                      Method_MG_BlocksEngine2_Block_Instruction_BE2_InstructionBase_GetBlockStack___12e2268
                     );
    native_sub_43273c(&UnityEngine_Events_UnityAction_TypeInfo_12d65d0);
    bRam000000000133ee5c = 1;
  }
  lVar1 = native_MG_BlocksEngine2_Core_BE2_MainEventsManager__get_Instance_6001fc();
  uVar2 = native_sub_432808(_UnityEngine_Events_UnityAction_TypeInfo_12d65d0);
  if ((param_1 != (long *)0x0) &&
     (native_UnityEngine_Events_UnityAction___ctor_773130
                (uVar2,param_1,*(undefined8 *)(*param_1 + 0x290),0), lVar1 != 0)) {
    native_MG_BlocksEngine2_Core_BE2_EventsManager__StopListening_56340c(lVar1,0,uVar2,0);
    lVar1 = native_MG_BlocksEngine2_Core_BE2_MainEventsManager__get_Instance_6001fc();
    uVar2 = native_sub_432808(_UnityEngine_Events_UnityAction_TypeInfo_12d65d0);
    native_UnityEngine_Events_UnityAction___ctor_773130
              (uVar2,param_1,*(undefined8 *)(*param_1 + 0x2a0),0);
    if (lVar1 != 0) {
      native_MG_BlocksEngine2_Core_BE2_EventsManager__StopListening_56340c(lVar1,1,uVar2,0);
      lVar1 = native_MG_BlocksEngine2_Core_BE2_MainEventsManager__get_Instance_6001fc();
      uVar2 = native_sub_432808(_UnityEngine_Events_UnityAction_TypeInfo_12d65d0);
      native_UnityEngine_Events_UnityAction___ctor_773130
                (uVar2,param_1,
                 _Method_MG_BlocksEngine2_Block_Instruction_BE2_InstructionBase_GetBlockStack___12e2268
                 ,0);
      if (lVar1 != 0) {
        native_MG_BlocksEngine2_Core_BE2_EventsManager__StopListening_56340c(lVar1,3,uVar2,0);
                    /* WARNING: Could not recover jumptable at 0x00611b54. Too many branches */
                    /* WARNING: Treating indirect jump as call */
        (**(code **)(*param_1 + 0x2d8))(param_1,*(undefined8 *)(*param_1 + 0x2e0));
        return;
      }
    }
  }
                    /* WARNING: Subroutine does not return */
  native_sub_432810();
}



/* MG_BlocksEngine2.Block.Instruction.BE2_InstructionBase$$UpdateTargetObject @ 0x611b5c
 * void MG_BlocksEngine2_Block_Instruction_BE2_InstructionBase__UpdateTargetObject (MG_BlocksEngine2_Block_Instruction_BE2_InstructionBase_o* __this, const MethodInfo* method); */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* MG_BlocksEngine2.Block.Instruction.BE2_InstructionBase$$UpdateTargetObject
   void MG_BlocksEngine2_Block_Instruction_BE2_InstructionBase__UpdateTargetObject
   (MG_BlocksEngine2_Block_Instruction_BE2_InstructionBase_o* __this, const MethodInfo* method); */

void native_MG_BlocksEngine2_Block_Instruction_BE2_InstructionBase__UpdateTargetObject_611b5c
               (long param_1)

{
  ulong *puVar1;
  char cVar2;
  bool bVar3;
  long *plVar4;
  undefined8 *puVar5;
  undefined8 uVar6;
  long lVar7;
  ulong uVar8;
  int *piVar9;
  
  if ((bRam000000000133ee5d & 1) == 0) {
    native_sub_43273c(&
                      Method_UnityEngine_Component_GetComponentInParent_I_BE2_ProgrammingEnv____12e2d60
                     );
    native_sub_43273c(&MG_BlocksEngine2_Environment_I_BE2_ProgrammingEnv_TypeInfo_12d4e38);
    bRam000000000133ee5d = 1;
  }
  plVar4 = (long *)native_UnityEngine_Component__GetComponentInParent_BE2_Canvas__49dc70
                             (param_1,
                              _Method_UnityEngine_Component_GetComponentInParent_I_BE2_ProgrammingEnv____12e2d60
                             );
  if (plVar4 == (long *)0x0) {
    uVar6 = 0;
  }
  else {
    lVar7 = *plVar4;
    if ((ulong)*(ushort *)(lVar7 + 0x12a) != 0) {
      uVar8 = 0;
      piVar9 = (int *)(*(long *)(lVar7 + 0xb0) + 8);
      do {
        if (*(long *)(piVar9 + -2) ==
            _MG_BlocksEngine2_Environment_I_BE2_ProgrammingEnv_TypeInfo_12d4e38) {
          puVar5 = (undefined8 *)(lVar7 + (long)(*piVar9 + 2) * 0x10 + 0x138);
          goto LAB_00611c2c;
        }
        uVar8 = uVar8 + 1;
        piVar9 = piVar9 + 4;
      } while (uVar8 < *(ushort *)(lVar7 + 0x12a));
    }
    puVar5 = (undefined8 *)
             native_sub_3c9b34(plVar4,
                               _MG_BlocksEngine2_Environment_I_BE2_ProgrammingEnv_TypeInfo_12d4e38,2
                              );
LAB_00611c2c:
    uVar6 = (*(code *)*puVar5)(plVar4,puVar5[1]);
  }
  if (param_1 != 0) {
    puVar5 = (undefined8 *)(param_1 + 0x50);
    *puVar5 = uVar6;
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
                    /* WARNING: Subroutine does not return */
  native_sub_432810();
}



/* MG_BlocksEngine2.Block.Instruction.BE2_InstructionBase$$GetBlockStack @ 0x611c60
 * void MG_BlocksEngine2_Block_Instruction_BE2_InstructionBase__GetBlockStack (MG_BlocksEngine2_Block_Instruction_BE2_InstructionBase_o* __this, const MethodInfo* method); */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* MG_BlocksEngine2.Block.Instruction.BE2_InstructionBase$$GetBlockStack
   void MG_BlocksEngine2_Block_Instruction_BE2_InstructionBase__GetBlockStack
   (MG_BlocksEngine2_Block_Instruction_BE2_InstructionBase_o* __this, const MethodInfo* method); */

void native_MG_BlocksEngine2_Block_Instruction_BE2_InstructionBase__GetBlockStack_611c60
               (long param_1)

{
  undefined8 uVar1;
  undefined8 *puVar2;
  undefined8 uVar3;
  code *UNRECOVERED_JUMPTABLE;
  long lVar4;
  ulong uVar5;
  int *piVar6;
  long *plVar7;
  
  if ((bRam000000000133ee5e & 1) == 0) {
    native_sub_43273c(&
                      Method_UnityEngine_Component_GetComponentInParent_I_BE2_BlocksStack____12e2d50
                     );
    native_sub_43273c(&MG_BlocksEngine2_Block_I_BE2_Block_TypeInfo_12d4dd8);
    native_sub_43273c(&MG_BlocksEngine2_Core_I_BE2_BlocksStack_TypeInfo_12d4e10);
    bRam000000000133ee5e = 1;
  }
  uVar1 = native_UnityEngine_Component__GetComponentInParent_BE2_Canvas__49dc70
                    (param_1,
                     _Method_UnityEngine_Component_GetComponentInParent_I_BE2_BlocksStack____12e2d50
                    );
  *(undefined8 *)(param_1 + 0x48) = uVar1;
  native_sub_4326e0(param_1 + 0x48);
  plVar7 = *(long **)(param_1 + 0x48);
  if (plVar7 == (long *)0x0) {
    plVar7 = *(long **)(param_1 + 0x40);
    if (plVar7 == (long *)0x0) goto LAB_00611e48;
    lVar4 = *plVar7;
    if ((ulong)*(ushort *)(lVar4 + 0x12a) != 0) {
      uVar5 = 0;
      piVar6 = (int *)(*(long *)(lVar4 + 0xb0) + 8);
      do {
        if (*(long *)(piVar6 + -2) == _MG_BlocksEngine2_Block_I_BE2_Block_TypeInfo_12d4dd8) {
          puVar2 = (undefined8 *)(lVar4 + (long)(*piVar6 + 9) * 0x10 + 0x138);
          goto LAB_00611e10;
        }
        uVar5 = uVar5 + 1;
        piVar6 = piVar6 + 4;
      } while (uVar5 < *(ushort *)(lVar4 + 0x12a));
    }
    puVar2 = (undefined8 *)
             native_sub_3c9b34(plVar7,_MG_BlocksEngine2_Block_I_BE2_Block_TypeInfo_12d4dd8,9);
LAB_00611e10:
    UNRECOVERED_JUMPTABLE = (code *)*puVar2;
    uVar1 = puVar2[1];
    uVar3 = 0;
  }
  else {
    lVar4 = *plVar7;
    if ((ulong)*(ushort *)(lVar4 + 0x12a) != 0) {
      uVar5 = 0;
      piVar6 = (int *)(*(long *)(lVar4 + 0xb0) + 8);
      do {
        if (*(long *)(piVar6 + -2) == _MG_BlocksEngine2_Core_I_BE2_BlocksStack_TypeInfo_12d4e10) {
          puVar2 = (undefined8 *)(lVar4 + (long)(*piVar6 + 2) * 0x10 + 0x138);
          goto LAB_00611d8c;
        }
        uVar5 = uVar5 + 1;
        piVar6 = piVar6 + 4;
      } while (uVar5 < *(ushort *)(lVar4 + 0x12a));
    }
    puVar2 = (undefined8 *)
             native_sub_3c9b34(plVar7,_MG_BlocksEngine2_Core_I_BE2_BlocksStack_TypeInfo_12d4e10,2);
LAB_00611d8c:
    uVar5 = (*(code *)*puVar2)(plVar7,puVar2[1]);
    if ((uVar5 & 1) == 0) {
      return;
    }
    plVar7 = *(long **)(param_1 + 0x40);
    if (plVar7 == (long *)0x0) {
LAB_00611e48:
                    /* WARNING: Subroutine does not return */
      native_sub_432810();
    }
    lVar4 = *plVar7;
    if ((ulong)*(ushort *)(lVar4 + 0x12a) != 0) {
      uVar5 = 0;
      piVar6 = (int *)(*(long *)(lVar4 + 0xb0) + 8);
      do {
        if (*(long *)(piVar6 + -2) == _MG_BlocksEngine2_Block_I_BE2_Block_TypeInfo_12d4dd8) {
          puVar2 = (undefined8 *)(lVar4 + (long)(*piVar6 + 9) * 0x10 + 0x138);
          goto LAB_00611e30;
        }
        uVar5 = uVar5 + 1;
        piVar6 = piVar6 + 4;
      } while (uVar5 < *(ushort *)(lVar4 + 0x12a));
    }
    puVar2 = (undefined8 *)
             native_sub_3c9b34(plVar7,_MG_BlocksEngine2_Block_I_BE2_Block_TypeInfo_12d4dd8,9);
LAB_00611e30:
    UNRECOVERED_JUMPTABLE = (code *)*puVar2;
    uVar1 = puVar2[1];
    uVar3 = 1;
  }
                    /* WARNING: Could not recover jumptable at 0x00611e44. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*UNRECOVERED_JUMPTABLE)(plVar7,uVar3,uVar1);
  return;
}



/* MG_BlocksEngine2.Block.Instruction.BE2_InstructionBase$$get_Section0Inputs @ 0x603b78
 * MG_BlocksEngine2_Block_I_BE2_BlockSectionHeaderInput_array* MG_BlocksEngine2_Block_Instruction_BE2_InstructionBase__get_Section0Inputs (MG_BlocksEngine2_Block_Instruction_BE2_InstructionBase_o* __this, const MethodInfo* method); */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* MG_BlocksEngine2.Block.Instruction.BE2_InstructionBase$$get_Section0Inputs
   MG_BlocksEngine2_Block_I_BE2_BlockSectionHeaderInput_array*
   MG_BlocksEngine2_Block_Instruction_BE2_InstructionBase__get_Section0Inputs
   (MG_BlocksEngine2_Block_Instruction_BE2_InstructionBase_o* __this, const MethodInfo* method); */

undefined8
native_MG_BlocksEngine2_Block_Instruction_BE2_InstructionBase__get_Section0Inputs_603b78
          (long param_1)

{
  undefined8 *puVar1;
  undefined8 uVar2;
  long lVar3;
  ulong uVar4;
  int *piVar5;
  long *plVar6;
  
  if ((bRam000000000133ee5f & 1) == 0) {
    native_sub_43273c(&MG_BlocksEngine2_Block_I_BE2_BlockSectionHeader_TypeInfo_12d4df8);
    bRam000000000133ee5f = 1;
  }
  plVar6 = *(long **)(param_1 + 0x28);
  if (plVar6 == (long *)0x0) {
    return 0;
  }
  lVar3 = *plVar6;
  if ((ulong)*(ushort *)(lVar3 + 0x12a) != 0) {
    uVar4 = 0;
    piVar5 = (int *)(*(long *)(lVar3 + 0xb0) + 8);
    do {
      if (*(long *)(piVar5 + -2) ==
          _MG_BlocksEngine2_Block_I_BE2_BlockSectionHeader_TypeInfo_12d4df8) {
        puVar1 = (undefined8 *)(lVar3 + (long)(*piVar5 + 2) * 0x10 + 0x138);
        goto LAB_00603c20;
      }
      uVar4 = uVar4 + 1;
      piVar5 = piVar5 + 4;
    } while (uVar4 < *(ushort *)(lVar3 + 0x12a));
  }
  puVar1 = (undefined8 *)
           native_sub_3c9b34(plVar6,
                             _MG_BlocksEngine2_Block_I_BE2_BlockSectionHeader_TypeInfo_12d4df8,2);
LAB_00603c20:
                    /* WARNING: Could not recover jumptable at 0x00603c30. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  uVar2 = (*(code *)*puVar1)(plVar6,puVar1[1]);
  return uVar2;
}



/* MG_BlocksEngine2.Block.Instruction.BE2_InstructionBase$$GetSectionInputs @ 0x60366c
 * MG_BlocksEngine2_Block_I_BE2_BlockSectionHeaderInput_array* MG_BlocksEngine2_Block_Instruction_BE2_InstructionBase__GetSectionInputs (MG_BlocksEngine2_Block_Instruction_BE2_InstructionBase_o* __this, int32_t sectionIndex, const MethodInfo* method); */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* MG_BlocksEngine2.Block.Instruction.BE2_InstructionBase$$GetSectionInputs
   MG_BlocksEngine2_Block_I_BE2_BlockSectionHeaderInput_array*
   MG_BlocksEngine2_Block_Instruction_BE2_InstructionBase__GetSectionInputs
   (MG_BlocksEngine2_Block_Instruction_BE2_InstructionBase_o* __this, int32_t sectionIndex, const
   MethodInfo* method); */

void native_MG_BlocksEngine2_Block_Instruction_BE2_InstructionBase__GetSectionInputs_60366c
               (long param_1,uint param_2)

{
  undefined8 *puVar1;
  undefined8 uVar2;
  long lVar3;
  ulong uVar4;
  int *piVar5;
  long *plVar6;
  
  if ((bRam000000000133ee60 & 1) == 0) {
    native_sub_43273c(&MG_BlocksEngine2_Block_I_BE2_BlockSectionHeader_TypeInfo_12d4df8);
    native_sub_43273c(&MG_BlocksEngine2_Block_I_BE2_BlockSection_TypeInfo_12d4de8);
    bRam000000000133ee60 = 1;
  }
  lVar3 = *(long *)(param_1 + 0x20);
  if (lVar3 != 0) {
    if (*(uint *)(lVar3 + 0x18) <= param_2) {
      uVar2 = native_sub_43283c();
                    /* WARNING: Subroutine does not return */
      native_sub_4327dc(uVar2,0);
    }
    plVar6 = *(long **)(lVar3 + (long)(int)param_2 * 8 + 0x20);
    if (plVar6 != (long *)0x0) {
      lVar3 = *plVar6;
      if ((ulong)*(ushort *)(lVar3 + 0x12a) != 0) {
        uVar4 = 0;
        piVar5 = (int *)(*(long *)(lVar3 + 0xb0) + 8);
        do {
          if (*(long *)(piVar5 + -2) == _MG_BlocksEngine2_Block_I_BE2_BlockSection_TypeInfo_12d4de8)
          {
            puVar1 = (undefined8 *)(lVar3 + (long)(*piVar5 + 1) * 0x10 + 0x138);
            goto LAB_00603730;
          }
          uVar4 = uVar4 + 1;
          piVar5 = piVar5 + 4;
        } while (uVar4 < *(ushort *)(lVar3 + 0x12a));
      }
      puVar1 = (undefined8 *)
               native_sub_3c9b34(plVar6,_MG_BlocksEngine2_Block_I_BE2_BlockSection_TypeInfo_12d4de8,
                                 1);
LAB_00603730:
      plVar6 = (long *)(*(code *)*puVar1)(plVar6,puVar1[1]);
      if (plVar6 != (long *)0x0) {
        lVar3 = *plVar6;
        if ((ulong)*(ushort *)(lVar3 + 0x12a) != 0) {
          uVar4 = 0;
          piVar5 = (int *)(*(long *)(lVar3 + 0xb0) + 8);
          do {
            if (*(long *)(piVar5 + -2) ==
                _MG_BlocksEngine2_Block_I_BE2_BlockSectionHeader_TypeInfo_12d4df8) {
              puVar1 = (undefined8 *)(lVar3 + (long)(*piVar5 + 2) * 0x10 + 0x138);
              goto LAB_006037a4;
            }
            uVar4 = uVar4 + 1;
            piVar5 = piVar5 + 4;
          } while (uVar4 < *(ushort *)(lVar3 + 0x12a));
        }
        puVar1 = (undefined8 *)
                 native_sub_3c9b34(plVar6,
                                   _MG_BlocksEngine2_Block_I_BE2_BlockSectionHeader_TypeInfo_12d4df8
                                   ,2);
LAB_006037a4:
                    /* WARNING: Could not recover jumptable at 0x006037b8. Too many branches */
                    /* WARNING: Treating indirect jump as call */
        (*(code *)*puVar1)(plVar6,puVar1[1]);
        return;
      }
    }
  }
                    /* WARNING: Subroutine does not return */
  native_sub_432810();
}



/* MG_BlocksEngine2.Block.Instruction.BE2_InstructionBase$$PrepareToPlay @ 0x611e4c
 * void MG_BlocksEngine2_Block_Instruction_BE2_InstructionBase__PrepareToPlay (MG_BlocksEngine2_Block_Instruction_BE2_InstructionBase_o* __this, const MethodInfo* method); */

/* MG_BlocksEngine2.Block.Instruction.BE2_InstructionBase$$PrepareToPlay
   void MG_BlocksEngine2_Block_Instruction_BE2_InstructionBase__PrepareToPlay
   (MG_BlocksEngine2_Block_Instruction_BE2_InstructionBase_o* __this, const MethodInfo* method); */

void native_MG_BlocksEngine2_Block_Instruction_BE2_InstructionBase__PrepareToPlay_611e4c
               (long *param_1)

{
  undefined8 uVar1;
  long lVar2;
  
  lVar2 = param_1[0xb];
  if (lVar2 == 0) {
                    /* WARNING: Subroutine does not return */
    native_sub_432810();
  }
  if ((int)*(long *)(lVar2 + 0x18) != 0) {
    *(undefined4 *)(param_1 + 6) =
         *(undefined4 *)(lVar2 + ((*(long *)(lVar2 + 0x18) << 0x20) + -0x100000000 >> 0x1e) + 0x20);
                    /* WARNING: Could not recover jumptable at 0x00611e88. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (**(code **)(*param_1 + 0x2a8))(param_1,*(undefined8 *)(*param_1 + 0x2b0));
    return;
  }
  uVar1 = native_sub_43283c();
                    /* WARNING: Subroutine does not return */
  native_sub_4327dc(uVar1,0);
}



/* MG_BlocksEngine2.Block.Instruction.BE2_InstructionBase$$ExecuteSection @ 0x6095ec
 * void MG_BlocksEngine2_Block_Instruction_BE2_InstructionBase__ExecuteSection (MG_BlocksEngine2_Block_Instruction_BE2_InstructionBase_o* __this, int32_t sectionIndex, const MethodInfo* method); */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* MG_BlocksEngine2.Block.Instruction.BE2_InstructionBase$$ExecuteSection
   void MG_BlocksEngine2_Block_Instruction_BE2_InstructionBase__ExecuteSection
   (MG_BlocksEngine2_Block_Instruction_BE2_InstructionBase_o* __this, int32_t sectionIndex, const
   MethodInfo* method); */

void native_MG_BlocksEngine2_Block_Instruction_BE2_InstructionBase__ExecuteSection_6095ec
               (long param_1,uint param_2)

{
  undefined4 uVar1;
  uint uVar2;
  int iVar3;
  undefined8 *puVar4;
  undefined8 uVar5;
  code *UNRECOVERED_JUMPTABLE;
  long lVar6;
  long lVar7;
  ulong uVar8;
  int *piVar9;
  long *plVar10;
  long *plVar11;
  long lVar12;
  
  if ((bRam000000000133ee61 & 1) == 0) {
    native_sub_43273c(&MG_BlocksEngine2_Block_I_BE2_Block_TypeInfo_12d4dd8);
    native_sub_43273c(&MG_BlocksEngine2_Core_I_BE2_BlocksStack_TypeInfo_12d4e10);
    native_sub_43273c(&MG_BlocksEngine2_Block_Instruction_I_BE2_InstructionBase_TypeInfo_12d4e30);
    native_sub_43273c(&MG_BlocksEngine2_Block_Instruction_I_BE2_Instruction_TypeInfo_12d4e28);
    bRam000000000133ee61 = 1;
  }
  plVar10 = *(long **)(param_1 + 0x48);
  if (plVar10 == (long *)0x0) goto LAB_00609ef0;
  lVar6 = *plVar10;
  if ((ulong)*(ushort *)(lVar6 + 0x12a) != 0) {
    uVar8 = 0;
    piVar9 = (int *)(*(long *)(lVar6 + 0xb0) + 8);
    do {
      if (*(long *)(piVar9 + -2) == _MG_BlocksEngine2_Core_I_BE2_BlocksStack_TypeInfo_12d4e10) {
        puVar4 = (undefined8 *)(lVar6 + (long)(*piVar9 + 9) * 0x10 + 0x138);
        goto LAB_006096b8;
      }
      uVar8 = uVar8 + 1;
      piVar9 = piVar9 + 4;
    } while (uVar8 < *(ushort *)(lVar6 + 0x12a));
  }
  puVar4 = (undefined8 *)
           native_sub_3c9b34(plVar10,_MG_BlocksEngine2_Core_I_BE2_BlocksStack_TypeInfo_12d4e10,9);
LAB_006096b8:
  lVar6 = (*(code *)*puVar4)(plVar10,puVar4[1]);
  if ((lVar6 == 0) || (lVar7 = *(long *)(param_1 + 0x58), lVar7 == 0)) goto LAB_00609ef0;
  if (*(uint *)(lVar7 + 0x18) <= param_2) goto LAB_00609ef4;
  lVar12 = (long)(int)param_2;
  iVar3 = *(int *)(lVar7 + lVar12 * 4 + 0x20);
  plVar10 = *(long **)(param_1 + 0x48);
  if (*(int *)(lVar6 + 0x18) <= iVar3) {
    if (plVar10 == (long *)0x0) goto LAB_00609ef0;
    lVar6 = *plVar10;
    if ((ulong)*(ushort *)(lVar6 + 0x12a) != 0) {
      uVar8 = 0;
      piVar9 = (int *)(*(long *)(lVar6 + 0xb0) + 8);
      do {
        if (*(long *)(piVar9 + -2) == _MG_BlocksEngine2_Core_I_BE2_BlocksStack_TypeInfo_12d4e10) {
          puVar4 = (undefined8 *)(lVar6 + (long)(*piVar9 + 7) * 0x10 + 0x138);
          goto LAB_00609840;
        }
        uVar8 = uVar8 + 1;
        piVar9 = piVar9 + 4;
      } while (uVar8 < *(ushort *)(lVar6 + 0x12a));
    }
    puVar4 = (undefined8 *)
             native_sub_3c9b34(plVar10,_MG_BlocksEngine2_Core_I_BE2_BlocksStack_TypeInfo_12d4e10,7);
LAB_00609840:
    UNRECOVERED_JUMPTABLE = (code *)*puVar4;
    uVar5 = puVar4[1];
    goto LAB_00609ed8;
  }
  if (plVar10 == (long *)0x0) goto LAB_00609ef0;
  lVar6 = *plVar10;
  if ((ulong)*(ushort *)(lVar6 + 0x12a) != 0) {
    uVar8 = 0;
    piVar9 = (int *)(*(long *)(lVar6 + 0xb0) + 8);
    do {
      if (*(long *)(piVar9 + -2) == _MG_BlocksEngine2_Core_I_BE2_BlocksStack_TypeInfo_12d4e10) {
        puVar4 = (undefined8 *)(lVar6 + (long)(*piVar9 + 9) * 0x10 + 0x138);
        goto LAB_006097a0;
      }
      uVar8 = uVar8 + 1;
      piVar9 = piVar9 + 4;
    } while (uVar8 < *(ushort *)(lVar6 + 0x12a));
  }
  puVar4 = (undefined8 *)
           native_sub_3c9b34(plVar10,_MG_BlocksEngine2_Core_I_BE2_BlocksStack_TypeInfo_12d4e10,9);
LAB_006097a0:
  lVar6 = (*(code *)*puVar4)(plVar10,puVar4[1]);
  lVar7 = *(long *)(param_1 + 0x58);
  if (lVar7 == 0) goto LAB_00609ef0;
  if (*(uint *)(lVar7 + 0x18) <= param_2) goto LAB_00609ef4;
  if (lVar6 == 0) goto LAB_00609ef0;
  uVar2 = *(uint *)(lVar7 + lVar12 * 4 + 0x20);
  if (*(uint *)(lVar6 + 0x18) <= uVar2) goto LAB_00609ef4;
  plVar10 = *(long **)(param_1 + 0x48);
  if (plVar10 == (long *)0x0) goto LAB_00609ef0;
  lVar7 = *plVar10;
  plVar11 = *(long **)(lVar6 + (long)(int)uVar2 * 8 + 0x20);
  if ((ulong)*(ushort *)(lVar7 + 0x12a) != 0) {
    uVar8 = 0;
    piVar9 = (int *)(*(long *)(lVar7 + 0xb0) + 8);
    do {
      if (*(long *)(piVar9 + -2) == _MG_BlocksEngine2_Core_I_BE2_BlocksStack_TypeInfo_12d4e10) {
        puVar4 = (undefined8 *)(lVar7 + (long)(*piVar9 + 0xf) * 0x10 + 0x138);
        goto LAB_00609860;
      }
      uVar8 = uVar8 + 1;
      piVar9 = piVar9 + 4;
    } while (uVar8 < *(ushort *)(lVar7 + 0x12a));
  }
  puVar4 = (undefined8 *)
           native_sub_3c9b34(plVar10,_MG_BlocksEngine2_Core_I_BE2_BlocksStack_TypeInfo_12d4e10,0xf);
LAB_00609860:
  uVar8 = (*(code *)*puVar4)(plVar10,puVar4[1]);
  if ((uVar8 & 1) == 0) {
    if (plVar11 == (long *)0x0) goto LAB_00609ef0;
    lVar6 = *plVar11;
    if ((ulong)*(ushort *)(lVar6 + 0x12a) != 0) {
      uVar8 = 0;
      piVar9 = (int *)(*(long *)(lVar6 + 0xb0) + 8);
      do {
        if (*(long *)(piVar9 + -2) ==
            _MG_BlocksEngine2_Block_Instruction_I_BE2_Instruction_TypeInfo_12d4e28) {
          puVar4 = (undefined8 *)(lVar6 + (long)*piVar9 * 0x10 + 0x138);
          goto LAB_006099ac;
        }
        uVar8 = uVar8 + 1;
        piVar9 = piVar9 + 4;
      } while (uVar8 < *(ushort *)(lVar6 + 0x12a));
    }
    puVar4 = (undefined8 *)
             native_sub_3c9b34(plVar11,
                               _MG_BlocksEngine2_Block_Instruction_I_BE2_Instruction_TypeInfo_12d4e28
                               ,0);
LAB_006099ac:
    plVar10 = (long *)(*(code *)*puVar4)(plVar11,puVar4[1]);
    if (plVar10 == (long *)0x0) goto LAB_00609ef0;
    lVar6 = *plVar10;
    if ((ulong)*(ushort *)(lVar6 + 0x12a) != 0) {
      uVar8 = 0;
      piVar9 = (int *)(*(long *)(lVar6 + 0xb0) + 8);
      do {
        if (*(long *)(piVar9 + -2) ==
            _MG_BlocksEngine2_Block_Instruction_I_BE2_InstructionBase_TypeInfo_12d4e30) {
          puVar4 = (undefined8 *)(lVar6 + (long)(*piVar9 + 3) * 0x10 + 0x138);
          goto LAB_00609a20;
        }
        uVar8 = uVar8 + 1;
        piVar9 = piVar9 + 4;
      } while (uVar8 < *(ushort *)(lVar6 + 0x12a));
    }
    puVar4 = (undefined8 *)
             native_sub_3c9b34(plVar10,
                               _MG_BlocksEngine2_Block_Instruction_I_BE2_InstructionBase_TypeInfo_12d4e30
                               ,3);
LAB_00609a20:
    plVar10 = (long *)(*(code *)*puVar4)(plVar10,puVar4[1]);
    if (plVar10 == (long *)0x0) goto LAB_00609ef0;
    lVar6 = *plVar10;
    if ((ulong)*(ushort *)(lVar6 + 0x12a) != 0) {
      uVar8 = 0;
      piVar9 = (int *)(*(long *)(lVar6 + 0xb0) + 8);
      do {
        if (*(long *)(piVar9 + -2) == _MG_BlocksEngine2_Block_I_BE2_Block_TypeInfo_12d4dd8) {
          puVar4 = (undefined8 *)(lVar6 + (long)(*piVar9 + 1) * 0x10 + 0x138);
          goto LAB_00609a94;
        }
        uVar8 = uVar8 + 1;
        piVar9 = piVar9 + 4;
      } while (uVar8 < *(ushort *)(lVar6 + 0x12a));
    }
    puVar4 = (undefined8 *)
             native_sub_3c9b34(plVar10,_MG_BlocksEngine2_Block_I_BE2_Block_TypeInfo_12d4dd8,1);
LAB_00609a94:
    iVar3 = (*(code *)*puVar4)(plVar10,puVar4[1]);
    if (iVar3 == 4) {
      plVar10 = *(long **)(param_1 + 0x48);
      if (plVar10 == (long *)0x0) goto LAB_00609ef0;
      lVar6 = *plVar10;
      if ((ulong)*(ushort *)(lVar6 + 0x12a) != 0) {
        uVar8 = 0;
        piVar9 = (int *)(*(long *)(lVar6 + 0xb0) + 8);
        do {
          if (*(long *)(piVar9 + -2) == _MG_BlocksEngine2_Core_I_BE2_BlocksStack_TypeInfo_12d4e10) {
            puVar4 = (undefined8 *)(lVar6 + (long)(*piVar9 + 0x14) * 0x10 + 0x138);
            goto LAB_00609bd0;
          }
          uVar8 = uVar8 + 1;
          piVar9 = piVar9 + 4;
        } while (uVar8 < *(ushort *)(lVar6 + 0x12a));
      }
      puVar4 = (undefined8 *)
               native_sub_3c9b34(plVar10,_MG_BlocksEngine2_Core_I_BE2_BlocksStack_TypeInfo_12d4e10,
                                 0x14);
LAB_00609bd0:
      lVar6 = (*(code *)*puVar4)(plVar10,puVar4[1]);
      if (lVar6 == 0) goto LAB_00609ef0;
      native_UnityEngine_Events_UnityEvent__Invoke_773864(lVar6,0);
    }
    lVar6 = *plVar11;
    if ((ulong)*(ushort *)(lVar6 + 0x12a) != 0) {
      uVar8 = 0;
      piVar9 = (int *)(*(long *)(lVar6 + 0xb0) + 8);
      do {
        if (*(long *)(piVar9 + -2) ==
            _MG_BlocksEngine2_Block_Instruction_I_BE2_Instruction_TypeInfo_12d4e28) {
          puVar4 = (undefined8 *)(lVar6 + (long)(*piVar9 + 1) * 0x10 + 0x138);
          goto LAB_00609c40;
        }
        uVar8 = uVar8 + 1;
        piVar9 = piVar9 + 4;
      } while (uVar8 < *(ushort *)(lVar6 + 0x12a));
    }
    puVar4 = (undefined8 *)
             native_sub_3c9b34(plVar11,
                               _MG_BlocksEngine2_Block_Instruction_I_BE2_Instruction_TypeInfo_12d4e28
                               ,1);
LAB_00609c40:
    uVar8 = (*(code *)*puVar4)(plVar11,puVar4[1]);
    if ((uVar8 & 1) == 0) {
      plVar10 = *(long **)(param_1 + 0x48);
      if (plVar10 == (long *)0x0) goto LAB_00609ef0;
      lVar6 = *plVar10;
      if ((ulong)*(ushort *)(lVar6 + 0x12a) != 0) {
        uVar8 = 0;
        piVar9 = (int *)(*(long *)(lVar6 + 0xb0) + 8);
        do {
          if (*(long *)(piVar9 + -2) == _MG_BlocksEngine2_Core_I_BE2_BlocksStack_TypeInfo_12d4e10) {
            puVar4 = (undefined8 *)(lVar6 + (long)(*piVar9 + 4) * 0x10 + 0x138);
            goto LAB_00609cb0;
          }
          uVar8 = uVar8 + 1;
          piVar9 = piVar9 + 4;
        } while (uVar8 < *(ushort *)(lVar6 + 0x12a));
      }
      puVar4 = (undefined8 *)
               native_sub_3c9b34(plVar10,_MG_BlocksEngine2_Core_I_BE2_BlocksStack_TypeInfo_12d4e10,4
                                );
LAB_00609cb0:
      iVar3 = (*(code *)*puVar4)(plVar10,puVar4[1]);
      if (iVar3 < *(int *)(param_1 + 0x60)) {
        plVar10 = *(long **)(param_1 + 0x48);
        if (plVar10 == (long *)0x0) goto LAB_00609ef0;
        lVar6 = *plVar10;
        if ((ulong)*(ushort *)(lVar6 + 0x12a) != 0) {
          uVar8 = 0;
          piVar9 = (int *)(*(long *)(lVar6 + 0xb0) + 8);
          do {
            if (*(long *)(piVar9 + -2) == _MG_BlocksEngine2_Core_I_BE2_BlocksStack_TypeInfo_12d4e10)
            {
              puVar4 = (undefined8 *)(lVar6 + (long)(*piVar9 + 4) * 0x10 + 0x138);
              goto LAB_00609e24;
            }
            uVar8 = uVar8 + 1;
            piVar9 = piVar9 + 4;
          } while (uVar8 < *(ushort *)(lVar6 + 0x12a));
        }
        puVar4 = (undefined8 *)
                 native_sub_3c9b34(plVar10,_MG_BlocksEngine2_Core_I_BE2_BlocksStack_TypeInfo_12d4e10
                                   ,4);
LAB_00609e24:
        iVar3 = (*(code *)*puVar4)(plVar10,puVar4[1]);
        lVar6 = *plVar10;
        iVar3 = iVar3 + 1;
        if ((ulong)*(ushort *)(lVar6 + 0x12a) != 0) {
          uVar8 = 0;
          piVar9 = (int *)(*(long *)(lVar6 + 0xb0) + 8);
          do {
            if (*(long *)(piVar9 + -2) == _MG_BlocksEngine2_Core_I_BE2_BlocksStack_TypeInfo_12d4e10)
            goto LAB_00609e7c;
            uVar8 = uVar8 + 1;
            piVar9 = piVar9 + 4;
          } while (uVar8 < *(ushort *)(lVar6 + 0x12a));
        }
        goto LAB_00609e6c;
      }
    }
    lVar6 = *(long *)(param_1 + 0x58);
    if (lVar6 != 0) {
      if (*(uint *)(lVar6 + 0x18) <= param_2) {
LAB_00609ef4:
        uVar5 = native_sub_43283c();
                    /* WARNING: Subroutine does not return */
        native_sub_4327dc(uVar5,0);
      }
      plVar10 = *(long **)(param_1 + 0x48);
      if (plVar10 != (long *)0x0) {
        lVar7 = *plVar10;
        iVar3 = *(int *)(lVar6 + lVar12 * 4 + 0x20);
        if ((ulong)*(ushort *)(lVar7 + 0x12a) != 0) {
          uVar8 = 0;
          piVar9 = (int *)(*(long *)(lVar7 + 0xb0) + 8);
          do {
            if (*(long *)(piVar9 + -2) == _MG_BlocksEngine2_Core_I_BE2_BlocksStack_TypeInfo_12d4e10)
            {
              puVar4 = (undefined8 *)(lVar7 + (long)(*piVar9 + 7) * 0x10 + 0x138);
              goto LAB_00609d94;
            }
            uVar8 = uVar8 + 1;
            piVar9 = piVar9 + 4;
          } while (uVar8 < *(ushort *)(lVar7 + 0x12a));
        }
        puVar4 = (undefined8 *)
                 native_sub_3c9b34(plVar10,_MG_BlocksEngine2_Core_I_BE2_BlocksStack_TypeInfo_12d4e10
                                   ,7);
LAB_00609d94:
        UNRECOVERED_JUMPTABLE = (code *)*puVar4;
        uVar5 = puVar4[1];
LAB_00609ed8:
                    /* WARNING: Could not recover jumptable at 0x00609eec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
        (*UNRECOVERED_JUMPTABLE)(plVar10,iVar3,uVar5);
        return;
      }
    }
LAB_00609ef0:
                    /* WARNING: Subroutine does not return */
    native_sub_432810();
  }
  plVar10 = *(long **)(param_1 + 0x40);
  if (plVar10 == (long *)0x0) goto LAB_00609ef0;
  lVar6 = *plVar10;
  if ((ulong)*(ushort *)(lVar6 + 0x12a) != 0) {
    uVar8 = 0;
    piVar9 = (int *)(*(long *)(lVar6 + 0xb0) + 8);
    do {
      if (*(long *)(piVar9 + -2) == _MG_BlocksEngine2_Block_I_BE2_Block_TypeInfo_12d4dd8) {
        puVar4 = (undefined8 *)(lVar6 + (long)(*piVar9 + 1) * 0x10 + 0x138);
        goto LAB_0060992c;
      }
      uVar8 = uVar8 + 1;
      piVar9 = piVar9 + 4;
    } while (uVar8 < *(ushort *)(lVar6 + 0x12a));
  }
  puVar4 = (undefined8 *)
           native_sub_3c9b34(plVar10,_MG_BlocksEngine2_Block_I_BE2_Block_TypeInfo_12d4dd8,1);
LAB_0060992c:
  iVar3 = (*(code *)*puVar4)(plVar10,puVar4[1]);
  if ((iVar3 != 4) &&
     (uVar8 = native_MG_BlocksEngine2_Utils_BE2_BlockUtils__BlockIsFunction_56f1f0
                        (*(undefined8 *)(param_1 + 0x40),0), (uVar8 & 1) == 0)) {
    lVar6 = *(long *)(param_1 + 0x58);
    if (lVar6 != 0) {
      if (*(uint *)(lVar6 + 0x18) <= param_2) goto LAB_00609ef4;
      plVar10 = *(long **)(param_1 + 0x48);
      if (plVar10 != (long *)0x0) {
        lVar7 = *plVar10;
        uVar1 = *(undefined4 *)(lVar6 + lVar12 * 4 + 0x20);
        if ((ulong)*(ushort *)(lVar7 + 0x12a) != 0) {
          uVar8 = 0;
          piVar9 = (int *)(*(long *)(lVar7 + 0xb0) + 8);
          do {
            if (*(long *)(piVar9 + -2) == _MG_BlocksEngine2_Core_I_BE2_BlocksStack_TypeInfo_12d4e10)
            {
              puVar4 = (undefined8 *)(lVar7 + (long)(*piVar9 + 7) * 0x10 + 0x138);
              goto LAB_00609db4;
            }
            uVar8 = uVar8 + 1;
            piVar9 = piVar9 + 4;
          } while (uVar8 < *(ushort *)(lVar7 + 0x12a));
        }
        puVar4 = (undefined8 *)
                 native_sub_3c9b34(plVar10,_MG_BlocksEngine2_Core_I_BE2_BlocksStack_TypeInfo_12d4e10
                                   ,7);
LAB_00609db4:
        (*(code *)*puVar4)(plVar10,uVar1,puVar4[1]);
        plVar10 = *(long **)(param_1 + 0x48);
        if (plVar10 != (long *)0x0) {
          lVar6 = *plVar10;
          if ((ulong)*(ushort *)(lVar6 + 0x12a) != 0) {
            uVar8 = 0;
            piVar9 = (int *)(*(long *)(lVar6 + 0xb0) + 8);
            do {
              if (*(long *)(piVar9 + -2) ==
                  _MG_BlocksEngine2_Core_I_BE2_BlocksStack_TypeInfo_12d4e10) {
                puVar4 = (undefined8 *)(lVar6 + (long)(*piVar9 + 3) * 0x10 + 0x138);
                goto LAB_00609ecc;
              }
              uVar8 = uVar8 + 1;
              piVar9 = piVar9 + 4;
            } while (uVar8 < *(ushort *)(lVar6 + 0x12a));
          }
          puVar4 = (undefined8 *)
                   native_sub_3c9b34(plVar10,
                                     _MG_BlocksEngine2_Core_I_BE2_BlocksStack_TypeInfo_12d4e10,3);
LAB_00609ecc:
          UNRECOVERED_JUMPTABLE = (code *)*puVar4;
          uVar5 = puVar4[1];
          iVar3 = 0;
          goto LAB_00609ed8;
        }
      }
    }
    goto LAB_00609ef0;
  }
  plVar10 = *(long **)(param_1 + 0x48);
  if (plVar10 == (long *)0x0) goto LAB_00609ef0;
  lVar6 = *plVar10;
  if ((ulong)*(ushort *)(lVar6 + 0x12a) != 0) {
    uVar8 = 0;
    piVar9 = (int *)(*(long *)(lVar6 + 0xb0) + 8);
    do {
      if (*(long *)(piVar9 + -2) == _MG_BlocksEngine2_Core_I_BE2_BlocksStack_TypeInfo_12d4e10) {
        puVar4 = (undefined8 *)(lVar6 + (long)(*piVar9 + 4) * 0x10 + 0x138);
        goto LAB_00609b74;
      }
      uVar8 = uVar8 + 1;
      piVar9 = piVar9 + 4;
    } while (uVar8 < *(ushort *)(lVar6 + 0x12a));
  }
  puVar4 = (undefined8 *)
           native_sub_3c9b34(plVar10,_MG_BlocksEngine2_Core_I_BE2_BlocksStack_TypeInfo_12d4e10,4);
LAB_00609b74:
  iVar3 = (*(code *)*puVar4)(plVar10,puVar4[1]);
  lVar6 = *plVar10;
  iVar3 = iVar3 + 1;
  if ((ulong)*(ushort *)(lVar6 + 0x12a) != 0) {
    uVar8 = 0;
    piVar9 = (int *)(*(long *)(lVar6 + 0xb0) + 8);
    do {
      if (*(long *)(piVar9 + -2) == _MG_BlocksEngine2_Core_I_BE2_BlocksStack_TypeInfo_12d4e10)
      goto LAB_00609e7c;
      uVar8 = uVar8 + 1;
      piVar9 = piVar9 + 4;
    } while (uVar8 < *(ushort *)(lVar6 + 0x12a));
  }
LAB_00609e6c:
  puVar4 = (undefined8 *)
           native_sub_3c9b34(plVar10,_MG_BlocksEngine2_Core_I_BE2_BlocksStack_TypeInfo_12d4e10,5);
LAB_00609e8c:
  (*(code *)*puVar4)(plVar10,iVar3,puVar4[1]);
  if ((bRam000000000133ee63 & 1) == 0) {
    native_sub_43273c(&MG_BlocksEngine2_Core_I_BE2_BlocksStack_TypeInfo_12d4e10);
    native_sub_43273c(&MG_BlocksEngine2_Block_Instruction_I_BE2_Instruction_TypeInfo_12d4e28);
    native_sub_43273c(&Method_UnityEngine_Events_UnityEvent_I_BE2_Instruction__Invoke___12de478);
    bRam000000000133ee63 = 1;
  }
  plVar10 = *(long **)(param_1 + 0x48);
  if (plVar10 != (long *)0x0) {
    lVar6 = *plVar10;
    if ((ulong)*(ushort *)(lVar6 + 0x12a) != 0) {
      uVar8 = 0;
      piVar9 = (int *)(*(long *)(lVar6 + 0xb0) + 8);
      do {
        if (*(long *)(piVar9 + -2) == _MG_BlocksEngine2_Core_I_BE2_BlocksStack_TypeInfo_12d4e10) {
          puVar4 = (undefined8 *)(lVar6 + (long)(*piVar9 + 0xb) * 0x10 + 0x138);
          goto LAB_00611f54;
        }
        uVar8 = uVar8 + 1;
        piVar9 = piVar9 + 4;
      } while (uVar8 < *(ushort *)(lVar6 + 0x12a));
    }
    puVar4 = (undefined8 *)
             native_sub_3c9b34(plVar10,_MG_BlocksEngine2_Core_I_BE2_BlocksStack_TypeInfo_12d4e10,0xb
                              );
LAB_00611f54:
    lVar6 = (*(code *)*puVar4)(plVar10,puVar4[1]);
    if ((lVar6 != 0) &&
       (native_UnityEngine_Events_UnityEvent_BaseEventData___Invoke_8a0108
                  (lVar6,plVar11,
                   _Method_UnityEngine_Events_UnityEvent_I_BE2_Instruction__Invoke___12de478),
       plVar11 != (long *)0x0)) {
      lVar6 = *plVar11;
      if ((ulong)*(ushort *)(lVar6 + 0x12a) != 0) {
        uVar8 = 0;
        piVar9 = (int *)(*(long *)(lVar6 + 0xb0) + 8);
        do {
          if (*(long *)(piVar9 + -2) ==
              _MG_BlocksEngine2_Block_Instruction_I_BE2_Instruction_TypeInfo_12d4e28) {
            puVar4 = (undefined8 *)(lVar6 + (long)(*piVar9 + 3) * 0x10 + 0x138);
            goto LAB_00611fdc;
          }
          uVar8 = uVar8 + 1;
          piVar9 = piVar9 + 4;
        } while (uVar8 < *(ushort *)(lVar6 + 0x12a));
      }
      puVar4 = (undefined8 *)
               native_sub_3c9b34(plVar11,
                                 _MG_BlocksEngine2_Block_Instruction_I_BE2_Instruction_TypeInfo_12d4e28
                                 ,3);
LAB_00611fdc:
                    /* WARNING: Could not recover jumptable at 0x00611ff0. Too many branches */
                    /* WARNING: Treating indirect jump as call */
      (*(code *)*puVar4)(plVar11,puVar4[1]);
      return;
    }
  }
                    /* WARNING: Subroutine does not return */
  native_sub_432810();
LAB_00609e7c:
  puVar4 = (undefined8 *)(lVar6 + (long)(*piVar9 + 5) * 0x10 + 0x138);
  goto LAB_00609e8c;
}



/* MG_BlocksEngine2.Block.Instruction.BE2_InstructionBase$$ExecuteNextInstruction @ 0x603c34
 * void MG_BlocksEngine2_Block_Instruction_BE2_InstructionBase__ExecuteNextInstruction (MG_BlocksEngine2_Block_Instruction_BE2_InstructionBase_o* __this, const MethodInfo* method); */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* MG_BlocksEngine2.Block.Instruction.BE2_InstructionBase$$ExecuteNextInstruction
   void MG_BlocksEngine2_Block_Instruction_BE2_InstructionBase__ExecuteNextInstruction
   (MG_BlocksEngine2_Block_Instruction_BE2_InstructionBase_o* __this, const MethodInfo* method); */

void native_MG_BlocksEngine2_Block_Instruction_BE2_InstructionBase__ExecuteNextInstruction_603c34
               (long param_1)

{
  int iVar1;
  undefined8 *puVar2;
  undefined8 uVar3;
  code *UNRECOVERED_JUMPTABLE;
  long lVar4;
  long lVar5;
  ulong uVar6;
  int *piVar7;
  undefined4 uVar8;
  long *plVar9;
  long *plVar10;
  
  if ((bRam000000000133ee62 & 1) == 0) {
    native_sub_43273c(&MG_BlocksEngine2_Block_I_BE2_Block_TypeInfo_12d4dd8);
    native_sub_43273c(&MG_BlocksEngine2_Core_I_BE2_BlocksStack_TypeInfo_12d4e10);
    native_sub_43273c(&MG_BlocksEngine2_Block_Instruction_I_BE2_InstructionBase_TypeInfo_12d4e30);
    native_sub_43273c(&MG_BlocksEngine2_Block_Instruction_I_BE2_Instruction_TypeInfo_12d4e28);
    bRam000000000133ee62 = 1;
  }
  plVar9 = *(long **)(param_1 + 0x48);
  if (plVar9 == (long *)0x0) goto LAB_006048fc;
  lVar4 = *plVar9;
  if ((ulong)*(ushort *)(lVar4 + 0x12a) != 0) {
    uVar6 = 0;
    piVar7 = (int *)(*(long *)(lVar4 + 0xb0) + 8);
    do {
      if (*(long *)(piVar7 + -2) == _MG_BlocksEngine2_Core_I_BE2_BlocksStack_TypeInfo_12d4e10) {
        puVar2 = (undefined8 *)(lVar4 + (long)(*piVar7 + 9) * 0x10 + 0x138);
        goto LAB_00603cfc;
      }
      uVar6 = uVar6 + 1;
      piVar7 = piVar7 + 4;
    } while (uVar6 < *(ushort *)(lVar4 + 0x12a));
  }
  puVar2 = (undefined8 *)
           native_sub_3c9b34(plVar9,_MG_BlocksEngine2_Core_I_BE2_BlocksStack_TypeInfo_12d4e10,9);
LAB_00603cfc:
  lVar4 = (*(code *)*puVar2)(plVar9,puVar2[1]);
  if (lVar4 == 0) goto LAB_006048fc;
  iVar1 = *(int *)(param_1 + 0x30);
  plVar9 = *(long **)(param_1 + 0x48);
  if (*(int *)(lVar4 + 0x18) <= iVar1) {
    if (plVar9 == (long *)0x0) goto LAB_006048fc;
    lVar4 = *plVar9;
    if ((ulong)*(ushort *)(lVar4 + 0x12a) != 0) {
      uVar6 = 0;
      piVar7 = (int *)(*(long *)(lVar4 + 0xb0) + 8);
      do {
        if (*(long *)(piVar7 + -2) == _MG_BlocksEngine2_Core_I_BE2_BlocksStack_TypeInfo_12d4e10) {
          puVar2 = (undefined8 *)(lVar4 + (long)(*piVar7 + 7) * 0x10 + 0x138);
          goto LAB_00603e50;
        }
        uVar6 = uVar6 + 1;
        piVar7 = piVar7 + 4;
      } while (uVar6 < *(ushort *)(lVar4 + 0x12a));
    }
    puVar2 = (undefined8 *)
             native_sub_3c9b34(plVar9,_MG_BlocksEngine2_Core_I_BE2_BlocksStack_TypeInfo_12d4e10,7);
LAB_00603e50:
    (*(code *)*puVar2)(plVar9,iVar1,puVar2[1]);
    plVar9 = *(long **)(param_1 + 0x48);
    if (plVar9 == (long *)0x0) goto LAB_006048fc;
    lVar4 = *plVar9;
    if ((ulong)*(ushort *)(lVar4 + 0x12a) != 0) {
      uVar6 = 0;
      piVar7 = (int *)(*(long *)(lVar4 + 0xb0) + 8);
      do {
        if (*(long *)(piVar7 + -2) == _MG_BlocksEngine2_Core_I_BE2_BlocksStack_TypeInfo_12d4e10) {
          puVar2 = (undefined8 *)(lVar4 + (long)(*piVar7 + 0xf) * 0x10 + 0x138);
          goto LAB_00603ec0;
        }
        uVar6 = uVar6 + 1;
        piVar7 = piVar7 + 4;
      } while (uVar6 < *(ushort *)(lVar4 + 0x12a));
    }
    puVar2 = (undefined8 *)
             native_sub_3c9b34(plVar9,_MG_BlocksEngine2_Core_I_BE2_BlocksStack_TypeInfo_12d4e10,0xf)
    ;
LAB_00603ec0:
    uVar6 = (*(code *)*puVar2)(plVar9,puVar2[1]);
    if ((uVar6 & 1) == 0) {
      return;
    }
    plVar9 = *(long **)(param_1 + 0x40);
    if (plVar9 == (long *)0x0) goto LAB_006048fc;
    lVar4 = *plVar9;
    if ((ulong)*(ushort *)(lVar4 + 0x12a) != 0) {
      uVar6 = 0;
      piVar7 = (int *)(*(long *)(lVar4 + 0xb0) + 8);
      do {
        if (*(long *)(piVar7 + -2) == _MG_BlocksEngine2_Block_I_BE2_Block_TypeInfo_12d4dd8) {
          puVar2 = (undefined8 *)(lVar4 + (long)(*piVar7 + 1) * 0x10 + 0x138);
          goto LAB_00604004;
        }
        uVar6 = uVar6 + 1;
        piVar7 = piVar7 + 4;
      } while (uVar6 < *(ushort *)(lVar4 + 0x12a));
    }
    puVar2 = (undefined8 *)
             native_sub_3c9b34(plVar9,_MG_BlocksEngine2_Block_I_BE2_Block_TypeInfo_12d4dd8,1);
LAB_00604004:
    iVar1 = (*(code *)*puVar2)(plVar9,puVar2[1]);
    if (iVar1 != 1) {
      plVar9 = *(long **)(param_1 + 0x40);
      if (plVar9 == (long *)0x0) goto LAB_006048fc;
      lVar4 = *plVar9;
      if ((ulong)*(ushort *)(lVar4 + 0x12a) != 0) {
        uVar6 = 0;
        piVar7 = (int *)(*(long *)(lVar4 + 0xb0) + 8);
        do {
          if (*(long *)(piVar7 + -2) == _MG_BlocksEngine2_Block_I_BE2_Block_TypeInfo_12d4dd8) {
            puVar2 = (undefined8 *)(lVar4 + (long)(*piVar7 + 1) * 0x10 + 0x138);
            goto LAB_00604244;
          }
          uVar6 = uVar6 + 1;
          piVar7 = piVar7 + 4;
        } while (uVar6 < *(ushort *)(lVar4 + 0x12a));
      }
      puVar2 = (undefined8 *)
               native_sub_3c9b34(plVar9,_MG_BlocksEngine2_Block_I_BE2_Block_TypeInfo_12d4dd8,1);
LAB_00604244:
      iVar1 = (*(code *)*puVar2)(plVar9,puVar2[1]);
      if (iVar1 != 2) {
        return;
      }
    }
    plVar9 = *(long **)(param_1 + 0x48);
    if (plVar9 == (long *)0x0) goto LAB_006048fc;
    lVar4 = *plVar9;
    if ((ulong)*(ushort *)(lVar4 + 0x12a) != 0) {
      uVar6 = 0;
      piVar7 = (int *)(*(long *)(lVar4 + 0xb0) + 8);
      do {
        if (*(long *)(piVar7 + -2) == _MG_BlocksEngine2_Core_I_BE2_BlocksStack_TypeInfo_12d4e10) {
          puVar2 = (undefined8 *)(lVar4 + (long)(*piVar7 + 9) * 0x10 + 0x138);
          goto LAB_006042d0;
        }
        uVar6 = uVar6 + 1;
        piVar7 = piVar7 + 4;
      } while (uVar6 < *(ushort *)(lVar4 + 0x12a));
    }
    puVar2 = (undefined8 *)
             native_sub_3c9b34(plVar9,_MG_BlocksEngine2_Core_I_BE2_BlocksStack_TypeInfo_12d4e10,9);
LAB_006042d0:
    lVar4 = (*(code *)*puVar2)(plVar9,puVar2[1]);
    if (lVar4 == 0) goto LAB_006048fc;
    if (*(int *)(lVar4 + 0x18) == 0) goto LAB_00604900;
    plVar9 = *(long **)(lVar4 + 0x20);
    goto LAB_006048c4;
  }
  if (plVar9 == (long *)0x0) goto LAB_006048fc;
  lVar4 = *plVar9;
  if ((ulong)*(ushort *)(lVar4 + 0x12a) != 0) {
    uVar6 = 0;
    piVar7 = (int *)(*(long *)(lVar4 + 0xb0) + 8);
    do {
      if (*(long *)(piVar7 + -2) == _MG_BlocksEngine2_Core_I_BE2_BlocksStack_TypeInfo_12d4e10) {
        puVar2 = (undefined8 *)(lVar4 + (long)(*piVar7 + 9) * 0x10 + 0x138);
        goto LAB_00603dc8;
      }
      uVar6 = uVar6 + 1;
      piVar7 = piVar7 + 4;
    } while (uVar6 < *(ushort *)(lVar4 + 0x12a));
  }
  puVar2 = (undefined8 *)
           native_sub_3c9b34(plVar9,_MG_BlocksEngine2_Core_I_BE2_BlocksStack_TypeInfo_12d4e10,9);
LAB_00603dc8:
  lVar4 = (*(code *)*puVar2)(plVar9,puVar2[1]);
  if (lVar4 == 0) goto LAB_006048fc;
  if (*(uint *)(lVar4 + 0x18) <= *(uint *)(param_1 + 0x30)) {
LAB_00604900:
    uVar3 = native_sub_43283c();
                    /* WARNING: Subroutine does not return */
    native_sub_4327dc(uVar3,0);
  }
  plVar10 = *(long **)(param_1 + 0x48);
  if (plVar10 == (long *)0x0) goto LAB_006048fc;
  lVar5 = *plVar10;
  plVar9 = *(long **)(lVar4 + (long)(int)*(uint *)(param_1 + 0x30) * 8 + 0x20);
  if ((ulong)*(ushort *)(lVar5 + 0x12a) != 0) {
    uVar6 = 0;
    piVar7 = (int *)(*(long *)(lVar5 + 0xb0) + 8);
    do {
      if (*(long *)(piVar7 + -2) == _MG_BlocksEngine2_Core_I_BE2_BlocksStack_TypeInfo_12d4e10) {
        puVar2 = (undefined8 *)(lVar5 + (long)(*piVar7 + 0xf) * 0x10 + 0x138);
        goto LAB_00603f38;
      }
      uVar6 = uVar6 + 1;
      piVar7 = piVar7 + 4;
    } while (uVar6 < *(ushort *)(lVar5 + 0x12a));
  }
  puVar2 = (undefined8 *)
           native_sub_3c9b34(plVar10,_MG_BlocksEngine2_Core_I_BE2_BlocksStack_TypeInfo_12d4e10,0xf);
LAB_00603f38:
  uVar6 = (*(code *)*puVar2)(plVar10,puVar2[1]);
  if ((uVar6 & 1) == 0) {
    if (plVar9 == (long *)0x0) goto LAB_006048fc;
    lVar4 = *plVar9;
    if ((ulong)*(ushort *)(lVar4 + 0x12a) != 0) {
      uVar6 = 0;
      piVar7 = (int *)(*(long *)(lVar4 + 0xb0) + 8);
      do {
        if (*(long *)(piVar7 + -2) ==
            _MG_BlocksEngine2_Block_Instruction_I_BE2_Instruction_TypeInfo_12d4e28) {
          puVar2 = (undefined8 *)(lVar4 + (long)*piVar7 * 0x10 + 0x138);
          goto LAB_006040e8;
        }
        uVar6 = uVar6 + 1;
        piVar7 = piVar7 + 4;
      } while (uVar6 < *(ushort *)(lVar4 + 0x12a));
    }
    puVar2 = (undefined8 *)
             native_sub_3c9b34(plVar9,
                               _MG_BlocksEngine2_Block_Instruction_I_BE2_Instruction_TypeInfo_12d4e28
                               ,0);
LAB_006040e8:
    plVar10 = (long *)(*(code *)*puVar2)(plVar9,puVar2[1]);
    if (plVar10 == (long *)0x0) goto LAB_006048fc;
    lVar4 = *plVar10;
    if ((ulong)*(ushort *)(lVar4 + 0x12a) != 0) {
      uVar6 = 0;
      piVar7 = (int *)(*(long *)(lVar4 + 0xb0) + 8);
      do {
        if (*(long *)(piVar7 + -2) ==
            _MG_BlocksEngine2_Block_Instruction_I_BE2_InstructionBase_TypeInfo_12d4e30) {
          puVar2 = (undefined8 *)(lVar4 + (long)(*piVar7 + 3) * 0x10 + 0x138);
          goto LAB_0060415c;
        }
        uVar6 = uVar6 + 1;
        piVar7 = piVar7 + 4;
      } while (uVar6 < *(ushort *)(lVar4 + 0x12a));
    }
    puVar2 = (undefined8 *)
             native_sub_3c9b34(plVar10,
                               _MG_BlocksEngine2_Block_Instruction_I_BE2_InstructionBase_TypeInfo_12d4e30
                               ,3);
LAB_0060415c:
    plVar10 = (long *)(*(code *)*puVar2)(plVar10,puVar2[1]);
    if (plVar10 == (long *)0x0) goto LAB_006048fc;
    lVar4 = *plVar10;
    if ((ulong)*(ushort *)(lVar4 + 0x12a) != 0) {
      uVar6 = 0;
      piVar7 = (int *)(*(long *)(lVar4 + 0xb0) + 8);
      do {
        if (*(long *)(piVar7 + -2) == _MG_BlocksEngine2_Block_I_BE2_Block_TypeInfo_12d4dd8) {
          puVar2 = (undefined8 *)(lVar4 + (long)(*piVar7 + 1) * 0x10 + 0x138);
          goto LAB_006041d0;
        }
        uVar6 = uVar6 + 1;
        piVar7 = piVar7 + 4;
      } while (uVar6 < *(ushort *)(lVar4 + 0x12a));
    }
    puVar2 = (undefined8 *)
             native_sub_3c9b34(plVar10,_MG_BlocksEngine2_Block_I_BE2_Block_TypeInfo_12d4dd8,1);
LAB_006041d0:
    iVar1 = (*(code *)*puVar2)(plVar10,puVar2[1]);
    if (iVar1 == 4) {
      plVar10 = *(long **)(param_1 + 0x48);
      if (plVar10 == (long *)0x0) goto LAB_006048fc;
      lVar4 = *plVar10;
      if ((ulong)*(ushort *)(lVar4 + 0x12a) != 0) {
        uVar6 = 0;
        piVar7 = (int *)(*(long *)(lVar4 + 0xb0) + 8);
        do {
          if (*(long *)(piVar7 + -2) == _MG_BlocksEngine2_Core_I_BE2_BlocksStack_TypeInfo_12d4e10) {
            puVar2 = (undefined8 *)(lVar4 + (long)(*piVar7 + 0x14) * 0x10 + 0x138);
            goto LAB_006043f0;
          }
          uVar6 = uVar6 + 1;
          piVar7 = piVar7 + 4;
        } while (uVar6 < *(ushort *)(lVar4 + 0x12a));
      }
      puVar2 = (undefined8 *)
               native_sub_3c9b34(plVar10,_MG_BlocksEngine2_Core_I_BE2_BlocksStack_TypeInfo_12d4e10,
                                 0x14);
LAB_006043f0:
      lVar4 = (*(code *)*puVar2)(plVar10,puVar2[1]);
      if (lVar4 == 0) goto LAB_006048fc;
      native_UnityEngine_Events_UnityEvent__Invoke_773864(lVar4,0);
    }
    plVar10 = *(long **)(param_1 + 0x48);
    if (plVar10 == (long *)0x0) goto LAB_006048fc;
    lVar4 = *plVar10;
    if ((ulong)*(ushort *)(lVar4 + 0x12a) != 0) {
      uVar6 = 0;
      piVar7 = (int *)(*(long *)(lVar4 + 0xb0) + 8);
      do {
        if (*(long *)(piVar7 + -2) == _MG_BlocksEngine2_Core_I_BE2_BlocksStack_TypeInfo_12d4e10) {
          puVar2 = (undefined8 *)(lVar4 + (long)(*piVar7 + 2) * 0x10 + 0x138);
          goto LAB_00604468;
        }
        uVar6 = uVar6 + 1;
        piVar7 = piVar7 + 4;
      } while (uVar6 < *(ushort *)(lVar4 + 0x12a));
    }
    puVar2 = (undefined8 *)
             native_sub_3c9b34(plVar10,_MG_BlocksEngine2_Core_I_BE2_BlocksStack_TypeInfo_12d4e10,2);
LAB_00604468:
    uVar6 = (*(code *)*puVar2)(plVar10,puVar2[1]);
    if ((uVar6 & 1) != 0) {
      lVar4 = *plVar9;
      if ((ulong)*(ushort *)(lVar4 + 0x12a) != 0) {
        uVar6 = 0;
        piVar7 = (int *)(*(long *)(lVar4 + 0xb0) + 8);
        do {
          if (*(long *)(piVar7 + -2) ==
              _MG_BlocksEngine2_Block_Instruction_I_BE2_Instruction_TypeInfo_12d4e28) {
            puVar2 = (undefined8 *)(lVar4 + (long)(*piVar7 + 1) * 0x10 + 0x138);
            goto LAB_006044d0;
          }
          uVar6 = uVar6 + 1;
          piVar7 = piVar7 + 4;
        } while (uVar6 < *(ushort *)(lVar4 + 0x12a));
      }
      puVar2 = (undefined8 *)
               native_sub_3c9b34(plVar9,
                                 _MG_BlocksEngine2_Block_Instruction_I_BE2_Instruction_TypeInfo_12d4e28
                                 ,1);
LAB_006044d0:
      uVar6 = (*(code *)*puVar2)(plVar9,puVar2[1]);
      if ((uVar6 & 1) == 0) {
        plVar10 = *(long **)(param_1 + 0x48);
        if (plVar10 == (long *)0x0) goto LAB_006048fc;
        lVar4 = *plVar10;
        if ((ulong)*(ushort *)(lVar4 + 0x12a) != 0) {
          uVar6 = 0;
          piVar7 = (int *)(*(long *)(lVar4 + 0xb0) + 8);
          do {
            if (*(long *)(piVar7 + -2) == _MG_BlocksEngine2_Core_I_BE2_BlocksStack_TypeInfo_12d4e10)
            {
              puVar2 = (undefined8 *)(lVar4 + (long)(*piVar7 + 4) * 0x10 + 0x138);
              goto LAB_00604594;
            }
            uVar6 = uVar6 + 1;
            piVar7 = piVar7 + 4;
          } while (uVar6 < *(ushort *)(lVar4 + 0x12a));
        }
        puVar2 = (undefined8 *)
                 native_sub_3c9b34(plVar10,_MG_BlocksEngine2_Core_I_BE2_BlocksStack_TypeInfo_12d4e10
                                   ,4);
LAB_00604594:
        iVar1 = (*(code *)*puVar2)(plVar10,puVar2[1]);
        if (iVar1 < *(int *)(param_1 + 0x60)) {
          plVar10 = *(long **)(param_1 + 0x48);
          if (plVar10 == (long *)0x0) goto LAB_006048fc;
          lVar4 = *plVar10;
          if ((ulong)*(ushort *)(lVar4 + 0x12a) != 0) {
            uVar6 = 0;
            piVar7 = (int *)(*(long *)(lVar4 + 0xb0) + 8);
            do {
              if (*(long *)(piVar7 + -2) ==
                  _MG_BlocksEngine2_Core_I_BE2_BlocksStack_TypeInfo_12d4e10) {
                puVar2 = (undefined8 *)(lVar4 + (long)(*piVar7 + 4) * 0x10 + 0x138);
                goto LAB_00604850;
              }
              uVar6 = uVar6 + 1;
              piVar7 = piVar7 + 4;
            } while (uVar6 < *(ushort *)(lVar4 + 0x12a));
          }
          puVar2 = (undefined8 *)
                   native_sub_3c9b34(plVar10,
                                     _MG_BlocksEngine2_Core_I_BE2_BlocksStack_TypeInfo_12d4e10,4);
LAB_00604850:
          iVar1 = (*(code *)*puVar2)(plVar10,puVar2[1]);
          lVar4 = *plVar10;
          iVar1 = iVar1 + 1;
          if ((ulong)*(ushort *)(lVar4 + 0x12a) != 0) {
            uVar6 = 0;
            piVar7 = (int *)(*(long *)(lVar4 + 0xb0) + 8);
            do {
              if (*(long *)(piVar7 + -2) ==
                  _MG_BlocksEngine2_Core_I_BE2_BlocksStack_TypeInfo_12d4e10) goto LAB_0060489c;
              uVar6 = uVar6 + 1;
              piVar7 = piVar7 + 4;
            } while (uVar6 < *(ushort *)(lVar4 + 0x12a));
          }
          goto LAB_006043d0;
        }
      }
    }
    lVar4 = *plVar9;
    plVar10 = *(long **)(param_1 + 0x48);
    if ((ulong)*(ushort *)(lVar4 + 0x12a) != 0) {
      uVar6 = 0;
      piVar7 = (int *)(*(long *)(lVar4 + 0xb0) + 8);
      do {
        if (*(long *)(piVar7 + -2) ==
            _MG_BlocksEngine2_Block_Instruction_I_BE2_Instruction_TypeInfo_12d4e28) {
          puVar2 = (undefined8 *)(lVar4 + (long)*piVar7 * 0x10 + 0x138);
          goto LAB_00604654;
        }
        uVar6 = uVar6 + 1;
        piVar7 = piVar7 + 4;
      } while (uVar6 < *(ushort *)(lVar4 + 0x12a));
    }
    puVar2 = (undefined8 *)
             native_sub_3c9b34(plVar9,
                               _MG_BlocksEngine2_Block_Instruction_I_BE2_Instruction_TypeInfo_12d4e28
                               ,0);
LAB_00604654:
    plVar9 = (long *)(*(code *)*puVar2)(plVar9,puVar2[1]);
    if (plVar9 != (long *)0x0) {
      lVar4 = *plVar9;
      if ((ulong)*(ushort *)(lVar4 + 0x12a) != 0) {
        uVar6 = 0;
        piVar7 = (int *)(*(long *)(lVar4 + 0xb0) + 8);
        do {
          if (*(long *)(piVar7 + -2) ==
              _MG_BlocksEngine2_Block_Instruction_I_BE2_InstructionBase_TypeInfo_12d4e30) {
            puVar2 = (undefined8 *)(lVar4 + (long)(*piVar7 + 3) * 0x10 + 0x138);
            goto LAB_006046c0;
          }
          uVar6 = uVar6 + 1;
          piVar7 = piVar7 + 4;
        } while (uVar6 < *(ushort *)(lVar4 + 0x12a));
      }
      puVar2 = (undefined8 *)
               native_sub_3c9b34(plVar9,
                                 _MG_BlocksEngine2_Block_Instruction_I_BE2_InstructionBase_TypeInfo_12d4e30
                                 ,3);
LAB_006046c0:
      plVar9 = (long *)(*(code *)*puVar2)(plVar9,puVar2[1]);
      if (plVar9 != (long *)0x0) {
        lVar4 = *plVar9;
        if ((ulong)*(ushort *)(lVar4 + 0x12a) != 0) {
          uVar6 = 0;
          piVar7 = (int *)(*(long *)(lVar4 + 0xb0) + 8);
          do {
            if (*(long *)(piVar7 + -2) == _MG_BlocksEngine2_Block_I_BE2_Block_TypeInfo_12d4dd8) {
              puVar2 = (undefined8 *)(lVar4 + (long)(*piVar7 + 1) * 0x10 + 0x138);
              goto LAB_0060472c;
            }
            uVar6 = uVar6 + 1;
            piVar7 = piVar7 + 4;
          } while (uVar6 < *(ushort *)(lVar4 + 0x12a));
        }
        puVar2 = (undefined8 *)
                 native_sub_3c9b34(plVar9,_MG_BlocksEngine2_Block_I_BE2_Block_TypeInfo_12d4dd8,1);
LAB_0060472c:
        iVar1 = (*(code *)*puVar2)(plVar9,puVar2[1]);
        if (iVar1 == 4) {
          uVar8 = 0;
        }
        else {
          uVar8 = *(undefined4 *)(param_1 + 0x30);
        }
        if (plVar10 != (long *)0x0) {
          lVar4 = *plVar10;
          if ((ulong)*(ushort *)(lVar4 + 0x12a) != 0) {
            uVar6 = 0;
            piVar7 = (int *)(*(long *)(lVar4 + 0xb0) + 8);
            do {
              if (*(long *)(piVar7 + -2) ==
                  _MG_BlocksEngine2_Core_I_BE2_BlocksStack_TypeInfo_12d4e10) {
                puVar2 = (undefined8 *)(lVar4 + (long)(*piVar7 + 7) * 0x10 + 0x138);
                goto LAB_006047ac;
              }
              uVar6 = uVar6 + 1;
              piVar7 = piVar7 + 4;
            } while (uVar6 < *(ushort *)(lVar4 + 0x12a));
          }
          puVar2 = (undefined8 *)
                   native_sub_3c9b34(plVar10,
                                     _MG_BlocksEngine2_Core_I_BE2_BlocksStack_TypeInfo_12d4e10,7);
LAB_006047ac:
          UNRECOVERED_JUMPTABLE = (code *)*puVar2;
          uVar3 = puVar2[1];
LAB_006047b8:
                    /* WARNING: Could not recover jumptable at 0x006047cc. Too many branches */
                    /* WARNING: Treating indirect jump as call */
          (*UNRECOVERED_JUMPTABLE)(plVar10,uVar8,uVar3);
          return;
        }
      }
    }
LAB_006048fc:
                    /* WARNING: Subroutine does not return */
    native_sub_432810();
  }
  plVar10 = *(long **)(param_1 + 0x40);
  if (plVar10 == (long *)0x0) goto LAB_006048fc;
  lVar4 = *plVar10;
  if ((ulong)*(ushort *)(lVar4 + 0x12a) != 0) {
    uVar6 = 0;
    piVar7 = (int *)(*(long *)(lVar4 + 0xb0) + 8);
    do {
      if (*(long *)(piVar7 + -2) == _MG_BlocksEngine2_Block_I_BE2_Block_TypeInfo_12d4dd8) {
        puVar2 = (undefined8 *)(lVar4 + (long)(*piVar7 + 1) * 0x10 + 0x138);
        goto LAB_00604078;
      }
      uVar6 = uVar6 + 1;
      piVar7 = piVar7 + 4;
    } while (uVar6 < *(ushort *)(lVar4 + 0x12a));
  }
  puVar2 = (undefined8 *)
           native_sub_3c9b34(plVar10,_MG_BlocksEngine2_Block_I_BE2_Block_TypeInfo_12d4dd8,1);
LAB_00604078:
  iVar1 = (*(code *)*puVar2)(plVar10,puVar2[1]);
  if (iVar1 != 1) {
    plVar10 = *(long **)(param_1 + 0x40);
    if (plVar10 == (long *)0x0) goto LAB_006048fc;
    lVar4 = *plVar10;
    if ((ulong)*(ushort *)(lVar4 + 0x12a) != 0) {
      uVar6 = 0;
      piVar7 = (int *)(*(long *)(lVar4 + 0xb0) + 8);
      do {
        if (*(long *)(piVar7 + -2) == _MG_BlocksEngine2_Block_I_BE2_Block_TypeInfo_12d4dd8) {
          puVar2 = (undefined8 *)(lVar4 + (long)(*piVar7 + 1) * 0x10 + 0x138);
          goto LAB_00604304;
        }
        uVar6 = uVar6 + 1;
        piVar7 = piVar7 + 4;
      } while (uVar6 < *(ushort *)(lVar4 + 0x12a));
    }
    puVar2 = (undefined8 *)
             native_sub_3c9b34(plVar10,_MG_BlocksEngine2_Block_I_BE2_Block_TypeInfo_12d4dd8,1);
LAB_00604304:
    iVar1 = (*(code *)*puVar2)(plVar10,puVar2[1]);
    if ((iVar1 != 2) &&
       (uVar6 = native_MG_BlocksEngine2_Utils_BE2_BlockUtils__BlockIsFunction_56f1f0
                          (*(undefined8 *)(param_1 + 0x40),0), (uVar6 & 1) == 0)) {
      plVar9 = *(long **)(param_1 + 0x48);
      if (plVar9 == (long *)0x0) goto LAB_006048fc;
      lVar4 = *plVar9;
      uVar8 = *(undefined4 *)(param_1 + 0x30);
      if ((ulong)*(ushort *)(lVar4 + 0x12a) != 0) {
        uVar6 = 0;
        piVar7 = (int *)(*(long *)(lVar4 + 0xb0) + 8);
        do {
          if (*(long *)(piVar7 + -2) == _MG_BlocksEngine2_Core_I_BE2_BlocksStack_TypeInfo_12d4e10) {
            puVar2 = (undefined8 *)(lVar4 + (long)(*piVar7 + 7) * 0x10 + 0x138);
            goto LAB_006047e0;
          }
          uVar6 = uVar6 + 1;
          piVar7 = piVar7 + 4;
        } while (uVar6 < *(ushort *)(lVar4 + 0x12a));
      }
      puVar2 = (undefined8 *)
               native_sub_3c9b34(plVar9,_MG_BlocksEngine2_Core_I_BE2_BlocksStack_TypeInfo_12d4e10,7)
      ;
LAB_006047e0:
      (*(code *)*puVar2)(plVar9,uVar8,puVar2[1]);
      plVar10 = *(long **)(param_1 + 0x48);
      if (plVar10 == (long *)0x0) goto LAB_006048fc;
      lVar4 = *plVar10;
      if ((ulong)*(ushort *)(lVar4 + 0x12a) != 0) {
        uVar6 = 0;
        piVar7 = (int *)(*(long *)(lVar4 + 0xb0) + 8);
        do {
          if (*(long *)(piVar7 + -2) == _MG_BlocksEngine2_Core_I_BE2_BlocksStack_TypeInfo_12d4e10) {
            puVar2 = (undefined8 *)(lVar4 + (long)(*piVar7 + 3) * 0x10 + 0x138);
            goto LAB_006048ec;
          }
          uVar6 = uVar6 + 1;
          piVar7 = piVar7 + 4;
        } while (uVar6 < *(ushort *)(lVar4 + 0x12a));
      }
      puVar2 = (undefined8 *)
               native_sub_3c9b34(plVar10,_MG_BlocksEngine2_Core_I_BE2_BlocksStack_TypeInfo_12d4e10,3
                                );
LAB_006048ec:
      UNRECOVERED_JUMPTABLE = (code *)*puVar2;
      uVar3 = puVar2[1];
      uVar8 = 0;
      goto LAB_006047b8;
    }
  }
  plVar10 = *(long **)(param_1 + 0x48);
  if (plVar10 == (long *)0x0) goto LAB_006048fc;
  lVar4 = *plVar10;
  if ((ulong)*(ushort *)(lVar4 + 0x12a) != 0) {
    uVar6 = 0;
    piVar7 = (int *)(*(long *)(lVar4 + 0xb0) + 8);
    do {
      if (*(long *)(piVar7 + -2) == _MG_BlocksEngine2_Core_I_BE2_BlocksStack_TypeInfo_12d4e10) {
        puVar2 = (undefined8 *)(lVar4 + (long)(*piVar7 + 4) * 0x10 + 0x138);
        goto LAB_00604388;
      }
      uVar6 = uVar6 + 1;
      piVar7 = piVar7 + 4;
    } while (uVar6 < *(ushort *)(lVar4 + 0x12a));
  }
  puVar2 = (undefined8 *)
           native_sub_3c9b34(plVar10,_MG_BlocksEngine2_Core_I_BE2_BlocksStack_TypeInfo_12d4e10,4);
LAB_00604388:
  iVar1 = (*(code *)*puVar2)(plVar10,puVar2[1]);
  lVar4 = *plVar10;
  iVar1 = iVar1 + 1;
  if ((ulong)*(ushort *)(lVar4 + 0x12a) != 0) {
    uVar6 = 0;
    piVar7 = (int *)(*(long *)(lVar4 + 0xb0) + 8);
    do {
      if (*(long *)(piVar7 + -2) == _MG_BlocksEngine2_Core_I_BE2_BlocksStack_TypeInfo_12d4e10)
      goto LAB_0060489c;
      uVar6 = uVar6 + 1;
      piVar7 = piVar7 + 4;
    } while (uVar6 < *(ushort *)(lVar4 + 0x12a));
  }
LAB_006043d0:
  puVar2 = (undefined8 *)
           native_sub_3c9b34(plVar10,_MG_BlocksEngine2_Core_I_BE2_BlocksStack_TypeInfo_12d4e10,5);
LAB_006048ac:
  (*(code *)*puVar2)(plVar10,iVar1,puVar2[1]);
LAB_006048c4:
  if ((bRam000000000133ee63 & 1) == 0) {
    native_sub_43273c(&MG_BlocksEngine2_Core_I_BE2_BlocksStack_TypeInfo_12d4e10);
    native_sub_43273c(&MG_BlocksEngine2_Block_Instruction_I_BE2_Instruction_TypeInfo_12d4e28);
    native_sub_43273c(&Method_UnityEngine_Events_UnityEvent_I_BE2_Instruction__Invoke___12de478);
    bRam000000000133ee63 = 1;
  }
  plVar10 = *(long **)(param_1 + 0x48);
  if (plVar10 != (long *)0x0) {
    lVar4 = *plVar10;
    if ((ulong)*(ushort *)(lVar4 + 0x12a) != 0) {
      uVar6 = 0;
      piVar7 = (int *)(*(long *)(lVar4 + 0xb0) + 8);
      do {
        if (*(long *)(piVar7 + -2) == _MG_BlocksEngine2_Core_I_BE2_BlocksStack_TypeInfo_12d4e10) {
          puVar2 = (undefined8 *)(lVar4 + (long)(*piVar7 + 0xb) * 0x10 + 0x138);
          goto LAB_00611f54;
        }
        uVar6 = uVar6 + 1;
        piVar7 = piVar7 + 4;
      } while (uVar6 < *(ushort *)(lVar4 + 0x12a));
    }
    puVar2 = (undefined8 *)
             native_sub_3c9b34(plVar10,_MG_BlocksEngine2_Core_I_BE2_BlocksStack_TypeInfo_12d4e10,0xb
                              );
LAB_00611f54:
    lVar4 = (*(code *)*puVar2)(plVar10,puVar2[1]);
    if ((lVar4 != 0) &&
       (native_UnityEngine_Events_UnityEvent_BaseEventData___Invoke_8a0108
                  (lVar4,plVar9,
                   _Method_UnityEngine_Events_UnityEvent_I_BE2_Instruction__Invoke___12de478),
       plVar9 != (long *)0x0)) {
      lVar4 = *plVar9;
      if ((ulong)*(ushort *)(lVar4 + 0x12a) != 0) {
        uVar6 = 0;
        piVar7 = (int *)(*(long *)(lVar4 + 0xb0) + 8);
        do {
          if (*(long *)(piVar7 + -2) ==
              _MG_BlocksEngine2_Block_Instruction_I_BE2_Instruction_TypeInfo_12d4e28) {
            puVar2 = (undefined8 *)(lVar4 + (long)(*piVar7 + 3) * 0x10 + 0x138);
            goto LAB_00611fdc;
          }
          uVar6 = uVar6 + 1;
          piVar7 = piVar7 + 4;
        } while (uVar6 < *(ushort *)(lVar4 + 0x12a));
      }
      puVar2 = (undefined8 *)
               native_sub_3c9b34(plVar9,
                                 _MG_BlocksEngine2_Block_Instruction_I_BE2_Instruction_TypeInfo_12d4e28
                                 ,3);
LAB_00611fdc:
                    /* WARNING: Could not recover jumptable at 0x00611ff0. Too many branches */
                    /* WARNING: Treating indirect jump as call */
      (*(code *)*puVar2)(plVar9,puVar2[1]);
      return;
    }
  }
                    /* WARNING: Subroutine does not return */
  native_sub_432810();
LAB_0060489c:
  puVar2 = (undefined8 *)(lVar4 + (long)(*piVar7 + 5) * 0x10 + 0x138);
  goto LAB_006048ac;
}



/* MG_BlocksEngine2.Block.Instruction.BE2_InstructionBase$$ExecuteInstruction @ 0x611e9c
 * void MG_BlocksEngine2_Block_Instruction_BE2_InstructionBase__ExecuteInstruction (MG_BlocksEngine2_Block_Instruction_BE2_InstructionBase_o* __this, MG_BlocksEngine2_Block_Instruction_I_BE2_Instruction_o* instruction, const MethodInfo* method); */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* MG_BlocksEngine2.Block.Instruction.BE2_InstructionBase$$ExecuteInstruction
   void MG_BlocksEngine2_Block_Instruction_BE2_InstructionBase__ExecuteInstruction
   (MG_BlocksEngine2_Block_Instruction_BE2_InstructionBase_o* __this,
   MG_BlocksEngine2_Block_Instruction_I_BE2_Instruction_o* instruction, const MethodInfo* method);
    */

void native_MG_BlocksEngine2_Block_Instruction_BE2_InstructionBase__ExecuteInstruction_611e9c
               (long param_1,long *param_2)

{
  undefined8 *puVar1;
  long lVar2;
  ulong uVar3;
  int *piVar4;
  long *plVar5;
  
  if ((bRam000000000133ee63 & 1) == 0) {
    native_sub_43273c(&MG_BlocksEngine2_Core_I_BE2_BlocksStack_TypeInfo_12d4e10);
    native_sub_43273c(&MG_BlocksEngine2_Block_Instruction_I_BE2_Instruction_TypeInfo_12d4e28);
    native_sub_43273c(&Method_UnityEngine_Events_UnityEvent_I_BE2_Instruction__Invoke___12de478);
    bRam000000000133ee63 = 1;
  }
  plVar5 = *(long **)(param_1 + 0x48);
  if (plVar5 != (long *)0x0) {
    lVar2 = *plVar5;
    if ((ulong)*(ushort *)(lVar2 + 0x12a) != 0) {
      uVar3 = 0;
      piVar4 = (int *)(*(long *)(lVar2 + 0xb0) + 8);
      do {
        if (*(long *)(piVar4 + -2) == _MG_BlocksEngine2_Core_I_BE2_BlocksStack_TypeInfo_12d4e10) {
          puVar1 = (undefined8 *)(lVar2 + (long)(*piVar4 + 0xb) * 0x10 + 0x138);
          goto LAB_00611f54;
        }
        uVar3 = uVar3 + 1;
        piVar4 = piVar4 + 4;
      } while (uVar3 < *(ushort *)(lVar2 + 0x12a));
    }
    puVar1 = (undefined8 *)
             native_sub_3c9b34(plVar5,_MG_BlocksEngine2_Core_I_BE2_BlocksStack_TypeInfo_12d4e10,0xb)
    ;
LAB_00611f54:
    lVar2 = (*(code *)*puVar1)(plVar5,puVar1[1]);
    if ((lVar2 != 0) &&
       (native_UnityEngine_Events_UnityEvent_BaseEventData___Invoke_8a0108
                  (lVar2,param_2,
                   _Method_UnityEngine_Events_UnityEvent_I_BE2_Instruction__Invoke___12de478),
       param_2 != (long *)0x0)) {
      lVar2 = *param_2;
      if ((ulong)*(ushort *)(lVar2 + 0x12a) != 0) {
        uVar3 = 0;
        piVar4 = (int *)(*(long *)(lVar2 + 0xb0) + 8);
        do {
          if (*(long *)(piVar4 + -2) ==
              _MG_BlocksEngine2_Block_Instruction_I_BE2_Instruction_TypeInfo_12d4e28) {
            puVar1 = (undefined8 *)(lVar2 + (long)(*piVar4 + 3) * 0x10 + 0x138);
            goto LAB_00611fdc;
          }
          uVar3 = uVar3 + 1;
          piVar4 = piVar4 + 4;
        } while (uVar3 < *(ushort *)(lVar2 + 0x12a));
      }
      puVar1 = (undefined8 *)
               native_sub_3c9b34(param_2,
                                 _MG_BlocksEngine2_Block_Instruction_I_BE2_Instruction_TypeInfo_12d4e28
                                 ,3);
LAB_00611fdc:
                    /* WARNING: Could not recover jumptable at 0x00611ff0. Too many branches */
                    /* WARNING: Treating indirect jump as call */
      (*(code *)*puVar1)(param_2,puVar1[1]);
      return;
    }
  }
                    /* WARNING: Subroutine does not return */
  native_sub_432810();
}



/* MG_BlocksEngine2.Block.Instruction.BE2_InstructionBase$$get_InstructionBase @ 0x611ff8
 * MG_BlocksEngine2_Block_Instruction_I_BE2_InstructionBase_o* MG_BlocksEngine2_Block_Instruction_BE2_InstructionBase__get_InstructionBase (MG_BlocksEngine2_Block_Instruction_BE2_InstructionBase_o* __this, const MethodInfo* method); */

/* MG_BlocksEngine2.Block.Instruction.BE2_InstructionBase$$get_InstructionBase
   MG_BlocksEngine2_Block_Instruction_I_BE2_InstructionBase_o*
   MG_BlocksEngine2_Block_Instruction_BE2_InstructionBase__get_InstructionBase
   (MG_BlocksEngine2_Block_Instruction_BE2_InstructionBase_o* __this, const MethodInfo* method); */

undefined8
native_MG_BlocksEngine2_Block_Instruction_BE2_InstructionBase__get_InstructionBase_611ff8
          (long param_1)

{
  return *(undefined8 *)(param_1 + 0x68);
}



/* MG_BlocksEngine2.Block.Instruction.BE2_InstructionBase$$set_InstructionBase @ 0x612000
 * void MG_BlocksEngine2_Block_Instruction_BE2_InstructionBase__set_InstructionBase (MG_BlocksEngine2_Block_Instruction_BE2_InstructionBase_o* __this, MG_BlocksEngine2_Block_Instruction_I_BE2_InstructionBase_o* value, const MethodInfo* method); */

/* MG_BlocksEngine2.Block.Instruction.BE2_InstructionBase$$set_InstructionBase
   void MG_BlocksEngine2_Block_Instruction_BE2_InstructionBase__set_InstructionBase
   (MG_BlocksEngine2_Block_Instruction_BE2_InstructionBase_o* __this,
   MG_BlocksEngine2_Block_Instruction_I_BE2_InstructionBase_o* value, const MethodInfo* method); */

void native_MG_BlocksEngine2_Block_Instruction_BE2_InstructionBase__set_InstructionBase_612000
               (long param_1,undefined8 param_2)

{
  ulong *puVar1;
  char cVar2;
  bool bVar3;
  undefined8 *puVar4;
  
  puVar4 = (undefined8 *)(param_1 + 0x68);
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



/* MG_BlocksEngine2.Block.Instruction.BE2_InstructionBase$$get_ExecuteInUpdate @ 0x612008
 * bool MG_BlocksEngine2_Block_Instruction_BE2_InstructionBase__get_ExecuteInUpdate (MG_BlocksEngine2_Block_Instruction_BE2_InstructionBase_o* __this, const MethodInfo* method); */

/* MG_BlocksEngine2.Block.Instruction.BE2_InstructionBase$$get_ExecuteInUpdate
   bool MG_BlocksEngine2_Block_Instruction_BE2_InstructionBase__get_ExecuteInUpdate
   (MG_BlocksEngine2_Block_Instruction_BE2_InstructionBase_o* __this, const MethodInfo* method); */

undefined1
native_MG_BlocksEngine2_Block_Instruction_BE2_InstructionBase__get_ExecuteInUpdate_612008
          (long param_1)

{
  return *(undefined1 *)(param_1 + 0x70);
}



/* MG_BlocksEngine2.Block.Instruction.BE2_InstructionBase$$Operation @ 0x612010
 * System_String_o* MG_BlocksEngine2_Block_Instruction_BE2_InstructionBase__Operation (MG_BlocksEngine2_Block_Instruction_BE2_InstructionBase_o* __this, const MethodInfo* method); */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* MG_BlocksEngine2.Block.Instruction.BE2_InstructionBase$$Operation
   System_String_o* MG_BlocksEngine2_Block_Instruction_BE2_InstructionBase__Operation
   (MG_BlocksEngine2_Block_Instruction_BE2_InstructionBase_o* __this, const MethodInfo* method); */

undefined8 native_MG_BlocksEngine2_Block_Instruction_BE2_InstructionBase__Operation_612010(void)

{
  if ((bRam000000000133ee64 & 1) == 0) {
    native_sub_43273c(&StringLiteral__12eaac0);
    bRam000000000133ee64 = 1;
  }
  return _StringLiteral__12eaac0;
}



/* MG_BlocksEngine2.Block.Instruction.BE2_InstructionBase$$Function @ 0x612054
 * void MG_BlocksEngine2_Block_Instruction_BE2_InstructionBase__Function (MG_BlocksEngine2_Block_Instruction_BE2_InstructionBase_o* __this, const MethodInfo* method); */

/* MG_BlocksEngine2.Block.Instruction.BE2_InstructionBase$$Function
   void MG_BlocksEngine2_Block_Instruction_BE2_InstructionBase__Function
   (MG_BlocksEngine2_Block_Instruction_BE2_InstructionBase_o* __this, const MethodInfo* method); */

void native_MG_BlocksEngine2_Block_Instruction_BE2_InstructionBase__Function_612054(void)

{
  return;
}



/* MG_BlocksEngine2.Block.Instruction.BE2_InstructionBase$$Reset @ 0x612058
 * void MG_BlocksEngine2_Block_Instruction_BE2_InstructionBase__Reset (MG_BlocksEngine2_Block_Instruction_BE2_InstructionBase_o* __this, const MethodInfo* method); */

/* MG_BlocksEngine2.Block.Instruction.BE2_InstructionBase$$Reset
   void MG_BlocksEngine2_Block_Instruction_BE2_InstructionBase__Reset
   (MG_BlocksEngine2_Block_Instruction_BE2_InstructionBase_o* __this, const MethodInfo* method); */

void native_MG_BlocksEngine2_Block_Instruction_BE2_InstructionBase__Reset_612058(void)

{
  return;
}



/* MG_BlocksEngine2.Block.Instruction.BE2_InstructionBase$$.ctor @ 0x60491c
 * void MG_BlocksEngine2_Block_Instruction_BE2_InstructionBase___ctor (MG_BlocksEngine2_Block_Instruction_BE2_InstructionBase_o* __this, const MethodInfo* method); */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* MG_BlocksEngine2.Block.Instruction.BE2_InstructionBase$$.ctor
   void MG_BlocksEngine2_Block_Instruction_BE2_InstructionBase___ctor
   (MG_BlocksEngine2_Block_Instruction_BE2_InstructionBase_o* __this, const MethodInfo* method); */

undefined1  [16]
native_MG_BlocksEngine2_Block_Instruction_BE2_InstructionBase___ctor_60491c(ulong param_1)

{
  undefined1 auVar1 [16];
  
  *(undefined4 *)(param_1 + 0x60) = 100;
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


