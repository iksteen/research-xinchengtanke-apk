/* ARM64 IL2CPP native pseudocode from Ghidra.
 * Recovered implementation, not original C# source.
 * Function boundaries follow the IL2CPP method address table. */


/* MG_BlocksEngine2.Block.BE2_BlockSectionHeader_Label$$get_Transform @ 0x567bb8
 * UnityEngine_Transform_o* MG_BlocksEngine2_Block_BE2_BlockSectionHeader_Label__get_Transform (MG_BlocksEngine2_Block_BE2_BlockSectionHeader_Label_o* __this, const MethodInfo* method); */

/* MG_BlocksEngine2.Block.BE2_BlockSectionHeader_Label$$get_Transform
   UnityEngine_Transform_o* MG_BlocksEngine2_Block_BE2_BlockSectionHeader_Label__get_Transform
   (MG_BlocksEngine2_Block_BE2_BlockSectionHeader_Label_o* __this, const MethodInfo* method); */

void native_MG_BlocksEngine2_Block_BE2_BlockSectionHeader_Label__get_Transform_567bb8
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



/* MG_BlocksEngine2.Block.BE2_BlockSectionHeader_Label$$get_Size @ 0x567bc0
 * UnityEngine_Vector2_o MG_BlocksEngine2_Block_BE2_BlockSectionHeader_Label__get_Size (MG_BlocksEngine2_Block_BE2_BlockSectionHeader_Label_o* __this, const MethodInfo* method); */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* MG_BlocksEngine2.Block.BE2_BlockSectionHeader_Label$$get_Size
   UnityEngine_Vector2_o MG_BlocksEngine2_Block_BE2_BlockSectionHeader_Label__get_Size
   (MG_BlocksEngine2_Block_BE2_BlockSectionHeader_Label_o* __this, const MethodInfo* method); */

undefined4 native_MG_BlocksEngine2_Block_BE2_BlockSectionHeader_Label__get_Size_567bc0(long param_1)

