/* ARM64 IL2CPP native pseudocode from Ghidra.
 * Recovered implementation, not original C# source.
 * Function boundaries follow the IL2CPP method address table. */


/* MG_BlocksEngine2.Serializer.BE2_BlocksSerializer.<C_AddInputs>d__9$$.ctor @ 0x950484
 * void MG_BlocksEngine2_Serializer_BE2_BlocksSerializer__C_AddInputs_d__9___ctor (MG_BlocksEngine2_Serializer_BE2_BlocksSerializer__C_AddInputs_d__9_o* __this, int32_t __1__state, const MethodInfo* method); */

/* MG_BlocksEngine2.Serializer.BE2_BlocksSerializer.<C_AddInputs>d__9$$.ctor
   void MG_BlocksEngine2_Serializer_BE2_BlocksSerializer__C_AddInputs_d__9___ctor
   (MG_BlocksEngine2_Serializer_BE2_BlocksSerializer__C_AddInputs_d__9_o* __this, int32_t
   __1__state, const MethodInfo* method); */

void native_MG_BlocksEngine2_Serializer_BE2_BlocksSerializer__C_AddInputs_d__9___ctor_950484
               (long param_1,undefined4 param_2)

{
  native_System_Object___ctor_ad2798(param_1,0);
  *(undefined4 *)(param_1 + 0x10) = param_2;
  return;
}



/* MG_BlocksEngine2.Serializer.BE2_BlocksSerializer.<C_AddInputs>d__9$$System.IDisposable.Dispose @ 0x9504b0
 * void MG_BlocksEngine2_Serializer_BE2_BlocksSerializer__C_AddInputs_d__9__System_IDisposable_Dispose (MG_BlocksEngine2_Serializer_BE2_BlocksSerializer__C_AddInputs_d__9_o* __this, const MethodInfo* method); */

/* MG_BlocksEngine2.Serializer.BE2_BlocksSerializer.<C_AddInputs>d__9$$System.IDisposable.Dispose
   void 
   MG_BlocksEngine2_Serializer_BE2_BlocksSerializer__C_AddInputs_d__9__System_IDisposable_Dispose
   (MG_BlocksEngine2_Serializer_BE2_BlocksSerializer__C_AddInputs_d__9_o* __this, const MethodInfo*
   method); */

void native_MG_BlocksEngine2_Serializer_BE2_BlocksSerializer__C_AddInputs_d__9__System_IDisposable_Dispose_9504b0
               (void)

{
  return;
}



/* MG_BlocksEngine2.Serializer.BE2_BlocksSerializer.<C_AddInputs>d__9$$MoveNext @ 0x9504b4
 * bool MG_BlocksEngine2_Serializer_BE2_BlocksSerializer__C_AddInputs_d__9__MoveNext (MG_BlocksEngine2_Serializer_BE2_BlocksSerializer__C_AddInputs_d__9_o* __this, const MethodInfo* method); */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* MG_BlocksEngine2.Serializer.BE2_BlocksSerializer.<C_AddInputs>d__9$$MoveNext
   bool MG_BlocksEngine2_Serializer_BE2_BlocksSerializer__C_AddInputs_d__9__MoveNext
   (MG_BlocksEngine2_Serializer_BE2_BlocksSerializer__C_AddInputs_d__9_o* __this, const MethodInfo*
   method); */

undefined8
native_MG_BlocksEngine2_Serializer_BE2_BlocksSerializer__C_AddInputs_d__9__MoveNext_9504b4
          (long param_1)

