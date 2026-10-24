/* ARM64 IL2CPP native pseudocode from Ghidra.
 * Recovered implementation, not original C# source.
 * Function boundaries follow the IL2CPP method address table. */


/* MG_BlocksEngine2.DragDrop.BE2_DragSelectionVariable.<>c$$.cctor @ 0x54787c
 * void MG_BlocksEngine2_DragDrop_BE2_DragSelectionVariable___c___cctor (const MethodInfo* method); */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* MG_BlocksEngine2.DragDrop.BE2_DragSelectionVariable.<>c$$.cctor
   void MG_BlocksEngine2_DragDrop_BE2_DragSelectionVariable___c___cctor (const MethodInfo* method);
    */

void native_MG_BlocksEngine2_DragDrop_BE2_DragSelectionVariable___c___cctor_54787c(void)

{
  ulong *puVar1;
  char cVar2;
  bool bVar3;
  undefined8 uVar4;
  undefined8 *puVar5;
  
  if ((bRam000000000133e9a1 & 1) == 0) {
    native_sub_43273c(&MG_BlocksEngine2_DragDrop_BE2_DragSelectionVariable___c_TypeInfo_12d7008);
    bRam000000000133e9a1 = 1;
  }
  uVar4 = native_sub_432808(
                           _MG_BlocksEngine2_DragDrop_BE2_DragSelectionVariable___c_TypeInfo_12d7008
                           );
  native_System_Object___ctor_ad2798(uVar4,0);
  puVar5 = *(undefined8 **)
            (_MG_BlocksEngine2_DragDrop_BE2_DragSelectionVariable___c_TypeInfo_12d7008 + 0xb8);
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



/* MG_BlocksEngine2.DragDrop.BE2_DragSelectionVariable.<>c$$.ctor @ 0x5478e0
 * void MG_BlocksEngine2_DragDrop_BE2_DragSelectionVariable___c___ctor (MG_BlocksEngine2_DragDrop_BE2_DragSelectionVariable___c_o* __this, const MethodInfo* method); */

/* MG_BlocksEngine2.DragDrop.BE2_DragSelectionVariable.<>c$$.ctor
   void MG_BlocksEngine2_DragDrop_BE2_DragSelectionVariable___c___ctor
   (MG_BlocksEngine2_DragDrop_BE2_DragSelectionVariable___c_o* __this, const MethodInfo* method); */

void native_MG_BlocksEngine2_DragDrop_BE2_DragSelectionVariable___c___ctor_5478e0(void)

{
  return;
}



/* MG_BlocksEngine2.DragDrop.BE2_DragSelectionVariable.<>c$$<OnPointerDown>b__16_0 @ 0x5478e8
 * bool MG_BlocksEngine2_DragDrop_BE2_DragSelectionVariable___c___OnPointerDown_b__16_0 (MG_BlocksEngine2_DragDrop_BE2_DragSelectionVariable___c_o* __this, MG_BlocksEngine2_Environment_I_BE2_ProgrammingEnv_o* x, const MethodInfo* method); */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* MG_BlocksEngine2.DragDrop.BE2_DragSelectionVariable.<>c$$<OnPointerDown>b__16_0
   bool MG_BlocksEngine2_DragDrop_BE2_DragSelectionVariable___c___OnPointerDown_b__16_0
   (MG_BlocksEngine2_DragDrop_BE2_DragSelectionVariable___c_o* __this,
   MG_BlocksEngine2_Environment_I_BE2_ProgrammingEnv_o* x, const MethodInfo* method); */

void native_MG_BlocksEngine2_DragDrop_BE2_DragSelectionVariable___c___OnPointerDown_b__16_0_5478e8
               (undefined8 param_1,long *param_2)

{
  undefined8 *puVar1;
  long lVar2;
  ulong uVar3;
  int *piVar4;
  
  if ((bRam000000000133e9a2 & 1) == 0) {
    native_sub_43273c(&MG_BlocksEngine2_Environment_I_BE2_ProgrammingEnv_TypeInfo_12d4e38);
    bRam000000000133e9a2 = 1;
  }
  if (param_2 == (long *)0x0) {
                    /* WARNING: Subroutine does not return */
    native_sub_432810();
  }
  lVar2 = *param_2;
  if ((ulong)*(ushort *)(lVar2 + 0x12a) != 0) {
    uVar3 = 0;
    piVar4 = (int *)(*(long *)(lVar2 + 0xb0) + 8);
    do {
      if (*(long *)(piVar4 + -2) ==
          _MG_BlocksEngine2_Environment_I_BE2_ProgrammingEnv_TypeInfo_12d4e38) {
        puVar1 = (undefined8 *)(lVar2 + (long)(*piVar4 + 3) * 0x10 + 0x138);
        goto LAB_0054797c;
      }
      uVar3 = uVar3 + 1;
      piVar4 = piVar4 + 4;
    } while (uVar3 < *(ushort *)(lVar2 + 0x12a));
  }
  puVar1 = (undefined8 *)
           native_sub_3c9b34(param_2,
                             _MG_BlocksEngine2_Environment_I_BE2_ProgrammingEnv_TypeInfo_12d4e38,3);
LAB_0054797c:
                    /* WARNING: Could not recover jumptable at 0x0054798c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)*puVar1)(param_2,puVar1[1]);
  return;
}


