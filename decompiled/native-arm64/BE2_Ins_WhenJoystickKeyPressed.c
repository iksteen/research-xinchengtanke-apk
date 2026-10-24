/* ARM64 IL2CPP native pseudocode from Ghidra.
 * Recovered implementation, not original C# source.
 * Function boundaries follow the IL2CPP method address table. */


/* BE2_Ins_WhenJoystickKeyPressed$$OnStart @ 0x60eb08
 * void BE2_Ins_WhenJoystickKeyPressed__OnStart (BE2_Ins_WhenJoystickKeyPressed_o* __this, const MethodInfo* method); */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* BE2_Ins_WhenJoystickKeyPressed$$OnStart
   void BE2_Ins_WhenJoystickKeyPressed__OnStart (BE2_Ins_WhenJoystickKeyPressed_o* __this, const
   MethodInfo* method); */

void native_BE2_Ins_WhenJoystickKeyPressed__OnStart_60eb08(long param_1)

{
  ulong *puVar1;
  char cVar2;
  bool bVar3;
  long lVar4;
  undefined8 *puVar5;
  undefined8 uVar6;
  ulong uVar7;
  int *piVar8;
  long *plVar9;
  
  if ((bRam000000000133ee3f & 1) == 0) {
    native_sub_43273c(&BE2_VirtualJoystick_TypeInfo_12d3a98);
    native_sub_43273c(&MG_BlocksEngine2_Block_I_BE2_BlockSectionHeaderInput_TypeInfo_12d4e00);
    bRam000000000133ee3f = 1;
  }
  lVar4 = native_MG_BlocksEngine2_Block_Instruction_BE2_InstructionBase__GetSectionInputs_60366c
                    (param_1,0);
  if (lVar4 != 0) {
    if (*(int *)(lVar4 + 0x18) == 0) {
      uVar6 = native_sub_43283c();
                    /* WARNING: Subroutine does not return */
      native_sub_4327dc(uVar6,0);
    }
    plVar9 = *(long **)(lVar4 + 0x20);
    if (plVar9 != (long *)0x0) {
      lVar4 = *plVar9;
      if ((ulong)*(ushort *)(lVar4 + 0x12a) != 0) {
        uVar7 = 0;
        piVar8 = (int *)(*(long *)(lVar4 + 0xb0) + 8);
        do {
          if (*(long *)(piVar8 + -2) ==
              _MG_BlocksEngine2_Block_I_BE2_BlockSectionHeaderInput_TypeInfo_12d4e00) {
            puVar5 = (undefined8 *)(lVar4 + (long)*piVar8 * 0x10 + 0x138);
            goto native_sub_41086c;
          }
          uVar7 = uVar7 + 1;
          piVar8 = piVar8 + 4;
        } while (uVar7 < *(ushort *)(lVar4 + 0x12a));
      }
      puVar5 = (undefined8 *)
               native_sub_3c9b34(plVar9,
                                 _MG_BlocksEngine2_Block_I_BE2_BlockSectionHeaderInput_TypeInfo_12d4e00
                                 ,0);
native_sub_41086c:
      uVar6 = (*(code *)*puVar5)(plVar9,puVar5[1]);
      uVar6 = native_MG_BlocksEngine2_Utils_BE2_Dropdown__GetBE2Component_566f34(uVar6,0);
      *(undefined8 *)(param_1 + 0x78) = uVar6;
      native_sub_4326e0((undefined8 *)(param_1 + 0x78),uVar6);
      *(undefined8 *)(param_1 + 0x80) =
           **(undefined8 **)(_BE2_VirtualJoystick_TypeInfo_12d3a98 + 0xb8);
      if (iRam0000000001345318 != 0) {
        puVar1 = (ulong *)((param_1 + 0x80U >> 0x12 & 0x7fff) * 8 + 0x138ecd8);
        do {
          cVar2 = '\x01';
          bVar3 = (bool)ExclusiveMonitorPass(puVar1,0x10);
          if (bVar3) {
            *puVar1 = *puVar1 | 1L << (param_1 + 0x80U >> 0xc & 0x3f);
            cVar2 = ExclusiveMonitorsStatus();
          }
        } while (cVar2 != '\0');
      }
      return;
    }
  }
                    /* WARNING: Subroutine does not return */
  native_sub_432810();
}



/* BE2_Ins_WhenJoystickKeyPressed$$OnEnableInstruction @ 0x60ec1c
 * void BE2_Ins_WhenJoystickKeyPressed__OnEnableInstruction (BE2_Ins_WhenJoystickKeyPressed_o* __this, const MethodInfo* method); */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* BE2_Ins_WhenJoystickKeyPressed$$OnEnableInstruction
   void BE2_Ins_WhenJoystickKeyPressed__OnEnableInstruction (BE2_Ins_WhenJoystickKeyPressed_o*
   __this, const MethodInfo* method); */

void native_BE2_Ins_WhenJoystickKeyPressed__OnEnableInstruction_60ec1c(undefined8 param_1)

