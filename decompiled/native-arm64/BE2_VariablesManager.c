/* ARM64 IL2CPP native pseudocode from Ghidra.
 * Recovered implementation, not original C# source.
 * Function boundaries follow the IL2CPP method address table. */


/* MG_BlocksEngine2.Environment.BE2_VariablesManager$$Awake @ 0xdcea9c
 * void MG_BlocksEngine2_Environment_BE2_VariablesManager__Awake (MG_BlocksEngine2_Environment_BE2_VariablesManager_o* __this, const MethodInfo* method); */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* MG_BlocksEngine2.Environment.BE2_VariablesManager$$Awake
   void MG_BlocksEngine2_Environment_BE2_VariablesManager__Awake
   (MG_BlocksEngine2_Environment_BE2_VariablesManager_o* __this, const MethodInfo* method); */

void native_MG_BlocksEngine2_Environment_BE2_VariablesManager__Awake_dcea9c(long param_1)

{
  ulong *puVar1;
  char cVar2;
  bool bVar3;
  long *plVar4;
  undefined8 uVar5;
  
  if ((bRam0000000001346e1a & 1) == 0) {
    native_sub_43273c(&MG_BlocksEngine2_Environment_BE2_VariablesManager_TypeInfo_12d3a90);
    native_sub_43273c(&Method_System_Collections_Generic_Dictionary_string__string___ctor___12d98d8)
    ;
    native_sub_43273c(&System_Collections_Generic_Dictionary_string__string__TypeInfo_12d23c8);
    bRam0000000001346e1a = 1;
  }
  plVar4 = *(long **)(_MG_BlocksEngine2_Environment_BE2_VariablesManager_TypeInfo_12d3a90 + 0xb8);
  *plVar4 = param_1;
  native_sub_4326e0(plVar4,param_1);
  uVar5 = native_sub_432808(_System_Collections_Generic_Dictionary_string__string__TypeInfo_12d23c8)
  ;
  native_System_Collections_Generic_Dictionary_Action__LinkedListNode_Action_____ctor_cda13c
            (uVar5,_Method_System_Collections_Generic_Dictionary_string__string___ctor___12d98d8);
  *(undefined8 *)(param_1 + 0x20) = uVar5;
  if (iRam0000000001345318 != 0) {
    puVar1 = (ulong *)((param_1 + 0x20U >> 0x12 & 0x7fff) * 8 + 0x138ecd8);
    do {
      cVar2 = '\x01';
      bVar3 = (bool)ExclusiveMonitorPass(puVar1,0x10);
      if (bVar3) {
        *puVar1 = *puVar1 | 1L << (param_1 + 0x20U >> 0xc & 0x3f);
        cVar2 = ExclusiveMonitorsStatus();
      }
    } while (cVar2 != '\0');
  }
  return;
}



/* MG_BlocksEngine2.Environment.BE2_VariablesManager$$ContainsVariable @ 0xdc9e28
 * bool MG_BlocksEngine2_Environment_BE2_VariablesManager__ContainsVariable (MG_BlocksEngine2_Environment_BE2_VariablesManager_o* __this, System_String_o* variable, const MethodInfo* method); */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* MG_BlocksEngine2.Environment.BE2_VariablesManager$$ContainsVariable
   bool MG_BlocksEngine2_Environment_BE2_VariablesManager__ContainsVariable
   (MG_BlocksEngine2_Environment_BE2_VariablesManager_o* __this, System_String_o* variable, const
   MethodInfo* method); */

uint native_MG_BlocksEngine2_Environment_BE2_VariablesManager__ContainsVariable_dc9e28
               (long param_1,undefined8 param_2)

