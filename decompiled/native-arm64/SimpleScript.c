/* ARM64 IL2CPP native pseudocode from Ghidra.
 * Recovered implementation, not original C# source.
 * Function boundaries follow the IL2CPP method address table. */


/* TMPro.Examples.SimpleScript$$Start @ 0x73d7f8
 * void TMPro_Examples_SimpleScript__Start (TMPro_Examples_SimpleScript_o* __this, const MethodInfo* method); */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* TMPro.Examples.SimpleScript$$Start
   void TMPro_Examples_SimpleScript__Start (TMPro_Examples_SimpleScript_o* __this, const MethodInfo*
   method); */

void native_TMPro_Examples_SimpleScript__Start_73d7f8(long param_1)

{
  long lVar1;
  long *plVar2;
  long *plVar3;
  
  if ((bRam000000000133f61a & 1) == 0) {
    native_sub_43273c(&Method_UnityEngine_GameObject_AddComponent_TextMeshPro____12e48a8);
    bRam000000000133f61a = 1;
  }
  lVar1 = native_UnityEngine_Component__get_gameObject_8da66c(param_1,0);
  if (lVar1 != 0) {
    lVar1 = native_UnityEngine_GameObject__AddComponent_ActiveAnimation__4a2118
                      (lVar1,_Method_UnityEngine_GameObject_AddComponent_TextMeshPro____12e48a8);
    plVar3 = (long *)(param_1 + 0x18);
    *plVar3 = lVar1;
    native_sub_4326e0(plVar3,lVar1);
    plVar2 = (long *)*plVar3;
    if (plVar2 != (long *)0x0) {
      (**(code **)(*plVar2 + 0x5f8))(plVar2,1,*(undefined8 *)(*plVar2 + 0x600));
      if (*plVar3 != 0) {
        native_TMPro_TMP_Text__set_fontSize_4bae20(0x42400000,*plVar3,0);
        if (*plVar3 != 0) {
          native_TMPro_TMP_Text__set_alignment_4bb268(*plVar3,0x202,0);
          plVar3 = (long *)*plVar3;
          if (plVar3 != (long *)0x0) {
            if ((char)plVar3[0x5a] == '\0') {
              return;
            }
            *(undefined1 *)(plVar3 + 0x6d) = 1;
            *(undefined1 *)(plVar3 + 0x5a) = 0;
            (**(code **)(*plVar3 + 0x2f8))(plVar3,*(undefined8 *)(*plVar3 + 0x300),0);
                    /* WARNING: Could not recover jumptable at 0x004bb554. Too many branches */
                    /* WARNING: Treating indirect jump as call */
            (**(code **)(*plVar3 + 0x2e8))(plVar3,*(undefined8 *)(*plVar3 + 0x2f0));
            return;
          }
        }
      }
    }
  }
                    /* WARNING: Subroutine does not return */
  native_sub_432810();
}



/* TMPro.Examples.SimpleScript$$Update @ 0x73d8c0
 * void TMPro_Examples_SimpleScript__Update (TMPro_Examples_SimpleScript_o* __this, const MethodInfo* method); */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* TMPro.Examples.SimpleScript$$Update
   void TMPro_Examples_SimpleScript__Update (TMPro_Examples_SimpleScript_o* __this, const
   MethodInfo* method); */

void native_TMPro_Examples_SimpleScript__Update_73d8c0(long param_1)

{
  undefined8 uVar1;
  long lVar2;
  float fVar3;
  float fVar4;
  
  if ((bRam000000000133f61b & 1) == 0) {
    native_sub_43273c(&StringLiteral_The___0050FF_count_is____color__0_2__12f1778);
    bRam000000000133f61b = 1;
  }
  uVar1 = _StringLiteral_The___0050FF_count_is____color__0_2__12f1778;
  lVar2 = *(long *)(param_1 + 0x18);
  if (lVar2 != 0) {
    func_0x002c9740(*(undefined4 *)(param_1 + 0x20),0x447a0000);
    native_TMPro_TMP_Text__SetText_4bf80c(lVar2,uVar1,0);
    fVar4 = *(float *)(param_1 + 0x20);
    fVar3 = (float)native_UnityEngine_Time__get_deltaTime_77082c(0);
    *(float *)(param_1 + 0x20) = fVar4 + fVar3;
    return;
  }
                    /* WARNING: Subroutine does not return */
  native_sub_432810();
}



/* TMPro.Examples.SimpleScript$$.ctor @ 0x73d958
 * void TMPro_Examples_SimpleScript___ctor (TMPro_Examples_SimpleScript_o* __this, const MethodInfo* method); */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* TMPro.Examples.SimpleScript$$.ctor
   void TMPro_Examples_SimpleScript___ctor (TMPro_Examples_SimpleScript_o* __this, const MethodInfo*
   method); */

undefined1  [16] native_TMPro_Examples_SimpleScript___ctor_73d958(ulong param_1)

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