{
  ulong uVar1;
  long lVar2;
  undefined8 uVar3;
  undefined8 uStack_28;
  
  if ((bRam000000000133ea56 & 1) == 0) {
    native_sub_43273c(&Method_UnityEngine_Component_GetComponent_RectTransform____12e2ad0);
    native_sub_43273c(&UnityEngine_Object_TypeInfo_12d54e0);
    bRam000000000133ea56 = 1;
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



/* MG_BlocksEngine2.Block.BE2_BlockSectionHeader_Label$$OnValidate @ 0x567c64
 * void MG_BlocksEngine2_Block_BE2_BlockSectionHeader_Label__OnValidate (MG_BlocksEngine2_Block_BE2_BlockSectionHeader_Label_o* __this, const MethodInfo* method); */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* MG_BlocksEngine2.Block.BE2_BlockSectionHeader_Label$$OnValidate
   void MG_BlocksEngine2_Block_BE2_BlockSectionHeader_Label__OnValidate
   (MG_BlocksEngine2_Block_BE2_BlockSectionHeader_Label_o* __this, const MethodInfo* method); */

void native_MG_BlocksEngine2_Block_BE2_BlockSectionHeader_Label__OnValidate_567c64(long param_1)

{
  undefined8 uVar1;
  long lVar2;
  ulong uVar3;
  long *plVar4;
  
  native_MG_BlocksEngine2_Block_BE2_BlockSectionHeader_Label__Awake_567cc4();
  uVar1 = native_UnityEngine_Component__get_transform_8da62c(param_1,0);
  uVar1 = native_MG_BlocksEngine2_Utils_BE2_Text__GetBE2Text_610e74(uVar1,0);
  *(undefined8 *)(param_1 + 0x18) = uVar1;
  native_sub_4326e0(param_1 + 0x18);
  lVar2 = *(long *)(param_1 + 0x18);
  if (lVar2 == 0) {
    return;
  }
  if ((bRam000000000133eec2 & 1) == 0) {
    native_sub_43273c(&UnityEngine_Object_TypeInfo_12d54e0,0,0);
    bRam000000000133eec2 = 1;
  }
  uVar1 = *(undefined8 *)(lVar2 + 0x20);
  if (((*(byte *)(_UnityEngine_Object_TypeInfo_12d54e0 + 0x133) >> 2 & 1) != 0) &&
     (*(int *)(_UnityEngine_Object_TypeInfo_12d54e0 + 0xe0) == 0)) {
    native_sub_4327ec();
  }
  uVar3 = native_UnityEngine_Object__op_Implicit_8e1b98(uVar1,0);
  if ((uVar3 & 1) == 0) {
    uVar1 = *(undefined8 *)(lVar2 + 0x18);
    if (((*(byte *)(_UnityEngine_Object_TypeInfo_12d54e0 + 0x133) >> 2 & 1) != 0) &&
       (*(int *)(_UnityEngine_Object_TypeInfo_12d54e0 + 0xe0) == 0)) {
      native_sub_4327ec();
    }
    uVar3 = native_UnityEngine_Object__op_Implicit_8e1b98(uVar1,0);
    if ((uVar3 & 1) == 0) {
      return;
    }
    plVar4 = *(long **)(lVar2 + 0x18);
  }
  else {
    plVar4 = *(long **)(lVar2 + 0x20);
  }
  if (plVar4 != (long *)0x0) {
                    /* WARNING: Could not recover jumptable at 0x0061a9b8. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (**(code **)(*plVar4 + 0x2c8))(plVar4,0,*(undefined8 *)(*plVar4 + 0x2d0));
    return;
  }
                    /* WARNING: Subroutine does not return */
  native_sub_432810();
}



/* MG_BlocksEngine2.Block.BE2_BlockSectionHeader_Label$$Awake @ 0x567cc4
 * void MG_BlocksEngine2_Block_BE2_BlockSectionHeader_Label__Awake (MG_BlocksEngine2_Block_BE2_BlockSectionHeader_Label_o* __this, const MethodInfo* method); */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* MG_BlocksEngine2.Block.BE2_BlockSectionHeader_Label$$Awake
   void MG_BlocksEngine2_Block_BE2_BlockSectionHeader_Label__Awake
   (MG_BlocksEngine2_Block_BE2_BlockSectionHeader_Label_o* __this, const MethodInfo* method); */

void native_MG_BlocksEngine2_Block_BE2_BlockSectionHeader_Label__Awake_567cc4(long param_1)

{
  ulong *puVar1;
  char cVar2;
  bool bVar3;
  undefined8 uVar4;
  
  if ((bRam000000000133ea57 & 1) == 0) {
    native_sub_43273c(&Method_UnityEngine_Component_GetComponent_RectTransform____12e2ad0);
    bRam000000000133ea57 = 1;
  }
  uVar4 = native_UnityEngine_Component__GetComponent_ActiveAnimation__49daec
                    (param_1,_Method_UnityEngine_Component_GetComponent_RectTransform____12e2ad0);
  *(undefined8 *)(param_1 + 0x20) = uVar4;
  if (iRam0000000001345318 != 0) {
    puVar1 = (ulong *)((param_1 + 0x20U >> 0x12 & 0x7fff) * 8 + 0x138ecd8);
    do {
      cVar2 = '\x01';
      bVar3 = (bool)ExclusiveMonitorPass(puVar1,0x10);
      if (bVar3) {
        *puVar1 = *puVar1 | 1L << (param_1 + 0x20U >> 0xc & 0x3f);
        cVar2 = ExclusiveMonitorsStatus();
      }
    } while (cVar2 != '\0');
  }
  return;
}



/* MG_BlocksEngine2.Block.BE2_BlockSectionHeader_Label$$.ctor @ 0x567d20
 * void MG_BlocksEngine2_Block_BE2_BlockSectionHeader_Label___ctor (MG_BlocksEngine2_Block_BE2_BlockSectionHeader_Label_o* __this, const MethodInfo* method); */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* MG_BlocksEngine2.Block.BE2_BlockSectionHeader_Label$$.ctor
   void MG_BlocksEngine2_Block_BE2_BlockSectionHeader_Label___ctor
   (MG_BlocksEngine2_Block_BE2_BlockSectionHeader_Label_o* __this, const MethodInfo* method); */

undefined1  [16]
native_MG_BlocksEngine2_Block_BE2_BlockSectionHeader_Label___ctor_567d20(ulong param_1)

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


