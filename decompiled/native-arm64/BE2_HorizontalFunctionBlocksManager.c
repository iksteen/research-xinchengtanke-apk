/* ARM64 IL2CPP native pseudocode from Ghidra.
 * Recovered implementation, not original C# source.
 * Function boundaries follow the IL2CPP method address table. */


/* MG_BlocksEngine2.Horizontal.Environment.BE2_HorizontalFunctionBlocksManager$$Start @ 0x600bc4
 * void MG_BlocksEngine2_Horizontal_Environment_BE2_HorizontalFunctionBlocksManager__Start (MG_BlocksEngine2_Horizontal_Environment_BE2_HorizontalFunctionBlocksManager_o* __this, const MethodInfo* method); */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* MG_BlocksEngine2.Horizontal.Environment.BE2_HorizontalFunctionBlocksManager$$Start
   void MG_BlocksEngine2_Horizontal_Environment_BE2_HorizontalFunctionBlocksManager__Start
   (MG_BlocksEngine2_Horizontal_Environment_BE2_HorizontalFunctionBlocksManager_o* __this, const
   MethodInfo* method); */

void native_MG_BlocksEngine2_Horizontal_Environment_BE2_HorizontalFunctionBlocksManager__Start_600bc4
               (long param_1)

{
  uint uVar1;
  long lVar2;
  long lVar3;
  undefined8 uVar4;
  long *plVar5;
  long lVar6;
  uint uVar7;
  
  if ((bRam000000000133ede1 & 1) == 0) {
    native_sub_43273c(&Method_UnityEngine_Component_GetComponent_Image____12e2a78);
    native_sub_43273c(&Method_UnityEngine_Component_GetComponentsInChildren_Button____12e2de8);
    native_sub_43273c(&Method_System_Collections_Generic_List_Sprite__Add___12dce58);
    native_sub_43273c(&Method_System_Collections_Generic_List_Sprite___ctor___12dce50);
    native_sub_43273c(&System_Collections_Generic_List_Sprite__TypeInfo_12d2b50);
    bRam000000000133ede1 = 1;
  }
  lVar2 = native_sub_432808(_System_Collections_Generic_List_Sprite__TypeInfo_12d2b50);
  native_System_Collections_Generic_List_XmlEventCache_XmlEvent______ctor_d3ff44
            (lVar2,_Method_System_Collections_Generic_List_Sprite___ctor___12dce50);
  plVar5 = (long *)(param_1 + 0x48);
  *plVar5 = lVar2;
  native_sub_4326e0(plVar5,lVar2);
  if ((*(long *)(param_1 + 0x50) != 0) &&
     (lVar2 = native_UnityEngine_Component__GetComponentsInChildren_BE2_UI_SelectionPanel__49de1c
                        (*(long *)(param_1 + 0x50),
                         _Method_UnityEngine_Component_GetComponentsInChildren_Button____12e2de8),
     lVar2 != 0)) {
    uVar1 = *(uint *)(lVar2 + 0x18);
    if (0 < (int)uVar1) {
      uVar7 = 0;
      do {
        if (uVar1 <= uVar7) {
          uVar4 = native_sub_43283c();
                    /* WARNING: Subroutine does not return */
          native_sub_4327dc(uVar4,0);
        }
        lVar3 = *(long *)(lVar2 + (long)(int)uVar7 * 8 + 0x20);
        if (lVar3 == 0) goto LAB_00600d18;
        lVar6 = *plVar5;
        lVar3 = native_UnityEngine_Component__get_transform_8da62c(lVar3,0);
        if ((((lVar3 == 0) ||
             (lVar3 = native_UnityEngine_Transform__GetChild_772ef0(lVar3,0,0), lVar3 == 0)) ||
            (lVar3 = native_UnityEngine_Component__GetComponent_ActiveAnimation__49daec
                               (lVar3,_Method_UnityEngine_Component_GetComponent_Image____12e2a78),
            lVar3 == 0)) || (lVar6 == 0)) goto LAB_00600d18;
        native_System_Collections_Generic_List_int_____Add_d40c00
                  (lVar6,*(undefined8 *)(lVar3 + 0xd0),
                   _Method_System_Collections_Generic_List_Sprite__Add___12dce58);
        uVar1 = *(uint *)(lVar2 + 0x18);
        uVar7 = uVar7 + 1;
      } while ((int)uVar7 < (int)uVar1);
    }
    return;
  }
LAB_00600d18:
                    /* WARNING: Subroutine does not return */
  native_sub_432810();
}



