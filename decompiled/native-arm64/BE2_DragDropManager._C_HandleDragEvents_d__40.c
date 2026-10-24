/* ARM64 IL2CPP native pseudocode from Ghidra.
 * Recovered implementation, not original C# source.
 * Function boundaries follow the IL2CPP method address table. */


/* MG_BlocksEngine2.DragDrop.BE2_DragDropManager.<C_HandleDragEvents>d__40$$.ctor @ 0x546744
 * void MG_BlocksEngine2_DragDrop_BE2_DragDropManager__C_HandleDragEvents_d__40___ctor (MG_BlocksEngine2_DragDrop_BE2_DragDropManager__C_HandleDragEvents_d__40_o* __this, int32_t __1__state, const MethodInfo* method); */

/* MG_BlocksEngine2.DragDrop.BE2_DragDropManager.<C_HandleDragEvents>d__40$$.ctor
   void MG_BlocksEngine2_DragDrop_BE2_DragDropManager__C_HandleDragEvents_d__40___ctor
   (MG_BlocksEngine2_DragDrop_BE2_DragDropManager__C_HandleDragEvents_d__40_o* __this, int32_t
   __1__state, const MethodInfo* method); */

void native_MG_BlocksEngine2_DragDrop_BE2_DragDropManager__C_HandleDragEvents_d__40___ctor_546744
               (long param_1,undefined4 param_2)

{
  native_System_Object___ctor_ad2798(param_1,0);
  *(undefined4 *)(param_1 + 0x10) = param_2;
  return;
}



/* MG_BlocksEngine2.DragDrop.BE2_DragDropManager.<C_HandleDragEvents>d__40$$System.IDisposable.Dispose @ 0x546770
 * void MG_BlocksEngine2_DragDrop_BE2_DragDropManager__C_HandleDragEvents_d__40__System_IDisposable_Dispose (MG_BlocksEngine2_DragDrop_BE2_DragDropManager__C_HandleDragEvents_d__40_o* __this, const MethodInfo* method); */

/* MG_BlocksEngine2.DragDrop.BE2_DragDropManager.<C_HandleDragEvents>d__40$$System.IDisposable.Dispose
   void 
   MG_BlocksEngine2_DragDrop_BE2_DragDropManager__C_HandleDragEvents_d__40__System_IDisposable_Dispose
   (MG_BlocksEngine2_DragDrop_BE2_DragDropManager__C_HandleDragEvents_d__40_o* __this, const
   MethodInfo* method); */

void native_MG_BlocksEngine2_DragDrop_BE2_DragDropManager__C_HandleDragEvents_d__40__System_IDisposable_Dispose_546770
               (void)

{
  return;
}



/* MG_BlocksEngine2.DragDrop.BE2_DragDropManager.<C_HandleDragEvents>d__40$$MoveNext @ 0x546774
 * bool MG_BlocksEngine2_DragDrop_BE2_DragDropManager__C_HandleDragEvents_d__40__MoveNext (MG_BlocksEngine2_DragDrop_BE2_DragDropManager__C_HandleDragEvents_d__40_o* __this, const MethodInfo* method); */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* MG_BlocksEngine2.DragDrop.BE2_DragDropManager.<C_HandleDragEvents>d__40$$MoveNext
   bool MG_BlocksEngine2_DragDrop_BE2_DragDropManager__C_HandleDragEvents_d__40__MoveNext
   (MG_BlocksEngine2_DragDrop_BE2_DragDropManager__C_HandleDragEvents_d__40_o* __this, const
   MethodInfo* method); */

undefined8
native_MG_BlocksEngine2_DragDrop_BE2_DragDropManager__C_HandleDragEvents_d__40__MoveNext_546774
          (long param_1)

