/* ARM64 IL2CPP native pseudocode from Ghidra.
 * Recovered implementation, not original C# source.
 * Function boundaries follow the IL2CPP method address table. */


/* TMPro.Examples.VertexZoom$$Awake @ 0x94eae8
 * void TMPro_Examples_VertexZoom__Awake (TMPro_Examples_VertexZoom_o* __this, const MethodInfo* method); */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* TMPro.Examples.VertexZoom$$Awake
   void TMPro_Examples_VertexZoom__Awake (TMPro_Examples_VertexZoom_o* __this, const MethodInfo*
   method); */

void native_TMPro_Examples_VertexZoom__Awake_94eae8(long param_1)

{
  ulong *puVar1;
  char cVar2;
  bool bVar3;
  undefined8 uVar4;
  
  if ((bRam0000000001341484 & 1) == 0) {
    native_sub_43273c(&Method_UnityEngine_Component_GetComponent_TMP_Text____12e2b38);
    bRam0000000001341484 = 1;
  }
  uVar4 = native_UnityEngine_Component__GetComponent_ActiveAnimation__49daec
                    (param_1,_Method_UnityEngine_Component_GetComponent_TMP_Text____12e2b38);
  *(undefined8 *)(param_1 + 0x28) = uVar4;
  if (iRam0000000001345318 != 0) {
    puVar1 = (ulong *)((param_1 + 0x28U >> 0x12 & 0x7fff) * 8 + 0x138ecd8);
    do {
      cVar2 = '\x01';
      bVar3 = (bool)ExclusiveMonitorPass(puVar1,0x10);
      if (bVar3) {
        *puVar1 = *puVar1 | 1L << (param_1 + 0x28U >> 0xc & 0x3f);
        cVar2 = ExclusiveMonitorsStatus();
      }
    } while (cVar2 != '\0');
  }
  return;
}



/* TMPro.Examples.VertexZoom$$OnEnable @ 0x94eb44
 * void TMPro_Examples_VertexZoom__OnEnable (TMPro_Examples_VertexZoom_o* __this, const MethodInfo* method); */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* TMPro.Examples.VertexZoom$$OnEnable
   void TMPro_Examples_VertexZoom__OnEnable (TMPro_Examples_VertexZoom_o* __this, const MethodInfo*
   method); */

void native_TMPro_Examples_VertexZoom__OnEnable_94eb44(undefined8 param_1)

{
  long lVar1;
  undefined8 uVar2;
  ulong uVar3;
  undefined8 uVar4;
  long lVar5;
  long lVar6;
  
  if ((bRam0000000001341485 & 1) == 0) {
    native_sub_43273c(&Method_System_Action_Object___ctor___12d7fd0);
    native_sub_43273c(&System_Action_Object__TypeInfo_12d2070);
    native_sub_43273c(&Method_TMPro_FastAction_Object__Add___12db178);
    native_sub_43273c(&TMPro_TMPro_EventManager_TypeInfo_12d60c8);
    native_sub_43273c(&Method_TMPro_Examples_VertexZoom_ON_TEXT_CHANGED___12e7ec0);
    bRam0000000001341485 = 1;
  }
  if (((*(byte *)(_TMPro_TMPro_EventManager_TypeInfo_12d60c8 + 0x133) >> 2 & 1) != 0) &&
     (*(int *)(_TMPro_TMPro_EventManager_TypeInfo_12d60c8 + 0xe0) == 0)) {
    native_sub_4327ec();
  }
  lVar5 = *(long *)(*(long *)(_TMPro_TMPro_EventManager_TypeInfo_12d60c8 + 0xb8) + 0x58);
  uVar2 = native_sub_432808(_System_Action_Object__TypeInfo_12d2070);
  native_System_Action_Font____ctor_9867a8
            (uVar2,param_1,_Method_TMPro_Examples_VertexZoom_ON_TEXT_CHANGED___12e7ec0,
             _Method_System_Action_Object___ctor___12d7fd0);
  lVar1 = _Method_TMPro_FastAction_Object__Add___12db178;
  if (lVar5 != 0) {
    if (*(long *)(lVar5 + 0x18) != 0) {
      uVar3 = (**(code **)**(undefined8 **)
                            (*(long *)(_Method_TMPro_FastAction_Object__Add___12db178 + 0x18) + 0xc0
                            ))();
      if ((uVar3 & 1) != 0) {
        return;
      }
      if (*(long *)(lVar5 + 0x10) != 0) {
        lVar6 = *(long *)(lVar5 + 0x18);
        uVar4 = (*(code *)**(undefined8 **)(*(long *)(*(long *)(lVar1 + 0x18) + 0xc0) + 8))
                          (*(long *)(lVar5 + 0x10),uVar2);
        if (lVar6 != 0) {
                    /* WARNING: Could not recover jumptable at 0x00b46448. Too many branches */
                    /* WARNING: Treating indirect jump as call */
          (*(code *)**(undefined8 **)(*(long *)(*(long *)(lVar1 + 0x18) + 0xc0) + 0x10))
                    (lVar6,uVar2,uVar4);
          return;
        }
      }
    }
                    /* WARNING: Subroutine does not return */
    native_sub_432810();
  }
                    /* WARNING: Subroutine does not return */
  native_sub_432810();
}



