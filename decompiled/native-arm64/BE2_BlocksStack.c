/* ARM64 IL2CPP native pseudocode from Ghidra.
 * Recovered implementation, not original C# source.
 * Function boundaries follow the IL2CPP method address table. */


/* MG_BlocksEngine2.Core.BE2_BlocksStack$$get_Pointer @ 0x57345c
 * int32_t MG_BlocksEngine2_Core_BE2_BlocksStack__get_Pointer (MG_BlocksEngine2_Core_BE2_BlocksStack_o* __this, const MethodInfo* method); */

/* MG_BlocksEngine2.Core.BE2_BlocksStack$$get_Pointer
   int32_t MG_BlocksEngine2_Core_BE2_BlocksStack__get_Pointer
   (MG_BlocksEngine2_Core_BE2_BlocksStack_o* __this, const MethodInfo* method); */

undefined4 native_MG_BlocksEngine2_Core_BE2_BlocksStack__get_Pointer_57345c(long param_1)

{
  return *(undefined4 *)(param_1 + 0x20);
}



/* MG_BlocksEngine2.Core.BE2_BlocksStack$$set_Pointer @ 0x573464
 * void MG_BlocksEngine2_Core_BE2_BlocksStack__set_Pointer (MG_BlocksEngine2_Core_BE2_BlocksStack_o* __this, int32_t value, const MethodInfo* method); */

/* MG_BlocksEngine2.Core.BE2_BlocksStack$$set_Pointer
   void MG_BlocksEngine2_Core_BE2_BlocksStack__set_Pointer (MG_BlocksEngine2_Core_BE2_BlocksStack_o*
   __this, int32_t value, const MethodInfo* method); */

void native_MG_BlocksEngine2_Core_BE2_BlocksStack__set_Pointer_573464
               (long param_1,undefined4 param_2)

{
  *(undefined4 *)(param_1 + 0x20) = param_2;
  return;
}



/* MG_BlocksEngine2.Core.BE2_BlocksStack$$get_InstructionsArray @ 0x57346c
 * MG_BlocksEngine2_Block_Instruction_I_BE2_Instruction_array* MG_BlocksEngine2_Core_BE2_BlocksStack__get_InstructionsArray (MG_BlocksEngine2_Core_BE2_BlocksStack_o* __this, const MethodInfo* method); */

/* MG_BlocksEngine2.Core.BE2_BlocksStack$$get_InstructionsArray
   MG_BlocksEngine2_Block_Instruction_I_BE2_Instruction_array*
   MG_BlocksEngine2_Core_BE2_BlocksStack__get_InstructionsArray
   (MG_BlocksEngine2_Core_BE2_BlocksStack_o* __this, const MethodInfo* method); */

undefined8 native_MG_BlocksEngine2_Core_BE2_BlocksStack__get_InstructionsArray_57346c(long param_1)

{
  return *(undefined8 *)(param_1 + 0x28);
}



/* MG_BlocksEngine2.Core.BE2_BlocksStack$$set_InstructionsArray @ 0x573474
 * void MG_BlocksEngine2_Core_BE2_BlocksStack__set_InstructionsArray (MG_BlocksEngine2_Core_BE2_BlocksStack_o* __this, MG_BlocksEngine2_Block_Instruction_I_BE2_Instruction_array* value, const MethodInfo* method); */

/* MG_BlocksEngine2.Core.BE2_BlocksStack$$set_InstructionsArray
   void MG_BlocksEngine2_Core_BE2_BlocksStack__set_InstructionsArray
   (MG_BlocksEngine2_Core_BE2_BlocksStack_o* __this,
   MG_BlocksEngine2_Block_Instruction_I_BE2_Instruction_array* value, const MethodInfo* method); */

void native_MG_BlocksEngine2_Core_BE2_BlocksStack__set_InstructionsArray_573474
               (long param_1,undefined8 param_2)

