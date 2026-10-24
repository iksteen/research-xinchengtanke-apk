/* ARM64 IL2CPP native pseudocode from Ghidra.
 * Recovered implementation, not original C# source.
 * Function boundaries follow the IL2CPP method address table. */


/* MG_BlocksEngine2.Horizontal.Block.BE2_CstColorDropdownItem$$Awake @ 0x575660
 * void MG_BlocksEngine2_Horizontal_Block_BE2_CstColorDropdownItem__Awake (MG_BlocksEngine2_Horizontal_Block_BE2_CstColorDropdownItem_o* __this, const MethodInfo* method); */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* MG_BlocksEngine2.Horizontal.Block.BE2_CstColorDropdownItem$$Awake
   void MG_BlocksEngine2_Horizontal_Block_BE2_CstColorDropdownItem__Awake
   (MG_BlocksEngine2_Horizontal_Block_BE2_CstColorDropdownItem_o* __this, const MethodInfo* method);
    */

void native_MG_BlocksEngine2_Horizontal_Block_BE2_CstColorDropdownItem__Awake_575660(long param_1)

{
  ulong *puVar1;
  char cVar2;
  bool bVar3;
  undefined8 uVar4;
  long lVar5;
  undefined8 *puVar6;
  
  if ((bRam000000000133ea9b & 1) == 0) {
    native_sub_43273c(&Method_UnityEngine_Component_GetComponent_Image____12e2a78);
    native_sub_43273c(&Method_UnityEngine_Component_GetComponent_Text____12e2b40);
    native_sub_43273c(&Method_UnityEngine_Component_GetComponent_Toggle____12e2b58);
    bRam000000000133ea9b = 1;
  }
  uVar4 = native_UnityEngine_Component__GetComponent_ActiveAnimation__49daec
                    (param_1,_Method_UnityEngine_Component_GetComponent_Toggle____12e2b58);
  *(undefined8 *)(param_1 + 0x18) = uVar4;
  native_sub_4326e0(param_1 + 0x18);
  lVar5 = native_UnityEngine_Component__get_transform_8da62c(param_1,0);
  if ((lVar5 != 0) && (lVar5 = native_UnityEngine_Transform__GetChild_772ef0(lVar5,3,0), lVar5 != 0)
     ) {
    uVar4 = native_UnityEngine_Component__GetComponent_ActiveAnimation__49daec
                      (lVar5,_Method_UnityEngine_Component_GetComponent_Text____12e2b40);
    *(undefined8 *)(param_1 + 0x20) = uVar4;
    native_sub_4326e0();
    lVar5 = native_UnityEngine_Component__get_transform_8da62c(param_1,0);
    if ((lVar5 != 0) &&
       (lVar5 = native_UnityEngine_Transform__GetChild_772ef0(lVar5,1,0), lVar5 != 0)) {
      uVar4 = native_UnityEngine_Component__GetComponent_ActiveAnimation__49daec
                        (lVar5,_Method_UnityEngine_Component_GetComponent_Image____12e2a78);
      puVar6 = (undefined8 *)(param_1 + 0x28);
      *puVar6 = uVar4;
      if (iRam0000000001345318 != 0) {
        puVar1 = (ulong *)(((ulong)puVar6 >> 0x12 & 0x7fff) * 8 + 0x138ecd8);
        do {
          cVar2 = '\x01';
          bVar3 = (bool)ExclusiveMonitorPass(puVar1,0x10);
          if (bVar3) {
            *puVar1 = *puVar1 | 1L << ((ulong)puVar6 >> 0xc & 0x3f);
            cVar2 = ExclusiveMonitorsStatus();
          }
        } while (cVar2 != '\0');
      }
      return;
    }
  }
                    /* WARNING: Subroutine does not return */
  native_sub_432810();
}