/* MG_BlocksEngine2.Horizontal.Environment.BE2_HorizontalFunctionBlocksManager$$CreateFunctionBlock @ 0x600d28
 * void MG_BlocksEngine2_Horizontal_Environment_BE2_HorizontalFunctionBlocksManager__CreateFunctionBlock (MG_BlocksEngine2_Horizontal_Environment_BE2_HorizontalFunctionBlocksManager_o* __this, System_Collections_Generic_List_DefineItem__o* items, const MethodInfo* method); */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* MG_BlocksEngine2.Horizontal.Environment.BE2_HorizontalFunctionBlocksManager$$CreateFunctionBlock
   void 
   MG_BlocksEngine2_Horizontal_Environment_BE2_HorizontalFunctionBlocksManager__CreateFunctionBlock
   (MG_BlocksEngine2_Horizontal_Environment_BE2_HorizontalFunctionBlocksManager_o* __this,
   System_Collections_Generic_List_DefineItem__o* items, const MethodInfo* method); */

void native_MG_BlocksEngine2_Horizontal_Environment_BE2_HorizontalFunctionBlocksManager__CreateFunctionBlock_600d28
               (undefined1 param_1 [16],undefined8 param_2,undefined8 param_3,undefined8 param_4,
               long *param_5,long param_6)

