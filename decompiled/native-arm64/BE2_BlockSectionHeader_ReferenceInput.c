/* ARM64 IL2CPP native pseudocode from Ghidra.
 * Recovered implementation, not original C# source.
 * Function boundaries follow the IL2CPP method address table. */


/* MG_BlocksEngine2.Block.BE2_BlockSectionHeader_ReferenceInput$$get_Transform @ 0x5685d0
 * UnityEngine_Transform_o* MG_BlocksEngine2_Block_BE2_BlockSectionHeader_ReferenceInput__get_Transform (MG_BlocksEngine2_Block_BE2_BlockSectionHeader_ReferenceInput_o* __this, const MethodInfo* method); */

/* MG_BlocksEngine2.Block.BE2_BlockSectionHeader_ReferenceInput$$get_Transform
   UnityEngine_Transform_o*
   MG_BlocksEngine2_Block_BE2_BlockSectionHeader_ReferenceInput__get_Transform
   (MG_BlocksEngine2_Block_BE2_BlockSectionHeader_ReferenceInput_o* __this, const MethodInfo*
   method); */

void native_MG_BlocksEngine2_Block_BE2_BlockSectionHeader_ReferenceInput__get_Transform_5685d0
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



/* MG_BlocksEngine2.Block.BE2_BlockSectionHeader_ReferenceInput$$get_Spot @ 0x5685d8
 * MG_BlocksEngine2_Block_I_BE2_Spot_o* MG_BlocksEngine2_Block_BE2_BlockSectionHeader_ReferenceInput__get_Spot (MG_BlocksEngine2_Block_BE2_BlockSectionHeader_ReferenceInput_o* __this, const MethodInfo* method); */

/* MG_BlocksEngine2.Block.BE2_BlockSectionHeader_ReferenceInput$$get_Spot
   MG_BlocksEngine2_Block_I_BE2_Spot_o*
   MG_BlocksEngine2_Block_BE2_BlockSectionHeader_ReferenceInput__get_Spot
   (MG_BlocksEngine2_Block_BE2_BlockSectionHeader_ReferenceInput_o* __this, const MethodInfo*
   method); */

undefined8
native_MG_BlocksEngine2_Block_BE2_BlockSectionHeader_ReferenceInput__get_Spot_5685d8(long param_1)

{
  return *(undefined8 *)(param_1 + 0x20);
}



/* MG_BlocksEngine2.Block.BE2_BlockSectionHeader_ReferenceInput$$get_FloatValue @ 0x5685e0
 * float MG_BlocksEngine2_Block_BE2_BlockSectionHeader_ReferenceInput__get_FloatValue (MG_BlocksEngine2_Block_BE2_BlockSectionHeader_ReferenceInput_o* __this, const MethodInfo* method); */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* MG_BlocksEngine2.Block.BE2_BlockSectionHeader_ReferenceInput$$get_FloatValue
   float MG_BlocksEngine2_Block_BE2_BlockSectionHeader_ReferenceInput__get_FloatValue
   (MG_BlocksEngine2_Block_BE2_BlockSectionHeader_ReferenceInput_o* __this, const MethodInfo*
   method); */

void native_MG_BlocksEngine2_Block_BE2_BlockSectionHeader_ReferenceInput__get_FloatValue_5685e0
               (long param_1)

{
  undefined8 *puVar1;
  long lVar2;
  ulong uVar3;
  int *piVar4;
  long *plVar5;
  
  if ((bRam000000000133ea62 & 1) == 0) {
    native_sub_43273c(&MG_BlocksEngine2_Block_I_BE2_BlockSectionHeaderInput_TypeInfo_12d4e00);
    bRam000000000133ea62 = 1;
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
          _MG_BlocksEngine2_Block_I_BE2_BlockSectionHeaderInput_TypeInfo_12d4e00) {
        puVar1 = (undefined8 *)(lVar2 + (long)(*piVar4 + 2) * 0x10 + 0x138);
        goto LAB_00568678;
      }
      uVar3 = uVar3 + 1;
      piVar4 = piVar4 + 4;
    } while (uVar3 < *(ushort *)(lVar2 + 0x12a));
  }
  puVar1 = (undefined8 *)
           native_sub_3c9b34(plVar5,
                             _MG_BlocksEngine2_Block_I_BE2_BlockSectionHeaderInput_TypeInfo_12d4e00,
                             2);
LAB_00568678:
                    /* WARNING: Could not recover jumptable at 0x00568688. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)*puVar1)(plVar5,puVar1[1]);
  return;
}



/* MG_BlocksEngine2.Block.BE2_BlockSectionHeader_ReferenceInput$$get_StringValue @ 0x568690
 * System_String_o* MG_BlocksEngine2_Block_BE2_BlockSectionHeader_ReferenceInput__get_StringValue (MG_BlocksEngine2_Block_BE2_BlockSectionHeader_ReferenceInput_o* __this, const MethodInfo* method); */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* MG_BlocksEngine2.Block.BE2_BlockSectionHeader_ReferenceInput$$get_StringValue
   System_String_o* MG_BlocksEngine2_Block_BE2_BlockSectionHeader_ReferenceInput__get_StringValue
   (MG_BlocksEngine2_Block_BE2_BlockSectionHeader_ReferenceInput_o* __this, const MethodInfo*
   method); */

void native_MG_BlocksEngine2_Block_BE2_BlockSectionHeader_ReferenceInput__get_StringValue_568690
               (long param_1)

