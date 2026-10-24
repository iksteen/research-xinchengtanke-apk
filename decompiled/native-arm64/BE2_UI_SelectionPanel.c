/* ARM64 IL2CPP native pseudocode from Ghidra.
 * Recovered implementation, not original C# source.
 * Function boundaries follow the IL2CPP method address table. */


/* MG_BlocksEngine2.UI.BE2_UI_SelectionPanel$$OnValidate @ 0xdcc0e4
 * void MG_BlocksEngine2_UI_BE2_UI_SelectionPanel__OnValidate (MG_BlocksEngine2_UI_BE2_UI_SelectionPanel_o* __this, const MethodInfo* method); */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* MG_BlocksEngine2.UI.BE2_UI_SelectionPanel$$OnValidate
   void MG_BlocksEngine2_UI_BE2_UI_SelectionPanel__OnValidate
   (MG_BlocksEngine2_UI_BE2_UI_SelectionPanel_o* __this, const MethodInfo* method); */

void native_MG_BlocksEngine2_UI_BE2_UI_SelectionPanel__OnValidate_dcc0e4(undefined8 param_1)

{
  ulong uVar1;
  long *plVar2;
  long lVar3;
  undefined8 uVar4;
  
  if ((bRam0000000001346df3 & 1) == 0) {
    native_sub_43273c(&Method_UnityEngine_Component_GetComponent_Image____12e2a78);
    bRam0000000001346df3 = 1;
  }
  plVar2 = (long *)native_UnityEngine_Component__GetComponent_ActiveAnimation__49daec
                             (param_1,_Method_UnityEngine_Component_GetComponent_Image____12e2a78);
  if (plVar2 != (long *)0x0) {
    (**(code **)(*plVar2 + 0x2c8))(plVar2,0,*(undefined8 *)(*plVar2 + 0x2d0));
    lVar3 = native_UnityEngine_Component__get_transform_8da62c(param_1,0);
    if (lVar3 != 0) {
      uVar4 = native_UnityEngine_Transform__GetChild_772ef0(lVar3,0,0);
      lVar3 = native_MG_BlocksEngine2_Utils_BE2_Text__GetBE2Text_610e74(uVar4,0);
      if ((lVar3 == 0) || (*(char *)(lVar3 + 0x28) != '\0')) {
        return;
      }
      if ((bRam000000000133eec2 & 1) == 0) {
        native_sub_43273c(&UnityEngine_Object_TypeInfo_12d54e0,0,0);
        bRam000000000133eec2 = 1;
      }
      uVar4 = *(undefined8 *)(lVar3 + 0x20);
      if (((*(byte *)(_UnityEngine_Object_TypeInfo_12d54e0 + 0x133) >> 2 & 1) != 0) &&
         (*(int *)(_UnityEngine_Object_TypeInfo_12d54e0 + 0xe0) == 0)) {
        native_sub_4327ec();
      }
      uVar1 = native_UnityEngine_Object__op_Implicit_8e1b98(uVar4,0);
      if ((uVar1 & 1) == 0) {
        uVar4 = *(undefined8 *)(lVar3 + 0x18);
        if (((*(byte *)(_UnityEngine_Object_TypeInfo_12d54e0 + 0x133) >> 2 & 1) != 0) &&
           (*(int *)(_UnityEngine_Object_TypeInfo_12d54e0 + 0xe0) == 0)) {
          native_sub_4327ec();
        }
        uVar1 = native_UnityEngine_Object__op_Implicit_8e1b98(uVar4,0);
        if ((uVar1 & 1) == 0) {
          return;
        }
        plVar2 = *(long **)(lVar3 + 0x18);
      }
      else {
        plVar2 = *(long **)(lVar3 + 0x20);
      }
      if (plVar2 != (long *)0x0) {
                    /* WARNING: Could not recover jumptable at 0x0061a9b8. Too many branches */
                    /* WARNING: Treating indirect jump as call */
        (**(code **)(*plVar2 + 0x2c8))(plVar2,0,*(undefined8 *)(*plVar2 + 0x2d0));
        return;
      }
                    /* WARNING: Subroutine does not return */
      native_sub_432810();
    }
  }
                    /* WARNING: Subroutine does not return */
  native_sub_432810();
}



/* MG_BlocksEngine2.UI.BE2_UI_SelectionPanel$$Awake @ 0xdcc194
 * void MG_BlocksEngine2_UI_BE2_UI_SelectionPanel__Awake (MG_BlocksEngine2_UI_BE2_UI_SelectionPanel_o* __this, const MethodInfo* method); */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* MG_BlocksEngine2.UI.BE2_UI_SelectionPanel$$Awake
   void MG_BlocksEngine2_UI_BE2_UI_SelectionPanel__Awake
   (MG_BlocksEngine2_UI_BE2_UI_SelectionPanel_o* __this, const MethodInfo* method); */