{
  ulong *puVar1;
  char cVar2;
  bool bVar3;
  undefined8 *puVar4;
  
  puVar4 = (undefined8 *)(param_1 + 0x28);
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



/* MG_BlocksEngine2.Core.BE2_BlocksStack$$get_TargetObject @ 0x57347c
 * MG_BlocksEngine2_Environment_I_BE2_TargetObject_o* MG_BlocksEngine2_Core_BE2_BlocksStack__get_TargetObject (MG_BlocksEngine2_Core_BE2_BlocksStack_o* __this, const MethodInfo* method); */

/* MG_BlocksEngine2.Core.BE2_BlocksStack$$get_TargetObject
   MG_BlocksEngine2_Environment_I_BE2_TargetObject_o*
   MG_BlocksEngine2_Core_BE2_BlocksStack__get_TargetObject (MG_BlocksEngine2_Core_BE2_BlocksStack_o*
   __this, const MethodInfo* method); */

undefined8 native_MG_BlocksEngine2_Core_BE2_BlocksStack__get_TargetObject_57347c(long param_1)

{
  return *(undefined8 *)(param_1 + 0x30);
}



/* MG_BlocksEngine2.Core.BE2_BlocksStack$$set_TargetObject @ 0x573484
 * void MG_BlocksEngine2_Core_BE2_BlocksStack__set_TargetObject (MG_BlocksEngine2_Core_BE2_BlocksStack_o* __this, MG_BlocksEngine2_Environment_I_BE2_TargetObject_o* value, const MethodInfo* method); */

/* MG_BlocksEngine2.Core.BE2_BlocksStack$$set_TargetObject
   void MG_BlocksEngine2_Core_BE2_BlocksStack__set_TargetObject
   (MG_BlocksEngine2_Core_BE2_BlocksStack_o* __this,
   MG_BlocksEngine2_Environment_I_BE2_TargetObject_o* value, const MethodInfo* method); */

void native_MG_BlocksEngine2_Core_BE2_BlocksStack__set_TargetObject_573484
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



/* MG_BlocksEngine2.Core.BE2_BlocksStack$$get_TriggerInstruction @ 0x57348c
 * MG_BlocksEngine2_Block_Instruction_I_BE2_Instruction_o* MG_BlocksEngine2_Core_BE2_BlocksStack__get_TriggerInstruction (MG_BlocksEngine2_Core_BE2_BlocksStack_o* __this, const MethodInfo* method); */

/* MG_BlocksEngine2.Core.BE2_BlocksStack$$get_TriggerInstruction
   MG_BlocksEngine2_Block_Instruction_I_BE2_Instruction_o*
   MG_BlocksEngine2_Core_BE2_BlocksStack__get_TriggerInstruction
   (MG_BlocksEngine2_Core_BE2_BlocksStack_o* __this, const MethodInfo* method); */

undefined8 native_MG_BlocksEngine2_Core_BE2_BlocksStack__get_TriggerInstruction_57348c(long param_1)

{
  return *(undefined8 *)(param_1 + 0x38);
}



/* MG_BlocksEngine2.Core.BE2_BlocksStack$$set_TriggerInstruction @ 0x573494
 * void MG_BlocksEngine2_Core_BE2_BlocksStack__set_TriggerInstruction (MG_BlocksEngine2_Core_BE2_BlocksStack_o* __this, MG_BlocksEngine2_Block_Instruction_I_BE2_Instruction_o* value, const MethodInfo* method); */

/* MG_BlocksEngine2.Core.BE2_BlocksStack$$set_TriggerInstruction
   void MG_BlocksEngine2_Core_BE2_BlocksStack__set_TriggerInstruction
   (MG_BlocksEngine2_Core_BE2_BlocksStack_o* __this,
   MG_BlocksEngine2_Block_Instruction_I_BE2_Instruction_o* value, const MethodInfo* method); */

void native_MG_BlocksEngine2_Core_BE2_BlocksStack__set_TriggerInstruction_573494
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



/* MG_BlocksEngine2.Core.BE2_BlocksStack$$get_IsActive @ 0x57349c
 * bool MG_BlocksEngine2_Core_BE2_BlocksStack__get_IsActive (MG_BlocksEngine2_Core_BE2_BlocksStack_o* __this, const MethodInfo* method); */

/* MG_BlocksEngine2.Core.BE2_BlocksStack$$get_IsActive
   bool MG_BlocksEngine2_Core_BE2_BlocksStack__get_IsActive
   (MG_BlocksEngine2_Core_BE2_BlocksStack_o* __this, const MethodInfo* method); */

undefined1 native_MG_BlocksEngine2_Core_BE2_BlocksStack__get_IsActive_57349c(long param_1)

{
  return *(undefined1 *)(param_1 + 0x1c);
}



/* MG_BlocksEngine2.Core.BE2_BlocksStack$$set_IsActive @ 0x5734a4
 * void MG_BlocksEngine2_Core_BE2_BlocksStack__set_IsActive (MG_BlocksEngine2_Core_BE2_BlocksStack_o* __this, bool value, const MethodInfo* method); */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* MG_BlocksEngine2.Core.BE2_BlocksStack$$set_IsActive
   void MG_BlocksEngine2_Core_BE2_BlocksStack__set_IsActive
   (MG_BlocksEngine2_Core_BE2_BlocksStack_o* __this, bool value, const MethodInfo* method); */

void native_MG_BlocksEngine2_Core_BE2_BlocksStack__set_IsActive_5734a4(long param_1,byte param_2)

{
  int iVar1;
  undefined8 *puVar2;
  undefined8 uVar3;
  long lVar4;
  long lVar5;
  ulong uVar6;
  int *piVar7;
  long *plVar8;
  uint uVar9;
  uint uVar10;
  
  if ((bRam000000000133ea8f & 1) == 0) {
    native_sub_43273c(&MG_BlocksEngine2_Block_I_BE2_Block_TypeInfo_12d4dd8);
    native_sub_43273c(&MG_BlocksEngine2_Block_Instruction_I_BE2_InstructionBase_TypeInfo_12d4e30);
    native_sub_43273c(&MG_BlocksEngine2_Block_Instruction_I_BE2_Instruction_TypeInfo_12d4e28);
    bRam000000000133ea8f = 1;
  }
  if ((*(char *)(param_1 + 0x1c) == '\0') && ((param_2 & 1) != 0)) {
    if (*(char *)(param_1 + 0x5c) == '\0') {
      lVar4 = *(long *)(param_1 + 0x28);
      if (lVar4 == 0) goto LAB_00573984;
      iVar1 = *(int *)(lVar4 + 0x18);
      if (0 < iVar1) {
        uVar9 = 0;
        do {
          if (*(uint *)(lVar4 + 0x18) <= uVar9) goto LAB_00573988;
          plVar8 = *(long **)(lVar4 + (long)(int)uVar9 * 8 + 0x20);
          if (plVar8 == (long *)0x0) break;
          lVar4 = *plVar8;
          if ((ulong)*(ushort *)(lVar4 + 0x12a) != 0) {
            uVar6 = 0;
            piVar7 = (int *)(*(long *)(lVar4 + 0xb0) + 8);
            do {
              if (*(long *)(piVar7 + -2) ==
                  _MG_BlocksEngine2_Block_Instruction_I_BE2_Instruction_TypeInfo_12d4e28) {
                puVar2 = (undefined8 *)(lVar4 + (long)*piVar7 * 0x10 + 0x138);
                goto LAB_005735a4;
              }
              uVar6 = uVar6 + 1;
              piVar7 = piVar7 + 4;
            } while (uVar6 < *(ushort *)(lVar4 + 0x12a));
          }
          puVar2 = (undefined8 *)
                   native_sub_3c9b34(plVar8,
                                     _MG_BlocksEngine2_Block_Instruction_I_BE2_Instruction_TypeInfo_12d4e28
                                     ,0);
LAB_005735a4:
          plVar8 = (long *)(*(code *)*puVar2)(plVar8,puVar2[1]);
          if (plVar8 == (long *)0x0) break;
          lVar4 = *plVar8;
          if ((ulong)*(ushort *)(lVar4 + 0x12a) != 0) {
            uVar6 = 0;
            piVar7 = (int *)(*(long *)(lVar4 + 0xb0) + 8);
            do {
              if (*(long *)(piVar7 + -2) ==
                  _MG_BlocksEngine2_Block_Instruction_I_BE2_InstructionBase_TypeInfo_12d4e30) {
                puVar2 = (undefined8 *)(lVar4 + (long)(*piVar7 + 0xc) * 0x10 + 0x138);
                goto LAB_00573610;
              }
              uVar6 = uVar6 + 1;
              piVar7 = piVar7 + 4;
            } while (uVar6 < *(ushort *)(lVar4 + 0x12a));
          }
          puVar2 = (undefined8 *)
                   native_sub_3c9b34(plVar8,
                                     _MG_BlocksEngine2_Block_Instruction_I_BE2_InstructionBase_TypeInfo_12d4e30
                                     ,0xc);
LAB_00573610:
          (*(code *)*puVar2)(plVar8,puVar2[1]);
          uVar9 = uVar9 + 1;
          if (iVar1 <= (int)uVar9) goto LAB_005737d0;
          lVar4 = *(long *)(param_1 + 0x28);
        } while (lVar4 != 0);
        goto LAB_00573984;
      }
    }
LAB_005737d0:
    lVar4 = *(long *)(param_1 + 0x28);
    *(undefined1 *)(param_1 + 0x5c) = 0;
    if (lVar4 == 0) {
LAB_00573984:
                    /* WARNING: Subroutine does not return */
      native_sub_432810();
    }
    uVar9 = *(uint *)(lVar4 + 0x18);
    if (0 < (int)uVar9) {
      uVar10 = 0;
      do {
        if (uVar9 <= uVar10) {
LAB_00573988:
          uVar3 = native_sub_43283c();
                    /* WARNING: Subroutine does not return */
          native_sub_4327dc(uVar3,0);
        }
        plVar8 = *(long **)(lVar4 + (long)(int)uVar10 * 8 + 0x20);
        if (plVar8 == (long *)0x0) goto LAB_00573984;
        lVar5 = *plVar8;
        if ((ulong)*(ushort *)(lVar5 + 0x12a) != 0) {
          uVar6 = 0;
          piVar7 = (int *)(*(long *)(lVar5 + 0xb0) + 8);
          do {
            if (*(long *)(piVar7 + -2) ==
                _MG_BlocksEngine2_Block_Instruction_I_BE2_Instruction_TypeInfo_12d4e28) {
              puVar2 = (undefined8 *)(lVar5 + (long)*piVar7 * 0x10 + 0x138);
              goto LAB_0057386c;
            }
            uVar6 = uVar6 + 1;
            piVar7 = piVar7 + 4;
          } while (uVar6 < *(ushort *)(lVar5 + 0x12a));
        }
        puVar2 = (undefined8 *)
                 native_sub_3c9b34(plVar8,
                                   _MG_BlocksEngine2_Block_Instruction_I_BE2_Instruction_TypeInfo_12d4e28
                                   ,0);
LAB_0057386c:
        plVar8 = (long *)(*(code *)*puVar2)(plVar8,puVar2[1]);
        if (plVar8 == (long *)0x0) goto LAB_00573984;
        lVar5 = *plVar8;
        if ((ulong)*(ushort *)(lVar5 + 0x12a) != 0) {
          uVar6 = 0;
          piVar7 = (int *)(*(long *)(lVar5 + 0xb0) + 8);
          do {
            if (*(long *)(piVar7 + -2) ==
                _MG_BlocksEngine2_Block_Instruction_I_BE2_InstructionBase_TypeInfo_12d4e30) {
              puVar2 = (undefined8 *)(lVar5 + (long)(*piVar7 + 3) * 0x10 + 0x138);
              goto LAB_005738d8;
            }
            uVar6 = uVar6 + 1;
            piVar7 = piVar7 + 4;
          } while (uVar6 < *(ushort *)(lVar5 + 0x12a));
        }
        puVar2 = (undefined8 *)
                 native_sub_3c9b34(plVar8,
                                   _MG_BlocksEngine2_Block_Instruction_I_BE2_InstructionBase_TypeInfo_12d4e30
                                   ,3);
LAB_005738d8:
        plVar8 = (long *)(*(code *)*puVar2)(plVar8,puVar2[1]);
        if (plVar8 == (long *)0x0) goto LAB_00573984;
        lVar5 = *plVar8;
        if ((ulong)*(ushort *)(lVar5 + 0x12a) != 0) {
          uVar6 = 0;
          piVar7 = (int *)(*(long *)(lVar5 + 0xb0) + 8);
          do {
            if (*(long *)(piVar7 + -2) == _MG_BlocksEngine2_Block_I_BE2_Block_TypeInfo_12d4dd8) {
              puVar2 = (undefined8 *)(lVar5 + (long)(*piVar7 + 9) * 0x10 + 0x138);
              goto LAB_00573944;
            }
            uVar6 = uVar6 + 1;
            piVar7 = piVar7 + 4;
          } while (uVar6 < *(ushort *)(lVar5 + 0x12a));
        }
        puVar2 = (undefined8 *)
                 native_sub_3c9b34(plVar8,_MG_BlocksEngine2_Block_I_BE2_Block_TypeInfo_12d4dd8,9);
LAB_00573944:
        (*(code *)*puVar2)(plVar8,1,puVar2[1]);
        uVar9 = *(uint *)(lVar4 + 0x18);
        uVar10 = uVar10 + 1;
      } while ((int)uVar10 < (int)uVar9);
    }
  }
  else if ((*(char *)(param_1 + 0x1c) != '\0') && ((param_2 & 1) == 0)) {
    lVar4 = *(long *)(param_1 + 0x28);
    if (lVar4 == 0) goto LAB_00573984;
    uVar9 = *(uint *)(lVar4 + 0x18);
    if (0 < (int)uVar9) {
      uVar10 = 0;
      do {
        if (uVar9 <= uVar10) goto LAB_00573988;
        plVar8 = *(long **)(lVar4 + (long)(int)uVar10 * 8 + 0x20);
        if (plVar8 == (long *)0x0) goto LAB_00573984;
        lVar5 = *plVar8;
        if ((ulong)*(ushort *)(lVar5 + 0x12a) != 0) {
          uVar6 = 0;
          piVar7 = (int *)(*(long *)(lVar5 + 0xb0) + 8);
          do {
            if (*(long *)(piVar7 + -2) ==
                _MG_BlocksEngine2_Block_Instruction_I_BE2_Instruction_TypeInfo_12d4e28) {
              puVar2 = (undefined8 *)(lVar5 + (long)*piVar7 * 0x10 + 0x138);
              goto LAB_005736d4;
            }
            uVar6 = uVar6 + 1;
            piVar7 = piVar7 + 4;
          } while (uVar6 < *(ushort *)(lVar5 + 0x12a));
        }
        puVar2 = (undefined8 *)
                 native_sub_3c9b34(plVar8,
                                   _MG_BlocksEngine2_Block_Instruction_I_BE2_Instruction_TypeInfo_12d4e28
                                   ,0);
LAB_005736d4:
        plVar8 = (long *)(*(code *)*puVar2)(plVar8,puVar2[1]);
        if (plVar8 == (long *)0x0) goto LAB_00573984;
        lVar5 = *plVar8;
        if ((ulong)*(ushort *)(lVar5 + 0x12a) != 0) {
          uVar6 = 0;
          piVar7 = (int *)(*(long *)(lVar5 + 0xb0) + 8);
          do {
            if (*(long *)(piVar7 + -2) ==
                _MG_BlocksEngine2_Block_Instruction_I_BE2_InstructionBase_TypeInfo_12d4e30) {
              puVar2 = (undefined8 *)(lVar5 + (long)(*piVar7 + 3) * 0x10 + 0x138);
              goto LAB_00573740;
            }
            uVar6 = uVar6 + 1;
            piVar7 = piVar7 + 4;
          } while (uVar6 < *(ushort *)(lVar5 + 0x12a));
        }
        puVar2 = (undefined8 *)
                 native_sub_3c9b34(plVar8,
                                   _MG_BlocksEngine2_Block_Instruction_I_BE2_InstructionBase_TypeInfo_12d4e30
                                   ,3);
LAB_00573740:
        plVar8 = (long *)(*(code *)*puVar2)(plVar8,puVar2[1]);
        if (plVar8 == (long *)0x0) goto LAB_00573984;
        lVar5 = *plVar8;
        if ((ulong)*(ushort *)(lVar5 + 0x12a) != 0) {
          uVar6 = 0;
          piVar7 = (int *)(*(long *)(lVar5 + 0xb0) + 8);
          do {
            if (*(long *)(piVar7 + -2) == _MG_BlocksEngine2_Block_I_BE2_Block_TypeInfo_12d4dd8) {
              puVar2 = (undefined8 *)(lVar5 + (long)(*piVar7 + 9) * 0x10 + 0x138);
              goto LAB_005737ac;
            }
            uVar6 = uVar6 + 1;
            piVar7 = piVar7 + 4;
          } while (uVar6 < *(ushort *)(lVar5 + 0x12a));
        }
        puVar2 = (undefined8 *)
                 native_sub_3c9b34(plVar8,_MG_BlocksEngine2_Block_I_BE2_Block_TypeInfo_12d4dd8,9);
LAB_005737ac:
        (*(code *)*puVar2)(plVar8,0,puVar2[1]);
        uVar9 = *(uint *)(lVar4 + 0x18);
        uVar10 = uVar10 + 1;
      } while ((int)uVar10 < (int)uVar9);
    }
  }
  *(byte *)(param_1 + 0x1c) = param_2 & 1;
  return;
}



/* MG_BlocksEngine2.Core.BE2_BlocksStack$$get_OnStackStart @ 0x573994
 * UnityEngine_Events_UnityEvent_o* MG_BlocksEngine2_Core_BE2_BlocksStack__get_OnStackStart (MG_BlocksEngine2_Core_BE2_BlocksStack_o* __this, const MethodInfo* method); */

/* MG_BlocksEngine2.Core.BE2_BlocksStack$$get_OnStackStart
   UnityEngine_Events_UnityEvent_o* MG_BlocksEngine2_Core_BE2_BlocksStack__get_OnStackStart
   (MG_BlocksEngine2_Core_BE2_BlocksStack_o* __this, const MethodInfo* method); */

undefined8 native_MG_BlocksEngine2_Core_BE2_BlocksStack__get_OnStackStart_573994(long param_1)

{
  return *(undefined8 *)(param_1 + 0x40);
}



/* MG_BlocksEngine2.Core.BE2_BlocksStack$$set_OnStackStart @ 0x57399c
 * void MG_BlocksEngine2_Core_BE2_BlocksStack__set_OnStackStart (MG_BlocksEngine2_Core_BE2_BlocksStack_o* __this, UnityEngine_Events_UnityEvent_o* value, const MethodInfo* method); */

/* MG_BlocksEngine2.Core.BE2_BlocksStack$$set_OnStackStart
   void MG_BlocksEngine2_Core_BE2_BlocksStack__set_OnStackStart
   (MG_BlocksEngine2_Core_BE2_BlocksStack_o* __this, UnityEngine_Events_UnityEvent_o* value, const
   MethodInfo* method); */

void native_MG_BlocksEngine2_Core_BE2_BlocksStack__set_OnStackStart_57399c
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



/* MG_BlocksEngine2.Core.BE2_BlocksStack$$get_OnStackLastBlockExecuted @ 0x5739a4
 * UnityEngine_Events_UnityEvent_o* MG_BlocksEngine2_Core_BE2_BlocksStack__get_OnStackLastBlockExecuted (MG_BlocksEngine2_Core_BE2_BlocksStack_o* __this, const MethodInfo* method); */

/* MG_BlocksEngine2.Core.BE2_BlocksStack$$get_OnStackLastBlockExecuted
   UnityEngine_Events_UnityEvent_o*
   MG_BlocksEngine2_Core_BE2_BlocksStack__get_OnStackLastBlockExecuted
   (MG_BlocksEngine2_Core_BE2_BlocksStack_o* __this, const MethodInfo* method); */

undefined8
native_MG_BlocksEngine2_Core_BE2_BlocksStack__get_OnStackLastBlockExecuted_5739a4(long param_1)

{
  return *(undefined8 *)(param_1 + 0x48);
}



/* MG_BlocksEngine2.Core.BE2_BlocksStack$$set_OnStackLastBlockExecuted @ 0x5739ac
 * void MG_BlocksEngine2_Core_BE2_BlocksStack__set_OnStackLastBlockExecuted (MG_BlocksEngine2_Core_BE2_BlocksStack_o* __this, UnityEngine_Events_UnityEvent_o* value, const MethodInfo* method); */

/* MG_BlocksEngine2.Core.BE2_BlocksStack$$set_OnStackLastBlockExecuted
   void MG_BlocksEngine2_Core_BE2_BlocksStack__set_OnStackLastBlockExecuted
   (MG_BlocksEngine2_Core_BE2_BlocksStack_o* __this, UnityEngine_Events_UnityEvent_o* value, const
   MethodInfo* method); */

void native_MG_BlocksEngine2_Core_BE2_BlocksStack__set_OnStackLastBlockExecuted_5739ac
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



/* MG_BlocksEngine2.Core.BE2_BlocksStack$$get_OnFunctionStart @ 0x5739b4
 * UnityEngine_Events_UnityEvent_I_BE2_Instruction__o* MG_BlocksEngine2_Core_BE2_BlocksStack__get_OnFunctionStart (MG_BlocksEngine2_Core_BE2_BlocksStack_o* __this, const MethodInfo* method); */

/* MG_BlocksEngine2.Core.BE2_BlocksStack$$get_OnFunctionStart
   UnityEngine_Events_UnityEvent_I_BE2_Instruction__o*
   MG_BlocksEngine2_Core_BE2_BlocksStack__get_OnFunctionStart
   (MG_BlocksEngine2_Core_BE2_BlocksStack_o* __this, const MethodInfo* method); */

undefined8 native_MG_BlocksEngine2_Core_BE2_BlocksStack__get_OnFunctionStart_5739b4(long param_1)

{
  return *(undefined8 *)(param_1 + 0x50);
}



/* MG_BlocksEngine2.Core.BE2_BlocksStack$$set_OnFunctionStart @ 0x5739bc
 * void MG_BlocksEngine2_Core_BE2_BlocksStack__set_OnFunctionStart (MG_BlocksEngine2_Core_BE2_BlocksStack_o* __this, UnityEngine_Events_UnityEvent_I_BE2_Instruction__o* value, const MethodInfo* method); */

/* MG_BlocksEngine2.Core.BE2_BlocksStack$$set_OnFunctionStart
   void MG_BlocksEngine2_Core_BE2_BlocksStack__set_OnFunctionStart
   (MG_BlocksEngine2_Core_BE2_BlocksStack_o* __this,
   UnityEngine_Events_UnityEvent_I_BE2_Instruction__o* value, const MethodInfo* method); */

void native_MG_BlocksEngine2_Core_BE2_BlocksStack__set_OnFunctionStart_5739bc
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



/* MG_BlocksEngine2.Core.BE2_BlocksStack$$Awake @ 0x5739c4
 * void MG_BlocksEngine2_Core_BE2_BlocksStack__Awake (MG_BlocksEngine2_Core_BE2_BlocksStack_o* __this, const MethodInfo* method); */

/* WARNING: Removing unreachable block (ram,0x00573508) */
/* WARNING: Removing unreachable block (ram,0x00573510) */
/* WARNING: Removing unreachable block (ram,0x00573518) */
/* WARNING: Removing unreachable block (ram,0x00573524) */
/* WARNING: Removing unreachable block (ram,0x00573538) */
/* WARNING: Removing unreachable block (ram,0x00573544) */
/* WARNING: Removing unreachable block (ram,0x00573550) */
/* WARNING: Removing unreachable block (ram,0x00573560) */
/* WARNING: Removing unreachable block (ram,0x0057356c) */
/* WARNING: Removing unreachable block (ram,0x00573598) */
/* WARNING: Removing unreachable block (ram,0x00573578) */
/* WARNING: Removing unreachable block (ram,0x00573588) */
/* WARNING: Removing unreachable block (ram,0x005735a4) */
/* WARNING: Removing unreachable block (ram,0x005735b4) */
/* WARNING: Removing unreachable block (ram,0x005735c8) */
/* WARNING: Removing unreachable block (ram,0x005735d4) */
/* WARNING: Removing unreachable block (ram,0x00573600) */
/* WARNING: Removing unreachable block (ram,0x005735e0) */
/* WARNING: Removing unreachable block (ram,0x005735f0) */
/* WARNING: Removing unreachable block (ram,0x00573610) */
/* WARNING: Removing unreachable block (ram,0x00573628) */
/* WARNING: Removing unreachable block (ram,0x00573630) */
/* WARNING: Removing unreachable block (ram,0x005737d0) */
/* WARNING: Removing unreachable block (ram,0x005737dc) */
/* WARNING: Removing unreachable block (ram,0x005737e8) */
/* WARNING: Removing unreachable block (ram,0x00573804) */
/* WARNING: Removing unreachable block (ram,0x0057380c) */
/* WARNING: Removing unreachable block (ram,0x00573818) */
/* WARNING: Removing unreachable block (ram,0x00573828) */
/* WARNING: Removing unreachable block (ram,0x00573834) */
/* WARNING: Removing unreachable block (ram,0x00573860) */
/* WARNING: Removing unreachable block (ram,0x00573840) */
/* WARNING: Removing unreachable block (ram,0x00573850) */
/* WARNING: Removing unreachable block (ram,0x0057386c) */
/* WARNING: Removing unreachable block (ram,0x0057387c) */
/* WARNING: Removing unreachable block (ram,0x00573890) */
/* WARNING: Removing unreachable block (ram,0x0057389c) */
/* WARNING: Removing unreachable block (ram,0x005738c8) */
/* WARNING: Removing unreachable block (ram,0x005738a8) */
/* WARNING: Removing unreachable block (ram,0x005738b8) */
/* WARNING: Removing unreachable block (ram,0x005738d8) */
/* WARNING: Removing unreachable block (ram,0x005738e8) */
/* WARNING: Removing unreachable block (ram,0x005738fc) */
/* WARNING: Removing unreachable block (ram,0x00573908) */
/* WARNING: Removing unreachable block (ram,0x00573934) */
/* WARNING: Removing unreachable block (ram,0x00573914) */
/* WARNING: Removing unreachable block (ram,0x00573924) */
/* WARNING: Removing unreachable block (ram,0x00573944) */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* MG_BlocksEngine2.Core.BE2_BlocksStack$$Awake
   void MG_BlocksEngine2_Core_BE2_BlocksStack__Awake (MG_BlocksEngine2_Core_BE2_BlocksStack_o*
   __this, const MethodInfo* method); */

void native_MG_BlocksEngine2_Core_BE2_BlocksStack__Awake_5739c4(long param_1)

{
  uint uVar1;
  undefined8 *puVar2;
  undefined8 uVar3;
  long lVar4;
  ulong uVar5;
  int *piVar6;
  long *plVar7;
  long lVar8;
  uint uVar9;
  
  if ((bRam000000000133ea90 & 1) == 0) {
    native_sub_43273c(&Method_UnityEngine_Component_GetComponent_I_BE2_Instruction____12e2a50);
    bRam000000000133ea90 = 1;
  }
  uVar3 = native_UnityEngine_Component__GetComponent_ActiveAnimation__49daec
                    (param_1,_Method_UnityEngine_Component_GetComponent_I_BE2_Instruction____12e2a50
                    );
  *(undefined8 *)(param_1 + 0x38) = uVar3;
  native_sub_4326e0(param_1 + 0x38);
  if ((bRam000000000133ea8f & 1) == 0) {
    native_sub_43273c(&MG_BlocksEngine2_Block_I_BE2_Block_TypeInfo_12d4dd8);
    native_sub_43273c(&MG_BlocksEngine2_Block_Instruction_I_BE2_InstructionBase_TypeInfo_12d4e30);
    native_sub_43273c(&MG_BlocksEngine2_Block_Instruction_I_BE2_Instruction_TypeInfo_12d4e28);
    bRam000000000133ea8f = 1;
  }
  if (*(char *)(param_1 + 0x1c) != '\0') {
    lVar8 = *(long *)(param_1 + 0x28);
    if (lVar8 == 0) {
LAB_00573984:
                    /* WARNING: Subroutine does not return */
      native_sub_432810();
    }
    uVar1 = *(uint *)(lVar8 + 0x18);
    if (0 < (int)uVar1) {
      uVar9 = 0;
      do {
        if (uVar1 <= uVar9) {
          uVar3 = native_sub_43283c();
                    /* WARNING: Subroutine does not return */
          native_sub_4327dc(uVar3,0);
        }
        plVar7 = *(long **)(lVar8 + (long)(int)uVar9 * 8 + 0x20);
        if (plVar7 == (long *)0x0) goto LAB_00573984;
        lVar4 = *plVar7;
        if ((ulong)*(ushort *)(lVar4 + 0x12a) != 0) {
          uVar5 = 0;
          piVar6 = (int *)(*(long *)(lVar4 + 0xb0) + 8);
          do {
            if (*(long *)(piVar6 + -2) ==
                _MG_BlocksEngine2_Block_Instruction_I_BE2_Instruction_TypeInfo_12d4e28) {
              puVar2 = (undefined8 *)(lVar4 + (long)*piVar6 * 0x10 + 0x138);
              goto LAB_005736d4;
            }
            uVar5 = uVar5 + 1;
            piVar6 = piVar6 + 4;
          } while (uVar5 < *(ushort *)(lVar4 + 0x12a));
        }
        puVar2 = (undefined8 *)
                 native_sub_3c9b34(plVar7,
                                   _MG_BlocksEngine2_Block_Instruction_I_BE2_Instruction_TypeInfo_12d4e28
                                   ,0);
LAB_005736d4:
        plVar7 = (long *)(*(code *)*puVar2)(plVar7,puVar2[1]);
        if (plVar7 == (long *)0x0) goto LAB_00573984;
        lVar4 = *plVar7;
        if ((ulong)*(ushort *)(lVar4 + 0x12a) != 0) {
          uVar5 = 0;
          piVar6 = (int *)(*(long *)(lVar4 + 0xb0) + 8);
          do {
            if (*(long *)(piVar6 + -2) ==
                _MG_BlocksEngine2_Block_Instruction_I_BE2_InstructionBase_TypeInfo_12d4e30) {
              puVar2 = (undefined8 *)(lVar4 + (long)(*piVar6 + 3) * 0x10 + 0x138);
              goto LAB_00573740;
            }
            uVar5 = uVar5 + 1;
            piVar6 = piVar6 + 4;
          } while (uVar5 < *(ushort *)(lVar4 + 0x12a));
        }
        puVar2 = (undefined8 *)
                 native_sub_3c9b34(plVar7,
                                   _MG_BlocksEngine2_Block_Instruction_I_BE2_InstructionBase_TypeInfo_12d4e30
                                   ,3);
LAB_00573740:
        plVar7 = (long *)(*(code *)*puVar2)(plVar7,puVar2[1]);
        if (plVar7 == (long *)0x0) goto LAB_00573984;
        lVar4 = *plVar7;
        if ((ulong)*(ushort *)(lVar4 + 0x12a) != 0) {
          uVar5 = 0;
          piVar6 = (int *)(*(long *)(lVar4 + 0xb0) + 8);
          do {
            if (*(long *)(piVar6 + -2) == _MG_BlocksEngine2_Block_I_BE2_Block_TypeInfo_12d4dd8) {
              puVar2 = (undefined8 *)(lVar4 + (long)(*piVar6 + 9) * 0x10 + 0x138);
              goto LAB_005737ac;
            }
            uVar5 = uVar5 + 1;
            piVar6 = piVar6 + 4;
          } while (uVar5 < *(ushort *)(lVar4 + 0x12a));
        }
        puVar2 = (undefined8 *)
                 native_sub_3c9b34(plVar7,_MG_BlocksEngine2_Block_I_BE2_Block_TypeInfo_12d4dd8,9);
LAB_005737ac:
        (*(code *)*puVar2)(plVar7,0,puVar2[1]);
        uVar1 = *(uint *)(lVar8 + 0x18);
        uVar9 = uVar9 + 1;
      } while ((int)uVar9 < (int)uVar1);
    }
  }
  *(undefined1 *)(param_1 + 0x1c) = 0;
  return;
}



/* MG_BlocksEngine2.Core.BE2_BlocksStack$$Start @ 0x573a2c
 * void MG_BlocksEngine2_Core_BE2_BlocksStack__Start (MG_BlocksEngine2_Core_BE2_BlocksStack_o* __this, const MethodInfo* method); */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* MG_BlocksEngine2.Core.BE2_BlocksStack$$Start
   void MG_BlocksEngine2_Core_BE2_BlocksStack__Start (MG_BlocksEngine2_Core_BE2_BlocksStack_o*
   __this, const MethodInfo* method); */

void native_MG_BlocksEngine2_Core_BE2_BlocksStack__Start_573a2c(long param_1)

{
  undefined8 uVar1;
  undefined8 *puVar2;
  long lVar3;
  ulong uVar4;
  int *piVar5;
  long *plVar6;
  
  if ((bRam000000000133ea94 & 1) == 0) {
    native_sub_43273c(&MG_BlocksEngine2_Block_Instruction_I_BE2_InstructionBase_TypeInfo_12d4e30);
    native_sub_43273c(&MG_BlocksEngine2_Block_Instruction_I_BE2_Instruction___TypeInfo_12d3240);
    native_sub_43273c(&MG_BlocksEngine2_Block_Instruction_I_BE2_Instruction_TypeInfo_12d4e28);
    bRam000000000133ea94 = 1;
  }
  uVar1 = native_sub_432750(_MG_BlocksEngine2_Block_Instruction_I_BE2_Instruction___TypeInfo_12d3240
                            ,0);
  *(undefined8 *)(param_1 + 0x28) = uVar1;
  native_sub_4326e0((undefined8 *)(param_1 + 0x28),uVar1);
  plVar6 = *(long **)(param_1 + 0x38);
  if (plVar6 != (long *)0x0) {
    lVar3 = *plVar6;
    if ((ulong)*(ushort *)(lVar3 + 0x12a) != 0) {
      uVar4 = 0;
      piVar5 = (int *)(*(long *)(lVar3 + 0xb0) + 8);
      do {
        if (*(long *)(piVar5 + -2) ==
            _MG_BlocksEngine2_Block_Instruction_I_BE2_Instruction_TypeInfo_12d4e28) {
          puVar2 = (undefined8 *)(lVar3 + (long)*piVar5 * 0x10 + 0x138);
          goto LAB_00573b04;
        }
        uVar4 = uVar4 + 1;
        piVar5 = piVar5 + 4;
      } while (uVar4 < *(ushort *)(lVar3 + 0x12a));
    }
    puVar2 = (undefined8 *)
             native_sub_3c9b34(plVar6,
                               _MG_BlocksEngine2_Block_Instruction_I_BE2_Instruction_TypeInfo_12d4e28
                               ,0);
LAB_00573b04:
    plVar6 = (long *)(*(code *)*puVar2)(plVar6,puVar2[1]);
    if (plVar6 != (long *)0x0) {
      lVar3 = *plVar6;
      if ((ulong)*(ushort *)(lVar3 + 0x12a) != 0) {
        uVar4 = 0;
        piVar5 = (int *)(*(long *)(lVar3 + 0xb0) + 8);
        do {
          if (*(long *)(piVar5 + -2) ==
              _MG_BlocksEngine2_Block_Instruction_I_BE2_InstructionBase_TypeInfo_12d4e30) {
            puVar2 = (undefined8 *)(lVar3 + (long)(*piVar5 + 3) * 0x10 + 0x138);
            goto LAB_00573b78;
          }
          uVar4 = uVar4 + 1;
          piVar5 = piVar5 + 4;
        } while (uVar4 < *(ushort *)(lVar3 + 0x12a));
      }
      puVar2 = (undefined8 *)
               native_sub_3c9b34(plVar6,
                                 _MG_BlocksEngine2_Block_Instruction_I_BE2_InstructionBase_TypeInfo_12d4e30
                                 ,3);
LAB_00573b78:
      uVar1 = (*(code *)*puVar2)(plVar6,puVar2[1]);
      native_MG_BlocksEngine2_Core_BE2_BlocksStack__PopulateStackRecursive_574244(param_1,uVar1);
      if (*(long *)(param_1 + 0x28) != 0) {
        *(int *)(param_1 + 0x18) = (int)*(undefined8 *)(*(long *)(param_1 + 0x28) + 0x18);
        return;
      }
    }
  }
                    /* WARNING: Subroutine does not return */
  native_sub_432810();
}



/* MG_BlocksEngine2.Core.BE2_BlocksStack$$OnEnable @ 0x573bb0
 * void MG_BlocksEngine2_Core_BE2_BlocksStack__OnEnable (MG_BlocksEngine2_Core_BE2_BlocksStack_o* __this, const MethodInfo* method); */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* MG_BlocksEngine2.Core.BE2_BlocksStack$$OnEnable
   void MG_BlocksEngine2_Core_BE2_BlocksStack__OnEnable (MG_BlocksEngine2_Core_BE2_BlocksStack_o*
   __this, const MethodInfo* method); */

void native_MG_BlocksEngine2_Core_BE2_BlocksStack__OnEnable_573bb0(long *param_1)

{
  long lVar1;
  undefined8 *puVar2;
  long lVar3;
  undefined8 uVar4;
  long lVar5;
  uint uVar6;
  ulong uVar7;
  int *piVar8;
  long *plVar9;
  long *plVar10;
  
  if ((bRam000000000133ea91 & 1) == 0) {
    native_sub_43273c(&Method_MG_BlocksEngine2_Core_BE2_BlocksStack_StopStack___12e2138);
    native_sub_43273c(&UnityEngine_Events_UnityAction_TypeInfo_12d65d0);
    bRam000000000133ea91 = 1;
  }
  lVar3 = native_MG_BlocksEngine2_Core_BE2_MainEventsManager__get_Instance_6001fc(0);
  uVar4 = native_sub_432808(_UnityEngine_Events_UnityAction_TypeInfo_12d65d0);
  if ((param_1 != (long *)0x0) &&
     (native_UnityEngine_Events_UnityAction___ctor_773130
                (uVar4,param_1,*(undefined8 *)(*param_1 + 0x260),0), lVar3 != 0)) {
    native_MG_BlocksEngine2_Core_BE2_EventsManager__StartListening_563268(lVar3,3,uVar4);
    lVar3 = native_MG_BlocksEngine2_Core_BE2_MainEventsManager__get_Instance_6001fc(0);
    uVar4 = native_sub_432808(_UnityEngine_Events_UnityAction_TypeInfo_12d65d0);
    native_UnityEngine_Events_UnityAction___ctor_773130
              (uVar4,param_1,_Method_MG_BlocksEngine2_Core_BE2_BlocksStack_StopStack___12e2138,0);
    if (lVar3 != 0) {
      native_MG_BlocksEngine2_Core_BE2_EventsManager__StartListening_563268(lVar3,1,uVar4);
      if (param_1[6] == 0) {
        return;
      }
      lVar3 = native_MG_BlocksEngine2_Core_BE2_ExecutionManager__get_Instance_564464();
      if (lVar3 != 0) {
        lVar5 = param_1[6];
        if ((bRam000000000133eb04 & 1) == 0) {
          native_sub_43273c(&
                            Method_MG_BlocksEngine2_Utils_BE2_ArrayUtils_Add_I_BE2_BlocksStack____12e20b8
                           );
          native_sub_43273c(&
                            Method_MG_BlocksEngine2_Utils_BE2_ArrayUtils_FindAll_I_BE2_BlocksStack____12e20e8
                           );
          native_sub_43273c(&MG_BlocksEngine2_Core_I_BE2_BlocksStack_TypeInfo_12d4e10);
          native_sub_43273c(&Method_System_Predicate_I_BE2_BlocksStack___ctor___12ddaf0);
          native_sub_43273c(&System_Predicate_I_BE2_BlocksStack__TypeInfo_12d2d98);
          native_sub_43273c(&
                            Method_MG_BlocksEngine2_Core_BE2_ExecutionManager___c__DisplayClass25_0__AddToBlocksStackArray_b__0___12e9648
                           );
          native_sub_43273c(&
                            MG_BlocksEngine2_Core_BE2_ExecutionManager___c__DisplayClass25_0_TypeInfo_12d7018
                           );
          native_sub_43273c(&UnityEngine_Events_UnityAction_TypeInfo_12d65d0);
          bRam000000000133eb04 = 1;
        }
        lVar1 = native_sub_432808(
                                 _MG_BlocksEngine2_Core_BE2_ExecutionManager___c__DisplayClass25_0_TypeInfo_12d7018
                                 );
        native_MG_BlocksEngine2_Core_BE2_ExecutionManager___c__DisplayClass25_0___ctor_5479e4
                  (lVar1,0);
        if (lVar1 != 0) {
          plVar9 = (long *)(lVar1 + 0x10);
          *plVar9 = (long)param_1;
          native_sub_4326e0(plVar9,param_1);
          uVar4 = native_sub_432808(_System_Predicate_I_BE2_BlocksStack__TypeInfo_12d2d98);
          native_System_Predicate_BaseInvokableCall____ctor_ac31d4
                    (uVar4,lVar1,
                     _Method_MG_BlocksEngine2_Core_BE2_ExecutionManager___c__DisplayClass25_0__AddToBlocksStackArray_b__0___12e9648
                     ,_Method_System_Predicate_I_BE2_BlocksStack___ctor___12ddaf0);
          lVar1 = native_MG_BlocksEngine2_Utils_BE2_ArrayUtils__FindAll_I_BE2_BlockSection__49b540
                            (lVar3 + 0x28,uVar4,
                             _Method_MG_BlocksEngine2_Utils_BE2_ArrayUtils_FindAll_I_BE2_BlocksStack____12e20e8
                            );
          if (lVar1 != 0) {
            if (*(long *)(lVar1 + 0x18) != 0) {
              return;
            }
            native_MG_BlocksEngine2_Utils_BE2_ArrayUtils__Add_GraphicRaycaster__49b428
                      (lVar3 + 0x28,*plVar9,
                       _Method_MG_BlocksEngine2_Utils_BE2_ArrayUtils_Add_I_BE2_BlocksStack____12e20b8
                      );
            plVar10 = (long *)*plVar9;
            if (plVar10 != (long *)0x0) {
              lVar1 = *plVar10;
              if ((ulong)*(ushort *)(lVar1 + 0x12a) != 0) {
                uVar7 = 0;
                piVar8 = (int *)(*(long *)(lVar1 + 0xb0) + 8);
                do {
                  if (*(long *)(piVar8 + -2) ==
                      _MG_BlocksEngine2_Core_I_BE2_BlocksStack_TypeInfo_12d4e10) {
                    puVar2 = (undefined8 *)(lVar1 + (long)(*piVar8 + 1) * 0x10 + 0x138);
                    goto LAB_0056df50;
                  }
                  uVar7 = uVar7 + 1;
                  piVar8 = piVar8 + 4;
                } while (uVar7 < *(ushort *)(lVar1 + 0x12a));
              }
              puVar2 = (undefined8 *)
                       native_sub_3c9b34(plVar10,
                                         _MG_BlocksEngine2_Core_I_BE2_BlocksStack_TypeInfo_12d4e10,1
                                        );
LAB_0056df50:
              (*(code *)*puVar2)(plVar10,lVar5,puVar2[1]);
              lVar5 = native_MG_BlocksEngine2_Core_BE2_MainEventsManager__get_Instance_6001fc(0);
              if (lVar5 != 0) {
                native_MG_BlocksEngine2_Core_BE2_EventsManager__TriggerEvent_579794(lVar5,6);
                plVar9 = (long *)*plVar9;
                uVar4 = native_sub_432808(_UnityEngine_Events_UnityAction_TypeInfo_12d65d0);
                if (plVar9 != (long *)0x0) {
                  lVar5 = *plVar9;
                  if ((ulong)*(ushort *)(lVar5 + 0x12a) != 0) {
                    uVar7 = 0;
                    piVar8 = (int *)(*(long *)(lVar5 + 0xb0) + 8);
                    do {
                      if (*(long *)(piVar8 + -2) ==
                          _MG_BlocksEngine2_Core_I_BE2_BlocksStack_TypeInfo_12d4e10) {
                        lVar5 = lVar5 + (long)(*piVar8 + 0xd) * 0x10 + 0x138;
                        goto LAB_0056dfe8;
                      }
                      uVar7 = uVar7 + 1;
                      piVar8 = piVar8 + 4;
                    } while (uVar7 < *(ushort *)(lVar5 + 0x12a));
                  }
                  lVar5 = native_sub_3c9b34(plVar9,
                                            _MG_BlocksEngine2_Core_I_BE2_BlocksStack_TypeInfo_12d4e10
                                            ,0xd);
LAB_0056dfe8:
                  native_UnityEngine_Events_UnityAction___ctor_773130
                            (uVar4,plVar9,*(undefined8 *)(lVar5 + 8),0);
                  if ((bRam000000000133eafc & 1) == 0) {
                    native_sub_43273c(&
                                      Method_System_Collections_Generic_List_UnityAction__Add___12dd490
                                     );
                    native_sub_43273c(&
                                      Method_System_Collections_Generic_List_UnityAction__Contains___12dd498
                                     );
                    bRam000000000133eafc = 1;
                  }
                  if (*(long *)(lVar3 + 0x40) != 0) {
                    uVar7 = native_System_Collections_Generic_List_BE2_UI_SelectionPanel___Contains_d40ec8
                                      (*(long *)(lVar3 + 0x40),uVar4,
                                       _Method_System_Collections_Generic_List_UnityAction__Contains___12dd498
                                      );
                    if ((uVar7 & 1) != 0) {
                      return;
                    }
                    if (*(long *)(lVar3 + 0x48) != 0) {
                      native_UnityEngine_Events_UnityEvent__AddListener_7734bc
                                (*(long *)(lVar3 + 0x48),uVar4,0);
                      lVar3 = *(long *)(lVar3 + 0x40);
                      if (lVar3 != 0) {
                        lVar5 = *(long *)(lVar3 + 0x10);
                        if (lVar5 != 0) {
                          uVar6 = *(uint *)(lVar3 + 0x18);
                          if (uVar6 == *(uint *)(lVar5 + 0x18)) {
                            (*(code *)**(undefined8 **)
                                        (*(long *)(*(long *)(
                                                  _Method_System_Collections_Generic_List_UnityAction__Add___12dd490
                                                  + 0x18) + 0xc0) + 0x60))(lVar3,uVar6 + 1);
                            uVar6 = *(uint *)(lVar3 + 0x18);
                            lVar5 = *(long *)(lVar3 + 0x10);
                            *(uint *)(lVar3 + 0x18) = uVar6 + 1;
                            if (lVar5 == 0) goto code_r0x00d40c5c;
                          }
                          else {
                            *(uint *)(lVar3 + 0x18) = uVar6 + 1;
                          }
                          if (uVar6 < *(uint *)(lVar5 + 0x18)) {
                            puVar2 = (undefined8 *)(lVar5 + (long)(int)uVar6 * 8 + 0x20);
                            *puVar2 = uVar4;
                            native_sub_4326e0(puVar2,uVar4);
                            *(int *)(lVar3 + 0x1c) = *(int *)(lVar3 + 0x1c) + 1;
                            return;
                          }
                          uVar4 = native_sub_43283c();
                    /* WARNING: Subroutine does not return */
                          native_sub_4327dc(uVar4,0);
                        }
code_r0x00d40c5c:
                    /* WARNING: Subroutine does not return */
                        native_sub_432810();
                      }
                    }
                  }
                    /* WARNING: Subroutine does not return */
                  native_sub_432810();
                }
              }
            }
          }
        }
                    /* WARNING: Subroutine does not return */
        native_sub_432810();
      }
    }
  }
                    /* WARNING: Subroutine does not return */
  native_sub_432810();
}



/* MG_BlocksEngine2.Core.BE2_BlocksStack$$OnDisable @ 0x573cc4
 * void MG_BlocksEngine2_Core_BE2_BlocksStack__OnDisable (MG_BlocksEngine2_Core_BE2_BlocksStack_o* __this, const MethodInfo* method); */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* MG_BlocksEngine2.Core.BE2_BlocksStack$$OnDisable
   void MG_BlocksEngine2_Core_BE2_BlocksStack__OnDisable (MG_BlocksEngine2_Core_BE2_BlocksStack_o*
   __this, const MethodInfo* method); */

ulong native_MG_BlocksEngine2_Core_BE2_BlocksStack__OnDisable_573cc4(long *param_1)

{
  int iVar1;
  long lVar2;
  ulong uVar3;
  long lVar4;
  undefined8 uVar5;
  int *piVar6;
  long *plVar7;
  
  if ((bRam000000000133ea92 & 1) == 0) {
    native_sub_43273c(&Method_MG_BlocksEngine2_Core_BE2_BlocksStack_StopStack___12e2138);
    native_sub_43273c(&UnityEngine_Events_UnityAction_TypeInfo_12d65d0);
    bRam000000000133ea92 = 1;
  }
  lVar4 = native_MG_BlocksEngine2_Core_BE2_MainEventsManager__get_Instance_6001fc(0);
  uVar5 = native_sub_432808(_UnityEngine_Events_UnityAction_TypeInfo_12d65d0);
  if ((param_1 != (long *)0x0) &&
     (native_UnityEngine_Events_UnityAction___ctor_773130
                (uVar5,param_1,*(undefined8 *)(*param_1 + 0x260),0), lVar4 != 0)) {
    native_MG_BlocksEngine2_Core_BE2_EventsManager__StopListening_56340c(lVar4,3,uVar5);
    lVar4 = native_MG_BlocksEngine2_Core_BE2_MainEventsManager__get_Instance_6001fc(0);
    uVar5 = native_sub_432808(_UnityEngine_Events_UnityAction_TypeInfo_12d65d0);
    native_UnityEngine_Events_UnityAction___ctor_773130
              (uVar5,param_1,_Method_MG_BlocksEngine2_Core_BE2_BlocksStack_StopStack___12e2138,0);
    if (lVar4 != 0) {
      native_MG_BlocksEngine2_Core_BE2_EventsManager__StopListening_56340c(lVar4,1,uVar5);
      lVar4 = native_MG_BlocksEngine2_Core_BE2_ExecutionManager__get_Instance_564464();
      if (lVar4 == 0) {
        return 0;
      }
      if ((bRam000000000133eb05 & 1) == 0) {
        native_sub_43273c(&
                          Method_MG_BlocksEngine2_Utils_BE2_ArrayUtils_FindAll_I_BE2_BlocksStack____12e20e8
                         );
        native_sub_43273c(&
                          Method_MG_BlocksEngine2_Utils_BE2_ArrayUtils_Remove_I_BE2_BlocksStack____12e20f8
                         );
        native_sub_43273c(&MG_BlocksEngine2_Core_I_BE2_BlocksStack_TypeInfo_12d4e10);
        native_sub_43273c(&Method_System_Predicate_I_BE2_BlocksStack___ctor___12ddaf0);
        native_sub_43273c(&System_Predicate_I_BE2_BlocksStack__TypeInfo_12d2d98);
        native_sub_43273c(&
                          Method_MG_BlocksEngine2_Core_BE2_ExecutionManager___c__DisplayClass26_0__RemoveFromBlocksStackList_b__0___12e9650
                         );
        native_sub_43273c(&
                          MG_BlocksEngine2_Core_BE2_ExecutionManager___c__DisplayClass26_0_TypeInfo_12d7020
                         );
        native_sub_43273c(&UnityEngine_Events_UnityAction_TypeInfo_12d65d0);
        bRam000000000133eb05 = 1;
      }
      lVar2 = native_sub_432808(
                               _MG_BlocksEngine2_Core_BE2_ExecutionManager___c__DisplayClass26_0_TypeInfo_12d7020
                               );
      native_MG_BlocksEngine2_Core_BE2_ExecutionManager___c__DisplayClass26_0___ctor_5479fc(lVar2,0)
      ;
      if (lVar2 != 0) {
        plVar7 = (long *)(lVar2 + 0x10);
        *plVar7 = (long)param_1;
        native_sub_4326e0(plVar7,param_1);
        uVar5 = native_sub_432808(_System_Predicate_I_BE2_BlocksStack__TypeInfo_12d2d98);
        native_System_Predicate_BaseInvokableCall____ctor_ac31d4
                  (uVar5,lVar2,
                   _Method_MG_BlocksEngine2_Core_BE2_ExecutionManager___c__DisplayClass26_0__RemoveFromBlocksStackList_b__0___12e9650
                   ,_Method_System_Predicate_I_BE2_BlocksStack___ctor___12ddaf0);
        uVar3 = native_MG_BlocksEngine2_Utils_BE2_ArrayUtils__FindAll_I_BE2_BlockSection__49b540
                          (lVar4 + 0x28,uVar5,
                           _Method_MG_BlocksEngine2_Utils_BE2_ArrayUtils_FindAll_I_BE2_BlocksStack____12e20e8
                          );
        if (uVar3 != 0) {
          if (*(long *)(uVar3 + 0x18) == 0) {
            return uVar3;
          }
          native_MG_BlocksEngine2_Utils_BE2_ArrayUtils__Remove_GraphicRaycaster__49b554
                    (lVar4 + 0x28,*plVar7,
                     _Method_MG_BlocksEngine2_Utils_BE2_ArrayUtils_Remove_I_BE2_BlocksStack____12e20f8
                    );
          lVar2 = native_MG_BlocksEngine2_Core_BE2_MainEventsManager__get_Instance_6001fc(0);
          if (lVar2 != 0) {
            native_MG_BlocksEngine2_Core_BE2_EventsManager__TriggerEvent_579794(lVar2,6);
            plVar7 = (long *)*plVar7;
            uVar5 = native_sub_432808(_UnityEngine_Events_UnityAction_TypeInfo_12d65d0);
            if (plVar7 != (long *)0x0) {
              lVar2 = *plVar7;
              if ((ulong)*(ushort *)(lVar2 + 0x12a) != 0) {
                uVar3 = 0;
                piVar6 = (int *)(*(long *)(lVar2 + 0xb0) + 8);
                do {
                  if (*(long *)(piVar6 + -2) ==
                      _MG_BlocksEngine2_Core_I_BE2_BlocksStack_TypeInfo_12d4e10) {
                    lVar2 = lVar2 + (long)(*piVar6 + 0xd) * 0x10 + 0x138;
                    goto LAB_0056e618;
                  }
                  uVar3 = uVar3 + 1;
                  piVar6 = piVar6 + 4;
                } while (uVar3 < *(ushort *)(lVar2 + 0x12a));
              }
              lVar2 = native_sub_3c9b34(plVar7,
                                        _MG_BlocksEngine2_Core_I_BE2_BlocksStack_TypeInfo_12d4e10,
                                        0xd);
LAB_0056e618:
              native_UnityEngine_Events_UnityAction___ctor_773130
                        (uVar5,plVar7,*(undefined8 *)(lVar2 + 8),0);
              if ((bRam000000000133eafd & 1) == 0) {
                native_sub_43273c(&
                                  Method_System_Collections_Generic_List_UnityAction__Contains___12dd498
                                 );
                native_sub_43273c(&
                                  Method_System_Collections_Generic_List_UnityAction__Remove___12dd4a0
                                 );
                bRam000000000133eafd = 1;
              }
              if (*(long *)(lVar4 + 0x40) != 0) {
                uVar3 = native_System_Collections_Generic_List_BE2_UI_SelectionPanel___Contains_d40ec8
                                  (*(long *)(lVar4 + 0x40),uVar5,
                                   _Method_System_Collections_Generic_List_UnityAction__Contains___12dd498
                                  );
                if ((uVar3 & 1) == 0) {
                  return uVar3;
                }
                if (*(long *)(lVar4 + 0x48) != 0) {
                  native_UnityEngine_Events_UnityEvent__RemoveListener_773574
                            (*(long *)(lVar4 + 0x48),uVar5,0);
                  lVar2 = _Method_System_Collections_Generic_List_UnityAction__Remove___12dd4a0;
                  lVar4 = *(long *)(lVar4 + 0x40);
                  if (lVar4 != 0) {
                    if (lVar4 == 0) {
                    /* WARNING: Subroutine does not return */
                      native_sub_432810(0,uVar5);
                    }
                    iVar1 = (*(code *)**(undefined8 **)
                                        (*(long *)(*(long *)(
                                                  _Method_System_Collections_Generic_List_UnityAction__Remove___12dd4a0
                                                  + 0x18) + 0xc0) + 0xd8))();
                    if (-1 < iVar1) {
                      (*(code *)**(undefined8 **)(*(long *)(*(long *)(lVar2 + 0x18) + 0xc0) + 0xe8))
                                (lVar4,iVar1);
                    }
                    return (ulong)(-1 < iVar1);
                  }
                }
              }
                    /* WARNING: Subroutine does not return */
              native_sub_432810();
            }
          }
        }
      }
                    /* WARNING: Subroutine does not return */
      native_sub_432810();
    }
  }
                    /* WARNING: Subroutine does not return */
  native_sub_432810();
}



/* MG_BlocksEngine2.Core.BE2_BlocksStack$$StopStack @ 0x573dcc
 * void MG_BlocksEngine2_Core_BE2_BlocksStack__StopStack (MG_BlocksEngine2_Core_BE2_BlocksStack_o* __this, const MethodInfo* method); */

/* WARNING: Removing unreachable block (ram,0x00573508) */
/* WARNING: Removing unreachable block (ram,0x00573510) */
/* WARNING: Removing unreachable block (ram,0x00573518) */
/* WARNING: Removing unreachable block (ram,0x00573524) */
/* WARNING: Removing unreachable block (ram,0x00573538) */
/* WARNING: Removing unreachable block (ram,0x00573544) */
/* WARNING: Removing unreachable block (ram,0x00573550) */
/* WARNING: Removing unreachable block (ram,0x00573560) */
/* WARNING: Removing unreachable block (ram,0x0057356c) */
/* WARNING: Removing unreachable block (ram,0x00573598) */
/* WARNING: Removing unreachable block (ram,0x00573578) */
/* WARNING: Removing unreachable block (ram,0x00573588) */
/* WARNING: Removing unreachable block (ram,0x005735a4) */
/* WARNING: Removing unreachable block (ram,0x005735b4) */
/* WARNING: Removing unreachable block (ram,0x005735c8) */
/* WARNING: Removing unreachable block (ram,0x005735d4) */
/* WARNING: Removing unreachable block (ram,0x00573600) */
/* WARNING: Removing unreachable block (ram,0x005735e0) */
/* WARNING: Removing unreachable block (ram,0x005735f0) */
/* WARNING: Removing unreachable block (ram,0x00573610) */
/* WARNING: Removing unreachable block (ram,0x00573628) */
/* WARNING: Removing unreachable block (ram,0x00573630) */
/* WARNING: Removing unreachable block (ram,0x005737d0) */
/* WARNING: Removing unreachable block (ram,0x005737dc) */
/* WARNING: Removing unreachable block (ram,0x005737e8) */
/* WARNING: Removing unreachable block (ram,0x00573804) */
/* WARNING: Removing unreachable block (ram,0x0057380c) */
/* WARNING: Removing unreachable block (ram,0x00573818) */
/* WARNING: Removing unreachable block (ram,0x00573828) */
/* WARNING: Removing unreachable block (ram,0x00573834) */
/* WARNING: Removing unreachable block (ram,0x00573860) */
/* WARNING: Removing unreachable block (ram,0x00573840) */
/* WARNING: Removing unreachable block (ram,0x00573850) */
/* WARNING: Removing unreachable block (ram,0x0057386c) */
/* WARNING: Removing unreachable block (ram,0x0057387c) */
/* WARNING: Removing unreachable block (ram,0x00573890) */
/* WARNING: Removing unreachable block (ram,0x0057389c) */
/* WARNING: Removing unreachable block (ram,0x005738c8) */
/* WARNING: Removing unreachable block (ram,0x005738a8) */
/* WARNING: Removing unreachable block (ram,0x005738b8) */
/* WARNING: Removing unreachable block (ram,0x005738d8) */
/* WARNING: Removing unreachable block (ram,0x005738e8) */
/* WARNING: Removing unreachable block (ram,0x005738fc) */
/* WARNING: Removing unreachable block (ram,0x00573908) */
/* WARNING: Removing unreachable block (ram,0x00573934) */
/* WARNING: Removing unreachable block (ram,0x00573914) */
/* WARNING: Removing unreachable block (ram,0x00573924) */
/* WARNING: Removing unreachable block (ram,0x00573944) */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* MG_BlocksEngine2.Core.BE2_BlocksStack$$StopStack
   void MG_BlocksEngine2_Core_BE2_BlocksStack__StopStack (MG_BlocksEngine2_Core_BE2_BlocksStack_o*
   __this, const MethodInfo* method); */

void native_MG_BlocksEngine2_Core_BE2_BlocksStack__StopStack_573dcc(long param_1)

{
  uint uVar1;
  undefined8 *puVar2;
  undefined8 uVar3;
  long lVar4;
  ulong uVar5;
  int *piVar6;
  long *plVar7;
  long lVar8;
  uint uVar9;
  
  *(undefined4 *)(param_1 + 0x20) = 0;
  if ((bRam000000000133ea8f & 1) == 0) {
    native_sub_43273c(&MG_BlocksEngine2_Block_I_BE2_Block_TypeInfo_12d4dd8);
    native_sub_43273c(&MG_BlocksEngine2_Block_Instruction_I_BE2_InstructionBase_TypeInfo_12d4e30);
    native_sub_43273c(&MG_BlocksEngine2_Block_Instruction_I_BE2_Instruction_TypeInfo_12d4e28);
    bRam000000000133ea8f = 1;
  }
  if (*(char *)(param_1 + 0x1c) != '\0') {
    lVar8 = *(long *)(param_1 + 0x28);
    if (lVar8 == 0) {
LAB_00573984:
                    /* WARNING: Subroutine does not return */
      native_sub_432810();
    }
    uVar1 = *(uint *)(lVar8 + 0x18);
    if (0 < (int)uVar1) {
      uVar9 = 0;
      do {
        if (uVar1 <= uVar9) {
          uVar3 = native_sub_43283c();
                    /* WARNING: Subroutine does not return */
          native_sub_4327dc(uVar3,0);
        }
        plVar7 = *(long **)(lVar8 + (long)(int)uVar9 * 8 + 0x20);
        if (plVar7 == (long *)0x0) goto LAB_00573984;
        lVar4 = *plVar7;
        if ((ulong)*(ushort *)(lVar4 + 0x12a) != 0) {
          uVar5 = 0;
          piVar6 = (int *)(*(long *)(lVar4 + 0xb0) + 8);
          do {
            if (*(long *)(piVar6 + -2) ==
                _MG_BlocksEngine2_Block_Instruction_I_BE2_Instruction_TypeInfo_12d4e28) {
              puVar2 = (undefined8 *)(lVar4 + (long)*piVar6 * 0x10 + 0x138);
              goto LAB_005736d4;
            }
            uVar5 = uVar5 + 1;
            piVar6 = piVar6 + 4;
          } while (uVar5 < *(ushort *)(lVar4 + 0x12a));
        }
        puVar2 = (undefined8 *)
                 native_sub_3c9b34(plVar7,
                                   _MG_BlocksEngine2_Block_Instruction_I_BE2_Instruction_TypeInfo_12d4e28
                                   ,0);
LAB_005736d4:
        plVar7 = (long *)(*(code *)*puVar2)(plVar7,puVar2[1]);
        if (plVar7 == (long *)0x0) goto LAB_00573984;
        lVar4 = *plVar7;
        if ((ulong)*(ushort *)(lVar4 + 0x12a) != 0) {
          uVar5 = 0;
          piVar6 = (int *)(*(long *)(lVar4 + 0xb0) + 8);
          do {
            if (*(long *)(piVar6 + -2) ==
                _MG_BlocksEngine2_Block_Instruction_I_BE2_InstructionBase_TypeInfo_12d4e30) {
              puVar2 = (undefined8 *)(lVar4 + (long)(*piVar6 + 3) * 0x10 + 0x138);
              goto LAB_00573740;
            }
            uVar5 = uVar5 + 1;
            piVar6 = piVar6 + 4;
          } while (uVar5 < *(ushort *)(lVar4 + 0x12a));
        }
        puVar2 = (undefined8 *)
                 native_sub_3c9b34(plVar7,
                                   _MG_BlocksEngine2_Block_Instruction_I_BE2_InstructionBase_TypeInfo_12d4e30
                                   ,3);
LAB_00573740:
        plVar7 = (long *)(*(code *)*puVar2)(plVar7,puVar2[1]);
        if (plVar7 == (long *)0x0) goto LAB_00573984;
        lVar4 = *plVar7;
        if ((ulong)*(ushort *)(lVar4 + 0x12a) != 0) {
          uVar5 = 0;
          piVar6 = (int *)(*(long *)(lVar4 + 0xb0) + 8);
          do {
            if (*(long *)(piVar6 + -2) == _MG_BlocksEngine2_Block_I_BE2_Block_TypeInfo_12d4dd8) {
              puVar2 = (undefined8 *)(lVar4 + (long)(*piVar6 + 9) * 0x10 + 0x138);
              goto LAB_005737ac;
            }
            uVar5 = uVar5 + 1;
            piVar6 = piVar6 + 4;
          } while (uVar5 < *(ushort *)(lVar4 + 0x12a));
        }
        puVar2 = (undefined8 *)
                 native_sub_3c9b34(plVar7,_MG_BlocksEngine2_Block_I_BE2_Block_TypeInfo_12d4dd8,9);
LAB_005737ac:
        (*(code *)*puVar2)(plVar7,0,puVar2[1]);
        uVar1 = *(uint *)(lVar8 + 0x18);
        uVar9 = uVar9 + 1;
      } while ((int)uVar9 < (int)uVar1);
    }
  }
  *(undefined1 *)(param_1 + 0x1c) = 0;
  return;
}



/* MG_BlocksEngine2.Core.BE2_BlocksStack$$get_OverflowGuard @ 0x573dd8
 * int32_t MG_BlocksEngine2_Core_BE2_BlocksStack__get_OverflowGuard (MG_BlocksEngine2_Core_BE2_BlocksStack_o* __this, const MethodInfo* method); */

/* MG_BlocksEngine2.Core.BE2_BlocksStack$$get_OverflowGuard
   int32_t MG_BlocksEngine2_Core_BE2_BlocksStack__get_OverflowGuard
   (MG_BlocksEngine2_Core_BE2_BlocksStack_o* __this, const MethodInfo* method); */

undefined4 native_MG_BlocksEngine2_Core_BE2_BlocksStack__get_OverflowGuard_573dd8(long param_1)

{
  return *(undefined4 *)(param_1 + 0x58);
}



/* MG_BlocksEngine2.Core.BE2_BlocksStack$$set_OverflowGuard @ 0x573de0
 * void MG_BlocksEngine2_Core_BE2_BlocksStack__set_OverflowGuard (MG_BlocksEngine2_Core_BE2_BlocksStack_o* __this, int32_t value, const MethodInfo* method); */

/* MG_BlocksEngine2.Core.BE2_BlocksStack$$set_OverflowGuard
   void MG_BlocksEngine2_Core_BE2_BlocksStack__set_OverflowGuard
   (MG_BlocksEngine2_Core_BE2_BlocksStack_o* __this, int32_t value, const MethodInfo* method); */

void native_MG_BlocksEngine2_Core_BE2_BlocksStack__set_OverflowGuard_573de0
               (long param_1,undefined4 param_2)

{
  *(undefined4 *)(param_1 + 0x58) = param_2;
  return;
}



/* MG_BlocksEngine2.Core.BE2_BlocksStack$$Execute @ 0x573de8
 * void MG_BlocksEngine2_Core_BE2_BlocksStack__Execute (MG_BlocksEngine2_Core_BE2_BlocksStack_o* __this, const MethodInfo* method); */

/* WARNING: Removing unreachable block (ram,0x00573508) */
/* WARNING: Removing unreachable block (ram,0x00573510) */
/* WARNING: Removing unreachable block (ram,0x00573518) */
/* WARNING: Removing unreachable block (ram,0x00573524) */
/* WARNING: Removing unreachable block (ram,0x00573538) */
/* WARNING: Removing unreachable block (ram,0x00573544) */
/* WARNING: Removing unreachable block (ram,0x00573550) */
/* WARNING: Removing unreachable block (ram,0x00573560) */
/* WARNING: Removing unreachable block (ram,0x0057356c) */
/* WARNING: Removing unreachable block (ram,0x00573598) */
/* WARNING: Removing unreachable block (ram,0x00573578) */
/* WARNING: Removing unreachable block (ram,0x00573588) */
/* WARNING: Removing unreachable block (ram,0x005735a4) */
/* WARNING: Removing unreachable block (ram,0x005735b4) */
/* WARNING: Removing unreachable block (ram,0x005735c8) */
/* WARNING: Removing unreachable block (ram,0x005735d4) */
/* WARNING: Removing unreachable block (ram,0x00573600) */
/* WARNING: Removing unreachable block (ram,0x005735e0) */
/* WARNING: Removing unreachable block (ram,0x005735f0) */
/* WARNING: Removing unreachable block (ram,0x00573610) */
/* WARNING: Removing unreachable block (ram,0x00573628) */
/* WARNING: Removing unreachable block (ram,0x00573630) */
/* WARNING: Removing unreachable block (ram,0x005737d0) */
/* WARNING: Removing unreachable block (ram,0x005737dc) */
/* WARNING: Removing unreachable block (ram,0x005737e8) */
/* WARNING: Removing unreachable block (ram,0x00573804) */
/* WARNING: Removing unreachable block (ram,0x0057380c) */
/* WARNING: Removing unreachable block (ram,0x00573818) */
/* WARNING: Removing unreachable block (ram,0x00573828) */
/* WARNING: Removing unreachable block (ram,0x00573834) */
/* WARNING: Removing unreachable block (ram,0x00573860) */
/* WARNING: Removing unreachable block (ram,0x00573840) */
/* WARNING: Removing unreachable block (ram,0x00573850) */
/* WARNING: Removing unreachable block (ram,0x0057386c) */
/* WARNING: Removing unreachable block (ram,0x0057387c) */
/* WARNING: Removing unreachable block (ram,0x00573890) */
/* WARNING: Removing unreachable block (ram,0x0057389c) */
/* WARNING: Removing unreachable block (ram,0x005738c8) */
/* WARNING: Removing unreachable block (ram,0x005738a8) */
/* WARNING: Removing unreachable block (ram,0x005738b8) */
/* WARNING: Removing unreachable block (ram,0x005738d8) */
/* WARNING: Removing unreachable block (ram,0x005738e8) */
/* WARNING: Removing unreachable block (ram,0x005738fc) */
/* WARNING: Removing unreachable block (ram,0x00573908) */
/* WARNING: Removing unreachable block (ram,0x00573934) */
/* WARNING: Removing unreachable block (ram,0x00573914) */
/* WARNING: Removing unreachable block (ram,0x00573924) */
/* WARNING: Removing unreachable block (ram,0x00573944) */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* MG_BlocksEngine2.Core.BE2_BlocksStack$$Execute
   void MG_BlocksEngine2_Core_BE2_BlocksStack__Execute (MG_BlocksEngine2_Core_BE2_BlocksStack_o*
   __this, const MethodInfo* method); */

void native_MG_BlocksEngine2_Core_BE2_BlocksStack__Execute_573de8(long param_1)

{
  uint uVar1;
  undefined8 *puVar2;
  undefined8 uVar3;
  long lVar4;
  long lVar5;
  ulong uVar6;
  int *piVar7;
  long *plVar8;
  uint uVar9;
  
  if ((bRam000000000133ea93 & 1) == 0) {
    native_sub_43273c(&MG_BlocksEngine2_Block_Instruction_I_BE2_InstructionBase_TypeInfo_12d4e30);
    native_sub_43273c(&MG_BlocksEngine2_Block_Instruction_I_BE2_Instruction_TypeInfo_12d4e28);
    native_sub_43273c(&Method_UnityEngine_Events_UnityEvent_I_BE2_Instruction__Invoke___12de478);
    bRam000000000133ea93 = 1;
  }
  if ((*(char *)(param_1 + 0x1c) != '\0') &&
     (uVar1 = *(uint *)(param_1 + 0x20), (int)uVar1 < *(int *)(param_1 + 0x18))) {
    if (uVar1 == 0) {
      plVar8 = *(long **)(param_1 + 0x38);
      if (plVar8 == (long *)0x0) goto LAB_0057414c;
      lVar4 = *plVar8;
      if ((ulong)*(ushort *)(lVar4 + 0x12a) != 0) {
        uVar6 = 0;
        piVar7 = (int *)(*(long *)(lVar4 + 0xb0) + 8);
        do {
          if (*(long *)(piVar7 + -2) ==
              _MG_BlocksEngine2_Block_Instruction_I_BE2_Instruction_TypeInfo_12d4e28) {
            puVar2 = (undefined8 *)(lVar4 + (long)*piVar7 * 0x10 + 0x138);
            goto LAB_00573eb0;
          }
          uVar6 = uVar6 + 1;
          piVar7 = piVar7 + 4;
        } while (uVar6 < *(ushort *)(lVar4 + 0x12a));
      }
      puVar2 = (undefined8 *)
               native_sub_3c9b34(plVar8,
                                 _MG_BlocksEngine2_Block_Instruction_I_BE2_Instruction_TypeInfo_12d4e28
                                 ,0);
LAB_00573eb0:
      plVar8 = (long *)(*(code *)*puVar2)(plVar8,puVar2[1]);
      if (plVar8 == (long *)0x0) goto LAB_0057414c;
      lVar4 = *plVar8;
      if ((ulong)*(ushort *)(lVar4 + 0x12a) != 0) {
        uVar6 = 0;
        piVar7 = (int *)(*(long *)(lVar4 + 0xb0) + 8);
        do {
          if (*(long *)(piVar7 + -2) ==
              _MG_BlocksEngine2_Block_Instruction_I_BE2_InstructionBase_TypeInfo_12d4e30) {
            puVar2 = (undefined8 *)(lVar4 + (long)(*piVar7 + 3) * 0x10 + 0x138);
            goto LAB_00573f24;
          }
          uVar6 = uVar6 + 1;
          piVar7 = piVar7 + 4;
        } while (uVar6 < *(ushort *)(lVar4 + 0x12a));
      }
      puVar2 = (undefined8 *)
               native_sub_3c9b34(plVar8,
                                 _MG_BlocksEngine2_Block_Instruction_I_BE2_InstructionBase_TypeInfo_12d4e30
                                 ,3);
LAB_00573f24:
      uVar3 = (*(code *)*puVar2)(plVar8,puVar2[1]);
      lVar4 = native_MG_BlocksEngine2_Core_BE2_MainEventsManager__get_Instance_6001fc(0);
      if (lVar4 == 0) goto LAB_0057414c;
      native_MG_BlocksEngine2_Core_BE2_EventsManager__TriggerEvent_57415c(lVar4,0,uVar3);
      uVar1 = *(uint *)(param_1 + 0x20);
    }
    lVar4 = *(long *)(param_1 + 0x28);
    if (lVar4 == 0) goto LAB_0057414c;
    if (*(uint *)(lVar4 + 0x18) <= uVar1) goto LAB_00574150;
    if (*(long *)(param_1 + 0x50) == 0) goto LAB_0057414c;
    plVar8 = *(long **)(lVar4 + (long)(int)uVar1 * 8 + 0x20);
    native_UnityEngine_Events_UnityEvent_BaseEventData___Invoke_8a0108
              (*(long *)(param_1 + 0x50),plVar8,
               _Method_UnityEngine_Events_UnityEvent_I_BE2_Instruction__Invoke___12de478);
    if (plVar8 == (long *)0x0) goto LAB_0057414c;
    lVar4 = *plVar8;
    if ((ulong)*(ushort *)(lVar4 + 0x12a) != 0) {
      uVar6 = 0;
      piVar7 = (int *)(*(long *)(lVar4 + 0xb0) + 8);
      do {
        if (*(long *)(piVar7 + -2) ==
            _MG_BlocksEngine2_Block_Instruction_I_BE2_Instruction_TypeInfo_12d4e28) {
          puVar2 = (undefined8 *)(lVar4 + (long)(*piVar7 + 3) * 0x10 + 0x138);
          goto LAB_00573fec;
        }
        uVar6 = uVar6 + 1;
        piVar7 = piVar7 + 4;
      } while (uVar6 < *(ushort *)(lVar4 + 0x12a));
    }
    puVar2 = (undefined8 *)
             native_sub_3c9b34(plVar8,
                               _MG_BlocksEngine2_Block_Instruction_I_BE2_Instruction_TypeInfo_12d4e28
                               ,3);
LAB_00573fec:
    (*(code *)*puVar2)(plVar8,puVar2[1]);
    *(undefined4 *)(param_1 + 0x58) = 0;
  }
  lVar4 = *(long *)(param_1 + 0x28);
  if (((lVar4 == 0) || (lVar5 = *(long *)(lVar4 + 0x18), lVar5 == 0)) ||
     (*(int *)(param_1 + 0x20) != (int)lVar5)) {
    return;
  }
  if (*(int *)(param_1 + 0x20) != 0) {
    plVar8 = *(long **)(lVar4 + ((lVar5 << 0x20) + -0x100000000 >> 0x1d) + 0x20);
    if (plVar8 != (long *)0x0) {
      lVar4 = *plVar8;
      if ((ulong)*(ushort *)(lVar4 + 0x12a) != 0) {
        uVar6 = 0;
        piVar7 = (int *)(*(long *)(lVar4 + 0xb0) + 8);
        do {
          if (*(long *)(piVar7 + -2) ==
              _MG_BlocksEngine2_Block_Instruction_I_BE2_Instruction_TypeInfo_12d4e28) {
            puVar2 = (undefined8 *)(lVar4 + (long)*piVar7 * 0x10 + 0x138);
            goto LAB_00574098;
          }
          uVar6 = uVar6 + 1;
          piVar7 = piVar7 + 4;
        } while (uVar6 < *(ushort *)(lVar4 + 0x12a));
      }
      puVar2 = (undefined8 *)
               native_sub_3c9b34(plVar8,
                                 _MG_BlocksEngine2_Block_Instruction_I_BE2_Instruction_TypeInfo_12d4e28
                                 ,0);
LAB_00574098:
      plVar8 = (long *)(*(code *)*puVar2)(plVar8,puVar2[1]);
      if (plVar8 != (long *)0x0) {
        lVar4 = *plVar8;
        if ((ulong)*(ushort *)(lVar4 + 0x12a) != 0) {
          uVar6 = 0;
          piVar7 = (int *)(*(long *)(lVar4 + 0xb0) + 8);
          do {
            if (*(long *)(piVar7 + -2) ==
                _MG_BlocksEngine2_Block_Instruction_I_BE2_InstructionBase_TypeInfo_12d4e30) {
              puVar2 = (undefined8 *)(lVar4 + (long)(*piVar7 + 3) * 0x10 + 0x138);
              goto LAB_0057410c;
            }
            uVar6 = uVar6 + 1;
            piVar7 = piVar7 + 4;
          } while (uVar6 < *(ushort *)(lVar4 + 0x12a));
        }
        puVar2 = (undefined8 *)
                 native_sub_3c9b34(plVar8,
                                   _MG_BlocksEngine2_Block_Instruction_I_BE2_InstructionBase_TypeInfo_12d4e30
                                   ,3);
LAB_0057410c:
        uVar3 = (*(code *)*puVar2)(plVar8,puVar2[1]);
        lVar4 = native_MG_BlocksEngine2_Core_BE2_MainEventsManager__get_Instance_6001fc(0);
        if (lVar4 != 0) {
          native_MG_BlocksEngine2_Core_BE2_EventsManager__TriggerEvent_57415c(lVar4,1,uVar3);
          *(undefined4 *)(param_1 + 0x20) = 0;
          if ((bRam000000000133ea8f & 1) == 0) {
            native_sub_43273c(&MG_BlocksEngine2_Block_I_BE2_Block_TypeInfo_12d4dd8);
            native_sub_43273c(&
                              MG_BlocksEngine2_Block_Instruction_I_BE2_InstructionBase_TypeInfo_12d4e30
                             );
            native_sub_43273c(&MG_BlocksEngine2_Block_Instruction_I_BE2_Instruction_TypeInfo_12d4e28
                             );
            bRam000000000133ea8f = 1;
          }
          if (*(char *)(param_1 + 0x1c) != '\0') {
            lVar4 = *(long *)(param_1 + 0x28);
            if (lVar4 == 0) {
LAB_00573984:
                    /* WARNING: Subroutine does not return */
              native_sub_432810();
            }
            uVar1 = *(uint *)(lVar4 + 0x18);
            if (0 < (int)uVar1) {
              uVar9 = 0;
              do {
                if (uVar1 <= uVar9) {
                  uVar3 = native_sub_43283c();
                    /* WARNING: Subroutine does not return */
                  native_sub_4327dc(uVar3,0);
                }
                plVar8 = *(long **)(lVar4 + (long)(int)uVar9 * 8 + 0x20);
                if (plVar8 == (long *)0x0) goto LAB_00573984;
                lVar5 = *plVar8;
                if ((ulong)*(ushort *)(lVar5 + 0x12a) != 0) {
                  uVar6 = 0;
                  piVar7 = (int *)(*(long *)(lVar5 + 0xb0) + 8);
                  do {
                    if (*(long *)(piVar7 + -2) ==
                        _MG_BlocksEngine2_Block_Instruction_I_BE2_Instruction_TypeInfo_12d4e28) {
                      puVar2 = (undefined8 *)(lVar5 + (long)*piVar7 * 0x10 + 0x138);
                      goto LAB_005736d4;
                    }
                    uVar6 = uVar6 + 1;
                    piVar7 = piVar7 + 4;
                  } while (uVar6 < *(ushort *)(lVar5 + 0x12a));
                }
                puVar2 = (undefined8 *)
                         native_sub_3c9b34(plVar8,
                                           _MG_BlocksEngine2_Block_Instruction_I_BE2_Instruction_TypeInfo_12d4e28
                                           ,0);
LAB_005736d4:
                plVar8 = (long *)(*(code *)*puVar2)(plVar8,puVar2[1]);
                if (plVar8 == (long *)0x0) goto LAB_00573984;
                lVar5 = *plVar8;
                if ((ulong)*(ushort *)(lVar5 + 0x12a) != 0) {
                  uVar6 = 0;
                  piVar7 = (int *)(*(long *)(lVar5 + 0xb0) + 8);
                  do {
                    if (*(long *)(piVar7 + -2) ==
                        _MG_BlocksEngine2_Block_Instruction_I_BE2_InstructionBase_TypeInfo_12d4e30)
                    {
                      puVar2 = (undefined8 *)(lVar5 + (long)(*piVar7 + 3) * 0x10 + 0x138);
                      goto LAB_00573740;
                    }
                    uVar6 = uVar6 + 1;
                    piVar7 = piVar7 + 4;
                  } while (uVar6 < *(ushort *)(lVar5 + 0x12a));
                }
                puVar2 = (undefined8 *)
                         native_sub_3c9b34(plVar8,
                                           _MG_BlocksEngine2_Block_Instruction_I_BE2_InstructionBase_TypeInfo_12d4e30
                                           ,3);
LAB_00573740:
                plVar8 = (long *)(*(code *)*puVar2)(plVar8,puVar2[1]);
                if (plVar8 == (long *)0x0) goto LAB_00573984;
                lVar5 = *plVar8;
                if ((ulong)*(ushort *)(lVar5 + 0x12a) != 0) {
                  uVar6 = 0;
                  piVar7 = (int *)(*(long *)(lVar5 + 0xb0) + 8);
                  do {
                    if (*(long *)(piVar7 + -2) ==
                        _MG_BlocksEngine2_Block_I_BE2_Block_TypeInfo_12d4dd8) {
                      puVar2 = (undefined8 *)(lVar5 + (long)(*piVar7 + 9) * 0x10 + 0x138);
                      goto LAB_005737ac;
                    }
                    uVar6 = uVar6 + 1;
                    piVar7 = piVar7 + 4;
                  } while (uVar6 < *(ushort *)(lVar5 + 0x12a));
                }
                puVar2 = (undefined8 *)
                         native_sub_3c9b34(plVar8,
                                           _MG_BlocksEngine2_Block_I_BE2_Block_TypeInfo_12d4dd8,9);
LAB_005737ac:
                (*(code *)*puVar2)(plVar8,0,puVar2[1]);
                uVar1 = *(uint *)(lVar4 + 0x18);
                uVar9 = uVar9 + 1;
              } while ((int)uVar9 < (int)uVar1);
            }
          }
          *(undefined1 *)(param_1 + 0x1c) = 0;
          return;
        }
      }
    }
LAB_0057414c:
                    /* WARNING: Subroutine does not return */
    native_sub_432810();
  }
LAB_00574150:
  uVar3 = native_sub_43283c();
                    /* WARNING: Subroutine does not return */
  native_sub_4327dc(uVar3,0);
}



/* MG_BlocksEngine2.Core.BE2_BlocksStack$$get_IsStepPlay @ 0x574204
 * bool MG_BlocksEngine2_Core_BE2_BlocksStack__get_IsStepPlay (MG_BlocksEngine2_Core_BE2_BlocksStack_o* __this, const MethodInfo* method); */

/* MG_BlocksEngine2.Core.BE2_BlocksStack$$get_IsStepPlay
   bool MG_BlocksEngine2_Core_BE2_BlocksStack__get_IsStepPlay
   (MG_BlocksEngine2_Core_BE2_BlocksStack_o* __this, const MethodInfo* method); */

undefined1 native_MG_BlocksEngine2_Core_BE2_BlocksStack__get_IsStepPlay_574204(long param_1)

{
  return *(undefined1 *)(param_1 + 0x5c);
}



/* MG_BlocksEngine2.Core.BE2_BlocksStack$$StepPlay @ 0x57420c
 * void MG_BlocksEngine2_Core_BE2_BlocksStack__StepPlay (MG_BlocksEngine2_Core_BE2_BlocksStack_o* __this, const MethodInfo* method); */

/* MG_BlocksEngine2.Core.BE2_BlocksStack$$StepPlay
   void MG_BlocksEngine2_Core_BE2_BlocksStack__StepPlay (MG_BlocksEngine2_Core_BE2_BlocksStack_o*
   __this, const MethodInfo* method); */

void native_MG_BlocksEngine2_Core_BE2_BlocksStack__StepPlay_57420c(long param_1)

{
  *(undefined1 *)(param_1 + 0x5c) = 1;
  native_MG_BlocksEngine2_Core_BE2_BlocksStack__PopulateStack_573a30();
  *(undefined1 *)(param_1 + 0x1c) = 1;
  return;
}



/* MG_BlocksEngine2.Core.BE2_BlocksStack$$Pause @ 0x574238
 * void MG_BlocksEngine2_Core_BE2_BlocksStack__Pause (MG_BlocksEngine2_Core_BE2_BlocksStack_o* __this, const MethodInfo* method); */

/* MG_BlocksEngine2.Core.BE2_BlocksStack$$Pause
   void MG_BlocksEngine2_Core_BE2_BlocksStack__Pause (MG_BlocksEngine2_Core_BE2_BlocksStack_o*
   __this, const MethodInfo* method); */

void native_MG_BlocksEngine2_Core_BE2_BlocksStack__Pause_574238(long param_1)

{
  *(undefined1 *)(param_1 + 0x5c) = 1;
  return;
}



/* MG_BlocksEngine2.Core.BE2_BlocksStack$$PopulateStack @ 0x573a30
 * void MG_BlocksEngine2_Core_BE2_BlocksStack__PopulateStack (MG_BlocksEngine2_Core_BE2_BlocksStack_o* __this, const MethodInfo* method); */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* MG_BlocksEngine2.Core.BE2_BlocksStack$$PopulateStack
   void MG_BlocksEngine2_Core_BE2_BlocksStack__PopulateStack
   (MG_BlocksEngine2_Core_BE2_BlocksStack_o* __this, const MethodInfo* method); */

void native_MG_BlocksEngine2_Core_BE2_BlocksStack__PopulateStack_573a30(long param_1)

{
  undefined8 uVar1;
  undefined8 *puVar2;
  long lVar3;
  ulong uVar4;
  int *piVar5;
  long *plVar6;
  
  if ((bRam000000000133ea94 & 1) == 0) {
    native_sub_43273c(&MG_BlocksEngine2_Block_Instruction_I_BE2_InstructionBase_TypeInfo_12d4e30);
    native_sub_43273c(&MG_BlocksEngine2_Block_Instruction_I_BE2_Instruction___TypeInfo_12d3240);
    native_sub_43273c(&MG_BlocksEngine2_Block_Instruction_I_BE2_Instruction_TypeInfo_12d4e28);
    bRam000000000133ea94 = 1;
  }
  uVar1 = native_sub_432750(_MG_BlocksEngine2_Block_Instruction_I_BE2_Instruction___TypeInfo_12d3240
                            ,0);
  *(undefined8 *)(param_1 + 0x28) = uVar1;
  native_sub_4326e0((undefined8 *)(param_1 + 0x28),uVar1);
  plVar6 = *(long **)(param_1 + 0x38);
  if (plVar6 != (long *)0x0) {
    lVar3 = *plVar6;
    if ((ulong)*(ushort *)(lVar3 + 0x12a) != 0) {
      uVar4 = 0;
      piVar5 = (int *)(*(long *)(lVar3 + 0xb0) + 8);
      do {
        if (*(long *)(piVar5 + -2) ==
            _MG_BlocksEngine2_Block_Instruction_I_BE2_Instruction_TypeInfo_12d4e28) {
          puVar2 = (undefined8 *)(lVar3 + (long)*piVar5 * 0x10 + 0x138);
          goto LAB_00573b04;
        }
        uVar4 = uVar4 + 1;
        piVar5 = piVar5 + 4;
      } while (uVar4 < *(ushort *)(lVar3 + 0x12a));
    }
    puVar2 = (undefined8 *)
             native_sub_3c9b34(plVar6,
                               _MG_BlocksEngine2_Block_Instruction_I_BE2_Instruction_TypeInfo_12d4e28
                               ,0);
LAB_00573b04:
    plVar6 = (long *)(*(code *)*puVar2)(plVar6,puVar2[1]);
    if (plVar6 != (long *)0x0) {
      lVar3 = *plVar6;
      if ((ulong)*(ushort *)(lVar3 + 0x12a) != 0) {
        uVar4 = 0;
        piVar5 = (int *)(*(long *)(lVar3 + 0xb0) + 8);
        do {
          if (*(long *)(piVar5 + -2) ==
              _MG_BlocksEngine2_Block_Instruction_I_BE2_InstructionBase_TypeInfo_12d4e30) {
            puVar2 = (undefined8 *)(lVar3 + (long)(*piVar5 + 3) * 0x10 + 0x138);
            goto LAB_00573b78;
          }
          uVar4 = uVar4 + 1;
          piVar5 = piVar5 + 4;
        } while (uVar4 < *(ushort *)(lVar3 + 0x12a));
      }
      puVar2 = (undefined8 *)
               native_sub_3c9b34(plVar6,
                                 _MG_BlocksEngine2_Block_Instruction_I_BE2_InstructionBase_TypeInfo_12d4e30
                                 ,3);
LAB_00573b78:
      uVar1 = (*(code *)*puVar2)(plVar6,puVar2[1]);
      native_MG_BlocksEngine2_Core_BE2_BlocksStack__PopulateStackRecursive_574244(param_1,uVar1);
      if (*(long *)(param_1 + 0x28) != 0) {
        *(int *)(param_1 + 0x18) = (int)*(undefined8 *)(*(long *)(param_1 + 0x28) + 0x18);
        return;
      }
    }
  }
                    /* WARNING: Subroutine does not return */
  native_sub_432810();
}



/* MG_BlocksEngine2.Core.BE2_BlocksStack$$PopulateStackRecursive @ 0x574244
 * void MG_BlocksEngine2_Core_BE2_BlocksStack__PopulateStackRecursive (MG_BlocksEngine2_Core_BE2_BlocksStack_o* __this, MG_BlocksEngine2_Block_I_BE2_Block_o* parentBlock, const MethodInfo* method); */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* MG_BlocksEngine2.Core.BE2_BlocksStack$$PopulateStackRecursive
   void MG_BlocksEngine2_Core_BE2_BlocksStack__PopulateStackRecursive
   (MG_BlocksEngine2_Core_BE2_BlocksStack_o* __this, MG_BlocksEngine2_Block_I_BE2_Block_o*
   parentBlock, const MethodInfo* method); */

void native_MG_BlocksEngine2_Core_BE2_BlocksStack__PopulateStackRecursive_574244
               (long param_1,long *param_2)

{
  int iVar1;
  undefined8 *puVar2;
  long *plVar3;
  long *plVar4;
  long *plVar5;
  long *plVar6;
  long *plVar7;
  int iVar8;
  long lVar9;
  ulong uVar10;
  int *piVar11;
  undefined8 uVar12;
  uint uVar13;
  uint uVar14;
  undefined8 uStack_68;
  
  if ((bRam000000000133ea95 & 1) == 0) {
    native_sub_43273c(&
                      Method_MG_BlocksEngine2_Utils_BE2_ArrayUtils_AddReturn_I_BE2_Instruction____12e20d0
                     );
    native_sub_43273c(&
                      Method_MG_BlocksEngine2_Utils_BE2_ArrayUtils_FindAll_I_BE2_BlockSection____12e20e0
                     );
    native_sub_43273c(&BE2_Ins_FunctionBlock_TypeInfo_12d3a00);
    native_sub_43273c(&MG_BlocksEngine2_Block_I_BE2_BlockLayout_TypeInfo_12d4de0);
    native_sub_43273c(&MG_BlocksEngine2_Block_I_BE2_BlockSectionBody_TypeInfo_12d4df0);
    native_sub_43273c(&MG_BlocksEngine2_Block_I_BE2_BlockSection_TypeInfo_12d4de8);
    native_sub_43273c(&MG_BlocksEngine2_Block_I_BE2_Block_TypeInfo_12d4dd8);
    native_sub_43273c(&MG_BlocksEngine2_Block_Instruction_I_BE2_InstructionBase_TypeInfo_12d4e30);
    native_sub_43273c(&int___TypeInfo_12d3258);
    native_sub_43273c(&Method_System_Predicate_I_BE2_BlockSection___ctor___12ddae8);
    native_sub_43273c(&System_Predicate_I_BE2_BlockSection__TypeInfo_12d2d90);
    native_sub_43273c(&
                      Method_MG_BlocksEngine2_Core_BE2_BlocksStack___c__PopulateStackRecursive_b__49_0___12e9600
                     );
    native_sub_43273c(&MG_BlocksEngine2_Core_BE2_BlocksStack___c_TypeInfo_12d6fd8);
    bRam000000000133ea95 = 1;
  }
  uStack_68 = 0;
  if (param_2 != (long *)0x0) {
    lVar9 = *param_2;
    if ((ulong)*(ushort *)(lVar9 + 0x12a) != 0) {
      uVar10 = 0;
      piVar11 = (int *)(*(long *)(lVar9 + 0xb0) + 8);
      do {
        if (*(long *)(piVar11 + -2) == _MG_BlocksEngine2_Block_I_BE2_Block_TypeInfo_12d4dd8) {
          puVar2 = (undefined8 *)(lVar9 + (long)(*piVar11 + 4) * 0x10 + 0x138);
          goto LAB_00574384;
        }
        uVar10 = uVar10 + 1;
        piVar11 = piVar11 + 4;
      } while (uVar10 < *(ushort *)(lVar9 + 0x12a));
    }
    puVar2 = (undefined8 *)
             native_sub_3c9b34(param_2,_MG_BlocksEngine2_Block_I_BE2_Block_TypeInfo_12d4dd8,4);
LAB_00574384:
    plVar3 = (long *)(*(code *)*puVar2)(param_2,puVar2[1]);
    plVar4 = (long *)native_sub_4327f8(plVar3,
                                       _MG_BlocksEngine2_Block_Instruction_I_BE2_InstructionBase_TypeInfo_12d4e30
                                      );
    if (plVar4 != (long *)0x0) {
      lVar9 = *plVar4;
      uVar12 = *(undefined8 *)(param_1 + 0x30);
      if ((ulong)*(ushort *)(lVar9 + 0x12a) != 0) {
        uVar10 = 0;
        piVar11 = (int *)(*(long *)(lVar9 + 0xb0) + 8);
        do {
          if (*(long *)(piVar11 + -2) ==
              _MG_BlocksEngine2_Block_Instruction_I_BE2_InstructionBase_TypeInfo_12d4e30) {
            puVar2 = (undefined8 *)(lVar9 + (long)(*piVar11 + 7) * 0x10 + 0x138);
            goto LAB_00574408;
          }
          uVar10 = uVar10 + 1;
          piVar11 = piVar11 + 4;
        } while (uVar10 < *(ushort *)(lVar9 + 0x12a));
      }
      puVar2 = (undefined8 *)
               native_sub_3c9b34(plVar4,
                                 _MG_BlocksEngine2_Block_Instruction_I_BE2_InstructionBase_TypeInfo_12d4e30
                                 ,7);
LAB_00574408:
      (*(code *)*puVar2)(plVar4,uVar12,puVar2[1]);
      lVar9 = *plVar4;
      if ((ulong)*(ushort *)(lVar9 + 0x12a) != 0) {
        uVar10 = 0;
        piVar11 = (int *)(*(long *)(lVar9 + 0xb0) + 8);
        do {
          if (*(long *)(piVar11 + -2) ==
              _MG_BlocksEngine2_Block_Instruction_I_BE2_InstructionBase_TypeInfo_12d4e30) {
            puVar2 = (undefined8 *)(lVar9 + (long)(*piVar11 + 5) * 0x10 + 0x138);
            goto LAB_00574470;
          }
          uVar10 = uVar10 + 1;
          piVar11 = piVar11 + 4;
        } while (uVar10 < *(ushort *)(lVar9 + 0x12a));
      }
      puVar2 = (undefined8 *)
               native_sub_3c9b34(plVar4,
                                 _MG_BlocksEngine2_Block_Instruction_I_BE2_InstructionBase_TypeInfo_12d4e30
                                 ,5);
LAB_00574470:
      (*(code *)*puVar2)(plVar4,param_1,puVar2[1]);
      lVar9 = *plVar4;
      if ((ulong)*(ushort *)(lVar9 + 0x12a) != 0) {
        uVar10 = 0;
        piVar11 = (int *)(*(long *)(lVar9 + 0xb0) + 8);
        do {
          if (*(long *)(piVar11 + -2) ==
              _MG_BlocksEngine2_Block_Instruction_I_BE2_InstructionBase_TypeInfo_12d4e30) {
            puVar2 = (undefined8 *)(lVar9 + (long)(*piVar11 + 3) * 0x10 + 0x138);
            goto LAB_005744d8;
          }
          uVar10 = uVar10 + 1;
          piVar11 = piVar11 + 4;
        } while (uVar10 < *(ushort *)(lVar9 + 0x12a));
      }
      puVar2 = (undefined8 *)
               native_sub_3c9b34(plVar4,
                                 _MG_BlocksEngine2_Block_Instruction_I_BE2_InstructionBase_TypeInfo_12d4e30
                                 ,3);
LAB_005744d8:
      plVar5 = (long *)(*(code *)*puVar2)(plVar4,puVar2[1]);
      if (plVar5 != (long *)0x0) {
        lVar9 = *plVar5;
        if ((ulong)*(ushort *)(lVar9 + 0x12a) != 0) {
          uVar10 = 0;
          piVar11 = (int *)(*(long *)(lVar9 + 0xb0) + 8);
          do {
            if (*(long *)(piVar11 + -2) == _MG_BlocksEngine2_Block_I_BE2_Block_TypeInfo_12d4dd8) {
              puVar2 = (undefined8 *)(lVar9 + (long)(*piVar11 + 3) * 0x10 + 0x138);
              goto LAB_0057454c;
            }
            uVar10 = uVar10 + 1;
            piVar11 = piVar11 + 4;
          } while (uVar10 < *(ushort *)(lVar9 + 0x12a));
        }
        puVar2 = (undefined8 *)
                 native_sub_3c9b34(plVar5,_MG_BlocksEngine2_Block_I_BE2_Block_TypeInfo_12d4dd8,3);
LAB_0057454c:
        plVar5 = (long *)(*(code *)*puVar2)(plVar5,puVar2[1]);
        if (plVar5 != (long *)0x0) {
          lVar9 = *plVar5;
          if ((ulong)*(ushort *)(lVar9 + 0x12a) != 0) {
            uVar10 = 0;
            piVar11 = (int *)(*(long *)(lVar9 + 0xb0) + 8);
            do {
              if (*(long *)(piVar11 + -2) ==
                  _MG_BlocksEngine2_Block_I_BE2_BlockLayout_TypeInfo_12d4de0) {
                puVar2 = (undefined8 *)(lVar9 + (long)(*piVar11 + 2) * 0x10 + 0x138);
                goto LAB_005745c0;
              }
              uVar10 = uVar10 + 1;
              piVar11 = piVar11 + 4;
            } while (uVar10 < *(ushort *)(lVar9 + 0x12a));
          }
          puVar2 = (undefined8 *)
                   native_sub_3c9b34(plVar5,
                                     _MG_BlocksEngine2_Block_I_BE2_BlockLayout_TypeInfo_12d4de0,2);
LAB_005745c0:
          uStack_68 = (*(code *)*puVar2)(plVar5,puVar2[1]);
          if (((*(byte *)(_MG_BlocksEngine2_Core_BE2_BlocksStack___c_TypeInfo_12d6fd8 + 0x133) >> 2
               & 1) != 0) &&
             (*(int *)(_MG_BlocksEngine2_Core_BE2_BlocksStack___c_TypeInfo_12d6fd8 + 0xe0) == 0)) {
            native_sub_4327ec(_MG_BlocksEngine2_Core_BE2_BlocksStack___c_TypeInfo_12d6fd8);
          }
          puVar2 = *(undefined8 **)
                    (_MG_BlocksEngine2_Core_BE2_BlocksStack___c_TypeInfo_12d6fd8 + 0xb8);
          lVar9 = puVar2[1];
          if (lVar9 == 0) {
            if (((*(byte *)(_MG_BlocksEngine2_Core_BE2_BlocksStack___c_TypeInfo_12d6fd8 + 0x133) >>
                  2 & 1) != 0) &&
               (*(int *)(_MG_BlocksEngine2_Core_BE2_BlocksStack___c_TypeInfo_12d6fd8 + 0xe0) == 0))
            {
              native_sub_4327ec(_MG_BlocksEngine2_Core_BE2_BlocksStack___c_TypeInfo_12d6fd8);
              puVar2 = *(undefined8 **)
                        (_MG_BlocksEngine2_Core_BE2_BlocksStack___c_TypeInfo_12d6fd8 + 0xb8);
            }
            uVar12 = *puVar2;
            lVar9 = native_sub_432808(_System_Predicate_I_BE2_BlockSection__TypeInfo_12d2d90);
            native_System_Predicate_BaseInvokableCall____ctor_ac31d4
                      (lVar9,uVar12,
                       _Method_MG_BlocksEngine2_Core_BE2_BlocksStack___c__PopulateStackRecursive_b__49_0___12e9600
                       ,_Method_System_Predicate_I_BE2_BlockSection___ctor___12ddae8);
            plVar5 = (long *)(*(long *)(_MG_BlocksEngine2_Core_BE2_BlocksStack___c_TypeInfo_12d6fd8
                                       + 0xb8) + 8);
            *plVar5 = lVar9;
            native_sub_4326e0(plVar5,lVar9);
          }
          lVar9 = native_MG_BlocksEngine2_Utils_BE2_ArrayUtils__FindAll_I_BE2_BlockSection__49b540
                            (&uStack_68,lVar9,
                             _Method_MG_BlocksEngine2_Utils_BE2_ArrayUtils_FindAll_I_BE2_BlockSection____12e20e0
                            );
          if (lVar9 != 0) {
            uVar12 = native_sub_432750(_int___TypeInfo_12d3258,*(int *)(lVar9 + 0x18) + 1);
            lVar9 = *plVar4;
            if ((ulong)*(ushort *)(lVar9 + 0x12a) != 0) {
              uVar10 = 0;
              piVar11 = (int *)(*(long *)(lVar9 + 0xb0) + 8);
              do {
                if (*(long *)(piVar11 + -2) ==
                    _MG_BlocksEngine2_Block_Instruction_I_BE2_InstructionBase_TypeInfo_12d4e30) {
                  puVar2 = (undefined8 *)(lVar9 + (long)(*piVar11 + 2) * 0x10 + 0x138);
                  goto LAB_00574700;
                }
                uVar10 = uVar10 + 1;
                piVar11 = piVar11 + 4;
              } while (uVar10 < *(ushort *)(lVar9 + 0x12a));
            }
            puVar2 = (undefined8 *)
                     native_sub_3c9b34(plVar4,
                                       _MG_BlocksEngine2_Block_Instruction_I_BE2_InstructionBase_TypeInfo_12d4e30
                                       ,2);
LAB_00574700:
            (*(code *)*puVar2)(plVar4,uVar12,puVar2[1]);
            plVar5 = (long *)(param_1 + 0x28);
            lVar9 = native_MG_BlocksEngine2_Utils_BE2_ArrayUtils__AddReturn_I_BE2_Block__49b4a4
                              (*plVar5,plVar3,
                               _Method_MG_BlocksEngine2_Utils_BE2_ArrayUtils_AddReturn_I_BE2_Instruction____12e20d0
                              );
            *plVar5 = lVar9;
            native_sub_4326e0(plVar5,lVar9);
            lVar9 = *param_2;
            if ((ulong)*(ushort *)(lVar9 + 0x12a) != 0) {
              uVar10 = 0;
              piVar11 = (int *)(*(long *)(lVar9 + 0xb0) + 8);
              do {
                if (*(long *)(piVar11 + -2) == _MG_BlocksEngine2_Block_I_BE2_Block_TypeInfo_12d4dd8)
                {
                  puVar2 = (undefined8 *)(lVar9 + (long)(*piVar11 + 3) * 0x10 + 0x138);
                  goto LAB_0057479c;
                }
                uVar10 = uVar10 + 1;
                piVar11 = piVar11 + 4;
              } while (uVar10 < *(ushort *)(lVar9 + 0x12a));
            }
            puVar2 = (undefined8 *)
                     native_sub_3c9b34(param_2,_MG_BlocksEngine2_Block_I_BE2_Block_TypeInfo_12d4dd8,
                                       3);
LAB_0057479c:
            plVar6 = (long *)(*(code *)*puVar2)(param_2,puVar2[1]);
            if (plVar6 != (long *)0x0) {
              lVar9 = *plVar6;
              if ((ulong)*(ushort *)(lVar9 + 0x12a) != 0) {
                uVar10 = 0;
                piVar11 = (int *)(*(long *)(lVar9 + 0xb0) + 8);
                do {
                  if (*(long *)(piVar11 + -2) ==
                      _MG_BlocksEngine2_Block_I_BE2_BlockLayout_TypeInfo_12d4de0) {
                    puVar2 = (undefined8 *)(lVar9 + (long)(*piVar11 + 2) * 0x10 + 0x138);
                    goto LAB_00574810;
                  }
                  uVar10 = uVar10 + 1;
                  piVar11 = piVar11 + 4;
                } while (uVar10 < *(ushort *)(lVar9 + 0x12a));
              }
              puVar2 = (undefined8 *)
                       native_sub_3c9b34(plVar6,
                                         _MG_BlocksEngine2_Block_I_BE2_BlockLayout_TypeInfo_12d4de0,
                                         2);
LAB_00574810:
              lVar9 = (*(code *)*puVar2)(plVar6,puVar2[1]);
              if (lVar9 != 0) {
                iVar1 = *(int *)(lVar9 + 0x18);
                if (iVar1 < 1) {
                  uVar13 = 0;
                }
                else {
                  uVar13 = 0;
                  uVar14 = 0;
                  do {
                    lVar9 = *param_2;
                    if ((ulong)*(ushort *)(lVar9 + 0x12a) != 0) {
                      uVar10 = 0;
                      piVar11 = (int *)(*(long *)(lVar9 + 0xb0) + 8);
                      do {
                        if (*(long *)(piVar11 + -2) ==
                            _MG_BlocksEngine2_Block_I_BE2_Block_TypeInfo_12d4dd8) {
                          puVar2 = (undefined8 *)(lVar9 + (long)(*piVar11 + 3) * 0x10 + 0x138);
                          goto LAB_005748a8;
                        }
                        uVar10 = uVar10 + 1;
                        piVar11 = piVar11 + 4;
                      } while (uVar10 < *(ushort *)(lVar9 + 0x12a));
                    }
                    puVar2 = (undefined8 *)
                             native_sub_3c9b34(param_2,
                                               _MG_BlocksEngine2_Block_I_BE2_Block_TypeInfo_12d4dd8,
                                               3);
LAB_005748a8:
                    plVar6 = (long *)(*(code *)*puVar2)(param_2,puVar2[1]);
                    if (plVar6 == (long *)0x0) goto LAB_00574ddc;
                    lVar9 = *plVar6;
                    if ((ulong)*(ushort *)(lVar9 + 0x12a) != 0) {
                      uVar10 = 0;
                      piVar11 = (int *)(*(long *)(lVar9 + 0xb0) + 8);
                      do {
                        if (*(long *)(piVar11 + -2) ==
                            _MG_BlocksEngine2_Block_I_BE2_BlockLayout_TypeInfo_12d4de0) {
                          puVar2 = (undefined8 *)(lVar9 + (long)(*piVar11 + 2) * 0x10 + 0x138);
                          goto LAB_0057491c;
                        }
                        uVar10 = uVar10 + 1;
                        piVar11 = piVar11 + 4;
                      } while (uVar10 < *(ushort *)(lVar9 + 0x12a));
                    }
                    puVar2 = (undefined8 *)
                             native_sub_3c9b34(plVar6,
                                               _MG_BlocksEngine2_Block_I_BE2_BlockLayout_TypeInfo_12d4de0
                                               ,2);
LAB_0057491c:
                    lVar9 = (*(code *)*puVar2)(plVar6,puVar2[1]);
                    if (lVar9 == 0) goto LAB_00574ddc;
                    if (*(uint *)(lVar9 + 0x18) <= uVar14) goto LAB_00574dd0;
                    plVar6 = *(long **)(lVar9 + (long)(int)uVar14 * 8 + 0x20);
                    if (plVar6 == (long *)0x0) goto LAB_00574ddc;
                    lVar9 = *plVar6;
                    if ((ulong)*(ushort *)(lVar9 + 0x12a) != 0) {
                      uVar10 = 0;
                      piVar11 = (int *)(*(long *)(lVar9 + 0xb0) + 8);
                      do {
                        if (*(long *)(piVar11 + -2) ==
                            _MG_BlocksEngine2_Block_I_BE2_BlockSection_TypeInfo_12d4de8) {
                          puVar2 = (undefined8 *)(lVar9 + (long)(*piVar11 + 2) * 0x10 + 0x138);
                          goto LAB_0057499c;
                        }
                        uVar10 = uVar10 + 1;
                        piVar11 = piVar11 + 4;
                      } while (uVar10 < *(ushort *)(lVar9 + 0x12a));
                    }
                    puVar2 = (undefined8 *)
                             native_sub_3c9b34(plVar6,
                                               _MG_BlocksEngine2_Block_I_BE2_BlockSection_TypeInfo_12d4de8
                                               ,2);
LAB_0057499c:
                    lVar9 = (*(code *)*puVar2)(plVar6,puVar2[1]);
                    if (lVar9 != 0) {
                      lVar9 = *plVar4;
                      if ((ulong)*(ushort *)(lVar9 + 0x12a) != 0) {
                        uVar10 = 0;
                        piVar11 = (int *)(*(long *)(lVar9 + 0xb0) + 8);
                        do {
                          if (*(long *)(piVar11 + -2) ==
                              _MG_BlocksEngine2_Block_Instruction_I_BE2_InstructionBase_TypeInfo_12d4e30
                             ) {
                            puVar2 = (undefined8 *)(lVar9 + (long)(*piVar11 + 1) * 0x10 + 0x138);
                            goto LAB_00574a04;
                          }
                          uVar10 = uVar10 + 1;
                          piVar11 = piVar11 + 4;
                        } while (uVar10 < *(ushort *)(lVar9 + 0x12a));
                      }
                      puVar2 = (undefined8 *)
                               native_sub_3c9b34(plVar4,
                                                 _MG_BlocksEngine2_Block_Instruction_I_BE2_InstructionBase_TypeInfo_12d4e30
                                                 ,1);
LAB_00574a04:
                      lVar9 = (*(code *)*puVar2)(plVar4,puVar2[1]);
                      if ((*plVar5 == 0) || (lVar9 == 0)) goto LAB_00574ddc;
                      if (*(uint *)(lVar9 + 0x18) <= uVar13) goto LAB_00574dd0;
                      *(int *)(lVar9 + (long)(int)uVar13 * 4 + 0x20) =
                           (int)*(undefined8 *)(*plVar5 + 0x18);
                      lVar9 = *plVar6;
                      if ((ulong)*(ushort *)(lVar9 + 0x12a) != 0) {
                        uVar10 = 0;
                        piVar11 = (int *)(*(long *)(lVar9 + 0xb0) + 8);
                        do {
                          if (*(long *)(piVar11 + -2) ==
                              _MG_BlocksEngine2_Block_I_BE2_BlockSection_TypeInfo_12d4de8) {
                            puVar2 = (undefined8 *)(lVar9 + (long)(*piVar11 + 2) * 0x10 + 0x138);
                            goto LAB_00574a8c;
                          }
                          uVar10 = uVar10 + 1;
                          piVar11 = piVar11 + 4;
                        } while (uVar10 < *(ushort *)(lVar9 + 0x12a));
                      }
                      puVar2 = (undefined8 *)
                               native_sub_3c9b34(plVar6,
                                                 _MG_BlocksEngine2_Block_I_BE2_BlockSection_TypeInfo_12d4de8
                                                 ,2);
LAB_00574a8c:
                      plVar7 = (long *)(*(code *)*puVar2)(plVar6,puVar2[1]);
                      if (plVar7 == (long *)0x0) goto LAB_00574ddc;
                      lVar9 = *plVar7;
                      if ((ulong)*(ushort *)(lVar9 + 0x12a) != 0) {
                        uVar10 = 0;
                        piVar11 = (int *)(*(long *)(lVar9 + 0xb0) + 8);
                        do {
                          if (*(long *)(piVar11 + -2) ==
                              _MG_BlocksEngine2_Block_I_BE2_BlockSectionBody_TypeInfo_12d4df0) {
                            puVar2 = (undefined8 *)(lVar9 + (long)(*piVar11 + 8) * 0x10 + 0x138);
                            goto LAB_00574b00;
                          }
                          uVar10 = uVar10 + 1;
                          piVar11 = piVar11 + 4;
                        } while (uVar10 < *(ushort *)(lVar9 + 0x12a));
                      }
                      puVar2 = (undefined8 *)
                               native_sub_3c9b34(plVar7,
                                                 _MG_BlocksEngine2_Block_I_BE2_BlockSectionBody_TypeInfo_12d4df0
                                                 ,8);
LAB_00574b00:
                      (*(code *)*puVar2)(plVar7,puVar2[1]);
                      lVar9 = *plVar6;
                      if ((ulong)*(ushort *)(lVar9 + 0x12a) != 0) {
                        uVar10 = 0;
                        piVar11 = (int *)(*(long *)(lVar9 + 0xb0) + 8);
                        do {
                          if (*(long *)(piVar11 + -2) ==
                              _MG_BlocksEngine2_Block_I_BE2_BlockSection_TypeInfo_12d4de8) {
                            puVar2 = (undefined8 *)(lVar9 + (long)(*piVar11 + 2) * 0x10 + 0x138);
                            goto LAB_00574b64;
                          }
                          uVar10 = uVar10 + 1;
                          piVar11 = piVar11 + 4;
                        } while (uVar10 < *(ushort *)(lVar9 + 0x12a));
                      }
                      puVar2 = (undefined8 *)
                               native_sub_3c9b34(plVar6,
                                                 _MG_BlocksEngine2_Block_I_BE2_BlockSection_TypeInfo_12d4de8
                                                 ,2);
LAB_00574b64:
                      plVar6 = (long *)(*(code *)*puVar2)(plVar6,puVar2[1]);
                      if (plVar6 == (long *)0x0) goto LAB_00574ddc;
                      lVar9 = *plVar6;
                      if ((ulong)*(ushort *)(lVar9 + 0x12a) != 0) {
                        uVar10 = 0;
                        piVar11 = (int *)(*(long *)(lVar9 + 0xb0) + 8);
                        do {
                          if (*(long *)(piVar11 + -2) ==
                              _MG_BlocksEngine2_Block_I_BE2_BlockSectionBody_TypeInfo_12d4df0) {
                            puVar2 = (undefined8 *)(lVar9 + (long)(*piVar11 + 2) * 0x10 + 0x138);
                            goto LAB_00574bd8;
                          }
                          uVar10 = uVar10 + 1;
                          piVar11 = piVar11 + 4;
                        } while (uVar10 < *(ushort *)(lVar9 + 0x12a));
                      }
                      puVar2 = (undefined8 *)
                               native_sub_3c9b34(plVar6,
                                                 _MG_BlocksEngine2_Block_I_BE2_BlockSectionBody_TypeInfo_12d4df0
                                                 ,2);
LAB_00574bd8:
                      lVar9 = (*(code *)*puVar2)(plVar6,puVar2[1]);
                      if (lVar9 == 0) goto LAB_00574ddc;
                      iVar8 = (int)*(ulong *)(lVar9 + 0x18);
                      if (0 < iVar8) {
                        if ((*(ulong *)(lVar9 + 0x18) & 0xffffffff) == 0) goto LAB_00574dd0;
                        uVar10 = 0;
                        while( true ) {
                          native_MG_BlocksEngine2_Core_BE2_BlocksStack__PopulateStackRecursive_574244
                                    (param_1,*(undefined8 *)(lVar9 + 0x20 + uVar10 * 8));
                          uVar10 = uVar10 + 1;
                          if ((long)iVar8 <= (long)uVar10) break;
                          if (*(uint *)(lVar9 + 0x18) <= uVar10) goto LAB_00574dd0;
                        }
                      }
                      uVar13 = uVar13 + 1;
                      if (plVar3 != (long *)0x0) {
                        if ((*(byte *)(_BE2_Ins_FunctionBlock_TypeInfo_12d3a00 + 300) <=
                             *(byte *)(*plVar3 + 300)) &&
                           (*(long *)(*(long *)(*plVar3 + 200) +
                                      (ulong)*(byte *)(_BE2_Ins_FunctionBlock_TypeInfo_12d3a00 + 300
                                                      ) * 8 + -8) ==
                            _BE2_Ins_FunctionBlock_TypeInfo_12d3a00)) goto LAB_00574cac;
                      }
                      lVar9 = native_MG_BlocksEngine2_Utils_BE2_ArrayUtils__AddReturn_I_BE2_Block__49b4a4
                                        (*plVar5,plVar3,
                                         _Method_MG_BlocksEngine2_Utils_BE2_ArrayUtils_AddReturn_I_BE2_Instruction____12e20d0
                                        );
                      *plVar5 = lVar9;
                      native_sub_4326e0(plVar5,lVar9);
                    }
LAB_00574cac:
                    uVar14 = uVar14 + 1;
                  } while ((int)uVar14 < iVar1);
                }
                lVar9 = *plVar4;
                if ((ulong)*(ushort *)(lVar9 + 0x12a) != 0) {
                  uVar10 = 0;
                  piVar11 = (int *)(*(long *)(lVar9 + 0xb0) + 8);
                  do {
                    if (*(long *)(piVar11 + -2) ==
                        _MG_BlocksEngine2_Block_Instruction_I_BE2_InstructionBase_TypeInfo_12d4e30)
                    {
                      puVar2 = (undefined8 *)(lVar9 + (long)(*piVar11 + 1) * 0x10 + 0x138);
                      goto LAB_00574d1c;
                    }
                    uVar10 = uVar10 + 1;
                    piVar11 = piVar11 + 4;
                  } while (uVar10 < *(ushort *)(lVar9 + 0x12a));
                }
                puVar2 = (undefined8 *)
                         native_sub_3c9b34(plVar4,
                                           _MG_BlocksEngine2_Block_Instruction_I_BE2_InstructionBase_TypeInfo_12d4e30
                                           ,1);
LAB_00574d1c:
                lVar9 = (*(code *)*puVar2)(plVar4,puVar2[1]);
                if ((*plVar5 != 0) && (lVar9 != 0)) {
                  if (*(uint *)(lVar9 + 0x18) <= uVar13) {
LAB_00574dd0:
                    uVar12 = native_sub_43283c();
                    /* WARNING: Subroutine does not return */
                    native_sub_4327dc(uVar12,0);
                  }
                  *(int *)(lVar9 + (long)(int)uVar13 * 4 + 0x20) =
                       (int)*(undefined8 *)(*plVar5 + 0x18);
                  lVar9 = *plVar4;
                  if ((ulong)*(ushort *)(lVar9 + 0x12a) != 0) {
                    uVar10 = 0;
                    piVar11 = (int *)(*(long *)(lVar9 + 0xb0) + 8);
                    do {
                      if (*(long *)(piVar11 + -2) ==
                          _MG_BlocksEngine2_Block_Instruction_I_BE2_InstructionBase_TypeInfo_12d4e30
                         ) {
                        puVar2 = (undefined8 *)(lVar9 + (long)(*piVar11 + 0xd) * 0x10 + 0x138);
                        goto LAB_00574da4;
                      }
                      uVar10 = uVar10 + 1;
                      piVar11 = piVar11 + 4;
                    } while (uVar10 < *(ushort *)(lVar9 + 0x12a));
                  }
                  puVar2 = (undefined8 *)
                           native_sub_3c9b34(plVar4,
                                             _MG_BlocksEngine2_Block_Instruction_I_BE2_InstructionBase_TypeInfo_12d4e30
                                             ,0xd);
LAB_00574da4:
                  (*(code *)*puVar2)(plVar4,puVar2[1]);
                  return;
                }
              }
            }
          }
        }
      }
    }
  }
LAB_00574ddc:
                    /* WARNING: Subroutine does not return */
  native_sub_432810();
}



/* MG_BlocksEngine2.Core.BE2_BlocksStack$$.ctor @ 0x574de0
 * void MG_BlocksEngine2_Core_BE2_BlocksStack___ctor (MG_BlocksEngine2_Core_BE2_BlocksStack_o* __this, const MethodInfo* method); */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* MG_BlocksEngine2.Core.BE2_BlocksStack$$.ctor
   void MG_BlocksEngine2_Core_BE2_BlocksStack___ctor (MG_BlocksEngine2_Core_BE2_BlocksStack_o*
   __this, const MethodInfo* method); */

undefined1  [16] native_MG_BlocksEngine2_Core_BE2_BlocksStack___ctor_574de0(ulong param_1)

{
  undefined8 uVar1;
  undefined1 auVar2 [16];
  
  if ((bRam000000000133ea96 & 1) == 0) {
    native_sub_43273c(&Method_UnityEngine_Events_UnityEvent_I_BE2_Instruction___ctor___12de470);
    native_sub_43273c(&UnityEngine_Events_UnityEvent_I_BE2_Instruction__TypeInfo_12d2f88);
    native_sub_43273c(&UnityEngine_Events_UnityEvent_TypeInfo_12d65d8);
    bRam000000000133ea96 = 1;
  }
  uVar1 = native_sub_432808(_UnityEngine_Events_UnityEvent_TypeInfo_12d65d8);
  native_UnityEngine_Events_UnityEvent___ctor_7733e0(uVar1,0);
  *(undefined8 *)(param_1 + 0x40) = uVar1;
  native_sub_4326e0((undefined8 *)(param_1 + 0x40),uVar1);
  uVar1 = native_sub_432808(_UnityEngine_Events_UnityEvent_TypeInfo_12d65d8);
  native_UnityEngine_Events_UnityEvent___ctor_7733e0(uVar1,0);
  *(undefined8 *)(param_1 + 0x48) = uVar1;
  native_sub_4326e0(param_1 + 0x48,uVar1);
  uVar1 = native_sub_432808(_UnityEngine_Events_UnityEvent_I_BE2_Instruction__TypeInfo_12d2f88);
  native_UnityEngine_Events_UnityEvent_BaseEventData____ctor_89fe00
            (uVar1,_Method_UnityEngine_Events_UnityEvent_I_BE2_Instruction___ctor___12de470);
  *(undefined8 *)(param_1 + 0x50) = uVar1;
  native_sub_4326e0(param_1 + 0x50,uVar1);
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


