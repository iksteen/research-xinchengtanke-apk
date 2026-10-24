/* ARM64 IL2CPP native pseudocode from Ghidra.
 * Recovered implementation, not original C# source.
 * Function boundaries follow the IL2CPP method address table. */


/* MG_BlocksEngine2.Environment.BE2_VerticalFunctionBlocksManager$$CreateFunctionBlock @ 0xdcef30
 * void MG_BlocksEngine2_Environment_BE2_VerticalFunctionBlocksManager__CreateFunctionBlock (MG_BlocksEngine2_Environment_BE2_VerticalFunctionBlocksManager_o* __this, System_Collections_Generic_List_DefineItem__o* items, const MethodInfo* method); */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* MG_BlocksEngine2.Environment.BE2_VerticalFunctionBlocksManager$$CreateFunctionBlock
   void MG_BlocksEngine2_Environment_BE2_VerticalFunctionBlocksManager__CreateFunctionBlock
   (MG_BlocksEngine2_Environment_BE2_VerticalFunctionBlocksManager_o* __this,
   System_Collections_Generic_List_DefineItem__o* items, const MethodInfo* method); */

void native_MG_BlocksEngine2_Environment_BE2_VerticalFunctionBlocksManager__CreateFunctionBlock_dcef30
               (undefined1 param_1 [16],undefined8 param_2,undefined8 param_3,undefined8 param_4,
               long *param_5,long param_6)

