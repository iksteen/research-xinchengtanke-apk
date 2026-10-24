/* ARM64 IL2CPP native pseudocode from Ghidra.
 * Recovered implementation, not original C# source.
 * Function boundaries follow the IL2CPP method address table. */


/* UIAtlas.<>c$$.cctor @ 0x54f498
 * void UIAtlas___c___cctor (const MethodInfo* method); */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* UIAtlas.<>c$$.cctor
   void UIAtlas___c___cctor (const MethodInfo* method); */

void native_UIAtlas___c___cctor_54f498(void)

{
  ulong *puVar1;
  char cVar2;
  bool bVar3;
  undefined8 uVar4;
  undefined8 *puVar5;
  
  if ((bRam000000000133e9e7 & 1) == 0) {
    native_sub_43273c(&UIAtlas___c_TypeInfo_12d79d0);
    bRam000000000133e9e7 = 1;
  }
  uVar4 = native_sub_432808(_UIAtlas___c_TypeInfo_12d79d0);
  native_System_Object___ctor_ad2798(uVar4,0);
  puVar5 = *(undefined8 **)(_UIAtlas___c_TypeInfo_12d79d0 + 0xb8);
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



/* UIAtlas.<>c$$.ctor @ 0x54f4fc
 * void UIAtlas___c___ctor (UIAtlas___c_o* __this, const MethodInfo* method); */

/* UIAtlas.<>c$$.ctor
   void UIAtlas___c___ctor (UIAtlas___c_o* __this, const MethodInfo* method); */

void native_UIAtlas___c___ctor_54f4fc(void)

{
  return;
}



/* UIAtlas.<>c$$<SortAlphabetically>b__28_0 @ 0x54f504
 * int32_t UIAtlas___c___SortAlphabetically_b__28_0 (UIAtlas___c_o* __this, UISpriteData_o* s1, UISpriteData_o* s2, const MethodInfo* method); */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* UIAtlas.<>c$$<SortAlphabetically>b__28_0
   int32_t UIAtlas___c___SortAlphabetically_b__28_0 (UIAtlas___c_o* __this, UISpriteData_o* s1,
   UISpriteData_o* s2, const MethodInfo* method); */

undefined8
native_UIAtlas___c___SortAlphabetically_b__28_0_54f504(undefined8 param_1,long param_2,long param_3)

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


