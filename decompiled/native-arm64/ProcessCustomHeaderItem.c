/* ARM64 IL2CPP native pseudocode from Ghidra.
 * Recovered implementation, not original C# source.
 * Function boundaries follow the IL2CPP method address table. */


/* MG_BlocksEngine2.Horizontal.ProcessCustomHeaderItem$$Awake @ 0x73b530
 * void MG_BlocksEngine2_Horizontal_ProcessCustomHeaderItem__Awake (MG_BlocksEngine2_Horizontal_ProcessCustomHeaderItem_o* __this, const MethodInfo* method); */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* MG_BlocksEngine2.Horizontal.ProcessCustomHeaderItem$$Awake
   void MG_BlocksEngine2_Horizontal_ProcessCustomHeaderItem__Awake
   (MG_BlocksEngine2_Horizontal_ProcessCustomHeaderItem_o* __this, const MethodInfo* method); */

void native_MG_BlocksEngine2_Horizontal_ProcessCustomHeaderItem__Awake_73b530(long param_1)

{
  ulong *puVar1;
  char cVar2;
  bool bVar3;
  undefined8 uVar4;
  
  if ((bRam000000000133f5ff & 1) == 0) {
    native_sub_43273c(&
                      Method_UnityEngine_Component_GetComponent_BE2_BlockSectionHeader_Custom____12e2928
                     );
    bRam000000000133f5ff = 1;
  }
  uVar4 = native_UnityEngine_Component__GetComponent_ActiveAnimation__49daec
                    (param_1,
                     _Method_UnityEngine_Component_GetComponent_BE2_BlockSectionHeader_Custom____12e2928
                    );
  *(undefined8 *)(param_1 + 0x18) = uVar4;
  if (iRam0000000001345318 != 0) {
    puVar1 = (ulong *)((param_1 + 0x18U >> 0x12 & 0x7fff) * 8 + 0x138ecd8);
    do {
      cVar2 = '\x01';
      bVar3 = (bool)ExclusiveMonitorPass(puVar1,0x10);
      if (bVar3) {
        *puVar1 = *puVar1 | 1L << (param_1 + 0x18U >> 0xc & 0x3f);
        cVar2 = ExclusiveMonitorsStatus();
      }
    } while (cVar2 != '\0');
  }
  return;
}



/* MG_BlocksEngine2.Horizontal.ProcessCustomHeaderItem$$Start @ 0x73b58c
 * void MG_BlocksEngine2_Horizontal_ProcessCustomHeaderItem__Start (MG_BlocksEngine2_Horizontal_ProcessCustomHeaderItem_o* __this, const MethodInfo* method); */

/* MG_BlocksEngine2.Horizontal.ProcessCustomHeaderItem$$Start
   void MG_BlocksEngine2_Horizontal_ProcessCustomHeaderItem__Start
   (MG_BlocksEngine2_Horizontal_ProcessCustomHeaderItem_o* __this, const MethodInfo* method); */

void native_MG_BlocksEngine2_Horizontal_ProcessCustomHeaderItem__Start_73b58c(undefined8 param_1)

{
  long lVar1;
  ulong uVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  
  lVar1 = native_MG_BlocksEngine2_Horizontal_ProcessCustomHeaderItem__C_Process_73b5e4();
  if (lVar1 == 0) {
    native_sub_432740(&System_NullReferenceException_TypeInfo_12d5498,0,0);
    uVar3 = native_sub_432808();
    uVar4 = native_sub_432740(&StringLiteral_routine_is_null_12f5ec0);
    native_System_NullReferenceException___ctor_ad2894(uVar3,uVar4,0);
  }
  else {
    if (pcRam0000000001340fe8 == (code *)0x0) {
      pcRam0000000001340fe8 = (code *)native_sub_4326f0(&UNK_00e2f589);
    }
    uVar2 = (*pcRam0000000001340fe8)(param_1);
    if ((uVar2 & 1) != 0) {
      if (pcRam0000000001340ff8 == (code *)0x0) {
        pcRam0000000001340ff8 = (code *)native_sub_4326f0(&UNK_00e2f61c);
      }
                    /* WARNING: Could not recover jumptable at 0x008e91f0. Too many branches */
                    /* WARNING: Treating indirect jump as call */
      (*pcRam0000000001340ff8)(param_1,lVar1);
      return;
    }
    native_sub_432740(&System_ArgumentException_TypeInfo_12d3800);
    uVar3 = native_sub_432808();
    uVar4 = native_sub_432740(&
                              StringLiteral_Coroutines_can_only_be_stopped_on_a_MonoBehaviour_12ed328
                             );
    native_System_ArgumentException___ctor_953858(uVar3,uVar4,0);
  }
  uVar4 = native_sub_432740(&Method_UnityEngine_MonoBehaviour_StartCoroutine___12e55d8);
                    /* WARNING: Subroutine does not return */
  native_sub_4327dc(uVar3,uVar4);
}



/* MG_BlocksEngine2.Horizontal.ProcessCustomHeaderItem$$Process @ 0x73b5b8
 * void MG_BlocksEngine2_Horizontal_ProcessCustomHeaderItem__Process (MG_BlocksEngine2_Horizontal_ProcessCustomHeaderItem_o* __this, const MethodInfo* method); */

