/* ARM64 IL2CPP native pseudocode from Ghidra.
 * Recovered implementation, not original C# source.
 * Function boundaries follow the IL2CPP method address table. */


/* BMSymbol$$get_length @ 0xdd2140
 * int32_t BMSymbol__get_length (BMSymbol_o* __this, const MethodInfo* method); */

/* BMSymbol$$get_length
   int32_t BMSymbol__get_length (BMSymbol_o* __this, const MethodInfo* method); */

int native_BMSymbol__get_length_dd2140(long param_1)

{
  int iVar1;
  
  iVar1 = *(int *)(param_1 + 0x34);
  if (iVar1 == 0) {
    if (*(long *)(param_1 + 0x10) == 0) {
                    /* WARNING: Subroutine does not return */
      native_sub_432810();
    }
    iVar1 = *(int *)(*(long *)(param_1 + 0x10) + 0x10);
    *(int *)(param_1 + 0x34) = iVar1;
  }
  return iVar1;
}



/* BMSymbol$$get_offsetX @ 0xdd216c
 * int32_t BMSymbol__get_offsetX (BMSymbol_o* __this, const MethodInfo* method); */

/* BMSymbol$$get_offsetX
   int32_t BMSymbol__get_offsetX (BMSymbol_o* __this, const MethodInfo* method); */

undefined4 native_BMSymbol__get_offsetX_dd216c(long param_1)

{
  return *(undefined4 *)(param_1 + 0x38);
}



/* BMSymbol$$get_offsetY @ 0xdd2174
 * int32_t BMSymbol__get_offsetY (BMSymbol_o* __this, const MethodInfo* method); */

/* BMSymbol$$get_offsetY
   int32_t BMSymbol__get_offsetY (BMSymbol_o* __this, const MethodInfo* method); */

undefined4 native_BMSymbol__get_offsetY_dd2174(long param_1)

{
  return *(undefined4 *)(param_1 + 0x3c);
}



/* BMSymbol$$get_width @ 0xdd217c
 * int32_t BMSymbol__get_width (BMSymbol_o* __this, const MethodInfo* method); */

/* BMSymbol$$get_width
   int32_t BMSymbol__get_width (BMSymbol_o* __this, const MethodInfo* method); */

undefined4 native_BMSymbol__get_width_dd217c(long param_1)

{
  return *(undefined4 *)(param_1 + 0x40);
}



/* BMSymbol$$get_height @ 0xdd2184
 * int32_t BMSymbol__get_height (BMSymbol_o* __this, const MethodInfo* method); */

/* BMSymbol$$get_height
   int32_t BMSymbol__get_height (BMSymbol_o* __this, const MethodInfo* method); */

undefined4 native_BMSymbol__get_height_dd2184(long param_1)

{
  return *(undefined4 *)(param_1 + 0x44);
}



/* BMSymbol$$get_paddedHeight @ 0xdd218c
 * int32_t BMSymbol__get_paddedHeight (BMSymbol_o* __this, const MethodInfo* method); */

/* BMSymbol$$get_paddedHeight
   int32_t BMSymbol__get_paddedHeight (BMSymbol_o* __this, const MethodInfo* method); */

int native_BMSymbol__get_paddedHeight_dd218c(long param_1)

{
  long lVar1;
  
  lVar1 = *(long *)(param_1 + 0x28);
  if (lVar1 != 0) {
    return *(int *)(lVar1 + 0x44) + *(int *)(lVar1 + 0x40) + *(int *)(lVar1 + 0x24);
  }
  return *(int *)(param_1 + 0x44);
}



/* BMSymbol$$get_advance @ 0xdd21b0
 * int32_t BMSymbol__get_advance (BMSymbol_o* __this, const MethodInfo* method); */

/* BMSymbol$$get_advance
   int32_t BMSymbol__get_advance (BMSymbol_o* __this, const MethodInfo* method); */

undefined4 native_BMSymbol__get_advance_dd21b0(long param_1)

{
  return *(undefined4 *)(param_1 + 0x48);
}



/* BMSymbol$$get_uvRect @ 0xdd21b8
 * UnityEngine_Rect_o BMSymbol__get_uvRect (BMSymbol_o* __this, const MethodInfo* method); */

/* BMSymbol$$get_uvRect
   UnityEngine_Rect_o BMSymbol__get_uvRect (BMSymbol_o* __this, const MethodInfo* method); */

