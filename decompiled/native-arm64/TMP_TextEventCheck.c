/* ARM64 IL2CPP native pseudocode from Ghidra.
 * Recovered implementation, not original C# source.
 * Function boundaries follow the IL2CPP method address table. */


/* TMPro.Examples.TMP_TextEventCheck$$OnEnable @ 0x7404e0
 * void TMPro_Examples_TMP_TextEventCheck__OnEnable (TMPro_Examples_TMP_TextEventCheck_o* __this, const MethodInfo* method); */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* TMPro.Examples.TMP_TextEventCheck$$OnEnable
   void TMPro_Examples_TMP_TextEventCheck__OnEnable (TMPro_Examples_TMP_TextEventCheck_o* __this,
   const MethodInfo* method); */

void native_TMPro_Examples_TMP_TextEventCheck__OnEnable_7404e0(long param_1)

{
  ulong uVar1;
  undefined8 uVar2;
  long lVar3;
  
  if ((bRam000000000133f636 & 1) == 0) {
    native_sub_43273c(&Method_UnityEngine_Component_GetComponent_TMP_Text____12e2b38);
    native_sub_43273c(&UnityEngine_Object_TypeInfo_12d54e0);
    native_sub_43273c(&Method_TMPro_Examples_TMP_TextEventCheck_OnCharacterSelection___12e6f90);
    native_sub_43273c(&Method_TMPro_Examples_TMP_TextEventCheck_OnLineSelection___12e6f98);
    native_sub_43273c(&Method_TMPro_Examples_TMP_TextEventCheck_OnLinkSelection___12e6fa0);
    native_sub_43273c(&Method_TMPro_Examples_TMP_TextEventCheck_OnSpriteSelection___12e6fa8);
    native_sub_43273c(&Method_TMPro_Examples_TMP_TextEventCheck_OnWordSelection___12e6fb0);
    native_sub_43273c(&Method_UnityEngine_Events_UnityAction_char__int___ctor___12de3e8);
    native_sub_43273c(&UnityEngine_Events_UnityAction_char__int__TypeInfo_12d2f70);
    native_sub_43273c(&Method_UnityEngine_Events_UnityAction_string__string__int___ctor___12de408);
    native_sub_43273c(&Method_UnityEngine_Events_UnityAction_string__int__int___ctor___12de400);
    native_sub_43273c(&UnityEngine_Events_UnityAction_string__int__int__TypeInfo_12d2f78);
    native_sub_43273c(&UnityEngine_Events_UnityAction_string__string__int__TypeInfo_12d2f80);
    native_sub_43273c(&Method_UnityEngine_Events_UnityEvent_char__int__AddListener___12de528);
    native_sub_43273c(&Method_UnityEngine_Events_UnityEvent_string__int__int__AddListener___12de548)
    ;
    native_sub_43273c(&
                      Method_UnityEngine_Events_UnityEvent_string__string__int__AddListener___12de568
                     );
    bRam000000000133f636 = 1;
  }
  uVar2 = *(undefined8 *)(param_1 + 0x18);
  if (((*(byte *)(_UnityEngine_Object_TypeInfo_12d54e0 + 0x133) >> 2 & 1) != 0) &&
     (*(int *)(_UnityEngine_Object_TypeInfo_12d54e0 + 0xe0) == 0)) {
    native_sub_4327ec();
  }
  uVar1 = native_UnityEngine_Object__op_Inequality_8d76fc(uVar2,0,0);
  if ((uVar1 & 1) == 0) {
    return;
  }
  if (*(long *)(param_1 + 0x18) != 0) {
    uVar2 = native_UnityEngine_Component__GetComponent_ActiveAnimation__49daec
                      (*(long *)(param_1 + 0x18),
                       _Method_UnityEngine_Component_GetComponent_TMP_Text____12e2b38);
    *(undefined8 *)(param_1 + 0x20) = uVar2;
    native_sub_4326e0((undefined8 *)(param_1 + 0x20),uVar2);
    if (*(long *)(param_1 + 0x18) != 0) {
      lVar3 = *(long *)(*(long *)(param_1 + 0x18) + 0x18);
      uVar2 = native_sub_432808(_UnityEngine_Events_UnityAction_char__int__TypeInfo_12d2f70);
      native_UnityEngine_Events_UnityAction_char__int____ctor_89c72c
                (uVar2,param_1,
                 _Method_TMPro_Examples_TMP_TextEventCheck_OnCharacterSelection___12e6f90,
                 _Method_UnityEngine_Events_UnityAction_char__int___ctor___12de3e8);
      if (lVar3 != 0) {
        native_UnityEngine_Events_UnityEvent_char__int___AddListener_8a0e0c
                  (lVar3,uVar2,
                   _Method_UnityEngine_Events_UnityEvent_char__int__AddListener___12de528);
        if (*(long *)(param_1 + 0x18) != 0) {
          lVar3 = *(long *)(*(long *)(param_1 + 0x18) + 0x20);
          uVar2 = native_sub_432808(_UnityEngine_Events_UnityAction_char__int__TypeInfo_12d2f70);
          native_UnityEngine_Events_UnityAction_char__int____ctor_89c72c
                    (uVar2,param_1,
                     _Method_TMPro_Examples_TMP_TextEventCheck_OnSpriteSelection___12e6fa8,
                     _Method_UnityEngine_Events_UnityAction_char__int___ctor___12de3e8);
          if (lVar3 != 0) {
            native_UnityEngine_Events_UnityEvent_char__int___AddListener_8a0e0c
                      (lVar3,uVar2,
                       _Method_UnityEngine_Events_UnityEvent_char__int__AddListener___12de528);
            if (*(long *)(param_1 + 0x18) != 0) {
              lVar3 = *(long *)(*(long *)(param_1 + 0x18) + 0x28);
              uVar2 = native_sub_432808(
                                       _UnityEngine_Events_UnityAction_string__int__int__TypeInfo_12d2f78
                                       );
              native_UnityEngine_Events_UnityAction_object__int__int____ctor_89d5ec
                        (uVar2,param_1,
                         _Method_TMPro_Examples_TMP_TextEventCheck_OnWordSelection___12e6fb0,
                         _Method_UnityEngine_Events_UnityAction_string__int__int___ctor___12de400);
              if (lVar3 != 0) {
                native_UnityEngine_Events_UnityEvent_object__int__int___AddListener_8a19ec
                          (lVar3,uVar2,
                           _Method_UnityEngine_Events_UnityEvent_string__int__int__AddListener___12de548
                          );
                if (*(long *)(param_1 + 0x18) != 0) {
                  lVar3 = *(long *)(*(long *)(param_1 + 0x18) + 0x30);
                  uVar2 = native_sub_432808(
                                           _UnityEngine_Events_UnityAction_string__int__int__TypeInfo_12d2f78
                                           );
                  native_UnityEngine_Events_UnityAction_object__int__int____ctor_89d5ec
                            (uVar2,param_1,
                             _Method_TMPro_Examples_TMP_TextEventCheck_OnLineSelection___12e6f98,
                             _Method_UnityEngine_Events_UnityAction_string__int__int___ctor___12de400
                            );
                  if (lVar3 != 0) {
                    native_UnityEngine_Events_UnityEvent_object__int__int___AddListener_8a19ec
                              (lVar3,uVar2,
                               _Method_UnityEngine_Events_UnityEvent_string__int__int__AddListener___12de548
                              );
                    if (*(long *)(param_1 + 0x18) != 0) {
                      lVar3 = *(long *)(*(long *)(param_1 + 0x18) + 0x38);
                      uVar2 = native_sub_432808(
                                               _UnityEngine_Events_UnityAction_string__string__int__TypeInfo_12d2f80
                                               );
                      native_UnityEngine_Events_UnityAction_object__object__int____ctor_89dacc
                                (uVar2,param_1,
                                 _Method_TMPro_Examples_TMP_TextEventCheck_OnLinkSelection___12e6fa0
                                 ,
                                 _Method_UnityEngine_Events_UnityAction_string__string__int___ctor___12de408
                                );
                      if (lVar3 != 0) {
                        uVar2 = (**(code **)**(undefined8 **)
                                              (*(long *)(
                                                  _Method_UnityEngine_Events_UnityEvent_string__string__int__AddListener___12de568
                                                  + 0x18) + 0xc0))(uVar2);
                        if (lVar3 == 0) {
                    /* WARNING: Subroutine does not return */
                          native_sub_432810();
                        }
                        lVar3 = *(long *)(lVar3 + 0x10);
                        if (lVar3 != 0) {
                          if ((bRam0000000001340cbd & 1) == 0) {
                            native_sub_43273c(&
                                              Method_System_Collections_Generic_List_BaseInvokableCall__Add___12dc5b0
                                              ,uVar2,0);
                            bRam0000000001340cbd = 1;
                          }
                          if (*(long *)(lVar3 + 0x18) != 0) {
                            native_System_Collections_Generic_List_int_____Add_d40c00
                                      (*(long *)(lVar3 + 0x18),uVar2,
                                       _Method_System_Collections_Generic_List_BaseInvokableCall__Add___12dc5b0
                                      );
                            *(undefined1 *)(lVar3 + 0x28) = 1;
                            return;
                          }
                    /* WARNING: Subroutine does not return */
                          native_sub_432810();
                        }
                    /* WARNING: Subroutine does not return */
                        native_sub_432810(0,uVar2,0);
                      }
                    }
                  }
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



/* TMPro.Examples.TMP_TextEventCheck$$OnDisable @ 0x7407f4
 * void TMPro_Examples_TMP_TextEventCheck__OnDisable (TMPro_Examples_TMP_TextEventCheck_o* __this, const MethodInfo* method); */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* TMPro.Examples.TMP_TextEventCheck$$OnDisable
   void TMPro_Examples_TMP_TextEventCheck__OnDisable (TMPro_Examples_TMP_TextEventCheck_o* __this,
   const MethodInfo* method); */

void native_TMPro_Examples_TMP_TextEventCheck__OnDisable_7407f4(long param_1)

{
  ulong uVar1;
  long *plVar2;
  long *plVar3;
  undefined8 uVar4;
  long lVar5;
  long lVar6;
  undefined8 uVar7;
  long lVar8;
  uint uVar9;
  
  if ((bRam000000000133f637 & 1) == 0) {
    native_sub_43273c(&UnityEngine_Object_TypeInfo_12d54e0);
    native_sub_43273c(&Method_TMPro_Examples_TMP_TextEventCheck_OnCharacterSelection___12e6f90);
    native_sub_43273c(&Method_TMPro_Examples_TMP_TextEventCheck_OnLineSelection___12e6f98);
    native_sub_43273c(&Method_TMPro_Examples_TMP_TextEventCheck_OnLinkSelection___12e6fa0);
    native_sub_43273c(&Method_TMPro_Examples_TMP_TextEventCheck_OnSpriteSelection___12e6fa8);
    native_sub_43273c(&Method_TMPro_Examples_TMP_TextEventCheck_OnWordSelection___12e6fb0);
    native_sub_43273c(&Method_UnityEngine_Events_UnityAction_char__int___ctor___12de3e8);
    native_sub_43273c(&UnityEngine_Events_UnityAction_char__int__TypeInfo_12d2f70);
    native_sub_43273c(&Method_UnityEngine_Events_UnityAction_string__string__int___ctor___12de408);
    native_sub_43273c(&Method_UnityEngine_Events_UnityAction_string__int__int___ctor___12de400);
    native_sub_43273c(&UnityEngine_Events_UnityAction_string__int__int__TypeInfo_12d2f78);
    native_sub_43273c(&UnityEngine_Events_UnityAction_string__string__int__TypeInfo_12d2f80);
    native_sub_43273c(&Method_UnityEngine_Events_UnityEvent_char__int__RemoveListener___12de538);
    native_sub_43273c(&
                      Method_UnityEngine_Events_UnityEvent_string__string__int__RemoveListener___12de578
                     );
    native_sub_43273c(&
                      Method_UnityEngine_Events_UnityEvent_string__int__int__RemoveListener___12de558
                     );
    bRam000000000133f637 = 1;
  }
  uVar4 = *(undefined8 *)(param_1 + 0x18);
  if (((*(byte *)(_UnityEngine_Object_TypeInfo_12d54e0 + 0x133) >> 2 & 1) != 0) &&
     (*(int *)(_UnityEngine_Object_TypeInfo_12d54e0 + 0xe0) == 0)) {
    native_sub_4327ec();
  }
  uVar1 = native_UnityEngine_Object__op_Inequality_8d76fc(uVar4,0,0);
  if ((uVar1 & 1) == 0) {
    return;
  }
  if (*(long *)(param_1 + 0x18) != 0) {
    lVar5 = *(long *)(*(long *)(param_1 + 0x18) + 0x18);
    uVar4 = native_sub_432808(_UnityEngine_Events_UnityAction_char__int__TypeInfo_12d2f70);
    native_UnityEngine_Events_UnityAction_char__int____ctor_89c72c
              (uVar4,param_1,
               _Method_TMPro_Examples_TMP_TextEventCheck_OnCharacterSelection___12e6f90,
               _Method_UnityEngine_Events_UnityAction_char__int___ctor___12de3e8);
    if (lVar5 != 0) {
      native_UnityEngine_Events_UnityEvent_char__int___RemoveListener_8a0e58
                (lVar5,uVar4,
                 _Method_UnityEngine_Events_UnityEvent_char__int__RemoveListener___12de538);
      if (*(long *)(param_1 + 0x18) != 0) {
        lVar5 = *(long *)(*(long *)(param_1 + 0x18) + 0x20);
        uVar4 = native_sub_432808(_UnityEngine_Events_UnityAction_char__int__TypeInfo_12d2f70);
        native_UnityEngine_Events_UnityAction_char__int____ctor_89c72c
                  (uVar4,param_1,
                   _Method_TMPro_Examples_TMP_TextEventCheck_OnSpriteSelection___12e6fa8,
                   _Method_UnityEngine_Events_UnityAction_char__int___ctor___12de3e8);
        if (lVar5 != 0) {
          native_UnityEngine_Events_UnityEvent_char__int___RemoveListener_8a0e58
                    (lVar5,uVar4,
                     _Method_UnityEngine_Events_UnityEvent_char__int__RemoveListener___12de538);
          if (*(long *)(param_1 + 0x18) != 0) {
            lVar5 = *(long *)(*(long *)(param_1 + 0x18) + 0x28);
            uVar4 = native_sub_432808(
                                     _UnityEngine_Events_UnityAction_string__int__int__TypeInfo_12d2f78
                                     );
            native_UnityEngine_Events_UnityAction_object__int__int____ctor_89d5ec
                      (uVar4,param_1,
                       _Method_TMPro_Examples_TMP_TextEventCheck_OnWordSelection___12e6fb0,
                       _Method_UnityEngine_Events_UnityAction_string__int__int___ctor___12de400);
            if (lVar5 != 0) {
              native_UnityEngine_Events_UnityEvent_object__int__int___RemoveListener_8a1a38
                        (lVar5,uVar4,
                         _Method_UnityEngine_Events_UnityEvent_string__int__int__RemoveListener___12de558
                        );
              if (*(long *)(param_1 + 0x18) != 0) {
                lVar5 = *(long *)(*(long *)(param_1 + 0x18) + 0x30);
                uVar4 = native_sub_432808(
                                         _UnityEngine_Events_UnityAction_string__int__int__TypeInfo_12d2f78
                                         );
                native_UnityEngine_Events_UnityAction_object__int__int____ctor_89d5ec
                          (uVar4,param_1,
                           _Method_TMPro_Examples_TMP_TextEventCheck_OnLineSelection___12e6f98,
                           _Method_UnityEngine_Events_UnityAction_string__int__int___ctor___12de400)
                ;
                if (lVar5 != 0) {
                  native_UnityEngine_Events_UnityEvent_object__int__int___RemoveListener_8a1a38
                            (lVar5,uVar4,
                             _Method_UnityEngine_Events_UnityEvent_string__int__int__RemoveListener___12de558
                            );
                  if (*(long *)(param_1 + 0x18) != 0) {
                    lVar6 = *(long *)(*(long *)(param_1 + 0x18) + 0x38);
                    lVar5 = native_sub_432808(
                                             _UnityEngine_Events_UnityAction_string__string__int__TypeInfo_12d2f80
                                             );
                    native_UnityEngine_Events_UnityAction_object__object__int____ctor_89dacc
                              (lVar5,param_1,
                               _Method_TMPro_Examples_TMP_TextEventCheck_OnLinkSelection___12e6fa0,
                               _Method_UnityEngine_Events_UnityAction_string__string__int___ctor___12de408
                              );
                    if (lVar6 != 0) {
                      if (lVar5 != 0) {
                        uVar7 = *(undefined8 *)(lVar5 + 0x20);
                        uVar4 = native_System_Delegate__get_Method_a6b39c
                                          (lVar5,0,
                                           _Method_UnityEngine_Events_UnityEvent_string__string__int__RemoveListener___12de578
                                          );
                        if (lVar6 != 0) {
                          lVar5 = *(long *)(lVar6 + 0x10);
                          if (lVar5 == 0) {
                    /* WARNING: Subroutine does not return */
                            native_sub_432810();
                          }
                          if ((bRam0000000001340cbe & 1) == 0) {
                            native_sub_43273c(&
                                              Method_System_Collections_Generic_List_BaseInvokableCall__Add___12dc5b0
                                              ,uVar7,uVar4,0);
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
                            native_sub_43273c(&
                                              System_Collections_Generic_List_BaseInvokableCall__TypeInfo_12d29c8
                                             );
                            native_sub_43273c(&
                                              Method_System_Predicate_BaseInvokableCall___ctor___12ddad0
                                             );
                            native_sub_43273c(&System_Predicate_BaseInvokableCall__TypeInfo_12d2d78)
                            ;
                            bRam0000000001340cbe = 1;
                          }
                          plVar2 = (long *)native_sub_432808(
                                                  _System_Collections_Generic_List_BaseInvokableCall__TypeInfo_12d29c8
                                                  );
                          native_System_Collections_Generic_List_XmlEventCache_XmlEvent______ctor_d3ff44
                                    (plVar2,
                                     _Method_System_Collections_Generic_List_BaseInvokableCall___ctor___12dc5a8
                                    );
                          lVar6 = *(long *)(lVar5 + 0x18);
                          if (lVar6 != 0) {
                            lVar8 = 4;
                            do {
                              uVar9 = (int)lVar8 - 4;
                              if ((int)*(uint *)(lVar6 + 0x18) <= (int)uVar9) {
                                uVar4 = native_sub_432808(
                                                  _System_Predicate_BaseInvokableCall__TypeInfo_12d2d78
                                                  );
                                if (plVar2 != (long *)0x0) {
                                  native_System_Predicate_BaseInvokableCall____ctor_ac31d4
                                            (uVar4,plVar2,*(undefined8 *)(*plVar2 + 0x210),
                                             _Method_System_Predicate_BaseInvokableCall___ctor___12ddad0
                                            );
                                  native_System_Collections_Generic_List_BaseInvokableCall___RemoveAll_d420e0
                                            (lVar6,uVar4,
                                             _Method_System_Collections_Generic_List_BaseInvokableCall__RemoveAll___12dc5c8
                                            );
                                  *(undefined1 *)(lVar5 + 0x28) = 1;
                                  return;
                                }
                                break;
                              }
                              if (*(uint *)(lVar6 + 0x18) <= uVar9) {
                                native_System_ThrowHelper__ThrowArgumentOutOfRangeException_9fe0f4
                                          (0);
                              }
                              plVar3 = *(long **)(*(long *)(lVar6 + 0x10) + lVar8 * 8);
                              if (plVar3 == (long *)0x0) break;
                              uVar1 = (**(code **)(*plVar3 + 0x188))
                                                (plVar3,uVar7,uVar4,*(undefined8 *)(*plVar3 + 400));
                              if ((uVar1 & 1) != 0) {
                                lVar6 = *(long *)(lVar5 + 0x18);
                                if (lVar6 == 0) break;
                                if (*(uint *)(lVar6 + 0x18) <= uVar9) {
                                  native_System_ThrowHelper__ThrowArgumentOutOfRangeException_9fe0f4
                                            (0);
                                }
                                if (plVar2 == (long *)0x0) break;
                                native_System_Collections_Generic_List_int_____Add_d40c00
                                          (plVar2,*(undefined8 *)
                                                   (*(long *)(lVar6 + 0x10) + lVar8 * 8),
                                           _Method_System_Collections_Generic_List_BaseInvokableCall__Add___12dc5b0
                                          );
                              }
                              lVar6 = *(long *)(lVar5 + 0x18);
                              lVar8 = lVar8 + 1;
                            } while (lVar6 != 0);
                          }
                    /* WARNING: Subroutine does not return */
                          native_sub_432810();
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
    }
  }
                    /* WARNING: Subroutine does not return */
  native_sub_432810();
}



/* TMPro.Examples.TMP_TextEventCheck$$OnCharacterSelection @ 0x740ad0
 * void TMPro_Examples_TMP_TextEventCheck__OnCharacterSelection (TMPro_Examples_TMP_TextEventCheck_o* __this, uint16_t c, int32_t index, const MethodInfo* method); */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* TMPro.Examples.TMP_TextEventCheck$$OnCharacterSelection
   void TMPro_Examples_TMP_TextEventCheck__OnCharacterSelection
   (TMPro_Examples_TMP_TextEventCheck_o* __this, uint16_t c, int32_t index, const MethodInfo*
   method); */

void native_TMPro_Examples_TMP_TextEventCheck__OnCharacterSelection_740ad0
               (undefined8 param_1,undefined2 param_2,undefined4 param_3)

{
  long *plVar1;
  long lVar2;
  long lVar3;
  undefined8 uVar4;
  undefined4 uStack_28;
  undefined2 auStack_24 [2];
  
  uStack_28 = param_3;
  auStack_24[0] = param_2;
  if ((bRam000000000133f638 & 1) == 0) {
    native_sub_43273c(&UnityEngine_Debug_TypeInfo_12d4338);
    native_sub_43273c(&string___TypeInfo_12d3398);
    native_sub_43273c(&StringLiteral__has_been_selected__12eae70);
    native_sub_43273c(&StringLiteral_Character___12ed070);
    native_sub_43273c(&StringLiteral___at_Index___12f3438);
    bRam000000000133f638 = 1;
  }
  plVar1 = (long *)native_sub_432750(_string___TypeInfo_12d3398,5);
  if (plVar1 == (long *)0x0) {
                    /* WARNING: Subroutine does not return */
    native_sub_432810();
  }
  if (_StringLiteral_Character___12ed070 == 0) {
    lVar3 = 0;
  }
  else {
    lVar2 = native_sub_4327f8(_StringLiteral_Character___12ed070,*(undefined8 *)(*plVar1 + 0x40));
    lVar3 = _StringLiteral_Character___12ed070;
    if (lVar2 == 0) goto LAB_00740d00;
  }
  if ((int)plVar1[3] != 0) {
    plVar1[4] = lVar3;
    native_sub_4326e0();
    lVar3 = native_System_Char__ToString_793ee0(auStack_24,0);
    if ((lVar3 != 0) &&
       (lVar2 = native_sub_4327f8(lVar3,*(undefined8 *)(*plVar1 + 0x40)), lVar2 == 0)) {
LAB_00740d00:
      uVar4 = native_sub_432830();
                    /* WARNING: Subroutine does not return */
      native_sub_4327dc(uVar4,0);
    }
    if (1 < *(uint *)(plVar1 + 3)) {
      plVar1[5] = lVar3;
      native_sub_4326e0(plVar1 + 5,lVar3);
      if (_StringLiteral___at_Index___12f3438 == 0) {
        lVar3 = 0;
      }
      else {
        lVar2 = native_sub_4327f8(_StringLiteral___at_Index___12f3438,
                                  *(undefined8 *)(*plVar1 + 0x40));
        lVar3 = _StringLiteral___at_Index___12f3438;
        if (lVar2 == 0) goto LAB_00740d00;
      }
      if (2 < *(uint *)(plVar1 + 3)) {
        plVar1[6] = lVar3;
        native_sub_4326e0();
        lVar3 = native_System_Int32__ToString_83c60c(&uStack_28,0);
        if ((lVar3 != 0) &&
           (lVar2 = native_sub_4327f8(lVar3,*(undefined8 *)(*plVar1 + 0x40)), lVar2 == 0))
        goto LAB_00740d00;
        if (3 < *(uint *)(plVar1 + 3)) {
          plVar1[7] = lVar3;
          native_sub_4326e0(plVar1 + 7,lVar3);
          if (_StringLiteral__has_been_selected__12eae70 == 0) {
            lVar3 = 0;
          }
          else {
            lVar2 = native_sub_4327f8(_StringLiteral__has_been_selected__12eae70,
                                      *(undefined8 *)(*plVar1 + 0x40));
            lVar3 = _StringLiteral__has_been_selected__12eae70;
            if (lVar2 == 0) goto LAB_00740d00;
          }
          if (4 < *(uint *)(plVar1 + 3)) {
            plVar1[8] = lVar3;
            native_sub_4326e0();
            uVar4 = native_System_String__Concat_b0ddf4(plVar1,0);
            if (((*(byte *)(_UnityEngine_Debug_TypeInfo_12d4338 + 0x133) >> 2 & 1) != 0) &&
               (*(int *)(_UnityEngine_Debug_TypeInfo_12d4338 + 0xe0) == 0)) {
              native_sub_4327ec(_UnityEngine_Debug_TypeInfo_12d4338);
            }
            native_UnityEngine_Debug__Log_8dc36c(uVar4,0);
            return;
          }
        }
      }
    }
  }
  uVar4 = native_sub_43283c();
                    /* WARNING: Subroutine does not return */
  native_sub_4327dc(uVar4,0);
}



/* TMPro.Examples.TMP_TextEventCheck$$OnSpriteSelection @ 0x740d10
 * void TMPro_Examples_TMP_TextEventCheck__OnSpriteSelection (TMPro_Examples_TMP_TextEventCheck_o* __this, uint16_t c, int32_t index, const MethodInfo* method); */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* TMPro.Examples.TMP_TextEventCheck$$OnSpriteSelection
   void TMPro_Examples_TMP_TextEventCheck__OnSpriteSelection (TMPro_Examples_TMP_TextEventCheck_o*
   __this, uint16_t c, int32_t index, const MethodInfo* method); */

void native_TMPro_Examples_TMP_TextEventCheck__OnSpriteSelection_740d10
               (undefined8 param_1,undefined2 param_2,undefined4 param_3)

{
  long *plVar1;
  long lVar2;
  long lVar3;
  undefined8 uVar4;
  undefined4 uStack_28;
  undefined2 auStack_24 [2];
  
  uStack_28 = param_3;
  auStack_24[0] = param_2;
  if ((bRam000000000133f639 & 1) == 0) {
    native_sub_43273c(&UnityEngine_Debug_TypeInfo_12d4338);
    native_sub_43273c(&string___TypeInfo_12d3398);
    native_sub_43273c(&StringLiteral_Sprite___12f0fe8);
    native_sub_43273c(&StringLiteral__has_been_selected__12eae70);
    native_sub_43273c(&StringLiteral___at_Index___12f3438);
    bRam000000000133f639 = 1;
  }
  plVar1 = (long *)native_sub_432750(_string___TypeInfo_12d3398,5);
  if (plVar1 == (long *)0x0) {
                    /* WARNING: Subroutine does not return */
    native_sub_432810();
  }
  if (_StringLiteral_Sprite___12f0fe8 == 0) {
    lVar3 = 0;
  }
  else {
    lVar2 = native_sub_4327f8(_StringLiteral_Sprite___12f0fe8,*(undefined8 *)(*plVar1 + 0x40));
    lVar3 = _StringLiteral_Sprite___12f0fe8;
    if (lVar2 == 0) goto LAB_00740f40;
  }
  if ((int)plVar1[3] != 0) {
    plVar1[4] = lVar3;
    native_sub_4326e0();
    lVar3 = native_System_Char__ToString_793ee0(auStack_24,0);
    if ((lVar3 != 0) &&
       (lVar2 = native_sub_4327f8(lVar3,*(undefined8 *)(*plVar1 + 0x40)), lVar2 == 0)) {
LAB_00740f40:
      uVar4 = native_sub_432830();
                    /* WARNING: Subroutine does not return */
      native_sub_4327dc(uVar4,0);
    }
    if (1 < *(uint *)(plVar1 + 3)) {
      plVar1[5] = lVar3;
      native_sub_4326e0(plVar1 + 5,lVar3);
      if (_StringLiteral___at_Index___12f3438 == 0) {
        lVar3 = 0;
      }
      else {
        lVar2 = native_sub_4327f8(_StringLiteral___at_Index___12f3438,
                                  *(undefined8 *)(*plVar1 + 0x40));
        lVar3 = _StringLiteral___at_Index___12f3438;
        if (lVar2 == 0) goto LAB_00740f40;
      }
      if (2 < *(uint *)(plVar1 + 3)) {
        plVar1[6] = lVar3;
        native_sub_4326e0();
        lVar3 = native_System_Int32__ToString_83c60c(&uStack_28,0);
        if ((lVar3 != 0) &&
           (lVar2 = native_sub_4327f8(lVar3,*(undefined8 *)(*plVar1 + 0x40)), lVar2 == 0))
        goto LAB_00740f40;
        if (3 < *(uint *)(plVar1 + 3)) {
          plVar1[7] = lVar3;
          native_sub_4326e0(plVar1 + 7,lVar3);
          if (_StringLiteral__has_been_selected__12eae70 == 0) {
            lVar3 = 0;
          }
          else {
            lVar2 = native_sub_4327f8(_StringLiteral__has_been_selected__12eae70,
                                      *(undefined8 *)(*plVar1 + 0x40));
            lVar3 = _StringLiteral__has_been_selected__12eae70;
            if (lVar2 == 0) goto LAB_00740f40;
          }
          if (4 < *(uint *)(plVar1 + 3)) {
            plVar1[8] = lVar3;
            native_sub_4326e0();
            uVar4 = native_System_String__Concat_b0ddf4(plVar1,0);
            if (((*(byte *)(_UnityEngine_Debug_TypeInfo_12d4338 + 0x133) >> 2 & 1) != 0) &&
               (*(int *)(_UnityEngine_Debug_TypeInfo_12d4338 + 0xe0) == 0)) {
              native_sub_4327ec(_UnityEngine_Debug_TypeInfo_12d4338);
            }
            native_UnityEngine_Debug__Log_8dc36c(uVar4,0);
            return;
          }
        }
      }
    }
  }
  uVar4 = native_sub_43283c();
                    /* WARNING: Subroutine does not return */
  native_sub_4327dc(uVar4,0);
}



/* TMPro.Examples.TMP_TextEventCheck$$OnWordSelection @ 0x740f50
 * void TMPro_Examples_TMP_TextEventCheck__OnWordSelection (TMPro_Examples_TMP_TextEventCheck_o* __this, System_String_o* word, int32_t firstCharacterIndex, int32_t length, const MethodInfo* method); */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* TMPro.Examples.TMP_TextEventCheck$$OnWordSelection
   void TMPro_Examples_TMP_TextEventCheck__OnWordSelection (TMPro_Examples_TMP_TextEventCheck_o*
   __this, System_String_o* word, int32_t firstCharacterIndex, int32_t length, const MethodInfo*
   method); */

void native_TMPro_Examples_TMP_TextEventCheck__OnWordSelection_740f50
               (undefined8 param_1,long param_2,undefined4 param_3,undefined4 param_4)

{
  long *plVar1;
  long lVar2;
  long lVar3;
  undefined8 uVar4;
  undefined4 uStack_28;
  undefined4 uStack_24;
  
  uStack_28 = param_4;
  uStack_24 = param_3;
  if ((bRam000000000133f63a & 1) == 0) {
    native_sub_43273c(&UnityEngine_Debug_TypeInfo_12d4338);
    native_sub_43273c(&string___TypeInfo_12d3398);
    native_sub_43273c(&StringLiteral___with_first_character_index_of__12f3480);
    native_sub_43273c(&StringLiteral__has_been_selected__12eae70);
    native_sub_43273c(&StringLiteral__and_length_of__12eadb8);
    native_sub_43273c(&StringLiteral_Word___12f3070);
    bRam000000000133f63a = 1;
  }
  plVar1 = (long *)native_sub_432750(_string___TypeInfo_12d3398,7);
  if (plVar1 == (long *)0x0) {
                    /* WARNING: Subroutine does not return */
    native_sub_432810();
  }
  if (_StringLiteral_Word___12f3070 == 0) {
    lVar3 = 0;
  }
  else {
    lVar2 = native_sub_4327f8(_StringLiteral_Word___12f3070,*(undefined8 *)(*plVar1 + 0x40));
    lVar3 = _StringLiteral_Word___12f3070;
    if (lVar2 == 0) goto LAB_00741204;
  }
  if ((int)plVar1[3] != 0) {
    plVar1[4] = lVar3;
    native_sub_4326e0();
    if ((param_2 != 0) &&
       (lVar3 = native_sub_4327f8(param_2,*(undefined8 *)(*plVar1 + 0x40)), lVar3 == 0)) {
LAB_00741204:
      uVar4 = native_sub_432830();
                    /* WARNING: Subroutine does not return */
      native_sub_4327dc(uVar4,0);
    }
    if (1 < *(uint *)(plVar1 + 3)) {
      plVar1[5] = param_2;
      native_sub_4326e0(plVar1 + 5,param_2);
      if (_StringLiteral___with_first_character_index_of__12f3480 == 0) {
        lVar3 = 0;
      }
      else {
        lVar2 = native_sub_4327f8(_StringLiteral___with_first_character_index_of__12f3480,
                                  *(undefined8 *)(*plVar1 + 0x40));
        lVar3 = _StringLiteral___with_first_character_index_of__12f3480;
        if (lVar2 == 0) goto LAB_00741204;
      }
      if (2 < *(uint *)(plVar1 + 3)) {
        plVar1[6] = lVar3;
        native_sub_4326e0();
        lVar3 = native_System_Int32__ToString_83c60c(&uStack_24,0);
        if ((lVar3 != 0) &&
           (lVar2 = native_sub_4327f8(lVar3,*(undefined8 *)(*plVar1 + 0x40)), lVar2 == 0))
        goto LAB_00741204;
        if (3 < *(uint *)(plVar1 + 3)) {
          plVar1[7] = lVar3;
          native_sub_4326e0(plVar1 + 7,lVar3);
          if (_StringLiteral__and_length_of__12eadb8 == 0) {
            lVar3 = 0;
          }
          else {
            lVar2 = native_sub_4327f8(_StringLiteral__and_length_of__12eadb8,
                                      *(undefined8 *)(*plVar1 + 0x40));
            lVar3 = _StringLiteral__and_length_of__12eadb8;
            if (lVar2 == 0) goto LAB_00741204;
          }
          if (4 < *(uint *)(plVar1 + 3)) {
            plVar1[8] = lVar3;
            native_sub_4326e0();
            lVar3 = native_System_Int32__ToString_83c60c(&uStack_28,0);
            if ((lVar3 != 0) &&
               (lVar2 = native_sub_4327f8(lVar3,*(undefined8 *)(*plVar1 + 0x40)), lVar2 == 0))
            goto LAB_00741204;
            if (5 < *(uint *)(plVar1 + 3)) {
              plVar1[9] = lVar3;
              native_sub_4326e0(plVar1 + 9,lVar3);
              if (_StringLiteral__has_been_selected__12eae70 == 0) {
                lVar3 = 0;
              }
              else {
                lVar2 = native_sub_4327f8(_StringLiteral__has_been_selected__12eae70,
                                          *(undefined8 *)(*plVar1 + 0x40));
                lVar3 = _StringLiteral__has_been_selected__12eae70;
                if (lVar2 == 0) goto LAB_00741204;
              }
              if (6 < *(uint *)(plVar1 + 3)) {
                plVar1[10] = lVar3;
                native_sub_4326e0();
                uVar4 = native_System_String__Concat_b0ddf4(plVar1,0);
                if (((*(byte *)(_UnityEngine_Debug_TypeInfo_12d4338 + 0x133) >> 2 & 1) != 0) &&
                   (*(int *)(_UnityEngine_Debug_TypeInfo_12d4338 + 0xe0) == 0)) {
                  native_sub_4327ec(_UnityEngine_Debug_TypeInfo_12d4338);
                }
                native_UnityEngine_Debug__Log_8dc36c(uVar4,0);
                return;
              }
            }
          }
        }
      }
    }
  }
  uVar4 = native_sub_43283c();
                    /* WARNING: Subroutine does not return */
  native_sub_4327dc(uVar4,0);
}



/* TMPro.Examples.TMP_TextEventCheck$$OnLineSelection @ 0x741214
 * void TMPro_Examples_TMP_TextEventCheck__OnLineSelection (TMPro_Examples_TMP_TextEventCheck_o* __this, System_String_o* lineText, int32_t firstCharacterIndex, int32_t length, const MethodInfo* method); */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* TMPro.Examples.TMP_TextEventCheck$$OnLineSelection
   void TMPro_Examples_TMP_TextEventCheck__OnLineSelection (TMPro_Examples_TMP_TextEventCheck_o*
   __this, System_String_o* lineText, int32_t firstCharacterIndex, int32_t length, const MethodInfo*
   method); */

void native_TMPro_Examples_TMP_TextEventCheck__OnLineSelection_741214
               (undefined8 param_1,long param_2,undefined4 param_3,undefined4 param_4)

{
  long *plVar1;
  long lVar2;
  long lVar3;
  undefined8 uVar4;
  undefined4 uStack_28;
  undefined4 uStack_24;
  
  uStack_28 = param_4;
  uStack_24 = param_3;
  if ((bRam000000000133f63b & 1) == 0) {
    native_sub_43273c(&UnityEngine_Debug_TypeInfo_12d4338);
    native_sub_43273c(&string___TypeInfo_12d3398);
    native_sub_43273c(&StringLiteral___with_first_character_index_of__12f3480);
    native_sub_43273c(&StringLiteral__has_been_selected__12eae70);
    native_sub_43273c(&StringLiteral__and_length_of__12eadb8);
    native_sub_43273c(&StringLiteral_Line___12ef598);
    bRam000000000133f63b = 1;
  }
  plVar1 = (long *)native_sub_432750(_string___TypeInfo_12d3398,7);
  if (plVar1 == (long *)0x0) {
                    /* WARNING: Subroutine does not return */
    native_sub_432810();
  }
  if (_StringLiteral_Line___12ef598 == 0) {
    lVar3 = 0;
  }
  else {
    lVar2 = native_sub_4327f8(_StringLiteral_Line___12ef598,*(undefined8 *)(*plVar1 + 0x40));
    lVar3 = _StringLiteral_Line___12ef598;
    if (lVar2 == 0) goto LAB_007414c8;
  }
  if ((int)plVar1[3] != 0) {
    plVar1[4] = lVar3;
    native_sub_4326e0();
    if ((param_2 != 0) &&
       (lVar3 = native_sub_4327f8(param_2,*(undefined8 *)(*plVar1 + 0x40)), lVar3 == 0)) {
LAB_007414c8:
      uVar4 = native_sub_432830();
                    /* WARNING: Subroutine does not return */
      native_sub_4327dc(uVar4,0);
    }
    if (1 < *(uint *)(plVar1 + 3)) {
      plVar1[5] = param_2;
      native_sub_4326e0(plVar1 + 5,param_2);
      if (_StringLiteral___with_first_character_index_of__12f3480 == 0) {
        lVar3 = 0;
      }
      else {
        lVar2 = native_sub_4327f8(_StringLiteral___with_first_character_index_of__12f3480,
                                  *(undefined8 *)(*plVar1 + 0x40));
        lVar3 = _StringLiteral___with_first_character_index_of__12f3480;
        if (lVar2 == 0) goto LAB_007414c8;
      }
      if (2 < *(uint *)(plVar1 + 3)) {
        plVar1[6] = lVar3;
        native_sub_4326e0();
        lVar3 = native_System_Int32__ToString_83c60c(&uStack_24,0);
        if ((lVar3 != 0) &&
           (lVar2 = native_sub_4327f8(lVar3,*(undefined8 *)(*plVar1 + 0x40)), lVar2 == 0))
        goto LAB_007414c8;
        if (3 < *(uint *)(plVar1 + 3)) {
          plVar1[7] = lVar3;
          native_sub_4326e0(plVar1 + 7,lVar3);
          if (_StringLiteral__and_length_of__12eadb8 == 0) {
            lVar3 = 0;
          }
          else {
            lVar2 = native_sub_4327f8(_StringLiteral__and_length_of__12eadb8,
                                      *(undefined8 *)(*plVar1 + 0x40));
            lVar3 = _StringLiteral__and_length_of__12eadb8;
            if (lVar2 == 0) goto LAB_007414c8;
          }
          if (4 < *(uint *)(plVar1 + 3)) {
            plVar1[8] = lVar3;
            native_sub_4326e0();
            lVar3 = native_System_Int32__ToString_83c60c(&uStack_28,0);
            if ((lVar3 != 0) &&
               (lVar2 = native_sub_4327f8(lVar3,*(undefined8 *)(*plVar1 + 0x40)), lVar2 == 0))
            goto LAB_007414c8;
            if (5 < *(uint *)(plVar1 + 3)) {
              plVar1[9] = lVar3;
              native_sub_4326e0(plVar1 + 9,lVar3);
              if (_StringLiteral__has_been_selected__12eae70 == 0) {
                lVar3 = 0;
              }
              else {
                lVar2 = native_sub_4327f8(_StringLiteral__has_been_selected__12eae70,
                                          *(undefined8 *)(*plVar1 + 0x40));
                lVar3 = _StringLiteral__has_been_selected__12eae70;
                if (lVar2 == 0) goto LAB_007414c8;
              }
              if (6 < *(uint *)(plVar1 + 3)) {
                plVar1[10] = lVar3;
                native_sub_4326e0();
                uVar4 = native_System_String__Concat_b0ddf4(plVar1,0);
                if (((*(byte *)(_UnityEngine_Debug_TypeInfo_12d4338 + 0x133) >> 2 & 1) != 0) &&
                   (*(int *)(_UnityEngine_Debug_TypeInfo_12d4338 + 0xe0) == 0)) {
                  native_sub_4327ec(_UnityEngine_Debug_TypeInfo_12d4338);
                }
                native_UnityEngine_Debug__Log_8dc36c(uVar4,0);
                return;
              }
            }
          }
        }
      }
    }
  }
  uVar4 = native_sub_43283c();
                    /* WARNING: Subroutine does not return */
  native_sub_4327dc(uVar4,0);
}



/* TMPro.Examples.TMP_TextEventCheck$$OnLinkSelection @ 0x7414d8
 * void TMPro_Examples_TMP_TextEventCheck__OnLinkSelection (TMPro_Examples_TMP_TextEventCheck_o* __this, System_String_o* linkID, System_String_o* linkText, int32_t linkIndex, const MethodInfo* method); */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* TMPro.Examples.TMP_TextEventCheck$$OnLinkSelection
   void TMPro_Examples_TMP_TextEventCheck__OnLinkSelection (TMPro_Examples_TMP_TextEventCheck_o*
   __this, System_String_o* linkID, System_String_o* linkText, int32_t linkIndex, const MethodInfo*
   method); */

void native_TMPro_Examples_TMP_TextEventCheck__OnLinkSelection_7414d8
               (long param_1,long param_2,long param_3,undefined4 param_4)

{
  ulong uVar1;
  long *plVar2;
  long lVar3;
  long lVar4;
  undefined8 uVar5;
  undefined4 uStack_34;
  
  uStack_34 = param_4;
  if ((bRam000000000133f63c & 1) == 0) {
    native_sub_43273c(&UnityEngine_Debug_TypeInfo_12d4338);
    native_sub_43273c(&UnityEngine_Object_TypeInfo_12d54e0);
    native_sub_43273c(&string___TypeInfo_12d3398);
    native_sub_43273c(&StringLiteral___and_Text___12f3430);
    native_sub_43273c(&StringLiteral_Link_Index___12ef5b8);
    native_sub_43273c(&StringLiteral___has_been_selected__12eafa8);
    native_sub_43273c(&StringLiteral__with_ID___12eaf40);
    bRam000000000133f63c = 1;
  }
  uVar5 = *(undefined8 *)(param_1 + 0x20);
  if (((*(byte *)(_UnityEngine_Object_TypeInfo_12d54e0 + 0x133) >> 2 & 1) != 0) &&
     (*(int *)(_UnityEngine_Object_TypeInfo_12d54e0 + 0xe0) == 0)) {
    native_sub_4327ec();
  }
  uVar1 = native_UnityEngine_Object__op_Inequality_8d76fc(uVar5,0,0);
  if ((((uVar1 & 1) != 0) &&
      (((*(long *)(param_1 + 0x20) == 0 ||
        (lVar4 = *(long *)(*(long *)(param_1 + 0x20) + 0x360), lVar4 == 0)) ||
       (*(long *)(lVar4 + 0x48) == 0)))) ||
     (plVar2 = (long *)native_sub_432750(_string___TypeInfo_12d3398,7), plVar2 == (long *)0x0)) {
                    /* WARNING: Subroutine does not return */
    native_sub_432810();
  }
  if (_StringLiteral_Link_Index___12ef5b8 == 0) {
    lVar4 = 0;
  }
  else {
    lVar3 = native_sub_4327f8(_StringLiteral_Link_Index___12ef5b8,*(undefined8 *)(*plVar2 + 0x40));
    lVar4 = _StringLiteral_Link_Index___12ef5b8;
    if (lVar3 == 0) goto LAB_007417e8;
  }
  if ((int)plVar2[3] != 0) {
    plVar2[4] = lVar4;
    native_sub_4326e0();
    lVar4 = native_System_Int32__ToString_83c60c(&uStack_34,0);
    if ((lVar4 != 0) &&
       (lVar3 = native_sub_4327f8(lVar4,*(undefined8 *)(*plVar2 + 0x40)), lVar3 == 0)) {
LAB_007417e8:
      uVar5 = native_sub_432830();
                    /* WARNING: Subroutine does not return */
      native_sub_4327dc(uVar5,0);
    }
    if (1 < *(uint *)(plVar2 + 3)) {
      plVar2[5] = lVar4;
      native_sub_4326e0(plVar2 + 5,lVar4);
      if (_StringLiteral__with_ID___12eaf40 == 0) {
        lVar4 = 0;
      }
      else {
        lVar3 = native_sub_4327f8(_StringLiteral__with_ID___12eaf40,*(undefined8 *)(*plVar2 + 0x40))
        ;
        lVar4 = _StringLiteral__with_ID___12eaf40;
        if (lVar3 == 0) goto LAB_007417e8;
      }
      if (2 < *(uint *)(plVar2 + 3)) {
        plVar2[6] = lVar4;
        native_sub_4326e0();
        if ((param_2 != 0) &&
           (lVar4 = native_sub_4327f8(param_2,*(undefined8 *)(*plVar2 + 0x40)), lVar4 == 0))
        goto LAB_007417e8;
        if (3 < *(uint *)(plVar2 + 3)) {
          plVar2[7] = param_2;
          native_sub_4326e0(plVar2 + 7,param_2);
          if (_StringLiteral___and_Text___12f3430 == 0) {
            lVar4 = 0;
          }
          else {
            lVar3 = native_sub_4327f8(_StringLiteral___and_Text___12f3430,
                                      *(undefined8 *)(*plVar2 + 0x40));
            lVar4 = _StringLiteral___and_Text___12f3430;
            if (lVar3 == 0) goto LAB_007417e8;
          }
          if (4 < *(uint *)(plVar2 + 3)) {
            plVar2[8] = lVar4;
            native_sub_4326e0();
            if ((param_3 != 0) &&
               (lVar4 = native_sub_4327f8(param_3,*(undefined8 *)(*plVar2 + 0x40)), lVar4 == 0))
            goto LAB_007417e8;
            if (5 < *(uint *)(plVar2 + 3)) {
              plVar2[9] = param_3;
              native_sub_4326e0(plVar2 + 9,param_3);
              if (_StringLiteral___has_been_selected__12eafa8 == 0) {
                lVar4 = 0;
              }
              else {
                lVar3 = native_sub_4327f8(_StringLiteral___has_been_selected__12eafa8,
                                          *(undefined8 *)(*plVar2 + 0x40));
                lVar4 = _StringLiteral___has_been_selected__12eafa8;
                if (lVar3 == 0) goto LAB_007417e8;
              }
              if (6 < *(uint *)(plVar2 + 3)) {
                plVar2[10] = lVar4;
                native_sub_4326e0();
                uVar5 = native_System_String__Concat_b0ddf4(plVar2,0);
                if (((*(byte *)(_UnityEngine_Debug_TypeInfo_12d4338 + 0x133) >> 2 & 1) != 0) &&
                   (*(int *)(_UnityEngine_Debug_TypeInfo_12d4338 + 0xe0) == 0)) {
                  native_sub_4327ec(_UnityEngine_Debug_TypeInfo_12d4338);
                }
                native_UnityEngine_Debug__Log_8dc36c(uVar5,0);
                return;
              }
            }
          }
        }
      }
    }
  }
  uVar5 = native_sub_43283c();
                    /* WARNING: Subroutine does not return */
  native_sub_4327dc(uVar5,0);
}



/* TMPro.Examples.TMP_TextEventCheck$$.ctor @ 0x7417f8
 * void TMPro_Examples_TMP_TextEventCheck___ctor (TMPro_Examples_TMP_TextEventCheck_o* __this, const MethodInfo* method); */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* TMPro.Examples.TMP_TextEventCheck$$.ctor
   void TMPro_Examples_TMP_TextEventCheck___ctor (TMPro_Examples_TMP_TextEventCheck_o* __this, const
   MethodInfo* method); */

undefined1  [16] native_TMPro_Examples_TMP_TextEventCheck___ctor_7417f8(ulong param_1)

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


