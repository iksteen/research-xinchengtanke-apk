/* ARM64 IL2CPP native pseudocode from Ghidra.
 * Recovered implementation, not original C# source.
 * Function boundaries follow the IL2CPP method address table. */


/* ContainerRemoveCarGravityUIController.<>c$$.cctor @ 0x54ad78
 * void ContainerRemoveCarGravityUIController___c___cctor (const MethodInfo* method); */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* ContainerRemoveCarGravityUIController.<>c$$.cctor
   void ContainerRemoveCarGravityUIController___c___cctor (const MethodInfo* method); */

void native_ContainerRemoveCarGravityUIController___c___cctor_54ad78(void)

{
  ulong *puVar1;
  char cVar2;
  bool bVar3;
  undefined8 uVar4;
  undefined8 *puVar5;
  
  if ((bRam000000000133e9c3 & 1) == 0) {
    native_sub_43273c(&ContainerRemoveCarGravityUIController___c_TypeInfo_12d7178);
    bRam000000000133e9c3 = 1;
  }
  uVar4 = native_sub_432808(_ContainerRemoveCarGravityUIController___c_TypeInfo_12d7178);
  native_System_Object___ctor_ad2798(uVar4,0);
  puVar5 = *(undefined8 **)(_ContainerRemoveCarGravityUIController___c_TypeInfo_12d7178 + 0xb8);
  *puVar5 = uVar4;
  if (iRam0000000001345318 != 0) {
    puVar1 = (ulong *)(((ulong)puVar5 >> 0x12 & 0x7fff) * 8 + 0x138ecd8);
    do {
      cVar2 = '\x01';
      bVar3 = (bool)ExclusiveMonitorPass(puVar1,0x10);
      if (bVar3) {
        *puVar1 = *puVar1 | 1L << ((ulong)puVar5 >> 0xc & 0x3f);
        cVar2 = ExclusiveMonitorsStatus();
      }
    } while (cVar2 != '\0');
  }
  return;
}



/* ContainerRemoveCarGravityUIController.<>c$$.ctor @ 0x54addc
 * void ContainerRemoveCarGravityUIController___c___ctor (ContainerRemoveCarGravityUIController___c_o* __this, const MethodInfo* method); */

/* ContainerRemoveCarGravityUIController.<>c$$.ctor
   void ContainerRemoveCarGravityUIController___c___ctor
   (ContainerRemoveCarGravityUIController___c_o* __this, const MethodInfo* method); */

void native_ContainerRemoveCarGravityUIController___c___ctor_54addc(void)

{
  return;
}



/* ContainerRemoveCarGravityUIController.<>c$$<OnClickButtonBlesetting>b__24_0 @ 0x54ade4
 * void ContainerRemoveCarGravityUIController___c___OnClickButtonBlesetting_b__24_0 (ContainerRemoveCarGravityUIController___c_o* __this, System_String_o* msg, const MethodInfo* method); */

/* ContainerRemoveCarGravityUIController.<>c$$<OnClickButtonBlesetting>b__24_0
   void ContainerRemoveCarGravityUIController___c___OnClickButtonBlesetting_b__24_0
   (ContainerRemoveCarGravityUIController___c_o* __this, System_String_o* msg, const MethodInfo*
   method); */

void native_ContainerRemoveCarGravityUIController___c___OnClickButtonBlesetting_b__24_0_54ade4(void)

{
  return;
}



/* ContainerRemoveCarGravityUIController.<>c$$<OnClickButtonBlesetting>b__24_1 @ 0x54ade8
 * void ContainerRemoveCarGravityUIController___c___OnClickButtonBlesetting_b__24_1 (ContainerRemoveCarGravityUIController___c_o* __this, System_String_o* msg, const MethodInfo* method); */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* ContainerRemoveCarGravityUIController.<>c$$<OnClickButtonBlesetting>b__24_1
   void ContainerRemoveCarGravityUIController___c___OnClickButtonBlesetting_b__24_1
   (ContainerRemoveCarGravityUIController___c_o* __this, System_String_o* msg, const MethodInfo*
   method); */

