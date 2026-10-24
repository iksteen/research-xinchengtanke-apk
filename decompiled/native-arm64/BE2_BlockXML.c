/* ARM64 IL2CPP native pseudocode from Ghidra.
 * Recovered implementation, not original C# source.
 * Function boundaries follow the IL2CPP method address table. */


/* MG_BlocksEngine2.Serializer.BE2_BlockXML$$SBlockToXElement @ 0x570790
 * System_Xml_Linq_XElement_o* MG_BlocksEngine2_Serializer_BE2_BlockXML__SBlockToXElement (MG_BlocksEngine2_Serializer_BE2_SerializableBlock_o* serializableBlock, const MethodInfo* method); */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* MG_BlocksEngine2.Serializer.BE2_BlockXML$$SBlockToXElement
   System_Xml_Linq_XElement_o* MG_BlocksEngine2_Serializer_BE2_BlockXML__SBlockToXElement
   (MG_BlocksEngine2_Serializer_BE2_SerializableBlock_o* serializableBlock, const MethodInfo*
   method); */

long native_MG_BlocksEngine2_Serializer_BE2_BlockXML__SBlockToXElement_570790(long param_1)

{
  long lVar1;
  undefined8 uVar2;
  long lVar3;
  undefined8 uVar4;
  long lVar5;
  ulong uVar6;
  long lVar7;
  undefined8 uVar8;
  undefined8 uStack_d0;
  undefined8 uStack_c8;
  long lStack_c0;
  undefined8 uStack_b8;
  undefined4 uStack_b0;
  undefined4 uStack_a8;
  int iStack_a0;
  undefined8 uStack_98;
  undefined8 uStack_90;
  undefined8 uStack_88;
  undefined8 uStack_80;
  undefined8 uStack_78;
  long lStack_70;
  
  if ((bRam000000000133ea7e & 1) == 0) {
    native_sub_43273c(&
                      Method_System_Collections_Generic_List_Enumerator_DefineItem__Dispose___12da420
                     );
    native_sub_43273c(&
                      Method_System_Collections_Generic_List_Enumerator_BE2_SerializableSection__Dispose___12da3d8
                     );
    native_sub_43273c(&
                      Method_System_Collections_Generic_List_Enumerator_DefineItem__MoveNext___12da428
                     );
    native_sub_43273c(&
                      Method_System_Collections_Generic_List_Enumerator_BE2_SerializableSection__MoveNext___12da3e0
                     );
    native_sub_43273c(&
                      Method_System_Collections_Generic_List_Enumerator_BE2_SerializableSection__get_Current___12da3e8
                     );
    native_sub_43273c(&
                      Method_System_Collections_Generic_List_Enumerator_DefineItem__get_Current___12da430
                     );
    native_sub_43273c(&Method_System_Collections_Generic_List_DefineItem__GetEnumerator___12dc730);
    native_sub_43273c(&
                      Method_System_Collections_Generic_List_BE2_SerializableSection__GetEnumerator___12dc4d0
                     );
    native_sub_43273c(&UnityEngine_Vector3_TypeInfo_12d66f8);
    native_sub_43273c(&System_Xml_Linq_XElement_TypeInfo_12d6998);
    native_sub_43273c(&StringLiteral_defineID_12f43b8);
    native_sub_43273c(&StringLiteral_sections_12f5f90);
    native_sub_43273c(&StringLiteral_Block_12ec7c8);
    native_sub_43273c(&StringLiteral_blockName_12f3c10);
    native_sub_43273c(&StringLiteral_value_12f6a10);
    native_sub_43273c(&StringLiteral_varManagerName_12f6a50);
    native_sub_43273c(&StringLiteral_defineItems_12f43c0);
    native_sub_43273c(&StringLiteral_isLocalVar_12f4f40);
    native_sub_43273c(&StringLiteral_position_12f5c00);
    native_sub_43273c(&StringLiteral_Item_12ef260);
    native_sub_43273c(&StringLiteral_varName_12f6a58);
    native_sub_43273c(&StringLiteral_type_12f67a8);
    bRam000000000133ea7e = 1;
  }
  uStack_80 = 0;
  uStack_78 = 0;
  lStack_70 = 0;
  uStack_90 = 0;
  uStack_98 = 0;
  uStack_88 = 0;
  iStack_a0 = 0;
  uVar2 = native_System_Xml_Linq_XName__op_Implicit_d9c0f8(_StringLiteral_Block_12ec7c8,0);
  lVar3 = native_sub_432808(_System_Xml_Linq_XElement_TypeInfo_12d6998);
  native_System_Xml_Linq_XElement___ctor_d98608(lVar3,uVar2,0);
  uVar2 = native_System_Xml_Linq_XName__op_Implicit_d9c0f8(_StringLiteral_blockName_12f3c10,0);
  if (param_1 != 0) {
    uVar8 = *(undefined8 *)(param_1 + 0x10);
    uVar4 = native_sub_432808(_System_Xml_Linq_XElement_TypeInfo_12d6998);
    native_System_Xml_Linq_XElement___ctor_d9a508(uVar4,uVar2,uVar8,0);
    if (lVar3 != 0) {
      native_System_Xml_Linq_XContainer__Add_d967b4(lVar3,uVar4,0);
      uVar2 = native_System_Xml_Linq_XName__op_Implicit_d9c0f8(_StringLiteral_position_12f5c00,0);
      uStack_b8 = *(undefined8 *)(param_1 + 0x18);
      uStack_b0 = *(undefined4 *)(param_1 + 0x20);
      uVar4 = native_sub_4327fc(_UnityEngine_Vector3_TypeInfo_12d66f8,&uStack_b8);
      uVar8 = native_sub_432808(_System_Xml_Linq_XElement_TypeInfo_12d6998);
      native_System_Xml_Linq_XElement___ctor_d9a508(uVar8,uVar2,uVar4,0);
      native_System_Xml_Linq_XContainer__Add_d967b4(lVar3,uVar8,0);
      uVar2 = native_System_Xml_Linq_XName__op_Implicit_d9c0f8
                        (_StringLiteral_varManagerName_12f6a50,0);
      uVar8 = *(undefined8 *)(param_1 + 0x30);
      uVar4 = native_sub_432808(_System_Xml_Linq_XElement_TypeInfo_12d6998);
      native_System_Xml_Linq_XElement___ctor_d9a508(uVar4,uVar2,uVar8,0);
      native_System_Xml_Linq_XContainer__Add_d967b4(lVar3,uVar4,0);
      uVar2 = native_System_Xml_Linq_XName__op_Implicit_d9c0f8(_StringLiteral_varName_12f6a58,0);
      uVar8 = *(undefined8 *)(param_1 + 0x38);
      uVar4 = native_sub_432808(_System_Xml_Linq_XElement_TypeInfo_12d6998);
      native_System_Xml_Linq_XElement___ctor_d9a508(uVar4,uVar2,uVar8,0);
      native_System_Xml_Linq_XContainer__Add_d967b4(lVar3,uVar4,0);
      uVar2 = native_System_Xml_Linq_XName__op_Implicit_d9c0f8(_StringLiteral_defineID_12f43b8,0);
      uVar8 = *(undefined8 *)(param_1 + 0x40);
      uVar4 = native_sub_432808(_System_Xml_Linq_XElement_TypeInfo_12d6998);
      native_System_Xml_Linq_XElement___ctor_d9a508(uVar4,uVar2,uVar8,0);
      native_System_Xml_Linq_XContainer__Add_d967b4(lVar3,uVar4,0);
      uVar2 = native_System_Xml_Linq_XName__op_Implicit_d9c0f8(_StringLiteral_isLocalVar_12f4f40,0);
      uVar8 = *(undefined8 *)(param_1 + 0x48);
      uVar4 = native_sub_432808(_System_Xml_Linq_XElement_TypeInfo_12d6998);
      native_System_Xml_Linq_XElement___ctor_d9a508(uVar4,uVar2,uVar8,0);
      native_System_Xml_Linq_XContainer__Add_d967b4(lVar3,uVar4,0);
      uVar2 = native_System_Xml_Linq_XName__op_Implicit_d9c0f8(_StringLiteral_defineItems_12f43c0,0)
      ;
      lVar5 = native_sub_432808(_System_Xml_Linq_XElement_TypeInfo_12d6998);
      native_System_Xml_Linq_XElement___ctor_d98608(lVar5,uVar2,0);
      native_System_Xml_Linq_XContainer__Add_d967b4(lVar3,lVar5,0);
      if (*(long *)(param_1 + 0x50) != 0) {
        native_System_Collections_Generic_List_BE2_Op_FunctionLocalVariable___GetEnumerator_d414fc
                  (&uStack_d0,*(long *)(param_1 + 0x50),
                   _Method_System_Collections_Generic_List_DefineItem__GetEnumerator___12dc730);
        lStack_70 = lStack_c0;
        uStack_78 = uStack_c8;
        uStack_80 = uStack_d0;
        while (uVar6 = native_System_Collections_Generic_List_Enumerator_BE2_Op_FunctionLocalVariable___MoveNext_7e8f30
                                 (&uStack_80,
                                  _Method_System_Collections_Generic_List_Enumerator_DefineItem__MoveNext___12da428
                                 ), lVar1 = lStack_70, (uVar6 & 1) != 0) {
          uVar2 = native_System_Xml_Linq_XName__op_Implicit_d9c0f8(_StringLiteral_Item_12ef260,0);
          lVar7 = native_sub_432808(_System_Xml_Linq_XElement_TypeInfo_12d6998);
          native_System_Xml_Linq_XElement___ctor_d98608(lVar7,uVar2,0);
          if (lVar5 == 0) {
                    /* WARNING: Subroutine does not return */
            native_sub_432810();
          }
          native_System_Xml_Linq_XContainer__Add_d967b4(lVar5,lVar7,0);
          uVar2 = native_System_Xml_Linq_XName__op_Implicit_d9c0f8(_StringLiteral_type_12f67a8,0);
          if (lVar1 == 0) {
                    /* WARNING: Subroutine does not return */
            native_sub_432810();
          }
          uVar8 = *(undefined8 *)(lVar1 + 0x10);
          uVar4 = native_sub_432808(_System_Xml_Linq_XElement_TypeInfo_12d6998);
          native_System_Xml_Linq_XElement___ctor_d9a508(uVar4,uVar2,uVar8,0);
          if (lVar7 == 0) {
                    /* WARNING: Subroutine does not return */
            native_sub_432810();
          }
          native_System_Xml_Linq_XContainer__Add_d967b4(lVar7,uVar4,0);
          uVar2 = native_System_Xml_Linq_XName__op_Implicit_d9c0f8(_StringLiteral_value_12f6a10,0);
          uVar8 = *(undefined8 *)(lVar1 + 0x18);
          uVar4 = native_sub_432808(_System_Xml_Linq_XElement_TypeInfo_12d6998);
          native_System_Xml_Linq_XElement___ctor_d9a508(uVar4,uVar2,uVar8,0);
          native_System_Xml_Linq_XContainer__Add_d967b4(lVar7,uVar4,0);
        }
        uStack_a8 = 0x151;
        iStack_a0 = 1;
        native_System_Collections_Generic_List_Enumerator_BE2_Op_FunctionLocalVariable___Dispose_7e8f2c
                  (&uStack_80,
                   _Method_System_Collections_Generic_List_Enumerator_DefineItem__Dispose___12da420)
        ;
        iStack_a0 = 0;
        uVar2 = native_System_Xml_Linq_XName__op_Implicit_d9c0f8(_StringLiteral_sections_12f5f90,0);
        lVar5 = native_sub_432808(_System_Xml_Linq_XElement_TypeInfo_12d6998);
        native_System_Xml_Linq_XElement___ctor_d98608(lVar5,uVar2,0);
        native_System_Xml_Linq_XContainer__Add_d967b4(lVar3,lVar5,0);
        if (*(long *)(param_1 + 0x28) != 0) {
          native_System_Collections_Generic_List_BE2_Op_FunctionLocalVariable___GetEnumerator_d414fc
                    (&uStack_98,*(long *)(param_1 + 0x28),
                     _Method_System_Collections_Generic_List_BE2_SerializableSection__GetEnumerator___12dc4d0
                    );
          while( true ) {
            uVar6 = native_System_Collections_Generic_List_Enumerator_BE2_Op_FunctionLocalVariable___MoveNext_7e8f30
                              (&uStack_98,
                               _Method_System_Collections_Generic_List_Enumerator_BE2_SerializableSection__MoveNext___12da3e0
                              );
            if ((uVar6 & 1) == 0) {
              uStack_a8 = 0x1a6;
              iStack_a0 = iStack_a0 + 1;
              native_System_Collections_Generic_List_Enumerator_BE2_Op_FunctionLocalVariable___Dispose_7e8f2c
                        (&uStack_98,
                         _Method_System_Collections_Generic_List_Enumerator_BE2_SerializableSection__Dispose___12da3d8
                        );
              return lVar3;
            }
            uVar2 = native_MG_BlocksEngine2_Serializer_BE2_BlockXML__SSectionToXElement_570e88
                              (uStack_88);
            if (lVar5 == 0) break;
            native_System_Xml_Linq_XContainer__Add_d967b4(lVar5,uVar2,0);
          }
                    /* WARNING: Subroutine does not return */
          native_sub_432810(uVar2,uVar2);
        }
      }
    }
  }
                    /* WARNING: Subroutine does not return */
  native_sub_432810();
}



