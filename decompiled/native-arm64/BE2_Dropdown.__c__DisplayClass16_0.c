/* ARM64 IL2CPP native pseudocode from Ghidra.
 * Recovered implementation, not original C# source.
 * Function boundaries follow the IL2CPP method address table. */


/* MG_BlocksEngine2.Utils.BE2_Dropdown.<>c__DisplayClass16_0$$.ctor @ 0x547994
 * void MG_BlocksEngine2_Utils_BE2_Dropdown___c__DisplayClass16_0___ctor (MG_BlocksEngine2_Utils_BE2_Dropdown___c__DisplayClass16_0_o* __this, const MethodInfo* method); */

/* MG_BlocksEngine2.Utils.BE2_Dropdown.<>c__DisplayClass16_0$$.ctor
   void MG_BlocksEngine2_Utils_BE2_Dropdown___c__DisplayClass16_0___ctor
   (MG_BlocksEngine2_Utils_BE2_Dropdown___c__DisplayClass16_0_o* __this, const MethodInfo* method);
    */

void native_MG_BlocksEngine2_Utils_BE2_Dropdown___c__DisplayClass16_0___ctor_547994(void)

{
  return;
}



/* MG_BlocksEngine2.Utils.BE2_Dropdown.<>c__DisplayClass16_0$$<GetIndexOf>b__0 @ 0x54799c
 * bool MG_BlocksEngine2_Utils_BE2_Dropdown___c__DisplayClass16_0___GetIndexOf_b__0 (MG_BlocksEngine2_Utils_BE2_Dropdown___c__DisplayClass16_0_o* __this, TMPro_TMP_Dropdown_OptionData_o* option, const MethodInfo* method); */

/* MG_BlocksEngine2.Utils.BE2_Dropdown.<>c__DisplayClass16_0$$<GetIndexOf>b__0
   bool MG_BlocksEngine2_Utils_BE2_Dropdown___c__DisplayClass16_0___GetIndexOf_b__0
   (MG_BlocksEngine2_Utils_BE2_Dropdown___c__DisplayClass16_0_o* __this,
   TMPro_TMP_Dropdown_OptionData_o* option, const MethodInfo* method); */

undefined4
native_MG_BlocksEngine2_Utils_BE2_Dropdown___c__DisplayClass16_0___GetIndexOf_b__0_54799c
          (long param_1,long param_2)

{
  bool bVar1;
  ulong uVar2;
  long lVar3;
  int iVar4;
  undefined4 uVar5;
  long lVar6;
  long *plVar7;
  long *plVar8;
  int iVar9;
  
  if (param_2 == 0) {
                    /* WARNING: Subroutine does not return */
    native_sub_432810();
  }
  lVar6 = *(long *)(param_2 + 0x10);
  lVar3 = *(long *)(param_1 + 0x10);
  if (lVar6 == lVar3) {
    uVar5 = 1;
  }
  else {
    uVar5 = 0;
    if ((lVar6 != 0) && (lVar3 != 0)) {
      if (*(int *)(lVar6 + 0x10) == *(int *)(lVar3 + 0x10)) {
        if ((lVar6 == 0) || (lVar3 == 0)) {
                    /* WARNING: Subroutine does not return */
          native_sub_432810(lVar6,lVar3,0);
        }
        iVar4 = *(int *)(lVar6 + 0x10);
        plVar7 = (long *)(lVar6 + 0x14);
        plVar8 = (long *)(lVar3 + 0x14);
        uVar2 = native_System_Environment__get_Is64BitProcess_bf15dc(0);
        if ((uVar2 & 1) == 0) {
          iVar9 = iVar4;
          if (9 < iVar4) {
            do {
              if ((int)*plVar7 != (int)*plVar8) {
                return 0;
              }
              if (*(int *)((long)plVar7 + 4) != *(int *)((long)plVar8 + 4)) {
                return 0;
              }
              if ((int)plVar7[1] != (int)plVar8[1]) {
                return 0;
              }
              if (*(int *)((long)plVar7 + 0xc) != *(int *)((long)plVar8 + 0xc)) {
                return 0;
              }
              if ((int)plVar7[2] != (int)plVar8[2]) {
                return 0;
              }
              iVar4 = iVar9 + -10;
              plVar7 = (long *)((long)plVar7 + 0x14);
              plVar8 = (long *)((long)plVar8 + 0x14);
              bVar1 = 0x13 < iVar9;
              iVar9 = iVar4;
            } while (bVar1);
          }
        }
        else {
          iVar9 = iVar4;
          if (0xb < iVar4) {
            do {
              if (*plVar7 != *plVar8) {
                return 0;
              }
              if (plVar7[1] != plVar8[1]) {
                return 0;
              }
              if (plVar7[2] != plVar8[2]) {
                return 0;
              }
              iVar4 = iVar9 + -0xc;
              plVar7 = plVar7 + 3;
              plVar8 = plVar8 + 3;
              bVar1 = 0x17 < iVar9;
              iVar9 = iVar4;
            } while (bVar1);
          }
        }
        if (0 < iVar4) {
          iVar4 = iVar4 + 2;
          do {
            if ((int)*plVar7 != (int)*plVar8) {
              return 0;
            }
            iVar4 = iVar4 + -2;
            plVar7 = (long *)((long)plVar7 + 4);
            plVar8 = (long *)((long)plVar8 + 4);
          } while (2 < iVar4);
        }
        return 1;
      }
      uVar5 = 0;
    }
  }
  return uVar5;
}



