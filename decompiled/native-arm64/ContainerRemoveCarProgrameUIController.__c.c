/* ARM64 IL2CPP native pseudocode from Ghidra.
 * Recovered implementation, not original C# source.
 * Function boundaries follow the IL2CPP method address table. */


/* ContainerRemoveCarProgrameUIController.<>c$$.cctor @ 0x54b004
 * void ContainerRemoveCarProgrameUIController___c___cctor (const MethodInfo* method); */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* ContainerRemoveCarProgrameUIController.<>c$$.cctor
   void ContainerRemoveCarProgrameUIController___c___cctor (const MethodInfo* method); */

void native_ContainerRemoveCarProgrameUIController___c___cctor_54b004(void)

{
  ulong *puVar1;
  char cVar2;
  bool bVar3;
  undefined8 uVar4;
  undefined8 *puVar5;
  
  if ((bRam000000000133e9c6 & 1) == 0) {
    native_sub_43273c(&ContainerRemoveCarProgrameUIController___c_TypeInfo_12d7180);
    bRam000000000133e9c6 = 1;
  }
  uVar4 = native_sub_432808(_ContainerRemoveCarProgrameUIController___c_TypeInfo_12d7180);
  native_System_Object___ctor_ad2798(uVar4,0);
  puVar5 = *(undefined8 **)(_ContainerRemoveCarProgrameUIController___c_TypeInfo_12d7180 + 0xb8);
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



/* ContainerRemoveCarProgrameUIController.<>c$$.ctor @ 0x54b068
 * void ContainerRemoveCarProgrameUIController___c___ctor (ContainerRemoveCarProgrameUIController___c_o* __this, const MethodInfo* method); */

/* ContainerRemoveCarProgrameUIController.<>c$$.ctor
   void ContainerRemoveCarProgrameUIController___c___ctor
   (ContainerRemoveCarProgrameUIController___c_o* __this, const MethodInfo* method); */

void native_ContainerRemoveCarProgrameUIController___c___ctor_54b068(void)

{
  return;
}



/* ContainerRemoveCarProgrameUIController.<>c$$<OnClickButtonBlesetting>b__20_0 @ 0x54b070
 * void ContainerRemoveCarProgrameUIController___c___OnClickButtonBlesetting_b__20_0 (ContainerRemoveCarProgrameUIController___c_o* __this, System_String_o* msg, const MethodInfo* method); */

/* ContainerRemoveCarProgrameUIController.<>c$$<OnClickButtonBlesetting>b__20_0
   void ContainerRemoveCarProgrameUIController___c___OnClickButtonBlesetting_b__20_0
   (ContainerRemoveCarProgrameUIController___c_o* __this, System_String_o* msg, const MethodInfo*
   method); */

void native_ContainerRemoveCarProgrameUIController___c___OnClickButtonBlesetting_b__20_0_54b070
               (void)

{
  return;
}



/* ContainerRemoveCarProgrameUIController.<>c$$<OnClickButtonBlesetting>b__20_1 @ 0x54b074
 * void ContainerRemoveCarProgrameUIController___c___OnClickButtonBlesetting_b__20_1 (ContainerRemoveCarProgrameUIController___c_o* __this, System_String_o* msg, const MethodInfo* method); */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* ContainerRemoveCarProgrameUIController.<>c$$<OnClickButtonBlesetting>b__20_1
   void ContainerRemoveCarProgrameUIController___c___OnClickButtonBlesetting_b__20_1
   (ContainerRemoveCarProgrameUIController___c_o* __this, System_String_o* msg, const MethodInfo*
   method); */

void native_ContainerRemoveCarProgrameUIController___c___OnClickButtonBlesetting_b__20_1_54b074
               (undefined8 param_1,long param_2)

{
  ulong *puVar1;
  char cVar2;
  bool bVar3;
  undefined8 uVar4;
  ulong uVar5;
  undefined8 *puVar6;
  
  if ((bRam000000000133e9c7 & 1) == 0) {
    native_sub_43273c(&ContainerMatchingCodeUIController_TypeInfo_12d3f38);
    native_sub_43273c(&PanelMainUIController_TypeInfo_12d5600);
    native_sub_43273c(&StringLiteral_AA_12ec130);
    bRam000000000133e9c7 = 1;
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



/* ContainerRemoveCarProgrameUIController.<>c$$<OnClickButtonBlesetting>b__20_2 @ 0x54b18c
 * void ContainerRemoveCarProgrameUIController___c___OnClickButtonBlesetting_b__20_2 (ContainerRemoveCarProgrameUIController___c_o* __this, System_String_o* msg, const MethodInfo* method); */

/* ContainerRemoveCarProgrameUIController.<>c$$<OnClickButtonBlesetting>b__20_2
   void ContainerRemoveCarProgrameUIController___c___OnClickButtonBlesetting_b__20_2
   (ContainerRemoveCarProgrameUIController___c_o* __this, System_String_o* msg, const MethodInfo*
   method); */

void native_ContainerRemoveCarProgrameUIController___c___OnClickButtonBlesetting_b__20_2_54b18c
               (void)

{
  return;
}



/* ContainerRemoveCarProgrameUIController.<>c$$<OnClickButtonBlesetting>b__20_3 @ 0x54b190
 * void ContainerRemoveCarProgrameUIController___c___OnClickButtonBlesetting_b__20_3 (ContainerRemoveCarProgrameUIController___c_o* __this, System_String_o* msg, const MethodInfo* method); */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* ContainerRemoveCarProgrameUIController.<>c$$<OnClickButtonBlesetting>b__20_3
   void ContainerRemoveCarProgrameUIController___c___OnClickButtonBlesetting_b__20_3
   (ContainerRemoveCarProgrameUIController___c_o* __this, System_String_o* msg, const MethodInfo*
   method); */

void native_ContainerRemoveCarProgrameUIController___c___OnClickButtonBlesetting_b__20_3_54b190
               (undefined8 param_1,long param_2)

{
  ulong *puVar1;
  char cVar2;
  bool bVar3;
  undefined8 uVar4;
  ulong uVar5;
  undefined8 *puVar6;
  
  if ((bRam000000000133e9c8 & 1) == 0) {
    native_sub_43273c(&ContainerMatchingCodeUIController_TypeInfo_12d3f38);
    native_sub_43273c(&PanelMainUIController_TypeInfo_12d5600);
    native_sub_43273c(&StringLiteral_BB_12ec6e0);
    bRam000000000133e9c8 = 1;
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



/* ContainerRemoveCarProgrameUIController.<>c$$<Update>b__23_0 @ 0x54b284
 * void ContainerRemoveCarProgrameUIController___c___Update_b__23_0 (ContainerRemoveCarProgrameUIController___c_o* __this, System_String_o* msg, const MethodInfo* method); */

/* ContainerRemoveCarProgrameUIController.<>c$$<Update>b__23_0
   void ContainerRemoveCarProgrameUIController___c___Update_b__23_0
   (ContainerRemoveCarProgrameUIController___c_o* __this, System_String_o* msg, const MethodInfo*
   method); */

void native_ContainerRemoveCarProgrameUIController___c___Update_b__23_0_54b284(void)

{
  return;
}



/* ContainerRemoveCarProgrameUIController.<>c$$<Update>b__23_1 @ 0x54b288
 * void ContainerRemoveCarProgrameUIController___c___Update_b__23_1 (ContainerRemoveCarProgrameUIController___c_o* __this, System_String_o* msg, const MethodInfo* method); */

/* ContainerRemoveCarProgrameUIController.<>c$$<Update>b__23_1
   void ContainerRemoveCarProgrameUIController___c___Update_b__23_1
   (ContainerRemoveCarProgrameUIController___c_o* __this, System_String_o* msg, const MethodInfo*
   method); */

void native_ContainerRemoveCarProgrameUIController___c___Update_b__23_1_54b288(void)

{
  return;
}



/* ContainerRemoveCarProgrameUIController.<>c$$<Update>b__23_2 @ 0x54b28c
 * void ContainerRemoveCarProgrameUIController___c___Update_b__23_2 (ContainerRemoveCarProgrameUIController___c_o* __this, System_String_o* msg, const MethodInfo* method); */

/* ContainerRemoveCarProgrameUIController.<>c$$<Update>b__23_2
   void ContainerRemoveCarProgrameUIController___c___Update_b__23_2
   (ContainerRemoveCarProgrameUIController___c_o* __this, System_String_o* msg, const MethodInfo*
   method); */

void native_ContainerRemoveCarProgrameUIController___c___Update_b__23_2_54b28c(void)

{
  return;
}