/* TMPro.Examples.VertexZoom$$OnDisable @ 0x94ec34
 * void TMPro_Examples_VertexZoom__OnDisable (TMPro_Examples_VertexZoom_o* __this, const MethodInfo* method); */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* TMPro.Examples.VertexZoom$$OnDisable
   void TMPro_Examples_VertexZoom__OnDisable (TMPro_Examples_VertexZoom_o* __this, const MethodInfo*
   method); */

void native_TMPro_Examples_VertexZoom__OnDisable_94ec34(undefined8 param_1)

{
  long lVar1;
  undefined8 uVar2;
  ulong uVar3;
  long lVar4;
  undefined8 uStack_28;
  
  if ((bRam0000000001341486 & 1) == 0) {
    native_sub_43273c(&Method_System_Action_Object___ctor___12d7fd0);
    native_sub_43273c(&System_Action_Object__TypeInfo_12d2070);
    native_sub_43273c(&Method_TMPro_FastAction_Object__Remove___12db188);
    native_sub_43273c(&TMPro_TMPro_EventManager_TypeInfo_12d60c8);
    native_sub_43273c(&Method_TMPro_Examples_VertexZoom_ON_TEXT_CHANGED___12e7ec0);
    bRam0000000001341486 = 1;
  }
  if (((*(byte *)(_TMPro_TMPro_EventManager_TypeInfo_12d60c8 + 0x133) >> 2 & 1) != 0) &&
     (*(int *)(_TMPro_TMPro_EventManager_TypeInfo_12d60c8 + 0xe0) == 0)) {
    native_sub_4327ec();
  }
  lVar4 = *(long *)(*(long *)(_TMPro_TMPro_EventManager_TypeInfo_12d60c8 + 0xb8) + 0x58);
  uVar2 = native_sub_432808(_System_Action_Object__TypeInfo_12d2070);
  native_System_Action_Font____ctor_9867a8
            (uVar2,param_1,_Method_TMPro_Examples_VertexZoom_ON_TEXT_CHANGED___12e7ec0,
             _Method_System_Action_Object___ctor___12d7fd0);
  lVar1 = _Method_TMPro_FastAction_Object__Remove___12db188;
  if (lVar4 != 0) {
    uStack_28 = 0;
    if (*(long *)(lVar4 + 0x18) != 0) {
      uVar3 = (*(code *)**(undefined8 **)
                          (*(long *)(*(long *)(_Method_TMPro_FastAction_Object__Remove___12db188 +
                                              0x18) + 0xc0) + 0x18))
                        (*(long *)(lVar4 + 0x18),uVar2,&uStack_28);
      if ((uVar3 & 1) == 0) {
        return;
      }
      if (*(long *)(lVar4 + 0x18) != 0) {
        (*(code *)**(undefined8 **)(*(long *)(*(long *)(lVar1 + 0x18) + 0xc0) + 0x20))
                  (*(long *)(lVar4 + 0x18),uVar2);
        if (*(long *)(lVar4 + 0x10) != 0) {
          (*(code *)**(undefined8 **)(*(long *)(*(long *)(lVar1 + 0x18) + 0xc0) + 0x28))
                    (*(long *)(lVar4 + 0x10),uStack_28);
          return;
        }
      }
    }
                    /* WARNING: Subroutine does not return */
    native_sub_432810();
  }
                    /* WARNING: Subroutine does not return */
  native_sub_432810();
}



/* TMPro.Examples.VertexZoom$$Start @ 0x94ed24
 * void TMPro_Examples_VertexZoom__Start (TMPro_Examples_VertexZoom_o* __this, const MethodInfo* method); */

