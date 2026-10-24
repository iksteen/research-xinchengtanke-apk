/* ARM64 IL2CPP native pseudocode from Ghidra.
 * Recovered implementation, not original C# source.
 * Function boundaries follow the IL2CPP method address table. */


/* MG_BlocksEngine2.UI.BE2_UI_NewVariablePanel$$Awake @ 0xdc98d0
 * void MG_BlocksEngine2_UI_BE2_UI_NewVariablePanel__Awake (MG_BlocksEngine2_UI_BE2_UI_NewVariablePanel_o* __this, const MethodInfo* method); */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* MG_BlocksEngine2.UI.BE2_UI_NewVariablePanel$$Awake
   void MG_BlocksEngine2_UI_BE2_UI_NewVariablePanel__Awake
   (MG_BlocksEngine2_UI_BE2_UI_NewVariablePanel_o* __this, const MethodInfo* method); */

void native_MG_BlocksEngine2_UI_BE2_UI_NewVariablePanel__Awake_dc98d0(long param_1)

{
  ulong *puVar1;
  char cVar2;
  bool bVar3;
  long lVar4;
  undefined8 uVar5;
  undefined8 *puVar6;
  
  if ((bRam0000000001346de0 & 1) == 0) {
    native_sub_43273c(&Method_UnityEngine_Component_GetComponent_Button____12e29a0);
    bRam0000000001346de0 = 1;
  }
  lVar4 = native_UnityEngine_Component__get_transform_8da62c(param_1,0);
  if ((lVar4 != 0) && (lVar4 = native_UnityEngine_Transform__GetChild_772ef0(lVar4,2,0), lVar4 != 0)
     ) {
    uVar5 = native_UnityEngine_Component__GetComponent_ActiveAnimation__49daec
                      (lVar4,_Method_UnityEngine_Component_GetComponent_Button____12e29a0);
    *(undefined8 *)(param_1 + 0x18) = uVar5;
    native_sub_4326e0();
    lVar4 = native_UnityEngine_Component__get_transform_8da62c(param_1,0);
    if (lVar4 != 0) {
      uVar5 = native_UnityEngine_Transform__GetChild_772ef0(lVar4,1,0);
      uVar5 = native_MG_BlocksEngine2_Utils_BE2_InputField__GetBE2Component_601c18(uVar5,0);
      puVar6 = (undefined8 *)(param_1 + 0x20);
      *puVar6 = uVar5;
      if (iRam0000000001345318 != 0) {
        puVar1 = (ulong *)(((ulong)puVar6 >> 0x12 & 0x7fff) * 8 + 0x138ecd8);
        do {
          cVar2 = '\x01';
          bVar3 = (bool)ExclusiveMonitorPass(puVar1,0x10);
          if (bVar3) {
            *puVar1 = *puVar1 | 1L << ((ulong)puVar6 >> 0xc & 0x3f);
            cVar2 = ExclusiveMonitorsStatus();
          }
        } while (cVar2 != '\0');
      }
      return;
    }
  }
                    /* WARNING: Subroutine does not return */
  native_sub_432810();
}



/* MG_BlocksEngine2.UI.BE2_UI_NewVariablePanel$$Start @ 0xdc9980
 * void MG_BlocksEngine2_UI_BE2_UI_NewVariablePanel__Start (MG_BlocksEngine2_UI_BE2_UI_NewVariablePanel_o* __this, const MethodInfo* method); */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* MG_BlocksEngine2.UI.BE2_UI_NewVariablePanel$$Start
   void MG_BlocksEngine2_UI_BE2_UI_NewVariablePanel__Start
   (MG_BlocksEngine2_UI_BE2_UI_NewVariablePanel_o* __this, const MethodInfo* method); */

void native_MG_BlocksEngine2_UI_BE2_UI_NewVariablePanel__Start_dc9980(long param_1)

