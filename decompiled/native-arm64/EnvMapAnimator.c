/* ARM64 IL2CPP native pseudocode from Ghidra.
 * Recovered implementation, not original C# source.
 * Function boundaries follow the IL2CPP method address table. */


/* EnvMapAnimator$$Awake @ 0xded01c
 * void EnvMapAnimator__Awake (EnvMapAnimator_o* __this, const MethodInfo* method); */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* EnvMapAnimator$$Awake
   void EnvMapAnimator__Awake (EnvMapAnimator_o* __this, const MethodInfo* method); */

void native_EnvMapAnimator__Awake_ded01c(long param_1)

{
  ulong *puVar1;
  char cVar2;
  bool bVar3;
  undefined8 uVar4;
  long *plVar5;
  undefined8 *puVar6;
  
  if ((bRam0000000001346ee4 & 1) == 0) {
    native_sub_43273c(&Method_UnityEngine_Component_GetComponent_TMP_Text____12e2b38);
    bRam0000000001346ee4 = 1;
  }
  uVar4 = native_UnityEngine_Component__GetComponent_ActiveAnimation__49daec
                    (param_1,_Method_UnityEngine_Component_GetComponent_TMP_Text____12e2b38);
  *(undefined8 *)(param_1 + 0x28) = uVar4;
  native_sub_4326e0(param_1 + 0x28);
  plVar5 = *(long **)(param_1 + 0x28);
  if (plVar5 != (long *)0x0) {
    uVar4 = (**(code **)(*plVar5 + 0x568))(plVar5,*(undefined8 *)(*plVar5 + 0x570));
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



/* EnvMapAnimator$$Start @ 0xded0a4
 * System_Collections_IEnumerator_o* EnvMapAnimator__Start (EnvMapAnimator_o* __this, const MethodInfo* method); */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* EnvMapAnimator$$Start
   System_Collections_IEnumerator_o* EnvMapAnimator__Start (EnvMapAnimator_o* __this, const
   MethodInfo* method); */

long native_EnvMapAnimator__Start_ded0a4(undefined8 param_1)

{
  long lVar1;
  
  if ((bRam0000000001346ee5 & 1) == 0) {
    native_sub_43273c(&EnvMapAnimator__Start_d__4_TypeInfo_12d72e0);
    bRam0000000001346ee5 = 1;
  }
  lVar1 = native_sub_432808(_EnvMapAnimator__Start_d__4_TypeInfo_12d72e0);
  native_EnvMapAnimator__Start_d__4___ctor_54bae0(lVar1,0,0);
  if (lVar1 != 0) {
    *(undefined8 *)(lVar1 + 0x20) = param_1;
    native_sub_4326e0((undefined8 *)(lVar1 + 0x20),param_1);
    return lVar1;
  }
                    /* WARNING: Subroutine does not return */
  native_sub_432810();
}



/* EnvMapAnimator$$.ctor @ 0xded11c
 * void EnvMapAnimator___ctor (EnvMapAnimator_o* __this, const MethodInfo* method); */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* EnvMapAnimator$$.ctor
   void EnvMapAnimator___ctor (EnvMapAnimator_o* __this, const MethodInfo* method); */

undefined1  [16] native_EnvMapAnimator___ctor_ded11c(ulong param_1)

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