undefined4 native_BMSymbol__get_uvRect_dd21b8(long param_1)

{
  return *(undefined4 *)(param_1 + 0x4c);
}



/* BMSymbol$$MarkAsChanged @ 0xdd21c4
 * void BMSymbol__MarkAsChanged (BMSymbol_o* __this, const MethodInfo* method); */

/* BMSymbol$$MarkAsChanged
   void BMSymbol__MarkAsChanged (BMSymbol_o* __this, const MethodInfo* method); */

void native_BMSymbol__MarkAsChanged_dd21c4(long param_1)

{
  *(undefined1 *)(param_1 + 0x30) = 0;
  return;
}



/* BMSymbol$$Validate @ 0xdd21cc
 * bool BMSymbol__Validate (BMSymbol_o* __this, INGUIAtlas_o* atlas, const MethodInfo* method); */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* BMSymbol$$Validate
   bool BMSymbol__Validate (BMSymbol_o* __this, INGUIAtlas_o* atlas, const MethodInfo* method); */

bool native_BMSymbol__Validate_dd21cc(long param_1,long *param_2)

{
  bool bVar1;
  undefined4 uVar2;
  undefined4 uVar3;
  ulong uVar4;
  undefined8 *puVar5;
  long *plVar6;
  long lVar7;
  int *piVar8;
  undefined8 uVar9;
  long *plVar10;
  undefined4 uVar11;
  undefined4 uVar12;
  undefined4 uVar13;
  undefined8 uStack_60;
  undefined8 uStack_58;
  
  if ((bRam0000000001346e35 & 1) == 0) {
    native_sub_43273c(&INGUIAtlas_TypeInfo_12d4c68);
    native_sub_43273c(&NGUIMath_TypeInfo_12d53b8);
    native_sub_43273c(&UnityEngine_Object_TypeInfo_12d54e0);
    bRam0000000001346e35 = 1;
  }
  if (param_2 == (long *)0x0) {
LAB_00dd2258:
    bVar1 = false;
  }
  else {
    if (*(char *)(param_1 + 0x30) == '\0') {
      uVar4 = native_System_String__IsNullOrEmpty_b09430(*(undefined8 *)(param_1 + 0x18),0);
      if ((uVar4 & 1) != 0) goto LAB_00dd2258;
      lVar7 = *param_2;
      uVar9 = *(undefined8 *)(param_1 + 0x18);
      if ((ulong)*(ushort *)(lVar7 + 0x12a) != 0) {
        uVar4 = 0;
        piVar8 = (int *)(*(long *)(lVar7 + 0xb0) + 8);
        do {
          if (*(long *)(piVar8 + -2) == _INGUIAtlas_TypeInfo_12d4c68) {
            puVar5 = (undefined8 *)(lVar7 + (long)(*piVar8 + 10) * 0x10 + 0x138);
            goto LAB_00dd22dc;
          }
          uVar4 = uVar4 + 1;
          piVar8 = piVar8 + 4;
        } while (uVar4 < *(ushort *)(lVar7 + 0x12a));
      }
      puVar5 = (undefined8 *)native_sub_3c9b34(param_2,_INGUIAtlas_TypeInfo_12d4c68,10);
LAB_00dd22dc:
      lVar7 = (*(code *)*puVar5)(param_2,uVar9,puVar5[1]);
      plVar10 = (long *)(param_1 + 0x28);
      *plVar10 = lVar7;
      native_sub_4326e0(plVar10);
      if (*plVar10 != 0) {
        lVar7 = *param_2;
        if ((ulong)*(ushort *)(lVar7 + 0x12a) != 0) {
          uVar4 = 0;
          piVar8 = (int *)(*(long *)(lVar7 + 0xb0) + 8);
          do {
            if (*(long *)(piVar8 + -2) == _INGUIAtlas_TypeInfo_12d4c68) {
              puVar5 = (undefined8 *)(lVar7 + (long)(*piVar8 + 4) * 0x10 + 0x138);
              goto LAB_00dd2360;
            }
            uVar4 = uVar4 + 1;
            piVar8 = piVar8 + 4;
          } while (uVar4 < *(ushort *)(lVar7 + 0x12a));
        }
        puVar5 = (undefined8 *)native_sub_3c9b34(param_2,_INGUIAtlas_TypeInfo_12d4c68,4);
LAB_00dd2360:
        plVar6 = (long *)(*(code *)*puVar5)(param_2,puVar5[1]);
        if (((*(byte *)(_UnityEngine_Object_TypeInfo_12d54e0 + 0x133) >> 2 & 1) != 0) &&
           (*(int *)(_UnityEngine_Object_TypeInfo_12d54e0 + 0xe0) == 0)) {
          native_sub_4327ec(_UnityEngine_Object_TypeInfo_12d54e0);
        }
        uVar4 = native_UnityEngine_Object__op_Equality_8e9a3c(plVar6,0,0);
        if ((uVar4 & 1) == 0) {
          lVar7 = *plVar10;
          if (lVar7 == 0) {
LAB_00dd24bc:
                    /* WARNING: Subroutine does not return */
            native_sub_432810();
          }
          uStack_60 = 0;
          uStack_58 = 0;
          native_UnityEngine_Rect___ctor_7635c8
                    ((float)*(int *)(lVar7 + 0x18),(float)*(int *)(lVar7 + 0x1c),
                     (float)*(int *)(lVar7 + 0x20),(float)*(int *)(lVar7 + 0x24),&uStack_60,0);
          uVar4 = uStack_60 & 0xffffffff;
          uVar11 = uStack_60._4_4_;
          uVar12 = (undefined4)uStack_58;
          uVar13 = uStack_58._4_4_;
          *(undefined4 *)(param_1 + 0x4c) = (undefined4)uStack_60;
          *(undefined4 *)(param_1 + 0x50) = uStack_60._4_4_;
          *(undefined4 *)(param_1 + 0x54) = (undefined4)uStack_58;
          *(undefined4 *)(param_1 + 0x58) = uStack_58._4_4_;
          if (plVar6 == (long *)0x0) goto LAB_00dd24bc;
          uVar2 = (**(code **)(*plVar6 + 0x178))(plVar6,*(undefined8 *)(*plVar6 + 0x180));
          uVar3 = (**(code **)(*plVar6 + 0x198))(plVar6,*(undefined8 *)(*plVar6 + 0x1a0));
          if (((*(byte *)(_NGUIMath_TypeInfo_12d53b8 + 0x133) >> 2 & 1) != 0) &&
             (*(int *)(_NGUIMath_TypeInfo_12d53b8 + 0xe0) == 0)) {
            native_sub_4327ec(_NGUIMath_TypeInfo_12d53b8);
          }
          uVar2 = native_NGUIMath__ConvertToTexCoords_803574(uVar4,uVar2,uVar3,0);
          lVar7 = *(long *)(param_1 + 0x28);
          *(undefined4 *)(param_1 + 0x4c) = uVar2;
          *(undefined4 *)(param_1 + 0x50) = uVar11;
          *(undefined4 *)(param_1 + 0x54) = uVar12;
          *(undefined4 *)(param_1 + 0x58) = uVar13;
          if (lVar7 == 0) goto LAB_00dd24bc;
          *(undefined4 *)(param_1 + 0x38) = *(undefined4 *)(lVar7 + 0x38);
          *(undefined4 *)(param_1 + 0x3c) = *(undefined4 *)(lVar7 + 0x40);
          *(undefined4 *)(param_1 + 0x40) = *(undefined4 *)(lVar7 + 0x20);
          *(undefined4 *)(param_1 + 0x44) = *(undefined4 *)(lVar7 + 0x24);
          *(int *)(param_1 + 0x48) =
               *(int *)(lVar7 + 0x38) + *(int *)(lVar7 + 0x20) + *(int *)(lVar7 + 0x3c);
          *(undefined1 *)(param_1 + 0x30) = 1;
        }
        else {
          *plVar10 = 0;
          native_sub_4326e0(plVar10,0);
        }
      }
    }
    bVar1 = *(long *)(param_1 + 0x28) != 0;
  }
  return bVar1;
}



/* BMSymbol$$.ctor @ 0xdd24c0
 * void BMSymbol___ctor (BMSymbol_o* __this, const MethodInfo* method); */

/* BMSymbol$$.ctor
   void BMSymbol___ctor (BMSymbol_o* __this, const MethodInfo* method); */

void native_BMSymbol___ctor_dd24c0(void)

{
  return;
}


