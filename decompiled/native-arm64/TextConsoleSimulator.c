/* ARM64 IL2CPP native pseudocode from Ghidra.
 * Recovered implementation, not original C# source.
 * Function boundaries follow the IL2CPP method address table. */


/* TMPro.Examples.TextConsoleSimulator$$Awake @ 0x6e14d0
 * void TMPro_Examples_TextConsoleSimulator__Awake (TMPro_Examples_TextConsoleSimulator_o* __this, const MethodInfo* method); */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* TMPro.Examples.TextConsoleSimulator$$Awake
   void TMPro_Examples_TextConsoleSimulator__Awake (TMPro_Examples_TextConsoleSimulator_o* __this,
   const MethodInfo* method); */

void native_TMPro_Examples_TextConsoleSimulator__Awake_6e14d0(long param_1)

{
  ulong *puVar1;
  char cVar2;
  bool bVar3;
  long lVar4;
  undefined8 uVar5;
  undefined8 *puVar6;
  
  if ((bRam000000000133f382 & 1) == 0) {
    native_sub_43273c(&Method_UnityEngine_GameObject_GetComponent_TMP_Text____12e4a50);
    bRam000000000133f382 = 1;
  }
  lVar4 = native_UnityEngine_Component__get_gameObject_8da66c(param_1,0);
  if (lVar4 != 0) {
    uVar5 = native_UnityEngine_GameObject__GetComponent_BE2_BlockSectionHeader_Custom__4a2214
                      (lVar4,_Method_UnityEngine_GameObject_GetComponent_TMP_Text____12e4a50);
    puVar6 = (undefined8 *)(param_1 + 0x18);
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
                    /* WARNING: Subroutine does not return */
  native_sub_432810();
}



/* TMPro.Examples.TextConsoleSimulator$$Start @ 0x6e153c
 * void TMPro_Examples_TextConsoleSimulator__Start (TMPro_Examples_TextConsoleSimulator_o* __this, const MethodInfo* method); */

/* TMPro.Examples.TextConsoleSimulator$$Start
   void TMPro_Examples_TextConsoleSimulator__Start (TMPro_Examples_TextConsoleSimulator_o* __this,
   const MethodInfo* method); */

void native_TMPro_Examples_TextConsoleSimulator__Start_6e153c(long param_1)

{
  long lVar1;
  ulong uVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  
  lVar1 = native_TMPro_Examples_TextConsoleSimulator__RevealCharacters_6e156c
                    (param_1,*(undefined8 *)(param_1 + 0x18));
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



/* TMPro.Examples.TextConsoleSimulator$$OnEnable @ 0x6e1600
 * void TMPro_Examples_TextConsoleSimulator__OnEnable (TMPro_Examples_TextConsoleSimulator_o* __this, const MethodInfo* method); */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* TMPro.Examples.TextConsoleSimulator$$OnEnable
   void TMPro_Examples_TextConsoleSimulator__OnEnable (TMPro_Examples_TextConsoleSimulator_o*
   __this, const MethodInfo* method); */

void native_TMPro_Examples_TextConsoleSimulator__OnEnable_6e1600(undefined8 param_1)

{
  long lVar1;
  undefined8 uVar2;
  ulong uVar3;
  undefined8 uVar4;
  long lVar5;
  long lVar6;
  
  if ((bRam000000000133f383 & 1) == 0) {
    native_sub_43273c(&Method_System_Action_Object___ctor___12d7fd0);
    native_sub_43273c(&System_Action_Object__TypeInfo_12d2070);
    native_sub_43273c(&Method_TMPro_FastAction_Object__Add___12db178);
    native_sub_43273c(&TMPro_TMPro_EventManager_TypeInfo_12d60c8);
    native_sub_43273c(&Method_TMPro_Examples_TextConsoleSimulator_ON_TEXT_CHANGED___12e7228);
    bRam000000000133f383 = 1;
  }
  if (((*(byte *)(_TMPro_TMPro_EventManager_TypeInfo_12d60c8 + 0x133) >> 2 & 1) != 0) &&
     (*(int *)(_TMPro_TMPro_EventManager_TypeInfo_12d60c8 + 0xe0) == 0)) {
    native_sub_4327ec();
  }
  lVar5 = *(long *)(*(long *)(_TMPro_TMPro_EventManager_TypeInfo_12d60c8 + 0xb8) + 0x58);
  uVar2 = native_sub_432808(_System_Action_Object__TypeInfo_12d2070);
  native_System_Action_Font____ctor_9867a8
            (uVar2,param_1,_Method_TMPro_Examples_TextConsoleSimulator_ON_TEXT_CHANGED___12e7228,
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



/* TMPro.Examples.TextConsoleSimulator$$OnDisable @ 0x6e16f0
 * void TMPro_Examples_TextConsoleSimulator__OnDisable (TMPro_Examples_TextConsoleSimulator_o* __this, const MethodInfo* method); */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* TMPro.Examples.TextConsoleSimulator$$OnDisable
   void TMPro_Examples_TextConsoleSimulator__OnDisable (TMPro_Examples_TextConsoleSimulator_o*
   __this, const MethodInfo* method); */

void native_TMPro_Examples_TextConsoleSimulator__OnDisable_6e16f0(undefined8 param_1)

{
  long lVar1;
  undefined8 uVar2;
  ulong uVar3;
  long lVar4;
  undefined8 uStack_28;
  
  if ((bRam000000000133f384 & 1) == 0) {
    native_sub_43273c(&Method_System_Action_Object___ctor___12d7fd0);
    native_sub_43273c(&System_Action_Object__TypeInfo_12d2070);
    native_sub_43273c(&Method_TMPro_FastAction_Object__Remove___12db188);
    native_sub_43273c(&TMPro_TMPro_EventManager_TypeInfo_12d60c8);
    native_sub_43273c(&Method_TMPro_Examples_TextConsoleSimulator_ON_TEXT_CHANGED___12e7228);
    bRam000000000133f384 = 1;
  }
  if (((*(byte *)(_TMPro_TMPro_EventManager_TypeInfo_12d60c8 + 0x133) >> 2 & 1) != 0) &&
     (*(int *)(_TMPro_TMPro_EventManager_TypeInfo_12d60c8 + 0xe0) == 0)) {
    native_sub_4327ec();
  }
  lVar4 = *(long *)(*(long *)(_TMPro_TMPro_EventManager_TypeInfo_12d60c8 + 0xb8) + 0x58);
  uVar2 = native_sub_432808(_System_Action_Object__TypeInfo_12d2070);
  native_System_Action_Font____ctor_9867a8
            (uVar2,param_1,_Method_TMPro_Examples_TextConsoleSimulator_ON_TEXT_CHANGED___12e7228,
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



/* TMPro.Examples.TextConsoleSimulator$$ON_TEXT_CHANGED @ 0x6e17e0
 * void TMPro_Examples_TextConsoleSimulator__ON_TEXT_CHANGED (TMPro_Examples_TextConsoleSimulator_o* __this, UnityEngine_Object_o* obj, const MethodInfo* method); */

/* TMPro.Examples.TextConsoleSimulator$$ON_TEXT_CHANGED
   void TMPro_Examples_TextConsoleSimulator__ON_TEXT_CHANGED (TMPro_Examples_TextConsoleSimulator_o*
   __this, UnityEngine_Object_o* obj, const MethodInfo* method); */

void native_TMPro_Examples_TextConsoleSimulator__ON_TEXT_CHANGED_6e17e0(long param_1)

{
  *(undefined1 *)(param_1 + 0x20) = 1;
  return;
}



/* TMPro.Examples.TextConsoleSimulator$$RevealCharacters @ 0x6e156c
 * System_Collections_IEnumerator_o* TMPro_Examples_TextConsoleSimulator__RevealCharacters (TMPro_Examples_TextConsoleSimulator_o* __this, TMPro_TMP_Text_o* textComponent, const MethodInfo* method); */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* TMPro.Examples.TextConsoleSimulator$$RevealCharacters
   System_Collections_IEnumerator_o* TMPro_Examples_TextConsoleSimulator__RevealCharacters
   (TMPro_Examples_TextConsoleSimulator_o* __this, TMPro_TMP_Text_o* textComponent, const
   MethodInfo* method); */

long native_TMPro_Examples_TextConsoleSimulator__RevealCharacters_6e156c
               (undefined8 param_1,undefined8 param_2)

{
  long lVar1;
  
  if ((bRam000000000133f385 & 1) == 0) {
    native_sub_43273c(&TMPro_Examples_TextConsoleSimulator__RevealCharacters_d__7_TypeInfo_12d78b8);
    bRam000000000133f385 = 1;
  }
  lVar1 = native_sub_432808(
                           _TMPro_Examples_TextConsoleSimulator__RevealCharacters_d__7_TypeInfo_12d78b8
                           );
  native_TMPro_Examples_TextConsoleSimulator__RevealCharacters_d__7___ctor_54e528(lVar1,0,0);
  if (lVar1 != 0) {
    *(undefined8 *)(lVar1 + 0x28) = param_1;
    native_sub_4326e0((undefined8 *)(lVar1 + 0x28),param_1);
    *(undefined8 *)(lVar1 + 0x20) = param_2;
    native_sub_4326e0((undefined8 *)(lVar1 + 0x20),param_2);
    return lVar1;
  }
                    /* WARNING: Subroutine does not return */
  native_sub_432810();
}



/* TMPro.Examples.TextConsoleSimulator$$RevealWords @ 0x6e17ec
 * System_Collections_IEnumerator_o* TMPro_Examples_TextConsoleSimulator__RevealWords (TMPro_Examples_TextConsoleSimulator_o* __this, TMPro_TMP_Text_o* textComponent, const MethodInfo* method); */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* TMPro.Examples.TextConsoleSimulator$$RevealWords
   System_Collections_IEnumerator_o* TMPro_Examples_TextConsoleSimulator__RevealWords
   (TMPro_Examples_TextConsoleSimulator_o* __this, TMPro_TMP_Text_o* textComponent, const
   MethodInfo* method); */

long native_TMPro_Examples_TextConsoleSimulator__RevealWords_6e17ec
               (undefined8 param_1,undefined8 param_2)

{
  long lVar1;
  
  if ((bRam000000000133f386 & 1) == 0) {
    native_sub_43273c(&TMPro_Examples_TextConsoleSimulator__RevealWords_d__8_TypeInfo_12d78c0);
    bRam000000000133f386 = 1;
  }
  lVar1 = native_sub_432808(_TMPro_Examples_TextConsoleSimulator__RevealWords_d__8_TypeInfo_12d78c0)
  ;
  native_TMPro_Examples_TextConsoleSimulator__RevealWords_d__8___ctor_54e728(lVar1,0,0);
  if (lVar1 != 0) {
    *(undefined8 *)(lVar1 + 0x20) = param_2;
    native_sub_4326e0((undefined8 *)(lVar1 + 0x20),param_2);
    return lVar1;
  }
                    /* WARNING: Subroutine does not return */
  native_sub_432810();
}



/* TMPro.Examples.TextConsoleSimulator$$.ctor @ 0x6e1864
 * void TMPro_Examples_TextConsoleSimulator___ctor (TMPro_Examples_TextConsoleSimulator_o* __this, const MethodInfo* method); */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* TMPro.Examples.TextConsoleSimulator$$.ctor
   void TMPro_Examples_TextConsoleSimulator___ctor (TMPro_Examples_TextConsoleSimulator_o* __this,
   const MethodInfo* method); */

undefined1  [16] native_TMPro_Examples_TextConsoleSimulator___ctor_6e1864(ulong param_1)

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


