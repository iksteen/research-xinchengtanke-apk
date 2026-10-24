/* ARM64 IL2CPP native pseudocode from Ghidra.
 * Recovered implementation, not original C# source.
 * Function boundaries follow the IL2CPP method address table. */


/* MG_BlocksEngine2.Block.BE2_BlockSectionHeader_VariableLabel$$get_Transform @ 0x568ba8
 * UnityEngine_Transform_o* MG_BlocksEngine2_Block_BE2_BlockSectionHeader_VariableLabel__get_Transform (MG_BlocksEngine2_Block_BE2_BlockSectionHeader_VariableLabel_o* __this, const MethodInfo* method); */

/* MG_BlocksEngine2.Block.BE2_BlockSectionHeader_VariableLabel$$get_Transform
   UnityEngine_Transform_o*
   MG_BlocksEngine2_Block_BE2_BlockSectionHeader_VariableLabel__get_Transform
   (MG_BlocksEngine2_Block_BE2_BlockSectionHeader_VariableLabel_o* __this, const MethodInfo*
   method); */

void native_MG_BlocksEngine2_Block_BE2_BlockSectionHeader_VariableLabel__get_Transform_568ba8
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



/* MG_BlocksEngine2.Block.BE2_BlockSectionHeader_VariableLabel$$get_Size @ 0x568bb0
 * UnityEngine_Vector2_o MG_BlocksEngine2_Block_BE2_BlockSectionHeader_VariableLabel__get_Size (MG_BlocksEngine2_Block_BE2_BlockSectionHeader_VariableLabel_o* __this, const MethodInfo* method); */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* MG_BlocksEngine2.Block.BE2_BlockSectionHeader_VariableLabel$$get_Size
   UnityEngine_Vector2_o MG_BlocksEngine2_Block_BE2_BlockSectionHeader_VariableLabel__get_Size
   (MG_BlocksEngine2_Block_BE2_BlockSectionHeader_VariableLabel_o* __this, const MethodInfo*
   method); */

undefined4
native_MG_BlocksEngine2_Block_BE2_BlockSectionHeader_VariableLabel__get_Size_568bb0(long param_1)