/* MG_BlocksEngine2.Serializer.BE2_BlockXML$$SSectionToXElement @ 0x570e88
 * System_Xml_Linq_XElement_o* MG_BlocksEngine2_Serializer_BE2_BlockXML__SSectionToXElement (MG_BlocksEngine2_Serializer_BE2_SerializableSection_o* serializableSection, const MethodInfo* method); */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* MG_BlocksEngine2.Serializer.BE2_BlockXML$$SSectionToXElement
   System_Xml_Linq_XElement_o* MG_BlocksEngine2_Serializer_BE2_BlockXML__SSectionToXElement
   (MG_BlocksEngine2_Serializer_BE2_SerializableSection_o* serializableSection, const MethodInfo*
   method); */

long native_MG_BlocksEngine2_Serializer_BE2_BlockXML__SSectionToXElement_570e88(long param_1)

{
  undefined8 uVar1;
  long lVar2;
  long lVar3;
  ulong uVar4;
  undefined8 uStack_a0;
  undefined8 uStack_98;
  undefined8 uStack_90;
  undefined4 uStack_88;
  int iStack_80;
  undefined8 uStack_78;
  undefined8 uStack_70;
  undefined8 uStack_68;
  undefined8 uStack_60;
  undefined8 uStack_58;
  undefined8 uStack_50;
  
  if ((bRam000000000133ea7f & 1) == 0) {
    native_sub_43273c(&
                      Method_System_Collections_Generic_List_Enumerator_BE2_SerializableBlock__Dispose___12da3a8
                     );
    native_sub_43273c(&
                      Method_System_Collections_Generic_List_Enumerator_BE2_SerializableInput__Dispose___12da3c0
                     );
    native_sub_43273c(&
                      Method_System_Collections_Generic_List_Enumerator_BE2_SerializableBlock__MoveNext___12da3b0
                     );
    native_sub_43273c(&
                      Method_System_Collections_Generic_List_Enumerator_BE2_SerializableInput__MoveNext___12da3c8
                     );
    native_sub_43273c(&
                      Method_System_Collections_Generic_List_Enumerator_BE2_SerializableInput__get_Current___12da3d0
                     );
    native_sub_43273c(&
                      Method_System_Collections_Generic_List_Enumerator_BE2_SerializableBlock__get_Current___12da3b8
                     );
    native_sub_43273c(&
                      Method_System_Collections_Generic_List_BE2_SerializableInput__GetEnumerator___12dc4b0
                     );
    native_sub_43273c(&
                      Method_System_Collections_Generic_List_BE2_SerializableBlock__GetEnumerator___12dc498
                     );
    native_sub_43273c(&System_Xml_Linq_XElement_TypeInfo_12d6998);
    native_sub_43273c(&StringLiteral_childBlocks_12f3e38);
    native_sub_43273c(&StringLiteral_inputs_12f4e18);
    native_sub_43273c(&StringLiteral_Section_12f0cf8);
    bRam000000000133ea7f = 1;
  }
  uStack_60 = 0;
  uStack_58 = 0;
  uStack_50 = 0;
  uStack_70 = 0;
  uStack_78 = 0;
  uStack_68 = 0;
  iStack_80 = 0;
  uVar1 = native_System_Xml_Linq_XName__op_Implicit_d9c0f8(_StringLiteral_Section_12f0cf8,0);
  lVar2 = native_sub_432808(_System_Xml_Linq_XElement_TypeInfo_12d6998);
  native_System_Xml_Linq_XElement___ctor_d98608(lVar2,uVar1,0);
  uVar1 = native_System_Xml_Linq_XName__op_Implicit_d9c0f8(_StringLiteral_childBlocks_12f3e38,0);
  lVar3 = native_sub_432808(_System_Xml_Linq_XElement_TypeInfo_12d6998);
  native_System_Xml_Linq_XElement___ctor_d98608(lVar3,uVar1,0);
  if (((lVar2 != 0) && (native_System_Xml_Linq_XContainer__Add_d967b4(lVar2,lVar3,0), param_1 != 0))
     && (*(long *)(param_1 + 0x10) != 0)) {
    native_System_Collections_Generic_List_BE2_Op_FunctionLocalVariable___GetEnumerator_d414fc
              (&uStack_a0,*(long *)(param_1 + 0x10),
               _Method_System_Collections_Generic_List_BE2_SerializableBlock__GetEnumerator___12dc498
              );
    uStack_50 = uStack_90;
    uStack_58 = uStack_98;
    uStack_60 = uStack_a0;
    while (uVar4 = native_System_Collections_Generic_List_Enumerator_BE2_Op_FunctionLocalVariable___MoveNext_7e8f30
                             (&uStack_60,
                              _Method_System_Collections_Generic_List_Enumerator_BE2_SerializableBlock__MoveNext___12da3b0
                             ), (uVar4 & 1) != 0) {
      uVar1 = native_MG_BlocksEngine2_Serializer_BE2_BlockXML__SBlockToXElement_570790(uStack_50);
      if (lVar3 == 0) {
                    /* WARNING: Subroutine does not return */
        native_sub_432810(uVar1,uVar1);
      }
      native_System_Xml_Linq_XContainer__Add_d967b4(lVar3,uVar1,0);
    }
    uStack_88 = 100;
    iStack_80 = 1;
    native_System_Collections_Generic_List_Enumerator_BE2_Op_FunctionLocalVariable___Dispose_7e8f2c
              (&uStack_60,
               _Method_System_Collections_Generic_List_Enumerator_BE2_SerializableBlock__Dispose___12da3a8
              );
    iStack_80 = 0;
    uVar1 = native_System_Xml_Linq_XName__op_Implicit_d9c0f8(_StringLiteral_inputs_12f4e18,0);
    lVar3 = native_sub_432808(_System_Xml_Linq_XElement_TypeInfo_12d6998);
    native_System_Xml_Linq_XElement___ctor_d98608(lVar3,uVar1,0);
    native_System_Xml_Linq_XContainer__Add_d967b4(lVar2,lVar3,0);
    if (*(long *)(param_1 + 0x18) != 0) {
      native_System_Collections_Generic_List_BE2_Op_FunctionLocalVariable___GetEnumerator_d414fc
                (&uStack_78,*(long *)(param_1 + 0x18),
                 _Method_System_Collections_Generic_List_BE2_SerializableInput__GetEnumerator___12dc4b0
                );
      while( true ) {
        uVar4 = native_System_Collections_Generic_List_Enumerator_BE2_Op_FunctionLocalVariable___MoveNext_7e8f30
                          (&uStack_78,
                           _Method_System_Collections_Generic_List_Enumerator_BE2_SerializableInput__MoveNext___12da3c8
                          );
        if ((uVar4 & 1) == 0) {
          uStack_88 = 0xb9;
          iStack_80 = iStack_80 + 1;
          native_System_Collections_Generic_List_Enumerator_BE2_Op_FunctionLocalVariable___Dispose_7e8f2c
                    (&uStack_78,
                     _Method_System_Collections_Generic_List_Enumerator_BE2_SerializableInput__Dispose___12da3c0
                    );
          return lVar2;
        }
        uVar1 = native_MG_BlocksEngine2_Serializer_BE2_BlockXML__SInputToXElement_571204(uStack_68);
        if (lVar3 == 0) break;
        native_System_Xml_Linq_XContainer__Add_d967b4(lVar3,uVar1,0);
      }
                    /* WARNING: Subroutine does not return */
      native_sub_432810(uVar1,uVar1);
    }
  }
                    /* WARNING: Subroutine does not return */
  native_sub_432810();
}



