/* ARM64 IL2CPP native pseudocode from Ghidra.
 * Recovered implementation, not original C# source.
 * Function boundaries follow the IL2CPP method address table. */


/* NGUIFont$$get_type @ 0x80001c
 * int32_t NGUIFont__get_type (NGUIFont_o* __this, const MethodInfo* method); */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* NGUIFont$$get_type
   int32_t NGUIFont__get_type (NGUIFont_o* __this, const MethodInfo* method); */

int native_NGUIFont__get_type_80001c(long param_1)

{
  ulong uVar1;
  int iVar2;
  undefined8 uVar3;
  
  if ((bRam000000000134042c & 1) == 0) {
    native_sub_43273c(&UnityEngine_Object_TypeInfo_12d54e0);
    bRam000000000134042c = 1;
  }
  iVar2 = *(int *)(param_1 + 0x18);
  if (iVar2 == 0) {
    uVar3 = *(undefined8 *)(param_1 + 0x48);
    if (((*(byte *)(_UnityEngine_Object_TypeInfo_12d54e0 + 0x133) >> 2 & 1) != 0) &&
       (*(int *)(_UnityEngine_Object_TypeInfo_12d54e0 + 0xe0) == 0)) {
      native_sub_4327ec();
    }
    uVar1 = native_UnityEngine_Object__op_Inequality_8d76fc(uVar3,0,0);
    if ((uVar1 & 1) == 0) {
      uVar3 = *(undefined8 *)(param_1 + 0x78);
      if (((*(byte *)(_UnityEngine_Object_TypeInfo_12d54e0 + 0x133) >> 2 & 1) != 0) &&
         (*(int *)(_UnityEngine_Object_TypeInfo_12d54e0 + 0xe0) == 0)) {
        native_sub_4327ec();
      }
      uVar1 = native_UnityEngine_Object__op_Inequality_8d76fc(uVar3,0,0);
      iVar2 = 3;
      if ((uVar1 & 1) == 0) {
        iVar2 = 1;
      }
    }
    else {
      iVar2 = 2;
    }
  }
  return iVar2;
}



/* NGUIFont$$set_type @ 0x8000e0
 * void NGUIFont__set_type (NGUIFont_o* __this, int32_t value, const MethodInfo* method); */

/* NGUIFont$$set_type
   void NGUIFont__set_type (NGUIFont_o* __this, int32_t value, const MethodInfo* method); */

void native_NGUIFont__set_type_8000e0(long param_1,int param_2)

{
  if (*(int *)(param_1 + 0x18) != param_2) {
    if (*(int *)(param_1 + 0x18) == 1) {
      *(undefined8 *)(param_1 + 0x20) = 0;
      native_sub_4326e0((undefined8 *)(param_1 + 0x20),0);
    }
    *(int *)(param_1 + 0x18) = param_2;
  }
  return;
}



/* NGUIFont$$get_bmFont @ 0x800128
 * BMFont_o* NGUIFont__get_bmFont (NGUIFont_o* __this, const MethodInfo* method); */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* NGUIFont$$get_bmFont
   BMFont_o* NGUIFont__get_bmFont (NGUIFont_o* __this, const MethodInfo* method); */

undefined8 native_NGUIFont__get_bmFont_800128(long param_1)

{
  long *plVar1;
  undefined8 *puVar2;
  undefined8 uVar3;
  long lVar4;
  ulong uVar5;
  int *piVar6;
  
  if ((bRam000000000134042d & 1) == 0) {
    native_sub_43273c(&INGUIFont_TypeInfo_12d4c70);
    bRam000000000134042d = 1;
  }
  plVar1 = (long *)native_NGUIFont__get_replacement_8001ec(param_1);
  if (plVar1 == (long *)0x0) {
    return *(undefined8 *)(param_1 + 0x38);
  }
  lVar4 = *plVar1;
  if ((ulong)*(ushort *)(lVar4 + 0x12a) != 0) {
    uVar5 = 0;
    piVar6 = (int *)(*(long *)(lVar4 + 0xb0) + 8);
    do {
      if (*(long *)(piVar6 + -2) == _INGUIFont_TypeInfo_12d4c70) {
        puVar2 = (undefined8 *)(lVar4 + (long)(*piVar6 + 2) * 0x10 + 0x138);
        goto LAB_008001d8;
      }
      uVar5 = uVar5 + 1;
      piVar6 = piVar6 + 4;
    } while (uVar5 < *(ushort *)(lVar4 + 0x12a));
  }
  puVar2 = (undefined8 *)native_sub_3c9b34(plVar1,_INGUIFont_TypeInfo_12d4c70,2);
LAB_008001d8:
                    /* WARNING: Could not recover jumptable at 0x008001e8. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  uVar3 = (*(code *)*puVar2)(plVar1,puVar2[1]);
  return uVar3;
}



/* NGUIFont$$set_bmFont @ 0x80028c
 * void NGUIFont__set_bmFont (NGUIFont_o* __this, BMFont_o* value, const MethodInfo* method); */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* NGUIFont$$set_bmFont
   void NGUIFont__set_bmFont (NGUIFont_o* __this, BMFont_o* value, const MethodInfo* method); */

void native_NGUIFont__set_bmFont_80028c(long param_1,undefined8 param_2)

{
  ulong *puVar1;
  char cVar2;
  bool bVar3;
  long *plVar4;
  undefined8 *puVar5;
  long lVar6;
  ulong uVar7;
  int *piVar8;
  
  if ((bRam000000000134042e & 1) == 0) {
    native_sub_43273c(&INGUIFont_TypeInfo_12d4c70);
    bRam000000000134042e = 1;
  }
  plVar4 = (long *)native_NGUIFont__get_replacement_8001ec(param_1);
  if (plVar4 == (long *)0x0) {
    puVar5 = (undefined8 *)(param_1 + 0x38);
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
        goto LAB_00800350;
      }
      uVar7 = uVar7 + 1;
      piVar8 = piVar8 + 4;
    } while (uVar7 < *(ushort *)(lVar6 + 0x12a));
  }
  puVar5 = (undefined8 *)native_sub_3c9b34(plVar4,_INGUIFont_TypeInfo_12d4c70,3);
LAB_00800350:
                    /* WARNING: Could not recover jumptable at 0x00800368. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)*puVar5)(plVar4,param_2,puVar5[1]);
  return;
}



/* NGUIFont$$get_texWidth @ 0x80036c
 * int32_t NGUIFont__get_texWidth (NGUIFont_o* __this, const MethodInfo* method); */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* NGUIFont$$get_texWidth
   int32_t NGUIFont__get_texWidth (NGUIFont_o* __this, const MethodInfo* method); */

ulong native_NGUIFont__get_texWidth_80036c(long param_1)

{
  long *plVar1;
  undefined8 *puVar2;
  long lVar3;
  ulong uVar4;
  int *piVar5;
  
  if ((bRam000000000134042f & 1) == 0) {
    native_sub_43273c(&INGUIFont_TypeInfo_12d4c70);
    bRam000000000134042f = 1;
  }
  plVar1 = (long *)native_NGUIFont__get_replacement_8001ec(param_1);
  if (plVar1 == (long *)0x0) {
    if (*(long *)(param_1 + 0x38) == 0) {
      uVar4 = 1;
    }
    else {
      uVar4 = (ulong)*(uint *)(*(long *)(param_1 + 0x38) + 0x18);
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
        goto LAB_0080041c;
      }
      uVar4 = uVar4 + 1;
      piVar5 = piVar5 + 4;
    } while (uVar4 < *(ushort *)(lVar3 + 0x12a));
  }
  puVar2 = (undefined8 *)native_sub_3c9b34(plVar1,_INGUIFont_TypeInfo_12d4c70,4);
LAB_0080041c:
                    /* WARNING: Could not recover jumptable at 0x0080042c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  uVar4 = (*(code *)*puVar2)(plVar1,puVar2[1]);
  return uVar4;
}



/* NGUIFont$$set_texWidth @ 0x800440
 * void NGUIFont__set_texWidth (NGUIFont_o* __this, int32_t value, const MethodInfo* method); */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* NGUIFont$$set_texWidth
   void NGUIFont__set_texWidth (NGUIFont_o* __this, int32_t value, const MethodInfo* method); */

void native_NGUIFont__set_texWidth_800440(long param_1,undefined4 param_2)

{
  long *plVar1;
  undefined8 *puVar2;
  long lVar3;
  ulong uVar4;
  int *piVar5;
  
  if ((bRam0000000001340430 & 1) == 0) {
    native_sub_43273c(&INGUIFont_TypeInfo_12d4c70);
    bRam0000000001340430 = 1;
  }
  plVar1 = (long *)native_NGUIFont__get_replacement_8001ec(param_1);
  if (plVar1 == (long *)0x0) {
    if (*(long *)(param_1 + 0x38) != 0) {
      *(undefined4 *)(*(long *)(param_1 + 0x38) + 0x18) = param_2;
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
        goto LAB_00800504;
      }
      uVar4 = uVar4 + 1;
      piVar5 = piVar5 + 4;
    } while (uVar4 < *(ushort *)(lVar3 + 0x12a));
  }
  puVar2 = (undefined8 *)native_sub_3c9b34(plVar1,_INGUIFont_TypeInfo_12d4c70,5);
LAB_00800504:
                    /* WARNING: Could not recover jumptable at 0x0080051c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)*puVar2)(plVar1,param_2,puVar2[1]);
  return;
}



/* NGUIFont$$get_texHeight @ 0x800520
 * int32_t NGUIFont__get_texHeight (NGUIFont_o* __this, const MethodInfo* method); */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* NGUIFont$$get_texHeight
   int32_t NGUIFont__get_texHeight (NGUIFont_o* __this, const MethodInfo* method); */

ulong native_NGUIFont__get_texHeight_800520(long param_1)

{
  long *plVar1;
  undefined8 *puVar2;
  long lVar3;
  ulong uVar4;
  int *piVar5;
  
  if ((bRam0000000001340431 & 1) == 0) {
    native_sub_43273c(&INGUIFont_TypeInfo_12d4c70);
    bRam0000000001340431 = 1;
  }
  plVar1 = (long *)native_NGUIFont__get_replacement_8001ec(param_1);
  if (plVar1 == (long *)0x0) {
    if (*(long *)(param_1 + 0x38) == 0) {
      uVar4 = 1;
    }
    else {
      uVar4 = (ulong)*(uint *)(*(long *)(param_1 + 0x38) + 0x1c);
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
        goto LAB_008005d0;
      }
      uVar4 = uVar4 + 1;
      piVar5 = piVar5 + 4;
    } while (uVar4 < *(ushort *)(lVar3 + 0x12a));
  }
  puVar2 = (undefined8 *)native_sub_3c9b34(plVar1,_INGUIFont_TypeInfo_12d4c70,6);
LAB_008005d0:
                    /* WARNING: Could not recover jumptable at 0x008005e0. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  uVar4 = (*(code *)*puVar2)(plVar1,puVar2[1]);
  return uVar4;
}



/* NGUIFont$$set_texHeight @ 0x8005f4
 * void NGUIFont__set_texHeight (NGUIFont_o* __this, int32_t value, const MethodInfo* method); */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* NGUIFont$$set_texHeight
   void NGUIFont__set_texHeight (NGUIFont_o* __this, int32_t value, const MethodInfo* method); */

void native_NGUIFont__set_texHeight_8005f4(long param_1,undefined4 param_2)

{
  long *plVar1;
  undefined8 *puVar2;
  long lVar3;
  ulong uVar4;
  int *piVar5;
  
  if ((bRam0000000001340432 & 1) == 0) {
    native_sub_43273c(&INGUIFont_TypeInfo_12d4c70);
    bRam0000000001340432 = 1;
  }
  plVar1 = (long *)native_NGUIFont__get_replacement_8001ec(param_1);
  if (plVar1 == (long *)0x0) {
    if (*(long *)(param_1 + 0x38) != 0) {
      *(undefined4 *)(*(long *)(param_1 + 0x38) + 0x1c) = param_2;
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
        goto LAB_008006b8;
      }
      uVar4 = uVar4 + 1;
      piVar5 = piVar5 + 4;
    } while (uVar4 < *(ushort *)(lVar3 + 0x12a));
  }
  puVar2 = (undefined8 *)native_sub_3c9b34(plVar1,_INGUIFont_TypeInfo_12d4c70,7);
LAB_008006b8:
                    /* WARNING: Could not recover jumptable at 0x008006d0. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)*puVar2)(plVar1,param_2,puVar2[1]);
  return;
}



/* NGUIFont$$get_hasSymbols @ 0x8006d4
 * bool NGUIFont__get_hasSymbols (NGUIFont_o* __this, const MethodInfo* method); */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* NGUIFont$$get_hasSymbols
   bool NGUIFont__get_hasSymbols (NGUIFont_o* __this, const MethodInfo* method); */

ulong native_NGUIFont__get_hasSymbols_8006d4(long param_1)

