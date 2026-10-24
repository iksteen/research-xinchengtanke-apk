/* ARM64 IL2CPP native pseudocode from Ghidra.
 * Recovered implementation, not original C# source.
 * Function boundaries follow the IL2CPP method address table. */


/* BMGlyph$$GetKerning @ 0xdd1ed4
 * int32_t BMGlyph__GetKerning (BMGlyph_o* __this, int32_t previousChar, const MethodInfo* method); */

/* BMGlyph$$GetKerning
   int32_t BMGlyph__GetKerning (BMGlyph_o* __this, int32_t previousChar, const MethodInfo* method);
    */

undefined4 native_BMGlyph__GetKerning_dd1ed4(long param_1,int param_2)

{
  int iVar1;
  undefined8 uVar2;
  uint uVar3;
  long lVar4;
  
  if ((bRam0000000001346e33 & 1) == 0) {
    native_sub_43273c(&Method_System_Collections_Generic_List_int__get_Count___12dcad0);
    native_sub_43273c(&Method_System_Collections_Generic_List_int__get_Item___12dcad8);
    bRam0000000001346e33 = 1;
  }
  uVar2 = 0;
  if (((param_2 == 0) || (lVar4 = *(long *)(param_1 + 0x38), lVar4 == 0)) ||
     (iVar1 = *(int *)(lVar4 + 0x18), iVar1 < 1)) {
    return 0;
  }
  if (lVar4 != 0) {
    uVar3 = 1;
    do {
      if (*(uint *)(lVar4 + 0x18) <= uVar3 - 1) {
        uVar2 = native_System_ThrowHelper__ThrowArgumentOutOfRangeException_9fe0f4(0);
      }
      if (*(int *)(*(long *)(lVar4 + 0x10) + (long)(int)(uVar3 - 1) * 4 + 0x20) == param_2) {
        lVar4 = *(long *)(param_1 + 0x38);
        if (lVar4 != 0) {
          if (*(uint *)(lVar4 + 0x18) <= uVar3) {
            native_System_ThrowHelper__ThrowArgumentOutOfRangeException_9fe0f4(0);
          }
          return *(undefined4 *)(*(long *)(lVar4 + 0x10) + (long)(int)uVar3 * 4 + 0x20);
        }
        break;
      }
      if (iVar1 <= (int)(uVar3 + 1)) {
        return 0;
      }
      lVar4 = *(long *)(param_1 + 0x38);
      uVar3 = uVar3 + 2;
    } while (lVar4 != 0);
  }
                    /* WARNING: Subroutine does not return */
  native_sub_432810(uVar2);
}



/* BMGlyph$$SetKerning @ 0xdd1fcc
 * void BMGlyph__SetKerning (BMGlyph_o* __this, int32_t previousChar, int32_t amount, const MethodInfo* method); */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* BMGlyph$$SetKerning
   void BMGlyph__SetKerning (BMGlyph_o* __this, int32_t previousChar, int32_t amount, const
   MethodInfo* method); */

void native_BMGlyph__SetKerning_dd1fcc(long param_1,int param_2,undefined4 param_3)

