/* ARM64 IL2CPP native pseudocode from Ghidra.
 * Recovered implementation, not original C# source.
 * Function boundaries follow the IL2CPP method address table. */


/* ChatController$$OnEnable @ 0xdd6228
 * void ChatController__OnEnable (ChatController_o* __this, const MethodInfo* method); */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* ChatController$$OnEnable
   void ChatController__OnEnable (ChatController_o* __this, const MethodInfo* method); */

void native_ChatController__OnEnable_dd6228(long param_1)

{
  undefined8 uVar1;
  long lVar2;
  
  if ((bRam0000000001346e4d & 1) == 0) {
    native_sub_43273c(&Method_ChatController_AddToChatOutput___12e27a8);
    native_sub_43273c(&Method_UnityEngine_Events_UnityAction_string___ctor___12de3e0);
    native_sub_43273c(&UnityEngine_Events_UnityAction_string__TypeInfo_12d2f68);
    native_sub_43273c(&Method_UnityEngine_Events_UnityEvent_string__AddListener___12de4e8);
    bRam0000000001346e4d = 1;
  }
  if (*(long *)(param_1 + 0x18) != 0) {
    lVar2 = *(long *)(*(long *)(param_1 + 0x18) + 0x1b0);
    uVar1 = native_sub_432808(_UnityEngine_Events_UnityAction_string__TypeInfo_12d2f68);
    native_UnityEngine_Events_UnityAction_List_IEventSystemHandler_____ctor_89b93c
              (uVar1,param_1,_Method_ChatController_AddToChatOutput___12e27a8,
               _Method_UnityEngine_Events_UnityAction_string___ctor___12de3e0);
    if (lVar2 != 0) {
      uVar1 = (**(code **)**(undefined8 **)
                            (*(long *)(
                                      _Method_UnityEngine_Events_UnityEvent_string__AddListener___12de4e8
                                      + 0x18) + 0xc0))(uVar1);
      if (lVar2 == 0) {
                    /* WARNING: Subroutine does not return */
        native_sub_432810();
      }
      lVar2 = *(long *)(lVar2 + 0x10);
      if (lVar2 != 0) {
        if ((bRam0000000001340cbd & 1) == 0) {
          native_sub_43273c(&Method_System_Collections_Generic_List_BaseInvokableCall__Add___12dc5b0
                            ,uVar1,0);
          bRam0000000001340cbd = 1;
        }
        if (*(long *)(lVar2 + 0x18) != 0) {
          native_System_Collections_Generic_List_int_____Add_d40c00
                    (*(long *)(lVar2 + 0x18),uVar1,
                     _Method_System_Collections_Generic_List_BaseInvokableCall__Add___12dc5b0);
          *(undefined1 *)(lVar2 + 0x28) = 1;
          return;
        }
                    /* WARNING: Subroutine does not return */
        native_sub_432810();
      }
                    /* WARNING: Subroutine does not return */
      native_sub_432810(0,uVar1,0);
    }
  }
                    /* WARNING: Subroutine does not return */
  native_sub_432810();
}



/* ChatController$$OnDisable @ 0xdd62ec
 * void ChatController__OnDisable (ChatController_o* __this, const MethodInfo* method); */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* ChatController$$OnDisable
   void ChatController__OnDisable (ChatController_o* __this, const MethodInfo* method); */

void native_ChatController__OnDisable_dd62ec(long param_1)