{
  long lVar1;
  ulong uVar2;
  long *plVar3;
  undefined8 *puVar4;
  int *piVar5;
  
  if ((bRam0000000001340433 & 1) == 0) {
    native_sub_43273c(&INGUIFont_TypeInfo_12d4c70);
    native_sub_43273c(&Method_System_Collections_Generic_List_BMSymbol__get_Count___12dc578);
    bRam0000000001340433 = 1;
  }
  lVar1 = native_NGUIFont__get_symbolAtlas_8007c8(param_1);
  if ((lVar1 != 0) ||
     (plVar3 = (long *)native_NGUIFont__get_replacement_8001ec(param_1), plVar3 == (long *)0x0)) {
    if (*(long *)(param_1 + 0x68) == 0) {
      uVar2 = 0;
    }
    else {
      uVar2 = (ulong)(*(int *)(*(long *)(param_1 + 0x68) + 0x18) != 0);
    }
    return uVar2;
  }
  lVar1 = *plVar3;
  if ((ulong)*(ushort *)(lVar1 + 0x12a) != 0) {
    uVar2 = 0;
    piVar5 = (int *)(*(long *)(lVar1 + 0xb0) + 8);
    do {
      if (*(long *)(piVar5 + -2) == _INGUIFont_TypeInfo_12d4c70) {
        puVar4 = (undefined8 *)(lVar1 + (long)(*piVar5 + 8) * 0x10 + 0x138);
        goto LAB_008007b4;
      }
      uVar2 = uVar2 + 1;
      piVar5 = piVar5 + 4;
    } while (uVar2 < *(ushort *)(lVar1 + 0x12a));
  }
  puVar4 = (undefined8 *)native_sub_3c9b34(plVar3,_INGUIFont_TypeInfo_12d4c70,8);
LAB_008007b4:
                    /* WARNING: Could not recover jumptable at 0x008007c4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  uVar2 = (*(code *)*puVar4)(plVar3,puVar4[1]);
  return uVar2;
}



/* NGUIFont$$get_symbols @ 0x800814
 * System_Collections_Generic_List_BMSymbol__o* NGUIFont__get_symbols (NGUIFont_o* __this, const MethodInfo* method); */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* NGUIFont$$get_symbols
   System_Collections_Generic_List_BMSymbol__o* NGUIFont__get_symbols (NGUIFont_o* __this, const
   MethodInfo* method); */

undefined8 native_NGUIFont__get_symbols_800814(long param_1)

{
  long lVar1;
  long *plVar2;
  undefined8 *puVar3;
  undefined8 uVar4;
  ulong uVar5;
  int *piVar6;
  
  if ((bRam0000000001340434 & 1) == 0) {
    native_sub_43273c(&INGUIFont_TypeInfo_12d4c70);
    bRam0000000001340434 = 1;
  }
  lVar1 = native_NGUIFont__get_symbolAtlas_8007c8(param_1);
  if ((lVar1 != 0) ||
     (plVar2 = (long *)native_NGUIFont__get_replacement_8001ec(param_1), plVar2 == (long *)0x0)) {
    return *(undefined8 *)(param_1 + 0x68);
  }
  lVar1 = *plVar2;
  if ((ulong)*(ushort *)(lVar1 + 0x12a) != 0) {
    uVar5 = 0;
    piVar6 = (int *)(*(long *)(lVar1 + 0xb0) + 8);
    do {
      if (*(long *)(piVar6 + -2) == _INGUIFont_TypeInfo_12d4c70) {
        puVar3 = (undefined8 *)(lVar1 + (long)(*piVar6 + 9) * 0x10 + 0x138);
        goto LAB_008008d0;
      }
      uVar5 = uVar5 + 1;
      piVar6 = piVar6 + 4;
    } while (uVar5 < *(ushort *)(lVar1 + 0x12a));
  }
  puVar3 = (undefined8 *)native_sub_3c9b34(plVar2,_INGUIFont_TypeInfo_12d4c70,9);
LAB_008008d0:
                    /* WARNING: Could not recover jumptable at 0x008008e0. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  uVar4 = (*(code *)*puVar3)(plVar2,puVar3[1]);
  return uVar4;
}



/* NGUIFont$$set_symbols @ 0x8008e4
 * void NGUIFont__set_symbols (NGUIFont_o* __this, System_Collections_Generic_List_BMSymbol__o* value, const MethodInfo* method); */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* NGUIFont$$set_symbols
   void NGUIFont__set_symbols (NGUIFont_o* __this, System_Collections_Generic_List_BMSymbol__o*
   value, const MethodInfo* method); */

void native_NGUIFont__set_symbols_8008e4(long param_1,undefined8 param_2)

{
  ulong *puVar1;
  char cVar2;
  bool bVar3;
  long lVar4;
  long *plVar5;
  ulong uVar6;
  int *piVar7;
  undefined8 *puVar8;
  
  if ((bRam0000000001340435 & 1) == 0) {
    native_sub_43273c(&INGUIFont_TypeInfo_12d4c70);
    bRam0000000001340435 = 1;
  }
  lVar4 = native_NGUIFont__get_symbolAtlas_8007c8(param_1);
  if ((lVar4 != 0) ||
     (plVar5 = (long *)native_NGUIFont__get_replacement_8001ec(param_1), plVar5 == (long *)0x0)) {
    puVar8 = (undefined8 *)(param_1 + 0x68);
    *puVar8 = param_2;
    if (iRam0000000001345318 != 0) {
      puVar1 = (ulong *)(((ulong)puVar8 >> 0x12 & 0x7fff) * 8 + 0x138ecd8);
      do {
        cVar2 = '\x01';
        bVar3 = (bool)ExclusiveMonitorPass(puVar1,0x10);
        if (bVar3) {
          *puVar1 = *puVar1 | 1L << ((ulong)puVar8 >> 0xc & 0x3f);
          cVar2 = ExclusiveMonitorsStatus();
        }
      } while (cVar2 != '\0');
    }
    return;
  }
  lVar4 = *plVar5;
  if ((ulong)*(ushort *)(lVar4 + 0x12a) != 0) {
    uVar6 = 0;
    piVar7 = (int *)(*(long *)(lVar4 + 0xb0) + 8);
    do {
      if (*(long *)(piVar7 + -2) == _INGUIFont_TypeInfo_12d4c70) {
        puVar8 = (undefined8 *)(lVar4 + (long)(*piVar7 + 10) * 0x10 + 0x138);
        goto LAB_008009b4;
      }
      uVar6 = uVar6 + 1;
      piVar7 = piVar7 + 4;
    } while (uVar6 < *(ushort *)(lVar4 + 0x12a));
  }
  puVar8 = (undefined8 *)native_sub_3c9b34(plVar5,_INGUIFont_TypeInfo_12d4c70,10);
LAB_008009b4:
                    /* WARNING: Could not recover jumptable at 0x008009cc. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)*puVar8)(plVar5,param_2,puVar8[1]);
  return;
}



/* NGUIFont$$get_atlas @ 0x7fe8f0
 * INGUIAtlas_o* NGUIFont__get_atlas (NGUIFont_o* __this, const MethodInfo* method); */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* NGUIFont$$get_atlas
   INGUIAtlas_o* NGUIFont__get_atlas (NGUIFont_o* __this, const MethodInfo* method); */

long * native_NGUIFont__get_atlas_7fe8f0(long param_1)

{
  int iVar1;
  long *plVar2;
  undefined8 *puVar3;
  long lVar4;
  ulong uVar5;
  int *piVar6;
  long lVar7;
  long *plStack_28;
  
  if ((bRam0000000001340436 & 1) == 0) {
    native_sub_43273c(&INGUIAtlas_TypeInfo_12d4c68);
    native_sub_43273c(&INGUIFont_TypeInfo_12d4c70);
    bRam0000000001340436 = 1;
  }
  iVar1 = native_NGUIFont__get_type_80001c(param_1);
  lVar4 = _INGUIAtlas_TypeInfo_12d4c68;
  if (iVar1 == 1) {
    plVar2 = *(long **)(param_1 + 0x40);
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
  if ((iVar1 != 2) ||
     (plVar2 = (long *)native_NGUIFont__get_replacement_8001ec(param_1), plVar2 == (long *)0x0)) {
    return (long *)0x0;
  }
  lVar4 = *plVar2;
  if ((ulong)*(ushort *)(lVar4 + 0x12a) != 0) {
    uVar5 = 0;
    piVar6 = (int *)(*(long *)(lVar4 + 0xb0) + 8);
    do {
      if (*(long *)(piVar6 + -2) == _INGUIFont_TypeInfo_12d4c70) {
        puVar3 = (undefined8 *)(lVar4 + (long)(*piVar6 + 0xb) * 0x10 + 0x138);
        goto LAB_007fe9e0;
      }
      uVar5 = uVar5 + 1;
      piVar6 = piVar6 + 4;
    } while (uVar5 < *(ushort *)(lVar4 + 0x12a));
  }
  puVar3 = (undefined8 *)native_sub_3c9b34(plVar2,_INGUIFont_TypeInfo_12d4c70,0xb);
LAB_007fe9e0:
                    /* WARNING: Could not recover jumptable at 0x007fe9f0. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  plVar2 = (long *)(*(code *)*puVar3)(plVar2,puVar3[1]);
  return plVar2;
}



/* NGUIFont$$set_atlas @ 0x7fe9f4
 * void NGUIFont__set_atlas (NGUIFont_o* __this, INGUIAtlas_o* value, const MethodInfo* method); */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* NGUIFont$$set_atlas
   void NGUIFont__set_atlas (NGUIFont_o* __this, INGUIAtlas_o* value, const MethodInfo* method); */

void native_NGUIFont__set_atlas_7fe9f4
               (undefined1 param_1 [16],undefined4 param_2,undefined4 param_3,undefined4 param_4,
               long param_5,long *param_6)

{
  ulong *puVar1;
  uint uVar2;
  char cVar3;
  bool bVar4;
  int iVar5;
  long *plVar6;
  undefined8 *puVar7;
  undefined8 uVar8;
  long lVar9;
  long lVar10;
  ulong uVar11;
  int *piVar12;
  long *plVar13;
  long lVar14;
  uint uVar15;
  undefined4 uVar16;
  
  if ((bRam0000000001340437 & 1) == 0) {
    native_sub_43273c(&INGUIAtlas_TypeInfo_12d4c68);
    native_sub_43273c(&INGUIFont_TypeInfo_12d4c70);
    native_sub_43273c(&UnityEngine_Object_TypeInfo_12d54e0);
    bRam0000000001340437 = 1;
  }
  iVar5 = native_NGUIFont__get_type_80001c(param_5);
  if (iVar5 == 2) {
    plVar6 = (long *)native_NGUIFont__get_replacement_8001ec(param_5);
    if (plVar6 != (long *)0x0) {
      lVar10 = *plVar6;
      if ((ulong)*(ushort *)(lVar10 + 0x12a) != 0) {
        uVar11 = 0;
        piVar12 = (int *)(*(long *)(lVar10 + 0xb0) + 8);
        do {
          if (*(long *)(piVar12 + -2) == _INGUIFont_TypeInfo_12d4c70) {
            puVar7 = (undefined8 *)(lVar10 + (long)(*piVar12 + 0xc) * 0x10 + 0x138);
            goto LAB_007feb5c;
          }
          uVar11 = uVar11 + 1;
          piVar12 = piVar12 + 4;
        } while (uVar11 < *(ushort *)(lVar10 + 0x12a));
      }
      puVar7 = (undefined8 *)native_sub_3c9b34(plVar6,_INGUIFont_TypeInfo_12d4c70,0xc);
LAB_007feb5c:
                    /* WARNING: Could not recover jumptable at 0x007feb74. Too many branches */
                    /* WARNING: Treating indirect jump as call */
      (*(code *)*puVar7)(plVar6,param_6,puVar7[1]);
      return;
    }
  }
  else {
    plVar13 = (long *)(param_5 + 0x40);
    plVar6 = (long *)native_sub_4327f8(*plVar13,_INGUIAtlas_TypeInfo_12d4c68);
    if (plVar6 != param_6) {
      *(undefined4 *)(param_5 + 0x98) = 0xffffffff;
      if (param_6 == (long *)0x0) {
        *(undefined8 *)(param_5 + 0x40) = 0;
        native_sub_4326e0(plVar13,0);
        *(undefined8 *)(param_5 + 0x40) = 0;
        native_sub_4326e0(plVar13,0);
        *(undefined8 *)(param_5 + 0x20) = 0;
        native_sub_4326e0((undefined8 *)(param_5 + 0x20),0);
      }
      else {
        if (*(byte *)(*param_6 + 300) < *(byte *)(_UnityEngine_Object_TypeInfo_12d54e0 + 300)) {
          plVar6 = (long *)0x0;
        }
        else {
          plVar6 = param_6;
          if (*(long *)(*(long *)(*param_6 + 200) +
                        (ulong)*(byte *)(_UnityEngine_Object_TypeInfo_12d54e0 + 300) * 8 + -8) !=
              _UnityEngine_Object_TypeInfo_12d54e0) {
            plVar6 = (long *)0x0;
          }
        }
        *plVar13 = (long)plVar6;
        native_sub_4326e0(plVar13);
        lVar10 = *param_6;
        if ((ulong)*(ushort *)(lVar10 + 0x12a) != 0) {
          uVar11 = 0;
          piVar12 = (int *)(*(long *)(lVar10 + 0xb0) + 8);
          do {
            if (*(long *)(piVar12 + -2) == _INGUIAtlas_TypeInfo_12d4c68) {
              puVar7 = (undefined8 *)(lVar10 + (long)*piVar12 * 0x10 + 0x138);
              goto LAB_007febec;
            }
            uVar11 = uVar11 + 1;
            piVar12 = piVar12 + 4;
          } while (uVar11 < *(ushort *)(lVar10 + 0x12a));
        }
        puVar7 = (undefined8 *)native_sub_3c9b34(param_6,_INGUIAtlas_TypeInfo_12d4c68,0);
LAB_007febec:
        uVar8 = (*(code *)*puVar7)(param_6,puVar7[1]);
        *(undefined8 *)(param_5 + 0x20) = uVar8;
        native_sub_4326e0();
        lVar10 = native_NGUIFont__get_sprite_8009d0(param_5);
        if (lVar10 != 0) {
          uVar16 = native_NGUIFont__get_uvRect_800cc4(param_5);
          *(undefined4 *)(param_5 + 0x28) = uVar16;
          *(undefined4 *)(param_5 + 0x2c) = param_2;
          *(undefined4 *)(param_5 + 0x30) = param_3;
          *(undefined4 *)(param_5 + 0x34) = param_4;
        }
      }
      if ((bRam0000000001340456 & 1) == 0) {
        native_sub_43273c(&INGUIFont_TypeInfo_12d4c70);
        native_sub_43273c(&Method_System_Collections_Generic_List_BMSymbol__get_Count___12dc578);
        native_sub_43273c(&Method_System_Collections_Generic_List_BMSymbol__get_Item___12dc580);
        native_sub_43273c(&Method_NGUITools_FindActive_UILabel____12e5710);
        native_sub_43273c(&NGUITools_TypeInfo_12d53c8);
        bRam0000000001340456 = 1;
      }
      plVar6 = (long *)native_NGUIFont__get_replacement_8001ec(param_5);
      if (plVar6 != (long *)0x0) {
        lVar10 = *plVar6;
        if ((ulong)*(ushort *)(lVar10 + 0x12a) != 0) {
          uVar11 = 0;
          piVar12 = (int *)(*(long *)(lVar10 + 0xb0) + 8);
          do {
            if (*(long *)(piVar12 + -2) == _INGUIFont_TypeInfo_12d4c70) {
              puVar7 = (undefined8 *)(lVar10 + (long)(*piVar12 + 0x27) * 0x10 + 0x138);
              goto LAB_00800f18;
            }
            uVar11 = uVar11 + 1;
            piVar12 = piVar12 + 4;
          } while (uVar11 < *(ushort *)(lVar10 + 0x12a));
        }
        puVar7 = (undefined8 *)native_sub_3c9b34(plVar6,_INGUIFont_TypeInfo_12d4c70,0x27);
LAB_00800f18:
        (*(code *)*puVar7)(plVar6,puVar7[1]);
      }
      *(undefined8 *)(param_5 + 0x90) = 0;
      native_sub_4326e0((undefined8 *)(param_5 + 0x90),0);
      if (((*(byte *)(_NGUITools_TypeInfo_12d53c8 + 0x133) >> 2 & 1) != 0) &&
         (*(int *)(_NGUITools_TypeInfo_12d53c8 + 0xe0) == 0)) {
        native_sub_4327ec();
      }
      lVar10 = native_NGUITools__FindActive_AudioListener__4a5b30
                         (_Method_NGUITools_FindActive_UILabel____12e5710);
      if (lVar10 != 0) {
        iVar5 = (int)*(undefined8 *)(lVar10 + 0x18);
        if (0 < iVar5) {
          if (iVar5 != 0) {
            uVar15 = 0;
            do {
              lVar14 = *(long *)(lVar10 + (long)(int)uVar15 * 8 + 0x20);
              if (lVar14 == 0) goto LAB_008010f4;
              uVar11 = native_UnityEngine_Behaviour__get_enabled_8d7acc(lVar14,0);
              if ((uVar11 & 1) != 0) {
                uVar8 = native_UnityEngine_Component__get_gameObject_8da66c(lVar14,0);
                if (((*(byte *)(_NGUITools_TypeInfo_12d53c8 + 0x133) >> 2 & 1) != 0) &&
                   (*(int *)(_NGUITools_TypeInfo_12d53c8 + 0xe0) == 0)) {
                  native_sub_4327ec(_NGUITools_TypeInfo_12d53c8);
                }
                uVar11 = native_NGUITools__GetActive_72d0d4(uVar8,0);
                if ((uVar11 & 1) != 0) {
                  uVar8 = native_UILabel__get_font_ae77e8(lVar14,0);
                  if (((*(byte *)(_NGUITools_TypeInfo_12d53c8 + 0x133) >> 2 & 1) != 0) &&
                     (*(int *)(_NGUITools_TypeInfo_12d53c8 + 0xe0) == 0)) {
                    native_sub_4327ec(_NGUITools_TypeInfo_12d53c8);
                  }
                  uVar11 = native_NGUITools__CheckIfRelated_7372e0(param_5,uVar8,0);
                  if ((uVar11 & 1) != 0) {
                    uVar8 = native_UILabel__get_font_ae77e8(lVar14,0);
                    native_UILabel__set_font_ae79c4(lVar14,0,0);
                    native_UILabel__set_font_ae79c4(lVar14,uVar8,0);
                  }
                }
              }
              uVar15 = uVar15 + 1;
              if (iVar5 <= (int)uVar15) goto LAB_0080106c;
            } while (uVar15 < *(uint *)(lVar10 + 0x18));
          }
          uVar8 = native_sub_43283c();
                    /* WARNING: Subroutine does not return */
          native_sub_4327dc(uVar8,0);
        }
LAB_0080106c:
        lVar10 = native_NGUIFont__get_symbols_800814(param_5);
        if (lVar10 != 0) {
          uVar15 = *(uint *)(lVar10 + 0x18);
          if (0 < (int)uVar15) {
            lVar14 = 0;
            uVar2 = uVar15;
            while( true ) {
              if (uVar2 <= (uint)lVar14) {
                native_System_ThrowHelper__ThrowArgumentOutOfRangeException_9fe0f4(0);
              }
              lVar9 = *(long *)(*(long *)(lVar10 + 0x10) + lVar14 * 8 + 0x20);
              if (lVar9 == 0) goto LAB_008010f4;
              native_BMSymbol__MarkAsChanged_dd21c4(lVar9,0);
              if ((int)uVar15 <= (int)((uint)lVar14 + 1)) break;
              uVar2 = *(uint *)(lVar10 + 0x18);
              lVar14 = lVar14 + 1;
            }
          }
          puVar7 = (undefined8 *)(param_5 + 0x70);
          *puVar7 = 0;
          if (iRam0000000001345318 != 0) {
            puVar1 = (ulong *)(((ulong)puVar7 >> 0x12 & 0x7fff) * 8 + 0x138ecd8);
            do {
              cVar3 = '\x01';
              bVar4 = (bool)ExclusiveMonitorPass(puVar1,0x10);
              if (bVar4) {
                *puVar1 = *puVar1 | 1L << ((ulong)puVar7 >> 0xc & 0x3f);
                cVar3 = ExclusiveMonitorsStatus();
              }
            } while (cVar3 != '\0');
          }
          return;
        }
      }
LAB_008010f4:
                    /* WARNING: Subroutine does not return */
      native_sub_432810();
    }
  }
  return;
}



/* NGUIFont$$get_symbolAtlas @ 0x8007c8
 * INGUIAtlas_o* NGUIFont__get_symbolAtlas (NGUIFont_o* __this, const MethodInfo* method); */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* NGUIFont$$get_symbolAtlas
   INGUIAtlas_o* NGUIFont__get_symbolAtlas (NGUIFont_o* __this, const MethodInfo* method); */

long * native_NGUIFont__get_symbolAtlas_8007c8(long param_1)

{
  long lVar1;
  int iVar2;
  ulong uVar3;
  long *plVar4;
  long lVar5;
  long *plStack_28;
  
  if ((bRam0000000001340438 & 1) == 0) {
    native_sub_43273c(&INGUIAtlas_TypeInfo_12d4c68);
    bRam0000000001340438 = 1;
  }
  lVar1 = _INGUIAtlas_TypeInfo_12d4c68;
  plVar4 = *(long **)(param_1 + 0x50);
  if (plVar4 != (long *)0x0) {
    lVar5 = *plVar4;
    uVar3 = native_sub_3c5e78(_INGUIAtlas_TypeInfo_12d4c68,lVar5);
    if ((uVar3 & 1) == 0) {
      if ((*(byte *)(lVar5 + 0x133) >> 4 & 1) == 0) {
        plVar4 = (long *)0x0;
      }
      else {
        if (((((*(byte *)(lVar1 + 0x114) >> 5 & 1) != 0) || (*(char *)(lVar1 + 0x2a) == '\x1e')) ||
            (*(char *)(lVar1 + 0x2a) == '\x13')) &&
           ((*(long *)(lVar1 + 0x70) != 0 &&
            (lVar5 = *(long *)(*(long *)(lVar1 + 0x70) + 0x28), lVar5 != 0)))) {
          plStack_28 = (long *)native_sub_3d76d0(plVar4,lVar5);
          if (plStack_28 != (long *)0x0) {
            return plVar4;
          }
          iVar2 = (*(code *)**(undefined8 **)plVar4[2])((undefined8 *)plVar4[2],lVar5,&plStack_28);
          if (-1 < iVar2) {
            uVar3 = native_sub_3d7780(plVar4,lVar5,plStack_28);
            if ((uVar3 & 1) == 0) {
              (**(code **)(*plStack_28 + 0x10))(plStack_28);
              plStack_28 = (long *)native_sub_3d76d0(plVar4,lVar5);
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



/* NGUIFont$$set_symbolAtlas @ 0x8010f8
 * void NGUIFont__set_symbolAtlas (NGUIFont_o* __this, INGUIAtlas_o* value, const MethodInfo* method); */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* NGUIFont$$set_symbolAtlas
   void NGUIFont__set_symbolAtlas (NGUIFont_o* __this, INGUIAtlas_o* value, const MethodInfo*
   method); */

void native_NGUIFont__set_symbolAtlas_8010f8(long param_1,long *param_2)

{
  ulong *puVar1;
  uint uVar2;
  char cVar3;
  bool bVar4;
  undefined8 *puVar5;
  undefined8 uVar6;
  long lVar7;
  long *plVar8;
  long lVar9;
  ulong uVar10;
  int *piVar11;
  long lVar12;
  int iVar13;
  uint uVar14;
  
  if ((bRam0000000001340439 & 1) == 0) {
    native_sub_43273c(&INGUIAtlas_TypeInfo_12d4c68);
    native_sub_43273c(&UnityEngine_Object_TypeInfo_12d54e0);
    bRam0000000001340439 = 1;
  }
  plVar8 = (long *)native_sub_4327f8(*(undefined8 *)(param_1 + 0x50),_INGUIAtlas_TypeInfo_12d4c68);
  if (plVar8 == param_2) {
    return;
  }
  if (param_2 != (long *)0x0) {
    if (*(byte *)(_UnityEngine_Object_TypeInfo_12d54e0 + 300) <= *(byte *)(*param_2 + 300)) {
      if (*(long *)(*(long *)(*param_2 + 200) +
                    (ulong)*(byte *)(_UnityEngine_Object_TypeInfo_12d54e0 + 300) * 8 + -8) !=
          _UnityEngine_Object_TypeInfo_12d54e0) {
        param_2 = (long *)0x0;
      }
      goto LAB_008011ac;
    }
  }
  param_2 = (long *)0x0;
LAB_008011ac:
  *(long **)(param_1 + 0x50) = param_2;
  native_sub_4326e0((undefined8 *)(param_1 + 0x50));
  if ((bRam0000000001340456 & 1) == 0) {
    native_sub_43273c(&INGUIFont_TypeInfo_12d4c70);
    native_sub_43273c(&Method_System_Collections_Generic_List_BMSymbol__get_Count___12dc578);
    native_sub_43273c(&Method_System_Collections_Generic_List_BMSymbol__get_Item___12dc580);
    native_sub_43273c(&Method_NGUITools_FindActive_UILabel____12e5710);
    native_sub_43273c(&NGUITools_TypeInfo_12d53c8);
    bRam0000000001340456 = 1;
  }
  plVar8 = (long *)native_NGUIFont__get_replacement_8001ec(param_1);
  if (plVar8 != (long *)0x0) {
    lVar9 = *plVar8;
    if ((ulong)*(ushort *)(lVar9 + 0x12a) != 0) {
      uVar10 = 0;
      piVar11 = (int *)(*(long *)(lVar9 + 0xb0) + 8);
      do {
        if (*(long *)(piVar11 + -2) == _INGUIFont_TypeInfo_12d4c70) {
          puVar5 = (undefined8 *)(lVar9 + (long)(*piVar11 + 0x27) * 0x10 + 0x138);
          goto LAB_00800f18;
        }
        uVar10 = uVar10 + 1;
        piVar11 = piVar11 + 4;
      } while (uVar10 < *(ushort *)(lVar9 + 0x12a));
    }
    puVar5 = (undefined8 *)native_sub_3c9b34(plVar8,_INGUIFont_TypeInfo_12d4c70,0x27);
LAB_00800f18:
    (*(code *)*puVar5)(plVar8,puVar5[1]);
  }
  *(undefined8 *)(param_1 + 0x90) = 0;
  native_sub_4326e0((undefined8 *)(param_1 + 0x90),0);
  if (((*(byte *)(_NGUITools_TypeInfo_12d53c8 + 0x133) >> 2 & 1) != 0) &&
     (*(int *)(_NGUITools_TypeInfo_12d53c8 + 0xe0) == 0)) {
    native_sub_4327ec();
  }
  lVar9 = native_NGUITools__FindActive_AudioListener__4a5b30
                    (_Method_NGUITools_FindActive_UILabel____12e5710);
  if (lVar9 != 0) {
    iVar13 = (int)*(undefined8 *)(lVar9 + 0x18);
    if (0 < iVar13) {
      if (iVar13 != 0) {
        uVar14 = 0;
        do {
          lVar12 = *(long *)(lVar9 + (long)(int)uVar14 * 8 + 0x20);
          if (lVar12 == 0) goto LAB_008010f4;
          uVar10 = native_UnityEngine_Behaviour__get_enabled_8d7acc(lVar12,0);
          if ((uVar10 & 1) != 0) {
            uVar6 = native_UnityEngine_Component__get_gameObject_8da66c(lVar12,0);
            if (((*(byte *)(_NGUITools_TypeInfo_12d53c8 + 0x133) >> 2 & 1) != 0) &&
               (*(int *)(_NGUITools_TypeInfo_12d53c8 + 0xe0) == 0)) {
              native_sub_4327ec(_NGUITools_TypeInfo_12d53c8);
            }
            uVar10 = native_NGUITools__GetActive_72d0d4(uVar6,0);
            if ((uVar10 & 1) != 0) {
              uVar6 = native_UILabel__get_font_ae77e8(lVar12,0);
              if (((*(byte *)(_NGUITools_TypeInfo_12d53c8 + 0x133) >> 2 & 1) != 0) &&
                 (*(int *)(_NGUITools_TypeInfo_12d53c8 + 0xe0) == 0)) {
                native_sub_4327ec(_NGUITools_TypeInfo_12d53c8);
              }
              uVar10 = native_NGUITools__CheckIfRelated_7372e0(param_1,uVar6,0);
              if ((uVar10 & 1) != 0) {
                uVar6 = native_UILabel__get_font_ae77e8(lVar12,0);
                native_UILabel__set_font_ae79c4(lVar12,0,0);
                native_UILabel__set_font_ae79c4(lVar12,uVar6,0);
              }
            }
          }
          uVar14 = uVar14 + 1;
          if (iVar13 <= (int)uVar14) goto LAB_0080106c;
        } while (uVar14 < *(uint *)(lVar9 + 0x18));
      }
      uVar6 = native_sub_43283c();
                    /* WARNING: Subroutine does not return */
      native_sub_4327dc(uVar6,0);
    }
LAB_0080106c:
    lVar9 = native_NGUIFont__get_symbols_800814(param_1);
    if (lVar9 != 0) {
      uVar14 = *(uint *)(lVar9 + 0x18);
      if (0 < (int)uVar14) {
        lVar12 = 0;
        uVar2 = uVar14;
        while( true ) {
          if (uVar2 <= (uint)lVar12) {
            native_System_ThrowHelper__ThrowArgumentOutOfRangeException_9fe0f4(0);
          }
          lVar7 = *(long *)(*(long *)(lVar9 + 0x10) + lVar12 * 8 + 0x20);
          if (lVar7 == 0) goto LAB_008010f4;
          native_BMSymbol__MarkAsChanged_dd21c4(lVar7,0);
          if ((int)uVar14 <= (int)((uint)lVar12 + 1)) break;
          uVar2 = *(uint *)(lVar9 + 0x18);
          lVar12 = lVar12 + 1;
        }
      }
      puVar5 = (undefined8 *)(param_1 + 0x70);
      *puVar5 = 0;
      if (iRam0000000001345318 != 0) {
        puVar1 = (ulong *)(((ulong)puVar5 >> 0x12 & 0x7fff) * 8 + 0x138ecd8);
        do {
          cVar3 = '\x01';
          bVar4 = (bool)ExclusiveMonitorPass(puVar1,0x10);
          if (bVar4) {
            *puVar1 = *puVar1 | 1L << ((ulong)puVar5 >> 0xc & 0x3f);
            cVar3 = ExclusiveMonitorsStatus();
          }
        } while (cVar3 != '\0');
      }
      return;
    }
  }
LAB_008010f4:
                    /* WARNING: Subroutine does not return */
  native_sub_432810();
}



/* NGUIFont$$GetSprite @ 0x8011cc
 * UISpriteData_o* NGUIFont__GetSprite (NGUIFont_o* __this, System_String_o* spriteName, const MethodInfo* method); */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* NGUIFont$$GetSprite
   UISpriteData_o* NGUIFont__GetSprite (NGUIFont_o* __this, System_String_o* spriteName, const
   MethodInfo* method); */

void native_NGUIFont__GetSprite_8011cc(undefined8 param_1,undefined8 param_2)

{
  long *plVar1;
  undefined8 *puVar2;
  long lVar3;
  ulong uVar4;
  int *piVar5;
  
  if ((bRam000000000134043a & 1) == 0) {
    native_sub_43273c(&INGUIAtlas_TypeInfo_12d4c68);
    bRam000000000134043a = 1;
  }
  plVar1 = (long *)native_NGUIFont__get_symbolAtlas_8007c8(param_1);
  if ((plVar1 == (long *)0x0) &&
     (plVar1 = (long *)native_NGUIFont__get_atlas_7fe8f0(param_1), plVar1 == (long *)0x0)) {
    return;
  }
  lVar3 = *plVar1;
  if ((ulong)*(ushort *)(lVar3 + 0x12a) != 0) {
    uVar4 = 0;
    piVar5 = (int *)(*(long *)(lVar3 + 0xb0) + 8);
    do {
      if (*(long *)(piVar5 + -2) == _INGUIAtlas_TypeInfo_12d4c68) {
        puVar2 = (undefined8 *)(lVar3 + (long)(*piVar5 + 10) * 0x10 + 0x138);
        goto LAB_00801284;
      }
      uVar4 = uVar4 + 1;
      piVar5 = piVar5 + 4;
    } while (uVar4 < *(ushort *)(lVar3 + 0x12a));
  }
  puVar2 = (undefined8 *)native_sub_3c9b34(plVar1,_INGUIAtlas_TypeInfo_12d4c68,10);
LAB_00801284:
                    /* WARNING: Could not recover jumptable at 0x0080129c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)*puVar2)(plVar1,param_2,puVar2[1]);
  return;
}



/* NGUIFont$$get_material @ 0x8012b0
 * UnityEngine_Material_o* NGUIFont__get_material (NGUIFont_o* __this, const MethodInfo* method); */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* NGUIFont$$get_material
   UnityEngine_Material_o* NGUIFont__get_material (NGUIFont_o* __this, const MethodInfo* method); */

undefined8 native_NGUIFont__get_material_8012b0(long param_1)

{
  int iVar1;
  long *plVar2;
  undefined8 *puVar3;
  undefined8 uVar4;
  long lVar5;
  ulong uVar6;
  int *piVar7;
  undefined8 uVar8;
  long lVar9;
  
  if ((bRam000000000134043b & 1) == 0) {
    native_sub_43273c(&INGUIAtlas_TypeInfo_12d4c68);
    native_sub_43273c(&INGUIFont_TypeInfo_12d4c70);
    native_sub_43273c(&UnityEngine_Object_TypeInfo_12d54e0);
    bRam000000000134043b = 1;
  }
  iVar1 = native_NGUIFont__get_type_80001c(param_1);
  if (iVar1 == 1) {
    plVar2 = (long *)native_sub_4327f8(*(undefined8 *)(param_1 + 0x40),_INGUIAtlas_TypeInfo_12d4c68)
    ;
    if (plVar2 != (long *)0x0) {
      lVar5 = *plVar2;
      if ((ulong)*(ushort *)(lVar5 + 0x12a) != 0) {
        uVar6 = 0;
        piVar7 = (int *)(*(long *)(lVar5 + 0xb0) + 8);
        do {
          if (*(long *)(piVar7 + -2) == _INGUIAtlas_TypeInfo_12d4c68) {
            lVar5 = lVar5 + (long)*piVar7 * 0x10;
            goto LAB_0080150c;
          }
          uVar6 = uVar6 + 1;
          piVar7 = piVar7 + 4;
        } while (uVar6 < *(ushort *)(lVar5 + 0x12a));
      }
      uVar4 = 0;
      lVar5 = _INGUIAtlas_TypeInfo_12d4c68;
LAB_008014bc:
      puVar3 = (undefined8 *)native_sub_3c9b34(plVar2,lVar5,uVar4);
LAB_00801510:
                    /* WARNING: Could not recover jumptable at 0x00801524. Too many branches */
                    /* WARNING: Treating indirect jump as call */
      uVar4 = (*(code *)*puVar3)(plVar2,puVar3[1]);
      return uVar4;
    }
  }
  else if (iVar1 == 3) {
    uVar4 = *(undefined8 *)(param_1 + 0x78);
    if (((*(byte *)(_UnityEngine_Object_TypeInfo_12d54e0 + 0x133) >> 2 & 1) != 0) &&
       (*(int *)(_UnityEngine_Object_TypeInfo_12d54e0 + 0xe0) == 0)) {
      native_sub_4327ec();
    }
    uVar6 = native_UnityEngine_Object__op_Inequality_8d76fc(uVar4,0,0);
    if ((uVar6 & 1) != 0) {
      uVar4 = *(undefined8 *)(param_1 + 0x20);
      if (((*(byte *)(_UnityEngine_Object_TypeInfo_12d54e0 + 0x133) >> 2 & 1) != 0) &&
         (*(int *)(_UnityEngine_Object_TypeInfo_12d54e0 + 0xe0) == 0)) {
        native_sub_4327ec();
      }
      uVar6 = native_UnityEngine_Object__op_Inequality_8d76fc(uVar4,0,0);
      if ((uVar6 & 1) == 0) {
        lVar5 = *(long *)(param_1 + 0x78);
        if (lVar5 != 0) {
          if (pcRam0000000001343698 == (code *)0x0) {
            pcRam0000000001343698 = (code *)native_sub_4326f0(&UNK_00ec7d87);
          }
                    /* WARNING: Could not recover jumptable at 0x00db3b6c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
          uVar4 = (*pcRam0000000001343698)(lVar5);
          return uVar4;
        }
      }
      else if (*(long *)(param_1 + 0x78) != 0) {
        uVar8 = *(undefined8 *)(param_1 + 0x20);
        uVar4 = native_UnityEngine_Font__get_material_db3b30(*(long *)(param_1 + 0x78),0);
        if (((*(byte *)(_UnityEngine_Object_TypeInfo_12d54e0 + 0x133) >> 2 & 1) != 0) &&
           (*(int *)(_UnityEngine_Object_TypeInfo_12d54e0 + 0xe0) == 0)) {
          native_sub_4327ec(_UnityEngine_Object_TypeInfo_12d54e0);
        }
        uVar6 = native_UnityEngine_Object__op_Inequality_8d76fc(uVar8,uVar4,0);
        if ((uVar6 & 1) == 0) goto LAB_008014c4;
        if (*(long *)(param_1 + 0x78) != 0) {
          lVar9 = *(long *)(param_1 + 0x20);
          lVar5 = native_UnityEngine_Font__get_material_db3b30(*(long *)(param_1 + 0x78),0);
          if ((lVar5 != 0) &&
             (uVar4 = native_UnityEngine_Material__get_mainTexture_8e3334(lVar5,0), lVar9 != 0)) {
            native_UnityEngine_Material__set_mainTexture_8e34a0(lVar9,uVar4,0);
            goto LAB_008014c4;
          }
        }
      }
                    /* WARNING: Subroutine does not return */
      native_sub_432810();
    }
  }
  else if ((iVar1 == 2) &&
          (plVar2 = (long *)native_NGUIFont__get_replacement_8001ec(param_1), plVar2 != (long *)0x0)
          ) {
    lVar5 = *plVar2;
    if ((ulong)*(ushort *)(lVar5 + 0x12a) != 0) {
      uVar6 = 0;
      piVar7 = (int *)(*(long *)(lVar5 + 0xb0) + 8);
      do {
        if (*(long *)(piVar7 + -2) == _INGUIFont_TypeInfo_12d4c70) {
          lVar5 = lVar5 + (long)(*piVar7 + 0xf) * 0x10;
LAB_0080150c:
          puVar3 = (undefined8 *)(lVar5 + 0x138);
          goto LAB_00801510;
        }
        uVar6 = uVar6 + 1;
        piVar7 = piVar7 + 4;
      } while (uVar6 < *(ushort *)(lVar5 + 0x12a));
    }
    uVar4 = 0xf;
    lVar5 = _INGUIFont_TypeInfo_12d4c70;
    goto LAB_008014bc;
  }
LAB_008014c4:
  return *(undefined8 *)(param_1 + 0x20);
}



/* NGUIFont$$set_material @ 0x80152c
 * void NGUIFont__set_material (NGUIFont_o* __this, UnityEngine_Material_o* value, const MethodInfo* method); */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* NGUIFont$$set_material
   void NGUIFont__set_material (NGUIFont_o* __this, UnityEngine_Material_o* value, const MethodInfo*
   method); */

void native_NGUIFont__set_material_80152c(long param_1,undefined8 param_2)

{
  ulong *puVar1;
  uint uVar2;
  char cVar3;
  bool bVar4;
  int iVar5;
  long lVar6;
  long *plVar7;
  undefined8 *puVar8;
  long lVar9;
  ulong uVar10;
  int *piVar11;
  long lVar12;
  undefined8 uVar13;
  uint uVar14;
  
  if ((bRam000000000134043c & 1) == 0) {
    native_sub_43273c(&INGUIFont_TypeInfo_12d4c70);
    native_sub_43273c(&UnityEngine_Object_TypeInfo_12d54e0);
    bRam000000000134043c = 1;
  }
  iVar5 = native_NGUIFont__get_type_80001c(param_1);
  if (iVar5 == 2) {
    plVar7 = (long *)native_NGUIFont__get_replacement_8001ec(param_1);
    if (plVar7 != (long *)0x0) {
      lVar9 = *plVar7;
      if ((ulong)*(ushort *)(lVar9 + 0x12a) != 0) {
        uVar10 = 0;
        piVar11 = (int *)(*(long *)(lVar9 + 0xb0) + 8);
        do {
          if (*(long *)(piVar11 + -2) == _INGUIFont_TypeInfo_12d4c70) {
            puVar8 = (undefined8 *)(lVar9 + (long)(*piVar11 + 0x10) * 0x10 + 0x138);
            goto LAB_00801668;
          }
          uVar10 = uVar10 + 1;
          piVar11 = piVar11 + 4;
        } while (uVar10 < *(ushort *)(lVar9 + 0x12a));
      }
      puVar8 = (undefined8 *)native_sub_3c9b34(plVar7,_INGUIFont_TypeInfo_12d4c70,0x10);
LAB_00801668:
                    /* WARNING: Could not recover jumptable at 0x00801680. Too many branches */
                    /* WARNING: Treating indirect jump as call */
      (*(code *)*puVar8)(plVar7,param_2,puVar8[1]);
      return;
    }
  }
  else {
    uVar13 = *(undefined8 *)(param_1 + 0x20);
    if (((*(byte *)(_UnityEngine_Object_TypeInfo_12d54e0 + 0x133) >> 2 & 1) != 0) &&
       (*(int *)(_UnityEngine_Object_TypeInfo_12d54e0 + 0xe0) == 0)) {
      native_sub_4327ec();
    }
    uVar10 = native_UnityEngine_Object__op_Inequality_8d76fc(uVar13,param_2,0);
    if ((uVar10 & 1) != 0) {
      *(undefined4 *)(param_1 + 0x98) = 0xffffffff;
      *(undefined8 *)(param_1 + 0x20) = param_2;
      native_sub_4326e0((undefined8 *)(param_1 + 0x20),param_2);
      if ((bRam0000000001340456 & 1) == 0) {
        native_sub_43273c(&INGUIFont_TypeInfo_12d4c70);
        native_sub_43273c(&Method_System_Collections_Generic_List_BMSymbol__get_Count___12dc578);
        native_sub_43273c(&Method_System_Collections_Generic_List_BMSymbol__get_Item___12dc580);
        native_sub_43273c(&Method_NGUITools_FindActive_UILabel____12e5710);
        native_sub_43273c(&NGUITools_TypeInfo_12d53c8);
        bRam0000000001340456 = 1;
      }
      plVar7 = (long *)native_NGUIFont__get_replacement_8001ec(param_1);
      if (plVar7 != (long *)0x0) {
        lVar9 = *plVar7;
        if ((ulong)*(ushort *)(lVar9 + 0x12a) != 0) {
          uVar10 = 0;
          piVar11 = (int *)(*(long *)(lVar9 + 0xb0) + 8);
          do {
            if (*(long *)(piVar11 + -2) == _INGUIFont_TypeInfo_12d4c70) {
              puVar8 = (undefined8 *)(lVar9 + (long)(*piVar11 + 0x27) * 0x10 + 0x138);
              goto LAB_00800f18;
            }
            uVar10 = uVar10 + 1;
            piVar11 = piVar11 + 4;
          } while (uVar10 < *(ushort *)(lVar9 + 0x12a));
        }
        puVar8 = (undefined8 *)native_sub_3c9b34(plVar7,_INGUIFont_TypeInfo_12d4c70,0x27);
LAB_00800f18:
        (*(code *)*puVar8)(plVar7,puVar8[1]);
      }
      *(undefined8 *)(param_1 + 0x90) = 0;
      native_sub_4326e0((undefined8 *)(param_1 + 0x90),0);
      if (((*(byte *)(_NGUITools_TypeInfo_12d53c8 + 0x133) >> 2 & 1) != 0) &&
         (*(int *)(_NGUITools_TypeInfo_12d53c8 + 0xe0) == 0)) {
        native_sub_4327ec();
      }
      lVar9 = native_NGUITools__FindActive_AudioListener__4a5b30
                        (_Method_NGUITools_FindActive_UILabel____12e5710);
      if (lVar9 != 0) {
        iVar5 = (int)*(undefined8 *)(lVar9 + 0x18);
        if (0 < iVar5) {
          if (iVar5 != 0) {
            uVar14 = 0;
            do {
              lVar12 = *(long *)(lVar9 + (long)(int)uVar14 * 8 + 0x20);
              if (lVar12 == 0) goto LAB_008010f4;
              uVar10 = native_UnityEngine_Behaviour__get_enabled_8d7acc(lVar12,0);
              if ((uVar10 & 1) != 0) {
                uVar13 = native_UnityEngine_Component__get_gameObject_8da66c(lVar12,0);
                if (((*(byte *)(_NGUITools_TypeInfo_12d53c8 + 0x133) >> 2 & 1) != 0) &&
                   (*(int *)(_NGUITools_TypeInfo_12d53c8 + 0xe0) == 0)) {
                  native_sub_4327ec(_NGUITools_TypeInfo_12d53c8);
                }
                uVar10 = native_NGUITools__GetActive_72d0d4(uVar13,0);
                if ((uVar10 & 1) != 0) {
                  uVar13 = native_UILabel__get_font_ae77e8(lVar12,0);
                  if (((*(byte *)(_NGUITools_TypeInfo_12d53c8 + 0x133) >> 2 & 1) != 0) &&
                     (*(int *)(_NGUITools_TypeInfo_12d53c8 + 0xe0) == 0)) {
                    native_sub_4327ec(_NGUITools_TypeInfo_12d53c8);
                  }
                  uVar10 = native_NGUITools__CheckIfRelated_7372e0(param_1,uVar13,0);
                  if ((uVar10 & 1) != 0) {
                    uVar13 = native_UILabel__get_font_ae77e8(lVar12,0);
                    native_UILabel__set_font_ae79c4(lVar12,0,0);
                    native_UILabel__set_font_ae79c4(lVar12,uVar13,0);
                  }
                }
              }
              uVar14 = uVar14 + 1;
              if (iVar5 <= (int)uVar14) goto LAB_0080106c;
            } while (uVar14 < *(uint *)(lVar9 + 0x18));
          }
          uVar13 = native_sub_43283c();
                    /* WARNING: Subroutine does not return */
          native_sub_4327dc(uVar13,0);
        }
LAB_0080106c:
        lVar9 = native_NGUIFont__get_symbols_800814(param_1);
        if (lVar9 != 0) {
          uVar14 = *(uint *)(lVar9 + 0x18);
          if (0 < (int)uVar14) {
            lVar12 = 0;
            uVar2 = uVar14;
            while( true ) {
              if (uVar2 <= (uint)lVar12) {
                native_System_ThrowHelper__ThrowArgumentOutOfRangeException_9fe0f4(0);
              }
              lVar6 = *(long *)(*(long *)(lVar9 + 0x10) + lVar12 * 8 + 0x20);
              if (lVar6 == 0) goto LAB_008010f4;
              native_BMSymbol__MarkAsChanged_dd21c4(lVar6,0);
              if ((int)uVar14 <= (int)((uint)lVar12 + 1)) break;
              uVar2 = *(uint *)(lVar9 + 0x18);
              lVar12 = lVar12 + 1;
            }
          }
          puVar8 = (undefined8 *)(param_1 + 0x70);
          *puVar8 = 0;
          if (iRam0000000001345318 != 0) {
            puVar1 = (ulong *)(((ulong)puVar8 >> 0x12 & 0x7fff) * 8 + 0x138ecd8);
            do {
              cVar3 = '\x01';
              bVar4 = (bool)ExclusiveMonitorPass(puVar1,0x10);
              if (bVar4) {
                *puVar1 = *puVar1 | 1L << ((ulong)puVar8 >> 0xc & 0x3f);
                cVar3 = ExclusiveMonitorsStatus();
              }
            } while (cVar3 != '\0');
          }
          return;
        }
      }
LAB_008010f4:
                    /* WARNING: Subroutine does not return */
      native_sub_432810();
    }
  }
  return;
}



/* NGUIFont$$get_symbolMaterial @ 0x801684
 * UnityEngine_Material_o* NGUIFont__get_symbolMaterial (NGUIFont_o* __this, const MethodInfo* method); */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* NGUIFont$$get_symbolMaterial
   UnityEngine_Material_o* NGUIFont__get_symbolMaterial (NGUIFont_o* __this, const MethodInfo*
   method); */

void native_NGUIFont__get_symbolMaterial_801684(undefined8 param_1)

{
  long *plVar1;
  undefined8 *puVar2;
  long lVar3;
  ulong uVar4;
  int *piVar5;
  
  if ((bRam000000000134043d & 1) == 0) {
    native_sub_43273c(&INGUIAtlas_TypeInfo_12d4c68);
    bRam000000000134043d = 1;
  }
  plVar1 = (long *)native_NGUIFont__get_symbolAtlas_8007c8(param_1);
  if (plVar1 == (long *)0x0) {
    return;
  }
  lVar3 = *plVar1;
  if ((ulong)*(ushort *)(lVar3 + 0x12a) != 0) {
    uVar4 = 0;
    piVar5 = (int *)(*(long *)(lVar3 + 0xb0) + 8);
    do {
      if (*(long *)(piVar5 + -2) == _INGUIAtlas_TypeInfo_12d4c68) {
        puVar2 = (undefined8 *)(lVar3 + (long)*piVar5 * 0x10 + 0x138);
        goto LAB_0080172c;
      }
      uVar4 = uVar4 + 1;
      piVar5 = piVar5 + 4;
    } while (uVar4 < *(ushort *)(lVar3 + 0x12a));
  }
  puVar2 = (undefined8 *)native_sub_3c9b34(plVar1,_INGUIAtlas_TypeInfo_12d4c68,0);
LAB_0080172c:
                    /* WARNING: Could not recover jumptable at 0x0080173c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)*puVar2)(plVar1,puVar2[1]);
  return;
}



/* NGUIFont$$get_premultipliedAlpha @ 0x801740
 * bool NGUIFont__get_premultipliedAlpha (NGUIFont_o* __this, const MethodInfo* method); */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* NGUIFont$$get_premultipliedAlpha
   bool NGUIFont__get_premultipliedAlpha (NGUIFont_o* __this, const MethodInfo* method); */

ulong native_NGUIFont__get_premultipliedAlpha_801740(long param_1)

{
  uint uVar1;
  long *plVar2;
  undefined8 *puVar3;
  undefined8 uVar4;
  long lVar5;
  int iVar6;
  ulong uVar7;
  int *piVar8;
  
  if ((bRam000000000134043e & 1) == 0) {
    native_sub_43273c(&INGUIAtlas_TypeInfo_12d4c68);
    native_sub_43273c(&INGUIFont_TypeInfo_12d4c70);
    native_sub_43273c(&UnityEngine_Object_TypeInfo_12d54e0);
    native_sub_43273c(&StringLiteral_Premultiplied_12f06a8);
    bRam000000000134043e = 1;
  }
  plVar2 = (long *)native_NGUIFont__get_replacement_8001ec(param_1);
  if (plVar2 != (long *)0x0) {
    lVar5 = *plVar2;
    if ((ulong)*(ushort *)(lVar5 + 0x12a) != 0) {
      uVar7 = 0;
      piVar8 = (int *)(*(long *)(lVar5 + 0xb0) + 8);
      do {
        if (*(long *)(piVar8 + -2) == _INGUIFont_TypeInfo_12d4c70) {
          iVar6 = *piVar8 + 0x11;
LAB_00801938:
          puVar3 = (undefined8 *)(lVar5 + (long)iVar6 * 0x10 + 0x138);
          goto LAB_00801940;
        }
        uVar7 = uVar7 + 1;
        piVar8 = piVar8 + 4;
      } while (uVar7 < *(ushort *)(lVar5 + 0x12a));
    }
    uVar4 = 0x11;
    lVar5 = _INGUIFont_TypeInfo_12d4c70;
LAB_0080184c:
    puVar3 = (undefined8 *)native_sub_3c9b34(plVar2,lVar5,uVar4);
LAB_00801940:
                    /* WARNING: Could not recover jumptable at 0x00801954. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    uVar7 = (*(code *)*puVar3)(plVar2,puVar3[1]);
    return uVar7;
  }
  plVar2 = (long *)native_sub_4327f8(*(undefined8 *)(param_1 + 0x40),_INGUIAtlas_TypeInfo_12d4c68);
  if (plVar2 != (long *)0x0) {
    lVar5 = *plVar2;
    if ((ulong)*(ushort *)(lVar5 + 0x12a) != 0) {
      uVar7 = 0;
      piVar8 = (int *)(*(long *)(lVar5 + 0xb0) + 8);
      do {
        if (*(long *)(piVar8 + -2) == _INGUIAtlas_TypeInfo_12d4c68) {
          iVar6 = *piVar8 + 7;
          goto LAB_00801938;
        }
        uVar7 = uVar7 + 1;
        piVar8 = piVar8 + 4;
      } while (uVar7 < *(ushort *)(lVar5 + 0x12a));
    }
    uVar4 = 7;
    lVar5 = _INGUIAtlas_TypeInfo_12d4c68;
    goto LAB_0080184c;
  }
  uVar1 = *(uint *)(param_1 + 0x98);
  if (uVar1 != 0xffffffff) goto LAB_00801960;
  lVar5 = native_NGUIFont__get_material_8012b0(param_1);
  if (((*(byte *)(_UnityEngine_Object_TypeInfo_12d54e0 + 0x133) >> 2 & 1) != 0) &&
     (*(int *)(_UnityEngine_Object_TypeInfo_12d54e0 + 0xe0) == 0)) {
    native_sub_4327ec(_UnityEngine_Object_TypeInfo_12d54e0);
  }
  uVar7 = native_UnityEngine_Object__op_Inequality_8d76fc(lVar5,0,0);
  if ((uVar7 & 1) == 0) {
LAB_00801958:
    uVar1 = 0;
  }
  else {
    if (lVar5 == 0) {
LAB_00801978:
                    /* WARNING: Subroutine does not return */
      native_sub_432810();
    }
    uVar4 = native_UnityEngine_Material__get_shader_8e3078(lVar5,0);
    if (((*(byte *)(_UnityEngine_Object_TypeInfo_12d54e0 + 0x133) >> 2 & 1) != 0) &&
       (*(int *)(_UnityEngine_Object_TypeInfo_12d54e0 + 0xe0) == 0)) {
      native_sub_4327ec(_UnityEngine_Object_TypeInfo_12d54e0);
    }
    uVar7 = native_UnityEngine_Object__op_Inequality_8d76fc(uVar4,0,0);
    if ((uVar7 & 1) == 0) goto LAB_00801958;
    lVar5 = native_UnityEngine_Material__get_shader_8e3078(lVar5,0);
    if ((lVar5 == 0) || (lVar5 = native_UnityEngine_Object__get_name_8e8098(lVar5,0), lVar5 == 0))
    goto LAB_00801978;
    uVar1 = native_System_String__Contains_b0bafc(lVar5,_StringLiteral_Premultiplied_12f06a8,0);
    uVar1 = uVar1 & 1;
  }
  *(uint *)(param_1 + 0x98) = uVar1;
LAB_00801960:
  return (ulong)(uVar1 == 1);
}



/* NGUIFont$$get_premultipliedAlphaShader @ 0x801744
 * bool NGUIFont__get_premultipliedAlphaShader (NGUIFont_o* __this, const MethodInfo* method); */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* NGUIFont$$get_premultipliedAlphaShader
   bool NGUIFont__get_premultipliedAlphaShader (NGUIFont_o* __this, const MethodInfo* method); */

ulong native_NGUIFont__get_premultipliedAlphaShader_801744(long param_1)

{
  uint uVar1;
  long *plVar2;
  undefined8 *puVar3;
  undefined8 uVar4;
  long lVar5;
  int iVar6;
  ulong uVar7;
  int *piVar8;
  
  if ((bRam000000000134043e & 1) == 0) {
    native_sub_43273c(&INGUIAtlas_TypeInfo_12d4c68);
    native_sub_43273c(&INGUIFont_TypeInfo_12d4c70);
    native_sub_43273c(&UnityEngine_Object_TypeInfo_12d54e0);
    native_sub_43273c(&StringLiteral_Premultiplied_12f06a8);
    bRam000000000134043e = 1;
  }
  plVar2 = (long *)native_NGUIFont__get_replacement_8001ec(param_1);
  if (plVar2 != (long *)0x0) {
    lVar5 = *plVar2;
    if ((ulong)*(ushort *)(lVar5 + 0x12a) != 0) {
      uVar7 = 0;
      piVar8 = (int *)(*(long *)(lVar5 + 0xb0) + 8);
      do {
        if (*(long *)(piVar8 + -2) == _INGUIFont_TypeInfo_12d4c70) {
          iVar6 = *piVar8 + 0x11;
LAB_00801938:
          puVar3 = (undefined8 *)(lVar5 + (long)iVar6 * 0x10 + 0x138);
          goto LAB_00801940;
        }
        uVar7 = uVar7 + 1;
        piVar8 = piVar8 + 4;
      } while (uVar7 < *(ushort *)(lVar5 + 0x12a));
    }
    uVar4 = 0x11;
    lVar5 = _INGUIFont_TypeInfo_12d4c70;
LAB_0080184c:
    puVar3 = (undefined8 *)native_sub_3c9b34(plVar2,lVar5,uVar4);
LAB_00801940:
                    /* WARNING: Could not recover jumptable at 0x00801954. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    uVar7 = (*(code *)*puVar3)(plVar2,puVar3[1]);
    return uVar7;
  }
  plVar2 = (long *)native_sub_4327f8(*(undefined8 *)(param_1 + 0x40),_INGUIAtlas_TypeInfo_12d4c68);
  if (plVar2 != (long *)0x0) {
    lVar5 = *plVar2;
    if ((ulong)*(ushort *)(lVar5 + 0x12a) != 0) {
      uVar7 = 0;
      piVar8 = (int *)(*(long *)(lVar5 + 0xb0) + 8);
      do {
        if (*(long *)(piVar8 + -2) == _INGUIAtlas_TypeInfo_12d4c68) {
          iVar6 = *piVar8 + 7;
          goto LAB_00801938;
        }
        uVar7 = uVar7 + 1;
        piVar8 = piVar8 + 4;
      } while (uVar7 < *(ushort *)(lVar5 + 0x12a));
    }
    uVar4 = 7;
    lVar5 = _INGUIAtlas_TypeInfo_12d4c68;
    goto LAB_0080184c;
  }
  uVar1 = *(uint *)(param_1 + 0x98);
  if (uVar1 != 0xffffffff) goto LAB_00801960;
  lVar5 = native_NGUIFont__get_material_8012b0(param_1);
  if (((*(byte *)(_UnityEngine_Object_TypeInfo_12d54e0 + 0x133) >> 2 & 1) != 0) &&
     (*(int *)(_UnityEngine_Object_TypeInfo_12d54e0 + 0xe0) == 0)) {
    native_sub_4327ec(_UnityEngine_Object_TypeInfo_12d54e0);
  }
  uVar7 = native_UnityEngine_Object__op_Inequality_8d76fc(lVar5,0,0);
  if ((uVar7 & 1) == 0) {
LAB_00801958:
    uVar1 = 0;
  }
  else {
    if (lVar5 == 0) {
LAB_00801978:
                    /* WARNING: Subroutine does not return */
      native_sub_432810();
    }
    uVar4 = native_UnityEngine_Material__get_shader_8e3078(lVar5,0);
    if (((*(byte *)(_UnityEngine_Object_TypeInfo_12d54e0 + 0x133) >> 2 & 1) != 0) &&
       (*(int *)(_UnityEngine_Object_TypeInfo_12d54e0 + 0xe0) == 0)) {
      native_sub_4327ec(_UnityEngine_Object_TypeInfo_12d54e0);
    }
    uVar7 = native_UnityEngine_Object__op_Inequality_8d76fc(uVar4,0,0);
    if ((uVar7 & 1) == 0) goto LAB_00801958;
    lVar5 = native_UnityEngine_Material__get_shader_8e3078(lVar5,0);
    if ((lVar5 == 0) || (lVar5 = native_UnityEngine_Object__get_name_8e8098(lVar5,0), lVar5 == 0))
    goto LAB_00801978;
    uVar1 = native_System_String__Contains_b0bafc(lVar5,_StringLiteral_Premultiplied_12f06a8,0);
    uVar1 = uVar1 & 1;
  }
  *(uint *)(param_1 + 0x98) = uVar1;
LAB_00801960:
  return (ulong)(uVar1 == 1);
}



/* NGUIFont$$get_packedFontShader @ 0x80197c
 * bool NGUIFont__get_packedFontShader (NGUIFont_o* __this, const MethodInfo* method); */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* NGUIFont$$get_packedFontShader
   bool NGUIFont__get_packedFontShader (NGUIFont_o* __this, const MethodInfo* method); */

ulong native_NGUIFont__get_packedFontShader_80197c(long param_1)

{
  int iVar1;
  uint uVar2;
  long *plVar3;
  undefined8 *puVar4;
  long lVar5;
  ulong uVar6;
  int *piVar7;
  undefined8 uVar8;
  
  if ((bRam000000000134043f & 1) == 0) {
    native_sub_43273c(&INGUIFont_TypeInfo_12d4c70);
    native_sub_43273c(&UnityEngine_Object_TypeInfo_12d54e0);
    native_sub_43273c(&StringLiteral_Packed_12f04c8);
    bRam000000000134043f = 1;
  }
  iVar1 = native_NGUIFont__get_type_80001c(param_1);
  if (iVar1 == 3) {
    return 0;
  }
  if (iVar1 == 2) {
    plVar3 = (long *)native_NGUIFont__get_replacement_8001ec(param_1);
    if (plVar3 == (long *)0x0) {
      return 0;
    }
    lVar5 = *plVar3;
    if ((ulong)*(ushort *)(lVar5 + 0x12a) != 0) {
      uVar6 = 0;
      piVar7 = (int *)(*(long *)(lVar5 + 0xb0) + 8);
      do {
        if (*(long *)(piVar7 + -2) == _INGUIFont_TypeInfo_12d4c70) {
          puVar4 = (undefined8 *)(lVar5 + (long)(*piVar7 + 0x12) * 0x10 + 0x138);
          goto LAB_00801b54;
        }
        uVar6 = uVar6 + 1;
        piVar7 = piVar7 + 4;
      } while (uVar6 < *(ushort *)(lVar5 + 0x12a));
    }
    puVar4 = (undefined8 *)native_sub_3c9b34(plVar3,_INGUIFont_TypeInfo_12d4c70,0x12);
LAB_00801b54:
                    /* WARNING: Could not recover jumptable at 0x00801b68. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    uVar6 = (*(code *)*puVar4)(plVar3,puVar4[1]);
    return uVar6;
  }
  uVar8 = *(undefined8 *)(param_1 + 0x40);
  if (((*(byte *)(_UnityEngine_Object_TypeInfo_12d54e0 + 0x133) >> 2 & 1) != 0) &&
     (*(int *)(_UnityEngine_Object_TypeInfo_12d54e0 + 0xe0) == 0)) {
    native_sub_4327ec();
  }
  uVar6 = native_UnityEngine_Object__op_Inequality_8d76fc(uVar8,0,0);
  if ((uVar6 & 1) != 0) {
    return 0;
  }
  uVar2 = *(uint *)(param_1 + 0x9c);
  if (uVar2 != 0xffffffff) goto LAB_00801b74;
  lVar5 = native_NGUIFont__get_material_8012b0(param_1);
  if (((*(byte *)(_UnityEngine_Object_TypeInfo_12d54e0 + 0x133) >> 2 & 1) != 0) &&
     (*(int *)(_UnityEngine_Object_TypeInfo_12d54e0 + 0xe0) == 0)) {
    native_sub_4327ec(_UnityEngine_Object_TypeInfo_12d54e0);
  }
  uVar6 = native_UnityEngine_Object__op_Inequality_8d76fc(lVar5,0,0);
  if ((uVar6 & 1) == 0) {
LAB_00801b6c:
    uVar2 = 0;
  }
  else {
    if (lVar5 == 0) {
LAB_00801b8c:
                    /* WARNING: Subroutine does not return */
      native_sub_432810();
    }
    uVar8 = native_UnityEngine_Material__get_shader_8e3078(lVar5,0);
    if (((*(byte *)(_UnityEngine_Object_TypeInfo_12d54e0 + 0x133) >> 2 & 1) != 0) &&
       (*(int *)(_UnityEngine_Object_TypeInfo_12d54e0 + 0xe0) == 0)) {
      native_sub_4327ec(_UnityEngine_Object_TypeInfo_12d54e0);
    }
    uVar6 = native_UnityEngine_Object__op_Inequality_8d76fc(uVar8,0,0);
    if ((uVar6 & 1) == 0) goto LAB_00801b6c;
    lVar5 = native_UnityEngine_Material__get_shader_8e3078(lVar5,0);
    if ((lVar5 == 0) || (lVar5 = native_UnityEngine_Object__get_name_8e8098(lVar5,0), lVar5 == 0))
    goto LAB_00801b8c;
    uVar2 = native_System_String__Contains_b0bafc(lVar5,_StringLiteral_Packed_12f04c8,0);
    uVar2 = uVar2 & 1;
  }
  *(uint *)(param_1 + 0x9c) = uVar2;
LAB_00801b74:
  return (ulong)(uVar2 == 1);
}



/* NGUIFont$$get_texture @ 0x801b90
 * UnityEngine_Texture2D_o* NGUIFont__get_texture (NGUIFont_o* __this, const MethodInfo* method); */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* NGUIFont$$get_texture
   UnityEngine_Texture2D_o* NGUIFont__get_texture (NGUIFont_o* __this, const MethodInfo* method); */

long * native_NGUIFont__get_texture_801b90(undefined8 param_1)

{
  long lVar1;
  ulong uVar2;
  long *plVar3;
  
  if ((bRam0000000001340440 & 1) == 0) {
    native_sub_43273c(&UnityEngine_Object_TypeInfo_12d54e0);
    native_sub_43273c(&UnityEngine_Texture2D_TypeInfo_12d61f0);
    bRam0000000001340440 = 1;
  }
  lVar1 = native_NGUIFont__get_material_8012b0(param_1);
  if (((*(byte *)(_UnityEngine_Object_TypeInfo_12d54e0 + 0x133) >> 2 & 1) != 0) &&
     (*(int *)(_UnityEngine_Object_TypeInfo_12d54e0 + 0xe0) == 0)) {
    native_sub_4327ec(_UnityEngine_Object_TypeInfo_12d54e0);
  }
  uVar2 = native_UnityEngine_Object__op_Inequality_8d76fc(lVar1,0,0);
  plVar3 = (long *)0x0;
  if ((uVar2 & 1) != 0) {
    if (lVar1 == 0) {
                    /* WARNING: Subroutine does not return */
      native_sub_432810(0);
    }
    plVar3 = (long *)native_UnityEngine_Material__get_mainTexture_8e3334(lVar1,0);
    if ((plVar3 != (long *)0x0) && (*plVar3 != _UnityEngine_Texture2D_TypeInfo_12d61f0)) {
      plVar3 = (long *)0x0;
    }
  }
  return plVar3;
}



/* NGUIFont$$get_symbolTexture @ 0x801c54
 * UnityEngine_Texture2D_o* NGUIFont__get_symbolTexture (NGUIFont_o* __this, const MethodInfo* method); */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* NGUIFont$$get_symbolTexture
   UnityEngine_Texture2D_o* NGUIFont__get_symbolTexture (NGUIFont_o* __this, const MethodInfo*
   method); */

long * native_NGUIFont__get_symbolTexture_801c54(undefined8 param_1)

{
  long lVar1;
  ulong uVar2;
  long *plVar3;
  
  if ((bRam0000000001340441 & 1) == 0) {
    native_sub_43273c(&UnityEngine_Object_TypeInfo_12d54e0);
    native_sub_43273c(&UnityEngine_Texture2D_TypeInfo_12d61f0);
    bRam0000000001340441 = 1;
  }
  lVar1 = native_NGUIFont__get_symbolMaterial_801684(param_1);
  if (((*(byte *)(_UnityEngine_Object_TypeInfo_12d54e0 + 0x133) >> 2 & 1) != 0) &&
     (*(int *)(_UnityEngine_Object_TypeInfo_12d54e0 + 0xe0) == 0)) {
    native_sub_4327ec(_UnityEngine_Object_TypeInfo_12d54e0);
  }
  uVar2 = native_UnityEngine_Object__op_Inequality_8d76fc(lVar1,0,0);
  plVar3 = (long *)0x0;
  if ((uVar2 & 1) != 0) {
    if (lVar1 == 0) {
                    /* WARNING: Subroutine does not return */
      native_sub_432810(0);
    }
    plVar3 = (long *)native_UnityEngine_Material__get_mainTexture_8e3334(lVar1,0);
    if ((plVar3 != (long *)0x0) && (*plVar3 != _UnityEngine_Texture2D_TypeInfo_12d61f0)) {
      plVar3 = (long *)0x0;
    }
  }
  return plVar3;
}



/* NGUIFont$$get_uvRect @ 0x800cc4
 * UnityEngine_Rect_o NGUIFont__get_uvRect (NGUIFont_o* __this, const MethodInfo* method); */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* NGUIFont$$get_uvRect
   UnityEngine_Rect_o NGUIFont__get_uvRect (NGUIFont_o* __this, const MethodInfo* method); */

undefined1  [16] native_NGUIFont__get_uvRect_800cc4(long param_1)

{
  int iVar1;
  long *plVar2;
  undefined8 *puVar3;
  long lVar4;
  ulong uVar5;
  int *piVar6;
  undefined8 uVar7;
  undefined4 extraout_s0;
  undefined4 uVar9;
  undefined4 extraout_var;
  undefined8 extraout_var_00;
  undefined1 auVar8 [16];
  undefined8 uStack_30;
  undefined8 uStack_28;
  
  if ((bRam0000000001340442 & 1) == 0) {
    native_sub_43273c(&INGUIFont_TypeInfo_12d4c70);
    native_sub_43273c(&UnityEngine_Object_TypeInfo_12d54e0);
    bRam0000000001340442 = 1;
  }
  iVar1 = native_NGUIFont__get_type_80001c(param_1);
  if ((iVar1 == 2) &&
     (plVar2 = (long *)native_NGUIFont__get_replacement_8001ec(param_1), plVar2 != (long *)0x0)) {
    lVar4 = *plVar2;
    if ((ulong)*(ushort *)(lVar4 + 0x12a) != 0) {
      uVar5 = 0;
      piVar6 = (int *)(*(long *)(lVar4 + 0xb0) + 8);
      do {
        if (*(long *)(piVar6 + -2) == _INGUIFont_TypeInfo_12d4c70) {
          puVar3 = (undefined8 *)(lVar4 + (long)(*piVar6 + 0x14) * 0x10 + 0x138);
          goto LAB_00800e18;
        }
        uVar5 = uVar5 + 1;
        piVar6 = piVar6 + 4;
      } while (uVar5 < *(ushort *)(lVar4 + 0x12a));
    }
    puVar3 = (undefined8 *)native_sub_3c9b34(plVar2,_INGUIFont_TypeInfo_12d4c70,0x14);
LAB_00800e18:
    (*(code *)*puVar3)(plVar2,puVar3[1]);
    uStack_30._0_4_ = extraout_s0;
    uVar9 = extraout_var;
    uVar7 = extraout_var_00;
  }
  else {
    uVar7 = *(undefined8 *)(param_1 + 0x40);
    if (((*(byte *)(_UnityEngine_Object_TypeInfo_12d54e0 + 0x133) >> 2 & 1) != 0) &&
       (*(int *)(_UnityEngine_Object_TypeInfo_12d54e0 + 0xe0) == 0)) {
      native_sub_4327ec();
    }
    uVar5 = native_UnityEngine_Object__op_Inequality_8d76fc(uVar7,0,0);
    if (((uVar5 & 1) == 0) || (lVar4 = native_NGUIFont__get_sprite_8009d0(param_1), lVar4 == 0)) {
      uStack_30 = 0;
      uStack_28 = 0;
      native_UnityEngine_Rect___ctor_7635c8(0,0,0x3f800000,0x3f800000,&uStack_30,0);
      uVar9 = 0;
      uVar7 = 0;
    }
    else {
      uStack_30._0_4_ = *(undefined4 *)(param_1 + 0x28);
      uVar9 = 0;
      uVar7 = 0;
    }
  }
  auVar8._4_4_ = uVar9;
  auVar8._0_4_ = (undefined4)uStack_30;
  auVar8._8_8_ = uVar7;
  return auVar8;
}



/* NGUIFont$$set_uvRect @ 0x801d18
 * void NGUIFont__set_uvRect (NGUIFont_o* __this, UnityEngine_Rect_o value, const MethodInfo* method); */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* NGUIFont$$set_uvRect
   void NGUIFont__set_uvRect (NGUIFont_o* __this, UnityEngine_Rect_o value, const MethodInfo*
   method); */

void native_NGUIFont__set_uvRect_801d18
               (undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
               long param_5)

{
  ulong *puVar1;
  uint uVar2;
  char cVar3;
  bool bVar4;
  int iVar5;
  undefined8 uVar6;
  long lVar7;
  long *plVar8;
  undefined8 *puVar9;
  long lVar10;
  ulong uVar11;
  int *piVar12;
  long lVar13;
  uint uVar14;
  
  if ((bRam0000000001340443 & 1) == 0) {
    native_sub_43273c(&INGUIFont_TypeInfo_12d4c70);
    bRam0000000001340443 = 1;
  }
  iVar5 = native_NGUIFont__get_type_80001c(param_5);
  if (iVar5 == 2) {
    plVar8 = (long *)native_NGUIFont__get_replacement_8001ec(param_5);
    if (plVar8 != (long *)0x0) {
      lVar10 = *plVar8;
      if ((ulong)*(ushort *)(lVar10 + 0x12a) != 0) {
        uVar11 = 0;
        piVar12 = (int *)(*(long *)(lVar10 + 0xb0) + 8);
        do {
          if (*(long *)(piVar12 + -2) == _INGUIFont_TypeInfo_12d4c70) {
            puVar9 = (undefined8 *)(lVar10 + (long)(*piVar12 + 0x15) * 0x10 + 0x138);
            goto LAB_00801e40;
          }
          uVar11 = uVar11 + 1;
          piVar12 = piVar12 + 4;
        } while (uVar11 < *(ushort *)(lVar10 + 0x12a));
      }
      puVar9 = (undefined8 *)native_sub_3c9b34(plVar8,_INGUIFont_TypeInfo_12d4c70,0x15);
LAB_00801e40:
                    /* WARNING: Could not recover jumptable at 0x00801e68. Too many branches */
                    /* WARNING: Treating indirect jump as call */
      (*(code *)*puVar9)(param_1,param_2,param_3,param_4,plVar8,puVar9[1]);
      return;
    }
  }
  else {
    lVar10 = native_NGUIFont__get_sprite_8009d0(param_5);
    if ((lVar10 == 0) &&
       (uVar11 = native_UnityEngine_Rect__op_Inequality_763890
                           (*(undefined4 *)(param_5 + 0x28),*(undefined4 *)(param_5 + 0x2c),
                            *(undefined4 *)(param_5 + 0x30),*(undefined4 *)(param_5 + 0x34),param_1,
                            param_2,param_3,param_4), (uVar11 & 1) != 0)) {
      *(int *)(param_5 + 0x28) = (int)param_1;
      *(int *)(param_5 + 0x2c) = (int)param_2;
      *(int *)(param_5 + 0x30) = (int)param_3;
      *(int *)(param_5 + 0x34) = (int)param_4;
      if ((bRam0000000001340456 & 1) == 0) {
        native_sub_43273c(&INGUIFont_TypeInfo_12d4c70);
        native_sub_43273c(&Method_System_Collections_Generic_List_BMSymbol__get_Count___12dc578);
        native_sub_43273c(&Method_System_Collections_Generic_List_BMSymbol__get_Item___12dc580);
        native_sub_43273c(&Method_NGUITools_FindActive_UILabel____12e5710);
        native_sub_43273c(&NGUITools_TypeInfo_12d53c8);
        bRam0000000001340456 = 1;
      }
      plVar8 = (long *)native_NGUIFont__get_replacement_8001ec(param_5);
      if (plVar8 != (long *)0x0) {
        lVar10 = *plVar8;
        if ((ulong)*(ushort *)(lVar10 + 0x12a) != 0) {
          uVar11 = 0;
          piVar12 = (int *)(*(long *)(lVar10 + 0xb0) + 8);
          do {
            if (*(long *)(piVar12 + -2) == _INGUIFont_TypeInfo_12d4c70) {
              puVar9 = (undefined8 *)(lVar10 + (long)(*piVar12 + 0x27) * 0x10 + 0x138);
              goto LAB_00800f18;
            }
            uVar11 = uVar11 + 1;
            piVar12 = piVar12 + 4;
          } while (uVar11 < *(ushort *)(lVar10 + 0x12a));
        }
        puVar9 = (undefined8 *)native_sub_3c9b34(plVar8,_INGUIFont_TypeInfo_12d4c70,0x27);
LAB_00800f18:
        (*(code *)*puVar9)(plVar8,puVar9[1]);
      }
      *(undefined8 *)(param_5 + 0x90) = 0;
      native_sub_4326e0((undefined8 *)(param_5 + 0x90),0);
      if (((*(byte *)(_NGUITools_TypeInfo_12d53c8 + 0x133) >> 2 & 1) != 0) &&
         (*(int *)(_NGUITools_TypeInfo_12d53c8 + 0xe0) == 0)) {
        native_sub_4327ec();
      }
      lVar10 = native_NGUITools__FindActive_AudioListener__4a5b30
                         (_Method_NGUITools_FindActive_UILabel____12e5710);
      if (lVar10 != 0) {
        iVar5 = (int)*(undefined8 *)(lVar10 + 0x18);
        if (0 < iVar5) {
          if (iVar5 != 0) {
            uVar14 = 0;
            do {
              lVar13 = *(long *)(lVar10 + (long)(int)uVar14 * 8 + 0x20);
              if (lVar13 == 0) goto LAB_008010f4;
              uVar11 = native_UnityEngine_Behaviour__get_enabled_8d7acc(lVar13,0);
              if ((uVar11 & 1) != 0) {
                uVar6 = native_UnityEngine_Component__get_gameObject_8da66c(lVar13,0);
                if (((*(byte *)(_NGUITools_TypeInfo_12d53c8 + 0x133) >> 2 & 1) != 0) &&
                   (*(int *)(_NGUITools_TypeInfo_12d53c8 + 0xe0) == 0)) {
                  native_sub_4327ec(_NGUITools_TypeInfo_12d53c8);
                }
                uVar11 = native_NGUITools__GetActive_72d0d4(uVar6,0);
                if ((uVar11 & 1) != 0) {
                  uVar6 = native_UILabel__get_font_ae77e8(lVar13,0);
                  if (((*(byte *)(_NGUITools_TypeInfo_12d53c8 + 0x133) >> 2 & 1) != 0) &&
                     (*(int *)(_NGUITools_TypeInfo_12d53c8 + 0xe0) == 0)) {
                    native_sub_4327ec(_NGUITools_TypeInfo_12d53c8);
                  }
                  uVar11 = native_NGUITools__CheckIfRelated_7372e0(param_5,uVar6,0);
                  if ((uVar11 & 1) != 0) {
                    uVar6 = native_UILabel__get_font_ae77e8(lVar13,0);
                    native_UILabel__set_font_ae79c4(lVar13,0,0);
                    native_UILabel__set_font_ae79c4(lVar13,uVar6,0);
                  }
                }
              }
              uVar14 = uVar14 + 1;
              if (iVar5 <= (int)uVar14) goto LAB_0080106c;
            } while (uVar14 < *(uint *)(lVar10 + 0x18));
          }
          uVar6 = native_sub_43283c();
                    /* WARNING: Subroutine does not return */
          native_sub_4327dc(uVar6,0);
        }
LAB_0080106c:
        lVar10 = native_NGUIFont__get_symbols_800814(param_5);
        if (lVar10 != 0) {
          uVar14 = *(uint *)(lVar10 + 0x18);
          if (0 < (int)uVar14) {
            lVar13 = 0;
            uVar2 = uVar14;
            while( true ) {
              if (uVar2 <= (uint)lVar13) {
                native_System_ThrowHelper__ThrowArgumentOutOfRangeException_9fe0f4(0);
              }
              lVar7 = *(long *)(*(long *)(lVar10 + 0x10) + lVar13 * 8 + 0x20);
              if (lVar7 == 0) goto LAB_008010f4;
              native_BMSymbol__MarkAsChanged_dd21c4(lVar7,0);
              if ((int)uVar14 <= (int)((uint)lVar13 + 1)) break;
              uVar2 = *(uint *)(lVar10 + 0x18);
              lVar13 = lVar13 + 1;
            }
          }
          puVar9 = (undefined8 *)(param_5 + 0x70);
          *puVar9 = 0;
          if (iRam0000000001345318 != 0) {
            puVar1 = (ulong *)(((ulong)puVar9 >> 0x12 & 0x7fff) * 8 + 0x138ecd8);
            do {
              cVar3 = '\x01';
              bVar4 = (bool)ExclusiveMonitorPass(puVar1,0x10);
              if (bVar4) {
                *puVar1 = *puVar1 | 1L << ((ulong)puVar9 >> 0xc & 0x3f);
                cVar3 = ExclusiveMonitorsStatus();
              }
            } while (cVar3 != '\0');
          }
          return;
        }
      }
LAB_008010f4:
                    /* WARNING: Subroutine does not return */
      native_sub_432810();
    }
  }
  return;
}



/* NGUIFont$$get_symbolScale @ 0x801e6c
 * float NGUIFont__get_symbolScale (NGUIFont_o* __this, const MethodInfo* method); */

/* NGUIFont$$get_symbolScale
   float NGUIFont__get_symbolScale (NGUIFont_o* __this, const MethodInfo* method); */

undefined4 native_NGUIFont__get_symbolScale_801e6c(long param_1)

{
  return *(undefined4 *)(param_1 + 0x58);
}



/* NGUIFont$$set_symbolScale @ 0x801e74
 * void NGUIFont__set_symbolScale (NGUIFont_o* __this, float value, const MethodInfo* method); */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* NGUIFont$$set_symbolScale
   void NGUIFont__set_symbolScale (NGUIFont_o* __this, float value, const MethodInfo* method); */

void native_NGUIFont__set_symbolScale_801e74(undefined4 param_1,long param_2)

{
  ulong *puVar1;
  uint uVar2;
  char cVar3;
  bool bVar4;
  long *plVar5;
  undefined8 *puVar6;
  undefined8 uVar7;
  long lVar8;
  long lVar9;
  ulong uVar10;
  int *piVar11;
  long lVar12;
  int iVar13;
  uint uVar14;
  float fVar15;
  
  fVar15 = (float)native_UnityEngine_Mathf__Clamp_8e51ec(param_1,0x3d4ccccd,0x40a00000,0);
  if (*(float *)(param_2 + 0x58) == fVar15) {
    return;
  }
  *(float *)(param_2 + 0x58) = fVar15;
  if ((bRam0000000001340456 & 1) == 0) {
    native_sub_43273c(&INGUIFont_TypeInfo_12d4c70);
    native_sub_43273c(&Method_System_Collections_Generic_List_BMSymbol__get_Count___12dc578);
    native_sub_43273c(&Method_System_Collections_Generic_List_BMSymbol__get_Item___12dc580);
    native_sub_43273c(&Method_NGUITools_FindActive_UILabel____12e5710);
    native_sub_43273c(&NGUITools_TypeInfo_12d53c8);
    bRam0000000001340456 = 1;
  }
  plVar5 = (long *)native_NGUIFont__get_replacement_8001ec(param_2);
  if (plVar5 != (long *)0x0) {
    lVar9 = *plVar5;
    if ((ulong)*(ushort *)(lVar9 + 0x12a) != 0) {
      uVar10 = 0;
      piVar11 = (int *)(*(long *)(lVar9 + 0xb0) + 8);
      do {
        if (*(long *)(piVar11 + -2) == _INGUIFont_TypeInfo_12d4c70) {
          puVar6 = (undefined8 *)(lVar9 + (long)(*piVar11 + 0x27) * 0x10 + 0x138);
          goto LAB_00800f18;
        }
        uVar10 = uVar10 + 1;
        piVar11 = piVar11 + 4;
      } while (uVar10 < *(ushort *)(lVar9 + 0x12a));
    }
    puVar6 = (undefined8 *)native_sub_3c9b34(plVar5,_INGUIFont_TypeInfo_12d4c70,0x27);
LAB_00800f18:
    (*(code *)*puVar6)(plVar5,puVar6[1]);
  }
  *(undefined8 *)(param_2 + 0x90) = 0;
  native_sub_4326e0((undefined8 *)(param_2 + 0x90),0);
  if (((*(byte *)(_NGUITools_TypeInfo_12d53c8 + 0x133) >> 2 & 1) != 0) &&
     (*(int *)(_NGUITools_TypeInfo_12d53c8 + 0xe0) == 0)) {
    native_sub_4327ec();
  }
  lVar9 = native_NGUITools__FindActive_AudioListener__4a5b30
                    (_Method_NGUITools_FindActive_UILabel____12e5710);
  if (lVar9 != 0) {
    iVar13 = (int)*(undefined8 *)(lVar9 + 0x18);
    if (0 < iVar13) {
      if (iVar13 != 0) {
        uVar14 = 0;
        do {
          lVar12 = *(long *)(lVar9 + (long)(int)uVar14 * 8 + 0x20);
          if (lVar12 == 0) goto LAB_008010f4;
          uVar10 = native_UnityEngine_Behaviour__get_enabled_8d7acc(lVar12,0);
          if ((uVar10 & 1) != 0) {
            uVar7 = native_UnityEngine_Component__get_gameObject_8da66c(lVar12,0);
            if (((*(byte *)(_NGUITools_TypeInfo_12d53c8 + 0x133) >> 2 & 1) != 0) &&
               (*(int *)(_NGUITools_TypeInfo_12d53c8 + 0xe0) == 0)) {
              native_sub_4327ec(_NGUITools_TypeInfo_12d53c8);
            }
            uVar10 = native_NGUITools__GetActive_72d0d4(uVar7,0);
            if ((uVar10 & 1) != 0) {
              uVar7 = native_UILabel__get_font_ae77e8(lVar12,0);
              if (((*(byte *)(_NGUITools_TypeInfo_12d53c8 + 0x133) >> 2 & 1) != 0) &&
                 (*(int *)(_NGUITools_TypeInfo_12d53c8 + 0xe0) == 0)) {
                native_sub_4327ec(_NGUITools_TypeInfo_12d53c8);
              }
              uVar10 = native_NGUITools__CheckIfRelated_7372e0(param_2,uVar7,0);
              if ((uVar10 & 1) != 0) {
                uVar7 = native_UILabel__get_font_ae77e8(lVar12,0);
                native_UILabel__set_font_ae79c4(lVar12,0,0);
                native_UILabel__set_font_ae79c4(lVar12,uVar7,0);
              }
            }
          }
          uVar14 = uVar14 + 1;
          if (iVar13 <= (int)uVar14) goto LAB_0080106c;
        } while (uVar14 < *(uint *)(lVar9 + 0x18));
      }
      uVar7 = native_sub_43283c();
                    /* WARNING: Subroutine does not return */
      native_sub_4327dc(uVar7,0);
    }
LAB_0080106c:
    lVar9 = native_NGUIFont__get_symbols_800814(param_2);
    if (lVar9 != 0) {
      uVar14 = *(uint *)(lVar9 + 0x18);
      if (0 < (int)uVar14) {
        lVar12 = 0;
        uVar2 = uVar14;
        while( true ) {
          if (uVar2 <= (uint)lVar12) {
            native_System_ThrowHelper__ThrowArgumentOutOfRangeException_9fe0f4(0);
          }
          lVar8 = *(long *)(*(long *)(lVar9 + 0x10) + lVar12 * 8 + 0x20);
          if (lVar8 == 0) goto LAB_008010f4;
          native_BMSymbol__MarkAsChanged_dd21c4(lVar8,0);
          if ((int)uVar14 <= (int)((uint)lVar12 + 1)) break;
          uVar2 = *(uint *)(lVar9 + 0x18);
          lVar12 = lVar12 + 1;
        }
      }
      puVar6 = (undefined8 *)(param_2 + 0x70);
      *puVar6 = 0;
      if (iRam0000000001345318 != 0) {
        puVar1 = (ulong *)(((ulong)puVar6 >> 0x12 & 0x7fff) * 8 + 0x138ecd8);
        do {
          cVar3 = '\x01';
          bVar4 = (bool)ExclusiveMonitorPass(puVar1,0x10);
          if (bVar4) {
            *puVar1 = *puVar1 | 1L << ((ulong)puVar6 >> 0xc & 0x3f);
            cVar3 = ExclusiveMonitorsStatus();
          }
        } while (cVar3 != '\0');
      }
      return;
    }
  }
LAB_008010f4:
                    /* WARNING: Subroutine does not return */
  native_sub_432810();
}



/* NGUIFont$$get_symbolOffset @ 0x801ec4
 * int32_t NGUIFont__get_symbolOffset (NGUIFont_o* __this, const MethodInfo* method); */

/* NGUIFont$$get_symbolOffset
   int32_t NGUIFont__get_symbolOffset (NGUIFont_o* __this, const MethodInfo* method); */

undefined4 native_NGUIFont__get_symbolOffset_801ec4(long param_1)

{
  return *(undefined4 *)(param_1 + 0x5c);
}



/* NGUIFont$$set_symbolOffset @ 0x801ecc
 * void NGUIFont__set_symbolOffset (NGUIFont_o* __this, int32_t value, const MethodInfo* method); */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* NGUIFont$$set_symbolOffset
   void NGUIFont__set_symbolOffset (NGUIFont_o* __this, int32_t value, const MethodInfo* method); */

void native_NGUIFont__set_symbolOffset_801ecc(long param_1,int param_2)

{
  ulong *puVar1;
  uint uVar2;
  char cVar3;
  bool bVar4;
  long *plVar5;
  undefined8 *puVar6;
  undefined8 uVar7;
  long lVar8;
  long lVar9;
  ulong uVar10;
  int *piVar11;
  long lVar12;
  int iVar13;
  uint uVar14;
  
  if (*(int *)(param_1 + 0x5c) == param_2) {
    return;
  }
  *(int *)(param_1 + 0x5c) = param_2;
  if ((bRam0000000001340456 & 1) == 0) {
    native_sub_43273c(&INGUIFont_TypeInfo_12d4c70);
    native_sub_43273c(&Method_System_Collections_Generic_List_BMSymbol__get_Count___12dc578);
    native_sub_43273c(&Method_System_Collections_Generic_List_BMSymbol__get_Item___12dc580);
    native_sub_43273c(&Method_NGUITools_FindActive_UILabel____12e5710);
    native_sub_43273c(&NGUITools_TypeInfo_12d53c8);
    bRam0000000001340456 = 1;
  }
  plVar5 = (long *)native_NGUIFont__get_replacement_8001ec(param_1);
  if (plVar5 != (long *)0x0) {
    lVar9 = *plVar5;
    if ((ulong)*(ushort *)(lVar9 + 0x12a) != 0) {
      uVar10 = 0;
      piVar11 = (int *)(*(long *)(lVar9 + 0xb0) + 8);
      do {
        if (*(long *)(piVar11 + -2) == _INGUIFont_TypeInfo_12d4c70) {
          puVar6 = (undefined8 *)(lVar9 + (long)(*piVar11 + 0x27) * 0x10 + 0x138);
          goto LAB_00800f18;
        }
        uVar10 = uVar10 + 1;
        piVar11 = piVar11 + 4;
      } while (uVar10 < *(ushort *)(lVar9 + 0x12a));
    }
    puVar6 = (undefined8 *)native_sub_3c9b34(plVar5,_INGUIFont_TypeInfo_12d4c70,0x27);
LAB_00800f18:
    (*(code *)*puVar6)(plVar5,puVar6[1]);
  }
  *(undefined8 *)(param_1 + 0x90) = 0;
  native_sub_4326e0((undefined8 *)(param_1 + 0x90),0);
  if (((*(byte *)(_NGUITools_TypeInfo_12d53c8 + 0x133) >> 2 & 1) != 0) &&
     (*(int *)(_NGUITools_TypeInfo_12d53c8 + 0xe0) == 0)) {
    native_sub_4327ec();
  }
  lVar9 = native_NGUITools__FindActive_AudioListener__4a5b30
                    (_Method_NGUITools_FindActive_UILabel____12e5710);
  if (lVar9 != 0) {
    iVar13 = (int)*(undefined8 *)(lVar9 + 0x18);
    if (0 < iVar13) {
      if (iVar13 != 0) {
        uVar14 = 0;
        do {
          lVar12 = *(long *)(lVar9 + (long)(int)uVar14 * 8 + 0x20);
          if (lVar12 == 0) goto LAB_008010f4;
          uVar10 = native_UnityEngine_Behaviour__get_enabled_8d7acc(lVar12,0);
          if ((uVar10 & 1) != 0) {
            uVar7 = native_UnityEngine_Component__get_gameObject_8da66c(lVar12,0);
            if (((*(byte *)(_NGUITools_TypeInfo_12d53c8 + 0x133) >> 2 & 1) != 0) &&
               (*(int *)(_NGUITools_TypeInfo_12d53c8 + 0xe0) == 0)) {
              native_sub_4327ec(_NGUITools_TypeInfo_12d53c8);
            }
            uVar10 = native_NGUITools__GetActive_72d0d4(uVar7,0);
            if ((uVar10 & 1) != 0) {
              uVar7 = native_UILabel__get_font_ae77e8(lVar12,0);
              if (((*(byte *)(_NGUITools_TypeInfo_12d53c8 + 0x133) >> 2 & 1) != 0) &&
                 (*(int *)(_NGUITools_TypeInfo_12d53c8 + 0xe0) == 0)) {
                native_sub_4327ec(_NGUITools_TypeInfo_12d53c8);
              }
              uVar10 = native_NGUITools__CheckIfRelated_7372e0(param_1,uVar7,0);
              if ((uVar10 & 1) != 0) {
                uVar7 = native_UILabel__get_font_ae77e8(lVar12,0);
                native_UILabel__set_font_ae79c4(lVar12,0,0);
                native_UILabel__set_font_ae79c4(lVar12,uVar7,0);
              }
            }
          }
          uVar14 = uVar14 + 1;
          if (iVar13 <= (int)uVar14) goto LAB_0080106c;
        } while (uVar14 < *(uint *)(lVar9 + 0x18));
      }
      uVar7 = native_sub_43283c();
                    /* WARNING: Subroutine does not return */
      native_sub_4327dc(uVar7,0);
    }
LAB_0080106c:
    lVar9 = native_NGUIFont__get_symbols_800814(param_1);
    if (lVar9 != 0) {
      uVar14 = *(uint *)(lVar9 + 0x18);
      if (0 < (int)uVar14) {
        lVar12 = 0;
        uVar2 = uVar14;
        while( true ) {
          if (uVar2 <= (uint)lVar12) {
            native_System_ThrowHelper__ThrowArgumentOutOfRangeException_9fe0f4(0);
          }
          lVar8 = *(long *)(*(long *)(lVar9 + 0x10) + lVar12 * 8 + 0x20);
          if (lVar8 == 0) goto LAB_008010f4;
          native_BMSymbol__MarkAsChanged_dd21c4(lVar8,0);
          if ((int)uVar14 <= (int)((uint)lVar12 + 1)) break;
          uVar2 = *(uint *)(lVar9 + 0x18);
          lVar12 = lVar12 + 1;
        }
      }
      puVar6 = (undefined8 *)(param_1 + 0x70);
      *puVar6 = 0;
      if (iRam0000000001345318 != 0) {
        puVar1 = (ulong *)(((ulong)puVar6 >> 0x12 & 0x7fff) * 8 + 0x138ecd8);
        do {
          cVar3 = '\x01';
          bVar4 = (bool)ExclusiveMonitorPass(puVar1,0x10);
          if (bVar4) {
            *puVar1 = *puVar1 | 1L << ((ulong)puVar6 >> 0xc & 0x3f);
            cVar3 = ExclusiveMonitorsStatus();
          }
        } while (cVar3 != '\0');
      }
      return;
    }
  }
LAB_008010f4:
                    /* WARNING: Subroutine does not return */
  native_sub_432810();
}



/* NGUIFont$$get_symbolMaxHeight @ 0x801ee4
 * int32_t NGUIFont__get_symbolMaxHeight (NGUIFont_o* __this, const MethodInfo* method); */

/* NGUIFont$$get_symbolMaxHeight
   int32_t NGUIFont__get_symbolMaxHeight (NGUIFont_o* __this, const MethodInfo* method); */

undefined4 native_NGUIFont__get_symbolMaxHeight_801ee4(long param_1)

{
  return *(undefined4 *)(param_1 + 0x60);
}



/* NGUIFont$$set_symbolMaxHeight @ 0x801eec
 * void NGUIFont__set_symbolMaxHeight (NGUIFont_o* __this, int32_t value, const MethodInfo* method); */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* NGUIFont$$set_symbolMaxHeight
   void NGUIFont__set_symbolMaxHeight (NGUIFont_o* __this, int32_t value, const MethodInfo* method);
    */

void native_NGUIFont__set_symbolMaxHeight_801eec(long param_1,int param_2)

{
  ulong *puVar1;
  uint uVar2;
  char cVar3;
  bool bVar4;
  long *plVar5;
  undefined8 *puVar6;
  undefined8 uVar7;
  long lVar8;
  long lVar9;
  ulong uVar10;
  int *piVar11;
  long lVar12;
  int iVar13;
  uint uVar14;
  
  if (*(int *)(param_1 + 0x60) == param_2) {
    return;
  }
  *(int *)(param_1 + 0x60) = param_2;
  if ((bRam0000000001340456 & 1) == 0) {
    native_sub_43273c(&INGUIFont_TypeInfo_12d4c70);
    native_sub_43273c(&Method_System_Collections_Generic_List_BMSymbol__get_Count___12dc578);
    native_sub_43273c(&Method_System_Collections_Generic_List_BMSymbol__get_Item___12dc580);
    native_sub_43273c(&Method_NGUITools_FindActive_UILabel____12e5710);
    native_sub_43273c(&NGUITools_TypeInfo_12d53c8);
    bRam0000000001340456 = 1;
  }
  plVar5 = (long *)native_NGUIFont__get_replacement_8001ec(param_1);
  if (plVar5 != (long *)0x0) {
    lVar9 = *plVar5;
    if ((ulong)*(ushort *)(lVar9 + 0x12a) != 0) {
      uVar10 = 0;
      piVar11 = (int *)(*(long *)(lVar9 + 0xb0) + 8);
      do {
        if (*(long *)(piVar11 + -2) == _INGUIFont_TypeInfo_12d4c70) {
          puVar6 = (undefined8 *)(lVar9 + (long)(*piVar11 + 0x27) * 0x10 + 0x138);
          goto LAB_00800f18;
        }
        uVar10 = uVar10 + 1;
        piVar11 = piVar11 + 4;
      } while (uVar10 < *(ushort *)(lVar9 + 0x12a));
    }
    puVar6 = (undefined8 *)native_sub_3c9b34(plVar5,_INGUIFont_TypeInfo_12d4c70,0x27);
LAB_00800f18:
    (*(code *)*puVar6)(plVar5,puVar6[1]);
  }
  *(undefined8 *)(param_1 + 0x90) = 0;
  native_sub_4326e0((undefined8 *)(param_1 + 0x90),0);
  if (((*(byte *)(_NGUITools_TypeInfo_12d53c8 + 0x133) >> 2 & 1) != 0) &&
     (*(int *)(_NGUITools_TypeInfo_12d53c8 + 0xe0) == 0)) {
    native_sub_4327ec();
  }
  lVar9 = native_NGUITools__FindActive_AudioListener__4a5b30
                    (_Method_NGUITools_FindActive_UILabel____12e5710);
  if (lVar9 != 0) {
    iVar13 = (int)*(undefined8 *)(lVar9 + 0x18);
    if (0 < iVar13) {
      if (iVar13 != 0) {
        uVar14 = 0;
        do {
          lVar12 = *(long *)(lVar9 + (long)(int)uVar14 * 8 + 0x20);
          if (lVar12 == 0) goto LAB_008010f4;
          uVar10 = native_UnityEngine_Behaviour__get_enabled_8d7acc(lVar12,0);
          if ((uVar10 & 1) != 0) {
            uVar7 = native_UnityEngine_Component__get_gameObject_8da66c(lVar12,0);
            if (((*(byte *)(_NGUITools_TypeInfo_12d53c8 + 0x133) >> 2 & 1) != 0) &&
               (*(int *)(_NGUITools_TypeInfo_12d53c8 + 0xe0) == 0)) {
              native_sub_4327ec(_NGUITools_TypeInfo_12d53c8);
            }
            uVar10 = native_NGUITools__GetActive_72d0d4(uVar7,0);
            if ((uVar10 & 1) != 0) {
              uVar7 = native_UILabel__get_font_ae77e8(lVar12,0);
              if (((*(byte *)(_NGUITools_TypeInfo_12d53c8 + 0x133) >> 2 & 1) != 0) &&
                 (*(int *)(_NGUITools_TypeInfo_12d53c8 + 0xe0) == 0)) {
                native_sub_4327ec(_NGUITools_TypeInfo_12d53c8);
              }
              uVar10 = native_NGUITools__CheckIfRelated_7372e0(param_1,uVar7,0);
              if ((uVar10 & 1) != 0) {
                uVar7 = native_UILabel__get_font_ae77e8(lVar12,0);
                native_UILabel__set_font_ae79c4(lVar12,0,0);
                native_UILabel__set_font_ae79c4(lVar12,uVar7,0);
              }
            }
          }
          uVar14 = uVar14 + 1;
          if (iVar13 <= (int)uVar14) goto LAB_0080106c;
        } while (uVar14 < *(uint *)(lVar9 + 0x18));
      }
      uVar7 = native_sub_43283c();
                    /* WARNING: Subroutine does not return */
      native_sub_4327dc(uVar7,0);
    }
LAB_0080106c:
    lVar9 = native_NGUIFont__get_symbols_800814(param_1);
    if (lVar9 != 0) {
      uVar14 = *(uint *)(lVar9 + 0x18);
      if (0 < (int)uVar14) {
        lVar12 = 0;
        uVar2 = uVar14;
        while( true ) {
          if (uVar2 <= (uint)lVar12) {
            native_System_ThrowHelper__ThrowArgumentOutOfRangeException_9fe0f4(0);
          }
          lVar8 = *(long *)(*(long *)(lVar9 + 0x10) + lVar12 * 8 + 0x20);
          if (lVar8 == 0) goto LAB_008010f4;
          native_BMSymbol__MarkAsChanged_dd21c4(lVar8,0);
          if ((int)uVar14 <= (int)((uint)lVar12 + 1)) break;
          uVar2 = *(uint *)(lVar9 + 0x18);
          lVar12 = lVar12 + 1;
        }
      }
      puVar6 = (undefined8 *)(param_1 + 0x70);
      *puVar6 = 0;
      if (iRam0000000001345318 != 0) {
        puVar1 = (ulong *)(((ulong)puVar6 >> 0x12 & 0x7fff) * 8 + 0x138ecd8);
        do {
          cVar3 = '\x01';
          bVar4 = (bool)ExclusiveMonitorPass(puVar1,0x10);
          if (bVar4) {
            *puVar1 = *puVar1 | 1L << ((ulong)puVar6 >> 0xc & 0x3f);
            cVar3 = ExclusiveMonitorsStatus();
          }
        } while (cVar3 != '\0');
      }
      return;
    }
  }
LAB_008010f4:
                    /* WARNING: Subroutine does not return */
  native_sub_432810();
}



/* NGUIFont$$get_symbolCentered @ 0x801f04
 * bool NGUIFont__get_symbolCentered (NGUIFont_o* __this, const MethodInfo* method); */

/* NGUIFont$$get_symbolCentered
   bool NGUIFont__get_symbolCentered (NGUIFont_o* __this, const MethodInfo* method); */

undefined1 native_NGUIFont__get_symbolCentered_801f04(long param_1)

{
  return *(undefined1 *)(param_1 + 100);
}



/* NGUIFont$$set_symbolCentered @ 0x801f0c
 * void NGUIFont__set_symbolCentered (NGUIFont_o* __this, bool value, const MethodInfo* method); */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* NGUIFont$$set_symbolCentered
   void NGUIFont__set_symbolCentered (NGUIFont_o* __this, bool value, const MethodInfo* method); */

void native_NGUIFont__set_symbolCentered_801f0c(long param_1,byte param_2)

{
  ulong *puVar1;
  uint uVar2;
  char cVar3;
  bool bVar4;
  long *plVar5;
  undefined8 *puVar6;
  undefined8 uVar7;
  long lVar8;
  long lVar9;
  ulong uVar10;
  int *piVar11;
  long lVar12;
  int iVar13;
  uint uVar14;
  
  if (((*(char *)(param_1 + 100) != '\0' ^ param_2) & 1) == 0) {
    return;
  }
  *(byte *)(param_1 + 100) = param_2 & 1;
  if ((bRam0000000001340456 & 1) == 0) {
    native_sub_43273c(&INGUIFont_TypeInfo_12d4c70);
    native_sub_43273c(&Method_System_Collections_Generic_List_BMSymbol__get_Count___12dc578);
    native_sub_43273c(&Method_System_Collections_Generic_List_BMSymbol__get_Item___12dc580);
    native_sub_43273c(&Method_NGUITools_FindActive_UILabel____12e5710);
    native_sub_43273c(&NGUITools_TypeInfo_12d53c8);
    bRam0000000001340456 = 1;
  }
  plVar5 = (long *)native_NGUIFont__get_replacement_8001ec(param_1);
  if (plVar5 != (long *)0x0) {
    lVar9 = *plVar5;
    if ((ulong)*(ushort *)(lVar9 + 0x12a) != 0) {
      uVar10 = 0;
      piVar11 = (int *)(*(long *)(lVar9 + 0xb0) + 8);
      do {
        if (*(long *)(piVar11 + -2) == _INGUIFont_TypeInfo_12d4c70) {
          puVar6 = (undefined8 *)(lVar9 + (long)(*piVar11 + 0x27) * 0x10 + 0x138);
          goto LAB_00800f18;
        }
        uVar10 = uVar10 + 1;
        piVar11 = piVar11 + 4;
      } while (uVar10 < *(ushort *)(lVar9 + 0x12a));
    }
    puVar6 = (undefined8 *)native_sub_3c9b34(plVar5,_INGUIFont_TypeInfo_12d4c70,0x27);
LAB_00800f18:
    (*(code *)*puVar6)(plVar5,puVar6[1]);
  }
  *(undefined8 *)(param_1 + 0x90) = 0;
  native_sub_4326e0((undefined8 *)(param_1 + 0x90),0);
  if (((*(byte *)(_NGUITools_TypeInfo_12d53c8 + 0x133) >> 2 & 1) != 0) &&
     (*(int *)(_NGUITools_TypeInfo_12d53c8 + 0xe0) == 0)) {
    native_sub_4327ec();
  }
  lVar9 = native_NGUITools__FindActive_AudioListener__4a5b30
                    (_Method_NGUITools_FindActive_UILabel____12e5710);
  if (lVar9 != 0) {
    iVar13 = (int)*(undefined8 *)(lVar9 + 0x18);
    if (0 < iVar13) {
      if (iVar13 != 0) {
        uVar14 = 0;
        do {
          lVar12 = *(long *)(lVar9 + (long)(int)uVar14 * 8 + 0x20);
          if (lVar12 == 0) goto LAB_008010f4;
          uVar10 = native_UnityEngine_Behaviour__get_enabled_8d7acc(lVar12,0);
          if ((uVar10 & 1) != 0) {
            uVar7 = native_UnityEngine_Component__get_gameObject_8da66c(lVar12,0);
            if (((*(byte *)(_NGUITools_TypeInfo_12d53c8 + 0x133) >> 2 & 1) != 0) &&
               (*(int *)(_NGUITools_TypeInfo_12d53c8 + 0xe0) == 0)) {
              native_sub_4327ec(_NGUITools_TypeInfo_12d53c8);
            }
            uVar10 = native_NGUITools__GetActive_72d0d4(uVar7,0);
            if ((uVar10 & 1) != 0) {
              uVar7 = native_UILabel__get_font_ae77e8(lVar12,0);
              if (((*(byte *)(_NGUITools_TypeInfo_12d53c8 + 0x133) >> 2 & 1) != 0) &&
                 (*(int *)(_NGUITools_TypeInfo_12d53c8 + 0xe0) == 0)) {
                native_sub_4327ec(_NGUITools_TypeInfo_12d53c8);
              }
              uVar10 = native_NGUITools__CheckIfRelated_7372e0(param_1,uVar7,0);
              if ((uVar10 & 1) != 0) {
                uVar7 = native_UILabel__get_font_ae77e8(lVar12,0);
                native_UILabel__set_font_ae79c4(lVar12,0,0);
                native_UILabel__set_font_ae79c4(lVar12,uVar7,0);
              }
            }
          }
          uVar14 = uVar14 + 1;
          if (iVar13 <= (int)uVar14) goto LAB_0080106c;
        } while (uVar14 < *(uint *)(lVar9 + 0x18));
      }
      uVar7 = native_sub_43283c();
                    /* WARNING: Subroutine does not return */
      native_sub_4327dc(uVar7,0);
    }
LAB_0080106c:
    lVar9 = native_NGUIFont__get_symbols_800814(param_1);
    if (lVar9 != 0) {
      uVar14 = *(uint *)(lVar9 + 0x18);
      if (0 < (int)uVar14) {
        lVar12 = 0;
        uVar2 = uVar14;
        while( true ) {
          if (uVar2 <= (uint)lVar12) {
            native_System_ThrowHelper__ThrowArgumentOutOfRangeException_9fe0f4(0);
          }
          lVar8 = *(long *)(*(long *)(lVar9 + 0x10) + lVar12 * 8 + 0x20);
          if (lVar8 == 0) goto LAB_008010f4;
          native_BMSymbol__MarkAsChanged_dd21c4(lVar8,0);
          if ((int)uVar14 <= (int)((uint)lVar12 + 1)) break;
          uVar2 = *(uint *)(lVar9 + 0x18);
          lVar12 = lVar12 + 1;
        }
      }
      puVar6 = (undefined8 *)(param_1 + 0x70);
      *puVar6 = 0;
      if (iRam0000000001345318 != 0) {
        puVar1 = (ulong *)(((ulong)puVar6 >> 0x12 & 0x7fff) * 8 + 0x138ecd8);
        do {
          cVar3 = '\x01';
          bVar4 = (bool)ExclusiveMonitorPass(puVar1,0x10);
          if (bVar4) {
            *puVar1 = *puVar1 | 1L << ((ulong)puVar6 >> 0xc & 0x3f);
            cVar3 = ExclusiveMonitorsStatus();
          }
        } while (cVar3 != '\0');
      }
      return;
    }
  }
LAB_008010f4:
                    /* WARNING: Subroutine does not return */
  native_sub_432810();
}



/* NGUIFont$$get_spriteName @ 0x801f30
 * System_String_o* NGUIFont__get_spriteName (NGUIFont_o* __this, const MethodInfo* method); */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* NGUIFont$$get_spriteName
   System_String_o* NGUIFont__get_spriteName (NGUIFont_o* __this, const MethodInfo* method); */

undefined8 native_NGUIFont__get_spriteName_801f30(long param_1)

{
  int iVar1;
  long *plVar2;
  undefined8 *puVar3;
  undefined8 uVar4;
  long lVar5;
  ulong uVar6;
  int *piVar7;
  
  if ((bRam0000000001340444 & 1) == 0) {
    native_sub_43273c(&INGUIFont_TypeInfo_12d4c70);
    native_sub_43273c(&StringLiteral__12eaac0);
    bRam0000000001340444 = 1;
  }
  iVar1 = native_NGUIFont__get_type_80001c(param_1);
  if (iVar1 == 2) {
    plVar2 = (long *)native_NGUIFont__get_replacement_8001ec(param_1);
    uVar4 = _StringLiteral__12eaac0;
    if (plVar2 != (long *)0x0) {
      lVar5 = *plVar2;
      if ((ulong)*(ushort *)(lVar5 + 0x12a) != 0) {
        uVar6 = 0;
        piVar7 = (int *)(*(long *)(lVar5 + 0xb0) + 8);
        do {
          if (*(long *)(piVar7 + -2) == _INGUIFont_TypeInfo_12d4c70) {
            puVar3 = (undefined8 *)(lVar5 + (long)(*piVar7 + 0x16) * 0x10 + 0x138);
            goto LAB_00802014;
          }
          uVar6 = uVar6 + 1;
          piVar7 = piVar7 + 4;
        } while (uVar6 < *(ushort *)(lVar5 + 0x12a));
      }
      puVar3 = (undefined8 *)native_sub_3c9b34(plVar2,_INGUIFont_TypeInfo_12d4c70,0x16);
LAB_00802014:
                    /* WARNING: Could not recover jumptable at 0x00802024. Too many branches */
                    /* WARNING: Treating indirect jump as call */
      uVar4 = (*(code *)*puVar3)(plVar2,puVar3[1]);
      return uVar4;
    }
  }
  else {
    if (*(long *)(param_1 + 0x38) == 0) {
                    /* WARNING: Subroutine does not return */
      native_sub_432810();
    }
    uVar4 = *(undefined8 *)(*(long *)(param_1 + 0x38) + 0x20);
  }
  return uVar4;
}



/* NGUIFont$$set_spriteName @ 0x80202c
 * void NGUIFont__set_spriteName (NGUIFont_o* __this, System_String_o* value, const MethodInfo* method); */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* NGUIFont$$set_spriteName
   void NGUIFont__set_spriteName (NGUIFont_o* __this, System_String_o* value, const MethodInfo*
   method); */

void native_NGUIFont__set_spriteName_80202c(long param_1,undefined8 param_2)

{
  ulong *puVar1;
  uint uVar2;
  char cVar3;
  bool bVar4;
  int iVar5;
  undefined8 uVar6;
  long lVar7;
  long *plVar8;
  undefined8 *puVar9;
  long lVar10;
  ulong uVar11;
  int *piVar12;
  long lVar13;
  uint uVar14;
  
  if ((bRam0000000001340445 & 1) == 0) {
    native_sub_43273c(&INGUIFont_TypeInfo_12d4c70);
    bRam0000000001340445 = 1;
  }
  iVar5 = native_NGUIFont__get_type_80001c(param_1);
  if (iVar5 == 2) {
    plVar8 = (long *)native_NGUIFont__get_replacement_8001ec(param_1);
    if (plVar8 == (long *)0x0) {
      return;
    }
    lVar10 = *plVar8;
    if ((ulong)*(ushort *)(lVar10 + 0x12a) != 0) {
      uVar11 = 0;
      piVar12 = (int *)(*(long *)(lVar10 + 0xb0) + 8);
      do {
        if (*(long *)(piVar12 + -2) == _INGUIFont_TypeInfo_12d4c70) {
          puVar9 = (undefined8 *)(lVar10 + (long)(*piVar12 + 0x17) * 0x10 + 0x138);
          goto LAB_00802138;
        }
        uVar11 = uVar11 + 1;
        piVar12 = piVar12 + 4;
      } while (uVar11 < *(ushort *)(lVar10 + 0x12a));
    }
    puVar9 = (undefined8 *)native_sub_3c9b34(plVar8,_INGUIFont_TypeInfo_12d4c70,0x17);
LAB_00802138:
                    /* WARNING: Could not recover jumptable at 0x00802150. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*(code *)*puVar9)(plVar8,param_2,puVar9[1]);
    return;
  }
  if (*(long *)(param_1 + 0x38) != 0) {
    uVar11 = native_System_String__op_Inequality_afbbb4
                       (*(undefined8 *)(*(long *)(param_1 + 0x38) + 0x20),param_2,0);
    if ((uVar11 & 1) == 0) {
      return;
    }
    if (*(long *)(param_1 + 0x38) != 0) {
      puVar9 = (undefined8 *)(*(long *)(param_1 + 0x38) + 0x20);
      *puVar9 = param_2;
      native_sub_4326e0(puVar9,param_2);
      if ((bRam0000000001340456 & 1) == 0) {
        native_sub_43273c(&INGUIFont_TypeInfo_12d4c70);
        native_sub_43273c(&Method_System_Collections_Generic_List_BMSymbol__get_Count___12dc578);
        native_sub_43273c(&Method_System_Collections_Generic_List_BMSymbol__get_Item___12dc580);
        native_sub_43273c(&Method_NGUITools_FindActive_UILabel____12e5710);
        native_sub_43273c(&NGUITools_TypeInfo_12d53c8);
        bRam0000000001340456 = 1;
      }
      plVar8 = (long *)native_NGUIFont__get_replacement_8001ec(param_1);
      if (plVar8 != (long *)0x0) {
        lVar10 = *plVar8;
        if ((ulong)*(ushort *)(lVar10 + 0x12a) != 0) {
          uVar11 = 0;
          piVar12 = (int *)(*(long *)(lVar10 + 0xb0) + 8);
          do {
            if (*(long *)(piVar12 + -2) == _INGUIFont_TypeInfo_12d4c70) {
              puVar9 = (undefined8 *)(lVar10 + (long)(*piVar12 + 0x27) * 0x10 + 0x138);
              goto LAB_00800f18;
            }
            uVar11 = uVar11 + 1;
            piVar12 = piVar12 + 4;
          } while (uVar11 < *(ushort *)(lVar10 + 0x12a));
        }
        puVar9 = (undefined8 *)native_sub_3c9b34(plVar8,_INGUIFont_TypeInfo_12d4c70,0x27);
LAB_00800f18:
        (*(code *)*puVar9)(plVar8,puVar9[1]);
      }
      *(undefined8 *)(param_1 + 0x90) = 0;
      native_sub_4326e0((undefined8 *)(param_1 + 0x90),0);
      if (((*(byte *)(_NGUITools_TypeInfo_12d53c8 + 0x133) >> 2 & 1) != 0) &&
         (*(int *)(_NGUITools_TypeInfo_12d53c8 + 0xe0) == 0)) {
        native_sub_4327ec();
      }
      lVar10 = native_NGUITools__FindActive_AudioListener__4a5b30
                         (_Method_NGUITools_FindActive_UILabel____12e5710);
      if (lVar10 != 0) {
        iVar5 = (int)*(undefined8 *)(lVar10 + 0x18);
        if (0 < iVar5) {
          if (iVar5 != 0) {
            uVar14 = 0;
            do {
              lVar13 = *(long *)(lVar10 + (long)(int)uVar14 * 8 + 0x20);
              if (lVar13 == 0) goto LAB_008010f4;
              uVar11 = native_UnityEngine_Behaviour__get_enabled_8d7acc(lVar13,0);
              if ((uVar11 & 1) != 0) {
                uVar6 = native_UnityEngine_Component__get_gameObject_8da66c(lVar13,0);
                if (((*(byte *)(_NGUITools_TypeInfo_12d53c8 + 0x133) >> 2 & 1) != 0) &&
                   (*(int *)(_NGUITools_TypeInfo_12d53c8 + 0xe0) == 0)) {
                  native_sub_4327ec(_NGUITools_TypeInfo_12d53c8);
                }
                uVar11 = native_NGUITools__GetActive_72d0d4(uVar6,0);
                if ((uVar11 & 1) != 0) {
                  uVar6 = native_UILabel__get_font_ae77e8(lVar13,0);
                  if (((*(byte *)(_NGUITools_TypeInfo_12d53c8 + 0x133) >> 2 & 1) != 0) &&
                     (*(int *)(_NGUITools_TypeInfo_12d53c8 + 0xe0) == 0)) {
                    native_sub_4327ec(_NGUITools_TypeInfo_12d53c8);
                  }
                  uVar11 = native_NGUITools__CheckIfRelated_7372e0(param_1,uVar6,0);
                  if ((uVar11 & 1) != 0) {
                    uVar6 = native_UILabel__get_font_ae77e8(lVar13,0);
                    native_UILabel__set_font_ae79c4(lVar13,0,0);
                    native_UILabel__set_font_ae79c4(lVar13,uVar6,0);
                  }
                }
              }
              uVar14 = uVar14 + 1;
              if (iVar5 <= (int)uVar14) goto LAB_0080106c;
            } while (uVar14 < *(uint *)(lVar10 + 0x18));
          }
          uVar6 = native_sub_43283c();
                    /* WARNING: Subroutine does not return */
          native_sub_4327dc(uVar6,0);
        }
LAB_0080106c:
        lVar10 = native_NGUIFont__get_symbols_800814(param_1);
        if (lVar10 != 0) {
          uVar14 = *(uint *)(lVar10 + 0x18);
          if (0 < (int)uVar14) {
            lVar13 = 0;
            uVar2 = uVar14;
            while( true ) {
              if (uVar2 <= (uint)lVar13) {
                native_System_ThrowHelper__ThrowArgumentOutOfRangeException_9fe0f4(0);
              }
              lVar7 = *(long *)(*(long *)(lVar10 + 0x10) + lVar13 * 8 + 0x20);
              if (lVar7 == 0) goto LAB_008010f4;
              native_BMSymbol__MarkAsChanged_dd21c4(lVar7,0);
              if ((int)uVar14 <= (int)((uint)lVar13 + 1)) break;
              uVar2 = *(uint *)(lVar10 + 0x18);
              lVar13 = lVar13 + 1;
            }
          }
          puVar9 = (undefined8 *)(param_1 + 0x70);
          *puVar9 = 0;
          if (iRam0000000001345318 != 0) {
            puVar1 = (ulong *)(((ulong)puVar9 >> 0x12 & 0x7fff) * 8 + 0x138ecd8);
            do {
              cVar3 = '\x01';
              bVar4 = (bool)ExclusiveMonitorPass(puVar1,0x10);
              if (bVar4) {
                *puVar1 = *puVar1 | 1L << ((ulong)puVar9 >> 0xc & 0x3f);
                cVar3 = ExclusiveMonitorsStatus();
              }
            } while (cVar3 != '\0');
          }
          return;
        }
      }
LAB_008010f4:
                    /* WARNING: Subroutine does not return */
      native_sub_432810();
    }
  }
                    /* WARNING: Subroutine does not return */
  native_sub_432810();
}



/* NGUIFont$$get_isValid @ 0x802158
 * bool NGUIFont__get_isValid (NGUIFont_o* __this, const MethodInfo* method); */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* NGUIFont$$get_isValid
   bool NGUIFont__get_isValid (NGUIFont_o* __this, const MethodInfo* method); */

bool native_NGUIFont__get_isValid_802158(long param_1)

{
  ulong uVar1;
  long lVar2;
  undefined8 uVar3;
  
  if ((bRam0000000001340446 & 1) == 0) {
    native_sub_43273c(&UnityEngine_Object_TypeInfo_12d54e0);
    bRam0000000001340446 = 1;
  }
  uVar3 = *(undefined8 *)(param_1 + 0x78);
  if (((*(byte *)(_UnityEngine_Object_TypeInfo_12d54e0 + 0x133) >> 2 & 1) != 0) &&
     (*(int *)(_UnityEngine_Object_TypeInfo_12d54e0 + 0xe0) == 0)) {
    native_sub_4327ec();
  }
  uVar1 = native_UnityEngine_Object__op_Inequality_8d76fc(uVar3,0,0);
  if ((uVar1 & 1) != 0) {
    return true;
  }
  lVar2 = *(long *)(param_1 + 0x38);
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



/* NGUIFont$$get_size @ 0x8021ec
 * int32_t NGUIFont__get_size (NGUIFont_o* __this, const MethodInfo* method); */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* NGUIFont$$get_size
   int32_t NGUIFont__get_size (NGUIFont_o* __this, const MethodInfo* method); */

ulong native_NGUIFont__get_size_8021ec(long param_1)

{
  uint uVar1;
  int iVar2;
  long *plVar3;
  undefined8 *puVar4;
  long lVar5;
  ulong uVar6;
  int *piVar7;
  
  if ((bRam0000000001340447 & 1) == 0) {
    native_sub_43273c(&INGUIFont_TypeInfo_12d4c70);
    bRam0000000001340447 = 1;
  }
  iVar2 = native_NGUIFont__get_type_80001c(param_1);
  if (iVar2 == 2) {
    plVar3 = (long *)native_NGUIFont__get_replacement_8001ec(param_1);
    if (plVar3 != (long *)0x0) {
      lVar5 = *plVar3;
      if ((ulong)*(ushort *)(lVar5 + 0x12a) != 0) {
        uVar6 = 0;
        piVar7 = (int *)(*(long *)(lVar5 + 0xb0) + 8);
        do {
          if (*(long *)(piVar7 + -2) == _INGUIFont_TypeInfo_12d4c70) {
            puVar4 = (undefined8 *)(lVar5 + (long)(*piVar7 + 0x19) * 0x10 + 0x138);
            goto LAB_008022d4;
          }
          uVar6 = uVar6 + 1;
          piVar7 = piVar7 + 4;
        } while (uVar6 < *(ushort *)(lVar5 + 0x12a));
      }
      puVar4 = (undefined8 *)native_sub_3c9b34(plVar3,_INGUIFont_TypeInfo_12d4c70,0x19);
LAB_008022d4:
                    /* WARNING: Could not recover jumptable at 0x008022e4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
      uVar6 = (*(code *)*puVar4)(plVar3,puVar4[1]);
      return uVar6;
    }
    lVar5 = *(long *)(param_1 + 0x38);
    if (lVar5 == 0) {
                    /* WARNING: Subroutine does not return */
      native_sub_432810();
    }
  }
  else {
    uVar6 = native_NGUIFont__get_isDynamic_8023c8(param_1);
    if (((uVar6 & 1) != 0) || (lVar5 = *(long *)(param_1 + 0x38), lVar5 == 0)) {
      uVar1 = *(uint *)(param_1 + 0x80);
      goto LAB_008022b8;
    }
  }
  uVar1 = *(uint *)(lVar5 + 0x10);
LAB_008022b8:
  return (ulong)uVar1;
}



/* NGUIFont$$set_size @ 0x8022ec
 * void NGUIFont__set_size (NGUIFont_o* __this, int32_t value, const MethodInfo* method); */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* NGUIFont$$set_size
   void NGUIFont__set_size (NGUIFont_o* __this, int32_t value, const MethodInfo* method); */

void native_NGUIFont__set_size_8022ec(long param_1,undefined4 param_2)

{
  long *plVar1;
  undefined8 *puVar2;
  long lVar3;
  ulong uVar4;
  int *piVar5;
  
  if ((bRam0000000001340448 & 1) == 0) {
    native_sub_43273c(&INGUIFont_TypeInfo_12d4c70);
    bRam0000000001340448 = 1;
  }
  plVar1 = (long *)native_NGUIFont__get_replacement_8001ec(param_1);
  if (plVar1 == (long *)0x0) {
    *(undefined4 *)(param_1 + 0x80) = param_2;
    return;
  }
  lVar3 = *plVar1;
  if ((ulong)*(ushort *)(lVar3 + 0x12a) != 0) {
    uVar4 = 0;
    piVar5 = (int *)(*(long *)(lVar3 + 0xb0) + 8);
    do {
      if (*(long *)(piVar5 + -2) == _INGUIFont_TypeInfo_12d4c70) {
        puVar2 = (undefined8 *)(lVar3 + (long)(*piVar5 + 0x1a) * 0x10 + 0x138);
        goto LAB_008023ac;
      }
      uVar4 = uVar4 + 1;
      piVar5 = piVar5 + 4;
    } while (uVar4 < *(ushort *)(lVar3 + 0x12a));
  }
  puVar2 = (undefined8 *)native_sub_3c9b34(plVar1,_INGUIFont_TypeInfo_12d4c70,0x1a);
LAB_008023ac:
                    /* WARNING: Could not recover jumptable at 0x008023c4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)*puVar2)(plVar1,param_2,puVar2[1]);
  return;
}



/* NGUIFont$$get_defaultSize @ 0x8021f0
 * int32_t NGUIFont__get_defaultSize (NGUIFont_o* __this, const MethodInfo* method); */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* NGUIFont$$get_defaultSize
   int32_t NGUIFont__get_defaultSize (NGUIFont_o* __this, const MethodInfo* method); */

ulong native_NGUIFont__get_defaultSize_8021f0(long param_1)

{
  uint uVar1;
  int iVar2;
  long *plVar3;
  undefined8 *puVar4;
  long lVar5;
  ulong uVar6;
  int *piVar7;
  
  if ((bRam0000000001340447 & 1) == 0) {
    native_sub_43273c(&INGUIFont_TypeInfo_12d4c70);
    bRam0000000001340447 = 1;
  }
  iVar2 = native_NGUIFont__get_type_80001c(param_1);
  if (iVar2 == 2) {
    plVar3 = (long *)native_NGUIFont__get_replacement_8001ec(param_1);
    if (plVar3 != (long *)0x0) {
      lVar5 = *plVar3;
      if ((ulong)*(ushort *)(lVar5 + 0x12a) != 0) {
        uVar6 = 0;
        piVar7 = (int *)(*(long *)(lVar5 + 0xb0) + 8);
        do {
          if (*(long *)(piVar7 + -2) == _INGUIFont_TypeInfo_12d4c70) {
            puVar4 = (undefined8 *)(lVar5 + (long)(*piVar7 + 0x19) * 0x10 + 0x138);
            goto LAB_008022d4;
          }
          uVar6 = uVar6 + 1;
          piVar7 = piVar7 + 4;
        } while (uVar6 < *(ushort *)(lVar5 + 0x12a));
      }
      puVar4 = (undefined8 *)native_sub_3c9b34(plVar3,_INGUIFont_TypeInfo_12d4c70,0x19);
LAB_008022d4:
                    /* WARNING: Could not recover jumptable at 0x008022e4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
      uVar6 = (*(code *)*puVar4)(plVar3,puVar4[1]);
      return uVar6;
    }
    lVar5 = *(long *)(param_1 + 0x38);
    if (lVar5 == 0) {
                    /* WARNING: Subroutine does not return */
      native_sub_432810();
    }
  }
  else {
    uVar6 = native_NGUIFont__get_isDynamic_8023c8(param_1);
    if (((uVar6 & 1) != 0) || (lVar5 = *(long *)(param_1 + 0x38), lVar5 == 0)) {
      uVar1 = *(uint *)(param_1 + 0x80);
      goto LAB_008022b8;
    }
  }
  uVar1 = *(uint *)(lVar5 + 0x10);
LAB_008022b8:
  return (ulong)uVar1;
}



/* NGUIFont$$set_defaultSize @ 0x8022f0
 * void NGUIFont__set_defaultSize (NGUIFont_o* __this, int32_t value, const MethodInfo* method); */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* NGUIFont$$set_defaultSize
   void NGUIFont__set_defaultSize (NGUIFont_o* __this, int32_t value, const MethodInfo* method); */

void native_NGUIFont__set_defaultSize_8022f0(long param_1,undefined4 param_2)

{
  long *plVar1;
  undefined8 *puVar2;
  long lVar3;
  ulong uVar4;
  int *piVar5;
  
  if ((bRam0000000001340448 & 1) == 0) {
    native_sub_43273c(&INGUIFont_TypeInfo_12d4c70);
    bRam0000000001340448 = 1;
  }
  plVar1 = (long *)native_NGUIFont__get_replacement_8001ec(param_1);
  if (plVar1 == (long *)0x0) {
    *(undefined4 *)(param_1 + 0x80) = param_2;
    return;
  }
  lVar3 = *plVar1;
  if ((ulong)*(ushort *)(lVar3 + 0x12a) != 0) {
    uVar4 = 0;
    piVar5 = (int *)(*(long *)(lVar3 + 0xb0) + 8);
    do {
      if (*(long *)(piVar5 + -2) == _INGUIFont_TypeInfo_12d4c70) {
        puVar2 = (undefined8 *)(lVar3 + (long)(*piVar5 + 0x1a) * 0x10 + 0x138);
        goto LAB_008023ac;
      }
      uVar4 = uVar4 + 1;
      piVar5 = piVar5 + 4;
    } while (uVar4 < *(ushort *)(lVar3 + 0x12a));
  }
  puVar2 = (undefined8 *)native_sub_3c9b34(plVar1,_INGUIFont_TypeInfo_12d4c70,0x1a);
LAB_008023ac:
                    /* WARNING: Could not recover jumptable at 0x008023c4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)*puVar2)(plVar1,param_2,puVar2[1]);
  return;
}



/* NGUIFont$$get_spaceWidth @ 0x8024ec
 * int32_t NGUIFont__get_spaceWidth (NGUIFont_o* __this, const MethodInfo* method); */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* NGUIFont$$get_spaceWidth
   int32_t NGUIFont__get_spaceWidth (NGUIFont_o* __this, const MethodInfo* method); */

ulong native_NGUIFont__get_spaceWidth_8024ec(long param_1)

{
  int iVar1;
  long *plVar2;
  undefined8 *puVar3;
  long lVar4;
  ulong uVar5;
  int *piVar6;
  
  if ((bRam0000000001340449 & 1) == 0) {
    native_sub_43273c(&INGUIFont_TypeInfo_12d4c70);
    bRam0000000001340449 = 1;
  }
  iVar1 = native_NGUIFont__get_type_80001c(param_1);
  if ((iVar1 != 2) ||
     (plVar2 = (long *)native_NGUIFont__get_replacement_8001ec(param_1), plVar2 == (long *)0x0)) {
    return (ulong)*(uint *)(param_1 + 0x88);
  }
  lVar4 = *plVar2;
  if ((ulong)*(ushort *)(lVar4 + 0x12a) != 0) {
    uVar5 = 0;
    piVar6 = (int *)(*(long *)(lVar4 + 0xb0) + 8);
    do {
      if (*(long *)(piVar6 + -2) == _INGUIFont_TypeInfo_12d4c70) {
        puVar3 = (undefined8 *)(lVar4 + (long)(*piVar6 + 0x1b) * 0x10 + 0x138);
        goto LAB_008025ac;
      }
      uVar5 = uVar5 + 1;
      piVar6 = piVar6 + 4;
    } while (uVar5 < *(ushort *)(lVar4 + 0x12a));
  }
  puVar3 = (undefined8 *)native_sub_3c9b34(plVar2,_INGUIFont_TypeInfo_12d4c70,0x1b);
LAB_008025ac:
                    /* WARNING: Could not recover jumptable at 0x008025bc. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  uVar5 = (*(code *)*puVar3)(plVar2,puVar3[1]);
  return uVar5;
}



/* NGUIFont$$set_spaceWidth @ 0x8025c0
 * void NGUIFont__set_spaceWidth (NGUIFont_o* __this, int32_t value, const MethodInfo* method); */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* NGUIFont$$set_spaceWidth
   void NGUIFont__set_spaceWidth (NGUIFont_o* __this, int32_t value, const MethodInfo* method); */

void native_NGUIFont__set_spaceWidth_8025c0(long param_1,undefined4 param_2)

{
  int iVar1;
  long *plVar2;
  undefined8 *puVar3;
  long lVar4;
  ulong uVar5;
  int *piVar6;
  
  if ((bRam000000000134044a & 1) == 0) {
    native_sub_43273c(&INGUIFont_TypeInfo_12d4c70);
    bRam000000000134044a = 1;
  }
  iVar1 = native_NGUIFont__get_type_80001c(param_1);
  if (iVar1 == 2) {
    plVar2 = (long *)native_NGUIFont__get_replacement_8001ec(param_1);
    if (plVar2 != (long *)0x0) {
      lVar4 = *plVar2;
      if ((ulong)*(ushort *)(lVar4 + 0x12a) != 0) {
        uVar5 = 0;
        piVar6 = (int *)(*(long *)(lVar4 + 0xb0) + 8);
        do {
          if (*(long *)(piVar6 + -2) == _INGUIFont_TypeInfo_12d4c70) {
            puVar3 = (undefined8 *)(lVar4 + (long)(*piVar6 + 0x1c) * 0x10 + 0x138);
            goto LAB_0080268c;
          }
          uVar5 = uVar5 + 1;
          piVar6 = piVar6 + 4;
        } while (uVar5 < *(ushort *)(lVar4 + 0x12a));
      }
      puVar3 = (undefined8 *)native_sub_3c9b34(plVar2,_INGUIFont_TypeInfo_12d4c70,0x1c);
LAB_0080268c:
                    /* WARNING: Could not recover jumptable at 0x008026a4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
      (*(code *)*puVar3)(plVar2,param_2,puVar3[1]);
      return;
    }
  }
  else {
    *(undefined4 *)(param_1 + 0x88) = param_2;
  }
  return;
}



/* NGUIFont$$get_sprite @ 0x8009d0
 * UISpriteData_o* NGUIFont__get_sprite (NGUIFont_o* __this, const MethodInfo* method); */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* NGUIFont$$get_sprite
   UISpriteData_o* NGUIFont__get_sprite (NGUIFont_o* __this, const MethodInfo* method); */

long native_NGUIFont__get_sprite_8009d0(long param_1)

{
  uint uVar1;
  uint uVar2;
  int iVar3;
  long *plVar4;
  undefined8 *puVar5;
  long lVar6;
  long lVar7;
  ulong uVar8;
  int *piVar9;
  long *plVar10;
  undefined8 uVar11;
  long lVar12;
  
  if ((bRam000000000134044b & 1) == 0) {
    native_sub_43273c(&INGUIAtlas_TypeInfo_12d4c68);
    native_sub_43273c(&INGUIFont_TypeInfo_12d4c70);
    native_sub_43273c(&Method_System_Collections_Generic_List_BMSymbol__get_Count___12dc578);
    native_sub_43273c(&Method_System_Collections_Generic_List_BMSymbol__get_Item___12dc580);
    bRam000000000134044b = 1;
  }
  iVar3 = native_NGUIFont__get_type_80001c(param_1);
  if (iVar3 == 2) {
    plVar4 = (long *)native_NGUIFont__get_replacement_8001ec(param_1);
    if (plVar4 == (long *)0x0) {
      return 0;
    }
    lVar7 = *plVar4;
    if ((ulong)*(ushort *)(lVar7 + 0x12a) != 0) {
      uVar8 = 0;
      piVar9 = (int *)(*(long *)(lVar7 + 0xb0) + 8);
      do {
        if (*(long *)(piVar9 + -2) == _INGUIFont_TypeInfo_12d4c70) {
          puVar5 = (undefined8 *)(lVar7 + (long)(*piVar9 + 0x1d) * 0x10 + 0x138);
          goto LAB_00800b40;
        }
        uVar8 = uVar8 + 1;
        piVar9 = piVar9 + 4;
      } while (uVar8 < *(ushort *)(lVar7 + 0x12a));
    }
    puVar5 = (undefined8 *)native_sub_3c9b34(plVar4,_INGUIFont_TypeInfo_12d4c70,0x1d);
LAB_00800b40:
                    /* WARNING: Could not recover jumptable at 0x00800b58. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    lVar7 = (*(code *)*puVar5)(plVar4,puVar5[1]);
    return lVar7;
  }
  plVar4 = (long *)native_sub_4327f8(*(undefined8 *)(param_1 + 0x40),_INGUIAtlas_TypeInfo_12d4c68);
  plVar10 = (long *)(param_1 + 0x90);
  if ((((plVar4 == (long *)0x0) || (*plVar10 != 0)) || (*(long *)(param_1 + 0x38) == 0)) ||
     (uVar8 = native_System_String__IsNullOrEmpty_b09430
                        (*(undefined8 *)(*(long *)(param_1 + 0x38) + 0x20),0), (uVar8 & 1) != 0))
  goto LAB_00800c90;
  if (*(long *)(param_1 + 0x38) == 0) goto LAB_00800cc0;
  lVar7 = *plVar4;
  uVar11 = *(undefined8 *)(*(long *)(param_1 + 0x38) + 0x20);
  if ((ulong)*(ushort *)(lVar7 + 0x12a) != 0) {
    uVar8 = 0;
    piVar9 = (int *)(*(long *)(lVar7 + 0xb0) + 8);
    do {
      if (*(long *)(piVar9 + -2) == _INGUIAtlas_TypeInfo_12d4c68) {
        puVar5 = (undefined8 *)(lVar7 + (long)(*piVar9 + 10) * 0x10 + 0x138);
        goto LAB_00800b6c;
      }
      uVar8 = uVar8 + 1;
      piVar9 = piVar9 + 4;
    } while (uVar8 < *(ushort *)(lVar7 + 0x12a));
  }
  puVar5 = (undefined8 *)native_sub_3c9b34(plVar4,_INGUIAtlas_TypeInfo_12d4c68,10);
LAB_00800b6c:
  lVar7 = (*(code *)*puVar5)(plVar4,uVar11,puVar5[1]);
  *plVar10 = lVar7;
  native_sub_4326e0(plVar10,lVar7);
  if (*plVar10 == 0) {
    uVar11 = native_UnityEngine_Object__get_name_8e8098(param_1,0);
    lVar7 = *plVar4;
    if ((ulong)*(ushort *)(lVar7 + 0x12a) != 0) {
      uVar8 = 0;
      piVar9 = (int *)(*(long *)(lVar7 + 0xb0) + 8);
      do {
        if (*(long *)(piVar9 + -2) == _INGUIAtlas_TypeInfo_12d4c68) {
          puVar5 = (undefined8 *)(lVar7 + (long)(*piVar9 + 10) * 0x10 + 0x138);
          goto LAB_00800bfc;
        }
        uVar8 = uVar8 + 1;
        piVar9 = piVar9 + 4;
      } while (uVar8 < *(ushort *)(lVar7 + 0x12a));
    }
    puVar5 = (undefined8 *)native_sub_3c9b34(plVar4,_INGUIAtlas_TypeInfo_12d4c68,10);
LAB_00800bfc:
    lVar7 = (*(code *)*puVar5)(plVar4,uVar11,puVar5[1]);
    *plVar10 = lVar7;
    native_sub_4326e0(plVar10,lVar7);
    if (*plVar10 != 0) goto LAB_00800c24;
    if (*(long *)(param_1 + 0x38) == 0) goto LAB_00800cc0;
    puVar5 = (undefined8 *)(*(long *)(param_1 + 0x38) + 0x20);
    *puVar5 = 0;
    native_sub_4326e0(puVar5,0);
  }
  else {
LAB_00800c24:
    native_NGUIFont__UpdateUVRect_8026a8(param_1);
  }
  lVar7 = native_NGUIFont__get_symbols_800814(param_1);
  if (lVar7 == 0) {
LAB_00800cc0:
                    /* WARNING: Subroutine does not return */
    native_sub_432810();
  }
  uVar1 = *(uint *)(lVar7 + 0x18);
  if (0 < (int)uVar1) {
    lVar12 = 0;
    uVar2 = uVar1;
    while( true ) {
      if (uVar2 <= (uint)lVar12) {
        native_System_ThrowHelper__ThrowArgumentOutOfRangeException_9fe0f4(0);
      }
      lVar6 = *(long *)(*(long *)(lVar7 + 0x10) + lVar12 * 8 + 0x20);
      if (lVar6 == 0) goto LAB_00800cc0;
      native_BMSymbol__MarkAsChanged_dd21c4(lVar6,0);
      if ((int)uVar1 <= (int)((uint)lVar12 + 1)) break;
      uVar2 = *(uint *)(lVar7 + 0x18);
      lVar12 = lVar12 + 1;
    }
  }
LAB_00800c90:
  return *plVar10;
}



/* NGUIFont$$get_replacement @ 0x8001ec
 * INGUIFont_o* NGUIFont__get_replacement (NGUIFont_o* __this, const MethodInfo* method); */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* NGUIFont$$get_replacement
   INGUIFont_o* NGUIFont__get_replacement (NGUIFont_o* __this, const MethodInfo* method); */

long * native_NGUIFont__get_replacement_8001ec(long param_1)

{
  long lVar1;
  int iVar2;
  ulong uVar3;
  long *plVar4;
  undefined8 uVar5;
  long lVar6;
  long *plStack_28;
  
  if ((bRam000000000134044c & 1) == 0) {
    native_sub_43273c(&INGUIFont_TypeInfo_12d4c70);
    native_sub_43273c(&UnityEngine_Object_TypeInfo_12d54e0);
    bRam000000000134044c = 1;
  }
  uVar5 = *(undefined8 *)(param_1 + 0x48);
  if (((*(byte *)(_UnityEngine_Object_TypeInfo_12d54e0 + 0x133) >> 2 & 1) != 0) &&
     (*(int *)(_UnityEngine_Object_TypeInfo_12d54e0 + 0xe0) == 0)) {
    native_sub_4327ec();
  }
  uVar3 = native_UnityEngine_Object__op_Equality_8e9a3c(uVar5,0,0);
  lVar1 = _INGUIFont_TypeInfo_12d4c70;
  if ((uVar3 & 1) == 0) {
    plVar4 = *(long **)(param_1 + 0x48);
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



/* NGUIFont$$set_replacement @ 0x8028f8
 * void NGUIFont__set_replacement (NGUIFont_o* __this, INGUIFont_o* value, const MethodInfo* method); */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* NGUIFont$$set_replacement
   void NGUIFont__set_replacement (NGUIFont_o* __this, INGUIFont_o* value, const MethodInfo*
   method); */

void native_NGUIFont__set_replacement_8028f8(long *param_1,long *param_2)

{
  ulong *puVar1;
  uint uVar2;
  char cVar3;
  bool bVar4;
  long *plVar5;
  undefined8 uVar6;
  long lVar7;
  long *plVar8;
  undefined8 *puVar9;
  long lVar10;
  ulong uVar11;
  int *piVar12;
  long lVar13;
  long *plVar14;
  int iVar15;
  uint uVar16;
  
  if ((bRam000000000134044d & 1) == 0) {
    native_sub_43273c(&INGUIFont_TypeInfo_12d4c70);
    native_sub_43273c(&UnityEngine_Object_TypeInfo_12d54e0);
    bRam000000000134044d = 1;
  }
  plVar14 = param_1 + 9;
  plVar5 = (long *)0x0;
  if (param_1 != param_2) {
    plVar5 = param_2;
  }
  plVar8 = (long *)native_sub_4327f8(*plVar14,_INGUIFont_TypeInfo_12d4c70);
  if (plVar8 == plVar5) {
    return;
  }
  if (plVar5 != (long *)0x0) {
    lVar10 = *plVar5;
    if ((ulong)*(ushort *)(lVar10 + 0x12a) != 0) {
      uVar11 = 0;
      piVar12 = (int *)(*(long *)(lVar10 + 0xb0) + 8);
      do {
        if (*(long *)(piVar12 + -2) == _INGUIFont_TypeInfo_12d4c70) {
          puVar9 = (undefined8 *)(lVar10 + (long)(*piVar12 + 0x1e) * 0x10 + 0x138);
          goto LAB_008029d8;
        }
        uVar11 = uVar11 + 1;
        piVar12 = piVar12 + 4;
      } while (uVar11 < *(ushort *)(lVar10 + 0x12a));
    }
    puVar9 = (undefined8 *)native_sub_3c9b34(plVar5,_INGUIFont_TypeInfo_12d4c70,0x1e);
LAB_008029d8:
    plVar8 = (long *)(*(code *)*puVar9)(plVar5,puVar9[1]);
    if (plVar8 == param_1) {
      lVar10 = *plVar5;
      if ((ulong)*(ushort *)(lVar10 + 0x12a) != 0) {
        uVar11 = 0;
        piVar12 = (int *)(*(long *)(lVar10 + 0xb0) + 8);
        do {
          if (*(long *)(piVar12 + -2) == _INGUIFont_TypeInfo_12d4c70) {
            puVar9 = (undefined8 *)(lVar10 + (long)(*piVar12 + 0x1f) * 0x10 + 0x138);
            goto LAB_00802a44;
          }
          uVar11 = uVar11 + 1;
          piVar12 = piVar12 + 4;
        } while (uVar11 < *(ushort *)(lVar10 + 0x12a));
      }
      puVar9 = (undefined8 *)native_sub_3c9b34(plVar5,_INGUIFont_TypeInfo_12d4c70,0x1f);
LAB_00802a44:
      (*(code *)*puVar9)(plVar5,0,puVar9[1]);
    }
  }
  lVar10 = *plVar14;
  if (((*(byte *)(_UnityEngine_Object_TypeInfo_12d54e0 + 0x133) >> 2 & 1) != 0) &&
     (*(int *)(_UnityEngine_Object_TypeInfo_12d54e0 + 0xe0) == 0)) {
    native_sub_4327ec();
  }
  uVar11 = native_UnityEngine_Object__op_Inequality_8d76fc(lVar10,0,0);
  if ((uVar11 & 1) != 0) {
    native_NGUIFont__MarkAsChanged_800e3c(param_1);
  }
  if (plVar5 != (long *)0x0) {
    if (*(byte *)(_UnityEngine_Object_TypeInfo_12d54e0 + 300) <= *(byte *)(*plVar5 + 300)) {
      plVar8 = plVar5;
      if (*(long *)(*(long *)(*plVar5 + 200) +
                    (ulong)*(byte *)(_UnityEngine_Object_TypeInfo_12d54e0 + 300) * 8 + -8) !=
          _UnityEngine_Object_TypeInfo_12d54e0) {
        plVar8 = (long *)0x0;
      }
      goto LAB_00802acc;
    }
  }
  plVar8 = (long *)0x0;
LAB_00802acc:
  *plVar14 = (long)plVar8;
  native_sub_4326e0(plVar14);
  if (plVar5 != (long *)0x0) {
    *(undefined4 *)(param_1 + 0x13) = 0xffffffff;
    param_1[4] = 0;
    native_sub_4326e0(param_1 + 4,0);
    param_1[7] = 0;
    native_sub_4326e0(param_1 + 7,0);
    param_1[0xf] = 0;
    native_sub_4326e0(param_1 + 0xf,0);
  }
  if ((bRam0000000001340456 & 1) == 0) {
    native_sub_43273c(&INGUIFont_TypeInfo_12d4c70);
    native_sub_43273c(&Method_System_Collections_Generic_List_BMSymbol__get_Count___12dc578);
    native_sub_43273c(&Method_System_Collections_Generic_List_BMSymbol__get_Item___12dc580);
    native_sub_43273c(&Method_NGUITools_FindActive_UILabel____12e5710);
    native_sub_43273c(&NGUITools_TypeInfo_12d53c8);
    bRam0000000001340456 = 1;
  }
  plVar5 = (long *)native_NGUIFont__get_replacement_8001ec(param_1);
  if (plVar5 != (long *)0x0) {
    lVar10 = *plVar5;
    if ((ulong)*(ushort *)(lVar10 + 0x12a) != 0) {
      uVar11 = 0;
      piVar12 = (int *)(*(long *)(lVar10 + 0xb0) + 8);
      do {
        if (*(long *)(piVar12 + -2) == _INGUIFont_TypeInfo_12d4c70) {
          puVar9 = (undefined8 *)(lVar10 + (long)(*piVar12 + 0x27) * 0x10 + 0x138);
          goto LAB_00800f18;
        }
        uVar11 = uVar11 + 1;
        piVar12 = piVar12 + 4;
      } while (uVar11 < *(ushort *)(lVar10 + 0x12a));
    }
    puVar9 = (undefined8 *)native_sub_3c9b34(plVar5,_INGUIFont_TypeInfo_12d4c70,0x27);
LAB_00800f18:
    (*(code *)*puVar9)(plVar5,puVar9[1]);
  }
  param_1[0x12] = 0;
  native_sub_4326e0(param_1 + 0x12,0);
  if (((*(byte *)(_NGUITools_TypeInfo_12d53c8 + 0x133) >> 2 & 1) != 0) &&
     (*(int *)(_NGUITools_TypeInfo_12d53c8 + 0xe0) == 0)) {
    native_sub_4327ec();
  }
  lVar10 = native_NGUITools__FindActive_AudioListener__4a5b30
                     (_Method_NGUITools_FindActive_UILabel____12e5710);
  if (lVar10 != 0) {
    iVar15 = (int)*(undefined8 *)(lVar10 + 0x18);
    if (0 < iVar15) {
      if (iVar15 != 0) {
        uVar16 = 0;
        do {
          lVar13 = *(long *)(lVar10 + (long)(int)uVar16 * 8 + 0x20);
          if (lVar13 == 0) goto LAB_008010f4;
          uVar11 = native_UnityEngine_Behaviour__get_enabled_8d7acc(lVar13,0);
          if ((uVar11 & 1) != 0) {
            uVar6 = native_UnityEngine_Component__get_gameObject_8da66c(lVar13,0);
            if (((*(byte *)(_NGUITools_TypeInfo_12d53c8 + 0x133) >> 2 & 1) != 0) &&
               (*(int *)(_NGUITools_TypeInfo_12d53c8 + 0xe0) == 0)) {
              native_sub_4327ec(_NGUITools_TypeInfo_12d53c8);
            }
            uVar11 = native_NGUITools__GetActive_72d0d4(uVar6,0);
            if ((uVar11 & 1) != 0) {
              uVar6 = native_UILabel__get_font_ae77e8(lVar13,0);
              if (((*(byte *)(_NGUITools_TypeInfo_12d53c8 + 0x133) >> 2 & 1) != 0) &&
                 (*(int *)(_NGUITools_TypeInfo_12d53c8 + 0xe0) == 0)) {
                native_sub_4327ec(_NGUITools_TypeInfo_12d53c8);
              }
              uVar11 = native_NGUITools__CheckIfRelated_7372e0(param_1,uVar6,0);
              if ((uVar11 & 1) != 0) {
                uVar6 = native_UILabel__get_font_ae77e8(lVar13,0);
                native_UILabel__set_font_ae79c4(lVar13,0,0);
                native_UILabel__set_font_ae79c4(lVar13,uVar6,0);
              }
            }
          }
          uVar16 = uVar16 + 1;
          if (iVar15 <= (int)uVar16) goto LAB_0080106c;
        } while (uVar16 < *(uint *)(lVar10 + 0x18));
      }
      uVar6 = native_sub_43283c();
                    /* WARNING: Subroutine does not return */
      native_sub_4327dc(uVar6,0);
    }
LAB_0080106c:
    lVar10 = native_NGUIFont__get_symbols_800814(param_1);
    if (lVar10 != 0) {
      uVar16 = *(uint *)(lVar10 + 0x18);
      if (0 < (int)uVar16) {
        lVar13 = 0;
        uVar2 = uVar16;
        while( true ) {
          if (uVar2 <= (uint)lVar13) {
            native_System_ThrowHelper__ThrowArgumentOutOfRangeException_9fe0f4(0);
          }
          lVar7 = *(long *)(*(long *)(lVar10 + 0x10) + lVar13 * 8 + 0x20);
          if (lVar7 == 0) goto LAB_008010f4;
          native_BMSymbol__MarkAsChanged_dd21c4(lVar7,0);
          if ((int)uVar16 <= (int)((uint)lVar13 + 1)) break;
          uVar2 = *(uint *)(lVar10 + 0x18);
          lVar13 = lVar13 + 1;
        }
      }
      param_1 = param_1 + 0xe;
      *param_1 = 0;
      if (iRam0000000001345318 != 0) {
        puVar1 = (ulong *)(((ulong)param_1 >> 0x12 & 0x7fff) * 8 + 0x138ecd8);
        do {
          cVar3 = '\x01';
          bVar4 = (bool)ExclusiveMonitorPass(puVar1,0x10);
          if (bVar4) {
            *puVar1 = *puVar1 | 1L << ((ulong)param_1 >> 0xc & 0x3f);
            cVar3 = ExclusiveMonitorsStatus();
          }
        } while (cVar3 != '\0');
      }
      return;
    }
  }
LAB_008010f4:
                    /* WARNING: Subroutine does not return */
  native_sub_432810();
}



/* NGUIFont$$get_finalFont @ 0x802b2c
 * INGUIFont_o* NGUIFont__get_finalFont (NGUIFont_o* __this, const MethodInfo* method); */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* NGUIFont$$get_finalFont
   INGUIFont_o* NGUIFont__get_finalFont (NGUIFont_o* __this, const MethodInfo* method); */

long * native_NGUIFont__get_finalFont_802b2c(long *param_1)

{
  bool bVar1;
  undefined8 *puVar2;
  long *plVar3;
  long lVar4;
  ulong uVar5;
  int *piVar6;
  uint uVar7;
  
  if ((bRam000000000134044e & 1) == 0) {
    native_sub_43273c(&INGUIFont_TypeInfo_12d4c70);
    bRam000000000134044e = 1;
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
          goto LAB_00802bc8;
        }
        uVar5 = uVar5 + 1;
        piVar6 = piVar6 + 4;
      } while (uVar5 < *(ushort *)(lVar4 + 0x12a));
    }
    puVar2 = (undefined8 *)native_sub_3c9b34(param_1,_INGUIFont_TypeInfo_12d4c70,0x1e);
LAB_00802bc8:
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



/* NGUIFont$$get_isDynamic @ 0x8023c8
 * bool NGUIFont__get_isDynamic (NGUIFont_o* __this, const MethodInfo* method); */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* NGUIFont$$get_isDynamic
   bool NGUIFont__get_isDynamic (NGUIFont_o* __this, const MethodInfo* method); */

ulong native_NGUIFont__get_isDynamic_8023c8(long param_1)

{
  int iVar1;
  uint uVar2;
  long *plVar3;
  undefined8 *puVar4;
  long lVar5;
  ulong uVar6;
  int *piVar7;
  undefined8 uVar8;
  
  if ((bRam000000000134044f & 1) == 0) {
    native_sub_43273c(&INGUIFont_TypeInfo_12d4c70);
    native_sub_43273c(&UnityEngine_Object_TypeInfo_12d54e0);
    bRam000000000134044f = 1;
  }
  iVar1 = native_NGUIFont__get_type_80001c(param_1);
  if (iVar1 == 3) {
    uVar8 = *(undefined8 *)(param_1 + 0x78);
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
    uVar2 = native_UnityEngine_Object__CompareBaseObjects_8e9aac(uVar8,0);
    return (ulong)(~uVar2 & 1);
  }
  if ((iVar1 != 2) ||
     (plVar3 = (long *)native_NGUIFont__get_replacement_8001ec(param_1), plVar3 == (long *)0x0)) {
    return 0;
  }
  lVar5 = *plVar3;
  if ((ulong)*(ushort *)(lVar5 + 0x12a) != 0) {
    uVar6 = 0;
    piVar7 = (int *)(*(long *)(lVar5 + 0xb0) + 8);
    do {
      if (*(long *)(piVar7 + -2) == _INGUIFont_TypeInfo_12d4c70) {
        puVar4 = (undefined8 *)(lVar5 + (long)(*piVar7 + 0x21) * 0x10 + 0x138);
        goto LAB_008024d8;
      }
      uVar6 = uVar6 + 1;
      piVar7 = piVar7 + 4;
    } while (uVar6 < *(ushort *)(lVar5 + 0x12a));
  }
  puVar4 = (undefined8 *)native_sub_3c9b34(plVar3,_INGUIFont_TypeInfo_12d4c70,0x21);
LAB_008024d8:
                    /* WARNING: Could not recover jumptable at 0x008024e8. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  uVar6 = (*(code *)*puVar4)(plVar3,puVar4[1]);
  return uVar6;
}



/* NGUIFont$$get_dynamicFont @ 0x802c00
 * UnityEngine_Font_o* NGUIFont__get_dynamicFont (NGUIFont_o* __this, const MethodInfo* method); */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* NGUIFont$$get_dynamicFont
   UnityEngine_Font_o* NGUIFont__get_dynamicFont (NGUIFont_o* __this, const MethodInfo* method); */

undefined8 native_NGUIFont__get_dynamicFont_802c00(long param_1)

{
  int iVar1;
  long *plVar2;
  undefined8 *puVar3;
  undefined8 uVar4;
  long lVar5;
  ulong uVar6;
  int *piVar7;
  
  if ((bRam0000000001340450 & 1) == 0) {
    native_sub_43273c(&INGUIFont_TypeInfo_12d4c70);
    bRam0000000001340450 = 1;
  }
  iVar1 = native_NGUIFont__get_type_80001c(param_1);
  if (iVar1 == 2) {
    plVar2 = (long *)native_NGUIFont__get_replacement_8001ec(param_1);
    uVar4 = 0;
    if (plVar2 != (long *)0x0) {
      lVar5 = *plVar2;
      if ((ulong)*(ushort *)(lVar5 + 0x12a) != 0) {
        uVar6 = 0;
        piVar7 = (int *)(*(long *)(lVar5 + 0xb0) + 8);
        do {
          if (*(long *)(piVar7 + -2) == _INGUIFont_TypeInfo_12d4c70) {
            puVar3 = (undefined8 *)(lVar5 + (long)(*piVar7 + 0x22) * 0x10 + 0x138);
            goto LAB_00802cc0;
          }
          uVar6 = uVar6 + 1;
          piVar7 = piVar7 + 4;
        } while (uVar6 < *(ushort *)(lVar5 + 0x12a));
      }
      puVar3 = (undefined8 *)native_sub_3c9b34(plVar2,_INGUIFont_TypeInfo_12d4c70,0x22);
LAB_00802cc0:
                    /* WARNING: Could not recover jumptable at 0x00802cd0. Too many branches */
                    /* WARNING: Treating indirect jump as call */
      uVar4 = (*(code *)*puVar3)(plVar2,puVar3[1]);
      return uVar4;
    }
  }
  else {
    uVar4 = *(undefined8 *)(param_1 + 0x78);
  }
  return uVar4;
}



/* NGUIFont$$set_dynamicFont @ 0x802cd4
 * void NGUIFont__set_dynamicFont (NGUIFont_o* __this, UnityEngine_Font_o* value, const MethodInfo* method); */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* NGUIFont$$set_dynamicFont
   void NGUIFont__set_dynamicFont (NGUIFont_o* __this, UnityEngine_Font_o* value, const MethodInfo*
   method); */

void native_NGUIFont__set_dynamicFont_802cd4(long param_1,undefined8 param_2)

{
  ulong *puVar1;
  uint uVar2;
  char cVar3;
  bool bVar4;
  int iVar5;
  long lVar6;
  long *plVar7;
  undefined8 *puVar8;
  long lVar9;
  ulong uVar10;
  int *piVar11;
  long lVar12;
  undefined8 uVar13;
  uint uVar14;
  
  if ((bRam0000000001340451 & 1) == 0) {
    native_sub_43273c(&INGUIFont_TypeInfo_12d4c70);
    native_sub_43273c(&UnityEngine_Object_TypeInfo_12d54e0);
    bRam0000000001340451 = 1;
  }
  iVar5 = native_NGUIFont__get_type_80001c(param_1);
  if (iVar5 == 2) {
    plVar7 = (long *)native_NGUIFont__get_replacement_8001ec(param_1);
    if (plVar7 != (long *)0x0) {
      lVar9 = *plVar7;
      if ((ulong)*(ushort *)(lVar9 + 0x12a) != 0) {
        uVar10 = 0;
        piVar11 = (int *)(*(long *)(lVar9 + 0xb0) + 8);
        do {
          if (*(long *)(piVar11 + -2) == _INGUIFont_TypeInfo_12d4c70) {
            puVar8 = (undefined8 *)(lVar9 + (long)(*piVar11 + 0x23) * 0x10 + 0x138);
            goto LAB_00802e50;
          }
          uVar10 = uVar10 + 1;
          piVar11 = piVar11 + 4;
        } while (uVar10 < *(ushort *)(lVar9 + 0x12a));
      }
      puVar8 = (undefined8 *)native_sub_3c9b34(plVar7,_INGUIFont_TypeInfo_12d4c70,0x23);
LAB_00802e50:
                    /* WARNING: Could not recover jumptable at 0x00802e6c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
      (*(code *)*puVar8)(plVar7,param_2,puVar8[1]);
      return;
    }
  }
  else {
    puVar8 = (undefined8 *)(param_1 + 0x78);
    uVar13 = *puVar8;
    if (((*(byte *)(_UnityEngine_Object_TypeInfo_12d54e0 + 0x133) >> 2 & 1) != 0) &&
       (*(int *)(_UnityEngine_Object_TypeInfo_12d54e0 + 0xe0) == 0)) {
      native_sub_4327ec();
    }
    uVar10 = native_UnityEngine_Object__op_Inequality_8d76fc(uVar13,param_2,0);
    if ((uVar10 & 1) != 0) {
      uVar13 = *puVar8;
      if (((*(byte *)(_UnityEngine_Object_TypeInfo_12d54e0 + 0x133) >> 2 & 1) != 0) &&
         (*(int *)(_UnityEngine_Object_TypeInfo_12d54e0 + 0xe0) == 0)) {
        native_sub_4327ec();
      }
      uVar10 = native_UnityEngine_Object__op_Inequality_8d76fc(uVar13,0,0);
      if ((uVar10 & 1) != 0) {
        native_NGUIFont__set_material_80152c(param_1,0);
      }
      *(undefined8 *)(param_1 + 0x78) = param_2;
      native_sub_4326e0(puVar8,param_2);
      if ((bRam0000000001340456 & 1) == 0) {
        native_sub_43273c(&INGUIFont_TypeInfo_12d4c70);
        native_sub_43273c(&Method_System_Collections_Generic_List_BMSymbol__get_Count___12dc578);
        native_sub_43273c(&Method_System_Collections_Generic_List_BMSymbol__get_Item___12dc580);
        native_sub_43273c(&Method_NGUITools_FindActive_UILabel____12e5710);
        native_sub_43273c(&NGUITools_TypeInfo_12d53c8);
        bRam0000000001340456 = 1;
      }
      plVar7 = (long *)native_NGUIFont__get_replacement_8001ec(param_1);
      if (plVar7 != (long *)0x0) {
        lVar9 = *plVar7;
        if ((ulong)*(ushort *)(lVar9 + 0x12a) != 0) {
          uVar10 = 0;
          piVar11 = (int *)(*(long *)(lVar9 + 0xb0) + 8);
          do {
            if (*(long *)(piVar11 + -2) == _INGUIFont_TypeInfo_12d4c70) {
              puVar8 = (undefined8 *)(lVar9 + (long)(*piVar11 + 0x27) * 0x10 + 0x138);
              goto LAB_00800f18;
            }
            uVar10 = uVar10 + 1;
            piVar11 = piVar11 + 4;
          } while (uVar10 < *(ushort *)(lVar9 + 0x12a));
        }
        puVar8 = (undefined8 *)native_sub_3c9b34(plVar7,_INGUIFont_TypeInfo_12d4c70,0x27);
LAB_00800f18:
        (*(code *)*puVar8)(plVar7,puVar8[1]);
      }
      *(undefined8 *)(param_1 + 0x90) = 0;
      native_sub_4326e0((undefined8 *)(param_1 + 0x90),0);
      if (((*(byte *)(_NGUITools_TypeInfo_12d53c8 + 0x133) >> 2 & 1) != 0) &&
         (*(int *)(_NGUITools_TypeInfo_12d53c8 + 0xe0) == 0)) {
        native_sub_4327ec();
      }
      lVar9 = native_NGUITools__FindActive_AudioListener__4a5b30
                        (_Method_NGUITools_FindActive_UILabel____12e5710);
      if (lVar9 != 0) {
        iVar5 = (int)*(undefined8 *)(lVar9 + 0x18);
        if (0 < iVar5) {
          if (iVar5 != 0) {
            uVar14 = 0;
            do {
              lVar12 = *(long *)(lVar9 + (long)(int)uVar14 * 8 + 0x20);
              if (lVar12 == 0) goto LAB_008010f4;
              uVar10 = native_UnityEngine_Behaviour__get_enabled_8d7acc(lVar12,0);
              if ((uVar10 & 1) != 0) {
                uVar13 = native_UnityEngine_Component__get_gameObject_8da66c(lVar12,0);
                if (((*(byte *)(_NGUITools_TypeInfo_12d53c8 + 0x133) >> 2 & 1) != 0) &&
                   (*(int *)(_NGUITools_TypeInfo_12d53c8 + 0xe0) == 0)) {
                  native_sub_4327ec(_NGUITools_TypeInfo_12d53c8);
                }
                uVar10 = native_NGUITools__GetActive_72d0d4(uVar13,0);
                if ((uVar10 & 1) != 0) {
                  uVar13 = native_UILabel__get_font_ae77e8(lVar12,0);
                  if (((*(byte *)(_NGUITools_TypeInfo_12d53c8 + 0x133) >> 2 & 1) != 0) &&
                     (*(int *)(_NGUITools_TypeInfo_12d53c8 + 0xe0) == 0)) {
                    native_sub_4327ec(_NGUITools_TypeInfo_12d53c8);
                  }
                  uVar10 = native_NGUITools__CheckIfRelated_7372e0(param_1,uVar13,0);
                  if ((uVar10 & 1) != 0) {
                    uVar13 = native_UILabel__get_font_ae77e8(lVar12,0);
                    native_UILabel__set_font_ae79c4(lVar12,0,0);
                    native_UILabel__set_font_ae79c4(lVar12,uVar13,0);
                  }
                }
              }
              uVar14 = uVar14 + 1;
              if (iVar5 <= (int)uVar14) goto LAB_0080106c;
            } while (uVar14 < *(uint *)(lVar9 + 0x18));
          }
          uVar13 = native_sub_43283c();
                    /* WARNING: Subroutine does not return */
          native_sub_4327dc(uVar13,0);
        }
LAB_0080106c:
        lVar9 = native_NGUIFont__get_symbols_800814(param_1);
        if (lVar9 != 0) {
          uVar14 = *(uint *)(lVar9 + 0x18);
          if (0 < (int)uVar14) {
            lVar12 = 0;
            uVar2 = uVar14;
            while( true ) {
              if (uVar2 <= (uint)lVar12) {
                native_System_ThrowHelper__ThrowArgumentOutOfRangeException_9fe0f4(0);
              }
              lVar6 = *(long *)(*(long *)(lVar9 + 0x10) + lVar12 * 8 + 0x20);
              if (lVar6 == 0) goto LAB_008010f4;
              native_BMSymbol__MarkAsChanged_dd21c4(lVar6,0);
              if ((int)uVar14 <= (int)((uint)lVar12 + 1)) break;
              uVar2 = *(uint *)(lVar9 + 0x18);
              lVar12 = lVar12 + 1;
            }
          }
          puVar8 = (undefined8 *)(param_1 + 0x70);
          *puVar8 = 0;
          if (iRam0000000001345318 != 0) {
            puVar1 = (ulong *)(((ulong)puVar8 >> 0x12 & 0x7fff) * 8 + 0x138ecd8);
            do {
              cVar3 = '\x01';
              bVar4 = (bool)ExclusiveMonitorPass(puVar1,0x10);
              if (bVar4) {
                *puVar1 = *puVar1 | 1L << ((ulong)puVar8 >> 0xc & 0x3f);
                cVar3 = ExclusiveMonitorsStatus();
              }
            } while (cVar3 != '\0');
          }
          return;
        }
      }
LAB_008010f4:
                    /* WARNING: Subroutine does not return */
      native_sub_432810();
    }
  }
  return;
}



/* NGUIFont$$get_dynamicFontStyle @ 0x802e70
 * int32_t NGUIFont__get_dynamicFontStyle (NGUIFont_o* __this, const MethodInfo* method); */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* NGUIFont$$get_dynamicFontStyle
   int32_t NGUIFont__get_dynamicFontStyle (NGUIFont_o* __this, const MethodInfo* method); */

ulong native_NGUIFont__get_dynamicFontStyle_802e70(long param_1)

{
  int iVar1;
  long *plVar2;
  undefined8 *puVar3;
  long lVar4;
  ulong uVar5;
  int *piVar6;
  
  if ((bRam0000000001340452 & 1) == 0) {
    native_sub_43273c(&INGUIFont_TypeInfo_12d4c70);
    bRam0000000001340452 = 1;
  }
  iVar1 = native_NGUIFont__get_type_80001c(param_1);
  if ((iVar1 != 2) ||
     (plVar2 = (long *)native_NGUIFont__get_replacement_8001ec(param_1), plVar2 == (long *)0x0)) {
    return (ulong)*(uint *)(param_1 + 0x84);
  }
  lVar4 = *plVar2;
  if ((ulong)*(ushort *)(lVar4 + 0x12a) != 0) {
    uVar5 = 0;
    piVar6 = (int *)(*(long *)(lVar4 + 0xb0) + 8);
    do {
      if (*(long *)(piVar6 + -2) == _INGUIFont_TypeInfo_12d4c70) {
        puVar3 = (undefined8 *)(lVar4 + (long)(*piVar6 + 0x24) * 0x10 + 0x138);
        goto LAB_00802f30;
      }
      uVar5 = uVar5 + 1;
      piVar6 = piVar6 + 4;
    } while (uVar5 < *(ushort *)(lVar4 + 0x12a));
  }
  puVar3 = (undefined8 *)native_sub_3c9b34(plVar2,_INGUIFont_TypeInfo_12d4c70,0x24);
LAB_00802f30:
                    /* WARNING: Could not recover jumptable at 0x00802f40. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  uVar5 = (*(code *)*puVar3)(plVar2,puVar3[1]);
  return uVar5;
}



/* NGUIFont$$set_dynamicFontStyle @ 0x802f44
 * void NGUIFont__set_dynamicFontStyle (NGUIFont_o* __this, int32_t value, const MethodInfo* method); */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* NGUIFont$$set_dynamicFontStyle
   void NGUIFont__set_dynamicFontStyle (NGUIFont_o* __this, int32_t value, const MethodInfo*
   method); */

void native_NGUIFont__set_dynamicFontStyle_802f44(long param_1,int param_2)

{
  ulong *puVar1;
  uint uVar2;
  char cVar3;
  bool bVar4;
  int iVar5;
  undefined8 uVar6;
  long lVar7;
  long *plVar8;
  undefined8 *puVar9;
  long lVar10;
  ulong uVar11;
  int *piVar12;
  long lVar13;
  uint uVar14;
  
  if ((bRam0000000001340453 & 1) == 0) {
    native_sub_43273c(&INGUIFont_TypeInfo_12d4c70);
    bRam0000000001340453 = 1;
  }
  iVar5 = native_NGUIFont__get_type_80001c(param_1);
  if (iVar5 == 2) {
    plVar8 = (long *)native_NGUIFont__get_replacement_8001ec(param_1);
    if (plVar8 != (long *)0x0) {
      lVar10 = *plVar8;
      if ((ulong)*(ushort *)(lVar10 + 0x12a) != 0) {
        uVar11 = 0;
        piVar12 = (int *)(*(long *)(lVar10 + 0xb0) + 8);
        do {
          if (*(long *)(piVar12 + -2) == _INGUIFont_TypeInfo_12d4c70) {
            puVar9 = (undefined8 *)(lVar10 + (long)(*piVar12 + 0x25) * 0x10 + 0x138);
            goto LAB_00803030;
          }
          uVar11 = uVar11 + 1;
          piVar12 = piVar12 + 4;
        } while (uVar11 < *(ushort *)(lVar10 + 0x12a));
      }
      puVar9 = (undefined8 *)native_sub_3c9b34(plVar8,_INGUIFont_TypeInfo_12d4c70,0x25);
LAB_00803030:
                    /* WARNING: Could not recover jumptable at 0x00803048. Too many branches */
                    /* WARNING: Treating indirect jump as call */
      (*(code *)*puVar9)(plVar8,param_2,puVar9[1]);
      return;
    }
  }
  else if (*(int *)(param_1 + 0x84) != param_2) {
    *(int *)(param_1 + 0x84) = param_2;
    if ((bRam0000000001340456 & 1) == 0) {
      native_sub_43273c(&INGUIFont_TypeInfo_12d4c70);
      native_sub_43273c(&Method_System_Collections_Generic_List_BMSymbol__get_Count___12dc578);
      native_sub_43273c(&Method_System_Collections_Generic_List_BMSymbol__get_Item___12dc580);
      native_sub_43273c(&Method_NGUITools_FindActive_UILabel____12e5710);
      native_sub_43273c(&NGUITools_TypeInfo_12d53c8);
      bRam0000000001340456 = 1;
    }
    plVar8 = (long *)native_NGUIFont__get_replacement_8001ec(param_1);
    if (plVar8 != (long *)0x0) {
      lVar10 = *plVar8;
      if ((ulong)*(ushort *)(lVar10 + 0x12a) != 0) {
        uVar11 = 0;
        piVar12 = (int *)(*(long *)(lVar10 + 0xb0) + 8);
        do {
          if (*(long *)(piVar12 + -2) == _INGUIFont_TypeInfo_12d4c70) {
            puVar9 = (undefined8 *)(lVar10 + (long)(*piVar12 + 0x27) * 0x10 + 0x138);
            goto LAB_00800f18;
          }
          uVar11 = uVar11 + 1;
          piVar12 = piVar12 + 4;
        } while (uVar11 < *(ushort *)(lVar10 + 0x12a));
      }
      puVar9 = (undefined8 *)native_sub_3c9b34(plVar8,_INGUIFont_TypeInfo_12d4c70,0x27);
LAB_00800f18:
      (*(code *)*puVar9)(plVar8,puVar9[1]);
    }
    *(undefined8 *)(param_1 + 0x90) = 0;
    native_sub_4326e0((undefined8 *)(param_1 + 0x90),0);
    if (((*(byte *)(_NGUITools_TypeInfo_12d53c8 + 0x133) >> 2 & 1) != 0) &&
       (*(int *)(_NGUITools_TypeInfo_12d53c8 + 0xe0) == 0)) {
      native_sub_4327ec();
    }
    lVar10 = native_NGUITools__FindActive_AudioListener__4a5b30
                       (_Method_NGUITools_FindActive_UILabel____12e5710);
    if (lVar10 != 0) {
      iVar5 = (int)*(undefined8 *)(lVar10 + 0x18);
      if (0 < iVar5) {
        if (iVar5 != 0) {
          uVar14 = 0;
          do {
            lVar13 = *(long *)(lVar10 + (long)(int)uVar14 * 8 + 0x20);
            if (lVar13 == 0) goto LAB_008010f4;
            uVar11 = native_UnityEngine_Behaviour__get_enabled_8d7acc(lVar13,0);
            if ((uVar11 & 1) != 0) {
              uVar6 = native_UnityEngine_Component__get_gameObject_8da66c(lVar13,0);
              if (((*(byte *)(_NGUITools_TypeInfo_12d53c8 + 0x133) >> 2 & 1) != 0) &&
                 (*(int *)(_NGUITools_TypeInfo_12d53c8 + 0xe0) == 0)) {
                native_sub_4327ec(_NGUITools_TypeInfo_12d53c8);
              }
              uVar11 = native_NGUITools__GetActive_72d0d4(uVar6,0);
              if ((uVar11 & 1) != 0) {
                uVar6 = native_UILabel__get_font_ae77e8(lVar13,0);
                if (((*(byte *)(_NGUITools_TypeInfo_12d53c8 + 0x133) >> 2 & 1) != 0) &&
                   (*(int *)(_NGUITools_TypeInfo_12d53c8 + 0xe0) == 0)) {
                  native_sub_4327ec(_NGUITools_TypeInfo_12d53c8);
                }
                uVar11 = native_NGUITools__CheckIfRelated_7372e0(param_1,uVar6,0);
                if ((uVar11 & 1) != 0) {
                  uVar6 = native_UILabel__get_font_ae77e8(lVar13,0);
                  native_UILabel__set_font_ae79c4(lVar13,0,0);
                  native_UILabel__set_font_ae79c4(lVar13,uVar6,0);
                }
              }
            }
            uVar14 = uVar14 + 1;
            if (iVar5 <= (int)uVar14) goto LAB_0080106c;
          } while (uVar14 < *(uint *)(lVar10 + 0x18));
        }
        uVar6 = native_sub_43283c();
                    /* WARNING: Subroutine does not return */
        native_sub_4327dc(uVar6,0);
      }
LAB_0080106c:
      lVar10 = native_NGUIFont__get_symbols_800814(param_1);
      if (lVar10 != 0) {
        uVar14 = *(uint *)(lVar10 + 0x18);
        if (0 < (int)uVar14) {
          lVar13 = 0;
          uVar2 = uVar14;
          while( true ) {
            if (uVar2 <= (uint)lVar13) {
              native_System_ThrowHelper__ThrowArgumentOutOfRangeException_9fe0f4(0);
            }
            lVar7 = *(long *)(*(long *)(lVar10 + 0x10) + lVar13 * 8 + 0x20);
            if (lVar7 == 0) goto LAB_008010f4;
            native_BMSymbol__MarkAsChanged_dd21c4(lVar7,0);
            if ((int)uVar14 <= (int)((uint)lVar13 + 1)) break;
            uVar2 = *(uint *)(lVar10 + 0x18);
            lVar13 = lVar13 + 1;
          }
        }
        puVar9 = (undefined8 *)(param_1 + 0x70);
        *puVar9 = 0;
        if (iRam0000000001345318 != 0) {
          puVar1 = (ulong *)(((ulong)puVar9 >> 0x12 & 0x7fff) * 8 + 0x138ecd8);
          do {
            cVar3 = '\x01';
            bVar4 = (bool)ExclusiveMonitorPass(puVar1,0x10);
            if (bVar4) {
              *puVar1 = *puVar1 | 1L << ((ulong)puVar9 >> 0xc & 0x3f);
              cVar3 = ExclusiveMonitorsStatus();
            }
          } while (cVar3 != '\0');
        }
        return;
      }
    }
LAB_008010f4:
                    /* WARNING: Subroutine does not return */
    native_sub_432810();
  }
  return;
}



/* NGUIFont$$Trim @ 0x80304c
 * void NGUIFont__Trim (NGUIFont_o* __this, const MethodInfo* method); */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* NGUIFont$$Trim
   void NGUIFont__Trim (NGUIFont_o* __this, const MethodInfo* method); */

void native_NGUIFont__Trim_80304c(long param_1)

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
  
  if ((bRam0000000001340454 & 1) == 0) {
    native_sub_43273c(&INGUIAtlas_TypeInfo_12d4c68);
    native_sub_43273c(&NGUIMath_TypeInfo_12d53b8);
    native_sub_43273c(&UnityEngine_Object_TypeInfo_12d54e0);
    bRam0000000001340454 = 1;
  }
  uStack_60 = 0;
  uStack_58 = 0;
  uStack_70 = 0;
  uStack_68 = 0;
  plVar3 = (long *)native_sub_4327f8(*(undefined8 *)(param_1 + 0x40),_INGUIAtlas_TypeInfo_12d4c68);
  uVar5 = 0;
  if (plVar3 != (long *)0x0) {
    lVar6 = *plVar3;
    if ((ulong)*(ushort *)(lVar6 + 0x12a) != 0) {
      uVar7 = 0;
      piVar8 = (int *)(*(long *)(lVar6 + 0xb0) + 8);
      do {
        if (*(long *)(piVar8 + -2) == _INGUIAtlas_TypeInfo_12d4c68) {
          puVar4 = (undefined8 *)(lVar6 + (long)(*piVar8 + 4) * 0x10 + 0x138);
          goto LAB_00803120;
        }
        uVar7 = uVar7 + 1;
        piVar8 = piVar8 + 4;
      } while (uVar7 < *(ushort *)(lVar6 + 0x12a));
    }
    puVar4 = (undefined8 *)native_sub_3c9b34(plVar3,_INGUIAtlas_TypeInfo_12d4c68,4);
LAB_00803120:
    uVar5 = (*(code *)*puVar4)(plVar3,puVar4[1]);
  }
  if (((*(byte *)(_UnityEngine_Object_TypeInfo_12d54e0 + 0x133) >> 2 & 1) != 0) &&
     (*(int *)(_UnityEngine_Object_TypeInfo_12d54e0 + 0xe0) == 0)) {
    native_sub_4327ec();
  }
  uVar7 = native_UnityEngine_Object__op_Inequality_8d76fc(uVar5,0,0);
  if (((uVar7 & 1) != 0) && (*(long *)(param_1 + 0x90) != 0)) {
    uVar11 = *(undefined4 *)(param_1 + 0x28);
    uVar12 = *(undefined4 *)(param_1 + 0x2c);
    uVar13 = *(undefined4 *)(param_1 + 0x30);
    uVar14 = *(undefined4 *)(param_1 + 0x34);
    plVar3 = (long *)native_NGUIFont__get_texture_801b90(param_1);
    if (plVar3 != (long *)0x0) {
      uVar1 = (**(code **)(*plVar3 + 0x178))(plVar3,*(undefined8 *)(*plVar3 + 0x180));
      plVar3 = (long *)native_NGUIFont__get_texture_801b90(param_1);
      if (plVar3 != (long *)0x0) {
        uVar2 = (**(code **)(*plVar3 + 0x198))(plVar3,*(undefined8 *)(*plVar3 + 0x1a0));
        if (((*(byte *)(_NGUIMath_TypeInfo_12d53b8 + 0x133) >> 2 & 1) != 0) &&
           (*(int *)(_NGUIMath_TypeInfo_12d53b8 + 0xe0) == 0)) {
          native_sub_4327ec(_NGUIMath_TypeInfo_12d53b8);
        }
        uVar11 = native_NGUIMath__ConvertToPixels_803314(uVar11,uVar1,uVar2,1);
        uStack_60 = CONCAT44(uVar12,uVar11);
        uStack_58 = CONCAT44(uVar14,uVar13);
        lVar6 = *(long *)(param_1 + 0x90);
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
          if (*(long *)(param_1 + 0x38) != 0) {
            native_BMFont__Trim_dd1c8c(*(long *)(param_1 + 0x38),uVar12,uVar13,uVar14,uVar11,0);
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



/* NGUIFont$$References @ 0x803488
 * bool NGUIFont__References (NGUIFont_o* __this, INGUIFont_o* font, const MethodInfo* method); */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* NGUIFont$$References
   bool NGUIFont__References (NGUIFont_o* __this, INGUIFont_o* font, const MethodInfo* method); */

undefined8 native_NGUIFont__References_803488(long param_1,long param_2)

{
  long *plVar1;
  undefined8 *puVar2;
  undefined8 uVar3;
  long lVar4;
  ulong uVar5;
  int *piVar6;
  
  if ((bRam0000000001340455 & 1) == 0) {
    native_sub_43273c(&INGUIFont_TypeInfo_12d4c70);
    bRam0000000001340455 = 1;
  }
  if (param_2 == 0) {
    uVar3 = 0;
  }
  else if (param_1 == param_2) {
    uVar3 = 1;
  }
  else {
    plVar1 = (long *)native_NGUIFont__get_replacement_8001ec(param_1);
    uVar3 = 0;
    if (plVar1 != (long *)0x0) {
      lVar4 = *plVar1;
      if ((ulong)*(ushort *)(lVar4 + 0x12a) != 0) {
        uVar5 = 0;
        piVar6 = (int *)(*(long *)(lVar4 + 0xb0) + 8);
        do {
          if (*(long *)(piVar6 + -2) == _INGUIFont_TypeInfo_12d4c70) {
            puVar2 = (undefined8 *)(lVar4 + (long)(*piVar6 + 0x26) * 0x10 + 0x138);
            goto LAB_00803558;
          }
          uVar5 = uVar5 + 1;
          piVar6 = piVar6 + 4;
        } while (uVar5 < *(ushort *)(lVar4 + 0x12a));
      }
      puVar2 = (undefined8 *)native_sub_3c9b34(plVar1,_INGUIFont_TypeInfo_12d4c70,0x26);
LAB_00803558:
                    /* WARNING: Could not recover jumptable at 0x00803570. Too many branches */
                    /* WARNING: Treating indirect jump as call */
      uVar3 = (*(code *)*puVar2)(plVar1,param_2,puVar2[1]);
      return uVar3;
    }
  }
  return uVar3;
}



/* NGUIFont$$MarkAsChanged @ 0x800e3c
 * void NGUIFont__MarkAsChanged (NGUIFont_o* __this, const MethodInfo* method); */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* NGUIFont$$MarkAsChanged
   void NGUIFont__MarkAsChanged (NGUIFont_o* __this, const MethodInfo* method); */

void native_NGUIFont__MarkAsChanged_800e3c(long param_1)

{
  ulong *puVar1;
  uint uVar2;
  char cVar3;
  bool bVar4;
  long *plVar5;
  undefined8 *puVar6;
  undefined8 uVar7;
  long lVar8;
  long lVar9;
  ulong uVar10;
  int *piVar11;
  long lVar12;
  int iVar13;
  uint uVar14;
  
  if ((bRam0000000001340456 & 1) == 0) {
    native_sub_43273c(&INGUIFont_TypeInfo_12d4c70);
    native_sub_43273c(&Method_System_Collections_Generic_List_BMSymbol__get_Count___12dc578);
    native_sub_43273c(&Method_System_Collections_Generic_List_BMSymbol__get_Item___12dc580);
    native_sub_43273c(&Method_NGUITools_FindActive_UILabel____12e5710);
    native_sub_43273c(&NGUITools_TypeInfo_12d53c8);
    bRam0000000001340456 = 1;
  }
  plVar5 = (long *)native_NGUIFont__get_replacement_8001ec(param_1);
  if (plVar5 != (long *)0x0) {
    lVar9 = *plVar5;
    if ((ulong)*(ushort *)(lVar9 + 0x12a) != 0) {
      uVar10 = 0;
      piVar11 = (int *)(*(long *)(lVar9 + 0xb0) + 8);
      do {
        if (*(long *)(piVar11 + -2) == _INGUIFont_TypeInfo_12d4c70) {
          puVar6 = (undefined8 *)(lVar9 + (long)(*piVar11 + 0x27) * 0x10 + 0x138);
          goto LAB_00800f18;
        }
        uVar10 = uVar10 + 1;
        piVar11 = piVar11 + 4;
      } while (uVar10 < *(ushort *)(lVar9 + 0x12a));
    }
    puVar6 = (undefined8 *)native_sub_3c9b34(plVar5,_INGUIFont_TypeInfo_12d4c70,0x27);
LAB_00800f18:
    (*(code *)*puVar6)(plVar5,puVar6[1]);
  }
  *(undefined8 *)(param_1 + 0x90) = 0;
  native_sub_4326e0((undefined8 *)(param_1 + 0x90),0);
  if (((*(byte *)(_NGUITools_TypeInfo_12d53c8 + 0x133) >> 2 & 1) != 0) &&
     (*(int *)(_NGUITools_TypeInfo_12d53c8 + 0xe0) == 0)) {
    native_sub_4327ec();
  }
  lVar9 = native_NGUITools__FindActive_AudioListener__4a5b30
                    (_Method_NGUITools_FindActive_UILabel____12e5710);
  if (lVar9 != 0) {
    iVar13 = (int)*(undefined8 *)(lVar9 + 0x18);
    if (0 < iVar13) {
      if (iVar13 != 0) {
        uVar14 = 0;
        do {
          lVar12 = *(long *)(lVar9 + (long)(int)uVar14 * 8 + 0x20);
          if (lVar12 == 0) goto LAB_008010f4;
          uVar10 = native_UnityEngine_Behaviour__get_enabled_8d7acc(lVar12,0);
          if ((uVar10 & 1) != 0) {
            uVar7 = native_UnityEngine_Component__get_gameObject_8da66c(lVar12,0);
            if (((*(byte *)(_NGUITools_TypeInfo_12d53c8 + 0x133) >> 2 & 1) != 0) &&
               (*(int *)(_NGUITools_TypeInfo_12d53c8 + 0xe0) == 0)) {
              native_sub_4327ec(_NGUITools_TypeInfo_12d53c8);
            }
            uVar10 = native_NGUITools__GetActive_72d0d4(uVar7,0);
            if ((uVar10 & 1) != 0) {
              uVar7 = native_UILabel__get_font_ae77e8(lVar12,0);
              if (((*(byte *)(_NGUITools_TypeInfo_12d53c8 + 0x133) >> 2 & 1) != 0) &&
                 (*(int *)(_NGUITools_TypeInfo_12d53c8 + 0xe0) == 0)) {
                native_sub_4327ec(_NGUITools_TypeInfo_12d53c8);
              }
              uVar10 = native_NGUITools__CheckIfRelated_7372e0(param_1,uVar7,0);
              if ((uVar10 & 1) != 0) {
                uVar7 = native_UILabel__get_font_ae77e8(lVar12,0);
                native_UILabel__set_font_ae79c4(lVar12,0,0);
                native_UILabel__set_font_ae79c4(lVar12,uVar7,0);
              }
            }
          }
          uVar14 = uVar14 + 1;
          if (iVar13 <= (int)uVar14) goto LAB_0080106c;
        } while (uVar14 < *(uint *)(lVar9 + 0x18));
      }
      uVar7 = native_sub_43283c();
                    /* WARNING: Subroutine does not return */
      native_sub_4327dc(uVar7,0);
    }
LAB_0080106c:
    lVar9 = native_NGUIFont__get_symbols_800814(param_1);
    if (lVar9 != 0) {
      uVar14 = *(uint *)(lVar9 + 0x18);
      if (0 < (int)uVar14) {
        lVar12 = 0;
        uVar2 = uVar14;
        while( true ) {
          if (uVar2 <= (uint)lVar12) {
            native_System_ThrowHelper__ThrowArgumentOutOfRangeException_9fe0f4(0);
          }
          lVar8 = *(long *)(*(long *)(lVar9 + 0x10) + lVar12 * 8 + 0x20);
          if (lVar8 == 0) goto LAB_008010f4;
          native_BMSymbol__MarkAsChanged_dd21c4(lVar8,0);
          if ((int)uVar14 <= (int)((uint)lVar12 + 1)) break;
          uVar2 = *(uint *)(lVar9 + 0x18);
          lVar12 = lVar12 + 1;
        }
      }
      puVar6 = (undefined8 *)(param_1 + 0x70);
      *puVar6 = 0;
      if (iRam0000000001345318 != 0) {
        puVar1 = (ulong *)(((ulong)puVar6 >> 0x12 & 0x7fff) * 8 + 0x138ecd8);
        do {
          cVar3 = '\x01';
          bVar4 = (bool)ExclusiveMonitorPass(puVar1,0x10);
          if (bVar4) {
            *puVar1 = *puVar1 | 1L << ((ulong)puVar6 >> 0xc & 0x3f);
            cVar3 = ExclusiveMonitorsStatus();
          }
        } while (cVar3 != '\0');
      }
      return;
    }
  }
LAB_008010f4:
                    /* WARNING: Subroutine does not return */
  native_sub_432810();
}



/* NGUIFont$$UpdateUVRect @ 0x8026a8
 * void NGUIFont__UpdateUVRect (NGUIFont_o* __this, const MethodInfo* method); */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* NGUIFont$$UpdateUVRect
   void NGUIFont__UpdateUVRect (NGUIFont_o* __this, const MethodInfo* method); */

void native_NGUIFont__UpdateUVRect_8026a8(long param_1)

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
  
  if ((bRam0000000001340457 & 1) == 0) {
    native_sub_43273c(&INGUIAtlas_TypeInfo_12d4c68);
    native_sub_43273c(&NGUIMath_TypeInfo_12d53b8);
    native_sub_43273c(&UnityEngine_Object_TypeInfo_12d54e0);
    bRam0000000001340457 = 1;
  }
  uVar9 = *(undefined8 *)(param_1 + 0x40);
  if (((*(byte *)(_UnityEngine_Object_TypeInfo_12d54e0 + 0x133) >> 2 & 1) != 0) &&
     (*(int *)(_UnityEngine_Object_TypeInfo_12d54e0 + 0xe0) == 0)) {
    native_sub_4327ec();
  }
  uVar3 = native_UnityEngine_Object__op_Equality_8e9a3c(uVar9,0,0);
  if ((uVar3 & 1) == 0) {
    plVar4 = (long *)native_sub_4327f8(*(undefined8 *)(param_1 + 0x40),_INGUIAtlas_TypeInfo_12d4c68)
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
            goto LAB_008027ac;
          }
          uVar3 = uVar3 + 1;
          piVar8 = piVar8 + 4;
        } while (uVar3 < *(ushort *)(lVar7 + 0x12a));
      }
      puVar5 = (undefined8 *)native_sub_3c9b34(plVar4,_INGUIAtlas_TypeInfo_12d4c68,4);
LAB_008027ac:
      plVar6 = (long *)(*(code *)*puVar5)(plVar4,puVar5[1]);
    }
    if (((*(byte *)(_UnityEngine_Object_TypeInfo_12d54e0 + 0x133) >> 2 & 1) != 0) &&
       (*(int *)(_UnityEngine_Object_TypeInfo_12d54e0 + 0xe0) == 0)) {
      native_sub_4327ec();
    }
    uVar3 = native_UnityEngine_Object__op_Inequality_8d76fc(plVar6,0,0);
    if ((uVar3 & 1) != 0) {
      lVar7 = *(long *)(param_1 + 0x90);
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
        *(undefined4 *)(param_1 + 0x28) = (undefined4)uStack_60;
        *(undefined4 *)(param_1 + 0x2c) = uStack_60._4_4_;
        *(undefined4 *)(param_1 + 0x30) = (undefined4)uStack_58;
        *(undefined4 *)(param_1 + 0x34) = uStack_58._4_4_;
        if (plVar6 != (long *)0x0) {
          uVar1 = (**(code **)(*plVar6 + 0x178))(plVar6,*(undefined8 *)(*plVar6 + 0x180));
          uVar2 = (**(code **)(*plVar6 + 0x198))(plVar6,*(undefined8 *)(*plVar6 + 0x1a0));
          if (((*(byte *)(_NGUIMath_TypeInfo_12d53b8 + 0x133) >> 2 & 1) != 0) &&
             (*(int *)(_NGUIMath_TypeInfo_12d53b8 + 0xe0) == 0)) {
            native_sub_4327ec(_NGUIMath_TypeInfo_12d53b8);
          }
          uVar1 = native_NGUIMath__ConvertToTexCoords_803574(uVar3,uVar1,uVar2);
          *(undefined4 *)(param_1 + 0x28) = uVar1;
          *(undefined4 *)(param_1 + 0x2c) = uVar10;
          *(undefined4 *)(param_1 + 0x30) = uVar11;
          *(undefined4 *)(param_1 + 0x34) = uVar12;
          if (*(long *)(param_1 + 0x90) != 0) {
            uVar3 = native_UISpriteData__get_hasPadding_940b58(*(long *)(param_1 + 0x90),0);
            if ((uVar3 & 1) == 0) {
              return;
            }
            native_NGUIFont__Trim_80304c(param_1);
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



/* NGUIFont$$GetSymbol @ 0x803638
 * BMSymbol_o* NGUIFont__GetSymbol (NGUIFont_o* __this, System_String_o* sequence, bool createIfMissing, const MethodInfo* method); */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* NGUIFont$$GetSymbol
   BMSymbol_o* NGUIFont__GetSymbol (NGUIFont_o* __this, System_String_o* sequence, bool
   createIfMissing, const MethodInfo* method); */

long native_NGUIFont__GetSymbol_803638(undefined8 param_1,undefined8 param_2,ulong param_3)

{
  uint uVar1;
  uint uVar2;
  long lVar3;
  ulong uVar4;
  long lVar5;
  long lVar6;
  
  if ((bRam0000000001340458 & 1) == 0) {
    native_sub_43273c(&BMSymbol_TypeInfo_12d3ab0);
    native_sub_43273c(&Method_System_Collections_Generic_List_BMSymbol__Add___12dc568);
    native_sub_43273c(&Method_System_Collections_Generic_List_BMSymbol__get_Count___12dc578);
    native_sub_43273c(&Method_System_Collections_Generic_List_BMSymbol__get_Item___12dc580);
    bRam0000000001340458 = 1;
  }
  lVar3 = native_NGUIFont__get_symbols_800814(param_1);
  if (lVar3 != 0) {
    uVar1 = *(uint *)(lVar3 + 0x18);
    if (0 < (int)uVar1) {
      lVar6 = 0;
      uVar2 = uVar1;
      while( true ) {
        if (uVar2 <= (uint)lVar6) {
          native_System_ThrowHelper__ThrowArgumentOutOfRangeException_9fe0f4(0);
        }
        lVar5 = *(long *)(*(long *)(lVar3 + 0x10) + lVar6 * 8 + 0x20);
        if (lVar5 == 0) goto LAB_0080377c;
        uVar4 = native_System_String__op_Equality_afc18c(*(undefined8 *)(lVar5 + 0x10),param_2,0);
        if ((uVar4 & 1) != 0) {
          return lVar5;
        }
        if ((int)uVar1 <= (int)((uint)lVar6 + 1)) break;
        uVar2 = *(uint *)(lVar3 + 0x18);
        lVar6 = lVar6 + 1;
      }
    }
    if ((param_3 & 1) == 0) {
      lVar6 = 0;
    }
    else {
      lVar6 = native_sub_432808(_BMSymbol_TypeInfo_12d3ab0);
      native_BMSymbol___ctor_dd24c0(lVar6,0);
      if (lVar6 == 0) goto LAB_0080377c;
      *(undefined8 *)(lVar6 + 0x10) = param_2;
      native_sub_4326e0((undefined8 *)(lVar6 + 0x10),param_2);
      native_System_Collections_Generic_List_int_____Add_d40c00
                (lVar3,lVar6,_Method_System_Collections_Generic_List_BMSymbol__Add___12dc568);
    }
    return lVar6;
  }
LAB_0080377c:
                    /* WARNING: Subroutine does not return */
  native_sub_432810();
}



/* NGUIFont$$MatchSymbol @ 0x803780
 * BMSymbol_o* NGUIFont__MatchSymbol (NGUIFont_o* __this, System_String_o** text, int32_t offset, int32_t textLength, const MethodInfo* method); */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* NGUIFont$$MatchSymbol
   BMSymbol_o* NGUIFont__MatchSymbol (NGUIFont_o* __this, System_String_o** text, int32_t offset,
   int32_t textLength, const MethodInfo* method); */

long native_NGUIFont__MatchSymbol_803780(long param_1,long *param_2,int param_3,int param_4)

{
  uint uVar1;
  short sVar2;
  short sVar3;
  int iVar4;
  int iVar5;
  long lVar6;
  long *plVar7;
  undefined8 *puVar8;
  undefined8 uVar9;
  long lVar10;
  ulong uVar11;
  int *piVar12;
  uint uVar13;
  long *plVar14;
  int iVar15;
  uint uVar16;
  undefined8 uStack_98;
  undefined8 uStack_90;
  long lStack_88;
  undefined8 uStack_80;
  undefined8 uStack_78;
  long lStack_70;
  
  if ((bRam0000000001340459 & 1) == 0) {
    native_sub_43273c(&BMSymbol_TypeInfo_12d3ab0);
    native_sub_43273c(&
                      Method_System_Collections_Generic_List_Enumerator_UISpriteData__Dispose___12da6d8
                     );
    native_sub_43273c(&
                      Method_System_Collections_Generic_List_Enumerator_UISpriteData__MoveNext___12da6e0
                     );
    native_sub_43273c(&
                      Method_System_Collections_Generic_List_Enumerator_UISpriteData__get_Current___12da6e8
                     );
    native_sub_43273c(&INGUIAtlas_TypeInfo_12d4c68);
    native_sub_43273c(&Method_System_Collections_Generic_List_BMSymbol__Add___12dc568);
    native_sub_43273c(&Method_System_Collections_Generic_List_UISpriteData__GetEnumerator___12dd3b8)
    ;
    native_sub_43273c(&Method_System_Collections_Generic_List_BMSymbol___ctor___12dc560);
    native_sub_43273c(&Method_System_Collections_Generic_List_BMSymbol__get_Count___12dc578);
    native_sub_43273c(&Method_System_Collections_Generic_List_UISpriteData__get_Count___12dd3c8);
    native_sub_43273c(&Method_System_Collections_Generic_List_BMSymbol__get_Item___12dc580);
    native_sub_43273c(&System_Collections_Generic_List_BMSymbol__TypeInfo_12d29b8);
    native_sub_43273c(&StringLiteral__sp__12f3370);
    native_sub_43273c(&StringLiteral___12f3410);
    bRam0000000001340459 = 1;
  }
  uStack_80 = 0;
  uStack_78 = 0;
  lStack_70 = 0;
  if ((-1 < param_3) && (param_3 < param_4)) {
    lVar6 = native_NGUIFont__get_symbolAtlas_8007c8(param_1);
    if (lVar6 == 0) {
      plVar7 = (long *)native_NGUIFont__get_atlas_7fe8f0(param_1);
    }
    else {
      plVar7 = (long *)native_NGUIFont__get_symbolAtlas_8007c8(param_1);
    }
    if (plVar7 != (long *)0x0) {
      lVar6 = native_NGUIFont__get_symbols_800814(param_1);
      if (lVar6 != 0) {
        lVar10 = *plVar7;
        iVar5 = *(int *)(lVar6 + 0x18);
        if ((ulong)*(ushort *)(lVar10 + 0x12a) != 0) {
          uVar11 = 0;
          piVar12 = (int *)(*(long *)(lVar10 + 0xb0) + 8);
          do {
            if (*(long *)(piVar12 + -2) == _INGUIAtlas_TypeInfo_12d4c68) {
              puVar8 = (undefined8 *)(lVar10 + (long)(*piVar12 + 2) * 0x10 + 0x138);
              goto LAB_0080392c;
            }
            uVar11 = uVar11 + 1;
            piVar12 = piVar12 + 4;
          } while (uVar11 < *(ushort *)(lVar10 + 0x12a));
        }
        puVar8 = (undefined8 *)native_sub_3c9b34(plVar7,_INGUIAtlas_TypeInfo_12d4c68,2);
LAB_0080392c:
        lVar10 = (*(code *)*puVar8)(plVar7,puVar8[1]);
        if (lVar10 == 0) {
          return 0;
        }
        if (*(int *)(lVar10 + 0x18) == 0) {
          return 0;
        }
        if (0 < iVar5) {
          uVar13 = 0;
          do {
            if (*(uint *)(lVar6 + 0x18) <= uVar13) {
              native_System_ThrowHelper__ThrowArgumentOutOfRangeException_9fe0f4(0);
            }
            lVar10 = *(long *)(*(long *)(lVar6 + 0x10) + (long)(int)uVar13 * 8 + 0x20);
            if (lVar10 == 0) goto LAB_00803d40;
            iVar4 = native_BMSymbol__get_length_dd2140(lVar10,0);
            if ((iVar4 != 0) && (iVar4 <= param_4 - param_3)) {
              if (0 < iVar4) {
                iVar15 = 0;
                do {
                  if (*param_2 == 0) goto LAB_00803d40;
                  sVar2 = native_System_String__get_Chars_b03810(*param_2,param_3 + iVar15,0);
                  if (*(long *)(lVar10 + 0x10) == 0) goto LAB_00803d40;
                  sVar3 = native_System_String__get_Chars_b03810(*(long *)(lVar10 + 0x10),iVar15,0);
                  if (sVar2 != sVar3) goto LAB_008039fc;
                  iVar15 = iVar15 + 1;
                } while (iVar15 < iVar4);
              }
              uVar11 = native_BMSymbol__Validate_dd21cc(lVar10,plVar7,0);
              if ((uVar11 & 1) != 0) {
                return lVar10;
              }
            }
LAB_008039fc:
            uVar13 = uVar13 + 1;
          } while ((int)uVar13 < iVar5);
        }
        if (*param_2 != 0) {
          sVar2 = native_System_String__get_Chars_b03810(*param_2,param_3,0);
          if (sVar2 != 0x5b) {
            return 0;
          }
          lVar6 = *param_2;
          if (lVar6 != 0) {
            if (*(int *)(lVar6 + 0x10) <= param_3 + 6) {
              return 0;
            }
            sVar2 = native_System_String__get_Chars_b03810(lVar6,param_3 + 1,0);
            if (sVar2 != 0x73) {
              return 0;
            }
            if (*param_2 != 0) {
              sVar2 = native_System_String__get_Chars_b03810(*param_2,param_3 + 2,0);
              if (sVar2 != 0x70) {
                return 0;
              }
              if (*param_2 != 0) {
                sVar2 = native_System_String__get_Chars_b03810(*param_2,param_3 + 3,0);
                if (sVar2 != 0x3d) {
                  return 0;
                }
                plVar14 = (long *)(param_1 + 0x70);
                lVar6 = *plVar14;
                if (lVar6 == 0) {
                  lVar6 = native_sub_432808(
                                           _System_Collections_Generic_List_BMSymbol__TypeInfo_12d29b8
                                           );
                  native_System_Collections_Generic_List_XmlEventCache_XmlEvent______ctor_d3ff44
                            (lVar6,_Method_System_Collections_Generic_List_BMSymbol___ctor___12dc560
                            );
                  *plVar14 = lVar6;
                  native_sub_4326e0(plVar14,lVar6);
                  lVar6 = *plVar7;
                  if ((ulong)*(ushort *)(lVar6 + 0x12a) != 0) {
                    uVar11 = 0;
                    piVar12 = (int *)(*(long *)(lVar6 + 0xb0) + 8);
                    do {
                      if (*(long *)(piVar12 + -2) == _INGUIAtlas_TypeInfo_12d4c68) {
                        puVar8 = (undefined8 *)(lVar6 + (long)(*piVar12 + 2) * 0x10 + 0x138);
                        goto LAB_00803b48;
                      }
                      uVar11 = uVar11 + 1;
                      piVar12 = piVar12 + 4;
                    } while (uVar11 < *(ushort *)(lVar6 + 0x12a));
                  }
                  puVar8 = (undefined8 *)native_sub_3c9b34(plVar7,_INGUIAtlas_TypeInfo_12d4c68,2);
LAB_00803b48:
                  lVar6 = (*(code *)*puVar8)(plVar7,puVar8[1]);
                  if (lVar6 == 0) goto LAB_00803d40;
                  native_System_Collections_Generic_List_BE2_Op_FunctionLocalVariable___GetEnumerator_d414fc
                            (&uStack_98,lVar6,
                             _Method_System_Collections_Generic_List_UISpriteData__GetEnumerator___12dd3b8
                            );
                  lStack_70 = lStack_88;
                  uStack_78 = uStack_90;
                  uStack_80 = uStack_98;
                  while (uVar11 = native_System_Collections_Generic_List_Enumerator_BE2_Op_FunctionLocalVariable___MoveNext_7e8f30
                                            (&uStack_80,
                                             _Method_System_Collections_Generic_List_Enumerator_UISpriteData__MoveNext___12da6e0
                                            ), lVar6 = lStack_70, (uVar11 & 1) != 0) {
                    lVar10 = native_sub_432808(_BMSymbol_TypeInfo_12d3ab0);
                    native_BMSymbol___ctor_dd24c0(lVar10,0);
                    if (lVar6 == 0) {
                    /* WARNING: Subroutine does not return */
                      native_sub_432810();
                    }
                    uVar9 = native_System_String__Concat_afc654
                                      (_StringLiteral__sp__12f3370,*(undefined8 *)(lVar6 + 0x10),
                                       _StringLiteral___12f3410,0);
                    if (lVar10 == 0) {
                    /* WARNING: Subroutine does not return */
                      native_sub_432810();
                    }
                    *(undefined8 *)(lVar10 + 0x10) = uVar9;
                    native_sub_4326e0();
                    *(undefined8 *)(lVar10 + 0x18) = *(undefined8 *)(lVar6 + 0x10);
                    native_sub_4326e0();
                    if (*plVar14 == 0) {
                    /* WARNING: Subroutine does not return */
                      native_sub_432810();
                    }
                    native_System_Collections_Generic_List_int_____Add_d40c00
                              (*plVar14,lVar10,
                               _Method_System_Collections_Generic_List_BMSymbol__Add___12dc568);
                  }
                  native_System_Collections_Generic_List_Enumerator_BE2_Op_FunctionLocalVariable___Dispose_7e8f2c
                            (&uStack_80,
                             _Method_System_Collections_Generic_List_Enumerator_UISpriteData__Dispose___12da6d8
                            );
                  lVar6 = *plVar14;
                  if (lVar6 == 0) goto LAB_00803d40;
                }
                uVar13 = *(uint *)(lVar6 + 0x18);
                if ((int)uVar13 < 1) {
                  return 0;
                }
                uVar16 = 0;
                uVar1 = uVar13;
                while( true ) {
                  if (uVar1 <= uVar16) {
                    native_System_ThrowHelper__ThrowArgumentOutOfRangeException_9fe0f4(0);
                  }
                  lVar10 = *(long *)(*(long *)(lVar6 + 0x10) + (long)(int)uVar16 * 8 + 0x20);
                  if (lVar10 == 0) break;
                  iVar5 = native_BMSymbol__get_length_dd2140(lVar10,0);
                  if ((iVar5 != 0) && (iVar5 <= param_4 - param_3)) {
                    if (0 < iVar5) {
                      iVar4 = 0;
                      do {
                        if (*param_2 == 0) goto LAB_00803d40;
                        sVar2 = native_System_String__get_Chars_b03810(*param_2,param_3 + iVar4,0);
                        if (*(long *)(lVar10 + 0x10) == 0) goto LAB_00803d40;
                        sVar3 = native_System_String__get_Chars_b03810
                                          (*(long *)(lVar10 + 0x10),iVar4,0);
                        if (sVar2 != sVar3) goto LAB_00803d0c;
                        iVar4 = iVar4 + 1;
                      } while (iVar4 < iVar5);
                    }
                    uVar11 = native_BMSymbol__Validate_dd21cc(lVar10,plVar7,0);
                    if ((uVar11 & 1) != 0) {
                      return lVar10;
                    }
                  }
LAB_00803d0c:
                  uVar16 = uVar16 + 1;
                  if ((int)uVar13 <= (int)uVar16) {
                    return 0;
                  }
                  uVar1 = *(uint *)(lVar6 + 0x18);
                }
              }
            }
          }
        }
      }
LAB_00803d40:
                    /* WARNING: Subroutine does not return */
      native_sub_432810();
    }
  }
  return 0;
}



/* NGUIFont$$AddSymbol @ 0x803da8
 * BMSymbol_o* NGUIFont__AddSymbol (NGUIFont_o* __this, System_String_o* sequence, System_String_o* spriteName, const MethodInfo* method); */

/* NGUIFont$$AddSymbol
   BMSymbol_o* NGUIFont__AddSymbol (NGUIFont_o* __this, System_String_o* sequence, System_String_o*
   spriteName, const MethodInfo* method); */

long native_NGUIFont__AddSymbol_803da8(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  long lVar1;
  
  lVar1 = native_NGUIFont__GetSymbol_803638(param_1,param_2,1);
  if (lVar1 != 0) {
    *(undefined8 *)(lVar1 + 0x18) = param_3;
    native_sub_4326e0((undefined8 *)(lVar1 + 0x18),param_3);
    native_NGUIFont__MarkAsChanged_800e3c(param_1);
    return lVar1;
  }
                    /* WARNING: Subroutine does not return */
  native_sub_432810();
}



/* NGUIFont$$RemoveSymbol @ 0x803dfc
 * void NGUIFont__RemoveSymbol (NGUIFont_o* __this, System_String_o* sequence, const MethodInfo* method); */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* NGUIFont$$RemoveSymbol
   void NGUIFont__RemoveSymbol (NGUIFont_o* __this, System_String_o* sequence, const MethodInfo*
   method); */

void native_NGUIFont__RemoveSymbol_803dfc(long param_1,undefined8 param_2)

{
  ulong *puVar1;
  uint uVar2;
  char cVar3;
  bool bVar4;
  long *plVar5;
  undefined8 *puVar6;
  undefined8 uVar7;
  long lVar8;
  long lVar9;
  long lVar10;
  ulong uVar11;
  int *piVar12;
  int iVar13;
  uint uVar14;
  
  if ((bRam000000000134045a & 1) == 0) {
    native_sub_43273c(&Method_System_Collections_Generic_List_BMSymbol__Remove___12dc570);
    bRam000000000134045a = 1;
  }
  lVar9 = native_NGUIFont__GetSymbol_803638(param_1,param_2,0);
  if (lVar9 != 0) {
    lVar10 = native_NGUIFont__get_symbols_800814(param_1);
    if (lVar10 == 0) {
                    /* WARNING: Subroutine does not return */
      native_sub_432810();
    }
    native_System_Collections_Generic_List_BMSymbol___Remove_d41f3c
              (lVar10,lVar9,_Method_System_Collections_Generic_List_BMSymbol__Remove___12dc570);
  }
  if ((bRam0000000001340456 & 1) == 0) {
    native_sub_43273c(&INGUIFont_TypeInfo_12d4c70);
    native_sub_43273c(&Method_System_Collections_Generic_List_BMSymbol__get_Count___12dc578);
    native_sub_43273c(&Method_System_Collections_Generic_List_BMSymbol__get_Item___12dc580);
    native_sub_43273c(&Method_NGUITools_FindActive_UILabel____12e5710);
    native_sub_43273c(&NGUITools_TypeInfo_12d53c8);
    bRam0000000001340456 = 1;
  }
  plVar5 = (long *)native_NGUIFont__get_replacement_8001ec(param_1);
  if (plVar5 != (long *)0x0) {
    lVar9 = *plVar5;
    if ((ulong)*(ushort *)(lVar9 + 0x12a) != 0) {
      uVar11 = 0;
      piVar12 = (int *)(*(long *)(lVar9 + 0xb0) + 8);
      do {
        if (*(long *)(piVar12 + -2) == _INGUIFont_TypeInfo_12d4c70) {
          puVar6 = (undefined8 *)(lVar9 + (long)(*piVar12 + 0x27) * 0x10 + 0x138);
          goto LAB_00800f18;
        }
        uVar11 = uVar11 + 1;
        piVar12 = piVar12 + 4;
      } while (uVar11 < *(ushort *)(lVar9 + 0x12a));
    }
    puVar6 = (undefined8 *)native_sub_3c9b34(plVar5,_INGUIFont_TypeInfo_12d4c70,0x27);
LAB_00800f18:
    (*(code *)*puVar6)(plVar5,puVar6[1]);
  }
  *(undefined8 *)(param_1 + 0x90) = 0;
  native_sub_4326e0((undefined8 *)(param_1 + 0x90),0);
  if (((*(byte *)(_NGUITools_TypeInfo_12d53c8 + 0x133) >> 2 & 1) != 0) &&
     (*(int *)(_NGUITools_TypeInfo_12d53c8 + 0xe0) == 0)) {
    native_sub_4327ec();
  }
  lVar9 = native_NGUITools__FindActive_AudioListener__4a5b30
                    (_Method_NGUITools_FindActive_UILabel____12e5710);
  if (lVar9 != 0) {
    iVar13 = (int)*(undefined8 *)(lVar9 + 0x18);
    if (0 < iVar13) {
      if (iVar13 != 0) {
        uVar14 = 0;
        do {
          lVar10 = *(long *)(lVar9 + (long)(int)uVar14 * 8 + 0x20);
          if (lVar10 == 0) goto LAB_008010f4;
          uVar11 = native_UnityEngine_Behaviour__get_enabled_8d7acc(lVar10,0);
          if ((uVar11 & 1) != 0) {
            uVar7 = native_UnityEngine_Component__get_gameObject_8da66c(lVar10,0);
            if (((*(byte *)(_NGUITools_TypeInfo_12d53c8 + 0x133) >> 2 & 1) != 0) &&
               (*(int *)(_NGUITools_TypeInfo_12d53c8 + 0xe0) == 0)) {
              native_sub_4327ec(_NGUITools_TypeInfo_12d53c8);
            }
            uVar11 = native_NGUITools__GetActive_72d0d4(uVar7,0);
            if ((uVar11 & 1) != 0) {
              uVar7 = native_UILabel__get_font_ae77e8(lVar10,0);
              if (((*(byte *)(_NGUITools_TypeInfo_12d53c8 + 0x133) >> 2 & 1) != 0) &&
                 (*(int *)(_NGUITools_TypeInfo_12d53c8 + 0xe0) == 0)) {
                native_sub_4327ec(_NGUITools_TypeInfo_12d53c8);
              }
              uVar11 = native_NGUITools__CheckIfRelated_7372e0(param_1,uVar7,0);
              if ((uVar11 & 1) != 0) {
                uVar7 = native_UILabel__get_font_ae77e8(lVar10,0);
                native_UILabel__set_font_ae79c4(lVar10,0,0);
                native_UILabel__set_font_ae79c4(lVar10,uVar7,0);
              }
            }
          }
          uVar14 = uVar14 + 1;
          if (iVar13 <= (int)uVar14) goto LAB_0080106c;
        } while (uVar14 < *(uint *)(lVar9 + 0x18));
      }
      uVar7 = native_sub_43283c();
                    /* WARNING: Subroutine does not return */
      native_sub_4327dc(uVar7,0);
    }
LAB_0080106c:
    lVar9 = native_NGUIFont__get_symbols_800814(param_1);
    if (lVar9 != 0) {
      uVar14 = *(uint *)(lVar9 + 0x18);
      if (0 < (int)uVar14) {
        lVar10 = 0;
        uVar2 = uVar14;
        while( true ) {
          if (uVar2 <= (uint)lVar10) {
            native_System_ThrowHelper__ThrowArgumentOutOfRangeException_9fe0f4(0);
          }
          lVar8 = *(long *)(*(long *)(lVar9 + 0x10) + lVar10 * 8 + 0x20);
          if (lVar8 == 0) goto LAB_008010f4;
          native_BMSymbol__MarkAsChanged_dd21c4(lVar8,0);
          if ((int)uVar14 <= (int)((uint)lVar10 + 1)) break;
          uVar2 = *(uint *)(lVar9 + 0x18);
          lVar10 = lVar10 + 1;
        }
      }
      puVar6 = (undefined8 *)(param_1 + 0x70);
      *puVar6 = 0;
      if (iRam0000000001345318 != 0) {
        puVar1 = (ulong *)(((ulong)puVar6 >> 0x12 & 0x7fff) * 8 + 0x138ecd8);
        do {
          cVar3 = '\x01';
          bVar4 = (bool)ExclusiveMonitorPass(puVar1,0x10);
          if (bVar4) {
            *puVar1 = *puVar1 | 1L << ((ulong)puVar6 >> 0xc & 0x3f);
            cVar3 = ExclusiveMonitorsStatus();
          }
        } while (cVar3 != '\0');
      }
      return;
    }
  }
LAB_008010f4:
                    /* WARNING: Subroutine does not return */
  native_sub_432810();
}



/* NGUIFont$$RenameSymbol @ 0x803e84
 * void NGUIFont__RenameSymbol (NGUIFont_o* __this, System_String_o* before, System_String_o* after, const MethodInfo* method); */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* NGUIFont$$RenameSymbol
   void NGUIFont__RenameSymbol (NGUIFont_o* __this, System_String_o* before, System_String_o* after,
   const MethodInfo* method); */

void native_NGUIFont__RenameSymbol_803e84(long param_1,undefined8 param_2,undefined8 param_3)

{
  ulong *puVar1;
  uint uVar2;
  char cVar3;
  bool bVar4;
  long *plVar5;
  undefined8 *puVar6;
  undefined8 uVar7;
  long lVar8;
  long lVar9;
  ulong uVar10;
  int *piVar11;
  long lVar12;
  int iVar13;
  uint uVar14;
  
  lVar9 = native_NGUIFont__GetSymbol_803638(param_1,param_2,0);
  if (lVar9 != 0) {
    *(undefined8 *)(lVar9 + 0x10) = param_3;
    native_sub_4326e0((undefined8 *)(lVar9 + 0x10),param_3);
  }
  if ((bRam0000000001340456 & 1) == 0) {
    native_sub_43273c(&INGUIFont_TypeInfo_12d4c70);
    native_sub_43273c(&Method_System_Collections_Generic_List_BMSymbol__get_Count___12dc578);
    native_sub_43273c(&Method_System_Collections_Generic_List_BMSymbol__get_Item___12dc580);
    native_sub_43273c(&Method_NGUITools_FindActive_UILabel____12e5710);
    native_sub_43273c(&NGUITools_TypeInfo_12d53c8);
    bRam0000000001340456 = 1;
  }
  plVar5 = (long *)native_NGUIFont__get_replacement_8001ec(param_1);
  if (plVar5 != (long *)0x0) {
    lVar9 = *plVar5;
    if ((ulong)*(ushort *)(lVar9 + 0x12a) != 0) {
      uVar10 = 0;
      piVar11 = (int *)(*(long *)(lVar9 + 0xb0) + 8);
      do {
        if (*(long *)(piVar11 + -2) == _INGUIFont_TypeInfo_12d4c70) {
          puVar6 = (undefined8 *)(lVar9 + (long)(*piVar11 + 0x27) * 0x10 + 0x138);
          goto LAB_00800f18;
        }
        uVar10 = uVar10 + 1;
        piVar11 = piVar11 + 4;
      } while (uVar10 < *(ushort *)(lVar9 + 0x12a));
    }
    puVar6 = (undefined8 *)native_sub_3c9b34(plVar5,_INGUIFont_TypeInfo_12d4c70,0x27);
LAB_00800f18:
    (*(code *)*puVar6)(plVar5,puVar6[1]);
  }
  *(undefined8 *)(param_1 + 0x90) = 0;
  native_sub_4326e0((undefined8 *)(param_1 + 0x90),0);
  if (((*(byte *)(_NGUITools_TypeInfo_12d53c8 + 0x133) >> 2 & 1) != 0) &&
     (*(int *)(_NGUITools_TypeInfo_12d53c8 + 0xe0) == 0)) {
    native_sub_4327ec();
  }
  lVar9 = native_NGUITools__FindActive_AudioListener__4a5b30
                    (_Method_NGUITools_FindActive_UILabel____12e5710);
  if (lVar9 != 0) {
    iVar13 = (int)*(undefined8 *)(lVar9 + 0x18);
    if (0 < iVar13) {
      if (iVar13 != 0) {
        uVar14 = 0;
        do {
          lVar12 = *(long *)(lVar9 + (long)(int)uVar14 * 8 + 0x20);
          if (lVar12 == 0) goto LAB_008010f4;
          uVar10 = native_UnityEngine_Behaviour__get_enabled_8d7acc(lVar12,0);
          if ((uVar10 & 1) != 0) {
            uVar7 = native_UnityEngine_Component__get_gameObject_8da66c(lVar12,0);
            if (((*(byte *)(_NGUITools_TypeInfo_12d53c8 + 0x133) >> 2 & 1) != 0) &&
               (*(int *)(_NGUITools_TypeInfo_12d53c8 + 0xe0) == 0)) {
              native_sub_4327ec(_NGUITools_TypeInfo_12d53c8);
            }
            uVar10 = native_NGUITools__GetActive_72d0d4(uVar7,0);
            if ((uVar10 & 1) != 0) {
              uVar7 = native_UILabel__get_font_ae77e8(lVar12,0);
              if (((*(byte *)(_NGUITools_TypeInfo_12d53c8 + 0x133) >> 2 & 1) != 0) &&
                 (*(int *)(_NGUITools_TypeInfo_12d53c8 + 0xe0) == 0)) {
                native_sub_4327ec(_NGUITools_TypeInfo_12d53c8);
              }
              uVar10 = native_NGUITools__CheckIfRelated_7372e0(param_1,uVar7,0);
              if ((uVar10 & 1) != 0) {
                uVar7 = native_UILabel__get_font_ae77e8(lVar12,0);
                native_UILabel__set_font_ae79c4(lVar12,0,0);
                native_UILabel__set_font_ae79c4(lVar12,uVar7,0);
              }
            }
          }
          uVar14 = uVar14 + 1;
          if (iVar13 <= (int)uVar14) goto LAB_0080106c;
        } while (uVar14 < *(uint *)(lVar9 + 0x18));
      }
      uVar7 = native_sub_43283c();
                    /* WARNING: Subroutine does not return */
      native_sub_4327dc(uVar7,0);
    }
LAB_0080106c:
    lVar9 = native_NGUIFont__get_symbols_800814(param_1);
    if (lVar9 != 0) {
      uVar14 = *(uint *)(lVar9 + 0x18);
      if (0 < (int)uVar14) {
        lVar12 = 0;
        uVar2 = uVar14;
        while( true ) {
          if (uVar2 <= (uint)lVar12) {
            native_System_ThrowHelper__ThrowArgumentOutOfRangeException_9fe0f4(0);
          }
          lVar8 = *(long *)(*(long *)(lVar9 + 0x10) + lVar12 * 8 + 0x20);
          if (lVar8 == 0) goto LAB_008010f4;
          native_BMSymbol__MarkAsChanged_dd21c4(lVar8,0);
          if ((int)uVar14 <= (int)((uint)lVar12 + 1)) break;
          uVar2 = *(uint *)(lVar9 + 0x18);
          lVar12 = lVar12 + 1;
        }
      }
      puVar6 = (undefined8 *)(param_1 + 0x70);
      *puVar6 = 0;
      if (iRam0000000001345318 != 0) {
        puVar1 = (ulong *)(((ulong)puVar6 >> 0x12 & 0x7fff) * 8 + 0x138ecd8);
        do {
          cVar3 = '\x01';
          bVar4 = (bool)ExclusiveMonitorPass(puVar1,0x10);
          if (bVar4) {
            *puVar1 = *puVar1 | 1L << ((ulong)puVar6 >> 0xc & 0x3f);
            cVar3 = ExclusiveMonitorsStatus();
          }
        } while (cVar3 != '\0');
      }
      return;
    }
  }
LAB_008010f4:
                    /* WARNING: Subroutine does not return */
  native_sub_432810();
}



/* NGUIFont$$UsesSprite @ 0x803ec0
 * bool NGUIFont__UsesSprite (NGUIFont_o* __this, System_String_o* s, const MethodInfo* method); */

/* NGUIFont$$UsesSprite
   bool NGUIFont__UsesSprite (NGUIFont_o* __this, System_String_o* s, const MethodInfo* method); */

undefined8 native_NGUIFont__UsesSprite_803ec0(undefined8 param_1,long param_2)

{
  uint uVar1;
  uint uVar2;
  ulong uVar3;
  undefined8 uVar4;
  long lVar5;
  long lVar6;
  long lVar7;
  
  if ((bRam000000000134045b & 1) == 0) {
    native_sub_43273c(&Method_System_Collections_Generic_List_BMSymbol__get_Count___12dc578);
    native_sub_43273c(&Method_System_Collections_Generic_List_BMSymbol__get_Item___12dc580);
    bRam000000000134045b = 1;
  }
  uVar3 = native_System_String__IsNullOrEmpty_b09430(param_2,0);
  if ((uVar3 & 1) != 0) {
    return 0;
  }
  uVar4 = native_NGUIFont__get_spriteName_801f30(param_1);
  if (param_2 != 0) {
    uVar3 = native_System_String__Equals_af8bfc(param_2,uVar4,0);
    if ((uVar3 & 1) != 0) {
      return 1;
    }
    lVar5 = native_NGUIFont__get_symbols_800814(param_1);
    if (lVar5 != 0) {
      uVar1 = *(uint *)(lVar5 + 0x18);
      if ((int)uVar1 < 1) {
        return 0;
      }
      lVar7 = 0;
      uVar2 = uVar1;
      while( true ) {
        if (uVar2 <= (uint)lVar7) {
          native_System_ThrowHelper__ThrowArgumentOutOfRangeException_9fe0f4(0);
        }
        lVar6 = *(long *)(*(long *)(lVar5 + 0x10) + lVar7 * 8 + 0x20);
        if (lVar6 == 0) break;
        uVar3 = native_System_String__Equals_af8bfc(param_2,*(undefined8 *)(lVar6 + 0x18),0);
        if ((uVar3 & 1) != 0) {
          return 1;
        }
        if ((int)uVar1 <= (int)((uint)lVar7 + 1)) {
          return 0;
        }
        uVar2 = *(uint *)(lVar5 + 0x18);
        lVar7 = lVar7 + 1;
      }
    }
  }
                    /* WARNING: Subroutine does not return */
  native_sub_432810();
}



/* NGUIFont$$get_kerningCount @ 0x803fc4
 * int32_t NGUIFont__get_kerningCount (NGUIFont_o* __this, const MethodInfo* method); */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* NGUIFont$$get_kerningCount
   int32_t NGUIFont__get_kerningCount (NGUIFont_o* __this, const MethodInfo* method); */

int native_NGUIFont__get_kerningCount_803fc4(long param_1)

{
  int iVar1;
  long *plVar2;
  ulong uVar3;
  long lVar4;
  undefined8 uStack_38;
  undefined8 uStack_30;
  long lStack_28;
  
  if ((bRam000000000134045c & 1) == 0) {
    native_sub_43273c(&Method_System_Collections_Generic_List_Enumerator_BMGlyph__Dispose___12da408)
    ;
    native_sub_43273c(&Method_System_Collections_Generic_List_Enumerator_BMGlyph__MoveNext___12da410
                     );
    native_sub_43273c(&
                      Method_System_Collections_Generic_List_Enumerator_BMGlyph__get_Current___12da418
                     );
    native_sub_43273c(&Method_System_Collections_Generic_List_BMGlyph__GetEnumerator___12dc548);
    native_sub_43273c(&
                      Method_System_Collections_Generic_List_NGUIFont_KerningAdjustment__get_Count___12dd770
                     );
    native_sub_43273c(&Method_System_Collections_Generic_List_int__get_Count___12dcad0);
    native_sub_43273c(&NGUIFont_TypeInfo_12d53b0);
    native_sub_43273c(&UnityEngine_Object_TypeInfo_12d54e0);
    bRam000000000134045c = 1;
  }
  uStack_38 = 0;
  uStack_30 = 0;
  lStack_28 = 0;
  iVar1 = native_NGUIFont__get_type_80001c(param_1);
  if (iVar1 == 2) {
    plVar2 = (long *)native_NGUIFont__get_replacement_8001ec(param_1);
    if (plVar2 == (long *)0x0) {
LAB_00804090:
      plVar2 = (long *)0x0;
    }
    else {
      if (*(byte *)(*plVar2 + 300) < *(byte *)(_NGUIFont_TypeInfo_12d53b0 + 300)) goto LAB_00804090;
      if (*(long *)(*(long *)(*plVar2 + 200) +
                    (ulong)*(byte *)(_NGUIFont_TypeInfo_12d53b0 + 300) * 8 + -8) !=
          _NGUIFont_TypeInfo_12d53b0) {
        plVar2 = (long *)0x0;
      }
    }
    if (((*(byte *)(_UnityEngine_Object_TypeInfo_12d54e0 + 0x133) >> 2 & 1) != 0) &&
       (*(int *)(_UnityEngine_Object_TypeInfo_12d54e0 + 0xe0) == 0)) {
      native_sub_4327ec();
    }
    uVar3 = native_UnityEngine_Object__op_Inequality_8d76fc(plVar2,0,0);
    if ((uVar3 & 1) != 0) {
      if (plVar2 != (long *)0x0) {
        iVar1 = native_NGUIFont__get_kerningCount_803fc4(plVar2);
        return iVar1;
      }
      goto LAB_008041b4;
    }
  }
  iVar1 = native_NGUIFont__get_type_80001c(param_1);
  if ((iVar1 == 1) && (lVar4 = native_NGUIFont__get_bmFont_800128(param_1), lVar4 != 0)) {
    lVar4 = native_NGUIFont__get_bmFont_800128(param_1);
    if (lVar4 == 0) {
LAB_008041b4:
                    /* WARNING: Subroutine does not return */
      native_sub_432810();
    }
    if (*(long *)(lVar4 + 0x28) != 0) {
      native_System_Collections_Generic_List_BE2_Op_FunctionLocalVariable___GetEnumerator_d414fc
                (&uStack_38,*(long *)(lVar4 + 0x28),
                 _Method_System_Collections_Generic_List_BMGlyph__GetEnumerator___12dc548);
      iVar1 = 0;
      while( true ) {
        uVar3 = native_System_Collections_Generic_List_Enumerator_BE2_Op_FunctionLocalVariable___MoveNext_7e8f30
                          (&uStack_38,
                           _Method_System_Collections_Generic_List_Enumerator_BMGlyph__MoveNext___12da410
                          );
        if ((uVar3 & 1) == 0) {
          native_System_Collections_Generic_List_Enumerator_BE2_Op_FunctionLocalVariable___Dispose_7e8f2c
                    (&uStack_38,
                     _Method_System_Collections_Generic_List_Enumerator_BMGlyph__Dispose___12da408);
          return iVar1;
        }
        if (lStack_28 == 0) break;
        if (*(long *)(lStack_28 + 0x38) != 0) {
          iVar1 = *(int *)(*(long *)(lStack_28 + 0x38) + 0x18) + iVar1;
        }
      }
                    /* WARNING: Subroutine does not return */
      native_sub_432810();
    }
  }
  else if (*(long *)(param_1 + 0xa0) != 0) {
    return *(int *)(*(long *)(param_1 + 0xa0) + 0x18);
  }
  return 0;
}



/* NGUIFont$$get_kerningData @ 0x8041f8
 * System_Collections_Generic_List_NGUIFont_KerningAdjustment__o* NGUIFont__get_kerningData (NGUIFont_o* __this, const MethodInfo* method); */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* NGUIFont$$get_kerningData
   System_Collections_Generic_List_NGUIFont_KerningAdjustment__o* NGUIFont__get_kerningData
   (NGUIFont_o* __this, const MethodInfo* method); */

long native_NGUIFont__get_kerningData_8041f8(long *param_1)

{
  int iVar1;
  long *plVar2;
  ulong uVar3;
  long lVar4;
  
  do {
    if ((bRam000000000134045d & 1) == 0) {
      native_sub_43273c(&NGUIFont_TypeInfo_12d53b0);
      native_sub_43273c(&UnityEngine_Object_TypeInfo_12d54e0);
      bRam000000000134045d = 1;
    }
    iVar1 = native_NGUIFont__get_type_80001c(param_1);
    if (iVar1 != 2) goto LAB_008042cc;
    plVar2 = (long *)native_NGUIFont__get_replacement_8001ec(param_1);
    if (plVar2 == (long *)0x0) {
LAB_00804278:
      plVar2 = (long *)0x0;
    }
    else {
      if (*(byte *)(*plVar2 + 300) < *(byte *)(_NGUIFont_TypeInfo_12d53b0 + 300)) goto LAB_00804278;
      if (*(long *)(*(long *)(*plVar2 + 200) +
                    (ulong)*(byte *)(_NGUIFont_TypeInfo_12d53b0 + 300) * 8 + -8) !=
          _NGUIFont_TypeInfo_12d53b0) {
        plVar2 = (long *)0x0;
      }
    }
    if (((*(byte *)(_UnityEngine_Object_TypeInfo_12d54e0 + 0x133) >> 2 & 1) != 0) &&
       (*(int *)(_UnityEngine_Object_TypeInfo_12d54e0 + 0xe0) == 0)) {
      native_sub_4327ec();
    }
    uVar3 = native_UnityEngine_Object__op_Inequality_8d76fc(plVar2,0,0);
    if ((uVar3 & 1) == 0) {
LAB_008042cc:
      iVar1 = native_NGUIFont__get_type_80001c(param_1);
      if (iVar1 == 1) {
        lVar4 = 0;
      }
      else {
        lVar4 = param_1[0x14];
      }
      return lVar4;
    }
    param_1 = plVar2;
    if (plVar2 == (long *)0x0) {
                    /* WARNING: Subroutine does not return */
      native_sub_432810();
    }
  } while( true );
}



/* NGUIFont$$GetKerning @ 0x8042fc
 * int32_t NGUIFont__GetKerning (NGUIFont_o* __this, int32_t previousChar, int32_t currentChar, const MethodInfo* method); */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* NGUIFont$$GetKerning
   int32_t NGUIFont__GetKerning (NGUIFont_o* __this, int32_t previousChar, int32_t currentChar,
   const MethodInfo* method); */

long native_NGUIFont__GetKerning_8042fc(long param_1,int param_2,uint param_3)

{
  int iVar1;
  long *plVar2;
  ulong uVar3;
  long lVar4;
  undefined8 uVar5;
  undefined8 uStack_80;
  undefined8 uStack_78;
  undefined8 uStack_70;
  ulong uStack_68;
  undefined8 uStack_60;
  undefined8 uStack_58;
  undefined8 uStack_50;
  ulong uStack_48;
  short asStack_34 [2];
  
  if ((bRam000000000134045e & 1) == 0) {
    native_sub_43273c(&
                      Method_System_Collections_Generic_Dictionary_uint__short__TryGetValue___12d9ae8
                     );
    native_sub_43273c(&Method_System_Collections_Generic_Dictionary_uint__short___ctor___12d9aa8);
    native_sub_43273c(&Method_System_Collections_Generic_Dictionary_uint__short__set_Item___12d9b00)
    ;
    native_sub_43273c(&System_Collections_Generic_Dictionary_uint__short__TypeInfo_12d2428);
    native_sub_43273c(&
                      Method_System_Collections_Generic_List_Enumerator_NGUIFont_KerningAdjustment__Dispose___12da768
                     );
    native_sub_43273c(&
                      Method_System_Collections_Generic_List_Enumerator_NGUIFont_KerningAdjustment__MoveNext___12da770
                     );
    native_sub_43273c(&
                      Method_System_Collections_Generic_List_Enumerator_NGUIFont_KerningAdjustment__get_Current___12da778
                     );
    native_sub_43273c(&
                      Method_System_Collections_Generic_List_NGUIFont_KerningAdjustment__GetEnumerator___12dd760
                     );
    native_sub_43273c(&
                      Method_System_Collections_Generic_List_NGUIFont_KerningAdjustment__get_Count___12dd770
                     );
    native_sub_43273c(&NGUIFont_TypeInfo_12d53b0);
    native_sub_43273c(&UnityEngine_Object_TypeInfo_12d54e0);
    bRam000000000134045e = 1;
  }
  asStack_34[0] = 0;
  uStack_58 = 0;
  uStack_60 = 0;
  uStack_48 = 0;
  uStack_50 = 0;
  iVar1 = native_NGUIFont__get_type_80001c(param_1);
  if (iVar1 == 2) {
    plVar2 = (long *)native_NGUIFont__get_replacement_8001ec(param_1);
    if (plVar2 == (long *)0x0) {
LAB_00804400:
      plVar2 = (long *)0x0;
    }
    else {
      if (*(byte *)(*plVar2 + 300) < *(byte *)(_NGUIFont_TypeInfo_12d53b0 + 300)) goto LAB_00804400;
      if (*(long *)(*(long *)(*plVar2 + 200) +
                    (ulong)*(byte *)(_NGUIFont_TypeInfo_12d53b0 + 300) * 8 + -8) !=
          _NGUIFont_TypeInfo_12d53b0) {
        plVar2 = (long *)0x0;
      }
    }
    if (((*(byte *)(_UnityEngine_Object_TypeInfo_12d54e0 + 0x133) >> 2 & 1) != 0) &&
       (*(int *)(_UnityEngine_Object_TypeInfo_12d54e0 + 0xe0) == 0)) {
      native_sub_4327ec();
    }
    uVar3 = native_UnityEngine_Object__op_Inequality_8d76fc(plVar2,0,0);
    if ((uVar3 & 1) != 0) {
      if (plVar2 != (long *)0x0) {
        lVar4 = native_NGUIFont__GetKerning_8042fc(plVar2,param_2,param_3);
        return lVar4;
      }
      goto LAB_008045c0;
    }
  }
  if (param_2 != 0) {
    iVar1 = native_NGUIFont__get_type_80001c(param_1);
    if (iVar1 == 1) {
      lVar4 = native_NGUIFont__get_bmFont_800128(param_1);
      if (lVar4 == 0) {
        return 0;
      }
      lVar4 = native_BMFont__GetGlyph_dd1c0c(lVar4,param_3,0);
      if (lVar4 == 0) {
        return 0;
      }
      lVar4 = native_BMGlyph__GetKerning_dd1ed4(lVar4,param_2,0);
      return lVar4;
    }
    if ((*(long *)(param_1 + 0xa0) != 0) && (*(int *)(*(long *)(param_1 + 0xa0) + 0x18) != 0)) {
      plVar2 = (long *)(param_1 + 0xa8);
      lVar4 = *plVar2;
      if (lVar4 == 0) {
        uVar5 = native_sub_432808(
                                 _System_Collections_Generic_Dictionary_uint__short__TypeInfo_12d2428
                                 );
        native_System_Collections_Generic_Dictionary_uint__short____ctor_ce68cc
                  (uVar5,_Method_System_Collections_Generic_Dictionary_uint__short___ctor___12d9aa8)
        ;
        *(undefined8 *)(param_1 + 0xa8) = uVar5;
        native_sub_4326e0(plVar2,uVar5);
        if (*(long *)(param_1 + 0xa0) == 0) {
LAB_008045c0:
                    /* WARNING: Subroutine does not return */
          native_sub_432810();
        }
        native_System_Collections_Generic_List_NGUIFont_KerningAdjustment___GetEnumerator_c77274
                  (&uStack_80,*(long *)(param_1 + 0xa0),
                   _Method_System_Collections_Generic_List_NGUIFont_KerningAdjustment__GetEnumerator___12dd760
                  );
        uStack_58 = uStack_78;
        uStack_60 = uStack_80;
        uStack_48 = uStack_68;
        uStack_50 = uStack_70;
        while (uVar3 = native_System_Collections_Generic_List_Enumerator_NGUIFont_KerningAdjustment___MoveNext_7ec4f4
                                 (&uStack_60,
                                  _Method_System_Collections_Generic_List_Enumerator_NGUIFont_KerningAdjustment__MoveNext___12da770
                                 ), (uVar3 & 1) != 0) {
          if (*plVar2 == 0) {
                    /* WARNING: Subroutine does not return */
            native_sub_432810();
          }
          native_System_Collections_Generic_Dictionary_uint__short___set_Item_ce6d84
                    (*plVar2,(uint)((ulong)uStack_50 >> 0x20) | (int)uStack_50 << 0x10,
                     uStack_48 & 0xffffffff,
                     _Method_System_Collections_Generic_Dictionary_uint__short__set_Item___12d9b00);
        }
        native_System_Collections_Generic_List_Enumerator_NGUIFont_KerningAdjustment___Dispose_7ec4f0
                  (&uStack_60,
                   _Method_System_Collections_Generic_List_Enumerator_NGUIFont_KerningAdjustment__Dispose___12da768
                  );
        lVar4 = *plVar2;
        if (lVar4 == 0) goto LAB_008045c0;
      }
      uVar3 = native_System_Collections_Generic_Dictionary_uint__short___TryGetValue_ce89c0
                        (lVar4,param_3 | param_2 << 0x10,asStack_34,
                         _Method_System_Collections_Generic_Dictionary_uint__short__TryGetValue___12d9ae8
                        );
      if ((uVar3 & 1) != 0) {
        return (long)asStack_34[0];
      }
    }
  }
  return 0;
}



/* NGUIFont$$SetKerning @ 0x804608
 * void NGUIFont__SetKerning (NGUIFont_o* __this, System_Collections_Generic_List_NGUIFont_KerningAdjustment__o* kerning, const MethodInfo* method); */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* NGUIFont$$SetKerning
   void NGUIFont__SetKerning (NGUIFont_o* __this,
   System_Collections_Generic_List_NGUIFont_KerningAdjustment__o* kerning, const MethodInfo*
   method); */

void native_NGUIFont__SetKerning_804608(long param_1,long param_2)

{
  int iVar1;
  long *plVar2;
  ulong uVar3;
  long lVar4;
  undefined8 uVar5;
  undefined8 uStack_90;
  undefined8 uStack_88;
  undefined8 uStack_80;
  ulong uStack_78;
  undefined8 uStack_70;
  undefined8 uStack_68;
  undefined8 uStack_60;
  ulong uStack_58;
  
  if ((bRam000000000134045f & 1) == 0) {
    native_sub_43273c(&Method_System_Collections_Generic_Dictionary_uint__short___ctor___12d9aa8);
    native_sub_43273c(&Method_System_Collections_Generic_Dictionary_uint__short__set_Item___12d9b00)
    ;
    native_sub_43273c(&System_Collections_Generic_Dictionary_uint__short__TypeInfo_12d2428);
    native_sub_43273c(&
                      Method_System_Collections_Generic_List_Enumerator_NGUIFont_KerningAdjustment__Dispose___12da768
                     );
    native_sub_43273c(&
                      Method_System_Collections_Generic_List_Enumerator_NGUIFont_KerningAdjustment__MoveNext___12da770
                     );
    native_sub_43273c(&
                      Method_System_Collections_Generic_List_Enumerator_NGUIFont_KerningAdjustment__get_Current___12da778
                     );
    native_sub_43273c(&
                      Method_System_Collections_Generic_List_NGUIFont_KerningAdjustment__Add___12dd758
                     );
    native_sub_43273c(&
                      Method_System_Collections_Generic_List_NGUIFont_KerningAdjustment__GetEnumerator___12dd760
                     );
    native_sub_43273c(&
                      Method_System_Collections_Generic_List_NGUIFont_KerningAdjustment___ctor___12dd750
                     );
    native_sub_43273c(&
                      Method_System_Collections_Generic_List_NGUIFont_KerningAdjustment__get_Count___12dd770
                     );
    native_sub_43273c(&System_Collections_Generic_List_NGUIFont_KerningAdjustment__TypeInfo_12d2ce8)
    ;
    native_sub_43273c(&NGUIFont_TypeInfo_12d53b0);
    native_sub_43273c(&UnityEngine_Object_TypeInfo_12d54e0);
    bRam000000000134045f = 1;
  }
  uStack_68 = 0;
  uStack_70 = 0;
  uStack_58 = 0;
  uStack_60 = 0;
  iVar1 = native_NGUIFont__get_type_80001c(param_1);
  if (iVar1 != 2) goto LAB_00804784;
  plVar2 = (long *)native_NGUIFont__get_replacement_8001ec(param_1);
  if (plVar2 == (long *)0x0) {
LAB_00804720:
    plVar2 = (long *)0x0;
  }
  else {
    if (*(byte *)(*plVar2 + 300) < *(byte *)(_NGUIFont_TypeInfo_12d53b0 + 300)) goto LAB_00804720;
    if (*(long *)(*(long *)(*plVar2 + 200) + (ulong)*(byte *)(_NGUIFont_TypeInfo_12d53b0 + 300) * 8
                 + -8) != _NGUIFont_TypeInfo_12d53b0) {
      plVar2 = (long *)0x0;
    }
  }
  if (((*(byte *)(_UnityEngine_Object_TypeInfo_12d54e0 + 0x133) >> 2 & 1) != 0) &&
     (*(int *)(_UnityEngine_Object_TypeInfo_12d54e0 + 0xe0) == 0)) {
    native_sub_4327ec();
  }
  uVar3 = native_UnityEngine_Object__op_Inequality_8d76fc(plVar2,0,0);
  if ((uVar3 & 1) != 0) {
    if (plVar2 != (long *)0x0) {
      native_NGUIFont__SetKerning_804608(plVar2,param_2);
      return;
    }
                    /* WARNING: Subroutine does not return */
    native_sub_432810();
  }
LAB_00804784:
  if ((param_2 == 0) || (*(int *)(param_2 + 0x18) == 0)) {
    if (*(long *)(param_1 + 0xa0) == 0) {
      return;
    }
    *(undefined8 *)(param_1 + 0xa0) = 0;
    native_sub_4326e0((long *)(param_1 + 0xa0),0);
    *(undefined8 *)(param_1 + 0xa8) = 0;
    native_sub_4326e0((undefined8 *)(param_1 + 0xa8),0);
  }
  else {
    lVar4 = native_sub_432808(
                             _System_Collections_Generic_List_NGUIFont_KerningAdjustment__TypeInfo_12d2ce8
                             );
    native_System_Collections_Generic_List_NGUIFont_KerningAdjustment____ctor_c75b84
              (lVar4,
               _Method_System_Collections_Generic_List_NGUIFont_KerningAdjustment___ctor___12dd750);
    plVar2 = (long *)(param_1 + 0xa0);
    *plVar2 = lVar4;
    native_sub_4326e0(plVar2,lVar4);
    uVar5 = native_sub_432808(_System_Collections_Generic_Dictionary_uint__short__TypeInfo_12d2428);
    native_System_Collections_Generic_Dictionary_uint__short____ctor_ce68cc
              (uVar5,_Method_System_Collections_Generic_Dictionary_uint__short___ctor___12d9aa8);
    *(undefined8 *)(param_1 + 0xa8) = uVar5;
    native_sub_4326e0((long *)(param_1 + 0xa8),uVar5);
    native_System_Collections_Generic_List_NGUIFont_KerningAdjustment___GetEnumerator_c77274
              (&uStack_90,param_2,
               _Method_System_Collections_Generic_List_NGUIFont_KerningAdjustment__GetEnumerator___12dd760
              );
    uStack_68 = uStack_88;
    uStack_70 = uStack_90;
    uStack_58 = uStack_78;
    uStack_60 = uStack_80;
    while (uVar3 = native_System_Collections_Generic_List_Enumerator_NGUIFont_KerningAdjustment___MoveNext_7ec4f4
                             (&uStack_70,
                              _Method_System_Collections_Generic_List_Enumerator_NGUIFont_KerningAdjustment__MoveNext___12da770
                             ), uVar5 = uStack_60, (uVar3 & 1) != 0) {
      if (*plVar2 == 0) {
                    /* WARNING: Subroutine does not return */
        native_sub_432810();
      }
      uVar3 = uStack_58 & 0xffffffff;
      native_System_Collections_Generic_List_NGUIFont_KerningAdjustment___Add_c76920
                (*plVar2,uStack_60,uVar3,
                 _Method_System_Collections_Generic_List_NGUIFont_KerningAdjustment__Add___12dd758);
      lVar4 = *(long *)(param_1 + 0xa8);
      if (lVar4 == 0) {
                    /* WARNING: Subroutine does not return */
        native_sub_432810();
      }
      native_System_Collections_Generic_Dictionary_uint__short___set_Item_ce6d84
                (lVar4,(uint)((ulong)uVar5 >> 0x20) | (int)uVar5 << 0x10,uVar3,
                 _Method_System_Collections_Generic_Dictionary_uint__short__set_Item___12d9b00);
    }
    native_System_Collections_Generic_List_Enumerator_NGUIFont_KerningAdjustment___Dispose_7ec4f0
              (&uStack_70,
               _Method_System_Collections_Generic_List_Enumerator_NGUIFont_KerningAdjustment__Dispose___12da768
              );
  }
  native_NGUIFont__MarkAsChanged_800e3c(param_1);
  return;
}



/* NGUIFont$$SetKerning @ 0x804944
 * void NGUIFont__SetKerning (NGUIFont_o* __this, int32_t previousChar, int32_t currentChar, int32_t amount, const MethodInfo* method); */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* NGUIFont$$SetKerning
   void NGUIFont__SetKerning (NGUIFont_o* __this, int32_t previousChar, int32_t currentChar, int32_t
   amount, const MethodInfo* method); */

void native_NGUIFont__SetKerning_804944(long *param_1,uint param_2,long param_3,int param_4)

{
  ulong *puVar1;
  uint uVar2;
  char cVar3;
  bool bVar4;
  int iVar5;
  undefined8 *puVar6;
  undefined8 uVar7;
  long lVar8;
  long *plVar9;
  ulong uVar10;
  long lVar11;
  int *piVar12;
  long *plVar13;
  long lVar14;
  uint uVar15;
  
  do {
    if ((bRam0000000001340460 & 1) == 0) {
      native_sub_43273c(&Method_System_Collections_Generic_Dictionary_uint__short___ctor___12d9aa8);
      native_sub_43273c(&
                        Method_System_Collections_Generic_Dictionary_uint__short__set_Item___12d9b00
                       );
      native_sub_43273c(&System_Collections_Generic_Dictionary_uint__short__TypeInfo_12d2428);
      native_sub_43273c(&
                        Method_System_Collections_Generic_List_NGUIFont_KerningAdjustment__Add___12dd758
                       );
      native_sub_43273c(&
                        Method_System_Collections_Generic_List_NGUIFont_KerningAdjustment__RemoveAt___12dd768
                       );
      native_sub_43273c(&
                        Method_System_Collections_Generic_List_NGUIFont_KerningAdjustment___ctor___12dd750
                       );
      native_sub_43273c(&
                        Method_System_Collections_Generic_List_NGUIFont_KerningAdjustment__get_Count___12dd770
                       );
      native_sub_43273c(&
                        Method_System_Collections_Generic_List_NGUIFont_KerningAdjustment__get_Item___12dd778
                       );
      native_sub_43273c(&
                        Method_System_Collections_Generic_List_NGUIFont_KerningAdjustment__set_Item___12dd780
                       );
      native_sub_43273c(&
                        System_Collections_Generic_List_NGUIFont_KerningAdjustment__TypeInfo_12d2ce8
                       );
      native_sub_43273c(&NGUIFont_TypeInfo_12d53b0);
      native_sub_43273c(&UnityEngine_Object_TypeInfo_12d54e0);
      bRam0000000001340460 = 1;
    }
    iVar5 = native_NGUIFont__get_type_80001c(param_1);
    if (iVar5 != 2) {
LAB_00804ab4:
      iVar5 = native_NGUIFont__get_type_80001c(param_1);
      if (iVar5 == 1) {
        lVar11 = native_NGUIFont__get_bmFont_800128(param_1);
        if (lVar11 == 0) {
          return;
        }
        lVar11 = native_BMFont__GetGlyph_dd1c0c(lVar11,param_3,0);
        if (lVar11 == 0) {
          return;
        }
        native_BMGlyph__SetKerning_dd1fcc(lVar11,param_2,param_4,0);
        goto native_NGUIFont__MarkAsChanged_800e3c;
      }
      plVar9 = param_1 + 0x14;
      if (*plVar9 == 0) {
        lVar11 = native_sub_432808(
                                  _System_Collections_Generic_List_NGUIFont_KerningAdjustment__TypeInfo_12d2ce8
                                  );
        native_System_Collections_Generic_List_NGUIFont_KerningAdjustment____ctor_c75b84
                  (lVar11,
                   _Method_System_Collections_Generic_List_NGUIFont_KerningAdjustment___ctor___12dd750
                  );
        *plVar9 = lVar11;
        native_sub_4326e0(plVar9,lVar11);
      }
      plVar13 = param_1 + 0x15;
      lVar11 = *plVar13;
      if (lVar11 == 0) {
        lVar11 = native_sub_432808(
                                  _System_Collections_Generic_Dictionary_uint__short__TypeInfo_12d2428
                                  );
        native_System_Collections_Generic_Dictionary_uint__short____ctor_ce68cc
                  (lVar11,_Method_System_Collections_Generic_Dictionary_uint__short___ctor___12d9aa8
                  );
        *plVar13 = lVar11;
        native_sub_4326e0(plVar13,lVar11);
        lVar11 = *plVar13;
        if (lVar11 == 0) break;
      }
      native_System_Collections_Generic_Dictionary_uint__short___set_Item_ce6d84
                (lVar11,(uint)param_3 | param_2 << 0x10,param_4,
                 _Method_System_Collections_Generic_Dictionary_uint__short__set_Item___12d9b00);
      lVar11 = *plVar9;
      if (lVar11 != 0) {
        iVar5 = *(int *)(lVar11 + 0x18);
        if (iVar5 < 1) goto LAB_00804bfc;
        uVar15 = 0;
        goto LAB_00804bac;
      }
      break;
    }
    plVar9 = (long *)native_NGUIFont__get_replacement_8001ec(param_1);
    if (plVar9 == (long *)0x0) {
LAB_00804a60:
      plVar9 = (long *)0x0;
    }
    else {
      if (*(byte *)(*plVar9 + 300) < *(byte *)(_NGUIFont_TypeInfo_12d53b0 + 300)) goto LAB_00804a60;
      if (*(long *)(*(long *)(*plVar9 + 200) +
                    (ulong)*(byte *)(_NGUIFont_TypeInfo_12d53b0 + 300) * 8 + -8) !=
          _NGUIFont_TypeInfo_12d53b0) {
        plVar9 = (long *)0x0;
      }
    }
    if (((*(byte *)(_UnityEngine_Object_TypeInfo_12d54e0 + 0x133) >> 2 & 1) != 0) &&
       (*(int *)(_UnityEngine_Object_TypeInfo_12d54e0 + 0xe0) == 0)) {
      native_sub_4327ec();
    }
    uVar10 = native_UnityEngine_Object__op_Inequality_8d76fc(plVar9,0,0);
    if ((uVar10 & 1) == 0) goto LAB_00804ab4;
    param_1 = plVar9;
  } while (plVar9 != (long *)0x0);
  goto LAB_00804ab0;
  while( true ) {
    uVar15 = uVar15 + 1;
    if (iVar5 <= (int)uVar15) goto LAB_00804bfc;
    lVar11 = *plVar9;
    if (lVar11 == 0) break;
LAB_00804bac:
    if (*(uint *)(lVar11 + 0x18) <= uVar15) {
      native_System_ThrowHelper__ThrowArgumentOutOfRangeException_9fe0f4(0);
    }
    uVar7 = *(undefined8 *)(*(long *)(lVar11 + 0x10) + (long)(int)uVar15 * 0xc + 0x20);
    if (((uint)uVar7 == param_2) && ((uint)((ulong)uVar7 >> 0x20) == (uint)param_3)) {
      if (*(int *)(*(long *)(lVar11 + 0x10) + (long)(int)uVar15 * 0xc + 0x28) == param_4) {
        return;
      }
      lVar11 = *plVar9;
      if (param_4 == 0) {
        if (lVar11 != 0) {
          native_System_Collections_Generic_List_NGUIFont_KerningAdjustment___RemoveAt_c78084
                    (lVar11,uVar15,
                     _Method_System_Collections_Generic_List_NGUIFont_KerningAdjustment__RemoveAt___12dd768
                    );
          goto native_NGUIFont__MarkAsChanged_800e3c;
        }
      }
      else if (lVar11 != 0) {
        native_System_Collections_Generic_List_NGUIFont_KerningAdjustment___set_Item_c765b4
                  (lVar11,uVar15,uVar7,param_4,
                   _Method_System_Collections_Generic_List_NGUIFont_KerningAdjustment__set_Item___12dd780
                  );
        goto native_NGUIFont__MarkAsChanged_800e3c;
      }
      break;
    }
  }
  goto LAB_00804ab0;
LAB_00804bfc:
  if (param_4 == 0) {
    return;
  }
  if (*plVar9 != 0) {
    native_System_Collections_Generic_List_NGUIFont_KerningAdjustment___Add_c76920
              (*plVar9,(ulong)param_2 | param_3 << 0x20,param_4,
               _Method_System_Collections_Generic_List_NGUIFont_KerningAdjustment__Add___12dd758);
native_NGUIFont__MarkAsChanged_800e3c:
    if ((bRam0000000001340456 & 1) == 0) {
      native_sub_43273c(&INGUIFont_TypeInfo_12d4c70);
      native_sub_43273c(&Method_System_Collections_Generic_List_BMSymbol__get_Count___12dc578);
      native_sub_43273c(&Method_System_Collections_Generic_List_BMSymbol__get_Item___12dc580);
      native_sub_43273c(&Method_NGUITools_FindActive_UILabel____12e5710);
      native_sub_43273c(&NGUITools_TypeInfo_12d53c8);
      bRam0000000001340456 = 1;
    }
    plVar9 = (long *)native_NGUIFont__get_replacement_8001ec(param_1);
    if (plVar9 != (long *)0x0) {
      lVar11 = *plVar9;
      if ((ulong)*(ushort *)(lVar11 + 0x12a) != 0) {
        uVar10 = 0;
        piVar12 = (int *)(*(long *)(lVar11 + 0xb0) + 8);
        do {
          if (*(long *)(piVar12 + -2) == _INGUIFont_TypeInfo_12d4c70) {
            puVar6 = (undefined8 *)(lVar11 + (long)(*piVar12 + 0x27) * 0x10 + 0x138);
            goto LAB_00800f18;
          }
          uVar10 = uVar10 + 1;
          piVar12 = piVar12 + 4;
        } while (uVar10 < *(ushort *)(lVar11 + 0x12a));
      }
      puVar6 = (undefined8 *)native_sub_3c9b34(plVar9,_INGUIFont_TypeInfo_12d4c70,0x27);
LAB_00800f18:
      (*(code *)*puVar6)(plVar9,puVar6[1]);
    }
    param_1[0x12] = 0;
    native_sub_4326e0(param_1 + 0x12,0);
    if (((*(byte *)(_NGUITools_TypeInfo_12d53c8 + 0x133) >> 2 & 1) != 0) &&
       (*(int *)(_NGUITools_TypeInfo_12d53c8 + 0xe0) == 0)) {
      native_sub_4327ec();
    }
    lVar11 = native_NGUITools__FindActive_AudioListener__4a5b30
                       (_Method_NGUITools_FindActive_UILabel____12e5710);
    if (lVar11 != 0) {
      iVar5 = (int)*(undefined8 *)(lVar11 + 0x18);
      if (0 < iVar5) {
        if (iVar5 != 0) {
          uVar15 = 0;
          do {
            lVar14 = *(long *)(lVar11 + (long)(int)uVar15 * 8 + 0x20);
            if (lVar14 == 0) goto LAB_008010f4;
            uVar10 = native_UnityEngine_Behaviour__get_enabled_8d7acc(lVar14,0);
            if ((uVar10 & 1) != 0) {
              uVar7 = native_UnityEngine_Component__get_gameObject_8da66c(lVar14,0);
              if (((*(byte *)(_NGUITools_TypeInfo_12d53c8 + 0x133) >> 2 & 1) != 0) &&
                 (*(int *)(_NGUITools_TypeInfo_12d53c8 + 0xe0) == 0)) {
                native_sub_4327ec(_NGUITools_TypeInfo_12d53c8);
              }
              uVar10 = native_NGUITools__GetActive_72d0d4(uVar7,0);
              if ((uVar10 & 1) != 0) {
                uVar7 = native_UILabel__get_font_ae77e8(lVar14,0);
                if (((*(byte *)(_NGUITools_TypeInfo_12d53c8 + 0x133) >> 2 & 1) != 0) &&
                   (*(int *)(_NGUITools_TypeInfo_12d53c8 + 0xe0) == 0)) {
                  native_sub_4327ec(_NGUITools_TypeInfo_12d53c8);
                }
                uVar10 = native_NGUITools__CheckIfRelated_7372e0(param_1,uVar7,0);
                if ((uVar10 & 1) != 0) {
                  uVar7 = native_UILabel__get_font_ae77e8(lVar14,0);
                  native_UILabel__set_font_ae79c4(lVar14,0,0);
                  native_UILabel__set_font_ae79c4(lVar14,uVar7,0);
                }
              }
            }
            uVar15 = uVar15 + 1;
            if (iVar5 <= (int)uVar15) goto LAB_0080106c;
          } while (uVar15 < *(uint *)(lVar11 + 0x18));
        }
        uVar7 = native_sub_43283c();
                    /* WARNING: Subroutine does not return */
        native_sub_4327dc(uVar7,0);
      }
LAB_0080106c:
      lVar11 = native_NGUIFont__get_symbols_800814(param_1);
      if (lVar11 != 0) {
        uVar15 = *(uint *)(lVar11 + 0x18);
        if (0 < (int)uVar15) {
          lVar14 = 0;
          uVar2 = uVar15;
          while( true ) {
            if (uVar2 <= (uint)lVar14) {
              native_System_ThrowHelper__ThrowArgumentOutOfRangeException_9fe0f4(0);
            }
            lVar8 = *(long *)(*(long *)(lVar11 + 0x10) + lVar14 * 8 + 0x20);
            if (lVar8 == 0) goto LAB_008010f4;
            native_BMSymbol__MarkAsChanged_dd21c4(lVar8,0);
            if ((int)uVar15 <= (int)((uint)lVar14 + 1)) break;
            uVar2 = *(uint *)(lVar11 + 0x18);
            lVar14 = lVar14 + 1;
          }
        }
        param_1 = param_1 + 0xe;
        *param_1 = 0;
        if (iRam0000000001345318 != 0) {
          puVar1 = (ulong *)(((ulong)param_1 >> 0x12 & 0x7fff) * 8 + 0x138ecd8);
          do {
            cVar3 = '\x01';
            bVar4 = (bool)ExclusiveMonitorPass(puVar1,0x10);
            if (bVar4) {
              *puVar1 = *puVar1 | 1L << ((ulong)param_1 >> 0xc & 0x3f);
              cVar3 = ExclusiveMonitorsStatus();
            }
          } while (cVar3 != '\0');
        }
        return;
      }
    }
LAB_008010f4:
                    /* WARNING: Subroutine does not return */
    native_sub_432810();
  }
LAB_00804ab0:
                    /* WARNING: Subroutine does not return */
  native_sub_432810();
}



/* NGUIFont$$.ctor @ 0x804cc4
 * void NGUIFont___ctor (NGUIFont_o* __this, const MethodInfo* method); */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* NGUIFont$$.ctor
   void NGUIFont___ctor (NGUIFont_o* __this, const MethodInfo* method); */

void native_NGUIFont___ctor_804cc4(long param_1)

{
  undefined8 uVar1;
  undefined8 uStack_30;
  undefined8 uStack_28;
  
  if ((bRam0000000001340461 & 1) == 0) {
    native_sub_43273c(&BMFont_TypeInfo_12d3aa0);
    native_sub_43273c(&Method_System_Collections_Generic_List_BMSymbol___ctor___12dc560);
    native_sub_43273c(&System_Collections_Generic_List_BMSymbol__TypeInfo_12d29b8);
    bRam0000000001340461 = 1;
  }
  uStack_30 = 0;
  uStack_28 = 0;
  native_UnityEngine_Rect___ctor_7635c8(0,0,0x3f800000,0x3f800000,&uStack_30,0);
  *(undefined8 *)(param_1 + 0x30) = uStack_28;
  *(undefined8 *)(param_1 + 0x28) = uStack_30;
  uVar1 = native_sub_432808(_BMFont_TypeInfo_12d3aa0);
  native_BMFont___ctor_dd1dfc(uVar1,0);
  *(undefined8 *)(param_1 + 0x38) = uVar1;
  native_sub_4326e0(param_1 + 0x38,uVar1);
  *(undefined4 *)(param_1 + 0x58) = 0x3f800000;
  uVar1 = native_sub_432808(_System_Collections_Generic_List_BMSymbol__TypeInfo_12d29b8);
  native_System_Collections_Generic_List_XmlEventCache_XmlEvent______ctor_d3ff44
            (uVar1,_Method_System_Collections_Generic_List_BMSymbol___ctor___12dc560);
  *(undefined8 *)(param_1 + 0x68) = uVar1;
  native_sub_4326e0(param_1 + 0x68,uVar1);
  *(undefined4 *)(param_1 + 0x80) = 0x10;
  *(undefined8 *)(param_1 + 0x98) = 0xffffffffffffffff;
  native_UnityEngine_ScriptableObject___ctor_766b74(param_1,0);
  return;
}