{
  ulong uVar1;
  
  if ((bRam0000000001346e1b & 1) == 0) {
    native_sub_43273c(&
                      Method_System_Collections_Generic_Dictionary_string__string__ContainsKey___12d98f8
                     );
    bRam0000000001346e1b = 1;
  }
  if (*(long *)(param_1 + 0x20) != 0) {
    if (*(long *)(param_1 + 0x20) != 0) {
      uVar1 = (*(code *)**(undefined8 **)
                          (*(long *)(*(long *)(
                                              _Method_System_Collections_Generic_Dictionary_string__string__ContainsKey___12d98f8
                                              + 0x18) + 0xc0) + 0x40))();
      return (uint)(uVar1 >> 0x1f) & 1 ^ 1;
    }
                    /* WARNING: Subroutine does not return */
    native_sub_432810(0,param_2);
  }
                    /* WARNING: Subroutine does not return */
  native_sub_432810();
}



/* MG_BlocksEngine2.Environment.BE2_VariablesManager$$AddOrUpdateVariable @ 0xdc9e8c
 * void MG_BlocksEngine2_Environment_BE2_VariablesManager__AddOrUpdateVariable (MG_BlocksEngine2_Environment_BE2_VariablesManager_o* __this, System_String_o* variable, System_String_o* value, const MethodInfo* method); */

/* WARNING: Removing unreachable block (ram,0x005797fc) */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* MG_BlocksEngine2.Environment.BE2_VariablesManager$$AddOrUpdateVariable
   void MG_BlocksEngine2_Environment_BE2_VariablesManager__AddOrUpdateVariable
   (MG_BlocksEngine2_Environment_BE2_VariablesManager_o* __this, System_String_o* variable,
   System_String_o* value, const MethodInfo* method); */

void native_MG_BlocksEngine2_Environment_BE2_VariablesManager__AddOrUpdateVariable_dc9e8c
               (long param_1,undefined8 param_2,undefined8 param_3)

{
  ulong uVar1;
  long lVar2;
  
  if ((bRam0000000001346e1c & 1) == 0) {
    native_sub_43273c(&Method_System_Collections_Generic_Dictionary_string__string__Add___12d98e8);
    native_sub_43273c(&
                      Method_System_Collections_Generic_Dictionary_string__string__ContainsKey___12d98f8
                     );
    native_sub_43273c(&
                      Method_System_Collections_Generic_Dictionary_string__string__set_Item___12d9930
                     );
    bRam0000000001346e1c = 1;
  }
  if (*(long *)(param_1 + 0x20) != 0) {
    uVar1 = native_System_Collections_Generic_Dictionary_Action__LinkedListNode_Action____ContainsKey_cda894
                      (*(long *)(param_1 + 0x20),param_2,
                       _Method_System_Collections_Generic_Dictionary_string__string__ContainsKey___12d98f8
                      );
    lVar2 = *(long *)(param_1 + 0x20);
    if (lVar2 != 0) {
      if ((uVar1 & 1) == 0) {
        native_System_Collections_Generic_Dictionary_Canvas__IndexedSet_Graphic____Add_cda620
                  (lVar2,param_2,param_3,
                   _Method_System_Collections_Generic_Dictionary_string__string__Add___12d98e8);
        lVar2 = native_MG_BlocksEngine2_Core_BE2_MainEventsManager__get_Instance_6001fc(0);
        if (lVar2 == 0) goto LAB_00dc9f80;
        native_MG_BlocksEngine2_Core_BE2_EventsManager__TriggerEvent_579794(lVar2,5,0);
      }
      else {
        native_System_Collections_Generic_Dictionary_Action__LinkedListNode_Action____set_Item_cda5f8
                  (lVar2,param_2,param_3,
                   _Method_System_Collections_Generic_Dictionary_string__string__set_Item___12d9930)
        ;
      }
      lVar2 = native_MG_BlocksEngine2_Core_BE2_MainEventsManager__get_Instance_6001fc(0);
      if (lVar2 != 0) {
        if ((bRam000000000133eaf8 & 1) == 0) {
          native_sub_43273c(&
                            Method_System_Collections_Generic_Dictionary_BE2EventTypes__UnityEvent__TryGetValue___12d8ea8
                            ,4,0);
          bRam000000000133eaf8 = 1;
        }
        if ((*(long *)(lVar2 + 0x10) != 0) &&
           (uVar1 = native_System_Collections_Generic_Dictionary_BE2EventTypes__UnityEvent___TryGetValue_c25318
                              (*(long *)(lVar2 + 0x10),4,&stack0xffffffffffffffd8,
                               _Method_System_Collections_Generic_Dictionary_BE2EventTypes__UnityEvent__TryGetValue___12d8ea8
                              ), (uVar1 & 1) == 0)) {
          return;
        }
                    /* WARNING: Subroutine does not return */
        native_sub_432810();
      }
    }
  }
LAB_00dc9f80:
                    /* WARNING: Subroutine does not return */
  native_sub_432810();
}