{
  ulong uVar1;
  undefined8 *puVar2;
  undefined8 uVar3;
  long lVar4;
  undefined8 uVar5;
  long lVar6;
  int *piVar7;
  undefined8 *puVar8;
  long *plVar9;
  long *plVar10;
  
  if ((bRam000000000133e999 & 1) == 0) {
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
    bRam000000000133e999 = 1;
  }
  if (*(int *)(param_1 + 0x10) != 1) {
    if (*(int *)(param_1 + 0x10) != 0) {
      return 0;
    }
    puVar8 = (undefined8 *)(param_1 + 0x28);
    *puVar8 = 0;
    *(undefined4 *)(param_1 + 0x10) = 0xffffffff;
    native_sub_4326e0(puVar8,0);
    plVar9 = *(long **)(param_1 + 0x20);
    if (((*(byte *)(_UnityEngine_Object_TypeInfo_12d54e0 + 0x133) >> 2 & 1) == 0) ||
       (*(int *)(_UnityEngine_Object_TypeInfo_12d54e0 + 0xe0) != 0)) {
      if (plVar9 != (long *)0x0) goto LAB_00546850;
LAB_00546864:
      plVar9 = (long *)0x0;
    }
    else {
      native_sub_4327ec();
      if (plVar9 == (long *)0x0) goto LAB_00546864;
LAB_00546850:
      if (*(byte *)(*plVar9 + 300) < *(byte *)(_UnityEngine_Object_TypeInfo_12d54e0 + 300))
      goto LAB_00546864;
      if (*(long *)(*(long *)(*plVar9 + 200) +
                    (ulong)*(byte *)(_UnityEngine_Object_TypeInfo_12d54e0 + 300) * 8 + -8) !=
          _UnityEngine_Object_TypeInfo_12d54e0) {
        plVar9 = (long *)0x0;
      }
    }
    uVar1 = native_UnityEngine_Object__op_Inequality_8d76fc(plVar9,0,0);
    if ((uVar1 & 1) == 0) {
LAB_00546da8:
      uVar3 = native_sub_432808(_UnityEngine_WaitForEndOfFrame_TypeInfo_12d6738);
      native_UnityEngine_WaitForEndOfFrame___ctor_7775b8(uVar3,0);
      *(undefined8 *)(param_1 + 0x18) = uVar3;
      native_sub_4326e0((undefined8 *)(param_1 + 0x18),uVar3);
      *(undefined4 *)(param_1 + 0x10) = 1;
      return 1;
    }
    plVar9 = *(long **)(param_1 + 0x20);
    if (plVar9 != (long *)0x0) {
      lVar6 = *plVar9;
      if ((ulong)*(ushort *)(lVar6 + 0x12a) != 0) {
        uVar1 = 0;
        piVar7 = (int *)(*(long *)(lVar6 + 0xb0) + 8);
        do {
          if (*(long *)(piVar7 + -2) == _MG_BlocksEngine2_Block_I_BE2_Block_TypeInfo_12d4dd8) {
            puVar2 = (undefined8 *)(lVar6 + (long)(*piVar7 + 4) * 0x10 + 0x138);
            goto LAB_00546ab4;
          }
          uVar1 = uVar1 + 1;
          piVar7 = piVar7 + 4;
        } while (uVar1 < *(ushort *)(lVar6 + 0x12a));
      }
      puVar2 = (undefined8 *)
               native_sub_3c9b34(plVar9,_MG_BlocksEngine2_Block_I_BE2_Block_TypeInfo_12d4dd8,4);
LAB_00546ab4:
      plVar9 = (long *)(*(code *)*puVar2)(plVar9,puVar2[1]);
      if (plVar9 != (long *)0x0) {
        lVar6 = *plVar9;
        if ((ulong)*(ushort *)(lVar6 + 0x12a) != 0) {
          uVar1 = 0;
          piVar7 = (int *)(*(long *)(lVar6 + 0xb0) + 8);
          do {
            if (*(long *)(piVar7 + -2) ==
                _MG_BlocksEngine2_Block_Instruction_I_BE2_Instruction_TypeInfo_12d4e28) {
              puVar2 = (undefined8 *)(lVar6 + (long)*piVar7 * 0x10 + 0x138);
              goto LAB_00546b24;
            }
            uVar1 = uVar1 + 1;
            piVar7 = piVar7 + 4;
          } while (uVar1 < *(ushort *)(lVar6 + 0x12a));
        }
        puVar2 = (undefined8 *)
                 native_sub_3c9b34(plVar9,
                                   _MG_BlocksEngine2_Block_Instruction_I_BE2_Instruction_TypeInfo_12d4e28
                                   ,0);
LAB_00546b24:
        plVar9 = (long *)(*(code *)*puVar2)(plVar9,puVar2[1]);
        plVar10 = *(long **)(param_1 + 0x20);
        if (plVar10 != (long *)0x0) {
          lVar6 = *plVar10;
          if ((ulong)*(ushort *)(lVar6 + 0x12a) != 0) {
            uVar1 = 0;
            piVar7 = (int *)(*(long *)(lVar6 + 0xb0) + 8);
            do {
              if (*(long *)(piVar7 + -2) == _MG_BlocksEngine2_Block_I_BE2_Block_TypeInfo_12d4dd8) {
                puVar2 = (undefined8 *)(lVar6 + (long)*piVar7 * 0x10 + 0x138);
                goto LAB_00546b90;
              }
              uVar1 = uVar1 + 1;
              piVar7 = piVar7 + 4;
            } while (uVar1 < *(ushort *)(lVar6 + 0x12a));
          }
          puVar2 = (undefined8 *)
                   native_sub_3c9b34(plVar10,_MG_BlocksEngine2_Block_I_BE2_Block_TypeInfo_12d4dd8,0)
          ;
LAB_00546b90:
          lVar6 = (*(code *)*puVar2)(plVar10,puVar2[1]);
          if ((lVar6 != 0) &&
             (uVar3 = native_UnityEngine_Component__GetComponentInParent_BE2_Canvas__49dc70
                                (lVar6,
                                 _Method_UnityEngine_Component_GetComponentInParent_I_BE2_BlocksStack____12e2d50
                                ), plVar9 != (long *)0x0)) {
            lVar6 = *plVar9;
            if ((ulong)*(ushort *)(lVar6 + 0x12a) != 0) {
              uVar1 = 0;
              piVar7 = (int *)(*(long *)(lVar6 + 0xb0) + 8);
              do {
                if (*(long *)(piVar7 + -2) ==
                    _MG_BlocksEngine2_Block_Instruction_I_BE2_InstructionBase_TypeInfo_12d4e30) {
                  puVar2 = (undefined8 *)(lVar6 + (long)(*piVar7 + 5) * 0x10 + 0x138);
                  goto LAB_00546c18;
                }
                uVar1 = uVar1 + 1;
                piVar7 = piVar7 + 4;
              } while (uVar1 < *(ushort *)(lVar6 + 0x12a));
            }
            puVar2 = (undefined8 *)
                     native_sub_3c9b34(plVar9,
                                       _MG_BlocksEngine2_Block_Instruction_I_BE2_InstructionBase_TypeInfo_12d4e30
                                       ,5);
LAB_00546c18:
            (*(code *)*puVar2)(plVar9,uVar3,puVar2[1]);
            plVar9 = *(long **)(param_1 + 0x20);
            if (plVar9 != (long *)0x0) {
              lVar6 = *plVar9;
              if ((ulong)*(ushort *)(lVar6 + 0x12a) != 0) {
                uVar1 = 0;
                piVar7 = (int *)(*(long *)(lVar6 + 0xb0) + 8);
                do {
                  if (*(long *)(piVar7 + -2) == _MG_BlocksEngine2_Block_I_BE2_Block_TypeInfo_12d4dd8
                     ) {
                    puVar2 = (undefined8 *)(lVar6 + (long)*piVar7 * 0x10 + 0x138);
                    goto LAB_00546c84;
                  }
                  uVar1 = uVar1 + 1;
                  piVar7 = piVar7 + 4;
                } while (uVar1 < *(ushort *)(lVar6 + 0x12a));
              }
              puVar2 = (undefined8 *)
                       native_sub_3c9b34(plVar9,_MG_BlocksEngine2_Block_I_BE2_Block_TypeInfo_12d4dd8
                                         ,0);
LAB_00546c84:
              lVar6 = (*(code *)*puVar2)(plVar9,puVar2[1]);
              if (lVar6 != 0) {
                uVar3 = native_UnityEngine_Component__GetComponentInParent_BE2_Canvas__49dc70
                                  (lVar6,
                                   _Method_UnityEngine_Component_GetComponentInParent_I_BE2_BlockSection____12e2d48
                                  );
                lVar6 = *plVar9;
                if ((ulong)*(ushort *)(lVar6 + 0x12a) != 0) {
                  uVar1 = 0;
                  piVar7 = (int *)(*(long *)(lVar6 + 0xb0) + 8);
                  do {
                    if (*(long *)(piVar7 + -2) ==
                        _MG_BlocksEngine2_Block_I_BE2_Block_TypeInfo_12d4dd8) {
                      puVar2 = (undefined8 *)(lVar6 + (long)(*piVar7 + 7) * 0x10 + 0x138);
                      goto LAB_00546d00;
                    }
                    uVar1 = uVar1 + 1;
                    piVar7 = piVar7 + 4;
                  } while (uVar1 < *(ushort *)(lVar6 + 0x12a));
                }
                puVar2 = (undefined8 *)
                         native_sub_3c9b34(plVar9,
                                           _MG_BlocksEngine2_Block_I_BE2_Block_TypeInfo_12d4dd8,7);
LAB_00546d00:
                (*(code *)*puVar2)(plVar9,uVar3,puVar2[1]);
                plVar9 = *(long **)(param_1 + 0x20);
                if (plVar9 != (long *)0x0) {
                  lVar6 = *plVar9;
                  if ((ulong)*(ushort *)(lVar6 + 0x12a) != 0) {
                    uVar1 = 0;
                    piVar7 = (int *)(*(long *)(lVar6 + 0xb0) + 8);
                    do {
                      if (*(long *)(piVar7 + -2) ==
                          _MG_BlocksEngine2_Block_I_BE2_Block_TypeInfo_12d4dd8) {
                        puVar2 = (undefined8 *)(lVar6 + (long)*piVar7 * 0x10 + 0x138);
                        goto LAB_00546d6c;
                      }
                      uVar1 = uVar1 + 1;
                      piVar7 = piVar7 + 4;
                    } while (uVar1 < *(ushort *)(lVar6 + 0x12a));
                  }
                  puVar2 = (undefined8 *)
                           native_sub_3c9b34(plVar9,
                                             _MG_BlocksEngine2_Block_I_BE2_Block_TypeInfo_12d4dd8,0)
                  ;
LAB_00546d6c:
                  lVar6 = (*(code *)*puVar2)(plVar9,puVar2[1]);
                  if ((lVar6 != 0) &&
                     (lVar6 = native_UnityEngine_Transform__get_parent_765eb0(lVar6,0), lVar6 != 0))
                  {
                    uVar3 = native_UnityEngine_Component__GetComponent_ActiveAnimation__49daec
                                      (lVar6,
                                       _Method_UnityEngine_Component_GetComponent_I_BE2_BlockSectionHeader____12e2a28
                                      );
                    *puVar8 = uVar3;
                    native_sub_4326e0(puVar8,uVar3);
                    goto LAB_00546da8;
                  }
                }
              }
            }
          }
        }
      }
    }
    goto LAB_00546e34;
  }
  *(undefined4 *)(param_1 + 0x10) = 0xffffffff;
  lVar6 = native_MG_BlocksEngine2_Core_BE2_MainEventsManager__get_Instance_6001fc(0);
  plVar9 = *(long **)(param_1 + 0x20);
  if (((*(byte *)(_UnityEngine_Object_TypeInfo_12d54e0 + 0x133) >> 2 & 1) == 0) ||
     (*(int *)(_UnityEngine_Object_TypeInfo_12d54e0 + 0xe0) != 0)) {
    if (plVar9 != (long *)0x0) goto LAB_005468a4;
LAB_005468b8:
    plVar9 = (long *)0x0;
  }
  else {
    native_sub_4327ec(_UnityEngine_Object_TypeInfo_12d54e0);
    if (plVar9 == (long *)0x0) goto LAB_005468b8;
LAB_005468a4:
    if (*(byte *)(*plVar9 + 300) < *(byte *)(_UnityEngine_Object_TypeInfo_12d54e0 + 300))
    goto LAB_005468b8;
    if (*(long *)(*(long *)(*plVar9 + 200) +
                  (ulong)*(byte *)(_UnityEngine_Object_TypeInfo_12d54e0 + 300) * 8 + -8) !=
        _UnityEngine_Object_TypeInfo_12d54e0) {
      plVar9 = (long *)0x0;
    }
  }
  uVar1 = native_UnityEngine_Object__op_Implicit_8e1b98(plVar9,0);
  uVar3 = 0;
  if ((uVar1 & 1) != 0) {
    uVar3 = *(undefined8 *)(param_1 + 0x20);
  }
  if (lVar6 == 0) goto LAB_00546e34;
  native_MG_BlocksEngine2_Core_BE2_EventsManager__TriggerEvent_57415c(lVar6,7,uVar3,0);
  plVar9 = *(long **)(param_1 + 0x20);
  if (((*(byte *)(_UnityEngine_Object_TypeInfo_12d54e0 + 0x133) >> 2 & 1) == 0) ||
     (*(int *)(_UnityEngine_Object_TypeInfo_12d54e0 + 0xe0) != 0)) {
    if (plVar9 != (long *)0x0) goto LAB_00546994;
LAB_005469a8:
    plVar9 = (long *)0x0;
  }
  else {
    native_sub_4327ec();
    if (plVar9 == (long *)0x0) goto LAB_005469a8;
LAB_00546994:
    if (*(byte *)(*plVar9 + 300) < *(byte *)(_UnityEngine_Object_TypeInfo_12d54e0 + 300))
    goto LAB_005469a8;
    if (*(long *)(*(long *)(*plVar9 + 200) +
                  (ulong)*(byte *)(_UnityEngine_Object_TypeInfo_12d54e0 + 300) * 8 + -8) !=
        _UnityEngine_Object_TypeInfo_12d54e0) {
      plVar9 = (long *)0x0;
    }
  }
  uVar1 = native_UnityEngine_Object__op_Inequality_8d76fc(plVar9,0,0);
  if ((uVar1 & 1) == 0) {
    lVar6 = native_MG_BlocksEngine2_Core_BE2_MainEventsManager__get_Instance_6001fc(0);
    if (lVar6 != 0) {
      uVar3 = 0xb;
      uVar5 = 0;
LAB_00546a08:
      native_MG_BlocksEngine2_Core_BE2_EventsManager__TriggerEvent_57415c(lVar6,uVar3,uVar5,0);
      return 0;
    }
  }
  else if (*(long *)(param_1 + 0x28) == 0) {
    plVar9 = *(long **)(param_1 + 0x20);
    if (plVar9 != (long *)0x0) {
      lVar6 = *plVar9;
      if ((ulong)*(ushort *)(lVar6 + 0x12a) != 0) {
        uVar1 = 0;
        piVar7 = (int *)(*(long *)(lVar6 + 0xb0) + 8);
        do {
          if (*(long *)(piVar7 + -2) == _MG_BlocksEngine2_Block_I_BE2_Block_TypeInfo_12d4dd8) {
            puVar8 = (undefined8 *)(lVar6 + (long)(*piVar7 + 6) * 0x10 + 0x138);
            goto LAB_00546e00;
          }
          uVar1 = uVar1 + 1;
          piVar7 = piVar7 + 4;
        } while (uVar1 < *(ushort *)(lVar6 + 0x12a));
      }
      puVar8 = (undefined8 *)
               native_sub_3c9b34(plVar9,_MG_BlocksEngine2_Block_I_BE2_Block_TypeInfo_12d4dd8,6);
LAB_00546e00:
      lVar4 = (*(code *)*puVar8)(plVar9,puVar8[1]);
      lVar6 = native_MG_BlocksEngine2_Core_BE2_MainEventsManager__get_Instance_6001fc(0);
      if (lVar6 != 0) {
        uVar5 = *(undefined8 *)(param_1 + 0x20);
        if (lVar4 == 0) {
          uVar3 = 10;
        }
        else {
          uVar3 = 8;
        }
        goto LAB_00546a08;
      }
    }
  }
  else {
    lVar6 = native_MG_BlocksEngine2_Core_BE2_MainEventsManager__get_Instance_6001fc(0);
    if (lVar6 != 0) {
      uVar5 = *(undefined8 *)(param_1 + 0x20);
      uVar3 = 9;
      goto LAB_00546a08;
    }
  }
LAB_00546e34:
                    /* WARNING: Subroutine does not return */
  native_sub_432810();
}



