/* ARM64 IL2CPP native pseudocode from Ghidra.
 * Recovered implementation, not original C# source.
 * Function boundaries follow the IL2CPP method address table. */


/* ContainerBeforeSelectUIController.<>c$$.cctor @ 0x54a208
 * void ContainerBeforeSelectUIController___c___cctor (const MethodInfo* method); */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* ContainerBeforeSelectUIController.<>c$$.cctor
   void ContainerBeforeSelectUIController___c___cctor (const MethodInfo* method); */

void native_ContainerBeforeSelectUIController___c___cctor_54a208(void)

{
  ulong *puVar1;
  char cVar2;
  bool bVar3;
  undefined8 uVar4;
  undefined8 *puVar5;
  
  if ((bRam000000000133e9b5 & 1) == 0) {
    native_sub_43273c(&ContainerBeforeSelectUIController___c_TypeInfo_12d7150);
    bRam000000000133e9b5 = 1;
  }
  uVar4 = native_sub_432808(_ContainerBeforeSelectUIController___c_TypeInfo_12d7150);
  native_System_Object___ctor_ad2798(uVar4,0);
  puVar5 = *(undefined8 **)(_ContainerBeforeSelectUIController___c_TypeInfo_12d7150 + 0xb8);
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



/* ContainerBeforeSelectUIController.<>c$$.ctor @ 0x54a26c
 * void ContainerBeforeSelectUIController___c___ctor (ContainerBeforeSelectUIController___c_o* __this, const MethodInfo* method); */

/* ContainerBeforeSelectUIController.<>c$$.ctor
   void ContainerBeforeSelectUIController___c___ctor (ContainerBeforeSelectUIController___c_o*
   __this, const MethodInfo* method); */

void native_ContainerBeforeSelectUIController___c___ctor_54a26c(void)

{
  return;
}



/* ContainerBeforeSelectUIController.<>c$$<InitBluethood>b__5_0 @ 0x54a274
 * void ContainerBeforeSelectUIController___c___InitBluethood_b__5_0 (ContainerBeforeSelectUIController___c_o* __this, System_String_o* msg, const MethodInfo* method); */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* ContainerBeforeSelectUIController.<>c$$<InitBluethood>b__5_0
   void ContainerBeforeSelectUIController___c___InitBluethood_b__5_0
   (ContainerBeforeSelectUIController___c_o* __this, System_String_o* msg, const MethodInfo*
   method); */

void native_ContainerBeforeSelectUIController___c___InitBluethood_b__5_0_54a274
               (undefined8 param_1,long param_2)

{
  long lVar1;
  ulong uVar2;
  undefined1 uVar3;
  
  if ((bRam000000000133e9b6 & 1) == 0) {
    native_sub_43273c(&HjdBluetoothHardwareInterface_TypeInfo_12d4938);
    native_sub_43273c(&StringLiteral_AA_12ec130);
    bRam000000000133e9b6 = 1;
  }
  if ((param_2 != 0) && (lVar1 = native_System_String__Substring_b09fac(param_2,0,2,0), lVar1 != 0))
  {
    uVar2 = native_System_String__Equals_af8bfc(lVar1,_StringLiteral_AA_12ec130,0);
    if ((uVar2 & 1) == 0) {
      if (((*(ushort *)(_HjdBluetoothHardwareInterface_TypeInfo_12d4938 + 0x132) >> 10 & 1) != 0) &&
         (*(int *)(_HjdBluetoothHardwareInterface_TypeInfo_12d4938 + 0xe0) == 0)) {
        native_sub_4327ec(_HjdBluetoothHardwareInterface_TypeInfo_12d4938);
      }
      uVar3 = 0;
    }
    else {
      if (((*(ushort *)(_HjdBluetoothHardwareInterface_TypeInfo_12d4938 + 0x132) >> 10 & 1) != 0) &&
         (*(int *)(_HjdBluetoothHardwareInterface_TypeInfo_12d4938 + 0xe0) == 0)) {
        native_sub_4327ec(_HjdBluetoothHardwareInterface_TypeInfo_12d4938);
      }
      uVar3 = 1;
    }
    *(undefined1 *)(*(long *)(_HjdBluetoothHardwareInterface_TypeInfo_12d4938 + 0xb8) + 0x11) =
         uVar3;
    return;
  }
                    /* WARNING: Subroutine does not return */
  native_sub_432810();
}


