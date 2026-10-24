/* ARM64 IL2CPP native pseudocode from Ghidra.
 * Recovered implementation, not original C# source.
 * Function boundaries follow the IL2CPP method address table. */


/* MG_BlocksEngine2.Block.BE2_BlockSectionHeader_Custom$$get_Transform @ 0x566c84
 * UnityEngine_Transform_o* MG_BlocksEngine2_Block_BE2_BlockSectionHeader_Custom__get_Transform (MG_BlocksEngine2_Block_BE2_BlockSectionHeader_Custom_o* __this, const MethodInfo* method); */

/* MG_BlocksEngine2.Block.BE2_BlockSectionHeader_Custom$$get_Transform
   UnityEngine_Transform_o* MG_BlocksEngine2_Block_BE2_BlockSectionHeader_Custom__get_Transform
   (MG_BlocksEngine2_Block_BE2_BlockSectionHeader_Custom_o* __this, const MethodInfo* method); */

void native_MG_BlocksEngine2_Block_BE2_BlockSectionHeader_Custom__get_Transform_566c84
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



/* MG_BlocksEngine2.Block.BE2_BlockSectionHeader_Custom$$get_Size @ 0x566c8c
 * UnityEngine_Vector2_o MG_BlocksEngine2_Block_BE2_BlockSectionHeader_Custom__get_Size (MG_BlocksEngine2_Block_BE2_BlockSectionHeader_Custom_o* __this, const MethodInfo* method); */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* MG_BlocksEngine2.Block.BE2_BlockSectionHeader_Custom$$get_Size
   UnityEngine_Vector2_o MG_BlocksEngine2_Block_BE2_BlockSectionHeader_Custom__get_Size
   (MG_BlocksEngine2_Block_BE2_BlockSectionHeader_Custom_o* __this, const MethodInfo* method); */

undefined4
native_MG_BlocksEngine2_Block_BE2_BlockSectionHeader_Custom__get_Size_566c8c(long param_1)

{
  ulong uVar1;
  long lVar2;
  undefined8 uVar3;
  undefined8 uStack_28;
  
  if ((bRam000000000133ea4b & 1) == 0) {
    native_sub_43273c(&Method_UnityEngine_Component_GetComponent_RectTransform____12e2ad0);
    native_sub_43273c(&UnityEngine_Object_TypeInfo_12d54e0);
    bRam000000000133ea4b = 1;
  }
  uVar3 = *(undefined8 *)(param_1 + 0x18);
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
    lVar2 = *(long *)(param_1 + 0x18);
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



/* MG_BlocksEngine2.Block.BE2_BlockSectionHeader_Custom$$OnValidate @ 0x566d30
 * void MG_BlocksEngine2_Block_BE2_BlockSectionHeader_Custom__OnValidate (MG_BlocksEngine2_Block_BE2_BlockSectionHeader_Custom_o* __this, const MethodInfo* method); */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* MG_BlocksEngine2.Block.BE2_BlockSectionHeader_Custom$$OnValidate
   void MG_BlocksEngine2_Block_BE2_BlockSectionHeader_Custom__OnValidate
   (MG_BlocksEngine2_Block_BE2_BlockSectionHeader_Custom_o* __this, const MethodInfo* method); */

void native_MG_BlocksEngine2_Block_BE2_BlockSectionHeader_Custom__OnValidate_566d30(long param_1)

{
  ulong *puVar1;
  char cVar2;
  bool bVar3;
  undefined8 uVar4;
  
  if ((bRam000000000133ea4c & 1) == 0) {
    native_sub_43273c(&Method_UnityEngine_Component_GetComponent_RectTransform____12e2ad0);
    bRam000000000133ea4c = 1;
  }
  uVar4 = native_UnityEngine_Component__GetComponent_ActiveAnimation__49daec
                    (param_1,_Method_UnityEngine_Component_GetComponent_RectTransform____12e2ad0);
  *(undefined8 *)(param_1 + 0x18) = uVar4;
  if (iRam0000000001345318 != 0) {
    puVar1 = (ulong *)((param_1 + 0x18U >> 0x12 & 0x7fff) * 8 + 0x138ecd8);
    do {
      cVar2 = '\x01';
      bVar3 = (bool)ExclusiveMonitorPass(puVar1,0x10);
      if (bVar3) {
        *puVar1 = *puVar1 | 1L << (param_1 + 0x18U >> 0xc & 0x3f);
        cVar2 = ExclusiveMonitorsStatus();
      }
    } while (cVar2 != '\0');
  }
  return;
}



/* MG_BlocksEngine2.Block.BE2_BlockSectionHeader_Custom$$Awake @ 0x566d34
 * void MG_BlocksEngine2_Block_BE2_BlockSectionHeader_Custom__Awake (MG_BlocksEngine2_Block_BE2_BlockSectionHeader_Custom_o* __this, const MethodInfo* method); */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* MG_BlocksEngine2.Block.BE2_BlockSectionHeader_Custom$$Awake
   void MG_BlocksEngine2_Block_BE2_BlockSectionHeader_Custom__Awake
   (MG_BlocksEngine2_Block_BE2_BlockSectionHeader_Custom_o* __this, const MethodInfo* method); */

void native_MG_BlocksEngine2_Block_BE2_BlockSectionHeader_Custom__Awake_566d34(long param_1)

{
  ulong *puVar1;
  char cVar2;
  bool bVar3;
  undefined8 uVar4;
  
  if ((bRam000000000133ea4c & 1) == 0) {
    native_sub_43273c(&Method_UnityEngine_Component_GetComponent_RectTransform____12e2ad0);
    bRam000000000133ea4c = 1;
  }
  uVar4 = native_UnityEngine_Component__GetComponent_ActiveAnimation__49daec
                    (param_1,_Method_UnityEngine_Component_GetComponent_RectTransform____12e2ad0);
  *(undefined8 *)(param_1 + 0x18) = uVar4;
  if (iRam0000000001345318 != 0) {
    puVar1 = (ulong *)((param_1 + 0x18U >> 0x12 & 0x7fff) * 8 + 0x138ecd8);
    do {
      cVar2 = '\x01';
      bVar3 = (bool)ExclusiveMonitorPass(puVar1,0x10);
      if (bVar3) {
        *puVar1 = *puVar1 | 1L << (param_1 + 0x18U >> 0xc & 0x3f);
        cVar2 = ExclusiveMonitorsStatus();
      }
    } while (cVar2 != '\0');
  }
  return;
}



/* MG_BlocksEngine2.Block.BE2_BlockSectionHeader_Custom$$.ctor @ 0x566d90
 * void MG_BlocksEngine2_Block_BE2_BlockSectionHeader_Custom___ctor (MG_BlocksEngine2_Block_BE2_BlockSectionHeader_Custom_o* __this, const MethodInfo* method); */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* MG_BlocksEngine2.Block.BE2_BlockSectionHeader_Custom$$.ctor
   void MG_BlocksEngine2_Block_BE2_BlockSectionHeader_Custom___ctor
   (MG_BlocksEngine2_Block_BE2_BlockSectionHeader_Custom_o* __this, const MethodInfo* method); */

undefined1  [16]
native_MG_BlocksEngine2_Block_BE2_BlockSectionHeader_Custom___ctor_566d90(ulong param_1)

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


