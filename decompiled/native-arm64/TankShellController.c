/* ARM64 IL2CPP native pseudocode from Ghidra.
 * Recovered implementation, not original C# source.
 * Function boundaries follow the IL2CPP method address table. */


/* TankShellController$$Start @ 0x6e10f8
 * void TankShellController__Start (TankShellController_o* __this, const MethodInfo* method); */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* TankShellController$$Start
   void TankShellController__Start (TankShellController_o* __this, const MethodInfo* method); */

void native_TankShellController__Start_6e10f8(long param_1)

{
  long lVar1;
  
  if ((bRam000000000133f37c & 1) == 0) {
    native_sub_43273c(&Method_UnityEngine_Component_GetComponent_Light____12e2aa0);
    bRam000000000133f37c = 1;
  }
  *(undefined1 *)(param_1 + 0x30) = 1;
  *(undefined8 *)(param_1 + 0x28) = 1;
  *(undefined8 *)(param_1 + 0x20) = 0x32;
  lVar1 = native_UnityEngine_Component__GetComponent_ActiveAnimation__49daec
                    (param_1,_Method_UnityEngine_Component_GetComponent_Light____12e2aa0);
  if (lVar1 != 0) {
    if (pcRam0000000001340948 == (code *)0x0) {
      pcRam0000000001340948 = (code *)native_sub_4326f0(&UNK_00e2c702);
    }
                    /* WARNING: Could not recover jumptable at 0x008d7b58. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*pcRam0000000001340948)(lVar1,1);
    return;
  }
                    /* WARNING: Subroutine does not return */
  native_sub_432810();
}



/* TankShellController$$Update @ 0x6e116c
 * void TankShellController__Update (TankShellController_o* __this, const MethodInfo* method); */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* TankShellController$$Update
   void TankShellController__Update (TankShellController_o* __this, const MethodInfo* method); */

void native_TankShellController__Update_6e116c(long param_1)

{
  undefined8 uVar1;
  long lVar2;
  
  if ((bRam000000000133f37d & 1) == 0) {
    native_sub_43273c(&Method_UnityEngine_Component_GetComponent_Light____12e2aa0);
    native_sub_43273c(&UnityEngine_Object_TypeInfo_12d54e0);
    bRam000000000133f37d = 1;
  }
  if (*(long *)(param_1 + 0x20) == 0) {
    uVar1 = native_UnityEngine_Component__get_gameObject_8da66c(param_1,0);
    if (((*(byte *)(_UnityEngine_Object_TypeInfo_12d54e0 + 0x133) >> 2 & 1) != 0) &&
       (*(int *)(_UnityEngine_Object_TypeInfo_12d54e0 + 0xe0) == 0)) {
      native_sub_4327ec(_UnityEngine_Object_TypeInfo_12d54e0);
    }
    native_UnityEngine_Object__Destroy_8ea574(uVar1,0);
  }
  if ((*(char *)(param_1 + 0x30) != '\0') && (*(long *)(param_1 + 0x28) == 0)) {
    *(undefined1 *)(param_1 + 0x30) = 0;
    lVar2 = native_UnityEngine_Component__GetComponent_ActiveAnimation__49daec
                      (param_1,_Method_UnityEngine_Component_GetComponent_Light____12e2aa0);
    if (lVar2 == 0) {
                    /* WARNING: Subroutine does not return */
      native_sub_432810();
    }
    native_UnityEngine_Behaviour__set_enabled_8d7b0c(lVar2,0,0);
  }
  lVar2 = native_TankShellController__gethaomiao_6e1274();
  if (0 < lVar2 - *(long *)(param_1 + 0x18)) {
    uVar1 = native_TankShellController__gethaomiao_6e1274();
    *(undefined8 *)(param_1 + 0x18) = uVar1;
    if (0 < *(long *)(param_1 + 0x20)) {
      *(long *)(param_1 + 0x20) = *(long *)(param_1 + 0x20) + -1;
    }
    if (0 < *(long *)(param_1 + 0x28)) {
      *(long *)(param_1 + 0x28) = *(long *)(param_1 + 0x28) + -1;
    }
  }
  return;
}



/* TankShellController$$gethaomiao @ 0x6e1274
 * int64_t TankShellController__gethaomiao (TankShellController_o* __this, const MethodInfo* method); */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* TankShellController$$gethaomiao
   int64_t TankShellController__gethaomiao (TankShellController_o* __this, const MethodInfo*
   method); */

long native_TankShellController__gethaomiao_6e1274(void)

{
  long lVar1;
  undefined8 uStack_18;
  
  if ((bRam000000000133f37e & 1) == 0) {
    native_sub_43273c(&System_DateTime_TypeInfo_12d42f8);
    bRam000000000133f37e = 1;
  }
  uStack_18 = 0;
  if (((*(byte *)(_System_DateTime_TypeInfo_12d42f8 + 0x133) >> 2 & 1) != 0) &&
     (*(int *)(_System_DateTime_TypeInfo_12d42f8 + 0xe0) == 0)) {
    native_sub_4327ec();
  }
  uStack_18 = native_System_DateTime__get_Now_9c70d8(0);
  uStack_18 = native_System_DateTime__ToUniversalTime_9c7e74(&uStack_18,0);
  lVar1 = native_System_DateTime__get_Ticks_9c721c(&uStack_18,0);
  return (lVar1 + -0x89f7ff5f7b58000) / 10000;
}



/* TankShellController$$.ctor @ 0x6e1328
 * void TankShellController___ctor (TankShellController_o* __this, const MethodInfo* method); */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* TankShellController$$.ctor
   void TankShellController___ctor (TankShellController_o* __this, const MethodInfo* method); */

undefined1  [16] native_TankShellController___ctor_6e1328(ulong param_1)

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


