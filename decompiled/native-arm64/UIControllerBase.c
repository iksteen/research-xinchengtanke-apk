/* ARM64 IL2CPP native pseudocode from Ghidra.
 * Recovered implementation, not original C# source.
 * Function boundaries follow the IL2CPP method address table. */


/* UIControllerBase$$CloseUI @ 0x9df714
 * void UIControllerBase__CloseUI (UIControllerBase_o* __this, const MethodInfo* method); */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* UIControllerBase$$CloseUI
   void UIControllerBase__CloseUI (UIControllerBase_o* __this, const MethodInfo* method); */

void native_UIControllerBase__CloseUI_9df714(undefined8 param_1)

{
  undefined8 uVar1;
  
  if ((bRam00000000013418bf & 1) == 0) {
    native_sub_43273c(&UnityEngine_Object_TypeInfo_12d54e0);
    bRam00000000013418bf = 1;
  }
  uVar1 = native_UnityEngine_Component__get_gameObject_8da66c(param_1,0);
  if (((*(byte *)(_UnityEngine_Object_TypeInfo_12d54e0 + 0x133) >> 2 & 1) != 0) &&
     (*(int *)(_UnityEngine_Object_TypeInfo_12d54e0 + 0xe0) == 0)) {
    native_sub_4327ec(_UnityEngine_Object_TypeInfo_12d54e0);
  }
  if ((bRam0000000001341048 & 1) == 0) {
    native_sub_43273c(&UnityEngine_Object_TypeInfo_12d54e0,0);
    bRam0000000001341048 = 1;
  }
  if (((*(byte *)(_UnityEngine_Object_TypeInfo_12d54e0 + 0x133) >> 2 & 1) != 0) &&
     (*(int *)(_UnityEngine_Object_TypeInfo_12d54e0 + 0xe0) == 0)) {
    native_sub_4327ec();
  }
  if (pcRam0000000001341040 == (code *)0x0) {
    pcRam0000000001341040 = (code *)native_sub_4326f0(&UNK_00e2f7cf);
  }
                    /* WARNING: Could not recover jumptable at 0x008ea5f4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*pcRam0000000001341040)(0,uVar1);
  return;
}



/* UIControllerBase$$.ctor @ 0x9df78c
 * void UIControllerBase___ctor (UIControllerBase_o* __this, const MethodInfo* method); */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* UIControllerBase$$.ctor
   void UIControllerBase___ctor (UIControllerBase_o* __this, const MethodInfo* method); */

undefined1  [16] native_UIControllerBase___ctor_9df78c(ulong param_1)

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


