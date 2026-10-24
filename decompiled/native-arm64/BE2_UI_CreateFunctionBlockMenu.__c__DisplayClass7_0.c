/* ARM64 IL2CPP native pseudocode from Ghidra.
 * Recovered implementation, not original C# source.
 * Function boundaries follow the IL2CPP method address table. */


/* MG_BlocksEngine2.UI.FunctionBlock.BE2_UI_CreateFunctionBlockMenu.<>c__DisplayClass7_0$$.ctor @ 0x548e8c
 * void MG_BlocksEngine2_UI_FunctionBlock_BE2_UI_CreateFunctionBlockMenu___c__DisplayClass7_0___ctor (MG_BlocksEngine2_UI_FunctionBlock_BE2_UI_CreateFunctionBlockMenu___c__DisplayClass7_0_o* __this, const MethodInfo* method); */

/* MG_BlocksEngine2.UI.FunctionBlock.BE2_UI_CreateFunctionBlockMenu.<>c__DisplayClass7_0$$.ctor
   void MG_BlocksEngine2_UI_FunctionBlock_BE2_UI_CreateFunctionBlockMenu___c__DisplayClass7_0___ctor
   (MG_BlocksEngine2_UI_FunctionBlock_BE2_UI_CreateFunctionBlockMenu___c__DisplayClass7_0_o* __this,
   const MethodInfo* method); */

void native_MG_BlocksEngine2_UI_FunctionBlock_BE2_UI_CreateFunctionBlockMenu___c__DisplayClass7_0___ctor_548e8c
               (void)

{
  return;
}



/* MG_BlocksEngine2.UI.FunctionBlock.BE2_UI_CreateFunctionBlockMenu.<>c__DisplayClass7_0$$<AddLabel>b__0 @ 0x548e94
 * void MG_BlocksEngine2_UI_FunctionBlock_BE2_UI_CreateFunctionBlockMenu___c__DisplayClass7_0___AddLabel_b__0 (MG_BlocksEngine2_UI_FunctionBlock_BE2_UI_CreateFunctionBlockMenu___c__DisplayClass7_0_o* __this, const MethodInfo* method); */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* MG_BlocksEngine2.UI.FunctionBlock.BE2_UI_CreateFunctionBlockMenu.<>c__DisplayClass7_0$$<AddLabel>b__0
   void 
   MG_BlocksEngine2_UI_FunctionBlock_BE2_UI_CreateFunctionBlockMenu___c__DisplayClass7_0___AddLabel_b__0
   (MG_BlocksEngine2_UI_FunctionBlock_BE2_UI_CreateFunctionBlockMenu___c__DisplayClass7_0_o* __this,
   const MethodInfo* method); */

void native_MG_BlocksEngine2_UI_FunctionBlock_BE2_UI_CreateFunctionBlockMenu___c__DisplayClass7_0___AddLabel_b__0_548e94
               (long param_1)

