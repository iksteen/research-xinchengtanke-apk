/* ARM64 IL2CPP native pseudocode from Ghidra.
 * Recovered implementation, not original C# source.
 * Function boundaries follow the IL2CPP method address table. */


/* UIFont$$get_type @ 0x9eb3a0
 * int32_t UIFont__get_type (UIFont_o* __this, const MethodInfo* method); */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* UIFont$$get_type
   int32_t UIFont__get_type (UIFont_o* __this, const MethodInfo* method); */

undefined4 native_UIFont__get_type_9eb3a0(undefined8 param_1)

{
  long lVar1;
  undefined8 uVar2;
  ulong uVar3;
  undefined4 uVar4;
  
  if ((bRam0000000001341927 & 1) == 0) {
    native_sub_43273c(&UnityEngine_Object_TypeInfo_12d54e0);
    bRam0000000001341927 = 1;
  }
  lVar1 = native_UIFont__get_replacement_9eb43c(param_1);
  if (lVar1 == 0) {
    uVar2 = native_UIFont__get_dynamicFont_9eb4dc(param_1);
    if (((*(byte *)(_UnityEngine_Object_TypeInfo_12d54e0 + 0x133) >> 2 & 1) != 0) &&
       (*(int *)(_UnityEngine_Object_TypeInfo_12d54e0 + 0xe0) == 0)) {
      native_sub_4327ec(_UnityEngine_Object_TypeInfo_12d54e0);
    }
    uVar3 = native_UnityEngine_Object__op_Inequality_8d76fc(uVar2,0,0);
    uVar4 = 3;
    if ((uVar3 & 1) == 0) {
      uVar4 = 1;
    }
  }
  else {
    uVar4 = 2;
  }
  return uVar4;
}



/* UIFont$$set_type @ 0x9eb5a0
 * void UIFont__set_type (UIFont_o* __this, int32_t value, const MethodInfo* method); */

/* UIFont$$set_type
   void UIFont__set_type (UIFont_o* __this, int32_t value, const MethodInfo* method); */

void native_UIFont__set_type_9eb5a0(void)

{
  return;
}



/* UIFont$$get_bmFont @ 0x9eb5a4
 * BMFont_o* UIFont__get_bmFont (UIFont_o* __this, const MethodInfo* method); */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* UIFont$$get_bmFont
   BMFont_o* UIFont__get_bmFont (UIFont_o* __this, const MethodInfo* method); */

undefined8 native_UIFont__get_bmFont_9eb5a4(long param_1)