{
  undefined8 uVar1;
  long lVar2;
  
  if ((bRam0000000001346de1 & 1) == 0) {
    native_sub_43273c(&
                      Method_MG_BlocksEngine2_UI_BE2_UI_NewVariablePanel_OnButtonCreateVariable___12e22f0
                     );
    native_sub_43273c(&UnityEngine_Events_UnityAction_TypeInfo_12d65d0);
    bRam0000000001346de1 = 1;
  }
  if (*(long *)(param_1 + 0x18) != 0) {
    lVar2 = *(long *)(*(long *)(param_1 + 0x18) + 0xf8);
    uVar1 = native_sub_432808(_UnityEngine_Events_UnityAction_TypeInfo_12d65d0);
    native_UnityEngine_Events_UnityAction___ctor_773130
              (uVar1,param_1,
               _Method_MG_BlocksEngine2_UI_BE2_UI_NewVariablePanel_OnButtonCreateVariable___12e22f0,
               0);
    if (lVar2 != 0) {
      uVar1 = native_UnityEngine_Events_UnityEvent__GetDelegate_7734f8(uVar1,uVar1,0);
      lVar2 = *(long *)(lVar2 + 0x10);
      if (lVar2 == 0) {
                    /* WARNING: Subroutine does not return */
        native_sub_432810();
      }
      if ((bRam0000000001340cbd & 1) == 0) {
        native_sub_43273c(&Method_System_Collections_Generic_List_BaseInvokableCall__Add___12dc5b0,
                          uVar1,0);
        bRam0000000001340cbd = 1;
      }
      if (*(long *)(lVar2 + 0x18) != 0) {
        native_System_Collections_Generic_List_int_____Add_d40c00
                  (*(long *)(lVar2 + 0x18),uVar1,
                   _Method_System_Collections_Generic_List_BaseInvokableCall__Add___12dc5b0);
        *(undefined1 *)(lVar2 + 0x28) = 1;
        return;
      }
                    /* WARNING: Subroutine does not return */
      native_sub_432810();
    }
  }
                    /* WARNING: Subroutine does not return */
  native_sub_432810();
}



/* MG_BlocksEngine2.UI.BE2_UI_NewVariablePanel$$OnButtonCreateVariable @ 0xdc9a1c
 * void MG_BlocksEngine2_UI_BE2_UI_NewVariablePanel__OnButtonCreateVariable (MG_BlocksEngine2_UI_BE2_UI_NewVariablePanel_o* __this, const MethodInfo* method); */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* MG_BlocksEngine2.UI.BE2_UI_NewVariablePanel$$OnButtonCreateVariable
   void MG_BlocksEngine2_UI_BE2_UI_NewVariablePanel__OnButtonCreateVariable
   (MG_BlocksEngine2_UI_BE2_UI_NewVariablePanel_o* __this, const MethodInfo* method); */

void native_MG_BlocksEngine2_UI_BE2_UI_NewVariablePanel__OnButtonCreateVariable_dc9a1c
               (undefined1 param_1 [16],undefined8 param_2,undefined8 param_3,undefined8 param_4,
               long param_5)

