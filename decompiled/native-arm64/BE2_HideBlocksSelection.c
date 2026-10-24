/* ARM64 IL2CPP native pseudocode from Ghidra.
 * Recovered implementation, not original C# source.
 * Function boundaries follow the IL2CPP method address table. */


/* MG_BlocksEngine2.Environment.BE2_HideBlocksSelection$$Start @ 0x5fd5ac
 * void MG_BlocksEngine2_Environment_BE2_HideBlocksSelection__Start (MG_BlocksEngine2_Environment_BE2_HideBlocksSelection_o* __this, const MethodInfo* method); */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* MG_BlocksEngine2.Environment.BE2_HideBlocksSelection$$Start
   void MG_BlocksEngine2_Environment_BE2_HideBlocksSelection__Start
   (MG_BlocksEngine2_Environment_BE2_HideBlocksSelection_o* __this, const MethodInfo* method); */

void native_MG_BlocksEngine2_Environment_BE2_HideBlocksSelection__Start_5fd5ac
               (undefined1 param_1 [16],undefined4 param_2,long param_3)

{
  undefined8 uVar1;
  long lVar2;
  long *plVar3;
  long lVar4;
  ulong uVar5;
  undefined8 *puVar6;
  long *plVar7;
  uint uVar8;
  int *piVar9;
  uint uVar10;
  undefined4 uVar11;
  undefined8 uStack_98;
  undefined8 uStack_90;
  long *plStack_88;
  undefined8 uStack_80;
  undefined8 uStack_78;
  long *plStack_70;
  
  if ((bRam000000000133edcd & 1) == 0) {
    native_sub_43273c(&
                      Method_MG_BlocksEngine2_Environment_BE2_HideBlocksSelection_HideBlocksSelection___12e2180
                     );
    native_sub_43273c(&
                      Method_MG_BlocksEngine2_Environment_BE2_HideBlocksSelection_ShowBlocksSelection___12e2188
                     );
    native_sub_43273c(&Method_UnityEngine_Component_GetComponentInParent_BE2_Canvas____12e2cf8);
    native_sub_43273c(&Method_UnityEngine_Component_GetComponent_Button____12e29a0);
    native_sub_43273c(&
                      Method_System_Collections_Generic_Dictionary_RectTransform__Vector3__Add___12d96b0
                     );
    native_sub_43273c(&
                      Method_System_Collections_Generic_List_Enumerator_I_BE2_ProgrammingEnv__Dispose___12da4f8
                     );
    native_sub_43273c(&
                      Method_System_Collections_Generic_List_Enumerator_I_BE2_ProgrammingEnv__MoveNext___12da500
                     );
    native_sub_43273c(&
                      Method_System_Collections_Generic_List_Enumerator_I_BE2_ProgrammingEnv__get_Current___12da508
                     );
    native_sub_43273c(&MG_BlocksEngine2_Environment_I_BE2_ProgrammingEnv_TypeInfo_12d4e38);
    native_sub_43273c(&
                      Method_System_Collections_Generic_List_I_BE2_ProgrammingEnv__GetEnumerator___12dc9f8
                     );
    native_sub_43273c(&Method_UnityEngine_Object_FindObjectsOfType_BE2_UI_SelectionButton____12e5a30
                     );
    native_sub_43273c(&UnityEngine_Object_TypeInfo_12d54e0);
    native_sub_43273c(&UnityEngine_RectTransform_TypeInfo_12d58f0);
    native_sub_43273c(&UnityEngine_Events_UnityAction_TypeInfo_12d65d0);
    bRam000000000133edcd = 1;
  }
  uStack_80 = 0;
  uStack_78 = 0;
  plStack_70 = (long *)0x0;
  uVar1 = native_UnityEngine_Component__GetComponentInParent_BE2_Canvas__49dc70
                    (param_3,
                     _Method_UnityEngine_Component_GetComponentInParent_BE2_Canvas____12e2cf8);
  *(undefined8 *)(param_3 + 0x18) = uVar1;
  native_sub_4326e0(param_3 + 0x18);
  if ((((*(long *)(param_3 + 0x18) != 0) &&
       (lVar2 = native_UnityEngine_Component__get_transform_8da62c(*(long *)(param_3 + 0x18),0),
       lVar2 != 0)) &&
      (plVar3 = (long *)native_UnityEngine_Transform__GetChild_772ef0(lVar2,0,0),
      plVar3 != (long *)0x0)) && (*plVar3 == _UnityEngine_RectTransform_TypeInfo_12d58f0)) {
    if (*plVar3 != _UnityEngine_RectTransform_TypeInfo_12d58f0) {
      plVar3 = (long *)0x0;
    }
    uVar11 = native_UnityEngine_RectTransform__get_anchoredPosition_764e18(plVar3,0);
    *(undefined4 *)(param_3 + 0x20) = uVar11;
    *(undefined4 *)(param_3 + 0x24) = param_2;
    *(undefined4 *)(param_3 + 0x28) = 0;
    lVar2 = native_UnityEngine_Component__GetComponent_ActiveAnimation__49daec
                      (param_3,_Method_UnityEngine_Component_GetComponent_Button____12e29a0);
    if (lVar2 != 0) {
      lVar2 = *(long *)(lVar2 + 0xf8);
      uVar1 = native_sub_432808(_UnityEngine_Events_UnityAction_TypeInfo_12d65d0);
      native_UnityEngine_Events_UnityAction___ctor_773130
                (uVar1,param_3,
                 _Method_MG_BlocksEngine2_Environment_BE2_HideBlocksSelection_HideBlocksSelection___12e2180
                 ,0);
      if (lVar2 != 0) {
        native_UnityEngine_Events_UnityEvent__AddListener_7734bc(lVar2,uVar1,0);
        if (((*(byte *)(_UnityEngine_Object_TypeInfo_12d54e0 + 0x133) >> 2 & 1) != 0) &&
           (*(int *)(_UnityEngine_Object_TypeInfo_12d54e0 + 0xe0) == 0)) {
          native_sub_4327ec();
        }
        lVar2 = native_UnityEngine_Object__FindObjectsOfType_BE2_Canvas__4a6368
                          (
                          _Method_UnityEngine_Object_FindObjectsOfType_BE2_UI_SelectionButton____12e5a30
                          );
        if (lVar2 != 0) {
          uVar8 = *(uint *)(lVar2 + 0x18);
          if (0 < (int)uVar8) {
            uVar10 = 0;
            do {
              if (uVar8 <= uVar10) {
                uVar1 = native_sub_43283c();
                    /* WARNING: Subroutine does not return */
                native_sub_4327dc(uVar1,0);
              }
              lVar4 = *(long *)(lVar2 + (long)(int)uVar10 * 8 + 0x20);
              if ((lVar4 == 0) ||
                 (lVar4 = native_UnityEngine_Component__GetComponent_ActiveAnimation__49daec
                                    (lVar4,
                                     _Method_UnityEngine_Component_GetComponent_Button____12e29a0),
                 lVar4 == 0)) goto LAB_005fda48;
              lVar4 = *(long *)(lVar4 + 0xf8);
              uVar1 = native_sub_432808(_UnityEngine_Events_UnityAction_TypeInfo_12d65d0);
              native_UnityEngine_Events_UnityAction___ctor_773130
                        (uVar1,param_3,
                         _Method_MG_BlocksEngine2_Environment_BE2_HideBlocksSelection_ShowBlocksSelection___12e2188
                         ,0);
              if (lVar4 == 0) goto LAB_005fda48;
              native_UnityEngine_Events_UnityEvent__AddListener_7734bc(lVar4,uVar1,0);
              uVar8 = *(uint *)(lVar2 + 0x18);
              uVar10 = uVar10 + 1;
            } while ((int)uVar10 < (int)uVar8);
          }
          lVar2 = native_MG_BlocksEngine2_Core_BE2_ExecutionManager__get_Instance_564464(0);
          if ((lVar2 != 0) && (*(long *)(lVar2 + 0x20) != 0)) {
            native_System_Collections_Generic_List_BE2_Op_FunctionLocalVariable___GetEnumerator_d414fc
                      (&uStack_98,*(long *)(lVar2 + 0x20),
                       _Method_System_Collections_Generic_List_I_BE2_ProgrammingEnv__GetEnumerator___12dc9f8
                      );
            plStack_70 = plStack_88;
            uStack_78 = uStack_90;
            uStack_80 = uStack_98;
            do {
              uVar5 = native_System_Collections_Generic_List_Enumerator_BE2_Op_FunctionLocalVariable___MoveNext_7e8f30
                                (&uStack_80,
                                 _Method_System_Collections_Generic_List_Enumerator_I_BE2_ProgrammingEnv__MoveNext___12da500
                                );
              plVar3 = plStack_70;
              if ((uVar5 & 1) == 0) {
                native_System_Collections_Generic_List_Enumerator_BE2_Op_FunctionLocalVariable___Dispose_7e8f2c
                          (&uStack_80,
                           _Method_System_Collections_Generic_List_Enumerator_I_BE2_ProgrammingEnv__Dispose___12da4f8
                          );
                return;
              }
              if (plStack_70 == (long *)0x0) {
                    /* WARNING: Subroutine does not return */
                native_sub_432810();
              }
              lVar2 = *plStack_70;
              lVar4 = *(long *)(param_3 + 0x30);
              if ((ulong)*(ushort *)(lVar2 + 0x12a) != 0) {
                uVar5 = 0;
                piVar9 = (int *)(*(long *)(lVar2 + 0xb0) + 8);
                do {
                  if (*(long *)(piVar9 + -2) ==
                      _MG_BlocksEngine2_Environment_I_BE2_ProgrammingEnv_TypeInfo_12d4e38) {
                    puVar6 = (undefined8 *)(lVar2 + (long)*piVar9 * 0x10 + 0x138);
                    goto LAB_005fd8e0;
                  }
                  uVar5 = uVar5 + 1;
                  piVar9 = piVar9 + 4;
                } while (uVar5 < *(ushort *)(lVar2 + 0x12a));
              }
              puVar6 = (undefined8 *)
                       native_sub_3c9b34(plStack_70,
                                         _MG_BlocksEngine2_Environment_I_BE2_ProgrammingEnv_TypeInfo_12d4e38
                                         ,0);
LAB_005fd8e0:
              lVar2 = (*(code *)*puVar6)(plVar3,puVar6[1]);
              if (lVar2 == 0) {
                    /* WARNING: Subroutine does not return */
                native_sub_432810();
              }
              lVar2 = native_UnityEngine_Component__GetComponentInParent_BE2_Canvas__49dc70
                                (lVar2,
                                 _Method_UnityEngine_Component_GetComponentInParent_BE2_Canvas____12e2cf8
                                );
              if (lVar2 == 0) {
                    /* WARNING: Subroutine does not return */
                native_sub_432810();
              }
              lVar2 = native_MG_BlocksEngine2_Environment_BE2_Canvas__get_Canvas_574ec8(lVar2,0);
              if (lVar2 == 0) {
                    /* WARNING: Subroutine does not return */
                native_sub_432810();
              }
              lVar2 = native_UnityEngine_Component__get_transform_8da62c(lVar2,0);
              if (lVar2 == 0) {
                    /* WARNING: Subroutine does not return */
                native_sub_432810();
              }
              plVar7 = (long *)native_UnityEngine_Transform__GetChild_772ef0(lVar2,0,0);
              lVar2 = *plVar3;
              if ((ulong)*(ushort *)(lVar2 + 0x12a) != 0) {
                uVar5 = 0;
                piVar9 = (int *)(*(long *)(lVar2 + 0xb0) + 8);
                do {
                  if (*(long *)(piVar9 + -2) ==
                      _MG_BlocksEngine2_Environment_I_BE2_ProgrammingEnv_TypeInfo_12d4e38) {
                    puVar6 = (undefined8 *)(lVar2 + (long)*piVar9 * 0x10 + 0x138);
                    goto LAB_005fd978;
                  }
                  uVar5 = uVar5 + 1;
                  piVar9 = piVar9 + 4;
                } while (uVar5 < *(ushort *)(lVar2 + 0x12a));
              }
              puVar6 = (undefined8 *)
                       native_sub_3c9b34(plVar3,
                                         _MG_BlocksEngine2_Environment_I_BE2_ProgrammingEnv_TypeInfo_12d4e38
                                         ,0);
LAB_005fd978:
              lVar2 = (*(code *)*puVar6)(plVar3,puVar6[1]);
              if (lVar2 == 0) {
                    /* WARNING: Subroutine does not return */
                native_sub_432810();
              }
              lVar2 = native_UnityEngine_Component__GetComponentInParent_BE2_Canvas__49dc70
                                (lVar2,
                                 _Method_UnityEngine_Component_GetComponentInParent_BE2_Canvas____12e2cf8
                                );
              if (lVar2 == 0) {
                    /* WARNING: Subroutine does not return */
                native_sub_432810();
              }
              lVar2 = native_MG_BlocksEngine2_Environment_BE2_Canvas__get_Canvas_574ec8(lVar2,0);
              if (lVar2 == 0) {
                    /* WARNING: Subroutine does not return */
                native_sub_432810();
              }
              lVar2 = native_UnityEngine_Component__get_transform_8da62c(lVar2,0);
              if (lVar2 == 0) {
                    /* WARNING: Subroutine does not return */
                native_sub_432810();
              }
              plVar3 = (long *)native_UnityEngine_Transform__GetChild_772ef0(lVar2,0,0);
              if ((plVar3 == (long *)0x0) ||
                 (*plVar3 != _UnityEngine_RectTransform_TypeInfo_12d58f0)) {
                    /* WARNING: Subroutine does not return */
                native_sub_432810();
              }
              if (*plVar3 != _UnityEngine_RectTransform_TypeInfo_12d58f0) {
                plVar3 = (long *)0x0;
              }
              native_UnityEngine_RectTransform__get_anchoredPosition_764e18(plVar3,0);
              if (lVar4 == 0) {
                    /* WARNING: Subroutine does not return */
                native_sub_432810();
              }
              if (plVar7 == (long *)0x0) {
                plVar7 = (long *)0x0;
              }
              else if (*plVar7 != _UnityEngine_RectTransform_TypeInfo_12d58f0) {
                plVar7 = (long *)0x0;
              }
              native_System_Collections_Generic_Dictionary_object__Vector3___Add_ce07a8
                        (lVar4,plVar7,
                         _Method_System_Collections_Generic_Dictionary_RectTransform__Vector3__Add___12d96b0
                        );
            } while( true );
          }
        }
      }
    }
  }
LAB_005fda48:
                    /* WARNING: Subroutine does not return */
  native_sub_432810();
}