/* MG_BlocksEngine2.DragDrop.BE2_DragDropManager.<C_HandleDragEvents>d__40$$System.Collections.Generic.IEnumerator<System.Object>.get_Current @ 0x546e38
 * Il2CppObject* MG_BlocksEngine2_DragDrop_BE2_DragDropManager__C_HandleDragEvents_d__40__System_Collections_Generic_IEnumerator_System_Object__get_Current (MG_BlocksEngine2_DragDrop_BE2_DragDropManager__C_HandleDragEvents_d__40_o* __this, const MethodInfo* method); */

/* MG_BlocksEngine2.DragDrop.BE2_DragDropManager.<C_HandleDragEvents>d__40$$System.Collections.Generic.IEnumerator<System.Object>.get_Current
   Il2CppObject*
   MG_BlocksEngine2_DragDrop_BE2_DragDropManager__C_HandleDragEvents_d__40__System_Collections_Generic_IEnumerator_System_Object__get_Current
   (MG_BlocksEngine2_DragDrop_BE2_DragDropManager__C_HandleDragEvents_d__40_o* __this, const
   MethodInfo* method); */

undefined8
native_MG_BlocksEngine2_DragDrop_BE2_DragDropManager__C_HandleDragEvents_d__40__System_Collections_Generic_IEnumerator_System_Object__get_Current_546e38
          (long param_1)