{
  long lVar1;
  long lVar2;
  long *plVar3;
  undefined8 uVar4;
  ulong uVar5;
  long lVar6;
  undefined8 uVar7;
  undefined8 *puVar8;
  long lVar9;
  ulong uVar10;
  ulong uVar11;
  int *piVar12;
  long lVar13;
  undefined8 uVar14;
  undefined8 uVar15;
  long lVar16;
  long *plVar17;
  undefined8 uVar18;
  undefined8 uVar19;
  undefined8 uStack_d8;
  undefined8 uStack_d0;
  long lStack_c8;
  undefined8 uStack_c0;
  undefined8 uStack_b8;
  long lStack_b0;
  int iStack_94;
  
  if ((bRam0000000001346e22 & 1) == 0) {
    native_sub_43273c(&Method_UnityEngine_Component_GetComponent_I_BE2_BlockLayout____12e2a10);
    native_sub_43273c(&Method_System_Linq_Enumerable_Count_string____12e4000);
    native_sub_43273c(&Method_System_Linq_Enumerable_Where_string____12e40e8);
    native_sub_43273c(&
                      Method_System_Collections_Generic_List_Enumerator_DefineItem__Dispose___12da420
                     );
    native_sub_43273c(&
                      Method_System_Collections_Generic_List_Enumerator_DefineItem__MoveNext___12da428
                     );
    native_sub_43273c(&
                      Method_System_Collections_Generic_List_Enumerator_DefineItem__get_Current___12da430
                     );
    native_sub_43273c(&Method_System_Func_string__bool___ctor___12db2c0);
    native_sub_43273c(&System_Func_string__bool__TypeInfo_12d2660);
    native_sub_43273c(&Method_UnityEngine_GameObject_GetComponentInChildren_TMP_Text____12e4b08);
    native_sub_43273c(&Method_UnityEngine_GameObject_GetComponent_BE2_Ins_DefineFunction____12e4928)
    ;
    native_sub_43273c(&MG_BlocksEngine2_Block_I_BE2_BlockLayout_TypeInfo_12d4de0);
    native_sub_43273c(&MG_BlocksEngine2_Block_I_BE2_BlockSectionHeader_TypeInfo_12d4df8);
    native_sub_43273c(&MG_BlocksEngine2_Block_I_BE2_BlockSection_TypeInfo_12d4de8);
    native_sub_43273c(&MG_BlocksEngine2_Environment_I_BE2_ProgrammingEnv_TypeInfo_12d4e38);
    native_sub_43273c(&Method_System_Collections_Generic_List_string__Add___12dcea0);
    native_sub_43273c(&Method_System_Collections_Generic_List_I_BE2_ProgrammingEnv__Find___12dc9f0);
    native_sub_43273c(&Method_System_Collections_Generic_List_DefineItem__GetEnumerator___12dc730);
    native_sub_43273c(&Method_System_Collections_Generic_List_string___ctor___12dce88);
    native_sub_43273c(&System_Collections_Generic_List_string__TypeInfo_12d2b60);
    native_sub_43273c(&Method_UnityEngine_Object_Instantiate_BE2_Ins_DefineFunction____12e5a80);
    native_sub_43273c(&Method_UnityEngine_Object_Instantiate_GameObject____12e5a88);
    native_sub_43273c(&UnityEngine_Object_TypeInfo_12d54e0);
    native_sub_43273c(&Method_System_Predicate_I_BE2_ProgrammingEnv___ctor___12ddaf8);
    native_sub_43273c(&System_Predicate_I_BE2_ProgrammingEnv__TypeInfo_12d2da0);
    native_sub_43273c(&
                      Method_MG_BlocksEngine2_Environment_BE2_VerticalFunctionBlocksManager___c__CreateFunctionBlock_b__0_0___12e96d0
                     );
    native_sub_43273c(&
                      Method_MG_BlocksEngine2_Environment_BE2_VerticalFunctionBlocksManager___c__DisplayClass0_0__CreateFunctionBlock_b__1___12e96d8
                     );
    native_sub_43273c(&
                      MG_BlocksEngine2_Environment_BE2_VerticalFunctionBlocksManager___c__DisplayClass0_0_TypeInfo_12d70a8
                     );
    native_sub_43273c(&
                      MG_BlocksEngine2_Environment_BE2_VerticalFunctionBlocksManager___c_TypeInfo_12d70a0
                     );
    native_sub_43273c(&StringLiteral_label_12f5370);
    native_sub_43273c(&StringLiteral___12eb590);
    native_sub_43273c(&StringLiteral____12eacb0);
    bRam0000000001346e22 = 1;
  }
  uStack_c0 = 0;
  uStack_b8 = 0;
  lStack_b0 = 0;
  iStack_94 = 0;
  lVar2 = native_MG_BlocksEngine2_Core_BE2_ExecutionManager__get_Instance_564464(0);
  if (lVar2 != 0) {
    lVar2 = *(long *)(lVar2 + 0x20);
    if (((*(byte *)(
                   _MG_BlocksEngine2_Environment_BE2_VerticalFunctionBlocksManager___c_TypeInfo_12d70a0
                   + 0x133) >> 2 & 1) != 0) &&
       (*(int *)(
                _MG_BlocksEngine2_Environment_BE2_VerticalFunctionBlocksManager___c_TypeInfo_12d70a0
                + 0xe0) == 0)) {
      native_sub_4327ec();
    }
    puVar8 = *(undefined8 **)
              (_MG_BlocksEngine2_Environment_BE2_VerticalFunctionBlocksManager___c_TypeInfo_12d70a0
              + 0xb8);
    lVar13 = puVar8[1];
    if (lVar13 == 0) {
      if (((*(byte *)(
                     _MG_BlocksEngine2_Environment_BE2_VerticalFunctionBlocksManager___c_TypeInfo_12d70a0
                     + 0x133) >> 2 & 1) != 0) &&
         (*(int *)(
                  _MG_BlocksEngine2_Environment_BE2_VerticalFunctionBlocksManager___c_TypeInfo_12d70a0
                  + 0xe0) == 0)) {
        native_sub_4327ec();
        puVar8 = *(undefined8 **)
                  (
                  _MG_BlocksEngine2_Environment_BE2_VerticalFunctionBlocksManager___c_TypeInfo_12d70a0
                  + 0xb8);
      }
      uVar14 = *puVar8;
      lVar13 = native_sub_432808(_System_Predicate_I_BE2_ProgrammingEnv__TypeInfo_12d2da0);
      native_System_Predicate_BaseInvokableCall____ctor_ac31d4
                (lVar13,uVar14,
                 _Method_MG_BlocksEngine2_Environment_BE2_VerticalFunctionBlocksManager___c__CreateFunctionBlock_b__0_0___12e96d0
                 ,_Method_System_Predicate_I_BE2_ProgrammingEnv___ctor___12ddaf8);
      plVar3 = (long *)(*(long *)(
                                 _MG_BlocksEngine2_Environment_BE2_VerticalFunctionBlocksManager___c_TypeInfo_12d70a0
                                 + 0xb8) + 8);
      *plVar3 = lVar13;
      native_sub_4326e0(plVar3,lVar13);
    }
    if (lVar2 != 0) {
      plVar3 = (long *)native_System_Collections_Generic_List_I_BE2_ProgrammingEnv___Find_d41304
                                 (lVar2,lVar13,
                                  _Method_System_Collections_Generic_List_I_BE2_ProgrammingEnv__Find___12dc9f0
                                 );
      if (param_5[3] != 0) {
        lVar2 = native_UnityEngine_GameObject__GetComponent_BE2_BlockSectionHeader_Custom__4a2214
                          (param_5[3],
                           _Method_UnityEngine_GameObject_GetComponent_BE2_Ins_DefineFunction____12e4928
                          );
        uVar18 = native_UnityEngine_Vector3__get_zero_776668(0);
        uVar14 = param_2;
        uVar15 = param_3;
        uVar19 = native_UnityEngine_Quaternion__get_identity_7628fc(0);
        if (plVar3 != (long *)0x0) {
          lVar13 = *plVar3;
          if ((ulong)*(ushort *)(lVar13 + 0x12a) != 0) {
            uVar10 = 0;
            piVar12 = (int *)(*(long *)(lVar13 + 0xb0) + 8);
            do {
              if (*(long *)(piVar12 + -2) ==
                  _MG_BlocksEngine2_Environment_I_BE2_ProgrammingEnv_TypeInfo_12d4e38) {
                puVar8 = (undefined8 *)(lVar13 + (long)*piVar12 * 0x10 + 0x138);
                goto LAB_00dcf278;
              }
              uVar10 = uVar10 + 1;
              piVar12 = piVar12 + 4;
            } while (uVar10 < *(ushort *)(lVar13 + 0x12a));
          }
          puVar8 = (undefined8 *)
                   native_sub_3c9b34(plVar3,
                                     _MG_BlocksEngine2_Environment_I_BE2_ProgrammingEnv_TypeInfo_12d4e38
                                     ,0);
LAB_00dcf278:
          uVar4 = (*(code *)*puVar8)(plVar3,puVar8[1]);
          if (((*(byte *)(_UnityEngine_Object_TypeInfo_12d54e0 + 0x133) >> 2 & 1) != 0) &&
             (*(int *)(_UnityEngine_Object_TypeInfo_12d54e0 + 0xe0) == 0)) {
            native_sub_4327ec(_UnityEngine_Object_TypeInfo_12d54e0);
          }
          lVar13 = native_UnityEngine_Object__Instantiate_BE2_Ins_DefineFunction__4a67c0
                             (uVar18,param_2,param_3,uVar19,uVar14,uVar15,param_4,lVar2,uVar4,
                              _Method_UnityEngine_Object_Instantiate_BE2_Ins_DefineFunction____12e5a80
                             );
          if ((lVar13 != 0) &&
             (plVar3 = (long *)native_UnityEngine_Component__GetComponent_ActiveAnimation__49daec
                                         (lVar13,
                                          _Method_UnityEngine_Component_GetComponent_I_BE2_BlockLayout____12e2a10
                                         ), lVar2 != 0)) {
            uVar14 = native_UnityEngine_Object__get_name_8e8098(lVar2,0);
            native_UnityEngine_Object__set_name_8e9c08(lVar13,uVar14,0);
            lVar2 = native_UnityEngine_Component__get_transform_8da62c(lVar13,0);
            if (lVar2 != 0) {
              uVar14 = 0;
              uVar10 = (ulong)*(uint *)((long)param_5 + 0x44);
              native_UnityEngine_Transform__set_localPosition_7718a4
                        ((int)param_5[8],uVar10,0,lVar2,0);
              lVar2 = native_sub_432808(_System_Collections_Generic_List_string__TypeInfo_12d2b60);
              native_System_Collections_Generic_List_XmlEventCache_XmlEvent______ctor_d3ff44
                        (lVar2,_Method_System_Collections_Generic_List_string___ctor___12dce88);
              if (param_6 != 0) {
                native_System_Collections_Generic_List_BE2_Op_FunctionLocalVariable___GetEnumerator_d414fc
                          (&uStack_d8,param_6,
                           _Method_System_Collections_Generic_List_DefineItem__GetEnumerator___12dc730
                          );
                lStack_b0 = lStack_c8;
                uStack_b8 = uStack_d0;
                uStack_c0 = uStack_d8;
                do {
                  while( true ) {
                    uVar5 = native_System_Collections_Generic_List_Enumerator_BE2_Op_FunctionLocalVariable___MoveNext_7e8f30
                                      (&uStack_c0,
                                       _Method_System_Collections_Generic_List_Enumerator_DefineItem__MoveNext___12da428
                                      );
                    lVar1 = lStack_b0;
                    if ((uVar5 & 1) == 0) {
                      native_System_Collections_Generic_List_Enumerator_BE2_Op_FunctionLocalVariable___Dispose_7e8f2c
                                (&uStack_c0,
                                 _Method_System_Collections_Generic_List_Enumerator_DefineItem__Dispose___12da420
                                );
                      native_MG_BlocksEngine2_Utils_BE2_BlockUtils__UnloadPrefab_56ebc0(0);
                      (**(code **)(*param_5 + 0x188))
                                (param_5,param_6,lVar13,*(undefined8 *)(*param_5 + 400));
                      return;
                    }
                    if (lStack_b0 == 0) {
                    /* WARNING: Subroutine does not return */
                      native_sub_432810();
                    }
                    uVar5 = native_System_String__op_Equality_afc18c
                                      (*(undefined8 *)(lStack_b0 + 0x10),
                                       _StringLiteral_label_12f5370,0);
                    if ((uVar5 & 1) != 0) break;
                    lVar6 = native_sub_432808(
                                             _MG_BlocksEngine2_Environment_BE2_VerticalFunctionBlocksManager___c__DisplayClass0_0_TypeInfo_12d70a8
                                             );
                    native_MG_BlocksEngine2_Environment_BE2_VerticalFunctionBlocksManager___c__DisplayClass0_0___ctor_549638
                              (lVar6,0);
                    lVar16 = param_5[5];
                    uVar18 = native_UnityEngine_Vector3__get_zero_776668(0);
                    uVar5 = uVar10;
                    uVar15 = uVar14;
                    uVar4 = native_UnityEngine_Quaternion__get_identity_7628fc(0);
                    if (plVar3 == (long *)0x0) {
                    /* WARNING: Subroutine does not return */
                      native_sub_432810();
                    }
                    lVar9 = *plVar3;
                    if ((ulong)*(ushort *)(lVar9 + 0x12a) != 0) {
                      uVar11 = 0;
                      piVar12 = (int *)(*(long *)(lVar9 + 0xb0) + 8);
                      do {
                        if (*(long *)(piVar12 + -2) ==
                            _MG_BlocksEngine2_Block_I_BE2_BlockLayout_TypeInfo_12d4de0) {
                          puVar8 = (undefined8 *)(lVar9 + (long)(*piVar12 + 2) * 0x10 + 0x138);
                          goto LAB_00dcf598;
                        }
                        uVar11 = uVar11 + 1;
                        piVar12 = piVar12 + 4;
                      } while (uVar11 < *(ushort *)(lVar9 + 0x12a));
                    }
                    puVar8 = (undefined8 *)
                             native_sub_3c9b34(plVar3,
                                               _MG_BlocksEngine2_Block_I_BE2_BlockLayout_TypeInfo_12d4de0
                                               ,2);
LAB_00dcf598:
                    lVar9 = (*(code *)*puVar8)(plVar3,puVar8[1]);
                    if (lVar9 == 0) {
                    /* WARNING: Subroutine does not return */
                      native_sub_432810();
                    }
                    if (*(int *)(lVar9 + 0x18) == 0) {
                      uVar14 = native_sub_43283c();
                    /* WARNING: Subroutine does not return */
                      native_sub_4327dc(uVar14,0);
                    }
                    plVar17 = *(long **)(lVar9 + 0x20);
                    if (plVar17 == (long *)0x0) {
                    /* WARNING: Subroutine does not return */
                      native_sub_432810();
                    }
                    lVar9 = *plVar17;
                    if ((ulong)*(ushort *)(lVar9 + 0x12a) != 0) {
                      uVar11 = 0;
                      piVar12 = (int *)(*(long *)(lVar9 + 0xb0) + 8);
                      do {
                        if (*(long *)(piVar12 + -2) ==
                            _MG_BlocksEngine2_Block_I_BE2_BlockSection_TypeInfo_12d4de8) {
                          puVar8 = (undefined8 *)(lVar9 + (long)(*piVar12 + 1) * 0x10 + 0x138);
                          goto LAB_00dcf690;
                        }
                        uVar11 = uVar11 + 1;
                        piVar12 = piVar12 + 4;
                      } while (uVar11 < *(ushort *)(lVar9 + 0x12a));
                    }
                    puVar8 = (undefined8 *)
                             native_sub_3c9b34(plVar17,
                                               _MG_BlocksEngine2_Block_I_BE2_BlockSection_TypeInfo_12d4de8
                                               ,1);
LAB_00dcf690:
                    plVar17 = (long *)(*(code *)*puVar8)(plVar17,puVar8[1]);
                    if (plVar17 == (long *)0x0) {
                    /* WARNING: Subroutine does not return */
                      native_sub_432810();
                    }
                    lVar9 = *plVar17;
                    if ((ulong)*(ushort *)(lVar9 + 0x12a) != 0) {
                      uVar11 = 0;
                      piVar12 = (int *)(*(long *)(lVar9 + 0xb0) + 8);
                      do {
                        if (*(long *)(piVar12 + -2) ==
                            _MG_BlocksEngine2_Block_I_BE2_BlockSectionHeader_TypeInfo_12d4df8) {
                          puVar8 = (undefined8 *)(lVar9 + (long)*piVar12 * 0x10 + 0x138);
                          goto LAB_00dcf798;
                        }
                        uVar11 = uVar11 + 1;
                        piVar12 = piVar12 + 4;
                      } while (uVar11 < *(ushort *)(lVar9 + 0x12a));
                    }
                    puVar8 = (undefined8 *)
                             native_sub_3c9b34(plVar17,
                                               _MG_BlocksEngine2_Block_I_BE2_BlockSectionHeader_TypeInfo_12d4df8
                                               ,0);
LAB_00dcf798:
                    uVar7 = (*(code *)*puVar8)(plVar17,puVar8[1]);
                    if (((*(byte *)(_UnityEngine_Object_TypeInfo_12d54e0 + 0x133) >> 2 & 1) != 0) &&
                       (*(int *)(_UnityEngine_Object_TypeInfo_12d54e0 + 0xe0) == 0)) {
                      native_sub_4327ec();
                    }
                    lVar16 = native_UnityEngine_Object__Instantiate_BE2_Ins_DefineFunction__4a67c0
                                       (uVar18,uVar10,uVar14,uVar4,uVar5,uVar15,uVar19,lVar16,uVar7,
                                        _Method_UnityEngine_Object_Instantiate_GameObject____12e5a88
                                       );
                    if (lVar6 == 0) {
                    /* WARNING: Subroutine does not return */
                      native_sub_432810();
                    }
                    puVar8 = (undefined8 *)(lVar6 + 0x10);
                    *puVar8 = *(undefined8 *)(lVar1 + 0x18);
                    native_sub_4326e0(puVar8);
                    uVar15 = native_sub_432808(_System_Func_string__bool__TypeInfo_12d2660);
                    native_System_Func_object__bool____ctor_b4ca2c
                              (uVar15,lVar6,
                               _Method_MG_BlocksEngine2_Environment_BE2_VerticalFunctionBlocksManager___c__DisplayClass0_0__CreateFunctionBlock_b__1___12e96d8
                               ,_Method_System_Func_string__bool___ctor___12db2c0);
                    uVar15 = native_System_Linq_Enumerable__Where_object__4a0c04
                                       (lVar2,uVar15,
                                        _Method_System_Linq_Enumerable_Where_string____12e40e8);
                    iStack_94 = native_System_Linq_Enumerable__Count_object__49f714
                                          (uVar15,
                                           _Method_System_Linq_Enumerable_Count_string____12e4000);
                    if (lVar2 == 0) {
                    /* WARNING: Subroutine does not return */
                      native_sub_432810();
                    }
                    native_System_Collections_Generic_List_int_____Add_d40c00
                              (lVar2,*puVar8,
                               _Method_System_Collections_Generic_List_string__Add___12dcea0);
                    uVar19 = uVar4;
                    if (0 < iStack_94) {
                      uVar19 = *puVar8;
                      uVar15 = native_System_Int32__ToString_83c60c(&iStack_94,0);
                      uVar15 = native_System_String__Concat_afcabc
                                         (uVar19,_StringLiteral____12eacb0,uVar15,
                                          _StringLiteral___12eb590,0);
                      *puVar8 = uVar15;
                      native_sub_4326e0(puVar8);
                      uVar19 = uVar4;
                    }
                    if (lVar16 == 0) {
                    /* WARNING: Subroutine does not return */
                      native_sub_432810();
                    }
                    plVar17 = (long *)native_UnityEngine_GameObject__GetComponentInChildren_BE2_BlockSectionHeader_Custom__4a22c0
                                                (lVar16,
                                                 _Method_UnityEngine_GameObject_GetComponentInChildren_TMP_Text____12e4b08
                                                );
                    if (plVar17 == (long *)0x0) {
                    /* WARNING: Subroutine does not return */
                      native_sub_432810();
                    }
                    (**(code **)(*plVar17 + 0x558))
                              (plVar17,*puVar8,*(undefined8 *)(*plVar17 + 0x560));
                  }
                  lVar6 = native_MG_BlocksEngine2_EditorScript_BE2_Inspector__get_Instance_602da4(0)
                  ;
                  if (lVar6 == 0) {
                    /* WARNING: Subroutine does not return */
                    native_sub_432810();
                  }
                  uVar15 = *(undefined8 *)(lVar6 + 0x78);
                  uVar18 = native_UnityEngine_Vector3__get_zero_776668(0);
                  uVar19 = native_UnityEngine_Quaternion__get_identity_7628fc(0);
                  if (plVar3 == (long *)0x0) {
                    /* WARNING: Subroutine does not return */
                    native_sub_432810();
                  }
                  lVar6 = *plVar3;
                  if ((ulong)*(ushort *)(lVar6 + 0x12a) != 0) {
                    uVar5 = 0;
                    piVar12 = (int *)(*(long *)(lVar6 + 0xb0) + 8);
                    do {
                      if (*(long *)(piVar12 + -2) ==
                          _MG_BlocksEngine2_Block_I_BE2_BlockLayout_TypeInfo_12d4de0) {
                        puVar8 = (undefined8 *)(lVar6 + (long)(*piVar12 + 2) * 0x10 + 0x138);
                        goto LAB_00dcf518;
                      }
                      uVar5 = uVar5 + 1;
                      piVar12 = piVar12 + 4;
                    } while (uVar5 < *(ushort *)(lVar6 + 0x12a));
                  }
                  puVar8 = (undefined8 *)
                           native_sub_3c9b34(plVar3,
                                             _MG_BlocksEngine2_Block_I_BE2_BlockLayout_TypeInfo_12d4de0
                                             ,2);
LAB_00dcf518:
                  lVar6 = (*(code *)*puVar8)(plVar3,puVar8[1]);
                  if (lVar6 == 0) {
                    /* WARNING: Subroutine does not return */
                    native_sub_432810();
                  }
                  if (*(int *)(lVar6 + 0x18) == 0) {
                    uVar14 = native_sub_43283c();
                    /* WARNING: Subroutine does not return */
                    native_sub_4327dc(uVar14,0);
                  }
                  plVar17 = *(long **)(lVar6 + 0x20);
                  if (plVar17 == (long *)0x0) {
                    /* WARNING: Subroutine does not return */
                    native_sub_432810();
                  }
                  lVar6 = *plVar17;
                  if ((ulong)*(ushort *)(lVar6 + 0x12a) != 0) {
                    uVar5 = 0;
                    piVar12 = (int *)(*(long *)(lVar6 + 0xb0) + 8);
                    do {
                      if (*(long *)(piVar12 + -2) ==
                          _MG_BlocksEngine2_Block_I_BE2_BlockSection_TypeInfo_12d4de8) {
                        puVar8 = (undefined8 *)(lVar6 + (long)(*piVar12 + 1) * 0x10 + 0x138);
                        goto LAB_00dcf61c;
                      }
                      uVar5 = uVar5 + 1;
                      piVar12 = piVar12 + 4;
                    } while (uVar5 < *(ushort *)(lVar6 + 0x12a));
                  }
                  puVar8 = (undefined8 *)
                           native_sub_3c9b34(plVar17,
                                             _MG_BlocksEngine2_Block_I_BE2_BlockSection_TypeInfo_12d4de8
                                             ,1);
LAB_00dcf61c:
                  plVar17 = (long *)(*(code *)*puVar8)(plVar17,puVar8[1]);
                  if (plVar17 == (long *)0x0) {
                    /* WARNING: Subroutine does not return */
                    native_sub_432810();
                  }
                  lVar6 = *plVar17;
                  if ((ulong)*(ushort *)(lVar6 + 0x12a) != 0) {
                    uVar5 = 0;
                    piVar12 = (int *)(*(long *)(lVar6 + 0xb0) + 8);
                    do {
                      if (*(long *)(piVar12 + -2) ==
                          _MG_BlocksEngine2_Block_I_BE2_BlockSectionHeader_TypeInfo_12d4df8) {
                        puVar8 = (undefined8 *)(lVar6 + (long)*piVar12 * 0x10 + 0x138);
                        goto LAB_00dcf700;
                      }
                      uVar5 = uVar5 + 1;
                      piVar12 = piVar12 + 4;
                    } while (uVar5 < *(ushort *)(lVar6 + 0x12a));
                  }
                  puVar8 = (undefined8 *)
                           native_sub_3c9b34(plVar17,
                                             _MG_BlocksEngine2_Block_I_BE2_BlockSectionHeader_TypeInfo_12d4df8
                                             ,0);
LAB_00dcf700:
                  uVar4 = (*(code *)*puVar8)(plVar17,puVar8[1]);
                  if (((*(byte *)(_UnityEngine_Object_TypeInfo_12d54e0 + 0x133) >> 2 & 1) != 0) &&
                     (*(int *)(_UnityEngine_Object_TypeInfo_12d54e0 + 0xe0) == 0)) {
                    native_sub_4327ec();
                  }
                  lVar6 = native_UnityEngine_Object__Instantiate_BE2_Ins_DefineFunction__4a67c0
                                    (uVar18,uVar15,uVar4,
                                     _Method_UnityEngine_Object_Instantiate_GameObject____12e5a88);
                  if (lVar6 == 0) {
                    /* WARNING: Subroutine does not return */
                    native_sub_432810();
                  }
                  plVar17 = (long *)native_UnityEngine_GameObject__GetComponentInChildren_BE2_BlockSectionHeader_Custom__4a22c0
                                              (lVar6,
                                               _Method_UnityEngine_GameObject_GetComponentInChildren_TMP_Text____12e4b08
                                              );
                  if (plVar17 == (long *)0x0) {
                    /* WARNING: Subroutine does not return */
                    native_sub_432810();
                  }
                  (**(code **)(*plVar17 + 0x558))
                            (plVar17,*(undefined8 *)(lVar1 + 0x18),*(undefined8 *)(*plVar17 + 0x560)
                            );
                } while( true );
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



/* MG_BlocksEngine2.Environment.BE2_VerticalFunctionBlocksManager$$CreateSelectionFunction @ 0xdcfac4
 * void MG_BlocksEngine2_Environment_BE2_VerticalFunctionBlocksManager__CreateSelectionFunction (MG_BlocksEngine2_Environment_BE2_VerticalFunctionBlocksManager_o* __this, System_Collections_Generic_List_DefineItem__o* items, BE2_Ins_DefineFunction_o* defineBlockIns, const MethodInfo* method); */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* MG_BlocksEngine2.Environment.BE2_VerticalFunctionBlocksManager$$CreateSelectionFunction
   void MG_BlocksEngine2_Environment_BE2_VerticalFunctionBlocksManager__CreateSelectionFunction
   (MG_BlocksEngine2_Environment_BE2_VerticalFunctionBlocksManager_o* __this,
   System_Collections_Generic_List_DefineItem__o* items, BE2_Ins_DefineFunction_o* defineBlockIns,
   const MethodInfo* method); */

void native_MG_BlocksEngine2_Environment_BE2_VerticalFunctionBlocksManager__CreateSelectionFunction_dcfac4
               (undefined1 param_1 [16],undefined8 param_2,undefined8 param_3,undefined8 param_4,
               long param_5,long param_6,undefined8 param_7)

{
  uint uVar1;
  long lVar2;
  long *plVar3;
  ulong uVar4;
  long lVar5;
  undefined8 *puVar6;
  long lVar7;
  undefined8 uVar8;
  int *piVar9;
  undefined8 uVar10;
  undefined8 uVar11;
  undefined8 uVar12;
  long *plVar13;
  undefined8 uVar14;
  undefined8 uVar15;
  undefined8 uVar16;
  undefined8 uStack_d8;
  undefined8 uStack_d0;
  long lStack_c8;
  undefined8 uStack_c0;
  undefined8 uStack_b8;
  long lStack_b0;
  
  if ((bRam0000000001346e23 & 1) == 0) {
    native_sub_43273c(&
                      Method_System_Collections_Generic_List_Enumerator_DefineItem__Dispose___12da420
                     );
    native_sub_43273c(&
                      Method_System_Collections_Generic_List_Enumerator_DefineItem__MoveNext___12da428
                     );
    native_sub_43273c(&
                      Method_System_Collections_Generic_List_Enumerator_DefineItem__get_Current___12da430
                     );
    native_sub_43273c(&
                      Method_UnityEngine_GameObject_AddComponent_BE2_BlockSectionHeader_InputField____12e4768
                     );
    native_sub_43273c(&
                      Method_UnityEngine_GameObject_GetComponent_BE2_DragSelectionFunction____12e4920
                     );
    native_sub_43273c(&Method_UnityEngine_GameObject_GetComponent_I_BE2_BlockLayout____12e49a0);
    native_sub_43273c(&Method_UnityEngine_GameObject_GetComponent_TMP_InputField____12e4a40);
    native_sub_43273c(&Method_UnityEngine_GameObject_GetComponent_TMP_Text____12e4a50);
    native_sub_43273c(&MG_BlocksEngine2_Block_I_BE2_BlockLayout_TypeInfo_12d4de0);
    native_sub_43273c(&MG_BlocksEngine2_Block_I_BE2_BlockSectionHeader_TypeInfo_12d4df8);
    native_sub_43273c(&MG_BlocksEngine2_Block_I_BE2_BlockSection_TypeInfo_12d4de8);
    native_sub_43273c(&Method_System_Collections_Generic_List_DefineItem__GetEnumerator___12dc730);
    native_sub_43273c(&Method_UnityEngine_Object_Instantiate_GameObject____12e5a88);
    native_sub_43273c(&UnityEngine_Object_TypeInfo_12d54e0);
    native_sub_43273c(&StringLiteral_label_12f5370);
    native_sub_43273c(&StringLiteral__12eaac0);
    bRam0000000001346e23 = 1;
  }
  uStack_b8 = 0;
  lStack_b0 = 0;
  uStack_c0 = 0;
  if ((*(long *)(param_5 + 0x38) != 0) &&
     (lVar2 = native_UnityEngine_Component__get_gameObject_8da66c(*(long *)(param_5 + 0x38),0),
     lVar2 != 0)) {
    uVar1 = native_UnityEngine_GameObject__get_activeSelf_8de6e8(lVar2,0);
    if (*(long *)(param_5 + 0x38) != 0) {
      lVar2 = native_UnityEngine_Component__get_gameObject_8da66c(*(long *)(param_5 + 0x38),0);
      if (lVar2 != 0) {
        native_UnityEngine_GameObject__SetActive_8de698(lVar2,1,0);
        uVar10 = *(undefined8 *)(param_5 + 0x20);
        uVar14 = native_UnityEngine_Vector3__get_zero_776668(0);
        uVar12 = param_2;
        uVar16 = param_3;
        uVar15 = native_UnityEngine_Quaternion__get_identity_7628fc(0);
        uVar11 = *(undefined8 *)(param_5 + 0x38);
        if (((*(byte *)(_UnityEngine_Object_TypeInfo_12d54e0 + 0x133) >> 2 & 1) != 0) &&
           (*(int *)(_UnityEngine_Object_TypeInfo_12d54e0 + 0xe0) == 0)) {
          native_sub_4327ec();
        }
        lVar2 = native_UnityEngine_Object__Instantiate_BE2_Ins_DefineFunction__4a67c0
                          (uVar14,param_2,param_3,uVar15,uVar12,uVar16,param_4,uVar10,uVar11,
                           _Method_UnityEngine_Object_Instantiate_GameObject____12e5a88);
        if (lVar2 != 0) {
          plVar3 = (long *)native_UnityEngine_GameObject__GetComponent_BE2_BlockSectionHeader_Custom__4a2214
                                     (lVar2,
                                      _Method_UnityEngine_GameObject_GetComponent_I_BE2_BlockLayout____12e49a0
                                     );
          if (param_6 != 0) {
            native_System_Collections_Generic_List_BE2_Op_FunctionLocalVariable___GetEnumerator_d414fc
                      (&uStack_d8,param_6,
                       _Method_System_Collections_Generic_List_DefineItem__GetEnumerator___12dc730);
            lStack_b0 = lStack_c8;
            uStack_b8 = uStack_d0;
            uStack_c0 = uStack_d8;
            while (uVar4 = native_System_Collections_Generic_List_Enumerator_BE2_Op_FunctionLocalVariable___MoveNext_7e8f30
                                     (&uStack_c0,
                                      _Method_System_Collections_Generic_List_Enumerator_DefineItem__MoveNext___12da428
                                     ), lVar7 = lStack_b0, (uVar4 & 1) != 0) {
              if (lStack_b0 == 0) {
                    /* WARNING: Subroutine does not return */
                native_sub_432810();
              }
              uVar4 = native_System_String__op_Equality_afc18c
                                (*(undefined8 *)(lStack_b0 + 0x10),_StringLiteral_label_12f5370,0);
              if ((uVar4 & 1) == 0) {
                lVar7 = native_MG_BlocksEngine2_EditorScript_BE2_Inspector__get_Instance_602da4(0);
                if (lVar7 == 0) {
                    /* WARNING: Subroutine does not return */
                  native_sub_432810();
                }
                uVar10 = *(undefined8 *)(lVar7 + 0x70);
                uVar11 = native_UnityEngine_Vector3__get_zero_776668(0);
                uVar12 = param_2;
                uVar16 = param_3;
                uVar14 = native_UnityEngine_Quaternion__get_identity_7628fc(0);
                if (plVar3 == (long *)0x0) {
                    /* WARNING: Subroutine does not return */
                  native_sub_432810();
                }
                lVar7 = *plVar3;
                if ((ulong)*(ushort *)(lVar7 + 0x12a) != 0) {
                  uVar4 = 0;
                  piVar9 = (int *)(*(long *)(lVar7 + 0xb0) + 8);
                  do {
                    if (*(long *)(piVar9 + -2) ==
                        _MG_BlocksEngine2_Block_I_BE2_BlockLayout_TypeInfo_12d4de0) {
                      puVar6 = (undefined8 *)(lVar7 + (long)(*piVar9 + 2) * 0x10 + 0x138);
                      goto LAB_00dcfeec;
                    }
                    uVar4 = uVar4 + 1;
                    piVar9 = piVar9 + 4;
                  } while (uVar4 < *(ushort *)(lVar7 + 0x12a));
                }
                puVar6 = (undefined8 *)
                         native_sub_3c9b34(plVar3,
                                           _MG_BlocksEngine2_Block_I_BE2_BlockLayout_TypeInfo_12d4de0
                                           ,2);
LAB_00dcfeec:
                lVar7 = (*(code *)*puVar6)(plVar3,puVar6[1]);
                if (lVar7 == 0) {
                    /* WARNING: Subroutine does not return */
                  native_sub_432810();
                }
                if (*(int *)(lVar7 + 0x18) == 0) {
                  uVar12 = native_sub_43283c();
                    /* WARNING: Subroutine does not return */
                  native_sub_4327dc(uVar12,0);
                }
                plVar13 = *(long **)(lVar7 + 0x20);
                if (plVar13 == (long *)0x0) {
                    /* WARNING: Subroutine does not return */
                  native_sub_432810();
                }
                lVar7 = *plVar13;
                if ((ulong)*(ushort *)(lVar7 + 0x12a) != 0) {
                  uVar4 = 0;
                  piVar9 = (int *)(*(long *)(lVar7 + 0xb0) + 8);
                  do {
                    if (*(long *)(piVar9 + -2) ==
                        _MG_BlocksEngine2_Block_I_BE2_BlockSection_TypeInfo_12d4de8) {
                      puVar6 = (undefined8 *)(lVar7 + (long)(*piVar9 + 1) * 0x10 + 0x138);
                      goto LAB_00dcffd0;
                    }
                    uVar4 = uVar4 + 1;
                    piVar9 = piVar9 + 4;
                  } while (uVar4 < *(ushort *)(lVar7 + 0x12a));
                }
                puVar6 = (undefined8 *)
                         native_sub_3c9b34(plVar13,
                                           _MG_BlocksEngine2_Block_I_BE2_BlockSection_TypeInfo_12d4de8
                                           ,1);
LAB_00dcffd0:
                plVar13 = (long *)(*(code *)*puVar6)(plVar13,puVar6[1]);
                if (plVar13 == (long *)0x0) {
                    /* WARNING: Subroutine does not return */
                  native_sub_432810();
                }
                lVar7 = *plVar13;
                if ((ulong)*(ushort *)(lVar7 + 0x12a) != 0) {
                  uVar4 = 0;
                  piVar9 = (int *)(*(long *)(lVar7 + 0xb0) + 8);
                  do {
                    if (*(long *)(piVar9 + -2) ==
                        _MG_BlocksEngine2_Block_I_BE2_BlockSectionHeader_TypeInfo_12d4df8) {
                      puVar6 = (undefined8 *)(lVar7 + (long)*piVar9 * 0x10 + 0x138);
                      goto LAB_00dd00c8;
                    }
                    uVar4 = uVar4 + 1;
                    piVar9 = piVar9 + 4;
                  } while (uVar4 < *(ushort *)(lVar7 + 0x12a));
                }
                puVar6 = (undefined8 *)
                         native_sub_3c9b34(plVar13,
                                           _MG_BlocksEngine2_Block_I_BE2_BlockSectionHeader_TypeInfo_12d4df8
                                           ,0);
LAB_00dd00c8:
                uVar8 = (*(code *)*puVar6)(plVar13,puVar6[1]);
                if (((*(byte *)(_UnityEngine_Object_TypeInfo_12d54e0 + 0x133) >> 2 & 1) != 0) &&
                   (*(int *)(_UnityEngine_Object_TypeInfo_12d54e0 + 0xe0) == 0)) {
                  native_sub_4327ec();
                }
                lVar7 = native_UnityEngine_Object__Instantiate_BE2_Ins_DefineFunction__4a67c0
                                  (uVar11,param_2,param_3,uVar14,uVar12,uVar16,uVar15,uVar10,uVar8,
                                   _Method_UnityEngine_Object_Instantiate_GameObject____12e5a88);
                if (lVar7 == 0) {
                    /* WARNING: Subroutine does not return */
                  native_sub_432810();
                }
                lVar5 = native_UnityEngine_GameObject__GetComponent_BE2_BlockSectionHeader_Custom__4a2214
                                  (lVar7,
                                   _Method_UnityEngine_GameObject_GetComponent_TMP_InputField____12e4a40
                                  );
                if (lVar5 == 0) {
                    /* WARNING: Subroutine does not return */
                  native_sub_432810();
                }
                native_TMPro_TMP_InputField__set_text_88acec(lVar5,_StringLiteral__12eaac0,0);
                uVar12 = native_UnityEngine_GameObject__get_transform_8de5c8(lVar7,0);
                native_MG_BlocksEngine2_Utils_BE2_BlockUtils__RemoveEngineComponents_568e28
                          (uVar12,0);
                native_UnityEngine_GameObject__AddComponent_ActiveAnimation__4a2118
                          (lVar7,
                           _Method_UnityEngine_GameObject_AddComponent_BE2_BlockSectionHeader_InputField____12e4768
                          );
                uVar15 = uVar14;
              }
              else {
                lVar5 = native_MG_BlocksEngine2_EditorScript_BE2_Inspector__get_Instance_602da4(0);
                if (lVar5 == 0) {
                    /* WARNING: Subroutine does not return */
                  native_sub_432810();
                }
                uVar12 = *(undefined8 *)(lVar5 + 0x78);
                uVar16 = native_UnityEngine_Vector3__get_zero_776668(0);
                uVar15 = native_UnityEngine_Quaternion__get_identity_7628fc(0);
                if (plVar3 == (long *)0x0) {
                    /* WARNING: Subroutine does not return */
                  native_sub_432810();
                }
                lVar5 = *plVar3;
                if ((ulong)*(ushort *)(lVar5 + 0x12a) != 0) {
                  uVar4 = 0;
                  piVar9 = (int *)(*(long *)(lVar5 + 0xb0) + 8);
                  do {
                    if (*(long *)(piVar9 + -2) ==
                        _MG_BlocksEngine2_Block_I_BE2_BlockLayout_TypeInfo_12d4de0) {
                      puVar6 = (undefined8 *)(lVar5 + (long)(*piVar9 + 2) * 0x10 + 0x138);
                      goto LAB_00dcfe74;
                    }
                    uVar4 = uVar4 + 1;
                    piVar9 = piVar9 + 4;
                  } while (uVar4 < *(ushort *)(lVar5 + 0x12a));
                }
                puVar6 = (undefined8 *)
                         native_sub_3c9b34(plVar3,
                                           _MG_BlocksEngine2_Block_I_BE2_BlockLayout_TypeInfo_12d4de0
                                           ,2);
LAB_00dcfe74:
                lVar5 = (*(code *)*puVar6)(plVar3,puVar6[1]);
                if (lVar5 == 0) {
                    /* WARNING: Subroutine does not return */
                  native_sub_432810();
                }
                if (*(int *)(lVar5 + 0x18) == 0) {
                  uVar12 = native_sub_43283c();
                    /* WARNING: Subroutine does not return */
                  native_sub_4327dc(uVar12,0);
                }
                plVar13 = *(long **)(lVar5 + 0x20);
                if (plVar13 == (long *)0x0) {
                    /* WARNING: Subroutine does not return */
                  native_sub_432810();
                }
                lVar5 = *plVar13;
                if ((ulong)*(ushort *)(lVar5 + 0x12a) != 0) {
                  uVar4 = 0;
                  piVar9 = (int *)(*(long *)(lVar5 + 0xb0) + 8);
                  do {
                    if (*(long *)(piVar9 + -2) ==
                        _MG_BlocksEngine2_Block_I_BE2_BlockSection_TypeInfo_12d4de8) {
                      puVar6 = (undefined8 *)(lVar5 + (long)(*piVar9 + 1) * 0x10 + 0x138);
                      goto LAB_00dcff64;
                    }
                    uVar4 = uVar4 + 1;
                    piVar9 = piVar9 + 4;
                  } while (uVar4 < *(ushort *)(lVar5 + 0x12a));
                }
                puVar6 = (undefined8 *)
                         native_sub_3c9b34(plVar13,
                                           _MG_BlocksEngine2_Block_I_BE2_BlockSection_TypeInfo_12d4de8
                                           ,1);
LAB_00dcff64:
                plVar13 = (long *)(*(code *)*puVar6)(plVar13,puVar6[1]);
                if (plVar13 == (long *)0x0) {
                    /* WARNING: Subroutine does not return */
                  native_sub_432810();
                }
                lVar5 = *plVar13;
                if ((ulong)*(ushort *)(lVar5 + 0x12a) != 0) {
                  uVar4 = 0;
                  piVar9 = (int *)(*(long *)(lVar5 + 0xb0) + 8);
                  do {
                    if (*(long *)(piVar9 + -2) ==
                        _MG_BlocksEngine2_Block_I_BE2_BlockSectionHeader_TypeInfo_12d4df8) {
                      puVar6 = (undefined8 *)(lVar5 + (long)*piVar9 * 0x10 + 0x138);
                      goto LAB_00dd0038;
                    }
                    uVar4 = uVar4 + 1;
                    piVar9 = piVar9 + 4;
                  } while (uVar4 < *(ushort *)(lVar5 + 0x12a));
                }
                puVar6 = (undefined8 *)
                         native_sub_3c9b34(plVar13,
                                           _MG_BlocksEngine2_Block_I_BE2_BlockSectionHeader_TypeInfo_12d4df8
                                           ,0);
LAB_00dd0038:
                uVar10 = (*(code *)*puVar6)(plVar13,puVar6[1]);
                if (((*(byte *)(_UnityEngine_Object_TypeInfo_12d54e0 + 0x133) >> 2 & 1) != 0) &&
                   (*(int *)(_UnityEngine_Object_TypeInfo_12d54e0 + 0xe0) == 0)) {
                  native_sub_4327ec();
                }
                lVar5 = native_UnityEngine_Object__Instantiate_BE2_Ins_DefineFunction__4a67c0
                                  (uVar16,uVar12,uVar10,
                                   _Method_UnityEngine_Object_Instantiate_GameObject____12e5a88);
                if (lVar5 == 0) {
                    /* WARNING: Subroutine does not return */
                  native_sub_432810();
                }
                plVar13 = (long *)native_UnityEngine_GameObject__GetComponent_BE2_BlockSectionHeader_Custom__4a2214
                                            (lVar5,
                                             _Method_UnityEngine_GameObject_GetComponent_TMP_Text____12e4a50
                                            );
                if (plVar13 == (long *)0x0) {
                    /* WARNING: Subroutine does not return */
                  native_sub_432810();
                }
                (**(code **)(*plVar13 + 0x558))
                          (plVar13,*(undefined8 *)(lVar7 + 0x18),*(undefined8 *)(*plVar13 + 0x560));
              }
            }
            native_System_Collections_Generic_List_Enumerator_BE2_Op_FunctionLocalVariable___Dispose_7e8f2c
                      (&uStack_c0,
                       _Method_System_Collections_Generic_List_Enumerator_DefineItem__Dispose___12da420
                      );
            if (plVar3 != (long *)0x0) {
              lVar7 = *plVar3;
              if ((ulong)*(ushort *)(lVar7 + 0x12a) != 0) {
                uVar4 = 0;
                piVar9 = (int *)(*(long *)(lVar7 + 0xb0) + 8);
                do {
                  if (*(long *)(piVar9 + -2) ==
                      _MG_BlocksEngine2_Block_I_BE2_BlockLayout_TypeInfo_12d4de0) {
                    puVar6 = (undefined8 *)(lVar7 + (long)(*piVar9 + 6) * 0x10 + 0x138);
                    goto LAB_00dd01f4;
                  }
                  uVar4 = uVar4 + 1;
                  piVar9 = piVar9 + 4;
                } while (uVar4 < *(ushort *)(lVar7 + 0x12a));
              }
              puVar6 = (undefined8 *)
                       native_sub_3c9b34(plVar3,
                                         _MG_BlocksEngine2_Block_I_BE2_BlockLayout_TypeInfo_12d4de0,
                                         6);
LAB_00dd01f4:
              (*(code *)*puVar6)(plVar3,puVar6[1]);
              lVar2 = native_UnityEngine_GameObject__GetComponent_BE2_BlockSectionHeader_Custom__4a2214
                                (lVar2,
                                 _Method_UnityEngine_GameObject_GetComponent_BE2_DragSelectionFunction____12e4920
                                );
              if (lVar2 != 0) {
                *(undefined8 *)(lVar2 + 0x48) = param_7;
                native_sub_4326e0();
                if ((*(long *)(param_5 + 0x38) != 0) &&
                   (lVar2 = native_UnityEngine_Component__get_gameObject_8da66c
                                      (*(long *)(param_5 + 0x38),0), lVar2 != 0)) {
                  native_UnityEngine_GameObject__SetActive_8de698(lVar2,uVar1 & 1,0);
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



/* MG_BlocksEngine2.Environment.BE2_VerticalFunctionBlocksManager$$.ctor @ 0xdd039c
 * void MG_BlocksEngine2_Environment_BE2_VerticalFunctionBlocksManager___ctor (MG_BlocksEngine2_Environment_BE2_VerticalFunctionBlocksManager_o* __this, const MethodInfo* method); */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* MG_BlocksEngine2.Environment.BE2_VerticalFunctionBlocksManager$$.ctor
   void MG_BlocksEngine2_Environment_BE2_VerticalFunctionBlocksManager___ctor
   (MG_BlocksEngine2_Environment_BE2_VerticalFunctionBlocksManager_o* __this, const MethodInfo*
   method); */

long native_MG_BlocksEngine2_Environment_BE2_VerticalFunctionBlocksManager___ctor_dd039c
               (long param_1)

{
  *(undefined8 *)(param_1 + 0x40) = 0xc2c8000043960000;
  if ((bRam0000000001340ae0 & 1) == 0) {
    native_sub_43273c(&UnityEngine_Object_TypeInfo_12d54e0,0);
    bRam0000000001340ae0 = 1;
  }
  if (((*(byte *)(_UnityEngine_Object_TypeInfo_12d54e0 + 0x133) >> 2 & 1) != 0) &&
     (*(int *)(_UnityEngine_Object_TypeInfo_12d54e0 + 0xe0) == 0)) {
    native_sub_4327ec();
  }
  return param_1;
}


