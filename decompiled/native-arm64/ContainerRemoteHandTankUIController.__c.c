/* ARM64 IL2CPP native pseudocode from Ghidra.
 * Recovered implementation, not original C# source.
 * Function boundaries follow the IL2CPP method address table. */


/* ContainerRemoteHandTankUIController.<>c$$.cctor @ 0x54a860
 * void ContainerRemoteHandTankUIController___c___cctor (const MethodInfo* method); */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* ContainerRemoteHandTankUIController.<>c$$.cctor
   void ContainerRemoteHandTankUIController___c___cctor (const MethodInfo* method); */

void native_ContainerRemoteHandTankUIController___c___cctor_54a860(void)

{
  ulong *puVar1;
  char cVar2;
  bool bVar3;
  undefined8 uVar4;
  undefined8 *puVar5;
  
  if ((bRam000000000133e9bd & 1) == 0) {
    native_sub_43273c(&ContainerRemoteHandTankUIController___c_TypeInfo_12d7168);
    bRam000000000133e9bd = 1;
  }
  uVar4 = native_sub_432808(_ContainerRemoteHandTankUIController___c_TypeInfo_12d7168);
  native_System_Object___ctor_ad2798(uVar4,0);
  puVar5 = *(undefined8 **)(_ContainerRemoteHandTankUIController___c_TypeInfo_12d7168 + 0xb8);
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



/* ContainerRemoteHandTankUIController.<>c$$.ctor @ 0x54a8c4
 * void ContainerRemoteHandTankUIController___c___ctor (ContainerRemoteHandTankUIController___c_o* __this, const MethodInfo* method); */

/* ContainerRemoteHandTankUIController.<>c$$.ctor
   void ContainerRemoteHandTankUIController___c___ctor (ContainerRemoteHandTankUIController___c_o*
   __this, const MethodInfo* method); */

void native_ContainerRemoteHandTankUIController___c___ctor_54a8c4(void)

{
  return;
}



/* ContainerRemoteHandTankUIController.<>c$$<OnClickButtonBlesetting>b__13_0 @ 0x54a8cc
 * void ContainerRemoteHandTankUIController___c___OnClickButtonBlesetting_b__13_0 (ContainerRemoteHandTankUIController___c_o* __this, System_String_o* msg, const MethodInfo* method); */

/* ContainerRemoteHandTankUIController.<>c$$<OnClickButtonBlesetting>b__13_0
   void ContainerRemoteHandTankUIController___c___OnClickButtonBlesetting_b__13_0
   (ContainerRemoteHandTankUIController___c_o* __this, System_String_o* msg, const MethodInfo*
   method); */

void native_ContainerRemoteHandTankUIController___c___OnClickButtonBlesetting_b__13_0_54a8cc(void)

{
  return;
}



/* ContainerRemoteHandTankUIController.<>c$$<OnClickButtonBlesetting>b__13_1 @ 0x54a8d0
 * void ContainerRemoteHandTankUIController___c___OnClickButtonBlesetting_b__13_1 (ContainerRemoteHandTankUIController___c_o* __this, System_String_o* msg, const MethodInfo* method); */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* ContainerRemoteHandTankUIController.<>c$$<OnClickButtonBlesetting>b__13_1
   void ContainerRemoteHandTankUIController___c___OnClickButtonBlesetting_b__13_1
   (ContainerRemoteHandTankUIController___c_o* __this, System_String_o* msg, const MethodInfo*
   method); */

void native_ContainerRemoteHandTankUIController___c___OnClickButtonBlesetting_b__13_1_54a8d0
               (undefined8 param_1,long param_2)

{
  ulong *puVar1;
  char cVar2;
  bool bVar3;
  undefined8 uVar4;
  ulong uVar5;
  undefined8 *puVar6;
  
  if ((bRam000000000133e9be & 1) == 0) {
    native_sub_43273c(&ContainerMatchingCodeUIController_TypeInfo_12d3f38);
    native_sub_43273c(&PanelMainUIController_TypeInfo_12d5600);
    native_sub_43273c(&StringLiteral_AA_12ec130);
    bRam000000000133e9be = 1;
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



/* ContainerRemoteHandTankUIController.<>c$$<OnClickButtonBlesetting>b__13_2 @ 0x54a9e8
 * void ContainerRemoteHandTankUIController___c___OnClickButtonBlesetting_b__13_2 (ContainerRemoteHandTankUIController___c_o* __this, System_String_o* msg, const MethodInfo* method); */

/* ContainerRemoteHandTankUIController.<>c$$<OnClickButtonBlesetting>b__13_2
   void ContainerRemoteHandTankUIController___c___OnClickButtonBlesetting_b__13_2
   (ContainerRemoteHandTankUIController___c_o* __this, System_String_o* msg, const MethodInfo*
   method); */

void native_ContainerRemoteHandTankUIController___c___OnClickButtonBlesetting_b__13_2_54a9e8(void)

{
  return;
}



/* ContainerRemoteHandTankUIController.<>c$$<OnClickButtonBlesetting>b__13_3 @ 0x54a9ec
 * void ContainerRemoteHandTankUIController___c___OnClickButtonBlesetting_b__13_3 (ContainerRemoteHandTankUIController___c_o* __this, System_String_o* msg, const MethodInfo* method); */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* ContainerRemoteHandTankUIController.<>c$$<OnClickButtonBlesetting>b__13_3
   void ContainerRemoteHandTankUIController___c___OnClickButtonBlesetting_b__13_3
   (ContainerRemoteHandTankUIController___c_o* __this, System_String_o* msg, const MethodInfo*
   method); */

void native_ContainerRemoteHandTankUIController___c___OnClickButtonBlesetting_b__13_3_54a9ec
               (undefined8 param_1,long param_2)

{
  ulong *puVar1;
  char cVar2;
  bool bVar3;
  undefined8 uVar4;
  ulong uVar5;
  undefined8 *puVar6;
  
  if ((bRam000000000133e9bf & 1) == 0) {
    native_sub_43273c(&ContainerMatchingCodeUIController_TypeInfo_12d3f38);
    native_sub_43273c(&PanelMainUIController_TypeInfo_12d5600);
    native_sub_43273c(&StringLiteral_BB_12ec6e0);
    bRam000000000133e9bf = 1;
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



/* ContainerRemoteHandTankUIController.<>c$$<Update>b__18_0 @ 0x54aae0
 * void ContainerRemoteHandTankUIController___c___Update_b__18_0 (ContainerRemoteHandTankUIController___c_o* __this, System_String_o* msg, const MethodInfo* method); */

/* ContainerRemoteHandTankUIController.<>c$$<Update>b__18_0
   void ContainerRemoteHandTankUIController___c___Update_b__18_0
   (ContainerRemoteHandTankUIController___c_o* __this, System_String_o* msg, const MethodInfo*
   method); */

void native_ContainerRemoteHandTankUIController___c___Update_b__18_0_54aae0(void)

{
  return;
}



/* ContainerRemoteHandTankUIController.<>c$$<Update>b__18_1 @ 0x54aae4
 * void ContainerRemoteHandTankUIController___c___Update_b__18_1 (ContainerRemoteHandTankUIController___c_o* __this, System_String_o* msg, const MethodInfo* method); */

/* ContainerRemoteHandTankUIController.<>c$$<Update>b__18_1
   void ContainerRemoteHandTankUIController___c___Update_b__18_1
   (ContainerRemoteHandTankUIController___c_o* __this, System_String_o* msg, const MethodInfo*
   method); */

void native_ContainerRemoteHandTankUIController___c___Update_b__18_1_54aae4(void)

{
  return;
}



/* ContainerRemoteHandTankUIController.<>c$$<Update>b__18_2 @ 0x54aae8
 * void ContainerRemoteHandTankUIController___c___Update_b__18_2 (ContainerRemoteHandTankUIController___c_o* __this, System_String_o* msg, const MethodInfo* method); */

/* ContainerRemoteHandTankUIController.<>c$$<Update>b__18_2
   void ContainerRemoteHandTankUIController___c___Update_b__18_2
   (ContainerRemoteHandTankUIController___c_o* __this, System_String_o* msg, const MethodInfo*
   method); */

void native_ContainerRemoteHandTankUIController___c___Update_b__18_2_54aae8(void)

{
  return;
}