void native_MG_BlocksEngine2_UI_BE2_UI_SelectionPanel__Awake_dcc194(long param_1)

{
  ulong *puVar1;
  char cVar2;
  bool bVar3;
  undefined8 uVar4;
  
  if ((bRam0000000001346df4 & 1) == 0) {
    native_sub_43273c(&
                      Method_UnityEngine_Component_GetComponent_HorizontalOrVerticalLayoutGroup____12e29f8
                     );
    native_sub_43273c(&Method_UnityEngine_Component_GetComponent_RectTransform____12e2ad0);
    bRam0000000001346df4 = 1;
  }
  uVar4 = native_UnityEngine_Component__GetComponent_ActiveAnimation__49daec
                    (param_1,
                     _Method_UnityEngine_Component_GetComponent_HorizontalOrVerticalLayoutGroup____12e29f8
                    );
  *(undefined8 *)(param_1 + 0x18) = uVar4;
  native_sub_4326e0(param_1 + 0x18);
  uVar4 = native_UnityEngine_Component__GetComponent_ActiveAnimation__49daec
                    (param_1,_Method_UnityEngine_Component_GetComponent_RectTransform____12e2ad0);
  *(undefined8 *)(param_1 + 0x20) = uVar4;
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



/* MG_BlocksEngine2.UI.BE2_UI_SelectionPanel$$Start @ 0xdcc220
 * void MG_BlocksEngine2_UI_BE2_UI_SelectionPanel__Start (MG_BlocksEngine2_UI_BE2_UI_SelectionPanel_o* __this, const MethodInfo* method); */

/* MG_BlocksEngine2.UI.BE2_UI_SelectionPanel$$Start
   void MG_BlocksEngine2_UI_BE2_UI_SelectionPanel__Start
   (MG_BlocksEngine2_UI_BE2_UI_SelectionPanel_o* __this, const MethodInfo* method); */

void native_MG_BlocksEngine2_UI_BE2_UI_SelectionPanel__Start_dcc220(undefined8 param_1)

{
  ulong uVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  long lVar4;
  
  lVar4 = native_MG_BlocksEngine2_UI_BE2_UI_SelectionPanel__C_UpdateLayout_dcc278();
  if (lVar4 == 0) {
    native_sub_432740(&System_NullReferenceException_TypeInfo_12d5498,0,0);
    uVar2 = native_sub_432808();
    uVar3 = native_sub_432740(&StringLiteral_routine_is_null_12f5ec0);
    native_System_NullReferenceException___ctor_ad2894(uVar2,uVar3,0);
  }
  else {
    if (pcRam0000000001340fe8 == (code *)0x0) {
      pcRam0000000001340fe8 = (code *)native_sub_4326f0(&UNK_00e2f589);
    }
    uVar1 = (*pcRam0000000001340fe8)(param_1);
    if ((uVar1 & 1) != 0) {
      if (pcRam0000000001340ff8 == (code *)0x0) {
        pcRam0000000001340ff8 = (code *)native_sub_4326f0(&UNK_00e2f61c);
      }
                    /* WARNING: Could not recover jumptable at 0x008e91f0. Too many branches */
                    /* WARNING: Treating indirect jump as call */
      (*pcRam0000000001340ff8)(param_1,lVar4);
      return;
    }
    native_sub_432740(&System_ArgumentException_TypeInfo_12d3800);
    uVar2 = native_sub_432808();
    uVar3 = native_sub_432740(&
                              StringLiteral_Coroutines_can_only_be_stopped_on_a_MonoBehaviour_12ed328
                             );
    native_System_ArgumentException___ctor_953858(uVar2,uVar3,0);
  }
  uVar3 = native_sub_432740(&Method_UnityEngine_MonoBehaviour_StartCoroutine___12e55d8);
                    /* WARNING: Subroutine does not return */
  native_sub_4327dc(uVar2,uVar3);
}



/* MG_BlocksEngine2.UI.BE2_UI_SelectionPanel$$UpdateLayout @ 0xdcc24c
 * void MG_BlocksEngine2_UI_BE2_UI_SelectionPanel__UpdateLayout (MG_BlocksEngine2_UI_BE2_UI_SelectionPanel_o* __this, const MethodInfo* method); */

/* MG_BlocksEngine2.UI.BE2_UI_SelectionPanel$$UpdateLayout
   void MG_BlocksEngine2_UI_BE2_UI_SelectionPanel__UpdateLayout
   (MG_BlocksEngine2_UI_BE2_UI_SelectionPanel_o* __this, const MethodInfo* method); */

void native_MG_BlocksEngine2_UI_BE2_UI_SelectionPanel__UpdateLayout_dcc24c(undefined8 param_1)

{
  ulong uVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  long lVar4;
  
  lVar4 = native_MG_BlocksEngine2_UI_BE2_UI_SelectionPanel__C_UpdateLayout_dcc278();
  if (lVar4 == 0) {
    native_sub_432740(&System_NullReferenceException_TypeInfo_12d5498,0,0);
    uVar2 = native_sub_432808();
    uVar3 = native_sub_432740(&StringLiteral_routine_is_null_12f5ec0);
    native_System_NullReferenceException___ctor_ad2894(uVar2,uVar3,0);
  }
  else {
    if (pcRam0000000001340fe8 == (code *)0x0) {
      pcRam0000000001340fe8 = (code *)native_sub_4326f0(&UNK_00e2f589);
    }
    uVar1 = (*pcRam0000000001340fe8)(param_1);
    if ((uVar1 & 1) != 0) {
      if (pcRam0000000001340ff8 == (code *)0x0) {
        pcRam0000000001340ff8 = (code *)native_sub_4326f0(&UNK_00e2f61c);
      }
                    /* WARNING: Could not recover jumptable at 0x008e91f0. Too many branches */
                    /* WARNING: Treating indirect jump as call */
      (*pcRam0000000001340ff8)(param_1,lVar4);
      return;
    }
    native_sub_432740(&System_ArgumentException_TypeInfo_12d3800);
    uVar2 = native_sub_432808();
    uVar3 = native_sub_432740(&
                              StringLiteral_Coroutines_can_only_be_stopped_on_a_MonoBehaviour_12ed328
                             );
    native_System_ArgumentException___ctor_953858(uVar2,uVar3,0);
  }
  uVar3 = native_sub_432740(&Method_UnityEngine_MonoBehaviour_StartCoroutine___12e55d8);
                    /* WARNING: Subroutine does not return */
  native_sub_4327dc(uVar2,uVar3);
}



/* MG_BlocksEngine2.UI.BE2_UI_SelectionPanel$$C_UpdateLayout @ 0xdcc278
 * System_Collections_IEnumerator_o* MG_BlocksEngine2_UI_BE2_UI_SelectionPanel__C_UpdateLayout (MG_BlocksEngine2_UI_BE2_UI_SelectionPanel_o* __this, const MethodInfo* method); */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* MG_BlocksEngine2.UI.BE2_UI_SelectionPanel$$C_UpdateLayout
   System_Collections_IEnumerator_o* MG_BlocksEngine2_UI_BE2_UI_SelectionPanel__C_UpdateLayout
   (MG_BlocksEngine2_UI_BE2_UI_SelectionPanel_o* __this, const MethodInfo* method); */

long native_MG_BlocksEngine2_UI_BE2_UI_SelectionPanel__C_UpdateLayout_dcc278(undefined8 param_1)

{
  long lVar1;
  
  if ((bRam0000000001346df5 & 1) == 0) {
    native_sub_43273c(&
                      MG_BlocksEngine2_UI_BE2_UI_SelectionPanel__C_UpdateLayout_d__6_TypeInfo_12d7090
                     );
    bRam0000000001346df5 = 1;
  }
  lVar1 = native_sub_432808(
                           _MG_BlocksEngine2_UI_BE2_UI_SelectionPanel__C_UpdateLayout_d__6_TypeInfo_12d7090
                           );
  native_MG_BlocksEngine2_UI_BE2_UI_SelectionPanel__C_UpdateLayout_d__6___ctor_5490a0(lVar1,0,0);
  if (lVar1 != 0) {
    *(undefined8 *)(lVar1 + 0x20) = param_1;
    native_sub_4326e0((undefined8 *)(lVar1 + 0x20),param_1);
    return lVar1;
  }
                    /* WARNING: Subroutine does not return */
  native_sub_432810();
}



/* MG_BlocksEngine2.UI.BE2_UI_SelectionPanel$$.ctor @ 0xdcc2f0
 * void MG_BlocksEngine2_UI_BE2_UI_SelectionPanel___ctor (MG_BlocksEngine2_UI_BE2_UI_SelectionPanel_o* __this, const MethodInfo* method); */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* MG_BlocksEngine2.UI.BE2_UI_SelectionPanel$$.ctor
   void MG_BlocksEngine2_UI_BE2_UI_SelectionPanel___ctor
   (MG_BlocksEngine2_UI_BE2_UI_SelectionPanel_o* __this, const MethodInfo* method); */

undefined1  [16] native_MG_BlocksEngine2_UI_BE2_UI_SelectionPanel___ctor_dcc2f0(ulong param_1)

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


