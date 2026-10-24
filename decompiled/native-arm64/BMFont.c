/* ARM64 IL2CPP native pseudocode from Ghidra.
 * Recovered implementation, not original C# source.
 * Function boundaries follow the IL2CPP method address table. */


/* BMFont$$get_isValid @ 0xdd1930
 * bool BMFont__get_isValid (BMFont_o* __this, const MethodInfo* method); */

/* BMFont$$get_isValid
   bool BMFont__get_isValid (BMFont_o* __this, const MethodInfo* method); */

bool native_BMFont__get_isValid_dd1930(long param_1)

{
  if ((bRam0000000001346e2d & 1) == 0) {
    native_sub_43273c(&Method_System_Collections_Generic_List_BMGlyph__get_Count___12dc550);
    bRam0000000001346e2d = 1;
  }
  if (*(long *)(param_1 + 0x28) != 0) {
    return 0 < *(int *)(*(long *)(param_1 + 0x28) + 0x18);
  }
                    /* WARNING: Subroutine does not return */
  native_sub_432810();
}



/* BMFont$$get_charSize @ 0xdd1984
 * int32_t BMFont__get_charSize (BMFont_o* __this, const MethodInfo* method); */

/* BMFont$$get_charSize
   int32_t BMFont__get_charSize (BMFont_o* __this, const MethodInfo* method); */

undefined4 native_BMFont__get_charSize_dd1984(long param_1)

{
  return *(undefined4 *)(param_1 + 0x10);
}



/* BMFont$$set_charSize @ 0xdd198c
 * void BMFont__set_charSize (BMFont_o* __this, int32_t value, const MethodInfo* method); */

/* BMFont$$set_charSize
   void BMFont__set_charSize (BMFont_o* __this, int32_t value, const MethodInfo* method); */

void native_BMFont__set_charSize_dd198c(long param_1,undefined4 param_2)

{
  *(undefined4 *)(param_1 + 0x10) = param_2;
  return;
}



/* BMFont$$get_baseOffset @ 0xdd1994
 * int32_t BMFont__get_baseOffset (BMFont_o* __this, const MethodInfo* method); */

/* BMFont$$get_baseOffset
   int32_t BMFont__get_baseOffset (BMFont_o* __this, const MethodInfo* method); */

undefined4 native_BMFont__get_baseOffset_dd1994(long param_1)

{
  return *(undefined4 *)(param_1 + 0x14);
}



/* BMFont$$set_baseOffset @ 0xdd199c
 * void BMFont__set_baseOffset (BMFont_o* __this, int32_t value, const MethodInfo* method); */

/* BMFont$$set_baseOffset
   void BMFont__set_baseOffset (BMFont_o* __this, int32_t value, const MethodInfo* method); */

void native_BMFont__set_baseOffset_dd199c(long param_1,undefined4 param_2)

{
  *(undefined4 *)(param_1 + 0x14) = param_2;
  return;
}



/* BMFont$$get_texWidth @ 0xdd19a4
 * int32_t BMFont__get_texWidth (BMFont_o* __this, const MethodInfo* method); */

/* BMFont$$get_texWidth
   int32_t BMFont__get_texWidth (BMFont_o* __this, const MethodInfo* method); */

undefined4 native_BMFont__get_texWidth_dd19a4(long param_1)

{
  return *(undefined4 *)(param_1 + 0x18);
}



/* BMFont$$set_texWidth @ 0xdd19ac
 * void BMFont__set_texWidth (BMFont_o* __this, int32_t value, const MethodInfo* method); */

/* BMFont$$set_texWidth
   void BMFont__set_texWidth (BMFont_o* __this, int32_t value, const MethodInfo* method); */

void native_BMFont__set_texWidth_dd19ac(long param_1,undefined4 param_2)

{
  *(undefined4 *)(param_1 + 0x18) = param_2;
  return;
}



/* BMFont$$get_texHeight @ 0xdd19b4
 * int32_t BMFont__get_texHeight (BMFont_o* __this, const MethodInfo* method); */

/* BMFont$$get_texHeight
   int32_t BMFont__get_texHeight (BMFont_o* __this, const MethodInfo* method); */

undefined4 native_BMFont__get_texHeight_dd19b4(long param_1)

{
  return *(undefined4 *)(param_1 + 0x1c);
}



/* BMFont$$set_texHeight @ 0xdd19bc
 * void BMFont__set_texHeight (BMFont_o* __this, int32_t value, const MethodInfo* method); */

/* BMFont$$set_texHeight
   void BMFont__set_texHeight (BMFont_o* __this, int32_t value, const MethodInfo* method); */