/* MG_BlocksEngine2.Horizontal.Block.BE2_CstColorDropdownItem$$Start @ 0x575758
 * void MG_BlocksEngine2_Horizontal_Block_BE2_CstColorDropdownItem__Start (MG_BlocksEngine2_Horizontal_Block_BE2_CstColorDropdownItem_o* __this, const MethodInfo* method); */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* MG_BlocksEngine2.Horizontal.Block.BE2_CstColorDropdownItem$$Start
   void MG_BlocksEngine2_Horizontal_Block_BE2_CstColorDropdownItem__Start
   (MG_BlocksEngine2_Horizontal_Block_BE2_CstColorDropdownItem_o* __this, const MethodInfo* method);
    */

void native_MG_BlocksEngine2_Horizontal_Block_BE2_CstColorDropdownItem__Start_575758
               (undefined1 param_1 [16],undefined4 param_2,undefined4 param_3,undefined4 param_4,
               long param_5)

{
  uint uVar1;
  long *plVar2;
  long lVar3;
  ulong uVar4;
  undefined8 *puVar5;
  undefined4 uStack_40;
  undefined4 uStack_3c;
  undefined4 uStack_38;
  undefined4 uStack_34;
  
  plVar2 = *(long **)(param_5 + 0x20);
  if (plVar2 == (long *)0x0) {
                    /* WARNING: Subroutine does not return */
    native_sub_432810();
  }
  lVar3 = (**(code **)(*plVar2 + 0x5d8))(plVar2,*(undefined8 *)(*plVar2 + 0x5e0));
  if ((bRam000000000133ea9c & 1) == 0) {
    native_sub_43273c(&StringLiteral__0000FF_12eb028);
    native_sub_43273c(&StringLiteral_Violet_12f2f38);
    native_sub_43273c(&StringLiteral_Random_12f0870);
    native_sub_43273c(&StringLiteral__2E2B5F_12eb040);
    native_sub_43273c(&StringLiteral_Indigo_12ee840);
    native_sub_43273c(&StringLiteral__FFFFFF_12eb068);
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
    bRam000000000133ea9c = 1;
  }
  uStack_40 = native_UnityEngine_Color__get_white_8d9e10(0);
  uStack_3c = param_2;
  uStack_38 = param_3;
  uStack_34 = param_4;
  if (lVar3 == 0) goto LAB_00575aa0;
  uVar1 = native__PrivateImplementationDetails___ComputeStringHash_560404(lVar3);
  if (uVar1 < 0xa37f187d) {
    if (uVar1 < 0x727b390c) {
      if (uVar1 == 0x4115d182) {
        uVar4 = native_System_String__op_Equality_afc18c(lVar3,_StringLiteral_Random_12f0870,0);
        if ((uVar4 & 1) == 0) goto LAB_00575aa0;
        puVar5 = (undefined8 *)&StringLiteral__FFFFFF_12eb068;
      }
      else {
        if ((uVar1 != 0x727b390b) ||
           (uVar4 = native_System_String__op_Equality_afc18c(lVar3,_StringLiteral_Orange_12f03d0,0),
           (uVar4 & 1) == 0)) goto LAB_00575aa0;
        puVar5 = (undefined8 *)&StringLiteral__FF7F00_12eb058;
      }
    }
    else if (uVar1 == 0x938c5e4b) {
      uVar4 = native_System_String__op_Equality_afc18c(lVar3,_StringLiteral_Indigo_12ee840,0);
      if ((uVar4 & 1) == 0) goto LAB_00575aa0;
      puVar5 = (undefined8 *)&StringLiteral__2E2B5F_12eb040;
    }
    else {
      if ((uVar1 != 0xa37f187c) ||
         (uVar4 = native_System_String__op_Equality_afc18c(lVar3,_StringLiteral_Red_12f0928,0),
         (uVar4 & 1) == 0)) goto LAB_00575aa0;
      puVar5 = (undefined8 *)&StringLiteral__FF0000_12eb050;
    }
  }
  else if (uVar1 < 0xd9cdec6a) {
    if (uVar1 == 0xa953c75c) {
      uVar4 = native_System_String__op_Equality_afc18c(lVar3,_StringLiteral_Green_12ee238,0);
      if ((uVar4 & 1) == 0) goto LAB_00575aa0;
      puVar5 = (undefined8 *)&StringLiteral__00FF00_12eb030;
    }
    else {
      if ((uVar1 != 0xd9cdec69) ||
         (uVar4 = native_System_String__op_Equality_afc18c(lVar3,_StringLiteral_Yellow_12f31e0,0),
         (uVar4 & 1) == 0)) goto LAB_00575aa0;
      puVar5 = (undefined8 *)&StringLiteral__FFFF00_12eb060;
    }
  }
  else if (uVar1 == 0xe9dd1fed) {
    uVar4 = native_System_String__op_Equality_afc18c(lVar3,_StringLiteral_Blue_12ec800,0);
    if ((uVar4 & 1) == 0) goto LAB_00575aa0;
    puVar5 = (undefined8 *)&StringLiteral__0000FF_12eb028;
  }
  else {
    if ((uVar1 != 0xf03bdf12) ||
       (uVar4 = native_System_String__op_Equality_afc18c(lVar3,_StringLiteral_Violet_12f2f38,0),
       (uVar4 & 1) == 0)) goto LAB_00575aa0;
    puVar5 = (undefined8 *)&StringLiteral__8B00FF_12eb048;
  }
  native_UnityEngine_ColorUtility__TryParseHtmlString_8da574(*puVar5,&uStack_40,0);
LAB_00575aa0:
  plVar2 = *(long **)(param_5 + 0x28);
  if (plVar2 != (long *)0x0) {
    (**(code **)(*plVar2 + 0x2a8))
              (uStack_40,uStack_3c,uStack_38,uStack_34,plVar2,*(undefined8 *)(*plVar2 + 0x2b0));
    return;
  }
                    /* WARNING: Subroutine does not return */
  native_sub_432810();
}



