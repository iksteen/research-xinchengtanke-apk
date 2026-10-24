/* ARM64 IL2CPP native pseudocode from Ghidra.
 * Recovered implementation, not original C# source.
 * Function boundaries follow the IL2CPP method address table. */


/* BE2_Cst_LookAtAndMove$$get_ExecuteInUpdate @ 0x575ae0
 * bool BE2_Cst_LookAtAndMove__get_ExecuteInUpdate (BE2_Cst_LookAtAndMove_o* __this, const MethodInfo* method); */

/* BE2_Cst_LookAtAndMove$$get_ExecuteInUpdate
   bool BE2_Cst_LookAtAndMove__get_ExecuteInUpdate (BE2_Cst_LookAtAndMove_o* __this, const
   MethodInfo* method); */

undefined8 native_BE2_Cst_LookAtAndMove__get_ExecuteInUpdate_575ae0(void)

{
  return 1;
}



/* BE2_Cst_LookAtAndMove$$OnStackActive @ 0x575ae8
 * void BE2_Cst_LookAtAndMove__OnStackActive (BE2_Cst_LookAtAndMove_o* __this, const MethodInfo* method); */

/* BE2_Cst_LookAtAndMove$$OnStackActive
   void BE2_Cst_LookAtAndMove__OnStackActive (BE2_Cst_LookAtAndMove_o* __this, const MethodInfo*
   method); */

void native_BE2_Cst_LookAtAndMove__OnStackActive_575ae8(long param_1)

{
  *(undefined1 *)(param_1 + 0x71) = 1;
  *(undefined8 *)(param_1 + 0x74) = 0;
  return;
}



/* BE2_Cst_LookAtAndMove$$Function @ 0x575af8
 * void BE2_Cst_LookAtAndMove__Function (BE2_Cst_LookAtAndMove_o* __this, const MethodInfo* method); */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* BE2_Cst_LookAtAndMove$$Function
   void BE2_Cst_LookAtAndMove__Function (BE2_Cst_LookAtAndMove_o* __this, const MethodInfo* method);
    */

void native_BE2_Cst_LookAtAndMove__Function_575af8
               (undefined1 param_1 [16],undefined4 param_2,float param_3,undefined4 param_4,
               long param_5)