/* MG_BlocksEngine2.Environment.BE2_VariablesManager$$RemoveVariable @ 0xdcd654
 * void MG_BlocksEngine2_Environment_BE2_VariablesManager__RemoveVariable (MG_BlocksEngine2_Environment_BE2_VariablesManager_o* __this, System_String_o* variable, const MethodInfo* method); */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* MG_BlocksEngine2.Environment.BE2_VariablesManager$$RemoveVariable
   void MG_BlocksEngine2_Environment_BE2_VariablesManager__RemoveVariable
   (MG_BlocksEngine2_Environment_BE2_VariablesManager_o* __this, System_String_o* variable, const
   MethodInfo* method); */

void native_MG_BlocksEngine2_Environment_BE2_VariablesManager__RemoveVariable_dcd654
               (long param_1,undefined8 param_2)

{
  ulong uVar1;
  long lVar2;
  long lStack_28;
  
  if ((bRam0000000001346e1d & 1) == 0) {
    native_sub_43273c(&
                      Method_System_Collections_Generic_Dictionary_string__string__ContainsKey___12d98f8
                     );
    native_sub_43273c(&Method_System_Collections_Generic_Dictionary_string__string__Remove___12d9908
                     );
    bRam0000000001346e1d = 1;
  }
  if (*(long *)(param_1 + 0x20) != 0) {
    uVar1 = native_System_Collections_Generic_Dictionary_Action__LinkedListNode_Action____ContainsKey_cda894
                      (*(long *)(param_1 + 0x20),param_2,
                       _Method_System_Collections_Generic_Dictionary_string__string__ContainsKey___12d98f8
                      );
    if ((uVar1 & 1) != 0) {
      if (*(long *)(param_1 + 0x20) == 0) goto LAB_00dcd6f8;
      native_System_Collections_Generic_Dictionary_Action__LinkedListNode_Action____Remove_cdc08c
                (*(long *)(param_1 + 0x20),param_2,
                 _Method_System_Collections_Generic_Dictionary_string__string__Remove___12d9908);
    }
    lVar2 = native_MG_BlocksEngine2_Core_BE2_MainEventsManager__get_Instance_6001fc(0);
    if (lVar2 != 0) {
      if ((bRam000000000133eaf8 & 1) == 0) {
        native_sub_43273c(&
                          Method_System_Collections_Generic_Dictionary_BE2EventTypes__UnityEvent__TryGetValue___12d8ea8
                          ,5,0);
        bRam000000000133eaf8 = 1;
      }
      lStack_28 = 0;
      if (*(long *)(lVar2 + 0x10) != 0) {
        uVar1 = native_System_Collections_Generic_Dictionary_BE2EventTypes__UnityEvent___TryGetValue_c25318
                          (*(long *)(lVar2 + 0x10),5,&lStack_28,
                           _Method_System_Collections_Generic_Dictionary_BE2EventTypes__UnityEvent__TryGetValue___12d8ea8
                          );
        if ((uVar1 & 1) != 0) {
          if (lStack_28 == 0) goto LAB_00579814;
          native_UnityEngine_Events_UnityEvent__Invoke_773864(lStack_28,0);
        }
        return;
      }
LAB_00579814:
                    /* WARNING: Subroutine does not return */
      native_sub_432810();
    }
  }
LAB_00dcd6f8:
                    /* WARNING: Subroutine does not return */
  native_sub_432810();
}



