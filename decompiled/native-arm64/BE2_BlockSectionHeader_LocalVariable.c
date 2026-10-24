/* ARM64 IL2CPP native pseudocode from Ghidra.
 * Recovered implementation, not original C# source.
 * Function boundaries follow the IL2CPP method address table. */


/* MG_BlocksEngine2.Block.BE2_BlockSectionHeader_LocalVariable$$get_Transform @ 0x567d28
 * UnityEngine_Transform_o* MG_BlocksEngine2_Block_BE2_BlockSectionHeader_LocalVariable__get_Transform (MG_BlocksEngine2_Block_BE2_BlockSectionHeader_LocalVariable_o* __this, const MethodInfo* method); */

/* MG_BlocksEngine2.Block.BE2_BlockSectionHeader_LocalVariable$$get_Transform
   UnityEngine_Transform_o*
   MG_BlocksEngine2_Block_BE2_BlockSectionHeader_LocalVariable__get_Transform
   (MG_BlocksEngine2_Block_BE2_BlockSectionHeader_LocalVariable_o* __this, const MethodInfo*
   method); */

void native_MG_BlocksEngine2_Block_BE2_BlockSectionHeader_LocalVariable__get_Transform_567d28
               (undefined8 param_1)

{
  if (pcRam0000000001340ab8 == (code *)0x0) {
    pcRam0000000001340ab8 = (code *)native_sub_4326f0(&UNK_00e2d0e1);
  }
                    /* WARNING: Could not recover jumptable at 0x008da668. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*pcRam0000000001340ab8)(param_1);
  return;
}



/* MG_BlocksEngine2.Block.BE2_BlockSectionHeader_LocalVariable$$get_Size @ 0x567d30
 * UnityEngine_Vector2_o MG_BlocksEngine2_Block_BE2_BlockSectionHeader_LocalVariable__get_Size (MG_BlocksEngine2_Block_BE2_BlockSectionHeader_LocalVariable_o* __this, const MethodInfo* method); */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* MG_BlocksEngine2.Block.BE2_BlockSectionHeader_LocalVariable$$get_Size
   UnityEngine_Vector2_o MG_BlocksEngine2_Block_BE2_BlockSectionHeader_LocalVariable__get_Size
   (MG_BlocksEngine2_Block_BE2_BlockSectionHeader_LocalVariable_o* __this, const MethodInfo*
   method); */

undefined4
native_MG_BlocksEngine2_Block_BE2_BlockSectionHeader_LocalVariable__get_Size_567d30(long param_1)

{
  ulong uVar1;
  long lVar2;
  undefined8 uVar3;
  undefined8 uStack_28;
  
  if ((bRam000000000133ea58 & 1) == 0) {
    native_sub_43273c(&Method_UnityEngine_Component_GetComponent_RectTransform____12e2ad0);
    native_sub_43273c(&UnityEngine_Object_TypeInfo_12d54e0);
    bRam000000000133ea58 = 1;
  }
  uVar3 = *(undefined8 *)(param_1 + 0x20);
  if (((*(byte *)(_UnityEngine_Object_TypeInfo_12d54e0 + 0x133) >> 2 & 1) != 0) &&
     (*(int *)(_UnityEngine_Object_TypeInfo_12d54e0 + 0xe0) == 0)) {
    native_sub_4327ec();
  }
  uVar1 = native_UnityEngine_Object__op_Implicit_8e1b98(uVar3,0);
  if ((uVar1 & 1) == 0) {
    lVar2 = native_UnityEngine_Component__GetComponent_ActiveAnimation__49daec
                      (param_1,_Method_UnityEngine_Component_GetComponent_RectTransform____12e2ad0);
  }
  else {
    lVar2 = *(long *)(param_1 + 0x20);
  }
  if (lVar2 != 0) {
    uStack_28 = 0;
    if (pcRam000000000133f8e0 == (code *)0x0) {
      pcRam000000000133f8e0 = (code *)native_sub_4326f0(&UNK_00e284ba,0);
    }
    (*pcRam000000000133f8e0)(lVar2,&uStack_28);
    return (undefined4)uStack_28;
  }
                    /* WARNING: Subroutine does not return */
  native_sub_432810();
}



/* MG_BlocksEngine2.Block.BE2_BlockSectionHeader_LocalVariable$$get_Spot @ 0x567dd4
 * MG_BlocksEngine2_Block_I_BE2_Spot_o* MG_BlocksEngine2_Block_BE2_BlockSectionHeader_LocalVariable__get_Spot (MG_BlocksEngine2_Block_BE2_BlockSectionHeader_LocalVariable_o* __this, const MethodInfo* method); */

/* MG_BlocksEngine2.Block.BE2_BlockSectionHeader_LocalVariable$$get_Spot
   MG_BlocksEngine2_Block_I_BE2_Spot_o*
   MG_BlocksEngine2_Block_BE2_BlockSectionHeader_LocalVariable__get_Spot
   (MG_BlocksEngine2_Block_BE2_BlockSectionHeader_LocalVariable_o* __this, const MethodInfo*
   method); */

undefined8 native_MG_BlocksEngine2_Block_BE2_BlockSectionHeader_LocalVariable__get_Spot_567dd4(void)

{
  return 0;
}



/* MG_BlocksEngine2.Block.BE2_BlockSectionHeader_LocalVariable$$get_FloatValue @ 0x567ddc
 * float MG_BlocksEngine2_Block_BE2_BlockSectionHeader_LocalVariable__get_FloatValue (MG_BlocksEngine2_Block_BE2_BlockSectionHeader_LocalVariable_o* __this, const MethodInfo* method); */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* MG_BlocksEngine2.Block.BE2_BlockSectionHeader_LocalVariable$$get_FloatValue
   float MG_BlocksEngine2_Block_BE2_BlockSectionHeader_LocalVariable__get_FloatValue
   (MG_BlocksEngine2_Block_BE2_BlockSectionHeader_LocalVariable_o* __this, const MethodInfo*
   method); */

void native_MG_BlocksEngine2_Block_BE2_BlockSectionHeader_LocalVariable__get_FloatValue_567ddc
               (long param_1)

{
  undefined8 *puVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  long lVar4;
  ulong uVar5;
  int *piVar6;
  long *plVar7;
  
  if ((bRam000000000133ea5b & 1) == 0) {
    native_sub_43273c(&System_Globalization_CultureInfo_TypeInfo_12d4068);
    native_sub_43273c(&MG_BlocksEngine2_Block_Instruction_I_BE2_Instruction_TypeInfo_12d4e28);
    bRam000000000133ea5b = 1;
  }
  plVar7 = *(long **)(param_1 + 0x18);
  if (plVar7 == (long *)0x0) {
                    /* WARNING: Subroutine does not return */
    native_sub_432810();
  }
  lVar4 = *plVar7;
  if ((ulong)*(ushort *)(lVar4 + 0x12a) != 0) {
    uVar5 = 0;
    piVar6 = (int *)(*(long *)(lVar4 + 0xb0) + 8);
    do {
      if (*(long *)(piVar6 + -2) ==
          _MG_BlocksEngine2_Block_Instruction_I_BE2_Instruction_TypeInfo_12d4e28) {
        puVar1 = (undefined8 *)(lVar4 + (long)(*piVar6 + 2) * 0x10 + 0x138);
        goto LAB_00567e84;
      }
      uVar5 = uVar5 + 1;
      piVar6 = piVar6 + 4;
    } while (uVar5 < *(ushort *)(lVar4 + 0x12a));
  }
  puVar1 = (undefined8 *)
           native_sub_3c9b34(plVar7,
                             _MG_BlocksEngine2_Block_Instruction_I_BE2_Instruction_TypeInfo_12d4e28,
                             2);
LAB_00567e84:
  uVar2 = (*(code *)*puVar1)(plVar7,puVar1[1]);
  if (((*(byte *)(_System_Globalization_CultureInfo_TypeInfo_12d4068 + 0x133) >> 2 & 1) != 0) &&
     (*(int *)(_System_Globalization_CultureInfo_TypeInfo_12d4068 + 0xe0) == 0)) {
    native_sub_4327ec();
  }
  uVar3 = native_System_Globalization_CultureInfo__get_InvariantCulture_b2d3e8(0);
  native_System_Single__Parse_af8a18(uVar2,uVar3,0);
  *(undefined1 *)(param_1 + 0x30) = 0;
  return;
}



/* MG_BlocksEngine2.Block.BE2_BlockSectionHeader_LocalVariable$$get_StringValue @ 0x567f68
 * System_String_o* MG_BlocksEngine2_Block_BE2_BlockSectionHeader_LocalVariable__get_StringValue (MG_BlocksEngine2_Block_BE2_BlockSectionHeader_LocalVariable_o* __this, const MethodInfo* method); */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* MG_BlocksEngine2.Block.BE2_BlockSectionHeader_LocalVariable$$get_StringValue
   System_String_o* MG_BlocksEngine2_Block_BE2_BlockSectionHeader_LocalVariable__get_StringValue
   (MG_BlocksEngine2_Block_BE2_BlockSectionHeader_LocalVariable_o* __this, const MethodInfo*
   method); */

void native_MG_BlocksEngine2_Block_BE2_BlockSectionHeader_LocalVariable__get_StringValue_567f68
               (long param_1)

{
  undefined8 *puVar1;
  long lVar2;
  ulong uVar3;
  int *piVar4;
  long *plVar5;
  
  if ((bRam000000000133ea5a & 1) == 0) {
    native_sub_43273c(&MG_BlocksEngine2_Block_Instruction_I_BE2_Instruction_TypeInfo_12d4e28);
    bRam000000000133ea5a = 1;
  }
  plVar5 = *(long **)(param_1 + 0x18);
  if (plVar5 == (long *)0x0) {
                    /* WARNING: Subroutine does not return */
    native_sub_432810();
  }
  lVar2 = *plVar5;
  if ((ulong)*(ushort *)(lVar2 + 0x12a) != 0) {
    uVar3 = 0;
    piVar4 = (int *)(*(long *)(lVar2 + 0xb0) + 8);
    do {
      if (*(long *)(piVar4 + -2) ==
          _MG_BlocksEngine2_Block_Instruction_I_BE2_Instruction_TypeInfo_12d4e28) {
        puVar1 = (undefined8 *)(lVar2 + (long)(*piVar4 + 2) * 0x10 + 0x138);
        goto LAB_00568004;
      }
      uVar3 = uVar3 + 1;
      piVar4 = piVar4 + 4;
    } while (uVar3 < *(ushort *)(lVar2 + 0x12a));
  }
  puVar1 = (undefined8 *)
           native_sub_3c9b34(plVar5,
                             _MG_BlocksEngine2_Block_Instruction_I_BE2_Instruction_TypeInfo_12d4e28,
                             2);
LAB_00568004:
                    /* WARNING: Could not recover jumptable at 0x00568014. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)*puVar1)(plVar5,puVar1[1]);
  return;
}



/* MG_BlocksEngine2.Block.BE2_BlockSectionHeader_LocalVariable$$get_InputValues @ 0x56801c
 * MG_BlocksEngine2_Block_BE2_InputValues_o* MG_BlocksEngine2_Block_BE2_BlockSectionHeader_LocalVariable__get_InputValues (MG_BlocksEngine2_Block_BE2_BlockSectionHeader_LocalVariable_o* __this, const MethodInfo* method); */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* MG_BlocksEngine2.Block.BE2_BlockSectionHeader_LocalVariable$$get_InputValues
   MG_BlocksEngine2_Block_BE2_InputValues_o*
   MG_BlocksEngine2_Block_BE2_BlockSectionHeader_LocalVariable__get_InputValues
   (MG_BlocksEngine2_Block_BE2_BlockSectionHeader_LocalVariable_o* __this, const MethodInfo*
   method); */

undefined8
native_MG_BlocksEngine2_Block_BE2_BlockSectionHeader_LocalVariable__get_InputValues_56801c
          (long param_1)

{
  undefined1 uVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  
  if ((bRam000000000133ea5c & 1) == 0) {
    native_sub_43273c(&MG_BlocksEngine2_Block_BE2_InputValues_TypeInfo_12d39f0);
    bRam000000000133ea5c = 1;
  }
  uVar2 = native_MG_BlocksEngine2_Block_BE2_BlockSectionHeader_LocalVariable__GetStringValue_567f6c
                    (param_1);
  uVar4 = native_MG_BlocksEngine2_Block_BE2_BlockSectionHeader_LocalVariable__GetFloatValue_567de0
                    (param_1);
  uVar1 = *(undefined1 *)(param_1 + 0x30);
  uVar3 = native_sub_432808(_MG_BlocksEngine2_Block_BE2_InputValues_TypeInfo_12d39f0);
  native_MG_BlocksEngine2_Block_BE2_InputValues___ctor_6033d4(uVar4,uVar3,uVar2,uVar1,0);
  return uVar3;
}



/* MG_BlocksEngine2.Block.BE2_BlockSectionHeader_LocalVariable$$Awake @ 0x5680b4
 * void MG_BlocksEngine2_Block_BE2_BlockSectionHeader_LocalVariable__Awake (MG_BlocksEngine2_Block_BE2_BlockSectionHeader_LocalVariable_o* __this, const MethodInfo* method); */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* MG_BlocksEngine2.Block.BE2_BlockSectionHeader_LocalVariable$$Awake
   void MG_BlocksEngine2_Block_BE2_BlockSectionHeader_LocalVariable__Awake
   (MG_BlocksEngine2_Block_BE2_BlockSectionHeader_LocalVariable_o* __this, const MethodInfo*
   method); */

void native_MG_BlocksEngine2_Block_BE2_BlockSectionHeader_LocalVariable__Awake_5680b4(long param_1)

{
  ulong *puVar1;
  char cVar2;
  bool bVar3;
  undefined8 uVar4;
  
  if ((bRam000000000133ea59 & 1) == 0) {
    native_sub_43273c(&Method_UnityEngine_Component_GetComponentInChildren_TMP_Text____12e2c98);
    native_sub_43273c(&Method_UnityEngine_Component_GetComponent_I_BE2_Instruction____12e2a50);
    native_sub_43273c(&Method_UnityEngine_Component_GetComponent_RectTransform____12e2ad0);
    bRam000000000133ea59 = 1;
  }
  uVar4 = native_UnityEngine_Component__GetComponent_ActiveAnimation__49daec
                    (param_1,_Method_UnityEngine_Component_GetComponent_RectTransform____12e2ad0);
  *(undefined8 *)(param_1 + 0x20) = uVar4;
  native_sub_4326e0(param_1 + 0x20);
  uVar4 = native_UnityEngine_Component__GetComponent_ActiveAnimation__49daec
                    (param_1,_Method_UnityEngine_Component_GetComponent_I_BE2_Instruction____12e2a50
                    );
  *(undefined8 *)(param_1 + 0x18) = uVar4;
  native_sub_4326e0(param_1 + 0x18);
  uVar4 = native_UnityEngine_Component__GetComponentInChildren_Animation__49db98
                    (param_1,
                     _Method_UnityEngine_Component_GetComponentInChildren_TMP_Text____12e2c98);
  *(undefined8 *)(param_1 + 0x28) = uVar4;
  if (iRam0000000001345318 != 0) {
    puVar1 = (ulong *)((param_1 + 0x28U >> 0x12 & 0x7fff) * 8 + 0x138ecd8);
    do {
      cVar2 = '\x01';
      bVar3 = (bool)ExclusiveMonitorPass(puVar1,0x10);
      if (bVar3) {
        *puVar1 = *puVar1 | 1L << (param_1 + 0x28U >> 0xc & 0x3f);
        cVar2 = ExclusiveMonitorsStatus();
      }
    } while (cVar2 != '\0');
  }
  return;
}



/* MG_BlocksEngine2.Block.BE2_BlockSectionHeader_LocalVariable$$GetStringValue @ 0x567f6c
 * System_String_o* MG_BlocksEngine2_Block_BE2_BlockSectionHeader_LocalVariable__GetStringValue (MG_BlocksEngine2_Block_BE2_BlockSectionHeader_LocalVariable_o* __this, const MethodInfo* method); */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* MG_BlocksEngine2.Block.BE2_BlockSectionHeader_LocalVariable$$GetStringValue
   System_String_o* MG_BlocksEngine2_Block_BE2_BlockSectionHeader_LocalVariable__GetStringValue
   (MG_BlocksEngine2_Block_BE2_BlockSectionHeader_LocalVariable_o* __this, const MethodInfo*
   method); */

void native_MG_BlocksEngine2_Block_BE2_BlockSectionHeader_LocalVariable__GetStringValue_567f6c
               (long param_1)

{
  undefined8 *puVar1;
  long lVar2;
  ulong uVar3;
  int *piVar4;
  long *plVar5;
  
  if ((bRam000000000133ea5a & 1) == 0) {
    native_sub_43273c(&MG_BlocksEngine2_Block_Instruction_I_BE2_Instruction_TypeInfo_12d4e28);
    bRam000000000133ea5a = 1;
  }
  plVar5 = *(long **)(param_1 + 0x18);
  if (plVar5 == (long *)0x0) {
                    /* WARNING: Subroutine does not return */
    native_sub_432810();
  }
  lVar2 = *plVar5;
  if ((ulong)*(ushort *)(lVar2 + 0x12a) != 0) {
    uVar3 = 0;
    piVar4 = (int *)(*(long *)(lVar2 + 0xb0) + 8);
    do {
      if (*(long *)(piVar4 + -2) ==
          _MG_BlocksEngine2_Block_Instruction_I_BE2_Instruction_TypeInfo_12d4e28) {
        puVar1 = (undefined8 *)(lVar2 + (long)(*piVar4 + 2) * 0x10 + 0x138);
        goto LAB_00568004;
      }
      uVar3 = uVar3 + 1;
      piVar4 = piVar4 + 4;
    } while (uVar3 < *(ushort *)(lVar2 + 0x12a));
  }
  puVar1 = (undefined8 *)
           native_sub_3c9b34(plVar5,
                             _MG_BlocksEngine2_Block_Instruction_I_BE2_Instruction_TypeInfo_12d4e28,
                             2);
LAB_00568004:
                    /* WARNING: Could not recover jumptable at 0x00568014. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)*puVar1)(plVar5,puVar1[1]);
  return;
}



/* MG_BlocksEngine2.Block.BE2_BlockSectionHeader_LocalVariable$$GetFloatValue @ 0x567de0
 * float MG_BlocksEngine2_Block_BE2_BlockSectionHeader_LocalVariable__GetFloatValue (MG_BlocksEngine2_Block_BE2_BlockSectionHeader_LocalVariable_o* __this, const MethodInfo* method); */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* MG_BlocksEngine2.Block.BE2_BlockSectionHeader_LocalVariable$$GetFloatValue
   float MG_BlocksEngine2_Block_BE2_BlockSectionHeader_LocalVariable__GetFloatValue
   (MG_BlocksEngine2_Block_BE2_BlockSectionHeader_LocalVariable_o* __this, const MethodInfo*
   method); */

void native_MG_BlocksEngine2_Block_BE2_BlockSectionHeader_LocalVariable__GetFloatValue_567de0
               (long param_1)

{
  undefined8 *puVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  long lVar4;
  ulong uVar5;
  int *piVar6;
  long *plVar7;
  
  if ((bRam000000000133ea5b & 1) == 0) {
    native_sub_43273c(&System_Globalization_CultureInfo_TypeInfo_12d4068);
    native_sub_43273c(&MG_BlocksEngine2_Block_Instruction_I_BE2_Instruction_TypeInfo_12d4e28);
    bRam000000000133ea5b = 1;
  }
  plVar7 = *(long **)(param_1 + 0x18);
  if (plVar7 == (long *)0x0) {
                    /* WARNING: Subroutine does not return */
    native_sub_432810();
  }
  lVar4 = *plVar7;
  if ((ulong)*(ushort *)(lVar4 + 0x12a) != 0) {
    uVar5 = 0;
    piVar6 = (int *)(*(long *)(lVar4 + 0xb0) + 8);
    do {
      if (*(long *)(piVar6 + -2) ==
          _MG_BlocksEngine2_Block_Instruction_I_BE2_Instruction_TypeInfo_12d4e28) {
        puVar1 = (undefined8 *)(lVar4 + (long)(*piVar6 + 2) * 0x10 + 0x138);
        goto LAB_00567e84;
      }
      uVar5 = uVar5 + 1;
      piVar6 = piVar6 + 4;
    } while (uVar5 < *(ushort *)(lVar4 + 0x12a));
  }
  puVar1 = (undefined8 *)
           native_sub_3c9b34(plVar7,
                             _MG_BlocksEngine2_Block_Instruction_I_BE2_Instruction_TypeInfo_12d4e28,
                             2);
LAB_00567e84:
  uVar2 = (*(code *)*puVar1)(plVar7,puVar1[1]);
  if (((*(byte *)(_System_Globalization_CultureInfo_TypeInfo_12d4068 + 0x133) >> 2 & 1) != 0) &&
     (*(int *)(_System_Globalization_CultureInfo_TypeInfo_12d4068 + 0xe0) == 0)) {
    native_sub_4327ec();
  }
  uVar3 = native_System_Globalization_CultureInfo__get_InvariantCulture_b2d3e8(0);
  native_System_Single__Parse_af8a18(uVar2,uVar3,0);
  *(undefined1 *)(param_1 + 0x30) = 0;
  return;
}



/* MG_BlocksEngine2.Block.BE2_BlockSectionHeader_LocalVariable$$GetInputValues @ 0x568020
 * MG_BlocksEngine2_Block_BE2_InputValues_o* MG_BlocksEngine2_Block_BE2_BlockSectionHeader_LocalVariable__GetInputValues (MG_BlocksEngine2_Block_BE2_BlockSectionHeader_LocalVariable_o* __this, const MethodInfo* method); */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* MG_BlocksEngine2.Block.BE2_BlockSectionHeader_LocalVariable$$GetInputValues
   MG_BlocksEngine2_Block_BE2_InputValues_o*
   MG_BlocksEngine2_Block_BE2_BlockSectionHeader_LocalVariable__GetInputValues
   (MG_BlocksEngine2_Block_BE2_BlockSectionHeader_LocalVariable_o* __this, const MethodInfo*
   method); */

undefined8
native_MG_BlocksEngine2_Block_BE2_BlockSectionHeader_LocalVariable__GetInputValues_568020
          (long param_1)

{
  undefined1 uVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  
  if ((bRam000000000133ea5c & 1) == 0) {
    native_sub_43273c(&MG_BlocksEngine2_Block_BE2_InputValues_TypeInfo_12d39f0);
    bRam000000000133ea5c = 1;
  }
  uVar2 = native_MG_BlocksEngine2_Block_BE2_BlockSectionHeader_LocalVariable__GetStringValue_567f6c
                    (param_1);
  uVar4 = native_MG_BlocksEngine2_Block_BE2_BlockSectionHeader_LocalVariable__GetFloatValue_567de0
                    (param_1);
  uVar1 = *(undefined1 *)(param_1 + 0x30);
  uVar3 = native_sub_432808(_MG_BlocksEngine2_Block_BE2_InputValues_TypeInfo_12d39f0);
  native_MG_BlocksEngine2_Block_BE2_InputValues___ctor_6033d4(uVar4,uVar3,uVar2,uVar1,0);
  return uVar3;
}



/* MG_BlocksEngine2.Block.BE2_BlockSectionHeader_LocalVariable$$UpdateValues @ 0x568170
 * void MG_BlocksEngine2_Block_BE2_BlockSectionHeader_LocalVariable__UpdateValues (MG_BlocksEngine2_Block_BE2_BlockSectionHeader_LocalVariable_o* __this, const MethodInfo* method); */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* MG_BlocksEngine2.Block.BE2_BlockSectionHeader_LocalVariable$$UpdateValues
   void MG_BlocksEngine2_Block_BE2_BlockSectionHeader_LocalVariable__UpdateValues
   (MG_BlocksEngine2_Block_BE2_BlockSectionHeader_LocalVariable_o* __this, const MethodInfo*
   method); */

undefined8
native_MG_BlocksEngine2_Block_BE2_BlockSectionHeader_LocalVariable__UpdateValues_568170
          (long param_1)

{
  undefined1 uVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  
  if ((bRam000000000133ea5c & 1) == 0) {
    native_sub_43273c(&MG_BlocksEngine2_Block_BE2_InputValues_TypeInfo_12d39f0);
    bRam000000000133ea5c = 1;
  }
  uVar2 = native_MG_BlocksEngine2_Block_BE2_BlockSectionHeader_LocalVariable__GetStringValue_567f6c
                    (param_1);
  uVar4 = native_MG_BlocksEngine2_Block_BE2_BlockSectionHeader_LocalVariable__GetFloatValue_567de0
                    (param_1);
  uVar1 = *(undefined1 *)(param_1 + 0x30);
  uVar3 = native_sub_432808(_MG_BlocksEngine2_Block_BE2_InputValues_TypeInfo_12d39f0);
  native_MG_BlocksEngine2_Block_BE2_InputValues___ctor_6033d4(uVar4,uVar3,uVar2,uVar1,0);
  return uVar3;
}



/* MG_BlocksEngine2.Block.BE2_BlockSectionHeader_LocalVariable$$.ctor @ 0x568174
 * void MG_BlocksEngine2_Block_BE2_BlockSectionHeader_LocalVariable___ctor (MG_BlocksEngine2_Block_BE2_BlockSectionHeader_LocalVariable_o* __this, const MethodInfo* method); */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* MG_BlocksEngine2.Block.BE2_BlockSectionHeader_LocalVariable$$.ctor
   void MG_BlocksEngine2_Block_BE2_BlockSectionHeader_LocalVariable___ctor
   (MG_BlocksEngine2_Block_BE2_BlockSectionHeader_LocalVariable_o* __this, const MethodInfo*
   method); */

undefined1  [16]
native_MG_BlocksEngine2_Block_BE2_BlockSectionHeader_LocalVariable___ctor_568174(ulong param_1)

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