{
  undefined8 *puVar1;
  long lVar2;
  ulong uVar3;
  int *piVar4;
  long *plVar5;
  
  if ((bRam000000000133ea63 & 1) == 0) {
    native_sub_43273c(&MG_BlocksEngine2_Block_I_BE2_BlockSectionHeaderInput_TypeInfo_12d4e00);
    bRam000000000133ea63 = 1;
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
          _MG_BlocksEngine2_Block_I_BE2_BlockSectionHeaderInput_TypeInfo_12d4e00) {
        puVar1 = (undefined8 *)(lVar2 + (long)(*piVar4 + 3) * 0x10 + 0x138);
        goto LAB_00568728;
      }
      uVar3 = uVar3 + 1;
      piVar4 = piVar4 + 4;
    } while (uVar3 < *(ushort *)(lVar2 + 0x12a));
  }
  puVar1 = (undefined8 *)
           native_sub_3c9b34(plVar5,
                             _MG_BlocksEngine2_Block_I_BE2_BlockSectionHeaderInput_TypeInfo_12d4e00,
                             3);
LAB_00568728:
                    /* WARNING: Could not recover jumptable at 0x00568738. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)*puVar1)(plVar5,puVar1[1]);
  return;
}



/* MG_BlocksEngine2.Block.BE2_BlockSectionHeader_ReferenceInput$$get_InputValues @ 0x568740
 * MG_BlocksEngine2_Block_BE2_InputValues_o* MG_BlocksEngine2_Block_BE2_BlockSectionHeader_ReferenceInput__get_InputValues (MG_BlocksEngine2_Block_BE2_BlockSectionHeader_ReferenceInput_o* __this, const MethodInfo* method); */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* MG_BlocksEngine2.Block.BE2_BlockSectionHeader_ReferenceInput$$get_InputValues
   MG_BlocksEngine2_Block_BE2_InputValues_o*
   MG_BlocksEngine2_Block_BE2_BlockSectionHeader_ReferenceInput__get_InputValues
   (MG_BlocksEngine2_Block_BE2_BlockSectionHeader_ReferenceInput_o* __this, const MethodInfo*
   method); */

void native_MG_BlocksEngine2_Block_BE2_BlockSectionHeader_ReferenceInput__get_InputValues_568740
               (long param_1)

{
  undefined8 *puVar1;
  long lVar2;
  ulong uVar3;
  int *piVar4;
  long *plVar5;
  
  if ((bRam000000000133ea64 & 1) == 0) {
    native_sub_43273c(&MG_BlocksEngine2_Block_I_BE2_BlockSectionHeaderInput_TypeInfo_12d4e00);
    bRam000000000133ea64 = 1;
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
          _MG_BlocksEngine2_Block_I_BE2_BlockSectionHeaderInput_TypeInfo_12d4e00) {
        puVar1 = (undefined8 *)(lVar2 + (long)(*piVar4 + 4) * 0x10 + 0x138);
        goto LAB_005687d8;
      }
      uVar3 = uVar3 + 1;
      piVar4 = piVar4 + 4;
    } while (uVar3 < *(ushort *)(lVar2 + 0x12a));
  }
  puVar1 = (undefined8 *)
           native_sub_3c9b34(plVar5,
                             _MG_BlocksEngine2_Block_I_BE2_BlockSectionHeaderInput_TypeInfo_12d4e00,
                             4);
LAB_005687d8:
                    /* WARNING: Could not recover jumptable at 0x005687e8. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)*puVar1)(plVar5,puVar1[1]);
  return;
}



/* MG_BlocksEngine2.Block.BE2_BlockSectionHeader_ReferenceInput$$UpdateValues @ 0x5687f0
 * void MG_BlocksEngine2_Block_BE2_BlockSectionHeader_ReferenceInput__UpdateValues (MG_BlocksEngine2_Block_BE2_BlockSectionHeader_ReferenceInput_o* __this, const MethodInfo* method); */

/* MG_BlocksEngine2.Block.BE2_BlockSectionHeader_ReferenceInput$$UpdateValues
   void MG_BlocksEngine2_Block_BE2_BlockSectionHeader_ReferenceInput__UpdateValues
   (MG_BlocksEngine2_Block_BE2_BlockSectionHeader_ReferenceInput_o* __this, const MethodInfo*
   method); */

void native_MG_BlocksEngine2_Block_BE2_BlockSectionHeader_ReferenceInput__UpdateValues_5687f0(void)

{
  return;
}



/* MG_BlocksEngine2.Block.BE2_BlockSectionHeader_ReferenceInput$$.ctor @ 0x5687f4
 * void MG_BlocksEngine2_Block_BE2_BlockSectionHeader_ReferenceInput___ctor (MG_BlocksEngine2_Block_BE2_BlockSectionHeader_ReferenceInput_o* __this, const MethodInfo* method); */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* MG_BlocksEngine2.Block.BE2_BlockSectionHeader_ReferenceInput$$.ctor
   void MG_BlocksEngine2_Block_BE2_BlockSectionHeader_ReferenceInput___ctor
   (MG_BlocksEngine2_Block_BE2_BlockSectionHeader_ReferenceInput_o* __this, const MethodInfo*
   method); */

undefined1  [16]
native_MG_BlocksEngine2_Block_BE2_BlockSectionHeader_ReferenceInput___ctor_5687f4(ulong param_1)

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