/* MG_BlocksEngine2.Utils.BE2_Dropdown.<>c__DisplayClass16_0$$<GetIndexOf>b__1 @ 0x5479c0
 * bool MG_BlocksEngine2_Utils_BE2_Dropdown___c__DisplayClass16_0___GetIndexOf_b__1 (MG_BlocksEngine2_Utils_BE2_Dropdown___c__DisplayClass16_0_o* __this, UnityEngine_UI_Dropdown_OptionData_o* option, const MethodInfo* method); */

/* MG_BlocksEngine2.Utils.BE2_Dropdown.<>c__DisplayClass16_0$$<GetIndexOf>b__1
   bool MG_BlocksEngine2_Utils_BE2_Dropdown___c__DisplayClass16_0___GetIndexOf_b__1
   (MG_BlocksEngine2_Utils_BE2_Dropdown___c__DisplayClass16_0_o* __this,
   UnityEngine_UI_Dropdown_OptionData_o* option, const MethodInfo* method); */

undefined4
native_MG_BlocksEngine2_Utils_BE2_Dropdown___c__DisplayClass16_0___GetIndexOf_b__1_5479c0
          (long param_1,long param_2)

{
  bool bVar1;
  ulong uVar2;
  long lVar3;
  int iVar4;
  undefined4 uVar5;
  long lVar6;
  long *plVar7;
  long *plVar8;
  int iVar9;
  
  if (param_2 == 0) {
                    /* WARNING: Subroutine does not return */
    native_sub_432810();
  }
  lVar6 = *(long *)(param_2 + 0x10);
  lVar3 = *(long *)(param_1 + 0x10);
  if (lVar6 == lVar3) {
    uVar5 = 1;
  }
  else {
    uVar5 = 0;
    if ((lVar6 != 0) && (lVar3 != 0)) {
      if (*(int *)(lVar6 + 0x10) == *(int *)(lVar3 + 0x10)) {
        if ((lVar6 == 0) || (lVar3 == 0)) {
                    /* WARNING: Subroutine does not return */
          native_sub_432810(lVar6,lVar3,0);
        }
        iVar4 = *(int *)(lVar6 + 0x10);
        plVar7 = (long *)(lVar6 + 0x14);
        plVar8 = (long *)(lVar3 + 0x14);
        uVar2 = native_System_Environment__get_Is64BitProcess_bf15dc(0);
        if ((uVar2 & 1) == 0) {
          iVar9 = iVar4;
          if (9 < iVar4) {
            do {
              if ((int)*plVar7 != (int)*plVar8) {
                return 0;
              }
              if (*(int *)((long)plVar7 + 4) != *(int *)((long)plVar8 + 4)) {
                return 0;
              }
              if ((int)plVar7[1] != (int)plVar8[1]) {
                return 0;
              }
              if (*(int *)((long)plVar7 + 0xc) != *(int *)((long)plVar8 + 0xc)) {
                return 0;
              }
              if ((int)plVar7[2] != (int)plVar8[2]) {
                return 0;
              }
              iVar4 = iVar9 + -10;
              plVar7 = (long *)((long)plVar7 + 0x14);
              plVar8 = (long *)((long)plVar8 + 0x14);
              bVar1 = 0x13 < iVar9;
              iVar9 = iVar4;
            } while (bVar1);
          }
        }
        else {
          iVar9 = iVar4;
          if (0xb < iVar4) {
            do {
              if (*plVar7 != *plVar8) {
                return 0;
              }
              if (plVar7[1] != plVar8[1]) {
                return 0;
              }
              if (plVar7[2] != plVar8[2]) {
                return 0;
              }
              iVar4 = iVar9 + -0xc;
              plVar7 = plVar7 + 3;
              plVar8 = plVar8 + 3;
              bVar1 = 0x17 < iVar9;
              iVar9 = iVar4;
            } while (bVar1);
          }
        }
        if (0 < iVar4) {
          iVar4 = iVar4 + 2;
          do {
            if ((int)*plVar7 != (int)*plVar8) {
              return 0;
            }
            iVar4 = iVar4 + -2;
            plVar7 = (long *)((long)plVar7 + 4);
            plVar8 = (long *)((long)plVar8 + 4);
          } while (2 < iVar4);
        }
        return 1;
      }
      uVar5 = 0;
    }
  }
  return uVar5;
}