void native_BMFont__set_texHeight_dd19bc(long param_1,undefined4 param_2)

{
  *(undefined4 *)(param_1 + 0x1c) = param_2;
  return;
}



/* BMFont$$get_glyphCount @ 0xdd19c4
 * int32_t BMFont__get_glyphCount (BMFont_o* __this, const MethodInfo* method); */

/* BMFont$$get_glyphCount
   int32_t BMFont__get_glyphCount (BMFont_o* __this, const MethodInfo* method); */

undefined4 native_BMFont__get_glyphCount_dd19c4(long param_1)

{
  undefined4 uVar1;
  ulong uVar2;
  
  if ((bRam0000000001346e2e & 1) == 0) {
    native_sub_43273c(&Method_System_Collections_Generic_List_BMGlyph__get_Count___12dc550);
    bRam0000000001346e2e = 1;
  }
  uVar2 = native_BMFont__get_isValid_dd1930(param_1);
  if ((uVar2 & 1) == 0) {
    uVar1 = 0;
  }
  else {
    if (*(long *)(param_1 + 0x28) == 0) {
                    /* WARNING: Subroutine does not return */
      native_sub_432810();
    }
    uVar1 = *(undefined4 *)(*(long *)(param_1 + 0x28) + 0x18);
  }
  return uVar1;
}



/* BMFont$$get_spriteName @ 0xdd1a24
 * System_String_o* BMFont__get_spriteName (BMFont_o* __this, const MethodInfo* method); */

/* BMFont$$get_spriteName
   System_String_o* BMFont__get_spriteName (BMFont_o* __this, const MethodInfo* method); */

undefined8 native_BMFont__get_spriteName_dd1a24(long param_1)

{
  return *(undefined8 *)(param_1 + 0x20);
}



/* BMFont$$set_spriteName @ 0xdd1a2c
 * void BMFont__set_spriteName (BMFont_o* __this, System_String_o* value, const MethodInfo* method); */

/* BMFont$$set_spriteName
   void BMFont__set_spriteName (BMFont_o* __this, System_String_o* value, const MethodInfo* method);
    */

void native_BMFont__set_spriteName_dd1a2c(long param_1,undefined8 param_2)

{
  ulong *puVar1;
  char cVar2;
  bool bVar3;
  undefined8 *puVar4;
  
  puVar4 = (undefined8 *)(param_1 + 0x20);
  *puVar4 = param_2;
  if (iRam0000000001345318 != 0) {
    puVar1 = (ulong *)(((ulong)puVar4 >> 0x12 & 0x7fff) * 8 + 0x138ecd8);
    do {
      cVar2 = '\x01';
      bVar3 = (bool)ExclusiveMonitorPass(puVar1,0x10);
      if (bVar3) {
        *puVar1 = *puVar1 | 1L << ((ulong)puVar4 >> 0xc & 0x3f);
        cVar2 = ExclusiveMonitorsStatus();
      }
    } while (cVar2 != '\0');
  }
  return;
}



/* BMFont$$get_glyphs @ 0xdd1a34
 * System_Collections_Generic_List_BMGlyph__o* BMFont__get_glyphs (BMFont_o* __this, const MethodInfo* method); */

/* BMFont$$get_glyphs
   System_Collections_Generic_List_BMGlyph__o* BMFont__get_glyphs (BMFont_o* __this, const
   MethodInfo* method); */

undefined8 native_BMFont__get_glyphs_dd1a34(long param_1)

{
  return *(undefined8 *)(param_1 + 0x28);
}



/* BMFont$$GetGlyph @ 0xdd1a3c
 * BMGlyph_o* BMFont__GetGlyph (BMFont_o* __this, int32_t index, bool createIfMissing, const MethodInfo* method); */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* BMFont$$GetGlyph
   BMGlyph_o* BMFont__GetGlyph (BMFont_o* __this, int32_t index, bool createIfMissing, const
   MethodInfo* method); */

long native_BMFont__GetGlyph_dd1a3c(long param_1,undefined4 param_2,ulong param_3)