{
  uint uVar1;
  int iVar2;
  undefined8 uVar3;
  ulong uVar4;
  long lVar5;
  undefined8 uVar6;
  long lVar7;
  undefined8 uVar8;
  undefined8 uVar9;
  undefined8 uVar10;
  undefined8 uVar11;
  undefined8 uVar12;
  
  if ((bRam0000000001346de2 & 1) == 0) {
    native_sub_43273c(&StringLiteral__12eaac0);
    bRam0000000001346de2 = 1;
  }
  if (*(long *)(param_5 + 0x20) != 0) {
    uVar3 = native_MG_BlocksEngine2_Utils_BE2_InputField__get_text_60240c
                      (*(long *)(param_5 + 0x20),0);
    uVar4 = native_System_String__op_Inequality_afbbb4(uVar3,_StringLiteral__12eaac0,0);
    if ((uVar4 & 1) == 0) {
      return;
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
      uVar4 = native_MG_BlocksEngine2_Environment_BE2_VariablesManager__ContainsVariable_dc9e28
                        (**(long **)(
                                    _MG_BlocksEngine2_Environment_BE2_VariablesManager_TypeInfo_12d3a90
                                    + 0xb8),uVar3);
      if ((uVar4 & 1) != 0) {
        return;
      }
      lVar5 = native_UnityEngine_Component__get_transform_8da62c(param_5,0);
      if (((lVar5 != 0) &&
          (lVar5 = native_UnityEngine_Transform__get_parent_765eb0(lVar5,0), lVar5 != 0)) &&
         (lVar5 = native_UnityEngine_Component__get_gameObject_8da66c(lVar5,0), lVar5 != 0)) {
        uVar1 = native_UnityEngine_GameObject__get_activeSelf_8de6e8(lVar5,0);
        lVar5 = native_UnityEngine_Component__get_transform_8da62c(param_5,0);
        if (((lVar5 != 0) &&
            (lVar5 = native_UnityEngine_Transform__get_parent_765eb0(lVar5,0), lVar5 != 0)) &&
           (lVar5 = native_UnityEngine_Component__get_gameObject_8da66c(lVar5,0), lVar5 != 0)) {
          native_UnityEngine_GameObject__SetActive_8de698(lVar5,1,0);
          uVar8 = *(undefined8 *)(param_5 + 0x28);
          uVar9 = native_UnityEngine_Vector3__get_zero_776668(0);
          uVar11 = param_2;
          uVar12 = param_3;
          uVar10 = native_UnityEngine_Quaternion__get_identity_7628fc(0);
          lVar5 = native_UnityEngine_Component__get_transform_8da62c(param_5,0);
          if (lVar5 != 0) {
            uVar6 = native_UnityEngine_Transform__get_parent_765eb0(lVar5,0);
            if (((*(byte *)(_UnityEngine_Object_TypeInfo_12d54e0 + 0x133) >> 2 & 1) != 0) &&
               (*(int *)(_UnityEngine_Object_TypeInfo_12d54e0 + 0xe0) == 0)) {
              native_sub_4327ec(_UnityEngine_Object_TypeInfo_12d54e0);
            }
            lVar5 = native_UnityEngine_Object__Instantiate_BE2_Ins_DefineFunction__4a67c0
                              (uVar9,param_2,param_3,uVar10,uVar11,uVar12,param_4,uVar8,uVar6,
                               _Method_UnityEngine_Object_Instantiate_Transform____12e5a90);
            lVar7 = native_UnityEngine_Component__get_transform_8da62c(param_5,0);
            if ((lVar7 != 0) &&
               (iVar2 = native_UnityEngine_Transform__GetSiblingIndex_772b74(lVar7,0), lVar5 != 0))
            {
              native_UnityEngine_Transform__SetSiblingIndex_772b24(lVar5,iVar2 + 1,0);
              uVar11 = native_UnityEngine_Transform__get_localPosition_7717f4(lVar5,0);
              native_UnityEngine_Transform__get_localPosition_7717f4(lVar5,0);
              native_UnityEngine_Transform__set_localPosition_7718a4(uVar11,lVar5,0);
              native_UnityEngine_Vector3__get_zero_776668(0);
              native_UnityEngine_Transform__set_localEulerAngles_77194c(lVar5,0);
              lVar7 = native_UnityEngine_Transform__GetChild_772ef0(lVar5,0,0);
              if (lVar7 != 0) {
                native_UnityEngine_Component__GetComponent_ActiveAnimation__49daec
                          (lVar7,_Method_UnityEngine_Component_GetComponent_I_BE2_Block____12e2a08);
                lVar7 = native_UnityEngine_Component__GetComponentInChildren_Animation__49db98
                                  (lVar5,
                                   _Method_UnityEngine_Component_GetComponentInChildren_BE2_UI_SelectionBlock____12e2c70
                                  );
                if ((((lVar7 != 0) &&
                     (lVar7 = native_UnityEngine_Component__get_transform_8da62c(lVar7,0),
                     lVar7 != 0)) &&
                    (lVar7 = native_UnityEngine_Transform__GetChild_772ef0(lVar7,0,0), lVar7 != 0))
                   && (lVar7 = native_UnityEngine_Transform__GetChild_772ef0(lVar7,0,0), lVar7 != 0)
                   ) {
                  uVar11 = native_UnityEngine_Transform__GetChild_772ef0(lVar7,0,0);
                  lVar7 = native_MG_BlocksEngine2_Utils_BE2_Text__GetBE2Text_610e74(uVar11,0);
                  if (lVar7 != 0) {
                    native_MG_BlocksEngine2_Utils_BE2_Text__set_text_610ef8(lVar7,uVar3,0);
                    if (**(long **)(
                                   _MG_BlocksEngine2_Environment_BE2_VariablesManager_TypeInfo_12d3a90
                                   + 0xb8) != 0) {
                      native_MG_BlocksEngine2_Environment_BE2_VariablesManager__AddOrUpdateVariable_dc9e8c
                                (**(long **)(
                                            _MG_BlocksEngine2_Environment_BE2_VariablesManager_TypeInfo_12d3a90
                                            + 0xb8),uVar3,_StringLiteral_0_12eb8d8);
                      lVar5 = native_UnityEngine_Component__GetComponent_ActiveAnimation__49daec
                                        (lVar5,
                                         _Method_UnityEngine_Component_GetComponent_BE2_UI_VariableViewer____12e2980
                                        );
                      if (lVar5 != 0) {
                        native_MG_BlocksEngine2_UI_BE2_UI_VariableViewer__RefreshViewer_dc9f84();
                        lVar5 = native_MG_BlocksEngine2_UI_BE2_UI_BlocksSelectionViewer__get_Instance_dc60e0
                                          ();
                        if (lVar5 != 0) {
                          native_MG_BlocksEngine2_UI_BE2_UI_BlocksSelectionViewer__ForceRebuildLayout_dc69d0
                                    ();
                          lVar5 = native_UnityEngine_Component__get_transform_8da62c(param_5,0);
                          if (((lVar5 != 0) &&
                              (lVar5 = native_UnityEngine_Transform__get_parent_765eb0(lVar5,0),
                              lVar5 != 0)) &&
                             (lVar5 = native_UnityEngine_Component__get_gameObject_8da66c(lVar5,0),
                             lVar5 != 0)) {
                            if (pcRam0000000001340bf8 == (code *)0x0) {
                              pcRam0000000001340bf8 = (code *)native_sub_4326f0(&UNK_00e2da67);
                            }
                    /* WARNING: Could not recover jumptable at 0x008de6e4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
                            (*pcRam0000000001340bf8)(lVar5,uVar1 & 1);
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
                    /* WARNING: Subroutine does not return */
  native_sub_432810();
}



/* MG_BlocksEngine2.UI.BE2_UI_NewVariablePanel$$CreateVariable @ 0xdc9a9c
 * void MG_BlocksEngine2_UI_BE2_UI_NewVariablePanel__CreateVariable (MG_BlocksEngine2_UI_BE2_UI_NewVariablePanel_o* __this, System_String_o* varName, const MethodInfo* method); */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* MG_BlocksEngine2.UI.BE2_UI_NewVariablePanel$$CreateVariable
   void MG_BlocksEngine2_UI_BE2_UI_NewVariablePanel__CreateVariable
   (MG_BlocksEngine2_UI_BE2_UI_NewVariablePanel_o* __this, System_String_o* varName, const
   MethodInfo* method); */

void native_MG_BlocksEngine2_UI_BE2_UI_NewVariablePanel__CreateVariable_dc9a9c
               (undefined1 param_1 [16],undefined8 param_2,undefined8 param_3,undefined8 param_4,
               long param_5,undefined8 param_6)

{
  uint uVar1;
  int iVar2;
  ulong uVar3;
  long lVar4;
  undefined8 uVar5;
  long lVar6;
  undefined8 uVar7;
  undefined8 uVar8;
  undefined8 uVar9;
  undefined8 uVar10;
  undefined8 uVar11;
  
  if ((bRam0000000001346de3 & 1) == 0) {
    native_sub_43273c(&MG_BlocksEngine2_Environment_BE2_VariablesManager_TypeInfo_12d3a90);
    native_sub_43273c(&
                      Method_UnityEngine_Component_GetComponentInChildren_BE2_UI_SelectionBlock____12e2c70
                     );
    native_sub_43273c(&Method_UnityEngine_Component_GetComponent_BE2_UI_VariableViewer____12e2980);
    native_sub_43273c(&Method_UnityEngine_Component_GetComponent_I_BE2_Block____12e2a08);
    native_sub_43273c(&Method_UnityEngine_Object_Instantiate_Transform____12e5a90);
    native_sub_43273c(&UnityEngine_Object_TypeInfo_12d54e0);
    native_sub_43273c(&StringLiteral_0_12eb8d8);
    bRam0000000001346de3 = 1;
  }
  if (**(long **)(_MG_BlocksEngine2_Environment_BE2_VariablesManager_TypeInfo_12d3a90 + 0xb8) != 0)
  {
    uVar3 = native_MG_BlocksEngine2_Environment_BE2_VariablesManager__ContainsVariable_dc9e28
                      (**(long **)(
                                  _MG_BlocksEngine2_Environment_BE2_VariablesManager_TypeInfo_12d3a90
                                  + 0xb8),param_6);
    if ((uVar3 & 1) != 0) {
      return;
    }
    lVar4 = native_UnityEngine_Component__get_transform_8da62c(param_5,0);
    if (((lVar4 != 0) &&
        (lVar4 = native_UnityEngine_Transform__get_parent_765eb0(lVar4,0), lVar4 != 0)) &&
       (lVar4 = native_UnityEngine_Component__get_gameObject_8da66c(lVar4,0), lVar4 != 0)) {
      uVar1 = native_UnityEngine_GameObject__get_activeSelf_8de6e8(lVar4,0);
      lVar4 = native_UnityEngine_Component__get_transform_8da62c(param_5,0);
      if (((lVar4 != 0) &&
          (lVar4 = native_UnityEngine_Transform__get_parent_765eb0(lVar4,0), lVar4 != 0)) &&
         (lVar4 = native_UnityEngine_Component__get_gameObject_8da66c(lVar4,0), lVar4 != 0)) {
        native_UnityEngine_GameObject__SetActive_8de698(lVar4,1,0);
        uVar7 = *(undefined8 *)(param_5 + 0x28);
        uVar8 = native_UnityEngine_Vector3__get_zero_776668(0);
        uVar10 = param_2;
        uVar11 = param_3;
        uVar9 = native_UnityEngine_Quaternion__get_identity_7628fc(0);
        lVar4 = native_UnityEngine_Component__get_transform_8da62c(param_5,0);
        if (lVar4 != 0) {
          uVar5 = native_UnityEngine_Transform__get_parent_765eb0(lVar4,0);
          if (((*(byte *)(_UnityEngine_Object_TypeInfo_12d54e0 + 0x133) >> 2 & 1) != 0) &&
             (*(int *)(_UnityEngine_Object_TypeInfo_12d54e0 + 0xe0) == 0)) {
            native_sub_4327ec(_UnityEngine_Object_TypeInfo_12d54e0);
          }
          lVar4 = native_UnityEngine_Object__Instantiate_BE2_Ins_DefineFunction__4a67c0
                            (uVar8,param_2,param_3,uVar9,uVar10,uVar11,param_4,uVar7,uVar5,
                             _Method_UnityEngine_Object_Instantiate_Transform____12e5a90);
          lVar6 = native_UnityEngine_Component__get_transform_8da62c(param_5,0);
          if ((lVar6 != 0) &&
             (iVar2 = native_UnityEngine_Transform__GetSiblingIndex_772b74(lVar6,0), lVar4 != 0)) {
            native_UnityEngine_Transform__SetSiblingIndex_772b24(lVar4,iVar2 + 1,0);
            uVar10 = native_UnityEngine_Transform__get_localPosition_7717f4(lVar4,0);
            native_UnityEngine_Transform__get_localPosition_7717f4(lVar4,0);
            native_UnityEngine_Transform__set_localPosition_7718a4(uVar10,lVar4,0);
            native_UnityEngine_Vector3__get_zero_776668(0);
            native_UnityEngine_Transform__set_localEulerAngles_77194c(lVar4,0);
            lVar6 = native_UnityEngine_Transform__GetChild_772ef0(lVar4,0,0);
            if (lVar6 != 0) {
              native_UnityEngine_Component__GetComponent_ActiveAnimation__49daec
                        (lVar6,_Method_UnityEngine_Component_GetComponent_I_BE2_Block____12e2a08);
              lVar6 = native_UnityEngine_Component__GetComponentInChildren_Animation__49db98
                                (lVar4,
                                 _Method_UnityEngine_Component_GetComponentInChildren_BE2_UI_SelectionBlock____12e2c70
                                );
              if ((((lVar6 != 0) &&
                   (lVar6 = native_UnityEngine_Component__get_transform_8da62c(lVar6,0), lVar6 != 0)
                   ) && (lVar6 = native_UnityEngine_Transform__GetChild_772ef0(lVar6,0,0),
                        lVar6 != 0)) &&
                 (lVar6 = native_UnityEngine_Transform__GetChild_772ef0(lVar6,0,0), lVar6 != 0)) {
                uVar10 = native_UnityEngine_Transform__GetChild_772ef0(lVar6,0,0);
                lVar6 = native_MG_BlocksEngine2_Utils_BE2_Text__GetBE2Text_610e74(uVar10,0);
                if (lVar6 != 0) {
                  native_MG_BlocksEngine2_Utils_BE2_Text__set_text_610ef8(lVar6,param_6,0);
                  if (**(long **)(
                                 _MG_BlocksEngine2_Environment_BE2_VariablesManager_TypeInfo_12d3a90
                                 + 0xb8) != 0) {
                    native_MG_BlocksEngine2_Environment_BE2_VariablesManager__AddOrUpdateVariable_dc9e8c
                              (**(long **)(
                                          _MG_BlocksEngine2_Environment_BE2_VariablesManager_TypeInfo_12d3a90
                                          + 0xb8),param_6,_StringLiteral_0_12eb8d8);
                    lVar4 = native_UnityEngine_Component__GetComponent_ActiveAnimation__49daec
                                      (lVar4,
                                       _Method_UnityEngine_Component_GetComponent_BE2_UI_VariableViewer____12e2980
                                      );
                    if (lVar4 != 0) {
                      native_MG_BlocksEngine2_UI_BE2_UI_VariableViewer__RefreshViewer_dc9f84();
                      lVar4 = native_MG_BlocksEngine2_UI_BE2_UI_BlocksSelectionViewer__get_Instance_dc60e0
                                        ();
                      if (lVar4 != 0) {
                        native_MG_BlocksEngine2_UI_BE2_UI_BlocksSelectionViewer__ForceRebuildLayout_dc69d0
                                  ();
                        lVar4 = native_UnityEngine_Component__get_transform_8da62c(param_5,0);
                        if (((lVar4 != 0) &&
                            (lVar4 = native_UnityEngine_Transform__get_parent_765eb0(lVar4,0),
                            lVar4 != 0)) &&
                           (lVar4 = native_UnityEngine_Component__get_gameObject_8da66c(lVar4,0),
                           lVar4 != 0)) {
                          if (pcRam0000000001340bf8 == (code *)0x0) {
                            pcRam0000000001340bf8 = (code *)native_sub_4326f0(&UNK_00e2da67);
                          }
                    /* WARNING: Could not recover jumptable at 0x008de6e4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
                          (*pcRam0000000001340bf8)(lVar4,uVar1 & 1);
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



/* MG_BlocksEngine2.UI.BE2_UI_NewVariablePanel$$.ctor @ 0xdc9fc0
 * void MG_BlocksEngine2_UI_BE2_UI_NewVariablePanel___ctor (MG_BlocksEngine2_UI_BE2_UI_NewVariablePanel_o* __this, const MethodInfo* method); */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* MG_BlocksEngine2.UI.BE2_UI_NewVariablePanel$$.ctor
   void MG_BlocksEngine2_UI_BE2_UI_NewVariablePanel___ctor
   (MG_BlocksEngine2_UI_BE2_UI_NewVariablePanel_o* __this, const MethodInfo* method); */

undefined1  [16] native_MG_BlocksEngine2_UI_BE2_UI_NewVariablePanel___ctor_dc9fc0(ulong param_1)

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


