/* ARM64 IL2CPP native pseudocode from Ghidra.
 * Recovered implementation, not original C# source.
 * Function boundaries follow the IL2CPP method address table. */


/* TMPro.Examples.VertexColorCycler$$Awake @ 0x94df88
 * void TMPro_Examples_VertexColorCycler__Awake (TMPro_Examples_VertexColorCycler_o* __this, const MethodInfo* method); */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* TMPro.Examples.VertexColorCycler$$Awake
   void TMPro_Examples_VertexColorCycler__Awake (TMPro_Examples_VertexColorCycler_o* __this, const
   MethodInfo* method); */

void native_TMPro_Examples_VertexColorCycler__Awake_94df88(long param_1)

{
  ulong *puVar1;
  char cVar2;
  bool bVar3;
  undefined8 uVar4;
  
  if ((bRam0000000001341473 & 1) == 0) {
    native_sub_43273c(&Method_UnityEngine_Component_GetComponent_TMP_Text____12e2b38);
    bRam0000000001341473 = 1;
  }
  uVar4 = native_UnityEngine_Component__GetComponent_ActiveAnimation__49daec
                    (param_1,_Method_UnityEngine_Component_GetComponent_TMP_Text____12e2b38);
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



/* TMPro.Examples.VertexColorCycler$$Start @ 0x94dfe4
 * void TMPro_Examples_VertexColorCycler__Start (TMPro_Examples_VertexColorCycler_o* __this, const MethodInfo* method); */

/* TMPro.Examples.VertexColorCycler$$Start
   void TMPro_Examples_VertexColorCycler__Start (TMPro_Examples_VertexColorCycler_o* __this, const
   MethodInfo* method); */

void native_TMPro_Examples_VertexColorCycler__Start_94dfe4(undefined8 param_1)

{
  ulong uVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  long lVar4;
  
  lVar4 = native_TMPro_Examples_VertexColorCycler__AnimateVertexColors_94e010();
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



/* TMPro.Examples.VertexColorCycler$$AnimateVertexColors @ 0x94e010
 * System_Collections_IEnumerator_o* TMPro_Examples_VertexColorCycler__AnimateVertexColors (TMPro_Examples_VertexColorCycler_o* __this, const MethodInfo* method); */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* TMPro.Examples.VertexColorCycler$$AnimateVertexColors
   System_Collections_IEnumerator_o* TMPro_Examples_VertexColorCycler__AnimateVertexColors
   (TMPro_Examples_VertexColorCycler_o* __this, const MethodInfo* method); */

long native_TMPro_Examples_VertexColorCycler__AnimateVertexColors_94e010(undefined8 param_1)

{
  long lVar1;
  
  if ((bRam0000000001341474 & 1) == 0) {
    native_sub_43273c(&TMPro_Examples_VertexColorCycler__AnimateVertexColors_d__3_TypeInfo_12d7b70);
    bRam0000000001341474 = 1;
  }
  lVar1 = native_sub_432808(
                           _TMPro_Examples_VertexColorCycler__AnimateVertexColors_d__3_TypeInfo_12d7b70
                           );
  native_TMPro_Examples_VertexColorCycler__AnimateVertexColors_d__3___ctor_55c6a8(lVar1,0,0);
  if (lVar1 != 0) {
    *(undefined8 *)(lVar1 + 0x20) = param_1;
    native_sub_4326e0((undefined8 *)(lVar1 + 0x20),param_1);
    return lVar1;
  }
                    /* WARNING: Subroutine does not return */
  native_sub_432810();
}



/* TMPro.Examples.VertexColorCycler$$.ctor @ 0x94e088
 * void TMPro_Examples_VertexColorCycler___ctor (TMPro_Examples_VertexColorCycler_o* __this, const MethodInfo* method); */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* TMPro.Examples.VertexColorCycler$$.ctor
   void TMPro_Examples_VertexColorCycler___ctor (TMPro_Examples_VertexColorCycler_o* __this, const
   MethodInfo* method); */

undefined1  [16] native_TMPro_Examples_VertexColorCycler___ctor_94e088(ulong param_1)

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