{
  int iVar1;
  ulong uVar2;
  uint uVar3;
  long lVar4;
  long lStack_48;
  
  if ((bRam0000000001346e2f & 1) == 0) {
    native_sub_43273c(&BMGlyph_TypeInfo_12d3aa8);
    native_sub_43273c(&Method_System_Collections_Generic_Dictionary_int__BMGlyph__Add___12d8fe0);
    native_sub_43273c(&
                      Method_System_Collections_Generic_Dictionary_int__BMGlyph__TryGetValue___12d8ff0
                     );
    native_sub_43273c(&
                      Method_System_Collections_Generic_Dictionary_int__BMGlyph__get_Count___12d8ff8
                     );
    native_sub_43273c(&Method_System_Collections_Generic_List_BMGlyph__Add___12dc538);
    native_sub_43273c(&Method_System_Collections_Generic_List_BMGlyph__get_Count___12dc550);
    native_sub_43273c(&Method_System_Collections_Generic_List_BMGlyph__get_Item___12dc558);
    bRam0000000001346e2f = 1;
  }
  lStack_48 = 0;
  if (*(long *)(param_1 + 0x30) == 0) goto LAB_00dd1c00;
  iVar1 = native_System_Collections_Generic_Dictionary_int__BMGlyph___get_Count_c2036c
                    (*(long *)(param_1 + 0x30),
                     _Method_System_Collections_Generic_Dictionary_int__BMGlyph__get_Count___12d8ff8
                    );
  if (iVar1 == 0) {
    lVar4 = *(long *)(param_1 + 0x28);
    if (lVar4 == 0) goto LAB_00dd1c00;
    iVar1 = *(int *)(lVar4 + 0x18);
    if (0 < iVar1) {
      uVar3 = 0;
      do {
        if (*(uint *)(lVar4 + 0x18) <= uVar3) {
          native_System_ThrowHelper__ThrowArgumentOutOfRangeException_9fe0f4(0);
        }
        lVar4 = *(long *)(*(long *)(lVar4 + 0x10) + (long)(int)uVar3 * 8 + 0x20);
        if ((lVar4 == 0) || (*(long *)(param_1 + 0x30) == 0)) break;
        native_System_Collections_Generic_Dictionary_int__BMGlyph___Add_c205d8
                  (*(long *)(param_1 + 0x30),*(undefined4 *)(lVar4 + 0x10),lVar4,
                   _Method_System_Collections_Generic_Dictionary_int__BMGlyph__Add___12d8fe0);
        uVar3 = uVar3 + 1;
        if (iVar1 <= (int)uVar3) goto LAB_00dd1b58;
        lVar4 = *(long *)(param_1 + 0x28);
      } while (lVar4 != 0);
      goto LAB_00dd1c00;
    }
  }
LAB_00dd1b58:
  if (*(long *)(param_1 + 0x30) != 0) {
    uVar2 = native_System_Collections_Generic_Dictionary_int__BMGlyph___TryGetValue_c222fc
                      (*(long *)(param_1 + 0x30),param_2,&lStack_48,
                       _Method_System_Collections_Generic_Dictionary_int__BMGlyph__TryGetValue___12d8ff0
                      );
    if (((uVar2 & 1) != 0) || ((param_3 & 1) == 0)) {
      return lStack_48;
    }
    lVar4 = native_sub_432808(_BMGlyph_TypeInfo_12d3aa8);
    native_System_Object___ctor_ad2798(lVar4,0);
    lStack_48 = lVar4;
    if (lVar4 != 0) {
      *(undefined4 *)(lVar4 + 0x10) = param_2;
      if (*(long *)(param_1 + 0x28) != 0) {
        native_System_Collections_Generic_List_int_____Add_d40c00
                  (*(long *)(param_1 + 0x28),lVar4,
                   _Method_System_Collections_Generic_List_BMGlyph__Add___12dc538);
        if (*(long *)(param_1 + 0x30) != 0) {
          native_System_Collections_Generic_Dictionary_int__BMGlyph___Add_c205d8
                    (*(long *)(param_1 + 0x30),param_2,lStack_48,
                     _Method_System_Collections_Generic_Dictionary_int__BMGlyph__Add___12d8fe0);
          return lStack_48;
        }
      }
    }
  }
LAB_00dd1c00:
                    /* WARNING: Subroutine does not return */
  native_sub_432810();
}



/* BMFont$$GetGlyph @ 0xdd1c0c
 * BMGlyph_o* BMFont__GetGlyph (BMFont_o* __this, int32_t index, const MethodInfo* method); */

/* WARNING: Removing unreachable block (ram,0x00dd1b80) */
/* WARNING: Removing unreachable block (ram,0x00dd1ba4) */
/* WARNING: Removing unreachable block (ram,0x00dd1bb0) */
/* WARNING: Removing unreachable block (ram,0x00dd1bcc) */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* BMFont$$GetGlyph
   BMGlyph_o* BMFont__GetGlyph (BMFont_o* __this, int32_t index, const MethodInfo* method); */

undefined8 native_BMFont__GetGlyph_dd1c0c(long param_1,undefined4 param_2)

