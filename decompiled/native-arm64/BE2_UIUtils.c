/* ARM64 IL2CPP native pseudocode from Ghidra.
 * Recovered implementation, not original C# source.
 * Function boundaries follow the IL2CPP method address table. */


/* MG_BlocksEngine2.UI.BE2_UIUtils$$ForceRebuildLayout @ 0x61aa04
 * void MG_BlocksEngine2_UI_BE2_UIUtils__ForceRebuildLayout (UnityEngine_RectTransform_o* rectTransform, const MethodInfo* method); */

/* MG_BlocksEngine2.UI.BE2_UIUtils$$ForceRebuildLayout
   void MG_BlocksEngine2_UI_BE2_UIUtils__ForceRebuildLayout (UnityEngine_RectTransform_o*
   rectTransform, const MethodInfo* method); */

void native_MG_BlocksEngine2_UI_BE2_UIUtils__ForceRebuildLayout_61aa04(undefined8 param_1)

{
  long lVar1;
  long lVar2;
  ulong uVar3;
  undefined8 uVar4;
  undefined8 uVar5;
  
  lVar1 = native_MG_BlocksEngine2_Core_BE2_ExecutionManager__get_Instance_564464(0);
  lVar2 = native_MG_BlocksEngine2_UI_BE2_UIUtils__C_RebuildLayout_61aa48(param_1);
  if (lVar1 == 0) {
                    /* WARNING: Subroutine does not return */
    native_sub_432810();
  }
  if (lVar2 == 0) {
    native_sub_432740(&System_NullReferenceException_TypeInfo_12d5498,0,0);
    uVar4 = native_sub_432808();
    uVar5 = native_sub_432740(&StringLiteral_routine_is_null_12f5ec0);
    native_System_NullReferenceException___ctor_ad2894(uVar4,uVar5,0);
  }
  else {
    if (pcRam0000000001340fe8 == (code *)0x0) {
      pcRam0000000001340fe8 = (code *)native_sub_4326f0(&UNK_00e2f589);
    }
    uVar3 = (*pcRam0000000001340fe8)(lVar1);
    if ((uVar3 & 1) != 0) {
      if (pcRam0000000001340ff8 == (code *)0x0) {
        pcRam0000000001340ff8 = (code *)native_sub_4326f0(&UNK_00e2f61c);
      }
                    /* WARNING: Could not recover jumptable at 0x008e91f0. Too many branches */
                    /* WARNING: Treating indirect jump as call */
      (*pcRam0000000001340ff8)(lVar1,lVar2);
      return;
    }
    native_sub_432740(&System_ArgumentException_TypeInfo_12d3800);
    uVar4 = native_sub_432808();
    uVar5 = native_sub_432740(&
                              StringLiteral_Coroutines_can_only_be_stopped_on_a_MonoBehaviour_12ed328
                             );
    native_System_ArgumentException___ctor_953858(uVar4,uVar5,0);
  }
  uVar5 = native_sub_432740(&Method_UnityEngine_MonoBehaviour_StartCoroutine___12e55d8);
                    /* WARNING: Subroutine does not return */
  native_sub_4327dc(uVar4,uVar5);
}



/* MG_BlocksEngine2.UI.BE2_UIUtils$$C_RebuildLayout @ 0x61aa48
 * System_Collections_IEnumerator_o* MG_BlocksEngine2_UI_BE2_UIUtils__C_RebuildLayout (UnityEngine_RectTransform_o* rectTransform, const MethodInfo* method); */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* MG_BlocksEngine2.UI.BE2_UIUtils$$C_RebuildLayout
   System_Collections_IEnumerator_o* MG_BlocksEngine2_UI_BE2_UIUtils__C_RebuildLayout
   (UnityEngine_RectTransform_o* rectTransform, const MethodInfo* method); */

long native_MG_BlocksEngine2_UI_BE2_UIUtils__C_RebuildLayout_61aa48(undefined8 param_1)

{
  long lVar1;
  
  if ((bRam000000000133eec3 & 1) == 0) {
    native_sub_43273c(&MG_BlocksEngine2_UI_BE2_UIUtils__C_RebuildLayout_d__1_TypeInfo_12d7068);
    bRam000000000133eec3 = 1;
  }
  lVar1 = native_sub_432808(_MG_BlocksEngine2_UI_BE2_UIUtils__C_RebuildLayout_d__1_TypeInfo_12d7068)
  ;
  native_MG_BlocksEngine2_UI_BE2_UIUtils__C_RebuildLayout_d__1___ctor_548cdc(lVar1,0,0);
  if (lVar1 != 0) {
    *(undefined8 *)(lVar1 + 0x20) = param_1;
    native_sub_4326e0((undefined8 *)(lVar1 + 0x20),param_1);
    return lVar1;
  }
                    /* WARNING: Subroutine does not return */
  native_sub_432810();
}