{
  undefined8 uVar1;
  long *plVar2;
  long *plVar3;
  ulong uVar4;
  long lVar5;
  undefined8 uVar6;
  long lVar7;
  long lVar8;
  uint uVar9;
  
  if ((bRam0000000001346e4e & 1) == 0) {
    native_sub_43273c(&Method_ChatController_AddToChatOutput___12e27a8);
    native_sub_43273c(&Method_UnityEngine_Events_UnityAction_string___ctor___12de3e0);
    native_sub_43273c(&UnityEngine_Events_UnityAction_string__TypeInfo_12d2f68);
    native_sub_43273c(&Method_UnityEngine_Events_UnityEvent_string__RemoveListener___12de4f8);
    bRam0000000001346e4e = 1;
  }
  if (*(long *)(param_1 + 0x18) != 0) {
    lVar7 = *(long *)(*(long *)(param_1 + 0x18) + 0x1b0);
    lVar5 = native_sub_432808(_UnityEngine_Events_UnityAction_string__TypeInfo_12d2f68);
    native_UnityEngine_Events_UnityAction_List_IEventSystemHandler_____ctor_89b93c
              (lVar5,param_1,_Method_ChatController_AddToChatOutput___12e27a8,
               _Method_UnityEngine_Events_UnityAction_string___ctor___12de3e0);
    if (lVar7 != 0) {
      if (lVar5 != 0) {
        uVar6 = *(undefined8 *)(lVar5 + 0x20);
        uVar1 = native_System_Delegate__get_Method_a6b39c
                          (lVar5,0,
                           _Method_UnityEngine_Events_UnityEvent_string__RemoveListener___12de4f8);
        if (lVar7 != 0) {
          lVar5 = *(long *)(lVar7 + 0x10);
          if (lVar5 == 0) {
                    /* WARNING: Subroutine does not return */
            native_sub_432810();
          }
          if ((bRam0000000001340cbe & 1) == 0) {
            native_sub_43273c(&
                              Method_System_Collections_Generic_List_BaseInvokableCall__Add___12dc5b0
                              ,uVar6,uVar1,0);
            native_sub_43273c(&
                              Method_System_Collections_Generic_List_BaseInvokableCall__RemoveAll___12dc5c8
                             );
            native_sub_43273c(&
                              Method_System_Collections_Generic_List_BaseInvokableCall___ctor___12dc5a8
                             );
            native_sub_43273c(&
                              Method_System_Collections_Generic_List_BaseInvokableCall__get_Count___12dc5d0
                             );
            native_sub_43273c(&
                              Method_System_Collections_Generic_List_BaseInvokableCall__get_Item___12dc5d8
                             );
            native_sub_43273c(&System_Collections_Generic_List_BaseInvokableCall__TypeInfo_12d29c8);
            native_sub_43273c(&Method_System_Predicate_BaseInvokableCall___ctor___12ddad0);
            native_sub_43273c(&System_Predicate_BaseInvokableCall__TypeInfo_12d2d78);
            bRam0000000001340cbe = 1;
          }
          plVar2 = (long *)native_sub_432808(
                                            _System_Collections_Generic_List_BaseInvokableCall__TypeInfo_12d29c8
                                            );
          native_System_Collections_Generic_List_XmlEventCache_XmlEvent______ctor_d3ff44
                    (plVar2,
                     _Method_System_Collections_Generic_List_BaseInvokableCall___ctor___12dc5a8);
          lVar7 = *(long *)(lVar5 + 0x18);
          if (lVar7 != 0) {
            lVar8 = 4;
            do {
              uVar9 = (int)lVar8 - 4;
              if ((int)*(uint *)(lVar7 + 0x18) <= (int)uVar9) {
                uVar1 = native_sub_432808(_System_Predicate_BaseInvokableCall__TypeInfo_12d2d78);
                if (plVar2 != (long *)0x0) {
                  native_System_Predicate_BaseInvokableCall____ctor_ac31d4
                            (uVar1,plVar2,*(undefined8 *)(*plVar2 + 0x210),
                             _Method_System_Predicate_BaseInvokableCall___ctor___12ddad0);
                  native_System_Collections_Generic_List_BaseInvokableCall___RemoveAll_d420e0
                            (lVar7,uVar1,
                             _Method_System_Collections_Generic_List_BaseInvokableCall__RemoveAll___12dc5c8
                            );
                  *(undefined1 *)(lVar5 + 0x28) = 1;
                  return;
                }
                break;
              }
              if (*(uint *)(lVar7 + 0x18) <= uVar9) {
                native_System_ThrowHelper__ThrowArgumentOutOfRangeException_9fe0f4(0);
              }
              plVar3 = *(long **)(*(long *)(lVar7 + 0x10) + lVar8 * 8);
              if (plVar3 == (long *)0x0) break;
              uVar4 = (**(code **)(*plVar3 + 0x188))
                                (plVar3,uVar6,uVar1,*(undefined8 *)(*plVar3 + 400));
              if ((uVar4 & 1) != 0) {
                lVar7 = *(long *)(lVar5 + 0x18);
                if (lVar7 == 0) break;
                if (*(uint *)(lVar7 + 0x18) <= uVar9) {
                  native_System_ThrowHelper__ThrowArgumentOutOfRangeException_9fe0f4(0);
                }
                if (plVar2 == (long *)0x0) break;
                native_System_Collections_Generic_List_int_____Add_d40c00
                          (plVar2,*(undefined8 *)(*(long *)(lVar7 + 0x10) + lVar8 * 8),
                           _Method_System_Collections_Generic_List_BaseInvokableCall__Add___12dc5b0)
                ;
              }
              lVar7 = *(long *)(lVar5 + 0x18);
              lVar8 = lVar8 + 1;
            } while (lVar7 != 0);
          }
                    /* WARNING: Subroutine does not return */
          native_sub_432810();
        }
      }
                    /* WARNING: Subroutine does not return */
      native_sub_432810();
    }
  }
                    /* WARNING: Subroutine does not return */
  native_sub_432810();
}



/* ChatController$$AddToChatOutput @ 0xdd63b0
 * void ChatController__AddToChatOutput (ChatController_o* __this, System_String_o* newText, const MethodInfo* method); */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* ChatController$$AddToChatOutput
   void ChatController__AddToChatOutput (ChatController_o* __this, System_String_o* newText, const
   MethodInfo* method); */