/* MG_BlocksEngine2.Environment.BE2_VariablesManager$$GetVariableStringValue @ 0xdcd4d4
 * System_String_o* MG_BlocksEngine2_Environment_BE2_VariablesManager__GetVariableStringValue (MG_BlocksEngine2_Environment_BE2_VariablesManager_o* __this, System_String_o* variable, const MethodInfo* method); */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* MG_BlocksEngine2.Environment.BE2_VariablesManager$$GetVariableStringValue
   System_String_o* MG_BlocksEngine2_Environment_BE2_VariablesManager__GetVariableStringValue
   (MG_BlocksEngine2_Environment_BE2_VariablesManager_o* __this, System_String_o* variable, const
   MethodInfo* method); */

undefined8
native_MG_BlocksEngine2_Environment_BE2_VariablesManager__GetVariableStringValue_dcd4d4
          (long param_1,undefined8 param_2)

{
  ulong uVar1;
  undefined8 uVar2;
  
  if ((bRam0000000001346e1e & 1) == 0) {
    native_sub_43273c(&
                      Method_System_Collections_Generic_Dictionary_string__string__ContainsKey___12d98f8
                     );
    native_sub_43273c(&
                      Method_System_Collections_Generic_Dictionary_string__string__get_Item___12d9920
                     );
    native_sub_43273c(&StringLiteral__12eaac0);
    bRam0000000001346e1e = 1;
  }
  if (*(long *)(param_1 + 0x20) == 0) {
LAB_00dcd580:
                    /* WARNING: Subroutine does not return */
    native_sub_432810();
  }
  uVar1 = native_System_Collections_Generic_Dictionary_Action__LinkedListNode_Action____ContainsKey_cda894
                    (*(long *)(param_1 + 0x20),param_2,
                     _Method_System_Collections_Generic_Dictionary_string__string__ContainsKey___12d98f8
                    );
  uVar2 = _StringLiteral__12eaac0;
  if ((uVar1 & 1) != 0) {
    if (*(long *)(param_1 + 0x20) == 0) goto LAB_00dcd580;
    uVar2 = native_System_Collections_Generic_Dictionary_object__object___get_Item_cda55c
                      (*(long *)(param_1 + 0x20),param_2,
                       _Method_System_Collections_Generic_Dictionary_string__string__get_Item___12d9920
                      );
  }
  return uVar2;
}



/* MG_BlocksEngine2.Environment.BE2_VariablesManager$$GetVariableFloatValue @ 0xdceb3c
 * float MG_BlocksEngine2_Environment_BE2_VariablesManager__GetVariableFloatValue (MG_BlocksEngine2_Environment_BE2_VariablesManager_o* __this, System_String_o* variable, const MethodInfo* method); */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* MG_BlocksEngine2.Environment.BE2_VariablesManager$$GetVariableFloatValue
   float MG_BlocksEngine2_Environment_BE2_VariablesManager__GetVariableFloatValue
   (MG_BlocksEngine2_Environment_BE2_VariablesManager_o* __this, System_String_o* variable, const
   MethodInfo* method); */

undefined1  [16]
native_MG_BlocksEngine2_Environment_BE2_VariablesManager__GetVariableFloatValue_dceb3c
          (long param_1,undefined8 param_2)

