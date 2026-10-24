/* ARM64 IL2CPP native pseudocode from Ghidra.
 * Recovered implementation, not original C# source.
 * Function boundaries follow the IL2CPP method address table. */


/* ByteReader$$.ctor @ 0xdd35dc
 * void ByteReader___ctor (ByteReader_o* __this, System_Byte_array* bytes, const MethodInfo* method); */

/* ByteReader$$.ctor
   void ByteReader___ctor (ByteReader_o* __this, System_Byte_array* bytes, const MethodInfo*
   method); */

void native_ByteReader___ctor_dd35dc(long param_1,undefined8 param_2)

{
  ulong *puVar1;
  char cVar2;
  bool bVar3;
  undefined8 *puVar4;
  
  native_System_Object___ctor_ad2798(param_1,0);
  puVar4 = (undefined8 *)(param_1 + 0x10);
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



/* ByteReader$$.ctor @ 0xdd3610
 * void ByteReader___ctor (ByteReader_o* __this, UnityEngine_TextAsset_o* asset, const MethodInfo* method); */

/* ByteReader$$.ctor
   void ByteReader___ctor (ByteReader_o* __this, UnityEngine_TextAsset_o* asset, const MethodInfo*
   method); */

void native_ByteReader___ctor_dd3610(long param_1,long param_2)

{
  ulong *puVar1;
  char cVar2;
  bool bVar3;
  undefined8 uVar4;
  undefined8 *puVar5;
  
  native_System_Object___ctor_ad2798(param_1,0);
  if (param_2 != 0) {
    uVar4 = native_UnityEngine_TextAsset__get_bytes_76e27c(param_2,0);
    puVar5 = (undefined8 *)(param_1 + 0x10);
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
                    /* WARNING: Subroutine does not return */
  native_sub_432810();
}



/* ByteReader$$Open @ 0xdd3658
 * ByteReader_o* ByteReader__Open (System_String_o* path, const MethodInfo* method); */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* ByteReader$$Open
   ByteReader_o* ByteReader__Open (System_String_o* path, const MethodInfo* method); */

long native_ByteReader__Open_dd3658(undefined8 param_1)

{
  long *plVar1;
  undefined8 uVar2;
  long lVar3;
  long lVar4;
  
  if ((bRam0000000001346e3d & 1) == 0) {
    native_sub_43273c(&Method_ByteReader_Open___12e2598);
    native_sub_43273c(&ByteReader_TypeInfo_12d3c30);
    native_sub_43273c(&byte___TypeInfo_12d3060);
    bRam0000000001346e3d = 1;
  }
  plVar1 = (long *)native_System_IO_File__OpenRead_bf7298(param_1,0);
  lVar4 = 0;
  if (plVar1 != (long *)0x0) {
    (**(code **)(*plVar1 + 0x2c8))(plVar1,0,2,*(undefined8 *)(*plVar1 + 0x2d0));
    uVar2 = (**(code **)(*plVar1 + 0x1e8))(plVar1,*(undefined8 *)(*plVar1 + 0x1f0));
    lVar3 = native_sub_432750(_byte___TypeInfo_12d3060,uVar2);
    (**(code **)(*plVar1 + 0x2c8))(plVar1,0,0,*(undefined8 *)(*plVar1 + 0x2d0));
    if (lVar3 == 0) {
                    /* WARNING: Subroutine does not return */
      native_sub_432810();
    }
    (**(code **)(*plVar1 + 0x2d8))
              (plVar1,lVar3,0,*(undefined4 *)(lVar3 + 0x18),*(undefined8 *)(*plVar1 + 0x2e0));
    (**(code **)(*plVar1 + 0x238))(plVar1,*(undefined8 *)(*plVar1 + 0x240));
    lVar4 = native_sub_432808(_ByteReader_TypeInfo_12d3c30);
    native_System_Object___ctor_ad2798(lVar4,0);
    *(long *)(lVar4 + 0x10) = lVar3;
    native_sub_4326e0((long *)(lVar4 + 0x10),lVar3);
  }
  return lVar4;
}



/* ByteReader$$get_canRead @ 0xdd3790
 * bool ByteReader__get_canRead (ByteReader_o* __this, const MethodInfo* method); */

/* ByteReader$$get_canRead
   bool ByteReader__get_canRead (ByteReader_o* __this, const MethodInfo* method); */

bool native_ByteReader__get_canRead_dd3790(long param_1)

{
  if (*(long *)(param_1 + 0x10) != 0) {
    return *(int *)(param_1 + 0x18) < *(int *)(*(long *)(param_1 + 0x10) + 0x18);
  }
  return false;
}



/* ByteReader$$ReadLine @ 0xdd37b4
 * System_String_o* ByteReader__ReadLine (System_Byte_array* buffer, int32_t start, int32_t count, const MethodInfo* method); */

/* ByteReader$$ReadLine
   System_String_o* ByteReader__ReadLine (System_Byte_array* buffer, int32_t start, int32_t count,
   const MethodInfo* method); */

void native_ByteReader__ReadLine_dd37b4(undefined8 param_1,undefined4 param_2,undefined4 param_3)

{
  long *plVar1;
  
  plVar1 = (long *)native_System_Text_Encoding__get_UTF8_a76aec(0);
  if (plVar1 != (long *)0x0) {
                    /* WARNING: Could not recover jumptable at 0x00dd3800. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (**(code **)(*plVar1 + 0x348))(plVar1,param_1,param_2,param_3,*(undefined8 *)(*plVar1 + 0x350));
    return;
  }
                    /* WARNING: Subroutine does not return */
  native_sub_432810();
}



/* ByteReader$$ReadLine @ 0xdd3808
 * System_String_o* ByteReader__ReadLine (ByteReader_o* __this, const MethodInfo* method); */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* ByteReader$$ReadLine
   System_String_o* ByteReader__ReadLine (ByteReader_o* __this, const MethodInfo* method); */

undefined8 native_ByteReader__ReadLine_dd3808(long param_1)

{
  char cVar1;
  ulong uVar2;
  undefined8 uVar3;
  uint uVar4;
  ulong uVar5;
  long lVar6;
  uint uVar7;
  
  if ((bRam0000000001346e3e & 1) == 0) {
    native_sub_43273c(&ByteReader_TypeInfo_12d3c30);
    bRam0000000001346e3e = 1;
  }
  lVar6 = *(long *)(param_1 + 0x10);
  if (lVar6 == 0) {
                    /* WARNING: Subroutine does not return */
    native_sub_432810();
  }
  uVar4 = *(uint *)(param_1 + 0x18);
  uVar7 = (uint)*(undefined8 *)(lVar6 + 0x18);
  if ((int)uVar4 < (int)uVar7) {
    if (uVar4 < uVar7) {
      do {
        if (0x1f < *(byte *)(lVar6 + (int)uVar4 + 0x20)) goto LAB_00dd38a0;
        uVar4 = uVar4 + 1;
        *(uint *)(param_1 + 0x18) = uVar4;
        if ((int)uVar7 <= (int)uVar4) goto LAB_00dd38a0;
      } while (uVar4 < *(uint *)(lVar6 + 0x18));
    }
LAB_00dd3950:
    uVar3 = native_sub_43283c();
                    /* WARNING: Subroutine does not return */
    native_sub_4327dc(uVar3,0);
  }
LAB_00dd38a0:
  if ((int)uVar4 < (int)uVar7) {
    uVar2 = 0;
    while (uVar5 = uVar2, (long)((long)(int)uVar4 + uVar5) < (long)(int)uVar7) {
      if (*(uint *)(lVar6 + 0x18) <= uVar4 + (int)uVar5) goto LAB_00dd3950;
      cVar1 = *(char *)(lVar6 + (int)uVar4 + uVar5 + 0x20);
      if ((cVar1 == '\r') || (uVar2 = uVar5 + 1, cVar1 == '\n')) break;
    }
    uVar7 = uVar4 + (int)uVar5 + 1;
    if (((*(byte *)(_ByteReader_TypeInfo_12d3c30 + 0x133) >> 2 & 1) != 0) &&
       (*(int *)(_ByteReader_TypeInfo_12d3c30 + 0xe0) == 0)) {
      native_sub_4327ec();
    }
    uVar3 = native_ByteReader__ReadLine_dd37b4(lVar6,uVar4,uVar5 & 0xffffffff);
  }
  else {
    uVar3 = 0;
  }
  *(uint *)(param_1 + 0x18) = uVar7;
  return uVar3;
}



/* ByteReader$$ReadLine @ 0xdd3810
 * System_String_o* ByteReader__ReadLine (ByteReader_o* __this, bool skipEmptyLines, const MethodInfo* method); */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* ByteReader$$ReadLine
   System_String_o* ByteReader__ReadLine (ByteReader_o* __this, bool skipEmptyLines, const
   MethodInfo* method); */

undefined8 native_ByteReader__ReadLine_dd3810(long param_1,ulong param_2)

{
  char cVar1;
  ulong uVar2;
  undefined8 uVar3;
  uint uVar4;
  ulong uVar5;
  long lVar6;
  uint uVar7;
  
  if ((bRam0000000001346e3e & 1) == 0) {
    native_sub_43273c(&ByteReader_TypeInfo_12d3c30);
    bRam0000000001346e3e = 1;
  }
  lVar6 = *(long *)(param_1 + 0x10);
  if (lVar6 == 0) {
                    /* WARNING: Subroutine does not return */
    native_sub_432810();
  }
  uVar4 = *(uint *)(param_1 + 0x18);
  uVar7 = (uint)*(undefined8 *)(lVar6 + 0x18);
  if (((int)uVar4 < (int)uVar7) && ((param_2 & 1) != 0)) {
    if (uVar4 < uVar7) {
      do {
        if (0x1f < *(byte *)(lVar6 + (int)uVar4 + 0x20)) goto LAB_00dd38a0;
        uVar4 = uVar4 + 1;
        *(uint *)(param_1 + 0x18) = uVar4;
        if ((int)uVar7 <= (int)uVar4) goto LAB_00dd38a0;
      } while (uVar4 < *(uint *)(lVar6 + 0x18));
    }
LAB_00dd3950:
    uVar3 = native_sub_43283c();
                    /* WARNING: Subroutine does not return */
    native_sub_4327dc(uVar3,0);
  }
LAB_00dd38a0:
  if ((int)uVar4 < (int)uVar7) {
    uVar2 = 0;
    while (uVar5 = uVar2, (long)((long)(int)uVar4 + uVar5) < (long)(int)uVar7) {
      if (*(uint *)(lVar6 + 0x18) <= uVar4 + (int)uVar5) goto LAB_00dd3950;
      cVar1 = *(char *)(lVar6 + (int)uVar4 + uVar5 + 0x20);
      if ((cVar1 == '\r') || (uVar2 = uVar5 + 1, cVar1 == '\n')) break;
    }
    uVar7 = uVar4 + (int)uVar5 + 1;
    if (((*(byte *)(_ByteReader_TypeInfo_12d3c30 + 0x133) >> 2 & 1) != 0) &&
       (*(int *)(_ByteReader_TypeInfo_12d3c30 + 0xe0) == 0)) {
      native_sub_4327ec();
    }
    uVar3 = native_ByteReader__ReadLine_dd37b4(lVar6,uVar4,uVar5 & 0xffffffff);
  }
  else {
    uVar3 = 0;
  }
  *(uint *)(param_1 + 0x18) = uVar7;
  return uVar3;
}



/* ByteReader$$ReadDictionary @ 0xdd3960
 * System_Collections_Generic_Dictionary_string__string__o* ByteReader__ReadDictionary (ByteReader_o* __this, const MethodInfo* method); */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* ByteReader$$ReadDictionary
   System_Collections_Generic_Dictionary_string__string__o* ByteReader__ReadDictionary
   (ByteReader_o* __this, const MethodInfo* method); */

long native_ByteReader__ReadDictionary_dd3960(long param_1)

{
  long lVar1;
  long lVar2;
  ulong uVar3;
  undefined8 uVar4;
  undefined8 uVar5;
  long lVar6;
  
  if ((bRam0000000001346e3f & 1) == 0) {
    native_sub_43273c(&char___TypeInfo_12d3090);
    native_sub_43273c(&Method_System_Collections_Generic_Dictionary_string__string___ctor___12d98d8)
    ;
    native_sub_43273c(&
                      Method_System_Collections_Generic_Dictionary_string__string__set_Item___12d9930
                     );
    native_sub_43273c(&System_Collections_Generic_Dictionary_string__string__TypeInfo_12d23c8);
    native_sub_43273c(&StringLiteral___12eab80);
    native_sub_43273c(&StringLiteral____12eb838);
    native_sub_43273c(&StringLiteral__n_12f33e0);
    bRam0000000001346e3f = 1;
  }
  lVar1 = native_sub_432808(_System_Collections_Generic_Dictionary_string__string__TypeInfo_12d23c8)
  ;
  native_System_Collections_Generic_Dictionary_Action__LinkedListNode_Action_____ctor_cda13c
            (lVar1,_Method_System_Collections_Generic_Dictionary_string__string___ctor___12d98d8);
  lVar2 = native_sub_432750(_char___TypeInfo_12d3090,1);
  if (lVar2 != 0) {
    if (*(int *)(lVar2 + 0x18) == 0) {
LAB_00dd3b48:
      uVar4 = native_sub_43283c();
                    /* WARNING: Subroutine does not return */
      native_sub_4327dc(uVar4,0);
    }
    *(undefined2 *)(lVar2 + 0x20) = 0x3d;
    lVar6 = *(long *)(param_1 + 0x10);
    do {
      if (((lVar6 == 0) || (*(int *)(lVar6 + 0x18) <= *(int *)(param_1 + 0x18))) ||
         (lVar6 = native_ByteReader__ReadLine_dd3810(param_1,1), lVar6 == 0)) {
        return lVar1;
      }
      uVar3 = native_System_String__StartsWith_b0cc2c(lVar6,_StringLiteral____12eb838,0);
      if ((uVar3 & 1) == 0) {
        lVar6 = native_System_String__Split_b0988c(lVar6,lVar2,2,1,0);
        if (lVar6 == 0) break;
        if (*(int *)(lVar6 + 0x18) == 2) {
          if (*(long *)(lVar6 + 0x20) == 0) break;
          uVar4 = native_System_String__Trim_af8bf4(*(long *)(lVar6 + 0x20),0);
          if (*(uint *)(lVar6 + 0x18) < 2) goto LAB_00dd3b48;
          if (((*(long *)(lVar6 + 0x28) == 0) ||
              (lVar6 = native_System_String__Trim_af8bf4(*(long *)(lVar6 + 0x28),0), lVar6 == 0)) ||
             (uVar5 = native_System_String__Replace_afd9ac
                                (lVar6,_StringLiteral__n_12f33e0,_StringLiteral___12eab80,0),
             lVar1 == 0)) break;
          native_System_Collections_Generic_Dictionary_Action__LinkedListNode_Action____set_Item_cda5f8
                    (lVar1,uVar4,uVar5,
                     _Method_System_Collections_Generic_Dictionary_string__string__set_Item___12d9930
                    );
        }
      }
      lVar6 = *(long *)(param_1 + 0x10);
    } while( true );
  }
                    /* WARNING: Subroutine does not return */
  native_sub_432810();
}



/* ByteReader$$ReadCSV @ 0xdd3b54
 * BetterList_string__o* ByteReader__ReadCSV (ByteReader_o* __this, const MethodInfo* method); */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* ByteReader$$ReadCSV
   BetterList_string__o* ByteReader__ReadCSV (ByteReader_o* __this, const MethodInfo* method); */

undefined8 native_ByteReader__ReadCSV_dd3b54(long param_1)

{
  int iVar1;
  bool bVar2;
  bool bVar3;
  int iVar4;
  short sVar5;
  long lVar6;
  undefined8 uVar7;
  long lVar8;
  undefined8 *puVar9;
  int iVar10;
  int iVar11;
  long lVar12;
  int iVar13;
  
  if ((bRam0000000001346e40 & 1) == 0) {
    native_sub_43273c(&Method_BetterList_string__Add___12d8960);
    native_sub_43273c(&Method_BetterList_string__Clear___12d8968);
    native_sub_43273c(&ByteReader_TypeInfo_12d3c30);
    native_sub_43273c(&StringLiteral___12eab80);
    native_sub_43273c(&StringLiteral__n_12f33e0);
    native_sub_43273c(&StringLiteral___12eaf90);
    native_sub_43273c(&StringLiteral__12eaac0);
    native_sub_43273c(&StringLiteral____12eafc0);
    bRam0000000001346e40 = 1;
  }
  if (((*(byte *)(_ByteReader_TypeInfo_12d3c30 + 0x133) >> 2 & 1) != 0) &&
     (*(int *)(_ByteReader_TypeInfo_12d3c30 + 0xe0) == 0)) {
    native_sub_4327ec();
  }
  if (**(long **)(_ByteReader_TypeInfo_12d3c30 + 0xb8) != 0) {
    native_BetterList_object___Clear_ba24c0
              (**(long **)(_ByteReader_TypeInfo_12d3c30 + 0xb8),
               _Method_BetterList_string__Clear___12d8968);
    iVar10 = 0;
    bVar2 = false;
    lVar8 = _StringLiteral__12eaac0;
    do {
      if ((*(long *)(param_1 + 0x10) == 0) ||
         (*(int *)(*(long *)(param_1 + 0x10) + 0x18) <= *(int *)(param_1 + 0x18))) {
        return 0;
      }
      if (bVar2) {
        lVar6 = native_ByteReader__ReadLine_dd3810(param_1,0);
        if (lVar6 == 0) {
          return 0;
        }
        uVar7 = native_System_String__Replace_afd9ac
                          (lVar6,_StringLiteral__n_12f33e0,_StringLiteral___12eab80,0);
        lVar8 = native_System_String__Concat_afc654(lVar8,_StringLiteral___12eab80,uVar7,0);
      }
      else {
        lVar8 = native_ByteReader__ReadLine_dd3810(param_1,1);
        if (lVar8 == 0) {
          return 0;
        }
        lVar8 = native_System_String__Replace_afd9ac
                          (lVar8,_StringLiteral__n_12f33e0,_StringLiteral___12eab80,0);
        iVar10 = 0;
      }
      if (lVar8 == 0) goto LAB_00dd3fcc;
      iVar13 = *(int *)(lVar8 + 0x10);
      iVar1 = iVar10;
      bVar3 = bVar2;
      if (iVar10 < iVar13) {
        do {
          sVar5 = native_System_String__get_Chars_b03810(lVar8,iVar1,0);
          iVar4 = iVar10;
          iVar11 = iVar1;
          if (sVar5 == 0x22) {
            iVar11 = iVar1 + 1;
            if (bVar2) {
              if (iVar13 <= iVar11) {
                if (((*(byte *)(_ByteReader_TypeInfo_12d3c30 + 0x133) >> 2 & 1) != 0) &&
                   (*(int *)(_ByteReader_TypeInfo_12d3c30 + 0xe0) == 0)) {
                  native_sub_4327ec();
                }
                lVar6 = **(long **)(_ByteReader_TypeInfo_12d3c30 + 0xb8);
                lVar8 = native_System_String__Substring_b09fac(lVar8,iVar10,iVar1 - iVar10,0);
                if ((lVar8 == 0) ||
                   (uVar7 = native_System_String__Replace_afd9ac
                                      (lVar8,_StringLiteral____12eafc0,_StringLiteral___12eaf90,0),
                   lVar6 == 0)) goto LAB_00dd3fcc;
                native_BetterList_object___Add_ba24d8
                          (lVar6,uVar7,_Method_BetterList_string__Add___12d8960);
                puVar9 = *(undefined8 **)(_ByteReader_TypeInfo_12d3c30 + 0xb8);
                goto LAB_00dd3fac;
              }
              sVar5 = native_System_String__get_Chars_b03810(lVar8,iVar11,0);
              if (sVar5 == 0x22) {
                bVar3 = true;
              }
              else {
                if (((*(byte *)(_ByteReader_TypeInfo_12d3c30 + 0x133) >> 2 & 1) != 0) &&
                   (*(int *)(_ByteReader_TypeInfo_12d3c30 + 0xe0) == 0)) {
                  native_sub_4327ec();
                }
                lVar12 = **(long **)(_ByteReader_TypeInfo_12d3c30 + 0xb8);
                lVar6 = native_System_String__Substring_b09fac(lVar8,iVar10,iVar1 - iVar10,0);
                if ((lVar6 == 0) ||
                   (uVar7 = native_System_String__Replace_afd9ac
                                      (lVar6,_StringLiteral____12eafc0,_StringLiteral___12eaf90,0),
                   lVar12 == 0)) goto LAB_00dd3fcc;
                native_BetterList_object___Add_ba24d8
                          (lVar12,uVar7,_Method_BetterList_string__Add___12d8960);
                sVar5 = native_System_String__get_Chars_b03810(lVar8,iVar11,0);
                bVar3 = false;
                iVar4 = iVar1 + 2;
                if (sVar5 != 0x2c) {
                  iVar4 = iVar10;
                  iVar11 = iVar1;
                }
              }
            }
            else {
              bVar3 = true;
              iVar4 = iVar11;
              iVar11 = iVar1;
            }
          }
          else {
            bVar3 = bVar2;
            if (sVar5 == 0x2c) {
              if (bVar2) {
                bVar3 = true;
              }
              else {
                if (((*(byte *)(_ByteReader_TypeInfo_12d3c30 + 0x133) >> 2 & 1) != 0) &&
                   (*(int *)(_ByteReader_TypeInfo_12d3c30 + 0xe0) == 0)) {
                  native_sub_4327ec();
                }
                lVar6 = **(long **)(_ByteReader_TypeInfo_12d3c30 + 0xb8);
                uVar7 = native_System_String__Substring_b09fac(lVar8,iVar10,iVar1 - iVar10,0);
                if (lVar6 == 0) goto LAB_00dd3fcc;
                native_BetterList_object___Add_ba24d8
                          (lVar6,uVar7,_Method_BetterList_string__Add___12d8960);
                bVar3 = false;
                iVar4 = iVar1 + 1;
              }
            }
          }
          iVar10 = iVar4;
          iVar1 = iVar11 + 1;
          bVar2 = bVar3;
        } while (iVar11 + 1 < iVar13);
        iVar13 = *(int *)(lVar8 + 0x10);
      }
      if (iVar13 <= iVar10) {
        if (((*(byte *)(_ByteReader_TypeInfo_12d3c30 + 0x133) >> 2 & 1) != 0) &&
           (*(int *)(_ByteReader_TypeInfo_12d3c30 + 0xe0) == 0)) {
          native_sub_4327ec();
        }
        lVar6 = **(long **)(_ByteReader_TypeInfo_12d3c30 + 0xb8);
        lVar8 = _StringLiteral__12eaac0;
        goto joined_r0x00dd3f74;
      }
      bVar2 = true;
    } while (bVar3);
    if (((*(byte *)(_ByteReader_TypeInfo_12d3c30 + 0x133) >> 2 & 1) != 0) &&
       (*(int *)(_ByteReader_TypeInfo_12d3c30 + 0xe0) == 0)) {
      native_sub_4327ec();
      iVar13 = *(int *)(lVar8 + 0x10);
    }
    lVar6 = **(long **)(_ByteReader_TypeInfo_12d3c30 + 0xb8);
    lVar8 = native_System_String__Substring_b09fac(lVar8,iVar10,iVar13 - iVar10,0);
joined_r0x00dd3f74:
    if (lVar6 != 0) {
      native_BetterList_object___Add_ba24d8(lVar6,lVar8,_Method_BetterList_string__Add___12d8960);
      if (((*(byte *)(_ByteReader_TypeInfo_12d3c30 + 0x133) >> 2 & 1) != 0) &&
         (*(int *)(_ByteReader_TypeInfo_12d3c30 + 0xe0) == 0)) {
        native_sub_4327ec();
      }
      puVar9 = *(undefined8 **)(_ByteReader_TypeInfo_12d3c30 + 0xb8);
LAB_00dd3fac:
      return *puVar9;
    }
  }
LAB_00dd3fcc:
                    /* WARNING: Subroutine does not return */
  native_sub_432810();
}



/* ByteReader$$.cctor @ 0xdd3fd0
 * void ByteReader___cctor (const MethodInfo* method); */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* ByteReader$$.cctor
   void ByteReader___cctor (const MethodInfo* method); */

void native_ByteReader___cctor_dd3fd0(void)

{
  ulong *puVar1;
  char cVar2;
  bool bVar3;
  undefined8 uVar4;
  undefined8 *puVar5;
  
  if ((bRam0000000001346e41 & 1) == 0) {
    native_sub_43273c(&Method_BetterList_string___ctor___12d8958);
    native_sub_43273c(&BetterList_string__TypeInfo_12d2120);
    native_sub_43273c(&ByteReader_TypeInfo_12d3c30);
    bRam0000000001346e41 = 1;
  }
  uVar4 = native_sub_432808(_BetterList_string__TypeInfo_12d2120);
  native_BetterList_object____ctor_ba2d1c(uVar4,_Method_BetterList_string___ctor___12d8958);
  puVar5 = *(undefined8 **)(_ByteReader_TypeInfo_12d3c30 + 0xb8);
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