{
  int iVar1;
  undefined4 uVar2;
  undefined8 uVar3;
  undefined8 *puVar4;
  undefined8 uVar5;
  long *plVar6;
  undefined8 *puVar7;
  long lVar8;
  long lVar9;
  long lVar10;
  long lVar11;
  long lVar12;
  ulong uVar13;
  int *piVar14;
  long *plVar15;
  long lVar16;
  uint uVar17;
  uint uVar18;
  long lVar19;
  int iStack_b4;
  undefined8 uStack_a0;
  undefined8 uStack_98;
  undefined8 uStack_90;
  int aiStack_88 [2];
  undefined8 uStack_80;
  undefined8 uStack_78;
  undefined8 uStack_70;
  
  if ((bRam0000000001341497 & 1) == 0) {
    native_sub_43273c(&MG_BlocksEngine2_Serializer_BE2_BlocksSerializer_TypeInfo_12d3998);
    native_sub_43273c(&BE2_Ins_DefineFunction_var_12d12f8);
    native_sub_43273c(&BE2_Op_FunctionLocalVariable_var_12d1308);
    native_sub_43273c(&Method_UnityEngine_Component_GetComponentInChildren_TMP_Text____12e2c98);
    native_sub_43273c(&Method_UnityEngine_Component_GetComponent_I_BE2_Drag____12e2a48);
    native_sub_43273c(&Method_UnityEngine_Component_GetComponent_I_BE2_Spot____12e2a68);
    native_sub_43273c(&Method_UnityEngine_Component_GetComponent_TMP_Text____12e2b38);
    native_sub_43273c(&
                      Method_System_Collections_Generic_List_Enumerator_BE2_SerializableBlock__Dispose___12da3a8
                     );
    native_sub_43273c(&
                      Method_System_Collections_Generic_List_Enumerator_BE2_SerializableBlock__MoveNext___12da3b0
                     );
    native_sub_43273c(&
                      Method_System_Collections_Generic_List_Enumerator_BE2_SerializableBlock__get_Current___12da3b8
                     );
    native_sub_43273c(&MG_BlocksEngine2_Block_I_BE2_BlockLayout_TypeInfo_12d4de0);
    native_sub_43273c(&MG_BlocksEngine2_Block_I_BE2_BlockSectionBody_TypeInfo_12d4df0);
    native_sub_43273c(&MG_BlocksEngine2_Block_I_BE2_BlockSectionHeaderInput_TypeInfo_12d4e00);
    native_sub_43273c(&MG_BlocksEngine2_Block_I_BE2_BlockSectionHeader_TypeInfo_12d4df8);
    native_sub_43273c(&MG_BlocksEngine2_Block_I_BE2_BlockSection_TypeInfo_12d4de8);
    native_sub_43273c(&MG_BlocksEngine2_Block_I_BE2_Block_TypeInfo_12d4dd8);
    native_sub_43273c(&MG_BlocksEngine2_DragDrop_I_BE2_Drag_TypeInfo_12d4e18);
    native_sub_43273c(&
                      Method_System_Collections_Generic_List_BE2_SerializableBlock__GetEnumerator___12dc498
                     );
    native_sub_43273c(&
                      Method_System_Collections_Generic_List_BE2_SerializableSection__get_Item___12dc4d8
                     );
    native_sub_43273c(&
                      Method_System_Collections_Generic_List_BE2_SerializableInput__get_Item___12dc4b8
                     );
    native_sub_43273c(&System_Type_TypeInfo_12d6340);
    native_sub_43273c(&UnityEngine_WaitForEndOfFrame_TypeInfo_12d6738);
    native_sub_43273c(&StringLiteral_true_12f6790);
    bRam0000000001341497 = 1;
  }
  uStack_80 = 0;
  uStack_78 = 0;
  uStack_70 = 0;
  aiStack_88[1] = 0;
  iVar1 = *(int *)(param_1 + 0x10);
  if (iVar1 == 2) {
    *(undefined4 *)(param_1 + 0x10) = 0xffffffff;
    if (((*(byte *)(_MG_BlocksEngine2_Serializer_BE2_BlocksSerializer_TypeInfo_12d3998 + 0x133) >> 2
         & 1) != 0) &&
       (*(int *)(_MG_BlocksEngine2_Serializer_BE2_BlocksSerializer_TypeInfo_12d3998 + 0xe0) == 0)) {
      native_sub_4327ec(_MG_BlocksEngine2_Serializer_BE2_BlocksSerializer_TypeInfo_12d3998);
    }
    uVar3 = 0;
    **(int **)(_MG_BlocksEngine2_Serializer_BE2_BlocksSerializer_TypeInfo_12d3998 + 0xb8) =
         **(int **)(_MG_BlocksEngine2_Serializer_BE2_BlocksSerializer_TypeInfo_12d3998 + 0xb8) + -1;
  }
  else {
    if (iVar1 == 1) {
      plVar15 = *(long **)(param_1 + 0x20);
      *(undefined4 *)(param_1 + 0x10) = 0xffffffff;
      if (plVar15 != (long *)0x0) {
        lVar8 = *plVar15;
        if ((ulong)*(ushort *)(lVar8 + 0x12a) != 0) {
          uVar13 = 0;
          piVar14 = (int *)(*(long *)(lVar8 + 0xb0) + 8);
          do {
            if (*(long *)(piVar14 + -2) == _MG_BlocksEngine2_Block_I_BE2_Block_TypeInfo_12d4dd8) {
              puVar4 = (undefined8 *)(lVar8 + (long)(*piVar14 + 3) * 0x10 + 0x138);
              goto LAB_00950720;
            }
            uVar13 = uVar13 + 1;
            piVar14 = piVar14 + 4;
          } while (uVar13 < *(ushort *)(lVar8 + 0x12a));
        }
        puVar4 = (undefined8 *)
                 native_sub_3c9b34(plVar15,_MG_BlocksEngine2_Block_I_BE2_Block_TypeInfo_12d4dd8,3);
LAB_00950720:
        plVar15 = (long *)(*(code *)*puVar4)(plVar15,puVar4[1]);
        if (plVar15 != (long *)0x0) {
          lVar8 = *plVar15;
          if ((ulong)*(ushort *)(lVar8 + 0x12a) != 0) {
            uVar13 = 0;
            piVar14 = (int *)(*(long *)(lVar8 + 0xb0) + 8);
            do {
              if (*(long *)(piVar14 + -2) ==
                  _MG_BlocksEngine2_Block_I_BE2_BlockLayout_TypeInfo_12d4de0) {
                puVar4 = (undefined8 *)(lVar8 + (long)(*piVar14 + 2) * 0x10 + 0x138);
                goto LAB_00950794;
              }
              uVar13 = uVar13 + 1;
              piVar14 = piVar14 + 4;
            } while (uVar13 < *(ushort *)(lVar8 + 0x12a));
          }
          puVar4 = (undefined8 *)
                   native_sub_3c9b34(plVar15,
                                     _MG_BlocksEngine2_Block_I_BE2_BlockLayout_TypeInfo_12d4de0,2);
LAB_00950794:
          lVar8 = (*(code *)*puVar4)(plVar15,puVar4[1]);
          if (lVar8 != 0) {
            if (0 < *(int *)(lVar8 + 0x18)) {
              iStack_b4 = 0;
              uVar17 = 0;
              do {
                plVar15 = *(long **)(param_1 + 0x20);
                if (plVar15 == (long *)0x0) goto LAB_00951658;
                lVar9 = *plVar15;
                if ((ulong)*(ushort *)(lVar9 + 0x12a) != 0) {
                  uVar13 = 0;
                  piVar14 = (int *)(*(long *)(lVar9 + 0xb0) + 8);
                  do {
                    if (*(long *)(piVar14 + -2) ==
                        _MG_BlocksEngine2_Block_I_BE2_Block_TypeInfo_12d4dd8) {
                      puVar4 = (undefined8 *)(lVar9 + (long)(*piVar14 + 4) * 0x10 + 0x138);
                      goto LAB_00950828;
                    }
                    uVar13 = uVar13 + 1;
                    piVar14 = piVar14 + 4;
                  } while (uVar13 < *(ushort *)(lVar9 + 0x12a));
                }
                puVar4 = (undefined8 *)
                         native_sub_3c9b34(plVar15,
                                           _MG_BlocksEngine2_Block_I_BE2_Block_TypeInfo_12d4dd8,4);
LAB_00950828:
                lVar9 = (*(code *)*puVar4)(plVar15,puVar4[1]);
                if (lVar9 == 0) goto LAB_00951658;
                uVar5 = native_System_Object__GetType_adb48c(lVar9,0);
                uVar3 = _BE2_Ins_DefineFunction_var_12d12f8;
                if (((*(byte *)(_System_Type_TypeInfo_12d6340 + 0x133) >> 2 & 1) != 0) &&
                   (*(int *)(_System_Type_TypeInfo_12d6340 + 0xe0) == 0)) {
                  native_sub_4327ec(_System_Type_TypeInfo_12d6340);
                }
                uVar3 = native_System_Type__GetTypeFromHandle_b0fb24(uVar3,0);
                uVar13 = native_System_Type__op_Inequality_b118e0(uVar5,uVar3,0);
                lVar9 = (long)(int)uVar17;
                if ((uVar13 & 1) != 0) {
                  if (*(uint *)(lVar8 + 0x18) <= uVar17) goto LAB_0095165c;
                  plVar15 = *(long **)(lVar8 + lVar9 * 8 + 0x20);
                  if (plVar15 == (long *)0x0) goto LAB_00951658;
                  lVar10 = *plVar15;
                  if ((ulong)*(ushort *)(lVar10 + 0x12a) != 0) {
                    uVar13 = 0;
                    piVar14 = (int *)(*(long *)(lVar10 + 0xb0) + 8);
                    do {
                      if (*(long *)(piVar14 + -2) ==
                          _MG_BlocksEngine2_Block_I_BE2_BlockSection_TypeInfo_12d4de8) {
                        puVar4 = (undefined8 *)(lVar10 + (long)(*piVar14 + 1) * 0x10 + 0x138);
                        goto LAB_0095091c;
                      }
                      uVar13 = uVar13 + 1;
                      piVar14 = piVar14 + 4;
                    } while (uVar13 < *(ushort *)(lVar10 + 0x12a));
                  }
                  puVar4 = (undefined8 *)
                           native_sub_3c9b34(plVar15,
                                             _MG_BlocksEngine2_Block_I_BE2_BlockSection_TypeInfo_12d4de8
                                             ,1);
LAB_0095091c:
                  plVar15 = (long *)(*(code *)*puVar4)(plVar15,puVar4[1]);
                  if (plVar15 == (long *)0x0) goto LAB_00951658;
                  lVar10 = *plVar15;
                  if ((ulong)*(ushort *)(lVar10 + 0x12a) != 0) {
                    uVar13 = 0;
                    piVar14 = (int *)(*(long *)(lVar10 + 0xb0) + 8);
                    do {
                      if (*(long *)(piVar14 + -2) ==
                          _MG_BlocksEngine2_Block_I_BE2_BlockSectionHeader_TypeInfo_12d4df8) {
                        puVar4 = (undefined8 *)(lVar10 + (long)(*piVar14 + 2) * 0x10 + 0x138);
                        goto LAB_00950990;
                      }
                      uVar13 = uVar13 + 1;
                      piVar14 = piVar14 + 4;
                    } while (uVar13 < *(ushort *)(lVar10 + 0x12a));
                  }
                  puVar4 = (undefined8 *)
                           native_sub_3c9b34(plVar15,
                                             _MG_BlocksEngine2_Block_I_BE2_BlockSectionHeader_TypeInfo_12d4df8
                                             ,2);
LAB_00950990:
                  lVar10 = (*(code *)*puVar4)(plVar15,puVar4[1]);
                  if (lVar10 == 0) goto LAB_00951658;
                  if (0 < *(int *)(lVar10 + 0x18)) {
                    uVar18 = 0;
                    do {
                      if ((*(long *)(param_1 + 0x28) == 0) ||
                         (lVar16 = *(long *)(*(long *)(param_1 + 0x28) + 0x28), lVar16 == 0))
                      goto LAB_00951658;
                      if (*(uint *)(lVar16 + 0x18) <= uVar17) {
                        native_System_ThrowHelper__ThrowArgumentOutOfRangeException_9fe0f4(0);
                      }
                      lVar16 = *(long *)(*(long *)(lVar16 + 0x10) + lVar9 * 8 + 0x20);
                      if ((lVar16 == 0) || (lVar16 = *(long *)(lVar16 + 0x18), lVar16 == 0))
                      goto LAB_00951658;
                      if (*(uint *)(lVar16 + 0x18) <= uVar18) {
                        native_System_ThrowHelper__ThrowArgumentOutOfRangeException_9fe0f4(0);
                      }
                      lVar16 = *(long *)(*(long *)(lVar16 + 0x10) + (long)(int)uVar18 * 8 + 0x20);
                      if (lVar16 == 0) goto LAB_00951658;
                      lVar19 = (long)(int)uVar18;
                      if (*(char *)(lVar16 + 0x10) == '\0') {
                        if (*(uint *)(lVar10 + 0x18) <= uVar18) goto LAB_0095165c;
                        puVar4 = (undefined8 *)(lVar10 + lVar19 * 8 + 0x20);
                        plVar15 = (long *)*puVar4;
                        if (plVar15 == (long *)0x0) goto LAB_00951658;
                        lVar11 = *plVar15;
                        if ((ulong)*(ushort *)(lVar11 + 0x12a) != 0) {
                          uVar13 = 0;
                          piVar14 = (int *)(*(long *)(lVar11 + 0xb0) + 8);
                          do {
                            if (*(long *)(piVar14 + -2) ==
                                _MG_BlocksEngine2_Block_I_BE2_BlockSectionHeaderInput_TypeInfo_12d4e00
                               ) {
                              puVar7 = (undefined8 *)(lVar11 + (long)*piVar14 * 0x10 + 0x138);
                              goto LAB_00950bfc;
                            }
                            uVar13 = uVar13 + 1;
                            piVar14 = piVar14 + 4;
                          } while (uVar13 < *(ushort *)(lVar11 + 0x12a));
                        }
                        puVar7 = (undefined8 *)
                                 native_sub_3c9b34(plVar15,
                                                  _MG_BlocksEngine2_Block_I_BE2_BlockSectionHeaderInput_TypeInfo_12d4e00
                                                  ,0);
LAB_00950bfc:
                        uVar3 = (*(code *)*puVar7)(plVar15,puVar7[1]);
                        lVar11 = native_MG_BlocksEngine2_Utils_BE2_InputField__GetBE2Component_601c18
                                           (uVar3,0);
                        if (*(uint *)(lVar10 + 0x18) <= uVar18) goto LAB_0095165c;
                        plVar15 = (long *)*puVar4;
                        if (plVar15 == (long *)0x0) goto LAB_00951658;
                        lVar12 = *plVar15;
                        if ((ulong)*(ushort *)(lVar12 + 0x12a) != 0) {
                          uVar13 = 0;
                          piVar14 = (int *)(*(long *)(lVar12 + 0xb0) + 8);
                          do {
                            if (*(long *)(piVar14 + -2) ==
                                _MG_BlocksEngine2_Block_I_BE2_BlockSectionHeaderInput_TypeInfo_12d4e00
                               ) {
                              puVar4 = (undefined8 *)(lVar12 + (long)*piVar14 * 0x10 + 0x138);
                              goto LAB_00950c84;
                            }
                            uVar13 = uVar13 + 1;
                            piVar14 = piVar14 + 4;
                          } while (uVar13 < *(ushort *)(lVar12 + 0x12a));
                        }
                        puVar4 = (undefined8 *)
                                 native_sub_3c9b34(plVar15,
                                                  _MG_BlocksEngine2_Block_I_BE2_BlockSectionHeaderInput_TypeInfo_12d4e00
                                                  ,0);
LAB_00950c84:
                        uVar3 = (*(code *)*puVar4)(plVar15,puVar4[1]);
                        lVar12 = native_MG_BlocksEngine2_Utils_BE2_Dropdown__GetBE2Component_566f34
                                           (uVar3,0);
                        if ((lVar11 == 0) || (*(char *)(lVar11 + 0x28) != '\0')) {
                          if ((lVar12 != 0) && (*(char *)(lVar12 + 0x28) == '\0')) {
                            uVar2 = native_MG_BlocksEngine2_Utils_BE2_Dropdown__GetIndexOf_58082c
                                              (lVar12,*(undefined8 *)(lVar16 + 0x18),0);
                            native_MG_BlocksEngine2_Utils_BE2_Dropdown__set_value_580a48
                                      (lVar12,uVar2,0);
                          }
                        }
                        else {
                          native_MG_BlocksEngine2_Utils_BE2_InputField__set_text_6024ec
                                    (lVar11,*(undefined8 *)(lVar16 + 0x18),0);
                        }
                      }
                      else {
                        uVar3 = *(undefined8 *)(lVar16 + 0x20);
                        uVar5 = *(undefined8 *)(param_1 + 0x30);
                        if (((*(byte *)(
                                       _MG_BlocksEngine2_Serializer_BE2_BlocksSerializer_TypeInfo_12d3998
                                       + 0x133) >> 2 & 1) != 0) &&
                           (*(int *)(
                                    _MG_BlocksEngine2_Serializer_BE2_BlocksSerializer_TypeInfo_12d3998
                                    + 0xe0) == 0)) {
                          native_sub_4327ec();
                        }
                        plVar15 = (long *)native_MG_BlocksEngine2_Serializer_BE2_BlocksSerializer__SerializableToBlock_56b2c8
                                                    (uVar3,uVar5,0);
                        if (plVar15 == (long *)0x0) goto LAB_00951658;
                        lVar11 = *plVar15;
                        if ((ulong)*(ushort *)(lVar11 + 0x12a) != 0) {
                          uVar13 = 0;
                          piVar14 = (int *)(*(long *)(lVar11 + 0xb0) + 8);
                          do {
                            if (*(long *)(piVar14 + -2) ==
                                _MG_BlocksEngine2_Block_I_BE2_Block_TypeInfo_12d4dd8) {
                              puVar4 = (undefined8 *)(lVar11 + (long)(*piVar14 + 4) * 0x10 + 0x138);
                              goto LAB_00950b3c;
                            }
                            uVar13 = uVar13 + 1;
                            piVar14 = piVar14 + 4;
                          } while (uVar13 < *(ushort *)(lVar11 + 0x12a));
                        }
                        puVar4 = (undefined8 *)
                                 native_sub_3c9b34(plVar15,
                                                  _MG_BlocksEngine2_Block_I_BE2_Block_TypeInfo_12d4dd8
                                                  ,4);
LAB_00950b3c:
                        lVar11 = (*(code *)*puVar4)(plVar15,puVar4[1]);
                        if (lVar11 == 0) goto LAB_00951658;
                        uVar5 = native_System_Object__GetType_adb48c(lVar11,0);
                        uVar3 = _BE2_Op_FunctionLocalVariable_var_12d1308;
                        if (((*(byte *)(_System_Type_TypeInfo_12d6340 + 0x133) >> 2 & 1) != 0) &&
                           (*(int *)(_System_Type_TypeInfo_12d6340 + 0xe0) == 0)) {
                          native_sub_4327ec(_System_Type_TypeInfo_12d6340);
                        }
                        uVar3 = native_System_Type__GetTypeFromHandle_b0fb24(uVar3,0);
                        uVar13 = native_System_Type__op_Equality_b117c4(uVar5,uVar3,0);
                        if ((uVar13 & 1) != 0) {
                          lVar11 = *plVar15;
                          if ((ulong)*(ushort *)(lVar11 + 0x12a) != 0) {
                            uVar13 = 0;
                            piVar14 = (int *)(*(long *)(lVar11 + 0xb0) + 8);
                            do {
                              if (*(long *)(piVar14 + -2) ==
                                  _MG_BlocksEngine2_Block_I_BE2_Block_TypeInfo_12d4dd8) {
                                puVar4 = (undefined8 *)(lVar11 + (long)*piVar14 * 0x10 + 0x138);
                                goto LAB_00950ce4;
                              }
                              uVar13 = uVar13 + 1;
                              piVar14 = piVar14 + 4;
                            } while (uVar13 < *(ushort *)(lVar11 + 0x12a));
                          }
                          puVar4 = (undefined8 *)
                                   native_sub_3c9b34(plVar15,
                                                  _MG_BlocksEngine2_Block_I_BE2_Block_TypeInfo_12d4dd8
                                                  ,0);
LAB_00950ce4:
                          lVar11 = (*(code *)*puVar4)(plVar15,puVar4[1]);
                          if ((lVar11 == 0) ||
                             (plVar6 = (long *)native_UnityEngine_Component__GetComponentInChildren_Animation__49db98
                                                         (lVar11,
                                                  _Method_UnityEngine_Component_GetComponentInChildren_TMP_Text____12e2c98
                                                  ), plVar6 == (long *)0x0)) goto LAB_00951658;
                          (**(code **)(*plVar6 + 0x558))
                                    (plVar6,*(undefined8 *)(lVar16 + 0x18),
                                     *(undefined8 *)(*plVar6 + 0x560));
                        }
                        lVar16 = native_MG_BlocksEngine2_DragDrop_BE2_DragDropManager__get_Instance_576470
                                           (0);
                        if (*(uint *)(lVar10 + 0x18) <= uVar18) goto LAB_0095165c;
                        plVar6 = *(long **)(lVar10 + lVar19 * 8 + 0x20);
                        if (plVar6 == (long *)0x0) goto LAB_00951658;
                        lVar11 = *plVar6;
                        if ((ulong)*(ushort *)(lVar11 + 0x12a) != 0) {
                          uVar13 = 0;
                          piVar14 = (int *)(*(long *)(lVar11 + 0xb0) + 8);
                          do {
                            if (*(long *)(piVar14 + -2) ==
                                _MG_BlocksEngine2_Block_I_BE2_BlockSectionHeaderInput_TypeInfo_12d4e00
                               ) {
                              puVar4 = (undefined8 *)(lVar11 + (long)*piVar14 * 0x10 + 0x138);
                              goto LAB_00950d9c;
                            }
                            uVar13 = uVar13 + 1;
                            piVar14 = piVar14 + 4;
                          } while (uVar13 < *(ushort *)(lVar11 + 0x12a));
                        }
                        puVar4 = (undefined8 *)
                                 native_sub_3c9b34(plVar6,
                                                  _MG_BlocksEngine2_Block_I_BE2_BlockSectionHeaderInput_TypeInfo_12d4e00
                                                  ,0);
LAB_00950d9c:
                        lVar11 = (*(code *)*puVar4)(plVar6,puVar4[1]);
                        if ((lVar11 == 0) ||
                           (uVar3 = native_UnityEngine_Component__GetComponent_ActiveAnimation__49daec
                                              (lVar11,
                                               _Method_UnityEngine_Component_GetComponent_I_BE2_Spot____12e2a68
                                              ), lVar16 == 0)) goto LAB_00951658;
                        *(undefined8 *)(lVar16 + 0x38) = uVar3;
                        native_sub_4326e0((undefined8 *)(lVar16 + 0x38),uVar3);
                        lVar16 = *plVar15;
                        if ((ulong)*(ushort *)(lVar16 + 0x12a) != 0) {
                          uVar13 = 0;
                          piVar14 = (int *)(*(long *)(lVar16 + 0xb0) + 8);
                          do {
                            if (*(long *)(piVar14 + -2) ==
                                _MG_BlocksEngine2_Block_I_BE2_Block_TypeInfo_12d4dd8) {
                              puVar4 = (undefined8 *)(lVar16 + (long)*piVar14 * 0x10 + 0x138);
                              goto LAB_00950e24;
                            }
                            uVar13 = uVar13 + 1;
                            piVar14 = piVar14 + 4;
                          } while (uVar13 < *(ushort *)(lVar16 + 0x12a));
                        }
                        puVar4 = (undefined8 *)
                                 native_sub_3c9b34(plVar15,
                                                  _MG_BlocksEngine2_Block_I_BE2_Block_TypeInfo_12d4dd8
                                                  ,0);
LAB_00950e24:
                        lVar16 = (*(code *)*puVar4)(plVar15,puVar4[1]);
                        if ((lVar16 == 0) ||
                           (plVar6 = (long *)native_UnityEngine_Component__GetComponent_ActiveAnimation__49daec
                                                       (lVar16,
                                                  _Method_UnityEngine_Component_GetComponent_I_BE2_Drag____12e2a48
                                                  ), plVar6 == (long *)0x0)) goto LAB_00951658;
                        lVar16 = *plVar6;
                        if ((ulong)*(ushort *)(lVar16 + 0x12a) != 0) {
                          uVar13 = 0;
                          piVar14 = (int *)(*(long *)(lVar16 + 0xb0) + 8);
                          do {
                            if (*(long *)(piVar14 + -2) ==
                                _MG_BlocksEngine2_DragDrop_I_BE2_Drag_TypeInfo_12d4e18) {
                              puVar4 = (undefined8 *)(lVar16 + (long)*piVar14 * 0x10 + 0x138);
                              goto LAB_00950ea8;
                            }
                            uVar13 = uVar13 + 1;
                            piVar14 = piVar14 + 4;
                          } while (uVar13 < *(ushort *)(lVar16 + 0x12a));
                        }
                        puVar4 = (undefined8 *)
                                 native_sub_3c9b34(plVar6,
                                                  _MG_BlocksEngine2_DragDrop_I_BE2_Drag_TypeInfo_12d4e18
                                                  ,0);
LAB_00950ea8:
                        (*(code *)*puVar4)(plVar6,puVar4[1]);
                        lVar16 = *plVar15;
                        if ((ulong)*(ushort *)(lVar16 + 0x12a) != 0) {
                          uVar13 = 0;
                          piVar14 = (int *)(*(long *)(lVar16 + 0xb0) + 8);
                          do {
                            if (*(long *)(piVar14 + -2) ==
                                _MG_BlocksEngine2_Block_I_BE2_Block_TypeInfo_12d4dd8) {
                              puVar4 = (undefined8 *)(lVar16 + (long)*piVar14 * 0x10 + 0x138);
                              goto LAB_00950f08;
                            }
                            uVar13 = uVar13 + 1;
                            piVar14 = piVar14 + 4;
                          } while (uVar13 < *(ushort *)(lVar16 + 0x12a));
                        }
                        puVar4 = (undefined8 *)
                                 native_sub_3c9b34(plVar15,
                                                  _MG_BlocksEngine2_Block_I_BE2_Block_TypeInfo_12d4dd8
                                                  ,0);
LAB_00950f08:
                        lVar16 = (*(code *)*puVar4)(plVar15,puVar4[1]);
                        if ((lVar16 == 0) ||
                           (plVar15 = (long *)native_UnityEngine_Component__GetComponent_ActiveAnimation__49daec
                                                        (lVar16,
                                                  _Method_UnityEngine_Component_GetComponent_I_BE2_Drag____12e2a48
                                                  ), plVar15 == (long *)0x0)) goto LAB_00951658;
                        lVar16 = *plVar15;
                        if ((ulong)*(ushort *)(lVar16 + 0x12a) != 0) {
                          uVar13 = 0;
                          piVar14 = (int *)(*(long *)(lVar16 + 0xb0) + 8);
                          do {
                            if (*(long *)(piVar14 + -2) ==
                                _MG_BlocksEngine2_DragDrop_I_BE2_Drag_TypeInfo_12d4e18) {
                              puVar4 = (undefined8 *)(lVar16 + (long)(*piVar14 + 3) * 0x10 + 0x138);
                              goto LAB_00950f90;
                            }
                            uVar13 = uVar13 + 1;
                            piVar14 = piVar14 + 4;
                          } while (uVar13 < *(ushort *)(lVar16 + 0x12a));
                        }
                        puVar4 = (undefined8 *)
                                 native_sub_3c9b34(plVar15,
                                                  _MG_BlocksEngine2_DragDrop_I_BE2_Drag_TypeInfo_12d4e18
                                                  ,3);
LAB_00950f90:
                        (*(code *)*puVar4)(plVar15,puVar4[1]);
                      }
                      if (*(long *)(param_1 + 0x28) == 0) goto LAB_00951658;
                      uVar13 = native_System_String__op_Equality_afc18c
                                         (*(undefined8 *)(*(long *)(param_1 + 0x28) + 0x48),
                                          _StringLiteral_true_12f6790,0);
                      if ((uVar13 & 1) != 0) {
                        plVar15 = *(long **)(param_1 + 0x20);
                        if (plVar15 == (long *)0x0) goto LAB_00951658;
                        lVar16 = *plVar15;
                        if ((ulong)*(ushort *)(lVar16 + 0x12a) != 0) {
                          uVar13 = 0;
                          piVar14 = (int *)(*(long *)(lVar16 + 0xb0) + 8);
                          do {
                            if (*(long *)(piVar14 + -2) ==
                                _MG_BlocksEngine2_Block_I_BE2_Block_TypeInfo_12d4dd8) {
                              puVar4 = (undefined8 *)(lVar16 + (long)*piVar14 * 0x10 + 0x138);
                              goto LAB_0095101c;
                            }
                            uVar13 = uVar13 + 1;
                            piVar14 = piVar14 + 4;
                          } while (uVar13 < *(ushort *)(lVar16 + 0x12a));
                        }
                        puVar4 = (undefined8 *)
                                 native_sub_3c9b34(plVar15,
                                                  _MG_BlocksEngine2_Block_I_BE2_Block_TypeInfo_12d4dd8
                                                  ,0);
LAB_0095101c:
                        lVar16 = (*(code *)*puVar4)(plVar15,puVar4[1]);
                        if ((((lVar16 == 0) ||
                             (lVar16 = native_UnityEngine_Transform__GetChild_772ef0(lVar16,0,0),
                             lVar16 == 0)) ||
                            (lVar16 = native_UnityEngine_Transform__GetChild_772ef0(lVar16,0,0),
                            lVar16 == 0)) ||
                           (lVar16 = native_UnityEngine_Transform__GetChild_772ef0(lVar16,0,0),
                           lVar16 == 0)) goto LAB_00951658;
                        plVar15 = (long *)native_UnityEngine_Component__GetComponent_ActiveAnimation__49daec
                                                    (lVar16,
                                                  _Method_UnityEngine_Component_GetComponent_TMP_Text____12e2b38
                                                  );
                        if ((*(long *)(param_1 + 0x28) == 0) || (plVar15 == (long *)0x0))
                        goto LAB_00951658;
                        (**(code **)(*plVar15 + 0x558))
                                  (plVar15,*(undefined8 *)(*(long *)(param_1 + 0x28) + 0x38),
                                   *(undefined8 *)(*plVar15 + 0x560));
                      }
                      if (*(uint *)(lVar10 + 0x18) <= uVar18) goto LAB_0095165c;
                      plVar15 = *(long **)(lVar10 + lVar19 * 8 + 0x20);
                      if (plVar15 == (long *)0x0) goto LAB_00951658;
                      lVar16 = *plVar15;
                      if ((ulong)*(ushort *)(lVar16 + 0x12a) != 0) {
                        uVar13 = 0;
                        piVar14 = (int *)(*(long *)(lVar16 + 0xb0) + 8);
                        do {
                          if (*(long *)(piVar14 + -2) ==
                              _MG_BlocksEngine2_Block_I_BE2_BlockSectionHeaderInput_TypeInfo_12d4e00
                             ) {
                            puVar4 = (undefined8 *)(lVar16 + (long)(*piVar14 + 5) * 0x10 + 0x138);
                            goto LAB_0095110c;
                          }
                          uVar13 = uVar13 + 1;
                          piVar14 = piVar14 + 4;
                        } while (uVar13 < *(ushort *)(lVar16 + 0x12a));
                      }
                      puVar4 = (undefined8 *)
                               native_sub_3c9b34(plVar15,
                                                 _MG_BlocksEngine2_Block_I_BE2_BlockSectionHeaderInput_TypeInfo_12d4e00
                                                 ,5);
LAB_0095110c:
                      (*(code *)*puVar4)(plVar15,puVar4[1]);
                      uVar18 = uVar18 + 1;
                    } while ((int)uVar18 < *(int *)(lVar10 + 0x18));
                  }
                }
                if (*(uint *)(lVar8 + 0x18) <= uVar17) {
LAB_0095165c:
                  uVar3 = native_sub_43283c();
                    /* WARNING: Subroutine does not return */
                  native_sub_4327dc(uVar3,0);
                }
                puVar4 = (undefined8 *)(lVar8 + lVar9 * 8 + 0x20);
                plVar15 = (long *)*puVar4;
                if (plVar15 == (long *)0x0) goto LAB_00951658;
                lVar10 = *plVar15;
                if ((ulong)*(ushort *)(lVar10 + 0x12a) != 0) {
                  uVar13 = 0;
                  piVar14 = (int *)(*(long *)(lVar10 + 0xb0) + 8);
                  do {
                    if (*(long *)(piVar14 + -2) ==
                        _MG_BlocksEngine2_Block_I_BE2_BlockSection_TypeInfo_12d4de8) {
                      puVar7 = (undefined8 *)(lVar10 + (long)(*piVar14 + 2) * 0x10 + 0x138);
                      goto LAB_009511a8;
                    }
                    uVar13 = uVar13 + 1;
                    piVar14 = piVar14 + 4;
                  } while (uVar13 < *(ushort *)(lVar10 + 0x12a));
                }
                puVar7 = (undefined8 *)
                         native_sub_3c9b34(plVar15,
                                           _MG_BlocksEngine2_Block_I_BE2_BlockSection_TypeInfo_12d4de8
                                           ,2);
LAB_009511a8:
                plVar15 = (long *)(*(code *)*puVar7)(plVar15,puVar7[1]);
                if (plVar15 != (long *)0x0) {
                  if ((*(long *)(param_1 + 0x28) == 0) ||
                     (lVar10 = *(long *)(*(long *)(param_1 + 0x28) + 0x28), lVar10 == 0))
                  goto LAB_00951658;
                  if (*(uint *)(lVar10 + 0x18) <= uVar17) {
                    native_System_ThrowHelper__ThrowArgumentOutOfRangeException_9fe0f4(0);
                  }
                  lVar9 = *(long *)(*(long *)(lVar10 + 0x10) + lVar9 * 8 + 0x20);
                  if ((lVar9 == 0) || (lVar9 = *(long *)(lVar9 + 0x10), lVar9 == 0))
                  goto LAB_00951658;
                  native_System_Collections_Generic_List_BE2_Op_FunctionLocalVariable___GetEnumerator_d414fc
                            (&uStack_a0,lVar9,
                             _Method_System_Collections_Generic_List_BE2_SerializableBlock__GetEnumerator___12dc498
                            );
                  uStack_70 = uStack_90;
                  uStack_78 = uStack_98;
                  uStack_80 = uStack_a0;
                  while (uVar13 = native_System_Collections_Generic_List_Enumerator_BE2_Op_FunctionLocalVariable___MoveNext_7e8f30
                                            (&uStack_80,
                                             _Method_System_Collections_Generic_List_Enumerator_BE2_SerializableBlock__MoveNext___12da3b0
                                            ), uVar3 = uStack_70, (uVar13 & 1) != 0) {
                    uVar5 = *(undefined8 *)(param_1 + 0x30);
                    if (((*(byte *)(
                                   _MG_BlocksEngine2_Serializer_BE2_BlocksSerializer_TypeInfo_12d3998
                                   + 0x133) >> 2 & 1) != 0) &&
                       (*(int *)(_MG_BlocksEngine2_Serializer_BE2_BlocksSerializer_TypeInfo_12d3998
                                + 0xe0) == 0)) {
                      native_sub_4327ec();
                    }
                    plVar6 = (long *)native_MG_BlocksEngine2_Serializer_BE2_BlocksSerializer__SerializableToBlock_56b2c8
                                               (uVar3,uVar5,0);
                    if (plVar6 == (long *)0x0) {
                    /* WARNING: Subroutine does not return */
                      native_sub_432810();
                    }
                    lVar9 = *plVar6;
                    if ((ulong)*(ushort *)(lVar9 + 0x12a) != 0) {
                      uVar13 = 0;
                      piVar14 = (int *)(*(long *)(lVar9 + 0xb0) + 8);
                      do {
                        if (*(long *)(piVar14 + -2) ==
                            _MG_BlocksEngine2_Block_I_BE2_Block_TypeInfo_12d4dd8) {
                          puVar7 = (undefined8 *)(lVar9 + (long)*piVar14 * 0x10 + 0x138);
                          goto LAB_009512c4;
                        }
                        uVar13 = uVar13 + 1;
                        piVar14 = piVar14 + 4;
                      } while (uVar13 < *(ushort *)(lVar9 + 0x12a));
                    }
                    puVar7 = (undefined8 *)
                             native_sub_3c9b34(plVar6,
                                               _MG_BlocksEngine2_Block_I_BE2_Block_TypeInfo_12d4dd8,
                                               0);
LAB_009512c4:
                    lVar9 = (*(code *)*puVar7)(plVar6,puVar7[1]);
                    lVar10 = *plVar15;
                    if ((ulong)*(ushort *)(lVar10 + 0x12a) != 0) {
                      uVar13 = 0;
                      piVar14 = (int *)(*(long *)(lVar10 + 0xb0) + 8);
                      do {
                        if (*(long *)(piVar14 + -2) ==
                            _MG_BlocksEngine2_Block_I_BE2_BlockSectionBody_TypeInfo_12d4df0) {
                          puVar7 = (undefined8 *)(lVar10 + (long)*piVar14 * 0x10 + 0x138);
                          goto LAB_00951330;
                        }
                        uVar13 = uVar13 + 1;
                        piVar14 = piVar14 + 4;
                      } while (uVar13 < *(ushort *)(lVar10 + 0x12a));
                    }
                    puVar7 = (undefined8 *)
                             native_sub_3c9b34(plVar15,
                                               _MG_BlocksEngine2_Block_I_BE2_BlockSectionBody_TypeInfo_12d4df0
                                               ,0);
LAB_00951330:
                    uVar3 = (*(code *)*puVar7)(plVar15,puVar7[1]);
                    if (lVar9 == 0) {
                    /* WARNING: Subroutine does not return */
                      native_sub_432810(uVar3,uVar3);
                    }
                    native_UnityEngine_Transform__SetParent_77208c(lVar9,uVar3,0);
                  }
                  aiStack_88[iStack_b4] = 0x26c;
                  iVar1 = aiStack_88[1];
                  iStack_b4 = aiStack_88[1] + 1;
                  aiStack_88[1] = iStack_b4;
                  native_System_Collections_Generic_List_Enumerator_BE2_Op_FunctionLocalVariable___Dispose_7e8f2c
                            (&uStack_80,
                             _Method_System_Collections_Generic_List_Enumerator_BE2_SerializableBlock__Dispose___12da3a8
                            );
                  if (iStack_b4 == 0) {
                    iStack_b4 = 0;
                  }
                  else if (aiStack_88[iVar1] == 0x26c) {
                    iStack_b4 = iVar1;
                    aiStack_88[1] = iVar1;
                  }
                }
                if (*(uint *)(lVar8 + 0x18) <= uVar17) goto LAB_0095165c;
                plVar15 = (long *)*puVar4;
                if (plVar15 == (long *)0x0) goto LAB_00951658;
                lVar9 = *plVar15;
                if ((ulong)*(ushort *)(lVar9 + 0x12a) != 0) {
                  uVar13 = 0;
                  piVar14 = (int *)(*(long *)(lVar9 + 0xb0) + 8);
                  do {
                    if (*(long *)(piVar14 + -2) ==
                        _MG_BlocksEngine2_Block_I_BE2_BlockSection_TypeInfo_12d4de8) {
                      puVar7 = (undefined8 *)(lVar9 + (long)(*piVar14 + 1) * 0x10 + 0x138);
                      goto LAB_00951424;
                    }
                    uVar13 = uVar13 + 1;
                    piVar14 = piVar14 + 4;
                  } while (uVar13 < *(ushort *)(lVar9 + 0x12a));
                }
                puVar7 = (undefined8 *)
                         native_sub_3c9b34(plVar15,
                                           _MG_BlocksEngine2_Block_I_BE2_BlockSection_TypeInfo_12d4de8
                                           ,1);
LAB_00951424:
                plVar15 = (long *)(*(code *)*puVar7)(plVar15,puVar7[1]);
                if (plVar15 == (long *)0x0) goto LAB_00951658;
                lVar9 = *plVar15;
                if ((ulong)*(ushort *)(lVar9 + 0x12a) != 0) {
                  uVar13 = 0;
                  piVar14 = (int *)(*(long *)(lVar9 + 0xb0) + 8);
                  do {
                    if (*(long *)(piVar14 + -2) ==
                        _MG_BlocksEngine2_Block_I_BE2_BlockSectionHeader_TypeInfo_12d4df8) {
                      puVar7 = (undefined8 *)(lVar9 + (long)(*piVar14 + 6) * 0x10 + 0x138);
                      goto LAB_00951498;
                    }
                    uVar13 = uVar13 + 1;
                    piVar14 = piVar14 + 4;
                  } while (uVar13 < *(ushort *)(lVar9 + 0x12a));
                }
                puVar7 = (undefined8 *)
                         native_sub_3c9b34(plVar15,
                                           _MG_BlocksEngine2_Block_I_BE2_BlockSectionHeader_TypeInfo_12d4df8
                                           ,6);
LAB_00951498:
                (*(code *)*puVar7)(plVar15,puVar7[1]);
                if (*(uint *)(lVar8 + 0x18) <= uVar17) goto LAB_0095165c;
                plVar15 = (long *)*puVar4;
                if (plVar15 == (long *)0x0) goto LAB_00951658;
                lVar9 = *plVar15;
                if ((ulong)*(ushort *)(lVar9 + 0x12a) != 0) {
                  uVar13 = 0;
                  piVar14 = (int *)(*(long *)(lVar9 + 0xb0) + 8);
                  do {
                    if (*(long *)(piVar14 + -2) ==
                        _MG_BlocksEngine2_Block_I_BE2_BlockSection_TypeInfo_12d4de8) {
                      puVar4 = (undefined8 *)(lVar9 + (long)(*piVar14 + 1) * 0x10 + 0x138);
                      goto LAB_00951518;
                    }
                    uVar13 = uVar13 + 1;
                    piVar14 = piVar14 + 4;
                  } while (uVar13 < *(ushort *)(lVar9 + 0x12a));
                }
                puVar4 = (undefined8 *)
                         native_sub_3c9b34(plVar15,
                                           _MG_BlocksEngine2_Block_I_BE2_BlockSection_TypeInfo_12d4de8
                                           ,1);
LAB_00951518:
                plVar15 = (long *)(*(code *)*puVar4)(plVar15,puVar4[1]);
                if (plVar15 == (long *)0x0) goto LAB_00951658;
                lVar9 = *plVar15;
                if ((ulong)*(ushort *)(lVar9 + 0x12a) != 0) {
                  uVar13 = 0;
                  piVar14 = (int *)(*(long *)(lVar9 + 0xb0) + 8);
                  do {
                    if (*(long *)(piVar14 + -2) ==
                        _MG_BlocksEngine2_Block_I_BE2_BlockSectionHeader_TypeInfo_12d4df8) {
                      puVar4 = (undefined8 *)(lVar9 + (long)(*piVar14 + 7) * 0x10 + 0x138);
                      goto LAB_0095158c;
                    }
                    uVar13 = uVar13 + 1;
                    piVar14 = piVar14 + 4;
                  } while (uVar13 < *(ushort *)(lVar9 + 0x12a));
                }
                puVar4 = (undefined8 *)
                         native_sub_3c9b34(plVar15,
                                           _MG_BlocksEngine2_Block_I_BE2_BlockSectionHeader_TypeInfo_12d4df8
                                           ,7);
LAB_0095158c:
                (*(code *)*puVar4)(plVar15,puVar4[1]);
                uVar17 = uVar17 + 1;
              } while ((int)uVar17 < *(int *)(lVar8 + 0x18));
            }
            *(undefined8 *)(param_1 + 0x18) = 0;
            native_sub_4326e0((undefined8 *)(param_1 + 0x18),0);
            *(undefined4 *)(param_1 + 0x10) = 2;
            return 1;
          }
        }
      }
LAB_00951658:
                    /* WARNING: Subroutine does not return */
      native_sub_432810();
    }
    uVar3 = 0;
    if (iVar1 == 0) {
      *(undefined4 *)(param_1 + 0x10) = 0xffffffff;
      uVar3 = native_sub_432808(_UnityEngine_WaitForEndOfFrame_TypeInfo_12d6738);
      native_UnityEngine_WaitForEndOfFrame___ctor_7775b8(uVar3,0);
      *(undefined8 *)(param_1 + 0x18) = uVar3;
      native_sub_4326e0(param_1 + 0x18,uVar3);
      uVar3 = 1;
      *(undefined4 *)(param_1 + 0x10) = 1;
    }
  }
  return uVar3;
}