{
  int iVar1;
  undefined8 *puVar2;
  undefined8 uVar3;
  long lVar4;
  long lVar5;
  ulong uVar6;
  int *piVar7;
  long *plVar8;
  undefined4 uVar9;
  float fVar10;
  float fVar11;
  float fVar12;
  float fVar13;
  float fVar14;
  float fVar15;
  float fVar16;
  
  if ((bRam000000000133ea9d & 1) == 0) {
    native_sub_43273c(&MG_BlocksEngine2_Block_I_BE2_BlockSectionHeaderInput_TypeInfo_12d4e00);
    native_sub_43273c(&MG_BlocksEngine2_Environment_I_BE2_TargetObject_TypeInfo_12d4e50);
    bRam000000000133ea9d = 1;
  }
  if (*(char *)(param_5 + 0x71) != '\0') {
    plVar8 = *(long **)(param_5 + 0x50);
    if (plVar8 == (long *)0x0) goto LAB_0057616c;
    lVar4 = *plVar8;
    if ((ulong)*(ushort *)(lVar4 + 0x12a) != 0) {
      uVar6 = 0;
      piVar7 = (int *)(*(long *)(lVar4 + 0xb0) + 8);
      do {
        if (*(long *)(piVar7 + -2) ==
            _MG_BlocksEngine2_Environment_I_BE2_TargetObject_TypeInfo_12d4e50) {
          puVar2 = (undefined8 *)(lVar4 + (long)*piVar7 * 0x10 + 0x138);
          goto LAB_00575bb8;
        }
        uVar6 = uVar6 + 1;
        piVar7 = piVar7 + 4;
      } while (uVar6 < *(ushort *)(lVar4 + 0x12a));
    }
    puVar2 = (undefined8 *)
             native_sub_3c9b34(plVar8,
                               _MG_BlocksEngine2_Environment_I_BE2_TargetObject_TypeInfo_12d4e50,0);
LAB_00575bb8:
    lVar4 = (*(code *)*puVar2)(plVar8,puVar2[1]);
    if (lVar4 == 0) goto LAB_0057616c;
    uVar9 = native_UnityEngine_Transform__get_position_77169c(lVar4,0);
    plVar8 = *(long **)(param_5 + 0x50);
    *(undefined4 *)(param_5 + 0x7c) = uVar9;
    *(undefined4 *)(param_5 + 0x80) = param_2;
    *(float *)(param_5 + 0x84) = param_3;
    if (plVar8 == (long *)0x0) goto LAB_0057616c;
    lVar4 = *plVar8;
    if ((ulong)*(ushort *)(lVar4 + 0x12a) != 0) {
      uVar6 = 0;
      piVar7 = (int *)(*(long *)(lVar4 + 0xb0) + 8);
      do {
        if (*(long *)(piVar7 + -2) ==
            _MG_BlocksEngine2_Environment_I_BE2_TargetObject_TypeInfo_12d4e50) {
          puVar2 = (undefined8 *)(lVar4 + (long)*piVar7 * 0x10 + 0x138);
          goto LAB_00575c34;
        }
        uVar6 = uVar6 + 1;
        piVar7 = piVar7 + 4;
      } while (uVar6 < *(ushort *)(lVar4 + 0x12a));
    }
    puVar2 = (undefined8 *)
             native_sub_3c9b34(plVar8,
                               _MG_BlocksEngine2_Environment_I_BE2_TargetObject_TypeInfo_12d4e50,0);
LAB_00575c34:
    lVar4 = (*(code *)*puVar2)(plVar8,puVar2[1]);
    if (lVar4 == 0) goto LAB_0057616c;
    uVar9 = native_UnityEngine_Transform__get_rotation_771a30(lVar4,0);
    *(undefined4 *)(param_5 + 0x88) = uVar9;
    *(undefined4 *)(param_5 + 0x8c) = param_2;
    *(float *)(param_5 + 0x90) = param_3;
    *(undefined4 *)(param_5 + 0x94) = param_4;
    lVar4 = native_MG_BlocksEngine2_Block_Instruction_BE2_InstructionBase__get_Section0Inputs_603b78
                      (param_5,0);
    if (lVar4 == 0) goto LAB_0057616c;
    if (*(int *)(lVar4 + 0x18) == 0) goto LAB_00576170;
    plVar8 = *(long **)(lVar4 + 0x20);
    if (plVar8 == (long *)0x0) goto LAB_0057616c;
    lVar4 = *plVar8;
    if ((ulong)*(ushort *)(lVar4 + 0x12a) != 0) {
      uVar6 = 0;
      piVar7 = (int *)(*(long *)(lVar4 + 0xb0) + 8);
      do {
        if (*(long *)(piVar7 + -2) ==
            _MG_BlocksEngine2_Block_I_BE2_BlockSectionHeaderInput_TypeInfo_12d4e00) {
          puVar2 = (undefined8 *)(lVar4 + (long)(*piVar7 + 3) * 0x10 + 0x138);
          goto LAB_00575cd4;
        }
        uVar6 = uVar6 + 1;
        piVar7 = piVar7 + 4;
      } while (uVar6 < *(ushort *)(lVar4 + 0x12a));
    }
    puVar2 = (undefined8 *)
             native_sub_3c9b34(plVar8,
                               _MG_BlocksEngine2_Block_I_BE2_BlockSectionHeaderInput_TypeInfo_12d4e00
                               ,3);
LAB_00575cd4:
    uVar3 = (*(code *)*puVar2)(plVar8,puVar2[1]);
    uVar9 = native_BE2_Cst_LookAtAndMove__GetDirection_57617c(uVar3,uVar3);
    *(undefined4 *)(param_5 + 0x98) = uVar9;
    *(undefined4 *)(param_5 + 0x9c) = param_2;
    *(float *)(param_5 + 0xa0) = param_3;
    *(undefined1 *)(param_5 + 0x71) = 0;
  }
  iVar1 = *(int *)(param_5 + 0x78);
  lVar4 = native_MG_BlocksEngine2_Block_Instruction_BE2_InstructionBase__get_Section0Inputs_603b78
                    (param_5,0);
  if (lVar4 != 0) {
    if (*(uint *)(lVar4 + 0x18) < 2) goto LAB_00576170;
    plVar8 = *(long **)(lVar4 + 0x28);
    if (plVar8 != (long *)0x0) {
      lVar4 = *plVar8;
      if ((ulong)*(ushort *)(lVar4 + 0x12a) != 0) {
        uVar6 = 0;
        piVar7 = (int *)(*(long *)(lVar4 + 0xb0) + 8);
        do {
          if (*(long *)(piVar7 + -2) ==
              _MG_BlocksEngine2_Block_I_BE2_BlockSectionHeaderInput_TypeInfo_12d4e00) {
            puVar2 = (undefined8 *)(lVar4 + (long)(*piVar7 + 2) * 0x10 + 0x138);
            goto LAB_00575d7c;
          }
          uVar6 = uVar6 + 1;
          piVar7 = piVar7 + 4;
        } while (uVar6 < *(ushort *)(lVar4 + 0x12a));
      }
      puVar2 = (undefined8 *)
               native_sub_3c9b34(plVar8,
                                 _MG_BlocksEngine2_Block_I_BE2_BlockSectionHeaderInput_TypeInfo_12d4e00
                                 ,2);
LAB_00575d7c:
      fVar10 = (float)(*(code *)*puVar2)(plVar8,puVar2[1]);
      if (ABS(fVar10) <= (float)iVar1) {
        native_MG_BlocksEngine2_Block_Instruction_BE2_InstructionBase__ExecuteNextInstruction_603c34
                  (param_5,0);
        *(undefined8 *)(param_5 + 0x74) = 0;
        *(undefined1 *)(param_5 + 0x71) = 1;
      }
      else {
        fVar10 = *(float *)(param_5 + 0x74);
        if (fVar10 <= 1.0) {
          fVar11 = (float)native_UnityEngine_Time__get_deltaTime_77082c(0);
          fVar15 = 0.2;
          plVar8 = *(long **)(param_5 + 0x50);
          *(float *)(param_5 + 0x74) = fVar10 + fVar11 / 0.2;
          if (plVar8 != (long *)0x0) {
            lVar4 = *plVar8;
            if ((ulong)*(ushort *)(lVar4 + 0x12a) != 0) {
              uVar6 = 0;
              piVar7 = (int *)(*(long *)(lVar4 + 0xb0) + 8);
              do {
                if (*(long *)(piVar7 + -2) ==
                    _MG_BlocksEngine2_Environment_I_BE2_TargetObject_TypeInfo_12d4e50) {
                  puVar2 = (undefined8 *)(lVar4 + (long)*piVar7 * 0x10 + 0x138);
                  goto LAB_00575e7c;
                }
                uVar6 = uVar6 + 1;
                piVar7 = piVar7 + 4;
              } while (uVar6 < *(ushort *)(lVar4 + 0x12a));
            }
            fVar15 = 0.2;
            puVar2 = (undefined8 *)
                     native_sub_3c9b34(plVar8,
                                       _MG_BlocksEngine2_Environment_I_BE2_TargetObject_TypeInfo_12d4e50
                                       ,0);
LAB_00575e7c:
            lVar4 = (*(code *)*puVar2)(plVar8,puVar2[1]);
            plVar8 = *(long **)(param_5 + 0x50);
            if (plVar8 != (long *)0x0) {
              lVar5 = *plVar8;
              uVar3 = *(undefined8 *)(param_5 + 0x7c);
              fVar10 = *(float *)(param_5 + 0x84);
              if ((ulong)*(ushort *)(lVar5 + 0x12a) != 0) {
                uVar6 = 0;
                piVar7 = (int *)(*(long *)(lVar5 + 0xb0) + 8);
                do {
                  if (*(long *)(piVar7 + -2) ==
                      _MG_BlocksEngine2_Environment_I_BE2_TargetObject_TypeInfo_12d4e50) {
                    puVar2 = (undefined8 *)(lVar5 + (long)*piVar7 * 0x10 + 0x138);
                    goto LAB_00575ef0;
                  }
                  uVar6 = uVar6 + 1;
                  piVar7 = piVar7 + 4;
                } while (uVar6 < *(ushort *)(lVar5 + 0x12a));
              }
              puVar2 = (undefined8 *)
                       native_sub_3c9b34(plVar8,
                                         _MG_BlocksEngine2_Environment_I_BE2_TargetObject_TypeInfo_12d4e50
                                         ,0);
LAB_00575ef0:
              lVar5 = (*(code *)*puVar2)(plVar8,puVar2[1]);
              if (lVar5 != 0) {
                fVar11 = (float)native_UnityEngine_Transform__get_forward_771a8c(lVar5,0);
                lVar5 = native_MG_BlocksEngine2_Block_Instruction_BE2_InstructionBase__get_Section0Inputs_603b78
                                  (param_5,0);
                if (lVar5 != 0) {
                  if (*(uint *)(lVar5 + 0x18) < 2) {
LAB_00576170:
                    uVar3 = native_sub_43283c();
                    /* WARNING: Subroutine does not return */
                    native_sub_4327dc(uVar3,0);
                  }
                  plVar8 = *(long **)(lVar5 + 0x28);
                  if (plVar8 != (long *)0x0) {
                    lVar5 = *plVar8;
                    if ((ulong)*(ushort *)(lVar5 + 0x12a) != 0) {
                      uVar6 = 0;
                      piVar7 = (int *)(*(long *)(lVar5 + 0xb0) + 8);
                      do {
                        if (*(long *)(piVar7 + -2) ==
                            _MG_BlocksEngine2_Block_I_BE2_BlockSectionHeaderInput_TypeInfo_12d4e00)
                        {
                          puVar2 = (undefined8 *)(lVar5 + (long)(*piVar7 + 2) * 0x10 + 0x138);
                          goto LAB_00575f90;
                        }
                        uVar6 = uVar6 + 1;
                        piVar7 = piVar7 + 4;
                      } while (uVar6 < *(ushort *)(lVar5 + 0x12a));
                    }
                    puVar2 = (undefined8 *)
                             native_sub_3c9b34(plVar8,
                                               _MG_BlocksEngine2_Block_I_BE2_BlockSectionHeaderInput_TypeInfo_12d4e00
                                               ,2);
LAB_00575f90:
                    fVar12 = (float)(*(code *)*puVar2)(plVar8,puVar2[1]);
                    lVar5 = native_MG_BlocksEngine2_Block_Instruction_BE2_InstructionBase__get_Section0Inputs_603b78
                                      (param_5,0);
                    if (lVar5 != 0) {
                      if (*(uint *)(lVar5 + 0x18) < 2) goto LAB_00576170;
                      plVar8 = *(long **)(lVar5 + 0x28);
                      if (plVar8 != (long *)0x0) {
                        lVar5 = *plVar8;
                        if ((ulong)*(ushort *)(lVar5 + 0x12a) != 0) {
                          uVar6 = 0;
                          piVar7 = (int *)(*(long *)(lVar5 + 0xb0) + 8);
                          do {
                            if (*(long *)(piVar7 + -2) ==
                                _MG_BlocksEngine2_Block_I_BE2_BlockSectionHeaderInput_TypeInfo_12d4e00
                               ) {
                              puVar2 = (undefined8 *)(lVar5 + (long)(*piVar7 + 2) * 0x10 + 0x138);
                              goto LAB_0057601c;
                            }
                            uVar6 = uVar6 + 1;
                            piVar7 = piVar7 + 4;
                          } while (uVar6 < *(ushort *)(lVar5 + 0x12a));
                        }
                        puVar2 = (undefined8 *)
                                 native_sub_3c9b34(plVar8,
                                                  _MG_BlocksEngine2_Block_I_BE2_BlockSectionHeaderInput_TypeInfo_12d4e00
                                                  ,2);
LAB_0057601c:
                        fVar13 = (float)(*(code *)*puVar2)(plVar8,puVar2[1]);
                        fVar14 = (float)native_UnityEngine_Mathf__Clamp01_8d9d9c
                                                  (*(undefined4 *)(param_5 + 0x74),0);
                        if (lVar4 != 0) {
                          fVar12 = fVar12 / ABS(fVar13);
                          fVar16 = (float)uVar3;
                          fVar13 = (float)((ulong)uVar3 >> 0x20);
                          fVar13 = fVar13 + ((fVar13 + fVar15 * fVar12) - fVar13) * fVar14;
                          native_UnityEngine_Transform__set_position_77174c
                                    (CONCAT44(fVar13,fVar16 + ((fVar16 + fVar11 * fVar12) - fVar16)
                                                              * fVar14),fVar13,
                                     fVar10 + fVar14 * ((fVar10 + param_3 * fVar12) - fVar10),lVar4,
                                     0);
                          plVar8 = *(long **)(param_5 + 0x50);
                          if (plVar8 != (long *)0x0) {
                            lVar4 = *plVar8;
                            if ((ulong)*(ushort *)(lVar4 + 0x12a) != 0) {
                              uVar6 = 0;
                              piVar7 = (int *)(*(long *)(lVar4 + 0xb0) + 8);
                              do {
                                if (*(long *)(piVar7 + -2) ==
                                    _MG_BlocksEngine2_Environment_I_BE2_TargetObject_TypeInfo_12d4e50
                                   ) {
                                  puVar2 = (undefined8 *)(lVar4 + (long)*piVar7 * 0x10 + 0x138);
                                  goto LAB_005760e4;
                                }
                                uVar6 = uVar6 + 1;
                                piVar7 = piVar7 + 4;
                              } while (uVar6 < *(ushort *)(lVar4 + 0x12a));
                            }
                            puVar2 = (undefined8 *)
                                     native_sub_3c9b34(plVar8,
                                                  _MG_BlocksEngine2_Environment_I_BE2_TargetObject_TypeInfo_12d4e50
                                                  ,0);
LAB_005760e4:
                            lVar4 = (*(code *)*puVar2)(plVar8,puVar2[1]);
                            uVar9 = *(undefined4 *)(param_5 + 0x88);
                            native_UnityEngine_Quaternion__LookRotation_762858
                                      (*(undefined4 *)(param_5 + 0x98),
                                       *(undefined4 *)(param_5 + 0x9c),
                                       *(undefined4 *)(param_5 + 0xa0),0);
                            native_UnityEngine_Quaternion__Lerp_76247c(uVar9,0);
                            if (lVar4 != 0) {
                              if (pcRam000000000133fef8 == (code *)0x0) {
                                pcRam000000000133fef8 = (code *)native_sub_4326f0(&UNK_00e2ae31,0);
                              }
                              (*pcRam000000000133fef8)(lVar4,&stack0xffffffffffffffd0);
                              return;
                            }
                          }
                        }
                      }
                    }
                  }
                }
              }
            }
          }
          goto LAB_0057616c;
        }
        *(undefined1 *)(param_5 + 0x71) = 1;
        *(undefined4 *)(param_5 + 0x74) = 0;
        *(int *)(param_5 + 0x78) = *(int *)(param_5 + 0x78) + 1;
      }
      return;
    }
  }
LAB_0057616c:
                    /* WARNING: Subroutine does not return */
  native_sub_432810();
}



