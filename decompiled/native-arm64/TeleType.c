/* ARM64 IL2CPP native pseudocode from Ghidra.
 * Recovered implementation, not original C# source.
 * Function boundaries follow the IL2CPP method address table. */


/* TMPro.Examples.TeleType$$Awake @ 0x6e1330
 * void TMPro_Examples_TeleType__Awake (TMPro_Examples_TeleType_o* __this, const MethodInfo* method); */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* TMPro.Examples.TeleType$$Awake
   void TMPro_Examples_TeleType__Awake (TMPro_Examples_TeleType_o* __this, const MethodInfo*
   method); */

void native_TMPro_Examples_TeleType__Awake_6e1330(long param_1)

{
  undefined8 uVar1;
  long *plVar2;
  
  if ((bRam000000000133f37f & 1) == 0) {
    native_sub_43273c(&Method_UnityEngine_Component_GetComponent_TMP_Text____12e2b38);
    bRam000000000133f37f = 1;
  }
  uVar1 = native_UnityEngine_Component__GetComponent_ActiveAnimation__49daec
                    (param_1,_Method_UnityEngine_Component_GetComponent_TMP_Text____12e2b38);
  *(undefined8 *)(param_1 + 0x28) = uVar1;
  native_sub_4326e0((long *)(param_1 + 0x28),uVar1);
  plVar2 = *(long **)(param_1 + 0x28);
  if (plVar2 != (long *)0x0) {
    (**(code **)(*plVar2 + 0x558))
              (plVar2,*(undefined8 *)(param_1 + 0x18),*(undefined8 *)(*plVar2 + 0x560));
    if (*(long *)(param_1 + 0x28) != 0) {
      native_TMPro_TMP_Text__set_enableWordWrapping_4bb4f4(*(long *)(param_1 + 0x28),1,0);
      plVar2 = *(long **)(param_1 + 0x28);
      if (plVar2 != (long *)0x0) {
        if ((*(int *)((long)plVar2 + 0x264) == 2) && ((int)plVar2[0x4d] == 0x100)) {
          return;
        }
        *(undefined4 *)(plVar2 + 0x4d) = 0x100;
        *(undefined4 *)((long)plVar2 + 0x264) = 2;
        *(undefined1 *)(plVar2 + 0x6d) = 1;
                    /* WARNING: Could not recover jumptable at 0x004bb2a8. Too many branches */
                    /* WARNING: Treating indirect jump as call */
        (**(code **)(*plVar2 + 0x2f8))(plVar2,*(undefined8 *)(*plVar2 + 0x300));
        return;
      }
    }
  }
                    /* WARNING: Subroutine does not return */
  native_sub_432810();
}



/* TMPro.Examples.TeleType$$Start @ 0x6e13d8
 * System_Collections_IEnumerator_o* TMPro_Examples_TeleType__Start (TMPro_Examples_TeleType_o* __this, const MethodInfo* method); */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* TMPro.Examples.TeleType$$Start
   System_Collections_IEnumerator_o* TMPro_Examples_TeleType__Start (TMPro_Examples_TeleType_o*
   __this, const MethodInfo* method); */

long native_TMPro_Examples_TeleType__Start_6e13d8(undefined8 param_1)

{
  long lVar1;
  
  if ((bRam000000000133f380 & 1) == 0) {
    native_sub_43273c(&TMPro_Examples_TeleType__Start_d__4_TypeInfo_12d7888);
    bRam000000000133f380 = 1;
  }
  lVar1 = native_sub_432808(_TMPro_Examples_TeleType__Start_d__4_TypeInfo_12d7888);
  native_TMPro_Examples_TeleType__Start_d__4___ctor_54e250(lVar1,0,0);
  if (lVar1 != 0) {
    *(undefined8 *)(lVar1 + 0x20) = param_1;
    native_sub_4326e0((undefined8 *)(lVar1 + 0x20),param_1);
    return lVar1;
  }
                    /* WARNING: Subroutine does not return */
  native_sub_432810();
}



/* TMPro.Examples.TeleType$$.ctor @ 0x6e1450
 * void TMPro_Examples_TeleType___ctor (TMPro_Examples_TeleType_o* __this, const MethodInfo* method); */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* TMPro.Examples.TeleType$$.ctor
   void TMPro_Examples_TeleType___ctor (TMPro_Examples_TeleType_o* __this, const MethodInfo*
   method); */

undefined1  [16] native_TMPro_Examples_TeleType___ctor_6e1450(ulong param_1)

{
  undefined1 auVar1 [16];
  
  if ((bRam000000000133f381 & 1) == 0) {
    native_sub_43273c(&
                      StringLiteral_Example__sprite_2__of_using__sprite_7____ffa000_Graphics_Inline__color___sprite_5__with_Text_in__font__Bangers_SDF__material__Bangers_SDF___Drop_Shadow__TextMesh__40a_12edcc0
                     );
    native_sub_43273c(&
                      StringLiteral_Example__sprite_2__of_using__sprite_7____ffa000_Graphics_Inline__color___sprite_5__with_Text_in__font__Bangers_SDF__material__Bangers_SDF___Drop_Shadow__TextMesh__40a_12edcb8
                     );
    bRam000000000133f381 = 1;
  }
  *(undefined8 *)(param_1 + 0x18) =
       _StringLiteral_Example__sprite_2__of_using__sprite_7____ffa000_Graphics_Inline__color___sprite_5__with_Text_in__font__Bangers_SDF__material__Bangers_SDF___Drop_Shadow__TextMesh__40a_12edcb8
  ;
  native_sub_4326e0();
  *(undefined8 *)(param_1 + 0x20) =
       _StringLiteral_Example__sprite_2__of_using__sprite_7____ffa000_Graphics_Inline__color___sprite_5__with_Text_in__font__Bangers_SDF__material__Bangers_SDF___Drop_Shadow__TextMesh__40a_12edcc0
  ;
  native_sub_4326e0(param_1 + 0x20);
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


