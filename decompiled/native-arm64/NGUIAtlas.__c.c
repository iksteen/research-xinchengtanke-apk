/* ARM64 IL2CPP native pseudocode from Ghidra.
 * Recovered implementation, not original C# source.
 * Function boundaries follow the IL2CPP method address table. */


/* NGUIAtlas.<>c$$.cctor @ 0x54cd5c
 * void NGUIAtlas___c___cctor (const MethodInfo* method); */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* NGUIAtlas.<>c$$.cctor
   void NGUIAtlas___c___cctor (const MethodInfo* method); */

void native_NGUIAtlas___c___cctor_54cd5c(void)

{
  ulong *puVar1;
  char cVar2;
  bool bVar3;
  undefined8 uVar4;
  undefined8 *puVar5;
  
  if ((bRam000000000133e9da & 1) == 0) {
    native_sub_43273c(&NGUIAtlas___c_TypeInfo_12d7470);
    bRam000000000133e9da = 1;
  }
  uVar4 = native_sub_432808(_NGUIAtlas___c_TypeInfo_12d7470);
  native_System_Object___ctor_ad2798(uVar4,0);
  puVar5 = *(undefined8 **)(_NGUIAtlas___c_TypeInfo_12d7470 + 0xb8);
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



/* NGUIAtlas.<>c$$.ctor @ 0x54cdc0
 * void NGUIAtlas___c___ctor (NGUIAtlas___c_o* __this, const MethodInfo* method); */

/* NGUIAtlas.<>c$$.ctor
   void NGUIAtlas___c___ctor (NGUIAtlas___c_o* __this, const MethodInfo* method); */

void native_NGUIAtlas___c___ctor_54cdc0(void)

{
  return;
}



/* NGUIAtlas.<>c$$<SortAlphabetically>b__25_0 @ 0x54cdc8
 * int32_t NGUIAtlas___c___SortAlphabetically_b__25_0 (NGUIAtlas___c_o* __this, UISpriteData_o* s1, UISpriteData_o* s2, const MethodInfo* method); */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* NGUIAtlas.<>c$$<SortAlphabetically>b__25_0
   int32_t NGUIAtlas___c___SortAlphabetically_b__25_0 (NGUIAtlas___c_o* __this, UISpriteData_o* s1,
   UISpriteData_o* s2, const MethodInfo* method); */

undefined8
native_NGUIAtlas___c___SortAlphabetically_b__25_0_54cdc8
          (undefined8 param_1,long param_2,long param_3)

{
  long lVar1;
  long *plVar2;
  undefined8 uVar3;
  long lVar4;
  
  if (((param_2 == 0) || (param_3 == 0)) || (lVar1 = *(long *)(param_2 + 0x10), lVar1 == 0)) {
                    /* WARNING: Subroutine does not return */
    native_sub_432810();
  }
  lVar4 = *(long *)(param_3 + 0x10);
  if ((bRam000000000134212f & 1) == 0) {
    native_sub_43273c(&System_Globalization_CultureInfo_TypeInfo_12d4068,lVar4,0);
    bRam000000000134212f = 1;
  }
  if (lVar4 != 0) {
    if (((*(byte *)(_System_Globalization_CultureInfo_TypeInfo_12d4068 + 0x133) >> 2 & 1) != 0) &&
       (*(int *)(_System_Globalization_CultureInfo_TypeInfo_12d4068 + 0xe0) == 0)) {
      native_sub_4327ec();
    }
    plVar2 = (long *)native_System_Globalization_CultureInfo__get_CurrentCulture_b2bdb8(0);
    if (plVar2 != (long *)0x0) {
      plVar2 = (long *)(**(code **)(*plVar2 + 0x1f8))(plVar2,*(undefined8 *)(*plVar2 + 0x200));
      if (plVar2 != (long *)0x0) {
                    /* WARNING: Could not recover jumptable at 0x00b0ba6c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
        uVar3 = (**(code **)(*plVar2 + 0x1a8))
                          (plVar2,lVar1,lVar4,0,*(undefined8 *)(*plVar2 + 0x1b0));
        return uVar3;
      }
    }
                    /* WARNING: Subroutine does not return */
    native_sub_432810();
  }
  return 1;
}