/* MG_BlocksEngine2.Environment.BE2_HideBlocksSelection$$HideBlocksSelection @ 0x5fdb1c
 * void MG_BlocksEngine2_Environment_BE2_HideBlocksSelection__HideBlocksSelection (MG_BlocksEngine2_Environment_BE2_HideBlocksSelection_o* __this, const MethodInfo* method); */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* MG_BlocksEngine2.Environment.BE2_HideBlocksSelection$$HideBlocksSelection
   void MG_BlocksEngine2_Environment_BE2_HideBlocksSelection__HideBlocksSelection
   (MG_BlocksEngine2_Environment_BE2_HideBlocksSelection_o* __this, const MethodInfo* method); */

void native_MG_BlocksEngine2_Environment_BE2_HideBlocksSelection__HideBlocksSelection_5fdb1c
               (long param_1)

{
  long lVar1;
  ulong uVar2;
  undefined8 uStack_50;
  undefined8 uStack_48;
  long lStack_40;
  undefined8 uStack_38;
  undefined8 uStack_30;
  undefined8 uStack_28;
  
  if ((bRam000000000133edce & 1) == 0) {
    native_sub_43273c(&
                      Method_System_Collections_Generic_Dictionary_RectTransform__Vector3__GetEnumerator___12d96b8
                     );
    native_sub_43273c(&
                      Method_System_Collections_Generic_Dictionary_Enumerator_RectTransform__Vector3__Dispose___12dad48
                     );
    native_sub_43273c(&
                      Method_System_Collections_Generic_Dictionary_Enumerator_RectTransform__Vector3__MoveNext___12dad50
                     );
    native_sub_43273c(&
                      Method_System_Collections_Generic_Dictionary_Enumerator_RectTransform__Vector3__get_Current___12dad58
                     );
    native_sub_43273c(&
                      Method_System_Collections_Generic_KeyValuePair_RectTransform__Vector3__get_Key___12dbef8
                     );
    bRam000000000133edce = 1;
  }
  uStack_38 = 0;
  lStack_40 = 0;
  uStack_28 = 0;
  uStack_30 = 0;
  uStack_48 = 0;
  uStack_50 = 0;
  if ((*(long *)(param_1 + 0x18) != 0) &&
     (lVar1 = native_UnityEngine_Component__get_gameObject_8da66c(*(long *)(param_1 + 0x18),0),
     lVar1 != 0)) {
    native_UnityEngine_GameObject__SetActive_8de698(lVar1,0,0);
    if (*(long *)(param_1 + 0x30) != 0) {
      native_System_Collections_Generic_Dictionary_object__Vector3___GetEnumerator_ce0d98
                (&uStack_50,*(long *)(param_1 + 0x30),
                 _Method_System_Collections_Generic_Dictionary_RectTransform__Vector3__GetEnumerator___12d96b8
                );
      while( true ) {
        uVar2 = native_System_Collections_Generic_Dictionary_Enumerator_object__Vector3___MoveNext_7f6250
                          (&uStack_50,
                           _Method_System_Collections_Generic_Dictionary_Enumerator_RectTransform__Vector3__MoveNext___12dad50
                          );
        if ((uVar2 & 1) == 0) {
          native_System_Collections_Generic_Dictionary_Enumerator_object__Vector3___Dispose_7f63dc
                    (&uStack_50,
                     _Method_System_Collections_Generic_Dictionary_Enumerator_RectTransform__Vector3__Dispose___12dad48
                    );
          return;
        }
        if (lStack_40 == 0) break;
        native_UnityEngine_RectTransform__set_anchoredPosition_764ec0
                  (*(undefined4 *)(param_1 + 0x20),*(undefined4 *)(param_1 + 0x24),lStack_40,0);
      }
                    /* WARNING: Subroutine does not return */
      native_sub_432810();
    }
  }
                    /* WARNING: Subroutine does not return */
  native_sub_432810();
}