{
  return *(undefined8 *)(param_1 + 0x18);
}



/* MG_BlocksEngine2.DragDrop.BE2_DragDropManager.<C_HandleDragEvents>d__40$$System.Collections.IEnumerator.Reset @ 0x546e40
 * void MG_BlocksEngine2_DragDrop_BE2_DragDropManager__C_HandleDragEvents_d__40__System_Collections_IEnumerator_Reset (MG_BlocksEngine2_DragDrop_BE2_DragDropManager__C_HandleDragEvents_d__40_o* __this, const MethodInfo* method); */

/* MG_BlocksEngine2.DragDrop.BE2_DragDropManager.<C_HandleDragEvents>d__40$$System.Collections.IEnumerator.Reset
   void 
   MG_BlocksEngine2_DragDrop_BE2_DragDropManager__C_HandleDragEvents_d__40__System_Collections_IEnumerator_Reset
   (MG_BlocksEngine2_DragDrop_BE2_DragDropManager__C_HandleDragEvents_d__40_o* __this, const
   MethodInfo* method); */

void native_MG_BlocksEngine2_DragDrop_BE2_DragDropManager__C_HandleDragEvents_d__40__System_Collections_IEnumerator_Reset_546e40
               (void)

{
  undefined8 uVar1;
  undefined8 uVar2;
  
  native_sub_432740(&System_NotSupportedException_TypeInfo_12d5468);
  uVar1 = native_sub_432808();
  native_System_NotSupportedException___ctor_ad264c(uVar1,0);
  uVar2 = native_sub_432740(&
                            Method_MG_BlocksEngine2_DragDrop_BE2_DragDropManager__C_HandleDragEvents_d__40_System_Collections_IEnumerator_Reset___12e9608
                           );
                    /* WARNING: Subroutine does not return */
  native_sub_4327dc(uVar1,uVar2);
}



