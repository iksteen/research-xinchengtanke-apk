/* ARM64 IL2CPP native pseudocode from Ghidra.
 * Recovered implementation, not original C# source.
 * Function boundaries follow the IL2CPP method address table. */


/* ContainerRemoteTankUIController.<>c$$.cctor @ 0x54aaec
 * void ContainerRemoteTankUIController___c___cctor (const MethodInfo* method); */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* ContainerRemoteTankUIController.<>c$$.cctor
   void ContainerRemoteTankUIController___c___cctor (const MethodInfo* method); */

void native_ContainerRemoteTankUIController___c___cctor_54aaec(void)

{
  ulong *puVar1;
  char cVar2;
  bool bVar3;
  undefined8 uVar4;
  undefined8 *puVar5;
  
  if ((bRam000000000133e9c0 & 1) == 0) {
    native_sub_43273c(&ContainerRemoteTankUIController___c_TypeInfo_12d7170);
    bRam000000000133e9c0 = 1;
  }
  uVar4 = native_sub_432808(_ContainerRemoteTankUIController___c_TypeInfo_12d7170);
  native_System_Object___ctor_ad2798(uVar4,0);
  puVar5 = *(undefined8 **)(_ContainerRemoteTankUIController___c_TypeInfo_12d7170 + 0xb8);
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



/* ContainerRemoteTankUIController.<>c$$.ctor @ 0x54ab50
 * void ContainerRemoteTankUIController___c___ctor (ContainerRemoteTankUIController___c_o* __this, const MethodInfo* method); */

/* ContainerRemoteTankUIController.<>c$$.ctor
   void ContainerRemoteTankUIController___c___ctor (ContainerRemoteTankUIController___c_o* __this,
   const MethodInfo* method); */

void native_ContainerRemoteTankUIController___c___ctor_54ab50(void)

{
  return;
}



/* ContainerRemoteTankUIController.<>c$$<OnClickButtonBlesetting>b__21_0 @ 0x54ab58
 * void ContainerRemoteTankUIController___c___OnClickButtonBlesetting_b__21_0 (ContainerRemoteTankUIController___c_o* __this, System_String_o* msg, const MethodInfo* method); */

/* ContainerRemoteTankUIController.<>c$$<OnClickButtonBlesetting>b__21_0
   void ContainerRemoteTankUIController___c___OnClickButtonBlesetting_b__21_0
   (ContainerRemoteTankUIController___c_o* __this, System_String_o* msg, const MethodInfo* method);
    */

void native_ContainerRemoteTankUIController___c___OnClickButtonBlesetting_b__21_0_54ab58(void)

{
  return;
}



/* ContainerRemoteTankUIController.<>c$$<OnClickButtonBlesetting>b__21_1 @ 0x54ab5c
 * void ContainerRemoteTankUIController___c___OnClickButtonBlesetting_b__21_1 (ContainerRemoteTankUIController___c_o* __this, System_String_o* msg, const MethodInfo* method); */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* ContainerRemoteTankUIController.<>c$$<OnClickButtonBlesetting>b__21_1
   void ContainerRemoteTankUIController___c___OnClickButtonBlesetting_b__21_1
   (ContainerRemoteTankUIController___c_o* __this, System_String_o* msg, const MethodInfo* method);
    */

void native_ContainerRemoteTankUIController___c___OnClickButtonBlesetting_b__21_1_54ab5c
               (undefined8 param_1,long param_2)

{
  ulong *puVar1;
  char cVar2;
  bool bVar3;
  undefined8 uVar4;
  ulong uVar5;
  undefined8 *puVar6;
  
  if ((bRam000000000133e9c1 & 1) == 0) {
    native_sub_43273c(&ContainerMatchingCodeUIController_TypeInfo_12d3f38);
    native_sub_43273c(&PanelMainUIController_TypeInfo_12d5600);
    native_sub_43273c(&StringLiteral_AA_12ec130);
    bRam000000000133e9c1 = 1;
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
      uVar4 = *(undefined8 *)(*(long *)(_PanelMainUIController_TypeInfo_12d5600 + 0xb8) + 0xd0);
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



/* ContainerRemoteTankUIController.<>c$$<OnClickButtonBlesetting>b__21_2 @ 0x54ac74
 * void ContainerRemoteTankUIController___c___OnClickButtonBlesetting_b__21_2 (ContainerRemoteTankUIController___c_o* __this, System_String_o* msg, const MethodInfo* method); */

/* ContainerRemoteTankUIController.<>c$$<OnClickButtonBlesetting>b__21_2
   void ContainerRemoteTankUIController___c___OnClickButtonBlesetting_b__21_2
   (ContainerRemoteTankUIController___c_o* __this, System_String_o* msg, const MethodInfo* method);
    */

void native_ContainerRemoteTankUIController___c___OnClickButtonBlesetting_b__21_2_54ac74(void)

{
  return;
}



/* ContainerRemoteTankUIController.<>c$$<OnClickButtonBlesetting>b__21_3 @ 0x54ac78
 * void ContainerRemoteTankUIController___c___OnClickButtonBlesetting_b__21_3 (ContainerRemoteTankUIController___c_o* __this, System_String_o* msg, const MethodInfo* method); */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* ContainerRemoteTankUIController.<>c$$<OnClickButtonBlesetting>b__21_3
   void ContainerRemoteTankUIController___c___OnClickButtonBlesetting_b__21_3
   (ContainerRemoteTankUIController___c_o* __this, System_String_o* msg, const MethodInfo* method);
    */

void native_ContainerRemoteTankUIController___c___OnClickButtonBlesetting_b__21_3_54ac78
               (undefined8 param_1,long param_2)

{
  ulong *puVar1;
  char cVar2;
  bool bVar3;
  undefined8 uVar4;
  ulong uVar5;
  undefined8 *puVar6;
  
  if ((bRam000000000133e9c2 & 1) == 0) {
    native_sub_43273c(&ContainerMatchingCodeUIController_TypeInfo_12d3f38);
    native_sub_43273c(&PanelMainUIController_TypeInfo_12d5600);
    native_sub_43273c(&StringLiteral_BB_12ec6e0);
    bRam000000000133e9c2 = 1;
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



/* ContainerRemoteTankUIController.<>c$$<Update>b__29_0 @ 0x54ad6c
 * void ContainerRemoteTankUIController___c___Update_b__29_0 (ContainerRemoteTankUIController___c_o* __this, System_String_o* msg, const MethodInfo* method); */

/* ContainerRemoteTankUIController.<>c$$<Update>b__29_0
   void ContainerRemoteTankUIController___c___Update_b__29_0 (ContainerRemoteTankUIController___c_o*
   __this, System_String_o* msg, const MethodInfo* method); */

void native_ContainerRemoteTankUIController___c___Update_b__29_0_54ad6c(void)

{
  return;
}



/* ContainerRemoteTankUIController.<>c$$<Update>b__29_1 @ 0x54ad70
 * void ContainerRemoteTankUIController___c___Update_b__29_1 (ContainerRemoteTankUIController___c_o* __this, System_String_o* msg, const MethodInfo* method); */

/* ContainerRemoteTankUIController.<>c$$<Update>b__29_1
   void ContainerRemoteTankUIController___c___Update_b__29_1 (ContainerRemoteTankUIController___c_o*
   __this, System_String_o* msg, const MethodInfo* method); */

void native_ContainerRemoteTankUIController___c___Update_b__29_1_54ad70(void)

{
  return;
}



/* ContainerRemoteTankUIController.<>c$$<Update>b__29_2 @ 0x54ad74
 * void ContainerRemoteTankUIController___c___Update_b__29_2 (ContainerRemoteTankUIController___c_o* __this, System_String_o* msg, const MethodInfo* method); */

/* ContainerRemoteTankUIController.<>c$$<Update>b__29_2
   void ContainerRemoteTankUIController___c___Update_b__29_2 (ContainerRemoteTankUIController___c_o*
   __this, System_String_o* msg, const MethodInfo* method); */

void native_ContainerRemoteTankUIController___c___Update_b__29_2_54ad74(void)

{
  return;
}