{
  long lVar1;
  long lVar2;
  undefined8 *puVar3;
  undefined8 uVar4;
  long lVar5;
  ulong uVar6;
  int *piVar7;
  long *plVar8;
  
  lVar1 = *(long *)(param_1 + 0x10);
  if (lVar1 == 0) {
                    /* WARNING: Subroutine does not return */
    native_sub_432810();
  }
  lVar5 = *(long *)(param_1 + 0x18);
  if ((bRam0000000001346dd1 & 1) == 0) {
    native_sub_43273c(&MG_BlocksEngine2_Block_I_BE2_BlockLayout_TypeInfo_12d4de0,lVar5,0);
    native_sub_43273c(&MG_BlocksEngine2_Block_I_BE2_BlockSectionHeader_TypeInfo_12d4df8);
    native_sub_43273c(&MG_BlocksEngine2_Block_I_BE2_BlockSection_TypeInfo_12d4de8);
    native_sub_43273c(&MG_BlocksEngine2_Block_I_BE2_Block_TypeInfo_12d4dd8);
    native_sub_43273c(&UnityEngine_Object_TypeInfo_12d54e0);
    bRam0000000001346dd1 = 1;
  }
  if ((lVar5 != 0) &&
     (lVar2 = native_UnityEngine_GameObject__get_transform_8de5c8(lVar5,0), lVar2 != 0)) {
    native_UnityEngine_Transform__SetParent_77208c(lVar2,0,0);
    plVar8 = *(long **)(lVar1 + 0x20);
    if (plVar8 != (long *)0x0) {
      lVar1 = *plVar8;
      if ((ulong)*(ushort *)(lVar1 + 0x12a) != 0) {
        uVar6 = 0;
        piVar7 = (int *)(*(long *)(lVar1 + 0xb0) + 8);
        do {
          if (*(long *)(piVar7 + -2) == _MG_BlocksEngine2_Block_I_BE2_Block_TypeInfo_12d4dd8) {
            puVar3 = (undefined8 *)(lVar1 + (long)(*piVar7 + 3) * 0x10 + 0x138);
            goto LAB_00dc7d74;
          }
          uVar6 = uVar6 + 1;
          piVar7 = piVar7 + 4;
        } while (uVar6 < *(ushort *)(lVar1 + 0x12a));
      }
      puVar3 = (undefined8 *)
               native_sub_3c9b34(plVar8,_MG_BlocksEngine2_Block_I_BE2_Block_TypeInfo_12d4dd8,3);
LAB_00dc7d74:
      plVar8 = (long *)(*(code *)*puVar3)(plVar8,puVar3[1]);
      if (plVar8 != (long *)0x0) {
        lVar1 = *plVar8;
        if ((ulong)*(ushort *)(lVar1 + 0x12a) != 0) {
          uVar6 = 0;
          piVar7 = (int *)(*(long *)(lVar1 + 0xb0) + 8);
          do {
            if (*(long *)(piVar7 + -2) == _MG_BlocksEngine2_Block_I_BE2_BlockLayout_TypeInfo_12d4de0
               ) {
              puVar3 = (undefined8 *)(lVar1 + (long)(*piVar7 + 2) * 0x10 + 0x138);
              goto LAB_00dc7de8;
            }
            uVar6 = uVar6 + 1;
            piVar7 = piVar7 + 4;
          } while (uVar6 < *(ushort *)(lVar1 + 0x12a));
        }
        puVar3 = (undefined8 *)
                 native_sub_3c9b34(plVar8,_MG_BlocksEngine2_Block_I_BE2_BlockLayout_TypeInfo_12d4de0
                                   ,2);
LAB_00dc7de8:
        lVar1 = (*(code *)*puVar3)(plVar8,puVar3[1]);
        if (lVar1 != 0) {
          if (*(int *)(lVar1 + 0x18) == 0) {
            uVar4 = native_sub_43283c();
                    /* WARNING: Subroutine does not return */
            native_sub_4327dc(uVar4,0);
          }
          plVar8 = *(long **)(lVar1 + 0x20);
          if (plVar8 != (long *)0x0) {
            lVar1 = *plVar8;
            if ((ulong)*(ushort *)(lVar1 + 0x12a) != 0) {
              uVar6 = 0;
              piVar7 = (int *)(*(long *)(lVar1 + 0xb0) + 8);
              do {
                if (*(long *)(piVar7 + -2) ==
                    _MG_BlocksEngine2_Block_I_BE2_BlockSection_TypeInfo_12d4de8) {
                  puVar3 = (undefined8 *)(lVar1 + (long)(*piVar7 + 1) * 0x10 + 0x138);
                  goto LAB_00dc7e68;
                }
                uVar6 = uVar6 + 1;
                piVar7 = piVar7 + 4;
              } while (uVar6 < *(ushort *)(lVar1 + 0x12a));
            }
            puVar3 = (undefined8 *)
                     native_sub_3c9b34(plVar8,
                                       _MG_BlocksEngine2_Block_I_BE2_BlockSection_TypeInfo_12d4de8,1
                                      );
LAB_00dc7e68:
            plVar8 = (long *)(*(code *)*puVar3)(plVar8,puVar3[1]);
            if (plVar8 != (long *)0x0) {
              lVar1 = *plVar8;
              if ((ulong)*(ushort *)(lVar1 + 0x12a) != 0) {
                uVar6 = 0;
                piVar7 = (int *)(*(long *)(lVar1 + 0xb0) + 8);
                do {
                  if (*(long *)(piVar7 + -2) ==
                      _MG_BlocksEngine2_Block_I_BE2_BlockSectionHeader_TypeInfo_12d4df8) {
                    puVar3 = (undefined8 *)(lVar1 + (long)(*piVar7 + 6) * 0x10 + 0x138);
                    goto LAB_00dc7edc;
                  }
                  uVar6 = uVar6 + 1;
                  piVar7 = piVar7 + 4;
                } while (uVar6 < *(ushort *)(lVar1 + 0x12a));
              }
              puVar3 = (undefined8 *)
                       native_sub_3c9b34(plVar8,
                                         _MG_BlocksEngine2_Block_I_BE2_BlockSectionHeader_TypeInfo_12d4df8
                                         ,6);
LAB_00dc7edc:
              (*(code *)*puVar3)(plVar8,puVar3[1]);
              if (((*(byte *)(_UnityEngine_Object_TypeInfo_12d54e0 + 0x133) >> 2 & 1) != 0) &&
                 (*(int *)(_UnityEngine_Object_TypeInfo_12d54e0 + 0xe0) == 0)) {
                native_sub_4327ec();
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
              (*pcRam0000000001341040)(0,lVar5);
              return;
            }
          }
        }
      }
    }
  }
                    /* WARNING: Subroutine does not return */
  native_sub_432810();
}