/* TMPro.Examples.VertexZoom$$Start
   void TMPro_Examples_VertexZoom__Start (TMPro_Examples_VertexZoom_o* __this, const MethodInfo*
   method); */

void native_TMPro_Examples_VertexZoom__Start_94ed24(undefined8 param_1)

{
  ulong uVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  long lVar4;
  
  lVar4 = native_TMPro_Examples_VertexZoom__AnimateVertexColors_94ed50();
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



/* TMPro.Examples.VertexZoom$$ON_TEXT_CHANGED @ 0x94edc8
 * void TMPro_Examples_VertexZoom__ON_TEXT_CHANGED (TMPro_Examples_VertexZoom_o* __this, UnityEngine_Object_o* obj, const MethodInfo* method); */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* TMPro.Examples.VertexZoom$$ON_TEXT_CHANGED
   void TMPro_Examples_VertexZoom__ON_TEXT_CHANGED (TMPro_Examples_VertexZoom_o* __this,
   UnityEngine_Object_o* obj, const MethodInfo* method); */

void native_TMPro_Examples_VertexZoom__ON_TEXT_CHANGED_94edc8(long param_1,undefined8 param_2)

{
  ulong uVar1;
  undefined8 uVar2;
  
  if ((bRam0000000001341487 & 1) == 0) {
    native_sub_43273c(&UnityEngine_Object_TypeInfo_12d54e0);
    bRam0000000001341487 = 1;
  }
  uVar2 = *(undefined8 *)(param_1 + 0x28);
  if (((*(byte *)(_UnityEngine_Object_TypeInfo_12d54e0 + 0x133) >> 2 & 1) != 0) &&
     (*(int *)(_UnityEngine_Object_TypeInfo_12d54e0 + 0xe0) == 0)) {
    native_sub_4327ec();
  }
  uVar1 = native_UnityEngine_Object__op_Equality_8e9a3c(param_2,uVar2,0);
  if ((uVar1 & 1) != 0) {
    *(undefined1 *)(param_1 + 0x30) = 1;
  }
  return;
}



/* TMPro.Examples.VertexZoom$$AnimateVertexColors @ 0x94ed50
 * System_Collections_IEnumerator_o* TMPro_Examples_VertexZoom__AnimateVertexColors (TMPro_Examples_VertexZoom_o* __this, const MethodInfo* method); */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* TMPro.Examples.VertexZoom$$AnimateVertexColors
   System_Collections_IEnumerator_o* TMPro_Examples_VertexZoom__AnimateVertexColors
   (TMPro_Examples_VertexZoom_o* __this, const MethodInfo* method); */

long native_TMPro_Examples_VertexZoom__AnimateVertexColors_94ed50(undefined8 param_1)

{
  long lVar1;
  
  if ((bRam0000000001341488 & 1) == 0) {
    native_sub_43273c(&TMPro_Examples_VertexZoom__AnimateVertexColors_d__10_TypeInfo_12d7b98);
    bRam0000000001341488 = 1;
  }
  lVar1 = native_sub_432808(_TMPro_Examples_VertexZoom__AnimateVertexColors_d__10_TypeInfo_12d7b98);
  native_TMPro_Examples_VertexZoom__AnimateVertexColors_d__10___ctor_55eda4(lVar1,0,0);
  if (lVar1 != 0) {
    *(undefined8 *)(lVar1 + 0x20) = param_1;
    native_sub_4326e0((undefined8 *)(lVar1 + 0x20),param_1);
    return lVar1;
  }
                    /* WARNING: Subroutine does not return */
  native_sub_432810();
}



/* TMPro.Examples.VertexZoom$$.ctor @ 0x94ee50
 * void TMPro_Examples_VertexZoom___ctor (TMPro_Examples_VertexZoom_o* __this, const MethodInfo* method); */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* TMPro.Examples.VertexZoom$$.ctor
   void TMPro_Examples_VertexZoom___ctor (TMPro_Examples_VertexZoom_o* __this, const MethodInfo*
   method); */

undefined1  [16] native_TMPro_Examples_VertexZoom___ctor_94ee50(ulong param_1)

{
  undefined8 uVar1;
  undefined1 auVar2 [16];
  
  uVar1 = NEON_fmov(0x3f800000,4);
  *(undefined8 *)(param_1 + 0x18) = uVar1;
  *(undefined4 *)(param_1 + 0x20) = 0x3f800000;
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


