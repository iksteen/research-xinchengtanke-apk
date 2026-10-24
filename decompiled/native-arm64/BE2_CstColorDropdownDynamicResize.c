/* ARM64 IL2CPP native pseudocode from Ghidra.
 * Recovered implementation, not original C# source.
 * Function boundaries follow the IL2CPP method address table. */


/* MG_BlocksEngine2.Horizontal.Block.BE2_CstColorDropdownDynamicResize$$Awake @ 0x574f80
 * void MG_BlocksEngine2_Horizontal_Block_BE2_CstColorDropdownDynamicResize__Awake (MG_BlocksEngine2_Horizontal_Block_BE2_CstColorDropdownDynamicResize_o* __this, const MethodInfo* method); */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* MG_BlocksEngine2.Horizontal.Block.BE2_CstColorDropdownDynamicResize$$Awake
   void MG_BlocksEngine2_Horizontal_Block_BE2_CstColorDropdownDynamicResize__Awake
   (MG_BlocksEngine2_Horizontal_Block_BE2_CstColorDropdownDynamicResize_o* __this, const MethodInfo*
   method); */

void native_MG_BlocksEngine2_Horizontal_Block_BE2_CstColorDropdownDynamicResize__Awake_574f80
               (long param_1)

{
  ulong *puVar1;
  char cVar2;
  bool bVar3;
  undefined8 uVar4;
  long lVar5;
  undefined8 *puVar6;
  
  if ((bRam000000000133ea98 & 1) == 0) {
    native_sub_43273c(&Method_UnityEngine_Component_GetComponent_Image____12e2a78);
    native_sub_43273c(&Method_UnityEngine_Component_GetComponent_RectTransform____12e2ad0);
    bRam000000000133ea98 = 1;
  }
  uVar4 = native_UnityEngine_Component__GetComponent_ActiveAnimation__49daec
                    (param_1,_Method_UnityEngine_Component_GetComponent_RectTransform____12e2ad0);
  *(undefined8 *)(param_1 + 0x18) = uVar4;
  native_sub_4326e0(param_1 + 0x18);
  lVar5 = native_UnityEngine_Component__get_transform_8da62c(param_1,0);
  if ((lVar5 != 0) && (lVar5 = native_UnityEngine_Transform__GetChild_772ef0(lVar5,1,0), lVar5 != 0)
     ) {
    uVar4 = native_UnityEngine_Component__GetComponent_ActiveAnimation__49daec
                      (lVar5,_Method_UnityEngine_Component_GetComponent_Image____12e2a78);
    puVar6 = (undefined8 *)(param_1 + 0x30);
    *puVar6 = uVar4;
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
                    /* WARNING: Subroutine does not return */
  native_sub_432810();
}



/* MG_BlocksEngine2.Horizontal.Block.BE2_CstColorDropdownDynamicResize$$Start @ 0x57502c
 * void MG_BlocksEngine2_Horizontal_Block_BE2_CstColorDropdownDynamicResize__Start (MG_BlocksEngine2_Horizontal_Block_BE2_CstColorDropdownDynamicResize_o* __this, const MethodInfo* method); */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* MG_BlocksEngine2.Horizontal.Block.BE2_CstColorDropdownDynamicResize$$Start
   void MG_BlocksEngine2_Horizontal_Block_BE2_CstColorDropdownDynamicResize__Start
   (MG_BlocksEngine2_Horizontal_Block_BE2_CstColorDropdownDynamicResize_o* __this, const MethodInfo*
   method); */

void native_MG_BlocksEngine2_Horizontal_Block_BE2_CstColorDropdownDynamicResize__Start_57502c
               (undefined1 param_1 [16],undefined4 param_2,undefined4 param_3,undefined4 param_4,
               long param_5)

{
  uint uVar1;
  long lVar2;
  ulong uVar3;
  long *plVar4;
  undefined8 *puVar5;
  undefined4 uStack_40;
  undefined4 uStack_3c;
  undefined4 uStack_38;
  undefined4 uStack_34;
  
  native_MG_BlocksEngine2_Horizontal_Block_BE2_CstColorDropdownDynamicResize__Resize_575064();
  if (*(long *)(param_5 + 0x20) == 0) {
                    /* WARNING: Subroutine does not return */
    native_sub_432810();
  }
  lVar2 = native_MG_BlocksEngine2_Utils_BE2_Dropdown__GetSelectedOptionText_567528();
  if ((bRam000000000133ea99 & 1) == 0) {
    native_sub_43273c(&StringLiteral__0000FF_12eb028);
    native_sub_43273c(&StringLiteral_Violet_12f2f38);
    native_sub_43273c(&StringLiteral_Random_12f0870);
    native_sub_43273c(&StringLiteral__2E2B5F_12eb040);
    native_sub_43273c(&StringLiteral_Indigo_12ee840);
    native_sub_43273c(&StringLiteral__FFFFFF_12eb068);
    native_sub_43273c(&StringLiteral_Yellow_12f31e0);
    native_sub_43273c(&StringLiteral_Red_12f0928);
    native_sub_43273c(&StringLiteral__FF7F00_12eb058);
    native_sub_43273c(&StringLiteral__FFFF00_12eb060);
    native_sub_43273c(&StringLiteral__8B00FF_12eb048);
    native_sub_43273c(&StringLiteral_Orange_12f03d0);
    native_sub_43273c(&StringLiteral_Blue_12ec800);
    native_sub_43273c(&StringLiteral_Green_12ee238);
    native_sub_43273c(&StringLiteral__00FF00_12eb030);
    native_sub_43273c(&StringLiteral__FF0000_12eb050);
    bRam000000000133ea99 = 1;
  }
  uStack_40 = native_UnityEngine_Color__get_white_8d9e10(0);
  uStack_3c = param_2;
  uStack_38 = param_3;
  uStack_34 = param_4;
  if (lVar2 == 0) goto LAB_005753d0;
  uVar1 = native__PrivateImplementationDetails___ComputeStringHash_560404(lVar2);
  if (uVar1 < 0xa37f187d) {
    if (uVar1 < 0x727b390c) {
      if (uVar1 == 0x4115d182) {
        uVar3 = native_System_String__op_Equality_afc18c(lVar2,_StringLiteral_Random_12f0870,0);
        if ((uVar3 & 1) == 0) goto LAB_005753d0;
        puVar5 = (undefined8 *)&StringLiteral__FFFFFF_12eb068;
      }
      else {
        if ((uVar1 != 0x727b390b) ||
           (uVar3 = native_System_String__op_Equality_afc18c(lVar2,_StringLiteral_Orange_12f03d0,0),
           (uVar3 & 1) == 0)) goto LAB_005753d0;
        puVar5 = (undefined8 *)&StringLiteral__FF7F00_12eb058;
      }
    }
    else if (uVar1 == 0x938c5e4b) {
      uVar3 = native_System_String__op_Equality_afc18c(lVar2,_StringLiteral_Indigo_12ee840,0);
      if ((uVar3 & 1) == 0) goto LAB_005753d0;
      puVar5 = (undefined8 *)&StringLiteral__2E2B5F_12eb040;
    }
    else {
      if ((uVar1 != 0xa37f187c) ||
         (uVar3 = native_System_String__op_Equality_afc18c(lVar2,_StringLiteral_Red_12f0928,0),
         (uVar3 & 1) == 0)) goto LAB_005753d0;
      puVar5 = (undefined8 *)&StringLiteral__FF0000_12eb050;
    }
  }
  else if (uVar1 < 0xd9cdec6a) {
    if (uVar1 == 0xa953c75c) {
      uVar3 = native_System_String__op_Equality_afc18c(lVar2,_StringLiteral_Green_12ee238,0);
      if ((uVar3 & 1) == 0) goto LAB_005753d0;
      puVar5 = (undefined8 *)&StringLiteral__00FF00_12eb030;
    }
    else {
      if ((uVar1 != 0xd9cdec69) ||
         (uVar3 = native_System_String__op_Equality_afc18c(lVar2,_StringLiteral_Yellow_12f31e0,0),
         (uVar3 & 1) == 0)) goto LAB_005753d0;
      puVar5 = (undefined8 *)&StringLiteral__FFFF00_12eb060;
    }
  }
  else if (uVar1 == 0xe9dd1fed) {
    uVar3 = native_System_String__op_Equality_afc18c(lVar2,_StringLiteral_Blue_12ec800,0);
    if ((uVar3 & 1) == 0) goto LAB_005753d0;
    puVar5 = (undefined8 *)&StringLiteral__0000FF_12eb028;
  }
  else {
    if ((uVar1 != 0xf03bdf12) ||
       (uVar3 = native_System_String__op_Equality_afc18c(lVar2,_StringLiteral_Violet_12f2f38,0),
       (uVar3 & 1) == 0)) goto LAB_005753d0;
    puVar5 = (undefined8 *)&StringLiteral__8B00FF_12eb048;
  }
  native_UnityEngine_ColorUtility__TryParseHtmlString_8da574(*puVar5,&uStack_40,0);
LAB_005753d0:
  plVar4 = *(long **)(param_5 + 0x30);
  if (plVar4 != (long *)0x0) {
    (**(code **)(*plVar4 + 0x2a8))
              (uStack_40,uStack_3c,uStack_38,uStack_34,plVar4,*(undefined8 *)(*plVar4 + 0x2b0));
    return;
  }
                    /* WARNING: Subroutine does not return */
  native_sub_432810();
}



/* MG_BlocksEngine2.Horizontal.Block.BE2_CstColorDropdownDynamicResize$$SetColor @ 0x5750c8
 * void MG_BlocksEngine2_Horizontal_Block_BE2_CstColorDropdownDynamicResize__SetColor (MG_BlocksEngine2_Horizontal_Block_BE2_CstColorDropdownDynamicResize_o* __this, System_String_o* value, const MethodInfo* method); */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* MG_BlocksEngine2.Horizontal.Block.BE2_CstColorDropdownDynamicResize$$SetColor
   void MG_BlocksEngine2_Horizontal_Block_BE2_CstColorDropdownDynamicResize__SetColor
   (MG_BlocksEngine2_Horizontal_Block_BE2_CstColorDropdownDynamicResize_o* __this, System_String_o*
   value, const MethodInfo* method); */

void native_MG_BlocksEngine2_Horizontal_Block_BE2_CstColorDropdownDynamicResize__SetColor_5750c8
               (undefined1 param_1 [16],undefined4 param_2,undefined4 param_3,undefined4 param_4,
               long param_5,long param_6)

{
  uint uVar1;
  ulong uVar2;
  long *plVar3;
  undefined8 *puVar4;
  undefined4 uStack_40;
  undefined4 uStack_3c;
  undefined4 uStack_38;
  undefined4 uStack_34;
  
  if ((bRam000000000133ea99 & 1) == 0) {
    native_sub_43273c(&StringLiteral__0000FF_12eb028);
    native_sub_43273c(&StringLiteral_Violet_12f2f38);
    native_sub_43273c(&StringLiteral_Random_12f0870);
    native_sub_43273c(&StringLiteral__2E2B5F_12eb040);
    native_sub_43273c(&StringLiteral_Indigo_12ee840);
    native_sub_43273c(&StringLiteral__FFFFFF_12eb068);
    native_sub_43273c(&StringLiteral_Yellow_12f31e0);
    native_sub_43273c(&StringLiteral_Red_12f0928);
    native_sub_43273c(&StringLiteral__FF7F00_12eb058);
    native_sub_43273c(&StringLiteral__FFFF00_12eb060);
    native_sub_43273c(&StringLiteral__8B00FF_12eb048);
    native_sub_43273c(&StringLiteral_Orange_12f03d0);
    native_sub_43273c(&StringLiteral_Blue_12ec800);
    native_sub_43273c(&StringLiteral_Green_12ee238);
    native_sub_43273c(&StringLiteral__00FF00_12eb030);
    native_sub_43273c(&StringLiteral__FF0000_12eb050);
    bRam000000000133ea99 = 1;
  }
  uStack_40 = native_UnityEngine_Color__get_white_8d9e10(0);
  uStack_3c = param_2;
  uStack_38 = param_3;
  uStack_34 = param_4;
  if (param_6 == 0) goto LAB_005753d0;
  uVar1 = native__PrivateImplementationDetails___ComputeStringHash_560404(param_6);
  if (uVar1 < 0xa37f187d) {
    if (uVar1 < 0x727b390c) {
      if (uVar1 == 0x4115d182) {
        uVar2 = native_System_String__op_Equality_afc18c(param_6,_StringLiteral_Random_12f0870,0);
        if ((uVar2 & 1) == 0) goto LAB_005753d0;
        puVar4 = (undefined8 *)&StringLiteral__FFFFFF_12eb068;
      }
      else {
        if ((uVar1 != 0x727b390b) ||
           (uVar2 = native_System_String__op_Equality_afc18c
                              (param_6,_StringLiteral_Orange_12f03d0,0), (uVar2 & 1) == 0))
        goto LAB_005753d0;
        puVar4 = (undefined8 *)&StringLiteral__FF7F00_12eb058;
      }
    }
    else if (uVar1 == 0x938c5e4b) {
      uVar2 = native_System_String__op_Equality_afc18c(param_6,_StringLiteral_Indigo_12ee840,0);
      if ((uVar2 & 1) == 0) goto LAB_005753d0;
      puVar4 = (undefined8 *)&StringLiteral__2E2B5F_12eb040;
    }
    else {
      if ((uVar1 != 0xa37f187c) ||
         (uVar2 = native_System_String__op_Equality_afc18c(param_6,_StringLiteral_Red_12f0928,0),
         (uVar2 & 1) == 0)) goto LAB_005753d0;
      puVar4 = (undefined8 *)&StringLiteral__FF0000_12eb050;
    }
  }
  else if (uVar1 < 0xd9cdec6a) {
    if (uVar1 == 0xa953c75c) {
      uVar2 = native_System_String__op_Equality_afc18c(param_6,_StringLiteral_Green_12ee238,0);
      if ((uVar2 & 1) == 0) goto LAB_005753d0;
      puVar4 = (undefined8 *)&StringLiteral__00FF00_12eb030;
    }
    else {
      if ((uVar1 != 0xd9cdec69) ||
         (uVar2 = native_System_String__op_Equality_afc18c(param_6,_StringLiteral_Yellow_12f31e0,0),
         (uVar2 & 1) == 0)) goto LAB_005753d0;
      puVar4 = (undefined8 *)&StringLiteral__FFFF00_12eb060;
    }
  }
  else if (uVar1 == 0xe9dd1fed) {
    uVar2 = native_System_String__op_Equality_afc18c(param_6,_StringLiteral_Blue_12ec800,0);
    if ((uVar2 & 1) == 0) goto LAB_005753d0;
    puVar4 = (undefined8 *)&StringLiteral__0000FF_12eb028;
  }
  else {
    if ((uVar1 != 0xf03bdf12) ||
       (uVar2 = native_System_String__op_Equality_afc18c(param_6,_StringLiteral_Violet_12f2f38,0),
       (uVar2 & 1) == 0)) goto LAB_005753d0;
    puVar4 = (undefined8 *)&StringLiteral__8B00FF_12eb048;
  }
  native_UnityEngine_ColorUtility__TryParseHtmlString_8da574(*puVar4,&uStack_40,0);
LAB_005753d0:
  plVar3 = *(long **)(param_5 + 0x30);
  if (plVar3 != (long *)0x0) {
    (**(code **)(*plVar3 + 0x2a8))
              (uStack_40,uStack_3c,uStack_38,uStack_34,plVar3,*(undefined8 *)(*plVar3 + 0x2b0));
    return;
  }
                    /* WARNING: Subroutine does not return */
  native_sub_432810();
}



/* MG_BlocksEngine2.Horizontal.Block.BE2_CstColorDropdownDynamicResize$$OnEnable @ 0x575408
 * void MG_BlocksEngine2_Horizontal_Block_BE2_CstColorDropdownDynamicResize__OnEnable (MG_BlocksEngine2_Horizontal_Block_BE2_CstColorDropdownDynamicResize_o* __this, const MethodInfo* method); */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* MG_BlocksEngine2.Horizontal.Block.BE2_CstColorDropdownDynamicResize$$OnEnable
   void MG_BlocksEngine2_Horizontal_Block_BE2_CstColorDropdownDynamicResize__OnEnable
   (MG_BlocksEngine2_Horizontal_Block_BE2_CstColorDropdownDynamicResize_o* __this, const MethodInfo*
   method); */

void native_MG_BlocksEngine2_Horizontal_Block_BE2_CstColorDropdownDynamicResize__OnEnable_575408
               (long param_1)

{
  undefined8 uVar1;
  long lVar2;
  
  if ((bRam000000000133ea9a & 1) == 0) {
    native_sub_43273c(&
                      Method_MG_BlocksEngine2_Horizontal_Block_BE2_CstColorDropdownDynamicResize__OnEnable_b__8_0___12e2140
                     );
    native_sub_43273c(&Method_UnityEngine_Events_UnityAction_int___ctor___12de3b0);
    native_sub_43273c(&UnityEngine_Events_UnityAction_int__TypeInfo_12d2f48);
    native_sub_43273c(&Method_UnityEngine_Events_UnityEvent_int__AddListener___12de488);
    bRam000000000133ea9a = 1;
  }
  native_UnityEngine_Component__get_transform_8da62c(param_1,0);
  uVar1 = native_MG_BlocksEngine2_Utils_BE2_Dropdown__GetBE2Component_566f34();
  *(undefined8 *)(param_1 + 0x20) = uVar1;
  native_sub_4326e0(param_1 + 0x20);
  if (*(long *)(param_1 + 0x20) != 0) {
    lVar2 = native_MG_BlocksEngine2_Utils_BE2_Dropdown__get_onValueChanged_567184();
    uVar1 = native_sub_432808(_UnityEngine_Events_UnityAction_int__TypeInfo_12d2f48);
    native_UnityEngine_Events_UnityAction_int____ctor_89b2bc
              (uVar1,param_1,
               _Method_MG_BlocksEngine2_Horizontal_Block_BE2_CstColorDropdownDynamicResize__OnEnable_b__8_0___12e2140
               ,_Method_UnityEngine_Events_UnityAction_int___ctor___12de3b0);
    if (lVar2 != 0) {
      uVar1 = (**(code **)**(undefined8 **)
                            (*(long *)(
                                      _Method_UnityEngine_Events_UnityEvent_int__AddListener___12de488
                                      + 0x18) + 0xc0))(uVar1);
      if (lVar2 == 0) {
                    /* WARNING: Subroutine does not return */
        native_sub_432810();
      }
      lVar2 = *(long *)(lVar2 + 0x10);
      if (lVar2 != 0) {
        if ((bRam0000000001340cbd & 1) == 0) {
          native_sub_43273c(&Method_System_Collections_Generic_List_BaseInvokableCall__Add___12dc5b0
                            ,uVar1,0);
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
                    /* WARNING: Subroutine does not return */
      native_sub_432810(0,uVar1,0);
    }
  }
                    /* WARNING: Subroutine does not return */
  native_sub_432810();
}



/* MG_BlocksEngine2.Horizontal.Block.BE2_CstColorDropdownDynamicResize$$OnDisable @ 0x5754f4
 * void MG_BlocksEngine2_Horizontal_Block_BE2_CstColorDropdownDynamicResize__OnDisable (MG_BlocksEngine2_Horizontal_Block_BE2_CstColorDropdownDynamicResize_o* __this, const MethodInfo* method); */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* MG_BlocksEngine2.Horizontal.Block.BE2_CstColorDropdownDynamicResize$$OnDisable
   void MG_BlocksEngine2_Horizontal_Block_BE2_CstColorDropdownDynamicResize__OnDisable
   (MG_BlocksEngine2_Horizontal_Block_BE2_CstColorDropdownDynamicResize_o* __this, const MethodInfo*
   method); */

void native_MG_BlocksEngine2_Horizontal_Block_BE2_CstColorDropdownDynamicResize__OnDisable_5754f4
               (long param_1)

{
  long lVar1;
  
  if ((*(long *)(param_1 + 0x20) == 0) ||
     (lVar1 = native_MG_BlocksEngine2_Utils_BE2_Dropdown__get_onValueChanged_567184(), lVar1 == 0))
  {
                    /* WARNING: Subroutine does not return */
    native_sub_432810();
  }
  lVar1 = *(long *)(lVar1 + 0x10);
  if (lVar1 == 0) {
                    /* WARNING: Subroutine does not return */
    native_sub_432810(0,0);
  }
  if ((bRam0000000001340cbf & 1) == 0) {
    native_sub_43273c(&Method_System_Collections_Generic_List_BaseInvokableCall__Clear___12dc5c0,0);
    bRam0000000001340cbf = 1;
  }
  if (*(long *)(lVar1 + 0x18) != 0) {
    native_System_Collections_Generic_List_Action___Clear_d40e80
              (*(long *)(lVar1 + 0x18),
               _Method_System_Collections_Generic_List_BaseInvokableCall__Clear___12dc5c0);
    *(undefined1 *)(lVar1 + 0x28) = 1;
    return;
  }
                    /* WARNING: Subroutine does not return */
  native_sub_432810();
}



/* MG_BlocksEngine2.Horizontal.Block.BE2_CstColorDropdownDynamicResize$$Resize @ 0x575064
 * void MG_BlocksEngine2_Horizontal_Block_BE2_CstColorDropdownDynamicResize__Resize (MG_BlocksEngine2_Horizontal_Block_BE2_CstColorDropdownDynamicResize_o* __this, const MethodInfo* method); */

/* MG_BlocksEngine2.Horizontal.Block.BE2_CstColorDropdownDynamicResize$$Resize
   void MG_BlocksEngine2_Horizontal_Block_BE2_CstColorDropdownDynamicResize__Resize
   (MG_BlocksEngine2_Horizontal_Block_BE2_CstColorDropdownDynamicResize_o* __this, const MethodInfo*
   method); */

void native_MG_BlocksEngine2_Horizontal_Block_BE2_CstColorDropdownDynamicResize__Resize_575064
               (undefined1 param_1 [16],undefined4 param_2,long param_3)

{
  long lVar1;
  undefined4 uStack_28;
  undefined4 uStack_24;
  
  if ((*(long *)(param_3 + 0x20) != 0) && (*(char *)(*(long *)(param_3 + 0x20) + 0x28) == '\0')) {
    native_MG_BlocksEngine2_Utils_BE2_Dropdown__get_captionTextpreferredWidth_57551c();
    lVar1 = *(long *)(param_3 + 0x18);
    if (lVar1 != 0) {
      native_UnityEngine_RectTransform__get_sizeDelta_764f64(lVar1,0);
      uStack_28 = 0x42700000;
      uStack_24 = param_2;
      if (pcRam000000000133f8e8 == (code *)0x0) {
        pcRam000000000133f8e8 = (code *)native_sub_4326f0(&UNK_00e28502,0);
      }
      (*pcRam000000000133f8e8)(lVar1,&uStack_28);
      return;
    }
                    /* WARNING: Subroutine does not return */
    native_sub_432810();
  }
  return;
}



/* MG_BlocksEngine2.Horizontal.Block.BE2_CstColorDropdownDynamicResize$$LateUpdate @ 0x575614
 * void MG_BlocksEngine2_Horizontal_Block_BE2_CstColorDropdownDynamicResize__LateUpdate (MG_BlocksEngine2_Horizontal_Block_BE2_CstColorDropdownDynamicResize_o* __this, const MethodInfo* method); */

/* MG_BlocksEngine2.Horizontal.Block.BE2_CstColorDropdownDynamicResize$$LateUpdate
   void MG_BlocksEngine2_Horizontal_Block_BE2_CstColorDropdownDynamicResize__LateUpdate
   (MG_BlocksEngine2_Horizontal_Block_BE2_CstColorDropdownDynamicResize_o* __this, const MethodInfo*
   method); */

void native_MG_BlocksEngine2_Horizontal_Block_BE2_CstColorDropdownDynamicResize__LateUpdate_575614
               (long param_1)

{
  if (*(char *)(param_1 + 0x38) != '\0') {
    native_MG_BlocksEngine2_Horizontal_Block_BE2_CstColorDropdownDynamicResize__Resize_575064();
    *(undefined1 *)(param_1 + 0x38) = 0;
  }
  return;
}



/* MG_BlocksEngine2.Horizontal.Block.BE2_CstColorDropdownDynamicResize$$.ctor @ 0x575640
 * void MG_BlocksEngine2_Horizontal_Block_BE2_CstColorDropdownDynamicResize___ctor (MG_BlocksEngine2_Horizontal_Block_BE2_CstColorDropdownDynamicResize_o* __this, const MethodInfo* method); */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* MG_BlocksEngine2.Horizontal.Block.BE2_CstColorDropdownDynamicResize$$.ctor
   void MG_BlocksEngine2_Horizontal_Block_BE2_CstColorDropdownDynamicResize___ctor
   (MG_BlocksEngine2_Horizontal_Block_BE2_CstColorDropdownDynamicResize_o* __this, const MethodInfo*
   method); */

long native_MG_BlocksEngine2_Horizontal_Block_BE2_CstColorDropdownDynamicResize___ctor_575640
               (long param_1)

{
  *(undefined1 *)(param_1 + 0x38) = 1;
  *(undefined8 *)(param_1 + 0x28) = 0x420c0000428c0000;
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



/* MG_BlocksEngine2.Horizontal.Block.BE2_CstColorDropdownDynamicResize$$<OnEnable>b__8_0 @ 0x57565c
 * void MG_BlocksEngine2_Horizontal_Block_BE2_CstColorDropdownDynamicResize___OnEnable_b__8_0 (MG_BlocksEngine2_Horizontal_Block_BE2_CstColorDropdownDynamicResize_o* __this, int32_t _p0_, const MethodInfo* method); */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* MG_BlocksEngine2.Horizontal.Block.BE2_CstColorDropdownDynamicResize$$<OnEnable>b__8_0
   void MG_BlocksEngine2_Horizontal_Block_BE2_CstColorDropdownDynamicResize___OnEnable_b__8_0
   (MG_BlocksEngine2_Horizontal_Block_BE2_CstColorDropdownDynamicResize_o* __this, int32_t _p0_,
   const MethodInfo* method); */

void native_MG_BlocksEngine2_Horizontal_Block_BE2_CstColorDropdownDynamicResize___OnEnable_b__8_0_57565c
               (undefined1 param_1 [16],undefined4 param_2,undefined4 param_3,undefined4 param_4,
               long param_5)

{
  uint uVar1;
  long lVar2;
  ulong uVar3;
  long *plVar4;
  undefined8 *puVar5;
  undefined4 uStack_40;
  undefined4 uStack_3c;
  undefined4 uStack_38;
  undefined4 uStack_34;
  
  native_MG_BlocksEngine2_Horizontal_Block_BE2_CstColorDropdownDynamicResize__Resize_575064();
  if (*(long *)(param_5 + 0x20) == 0) {
                    /* WARNING: Subroutine does not return */
    native_sub_432810();
  }
  lVar2 = native_MG_BlocksEngine2_Utils_BE2_Dropdown__GetSelectedOptionText_567528();
  if ((bRam000000000133ea99 & 1) == 0) {
    native_sub_43273c(&StringLiteral__0000FF_12eb028);
    native_sub_43273c(&StringLiteral_Violet_12f2f38);
    native_sub_43273c(&StringLiteral_Random_12f0870);
    native_sub_43273c(&StringLiteral__2E2B5F_12eb040);
    native_sub_43273c(&StringLiteral_Indigo_12ee840);
    native_sub_43273c(&StringLiteral__FFFFFF_12eb068);
    native_sub_43273c(&StringLiteral_Yellow_12f31e0);
    native_sub_43273c(&StringLiteral_Red_12f0928);
    native_sub_43273c(&StringLiteral__FF7F00_12eb058);
    native_sub_43273c(&StringLiteral__FFFF00_12eb060);
    native_sub_43273c(&StringLiteral__8B00FF_12eb048);
    native_sub_43273c(&StringLiteral_Orange_12f03d0);
    native_sub_43273c(&StringLiteral_Blue_12ec800);
    native_sub_43273c(&StringLiteral_Green_12ee238);
    native_sub_43273c(&StringLiteral__00FF00_12eb030);
    native_sub_43273c(&StringLiteral__FF0000_12eb050);
    bRam000000000133ea99 = 1;
  }
  uStack_40 = native_UnityEngine_Color__get_white_8d9e10(0);
  uStack_3c = param_2;
  uStack_38 = param_3;
  uStack_34 = param_4;
  if (lVar2 == 0) goto LAB_005753d0;
  uVar1 = native__PrivateImplementationDetails___ComputeStringHash_560404(lVar2);
  if (uVar1 < 0xa37f187d) {
    if (uVar1 < 0x727b390c) {
      if (uVar1 == 0x4115d182) {
        uVar3 = native_System_String__op_Equality_afc18c(lVar2,_StringLiteral_Random_12f0870,0);
        if ((uVar3 & 1) == 0) goto LAB_005753d0;
        puVar5 = (undefined8 *)&StringLiteral__FFFFFF_12eb068;
      }
      else {
        if ((uVar1 != 0x727b390b) ||
           (uVar3 = native_System_String__op_Equality_afc18c(lVar2,_StringLiteral_Orange_12f03d0,0),
           (uVar3 & 1) == 0)) goto LAB_005753d0;
        puVar5 = (undefined8 *)&StringLiteral__FF7F00_12eb058;
      }
    }
    else if (uVar1 == 0x938c5e4b) {
      uVar3 = native_System_String__op_Equality_afc18c(lVar2,_StringLiteral_Indigo_12ee840,0);
      if ((uVar3 & 1) == 0) goto LAB_005753d0;
      puVar5 = (undefined8 *)&StringLiteral__2E2B5F_12eb040;
    }
    else {
      if ((uVar1 != 0xa37f187c) ||
         (uVar3 = native_System_String__op_Equality_afc18c(lVar2,_StringLiteral_Red_12f0928,0),
         (uVar3 & 1) == 0)) goto LAB_005753d0;
      puVar5 = (undefined8 *)&StringLiteral__FF0000_12eb050;
    }
  }
  else if (uVar1 < 0xd9cdec6a) {
    if (uVar1 == 0xa953c75c) {
      uVar3 = native_System_String__op_Equality_afc18c(lVar2,_StringLiteral_Green_12ee238,0);
      if ((uVar3 & 1) == 0) goto LAB_005753d0;
      puVar5 = (undefined8 *)&StringLiteral__00FF00_12eb030;
    }
    else {
      if ((uVar1 != 0xd9cdec69) ||
         (uVar3 = native_System_String__op_Equality_afc18c(lVar2,_StringLiteral_Yellow_12f31e0,0),
         (uVar3 & 1) == 0)) goto LAB_005753d0;
      puVar5 = (undefined8 *)&StringLiteral__FFFF00_12eb060;
    }
  }
  else if (uVar1 == 0xe9dd1fed) {
    uVar3 = native_System_String__op_Equality_afc18c(lVar2,_StringLiteral_Blue_12ec800,0);
    if ((uVar3 & 1) == 0) goto LAB_005753d0;
    puVar5 = (undefined8 *)&StringLiteral__0000FF_12eb028;
  }
  else {
    if ((uVar1 != 0xf03bdf12) ||
       (uVar3 = native_System_String__op_Equality_afc18c(lVar2,_StringLiteral_Violet_12f2f38,0),
       (uVar3 & 1) == 0)) goto LAB_005753d0;
    puVar5 = (undefined8 *)&StringLiteral__8B00FF_12eb048;
  }
  native_UnityEngine_ColorUtility__TryParseHtmlString_8da574(*puVar5,&uStack_40,0);
LAB_005753d0:
  plVar4 = *(long **)(param_5 + 0x30);
  if (plVar4 != (long *)0x0) {
    (**(code **)(*plVar4 + 0x2a8))
              (uStack_40,uStack_3c,uStack_38,uStack_34,plVar4,*(undefined8 *)(*plVar4 + 0x2b0));
    return;
  }
                    /* WARNING: Subroutine does not return */
  native_sub_432810();
}