/* MG_BlocksEngine2.DragDrop.BE2_DragDropManager.<C_HandleDragEvents>d__40$$System.Collections.IEnumerator.get_Current @ 0x546e80
 * Il2CppObject* MG_BlocksEngine2_DragDrop_BE2_DragDropManager__C_HandleDragEvents_d__40__System_Collections_IEnumerator_get_Current (MG_BlocksEngine2_DragDrop_BE2_DragDropManager__C_HandleDragEvents_d__40_o* __this, const MethodInfo* method); */

/* MG_BlocksEngine2.DragDrop.BE2_DragDropManager.<C_HandleDragEvents>d__40$$System.Collections.IEnumerator.get_Current
   Il2CppObject*
   MG_BlocksEngine2_DragDrop_BE2_DragDropManager__C_HandleDragEvents_d__40__System_Collections_IEnumerator_get_Current
   (MG_BlocksEngine2_DragDrop_BE2_DragDropManager__C_HandleDragEvents_d__40_o* __this, const
   MethodInfo* method); */

undefined8
native_MG_BlocksEngine2_DragDrop_BE2_DragDropManager__C_HandleDragEvents_d__40__System_Collections_IEnumerator_get_Current_546e80
          (long param_1)

{
  return *(undefined8 *)(param_1 + 0x18);
}