{
  int iVar1;
  uint uVar2;
  long lVar3;
  undefined8 uStack_48;
  
  if ((bRam0000000001346e2f & 1) == 0) {
    native_sub_43273c(&BMGlyph_TypeInfo_12d3aa8);
    native_sub_43273c(&Method_System_Collections_Generic_Dictionary_int__BMGlyph__Add___12d8fe0);
    native_sub_43273c(&
                      Method_System_Collections_Generic_Dictionary_int__BMGlyph__TryGetValue___12d8ff0
                     );
    native_sub_43273c(&
                      Method_System_Collections_Generic_Dictionary_int__BMGlyph__get_Count___12d8ff8
                     );
    native_sub_43273c(&Method_System_Collections_Generic_List_BMGlyph__Add___12dc538);
    native_sub_43273c(&Method_System_Collections_Generic_List_BMGlyph__get_Count___12dc550);
    native_sub_43273c(&Method_System_Collections_Generic_List_BMGlyph__get_Item___12dc558);
    bRam0000000001346e2f = 1;
  }
  uStack_48 = 0;
  if (*(long *)(param_1 + 0x30) == 0) goto LAB_00dd1c00;
  iVar1 = native_System_Collections_Generic_Dictionary_int__BMGlyph___get_Count_c2036c
                    (*(long *)(param_1 + 0x30),
                     _Method_System_Collections_Generic_Dictionary_int__BMGlyph__get_Count___12d8ff8
                    );
  if (iVar1 == 0) {
    lVar3 = *(long *)(param_1 + 0x28);
    if (lVar3 == 0) goto LAB_00dd1c00;
    iVar1 = *(int *)(lVar3 + 0x18);
    if (0 < iVar1) {
      uVar2 = 0;
      do {
        if (*(uint *)(lVar3 + 0x18) <= uVar2) {
          native_System_ThrowHelper__ThrowArgumentOutOfRangeException_9fe0f4(0);
        }
        lVar3 = *(long *)(*(long *)(lVar3 + 0x10) + (long)(int)uVar2 * 8 + 0x20);
        if ((lVar3 == 0) || (*(long *)(param_1 + 0x30) == 0)) break;
        native_System_Collections_Generic_Dictionary_int__BMGlyph___Add_c205d8
                  (*(long *)(param_1 + 0x30),*(undefined4 *)(lVar3 + 0x10),lVar3,
                   _Method_System_Collections_Generic_Dictionary_int__BMGlyph__Add___12d8fe0);
        uVar2 = uVar2 + 1;
        if (iVar1 <= (int)uVar2) goto LAB_00dd1b58;
        lVar3 = *(long *)(param_1 + 0x28);
      } while (lVar3 != 0);
      goto LAB_00dd1c00;
    }
  }
LAB_00dd1b58:
  if (*(long *)(param_1 + 0x30) != 0) {
    native_System_Collections_Generic_Dictionary_int__BMGlyph___TryGetValue_c222fc
              (*(long *)(param_1 + 0x30),param_2,&uStack_48,
               _Method_System_Collections_Generic_Dictionary_int__BMGlyph__TryGetValue___12d8ff0);
    return uStack_48;
  }
LAB_00dd1c00:
                    /* WARNING: Subroutine does not return */
  native_sub_432810();
}



/* BMFont$$Clear @ 0xdd1c14
 * void BMFont__Clear (BMFont_o* __this, const MethodInfo* method); */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* BMFont$$Clear
   void BMFont__Clear (BMFont_o* __this, const MethodInfo* method); */

void native_BMFont__Clear_dd1c14(long param_1)

{
  long lVar1;
  
  if ((bRam0000000001346e30 & 1) == 0) {
    native_sub_43273c(&Method_System_Collections_Generic_Dictionary_int__BMGlyph__Clear___12d8fe8);
    native_sub_43273c(&Method_System_Collections_Generic_List_BMGlyph__Clear___12dc540);
    bRam0000000001346e30 = 1;
  }
  if (*(long *)(param_1 + 0x30) != 0) {
    native_System_Collections_Generic_Dictionary_int__BMGlyph___Clear_c207b4
              (*(long *)(param_1 + 0x30),
               _Method_System_Collections_Generic_Dictionary_int__BMGlyph__Clear___12d8fe8);
    lVar1 = *(long *)(param_1 + 0x28);
    if (lVar1 != 0) {
      if (0 < *(int *)(lVar1 + 0x18)) {
        native_System_Array__Clear_95191c(*(undefined8 *)(lVar1 + 0x10),0,*(int *)(lVar1 + 0x18),0);
        *(undefined4 *)(lVar1 + 0x18) = 0;
      }
      *(int *)(lVar1 + 0x1c) = *(int *)(lVar1 + 0x1c) + 1;
      return;
    }
  }
                    /* WARNING: Subroutine does not return */
  native_sub_432810();
}



