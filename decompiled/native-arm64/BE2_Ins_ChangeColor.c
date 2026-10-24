/* ARM64 IL2CPP native pseudocode from Ghidra.
 * Recovered implementation, not original C# source.
 * Function boundaries follow the IL2CPP method address table. */


/* BE2_Ins_ChangeColor$$Function @ 0x605444
 * void BE2_Ins_ChangeColor__Function (BE2_Ins_ChangeColor_o* __this, const MethodInfo* method); */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* BE2_Ins_ChangeColor$$Function
   void BE2_Ins_ChangeColor__Function (BE2_Ins_ChangeColor_o* __this, const MethodInfo* method); */

void native_BE2_Ins_ChangeColor__Function_605444
               (undefined1 param_1 [16],undefined4 param_2,undefined4 param_3,undefined4 param_4,
               long param_5)

{
  uint uVar1;
  long lVar2;
  undefined8 uVar3;
  ulong uVar4;
  int *piVar5;
  undefined8 *puVar6;
  long *plVar7;
  undefined4 uVar8;
  undefined8 uVar9;
  undefined8 uVar10;
  undefined8 uStack_50;
  undefined8 uStack_48;
  
  if ((bRam000000000133ee01 & 1) == 0) {
    native_sub_43273c(&Method_UnityEngine_Component_GetComponent_Renderer____12e2ad8);
    native_sub_43273c(&MG_BlocksEngine2_Block_I_BE2_BlockSectionHeaderInput_TypeInfo_12d4e00);
    native_sub_43273c(&MG_BlocksEngine2_Environment_I_BE2_TargetObject_TypeInfo_12d4e50);
    native_sub_43273c(&StringLiteral__0000FF_12eb028);
    native_sub_43273c(&StringLiteral_Violet_12f2f38);
    native_sub_43273c(&StringLiteral_Random_12f0870);
    native_sub_43273c(&StringLiteral__2E2B5F_12eb040);
    native_sub_43273c(&StringLiteral_Indigo_12ee840);
    native_sub_43273c(&StringLiteral__Color_12f3558);
    native_sub_43273c(&StringLiteral_Yellow_12f31e0);
    native_sub_43273c(&StringLiteral_Red_12f0928);
    native_sub_43273c(&StringLiteral__FF7F00_12eb058);
    native_sub_43273c(&StringLiteral__FFFF00_12eb060);
    native_sub_43273c(&StringLiteral__8B00FF_12eb048);
    native_sub_43273c(&StringLiteral_Orange_12f03d0);
    native_sub_43273c(&StringLiteral_Blue_12ec800);
    native_sub_43273c(&StringLiteral_Green_12ee238);
    native_sub_43273c(&StringLiteral__00FF00_12eb030);
    native_sub_43273c(&StringLiteral__FF0000_12eb050);
    bRam000000000133ee01 = 1;
  }
  uStack_50 = 0;
  uStack_48 = 0;
  lVar2 = native_MG_BlocksEngine2_Block_Instruction_BE2_InstructionBase__get_Section0Inputs_603b78
                    (param_5);
  if (lVar2 == 0) goto LAB_00605960;
  if (*(int *)(lVar2 + 0x18) == 0) goto LAB_00605964;
  puVar6 = (undefined8 *)(param_5 + 0x78);
  *puVar6 = *(undefined8 *)(lVar2 + 0x20);
  native_sub_4326e0(puVar6);
  plVar7 = (long *)*puVar6;
  if (plVar7 == (long *)0x0) goto LAB_00605960;
  lVar2 = *plVar7;
  if ((ulong)*(ushort *)(lVar2 + 0x12a) != 0) {
    uVar4 = 0;
    piVar5 = (int *)(*(long *)(lVar2 + 0xb0) + 8);
    do {
      if (*(long *)(piVar5 + -2) ==
          _MG_BlocksEngine2_Block_I_BE2_BlockSectionHeaderInput_TypeInfo_12d4e00) {
        puVar6 = (undefined8 *)(lVar2 + (long)(*piVar5 + 3) * 0x10 + 0x138);
        goto LAB_006055ec;
      }
      uVar4 = uVar4 + 1;
      piVar5 = piVar5 + 4;
    } while (uVar4 < *(ushort *)(lVar2 + 0x12a));
  }
  puVar6 = (undefined8 *)
           native_sub_3c9b34(plVar7,
                             _MG_BlocksEngine2_Block_I_BE2_BlockSectionHeaderInput_TypeInfo_12d4e00,
                             3);
LAB_006055ec:
  lVar2 = (*(code *)*puVar6)(plVar7,puVar6[1]);
  plVar7 = (long *)(param_5 + 0x80);
  *plVar7 = lVar2;
  native_sub_4326e0(plVar7,lVar2);
  uVar8 = native_UnityEngine_Color__get_white_8d9e10(0);
  uStack_50 = CONCAT44(param_2,uVar8);
  uStack_48 = CONCAT44(param_4,param_3);
  lVar2 = *plVar7;
  if (lVar2 != 0) {
    uVar1 = native__PrivateImplementationDetails___ComputeStringHash_560404(lVar2,0);
    if (uVar1 < 0xa37f187d) {
      if (uVar1 < 0x727b390c) {
        if (uVar1 == 0x4115d182) {
          uVar4 = native_System_String__op_Equality_afc18c(lVar2,_StringLiteral_Random_12f0870,0);
          if ((uVar4 & 1) != 0) {
            uVar3 = native_UnityEngine_Random__Range_76305c(0,0x3f800000,0);
            uVar9 = native_UnityEngine_Random__Range_76305c(0,0x3f800000,0);
            uVar10 = native_UnityEngine_Random__Range_76305c(0,0x3f800000,0);
            native_UnityEngine_Color___ctor_8d980c(uVar3,uVar9,uVar10,0x437f0000,&uStack_50,0);
          }
        }
        else if ((uVar1 == 0x727b390b) &&
                (uVar4 = native_System_String__op_Equality_afc18c
                                   (lVar2,_StringLiteral_Orange_12f03d0,0), (uVar4 & 1) != 0)) {
          puVar6 = (undefined8 *)&StringLiteral__FF7F00_12eb058;
          goto LAB_00605870;
        }
      }
      else if (uVar1 == 0x938c5e4b) {
        uVar4 = native_System_String__op_Equality_afc18c(lVar2,_StringLiteral_Indigo_12ee840,0);
        if ((uVar4 & 1) != 0) {
          puVar6 = (undefined8 *)&StringLiteral__2E2B5F_12eb040;
          goto LAB_00605870;
        }
      }
      else if ((uVar1 == 0xa37f187c) &&
              (uVar4 = native_System_String__op_Equality_afc18c(lVar2,_StringLiteral_Red_12f0928,0),
              (uVar4 & 1) != 0)) {
        puVar6 = (undefined8 *)&StringLiteral__FF0000_12eb050;
LAB_00605870:
        native_UnityEngine_ColorUtility__TryParseHtmlString_8da574(*puVar6,&uStack_50,0);
      }
    }
    else if (uVar1 < 0xd9cdec6a) {
      if (uVar1 == 0xa953c75c) {
        uVar4 = native_System_String__op_Equality_afc18c(lVar2,_StringLiteral_Green_12ee238,0);
        if ((uVar4 & 1) != 0) {
          puVar6 = (undefined8 *)&StringLiteral__00FF00_12eb030;
          goto LAB_00605870;
        }
      }
      else if ((uVar1 == 0xd9cdec69) &&
              (uVar4 = native_System_String__op_Equality_afc18c
                                 (lVar2,_StringLiteral_Yellow_12f31e0,0), (uVar4 & 1) != 0)) {
        puVar6 = (undefined8 *)&StringLiteral__FFFF00_12eb060;
        goto LAB_00605870;
      }
    }
    else if (uVar1 == 0xe9dd1fed) {
      uVar4 = native_System_String__op_Equality_afc18c(lVar2,_StringLiteral_Blue_12ec800,0);
      if ((uVar4 & 1) != 0) {
        puVar6 = (undefined8 *)&StringLiteral__0000FF_12eb028;
        goto LAB_00605870;
      }
    }
    else if ((uVar1 == 0xf03bdf12) &&
            (uVar4 = native_System_String__op_Equality_afc18c(lVar2,_StringLiteral_Violet_12f2f38,0)
            , (uVar4 & 1) != 0)) {
      puVar6 = (undefined8 *)&StringLiteral__8B00FF_12eb048;
      goto LAB_00605870;
    }
  }
  plVar7 = *(long **)(param_5 + 0x50);
  if (plVar7 != (long *)0x0) {
    lVar2 = *plVar7;
    if ((ulong)*(ushort *)(lVar2 + 0x12a) != 0) {
      uVar4 = 0;
      piVar5 = (int *)(*(long *)(lVar2 + 0xb0) + 8);
      do {
        if (*(long *)(piVar5 + -2) ==
            _MG_BlocksEngine2_Environment_I_BE2_TargetObject_TypeInfo_12d4e50) {
          puVar6 = (undefined8 *)(lVar2 + (long)*piVar5 * 0x10 + 0x138);
          goto LAB_006058e4;
        }
        uVar4 = uVar4 + 1;
        piVar5 = piVar5 + 4;
      } while (uVar4 < *(ushort *)(lVar2 + 0x12a));
    }
    puVar6 = (undefined8 *)
             native_sub_3c9b34(plVar7,
                               _MG_BlocksEngine2_Environment_I_BE2_TargetObject_TypeInfo_12d4e50,0);
LAB_006058e4:
    lVar2 = (*(code *)*puVar6)(plVar7,puVar6[1]);
    if (((lVar2 != 0) &&
        (lVar2 = native_UnityEngine_Component__GetComponent_ActiveAnimation__49daec
                           (lVar2,_Method_UnityEngine_Component_GetComponent_Renderer____12e2ad8),
        lVar2 != 0)) &&
       (lVar2 = native_UnityEngine_Renderer__get_materials_768edc(lVar2,0), lVar2 != 0)) {
      if (*(int *)(lVar2 + 0x18) == 0) {
LAB_00605964:
        uVar3 = native_sub_43283c();
                    /* WARNING: Subroutine does not return */
        native_sub_4327dc(uVar3,0);
      }
      if (*(long *)(lVar2 + 0x20) != 0) {
        native_UnityEngine_Material__SetColor_8e32d4
                  (uStack_50 & 0xffffffff,uStack_50._4_4_,uStack_48 & 0xffffffff,uStack_48._4_4_,
                   *(long *)(lVar2 + 0x20),_StringLiteral__Color_12f3558,0);
        native_MG_BlocksEngine2_Block_Instruction_BE2_InstructionBase__ExecuteNextInstruction_603c34
                  (param_5);
        return;
      }
    }
  }
LAB_00605960:
                    /* WARNING: Subroutine does not return */
  native_sub_432810();
}



/* BE2_Ins_ChangeColor$$.ctor @ 0x605970
 * void BE2_Ins_ChangeColor___ctor (BE2_Ins_ChangeColor_o* __this, const MethodInfo* method); */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* BE2_Ins_ChangeColor$$.ctor
   void BE2_Ins_ChangeColor___ctor (BE2_Ins_ChangeColor_o* __this, const MethodInfo* method); */

undefined1  [16] native_BE2_Ins_ChangeColor___ctor_605970(ulong param_1)

{
  undefined1 auVar1 [16];
  
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