/* MG_BlocksEngine2.Serializer.BE2_BlockXML$$SInputToXElement @ 0x571204
 * System_Xml_Linq_XElement_o* MG_BlocksEngine2_Serializer_BE2_BlockXML__SInputToXElement (MG_BlocksEngine2_Serializer_BE2_SerializableInput_o* serializableInput, const MethodInfo* method); */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* MG_BlocksEngine2.Serializer.BE2_BlockXML$$SInputToXElement
   System_Xml_Linq_XElement_o* MG_BlocksEngine2_Serializer_BE2_BlockXML__SInputToXElement
   (MG_BlocksEngine2_Serializer_BE2_SerializableInput_o* serializableInput, const MethodInfo*
   method); */

long native_MG_BlocksEngine2_Serializer_BE2_BlockXML__SInputToXElement_571204(long param_1)

{
  undefined8 uVar1;
  long lVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  long lVar5;
  undefined1 auStack_44 [4];
  
  if ((bRam000000000133ea80 & 1) == 0) {
    native_sub_43273c(&bool_TypeInfo_12d3bd0);
    native_sub_43273c(&System_Xml_Linq_XElement_TypeInfo_12d6998);
    native_sub_43273c(&StringLiteral_Input_12ee888);
    native_sub_43273c(&StringLiteral_value_12f6a10);
    native_sub_43273c(&StringLiteral_operation_12f5b00);
    native_sub_43273c(&StringLiteral_isOperation_12f4f48);
    bRam000000000133ea80 = 1;
  }
  uVar1 = native_System_Xml_Linq_XName__op_Implicit_d9c0f8(_StringLiteral_Input_12ee888,0);
  lVar2 = native_sub_432808(_System_Xml_Linq_XElement_TypeInfo_12d6998);
  native_System_Xml_Linq_XElement___ctor_d98608(lVar2,uVar1,0);
  uVar1 = native_System_Xml_Linq_XName__op_Implicit_d9c0f8(_StringLiteral_isOperation_12f4f48,0);
  if (param_1 != 0) {
    auStack_44[0] = *(undefined1 *)(param_1 + 0x10);
    uVar3 = native_sub_4327fc(_bool_TypeInfo_12d3bd0,auStack_44);
    uVar4 = native_sub_432808(_System_Xml_Linq_XElement_TypeInfo_12d6998);
    native_System_Xml_Linq_XElement___ctor_d9a508(uVar4,uVar1,uVar3,0);
    if (lVar2 != 0) {
      native_System_Xml_Linq_XContainer__Add_d967b4(lVar2,uVar4,0);
      uVar1 = native_System_Xml_Linq_XName__op_Implicit_d9c0f8(_StringLiteral_value_12f6a10,0);
      uVar4 = *(undefined8 *)(param_1 + 0x18);
      uVar3 = native_sub_432808(_System_Xml_Linq_XElement_TypeInfo_12d6998);
      native_System_Xml_Linq_XElement___ctor_d9a508(uVar3,uVar1,uVar4,0);
      native_System_Xml_Linq_XContainer__Add_d967b4(lVar2,uVar3,0);
      if (*(char *)(param_1 + 0x10) != '\0') {
        uVar1 = native_System_Xml_Linq_XName__op_Implicit_d9c0f8(_StringLiteral_operation_12f5b00,0)
        ;
        lVar5 = native_sub_432808(_System_Xml_Linq_XElement_TypeInfo_12d6998);
        native_System_Xml_Linq_XElement___ctor_d98608(lVar5,uVar1,0);
        native_System_Xml_Linq_XContainer__Add_d967b4(lVar2,lVar5,0);
        uVar1 = native_MG_BlocksEngine2_Serializer_BE2_BlockXML__SBlockToXElement_570790
                          (*(undefined8 *)(param_1 + 0x20));
        if (lVar5 == 0) goto LAB_005713f8;
        native_System_Xml_Linq_XContainer__Add_d967b4(lVar5,uVar1,0);
      }
      return lVar2;
    }
  }
LAB_005713f8:
                    /* WARNING: Subroutine does not return */
  native_sub_432810();
}