{
  ulong uVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  undefined1 auVar4 [16];
  
  if ((bRam0000000001346e1f & 1) == 0) {
    native_sub_43273c(&System_Globalization_CultureInfo_TypeInfo_12d4068);
    native_sub_43273c(&
                      Method_System_Collections_Generic_Dictionary_string__string__ContainsKey___12d98f8
                     );
    native_sub_43273c(&
                      Method_System_Collections_Generic_Dictionary_string__string__get_Item___12d9920
                     );
    bRam0000000001346e1f = 1;
  }
  if (*(long *)(param_1 + 0x20) != 0) {
    uVar1 = native_System_Collections_Generic_Dictionary_Action__LinkedListNode_Action____ContainsKey_cda894
                      (*(long *)(param_1 + 0x20),param_2,
                       _Method_System_Collections_Generic_Dictionary_string__string__ContainsKey___12d98f8
                      );
    auVar4 = ZEXT816(0);
    if ((uVar1 & 1) != 0) {
      if (*(long *)(param_1 + 0x20) == 0) {
                    /* WARNING: Subroutine does not return */
        native_sub_432810();
      }
      uVar2 = native_System_Collections_Generic_Dictionary_object__object___get_Item_cda55c
                        (*(long *)(param_1 + 0x20),param_2,
                         _Method_System_Collections_Generic_Dictionary_string__string__get_Item___12d9920
                        );
      if (((*(byte *)(_System_Globalization_CultureInfo_TypeInfo_12d4068 + 0x133) >> 2 & 1) != 0) &&
         (*(int *)(_System_Globalization_CultureInfo_TypeInfo_12d4068 + 0xe0) == 0)) {
        native_sub_4327ec();
      }
      uVar3 = native_System_Globalization_CultureInfo__get_InvariantCulture_b2d3e8(0);
      auVar4 = native_System_Single__Parse_af8a18(uVar2,uVar3,0);
    }
    return auVar4;
  }
                    /* WARNING: Subroutine does not return */
  native_sub_432810();
}



/* MG_BlocksEngine2.Environment.BE2_VariablesManager$$GetVariableValues @ 0xdcecac
 * MG_BlocksEngine2_Block_BE2_InputValues_o* MG_BlocksEngine2_Environment_BE2_VariablesManager__GetVariableValues (MG_BlocksEngine2_Environment_BE2_VariablesManager_o* __this, System_String_o* variable, const MethodInfo* method); */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* MG_BlocksEngine2.Environment.BE2_VariablesManager$$GetVariableValues
   MG_BlocksEngine2_Block_BE2_InputValues_o*
   MG_BlocksEngine2_Environment_BE2_VariablesManager__GetVariableValues
   (MG_BlocksEngine2_Environment_BE2_VariablesManager_o* __this, System_String_o* variable, const
   MethodInfo* method); */

undefined8
native_MG_BlocksEngine2_Environment_BE2_VariablesManager__GetVariableValues_dcecac
          (long param_1,undefined8 param_2)

{
  ulong uVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  
  if ((bRam0000000001346e20 & 1) == 0) {
    native_sub_43273c(&MG_BlocksEngine2_Block_BE2_InputValues_TypeInfo_12d39f0);
    native_sub_43273c(&System_Globalization_CultureInfo_TypeInfo_12d4068);
    native_sub_43273c(&
                      Method_System_Collections_Generic_Dictionary_string__string__ContainsKey___12d98f8
                     );
    native_sub_43273c(&
                      Method_System_Collections_Generic_Dictionary_string__string__get_Item___12d9920
                     );
    native_sub_43273c(&StringLiteral__12eaac0);
    bRam0000000001346e20 = 1;
  }
  if (*(long *)(param_1 + 0x20) != 0) {
    uVar1 = native_System_Collections_Generic_Dictionary_Action__LinkedListNode_Action____ContainsKey_cda894
                      (*(long *)(param_1 + 0x20),param_2,
                       _Method_System_Collections_Generic_Dictionary_string__string__ContainsKey___12d98f8
                      );
    if ((uVar1 & 1) == 0) {
      uVar3 = native_sub_432808(_MG_BlocksEngine2_Block_BE2_InputValues_TypeInfo_12d39f0);
      uVar4 = 0;
      uVar2 = _StringLiteral__12eaac0;
    }
    else {
      if (*(long *)(param_1 + 0x20) == 0) goto LAB_00dcee08;
      uVar2 = native_System_Collections_Generic_Dictionary_object__object___get_Item_cda55c
                        (*(long *)(param_1 + 0x20),param_2,
                         _Method_System_Collections_Generic_Dictionary_string__string__get_Item___12d9920
                        );
      if (((*(byte *)(_System_Globalization_CultureInfo_TypeInfo_12d4068 + 0x133) >> 2 & 1) != 0) &&
         (*(int *)(_System_Globalization_CultureInfo_TypeInfo_12d4068 + 0xe0) == 0)) {
        native_sub_4327ec(_System_Globalization_CultureInfo_TypeInfo_12d4068);
      }
      uVar3 = native_System_Globalization_CultureInfo__get_InvariantCulture_b2d3e8(0);
      uVar4 = native_System_Single__Parse_af8a18(uVar2,uVar3,0);
      uVar3 = native_sub_432808(_MG_BlocksEngine2_Block_BE2_InputValues_TypeInfo_12d39f0);
    }
    native_MG_BlocksEngine2_Block_BE2_InputValues___ctor_6033d4(uVar4,uVar3,uVar2,0,0);
    return uVar3;
  }
LAB_00dcee08:
                    /* WARNING: Subroutine does not return */
  native_sub_432810();
}



