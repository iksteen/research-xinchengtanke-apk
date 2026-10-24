/* ARM64 IL2CPP native pseudocode from Ghidra.
 * Recovered implementation, not original C# source.
 * Function boundaries follow the IL2CPP method address table. */


/* BE2_Ins_SlideBack$$get_ExecuteInUpdate @ 0x60d740
 * bool BE2_Ins_SlideBack__get_ExecuteInUpdate (BE2_Ins_SlideBack_o* __this, const MethodInfo* method); */

/* BE2_Ins_SlideBack$$get_ExecuteInUpdate
   bool BE2_Ins_SlideBack__get_ExecuteInUpdate (BE2_Ins_SlideBack_o* __this, const MethodInfo*
   method); */

undefined8 native_BE2_Ins_SlideBack__get_ExecuteInUpdate_60d740(void)

{
  return 1;
}



/* BE2_Ins_SlideBack$$OnButtonStop @ 0x60d748
 * void BE2_Ins_SlideBack__OnButtonStop (BE2_Ins_SlideBack_o* __this, const MethodInfo* method); */

/* BE2_Ins_SlideBack$$OnButtonStop
   void BE2_Ins_SlideBack__OnButtonStop (BE2_Ins_SlideBack_o* __this, const MethodInfo* method); */

void native_BE2_Ins_SlideBack__OnButtonStop_60d748(long param_1)

{
  *(undefined1 *)(param_1 + 0x88) = 1;
  *(undefined8 *)(param_1 + 0x8c) = 0;
  return;
}



/* BE2_Ins_SlideBack$$OnStackActive @ 0x60d758
 * void BE2_Ins_SlideBack__OnStackActive (BE2_Ins_SlideBack_o* __this, const MethodInfo* method); */

/* BE2_Ins_SlideBack$$OnStackActive
   void BE2_Ins_SlideBack__OnStackActive (BE2_Ins_SlideBack_o* __this, const MethodInfo* method); */

void native_BE2_Ins_SlideBack__OnStackActive_60d758(long param_1)

{
  *(undefined1 *)(param_1 + 0x88) = 1;
  *(undefined8 *)(param_1 + 0x8c) = 0;
  return;
}



/* BE2_Ins_SlideBack$$Function @ 0x60d768
 * void BE2_Ins_SlideBack__Function (BE2_Ins_SlideBack_o* __this, const MethodInfo* method); */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* BE2_Ins_SlideBack$$Function
   void BE2_Ins_SlideBack__Function (BE2_Ins_SlideBack_o* __this, const MethodInfo* method); */

void native_BE2_Ins_SlideBack__Function_60d768
               (undefined1 param_1 [16],undefined1 param_2 [16],undefined4 param_3,long param_4)

