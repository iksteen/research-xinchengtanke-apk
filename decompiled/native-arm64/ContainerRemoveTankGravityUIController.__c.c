/* ARM64 IL2CPP native pseudocode from Ghidra.
 * Recovered implementation, not original C# source.
 * Function boundaries follow the IL2CPP method address table. */


/* ContainerRemoveTankGravityUIController.<>c$$.cctor @ 0x54b51c
 * void ContainerRemoveTankGravityUIController___c___cctor (const MethodInfo* method); */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* ContainerRemoveTankGravityUIController.<>c$$.cctor
   void ContainerRemoveTankGravityUIController___c___cctor (const MethodInfo* method); */

void native_ContainerRemoveTankGravityUIController___c___cctor_54b51c(void)

{
  ulong *puVar1;
  char cVar2;
  bool bVar3;
  undefined8 uVar4;
  undefined8 *puVar5;
  
  if ((bRam000000000133e9cc & 1) == 0) {
    native_sub_43273c(&ContainerRemoveTankGravityUIController___c_TypeInfo_12d7190);
    bRam000000000133e9cc = 1;
  }
  uVar4 = native_sub_432808(_ContainerRemoveTankGravityUIController___c_TypeInfo_12d7190);
  native_System_Object___ctor_ad2798(uVar4,0);
  puVar5 = *(undefined8 **)(_ContainerRemoveTankGravityUIController___c_TypeInfo_12d7190 + 0xb8);
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



/* ContainerRemoveTankGravityUIController.<>c$$.ctor @ 0x54b580
 * void ContainerRemoveTankGravityUIController___c___ctor (ContainerRemoveTankGravityUIController___c_o* __this, const MethodInfo* method); */

/* ContainerRemoveTankGravityUIController.<>c$$.ctor
   void ContainerRemoveTankGravityUIController___c___ctor
   (ContainerRemoveTankGravityUIController___c_o* __this, const MethodInfo* method); */

void native_ContainerRemoveTankGravityUIController___c___ctor_54b580(void)

{
  return;
}



/* ContainerRemoveTankGravityUIController.<>c$$<OnClickButtonBlesetting>b__25_0 @ 0x54b588
 * void ContainerRemoveTankGravityUIController___c___OnClickButtonBlesetting_b__25_0 (ContainerRemoveTankGravityUIController___c_o* __this, System_String_o* msg, const MethodInfo* method); */

/* ContainerRemoveTankGravityUIController.<>c$$<OnClickButtonBlesetting>b__25_0
   void ContainerRemoveTankGravityUIController___c___OnClickButtonBlesetting_b__25_0
   (ContainerRemoveTankGravityUIController___c_o* __this, System_String_o* msg, const MethodInfo*
   method); */

void native_ContainerRemoveTankGravityUIController___c___OnClickButtonBlesetting_b__25_0_54b588
               (void)

{
  return;
}



/* ContainerRemoveTankGravityUIController.<>c$$<OnClickButtonBlesetting>b__25_1 @ 0x54b58c
 * void ContainerRemoveTankGravityUIController___c___OnClickButtonBlesetting_b__25_1 (ContainerRemoveTankGravityUIController___c_o* __this, System_String_o* msg, const MethodInfo* method); */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* ContainerRemoveTankGravityUIController.<>c$$<OnClickButtonBlesetting>b__25_1
   void ContainerRemoveTankGravityUIController___c___OnClickButtonBlesetting_b__25_1
   (ContainerRemoveTankGravityUIController___c_o* __this, System_String_o* msg, const MethodInfo*
   method); */

void native_ContainerRemoveTankGravityUIController___c___OnClickButtonBlesetting_b__25_1_54b58c
               (undefined8 param_1,long param_2)

{
  ulong *puVar1;
  char cVar2;
  bool bVar3;
  undefined8 uVar4;
  ulong uVar5;
  undefined8 *puVar6;
  
  if ((bRam000000000133e9cd & 1) == 0) {
    native_sub_43273c(&ContainerMatchingCodeUIController_TypeInfo_12d3f38);
    native_sub_43273c(&PanelMainUIController_TypeInfo_12d5600);
    native_sub_43273c(&StringLiteral_AA_12ec130);
    bRam000000000133e9cd = 1;
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



/* ContainerRemoveTankGravityUIController.<>c$$<OnClickButtonBlesetting>b__25_2 @ 0x54b6a4
 * void ContainerRemoveTankGravityUIController___c___OnClickButtonBlesetting_b__25_2 (ContainerRemoveTankGravityUIController___c_o* __this, System_String_o* msg, const MethodInfo* method); */

/* ContainerRemoveTankGravityUIController.<>c$$<OnClickButtonBlesetting>b__25_2
   void ContainerRemoveTankGravityUIController___c___OnClickButtonBlesetting_b__25_2
   (ContainerRemoveTankGravityUIController___c_o* __this, System_String_o* msg, const MethodInfo*
   method); */

void native_ContainerRemoveTankGravityUIController___c___OnClickButtonBlesetting_b__25_2_54b6a4
               (void)

{
  return;
}



/* ContainerRemoveTankGravityUIController.<>c$$<OnClickButtonBlesetting>b__25_3 @ 0x54b6a8
 * void ContainerRemoveTankGravityUIController___c___OnClickButtonBlesetting_b__25_3 (ContainerRemoveTankGravityUIController___c_o* __this, System_String_o* msg, const MethodInfo* method); */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* ContainerRemoveTankGravityUIController.<>c$$<OnClickButtonBlesetting>b__25_3
   void ContainerRemoveTankGravityUIController___c___OnClickButtonBlesetting_b__25_3
   (ContainerRemoveTankGravityUIController___c_o* __this, System_String_o* msg, const MethodInfo*
   method); */

void native_ContainerRemoveTankGravityUIController___c___OnClickButtonBlesetting_b__25_3_54b6a8
               (undefined8 param_1,long param_2)

{
  ulong *puVar1;
  char cVar2;
  bool bVar3;
  undefined8 uVar4;
  ulong uVar5;
  undefined8 *puVar6;
  
  if ((bRam000000000133e9ce & 1) == 0) {
    native_sub_43273c(&ContainerMatchingCodeUIController_TypeInfo_12d3f38);
    native_sub_43273c(&PanelMainUIController_TypeInfo_12d5600);
    native_sub_43273c(&StringLiteral_BB_12ec6e0);
    bRam000000000133e9ce = 1;
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



/* ContainerRemoveTankGravityUIController.<>c$$<Update>b__33_0 @ 0x54b79c
 * void ContainerRemoveTankGravityUIController___c___Update_b__33_0 (ContainerRemoveTankGravityUIController___c_o* __this, System_String_o* msg, const MethodInfo* method); */

/* ContainerRemoveTankGravityUIController.<>c$$<Update>b__33_0
   void ContainerRemoveTankGravityUIController___c___Update_b__33_0
   (ContainerRemoveTankGravityUIController___c_o* __this, System_String_o* msg, const MethodInfo*
   method); */

void native_ContainerRemoveTankGravityUIController___c___Update_b__33_0_54b79c(void)

{
  return;
}



/* ContainerRemoveTankGravityUIController.<>c$$<Update>b__33_1 @ 0x54b7a0
 * void ContainerRemoveTankGravityUIController___c___Update_b__33_1 (ContainerRemoveTankGravityUIController___c_o* __this, System_String_o* msg, const MethodInfo* method); */

/* ContainerRemoveTankGravityUIController.<>c$$<Update>b__33_1
   void ContainerRemoveTankGravityUIController___c___Update_b__33_1
   (ContainerRemoveTankGravityUIController___c_o* __this, System_String_o* msg, const MethodInfo*
   method); */

void native_ContainerRemoveTankGravityUIController___c___Update_b__33_1_54b7a0(void)

{
  return;
}



/* ContainerRemoveTankGravityUIController.<>c$$<Update>b__33_2 @ 0x54b7a4
 * void ContainerRemoveTankGravityUIController___c___Update_b__33_2 (ContainerRemoveTankGravityUIController___c_o* __this, System_String_o* msg, const MethodInfo* method); */

/* ContainerRemoveTankGravityUIController.<>c$$<Update>b__33_2
   void ContainerRemoveTankGravityUIController___c___Update_b__33_2
   (ContainerRemoveTankGravityUIController___c_o* __this, System_String_o* msg, const MethodInfo*
   method); */

void native_ContainerRemoveTankGravityUIController___c___Update_b__33_2_54b7a4(void)

{
  return;
}