/* MG_BlocksEngine2.Environment.BE2_HideBlocksSelection$$ShowBlocksSelection @ 0x5fdc68
 * void MG_BlocksEngine2_Environment_BE2_HideBlocksSelection__ShowBlocksSelection (MG_BlocksEngine2_Environment_BE2_HideBlocksSelection_o* __this, const MethodInfo* method); */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* MG_BlocksEngine2.Environment.BE2_HideBlocksSelection$$ShowBlocksSelection
   void MG_BlocksEngine2_Environment_BE2_HideBlocksSelection__ShowBlocksSelection
   (MG_BlocksEngine2_Environment_BE2_HideBlocksSelection_o* __this, const MethodInfo* method); */

void native_MG_BlocksEngine2_Environment_BE2_HideBlocksSelection__ShowBlocksSelection_5fdc68
               (long param_1)

{
  long lVar1;
  ulong uVar2;
  undefined8 uStack_50;
  undefined8 uStack_48;
  long lStack_40;
  undefined8 uStack_38;
  undefined8 uStack_30;
  undefined8 uStack_28;
  
  if ((bRam000000000133edcf & 1) == 0) {
    native_sub_43273c(&
                      Method_System_Collections_Generic_Dictionary_RectTransform__Vector3__GetEnumerator___12d96b8
                     );
    native_sub_43273c(&
                      Method_System_Collections_Generic_Dictionary_Enumerator_RectTransform__Vector3__Dispose___12dad48
                     );
    native_sub_43273c(&
                      Method_System_Collections_Generic_Dictionary_Enumerator_RectTransform__Vector3__MoveNext___12dad50
                     );
    native_sub_43273c(&
                      Method_System_Collections_Generic_Dictionary_Enumerator_RectTransform__Vector3__get_Current___12dad58
                     );
    native_sub_43273c(&
                      Method_System_Collections_Generic_KeyValuePair_RectTransform__Vector3__get_Key___12dbef8
                     );
    native_sub_43273c(&
                      Method_System_Collections_Generic_KeyValuePair_RectTransform__Vector3__get_Value___12dbf00
                     );
    bRam000000000133edcf = 1;
  }
  uStack_38 = 0;
  lStack_40 = 0;
  uStack_28 = 0;
  uStack_30 = 0;
  uStack_48 = 0;
  uStack_50 = 0;
  if ((*(long *)(param_1 + 0x18) != 0) &&
     (lVar1 = native_UnityEngine_Component__get_gameObject_8da66c(*(long *)(param_1 + 0x18),0),
     lVar1 != 0)) {
    uVar2 = native_UnityEngine_GameObject__get_activeSelf_8de6e8(lVar1,0);
    if ((uVar2 & 1) != 0) {
      return;
    }
    if ((*(long *)(param_1 + 0x18) != 0) &&
       (lVar1 = native_UnityEngine_Component__get_gameObject_8da66c(*(long *)(param_1 + 0x18),0),
       lVar1 != 0)) {
      native_UnityEngine_GameObject__SetActive_8de698(lVar1,1,0);
      if (*(long *)(param_1 + 0x30) != 0) {
        native_System_Collections_Generic_Dictionary_object__Vector3___GetEnumerator_ce0d98
                  (&uStack_50,*(long *)(param_1 + 0x30),
                   _Method_System_Collections_Generic_Dictionary_RectTransform__Vector3__GetEnumerator___12d96b8
                  );
        while( true ) {
          uVar2 = native_System_Collections_Generic_Dictionary_Enumerator_object__Vector3___MoveNext_7f6250
                            (&uStack_50,
                             _Method_System_Collections_Generic_Dictionary_Enumerator_RectTransform__Vector3__MoveNext___12dad50
                            );
          if ((uVar2 & 1) == 0) {
            native_System_Collections_Generic_Dictionary_Enumerator_object__Vector3___Dispose_7f63dc
                      (&uStack_50,
                       _Method_System_Collections_Generic_Dictionary_Enumerator_RectTransform__Vector3__Dispose___12dad48
                      );
            return;
          }
          if (lStack_40 == 0) break;
          native_UnityEngine_RectTransform__set_anchoredPosition_764ec0
                    (uStack_38 & 0xffffffff,uStack_38._4_4_,lStack_40,0);
        }
                    /* WARNING: Subroutine does not return */
        native_sub_432810();
      }
    }
  }
                    /* WARNING: Subroutine does not return */
  native_sub_432810();
}



