/* ARM64 IL2CPP native pseudocode from Ghidra.
 * Recovered implementation, not original C# source.
 * Function boundaries follow the IL2CPP method address table. */


/* JoystickPlayerExample$$FixedUpdate @ 0x7f7940
 * void JoystickPlayerExample__FixedUpdate (JoystickPlayerExample_o* __this, const MethodInfo* method); */

/* JoystickPlayerExample$$FixedUpdate
   void JoystickPlayerExample__FixedUpdate (JoystickPlayerExample_o* __this, const MethodInfo*
   method); */

void native_JoystickPlayerExample__FixedUpdate_7f7940(long param_1)

{
  long lVar1;
  
  native_UnityEngine_Vector3__get_forward_771ae0(0);
  lVar1 = *(long *)(param_1 + 0x20);
  if (lVar1 != 0) {
    if (*(char *)(lVar1 + 0x25) != '\0') {
      native_Joystick__SnapFloat_7f70ac(*(undefined4 *)(lVar1 + 0x54),lVar1,2);
    }
    native_UnityEngine_Vector3__get_right_776b60(0);
    lVar1 = *(long *)(param_1 + 0x20);
    if (lVar1 != 0) {
      if (*(char *)(lVar1 + 0x24) != '\0') {
        native_Joystick__SnapFloat_7f70ac(*(undefined4 *)(lVar1 + 0x50),lVar1,1);
      }
      lVar1 = *(long *)(param_1 + 0x28);
      native_UnityEngine_Time__get_fixedDeltaTime_7708c8(0);
      if (lVar1 != 0) {
        if (pcRam0000000001343af8 == (code *)0x0) {
          pcRam0000000001343af8 = (code *)native_sub_4326f0(&UNK_00ecbc20,2,0);
        }
        (*pcRam0000000001343af8)(lVar1,&stack0xffffffffffffffc0,2);
        return;
      }
    }
  }
                    /* WARNING: Subroutine does not return */
  native_sub_432810();
}



/* JoystickPlayerExample$$.ctor @ 0x7f7a60
 * void JoystickPlayerExample___ctor (JoystickPlayerExample_o* __this, const MethodInfo* method); */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* JoystickPlayerExample$$.ctor
   void JoystickPlayerExample___ctor (JoystickPlayerExample_o* __this, const MethodInfo* method); */

undefined1  [16] native_JoystickPlayerExample___ctor_7f7a60(ulong param_1)

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