{
  ulong *puVar1;
  char cVar2;
  bool bVar3;
  long lVar4;
  undefined8 uVar5;
  ulong uVar6;
  int *piVar7;
  undefined8 *puVar8;
  long *plVar9;
  float fVar10;
  undefined4 uVar11;
  float fVar12;
  
  if ((bRam000000000133ee37 & 1) == 0) {
    native_sub_43273c(&MG_BlocksEngine2_Block_I_BE2_BlockSectionHeaderInput_TypeInfo_12d4e00);
    native_sub_43273c(&MG_BlocksEngine2_Environment_I_BE2_TargetObject_TypeInfo_12d4e50);
    native_sub_43273c(&PanelMainUIController_TypeInfo_12d5600);
    native_sub_43273c(&StringLiteral_back_12f3b50);
    bRam000000000133ee37 = 1;
  }
  if (*(char *)(param_4 + 0x88) == '\0') {
LAB_0060d8f4:
    if (*(float *)(param_4 + 0x84) <= (float)*(int *)(param_4 + 0x90)) {
      native_MG_BlocksEngine2_Block_Instruction_BE2_InstructionBase__ExecuteNextInstruction_603c34
                (param_4);
      *(undefined8 *)(param_4 + 0x8c) = 0;
      *(undefined1 *)(param_4 + 0x88) = 1;
    }
    else {
      fVar10 = *(float *)(param_4 + 0x8c);
      if (fVar10 < 1.0) {
        fVar12 = (float)native_UnityEngine_Time__get_deltaTime_77082c(0);
        fVar10 = fVar10 + fVar12 / 0.2;
        if (1.0 < fVar10) {
          fVar10 = 1.0;
        }
        *(float *)(param_4 + 0x8c) = fVar10;
        if (((*(byte *)(_PanelMainUIController_TypeInfo_12d5600 + 0x133) >> 2 & 1) != 0) &&
           (*(int *)(_PanelMainUIController_TypeInfo_12d5600 + 0xe0) == 0)) {
          native_sub_4327ec();
        }
        puVar8 = (undefined8 *)(*(long *)(_PanelMainUIController_TypeInfo_12d5600 + 0xb8) + 0x28);
        *puVar8 = _StringLiteral_back_12f3b50;
        if (iRam0000000001345318 != 0) {
          puVar1 = (ulong *)(((ulong)puVar8 >> 0x12 & 0x7fff) * 8 + 0x138ecd8);
          do {
            cVar2 = '\x01';
            bVar3 = (bool)ExclusiveMonitorPass(puVar1,0x10);
            if (bVar3) {
              *puVar1 = *puVar1 | 1L << ((ulong)puVar8 >> 0xc & 0x3f);
              cVar2 = ExclusiveMonitorsStatus();
            }
          } while (cVar2 != '\0');
        }
        return;
      }
      *(undefined4 *)(param_4 + 0x8c) = 0;
      *(int *)(param_4 + 0x90) = *(int *)(param_4 + 0x90) + 1;
      *(undefined1 *)(param_4 + 0x88) = 1;
    }
    return;
  }
  lVar4 = native_MG_BlocksEngine2_Block_Instruction_BE2_InstructionBase__get_Section0Inputs_603b78
                    (param_4);
  if (lVar4 != 0) {
    if (*(int *)(lVar4 + 0x18) == 0) {
      uVar5 = native_sub_43283c();
                    /* WARNING: Subroutine does not return */
      native_sub_4327dc(uVar5,0);
    }
    puVar8 = (undefined8 *)(param_4 + 0x78);
    *puVar8 = *(undefined8 *)(lVar4 + 0x20);
    native_sub_4326e0(puVar8);
    plVar9 = (long *)*puVar8;
    if (plVar9 != (long *)0x0) {
      lVar4 = *plVar9;
      if ((ulong)*(ushort *)(lVar4 + 0x12a) != 0) {
        uVar6 = 0;
        piVar7 = (int *)(*(long *)(lVar4 + 0xb0) + 8);
        do {
          if (*(long *)(piVar7 + -2) ==
              _MG_BlocksEngine2_Block_I_BE2_BlockSectionHeaderInput_TypeInfo_12d4e00) {
            puVar8 = (undefined8 *)(lVar4 + (long)(*piVar7 + 2) * 0x10 + 0x138);
            goto LAB_0060d858;
          }
          uVar6 = uVar6 + 1;
          piVar7 = piVar7 + 4;
        } while (uVar6 < *(ushort *)(lVar4 + 0x12a));
      }
      puVar8 = (undefined8 *)
               native_sub_3c9b34(plVar9,
                                 _MG_BlocksEngine2_Block_I_BE2_BlockSectionHeaderInput_TypeInfo_12d4e00
                                 ,2);
LAB_0060d858:
      fVar10 = (float)(*(code *)*puVar8)(plVar9,puVar8[1]);
      plVar9 = *(long **)(param_4 + 0x50);
      fVar12 = ABS(fVar10);
      *(float *)(param_4 + 0x80) = fVar10;
      *(float *)(param_4 + 0x84) = fVar12;
      if (plVar9 != (long *)0x0) {
        lVar4 = *plVar9;
        if ((ulong)*(ushort *)(lVar4 + 0x12a) != 0) {
          uVar6 = 0;
          piVar7 = (int *)(*(long *)(lVar4 + 0xb0) + 8);
          do {
            if (*(long *)(piVar7 + -2) ==
                _MG_BlocksEngine2_Environment_I_BE2_TargetObject_TypeInfo_12d4e50) {
              puVar8 = (undefined8 *)(lVar4 + (long)*piVar7 * 0x10 + 0x138);
              goto LAB_0060d8d0;
            }
            uVar6 = uVar6 + 1;
            piVar7 = piVar7 + 4;
          } while (uVar6 < *(ushort *)(lVar4 + 0x12a));
        }
        puVar8 = (undefined8 *)
                 native_sub_3c9b34(plVar9,
                                   _MG_BlocksEngine2_Environment_I_BE2_TargetObject_TypeInfo_12d4e50
                                   ,0);
LAB_0060d8d0:
        lVar4 = (*(code *)*puVar8)(plVar9,puVar8[1]);
        if (lVar4 != 0) {
          uVar11 = native_UnityEngine_Transform__get_position_77169c(lVar4,0);
          *(undefined4 *)(param_4 + 0x94) = uVar11;
          *(float *)(param_4 + 0x98) = fVar12;
          *(undefined4 *)(param_4 + 0x9c) = param_3;
          *(undefined1 *)(param_4 + 0x88) = 0;
          goto LAB_0060d8f4;
        }
      }
    }
  }
                    /* WARNING: Subroutine does not return */
  native_sub_432810();
}



/* BE2_Ins_SlideBack$$.ctor @ 0x60d9c8
 * void BE2_Ins_SlideBack___ctor (BE2_Ins_SlideBack_o* __this, const MethodInfo* method); */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* BE2_Ins_SlideBack$$.ctor
   void BE2_Ins_SlideBack___ctor (BE2_Ins_SlideBack_o* __this, const MethodInfo* method); */

undefined1  [16] native_BE2_Ins_SlideBack___ctor_60d9c8(ulong param_1)

{
  undefined1 auVar1 [16];
  
  *(undefined1 *)(param_1 + 0x88) = 1;
  *(undefined4 *)(param_1 + 0x60) = 100;
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