/* MG_BlocksEngine2.Environment.BE2_HideBlocksSelection$$.ctor @ 0x5fdde0
 * void MG_BlocksEngine2_Environment_BE2_HideBlocksSelection___ctor (MG_BlocksEngine2_Environment_BE2_HideBlocksSelection_o* __this, const MethodInfo* method); */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* MG_BlocksEngine2.Environment.BE2_HideBlocksSelection$$.ctor
   void MG_BlocksEngine2_Environment_BE2_HideBlocksSelection___ctor
   (MG_BlocksEngine2_Environment_BE2_HideBlocksSelection_o* __this, const MethodInfo* method); */

undefined1  [16]
native_MG_BlocksEngine2_Environment_BE2_HideBlocksSelection___ctor_5fdde0(ulong param_1)

{
  undefined8 uVar1;
  undefined1 auVar2 [16];
  
  if ((bRam000000000133edd0 & 1) == 0) {
    native_sub_43273c(&
                      Method_System_Collections_Generic_Dictionary_RectTransform__Vector3___ctor___12d96a8
                     );
    native_sub_43273c(&
                      System_Collections_Generic_Dictionary_RectTransform__Vector3__TypeInfo_12d2348
                     );
    bRam000000000133edd0 = 1;
  }
  uVar1 = native_sub_432808(
                           _System_Collections_Generic_Dictionary_RectTransform__Vector3__TypeInfo_12d2348
                           );
  native_System_Collections_Generic_Dictionary_object__Vector3____ctor_ce02c0
            (uVar1,
             _Method_System_Collections_Generic_Dictionary_RectTransform__Vector3___ctor___12d96a8);
  *(undefined8 *)(param_1 + 0x30) = uVar1;
  native_sub_4326e0((undefined8 *)(param_1 + 0x30),uVar1);
  if ((bRam0000000001340ae0 & 1) == 0) {
    native_sub_43273c(&UnityEngine_Object_TypeInfo_12d54e0,0);
    bRam0000000001340ae0 = 1;
  }
  if (((*(byte *)(_UnityEngine_Object_TypeInfo_12d54e0 + 0x133) >> 2 & 1) != 0) &&
     (*(int *)(_UnityEngine_Object_TypeInfo_12d54e0 + 0xe0) == 0)) {
    native_sub_4327ec();
  }
  auVar2._8_8_ = 0;
  auVar2._0_8_ = param_1;
  return auVar2;
}