{
  uint uVar1;
  undefined8 uVar2;
  long lVar3;
  long *plVar4;
  uint uVar5;
  long lVar6;
  
  if ((bRam0000000001346e34 & 1) == 0) {
    native_sub_43273c(&Method_System_Collections_Generic_List_int__Add___12dca88);
    native_sub_43273c(&Method_System_Collections_Generic_List_int___ctor___12dca80);
    native_sub_43273c(&Method_System_Collections_Generic_List_int__get_Count___12dcad0);
    native_sub_43273c(&Method_System_Collections_Generic_List_int__get_Item___12dcad8);
    native_sub_43273c(&Method_System_Collections_Generic_List_int__set_Item___12dcae0);
    native_sub_43273c(&System_Collections_Generic_List_int__TypeInfo_12d2aa0);
    bRam0000000001346e34 = 1;
  }
  plVar4 = (long *)(param_1 + 0x38);
  lVar6 = *plVar4;
  if (lVar6 == 0) {
    lVar6 = native_sub_432808(_System_Collections_Generic_List_int__TypeInfo_12d2aa0);
    native_System_Collections_Generic_List_int____ctor_d38324
              (lVar6,_Method_System_Collections_Generic_List_int___ctor___12dca80);
    *plVar4 = lVar6;
    native_sub_4326e0(plVar4,lVar6);
    lVar6 = *plVar4;
    if (lVar6 == 0) goto LAB_00dd20d0;
  }
  uVar5 = 1;
  do {
    uVar1 = uVar5 - 1;
    if ((int)*(uint *)(lVar6 + 0x18) <= (int)uVar1) {
      native_System_Collections_Generic_List_int___Add_d39078
                (lVar6,param_2,_Method_System_Collections_Generic_List_int__Add___12dca88);
      lVar6 = *plVar4;
      if (lVar6 != 0) {
        lVar3 = *(long *)(lVar6 + 0x10);
        if (lVar3 != 0) {
          uVar5 = *(uint *)(lVar6 + 0x18);
          if (uVar5 == *(uint *)(lVar3 + 0x18)) {
            (*(code *)**(undefined8 **)
                        (*(long *)(*(long *)(
                                            _Method_System_Collections_Generic_List_int__Add___12dca88
                                            + 0x18) + 0xc0) + 0x60))(lVar6,uVar5 + 1);
            uVar5 = *(uint *)(lVar6 + 0x18);
            lVar3 = *(long *)(lVar6 + 0x10);
            *(uint *)(lVar6 + 0x18) = uVar5 + 1;
            if (lVar3 == 0) goto code_r0x00d390d4;
          }
          else {
            *(uint *)(lVar6 + 0x18) = uVar5 + 1;
          }
          if (uVar5 < *(uint *)(lVar3 + 0x18)) {
            *(undefined4 *)(lVar3 + (long)(int)uVar5 * 4 + 0x20) = param_3;
            *(int *)(lVar6 + 0x1c) = *(int *)(lVar6 + 0x1c) + 1;
            return;
          }
          uVar2 = native_sub_43283c();
                    /* WARNING: Subroutine does not return */
          native_sub_4327dc(uVar2,0);
        }
code_r0x00d390d4:
                    /* WARNING: Subroutine does not return */
        native_sub_432810();
      }
      break;
    }
    if (*(uint *)(lVar6 + 0x18) <= uVar1) {
      native_System_ThrowHelper__ThrowArgumentOutOfRangeException_9fe0f4(0);
    }
    if (*(int *)(*(long *)(lVar6 + 0x10) + (long)(int)uVar1 * 4 + 0x20) == param_2) {
      lVar6 = *plVar4;
      if (lVar6 != 0) {
        if (*(uint *)(lVar6 + 0x18) <= uVar5) {
          native_System_ThrowHelper__ThrowArgumentOutOfRangeException_9fe0f4
                    (0,uVar5,param_3,_Method_System_Collections_Generic_List_int__set_Item___12dcae0
                    );
        }
        lVar3 = *(long *)(lVar6 + 0x10);
        if (lVar3 != 0) {
          if (uVar5 < *(uint *)(lVar3 + 0x18)) {
            *(undefined4 *)(lVar3 + (long)(int)uVar5 * 4 + 0x20) = param_3;
            *(int *)(lVar6 + 0x1c) = *(int *)(lVar6 + 0x1c) + 1;
            return;
          }
          uVar2 = native_sub_43283c();
                    /* WARNING: Subroutine does not return */
          native_sub_4327dc(uVar2,0);
        }
                    /* WARNING: Subroutine does not return */
        native_sub_432810();
      }
      break;
    }
    lVar6 = *plVar4;
    uVar5 = uVar5 + 2;
  } while (lVar6 != 0);
LAB_00dd20d0:
                    /* WARNING: Subroutine does not return */
  native_sub_432810();
}



/* BMGlyph$$Trim @ 0xdd1d70
 * void BMGlyph__Trim (BMGlyph_o* __this, int32_t xMin, int32_t yMin, int32_t xMax, int32_t yMax, const MethodInfo* method); */

/* BMGlyph$$Trim
   void BMGlyph__Trim (BMGlyph_o* __this, int32_t xMin, int32_t yMin, int32_t xMax, int32_t yMax,
   const MethodInfo* method); */

void native_BMGlyph__Trim_dd1d70(long param_1,int param_2,int param_3,int param_4,int param_5)

{
  int iVar1;
  int iVar2;
  int iVar3;
  int iVar4;
  int iVar5;
  int iVar6;
  
  iVar1 = *(int *)(param_1 + 0x14);
  iVar3 = *(int *)(param_1 + 0x18);
  iVar2 = *(int *)(param_1 + 0x1c);
  iVar4 = *(int *)(param_1 + 0x20);
  iVar5 = iVar2;
  if (iVar1 < param_2) {
    iVar5 = iVar2 - (param_2 - iVar1);
    *(int *)(param_1 + 0x14) = param_2;
    *(int *)(param_1 + 0x1c) = iVar5;
    *(int *)(param_1 + 0x24) = *(int *)(param_1 + 0x24) + (param_2 - iVar1);
  }
  iVar6 = iVar4;
  if (iVar3 < param_3) {
    iVar6 = iVar4 - (param_3 - iVar3);
    *(int *)(param_1 + 0x18) = param_3;
    *(int *)(param_1 + 0x20) = iVar6;
    *(int *)(param_1 + 0x28) = *(int *)(param_1 + 0x28) + (param_3 - iVar3);
  }
  if (param_4 < iVar2 + iVar1) {
    *(int *)(param_1 + 0x1c) = (param_4 - (iVar2 + iVar1)) + iVar5;
  }
  if (param_5 < iVar4 + iVar3) {
    *(int *)(param_1 + 0x20) = (param_5 - (iVar4 + iVar3)) + iVar6;
  }
  return;
}



/* BMGlyph$$.ctor @ 0xdd1c04
 * void BMGlyph___ctor (BMGlyph_o* __this, const MethodInfo* method); */

/* BMGlyph$$.ctor
   void BMGlyph___ctor (BMGlyph_o* __this, const MethodInfo* method); */

void native_BMGlyph___ctor_dd1c04(void)

{
  return;
}