/* MG_BlocksEngine2.Serializer.BE2_BlocksSerializer.<C_AddInputs>d__9$$System.Collections.Generic.IEnumerator<System.Object>.get_Current @ 0x95166c
 * Il2CppObject* MG_BlocksEngine2_Serializer_BE2_BlocksSerializer__C_AddInputs_d__9__System_Collections_Generic_IEnumerator_System_Object__get_Current (MG_BlocksEngine2_Serializer_BE2_BlocksSerializer__C_AddInputs_d__9_o* __this, const MethodInfo* method); */

/* MG_BlocksEngine2.Serializer.BE2_BlocksSerializer.<C_AddInputs>d__9$$System.Collections.Generic.IEnumerator<System.Object>.get_Current
   Il2CppObject*
   MG_BlocksEngine2_Serializer_BE2_BlocksSerializer__C_AddInputs_d__9__System_Collections_Generic_IEnumerator_System_Object__get_Current
   (MG_BlocksEngine2_Serializer_BE2_BlocksSerializer__C_AddInputs_d__9_o* __this, const MethodInfo*
   method); */

undefined8
native_MG_BlocksEngine2_Serializer_BE2_BlocksSerializer__C_AddInputs_d__9__System_Collections_Generic_IEnumerator_System_Object__get_Current_95166c
          (long param_1)