/* MG_BlocksEngine2.Horizontal.Block.BE2_CstColorDropdownItem$$SetColor @ 0x575798
 * void MG_BlocksEngine2_Horizontal_Block_BE2_CstColorDropdownItem__SetColor (MG_BlocksEngine2_Horizontal_Block_BE2_CstColorDropdownItem_o* __this, System_String_o* value, const MethodInfo* method); */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* MG_BlocksEngine2.Horizontal.Block.BE2_CstColorDropdownItem$$SetColor
   void MG_BlocksEngine2_Horizontal_Block_BE2_CstColorDropdownItem__SetColor
   (MG_BlocksEngine2_Horizontal_Block_BE2_CstColorDropdownItem_o* __this, System_String_o* value,
   const MethodInfo* method); */

void native_MG_BlocksEngine2_Horizontal_Block_BE2_CstColorDropdownItem__SetColor_575798
               (undefined1 param_1 [16],undefined4 param_2,undefined4 param_3,undefined4 param_4,
               long param_5,long param_6)

{
  uint uVar1;
  ulong uVar2;
  long *plVar3;
  undefined8 *puVar4;
  undefined4 uStack_40;
  undefined4 uStack_3c;
  undefined4 uStack_38;
  undefined4 uStack_34;
  
  if ((bRam000000000133ea9c & 1) == 0) {
    native_sub_43273c(&StringLiteral__0000FF_12eb028);
    native_sub_43273c(&StringLiteral_Violet_12f2f38);
    native_sub_43273c(&StringLiteral_Random_12f0870);
    native_sub_43273c(&StringLiteral__2E2B5F_12eb040);
    native_sub_43273c(&StringLiteral_Indigo_12ee840);
    native_sub_43273c(&StringLiteral__FFFFFF_12eb068);
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
    bRam000000000133ea9c = 1;
  }
  uStack_40 = native_UnityEngine_Color__get_white_8d9e10(0);
  uStack_3c = param_2;
  uStack_38 = param_3;
  uStack_34 = param_4;
  if (param_6 == 0) goto LAB_00575aa0;
  uVar1 = native__PrivateImplementationDetails___ComputeStringHash_560404(param_6);
  if (uVar1 < 0xa37f187d) {
    if (uVar1 < 0x727b390c) {
      if (uVar1 == 0x4115d182) {
        uVar2 = native_System_String__op_Equality_afc18c(param_6,_StringLiteral_Random_12f0870,0);
        if ((uVar2 & 1) == 0) goto LAB_00575aa0;
        puVar4 = (undefined8 *)&StringLiteral__FFFFFF_12eb068;
      }
      else {
        if ((uVar1 != 0x727b390b) ||
           (uVar2 = native_System_String__op_Equality_afc18c
                              (param_6,_StringLiteral_Orange_12f03d0,0), (uVar2 & 1) == 0))
        goto LAB_00575aa0;
        puVar4 = (undefined8 *)&StringLiteral__FF7F00_12eb058;
      }
    }
    else if (uVar1 == 0x938c5e4b) {
      uVar2 = native_System_String__op_Equality_afc18c(param_6,_StringLiteral_Indigo_12ee840,0);
      if ((uVar2 & 1) == 0) goto LAB_00575aa0;
      puVar4 = (undefined8 *)&StringLiteral__2E2B5F_12eb040;
    }
    else {
      if ((uVar1 != 0xa37f187c) ||
         (uVar2 = native_System_String__op_Equality_afc18c(param_6,_StringLiteral_Red_12f0928,0),
         (uVar2 & 1) == 0)) goto LAB_00575aa0;
      puVar4 = (undefined8 *)&StringLiteral__FF0000_12eb050;
    }
  }
  else if (uVar1 < 0xd9cdec6a) {
    if (uVar1 == 0xa953c75c) {
      uVar2 = native_System_String__op_Equality_afc18c(param_6,_StringLiteral_Green_12ee238,0);
      if ((uVar2 & 1) == 0) goto LAB_00575aa0;
      puVar4 = (undefined8 *)&StringLiteral__00FF00_12eb030;
    }
    else {
      if ((uVar1 != 0xd9cdec69) ||
         (uVar2 = native_System_String__op_Equality_afc18c(param_6,_StringLiteral_Yellow_12f31e0,0),
         (uVar2 & 1) == 0)) goto LAB_00575aa0;
      puVar4 = (undefined8 *)&StringLiteral__FFFF00_12eb060;
    }
  }
  else if (uVar1 == 0xe9dd1fed) {
    uVar2 = native_System_String__op_Equality_afc18c(param_6,_StringLiteral_Blue_12ec800,0);
    if ((uVar2 & 1) == 0) goto LAB_00575aa0;
    puVar4 = (undefined8 *)&StringLiteral__0000FF_12eb028;
  }
  else {
    if ((uVar1 != 0xf03bdf12) ||
       (uVar2 = native_System_String__op_Equality_afc18c(param_6,_StringLiteral_Violet_12f2f38,0),
       (uVar2 & 1) == 0)) goto LAB_00575aa0;
    puVar4 = (undefined8 *)&StringLiteral__8B00FF_12eb048;
  }
  native_UnityEngine_ColorUtility__TryParseHtmlString_8da574(*puVar4,&uStack_40,0);
LAB_00575aa0:
  plVar3 = *(long **)(param_5 + 0x28);
  if (plVar3 != (long *)0x0) {
    (**(code **)(*plVar3 + 0x2a8))
              (uStack_40,uStack_3c,uStack_38,uStack_34,plVar3,*(undefined8 *)(*plVar3 + 0x2b0));
    return;
  }
                    /* WARNING: Subroutine does not return */
  native_sub_432810();
}



/* MG_BlocksEngine2.Horizontal.Block.BE2_CstColorDropdownItem$$.ctor @ 0x575ad8
 * void MG_BlocksEngine2_Horizontal_Block_BE2_CstColorDropdownItem___ctor (MG_BlocksEngine2_Horizontal_Block_BE2_CstColorDropdownItem_o* __this, const MethodInfo* method); */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* MG_BlocksEngine2.Horizontal.Block.BE2_CstColorDropdownItem$$.ctor
   void MG_BlocksEngine2_Horizontal_Block_BE2_CstColorDropdownItem___ctor
   (MG_BlocksEngine2_Horizontal_Block_BE2_CstColorDropdownItem_o* __this, const MethodInfo* method);
    */

undefined1  [16]
native_MG_BlocksEngine2_Horizontal_Block_BE2_CstColorDropdownItem___ctor_575ad8(ulong param_1)

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