/* MG_BlocksEngine2.Environment.BE2_VariablesManager$$CreateAndAddVarToPanel @ 0xdcee8c
 * void MG_BlocksEngine2_Environment_BE2_VariablesManager__CreateAndAddVarToPanel (MG_BlocksEngine2_Environment_BE2_VariablesManager_o* __this, System_String_o* varName, const MethodInfo* method); */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* MG_BlocksEngine2.Environment.BE2_VariablesManager$$CreateAndAddVarToPanel
   void MG_BlocksEngine2_Environment_BE2_VariablesManager__CreateAndAddVarToPanel
   (MG_BlocksEngine2_Environment_BE2_VariablesManager_o* __this, System_String_o* varName, const
   MethodInfo* method); */

void native_MG_BlocksEngine2_Environment_BE2_VariablesManager__CreateAndAddVarToPanel_dcee8c
               (undefined1 param_1 [16],undefined8 param_2,undefined8 param_3,undefined8 param_4,
               long param_5,undefined8 param_6)

{
  uint uVar1;
  int iVar2;
  long lVar3;
  undefined8 uVar4;
  long lVar5;
  ulong uVar6;
  long lVar7;
  undefined8 uVar8;
  undefined8 uVar9;
  undefined8 uVar10;
  undefined8 uVar11;
  undefined8 uVar12;
  
  if ((bRam0000000001346e21 & 1) == 0) {
    native_sub_43273c(&UnityEngine_Object_TypeInfo_12d54e0);
    bRam0000000001346e21 = 1;
  }
  uVar8 = *(undefined8 *)(param_5 + 0x18);
  if (((*(byte *)(_UnityEngine_Object_TypeInfo_12d54e0 + 0x133) >> 2 & 1) != 0) &&
     (*(int *)(_UnityEngine_Object_TypeInfo_12d54e0 + 0xe0) == 0)) {
    native_sub_4327ec();
  }
  uVar6 = native_UnityEngine_Object__op_Implicit_8e1b98(uVar8,0);
  if ((uVar6 & 1) != 0) {
    lVar7 = *(long *)(param_5 + 0x18);
    if (lVar7 == 0) {
                    /* WARNING: Subroutine does not return */
      native_sub_432810();
    }
    if ((bRam0000000001346de3 & 1) == 0) {
      native_sub_43273c(&MG_BlocksEngine2_Environment_BE2_VariablesManager_TypeInfo_12d3a90);
      native_sub_43273c(&
                        Method_UnityEngine_Component_GetComponentInChildren_BE2_UI_SelectionBlock____12e2c70
                       );
      native_sub_43273c(&Method_UnityEngine_Component_GetComponent_BE2_UI_VariableViewer____12e2980)
      ;
      native_sub_43273c(&Method_UnityEngine_Component_GetComponent_I_BE2_Block____12e2a08);
      native_sub_43273c(&Method_UnityEngine_Object_Instantiate_Transform____12e5a90);
      native_sub_43273c(&UnityEngine_Object_TypeInfo_12d54e0);
      native_sub_43273c(&StringLiteral_0_12eb8d8);
      bRam0000000001346de3 = 1;
    }
    if (**(long **)(_MG_BlocksEngine2_Environment_BE2_VariablesManager_TypeInfo_12d3a90 + 0xb8) != 0
       ) {
      uVar6 = native_MG_BlocksEngine2_Environment_BE2_VariablesManager__ContainsVariable_dc9e28
                        (**(long **)(
                                    _MG_BlocksEngine2_Environment_BE2_VariablesManager_TypeInfo_12d3a90
                                    + 0xb8),param_6);
      if ((uVar6 & 1) != 0) {
        return;
      }
      lVar3 = native_UnityEngine_Component__get_transform_8da62c(lVar7,0);
      if (((lVar3 != 0) &&
          (lVar3 = native_UnityEngine_Transform__get_parent_765eb0(lVar3,0), lVar3 != 0)) &&
         (lVar3 = native_UnityEngine_Component__get_gameObject_8da66c(lVar3,0), lVar3 != 0)) {
        uVar1 = native_UnityEngine_GameObject__get_activeSelf_8de6e8(lVar3,0);
        lVar3 = native_UnityEngine_Component__get_transform_8da62c(lVar7,0);
        if (((lVar3 != 0) &&
            (lVar3 = native_UnityEngine_Transform__get_parent_765eb0(lVar3,0), lVar3 != 0)) &&
           (lVar3 = native_UnityEngine_Component__get_gameObject_8da66c(lVar3,0), lVar3 != 0)) {
          native_UnityEngine_GameObject__SetActive_8de698(lVar3,1,0);
          uVar9 = *(undefined8 *)(lVar7 + 0x28);
          uVar10 = native_UnityEngine_Vector3__get_zero_776668(0);
          uVar8 = param_2;
          uVar12 = param_3;
          uVar11 = native_UnityEngine_Quaternion__get_identity_7628fc(0);
          lVar3 = native_UnityEngine_Component__get_transform_8da62c(lVar7,0);
          if (lVar3 != 0) {
            uVar4 = native_UnityEngine_Transform__get_parent_765eb0(lVar3,0);
            if (((*(byte *)(_UnityEngine_Object_TypeInfo_12d54e0 + 0x133) >> 2 & 1) != 0) &&
               (*(int *)(_UnityEngine_Object_TypeInfo_12d54e0 + 0xe0) == 0)) {
              native_sub_4327ec(_UnityEngine_Object_TypeInfo_12d54e0);
            }
            lVar3 = native_UnityEngine_Object__Instantiate_BE2_Ins_DefineFunction__4a67c0
                              (uVar10,param_2,param_3,uVar11,uVar8,uVar12,param_4,uVar9,uVar4,
                               _Method_UnityEngine_Object_Instantiate_Transform____12e5a90);
            lVar5 = native_UnityEngine_Component__get_transform_8da62c(lVar7,0);
            if ((lVar5 != 0) &&
               (iVar2 = native_UnityEngine_Transform__GetSiblingIndex_772b74(lVar5,0), lVar3 != 0))
            {
              native_UnityEngine_Transform__SetSiblingIndex_772b24(lVar3,iVar2 + 1,0);
              uVar8 = native_UnityEngine_Transform__get_localPosition_7717f4(lVar3,0);
              native_UnityEngine_Transform__get_localPosition_7717f4(lVar3,0);
              native_UnityEngine_Transform__set_localPosition_7718a4(uVar8,lVar3,0);
              native_UnityEngine_Vector3__get_zero_776668(0);
              native_UnityEngine_Transform__set_localEulerAngles_77194c(lVar3,0);
              lVar5 = native_UnityEngine_Transform__GetChild_772ef0(lVar3,0,0);
              if (lVar5 != 0) {
                native_UnityEngine_Component__GetComponent_ActiveAnimation__49daec
                          (lVar5,_Method_UnityEngine_Component_GetComponent_I_BE2_Block____12e2a08);
                lVar5 = native_UnityEngine_Component__GetComponentInChildren_Animation__49db98
                                  (lVar3,
                                   _Method_UnityEngine_Component_GetComponentInChildren_BE2_UI_SelectionBlock____12e2c70
                                  );
                if ((((lVar5 != 0) &&
                     (lVar5 = native_UnityEngine_Component__get_transform_8da62c(lVar5,0),
                     lVar5 != 0)) &&
                    (lVar5 = native_UnityEngine_Transform__GetChild_772ef0(lVar5,0,0), lVar5 != 0))
                   && (lVar5 = native_UnityEngine_Transform__GetChild_772ef0(lVar5,0,0), lVar5 != 0)
                   ) {
                  uVar8 = native_UnityEngine_Transform__GetChild_772ef0(lVar5,0,0);
                  lVar5 = native_MG_BlocksEngine2_Utils_BE2_Text__GetBE2Text_610e74(uVar8,0);
                  if (lVar5 != 0) {
                    native_MG_BlocksEngine2_Utils_BE2_Text__set_text_610ef8(lVar5,param_6,0);
                    if (**(long **)(
                                   _MG_BlocksEngine2_Environment_BE2_VariablesManager_TypeInfo_12d3a90
                                   + 0xb8) != 0) {
                      native_MG_BlocksEngine2_Environment_BE2_VariablesManager__AddOrUpdateVariable_dc9e8c
                                (**(long **)(
                                            _MG_BlocksEngine2_Environment_BE2_VariablesManager_TypeInfo_12d3a90
                                            + 0xb8),param_6,_StringLiteral_0_12eb8d8);
                      lVar3 = native_UnityEngine_Component__GetComponent_ActiveAnimation__49daec
                                        (lVar3,
                                         _Method_UnityEngine_Component_GetComponent_BE2_UI_VariableViewer____12e2980
                                        );
                      if (lVar3 != 0) {
                        native_MG_BlocksEngine2_UI_BE2_UI_VariableViewer__RefreshViewer_dc9f84();
                        lVar3 = native_MG_BlocksEngine2_UI_BE2_UI_BlocksSelectionViewer__get_Instance_dc60e0
                                          ();
                        if (lVar3 != 0) {
                          native_MG_BlocksEngine2_UI_BE2_UI_BlocksSelectionViewer__ForceRebuildLayout_dc69d0
                                    ();
                          lVar7 = native_UnityEngine_Component__get_transform_8da62c(lVar7,0);
                          if (((lVar7 != 0) &&
                              (lVar7 = native_UnityEngine_Transform__get_parent_765eb0(lVar7,0),
                              lVar7 != 0)) &&
                             (lVar7 = native_UnityEngine_Component__get_gameObject_8da66c(lVar7,0),
                             lVar7 != 0)) {
                            if (pcRam0000000001340bf8 == (code *)0x0) {
                              pcRam0000000001340bf8 = (code *)native_sub_4326f0(&UNK_00e2da67);
                            }
                    /* WARNING: Could not recover jumptable at 0x008de6e4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
                            (*pcRam0000000001340bf8)(lVar7,uVar1 & 1);
                            return;
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
                    /* WARNING: Subroutine does not return */
    native_sub_432810();
  }
  return;
}



/* MG_BlocksEngine2.Environment.BE2_VariablesManager$$.ctor @ 0xdcef28
 * void MG_BlocksEngine2_Environment_BE2_VariablesManager___ctor (MG_BlocksEngine2_Environment_BE2_VariablesManager_o* __this, const MethodInfo* method); */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* MG_BlocksEngine2.Environment.BE2_VariablesManager$$.ctor
   void MG_BlocksEngine2_Environment_BE2_VariablesManager___ctor
   (MG_BlocksEngine2_Environment_BE2_VariablesManager_o* __this, const MethodInfo* method); */

undefined1  [16]
native_MG_BlocksEngine2_Environment_BE2_VariablesManager___ctor_dcef28(ulong param_1)

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