{
  ulong uVar1;
  long lVar2;
  undefined8 uVar3;
  undefined8 uStack_28;
  
  if ((bRam000000000133ea69 & 1) == 0) {
    native_sub_43273c(&Method_UnityEngine_Component_GetComponent_RectTransform____12e2ad0);
    native_sub_43273c(&UnityEngine_Object_TypeInfo_12d54e0);
    bRam000000000133ea69 = 1;
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



/* MG_BlocksEngine2.Block.BE2_BlockSectionHeader_VariableLabel$$get_Spot @ 0x568c54
 * MG_BlocksEngine2_Block_I_BE2_Spot_o* MG_BlocksEngine2_Block_BE2_BlockSectionHeader_VariableLabel__get_Spot (MG_BlocksEngine2_Block_BE2_BlockSectionHeader_VariableLabel_o* __this, const MethodInfo* method); */

/* MG_BlocksEngine2.Block.BE2_BlockSectionHeader_VariableLabel$$get_Spot
   MG_BlocksEngine2_Block_I_BE2_Spot_o*
   MG_BlocksEngine2_Block_BE2_BlockSectionHeader_VariableLabel__get_Spot
   (MG_BlocksEngine2_Block_BE2_BlockSectionHeader_VariableLabel_o* __this, const MethodInfo*
   method); */

undefined8
native_MG_BlocksEngine2_Block_BE2_BlockSectionHeader_VariableLabel__get_Spot_568c54(long param_1)

{
  return *(undefined8 *)(param_1 + 0x28);
}



/* MG_BlocksEngine2.Block.BE2_BlockSectionHeader_VariableLabel$$set_Spot @ 0x568c5c
 * void MG_BlocksEngine2_Block_BE2_BlockSectionHeader_VariableLabel__set_Spot (MG_BlocksEngine2_Block_BE2_BlockSectionHeader_VariableLabel_o* __this, MG_BlocksEngine2_Block_I_BE2_Spot_o* value, const MethodInfo* method); */

/* MG_BlocksEngine2.Block.BE2_BlockSectionHeader_VariableLabel$$set_Spot
   void MG_BlocksEngine2_Block_BE2_BlockSectionHeader_VariableLabel__set_Spot
   (MG_BlocksEngine2_Block_BE2_BlockSectionHeader_VariableLabel_o* __this,
   MG_BlocksEngine2_Block_I_BE2_Spot_o* value, const MethodInfo* method); */

void native_MG_BlocksEngine2_Block_BE2_BlockSectionHeader_VariableLabel__set_Spot_568c5c
               (long param_1,undefined8 param_2)

{
  ulong *puVar1;
  char cVar2;
  bool bVar3;
  undefined8 *puVar4;
  
  puVar4 = (undefined8 *)(param_1 + 0x28);
  *puVar4 = param_2;
  if (iRam0000000001345318 != 0) {
    puVar1 = (ulong *)(((ulong)puVar4 >> 0x12 & 0x7fff) * 8 + 0x138ecd8);
    do {
      cVar2 = '\x01';
      bVar3 = (bool)ExclusiveMonitorPass(puVar1,0x10);
      if (bVar3) {
        *puVar1 = *puVar1 | 1L << ((ulong)puVar4 >> 0xc & 0x3f);
        cVar2 = ExclusiveMonitorsStatus();
      }
    } while (cVar2 != '\0');
  }
  return;
}



/* MG_BlocksEngine2.Block.BE2_BlockSectionHeader_VariableLabel$$get_FloatValue @ 0x568c64
 * float MG_BlocksEngine2_Block_BE2_BlockSectionHeader_VariableLabel__get_FloatValue (MG_BlocksEngine2_Block_BE2_BlockSectionHeader_VariableLabel_o* __this, const MethodInfo* method); */

/* MG_BlocksEngine2.Block.BE2_BlockSectionHeader_VariableLabel$$get_FloatValue
   float MG_BlocksEngine2_Block_BE2_BlockSectionHeader_VariableLabel__get_FloatValue
   (MG_BlocksEngine2_Block_BE2_BlockSectionHeader_VariableLabel_o* __this, const MethodInfo*
   method); */

undefined4
native_MG_BlocksEngine2_Block_BE2_BlockSectionHeader_VariableLabel__get_FloatValue_568c64
          (long param_1)

{
  return *(undefined4 *)(param_1 + 0x30);
}



/* MG_BlocksEngine2.Block.BE2_BlockSectionHeader_VariableLabel$$set_FloatValue @ 0x568c6c
 * void MG_BlocksEngine2_Block_BE2_BlockSectionHeader_VariableLabel__set_FloatValue (MG_BlocksEngine2_Block_BE2_BlockSectionHeader_VariableLabel_o* __this, float value, const MethodInfo* method); */

/* MG_BlocksEngine2.Block.BE2_BlockSectionHeader_VariableLabel$$set_FloatValue
   void MG_BlocksEngine2_Block_BE2_BlockSectionHeader_VariableLabel__set_FloatValue
   (MG_BlocksEngine2_Block_BE2_BlockSectionHeader_VariableLabel_o* __this, float value, const
   MethodInfo* method); */

void native_MG_BlocksEngine2_Block_BE2_BlockSectionHeader_VariableLabel__set_FloatValue_568c6c
               (undefined4 param_1,long param_2)

{
  *(undefined4 *)(param_2 + 0x30) = param_1;
  return;
}



/* MG_BlocksEngine2.Block.BE2_BlockSectionHeader_VariableLabel$$get_StringValue @ 0x568c74
 * System_String_o* MG_BlocksEngine2_Block_BE2_BlockSectionHeader_VariableLabel__get_StringValue (MG_BlocksEngine2_Block_BE2_BlockSectionHeader_VariableLabel_o* __this, const MethodInfo* method); */

/* MG_BlocksEngine2.Block.BE2_BlockSectionHeader_VariableLabel$$get_StringValue
   System_String_o* MG_BlocksEngine2_Block_BE2_BlockSectionHeader_VariableLabel__get_StringValue
   (MG_BlocksEngine2_Block_BE2_BlockSectionHeader_VariableLabel_o* __this, const MethodInfo*
   method); */

undefined8
native_MG_BlocksEngine2_Block_BE2_BlockSectionHeader_VariableLabel__get_StringValue_568c74
          (long param_1)

{
  return *(undefined8 *)(param_1 + 0x38);
}



/* MG_BlocksEngine2.Block.BE2_BlockSectionHeader_VariableLabel$$set_StringValue @ 0x568c7c
 * void MG_BlocksEngine2_Block_BE2_BlockSectionHeader_VariableLabel__set_StringValue (MG_BlocksEngine2_Block_BE2_BlockSectionHeader_VariableLabel_o* __this, System_String_o* value, const MethodInfo* method); */

/* MG_BlocksEngine2.Block.BE2_BlockSectionHeader_VariableLabel$$set_StringValue
   void MG_BlocksEngine2_Block_BE2_BlockSectionHeader_VariableLabel__set_StringValue
   (MG_BlocksEngine2_Block_BE2_BlockSectionHeader_VariableLabel_o* __this, System_String_o* value,
   const MethodInfo* method); */

void native_MG_BlocksEngine2_Block_BE2_BlockSectionHeader_VariableLabel__set_StringValue_568c7c
               (long param_1,undefined8 param_2)

{
  ulong *puVar1;
  char cVar2;
  bool bVar3;
  undefined8 *puVar4;
  
  puVar4 = (undefined8 *)(param_1 + 0x38);
  *puVar4 = param_2;
  if (iRam0000000001345318 != 0) {
    puVar1 = (ulong *)(((ulong)puVar4 >> 0x12 & 0x7fff) * 8 + 0x138ecd8);
    do {
      cVar2 = '\x01';
      bVar3 = (bool)ExclusiveMonitorPass(puVar1,0x10);
      if (bVar3) {
        *puVar1 = *puVar1 | 1L << ((ulong)puVar4 >> 0xc & 0x3f);
        cVar2 = ExclusiveMonitorsStatus();
      }
    } while (cVar2 != '\0');
  }
  return;
}



/* MG_BlocksEngine2.Block.BE2_BlockSectionHeader_VariableLabel$$get_InputValues @ 0x568c84
 * MG_BlocksEngine2_Block_BE2_InputValues_o* MG_BlocksEngine2_Block_BE2_BlockSectionHeader_VariableLabel__get_InputValues (MG_BlocksEngine2_Block_BE2_BlockSectionHeader_VariableLabel_o* __this, const MethodInfo* method); */

/* MG_BlocksEngine2.Block.BE2_BlockSectionHeader_VariableLabel$$get_InputValues
   MG_BlocksEngine2_Block_BE2_InputValues_o*
   MG_BlocksEngine2_Block_BE2_BlockSectionHeader_VariableLabel__get_InputValues
   (MG_BlocksEngine2_Block_BE2_BlockSectionHeader_VariableLabel_o* __this, const MethodInfo*
   method); */

undefined8
native_MG_BlocksEngine2_Block_BE2_BlockSectionHeader_VariableLabel__get_InputValues_568c84
          (long param_1)

{
  return *(undefined8 *)(param_1 + 0x40);
}



/* MG_BlocksEngine2.Block.BE2_BlockSectionHeader_VariableLabel$$set_InputValues @ 0x568c8c
 * void MG_BlocksEngine2_Block_BE2_BlockSectionHeader_VariableLabel__set_InputValues (MG_BlocksEngine2_Block_BE2_BlockSectionHeader_VariableLabel_o* __this, MG_BlocksEngine2_Block_BE2_InputValues_o* value, const MethodInfo* method); */

/* MG_BlocksEngine2.Block.BE2_BlockSectionHeader_VariableLabel$$set_InputValues
   void MG_BlocksEngine2_Block_BE2_BlockSectionHeader_VariableLabel__set_InputValues
   (MG_BlocksEngine2_Block_BE2_BlockSectionHeader_VariableLabel_o* __this,
   MG_BlocksEngine2_Block_BE2_InputValues_o* value, const MethodInfo* method); */

void native_MG_BlocksEngine2_Block_BE2_BlockSectionHeader_VariableLabel__set_InputValues_568c8c
               (long param_1,undefined8 param_2)

{
  ulong *puVar1;
  char cVar2;
  bool bVar3;
  undefined8 *puVar4;
  
  puVar4 = (undefined8 *)(param_1 + 0x40);
  *puVar4 = param_2;
  if (iRam0000000001345318 != 0) {
    puVar1 = (ulong *)(((ulong)puVar4 >> 0x12 & 0x7fff) * 8 + 0x138ecd8);
    do {
      cVar2 = '\x01';
      bVar3 = (bool)ExclusiveMonitorPass(puVar1,0x10);
      if (bVar3) {
        *puVar1 = *puVar1 | 1L << ((ulong)puVar4 >> 0xc & 0x3f);
        cVar2 = ExclusiveMonitorsStatus();
      }
    } while (cVar2 != '\0');
  }
  return;
}



/* MG_BlocksEngine2.Block.BE2_BlockSectionHeader_VariableLabel$$OnValidate @ 0x568c94
 * void MG_BlocksEngine2_Block_BE2_BlockSectionHeader_VariableLabel__OnValidate (MG_BlocksEngine2_Block_BE2_BlockSectionHeader_VariableLabel_o* __this, const MethodInfo* method); */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* MG_BlocksEngine2.Block.BE2_BlockSectionHeader_VariableLabel$$OnValidate
   void MG_BlocksEngine2_Block_BE2_BlockSectionHeader_VariableLabel__OnValidate
   (MG_BlocksEngine2_Block_BE2_BlockSectionHeader_VariableLabel_o* __this, const MethodInfo*
   method); */

void native_MG_BlocksEngine2_Block_BE2_BlockSectionHeader_VariableLabel__OnValidate_568c94
               (long param_1)

{
  ulong *puVar1;
  char cVar2;
  bool bVar3;
  undefined8 uVar4;
  
  if ((bRam000000000133ea6a & 1) == 0) {
    native_sub_43273c(&Method_UnityEngine_Component_GetComponent_I_BE2_Spot____12e2a68);
    native_sub_43273c(&Method_UnityEngine_Component_GetComponent_RectTransform____12e2ad0);
    bRam000000000133ea6a = 1;
  }
  uVar4 = native_UnityEngine_Component__GetComponent_ActiveAnimation__49daec
                    (param_1,_Method_UnityEngine_Component_GetComponent_RectTransform____12e2ad0);
  *(undefined8 *)(param_1 + 0x20) = uVar4;
  native_sub_4326e0(param_1 + 0x20);
  uVar4 = native_UnityEngine_Component__get_transform_8da62c(param_1,0);
  uVar4 = native_MG_BlocksEngine2_Utils_BE2_Text__GetBE2Text_610e74(uVar4,0);
  *(undefined8 *)(param_1 + 0x18) = uVar4;
  native_sub_4326e0(param_1 + 0x18);
  uVar4 = native_UnityEngine_Component__GetComponent_ActiveAnimation__49daec
                    (param_1,_Method_UnityEngine_Component_GetComponent_I_BE2_Spot____12e2a68);
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



/* MG_BlocksEngine2.Block.BE2_BlockSectionHeader_VariableLabel$$Awake @ 0x568c98
 * void MG_BlocksEngine2_Block_BE2_BlockSectionHeader_VariableLabel__Awake (MG_BlocksEngine2_Block_BE2_BlockSectionHeader_VariableLabel_o* __this, const MethodInfo* method); */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* MG_BlocksEngine2.Block.BE2_BlockSectionHeader_VariableLabel$$Awake
   void MG_BlocksEngine2_Block_BE2_BlockSectionHeader_VariableLabel__Awake
   (MG_BlocksEngine2_Block_BE2_BlockSectionHeader_VariableLabel_o* __this, const MethodInfo*
   method); */

void native_MG_BlocksEngine2_Block_BE2_BlockSectionHeader_VariableLabel__Awake_568c98(long param_1)

{
  ulong *puVar1;
  char cVar2;
  bool bVar3;
  undefined8 uVar4;
  
  if ((bRam000000000133ea6a & 1) == 0) {
    native_sub_43273c(&Method_UnityEngine_Component_GetComponent_I_BE2_Spot____12e2a68);
    native_sub_43273c(&Method_UnityEngine_Component_GetComponent_RectTransform____12e2ad0);
    bRam000000000133ea6a = 1;
  }
  uVar4 = native_UnityEngine_Component__GetComponent_ActiveAnimation__49daec
                    (param_1,_Method_UnityEngine_Component_GetComponent_RectTransform____12e2ad0);
  *(undefined8 *)(param_1 + 0x20) = uVar4;
  native_sub_4326e0(param_1 + 0x20);
  uVar4 = native_UnityEngine_Component__get_transform_8da62c(param_1,0);
  uVar4 = native_MG_BlocksEngine2_Utils_BE2_Text__GetBE2Text_610e74(uVar4,0);
  *(undefined8 *)(param_1 + 0x18) = uVar4;
  native_sub_4326e0(param_1 + 0x18);
  uVar4 = native_UnityEngine_Component__GetComponent_ActiveAnimation__49daec
                    (param_1,_Method_UnityEngine_Component_GetComponent_I_BE2_Spot____12e2a68);
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



/* MG_BlocksEngine2.Block.BE2_BlockSectionHeader_VariableLabel$$OnEnable @ 0x568d48
 * void MG_BlocksEngine2_Block_BE2_BlockSectionHeader_VariableLabel__OnEnable (MG_BlocksEngine2_Block_BE2_BlockSectionHeader_VariableLabel_o* __this, const MethodInfo* method); */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* MG_BlocksEngine2.Block.BE2_BlockSectionHeader_VariableLabel$$OnEnable
   void MG_BlocksEngine2_Block_BE2_BlockSectionHeader_VariableLabel__OnEnable
   (MG_BlocksEngine2_Block_BE2_BlockSectionHeader_VariableLabel_o* __this, const MethodInfo*
   method); */

void native_MG_BlocksEngine2_Block_BE2_BlockSectionHeader_VariableLabel__OnEnable_568d48
               (long param_1)

{
  ulong *puVar1;
  char cVar2;
  bool bVar3;
  long lVar4;
  undefined8 uVar5;
  undefined8 *puVar6;
  undefined8 uVar7;
  
  if ((bRam000000000133ea6b & 1) == 0) {
    native_sub_43273c(&MG_BlocksEngine2_Block_BE2_InputValues_TypeInfo_12d39f0);
    native_sub_43273c(&StringLiteral__12eaac0);
    bRam000000000133ea6b = 1;
  }
  uVar5 = _StringLiteral__12eaac0;
  if (*(long *)(param_1 + 0x18) != 0) {
    lVar4 = native_MG_BlocksEngine2_Utils_BE2_Text__get_text_61a754(*(long *)(param_1 + 0x18),0);
    if (lVar4 != 0) {
      if (*(long *)(param_1 + 0x18) == 0) goto LAB_00568e1c;
      uVar5 = native_MG_BlocksEngine2_Utils_BE2_Text__get_text_61a754(*(long *)(param_1 + 0x18),0);
    }
    puVar6 = (undefined8 *)(param_1 + 0x38);
    *puVar6 = uVar5;
    native_sub_4326e0(puVar6,uVar5);
    *(undefined4 *)(param_1 + 0x30) = 0;
    uVar7 = *puVar6;
    uVar5 = native_sub_432808(_MG_BlocksEngine2_Block_BE2_InputValues_TypeInfo_12d39f0);
    native_MG_BlocksEngine2_Block_BE2_InputValues___ctor_6033d4(0,uVar5,uVar7,1,0);
    *(undefined8 *)(param_1 + 0x40) = uVar5;
    if (iRam0000000001345318 != 0) {
      puVar1 = (ulong *)((param_1 + 0x40U >> 0x12 & 0x7fff) * 8 + 0x138ecd8);
      do {
        cVar2 = '\x01';
        bVar3 = (bool)ExclusiveMonitorPass(puVar1,0x10);
        if (bVar3) {
          *puVar1 = *puVar1 | 1L << (param_1 + 0x40U >> 0xc & 0x3f);
          cVar2 = ExclusiveMonitorsStatus();
        }
      } while (cVar2 != '\0');
    }
    return;
  }
LAB_00568e1c:
                    /* WARNING: Subroutine does not return */
  native_sub_432810();
}



/* MG_BlocksEngine2.Block.BE2_BlockSectionHeader_VariableLabel$$UpdateValues @ 0x568d4c
 * void MG_BlocksEngine2_Block_BE2_BlockSectionHeader_VariableLabel__UpdateValues (MG_BlocksEngine2_Block_BE2_BlockSectionHeader_VariableLabel_o* __this, const MethodInfo* method); */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* MG_BlocksEngine2.Block.BE2_BlockSectionHeader_VariableLabel$$UpdateValues
   void MG_BlocksEngine2_Block_BE2_BlockSectionHeader_VariableLabel__UpdateValues
   (MG_BlocksEngine2_Block_BE2_BlockSectionHeader_VariableLabel_o* __this, const MethodInfo*
   method); */

void native_MG_BlocksEngine2_Block_BE2_BlockSectionHeader_VariableLabel__UpdateValues_568d4c
               (long param_1)

{
  ulong *puVar1;
  char cVar2;
  bool bVar3;
  long lVar4;
  undefined8 uVar5;
  undefined8 *puVar6;
  undefined8 uVar7;
  
  if ((bRam000000000133ea6b & 1) == 0) {
    native_sub_43273c(&MG_BlocksEngine2_Block_BE2_InputValues_TypeInfo_12d39f0);
    native_sub_43273c(&StringLiteral__12eaac0);
    bRam000000000133ea6b = 1;
  }
  uVar5 = _StringLiteral__12eaac0;
  if (*(long *)(param_1 + 0x18) != 0) {
    lVar4 = native_MG_BlocksEngine2_Utils_BE2_Text__get_text_61a754(*(long *)(param_1 + 0x18),0);
    if (lVar4 != 0) {
      if (*(long *)(param_1 + 0x18) == 0) goto LAB_00568e1c;
      uVar5 = native_MG_BlocksEngine2_Utils_BE2_Text__get_text_61a754(*(long *)(param_1 + 0x18),0);
    }
    puVar6 = (undefined8 *)(param_1 + 0x38);
    *puVar6 = uVar5;
    native_sub_4326e0(puVar6,uVar5);
    *(undefined4 *)(param_1 + 0x30) = 0;
    uVar7 = *puVar6;
    uVar5 = native_sub_432808(_MG_BlocksEngine2_Block_BE2_InputValues_TypeInfo_12d39f0);
    native_MG_BlocksEngine2_Block_BE2_InputValues___ctor_6033d4(0,uVar5,uVar7,1,0);
    *(undefined8 *)(param_1 + 0x40) = uVar5;
    if (iRam0000000001345318 != 0) {
      puVar1 = (ulong *)((param_1 + 0x40U >> 0x12 & 0x7fff) * 8 + 0x138ecd8);
      do {
        cVar2 = '\x01';
        bVar3 = (bool)ExclusiveMonitorPass(puVar1,0x10);
        if (bVar3) {
          *puVar1 = *puVar1 | 1L << (param_1 + 0x40U >> 0xc & 0x3f);
          cVar2 = ExclusiveMonitorsStatus();
        }
      } while (cVar2 != '\0');
    }
    return;
  }
LAB_00568e1c:
                    /* WARNING: Subroutine does not return */
  native_sub_432810();
}



/* MG_BlocksEngine2.Block.BE2_BlockSectionHeader_VariableLabel$$.ctor @ 0x568e20
 * void MG_BlocksEngine2_Block_BE2_BlockSectionHeader_VariableLabel___ctor (MG_BlocksEngine2_Block_BE2_BlockSectionHeader_VariableLabel_o* __this, const MethodInfo* method); */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* MG_BlocksEngine2.Block.BE2_BlockSectionHeader_VariableLabel$$.ctor
   void MG_BlocksEngine2_Block_BE2_BlockSectionHeader_VariableLabel___ctor
   (MG_BlocksEngine2_Block_BE2_BlockSectionHeader_VariableLabel_o* __this, const MethodInfo*
   method); */

undefined1  [16]
native_MG_BlocksEngine2_Block_BE2_BlockSectionHeader_VariableLabel___ctor_568e20(ulong param_1)

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