{
  long *plVar1;
  undefined8 *puVar2;
  undefined8 uVar3;
  long lVar4;
  ulong uVar5;
  int *piVar6;
  
  if ((bRam0000000001341928 & 1) == 0) {
    native_sub_43273c(&INGUIFont_TypeInfo_12d4c70);
    bRam0000000001341928 = 1;
  }
  plVar1 = (long *)native_UIFont__get_replacement_9eb43c(param_1);
  if (plVar1 == (long *)0x0) {
    return *(undefined8 *)(param_1 + 0x30);
  }
  lVar4 = *plVar1;
  if ((ulong)*(ushort *)(lVar4 + 0x12a) != 0) {
    uVar5 = 0;
    piVar6 = (int *)(*(long *)(lVar4 + 0xb0) + 8);
    do {
      if (*(long *)(piVar6 + -2) == _INGUIFont_TypeInfo_12d4c70) {
        puVar2 = (undefined8 *)(lVar4 + (long)(*piVar6 + 2) * 0x10 + 0x138);
        goto LAB_009eb654;
      }
      uVar5 = uVar5 + 1;
      piVar6 = piVar6 + 4;
    } while (uVar5 < *(ushort *)(lVar4 + 0x12a));
  }
  puVar2 = (undefined8 *)native_sub_3c9b34(plVar1,_INGUIFont_TypeInfo_12d4c70,2);
LAB_009eb654:
                    /* WARNING: Could not recover jumptable at 0x009eb664. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  uVar3 = (*(code *)*puVar2)(plVar1,puVar2[1]);
  return uVar3;
}



/* UIFont$$set_bmFont @ 0x9eb668
 * void UIFont__set_bmFont (UIFont_o* __this, BMFont_o* value, const MethodInfo* method); */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* UIFont$$set_bmFont
   void UIFont__set_bmFont (UIFont_o* __this, BMFont_o* value, const MethodInfo* method); */

void native_UIFont__set_bmFont_9eb668(long param_1,undefined8 param_2)

{
  ulong *puVar1;
  char cVar2;
  bool bVar3;
  long *plVar4;
  undefined8 *puVar5;
  long lVar6;
  ulong uVar7;
  int *piVar8;
  
  if ((bRam0000000001341929 & 1) == 0) {
    native_sub_43273c(&INGUIFont_TypeInfo_12d4c70);
    bRam0000000001341929 = 1;
  }
  plVar4 = (long *)native_UIFont__get_replacement_9eb43c(param_1);
  if (plVar4 == (long *)0x0) {
    puVar5 = (undefined8 *)(param_1 + 0x30);
    *puVar5 = param_2;
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
  lVar6 = *plVar4;
  if ((ulong)*(ushort *)(lVar6 + 0x12a) != 0) {
    uVar7 = 0;
    piVar8 = (int *)(*(long *)(lVar6 + 0xb0) + 8);
    do {
      if (*(long *)(piVar8 + -2) == _INGUIFont_TypeInfo_12d4c70) {
        puVar5 = (undefined8 *)(lVar6 + (long)(*piVar8 + 3) * 0x10 + 0x138);
        goto LAB_009eb72c;
      }
      uVar7 = uVar7 + 1;
      piVar8 = piVar8 + 4;
    } while (uVar7 < *(ushort *)(lVar6 + 0x12a));
  }
  puVar5 = (undefined8 *)native_sub_3c9b34(plVar4,_INGUIFont_TypeInfo_12d4c70,3);
LAB_009eb72c:
                    /* WARNING: Could not recover jumptable at 0x009eb744. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)*puVar5)(plVar4,param_2,puVar5[1]);
  return;
}



/* UIFont$$get_texWidth @ 0x9eb748
 * int32_t UIFont__get_texWidth (UIFont_o* __this, const MethodInfo* method); */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* UIFont$$get_texWidth
   int32_t UIFont__get_texWidth (UIFont_o* __this, const MethodInfo* method); */

ulong native_UIFont__get_texWidth_9eb748(long param_1)

{
  long *plVar1;
  undefined8 *puVar2;
  long lVar3;
  ulong uVar4;
  int *piVar5;
  
  if ((bRam000000000134192a & 1) == 0) {
    native_sub_43273c(&INGUIFont_TypeInfo_12d4c70);
    bRam000000000134192a = 1;
  }
  plVar1 = (long *)native_UIFont__get_replacement_9eb43c(param_1);
  if (plVar1 == (long *)0x0) {
    if (*(long *)(param_1 + 0x30) == 0) {
      uVar4 = 1;
    }
    else {
      uVar4 = (ulong)*(uint *)(*(long *)(param_1 + 0x30) + 0x18);
    }
    return uVar4;
  }
  lVar3 = *plVar1;
  if ((ulong)*(ushort *)(lVar3 + 0x12a) != 0) {
    uVar4 = 0;
    piVar5 = (int *)(*(long *)(lVar3 + 0xb0) + 8);
    do {
      if (*(long *)(piVar5 + -2) == _INGUIFont_TypeInfo_12d4c70) {
        puVar2 = (undefined8 *)(lVar3 + (long)(*piVar5 + 4) * 0x10 + 0x138);
        goto LAB_009eb7f8;
      }
      uVar4 = uVar4 + 1;
      piVar5 = piVar5 + 4;
    } while (uVar4 < *(ushort *)(lVar3 + 0x12a));
  }
  puVar2 = (undefined8 *)native_sub_3c9b34(plVar1,_INGUIFont_TypeInfo_12d4c70,4);
LAB_009eb7f8:
                    /* WARNING: Could not recover jumptable at 0x009eb808. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  uVar4 = (*(code *)*puVar2)(plVar1,puVar2[1]);
  return uVar4;
}



/* UIFont$$set_texWidth @ 0x9eb81c
 * void UIFont__set_texWidth (UIFont_o* __this, int32_t value, const MethodInfo* method); */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* UIFont$$set_texWidth
   void UIFont__set_texWidth (UIFont_o* __this, int32_t value, const MethodInfo* method); */

void native_UIFont__set_texWidth_9eb81c(long param_1,undefined4 param_2)

{
  long *plVar1;
  undefined8 *puVar2;
  long lVar3;
  ulong uVar4;
  int *piVar5;
  
  if ((bRam000000000134192b & 1) == 0) {
    native_sub_43273c(&INGUIFont_TypeInfo_12d4c70);
    bRam000000000134192b = 1;
  }
  plVar1 = (long *)native_UIFont__get_replacement_9eb43c(param_1);
  if (plVar1 == (long *)0x0) {
    if (*(long *)(param_1 + 0x30) != 0) {
      *(undefined4 *)(*(long *)(param_1 + 0x30) + 0x18) = param_2;
    }
    return;
  }
  lVar3 = *plVar1;
  if ((ulong)*(ushort *)(lVar3 + 0x12a) != 0) {
    uVar4 = 0;
    piVar5 = (int *)(*(long *)(lVar3 + 0xb0) + 8);
    do {
      if (*(long *)(piVar5 + -2) == _INGUIFont_TypeInfo_12d4c70) {
        puVar2 = (undefined8 *)(lVar3 + (long)(*piVar5 + 5) * 0x10 + 0x138);
        goto LAB_009eb8e0;
      }
      uVar4 = uVar4 + 1;
      piVar5 = piVar5 + 4;
    } while (uVar4 < *(ushort *)(lVar3 + 0x12a));
  }
  puVar2 = (undefined8 *)native_sub_3c9b34(plVar1,_INGUIFont_TypeInfo_12d4c70,5);
LAB_009eb8e0:
                    /* WARNING: Could not recover jumptable at 0x009eb8f8. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)*puVar2)(plVar1,param_2,puVar2[1]);
  return;
}



/* UIFont$$get_texHeight @ 0x9eb8fc
 * int32_t UIFont__get_texHeight (UIFont_o* __this, const MethodInfo* method); */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* UIFont$$get_texHeight
   int32_t UIFont__get_texHeight (UIFont_o* __this, const MethodInfo* method); */

ulong native_UIFont__get_texHeight_9eb8fc(long param_1)

{
  long *plVar1;
  undefined8 *puVar2;
  long lVar3;
  ulong uVar4;
  int *piVar5;
  
  if ((bRam000000000134192c & 1) == 0) {
    native_sub_43273c(&INGUIFont_TypeInfo_12d4c70);
    bRam000000000134192c = 1;
  }
  plVar1 = (long *)native_UIFont__get_replacement_9eb43c(param_1);
  if (plVar1 == (long *)0x0) {
    if (*(long *)(param_1 + 0x30) == 0) {
      uVar4 = 1;
    }
    else {
      uVar4 = (ulong)*(uint *)(*(long *)(param_1 + 0x30) + 0x1c);
    }
    return uVar4;
  }
  lVar3 = *plVar1;
  if ((ulong)*(ushort *)(lVar3 + 0x12a) != 0) {
    uVar4 = 0;
    piVar5 = (int *)(*(long *)(lVar3 + 0xb0) + 8);
    do {
      if (*(long *)(piVar5 + -2) == _INGUIFont_TypeInfo_12d4c70) {
        puVar2 = (undefined8 *)(lVar3 + (long)(*piVar5 + 6) * 0x10 + 0x138);
        goto LAB_009eb9ac;
      }
      uVar4 = uVar4 + 1;
      piVar5 = piVar5 + 4;
    } while (uVar4 < *(ushort *)(lVar3 + 0x12a));
  }
  puVar2 = (undefined8 *)native_sub_3c9b34(plVar1,_INGUIFont_TypeInfo_12d4c70,6);
LAB_009eb9ac:
                    /* WARNING: Could not recover jumptable at 0x009eb9bc. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  uVar4 = (*(code *)*puVar2)(plVar1,puVar2[1]);
  return uVar4;
}



/* UIFont$$set_texHeight @ 0x9eb9d0
 * void UIFont__set_texHeight (UIFont_o* __this, int32_t value, const MethodInfo* method); */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* UIFont$$set_texHeight
   void UIFont__set_texHeight (UIFont_o* __this, int32_t value, const MethodInfo* method); */

void native_UIFont__set_texHeight_9eb9d0(long param_1,undefined4 param_2)

{
  long *plVar1;
  undefined8 *puVar2;
  long lVar3;
  ulong uVar4;
  int *piVar5;
  
  if ((bRam000000000134192d & 1) == 0) {
    native_sub_43273c(&INGUIFont_TypeInfo_12d4c70);
    bRam000000000134192d = 1;
  }
  plVar1 = (long *)native_UIFont__get_replacement_9eb43c(param_1);
  if (plVar1 == (long *)0x0) {
    if (*(long *)(param_1 + 0x30) != 0) {
      *(undefined4 *)(*(long *)(param_1 + 0x30) + 0x1c) = param_2;
    }
    return;
  }
  lVar3 = *plVar1;
  if ((ulong)*(ushort *)(lVar3 + 0x12a) != 0) {
    uVar4 = 0;
    piVar5 = (int *)(*(long *)(lVar3 + 0xb0) + 8);
    do {
      if (*(long *)(piVar5 + -2) == _INGUIFont_TypeInfo_12d4c70) {
        puVar2 = (undefined8 *)(lVar3 + (long)(*piVar5 + 7) * 0x10 + 0x138);
        goto LAB_009eba94;
      }
      uVar4 = uVar4 + 1;
      piVar5 = piVar5 + 4;
    } while (uVar4 < *(ushort *)(lVar3 + 0x12a));
  }
  puVar2 = (undefined8 *)native_sub_3c9b34(plVar1,_INGUIFont_TypeInfo_12d4c70,7);
LAB_009eba94:
                    /* WARNING: Could not recover jumptable at 0x009ebaac. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)*puVar2)(plVar1,param_2,puVar2[1]);
  return;
}



/* UIFont$$get_hasSymbols @ 0x9ebab0
 * bool UIFont__get_hasSymbols (UIFont_o* __this, const MethodInfo* method); */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* UIFont$$get_hasSymbols
   bool UIFont__get_hasSymbols (UIFont_o* __this, const MethodInfo* method); */

ulong native_UIFont__get_hasSymbols_9ebab0(long param_1)

{
  long *plVar1;
  undefined8 *puVar2;
  long lVar3;
  ulong uVar4;
  int *piVar5;
  
  if ((bRam000000000134192e & 1) == 0) {
    native_sub_43273c(&INGUIFont_TypeInfo_12d4c70);
    native_sub_43273c(&Method_System_Collections_Generic_List_BMSymbol__get_Count___12dc578);
    bRam000000000134192e = 1;
  }
  plVar1 = (long *)native_UIFont__get_replacement_9eb43c(param_1);
  if (plVar1 == (long *)0x0) {
    if (*(long *)(param_1 + 0x48) == 0) {
      uVar4 = 0;
    }
    else {
      uVar4 = (ulong)(*(int *)(*(long *)(param_1 + 0x48) + 0x18) != 0);
    }
    return uVar4;
  }
  lVar3 = *plVar1;
  if ((ulong)*(ushort *)(lVar3 + 0x12a) != 0) {
    uVar4 = 0;
    piVar5 = (int *)(*(long *)(lVar3 + 0xb0) + 8);
    do {
      if (*(long *)(piVar5 + -2) == _INGUIFont_TypeInfo_12d4c70) {
        puVar2 = (undefined8 *)(lVar3 + (long)(*piVar5 + 8) * 0x10 + 0x138);
        goto LAB_009ebb74;
      }
      uVar4 = uVar4 + 1;
      piVar5 = piVar5 + 4;
    } while (uVar4 < *(ushort *)(lVar3 + 0x12a));
  }
  puVar2 = (undefined8 *)native_sub_3c9b34(plVar1,_INGUIFont_TypeInfo_12d4c70,8);
LAB_009ebb74:
                    /* WARNING: Could not recover jumptable at 0x009ebb84. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  uVar4 = (*(code *)*puVar2)(plVar1,puVar2[1]);
  return uVar4;
}



/* UIFont$$get_symbols @ 0x9ebb98
 * System_Collections_Generic_List_BMSymbol__o* UIFont__get_symbols (UIFont_o* __this, const MethodInfo* method); */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* UIFont$$get_symbols
   System_Collections_Generic_List_BMSymbol__o* UIFont__get_symbols (UIFont_o* __this, const
   MethodInfo* method); */

undefined8 native_UIFont__get_symbols_9ebb98(long param_1)

{
  long *plVar1;
  undefined8 *puVar2;
  undefined8 uVar3;
  long lVar4;
  ulong uVar5;
  int *piVar6;
  
  if ((bRam000000000134192f & 1) == 0) {
    native_sub_43273c(&INGUIFont_TypeInfo_12d4c70);
    bRam000000000134192f = 1;
  }
  plVar1 = (long *)native_UIFont__get_replacement_9eb43c(param_1);
  if (plVar1 == (long *)0x0) {
    return *(undefined8 *)(param_1 + 0x48);
  }
  lVar4 = *plVar1;
  if ((ulong)*(ushort *)(lVar4 + 0x12a) != 0) {
    uVar5 = 0;
    piVar6 = (int *)(*(long *)(lVar4 + 0xb0) + 8);
    do {
      if (*(long *)(piVar6 + -2) == _INGUIFont_TypeInfo_12d4c70) {
        puVar2 = (undefined8 *)(lVar4 + (long)(*piVar6 + 9) * 0x10 + 0x138);
        goto LAB_009ebc48;
      }
      uVar5 = uVar5 + 1;
      piVar6 = piVar6 + 4;
    } while (uVar5 < *(ushort *)(lVar4 + 0x12a));
  }
  puVar2 = (undefined8 *)native_sub_3c9b34(plVar1,_INGUIFont_TypeInfo_12d4c70,9);
LAB_009ebc48:
                    /* WARNING: Could not recover jumptable at 0x009ebc58. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  uVar3 = (*(code *)*puVar2)(plVar1,puVar2[1]);
  return uVar3;
}



/* UIFont$$set_symbols @ 0x9ebc5c
 * void UIFont__set_symbols (UIFont_o* __this, System_Collections_Generic_List_BMSymbol__o* value, const MethodInfo* method); */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* UIFont$$set_symbols
   void UIFont__set_symbols (UIFont_o* __this, System_Collections_Generic_List_BMSymbol__o* value,
   const MethodInfo* method); */

void native_UIFont__set_symbols_9ebc5c(long param_1,undefined8 param_2)

{
  ulong *puVar1;
  char cVar2;
  bool bVar3;
  long *plVar4;
  undefined8 *puVar5;
  long lVar6;
  ulong uVar7;
  int *piVar8;
  
  if ((bRam0000000001341930 & 1) == 0) {
    native_sub_43273c(&INGUIFont_TypeInfo_12d4c70);
    bRam0000000001341930 = 1;
  }
  plVar4 = (long *)native_UIFont__get_replacement_9eb43c(param_1);
  if (plVar4 == (long *)0x0) {
    puVar5 = (undefined8 *)(param_1 + 0x48);
    *puVar5 = param_2;
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
  lVar6 = *plVar4;
  if ((ulong)*(ushort *)(lVar6 + 0x12a) != 0) {
    uVar7 = 0;
    piVar8 = (int *)(*(long *)(lVar6 + 0xb0) + 8);
    do {
      if (*(long *)(piVar8 + -2) == _INGUIFont_TypeInfo_12d4c70) {
        puVar5 = (undefined8 *)(lVar6 + (long)(*piVar8 + 10) * 0x10 + 0x138);
        goto LAB_009ebd20;
      }
      uVar7 = uVar7 + 1;
      piVar8 = piVar8 + 4;
    } while (uVar7 < *(ushort *)(lVar6 + 0x12a));
  }
  puVar5 = (undefined8 *)native_sub_3c9b34(plVar4,_INGUIFont_TypeInfo_12d4c70,10);
LAB_009ebd20:
                    /* WARNING: Could not recover jumptable at 0x009ebd38. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)*puVar5)(plVar4,param_2,puVar5[1]);
  return;
}



/* UIFont$$get_atlas @ 0x9ebd3c
 * INGUIAtlas_o* UIFont__get_atlas (UIFont_o* __this, const MethodInfo* method); */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* UIFont$$get_atlas
   INGUIAtlas_o* UIFont__get_atlas (UIFont_o* __this, const MethodInfo* method); */

long * native_UIFont__get_atlas_9ebd3c(long param_1)

{
  int iVar1;
  long *plVar2;
  undefined8 *puVar3;
  long lVar4;
  ulong uVar5;
  int *piVar6;
  long lVar7;
  long *plStack_28;
  
  if ((bRam0000000001341931 & 1) == 0) {
    native_sub_43273c(&INGUIAtlas_TypeInfo_12d4c68);
    native_sub_43273c(&INGUIFont_TypeInfo_12d4c70);
    bRam0000000001341931 = 1;
  }
  plVar2 = (long *)native_UIFont__get_replacement_9eb43c(param_1);
  lVar4 = _INGUIAtlas_TypeInfo_12d4c68;
  if (plVar2 == (long *)0x0) {
    plVar2 = *(long **)(param_1 + 0x38);
    if (plVar2 != (long *)0x0) {
      lVar7 = *plVar2;
      uVar5 = native_sub_3c5e78(_INGUIAtlas_TypeInfo_12d4c68,lVar7);
      if ((uVar5 & 1) == 0) {
        if ((*(byte *)(lVar7 + 0x133) >> 4 & 1) == 0) {
          plVar2 = (long *)0x0;
        }
        else {
          if (((((*(byte *)(lVar4 + 0x114) >> 5 & 1) != 0) || (*(char *)(lVar4 + 0x2a) == '\x1e'))
              || (*(char *)(lVar4 + 0x2a) == '\x13')) &&
             ((*(long *)(lVar4 + 0x70) != 0 &&
              (lVar7 = *(long *)(*(long *)(lVar4 + 0x70) + 0x28), lVar7 != 0)))) {
            plStack_28 = (long *)native_sub_3d76d0(plVar2,lVar7);
            if (plStack_28 != (long *)0x0) {
              return plVar2;
            }
            iVar1 = (*(code *)**(undefined8 **)plVar2[2])((undefined8 *)plVar2[2],lVar7,&plStack_28)
            ;
            if (-1 < iVar1) {
              uVar5 = native_sub_3d7780(plVar2,lVar7,plStack_28);
              if ((uVar5 & 1) == 0) {
                (**(code **)(*plStack_28 + 0x10))(plStack_28);
                plStack_28 = (long *)native_sub_3d76d0(plVar2,lVar7);
              }
              if (plStack_28 != (long *)0x0) {
                return plVar2;
              }
            }
          }
          if (lRam00000000013443f8 != lVar4) {
            plVar2 = (long *)0x0;
          }
        }
      }
    }
    return plVar2;
  }
  lVar4 = *plVar2;
  if ((ulong)*(ushort *)(lVar4 + 0x12a) != 0) {
    uVar5 = 0;
    piVar6 = (int *)(*(long *)(lVar4 + 0xb0) + 8);
    do {
      if (*(long *)(piVar6 + -2) == _INGUIFont_TypeInfo_12d4c70) {
        puVar3 = (undefined8 *)(lVar4 + (long)(*piVar6 + 0xb) * 0x10 + 0x138);
        goto LAB_009ebe04;
      }
      uVar5 = uVar5 + 1;
      piVar6 = piVar6 + 4;
    } while (uVar5 < *(ushort *)(lVar4 + 0x12a));
  }
  puVar3 = (undefined8 *)native_sub_3c9b34(plVar2,_INGUIFont_TypeInfo_12d4c70,0xb);
LAB_009ebe04:
                    /* WARNING: Could not recover jumptable at 0x009ebe14. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  plVar2 = (long *)(*(code *)*puVar3)(plVar2,puVar3[1]);
  return plVar2;
}



/* UIFont$$set_atlas @ 0x9ebe18
 * void UIFont__set_atlas (UIFont_o* __this, INGUIAtlas_o* value, const MethodInfo* method); */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* UIFont$$set_atlas
   void UIFont__set_atlas (UIFont_o* __this, INGUIAtlas_o* value, const MethodInfo* method); */

void native_UIFont__set_atlas_9ebe18
               (undefined1 param_1 [16],undefined4 param_2,undefined4 param_3,undefined4 param_4,
               long param_5,long *param_6)

{
  uint uVar1;
  long *plVar2;
  undefined8 *puVar3;
  undefined8 uVar4;
  long lVar5;
  long lVar6;
  ulong uVar7;
  int *piVar8;
  long *plVar9;
  long lVar10;
  int iVar11;
  uint uVar12;
  undefined4 uVar13;
  
  if ((bRam0000000001341932 & 1) == 0) {
    native_sub_43273c(&INGUIAtlas_TypeInfo_12d4c68);
    native_sub_43273c(&INGUIFont_TypeInfo_12d4c70);
    native_sub_43273c(&UnityEngine_Object_TypeInfo_12d54e0);
    bRam0000000001341932 = 1;
  }
  plVar2 = (long *)native_UIFont__get_replacement_9eb43c(param_5);
  if (plVar2 == (long *)0x0) {
    plVar9 = (long *)(param_5 + 0x38);
    plVar2 = (long *)native_sub_4327f8(*plVar9,_INGUIAtlas_TypeInfo_12d4c68);
    if (plVar2 == param_6) {
      return;
    }
    *(undefined4 *)(param_5 + 0x68) = 0xffffffff;
    if (param_6 == (long *)0x0) {
      *(undefined8 *)(param_5 + 0x38) = 0;
      native_sub_4326e0(plVar9,0);
      *(undefined8 *)(param_5 + 0x38) = 0;
      native_sub_4326e0(plVar9,0);
      *(undefined8 *)(param_5 + 0x18) = 0;
      native_sub_4326e0((undefined8 *)(param_5 + 0x18),0);
    }
    else {
      if (*(byte *)(*param_6 + 300) < *(byte *)(_UnityEngine_Object_TypeInfo_12d54e0 + 300)) {
        plVar2 = (long *)0x0;
      }
      else {
        plVar2 = param_6;
        if (*(long *)(*(long *)(*param_6 + 200) +
                      (ulong)*(byte *)(_UnityEngine_Object_TypeInfo_12d54e0 + 300) * 8 + -8) !=
            _UnityEngine_Object_TypeInfo_12d54e0) {
          plVar2 = (long *)0x0;
        }
      }
      *plVar9 = (long)plVar2;
      native_sub_4326e0(plVar9);
      lVar6 = *param_6;
      if ((ulong)*(ushort *)(lVar6 + 0x12a) != 0) {
        uVar7 = 0;
        piVar8 = (int *)(*(long *)(lVar6 + 0xb0) + 8);
        do {
          if (*(long *)(piVar8 + -2) == _INGUIAtlas_TypeInfo_12d4c68) {
            puVar3 = (undefined8 *)(lVar6 + (long)*piVar8 * 0x10 + 0x138);
            goto LAB_009ec000;
          }
          uVar7 = uVar7 + 1;
          piVar8 = piVar8 + 4;
        } while (uVar7 < *(ushort *)(lVar6 + 0x12a));
      }
      puVar3 = (undefined8 *)native_sub_3c9b34(param_6,_INGUIAtlas_TypeInfo_12d4c68,0);
LAB_009ec000:
      uVar4 = (*(code *)*puVar3)(param_6,puVar3[1]);
      *(undefined8 *)(param_5 + 0x18) = uVar4;
      native_sub_4326e0();
      lVar6 = native_UIFont__get_sprite_9ec04c(param_5);
      if (lVar6 != 0) {
        uVar13 = native_UIFont__get_uvRect_9ec330(param_5);
        *(undefined4 *)(param_5 + 0x20) = uVar13;
        *(undefined4 *)(param_5 + 0x24) = param_2;
        *(undefined4 *)(param_5 + 0x28) = param_3;
        *(undefined4 *)(param_5 + 0x2c) = param_4;
      }
    }
    if ((bRam000000000134194d & 1) == 0) {
      native_sub_43273c(&INGUIFont_TypeInfo_12d4c70);
      native_sub_43273c(&Method_System_Collections_Generic_List_BMSymbol__get_Count___12dc578);
      native_sub_43273c(&Method_System_Collections_Generic_List_BMSymbol__get_Item___12dc580);
      native_sub_43273c(&Method_NGUITools_FindActive_UILabel____12e5710);
      native_sub_43273c(&NGUITools_TypeInfo_12d53c8);
      bRam000000000134194d = 1;
    }
    plVar2 = (long *)native_UIFont__get_replacement_9eb43c(param_5);
    if (plVar2 != (long *)0x0) {
      lVar6 = *plVar2;
      if ((ulong)*(ushort *)(lVar6 + 0x12a) != 0) {
        uVar7 = 0;
        piVar8 = (int *)(*(long *)(lVar6 + 0xb0) + 8);
        do {
          if (*(long *)(piVar8 + -2) == _INGUIFont_TypeInfo_12d4c70) {
            puVar3 = (undefined8 *)(lVar6 + (long)(*piVar8 + 0x27) * 0x10 + 0x138);
            goto LAB_009ec574;
          }
          uVar7 = uVar7 + 1;
          piVar8 = piVar8 + 4;
        } while (uVar7 < *(ushort *)(lVar6 + 0x12a));
      }
      puVar3 = (undefined8 *)native_sub_3c9b34(plVar2,_INGUIFont_TypeInfo_12d4c70,0x27);
LAB_009ec574:
      (*(code *)*puVar3)(plVar2,puVar3[1]);
    }
    *(undefined8 *)(param_5 + 0x60) = 0;
    native_sub_4326e0((undefined8 *)(param_5 + 0x60),0);
    if (((*(byte *)(_NGUITools_TypeInfo_12d53c8 + 0x133) >> 2 & 1) != 0) &&
       (*(int *)(_NGUITools_TypeInfo_12d53c8 + 0xe0) == 0)) {
      native_sub_4327ec();
    }
    lVar6 = native_NGUITools__FindActive_AudioListener__4a5b30
                      (_Method_NGUITools_FindActive_UILabel____12e5710);
    if (lVar6 != 0) {
      iVar11 = (int)*(undefined8 *)(lVar6 + 0x18);
      if (0 < iVar11) {
        if (iVar11 != 0) {
          uVar12 = 0;
          do {
            lVar10 = *(long *)(lVar6 + (long)(int)uVar12 * 8 + 0x20);
            if (lVar10 == 0) goto LAB_009ec744;
            uVar7 = native_UnityEngine_Behaviour__get_enabled_8d7acc(lVar10,0);
            if ((uVar7 & 1) != 0) {
              uVar4 = native_UnityEngine_Component__get_gameObject_8da66c(lVar10,0);
              if (((*(byte *)(_NGUITools_TypeInfo_12d53c8 + 0x133) >> 2 & 1) != 0) &&
                 (*(int *)(_NGUITools_TypeInfo_12d53c8 + 0xe0) == 0)) {
                native_sub_4327ec(_NGUITools_TypeInfo_12d53c8);
              }
              uVar7 = native_NGUITools__GetActive_72d0d4(uVar4,0);
              if ((uVar7 & 1) != 0) {
                uVar4 = native_UILabel__get_font_ae77e8(lVar10,0);
                if (((*(byte *)(_NGUITools_TypeInfo_12d53c8 + 0x133) >> 2 & 1) != 0) &&
                   (*(int *)(_NGUITools_TypeInfo_12d53c8 + 0xe0) == 0)) {
                  native_sub_4327ec(_NGUITools_TypeInfo_12d53c8);
                }
                uVar7 = native_NGUITools__CheckIfRelated_7372e0(param_5,uVar4,0);
                if ((uVar7 & 1) != 0) {
                  uVar4 = native_UILabel__get_font_ae77e8(lVar10,0);
                  native_UILabel__set_font_ae79c4(lVar10,0,0);
                  native_UILabel__set_font_ae79c4(lVar10,uVar4,0);
                }
              }
            }
            uVar12 = uVar12 + 1;
            if (iVar11 <= (int)uVar12) goto LAB_009ec6c8;
          } while (uVar12 < *(uint *)(lVar6 + 0x18));
        }
        uVar4 = native_sub_43283c();
                    /* WARNING: Subroutine does not return */
        native_sub_4327dc(uVar4,0);
      }
LAB_009ec6c8:
      lVar6 = native_UIFont__get_symbols_9ebb98(param_5);
      if (lVar6 != 0) {
        uVar12 = *(uint *)(lVar6 + 0x18);
        if (0 < (int)uVar12) {
          lVar10 = 0;
          uVar1 = uVar12;
          while( true ) {
            if (uVar1 <= (uint)lVar10) {
              native_System_ThrowHelper__ThrowArgumentOutOfRangeException_9fe0f4(0);
            }
            lVar5 = *(long *)(*(long *)(lVar6 + 0x10) + lVar10 * 8 + 0x20);
            if (lVar5 == 0) goto LAB_009ec744;
            native_BMSymbol__MarkAsChanged_dd21c4(lVar5,0);
            if ((int)uVar12 <= (int)((uint)lVar10 + 1)) break;
            uVar1 = *(uint *)(lVar6 + 0x18);
            lVar10 = lVar10 + 1;
          }
        }
        return;
      }
    }
LAB_009ec744:
                    /* WARNING: Subroutine does not return */
    native_sub_432810();
  }
  lVar6 = *plVar2;
  if ((ulong)*(ushort *)(lVar6 + 0x12a) != 0) {
    uVar7 = 0;
    piVar8 = (int *)(*(long *)(lVar6 + 0xb0) + 8);
    do {
      if (*(long *)(piVar8 + -2) == _INGUIFont_TypeInfo_12d4c70) {
        puVar3 = (undefined8 *)(lVar6 + (long)(*piVar8 + 0xc) * 0x10 + 0x138);
        goto LAB_009ebf2c;
      }
      uVar7 = uVar7 + 1;
      piVar8 = piVar8 + 4;
    } while (uVar7 < *(ushort *)(lVar6 + 0x12a));
  }
  puVar3 = (undefined8 *)native_sub_3c9b34(plVar2,_INGUIFont_TypeInfo_12d4c70,0xc);
LAB_009ebf2c:
                    /* WARNING: Could not recover jumptable at 0x009ebf44. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)*puVar3)(plVar2,param_6,puVar3[1]);
  return;
}



/* UIFont$$get_symbolAtlas @ 0x9ec748
 * INGUIAtlas_o* UIFont__get_symbolAtlas (UIFont_o* __this, const MethodInfo* method); */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* UIFont$$get_symbolAtlas
   INGUIAtlas_o* UIFont__get_symbolAtlas (UIFont_o* __this, const MethodInfo* method); */

long * native_UIFont__get_symbolAtlas_9ec748(long param_1)

{
  int iVar1;
  long *plVar2;
  undefined8 *puVar3;
  long lVar4;
  ulong uVar5;
  int *piVar6;
  long lVar7;
  long *plStack_28;
  
  if ((bRam0000000001341931 & 1) == 0) {
    native_sub_43273c(&INGUIAtlas_TypeInfo_12d4c68);
    native_sub_43273c(&INGUIFont_TypeInfo_12d4c70);
    bRam0000000001341931 = 1;
  }
  plVar2 = (long *)native_UIFont__get_replacement_9eb43c(param_1);
  lVar4 = _INGUIAtlas_TypeInfo_12d4c68;
  if (plVar2 == (long *)0x0) {
    plVar2 = *(long **)(param_1 + 0x38);
    if (plVar2 != (long *)0x0) {
      lVar7 = *plVar2;
      uVar5 = native_sub_3c5e78(_INGUIAtlas_TypeInfo_12d4c68,lVar7);
      if ((uVar5 & 1) == 0) {
        if ((*(byte *)(lVar7 + 0x133) >> 4 & 1) == 0) {
          plVar2 = (long *)0x0;
        }
        else {
          if (((((*(byte *)(lVar4 + 0x114) >> 5 & 1) != 0) || (*(char *)(lVar4 + 0x2a) == '\x1e'))
              || (*(char *)(lVar4 + 0x2a) == '\x13')) &&
             ((*(long *)(lVar4 + 0x70) != 0 &&
              (lVar7 = *(long *)(*(long *)(lVar4 + 0x70) + 0x28), lVar7 != 0)))) {
            plStack_28 = (long *)native_sub_3d76d0(plVar2,lVar7);
            if (plStack_28 != (long *)0x0) {
              return plVar2;
            }
            iVar1 = (*(code *)**(undefined8 **)plVar2[2])((undefined8 *)plVar2[2],lVar7,&plStack_28)
            ;
            if (-1 < iVar1) {
              uVar5 = native_sub_3d7780(plVar2,lVar7,plStack_28);
              if ((uVar5 & 1) == 0) {
                (**(code **)(*plStack_28 + 0x10))(plStack_28);
                plStack_28 = (long *)native_sub_3d76d0(plVar2,lVar7);
              }
              if (plStack_28 != (long *)0x0) {
                return plVar2;
              }
            }
          }
          if (lRam00000000013443f8 != lVar4) {
            plVar2 = (long *)0x0;
          }
        }
      }
    }
    return plVar2;
  }
  lVar4 = *plVar2;
  if ((ulong)*(ushort *)(lVar4 + 0x12a) != 0) {
    uVar5 = 0;
    piVar6 = (int *)(*(long *)(lVar4 + 0xb0) + 8);
    do {
      if (*(long *)(piVar6 + -2) == _INGUIFont_TypeInfo_12d4c70) {
        puVar3 = (undefined8 *)(lVar4 + (long)(*piVar6 + 0xb) * 0x10 + 0x138);
        goto LAB_009ebe04;
      }
      uVar5 = uVar5 + 1;
      piVar6 = piVar6 + 4;
    } while (uVar5 < *(ushort *)(lVar4 + 0x12a));
  }
  puVar3 = (undefined8 *)native_sub_3c9b34(plVar2,_INGUIFont_TypeInfo_12d4c70,0xb);
LAB_009ebe04:
                    /* WARNING: Could not recover jumptable at 0x009ebe14. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  plVar2 = (long *)(*(code *)*puVar3)(plVar2,puVar3[1]);
  return plVar2;
}



/* UIFont$$GetSprite @ 0x9ec74c
 * UISpriteData_o* UIFont__GetSprite (UIFont_o* __this, System_String_o* spriteName, const MethodInfo* method); */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* UIFont$$GetSprite
   UISpriteData_o* UIFont__GetSprite (UIFont_o* __this, System_String_o* spriteName, const
   MethodInfo* method); */

void native_UIFont__GetSprite_9ec74c(undefined8 param_1,undefined8 param_2)

{
  long *plVar1;
  undefined8 *puVar2;
  long lVar3;
  ulong uVar4;
  int *piVar5;
  
  if ((bRam0000000001341933 & 1) == 0) {
    native_sub_43273c(&INGUIAtlas_TypeInfo_12d4c68);
    bRam0000000001341933 = 1;
  }
  plVar1 = (long *)native_UIFont__get_atlas_9ebd3c(param_1);
  if (plVar1 == (long *)0x0) {
    return;
  }
  lVar3 = *plVar1;
  if ((ulong)*(ushort *)(lVar3 + 0x12a) != 0) {
    uVar4 = 0;
    piVar5 = (int *)(*(long *)(lVar3 + 0xb0) + 8);
    do {
      if (*(long *)(piVar5 + -2) == _INGUIAtlas_TypeInfo_12d4c68) {
        puVar2 = (undefined8 *)(lVar3 + (long)(*piVar5 + 10) * 0x10 + 0x138);
        goto LAB_009ec804;
      }
      uVar4 = uVar4 + 1;
      piVar5 = piVar5 + 4;
    } while (uVar4 < *(ushort *)(lVar3 + 0x12a));
  }
  puVar2 = (undefined8 *)native_sub_3c9b34(plVar1,_INGUIAtlas_TypeInfo_12d4c68,10);
LAB_009ec804:
                    /* WARNING: Could not recover jumptable at 0x009ec81c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)*puVar2)(plVar1,param_2,puVar2[1]);
  return;
}



/* UIFont$$get_material @ 0x9ec820
 * UnityEngine_Material_o* UIFont__get_material (UIFont_o* __this, const MethodInfo* method); */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* UIFont$$get_material
   UnityEngine_Material_o* UIFont__get_material (UIFont_o* __this, const MethodInfo* method); */

undefined8 native_UIFont__get_material_9ec820(long param_1)

{
  long *plVar1;
  undefined8 *puVar2;
  undefined8 uVar3;
  long lVar4;
  ulong uVar5;
  int *piVar6;
  undefined8 uVar7;
  long lVar8;
  
  if ((bRam0000000001341934 & 1) == 0) {
    native_sub_43273c(&INGUIAtlas_TypeInfo_12d4c68);
    native_sub_43273c(&INGUIFont_TypeInfo_12d4c70);
    native_sub_43273c(&UnityEngine_Object_TypeInfo_12d54e0);
    bRam0000000001341934 = 1;
  }
  plVar1 = (long *)native_UIFont__get_replacement_9eb43c(param_1);
  if (plVar1 == (long *)0x0) {
    plVar1 = (long *)native_sub_4327f8(*(undefined8 *)(param_1 + 0x38),_INGUIAtlas_TypeInfo_12d4c68)
    ;
    if (plVar1 == (long *)0x0) {
      uVar3 = *(undefined8 *)(param_1 + 0x18);
      if (((*(byte *)(_UnityEngine_Object_TypeInfo_12d54e0 + 0x133) >> 2 & 1) != 0) &&
         (*(int *)(_UnityEngine_Object_TypeInfo_12d54e0 + 0xe0) == 0)) {
        native_sub_4327ec();
      }
      uVar5 = native_UnityEngine_Object__op_Inequality_8d76fc(uVar3,0,0);
      uVar3 = *(undefined8 *)(param_1 + 0x50);
      if ((uVar5 & 1) == 0) {
        if (((*(ushort *)(_UnityEngine_Object_TypeInfo_12d54e0 + 0x132) >> 10 & 1) != 0) &&
           (*(int *)(_UnityEngine_Object_TypeInfo_12d54e0 + 0xe0) == 0)) {
          native_sub_4327ec(_UnityEngine_Object_TypeInfo_12d54e0);
        }
        uVar5 = native_UnityEngine_Object__op_Inequality_8d76fc(uVar3,0,0);
        uVar3 = 0;
        if ((uVar5 & 1) != 0) {
          lVar4 = *(long *)(param_1 + 0x50);
          if (lVar4 != 0) {
            if (pcRam0000000001343698 == (code *)0x0) {
              pcRam0000000001343698 = (code *)native_sub_4326f0(&UNK_00ec7d87);
            }
                    /* WARNING: Could not recover jumptable at 0x00db3b6c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
            uVar3 = (*pcRam0000000001343698)(lVar4);
            return uVar3;
          }
          goto LAB_009ecaac;
        }
      }
      else {
        if (((*(ushort *)(_UnityEngine_Object_TypeInfo_12d54e0 + 0x132) >> 10 & 1) != 0) &&
           (*(int *)(_UnityEngine_Object_TypeInfo_12d54e0 + 0xe0) == 0)) {
          native_sub_4327ec(_UnityEngine_Object_TypeInfo_12d54e0);
        }
        uVar5 = native_UnityEngine_Object__op_Inequality_8d76fc(uVar3,0,0);
        if ((uVar5 & 1) != 0) {
          if (*(long *)(param_1 + 0x50) == 0) goto LAB_009ecaac;
          uVar7 = *(undefined8 *)(param_1 + 0x18);
          uVar3 = native_UnityEngine_Font__get_material_db3b30(*(long *)(param_1 + 0x50),0);
          if (((*(byte *)(_UnityEngine_Object_TypeInfo_12d54e0 + 0x133) >> 2 & 1) != 0) &&
             (*(int *)(_UnityEngine_Object_TypeInfo_12d54e0 + 0xe0) == 0)) {
            native_sub_4327ec(_UnityEngine_Object_TypeInfo_12d54e0);
          }
          uVar5 = native_UnityEngine_Object__op_Inequality_8d76fc(uVar7,uVar3,0);
          if ((uVar5 & 1) != 0) {
            if (*(long *)(param_1 + 0x50) == 0) {
LAB_009ecaac:
                    /* WARNING: Subroutine does not return */
              native_sub_432810();
            }
            lVar8 = *(long *)(param_1 + 0x18);
            lVar4 = native_UnityEngine_Font__get_material_db3b30(*(long *)(param_1 + 0x50),0);
            if ((lVar4 == 0) ||
               (uVar3 = native_UnityEngine_Material__get_mainTexture_8e3334(lVar4,0), lVar8 == 0))
            goto LAB_009ecaac;
            native_UnityEngine_Material__set_mainTexture_8e34a0(lVar8,uVar3,0);
          }
        }
        uVar3 = *(undefined8 *)(param_1 + 0x18);
      }
      return uVar3;
    }
    lVar4 = *plVar1;
    if ((ulong)*(ushort *)(lVar4 + 0x12a) != 0) {
      uVar5 = 0;
      piVar6 = (int *)(*(long *)(lVar4 + 0xb0) + 8);
      do {
        if (*(long *)(piVar6 + -2) == _INGUIAtlas_TypeInfo_12d4c68) {
          lVar4 = lVar4 + (long)*piVar6 * 0x10;
          goto LAB_009eca34;
        }
        uVar5 = uVar5 + 1;
        piVar6 = piVar6 + 4;
      } while (uVar5 < *(ushort *)(lVar4 + 0x12a));
    }
    uVar3 = 0;
    lVar4 = _INGUIAtlas_TypeInfo_12d4c68;
  }
  else {
    lVar4 = *plVar1;
    if ((ulong)*(ushort *)(lVar4 + 0x12a) != 0) {
      uVar5 = 0;
      piVar6 = (int *)(*(long *)(lVar4 + 0xb0) + 8);
      do {
        if (*(long *)(piVar6 + -2) == _INGUIFont_TypeInfo_12d4c70) {
          lVar4 = lVar4 + (long)(*piVar6 + 0xf) * 0x10;
LAB_009eca34:
          puVar2 = (undefined8 *)(lVar4 + 0x138);
          goto LAB_009eca38;
        }
        uVar5 = uVar5 + 1;
        piVar6 = piVar6 + 4;
      } while (uVar5 < *(ushort *)(lVar4 + 0x12a));
    }
    uVar3 = 0xf;
    lVar4 = _INGUIFont_TypeInfo_12d4c70;
  }
  puVar2 = (undefined8 *)native_sub_3c9b34(plVar1,lVar4,uVar3);
LAB_009eca38:
                    /* WARNING: Could not recover jumptable at 0x009eca4c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  uVar3 = (*(code *)*puVar2)(plVar1,puVar2[1]);
  return uVar3;
}



/* UIFont$$set_material @ 0x9ecab0
 * void UIFont__set_material (UIFont_o* __this, UnityEngine_Material_o* value, const MethodInfo* method); */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* UIFont$$set_material
   void UIFont__set_material (UIFont_o* __this, UnityEngine_Material_o* value, const MethodInfo*
   method); */

void native_UIFont__set_material_9ecab0(long param_1,undefined8 param_2)

{
  uint uVar1;
  long lVar2;
  long *plVar3;
  undefined8 *puVar4;
  long lVar5;
  ulong uVar6;
  int *piVar7;
  long lVar8;
  undefined8 uVar9;
  int iVar10;
  uint uVar11;
  
  if ((bRam0000000001341935 & 1) == 0) {
    native_sub_43273c(&INGUIFont_TypeInfo_12d4c70);
    native_sub_43273c(&UnityEngine_Object_TypeInfo_12d54e0);
    bRam0000000001341935 = 1;
  }
  plVar3 = (long *)native_UIFont__get_replacement_9eb43c(param_1);
  if (plVar3 == (long *)0x0) {
    uVar9 = *(undefined8 *)(param_1 + 0x18);
    if (((*(byte *)(_UnityEngine_Object_TypeInfo_12d54e0 + 0x133) >> 2 & 1) != 0) &&
       (*(int *)(_UnityEngine_Object_TypeInfo_12d54e0 + 0xe0) == 0)) {
      native_sub_4327ec();
    }
    uVar6 = native_UnityEngine_Object__op_Inequality_8d76fc(uVar9,param_2,0);
    if ((uVar6 & 1) == 0) {
      return;
    }
    *(undefined4 *)(param_1 + 0x68) = 0xffffffff;
    *(undefined8 *)(param_1 + 0x18) = param_2;
    native_sub_4326e0((undefined8 *)(param_1 + 0x18),param_2);
    if ((bRam000000000134194d & 1) == 0) {
      native_sub_43273c(&INGUIFont_TypeInfo_12d4c70);
      native_sub_43273c(&Method_System_Collections_Generic_List_BMSymbol__get_Count___12dc578);
      native_sub_43273c(&Method_System_Collections_Generic_List_BMSymbol__get_Item___12dc580);
      native_sub_43273c(&Method_NGUITools_FindActive_UILabel____12e5710);
      native_sub_43273c(&NGUITools_TypeInfo_12d53c8);
      bRam000000000134194d = 1;
    }
    plVar3 = (long *)native_UIFont__get_replacement_9eb43c(param_1);
    if (plVar3 != (long *)0x0) {
      lVar5 = *plVar3;
      if ((ulong)*(ushort *)(lVar5 + 0x12a) != 0) {
        uVar6 = 0;
        piVar7 = (int *)(*(long *)(lVar5 + 0xb0) + 8);
        do {
          if (*(long *)(piVar7 + -2) == _INGUIFont_TypeInfo_12d4c70) {
            puVar4 = (undefined8 *)(lVar5 + (long)(*piVar7 + 0x27) * 0x10 + 0x138);
            goto LAB_009ec574;
          }
          uVar6 = uVar6 + 1;
          piVar7 = piVar7 + 4;
        } while (uVar6 < *(ushort *)(lVar5 + 0x12a));
      }
      puVar4 = (undefined8 *)native_sub_3c9b34(plVar3,_INGUIFont_TypeInfo_12d4c70,0x27);
LAB_009ec574:
      (*(code *)*puVar4)(plVar3,puVar4[1]);
    }
    *(undefined8 *)(param_1 + 0x60) = 0;
    native_sub_4326e0((undefined8 *)(param_1 + 0x60),0);
    if (((*(byte *)(_NGUITools_TypeInfo_12d53c8 + 0x133) >> 2 & 1) != 0) &&
       (*(int *)(_NGUITools_TypeInfo_12d53c8 + 0xe0) == 0)) {
      native_sub_4327ec();
    }
    lVar5 = native_NGUITools__FindActive_AudioListener__4a5b30
                      (_Method_NGUITools_FindActive_UILabel____12e5710);
    if (lVar5 != 0) {
      iVar10 = (int)*(undefined8 *)(lVar5 + 0x18);
      if (0 < iVar10) {
        if (iVar10 != 0) {
          uVar11 = 0;
          do {
            lVar8 = *(long *)(lVar5 + (long)(int)uVar11 * 8 + 0x20);
            if (lVar8 == 0) goto LAB_009ec744;
            uVar6 = native_UnityEngine_Behaviour__get_enabled_8d7acc(lVar8,0);
            if ((uVar6 & 1) != 0) {
              uVar9 = native_UnityEngine_Component__get_gameObject_8da66c(lVar8,0);
              if (((*(byte *)(_NGUITools_TypeInfo_12d53c8 + 0x133) >> 2 & 1) != 0) &&
                 (*(int *)(_NGUITools_TypeInfo_12d53c8 + 0xe0) == 0)) {
                native_sub_4327ec(_NGUITools_TypeInfo_12d53c8);
              }
              uVar6 = native_NGUITools__GetActive_72d0d4(uVar9,0);
              if ((uVar6 & 1) != 0) {
                uVar9 = native_UILabel__get_font_ae77e8(lVar8,0);
                if (((*(byte *)(_NGUITools_TypeInfo_12d53c8 + 0x133) >> 2 & 1) != 0) &&
                   (*(int *)(_NGUITools_TypeInfo_12d53c8 + 0xe0) == 0)) {
                  native_sub_4327ec(_NGUITools_TypeInfo_12d53c8);
                }
                uVar6 = native_NGUITools__CheckIfRelated_7372e0(param_1,uVar9,0);
                if ((uVar6 & 1) != 0) {
                  uVar9 = native_UILabel__get_font_ae77e8(lVar8,0);
                  native_UILabel__set_font_ae79c4(lVar8,0,0);
                  native_UILabel__set_font_ae79c4(lVar8,uVar9,0);
                }
              }
            }
            uVar11 = uVar11 + 1;
            if (iVar10 <= (int)uVar11) goto LAB_009ec6c8;
          } while (uVar11 < *(uint *)(lVar5 + 0x18));
        }
        uVar9 = native_sub_43283c();
                    /* WARNING: Subroutine does not return */
        native_sub_4327dc(uVar9,0);
      }
LAB_009ec6c8:
      lVar5 = native_UIFont__get_symbols_9ebb98(param_1);
      if (lVar5 != 0) {
        uVar11 = *(uint *)(lVar5 + 0x18);
        if (0 < (int)uVar11) {
          lVar8 = 0;
          uVar1 = uVar11;
          while( true ) {
            if (uVar1 <= (uint)lVar8) {
              native_System_ThrowHelper__ThrowArgumentOutOfRangeException_9fe0f4(0);
            }
            lVar2 = *(long *)(*(long *)(lVar5 + 0x10) + lVar8 * 8 + 0x20);
            if (lVar2 == 0) goto LAB_009ec744;
            native_BMSymbol__MarkAsChanged_dd21c4(lVar2,0);
            if ((int)uVar11 <= (int)((uint)lVar8 + 1)) break;
            uVar1 = *(uint *)(lVar5 + 0x18);
            lVar8 = lVar8 + 1;
          }
        }
        return;
      }
    }
LAB_009ec744:
                    /* WARNING: Subroutine does not return */
    native_sub_432810();
  }
  lVar5 = *plVar3;
  if ((ulong)*(ushort *)(lVar5 + 0x12a) != 0) {
    uVar6 = 0;
    piVar7 = (int *)(*(long *)(lVar5 + 0xb0) + 8);
    do {
      if (*(long *)(piVar7 + -2) == _INGUIFont_TypeInfo_12d4c70) {
        puVar4 = (undefined8 *)(lVar5 + (long)(*piVar7 + 0x10) * 0x10 + 0x138);
        goto LAB_009ecbcc;
      }
      uVar6 = uVar6 + 1;
      piVar7 = piVar7 + 4;
    } while (uVar6 < *(ushort *)(lVar5 + 0x12a));
  }
  puVar4 = (undefined8 *)native_sub_3c9b34(plVar3,_INGUIFont_TypeInfo_12d4c70,0x10);
LAB_009ecbcc:
                    /* WARNING: Could not recover jumptable at 0x009ecbe4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)*puVar4)(plVar3,param_2,puVar4[1]);
  return;
}



/* UIFont$$get_premultipliedAlpha @ 0x9ecbf8
 * bool UIFont__get_premultipliedAlpha (UIFont_o* __this, const MethodInfo* method); */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* UIFont$$get_premultipliedAlpha
   bool UIFont__get_premultipliedAlpha (UIFont_o* __this, const MethodInfo* method); */

ulong native_UIFont__get_premultipliedAlpha_9ecbf8(long param_1)

{
  uint uVar1;
  long *plVar2;
  undefined8 *puVar3;
  undefined8 uVar4;
  long lVar5;
  int iVar6;
  ulong uVar7;
  int *piVar8;
  
  if ((bRam0000000001341936 & 1) == 0) {
    native_sub_43273c(&INGUIAtlas_TypeInfo_12d4c68);
    native_sub_43273c(&INGUIFont_TypeInfo_12d4c70);
    native_sub_43273c(&UnityEngine_Object_TypeInfo_12d54e0);
    native_sub_43273c(&StringLiteral_Premultiplied_12f06a8);
    bRam0000000001341936 = 1;
  }
  plVar2 = (long *)native_UIFont__get_replacement_9eb43c(param_1);
  if (plVar2 != (long *)0x0) {
    lVar5 = *plVar2;
    if ((ulong)*(ushort *)(lVar5 + 0x12a) != 0) {
      uVar7 = 0;
      piVar8 = (int *)(*(long *)(lVar5 + 0xb0) + 8);
      do {
        if (*(long *)(piVar8 + -2) == _INGUIFont_TypeInfo_12d4c70) {
          iVar6 = *piVar8 + 0x11;
LAB_009ecdf0:
          puVar3 = (undefined8 *)(lVar5 + (long)iVar6 * 0x10 + 0x138);
          goto LAB_009ecdf8;
        }
        uVar7 = uVar7 + 1;
        piVar8 = piVar8 + 4;
      } while (uVar7 < *(ushort *)(lVar5 + 0x12a));
    }
    uVar4 = 0x11;
    lVar5 = _INGUIFont_TypeInfo_12d4c70;
LAB_009ecd04:
    puVar3 = (undefined8 *)native_sub_3c9b34(plVar2,lVar5,uVar4);
LAB_009ecdf8:
                    /* WARNING: Could not recover jumptable at 0x009ece0c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    uVar7 = (*(code *)*puVar3)(plVar2,puVar3[1]);
    return uVar7;
  }
  plVar2 = (long *)native_sub_4327f8(*(undefined8 *)(param_1 + 0x38),_INGUIAtlas_TypeInfo_12d4c68);
  if (plVar2 != (long *)0x0) {
    lVar5 = *plVar2;
    if ((ulong)*(ushort *)(lVar5 + 0x12a) != 0) {
      uVar7 = 0;
      piVar8 = (int *)(*(long *)(lVar5 + 0xb0) + 8);
      do {
        if (*(long *)(piVar8 + -2) == _INGUIAtlas_TypeInfo_12d4c68) {
          iVar6 = *piVar8 + 7;
          goto LAB_009ecdf0;
        }
        uVar7 = uVar7 + 1;
        piVar8 = piVar8 + 4;
      } while (uVar7 < *(ushort *)(lVar5 + 0x12a));
    }
    uVar4 = 7;
    lVar5 = _INGUIAtlas_TypeInfo_12d4c68;
    goto LAB_009ecd04;
  }
  uVar1 = *(uint *)(param_1 + 0x68);
  if (uVar1 != 0xffffffff) goto LAB_009ece18;
  lVar5 = native_UIFont__get_material_9ec820(param_1);
  if (((*(byte *)(_UnityEngine_Object_TypeInfo_12d54e0 + 0x133) >> 2 & 1) != 0) &&
     (*(int *)(_UnityEngine_Object_TypeInfo_12d54e0 + 0xe0) == 0)) {
    native_sub_4327ec(_UnityEngine_Object_TypeInfo_12d54e0);
  }
  uVar7 = native_UnityEngine_Object__op_Inequality_8d76fc(lVar5,0,0);
  if ((uVar7 & 1) == 0) {
LAB_009ece10:
    uVar1 = 0;
  }
  else {
    if (lVar5 == 0) {
LAB_009ece30:
                    /* WARNING: Subroutine does not return */
      native_sub_432810();
    }
    uVar4 = native_UnityEngine_Material__get_shader_8e3078(lVar5,0);
    if (((*(byte *)(_UnityEngine_Object_TypeInfo_12d54e0 + 0x133) >> 2 & 1) != 0) &&
       (*(int *)(_UnityEngine_Object_TypeInfo_12d54e0 + 0xe0) == 0)) {
      native_sub_4327ec(_UnityEngine_Object_TypeInfo_12d54e0);
    }
    uVar7 = native_UnityEngine_Object__op_Inequality_8d76fc(uVar4,0,0);
    if ((uVar7 & 1) == 0) goto LAB_009ece10;
    lVar5 = native_UnityEngine_Material__get_shader_8e3078(lVar5,0);
    if ((lVar5 == 0) || (lVar5 = native_UnityEngine_Object__get_name_8e8098(lVar5,0), lVar5 == 0))
    goto LAB_009ece30;
    uVar1 = native_System_String__Contains_b0bafc(lVar5,_StringLiteral_Premultiplied_12f06a8,0);
    uVar1 = uVar1 & 1;
  }
  *(uint *)(param_1 + 0x68) = uVar1;
LAB_009ece18:
  return (ulong)(uVar1 == 1);
}



/* UIFont$$get_premultipliedAlphaShader @ 0x9ecbfc
 * bool UIFont__get_premultipliedAlphaShader (UIFont_o* __this, const MethodInfo* method); */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* UIFont$$get_premultipliedAlphaShader
   bool UIFont__get_premultipliedAlphaShader (UIFont_o* __this, const MethodInfo* method); */

ulong native_UIFont__get_premultipliedAlphaShader_9ecbfc(long param_1)

{
  uint uVar1;
  long *plVar2;
  undefined8 *puVar3;
  undefined8 uVar4;
  long lVar5;
  int iVar6;
  ulong uVar7;
  int *piVar8;
  
  if ((bRam0000000001341936 & 1) == 0) {
    native_sub_43273c(&INGUIAtlas_TypeInfo_12d4c68);
    native_sub_43273c(&INGUIFont_TypeInfo_12d4c70);
    native_sub_43273c(&UnityEngine_Object_TypeInfo_12d54e0);
    native_sub_43273c(&StringLiteral_Premultiplied_12f06a8);
    bRam0000000001341936 = 1;
  }
  plVar2 = (long *)native_UIFont__get_replacement_9eb43c(param_1);
  if (plVar2 != (long *)0x0) {
    lVar5 = *plVar2;
    if ((ulong)*(ushort *)(lVar5 + 0x12a) != 0) {
      uVar7 = 0;
      piVar8 = (int *)(*(long *)(lVar5 + 0xb0) + 8);
      do {
        if (*(long *)(piVar8 + -2) == _INGUIFont_TypeInfo_12d4c70) {
          iVar6 = *piVar8 + 0x11;
LAB_009ecdf0:
          puVar3 = (undefined8 *)(lVar5 + (long)iVar6 * 0x10 + 0x138);
          goto LAB_009ecdf8;
        }
        uVar7 = uVar7 + 1;
        piVar8 = piVar8 + 4;
      } while (uVar7 < *(ushort *)(lVar5 + 0x12a));
    }
    uVar4 = 0x11;
    lVar5 = _INGUIFont_TypeInfo_12d4c70;
LAB_009ecd04:
    puVar3 = (undefined8 *)native_sub_3c9b34(plVar2,lVar5,uVar4);
LAB_009ecdf8:
                    /* WARNING: Could not recover jumptable at 0x009ece0c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    uVar7 = (*(code *)*puVar3)(plVar2,puVar3[1]);
    return uVar7;
  }
  plVar2 = (long *)native_sub_4327f8(*(undefined8 *)(param_1 + 0x38),_INGUIAtlas_TypeInfo_12d4c68);
  if (plVar2 != (long *)0x0) {
    lVar5 = *plVar2;
    if ((ulong)*(ushort *)(lVar5 + 0x12a) != 0) {
      uVar7 = 0;
      piVar8 = (int *)(*(long *)(lVar5 + 0xb0) + 8);
      do {
        if (*(long *)(piVar8 + -2) == _INGUIAtlas_TypeInfo_12d4c68) {
          iVar6 = *piVar8 + 7;
          goto LAB_009ecdf0;
        }
        uVar7 = uVar7 + 1;
        piVar8 = piVar8 + 4;
      } while (uVar7 < *(ushort *)(lVar5 + 0x12a));
    }
    uVar4 = 7;
    lVar5 = _INGUIAtlas_TypeInfo_12d4c68;
    goto LAB_009ecd04;
  }
  uVar1 = *(uint *)(param_1 + 0x68);
  if (uVar1 != 0xffffffff) goto LAB_009ece18;
  lVar5 = native_UIFont__get_material_9ec820(param_1);
  if (((*(byte *)(_UnityEngine_Object_TypeInfo_12d54e0 + 0x133) >> 2 & 1) != 0) &&
     (*(int *)(_UnityEngine_Object_TypeInfo_12d54e0 + 0xe0) == 0)) {
    native_sub_4327ec(_UnityEngine_Object_TypeInfo_12d54e0);
  }
  uVar7 = native_UnityEngine_Object__op_Inequality_8d76fc(lVar5,0,0);
  if ((uVar7 & 1) == 0) {
LAB_009ece10:
    uVar1 = 0;
  }
  else {
    if (lVar5 == 0) {
LAB_009ece30:
                    /* WARNING: Subroutine does not return */
      native_sub_432810();
    }
    uVar4 = native_UnityEngine_Material__get_shader_8e3078(lVar5,0);
    if (((*(byte *)(_UnityEngine_Object_TypeInfo_12d54e0 + 0x133) >> 2 & 1) != 0) &&
       (*(int *)(_UnityEngine_Object_TypeInfo_12d54e0 + 0xe0) == 0)) {
      native_sub_4327ec(_UnityEngine_Object_TypeInfo_12d54e0);
    }
    uVar7 = native_UnityEngine_Object__op_Inequality_8d76fc(uVar4,0,0);
    if ((uVar7 & 1) == 0) goto LAB_009ece10;
    lVar5 = native_UnityEngine_Material__get_shader_8e3078(lVar5,0);
    if ((lVar5 == 0) || (lVar5 = native_UnityEngine_Object__get_name_8e8098(lVar5,0), lVar5 == 0))
    goto LAB_009ece30;
    uVar1 = native_System_String__Contains_b0bafc(lVar5,_StringLiteral_Premultiplied_12f06a8,0);
    uVar1 = uVar1 & 1;
  }
  *(uint *)(param_1 + 0x68) = uVar1;
LAB_009ece18:
  return (ulong)(uVar1 == 1);
}



/* UIFont$$get_packedFontShader @ 0x9ece34
 * bool UIFont__get_packedFontShader (UIFont_o* __this, const MethodInfo* method); */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* UIFont$$get_packedFontShader
   bool UIFont__get_packedFontShader (UIFont_o* __this, const MethodInfo* method); */

ulong native_UIFont__get_packedFontShader_9ece34(long param_1)

{
  uint uVar1;
  long *plVar2;
  undefined8 *puVar3;
  long lVar4;
  ulong uVar5;
  int *piVar6;
  undefined8 uVar7;
  
  if ((bRam0000000001341937 & 1) == 0) {
    native_sub_43273c(&INGUIFont_TypeInfo_12d4c70);
    native_sub_43273c(&UnityEngine_Object_TypeInfo_12d54e0);
    native_sub_43273c(&StringLiteral_Packed_12f04c8);
    bRam0000000001341937 = 1;
  }
  plVar2 = (long *)native_UIFont__get_replacement_9eb43c(param_1);
  if (plVar2 != (long *)0x0) {
    lVar4 = *plVar2;
    if ((ulong)*(ushort *)(lVar4 + 0x12a) != 0) {
      uVar5 = 0;
      piVar6 = (int *)(*(long *)(lVar4 + 0xb0) + 8);
      do {
        if (*(long *)(piVar6 + -2) == _INGUIFont_TypeInfo_12d4c70) {
          puVar3 = (undefined8 *)(lVar4 + (long)(*piVar6 + 0x12) * 0x10 + 0x138);
          goto LAB_009ecf30;
        }
        uVar5 = uVar5 + 1;
        piVar6 = piVar6 + 4;
      } while (uVar5 < *(ushort *)(lVar4 + 0x12a));
    }
    puVar3 = (undefined8 *)native_sub_3c9b34(plVar2,_INGUIFont_TypeInfo_12d4c70,0x12);
LAB_009ecf30:
                    /* WARNING: Could not recover jumptable at 0x009ecf44. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    uVar5 = (*(code *)*puVar3)(plVar2,puVar3[1]);
    return uVar5;
  }
  uVar7 = *(undefined8 *)(param_1 + 0x38);
  if (((*(byte *)(_UnityEngine_Object_TypeInfo_12d54e0 + 0x133) >> 2 & 1) != 0) &&
     (*(int *)(_UnityEngine_Object_TypeInfo_12d54e0 + 0xe0) == 0)) {
    native_sub_4327ec();
  }
  uVar5 = native_UnityEngine_Object__op_Inequality_8d76fc(uVar7,0,0);
  if ((uVar5 & 1) != 0) {
    return 0;
  }
  uVar1 = *(uint *)(param_1 + 0x6c);
  if (uVar1 != 0xffffffff) goto LAB_009ed014;
  lVar4 = native_UIFont__get_material_9ec820(param_1);
  if (((*(byte *)(_UnityEngine_Object_TypeInfo_12d54e0 + 0x133) >> 2 & 1) != 0) &&
     (*(int *)(_UnityEngine_Object_TypeInfo_12d54e0 + 0xe0) == 0)) {
    native_sub_4327ec(_UnityEngine_Object_TypeInfo_12d54e0);
  }
  uVar5 = native_UnityEngine_Object__op_Inequality_8d76fc(lVar4,0,0);
  if ((uVar5 & 1) == 0) {
LAB_009ed00c:
    uVar1 = 0;
  }
  else {
    if (lVar4 == 0) {
LAB_009ed02c:
                    /* WARNING: Subroutine does not return */
      native_sub_432810();
    }
    uVar7 = native_UnityEngine_Material__get_shader_8e3078(lVar4,0);
    if (((*(byte *)(_UnityEngine_Object_TypeInfo_12d54e0 + 0x133) >> 2 & 1) != 0) &&
       (*(int *)(_UnityEngine_Object_TypeInfo_12d54e0 + 0xe0) == 0)) {
      native_sub_4327ec(_UnityEngine_Object_TypeInfo_12d54e0);
    }
    uVar5 = native_UnityEngine_Object__op_Inequality_8d76fc(uVar7,0,0);
    if ((uVar5 & 1) == 0) goto LAB_009ed00c;
    lVar4 = native_UnityEngine_Material__get_shader_8e3078(lVar4,0);
    if ((lVar4 == 0) || (lVar4 = native_UnityEngine_Object__get_name_8e8098(lVar4,0), lVar4 == 0))
    goto LAB_009ed02c;
    uVar1 = native_System_String__Contains_b0bafc(lVar4,_StringLiteral_Packed_12f04c8,0);
    uVar1 = uVar1 & 1;
  }
  *(uint *)(param_1 + 0x6c) = uVar1;
LAB_009ed014:
  return (ulong)(uVar1 == 1);
}



/* UIFont$$get_texture @ 0x9ed030
 * UnityEngine_Texture2D_o* UIFont__get_texture (UIFont_o* __this, const MethodInfo* method); */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* UIFont$$get_texture
   UnityEngine_Texture2D_o* UIFont__get_texture (UIFont_o* __this, const MethodInfo* method); */

long * native_UIFont__get_texture_9ed030(undefined8 param_1)

{
  long *plVar1;
  undefined8 *puVar2;
  long lVar3;
  ulong uVar4;
  int *piVar5;
  
  if ((bRam0000000001341938 & 1) == 0) {
    native_sub_43273c(&INGUIFont_TypeInfo_12d4c70);
    native_sub_43273c(&UnityEngine_Object_TypeInfo_12d54e0);
    native_sub_43273c(&UnityEngine_Texture2D_TypeInfo_12d61f0);
    bRam0000000001341938 = 1;
  }
  plVar1 = (long *)native_UIFont__get_replacement_9eb43c(param_1);
  if (plVar1 == (long *)0x0) {
    lVar3 = native_UIFont__get_material_9ec820(param_1);
    if (((*(byte *)(_UnityEngine_Object_TypeInfo_12d54e0 + 0x133) >> 2 & 1) != 0) &&
       (*(int *)(_UnityEngine_Object_TypeInfo_12d54e0 + 0xe0) == 0)) {
      native_sub_4327ec(_UnityEngine_Object_TypeInfo_12d54e0);
    }
    uVar4 = native_UnityEngine_Object__op_Inequality_8d76fc(lVar3,0,0);
    plVar1 = (long *)0x0;
    if ((uVar4 & 1) != 0) {
      if (lVar3 == 0) {
                    /* WARNING: Subroutine does not return */
        native_sub_432810(0);
      }
      plVar1 = (long *)native_UnityEngine_Material__get_mainTexture_8e3334(lVar3,0);
      if ((plVar1 != (long *)0x0) && (*plVar1 != _UnityEngine_Texture2D_TypeInfo_12d61f0)) {
        plVar1 = (long *)0x0;
      }
    }
    return plVar1;
  }
  lVar3 = *plVar1;
  if ((ulong)*(ushort *)(lVar3 + 0x12a) != 0) {
    uVar4 = 0;
    piVar5 = (int *)(*(long *)(lVar3 + 0xb0) + 8);
    do {
      if (*(long *)(piVar5 + -2) == _INGUIFont_TypeInfo_12d4c70) {
        puVar2 = (undefined8 *)(lVar3 + (long)(*piVar5 + 0x13) * 0x10 + 0x138);
        goto LAB_009ed16c;
      }
      uVar4 = uVar4 + 1;
      piVar5 = piVar5 + 4;
    } while (uVar4 < *(ushort *)(lVar3 + 0x12a));
  }
  puVar2 = (undefined8 *)native_sub_3c9b34(plVar1,_INGUIFont_TypeInfo_12d4c70,0x13);
LAB_009ed16c:
                    /* WARNING: Could not recover jumptable at 0x009ed17c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  plVar1 = (long *)(*(code *)*puVar2)(plVar1,puVar2[1]);
  return plVar1;
}



/* UIFont$$get_uvRect @ 0x9ec330
 * UnityEngine_Rect_o UIFont__get_uvRect (UIFont_o* __this, const MethodInfo* method); */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* UIFont$$get_uvRect
   UnityEngine_Rect_o UIFont__get_uvRect (UIFont_o* __this, const MethodInfo* method); */

undefined1  [16] native_UIFont__get_uvRect_9ec330(long param_1)

{
  long *plVar1;
  undefined8 *puVar2;
  long lVar3;
  ulong uVar4;
  int *piVar5;
  undefined8 uVar6;
  undefined4 extraout_s0;
  undefined4 uVar8;
  undefined4 extraout_var;
  undefined8 extraout_var_00;
  undefined1 auVar7 [16];
  undefined8 uStack_30;
  undefined8 uStack_28;
  
  if ((bRam0000000001341939 & 1) == 0) {
    native_sub_43273c(&INGUIFont_TypeInfo_12d4c70);
    native_sub_43273c(&UnityEngine_Object_TypeInfo_12d54e0);
    bRam0000000001341939 = 1;
  }
  plVar1 = (long *)native_UIFont__get_replacement_9eb43c(param_1);
  if (plVar1 == (long *)0x0) {
    uVar6 = *(undefined8 *)(param_1 + 0x38);
    if (((*(byte *)(_UnityEngine_Object_TypeInfo_12d54e0 + 0x133) >> 2 & 1) != 0) &&
       (*(int *)(_UnityEngine_Object_TypeInfo_12d54e0 + 0xe0) == 0)) {
      native_sub_4327ec();
    }
    uVar4 = native_UnityEngine_Object__op_Inequality_8d76fc(uVar6,0,0);
    if (((uVar4 & 1) == 0) || (lVar3 = native_UIFont__get_sprite_9ec04c(param_1), lVar3 == 0)) {
      uStack_30 = 0;
      uStack_28 = 0;
      native_UnityEngine_Rect___ctor_7635c8(0,0,0x3f800000,0x3f800000,&uStack_30,0);
      uVar8 = 0;
      uVar6 = 0;
    }
    else {
      uStack_30._0_4_ = *(undefined4 *)(param_1 + 0x20);
      uVar8 = 0;
      uVar6 = 0;
    }
  }
  else {
    lVar3 = *plVar1;
    if ((ulong)*(ushort *)(lVar3 + 0x12a) != 0) {
      uVar4 = 0;
      piVar5 = (int *)(*(long *)(lVar3 + 0xb0) + 8);
      do {
        if (*(long *)(piVar5 + -2) == _INGUIFont_TypeInfo_12d4c70) {
          puVar2 = (undefined8 *)(lVar3 + (long)(*piVar5 + 0x14) * 0x10 + 0x138);
          goto LAB_009ec474;
        }
        uVar4 = uVar4 + 1;
        piVar5 = piVar5 + 4;
      } while (uVar4 < *(ushort *)(lVar3 + 0x12a));
    }
    puVar2 = (undefined8 *)native_sub_3c9b34(plVar1,_INGUIFont_TypeInfo_12d4c70,0x14);
LAB_009ec474:
    (*(code *)*puVar2)(plVar1,puVar2[1]);
    uStack_30._0_4_ = extraout_s0;
    uVar8 = extraout_var;
    uVar6 = extraout_var_00;
  }
  auVar7._4_4_ = uVar8;
  auVar7._0_4_ = (undefined4)uStack_30;
  auVar7._8_8_ = uVar6;
  return auVar7;
}



/* UIFont$$set_uvRect @ 0x9ed184
 * void UIFont__set_uvRect (UIFont_o* __this, UnityEngine_Rect_o value, const MethodInfo* method); */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* UIFont$$set_uvRect
   void UIFont__set_uvRect (UIFont_o* __this, UnityEngine_Rect_o value, const MethodInfo* method);
    */

void native_UIFont__set_uvRect_9ed184
               (undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
               long param_5)

{
  uint uVar1;
  undefined8 uVar2;
  long lVar3;
  long *plVar4;
  undefined8 *puVar5;
  long lVar6;
  ulong uVar7;
  int *piVar8;
  long lVar9;
  int iVar10;
  uint uVar11;
  
  if ((bRam000000000134193a & 1) == 0) {
    native_sub_43273c(&INGUIFont_TypeInfo_12d4c70);
    bRam000000000134193a = 1;
  }
  plVar4 = (long *)native_UIFont__get_replacement_9eb43c(param_5);
  if (plVar4 == (long *)0x0) {
    lVar6 = native_UIFont__get_sprite_9ec04c(param_5);
    if ((lVar6 != 0) ||
       (uVar7 = native_UnityEngine_Rect__op_Inequality_763890
                          (*(undefined4 *)(param_5 + 0x20),*(undefined4 *)(param_5 + 0x24),
                           *(undefined4 *)(param_5 + 0x28),*(undefined4 *)(param_5 + 0x2c),param_1,
                           param_2,param_3,param_4), (uVar7 & 1) == 0)) {
      return;
    }
    *(int *)(param_5 + 0x20) = (int)param_1;
    *(int *)(param_5 + 0x24) = (int)param_2;
    *(int *)(param_5 + 0x28) = (int)param_3;
    *(int *)(param_5 + 0x2c) = (int)param_4;
    if ((bRam000000000134194d & 1) == 0) {
      native_sub_43273c(&INGUIFont_TypeInfo_12d4c70);
      native_sub_43273c(&Method_System_Collections_Generic_List_BMSymbol__get_Count___12dc578);
      native_sub_43273c(&Method_System_Collections_Generic_List_BMSymbol__get_Item___12dc580);
      native_sub_43273c(&Method_NGUITools_FindActive_UILabel____12e5710);
      native_sub_43273c(&NGUITools_TypeInfo_12d53c8);
      bRam000000000134194d = 1;
    }
    plVar4 = (long *)native_UIFont__get_replacement_9eb43c(param_5);
    if (plVar4 != (long *)0x0) {
      lVar6 = *plVar4;
      if ((ulong)*(ushort *)(lVar6 + 0x12a) != 0) {
        uVar7 = 0;
        piVar8 = (int *)(*(long *)(lVar6 + 0xb0) + 8);
        do {
          if (*(long *)(piVar8 + -2) == _INGUIFont_TypeInfo_12d4c70) {
            puVar5 = (undefined8 *)(lVar6 + (long)(*piVar8 + 0x27) * 0x10 + 0x138);
            goto LAB_009ec574;
          }
          uVar7 = uVar7 + 1;
          piVar8 = piVar8 + 4;
        } while (uVar7 < *(ushort *)(lVar6 + 0x12a));
      }
      puVar5 = (undefined8 *)native_sub_3c9b34(plVar4,_INGUIFont_TypeInfo_12d4c70,0x27);
LAB_009ec574:
      (*(code *)*puVar5)(plVar4,puVar5[1]);
    }
    *(undefined8 *)(param_5 + 0x60) = 0;
    native_sub_4326e0((undefined8 *)(param_5 + 0x60),0);
    if (((*(byte *)(_NGUITools_TypeInfo_12d53c8 + 0x133) >> 2 & 1) != 0) &&
       (*(int *)(_NGUITools_TypeInfo_12d53c8 + 0xe0) == 0)) {
      native_sub_4327ec();
    }
    lVar6 = native_NGUITools__FindActive_AudioListener__4a5b30
                      (_Method_NGUITools_FindActive_UILabel____12e5710);
    if (lVar6 != 0) {
      iVar10 = (int)*(undefined8 *)(lVar6 + 0x18);
      if (0 < iVar10) {
        if (iVar10 != 0) {
          uVar11 = 0;
          do {
            lVar9 = *(long *)(lVar6 + (long)(int)uVar11 * 8 + 0x20);
            if (lVar9 == 0) goto LAB_009ec744;
            uVar7 = native_UnityEngine_Behaviour__get_enabled_8d7acc(lVar9,0);
            if ((uVar7 & 1) != 0) {
              uVar2 = native_UnityEngine_Component__get_gameObject_8da66c(lVar9,0);
              if (((*(byte *)(_NGUITools_TypeInfo_12d53c8 + 0x133) >> 2 & 1) != 0) &&
                 (*(int *)(_NGUITools_TypeInfo_12d53c8 + 0xe0) == 0)) {
                native_sub_4327ec(_NGUITools_TypeInfo_12d53c8);
              }
              uVar7 = native_NGUITools__GetActive_72d0d4(uVar2,0);
              if ((uVar7 & 1) != 0) {
                uVar2 = native_UILabel__get_font_ae77e8(lVar9,0);
                if (((*(byte *)(_NGUITools_TypeInfo_12d53c8 + 0x133) >> 2 & 1) != 0) &&
                   (*(int *)(_NGUITools_TypeInfo_12d53c8 + 0xe0) == 0)) {
                  native_sub_4327ec(_NGUITools_TypeInfo_12d53c8);
                }
                uVar7 = native_NGUITools__CheckIfRelated_7372e0(param_5,uVar2,0);
                if ((uVar7 & 1) != 0) {
                  uVar2 = native_UILabel__get_font_ae77e8(lVar9,0);
                  native_UILabel__set_font_ae79c4(lVar9,0,0);
                  native_UILabel__set_font_ae79c4(lVar9,uVar2,0);
                }
              }
            }
            uVar11 = uVar11 + 1;
            if (iVar10 <= (int)uVar11) goto LAB_009ec6c8;
          } while (uVar11 < *(uint *)(lVar6 + 0x18));
        }
        uVar2 = native_sub_43283c();
                    /* WARNING: Subroutine does not return */
        native_sub_4327dc(uVar2,0);
      }
LAB_009ec6c8:
      lVar6 = native_UIFont__get_symbols_9ebb98(param_5);
      if (lVar6 != 0) {
        uVar11 = *(uint *)(lVar6 + 0x18);
        if (0 < (int)uVar11) {
          lVar9 = 0;
          uVar1 = uVar11;
          while( true ) {
            if (uVar1 <= (uint)lVar9) {
              native_System_ThrowHelper__ThrowArgumentOutOfRangeException_9fe0f4(0);
            }
            lVar3 = *(long *)(*(long *)(lVar6 + 0x10) + lVar9 * 8 + 0x20);
            if (lVar3 == 0) goto LAB_009ec744;
            native_BMSymbol__MarkAsChanged_dd21c4(lVar3,0);
            if ((int)uVar11 <= (int)((uint)lVar9 + 1)) break;
            uVar1 = *(uint *)(lVar6 + 0x18);
            lVar9 = lVar9 + 1;
          }
        }
        return;
      }
    }
LAB_009ec744:
                    /* WARNING: Subroutine does not return */
    native_sub_432810();
  }
  lVar6 = *plVar4;
  if ((ulong)*(ushort *)(lVar6 + 0x12a) != 0) {
    uVar7 = 0;
    piVar8 = (int *)(*(long *)(lVar6 + 0xb0) + 8);
    do {
      if (*(long *)(piVar8 + -2) == _INGUIFont_TypeInfo_12d4c70) {
        puVar5 = (undefined8 *)(lVar6 + (long)(*piVar8 + 0x15) * 0x10 + 0x138);
        goto LAB_009ed29c;
      }
      uVar7 = uVar7 + 1;
      piVar8 = piVar8 + 4;
    } while (uVar7 < *(ushort *)(lVar6 + 0x12a));
  }
  puVar5 = (undefined8 *)native_sub_3c9b34(plVar4,_INGUIFont_TypeInfo_12d4c70,0x15);
LAB_009ed29c:
                    /* WARNING: Could not recover jumptable at 0x009ed2c4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)*puVar5)(param_1,param_2,param_3,param_4,plVar4,puVar5[1]);
  return;
}



/* UIFont$$get_spriteName @ 0x9ed2c8
 * System_String_o* UIFont__get_spriteName (UIFont_o* __this, const MethodInfo* method); */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* UIFont$$get_spriteName
   System_String_o* UIFont__get_spriteName (UIFont_o* __this, const MethodInfo* method); */

undefined8 native_UIFont__get_spriteName_9ed2c8(long param_1)

{
  long *plVar1;
  undefined8 *puVar2;
  undefined8 uVar3;
  long lVar4;
  ulong uVar5;
  int *piVar6;
  
  if ((bRam000000000134193b & 1) == 0) {
    native_sub_43273c(&INGUIFont_TypeInfo_12d4c70);
    bRam000000000134193b = 1;
  }
  plVar1 = (long *)native_UIFont__get_replacement_9eb43c(param_1);
  if (plVar1 == (long *)0x0) {
    if (*(long *)(param_1 + 0x30) != 0) {
      return *(undefined8 *)(*(long *)(param_1 + 0x30) + 0x20);
    }
                    /* WARNING: Subroutine does not return */
    native_sub_432810();
  }
  lVar4 = *plVar1;
  if ((ulong)*(ushort *)(lVar4 + 0x12a) != 0) {
    uVar5 = 0;
    piVar6 = (int *)(*(long *)(lVar4 + 0xb0) + 8);
    do {
      if (*(long *)(piVar6 + -2) == _INGUIFont_TypeInfo_12d4c70) {
        puVar2 = (undefined8 *)(lVar4 + (long)(*piVar6 + 0x16) * 0x10 + 0x138);
        goto LAB_009ed380;
      }
      uVar5 = uVar5 + 1;
      piVar6 = piVar6 + 4;
    } while (uVar5 < *(ushort *)(lVar4 + 0x12a));
  }
  puVar2 = (undefined8 *)native_sub_3c9b34(plVar1,_INGUIFont_TypeInfo_12d4c70,0x16);
LAB_009ed380:
                    /* WARNING: Could not recover jumptable at 0x009ed390. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  uVar3 = (*(code *)*puVar2)(plVar1,puVar2[1]);
  return uVar3;
}



/* UIFont$$set_spriteName @ 0x9ed398
 * void UIFont__set_spriteName (UIFont_o* __this, System_String_o* value, const MethodInfo* method); */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* UIFont$$set_spriteName
   void UIFont__set_spriteName (UIFont_o* __this, System_String_o* value, const MethodInfo* method);
    */

void native_UIFont__set_spriteName_9ed398(long param_1,undefined8 param_2)

{
  uint uVar1;
  undefined8 uVar2;
  long lVar3;
  long *plVar4;
  undefined8 *puVar5;
  long lVar6;
  ulong uVar7;
  int *piVar8;
  long lVar9;
  int iVar10;
  uint uVar11;
  
  if ((bRam000000000134193c & 1) == 0) {
    native_sub_43273c(&INGUIFont_TypeInfo_12d4c70);
    bRam000000000134193c = 1;
  }
  plVar4 = (long *)native_UIFont__get_replacement_9eb43c(param_1);
  if (plVar4 == (long *)0x0) {
    if (*(long *)(param_1 + 0x30) != 0) {
      uVar7 = native_System_String__op_Inequality_afbbb4
                        (*(undefined8 *)(*(long *)(param_1 + 0x30) + 0x20),param_2,0);
      if ((uVar7 & 1) == 0) {
        return;
      }
      if (*(long *)(param_1 + 0x30) != 0) {
        puVar5 = (undefined8 *)(*(long *)(param_1 + 0x30) + 0x20);
        *puVar5 = param_2;
        native_sub_4326e0(puVar5,param_2);
        if ((bRam000000000134194d & 1) == 0) {
          native_sub_43273c(&INGUIFont_TypeInfo_12d4c70);
          native_sub_43273c(&Method_System_Collections_Generic_List_BMSymbol__get_Count___12dc578);
          native_sub_43273c(&Method_System_Collections_Generic_List_BMSymbol__get_Item___12dc580);
          native_sub_43273c(&Method_NGUITools_FindActive_UILabel____12e5710);
          native_sub_43273c(&NGUITools_TypeInfo_12d53c8);
          bRam000000000134194d = 1;
        }
        plVar4 = (long *)native_UIFont__get_replacement_9eb43c(param_1);
        if (plVar4 != (long *)0x0) {
          lVar6 = *plVar4;
          if ((ulong)*(ushort *)(lVar6 + 0x12a) != 0) {
            uVar7 = 0;
            piVar8 = (int *)(*(long *)(lVar6 + 0xb0) + 8);
            do {
              if (*(long *)(piVar8 + -2) == _INGUIFont_TypeInfo_12d4c70) {
                puVar5 = (undefined8 *)(lVar6 + (long)(*piVar8 + 0x27) * 0x10 + 0x138);
                goto LAB_009ec574;
              }
              uVar7 = uVar7 + 1;
              piVar8 = piVar8 + 4;
            } while (uVar7 < *(ushort *)(lVar6 + 0x12a));
          }
          puVar5 = (undefined8 *)native_sub_3c9b34(plVar4,_INGUIFont_TypeInfo_12d4c70,0x27);
LAB_009ec574:
          (*(code *)*puVar5)(plVar4,puVar5[1]);
        }
        *(undefined8 *)(param_1 + 0x60) = 0;
        native_sub_4326e0((undefined8 *)(param_1 + 0x60),0);
        if (((*(byte *)(_NGUITools_TypeInfo_12d53c8 + 0x133) >> 2 & 1) != 0) &&
           (*(int *)(_NGUITools_TypeInfo_12d53c8 + 0xe0) == 0)) {
          native_sub_4327ec();
        }
        lVar6 = native_NGUITools__FindActive_AudioListener__4a5b30
                          (_Method_NGUITools_FindActive_UILabel____12e5710);
        if (lVar6 != 0) {
          iVar10 = (int)*(undefined8 *)(lVar6 + 0x18);
          if (0 < iVar10) {
            if (iVar10 != 0) {
              uVar11 = 0;
              do {
                lVar9 = *(long *)(lVar6 + (long)(int)uVar11 * 8 + 0x20);
                if (lVar9 == 0) goto LAB_009ec744;
                uVar7 = native_UnityEngine_Behaviour__get_enabled_8d7acc(lVar9,0);
                if ((uVar7 & 1) != 0) {
                  uVar2 = native_UnityEngine_Component__get_gameObject_8da66c(lVar9,0);
                  if (((*(byte *)(_NGUITools_TypeInfo_12d53c8 + 0x133) >> 2 & 1) != 0) &&
                     (*(int *)(_NGUITools_TypeInfo_12d53c8 + 0xe0) == 0)) {
                    native_sub_4327ec(_NGUITools_TypeInfo_12d53c8);
                  }
                  uVar7 = native_NGUITools__GetActive_72d0d4(uVar2,0);
                  if ((uVar7 & 1) != 0) {
                    uVar2 = native_UILabel__get_font_ae77e8(lVar9,0);
                    if (((*(byte *)(_NGUITools_TypeInfo_12d53c8 + 0x133) >> 2 & 1) != 0) &&
                       (*(int *)(_NGUITools_TypeInfo_12d53c8 + 0xe0) == 0)) {
                      native_sub_4327ec(_NGUITools_TypeInfo_12d53c8);
                    }
                    uVar7 = native_NGUITools__CheckIfRelated_7372e0(param_1,uVar2,0);
                    if ((uVar7 & 1) != 0) {
                      uVar2 = native_UILabel__get_font_ae77e8(lVar9,0);
                      native_UILabel__set_font_ae79c4(lVar9,0,0);
                      native_UILabel__set_font_ae79c4(lVar9,uVar2,0);
                    }
                  }
                }
                uVar11 = uVar11 + 1;
                if (iVar10 <= (int)uVar11) goto LAB_009ec6c8;
              } while (uVar11 < *(uint *)(lVar6 + 0x18));
            }
            uVar2 = native_sub_43283c();
                    /* WARNING: Subroutine does not return */
            native_sub_4327dc(uVar2,0);
          }
LAB_009ec6c8:
          lVar6 = native_UIFont__get_symbols_9ebb98(param_1);
          if (lVar6 != 0) {
            uVar11 = *(uint *)(lVar6 + 0x18);
            if (0 < (int)uVar11) {
              lVar9 = 0;
              uVar1 = uVar11;
              while( true ) {
                if (uVar1 <= (uint)lVar9) {
                  native_System_ThrowHelper__ThrowArgumentOutOfRangeException_9fe0f4(0);
                }
                lVar3 = *(long *)(*(long *)(lVar6 + 0x10) + lVar9 * 8 + 0x20);
                if (lVar3 == 0) goto LAB_009ec744;
                native_BMSymbol__MarkAsChanged_dd21c4(lVar3,0);
                if ((int)uVar11 <= (int)((uint)lVar9 + 1)) break;
                uVar1 = *(uint *)(lVar6 + 0x18);
                lVar9 = lVar9 + 1;
              }
            }
            return;
          }
        }
LAB_009ec744:
                    /* WARNING: Subroutine does not return */
        native_sub_432810();
      }
    }
                    /* WARNING: Subroutine does not return */
    native_sub_432810();
  }
  lVar6 = *plVar4;
  if ((ulong)*(ushort *)(lVar6 + 0x12a) != 0) {
    uVar7 = 0;
    piVar8 = (int *)(*(long *)(lVar6 + 0xb0) + 8);
    do {
      if (*(long *)(piVar8 + -2) == _INGUIFont_TypeInfo_12d4c70) {
        puVar5 = (undefined8 *)(lVar6 + (long)(*piVar8 + 0x17) * 0x10 + 0x138);
        goto LAB_009ed484;
      }
      uVar7 = uVar7 + 1;
      piVar8 = piVar8 + 4;
    } while (uVar7 < *(ushort *)(lVar6 + 0x12a));
  }
  puVar5 = (undefined8 *)native_sub_3c9b34(plVar4,_INGUIFont_TypeInfo_12d4c70,0x17);
LAB_009ed484:
                    /* WARNING: Could not recover jumptable at 0x009ed49c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)*puVar5)(plVar4,param_2,puVar5[1]);
  return;
}



/* UIFont$$get_isValid @ 0x9ed4b4
 * bool UIFont__get_isValid (UIFont_o* __this, const MethodInfo* method); */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* UIFont$$get_isValid
   bool UIFont__get_isValid (UIFont_o* __this, const MethodInfo* method); */

bool native_UIFont__get_isValid_9ed4b4(long param_1)

{
  ulong uVar1;
  long lVar2;
  undefined8 uVar3;
  
  if ((bRam000000000134193d & 1) == 0) {
    native_sub_43273c(&UnityEngine_Object_TypeInfo_12d54e0);
    bRam000000000134193d = 1;
  }
  uVar3 = *(undefined8 *)(param_1 + 0x50);
  if (((*(byte *)(_UnityEngine_Object_TypeInfo_12d54e0 + 0x133) >> 2 & 1) != 0) &&
     (*(int *)(_UnityEngine_Object_TypeInfo_12d54e0 + 0xe0) == 0)) {
    native_sub_4327ec();
  }
  uVar1 = native_UnityEngine_Object__op_Inequality_8d76fc(uVar3,0,0);
  if ((uVar1 & 1) != 0) {
    return true;
  }
  lVar2 = *(long *)(param_1 + 0x30);
  if (lVar2 == 0) {
                    /* WARNING: Subroutine does not return */
    native_sub_432810();
  }
  if ((bRam0000000001346e2d & 1) == 0) {
    native_sub_43273c(&Method_System_Collections_Generic_List_BMGlyph__get_Count___12dc550,0);
    bRam0000000001346e2d = 1;
  }
  lVar2 = *(long *)(lVar2 + 0x28);
  if (lVar2 != 0) {
    return 0 < *(int *)(lVar2 + 0x18);
  }
                    /* WARNING: Subroutine does not return */
  native_sub_432810();
}



/* UIFont$$get_size @ 0x9ed548
 * int32_t UIFont__get_size (UIFont_o* __this, const MethodInfo* method); */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* UIFont$$get_size
   int32_t UIFont__get_size (UIFont_o* __this, const MethodInfo* method); */

ulong native_UIFont__get_size_9ed548(long param_1)

{
  uint uVar1;
  long *plVar2;
  undefined8 *puVar3;
  long lVar4;
  ulong uVar5;
  int *piVar6;
  
  if ((bRam000000000134193e & 1) == 0) {
    native_sub_43273c(&INGUIFont_TypeInfo_12d4c70);
    bRam000000000134193e = 1;
  }
  plVar2 = (long *)native_UIFont__get_replacement_9eb43c(param_1);
  if (plVar2 == (long *)0x0) {
    uVar5 = native_UIFont__get_isDynamic_9ed708(param_1);
    if (((uVar5 & 1) == 0) && (*(long *)(param_1 + 0x30) != 0)) {
      uVar1 = *(uint *)(*(long *)(param_1 + 0x30) + 0x10);
    }
    else {
      uVar1 = *(uint *)(param_1 + 0x58);
    }
    return (ulong)uVar1;
  }
  lVar4 = *plVar2;
  if ((ulong)*(ushort *)(lVar4 + 0x12a) != 0) {
    uVar5 = 0;
    piVar6 = (int *)(*(long *)(lVar4 + 0xb0) + 8);
    do {
      if (*(long *)(piVar6 + -2) == _INGUIFont_TypeInfo_12d4c70) {
        puVar3 = (undefined8 *)(lVar4 + (long)(*piVar6 + 0x19) * 0x10 + 0x138);
        goto LAB_009ed618;
      }
      uVar5 = uVar5 + 1;
      piVar6 = piVar6 + 4;
    } while (uVar5 < *(ushort *)(lVar4 + 0x12a));
  }
  puVar3 = (undefined8 *)native_sub_3c9b34(plVar2,_INGUIFont_TypeInfo_12d4c70,0x19);
LAB_009ed618:
                    /* WARNING: Could not recover jumptable at 0x009ed628. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  uVar5 = (*(code *)*puVar3)(plVar2,puVar3[1]);
  return uVar5;
}



/* UIFont$$set_size @ 0x9ed62c
 * void UIFont__set_size (UIFont_o* __this, int32_t value, const MethodInfo* method); */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* UIFont$$set_size
   void UIFont__set_size (UIFont_o* __this, int32_t value, const MethodInfo* method); */

void native_UIFont__set_size_9ed62c(long param_1,undefined4 param_2)

{
  long *plVar1;
  undefined8 *puVar2;
  long lVar3;
  ulong uVar4;
  int *piVar5;
  
  if ((bRam000000000134193f & 1) == 0) {
    native_sub_43273c(&INGUIFont_TypeInfo_12d4c70);
    bRam000000000134193f = 1;
  }
  plVar1 = (long *)native_UIFont__get_replacement_9eb43c(param_1);
  if (plVar1 == (long *)0x0) {
    *(undefined4 *)(param_1 + 0x58) = param_2;
    return;
  }
  lVar3 = *plVar1;
  if ((ulong)*(ushort *)(lVar3 + 0x12a) != 0) {
    uVar4 = 0;
    piVar5 = (int *)(*(long *)(lVar3 + 0xb0) + 8);
    do {
      if (*(long *)(piVar5 + -2) == _INGUIFont_TypeInfo_12d4c70) {
        puVar2 = (undefined8 *)(lVar3 + (long)(*piVar5 + 0x1a) * 0x10 + 0x138);
        goto LAB_009ed6ec;
      }
      uVar4 = uVar4 + 1;
      piVar5 = piVar5 + 4;
    } while (uVar4 < *(ushort *)(lVar3 + 0x12a));
  }
  puVar2 = (undefined8 *)native_sub_3c9b34(plVar1,_INGUIFont_TypeInfo_12d4c70,0x1a);
LAB_009ed6ec:
                    /* WARNING: Could not recover jumptable at 0x009ed704. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)*puVar2)(plVar1,param_2,puVar2[1]);
  return;
}



/* UIFont$$get_defaultSize @ 0x9ed54c
 * int32_t UIFont__get_defaultSize (UIFont_o* __this, const MethodInfo* method); */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* UIFont$$get_defaultSize
   int32_t UIFont__get_defaultSize (UIFont_o* __this, const MethodInfo* method); */

ulong native_UIFont__get_defaultSize_9ed54c(long param_1)

{
  uint uVar1;
  long *plVar2;
  undefined8 *puVar3;
  long lVar4;
  ulong uVar5;
  int *piVar6;
  
  if ((bRam000000000134193e & 1) == 0) {
    native_sub_43273c(&INGUIFont_TypeInfo_12d4c70);
    bRam000000000134193e = 1;
  }
  plVar2 = (long *)native_UIFont__get_replacement_9eb43c(param_1);
  if (plVar2 == (long *)0x0) {
    uVar5 = native_UIFont__get_isDynamic_9ed708(param_1);
    if (((uVar5 & 1) == 0) && (*(long *)(param_1 + 0x30) != 0)) {
      uVar1 = *(uint *)(*(long *)(param_1 + 0x30) + 0x10);
    }
    else {
      uVar1 = *(uint *)(param_1 + 0x58);
    }
    return (ulong)uVar1;
  }
  lVar4 = *plVar2;
  if ((ulong)*(ushort *)(lVar4 + 0x12a) != 0) {
    uVar5 = 0;
    piVar6 = (int *)(*(long *)(lVar4 + 0xb0) + 8);
    do {
      if (*(long *)(piVar6 + -2) == _INGUIFont_TypeInfo_12d4c70) {
        puVar3 = (undefined8 *)(lVar4 + (long)(*piVar6 + 0x19) * 0x10 + 0x138);
        goto LAB_009ed618;
      }
      uVar5 = uVar5 + 1;
      piVar6 = piVar6 + 4;
    } while (uVar5 < *(ushort *)(lVar4 + 0x12a));
  }
  puVar3 = (undefined8 *)native_sub_3c9b34(plVar2,_INGUIFont_TypeInfo_12d4c70,0x19);
LAB_009ed618:
                    /* WARNING: Could not recover jumptable at 0x009ed628. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  uVar5 = (*(code *)*puVar3)(plVar2,puVar3[1]);
  return uVar5;
}



/* UIFont$$set_defaultSize @ 0x9ed630
 * void UIFont__set_defaultSize (UIFont_o* __this, int32_t value, const MethodInfo* method); */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* UIFont$$set_defaultSize
   void UIFont__set_defaultSize (UIFont_o* __this, int32_t value, const MethodInfo* method); */

void native_UIFont__set_defaultSize_9ed630(long param_1,undefined4 param_2)

{
  long *plVar1;
  undefined8 *puVar2;
  long lVar3;
  ulong uVar4;
  int *piVar5;
  
  if ((bRam000000000134193f & 1) == 0) {
    native_sub_43273c(&INGUIFont_TypeInfo_12d4c70);
    bRam000000000134193f = 1;
  }
  plVar1 = (long *)native_UIFont__get_replacement_9eb43c(param_1);
  if (plVar1 == (long *)0x0) {
    *(undefined4 *)(param_1 + 0x58) = param_2;
    return;
  }
  lVar3 = *plVar1;
  if ((ulong)*(ushort *)(lVar3 + 0x12a) != 0) {
    uVar4 = 0;
    piVar5 = (int *)(*(long *)(lVar3 + 0xb0) + 8);
    do {
      if (*(long *)(piVar5 + -2) == _INGUIFont_TypeInfo_12d4c70) {
        puVar2 = (undefined8 *)(lVar3 + (long)(*piVar5 + 0x1a) * 0x10 + 0x138);
        goto LAB_009ed6ec;
      }
      uVar4 = uVar4 + 1;
      piVar5 = piVar5 + 4;
    } while (uVar4 < *(ushort *)(lVar3 + 0x12a));
  }
  puVar2 = (undefined8 *)native_sub_3c9b34(plVar1,_INGUIFont_TypeInfo_12d4c70,0x1a);
LAB_009ed6ec:
                    /* WARNING: Could not recover jumptable at 0x009ed704. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)*puVar2)(plVar1,param_2,puVar2[1]);
  return;
}



/* UIFont$$get_spaceWidth @ 0x9ed804
 * int32_t UIFont__get_spaceWidth (UIFont_o* __this, const MethodInfo* method); */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* UIFont$$get_spaceWidth
   int32_t UIFont__get_spaceWidth (UIFont_o* __this, const MethodInfo* method); */

void native_UIFont__get_spaceWidth_9ed804(undefined8 param_1)

{
  long *plVar1;
  undefined8 *puVar2;
  long lVar3;
  ulong uVar4;
  int *piVar5;
  
  if ((bRam0000000001341940 & 1) == 0) {
    native_sub_43273c(&INGUIFont_TypeInfo_12d4c70);
    bRam0000000001341940 = 1;
  }
  plVar1 = (long *)native_UIFont__get_replacement_9eb43c(param_1);
  if (plVar1 == (long *)0x0) {
    return;
  }
  lVar3 = *plVar1;
  if ((ulong)*(ushort *)(lVar3 + 0x12a) != 0) {
    uVar4 = 0;
    piVar5 = (int *)(*(long *)(lVar3 + 0xb0) + 8);
    do {
      if (*(long *)(piVar5 + -2) == _INGUIFont_TypeInfo_12d4c70) {
        puVar2 = (undefined8 *)(lVar3 + (long)(*piVar5 + 0x1b) * 0x10 + 0x138);
        goto LAB_009ed8b0;
      }
      uVar4 = uVar4 + 1;
      piVar5 = piVar5 + 4;
    } while (uVar4 < *(ushort *)(lVar3 + 0x12a));
  }
  puVar2 = (undefined8 *)native_sub_3c9b34(plVar1,_INGUIFont_TypeInfo_12d4c70,0x1b);
LAB_009ed8b0:
                    /* WARNING: Could not recover jumptable at 0x009ed8c0. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)*puVar2)(plVar1,puVar2[1]);
  return;
}



/* UIFont$$set_spaceWidth @ 0x9ed8c4
 * void UIFont__set_spaceWidth (UIFont_o* __this, int32_t value, const MethodInfo* method); */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* UIFont$$set_spaceWidth
   void UIFont__set_spaceWidth (UIFont_o* __this, int32_t value, const MethodInfo* method); */

void native_UIFont__set_spaceWidth_9ed8c4(undefined8 param_1,undefined4 param_2)

{
  long *plVar1;
  undefined8 *puVar2;
  long lVar3;
  ulong uVar4;
  int *piVar5;
  
  if ((bRam0000000001341941 & 1) == 0) {
    native_sub_43273c(&INGUIFont_TypeInfo_12d4c70);
    bRam0000000001341941 = 1;
  }
  plVar1 = (long *)native_UIFont__get_replacement_9eb43c(param_1);
  if (plVar1 == (long *)0x0) {
    return;
  }
  lVar3 = *plVar1;
  if ((ulong)*(ushort *)(lVar3 + 0x12a) != 0) {
    uVar4 = 0;
    piVar5 = (int *)(*(long *)(lVar3 + 0xb0) + 8);
    do {
      if (*(long *)(piVar5 + -2) == _INGUIFont_TypeInfo_12d4c70) {
        puVar2 = (undefined8 *)(lVar3 + (long)(*piVar5 + 0x1c) * 0x10 + 0x138);
        goto LAB_009ed97c;
      }
      uVar4 = uVar4 + 1;
      piVar5 = piVar5 + 4;
    } while (uVar4 < *(ushort *)(lVar3 + 0x12a));
  }
  puVar2 = (undefined8 *)native_sub_3c9b34(plVar1,_INGUIFont_TypeInfo_12d4c70,0x1c);
LAB_009ed97c:
                    /* WARNING: Could not recover jumptable at 0x009ed994. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)*puVar2)(plVar1,param_2,puVar2[1]);
  return;
}



/* UIFont$$get_sprite @ 0x9ec04c
 * UISpriteData_o* UIFont__get_sprite (UIFont_o* __this, const MethodInfo* method); */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* UIFont$$get_sprite
   UISpriteData_o* UIFont__get_sprite (UIFont_o* __this, const MethodInfo* method); */

long native_UIFont__get_sprite_9ec04c(long param_1)

{
  uint uVar1;
  uint uVar2;
  long *plVar3;
  undefined8 *puVar4;
  long lVar5;
  long lVar6;
  ulong uVar7;
  int *piVar8;
  long *plVar9;
  undefined8 uVar10;
  long lVar11;
  
  if ((bRam0000000001341942 & 1) == 0) {
    native_sub_43273c(&INGUIAtlas_TypeInfo_12d4c68);
    native_sub_43273c(&INGUIFont_TypeInfo_12d4c70);
    native_sub_43273c(&Method_System_Collections_Generic_List_BMSymbol__get_Count___12dc578);
    native_sub_43273c(&Method_System_Collections_Generic_List_BMSymbol__get_Item___12dc580);
    bRam0000000001341942 = 1;
  }
  plVar3 = (long *)native_UIFont__get_replacement_9eb43c(param_1);
  if (plVar3 != (long *)0x0) {
    lVar6 = *plVar3;
    if ((ulong)*(ushort *)(lVar6 + 0x12a) != 0) {
      uVar7 = 0;
      piVar8 = (int *)(*(long *)(lVar6 + 0xb0) + 8);
      do {
        if (*(long *)(piVar8 + -2) == _INGUIFont_TypeInfo_12d4c70) {
          puVar4 = (undefined8 *)(lVar6 + (long)(*piVar8 + 0x1d) * 0x10 + 0x138);
          goto LAB_009ec1ac;
        }
        uVar7 = uVar7 + 1;
        piVar8 = piVar8 + 4;
      } while (uVar7 < *(ushort *)(lVar6 + 0x12a));
    }
    puVar4 = (undefined8 *)native_sub_3c9b34(plVar3,_INGUIFont_TypeInfo_12d4c70,0x1d);
LAB_009ec1ac:
                    /* WARNING: Could not recover jumptable at 0x009ec1c4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    lVar6 = (*(code *)*puVar4)(plVar3,puVar4[1]);
    return lVar6;
  }
  plVar3 = (long *)native_sub_4327f8(*(undefined8 *)(param_1 + 0x38),_INGUIAtlas_TypeInfo_12d4c68);
  plVar9 = (long *)(param_1 + 0x60);
  if ((((plVar3 == (long *)0x0) || (*plVar9 != 0)) || (*(long *)(param_1 + 0x30) == 0)) ||
     (uVar7 = native_System_String__IsNullOrEmpty_b09430
                        (*(undefined8 *)(*(long *)(param_1 + 0x30) + 0x20),0), (uVar7 & 1) != 0))
  goto LAB_009ec2fc;
  if (*(long *)(param_1 + 0x30) == 0) goto LAB_009ec32c;
  lVar6 = *plVar3;
  uVar10 = *(undefined8 *)(*(long *)(param_1 + 0x30) + 0x20);
  if ((ulong)*(ushort *)(lVar6 + 0x12a) != 0) {
    uVar7 = 0;
    piVar8 = (int *)(*(long *)(lVar6 + 0xb0) + 8);
    do {
      if (*(long *)(piVar8 + -2) == _INGUIAtlas_TypeInfo_12d4c68) {
        puVar4 = (undefined8 *)(lVar6 + (long)(*piVar8 + 10) * 0x10 + 0x138);
        goto LAB_009ec1d8;
      }
      uVar7 = uVar7 + 1;
      piVar8 = piVar8 + 4;
    } while (uVar7 < *(ushort *)(lVar6 + 0x12a));
  }
  puVar4 = (undefined8 *)native_sub_3c9b34(plVar3,_INGUIAtlas_TypeInfo_12d4c68,10);
LAB_009ec1d8:
  lVar6 = (*(code *)*puVar4)(plVar3,uVar10,puVar4[1]);
  *plVar9 = lVar6;
  native_sub_4326e0(plVar9,lVar6);
  if (*plVar9 == 0) {
    uVar10 = native_UnityEngine_Object__get_name_8e8098(param_1,0);
    lVar6 = *plVar3;
    if ((ulong)*(ushort *)(lVar6 + 0x12a) != 0) {
      uVar7 = 0;
      piVar8 = (int *)(*(long *)(lVar6 + 0xb0) + 8);
      do {
        if (*(long *)(piVar8 + -2) == _INGUIAtlas_TypeInfo_12d4c68) {
          puVar4 = (undefined8 *)(lVar6 + (long)(*piVar8 + 10) * 0x10 + 0x138);
          goto LAB_009ec268;
        }
        uVar7 = uVar7 + 1;
        piVar8 = piVar8 + 4;
      } while (uVar7 < *(ushort *)(lVar6 + 0x12a));
    }
    puVar4 = (undefined8 *)native_sub_3c9b34(plVar3,_INGUIAtlas_TypeInfo_12d4c68,10);
LAB_009ec268:
    lVar6 = (*(code *)*puVar4)(plVar3,uVar10,puVar4[1]);
    *plVar9 = lVar6;
    native_sub_4326e0(plVar9,lVar6);
    if (*plVar9 != 0) goto LAB_009ec290;
    if (*(long *)(param_1 + 0x30) == 0) goto LAB_009ec32c;
    puVar4 = (undefined8 *)(*(long *)(param_1 + 0x30) + 0x20);
    *puVar4 = 0;
    native_sub_4326e0(puVar4,0);
  }
  else {
LAB_009ec290:
    native_UIFont__UpdateUVRect_9ed998(param_1);
  }
  lVar6 = native_UIFont__get_symbols_9ebb98(param_1);
  if (lVar6 == 0) {
LAB_009ec32c:
                    /* WARNING: Subroutine does not return */
    native_sub_432810();
  }
  uVar1 = *(uint *)(lVar6 + 0x18);
  if (0 < (int)uVar1) {
    lVar11 = 0;
    uVar2 = uVar1;
    while( true ) {
      if (uVar2 <= (uint)lVar11) {
        native_System_ThrowHelper__ThrowArgumentOutOfRangeException_9fe0f4(0);
      }
      lVar5 = *(long *)(*(long *)(lVar6 + 0x10) + lVar11 * 8 + 0x20);
      if (lVar5 == 0) goto LAB_009ec32c;
      native_BMSymbol__MarkAsChanged_dd21c4(lVar5,0);
      if ((int)uVar1 <= (int)((uint)lVar11 + 1)) break;
      uVar2 = *(uint *)(lVar6 + 0x18);
      lVar11 = lVar11 + 1;
    }
  }
LAB_009ec2fc:
  return *plVar9;
}



/* UIFont$$get_replacement @ 0x9eb43c
 * INGUIFont_o* UIFont__get_replacement (UIFont_o* __this, const MethodInfo* method); */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* UIFont$$get_replacement
   INGUIFont_o* UIFont__get_replacement (UIFont_o* __this, const MethodInfo* method); */

long * native_UIFont__get_replacement_9eb43c(long param_1)

{
  long lVar1;
  int iVar2;
  ulong uVar3;
  long *plVar4;
  undefined8 uVar5;
  long lVar6;
  long *plStack_28;
  
  if ((bRam0000000001341943 & 1) == 0) {
    native_sub_43273c(&INGUIFont_TypeInfo_12d4c70);
    native_sub_43273c(&UnityEngine_Object_TypeInfo_12d54e0);
    bRam0000000001341943 = 1;
  }
  uVar5 = *(undefined8 *)(param_1 + 0x40);
  if (((*(byte *)(_UnityEngine_Object_TypeInfo_12d54e0 + 0x133) >> 2 & 1) != 0) &&
     (*(int *)(_UnityEngine_Object_TypeInfo_12d54e0 + 0xe0) == 0)) {
    native_sub_4327ec();
  }
  uVar3 = native_UnityEngine_Object__op_Equality_8e9a3c(uVar5,0,0);
  lVar1 = _INGUIFont_TypeInfo_12d4c70;
  if ((uVar3 & 1) == 0) {
    plVar4 = *(long **)(param_1 + 0x40);
    if (plVar4 != (long *)0x0) {
      lVar6 = *plVar4;
      uVar3 = native_sub_3c5e78(_INGUIFont_TypeInfo_12d4c70,lVar6);
      if ((uVar3 & 1) == 0) {
        if ((*(byte *)(lVar6 + 0x133) >> 4 & 1) == 0) {
          plVar4 = (long *)0x0;
        }
        else {
          if (((((*(byte *)(lVar1 + 0x114) >> 5 & 1) != 0) || (*(char *)(lVar1 + 0x2a) == '\x1e'))
              || (*(char *)(lVar1 + 0x2a) == '\x13')) &&
             ((*(long *)(lVar1 + 0x70) != 0 &&
              (lVar6 = *(long *)(*(long *)(lVar1 + 0x70) + 0x28), lVar6 != 0)))) {
            plStack_28 = (long *)native_sub_3d76d0(plVar4,lVar6);
            if (plStack_28 != (long *)0x0) {
              return plVar4;
            }
            iVar2 = (*(code *)**(undefined8 **)plVar4[2])((undefined8 *)plVar4[2],lVar6,&plStack_28)
            ;
            if (-1 < iVar2) {
              uVar3 = native_sub_3d7780(plVar4,lVar6,plStack_28);
              if ((uVar3 & 1) == 0) {
                (**(code **)(*plStack_28 + 0x10))(plStack_28);
                plStack_28 = (long *)native_sub_3d76d0(plVar4,lVar6);
              }
              if (plStack_28 != (long *)0x0) {
                return plVar4;
              }
            }
          }
          if (lRam00000000013443f8 != lVar1) {
            plVar4 = (long *)0x0;
          }
        }
      }
    }
    return plVar4;
  }
  return (long *)0x0;
}



/* UIFont$$set_replacement @ 0x9edbec
 * void UIFont__set_replacement (UIFont_o* __this, INGUIFont_o* value, const MethodInfo* method); */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* UIFont$$set_replacement
   void UIFont__set_replacement (UIFont_o* __this, INGUIFont_o* value, const MethodInfo* method); */

void native_UIFont__set_replacement_9edbec(long *param_1,long *param_2)

{
  uint uVar1;
  long *plVar2;
  undefined8 uVar3;
  long lVar4;
  long *plVar5;
  undefined8 *puVar6;
  long lVar7;
  ulong uVar8;
  int *piVar9;
  long lVar10;
  long *plVar11;
  int iVar12;
  uint uVar13;
  
  if ((bRam0000000001341944 & 1) == 0) {
    native_sub_43273c(&INGUIFont_TypeInfo_12d4c70);
    native_sub_43273c(&UnityEngine_Object_TypeInfo_12d54e0);
    bRam0000000001341944 = 1;
  }
  plVar11 = param_1 + 8;
  plVar2 = (long *)0x0;
  if (param_1 != param_2) {
    plVar2 = param_2;
  }
  plVar5 = (long *)native_sub_4327f8(*plVar11,_INGUIFont_TypeInfo_12d4c70);
  if (plVar5 == plVar2) {
    return;
  }
  if (plVar2 != (long *)0x0) {
    lVar7 = *plVar2;
    if ((ulong)*(ushort *)(lVar7 + 0x12a) != 0) {
      uVar8 = 0;
      piVar9 = (int *)(*(long *)(lVar7 + 0xb0) + 8);
      do {
        if (*(long *)(piVar9 + -2) == _INGUIFont_TypeInfo_12d4c70) {
          puVar6 = (undefined8 *)(lVar7 + (long)(*piVar9 + 0x1e) * 0x10 + 0x138);
          goto LAB_009edccc;
        }
        uVar8 = uVar8 + 1;
        piVar9 = piVar9 + 4;
      } while (uVar8 < *(ushort *)(lVar7 + 0x12a));
    }
    puVar6 = (undefined8 *)native_sub_3c9b34(plVar2,_INGUIFont_TypeInfo_12d4c70,0x1e);
LAB_009edccc:
    plVar5 = (long *)(*(code *)*puVar6)(plVar2,puVar6[1]);
    if (plVar5 == param_1) {
      lVar7 = *plVar2;
      if ((ulong)*(ushort *)(lVar7 + 0x12a) != 0) {
        uVar8 = 0;
        piVar9 = (int *)(*(long *)(lVar7 + 0xb0) + 8);
        do {
          if (*(long *)(piVar9 + -2) == _INGUIFont_TypeInfo_12d4c70) {
            puVar6 = (undefined8 *)(lVar7 + (long)(*piVar9 + 0x1f) * 0x10 + 0x138);
            goto LAB_009edd38;
          }
          uVar8 = uVar8 + 1;
          piVar9 = piVar9 + 4;
        } while (uVar8 < *(ushort *)(lVar7 + 0x12a));
      }
      puVar6 = (undefined8 *)native_sub_3c9b34(plVar2,_INGUIFont_TypeInfo_12d4c70,0x1f);
LAB_009edd38:
      (*(code *)*puVar6)(plVar2,0,puVar6[1]);
    }
  }
  lVar7 = *plVar11;
  if (((*(byte *)(_UnityEngine_Object_TypeInfo_12d54e0 + 0x133) >> 2 & 1) != 0) &&
     (*(int *)(_UnityEngine_Object_TypeInfo_12d54e0 + 0xe0) == 0)) {
    native_sub_4327ec();
  }
  uVar8 = native_UnityEngine_Object__op_Inequality_8d76fc(lVar7,0,0);
  if ((uVar8 & 1) != 0) {
    native_UIFont__MarkAsChanged_9ec498(param_1);
  }
  if (plVar2 != (long *)0x0) {
    if (*(byte *)(_UnityEngine_Object_TypeInfo_12d54e0 + 300) <= *(byte *)(*plVar2 + 300)) {
      plVar5 = plVar2;
      if (*(long *)(*(long *)(*plVar2 + 200) +
                    (ulong)*(byte *)(_UnityEngine_Object_TypeInfo_12d54e0 + 300) * 8 + -8) !=
          _UnityEngine_Object_TypeInfo_12d54e0) {
        plVar5 = (long *)0x0;
      }
      goto LAB_009eddc0;
    }
  }
  plVar5 = (long *)0x0;
LAB_009eddc0:
  *plVar11 = (long)plVar5;
  native_sub_4326e0(plVar11);
  if (plVar2 != (long *)0x0) {
    *(undefined4 *)(param_1 + 0xd) = 0xffffffff;
    param_1[3] = 0;
    native_sub_4326e0(param_1 + 3,0);
    param_1[6] = 0;
    native_sub_4326e0(param_1 + 6,0);
    param_1[10] = 0;
    native_sub_4326e0(param_1 + 10,0);
  }
  if ((bRam000000000134194d & 1) == 0) {
    native_sub_43273c(&INGUIFont_TypeInfo_12d4c70);
    native_sub_43273c(&Method_System_Collections_Generic_List_BMSymbol__get_Count___12dc578);
    native_sub_43273c(&Method_System_Collections_Generic_List_BMSymbol__get_Item___12dc580);
    native_sub_43273c(&Method_NGUITools_FindActive_UILabel____12e5710);
    native_sub_43273c(&NGUITools_TypeInfo_12d53c8);
    bRam000000000134194d = 1;
  }
  plVar2 = (long *)native_UIFont__get_replacement_9eb43c(param_1);
  if (plVar2 != (long *)0x0) {
    lVar7 = *plVar2;
    if ((ulong)*(ushort *)(lVar7 + 0x12a) != 0) {
      uVar8 = 0;
      piVar9 = (int *)(*(long *)(lVar7 + 0xb0) + 8);
      do {
        if (*(long *)(piVar9 + -2) == _INGUIFont_TypeInfo_12d4c70) {
          puVar6 = (undefined8 *)(lVar7 + (long)(*piVar9 + 0x27) * 0x10 + 0x138);
          goto LAB_009ec574;
        }
        uVar8 = uVar8 + 1;
        piVar9 = piVar9 + 4;
      } while (uVar8 < *(ushort *)(lVar7 + 0x12a));
    }
    puVar6 = (undefined8 *)native_sub_3c9b34(plVar2,_INGUIFont_TypeInfo_12d4c70,0x27);
LAB_009ec574:
    (*(code *)*puVar6)(plVar2,puVar6[1]);
  }
  param_1[0xc] = 0;
  native_sub_4326e0(param_1 + 0xc,0);
  if (((*(byte *)(_NGUITools_TypeInfo_12d53c8 + 0x133) >> 2 & 1) != 0) &&
     (*(int *)(_NGUITools_TypeInfo_12d53c8 + 0xe0) == 0)) {
    native_sub_4327ec();
  }
  lVar7 = native_NGUITools__FindActive_AudioListener__4a5b30
                    (_Method_NGUITools_FindActive_UILabel____12e5710);
  if (lVar7 != 0) {
    iVar12 = (int)*(undefined8 *)(lVar7 + 0x18);
    if (0 < iVar12) {
      if (iVar12 != 0) {
        uVar13 = 0;
        do {
          lVar10 = *(long *)(lVar7 + (long)(int)uVar13 * 8 + 0x20);
          if (lVar10 == 0) goto LAB_009ec744;
          uVar8 = native_UnityEngine_Behaviour__get_enabled_8d7acc(lVar10,0);
          if ((uVar8 & 1) != 0) {
            uVar3 = native_UnityEngine_Component__get_gameObject_8da66c(lVar10,0);
            if (((*(byte *)(_NGUITools_TypeInfo_12d53c8 + 0x133) >> 2 & 1) != 0) &&
               (*(int *)(_NGUITools_TypeInfo_12d53c8 + 0xe0) == 0)) {
              native_sub_4327ec(_NGUITools_TypeInfo_12d53c8);
            }
            uVar8 = native_NGUITools__GetActive_72d0d4(uVar3,0);
            if ((uVar8 & 1) != 0) {
              uVar3 = native_UILabel__get_font_ae77e8(lVar10,0);
              if (((*(byte *)(_NGUITools_TypeInfo_12d53c8 + 0x133) >> 2 & 1) != 0) &&
                 (*(int *)(_NGUITools_TypeInfo_12d53c8 + 0xe0) == 0)) {
                native_sub_4327ec(_NGUITools_TypeInfo_12d53c8);
              }
              uVar8 = native_NGUITools__CheckIfRelated_7372e0(param_1,uVar3,0);
              if ((uVar8 & 1) != 0) {
                uVar3 = native_UILabel__get_font_ae77e8(lVar10,0);
                native_UILabel__set_font_ae79c4(lVar10,0,0);
                native_UILabel__set_font_ae79c4(lVar10,uVar3,0);
              }
            }
          }
          uVar13 = uVar13 + 1;
          if (iVar12 <= (int)uVar13) goto LAB_009ec6c8;
        } while (uVar13 < *(uint *)(lVar7 + 0x18));
      }
      uVar3 = native_sub_43283c();
                    /* WARNING: Subroutine does not return */
      native_sub_4327dc(uVar3,0);
    }
LAB_009ec6c8:
    lVar7 = native_UIFont__get_symbols_9ebb98(param_1);
    if (lVar7 != 0) {
      uVar13 = *(uint *)(lVar7 + 0x18);
      if (0 < (int)uVar13) {
        lVar10 = 0;
        uVar1 = uVar13;
        while( true ) {
          if (uVar1 <= (uint)lVar10) {
            native_System_ThrowHelper__ThrowArgumentOutOfRangeException_9fe0f4(0);
          }
          lVar4 = *(long *)(*(long *)(lVar7 + 0x10) + lVar10 * 8 + 0x20);
          if (lVar4 == 0) goto LAB_009ec744;
          native_BMSymbol__MarkAsChanged_dd21c4(lVar4,0);
          if ((int)uVar13 <= (int)((uint)lVar10 + 1)) break;
          uVar1 = *(uint *)(lVar7 + 0x18);
          lVar10 = lVar10 + 1;
        }
      }
      return;
    }
  }
LAB_009ec744:
                    /* WARNING: Subroutine does not return */
  native_sub_432810();
}



/* UIFont$$get_finalFont @ 0x9ede20
 * INGUIFont_o* UIFont__get_finalFont (UIFont_o* __this, const MethodInfo* method); */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* UIFont$$get_finalFont
   INGUIFont_o* UIFont__get_finalFont (UIFont_o* __this, const MethodInfo* method); */

long * native_UIFont__get_finalFont_9ede20(long *param_1)

{
  bool bVar1;
  undefined8 *puVar2;
  long *plVar3;
  long lVar4;
  ulong uVar5;
  int *piVar6;
  uint uVar7;
  
  if ((bRam0000000001341945 & 1) == 0) {
    native_sub_43273c(&INGUIFont_TypeInfo_12d4c70);
    bRam0000000001341945 = 1;
  }
  uVar7 = 0;
  do {
    if (param_1 == (long *)0x0) {
                    /* WARNING: Subroutine does not return */
      native_sub_432810();
    }
    lVar4 = *param_1;
    if ((ulong)*(ushort *)(lVar4 + 0x12a) != 0) {
      uVar5 = 0;
      piVar6 = (int *)(*(long *)(lVar4 + 0xb0) + 8);
      do {
        if (*(long *)(piVar6 + -2) == _INGUIFont_TypeInfo_12d4c70) {
          puVar2 = (undefined8 *)(lVar4 + (long)(*piVar6 + 0x1e) * 0x10 + 0x138);
          goto LAB_009edebc;
        }
        uVar5 = uVar5 + 1;
        piVar6 = piVar6 + 4;
      } while (uVar5 < *(ushort *)(lVar4 + 0x12a));
    }
    puVar2 = (undefined8 *)native_sub_3c9b34(param_1,_INGUIFont_TypeInfo_12d4c70,0x1e);
LAB_009edebc:
    plVar3 = (long *)(*(code *)*puVar2)(param_1,puVar2[1]);
    if (plVar3 != (long *)0x0) {
      param_1 = plVar3;
    }
    bVar1 = 8 < uVar7;
    uVar7 = uVar7 + 1;
    if (bVar1) {
      return param_1;
    }
  } while( true );
}



/* UIFont$$get_isDynamic @ 0x9ed708
 * bool UIFont__get_isDynamic (UIFont_o* __this, const MethodInfo* method); */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* UIFont$$get_isDynamic
   bool UIFont__get_isDynamic (UIFont_o* __this, const MethodInfo* method); */

ulong native_UIFont__get_isDynamic_9ed708(long param_1)

{
  uint uVar1;
  long *plVar2;
  undefined8 *puVar3;
  long lVar4;
  ulong uVar5;
  int *piVar6;
  undefined8 uVar7;
  
  if ((bRam0000000001341946 & 1) == 0) {
    native_sub_43273c(&INGUIFont_TypeInfo_12d4c70);
    native_sub_43273c(&UnityEngine_Object_TypeInfo_12d54e0);
    bRam0000000001341946 = 1;
  }
  plVar2 = (long *)native_UIFont__get_replacement_9eb43c(param_1);
  if (plVar2 == (long *)0x0) {
    uVar7 = *(undefined8 *)(param_1 + 0x50);
    if (((*(byte *)(_UnityEngine_Object_TypeInfo_12d54e0 + 0x133) >> 2 & 1) != 0) &&
       (*(int *)(_UnityEngine_Object_TypeInfo_12d54e0 + 0xe0) == 0)) {
      native_sub_4327ec();
    }
    if ((bRam0000000001341084 & 1) == 0) {
      native_sub_43273c(&UnityEngine_Object_TypeInfo_12d54e0,0,0);
      bRam0000000001341084 = 1;
    }
    if (((*(byte *)(_UnityEngine_Object_TypeInfo_12d54e0 + 0x133) >> 2 & 1) != 0) &&
       (*(int *)(_UnityEngine_Object_TypeInfo_12d54e0 + 0xe0) == 0)) {
      native_sub_4327ec();
    }
    uVar1 = native_UnityEngine_Object__CompareBaseObjects_8e9aac(uVar7,0);
    return (ulong)(~uVar1 & 1);
  }
  lVar4 = *plVar2;
  if ((ulong)*(ushort *)(lVar4 + 0x12a) != 0) {
    uVar5 = 0;
    piVar6 = (int *)(*(long *)(lVar4 + 0xb0) + 8);
    do {
      if (*(long *)(piVar6 + -2) == _INGUIFont_TypeInfo_12d4c70) {
        puVar3 = (undefined8 *)(lVar4 + (long)(*piVar6 + 0x21) * 0x10 + 0x138);
        goto LAB_009ed7f0;
      }
      uVar5 = uVar5 + 1;
      piVar6 = piVar6 + 4;
    } while (uVar5 < *(ushort *)(lVar4 + 0x12a));
  }
  puVar3 = (undefined8 *)native_sub_3c9b34(plVar2,_INGUIFont_TypeInfo_12d4c70,0x21);
LAB_009ed7f0:
                    /* WARNING: Could not recover jumptable at 0x009ed800. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  uVar5 = (*(code *)*puVar3)(plVar2,puVar3[1]);
  return uVar5;
}



/* UIFont$$get_dynamicFont @ 0x9eb4dc
 * UnityEngine_Font_o* UIFont__get_dynamicFont (UIFont_o* __this, const MethodInfo* method); */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* UIFont$$get_dynamicFont
   UnityEngine_Font_o* UIFont__get_dynamicFont (UIFont_o* __this, const MethodInfo* method); */

undefined8 native_UIFont__get_dynamicFont_9eb4dc(long param_1)

{
  long *plVar1;
  undefined8 *puVar2;
  undefined8 uVar3;
  long lVar4;
  ulong uVar5;
  int *piVar6;
  
  if ((bRam0000000001341947 & 1) == 0) {
    native_sub_43273c(&INGUIFont_TypeInfo_12d4c70);
    bRam0000000001341947 = 1;
  }
  plVar1 = (long *)native_UIFont__get_replacement_9eb43c(param_1);
  if (plVar1 == (long *)0x0) {
    return *(undefined8 *)(param_1 + 0x50);
  }
  lVar4 = *plVar1;
  if ((ulong)*(ushort *)(lVar4 + 0x12a) != 0) {
    uVar5 = 0;
    piVar6 = (int *)(*(long *)(lVar4 + 0xb0) + 8);
    do {
      if (*(long *)(piVar6 + -2) == _INGUIFont_TypeInfo_12d4c70) {
        puVar2 = (undefined8 *)(lVar4 + (long)(*piVar6 + 0x22) * 0x10 + 0x138);
        goto LAB_009eb58c;
      }
      uVar5 = uVar5 + 1;
      piVar6 = piVar6 + 4;
    } while (uVar5 < *(ushort *)(lVar4 + 0x12a));
  }
  puVar2 = (undefined8 *)native_sub_3c9b34(plVar1,_INGUIFont_TypeInfo_12d4c70,0x22);
LAB_009eb58c:
                    /* WARNING: Could not recover jumptable at 0x009eb59c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  uVar3 = (*(code *)*puVar2)(plVar1,puVar2[1]);
  return uVar3;
}



/* UIFont$$set_dynamicFont @ 0x9edef4
 * void UIFont__set_dynamicFont (UIFont_o* __this, UnityEngine_Font_o* value, const MethodInfo* method); */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* UIFont$$set_dynamicFont
   void UIFont__set_dynamicFont (UIFont_o* __this, UnityEngine_Font_o* value, const MethodInfo*
   method); */

void native_UIFont__set_dynamicFont_9edef4(long param_1,undefined8 param_2)

{
  uint uVar1;
  long lVar2;
  long *plVar3;
  undefined8 *puVar4;
  long lVar5;
  ulong uVar6;
  int *piVar7;
  long lVar8;
  undefined8 uVar9;
  int iVar10;
  uint uVar11;
  
  if ((bRam0000000001341948 & 1) == 0) {
    native_sub_43273c(&INGUIFont_TypeInfo_12d4c70);
    native_sub_43273c(&UnityEngine_Object_TypeInfo_12d54e0);
    bRam0000000001341948 = 1;
  }
  plVar3 = (long *)native_UIFont__get_replacement_9eb43c(param_1);
  if (plVar3 == (long *)0x0) {
    puVar4 = (undefined8 *)(param_1 + 0x50);
    uVar9 = *puVar4;
    if (((*(byte *)(_UnityEngine_Object_TypeInfo_12d54e0 + 0x133) >> 2 & 1) != 0) &&
       (*(int *)(_UnityEngine_Object_TypeInfo_12d54e0 + 0xe0) == 0)) {
      native_sub_4327ec();
    }
    uVar6 = native_UnityEngine_Object__op_Inequality_8d76fc(uVar9,param_2,0);
    if ((uVar6 & 1) == 0) {
      return;
    }
    uVar9 = *puVar4;
    if (((*(byte *)(_UnityEngine_Object_TypeInfo_12d54e0 + 0x133) >> 2 & 1) != 0) &&
       (*(int *)(_UnityEngine_Object_TypeInfo_12d54e0 + 0xe0) == 0)) {
      native_sub_4327ec();
    }
    uVar6 = native_UnityEngine_Object__op_Inequality_8d76fc(uVar9,0,0);
    if ((uVar6 & 1) != 0) {
      native_UIFont__set_material_9ecab0(param_1,0);
    }
    *(undefined8 *)(param_1 + 0x50) = param_2;
    native_sub_4326e0(puVar4,param_2);
    if ((bRam000000000134194d & 1) == 0) {
      native_sub_43273c(&INGUIFont_TypeInfo_12d4c70);
      native_sub_43273c(&Method_System_Collections_Generic_List_BMSymbol__get_Count___12dc578);
      native_sub_43273c(&Method_System_Collections_Generic_List_BMSymbol__get_Item___12dc580);
      native_sub_43273c(&Method_NGUITools_FindActive_UILabel____12e5710);
      native_sub_43273c(&NGUITools_TypeInfo_12d53c8);
      bRam000000000134194d = 1;
    }
    plVar3 = (long *)native_UIFont__get_replacement_9eb43c(param_1);
    if (plVar3 != (long *)0x0) {
      lVar5 = *plVar3;
      if ((ulong)*(ushort *)(lVar5 + 0x12a) != 0) {
        uVar6 = 0;
        piVar7 = (int *)(*(long *)(lVar5 + 0xb0) + 8);
        do {
          if (*(long *)(piVar7 + -2) == _INGUIFont_TypeInfo_12d4c70) {
            puVar4 = (undefined8 *)(lVar5 + (long)(*piVar7 + 0x27) * 0x10 + 0x138);
            goto LAB_009ec574;
          }
          uVar6 = uVar6 + 1;
          piVar7 = piVar7 + 4;
        } while (uVar6 < *(ushort *)(lVar5 + 0x12a));
      }
      puVar4 = (undefined8 *)native_sub_3c9b34(plVar3,_INGUIFont_TypeInfo_12d4c70,0x27);
LAB_009ec574:
      (*(code *)*puVar4)(plVar3,puVar4[1]);
    }
    *(undefined8 *)(param_1 + 0x60) = 0;
    native_sub_4326e0((undefined8 *)(param_1 + 0x60),0);
    if (((*(byte *)(_NGUITools_TypeInfo_12d53c8 + 0x133) >> 2 & 1) != 0) &&
       (*(int *)(_NGUITools_TypeInfo_12d53c8 + 0xe0) == 0)) {
      native_sub_4327ec();
    }
    lVar5 = native_NGUITools__FindActive_AudioListener__4a5b30
                      (_Method_NGUITools_FindActive_UILabel____12e5710);
    if (lVar5 != 0) {
      iVar10 = (int)*(undefined8 *)(lVar5 + 0x18);
      if (0 < iVar10) {
        if (iVar10 != 0) {
          uVar11 = 0;
          do {
            lVar8 = *(long *)(lVar5 + (long)(int)uVar11 * 8 + 0x20);
            if (lVar8 == 0) goto LAB_009ec744;
            uVar6 = native_UnityEngine_Behaviour__get_enabled_8d7acc(lVar8,0);
            if ((uVar6 & 1) != 0) {
              uVar9 = native_UnityEngine_Component__get_gameObject_8da66c(lVar8,0);
              if (((*(byte *)(_NGUITools_TypeInfo_12d53c8 + 0x133) >> 2 & 1) != 0) &&
                 (*(int *)(_NGUITools_TypeInfo_12d53c8 + 0xe0) == 0)) {
                native_sub_4327ec(_NGUITools_TypeInfo_12d53c8);
              }
              uVar6 = native_NGUITools__GetActive_72d0d4(uVar9,0);
              if ((uVar6 & 1) != 0) {
                uVar9 = native_UILabel__get_font_ae77e8(lVar8,0);
                if (((*(byte *)(_NGUITools_TypeInfo_12d53c8 + 0x133) >> 2 & 1) != 0) &&
                   (*(int *)(_NGUITools_TypeInfo_12d53c8 + 0xe0) == 0)) {
                  native_sub_4327ec(_NGUITools_TypeInfo_12d53c8);
                }
                uVar6 = native_NGUITools__CheckIfRelated_7372e0(param_1,uVar9,0);
                if ((uVar6 & 1) != 0) {
                  uVar9 = native_UILabel__get_font_ae77e8(lVar8,0);
                  native_UILabel__set_font_ae79c4(lVar8,0,0);
                  native_UILabel__set_font_ae79c4(lVar8,uVar9,0);
                }
              }
            }
            uVar11 = uVar11 + 1;
            if (iVar10 <= (int)uVar11) goto LAB_009ec6c8;
          } while (uVar11 < *(uint *)(lVar5 + 0x18));
        }
        uVar9 = native_sub_43283c();
                    /* WARNING: Subroutine does not return */
        native_sub_4327dc(uVar9,0);
      }
LAB_009ec6c8:
      lVar5 = native_UIFont__get_symbols_9ebb98(param_1);
      if (lVar5 != 0) {
        uVar11 = *(uint *)(lVar5 + 0x18);
        if (0 < (int)uVar11) {
          lVar8 = 0;
          uVar1 = uVar11;
          while( true ) {
            if (uVar1 <= (uint)lVar8) {
              native_System_ThrowHelper__ThrowArgumentOutOfRangeException_9fe0f4(0);
            }
            lVar2 = *(long *)(*(long *)(lVar5 + 0x10) + lVar8 * 8 + 0x20);
            if (lVar2 == 0) goto LAB_009ec744;
            native_BMSymbol__MarkAsChanged_dd21c4(lVar2,0);
            if ((int)uVar11 <= (int)((uint)lVar8 + 1)) break;
            uVar1 = *(uint *)(lVar5 + 0x18);
            lVar8 = lVar8 + 1;
          }
        }
        return;
      }
    }
LAB_009ec744:
                    /* WARNING: Subroutine does not return */
    native_sub_432810();
  }
  lVar5 = *plVar3;
  if ((ulong)*(ushort *)(lVar5 + 0x12a) != 0) {
    uVar6 = 0;
    piVar7 = (int *)(*(long *)(lVar5 + 0xb0) + 8);
    do {
      if (*(long *)(piVar7 + -2) == _INGUIFont_TypeInfo_12d4c70) {
        puVar4 = (undefined8 *)(lVar5 + (long)(*piVar7 + 0x23) * 0x10 + 0x138);
        goto LAB_009ee04c;
      }
      uVar6 = uVar6 + 1;
      piVar7 = piVar7 + 4;
    } while (uVar6 < *(ushort *)(lVar5 + 0x12a));
  }
  puVar4 = (undefined8 *)native_sub_3c9b34(plVar3,_INGUIFont_TypeInfo_12d4c70,0x23);
LAB_009ee04c:
                    /* WARNING: Could not recover jumptable at 0x009ee068. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)*puVar4)(plVar3,param_2,puVar4[1]);
  return;
}



/* UIFont$$get_dynamicFontStyle @ 0x9ee080
 * int32_t UIFont__get_dynamicFontStyle (UIFont_o* __this, const MethodInfo* method); */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* UIFont$$get_dynamicFontStyle
   int32_t UIFont__get_dynamicFontStyle (UIFont_o* __this, const MethodInfo* method); */

ulong native_UIFont__get_dynamicFontStyle_9ee080(long param_1)

{
  long *plVar1;
  undefined8 *puVar2;
  long lVar3;
  ulong uVar4;
  int *piVar5;
  
  if ((bRam0000000001341949 & 1) == 0) {
    native_sub_43273c(&INGUIFont_TypeInfo_12d4c70);
    bRam0000000001341949 = 1;
  }
  plVar1 = (long *)native_UIFont__get_replacement_9eb43c(param_1);
  if (plVar1 == (long *)0x0) {
    return (ulong)*(uint *)(param_1 + 0x5c);
  }
  lVar3 = *plVar1;
  if ((ulong)*(ushort *)(lVar3 + 0x12a) != 0) {
    uVar4 = 0;
    piVar5 = (int *)(*(long *)(lVar3 + 0xb0) + 8);
    do {
      if (*(long *)(piVar5 + -2) == _INGUIFont_TypeInfo_12d4c70) {
        puVar2 = (undefined8 *)(lVar3 + (long)(*piVar5 + 0x24) * 0x10 + 0x138);
        goto LAB_009ee130;
      }
      uVar4 = uVar4 + 1;
      piVar5 = piVar5 + 4;
    } while (uVar4 < *(ushort *)(lVar3 + 0x12a));
  }
  puVar2 = (undefined8 *)native_sub_3c9b34(plVar1,_INGUIFont_TypeInfo_12d4c70,0x24);
LAB_009ee130:
                    /* WARNING: Could not recover jumptable at 0x009ee140. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  uVar4 = (*(code *)*puVar2)(plVar1,puVar2[1]);
  return uVar4;
}



/* UIFont$$set_dynamicFontStyle @ 0x9ee144
 * void UIFont__set_dynamicFontStyle (UIFont_o* __this, int32_t value, const MethodInfo* method); */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* UIFont$$set_dynamicFontStyle
   void UIFont__set_dynamicFontStyle (UIFont_o* __this, int32_t value, const MethodInfo* method); */

void native_UIFont__set_dynamicFontStyle_9ee144(long param_1,int param_2)

{
  uint uVar1;
  undefined8 uVar2;
  long lVar3;
  long *plVar4;
  undefined8 *puVar5;
  long lVar6;
  ulong uVar7;
  int *piVar8;
  long lVar9;
  int iVar10;
  uint uVar11;
  
  if ((bRam000000000134194a & 1) == 0) {
    native_sub_43273c(&INGUIFont_TypeInfo_12d4c70);
    bRam000000000134194a = 1;
  }
  plVar4 = (long *)native_UIFont__get_replacement_9eb43c(param_1);
  if (plVar4 == (long *)0x0) {
    if (*(int *)(param_1 + 0x5c) == param_2) {
      return;
    }
    *(int *)(param_1 + 0x5c) = param_2;
    if ((bRam000000000134194d & 1) == 0) {
      native_sub_43273c(&INGUIFont_TypeInfo_12d4c70);
      native_sub_43273c(&Method_System_Collections_Generic_List_BMSymbol__get_Count___12dc578);
      native_sub_43273c(&Method_System_Collections_Generic_List_BMSymbol__get_Item___12dc580);
      native_sub_43273c(&Method_NGUITools_FindActive_UILabel____12e5710);
      native_sub_43273c(&NGUITools_TypeInfo_12d53c8);
      bRam000000000134194d = 1;
    }
    plVar4 = (long *)native_UIFont__get_replacement_9eb43c(param_1);
    if (plVar4 != (long *)0x0) {
      lVar6 = *plVar4;
      if ((ulong)*(ushort *)(lVar6 + 0x12a) != 0) {
        uVar7 = 0;
        piVar8 = (int *)(*(long *)(lVar6 + 0xb0) + 8);
        do {
          if (*(long *)(piVar8 + -2) == _INGUIFont_TypeInfo_12d4c70) {
            puVar5 = (undefined8 *)(lVar6 + (long)(*piVar8 + 0x27) * 0x10 + 0x138);
            goto LAB_009ec574;
          }
          uVar7 = uVar7 + 1;
          piVar8 = piVar8 + 4;
        } while (uVar7 < *(ushort *)(lVar6 + 0x12a));
      }
      puVar5 = (undefined8 *)native_sub_3c9b34(plVar4,_INGUIFont_TypeInfo_12d4c70,0x27);
LAB_009ec574:
      (*(code *)*puVar5)(plVar4,puVar5[1]);
    }
    *(undefined8 *)(param_1 + 0x60) = 0;
    native_sub_4326e0((undefined8 *)(param_1 + 0x60),0);
    if (((*(byte *)(_NGUITools_TypeInfo_12d53c8 + 0x133) >> 2 & 1) != 0) &&
       (*(int *)(_NGUITools_TypeInfo_12d53c8 + 0xe0) == 0)) {
      native_sub_4327ec();
    }
    lVar6 = native_NGUITools__FindActive_AudioListener__4a5b30
                      (_Method_NGUITools_FindActive_UILabel____12e5710);
    if (lVar6 != 0) {
      iVar10 = (int)*(undefined8 *)(lVar6 + 0x18);
      if (0 < iVar10) {
        if (iVar10 != 0) {
          uVar11 = 0;
          do {
            lVar9 = *(long *)(lVar6 + (long)(int)uVar11 * 8 + 0x20);
            if (lVar9 == 0) goto LAB_009ec744;
            uVar7 = native_UnityEngine_Behaviour__get_enabled_8d7acc(lVar9,0);
            if ((uVar7 & 1) != 0) {
              uVar2 = native_UnityEngine_Component__get_gameObject_8da66c(lVar9,0);
              if (((*(byte *)(_NGUITools_TypeInfo_12d53c8 + 0x133) >> 2 & 1) != 0) &&
                 (*(int *)(_NGUITools_TypeInfo_12d53c8 + 0xe0) == 0)) {
                native_sub_4327ec(_NGUITools_TypeInfo_12d53c8);
              }
              uVar7 = native_NGUITools__GetActive_72d0d4(uVar2,0);
              if ((uVar7 & 1) != 0) {
                uVar2 = native_UILabel__get_font_ae77e8(lVar9,0);
                if (((*(byte *)(_NGUITools_TypeInfo_12d53c8 + 0x133) >> 2 & 1) != 0) &&
                   (*(int *)(_NGUITools_TypeInfo_12d53c8 + 0xe0) == 0)) {
                  native_sub_4327ec(_NGUITools_TypeInfo_12d53c8);
                }
                uVar7 = native_NGUITools__CheckIfRelated_7372e0(param_1,uVar2,0);
                if ((uVar7 & 1) != 0) {
                  uVar2 = native_UILabel__get_font_ae77e8(lVar9,0);
                  native_UILabel__set_font_ae79c4(lVar9,0,0);
                  native_UILabel__set_font_ae79c4(lVar9,uVar2,0);
                }
              }
            }
            uVar11 = uVar11 + 1;
            if (iVar10 <= (int)uVar11) goto LAB_009ec6c8;
          } while (uVar11 < *(uint *)(lVar6 + 0x18));
        }
        uVar2 = native_sub_43283c();
                    /* WARNING: Subroutine does not return */
        native_sub_4327dc(uVar2,0);
      }
LAB_009ec6c8:
      lVar6 = native_UIFont__get_symbols_9ebb98(param_1);
      if (lVar6 != 0) {
        uVar11 = *(uint *)(lVar6 + 0x18);
        if (0 < (int)uVar11) {
          lVar9 = 0;
          uVar1 = uVar11;
          while( true ) {
            if (uVar1 <= (uint)lVar9) {
              native_System_ThrowHelper__ThrowArgumentOutOfRangeException_9fe0f4(0);
            }
            lVar3 = *(long *)(*(long *)(lVar6 + 0x10) + lVar9 * 8 + 0x20);
            if (lVar3 == 0) goto LAB_009ec744;
            native_BMSymbol__MarkAsChanged_dd21c4(lVar3,0);
            if ((int)uVar11 <= (int)((uint)lVar9 + 1)) break;
            uVar1 = *(uint *)(lVar6 + 0x18);
            lVar9 = lVar9 + 1;
          }
        }
        return;
      }
    }
LAB_009ec744:
                    /* WARNING: Subroutine does not return */
    native_sub_432810();
  }
  lVar6 = *plVar4;
  if ((ulong)*(ushort *)(lVar6 + 0x12a) != 0) {
    uVar7 = 0;
    piVar8 = (int *)(*(long *)(lVar6 + 0xb0) + 8);
    do {
      if (*(long *)(piVar8 + -2) == _INGUIFont_TypeInfo_12d4c70) {
        puVar5 = (undefined8 *)(lVar6 + (long)(*piVar8 + 0x25) * 0x10 + 0x138);
        goto LAB_009ee208;
      }
      uVar7 = uVar7 + 1;
      piVar8 = piVar8 + 4;
    } while (uVar7 < *(ushort *)(lVar6 + 0x12a));
  }
  puVar5 = (undefined8 *)native_sub_3c9b34(plVar4,_INGUIFont_TypeInfo_12d4c70,0x25);
LAB_009ee208:
                    /* WARNING: Could not recover jumptable at 0x009ee220. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)*puVar5)(plVar4,param_2,puVar5[1]);
  return;
}



/* UIFont$$Trim @ 0x9ee23c
 * void UIFont__Trim (UIFont_o* __this, const MethodInfo* method); */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* UIFont$$Trim
   void UIFont__Trim (UIFont_o* __this, const MethodInfo* method); */

void native_UIFont__Trim_9ee23c(long param_1)

{
  undefined4 uVar1;
  undefined4 uVar2;
  long *plVar3;
  undefined8 *puVar4;
  undefined8 uVar5;
  long lVar6;
  ulong uVar7;
  int *piVar8;
  float fVar9;
  float fVar10;
  undefined4 uVar11;
  undefined4 uVar12;
  undefined4 uVar13;
  undefined4 uVar14;
  undefined8 uStack_70;
  undefined8 uStack_68;
  undefined8 uStack_60;
  undefined8 uStack_58;
  
  if ((bRam000000000134194b & 1) == 0) {
    native_sub_43273c(&INGUIAtlas_TypeInfo_12d4c68);
    native_sub_43273c(&NGUIMath_TypeInfo_12d53b8);
    native_sub_43273c(&UnityEngine_Object_TypeInfo_12d54e0);
    bRam000000000134194b = 1;
  }
  uStack_60 = 0;
  uStack_58 = 0;
  uStack_70 = 0;
  uStack_68 = 0;
  plVar3 = (long *)native_sub_4327f8(*(undefined8 *)(param_1 + 0x38),_INGUIAtlas_TypeInfo_12d4c68);
  uVar5 = 0;
  if (plVar3 != (long *)0x0) {
    lVar6 = *plVar3;
    if ((ulong)*(ushort *)(lVar6 + 0x12a) != 0) {
      uVar7 = 0;
      piVar8 = (int *)(*(long *)(lVar6 + 0xb0) + 8);
      do {
        if (*(long *)(piVar8 + -2) == _INGUIAtlas_TypeInfo_12d4c68) {
          puVar4 = (undefined8 *)(lVar6 + (long)(*piVar8 + 4) * 0x10 + 0x138);
          goto LAB_009ee310;
        }
        uVar7 = uVar7 + 1;
        piVar8 = piVar8 + 4;
      } while (uVar7 < *(ushort *)(lVar6 + 0x12a));
    }
    puVar4 = (undefined8 *)native_sub_3c9b34(plVar3,_INGUIAtlas_TypeInfo_12d4c68,4);
LAB_009ee310:
    uVar5 = (*(code *)*puVar4)(plVar3,puVar4[1]);
  }
  if (((*(byte *)(_UnityEngine_Object_TypeInfo_12d54e0 + 0x133) >> 2 & 1) != 0) &&
     (*(int *)(_UnityEngine_Object_TypeInfo_12d54e0 + 0xe0) == 0)) {
    native_sub_4327ec();
  }
  uVar7 = native_UnityEngine_Object__op_Inequality_8d76fc(uVar5,0,0);
  if (((uVar7 & 1) != 0) && (*(long *)(param_1 + 0x60) != 0)) {
    uVar11 = *(undefined4 *)(param_1 + 0x20);
    uVar12 = *(undefined4 *)(param_1 + 0x24);
    uVar13 = *(undefined4 *)(param_1 + 0x28);
    uVar14 = *(undefined4 *)(param_1 + 0x2c);
    plVar3 = (long *)native_UIFont__get_texture_9ed030(param_1);
    if (plVar3 != (long *)0x0) {
      uVar1 = (**(code **)(*plVar3 + 0x178))(plVar3,*(undefined8 *)(*plVar3 + 0x180));
      plVar3 = (long *)native_UIFont__get_texture_9ed030(param_1);
      if (plVar3 != (long *)0x0) {
        uVar2 = (**(code **)(*plVar3 + 0x198))(plVar3,*(undefined8 *)(*plVar3 + 0x1a0));
        if (((*(byte *)(_NGUIMath_TypeInfo_12d53b8 + 0x133) >> 2 & 1) != 0) &&
           (*(int *)(_NGUIMath_TypeInfo_12d53b8 + 0xe0) == 0)) {
          native_sub_4327ec(_NGUIMath_TypeInfo_12d53b8);
        }
        uVar11 = native_NGUIMath__ConvertToPixels_803314(uVar11,uVar1,uVar2,1,0);
        uStack_60 = CONCAT44(uVar12,uVar11);
        uStack_58 = CONCAT44(uVar14,uVar13);
        lVar6 = *(long *)(param_1 + 0x60);
        if (lVar6 != 0) {
          native_UnityEngine_Rect___ctor_7635c8
                    ((float)*(int *)(lVar6 + 0x18),(float)*(int *)(lVar6 + 0x1c),
                     (float)*(int *)(lVar6 + 0x20),(float)*(int *)(lVar6 + 0x24),&uStack_70,0);
          fVar9 = (float)native_UnityEngine_Rect__get_xMin_76363c(&uStack_70,0);
          fVar10 = (float)native_UnityEngine_Rect__get_xMin_76363c(&uStack_60,0);
          uVar12 = native_UnityEngine_Mathf__RoundToInt_8e50f0(fVar9 - fVar10,0);
          fVar9 = (float)native_UnityEngine_Rect__get_yMin_763644(&uStack_70,0);
          fVar10 = (float)native_UnityEngine_Rect__get_yMin_763644(&uStack_60,0);
          uVar13 = native_UnityEngine_Mathf__RoundToInt_8e50f0(fVar9 - fVar10,0);
          fVar9 = (float)native_UnityEngine_Rect__get_xMax_76365c(&uStack_70,0);
          fVar10 = (float)native_UnityEngine_Rect__get_xMin_76363c(&uStack_60,0);
          uVar14 = native_UnityEngine_Mathf__RoundToInt_8e50f0(fVar9 - fVar10,0);
          fVar9 = (float)native_UnityEngine_Rect__get_yMax_76366c(&uStack_70,0);
          fVar10 = (float)native_UnityEngine_Rect__get_yMin_763644(&uStack_60,0);
          uVar11 = native_UnityEngine_Mathf__RoundToInt_8e50f0(fVar9 - fVar10,0);
          if (*(long *)(param_1 + 0x30) != 0) {
            native_BMFont__Trim_dd1c8c(*(long *)(param_1 + 0x30),uVar12,uVar13,uVar14,uVar11,0);
            return;
          }
        }
      }
    }
                    /* WARNING: Subroutine does not return */
    native_sub_432810();
  }
  return;
}



/* UIFont$$References @ 0x9ee508
 * bool UIFont__References (UIFont_o* __this, INGUIFont_o* font, const MethodInfo* method); */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* UIFont$$References
   bool UIFont__References (UIFont_o* __this, INGUIFont_o* font, const MethodInfo* method); */

undefined8 native_UIFont__References_9ee508(long param_1,long param_2)

{
  long *plVar1;
  undefined8 *puVar2;
  undefined8 uVar3;
  long lVar4;
  ulong uVar5;
  int *piVar6;
  
  if ((bRam000000000134194c & 1) == 0) {
    native_sub_43273c(&INGUIFont_TypeInfo_12d4c70);
    bRam000000000134194c = 1;
  }
  if (param_2 == 0) {
    uVar3 = 0;
  }
  else if (param_1 == param_2) {
    uVar3 = 1;
  }
  else {
    plVar1 = (long *)native_UIFont__get_replacement_9eb43c(param_1);
    uVar3 = 0;
    if (plVar1 != (long *)0x0) {
      lVar4 = *plVar1;
      if ((ulong)*(ushort *)(lVar4 + 0x12a) != 0) {
        uVar5 = 0;
        piVar6 = (int *)(*(long *)(lVar4 + 0xb0) + 8);
        do {
          if (*(long *)(piVar6 + -2) == _INGUIFont_TypeInfo_12d4c70) {
            puVar2 = (undefined8 *)(lVar4 + (long)(*piVar6 + 0x26) * 0x10 + 0x138);
            goto LAB_009ee5d8;
          }
          uVar5 = uVar5 + 1;
          piVar6 = piVar6 + 4;
        } while (uVar5 < *(ushort *)(lVar4 + 0x12a));
      }
      puVar2 = (undefined8 *)native_sub_3c9b34(plVar1,_INGUIFont_TypeInfo_12d4c70,0x26);
LAB_009ee5d8:
                    /* WARNING: Could not recover jumptable at 0x009ee5f0. Too many branches */
                    /* WARNING: Treating indirect jump as call */
      uVar3 = (*(code *)*puVar2)(plVar1,param_2,puVar2[1]);
      return uVar3;
    }
  }
  return uVar3;
}



/* UIFont$$MarkAsChanged @ 0x9ec498
 * void UIFont__MarkAsChanged (UIFont_o* __this, const MethodInfo* method); */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* UIFont$$MarkAsChanged
   void UIFont__MarkAsChanged (UIFont_o* __this, const MethodInfo* method); */

void native_UIFont__MarkAsChanged_9ec498(long param_1)

{
  uint uVar1;
  long *plVar2;
  undefined8 *puVar3;
  undefined8 uVar4;
  long lVar5;
  long lVar6;
  ulong uVar7;
  int *piVar8;
  long lVar9;
  int iVar10;
  uint uVar11;
  
  if ((bRam000000000134194d & 1) == 0) {
    native_sub_43273c(&INGUIFont_TypeInfo_12d4c70);
    native_sub_43273c(&Method_System_Collections_Generic_List_BMSymbol__get_Count___12dc578);
    native_sub_43273c(&Method_System_Collections_Generic_List_BMSymbol__get_Item___12dc580);
    native_sub_43273c(&Method_NGUITools_FindActive_UILabel____12e5710);
    native_sub_43273c(&NGUITools_TypeInfo_12d53c8);
    bRam000000000134194d = 1;
  }
  plVar2 = (long *)native_UIFont__get_replacement_9eb43c(param_1);
  if (plVar2 != (long *)0x0) {
    lVar6 = *plVar2;
    if ((ulong)*(ushort *)(lVar6 + 0x12a) != 0) {
      uVar7 = 0;
      piVar8 = (int *)(*(long *)(lVar6 + 0xb0) + 8);
      do {
        if (*(long *)(piVar8 + -2) == _INGUIFont_TypeInfo_12d4c70) {
          puVar3 = (undefined8 *)(lVar6 + (long)(*piVar8 + 0x27) * 0x10 + 0x138);
          goto LAB_009ec574;
        }
        uVar7 = uVar7 + 1;
        piVar8 = piVar8 + 4;
      } while (uVar7 < *(ushort *)(lVar6 + 0x12a));
    }
    puVar3 = (undefined8 *)native_sub_3c9b34(plVar2,_INGUIFont_TypeInfo_12d4c70,0x27);
LAB_009ec574:
    (*(code *)*puVar3)(plVar2,puVar3[1]);
  }
  *(undefined8 *)(param_1 + 0x60) = 0;
  native_sub_4326e0((undefined8 *)(param_1 + 0x60),0);
  if (((*(byte *)(_NGUITools_TypeInfo_12d53c8 + 0x133) >> 2 & 1) != 0) &&
     (*(int *)(_NGUITools_TypeInfo_12d53c8 + 0xe0) == 0)) {
    native_sub_4327ec();
  }
  lVar6 = native_NGUITools__FindActive_AudioListener__4a5b30
                    (_Method_NGUITools_FindActive_UILabel____12e5710);
  if (lVar6 != 0) {
    iVar10 = (int)*(undefined8 *)(lVar6 + 0x18);
    if (0 < iVar10) {
      if (iVar10 != 0) {
        uVar11 = 0;
        do {
          lVar9 = *(long *)(lVar6 + (long)(int)uVar11 * 8 + 0x20);
          if (lVar9 == 0) goto LAB_009ec744;
          uVar7 = native_UnityEngine_Behaviour__get_enabled_8d7acc(lVar9,0);
          if ((uVar7 & 1) != 0) {
            uVar4 = native_UnityEngine_Component__get_gameObject_8da66c(lVar9,0);
            if (((*(byte *)(_NGUITools_TypeInfo_12d53c8 + 0x133) >> 2 & 1) != 0) &&
               (*(int *)(_NGUITools_TypeInfo_12d53c8 + 0xe0) == 0)) {
              native_sub_4327ec(_NGUITools_TypeInfo_12d53c8);
            }
            uVar7 = native_NGUITools__GetActive_72d0d4(uVar4,0);
            if ((uVar7 & 1) != 0) {
              uVar4 = native_UILabel__get_font_ae77e8(lVar9,0);
              if (((*(byte *)(_NGUITools_TypeInfo_12d53c8 + 0x133) >> 2 & 1) != 0) &&
                 (*(int *)(_NGUITools_TypeInfo_12d53c8 + 0xe0) == 0)) {
                native_sub_4327ec(_NGUITools_TypeInfo_12d53c8);
              }
              uVar7 = native_NGUITools__CheckIfRelated_7372e0(param_1,uVar4,0);
              if ((uVar7 & 1) != 0) {
                uVar4 = native_UILabel__get_font_ae77e8(lVar9,0);
                native_UILabel__set_font_ae79c4(lVar9,0,0);
                native_UILabel__set_font_ae79c4(lVar9,uVar4,0);
              }
            }
          }
          uVar11 = uVar11 + 1;
          if (iVar10 <= (int)uVar11) goto LAB_009ec6c8;
        } while (uVar11 < *(uint *)(lVar6 + 0x18));
      }
      uVar4 = native_sub_43283c();
                    /* WARNING: Subroutine does not return */
      native_sub_4327dc(uVar4,0);
    }
LAB_009ec6c8:
    lVar6 = native_UIFont__get_symbols_9ebb98(param_1);
    if (lVar6 != 0) {
      uVar11 = *(uint *)(lVar6 + 0x18);
      if (0 < (int)uVar11) {
        lVar9 = 0;
        uVar1 = uVar11;
        while( true ) {
          if (uVar1 <= (uint)lVar9) {
            native_System_ThrowHelper__ThrowArgumentOutOfRangeException_9fe0f4(0);
          }
          lVar5 = *(long *)(*(long *)(lVar6 + 0x10) + lVar9 * 8 + 0x20);
          if (lVar5 == 0) goto LAB_009ec744;
          native_BMSymbol__MarkAsChanged_dd21c4(lVar5,0);
          if ((int)uVar11 <= (int)((uint)lVar9 + 1)) break;
          uVar1 = *(uint *)(lVar6 + 0x18);
          lVar9 = lVar9 + 1;
        }
      }
      return;
    }
  }
LAB_009ec744:
                    /* WARNING: Subroutine does not return */
  native_sub_432810();
}



/* UIFont$$UpdateUVRect @ 0x9ed998
 * void UIFont__UpdateUVRect (UIFont_o* __this, const MethodInfo* method); */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* UIFont$$UpdateUVRect
   void UIFont__UpdateUVRect (UIFont_o* __this, const MethodInfo* method); */

void native_UIFont__UpdateUVRect_9ed998(long param_1)

{
  undefined4 uVar1;
  undefined4 uVar2;
  ulong uVar3;
  long *plVar4;
  undefined8 *puVar5;
  long *plVar6;
  long lVar7;
  int *piVar8;
  undefined8 uVar9;
  undefined4 uVar10;
  undefined4 uVar11;
  undefined4 uVar12;
  undefined8 uStack_60;
  undefined8 uStack_58;
  
  if ((bRam000000000134194e & 1) == 0) {
    native_sub_43273c(&INGUIAtlas_TypeInfo_12d4c68);
    native_sub_43273c(&NGUIMath_TypeInfo_12d53b8);
    native_sub_43273c(&UnityEngine_Object_TypeInfo_12d54e0);
    bRam000000000134194e = 1;
  }
  uVar9 = *(undefined8 *)(param_1 + 0x38);
  if (((*(byte *)(_UnityEngine_Object_TypeInfo_12d54e0 + 0x133) >> 2 & 1) != 0) &&
     (*(int *)(_UnityEngine_Object_TypeInfo_12d54e0 + 0xe0) == 0)) {
    native_sub_4327ec();
  }
  uVar3 = native_UnityEngine_Object__op_Equality_8e9a3c(uVar9,0,0);
  if ((uVar3 & 1) == 0) {
    plVar4 = (long *)native_sub_4327f8(*(undefined8 *)(param_1 + 0x38),_INGUIAtlas_TypeInfo_12d4c68)
    ;
    plVar6 = (long *)0x0;
    if (plVar4 != (long *)0x0) {
      lVar7 = *plVar4;
      if ((ulong)*(ushort *)(lVar7 + 0x12a) != 0) {
        uVar3 = 0;
        piVar8 = (int *)(*(long *)(lVar7 + 0xb0) + 8);
        do {
          if (*(long *)(piVar8 + -2) == _INGUIAtlas_TypeInfo_12d4c68) {
            puVar5 = (undefined8 *)(lVar7 + (long)(*piVar8 + 4) * 0x10 + 0x138);
            goto LAB_009eda9c;
          }
          uVar3 = uVar3 + 1;
          piVar8 = piVar8 + 4;
        } while (uVar3 < *(ushort *)(lVar7 + 0x12a));
      }
      puVar5 = (undefined8 *)native_sub_3c9b34(plVar4,_INGUIAtlas_TypeInfo_12d4c68,4);
LAB_009eda9c:
      plVar6 = (long *)(*(code *)*puVar5)(plVar4,puVar5[1]);
    }
    if (((*(byte *)(_UnityEngine_Object_TypeInfo_12d54e0 + 0x133) >> 2 & 1) != 0) &&
       (*(int *)(_UnityEngine_Object_TypeInfo_12d54e0 + 0xe0) == 0)) {
      native_sub_4327ec();
    }
    uVar3 = native_UnityEngine_Object__op_Inequality_8d76fc(plVar6,0,0);
    if ((uVar3 & 1) != 0) {
      lVar7 = *(long *)(param_1 + 0x60);
      if (lVar7 != 0) {
        uStack_60 = 0;
        uStack_58 = 0;
        native_UnityEngine_Rect___ctor_7635c8
                  ((float)(*(int *)(lVar7 + 0x18) - *(int *)(lVar7 + 0x38)),
                   (float)(*(int *)(lVar7 + 0x1c) - *(int *)(lVar7 + 0x40)),
                   (float)(*(int *)(lVar7 + 0x20) + *(int *)(lVar7 + 0x38) + *(int *)(lVar7 + 0x3c))
                   ,(float)(*(int *)(lVar7 + 0x24) + *(int *)(lVar7 + 0x40) + *(int *)(lVar7 + 0x44)
                           ),&uStack_60,0);
        uVar3 = uStack_60 & 0xffffffff;
        uVar10 = uStack_60._4_4_;
        uVar11 = (undefined4)uStack_58;
        uVar12 = uStack_58._4_4_;
        *(undefined4 *)(param_1 + 0x20) = (undefined4)uStack_60;
        *(undefined4 *)(param_1 + 0x24) = uStack_60._4_4_;
        *(undefined4 *)(param_1 + 0x28) = (undefined4)uStack_58;
        *(undefined4 *)(param_1 + 0x2c) = uStack_58._4_4_;
        if (plVar6 != (long *)0x0) {
          uVar1 = (**(code **)(*plVar6 + 0x178))(plVar6,*(undefined8 *)(*plVar6 + 0x180));
          uVar2 = (**(code **)(*plVar6 + 0x198))(plVar6,*(undefined8 *)(*plVar6 + 0x1a0));
          if (((*(byte *)(_NGUIMath_TypeInfo_12d53b8 + 0x133) >> 2 & 1) != 0) &&
             (*(int *)(_NGUIMath_TypeInfo_12d53b8 + 0xe0) == 0)) {
            native_sub_4327ec(_NGUIMath_TypeInfo_12d53b8);
          }
          uVar1 = native_NGUIMath__ConvertToTexCoords_803574(uVar3,uVar1,uVar2,0);
          *(undefined4 *)(param_1 + 0x20) = uVar1;
          *(undefined4 *)(param_1 + 0x24) = uVar10;
          *(undefined4 *)(param_1 + 0x28) = uVar11;
          *(undefined4 *)(param_1 + 0x2c) = uVar12;
          if (*(long *)(param_1 + 0x60) != 0) {
            uVar3 = native_UISpriteData__get_hasPadding_940b58(*(long *)(param_1 + 0x60),0);
            if ((uVar3 & 1) == 0) {
              return;
            }
            native_UIFont__Trim_9ee23c(param_1);
            return;
          }
        }
      }
                    /* WARNING: Subroutine does not return */
      native_sub_432810();
    }
  }
  return;
}



/* UIFont$$GetSymbol @ 0x9ee5f4
 * BMSymbol_o* UIFont__GetSymbol (UIFont_o* __this, System_String_o* sequence, bool createIfMissing, const MethodInfo* method); */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* UIFont$$GetSymbol
   BMSymbol_o* UIFont__GetSymbol (UIFont_o* __this, System_String_o* sequence, bool createIfMissing,
   const MethodInfo* method); */

long native_UIFont__GetSymbol_9ee5f4(long param_1,undefined8 param_2,ulong param_3)

{
  int iVar1;
  ulong uVar2;
  long lVar3;
  uint uVar4;
  
  if ((bRam000000000134194f & 1) == 0) {
    native_sub_43273c(&BMSymbol_TypeInfo_12d3ab0);
    native_sub_43273c(&Method_System_Collections_Generic_List_BMSymbol__Add___12dc568);
    native_sub_43273c(&Method_System_Collections_Generic_List_BMSymbol__get_Count___12dc578);
    native_sub_43273c(&Method_System_Collections_Generic_List_BMSymbol__get_Item___12dc580);
    bRam000000000134194f = 1;
  }
  lVar3 = *(long *)(param_1 + 0x48);
  if (lVar3 != 0) {
    iVar1 = *(int *)(lVar3 + 0x18);
    if (iVar1 < 1) {
LAB_009ee6c0:
      if ((param_3 & 1) == 0) {
        return 0;
      }
      lVar3 = native_sub_432808(_BMSymbol_TypeInfo_12d3ab0);
      native_BMSymbol___ctor_dd24c0(lVar3,0);
      if (lVar3 != 0) {
        *(undefined8 *)(lVar3 + 0x10) = param_2;
        native_sub_4326e0((undefined8 *)(lVar3 + 0x10),param_2);
        if (*(long *)(param_1 + 0x48) != 0) {
          native_System_Collections_Generic_List_int_____Add_d40c00
                    (*(long *)(param_1 + 0x48),lVar3,
                     _Method_System_Collections_Generic_List_BMSymbol__Add___12dc568);
          return lVar3;
        }
      }
    }
    else {
      uVar4 = 0;
      do {
        if (*(uint *)(lVar3 + 0x18) <= uVar4) {
          native_System_ThrowHelper__ThrowArgumentOutOfRangeException_9fe0f4(0);
        }
        lVar3 = *(long *)(*(long *)(lVar3 + 0x10) + (long)(int)uVar4 * 8 + 0x20);
        if (lVar3 == 0) break;
        uVar2 = native_System_String__op_Equality_afc18c(*(undefined8 *)(lVar3 + 0x10),param_2,0);
        if ((uVar2 & 1) != 0) {
          return lVar3;
        }
        uVar4 = uVar4 + 1;
        if (iVar1 <= (int)uVar4) goto LAB_009ee6c0;
        lVar3 = *(long *)(param_1 + 0x48);
      } while (lVar3 != 0);
    }
  }
                    /* WARNING: Subroutine does not return */
  native_sub_432810();
}



/* UIFont$$MatchSymbol @ 0x9ee734
 * BMSymbol_o* UIFont__MatchSymbol (UIFont_o* __this, System_String_o** text, int32_t offset, int32_t textLength, const MethodInfo* method); */

/* UIFont$$MatchSymbol
   BMSymbol_o* UIFont__MatchSymbol (UIFont_o* __this, System_String_o** text, int32_t offset,
   int32_t textLength, const MethodInfo* method); */

long native_UIFont__MatchSymbol_9ee734(long param_1,long *param_2,int param_3,int param_4)

{
  int iVar1;
  short sVar2;
  short sVar3;
  int iVar4;
  undefined8 uVar5;
  ulong uVar6;
  long lVar7;
  int iVar8;
  uint uVar9;
  
  if ((bRam0000000001341950 & 1) == 0) {
    native_sub_43273c(&Method_System_Collections_Generic_List_BMSymbol__get_Count___12dc578);
    native_sub_43273c(&Method_System_Collections_Generic_List_BMSymbol__get_Item___12dc580);
    bRam0000000001341950 = 1;
  }
  lVar7 = *(long *)(param_1 + 0x48);
  if (lVar7 != 0) {
    iVar1 = *(int *)(lVar7 + 0x18);
    if ((iVar1 == 0) || (iVar1 < 1)) {
      return 0;
    }
    uVar9 = 0;
    do {
      if (*(uint *)(lVar7 + 0x18) <= uVar9) {
        native_System_ThrowHelper__ThrowArgumentOutOfRangeException_9fe0f4(0);
      }
      lVar7 = *(long *)(*(long *)(lVar7 + 0x10) + (long)(int)uVar9 * 8 + 0x20);
      if (lVar7 == 0) break;
      iVar4 = native_BMSymbol__get_length_dd2140(lVar7,0);
      if ((iVar4 != 0) && (iVar4 <= param_4 - param_3)) {
        if (0 < iVar4) {
          iVar8 = 0;
          do {
            if (*param_2 == 0) goto LAB_009ee870;
            sVar2 = native_System_String__get_Chars_b03810(*param_2,param_3 + iVar8,0);
            if (*(long *)(lVar7 + 0x10) == 0) goto LAB_009ee870;
            sVar3 = native_System_String__get_Chars_b03810(*(long *)(lVar7 + 0x10),iVar8,0);
            if (sVar2 != sVar3) goto LAB_009ee85c;
            iVar8 = iVar8 + 1;
          } while (iVar8 < iVar4);
        }
        uVar5 = native_UIFont__get_atlas_9ebd3c(param_1);
        uVar6 = native_BMSymbol__Validate_dd21cc(lVar7,uVar5,0);
        if ((uVar6 & 1) != 0) {
          return lVar7;
        }
      }
LAB_009ee85c:
      uVar9 = uVar9 + 1;
      if (iVar1 <= (int)uVar9) {
        return 0;
      }
      lVar7 = *(long *)(param_1 + 0x48);
    } while (lVar7 != 0);
  }
LAB_009ee870:
                    /* WARNING: Subroutine does not return */
  native_sub_432810();
}



/* UIFont$$AddSymbol @ 0x9ee898
 * BMSymbol_o* UIFont__AddSymbol (UIFont_o* __this, System_String_o* sequence, System_String_o* spriteName, const MethodInfo* method); */

/* UIFont$$AddSymbol
   BMSymbol_o* UIFont__AddSymbol (UIFont_o* __this, System_String_o* sequence, System_String_o*
   spriteName, const MethodInfo* method); */

long native_UIFont__AddSymbol_9ee898(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  long lVar1;
  
  lVar1 = native_UIFont__GetSymbol_9ee5f4(param_1,param_2,1);
  if (lVar1 != 0) {
    *(undefined8 *)(lVar1 + 0x18) = param_3;
    native_sub_4326e0((undefined8 *)(lVar1 + 0x18),param_3);
    native_UIFont__MarkAsChanged_9ec498(param_1);
    return lVar1;
  }
                    /* WARNING: Subroutine does not return */
  native_sub_432810();
}



/* UIFont$$RemoveSymbol @ 0x9ee8ec
 * void UIFont__RemoveSymbol (UIFont_o* __this, System_String_o* sequence, const MethodInfo* method); */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* UIFont$$RemoveSymbol
   void UIFont__RemoveSymbol (UIFont_o* __this, System_String_o* sequence, const MethodInfo*
   method); */

void native_UIFont__RemoveSymbol_9ee8ec(long param_1,undefined8 param_2)

{
  uint uVar1;
  long *plVar2;
  undefined8 *puVar3;
  undefined8 uVar4;
  long lVar5;
  long lVar6;
  long lVar7;
  ulong uVar8;
  int *piVar9;
  int iVar10;
  uint uVar11;
  
  if ((bRam0000000001341951 & 1) == 0) {
    native_sub_43273c(&Method_System_Collections_Generic_List_BMSymbol__Remove___12dc570);
    bRam0000000001341951 = 1;
  }
  lVar6 = native_UIFont__GetSymbol_9ee5f4(param_1,param_2,0);
  if (lVar6 != 0) {
    lVar7 = native_UIFont__get_symbols_9ebb98(param_1);
    if (lVar7 == 0) {
                    /* WARNING: Subroutine does not return */
      native_sub_432810();
    }
    native_System_Collections_Generic_List_BMSymbol___Remove_d41f3c
              (lVar7,lVar6,_Method_System_Collections_Generic_List_BMSymbol__Remove___12dc570);
  }
  if ((bRam000000000134194d & 1) == 0) {
    native_sub_43273c(&INGUIFont_TypeInfo_12d4c70);
    native_sub_43273c(&Method_System_Collections_Generic_List_BMSymbol__get_Count___12dc578);
    native_sub_43273c(&Method_System_Collections_Generic_List_BMSymbol__get_Item___12dc580);
    native_sub_43273c(&Method_NGUITools_FindActive_UILabel____12e5710);
    native_sub_43273c(&NGUITools_TypeInfo_12d53c8);
    bRam000000000134194d = 1;
  }
  plVar2 = (long *)native_UIFont__get_replacement_9eb43c(param_1);
  if (plVar2 != (long *)0x0) {
    lVar6 = *plVar2;
    if ((ulong)*(ushort *)(lVar6 + 0x12a) != 0) {
      uVar8 = 0;
      piVar9 = (int *)(*(long *)(lVar6 + 0xb0) + 8);
      do {
        if (*(long *)(piVar9 + -2) == _INGUIFont_TypeInfo_12d4c70) {
          puVar3 = (undefined8 *)(lVar6 + (long)(*piVar9 + 0x27) * 0x10 + 0x138);
          goto LAB_009ec574;
        }
        uVar8 = uVar8 + 1;
        piVar9 = piVar9 + 4;
      } while (uVar8 < *(ushort *)(lVar6 + 0x12a));
    }
    puVar3 = (undefined8 *)native_sub_3c9b34(plVar2,_INGUIFont_TypeInfo_12d4c70,0x27);
LAB_009ec574:
    (*(code *)*puVar3)(plVar2,puVar3[1]);
  }
  *(undefined8 *)(param_1 + 0x60) = 0;
  native_sub_4326e0((undefined8 *)(param_1 + 0x60),0);
  if (((*(byte *)(_NGUITools_TypeInfo_12d53c8 + 0x133) >> 2 & 1) != 0) &&
     (*(int *)(_NGUITools_TypeInfo_12d53c8 + 0xe0) == 0)) {
    native_sub_4327ec();
  }
  lVar6 = native_NGUITools__FindActive_AudioListener__4a5b30
                    (_Method_NGUITools_FindActive_UILabel____12e5710);
  if (lVar6 != 0) {
    iVar10 = (int)*(undefined8 *)(lVar6 + 0x18);
    if (0 < iVar10) {
      if (iVar10 != 0) {
        uVar11 = 0;
        do {
          lVar7 = *(long *)(lVar6 + (long)(int)uVar11 * 8 + 0x20);
          if (lVar7 == 0) goto LAB_009ec744;
          uVar8 = native_UnityEngine_Behaviour__get_enabled_8d7acc(lVar7,0);
          if ((uVar8 & 1) != 0) {
            uVar4 = native_UnityEngine_Component__get_gameObject_8da66c(lVar7,0);
            if (((*(byte *)(_NGUITools_TypeInfo_12d53c8 + 0x133) >> 2 & 1) != 0) &&
               (*(int *)(_NGUITools_TypeInfo_12d53c8 + 0xe0) == 0)) {
              native_sub_4327ec(_NGUITools_TypeInfo_12d53c8);
            }
            uVar8 = native_NGUITools__GetActive_72d0d4(uVar4,0);
            if ((uVar8 & 1) != 0) {
              uVar4 = native_UILabel__get_font_ae77e8(lVar7,0);
              if (((*(byte *)(_NGUITools_TypeInfo_12d53c8 + 0x133) >> 2 & 1) != 0) &&
                 (*(int *)(_NGUITools_TypeInfo_12d53c8 + 0xe0) == 0)) {
                native_sub_4327ec(_NGUITools_TypeInfo_12d53c8);
              }
              uVar8 = native_NGUITools__CheckIfRelated_7372e0(param_1,uVar4,0);
              if ((uVar8 & 1) != 0) {
                uVar4 = native_UILabel__get_font_ae77e8(lVar7,0);
                native_UILabel__set_font_ae79c4(lVar7,0,0);
                native_UILabel__set_font_ae79c4(lVar7,uVar4,0);
              }
            }
          }
          uVar11 = uVar11 + 1;
          if (iVar10 <= (int)uVar11) goto LAB_009ec6c8;
        } while (uVar11 < *(uint *)(lVar6 + 0x18));
      }
      uVar4 = native_sub_43283c();
                    /* WARNING: Subroutine does not return */
      native_sub_4327dc(uVar4,0);
    }
LAB_009ec6c8:
    lVar6 = native_UIFont__get_symbols_9ebb98(param_1);
    if (lVar6 != 0) {
      uVar11 = *(uint *)(lVar6 + 0x18);
      if (0 < (int)uVar11) {
        lVar7 = 0;
        uVar1 = uVar11;
        while( true ) {
          if (uVar1 <= (uint)lVar7) {
            native_System_ThrowHelper__ThrowArgumentOutOfRangeException_9fe0f4(0);
          }
          lVar5 = *(long *)(*(long *)(lVar6 + 0x10) + lVar7 * 8 + 0x20);
          if (lVar5 == 0) goto LAB_009ec744;
          native_BMSymbol__MarkAsChanged_dd21c4(lVar5,0);
          if ((int)uVar11 <= (int)((uint)lVar7 + 1)) break;
          uVar1 = *(uint *)(lVar6 + 0x18);
          lVar7 = lVar7 + 1;
        }
      }
      return;
    }
  }
LAB_009ec744:
                    /* WARNING: Subroutine does not return */
  native_sub_432810();
}



/* UIFont$$RenameSymbol @ 0x9ee974
 * void UIFont__RenameSymbol (UIFont_o* __this, System_String_o* before, System_String_o* after, const MethodInfo* method); */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* UIFont$$RenameSymbol
   void UIFont__RenameSymbol (UIFont_o* __this, System_String_o* before, System_String_o* after,
   const MethodInfo* method); */

void native_UIFont__RenameSymbol_9ee974(long param_1,undefined8 param_2,undefined8 param_3)

{
  uint uVar1;
  long *plVar2;
  undefined8 *puVar3;
  undefined8 uVar4;
  long lVar5;
  long lVar6;
  ulong uVar7;
  int *piVar8;
  long lVar9;
  int iVar10;
  uint uVar11;
  
  lVar6 = native_UIFont__GetSymbol_9ee5f4(param_1,param_2,0);
  if (lVar6 != 0) {
    *(undefined8 *)(lVar6 + 0x10) = param_3;
    native_sub_4326e0((undefined8 *)(lVar6 + 0x10),param_3);
  }
  if ((bRam000000000134194d & 1) == 0) {
    native_sub_43273c(&INGUIFont_TypeInfo_12d4c70);
    native_sub_43273c(&Method_System_Collections_Generic_List_BMSymbol__get_Count___12dc578);
    native_sub_43273c(&Method_System_Collections_Generic_List_BMSymbol__get_Item___12dc580);
    native_sub_43273c(&Method_NGUITools_FindActive_UILabel____12e5710);
    native_sub_43273c(&NGUITools_TypeInfo_12d53c8);
    bRam000000000134194d = 1;
  }
  plVar2 = (long *)native_UIFont__get_replacement_9eb43c(param_1);
  if (plVar2 != (long *)0x0) {
    lVar6 = *plVar2;
    if ((ulong)*(ushort *)(lVar6 + 0x12a) != 0) {
      uVar7 = 0;
      piVar8 = (int *)(*(long *)(lVar6 + 0xb0) + 8);
      do {
        if (*(long *)(piVar8 + -2) == _INGUIFont_TypeInfo_12d4c70) {
          puVar3 = (undefined8 *)(lVar6 + (long)(*piVar8 + 0x27) * 0x10 + 0x138);
          goto LAB_009ec574;
        }
        uVar7 = uVar7 + 1;
        piVar8 = piVar8 + 4;
      } while (uVar7 < *(ushort *)(lVar6 + 0x12a));
    }
    puVar3 = (undefined8 *)native_sub_3c9b34(plVar2,_INGUIFont_TypeInfo_12d4c70,0x27);
LAB_009ec574:
    (*(code *)*puVar3)(plVar2,puVar3[1]);
  }
  *(undefined8 *)(param_1 + 0x60) = 0;
  native_sub_4326e0((undefined8 *)(param_1 + 0x60),0);
  if (((*(byte *)(_NGUITools_TypeInfo_12d53c8 + 0x133) >> 2 & 1) != 0) &&
     (*(int *)(_NGUITools_TypeInfo_12d53c8 + 0xe0) == 0)) {
    native_sub_4327ec();
  }
  lVar6 = native_NGUITools__FindActive_AudioListener__4a5b30
                    (_Method_NGUITools_FindActive_UILabel____12e5710);
  if (lVar6 != 0) {
    iVar10 = (int)*(undefined8 *)(lVar6 + 0x18);
    if (0 < iVar10) {
      if (iVar10 != 0) {
        uVar11 = 0;
        do {
          lVar9 = *(long *)(lVar6 + (long)(int)uVar11 * 8 + 0x20);
          if (lVar9 == 0) goto LAB_009ec744;
          uVar7 = native_UnityEngine_Behaviour__get_enabled_8d7acc(lVar9,0);
          if ((uVar7 & 1) != 0) {
            uVar4 = native_UnityEngine_Component__get_gameObject_8da66c(lVar9,0);
            if (((*(byte *)(_NGUITools_TypeInfo_12d53c8 + 0x133) >> 2 & 1) != 0) &&
               (*(int *)(_NGUITools_TypeInfo_12d53c8 + 0xe0) == 0)) {
              native_sub_4327ec(_NGUITools_TypeInfo_12d53c8);
            }
            uVar7 = native_NGUITools__GetActive_72d0d4(uVar4,0);
            if ((uVar7 & 1) != 0) {
              uVar4 = native_UILabel__get_font_ae77e8(lVar9,0);
              if (((*(byte *)(_NGUITools_TypeInfo_12d53c8 + 0x133) >> 2 & 1) != 0) &&
                 (*(int *)(_NGUITools_TypeInfo_12d53c8 + 0xe0) == 0)) {
                native_sub_4327ec(_NGUITools_TypeInfo_12d53c8);
              }
              uVar7 = native_NGUITools__CheckIfRelated_7372e0(param_1,uVar4,0);
              if ((uVar7 & 1) != 0) {
                uVar4 = native_UILabel__get_font_ae77e8(lVar9,0);
                native_UILabel__set_font_ae79c4(lVar9,0,0);
                native_UILabel__set_font_ae79c4(lVar9,uVar4,0);
              }
            }
          }
          uVar11 = uVar11 + 1;
          if (iVar10 <= (int)uVar11) goto LAB_009ec6c8;
        } while (uVar11 < *(uint *)(lVar6 + 0x18));
      }
      uVar4 = native_sub_43283c();
                    /* WARNING: Subroutine does not return */
      native_sub_4327dc(uVar4,0);
    }
LAB_009ec6c8:
    lVar6 = native_UIFont__get_symbols_9ebb98(param_1);
    if (lVar6 != 0) {
      uVar11 = *(uint *)(lVar6 + 0x18);
      if (0 < (int)uVar11) {
        lVar9 = 0;
        uVar1 = uVar11;
        while( true ) {
          if (uVar1 <= (uint)lVar9) {
            native_System_ThrowHelper__ThrowArgumentOutOfRangeException_9fe0f4(0);
          }
          lVar5 = *(long *)(*(long *)(lVar6 + 0x10) + lVar9 * 8 + 0x20);
          if (lVar5 == 0) goto LAB_009ec744;
          native_BMSymbol__MarkAsChanged_dd21c4(lVar5,0);
          if ((int)uVar11 <= (int)((uint)lVar9 + 1)) break;
          uVar1 = *(uint *)(lVar6 + 0x18);
          lVar9 = lVar9 + 1;
        }
      }
      return;
    }
  }
LAB_009ec744:
                    /* WARNING: Subroutine does not return */
  native_sub_432810();
}



/* UIFont$$UsesSprite @ 0x9ee9b0
 * bool UIFont__UsesSprite (UIFont_o* __this, System_String_o* s, const MethodInfo* method); */

/* UIFont$$UsesSprite
   bool UIFont__UsesSprite (UIFont_o* __this, System_String_o* s, const MethodInfo* method); */

undefined8 native_UIFont__UsesSprite_9ee9b0(undefined8 param_1,long param_2)

{
  int iVar1;
  ulong uVar2;
  undefined8 uVar3;
  long lVar4;
  long lVar5;
  
  if ((bRam0000000001341952 & 1) == 0) {
    native_sub_43273c(&Method_System_Collections_Generic_List_BMSymbol__get_Count___12dc578);
    native_sub_43273c(&Method_System_Collections_Generic_List_BMSymbol__get_Item___12dc580);
    bRam0000000001341952 = 1;
  }
  uVar2 = native_System_String__IsNullOrEmpty_b09430(param_2,0);
  if ((uVar2 & 1) != 0) {
    return 0;
  }
  uVar3 = native_UIFont__get_spriteName_9ed2c8(param_1);
  if (param_2 != 0) {
    uVar2 = native_System_String__Equals_af8bfc(param_2,uVar3,0);
    if ((uVar2 & 1) != 0) {
      return 1;
    }
    lVar4 = native_UIFont__get_symbols_9ebb98(param_1);
    if (lVar4 != 0) {
      iVar1 = *(int *)(lVar4 + 0x18);
      if (iVar1 < 1) {
        return 0;
      }
      lVar4 = 0;
      while (lVar5 = native_UIFont__get_symbols_9ebb98(param_1), lVar5 != 0) {
        if (*(uint *)(lVar5 + 0x18) <= (uint)lVar4) {
          native_System_ThrowHelper__ThrowArgumentOutOfRangeException_9fe0f4(0);
        }
        lVar5 = *(long *)(*(long *)(lVar5 + 0x10) + lVar4 * 8 + 0x20);
        if (lVar5 == 0) break;
        uVar2 = native_System_String__Equals_af8bfc(param_2,*(undefined8 *)(lVar5 + 0x18),0);
        if ((uVar2 & 1) != 0) {
          return 1;
        }
        lVar4 = lVar4 + 1;
        if (iVar1 <= (int)lVar4) {
          return 0;
        }
      }
    }
  }
                    /* WARNING: Subroutine does not return */
  native_sub_432810();
}



/* UIFont$$.ctor @ 0x9eeac0
 * void UIFont___ctor (UIFont_o* __this, const MethodInfo* method); */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* UIFont$$.ctor
   void UIFont___ctor (UIFont_o* __this, const MethodInfo* method); */

void native_UIFont___ctor_9eeac0(long param_1)

{
  undefined8 uVar1;
  undefined8 uStack_30;
  undefined8 uStack_28;
  
  if ((bRam0000000001341953 & 1) == 0) {
    native_sub_43273c(&BMFont_TypeInfo_12d3aa0);
    native_sub_43273c(&Method_System_Collections_Generic_List_BMSymbol___ctor___12dc560);
    native_sub_43273c(&System_Collections_Generic_List_BMSymbol__TypeInfo_12d29b8);
    bRam0000000001341953 = 1;
  }
  uStack_30 = 0;
  uStack_28 = 0;
  native_UnityEngine_Rect___ctor_7635c8(0,0,0x3f800000,0x3f800000,&uStack_30,0);
  *(undefined8 *)(param_1 + 0x28) = uStack_28;
  *(undefined8 *)(param_1 + 0x20) = uStack_30;
  uVar1 = native_sub_432808(_BMFont_TypeInfo_12d3aa0);
  native_BMFont___ctor_dd1dfc(uVar1,0);
  *(undefined8 *)(param_1 + 0x30) = uVar1;
  native_sub_4326e0(param_1 + 0x30,uVar1);
  uVar1 = native_sub_432808(_System_Collections_Generic_List_BMSymbol__TypeInfo_12d29b8);
  native_System_Collections_Generic_List_XmlEventCache_XmlEvent______ctor_d3ff44
            (uVar1,_Method_System_Collections_Generic_List_BMSymbol___ctor___12dc560);
  *(undefined8 *)(param_1 + 0x48) = uVar1;
  native_sub_4326e0(param_1 + 0x48,uVar1);
  *(undefined4 *)(param_1 + 0x58) = 0x10;
  *(undefined8 *)(param_1 + 0x68) = 0xffffffffffffffff;
  native_UnityEngine_MonoBehaviour___ctor_8e971c(param_1,0);
  return;
}