{
  ulong uVar1;
  long lVar2;
  undefined8 uVar3;
  undefined8 *puVar4;
  uint uVar5;
  long lVar6;
  
  if ((bRam000000000133ee40 & 1) == 0) {
    native_sub_43273c(&Method_BE2_Ins_WhenJoystickKeyPressed_OnUpdate___12e2240);
    native_sub_43273c(&UnityEngine_Events_UnityAction_TypeInfo_12d65d0);
    bRam000000000133ee40 = 1;
  }
  lVar2 = native_MG_BlocksEngine2_Core_BE2_ExecutionManager__get_Instance_564464(0);
  uVar3 = native_sub_432808(_UnityEngine_Events_UnityAction_TypeInfo_12d65d0);
  native_UnityEngine_Events_UnityAction___ctor_773130
            (uVar3,param_1,_Method_BE2_Ins_WhenJoystickKeyPressed_OnUpdate___12e2240,0);
  if (lVar2 == 0) {
                    /* WARNING: Subroutine does not return */
    native_sub_432810();
  }
  if ((bRam000000000133eafc & 1) == 0) {
    native_sub_43273c(&Method_System_Collections_Generic_List_UnityAction__Add___12dd490,uVar3,0);
    native_sub_43273c(&Method_System_Collections_Generic_List_UnityAction__Contains___12dd498);
    bRam000000000133eafc = 1;
  }
  if (*(long *)(lVar2 + 0x40) != 0) {
    uVar1 = native_System_Collections_Generic_List_BE2_UI_SelectionPanel___Contains_d40ec8
                      (*(long *)(lVar2 + 0x40),uVar3,
                       _Method_System_Collections_Generic_List_UnityAction__Contains___12dd498);
    if ((uVar1 & 1) != 0) {
      return;
    }
    if (*(long *)(lVar2 + 0x48) != 0) {
      native_UnityEngine_Events_UnityEvent__AddListener_7734bc(*(long *)(lVar2 + 0x48),uVar3,0);
      lVar2 = *(long *)(lVar2 + 0x40);
      if (lVar2 != 0) {
        lVar6 = *(long *)(lVar2 + 0x10);
        if (lVar6 != 0) {
          uVar5 = *(uint *)(lVar2 + 0x18);
          if (uVar5 == *(uint *)(lVar6 + 0x18)) {
            (*(code *)**(undefined8 **)
                        (*(long *)(*(long *)(
                                            _Method_System_Collections_Generic_List_UnityAction__Add___12dd490
                                            + 0x18) + 0xc0) + 0x60))(lVar2,uVar5 + 1);
            uVar5 = *(uint *)(lVar2 + 0x18);
            lVar6 = *(long *)(lVar2 + 0x10);
            *(uint *)(lVar2 + 0x18) = uVar5 + 1;
            if (lVar6 == 0) goto code_r0x00d40c5c;
          }
          else {
            *(uint *)(lVar2 + 0x18) = uVar5 + 1;
          }
          if (uVar5 < *(uint *)(lVar6 + 0x18)) {
            puVar4 = (undefined8 *)(lVar6 + (long)(int)uVar5 * 8 + 0x20);
            *puVar4 = uVar3;
            native_sub_4326e0(puVar4,uVar3);
            *(int *)(lVar2 + 0x1c) = *(int *)(lVar2 + 0x1c) + 1;
            return;
          }
          uVar3 = native_sub_43283c();
                    /* WARNING: Subroutine does not return */
          native_sub_4327dc(uVar3,0);
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



/* BE2_Ins_WhenJoystickKeyPressed$$OnDisableInstruction @ 0x60ecbc
 * void BE2_Ins_WhenJoystickKeyPressed__OnDisableInstruction (BE2_Ins_WhenJoystickKeyPressed_o* __this, const MethodInfo* method); */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* BE2_Ins_WhenJoystickKeyPressed$$OnDisableInstruction
   void BE2_Ins_WhenJoystickKeyPressed__OnDisableInstruction (BE2_Ins_WhenJoystickKeyPressed_o*
   __this, const MethodInfo* method); */

ulong native_BE2_Ins_WhenJoystickKeyPressed__OnDisableInstruction_60ecbc(undefined8 param_1)

{
  long lVar1;
  int iVar2;
  ulong uVar3;
  long lVar4;
  undefined8 uVar5;
  
  if ((bRam000000000133ee41 & 1) == 0) {
    native_sub_43273c(&Method_BE2_Ins_WhenJoystickKeyPressed_OnUpdate___12e2240);
    native_sub_43273c(&UnityEngine_Events_UnityAction_TypeInfo_12d65d0);
    bRam000000000133ee41 = 1;
  }
  lVar4 = native_MG_BlocksEngine2_Core_BE2_ExecutionManager__get_Instance_564464(0);
  uVar5 = native_sub_432808(_UnityEngine_Events_UnityAction_TypeInfo_12d65d0);
  native_UnityEngine_Events_UnityAction___ctor_773130
            (uVar5,param_1,_Method_BE2_Ins_WhenJoystickKeyPressed_OnUpdate___12e2240,0);
  if (lVar4 == 0) {
                    /* WARNING: Subroutine does not return */
    native_sub_432810();
  }
  if ((bRam000000000133eafd & 1) == 0) {
    native_sub_43273c(&Method_System_Collections_Generic_List_UnityAction__Contains___12dd498,uVar5,
                      0);
    native_sub_43273c(&Method_System_Collections_Generic_List_UnityAction__Remove___12dd4a0);
    bRam000000000133eafd = 1;
  }
  if (*(long *)(lVar4 + 0x40) != 0) {
    uVar3 = native_System_Collections_Generic_List_BE2_UI_SelectionPanel___Contains_d40ec8
                      (*(long *)(lVar4 + 0x40),uVar5,
                       _Method_System_Collections_Generic_List_UnityAction__Contains___12dd498);
    if ((uVar3 & 1) == 0) {
      return uVar3;
    }
    if (*(long *)(lVar4 + 0x48) != 0) {
      native_UnityEngine_Events_UnityEvent__RemoveListener_773574(*(long *)(lVar4 + 0x48),uVar5,0);
      lVar1 = _Method_System_Collections_Generic_List_UnityAction__Remove___12dd4a0;
      lVar4 = *(long *)(lVar4 + 0x40);
      if (lVar4 != 0) {
        if (lVar4 == 0) {
                    /* WARNING: Subroutine does not return */
          native_sub_432810(0,uVar5);
        }
        iVar2 = (*(code *)**(undefined8 **)
                            (*(long *)(*(long *)(
                                                _Method_System_Collections_Generic_List_UnityAction__Remove___12dd4a0
                                                + 0x18) + 0xc0) + 0xd8))();
        if (-1 < iVar2) {
          (*(code *)**(undefined8 **)(*(long *)(*(long *)(lVar1 + 0x18) + 0xc0) + 0xe8))
                    (lVar4,iVar2);
        }
        return (ulong)(-1 < iVar2);
      }
    }
  }
                    /* WARNING: Subroutine does not return */
  native_sub_432810();
}



/* BE2_Ins_WhenJoystickKeyPressed$$OnAwake @ 0x60ed5c
 * void BE2_Ins_WhenJoystickKeyPressed__OnAwake (BE2_Ins_WhenJoystickKeyPressed_o* __this, const MethodInfo* method); */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* BE2_Ins_WhenJoystickKeyPressed$$OnAwake
   void BE2_Ins_WhenJoystickKeyPressed__OnAwake (BE2_Ins_WhenJoystickKeyPressed_o* __this, const
   MethodInfo* method); */

void native_BE2_Ins_WhenJoystickKeyPressed__OnAwake_60ed5c(long param_1)

{
  undefined8 *puVar1;
  undefined8 uVar2;
  long lVar3;
  ulong uVar4;
  int *piVar5;
  long *plVar6;
  
  if ((bRam000000000133ee42 & 1) == 0) {
    native_sub_43273c(&Method_BE2_Ins_WhenJoystickKeyPressed_EndExecution___12e2238);
    native_sub_43273c(&MG_BlocksEngine2_Core_I_BE2_BlocksStack_TypeInfo_12d4e10);
    native_sub_43273c(&UnityEngine_Events_UnityAction_TypeInfo_12d65d0);
    bRam000000000133ee42 = 1;
  }
  plVar6 = *(long **)(param_1 + 0x48);
  if (plVar6 != (long *)0x0) {
    lVar3 = *plVar6;
    if ((ulong)*(ushort *)(lVar3 + 0x12a) != 0) {
      uVar4 = 0;
      piVar5 = (int *)(*(long *)(lVar3 + 0xb0) + 8);
      do {
        if (*(long *)(piVar5 + -2) == _MG_BlocksEngine2_Core_I_BE2_BlocksStack_TypeInfo_12d4e10) {
          puVar1 = (undefined8 *)(lVar3 + (long)(*piVar5 + 0x14) * 0x10 + 0x138);
          goto LAB_0060ee10;
        }
        uVar4 = uVar4 + 1;
        piVar5 = piVar5 + 4;
      } while (uVar4 < *(ushort *)(lVar3 + 0x12a));
    }
    puVar1 = (undefined8 *)
             native_sub_3c9b34(plVar6,_MG_BlocksEngine2_Core_I_BE2_BlocksStack_TypeInfo_12d4e10,0x14
                              );
LAB_0060ee10:
    lVar3 = (*(code *)*puVar1)(plVar6,puVar1[1]);
    uVar2 = native_sub_432808(_UnityEngine_Events_UnityAction_TypeInfo_12d65d0);
    native_UnityEngine_Events_UnityAction___ctor_773130
              (uVar2,param_1,_Method_BE2_Ins_WhenJoystickKeyPressed_EndExecution___12e2238,0);
    if (lVar3 != 0) {
      uVar2 = native_UnityEngine_Events_UnityEvent__GetDelegate_7734f8(uVar2,uVar2,0);
      lVar3 = *(long *)(lVar3 + 0x10);
      if (lVar3 == 0) {
                    /* WARNING: Subroutine does not return */
        native_sub_432810();
      }
      if ((bRam0000000001340cbd & 1) == 0) {
        native_sub_43273c(&Method_System_Collections_Generic_List_BaseInvokableCall__Add___12dc5b0,
                          uVar2,0);
        bRam0000000001340cbd = 1;
      }
      if (*(long *)(lVar3 + 0x18) != 0) {
        native_System_Collections_Generic_List_int_____Add_d40c00
                  (*(long *)(lVar3 + 0x18),uVar2,
                   _Method_System_Collections_Generic_List_BaseInvokableCall__Add___12dc5b0);
        *(undefined1 *)(lVar3 + 0x28) = 1;
        return;
      }
                    /* WARNING: Subroutine does not return */
      native_sub_432810();
    }
  }
                    /* WARNING: Subroutine does not return */
  native_sub_432810();
}



/* BE2_Ins_WhenJoystickKeyPressed$$EndExecution @ 0x60ee74
 * void BE2_Ins_WhenJoystickKeyPressed__EndExecution (BE2_Ins_WhenJoystickKeyPressed_o* __this, const MethodInfo* method); */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* BE2_Ins_WhenJoystickKeyPressed$$EndExecution
   void BE2_Ins_WhenJoystickKeyPressed__EndExecution (BE2_Ins_WhenJoystickKeyPressed_o* __this,
   const MethodInfo* method); */

void native_BE2_Ins_WhenJoystickKeyPressed__EndExecution_60ee74(long param_1)

{
  uint uVar1;
  undefined8 *puVar2;
  undefined8 uVar3;
  ulong uVar4;
  int *piVar5;
  long *plVar6;
  long lVar7;
  
  if ((bRam000000000133ee43 & 1) == 0) {
    native_sub_43273c(&MG_BlocksEngine2_Core_I_BE2_BlocksStack_TypeInfo_12d4e10);
    bRam000000000133ee43 = 1;
  }
  if ((*(long *)(param_1 + 0x80) != 0) && (*(long *)(param_1 + 0x78) != 0)) {
    lVar7 = *(long *)(*(long *)(param_1 + 0x80) + 0x18);
    uVar1 = native_MG_BlocksEngine2_Utils_BE2_Dropdown__get_value_567678
                      (*(long *)(param_1 + 0x78),0);
    if (lVar7 != 0) {
      if (*(uint *)(lVar7 + 0x18) <= uVar1) {
        uVar3 = native_sub_43283c();
                    /* WARNING: Subroutine does not return */
        native_sub_4327dc(uVar3,0);
      }
      lVar7 = *(long *)(lVar7 + (long)(int)uVar1 * 8 + 0x20);
      if (lVar7 != 0) {
        if (*(char *)(lVar7 + 0x100) != '\0') {
          return;
        }
        plVar6 = *(long **)(param_1 + 0x48);
        if (plVar6 != (long *)0x0) {
          lVar7 = *plVar6;
          if ((ulong)*(ushort *)(lVar7 + 0x12a) != 0) {
            uVar4 = 0;
            piVar5 = (int *)(*(long *)(lVar7 + 0xb0) + 8);
            do {
              if (*(long *)(piVar5 + -2) ==
                  _MG_BlocksEngine2_Core_I_BE2_BlocksStack_TypeInfo_12d4e10) {
                puVar2 = (undefined8 *)(lVar7 + (long)(*piVar5 + 3) * 0x10 + 0x138);
                goto LAB_0060ef58;
              }
              uVar4 = uVar4 + 1;
              piVar5 = piVar5 + 4;
            } while (uVar4 < *(ushort *)(lVar7 + 0x12a));
          }
          puVar2 = (undefined8 *)
                   native_sub_3c9b34(plVar6,
                                     _MG_BlocksEngine2_Core_I_BE2_BlocksStack_TypeInfo_12d4e10,3);
LAB_0060ef58:
                    /* WARNING: Could not recover jumptable at 0x0060ef6c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
          (*(code *)*puVar2)(plVar6,0,puVar2[1]);
          return;
        }
      }
    }
  }
                    /* WARNING: Subroutine does not return */
  native_sub_432810();
}



/* BE2_Ins_WhenJoystickKeyPressed$$OnUpdate @ 0x60ef80
 * void BE2_Ins_WhenJoystickKeyPressed__OnUpdate (BE2_Ins_WhenJoystickKeyPressed_o* __this, const MethodInfo* method); */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* BE2_Ins_WhenJoystickKeyPressed$$OnUpdate
   void BE2_Ins_WhenJoystickKeyPressed__OnUpdate (BE2_Ins_WhenJoystickKeyPressed_o* __this, const
   MethodInfo* method); */

void native_BE2_Ins_WhenJoystickKeyPressed__OnUpdate_60ef80(long param_1)

{
  uint uVar1;
  undefined8 *puVar2;
  long lVar3;
  ulong uVar4;
  int *piVar5;
  long *plVar6;
  undefined8 uVar7;
  
  if ((bRam000000000133ee44 & 1) == 0) {
    native_sub_43273c(&MG_BlocksEngine2_Core_I_BE2_BlocksStack_TypeInfo_12d4e10);
    native_sub_43273c(&UnityEngine_Object_TypeInfo_12d54e0);
    bRam000000000133ee44 = 1;
  }
  plVar6 = *(long **)(param_1 + 0x48);
  if (plVar6 == (long *)0x0) {
LAB_0060f138:
                    /* WARNING: Subroutine does not return */
    native_sub_432810();
  }
  lVar3 = *plVar6;
  if ((ulong)*(ushort *)(lVar3 + 0x12a) != 0) {
    uVar4 = 0;
    piVar5 = (int *)(*(long *)(lVar3 + 0xb0) + 8);
    do {
      if (*(long *)(piVar5 + -2) == _MG_BlocksEngine2_Core_I_BE2_BlocksStack_TypeInfo_12d4e10) {
        puVar2 = (undefined8 *)(lVar3 + (long)(*piVar5 + 2) * 0x10 + 0x138);
        goto LAB_0060f028;
      }
      uVar4 = uVar4 + 1;
      piVar5 = piVar5 + 4;
    } while (uVar4 < *(ushort *)(lVar3 + 0x12a));
  }
  puVar2 = (undefined8 *)
           native_sub_3c9b34(plVar6,_MG_BlocksEngine2_Core_I_BE2_BlocksStack_TypeInfo_12d4e10,2);
LAB_0060f028:
  uVar4 = (*(code *)*puVar2)(plVar6,puVar2[1]);
  if ((uVar4 & 1) == 0) {
    uVar7 = *(undefined8 *)(param_1 + 0x80);
    if (((*(byte *)(_UnityEngine_Object_TypeInfo_12d54e0 + 0x133) >> 2 & 1) != 0) &&
       (*(int *)(_UnityEngine_Object_TypeInfo_12d54e0 + 0xe0) == 0)) {
      native_sub_4327ec();
    }
    uVar4 = native_UnityEngine_Object__op_Implicit_8e1b98(uVar7,0);
    if ((uVar4 & 1) != 0) {
      if ((*(long *)(param_1 + 0x80) != 0) && (*(long *)(param_1 + 0x78) != 0)) {
        lVar3 = *(long *)(*(long *)(param_1 + 0x80) + 0x18);
        uVar1 = native_MG_BlocksEngine2_Utils_BE2_Dropdown__get_value_567678
                          (*(long *)(param_1 + 0x78),0);
        if (lVar3 != 0) {
          if (*(uint *)(lVar3 + 0x18) <= uVar1) {
            uVar7 = native_sub_43283c();
                    /* WARNING: Subroutine does not return */
            native_sub_4327dc(uVar7,0);
          }
          lVar3 = *(long *)(lVar3 + (long)(int)uVar1 * 8 + 0x20);
          if (lVar3 != 0) {
            if (*(char *)(lVar3 + 0x100) == '\0') {
              return;
            }
            plVar6 = *(long **)(param_1 + 0x48);
            if (plVar6 != (long *)0x0) {
              lVar3 = *plVar6;
              if ((ulong)*(ushort *)(lVar3 + 0x12a) != 0) {
                uVar4 = 0;
                piVar5 = (int *)(*(long *)(lVar3 + 0xb0) + 8);
                do {
                  if (*(long *)(piVar5 + -2) ==
                      _MG_BlocksEngine2_Core_I_BE2_BlocksStack_TypeInfo_12d4e10) {
                    puVar2 = (undefined8 *)(lVar3 + (long)(*piVar5 + 3) * 0x10 + 0x138);
                    goto LAB_0060f11c;
                  }
                  uVar4 = uVar4 + 1;
                  piVar5 = piVar5 + 4;
                } while (uVar4 < *(ushort *)(lVar3 + 0x12a));
              }
              puVar2 = (undefined8 *)
                       native_sub_3c9b34(plVar6,
                                         _MG_BlocksEngine2_Core_I_BE2_BlocksStack_TypeInfo_12d4e10,3
                                        );
LAB_0060f11c:
                    /* WARNING: Could not recover jumptable at 0x0060f134. Too many branches */
                    /* WARNING: Treating indirect jump as call */
              (*(code *)*puVar2)(plVar6,1,puVar2[1]);
              return;
            }
          }
        }
      }
      goto LAB_0060f138;
    }
  }
  return;
}



/* BE2_Ins_WhenJoystickKeyPressed$$Function @ 0x60f148
 * void BE2_Ins_WhenJoystickKeyPressed__Function (BE2_Ins_WhenJoystickKeyPressed_o* __this, const MethodInfo* method); */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* BE2_Ins_WhenJoystickKeyPressed$$Function
   void BE2_Ins_WhenJoystickKeyPressed__Function (BE2_Ins_WhenJoystickKeyPressed_o* __this, const
   MethodInfo* method); */

void native_BE2_Ins_WhenJoystickKeyPressed__Function_60f148(long param_1)

{
  undefined4 uVar1;
  int iVar2;
  undefined8 *puVar3;
  undefined8 uVar4;
  code *UNRECOVERED_JUMPTABLE;
  long lVar5;
  long lVar6;
  long lVar7;
  ulong uVar8;
  int *piVar9;
  long *plVar10;
  long *plVar11;
  
  if ((bRam000000000133ee61 & 1) == 0) {
    native_sub_43273c(&MG_BlocksEngine2_Block_I_BE2_Block_TypeInfo_12d4dd8);
    native_sub_43273c(&MG_BlocksEngine2_Core_I_BE2_BlocksStack_TypeInfo_12d4e10);
    native_sub_43273c(&MG_BlocksEngine2_Block_Instruction_I_BE2_InstructionBase_TypeInfo_12d4e30);
    native_sub_43273c(&MG_BlocksEngine2_Block_Instruction_I_BE2_Instruction_TypeInfo_12d4e28);
    bRam000000000133ee61 = 1;
  }
  plVar10 = *(long **)(param_1 + 0x48);
  if (plVar10 == (long *)0x0) goto LAB_00609ef0;
  lVar5 = *plVar10;
  if ((ulong)*(ushort *)(lVar5 + 0x12a) != 0) {
    uVar8 = 0;
    piVar9 = (int *)(*(long *)(lVar5 + 0xb0) + 8);
    do {
      if (*(long *)(piVar9 + -2) == _MG_BlocksEngine2_Core_I_BE2_BlocksStack_TypeInfo_12d4e10) {
        puVar3 = (undefined8 *)(lVar5 + (long)(*piVar9 + 9) * 0x10 + 0x138);
        goto LAB_006096b8;
      }
      uVar8 = uVar8 + 1;
      piVar9 = piVar9 + 4;
    } while (uVar8 < *(ushort *)(lVar5 + 0x12a));
  }
  puVar3 = (undefined8 *)
           native_sub_3c9b34(plVar10,_MG_BlocksEngine2_Core_I_BE2_BlocksStack_TypeInfo_12d4e10,9);
LAB_006096b8:
  lVar5 = (*(code *)*puVar3)(plVar10,puVar3[1]);
  if ((lVar5 == 0) || (lVar6 = *(long *)(param_1 + 0x58), lVar6 == 0)) goto LAB_00609ef0;
  if (*(int *)(lVar6 + 0x18) == 0) goto LAB_00609ef4;
  iVar2 = *(int *)(lVar6 + 0x20);
  plVar10 = *(long **)(param_1 + 0x48);
  if (*(int *)(lVar5 + 0x18) <= iVar2) {
    if (plVar10 == (long *)0x0) goto LAB_00609ef0;
    lVar5 = *plVar10;
    if ((ulong)*(ushort *)(lVar5 + 0x12a) != 0) {
      uVar8 = 0;
      piVar9 = (int *)(*(long *)(lVar5 + 0xb0) + 8);
      do {
        if (*(long *)(piVar9 + -2) == _MG_BlocksEngine2_Core_I_BE2_BlocksStack_TypeInfo_12d4e10) {
          puVar3 = (undefined8 *)(lVar5 + (long)(*piVar9 + 7) * 0x10 + 0x138);
          goto LAB_00609840;
        }
        uVar8 = uVar8 + 1;
        piVar9 = piVar9 + 4;
      } while (uVar8 < *(ushort *)(lVar5 + 0x12a));
    }
    puVar3 = (undefined8 *)
             native_sub_3c9b34(plVar10,_MG_BlocksEngine2_Core_I_BE2_BlocksStack_TypeInfo_12d4e10,7);
LAB_00609840:
    UNRECOVERED_JUMPTABLE = (code *)*puVar3;
    uVar4 = puVar3[1];
    goto LAB_00609ed8;
  }
  if (plVar10 == (long *)0x0) goto LAB_00609ef0;
  lVar5 = *plVar10;
  if ((ulong)*(ushort *)(lVar5 + 0x12a) != 0) {
    uVar8 = 0;
    piVar9 = (int *)(*(long *)(lVar5 + 0xb0) + 8);
    do {
      if (*(long *)(piVar9 + -2) == _MG_BlocksEngine2_Core_I_BE2_BlocksStack_TypeInfo_12d4e10) {
        puVar3 = (undefined8 *)(lVar5 + (long)(*piVar9 + 9) * 0x10 + 0x138);
        goto LAB_006097a0;
      }
      uVar8 = uVar8 + 1;
      piVar9 = piVar9 + 4;
    } while (uVar8 < *(ushort *)(lVar5 + 0x12a));
  }
  puVar3 = (undefined8 *)
           native_sub_3c9b34(plVar10,_MG_BlocksEngine2_Core_I_BE2_BlocksStack_TypeInfo_12d4e10,9);
LAB_006097a0:
  lVar5 = (*(code *)*puVar3)(plVar10,puVar3[1]);
  lVar6 = *(long *)(param_1 + 0x58);
  if (lVar6 == 0) goto LAB_00609ef0;
  if (*(int *)(lVar6 + 0x18) == 0) goto LAB_00609ef4;
  if (lVar5 == 0) goto LAB_00609ef0;
  if (*(uint *)(lVar5 + 0x18) <= *(uint *)(lVar6 + 0x20)) goto LAB_00609ef4;
  plVar10 = *(long **)(param_1 + 0x48);
  if (plVar10 == (long *)0x0) goto LAB_00609ef0;
  lVar7 = *plVar10;
  plVar11 = *(long **)(lVar5 + (long)(int)*(uint *)(lVar6 + 0x20) * 8 + 0x20);
  if ((ulong)*(ushort *)(lVar7 + 0x12a) != 0) {
    uVar8 = 0;
    piVar9 = (int *)(*(long *)(lVar7 + 0xb0) + 8);
    do {
      if (*(long *)(piVar9 + -2) == _MG_BlocksEngine2_Core_I_BE2_BlocksStack_TypeInfo_12d4e10) {
        puVar3 = (undefined8 *)(lVar7 + (long)(*piVar9 + 0xf) * 0x10 + 0x138);
        goto LAB_00609860;
      }
      uVar8 = uVar8 + 1;
      piVar9 = piVar9 + 4;
    } while (uVar8 < *(ushort *)(lVar7 + 0x12a));
  }
  puVar3 = (undefined8 *)
           native_sub_3c9b34(plVar10,_MG_BlocksEngine2_Core_I_BE2_BlocksStack_TypeInfo_12d4e10,0xf);
LAB_00609860:
  uVar8 = (*(code *)*puVar3)(plVar10,puVar3[1]);
  if ((uVar8 & 1) == 0) {
    if (plVar11 == (long *)0x0) goto LAB_00609ef0;
    lVar5 = *plVar11;
    if ((ulong)*(ushort *)(lVar5 + 0x12a) != 0) {
      uVar8 = 0;
      piVar9 = (int *)(*(long *)(lVar5 + 0xb0) + 8);
      do {
        if (*(long *)(piVar9 + -2) ==
            _MG_BlocksEngine2_Block_Instruction_I_BE2_Instruction_TypeInfo_12d4e28) {
          puVar3 = (undefined8 *)(lVar5 + (long)*piVar9 * 0x10 + 0x138);
          goto LAB_006099ac;
        }
        uVar8 = uVar8 + 1;
        piVar9 = piVar9 + 4;
      } while (uVar8 < *(ushort *)(lVar5 + 0x12a));
    }
    puVar3 = (undefined8 *)
             native_sub_3c9b34(plVar11,
                               _MG_BlocksEngine2_Block_Instruction_I_BE2_Instruction_TypeInfo_12d4e28
                               ,0);
LAB_006099ac:
    plVar10 = (long *)(*(code *)*puVar3)(plVar11,puVar3[1]);
    if (plVar10 == (long *)0x0) goto LAB_00609ef0;
    lVar5 = *plVar10;
    if ((ulong)*(ushort *)(lVar5 + 0x12a) != 0) {
      uVar8 = 0;
      piVar9 = (int *)(*(long *)(lVar5 + 0xb0) + 8);
      do {
        if (*(long *)(piVar9 + -2) ==
            _MG_BlocksEngine2_Block_Instruction_I_BE2_InstructionBase_TypeInfo_12d4e30) {
          puVar3 = (undefined8 *)(lVar5 + (long)(*piVar9 + 3) * 0x10 + 0x138);
          goto LAB_00609a20;
        }
        uVar8 = uVar8 + 1;
        piVar9 = piVar9 + 4;
      } while (uVar8 < *(ushort *)(lVar5 + 0x12a));
    }
    puVar3 = (undefined8 *)
             native_sub_3c9b34(plVar10,
                               _MG_BlocksEngine2_Block_Instruction_I_BE2_InstructionBase_TypeInfo_12d4e30
                               ,3);
LAB_00609a20:
    plVar10 = (long *)(*(code *)*puVar3)(plVar10,puVar3[1]);
    if (plVar10 == (long *)0x0) goto LAB_00609ef0;
    lVar5 = *plVar10;
    if ((ulong)*(ushort *)(lVar5 + 0x12a) != 0) {
      uVar8 = 0;
      piVar9 = (int *)(*(long *)(lVar5 + 0xb0) + 8);
      do {
        if (*(long *)(piVar9 + -2) == _MG_BlocksEngine2_Block_I_BE2_Block_TypeInfo_12d4dd8) {
          puVar3 = (undefined8 *)(lVar5 + (long)(*piVar9 + 1) * 0x10 + 0x138);
          goto LAB_00609a94;
        }
        uVar8 = uVar8 + 1;
        piVar9 = piVar9 + 4;
      } while (uVar8 < *(ushort *)(lVar5 + 0x12a));
    }
    puVar3 = (undefined8 *)
             native_sub_3c9b34(plVar10,_MG_BlocksEngine2_Block_I_BE2_Block_TypeInfo_12d4dd8,1);
LAB_00609a94:
    iVar2 = (*(code *)*puVar3)(plVar10,puVar3[1]);
    if (iVar2 == 4) {
      plVar10 = *(long **)(param_1 + 0x48);
      if (plVar10 == (long *)0x0) goto LAB_00609ef0;
      lVar5 = *plVar10;
      if ((ulong)*(ushort *)(lVar5 + 0x12a) != 0) {
        uVar8 = 0;
        piVar9 = (int *)(*(long *)(lVar5 + 0xb0) + 8);
        do {
          if (*(long *)(piVar9 + -2) == _MG_BlocksEngine2_Core_I_BE2_BlocksStack_TypeInfo_12d4e10) {
            puVar3 = (undefined8 *)(lVar5 + (long)(*piVar9 + 0x14) * 0x10 + 0x138);
            goto LAB_00609bd0;
          }
          uVar8 = uVar8 + 1;
          piVar9 = piVar9 + 4;
        } while (uVar8 < *(ushort *)(lVar5 + 0x12a));
      }
      puVar3 = (undefined8 *)
               native_sub_3c9b34(plVar10,_MG_BlocksEngine2_Core_I_BE2_BlocksStack_TypeInfo_12d4e10,
                                 0x14);
LAB_00609bd0:
      lVar5 = (*(code *)*puVar3)(plVar10,puVar3[1]);
      if (lVar5 == 0) goto LAB_00609ef0;
      native_UnityEngine_Events_UnityEvent__Invoke_773864(lVar5,0);
    }
    lVar5 = *plVar11;
    if ((ulong)*(ushort *)(lVar5 + 0x12a) != 0) {
      uVar8 = 0;
      piVar9 = (int *)(*(long *)(lVar5 + 0xb0) + 8);
      do {
        if (*(long *)(piVar9 + -2) ==
            _MG_BlocksEngine2_Block_Instruction_I_BE2_Instruction_TypeInfo_12d4e28) {
          puVar3 = (undefined8 *)(lVar5 + (long)(*piVar9 + 1) * 0x10 + 0x138);
          goto LAB_00609c40;
        }
        uVar8 = uVar8 + 1;
        piVar9 = piVar9 + 4;
      } while (uVar8 < *(ushort *)(lVar5 + 0x12a));
    }
    puVar3 = (undefined8 *)
             native_sub_3c9b34(plVar11,
                               _MG_BlocksEngine2_Block_Instruction_I_BE2_Instruction_TypeInfo_12d4e28
                               ,1);
LAB_00609c40:
    uVar8 = (*(code *)*puVar3)(plVar11,puVar3[1]);
    if ((uVar8 & 1) == 0) {
      plVar10 = *(long **)(param_1 + 0x48);
      if (plVar10 == (long *)0x0) goto LAB_00609ef0;
      lVar5 = *plVar10;
      if ((ulong)*(ushort *)(lVar5 + 0x12a) != 0) {
        uVar8 = 0;
        piVar9 = (int *)(*(long *)(lVar5 + 0xb0) + 8);
        do {
          if (*(long *)(piVar9 + -2) == _MG_BlocksEngine2_Core_I_BE2_BlocksStack_TypeInfo_12d4e10) {
            puVar3 = (undefined8 *)(lVar5 + (long)(*piVar9 + 4) * 0x10 + 0x138);
            goto LAB_00609cb0;
          }
          uVar8 = uVar8 + 1;
          piVar9 = piVar9 + 4;
        } while (uVar8 < *(ushort *)(lVar5 + 0x12a));
      }
      puVar3 = (undefined8 *)
               native_sub_3c9b34(plVar10,_MG_BlocksEngine2_Core_I_BE2_BlocksStack_TypeInfo_12d4e10,4
                                );
LAB_00609cb0:
      iVar2 = (*(code *)*puVar3)(plVar10,puVar3[1]);
      if (iVar2 < *(int *)(param_1 + 0x60)) {
        plVar10 = *(long **)(param_1 + 0x48);
        if (plVar10 == (long *)0x0) goto LAB_00609ef0;
        lVar5 = *plVar10;
        if ((ulong)*(ushort *)(lVar5 + 0x12a) != 0) {
          uVar8 = 0;
          piVar9 = (int *)(*(long *)(lVar5 + 0xb0) + 8);
          do {
            if (*(long *)(piVar9 + -2) == _MG_BlocksEngine2_Core_I_BE2_BlocksStack_TypeInfo_12d4e10)
            {
              puVar3 = (undefined8 *)(lVar5 + (long)(*piVar9 + 4) * 0x10 + 0x138);
              goto LAB_00609e24;
            }
            uVar8 = uVar8 + 1;
            piVar9 = piVar9 + 4;
          } while (uVar8 < *(ushort *)(lVar5 + 0x12a));
        }
        puVar3 = (undefined8 *)
                 native_sub_3c9b34(plVar10,_MG_BlocksEngine2_Core_I_BE2_BlocksStack_TypeInfo_12d4e10
                                   ,4);
LAB_00609e24:
        iVar2 = (*(code *)*puVar3)(plVar10,puVar3[1]);
        lVar5 = *plVar10;
        iVar2 = iVar2 + 1;
        if ((ulong)*(ushort *)(lVar5 + 0x12a) != 0) {
          uVar8 = 0;
          piVar9 = (int *)(*(long *)(lVar5 + 0xb0) + 8);
          do {
            if (*(long *)(piVar9 + -2) == _MG_BlocksEngine2_Core_I_BE2_BlocksStack_TypeInfo_12d4e10)
            goto LAB_00609e7c;
            uVar8 = uVar8 + 1;
            piVar9 = piVar9 + 4;
          } while (uVar8 < *(ushort *)(lVar5 + 0x12a));
        }
        goto LAB_00609e6c;
      }
    }
    lVar5 = *(long *)(param_1 + 0x58);
    if (lVar5 != 0) {
      if (*(int *)(lVar5 + 0x18) == 0) {
LAB_00609ef4:
        uVar4 = native_sub_43283c();
                    /* WARNING: Subroutine does not return */
        native_sub_4327dc(uVar4,0);
      }
      plVar10 = *(long **)(param_1 + 0x48);
      if (plVar10 != (long *)0x0) {
        lVar6 = *plVar10;
        iVar2 = *(int *)(lVar5 + 0x20);
        if ((ulong)*(ushort *)(lVar6 + 0x12a) != 0) {
          uVar8 = 0;
          piVar9 = (int *)(*(long *)(lVar6 + 0xb0) + 8);
          do {
            if (*(long *)(piVar9 + -2) == _MG_BlocksEngine2_Core_I_BE2_BlocksStack_TypeInfo_12d4e10)
            {
              puVar3 = (undefined8 *)(lVar6 + (long)(*piVar9 + 7) * 0x10 + 0x138);
              goto LAB_00609d94;
            }
            uVar8 = uVar8 + 1;
            piVar9 = piVar9 + 4;
          } while (uVar8 < *(ushort *)(lVar6 + 0x12a));
        }
        puVar3 = (undefined8 *)
                 native_sub_3c9b34(plVar10,_MG_BlocksEngine2_Core_I_BE2_BlocksStack_TypeInfo_12d4e10
                                   ,7);
LAB_00609d94:
        UNRECOVERED_JUMPTABLE = (code *)*puVar3;
        uVar4 = puVar3[1];
LAB_00609ed8:
                    /* WARNING: Could not recover jumptable at 0x00609eec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
        (*UNRECOVERED_JUMPTABLE)(plVar10,iVar2,uVar4);
        return;
      }
    }
LAB_00609ef0:
                    /* WARNING: Subroutine does not return */
    native_sub_432810();
  }
  plVar10 = *(long **)(param_1 + 0x40);
  if (plVar10 == (long *)0x0) goto LAB_00609ef0;
  lVar5 = *plVar10;
  if ((ulong)*(ushort *)(lVar5 + 0x12a) != 0) {
    uVar8 = 0;
    piVar9 = (int *)(*(long *)(lVar5 + 0xb0) + 8);
    do {
      if (*(long *)(piVar9 + -2) == _MG_BlocksEngine2_Block_I_BE2_Block_TypeInfo_12d4dd8) {
        puVar3 = (undefined8 *)(lVar5 + (long)(*piVar9 + 1) * 0x10 + 0x138);
        goto LAB_0060992c;
      }
      uVar8 = uVar8 + 1;
      piVar9 = piVar9 + 4;
    } while (uVar8 < *(ushort *)(lVar5 + 0x12a));
  }
  puVar3 = (undefined8 *)
           native_sub_3c9b34(plVar10,_MG_BlocksEngine2_Block_I_BE2_Block_TypeInfo_12d4dd8,1);
LAB_0060992c:
  iVar2 = (*(code *)*puVar3)(plVar10,puVar3[1]);
  if ((iVar2 != 4) &&
     (uVar8 = native_MG_BlocksEngine2_Utils_BE2_BlockUtils__BlockIsFunction_56f1f0
                        (*(undefined8 *)(param_1 + 0x40),0), (uVar8 & 1) == 0)) {
    lVar5 = *(long *)(param_1 + 0x58);
    if (lVar5 != 0) {
      if (*(int *)(lVar5 + 0x18) == 0) goto LAB_00609ef4;
      plVar10 = *(long **)(param_1 + 0x48);
      if (plVar10 != (long *)0x0) {
        lVar6 = *plVar10;
        uVar1 = *(undefined4 *)(lVar5 + 0x20);
        if ((ulong)*(ushort *)(lVar6 + 0x12a) != 0) {
          uVar8 = 0;
          piVar9 = (int *)(*(long *)(lVar6 + 0xb0) + 8);
          do {
            if (*(long *)(piVar9 + -2) == _MG_BlocksEngine2_Core_I_BE2_BlocksStack_TypeInfo_12d4e10)
            {
              puVar3 = (undefined8 *)(lVar6 + (long)(*piVar9 + 7) * 0x10 + 0x138);
              goto LAB_00609db4;
            }
            uVar8 = uVar8 + 1;
            piVar9 = piVar9 + 4;
          } while (uVar8 < *(ushort *)(lVar6 + 0x12a));
        }
        puVar3 = (undefined8 *)
                 native_sub_3c9b34(plVar10,_MG_BlocksEngine2_Core_I_BE2_BlocksStack_TypeInfo_12d4e10
                                   ,7);
LAB_00609db4:
        (*(code *)*puVar3)(plVar10,uVar1,puVar3[1]);
        plVar10 = *(long **)(param_1 + 0x48);
        if (plVar10 != (long *)0x0) {
          lVar5 = *plVar10;
          if ((ulong)*(ushort *)(lVar5 + 0x12a) != 0) {
            uVar8 = 0;
            piVar9 = (int *)(*(long *)(lVar5 + 0xb0) + 8);
            do {
              if (*(long *)(piVar9 + -2) ==
                  _MG_BlocksEngine2_Core_I_BE2_BlocksStack_TypeInfo_12d4e10) {
                puVar3 = (undefined8 *)(lVar5 + (long)(*piVar9 + 3) * 0x10 + 0x138);
                goto LAB_00609ecc;
              }
              uVar8 = uVar8 + 1;
              piVar9 = piVar9 + 4;
            } while (uVar8 < *(ushort *)(lVar5 + 0x12a));
          }
          puVar3 = (undefined8 *)
                   native_sub_3c9b34(plVar10,
                                     _MG_BlocksEngine2_Core_I_BE2_BlocksStack_TypeInfo_12d4e10,3);
LAB_00609ecc:
          UNRECOVERED_JUMPTABLE = (code *)*puVar3;
          uVar4 = puVar3[1];
          iVar2 = 0;
          goto LAB_00609ed8;
        }
      }
    }
    goto LAB_00609ef0;
  }
  plVar10 = *(long **)(param_1 + 0x48);
  if (plVar10 == (long *)0x0) goto LAB_00609ef0;
  lVar5 = *plVar10;
  if ((ulong)*(ushort *)(lVar5 + 0x12a) != 0) {
    uVar8 = 0;
    piVar9 = (int *)(*(long *)(lVar5 + 0xb0) + 8);
    do {
      if (*(long *)(piVar9 + -2) == _MG_BlocksEngine2_Core_I_BE2_BlocksStack_TypeInfo_12d4e10) {
        puVar3 = (undefined8 *)(lVar5 + (long)(*piVar9 + 4) * 0x10 + 0x138);
        goto LAB_00609b74;
      }
      uVar8 = uVar8 + 1;
      piVar9 = piVar9 + 4;
    } while (uVar8 < *(ushort *)(lVar5 + 0x12a));
  }
  puVar3 = (undefined8 *)
           native_sub_3c9b34(plVar10,_MG_BlocksEngine2_Core_I_BE2_BlocksStack_TypeInfo_12d4e10,4);
LAB_00609b74:
  iVar2 = (*(code *)*puVar3)(plVar10,puVar3[1]);
  lVar5 = *plVar10;
  iVar2 = iVar2 + 1;
  if ((ulong)*(ushort *)(lVar5 + 0x12a) != 0) {
    uVar8 = 0;
    piVar9 = (int *)(*(long *)(lVar5 + 0xb0) + 8);
    do {
      if (*(long *)(piVar9 + -2) == _MG_BlocksEngine2_Core_I_BE2_BlocksStack_TypeInfo_12d4e10)
      goto LAB_00609e7c;
      uVar8 = uVar8 + 1;
      piVar9 = piVar9 + 4;
    } while (uVar8 < *(ushort *)(lVar5 + 0x12a));
  }
LAB_00609e6c:
  puVar3 = (undefined8 *)
           native_sub_3c9b34(plVar10,_MG_BlocksEngine2_Core_I_BE2_BlocksStack_TypeInfo_12d4e10,5);
LAB_00609e8c:
  (*(code *)*puVar3)(plVar10,iVar2,puVar3[1]);
  if ((bRam000000000133ee63 & 1) == 0) {
    native_sub_43273c(&MG_BlocksEngine2_Core_I_BE2_BlocksStack_TypeInfo_12d4e10);
    native_sub_43273c(&MG_BlocksEngine2_Block_Instruction_I_BE2_Instruction_TypeInfo_12d4e28);
    native_sub_43273c(&Method_UnityEngine_Events_UnityEvent_I_BE2_Instruction__Invoke___12de478);
    bRam000000000133ee63 = 1;
  }
  plVar10 = *(long **)(param_1 + 0x48);
  if (plVar10 != (long *)0x0) {
    lVar5 = *plVar10;
    if ((ulong)*(ushort *)(lVar5 + 0x12a) != 0) {
      uVar8 = 0;
      piVar9 = (int *)(*(long *)(lVar5 + 0xb0) + 8);
      do {
        if (*(long *)(piVar9 + -2) == _MG_BlocksEngine2_Core_I_BE2_BlocksStack_TypeInfo_12d4e10) {
          puVar3 = (undefined8 *)(lVar5 + (long)(*piVar9 + 0xb) * 0x10 + 0x138);
          goto LAB_00611f54;
        }
        uVar8 = uVar8 + 1;
        piVar9 = piVar9 + 4;
      } while (uVar8 < *(ushort *)(lVar5 + 0x12a));
    }
    puVar3 = (undefined8 *)
             native_sub_3c9b34(plVar10,_MG_BlocksEngine2_Core_I_BE2_BlocksStack_TypeInfo_12d4e10,0xb
                              );
LAB_00611f54:
    lVar5 = (*(code *)*puVar3)(plVar10,puVar3[1]);
    if ((lVar5 != 0) &&
       (native_UnityEngine_Events_UnityEvent_BaseEventData___Invoke_8a0108
                  (lVar5,plVar11,
                   _Method_UnityEngine_Events_UnityEvent_I_BE2_Instruction__Invoke___12de478),
       plVar11 != (long *)0x0)) {
      lVar5 = *plVar11;
      if ((ulong)*(ushort *)(lVar5 + 0x12a) != 0) {
        uVar8 = 0;
        piVar9 = (int *)(*(long *)(lVar5 + 0xb0) + 8);
        do {
          if (*(long *)(piVar9 + -2) ==
              _MG_BlocksEngine2_Block_Instruction_I_BE2_Instruction_TypeInfo_12d4e28) {
            puVar3 = (undefined8 *)(lVar5 + (long)(*piVar9 + 3) * 0x10 + 0x138);
            goto LAB_00611fdc;
          }
          uVar8 = uVar8 + 1;
          piVar9 = piVar9 + 4;
        } while (uVar8 < *(ushort *)(lVar5 + 0x12a));
      }
      puVar3 = (undefined8 *)
               native_sub_3c9b34(plVar11,
                                 _MG_BlocksEngine2_Block_Instruction_I_BE2_Instruction_TypeInfo_12d4e28
                                 ,3);
LAB_00611fdc:
                    /* WARNING: Could not recover jumptable at 0x00611ff0. Too many branches */
                    /* WARNING: Treating indirect jump as call */
      (*(code *)*puVar3)(plVar11,puVar3[1]);
      return;
    }
  }
                    /* WARNING: Subroutine does not return */
  native_sub_432810();
LAB_00609e7c:
  puVar3 = (undefined8 *)(lVar5 + (long)(*piVar9 + 5) * 0x10 + 0x138);
  goto LAB_00609e8c;
}



/* BE2_Ins_WhenJoystickKeyPressed$$.ctor @ 0x60f150
 * void BE2_Ins_WhenJoystickKeyPressed___ctor (BE2_Ins_WhenJoystickKeyPressed_o* __this, const MethodInfo* method); */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* BE2_Ins_WhenJoystickKeyPressed$$.ctor
   void BE2_Ins_WhenJoystickKeyPressed___ctor (BE2_Ins_WhenJoystickKeyPressed_o* __this, const
   MethodInfo* method); */

undefined1  [16] native_BE2_Ins_WhenJoystickKeyPressed___ctor_60f150(ulong param_1)

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