void native_ContainerRemoveCarGravityUIController___c___OnClickButtonBlesetting_b__24_1_54ade8
               (undefined8 param_1,long param_2)

{
  ulong *puVar1;
  char cVar2;
  bool bVar3;
  undefined8 uVar4;
  ulong uVar5;
  undefined8 *puVar6;
  
  if ((bRam000000000133e9c4 & 1) == 0) {
    native_sub_43273c(&ContainerMatchingCodeUIController_TypeInfo_12d3f38);
    native_sub_43273c(&PanelMainUIController_TypeInfo_12d5600);
    native_sub_43273c(&StringLiteral_AA_12ec130);
    bRam000000000133e9c4 = 1;
  }
  if (param_2 != 0) {
    uVar4 = native_System_String__Substring_b09fac(param_2,0,2,0);
    uVar5 = native_System_String__op_Equality_afc18c(uVar4,_StringLiteral_AA_12ec130,0);
    if ((uVar5 & 1) == 0) {
      if (((*(ushort *)(_PanelMainUIController_TypeInfo_12d5600 + 0x132) >> 10 & 1) != 0) &&
         (*(int *)(_PanelMainUIController_TypeInfo_12d5600 + 0xe0) == 0)) {
        native_sub_4327ec(_PanelMainUIController_TypeInfo_12d5600);
      }
      uVar4 = *(undefined8 *)(*(long *)(_PanelMainUIController_TypeInfo_12d5600 + 0xb8) + 0xd8);
    }
    else {
      if (((*(ushort *)(_PanelMainUIController_TypeInfo_12d5600 + 0x132) >> 10 & 1) != 0) &&
         (*(int *)(_PanelMainUIController_TypeInfo_12d5600 + 0xe0) == 0)) {
        native_sub_4327ec(_PanelMainUIController_TypeInfo_12d5600);
      }
      uVar4 = *(undefined8 *)(*(long *)(_PanelMainUIController_TypeInfo_12d5600 + 0xb8) + 200);
    }
    if (((*(byte *)(_ContainerMatchingCodeUIController_TypeInfo_12d3f38 + 0x133) >> 2 & 1) != 0) &&
       (*(int *)(_ContainerMatchingCodeUIController_TypeInfo_12d3f38 + 0xe0) == 0)) {
      native_sub_4327ec();
    }
    puVar6 = *(undefined8 **)(_ContainerMatchingCodeUIController_TypeInfo_12d3f38 + 0xb8);
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
                    /* WARNING: Subroutine does not return */
  native_sub_432810();
}



/* ContainerRemoveCarGravityUIController.<>c$$<OnClickButtonBlesetting>b__24_2 @ 0x54af00
 * void ContainerRemoveCarGravityUIController___c___OnClickButtonBlesetting_b__24_2 (ContainerRemoveCarGravityUIController___c_o* __this, System_String_o* msg, const MethodInfo* method); */

/* ContainerRemoveCarGravityUIController.<>c$$<OnClickButtonBlesetting>b__24_2
   void ContainerRemoveCarGravityUIController___c___OnClickButtonBlesetting_b__24_2
   (ContainerRemoveCarGravityUIController___c_o* __this, System_String_o* msg, const MethodInfo*
   method); */

void native_ContainerRemoveCarGravityUIController___c___OnClickButtonBlesetting_b__24_2_54af00(void)

{
  return;
}



/* ContainerRemoveCarGravityUIController.<>c$$<OnClickButtonBlesetting>b__24_3 @ 0x54af04
 * void ContainerRemoveCarGravityUIController___c___OnClickButtonBlesetting_b__24_3 (ContainerRemoveCarGravityUIController___c_o* __this, System_String_o* msg, const MethodInfo* method); */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* ContainerRemoveCarGravityUIController.<>c$$<OnClickButtonBlesetting>b__24_3
   void ContainerRemoveCarGravityUIController___c___OnClickButtonBlesetting_b__24_3
   (ContainerRemoveCarGravityUIController___c_o* __this, System_String_o* msg, const MethodInfo*
   method); */

void native_ContainerRemoveCarGravityUIController___c___OnClickButtonBlesetting_b__24_3_54af04
               (undefined8 param_1,long param_2)

{
  ulong *puVar1;
  char cVar2;
  bool bVar3;
  undefined8 uVar4;
  ulong uVar5;
  undefined8 *puVar6;
  
  if ((bRam000000000133e9c5 & 1) == 0) {
    native_sub_43273c(&ContainerMatchingCodeUIController_TypeInfo_12d3f38);
    native_sub_43273c(&PanelMainUIController_TypeInfo_12d5600);
    native_sub_43273c(&StringLiteral_BB_12ec6e0);
    bRam000000000133e9c5 = 1;
  }
  if (param_2 != 0) {
    uVar4 = native_System_String__Substring_b09fac(param_2,0,2,0);
    uVar5 = native_System_String__op_Equality_afc18c(uVar4,_StringLiteral_BB_12ec6e0,0);
    if ((uVar5 & 1) != 0) {
      if (((*(byte *)(_PanelMainUIController_TypeInfo_12d5600 + 0x133) >> 2 & 1) != 0) &&
         (*(int *)(_PanelMainUIController_TypeInfo_12d5600 + 0xe0) == 0)) {
        native_sub_4327ec();
      }
      uVar4 = *(undefined8 *)(*(long *)(_PanelMainUIController_TypeInfo_12d5600 + 0xb8) + 0xe0);
      if (((*(byte *)(_ContainerMatchingCodeUIController_TypeInfo_12d3f38 + 0x133) >> 2 & 1) != 0)
         && (*(int *)(_ContainerMatchingCodeUIController_TypeInfo_12d3f38 + 0xe0) == 0)) {
        native_sub_4327ec(_ContainerMatchingCodeUIController_TypeInfo_12d3f38);
      }
      puVar6 = *(undefined8 **)(_ContainerMatchingCodeUIController_TypeInfo_12d3f38 + 0xb8);
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
    return;
  }
                    /* WARNING: Subroutine does not return */
  native_sub_432810();
}



/* ContainerRemoveCarGravityUIController.<>c$$<Update>b__28_0 @ 0x54aff8
 * void ContainerRemoveCarGravityUIController___c___Update_b__28_0 (ContainerRemoveCarGravityUIController___c_o* __this, System_String_o* msg, const MethodInfo* method); */

/* ContainerRemoveCarGravityUIController.<>c$$<Update>b__28_0
   void ContainerRemoveCarGravityUIController___c___Update_b__28_0
   (ContainerRemoveCarGravityUIController___c_o* __this, System_String_o* msg, const MethodInfo*
   method); */

void native_ContainerRemoveCarGravityUIController___c___Update_b__28_0_54aff8(void)

{
  return;
}



/* ContainerRemoveCarGravityUIController.<>c$$<Update>b__28_1 @ 0x54affc
 * void ContainerRemoveCarGravityUIController___c___Update_b__28_1 (ContainerRemoveCarGravityUIController___c_o* __this, System_String_o* msg, const MethodInfo* method); */

/* ContainerRemoveCarGravityUIController.<>c$$<Update>b__28_1
   void ContainerRemoveCarGravityUIController___c___Update_b__28_1
   (ContainerRemoveCarGravityUIController___c_o* __this, System_String_o* msg, const MethodInfo*
   method); */

void native_ContainerRemoveCarGravityUIController___c___Update_b__28_1_54affc(void)

{
  return;
}



/* ContainerRemoveCarGravityUIController.<>c$$<Update>b__28_2 @ 0x54b000
 * void ContainerRemoveCarGravityUIController___c___Update_b__28_2 (ContainerRemoveCarGravityUIController___c_o* __this, System_String_o* msg, const MethodInfo* method); */

/* ContainerRemoveCarGravityUIController.<>c$$<Update>b__28_2
   void ContainerRemoveCarGravityUIController___c___Update_b__28_2
   (ContainerRemoveCarGravityUIController___c_o* __this, System_String_o* msg, const MethodInfo*
   method); */

void native_ContainerRemoveCarGravityUIController___c___Update_b__28_2_54b000(void)

{
  return;
}


