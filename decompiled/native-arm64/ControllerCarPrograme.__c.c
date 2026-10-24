/* ARM64 IL2CPP native pseudocode from Ghidra.
 * Recovered implementation, not original C# source.
 * Function boundaries follow the IL2CPP method address table. */


/* ControllerCarPrograme.<>c$$.cctor @ 0x54ba68
 * void ControllerCarPrograme___c___cctor (const MethodInfo* method); */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* ControllerCarPrograme.<>c$$.cctor
   void ControllerCarPrograme___c___cctor (const MethodInfo* method); */

void native_ControllerCarPrograme___c___cctor_54ba68(void)

{
  ulong *puVar1;
  char cVar2;
  bool bVar3;
  undefined8 uVar4;
  undefined8 *puVar5;
  
  if ((bRam000000000133e9d0 & 1) == 0) {
    native_sub_43273c(&ControllerCarPrograme___c_TypeInfo_12d71a0);
    bRam000000000133e9d0 = 1;
  }
  uVar4 = native_sub_432808(_ControllerCarPrograme___c_TypeInfo_12d71a0);
  native_System_Object___ctor_ad2798(uVar4,0);
  puVar5 = *(undefined8 **)(_ControllerCarPrograme___c_TypeInfo_12d71a0 + 0xb8);
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



/* ControllerCarPrograme.<>c$$.ctor @ 0x54bacc
 * void ControllerCarPrograme___c___ctor (ControllerCarPrograme___c_o* __this, const MethodInfo* method); */

/* ControllerCarPrograme.<>c$$.ctor
   void ControllerCarPrograme___c___ctor (ControllerCarPrograme___c_o* __this, const MethodInfo*
   method); */

void native_ControllerCarPrograme___c___ctor_54bacc(void)

{
  return;
}



/* ControllerCarPrograme.<>c$$<Update>b__14_0 @ 0x54bad4
 * void ControllerCarPrograme___c___Update_b__14_0 (ControllerCarPrograme___c_o* __this, System_String_o* msg, const MethodInfo* method); */

/* ControllerCarPrograme.<>c$$<Update>b__14_0
   void ControllerCarPrograme___c___Update_b__14_0 (ControllerCarPrograme___c_o* __this,
   System_String_o* msg, const MethodInfo* method); */

void native_ControllerCarPrograme___c___Update_b__14_0_54bad4(void)

{
  return;
}



/* ControllerCarPrograme.<>c$$<Update>b__14_1 @ 0x54bad8
 * void ControllerCarPrograme___c___Update_b__14_1 (ControllerCarPrograme___c_o* __this, System_String_o* msg, const MethodInfo* method); */

/* ControllerCarPrograme.<>c$$<Update>b__14_1
   void ControllerCarPrograme___c___Update_b__14_1 (ControllerCarPrograme___c_o* __this,
   System_String_o* msg, const MethodInfo* method); */

void native_ControllerCarPrograme___c___Update_b__14_1_54bad8(void)

{
  return;
}



/* ControllerCarPrograme.<>c$$<Update>b__14_2 @ 0x54badc
 * void ControllerCarPrograme___c___Update_b__14_2 (ControllerCarPrograme___c_o* __this, System_String_o* msg, const MethodInfo* method); */

/* ControllerCarPrograme.<>c$$<Update>b__14_2
   void ControllerCarPrograme___c___Update_b__14_2 (ControllerCarPrograme___c_o* __this,
   System_String_o* msg, const MethodInfo* method); */

void native_ControllerCarPrograme___c___Update_b__14_2_54badc(void)

{
  return;
}


