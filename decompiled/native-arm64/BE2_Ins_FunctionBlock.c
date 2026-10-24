/* ARM64 IL2CPP native pseudocode from Ghidra.
 * Recovered implementation, not original C# source.
 * Function boundaries follow the IL2CPP method address table. */


/* BE2_Ins_FunctionBlock$$.ctor @ 0x606ae4
 * void BE2_Ins_FunctionBlock___ctor (BE2_Ins_FunctionBlock_o* __this, BE2_Ins_DefineFunction_o* defineInstruction, const MethodInfo* method); */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* BE2_Ins_FunctionBlock$$.ctor
   void BE2_Ins_FunctionBlock___ctor (BE2_Ins_FunctionBlock_o* __this, BE2_Ins_DefineFunction_o*
   defineInstruction, const MethodInfo* method); */

void native_BE2_Ins_FunctionBlock___ctor_606ae4(long param_1,undefined8 param_2)

{
  ulong *puVar1;
  char cVar2;
  bool bVar3;
  undefined8 uVar4;
  undefined8 *puVar5;
  
  if ((bRam000000000133ee0d & 1) == 0) {
    native_sub_43273c(&Method_System_Collections_Generic_List_string___ctor___12dce88);
    native_sub_43273c(&System_Collections_Generic_List_string__TypeInfo_12d2b60);
    bRam000000000133ee0d = 1;
  }
  uVar4 = native_sub_432808(_System_Collections_Generic_List_string__TypeInfo_12d2b60);
  native_System_Collections_Generic_List_XmlEventCache_XmlEvent______ctor_d3ff44
            (uVar4,_Method_System_Collections_Generic_List_string___ctor___12dce88);
  *(undefined8 *)(param_1 + 0xa0) = uVar4;
  native_sub_4326e0((undefined8 *)(param_1 + 0xa0),uVar4);
  *(undefined4 *)(param_1 + 0x60) = 100;
  native_UnityEngine_MonoBehaviour___ctor_8e971c(param_1,0);
  puVar5 = (undefined8 *)(param_1 + 0x80);
  *puVar5 = param_2;
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



/* BE2_Ins_FunctionBlock$$OnStart @ 0x606b8c
 * void BE2_Ins_FunctionBlock__OnStart (BE2_Ins_FunctionBlock_o* __this, const MethodInfo* method); */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* BE2_Ins_FunctionBlock$$OnStart
   void BE2_Ins_FunctionBlock__OnStart (BE2_Ins_FunctionBlock_o* __this, const MethodInfo* method);
    */

void native_BE2_Ins_FunctionBlock__OnStart_606b8c(long param_1)

{
  uint uVar1;
  ulong uVar2;
  undefined8 *puVar3;
  long lVar4;
  int *piVar5;
  undefined8 uVar6;
  long *plVar7;
  long *plVar8;
  uint uVar9;
  
  if ((bRam000000000133ee0e & 1) == 0) {
    native_sub_43273c(&MG_BlocksEngine2_Block_I_BE2_BlockLayout_TypeInfo_12d4de0);
    native_sub_43273c(&MG_BlocksEngine2_Block_I_BE2_BlockSectionBody_TypeInfo_12d4df0);
    native_sub_43273c(&MG_BlocksEngine2_Block_I_BE2_BlockSectionHeader_TypeInfo_12d4df8);
    native_sub_43273c(&MG_BlocksEngine2_Block_I_BE2_BlockSection_TypeInfo_12d4de8);
    native_sub_43273c(&MG_BlocksEngine2_Block_I_BE2_Block_TypeInfo_12d4dd8);
    native_sub_43273c(&MG_BlocksEngine2_Block_Instruction_I_BE2_InstructionBase_TypeInfo_12d4e30);
    native_sub_43273c(&Method_System_Collections_Generic_List_string__Add___12dcea0);
    native_sub_43273c(&Method_System_Collections_Generic_List_string___ctor___12dce88);
    native_sub_43273c(&System_Collections_Generic_List_string__TypeInfo_12d2b60);
    native_sub_43273c(&UnityEngine_Object_TypeInfo_12d54e0);
    native_sub_43273c(&StringLiteral__12eaac0);
    bRam000000000133ee0e = 1;
  }
  uVar6 = *(undefined8 *)(param_1 + 0x80);
  if (((*(byte *)(_UnityEngine_Object_TypeInfo_12d54e0 + 0x133) >> 2 & 1) != 0) &&
     (*(int *)(_UnityEngine_Object_TypeInfo_12d54e0 + 0xe0) == 0)) {
    native_sub_4327ec();
  }
  uVar2 = native_UnityEngine_Object__op_Implicit_8e1b98(uVar6,0);
  if ((uVar2 & 1) != 0) {
    if ((*(long *)(param_1 + 0x80) == 0) ||
       (plVar7 = *(long **)(*(long *)(param_1 + 0x80) + 0x68), plVar7 == (long *)0x0))
    goto LAB_00607158;
    lVar4 = *plVar7;
    if ((ulong)*(ushort *)(lVar4 + 0x12a) != 0) {
      uVar2 = 0;
      piVar5 = (int *)(*(long *)(lVar4 + 0xb0) + 8);
      do {
        if (*(long *)(piVar5 + -2) ==
            _MG_BlocksEngine2_Block_Instruction_I_BE2_InstructionBase_TypeInfo_12d4e30) {
          puVar3 = (undefined8 *)(lVar4 + (long)(*piVar5 + 3) * 0x10 + 0x138);
          goto LAB_00606ce0;
        }
        uVar2 = uVar2 + 1;
        piVar5 = piVar5 + 4;
      } while (uVar2 < *(ushort *)(lVar4 + 0x12a));
    }
    puVar3 = (undefined8 *)
             native_sub_3c9b34(plVar7,
                               _MG_BlocksEngine2_Block_Instruction_I_BE2_InstructionBase_TypeInfo_12d4e30
                               ,3);
LAB_00606ce0:
    plVar7 = (long *)(*(code *)*puVar3)(plVar7,puVar3[1]);
    if (plVar7 == (long *)0x0) goto LAB_00607158;
    lVar4 = *plVar7;
    if ((ulong)*(ushort *)(lVar4 + 0x12a) != 0) {
      uVar2 = 0;
      piVar5 = (int *)(*(long *)(lVar4 + 0xb0) + 8);
      do {
        if (*(long *)(piVar5 + -2) == _MG_BlocksEngine2_Block_I_BE2_Block_TypeInfo_12d4dd8) {
          puVar3 = (undefined8 *)(lVar4 + (long)(*piVar5 + 3) * 0x10 + 0x138);
          goto LAB_00606d54;
        }
        uVar2 = uVar2 + 1;
        piVar5 = piVar5 + 4;
      } while (uVar2 < *(ushort *)(lVar4 + 0x12a));
    }
    puVar3 = (undefined8 *)
             native_sub_3c9b34(plVar7,_MG_BlocksEngine2_Block_I_BE2_Block_TypeInfo_12d4dd8,3);
LAB_00606d54:
    plVar7 = (long *)(*(code *)*puVar3)(plVar7,puVar3[1]);
    if (plVar7 == (long *)0x0) goto LAB_00607158;
    lVar4 = *plVar7;
    if ((ulong)*(ushort *)(lVar4 + 0x12a) != 0) {
      uVar2 = 0;
      piVar5 = (int *)(*(long *)(lVar4 + 0xb0) + 8);
      do {
        if (*(long *)(piVar5 + -2) == _MG_BlocksEngine2_Block_I_BE2_BlockLayout_TypeInfo_12d4de0) {
          puVar3 = (undefined8 *)(lVar4 + (long)(*piVar5 + 2) * 0x10 + 0x138);
          goto LAB_00606dc8;
        }
        uVar2 = uVar2 + 1;
        piVar5 = piVar5 + 4;
      } while (uVar2 < *(ushort *)(lVar4 + 0x12a));
    }
    puVar3 = (undefined8 *)
             native_sub_3c9b34(plVar7,_MG_BlocksEngine2_Block_I_BE2_BlockLayout_TypeInfo_12d4de0,2);
LAB_00606dc8:
    lVar4 = (*(code *)*puVar3)(plVar7,puVar3[1]);
    if (lVar4 == 0) goto LAB_00607158;
    if (*(int *)(lVar4 + 0x18) == 0) goto LAB_0060715c;
    plVar7 = *(long **)(lVar4 + 0x20);
    if (plVar7 == (long *)0x0) goto LAB_00607158;
    lVar4 = *plVar7;
    if ((ulong)*(ushort *)(lVar4 + 0x12a) != 0) {
      uVar2 = 0;
      piVar5 = (int *)(*(long *)(lVar4 + 0xb0) + 8);
      do {
        if (*(long *)(piVar5 + -2) == _MG_BlocksEngine2_Block_I_BE2_BlockSection_TypeInfo_12d4de8) {
          puVar3 = (undefined8 *)(lVar4 + (long)(*piVar5 + 2) * 0x10 + 0x138);
          goto LAB_00606e48;
        }
        uVar2 = uVar2 + 1;
        piVar5 = piVar5 + 4;
      } while (uVar2 < *(ushort *)(lVar4 + 0x12a));
    }
    puVar3 = (undefined8 *)
             native_sub_3c9b34(plVar7,_MG_BlocksEngine2_Block_I_BE2_BlockSection_TypeInfo_12d4de8,2)
    ;
LAB_00606e48:
    plVar7 = (long *)(*(code *)*puVar3)(plVar7,puVar3[1]);
    if (plVar7 == (long *)0x0) goto LAB_00607158;
    lVar4 = *plVar7;
    if ((ulong)*(ushort *)(lVar4 + 0x12a) != 0) {
      uVar2 = 0;
      piVar5 = (int *)(*(long *)(lVar4 + 0xb0) + 8);
      do {
        if (*(long *)(piVar5 + -2) ==
            _MG_BlocksEngine2_Block_I_BE2_BlockSectionBody_TypeInfo_12d4df0) {
          puVar3 = (undefined8 *)(lVar4 + (long)(*piVar5 + 9) * 0x10 + 0x138);
          goto LAB_00606ebc;
        }
        uVar2 = uVar2 + 1;
        piVar5 = piVar5 + 4;
      } while (uVar2 < *(ushort *)(lVar4 + 0x12a));
    }
    puVar3 = (undefined8 *)
             native_sub_3c9b34(plVar7,
                               _MG_BlocksEngine2_Block_I_BE2_BlockSectionBody_TypeInfo_12d4df0,9);
LAB_00606ebc:
    (*(code *)*puVar3)(plVar7,puVar3[1]);
    if (*(long *)(param_1 + 0x80) == 0) goto LAB_00607158;
    *(undefined8 *)(param_1 + 0x78) = *(undefined8 *)(*(long *)(param_1 + 0x80) + 0x78);
    native_sub_4326e0();
  }
  lVar4 = native_sub_432808(_System_Collections_Generic_List_string__TypeInfo_12d2b60);
  native_System_Collections_Generic_List_XmlEventCache_XmlEvent______ctor_d3ff44
            (lVar4,_Method_System_Collections_Generic_List_string___ctor___12dce88);
  plVar7 = (long *)(param_1 + 0xa0);
  *plVar7 = lVar4;
  native_sub_4326e0(plVar7,lVar4);
  plVar8 = *(long **)(param_1 + 0x40);
  if (plVar8 != (long *)0x0) {
    lVar4 = *plVar8;
    if ((ulong)*(ushort *)(lVar4 + 0x12a) != 0) {
      uVar2 = 0;
      piVar5 = (int *)(*(long *)(lVar4 + 0xb0) + 8);
      do {
        if (*(long *)(piVar5 + -2) == _MG_BlocksEngine2_Block_I_BE2_Block_TypeInfo_12d4dd8) {
          puVar3 = (undefined8 *)(lVar4 + (long)(*piVar5 + 3) * 0x10 + 0x138);
          goto LAB_00606f7c;
        }
        uVar2 = uVar2 + 1;
        piVar5 = piVar5 + 4;
      } while (uVar2 < *(ushort *)(lVar4 + 0x12a));
    }
    puVar3 = (undefined8 *)
             native_sub_3c9b34(plVar8,_MG_BlocksEngine2_Block_I_BE2_Block_TypeInfo_12d4dd8,3);
LAB_00606f7c:
    plVar8 = (long *)(*(code *)*puVar3)(plVar8,puVar3[1]);
    if (plVar8 != (long *)0x0) {
      lVar4 = *plVar8;
      if ((ulong)*(ushort *)(lVar4 + 0x12a) != 0) {
        uVar2 = 0;
        piVar5 = (int *)(*(long *)(lVar4 + 0xb0) + 8);
        do {
          if (*(long *)(piVar5 + -2) == _MG_BlocksEngine2_Block_I_BE2_BlockLayout_TypeInfo_12d4de0)
          {
            puVar3 = (undefined8 *)(lVar4 + (long)(*piVar5 + 2) * 0x10 + 0x138);
            goto LAB_00606ff0;
          }
          uVar2 = uVar2 + 1;
          piVar5 = piVar5 + 4;
        } while (uVar2 < *(ushort *)(lVar4 + 0x12a));
      }
      puVar3 = (undefined8 *)
               native_sub_3c9b34(plVar8,_MG_BlocksEngine2_Block_I_BE2_BlockLayout_TypeInfo_12d4de0,2
                                );
LAB_00606ff0:
      lVar4 = (*(code *)*puVar3)(plVar8,puVar3[1]);
      if (lVar4 != 0) {
        if (*(int *)(lVar4 + 0x18) == 0) {
LAB_0060715c:
          uVar6 = native_sub_43283c();
                    /* WARNING: Subroutine does not return */
          native_sub_4327dc(uVar6,0);
        }
        plVar8 = *(long **)(lVar4 + 0x20);
        if (plVar8 != (long *)0x0) {
          lVar4 = *plVar8;
          if ((ulong)*(ushort *)(lVar4 + 0x12a) != 0) {
            uVar2 = 0;
            piVar5 = (int *)(*(long *)(lVar4 + 0xb0) + 8);
            do {
              if (*(long *)(piVar5 + -2) ==
                  _MG_BlocksEngine2_Block_I_BE2_BlockSection_TypeInfo_12d4de8) {
                puVar3 = (undefined8 *)(lVar4 + (long)(*piVar5 + 1) * 0x10 + 0x138);
                goto LAB_00607070;
              }
              uVar2 = uVar2 + 1;
              piVar5 = piVar5 + 4;
            } while (uVar2 < *(ushort *)(lVar4 + 0x12a));
          }
          puVar3 = (undefined8 *)
                   native_sub_3c9b34(plVar8,
                                     _MG_BlocksEngine2_Block_I_BE2_BlockSection_TypeInfo_12d4de8,1);
LAB_00607070:
          plVar8 = (long *)(*(code *)*puVar3)(plVar8,puVar3[1]);
          if (plVar8 != (long *)0x0) {
            lVar4 = *plVar8;
            if ((ulong)*(ushort *)(lVar4 + 0x12a) != 0) {
              uVar2 = 0;
              piVar5 = (int *)(*(long *)(lVar4 + 0xb0) + 8);
              do {
                if (*(long *)(piVar5 + -2) ==
                    _MG_BlocksEngine2_Block_I_BE2_BlockSectionHeader_TypeInfo_12d4df8) {
                  puVar3 = (undefined8 *)(lVar4 + (long)(*piVar5 + 2) * 0x10 + 0x138);
                  goto LAB_006070e4;
                }
                uVar2 = uVar2 + 1;
                piVar5 = piVar5 + 4;
              } while (uVar2 < *(ushort *)(lVar4 + 0x12a));
            }
            puVar3 = (undefined8 *)
                     native_sub_3c9b34(plVar8,
                                       _MG_BlocksEngine2_Block_I_BE2_BlockSectionHeader_TypeInfo_12d4df8
                                       ,2);
LAB_006070e4:
            lVar4 = (*(code *)*puVar3)(plVar8,puVar3[1]);
            if (lVar4 != 0) {
              uVar1 = *(uint *)(lVar4 + 0x18);
              if (0 < (int)uVar1) {
                uVar9 = 0;
                do {
                  if (uVar1 <= uVar9) goto LAB_0060715c;
                  if (*plVar7 == 0) goto LAB_00607158;
                  native_System_Collections_Generic_List_int_____Add_d40c00
                            (*plVar7,_StringLiteral__12eaac0,
                             _Method_System_Collections_Generic_List_string__Add___12dcea0);
                  uVar1 = *(uint *)(lVar4 + 0x18);
                  uVar9 = uVar9 + 1;
                } while ((int)uVar9 < (int)uVar1);
              }
              return;
            }
          }
        }
      }
    }
  }
LAB_00607158:
                    /* WARNING: Subroutine does not return */
  native_sub_432810();
}



/* BE2_Ins_FunctionBlock$$OnEnableInstruction @ 0x607168
 * void BE2_Ins_FunctionBlock__OnEnableInstruction (BE2_Ins_FunctionBlock_o* __this, const MethodInfo* method); */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* BE2_Ins_FunctionBlock$$OnEnableInstruction
   void BE2_Ins_FunctionBlock__OnEnableInstruction (BE2_Ins_FunctionBlock_o* __this, const
   MethodInfo* method); */

void native_BE2_Ins_FunctionBlock__OnEnableInstruction_607168(long param_1)

{
  ulong uVar1;
  undefined8 uVar2;
  long lVar3;
  long lVar4;
  
  if (*(char *)(param_1 + 0x88) != '\0') {
    return;
  }
  lVar3 = *(long *)(param_1 + 0x80);
  if ((bRam000000000133ee10 & 1) == 0) {
    native_sub_43273c(&Method_BE2_Ins_FunctionBlock_RebuildFunctionInstance___12e21d8);
    native_sub_43273c(&Method_BE2_Ins_FunctionBlock_Remove___12e21e0);
    native_sub_43273c(&UnityEngine_Object_TypeInfo_12d54e0);
    native_sub_43273c(&Method_UnityEngine_Events_UnityAction_I_BE2_Block___ctor___12de3a8);
    native_sub_43273c(&UnityEngine_Events_UnityAction_I_BE2_Block__TypeInfo_12d2f40);
    native_sub_43273c(&UnityEngine_Events_UnityAction_TypeInfo_12d65d0);
    bRam000000000133ee10 = 1;
  }
  if (((*(byte *)(_UnityEngine_Object_TypeInfo_12d54e0 + 0x133) >> 2 & 1) != 0) &&
     (*(int *)(_UnityEngine_Object_TypeInfo_12d54e0 + 0xe0) == 0)) {
    native_sub_4327ec();
  }
  uVar1 = native_UnityEngine_Object__op_Implicit_8e1b98(lVar3,0);
  if ((uVar1 & 1) == 0) {
    return;
  }
  native_BE2_Ins_FunctionBlock__RebuildFunctionInstance_607424(param_1);
  *(long *)(param_1 + 0x80) = lVar3;
  native_sub_4326e0((long *)(param_1 + 0x80),lVar3);
  if (lVar3 != 0) {
    lVar4 = *(long *)(lVar3 + 0x80);
    uVar2 = native_sub_432808(_UnityEngine_Events_UnityAction_TypeInfo_12d65d0);
    native_UnityEngine_Events_UnityAction___ctor_773130
              (uVar2,param_1,_Method_BE2_Ins_FunctionBlock_RebuildFunctionInstance___12e21d8,0);
    if (lVar4 != 0) {
      native_UnityEngine_Events_UnityEvent__AddListener_7734bc(lVar4,uVar2,0);
      lVar4 = native_MG_BlocksEngine2_Core_BE2_MainEventsManager__get_Instance_6001fc();
      uVar2 = native_sub_432808(_UnityEngine_Events_UnityAction_I_BE2_Block__TypeInfo_12d2f40);
      native_UnityEngine_Events_UnityAction_List_IEventSystemHandler_____ctor_89b93c
                (uVar2,param_1,_Method_BE2_Ins_FunctionBlock_Remove___12e21e0,
                 _Method_UnityEngine_Events_UnityAction_I_BE2_Block___ctor___12de3a8);
      if (lVar4 != 0) {
        native_MG_BlocksEngine2_Core_BE2_EventsManager__StartListening_579be8(lVar4,0xd,uVar2,0);
        *(undefined8 *)(param_1 + 0x78) = *(undefined8 *)(lVar3 + 0x78);
        native_sub_4326e0((undefined8 *)(param_1 + 0x78));
        *(undefined1 *)(param_1 + 0x88) = 1;
        return;
      }
    }
  }
                    /* WARNING: Subroutine does not return */
  native_sub_432810();
}



/* BE2_Ins_FunctionBlock$$OnDisableInstruction @ 0x607304
 * void BE2_Ins_FunctionBlock__OnDisableInstruction (BE2_Ins_FunctionBlock_o* __this, const MethodInfo* method); */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* BE2_Ins_FunctionBlock$$OnDisableInstruction
   void BE2_Ins_FunctionBlock__OnDisableInstruction (BE2_Ins_FunctionBlock_o* __this, const
   MethodInfo* method); */

void native_BE2_Ins_FunctionBlock__OnDisableInstruction_607304(long param_1)

{
  undefined8 uVar1;
  long lVar2;
  
  if ((bRam000000000133ee0f & 1) == 0) {
    native_sub_43273c(&Method_BE2_Ins_FunctionBlock_RebuildFunctionInstance___12e21d8);
    native_sub_43273c(&Method_BE2_Ins_FunctionBlock_Remove___12e21e0);
    native_sub_43273c(&Method_UnityEngine_Events_UnityAction_I_BE2_Block___ctor___12de3a8);
    native_sub_43273c(&UnityEngine_Events_UnityAction_I_BE2_Block__TypeInfo_12d2f40);
    native_sub_43273c(&UnityEngine_Events_UnityAction_TypeInfo_12d65d0);
    bRam000000000133ee0f = 1;
  }
  if (*(long *)(param_1 + 0x80) != 0) {
    lVar2 = *(long *)(*(long *)(param_1 + 0x80) + 0x80);
    uVar1 = native_sub_432808(_UnityEngine_Events_UnityAction_TypeInfo_12d65d0);
    native_UnityEngine_Events_UnityAction___ctor_773130
              (uVar1,param_1,_Method_BE2_Ins_FunctionBlock_RebuildFunctionInstance___12e21d8,0);
    if (lVar2 != 0) {
      native_UnityEngine_Events_UnityEvent__RemoveListener_773574(lVar2,uVar1,0);
      lVar2 = native_MG_BlocksEngine2_Core_BE2_MainEventsManager__get_Instance_6001fc();
      uVar1 = native_sub_432808(_UnityEngine_Events_UnityAction_I_BE2_Block__TypeInfo_12d2f40);
      native_UnityEngine_Events_UnityAction_List_IEventSystemHandler_____ctor_89b93c
                (uVar1,param_1,_Method_BE2_Ins_FunctionBlock_Remove___12e21e0,
                 _Method_UnityEngine_Events_UnityAction_I_BE2_Block___ctor___12de3a8);
      if (lVar2 != 0) {
        native_MG_BlocksEngine2_Core_BE2_EventsManager__StopListening_579db8(lVar2,0xd,uVar1,0);
        *(undefined1 *)(param_1 + 0x88) = 0;
        return;
      }
    }
  }
                    /* WARNING: Subroutine does not return */
  native_sub_432810();
}



/* BE2_Ins_FunctionBlock$$Initialize @ 0x60717c
 * void BE2_Ins_FunctionBlock__Initialize (BE2_Ins_FunctionBlock_o* __this, BE2_Ins_DefineFunction_o* defineInstruction, const MethodInfo* method); */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* BE2_Ins_FunctionBlock$$Initialize
   void BE2_Ins_FunctionBlock__Initialize (BE2_Ins_FunctionBlock_o* __this,
   BE2_Ins_DefineFunction_o* defineInstruction, const MethodInfo* method); */

void native_BE2_Ins_FunctionBlock__Initialize_60717c(long param_1,long param_2)

{
  ulong uVar1;
  undefined8 uVar2;
  long lVar3;
  
  if ((bRam000000000133ee10 & 1) == 0) {
    native_sub_43273c(&Method_BE2_Ins_FunctionBlock_RebuildFunctionInstance___12e21d8);
    native_sub_43273c(&Method_BE2_Ins_FunctionBlock_Remove___12e21e0);
    native_sub_43273c(&UnityEngine_Object_TypeInfo_12d54e0);
    native_sub_43273c(&Method_UnityEngine_Events_UnityAction_I_BE2_Block___ctor___12de3a8);
    native_sub_43273c(&UnityEngine_Events_UnityAction_I_BE2_Block__TypeInfo_12d2f40);
    native_sub_43273c(&UnityEngine_Events_UnityAction_TypeInfo_12d65d0);
    bRam000000000133ee10 = 1;
  }
  if (((*(byte *)(_UnityEngine_Object_TypeInfo_12d54e0 + 0x133) >> 2 & 1) != 0) &&
     (*(int *)(_UnityEngine_Object_TypeInfo_12d54e0 + 0xe0) == 0)) {
    native_sub_4327ec();
  }
  uVar1 = native_UnityEngine_Object__op_Implicit_8e1b98(param_2,0);
  if ((uVar1 & 1) == 0) {
    return;
  }
  native_BE2_Ins_FunctionBlock__RebuildFunctionInstance_607424(param_1);
  *(long *)(param_1 + 0x80) = param_2;
  native_sub_4326e0((long *)(param_1 + 0x80),param_2);
  if (param_2 != 0) {
    lVar3 = *(long *)(param_2 + 0x80);
    uVar2 = native_sub_432808(_UnityEngine_Events_UnityAction_TypeInfo_12d65d0);
    native_UnityEngine_Events_UnityAction___ctor_773130
              (uVar2,param_1,_Method_BE2_Ins_FunctionBlock_RebuildFunctionInstance___12e21d8,0);
    if (lVar3 != 0) {
      native_UnityEngine_Events_UnityEvent__AddListener_7734bc(lVar3,uVar2,0);
      lVar3 = native_MG_BlocksEngine2_Core_BE2_MainEventsManager__get_Instance_6001fc();
      uVar2 = native_sub_432808(_UnityEngine_Events_UnityAction_I_BE2_Block__TypeInfo_12d2f40);
      native_UnityEngine_Events_UnityAction_List_IEventSystemHandler_____ctor_89b93c
                (uVar2,param_1,_Method_BE2_Ins_FunctionBlock_Remove___12e21e0,
                 _Method_UnityEngine_Events_UnityAction_I_BE2_Block___ctor___12de3a8);
      if (lVar3 != 0) {
        native_MG_BlocksEngine2_Core_BE2_EventsManager__StartListening_579be8(lVar3,0xd,uVar2,0);
        *(undefined8 *)(param_1 + 0x78) = *(undefined8 *)(param_2 + 0x78);
        native_sub_4326e0((undefined8 *)(param_1 + 0x78));
        *(undefined1 *)(param_1 + 0x88) = 1;
        return;
      }
    }
  }
                    /* WARNING: Subroutine does not return */
  native_sub_432810();
}



/* BE2_Ins_FunctionBlock$$Remove @ 0x6074b4
 * void BE2_Ins_FunctionBlock__Remove (BE2_Ins_FunctionBlock_o* __this, MG_BlocksEngine2_Block_I_BE2_Block_o* block, const MethodInfo* method); */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* BE2_Ins_FunctionBlock$$Remove
   void BE2_Ins_FunctionBlock__Remove (BE2_Ins_FunctionBlock_o* __this,
   MG_BlocksEngine2_Block_I_BE2_Block_o* block, const MethodInfo* method); */

void native_BE2_Ins_FunctionBlock__Remove_6074b4(long param_1,long param_2)

{
  int iVar1;
  long *plVar2;
  undefined8 uVar3;
  undefined8 *puVar4;
  long lVar5;
  long lVar6;
  ulong uVar7;
  int *piVar8;
  long *plVar9;
  
  if ((bRam000000000133ee11 & 1) == 0) {
    native_sub_43273c(&MG_BlocksEngine2_Block_I_BE2_Block_TypeInfo_12d4dd8);
    native_sub_43273c(&MG_BlocksEngine2_Core_I_BE2_BlocksStack_TypeInfo_12d4e10);
    native_sub_43273c(&MG_BlocksEngine2_Block_Instruction_I_BE2_InstructionBase_TypeInfo_12d4e30);
    native_sub_43273c(&MG_BlocksEngine2_Block_Instruction_I_BE2_Instruction_TypeInfo_12d4e28);
    bRam000000000133ee11 = 1;
  }
  if (*(long *)(param_1 + 0x80) == 0) {
LAB_00607790:
                    /* WARNING: Subroutine does not return */
    native_sub_432810();
  }
  if (*(long *)(*(long *)(param_1 + 0x80) + 0x40) != param_2) {
    return;
  }
  plVar9 = *(long **)(param_1 + 0x40);
  if (plVar9 == (long *)0x0) goto LAB_00607790;
  lVar6 = *plVar9;
  if ((ulong)*(ushort *)(lVar6 + 0x12a) != 0) {
    uVar7 = 0;
    piVar8 = (int *)(*(long *)(lVar6 + 0xb0) + 8);
    do {
      if (*(long *)(piVar8 + -2) == _MG_BlocksEngine2_Block_I_BE2_Block_TypeInfo_12d4dd8) {
        puVar4 = (undefined8 *)(lVar6 + (long)*piVar8 * 0x10 + 0x138);
        goto LAB_00607598;
      }
      uVar7 = uVar7 + 1;
      piVar8 = piVar8 + 4;
    } while (uVar7 < *(ushort *)(lVar6 + 0x12a));
  }
  puVar4 = (undefined8 *)
           native_sub_3c9b34(plVar9,_MG_BlocksEngine2_Block_I_BE2_Block_TypeInfo_12d4dd8,0);
LAB_00607598:
  lVar6 = (*(code *)*puVar4)(plVar9,puVar4[1]);
  if (lVar6 == 0) goto LAB_00607790;
  native_UnityEngine_Transform__SetParent_77208c(lVar6,0,0);
  plVar9 = *(long **)(param_1 + 0x40);
  if (plVar9 == (long *)0x0) goto LAB_00607790;
  lVar6 = *plVar9;
  if ((ulong)*(ushort *)(lVar6 + 0x12a) != 0) {
    uVar7 = 0;
    piVar8 = (int *)(*(long *)(lVar6 + 0xb0) + 8);
    do {
      if (*(long *)(piVar8 + -2) == _MG_BlocksEngine2_Block_I_BE2_Block_TypeInfo_12d4dd8) {
        puVar4 = (undefined8 *)(lVar6 + (long)(*piVar8 + 4) * 0x10 + 0x138);
        goto LAB_00607614;
      }
      uVar7 = uVar7 + 1;
      piVar8 = piVar8 + 4;
    } while (uVar7 < *(ushort *)(lVar6 + 0x12a));
  }
  puVar4 = (undefined8 *)
           native_sub_3c9b34(plVar9,_MG_BlocksEngine2_Block_I_BE2_Block_TypeInfo_12d4dd8,4);
LAB_00607614:
  plVar9 = (long *)(*(code *)*puVar4)(plVar9,puVar4[1]);
  if (plVar9 == (long *)0x0) goto LAB_00607790;
  lVar6 = *plVar9;
  if ((ulong)*(ushort *)(lVar6 + 0x12a) != 0) {
    uVar7 = 0;
    piVar8 = (int *)(*(long *)(lVar6 + 0xb0) + 8);
    do {
      if (*(long *)(piVar8 + -2) ==
          _MG_BlocksEngine2_Block_Instruction_I_BE2_Instruction_TypeInfo_12d4e28) {
        puVar4 = (undefined8 *)(lVar6 + (long)*piVar8 * 0x10 + 0x138);
        goto LAB_00607684;
      }
      uVar7 = uVar7 + 1;
      piVar8 = piVar8 + 4;
    } while (uVar7 < *(ushort *)(lVar6 + 0x12a));
  }
  puVar4 = (undefined8 *)
           native_sub_3c9b34(plVar9,
                             _MG_BlocksEngine2_Block_Instruction_I_BE2_Instruction_TypeInfo_12d4e28,
                             0);
LAB_00607684:
  plVar9 = (long *)(*(code *)*puVar4)(plVar9,puVar4[1]);
  if (plVar9 == (long *)0x0) goto LAB_00607790;
  lVar6 = *plVar9;
  if ((ulong)*(ushort *)(lVar6 + 0x12a) != 0) {
    uVar7 = 0;
    piVar8 = (int *)(*(long *)(lVar6 + 0xb0) + 8);
    do {
      if (*(long *)(piVar8 + -2) ==
          _MG_BlocksEngine2_Block_Instruction_I_BE2_InstructionBase_TypeInfo_12d4e30) {
        puVar4 = (undefined8 *)(lVar6 + (long)(*piVar8 + 4) * 0x10 + 0x138);
        goto LAB_006076f8;
      }
      uVar7 = uVar7 + 1;
      piVar8 = piVar8 + 4;
    } while (uVar7 < *(ushort *)(lVar6 + 0x12a));
  }
  puVar4 = (undefined8 *)
           native_sub_3c9b34(plVar9,
                             _MG_BlocksEngine2_Block_Instruction_I_BE2_InstructionBase_TypeInfo_12d4e30
                             ,4);
LAB_006076f8:
  plVar9 = (long *)(*(code *)*puVar4)(plVar9,puVar4[1]);
  if (plVar9 != (long *)0x0) {
    lVar6 = *plVar9;
    if ((ulong)*(ushort *)(lVar6 + 0x12a) != 0) {
      uVar7 = 0;
      piVar8 = (int *)(*(long *)(lVar6 + 0xb0) + 8);
      do {
        if (*(long *)(piVar8 + -2) == _MG_BlocksEngine2_Core_I_BE2_BlocksStack_TypeInfo_12d4e10) {
          puVar4 = (undefined8 *)(lVar6 + (long)(*piVar8 + 0xe) * 0x10 + 0x138);
          goto LAB_0060776c;
        }
        uVar7 = uVar7 + 1;
        piVar8 = piVar8 + 4;
      } while (uVar7 < *(ushort *)(lVar6 + 0x12a));
    }
    puVar4 = (undefined8 *)
             native_sub_3c9b34(plVar9,_MG_BlocksEngine2_Core_I_BE2_BlocksStack_TypeInfo_12d4e10,0xe)
    ;
LAB_0060776c:
    (*(code *)*puVar4)(plVar9,puVar4[1]);
  }
  plVar9 = *(long **)(param_1 + 0x40);
  if ((bRam000000000133ea70 & 1) == 0) {
    native_sub_43273c(&MG_BlocksEngine2_Block_I_BE2_Block_TypeInfo_12d4dd8,0);
    native_sub_43273c(&MG_BlocksEngine2_Block_Instruction_I_BE2_InstructionBase_TypeInfo_12d4e30);
    native_sub_43273c(&MG_BlocksEngine2_Block_Instruction_I_BE2_Instruction_TypeInfo_12d4e28);
    native_sub_43273c(&UnityEngine_Object_TypeInfo_12d54e0);
    bRam000000000133ea70 = 1;
  }
  if (plVar9 == (long *)0x0) goto LAB_0056e438;
  lVar6 = *plVar9;
  if ((ulong)*(ushort *)(lVar6 + 0x12a) != 0) {
    uVar7 = 0;
    piVar8 = (int *)(*(long *)(lVar6 + 0xb0) + 8);
    do {
      if (*(long *)(piVar8 + -2) == _MG_BlocksEngine2_Block_I_BE2_Block_TypeInfo_12d4dd8) {
        puVar4 = (undefined8 *)(lVar6 + (long)(*piVar8 + 1) * 0x10 + 0x138);
        goto LAB_0056e218;
      }
      uVar7 = uVar7 + 1;
      piVar8 = piVar8 + 4;
    } while (uVar7 < *(ushort *)(lVar6 + 0x12a));
  }
  puVar4 = (undefined8 *)
           native_sub_3c9b34(plVar9,_MG_BlocksEngine2_Block_I_BE2_Block_TypeInfo_12d4dd8,1);
LAB_0056e218:
  iVar1 = (*(code *)*puVar4)(plVar9,puVar4[1]);
  if (iVar1 == 4) {
    lVar6 = native_MG_BlocksEngine2_Core_BE2_ExecutionManager__get_Instance_564464();
    lVar5 = *plVar9;
    if ((ulong)*(ushort *)(lVar5 + 0x12a) != 0) {
      uVar7 = 0;
      piVar8 = (int *)(*(long *)(lVar5 + 0xb0) + 8);
      do {
        if (*(long *)(piVar8 + -2) == _MG_BlocksEngine2_Block_I_BE2_Block_TypeInfo_12d4dd8) {
          puVar4 = (undefined8 *)(lVar5 + (long)(*piVar8 + 4) * 0x10 + 0x138);
          goto LAB_0056e28c;
        }
        uVar7 = uVar7 + 1;
        piVar8 = piVar8 + 4;
      } while (uVar7 < *(ushort *)(lVar5 + 0x12a));
    }
    puVar4 = (undefined8 *)
             native_sub_3c9b34(plVar9,_MG_BlocksEngine2_Block_I_BE2_Block_TypeInfo_12d4dd8,4);
LAB_0056e28c:
    plVar2 = (long *)(*(code *)*puVar4)(plVar9,puVar4[1]);
    if (plVar2 == (long *)0x0) goto LAB_0056e438;
    lVar5 = *plVar2;
    if ((ulong)*(ushort *)(lVar5 + 0x12a) != 0) {
      uVar7 = 0;
      piVar8 = (int *)(*(long *)(lVar5 + 0xb0) + 8);
      do {
        if (*(long *)(piVar8 + -2) ==
            _MG_BlocksEngine2_Block_Instruction_I_BE2_Instruction_TypeInfo_12d4e28) {
          puVar4 = (undefined8 *)(lVar5 + (long)*piVar8 * 0x10 + 0x138);
          goto LAB_0056e2fc;
        }
        uVar7 = uVar7 + 1;
        piVar8 = piVar8 + 4;
      } while (uVar7 < *(ushort *)(lVar5 + 0x12a));
    }
    puVar4 = (undefined8 *)
             native_sub_3c9b34(plVar2,
                               _MG_BlocksEngine2_Block_Instruction_I_BE2_Instruction_TypeInfo_12d4e28
                               ,0);
LAB_0056e2fc:
    plVar2 = (long *)(*(code *)*puVar4)(plVar2,puVar4[1]);
    if (plVar2 == (long *)0x0) goto LAB_0056e438;
    lVar5 = *plVar2;
    if ((ulong)*(ushort *)(lVar5 + 0x12a) != 0) {
      uVar7 = 0;
      piVar8 = (int *)(*(long *)(lVar5 + 0xb0) + 8);
      do {
        if (*(long *)(piVar8 + -2) ==
            _MG_BlocksEngine2_Block_Instruction_I_BE2_InstructionBase_TypeInfo_12d4e30) {
          puVar4 = (undefined8 *)(lVar5 + (long)(*piVar8 + 4) * 0x10 + 0x138);
          goto LAB_0056e370;
        }
        uVar7 = uVar7 + 1;
        piVar8 = piVar8 + 4;
      } while (uVar7 < *(ushort *)(lVar5 + 0x12a));
    }
    puVar4 = (undefined8 *)
             native_sub_3c9b34(plVar2,
                               _MG_BlocksEngine2_Block_Instruction_I_BE2_InstructionBase_TypeInfo_12d4e30
                               ,4);
LAB_0056e370:
    uVar3 = (*(code *)*puVar4)(plVar2,puVar4[1]);
    if (lVar6 == 0) goto LAB_0056e438;
    native_MG_BlocksEngine2_Core_BE2_ExecutionManager__RemoveFromBlocksStackList_56e43c(lVar6,uVar3)
    ;
  }
  lVar6 = *plVar9;
  if ((ulong)*(ushort *)(lVar6 + 0x12a) != 0) {
    uVar7 = 0;
    piVar8 = (int *)(*(long *)(lVar6 + 0xb0) + 8);
    do {
      if (*(long *)(piVar8 + -2) == _MG_BlocksEngine2_Block_I_BE2_Block_TypeInfo_12d4dd8) {
        puVar4 = (undefined8 *)(lVar6 + (long)*piVar8 * 0x10 + 0x138);
        goto LAB_0056e3e0;
      }
      uVar7 = uVar7 + 1;
      piVar8 = piVar8 + 4;
    } while (uVar7 < *(ushort *)(lVar6 + 0x12a));
  }
  puVar4 = (undefined8 *)
           native_sub_3c9b34(plVar9,_MG_BlocksEngine2_Block_I_BE2_Block_TypeInfo_12d4dd8,0);
LAB_0056e3e0:
  lVar6 = (*(code *)*puVar4)(plVar9,puVar4[1]);
  if (lVar6 != 0) {
    uVar3 = native_UnityEngine_Component__get_gameObject_8da66c(lVar6,0);
    if (((*(byte *)(_UnityEngine_Object_TypeInfo_12d54e0 + 0x133) >> 2 & 1) != 0) &&
       (*(int *)(_UnityEngine_Object_TypeInfo_12d54e0 + 0xe0) == 0)) {
      native_sub_4327ec(_UnityEngine_Object_TypeInfo_12d54e0);
    }
    if ((bRam0000000001341048 & 1) == 0) {
      native_sub_43273c(&UnityEngine_Object_TypeInfo_12d54e0,0);
      bRam0000000001341048 = 1;
    }
    if (((*(byte *)(_UnityEngine_Object_TypeInfo_12d54e0 + 0x133) >> 2 & 1) != 0) &&
       (*(int *)(_UnityEngine_Object_TypeInfo_12d54e0 + 0xe0) == 0)) {
      native_sub_4327ec();
    }
    if (pcRam0000000001341040 == (code *)0x0) {
      pcRam0000000001341040 = (code *)native_sub_4326f0(&UNK_00e2f7cf);
    }
                    /* WARNING: Could not recover jumptable at 0x008ea5f4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*pcRam0000000001341040)(0,uVar3);
    return;
  }
LAB_0056e438:
                    /* WARNING: Subroutine does not return */
  native_sub_432810();
}



/* BE2_Ins_FunctionBlock$$RebuildFunctionInstance @ 0x607424
 * void BE2_Ins_FunctionBlock__RebuildFunctionInstance (BE2_Ins_FunctionBlock_o* __this, const MethodInfo* method); */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* BE2_Ins_FunctionBlock$$RebuildFunctionInstance
   void BE2_Ins_FunctionBlock__RebuildFunctionInstance (BE2_Ins_FunctionBlock_o* __this, const
   MethodInfo* method); */

void native_BE2_Ins_FunctionBlock__RebuildFunctionInstance_607424(long param_1)

{
  undefined8 uVar1;
  long lVar2;
  ulong uVar3;
  undefined8 uVar4;
  
  if ((bRam000000000133ee12 & 1) == 0) {
    native_sub_43273c(&
                      Method_System_Collections_Generic_List_BE2_Op_FunctionLocalVariable___ctor___12dc470
                     );
    native_sub_43273c(&
                      System_Collections_Generic_List_BE2_Op_FunctionLocalVariable__TypeInfo_12d2980
                     );
    bRam000000000133ee12 = 1;
  }
  uVar1 = native_sub_432808(
                           _System_Collections_Generic_List_BE2_Op_FunctionLocalVariable__TypeInfo_12d2980
                           );
  native_System_Collections_Generic_List_XmlEventCache_XmlEvent______ctor_d3ff44
            (uVar1,
             _Method_System_Collections_Generic_List_BE2_Op_FunctionLocalVariable___ctor___12dc470);
  *(undefined8 *)(param_1 + 0x98) = uVar1;
  native_sub_4326e0((undefined8 *)(param_1 + 0x98),uVar1);
  lVar2 = native_BE2_Ins_FunctionBlock__C_RebuildFunctionInstance_607794(param_1);
  if (lVar2 == 0) {
    native_sub_432740(&System_NullReferenceException_TypeInfo_12d5498,0,0);
    uVar4 = native_sub_432808();
    uVar1 = native_sub_432740(&StringLiteral_routine_is_null_12f5ec0);
    native_System_NullReferenceException___ctor_ad2894(uVar4,uVar1,0);
  }
  else {
    if (pcRam0000000001340fe8 == (code *)0x0) {
      pcRam0000000001340fe8 = (code *)native_sub_4326f0(&UNK_00e2f589);
    }
    uVar3 = (*pcRam0000000001340fe8)(param_1);
    if ((uVar3 & 1) != 0) {
      if (pcRam0000000001340ff8 == (code *)0x0) {
        pcRam0000000001340ff8 = (code *)native_sub_4326f0(&UNK_00e2f61c);
      }
                    /* WARNING: Could not recover jumptable at 0x008e91f0. Too many branches */
                    /* WARNING: Treating indirect jump as call */
      (*pcRam0000000001340ff8)(param_1,lVar2);
      return;
    }
    native_sub_432740(&System_ArgumentException_TypeInfo_12d3800);
    uVar4 = native_sub_432808();
    uVar1 = native_sub_432740(&
                              StringLiteral_Coroutines_can_only_be_stopped_on_a_MonoBehaviour_12ed328
                             );
    native_System_ArgumentException___ctor_953858(uVar4,uVar1,0);
  }
  uVar1 = native_sub_432740(&Method_UnityEngine_MonoBehaviour_StartCoroutine___12e55d8);
                    /* WARNING: Subroutine does not return */
  native_sub_4327dc(uVar4,uVar1);
}



/* BE2_Ins_FunctionBlock$$C_RebuildFunctionInstance @ 0x607794
 * System_Collections_IEnumerator_o* BE2_Ins_FunctionBlock__C_RebuildFunctionInstance (BE2_Ins_FunctionBlock_o* __this, const MethodInfo* method); */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* BE2_Ins_FunctionBlock$$C_RebuildFunctionInstance
   System_Collections_IEnumerator_o* BE2_Ins_FunctionBlock__C_RebuildFunctionInstance
   (BE2_Ins_FunctionBlock_o* __this, const MethodInfo* method); */

long native_BE2_Ins_FunctionBlock__C_RebuildFunctionInstance_607794(undefined8 param_1)

{
  long lVar1;
  
  if ((bRam000000000133ee13 & 1) == 0) {
    native_sub_43273c(&BE2_Ins_FunctionBlock__C_RebuildFunctionInstance_d__10_TypeInfo_12d7030);
    bRam000000000133ee13 = 1;
  }
  lVar1 = native_sub_432808(_BE2_Ins_FunctionBlock__C_RebuildFunctionInstance_d__10_TypeInfo_12d7030
                           );
  native_BE2_Ins_FunctionBlock__C_RebuildFunctionInstance_d__10___ctor_547b2c(lVar1,0,0);
  if (lVar1 != 0) {
    *(undefined8 *)(lVar1 + 0x20) = param_1;
    native_sub_4326e0((undefined8 *)(lVar1 + 0x20),param_1);
    return lVar1;
  }
                    /* WARNING: Subroutine does not return */
  native_sub_432810();
}



/* BE2_Ins_FunctionBlock$$InstantiateNoViewBlockRecursive @ 0x60780c
 * void BE2_Ins_FunctionBlock__InstantiateNoViewBlockRecursive (BE2_Ins_FunctionBlock_o* __this, MG_BlocksEngine2_Block_I_BE2_Block_o* mirrorBlock, UnityEngine_Transform_o* parent, const MethodInfo* method); */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* BE2_Ins_FunctionBlock$$InstantiateNoViewBlockRecursive
   void BE2_Ins_FunctionBlock__InstantiateNoViewBlockRecursive (BE2_Ins_FunctionBlock_o* __this,
   MG_BlocksEngine2_Block_I_BE2_Block_o* mirrorBlock, UnityEngine_Transform_o* parent, const
   MethodInfo* method); */

void native_BE2_Ins_FunctionBlock__InstantiateNoViewBlockRecursive_60780c
               (long param_1,long *param_2,undefined8 param_3)

{
  uint uVar1;
  undefined8 *puVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  long *plVar5;
  long *plVar6;
  long *plVar7;
  long *plVar8;
  long lVar9;
  long lVar10;
  long lVar11;
  long lVar12;
  ulong uVar13;
  long lVar14;
  ulong uVar15;
  int *piVar16;
  long *plVar17;
  uint uVar18;
  long *plStack_78;
  
  if ((bRam000000000133ee14 & 1) == 0) {
    native_sub_43273c(&MG_BlocksEngine2_Block_BE2_BlockSectionHeader_LocalVariable_TypeInfo_12d3988)
    ;
    native_sub_43273c(&MG_BlocksEngine2_Block_BE2_BlockSectionHeader_Operation_TypeInfo_12d3990);
    native_sub_43273c(&
                      Method_MG_BlocksEngine2_Utils_BE2_BlockUtils_InstantiateNoViewBlock_BE2_Ins_ReferenceFunctionBlock____12e2120
                     );
    native_sub_43273c(&MG_BlocksEngine2_Block_BE2_GhostBlock_TypeInfo_12d39d0);
    native_sub_43273c(&BE2_Ins_FunctionBlock_var_12d1300);
    native_sub_43273c(&BE2_Ins_FunctionBlock_TypeInfo_12d3a00);
    native_sub_43273c(&BE2_Ins_ReferenceFunctionBlock_TypeInfo_12d3a08);
    native_sub_43273c(&MG_BlocksEngine2_Block_Instruction_BE2_InstructionBase_TypeInfo_12d3a18);
    native_sub_43273c(&BE2_Op_FunctionLocalVariable_var_12d1308);
    native_sub_43273c(&Method_UnityEngine_Component_GetComponent_I_BE2_Block____12e2a08);
    native_sub_43273c(&
                      Method_UnityEngine_GameObject_AddComponent_BE2_BlockSectionHeader_ReferenceInput____12e4780
                     );
    native_sub_43273c(&UnityEngine_GameObject_TypeInfo_12d47d8);
    native_sub_43273c(&MG_BlocksEngine2_Block_I_BE2_BlockLayout_TypeInfo_12d4de0);
    native_sub_43273c(&MG_BlocksEngine2_Block_I_BE2_BlockSectionBody_TypeInfo_12d4df0);
    native_sub_43273c(&MG_BlocksEngine2_Block_I_BE2_BlockSectionHeaderInput_TypeInfo_12d4e00);
    native_sub_43273c(&MG_BlocksEngine2_Block_I_BE2_BlockSectionHeader_TypeInfo_12d4df8);
    native_sub_43273c(&MG_BlocksEngine2_Block_I_BE2_BlockSection_TypeInfo_12d4de8);
    native_sub_43273c(&MG_BlocksEngine2_Block_I_BE2_Block_TypeInfo_12d4dd8);
    native_sub_43273c(&MG_BlocksEngine2_Block_Instruction_I_BE2_Instruction_TypeInfo_12d4e28);
    native_sub_43273c(&UnityEngine_Object_TypeInfo_12d54e0);
    native_sub_43273c(&UnityEngine_RectTransform_var_12d17b0);
    native_sub_43273c(&System_Type___TypeInfo_12d3430);
    native_sub_43273c(&System_Type_TypeInfo_12d6340);
    native_sub_43273c(&StringLiteral_input_12f4df8);
    bRam000000000133ee14 = 1;
  }
  if (param_2 == (long *)0x0) goto LAB_00608dc0;
  if ((*(byte *)(_MG_BlocksEngine2_Block_BE2_GhostBlock_TypeInfo_12d39d0 + 300) <=
       *(byte *)(*param_2 + 300)) &&
     (*(long *)(*(long *)(*param_2 + 200) +
                (ulong)*(byte *)(_MG_BlocksEngine2_Block_BE2_GhostBlock_TypeInfo_12d39d0 + 300) * 8
               + -8) == _MG_BlocksEngine2_Block_BE2_GhostBlock_TypeInfo_12d39d0)) {
    return;
  }
  lVar10 = *param_2;
  if ((ulong)*(ushort *)(lVar10 + 0x12a) != 0) {
    uVar15 = 0;
    piVar16 = (int *)(*(long *)(lVar10 + 0xb0) + 8);
    do {
      if (*(long *)(piVar16 + -2) == _MG_BlocksEngine2_Block_I_BE2_Block_TypeInfo_12d4dd8) {
        puVar2 = (undefined8 *)(lVar10 + (long)(*piVar16 + 4) * 0x10 + 0x138);
        goto LAB_00607a04;
      }
      uVar15 = uVar15 + 1;
      piVar16 = piVar16 + 4;
    } while (uVar15 < *(ushort *)(lVar10 + 0x12a));
  }
  puVar2 = (undefined8 *)
           native_sub_3c9b34(param_2,_MG_BlocksEngine2_Block_I_BE2_Block_TypeInfo_12d4dd8,4);
LAB_00607a04:
  lVar10 = (*(code *)*puVar2)(param_2,puVar2[1]);
  if (lVar10 == 0) goto LAB_00608dc0;
  uVar3 = native_System_Object__GetType_adb48c(lVar10,0);
  uVar4 = _BE2_Ins_FunctionBlock_var_12d1300;
  if (((*(byte *)(_System_Type_TypeInfo_12d6340 + 0x133) >> 2 & 1) != 0) &&
     (*(int *)(_System_Type_TypeInfo_12d6340 + 0xe0) == 0)) {
    native_sub_4327ec(_System_Type_TypeInfo_12d6340);
  }
  uVar4 = native_System_Type__GetTypeFromHandle_b0fb24(uVar4,0);
  uVar15 = native_System_Type__op_Equality_b117c4(uVar3,uVar4,0);
  if ((uVar15 & 1) == 0) {
LAB_00607bc0:
    plVar5 = (long *)native_MG_BlocksEngine2_Utils_BE2_BlockUtils__InstantiateNoViewBlock_56f3c0
                               (param_2,0);
    plStack_78 = (long *)0x0;
  }
  else {
    lVar10 = *param_2;
    if ((ulong)*(ushort *)(lVar10 + 0x12a) != 0) {
      uVar15 = 0;
      piVar16 = (int *)(*(long *)(lVar10 + 0xb0) + 8);
      do {
        if (*(long *)(piVar16 + -2) == _MG_BlocksEngine2_Block_I_BE2_Block_TypeInfo_12d4dd8) {
          puVar2 = (undefined8 *)(lVar10 + (long)(*piVar16 + 4) * 0x10 + 0x138);
          goto LAB_00607ad0;
        }
        uVar15 = uVar15 + 1;
        piVar16 = piVar16 + 4;
      } while (uVar15 < *(ushort *)(lVar10 + 0x12a));
    }
    puVar2 = (undefined8 *)
             native_sub_3c9b34(param_2,_MG_BlocksEngine2_Block_I_BE2_Block_TypeInfo_12d4dd8,4);
LAB_00607ad0:
    plVar5 = (long *)(*(code *)*puVar2)(param_2,puVar2[1]);
    if (plVar5 == (long *)0x0) goto LAB_00608dc0;
    if ((*(byte *)(*plVar5 + 300) < *(byte *)(_BE2_Ins_FunctionBlock_TypeInfo_12d3a00 + 300)) ||
       (*(long *)(*(long *)(*plVar5 + 200) +
                  (ulong)*(byte *)(_BE2_Ins_FunctionBlock_TypeInfo_12d3a00 + 300) * 8 + -8) !=
        _BE2_Ins_FunctionBlock_TypeInfo_12d3a00)) goto LAB_00608dc0;
    uVar4 = *(undefined8 *)(param_1 + 0x80);
    if (*(long *)(*(long *)(*plVar5 + 200) +
                  (ulong)*(byte *)(_BE2_Ins_FunctionBlock_TypeInfo_12d3a00 + 300) * 8 + -8) !=
        _BE2_Ins_FunctionBlock_TypeInfo_12d3a00) {
      plVar5 = (long *)0x0;
    }
    lVar10 = plVar5[0x10];
    if (((*(byte *)(_UnityEngine_Object_TypeInfo_12d54e0 + 0x133) >> 2 & 1) != 0) &&
       (*(int *)(_UnityEngine_Object_TypeInfo_12d54e0 + 0xe0) == 0)) {
      native_sub_4327ec(_UnityEngine_Object_TypeInfo_12d54e0);
    }
    uVar15 = native_UnityEngine_Object__op_Equality_8e9a3c(lVar10,uVar4,0);
    if ((uVar15 & 1) == 0) goto LAB_00607bc0;
    lVar10 = *param_2;
    if ((ulong)*(ushort *)(lVar10 + 0x12a) != 0) {
      uVar15 = 0;
      piVar16 = (int *)(*(long *)(lVar10 + 0xb0) + 8);
      do {
        if (*(long *)(piVar16 + -2) == _MG_BlocksEngine2_Block_I_BE2_Block_TypeInfo_12d4dd8) {
          puVar2 = (undefined8 *)(lVar10 + (long)(*piVar16 + 4) * 0x10 + 0x138);
          goto LAB_00608bc0;
        }
        uVar15 = uVar15 + 1;
        piVar16 = piVar16 + 4;
      } while (uVar15 < *(ushort *)(lVar10 + 0x12a));
    }
    puVar2 = (undefined8 *)
             native_sub_3c9b34(param_2,_MG_BlocksEngine2_Block_I_BE2_Block_TypeInfo_12d4dd8,4);
LAB_00608bc0:
    plVar5 = (long *)(*(code *)*puVar2)(param_2,puVar2[1]);
    if (plVar5 == (long *)0x0) {
LAB_00608be8:
      plVar5 = (long *)0x0;
    }
    else {
      if (*(byte *)(*plVar5 + 300) < *(byte *)(_BE2_Ins_FunctionBlock_TypeInfo_12d3a00 + 300))
      goto LAB_00608be8;
      if (*(long *)(*(long *)(*plVar5 + 200) +
                    (ulong)*(byte *)(_BE2_Ins_FunctionBlock_TypeInfo_12d3a00 + 300) * 8 + -8) !=
          _BE2_Ins_FunctionBlock_TypeInfo_12d3a00) {
        plVar5 = (long *)0x0;
      }
    }
    *(long **)(param_1 + 0x90) = plVar5;
    native_sub_4326e0();
    plVar5 = (long *)native_MG_BlocksEngine2_Utils_BE2_BlockUtils__InstantiateNoViewBlock_BE2_Ins_ReferenceFunctionBlock__49b6e0
                               (param_2,
                                _Method_MG_BlocksEngine2_Utils_BE2_BlockUtils_InstantiateNoViewBlock_BE2_Ins_ReferenceFunctionBlock____12e2120
                               );
    if (plVar5 == (long *)0x0) goto LAB_00608dc0;
    lVar10 = *plVar5;
    if ((ulong)*(ushort *)(lVar10 + 0x12a) != 0) {
      uVar15 = 0;
      piVar16 = (int *)(*(long *)(lVar10 + 0xb0) + 8);
      do {
        if (*(long *)(piVar16 + -2) == _MG_BlocksEngine2_Block_I_BE2_Block_TypeInfo_12d4dd8) {
          puVar2 = (undefined8 *)(lVar10 + (long)(*piVar16 + 4) * 0x10 + 0x138);
          goto LAB_00608c8c;
        }
        uVar15 = uVar15 + 1;
        piVar16 = piVar16 + 4;
      } while (uVar15 < *(ushort *)(lVar10 + 0x12a));
    }
    puVar2 = (undefined8 *)
             native_sub_3c9b34(plVar5,_MG_BlocksEngine2_Block_I_BE2_Block_TypeInfo_12d4dd8,4);
LAB_00608c8c:
    plStack_78 = (long *)(*(code *)*puVar2)(plVar5,puVar2[1]);
    if (plStack_78 == (long *)0x0) {
LAB_00608cbc:
      plStack_78 = (long *)0x0;
    }
    else {
      if (*(byte *)(*plStack_78 + 300) <
          *(byte *)(_BE2_Ins_ReferenceFunctionBlock_TypeInfo_12d3a08 + 300)) goto LAB_00608cbc;
      if (*(long *)(*(long *)(*plStack_78 + 200) +
                    (ulong)*(byte *)(_BE2_Ins_ReferenceFunctionBlock_TypeInfo_12d3a08 + 300) * 8 +
                   -8) != _BE2_Ins_ReferenceFunctionBlock_TypeInfo_12d3a08) {
        plStack_78 = (long *)0x0;
      }
    }
    plVar17 = *(long **)(param_1 + 0x40);
    if (plVar17 == (long *)0x0) goto LAB_00608dc0;
    lVar10 = *plVar17;
    if ((ulong)*(ushort *)(lVar10 + 0x12a) != 0) {
      uVar15 = 0;
      piVar16 = (int *)(*(long *)(lVar10 + 0xb0) + 8);
      do {
        if (*(long *)(piVar16 + -2) == _MG_BlocksEngine2_Block_I_BE2_Block_TypeInfo_12d4dd8) {
          puVar2 = (undefined8 *)(lVar10 + (long)(*piVar16 + 4) * 0x10 + 0x138);
          goto LAB_00608d44;
        }
        uVar15 = uVar15 + 1;
        piVar16 = piVar16 + 4;
      } while (uVar15 < *(ushort *)(lVar10 + 0x12a));
    }
    puVar2 = (undefined8 *)
             native_sub_3c9b34(plVar17,_MG_BlocksEngine2_Block_I_BE2_Block_TypeInfo_12d4dd8,4);
LAB_00608d44:
    plVar17 = (long *)(*(code *)*puVar2)(plVar17,puVar2[1]);
    if (plStack_78 == (long *)0x0) goto LAB_00608dc0;
    if (plVar17 == (long *)0x0) {
LAB_00608d74:
      plVar17 = (long *)0x0;
    }
    else {
      if (*(byte *)(*plVar17 + 300) < *(byte *)(_BE2_Ins_FunctionBlock_TypeInfo_12d3a00 + 300))
      goto LAB_00608d74;
      if (*(long *)(*(long *)(*plVar17 + 200) +
                    (ulong)*(byte *)(_BE2_Ins_FunctionBlock_TypeInfo_12d3a00 + 300) * 8 + -8) !=
          _BE2_Ins_FunctionBlock_TypeInfo_12d3a00) {
        plVar17 = (long *)0x0;
      }
    }
    plStack_78[0xf] = (long)plVar17;
    native_sub_4326e0();
  }
  if (plVar5 == (long *)0x0) {
    return;
  }
  lVar10 = *param_2;
  if ((ulong)*(ushort *)(lVar10 + 0x12a) != 0) {
    uVar15 = 0;
    piVar16 = (int *)(*(long *)(lVar10 + 0xb0) + 8);
    do {
      if (*(long *)(piVar16 + -2) == _MG_BlocksEngine2_Block_I_BE2_Block_TypeInfo_12d4dd8) {
        puVar2 = (undefined8 *)(lVar10 + (long)(*piVar16 + 3) * 0x10 + 0x138);
        goto LAB_00607c38;
      }
      uVar15 = uVar15 + 1;
      piVar16 = piVar16 + 4;
    } while (uVar15 < *(ushort *)(lVar10 + 0x12a));
  }
  puVar2 = (undefined8 *)
           native_sub_3c9b34(param_2,_MG_BlocksEngine2_Block_I_BE2_Block_TypeInfo_12d4dd8,3);
LAB_00607c38:
  plVar17 = (long *)(*(code *)*puVar2)(param_2,puVar2[1]);
  if (plVar17 != (long *)0x0) {
    lVar10 = *plVar17;
    if ((ulong)*(ushort *)(lVar10 + 0x12a) != 0) {
      uVar15 = 0;
      piVar16 = (int *)(*(long *)(lVar10 + 0xb0) + 8);
      do {
        if (*(long *)(piVar16 + -2) == _MG_BlocksEngine2_Block_I_BE2_BlockLayout_TypeInfo_12d4de0) {
          puVar2 = (undefined8 *)(lVar10 + (long)(*piVar16 + 2) * 0x10 + 0x138);
          goto LAB_00607cac;
        }
        uVar15 = uVar15 + 1;
        piVar16 = piVar16 + 4;
      } while (uVar15 < *(ushort *)(lVar10 + 0x12a));
    }
    puVar2 = (undefined8 *)
             native_sub_3c9b34(plVar17,_MG_BlocksEngine2_Block_I_BE2_BlockLayout_TypeInfo_12d4de0,2)
    ;
LAB_00607cac:
    lVar10 = (*(code *)*puVar2)(plVar17,puVar2[1]);
    if (lVar10 != 0) {
      uVar1 = *(uint *)(lVar10 + 0x18);
      if (0 < (int)uVar1) {
        uVar18 = 0;
        do {
          if (uVar1 <= uVar18) {
LAB_00608dc4:
            uVar4 = native_sub_43283c();
                    /* WARNING: Subroutine does not return */
            native_sub_4327dc(uVar4,0);
          }
          plVar17 = *(long **)(lVar10 + (long)(int)uVar18 * 8 + 0x20);
          if (plVar17 == (long *)0x0) goto LAB_00608dc0;
          lVar11 = *plVar17;
          if ((ulong)*(ushort *)(lVar11 + 0x12a) != 0) {
            uVar15 = 0;
            piVar16 = (int *)(*(long *)(lVar11 + 0xb0) + 8);
            do {
              if (*(long *)(piVar16 + -2) ==
                  _MG_BlocksEngine2_Block_I_BE2_BlockSection_TypeInfo_12d4de8) {
                puVar2 = (undefined8 *)(lVar11 + (long)(*piVar16 + 1) * 0x10 + 0x138);
                goto LAB_00607d54;
              }
              uVar15 = uVar15 + 1;
              piVar16 = piVar16 + 4;
            } while (uVar15 < *(ushort *)(lVar11 + 0x12a));
          }
          puVar2 = (undefined8 *)
                   native_sub_3c9b34(plVar17,
                                     _MG_BlocksEngine2_Block_I_BE2_BlockSection_TypeInfo_12d4de8,1);
LAB_00607d54:
          plVar6 = (long *)(*(code *)*puVar2)(plVar17,puVar2[1]);
          if (plVar6 == (long *)0x0) goto LAB_00608dc0;
          lVar11 = *plVar6;
          if ((ulong)*(ushort *)(lVar11 + 0x12a) != 0) {
            uVar15 = 0;
            piVar16 = (int *)(*(long *)(lVar11 + 0xb0) + 8);
            do {
              if (*(long *)(piVar16 + -2) ==
                  _MG_BlocksEngine2_Block_I_BE2_BlockSectionHeader_TypeInfo_12d4df8) {
                puVar2 = (undefined8 *)(lVar11 + (long)(*piVar16 + 7) * 0x10 + 0x138);
                goto LAB_00607dc0;
              }
              uVar15 = uVar15 + 1;
              piVar16 = piVar16 + 4;
            } while (uVar15 < *(ushort *)(lVar11 + 0x12a));
          }
          puVar2 = (undefined8 *)
                   native_sub_3c9b34(plVar6,
                                     _MG_BlocksEngine2_Block_I_BE2_BlockSectionHeader_TypeInfo_12d4df8
                                     ,7);
LAB_00607dc0:
          (*(code *)*puVar2)(plVar6,puVar2[1]);
          lVar11 = *plVar5;
          if ((ulong)*(ushort *)(lVar11 + 0x12a) != 0) {
            uVar15 = 0;
            piVar16 = (int *)(*(long *)(lVar11 + 0xb0) + 8);
            do {
              if (*(long *)(piVar16 + -2) == _MG_BlocksEngine2_Block_I_BE2_Block_TypeInfo_12d4dd8) {
                puVar2 = (undefined8 *)(lVar11 + (long)(*piVar16 + 3) * 0x10 + 0x138);
                goto LAB_00607e2c;
              }
              uVar15 = uVar15 + 1;
              piVar16 = piVar16 + 4;
            } while (uVar15 < *(ushort *)(lVar11 + 0x12a));
          }
          puVar2 = (undefined8 *)
                   native_sub_3c9b34(plVar5,_MG_BlocksEngine2_Block_I_BE2_Block_TypeInfo_12d4dd8,3);
LAB_00607e2c:
          plVar7 = (long *)(*(code *)*puVar2)(plVar5,puVar2[1]);
          if (plVar7 == (long *)0x0) goto LAB_00608dc0;
          lVar11 = *plVar7;
          if ((ulong)*(ushort *)(lVar11 + 0x12a) != 0) {
            uVar15 = 0;
            piVar16 = (int *)(*(long *)(lVar11 + 0xb0) + 8);
            do {
              if (*(long *)(piVar16 + -2) ==
                  _MG_BlocksEngine2_Block_I_BE2_BlockLayout_TypeInfo_12d4de0) {
                puVar2 = (undefined8 *)(lVar11 + (long)(*piVar16 + 2) * 0x10 + 0x138);
                goto LAB_00607ea0;
              }
              uVar15 = uVar15 + 1;
              piVar16 = piVar16 + 4;
            } while (uVar15 < *(ushort *)(lVar11 + 0x12a));
          }
          puVar2 = (undefined8 *)
                   native_sub_3c9b34(plVar7,
                                     _MG_BlocksEngine2_Block_I_BE2_BlockLayout_TypeInfo_12d4de0,2);
LAB_00607ea0:
          lVar11 = (*(code *)*puVar2)(plVar7,puVar2[1]);
          if (lVar11 == 0) goto LAB_00608dc0;
          if (*(uint *)(lVar11 + 0x18) <= uVar18) goto LAB_00608dc4;
          lVar12 = *plVar6;
          plVar7 = *(long **)(lVar11 + (long)(int)uVar18 * 8 + 0x20);
          if ((ulong)*(ushort *)(lVar12 + 0x12a) != 0) {
            uVar15 = 0;
            piVar16 = (int *)(*(long *)(lVar12 + 0xb0) + 8);
            do {
              if (*(long *)(piVar16 + -2) ==
                  _MG_BlocksEngine2_Block_I_BE2_BlockSectionHeader_TypeInfo_12d4df8) {
                puVar2 = (undefined8 *)(lVar12 + (long)(*piVar16 + 2) * 0x10 + 0x138);
                goto LAB_00607f24;
              }
              uVar15 = uVar15 + 1;
              piVar16 = piVar16 + 4;
            } while (uVar15 < *(ushort *)(lVar12 + 0x12a));
          }
          puVar2 = (undefined8 *)
                   native_sub_3c9b34(plVar6,
                                     _MG_BlocksEngine2_Block_I_BE2_BlockSectionHeader_TypeInfo_12d4df8
                                     ,2);
LAB_00607f24:
          lVar11 = (*(code *)*puVar2)(plVar6,puVar2[1]);
          if (lVar11 == 0) goto LAB_00608dc0;
          if (0 < (int)*(ulong *)(lVar11 + 0x18)) {
            uVar15 = 0;
            uVar13 = *(ulong *)(lVar11 + 0x18) & 0xffffffff;
LAB_00607f4c:
            if (uVar15 < uVar13) {
              plVar6 = *(long **)(lVar11 + uVar15 * 8 + 0x20);
              if (plVar6 != (long *)0x0) {
                lVar12 = *plVar6;
                if ((*(byte *)(lVar12 + 300) <
                     *(byte *)(
                              _MG_BlocksEngine2_Block_BE2_BlockSectionHeader_Operation_TypeInfo_12d3990
                              + 300)) ||
                   (*(long *)(*(long *)(lVar12 + 200) +
                              (ulong)*(byte *)(
                                              _MG_BlocksEngine2_Block_BE2_BlockSectionHeader_Operation_TypeInfo_12d3990
                                              + 300) * 8 + -8) !=
                    _MG_BlocksEngine2_Block_BE2_BlockSectionHeader_Operation_TypeInfo_12d3990)) {
                  if ((*(byte *)(lVar12 + 300) <
                       *(byte *)(
                                _MG_BlocksEngine2_Block_BE2_BlockSectionHeader_LocalVariable_TypeInfo_12d3988
                                + 300)) ||
                     (*(long *)(*(long *)(lVar12 + 200) +
                                (ulong)*(byte *)(
                                                _MG_BlocksEngine2_Block_BE2_BlockSectionHeader_LocalVariable_TypeInfo_12d3988
                                                + 300) * 8 + -8) !=
                      _MG_BlocksEngine2_Block_BE2_BlockSectionHeader_LocalVariable_TypeInfo_12d3988)
                     ) goto LAB_00607fc0;
                  if ((ulong)*(ushort *)(lVar12 + 0x12a) != 0) {
                    uVar13 = 0;
                    piVar16 = (int *)(*(long *)(lVar12 + 0xb0) + 8);
                    do {
                      if (*(long *)(piVar16 + -2) ==
                          _MG_BlocksEngine2_Block_I_BE2_BlockSectionHeaderInput_TypeInfo_12d4e00) {
                        puVar2 = (undefined8 *)(lVar12 + (long)*piVar16 * 0x10 + 0x138);
                        goto LAB_00608330;
                      }
                      uVar13 = uVar13 + 1;
                      piVar16 = piVar16 + 4;
                    } while (uVar13 < *(ushort *)(lVar12 + 0x12a));
                  }
                  puVar2 = (undefined8 *)
                           native_sub_3c9b34(plVar6,
                                             _MG_BlocksEngine2_Block_I_BE2_BlockSectionHeaderInput_TypeInfo_12d4e00
                                             ,0);
LAB_00608330:
                  lVar12 = (*(code *)*puVar2)(plVar6,puVar2[1]);
                  if ((lVar12 == 0) ||
                     (uVar4 = native_UnityEngine_Component__GetComponent_ActiveAnimation__49daec
                                        (lVar12,
                                         _Method_UnityEngine_Component_GetComponent_I_BE2_Block____12e2a08
                                        ), plVar7 == (long *)0x0)) goto LAB_00608dc0;
                  lVar12 = *plVar7;
                  if ((ulong)*(ushort *)(lVar12 + 0x12a) != 0) {
                    uVar13 = 0;
                    piVar16 = (int *)(*(long *)(lVar12 + 0xb0) + 8);
                    do {
                      if (*(long *)(piVar16 + -2) ==
                          _MG_BlocksEngine2_Block_I_BE2_BlockSection_TypeInfo_12d4de8) {
                        puVar2 = (undefined8 *)(lVar12 + (long)(*piVar16 + 1) * 0x10 + 0x138);
                        goto LAB_006083b0;
                      }
                      uVar13 = uVar13 + 1;
                      piVar16 = piVar16 + 4;
                    } while (uVar13 < *(ushort *)(lVar12 + 0x12a));
                  }
                  puVar2 = (undefined8 *)
                           native_sub_3c9b34(plVar7,
                                             _MG_BlocksEngine2_Block_I_BE2_BlockSection_TypeInfo_12d4de8
                                             ,1);
LAB_006083b0:
                  plVar6 = (long *)(*(code *)*puVar2)(plVar7,puVar2[1]);
                  if (plVar6 == (long *)0x0) goto LAB_00608dc0;
                  lVar12 = *plVar6;
                  if ((ulong)*(ushort *)(lVar12 + 0x12a) != 0) {
                    uVar13 = 0;
                    piVar16 = (int *)(*(long *)(lVar12 + 0xb0) + 8);
                    do {
                      if (*(long *)(piVar16 + -2) ==
                          _MG_BlocksEngine2_Block_I_BE2_BlockSectionHeader_TypeInfo_12d4df8)
                      goto LAB_0060840c;
                      uVar13 = uVar13 + 1;
                      piVar16 = piVar16 + 4;
                    } while (uVar13 < *(ushort *)(lVar12 + 0x12a));
                  }
                }
                else {
                  if ((ulong)*(ushort *)(lVar12 + 0x12a) != 0) {
                    uVar13 = 0;
                    piVar16 = (int *)(*(long *)(lVar12 + 0xb0) + 8);
                    do {
                      if (*(long *)(piVar16 + -2) ==
                          _MG_BlocksEngine2_Block_I_BE2_BlockSectionHeaderInput_TypeInfo_12d4e00) {
                        puVar2 = (undefined8 *)(lVar12 + (long)*piVar16 * 0x10 + 0x138);
                        goto LAB_00608254;
                      }
                      uVar13 = uVar13 + 1;
                      piVar16 = piVar16 + 4;
                    } while (uVar13 < *(ushort *)(lVar12 + 0x12a));
                  }
                  puVar2 = (undefined8 *)
                           native_sub_3c9b34(plVar6,
                                             _MG_BlocksEngine2_Block_I_BE2_BlockSectionHeaderInput_TypeInfo_12d4e00
                                             ,0);
LAB_00608254:
                  lVar12 = (*(code *)*puVar2)(plVar6,puVar2[1]);
                  if ((lVar12 == 0) ||
                     (uVar4 = native_UnityEngine_Component__GetComponent_ActiveAnimation__49daec
                                        (lVar12,
                                         _Method_UnityEngine_Component_GetComponent_I_BE2_Block____12e2a08
                                        ), plVar7 == (long *)0x0)) goto LAB_00608dc0;
                  lVar12 = *plVar7;
                  if ((ulong)*(ushort *)(lVar12 + 0x12a) != 0) {
                    uVar13 = 0;
                    piVar16 = (int *)(*(long *)(lVar12 + 0xb0) + 8);
                    do {
                      if (*(long *)(piVar16 + -2) ==
                          _MG_BlocksEngine2_Block_I_BE2_BlockSection_TypeInfo_12d4de8) {
                        puVar2 = (undefined8 *)(lVar12 + (long)(*piVar16 + 1) * 0x10 + 0x138);
                        goto LAB_006082d4;
                      }
                      uVar13 = uVar13 + 1;
                      piVar16 = piVar16 + 4;
                    } while (uVar13 < *(ushort *)(lVar12 + 0x12a));
                  }
                  puVar2 = (undefined8 *)
                           native_sub_3c9b34(plVar7,
                                             _MG_BlocksEngine2_Block_I_BE2_BlockSection_TypeInfo_12d4de8
                                             ,1);
LAB_006082d4:
                  plVar6 = (long *)(*(code *)*puVar2)(plVar7,puVar2[1]);
                  if (plVar6 == (long *)0x0) goto LAB_00608dc0;
                  lVar12 = *plVar6;
                  if ((ulong)*(ushort *)(lVar12 + 0x12a) != 0) {
                    uVar13 = 0;
                    piVar16 = (int *)(*(long *)(lVar12 + 0xb0) + 8);
                    do {
                      if (*(long *)(piVar16 + -2) ==
                          _MG_BlocksEngine2_Block_I_BE2_BlockSectionHeader_TypeInfo_12d4df8)
                      goto LAB_0060840c;
                      uVar13 = uVar13 + 1;
                      piVar16 = piVar16 + 4;
                    } while (uVar13 < *(ushort *)(lVar12 + 0x12a));
                  }
                }
                puVar2 = (undefined8 *)
                         native_sub_3c9b34(plVar6,
                                           _MG_BlocksEngine2_Block_I_BE2_BlockSectionHeader_TypeInfo_12d4df8
                                           ,0);
                goto LAB_00608418;
              }
LAB_00607fc0:
              plVar8 = (long *)native_sub_432750(_System_Type___TypeInfo_12d3430,1);
              uVar4 = _UnityEngine_RectTransform_var_12d17b0;
              if (((*(byte *)(_System_Type_TypeInfo_12d6340 + 0x133) >> 2 & 1) != 0) &&
                 (*(int *)(_System_Type_TypeInfo_12d6340 + 0xe0) == 0)) {
                native_sub_4327ec(_System_Type_TypeInfo_12d6340);
              }
              lVar12 = native_System_Type__GetTypeFromHandle_b0fb24(uVar4,0);
              if (plVar8 == (long *)0x0) goto LAB_00608dc0;
              if ((lVar12 != 0) &&
                 (lVar9 = native_sub_4327f8(lVar12,*(undefined8 *)(*plVar8 + 0x40)), lVar9 == 0)) {
                uVar4 = native_sub_432830();
                    /* WARNING: Subroutine does not return */
                native_sub_4327dc(uVar4,0);
              }
              if ((int)plVar8[3] != 0) {
                plVar8[4] = lVar12;
                native_sub_4326e0(plVar8 + 4,lVar12);
                lVar12 = native_sub_432808(_UnityEngine_GameObject_TypeInfo_12d47d8);
                native_UnityEngine_GameObject___ctor_8de9a4
                          (lVar12,_StringLiteral_input_12f4df8,plVar8,0);
                if ((lVar12 != 0) &&
                   (lVar9 = native_UnityEngine_GameObject__get_transform_8de5c8(lVar12,0),
                   plVar7 != (long *)0x0)) {
                  lVar14 = *plVar7;
                  if ((ulong)*(ushort *)(lVar14 + 0x12a) != 0) {
                    uVar13 = 0;
                    piVar16 = (int *)(*(long *)(lVar14 + 0xb0) + 8);
                    do {
                      if (*(long *)(piVar16 + -2) ==
                          _MG_BlocksEngine2_Block_I_BE2_BlockSection_TypeInfo_12d4de8) {
                        puVar2 = (undefined8 *)(lVar14 + (long)(*piVar16 + 1) * 0x10 + 0x138);
                        goto LAB_006080e8;
                      }
                      uVar13 = uVar13 + 1;
                      piVar16 = piVar16 + 4;
                    } while (uVar13 < *(ushort *)(lVar14 + 0x12a));
                  }
                  puVar2 = (undefined8 *)
                           native_sub_3c9b34(plVar7,
                                             _MG_BlocksEngine2_Block_I_BE2_BlockSection_TypeInfo_12d4de8
                                             ,1);
LAB_006080e8:
                  plVar8 = (long *)(*(code *)*puVar2)(plVar7,puVar2[1]);
                  if (plVar8 != (long *)0x0) {
                    lVar14 = *plVar8;
                    if ((ulong)*(ushort *)(lVar14 + 0x12a) != 0) {
                      uVar13 = 0;
                      piVar16 = (int *)(*(long *)(lVar14 + 0xb0) + 8);
                      do {
                        if (*(long *)(piVar16 + -2) ==
                            _MG_BlocksEngine2_Block_I_BE2_BlockSectionHeader_TypeInfo_12d4df8) {
                          puVar2 = (undefined8 *)(lVar14 + (long)*piVar16 * 0x10 + 0x138);
                          goto LAB_00608150;
                        }
                        uVar13 = uVar13 + 1;
                        piVar16 = piVar16 + 4;
                      } while (uVar13 < *(ushort *)(lVar14 + 0x12a));
                    }
                    puVar2 = (undefined8 *)
                             native_sub_3c9b34(plVar8,
                                               _MG_BlocksEngine2_Block_I_BE2_BlockSectionHeader_TypeInfo_12d4df8
                                               ,0);
LAB_00608150:
                    uVar4 = (*(code *)*puVar2)(plVar8,puVar2[1]);
                    if (lVar9 != 0) {
                      native_UnityEngine_Transform__SetParent_77208c(lVar9,uVar4,0);
                      lVar9 = native_UnityEngine_GameObject__get_transform_8de5c8(lVar12,0);
                      if (lVar9 != 0) {
                        native_UnityEngine_Transform__SetAsLastSibling_772ae4(lVar9,0);
                        lVar12 = native_UnityEngine_GameObject__AddComponent_ActiveAnimation__4a2118
                                           (lVar12,
                                            _Method_UnityEngine_GameObject_AddComponent_BE2_BlockSectionHeader_ReferenceInput____12e4780
                                           );
                        if (lVar12 != 0) {
                          *(undefined8 *)(lVar12 + 0x18) = plVar6;
                          native_sub_4326e0((undefined8 *)(lVar12 + 0x18),plVar6);
                          goto LAB_00608434;
                        }
                      }
                    }
                  }
                }
                goto LAB_00608dc0;
              }
            }
            goto LAB_00608dc4;
          }
LAB_00608444:
          if (plVar7 == (long *)0x0) goto LAB_00608dc0;
          lVar11 = *plVar7;
          if ((ulong)*(ushort *)(lVar11 + 0x12a) != 0) {
            uVar15 = 0;
            piVar16 = (int *)(*(long *)(lVar11 + 0xb0) + 8);
            do {
              if (*(long *)(piVar16 + -2) ==
                  _MG_BlocksEngine2_Block_I_BE2_BlockSection_TypeInfo_12d4de8) {
                puVar2 = (undefined8 *)(lVar11 + (long)(*piVar16 + 1) * 0x10 + 0x138);
                goto LAB_006084a4;
              }
              uVar15 = uVar15 + 1;
              piVar16 = piVar16 + 4;
            } while (uVar15 < *(ushort *)(lVar11 + 0x12a));
          }
          puVar2 = (undefined8 *)
                   native_sub_3c9b34(plVar7,
                                     _MG_BlocksEngine2_Block_I_BE2_BlockSection_TypeInfo_12d4de8,1);
LAB_006084a4:
          plVar6 = (long *)(*(code *)*puVar2)(plVar7,puVar2[1]);
          if (plVar6 == (long *)0x0) goto LAB_00608dc0;
          lVar11 = *plVar6;
          if ((ulong)*(ushort *)(lVar11 + 0x12a) != 0) {
            uVar15 = 0;
            piVar16 = (int *)(*(long *)(lVar11 + 0xb0) + 8);
            do {
              if (*(long *)(piVar16 + -2) ==
                  _MG_BlocksEngine2_Block_I_BE2_BlockSectionHeader_TypeInfo_12d4df8) {
                puVar2 = (undefined8 *)(lVar11 + (long)(*piVar16 + 7) * 0x10 + 0x138);
                goto LAB_00608510;
              }
              uVar15 = uVar15 + 1;
              piVar16 = piVar16 + 4;
            } while (uVar15 < *(ushort *)(lVar11 + 0x12a));
          }
          puVar2 = (undefined8 *)
                   native_sub_3c9b34(plVar6,
                                     _MG_BlocksEngine2_Block_I_BE2_BlockSectionHeader_TypeInfo_12d4df8
                                     ,7);
LAB_00608510:
          (*(code *)*puVar2)(plVar6,puVar2[1]);
          if (((*(byte *)(_UnityEngine_Object_TypeInfo_12d54e0 + 0x133) >> 2 & 1) != 0) &&
             (*(int *)(_UnityEngine_Object_TypeInfo_12d54e0 + 0xe0) == 0)) {
            native_sub_4327ec();
          }
          uVar15 = native_UnityEngine_Object__op_Implicit_8e1b98(plStack_78,0);
          if ((uVar15 & 1) == 0) {
            lVar11 = *plVar17;
            if ((ulong)*(ushort *)(lVar11 + 0x12a) != 0) {
              uVar15 = 0;
              piVar16 = (int *)(*(long *)(lVar11 + 0xb0) + 8);
              do {
                if (*(long *)(piVar16 + -2) ==
                    _MG_BlocksEngine2_Block_I_BE2_BlockSection_TypeInfo_12d4de8) {
                  puVar2 = (undefined8 *)(lVar11 + (long)(*piVar16 + 2) * 0x10 + 0x138);
                  goto LAB_006085a4;
                }
                uVar15 = uVar15 + 1;
                piVar16 = piVar16 + 4;
              } while (uVar15 < *(ushort *)(lVar11 + 0x12a));
            }
            puVar2 = (undefined8 *)
                     native_sub_3c9b34(plVar17,
                                       _MG_BlocksEngine2_Block_I_BE2_BlockSection_TypeInfo_12d4de8,2
                                      );
LAB_006085a4:
            plVar17 = (long *)(*(code *)*puVar2)(plVar17,puVar2[1]);
            if (plVar17 != (long *)0x0) {
              lVar11 = *plVar17;
              if ((ulong)*(ushort *)(lVar11 + 0x12a) != 0) {
                uVar15 = 0;
                piVar16 = (int *)(*(long *)(lVar11 + 0xb0) + 8);
                do {
                  if (*(long *)(piVar16 + -2) ==
                      _MG_BlocksEngine2_Block_I_BE2_BlockSectionBody_TypeInfo_12d4df0) {
                    puVar2 = (undefined8 *)(lVar11 + (long)(*piVar16 + 8) * 0x10 + 0x138);
                    goto LAB_00608618;
                  }
                  uVar15 = uVar15 + 1;
                  piVar16 = piVar16 + 4;
                } while (uVar15 < *(ushort *)(lVar11 + 0x12a));
              }
              puVar2 = (undefined8 *)
                       native_sub_3c9b34(plVar17,
                                         _MG_BlocksEngine2_Block_I_BE2_BlockSectionBody_TypeInfo_12d4df0
                                         ,8);
LAB_00608618:
              (*(code *)*puVar2)(plVar17,puVar2[1]);
              lVar11 = *plVar17;
              if ((ulong)*(ushort *)(lVar11 + 0x12a) != 0) {
                uVar15 = 0;
                piVar16 = (int *)(*(long *)(lVar11 + 0xb0) + 8);
                do {
                  if (*(long *)(piVar16 + -2) ==
                      _MG_BlocksEngine2_Block_I_BE2_BlockSectionBody_TypeInfo_12d4df0) {
                    puVar2 = (undefined8 *)(lVar11 + (long)(*piVar16 + 2) * 0x10 + 0x138);
                    goto LAB_00608684;
                  }
                  uVar15 = uVar15 + 1;
                  piVar16 = piVar16 + 4;
                } while (uVar15 < *(ushort *)(lVar11 + 0x12a));
              }
              puVar2 = (undefined8 *)
                       native_sub_3c9b34(plVar17,
                                         _MG_BlocksEngine2_Block_I_BE2_BlockSectionBody_TypeInfo_12d4df0
                                         ,2);
LAB_00608684:
              lVar11 = (*(code *)*puVar2)(plVar17,puVar2[1]);
              if (lVar11 == 0) goto LAB_00608dc0;
              if (0 < (int)*(ulong *)(lVar11 + 0x18)) {
                uVar15 = 0;
                uVar13 = *(ulong *)(lVar11 + 0x18) & 0xffffffff;
                do {
                  if (uVar13 <= uVar15) goto LAB_00608dc4;
                  lVar12 = *plVar7;
                  uVar4 = *(undefined8 *)(lVar11 + uVar15 * 8 + 0x20);
                  if ((ulong)*(ushort *)(lVar12 + 0x12a) != 0) {
                    uVar13 = 0;
                    piVar16 = (int *)(*(long *)(lVar12 + 0xb0) + 8);
                    do {
                      if (*(long *)(piVar16 + -2) ==
                          _MG_BlocksEngine2_Block_I_BE2_BlockSection_TypeInfo_12d4de8) {
                        puVar2 = (undefined8 *)(lVar12 + (long)(*piVar16 + 2) * 0x10 + 0x138);
                        goto LAB_00608714;
                      }
                      uVar13 = uVar13 + 1;
                      piVar16 = piVar16 + 4;
                    } while (uVar13 < *(ushort *)(lVar12 + 0x12a));
                  }
                  puVar2 = (undefined8 *)
                           native_sub_3c9b34(plVar7,
                                             _MG_BlocksEngine2_Block_I_BE2_BlockSection_TypeInfo_12d4de8
                                             ,2);
LAB_00608714:
                  plVar17 = (long *)(*(code *)*puVar2)(plVar7,puVar2[1]);
                  if (plVar17 == (long *)0x0) goto LAB_00608dc0;
                  lVar12 = *plVar17;
                  if ((ulong)*(ushort *)(lVar12 + 0x12a) != 0) {
                    uVar13 = 0;
                    piVar16 = (int *)(*(long *)(lVar12 + 0xb0) + 8);
                    do {
                      if (*(long *)(piVar16 + -2) ==
                          _MG_BlocksEngine2_Block_I_BE2_BlockSectionBody_TypeInfo_12d4df0) {
                        puVar2 = (undefined8 *)(lVar12 + (long)*piVar16 * 0x10 + 0x138);
                        goto LAB_00608784;
                      }
                      uVar13 = uVar13 + 1;
                      piVar16 = piVar16 + 4;
                    } while (uVar13 < *(ushort *)(lVar12 + 0x12a));
                  }
                  puVar2 = (undefined8 *)
                           native_sub_3c9b34(plVar17,
                                             _MG_BlocksEngine2_Block_I_BE2_BlockSectionBody_TypeInfo_12d4df0
                                             ,0);
LAB_00608784:
                  uVar3 = (*(code *)*puVar2)(plVar17,puVar2[1]);
                  native_BE2_Ins_FunctionBlock__InstantiateNoViewBlockRecursive_60780c
                            (param_1,uVar4,uVar3);
                  uVar13 = (ulong)*(uint *)(lVar11 + 0x18);
                  uVar15 = uVar15 + 1;
                } while ((long)uVar15 < (long)(int)*(uint *)(lVar11 + 0x18));
              }
              lVar11 = *plVar7;
              if ((ulong)*(ushort *)(lVar11 + 0x12a) != 0) {
                uVar15 = 0;
                piVar16 = (int *)(*(long *)(lVar11 + 0xb0) + 8);
                do {
                  if (*(long *)(piVar16 + -2) ==
                      _MG_BlocksEngine2_Block_I_BE2_BlockSection_TypeInfo_12d4de8) {
                    puVar2 = (undefined8 *)(lVar11 + (long)(*piVar16 + 2) * 0x10 + 0x138);
                    goto LAB_00608808;
                  }
                  uVar15 = uVar15 + 1;
                  piVar16 = piVar16 + 4;
                } while (uVar15 < *(ushort *)(lVar11 + 0x12a));
              }
              puVar2 = (undefined8 *)
                       native_sub_3c9b34(plVar7,
                                         _MG_BlocksEngine2_Block_I_BE2_BlockSection_TypeInfo_12d4de8
                                         ,2);
LAB_00608808:
              plVar17 = (long *)(*(code *)*puVar2)(plVar7,puVar2[1]);
              if (plVar17 == (long *)0x0) goto LAB_00608dc0;
              lVar11 = *plVar17;
              if ((ulong)*(ushort *)(lVar11 + 0x12a) != 0) {
                uVar15 = 0;
                piVar16 = (int *)(*(long *)(lVar11 + 0xb0) + 8);
                do {
                  if (*(long *)(piVar16 + -2) ==
                      _MG_BlocksEngine2_Block_I_BE2_BlockSectionBody_TypeInfo_12d4df0) {
                    puVar2 = (undefined8 *)(lVar11 + (long)(*piVar16 + 8) * 0x10 + 0x138);
                    goto LAB_0060887c;
                  }
                  uVar15 = uVar15 + 1;
                  piVar16 = piVar16 + 4;
                } while (uVar15 < *(ushort *)(lVar11 + 0x12a));
              }
              puVar2 = (undefined8 *)
                       native_sub_3c9b34(plVar17,
                                         _MG_BlocksEngine2_Block_I_BE2_BlockSectionBody_TypeInfo_12d4df0
                                         ,8);
LAB_0060887c:
              (*(code *)*puVar2)(plVar17,puVar2[1]);
            }
          }
          uVar18 = uVar18 + 1;
          uVar1 = *(uint *)(lVar10 + 0x18);
        } while ((int)uVar18 < (int)uVar1);
      }
      lVar10 = *plVar5;
      if ((ulong)*(ushort *)(lVar10 + 0x12a) != 0) {
        uVar15 = 0;
        piVar16 = (int *)(*(long *)(lVar10 + 0xb0) + 8);
        do {
          if (*(long *)(piVar16 + -2) == _MG_BlocksEngine2_Block_I_BE2_Block_TypeInfo_12d4dd8) {
            puVar2 = (undefined8 *)(lVar10 + (long)*piVar16 * 0x10 + 0x138);
            goto LAB_006088fc;
          }
          uVar15 = uVar15 + 1;
          piVar16 = piVar16 + 4;
        } while (uVar15 < *(ushort *)(lVar10 + 0x12a));
      }
      puVar2 = (undefined8 *)
               native_sub_3c9b34(plVar5,_MG_BlocksEngine2_Block_I_BE2_Block_TypeInfo_12d4dd8,0);
LAB_006088fc:
      lVar10 = (*(code *)*puVar2)(plVar5,puVar2[1]);
      if (lVar10 != 0) {
        native_UnityEngine_Transform__SetParent_77208c(lVar10,param_3,0);
        lVar10 = *plVar5;
        if ((ulong)*(ushort *)(lVar10 + 0x12a) != 0) {
          uVar15 = 0;
          piVar16 = (int *)(*(long *)(lVar10 + 0xb0) + 8);
          do {
            if (*(long *)(piVar16 + -2) == _MG_BlocksEngine2_Block_I_BE2_Block_TypeInfo_12d4dd8) {
              puVar2 = (undefined8 *)(lVar10 + (long)*piVar16 * 0x10 + 0x138);
              goto LAB_00608978;
            }
            uVar15 = uVar15 + 1;
            piVar16 = piVar16 + 4;
          } while (uVar15 < *(ushort *)(lVar10 + 0x12a));
        }
        puVar2 = (undefined8 *)
                 native_sub_3c9b34(plVar5,_MG_BlocksEngine2_Block_I_BE2_Block_TypeInfo_12d4dd8,0);
LAB_00608978:
        lVar10 = (*(code *)*puVar2)(plVar5,puVar2[1]);
        if (lVar10 != 0) {
          native_UnityEngine_Transform__SetAsLastSibling_772ae4(lVar10,0);
          lVar10 = *plVar5;
          if ((ulong)*(ushort *)(lVar10 + 0x12a) != 0) {
            uVar15 = 0;
            piVar16 = (int *)(*(long *)(lVar10 + 0xb0) + 8);
            do {
              if (*(long *)(piVar16 + -2) == _MG_BlocksEngine2_Block_I_BE2_Block_TypeInfo_12d4dd8) {
                puVar2 = (undefined8 *)(lVar10 + (long)(*piVar16 + 4) * 0x10 + 0x138);
                goto LAB_006089f0;
              }
              uVar15 = uVar15 + 1;
              piVar16 = piVar16 + 4;
            } while (uVar15 < *(ushort *)(lVar10 + 0x12a));
          }
          puVar2 = (undefined8 *)
                   native_sub_3c9b34(plVar5,_MG_BlocksEngine2_Block_I_BE2_Block_TypeInfo_12d4dd8,4);
LAB_006089f0:
          lVar10 = (*(code *)*puVar2)(plVar5,puVar2[1]);
          if (lVar10 != 0) {
            uVar3 = native_System_Object__GetType_adb48c(lVar10,0);
            uVar4 = _BE2_Op_FunctionLocalVariable_var_12d1308;
            if (((*(byte *)(_System_Type_TypeInfo_12d6340 + 0x133) >> 2 & 1) != 0) &&
               (*(int *)(_System_Type_TypeInfo_12d6340 + 0xe0) == 0)) {
              native_sub_4327ec(_System_Type_TypeInfo_12d6340);
            }
            uVar4 = native_System_Type__GetTypeFromHandle_b0fb24(uVar4,0);
            uVar15 = native_System_Type__op_Equality_b117c4(uVar3,uVar4,0);
            if ((uVar15 & 1) != 0) {
              uVar4 = native_BE2_Ins_FunctionBlock__C_SetLocalVarName_608ddc(param_1,plVar5,param_2)
              ;
              native_UnityEngine_MonoBehaviour__StartCoroutine_8e9174(param_1,uVar4,0);
            }
            lVar10 = *plVar5;
            if ((ulong)*(ushort *)(lVar10 + 0x12a) != 0) {
              uVar15 = 0;
              piVar16 = (int *)(*(long *)(lVar10 + 0xb0) + 8);
              do {
                if (*(long *)(piVar16 + -2) == _MG_BlocksEngine2_Block_I_BE2_Block_TypeInfo_12d4dd8)
                {
                  puVar2 = (undefined8 *)(lVar10 + (long)(*piVar16 + 4) * 0x10 + 0x138);
                  goto LAB_00608adc;
                }
                uVar15 = uVar15 + 1;
                piVar16 = piVar16 + 4;
              } while (uVar15 < *(ushort *)(lVar10 + 0x12a));
            }
            puVar2 = (undefined8 *)
                     native_sub_3c9b34(plVar5,_MG_BlocksEngine2_Block_I_BE2_Block_TypeInfo_12d4dd8,4
                                      );
LAB_00608adc:
            plVar5 = (long *)(*(code *)*puVar2)(plVar5,puVar2[1]);
            if (plVar5 != (long *)0x0) {
              lVar10 = *plVar5;
              if ((ulong)*(ushort *)(lVar10 + 0x12a) != 0) {
                uVar15 = 0;
                piVar16 = (int *)(*(long *)(lVar10 + 0xb0) + 8);
                do {
                  if (*(long *)(piVar16 + -2) ==
                      _MG_BlocksEngine2_Block_Instruction_I_BE2_Instruction_TypeInfo_12d4e28) {
                    puVar2 = (undefined8 *)(lVar10 + (long)*piVar16 * 0x10 + 0x138);
                    goto LAB_00608b4c;
                  }
                  uVar15 = uVar15 + 1;
                  piVar16 = piVar16 + 4;
                } while (uVar15 < *(ushort *)(lVar10 + 0x12a));
              }
              puVar2 = (undefined8 *)
                       native_sub_3c9b34(plVar5,
                                         _MG_BlocksEngine2_Block_Instruction_I_BE2_Instruction_TypeInfo_12d4e28
                                         ,0);
LAB_00608b4c:
              plVar5 = (long *)(*(code *)*puVar2)(plVar5,puVar2[1]);
              if (plVar5 != (long *)0x0) {
                if ((*(byte *)(
                              _MG_BlocksEngine2_Block_Instruction_BE2_InstructionBase_TypeInfo_12d3a18
                              + 300) <= *(byte *)(*plVar5 + 300)) &&
                   (*(long *)(*(long *)(*plVar5 + 200) +
                              (ulong)*(byte *)(
                                              _MG_BlocksEngine2_Block_Instruction_BE2_InstructionBase_TypeInfo_12d3a18
                                              + 300) * 8 + -8) ==
                    _MG_BlocksEngine2_Block_Instruction_BE2_InstructionBase_TypeInfo_12d3a18)) {
                  if ((bRam000000000133ee5a & 1) == 0) {
                    native_sub_43273c(&
                                      Method_MG_BlocksEngine2_Utils_BE2_ArrayUtils_FindAll_I_BE2_BlockSection____12e20e0
                                     );
                    native_sub_43273c(&MG_BlocksEngine2_Block_I_BE2_BlockLayout_TypeInfo_12d4de0);
                    native_sub_43273c(&
                                      MG_BlocksEngine2_Block_I_BE2_BlockSectionHeader_TypeInfo_12d4df8
                                     );
                    native_sub_43273c(&MG_BlocksEngine2_Block_I_BE2_BlockSection_TypeInfo_12d4de8);
                    native_sub_43273c(&MG_BlocksEngine2_Block_I_BE2_Block_TypeInfo_12d4dd8);
                    native_sub_43273c(&int___TypeInfo_12d3258);
                    native_sub_43273c(&Method_System_Predicate_I_BE2_BlockSection___ctor___12ddae8);
                    native_sub_43273c(&System_Predicate_I_BE2_BlockSection__TypeInfo_12d2d90);
                    native_sub_43273c(&
                                      Method_MG_BlocksEngine2_Block_Instruction_BE2_InstructionBase___c__Initialize_b__34_0___12e9678
                                     );
                    native_sub_43273c(&
                                      MG_BlocksEngine2_Block_Instruction_BE2_InstructionBase___c_TypeInfo_12d7048
                                     );
                    bRam000000000133ee5a = 1;
                  }
                  plVar17 = (long *)plVar5[8];
                  if (plVar17 != (long *)0x0) {
                    lVar10 = *plVar17;
                    if ((ulong)*(ushort *)(lVar10 + 0x12a) != 0) {
                      uVar15 = 0;
                      piVar16 = (int *)(*(long *)(lVar10 + 0xb0) + 8);
                      do {
                        if (*(long *)(piVar16 + -2) ==
                            _MG_BlocksEngine2_Block_I_BE2_Block_TypeInfo_12d4dd8) {
                          puVar2 = (undefined8 *)(lVar10 + (long)(*piVar16 + 3) * 0x10 + 0x138);
                          goto LAB_00608f94;
                        }
                        uVar15 = uVar15 + 1;
                        piVar16 = piVar16 + 4;
                      } while (uVar15 < *(ushort *)(lVar10 + 0x12a));
                    }
                    puVar2 = (undefined8 *)
                             native_sub_3c9b34(plVar17,
                                               _MG_BlocksEngine2_Block_I_BE2_Block_TypeInfo_12d4dd8,
                                               3);
LAB_00608f94:
                    plVar17 = (long *)(*(code *)*puVar2)(plVar17,puVar2[1]);
                    if (plVar17 != (long *)0x0) {
                      lVar10 = *plVar17;
                      if ((ulong)*(ushort *)(lVar10 + 0x12a) != 0) {
                        uVar15 = 0;
                        piVar16 = (int *)(*(long *)(lVar10 + 0xb0) + 8);
                        do {
                          if (*(long *)(piVar16 + -2) ==
                              _MG_BlocksEngine2_Block_I_BE2_BlockLayout_TypeInfo_12d4de0) {
                            puVar2 = (undefined8 *)(lVar10 + (long)(*piVar16 + 2) * 0x10 + 0x138);
                            goto LAB_00609008;
                          }
                          uVar15 = uVar15 + 1;
                          piVar16 = piVar16 + 4;
                        } while (uVar15 < *(ushort *)(lVar10 + 0x12a));
                      }
                      puVar2 = (undefined8 *)
                               native_sub_3c9b34(plVar17,
                                                 _MG_BlocksEngine2_Block_I_BE2_BlockLayout_TypeInfo_12d4de0
                                                 ,2);
LAB_00609008:
                      lVar10 = (*(code *)*puVar2)(plVar17,puVar2[1]);
                      if (lVar10 != 0) {
                        if (*(int *)(lVar10 + 0x18) == 0) {
                          uVar4 = native_sub_43283c();
                    /* WARNING: Subroutine does not return */
                          native_sub_4327dc(uVar4,0);
                        }
                        plVar17 = *(long **)(lVar10 + 0x20);
                        if (plVar17 != (long *)0x0) {
                          lVar10 = *plVar17;
                          if ((ulong)*(ushort *)(lVar10 + 0x12a) != 0) {
                            uVar15 = 0;
                            piVar16 = (int *)(*(long *)(lVar10 + 0xb0) + 8);
                            do {
                              if (*(long *)(piVar16 + -2) ==
                                  _MG_BlocksEngine2_Block_I_BE2_BlockSection_TypeInfo_12d4de8) {
                                puVar2 = (undefined8 *)
                                         (lVar10 + (long)(*piVar16 + 1) * 0x10 + 0x138);
                                goto LAB_00609088;
                              }
                              uVar15 = uVar15 + 1;
                              piVar16 = piVar16 + 4;
                            } while (uVar15 < *(ushort *)(lVar10 + 0x12a));
                          }
                          puVar2 = (undefined8 *)
                                   native_sub_3c9b34(plVar17,
                                                  _MG_BlocksEngine2_Block_I_BE2_BlockSection_TypeInfo_12d4de8
                                                  ,1);
LAB_00609088:
                          lVar10 = (*(code *)*puVar2)(plVar17,puVar2[1]);
                          plVar17 = plVar5 + 5;
                          *plVar17 = lVar10;
                          native_sub_4326e0(plVar17,lVar10);
                          plVar17 = (long *)*plVar17;
                          if (plVar17 != (long *)0x0) {
                            lVar10 = *plVar17;
                            if ((ulong)*(ushort *)(lVar10 + 0x12a) != 0) {
                              uVar15 = 0;
                              piVar16 = (int *)(*(long *)(lVar10 + 0xb0) + 8);
                              do {
                                if (*(long *)(piVar16 + -2) ==
                                    _MG_BlocksEngine2_Block_I_BE2_BlockSectionHeader_TypeInfo_12d4df8
                                   ) {
                                  puVar2 = (undefined8 *)
                                           (lVar10 + (long)(*piVar16 + 7) * 0x10 + 0x138);
                                  goto LAB_00609110;
                                }
                                uVar15 = uVar15 + 1;
                                piVar16 = piVar16 + 4;
                              } while (uVar15 < *(ushort *)(lVar10 + 0x12a));
                            }
                            puVar2 = (undefined8 *)
                                     native_sub_3c9b34(plVar17,
                                                  _MG_BlocksEngine2_Block_I_BE2_BlockSectionHeader_TypeInfo_12d4df8
                                                  ,7);
LAB_00609110:
                            (*(code *)*puVar2)(plVar17,puVar2[1]);
                            plVar17 = (long *)plVar5[3];
                            if (plVar17 != (long *)0x0) {
                              lVar10 = *plVar17;
                              if ((ulong)*(ushort *)(lVar10 + 0x12a) != 0) {
                                uVar15 = 0;
                                piVar16 = (int *)(*(long *)(lVar10 + 0xb0) + 8);
                                do {
                                  if (*(long *)(piVar16 + -2) ==
                                      _MG_BlocksEngine2_Block_I_BE2_BlockLayout_TypeInfo_12d4de0) {
                                    puVar2 = (undefined8 *)
                                             (lVar10 + (long)(*piVar16 + 2) * 0x10 + 0x138);
                                    goto LAB_0060917c;
                                  }
                                  uVar15 = uVar15 + 1;
                                  piVar16 = piVar16 + 4;
                                } while (uVar15 < *(ushort *)(lVar10 + 0x12a));
                              }
                              puVar2 = (undefined8 *)
                                       native_sub_3c9b34(plVar17,
                                                  _MG_BlocksEngine2_Block_I_BE2_BlockLayout_TypeInfo_12d4de0
                                                  ,2);
LAB_0060917c:
                              (*(code *)*puVar2)(plVar17,puVar2[1]);
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
                              puVar2 = *(undefined8 **)
                                        (
                                        _MG_BlocksEngine2_Block_Instruction_BE2_InstructionBase___c_TypeInfo_12d7048
                                        + 0xb8);
                              lVar10 = puVar2[1];
                              if (lVar10 == 0) {
                                if (((*(byte *)(
                                               _MG_BlocksEngine2_Block_Instruction_BE2_InstructionBase___c_TypeInfo_12d7048
                                               + 0x133) >> 2 & 1) != 0) &&
                                   (*(int *)(
                                            _MG_BlocksEngine2_Block_Instruction_BE2_InstructionBase___c_TypeInfo_12d7048
                                            + 0xe0) == 0)) {
                                  native_sub_4327ec(
                                                  _MG_BlocksEngine2_Block_Instruction_BE2_InstructionBase___c_TypeInfo_12d7048
                                                  );
                                  puVar2 = *(undefined8 **)
                                            (
                                            _MG_BlocksEngine2_Block_Instruction_BE2_InstructionBase___c_TypeInfo_12d7048
                                            + 0xb8);
                                }
                                uVar4 = *puVar2;
                                lVar10 = native_sub_432808(
                                                  _System_Predicate_I_BE2_BlockSection__TypeInfo_12d2d90
                                                  );
                                native_System_Predicate_BaseInvokableCall____ctor_ac31d4
                                          (lVar10,uVar4,
                                           _Method_MG_BlocksEngine2_Block_Instruction_BE2_InstructionBase___c__Initialize_b__34_0___12e9678
                                           ,
                                           _Method_System_Predicate_I_BE2_BlockSection___ctor___12ddae8
                                          );
                                plVar17 = (long *)(*(long *)(
                                                  _MG_BlocksEngine2_Block_Instruction_BE2_InstructionBase___c_TypeInfo_12d7048
                                                  + 0xb8) + 8);
                                *plVar17 = lVar10;
                                native_sub_4326e0(plVar17,lVar10);
                              }
                              lVar10 = native_MG_BlocksEngine2_Utils_BE2_ArrayUtils__FindAll_I_BE2_BlockSection__49b540
                                                 (&stack0xffffffffffffffc8,lVar10,
                                                  _Method_MG_BlocksEngine2_Utils_BE2_ArrayUtils_FindAll_I_BE2_BlockSection____12e20e0
                                                 );
                              if ((lVar10 != 0) &&
                                 (lVar10 = native_sub_432750(_int___TypeInfo_12d3258,
                                                             *(int *)(lVar10 + 0x18) + 1),
                                 plVar5 != (long *)0x0)) {
                                plVar5[0xb] = lVar10;
                                native_sub_4326e0(plVar5 + 0xb,lVar10);
                                plVar17 = (long *)plVar5[3];
                                if (plVar17 != (long *)0x0) {
                                  lVar10 = *plVar17;
                                  if ((ulong)*(ushort *)(lVar10 + 0x12a) != 0) {
                                    uVar15 = 0;
                                    piVar16 = (int *)(*(long *)(lVar10 + 0xb0) + 8);
                                    do {
                                      if (*(long *)(piVar16 + -2) ==
                                          _MG_BlocksEngine2_Block_I_BE2_BlockLayout_TypeInfo_12d4de0
                                         ) {
                                        puVar2 = (undefined8 *)
                                                 (lVar10 + (long)(*piVar16 + 2) * 0x10 + 0x138);
                                        goto LAB_006092d8;
                                      }
                                      uVar15 = uVar15 + 1;
                                      piVar16 = piVar16 + 4;
                                    } while (uVar15 < *(ushort *)(lVar10 + 0x12a));
                                  }
                                  puVar2 = (undefined8 *)
                                           native_sub_3c9b34(plVar17,
                                                  _MG_BlocksEngine2_Block_I_BE2_BlockLayout_TypeInfo_12d4de0
                                                  ,2);
LAB_006092d8:
                                  lVar10 = (*(code *)*puVar2)(plVar17,puVar2[1]);
                                  plVar5[4] = lVar10;
                                  native_sub_4326e0(plVar5 + 4,lVar10);
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
              }
            }
          }
        }
      }
    }
  }
LAB_00608dc0:
                    /* WARNING: Subroutine does not return */
  native_sub_432810();
LAB_0060840c:
  puVar2 = (undefined8 *)(lVar12 + (long)*piVar16 * 0x10 + 0x138);
LAB_00608418:
  uVar3 = (*(code *)*puVar2)(plVar6,puVar2[1]);
  native_BE2_Ins_FunctionBlock__InstantiateNoViewBlockRecursive_60780c(param_1,uVar4,uVar3);
LAB_00608434:
  uVar13 = (ulong)*(uint *)(lVar11 + 0x18);
  uVar15 = uVar15 + 1;
  if ((long)(int)*(uint *)(lVar11 + 0x18) <= (long)uVar15) goto LAB_00608444;
  goto LAB_00607f4c;
}



/* BE2_Ins_FunctionBlock$$C_SetLocalVarName @ 0x608ddc
 * System_Collections_IEnumerator_o* BE2_Ins_FunctionBlock__C_SetLocalVarName (BE2_Ins_FunctionBlock_o* __this, MG_BlocksEngine2_Block_I_BE2_Block_o* noViewBlock, MG_BlocksEngine2_Block_I_BE2_Block_o* mirrorBlock, const MethodInfo* method); */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* BE2_Ins_FunctionBlock$$C_SetLocalVarName
   System_Collections_IEnumerator_o* BE2_Ins_FunctionBlock__C_SetLocalVarName
   (BE2_Ins_FunctionBlock_o* __this, MG_BlocksEngine2_Block_I_BE2_Block_o* noViewBlock,
   MG_BlocksEngine2_Block_I_BE2_Block_o* mirrorBlock, const MethodInfo* method); */

long native_BE2_Ins_FunctionBlock__C_SetLocalVarName_608ddc
               (undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  long lVar1;
  
  if ((bRam000000000133ee15 & 1) == 0) {
    native_sub_43273c(&BE2_Ins_FunctionBlock__C_SetLocalVarName_d__15_TypeInfo_12d7038);
    bRam000000000133ee15 = 1;
  }
  lVar1 = native_sub_432808(_BE2_Ins_FunctionBlock__C_SetLocalVarName_d__15_TypeInfo_12d7038);
  native_BE2_Ins_FunctionBlock__C_SetLocalVarName_d__15___ctor_548478(lVar1,0,0);
  if (lVar1 != 0) {
    *(undefined8 *)(lVar1 + 0x30) = param_1;
    native_sub_4326e0((undefined8 *)(lVar1 + 0x30),param_1);
    *(undefined8 *)(lVar1 + 0x20) = param_2;
    native_sub_4326e0((undefined8 *)(lVar1 + 0x20),param_2);
    *(undefined8 *)(lVar1 + 0x28) = param_3;
    native_sub_4326e0((undefined8 *)(lVar1 + 0x28),param_3);
    return lVar1;
  }
                    /* WARNING: Subroutine does not return */
  native_sub_432810();
}



/* BE2_Ins_FunctionBlock$$OnPrepareToPlay @ 0x609318
 * void BE2_Ins_FunctionBlock__OnPrepareToPlay (BE2_Ins_FunctionBlock_o* __this, const MethodInfo* method); */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* BE2_Ins_FunctionBlock$$OnPrepareToPlay
   void BE2_Ins_FunctionBlock__OnPrepareToPlay (BE2_Ins_FunctionBlock_o* __this, const MethodInfo*
   method); */

void native_BE2_Ins_FunctionBlock__OnPrepareToPlay_609318(long param_1)

{
  long lVar1;
  ulong uVar2;
  long *plVar3;
  undefined8 uStack_48;
  undefined8 uStack_40;
  long lStack_38;
  
  if ((bRam000000000133ee16 & 1) == 0) {
    native_sub_43273c(&MG_BlocksEngine2_Block_BE2_Block_TypeInfo_12d3970);
    native_sub_43273c(&
                      Method_System_Collections_Generic_List_Enumerator_BE2_Op_FunctionLocalVariable__Dispose___12da390
                     );
    native_sub_43273c(&
                      Method_System_Collections_Generic_List_Enumerator_BE2_Op_FunctionLocalVariable__MoveNext___12da398
                     );
    native_sub_43273c(&
                      Method_System_Collections_Generic_List_Enumerator_BE2_Op_FunctionLocalVariable__get_Current___12da3a0
                     );
    native_sub_43273c(&
                      Method_System_Collections_Generic_List_BE2_Op_FunctionLocalVariable__GetEnumerator___12dc480
                     );
    bRam000000000133ee16 = 1;
  }
  uStack_40 = 0;
  lStack_38 = 0;
  uStack_48 = 0;
  if (*(long *)(param_1 + 0x98) == 0) {
                    /* WARNING: Subroutine does not return */
    native_sub_432810();
  }
  native_System_Collections_Generic_List_BE2_Op_FunctionLocalVariable___GetEnumerator_d414fc
            (&uStack_48,*(long *)(param_1 + 0x98),
             _Method_System_Collections_Generic_List_BE2_Op_FunctionLocalVariable__GetEnumerator___12dc480
            );
  do {
    uVar2 = native_System_Collections_Generic_List_Enumerator_BE2_Op_FunctionLocalVariable___MoveNext_7e8f30
                      (&uStack_48,
                       _Method_System_Collections_Generic_List_Enumerator_BE2_Op_FunctionLocalVariable__MoveNext___12da398
                      );
    lVar1 = lStack_38;
    if ((uVar2 & 1) == 0) {
      native_System_Collections_Generic_List_Enumerator_BE2_Op_FunctionLocalVariable___Dispose_7e8f2c
                (&uStack_48,
                 _Method_System_Collections_Generic_List_Enumerator_BE2_Op_FunctionLocalVariable__Dispose___12da390
                );
      return;
    }
    if (lStack_38 == 0) {
                    /* WARNING: Subroutine does not return */
      native_sub_432810();
    }
    *(undefined8 *)(lStack_38 + 0x78) = *(undefined8 *)(param_1 + 0x80);
    native_sub_4326e0();
    plVar3 = *(long **)(param_1 + 0x40);
    if (plVar3 == (long *)0x0) {
LAB_006093fc:
      plVar3 = (long *)0x0;
    }
    else {
      if (*(byte *)(*plVar3 + 300) <
          *(byte *)(_MG_BlocksEngine2_Block_BE2_Block_TypeInfo_12d3970 + 300)) goto LAB_006093fc;
      if (*(long *)(*(long *)(*plVar3 + 200) +
                    (ulong)*(byte *)(_MG_BlocksEngine2_Block_BE2_Block_TypeInfo_12d3970 + 300) * 8 +
                   -8) != _MG_BlocksEngine2_Block_BE2_Block_TypeInfo_12d3970) {
        plVar3 = (long *)0x0;
      }
    }
    *(long *)(lVar1 + 0x80) = (long)plVar3;
    native_sub_4326e0((long *)(lVar1 + 0x80));
  } while( true );
}



/* BE2_Ins_FunctionBlock$$Function @ 0x6094a0
 * void BE2_Ins_FunctionBlock__Function (BE2_Ins_FunctionBlock_o* __this, const MethodInfo* method); */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* BE2_Ins_FunctionBlock$$Function
   void BE2_Ins_FunctionBlock__Function (BE2_Ins_FunctionBlock_o* __this, const MethodInfo* method);
    */

void native_BE2_Ins_FunctionBlock__Function_6094a0(long param_1)

{
  undefined4 uVar1;
  int iVar2;
  long lVar3;
  undefined8 *puVar4;
  undefined8 uVar5;
  code *UNRECOVERED_JUMPTABLE;
  long lVar6;
  ulong uVar7;
  int *piVar8;
  uint uVar9;
  long *plVar10;
  long lVar11;
  long *plVar12;
  
  if ((bRam000000000133ee17 & 1) == 0) {
    native_sub_43273c(&MG_BlocksEngine2_Block_I_BE2_BlockSectionHeaderInput_TypeInfo_12d4e00);
    native_sub_43273c(&Method_System_Collections_Generic_List_string__get_Count___12dcef8);
    native_sub_43273c(&Method_System_Collections_Generic_List_string__set_Item___12dcf08);
    bRam000000000133ee17 = 1;
  }
  lVar11 = *(long *)(param_1 + 0xa0);
  if (lVar11 != 0) {
    uVar9 = 0;
    do {
      if (*(int *)(lVar11 + 0x18) <= (int)uVar9) {
        if ((bRam000000000133ee61 & 1) == 0) {
          native_sub_43273c(&MG_BlocksEngine2_Block_I_BE2_Block_TypeInfo_12d4dd8);
          native_sub_43273c(&MG_BlocksEngine2_Core_I_BE2_BlocksStack_TypeInfo_12d4e10);
          native_sub_43273c(&
                            MG_BlocksEngine2_Block_Instruction_I_BE2_InstructionBase_TypeInfo_12d4e30
                           );
          native_sub_43273c(&MG_BlocksEngine2_Block_Instruction_I_BE2_Instruction_TypeInfo_12d4e28);
          bRam000000000133ee61 = 1;
        }
        plVar12 = *(long **)(param_1 + 0x48);
        if (plVar12 == (long *)0x0) goto LAB_00609ef0;
        lVar11 = *plVar12;
        if ((ulong)*(ushort *)(lVar11 + 0x12a) == 0) goto LAB_00609698;
        uVar7 = 0;
        piVar8 = (int *)(*(long *)(lVar11 + 0xb0) + 8);
        goto LAB_0060967c;
      }
      lVar3 = native_MG_BlocksEngine2_Block_Instruction_BE2_InstructionBase__get_Section0Inputs_603b78
                        (param_1);
      if (lVar3 == 0) break;
      if (*(uint *)(lVar3 + 0x18) <= uVar9) {
        uVar5 = native_sub_43283c();
                    /* WARNING: Subroutine does not return */
        native_sub_4327dc(uVar5,0);
      }
      plVar12 = *(long **)(lVar3 + (long)(int)uVar9 * 8 + 0x20);
      if (plVar12 == (long *)0x0) break;
      lVar3 = *plVar12;
      if ((ulong)*(ushort *)(lVar3 + 0x12a) != 0) {
        uVar7 = 0;
        piVar8 = (int *)(*(long *)(lVar3 + 0xb0) + 8);
        do {
          if (*(long *)(piVar8 + -2) ==
              _MG_BlocksEngine2_Block_I_BE2_BlockSectionHeaderInput_TypeInfo_12d4e00) {
            puVar4 = (undefined8 *)(lVar3 + (long)(*piVar8 + 3) * 0x10 + 0x138);
            goto LAB_00609594;
          }
          uVar7 = uVar7 + 1;
          piVar8 = piVar8 + 4;
        } while (uVar7 < *(ushort *)(lVar3 + 0x12a));
      }
      puVar4 = (undefined8 *)
               native_sub_3c9b34(plVar12,
                                 _MG_BlocksEngine2_Block_I_BE2_BlockSectionHeaderInput_TypeInfo_12d4e00
                                 ,3);
LAB_00609594:
      uVar5 = (*(code *)*puVar4)(plVar12,puVar4[1]);
      native_System_Collections_Generic_List_object___set_Item_d40958
                (lVar11,uVar9,uVar5,
                 _Method_System_Collections_Generic_List_string__set_Item___12dcf08);
      lVar11 = *(long *)(param_1 + 0xa0);
      uVar9 = uVar9 + 1;
    } while (lVar11 != 0);
  }
                    /* WARNING: Subroutine does not return */
  native_sub_432810();
LAB_00609e7c:
  puVar4 = (undefined8 *)(lVar11 + (long)(*piVar8 + 5) * 0x10 + 0x138);
  goto LAB_00609e8c;
  while( true ) {
    uVar7 = uVar7 + 1;
    piVar8 = piVar8 + 4;
    if (*(ushort *)(lVar11 + 0x12a) <= uVar7) break;
LAB_0060967c:
    if (*(long *)(piVar8 + -2) == _MG_BlocksEngine2_Core_I_BE2_BlocksStack_TypeInfo_12d4e10) {
      puVar4 = (undefined8 *)(lVar11 + (long)(*piVar8 + 9) * 0x10 + 0x138);
      goto LAB_006096b8;
    }
  }
LAB_00609698:
  puVar4 = (undefined8 *)
           native_sub_3c9b34(plVar12,_MG_BlocksEngine2_Core_I_BE2_BlocksStack_TypeInfo_12d4e10,9);
LAB_006096b8:
  lVar11 = (*(code *)*puVar4)(plVar12,puVar4[1]);
  if ((lVar11 == 0) || (lVar3 = *(long *)(param_1 + 0x58), lVar3 == 0)) goto LAB_00609ef0;
  if (*(int *)(lVar3 + 0x18) == 0) goto LAB_00609ef4;
  iVar2 = *(int *)(lVar3 + 0x20);
  plVar12 = *(long **)(param_1 + 0x48);
  if (*(int *)(lVar11 + 0x18) <= iVar2) {
    if (plVar12 == (long *)0x0) goto LAB_00609ef0;
    lVar11 = *plVar12;
    if ((ulong)*(ushort *)(lVar11 + 0x12a) != 0) {
      uVar7 = 0;
      piVar8 = (int *)(*(long *)(lVar11 + 0xb0) + 8);
      do {
        if (*(long *)(piVar8 + -2) == _MG_BlocksEngine2_Core_I_BE2_BlocksStack_TypeInfo_12d4e10) {
          puVar4 = (undefined8 *)(lVar11 + (long)(*piVar8 + 7) * 0x10 + 0x138);
          goto LAB_00609840;
        }
        uVar7 = uVar7 + 1;
        piVar8 = piVar8 + 4;
      } while (uVar7 < *(ushort *)(lVar11 + 0x12a));
    }
    puVar4 = (undefined8 *)
             native_sub_3c9b34(plVar12,_MG_BlocksEngine2_Core_I_BE2_BlocksStack_TypeInfo_12d4e10,7);
LAB_00609840:
    UNRECOVERED_JUMPTABLE = (code *)*puVar4;
    uVar5 = puVar4[1];
    goto LAB_00609ed8;
  }
  if (plVar12 == (long *)0x0) goto LAB_00609ef0;
  lVar11 = *plVar12;
  if ((ulong)*(ushort *)(lVar11 + 0x12a) != 0) {
    uVar7 = 0;
    piVar8 = (int *)(*(long *)(lVar11 + 0xb0) + 8);
    do {
      if (*(long *)(piVar8 + -2) == _MG_BlocksEngine2_Core_I_BE2_BlocksStack_TypeInfo_12d4e10) {
        puVar4 = (undefined8 *)(lVar11 + (long)(*piVar8 + 9) * 0x10 + 0x138);
        goto LAB_006097a0;
      }
      uVar7 = uVar7 + 1;
      piVar8 = piVar8 + 4;
    } while (uVar7 < *(ushort *)(lVar11 + 0x12a));
  }
  puVar4 = (undefined8 *)
           native_sub_3c9b34(plVar12,_MG_BlocksEngine2_Core_I_BE2_BlocksStack_TypeInfo_12d4e10,9);
LAB_006097a0:
  lVar11 = (*(code *)*puVar4)(plVar12,puVar4[1]);
  lVar3 = *(long *)(param_1 + 0x58);
  if (lVar3 == 0) goto LAB_00609ef0;
  if (*(int *)(lVar3 + 0x18) == 0) goto LAB_00609ef4;
  if (lVar11 == 0) goto LAB_00609ef0;
  if (*(uint *)(lVar11 + 0x18) <= *(uint *)(lVar3 + 0x20)) goto LAB_00609ef4;
  plVar12 = *(long **)(param_1 + 0x48);
  if (plVar12 == (long *)0x0) goto LAB_00609ef0;
  lVar6 = *plVar12;
  plVar10 = *(long **)(lVar11 + (long)(int)*(uint *)(lVar3 + 0x20) * 8 + 0x20);
  if ((ulong)*(ushort *)(lVar6 + 0x12a) != 0) {
    uVar7 = 0;
    piVar8 = (int *)(*(long *)(lVar6 + 0xb0) + 8);
    do {
      if (*(long *)(piVar8 + -2) == _MG_BlocksEngine2_Core_I_BE2_BlocksStack_TypeInfo_12d4e10) {
        puVar4 = (undefined8 *)(lVar6 + (long)(*piVar8 + 0xf) * 0x10 + 0x138);
        goto LAB_00609860;
      }
      uVar7 = uVar7 + 1;
      piVar8 = piVar8 + 4;
    } while (uVar7 < *(ushort *)(lVar6 + 0x12a));
  }
  puVar4 = (undefined8 *)
           native_sub_3c9b34(plVar12,_MG_BlocksEngine2_Core_I_BE2_BlocksStack_TypeInfo_12d4e10,0xf);
LAB_00609860:
  uVar7 = (*(code *)*puVar4)(plVar12,puVar4[1]);
  if ((uVar7 & 1) == 0) {
    if (plVar10 == (long *)0x0) goto LAB_00609ef0;
    lVar11 = *plVar10;
    if ((ulong)*(ushort *)(lVar11 + 0x12a) != 0) {
      uVar7 = 0;
      piVar8 = (int *)(*(long *)(lVar11 + 0xb0) + 8);
      do {
        if (*(long *)(piVar8 + -2) ==
            _MG_BlocksEngine2_Block_Instruction_I_BE2_Instruction_TypeInfo_12d4e28) {
          puVar4 = (undefined8 *)(lVar11 + (long)*piVar8 * 0x10 + 0x138);
          goto LAB_006099ac;
        }
        uVar7 = uVar7 + 1;
        piVar8 = piVar8 + 4;
      } while (uVar7 < *(ushort *)(lVar11 + 0x12a));
    }
    puVar4 = (undefined8 *)
             native_sub_3c9b34(plVar10,
                               _MG_BlocksEngine2_Block_Instruction_I_BE2_Instruction_TypeInfo_12d4e28
                               ,0);
LAB_006099ac:
    plVar12 = (long *)(*(code *)*puVar4)(plVar10,puVar4[1]);
    if (plVar12 == (long *)0x0) goto LAB_00609ef0;
    lVar11 = *plVar12;
    if ((ulong)*(ushort *)(lVar11 + 0x12a) != 0) {
      uVar7 = 0;
      piVar8 = (int *)(*(long *)(lVar11 + 0xb0) + 8);
      do {
        if (*(long *)(piVar8 + -2) ==
            _MG_BlocksEngine2_Block_Instruction_I_BE2_InstructionBase_TypeInfo_12d4e30) {
          puVar4 = (undefined8 *)(lVar11 + (long)(*piVar8 + 3) * 0x10 + 0x138);
          goto LAB_00609a20;
        }
        uVar7 = uVar7 + 1;
        piVar8 = piVar8 + 4;
      } while (uVar7 < *(ushort *)(lVar11 + 0x12a));
    }
    puVar4 = (undefined8 *)
             native_sub_3c9b34(plVar12,
                               _MG_BlocksEngine2_Block_Instruction_I_BE2_InstructionBase_TypeInfo_12d4e30
                               ,3);
LAB_00609a20:
    plVar12 = (long *)(*(code *)*puVar4)(plVar12,puVar4[1]);
    if (plVar12 == (long *)0x0) goto LAB_00609ef0;
    lVar11 = *plVar12;
    if ((ulong)*(ushort *)(lVar11 + 0x12a) != 0) {
      uVar7 = 0;
      piVar8 = (int *)(*(long *)(lVar11 + 0xb0) + 8);
      do {
        if (*(long *)(piVar8 + -2) == _MG_BlocksEngine2_Block_I_BE2_Block_TypeInfo_12d4dd8) {
          puVar4 = (undefined8 *)(lVar11 + (long)(*piVar8 + 1) * 0x10 + 0x138);
          goto LAB_00609a94;
        }
        uVar7 = uVar7 + 1;
        piVar8 = piVar8 + 4;
      } while (uVar7 < *(ushort *)(lVar11 + 0x12a));
    }
    puVar4 = (undefined8 *)
             native_sub_3c9b34(plVar12,_MG_BlocksEngine2_Block_I_BE2_Block_TypeInfo_12d4dd8,1);
LAB_00609a94:
    iVar2 = (*(code *)*puVar4)(plVar12,puVar4[1]);
    if (iVar2 == 4) {
      plVar12 = *(long **)(param_1 + 0x48);
      if (plVar12 == (long *)0x0) goto LAB_00609ef0;
      lVar11 = *plVar12;
      if ((ulong)*(ushort *)(lVar11 + 0x12a) != 0) {
        uVar7 = 0;
        piVar8 = (int *)(*(long *)(lVar11 + 0xb0) + 8);
        do {
          if (*(long *)(piVar8 + -2) == _MG_BlocksEngine2_Core_I_BE2_BlocksStack_TypeInfo_12d4e10) {
            puVar4 = (undefined8 *)(lVar11 + (long)(*piVar8 + 0x14) * 0x10 + 0x138);
            goto LAB_00609bd0;
          }
          uVar7 = uVar7 + 1;
          piVar8 = piVar8 + 4;
        } while (uVar7 < *(ushort *)(lVar11 + 0x12a));
      }
      puVar4 = (undefined8 *)
               native_sub_3c9b34(plVar12,_MG_BlocksEngine2_Core_I_BE2_BlocksStack_TypeInfo_12d4e10,
                                 0x14);
LAB_00609bd0:
      lVar11 = (*(code *)*puVar4)(plVar12,puVar4[1]);
      if (lVar11 == 0) goto LAB_00609ef0;
      native_UnityEngine_Events_UnityEvent__Invoke_773864(lVar11,0);
    }
    lVar11 = *plVar10;
    if ((ulong)*(ushort *)(lVar11 + 0x12a) != 0) {
      uVar7 = 0;
      piVar8 = (int *)(*(long *)(lVar11 + 0xb0) + 8);
      do {
        if (*(long *)(piVar8 + -2) ==
            _MG_BlocksEngine2_Block_Instruction_I_BE2_Instruction_TypeInfo_12d4e28) {
          puVar4 = (undefined8 *)(lVar11 + (long)(*piVar8 + 1) * 0x10 + 0x138);
          goto LAB_00609c40;
        }
        uVar7 = uVar7 + 1;
        piVar8 = piVar8 + 4;
      } while (uVar7 < *(ushort *)(lVar11 + 0x12a));
    }
    puVar4 = (undefined8 *)
             native_sub_3c9b34(plVar10,
                               _MG_BlocksEngine2_Block_Instruction_I_BE2_Instruction_TypeInfo_12d4e28
                               ,1);
LAB_00609c40:
    uVar7 = (*(code *)*puVar4)(plVar10,puVar4[1]);
    if ((uVar7 & 1) == 0) {
      plVar12 = *(long **)(param_1 + 0x48);
      if (plVar12 == (long *)0x0) goto LAB_00609ef0;
      lVar11 = *plVar12;
      if ((ulong)*(ushort *)(lVar11 + 0x12a) != 0) {
        uVar7 = 0;
        piVar8 = (int *)(*(long *)(lVar11 + 0xb0) + 8);
        do {
          if (*(long *)(piVar8 + -2) == _MG_BlocksEngine2_Core_I_BE2_BlocksStack_TypeInfo_12d4e10) {
            puVar4 = (undefined8 *)(lVar11 + (long)(*piVar8 + 4) * 0x10 + 0x138);
            goto LAB_00609cb0;
          }
          uVar7 = uVar7 + 1;
          piVar8 = piVar8 + 4;
        } while (uVar7 < *(ushort *)(lVar11 + 0x12a));
      }
      puVar4 = (undefined8 *)
               native_sub_3c9b34(plVar12,_MG_BlocksEngine2_Core_I_BE2_BlocksStack_TypeInfo_12d4e10,4
                                );
LAB_00609cb0:
      iVar2 = (*(code *)*puVar4)(plVar12,puVar4[1]);
      if (iVar2 < *(int *)(param_1 + 0x60)) {
        plVar12 = *(long **)(param_1 + 0x48);
        if (plVar12 == (long *)0x0) goto LAB_00609ef0;
        lVar11 = *plVar12;
        if ((ulong)*(ushort *)(lVar11 + 0x12a) != 0) {
          uVar7 = 0;
          piVar8 = (int *)(*(long *)(lVar11 + 0xb0) + 8);
          do {
            if (*(long *)(piVar8 + -2) == _MG_BlocksEngine2_Core_I_BE2_BlocksStack_TypeInfo_12d4e10)
            {
              puVar4 = (undefined8 *)(lVar11 + (long)(*piVar8 + 4) * 0x10 + 0x138);
              goto LAB_00609e24;
            }
            uVar7 = uVar7 + 1;
            piVar8 = piVar8 + 4;
          } while (uVar7 < *(ushort *)(lVar11 + 0x12a));
        }
        puVar4 = (undefined8 *)
                 native_sub_3c9b34(plVar12,_MG_BlocksEngine2_Core_I_BE2_BlocksStack_TypeInfo_12d4e10
                                   ,4);
LAB_00609e24:
        iVar2 = (*(code *)*puVar4)(plVar12,puVar4[1]);
        lVar11 = *plVar12;
        iVar2 = iVar2 + 1;
        if ((ulong)*(ushort *)(lVar11 + 0x12a) != 0) {
          uVar7 = 0;
          piVar8 = (int *)(*(long *)(lVar11 + 0xb0) + 8);
          do {
            if (*(long *)(piVar8 + -2) == _MG_BlocksEngine2_Core_I_BE2_BlocksStack_TypeInfo_12d4e10)
            goto LAB_00609e7c;
            uVar7 = uVar7 + 1;
            piVar8 = piVar8 + 4;
          } while (uVar7 < *(ushort *)(lVar11 + 0x12a));
        }
        goto LAB_00609e6c;
      }
    }
    lVar11 = *(long *)(param_1 + 0x58);
    if (lVar11 != 0) {
      if (*(int *)(lVar11 + 0x18) == 0) {
LAB_00609ef4:
        uVar5 = native_sub_43283c();
                    /* WARNING: Subroutine does not return */
        native_sub_4327dc(uVar5,0);
      }
      plVar12 = *(long **)(param_1 + 0x48);
      if (plVar12 != (long *)0x0) {
        lVar3 = *plVar12;
        iVar2 = *(int *)(lVar11 + 0x20);
        if ((ulong)*(ushort *)(lVar3 + 0x12a) != 0) {
          uVar7 = 0;
          piVar8 = (int *)(*(long *)(lVar3 + 0xb0) + 8);
          do {
            if (*(long *)(piVar8 + -2) == _MG_BlocksEngine2_Core_I_BE2_BlocksStack_TypeInfo_12d4e10)
            {
              puVar4 = (undefined8 *)(lVar3 + (long)(*piVar8 + 7) * 0x10 + 0x138);
              goto LAB_00609d94;
            }
            uVar7 = uVar7 + 1;
            piVar8 = piVar8 + 4;
          } while (uVar7 < *(ushort *)(lVar3 + 0x12a));
        }
        puVar4 = (undefined8 *)
                 native_sub_3c9b34(plVar12,_MG_BlocksEngine2_Core_I_BE2_BlocksStack_TypeInfo_12d4e10
                                   ,7);
LAB_00609d94:
        UNRECOVERED_JUMPTABLE = (code *)*puVar4;
        uVar5 = puVar4[1];
LAB_00609ed8:
                    /* WARNING: Could not recover jumptable at 0x00609eec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
        (*UNRECOVERED_JUMPTABLE)(plVar12,iVar2,uVar5);
        return;
      }
    }
LAB_00609ef0:
                    /* WARNING: Subroutine does not return */
    native_sub_432810();
  }
  plVar12 = *(long **)(param_1 + 0x40);
  if (plVar12 == (long *)0x0) goto LAB_00609ef0;
  lVar11 = *plVar12;
  if ((ulong)*(ushort *)(lVar11 + 0x12a) != 0) {
    uVar7 = 0;
    piVar8 = (int *)(*(long *)(lVar11 + 0xb0) + 8);
    do {
      if (*(long *)(piVar8 + -2) == _MG_BlocksEngine2_Block_I_BE2_Block_TypeInfo_12d4dd8) {
        puVar4 = (undefined8 *)(lVar11 + (long)(*piVar8 + 1) * 0x10 + 0x138);
        goto LAB_0060992c;
      }
      uVar7 = uVar7 + 1;
      piVar8 = piVar8 + 4;
    } while (uVar7 < *(ushort *)(lVar11 + 0x12a));
  }
  puVar4 = (undefined8 *)
           native_sub_3c9b34(plVar12,_MG_BlocksEngine2_Block_I_BE2_Block_TypeInfo_12d4dd8,1);
LAB_0060992c:
  iVar2 = (*(code *)*puVar4)(plVar12,puVar4[1]);
  if ((iVar2 != 4) &&
     (uVar7 = native_MG_BlocksEngine2_Utils_BE2_BlockUtils__BlockIsFunction_56f1f0
                        (*(undefined8 *)(param_1 + 0x40),0), (uVar7 & 1) == 0)) {
    lVar11 = *(long *)(param_1 + 0x58);
    if (lVar11 != 0) {
      if (*(int *)(lVar11 + 0x18) == 0) goto LAB_00609ef4;
      plVar12 = *(long **)(param_1 + 0x48);
      if (plVar12 != (long *)0x0) {
        lVar3 = *plVar12;
        uVar1 = *(undefined4 *)(lVar11 + 0x20);
        if ((ulong)*(ushort *)(lVar3 + 0x12a) != 0) {
          uVar7 = 0;
          piVar8 = (int *)(*(long *)(lVar3 + 0xb0) + 8);
          do {
            if (*(long *)(piVar8 + -2) == _MG_BlocksEngine2_Core_I_BE2_BlocksStack_TypeInfo_12d4e10)
            {
              puVar4 = (undefined8 *)(lVar3 + (long)(*piVar8 + 7) * 0x10 + 0x138);
              goto LAB_00609db4;
            }
            uVar7 = uVar7 + 1;
            piVar8 = piVar8 + 4;
          } while (uVar7 < *(ushort *)(lVar3 + 0x12a));
        }
        puVar4 = (undefined8 *)
                 native_sub_3c9b34(plVar12,_MG_BlocksEngine2_Core_I_BE2_BlocksStack_TypeInfo_12d4e10
                                   ,7);
LAB_00609db4:
        (*(code *)*puVar4)(plVar12,uVar1,puVar4[1]);
        plVar12 = *(long **)(param_1 + 0x48);
        if (plVar12 != (long *)0x0) {
          lVar11 = *plVar12;
          if ((ulong)*(ushort *)(lVar11 + 0x12a) != 0) {
            uVar7 = 0;
            piVar8 = (int *)(*(long *)(lVar11 + 0xb0) + 8);
            do {
              if (*(long *)(piVar8 + -2) ==
                  _MG_BlocksEngine2_Core_I_BE2_BlocksStack_TypeInfo_12d4e10) {
                puVar4 = (undefined8 *)(lVar11 + (long)(*piVar8 + 3) * 0x10 + 0x138);
                goto LAB_00609ecc;
              }
              uVar7 = uVar7 + 1;
              piVar8 = piVar8 + 4;
            } while (uVar7 < *(ushort *)(lVar11 + 0x12a));
          }
          puVar4 = (undefined8 *)
                   native_sub_3c9b34(plVar12,
                                     _MG_BlocksEngine2_Core_I_BE2_BlocksStack_TypeInfo_12d4e10,3);
LAB_00609ecc:
          UNRECOVERED_JUMPTABLE = (code *)*puVar4;
          uVar5 = puVar4[1];
          iVar2 = 0;
          goto LAB_00609ed8;
        }
      }
    }
    goto LAB_00609ef0;
  }
  plVar12 = *(long **)(param_1 + 0x48);
  if (plVar12 == (long *)0x0) goto LAB_00609ef0;
  lVar11 = *plVar12;
  if ((ulong)*(ushort *)(lVar11 + 0x12a) != 0) {
    uVar7 = 0;
    piVar8 = (int *)(*(long *)(lVar11 + 0xb0) + 8);
    do {
      if (*(long *)(piVar8 + -2) == _MG_BlocksEngine2_Core_I_BE2_BlocksStack_TypeInfo_12d4e10) {
        puVar4 = (undefined8 *)(lVar11 + (long)(*piVar8 + 4) * 0x10 + 0x138);
        goto LAB_00609b74;
      }
      uVar7 = uVar7 + 1;
      piVar8 = piVar8 + 4;
    } while (uVar7 < *(ushort *)(lVar11 + 0x12a));
  }
  puVar4 = (undefined8 *)
           native_sub_3c9b34(plVar12,_MG_BlocksEngine2_Core_I_BE2_BlocksStack_TypeInfo_12d4e10,4);
LAB_00609b74:
  iVar2 = (*(code *)*puVar4)(plVar12,puVar4[1]);
  lVar11 = *plVar12;
  iVar2 = iVar2 + 1;
  if ((ulong)*(ushort *)(lVar11 + 0x12a) != 0) {
    uVar7 = 0;
    piVar8 = (int *)(*(long *)(lVar11 + 0xb0) + 8);
    do {
      if (*(long *)(piVar8 + -2) == _MG_BlocksEngine2_Core_I_BE2_BlocksStack_TypeInfo_12d4e10)
      goto LAB_00609e7c;
      uVar7 = uVar7 + 1;
      piVar8 = piVar8 + 4;
    } while (uVar7 < *(ushort *)(lVar11 + 0x12a));
  }
LAB_00609e6c:
  puVar4 = (undefined8 *)
           native_sub_3c9b34(plVar12,_MG_BlocksEngine2_Core_I_BE2_BlocksStack_TypeInfo_12d4e10,5);
LAB_00609e8c:
  (*(code *)*puVar4)(plVar12,iVar2,puVar4[1]);
  if ((bRam000000000133ee63 & 1) == 0) {
    native_sub_43273c(&MG_BlocksEngine2_Core_I_BE2_BlocksStack_TypeInfo_12d4e10);
    native_sub_43273c(&MG_BlocksEngine2_Block_Instruction_I_BE2_Instruction_TypeInfo_12d4e28);
    native_sub_43273c(&Method_UnityEngine_Events_UnityEvent_I_BE2_Instruction__Invoke___12de478);
    bRam000000000133ee63 = 1;
  }
  plVar12 = *(long **)(param_1 + 0x48);
  if (plVar12 != (long *)0x0) {
    lVar11 = *plVar12;
    if ((ulong)*(ushort *)(lVar11 + 0x12a) != 0) {
      uVar7 = 0;
      piVar8 = (int *)(*(long *)(lVar11 + 0xb0) + 8);
      do {
        if (*(long *)(piVar8 + -2) == _MG_BlocksEngine2_Core_I_BE2_BlocksStack_TypeInfo_12d4e10) {
          puVar4 = (undefined8 *)(lVar11 + (long)(*piVar8 + 0xb) * 0x10 + 0x138);
          goto LAB_00611f54;
        }
        uVar7 = uVar7 + 1;
        piVar8 = piVar8 + 4;
      } while (uVar7 < *(ushort *)(lVar11 + 0x12a));
    }
    puVar4 = (undefined8 *)
             native_sub_3c9b34(plVar12,_MG_BlocksEngine2_Core_I_BE2_BlocksStack_TypeInfo_12d4e10,0xb
                              );
LAB_00611f54:
    lVar11 = (*(code *)*puVar4)(plVar12,puVar4[1]);
    if ((lVar11 != 0) &&
       (native_UnityEngine_Events_UnityEvent_BaseEventData___Invoke_8a0108
                  (lVar11,plVar10,
                   _Method_UnityEngine_Events_UnityEvent_I_BE2_Instruction__Invoke___12de478),
       plVar10 != (long *)0x0)) {
      lVar11 = *plVar10;
      if ((ulong)*(ushort *)(lVar11 + 0x12a) != 0) {
        uVar7 = 0;
        piVar8 = (int *)(*(long *)(lVar11 + 0xb0) + 8);
        do {
          if (*(long *)(piVar8 + -2) ==
              _MG_BlocksEngine2_Block_Instruction_I_BE2_Instruction_TypeInfo_12d4e28) {
            puVar4 = (undefined8 *)(lVar11 + (long)(*piVar8 + 3) * 0x10 + 0x138);
            goto LAB_00611fdc;
          }
          uVar7 = uVar7 + 1;
          piVar8 = piVar8 + 4;
        } while (uVar7 < *(ushort *)(lVar11 + 0x12a));
      }
      puVar4 = (undefined8 *)
               native_sub_3c9b34(plVar10,
                                 _MG_BlocksEngine2_Block_Instruction_I_BE2_Instruction_TypeInfo_12d4e28
                                 ,3);
LAB_00611fdc:
                    /* WARNING: Could not recover jumptable at 0x00611ff0. Too many branches */
                    /* WARNING: Treating indirect jump as call */
      (*(code *)*puVar4)(plVar10,puVar4[1]);
      return;
    }
  }
                    /* WARNING: Subroutine does not return */
  native_sub_432810();
}


