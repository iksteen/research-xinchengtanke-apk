/* ARM64 IL2CPP native pseudocode from Ghidra.
 * Recovered implementation, not original C# source.
 * Function boundaries follow the IL2CPP method address table. */


/* TMPro.Examples.ShaderPropAnimator$$Awake @ 0x73d6cc
 * void TMPro_Examples_ShaderPropAnimator__Awake (TMPro_Examples_ShaderPropAnimator_o* __this, const MethodInfo* method); */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* TMPro.Examples.ShaderPropAnimator$$Awake
   void TMPro_Examples_ShaderPropAnimator__Awake (TMPro_Examples_ShaderPropAnimator_o* __this, const
   MethodInfo* method); */

void native_TMPro_Examples_ShaderPropAnimator__Awake_73d6cc(long param_1)

{
  ulong *puVar1;
  char cVar2;
  bool bVar3;
  undefined8 uVar4;
  undefined8 *puVar5;
  
  if ((bRam000000000133f618 & 1) == 0) {
    native_sub_43273c(&Method_UnityEngine_Component_GetComponent_Renderer____12e2ad8);
    bRam000000000133f618 = 1;
  }
  uVar4 = native_UnityEngine_Component__GetComponent_ActiveAnimation__49daec
                    (param_1,_Method_UnityEngine_Component_GetComponent_Renderer____12e2ad8);
  *(undefined8 *)(param_1 + 0x18) = uVar4;
  native_sub_4326e0(param_1 + 0x18);
  if (*(long *)(param_1 + 0x18) != 0) {
    uVar4 = native_UnityEngine_Renderer__get_material_768f1c(*(long *)(param_1 + 0x18),0);
    puVar5 = (undefined8 *)(param_1 + 0x20);
    *puVar5 = uVar4;
    if (iRam0000000001345318 != 0) {
      puVar1 = (ulong *)(((ulong)puVar5 >> 0x12 & 0x7fff) * 8 + 0x138ecd8);
      do {
        cVar2 = '\x01';
        bVar3 = (bool)ExclusiveMonitorPass(puVar1,0x10);
        if (bVar3) {
          *puVar1 = *puVar1 | 1L << ((ulong)puVar5 >> 0xc & 0x3f);
          cVar2 = ExclusiveMonitorsStatus();
        }
      } while (cVar2 != '\0');
    }
    return;
  }
                    /* WARNING: Subroutine does not return */
  native_sub_432810();
}



/* TMPro.Examples.ShaderPropAnimator$$Start @ 0x73d74c
 * void TMPro_Examples_ShaderPropAnimator__Start (TMPro_Examples_ShaderPropAnimator_o* __this, const MethodInfo* method); */

/* TMPro.Examples.ShaderPropAnimator$$Start
   void TMPro_Examples_ShaderPropAnimator__Start (TMPro_Examples_ShaderPropAnimator_o* __this, const
   MethodInfo* method); */

void native_TMPro_Examples_ShaderPropAnimator__Start_73d74c(undefined8 param_1)

{
  long lVar1;
  ulong uVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  
  lVar1 = native_TMPro_Examples_ShaderPropAnimator__AnimateProperties_73d778();
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



/* TMPro.Examples.ShaderPropAnimator$$AnimateProperties @ 0x73d778
 * System_Collections_IEnumerator_o* TMPro_Examples_ShaderPropAnimator__AnimateProperties (TMPro_Examples_ShaderPropAnimator_o* __this, const MethodInfo* method); */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* TMPro.Examples.ShaderPropAnimator$$AnimateProperties
   System_Collections_IEnumerator_o* TMPro_Examples_ShaderPropAnimator__AnimateProperties
   (TMPro_Examples_ShaderPropAnimator_o* __this, const MethodInfo* method); */

long native_TMPro_Examples_ShaderPropAnimator__AnimateProperties_73d778(undefined8 param_1)

{
  long lVar1;
  
  if ((bRam000000000133f619 & 1) == 0) {
    native_sub_43273c(&TMPro_Examples_ShaderPropAnimator__AnimateProperties_d__6_TypeInfo_12d7690);
    bRam000000000133f619 = 1;
  }
  lVar1 = native_sub_432808(
                           _TMPro_Examples_ShaderPropAnimator__AnimateProperties_d__6_TypeInfo_12d7690
                           );
  native_TMPro_Examples_ShaderPropAnimator__AnimateProperties_d__6___ctor_54d078(lVar1,0,0);
  if (lVar1 != 0) {
    *(undefined8 *)(lVar1 + 0x20) = param_1;
    native_sub_4326e0((undefined8 *)(lVar1 + 0x20),param_1);
    return lVar1;
  }
                    /* WARNING: Subroutine does not return */
  native_sub_432810();
}



/* TMPro.Examples.ShaderPropAnimator$$.ctor @ 0x73d7f0
 * void TMPro_Examples_ShaderPropAnimator___ctor (TMPro_Examples_ShaderPropAnimator_o* __this, const MethodInfo* method); */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* TMPro.Examples.ShaderPropAnimator$$.ctor
   void TMPro_Examples_ShaderPropAnimator___ctor (TMPro_Examples_ShaderPropAnimator_o* __this, const
   MethodInfo* method); */

undefined1  [16] native_TMPro_Examples_ShaderPropAnimator___ctor_73d7f0(ulong param_1)

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