{
  return *(undefined8 *)(param_1 + 0x18);
}



/* MG_BlocksEngine2.Serializer.BE2_BlocksSerializer.<C_AddInputs>d__9$$System.Collections.IEnumerator.Reset @ 0x951674
 * void MG_BlocksEngine2_Serializer_BE2_BlocksSerializer__C_AddInputs_d__9__System_Collections_IEnumerator_Reset (MG_BlocksEngine2_Serializer_BE2_BlocksSerializer__C_AddInputs_d__9_o* __this, const MethodInfo* method); */

/* MG_BlocksEngine2.Serializer.BE2_BlocksSerializer.<C_AddInputs>d__9$$System.Collections.IEnumerator.Reset
   void 
   MG_BlocksEngine2_Serializer_BE2_BlocksSerializer__C_AddInputs_d__9__System_Collections_IEnumerator_Reset
   (MG_BlocksEngine2_Serializer_BE2_BlocksSerializer__C_AddInputs_d__9_o* __this, const MethodInfo*
   method); */

void native_MG_BlocksEngine2_Serializer_BE2_BlocksSerializer__C_AddInputs_d__9__System_Collections_IEnumerator_Reset_951674
               (void)

{
  undefined8 uVar1;
  undefined8 uVar2;
  
  native_sub_432740(&System_NotSupportedException_TypeInfo_12d5468);
  uVar1 = native_sub_432808();
  native_System_NotSupportedException___ctor_ad264c(uVar1,0);
  uVar2 = native_sub_432740(&
                            Method_MG_BlocksEngine2_Serializer_BE2_BlocksSerializer__C_AddInputs_d__9_System_Collections_IEnumerator_Reset___12e95f0
                           );
                    /* WARNING: Subroutine does not return */
  native_sub_4327dc(uVar1,uVar2);
}



/* MG_BlocksEngine2.Serializer.BE2_BlocksSerializer.<C_AddInputs>d__9$$System.Collections.IEnumerator.get_Current @ 0x9516b4
 * Il2CppObject* MG_BlocksEngine2_Serializer_BE2_BlocksSerializer__C_AddInputs_d__9__System_Collections_IEnumerator_get_Current (MG_BlocksEngine2_Serializer_BE2_BlocksSerializer__C_AddInputs_d__9_o* __this, const MethodInfo* method); */

/* MG_BlocksEngine2.Serializer.BE2_BlocksSerializer.<C_AddInputs>d__9$$System.Collections.IEnumerator.get_Current
   Il2CppObject*
   MG_BlocksEngine2_Serializer_BE2_BlocksSerializer__C_AddInputs_d__9__System_Collections_IEnumerator_get_Current
   (MG_BlocksEngine2_Serializer_BE2_BlocksSerializer__C_AddInputs_d__9_o* __this, const MethodInfo*
   method); */

undefined8
native_MG_BlocksEngine2_Serializer_BE2_BlocksSerializer__C_AddInputs_d__9__System_Collections_IEnumerator_get_Current_9516b4
          (long param_1)

{
  return *(undefined8 *)(param_1 + 0x18);
}


