/* ARM64 IL2CPP native pseudocode from Ghidra.
 * Recovered implementation, not original C# source.
 * Function boundaries follow the IL2CPP method address table. */


/* MG_BlocksEngine2.Core.BE2_BlocksStack.<>c$$.cctor @ 0x546620
 * void MG_BlocksEngine2_Core_BE2_BlocksStack___c___cctor (const MethodInfo* method); */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* MG_BlocksEngine2.Core.BE2_BlocksStack.<>c$$.cctor
   void MG_BlocksEngine2_Core_BE2_BlocksStack___c___cctor (const MethodInfo* method); */

void native_MG_BlocksEngine2_Core_BE2_BlocksStack___c___cctor_546620(void)

{
  ulong *puVar1;
  char cVar2;
  bool bVar3;
  undefined8 uVar4;
  undefined8 *puVar5;
  
  if ((bRam000000000133e997 & 1) == 0) {
    native_sub_43273c(&MG_BlocksEngine2_Core_BE2_BlocksStack___c_TypeInfo_12d6fd8);
    bRam000000000133e997 = 1;
  }
  uVar4 = native_sub_432808(_MG_BlocksEngine2_Core_BE2_BlocksStack___c_TypeInfo_12d6fd8);
  native_System_Object___ctor_ad2798(uVar4,0);
  puVar5 = *(undefined8 **)(_MG_BlocksEngine2_Core_BE2_BlocksStack___c_TypeInfo_12d6fd8 + 0xb8);
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



/* MG_BlocksEngine2.Core.BE2_BlocksStack.<>c$$.ctor @ 0x546684
 * void MG_BlocksEngine2_Core_BE2_BlocksStack___c___ctor (MG_BlocksEngine2_Core_BE2_BlocksStack___c_o* __this, const MethodInfo* method); */

/* MG_BlocksEngine2.Core.BE2_BlocksStack.<>c$$.ctor
   void MG_BlocksEngine2_Core_BE2_BlocksStack___c___ctor
   (MG_BlocksEngine2_Core_BE2_BlocksStack___c_o* __this, const MethodInfo* method); */

void native_MG_BlocksEngine2_Core_BE2_BlocksStack___c___ctor_546684(void)

{
  return;
}



/* MG_BlocksEngine2.Core.BE2_BlocksStack.<>c$$<PopulateStackRecursive>b__49_0 @ 0x54668c
 * bool MG_BlocksEngine2_Core_BE2_BlocksStack___c___PopulateStackRecursive_b__49_0 (MG_BlocksEngine2_Core_BE2_BlocksStack___c_o* __this, MG_BlocksEngine2_Block_I_BE2_BlockSection_o* x, const MethodInfo* method); */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* MG_BlocksEngine2.Core.BE2_BlocksStack.<>c$$<PopulateStackRecursive>b__49_0
   bool MG_BlocksEngine2_Core_BE2_BlocksStack___c___PopulateStackRecursive_b__49_0
   (MG_BlocksEngine2_Core_BE2_BlocksStack___c_o* __this,
   MG_BlocksEngine2_Block_I_BE2_BlockSection_o* x, const MethodInfo* method); */

bool native_MG_BlocksEngine2_Core_BE2_BlocksStack___c___PopulateStackRecursive_b__49_0_54668c
               (undefined8 param_1,long *param_2)

{
  undefined8 *puVar1;
  long lVar2;
  ulong uVar3;
  int *piVar4;
  
  if ((bRam000000000133e998 & 1) == 0) {
    native_sub_43273c(&MG_BlocksEngine2_Block_I_BE2_BlockSection_TypeInfo_12d4de8);
    bRam000000000133e998 = 1;
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
      if (*(long *)(piVar4 + -2) == _MG_BlocksEngine2_Block_I_BE2_BlockSection_TypeInfo_12d4de8) {
        puVar1 = (undefined8 *)(lVar2 + (long)(*piVar4 + 2) * 0x10 + 0x138);
        goto LAB_00546720;
      }
      uVar3 = uVar3 + 1;
      piVar4 = piVar4 + 4;
    } while (uVar3 < *(ushort *)(lVar2 + 0x12a));
  }
  puVar1 = (undefined8 *)
           native_sub_3c9b34(param_2,_MG_BlocksEngine2_Block_I_BE2_BlockSection_TypeInfo_12d4de8,2);
LAB_00546720:
  lVar2 = (*(code *)*puVar1)(param_2,puVar1[1]);
  return lVar2 != 0;
}


