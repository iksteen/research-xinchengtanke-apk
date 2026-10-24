/* ARM64 IL2CPP native pseudocode from Ghidra.
 * Recovered implementation, not original C# source.
 * Function boundaries follow the IL2CPP method address table. */


/* MG_BlocksEngine2.DragDrop.BE2_DragDropManager.<C_HandleDropEvents>d__39$$.ctor @ 0x546e88
 * void MG_BlocksEngine2_DragDrop_BE2_DragDropManager__C_HandleDropEvents_d__39___ctor (MG_BlocksEngine2_DragDrop_BE2_DragDropManager__C_HandleDropEvents_d__39_o* __this, int32_t __1__state, const MethodInfo* method); */

/* MG_BlocksEngine2.DragDrop.BE2_DragDropManager.<C_HandleDropEvents>d__39$$.ctor
   void MG_BlocksEngine2_DragDrop_BE2_DragDropManager__C_HandleDropEvents_d__39___ctor
   (MG_BlocksEngine2_DragDrop_BE2_DragDropManager__C_HandleDropEvents_d__39_o* __this, int32_t
   __1__state, const MethodInfo* method); */

void native_MG_BlocksEngine2_DragDrop_BE2_DragDropManager__C_HandleDropEvents_d__39___ctor_546e88
               (long param_1,undefined4 param_2)

{
  native_System_Object___ctor_ad2798(param_1,0);
  *(undefined4 *)(param_1 + 0x10) = param_2;
  return;
}



/* MG_BlocksEngine2.DragDrop.BE2_DragDropManager.<C_HandleDropEvents>d__39$$System.IDisposable.Dispose @ 0x546eb4
 * void MG_BlocksEngine2_DragDrop_BE2_DragDropManager__C_HandleDropEvents_d__39__System_IDisposable_Dispose (MG_BlocksEngine2_DragDrop_BE2_DragDropManager__C_HandleDropEvents_d__39_o* __this, const MethodInfo* method); */

/* MG_BlocksEngine2.DragDrop.BE2_DragDropManager.<C_HandleDropEvents>d__39$$System.IDisposable.Dispose
   void 
   MG_BlocksEngine2_DragDrop_BE2_DragDropManager__C_HandleDropEvents_d__39__System_IDisposable_Dispose
   (MG_BlocksEngine2_DragDrop_BE2_DragDropManager__C_HandleDropEvents_d__39_o* __this, const
   MethodInfo* method); */

void native_MG_BlocksEngine2_DragDrop_BE2_DragDropManager__C_HandleDropEvents_d__39__System_IDisposable_Dispose_546eb4
               (void)

{
  return;
}



/* MG_BlocksEngine2.DragDrop.BE2_DragDropManager.<C_HandleDropEvents>d__39$$MoveNext @ 0x546eb8
 * bool MG_BlocksEngine2_DragDrop_BE2_DragDropManager__C_HandleDropEvents_d__39__MoveNext (MG_BlocksEngine2_DragDrop_BE2_DragDropManager__C_HandleDropEvents_d__39_o* __this, const MethodInfo* method); */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* MG_BlocksEngine2.DragDrop.BE2_DragDropManager.<C_HandleDropEvents>d__39$$MoveNext
   bool MG_BlocksEngine2_DragDrop_BE2_DragDropManager__C_HandleDropEvents_d__39__MoveNext
   (MG_BlocksEngine2_DragDrop_BE2_DragDropManager__C_HandleDropEvents_d__39_o* __this, const
   MethodInfo* method); */

undefined8
native_MG_BlocksEngine2_DragDrop_BE2_DragDropManager__C_HandleDropEvents_d__39__MoveNext_546eb8
          (long param_1)