void native_ChatController__AddToChatOutput_dd63b0(long param_1,long param_2)

{
  long *plVar1;
  long lVar2;
  long lVar3;
  undefined8 uVar4;
  ulong uVar5;
  code *pcVar6;
  undefined8 uVar7;
  undefined4 uStack_54;
  undefined8 uStack_48;
  
  if ((bRam0000000001346e4f & 1) == 0) {
    native_sub_43273c(&System_DateTime_TypeInfo_12d42f8);
    native_sub_43273c(&UnityEngine_Object_TypeInfo_12d54e0);
    native_sub_43273c(&string___TypeInfo_12d3398);
    native_sub_43273c(&string_TypeInfo_12d5f28);
    native_sub_43273c(&StringLiteral___12eab80);
    native_sub_43273c(&StringLiteral___color____12ebdf8);
    native_sub_43273c(&StringLiteral_d2_12f42e0);
    native_sub_43273c(&StringLiteral___12ebc70);
    native_sub_43273c(&StringLiteral____FFFF80__12f3280);
    bRam0000000001346e4f = 1;
  }
  uStack_48 = 0;
  uStack_54 = 0;
  if (*(long *)(param_1 + 0x18) == 0) goto LAB_00dd6848;
  native_TMPro_TMP_InputField__set_text_88acec
            (*(long *)(param_1 + 0x18),**(undefined8 **)(_string_TypeInfo_12d5f28 + 0xb8),0);
  if (((*(byte *)(_System_DateTime_TypeInfo_12d42f8 + 0x133) >> 2 & 1) != 0) &&
     (*(int *)(_System_DateTime_TypeInfo_12d42f8 + 0xe0) == 0)) {
    native_sub_4327ec();
  }
  uStack_48 = native_System_DateTime__get_Now_9c70d8(0);
  plVar1 = (long *)native_sub_432750(_string___TypeInfo_12d3398,8);
  if (plVar1 == (long *)0x0) goto LAB_00dd6848;
  if (_StringLiteral____FFFF80__12f3280 == 0) {
    lVar3 = 0;
  }
  else {
    lVar2 = native_sub_4327f8(_StringLiteral____FFFF80__12f3280,*(undefined8 *)(*plVar1 + 0x40));
    lVar3 = _StringLiteral____FFFF80__12f3280;
    if (lVar2 == 0) goto LAB_00dd683c;
  }
  if ((int)plVar1[3] == 0) goto LAB_00dd6830;
  plVar1[4] = lVar3;
  native_sub_4326e0();
  uStack_54 = native_System_DateTime__get_Hour_9c701c(&uStack_48,0);
  lVar3 = native_System_Int32__ToString_83c640(&uStack_54,_StringLiteral_d2_12f42e0,0);
  if ((lVar3 != 0) && (lVar2 = native_sub_4327f8(lVar3,*(undefined8 *)(*plVar1 + 0x40)), lVar2 == 0)
     ) {
LAB_00dd683c:
    uVar4 = native_sub_432830();
                    /* WARNING: Subroutine does not return */
    native_sub_4327dc(uVar4,0);
  }
  if (*(uint *)(plVar1 + 3) < 2) {
LAB_00dd6830:
    uVar4 = native_sub_43283c();
                    /* WARNING: Subroutine does not return */
    native_sub_4327dc(uVar4,0);
  }
  plVar1[5] = lVar3;
  native_sub_4326e0(plVar1 + 5,lVar3);
  if (_StringLiteral___12ebc70 == 0) {
    lVar3 = 0;
  }
  else {
    lVar2 = native_sub_4327f8(_StringLiteral___12ebc70,*(undefined8 *)(*plVar1 + 0x40));
    lVar3 = _StringLiteral___12ebc70;
    if (lVar2 == 0) goto LAB_00dd683c;
  }
  if (*(uint *)(plVar1 + 3) < 3) goto LAB_00dd6830;
  plVar1[6] = lVar3;
  native_sub_4326e0();
  uStack_54 = native_System_DateTime__get_Minute_9c7094(&uStack_48,0);
  lVar3 = native_System_Int32__ToString_83c640(&uStack_54,_StringLiteral_d2_12f42e0,0);
  if ((lVar3 != 0) && (lVar2 = native_sub_4327f8(lVar3,*(undefined8 *)(*plVar1 + 0x40)), lVar2 == 0)
     ) goto LAB_00dd683c;
  if (*(uint *)(plVar1 + 3) < 4) goto LAB_00dd6830;
  plVar1[7] = lVar3;
  native_sub_4326e0(plVar1 + 7,lVar3);
  if (_StringLiteral___12ebc70 == 0) {
    lVar3 = 0;
  }
  else {
    lVar2 = native_sub_4327f8(_StringLiteral___12ebc70,*(undefined8 *)(*plVar1 + 0x40));
    lVar3 = _StringLiteral___12ebc70;
    if (lVar2 == 0) goto LAB_00dd683c;
  }
  if (*(uint *)(plVar1 + 3) < 5) goto LAB_00dd6830;
  plVar1[8] = lVar3;
  native_sub_4326e0();
  uStack_54 = native_System_DateTime__get_Second_9c722c(&uStack_48,0);
  lVar3 = native_System_Int32__ToString_83c640(&uStack_54,_StringLiteral_d2_12f42e0,0);
  if ((lVar3 != 0) && (lVar2 = native_sub_4327f8(lVar3,*(undefined8 *)(*plVar1 + 0x40)), lVar2 == 0)
     ) goto LAB_00dd683c;
  if (*(uint *)(plVar1 + 3) < 6) goto LAB_00dd6830;
  plVar1[9] = lVar3;
  native_sub_4326e0(plVar1 + 9,lVar3);
  if (_StringLiteral___color____12ebdf8 == 0) {
    lVar3 = 0;
  }
  else {
    lVar2 = native_sub_4327f8(_StringLiteral___color____12ebdf8,*(undefined8 *)(*plVar1 + 0x40));
    lVar3 = _StringLiteral___color____12ebdf8;
    if (lVar2 == 0) goto LAB_00dd683c;
  }
  if (*(uint *)(plVar1 + 3) < 7) goto LAB_00dd6830;
  plVar1[10] = lVar3;
  native_sub_4326e0();
  if ((param_2 != 0) &&
     (lVar3 = native_sub_4327f8(param_2,*(undefined8 *)(*plVar1 + 0x40)), lVar3 == 0))
  goto LAB_00dd683c;
  if (*(uint *)(plVar1 + 3) < 8) goto LAB_00dd6830;
  plVar1[0xb] = param_2;
  native_sub_4326e0(plVar1 + 0xb,param_2);
  uVar4 = native_System_String__Concat_b0ddf4(plVar1,0);
  uVar7 = *(undefined8 *)(param_1 + 0x20);
  if (((*(byte *)(_UnityEngine_Object_TypeInfo_12d54e0 + 0x133) >> 2 & 1) != 0) &&
     (*(int *)(_UnityEngine_Object_TypeInfo_12d54e0 + 0xe0) == 0)) {
    native_sub_4327ec(_UnityEngine_Object_TypeInfo_12d54e0);
  }
  uVar5 = native_UnityEngine_Object__op_Inequality_8d76fc(uVar7,0,0);
  if ((uVar5 & 1) != 0) {
    plVar1 = *(long **)(param_1 + 0x20);
    if (plVar1 == (long *)0x0) goto LAB_00dd6848;
    uVar7 = (**(code **)(*plVar1 + 0x548))(plVar1,*(undefined8 *)(*plVar1 + 0x550));
    uVar5 = native_System_String__op_Equality_afc18c
                      (uVar7,**(undefined8 **)(_string_TypeInfo_12d5f28 + 0xb8),0);
    plVar1 = *(long **)(param_1 + 0x20);
    if (plVar1 == (long *)0x0) goto LAB_00dd6848;
    lVar3 = *plVar1;
    if ((uVar5 & 1) == 0) {
      uVar7 = (**(code **)(lVar3 + 0x548))(plVar1,*(undefined8 *)(lVar3 + 0x550));
      uVar4 = native_System_String__Concat_afc654(uVar7,_StringLiteral___12eab80,uVar4,0);
      pcVar6 = *(code **)(*plVar1 + 0x558);
      uVar7 = *(undefined8 *)(*plVar1 + 0x560);
    }
    else {
      pcVar6 = *(code **)(lVar3 + 0x558);
      uVar7 = *(undefined8 *)(lVar3 + 0x560);
    }
    (*pcVar6)(plVar1,uVar4,uVar7);
  }
  if (*(long *)(param_1 + 0x18) != 0) {
    native_TMPro_TMP_InputField__ActivateInputField_895c08(*(long *)(param_1 + 0x18),0);
    if (*(long *)(param_1 + 0x28) != 0) {
      native_UnityEngine_UI_Scrollbar__set_value_a8ae3c(0,*(long *)(param_1 + 0x28),0);
      return;
    }
  }
LAB_00dd6848:
                    /* WARNING: Subroutine does not return */
  native_sub_432810();
}



/* ChatController$$.ctor @ 0xdd684c
 * void ChatController___ctor (ChatController_o* __this, const MethodInfo* method); */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* ChatController$$.ctor
   void ChatController___ctor (ChatController_o* __this, const MethodInfo* method); */

undefined1  [16] native_ChatController___ctor_dd684c(ulong param_1)

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


