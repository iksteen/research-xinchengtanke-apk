/* ARM64 IL2CPP native pseudocode from Ghidra.
 * Recovered implementation, not original C# source.
 * Function boundaries follow the IL2CPP method address table. */


/* DropdownSample$$OnButtonClick @ 0xdeccfc
 * void DropdownSample__OnButtonClick (DropdownSample_o* __this, const MethodInfo* method); */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* DropdownSample$$OnButtonClick
   void DropdownSample__OnButtonClick (DropdownSample_o* __this, const MethodInfo* method); */

void native_DropdownSample__OnButtonClick_deccfc(long param_1,undefined8 param_2)

{
  undefined8 uVar1;
  undefined8 uVar2;
  long *plVar3;
  undefined1 auVar4 [16];
  undefined4 uStack_24;
  
  auVar4._8_8_ = param_2;
  auVar4._0_8_ = param_1;
  if ((bRam0000000001346ee3 & 1) == 0) {
    native_sub_43273c(&StringLiteral_Selected_values___12f0d38);
    native_sub_43273c(&StringLiteral_____12eacf0);
    auVar4 = native_sub_43273c(&StringLiteral_Error__Please_make_a_selection_12edc58);
    bRam0000000001346ee3 = 1;
  }
  uVar2 = auVar4._0_8_;
  uStack_24 = 0;
  if (*(long *)(param_1 + 0x28) == 0) goto LAB_00dece04;
  plVar3 = *(long **)(param_1 + 0x18);
  uVar1 = _StringLiteral_Error__Please_make_a_selection_12edc58;
  if (-1 < *(int *)(*(long *)(param_1 + 0x28) + 0x128)) {
    if (*(long *)(param_1 + 0x20) == 0) goto LAB_00dece04;
    uStack_24 = *(undefined4 *)(*(long *)(param_1 + 0x20) + 0x128);
    auVar4 = native_System_Int32__ToString_83c60c(&uStack_24,0);
    if (*(long *)(param_1 + 0x28) == 0) goto LAB_00dece04;
    uStack_24 = *(undefined4 *)(*(long *)(param_1 + 0x28) + 0x128);
    uVar2 = native_System_Int32__ToString_83c60c(&uStack_24,0);
    uVar2 = native_System_String__Concat_afcabc
                      (_StringLiteral_Selected_values___12f0d38,auVar4._0_8_,
                       _StringLiteral_____12eacf0,uVar2,0);
    uVar1 = uVar2;
  }
  auVar4._8_8_ = uVar1;
  auVar4._0_8_ = uVar2;
  if (plVar3 != (long *)0x0) {
    (**(code **)(*plVar3 + 0x558))(plVar3,uVar1,*(undefined8 *)(*plVar3 + 0x560));
    return;
  }
LAB_00dece04:
                    /* WARNING: Subroutine does not return */
  native_sub_432810(auVar4._0_8_,auVar4._8_8_);
}



/* DropdownSample$$.ctor @ 0xdece08
 * void DropdownSample___ctor (DropdownSample_o* __this, const MethodInfo* method); */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* DropdownSample$$.ctor
   void DropdownSample___ctor (DropdownSample_o* __this, const MethodInfo* method); */

undefined1  [16] native_DropdownSample___ctor_dece08(ulong param_1)

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


