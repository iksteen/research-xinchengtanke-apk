/* ARM64 IL2CPP native pseudocode from Ghidra.
 * Recovered implementation, not original C# source.
 * Function boundaries follow the IL2CPP method address table. */


/* MG_BlocksEngine2.Environment.BE2_VerticalFunctionBlocksManager.<>c__DisplayClass0_0$$.ctor @ 0x549638
 * void MG_BlocksEngine2_Environment_BE2_VerticalFunctionBlocksManager___c__DisplayClass0_0___ctor (MG_BlocksEngine2_Environment_BE2_VerticalFunctionBlocksManager___c__DisplayClass0_0_o* __this, const MethodInfo* method); */

/* MG_BlocksEngine2.Environment.BE2_VerticalFunctionBlocksManager.<>c__DisplayClass0_0$$.ctor
   void MG_BlocksEngine2_Environment_BE2_VerticalFunctionBlocksManager___c__DisplayClass0_0___ctor
   (MG_BlocksEngine2_Environment_BE2_VerticalFunctionBlocksManager___c__DisplayClass0_0_o* __this,
   const MethodInfo* method); */

void native_MG_BlocksEngine2_Environment_BE2_VerticalFunctionBlocksManager___c__DisplayClass0_0___ctor_549638
               (void)

{
  return;
}



/* MG_BlocksEngine2.Environment.BE2_VerticalFunctionBlocksManager.<>c__DisplayClass0_0$$<CreateFunctionBlock>b__1 @ 0x549640
 * bool MG_BlocksEngine2_Environment_BE2_VerticalFunctionBlocksManager___c__DisplayClass0_0___CreateFunctionBlock_b__1 (MG_BlocksEngine2_Environment_BE2_VerticalFunctionBlocksManager___c__DisplayClass0_0_o* __this, System_String_o* s, const MethodInfo* method); */

/* MG_BlocksEngine2.Environment.BE2_VerticalFunctionBlocksManager.<>c__DisplayClass0_0$$<CreateFunctionBlock>b__1
   bool 
   MG_BlocksEngine2_Environment_BE2_VerticalFunctionBlocksManager___c__DisplayClass0_0___CreateFunctionBlock_b__1
   (MG_BlocksEngine2_Environment_BE2_VerticalFunctionBlocksManager___c__DisplayClass0_0_o* __this,
   System_String_o* s, const MethodInfo* method); */

undefined4
native_MG_BlocksEngine2_Environment_BE2_VerticalFunctionBlocksManager___c__DisplayClass0_0___CreateFunctionBlock_b__1_549640
          (long param_1,long param_2)

{
  bool bVar1;
  ulong uVar2;
  int iVar3;
  undefined4 uVar4;
  long lVar5;
  long *plVar6;
  long *plVar7;
  int iVar8;
  
  lVar5 = *(long *)(param_1 + 0x10);
  if (param_2 == lVar5) {
    uVar4 = 1;
  }
  else {
    uVar4 = 0;
    if ((param_2 != 0) && (lVar5 != 0)) {
      if (*(int *)(param_2 + 0x10) == *(int *)(lVar5 + 0x10)) {
        if ((param_2 == 0) || (lVar5 == 0)) {
                    /* WARNING: Subroutine does not return */
          native_sub_432810(param_2,lVar5,0);
        }
        iVar3 = *(int *)(param_2 + 0x10);
        plVar6 = (long *)(param_2 + 0x14);
        plVar7 = (long *)(lVar5 + 0x14);
        uVar2 = native_System_Environment__get_Is64BitProcess_bf15dc(0);
        if ((uVar2 & 1) == 0) {
          iVar8 = iVar3;
          if (9 < iVar3) {
            do {
              if ((int)*plVar6 != (int)*plVar7) {
                return 0;
              }
              if (*(int *)((long)plVar6 + 4) != *(int *)((long)plVar7 + 4)) {
                return 0;
              }
              if ((int)plVar6[1] != (int)plVar7[1]) {
                return 0;
              }
              if (*(int *)((long)plVar6 + 0xc) != *(int *)((long)plVar7 + 0xc)) {
                return 0;
              }
              if ((int)plVar6[2] != (int)plVar7[2]) {
                return 0;
              }
              iVar3 = iVar8 + -10;
              plVar6 = (long *)((long)plVar6 + 0x14);
              plVar7 = (long *)((long)plVar7 + 0x14);
              bVar1 = 0x13 < iVar8;
              iVar8 = iVar3;
            } while (bVar1);
          }
        }
        else {
          iVar8 = iVar3;
          if (0xb < iVar3) {
            do {
              if (*plVar6 != *plVar7) {
                return 0;
              }
              if (plVar6[1] != plVar7[1]) {
                return 0;
              }
              if (plVar6[2] != plVar7[2]) {
                return 0;
              }
              iVar3 = iVar8 + -0xc;
              plVar6 = plVar6 + 3;
              plVar7 = plVar7 + 3;
              bVar1 = 0x17 < iVar8;
              iVar8 = iVar3;
            } while (bVar1);
          }
        }
        if (0 < iVar3) {
          iVar3 = iVar3 + 2;
          do {
            if ((int)*plVar6 != (int)*plVar7) {
              return 0;
            }
            iVar3 = iVar3 + -2;
            plVar6 = (long *)((long)plVar6 + 4);
            plVar7 = (long *)((long)plVar7 + 4);
          } while (2 < iVar3);
        }
        return 1;
      }
      uVar4 = 0;
    }
  }
  return uVar4;
}