/* MG_BlocksEngine2.Serializer.BE2_BlockXML$$XElementToSBlock @ 0x5713fc
 * MG_BlocksEngine2_Serializer_BE2_SerializableBlock_o* MG_BlocksEngine2_Serializer_BE2_BlockXML__XElementToSBlock (System_Xml_Linq_XElement_o* xBlock, const MethodInfo* method); */

/* WARNING: Removing unreachable block (ram,0x00571c90) */
/* WARNING: Removing unreachable block (ram,0x005719d0) */
/* WARNING: Removing unreachable block (ram,0x00571c80) */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* MG_BlocksEngine2.Serializer.BE2_BlockXML$$XElementToSBlock
   MG_BlocksEngine2_Serializer_BE2_SerializableBlock_o*
   MG_BlocksEngine2_Serializer_BE2_BlockXML__XElementToSBlock (System_Xml_Linq_XElement_o* xBlock,
   const MethodInfo* method); */

long native_MG_BlocksEngine2_Serializer_BE2_BlockXML__XElementToSBlock_5713fc
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
  ulong uVar10;
  int *piVar11;
  long lVar12;
  undefined4 uVar13;
  int aiStack_70 [4];
  
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
  if (((param_4 != 0) &&
      (lVar4 = native_System_Xml_Linq_XContainer__Element_d974f4(param_4,uVar3,0), lVar4 != 0)) &&
     (uVar3 = native_System_Xml_Linq_XElement__get_Value_d9ab9c(lVar4,0), lVar2 != 0)) {
    *(undefined8 *)(lVar2 + 0x10) = uVar3;
    native_sub_4326e0();
    uVar3 = native_System_Xml_Linq_XName__op_Implicit_d9c0f8(_StringLiteral_position_12f5c00,0);
    lVar4 = native_System_Xml_Linq_XContainer__Element_d974f4(param_4,uVar3,0);
    if (lVar4 != 0) {
      native_System_Xml_Linq_XElement__get_Value_d9ab9c(lVar4,0);
      uVar13 = native_MG_BlocksEngine2_Serializer_BE2_BlockXMLUtils__StringToVector3_571d24();
      *(undefined4 *)(lVar2 + 0x18) = uVar13;
      *(undefined4 *)(lVar2 + 0x1c) = param_2;
      *(undefined4 *)(lVar2 + 0x20) = param_3;
      uVar3 = native_System_Xml_Linq_XName__op_Implicit_d9c0f8
                        (_StringLiteral_varManagerName_12f6a50,0);
      lVar4 = native_System_Xml_Linq_XContainer__Element_d974f4(param_4,uVar3,0);
      uVar3 = 0;
      if (lVar4 != 0) {
        uVar3 = native_System_Xml_Linq_XElement__get_Value_d9ab9c();
      }
      *(undefined8 *)(lVar2 + 0x30) = uVar3;
      native_sub_4326e0();
      uVar3 = native_System_Xml_Linq_XName__op_Implicit_d9c0f8(_StringLiteral_varName_12f6a58,0);
      lVar4 = native_System_Xml_Linq_XContainer__Element_d974f4(param_4,uVar3,0);
      if (lVar4 != 0) {
        uVar3 = native_System_Xml_Linq_XElement__get_Value_d9ab9c(lVar4,0);
        *(undefined8 *)(lVar2 + 0x38) = uVar3;
        native_sub_4326e0();
        uVar3 = native_System_Xml_Linq_XName__op_Implicit_d9c0f8(_StringLiteral_defineID_12f43b8,0);
        lVar4 = native_System_Xml_Linq_XContainer__Element_d974f4(param_4,uVar3,0);
        if (lVar4 != 0) {
          uVar3 = native_System_Xml_Linq_XElement__get_Value_d9ab9c(lVar4,0);
          *(undefined8 *)(lVar2 + 0x40) = uVar3;
          native_sub_4326e0();
          uVar3 = native_System_Xml_Linq_XName__op_Implicit_d9c0f8
                            (_StringLiteral_isLocalVar_12f4f40,0);
          lVar4 = native_System_Xml_Linq_XContainer__Element_d974f4(param_4,uVar3,0);
          if (lVar4 != 0) {
            uVar3 = native_System_Xml_Linq_XElement__get_Value_d9ab9c(lVar4,0);
            *(undefined8 *)(lVar2 + 0x48) = uVar3;
            native_sub_4326e0();
            uVar3 = native_System_Xml_Linq_XName__op_Implicit_d9c0f8
                              (_StringLiteral_defineItems_12f43c0,0);
            lVar4 = native_System_Xml_Linq_XContainer__Element_d974f4(param_4,uVar3,0);
            uVar3 = native_System_Xml_Linq_XName__op_Implicit_d9c0f8(_StringLiteral_Item_12ef260,0);
            if ((lVar4 != 0) &&
               (plVar5 = (long *)native_System_Xml_Linq_XContainer__Elements_d975e4(lVar4,uVar3,0),
               plVar5 != (long *)0x0)) {
              lVar4 = *plVar5;
              if ((ulong)*(ushort *)(lVar4 + 0x12a) != 0) {
                uVar10 = 0;
                piVar11 = (int *)(*(long *)(lVar4 + 0xb0) + 8);
                do {
                  if (*(long *)(piVar11 + -2) ==
                      _System_Collections_Generic_IEnumerable_XElement__TypeInfo_12d27c8) {
                    puVar6 = (undefined8 *)(lVar4 + (long)*piVar11 * 0x10 + 0x138);
                    goto LAB_00571780;
                  }
                  uVar10 = uVar10 + 1;
                  piVar11 = piVar11 + 4;
                } while (uVar10 < *(ushort *)(lVar4 + 0x12a));
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
                  uVar10 = 0;
                  piVar11 = (int *)(*(long *)(lVar4 + 0xb0) + 8);
                  do {
                    if (*(long *)(piVar11 + -2) == _System_Collections_IEnumerator_TypeInfo_12d4b80)
                    {
                      puVar6 = (undefined8 *)(lVar4 + (long)*piVar11 * 0x10 + 0x138);
                      goto LAB_0057180c;
                    }
                    uVar10 = uVar10 + 1;
                    piVar11 = piVar11 + 4;
                  } while (uVar10 < *(ushort *)(lVar4 + 0x12a));
                }
                puVar6 = (undefined8 *)
                         native_sub_3c9b34(plVar5,_System_Collections_IEnumerator_TypeInfo_12d4b80,0
                                          );
LAB_0057180c:
                uVar10 = (*(code *)*puVar6)(plVar5,puVar6[1]);
                if ((uVar10 & 1) == 0) {
                  aiStack_70[0] = 0x130;
                  aiStack_70[2] = 1;
                  if (plVar5 == (long *)0x0) goto LAB_005719a4;
                  lVar4 = *plVar5;
                  if ((ulong)*(ushort *)(lVar4 + 0x12a) == 0) goto LAB_0057197c;
                  uVar10 = 0;
                  piVar11 = (int *)(*(long *)(lVar4 + 0xb0) + 8);
                  goto LAB_00571960;
                }
                lVar4 = *plVar5;
                if ((ulong)*(ushort *)(lVar4 + 0x12a) != 0) {
                  uVar10 = 0;
                  piVar11 = (int *)(*(long *)(lVar4 + 0xb0) + 8);
                  do {
                    if (*(long *)(piVar11 + -2) ==
                        _System_Collections_Generic_IEnumerator_XElement__TypeInfo_12d2828) {
                      puVar6 = (undefined8 *)(lVar4 + (long)*piVar11 * 0x10 + 0x138);
                      goto LAB_00571878;
                    }
                    uVar10 = uVar10 + 1;
                    piVar11 = piVar11 + 4;
                  } while (uVar10 < *(ushort *)(lVar4 + 0x12a));
                }
                puVar6 = (undefined8 *)
                         native_sub_3c9b34(plVar5,
                                           _System_Collections_Generic_IEnumerator_XElement__TypeInfo_12d2828
                                           ,0);
LAB_00571878:
                lVar4 = (*(code *)*puVar6)(plVar5,puVar6[1]);
                lVar12 = *(long *)(lVar2 + 0x50);
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
                if (lVar12 == 0) {
                    /* WARNING: Subroutine does not return */
                  native_sub_432810();
                }
                native_System_Collections_Generic_List_int_____Add_d40c00
                          (lVar12,uVar9,
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
    uVar10 = uVar10 + 1;
    piVar11 = piVar11 + 4;
    if (*(ushort *)(lVar4 + 0x12a) <= uVar10) break;
LAB_00571bdc:
    if (*(long *)(piVar11 + -2) == _System_IDisposable_TypeInfo_12d4b00) {
      puVar6 = (undefined8 *)(lVar4 + (long)*piVar11 * 0x10 + 0x138);
      goto LAB_00571c14;
    }
  }
LAB_00571bf8:
  puVar6 = (undefined8 *)native_sub_3c9b34(plVar5,_System_IDisposable_TypeInfo_12d4b00,0);
LAB_00571c14:
  (*(code *)*puVar6)(plVar5,puVar6[1]);
  return lVar2;
  while( true ) {
    uVar10 = uVar10 + 1;
    piVar11 = piVar11 + 4;
    if (*(ushort *)(lVar4 + 0x12a) <= uVar10) break;
LAB_00571960:
    if (*(long *)(piVar11 + -2) == _System_IDisposable_TypeInfo_12d4b00) {
      puVar6 = (undefined8 *)(lVar4 + (long)*piVar11 * 0x10 + 0x138);
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
  lVar4 = native_System_Xml_Linq_XContainer__Element_d974f4(param_4,uVar3,0);
  uVar3 = native_System_Xml_Linq_XName__op_Implicit_d9c0f8(_StringLiteral_Section_12f0cf8,0);
  if ((lVar4 != 0) &&
     (plVar5 = (long *)native_System_Xml_Linq_XContainer__Elements_d975e4(lVar4,uVar3,0),
     plVar5 != (long *)0x0)) {
    lVar4 = *plVar5;
    if ((ulong)*(ushort *)(lVar4 + 0x12a) != 0) {
      uVar10 = 0;
      piVar11 = (int *)(*(long *)(lVar4 + 0xb0) + 8);
      do {
        if (*(long *)(piVar11 + -2) ==
            _System_Collections_Generic_IEnumerable_XElement__TypeInfo_12d27c8) {
          puVar6 = (undefined8 *)(lVar4 + (long)*piVar11 * 0x10 + 0x138);
          goto LAB_00571a8c;
        }
        uVar10 = uVar10 + 1;
        piVar11 = piVar11 + 4;
      } while (uVar10 < *(ushort *)(lVar4 + 0x12a));
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
      lVar4 = *plVar5;
      if ((ulong)*(ushort *)(lVar4 + 0x12a) != 0) {
        uVar10 = 0;
        piVar11 = (int *)(*(long *)(lVar4 + 0xb0) + 8);
        do {
          if (*(long *)(piVar11 + -2) == _System_Collections_IEnumerator_TypeInfo_12d4b80) {
            puVar6 = (undefined8 *)(lVar4 + (long)*piVar11 * 0x10 + 0x138);
            goto LAB_00571b0c;
          }
          uVar10 = uVar10 + 1;
          piVar11 = piVar11 + 4;
        } while (uVar10 < *(ushort *)(lVar4 + 0x12a));
      }
      puVar6 = (undefined8 *)
               native_sub_3c9b34(plVar5,_System_Collections_IEnumerator_TypeInfo_12d4b80,0);
LAB_00571b0c:
      uVar10 = (*(code *)*puVar6)(plVar5,puVar6[1]);
      if ((uVar10 & 1) == 0) {
        aiStack_70[(int)(uint)!bVar1] = 0x183;
        aiStack_70[2] = aiStack_70[2] + 1;
        if (plVar5 == (long *)0x0) {
          return lVar2;
        }
        lVar4 = *plVar5;
        if ((ulong)*(ushort *)(lVar4 + 0x12a) == 0) goto LAB_00571bf8;
        uVar10 = 0;
        piVar11 = (int *)(*(long *)(lVar4 + 0xb0) + 8);
        goto LAB_00571bdc;
      }
      lVar4 = *plVar5;
      if ((ulong)*(ushort *)(lVar4 + 0x12a) != 0) {
        uVar10 = 0;
        piVar11 = (int *)(*(long *)(lVar4 + 0xb0) + 8);
        do {
          if (*(long *)(piVar11 + -2) ==
              _System_Collections_Generic_IEnumerator_XElement__TypeInfo_12d2828) {
            puVar6 = (undefined8 *)(lVar4 + (long)*piVar11 * 0x10 + 0x138);
            goto LAB_00571b70;
          }
          uVar10 = uVar10 + 1;
          piVar11 = piVar11 + 4;
        } while (uVar10 < *(ushort *)(lVar4 + 0x12a));
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



/* MG_BlocksEngine2.Serializer.BE2_BlockXML$$XElementToSSection @ 0x571e88
 * MG_BlocksEngine2_Serializer_BE2_SerializableSection_o* MG_BlocksEngine2_Serializer_BE2_BlockXML__XElementToSSection (System_Xml_Linq_XElement_o* xSection, const MethodInfo* method); */

/* WARNING: Removing unreachable block (ram,0x00572480) */
/* WARNING: Removing unreachable block (ram,0x00572470) */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* MG_BlocksEngine2.Serializer.BE2_BlockXML$$XElementToSSection
   MG_BlocksEngine2_Serializer_BE2_SerializableSection_o*
   MG_BlocksEngine2_Serializer_BE2_BlockXML__XElementToSSection (System_Xml_Linq_XElement_o*
   xSection, const MethodInfo* method); */

long native_MG_BlocksEngine2_Serializer_BE2_BlockXML__XElementToSSection_571e88(long param_1)

{
  bool bVar1;
  long lVar2;
  undefined8 uVar3;
  long lVar4;
  long *plVar5;
  undefined8 *puVar6;
  ulong uVar7;
  int *piVar8;
  int aiStack_60 [4];
  
  if ((bRam000000000133ea82 & 1) == 0) {
    native_sub_43273c(&MG_BlocksEngine2_Serializer_BE2_SerializableSection_TypeInfo_12d3a48);
    native_sub_43273c(&System_IDisposable_TypeInfo_12d4b00);
    native_sub_43273c(&System_Collections_Generic_IEnumerable_XElement__TypeInfo_12d27c8);
    native_sub_43273c(&System_Collections_Generic_IEnumerator_XElement__TypeInfo_12d2828);
    native_sub_43273c(&System_Collections_IEnumerator_TypeInfo_12d4b80);
    native_sub_43273c(&Method_System_Collections_Generic_List_BE2_SerializableBlock__Add___12dc490);
    native_sub_43273c(&Method_System_Collections_Generic_List_BE2_SerializableInput__Add___12dc4a8);
    native_sub_43273c(&StringLiteral_Input_12ee888);
    native_sub_43273c(&StringLiteral_Block_12ec7c8);
    native_sub_43273c(&StringLiteral_childBlocks_12f3e38);
    native_sub_43273c(&StringLiteral_inputs_12f4e18);
    bRam000000000133ea82 = 1;
  }
  aiStack_60[2] = 0;
  lVar2 = native_sub_432808(_MG_BlocksEngine2_Serializer_BE2_SerializableSection_TypeInfo_12d3a48);
  native_MG_BlocksEngine2_Serializer_BE2_SerializableSection___ctor_619074(lVar2,0);
  uVar3 = native_System_Xml_Linq_XName__op_Implicit_d9c0f8(_StringLiteral_childBlocks_12f3e38,0);
  if (param_1 != 0) {
    lVar4 = native_System_Xml_Linq_XContainer__Element_d974f4(param_1,uVar3,0);
    uVar3 = native_System_Xml_Linq_XName__op_Implicit_d9c0f8(_StringLiteral_Block_12ec7c8,0);
    if ((lVar4 != 0) &&
       (plVar5 = (long *)native_System_Xml_Linq_XContainer__Elements_d975e4(lVar4,uVar3,0),
       plVar5 != (long *)0x0)) {
      lVar4 = *plVar5;
      if ((ulong)*(ushort *)(lVar4 + 0x12a) != 0) {
        uVar7 = 0;
        piVar8 = (int *)(*(long *)(lVar4 + 0xb0) + 8);
        do {
          if (*(long *)(piVar8 + -2) ==
              _System_Collections_Generic_IEnumerable_XElement__TypeInfo_12d27c8) {
            puVar6 = (undefined8 *)(lVar4 + (long)*piVar8 * 0x10 + 0x138);
            goto LAB_0057201c;
          }
          uVar7 = uVar7 + 1;
          piVar8 = piVar8 + 4;
        } while (uVar7 < *(ushort *)(lVar4 + 0x12a));
      }
      puVar6 = (undefined8 *)
               native_sub_3c9b34(plVar5,
                                 _System_Collections_Generic_IEnumerable_XElement__TypeInfo_12d27c8,
                                 0);
LAB_0057201c:
      plVar5 = (long *)(*(code *)*puVar6)(plVar5,puVar6[1]);
      if (plVar5 == (long *)0x0) {
                    /* WARNING: Subroutine does not return */
        native_sub_432810();
      }
      do {
        lVar4 = *plVar5;
        if ((ulong)*(ushort *)(lVar4 + 0x12a) != 0) {
          uVar7 = 0;
          piVar8 = (int *)(*(long *)(lVar4 + 0xb0) + 8);
          do {
            if (*(long *)(piVar8 + -2) == _System_Collections_IEnumerator_TypeInfo_12d4b80) {
              puVar6 = (undefined8 *)(lVar4 + (long)*piVar8 * 0x10 + 0x138);
              goto LAB_0057209c;
            }
            uVar7 = uVar7 + 1;
            piVar8 = piVar8 + 4;
          } while (uVar7 < *(ushort *)(lVar4 + 0x12a));
        }
        puVar6 = (undefined8 *)
                 native_sub_3c9b34(plVar5,_System_Collections_IEnumerator_TypeInfo_12d4b80,0);
LAB_0057209c:
        uVar7 = (*(code *)*puVar6)(plVar5,puVar6[1]);
        if ((uVar7 & 1) == 0) {
          aiStack_60[0] = 0x59;
          aiStack_60[2] = 1;
          if (plVar5 == (long *)0x0) goto LAB_005721ac;
          lVar4 = *plVar5;
          if ((ulong)*(ushort *)(lVar4 + 0x12a) == 0) goto LAB_00572184;
          uVar7 = 0;
          piVar8 = (int *)(*(long *)(lVar4 + 0xb0) + 8);
          goto LAB_00572168;
        }
        lVar4 = *plVar5;
        if ((ulong)*(ushort *)(lVar4 + 0x12a) != 0) {
          uVar7 = 0;
          piVar8 = (int *)(*(long *)(lVar4 + 0xb0) + 8);
          do {
            if (*(long *)(piVar8 + -2) ==
                _System_Collections_Generic_IEnumerator_XElement__TypeInfo_12d2828) {
              puVar6 = (undefined8 *)(lVar4 + (long)*piVar8 * 0x10 + 0x138);
              goto LAB_00572100;
            }
            uVar7 = uVar7 + 1;
            piVar8 = piVar8 + 4;
          } while (uVar7 < *(ushort *)(lVar4 + 0x12a));
        }
        puVar6 = (undefined8 *)
                 native_sub_3c9b34(plVar5,
                                   _System_Collections_Generic_IEnumerator_XElement__TypeInfo_12d2828
                                   ,0);
LAB_00572100:
        (*(code *)*puVar6)(plVar5,puVar6[1]);
        uVar3 = native_MG_BlocksEngine2_Serializer_BE2_BlockXML__XElementToSBlock_5713fc();
        if (lVar2 == 0) {
                    /* WARNING: Subroutine does not return */
          native_sub_432810(uVar3,uVar3);
        }
        if (*(long *)(lVar2 + 0x10) == 0) {
                    /* WARNING: Subroutine does not return */
          native_sub_432810(0,uVar3);
        }
        native_System_Collections_Generic_List_int_____Add_d40c00
                  (*(long *)(lVar2 + 0x10),uVar3,
                   _Method_System_Collections_Generic_List_BE2_SerializableBlock__Add___12dc490);
      } while( true );
    }
  }
  goto LAB_00572468;
  while( true ) {
    uVar7 = uVar7 + 1;
    piVar8 = piVar8 + 4;
    if (*(ushort *)(lVar4 + 0x12a) <= uVar7) break;
LAB_005723d4:
    if (*(long *)(piVar8 + -2) == _System_IDisposable_TypeInfo_12d4b00) {
      puVar6 = (undefined8 *)(lVar4 + (long)*piVar8 * 0x10 + 0x138);
      goto LAB_0057240c;
    }
  }
LAB_005723f0:
  puVar6 = (undefined8 *)native_sub_3c9b34(plVar5,_System_IDisposable_TypeInfo_12d4b00,0);
LAB_0057240c:
  (*(code *)*puVar6)(plVar5,puVar6[1]);
  return lVar2;
  while( true ) {
    uVar7 = uVar7 + 1;
    piVar8 = piVar8 + 4;
    if (*(ushort *)(lVar4 + 0x12a) <= uVar7) break;
LAB_00572168:
    if (*(long *)(piVar8 + -2) == _System_IDisposable_TypeInfo_12d4b00) {
      puVar6 = (undefined8 *)(lVar4 + (long)*piVar8 * 0x10 + 0x138);
      goto LAB_005721a0;
    }
  }
LAB_00572184:
  puVar6 = (undefined8 *)native_sub_3c9b34(plVar5,_System_IDisposable_TypeInfo_12d4b00,0);
LAB_005721a0:
  (*(code *)*puVar6)(plVar5,puVar6[1]);
LAB_005721ac:
  bVar1 = aiStack_60[0] == 0x59;
  if (bVar1) {
    aiStack_60[2] = 0;
  }
  uVar3 = native_System_Xml_Linq_XName__op_Implicit_d9c0f8(_StringLiteral_inputs_12f4e18,0);
  lVar4 = native_System_Xml_Linq_XContainer__Element_d974f4(param_1,uVar3,0);
  uVar3 = native_System_Xml_Linq_XName__op_Implicit_d9c0f8(_StringLiteral_Input_12ee888,0);
  if ((lVar4 != 0) &&
     (plVar5 = (long *)native_System_Xml_Linq_XContainer__Elements_d975e4(lVar4,uVar3,0),
     plVar5 != (long *)0x0)) {
    lVar4 = *plVar5;
    if ((ulong)*(ushort *)(lVar4 + 0x12a) != 0) {
      uVar7 = 0;
      piVar8 = (int *)(*(long *)(lVar4 + 0xb0) + 8);
      do {
        if (*(long *)(piVar8 + -2) ==
            _System_Collections_Generic_IEnumerable_XElement__TypeInfo_12d27c8) {
          puVar6 = (undefined8 *)(lVar4 + (long)*piVar8 * 0x10 + 0x138);
          goto LAB_00572280;
        }
        uVar7 = uVar7 + 1;
        piVar8 = piVar8 + 4;
      } while (uVar7 < *(ushort *)(lVar4 + 0x12a));
    }
    puVar6 = (undefined8 *)
             native_sub_3c9b34(plVar5,
                               _System_Collections_Generic_IEnumerable_XElement__TypeInfo_12d27c8,0)
    ;
LAB_00572280:
    plVar5 = (long *)(*(code *)*puVar6)(plVar5,puVar6[1]);
    if (plVar5 == (long *)0x0) {
                    /* WARNING: Subroutine does not return */
      native_sub_432810();
    }
    do {
      lVar4 = *plVar5;
      if ((ulong)*(ushort *)(lVar4 + 0x12a) != 0) {
        uVar7 = 0;
        piVar8 = (int *)(*(long *)(lVar4 + 0xb0) + 8);
        do {
          if (*(long *)(piVar8 + -2) == _System_Collections_IEnumerator_TypeInfo_12d4b80) {
            puVar6 = (undefined8 *)(lVar4 + (long)*piVar8 * 0x10 + 0x138);
            goto LAB_00572300;
          }
          uVar7 = uVar7 + 1;
          piVar8 = piVar8 + 4;
        } while (uVar7 < *(ushort *)(lVar4 + 0x12a));
      }
      puVar6 = (undefined8 *)
               native_sub_3c9b34(plVar5,_System_Collections_IEnumerator_TypeInfo_12d4b80,0);
LAB_00572300:
      uVar7 = (*(code *)*puVar6)(plVar5,puVar6[1]);
      if ((uVar7 & 1) == 0) {
        aiStack_60[(int)(uint)!bVar1] = 0xac;
        aiStack_60[2] = aiStack_60[2] + 1;
        if (plVar5 == (long *)0x0) {
          return lVar2;
        }
        lVar4 = *plVar5;
        if ((ulong)*(ushort *)(lVar4 + 0x12a) == 0) goto LAB_005723f0;
        uVar7 = 0;
        piVar8 = (int *)(*(long *)(lVar4 + 0xb0) + 8);
        goto LAB_005723d4;
      }
      lVar4 = *plVar5;
      if ((ulong)*(ushort *)(lVar4 + 0x12a) != 0) {
        uVar7 = 0;
        piVar8 = (int *)(*(long *)(lVar4 + 0xb0) + 8);
        do {
          if (*(long *)(piVar8 + -2) ==
              _System_Collections_Generic_IEnumerator_XElement__TypeInfo_12d2828) {
            puVar6 = (undefined8 *)(lVar4 + (long)*piVar8 * 0x10 + 0x138);
            goto LAB_00572364;
          }
          uVar7 = uVar7 + 1;
          piVar8 = piVar8 + 4;
        } while (uVar7 < *(ushort *)(lVar4 + 0x12a));
      }
      puVar6 = (undefined8 *)
               native_sub_3c9b34(plVar5,
                                 _System_Collections_Generic_IEnumerator_XElement__TypeInfo_12d2828,
                                 0);
LAB_00572364:
      (*(code *)*puVar6)(plVar5,puVar6[1]);
      uVar3 = native_MG_BlocksEngine2_Serializer_BE2_BlockXML__XElementToSInput_5724fc();
      if (lVar2 == 0) {
                    /* WARNING: Subroutine does not return */
        native_sub_432810(uVar3,uVar3);
      }
      if (*(long *)(lVar2 + 0x18) == 0) {
                    /* WARNING: Subroutine does not return */
        native_sub_432810(0,uVar3);
      }
      native_System_Collections_Generic_List_int_____Add_d40c00
                (*(long *)(lVar2 + 0x18),uVar3,
                 _Method_System_Collections_Generic_List_BE2_SerializableInput__Add___12dc4a8);
    } while( true );
  }
LAB_00572468:
                    /* WARNING: Subroutine does not return */
  native_sub_432810();
}



/* MG_BlocksEngine2.Serializer.BE2_BlockXML$$XElementToSInput @ 0x5724fc
 * MG_BlocksEngine2_Serializer_BE2_SerializableInput_o* MG_BlocksEngine2_Serializer_BE2_BlockXML__XElementToSInput (System_Xml_Linq_XElement_o* xInput, const MethodInfo* method); */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* MG_BlocksEngine2.Serializer.BE2_BlockXML$$XElementToSInput
   MG_BlocksEngine2_Serializer_BE2_SerializableInput_o*
   MG_BlocksEngine2_Serializer_BE2_BlockXML__XElementToSInput (System_Xml_Linq_XElement_o* xInput,
   const MethodInfo* method); */

long native_MG_BlocksEngine2_Serializer_BE2_BlockXML__XElementToSInput_5724fc(long param_1)

{
  byte bVar1;
  long lVar2;
  undefined8 uVar3;
  long lVar4;
  
  if ((bRam000000000133ea83 & 1) == 0) {
    native_sub_43273c(&MG_BlocksEngine2_Serializer_BE2_SerializableInput_TypeInfo_12d3a40);
    native_sub_43273c(&StringLiteral_Block_12ec7c8);
    native_sub_43273c(&StringLiteral_value_12f6a10);
    native_sub_43273c(&StringLiteral_operation_12f5b00);
    native_sub_43273c(&StringLiteral_true_12f6790);
    native_sub_43273c(&StringLiteral_isOperation_12f4f48);
    bRam000000000133ea83 = 1;
  }
  lVar2 = native_sub_432808(_MG_BlocksEngine2_Serializer_BE2_SerializableInput_TypeInfo_12d3a40);
  native_MG_BlocksEngine2_Serializer_BE2_SerializableInput___ctor_61906c(lVar2,0);
  uVar3 = native_System_Xml_Linq_XName__op_Implicit_d9c0f8(_StringLiteral_isOperation_12f4f48,0);
  if ((param_1 != 0) &&
     (lVar4 = native_System_Xml_Linq_XContainer__Element_d974f4(param_1,uVar3,0), lVar4 != 0)) {
    uVar3 = native_System_Xml_Linq_XElement__get_Value_d9ab9c(lVar4,0);
    bVar1 = native_System_String__op_Equality_afc18c(uVar3,_StringLiteral_true_12f6790,0);
    if (lVar2 != 0) {
      *(byte *)(lVar2 + 0x10) = bVar1 & 1;
      uVar3 = native_System_Xml_Linq_XName__op_Implicit_d9c0f8(_StringLiteral_value_12f6a10,0);
      lVar4 = native_System_Xml_Linq_XContainer__Element_d974f4(param_1,uVar3,0);
      if (lVar4 != 0) {
        uVar3 = native_System_Xml_Linq_XElement__get_Value_d9ab9c(lVar4,0);
        *(undefined8 *)(lVar2 + 0x18) = uVar3;
        native_sub_4326e0((undefined8 *)(lVar2 + 0x18),uVar3);
        if (*(char *)(lVar2 + 0x10) != '\0') {
          uVar3 = native_System_Xml_Linq_XName__op_Implicit_d9c0f8
                            (_StringLiteral_operation_12f5b00,0);
          lVar4 = native_System_Xml_Linq_XContainer__Element_d974f4(param_1,uVar3,0);
          uVar3 = native_System_Xml_Linq_XName__op_Implicit_d9c0f8(_StringLiteral_Block_12ec7c8,0);
          if (lVar4 == 0) goto LAB_005726a4;
          native_System_Xml_Linq_XContainer__Element_d974f4(lVar4,uVar3,0);
          uVar3 = native_MG_BlocksEngine2_Serializer_BE2_BlockXML__XElementToSBlock_5713fc();
          *(undefined8 *)(lVar2 + 0x20) = uVar3;
          native_sub_4326e0();
        }
        return lVar2;
      }
    }
  }
LAB_005726a4:
                    /* WARNING: Subroutine does not return */
  native_sub_432810();
}