/* BMFont$$Trim @ 0xdd1c8c
 * void BMFont__Trim (BMFont_o* __this, int32_t xMin, int32_t yMin, int32_t xMax, int32_t yMax, const MethodInfo* method); */

/* BMFont$$Trim
   void BMFont__Trim (BMFont_o* __this, int32_t xMin, int32_t yMin, int32_t xMax, int32_t yMax,
   const MethodInfo* method); */

void native_BMFont__Trim_dd1c8c
               (long param_1,undefined4 param_2,undefined4 param_3,undefined4 param_4,
               undefined4 param_5)

{
  int iVar1;
  ulong uVar2;
  long lVar3;
  
  if ((bRam0000000001346e31 & 1) == 0) {
    native_sub_43273c(&Method_System_Collections_Generic_List_BMGlyph__get_Count___12dc550);
    native_sub_43273c(&Method_System_Collections_Generic_List_BMGlyph__get_Item___12dc558);
    bRam0000000001346e31 = 1;
  }
  uVar2 = native_BMFont__get_isValid_dd1930(param_1);
  if ((uVar2 & 1) == 0) {
    return;
  }
  lVar3 = *(long *)(param_1 + 0x28);
  if (lVar3 != 0) {
    iVar1 = *(int *)(lVar3 + 0x18);
    if (iVar1 < 1) {
      return;
    }
    uVar2 = 0;
    do {
      if (*(uint *)(lVar3 + 0x18) <= uVar2) {
        native_System_ThrowHelper__ThrowArgumentOutOfRangeException_9fe0f4(0);
      }
      lVar3 = *(long *)(*(long *)(lVar3 + 0x10) + uVar2 * 8 + 0x20);
      if (lVar3 != 0) {
        native_BMGlyph__Trim_dd1d70(lVar3,param_2,param_3,param_4,param_5);
      }
      uVar2 = uVar2 + 1;
      if ((long)iVar1 <= (long)uVar2) {
        return;
      }
      lVar3 = *(long *)(param_1 + 0x28);
    } while (lVar3 != 0);
  }
                    /* WARNING: Subroutine does not return */
  native_sub_432810();
}



/* BMFont$$.ctor @ 0xdd1dfc
 * void BMFont___ctor (BMFont_o* __this, const MethodInfo* method); */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* BMFont$$.ctor
   void BMFont___ctor (BMFont_o* __this, const MethodInfo* method); */

undefined1  [16] native_BMFont___ctor_dd1dfc(ulong param_1)

{
  undefined8 uVar1;
  undefined1 auVar2 [16];
  
  if ((bRam0000000001346e32 & 1) == 0) {
    native_sub_43273c(&Method_System_Collections_Generic_Dictionary_int__BMGlyph___ctor___12d8fd8);
    native_sub_43273c(&System_Collections_Generic_Dictionary_int__BMGlyph__TypeInfo_12d22b0);
    native_sub_43273c(&Method_System_Collections_Generic_List_BMGlyph___ctor___12dc530);
    native_sub_43273c(&System_Collections_Generic_List_BMGlyph__TypeInfo_12d29b0);
    bRam0000000001346e32 = 1;
  }
  *(undefined4 *)(param_1 + 0x10) = 0x10;
  uVar1 = native_sub_432808(_System_Collections_Generic_List_BMGlyph__TypeInfo_12d29b0);
  native_System_Collections_Generic_List_XmlEventCache_XmlEvent______ctor_d3ff44
            (uVar1,_Method_System_Collections_Generic_List_BMGlyph___ctor___12dc530);
  *(undefined8 *)(param_1 + 0x28) = uVar1;
  native_sub_4326e0(param_1 + 0x28,uVar1);
  uVar1 = native_sub_432808(_System_Collections_Generic_Dictionary_int__BMGlyph__TypeInfo_12d22b0);
  native_System_Collections_Generic_Dictionary_int__BMGlyph____ctor_c200f4
            (uVar1,_Method_System_Collections_Generic_Dictionary_int__BMGlyph___ctor___12d8fd8);
  *(undefined8 *)(param_1 + 0x30) = uVar1;
  native_sub_4326e0(param_1 + 0x30,uVar1);
  auVar2._8_8_ = 0;
  auVar2._0_8_ = param_1;
  return auVar2;
}