/* MG_BlocksEngine2.Horizontal.ProcessCustomHeaderItem$$Process
   void MG_BlocksEngine2_Horizontal_ProcessCustomHeaderItem__Process
   (MG_BlocksEngine2_Horizontal_ProcessCustomHeaderItem_o* __this, const MethodInfo* method); */

void native_MG_BlocksEngine2_Horizontal_ProcessCustomHeaderItem__Process_73b5b8(undefined8 param_1)

{
  long lVar1;
  ulong uVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  
  lVar1 = native_MG_BlocksEngine2_Horizontal_ProcessCustomHeaderItem__C_Process_73b5e4();
  if (lVar1 == 0) {
    native_sub_432740(&System_NullReferenceException_TypeInfo_12d5498,0,0);
    uVar3 = native_sub_432808();
    uVar4 = native_sub_432740(&StringLiteral_routine_is_null_12f5ec0);
    native_System_NullReferenceException___ctor_ad2894(uVar3,uVar4,0);
  }
  else {
    if (pcRam0000000001340fe8 == (code *)0x0) {
      pcRam0000000001340fe8 = (code *)native_sub_4326f0(&UNK_00e2f589);
    }
    uVar2 = (*pcRam0000000001340fe8)(param_1);
    if ((uVar2 & 1) != 0) {
      if (pcRam0000000001340ff8 == (code *)0x0) {
        pcRam0000000001340ff8 = (code *)native_sub_4326f0(&UNK_00e2f61c);
      }
                    /* WARNING: Could not recover jumptable at 0x008e91f0. Too many branches */
                    /* WARNING: Treating indirect jump as call */
      (*pcRam0000000001340ff8)(param_1,lVar1);
      return;
    }
    native_sub_432740(&System_ArgumentException_TypeInfo_12d3800);
    uVar3 = native_sub_432808();
    uVar4 = native_sub_432740(&
                              StringLiteral_Coroutines_can_only_be_stopped_on_a_MonoBehaviour_12ed328
                             );
    native_System_ArgumentException___ctor_953858(uVar3,uVar4,0);
  }
  uVar4 = native_sub_432740(&Method_UnityEngine_MonoBehaviour_StartCoroutine___12e55d8);
                    /* WARNING: Subroutine does not return */
  native_sub_4327dc(uVar3,uVar4);
}



/* MG_BlocksEngine2.Horizontal.ProcessCustomHeaderItem$$C_Process @ 0x73b5e4
 * System_Collections_IEnumerator_o* MG_BlocksEngine2_Horizontal_ProcessCustomHeaderItem__C_Process (MG_BlocksEngine2_Horizontal_ProcessCustomHeaderItem_o* __this, const MethodInfo* method); */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* MG_BlocksEngine2.Horizontal.ProcessCustomHeaderItem$$C_Process
   System_Collections_IEnumerator_o* MG_BlocksEngine2_Horizontal_ProcessCustomHeaderItem__C_Process
   (MG_BlocksEngine2_Horizontal_ProcessCustomHeaderItem_o* __this, const MethodInfo* method); */

long native_MG_BlocksEngine2_Horizontal_ProcessCustomHeaderItem__C_Process_73b5e4
               (undefined8 param_1)

{
  long lVar1;
  
  if ((bRam000000000133f600 & 1) == 0) {
    native_sub_43273c(&
                      MG_BlocksEngine2_Horizontal_ProcessCustomHeaderItem__C_Process_d__4_TypeInfo_12d75b0
                     );
    bRam000000000133f600 = 1;
  }
  lVar1 = native_sub_432808(
                           _MG_BlocksEngine2_Horizontal_ProcessCustomHeaderItem__C_Process_d__4_TypeInfo_12d75b0
                           );
  native_MG_BlocksEngine2_Horizontal_ProcessCustomHeaderItem__C_Process_d__4___ctor_54cdfc
            (lVar1,0,0);
  if (lVar1 != 0) {
    *(undefined8 *)(lVar1 + 0x20) = param_1;
    native_sub_4326e0((undefined8 *)(lVar1 + 0x20),param_1);
    return lVar1;
  }
                    /* WARNING: Subroutine does not return */
  native_sub_432810();
}



/* MG_BlocksEngine2.Horizontal.ProcessCustomHeaderItem$$.ctor @ 0x73b65c
 * void MG_BlocksEngine2_Horizontal_ProcessCustomHeaderItem___ctor (MG_BlocksEngine2_Horizontal_ProcessCustomHeaderItem_o* __this, const MethodInfo* method); */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* MG_BlocksEngine2.Horizontal.ProcessCustomHeaderItem$$.ctor
   void MG_BlocksEngine2_Horizontal_ProcessCustomHeaderItem___ctor
   (MG_BlocksEngine2_Horizontal_ProcessCustomHeaderItem_o* __this, const MethodInfo* method); */

undefined1  [16]
native_MG_BlocksEngine2_Horizontal_ProcessCustomHeaderItem___ctor_73b65c(ulong param_1)

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


