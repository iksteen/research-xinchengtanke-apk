/* ARM64 IL2CPP native pseudocode from Ghidra.
 * Recovered implementation, not original C# source.
 * Function boundaries follow the IL2CPP method address table. */


/* MG_BlocksEngine2.Serializer.BE2_BlocksSerializer$$SaveCode @ 0x572798
 * void MG_BlocksEngine2_Serializer_BE2_BlocksSerializer__SaveCode (System_String_o* path, MG_BlocksEngine2_Environment_I_BE2_ProgrammingEnv_o* targetProgrammingEnv, const MethodInfo* method); */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* MG_BlocksEngine2.Serializer.BE2_BlocksSerializer$$SaveCode
   void MG_BlocksEngine2_Serializer_BE2_BlocksSerializer__SaveCode (System_String_o* path,
   MG_BlocksEngine2_Environment_I_BE2_ProgrammingEnv_o* targetProgrammingEnv, const MethodInfo*
   method); */

void native_MG_BlocksEngine2_Serializer_BE2_BlocksSerializer__SaveCode_572798
               (undefined8 param_1,undefined8 param_2)

{
  long *plVar1;
  undefined8 uVar2;
  
  if ((bRam000000000133ea86 & 1) == 0) {
    native_sub_43273c(&MG_BlocksEngine2_Serializer_BE2_BlocksSerializer_TypeInfo_12d3998);
    native_sub_43273c(&System_IO_StreamWriter_TypeInfo_12d5f18);
    native_sub_43273c(&string_TypeInfo_12d5f28);
    native_sub_43273c(&StringLiteral_forceSave_12f4878);
    bRam000000000133ea86 = 1;
  }
  plVar1 = (long *)native_sub_432808(_System_IO_StreamWriter_TypeInfo_12d5f18);
  native_System_IO_StreamWriter___ctor_b076d0(plVar1,param_1,0,0);
  if (((*(byte *)(_MG_BlocksEngine2_Serializer_BE2_BlocksSerializer_TypeInfo_12d3998 + 0x133) >> 2 &
       1) != 0) &&
     (*(int *)(_MG_BlocksEngine2_Serializer_BE2_BlocksSerializer_TypeInfo_12d3998 + 0xe0) == 0)) {
    native_sub_4327ec();
  }
  uVar2 = native_MG_BlocksEngine2_Serializer_BE2_BlocksSerializer__BlocksCodeToXML_5728ac(param_2);
  if (plVar1 != (long *)0x0) {
    (**(code **)(*plVar1 + 0x268))(plVar1,uVar2,*(undefined8 *)(*plVar1 + 0x270));
    (**(code **)(*plVar1 + 0x1b8))(plVar1,*(undefined8 *)(*plVar1 + 0x1c0));
    native_UnityEngine_PlayerPrefs__SetString_761ea8
              (_StringLiteral_forceSave_12f4878,**(undefined8 **)(_string_TypeInfo_12d5f28 + 0xb8),0
              );
    if (pcRam000000000133f7b0 == (code *)0x0) {
      pcRam000000000133f7b0 = (code *)native_sub_4326f0(&UNK_00e27bba);
    }
                    /* WARNING: Could not recover jumptable at 0x007620bc. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*pcRam000000000133f7b0)();
    return;
  }
                    /* WARNING: Subroutine does not return */
  native_sub_432810();
}



/* MG_BlocksEngine2.Serializer.BE2_BlocksSerializer$$BlocksCodeToXML @ 0x5728ac
 * System_String_o* MG_BlocksEngine2_Serializer_BE2_BlocksSerializer__BlocksCodeToXML (MG_BlocksEngine2_Environment_I_BE2_ProgrammingEnv_o* targetProgrammingEnv, const MethodInfo* method); */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* MG_BlocksEngine2.Serializer.BE2_BlocksSerializer$$BlocksCodeToXML
   System_String_o* MG_BlocksEngine2_Serializer_BE2_BlocksSerializer__BlocksCodeToXML
   (MG_BlocksEngine2_Environment_I_BE2_ProgrammingEnv_o* targetProgrammingEnv, const MethodInfo*
   method); */

undefined8
native_MG_BlocksEngine2_Serializer_BE2_BlocksSerializer__BlocksCodeToXML_5728ac(long *param_1)

{
  undefined8 *puVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  long lVar5;
  long lVar6;
  ulong uVar7;
  int *piVar8;
  undefined8 uStack_58;
  undefined8 uStack_50;
  undefined8 uStack_48;
  
  if ((bRam000000000133ea87 & 1) == 0) {
    native_sub_43273c(&Method_MG_BlocksEngine2_Serializer_BE2_BlocksSerializer_OrderOnType___12e2128
                     );
    native_sub_43273c(&MG_BlocksEngine2_Serializer_BE2_BlocksSerializer_TypeInfo_12d3998);
    native_sub_43273c(&Method_System_Linq_Enumerable_OrderBy_I_BE2_Block__int____12e4038);
    native_sub_43273c(&
                      Method_System_Collections_Generic_List_Enumerator_I_BE2_Block__Dispose___12da4c8
                     );
    native_sub_43273c(&
                      Method_System_Collections_Generic_List_Enumerator_I_BE2_Block__MoveNext___12da4d0
                     );
    native_sub_43273c(&
                      Method_System_Collections_Generic_List_Enumerator_I_BE2_Block__get_Current___12da4d8
                     );
    native_sub_43273c(&Method_System_Func_I_BE2_Block__int___ctor___12db288);
    native_sub_43273c(&System_Func_I_BE2_Block__int__TypeInfo_12d2630);
    native_sub_43273c(&MG_BlocksEngine2_Environment_I_BE2_ProgrammingEnv_TypeInfo_12d4e38);
    native_sub_43273c(&Method_System_Collections_Generic_List_I_BE2_Block__AddRange___12dc9a0);
    native_sub_43273c(&Method_System_Collections_Generic_List_I_BE2_Block__GetEnumerator___12dc9a8);
    native_sub_43273c(&Method_System_Collections_Generic_List_I_BE2_Block___ctor___12dc990);
    native_sub_43273c(&System_Collections_Generic_List_I_BE2_Block__TypeInfo_12d2a70);
    native_sub_43273c(&StringLiteral_____12eaba0);
    native_sub_43273c(&StringLiteral__12eaac0);
    bRam000000000133ea87 = 1;
  }
  uVar4 = _StringLiteral__12eaac0;
  uStack_58 = 0;
  uStack_50 = 0;
  uStack_48 = 0;
  if (param_1 != (long *)0x0) {
    lVar5 = *param_1;
    if ((ulong)*(ushort *)(lVar5 + 0x12a) != 0) {
      uVar7 = 0;
      piVar8 = (int *)(*(long *)(lVar5 + 0xb0) + 8);
      do {
        if (*(long *)(piVar8 + -2) ==
            _MG_BlocksEngine2_Environment_I_BE2_ProgrammingEnv_TypeInfo_12d4e38) {
          puVar1 = (undefined8 *)(lVar5 + (long)(*piVar8 + 5) * 0x10 + 0x138);
          goto LAB_00572a08;
        }
        uVar7 = uVar7 + 1;
        piVar8 = piVar8 + 4;
      } while (uVar7 < *(ushort *)(lVar5 + 0x12a));
    }
    puVar1 = (undefined8 *)
             native_sub_3c9b34(param_1,
                               _MG_BlocksEngine2_Environment_I_BE2_ProgrammingEnv_TypeInfo_12d4e38,5
                              );
LAB_00572a08:
    (*(code *)*puVar1)(param_1,puVar1[1]);
    lVar5 = native_sub_432808(_System_Collections_Generic_List_I_BE2_Block__TypeInfo_12d2a70);
    native_System_Collections_Generic_List_XmlEventCache_XmlEvent______ctor_d3ff44
              (lVar5,_Method_System_Collections_Generic_List_I_BE2_Block___ctor___12dc990);
    lVar6 = *param_1;
    if ((ulong)*(ushort *)(lVar6 + 0x12a) != 0) {
      uVar7 = 0;
      piVar8 = (int *)(*(long *)(lVar6 + 0xb0) + 8);
      do {
        if (*(long *)(piVar8 + -2) ==
            _MG_BlocksEngine2_Environment_I_BE2_ProgrammingEnv_TypeInfo_12d4e38) {
          puVar1 = (undefined8 *)(lVar6 + (long)(*piVar8 + 1) * 0x10 + 0x138);
          goto LAB_00572a90;
        }
        uVar7 = uVar7 + 1;
        piVar8 = piVar8 + 4;
      } while (uVar7 < *(ushort *)(lVar6 + 0x12a));
    }
    puVar1 = (undefined8 *)
             native_sub_3c9b34(param_1,
                               _MG_BlocksEngine2_Environment_I_BE2_ProgrammingEnv_TypeInfo_12d4e38,1
                              );
LAB_00572a90:
    uVar2 = (*(code *)*puVar1)(param_1,puVar1[1]);
    uVar3 = native_sub_432808(_System_Func_I_BE2_Block__int__TypeInfo_12d2630);
    native_System_Func_I_BE2_Block__int____ctor_b4ce6c
              (uVar3,0,
               _Method_MG_BlocksEngine2_Serializer_BE2_BlocksSerializer_OrderOnType___12e2128,
               _Method_System_Func_I_BE2_Block__int___ctor___12db288);
    uVar2 = native_System_Linq_Enumerable__OrderBy_I_BE2_Block__int__4a03b4
                      (uVar2,uVar3,
                       _Method_System_Linq_Enumerable_OrderBy_I_BE2_Block__int____12e4038);
    if (lVar5 != 0) {
      native_System_Collections_Generic_List_BE2_Dropdown___AddRange_d40e50
                (lVar5,uVar2,_Method_System_Collections_Generic_List_I_BE2_Block__AddRange___12dc9a0
                );
      native_System_Collections_Generic_List_BE2_Op_FunctionLocalVariable___GetEnumerator_d414fc
                (&uStack_58,lVar5,
                 _Method_System_Collections_Generic_List_I_BE2_Block__GetEnumerator___12dc9a8);
      while (uVar7 = native_System_Collections_Generic_List_Enumerator_BE2_Op_FunctionLocalVariable___MoveNext_7e8f30
                               (&uStack_58,
                                _Method_System_Collections_Generic_List_Enumerator_I_BE2_Block__MoveNext___12da4d0
                               ), uVar2 = uStack_48, (uVar7 & 1) != 0) {
        if (((*(byte *)(_MG_BlocksEngine2_Serializer_BE2_BlocksSerializer_TypeInfo_12d3998 + 0x133)
              >> 2 & 1) != 0) &&
           (*(int *)(_MG_BlocksEngine2_Serializer_BE2_BlocksSerializer_TypeInfo_12d3998 + 0xe0) == 0
           )) {
          native_sub_4327ec();
        }
        native_MG_BlocksEngine2_Serializer_BE2_BlocksSerializer__BlockToSerializable_569b40(uVar2);
        uVar2 = native_MG_BlocksEngine2_Serializer_BE2_BlocksSerializer__SerializableToXML_572c24();
        uVar4 = native_System_String__Concat_afbd68(uVar4,uVar2,0);
        uVar4 = native_System_String__Concat_afbd68(uVar4,_StringLiteral_____12eaba0,0);
      }
      native_System_Collections_Generic_List_Enumerator_BE2_Op_FunctionLocalVariable___Dispose_7e8f2c
                (&uStack_58,
                 _Method_System_Collections_Generic_List_Enumerator_I_BE2_Block__Dispose___12da4c8);
      return uVar4;
    }
  }
                    /* WARNING: Subroutine does not return */
  native_sub_432810();
}



/* MG_BlocksEngine2.Serializer.BE2_BlocksSerializer$$OrderOnType @ 0x572c48
 * int32_t MG_BlocksEngine2_Serializer_BE2_BlocksSerializer__OrderOnType (MG_BlocksEngine2_Block_I_BE2_Block_o* block, const MethodInfo* method); */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* MG_BlocksEngine2.Serializer.BE2_BlocksSerializer$$OrderOnType
   int32_t MG_BlocksEngine2_Serializer_BE2_BlocksSerializer__OrderOnType
   (MG_BlocksEngine2_Block_I_BE2_Block_o* block, const MethodInfo* method); */

bool native_MG_BlocksEngine2_Serializer_BE2_BlocksSerializer__OrderOnType_572c48(long *param_1)

{
  int iVar1;
  undefined8 *puVar2;
  long lVar3;
  ulong uVar4;
  int *piVar5;
  
  if ((bRam000000000133ea88 & 1) == 0) {
    native_sub_43273c(&MG_BlocksEngine2_Block_I_BE2_Block_TypeInfo_12d4dd8);
    bRam000000000133ea88 = 1;
  }
  if (param_1 == (long *)0x0) {
                    /* WARNING: Subroutine does not return */
    native_sub_432810();
  }
  lVar3 = *param_1;
  if ((ulong)*(ushort *)(lVar3 + 0x12a) != 0) {
    uVar4 = 0;
    piVar5 = (int *)(*(long *)(lVar3 + 0xb0) + 8);
    do {
      if (*(long *)(piVar5 + -2) == _MG_BlocksEngine2_Block_I_BE2_Block_TypeInfo_12d4dd8) {
        puVar2 = (undefined8 *)(lVar3 + (long)(*piVar5 + 1) * 0x10 + 0x138);
        goto LAB_00572cdc;
      }
      uVar4 = uVar4 + 1;
      piVar5 = piVar5 + 4;
    } while (uVar4 < *(ushort *)(lVar3 + 0x12a));
  }
  puVar2 = (undefined8 *)
           native_sub_3c9b34(param_1,_MG_BlocksEngine2_Block_I_BE2_Block_TypeInfo_12d4dd8,1);
LAB_00572cdc:
  iVar1 = (*(code *)*puVar2)(param_1,puVar2[1]);
  return iVar1 != 5;
}



/* MG_BlocksEngine2.Serializer.BE2_BlocksSerializer$$BlockToSerializable @ 0x569b40
 * MG_BlocksEngine2_Serializer_BE2_SerializableBlock_o* MG_BlocksEngine2_Serializer_BE2_BlocksSerializer__BlockToSerializable (MG_BlocksEngine2_Block_I_BE2_Block_o* block, const MethodInfo* method); */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* MG_BlocksEngine2.Serializer.BE2_BlocksSerializer$$BlockToSerializable
   MG_BlocksEngine2_Serializer_BE2_SerializableBlock_o*
   MG_BlocksEngine2_Serializer_BE2_BlocksSerializer__BlockToSerializable
   (MG_BlocksEngine2_Block_I_BE2_Block_o* block, const MethodInfo* method); */

long * native_MG_BlocksEngine2_Serializer_BE2_BlocksSerializer__BlockToSerializable_569b40
                 (undefined1 param_1 [16],undefined8 param_2,undefined8 param_3,undefined8 param_4,
                 long *param_5)

{
  byte bVar1;
  int iVar2;
  int iVar3;
  long *plVar4;
  undefined8 *puVar5;
  undefined8 uVar6;
  undefined8 uVar7;
  long *plVar8;
  long *plVar9;
  undefined8 uVar10;
  long lVar11;
  undefined8 uVar12;
  long *plVar13;
  undefined8 uVar14;
  undefined8 uVar15;
  long *plVar16;
  uint uVar17;
  long lVar18;
  long lVar19;
  long lVar20;
  ulong uVar21;
  ulong uVar22;
  ulong uVar23;
  int *piVar24;
  uint uVar25;
  uint uVar26;
  long lVar27;
  undefined4 uVar28;
  undefined8 uVar29;
  undefined4 uVar30;
  undefined4 uVar31;
  undefined1 auVar32 [16];
  undefined8 uStack_188;
  undefined8 uStack_180;
  long *plStack_178;
  int aiStack_170 [4];
  undefined8 uStack_160;
  undefined8 uStack_158;
  long *plStack_150;
  undefined8 uStack_140;
  undefined8 uStack_138;
  long *plStack_130;
  
  if ((bRam000000000133ea89 & 1) == 0) {
    native_sub_43273c(&MG_BlocksEngine2_Serializer_BE2_BlocksSerializer_TypeInfo_12d3998);
    native_sub_43273c(&BE2_Ins_DefineFunction_TypeInfo_12d39f8);
    native_sub_43273c(&BE2_Ins_FunctionBlock_var_12d1300);
    native_sub_43273c(&BE2_Ins_FunctionBlock_TypeInfo_12d3a00);
    native_sub_43273c(&BE2_Op_FunctionLocalVariable_var_12d1308);
    native_sub_43273c(&MG_BlocksEngine2_Serializer_BE2_SerializableBlock_TypeInfo_12d3a38);
    native_sub_43273c(&MG_BlocksEngine2_Serializer_BE2_SerializableInput_TypeInfo_12d3a40);
    native_sub_43273c(&MG_BlocksEngine2_Serializer_BE2_SerializableSection_TypeInfo_12d3a48);
    native_sub_43273c(&Method_UnityEngine_Component_GetComponentInChildren_TMP_Text____12e2c98);
    native_sub_43273c(&
                      Method_UnityEngine_Component_GetComponent_BE2_BlockSectionHeader_Custom____12e2928
                     );
    native_sub_43273c(&
                      Method_UnityEngine_Component_GetComponent_BE2_BlockSectionHeader_InputField____12e2930
                     );
    native_sub_43273c(&
                      Method_UnityEngine_Component_GetComponent_BE2_BlockSectionHeader_Label____12e2938
                     );
    native_sub_43273c(&
                      Method_UnityEngine_Component_GetComponent_BE2_BlockSectionHeader_LocalVariable____12e2940
                     );
    native_sub_43273c(&Method_UnityEngine_Component_GetComponent_I_BE2_Block____12e2a08);
    native_sub_43273c(&Method_UnityEngine_Component_GetComponent_TMP_Text____12e2b38);
    native_sub_43273c(&MG_BlocksEngine2_Serializer_DefineItem_TypeInfo_12d43d8);
    native_sub_43273c(&MG_BlocksEngine2_Block_I_BE2_BlockLayout_TypeInfo_12d4de0);
    native_sub_43273c(&MG_BlocksEngine2_Block_I_BE2_BlockSectionBody_TypeInfo_12d4df0);
    native_sub_43273c(&MG_BlocksEngine2_Block_I_BE2_BlockSectionHeaderInput_TypeInfo_12d4e00);
    native_sub_43273c(&MG_BlocksEngine2_Block_I_BE2_BlockSectionHeaderItem_TypeInfo_12d4e08);
    native_sub_43273c(&MG_BlocksEngine2_Block_I_BE2_BlockSectionHeader_TypeInfo_12d4df8);
    native_sub_43273c(&MG_BlocksEngine2_Block_I_BE2_BlockSection_TypeInfo_12d4de8);
    native_sub_43273c(&MG_BlocksEngine2_Block_I_BE2_Block_TypeInfo_12d4dd8);
    native_sub_43273c(&Method_System_Collections_Generic_List_BE2_SerializableBlock__Add___12dc490);
    native_sub_43273c(&Method_System_Collections_Generic_List_BE2_SerializableSection__Add___12dc4c8
                     );
    native_sub_43273c(&Method_System_Collections_Generic_List_DefineItem__Add___12dc728);
    native_sub_43273c(&Method_System_Collections_Generic_List_BE2_SerializableInput__Add___12dc4a8);
    native_sub_43273c(&Method_System_Collections_Generic_List_DefineItem___ctor___12dc720);
    native_sub_43273c(&System_Collections_Generic_List_DefineItem__TypeInfo_12d2a00);
    native_sub_43273c(&UnityEngine_Object_TypeInfo_12d54e0);
    native_sub_43273c(&MG_BlocksEngine2_Attribute_SerializeAsVariableAttribute_var_12d1838);
    native_sub_43273c(&MG_BlocksEngine2_Attribute_SerializeAsVariableAttribute_TypeInfo_12d5d38);
    native_sub_43273c(&System_Type_TypeInfo_12d6340);
    native_sub_43273c(&StringLiteral_custom_12f42a0);
    native_sub_43273c(&StringLiteral_label_12f5370);
    native_sub_43273c(&StringLiteral_variable_12f6a60);
    native_sub_43273c(&StringLiteral_true_12f6790);
    native_sub_43273c(&StringLiteral__12eaac0);
    native_sub_43273c(&StringLiteral__FixedLabel__12f32b0);
    bRam000000000133ea89 = 1;
  }
  plVar4 = (long *)native_sub_432808(
                                    _MG_BlocksEngine2_Serializer_BE2_SerializableBlock_TypeInfo_12d3a38
                                    );
  native_MG_BlocksEngine2_Serializer_BE2_SerializableBlock___ctor_618f9c(plVar4,0);
  if (param_5 == (long *)0x0) goto LAB_0056b2b4;
  lVar18 = *param_5;
  if ((ulong)*(ushort *)(lVar18 + 0x12a) != 0) {
    uVar22 = 0;
    piVar24 = (int *)(*(long *)(lVar18 + 0xb0) + 8);
    do {
      if (*(long *)(piVar24 + -2) == _MG_BlocksEngine2_Block_I_BE2_Block_TypeInfo_12d4dd8) {
        puVar5 = (undefined8 *)(lVar18 + (long)*piVar24 * 0x10 + 0x138);
        goto LAB_00569dc8;
      }
      uVar22 = uVar22 + 1;
      piVar24 = piVar24 + 4;
    } while (uVar22 < *(ushort *)(lVar18 + 0x12a));
  }
  puVar5 = (undefined8 *)
           native_sub_3c9b34(param_5,_MG_BlocksEngine2_Block_I_BE2_Block_TypeInfo_12d4dd8,0);
LAB_00569dc8:
  lVar18 = (*(code *)*puVar5)(param_5,puVar5[1]);
  if ((lVar18 == 0) ||
     (lVar18 = native_UnityEngine_Object__get_name_8e8098(lVar18,0), plVar4 == (long *)0x0))
  goto LAB_0056b2b4;
  plVar4[2] = lVar18;
  native_sub_4326e0();
  lVar18 = *param_5;
  if ((ulong)*(ushort *)(lVar18 + 0x12a) != 0) {
    uVar22 = 0;
    piVar24 = (int *)(*(long *)(lVar18 + 0xb0) + 8);
    do {
      if (*(long *)(piVar24 + -2) == _MG_BlocksEngine2_Block_I_BE2_Block_TypeInfo_12d4dd8) {
        puVar5 = (undefined8 *)(lVar18 + (long)*piVar24 * 0x10 + 0x138);
        goto LAB_00569e50;
      }
      uVar22 = uVar22 + 1;
      piVar24 = piVar24 + 4;
    } while (uVar22 < *(ushort *)(lVar18 + 0x12a));
  }
  puVar5 = (undefined8 *)
           native_sub_3c9b34(param_5,_MG_BlocksEngine2_Block_I_BE2_Block_TypeInfo_12d4dd8,0);
LAB_00569e50:
  lVar18 = (*(code *)*puVar5)(param_5,puVar5[1]);
  if (lVar18 == 0) goto LAB_0056b2b4;
  uVar28 = native_UnityEngine_Transform__get_localPosition_7717f4(lVar18,0);
  *(undefined4 *)(plVar4 + 3) = uVar28;
  *(int *)((long)plVar4 + 0x1c) = (int)param_2;
  *(int *)(plVar4 + 4) = (int)param_3;
  lVar18 = *param_5;
  if ((ulong)*(ushort *)(lVar18 + 0x12a) != 0) {
    uVar22 = 0;
    piVar24 = (int *)(*(long *)(lVar18 + 0xb0) + 8);
    do {
      if (*(long *)(piVar24 + -2) == _MG_BlocksEngine2_Block_I_BE2_Block_TypeInfo_12d4dd8) {
        puVar5 = (undefined8 *)(lVar18 + (long)(*piVar24 + 4) * 0x10 + 0x138);
        goto LAB_00569ed0;
      }
      uVar22 = uVar22 + 1;
      piVar24 = piVar24 + 4;
    } while (uVar22 < *(ushort *)(lVar18 + 0x12a));
  }
  puVar5 = (undefined8 *)
           native_sub_3c9b34(param_5,_MG_BlocksEngine2_Block_I_BE2_Block_TypeInfo_12d4dd8,4);
LAB_00569ed0:
  lVar18 = (*(code *)*puVar5)(param_5,puVar5[1]);
  if (lVar18 == 0) goto LAB_0056b2b4;
  uVar6 = native_System_Object__GetType_adb48c(lVar18,0);
  uVar7 = _MG_BlocksEngine2_Attribute_SerializeAsVariableAttribute_var_12d1838;
  if (((*(byte *)(_System_Type_TypeInfo_12d6340 + 0x133) >> 2 & 1) != 0) &&
     (*(int *)(_System_Type_TypeInfo_12d6340 + 0xe0) == 0)) {
    native_sub_4327ec(_System_Type_TypeInfo_12d6340);
  }
  uVar7 = native_System_Type__GetTypeFromHandle_b0fb24(uVar7,0);
  plVar8 = (long *)native_System_Attribute__GetCustomAttribute_966890(uVar6,uVar7,0);
  if (plVar8 == (long *)0x0) {
    plVar4[6] = _StringLiteral__12eaac0;
  }
  else {
    if ((*(byte *)(*plVar8 + 300) <
         *(byte *)(_MG_BlocksEngine2_Attribute_SerializeAsVariableAttribute_TypeInfo_12d5d38 + 300))
       || (*(long *)(*(long *)(*plVar8 + 200) +
                     (ulong)*(byte *)(
                                     _MG_BlocksEngine2_Attribute_SerializeAsVariableAttribute_TypeInfo_12d5d38
                                     + 300) * 8 + -8) !=
           _MG_BlocksEngine2_Attribute_SerializeAsVariableAttribute_TypeInfo_12d5d38)) {
      auVar32 = native_sub_432b04();
      plVar4 = auVar32._8_8_;
      lVar18 = auVar32._0_8_;
      if ((bRam000000000133ea8d & 1) == 0) {
        native_sub_43273c(&MG_BlocksEngine2_Block_BE2_BlockSectionHeader_Custom_TypeInfo_12d3978);
        native_sub_43273c(&MG_BlocksEngine2_Block_BE2_BlockSectionHeader_Label_TypeInfo_12d3980);
        native_sub_43273c(&
                          MG_BlocksEngine2_Block_BE2_BlockSectionHeader_LocalVariable_TypeInfo_12d3988
                         );
        native_sub_43273c(&
                          Method_MG_BlocksEngine2_Serializer_BE2_BlocksSerializer_SerializableToBlock___12e2130
                         );
        native_sub_43273c(&MG_BlocksEngine2_Serializer_BE2_BlocksSerializer_TypeInfo_12d3998);
        native_sub_43273c(&BE2_Ins_DefineFunction_TypeInfo_12d39f8);
        native_sub_43273c(&BE2_Ins_FunctionBlock_TypeInfo_12d3a00);
        native_sub_43273c(&
                          Method_UnityEngine_Component_GetComponentInChildren_BE2_BlockSectionHeader_Custom____12e2c60
                         );
        native_sub_43273c(&Method_UnityEngine_Component_GetComponent_TMP_Text____12e2b38);
        native_sub_43273c(&UnityEngine_Debug_TypeInfo_12d4338);
        native_sub_43273c(&
                          Method_System_Collections_Generic_List_Enumerator_I_BE2_Block__Dispose___12da4c8
                         );
        native_sub_43273c(&
                          Method_System_Collections_Generic_List_Enumerator_DefineItem__Dispose___12da420
                         );
        native_sub_43273c(&
                          Method_System_Collections_Generic_List_Enumerator_DefineItem__MoveNext___12da428
                         );
        native_sub_43273c(&
                          Method_System_Collections_Generic_List_Enumerator_I_BE2_Block__MoveNext___12da4d0
                         );
        native_sub_43273c(&
                          Method_System_Collections_Generic_List_Enumerator_I_BE2_Block__get_Current___12da4d8
                         );
        native_sub_43273c(&
                          Method_System_Collections_Generic_List_Enumerator_DefineItem__get_Current___12da430
                         );
        native_sub_43273c(&
                          Method_UnityEngine_GameObject_GetComponentInChildren_BE2_BlockSectionHeader_Custom____12e4b00
                         );
        native_sub_43273c(&Method_UnityEngine_GameObject_GetComponentInChildren_TMP_Text____12e4b08)
        ;
        native_sub_43273c(&Method_UnityEngine_GameObject_GetComponent_I_BE2_Block____12e4998);
        native_sub_43273c(&Method_UnityEngine_GameObject_GetComponent_TMP_Text____12e4a50);
        native_sub_43273c(&MG_BlocksEngine2_Block_I_BE2_BlockLayout_TypeInfo_12d4de0);
        native_sub_43273c(&MG_BlocksEngine2_Block_I_BE2_BlockSectionHeaderItem_TypeInfo_12d4e08);
        native_sub_43273c(&MG_BlocksEngine2_Block_I_BE2_BlockSectionHeader_TypeInfo_12d4df8);
        native_sub_43273c(&MG_BlocksEngine2_Block_I_BE2_BlockSection_TypeInfo_12d4de8);
        native_sub_43273c(&MG_BlocksEngine2_Block_I_BE2_Block_TypeInfo_12d4dd8);
        native_sub_43273c(&MG_BlocksEngine2_Core_I_BE2_BlocksStack_TypeInfo_12d4e10);
        native_sub_43273c(&MG_BlocksEngine2_Block_Instruction_I_BE2_InstructionBase_TypeInfo_12d4e30
                         );
        native_sub_43273c(&MG_BlocksEngine2_Block_Instruction_I_BE2_Instruction_TypeInfo_12d4e28);
        native_sub_43273c(&MG_BlocksEngine2_Environment_I_BE2_ProgrammingEnv_TypeInfo_12d4e38);
        native_sub_43273c(&MG_BlocksEngine2_Environment_I_BE2_VariablesManager_TypeInfo_12d4e60);
        native_sub_43273c(&
                          Method_System_Collections_Generic_List_I_BE2_Block__GetEnumerator___12dc9a8
                         );
        native_sub_43273c(&
                          Method_System_Collections_Generic_List_DefineItem__GetEnumerator___12dc730
                         );
        native_sub_43273c(&Method_UnityEngine_Object_Instantiate_GameObject____12e5a88);
        native_sub_43273c(&UnityEngine_Object_TypeInfo_12d54e0);
        native_sub_43273c(&Method_System_Type_GetType___12e75f8);
        native_sub_43273c(&System_Type_TypeInfo_12d6340);
        native_sub_43273c(&StringLiteral_custom_12f42a0);
        native_sub_43273c(&StringLiteral___was_not_found__12eb5f8);
        native_sub_43273c(&StringLiteral_Variables_manager_of_type___12f2ed8);
        native_sub_43273c(&StringLiteral_label_12f5370);
        native_sub_43273c(&StringLiteral_variable_12f6a60);
        native_sub_43273c(&StringLiteral_true_12f6790);
        native_sub_43273c(&StringLiteral__12eaac0);
        native_sub_43273c(&StringLiteral__FixedLabel__12f32b0);
        bRam000000000133ea8d = 1;
      }
      uStack_140 = 0;
      uStack_138 = 0;
      plStack_130 = (long *)0x0;
      uStack_160 = 0;
      uStack_158 = 0;
      plStack_150 = (long *)0x0;
      aiStack_170[3] = 0;
      if (lVar18 == 0) {
        return (long *)0x0;
      }
      uVar6 = *(undefined8 *)(lVar18 + 0x10);
      uVar7 = native_MG_BlocksEngine2_Utils_BE2_BlockUtils__LoadPrefabBlock_56ea18(uVar6);
      if (((*(byte *)(_UnityEngine_Object_TypeInfo_12d54e0 + 0x133) >> 2 & 1) != 0) &&
         (*(int *)(_UnityEngine_Object_TypeInfo_12d54e0 + 0xe0) == 0)) {
        native_sub_4327ec(_UnityEngine_Object_TypeInfo_12d54e0);
      }
      uVar22 = native_UnityEngine_Object__op_Implicit_8e1b98(uVar7,0);
      plVar8 = (long *)0x0;
      if ((uVar22 & 1) == 0) goto LAB_0056db50;
      uVar28 = *(undefined4 *)(lVar18 + 0x18);
      uVar30 = *(undefined4 *)(lVar18 + 0x1c);
      uVar31 = *(undefined4 *)(lVar18 + 0x20);
      uVar10 = native_UnityEngine_Quaternion__get_identity_7628fc(0);
      if (plVar4 == (long *)0x0) goto LAB_0056db8c;
      lVar19 = *plVar4;
      if ((ulong)*(ushort *)(lVar19 + 0x12a) != 0) {
        uVar22 = 0;
        piVar24 = (int *)(*(long *)(lVar19 + 0xb0) + 8);
        do {
          if (*(long *)(piVar24 + -2) ==
              _MG_BlocksEngine2_Environment_I_BE2_ProgrammingEnv_TypeInfo_12d4e38) {
            puVar5 = (undefined8 *)(lVar19 + (long)*piVar24 * 0x10 + 0x138);
            goto LAB_0056b60c;
          }
          uVar22 = uVar22 + 1;
          piVar24 = piVar24 + 4;
        } while (uVar22 < *(ushort *)(lVar19 + 0x12a));
      }
      puVar5 = (undefined8 *)
               native_sub_3c9b34(plVar4,
                                 _MG_BlocksEngine2_Environment_I_BE2_ProgrammingEnv_TypeInfo_12d4e38
                                 ,0);
LAB_0056b60c:
      uVar12 = (*(code *)*puVar5)(plVar4,puVar5[1]);
      if (((*(byte *)(_UnityEngine_Object_TypeInfo_12d54e0 + 0x133) >> 2 & 1) != 0) &&
         (*(int *)(_UnityEngine_Object_TypeInfo_12d54e0 + 0xe0) == 0)) {
        native_sub_4327ec(_UnityEngine_Object_TypeInfo_12d54e0);
      }
      lVar19 = native_UnityEngine_Object__Instantiate_BE2_Ins_DefineFunction__4a67c0
                         (uVar28,uVar30,uVar31,uVar10,param_2,param_3,param_4,uVar7,uVar12,
                          _Method_UnityEngine_Object_Instantiate_GameObject____12e5a88);
      if (lVar19 == 0) goto LAB_0056db8c;
      native_UnityEngine_Object__set_name_8e9c08(lVar19,uVar6,0);
      lVar27 = native_UnityEngine_GameObject__get_transform_8de5c8(lVar19,0);
      if (lVar27 == 0) goto LAB_0056db8c;
      uVar22 = (ulong)*(uint *)(lVar18 + 0x1c);
      uVar7 = 0;
      native_UnityEngine_Transform__set_localPosition_7718a4
                (*(undefined4 *)(lVar18 + 0x18),uVar22,0,lVar27,0);
      lVar27 = native_UnityEngine_GameObject__get_transform_8de5c8(lVar19,0);
      native_UnityEngine_Vector3__get_zero_776668(0);
      if (lVar27 == 0) goto LAB_0056db8c;
      native_UnityEngine_Transform__set_localEulerAngles_77194c(lVar27,0);
      plVar8 = (long *)native_UnityEngine_GameObject__GetComponent_BE2_BlockSectionHeader_Custom__4a2214
                                 (lVar19,
                                  _Method_UnityEngine_GameObject_GetComponent_I_BE2_Block____12e4998
                                 );
      if (plVar8 == (long *)0x0) goto LAB_0056db8c;
      lVar19 = *plVar8;
      if ((ulong)*(ushort *)(lVar19 + 0x12a) != 0) {
        uVar21 = 0;
        piVar24 = (int *)(*(long *)(lVar19 + 0xb0) + 8);
        do {
          if (*(long *)(piVar24 + -2) == _MG_BlocksEngine2_Block_I_BE2_Block_TypeInfo_12d4dd8) {
            puVar5 = (undefined8 *)(lVar19 + (long)(*piVar24 + 4) * 0x10 + 0x138);
            goto LAB_0056b74c;
          }
          uVar21 = uVar21 + 1;
          piVar24 = piVar24 + 4;
        } while (uVar21 < *(ushort *)(lVar19 + 0x12a));
      }
      puVar5 = (undefined8 *)
               native_sub_3c9b34(plVar8,_MG_BlocksEngine2_Block_I_BE2_Block_TypeInfo_12d4dd8,4);
LAB_0056b74c:
      plVar9 = (long *)(*(code *)*puVar5)(plVar8,puVar5[1]);
      if (plVar9 != (long *)0x0) {
        if (*(byte *)(*plVar9 + 300) < *(byte *)(_BE2_Ins_DefineFunction_TypeInfo_12d39f8 + 300)) {
          plVar9 = (long *)0x0;
        }
        else if (*(long *)(*(long *)(*plVar9 + 200) +
                           (ulong)*(byte *)(_BE2_Ins_DefineFunction_TypeInfo_12d39f8 + 300) * 8 + -8
                          ) != _BE2_Ins_DefineFunction_TypeInfo_12d39f8) {
          plVar9 = (long *)0x0;
        }
      }
      uVar21 = native_UnityEngine_Object__op_Implicit_8e1b98(plVar9,0);
      if ((uVar21 & 1) != 0) {
        lVar19 = *plVar8;
        if ((ulong)*(ushort *)(lVar19 + 0x12a) != 0) {
          uVar21 = 0;
          piVar24 = (int *)(*(long *)(lVar19 + 0xb0) + 8);
          do {
            if (*(long *)(piVar24 + -2) == _MG_BlocksEngine2_Block_I_BE2_Block_TypeInfo_12d4dd8) {
              puVar5 = (undefined8 *)(lVar19 + (long)(*piVar24 + 4) * 0x10 + 0x138);
              goto LAB_0056b804;
            }
            uVar21 = uVar21 + 1;
            piVar24 = piVar24 + 4;
          } while (uVar21 < *(ushort *)(lVar19 + 0x12a));
        }
        puVar5 = (undefined8 *)
                 native_sub_3c9b34(plVar8,_MG_BlocksEngine2_Block_I_BE2_Block_TypeInfo_12d4dd8,4);
LAB_0056b804:
        plVar9 = (long *)(*(code *)*puVar5)(plVar8,puVar5[1]);
        if (plVar9 == (long *)0x0) goto LAB_0056db8c;
        if ((*(byte *)(*plVar9 + 300) < *(byte *)(_BE2_Ins_DefineFunction_TypeInfo_12d39f8 + 300))
           || (*(long *)(*(long *)(*plVar9 + 200) +
                         (ulong)*(byte *)(_BE2_Ins_DefineFunction_TypeInfo_12d39f8 + 300) * 8 + -8)
               != _BE2_Ins_DefineFunction_TypeInfo_12d39f8)) goto LAB_0056db8c;
        if (*(byte *)(*plVar9 + 300) < *(byte *)(_BE2_Ins_DefineFunction_TypeInfo_12d39f8 + 300)) {
          plVar9 = (long *)0x0;
        }
        else if (*(long *)(*(long *)(*plVar9 + 200) +
                           (ulong)*(byte *)(_BE2_Ins_DefineFunction_TypeInfo_12d39f8 + 300) * 8 + -8
                          ) != _BE2_Ins_DefineFunction_TypeInfo_12d39f8) {
          plVar9 = (long *)0x0;
        }
        plVar9[0xf] = *(long *)(lVar18 + 0x40);
        native_sub_4326e0();
        if (*(long *)(lVar18 + 0x50) == 0) goto LAB_0056db8c;
        native_System_Collections_Generic_List_BE2_Op_FunctionLocalVariable___GetEnumerator_d414fc
                  (&uStack_188,*(long *)(lVar18 + 0x50),
                   _Method_System_Collections_Generic_List_DefineItem__GetEnumerator___12dc730);
        plStack_130 = plStack_178;
        uStack_138 = uStack_180;
        uStack_140 = uStack_188;
        while (uVar21 = native_System_Collections_Generic_List_Enumerator_BE2_Op_FunctionLocalVariable___MoveNext_7e8f30
                                  (&uStack_140,
                                   _Method_System_Collections_Generic_List_Enumerator_DefineItem__MoveNext___12da428
                                  ), plVar9 = plStack_130, (uVar21 & 1) != 0) {
          if (plStack_130 == (long *)0x0) {
                    /* WARNING: Subroutine does not return */
            native_sub_432810();
          }
          uVar21 = native_System_String__op_Equality_afc18c
                             (plStack_130[2],_StringLiteral_label_12f5370,0);
          if ((uVar21 & 1) == 0) {
            uVar21 = native_System_String__op_Equality_afc18c
                               (plVar9[2],_StringLiteral_variable_12f6a60,0);
            if ((uVar21 & 1) == 0) {
              uVar21 = native_System_String__op_Equality_afc18c
                                 (plVar9[2],_StringLiteral_custom_12f42a0,0);
              if ((uVar21 & 1) != 0) {
                lVar19 = native_MG_BlocksEngine2_Environment_BE2_FunctionBlocksManager__get_Instance_5fd2f8
                                   (0);
                if (lVar19 == 0) {
                    /* WARNING: Subroutine does not return */
                  native_sub_432810();
                }
                uVar6 = *(undefined8 *)(lVar19 + 0x30);
                uVar12 = native_UnityEngine_Vector3__get_zero_776668(0);
                uVar10 = native_UnityEngine_Quaternion__get_identity_7628fc(0);
                lVar19 = *plVar8;
                if ((ulong)*(ushort *)(lVar19 + 0x12a) != 0) {
                  uVar21 = 0;
                  piVar24 = (int *)(*(long *)(lVar19 + 0xb0) + 8);
                  do {
                    if (*(long *)(piVar24 + -2) ==
                        _MG_BlocksEngine2_Block_I_BE2_Block_TypeInfo_12d4dd8) {
                      puVar5 = (undefined8 *)(lVar19 + (long)(*piVar24 + 3) * 0x10 + 0x138);
                      goto LAB_0056bec8;
                    }
                    uVar21 = uVar21 + 1;
                    piVar24 = piVar24 + 4;
                  } while (uVar21 < *(ushort *)(lVar19 + 0x12a));
                }
                puVar5 = (undefined8 *)
                         native_sub_3c9b34(plVar8,
                                           _MG_BlocksEngine2_Block_I_BE2_Block_TypeInfo_12d4dd8,3);
LAB_0056bec8:
                plVar13 = (long *)(*(code *)*puVar5)(plVar8,puVar5[1]);
                if (plVar13 == (long *)0x0) {
                    /* WARNING: Subroutine does not return */
                  native_sub_432810();
                }
                lVar19 = *plVar13;
                if ((ulong)*(ushort *)(lVar19 + 0x12a) != 0) {
                  uVar21 = 0;
                  piVar24 = (int *)(*(long *)(lVar19 + 0xb0) + 8);
                  do {
                    if (*(long *)(piVar24 + -2) ==
                        _MG_BlocksEngine2_Block_I_BE2_BlockLayout_TypeInfo_12d4de0) {
                      puVar5 = (undefined8 *)(lVar19 + (long)(*piVar24 + 2) * 0x10 + 0x138);
                      goto LAB_0056bf34;
                    }
                    uVar21 = uVar21 + 1;
                    piVar24 = piVar24 + 4;
                  } while (uVar21 < *(ushort *)(lVar19 + 0x12a));
                }
                puVar5 = (undefined8 *)
                         native_sub_3c9b34(plVar13,
                                           _MG_BlocksEngine2_Block_I_BE2_BlockLayout_TypeInfo_12d4de0
                                           ,2);
LAB_0056bf34:
                lVar19 = (*(code *)*puVar5)(plVar13,puVar5[1]);
                if (lVar19 == 0) {
                    /* WARNING: Subroutine does not return */
                  native_sub_432810();
                }
                if (*(int *)(lVar19 + 0x18) == 0) {
                  uVar7 = native_sub_43283c();
                    /* WARNING: Subroutine does not return */
                  native_sub_4327dc(uVar7,0);
                }
                plVar13 = *(long **)(lVar19 + 0x20);
                if (plVar13 == (long *)0x0) {
                    /* WARNING: Subroutine does not return */
                  native_sub_432810();
                }
                lVar19 = *plVar13;
                if ((ulong)*(ushort *)(lVar19 + 0x12a) != 0) {
                  uVar21 = 0;
                  piVar24 = (int *)(*(long *)(lVar19 + 0xb0) + 8);
                  do {
                    if (*(long *)(piVar24 + -2) ==
                        _MG_BlocksEngine2_Block_I_BE2_BlockSection_TypeInfo_12d4de8) {
                      puVar5 = (undefined8 *)(lVar19 + (long)(*piVar24 + 1) * 0x10 + 0x138);
                      goto LAB_0056bfac;
                    }
                    uVar21 = uVar21 + 1;
                    piVar24 = piVar24 + 4;
                  } while (uVar21 < *(ushort *)(lVar19 + 0x12a));
                }
                puVar5 = (undefined8 *)
                         native_sub_3c9b34(plVar13,
                                           _MG_BlocksEngine2_Block_I_BE2_BlockSection_TypeInfo_12d4de8
                                           ,1);
LAB_0056bfac:
                plVar13 = (long *)(*(code *)*puVar5)(plVar13,puVar5[1]);
                if (plVar13 == (long *)0x0) {
                    /* WARNING: Subroutine does not return */
                  native_sub_432810();
                }
                lVar19 = *plVar13;
                if ((ulong)*(ushort *)(lVar19 + 0x12a) != 0) {
                  uVar21 = 0;
                  piVar24 = (int *)(*(long *)(lVar19 + 0xb0) + 8);
                  do {
                    if (*(long *)(piVar24 + -2) ==
                        _MG_BlocksEngine2_Block_I_BE2_BlockSectionHeader_TypeInfo_12d4df8) {
                      puVar5 = (undefined8 *)(lVar19 + (long)*piVar24 * 0x10 + 0x138);
                      goto LAB_0056c014;
                    }
                    uVar21 = uVar21 + 1;
                    piVar24 = piVar24 + 4;
                  } while (uVar21 < *(ushort *)(lVar19 + 0x12a));
                }
                puVar5 = (undefined8 *)
                         native_sub_3c9b34(plVar13,
                                           _MG_BlocksEngine2_Block_I_BE2_BlockSectionHeader_TypeInfo_12d4df8
                                           ,0);
LAB_0056c014:
                uVar14 = (*(code *)*puVar5)(plVar13,puVar5[1]);
                if (((*(byte *)(_UnityEngine_Object_TypeInfo_12d54e0 + 0x133) >> 2 & 1) != 0) &&
                   (*(int *)(_UnityEngine_Object_TypeInfo_12d54e0 + 0xe0) == 0)) {
                  native_sub_4327ec();
                }
                lVar19 = native_UnityEngine_Object__Instantiate_BE2_Ins_DefineFunction__4a67c0
                                   (uVar12,uVar6,uVar14,
                                    _Method_UnityEngine_Object_Instantiate_GameObject____12e5a88);
                if (lVar19 == 0) {
                    /* WARNING: Subroutine does not return */
                  native_sub_432810();
                }
                lVar19 = native_UnityEngine_GameObject__GetComponentInChildren_BE2_BlockSectionHeader_Custom__4a22c0
                                   (lVar19,
                                    _Method_UnityEngine_GameObject_GetComponentInChildren_BE2_BlockSectionHeader_Custom____12e4b00
                                   );
                if (lVar19 == 0) {
                    /* WARNING: Subroutine does not return */
                  native_sub_432810();
                }
                *(long *)(lVar19 + 0x20) = plVar9[3];
                native_sub_4326e0();
              }
            }
            else {
              lVar19 = native_MG_BlocksEngine2_Environment_BE2_FunctionBlocksManager__get_Instance_5fd2f8
                                 (0);
              if (lVar19 == 0) {
                    /* WARNING: Subroutine does not return */
                native_sub_432810();
              }
              uVar6 = *(undefined8 *)(lVar19 + 0x28);
              uVar12 = native_UnityEngine_Vector3__get_zero_776668(0);
              uVar10 = native_UnityEngine_Quaternion__get_identity_7628fc(0);
              lVar19 = *plVar8;
              if ((ulong)*(ushort *)(lVar19 + 0x12a) != 0) {
                uVar21 = 0;
                piVar24 = (int *)(*(long *)(lVar19 + 0xb0) + 8);
                do {
                  if (*(long *)(piVar24 + -2) ==
                      _MG_BlocksEngine2_Block_I_BE2_Block_TypeInfo_12d4dd8) {
                    puVar5 = (undefined8 *)(lVar19 + (long)(*piVar24 + 3) * 0x10 + 0x138);
                    goto LAB_0056bce0;
                  }
                  uVar21 = uVar21 + 1;
                  piVar24 = piVar24 + 4;
                } while (uVar21 < *(ushort *)(lVar19 + 0x12a));
              }
              puVar5 = (undefined8 *)
                       native_sub_3c9b34(plVar8,_MG_BlocksEngine2_Block_I_BE2_Block_TypeInfo_12d4dd8
                                         ,3);
LAB_0056bce0:
              plVar13 = (long *)(*(code *)*puVar5)(plVar8,puVar5[1]);
              if (plVar13 == (long *)0x0) {
                    /* WARNING: Subroutine does not return */
                native_sub_432810();
              }
              lVar19 = *plVar13;
              if ((ulong)*(ushort *)(lVar19 + 0x12a) != 0) {
                uVar21 = 0;
                piVar24 = (int *)(*(long *)(lVar19 + 0xb0) + 8);
                do {
                  if (*(long *)(piVar24 + -2) ==
                      _MG_BlocksEngine2_Block_I_BE2_BlockLayout_TypeInfo_12d4de0) {
                    puVar5 = (undefined8 *)(lVar19 + (long)(*piVar24 + 2) * 0x10 + 0x138);
                    goto LAB_0056bd4c;
                  }
                  uVar21 = uVar21 + 1;
                  piVar24 = piVar24 + 4;
                } while (uVar21 < *(ushort *)(lVar19 + 0x12a));
              }
              puVar5 = (undefined8 *)
                       native_sub_3c9b34(plVar13,
                                         _MG_BlocksEngine2_Block_I_BE2_BlockLayout_TypeInfo_12d4de0,
                                         2);
LAB_0056bd4c:
              lVar19 = (*(code *)*puVar5)(plVar13,puVar5[1]);
              if (lVar19 == 0) {
                    /* WARNING: Subroutine does not return */
                native_sub_432810();
              }
              if (*(int *)(lVar19 + 0x18) == 0) {
                uVar7 = native_sub_43283c();
                    /* WARNING: Subroutine does not return */
                native_sub_4327dc(uVar7,0);
              }
              plVar13 = *(long **)(lVar19 + 0x20);
              if (plVar13 == (long *)0x0) {
                    /* WARNING: Subroutine does not return */
                native_sub_432810();
              }
              lVar19 = *plVar13;
              if ((ulong)*(ushort *)(lVar19 + 0x12a) != 0) {
                uVar21 = 0;
                piVar24 = (int *)(*(long *)(lVar19 + 0xb0) + 8);
                do {
                  if (*(long *)(piVar24 + -2) ==
                      _MG_BlocksEngine2_Block_I_BE2_BlockSection_TypeInfo_12d4de8) {
                    puVar5 = (undefined8 *)(lVar19 + (long)(*piVar24 + 1) * 0x10 + 0x138);
                    goto LAB_0056bdc4;
                  }
                  uVar21 = uVar21 + 1;
                  piVar24 = piVar24 + 4;
                } while (uVar21 < *(ushort *)(lVar19 + 0x12a));
              }
              puVar5 = (undefined8 *)
                       native_sub_3c9b34(plVar13,
                                         _MG_BlocksEngine2_Block_I_BE2_BlockSection_TypeInfo_12d4de8
                                         ,1);
LAB_0056bdc4:
              plVar13 = (long *)(*(code *)*puVar5)(plVar13,puVar5[1]);
              if (plVar13 == (long *)0x0) {
                    /* WARNING: Subroutine does not return */
                native_sub_432810();
              }
              lVar19 = *plVar13;
              if ((ulong)*(ushort *)(lVar19 + 0x12a) != 0) {
                uVar21 = 0;
                piVar24 = (int *)(*(long *)(lVar19 + 0xb0) + 8);
                do {
                  if (*(long *)(piVar24 + -2) ==
                      _MG_BlocksEngine2_Block_I_BE2_BlockSectionHeader_TypeInfo_12d4df8) {
                    puVar5 = (undefined8 *)(lVar19 + (long)*piVar24 * 0x10 + 0x138);
                    goto LAB_0056be2c;
                  }
                  uVar21 = uVar21 + 1;
                  piVar24 = piVar24 + 4;
                } while (uVar21 < *(ushort *)(lVar19 + 0x12a));
              }
              puVar5 = (undefined8 *)
                       native_sub_3c9b34(plVar13,
                                         _MG_BlocksEngine2_Block_I_BE2_BlockSectionHeader_TypeInfo_12d4df8
                                         ,0);
LAB_0056be2c:
              uVar14 = (*(code *)*puVar5)(plVar13,puVar5[1]);
              if (((*(byte *)(_UnityEngine_Object_TypeInfo_12d54e0 + 0x133) >> 2 & 1) != 0) &&
                 (*(int *)(_UnityEngine_Object_TypeInfo_12d54e0 + 0xe0) == 0)) {
                native_sub_4327ec();
              }
              lVar19 = native_UnityEngine_Object__Instantiate_BE2_Ins_DefineFunction__4a67c0
                                 (uVar12,uVar6,uVar14,
                                  _Method_UnityEngine_Object_Instantiate_GameObject____12e5a88);
              if (lVar19 == 0) {
                    /* WARNING: Subroutine does not return */
                native_sub_432810();
              }
              plVar13 = (long *)native_UnityEngine_GameObject__GetComponentInChildren_BE2_BlockSectionHeader_Custom__4a22c0
                                          (lVar19,
                                           _Method_UnityEngine_GameObject_GetComponentInChildren_TMP_Text____12e4b08
                                          );
              if (plVar13 == (long *)0x0) {
                    /* WARNING: Subroutine does not return */
                native_sub_432810();
              }
              (**(code **)(*plVar13 + 0x558))(plVar13,plVar9[3],*(undefined8 *)(*plVar13 + 0x560));
            }
          }
          else {
            lVar19 = native_MG_BlocksEngine2_EditorScript_BE2_Inspector__get_Instance_602da4(0);
            if (lVar19 == 0) {
                    /* WARNING: Subroutine does not return */
              native_sub_432810();
            }
            uVar6 = *(undefined8 *)(lVar19 + 0x78);
            uVar12 = native_UnityEngine_Vector3__get_zero_776668(0);
            uVar10 = native_UnityEngine_Quaternion__get_identity_7628fc(0);
            lVar19 = *plVar8;
            if ((ulong)*(ushort *)(lVar19 + 0x12a) != 0) {
              uVar21 = 0;
              piVar24 = (int *)(*(long *)(lVar19 + 0xb0) + 8);
              do {
                if (*(long *)(piVar24 + -2) == _MG_BlocksEngine2_Block_I_BE2_Block_TypeInfo_12d4dd8)
                {
                  puVar5 = (undefined8 *)(lVar19 + (long)(*piVar24 + 3) * 0x10 + 0x138);
                  goto LAB_0056baf8;
                }
                uVar21 = uVar21 + 1;
                piVar24 = piVar24 + 4;
              } while (uVar21 < *(ushort *)(lVar19 + 0x12a));
            }
            puVar5 = (undefined8 *)
                     native_sub_3c9b34(plVar8,_MG_BlocksEngine2_Block_I_BE2_Block_TypeInfo_12d4dd8,3
                                      );
LAB_0056baf8:
            plVar13 = (long *)(*(code *)*puVar5)(plVar8,puVar5[1]);
            if (plVar13 == (long *)0x0) {
                    /* WARNING: Subroutine does not return */
              native_sub_432810();
            }
            lVar19 = *plVar13;
            if ((ulong)*(ushort *)(lVar19 + 0x12a) != 0) {
              uVar21 = 0;
              piVar24 = (int *)(*(long *)(lVar19 + 0xb0) + 8);
              do {
                if (*(long *)(piVar24 + -2) ==
                    _MG_BlocksEngine2_Block_I_BE2_BlockLayout_TypeInfo_12d4de0) {
                  puVar5 = (undefined8 *)(lVar19 + (long)(*piVar24 + 2) * 0x10 + 0x138);
                  goto LAB_0056bb64;
                }
                uVar21 = uVar21 + 1;
                piVar24 = piVar24 + 4;
              } while (uVar21 < *(ushort *)(lVar19 + 0x12a));
            }
            puVar5 = (undefined8 *)
                     native_sub_3c9b34(plVar13,
                                       _MG_BlocksEngine2_Block_I_BE2_BlockLayout_TypeInfo_12d4de0,2)
            ;
LAB_0056bb64:
            lVar19 = (*(code *)*puVar5)(plVar13,puVar5[1]);
            if (lVar19 == 0) {
                    /* WARNING: Subroutine does not return */
              native_sub_432810();
            }
            if (*(int *)(lVar19 + 0x18) == 0) {
              uVar7 = native_sub_43283c();
                    /* WARNING: Subroutine does not return */
              native_sub_4327dc(uVar7,0);
            }
            plVar13 = *(long **)(lVar19 + 0x20);
            if (plVar13 == (long *)0x0) {
                    /* WARNING: Subroutine does not return */
              native_sub_432810();
            }
            lVar19 = *plVar13;
            if ((ulong)*(ushort *)(lVar19 + 0x12a) != 0) {
              uVar21 = 0;
              piVar24 = (int *)(*(long *)(lVar19 + 0xb0) + 8);
              do {
                if (*(long *)(piVar24 + -2) ==
                    _MG_BlocksEngine2_Block_I_BE2_BlockSection_TypeInfo_12d4de8) {
                  puVar5 = (undefined8 *)(lVar19 + (long)(*piVar24 + 1) * 0x10 + 0x138);
                  goto LAB_0056bbdc;
                }
                uVar21 = uVar21 + 1;
                piVar24 = piVar24 + 4;
              } while (uVar21 < *(ushort *)(lVar19 + 0x12a));
            }
            puVar5 = (undefined8 *)
                     native_sub_3c9b34(plVar13,
                                       _MG_BlocksEngine2_Block_I_BE2_BlockSection_TypeInfo_12d4de8,1
                                      );
LAB_0056bbdc:
            plVar13 = (long *)(*(code *)*puVar5)(plVar13,puVar5[1]);
            if (plVar13 == (long *)0x0) {
                    /* WARNING: Subroutine does not return */
              native_sub_432810();
            }
            lVar19 = *plVar13;
            if ((ulong)*(ushort *)(lVar19 + 0x12a) != 0) {
              uVar21 = 0;
              piVar24 = (int *)(*(long *)(lVar19 + 0xb0) + 8);
              do {
                if (*(long *)(piVar24 + -2) ==
                    _MG_BlocksEngine2_Block_I_BE2_BlockSectionHeader_TypeInfo_12d4df8) {
                  puVar5 = (undefined8 *)(lVar19 + (long)*piVar24 * 0x10 + 0x138);
                  goto LAB_0056bc44;
                }
                uVar21 = uVar21 + 1;
                piVar24 = piVar24 + 4;
              } while (uVar21 < *(ushort *)(lVar19 + 0x12a));
            }
            puVar5 = (undefined8 *)
                     native_sub_3c9b34(plVar13,
                                       _MG_BlocksEngine2_Block_I_BE2_BlockSectionHeader_TypeInfo_12d4df8
                                       ,0);
LAB_0056bc44:
            uVar14 = (*(code *)*puVar5)(plVar13,puVar5[1]);
            if (((*(byte *)(_UnityEngine_Object_TypeInfo_12d54e0 + 0x133) >> 2 & 1) != 0) &&
               (*(int *)(_UnityEngine_Object_TypeInfo_12d54e0 + 0xe0) == 0)) {
              native_sub_4327ec();
            }
            lVar19 = native_UnityEngine_Object__Instantiate_BE2_Ins_DefineFunction__4a67c0
                               (uVar12,uVar6,uVar14,
                                _Method_UnityEngine_Object_Instantiate_GameObject____12e5a88);
            if (lVar19 == 0) {
                    /* WARNING: Subroutine does not return */
              native_sub_432810();
            }
            plVar13 = (long *)native_UnityEngine_GameObject__GetComponentInChildren_BE2_BlockSectionHeader_Custom__4a22c0
                                        (lVar19,
                                         _Method_UnityEngine_GameObject_GetComponentInChildren_TMP_Text____12e4b08
                                        );
            if (plVar13 == (long *)0x0) {
                    /* WARNING: Subroutine does not return */
              native_sub_432810();
            }
            (**(code **)(*plVar13 + 0x558))(plVar13,plVar9[3],*(undefined8 *)(*plVar13 + 0x560));
          }
        }
        aiStack_170[0] = 0x1e4;
        aiStack_170[3] = 1;
        native_System_Collections_Generic_List_Enumerator_BE2_Op_FunctionLocalVariable___Dispose_7e8f2c
                  (&uStack_140,
                   _Method_System_Collections_Generic_List_Enumerator_DefineItem__Dispose___12da420)
        ;
        aiStack_170[3] = 0;
        plVar9 = (long *)native_MG_BlocksEngine2_Environment_BE2_FunctionBlocksManager__get_Instance_5fd2f8
                                   (0);
        lVar19 = *plVar8;
        uVar6 = *(undefined8 *)(lVar18 + 0x50);
        if ((ulong)*(ushort *)(lVar19 + 0x12a) != 0) {
          uVar21 = 0;
          piVar24 = (int *)(*(long *)(lVar19 + 0xb0) + 8);
          do {
            if (*(long *)(piVar24 + -2) == _MG_BlocksEngine2_Block_I_BE2_Block_TypeInfo_12d4dd8) {
              puVar5 = (undefined8 *)(lVar19 + (long)(*piVar24 + 4) * 0x10 + 0x138);
              goto LAB_0056c150;
            }
            uVar21 = uVar21 + 1;
            piVar24 = piVar24 + 4;
          } while (uVar21 < *(ushort *)(lVar19 + 0x12a));
        }
        puVar5 = (undefined8 *)
                 native_sub_3c9b34(plVar8,_MG_BlocksEngine2_Block_I_BE2_Block_TypeInfo_12d4dd8,4);
LAB_0056c150:
        plVar13 = (long *)(*(code *)*puVar5)(plVar8,puVar5[1]);
        if (plVar9 == (long *)0x0) goto LAB_0056db8c;
        if (plVar13 == (long *)0x0) {
LAB_0056c17c:
          plVar13 = (long *)0x0;
        }
        else {
          if (*(byte *)(*plVar13 + 300) < *(byte *)(_BE2_Ins_DefineFunction_TypeInfo_12d39f8 + 300))
          goto LAB_0056c17c;
          if (*(long *)(*(long *)(*plVar13 + 200) +
                        (ulong)*(byte *)(_BE2_Ins_DefineFunction_TypeInfo_12d39f8 + 300) * 8 + -8)
              != _BE2_Ins_DefineFunction_TypeInfo_12d39f8) {
            plVar13 = (long *)0x0;
          }
        }
        (**(code **)(*plVar9 + 0x188))(plVar9,uVar6,plVar13,*(undefined8 *)(*plVar9 + 400));
      }
      lVar19 = *plVar8;
      if ((ulong)*(ushort *)(lVar19 + 0x12a) != 0) {
        uVar21 = 0;
        piVar24 = (int *)(*(long *)(lVar19 + 0xb0) + 8);
        do {
          if (*(long *)(piVar24 + -2) == _MG_BlocksEngine2_Block_I_BE2_Block_TypeInfo_12d4dd8) {
            puVar5 = (undefined8 *)(lVar19 + (long)(*piVar24 + 4) * 0x10 + 0x138);
            goto LAB_0056c20c;
          }
          uVar21 = uVar21 + 1;
          piVar24 = piVar24 + 4;
        } while (uVar21 < *(ushort *)(lVar19 + 0x12a));
      }
      puVar5 = (undefined8 *)
               native_sub_3c9b34(plVar8,_MG_BlocksEngine2_Block_I_BE2_Block_TypeInfo_12d4dd8,4);
LAB_0056c20c:
      plVar9 = (long *)(*(code *)*puVar5)(plVar8,puVar5[1]);
      if (plVar9 != (long *)0x0) {
        if ((*(byte *)(_BE2_Ins_FunctionBlock_TypeInfo_12d3a00 + 300) <= *(byte *)(*plVar9 + 300))
           && (*(long *)(*(long *)(*plVar9 + 200) +
                         (ulong)*(byte *)(_BE2_Ins_FunctionBlock_TypeInfo_12d3a00 + 300) * 8 + -8)
               == _BE2_Ins_FunctionBlock_TypeInfo_12d3a00)) {
          lVar19 = *plVar4;
          if ((ulong)*(ushort *)(lVar19 + 0x12a) != 0) {
            uVar21 = 0;
            piVar24 = (int *)(*(long *)(lVar19 + 0xb0) + 8);
            do {
              if (*(long *)(piVar24 + -2) ==
                  _MG_BlocksEngine2_Environment_I_BE2_ProgrammingEnv_TypeInfo_12d4e38) {
                puVar5 = (undefined8 *)(lVar19 + (long)(*piVar24 + 5) * 0x10 + 0x138);
                goto LAB_0056c2a8;
              }
              uVar21 = uVar21 + 1;
              piVar24 = piVar24 + 4;
            } while (uVar21 < *(ushort *)(lVar19 + 0x12a));
          }
          puVar5 = (undefined8 *)
                   native_sub_3c9b34(plVar4,
                                     _MG_BlocksEngine2_Environment_I_BE2_ProgrammingEnv_TypeInfo_12d4e38
                                     ,5);
LAB_0056c2a8:
          (*(code *)*puVar5)(plVar4,puVar5[1]);
          lVar19 = *plVar4;
          if ((ulong)*(ushort *)(lVar19 + 0x12a) != 0) {
            uVar21 = 0;
            piVar24 = (int *)(*(long *)(lVar19 + 0xb0) + 8);
            do {
              if (*(long *)(piVar24 + -2) ==
                  _MG_BlocksEngine2_Environment_I_BE2_ProgrammingEnv_TypeInfo_12d4e38) {
                puVar5 = (undefined8 *)(lVar19 + (long)(*piVar24 + 1) * 0x10 + 0x138);
                goto LAB_0056c30c;
              }
              uVar21 = uVar21 + 1;
              piVar24 = piVar24 + 4;
            } while (uVar21 < *(ushort *)(lVar19 + 0x12a));
          }
          puVar5 = (undefined8 *)
                   native_sub_3c9b34(plVar4,
                                     _MG_BlocksEngine2_Environment_I_BE2_ProgrammingEnv_TypeInfo_12d4e38
                                     ,1);
LAB_0056c30c:
          lVar19 = (*(code *)*puVar5)(plVar4,puVar5[1]);
          if (lVar19 == 0) goto LAB_0056db8c;
          native_System_Collections_Generic_List_BE2_Op_FunctionLocalVariable___GetEnumerator_d414fc
                    (&uStack_188,lVar19,
                     _Method_System_Collections_Generic_List_I_BE2_Block__GetEnumerator___12dc9a8);
          plVar9 = (long *)0x0;
          plStack_150 = plStack_178;
          uStack_158 = uStack_180;
          uStack_160 = uStack_188;
          do {
            do {
              uVar21 = native_System_Collections_Generic_List_Enumerator_BE2_Op_FunctionLocalVariable___MoveNext_7e8f30
                                 (&uStack_160,
                                  _Method_System_Collections_Generic_List_Enumerator_I_BE2_Block__MoveNext___12da4d0
                                 );
              plVar13 = plStack_150;
              if ((uVar21 & 1) == 0) goto LAB_0056c454;
              if (plStack_150 == (long *)0x0) {
                    /* WARNING: Subroutine does not return */
                native_sub_432810();
              }
              lVar19 = *plStack_150;
              if ((ulong)*(ushort *)(lVar19 + 0x12a) != 0) {
                uVar21 = 0;
                piVar24 = (int *)(*(long *)(lVar19 + 0xb0) + 8);
                do {
                  if (*(long *)(piVar24 + -2) ==
                      _MG_BlocksEngine2_Block_I_BE2_Block_TypeInfo_12d4dd8) {
                    puVar5 = (undefined8 *)(lVar19 + (long)(*piVar24 + 4) * 0x10 + 0x138);
                    goto LAB_0056c3c4;
                  }
                  uVar21 = uVar21 + 1;
                  piVar24 = piVar24 + 4;
                } while (uVar21 < *(ushort *)(lVar19 + 0x12a));
              }
              puVar5 = (undefined8 *)
                       native_sub_3c9b34(plStack_150,
                                         _MG_BlocksEngine2_Block_I_BE2_Block_TypeInfo_12d4dd8,4);
LAB_0056c3c4:
              plVar9 = (long *)(*(code *)*puVar5)(plVar13,puVar5[1]);
              if (plVar9 == (long *)0x0) {
LAB_0056c3ec:
                plVar9 = (long *)0x0;
              }
              else {
                if (*(byte *)(*plVar9 + 300) <
                    *(byte *)(_BE2_Ins_DefineFunction_TypeInfo_12d39f8 + 300)) goto LAB_0056c3ec;
                if (*(long *)(*(long *)(*plVar9 + 200) +
                              (ulong)*(byte *)(_BE2_Ins_DefineFunction_TypeInfo_12d39f8 + 300) * 8 +
                             -8) != _BE2_Ins_DefineFunction_TypeInfo_12d39f8) {
                  plVar9 = (long *)0x0;
                }
              }
              if (((*(byte *)(_UnityEngine_Object_TypeInfo_12d54e0 + 0x133) >> 2 & 1) != 0) &&
                 (*(int *)(_UnityEngine_Object_TypeInfo_12d54e0 + 0xe0) == 0)) {
                native_sub_4327ec();
              }
              uVar21 = native_UnityEngine_Object__op_Inequality_8d76fc(plVar9,0,0);
            } while ((uVar21 & 1) == 0);
            if (plVar9 == (long *)0x0) {
                    /* WARNING: Subroutine does not return */
              native_sub_432810();
            }
            uVar21 = native_System_String__op_Equality_afc18c
                               (plVar9[0xf],*(undefined8 *)(lVar18 + 0x40),0);
          } while ((uVar21 & 1) == 0);
LAB_0056c454:
          iVar2 = aiStack_170[3];
          aiStack_170[0] = 0x273;
          iVar3 = aiStack_170[3] + 1;
          aiStack_170[3] = iVar3;
          native_System_Collections_Generic_List_Enumerator_BE2_Op_FunctionLocalVariable___Dispose_7e8f2c
                    (&uStack_160,
                     _Method_System_Collections_Generic_List_Enumerator_I_BE2_Block__Dispose___12da4c8
                    );
          if ((iVar3 != 0) && (aiStack_170[iVar2] == 0x273)) {
            aiStack_170[3] = iVar2;
          }
          if ((plVar9 == (long *)0x0) || (plVar13 = (long *)plVar9[8], plVar13 == (long *)0x0))
          goto LAB_0056db8c;
          lVar19 = *plVar13;
          if ((ulong)*(ushort *)(lVar19 + 0x12a) != 0) {
            uVar21 = 0;
            piVar24 = (int *)(*(long *)(lVar19 + 0xb0) + 8);
            do {
              if (*(long *)(piVar24 + -2) == _MG_BlocksEngine2_Block_I_BE2_Block_TypeInfo_12d4dd8) {
                puVar5 = (undefined8 *)(lVar19 + (long)(*piVar24 + 3) * 0x10 + 0x138);
                goto LAB_0056c504;
              }
              uVar21 = uVar21 + 1;
              piVar24 = piVar24 + 4;
            } while (uVar21 < *(ushort *)(lVar19 + 0x12a));
          }
          puVar5 = (undefined8 *)
                   native_sub_3c9b34(plVar13,_MG_BlocksEngine2_Block_I_BE2_Block_TypeInfo_12d4dd8,3)
          ;
LAB_0056c504:
          plVar13 = (long *)(*(code *)*puVar5)(plVar13,puVar5[1]);
          if (plVar13 == (long *)0x0) goto LAB_0056db8c;
          lVar19 = *plVar13;
          if ((ulong)*(ushort *)(lVar19 + 0x12a) != 0) {
            uVar21 = 0;
            piVar24 = (int *)(*(long *)(lVar19 + 0xb0) + 8);
            do {
              if (*(long *)(piVar24 + -2) ==
                  _MG_BlocksEngine2_Block_I_BE2_BlockLayout_TypeInfo_12d4de0) {
                puVar5 = (undefined8 *)(lVar19 + (long)(*piVar24 + 2) * 0x10 + 0x138);
                goto LAB_0056c578;
              }
              uVar21 = uVar21 + 1;
              piVar24 = piVar24 + 4;
            } while (uVar21 < *(ushort *)(lVar19 + 0x12a));
          }
          puVar5 = (undefined8 *)
                   native_sub_3c9b34(plVar13,
                                     _MG_BlocksEngine2_Block_I_BE2_BlockLayout_TypeInfo_12d4de0,2);
LAB_0056c578:
          lVar19 = (*(code *)*puVar5)(plVar13,puVar5[1]);
          if (lVar19 == 0) goto LAB_0056db8c;
          if (*(int *)(lVar19 + 0x18) == 0) {
LAB_0056dbe4:
            uVar7 = native_sub_43283c();
                    /* WARNING: Subroutine does not return */
            native_sub_4327dc(uVar7,0);
          }
          plVar13 = *(long **)(lVar19 + 0x20);
          if (plVar13 == (long *)0x0) goto LAB_0056db8c;
          lVar19 = *plVar13;
          if ((ulong)*(ushort *)(lVar19 + 0x12a) != 0) {
            uVar21 = 0;
            piVar24 = (int *)(*(long *)(lVar19 + 0xb0) + 8);
            do {
              if (*(long *)(piVar24 + -2) ==
                  _MG_BlocksEngine2_Block_I_BE2_BlockSection_TypeInfo_12d4de8) {
                puVar5 = (undefined8 *)(lVar19 + (long)(*piVar24 + 1) * 0x10 + 0x138);
                goto LAB_0056c5f8;
              }
              uVar21 = uVar21 + 1;
              piVar24 = piVar24 + 4;
            } while (uVar21 < *(ushort *)(lVar19 + 0x12a));
          }
          puVar5 = (undefined8 *)
                   native_sub_3c9b34(plVar13,
                                     _MG_BlocksEngine2_Block_I_BE2_BlockSection_TypeInfo_12d4de8,1);
LAB_0056c5f8:
          plVar13 = (long *)(*(code *)*puVar5)(plVar13,puVar5[1]);
          if (plVar13 == (long *)0x0) goto LAB_0056db8c;
          lVar19 = *plVar13;
          if ((ulong)*(ushort *)(lVar19 + 0x12a) != 0) {
            uVar21 = 0;
            piVar24 = (int *)(*(long *)(lVar19 + 0xb0) + 8);
            do {
              if (*(long *)(piVar24 + -2) ==
                  _MG_BlocksEngine2_Block_I_BE2_BlockSectionHeader_TypeInfo_12d4df8) {
                puVar5 = (undefined8 *)(lVar19 + (long)(*piVar24 + 6) * 0x10 + 0x138);
                goto LAB_0056c66c;
              }
              uVar21 = uVar21 + 1;
              piVar24 = piVar24 + 4;
            } while (uVar21 < *(ushort *)(lVar19 + 0x12a));
          }
          puVar5 = (undefined8 *)
                   native_sub_3c9b34(plVar13,
                                     _MG_BlocksEngine2_Block_I_BE2_BlockSectionHeader_TypeInfo_12d4df8
                                     ,6);
LAB_0056c66c:
          (*(code *)*puVar5)(plVar13,puVar5[1]);
          plVar13 = (long *)plVar9[8];
          if (plVar13 == (long *)0x0) goto LAB_0056db8c;
          lVar19 = *plVar13;
          if ((ulong)*(ushort *)(lVar19 + 0x12a) != 0) {
            uVar21 = 0;
            piVar24 = (int *)(*(long *)(lVar19 + 0xb0) + 8);
            do {
              if (*(long *)(piVar24 + -2) == _MG_BlocksEngine2_Block_I_BE2_Block_TypeInfo_12d4dd8) {
                puVar5 = (undefined8 *)(lVar19 + (long)(*piVar24 + 3) * 0x10 + 0x138);
                goto LAB_0056c6e0;
              }
              uVar21 = uVar21 + 1;
              piVar24 = piVar24 + 4;
            } while (uVar21 < *(ushort *)(lVar19 + 0x12a));
          }
          puVar5 = (undefined8 *)
                   native_sub_3c9b34(plVar13,_MG_BlocksEngine2_Block_I_BE2_Block_TypeInfo_12d4dd8,3)
          ;
LAB_0056c6e0:
          plVar13 = (long *)(*(code *)*puVar5)(plVar13,puVar5[1]);
          if (plVar13 == (long *)0x0) goto LAB_0056db8c;
          lVar19 = *plVar13;
          if ((ulong)*(ushort *)(lVar19 + 0x12a) != 0) {
            uVar21 = 0;
            piVar24 = (int *)(*(long *)(lVar19 + 0xb0) + 8);
            do {
              if (*(long *)(piVar24 + -2) ==
                  _MG_BlocksEngine2_Block_I_BE2_BlockLayout_TypeInfo_12d4de0) {
                puVar5 = (undefined8 *)(lVar19 + (long)(*piVar24 + 2) * 0x10 + 0x138);
                goto LAB_0056c754;
              }
              uVar21 = uVar21 + 1;
              piVar24 = piVar24 + 4;
            } while (uVar21 < *(ushort *)(lVar19 + 0x12a));
          }
          puVar5 = (undefined8 *)
                   native_sub_3c9b34(plVar13,
                                     _MG_BlocksEngine2_Block_I_BE2_BlockLayout_TypeInfo_12d4de0,2);
LAB_0056c754:
          lVar19 = (*(code *)*puVar5)(plVar13,puVar5[1]);
          if (lVar19 == 0) goto LAB_0056db8c;
          if (*(int *)(lVar19 + 0x18) == 0) goto LAB_0056dbe4;
          plVar13 = *(long **)(lVar19 + 0x20);
          if (plVar13 == (long *)0x0) goto LAB_0056db8c;
          lVar19 = *plVar13;
          if ((ulong)*(ushort *)(lVar19 + 0x12a) != 0) {
            uVar21 = 0;
            piVar24 = (int *)(*(long *)(lVar19 + 0xb0) + 8);
            do {
              if (*(long *)(piVar24 + -2) ==
                  _MG_BlocksEngine2_Block_I_BE2_BlockSection_TypeInfo_12d4de8) {
                puVar5 = (undefined8 *)(lVar19 + (long)(*piVar24 + 1) * 0x10 + 0x138);
                goto LAB_0056c7d4;
              }
              uVar21 = uVar21 + 1;
              piVar24 = piVar24 + 4;
            } while (uVar21 < *(ushort *)(lVar19 + 0x12a));
          }
          puVar5 = (undefined8 *)
                   native_sub_3c9b34(plVar13,
                                     _MG_BlocksEngine2_Block_I_BE2_BlockSection_TypeInfo_12d4de8,1);
LAB_0056c7d4:
          plVar13 = (long *)(*(code *)*puVar5)(plVar13,puVar5[1]);
          if (plVar13 == (long *)0x0) goto LAB_0056db8c;
          lVar19 = *plVar13;
          if ((ulong)*(ushort *)(lVar19 + 0x12a) != 0) {
            uVar21 = 0;
            piVar24 = (int *)(*(long *)(lVar19 + 0xb0) + 8);
            do {
              if (*(long *)(piVar24 + -2) ==
                  _MG_BlocksEngine2_Block_I_BE2_BlockSectionHeader_TypeInfo_12d4df8) {
                puVar5 = (undefined8 *)(lVar19 + (long)(*piVar24 + 1) * 0x10 + 0x138);
                goto LAB_0056c848;
              }
              uVar21 = uVar21 + 1;
              piVar24 = piVar24 + 4;
            } while (uVar21 < *(ushort *)(lVar19 + 0x12a));
          }
          puVar5 = (undefined8 *)
                   native_sub_3c9b34(plVar13,
                                     _MG_BlocksEngine2_Block_I_BE2_BlockSectionHeader_TypeInfo_12d4df8
                                     ,1);
LAB_0056c848:
          lVar19 = (*(code *)*puVar5)(plVar13,puVar5[1]);
          if (lVar19 == 0) goto LAB_0056db8c;
          uVar17 = *(uint *)(lVar19 + 0x18);
          if (0 < (int)uVar17) {
            uVar25 = 0;
            do {
              if (uVar17 <= uVar25) goto LAB_0056dbe4;
              plVar13 = *(long **)(lVar19 + (long)(int)uVar25 * 8 + 0x20);
              if (plVar13 == (long *)0x0) goto LAB_0056db8c;
              lVar27 = *plVar13;
              if ((ulong)*(ushort *)(lVar27 + 0x12a) != 0) {
                uVar21 = 0;
                piVar24 = (int *)(*(long *)(lVar27 + 0xb0) + 8);
                do {
                  if (*(long *)(piVar24 + -2) ==
                      _MG_BlocksEngine2_Block_I_BE2_BlockSectionHeaderItem_TypeInfo_12d4e08) {
                    puVar5 = (undefined8 *)(lVar27 + (long)*piVar24 * 0x10 + 0x138);
                    uVar6 = uVar10;
                    goto LAB_0056c8e4;
                  }
                  uVar21 = uVar21 + 1;
                  piVar24 = piVar24 + 4;
                } while (uVar21 < *(ushort *)(lVar27 + 0x12a));
              }
              puVar5 = (undefined8 *)
                       native_sub_3c9b34(plVar13,
                                         _MG_BlocksEngine2_Block_I_BE2_BlockSectionHeaderItem_TypeInfo_12d4e08
                                         ,0);
              uVar6 = uVar10;
LAB_0056c8e4:
              lVar27 = (*(code *)*puVar5)(plVar13,puVar5[1]);
              if ((lVar27 == 0) ||
                 (lVar27 = native_UnityEngine_Object__get_name_8e8098(lVar27,0), lVar27 == 0))
              goto LAB_0056db8c;
              uVar21 = native_System_String__Contains_b0bafc
                                 (lVar27,_StringLiteral__FixedLabel__12f32b0,0);
              uVar10 = uVar6;
              if ((uVar21 & 1) == 0) {
                lVar27 = *plVar13;
                bVar1 = *(byte *)(lVar27 + 300);
                if ((bVar1 < *(byte *)(
                                      _MG_BlocksEngine2_Block_BE2_BlockSectionHeader_Label_TypeInfo_12d3980
                                      + 300)) ||
                   (*(long *)(*(long *)(lVar27 + 200) +
                              (ulong)*(byte *)(
                                              _MG_BlocksEngine2_Block_BE2_BlockSectionHeader_Label_TypeInfo_12d3980
                                              + 300) * 8 + -8) !=
                    _MG_BlocksEngine2_Block_BE2_BlockSectionHeader_Label_TypeInfo_12d3980)) {
                  if ((bVar1 < *(byte *)(
                                        _MG_BlocksEngine2_Block_BE2_BlockSectionHeader_LocalVariable_TypeInfo_12d3988
                                        + 300)) ||
                     (*(long *)(*(long *)(lVar27 + 200) +
                                (ulong)*(byte *)(
                                                _MG_BlocksEngine2_Block_BE2_BlockSectionHeader_LocalVariable_TypeInfo_12d3988
                                                + 300) * 8 + -8) !=
                      _MG_BlocksEngine2_Block_BE2_BlockSectionHeader_LocalVariable_TypeInfo_12d3988)
                     ) {
                    if ((*(byte *)(
                                  _MG_BlocksEngine2_Block_BE2_BlockSectionHeader_Custom_TypeInfo_12d3978
                                  + 300) <= bVar1) &&
                       (*(long *)(*(long *)(lVar27 + 200) +
                                  (ulong)*(byte *)(
                                                  _MG_BlocksEngine2_Block_BE2_BlockSectionHeader_Custom_TypeInfo_12d3978
                                                  + 300) * 8 + -8) ==
                        _MG_BlocksEngine2_Block_BE2_BlockSectionHeader_Custom_TypeInfo_12d3978)) {
                      lVar27 = native_MG_BlocksEngine2_Environment_BE2_FunctionBlocksManager__get_Instance_5fd2f8
                                         (0);
                      if (lVar27 == 0) goto LAB_0056db8c;
                      uVar6 = *(undefined8 *)(lVar27 + 0x30);
                      uVar12 = native_UnityEngine_Vector3__get_zero_776668(0);
                      uVar10 = native_UnityEngine_Quaternion__get_identity_7628fc(0);
                      lVar27 = *plVar8;
                      if ((ulong)*(ushort *)(lVar27 + 0x12a) != 0) {
                        uVar21 = 0;
                        piVar24 = (int *)(*(long *)(lVar27 + 0xb0) + 8);
                        do {
                          if (*(long *)(piVar24 + -2) ==
                              _MG_BlocksEngine2_Block_I_BE2_Block_TypeInfo_12d4dd8) {
                            puVar5 = (undefined8 *)(lVar27 + (long)(*piVar24 + 3) * 0x10 + 0x138);
                            goto LAB_0056cfd4;
                          }
                          uVar21 = uVar21 + 1;
                          piVar24 = piVar24 + 4;
                        } while (uVar21 < *(ushort *)(lVar27 + 0x12a));
                      }
                      puVar5 = (undefined8 *)
                               native_sub_3c9b34(plVar8,
                                                 _MG_BlocksEngine2_Block_I_BE2_Block_TypeInfo_12d4dd8
                                                 ,3);
LAB_0056cfd4:
                      plVar16 = (long *)(*(code *)*puVar5)(plVar8,puVar5[1]);
                      if (plVar16 == (long *)0x0) goto LAB_0056db8c;
                      lVar27 = *plVar16;
                      if ((ulong)*(ushort *)(lVar27 + 0x12a) != 0) {
                        uVar21 = 0;
                        piVar24 = (int *)(*(long *)(lVar27 + 0xb0) + 8);
                        do {
                          if (*(long *)(piVar24 + -2) ==
                              _MG_BlocksEngine2_Block_I_BE2_BlockLayout_TypeInfo_12d4de0) {
                            puVar5 = (undefined8 *)(lVar27 + (long)(*piVar24 + 2) * 0x10 + 0x138);
                            goto LAB_0056d048;
                          }
                          uVar21 = uVar21 + 1;
                          piVar24 = piVar24 + 4;
                        } while (uVar21 < *(ushort *)(lVar27 + 0x12a));
                      }
                      puVar5 = (undefined8 *)
                               native_sub_3c9b34(plVar16,
                                                 _MG_BlocksEngine2_Block_I_BE2_BlockLayout_TypeInfo_12d4de0
                                                 ,2);
LAB_0056d048:
                      lVar27 = (*(code *)*puVar5)(plVar16,puVar5[1]);
                      if (lVar27 == 0) goto LAB_0056db8c;
                      if (*(int *)(lVar27 + 0x18) == 0) goto LAB_0056dbe4;
                      plVar16 = *(long **)(lVar27 + 0x20);
                      if (plVar16 == (long *)0x0) goto LAB_0056db8c;
                      lVar27 = *plVar16;
                      if ((ulong)*(ushort *)(lVar27 + 0x12a) != 0) {
                        uVar21 = 0;
                        piVar24 = (int *)(*(long *)(lVar27 + 0xb0) + 8);
                        do {
                          if (*(long *)(piVar24 + -2) ==
                              _MG_BlocksEngine2_Block_I_BE2_BlockSection_TypeInfo_12d4de8) {
                            puVar5 = (undefined8 *)(lVar27 + (long)(*piVar24 + 1) * 0x10 + 0x138);
                            goto LAB_0056d0c8;
                          }
                          uVar21 = uVar21 + 1;
                          piVar24 = piVar24 + 4;
                        } while (uVar21 < *(ushort *)(lVar27 + 0x12a));
                      }
                      puVar5 = (undefined8 *)
                               native_sub_3c9b34(plVar16,
                                                 _MG_BlocksEngine2_Block_I_BE2_BlockSection_TypeInfo_12d4de8
                                                 ,1);
LAB_0056d0c8:
                      plVar16 = (long *)(*(code *)*puVar5)(plVar16,puVar5[1]);
                      if (plVar16 == (long *)0x0) goto LAB_0056db8c;
                      lVar27 = *plVar16;
                      if ((ulong)*(ushort *)(lVar27 + 0x12a) != 0) {
                        uVar21 = 0;
                        piVar24 = (int *)(*(long *)(lVar27 + 0xb0) + 8);
                        do {
                          if (*(long *)(piVar24 + -2) ==
                              _MG_BlocksEngine2_Block_I_BE2_BlockSectionHeader_TypeInfo_12d4df8) {
                            puVar5 = (undefined8 *)(lVar27 + (long)*piVar24 * 0x10 + 0x138);
                            goto LAB_0056d138;
                          }
                          uVar21 = uVar21 + 1;
                          piVar24 = piVar24 + 4;
                        } while (uVar21 < *(ushort *)(lVar27 + 0x12a));
                      }
                      puVar5 = (undefined8 *)
                               native_sub_3c9b34(plVar16,
                                                 _MG_BlocksEngine2_Block_I_BE2_BlockSectionHeader_TypeInfo_12d4df8
                                                 ,0);
LAB_0056d138:
                      uVar14 = (*(code *)*puVar5)(plVar16,puVar5[1]);
                      if (((*(byte *)(_UnityEngine_Object_TypeInfo_12d54e0 + 0x133) >> 2 & 1) != 0)
                         && (*(int *)(_UnityEngine_Object_TypeInfo_12d54e0 + 0xe0) == 0)) {
                        native_sub_4327ec(_UnityEngine_Object_TypeInfo_12d54e0);
                      }
                      lVar27 = native_UnityEngine_Object__Instantiate_BE2_Ins_DefineFunction__4a67c0
                                         (uVar12,uVar6,uVar14,
                                          _Method_UnityEngine_Object_Instantiate_GameObject____12e5a88
                                         );
                      if (lVar27 == 0) goto LAB_0056db8c;
                      lVar27 = native_UnityEngine_GameObject__GetComponentInChildren_BE2_BlockSectionHeader_Custom__4a22c0
                                         (lVar27,
                                          _Method_UnityEngine_GameObject_GetComponentInChildren_BE2_BlockSectionHeader_Custom____12e4b00
                                         );
                      lVar11 = *plVar13;
                      if ((ulong)*(ushort *)(lVar11 + 0x12a) != 0) {
                        uVar21 = 0;
                        piVar24 = (int *)(*(long *)(lVar11 + 0xb0) + 8);
                        do {
                          if (*(long *)(piVar24 + -2) ==
                              _MG_BlocksEngine2_Block_I_BE2_BlockSectionHeaderItem_TypeInfo_12d4e08)
                          {
                            puVar5 = (undefined8 *)(lVar11 + (long)*piVar24 * 0x10 + 0x138);
                            goto LAB_0056d214;
                          }
                          uVar21 = uVar21 + 1;
                          piVar24 = piVar24 + 4;
                        } while (uVar21 < *(ushort *)(lVar11 + 0x12a));
                      }
                      puVar5 = (undefined8 *)
                               native_sub_3c9b34(plVar13,
                                                 _MG_BlocksEngine2_Block_I_BE2_BlockSectionHeaderItem_TypeInfo_12d4e08
                                                 ,0);
LAB_0056d214:
                      lVar11 = (*(code *)*puVar5)(plVar13,puVar5[1]);
                      if (((lVar11 == 0) ||
                          (lVar11 = native_UnityEngine_Component__GetComponentInChildren_Animation__49db98
                                              (lVar11,
                                               _Method_UnityEngine_Component_GetComponentInChildren_BE2_BlockSectionHeader_Custom____12e2c60
                                              ), lVar11 == 0)) || (lVar27 == 0)) goto LAB_0056db8c;
                      *(undefined8 *)(lVar27 + 0x20) = *(undefined8 *)(lVar11 + 0x20);
                      native_sub_4326e0((undefined8 *)(lVar27 + 0x20));
                    }
                  }
                  else {
                    lVar27 = native_MG_BlocksEngine2_EditorScript_BE2_Inspector__get_Instance_602da4
                                       (0);
                    if (lVar27 == 0) goto LAB_0056db8c;
                    uVar6 = *(undefined8 *)(lVar27 + 0x70);
                    uVar12 = native_UnityEngine_Vector3__get_zero_776668(0);
                    uVar10 = native_UnityEngine_Quaternion__get_identity_7628fc(0);
                    lVar27 = *plVar8;
                    if ((ulong)*(ushort *)(lVar27 + 0x12a) != 0) {
                      uVar21 = 0;
                      piVar24 = (int *)(*(long *)(lVar27 + 0xb0) + 8);
                      do {
                        if (*(long *)(piVar24 + -2) ==
                            _MG_BlocksEngine2_Block_I_BE2_Block_TypeInfo_12d4dd8) {
                          puVar5 = (undefined8 *)(lVar27 + (long)(*piVar24 + 3) * 0x10 + 0x138);
                          goto LAB_0056cdf4;
                        }
                        uVar21 = uVar21 + 1;
                        piVar24 = piVar24 + 4;
                      } while (uVar21 < *(ushort *)(lVar27 + 0x12a));
                    }
                    puVar5 = (undefined8 *)
                             native_sub_3c9b34(plVar8,
                                               _MG_BlocksEngine2_Block_I_BE2_Block_TypeInfo_12d4dd8,
                                               3);
LAB_0056cdf4:
                    plVar13 = (long *)(*(code *)*puVar5)(plVar8,puVar5[1]);
                    if (plVar13 == (long *)0x0) goto LAB_0056db8c;
                    lVar27 = *plVar13;
                    if ((ulong)*(ushort *)(lVar27 + 0x12a) != 0) {
                      uVar21 = 0;
                      piVar24 = (int *)(*(long *)(lVar27 + 0xb0) + 8);
                      do {
                        if (*(long *)(piVar24 + -2) ==
                            _MG_BlocksEngine2_Block_I_BE2_BlockLayout_TypeInfo_12d4de0) {
                          puVar5 = (undefined8 *)(lVar27 + (long)(*piVar24 + 2) * 0x10 + 0x138);
                          goto LAB_0056ce68;
                        }
                        uVar21 = uVar21 + 1;
                        piVar24 = piVar24 + 4;
                      } while (uVar21 < *(ushort *)(lVar27 + 0x12a));
                    }
                    puVar5 = (undefined8 *)
                             native_sub_3c9b34(plVar13,
                                               _MG_BlocksEngine2_Block_I_BE2_BlockLayout_TypeInfo_12d4de0
                                               ,2);
LAB_0056ce68:
                    lVar27 = (*(code *)*puVar5)(plVar13,puVar5[1]);
                    if (lVar27 == 0) goto LAB_0056db8c;
                    if (*(int *)(lVar27 + 0x18) == 0) goto LAB_0056dbe4;
                    plVar13 = *(long **)(lVar27 + 0x20);
                    if (plVar13 == (long *)0x0) goto LAB_0056db8c;
                    lVar27 = *plVar13;
                    if ((ulong)*(ushort *)(lVar27 + 0x12a) != 0) {
                      uVar21 = 0;
                      piVar24 = (int *)(*(long *)(lVar27 + 0xb0) + 8);
                      do {
                        if (*(long *)(piVar24 + -2) ==
                            _MG_BlocksEngine2_Block_I_BE2_BlockSection_TypeInfo_12d4de8) {
                          puVar5 = (undefined8 *)(lVar27 + (long)(*piVar24 + 1) * 0x10 + 0x138);
                          goto LAB_0056cee8;
                        }
                        uVar21 = uVar21 + 1;
                        piVar24 = piVar24 + 4;
                      } while (uVar21 < *(ushort *)(lVar27 + 0x12a));
                    }
                    puVar5 = (undefined8 *)
                             native_sub_3c9b34(plVar13,
                                               _MG_BlocksEngine2_Block_I_BE2_BlockSection_TypeInfo_12d4de8
                                               ,1);
LAB_0056cee8:
                    plVar13 = (long *)(*(code *)*puVar5)(plVar13,puVar5[1]);
                    if (plVar13 == (long *)0x0) goto LAB_0056db8c;
                    lVar27 = *plVar13;
                    if ((ulong)*(ushort *)(lVar27 + 0x12a) != 0) {
                      uVar21 = 0;
                      piVar24 = (int *)(*(long *)(lVar27 + 0xb0) + 8);
                      do {
                        if (*(long *)(piVar24 + -2) ==
                            _MG_BlocksEngine2_Block_I_BE2_BlockSectionHeader_TypeInfo_12d4df8) {
                          puVar5 = (undefined8 *)(lVar27 + (long)*piVar24 * 0x10 + 0x138);
                          goto LAB_0056cf58;
                        }
                        uVar21 = uVar21 + 1;
                        piVar24 = piVar24 + 4;
                      } while (uVar21 < *(ushort *)(lVar27 + 0x12a));
                    }
                    puVar5 = (undefined8 *)
                             native_sub_3c9b34(plVar13,
                                               _MG_BlocksEngine2_Block_I_BE2_BlockSectionHeader_TypeInfo_12d4df8
                                               ,0);
LAB_0056cf58:
                    uVar14 = (*(code *)*puVar5)(plVar13,puVar5[1]);
                    if (((*(byte *)(_UnityEngine_Object_TypeInfo_12d54e0 + 0x133) >> 2 & 1) != 0) &&
                       (*(int *)(_UnityEngine_Object_TypeInfo_12d54e0 + 0xe0) == 0)) {
                      native_sub_4327ec(_UnityEngine_Object_TypeInfo_12d54e0);
                    }
                    native_UnityEngine_Object__Instantiate_BE2_Ins_DefineFunction__4a67c0
                              (uVar12,uVar6,uVar14,
                               _Method_UnityEngine_Object_Instantiate_GameObject____12e5a88);
                  }
                }
                else {
                  lVar27 = native_MG_BlocksEngine2_EditorScript_BE2_Inspector__get_Instance_602da4
                                     (0);
                  if (lVar27 == 0) goto LAB_0056db8c;
                  uVar14 = *(undefined8 *)(lVar27 + 0x78);
                  uVar29 = native_UnityEngine_Vector3__get_zero_776668(0);
                  uVar21 = uVar22;
                  uVar12 = uVar7;
                  uVar10 = native_UnityEngine_Quaternion__get_identity_7628fc(0);
                  lVar27 = *plVar8;
                  if ((ulong)*(ushort *)(lVar27 + 0x12a) != 0) {
                    uVar23 = 0;
                    piVar24 = (int *)(*(long *)(lVar27 + 0xb0) + 8);
                    do {
                      if (*(long *)(piVar24 + -2) ==
                          _MG_BlocksEngine2_Block_I_BE2_Block_TypeInfo_12d4dd8) {
                        puVar5 = (undefined8 *)(lVar27 + (long)(*piVar24 + 3) * 0x10 + 0x138);
                        goto LAB_0056cb50;
                      }
                      uVar23 = uVar23 + 1;
                      piVar24 = piVar24 + 4;
                    } while (uVar23 < *(ushort *)(lVar27 + 0x12a));
                  }
                  puVar5 = (undefined8 *)
                           native_sub_3c9b34(plVar8,
                                             _MG_BlocksEngine2_Block_I_BE2_Block_TypeInfo_12d4dd8,3)
                  ;
LAB_0056cb50:
                  plVar16 = (long *)(*(code *)*puVar5)(plVar8,puVar5[1]);
                  if (plVar16 == (long *)0x0) goto LAB_0056db8c;
                  lVar27 = *plVar16;
                  if ((ulong)*(ushort *)(lVar27 + 0x12a) != 0) {
                    uVar23 = 0;
                    piVar24 = (int *)(*(long *)(lVar27 + 0xb0) + 8);
                    do {
                      if (*(long *)(piVar24 + -2) ==
                          _MG_BlocksEngine2_Block_I_BE2_BlockLayout_TypeInfo_12d4de0) {
                        puVar5 = (undefined8 *)(lVar27 + (long)(*piVar24 + 2) * 0x10 + 0x138);
                        goto LAB_0056cbc4;
                      }
                      uVar23 = uVar23 + 1;
                      piVar24 = piVar24 + 4;
                    } while (uVar23 < *(ushort *)(lVar27 + 0x12a));
                  }
                  puVar5 = (undefined8 *)
                           native_sub_3c9b34(plVar16,
                                             _MG_BlocksEngine2_Block_I_BE2_BlockLayout_TypeInfo_12d4de0
                                             ,2);
LAB_0056cbc4:
                  lVar27 = (*(code *)*puVar5)(plVar16,puVar5[1]);
                  if (lVar27 == 0) goto LAB_0056db8c;
                  if (*(int *)(lVar27 + 0x18) == 0) goto LAB_0056dbe4;
                  plVar16 = *(long **)(lVar27 + 0x20);
                  if (plVar16 == (long *)0x0) goto LAB_0056db8c;
                  lVar27 = *plVar16;
                  if ((ulong)*(ushort *)(lVar27 + 0x12a) != 0) {
                    uVar23 = 0;
                    piVar24 = (int *)(*(long *)(lVar27 + 0xb0) + 8);
                    do {
                      if (*(long *)(piVar24 + -2) ==
                          _MG_BlocksEngine2_Block_I_BE2_BlockSection_TypeInfo_12d4de8) {
                        puVar5 = (undefined8 *)(lVar27 + (long)(*piVar24 + 1) * 0x10 + 0x138);
                        goto LAB_0056cc44;
                      }
                      uVar23 = uVar23 + 1;
                      piVar24 = piVar24 + 4;
                    } while (uVar23 < *(ushort *)(lVar27 + 0x12a));
                  }
                  puVar5 = (undefined8 *)
                           native_sub_3c9b34(plVar16,
                                             _MG_BlocksEngine2_Block_I_BE2_BlockSection_TypeInfo_12d4de8
                                             ,1);
LAB_0056cc44:
                  plVar16 = (long *)(*(code *)*puVar5)(plVar16,puVar5[1]);
                  if (plVar16 == (long *)0x0) goto LAB_0056db8c;
                  lVar27 = *plVar16;
                  if ((ulong)*(ushort *)(lVar27 + 0x12a) != 0) {
                    uVar23 = 0;
                    piVar24 = (int *)(*(long *)(lVar27 + 0xb0) + 8);
                    do {
                      if (*(long *)(piVar24 + -2) ==
                          _MG_BlocksEngine2_Block_I_BE2_BlockSectionHeader_TypeInfo_12d4df8) {
                        puVar5 = (undefined8 *)(lVar27 + (long)*piVar24 * 0x10 + 0x138);
                        goto LAB_0056ccb4;
                      }
                      uVar23 = uVar23 + 1;
                      piVar24 = piVar24 + 4;
                    } while (uVar23 < *(ushort *)(lVar27 + 0x12a));
                  }
                  puVar5 = (undefined8 *)
                           native_sub_3c9b34(plVar16,
                                             _MG_BlocksEngine2_Block_I_BE2_BlockSectionHeader_TypeInfo_12d4df8
                                             ,0);
LAB_0056ccb4:
                  uVar15 = (*(code *)*puVar5)(plVar16,puVar5[1]);
                  if (((*(byte *)(_UnityEngine_Object_TypeInfo_12d54e0 + 0x133) >> 2 & 1) != 0) &&
                     (*(int *)(_UnityEngine_Object_TypeInfo_12d54e0 + 0xe0) == 0)) {
                    native_sub_4327ec(_UnityEngine_Object_TypeInfo_12d54e0);
                  }
                  lVar27 = native_UnityEngine_Object__Instantiate_BE2_Ins_DefineFunction__4a67c0
                                     (uVar29,uVar22,uVar7,uVar10,uVar21,uVar12,uVar6,uVar14,uVar15,
                                      _Method_UnityEngine_Object_Instantiate_GameObject____12e5a88);
                  if (lVar27 == 0) goto LAB_0056db8c;
                  plVar16 = (long *)native_UnityEngine_GameObject__GetComponent_BE2_BlockSectionHeader_Custom__4a2214
                                              (lVar27,
                                               _Method_UnityEngine_GameObject_GetComponent_TMP_Text____12e4a50
                                              );
                  lVar27 = *plVar13;
                  if ((ulong)*(ushort *)(lVar27 + 0x12a) != 0) {
                    uVar21 = 0;
                    piVar24 = (int *)(*(long *)(lVar27 + 0xb0) + 8);
                    do {
                      if (*(long *)(piVar24 + -2) ==
                          _MG_BlocksEngine2_Block_I_BE2_BlockSectionHeaderItem_TypeInfo_12d4e08) {
                        puVar5 = (undefined8 *)(lVar27 + (long)*piVar24 * 0x10 + 0x138);
                        goto LAB_0056cd90;
                      }
                      uVar21 = uVar21 + 1;
                      piVar24 = piVar24 + 4;
                    } while (uVar21 < *(ushort *)(lVar27 + 0x12a));
                  }
                  puVar5 = (undefined8 *)
                           native_sub_3c9b34(plVar13,
                                             _MG_BlocksEngine2_Block_I_BE2_BlockSectionHeaderItem_TypeInfo_12d4e08
                                             ,0);
LAB_0056cd90:
                  lVar27 = (*(code *)*puVar5)(plVar13,puVar5[1]);
                  if (((lVar27 == 0) ||
                      (plVar13 = (long *)native_UnityEngine_Component__GetComponent_ActiveAnimation__49daec
                                                   (lVar27,
                                                  _Method_UnityEngine_Component_GetComponent_TMP_Text____12e2b38
                                                  ), plVar13 == (long *)0x0)) ||
                     (uVar6 = (**(code **)(*plVar13 + 0x548))
                                        (plVar13,*(undefined8 *)(*plVar13 + 0x550)),
                     plVar16 == (long *)0x0)) goto LAB_0056db8c;
                  (**(code **)(*plVar16 + 0x558))(plVar16,uVar6,*(undefined8 *)(*plVar16 + 0x560));
                }
              }
              uVar17 = *(uint *)(lVar19 + 0x18);
              uVar25 = uVar25 + 1;
            } while ((int)uVar25 < (int)uVar17);
          }
          lVar19 = native_MG_BlocksEngine2_Core_BE2_ExecutionManager__get_Instance_564464();
          lVar27 = *plVar8;
          if ((ulong)*(ushort *)(lVar27 + 0x12a) != 0) {
            uVar22 = 0;
            piVar24 = (int *)(*(long *)(lVar27 + 0xb0) + 8);
            do {
              if (*(long *)(piVar24 + -2) == _MG_BlocksEngine2_Block_I_BE2_Block_TypeInfo_12d4dd8) {
                puVar5 = (undefined8 *)(lVar27 + (long)(*piVar24 + 4) * 0x10 + 0x138);
                goto LAB_0056d2cc;
              }
              uVar22 = uVar22 + 1;
              piVar24 = piVar24 + 4;
            } while (uVar22 < *(ushort *)(lVar27 + 0x12a));
          }
          puVar5 = (undefined8 *)
                   native_sub_3c9b34(plVar8,_MG_BlocksEngine2_Block_I_BE2_Block_TypeInfo_12d4dd8,4);
LAB_0056d2cc:
          plVar13 = (long *)(*(code *)*puVar5)(plVar8,puVar5[1]);
          if (((*(byte *)(_MG_BlocksEngine2_Serializer_BE2_BlocksSerializer_TypeInfo_12d3998 + 0x133
                         ) >> 2 & 1) != 0) &&
             (*(int *)(_MG_BlocksEngine2_Serializer_BE2_BlocksSerializer_TypeInfo_12d3998 + 0xe0) ==
              0)) {
            native_sub_4327ec(_MG_BlocksEngine2_Serializer_BE2_BlocksSerializer_TypeInfo_12d3998);
          }
          if (plVar13 == (long *)0x0) {
LAB_0056d324:
            plVar13 = (long *)0x0;
          }
          else {
            if (*(byte *)(*plVar13 + 300) < *(byte *)(_BE2_Ins_FunctionBlock_TypeInfo_12d3a00 + 300)
               ) goto LAB_0056d324;
            if (*(long *)(*(long *)(*plVar13 + 200) +
                          (ulong)*(byte *)(_BE2_Ins_FunctionBlock_TypeInfo_12d3a00 + 300) * 8 + -8)
                != _BE2_Ins_FunctionBlock_TypeInfo_12d3a00) {
              plVar13 = (long *)0x0;
            }
          }
          uVar7 = native_MG_BlocksEngine2_Serializer_BE2_BlocksSerializer__C_InitializeFunctionInstruction_5733c4
                            (plVar13,plVar9);
          if (lVar19 == 0) goto LAB_0056db8c;
          native_UnityEngine_MonoBehaviour__StartCoroutine_8e9174(lVar19,uVar7,0);
        }
      }
      if ((*(long *)(lVar18 + 0x30) != 0) &&
         (uVar22 = native_System_String__op_Inequality_afbbb4
                             (*(long *)(lVar18 + 0x30),_StringLiteral__12eaac0,0), (uVar22 & 1) != 0
         )) {
        lVar19 = *plVar8;
        if ((ulong)*(ushort *)(lVar19 + 0x12a) != 0) {
          uVar22 = 0;
          piVar24 = (int *)(*(long *)(lVar19 + 0xb0) + 8);
          do {
            if (*(long *)(piVar24 + -2) == _MG_BlocksEngine2_Block_I_BE2_Block_TypeInfo_12d4dd8) {
              puVar5 = (undefined8 *)(lVar19 + (long)*piVar24 * 0x10 + 0x138);
              goto LAB_0056d3d8;
            }
            uVar22 = uVar22 + 1;
            piVar24 = piVar24 + 4;
          } while (uVar22 < *(ushort *)(lVar19 + 0x12a));
        }
        puVar5 = (undefined8 *)
                 native_sub_3c9b34(plVar8,_MG_BlocksEngine2_Block_I_BE2_Block_TypeInfo_12d4dd8,0);
LAB_0056d3d8:
        lVar19 = (*(code *)*puVar5)(plVar8,puVar5[1]);
        if (((lVar19 == 0) ||
            (lVar19 = native_UnityEngine_Transform__GetChild_772ef0(lVar19,0,0), lVar19 == 0)) ||
           (lVar19 = native_UnityEngine_Transform__GetChild_772ef0(lVar19,0,0), lVar19 == 0))
        goto LAB_0056db8c;
        uVar7 = native_UnityEngine_Transform__GetChild_772ef0(lVar19,0,0);
        lVar19 = native_MG_BlocksEngine2_Utils_BE2_Text__GetBE2Text_610e74(uVar7,0);
        if (lVar19 == 0) goto LAB_0056db8c;
        native_MG_BlocksEngine2_Utils_BE2_Text__set_text_610ef8
                  (lVar19,*(undefined8 *)(lVar18 + 0x38),0);
        uVar7 = *(undefined8 *)(lVar18 + 0x30);
        if (((*(byte *)(_System_Type_TypeInfo_12d6340 + 0x133) >> 2 & 1) != 0) &&
           (*(int *)(_System_Type_TypeInfo_12d6340 + 0xe0) == 0)) {
          native_sub_4327ec();
        }
        uVar7 = native_sub_43294c(_Method_System_Type_GetType___12e75f8,uVar7,
                                  _Method_MG_BlocksEngine2_Serializer_BE2_BlocksSerializer_SerializableToBlock___12e2130
                                 );
        uVar22 = native_System_Type__op_Inequality_b118e0(uVar7,0,0);
        if ((uVar22 & 1) == 0) {
          uVar7 = native_System_String__Concat_afc654
                            (_StringLiteral_Variables_manager_of_type___12f2ed8,
                             *(undefined8 *)(lVar18 + 0x30),_StringLiteral___was_not_found__12eb5f8,
                             0);
          if (((*(byte *)(_UnityEngine_Debug_TypeInfo_12d4338 + 0x133) >> 2 & 1) != 0) &&
             (*(int *)(_UnityEngine_Debug_TypeInfo_12d4338 + 0xe0) == 0)) {
            native_sub_4327ec(_UnityEngine_Debug_TypeInfo_12d4338);
          }
          native_UnityEngine_Debug__Log_8dc36c(uVar7,0);
        }
        else {
          if (((*(byte *)(_UnityEngine_Object_TypeInfo_12d54e0 + 0x133) >> 2 & 1) != 0) &&
             (*(int *)(_UnityEngine_Object_TypeInfo_12d54e0 + 0xe0) == 0)) {
            native_sub_4327ec();
          }
          uVar7 = native_UnityEngine_Object__FindObjectOfType_8ea870(uVar7,0);
          uVar6 = *(undefined8 *)(lVar18 + 0x38);
          lVar27 = native_sub_4327f8(uVar7,
                                     _MG_BlocksEngine2_Environment_I_BE2_VariablesManager_TypeInfo_12d4e60
                                    );
          lVar19 = _MG_BlocksEngine2_Environment_I_BE2_VariablesManager_TypeInfo_12d4e60;
          if (lVar27 == 0) goto LAB_0056db8c;
          plVar9 = (long *)native_sub_4327f8(uVar7,
                                             _MG_BlocksEngine2_Environment_I_BE2_VariablesManager_TypeInfo_12d4e60
                                            );
          lVar27 = *plVar9;
          if ((ulong)*(ushort *)(lVar27 + 0x12a) != 0) {
            uVar22 = 0;
            piVar24 = (int *)(*(long *)(lVar27 + 0xb0) + 8);
            do {
              if (*(long *)(piVar24 + -2) == lVar19) {
                puVar5 = (undefined8 *)(lVar27 + (long)*piVar24 * 0x10 + 0x138);
                goto LAB_0056d590;
              }
              uVar22 = uVar22 + 1;
              piVar24 = piVar24 + 4;
            } while (uVar22 < *(ushort *)(lVar27 + 0x12a));
          }
          puVar5 = (undefined8 *)native_sub_3c9b34(plVar9,lVar19,0);
LAB_0056d590:
          (*(code *)*puVar5)(plVar9,uVar6,puVar5[1]);
        }
      }
      uVar22 = native_System_String__op_Equality_afc18c
                         (*(undefined8 *)(lVar18 + 0x48),_StringLiteral_true_12f6790,0);
      if ((uVar22 & 1) != 0) {
        lVar19 = *plVar8;
        if ((ulong)*(ushort *)(lVar19 + 0x12a) != 0) {
          uVar22 = 0;
          piVar24 = (int *)(*(long *)(lVar19 + 0xb0) + 8);
          do {
            if (*(long *)(piVar24 + -2) == _MG_BlocksEngine2_Block_I_BE2_Block_TypeInfo_12d4dd8) {
              puVar5 = (undefined8 *)(lVar19 + (long)*piVar24 * 0x10 + 0x138);
              goto LAB_0056d618;
            }
            uVar22 = uVar22 + 1;
            piVar24 = piVar24 + 4;
          } while (uVar22 < *(ushort *)(lVar19 + 0x12a));
        }
        puVar5 = (undefined8 *)
                 native_sub_3c9b34(plVar8,_MG_BlocksEngine2_Block_I_BE2_Block_TypeInfo_12d4dd8,0);
LAB_0056d618:
        lVar19 = (*(code *)*puVar5)(plVar8,puVar5[1]);
        if ((((lVar19 == 0) ||
             (lVar19 = native_UnityEngine_Transform__GetChild_772ef0(lVar19,0,0), lVar19 == 0)) ||
            (lVar19 = native_UnityEngine_Transform__GetChild_772ef0(lVar19,0,0), lVar19 == 0)) ||
           ((lVar19 = native_UnityEngine_Transform__GetChild_772ef0(lVar19,0,0), lVar19 == 0 ||
            (plVar9 = (long *)native_UnityEngine_Component__GetComponent_ActiveAnimation__49daec
                                        (lVar19,
                                         _Method_UnityEngine_Component_GetComponent_TMP_Text____12e2b38
                                        ), plVar9 == (long *)0x0)))) goto LAB_0056db8c;
        (**(code **)(*plVar9 + 0x558))
                  (plVar9,*(undefined8 *)(lVar18 + 0x38),*(undefined8 *)(*plVar9 + 0x560));
      }
      if (((*(byte *)(_MG_BlocksEngine2_Serializer_BE2_BlocksSerializer_TypeInfo_12d3998 + 0x133) >>
            2 & 1) != 0) &&
         (*(int *)(_MG_BlocksEngine2_Serializer_BE2_BlocksSerializer_TypeInfo_12d3998 + 0xe0) == 0))
      {
        native_sub_4327ec();
      }
      **(int **)(_MG_BlocksEngine2_Serializer_BE2_BlocksSerializer_TypeInfo_12d3998 + 0xb8) =
           **(int **)(_MG_BlocksEngine2_Serializer_BE2_BlocksSerializer_TypeInfo_12d3998 + 0xb8) + 1
      ;
      lVar19 = native_MG_BlocksEngine2_Core_BE2_ExecutionManager__get_Instance_564464();
      uVar7 = native_MG_BlocksEngine2_Serializer_BE2_BlocksSerializer__C_AddInputs_57331c
                        (plVar8,lVar18,plVar4);
      if (lVar19 != 0) {
        native_UnityEngine_MonoBehaviour__StartCoroutine_8e9174(lVar19,uVar7,0);
        lVar18 = *plVar8;
        if ((ulong)*(ushort *)(lVar18 + 0x12a) != 0) {
          uVar22 = 0;
          piVar24 = (int *)(*(long *)(lVar18 + 0xb0) + 8);
          do {
            if (*(long *)(piVar24 + -2) == _MG_BlocksEngine2_Block_I_BE2_Block_TypeInfo_12d4dd8) {
              puVar5 = (undefined8 *)(lVar18 + (long)(*piVar24 + 1) * 0x10 + 0x138);
              goto LAB_0056d740;
            }
            uVar22 = uVar22 + 1;
            piVar24 = piVar24 + 4;
          } while (uVar22 < *(ushort *)(lVar18 + 0x12a));
        }
        puVar5 = (undefined8 *)
                 native_sub_3c9b34(plVar8,_MG_BlocksEngine2_Block_I_BE2_Block_TypeInfo_12d4dd8,1);
LAB_0056d740:
        iVar3 = (*(code *)*puVar5)(plVar8,puVar5[1]);
        if (iVar3 == 4) {
          lVar18 = *plVar8;
          if ((ulong)*(ushort *)(lVar18 + 0x12a) != 0) {
            uVar22 = 0;
            piVar24 = (int *)(*(long *)(lVar18 + 0xb0) + 8);
            do {
              if (*(long *)(piVar24 + -2) == _MG_BlocksEngine2_Block_I_BE2_Block_TypeInfo_12d4dd8) {
                puVar5 = (undefined8 *)(lVar18 + (long)(*piVar24 + 1) * 0x10 + 0x138);
                goto LAB_0056d7b4;
              }
              uVar22 = uVar22 + 1;
              piVar24 = piVar24 + 4;
            } while (uVar22 < *(ushort *)(lVar18 + 0x12a));
          }
          puVar5 = (undefined8 *)
                   native_sub_3c9b34(plVar8,_MG_BlocksEngine2_Block_I_BE2_Block_TypeInfo_12d4dd8,1);
LAB_0056d7b4:
          iVar3 = (*(code *)*puVar5)(plVar8,puVar5[1]);
          if (iVar3 != 5) {
            lVar18 = native_MG_BlocksEngine2_Core_BE2_ExecutionManager__get_Instance_564464();
            lVar19 = *plVar8;
            if ((ulong)*(ushort *)(lVar19 + 0x12a) != 0) {
              uVar22 = 0;
              piVar24 = (int *)(*(long *)(lVar19 + 0xb0) + 8);
              do {
                if (*(long *)(piVar24 + -2) == _MG_BlocksEngine2_Block_I_BE2_Block_TypeInfo_12d4dd8)
                {
                  puVar5 = (undefined8 *)(lVar19 + (long)(*piVar24 + 4) * 0x10 + 0x138);
                  goto LAB_0056d830;
                }
                uVar22 = uVar22 + 1;
                piVar24 = piVar24 + 4;
              } while (uVar22 < *(ushort *)(lVar19 + 0x12a));
            }
            puVar5 = (undefined8 *)
                     native_sub_3c9b34(plVar8,_MG_BlocksEngine2_Block_I_BE2_Block_TypeInfo_12d4dd8,4
                                      );
LAB_0056d830:
            plVar9 = (long *)(*(code *)*puVar5)(plVar8,puVar5[1]);
            if (plVar9 != (long *)0x0) {
              lVar19 = *plVar9;
              if ((ulong)*(ushort *)(lVar19 + 0x12a) != 0) {
                uVar22 = 0;
                piVar24 = (int *)(*(long *)(lVar19 + 0xb0) + 8);
                do {
                  if (*(long *)(piVar24 + -2) ==
                      _MG_BlocksEngine2_Block_Instruction_I_BE2_Instruction_TypeInfo_12d4e28) {
                    puVar5 = (undefined8 *)(lVar19 + (long)*piVar24 * 0x10 + 0x138);
                    goto LAB_0056d8a0;
                  }
                  uVar22 = uVar22 + 1;
                  piVar24 = piVar24 + 4;
                } while (uVar22 < *(ushort *)(lVar19 + 0x12a));
              }
              puVar5 = (undefined8 *)
                       native_sub_3c9b34(plVar9,
                                         _MG_BlocksEngine2_Block_Instruction_I_BE2_Instruction_TypeInfo_12d4e28
                                         ,0);
LAB_0056d8a0:
              plVar9 = (long *)(*(code *)*puVar5)(plVar9,puVar5[1]);
              if (plVar9 != (long *)0x0) {
                lVar19 = *plVar9;
                if ((ulong)*(ushort *)(lVar19 + 0x12a) != 0) {
                  uVar22 = 0;
                  piVar24 = (int *)(*(long *)(lVar19 + 0xb0) + 8);
                  do {
                    if (*(long *)(piVar24 + -2) ==
                        _MG_BlocksEngine2_Block_Instruction_I_BE2_InstructionBase_TypeInfo_12d4e30)
                    {
                      puVar5 = (undefined8 *)(lVar19 + (long)(*piVar24 + 4) * 0x10 + 0x138);
                      goto LAB_0056d914;
                    }
                    uVar22 = uVar22 + 1;
                    piVar24 = piVar24 + 4;
                  } while (uVar22 < *(ushort *)(lVar19 + 0x12a));
                }
                puVar5 = (undefined8 *)
                         native_sub_3c9b34(plVar9,
                                           _MG_BlocksEngine2_Block_Instruction_I_BE2_InstructionBase_TypeInfo_12d4e30
                                           ,4);
LAB_0056d914:
                uVar7 = (*(code *)*puVar5)(plVar9,puVar5[1]);
                lVar19 = *plVar4;
                if ((ulong)*(ushort *)(lVar19 + 0x12a) != 0) {
                  uVar22 = 0;
                  piVar24 = (int *)(*(long *)(lVar19 + 0xb0) + 8);
                  do {
                    if (*(long *)(piVar24 + -2) ==
                        _MG_BlocksEngine2_Environment_I_BE2_ProgrammingEnv_TypeInfo_12d4e38) {
                      puVar5 = (undefined8 *)(lVar19 + (long)(*piVar24 + 2) * 0x10 + 0x138);
                      goto LAB_0056d97c;
                    }
                    uVar22 = uVar22 + 1;
                    piVar24 = piVar24 + 4;
                  } while (uVar22 < *(ushort *)(lVar19 + 0x12a));
                }
                puVar5 = (undefined8 *)
                         native_sub_3c9b34(plVar4,
                                           _MG_BlocksEngine2_Environment_I_BE2_ProgrammingEnv_TypeInfo_12d4e38
                                           ,2);
LAB_0056d97c:
                uVar6 = (*(code *)*puVar5)(plVar4,puVar5[1]);
                if (lVar18 != 0) {
                  native_MG_BlocksEngine2_Core_BE2_ExecutionManager__AddToBlocksStackArray_56dd98
                            (lVar18,uVar7,uVar6);
                  lVar18 = *plVar8;
                  if ((ulong)*(ushort *)(lVar18 + 0x12a) != 0) {
                    uVar22 = 0;
                    piVar24 = (int *)(*(long *)(lVar18 + 0xb0) + 8);
                    do {
                      if (*(long *)(piVar24 + -2) ==
                          _MG_BlocksEngine2_Block_I_BE2_Block_TypeInfo_12d4dd8) {
                        puVar5 = (undefined8 *)(lVar18 + (long)(*piVar24 + 4) * 0x10 + 0x138);
                        goto LAB_0056d9fc;
                      }
                      uVar22 = uVar22 + 1;
                      piVar24 = piVar24 + 4;
                    } while (uVar22 < *(ushort *)(lVar18 + 0x12a));
                  }
                  puVar5 = (undefined8 *)
                           native_sub_3c9b34(plVar8,
                                             _MG_BlocksEngine2_Block_I_BE2_Block_TypeInfo_12d4dd8,4)
                  ;
LAB_0056d9fc:
                  plVar4 = (long *)(*(code *)*puVar5)(plVar8,puVar5[1]);
                  if (plVar4 != (long *)0x0) {
                    lVar18 = *plVar4;
                    if ((ulong)*(ushort *)(lVar18 + 0x12a) != 0) {
                      uVar22 = 0;
                      piVar24 = (int *)(*(long *)(lVar18 + 0xb0) + 8);
                      do {
                        if (*(long *)(piVar24 + -2) ==
                            _MG_BlocksEngine2_Block_Instruction_I_BE2_Instruction_TypeInfo_12d4e28)
                        {
                          puVar5 = (undefined8 *)(lVar18 + (long)*piVar24 * 0x10 + 0x138);
                          goto LAB_0056da64;
                        }
                        uVar22 = uVar22 + 1;
                        piVar24 = piVar24 + 4;
                      } while (uVar22 < *(ushort *)(lVar18 + 0x12a));
                    }
                    puVar5 = (undefined8 *)
                             native_sub_3c9b34(plVar4,
                                               _MG_BlocksEngine2_Block_Instruction_I_BE2_Instruction_TypeInfo_12d4e28
                                               ,0);
LAB_0056da64:
                    plVar4 = (long *)(*(code *)*puVar5)(plVar4,puVar5[1]);
                    if (plVar4 != (long *)0x0) {
                      lVar18 = *plVar4;
                      if ((ulong)*(ushort *)(lVar18 + 0x12a) != 0) {
                        uVar22 = 0;
                        piVar24 = (int *)(*(long *)(lVar18 + 0xb0) + 8);
                        do {
                          if (*(long *)(piVar24 + -2) ==
                              _MG_BlocksEngine2_Block_Instruction_I_BE2_InstructionBase_TypeInfo_12d4e30
                             ) {
                            puVar5 = (undefined8 *)(lVar18 + (long)(*piVar24 + 4) * 0x10 + 0x138);
                            goto LAB_0056dad0;
                          }
                          uVar22 = uVar22 + 1;
                          piVar24 = piVar24 + 4;
                        } while (uVar22 < *(ushort *)(lVar18 + 0x12a));
                      }
                      puVar5 = (undefined8 *)
                               native_sub_3c9b34(plVar4,
                                                 _MG_BlocksEngine2_Block_Instruction_I_BE2_InstructionBase_TypeInfo_12d4e30
                                                 ,4);
LAB_0056dad0:
                      plVar4 = (long *)(*(code *)*puVar5)(plVar4,puVar5[1]);
                      if (plVar4 != (long *)0x0) {
                        lVar18 = *plVar4;
                        if ((ulong)*(ushort *)(lVar18 + 0x12a) != 0) {
                          uVar22 = 0;
                          piVar24 = (int *)(*(long *)(lVar18 + 0xb0) + 8);
                          do {
                            if (*(long *)(piVar24 + -2) ==
                                _MG_BlocksEngine2_Core_I_BE2_BlocksStack_TypeInfo_12d4e10) {
                              puVar5 = (undefined8 *)
                                       (lVar18 + (long)(*piVar24 + 0xe) * 0x10 + 0x138);
                              goto LAB_0056db44;
                            }
                            uVar22 = uVar22 + 1;
                            piVar24 = piVar24 + 4;
                          } while (uVar22 < *(ushort *)(lVar18 + 0x12a));
                        }
                        puVar5 = (undefined8 *)
                                 native_sub_3c9b34(plVar4,
                                                  _MG_BlocksEngine2_Core_I_BE2_BlocksStack_TypeInfo_12d4e10
                                                  ,0xe);
LAB_0056db44:
                        (*(code *)*puVar5)(plVar4,puVar5[1]);
                        goto LAB_0056db50;
                      }
                    }
                  }
                }
              }
            }
            goto LAB_0056db8c;
          }
        }
LAB_0056db50:
        native_UnityEngine_Resources__UnloadUnusedAssets_769574(0);
        return plVar8;
      }
LAB_0056db8c:
                    /* WARNING: Subroutine does not return */
      native_sub_432810();
    }
    plVar8 = (long *)plVar8[2];
    if (plVar8 == (long *)0x0) goto LAB_0056b2b4;
    lVar18 = (**(code **)(*plVar8 + 0x168))(plVar8,*(undefined8 *)(*plVar8 + 0x170));
    plVar4[6] = lVar18;
    native_sub_4326e0();
    lVar18 = *param_5;
    if ((ulong)*(ushort *)(lVar18 + 0x12a) != 0) {
      uVar22 = 0;
      piVar24 = (int *)(*(long *)(lVar18 + 0xb0) + 8);
      do {
        if (*(long *)(piVar24 + -2) == _MG_BlocksEngine2_Block_I_BE2_Block_TypeInfo_12d4dd8) {
          puVar5 = (undefined8 *)(lVar18 + (long)*piVar24 * 0x10 + 0x138);
          goto LAB_0056a008;
        }
        uVar22 = uVar22 + 1;
        piVar24 = piVar24 + 4;
      } while (uVar22 < *(ushort *)(lVar18 + 0x12a));
    }
    puVar5 = (undefined8 *)
             native_sub_3c9b34(param_5,_MG_BlocksEngine2_Block_I_BE2_Block_TypeInfo_12d4dd8,0);
LAB_0056a008:
    lVar18 = (*(code *)*puVar5)(param_5,puVar5[1]);
    if (((lVar18 == 0) ||
        (lVar18 = native_UnityEngine_Transform__GetChild_772ef0(lVar18,0,0), lVar18 == 0)) ||
       (lVar18 = native_UnityEngine_Transform__GetChild_772ef0(lVar18,0,0), lVar18 == 0))
    goto LAB_0056b2b4;
    uVar7 = native_UnityEngine_Transform__GetChild_772ef0(lVar18,0,0);
    lVar18 = native_MG_BlocksEngine2_Utils_BE2_Text__GetBE2Text_610e74(uVar7,0);
    if (lVar18 == 0) goto LAB_0056b2b4;
    lVar18 = native_MG_BlocksEngine2_Utils_BE2_Text__get_text_61a754(lVar18,0);
    plVar4[7] = lVar18;
  }
  native_sub_4326e0();
  uVar7 = _BE2_Op_FunctionLocalVariable_var_12d1308;
  if (((*(byte *)(_System_Type_TypeInfo_12d6340 + 0x133) >> 2 & 1) != 0) &&
     (*(int *)(_System_Type_TypeInfo_12d6340 + 0xe0) == 0)) {
    native_sub_4327ec();
  }
  uVar7 = native_System_Type__GetTypeFromHandle_b0fb24(uVar7,0);
  uVar22 = native_System_Type__op_Equality_b117c4(uVar6,uVar7,0);
  if ((uVar22 & 1) != 0) {
    lVar18 = *param_5;
    if ((ulong)*(ushort *)(lVar18 + 0x12a) != 0) {
      uVar22 = 0;
      piVar24 = (int *)(*(long *)(lVar18 + 0xb0) + 8);
      do {
        if (*(long *)(piVar24 + -2) == _MG_BlocksEngine2_Block_I_BE2_Block_TypeInfo_12d4dd8) {
          puVar5 = (undefined8 *)(lVar18 + (long)*piVar24 * 0x10 + 0x138);
          goto LAB_0056a110;
        }
        uVar22 = uVar22 + 1;
        piVar24 = piVar24 + 4;
      } while (uVar22 < *(ushort *)(lVar18 + 0x12a));
    }
    puVar5 = (undefined8 *)
             native_sub_3c9b34(param_5,_MG_BlocksEngine2_Block_I_BE2_Block_TypeInfo_12d4dd8,0);
LAB_0056a110:
    lVar18 = (*(code *)*puVar5)(param_5,puVar5[1]);
    if (((lVar18 == 0) ||
        (lVar18 = native_UnityEngine_Transform__GetChild_772ef0(lVar18,0,0), lVar18 == 0)) ||
       (lVar18 = native_UnityEngine_Transform__GetChild_772ef0(lVar18,0,0), lVar18 == 0))
    goto LAB_0056b2b4;
    uVar7 = native_UnityEngine_Transform__GetChild_772ef0(lVar18,0,0);
    lVar18 = native_MG_BlocksEngine2_Utils_BE2_Text__GetBE2Text_610e74(uVar7,0);
    if (lVar18 == 0) goto LAB_0056b2b4;
    lVar18 = native_MG_BlocksEngine2_Utils_BE2_Text__get_text_61a754(lVar18,0);
    plVar4[7] = lVar18;
    native_sub_4326e0(plVar4 + 7,lVar18);
    plVar4[9] = _StringLiteral_true_12f6790;
    native_sub_4326e0(plVar4 + 9);
  }
  uVar7 = _BE2_Ins_FunctionBlock_var_12d1300;
  if (((*(byte *)(_System_Type_TypeInfo_12d6340 + 0x133) >> 2 & 1) != 0) &&
     (*(int *)(_System_Type_TypeInfo_12d6340 + 0xe0) == 0)) {
    native_sub_4327ec();
  }
  uVar7 = native_System_Type__GetTypeFromHandle_b0fb24(uVar7,0);
  uVar22 = native_System_Type__op_Equality_b117c4(uVar6,uVar7,0);
  if ((uVar22 & 1) == 0) {
    lVar18 = *param_5;
    if ((ulong)*(ushort *)(lVar18 + 0x12a) != 0) {
      uVar22 = 0;
      piVar24 = (int *)(*(long *)(lVar18 + 0xb0) + 8);
      do {
        if (*(long *)(piVar24 + -2) == _MG_BlocksEngine2_Block_I_BE2_Block_TypeInfo_12d4dd8) {
          puVar5 = (undefined8 *)(lVar18 + (long)(*piVar24 + 1) * 0x10 + 0x138);
          goto LAB_0056a244;
        }
        uVar22 = uVar22 + 1;
        piVar24 = piVar24 + 4;
      } while (uVar22 < *(ushort *)(lVar18 + 0x12a));
    }
    puVar5 = (undefined8 *)
             native_sub_3c9b34(param_5,_MG_BlocksEngine2_Block_I_BE2_Block_TypeInfo_12d4dd8,1);
LAB_0056a244:
    iVar3 = (*(code *)*puVar5)(param_5,puVar5[1]);
    if (iVar3 == 5) goto LAB_0056a258;
  }
  else {
LAB_0056a258:
    lVar18 = *param_5;
    if ((ulong)*(ushort *)(lVar18 + 0x12a) != 0) {
      uVar22 = 0;
      piVar24 = (int *)(*(long *)(lVar18 + 0xb0) + 8);
      do {
        if (*(long *)(piVar24 + -2) == _MG_BlocksEngine2_Block_I_BE2_Block_TypeInfo_12d4dd8) {
          puVar5 = (undefined8 *)(lVar18 + (long)(*piVar24 + 4) * 0x10 + 0x138);
          goto LAB_0056a2bc;
        }
        uVar22 = uVar22 + 1;
        piVar24 = piVar24 + 4;
      } while (uVar22 < *(ushort *)(lVar18 + 0x12a));
    }
    puVar5 = (undefined8 *)
             native_sub_3c9b34(param_5,_MG_BlocksEngine2_Block_I_BE2_Block_TypeInfo_12d4dd8,4);
LAB_0056a2bc:
    plVar8 = (long *)(*(code *)*puVar5)(param_5,puVar5[1]);
    if (plVar8 == (long *)0x0) {
LAB_0056a2ec:
      plVar8 = (long *)0x0;
    }
    else {
      if (*(byte *)(*plVar8 + 300) < *(byte *)(_BE2_Ins_FunctionBlock_TypeInfo_12d3a00 + 300))
      goto LAB_0056a2ec;
      if (*(long *)(*(long *)(*plVar8 + 200) +
                    (ulong)*(byte *)(_BE2_Ins_FunctionBlock_TypeInfo_12d3a00 + 300) * 8 + -8) !=
          _BE2_Ins_FunctionBlock_TypeInfo_12d3a00) {
        plVar8 = (long *)0x0;
      }
    }
    if (((*(byte *)(_UnityEngine_Object_TypeInfo_12d54e0 + 0x133) >> 2 & 1) != 0) &&
       (*(int *)(_UnityEngine_Object_TypeInfo_12d54e0 + 0xe0) == 0)) {
      native_sub_4327ec();
    }
    uVar22 = native_UnityEngine_Object__op_Inequality_8d76fc(plVar8,0,0);
    if ((uVar22 & 1) != 0) {
      if (plVar8 == (long *)0x0) goto LAB_0056b2b4;
      plVar4[8] = plVar8[0xf];
      native_sub_4326e0();
    }
    lVar18 = *param_5;
    if ((ulong)*(ushort *)(lVar18 + 0x12a) != 0) {
      uVar22 = 0;
      piVar24 = (int *)(*(long *)(lVar18 + 0xb0) + 8);
      do {
        if (*(long *)(piVar24 + -2) == _MG_BlocksEngine2_Block_I_BE2_Block_TypeInfo_12d4dd8) {
          puVar5 = (undefined8 *)(lVar18 + (long)(*piVar24 + 4) * 0x10 + 0x138);
          goto LAB_0056a3b0;
        }
        uVar22 = uVar22 + 1;
        piVar24 = piVar24 + 4;
      } while (uVar22 < *(ushort *)(lVar18 + 0x12a));
    }
    puVar5 = (undefined8 *)
             native_sub_3c9b34(param_5,_MG_BlocksEngine2_Block_I_BE2_Block_TypeInfo_12d4dd8,4);
LAB_0056a3b0:
    plVar8 = (long *)(*(code *)*puVar5)(param_5,puVar5[1]);
    if (plVar8 == (long *)0x0) {
LAB_0056a3e0:
      plVar8 = (long *)0x0;
    }
    else {
      if (*(byte *)(*plVar8 + 300) < *(byte *)(_BE2_Ins_DefineFunction_TypeInfo_12d39f8 + 300))
      goto LAB_0056a3e0;
      if (*(long *)(*(long *)(*plVar8 + 200) +
                    (ulong)*(byte *)(_BE2_Ins_DefineFunction_TypeInfo_12d39f8 + 300) * 8 + -8) !=
          _BE2_Ins_DefineFunction_TypeInfo_12d39f8) {
        plVar8 = (long *)0x0;
      }
    }
    if (((*(byte *)(_UnityEngine_Object_TypeInfo_12d54e0 + 0x133) >> 2 & 1) != 0) &&
       (*(int *)(_UnityEngine_Object_TypeInfo_12d54e0 + 0xe0) == 0)) {
      native_sub_4327ec();
    }
    uVar22 = native_UnityEngine_Object__op_Inequality_8d76fc(plVar8,0,0);
    if ((uVar22 & 1) != 0) {
      if (plVar8 == (long *)0x0) goto LAB_0056b2b4;
      plVar4[8] = plVar8[0xf];
      native_sub_4326e0(plVar4 + 8);
      lVar18 = native_sub_432808(_System_Collections_Generic_List_DefineItem__TypeInfo_12d2a00);
      native_System_Collections_Generic_List_XmlEventCache_XmlEvent______ctor_d3ff44
                (lVar18,_Method_System_Collections_Generic_List_DefineItem___ctor___12dc720);
      plVar8 = plVar4 + 10;
      plVar4[10] = lVar18;
      native_sub_4326e0(plVar8,lVar18);
      lVar18 = *param_5;
      if ((ulong)*(ushort *)(lVar18 + 0x12a) != 0) {
        uVar22 = 0;
        piVar24 = (int *)(*(long *)(lVar18 + 0xb0) + 8);
        do {
          if (*(long *)(piVar24 + -2) == _MG_BlocksEngine2_Block_I_BE2_Block_TypeInfo_12d4dd8) {
            puVar5 = (undefined8 *)(lVar18 + (long)(*piVar24 + 3) * 0x10 + 0x138);
            goto LAB_0056a4e4;
          }
          uVar22 = uVar22 + 1;
          piVar24 = piVar24 + 4;
        } while (uVar22 < *(ushort *)(lVar18 + 0x12a));
      }
      puVar5 = (undefined8 *)
               native_sub_3c9b34(param_5,_MG_BlocksEngine2_Block_I_BE2_Block_TypeInfo_12d4dd8,3);
LAB_0056a4e4:
      plVar9 = (long *)(*(code *)*puVar5)(param_5,puVar5[1]);
      if (plVar9 == (long *)0x0) goto LAB_0056b2b4;
      lVar18 = *plVar9;
      if ((ulong)*(ushort *)(lVar18 + 0x12a) != 0) {
        uVar22 = 0;
        piVar24 = (int *)(*(long *)(lVar18 + 0xb0) + 8);
        do {
          if (*(long *)(piVar24 + -2) == _MG_BlocksEngine2_Block_I_BE2_BlockLayout_TypeInfo_12d4de0)
          {
            puVar5 = (undefined8 *)(lVar18 + (long)(*piVar24 + 2) * 0x10 + 0x138);
            goto LAB_0056a558;
          }
          uVar22 = uVar22 + 1;
          piVar24 = piVar24 + 4;
        } while (uVar22 < *(ushort *)(lVar18 + 0x12a));
      }
      puVar5 = (undefined8 *)
               native_sub_3c9b34(plVar9,_MG_BlocksEngine2_Block_I_BE2_BlockLayout_TypeInfo_12d4de0,2
                                );
LAB_0056a558:
      lVar18 = (*(code *)*puVar5)(plVar9,puVar5[1]);
      if (lVar18 == 0) goto LAB_0056b2b4;
      if (*(int *)(lVar18 + 0x18) == 0) {
LAB_0056b2b8:
        uVar7 = native_sub_43283c();
                    /* WARNING: Subroutine does not return */
        native_sub_4327dc(uVar7,0);
      }
      plVar9 = *(long **)(lVar18 + 0x20);
      if (plVar9 == (long *)0x0) goto LAB_0056b2b4;
      lVar18 = *plVar9;
      if ((ulong)*(ushort *)(lVar18 + 0x12a) != 0) {
        uVar22 = 0;
        piVar24 = (int *)(*(long *)(lVar18 + 0xb0) + 8);
        do {
          if (*(long *)(piVar24 + -2) == _MG_BlocksEngine2_Block_I_BE2_BlockSection_TypeInfo_12d4de8
             ) {
            puVar5 = (undefined8 *)(lVar18 + (long)(*piVar24 + 1) * 0x10 + 0x138);
            goto LAB_0056a5d8;
          }
          uVar22 = uVar22 + 1;
          piVar24 = piVar24 + 4;
        } while (uVar22 < *(ushort *)(lVar18 + 0x12a));
      }
      puVar5 = (undefined8 *)
               native_sub_3c9b34(plVar9,_MG_BlocksEngine2_Block_I_BE2_BlockSection_TypeInfo_12d4de8,
                                 1);
LAB_0056a5d8:
      plVar9 = (long *)(*(code *)*puVar5)(plVar9,puVar5[1]);
      if (plVar9 == (long *)0x0) goto LAB_0056b2b4;
      lVar18 = *plVar9;
      if ((ulong)*(ushort *)(lVar18 + 0x12a) != 0) {
        uVar22 = 0;
        piVar24 = (int *)(*(long *)(lVar18 + 0xb0) + 8);
        do {
          if (*(long *)(piVar24 + -2) ==
              _MG_BlocksEngine2_Block_I_BE2_BlockSectionHeader_TypeInfo_12d4df8) {
            puVar5 = (undefined8 *)(lVar18 + (long)(*piVar24 + 1) * 0x10 + 0x138);
            goto LAB_0056a64c;
          }
          uVar22 = uVar22 + 1;
          piVar24 = piVar24 + 4;
        } while (uVar22 < *(ushort *)(lVar18 + 0x12a));
      }
      puVar5 = (undefined8 *)
               native_sub_3c9b34(plVar9,
                                 _MG_BlocksEngine2_Block_I_BE2_BlockSectionHeader_TypeInfo_12d4df8,1
                                );
LAB_0056a64c:
      lVar18 = (*(code *)*puVar5)(plVar9,puVar5[1]);
      if (lVar18 == 0) goto LAB_0056b2b4;
      uVar17 = *(uint *)(lVar18 + 0x18);
      if (0 < (int)uVar17) {
        uVar25 = 0;
        do {
          if (uVar17 <= uVar25) goto LAB_0056b2b8;
          plVar9 = *(long **)(lVar18 + (long)(int)uVar25 * 8 + 0x20);
          if (plVar9 == (long *)0x0) goto LAB_0056b2b4;
          lVar19 = *plVar9;
          if ((ulong)*(ushort *)(lVar19 + 0x12a) != 0) {
            uVar22 = 0;
            piVar24 = (int *)(*(long *)(lVar19 + 0xb0) + 8);
            do {
              if (*(long *)(piVar24 + -2) ==
                  _MG_BlocksEngine2_Block_I_BE2_BlockSectionHeaderItem_TypeInfo_12d4e08) {
                puVar5 = (undefined8 *)(lVar19 + (long)*piVar24 * 0x10 + 0x138);
                goto LAB_0056a6e8;
              }
              uVar22 = uVar22 + 1;
              piVar24 = piVar24 + 4;
            } while (uVar22 < *(ushort *)(lVar19 + 0x12a));
          }
          puVar5 = (undefined8 *)
                   native_sub_3c9b34(plVar9,
                                     _MG_BlocksEngine2_Block_I_BE2_BlockSectionHeaderItem_TypeInfo_12d4e08
                                     ,0);
LAB_0056a6e8:
          lVar19 = (*(code *)*puVar5)(plVar9,puVar5[1]);
          if ((lVar19 == 0) ||
             (lVar19 = native_UnityEngine_Object__get_name_8e8098(lVar19,0), lVar19 == 0))
          goto LAB_0056b2b4;
          uVar22 = native_System_String__Contains_b0bafc
                             (lVar19,_StringLiteral__FixedLabel__12f32b0,0);
          if ((uVar22 & 1) == 0) {
            lVar19 = *plVar9;
            if ((ulong)*(ushort *)(lVar19 + 0x12a) != 0) {
              uVar22 = 0;
              piVar24 = (int *)(*(long *)(lVar19 + 0xb0) + 8);
              do {
                if (*(long *)(piVar24 + -2) ==
                    _MG_BlocksEngine2_Block_I_BE2_BlockSectionHeaderItem_TypeInfo_12d4e08) {
                  puVar5 = (undefined8 *)(lVar19 + (long)*piVar24 * 0x10 + 0x138);
                  goto LAB_0056a768;
                }
                uVar22 = uVar22 + 1;
                piVar24 = piVar24 + 4;
              } while (uVar22 < *(ushort *)(lVar19 + 0x12a));
            }
            puVar5 = (undefined8 *)
                     native_sub_3c9b34(plVar9,
                                       _MG_BlocksEngine2_Block_I_BE2_BlockSectionHeaderItem_TypeInfo_12d4e08
                                       ,0);
LAB_0056a768:
            lVar19 = (*(code *)*puVar5)(plVar9,puVar5[1]);
            if (lVar19 == 0) goto LAB_0056b2b4;
            uVar7 = native_UnityEngine_Component__GetComponent_ActiveAnimation__49daec
                              (lVar19,
                               _Method_UnityEngine_Component_GetComponent_BE2_BlockSectionHeader_Label____12e2938
                              );
            lVar19 = *plVar9;
            if ((ulong)*(ushort *)(lVar19 + 0x12a) != 0) {
              uVar22 = 0;
              piVar24 = (int *)(*(long *)(lVar19 + 0xb0) + 8);
              do {
                if (*(long *)(piVar24 + -2) ==
                    _MG_BlocksEngine2_Block_I_BE2_BlockSectionHeaderItem_TypeInfo_12d4e08) {
                  puVar5 = (undefined8 *)(lVar19 + (long)*piVar24 * 0x10 + 0x138);
                  goto LAB_0056a7e0;
                }
                uVar22 = uVar22 + 1;
                piVar24 = piVar24 + 4;
              } while (uVar22 < *(ushort *)(lVar19 + 0x12a));
            }
            puVar5 = (undefined8 *)
                     native_sub_3c9b34(plVar9,
                                       _MG_BlocksEngine2_Block_I_BE2_BlockSectionHeaderItem_TypeInfo_12d4e08
                                       ,0);
LAB_0056a7e0:
            lVar19 = (*(code *)*puVar5)(plVar9,puVar5[1]);
            if (lVar19 == 0) goto LAB_0056b2b4;
            uVar6 = native_UnityEngine_Component__GetComponent_ActiveAnimation__49daec
                              (lVar19,
                               _Method_UnityEngine_Component_GetComponent_BE2_BlockSectionHeader_InputField____12e2930
                              );
            lVar19 = *plVar9;
            if ((ulong)*(ushort *)(lVar19 + 0x12a) != 0) {
              uVar22 = 0;
              piVar24 = (int *)(*(long *)(lVar19 + 0xb0) + 8);
              do {
                if (*(long *)(piVar24 + -2) ==
                    _MG_BlocksEngine2_Block_I_BE2_BlockSectionHeaderItem_TypeInfo_12d4e08) {
                  puVar5 = (undefined8 *)(lVar19 + (long)*piVar24 * 0x10 + 0x138);
                  goto LAB_0056a858;
                }
                uVar22 = uVar22 + 1;
                piVar24 = piVar24 + 4;
              } while (uVar22 < *(ushort *)(lVar19 + 0x12a));
            }
            puVar5 = (undefined8 *)
                     native_sub_3c9b34(plVar9,
                                       _MG_BlocksEngine2_Block_I_BE2_BlockSectionHeaderItem_TypeInfo_12d4e08
                                       ,0);
LAB_0056a858:
            lVar19 = (*(code *)*puVar5)(plVar9,puVar5[1]);
            if (lVar19 == 0) goto LAB_0056b2b4;
            uVar10 = native_UnityEngine_Component__GetComponent_ActiveAnimation__49daec
                               (lVar19,
                                _Method_UnityEngine_Component_GetComponent_BE2_BlockSectionHeader_LocalVariable____12e2940
                               );
            lVar19 = *plVar9;
            if ((ulong)*(ushort *)(lVar19 + 0x12a) != 0) {
              uVar22 = 0;
              piVar24 = (int *)(*(long *)(lVar19 + 0xb0) + 8);
              do {
                if (*(long *)(piVar24 + -2) ==
                    _MG_BlocksEngine2_Block_I_BE2_BlockSectionHeaderItem_TypeInfo_12d4e08) {
                  puVar5 = (undefined8 *)(lVar19 + (long)*piVar24 * 0x10 + 0x138);
                  goto LAB_0056a8d0;
                }
                uVar22 = uVar22 + 1;
                piVar24 = piVar24 + 4;
              } while (uVar22 < *(ushort *)(lVar19 + 0x12a));
            }
            puVar5 = (undefined8 *)
                     native_sub_3c9b34(plVar9,
                                       _MG_BlocksEngine2_Block_I_BE2_BlockSectionHeaderItem_TypeInfo_12d4e08
                                       ,0);
LAB_0056a8d0:
            lVar19 = (*(code *)*puVar5)(plVar9,puVar5[1]);
            if (lVar19 == 0) goto LAB_0056b2b4;
            lVar19 = native_UnityEngine_Component__GetComponent_ActiveAnimation__49daec
                               (lVar19,
                                _Method_UnityEngine_Component_GetComponent_BE2_BlockSectionHeader_Custom____12e2928
                               );
            if (((*(byte *)(_UnityEngine_Object_TypeInfo_12d54e0 + 0x133) >> 2 & 1) != 0) &&
               (*(int *)(_UnityEngine_Object_TypeInfo_12d54e0 + 0xe0) == 0)) {
              native_sub_4327ec(_UnityEngine_Object_TypeInfo_12d54e0);
            }
            uVar22 = native_UnityEngine_Object__op_Implicit_8e1b98(uVar7,0);
            if ((uVar22 & 1) == 0) {
              if (((*(byte *)(_UnityEngine_Object_TypeInfo_12d54e0 + 0x133) >> 2 & 1) != 0) &&
                 (*(int *)(_UnityEngine_Object_TypeInfo_12d54e0 + 0xe0) == 0)) {
                native_sub_4327ec();
              }
              uVar22 = native_UnityEngine_Object__op_Implicit_8e1b98(uVar6,0);
              if ((uVar22 & 1) != 0) {
LAB_0056a9d4:
                lVar19 = *plVar9;
                lVar27 = *plVar8;
                if ((ulong)*(ushort *)(lVar19 + 0x12a) != 0) {
                  uVar22 = 0;
                  piVar24 = (int *)(*(long *)(lVar19 + 0xb0) + 8);
                  do {
                    if (*(long *)(piVar24 + -2) ==
                        _MG_BlocksEngine2_Block_I_BE2_BlockSectionHeaderItem_TypeInfo_12d4e08) {
                      puVar5 = (undefined8 *)(lVar19 + (long)*piVar24 * 0x10 + 0x138);
                      goto LAB_0056ab10;
                    }
                    uVar22 = uVar22 + 1;
                    piVar24 = piVar24 + 4;
                  } while (uVar22 < *(ushort *)(lVar19 + 0x12a));
                }
                puVar5 = (undefined8 *)
                         native_sub_3c9b34(plVar9,
                                           _MG_BlocksEngine2_Block_I_BE2_BlockSectionHeaderItem_TypeInfo_12d4e08
                                           ,0);
LAB_0056ab10:
                lVar19 = (*(code *)*puVar5)(plVar9,puVar5[1]);
                if ((lVar19 != 0) &&
                   (plVar9 = (long *)native_UnityEngine_Component__GetComponentInChildren_Animation__49db98
                                               (lVar19,
                                                _Method_UnityEngine_Component_GetComponentInChildren_TMP_Text____12e2c98
                                               ), plVar9 != (long *)0x0)) {
                  uVar6 = (**(code **)(*plVar9 + 0x548))(plVar9,*(undefined8 *)(*plVar9 + 0x550));
                  uVar7 = native_sub_432808(_MG_BlocksEngine2_Serializer_DefineItem_TypeInfo_12d43d8
                                           );
                  puVar5 = (undefined8 *)&StringLiteral_variable_12f6a60;
                  goto LAB_0056ab64;
                }
                goto LAB_0056b2b4;
              }
              if (((*(byte *)(_UnityEngine_Object_TypeInfo_12d54e0 + 0x133) >> 2 & 1) != 0) &&
                 (*(int *)(_UnityEngine_Object_TypeInfo_12d54e0 + 0xe0) == 0)) {
                native_sub_4327ec();
              }
              uVar22 = native_UnityEngine_Object__op_Implicit_8e1b98(uVar10,0);
              if ((uVar22 & 1) != 0) goto LAB_0056a9d4;
              if (((*(byte *)(_UnityEngine_Object_TypeInfo_12d54e0 + 0x133) >> 2 & 1) != 0) &&
                 (*(int *)(_UnityEngine_Object_TypeInfo_12d54e0 + 0xe0) == 0)) {
                native_sub_4327ec();
              }
              uVar22 = native_UnityEngine_Object__op_Implicit_8e1b98(lVar19,0);
              if ((uVar22 & 1) == 0) goto LAB_0056ab94;
              if (lVar19 == 0) goto LAB_0056b2b4;
              lVar27 = *plVar8;
              uVar6 = *(undefined8 *)(lVar19 + 0x20);
              uVar7 = native_sub_432808(_MG_BlocksEngine2_Serializer_DefineItem_TypeInfo_12d43d8);
              native_MG_BlocksEngine2_Serializer_DefineItem___ctor_decca4
                        (uVar7,_StringLiteral_custom_12f42a0,uVar6,0);
            }
            else {
              lVar19 = *plVar9;
              lVar27 = *plVar8;
              if ((ulong)*(ushort *)(lVar19 + 0x12a) != 0) {
                uVar22 = 0;
                piVar24 = (int *)(*(long *)(lVar19 + 0xb0) + 8);
                do {
                  if (*(long *)(piVar24 + -2) ==
                      _MG_BlocksEngine2_Block_I_BE2_BlockSectionHeaderItem_TypeInfo_12d4e08) {
                    puVar5 = (undefined8 *)(lVar19 + (long)*piVar24 * 0x10 + 0x138);
                    goto LAB_0056aa2c;
                  }
                  uVar22 = uVar22 + 1;
                  piVar24 = piVar24 + 4;
                } while (uVar22 < *(ushort *)(lVar19 + 0x12a));
              }
              puVar5 = (undefined8 *)
                       native_sub_3c9b34(plVar9,
                                         _MG_BlocksEngine2_Block_I_BE2_BlockSectionHeaderItem_TypeInfo_12d4e08
                                         ,0);
LAB_0056aa2c:
              lVar19 = (*(code *)*puVar5)(plVar9,puVar5[1]);
              if ((lVar19 == 0) ||
                 (plVar9 = (long *)native_UnityEngine_Component__GetComponent_ActiveAnimation__49daec
                                             (lVar19,
                                              _Method_UnityEngine_Component_GetComponent_TMP_Text____12e2b38
                                             ), plVar9 == (long *)0x0)) goto LAB_0056b2b4;
              uVar6 = (**(code **)(*plVar9 + 0x548))(plVar9,*(undefined8 *)(*plVar9 + 0x550));
              uVar7 = native_sub_432808(_MG_BlocksEngine2_Serializer_DefineItem_TypeInfo_12d43d8);
              puVar5 = (undefined8 *)&StringLiteral_label_12f5370;
LAB_0056ab64:
              native_MG_BlocksEngine2_Serializer_DefineItem___ctor_decca4(uVar7,*puVar5,uVar6,0);
            }
            if (lVar27 == 0) goto LAB_0056b2b4;
            native_System_Collections_Generic_List_int_____Add_d40c00
                      (lVar27,uVar7,
                       _Method_System_Collections_Generic_List_DefineItem__Add___12dc728);
          }
LAB_0056ab94:
          uVar17 = *(uint *)(lVar18 + 0x18);
          uVar25 = uVar25 + 1;
        } while ((int)uVar25 < (int)uVar17);
      }
    }
  }
  lVar18 = *param_5;
  if ((ulong)*(ushort *)(lVar18 + 0x12a) != 0) {
    uVar22 = 0;
    piVar24 = (int *)(*(long *)(lVar18 + 0xb0) + 8);
    do {
      if (*(long *)(piVar24 + -2) == _MG_BlocksEngine2_Block_I_BE2_Block_TypeInfo_12d4dd8) {
        puVar5 = (undefined8 *)(lVar18 + (long)(*piVar24 + 3) * 0x10 + 0x138);
        goto LAB_0056ac08;
      }
      uVar22 = uVar22 + 1;
      piVar24 = piVar24 + 4;
    } while (uVar22 < *(ushort *)(lVar18 + 0x12a));
  }
  puVar5 = (undefined8 *)
           native_sub_3c9b34(param_5,_MG_BlocksEngine2_Block_I_BE2_Block_TypeInfo_12d4dd8,3);
LAB_0056ac08:
  plVar8 = (long *)(*(code *)*puVar5)(param_5,puVar5[1]);
  if (plVar8 != (long *)0x0) {
    lVar18 = *plVar8;
    if ((ulong)*(ushort *)(lVar18 + 0x12a) != 0) {
      uVar22 = 0;
      piVar24 = (int *)(*(long *)(lVar18 + 0xb0) + 8);
      do {
        if (*(long *)(piVar24 + -2) == _MG_BlocksEngine2_Block_I_BE2_BlockLayout_TypeInfo_12d4de0) {
          puVar5 = (undefined8 *)(lVar18 + (long)(*piVar24 + 2) * 0x10 + 0x138);
          goto LAB_0056ac7c;
        }
        uVar22 = uVar22 + 1;
        piVar24 = piVar24 + 4;
      } while (uVar22 < *(ushort *)(lVar18 + 0x12a));
    }
    puVar5 = (undefined8 *)
             native_sub_3c9b34(plVar8,_MG_BlocksEngine2_Block_I_BE2_BlockLayout_TypeInfo_12d4de0,2);
LAB_0056ac7c:
    lVar18 = (*(code *)*puVar5)(plVar8,puVar5[1]);
    if (lVar18 != 0) {
      uVar17 = *(uint *)(lVar18 + 0x18);
      if (0 < (int)uVar17) {
        uVar25 = 0;
        do {
          if (uVar17 <= uVar25) goto LAB_0056b2b8;
          plVar8 = *(long **)(lVar18 + (long)(int)uVar25 * 8 + 0x20);
          lVar19 = native_sub_432808(
                                    _MG_BlocksEngine2_Serializer_BE2_SerializableSection_TypeInfo_12d3a48
                                    );
          native_MG_BlocksEngine2_Serializer_BE2_SerializableSection___ctor_619074(lVar19,0);
          if ((plVar4[5] == 0) ||
             (native_System_Collections_Generic_List_int_____Add_d40c00
                        (plVar4[5],lVar19,
                         _Method_System_Collections_Generic_List_BE2_SerializableSection__Add___12dc4c8
                        ), plVar8 == (long *)0x0)) goto LAB_0056b2b4;
          lVar27 = *plVar8;
          if ((ulong)*(ushort *)(lVar27 + 0x12a) != 0) {
            uVar22 = 0;
            piVar24 = (int *)(*(long *)(lVar27 + 0xb0) + 8);
            do {
              if (*(long *)(piVar24 + -2) ==
                  _MG_BlocksEngine2_Block_I_BE2_BlockSection_TypeInfo_12d4de8) {
                puVar5 = (undefined8 *)(lVar27 + (long)(*piVar24 + 1) * 0x10 + 0x138);
                goto LAB_0056ad70;
              }
              uVar22 = uVar22 + 1;
              piVar24 = piVar24 + 4;
            } while (uVar22 < *(ushort *)(lVar27 + 0x12a));
          }
          puVar5 = (undefined8 *)
                   native_sub_3c9b34(plVar8,
                                     _MG_BlocksEngine2_Block_I_BE2_BlockSection_TypeInfo_12d4de8,1);
LAB_0056ad70:
          plVar9 = (long *)(*(code *)*puVar5)(plVar8,puVar5[1]);
          if (plVar9 == (long *)0x0) goto LAB_0056b2b4;
          lVar27 = *plVar9;
          if ((ulong)*(ushort *)(lVar27 + 0x12a) != 0) {
            uVar22 = 0;
            piVar24 = (int *)(*(long *)(lVar27 + 0xb0) + 8);
            do {
              if (*(long *)(piVar24 + -2) ==
                  _MG_BlocksEngine2_Block_I_BE2_BlockSectionHeader_TypeInfo_12d4df8) {
                puVar5 = (undefined8 *)(lVar27 + (long)(*piVar24 + 2) * 0x10 + 0x138);
                goto LAB_0056ade4;
              }
              uVar22 = uVar22 + 1;
              piVar24 = piVar24 + 4;
            } while (uVar22 < *(ushort *)(lVar27 + 0x12a));
          }
          puVar5 = (undefined8 *)
                   native_sub_3c9b34(plVar9,
                                     _MG_BlocksEngine2_Block_I_BE2_BlockSectionHeader_TypeInfo_12d4df8
                                     ,2);
LAB_0056ade4:
          lVar27 = (*(code *)*puVar5)(plVar9,puVar5[1]);
          if (lVar27 == 0) goto LAB_0056b2b4;
          uVar17 = *(uint *)(lVar27 + 0x18);
          if (0 < (int)uVar17) {
            uVar26 = 0;
LAB_0056ae08:
            if (uVar26 < uVar17) {
              plVar9 = *(long **)(lVar27 + (long)(int)uVar26 * 8 + 0x20);
              lVar11 = native_sub_432808(
                                        _MG_BlocksEngine2_Serializer_BE2_SerializableInput_TypeInfo_12d3a40
                                        );
              native_MG_BlocksEngine2_Serializer_BE2_SerializableInput___ctor_61906c(lVar11,0);
              if (((lVar19 != 0) && (*(long *)(lVar19 + 0x18) != 0)) &&
                 (native_System_Collections_Generic_List_int_____Add_d40c00
                            (*(long *)(lVar19 + 0x18),lVar11,
                             _Method_System_Collections_Generic_List_BE2_SerializableInput__Add___12dc4a8
                            ), plVar9 != (long *)0x0)) {
                lVar20 = *plVar9;
                if ((ulong)*(ushort *)(lVar20 + 0x12a) != 0) {
                  uVar22 = 0;
                  piVar24 = (int *)(*(long *)(lVar20 + 0xb0) + 8);
                  do {
                    if (*(long *)(piVar24 + -2) ==
                        _MG_BlocksEngine2_Block_I_BE2_BlockSectionHeaderInput_TypeInfo_12d4e00) {
                      puVar5 = (undefined8 *)(lVar20 + (long)*piVar24 * 0x10 + 0x138);
                      goto LAB_0056aea4;
                    }
                    uVar22 = uVar22 + 1;
                    piVar24 = piVar24 + 4;
                  } while (uVar22 < *(ushort *)(lVar20 + 0x12a));
                }
                puVar5 = (undefined8 *)
                         native_sub_3c9b34(plVar9,
                                           _MG_BlocksEngine2_Block_I_BE2_BlockSectionHeaderInput_TypeInfo_12d4e00
                                           ,0);
LAB_0056aea4:
                lVar20 = (*(code *)*puVar5)(plVar9,puVar5[1]);
                if ((lVar20 != 0) &&
                   (lVar20 = native_UnityEngine_Component__GetComponent_ActiveAnimation__49daec
                                       (lVar20,
                                        _Method_UnityEngine_Component_GetComponent_I_BE2_Block____12e2a08
                                       ), lVar11 != 0)) {
                  if (lVar20 == 0) {
                    *(undefined1 *)(lVar11 + 0x10) = 0;
                    lVar20 = *plVar9;
                    if ((ulong)*(ushort *)(lVar20 + 0x12a) != 0) {
                      uVar22 = 0;
                      piVar24 = (int *)(*(long *)(lVar20 + 0xb0) + 8);
                      do {
                        if (*(long *)(piVar24 + -2) ==
                            _MG_BlocksEngine2_Block_I_BE2_BlockSectionHeaderInput_TypeInfo_12d4e00)
                        goto LAB_0056af90;
                        uVar22 = uVar22 + 1;
                        piVar24 = piVar24 + 4;
                      } while (uVar22 < *(ushort *)(lVar20 + 0x12a));
                    }
                  }
                  else {
                    *(undefined1 *)(lVar11 + 0x10) = 1;
                    if (((*(byte *)(
                                   _MG_BlocksEngine2_Serializer_BE2_BlocksSerializer_TypeInfo_12d3998
                                   + 0x133) >> 2 & 1) != 0) &&
                       (*(int *)(_MG_BlocksEngine2_Serializer_BE2_BlocksSerializer_TypeInfo_12d3998
                                + 0xe0) == 0)) {
                      native_sub_4327ec();
                    }
                    uVar7 = native_MG_BlocksEngine2_Serializer_BE2_BlocksSerializer__BlockToSerializable_569b40
                                      (lVar20);
                    *(undefined8 *)(lVar11 + 0x20) = uVar7;
                    native_sub_4326e0();
                    lVar20 = *plVar9;
                    if ((ulong)*(ushort *)(lVar20 + 0x12a) != 0) {
                      uVar22 = 0;
                      piVar24 = (int *)(*(long *)(lVar20 + 0xb0) + 8);
                      do {
                        if (*(long *)(piVar24 + -2) ==
                            _MG_BlocksEngine2_Block_I_BE2_BlockSectionHeaderInput_TypeInfo_12d4e00)
                        goto LAB_0056af90;
                        uVar22 = uVar22 + 1;
                        piVar24 = piVar24 + 4;
                      } while (uVar22 < *(ushort *)(lVar20 + 0x12a));
                    }
                  }
                  puVar5 = (undefined8 *)
                           native_sub_3c9b34(plVar9,
                                             _MG_BlocksEngine2_Block_I_BE2_BlockSectionHeaderInput_TypeInfo_12d4e00
                                             ,4);
                  goto LAB_0056afa0;
                }
              }
              goto LAB_0056b2b4;
            }
            goto LAB_0056b2b8;
          }
LAB_0056afd0:
          lVar27 = *plVar8;
          if ((ulong)*(ushort *)(lVar27 + 0x12a) != 0) {
            uVar22 = 0;
            piVar24 = (int *)(*(long *)(lVar27 + 0xb0) + 8);
            do {
              if (*(long *)(piVar24 + -2) ==
                  _MG_BlocksEngine2_Block_I_BE2_BlockSection_TypeInfo_12d4de8) {
                puVar5 = (undefined8 *)(lVar27 + (long)(*piVar24 + 2) * 0x10 + 0x138);
                goto LAB_0056b030;
              }
              uVar22 = uVar22 + 1;
              piVar24 = piVar24 + 4;
            } while (uVar22 < *(ushort *)(lVar27 + 0x12a));
          }
          puVar5 = (undefined8 *)
                   native_sub_3c9b34(plVar8,
                                     _MG_BlocksEngine2_Block_I_BE2_BlockSection_TypeInfo_12d4de8,2);
LAB_0056b030:
          lVar27 = (*(code *)*puVar5)(plVar8,puVar5[1]);
          if (lVar27 != 0) {
            lVar27 = *param_5;
            if ((ulong)*(ushort *)(lVar27 + 0x12a) != 0) {
              uVar22 = 0;
              piVar24 = (int *)(*(long *)(lVar27 + 0xb0) + 8);
              do {
                if (*(long *)(piVar24 + -2) == _MG_BlocksEngine2_Block_I_BE2_Block_TypeInfo_12d4dd8)
                {
                  puVar5 = (undefined8 *)(lVar27 + (long)(*piVar24 + 4) * 0x10 + 0x138);
                  goto LAB_0056b0a4;
                }
                uVar22 = uVar22 + 1;
                piVar24 = piVar24 + 4;
              } while (uVar22 < *(ushort *)(lVar27 + 0x12a));
            }
            puVar5 = (undefined8 *)
                     native_sub_3c9b34(param_5,_MG_BlocksEngine2_Block_I_BE2_Block_TypeInfo_12d4dd8,
                                       4);
LAB_0056b0a4:
            lVar27 = (*(code *)*puVar5)(param_5,puVar5[1]);
            if (lVar27 == 0) goto LAB_0056b2b4;
            uVar6 = native_System_Object__GetType_adb48c(lVar27,0);
            uVar7 = _BE2_Ins_FunctionBlock_var_12d1300;
            if (((*(byte *)(_System_Type_TypeInfo_12d6340 + 0x133) >> 2 & 1) != 0) &&
               (*(int *)(_System_Type_TypeInfo_12d6340 + 0xe0) == 0)) {
              native_sub_4327ec(_System_Type_TypeInfo_12d6340);
            }
            uVar7 = native_System_Type__GetTypeFromHandle_b0fb24(uVar7,0);
            uVar22 = native_System_Type__op_Inequality_b118e0(uVar6,uVar7,0);
            if ((uVar22 & 1) != 0) {
              lVar27 = *plVar8;
              if ((ulong)*(ushort *)(lVar27 + 0x12a) != 0) {
                uVar22 = 0;
                piVar24 = (int *)(*(long *)(lVar27 + 0xb0) + 8);
                do {
                  if (*(long *)(piVar24 + -2) ==
                      _MG_BlocksEngine2_Block_I_BE2_BlockSection_TypeInfo_12d4de8) {
                    puVar5 = (undefined8 *)(lVar27 + (long)(*piVar24 + 2) * 0x10 + 0x138);
                    goto LAB_0056b170;
                  }
                  uVar22 = uVar22 + 1;
                  piVar24 = piVar24 + 4;
                } while (uVar22 < *(ushort *)(lVar27 + 0x12a));
              }
              puVar5 = (undefined8 *)
                       native_sub_3c9b34(plVar8,
                                         _MG_BlocksEngine2_Block_I_BE2_BlockSection_TypeInfo_12d4de8
                                         ,2);
LAB_0056b170:
              plVar8 = (long *)(*(code *)*puVar5)(plVar8,puVar5[1]);
              if (plVar8 == (long *)0x0) goto LAB_0056b2b4;
              lVar27 = *plVar8;
              if ((ulong)*(ushort *)(lVar27 + 0x12a) != 0) {
                uVar22 = 0;
                piVar24 = (int *)(*(long *)(lVar27 + 0xb0) + 8);
                do {
                  if (*(long *)(piVar24 + -2) ==
                      _MG_BlocksEngine2_Block_I_BE2_BlockSectionBody_TypeInfo_12d4df0) {
                    puVar5 = (undefined8 *)(lVar27 + (long)(*piVar24 + 2) * 0x10 + 0x138);
                    goto LAB_0056b1e4;
                  }
                  uVar22 = uVar22 + 1;
                  piVar24 = piVar24 + 4;
                } while (uVar22 < *(ushort *)(lVar27 + 0x12a));
              }
              puVar5 = (undefined8 *)
                       native_sub_3c9b34(plVar8,
                                         _MG_BlocksEngine2_Block_I_BE2_BlockSectionBody_TypeInfo_12d4df0
                                         ,2);
LAB_0056b1e4:
              lVar27 = (*(code *)*puVar5)(plVar8,puVar5[1]);
              if (lVar27 == 0) goto LAB_0056b2b4;
              if (0 < (int)*(ulong *)(lVar27 + 0x18)) {
                uVar22 = 0;
                uVar21 = *(ulong *)(lVar27 + 0x18) & 0xffffffff;
                do {
                  if (uVar21 <= uVar22) goto LAB_0056b2b8;
                  if (lVar19 == 0) goto LAB_0056b2b4;
                  uVar7 = *(undefined8 *)(lVar27 + 0x20 + uVar22 * 8);
                  lVar11 = *(long *)(lVar19 + 0x10);
                  if (((*(byte *)(_MG_BlocksEngine2_Serializer_BE2_BlocksSerializer_TypeInfo_12d3998
                                 + 0x133) >> 2 & 1) != 0) &&
                     (*(int *)(_MG_BlocksEngine2_Serializer_BE2_BlocksSerializer_TypeInfo_12d3998 +
                              0xe0) == 0)) {
                    native_sub_4327ec();
                  }
                  uVar7 = native_MG_BlocksEngine2_Serializer_BE2_BlocksSerializer__BlockToSerializable_569b40
                                    (uVar7);
                  if (lVar11 == 0) goto LAB_0056b2b4;
                  native_System_Collections_Generic_List_int_____Add_d40c00
                            (lVar11,uVar7,
                             _Method_System_Collections_Generic_List_BE2_SerializableBlock__Add___12dc490
                            );
                  uVar21 = (ulong)*(uint *)(lVar27 + 0x18);
                  uVar22 = uVar22 + 1;
                } while ((long)uVar22 < (long)(int)*(uint *)(lVar27 + 0x18));
              }
            }
          }
          uVar17 = *(uint *)(lVar18 + 0x18);
          uVar25 = uVar25 + 1;
        } while ((int)uVar25 < (int)uVar17);
      }
      return plVar4;
    }
  }
LAB_0056b2b4:
                    /* WARNING: Subroutine does not return */
  native_sub_432810();
LAB_0056af90:
  puVar5 = (undefined8 *)(lVar20 + (long)(*piVar24 + 4) * 0x10 + 0x138);
LAB_0056afa0:
  lVar20 = (*(code *)*puVar5)(plVar9,puVar5[1]);
  if (lVar20 == 0) goto LAB_0056b2b4;
  *(undefined8 *)(lVar11 + 0x18) = *(undefined8 *)(lVar20 + 0x18);
  native_sub_4326e0((undefined8 *)(lVar11 + 0x18));
  uVar17 = *(uint *)(lVar27 + 0x18);
  uVar26 = uVar26 + 1;
  if ((int)uVar17 <= (int)uVar26) goto LAB_0056afd0;
  goto LAB_0056ae08;
}



/* MG_BlocksEngine2.Serializer.BE2_BlocksSerializer$$SerializableToXML @ 0x572c24
 * System_String_o* MG_BlocksEngine2_Serializer_BE2_BlocksSerializer__SerializableToXML (MG_BlocksEngine2_Serializer_BE2_SerializableBlock_o* serializableBlock, const MethodInfo* method); */

/* MG_BlocksEngine2.Serializer.BE2_BlocksSerializer$$SerializableToXML
   System_String_o* MG_BlocksEngine2_Serializer_BE2_BlocksSerializer__SerializableToXML
   (MG_BlocksEngine2_Serializer_BE2_SerializableBlock_o* serializableBlock, const MethodInfo*
   method); */

void native_MG_BlocksEngine2_Serializer_BE2_BlocksSerializer__SerializableToXML_572c24(void)

{
  long *plVar1;
  
  plVar1 = (long *)native_MG_BlocksEngine2_Serializer_BE2_BlockXML__SBlockToXElement_570790();
  if (plVar1 != (long *)0x0) {
                    /* WARNING: Could not recover jumptable at 0x00572c40. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (**(code **)(*plVar1 + 0x168))(plVar1,*(undefined8 *)(*plVar1 + 0x170));
    return;
  }
                    /* WARNING: Subroutine does not return */
  native_sub_432810();
}



/* MG_BlocksEngine2.Serializer.BE2_BlocksSerializer$$LoadCode @ 0x572d00
 * bool MG_BlocksEngine2_Serializer_BE2_BlocksSerializer__LoadCode (System_String_o* path, MG_BlocksEngine2_Environment_I_BE2_ProgrammingEnv_o* targetProgrammingEnv, const MethodInfo* method); */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* MG_BlocksEngine2.Serializer.BE2_BlocksSerializer$$LoadCode
   bool MG_BlocksEngine2_Serializer_BE2_BlocksSerializer__LoadCode (System_String_o* path,
   MG_BlocksEngine2_Environment_I_BE2_ProgrammingEnv_o* targetProgrammingEnv, const MethodInfo*
   method); */

undefined8
native_MG_BlocksEngine2_Serializer_BE2_BlocksSerializer__LoadCode_572d00
          (undefined8 param_1,undefined8 param_2)

{
  ulong uVar1;
  long *plVar2;
  undefined8 uVar3;
  
  if ((bRam000000000133ea8a & 1) == 0) {
    native_sub_43273c(&MG_BlocksEngine2_Serializer_BE2_BlocksSerializer_TypeInfo_12d3998);
    native_sub_43273c(&System_IO_StreamReader_TypeInfo_12d5f10);
    bRam000000000133ea8a = 1;
  }
  uVar1 = native_System_IO_File__Exists_bf1460(param_1,0);
  if ((uVar1 & 1) == 0) {
    uVar3 = 0;
  }
  else {
    plVar2 = (long *)native_sub_432808(_System_IO_StreamReader_TypeInfo_12d5f10);
    native_System_IO_StreamReader___ctor_b05c98(plVar2,param_1,0);
    if (plVar2 == (long *)0x0) {
                    /* WARNING: Subroutine does not return */
      native_sub_432810();
    }
    uVar3 = (**(code **)(*plVar2 + 0x1f8))(plVar2,*(undefined8 *)(*plVar2 + 0x200));
    (**(code **)(*plVar2 + 0x1a8))(plVar2,*(undefined8 *)(*plVar2 + 0x1b0));
    if (((*(byte *)(_MG_BlocksEngine2_Serializer_BE2_BlocksSerializer_TypeInfo_12d3998 + 0x133) >> 2
         & 1) != 0) &&
       (*(int *)(_MG_BlocksEngine2_Serializer_BE2_BlocksSerializer_TypeInfo_12d3998 + 0xe0) == 0)) {
      native_sub_4327ec();
    }
    native_MG_BlocksEngine2_Serializer_BE2_BlocksSerializer__XMLToBlocksCode_572de8(uVar3,param_2);
    uVar3 = 1;
  }
  return uVar3;
}



/* MG_BlocksEngine2.Serializer.BE2_BlocksSerializer$$XMLToBlocksCode @ 0x572de8
 * void MG_BlocksEngine2_Serializer_BE2_BlocksSerializer__XMLToBlocksCode (System_String_o* xmlString, MG_BlocksEngine2_Environment_I_BE2_ProgrammingEnv_o* targetProgrammingEnv, const MethodInfo* method); */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* MG_BlocksEngine2.Serializer.BE2_BlocksSerializer$$XMLToBlocksCode
   void MG_BlocksEngine2_Serializer_BE2_BlocksSerializer__XMLToBlocksCode (System_String_o*
   xmlString, MG_BlocksEngine2_Environment_I_BE2_ProgrammingEnv_o* targetProgrammingEnv, const
   MethodInfo* method); */

void native_MG_BlocksEngine2_Serializer_BE2_BlocksSerializer__XMLToBlocksCode_572de8
               (long param_1,long *param_2)

{
  bool bVar1;
  int iVar2;
  long lVar3;
  long lVar4;
  undefined8 *puVar5;
  long *plVar6;
  ulong uVar7;
  long lVar8;
  int *piVar9;
  undefined8 uVar10;
  ulong uVar11;
  int iStack_ac;
  undefined8 uStack_a8;
  undefined8 uStack_a0;
  long *plStack_98;
  int aiStack_90 [4];
  undefined8 uStack_80;
  undefined8 uStack_78;
  long *plStack_70;
  
  if ((bRam000000000133ea8b & 1) == 0) {
    native_sub_43273c(&MG_BlocksEngine2_Serializer_BE2_BlocksSerializer_TypeInfo_12d3998);
    native_sub_43273c(&BE2_Ins_DefineFunction_TypeInfo_12d39f8);
    native_sub_43273c(&char___TypeInfo_12d3090);
    native_sub_43273c(&
                      Method_System_Collections_Generic_List_Enumerator_I_BE2_Block__Dispose___12da4c8
                     );
    native_sub_43273c(&
                      Method_System_Collections_Generic_List_Enumerator_I_BE2_Block__MoveNext___12da4d0
                     );
    native_sub_43273c(&
                      Method_System_Collections_Generic_List_Enumerator_I_BE2_Block__get_Current___12da4d8
                     );
    native_sub_43273c(&MG_BlocksEngine2_Block_I_BE2_Block_TypeInfo_12d4dd8);
    native_sub_43273c(&MG_BlocksEngine2_Environment_I_BE2_ProgrammingEnv_TypeInfo_12d4e38);
    native_sub_43273c(&Method_System_Collections_Generic_List_I_BE2_Block__GetEnumerator___12dc9a8);
    native_sub_43273c(&UnityEngine_Object_TypeInfo_12d54e0);
    native_sub_43273c(&StringLiteral_Block_Ins_DefineFunction_12ec7d8);
    bRam000000000133ea8b = 1;
  }
  uStack_78 = 0;
  uStack_80 = 0;
  plStack_70 = (long *)0x0;
  aiStack_90[2] = 0;
  lVar3 = native_sub_432750(_char___TypeInfo_12d3090,1);
  if (lVar3 != 0) {
    if (*(int *)(lVar3 + 0x18) == 0) {
LAB_005732b8:
      uVar10 = native_sub_43283c();
                    /* WARNING: Subroutine does not return */
      native_sub_4327dc(uVar10,0);
    }
    *(undefined2 *)(lVar3 + 0x20) = 0x23;
    if ((param_1 != 0) && (lVar3 = native_System_String__Split_b095f4(param_1,lVar3,0), lVar3 != 0))
    {
      if (0 < (int)*(ulong *)(lVar3 + 0x18)) {
        iStack_ac = 0;
        uVar11 = 0;
        uVar7 = *(ulong *)(lVar3 + 0x18) & 0xffffffff;
        do {
          if (uVar7 <= uVar11) goto LAB_005732b8;
          uVar10 = *(undefined8 *)(lVar3 + uVar11 * 8 + 0x20);
          if (((*(byte *)(_MG_BlocksEngine2_Serializer_BE2_BlocksSerializer_TypeInfo_12d3998 + 0x133
                         ) >> 2 & 1) != 0) &&
             (*(int *)(_MG_BlocksEngine2_Serializer_BE2_BlocksSerializer_TypeInfo_12d3998 + 0xe0) ==
              0)) {
            native_sub_4327ec();
          }
          lVar4 = native_MG_BlocksEngine2_Serializer_BE2_BlocksSerializer__XMLToSerializable_5732d8
                            (uVar10);
          if ((lVar4 == 0) ||
             (uVar7 = native_System_String__op_Equality_afc18c
                                (*(undefined8 *)(lVar4 + 0x10),
                                 _StringLiteral_Block_Ins_DefineFunction_12ec7d8,0),
             (uVar7 & 1) == 0)) {
LAB_0057325c:
            if (((*(byte *)(_MG_BlocksEngine2_Serializer_BE2_BlocksSerializer_TypeInfo_12d3998 +
                           0x133) >> 2 & 1) != 0) &&
               (*(int *)(_MG_BlocksEngine2_Serializer_BE2_BlocksSerializer_TypeInfo_12d3998 + 0xe0)
                == 0)) {
              native_sub_4327ec();
            }
            native_MG_BlocksEngine2_Serializer_BE2_BlocksSerializer__SerializableToBlock_56b2c8
                      (lVar4,param_2);
          }
          else {
            if (param_2 == (long *)0x0) goto LAB_005732c4;
            lVar8 = *param_2;
            if ((ulong)*(ushort *)(lVar8 + 0x12a) != 0) {
              uVar7 = 0;
              piVar9 = (int *)(*(long *)(lVar8 + 0xb0) + 8);
              do {
                if (*(long *)(piVar9 + -2) ==
                    _MG_BlocksEngine2_Environment_I_BE2_ProgrammingEnv_TypeInfo_12d4e38) {
                  puVar5 = (undefined8 *)(lVar8 + (long)(*piVar9 + 5) * 0x10 + 0x138);
                  goto LAB_00572ff8;
                }
                uVar7 = uVar7 + 1;
                piVar9 = piVar9 + 4;
              } while (uVar7 < *(ushort *)(lVar8 + 0x12a));
            }
            puVar5 = (undefined8 *)
                     native_sub_3c9b34(param_2,
                                       _MG_BlocksEngine2_Environment_I_BE2_ProgrammingEnv_TypeInfo_12d4e38
                                       ,5);
LAB_00572ff8:
            (*(code *)*puVar5)(param_2,puVar5[1]);
            lVar8 = *param_2;
            if ((ulong)*(ushort *)(lVar8 + 0x12a) != 0) {
              uVar7 = 0;
              piVar9 = (int *)(*(long *)(lVar8 + 0xb0) + 8);
              do {
                if (*(long *)(piVar9 + -2) ==
                    _MG_BlocksEngine2_Environment_I_BE2_ProgrammingEnv_TypeInfo_12d4e38) {
                  puVar5 = (undefined8 *)(lVar8 + (long)(*piVar9 + 1) * 0x10 + 0x138);
                  goto LAB_00573064;
                }
                uVar7 = uVar7 + 1;
                piVar9 = piVar9 + 4;
              } while (uVar7 < *(ushort *)(lVar8 + 0x12a));
            }
            puVar5 = (undefined8 *)
                     native_sub_3c9b34(param_2,
                                       _MG_BlocksEngine2_Environment_I_BE2_ProgrammingEnv_TypeInfo_12d4e38
                                       ,1);
LAB_00573064:
            lVar8 = (*(code *)*puVar5)(param_2,puVar5[1]);
            if (lVar8 == 0) goto LAB_005732c4;
            native_System_Collections_Generic_List_BE2_Op_FunctionLocalVariable___GetEnumerator_d414fc
                      (&uStack_a8,lVar8,
                       _Method_System_Collections_Generic_List_I_BE2_Block__GetEnumerator___12dc9a8)
            ;
            plStack_70 = plStack_98;
            uStack_78 = uStack_a0;
            uStack_80 = uStack_a8;
            do {
              do {
                uVar7 = native_System_Collections_Generic_List_Enumerator_BE2_Op_FunctionLocalVariable___MoveNext_7e8f30
                                  (&uStack_80,
                                   _Method_System_Collections_Generic_List_Enumerator_I_BE2_Block__MoveNext___12da4d0
                                  );
                plVar6 = plStack_70;
                if ((uVar7 & 1) == 0) {
                  bVar1 = true;
                  goto LAB_0057319c;
                }
                if (plStack_70 == (long *)0x0) {
                    /* WARNING: Subroutine does not return */
                  native_sub_432810();
                }
                lVar8 = *plStack_70;
                if ((ulong)*(ushort *)(lVar8 + 0x12a) != 0) {
                  uVar7 = 0;
                  piVar9 = (int *)(*(long *)(lVar8 + 0xb0) + 8);
                  do {
                    if (*(long *)(piVar9 + -2) ==
                        _MG_BlocksEngine2_Block_I_BE2_Block_TypeInfo_12d4dd8) {
                      puVar5 = (undefined8 *)(lVar8 + (long)(*piVar9 + 4) * 0x10 + 0x138);
                      goto LAB_00573108;
                    }
                    uVar7 = uVar7 + 1;
                    piVar9 = piVar9 + 4;
                  } while (uVar7 < *(ushort *)(lVar8 + 0x12a));
                }
                puVar5 = (undefined8 *)
                         native_sub_3c9b34(plStack_70,
                                           _MG_BlocksEngine2_Block_I_BE2_Block_TypeInfo_12d4dd8,4);
LAB_00573108:
                plVar6 = (long *)(*(code *)*puVar5)(plVar6,puVar5[1]);
                if (plVar6 == (long *)0x0) {
LAB_00573130:
                  plVar6 = (long *)0x0;
                }
                else {
                  if (*(byte *)(*plVar6 + 300) <
                      *(byte *)(_BE2_Ins_DefineFunction_TypeInfo_12d39f8 + 300)) goto LAB_00573130;
                  if (*(long *)(*(long *)(*plVar6 + 200) +
                                (ulong)*(byte *)(_BE2_Ins_DefineFunction_TypeInfo_12d39f8 + 300) * 8
                               + -8) != _BE2_Ins_DefineFunction_TypeInfo_12d39f8) {
                    plVar6 = (long *)0x0;
                  }
                }
                if (((*(byte *)(_UnityEngine_Object_TypeInfo_12d54e0 + 0x133) >> 2 & 1) != 0) &&
                   (*(int *)(_UnityEngine_Object_TypeInfo_12d54e0 + 0xe0) == 0)) {
                  native_sub_4327ec();
                }
                uVar7 = native_UnityEngine_Object__op_Inequality_8d76fc(plVar6,0,0);
              } while ((uVar7 & 1) == 0);
              if (plVar6 == (long *)0x0) {
                    /* WARNING: Subroutine does not return */
                native_sub_432810();
              }
              uVar7 = native_System_String__op_Equality_afc18c
                                (plVar6[0xf],*(undefined8 *)(lVar4 + 0x40),0);
            } while ((uVar7 & 1) == 0);
            bVar1 = false;
LAB_0057319c:
            aiStack_90[iStack_ac] = 0x9f;
            iVar2 = aiStack_90[2];
            iStack_ac = aiStack_90[2] + 1;
            aiStack_90[2] = iStack_ac;
            native_System_Collections_Generic_List_Enumerator_BE2_Op_FunctionLocalVariable___Dispose_7e8f2c
                      (&uStack_80,
                       _Method_System_Collections_Generic_List_Enumerator_I_BE2_Block__Dispose___12da4c8
                      );
            if ((iStack_ac != 0) && (aiStack_90[iVar2] == 0x9f)) {
              iStack_ac = iVar2;
              aiStack_90[2] = iVar2;
            }
            if (bVar1) goto LAB_0057325c;
          }
          uVar7 = (ulong)*(uint *)(lVar3 + 0x18);
          uVar11 = uVar11 + 1;
        } while ((long)uVar11 < (long)(int)*(uint *)(lVar3 + 0x18));
      }
      return;
    }
  }
LAB_005732c4:
                    /* WARNING: Subroutine does not return */
  native_sub_432810();
}



/* MG_BlocksEngine2.Serializer.BE2_BlocksSerializer$$XMLToSerializable @ 0x5732d8
 * MG_BlocksEngine2_Serializer_BE2_SerializableBlock_o* MG_BlocksEngine2_Serializer_BE2_BlocksSerializer__XMLToSerializable (System_String_o* blockString, const MethodInfo* method); */

/* WARNING: Removing unreachable block (ram,0x00571c90) */
/* WARNING: Removing unreachable block (ram,0x005719d0) */
/* WARNING: Removing unreachable block (ram,0x00571c80) */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* MG_BlocksEngine2.Serializer.BE2_BlocksSerializer$$XMLToSerializable
   MG_BlocksEngine2_Serializer_BE2_SerializableBlock_o*
   MG_BlocksEngine2_Serializer_BE2_BlocksSerializer__XMLToSerializable (System_String_o*
   blockString, const MethodInfo* method); */

long native_MG_BlocksEngine2_Serializer_BE2_BlocksSerializer__XMLToSerializable_5732d8
               (undefined1 param_1 [16],undefined4 param_2,undefined4 param_3,long param_4)

{
  bool bVar1;
  long lVar2;
  undefined8 uVar3;
  long lVar4;
  long *plVar5;
  undefined8 *puVar6;
  long lVar7;
  undefined8 uVar8;
  undefined8 uVar9;
  long lVar10;
  ulong uVar11;
  int *piVar12;
  long lVar13;
  undefined4 uVar14;
  int aiStack_70 [4];
  
  if ((param_4 == 0) || (lVar10 = native_System_String__Trim_af8bf4(param_4,0), lVar10 == 0)) {
                    /* WARNING: Subroutine does not return */
    native_sub_432810();
  }
  if (*(int *)(lVar10 + 0x10) < 2) {
    return 0;
  }
  lVar10 = native_System_Xml_Linq_XElement__Parse_d9afc8(lVar10,0);
  if ((bRam000000000133ea81 & 1) == 0) {
    native_sub_43273c(&MG_BlocksEngine2_Serializer_BE2_SerializableBlock_TypeInfo_12d3a38);
    native_sub_43273c(&MG_BlocksEngine2_Serializer_DefineItem_TypeInfo_12d43d8);
    native_sub_43273c(&System_IDisposable_TypeInfo_12d4b00);
    native_sub_43273c(&System_Collections_Generic_IEnumerable_XElement__TypeInfo_12d27c8);
    native_sub_43273c(&System_Collections_Generic_IEnumerator_XElement__TypeInfo_12d2828);
    native_sub_43273c(&System_Collections_IEnumerator_TypeInfo_12d4b80);
    native_sub_43273c(&Method_System_Collections_Generic_List_BE2_SerializableSection__Add___12dc4c8
                     );
    native_sub_43273c(&Method_System_Collections_Generic_List_DefineItem__Add___12dc728);
    native_sub_43273c(&StringLiteral_defineID_12f43b8);
    native_sub_43273c(&StringLiteral_sections_12f5f90);
    native_sub_43273c(&StringLiteral_blockName_12f3c10);
    native_sub_43273c(&StringLiteral_value_12f6a10);
    native_sub_43273c(&StringLiteral_varManagerName_12f6a50);
    native_sub_43273c(&StringLiteral_defineItems_12f43c0);
    native_sub_43273c(&StringLiteral_isLocalVar_12f4f40);
    native_sub_43273c(&StringLiteral_position_12f5c00);
    native_sub_43273c(&StringLiteral_Item_12ef260);
    native_sub_43273c(&StringLiteral_Section_12f0cf8);
    native_sub_43273c(&StringLiteral_varName_12f6a58);
    native_sub_43273c(&StringLiteral_type_12f67a8);
    bRam000000000133ea81 = 1;
  }
  aiStack_70[2] = 0;
  lVar2 = native_sub_432808(_MG_BlocksEngine2_Serializer_BE2_SerializableBlock_TypeInfo_12d3a38);
  native_MG_BlocksEngine2_Serializer_BE2_SerializableBlock___ctor_618f9c(lVar2,0);
  uVar3 = native_System_Xml_Linq_XName__op_Implicit_d9c0f8(_StringLiteral_blockName_12f3c10,0);
  if (((lVar10 != 0) &&
      (lVar4 = native_System_Xml_Linq_XContainer__Element_d974f4(lVar10,uVar3,0), lVar4 != 0)) &&
     (uVar3 = native_System_Xml_Linq_XElement__get_Value_d9ab9c(lVar4,0), lVar2 != 0)) {
    *(undefined8 *)(lVar2 + 0x10) = uVar3;
    native_sub_4326e0();
    uVar3 = native_System_Xml_Linq_XName__op_Implicit_d9c0f8(_StringLiteral_position_12f5c00,0);
    lVar4 = native_System_Xml_Linq_XContainer__Element_d974f4(lVar10,uVar3,0);
    if (lVar4 != 0) {
      native_System_Xml_Linq_XElement__get_Value_d9ab9c(lVar4,0);
      uVar14 = native_MG_BlocksEngine2_Serializer_BE2_BlockXMLUtils__StringToVector3_571d24();
      *(undefined4 *)(lVar2 + 0x18) = uVar14;
      *(undefined4 *)(lVar2 + 0x1c) = param_2;
      *(undefined4 *)(lVar2 + 0x20) = param_3;
      uVar3 = native_System_Xml_Linq_XName__op_Implicit_d9c0f8
                        (_StringLiteral_varManagerName_12f6a50,0);
      lVar4 = native_System_Xml_Linq_XContainer__Element_d974f4(lVar10,uVar3,0);
      uVar3 = 0;
      if (lVar4 != 0) {
        uVar3 = native_System_Xml_Linq_XElement__get_Value_d9ab9c();
      }
      *(undefined8 *)(lVar2 + 0x30) = uVar3;
      native_sub_4326e0();
      uVar3 = native_System_Xml_Linq_XName__op_Implicit_d9c0f8(_StringLiteral_varName_12f6a58,0);
      lVar4 = native_System_Xml_Linq_XContainer__Element_d974f4(lVar10,uVar3,0);
      if (lVar4 != 0) {
        uVar3 = native_System_Xml_Linq_XElement__get_Value_d9ab9c(lVar4,0);
        *(undefined8 *)(lVar2 + 0x38) = uVar3;
        native_sub_4326e0();
        uVar3 = native_System_Xml_Linq_XName__op_Implicit_d9c0f8(_StringLiteral_defineID_12f43b8,0);
        lVar4 = native_System_Xml_Linq_XContainer__Element_d974f4(lVar10,uVar3,0);
        if (lVar4 != 0) {
          uVar3 = native_System_Xml_Linq_XElement__get_Value_d9ab9c(lVar4,0);
          *(undefined8 *)(lVar2 + 0x40) = uVar3;
          native_sub_4326e0();
          uVar3 = native_System_Xml_Linq_XName__op_Implicit_d9c0f8
                            (_StringLiteral_isLocalVar_12f4f40,0);
          lVar4 = native_System_Xml_Linq_XContainer__Element_d974f4(lVar10,uVar3,0);
          if (lVar4 != 0) {
            uVar3 = native_System_Xml_Linq_XElement__get_Value_d9ab9c(lVar4,0);
            *(undefined8 *)(lVar2 + 0x48) = uVar3;
            native_sub_4326e0();
            uVar3 = native_System_Xml_Linq_XName__op_Implicit_d9c0f8
                              (_StringLiteral_defineItems_12f43c0,0);
            lVar4 = native_System_Xml_Linq_XContainer__Element_d974f4(lVar10,uVar3,0);
            uVar3 = native_System_Xml_Linq_XName__op_Implicit_d9c0f8(_StringLiteral_Item_12ef260,0);
            if ((lVar4 != 0) &&
               (plVar5 = (long *)native_System_Xml_Linq_XContainer__Elements_d975e4(lVar4,uVar3,0),
               plVar5 != (long *)0x0)) {
              lVar4 = *plVar5;
              if ((ulong)*(ushort *)(lVar4 + 0x12a) != 0) {
                uVar11 = 0;
                piVar12 = (int *)(*(long *)(lVar4 + 0xb0) + 8);
                do {
                  if (*(long *)(piVar12 + -2) ==
                      _System_Collections_Generic_IEnumerable_XElement__TypeInfo_12d27c8) {
                    puVar6 = (undefined8 *)(lVar4 + (long)*piVar12 * 0x10 + 0x138);
                    goto LAB_00571780;
                  }
                  uVar11 = uVar11 + 1;
                  piVar12 = piVar12 + 4;
                } while (uVar11 < *(ushort *)(lVar4 + 0x12a));
              }
              puVar6 = (undefined8 *)
                       native_sub_3c9b34(plVar5,
                                         _System_Collections_Generic_IEnumerable_XElement__TypeInfo_12d27c8
                                         ,0);
LAB_00571780:
              plVar5 = (long *)(*(code *)*puVar6)(plVar5,puVar6[1]);
              if (plVar5 == (long *)0x0) {
                    /* WARNING: Subroutine does not return */
                native_sub_432810();
              }
              do {
                lVar4 = *plVar5;
                if ((ulong)*(ushort *)(lVar4 + 0x12a) != 0) {
                  uVar11 = 0;
                  piVar12 = (int *)(*(long *)(lVar4 + 0xb0) + 8);
                  do {
                    if (*(long *)(piVar12 + -2) == _System_Collections_IEnumerator_TypeInfo_12d4b80)
                    {
                      puVar6 = (undefined8 *)(lVar4 + (long)*piVar12 * 0x10 + 0x138);
                      goto LAB_0057180c;
                    }
                    uVar11 = uVar11 + 1;
                    piVar12 = piVar12 + 4;
                  } while (uVar11 < *(ushort *)(lVar4 + 0x12a));
                }
                puVar6 = (undefined8 *)
                         native_sub_3c9b34(plVar5,_System_Collections_IEnumerator_TypeInfo_12d4b80,0
                                          );
LAB_0057180c:
                uVar11 = (*(code *)*puVar6)(plVar5,puVar6[1]);
                if ((uVar11 & 1) == 0) {
                  aiStack_70[0] = 0x130;
                  aiStack_70[2] = 1;
                  if (plVar5 == (long *)0x0) goto LAB_005719a4;
                  lVar4 = *plVar5;
                  if ((ulong)*(ushort *)(lVar4 + 0x12a) == 0) goto LAB_0057197c;
                  uVar11 = 0;
                  piVar12 = (int *)(*(long *)(lVar4 + 0xb0) + 8);
                  goto LAB_00571960;
                }
                lVar4 = *plVar5;
                if ((ulong)*(ushort *)(lVar4 + 0x12a) != 0) {
                  uVar11 = 0;
                  piVar12 = (int *)(*(long *)(lVar4 + 0xb0) + 8);
                  do {
                    if (*(long *)(piVar12 + -2) ==
                        _System_Collections_Generic_IEnumerator_XElement__TypeInfo_12d2828) {
                      puVar6 = (undefined8 *)(lVar4 + (long)*piVar12 * 0x10 + 0x138);
                      goto LAB_00571878;
                    }
                    uVar11 = uVar11 + 1;
                    piVar12 = piVar12 + 4;
                  } while (uVar11 < *(ushort *)(lVar4 + 0x12a));
                }
                puVar6 = (undefined8 *)
                         native_sub_3c9b34(plVar5,
                                           _System_Collections_Generic_IEnumerator_XElement__TypeInfo_12d2828
                                           ,0);
LAB_00571878:
                lVar4 = (*(code *)*puVar6)(plVar5,puVar6[1]);
                lVar13 = *(long *)(lVar2 + 0x50);
                uVar3 = native_System_Xml_Linq_XName__op_Implicit_d9c0f8
                                  (_StringLiteral_type_12f67a8,0);
                if (lVar4 == 0) {
                    /* WARNING: Subroutine does not return */
                  native_sub_432810(uVar3,uVar3);
                }
                lVar7 = native_System_Xml_Linq_XContainer__Element_d974f4(lVar4,uVar3,0);
                if (lVar7 == 0) {
                    /* WARNING: Subroutine does not return */
                  native_sub_432810();
                }
                uVar3 = native_System_Xml_Linq_XElement__get_Value_d9ab9c(lVar7,0);
                uVar8 = native_System_Xml_Linq_XName__op_Implicit_d9c0f8
                                  (_StringLiteral_value_12f6a10,0);
                lVar4 = native_System_Xml_Linq_XContainer__Element_d974f4(lVar4,uVar8,0);
                if (lVar4 == 0) {
                    /* WARNING: Subroutine does not return */
                  native_sub_432810();
                }
                uVar8 = native_System_Xml_Linq_XElement__get_Value_d9ab9c(lVar4,0);
                uVar9 = native_sub_432808(_MG_BlocksEngine2_Serializer_DefineItem_TypeInfo_12d43d8);
                native_MG_BlocksEngine2_Serializer_DefineItem___ctor_decca4(uVar9,uVar3,uVar8,0);
                if (lVar13 == 0) {
                    /* WARNING: Subroutine does not return */
                  native_sub_432810();
                }
                native_System_Collections_Generic_List_int_____Add_d40c00
                          (lVar13,uVar9,
                           _Method_System_Collections_Generic_List_DefineItem__Add___12dc728);
              } while( true );
            }
          }
        }
      }
    }
  }
  goto LAB_00571c78;
  while( true ) {
    uVar11 = uVar11 + 1;
    piVar12 = piVar12 + 4;
    if (*(ushort *)(lVar10 + 0x12a) <= uVar11) break;
LAB_00571bdc:
    if (*(long *)(piVar12 + -2) == _System_IDisposable_TypeInfo_12d4b00) {
      puVar6 = (undefined8 *)(lVar10 + (long)*piVar12 * 0x10 + 0x138);
      goto LAB_00571c14;
    }
  }
LAB_00571bf8:
  puVar6 = (undefined8 *)native_sub_3c9b34(plVar5,_System_IDisposable_TypeInfo_12d4b00,0);
LAB_00571c14:
  (*(code *)*puVar6)(plVar5,puVar6[1]);
  return lVar2;
  while( true ) {
    uVar11 = uVar11 + 1;
    piVar12 = piVar12 + 4;
    if (*(ushort *)(lVar4 + 0x12a) <= uVar11) break;
LAB_00571960:
    if (*(long *)(piVar12 + -2) == _System_IDisposable_TypeInfo_12d4b00) {
      puVar6 = (undefined8 *)(lVar4 + (long)*piVar12 * 0x10 + 0x138);
      goto LAB_00571998;
    }
  }
LAB_0057197c:
  puVar6 = (undefined8 *)native_sub_3c9b34(plVar5,_System_IDisposable_TypeInfo_12d4b00,0);
LAB_00571998:
  (*(code *)*puVar6)(plVar5,puVar6[1]);
LAB_005719a4:
  bVar1 = aiStack_70[0] == 0x130;
  if (bVar1) {
    aiStack_70[2] = 0;
  }
  uVar3 = native_System_Xml_Linq_XName__op_Implicit_d9c0f8(_StringLiteral_sections_12f5f90,0);
  lVar10 = native_System_Xml_Linq_XContainer__Element_d974f4(lVar10,uVar3,0);
  uVar3 = native_System_Xml_Linq_XName__op_Implicit_d9c0f8(_StringLiteral_Section_12f0cf8,0);
  if ((lVar10 != 0) &&
     (plVar5 = (long *)native_System_Xml_Linq_XContainer__Elements_d975e4(lVar10,uVar3,0),
     plVar5 != (long *)0x0)) {
    lVar10 = *plVar5;
    if ((ulong)*(ushort *)(lVar10 + 0x12a) != 0) {
      uVar11 = 0;
      piVar12 = (int *)(*(long *)(lVar10 + 0xb0) + 8);
      do {
        if (*(long *)(piVar12 + -2) ==
            _System_Collections_Generic_IEnumerable_XElement__TypeInfo_12d27c8) {
          puVar6 = (undefined8 *)(lVar10 + (long)*piVar12 * 0x10 + 0x138);
          goto LAB_00571a8c;
        }
        uVar11 = uVar11 + 1;
        piVar12 = piVar12 + 4;
      } while (uVar11 < *(ushort *)(lVar10 + 0x12a));
    }
    puVar6 = (undefined8 *)
             native_sub_3c9b34(plVar5,
                               _System_Collections_Generic_IEnumerable_XElement__TypeInfo_12d27c8,0)
    ;
LAB_00571a8c:
    plVar5 = (long *)(*(code *)*puVar6)(plVar5,puVar6[1]);
    if (plVar5 == (long *)0x0) {
                    /* WARNING: Subroutine does not return */
      native_sub_432810();
    }
    do {
      lVar10 = *plVar5;
      if ((ulong)*(ushort *)(lVar10 + 0x12a) != 0) {
        uVar11 = 0;
        piVar12 = (int *)(*(long *)(lVar10 + 0xb0) + 8);
        do {
          if (*(long *)(piVar12 + -2) == _System_Collections_IEnumerator_TypeInfo_12d4b80) {
            puVar6 = (undefined8 *)(lVar10 + (long)*piVar12 * 0x10 + 0x138);
            goto LAB_00571b0c;
          }
          uVar11 = uVar11 + 1;
          piVar12 = piVar12 + 4;
        } while (uVar11 < *(ushort *)(lVar10 + 0x12a));
      }
      puVar6 = (undefined8 *)
               native_sub_3c9b34(plVar5,_System_Collections_IEnumerator_TypeInfo_12d4b80,0);
LAB_00571b0c:
      uVar11 = (*(code *)*puVar6)(plVar5,puVar6[1]);
      if ((uVar11 & 1) == 0) {
        aiStack_70[(int)(uint)!bVar1] = 0x183;
        aiStack_70[2] = aiStack_70[2] + 1;
        if (plVar5 == (long *)0x0) {
          return lVar2;
        }
        lVar10 = *plVar5;
        if ((ulong)*(ushort *)(lVar10 + 0x12a) == 0) goto LAB_00571bf8;
        uVar11 = 0;
        piVar12 = (int *)(*(long *)(lVar10 + 0xb0) + 8);
        goto LAB_00571bdc;
      }
      lVar10 = *plVar5;
      if ((ulong)*(ushort *)(lVar10 + 0x12a) != 0) {
        uVar11 = 0;
        piVar12 = (int *)(*(long *)(lVar10 + 0xb0) + 8);
        do {
          if (*(long *)(piVar12 + -2) ==
              _System_Collections_Generic_IEnumerator_XElement__TypeInfo_12d2828) {
            puVar6 = (undefined8 *)(lVar10 + (long)*piVar12 * 0x10 + 0x138);
            goto LAB_00571b70;
          }
          uVar11 = uVar11 + 1;
          piVar12 = piVar12 + 4;
        } while (uVar11 < *(ushort *)(lVar10 + 0x12a));
      }
      puVar6 = (undefined8 *)
               native_sub_3c9b34(plVar5,
                                 _System_Collections_Generic_IEnumerator_XElement__TypeInfo_12d2828,
                                 0);
LAB_00571b70:
      (*(code *)*puVar6)(plVar5,puVar6[1]);
      uVar3 = native_MG_BlocksEngine2_Serializer_BE2_BlockXML__XElementToSSection_571e88();
      if (*(long *)(lVar2 + 0x28) == 0) {
                    /* WARNING: Subroutine does not return */
        native_sub_432810(0,uVar3);
      }
      native_System_Collections_Generic_List_int_____Add_d40c00
                (*(long *)(lVar2 + 0x28),uVar3,
                 _Method_System_Collections_Generic_List_BE2_SerializableSection__Add___12dc4c8);
    } while( true );
  }
LAB_00571c78:
                    /* WARNING: Subroutine does not return */
  native_sub_432810();
}



/* MG_BlocksEngine2.Serializer.BE2_BlocksSerializer$$C_AddInputs @ 0x57331c
 * System_Collections_IEnumerator_o* MG_BlocksEngine2_Serializer_BE2_BlocksSerializer__C_AddInputs (MG_BlocksEngine2_Block_I_BE2_Block_o* block, MG_BlocksEngine2_Serializer_BE2_SerializableBlock_o* serializableBlock, MG_BlocksEngine2_Environment_I_BE2_ProgrammingEnv_o* programmingEnv, const MethodInfo* method); */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* MG_BlocksEngine2.Serializer.BE2_BlocksSerializer$$C_AddInputs
   System_Collections_IEnumerator_o* MG_BlocksEngine2_Serializer_BE2_BlocksSerializer__C_AddInputs
   (MG_BlocksEngine2_Block_I_BE2_Block_o* block,
   MG_BlocksEngine2_Serializer_BE2_SerializableBlock_o* serializableBlock,
   MG_BlocksEngine2_Environment_I_BE2_ProgrammingEnv_o* programmingEnv, const MethodInfo* method);
    */

long native_MG_BlocksEngine2_Serializer_BE2_BlocksSerializer__C_AddInputs_57331c
               (undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  long lVar1;
  
  if ((bRam000000000133ea8c & 1) == 0) {
    native_sub_43273c(&
                      MG_BlocksEngine2_Serializer_BE2_BlocksSerializer__C_AddInputs_d__9_TypeInfo_12d6fc8
                     );
    bRam000000000133ea8c = 1;
  }
  lVar1 = native_sub_432808(
                           _MG_BlocksEngine2_Serializer_BE2_BlocksSerializer__C_AddInputs_d__9_TypeInfo_12d6fc8
                           );
  native_MG_BlocksEngine2_Serializer_BE2_BlocksSerializer__C_AddInputs_d__9___ctor_950484(lVar1,0,0)
  ;
  if (lVar1 != 0) {
    *(undefined8 *)(lVar1 + 0x20) = param_1;
    native_sub_4326e0((undefined8 *)(lVar1 + 0x20),param_1);
    *(undefined8 *)(lVar1 + 0x28) = param_2;
    native_sub_4326e0((undefined8 *)(lVar1 + 0x28),param_2);
    *(undefined8 *)(lVar1 + 0x30) = param_3;
    native_sub_4326e0((undefined8 *)(lVar1 + 0x30),param_3);
    return lVar1;
  }
                    /* WARNING: Subroutine does not return */
  native_sub_432810();
}



/* MG_BlocksEngine2.Serializer.BE2_BlocksSerializer$$SerializableToBlock @ 0x56b2c8
 * MG_BlocksEngine2_Block_I_BE2_Block_o* MG_BlocksEngine2_Serializer_BE2_BlocksSerializer__SerializableToBlock (MG_BlocksEngine2_Serializer_BE2_SerializableBlock_o* serializableBlock, MG_BlocksEngine2_Environment_I_BE2_ProgrammingEnv_o* programmingEnv, const MethodInfo* method); */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* MG_BlocksEngine2.Serializer.BE2_BlocksSerializer$$SerializableToBlock
   MG_BlocksEngine2_Block_I_BE2_Block_o*
   MG_BlocksEngine2_Serializer_BE2_BlocksSerializer__SerializableToBlock
   (MG_BlocksEngine2_Serializer_BE2_SerializableBlock_o* serializableBlock,
   MG_BlocksEngine2_Environment_I_BE2_ProgrammingEnv_o* programmingEnv, const MethodInfo* method);
    */

long * native_MG_BlocksEngine2_Serializer_BE2_BlocksSerializer__SerializableToBlock_56b2c8
                 (undefined1 param_1 [16],undefined8 param_2,undefined8 param_3,undefined8 param_4,
                 long param_5,long *param_6)

{
  byte bVar1;
  int iVar2;
  int iVar3;
  undefined8 uVar4;
  ulong uVar5;
  undefined8 *puVar6;
  undefined8 uVar7;
  long lVar8;
  long *plVar9;
  long *plVar10;
  undefined8 uVar11;
  undefined8 uVar12;
  long *plVar13;
  uint uVar14;
  long lVar15;
  long lVar16;
  ulong uVar17;
  ulong uVar18;
  int *piVar19;
  uint uVar20;
  long *plVar21;
  undefined8 uVar22;
  undefined8 uVar23;
  undefined8 uVar24;
  undefined4 uVar25;
  undefined4 uVar26;
  undefined4 uVar27;
  undefined8 uStack_108;
  undefined8 uStack_100;
  long *plStack_f8;
  int aiStack_f0 [4];
  undefined8 uStack_e0;
  undefined8 uStack_d8;
  long *plStack_d0;
  undefined8 uStack_c0;
  undefined8 uStack_b8;
  long *plStack_b0;
  
  if ((bRam000000000133ea8d & 1) == 0) {
    native_sub_43273c(&MG_BlocksEngine2_Block_BE2_BlockSectionHeader_Custom_TypeInfo_12d3978);
    native_sub_43273c(&MG_BlocksEngine2_Block_BE2_BlockSectionHeader_Label_TypeInfo_12d3980);
    native_sub_43273c(&MG_BlocksEngine2_Block_BE2_BlockSectionHeader_LocalVariable_TypeInfo_12d3988)
    ;
    native_sub_43273c(&
                      Method_MG_BlocksEngine2_Serializer_BE2_BlocksSerializer_SerializableToBlock___12e2130
                     );
    native_sub_43273c(&MG_BlocksEngine2_Serializer_BE2_BlocksSerializer_TypeInfo_12d3998);
    native_sub_43273c(&BE2_Ins_DefineFunction_TypeInfo_12d39f8);
    native_sub_43273c(&BE2_Ins_FunctionBlock_TypeInfo_12d3a00);
    native_sub_43273c(&
                      Method_UnityEngine_Component_GetComponentInChildren_BE2_BlockSectionHeader_Custom____12e2c60
                     );
    native_sub_43273c(&Method_UnityEngine_Component_GetComponent_TMP_Text____12e2b38);
    native_sub_43273c(&UnityEngine_Debug_TypeInfo_12d4338);
    native_sub_43273c(&
                      Method_System_Collections_Generic_List_Enumerator_I_BE2_Block__Dispose___12da4c8
                     );
    native_sub_43273c(&
                      Method_System_Collections_Generic_List_Enumerator_DefineItem__Dispose___12da420
                     );
    native_sub_43273c(&
                      Method_System_Collections_Generic_List_Enumerator_DefineItem__MoveNext___12da428
                     );
    native_sub_43273c(&
                      Method_System_Collections_Generic_List_Enumerator_I_BE2_Block__MoveNext___12da4d0
                     );
    native_sub_43273c(&
                      Method_System_Collections_Generic_List_Enumerator_I_BE2_Block__get_Current___12da4d8
                     );
    native_sub_43273c(&
                      Method_System_Collections_Generic_List_Enumerator_DefineItem__get_Current___12da430
                     );
    native_sub_43273c(&
                      Method_UnityEngine_GameObject_GetComponentInChildren_BE2_BlockSectionHeader_Custom____12e4b00
                     );
    native_sub_43273c(&Method_UnityEngine_GameObject_GetComponentInChildren_TMP_Text____12e4b08);
    native_sub_43273c(&Method_UnityEngine_GameObject_GetComponent_I_BE2_Block____12e4998);
    native_sub_43273c(&Method_UnityEngine_GameObject_GetComponent_TMP_Text____12e4a50);
    native_sub_43273c(&MG_BlocksEngine2_Block_I_BE2_BlockLayout_TypeInfo_12d4de0);
    native_sub_43273c(&MG_BlocksEngine2_Block_I_BE2_BlockSectionHeaderItem_TypeInfo_12d4e08);
    native_sub_43273c(&MG_BlocksEngine2_Block_I_BE2_BlockSectionHeader_TypeInfo_12d4df8);
    native_sub_43273c(&MG_BlocksEngine2_Block_I_BE2_BlockSection_TypeInfo_12d4de8);
    native_sub_43273c(&MG_BlocksEngine2_Block_I_BE2_Block_TypeInfo_12d4dd8);
    native_sub_43273c(&MG_BlocksEngine2_Core_I_BE2_BlocksStack_TypeInfo_12d4e10);
    native_sub_43273c(&MG_BlocksEngine2_Block_Instruction_I_BE2_InstructionBase_TypeInfo_12d4e30);
    native_sub_43273c(&MG_BlocksEngine2_Block_Instruction_I_BE2_Instruction_TypeInfo_12d4e28);
    native_sub_43273c(&MG_BlocksEngine2_Environment_I_BE2_ProgrammingEnv_TypeInfo_12d4e38);
    native_sub_43273c(&MG_BlocksEngine2_Environment_I_BE2_VariablesManager_TypeInfo_12d4e60);
    native_sub_43273c(&Method_System_Collections_Generic_List_I_BE2_Block__GetEnumerator___12dc9a8);
    native_sub_43273c(&Method_System_Collections_Generic_List_DefineItem__GetEnumerator___12dc730);
    native_sub_43273c(&Method_UnityEngine_Object_Instantiate_GameObject____12e5a88);
    native_sub_43273c(&UnityEngine_Object_TypeInfo_12d54e0);
    native_sub_43273c(&Method_System_Type_GetType___12e75f8);
    native_sub_43273c(&System_Type_TypeInfo_12d6340);
    native_sub_43273c(&StringLiteral_custom_12f42a0);
    native_sub_43273c(&StringLiteral___was_not_found__12eb5f8);
    native_sub_43273c(&StringLiteral_Variables_manager_of_type___12f2ed8);
    native_sub_43273c(&StringLiteral_label_12f5370);
    native_sub_43273c(&StringLiteral_variable_12f6a60);
    native_sub_43273c(&StringLiteral_true_12f6790);
    native_sub_43273c(&StringLiteral__12eaac0);
    native_sub_43273c(&StringLiteral__FixedLabel__12f32b0);
    bRam000000000133ea8d = 1;
  }
  uStack_c0 = 0;
  uStack_b8 = 0;
  plStack_b0 = (long *)0x0;
  uStack_e0 = 0;
  uStack_d8 = 0;
  plStack_d0 = (long *)0x0;
  aiStack_f0[3] = 0;
  if (param_5 == 0) {
    return (long *)0x0;
  }
  uVar22 = *(undefined8 *)(param_5 + 0x10);
  uVar4 = native_MG_BlocksEngine2_Utils_BE2_BlockUtils__LoadPrefabBlock_56ea18(uVar22);
  if (((*(byte *)(_UnityEngine_Object_TypeInfo_12d54e0 + 0x133) >> 2 & 1) != 0) &&
     (*(int *)(_UnityEngine_Object_TypeInfo_12d54e0 + 0xe0) == 0)) {
    native_sub_4327ec(_UnityEngine_Object_TypeInfo_12d54e0);
  }
  uVar5 = native_UnityEngine_Object__op_Implicit_8e1b98(uVar4,0);
  plVar21 = (long *)0x0;
  if ((uVar5 & 1) == 0) goto LAB_0056db50;
  uVar25 = *(undefined4 *)(param_5 + 0x18);
  uVar26 = *(undefined4 *)(param_5 + 0x1c);
  uVar27 = *(undefined4 *)(param_5 + 0x20);
  uVar23 = native_UnityEngine_Quaternion__get_identity_7628fc(0);
  if (param_6 == (long *)0x0) goto LAB_0056db8c;
  lVar15 = *param_6;
  if ((ulong)*(ushort *)(lVar15 + 0x12a) != 0) {
    uVar5 = 0;
    piVar19 = (int *)(*(long *)(lVar15 + 0xb0) + 8);
    do {
      if (*(long *)(piVar19 + -2) ==
          _MG_BlocksEngine2_Environment_I_BE2_ProgrammingEnv_TypeInfo_12d4e38) {
        puVar6 = (undefined8 *)(lVar15 + (long)*piVar19 * 0x10 + 0x138);
        goto LAB_0056b60c;
      }
      uVar5 = uVar5 + 1;
      piVar19 = piVar19 + 4;
    } while (uVar5 < *(ushort *)(lVar15 + 0x12a));
  }
  puVar6 = (undefined8 *)
           native_sub_3c9b34(param_6,
                             _MG_BlocksEngine2_Environment_I_BE2_ProgrammingEnv_TypeInfo_12d4e38,0);
LAB_0056b60c:
  uVar7 = (*(code *)*puVar6)(param_6,puVar6[1]);
  if (((*(byte *)(_UnityEngine_Object_TypeInfo_12d54e0 + 0x133) >> 2 & 1) != 0) &&
     (*(int *)(_UnityEngine_Object_TypeInfo_12d54e0 + 0xe0) == 0)) {
    native_sub_4327ec(_UnityEngine_Object_TypeInfo_12d54e0);
  }
  lVar15 = native_UnityEngine_Object__Instantiate_BE2_Ins_DefineFunction__4a67c0
                     (uVar25,uVar26,uVar27,uVar23,param_2,param_3,param_4,uVar4,uVar7,
                      _Method_UnityEngine_Object_Instantiate_GameObject____12e5a88);
  if (lVar15 == 0) goto LAB_0056db8c;
  native_UnityEngine_Object__set_name_8e9c08(lVar15,uVar22,0);
  lVar8 = native_UnityEngine_GameObject__get_transform_8de5c8(lVar15,0);
  if (lVar8 == 0) goto LAB_0056db8c;
  uVar5 = (ulong)*(uint *)(param_5 + 0x1c);
  uVar4 = 0;
  native_UnityEngine_Transform__set_localPosition_7718a4
            (*(undefined4 *)(param_5 + 0x18),uVar5,0,lVar8,0);
  lVar8 = native_UnityEngine_GameObject__get_transform_8de5c8(lVar15,0);
  native_UnityEngine_Vector3__get_zero_776668(0);
  if (lVar8 == 0) goto LAB_0056db8c;
  native_UnityEngine_Transform__set_localEulerAngles_77194c(lVar8,0);
  plVar21 = (long *)native_UnityEngine_GameObject__GetComponent_BE2_BlockSectionHeader_Custom__4a2214
                              (lVar15,
                               _Method_UnityEngine_GameObject_GetComponent_I_BE2_Block____12e4998);
  if (plVar21 == (long *)0x0) goto LAB_0056db8c;
  lVar15 = *plVar21;
  if ((ulong)*(ushort *)(lVar15 + 0x12a) != 0) {
    uVar17 = 0;
    piVar19 = (int *)(*(long *)(lVar15 + 0xb0) + 8);
    do {
      if (*(long *)(piVar19 + -2) == _MG_BlocksEngine2_Block_I_BE2_Block_TypeInfo_12d4dd8) {
        puVar6 = (undefined8 *)(lVar15 + (long)(*piVar19 + 4) * 0x10 + 0x138);
        goto LAB_0056b74c;
      }
      uVar17 = uVar17 + 1;
      piVar19 = piVar19 + 4;
    } while (uVar17 < *(ushort *)(lVar15 + 0x12a));
  }
  puVar6 = (undefined8 *)
           native_sub_3c9b34(plVar21,_MG_BlocksEngine2_Block_I_BE2_Block_TypeInfo_12d4dd8,4);
LAB_0056b74c:
  plVar9 = (long *)(*(code *)*puVar6)(plVar21,puVar6[1]);
  if (plVar9 != (long *)0x0) {
    if (*(byte *)(*plVar9 + 300) < *(byte *)(_BE2_Ins_DefineFunction_TypeInfo_12d39f8 + 300)) {
      plVar9 = (long *)0x0;
    }
    else if (*(long *)(*(long *)(*plVar9 + 200) +
                       (ulong)*(byte *)(_BE2_Ins_DefineFunction_TypeInfo_12d39f8 + 300) * 8 + -8) !=
             _BE2_Ins_DefineFunction_TypeInfo_12d39f8) {
      plVar9 = (long *)0x0;
    }
  }
  uVar17 = native_UnityEngine_Object__op_Implicit_8e1b98(plVar9,0);
  if ((uVar17 & 1) != 0) {
    lVar15 = *plVar21;
    if ((ulong)*(ushort *)(lVar15 + 0x12a) != 0) {
      uVar17 = 0;
      piVar19 = (int *)(*(long *)(lVar15 + 0xb0) + 8);
      do {
        if (*(long *)(piVar19 + -2) == _MG_BlocksEngine2_Block_I_BE2_Block_TypeInfo_12d4dd8) {
          puVar6 = (undefined8 *)(lVar15 + (long)(*piVar19 + 4) * 0x10 + 0x138);
          goto LAB_0056b804;
        }
        uVar17 = uVar17 + 1;
        piVar19 = piVar19 + 4;
      } while (uVar17 < *(ushort *)(lVar15 + 0x12a));
    }
    puVar6 = (undefined8 *)
             native_sub_3c9b34(plVar21,_MG_BlocksEngine2_Block_I_BE2_Block_TypeInfo_12d4dd8,4);
LAB_0056b804:
    plVar9 = (long *)(*(code *)*puVar6)(plVar21,puVar6[1]);
    if (plVar9 == (long *)0x0) goto LAB_0056db8c;
    if ((*(byte *)(*plVar9 + 300) < *(byte *)(_BE2_Ins_DefineFunction_TypeInfo_12d39f8 + 300)) ||
       (*(long *)(*(long *)(*plVar9 + 200) +
                  (ulong)*(byte *)(_BE2_Ins_DefineFunction_TypeInfo_12d39f8 + 300) * 8 + -8) !=
        _BE2_Ins_DefineFunction_TypeInfo_12d39f8)) goto LAB_0056db8c;
    if (*(byte *)(*plVar9 + 300) < *(byte *)(_BE2_Ins_DefineFunction_TypeInfo_12d39f8 + 300)) {
      plVar9 = (long *)0x0;
    }
    else if (*(long *)(*(long *)(*plVar9 + 200) +
                       (ulong)*(byte *)(_BE2_Ins_DefineFunction_TypeInfo_12d39f8 + 300) * 8 + -8) !=
             _BE2_Ins_DefineFunction_TypeInfo_12d39f8) {
      plVar9 = (long *)0x0;
    }
    plVar9[0xf] = *(long *)(param_5 + 0x40);
    native_sub_4326e0();
    if (*(long *)(param_5 + 0x50) == 0) goto LAB_0056db8c;
    native_System_Collections_Generic_List_BE2_Op_FunctionLocalVariable___GetEnumerator_d414fc
              (&uStack_108,*(long *)(param_5 + 0x50),
               _Method_System_Collections_Generic_List_DefineItem__GetEnumerator___12dc730);
    plStack_b0 = plStack_f8;
    uStack_b8 = uStack_100;
    uStack_c0 = uStack_108;
    while (uVar17 = native_System_Collections_Generic_List_Enumerator_BE2_Op_FunctionLocalVariable___MoveNext_7e8f30
                              (&uStack_c0,
                               _Method_System_Collections_Generic_List_Enumerator_DefineItem__MoveNext___12da428
                              ), plVar9 = plStack_b0, (uVar17 & 1) != 0) {
      if (plStack_b0 == (long *)0x0) {
                    /* WARNING: Subroutine does not return */
        native_sub_432810();
      }
      uVar17 = native_System_String__op_Equality_afc18c
                         (plStack_b0[2],_StringLiteral_label_12f5370,0);
      if ((uVar17 & 1) == 0) {
        uVar17 = native_System_String__op_Equality_afc18c
                           (plVar9[2],_StringLiteral_variable_12f6a60,0);
        if ((uVar17 & 1) == 0) {
          uVar17 = native_System_String__op_Equality_afc18c
                             (plVar9[2],_StringLiteral_custom_12f42a0,0);
          if ((uVar17 & 1) != 0) {
            lVar15 = native_MG_BlocksEngine2_Environment_BE2_FunctionBlocksManager__get_Instance_5fd2f8
                               (0);
            if (lVar15 == 0) {
                    /* WARNING: Subroutine does not return */
              native_sub_432810();
            }
            uVar22 = *(undefined8 *)(lVar15 + 0x30);
            uVar7 = native_UnityEngine_Vector3__get_zero_776668(0);
            uVar23 = native_UnityEngine_Quaternion__get_identity_7628fc(0);
            lVar15 = *plVar21;
            if ((ulong)*(ushort *)(lVar15 + 0x12a) != 0) {
              uVar17 = 0;
              piVar19 = (int *)(*(long *)(lVar15 + 0xb0) + 8);
              do {
                if (*(long *)(piVar19 + -2) == _MG_BlocksEngine2_Block_I_BE2_Block_TypeInfo_12d4dd8)
                {
                  puVar6 = (undefined8 *)(lVar15 + (long)(*piVar19 + 3) * 0x10 + 0x138);
                  goto LAB_0056bec8;
                }
                uVar17 = uVar17 + 1;
                piVar19 = piVar19 + 4;
              } while (uVar17 < *(ushort *)(lVar15 + 0x12a));
            }
            puVar6 = (undefined8 *)
                     native_sub_3c9b34(plVar21,_MG_BlocksEngine2_Block_I_BE2_Block_TypeInfo_12d4dd8,
                                       3);
LAB_0056bec8:
            plVar10 = (long *)(*(code *)*puVar6)(plVar21,puVar6[1]);
            if (plVar10 == (long *)0x0) {
                    /* WARNING: Subroutine does not return */
              native_sub_432810();
            }
            lVar15 = *plVar10;
            if ((ulong)*(ushort *)(lVar15 + 0x12a) != 0) {
              uVar17 = 0;
              piVar19 = (int *)(*(long *)(lVar15 + 0xb0) + 8);
              do {
                if (*(long *)(piVar19 + -2) ==
                    _MG_BlocksEngine2_Block_I_BE2_BlockLayout_TypeInfo_12d4de0) {
                  puVar6 = (undefined8 *)(lVar15 + (long)(*piVar19 + 2) * 0x10 + 0x138);
                  goto LAB_0056bf34;
                }
                uVar17 = uVar17 + 1;
                piVar19 = piVar19 + 4;
              } while (uVar17 < *(ushort *)(lVar15 + 0x12a));
            }
            puVar6 = (undefined8 *)
                     native_sub_3c9b34(plVar10,
                                       _MG_BlocksEngine2_Block_I_BE2_BlockLayout_TypeInfo_12d4de0,2)
            ;
LAB_0056bf34:
            lVar15 = (*(code *)*puVar6)(plVar10,puVar6[1]);
            if (lVar15 == 0) {
                    /* WARNING: Subroutine does not return */
              native_sub_432810();
            }
            if (*(int *)(lVar15 + 0x18) == 0) {
              uVar4 = native_sub_43283c();
                    /* WARNING: Subroutine does not return */
              native_sub_4327dc(uVar4,0);
            }
            plVar10 = *(long **)(lVar15 + 0x20);
            if (plVar10 == (long *)0x0) {
                    /* WARNING: Subroutine does not return */
              native_sub_432810();
            }
            lVar15 = *plVar10;
            if ((ulong)*(ushort *)(lVar15 + 0x12a) != 0) {
              uVar17 = 0;
              piVar19 = (int *)(*(long *)(lVar15 + 0xb0) + 8);
              do {
                if (*(long *)(piVar19 + -2) ==
                    _MG_BlocksEngine2_Block_I_BE2_BlockSection_TypeInfo_12d4de8) {
                  puVar6 = (undefined8 *)(lVar15 + (long)(*piVar19 + 1) * 0x10 + 0x138);
                  goto LAB_0056bfac;
                }
                uVar17 = uVar17 + 1;
                piVar19 = piVar19 + 4;
              } while (uVar17 < *(ushort *)(lVar15 + 0x12a));
            }
            puVar6 = (undefined8 *)
                     native_sub_3c9b34(plVar10,
                                       _MG_BlocksEngine2_Block_I_BE2_BlockSection_TypeInfo_12d4de8,1
                                      );
LAB_0056bfac:
            plVar10 = (long *)(*(code *)*puVar6)(plVar10,puVar6[1]);
            if (plVar10 == (long *)0x0) {
                    /* WARNING: Subroutine does not return */
              native_sub_432810();
            }
            lVar15 = *plVar10;
            if ((ulong)*(ushort *)(lVar15 + 0x12a) != 0) {
              uVar17 = 0;
              piVar19 = (int *)(*(long *)(lVar15 + 0xb0) + 8);
              do {
                if (*(long *)(piVar19 + -2) ==
                    _MG_BlocksEngine2_Block_I_BE2_BlockSectionHeader_TypeInfo_12d4df8) {
                  puVar6 = (undefined8 *)(lVar15 + (long)*piVar19 * 0x10 + 0x138);
                  goto LAB_0056c014;
                }
                uVar17 = uVar17 + 1;
                piVar19 = piVar19 + 4;
              } while (uVar17 < *(ushort *)(lVar15 + 0x12a));
            }
            puVar6 = (undefined8 *)
                     native_sub_3c9b34(plVar10,
                                       _MG_BlocksEngine2_Block_I_BE2_BlockSectionHeader_TypeInfo_12d4df8
                                       ,0);
LAB_0056c014:
            uVar11 = (*(code *)*puVar6)(plVar10,puVar6[1]);
            if (((*(byte *)(_UnityEngine_Object_TypeInfo_12d54e0 + 0x133) >> 2 & 1) != 0) &&
               (*(int *)(_UnityEngine_Object_TypeInfo_12d54e0 + 0xe0) == 0)) {
              native_sub_4327ec();
            }
            lVar15 = native_UnityEngine_Object__Instantiate_BE2_Ins_DefineFunction__4a67c0
                               (uVar7,uVar22,uVar11,
                                _Method_UnityEngine_Object_Instantiate_GameObject____12e5a88);
            if (lVar15 == 0) {
                    /* WARNING: Subroutine does not return */
              native_sub_432810();
            }
            lVar15 = native_UnityEngine_GameObject__GetComponentInChildren_BE2_BlockSectionHeader_Custom__4a22c0
                               (lVar15,
                                _Method_UnityEngine_GameObject_GetComponentInChildren_BE2_BlockSectionHeader_Custom____12e4b00
                               );
            if (lVar15 == 0) {
                    /* WARNING: Subroutine does not return */
              native_sub_432810();
            }
            *(long *)(lVar15 + 0x20) = plVar9[3];
            native_sub_4326e0();
          }
        }
        else {
          lVar15 = native_MG_BlocksEngine2_Environment_BE2_FunctionBlocksManager__get_Instance_5fd2f8
                             (0);
          if (lVar15 == 0) {
                    /* WARNING: Subroutine does not return */
            native_sub_432810();
          }
          uVar22 = *(undefined8 *)(lVar15 + 0x28);
          uVar7 = native_UnityEngine_Vector3__get_zero_776668(0);
          uVar23 = native_UnityEngine_Quaternion__get_identity_7628fc(0);
          lVar15 = *plVar21;
          if ((ulong)*(ushort *)(lVar15 + 0x12a) != 0) {
            uVar17 = 0;
            piVar19 = (int *)(*(long *)(lVar15 + 0xb0) + 8);
            do {
              if (*(long *)(piVar19 + -2) == _MG_BlocksEngine2_Block_I_BE2_Block_TypeInfo_12d4dd8) {
                puVar6 = (undefined8 *)(lVar15 + (long)(*piVar19 + 3) * 0x10 + 0x138);
                goto LAB_0056bce0;
              }
              uVar17 = uVar17 + 1;
              piVar19 = piVar19 + 4;
            } while (uVar17 < *(ushort *)(lVar15 + 0x12a));
          }
          puVar6 = (undefined8 *)
                   native_sub_3c9b34(plVar21,_MG_BlocksEngine2_Block_I_BE2_Block_TypeInfo_12d4dd8,3)
          ;
LAB_0056bce0:
          plVar10 = (long *)(*(code *)*puVar6)(plVar21,puVar6[1]);
          if (plVar10 == (long *)0x0) {
                    /* WARNING: Subroutine does not return */
            native_sub_432810();
          }
          lVar15 = *plVar10;
          if ((ulong)*(ushort *)(lVar15 + 0x12a) != 0) {
            uVar17 = 0;
            piVar19 = (int *)(*(long *)(lVar15 + 0xb0) + 8);
            do {
              if (*(long *)(piVar19 + -2) ==
                  _MG_BlocksEngine2_Block_I_BE2_BlockLayout_TypeInfo_12d4de0) {
                puVar6 = (undefined8 *)(lVar15 + (long)(*piVar19 + 2) * 0x10 + 0x138);
                goto LAB_0056bd4c;
              }
              uVar17 = uVar17 + 1;
              piVar19 = piVar19 + 4;
            } while (uVar17 < *(ushort *)(lVar15 + 0x12a));
          }
          puVar6 = (undefined8 *)
                   native_sub_3c9b34(plVar10,
                                     _MG_BlocksEngine2_Block_I_BE2_BlockLayout_TypeInfo_12d4de0,2);
LAB_0056bd4c:
          lVar15 = (*(code *)*puVar6)(plVar10,puVar6[1]);
          if (lVar15 == 0) {
                    /* WARNING: Subroutine does not return */
            native_sub_432810();
          }
          if (*(int *)(lVar15 + 0x18) == 0) {
            uVar4 = native_sub_43283c();
                    /* WARNING: Subroutine does not return */
            native_sub_4327dc(uVar4,0);
          }
          plVar10 = *(long **)(lVar15 + 0x20);
          if (plVar10 == (long *)0x0) {
                    /* WARNING: Subroutine does not return */
            native_sub_432810();
          }
          lVar15 = *plVar10;
          if ((ulong)*(ushort *)(lVar15 + 0x12a) != 0) {
            uVar17 = 0;
            piVar19 = (int *)(*(long *)(lVar15 + 0xb0) + 8);
            do {
              if (*(long *)(piVar19 + -2) ==
                  _MG_BlocksEngine2_Block_I_BE2_BlockSection_TypeInfo_12d4de8) {
                puVar6 = (undefined8 *)(lVar15 + (long)(*piVar19 + 1) * 0x10 + 0x138);
                goto LAB_0056bdc4;
              }
              uVar17 = uVar17 + 1;
              piVar19 = piVar19 + 4;
            } while (uVar17 < *(ushort *)(lVar15 + 0x12a));
          }
          puVar6 = (undefined8 *)
                   native_sub_3c9b34(plVar10,
                                     _MG_BlocksEngine2_Block_I_BE2_BlockSection_TypeInfo_12d4de8,1);
LAB_0056bdc4:
          plVar10 = (long *)(*(code *)*puVar6)(plVar10,puVar6[1]);
          if (plVar10 == (long *)0x0) {
                    /* WARNING: Subroutine does not return */
            native_sub_432810();
          }
          lVar15 = *plVar10;
          if ((ulong)*(ushort *)(lVar15 + 0x12a) != 0) {
            uVar17 = 0;
            piVar19 = (int *)(*(long *)(lVar15 + 0xb0) + 8);
            do {
              if (*(long *)(piVar19 + -2) ==
                  _MG_BlocksEngine2_Block_I_BE2_BlockSectionHeader_TypeInfo_12d4df8) {
                puVar6 = (undefined8 *)(lVar15 + (long)*piVar19 * 0x10 + 0x138);
                goto LAB_0056be2c;
              }
              uVar17 = uVar17 + 1;
              piVar19 = piVar19 + 4;
            } while (uVar17 < *(ushort *)(lVar15 + 0x12a));
          }
          puVar6 = (undefined8 *)
                   native_sub_3c9b34(plVar10,
                                     _MG_BlocksEngine2_Block_I_BE2_BlockSectionHeader_TypeInfo_12d4df8
                                     ,0);
LAB_0056be2c:
          uVar11 = (*(code *)*puVar6)(plVar10,puVar6[1]);
          if (((*(byte *)(_UnityEngine_Object_TypeInfo_12d54e0 + 0x133) >> 2 & 1) != 0) &&
             (*(int *)(_UnityEngine_Object_TypeInfo_12d54e0 + 0xe0) == 0)) {
            native_sub_4327ec();
          }
          lVar15 = native_UnityEngine_Object__Instantiate_BE2_Ins_DefineFunction__4a67c0
                             (uVar7,uVar22,uVar11,
                              _Method_UnityEngine_Object_Instantiate_GameObject____12e5a88);
          if (lVar15 == 0) {
                    /* WARNING: Subroutine does not return */
            native_sub_432810();
          }
          plVar10 = (long *)native_UnityEngine_GameObject__GetComponentInChildren_BE2_BlockSectionHeader_Custom__4a22c0
                                      (lVar15,
                                       _Method_UnityEngine_GameObject_GetComponentInChildren_TMP_Text____12e4b08
                                      );
          if (plVar10 == (long *)0x0) {
                    /* WARNING: Subroutine does not return */
            native_sub_432810();
          }
          (**(code **)(*plVar10 + 0x558))(plVar10,plVar9[3],*(undefined8 *)(*plVar10 + 0x560));
        }
      }
      else {
        lVar15 = native_MG_BlocksEngine2_EditorScript_BE2_Inspector__get_Instance_602da4(0);
        if (lVar15 == 0) {
                    /* WARNING: Subroutine does not return */
          native_sub_432810();
        }
        uVar22 = *(undefined8 *)(lVar15 + 0x78);
        uVar7 = native_UnityEngine_Vector3__get_zero_776668(0);
        uVar23 = native_UnityEngine_Quaternion__get_identity_7628fc(0);
        lVar15 = *plVar21;
        if ((ulong)*(ushort *)(lVar15 + 0x12a) != 0) {
          uVar17 = 0;
          piVar19 = (int *)(*(long *)(lVar15 + 0xb0) + 8);
          do {
            if (*(long *)(piVar19 + -2) == _MG_BlocksEngine2_Block_I_BE2_Block_TypeInfo_12d4dd8) {
              puVar6 = (undefined8 *)(lVar15 + (long)(*piVar19 + 3) * 0x10 + 0x138);
              goto LAB_0056baf8;
            }
            uVar17 = uVar17 + 1;
            piVar19 = piVar19 + 4;
          } while (uVar17 < *(ushort *)(lVar15 + 0x12a));
        }
        puVar6 = (undefined8 *)
                 native_sub_3c9b34(plVar21,_MG_BlocksEngine2_Block_I_BE2_Block_TypeInfo_12d4dd8,3);
LAB_0056baf8:
        plVar10 = (long *)(*(code *)*puVar6)(plVar21,puVar6[1]);
        if (plVar10 == (long *)0x0) {
                    /* WARNING: Subroutine does not return */
          native_sub_432810();
        }
        lVar15 = *plVar10;
        if ((ulong)*(ushort *)(lVar15 + 0x12a) != 0) {
          uVar17 = 0;
          piVar19 = (int *)(*(long *)(lVar15 + 0xb0) + 8);
          do {
            if (*(long *)(piVar19 + -2) ==
                _MG_BlocksEngine2_Block_I_BE2_BlockLayout_TypeInfo_12d4de0) {
              puVar6 = (undefined8 *)(lVar15 + (long)(*piVar19 + 2) * 0x10 + 0x138);
              goto LAB_0056bb64;
            }
            uVar17 = uVar17 + 1;
            piVar19 = piVar19 + 4;
          } while (uVar17 < *(ushort *)(lVar15 + 0x12a));
        }
        puVar6 = (undefined8 *)
                 native_sub_3c9b34(plVar10,
                                   _MG_BlocksEngine2_Block_I_BE2_BlockLayout_TypeInfo_12d4de0,2);
LAB_0056bb64:
        lVar15 = (*(code *)*puVar6)(plVar10,puVar6[1]);
        if (lVar15 == 0) {
                    /* WARNING: Subroutine does not return */
          native_sub_432810();
        }
        if (*(int *)(lVar15 + 0x18) == 0) {
          uVar4 = native_sub_43283c();
                    /* WARNING: Subroutine does not return */
          native_sub_4327dc(uVar4,0);
        }
        plVar10 = *(long **)(lVar15 + 0x20);
        if (plVar10 == (long *)0x0) {
                    /* WARNING: Subroutine does not return */
          native_sub_432810();
        }
        lVar15 = *plVar10;
        if ((ulong)*(ushort *)(lVar15 + 0x12a) != 0) {
          uVar17 = 0;
          piVar19 = (int *)(*(long *)(lVar15 + 0xb0) + 8);
          do {
            if (*(long *)(piVar19 + -2) ==
                _MG_BlocksEngine2_Block_I_BE2_BlockSection_TypeInfo_12d4de8) {
              puVar6 = (undefined8 *)(lVar15 + (long)(*piVar19 + 1) * 0x10 + 0x138);
              goto LAB_0056bbdc;
            }
            uVar17 = uVar17 + 1;
            piVar19 = piVar19 + 4;
          } while (uVar17 < *(ushort *)(lVar15 + 0x12a));
        }
        puVar6 = (undefined8 *)
                 native_sub_3c9b34(plVar10,
                                   _MG_BlocksEngine2_Block_I_BE2_BlockSection_TypeInfo_12d4de8,1);
LAB_0056bbdc:
        plVar10 = (long *)(*(code *)*puVar6)(plVar10,puVar6[1]);
        if (plVar10 == (long *)0x0) {
                    /* WARNING: Subroutine does not return */
          native_sub_432810();
        }
        lVar15 = *plVar10;
        if ((ulong)*(ushort *)(lVar15 + 0x12a) != 0) {
          uVar17 = 0;
          piVar19 = (int *)(*(long *)(lVar15 + 0xb0) + 8);
          do {
            if (*(long *)(piVar19 + -2) ==
                _MG_BlocksEngine2_Block_I_BE2_BlockSectionHeader_TypeInfo_12d4df8) {
              puVar6 = (undefined8 *)(lVar15 + (long)*piVar19 * 0x10 + 0x138);
              goto LAB_0056bc44;
            }
            uVar17 = uVar17 + 1;
            piVar19 = piVar19 + 4;
          } while (uVar17 < *(ushort *)(lVar15 + 0x12a));
        }
        puVar6 = (undefined8 *)
                 native_sub_3c9b34(plVar10,
                                   _MG_BlocksEngine2_Block_I_BE2_BlockSectionHeader_TypeInfo_12d4df8
                                   ,0);
LAB_0056bc44:
        uVar11 = (*(code *)*puVar6)(plVar10,puVar6[1]);
        if (((*(byte *)(_UnityEngine_Object_TypeInfo_12d54e0 + 0x133) >> 2 & 1) != 0) &&
           (*(int *)(_UnityEngine_Object_TypeInfo_12d54e0 + 0xe0) == 0)) {
          native_sub_4327ec();
        }
        lVar15 = native_UnityEngine_Object__Instantiate_BE2_Ins_DefineFunction__4a67c0
                           (uVar7,uVar22,uVar11,
                            _Method_UnityEngine_Object_Instantiate_GameObject____12e5a88);
        if (lVar15 == 0) {
                    /* WARNING: Subroutine does not return */
          native_sub_432810();
        }
        plVar10 = (long *)native_UnityEngine_GameObject__GetComponentInChildren_BE2_BlockSectionHeader_Custom__4a22c0
                                    (lVar15,
                                     _Method_UnityEngine_GameObject_GetComponentInChildren_TMP_Text____12e4b08
                                    );
        if (plVar10 == (long *)0x0) {
                    /* WARNING: Subroutine does not return */
          native_sub_432810();
        }
        (**(code **)(*plVar10 + 0x558))(plVar10,plVar9[3],*(undefined8 *)(*plVar10 + 0x560));
      }
    }
    aiStack_f0[0] = 0x1e4;
    aiStack_f0[3] = 1;
    native_System_Collections_Generic_List_Enumerator_BE2_Op_FunctionLocalVariable___Dispose_7e8f2c
              (&uStack_c0,
               _Method_System_Collections_Generic_List_Enumerator_DefineItem__Dispose___12da420);
    aiStack_f0[3] = 0;
    plVar9 = (long *)native_MG_BlocksEngine2_Environment_BE2_FunctionBlocksManager__get_Instance_5fd2f8
                               (0);
    lVar15 = *plVar21;
    uVar22 = *(undefined8 *)(param_5 + 0x50);
    if ((ulong)*(ushort *)(lVar15 + 0x12a) != 0) {
      uVar17 = 0;
      piVar19 = (int *)(*(long *)(lVar15 + 0xb0) + 8);
      do {
        if (*(long *)(piVar19 + -2) == _MG_BlocksEngine2_Block_I_BE2_Block_TypeInfo_12d4dd8) {
          puVar6 = (undefined8 *)(lVar15 + (long)(*piVar19 + 4) * 0x10 + 0x138);
          goto LAB_0056c150;
        }
        uVar17 = uVar17 + 1;
        piVar19 = piVar19 + 4;
      } while (uVar17 < *(ushort *)(lVar15 + 0x12a));
    }
    puVar6 = (undefined8 *)
             native_sub_3c9b34(plVar21,_MG_BlocksEngine2_Block_I_BE2_Block_TypeInfo_12d4dd8,4);
LAB_0056c150:
    plVar10 = (long *)(*(code *)*puVar6)(plVar21,puVar6[1]);
    if (plVar9 == (long *)0x0) goto LAB_0056db8c;
    if (plVar10 == (long *)0x0) {
LAB_0056c17c:
      plVar10 = (long *)0x0;
    }
    else {
      if (*(byte *)(*plVar10 + 300) < *(byte *)(_BE2_Ins_DefineFunction_TypeInfo_12d39f8 + 300))
      goto LAB_0056c17c;
      if (*(long *)(*(long *)(*plVar10 + 200) +
                    (ulong)*(byte *)(_BE2_Ins_DefineFunction_TypeInfo_12d39f8 + 300) * 8 + -8) !=
          _BE2_Ins_DefineFunction_TypeInfo_12d39f8) {
        plVar10 = (long *)0x0;
      }
    }
    (**(code **)(*plVar9 + 0x188))(plVar9,uVar22,plVar10,*(undefined8 *)(*plVar9 + 400));
  }
  lVar15 = *plVar21;
  if ((ulong)*(ushort *)(lVar15 + 0x12a) != 0) {
    uVar17 = 0;
    piVar19 = (int *)(*(long *)(lVar15 + 0xb0) + 8);
    do {
      if (*(long *)(piVar19 + -2) == _MG_BlocksEngine2_Block_I_BE2_Block_TypeInfo_12d4dd8) {
        puVar6 = (undefined8 *)(lVar15 + (long)(*piVar19 + 4) * 0x10 + 0x138);
        goto LAB_0056c20c;
      }
      uVar17 = uVar17 + 1;
      piVar19 = piVar19 + 4;
    } while (uVar17 < *(ushort *)(lVar15 + 0x12a));
  }
  puVar6 = (undefined8 *)
           native_sub_3c9b34(plVar21,_MG_BlocksEngine2_Block_I_BE2_Block_TypeInfo_12d4dd8,4);
LAB_0056c20c:
  plVar9 = (long *)(*(code *)*puVar6)(plVar21,puVar6[1]);
  if (plVar9 != (long *)0x0) {
    if ((*(byte *)(_BE2_Ins_FunctionBlock_TypeInfo_12d3a00 + 300) <= *(byte *)(*plVar9 + 300)) &&
       (*(long *)(*(long *)(*plVar9 + 200) +
                  (ulong)*(byte *)(_BE2_Ins_FunctionBlock_TypeInfo_12d3a00 + 300) * 8 + -8) ==
        _BE2_Ins_FunctionBlock_TypeInfo_12d3a00)) {
      lVar15 = *param_6;
      if ((ulong)*(ushort *)(lVar15 + 0x12a) != 0) {
        uVar17 = 0;
        piVar19 = (int *)(*(long *)(lVar15 + 0xb0) + 8);
        do {
          if (*(long *)(piVar19 + -2) ==
              _MG_BlocksEngine2_Environment_I_BE2_ProgrammingEnv_TypeInfo_12d4e38) {
            puVar6 = (undefined8 *)(lVar15 + (long)(*piVar19 + 5) * 0x10 + 0x138);
            goto LAB_0056c2a8;
          }
          uVar17 = uVar17 + 1;
          piVar19 = piVar19 + 4;
        } while (uVar17 < *(ushort *)(lVar15 + 0x12a));
      }
      puVar6 = (undefined8 *)
               native_sub_3c9b34(param_6,
                                 _MG_BlocksEngine2_Environment_I_BE2_ProgrammingEnv_TypeInfo_12d4e38
                                 ,5);
LAB_0056c2a8:
      (*(code *)*puVar6)(param_6,puVar6[1]);
      lVar15 = *param_6;
      if ((ulong)*(ushort *)(lVar15 + 0x12a) != 0) {
        uVar17 = 0;
        piVar19 = (int *)(*(long *)(lVar15 + 0xb0) + 8);
        do {
          if (*(long *)(piVar19 + -2) ==
              _MG_BlocksEngine2_Environment_I_BE2_ProgrammingEnv_TypeInfo_12d4e38) {
            puVar6 = (undefined8 *)(lVar15 + (long)(*piVar19 + 1) * 0x10 + 0x138);
            goto LAB_0056c30c;
          }
          uVar17 = uVar17 + 1;
          piVar19 = piVar19 + 4;
        } while (uVar17 < *(ushort *)(lVar15 + 0x12a));
      }
      puVar6 = (undefined8 *)
               native_sub_3c9b34(param_6,
                                 _MG_BlocksEngine2_Environment_I_BE2_ProgrammingEnv_TypeInfo_12d4e38
                                 ,1);
LAB_0056c30c:
      lVar15 = (*(code *)*puVar6)(param_6,puVar6[1]);
      if (lVar15 == 0) goto LAB_0056db8c;
      native_System_Collections_Generic_List_BE2_Op_FunctionLocalVariable___GetEnumerator_d414fc
                (&uStack_108,lVar15,
                 _Method_System_Collections_Generic_List_I_BE2_Block__GetEnumerator___12dc9a8);
      plVar9 = (long *)0x0;
      plStack_d0 = plStack_f8;
      uStack_d8 = uStack_100;
      uStack_e0 = uStack_108;
      do {
        do {
          uVar17 = native_System_Collections_Generic_List_Enumerator_BE2_Op_FunctionLocalVariable___MoveNext_7e8f30
                             (&uStack_e0,
                              _Method_System_Collections_Generic_List_Enumerator_I_BE2_Block__MoveNext___12da4d0
                             );
          plVar10 = plStack_d0;
          if ((uVar17 & 1) == 0) goto LAB_0056c454;
          if (plStack_d0 == (long *)0x0) {
                    /* WARNING: Subroutine does not return */
            native_sub_432810();
          }
          lVar15 = *plStack_d0;
          if ((ulong)*(ushort *)(lVar15 + 0x12a) != 0) {
            uVar17 = 0;
            piVar19 = (int *)(*(long *)(lVar15 + 0xb0) + 8);
            do {
              if (*(long *)(piVar19 + -2) == _MG_BlocksEngine2_Block_I_BE2_Block_TypeInfo_12d4dd8) {
                puVar6 = (undefined8 *)(lVar15 + (long)(*piVar19 + 4) * 0x10 + 0x138);
                goto LAB_0056c3c4;
              }
              uVar17 = uVar17 + 1;
              piVar19 = piVar19 + 4;
            } while (uVar17 < *(ushort *)(lVar15 + 0x12a));
          }
          puVar6 = (undefined8 *)
                   native_sub_3c9b34(plStack_d0,_MG_BlocksEngine2_Block_I_BE2_Block_TypeInfo_12d4dd8
                                     ,4);
LAB_0056c3c4:
          plVar9 = (long *)(*(code *)*puVar6)(plVar10,puVar6[1]);
          if (plVar9 == (long *)0x0) {
LAB_0056c3ec:
            plVar9 = (long *)0x0;
          }
          else {
            if (*(byte *)(*plVar9 + 300) < *(byte *)(_BE2_Ins_DefineFunction_TypeInfo_12d39f8 + 300)
               ) goto LAB_0056c3ec;
            if (*(long *)(*(long *)(*plVar9 + 200) +
                          (ulong)*(byte *)(_BE2_Ins_DefineFunction_TypeInfo_12d39f8 + 300) * 8 + -8)
                != _BE2_Ins_DefineFunction_TypeInfo_12d39f8) {
              plVar9 = (long *)0x0;
            }
          }
          if (((*(byte *)(_UnityEngine_Object_TypeInfo_12d54e0 + 0x133) >> 2 & 1) != 0) &&
             (*(int *)(_UnityEngine_Object_TypeInfo_12d54e0 + 0xe0) == 0)) {
            native_sub_4327ec();
          }
          uVar17 = native_UnityEngine_Object__op_Inequality_8d76fc(plVar9,0,0);
        } while ((uVar17 & 1) == 0);
        if (plVar9 == (long *)0x0) {
                    /* WARNING: Subroutine does not return */
          native_sub_432810();
        }
        uVar17 = native_System_String__op_Equality_afc18c
                           (plVar9[0xf],*(undefined8 *)(param_5 + 0x40),0);
      } while ((uVar17 & 1) == 0);
LAB_0056c454:
      iVar2 = aiStack_f0[3];
      aiStack_f0[0] = 0x273;
      iVar3 = aiStack_f0[3] + 1;
      aiStack_f0[3] = iVar3;
      native_System_Collections_Generic_List_Enumerator_BE2_Op_FunctionLocalVariable___Dispose_7e8f2c
                (&uStack_e0,
                 _Method_System_Collections_Generic_List_Enumerator_I_BE2_Block__Dispose___12da4c8);
      if ((iVar3 != 0) && (aiStack_f0[iVar2] == 0x273)) {
        aiStack_f0[3] = iVar2;
      }
      if ((plVar9 == (long *)0x0) || (plVar10 = (long *)plVar9[8], plVar10 == (long *)0x0))
      goto LAB_0056db8c;
      lVar15 = *plVar10;
      if ((ulong)*(ushort *)(lVar15 + 0x12a) != 0) {
        uVar17 = 0;
        piVar19 = (int *)(*(long *)(lVar15 + 0xb0) + 8);
        do {
          if (*(long *)(piVar19 + -2) == _MG_BlocksEngine2_Block_I_BE2_Block_TypeInfo_12d4dd8) {
            puVar6 = (undefined8 *)(lVar15 + (long)(*piVar19 + 3) * 0x10 + 0x138);
            goto LAB_0056c504;
          }
          uVar17 = uVar17 + 1;
          piVar19 = piVar19 + 4;
        } while (uVar17 < *(ushort *)(lVar15 + 0x12a));
      }
      puVar6 = (undefined8 *)
               native_sub_3c9b34(plVar10,_MG_BlocksEngine2_Block_I_BE2_Block_TypeInfo_12d4dd8,3);
LAB_0056c504:
      plVar10 = (long *)(*(code *)*puVar6)(plVar10,puVar6[1]);
      if (plVar10 == (long *)0x0) goto LAB_0056db8c;
      lVar15 = *plVar10;
      if ((ulong)*(ushort *)(lVar15 + 0x12a) != 0) {
        uVar17 = 0;
        piVar19 = (int *)(*(long *)(lVar15 + 0xb0) + 8);
        do {
          if (*(long *)(piVar19 + -2) == _MG_BlocksEngine2_Block_I_BE2_BlockLayout_TypeInfo_12d4de0)
          {
            puVar6 = (undefined8 *)(lVar15 + (long)(*piVar19 + 2) * 0x10 + 0x138);
            goto LAB_0056c578;
          }
          uVar17 = uVar17 + 1;
          piVar19 = piVar19 + 4;
        } while (uVar17 < *(ushort *)(lVar15 + 0x12a));
      }
      puVar6 = (undefined8 *)
               native_sub_3c9b34(plVar10,_MG_BlocksEngine2_Block_I_BE2_BlockLayout_TypeInfo_12d4de0,
                                 2);
LAB_0056c578:
      lVar15 = (*(code *)*puVar6)(plVar10,puVar6[1]);
      if (lVar15 == 0) goto LAB_0056db8c;
      if (*(int *)(lVar15 + 0x18) == 0) {
LAB_0056dbe4:
        uVar4 = native_sub_43283c();
                    /* WARNING: Subroutine does not return */
        native_sub_4327dc(uVar4,0);
      }
      plVar10 = *(long **)(lVar15 + 0x20);
      if (plVar10 == (long *)0x0) goto LAB_0056db8c;
      lVar15 = *plVar10;
      if ((ulong)*(ushort *)(lVar15 + 0x12a) != 0) {
        uVar17 = 0;
        piVar19 = (int *)(*(long *)(lVar15 + 0xb0) + 8);
        do {
          if (*(long *)(piVar19 + -2) == _MG_BlocksEngine2_Block_I_BE2_BlockSection_TypeInfo_12d4de8
             ) {
            puVar6 = (undefined8 *)(lVar15 + (long)(*piVar19 + 1) * 0x10 + 0x138);
            goto LAB_0056c5f8;
          }
          uVar17 = uVar17 + 1;
          piVar19 = piVar19 + 4;
        } while (uVar17 < *(ushort *)(lVar15 + 0x12a));
      }
      puVar6 = (undefined8 *)
               native_sub_3c9b34(plVar10,_MG_BlocksEngine2_Block_I_BE2_BlockSection_TypeInfo_12d4de8
                                 ,1);
LAB_0056c5f8:
      plVar10 = (long *)(*(code *)*puVar6)(plVar10,puVar6[1]);
      if (plVar10 == (long *)0x0) goto LAB_0056db8c;
      lVar15 = *plVar10;
      if ((ulong)*(ushort *)(lVar15 + 0x12a) != 0) {
        uVar17 = 0;
        piVar19 = (int *)(*(long *)(lVar15 + 0xb0) + 8);
        do {
          if (*(long *)(piVar19 + -2) ==
              _MG_BlocksEngine2_Block_I_BE2_BlockSectionHeader_TypeInfo_12d4df8) {
            puVar6 = (undefined8 *)(lVar15 + (long)(*piVar19 + 6) * 0x10 + 0x138);
            goto LAB_0056c66c;
          }
          uVar17 = uVar17 + 1;
          piVar19 = piVar19 + 4;
        } while (uVar17 < *(ushort *)(lVar15 + 0x12a));
      }
      puVar6 = (undefined8 *)
               native_sub_3c9b34(plVar10,
                                 _MG_BlocksEngine2_Block_I_BE2_BlockSectionHeader_TypeInfo_12d4df8,6
                                );
LAB_0056c66c:
      (*(code *)*puVar6)(plVar10,puVar6[1]);
      plVar10 = (long *)plVar9[8];
      if (plVar10 == (long *)0x0) goto LAB_0056db8c;
      lVar15 = *plVar10;
      if ((ulong)*(ushort *)(lVar15 + 0x12a) != 0) {
        uVar17 = 0;
        piVar19 = (int *)(*(long *)(lVar15 + 0xb0) + 8);
        do {
          if (*(long *)(piVar19 + -2) == _MG_BlocksEngine2_Block_I_BE2_Block_TypeInfo_12d4dd8) {
            puVar6 = (undefined8 *)(lVar15 + (long)(*piVar19 + 3) * 0x10 + 0x138);
            goto LAB_0056c6e0;
          }
          uVar17 = uVar17 + 1;
          piVar19 = piVar19 + 4;
        } while (uVar17 < *(ushort *)(lVar15 + 0x12a));
      }
      puVar6 = (undefined8 *)
               native_sub_3c9b34(plVar10,_MG_BlocksEngine2_Block_I_BE2_Block_TypeInfo_12d4dd8,3);
LAB_0056c6e0:
      plVar10 = (long *)(*(code *)*puVar6)(plVar10,puVar6[1]);
      if (plVar10 == (long *)0x0) goto LAB_0056db8c;
      lVar15 = *plVar10;
      if ((ulong)*(ushort *)(lVar15 + 0x12a) != 0) {
        uVar17 = 0;
        piVar19 = (int *)(*(long *)(lVar15 + 0xb0) + 8);
        do {
          if (*(long *)(piVar19 + -2) == _MG_BlocksEngine2_Block_I_BE2_BlockLayout_TypeInfo_12d4de0)
          {
            puVar6 = (undefined8 *)(lVar15 + (long)(*piVar19 + 2) * 0x10 + 0x138);
            goto LAB_0056c754;
          }
          uVar17 = uVar17 + 1;
          piVar19 = piVar19 + 4;
        } while (uVar17 < *(ushort *)(lVar15 + 0x12a));
      }
      puVar6 = (undefined8 *)
               native_sub_3c9b34(plVar10,_MG_BlocksEngine2_Block_I_BE2_BlockLayout_TypeInfo_12d4de0,
                                 2);
LAB_0056c754:
      lVar15 = (*(code *)*puVar6)(plVar10,puVar6[1]);
      if (lVar15 == 0) goto LAB_0056db8c;
      if (*(int *)(lVar15 + 0x18) == 0) goto LAB_0056dbe4;
      plVar10 = *(long **)(lVar15 + 0x20);
      if (plVar10 == (long *)0x0) goto LAB_0056db8c;
      lVar15 = *plVar10;
      if ((ulong)*(ushort *)(lVar15 + 0x12a) != 0) {
        uVar17 = 0;
        piVar19 = (int *)(*(long *)(lVar15 + 0xb0) + 8);
        do {
          if (*(long *)(piVar19 + -2) == _MG_BlocksEngine2_Block_I_BE2_BlockSection_TypeInfo_12d4de8
             ) {
            puVar6 = (undefined8 *)(lVar15 + (long)(*piVar19 + 1) * 0x10 + 0x138);
            goto LAB_0056c7d4;
          }
          uVar17 = uVar17 + 1;
          piVar19 = piVar19 + 4;
        } while (uVar17 < *(ushort *)(lVar15 + 0x12a));
      }
      puVar6 = (undefined8 *)
               native_sub_3c9b34(plVar10,_MG_BlocksEngine2_Block_I_BE2_BlockSection_TypeInfo_12d4de8
                                 ,1);
LAB_0056c7d4:
      plVar10 = (long *)(*(code *)*puVar6)(plVar10,puVar6[1]);
      if (plVar10 == (long *)0x0) goto LAB_0056db8c;
      lVar15 = *plVar10;
      if ((ulong)*(ushort *)(lVar15 + 0x12a) != 0) {
        uVar17 = 0;
        piVar19 = (int *)(*(long *)(lVar15 + 0xb0) + 8);
        do {
          if (*(long *)(piVar19 + -2) ==
              _MG_BlocksEngine2_Block_I_BE2_BlockSectionHeader_TypeInfo_12d4df8) {
            puVar6 = (undefined8 *)(lVar15 + (long)(*piVar19 + 1) * 0x10 + 0x138);
            goto LAB_0056c848;
          }
          uVar17 = uVar17 + 1;
          piVar19 = piVar19 + 4;
        } while (uVar17 < *(ushort *)(lVar15 + 0x12a));
      }
      puVar6 = (undefined8 *)
               native_sub_3c9b34(plVar10,
                                 _MG_BlocksEngine2_Block_I_BE2_BlockSectionHeader_TypeInfo_12d4df8,1
                                );
LAB_0056c848:
      lVar15 = (*(code *)*puVar6)(plVar10,puVar6[1]);
      if (lVar15 == 0) goto LAB_0056db8c;
      uVar14 = *(uint *)(lVar15 + 0x18);
      if (0 < (int)uVar14) {
        uVar20 = 0;
        do {
          if (uVar14 <= uVar20) goto LAB_0056dbe4;
          plVar10 = *(long **)(lVar15 + (long)(int)uVar20 * 8 + 0x20);
          if (plVar10 == (long *)0x0) goto LAB_0056db8c;
          lVar8 = *plVar10;
          if ((ulong)*(ushort *)(lVar8 + 0x12a) != 0) {
            uVar17 = 0;
            piVar19 = (int *)(*(long *)(lVar8 + 0xb0) + 8);
            do {
              if (*(long *)(piVar19 + -2) ==
                  _MG_BlocksEngine2_Block_I_BE2_BlockSectionHeaderItem_TypeInfo_12d4e08) {
                puVar6 = (undefined8 *)(lVar8 + (long)*piVar19 * 0x10 + 0x138);
                uVar22 = uVar23;
                goto LAB_0056c8e4;
              }
              uVar17 = uVar17 + 1;
              piVar19 = piVar19 + 4;
            } while (uVar17 < *(ushort *)(lVar8 + 0x12a));
          }
          puVar6 = (undefined8 *)
                   native_sub_3c9b34(plVar10,
                                     _MG_BlocksEngine2_Block_I_BE2_BlockSectionHeaderItem_TypeInfo_12d4e08
                                     ,0);
          uVar22 = uVar23;
LAB_0056c8e4:
          lVar8 = (*(code *)*puVar6)(plVar10,puVar6[1]);
          if ((lVar8 == 0) ||
             (lVar8 = native_UnityEngine_Object__get_name_8e8098(lVar8,0), lVar8 == 0))
          goto LAB_0056db8c;
          uVar17 = native_System_String__Contains_b0bafc
                             (lVar8,_StringLiteral__FixedLabel__12f32b0,0);
          uVar23 = uVar22;
          if ((uVar17 & 1) == 0) {
            lVar8 = *plVar10;
            bVar1 = *(byte *)(lVar8 + 300);
            if ((bVar1 < *(byte *)(
                                  _MG_BlocksEngine2_Block_BE2_BlockSectionHeader_Label_TypeInfo_12d3980
                                  + 300)) ||
               (*(long *)(*(long *)(lVar8 + 200) +
                          (ulong)*(byte *)(
                                          _MG_BlocksEngine2_Block_BE2_BlockSectionHeader_Label_TypeInfo_12d3980
                                          + 300) * 8 + -8) !=
                _MG_BlocksEngine2_Block_BE2_BlockSectionHeader_Label_TypeInfo_12d3980)) {
              if ((bVar1 < *(byte *)(
                                    _MG_BlocksEngine2_Block_BE2_BlockSectionHeader_LocalVariable_TypeInfo_12d3988
                                    + 300)) ||
                 (*(long *)(*(long *)(lVar8 + 200) +
                            (ulong)*(byte *)(
                                            _MG_BlocksEngine2_Block_BE2_BlockSectionHeader_LocalVariable_TypeInfo_12d3988
                                            + 300) * 8 + -8) !=
                  _MG_BlocksEngine2_Block_BE2_BlockSectionHeader_LocalVariable_TypeInfo_12d3988)) {
                if ((*(byte *)(
                              _MG_BlocksEngine2_Block_BE2_BlockSectionHeader_Custom_TypeInfo_12d3978
                              + 300) <= bVar1) &&
                   (*(long *)(*(long *)(lVar8 + 200) +
                              (ulong)*(byte *)(
                                              _MG_BlocksEngine2_Block_BE2_BlockSectionHeader_Custom_TypeInfo_12d3978
                                              + 300) * 8 + -8) ==
                    _MG_BlocksEngine2_Block_BE2_BlockSectionHeader_Custom_TypeInfo_12d3978)) {
                  lVar8 = native_MG_BlocksEngine2_Environment_BE2_FunctionBlocksManager__get_Instance_5fd2f8
                                    (0);
                  if (lVar8 == 0) goto LAB_0056db8c;
                  uVar22 = *(undefined8 *)(lVar8 + 0x30);
                  uVar7 = native_UnityEngine_Vector3__get_zero_776668(0);
                  uVar23 = native_UnityEngine_Quaternion__get_identity_7628fc(0);
                  lVar8 = *plVar21;
                  if ((ulong)*(ushort *)(lVar8 + 0x12a) != 0) {
                    uVar17 = 0;
                    piVar19 = (int *)(*(long *)(lVar8 + 0xb0) + 8);
                    do {
                      if (*(long *)(piVar19 + -2) ==
                          _MG_BlocksEngine2_Block_I_BE2_Block_TypeInfo_12d4dd8) {
                        puVar6 = (undefined8 *)(lVar8 + (long)(*piVar19 + 3) * 0x10 + 0x138);
                        goto LAB_0056cfd4;
                      }
                      uVar17 = uVar17 + 1;
                      piVar19 = piVar19 + 4;
                    } while (uVar17 < *(ushort *)(lVar8 + 0x12a));
                  }
                  puVar6 = (undefined8 *)
                           native_sub_3c9b34(plVar21,
                                             _MG_BlocksEngine2_Block_I_BE2_Block_TypeInfo_12d4dd8,3)
                  ;
LAB_0056cfd4:
                  plVar13 = (long *)(*(code *)*puVar6)(plVar21,puVar6[1]);
                  if (plVar13 == (long *)0x0) goto LAB_0056db8c;
                  lVar8 = *plVar13;
                  if ((ulong)*(ushort *)(lVar8 + 0x12a) != 0) {
                    uVar17 = 0;
                    piVar19 = (int *)(*(long *)(lVar8 + 0xb0) + 8);
                    do {
                      if (*(long *)(piVar19 + -2) ==
                          _MG_BlocksEngine2_Block_I_BE2_BlockLayout_TypeInfo_12d4de0) {
                        puVar6 = (undefined8 *)(lVar8 + (long)(*piVar19 + 2) * 0x10 + 0x138);
                        goto LAB_0056d048;
                      }
                      uVar17 = uVar17 + 1;
                      piVar19 = piVar19 + 4;
                    } while (uVar17 < *(ushort *)(lVar8 + 0x12a));
                  }
                  puVar6 = (undefined8 *)
                           native_sub_3c9b34(plVar13,
                                             _MG_BlocksEngine2_Block_I_BE2_BlockLayout_TypeInfo_12d4de0
                                             ,2);
LAB_0056d048:
                  lVar8 = (*(code *)*puVar6)(plVar13,puVar6[1]);
                  if (lVar8 == 0) goto LAB_0056db8c;
                  if (*(int *)(lVar8 + 0x18) == 0) goto LAB_0056dbe4;
                  plVar13 = *(long **)(lVar8 + 0x20);
                  if (plVar13 == (long *)0x0) goto LAB_0056db8c;
                  lVar8 = *plVar13;
                  if ((ulong)*(ushort *)(lVar8 + 0x12a) != 0) {
                    uVar17 = 0;
                    piVar19 = (int *)(*(long *)(lVar8 + 0xb0) + 8);
                    do {
                      if (*(long *)(piVar19 + -2) ==
                          _MG_BlocksEngine2_Block_I_BE2_BlockSection_TypeInfo_12d4de8) {
                        puVar6 = (undefined8 *)(lVar8 + (long)(*piVar19 + 1) * 0x10 + 0x138);
                        goto LAB_0056d0c8;
                      }
                      uVar17 = uVar17 + 1;
                      piVar19 = piVar19 + 4;
                    } while (uVar17 < *(ushort *)(lVar8 + 0x12a));
                  }
                  puVar6 = (undefined8 *)
                           native_sub_3c9b34(plVar13,
                                             _MG_BlocksEngine2_Block_I_BE2_BlockSection_TypeInfo_12d4de8
                                             ,1);
LAB_0056d0c8:
                  plVar13 = (long *)(*(code *)*puVar6)(plVar13,puVar6[1]);
                  if (plVar13 == (long *)0x0) goto LAB_0056db8c;
                  lVar8 = *plVar13;
                  if ((ulong)*(ushort *)(lVar8 + 0x12a) != 0) {
                    uVar17 = 0;
                    piVar19 = (int *)(*(long *)(lVar8 + 0xb0) + 8);
                    do {
                      if (*(long *)(piVar19 + -2) ==
                          _MG_BlocksEngine2_Block_I_BE2_BlockSectionHeader_TypeInfo_12d4df8) {
                        puVar6 = (undefined8 *)(lVar8 + (long)*piVar19 * 0x10 + 0x138);
                        goto LAB_0056d138;
                      }
                      uVar17 = uVar17 + 1;
                      piVar19 = piVar19 + 4;
                    } while (uVar17 < *(ushort *)(lVar8 + 0x12a));
                  }
                  puVar6 = (undefined8 *)
                           native_sub_3c9b34(plVar13,
                                             _MG_BlocksEngine2_Block_I_BE2_BlockSectionHeader_TypeInfo_12d4df8
                                             ,0);
LAB_0056d138:
                  uVar11 = (*(code *)*puVar6)(plVar13,puVar6[1]);
                  if (((*(byte *)(_UnityEngine_Object_TypeInfo_12d54e0 + 0x133) >> 2 & 1) != 0) &&
                     (*(int *)(_UnityEngine_Object_TypeInfo_12d54e0 + 0xe0) == 0)) {
                    native_sub_4327ec(_UnityEngine_Object_TypeInfo_12d54e0);
                  }
                  lVar8 = native_UnityEngine_Object__Instantiate_BE2_Ins_DefineFunction__4a67c0
                                    (uVar7,uVar22,uVar11,
                                     _Method_UnityEngine_Object_Instantiate_GameObject____12e5a88);
                  if (lVar8 == 0) goto LAB_0056db8c;
                  lVar8 = native_UnityEngine_GameObject__GetComponentInChildren_BE2_BlockSectionHeader_Custom__4a22c0
                                    (lVar8,
                                     _Method_UnityEngine_GameObject_GetComponentInChildren_BE2_BlockSectionHeader_Custom____12e4b00
                                    );
                  lVar16 = *plVar10;
                  if ((ulong)*(ushort *)(lVar16 + 0x12a) != 0) {
                    uVar17 = 0;
                    piVar19 = (int *)(*(long *)(lVar16 + 0xb0) + 8);
                    do {
                      if (*(long *)(piVar19 + -2) ==
                          _MG_BlocksEngine2_Block_I_BE2_BlockSectionHeaderItem_TypeInfo_12d4e08) {
                        puVar6 = (undefined8 *)(lVar16 + (long)*piVar19 * 0x10 + 0x138);
                        goto LAB_0056d214;
                      }
                      uVar17 = uVar17 + 1;
                      piVar19 = piVar19 + 4;
                    } while (uVar17 < *(ushort *)(lVar16 + 0x12a));
                  }
                  puVar6 = (undefined8 *)
                           native_sub_3c9b34(plVar10,
                                             _MG_BlocksEngine2_Block_I_BE2_BlockSectionHeaderItem_TypeInfo_12d4e08
                                             ,0);
LAB_0056d214:
                  lVar16 = (*(code *)*puVar6)(plVar10,puVar6[1]);
                  if (((lVar16 == 0) ||
                      (lVar16 = native_UnityEngine_Component__GetComponentInChildren_Animation__49db98
                                          (lVar16,
                                           _Method_UnityEngine_Component_GetComponentInChildren_BE2_BlockSectionHeader_Custom____12e2c60
                                          ), lVar16 == 0)) || (lVar8 == 0)) goto LAB_0056db8c;
                  *(undefined8 *)(lVar8 + 0x20) = *(undefined8 *)(lVar16 + 0x20);
                  native_sub_4326e0((undefined8 *)(lVar8 + 0x20));
                }
              }
              else {
                lVar8 = native_MG_BlocksEngine2_EditorScript_BE2_Inspector__get_Instance_602da4(0);
                if (lVar8 == 0) goto LAB_0056db8c;
                uVar22 = *(undefined8 *)(lVar8 + 0x70);
                uVar7 = native_UnityEngine_Vector3__get_zero_776668(0);
                uVar23 = native_UnityEngine_Quaternion__get_identity_7628fc(0);
                lVar8 = *plVar21;
                if ((ulong)*(ushort *)(lVar8 + 0x12a) != 0) {
                  uVar17 = 0;
                  piVar19 = (int *)(*(long *)(lVar8 + 0xb0) + 8);
                  do {
                    if (*(long *)(piVar19 + -2) ==
                        _MG_BlocksEngine2_Block_I_BE2_Block_TypeInfo_12d4dd8) {
                      puVar6 = (undefined8 *)(lVar8 + (long)(*piVar19 + 3) * 0x10 + 0x138);
                      goto LAB_0056cdf4;
                    }
                    uVar17 = uVar17 + 1;
                    piVar19 = piVar19 + 4;
                  } while (uVar17 < *(ushort *)(lVar8 + 0x12a));
                }
                puVar6 = (undefined8 *)
                         native_sub_3c9b34(plVar21,
                                           _MG_BlocksEngine2_Block_I_BE2_Block_TypeInfo_12d4dd8,3);
LAB_0056cdf4:
                plVar10 = (long *)(*(code *)*puVar6)(plVar21,puVar6[1]);
                if (plVar10 == (long *)0x0) goto LAB_0056db8c;
                lVar8 = *plVar10;
                if ((ulong)*(ushort *)(lVar8 + 0x12a) != 0) {
                  uVar17 = 0;
                  piVar19 = (int *)(*(long *)(lVar8 + 0xb0) + 8);
                  do {
                    if (*(long *)(piVar19 + -2) ==
                        _MG_BlocksEngine2_Block_I_BE2_BlockLayout_TypeInfo_12d4de0) {
                      puVar6 = (undefined8 *)(lVar8 + (long)(*piVar19 + 2) * 0x10 + 0x138);
                      goto LAB_0056ce68;
                    }
                    uVar17 = uVar17 + 1;
                    piVar19 = piVar19 + 4;
                  } while (uVar17 < *(ushort *)(lVar8 + 0x12a));
                }
                puVar6 = (undefined8 *)
                         native_sub_3c9b34(plVar10,
                                           _MG_BlocksEngine2_Block_I_BE2_BlockLayout_TypeInfo_12d4de0
                                           ,2);
LAB_0056ce68:
                lVar8 = (*(code *)*puVar6)(plVar10,puVar6[1]);
                if (lVar8 == 0) goto LAB_0056db8c;
                if (*(int *)(lVar8 + 0x18) == 0) goto LAB_0056dbe4;
                plVar10 = *(long **)(lVar8 + 0x20);
                if (plVar10 == (long *)0x0) goto LAB_0056db8c;
                lVar8 = *plVar10;
                if ((ulong)*(ushort *)(lVar8 + 0x12a) != 0) {
                  uVar17 = 0;
                  piVar19 = (int *)(*(long *)(lVar8 + 0xb0) + 8);
                  do {
                    if (*(long *)(piVar19 + -2) ==
                        _MG_BlocksEngine2_Block_I_BE2_BlockSection_TypeInfo_12d4de8) {
                      puVar6 = (undefined8 *)(lVar8 + (long)(*piVar19 + 1) * 0x10 + 0x138);
                      goto LAB_0056cee8;
                    }
                    uVar17 = uVar17 + 1;
                    piVar19 = piVar19 + 4;
                  } while (uVar17 < *(ushort *)(lVar8 + 0x12a));
                }
                puVar6 = (undefined8 *)
                         native_sub_3c9b34(plVar10,
                                           _MG_BlocksEngine2_Block_I_BE2_BlockSection_TypeInfo_12d4de8
                                           ,1);
LAB_0056cee8:
                plVar10 = (long *)(*(code *)*puVar6)(plVar10,puVar6[1]);
                if (plVar10 == (long *)0x0) goto LAB_0056db8c;
                lVar8 = *plVar10;
                if ((ulong)*(ushort *)(lVar8 + 0x12a) != 0) {
                  uVar17 = 0;
                  piVar19 = (int *)(*(long *)(lVar8 + 0xb0) + 8);
                  do {
                    if (*(long *)(piVar19 + -2) ==
                        _MG_BlocksEngine2_Block_I_BE2_BlockSectionHeader_TypeInfo_12d4df8) {
                      puVar6 = (undefined8 *)(lVar8 + (long)*piVar19 * 0x10 + 0x138);
                      goto LAB_0056cf58;
                    }
                    uVar17 = uVar17 + 1;
                    piVar19 = piVar19 + 4;
                  } while (uVar17 < *(ushort *)(lVar8 + 0x12a));
                }
                puVar6 = (undefined8 *)
                         native_sub_3c9b34(plVar10,
                                           _MG_BlocksEngine2_Block_I_BE2_BlockSectionHeader_TypeInfo_12d4df8
                                           ,0);
LAB_0056cf58:
                uVar11 = (*(code *)*puVar6)(plVar10,puVar6[1]);
                if (((*(byte *)(_UnityEngine_Object_TypeInfo_12d54e0 + 0x133) >> 2 & 1) != 0) &&
                   (*(int *)(_UnityEngine_Object_TypeInfo_12d54e0 + 0xe0) == 0)) {
                  native_sub_4327ec(_UnityEngine_Object_TypeInfo_12d54e0);
                }
                native_UnityEngine_Object__Instantiate_BE2_Ins_DefineFunction__4a67c0
                          (uVar7,uVar22,uVar11,
                           _Method_UnityEngine_Object_Instantiate_GameObject____12e5a88);
              }
            }
            else {
              lVar8 = native_MG_BlocksEngine2_EditorScript_BE2_Inspector__get_Instance_602da4(0);
              if (lVar8 == 0) goto LAB_0056db8c;
              uVar11 = *(undefined8 *)(lVar8 + 0x78);
              uVar24 = native_UnityEngine_Vector3__get_zero_776668(0);
              uVar17 = uVar5;
              uVar7 = uVar4;
              uVar23 = native_UnityEngine_Quaternion__get_identity_7628fc(0);
              lVar8 = *plVar21;
              if ((ulong)*(ushort *)(lVar8 + 0x12a) != 0) {
                uVar18 = 0;
                piVar19 = (int *)(*(long *)(lVar8 + 0xb0) + 8);
                do {
                  if (*(long *)(piVar19 + -2) ==
                      _MG_BlocksEngine2_Block_I_BE2_Block_TypeInfo_12d4dd8) {
                    puVar6 = (undefined8 *)(lVar8 + (long)(*piVar19 + 3) * 0x10 + 0x138);
                    goto LAB_0056cb50;
                  }
                  uVar18 = uVar18 + 1;
                  piVar19 = piVar19 + 4;
                } while (uVar18 < *(ushort *)(lVar8 + 0x12a));
              }
              puVar6 = (undefined8 *)
                       native_sub_3c9b34(plVar21,
                                         _MG_BlocksEngine2_Block_I_BE2_Block_TypeInfo_12d4dd8,3);
LAB_0056cb50:
              plVar13 = (long *)(*(code *)*puVar6)(plVar21,puVar6[1]);
              if (plVar13 == (long *)0x0) goto LAB_0056db8c;
              lVar8 = *plVar13;
              if ((ulong)*(ushort *)(lVar8 + 0x12a) != 0) {
                uVar18 = 0;
                piVar19 = (int *)(*(long *)(lVar8 + 0xb0) + 8);
                do {
                  if (*(long *)(piVar19 + -2) ==
                      _MG_BlocksEngine2_Block_I_BE2_BlockLayout_TypeInfo_12d4de0) {
                    puVar6 = (undefined8 *)(lVar8 + (long)(*piVar19 + 2) * 0x10 + 0x138);
                    goto LAB_0056cbc4;
                  }
                  uVar18 = uVar18 + 1;
                  piVar19 = piVar19 + 4;
                } while (uVar18 < *(ushort *)(lVar8 + 0x12a));
              }
              puVar6 = (undefined8 *)
                       native_sub_3c9b34(plVar13,
                                         _MG_BlocksEngine2_Block_I_BE2_BlockLayout_TypeInfo_12d4de0,
                                         2);
LAB_0056cbc4:
              lVar8 = (*(code *)*puVar6)(plVar13,puVar6[1]);
              if (lVar8 == 0) goto LAB_0056db8c;
              if (*(int *)(lVar8 + 0x18) == 0) goto LAB_0056dbe4;
              plVar13 = *(long **)(lVar8 + 0x20);
              if (plVar13 == (long *)0x0) goto LAB_0056db8c;
              lVar8 = *plVar13;
              if ((ulong)*(ushort *)(lVar8 + 0x12a) != 0) {
                uVar18 = 0;
                piVar19 = (int *)(*(long *)(lVar8 + 0xb0) + 8);
                do {
                  if (*(long *)(piVar19 + -2) ==
                      _MG_BlocksEngine2_Block_I_BE2_BlockSection_TypeInfo_12d4de8) {
                    puVar6 = (undefined8 *)(lVar8 + (long)(*piVar19 + 1) * 0x10 + 0x138);
                    goto LAB_0056cc44;
                  }
                  uVar18 = uVar18 + 1;
                  piVar19 = piVar19 + 4;
                } while (uVar18 < *(ushort *)(lVar8 + 0x12a));
              }
              puVar6 = (undefined8 *)
                       native_sub_3c9b34(plVar13,
                                         _MG_BlocksEngine2_Block_I_BE2_BlockSection_TypeInfo_12d4de8
                                         ,1);
LAB_0056cc44:
              plVar13 = (long *)(*(code *)*puVar6)(plVar13,puVar6[1]);
              if (plVar13 == (long *)0x0) goto LAB_0056db8c;
              lVar8 = *plVar13;
              if ((ulong)*(ushort *)(lVar8 + 0x12a) != 0) {
                uVar18 = 0;
                piVar19 = (int *)(*(long *)(lVar8 + 0xb0) + 8);
                do {
                  if (*(long *)(piVar19 + -2) ==
                      _MG_BlocksEngine2_Block_I_BE2_BlockSectionHeader_TypeInfo_12d4df8) {
                    puVar6 = (undefined8 *)(lVar8 + (long)*piVar19 * 0x10 + 0x138);
                    goto LAB_0056ccb4;
                  }
                  uVar18 = uVar18 + 1;
                  piVar19 = piVar19 + 4;
                } while (uVar18 < *(ushort *)(lVar8 + 0x12a));
              }
              puVar6 = (undefined8 *)
                       native_sub_3c9b34(plVar13,
                                         _MG_BlocksEngine2_Block_I_BE2_BlockSectionHeader_TypeInfo_12d4df8
                                         ,0);
LAB_0056ccb4:
              uVar12 = (*(code *)*puVar6)(plVar13,puVar6[1]);
              if (((*(byte *)(_UnityEngine_Object_TypeInfo_12d54e0 + 0x133) >> 2 & 1) != 0) &&
                 (*(int *)(_UnityEngine_Object_TypeInfo_12d54e0 + 0xe0) == 0)) {
                native_sub_4327ec(_UnityEngine_Object_TypeInfo_12d54e0);
              }
              lVar8 = native_UnityEngine_Object__Instantiate_BE2_Ins_DefineFunction__4a67c0
                                (uVar24,uVar5,uVar4,uVar23,uVar17,uVar7,uVar22,uVar11,uVar12,
                                 _Method_UnityEngine_Object_Instantiate_GameObject____12e5a88);
              if (lVar8 == 0) goto LAB_0056db8c;
              plVar13 = (long *)native_UnityEngine_GameObject__GetComponent_BE2_BlockSectionHeader_Custom__4a2214
                                          (lVar8,
                                           _Method_UnityEngine_GameObject_GetComponent_TMP_Text____12e4a50
                                          );
              lVar8 = *plVar10;
              if ((ulong)*(ushort *)(lVar8 + 0x12a) != 0) {
                uVar17 = 0;
                piVar19 = (int *)(*(long *)(lVar8 + 0xb0) + 8);
                do {
                  if (*(long *)(piVar19 + -2) ==
                      _MG_BlocksEngine2_Block_I_BE2_BlockSectionHeaderItem_TypeInfo_12d4e08) {
                    puVar6 = (undefined8 *)(lVar8 + (long)*piVar19 * 0x10 + 0x138);
                    goto LAB_0056cd90;
                  }
                  uVar17 = uVar17 + 1;
                  piVar19 = piVar19 + 4;
                } while (uVar17 < *(ushort *)(lVar8 + 0x12a));
              }
              puVar6 = (undefined8 *)
                       native_sub_3c9b34(plVar10,
                                         _MG_BlocksEngine2_Block_I_BE2_BlockSectionHeaderItem_TypeInfo_12d4e08
                                         ,0);
LAB_0056cd90:
              lVar8 = (*(code *)*puVar6)(plVar10,puVar6[1]);
              if (((lVar8 == 0) ||
                  (plVar10 = (long *)native_UnityEngine_Component__GetComponent_ActiveAnimation__49daec
                                               (lVar8,
                                                _Method_UnityEngine_Component_GetComponent_TMP_Text____12e2b38
                                               ), plVar10 == (long *)0x0)) ||
                 (uVar22 = (**(code **)(*plVar10 + 0x548))
                                     (plVar10,*(undefined8 *)(*plVar10 + 0x550)),
                 plVar13 == (long *)0x0)) goto LAB_0056db8c;
              (**(code **)(*plVar13 + 0x558))(plVar13,uVar22,*(undefined8 *)(*plVar13 + 0x560));
            }
          }
          uVar14 = *(uint *)(lVar15 + 0x18);
          uVar20 = uVar20 + 1;
        } while ((int)uVar20 < (int)uVar14);
      }
      lVar15 = native_MG_BlocksEngine2_Core_BE2_ExecutionManager__get_Instance_564464();
      lVar8 = *plVar21;
      if ((ulong)*(ushort *)(lVar8 + 0x12a) != 0) {
        uVar5 = 0;
        piVar19 = (int *)(*(long *)(lVar8 + 0xb0) + 8);
        do {
          if (*(long *)(piVar19 + -2) == _MG_BlocksEngine2_Block_I_BE2_Block_TypeInfo_12d4dd8) {
            puVar6 = (undefined8 *)(lVar8 + (long)(*piVar19 + 4) * 0x10 + 0x138);
            goto LAB_0056d2cc;
          }
          uVar5 = uVar5 + 1;
          piVar19 = piVar19 + 4;
        } while (uVar5 < *(ushort *)(lVar8 + 0x12a));
      }
      puVar6 = (undefined8 *)
               native_sub_3c9b34(plVar21,_MG_BlocksEngine2_Block_I_BE2_Block_TypeInfo_12d4dd8,4);
LAB_0056d2cc:
      plVar10 = (long *)(*(code *)*puVar6)(plVar21,puVar6[1]);
      if (((*(byte *)(_MG_BlocksEngine2_Serializer_BE2_BlocksSerializer_TypeInfo_12d3998 + 0x133) >>
            2 & 1) != 0) &&
         (*(int *)(_MG_BlocksEngine2_Serializer_BE2_BlocksSerializer_TypeInfo_12d3998 + 0xe0) == 0))
      {
        native_sub_4327ec(_MG_BlocksEngine2_Serializer_BE2_BlocksSerializer_TypeInfo_12d3998);
      }
      if (plVar10 == (long *)0x0) {
LAB_0056d324:
        plVar10 = (long *)0x0;
      }
      else {
        if (*(byte *)(*plVar10 + 300) < *(byte *)(_BE2_Ins_FunctionBlock_TypeInfo_12d3a00 + 300))
        goto LAB_0056d324;
        if (*(long *)(*(long *)(*plVar10 + 200) +
                      (ulong)*(byte *)(_BE2_Ins_FunctionBlock_TypeInfo_12d3a00 + 300) * 8 + -8) !=
            _BE2_Ins_FunctionBlock_TypeInfo_12d3a00) {
          plVar10 = (long *)0x0;
        }
      }
      uVar4 = native_MG_BlocksEngine2_Serializer_BE2_BlocksSerializer__C_InitializeFunctionInstruction_5733c4
                        (plVar10,plVar9);
      if (lVar15 == 0) goto LAB_0056db8c;
      native_UnityEngine_MonoBehaviour__StartCoroutine_8e9174(lVar15,uVar4,0);
    }
  }
  if ((*(long *)(param_5 + 0x30) != 0) &&
     (uVar5 = native_System_String__op_Inequality_afbbb4
                        (*(long *)(param_5 + 0x30),_StringLiteral__12eaac0,0), (uVar5 & 1) != 0)) {
    lVar15 = *plVar21;
    if ((ulong)*(ushort *)(lVar15 + 0x12a) != 0) {
      uVar5 = 0;
      piVar19 = (int *)(*(long *)(lVar15 + 0xb0) + 8);
      do {
        if (*(long *)(piVar19 + -2) == _MG_BlocksEngine2_Block_I_BE2_Block_TypeInfo_12d4dd8) {
          puVar6 = (undefined8 *)(lVar15 + (long)*piVar19 * 0x10 + 0x138);
          goto LAB_0056d3d8;
        }
        uVar5 = uVar5 + 1;
        piVar19 = piVar19 + 4;
      } while (uVar5 < *(ushort *)(lVar15 + 0x12a));
    }
    puVar6 = (undefined8 *)
             native_sub_3c9b34(plVar21,_MG_BlocksEngine2_Block_I_BE2_Block_TypeInfo_12d4dd8,0);
LAB_0056d3d8:
    lVar15 = (*(code *)*puVar6)(plVar21,puVar6[1]);
    if (((lVar15 == 0) ||
        (lVar15 = native_UnityEngine_Transform__GetChild_772ef0(lVar15,0,0), lVar15 == 0)) ||
       (lVar15 = native_UnityEngine_Transform__GetChild_772ef0(lVar15,0,0), lVar15 == 0))
    goto LAB_0056db8c;
    uVar4 = native_UnityEngine_Transform__GetChild_772ef0(lVar15,0,0);
    lVar15 = native_MG_BlocksEngine2_Utils_BE2_Text__GetBE2Text_610e74(uVar4,0);
    if (lVar15 == 0) goto LAB_0056db8c;
    native_MG_BlocksEngine2_Utils_BE2_Text__set_text_610ef8
              (lVar15,*(undefined8 *)(param_5 + 0x38),0);
    uVar4 = *(undefined8 *)(param_5 + 0x30);
    if (((*(byte *)(_System_Type_TypeInfo_12d6340 + 0x133) >> 2 & 1) != 0) &&
       (*(int *)(_System_Type_TypeInfo_12d6340 + 0xe0) == 0)) {
      native_sub_4327ec();
    }
    uVar4 = native_sub_43294c(_Method_System_Type_GetType___12e75f8,uVar4,
                              _Method_MG_BlocksEngine2_Serializer_BE2_BlocksSerializer_SerializableToBlock___12e2130
                             );
    uVar5 = native_System_Type__op_Inequality_b118e0(uVar4,0,0);
    if ((uVar5 & 1) == 0) {
      uVar4 = native_System_String__Concat_afc654
                        (_StringLiteral_Variables_manager_of_type___12f2ed8,
                         *(undefined8 *)(param_5 + 0x30),_StringLiteral___was_not_found__12eb5f8,0);
      if (((*(byte *)(_UnityEngine_Debug_TypeInfo_12d4338 + 0x133) >> 2 & 1) != 0) &&
         (*(int *)(_UnityEngine_Debug_TypeInfo_12d4338 + 0xe0) == 0)) {
        native_sub_4327ec(_UnityEngine_Debug_TypeInfo_12d4338);
      }
      native_UnityEngine_Debug__Log_8dc36c(uVar4,0);
    }
    else {
      if (((*(byte *)(_UnityEngine_Object_TypeInfo_12d54e0 + 0x133) >> 2 & 1) != 0) &&
         (*(int *)(_UnityEngine_Object_TypeInfo_12d54e0 + 0xe0) == 0)) {
        native_sub_4327ec();
      }
      uVar4 = native_UnityEngine_Object__FindObjectOfType_8ea870(uVar4,0);
      uVar22 = *(undefined8 *)(param_5 + 0x38);
      lVar8 = native_sub_4327f8(uVar4,
                                _MG_BlocksEngine2_Environment_I_BE2_VariablesManager_TypeInfo_12d4e60
                               );
      lVar15 = _MG_BlocksEngine2_Environment_I_BE2_VariablesManager_TypeInfo_12d4e60;
      if (lVar8 == 0) goto LAB_0056db8c;
      plVar9 = (long *)native_sub_4327f8(uVar4,
                                         _MG_BlocksEngine2_Environment_I_BE2_VariablesManager_TypeInfo_12d4e60
                                        );
      lVar8 = *plVar9;
      if ((ulong)*(ushort *)(lVar8 + 0x12a) != 0) {
        uVar5 = 0;
        piVar19 = (int *)(*(long *)(lVar8 + 0xb0) + 8);
        do {
          if (*(long *)(piVar19 + -2) == lVar15) {
            puVar6 = (undefined8 *)(lVar8 + (long)*piVar19 * 0x10 + 0x138);
            goto LAB_0056d590;
          }
          uVar5 = uVar5 + 1;
          piVar19 = piVar19 + 4;
        } while (uVar5 < *(ushort *)(lVar8 + 0x12a));
      }
      puVar6 = (undefined8 *)native_sub_3c9b34(plVar9,lVar15,0);
LAB_0056d590:
      (*(code *)*puVar6)(plVar9,uVar22,puVar6[1]);
    }
  }
  uVar5 = native_System_String__op_Equality_afc18c
                    (*(undefined8 *)(param_5 + 0x48),_StringLiteral_true_12f6790,0);
  if ((uVar5 & 1) != 0) {
    lVar15 = *plVar21;
    if ((ulong)*(ushort *)(lVar15 + 0x12a) != 0) {
      uVar5 = 0;
      piVar19 = (int *)(*(long *)(lVar15 + 0xb0) + 8);
      do {
        if (*(long *)(piVar19 + -2) == _MG_BlocksEngine2_Block_I_BE2_Block_TypeInfo_12d4dd8) {
          puVar6 = (undefined8 *)(lVar15 + (long)*piVar19 * 0x10 + 0x138);
          goto LAB_0056d618;
        }
        uVar5 = uVar5 + 1;
        piVar19 = piVar19 + 4;
      } while (uVar5 < *(ushort *)(lVar15 + 0x12a));
    }
    puVar6 = (undefined8 *)
             native_sub_3c9b34(plVar21,_MG_BlocksEngine2_Block_I_BE2_Block_TypeInfo_12d4dd8,0);
LAB_0056d618:
    lVar15 = (*(code *)*puVar6)(plVar21,puVar6[1]);
    if ((((lVar15 == 0) ||
         (lVar15 = native_UnityEngine_Transform__GetChild_772ef0(lVar15,0,0), lVar15 == 0)) ||
        (lVar15 = native_UnityEngine_Transform__GetChild_772ef0(lVar15,0,0), lVar15 == 0)) ||
       ((lVar15 = native_UnityEngine_Transform__GetChild_772ef0(lVar15,0,0), lVar15 == 0 ||
        (plVar9 = (long *)native_UnityEngine_Component__GetComponent_ActiveAnimation__49daec
                                    (lVar15,
                                     _Method_UnityEngine_Component_GetComponent_TMP_Text____12e2b38)
        , plVar9 == (long *)0x0)))) goto LAB_0056db8c;
    (**(code **)(*plVar9 + 0x558))
              (plVar9,*(undefined8 *)(param_5 + 0x38),*(undefined8 *)(*plVar9 + 0x560));
  }
  if (((*(byte *)(_MG_BlocksEngine2_Serializer_BE2_BlocksSerializer_TypeInfo_12d3998 + 0x133) >> 2 &
       1) != 0) &&
     (*(int *)(_MG_BlocksEngine2_Serializer_BE2_BlocksSerializer_TypeInfo_12d3998 + 0xe0) == 0)) {
    native_sub_4327ec();
  }
  **(int **)(_MG_BlocksEngine2_Serializer_BE2_BlocksSerializer_TypeInfo_12d3998 + 0xb8) =
       **(int **)(_MG_BlocksEngine2_Serializer_BE2_BlocksSerializer_TypeInfo_12d3998 + 0xb8) + 1;
  lVar15 = native_MG_BlocksEngine2_Core_BE2_ExecutionManager__get_Instance_564464();
  uVar4 = native_MG_BlocksEngine2_Serializer_BE2_BlocksSerializer__C_AddInputs_57331c
                    (plVar21,param_5,param_6);
  if (lVar15 != 0) {
    native_UnityEngine_MonoBehaviour__StartCoroutine_8e9174(lVar15,uVar4,0);
    lVar15 = *plVar21;
    if ((ulong)*(ushort *)(lVar15 + 0x12a) != 0) {
      uVar5 = 0;
      piVar19 = (int *)(*(long *)(lVar15 + 0xb0) + 8);
      do {
        if (*(long *)(piVar19 + -2) == _MG_BlocksEngine2_Block_I_BE2_Block_TypeInfo_12d4dd8) {
          puVar6 = (undefined8 *)(lVar15 + (long)(*piVar19 + 1) * 0x10 + 0x138);
          goto LAB_0056d740;
        }
        uVar5 = uVar5 + 1;
        piVar19 = piVar19 + 4;
      } while (uVar5 < *(ushort *)(lVar15 + 0x12a));
    }
    puVar6 = (undefined8 *)
             native_sub_3c9b34(plVar21,_MG_BlocksEngine2_Block_I_BE2_Block_TypeInfo_12d4dd8,1);
LAB_0056d740:
    iVar3 = (*(code *)*puVar6)(plVar21,puVar6[1]);
    if (iVar3 == 4) {
      lVar15 = *plVar21;
      if ((ulong)*(ushort *)(lVar15 + 0x12a) != 0) {
        uVar5 = 0;
        piVar19 = (int *)(*(long *)(lVar15 + 0xb0) + 8);
        do {
          if (*(long *)(piVar19 + -2) == _MG_BlocksEngine2_Block_I_BE2_Block_TypeInfo_12d4dd8) {
            puVar6 = (undefined8 *)(lVar15 + (long)(*piVar19 + 1) * 0x10 + 0x138);
            goto LAB_0056d7b4;
          }
          uVar5 = uVar5 + 1;
          piVar19 = piVar19 + 4;
        } while (uVar5 < *(ushort *)(lVar15 + 0x12a));
      }
      puVar6 = (undefined8 *)
               native_sub_3c9b34(plVar21,_MG_BlocksEngine2_Block_I_BE2_Block_TypeInfo_12d4dd8,1);
LAB_0056d7b4:
      iVar3 = (*(code *)*puVar6)(plVar21,puVar6[1]);
      if (iVar3 != 5) {
        lVar15 = native_MG_BlocksEngine2_Core_BE2_ExecutionManager__get_Instance_564464();
        lVar8 = *plVar21;
        if ((ulong)*(ushort *)(lVar8 + 0x12a) != 0) {
          uVar5 = 0;
          piVar19 = (int *)(*(long *)(lVar8 + 0xb0) + 8);
          do {
            if (*(long *)(piVar19 + -2) == _MG_BlocksEngine2_Block_I_BE2_Block_TypeInfo_12d4dd8) {
              puVar6 = (undefined8 *)(lVar8 + (long)(*piVar19 + 4) * 0x10 + 0x138);
              goto LAB_0056d830;
            }
            uVar5 = uVar5 + 1;
            piVar19 = piVar19 + 4;
          } while (uVar5 < *(ushort *)(lVar8 + 0x12a));
        }
        puVar6 = (undefined8 *)
                 native_sub_3c9b34(plVar21,_MG_BlocksEngine2_Block_I_BE2_Block_TypeInfo_12d4dd8,4);
LAB_0056d830:
        plVar9 = (long *)(*(code *)*puVar6)(plVar21,puVar6[1]);
        if (plVar9 != (long *)0x0) {
          lVar8 = *plVar9;
          if ((ulong)*(ushort *)(lVar8 + 0x12a) != 0) {
            uVar5 = 0;
            piVar19 = (int *)(*(long *)(lVar8 + 0xb0) + 8);
            do {
              if (*(long *)(piVar19 + -2) ==
                  _MG_BlocksEngine2_Block_Instruction_I_BE2_Instruction_TypeInfo_12d4e28) {
                puVar6 = (undefined8 *)(lVar8 + (long)*piVar19 * 0x10 + 0x138);
                goto LAB_0056d8a0;
              }
              uVar5 = uVar5 + 1;
              piVar19 = piVar19 + 4;
            } while (uVar5 < *(ushort *)(lVar8 + 0x12a));
          }
          puVar6 = (undefined8 *)
                   native_sub_3c9b34(plVar9,
                                     _MG_BlocksEngine2_Block_Instruction_I_BE2_Instruction_TypeInfo_12d4e28
                                     ,0);
LAB_0056d8a0:
          plVar9 = (long *)(*(code *)*puVar6)(plVar9,puVar6[1]);
          if (plVar9 != (long *)0x0) {
            lVar8 = *plVar9;
            if ((ulong)*(ushort *)(lVar8 + 0x12a) != 0) {
              uVar5 = 0;
              piVar19 = (int *)(*(long *)(lVar8 + 0xb0) + 8);
              do {
                if (*(long *)(piVar19 + -2) ==
                    _MG_BlocksEngine2_Block_Instruction_I_BE2_InstructionBase_TypeInfo_12d4e30) {
                  puVar6 = (undefined8 *)(lVar8 + (long)(*piVar19 + 4) * 0x10 + 0x138);
                  goto LAB_0056d914;
                }
                uVar5 = uVar5 + 1;
                piVar19 = piVar19 + 4;
              } while (uVar5 < *(ushort *)(lVar8 + 0x12a));
            }
            puVar6 = (undefined8 *)
                     native_sub_3c9b34(plVar9,
                                       _MG_BlocksEngine2_Block_Instruction_I_BE2_InstructionBase_TypeInfo_12d4e30
                                       ,4);
LAB_0056d914:
            uVar4 = (*(code *)*puVar6)(plVar9,puVar6[1]);
            lVar8 = *param_6;
            if ((ulong)*(ushort *)(lVar8 + 0x12a) != 0) {
              uVar5 = 0;
              piVar19 = (int *)(*(long *)(lVar8 + 0xb0) + 8);
              do {
                if (*(long *)(piVar19 + -2) ==
                    _MG_BlocksEngine2_Environment_I_BE2_ProgrammingEnv_TypeInfo_12d4e38) {
                  puVar6 = (undefined8 *)(lVar8 + (long)(*piVar19 + 2) * 0x10 + 0x138);
                  goto LAB_0056d97c;
                }
                uVar5 = uVar5 + 1;
                piVar19 = piVar19 + 4;
              } while (uVar5 < *(ushort *)(lVar8 + 0x12a));
            }
            puVar6 = (undefined8 *)
                     native_sub_3c9b34(param_6,
                                       _MG_BlocksEngine2_Environment_I_BE2_ProgrammingEnv_TypeInfo_12d4e38
                                       ,2);
LAB_0056d97c:
            uVar22 = (*(code *)*puVar6)(param_6,puVar6[1]);
            if (lVar15 != 0) {
              native_MG_BlocksEngine2_Core_BE2_ExecutionManager__AddToBlocksStackArray_56dd98
                        (lVar15,uVar4,uVar22);
              lVar15 = *plVar21;
              if ((ulong)*(ushort *)(lVar15 + 0x12a) != 0) {
                uVar5 = 0;
                piVar19 = (int *)(*(long *)(lVar15 + 0xb0) + 8);
                do {
                  if (*(long *)(piVar19 + -2) ==
                      _MG_BlocksEngine2_Block_I_BE2_Block_TypeInfo_12d4dd8) {
                    puVar6 = (undefined8 *)(lVar15 + (long)(*piVar19 + 4) * 0x10 + 0x138);
                    goto LAB_0056d9fc;
                  }
                  uVar5 = uVar5 + 1;
                  piVar19 = piVar19 + 4;
                } while (uVar5 < *(ushort *)(lVar15 + 0x12a));
              }
              puVar6 = (undefined8 *)
                       native_sub_3c9b34(plVar21,
                                         _MG_BlocksEngine2_Block_I_BE2_Block_TypeInfo_12d4dd8,4);
LAB_0056d9fc:
              plVar9 = (long *)(*(code *)*puVar6)(plVar21,puVar6[1]);
              if (plVar9 != (long *)0x0) {
                lVar15 = *plVar9;
                if ((ulong)*(ushort *)(lVar15 + 0x12a) != 0) {
                  uVar5 = 0;
                  piVar19 = (int *)(*(long *)(lVar15 + 0xb0) + 8);
                  do {
                    if (*(long *)(piVar19 + -2) ==
                        _MG_BlocksEngine2_Block_Instruction_I_BE2_Instruction_TypeInfo_12d4e28) {
                      puVar6 = (undefined8 *)(lVar15 + (long)*piVar19 * 0x10 + 0x138);
                      goto LAB_0056da64;
                    }
                    uVar5 = uVar5 + 1;
                    piVar19 = piVar19 + 4;
                  } while (uVar5 < *(ushort *)(lVar15 + 0x12a));
                }
                puVar6 = (undefined8 *)
                         native_sub_3c9b34(plVar9,
                                           _MG_BlocksEngine2_Block_Instruction_I_BE2_Instruction_TypeInfo_12d4e28
                                           ,0);
LAB_0056da64:
                plVar9 = (long *)(*(code *)*puVar6)(plVar9,puVar6[1]);
                if (plVar9 != (long *)0x0) {
                  lVar15 = *plVar9;
                  if ((ulong)*(ushort *)(lVar15 + 0x12a) != 0) {
                    uVar5 = 0;
                    piVar19 = (int *)(*(long *)(lVar15 + 0xb0) + 8);
                    do {
                      if (*(long *)(piVar19 + -2) ==
                          _MG_BlocksEngine2_Block_Instruction_I_BE2_InstructionBase_TypeInfo_12d4e30
                         ) {
                        puVar6 = (undefined8 *)(lVar15 + (long)(*piVar19 + 4) * 0x10 + 0x138);
                        goto LAB_0056dad0;
                      }
                      uVar5 = uVar5 + 1;
                      piVar19 = piVar19 + 4;
                    } while (uVar5 < *(ushort *)(lVar15 + 0x12a));
                  }
                  puVar6 = (undefined8 *)
                           native_sub_3c9b34(plVar9,
                                             _MG_BlocksEngine2_Block_Instruction_I_BE2_InstructionBase_TypeInfo_12d4e30
                                             ,4);
LAB_0056dad0:
                  plVar9 = (long *)(*(code *)*puVar6)(plVar9,puVar6[1]);
                  if (plVar9 != (long *)0x0) {
                    lVar15 = *plVar9;
                    if ((ulong)*(ushort *)(lVar15 + 0x12a) != 0) {
                      uVar5 = 0;
                      piVar19 = (int *)(*(long *)(lVar15 + 0xb0) + 8);
                      do {
                        if (*(long *)(piVar19 + -2) ==
                            _MG_BlocksEngine2_Core_I_BE2_BlocksStack_TypeInfo_12d4e10) {
                          puVar6 = (undefined8 *)(lVar15 + (long)(*piVar19 + 0xe) * 0x10 + 0x138);
                          goto LAB_0056db44;
                        }
                        uVar5 = uVar5 + 1;
                        piVar19 = piVar19 + 4;
                      } while (uVar5 < *(ushort *)(lVar15 + 0x12a));
                    }
                    puVar6 = (undefined8 *)
                             native_sub_3c9b34(plVar9,
                                               _MG_BlocksEngine2_Core_I_BE2_BlocksStack_TypeInfo_12d4e10
                                               ,0xe);
LAB_0056db44:
                    (*(code *)*puVar6)(plVar9,puVar6[1]);
                    goto LAB_0056db50;
                  }
                }
              }
            }
          }
        }
        goto LAB_0056db8c;
      }
    }
LAB_0056db50:
    native_UnityEngine_Resources__UnloadUnusedAssets_769574(0);
    return plVar21;
  }
LAB_0056db8c:
                    /* WARNING: Subroutine does not return */
  native_sub_432810();
}



/* MG_BlocksEngine2.Serializer.BE2_BlocksSerializer$$C_InitializeFunctionInstruction @ 0x5733c4
 * System_Collections_IEnumerator_o* MG_BlocksEngine2_Serializer_BE2_BlocksSerializer__C_InitializeFunctionInstruction (BE2_Ins_FunctionBlock_o* functionInstruction, BE2_Ins_DefineFunction_o* defineInstruction, const MethodInfo* method); */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* MG_BlocksEngine2.Serializer.BE2_BlocksSerializer$$C_InitializeFunctionInstruction
   System_Collections_IEnumerator_o*
   MG_BlocksEngine2_Serializer_BE2_BlocksSerializer__C_InitializeFunctionInstruction
   (BE2_Ins_FunctionBlock_o* functionInstruction, BE2_Ins_DefineFunction_o* defineInstruction, const
   MethodInfo* method); */

long native_MG_BlocksEngine2_Serializer_BE2_BlocksSerializer__C_InitializeFunctionInstruction_5733c4
               (undefined8 param_1,undefined8 param_2)

{
  long lVar1;
  
  if ((bRam000000000133ea8e & 1) == 0) {
    native_sub_43273c(&
                      MG_BlocksEngine2_Serializer_BE2_BlocksSerializer__C_InitializeFunctionInstruction_d__11_TypeInfo_12d6fd0
                     );
    bRam000000000133ea8e = 1;
  }
  lVar1 = native_sub_432808(
                           _MG_BlocksEngine2_Serializer_BE2_BlocksSerializer__C_InitializeFunctionInstruction_d__11_TypeInfo_12d6fd0
                           );
  native_MG_BlocksEngine2_Serializer_BE2_BlocksSerializer__C_InitializeFunctionInstruction_d__11___ctor_5463b4
            (lVar1,0,0);
  if (lVar1 != 0) {
    *(undefined8 *)(lVar1 + 0x20) = param_1;
    native_sub_4326e0((undefined8 *)(lVar1 + 0x20),param_1);
    *(undefined8 *)(lVar1 + 0x28) = param_2;
    native_sub_4326e0((undefined8 *)(lVar1 + 0x28),param_2);
    return lVar1;
  }
                    /* WARNING: Subroutine does not return */
  native_sub_432810();
}



/* MG_BlocksEngine2.Serializer.BE2_BlocksSerializer$$.cctor @ 0x573458
 * void MG_BlocksEngine2_Serializer_BE2_BlocksSerializer___cctor (const MethodInfo* method); */

/* MG_BlocksEngine2.Serializer.BE2_BlocksSerializer$$.cctor
   void MG_BlocksEngine2_Serializer_BE2_BlocksSerializer___cctor (const MethodInfo* method); */

void native_MG_BlocksEngine2_Serializer_BE2_BlocksSerializer___cctor_573458(void)

{
  return;
}