{
  long lVar1;
  long *plVar2;
  undefined8 uVar3;
  ulong uVar4;
  long lVar5;
  undefined8 uVar6;
  undefined8 *puVar7;
  ulong uVar8;
  ulong uVar9;
  int *piVar10;
  long lVar11;
  undefined8 uVar12;
  long *plVar13;
  undefined8 uVar14;
  undefined8 uVar15;
  undefined8 uVar16;
  undefined8 uVar17;
  undefined8 uStack_d8;
  undefined8 uStack_d0;
  long lStack_c8;
  undefined8 uStack_c0;
  undefined8 uStack_b8;
  long lStack_b0;
  
  if ((bRam000000000133ede2 & 1) == 0) {
    native_sub_43273c(&Method_UnityEngine_Component_GetComponent_I_BE2_BlockLayout____12e2a10);
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
                      Method_UnityEngine_GameObject_GetComponent_BE2_BlockSectionHeader_Custom____12e4910
                     );
    native_sub_43273c(&Method_UnityEngine_GameObject_GetComponent_BE2_Ins_DefineFunction____12e4928)
    ;
    native_sub_43273c(&MG_BlocksEngine2_Block_I_BE2_BlockLayout_TypeInfo_12d4de0);
    native_sub_43273c(&MG_BlocksEngine2_Block_I_BE2_BlockSectionHeader_TypeInfo_12d4df8);
    native_sub_43273c(&MG_BlocksEngine2_Block_I_BE2_BlockSection_TypeInfo_12d4de8);
    native_sub_43273c(&MG_BlocksEngine2_Environment_I_BE2_ProgrammingEnv_TypeInfo_12d4e38);
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
                      Method_MG_BlocksEngine2_Horizontal_Environment_BE2_HorizontalFunctionBlocksManager___c__CreateFunctionBlock_b__3_0___12e9658
                     );
    native_sub_43273c(&
                      MG_BlocksEngine2_Horizontal_Environment_BE2_HorizontalFunctionBlocksManager___c_TypeInfo_12d7028
                     );
    native_sub_43273c(&StringLiteral_custom_12f42a0);
    bRam000000000133ede2 = 1;
  }
  uStack_c0 = 0;
  uStack_b8 = 0;
  lStack_b0 = 0;
  lVar1 = native_MG_BlocksEngine2_Core_BE2_ExecutionManager__get_Instance_564464(0);
  if (lVar1 != 0) {
    lVar1 = *(long *)(lVar1 + 0x20);
    if (((*(byte *)(
                   _MG_BlocksEngine2_Horizontal_Environment_BE2_HorizontalFunctionBlocksManager___c_TypeInfo_12d7028
                   + 0x133) >> 2 & 1) != 0) &&
       (*(int *)(
                _MG_BlocksEngine2_Horizontal_Environment_BE2_HorizontalFunctionBlocksManager___c_TypeInfo_12d7028
                + 0xe0) == 0)) {
      native_sub_4327ec();
    }
    puVar7 = *(undefined8 **)
              (
              _MG_BlocksEngine2_Horizontal_Environment_BE2_HorizontalFunctionBlocksManager___c_TypeInfo_12d7028
              + 0xb8);
    lVar11 = puVar7[1];
    if (lVar11 == 0) {
      if (((*(byte *)(
                     _MG_BlocksEngine2_Horizontal_Environment_BE2_HorizontalFunctionBlocksManager___c_TypeInfo_12d7028
                     + 0x133) >> 2 & 1) != 0) &&
         (*(int *)(
                  _MG_BlocksEngine2_Horizontal_Environment_BE2_HorizontalFunctionBlocksManager___c_TypeInfo_12d7028
                  + 0xe0) == 0)) {
        native_sub_4327ec();
        puVar7 = *(undefined8 **)
                  (
                  _MG_BlocksEngine2_Horizontal_Environment_BE2_HorizontalFunctionBlocksManager___c_TypeInfo_12d7028
                  + 0xb8);
      }
      uVar12 = *puVar7;
      lVar11 = native_sub_432808(_System_Predicate_I_BE2_ProgrammingEnv__TypeInfo_12d2da0);
      native_System_Predicate_BaseInvokableCall____ctor_ac31d4
                (lVar11,uVar12,
                 _Method_MG_BlocksEngine2_Horizontal_Environment_BE2_HorizontalFunctionBlocksManager___c__CreateFunctionBlock_b__3_0___12e9658
                 ,_Method_System_Predicate_I_BE2_ProgrammingEnv___ctor___12ddaf8);
      plVar2 = (long *)(*(long *)(
                                 _MG_BlocksEngine2_Horizontal_Environment_BE2_HorizontalFunctionBlocksManager___c_TypeInfo_12d7028
                                 + 0xb8) + 8);
      *plVar2 = lVar11;
      native_sub_4326e0(plVar2,lVar11);
    }
    if (lVar1 != 0) {
      plVar2 = (long *)native_System_Collections_Generic_List_I_BE2_ProgrammingEnv___Find_d41304
                                 (lVar1,lVar11,
                                  _Method_System_Collections_Generic_List_I_BE2_ProgrammingEnv__Find___12dc9f0
                                 );
      if (param_5[3] != 0) {
        lVar1 = native_UnityEngine_GameObject__GetComponent_BE2_BlockSectionHeader_Custom__4a2214
                          (param_5[3],
                           _Method_UnityEngine_GameObject_GetComponent_BE2_Ins_DefineFunction____12e4928
                          );
        uVar14 = native_UnityEngine_Vector3__get_zero_776668(0);
        uVar12 = param_2;
        uVar17 = param_3;
        uVar15 = native_UnityEngine_Quaternion__get_identity_7628fc(0);
        if (plVar2 != (long *)0x0) {
          lVar11 = *plVar2;
          if ((ulong)*(ushort *)(lVar11 + 0x12a) != 0) {
            uVar8 = 0;
            piVar10 = (int *)(*(long *)(lVar11 + 0xb0) + 8);
            do {
              if (*(long *)(piVar10 + -2) ==
                  _MG_BlocksEngine2_Environment_I_BE2_ProgrammingEnv_TypeInfo_12d4e38) {
                puVar7 = (undefined8 *)(lVar11 + (long)*piVar10 * 0x10 + 0x138);
                goto LAB_00600ffc;
              }
              uVar8 = uVar8 + 1;
              piVar10 = piVar10 + 4;
            } while (uVar8 < *(ushort *)(lVar11 + 0x12a));
          }
          puVar7 = (undefined8 *)
                   native_sub_3c9b34(plVar2,
                                     _MG_BlocksEngine2_Environment_I_BE2_ProgrammingEnv_TypeInfo_12d4e38
                                     ,0);
LAB_00600ffc:
          uVar3 = (*(code *)*puVar7)(plVar2,puVar7[1]);
          if (((*(byte *)(_UnityEngine_Object_TypeInfo_12d54e0 + 0x133) >> 2 & 1) != 0) &&
             (*(int *)(_UnityEngine_Object_TypeInfo_12d54e0 + 0xe0) == 0)) {
            native_sub_4327ec(_UnityEngine_Object_TypeInfo_12d54e0);
          }
          lVar11 = native_UnityEngine_Object__Instantiate_BE2_Ins_DefineFunction__4a67c0
                             (uVar14,param_2,param_3,uVar15,uVar12,uVar17,param_4,lVar1,uVar3,
                              _Method_UnityEngine_Object_Instantiate_BE2_Ins_DefineFunction____12e5a80
                             );
          if ((lVar11 != 0) &&
             (plVar2 = (long *)native_UnityEngine_Component__GetComponent_ActiveAnimation__49daec
                                         (lVar11,
                                          _Method_UnityEngine_Component_GetComponent_I_BE2_BlockLayout____12e2a10
                                         ), lVar1 != 0)) {
            uVar12 = native_UnityEngine_Object__get_name_8e8098(lVar1,0);
            native_UnityEngine_Object__set_name_8e9c08(lVar11,uVar12,0);
            lVar1 = native_UnityEngine_Component__get_transform_8da62c(lVar11,0);
            if (lVar1 != 0) {
              uVar8 = (ulong)*(uint *)((long)param_5 + 0x44);
              uVar17 = 0;
              native_UnityEngine_Transform__set_position_77174c((int)param_5[8],uVar8,0,lVar1,0);
              uVar12 = native_sub_432808(_System_Collections_Generic_List_string__TypeInfo_12d2b60);
              native_System_Collections_Generic_List_XmlEventCache_XmlEvent______ctor_d3ff44
                        (uVar12,_Method_System_Collections_Generic_List_string___ctor___12dce88);
              if (param_6 != 0) {
                native_System_Collections_Generic_List_BE2_Op_FunctionLocalVariable___GetEnumerator_d414fc
                          (&uStack_d8,param_6,
                           _Method_System_Collections_Generic_List_DefineItem__GetEnumerator___12dc730
                          );
                lStack_b0 = lStack_c8;
                uStack_b8 = uStack_d0;
                uStack_c0 = uStack_d8;
                do {
                  do {
                    uVar4 = native_System_Collections_Generic_List_Enumerator_BE2_Op_FunctionLocalVariable___MoveNext_7e8f30
                                      (&uStack_c0,
                                       _Method_System_Collections_Generic_List_Enumerator_DefineItem__MoveNext___12da428
                                      );
                    lVar1 = lStack_b0;
                    if ((uVar4 & 1) == 0) {
                      native_System_Collections_Generic_List_Enumerator_BE2_Op_FunctionLocalVariable___Dispose_7e8f2c
                                (&uStack_c0,
                                 _Method_System_Collections_Generic_List_Enumerator_DefineItem__Dispose___12da420
                                );
                      native_MG_BlocksEngine2_Utils_BE2_BlockUtils__UnloadPrefab_56ebc0(0);
                      (**(code **)(*param_5 + 0x188))
                                (param_5,param_6,lVar11,*(undefined8 *)(*param_5 + 400));
                      return;
                    }
                    if (lStack_b0 == 0) {
                    /* WARNING: Subroutine does not return */
                      native_sub_432810();
                    }
                    uVar4 = native_System_String__op_Equality_afc18c
                                      (*(undefined8 *)(lStack_b0 + 0x10),
                                       _StringLiteral_custom_12f42a0,0);
                  } while ((uVar4 & 1) == 0);
                  lVar5 = native_MG_BlocksEngine2_Environment_BE2_FunctionBlocksManager__get_Instance_5fd2f8
                                    ();
                  if (lVar5 == 0) {
                    /* WARNING: Subroutine does not return */
                    native_sub_432810();
                  }
                  uVar14 = *(undefined8 *)(lVar5 + 0x30);
                  uVar3 = native_UnityEngine_Vector3__get_zero_776668(0);
                  uVar4 = uVar8;
                  uVar12 = uVar17;
                  uVar16 = native_UnityEngine_Quaternion__get_identity_7628fc(0);
                  if (plVar2 == (long *)0x0) {
                    /* WARNING: Subroutine does not return */
                    native_sub_432810();
                  }
                  lVar5 = *plVar2;
                  if ((ulong)*(ushort *)(lVar5 + 0x12a) != 0) {
                    uVar9 = 0;
                    piVar10 = (int *)(*(long *)(lVar5 + 0xb0) + 8);
                    do {
                      if (*(long *)(piVar10 + -2) ==
                          _MG_BlocksEngine2_Block_I_BE2_BlockLayout_TypeInfo_12d4de0) {
                        puVar7 = (undefined8 *)(lVar5 + (long)(*piVar10 + 2) * 0x10 + 0x138);
                        goto LAB_0060120c;
                      }
                      uVar9 = uVar9 + 1;
                      piVar10 = piVar10 + 4;
                    } while (uVar9 < *(ushort *)(lVar5 + 0x12a));
                  }
                  puVar7 = (undefined8 *)
                           native_sub_3c9b34(plVar2,
                                             _MG_BlocksEngine2_Block_I_BE2_BlockLayout_TypeInfo_12d4de0
                                             ,2);
LAB_0060120c:
                  lVar5 = (*(code *)*puVar7)(plVar2,puVar7[1]);
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
                    uVar9 = 0;
                    piVar10 = (int *)(*(long *)(lVar5 + 0xb0) + 8);
                    do {
                      if (*(long *)(piVar10 + -2) ==
                          _MG_BlocksEngine2_Block_I_BE2_BlockSection_TypeInfo_12d4de8) {
                        puVar7 = (undefined8 *)(lVar5 + (long)(*piVar10 + 1) * 0x10 + 0x138);
                        goto LAB_00601284;
                      }
                      uVar9 = uVar9 + 1;
                      piVar10 = piVar10 + 4;
                    } while (uVar9 < *(ushort *)(lVar5 + 0x12a));
                  }
                  puVar7 = (undefined8 *)
                           native_sub_3c9b34(plVar13,
                                             _MG_BlocksEngine2_Block_I_BE2_BlockSection_TypeInfo_12d4de8
                                             ,1);
LAB_00601284:
                  plVar13 = (long *)(*(code *)*puVar7)(plVar13,puVar7[1]);
                  if (plVar13 == (long *)0x0) {
                    /* WARNING: Subroutine does not return */
                    native_sub_432810();
                  }
                  lVar5 = *plVar13;
                  if ((ulong)*(ushort *)(lVar5 + 0x12a) != 0) {
                    uVar9 = 0;
                    piVar10 = (int *)(*(long *)(lVar5 + 0xb0) + 8);
                    do {
                      if (*(long *)(piVar10 + -2) ==
                          _MG_BlocksEngine2_Block_I_BE2_BlockSectionHeader_TypeInfo_12d4df8) {
                        puVar7 = (undefined8 *)(lVar5 + (long)*piVar10 * 0x10 + 0x138);
                        goto LAB_006012ec;
                      }
                      uVar9 = uVar9 + 1;
                      piVar10 = piVar10 + 4;
                    } while (uVar9 < *(ushort *)(lVar5 + 0x12a));
                  }
                  puVar7 = (undefined8 *)
                           native_sub_3c9b34(plVar13,
                                             _MG_BlocksEngine2_Block_I_BE2_BlockSectionHeader_TypeInfo_12d4df8
                                             ,0);
LAB_006012ec:
                  uVar6 = (*(code *)*puVar7)(plVar13,puVar7[1]);
                  if (((*(byte *)(_UnityEngine_Object_TypeInfo_12d54e0 + 0x133) >> 2 & 1) != 0) &&
                     (*(int *)(_UnityEngine_Object_TypeInfo_12d54e0 + 0xe0) == 0)) {
                    native_sub_4327ec();
                  }
                  lVar5 = native_UnityEngine_Object__Instantiate_BE2_Ins_DefineFunction__4a67c0
                                    (uVar3,uVar8,uVar17,uVar16,uVar4,uVar12,uVar15,uVar14,uVar6,
                                     _Method_UnityEngine_Object_Instantiate_GameObject____12e5a88);
                  if (lVar5 == 0) {
                    /* WARNING: Subroutine does not return */
                    native_sub_432810();
                  }
                  lVar5 = native_UnityEngine_GameObject__GetComponent_BE2_BlockSectionHeader_Custom__4a2214
                                    (lVar5,
                                     _Method_UnityEngine_GameObject_GetComponent_BE2_BlockSectionHeader_Custom____12e4910
                                    );
                  if (lVar5 == 0) {
                    /* WARNING: Subroutine does not return */
                    native_sub_432810();
                  }
                  *(undefined8 *)(lVar5 + 0x20) = *(undefined8 *)(lVar1 + 0x18);
                  native_sub_4326e0();
                  uVar15 = uVar16;
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



/* MG_BlocksEngine2.Horizontal.Environment.BE2_HorizontalFunctionBlocksManager$$CreateSelectionFunction @ 0x601490
 * void MG_BlocksEngine2_Horizontal_Environment_BE2_HorizontalFunctionBlocksManager__CreateSelectionFunction (MG_BlocksEngine2_Horizontal_Environment_BE2_HorizontalFunctionBlocksManager_o* __this, System_Collections_Generic_List_DefineItem__o* items, BE2_Ins_DefineFunction_o* defineBlockIns, const MethodInfo* method); */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* MG_BlocksEngine2.Horizontal.Environment.BE2_HorizontalFunctionBlocksManager$$CreateSelectionFunction
   void 
   MG_BlocksEngine2_Horizontal_Environment_BE2_HorizontalFunctionBlocksManager__CreateSelectionFunction
   (MG_BlocksEngine2_Horizontal_Environment_BE2_HorizontalFunctionBlocksManager_o* __this,
   System_Collections_Generic_List_DefineItem__o* items, BE2_Ins_DefineFunction_o* defineBlockIns,
   const MethodInfo* method); */

void native_MG_BlocksEngine2_Horizontal_Environment_BE2_HorizontalFunctionBlocksManager__CreateSelectionFunction_601490
               (undefined1 param_1 [16],undefined8 param_2,undefined8 param_3,undefined8 param_4,
               long param_5,long param_6,undefined8 param_7)

{
  uint uVar1;
  long lVar2;
  long *plVar3;
  ulong uVar4;
  long lVar5;
  undefined8 *puVar6;
  undefined8 uVar7;
  undefined8 uVar8;
  long lVar9;
  int *piVar10;
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
  
  if ((bRam000000000133ede3 & 1) == 0) {
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
                      Method_UnityEngine_GameObject_GetComponent_BE2_BlockSectionHeader_Custom____12e4910
                     );
    native_sub_43273c(&
                      Method_UnityEngine_GameObject_GetComponent_BE2_DragHorizontalSelectionFunction____12e4918
                     );
    native_sub_43273c(&Method_UnityEngine_GameObject_GetComponent_I_BE2_BlockLayout____12e49a0);
    native_sub_43273c(&MG_BlocksEngine2_Block_I_BE2_BlockLayout_TypeInfo_12d4de0);
    native_sub_43273c(&MG_BlocksEngine2_Block_I_BE2_BlockSectionHeader_TypeInfo_12d4df8);
    native_sub_43273c(&MG_BlocksEngine2_Block_I_BE2_BlockSection_TypeInfo_12d4de8);
    native_sub_43273c(&Method_System_Collections_Generic_List_DefineItem__GetEnumerator___12dc730);
    native_sub_43273c(&Method_UnityEngine_Object_Instantiate_GameObject____12e5a88);
    native_sub_43273c(&UnityEngine_Object_TypeInfo_12d54e0);
    native_sub_43273c(&StringLiteral_custom_12f42a0);
    bRam000000000133ede3 = 1;
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
        uVar11 = *(undefined8 *)(param_5 + 0x20);
        uVar14 = native_UnityEngine_Vector3__get_zero_776668(0);
        uVar8 = param_2;
        uVar16 = param_3;
        uVar15 = native_UnityEngine_Quaternion__get_identity_7628fc(0);
        uVar12 = *(undefined8 *)(param_5 + 0x38);
        if (((*(byte *)(_UnityEngine_Object_TypeInfo_12d54e0 + 0x133) >> 2 & 1) != 0) &&
           (*(int *)(_UnityEngine_Object_TypeInfo_12d54e0 + 0xe0) == 0)) {
          native_sub_4327ec();
        }
        lVar2 = native_UnityEngine_Object__Instantiate_BE2_Ins_DefineFunction__4a67c0
                          (uVar14,param_2,param_3,uVar15,uVar8,uVar16,param_4,uVar11,uVar12,
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
                                     ), lVar9 = lStack_b0, (uVar4 & 1) != 0) {
              if (lStack_b0 == 0) {
                    /* WARNING: Subroutine does not return */
                native_sub_432810();
              }
              uVar4 = native_System_String__op_Equality_afc18c
                                (*(undefined8 *)(lStack_b0 + 0x10),_StringLiteral_custom_12f42a0,0);
              if ((uVar4 & 1) != 0) {
                lVar5 = native_MG_BlocksEngine2_Environment_BE2_FunctionBlocksManager__get_Instance_5fd2f8
                                  ();
                if (lVar5 == 0) {
                    /* WARNING: Subroutine does not return */
                  native_sub_432810();
                }
                uVar11 = *(undefined8 *)(lVar5 + 0x30);
                uVar12 = native_UnityEngine_Vector3__get_zero_776668(0);
                uVar8 = param_2;
                uVar16 = param_3;
                uVar14 = native_UnityEngine_Quaternion__get_identity_7628fc(0);
                if (plVar3 == (long *)0x0) {
                    /* WARNING: Subroutine does not return */
                  native_sub_432810();
                }
                lVar5 = *plVar3;
                if ((ulong)*(ushort *)(lVar5 + 0x12a) != 0) {
                  uVar4 = 0;
                  piVar10 = (int *)(*(long *)(lVar5 + 0xb0) + 8);
                  do {
                    if (*(long *)(piVar10 + -2) ==
                        _MG_BlocksEngine2_Block_I_BE2_BlockLayout_TypeInfo_12d4de0) {
                      puVar6 = (undefined8 *)(lVar5 + (long)(*piVar10 + 2) * 0x10 + 0x138);
                      goto LAB_00601790;
                    }
                    uVar4 = uVar4 + 1;
                    piVar10 = piVar10 + 4;
                  } while (uVar4 < *(ushort *)(lVar5 + 0x12a));
                }
                puVar6 = (undefined8 *)
                         native_sub_3c9b34(plVar3,
                                           _MG_BlocksEngine2_Block_I_BE2_BlockLayout_TypeInfo_12d4de0
                                           ,2);
LAB_00601790:
                lVar5 = (*(code *)*puVar6)(plVar3,puVar6[1]);
                if (lVar5 == 0) {
                    /* WARNING: Subroutine does not return */
                  native_sub_432810();
                }
                if (*(int *)(lVar5 + 0x18) == 0) {
                  uVar8 = native_sub_43283c();
                    /* WARNING: Subroutine does not return */
                  native_sub_4327dc(uVar8,0);
                }
                plVar13 = *(long **)(lVar5 + 0x20);
                if (plVar13 == (long *)0x0) {
                    /* WARNING: Subroutine does not return */
                  native_sub_432810();
                }
                lVar5 = *plVar13;
                if ((ulong)*(ushort *)(lVar5 + 0x12a) != 0) {
                  uVar4 = 0;
                  piVar10 = (int *)(*(long *)(lVar5 + 0xb0) + 8);
                  do {
                    if (*(long *)(piVar10 + -2) ==
                        _MG_BlocksEngine2_Block_I_BE2_BlockSection_TypeInfo_12d4de8) {
                      puVar6 = (undefined8 *)(lVar5 + (long)(*piVar10 + 1) * 0x10 + 0x138);
                      goto LAB_00601808;
                    }
                    uVar4 = uVar4 + 1;
                    piVar10 = piVar10 + 4;
                  } while (uVar4 < *(ushort *)(lVar5 + 0x12a));
                }
                puVar6 = (undefined8 *)
                         native_sub_3c9b34(plVar13,
                                           _MG_BlocksEngine2_Block_I_BE2_BlockSection_TypeInfo_12d4de8
                                           ,1);
LAB_00601808:
                plVar13 = (long *)(*(code *)*puVar6)(plVar13,puVar6[1]);
                if (plVar13 == (long *)0x0) {
                    /* WARNING: Subroutine does not return */
                  native_sub_432810();
                }
                lVar5 = *plVar13;
                if ((ulong)*(ushort *)(lVar5 + 0x12a) != 0) {
                  uVar4 = 0;
                  piVar10 = (int *)(*(long *)(lVar5 + 0xb0) + 8);
                  do {
                    if (*(long *)(piVar10 + -2) ==
                        _MG_BlocksEngine2_Block_I_BE2_BlockSectionHeader_TypeInfo_12d4df8) {
                      puVar6 = (undefined8 *)(lVar5 + (long)*piVar10 * 0x10 + 0x138);
                      goto LAB_00601870;
                    }
                    uVar4 = uVar4 + 1;
                    piVar10 = piVar10 + 4;
                  } while (uVar4 < *(ushort *)(lVar5 + 0x12a));
                }
                puVar6 = (undefined8 *)
                         native_sub_3c9b34(plVar13,
                                           _MG_BlocksEngine2_Block_I_BE2_BlockSectionHeader_TypeInfo_12d4df8
                                           ,0);
LAB_00601870:
                uVar7 = (*(code *)*puVar6)(plVar13,puVar6[1]);
                if (((*(byte *)(_UnityEngine_Object_TypeInfo_12d54e0 + 0x133) >> 2 & 1) != 0) &&
                   (*(int *)(_UnityEngine_Object_TypeInfo_12d54e0 + 0xe0) == 0)) {
                  native_sub_4327ec();
                }
                lVar5 = native_UnityEngine_Object__Instantiate_BE2_Ins_DefineFunction__4a67c0
                                  (uVar12,param_2,param_3,uVar14,uVar8,uVar16,uVar15,uVar11,uVar7,
                                   _Method_UnityEngine_Object_Instantiate_GameObject____12e5a88);
                if (lVar5 == 0) {
                    /* WARNING: Subroutine does not return */
                  native_sub_432810();
                }
                lVar5 = native_UnityEngine_GameObject__GetComponent_BE2_BlockSectionHeader_Custom__4a2214
                                  (lVar5,
                                   _Method_UnityEngine_GameObject_GetComponent_BE2_BlockSectionHeader_Custom____12e4910
                                  );
                if (lVar5 == 0) {
                    /* WARNING: Subroutine does not return */
                  native_sub_432810();
                }
                *(undefined8 *)(lVar5 + 0x20) = *(undefined8 *)(lVar9 + 0x18);
                native_sub_4326e0();
                uVar15 = uVar14;
              }
            }
            native_System_Collections_Generic_List_Enumerator_BE2_Op_FunctionLocalVariable___Dispose_7e8f2c
                      (&uStack_c0,
                       _Method_System_Collections_Generic_List_Enumerator_DefineItem__Dispose___12da420
                      );
            if (plVar3 != (long *)0x0) {
              lVar9 = *plVar3;
              if ((ulong)*(ushort *)(lVar9 + 0x12a) != 0) {
                uVar4 = 0;
                piVar10 = (int *)(*(long *)(lVar9 + 0xb0) + 8);
                do {
                  if (*(long *)(piVar10 + -2) ==
                      _MG_BlocksEngine2_Block_I_BE2_BlockLayout_TypeInfo_12d4de0) {
                    puVar6 = (undefined8 *)(lVar9 + (long)(*piVar10 + 6) * 0x10 + 0x138);
                    goto LAB_00601964;
                  }
                  uVar4 = uVar4 + 1;
                  piVar10 = piVar10 + 4;
                } while (uVar4 < *(ushort *)(lVar9 + 0x12a));
              }
              puVar6 = (undefined8 *)
                       native_sub_3c9b34(plVar3,
                                         _MG_BlocksEngine2_Block_I_BE2_BlockLayout_TypeInfo_12d4de0,
                                         6);
LAB_00601964:
              (*(code *)*puVar6)(plVar3,puVar6[1]);
              lVar2 = native_UnityEngine_GameObject__GetComponent_BE2_BlockSectionHeader_Custom__4a2214
                                (lVar2,
                                 _Method_UnityEngine_GameObject_GetComponent_BE2_DragHorizontalSelectionFunction____12e4918
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



/* MG_BlocksEngine2.Horizontal.Environment.BE2_HorizontalFunctionBlocksManager$$.ctor @ 0x601aa0
 * void MG_BlocksEngine2_Horizontal_Environment_BE2_HorizontalFunctionBlocksManager___ctor (MG_BlocksEngine2_Horizontal_Environment_BE2_HorizontalFunctionBlocksManager_o* __this, const MethodInfo* method); */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* MG_BlocksEngine2.Horizontal.Environment.BE2_HorizontalFunctionBlocksManager$$.ctor
   void MG_BlocksEngine2_Horizontal_Environment_BE2_HorizontalFunctionBlocksManager___ctor
   (MG_BlocksEngine2_Horizontal_Environment_BE2_HorizontalFunctionBlocksManager_o* __this, const
   MethodInfo* method); */

long native_MG_BlocksEngine2_Horizontal_Environment_BE2_HorizontalFunctionBlocksManager___ctor_601aa0
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