/* BE2_Cst_LookAtAndMove$$GetDirection @ 0x57617c
 * UnityEngine_Vector3_o BE2_Cst_LookAtAndMove__GetDirection (BE2_Cst_LookAtAndMove_o* __this, System_String_o* option, const MethodInfo* method); */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* BE2_Cst_LookAtAndMove$$GetDirection
   UnityEngine_Vector3_o BE2_Cst_LookAtAndMove__GetDirection (BE2_Cst_LookAtAndMove_o* __this,
   System_String_o* option, const MethodInfo* method); */

undefined8 native_BE2_Cst_LookAtAndMove__GetDirection_57617c(undefined8 param_1,long param_2)

{
  ulong uVar1;
  undefined8 uVar2;
  
  if ((bRam000000000133ea9e & 1) == 0) {
    native_sub_43273c(&StringLiteral_Right_12f0b30);
    native_sub_43273c(&StringLiteral_Down_12ed860);
    native_sub_43273c(&StringLiteral_Up_12f2cf0);
    native_sub_43273c(&StringLiteral_Left_12ef550);
    bRam000000000133ea9e = 1;
  }
  if (param_2 != 0) {
    uVar1 = native_System_String__op_Equality_afc18c(param_2,_StringLiteral_Up_12f2cf0,0);
    if ((uVar1 & 1) != 0) {
      uVar2 = 0;
      if ((bRam000000000133ffaf & 1) == 0) {
        uVar2 = native_sub_43273c(&UnityEngine_Vector3_TypeInfo_12d66f8);
        bRam000000000133ffaf = 1;
      }
      return uVar2;
    }
    uVar1 = native_System_String__op_Equality_afc18c(param_2,_StringLiteral_Down_12ed860,0);
    if ((uVar1 & 1) != 0) {
      uVar2 = 0;
      if ((bRam000000000133ffb0 & 1) == 0) {
        uVar2 = native_sub_43273c(&UnityEngine_Vector3_TypeInfo_12d66f8);
        bRam000000000133ffb0 = 1;
      }
      return uVar2;
    }
    uVar1 = native_System_String__op_Equality_afc18c(param_2,_StringLiteral_Right_12f0b30,0);
    if ((uVar1 & 1) != 0) {
      uVar2 = 0;
      if ((bRam000000000133ffb4 & 1) == 0) {
        uVar2 = native_sub_43273c(&UnityEngine_Vector3_TypeInfo_12d66f8);
        bRam000000000133ffb4 = 1;
      }
      return uVar2;
    }
    uVar1 = native_System_String__op_Equality_afc18c(param_2,_StringLiteral_Left_12ef550,0);
    if ((uVar1 & 1) != 0) {
      uVar2 = 0;
      if ((bRam000000000133ffb3 & 1) == 0) {
        uVar2 = native_sub_43273c(&UnityEngine_Vector3_TypeInfo_12d66f8);
        bRam000000000133ffb3 = 1;
      }
      return uVar2;
    }
  }
  uVar2 = 0;
  if ((bRam000000000133ffad & 1) == 0) {
    uVar2 = native_sub_43273c(&UnityEngine_Vector3_TypeInfo_12d66f8);
    bRam000000000133ffad = 1;
  }
  return uVar2;
}



/* BE2_Cst_LookAtAndMove$$.ctor @ 0x576294
 * void BE2_Cst_LookAtAndMove___ctor (BE2_Cst_LookAtAndMove_o* __this, const MethodInfo* method); */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* BE2_Cst_LookAtAndMove$$.ctor
   void BE2_Cst_LookAtAndMove___ctor (BE2_Cst_LookAtAndMove_o* __this, const MethodInfo* method); */

undefined1  [16] native_BE2_Cst_LookAtAndMove___ctor_576294(ulong param_1)

{
  undefined1 auVar1 [16];
  
  *(undefined1 *)(param_1 + 0x71) = 1;
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