{
  undefined8 uVar1;
  long lVar2;
  ulong uVar3;
  undefined8 *puVar4;
  long lVar5;
  undefined8 uVar6;
  int *piVar7;
  long *plVar8;
  long *plVar9;
  
  if ((bRam000000000133e99a & 1) == 0) {
    native_sub_43273c(&
                      Method_UnityEngine_Component_GetComponentInParent_I_BE2_BlockSection____12e2d48
                     );
    native_sub_43273c(&
                      Method_UnityEngine_Component_GetComponentInParent_I_BE2_BlocksStack____12e2d50
                     );
    native_sub_43273c(&Method_UnityEngine_Component_GetComponent_I_BE2_BlockSectionHeader____12e2a28
                     );
    native_sub_43273c(&MG_BlocksEngine2_Block_I_BE2_Block_TypeInfo_12d4dd8);
    native_sub_43273c(&MG_BlocksEngine2_Block_Instruction_I_BE2_InstructionBase_TypeInfo_12d4e30);
    native_sub_43273c(&MG_BlocksEngine2_Block_Instruction_I_BE2_Instruction_TypeInfo_12d4e28);
    native_sub_43273c(&UnityEngine_Object_TypeInfo_12d54e0);
    native_sub_43273c(&UnityEngine_WaitForEndOfFrame_TypeInfo_12d6738);
    bRam000000000133e99a = 1;
  }
  if (*(int *)(param_1 + 0x10) != 1) {
    if (*(int *)(param_1 + 0x10) != 0) {
      return 0;
    }
    *(undefined4 *)(param_1 + 0x10) = 0xffffffff;
    uVar1 = native_sub_432808(_UnityEngine_WaitForEndOfFrame_TypeInfo_12d6738);
    native_UnityEngine_WaitForEndOfFrame___ctor_7775b8(uVar1,0);
    *(undefined8 *)(param_1 + 0x18) = uVar1;
    native_sub_4326e0(param_1 + 0x18,uVar1);
    *(undefined4 *)(param_1 + 0x10) = 1;
    return 1;
  }
  *(undefined4 *)(param_1 + 0x10) = 0xffffffff;
  lVar2 = native_MG_BlocksEngine2_Core_BE2_MainEventsManager__get_Instance_6001fc(0);
  plVar9 = *(long **)(param_1 + 0x20);
  if (((*(byte *)(_UnityEngine_Object_TypeInfo_12d54e0 + 0x133) >> 2 & 1) == 0) ||
     (*(int *)(_UnityEngine_Object_TypeInfo_12d54e0 + 0xe0) != 0)) {
    if (plVar9 != (long *)0x0) goto LAB_00546fc8;
LAB_00546fdc:
    plVar9 = (long *)0x0;
  }
  else {
    native_sub_4327ec(_UnityEngine_Object_TypeInfo_12d54e0);
    if (plVar9 == (long *)0x0) goto LAB_00546fdc;
LAB_00546fc8:
    if (*(byte *)(*plVar9 + 300) < *(byte *)(_UnityEngine_Object_TypeInfo_12d54e0 + 300))
    goto LAB_00546fdc;
    if (*(long *)(*(long *)(*plVar9 + 200) +
                  (ulong)*(byte *)(_UnityEngine_Object_TypeInfo_12d54e0 + 300) * 8 + -8) !=
        _UnityEngine_Object_TypeInfo_12d54e0) {
      plVar9 = (long *)0x0;
    }
  }
  uVar3 = native_UnityEngine_Object__op_Implicit_8e1b98(plVar9,0);
  uVar1 = 0;
  if ((uVar3 & 1) != 0) {
    uVar1 = *(undefined8 *)(param_1 + 0x20);
  }
  if (lVar2 == 0) goto LAB_005474e0;
  native_MG_BlocksEngine2_Core_BE2_EventsManager__TriggerEvent_57415c(lVar2,2,uVar1,0);
  lVar2 = native_MG_BlocksEngine2_Core_BE2_MainEventsManager__get_Instance_6001fc(0);
  if (lVar2 == 0) goto LAB_005474e0;
  native_MG_BlocksEngine2_Core_BE2_EventsManager__TriggerEvent_579794(lVar2,0x10,0);
  plVar9 = *(long **)(param_1 + 0x20);
  if (((*(byte *)(_UnityEngine_Object_TypeInfo_12d54e0 + 0x133) >> 2 & 1) == 0) ||
     (*(int *)(_UnityEngine_Object_TypeInfo_12d54e0 + 0xe0) != 0)) {
    if (plVar9 != (long *)0x0) goto LAB_00547054;
LAB_00547068:
    plVar9 = (long *)0x0;
  }
  else {
    native_sub_4327ec();
    if (plVar9 == (long *)0x0) goto LAB_00547068;
LAB_00547054:
    if (*(byte *)(*plVar9 + 300) < *(byte *)(_UnityEngine_Object_TypeInfo_12d54e0 + 300))
    goto LAB_00547068;
    if (*(long *)(*(long *)(*plVar9 + 200) +
                  (ulong)*(byte *)(_UnityEngine_Object_TypeInfo_12d54e0 + 300) * 8 + -8) !=
        _UnityEngine_Object_TypeInfo_12d54e0) {
      plVar9 = (long *)0x0;
    }
  }
  uVar3 = native_UnityEngine_Object__op_Inequality_8d76fc(plVar9,0,0);
  if ((uVar3 & 1) == 0) {
    lVar2 = native_MG_BlocksEngine2_Core_BE2_MainEventsManager__get_Instance_6001fc(0);
    if (lVar2 != 0) {
      uVar1 = 6;
      uVar6 = 0;
      goto LAB_005474c4;
    }
  }
  else {
    plVar9 = *(long **)(param_1 + 0x20);
    if (plVar9 != (long *)0x0) {
      lVar2 = *plVar9;
      if ((ulong)*(ushort *)(lVar2 + 0x12a) != 0) {
        uVar3 = 0;
        piVar7 = (int *)(*(long *)(lVar2 + 0xb0) + 8);
        do {
          if (*(long *)(piVar7 + -2) == _MG_BlocksEngine2_Block_I_BE2_Block_TypeInfo_12d4dd8) {
            puVar4 = (undefined8 *)(lVar2 + (long)(*piVar7 + 4) * 0x10 + 0x138);
            goto LAB_00547138;
          }
          uVar3 = uVar3 + 1;
          piVar7 = piVar7 + 4;
        } while (uVar3 < *(ushort *)(lVar2 + 0x12a));
      }
      puVar4 = (undefined8 *)
               native_sub_3c9b34(plVar9,_MG_BlocksEngine2_Block_I_BE2_Block_TypeInfo_12d4dd8,4);
LAB_00547138:
      plVar9 = (long *)(*(code *)*puVar4)(plVar9,puVar4[1]);
      if (plVar9 != (long *)0x0) {
        lVar2 = *plVar9;
        if ((ulong)*(ushort *)(lVar2 + 0x12a) != 0) {
          uVar3 = 0;
          piVar7 = (int *)(*(long *)(lVar2 + 0xb0) + 8);
          do {
            if (*(long *)(piVar7 + -2) ==
                _MG_BlocksEngine2_Block_Instruction_I_BE2_Instruction_TypeInfo_12d4e28) {
              puVar4 = (undefined8 *)(lVar2 + (long)*piVar7 * 0x10 + 0x138);
              goto LAB_005471a8;
            }
            uVar3 = uVar3 + 1;
            piVar7 = piVar7 + 4;
          } while (uVar3 < *(ushort *)(lVar2 + 0x12a));
        }
        puVar4 = (undefined8 *)
                 native_sub_3c9b34(plVar9,
                                   _MG_BlocksEngine2_Block_Instruction_I_BE2_Instruction_TypeInfo_12d4e28
                                   ,0);
LAB_005471a8:
        plVar9 = (long *)(*(code *)*puVar4)(plVar9,puVar4[1]);
        plVar8 = *(long **)(param_1 + 0x20);
        if (plVar8 != (long *)0x0) {
          lVar2 = *plVar8;
          if ((ulong)*(ushort *)(lVar2 + 0x12a) != 0) {
            uVar3 = 0;
            piVar7 = (int *)(*(long *)(lVar2 + 0xb0) + 8);
            do {
              if (*(long *)(piVar7 + -2) == _MG_BlocksEngine2_Block_I_BE2_Block_TypeInfo_12d4dd8) {
                puVar4 = (undefined8 *)(lVar2 + (long)*piVar7 * 0x10 + 0x138);
                goto LAB_00547214;
              }
              uVar3 = uVar3 + 1;
              piVar7 = piVar7 + 4;
            } while (uVar3 < *(ushort *)(lVar2 + 0x12a));
          }
          puVar4 = (undefined8 *)
                   native_sub_3c9b34(plVar8,_MG_BlocksEngine2_Block_I_BE2_Block_TypeInfo_12d4dd8,0);
LAB_00547214:
          lVar2 = (*(code *)*puVar4)(plVar8,puVar4[1]);
          if ((lVar2 != 0) &&
             (uVar1 = native_UnityEngine_Component__GetComponentInParent_BE2_Canvas__49dc70
                                (lVar2,
                                 _Method_UnityEngine_Component_GetComponentInParent_I_BE2_BlocksStack____12e2d50
                                ), plVar9 != (long *)0x0)) {
            lVar2 = *plVar9;
            if ((ulong)*(ushort *)(lVar2 + 0x12a) != 0) {
              uVar3 = 0;
              piVar7 = (int *)(*(long *)(lVar2 + 0xb0) + 8);
              do {
                if (*(long *)(piVar7 + -2) ==
                    _MG_BlocksEngine2_Block_Instruction_I_BE2_InstructionBase_TypeInfo_12d4e30) {
                  puVar4 = (undefined8 *)(lVar2 + (long)(*piVar7 + 5) * 0x10 + 0x138);
                  goto LAB_0054729c;
                }
                uVar3 = uVar3 + 1;
                piVar7 = piVar7 + 4;
              } while (uVar3 < *(ushort *)(lVar2 + 0x12a));
            }
            puVar4 = (undefined8 *)
                     native_sub_3c9b34(plVar9,
                                       _MG_BlocksEngine2_Block_Instruction_I_BE2_InstructionBase_TypeInfo_12d4e30
                                       ,5);
LAB_0054729c:
            (*(code *)*puVar4)(plVar9,uVar1,puVar4[1]);
            plVar9 = *(long **)(param_1 + 0x20);
            if (plVar9 != (long *)0x0) {
              lVar2 = *plVar9;
              if ((ulong)*(ushort *)(lVar2 + 0x12a) != 0) {
                uVar3 = 0;
                piVar7 = (int *)(*(long *)(lVar2 + 0xb0) + 8);
                do {
                  if (*(long *)(piVar7 + -2) == _MG_BlocksEngine2_Block_I_BE2_Block_TypeInfo_12d4dd8
                     ) {
                    puVar4 = (undefined8 *)(lVar2 + (long)*piVar7 * 0x10 + 0x138);
                    goto LAB_00547308;
                  }
                  uVar3 = uVar3 + 1;
                  piVar7 = piVar7 + 4;
                } while (uVar3 < *(ushort *)(lVar2 + 0x12a));
              }
              puVar4 = (undefined8 *)
                       native_sub_3c9b34(plVar9,_MG_BlocksEngine2_Block_I_BE2_Block_TypeInfo_12d4dd8
                                         ,0);
LAB_00547308:
              lVar2 = (*(code *)*puVar4)(plVar9,puVar4[1]);
              if (lVar2 != 0) {
                uVar1 = native_UnityEngine_Component__GetComponentInParent_BE2_Canvas__49dc70
                                  (lVar2,
                                   _Method_UnityEngine_Component_GetComponentInParent_I_BE2_BlockSection____12e2d48
                                  );
                lVar2 = *plVar9;
                if ((ulong)*(ushort *)(lVar2 + 0x12a) != 0) {
                  uVar3 = 0;
                  piVar7 = (int *)(*(long *)(lVar2 + 0xb0) + 8);
                  do {
                    if (*(long *)(piVar7 + -2) ==
                        _MG_BlocksEngine2_Block_I_BE2_Block_TypeInfo_12d4dd8) {
                      puVar4 = (undefined8 *)(lVar2 + (long)(*piVar7 + 7) * 0x10 + 0x138);
                      goto LAB_00547384;
                    }
                    uVar3 = uVar3 + 1;
                    piVar7 = piVar7 + 4;
                  } while (uVar3 < *(ushort *)(lVar2 + 0x12a));
                }
                puVar4 = (undefined8 *)
                         native_sub_3c9b34(plVar9,
                                           _MG_BlocksEngine2_Block_I_BE2_Block_TypeInfo_12d4dd8,7);
LAB_00547384:
                (*(code *)*puVar4)(plVar9,uVar1,puVar4[1]);
                plVar9 = *(long **)(param_1 + 0x20);
                if (plVar9 != (long *)0x0) {
                  lVar2 = *plVar9;
                  if ((ulong)*(ushort *)(lVar2 + 0x12a) != 0) {
                    uVar3 = 0;
                    piVar7 = (int *)(*(long *)(lVar2 + 0xb0) + 8);
                    do {
                      if (*(long *)(piVar7 + -2) ==
                          _MG_BlocksEngine2_Block_I_BE2_Block_TypeInfo_12d4dd8) {
                        puVar4 = (undefined8 *)(lVar2 + (long)(*piVar7 + 6) * 0x10 + 0x138);
                        goto LAB_005473f4;
                      }
                      uVar3 = uVar3 + 1;
                      piVar7 = piVar7 + 4;
                    } while (uVar3 < *(ushort *)(lVar2 + 0x12a));
                  }
                  puVar4 = (undefined8 *)
                           native_sub_3c9b34(plVar9,
                                             _MG_BlocksEngine2_Block_I_BE2_Block_TypeInfo_12d4dd8,6)
                  ;
LAB_005473f4:
                  lVar2 = (*(code *)*puVar4)(plVar9,puVar4[1]);
                  if (lVar2 == 0) {
                    lVar2 = native_MG_BlocksEngine2_Core_BE2_MainEventsManager__get_Instance_6001fc
                                      ();
                    if (lVar2 != 0) {
                      uVar6 = *(undefined8 *)(param_1 + 0x20);
                      uVar1 = 5;
LAB_005474c4:
                      native_MG_BlocksEngine2_Core_BE2_EventsManager__TriggerEvent_57415c
                                (lVar2,uVar1,uVar6,0);
                      return 0;
                    }
                  }
                  else {
                    plVar9 = *(long **)(param_1 + 0x20);
                    if (plVar9 != (long *)0x0) {
                      lVar2 = *plVar9;
                      if ((ulong)*(ushort *)(lVar2 + 0x12a) != 0) {
                        uVar3 = 0;
                        piVar7 = (int *)(*(long *)(lVar2 + 0xb0) + 8);
                        do {
                          if (*(long *)(piVar7 + -2) ==
                              _MG_BlocksEngine2_Block_I_BE2_Block_TypeInfo_12d4dd8) {
                            puVar4 = (undefined8 *)(lVar2 + (long)*piVar7 * 0x10 + 0x138);
                            goto LAB_00547474;
                          }
                          uVar3 = uVar3 + 1;
                          piVar7 = piVar7 + 4;
                        } while (uVar3 < *(ushort *)(lVar2 + 0x12a));
                      }
                      puVar4 = (undefined8 *)
                               native_sub_3c9b34(plVar9,
                                                 _MG_BlocksEngine2_Block_I_BE2_Block_TypeInfo_12d4dd8
                                                 ,0);
LAB_00547474:
                      lVar2 = (*(code *)*puVar4)(plVar9,puVar4[1]);
                      if ((lVar2 != 0) &&
                         (lVar2 = native_UnityEngine_Transform__get_parent_765eb0(lVar2,0),
                         lVar2 != 0)) {
                        lVar5 = native_UnityEngine_Component__GetComponent_ActiveAnimation__49daec
                                          (lVar2,
                                           _Method_UnityEngine_Component_GetComponent_I_BE2_BlockSectionHeader____12e2a28
                                          );
                        lVar2 = native_MG_BlocksEngine2_Core_BE2_MainEventsManager__get_Instance_6001fc
                                          (0);
                        if (lVar2 != 0) {
                          uVar6 = *(undefined8 *)(param_1 + 0x20);
                          if (lVar5 == 0) {
                            uVar1 = 3;
                          }
                          else {
                            uVar1 = 4;
                          }
                          goto LAB_005474c4;
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
  }
LAB_005474e0:
                    /* WARNING: Subroutine does not return */
  native_sub_432810();
}



/* MG_BlocksEngine2.DragDrop.BE2_DragDropManager.<C_HandleDropEvents>d__39$$System.Collections.Generic.IEnumerator<System.Object>.get_Current @ 0x5474e4
 * Il2CppObject* MG_BlocksEngine2_DragDrop_BE2_DragDropManager__C_HandleDropEvents_d__39__System_Collections_Generic_IEnumerator_System_Object__get_Current (MG_BlocksEngine2_DragDrop_BE2_DragDropManager__C_HandleDropEvents_d__39_o* __this, const MethodInfo* method); */

/* MG_BlocksEngine2.DragDrop.BE2_DragDropManager.<C_HandleDropEvents>d__39$$System.Collections.Generic.IEnumerator<System.Object>.get_Current
   Il2CppObject*
   MG_BlocksEngine2_DragDrop_BE2_DragDropManager__C_HandleDropEvents_d__39__System_Collections_Generic_IEnumerator_System_Object__get_Current
   (MG_BlocksEngine2_DragDrop_BE2_DragDropManager__C_HandleDropEvents_d__39_o* __this, const
   MethodInfo* method); */

undefined8
native_MG_BlocksEngine2_DragDrop_BE2_DragDropManager__C_HandleDropEvents_d__39__System_Collections_Generic_IEnumerator_System_Object__get_Current_5474e4
          (long param_1)

{
  return *(undefined8 *)(param_1 + 0x18);
}



/* MG_BlocksEngine2.DragDrop.BE2_DragDropManager.<C_HandleDropEvents>d__39$$System.Collections.IEnumerator.Reset @ 0x5474ec
 * void MG_BlocksEngine2_DragDrop_BE2_DragDropManager__C_HandleDropEvents_d__39__System_Collections_IEnumerator_Reset (MG_BlocksEngine2_DragDrop_BE2_DragDropManager__C_HandleDropEvents_d__39_o* __this, const MethodInfo* method); */

/* MG_BlocksEngine2.DragDrop.BE2_DragDropManager.<C_HandleDropEvents>d__39$$System.Collections.IEnumerator.Reset
   void 
   MG_BlocksEngine2_DragDrop_BE2_DragDropManager__C_HandleDropEvents_d__39__System_Collections_IEnumerator_Reset
   (MG_BlocksEngine2_DragDrop_BE2_DragDropManager__C_HandleDropEvents_d__39_o* __this, const
   MethodInfo* method); */

void native_MG_BlocksEngine2_DragDrop_BE2_DragDropManager__C_HandleDropEvents_d__39__System_Collections_IEnumerator_Reset_5474ec
               (void)

{
  undefined8 uVar1;
  undefined8 uVar2;
  
  native_sub_432740(&System_NotSupportedException_TypeInfo_12d5468);
  uVar1 = native_sub_432808();
  native_System_NotSupportedException___ctor_ad264c(uVar1,0);
  uVar2 = native_sub_432740(&
                            Method_MG_BlocksEngine2_DragDrop_BE2_DragDropManager__C_HandleDropEvents_d__39_System_Collections_IEnumerator_Reset___12e9610
                           );
                    /* WARNING: Subroutine does not return */
  native_sub_4327dc(uVar1,uVar2);
}



/* MG_BlocksEngine2.DragDrop.BE2_DragDropManager.<C_HandleDropEvents>d__39$$System.Collections.IEnumerator.get_Current @ 0x54752c
 * Il2CppObject* MG_BlocksEngine2_DragDrop_BE2_DragDropManager__C_HandleDropEvents_d__39__System_Collections_IEnumerator_get_Current (MG_BlocksEngine2_DragDrop_BE2_DragDropManager__C_HandleDropEvents_d__39_o* __this, const MethodInfo* method); */

/* MG_BlocksEngine2.DragDrop.BE2_DragDropManager.<C_HandleDropEvents>d__39$$System.Collections.IEnumerator.get_Current
   Il2CppObject*
   MG_BlocksEngine2_DragDrop_BE2_DragDropManager__C_HandleDropEvents_d__39__System_Collections_IEnumerator_get_Current
   (MG_BlocksEngine2_DragDrop_BE2_DragDropManager__C_HandleDropEvents_d__39_o* __this, const
   MethodInfo* method); */

undefined8
native_MG_BlocksEngine2_DragDrop_BE2_DragDropManager__C_HandleDropEvents_d__39__System_Collections_IEnumerator_get_Current_54752c
          (long param_1)

{
  return *(undefined8 *)(param_1 + 0x18);
}


