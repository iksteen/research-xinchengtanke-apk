/* ARM64 IL2CPP native pseudocode from Ghidra.
 * Recovered implementation, not original C# source.
 * Function boundaries follow the IL2CPP method address table. */


/* UILabel$$get_finalFontSize @ 0xae7434
 * int32_t UILabel__get_finalFontSize (UILabel_o* __this, const MethodInfo* method); */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* UILabel$$get_finalFontSize
   int32_t UILabel__get_finalFontSize (UILabel_o* __this, const MethodInfo* method); */

int native_UILabel__get_finalFontSize_ae7434(long param_1)

{
  long lVar1;
  undefined8 uVar2;
  ulong uVar3;
  double unaff_x19;
  float fVar4;
  double dVar5;
  double dVar6;
  
  if ((bRam0000000001341ffa & 1) == 0) {
    native_sub_43273c(&UnityEngine_Object_TypeInfo_12d54e0);
    bRam0000000001341ffa = 1;
  }
  uVar2 = native_UILabel__get_trueTypeFont_ae74d0(param_1);
  if (((*(byte *)(_UnityEngine_Object_TypeInfo_12d54e0 + 0x133) >> 2 & 1) != 0) &&
     (*(int *)(_UnityEngine_Object_TypeInfo_12d54e0 + 0xe0) == 0)) {
    native_sub_4327ec(_UnityEngine_Object_TypeInfo_12d54e0);
  }
  uVar3 = native_UnityEngine_Object__op_Implicit_8e1b98(uVar2,0);
  lVar1 = 0x278;
  if ((uVar3 & 1) == 0) {
    lVar1 = 0x1b0;
  }
  fVar4 = *(float *)(param_1 + 0x274) * (float)*(int *)(param_1 + lVar1);
  if ((bRam0000000001340eb1 & 1) == 0) {
    native_sub_43273c(&System_Math_TypeInfo_12d51c0);
    bRam0000000001340eb1 = 1;
  }
  if (((*(byte *)(_System_Math_TypeInfo_12d51c0 + 0x133) >> 2 & 1) != 0) &&
     (*(int *)(_System_Math_TypeInfo_12d51c0 + 0xe0) == 0)) {
    native_sub_4327ec();
  }
  dVar6 = (double)fVar4;
  dVar5 = (double)func_0x002c9600(dVar6,&stack0xffffffffffffffe8);
  if (0.0 <= fVar4) {
    if (dVar5 != 0.5) {
      unaff_x19 = (double)(long)(dVar6 + 0.5);
      goto code_r0x008e51b0;
    }
    dVar5 = 1.0;
  }
  else {
    if (dVar5 != -0.5) {
      unaff_x19 = (double)(long)(dVar6 + -0.5);
      goto code_r0x008e51b0;
    }
    dVar5 = -1.0;
  }
  if (((long)unaff_x19 & 1U) != 0) {
    unaff_x19 = unaff_x19 + dVar5;
  }
code_r0x008e51b0:
  dVar5 = -unaff_x19;
  if (unaff_x19 != INFINITY) {
    dVar5 = unaff_x19;
  }
  return (int)dVar5;
}



/* UILabel$$get_shouldBeProcessed @ 0xae75dc
 * bool UILabel__get_shouldBeProcessed (UILabel_o* __this, const MethodInfo* method); */

/* UILabel$$get_shouldBeProcessed
   bool UILabel__get_shouldBeProcessed (UILabel_o* __this, const MethodInfo* method); */

undefined1 native_UILabel__get_shouldBeProcessed_ae75dc(long param_1)

{
  return *(undefined1 *)(param_1 + 0x25c);
}



/* UILabel$$set_shouldBeProcessed @ 0xae75e4
 * void UILabel__set_shouldBeProcessed (UILabel_o* __this, bool value, const MethodInfo* method); */

/* UILabel$$set_shouldBeProcessed
   void UILabel__set_shouldBeProcessed (UILabel_o* __this, bool value, const MethodInfo* method); */

void native_UILabel__set_shouldBeProcessed_ae75e4(long param_1,uint param_2)

{
  bool bVar1;
  
  bVar1 = (param_2 & 1) != 0;
  if (bVar1) {
    *(undefined1 *)(param_1 + 0x58) = 1;
  }
  *(bool *)(param_1 + 0x25c) = bVar1;
  return;
}



/* UILabel$$get_isAnchoredHorizontally @ 0xae7600
 * bool UILabel__get_isAnchoredHorizontally (UILabel_o* __this, const MethodInfo* method); */

/* UILabel$$get_isAnchoredHorizontally
   bool UILabel__get_isAnchoredHorizontally (UILabel_o* __this, const MethodInfo* method); */

bool native_UILabel__get_isAnchoredHorizontally_ae7600(long param_1)

{
  bool bVar1;
  ulong uVar2;
  
  uVar2 = native_UIRect__get_isAnchoredHorizontally_c2d61c(param_1,0);
  if ((uVar2 & 1) == 0) {
    bVar1 = *(int *)(param_1 + 0x1e4) == 2;
  }
  else {
    bVar1 = true;
  }
  return bVar1;
}



/* UILabel$$get_isAnchoredVertically @ 0xae763c
 * bool UILabel__get_isAnchoredVertically (UILabel_o* __this, const MethodInfo* method); */

/* UILabel$$get_isAnchoredVertically
   bool UILabel__get_isAnchoredVertically (UILabel_o* __this, const MethodInfo* method); */

bool native_UILabel__get_isAnchoredVertically_ae763c(long param_1)

{
  bool bVar1;
  ulong uVar2;
  
  uVar2 = native_UIRect__get_isAnchoredVertically_c2d6e0(param_1,0);
  if ((uVar2 & 1) == 0) {
    bVar1 = (*(uint *)(param_1 + 0x1e4) | 1) == 3;
  }
  else {
    bVar1 = true;
  }
  return bVar1;
}



/* UILabel$$get_material @ 0xae767c
 * UnityEngine_Material_o* UILabel__get_material (UILabel_o* __this, const MethodInfo* method); */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* UILabel$$get_material
   UnityEngine_Material_o* UILabel__get_material (UILabel_o* __this, const MethodInfo* method); */

undefined8 native_UILabel__get_material_ae767c(long param_1)

{
  ulong uVar1;
  long *plVar2;
  undefined8 *puVar3;
  long lVar4;
  int *piVar5;
  undefined8 uVar6;
  
  if ((bRam0000000001341ffb & 1) == 0) {
    native_sub_43273c(&INGUIFont_TypeInfo_12d4c70);
    native_sub_43273c(&UnityEngine_Object_TypeInfo_12d54e0);
    bRam0000000001341ffb = 1;
  }
  uVar6 = *(undefined8 *)(param_1 + 0xb8);
  if (((*(byte *)(_UnityEngine_Object_TypeInfo_12d54e0 + 0x133) >> 2 & 1) != 0) &&
     (*(int *)(_UnityEngine_Object_TypeInfo_12d54e0 + 0xe0) == 0)) {
    native_sub_4327ec();
  }
  uVar1 = native_UnityEngine_Object__op_Inequality_8d76fc(uVar6,0,0);
  if ((uVar1 & 1) == 0) {
    plVar2 = (long *)native_UILabel__get_font_ae77e8(param_1);
    if (plVar2 != (long *)0x0) {
      lVar4 = *plVar2;
      if ((ulong)*(ushort *)(lVar4 + 0x12a) != 0) {
        uVar1 = 0;
        piVar5 = (int *)(*(long *)(lVar4 + 0xb0) + 8);
        do {
          if (*(long *)(piVar5 + -2) == _INGUIFont_TypeInfo_12d4c70) {
            puVar3 = (undefined8 *)(lVar4 + (long)(*piVar5 + 0xf) * 0x10 + 0x138);
            goto LAB_00ae77cc;
          }
          uVar1 = uVar1 + 1;
          piVar5 = piVar5 + 4;
        } while (uVar1 < *(ushort *)(lVar4 + 0x12a));
      }
      puVar3 = (undefined8 *)native_sub_3c9b34(plVar2,_INGUIFont_TypeInfo_12d4c70,0xf);
LAB_00ae77cc:
                    /* WARNING: Could not recover jumptable at 0x00ae77e0. Too many branches */
                    /* WARNING: Treating indirect jump as call */
      uVar6 = (*(code *)*puVar3)(plVar2,puVar3[1]);
      return uVar6;
    }
    uVar6 = *(undefined8 *)(param_1 + 0x198);
    if (((*(byte *)(_UnityEngine_Object_TypeInfo_12d54e0 + 0x133) >> 2 & 1) != 0) &&
       (*(int *)(_UnityEngine_Object_TypeInfo_12d54e0 + 0xe0) == 0)) {
      native_sub_4327ec();
    }
    uVar1 = native_UnityEngine_Object__op_Inequality_8d76fc(uVar6,0,0);
    uVar6 = 0;
    if ((uVar1 & 1) != 0) {
      lVar4 = *(long *)(param_1 + 0x198);
      if (lVar4 != 0) {
        if (pcRam0000000001343698 == (code *)0x0) {
          pcRam0000000001343698 = (code *)native_sub_4326f0(&UNK_00ec7d87);
        }
                    /* WARNING: Could not recover jumptable at 0x00db3b6c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
        uVar6 = (*pcRam0000000001343698)(lVar4);
        return uVar6;
      }
                    /* WARNING: Subroutine does not return */
      native_sub_432810();
    }
  }
  else {
    uVar6 = *(undefined8 *)(param_1 + 0xb8);
  }
  return uVar6;
}



/* UILabel$$set_material @ 0xae7834
 * void UILabel__set_material (UILabel_o* __this, UnityEngine_Material_o* value, const MethodInfo* method); */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* UILabel$$set_material
   void UILabel__set_material (UILabel_o* __this, UnityEngine_Material_o* value, const MethodInfo*
   method); */

void native_UILabel__set_material_ae7834(long *param_1,long param_2)

{
  ulong uVar1;
  long lVar2;
  
  if ((bRam0000000001341454 & 1) == 0) {
    native_sub_43273c(&UnityEngine_Object_TypeInfo_12d54e0,param_2,0);
    bRam0000000001341454 = 1;
  }
  lVar2 = param_1[0x17];
  if (((*(byte *)(_UnityEngine_Object_TypeInfo_12d54e0 + 0x133) >> 2 & 1) != 0) &&
     (*(int *)(_UnityEngine_Object_TypeInfo_12d54e0 + 0xe0) == 0)) {
    native_sub_4327ec();
  }
  uVar1 = native_UnityEngine_Object__op_Inequality_8d76fc(lVar2,param_2,0);
  if ((uVar1 & 1) != 0) {
    native_UIWidget__RemoveFromPanel_944688(param_1);
    param_1[0x17] = param_2;
    native_sub_4326e0(param_1 + 0x17,param_2);
                    /* WARNING: Could not recover jumptable at 0x0094a6d0. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (**(code **)(*param_1 + 0x378))(param_1,*(undefined8 *)(*param_1 + 0x380));
    return;
  }
  return;
}



/* UILabel$$get_mainTexture @ 0xae783c
 * UnityEngine_Texture_o* UILabel__get_mainTexture (UILabel_o* __this, const MethodInfo* method); */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* UILabel$$get_mainTexture
   UnityEngine_Texture_o* UILabel__get_mainTexture (UILabel_o* __this, const MethodInfo* method); */

undefined8 native_UILabel__get_mainTexture_ae783c(long param_1)

{
  int iVar1;
  undefined4 uVar2;
  long *plVar3;
  undefined8 *puVar4;
  undefined8 uVar5;
  long lVar6;
  ulong uVar7;
  int *piVar8;
  
  if ((bRam0000000001341ffc & 1) == 0) {
    native_sub_43273c(&INGUIFont_TypeInfo_12d4c70);
    native_sub_43273c(&UnityEngine_Object_TypeInfo_12d54e0);
    bRam0000000001341ffc = 1;
  }
  plVar3 = (long *)native_UILabel__get_font_ae77e8(param_1);
  if (plVar3 == (long *)0x0) {
    uVar5 = *(undefined8 *)(param_1 + 0x198);
    if (((*(byte *)(_UnityEngine_Object_TypeInfo_12d54e0 + 0x133) >> 2 & 1) != 0) &&
       (*(int *)(_UnityEngine_Object_TypeInfo_12d54e0 + 0xe0) == 0)) {
      native_sub_4327ec();
    }
    uVar7 = native_UnityEngine_Object__op_Inequality_8d76fc(uVar5,0,0);
    uVar5 = 0;
    if ((uVar7 & 1) != 0) {
      if (*(long *)(param_1 + 0x198) != 0) {
        lVar6 = native_UnityEngine_Font__get_material_db3b30(*(long *)(param_1 + 0x198),0);
        if (((*(byte *)(_UnityEngine_Object_TypeInfo_12d54e0 + 0x133) >> 2 & 1) != 0) &&
           (*(int *)(_UnityEngine_Object_TypeInfo_12d54e0 + 0xe0) == 0)) {
          native_sub_4327ec(_UnityEngine_Object_TypeInfo_12d54e0);
        }
        uVar7 = native_UnityEngine_Object__op_Inequality_8d76fc(lVar6,0,0);
        if ((uVar7 & 1) == 0) {
          return 0;
        }
        if (lVar6 != 0) {
          if ((bRam0000000001340db2 & 1) == 0) {
            native_sub_43273c(&StringLiteral__MainTex_12f3608,0);
            bRam0000000001340db2 = 1;
          }
          if (pcRam0000000001340db8 == (code *)0x0) {
            pcRam0000000001340db8 = (code *)native_sub_4326f0(&UNK_00e2e607);
          }
          iVar1 = (*pcRam0000000001340db8)(lVar6,0x80);
          if (iVar1 < 0) {
            uVar2 = native_UnityEngine_Shader__PropertyToID_76b308
                              (_StringLiteral__MainTex_12f3608,0);
            if (pcRam0000000001340e28 == (code *)0x0) {
              pcRam0000000001340e28 = (code *)native_sub_4326f0(&UNK_00e2e907);
            }
                    /* WARNING: Could not recover jumptable at 0x008e349c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
            uVar5 = (*pcRam0000000001340e28)(lVar6,uVar2);
            return uVar5;
          }
          if (pcRam0000000001340e28 == (code *)0x0) {
            pcRam0000000001340e28 = (code *)native_sub_4326f0(&UNK_00e2e907);
          }
                    /* WARNING: Could not recover jumptable at 0x008e33d0. Too many branches */
                    /* WARNING: Treating indirect jump as call */
          uVar5 = (*pcRam0000000001340e28)(lVar6,iVar1);
          return uVar5;
        }
      }
                    /* WARNING: Subroutine does not return */
      native_sub_432810(0);
    }
  }
  else {
    lVar6 = *plVar3;
    if ((ulong)*(ushort *)(lVar6 + 0x12a) != 0) {
      uVar7 = 0;
      piVar8 = (int *)(*(long *)(lVar6 + 0xb0) + 8);
      do {
        if (*(long *)(piVar8 + -2) == _INGUIFont_TypeInfo_12d4c70) {
          puVar4 = (undefined8 *)(lVar6 + (long)(*piVar8 + 0x13) * 0x10 + 0x138);
          goto LAB_00ae7994;
        }
        uVar7 = uVar7 + 1;
        piVar8 = piVar8 + 4;
      } while (uVar7 < *(ushort *)(lVar6 + 0x12a));
    }
    puVar4 = (undefined8 *)native_sub_3c9b34(plVar3,_INGUIFont_TypeInfo_12d4c70,0x13);
LAB_00ae7994:
    uVar5 = (*(code *)*puVar4)(plVar3,puVar4[1]);
  }
  return uVar5;
}



/* UILabel$$set_mainTexture @ 0xae79b4
 * void UILabel__set_mainTexture (UILabel_o* __this, UnityEngine_Texture_o* value, const MethodInfo* method); */

/* UILabel$$set_mainTexture
   void UILabel__set_mainTexture (UILabel_o* __this, UnityEngine_Texture_o* value, const MethodInfo*
   method); */

void native_UILabel__set_mainTexture_ae79b4(undefined8 param_1)

{
  long *plVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  
  plVar1 = (long *)native_System_Object__GetType_adb48c(param_1,0,0);
  uVar3 = 0;
  if (plVar1 != (long *)0x0) {
    uVar3 = (**(code **)(*plVar1 + 0x168))(plVar1,*(undefined8 *)(*plVar1 + 0x170));
  }
  uVar2 = native_sub_432740(&StringLiteral__has_no_mainTexture_setter_12eae78);
  uVar3 = native_System_String__Concat_afbd68(uVar3,uVar2,0);
  native_sub_432740(&System_NotImplementedException_TypeInfo_12d5460);
  uVar2 = native_sub_432808();
  native_System_NotImplementedException___ctor_ad2610(uVar2,uVar3,0);
  uVar3 = native_sub_432740(&Method_UIWidget_set_mainTexture___12e7968);
                    /* WARNING: Subroutine does not return */
  native_sub_4327dc(uVar2,uVar3);
}



/* UILabel$$get_bitmapFont @ 0xae79bc
 * INGUIFont_o* UILabel__get_bitmapFont (UILabel_o* __this, const MethodInfo* method); */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* UILabel$$get_bitmapFont
   INGUIFont_o* UILabel__get_bitmapFont (UILabel_o* __this, const MethodInfo* method); */

long * native_UILabel__get_bitmapFont_ae79bc(long param_1)

{
  long lVar1;
  int iVar2;
  ulong uVar3;
  long *plVar4;
  long lVar5;
  long *plStack_28;
  
  if ((bRam0000000001341ffd & 1) == 0) {
    native_sub_43273c(&INGUIFont_TypeInfo_12d4c70);
    bRam0000000001341ffd = 1;
  }
  lVar1 = _INGUIFont_TypeInfo_12d4c70;
  plVar4 = *(long **)(param_1 + 0x1a0);
  if (plVar4 != (long *)0x0) {
    lVar5 = *plVar4;
    uVar3 = native_sub_3c5e78(_INGUIFont_TypeInfo_12d4c70,lVar5);
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



/* UILabel$$set_bitmapFont @ 0xae79c0
 * void UILabel__set_bitmapFont (UILabel_o* __this, INGUIFont_o* value, const MethodInfo* method); */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* UILabel$$set_bitmapFont
   void UILabel__set_bitmapFont (UILabel_o* __this, INGUIFont_o* value, const MethodInfo* method);
    */

void native_UILabel__set_bitmapFont_ae79c0(long *param_1,long *param_2)

{
  long *plVar1;
  
  if ((bRam0000000001341ffe & 1) == 0) {
    native_sub_43273c(&INGUIFont_TypeInfo_12d4c70);
    native_sub_43273c(&UnityEngine_Object_TypeInfo_12d54e0);
    bRam0000000001341ffe = 1;
  }
  plVar1 = (long *)native_sub_4327f8(param_1[0x34],_INGUIFont_TypeInfo_12d4c70);
  if (plVar1 == param_2) {
    return;
  }
  native_UIWidget__RemoveFromPanel_944688(param_1,0);
  if (param_2 != (long *)0x0) {
    if (*(byte *)(_UnityEngine_Object_TypeInfo_12d54e0 + 300) <= *(byte *)(*param_2 + 300)) {
      if (*(long *)(*(long *)(*param_2 + 200) +
                    (ulong)*(byte *)(_UnityEngine_Object_TypeInfo_12d54e0 + 300) * 8 + -8) !=
          _UnityEngine_Object_TypeInfo_12d54e0) {
        param_2 = (long *)0x0;
      }
      goto LAB_00ae7a84;
    }
  }
  param_2 = (long *)0x0;
LAB_00ae7a84:
  param_1[0x34] = (long)param_2;
  native_sub_4326e0(param_1 + 0x34);
  param_1[0x33] = 0;
  native_sub_4326e0(param_1 + 0x33,0);
                    /* WARNING: Could not recover jumptable at 0x00ae7abc. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(*param_1 + 0x378))(param_1,*(undefined8 *)(*param_1 + 0x380));
  return;
}



/* UILabel$$get_font @ 0xae77e8
 * INGUIFont_o* UILabel__get_font (UILabel_o* __this, const MethodInfo* method); */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* UILabel$$get_font
   INGUIFont_o* UILabel__get_font (UILabel_o* __this, const MethodInfo* method); */

long * native_UILabel__get_font_ae77e8(long param_1)

{
  long lVar1;
  int iVar2;
  ulong uVar3;
  long *plVar4;
  long lVar5;
  long *plStack_28;
  
  if ((bRam0000000001341ffd & 1) == 0) {
    native_sub_43273c(&INGUIFont_TypeInfo_12d4c70);
    bRam0000000001341ffd = 1;
  }
  lVar1 = _INGUIFont_TypeInfo_12d4c70;
  plVar4 = *(long **)(param_1 + 0x1a0);
  if (plVar4 != (long *)0x0) {
    lVar5 = *plVar4;
    uVar3 = native_sub_3c5e78(_INGUIFont_TypeInfo_12d4c70,lVar5);
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



/* UILabel$$set_font @ 0xae79c4
 * void UILabel__set_font (UILabel_o* __this, INGUIFont_o* value, const MethodInfo* method); */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* UILabel$$set_font
   void UILabel__set_font (UILabel_o* __this, INGUIFont_o* value, const MethodInfo* method); */

void native_UILabel__set_font_ae79c4(long *param_1,long *param_2)

{
  long *plVar1;
  
  if ((bRam0000000001341ffe & 1) == 0) {
    native_sub_43273c(&INGUIFont_TypeInfo_12d4c70);
    native_sub_43273c(&UnityEngine_Object_TypeInfo_12d54e0);
    bRam0000000001341ffe = 1;
  }
  plVar1 = (long *)native_sub_4327f8(param_1[0x34],_INGUIFont_TypeInfo_12d4c70);
  if (plVar1 == param_2) {
    return;
  }
  native_UIWidget__RemoveFromPanel_944688(param_1,0);
  if (param_2 != (long *)0x0) {
    if (*(byte *)(_UnityEngine_Object_TypeInfo_12d54e0 + 300) <= *(byte *)(*param_2 + 300)) {
      if (*(long *)(*(long *)(*param_2 + 200) +
                    (ulong)*(byte *)(_UnityEngine_Object_TypeInfo_12d54e0 + 300) * 8 + -8) !=
          _UnityEngine_Object_TypeInfo_12d54e0) {
        param_2 = (long *)0x0;
      }
      goto LAB_00ae7a84;
    }
  }
  param_2 = (long *)0x0;
LAB_00ae7a84:
  param_1[0x34] = (long)param_2;
  native_sub_4326e0(param_1 + 0x34);
  param_1[0x33] = 0;
  native_sub_4326e0(param_1 + 0x33,0);
                    /* WARNING: Could not recover jumptable at 0x00ae7abc. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(*param_1 + 0x378))(param_1,*(undefined8 *)(*param_1 + 0x380));
  return;
}



/* UILabel$$get_atlas @ 0xae7ac0
 * INGUIAtlas_o* UILabel__get_atlas (UILabel_o* __this, const MethodInfo* method); */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* UILabel$$get_atlas
   INGUIAtlas_o* UILabel__get_atlas (UILabel_o* __this, const MethodInfo* method); */

void native_UILabel__get_atlas_ae7ac0(undefined8 param_1)

{
  long *plVar1;
  undefined8 *puVar2;
  long lVar3;
  ulong uVar4;
  int *piVar5;
  
  if ((bRam0000000001341fff & 1) == 0) {
    native_sub_43273c(&INGUIFont_TypeInfo_12d4c70);
    bRam0000000001341fff = 1;
  }
  plVar1 = (long *)native_UILabel__get_font_ae77e8(param_1);
  if (plVar1 == (long *)0x0) {
    return;
  }
  lVar3 = *plVar1;
  if ((ulong)*(ushort *)(lVar3 + 0x12a) != 0) {
    uVar4 = 0;
    piVar5 = (int *)(*(long *)(lVar3 + 0xb0) + 8);
    do {
      if (*(long *)(piVar5 + -2) == _INGUIFont_TypeInfo_12d4c70) {
        puVar2 = (undefined8 *)(lVar3 + (long)(*piVar5 + 0xb) * 0x10 + 0x138);
        goto LAB_00ae7b6c;
      }
      uVar4 = uVar4 + 1;
      piVar5 = piVar5 + 4;
    } while (uVar4 < *(ushort *)(lVar3 + 0x12a));
  }
  puVar2 = (undefined8 *)native_sub_3c9b34(plVar1,_INGUIFont_TypeInfo_12d4c70,0xb);
LAB_00ae7b6c:
                    /* WARNING: Could not recover jumptable at 0x00ae7b7c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)*puVar2)(plVar1,puVar2[1]);
  return;
}



/* UILabel$$set_atlas @ 0xae7b80
 * void UILabel__set_atlas (UILabel_o* __this, INGUIAtlas_o* value, const MethodInfo* method); */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* UILabel$$set_atlas
   void UILabel__set_atlas (UILabel_o* __this, INGUIAtlas_o* value, const MethodInfo* method); */

void native_UILabel__set_atlas_ae7b80(undefined8 param_1,undefined8 param_2)

{
  long *plVar1;
  undefined8 *puVar2;
  long lVar3;
  ulong uVar4;
  int *piVar5;
  
  if ((bRam0000000001342000 & 1) == 0) {
    native_sub_43273c(&INGUIFont_TypeInfo_12d4c70);
    bRam0000000001342000 = 1;
  }
  plVar1 = (long *)native_UILabel__get_font_ae77e8(param_1);
  if (plVar1 == (long *)0x0) {
    return;
  }
  lVar3 = *plVar1;
  if ((ulong)*(ushort *)(lVar3 + 0x12a) != 0) {
    uVar4 = 0;
    piVar5 = (int *)(*(long *)(lVar3 + 0xb0) + 8);
    do {
      if (*(long *)(piVar5 + -2) == _INGUIFont_TypeInfo_12d4c70) {
        puVar2 = (undefined8 *)(lVar3 + (long)(*piVar5 + 0xc) * 0x10 + 0x138);
        goto LAB_00ae7c38;
      }
      uVar4 = uVar4 + 1;
      piVar5 = piVar5 + 4;
    } while (uVar4 < *(ushort *)(lVar3 + 0x12a));
  }
  puVar2 = (undefined8 *)native_sub_3c9b34(plVar1,_INGUIFont_TypeInfo_12d4c70,0xc);
LAB_00ae7c38:
                    /* WARNING: Could not recover jumptable at 0x00ae7c50. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)*puVar2)(plVar1,param_2,puVar2[1]);
  return;
}



/* UILabel$$get_trueTypeFont @ 0xae74d0
 * UnityEngine_Font_o* UILabel__get_trueTypeFont (UILabel_o* __this, const MethodInfo* method); */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* UILabel$$get_trueTypeFont
   UnityEngine_Font_o* UILabel__get_trueTypeFont (UILabel_o* __this, const MethodInfo* method); */

undefined8 native_UILabel__get_trueTypeFont_ae74d0(long param_1)

{
  ulong uVar1;
  long *plVar2;
  undefined8 *puVar3;
  long lVar4;
  int *piVar5;
  undefined8 uVar6;
  
  if ((bRam0000000001342001 & 1) == 0) {
    native_sub_43273c(&INGUIFont_TypeInfo_12d4c70);
    native_sub_43273c(&UnityEngine_Object_TypeInfo_12d54e0);
    bRam0000000001342001 = 1;
  }
  uVar6 = *(undefined8 *)(param_1 + 0x198);
  if (((*(byte *)(_UnityEngine_Object_TypeInfo_12d54e0 + 0x133) >> 2 & 1) != 0) &&
     (*(int *)(_UnityEngine_Object_TypeInfo_12d54e0 + 0xe0) == 0)) {
    native_sub_4327ec();
  }
  uVar1 = native_UnityEngine_Object__op_Inequality_8d76fc(uVar6,0,0);
  if ((uVar1 & 1) == 0) {
    plVar2 = (long *)native_UILabel__get_font_ae77e8(param_1);
    uVar6 = 0;
    if (plVar2 != (long *)0x0) {
      lVar4 = *plVar2;
      if ((ulong)*(ushort *)(lVar4 + 0x12a) != 0) {
        uVar1 = 0;
        piVar5 = (int *)(*(long *)(lVar4 + 0xb0) + 8);
        do {
          if (*(long *)(piVar5 + -2) == _INGUIFont_TypeInfo_12d4c70) {
            puVar3 = (undefined8 *)(lVar4 + (long)(*piVar5 + 0x22) * 0x10 + 0x138);
            goto LAB_00ae75c8;
          }
          uVar1 = uVar1 + 1;
          piVar5 = piVar5 + 4;
        } while (uVar1 < *(ushort *)(lVar4 + 0x12a));
      }
      puVar3 = (undefined8 *)native_sub_3c9b34(plVar2,_INGUIFont_TypeInfo_12d4c70,0x22);
LAB_00ae75c8:
                    /* WARNING: Could not recover jumptable at 0x00ae75d8. Too many branches */
                    /* WARNING: Treating indirect jump as call */
      uVar6 = (*(code *)*puVar3)(plVar2,puVar3[1]);
      return uVar6;
    }
  }
  else {
    uVar6 = *(undefined8 *)(param_1 + 0x198);
  }
  return uVar6;
}



/* UILabel$$set_trueTypeFont @ 0xae7c54
 * void UILabel__set_trueTypeFont (UILabel_o* __this, UnityEngine_Font_o* value, const MethodInfo* method); */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* UILabel$$set_trueTypeFont
   void UILabel__set_trueTypeFont (UILabel_o* __this, UnityEngine_Font_o* value, const MethodInfo*
   method); */

void native_UILabel__set_trueTypeFont_ae7c54(long *param_1,long param_2)

{
  int iVar1;
  int iVar2;
  undefined4 uVar3;
  undefined8 uVar4;
  long lVar5;
  ulong uVar6;
  long lVar7;
  
  if ((bRam0000000001342002 & 1) == 0) {
    native_sub_43273c(&UnityEngine_Object_TypeInfo_12d54e0);
    bRam0000000001342002 = 1;
  }
  lVar7 = param_1[0x33];
  if (((*(byte *)(_UnityEngine_Object_TypeInfo_12d54e0 + 0x133) >> 2 & 1) != 0) &&
     (*(int *)(_UnityEngine_Object_TypeInfo_12d54e0 + 0xe0) == 0)) {
    native_sub_4327ec();
  }
  uVar6 = native_UnityEngine_Object__op_Inequality_8d76fc(lVar7,param_2,0);
  if ((uVar6 & 1) != 0) {
    native_UILabel__SetActiveFont_ae7d78(param_1,0);
    native_UIWidget__RemoveFromPanel_944688(param_1,0);
    param_1[0x33] = param_2;
    native_sub_4326e0(param_1 + 0x33,param_2);
    *(undefined1 *)(param_1 + 0xb) = 1;
    *(undefined1 *)((long)param_1 + 0x25c) = 1;
    param_1[0x34] = 0;
    native_sub_4326e0(param_1 + 0x34,0);
    native_UILabel__SetActiveFont_ae7d78(param_1,param_2);
    native_UILabel__ProcessAndRequest_ae7fdc(param_1);
    lVar7 = param_1[0x4a];
    if (((*(byte *)(_UnityEngine_Object_TypeInfo_12d54e0 + 0x133) >> 2 & 1) != 0) &&
       (*(int *)(_UnityEngine_Object_TypeInfo_12d54e0 + 0xe0) == 0)) {
      native_sub_4327ec();
    }
    uVar6 = native_UnityEngine_Object__op_Inequality_8d76fc(lVar7,0,0);
    if ((uVar6 & 1) != 0) {
      if ((bRam0000000001341463 & 1) == 0) {
        native_sub_43273c(&NGUITools_TypeInfo_12d53c8,0);
        native_sub_43273c(&UnityEngine_Object_TypeInfo_12d54e0);
        bRam0000000001341463 = 1;
      }
      if (((*(byte *)(_NGUITools_TypeInfo_12d53c8 + 0x133) >> 2 & 1) != 0) &&
         (*(int *)(_NGUITools_TypeInfo_12d53c8 + 0xe0) == 0)) {
        native_sub_4327ec();
      }
      uVar6 = native_NGUITools__GetActive_72d02c(param_1,0);
      if ((uVar6 & 1) != 0) {
        *(undefined1 *)(param_1 + 0xb) = 1;
        lVar7 = param_1[0x1e];
        if (((*(byte *)(_UnityEngine_Object_TypeInfo_12d54e0 + 0x133) >> 2 & 1) != 0) &&
           (*(int *)(_UnityEngine_Object_TypeInfo_12d54e0 + 0xe0) == 0)) {
          native_sub_4327ec();
        }
        uVar6 = native_UnityEngine_Object__op_Inequality_8d76fc(lVar7,0,0);
        if (((uVar6 & 1) != 0) &&
           (uVar6 = native_UnityEngine_Behaviour__get_enabled_8d7acc(param_1,0), (uVar6 & 1) != 0))
        {
          uVar4 = native_UnityEngine_Component__get_gameObject_8da66c(param_1,0);
          if (((*(byte *)(_NGUITools_TypeInfo_12d53c8 + 0x133) >> 2 & 1) != 0) &&
             (*(int *)(_NGUITools_TypeInfo_12d53c8 + 0xe0) == 0)) {
            native_sub_4327ec(_NGUITools_TypeInfo_12d53c8);
          }
          uVar6 = native_NGUITools__GetActive_72d0d4(uVar4,0);
          if (((uVar6 & 1) != 0) && (*(char *)((long)param_1 + 0x101) == '\0')) {
            (**(code **)(*param_1 + 0x368))(param_1,*(undefined8 *)(*param_1 + 0x370));
            if ((bRam0000000001341465 & 1) == 0) {
              native_sub_43273c(&UnityEngine_Debug_TypeInfo_12d4338);
              native_sub_43273c(&UnityEngine_Object_TypeInfo_12d54e0);
              native_sub_43273c(&
                                StringLiteral_You_can_t_place_widgets_on_a_layer_different_than_the_UIPanel_that_manages_them__If_you_want_to_move_widgets_to_a_different_layer__parent_them_to_a_new_panel_instead__12f31f0
                               );
              bRam0000000001341465 = 1;
            }
            lVar7 = param_1[0x1e];
            if (((*(byte *)(_UnityEngine_Object_TypeInfo_12d54e0 + 0x133) >> 2 & 1) != 0) &&
               (*(int *)(_UnityEngine_Object_TypeInfo_12d54e0 + 0xe0) == 0)) {
              native_sub_4327ec();
            }
            uVar6 = native_UnityEngine_Object__op_Inequality_8d76fc(lVar7,0,0);
            if ((uVar6 & 1) == 0) {
              return;
            }
            if ((param_1[0x1e] != 0) &&
               (lVar7 = native_UnityEngine_Component__get_gameObject_8da66c(param_1[0x1e],0),
               lVar7 != 0)) {
              iVar1 = native_UnityEngine_GameObject__get_layer_8de608(lVar7,0);
              lVar7 = native_UnityEngine_Component__get_gameObject_8da66c(param_1,0);
              if (lVar7 != 0) {
                iVar2 = native_UnityEngine_GameObject__get_layer_8de608(lVar7,0);
                if (iVar1 == iVar2) {
                  return;
                }
                if (((*(byte *)(_UnityEngine_Debug_TypeInfo_12d4338 + 0x133) >> 2 & 1) != 0) &&
                   (*(int *)(_UnityEngine_Debug_TypeInfo_12d4338 + 0xe0) == 0)) {
                  native_sub_4327ec();
                }
                native_UnityEngine_Debug__LogWarning_8dcbc8
                          (_StringLiteral_You_can_t_place_widgets_on_a_layer_different_than_the_UIPanel_that_manages_them__If_you_want_to_move_widgets_to_a_different_layer__parent_them_to_a_new_panel_instead__12f31f0
                           ,param_1,0);
                lVar7 = native_UnityEngine_Component__get_gameObject_8da66c(param_1,0);
                if (((param_1[0x1e] != 0) &&
                    (lVar5 = native_UnityEngine_Component__get_gameObject_8da66c(param_1[0x1e],0),
                    lVar5 != 0)) &&
                   (uVar3 = native_UnityEngine_GameObject__get_layer_8de608(lVar5,0), lVar7 != 0)) {
                  if (pcRam0000000001340bf0 == (code *)0x0) {
                    pcRam0000000001340bf0 = (code *)native_sub_4326f0(&UNK_00e2da37);
                  }
                    /* WARNING: Could not recover jumptable at 0x008de694. Too many branches */
                    /* WARNING: Treating indirect jump as call */
                  (*pcRam0000000001340bf0)(lVar7,uVar3);
                  return;
                }
              }
            }
                    /* WARNING: Subroutine does not return */
            native_sub_432810();
          }
        }
      }
      return;
    }
  }
  return;
}



/* UILabel$$get_ambigiousFont @ 0xae8074
 * UnityEngine_Object_o* UILabel__get_ambigiousFont (UILabel_o* __this, const MethodInfo* method); */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* UILabel$$get_ambigiousFont
   UnityEngine_Object_o* UILabel__get_ambigiousFont (UILabel_o* __this, const MethodInfo* method);
    */

undefined8 native_UILabel__get_ambigiousFont_ae8074(long param_1)

{
  ulong uVar1;
  undefined8 uVar2;
  
  if ((bRam0000000001342003 & 1) == 0) {
    native_sub_43273c(&UnityEngine_Object_TypeInfo_12d54e0);
    bRam0000000001342003 = 1;
  }
  uVar2 = *(undefined8 *)(param_1 + 0x1a0);
  if (((*(byte *)(_UnityEngine_Object_TypeInfo_12d54e0 + 0x133) >> 2 & 1) != 0) &&
     (*(int *)(_UnityEngine_Object_TypeInfo_12d54e0 + 0xe0) == 0)) {
    native_sub_4327ec();
  }
  uVar1 = native_UnityEngine_Object__op_Inequality_8d76fc(uVar2,0,0);
  if ((uVar1 & 1) == 0) {
    uVar2 = *(undefined8 *)(param_1 + 0x198);
  }
  else {
    uVar2 = *(undefined8 *)(param_1 + 0x1a0);
  }
  return uVar2;
}



/* UILabel$$set_ambigiousFont @ 0xae80f4
 * void UILabel__set_ambigiousFont (UILabel_o* __this, UnityEngine_Object_o* value, const MethodInfo* method); */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* UILabel$$set_ambigiousFont
   void UILabel__set_ambigiousFont (UILabel_o* __this, UnityEngine_Object_o* value, const
   MethodInfo* method); */

void native_UILabel__set_ambigiousFont_ae80f4(long *param_1,long *param_2)

{
  int iVar1;
  int iVar2;
  undefined4 uVar3;
  undefined8 uVar4;
  long lVar5;
  long *plVar6;
  ulong uVar7;
  long *plVar8;
  long lVar9;
  
  if ((bRam0000000001342004 & 1) == 0) {
    native_sub_43273c(&UnityEngine_Font_TypeInfo_12d46d8);
    native_sub_43273c(&INGUIFont_TypeInfo_12d4c70);
    bRam0000000001342004 = 1;
  }
  plVar8 = (long *)native_sub_4327f8(param_2,_INGUIFont_TypeInfo_12d4c70);
  if (plVar8 == (long *)0x0) {
    if (param_2 == (long *)0x0) {
      param_2 = (long *)0x0;
    }
    else if (*param_2 != _UnityEngine_Font_TypeInfo_12d46d8) {
      param_2 = (long *)0x0;
    }
    if ((bRam0000000001342002 & 1) == 0) {
      native_sub_43273c(&UnityEngine_Object_TypeInfo_12d54e0);
      bRam0000000001342002 = 1;
    }
    lVar9 = param_1[0x33];
    if (((*(byte *)(_UnityEngine_Object_TypeInfo_12d54e0 + 0x133) >> 2 & 1) != 0) &&
       (*(int *)(_UnityEngine_Object_TypeInfo_12d54e0 + 0xe0) == 0)) {
      native_sub_4327ec();
    }
    uVar7 = native_UnityEngine_Object__op_Inequality_8d76fc(lVar9,param_2,0);
    if ((uVar7 & 1) != 0) {
      native_UILabel__SetActiveFont_ae7d78(param_1,0);
      native_UIWidget__RemoveFromPanel_944688(param_1,0);
      param_1[0x33] = (long)param_2;
      native_sub_4326e0(param_1 + 0x33,param_2);
      *(undefined1 *)(param_1 + 0xb) = 1;
      *(undefined1 *)((long)param_1 + 0x25c) = 1;
      param_1[0x34] = 0;
      native_sub_4326e0(param_1 + 0x34,0);
      native_UILabel__SetActiveFont_ae7d78(param_1,param_2);
      native_UILabel__ProcessAndRequest_ae7fdc(param_1);
      lVar9 = param_1[0x4a];
      if (((*(byte *)(_UnityEngine_Object_TypeInfo_12d54e0 + 0x133) >> 2 & 1) != 0) &&
         (*(int *)(_UnityEngine_Object_TypeInfo_12d54e0 + 0xe0) == 0)) {
        native_sub_4327ec();
      }
      uVar7 = native_UnityEngine_Object__op_Inequality_8d76fc(lVar9,0,0);
      if ((uVar7 & 1) != 0) {
        if ((bRam0000000001341463 & 1) == 0) {
          native_sub_43273c(&NGUITools_TypeInfo_12d53c8,0);
          native_sub_43273c(&UnityEngine_Object_TypeInfo_12d54e0);
          bRam0000000001341463 = 1;
        }
        if (((*(byte *)(_NGUITools_TypeInfo_12d53c8 + 0x133) >> 2 & 1) != 0) &&
           (*(int *)(_NGUITools_TypeInfo_12d53c8 + 0xe0) == 0)) {
          native_sub_4327ec();
        }
        uVar7 = native_NGUITools__GetActive_72d02c(param_1,0);
        if ((uVar7 & 1) != 0) {
          *(undefined1 *)(param_1 + 0xb) = 1;
          lVar9 = param_1[0x1e];
          if (((*(byte *)(_UnityEngine_Object_TypeInfo_12d54e0 + 0x133) >> 2 & 1) != 0) &&
             (*(int *)(_UnityEngine_Object_TypeInfo_12d54e0 + 0xe0) == 0)) {
            native_sub_4327ec();
          }
          uVar7 = native_UnityEngine_Object__op_Inequality_8d76fc(lVar9,0,0);
          if (((uVar7 & 1) != 0) &&
             (uVar7 = native_UnityEngine_Behaviour__get_enabled_8d7acc(param_1,0), (uVar7 & 1) != 0)
             ) {
            uVar4 = native_UnityEngine_Component__get_gameObject_8da66c(param_1,0);
            if (((*(byte *)(_NGUITools_TypeInfo_12d53c8 + 0x133) >> 2 & 1) != 0) &&
               (*(int *)(_NGUITools_TypeInfo_12d53c8 + 0xe0) == 0)) {
              native_sub_4327ec(_NGUITools_TypeInfo_12d53c8);
            }
            uVar7 = native_NGUITools__GetActive_72d0d4(uVar4,0);
            if (((uVar7 & 1) != 0) && (*(char *)((long)param_1 + 0x101) == '\0')) {
              (**(code **)(*param_1 + 0x368))(param_1,*(undefined8 *)(*param_1 + 0x370));
              if ((bRam0000000001341465 & 1) == 0) {
                native_sub_43273c(&UnityEngine_Debug_TypeInfo_12d4338);
                native_sub_43273c(&UnityEngine_Object_TypeInfo_12d54e0);
                native_sub_43273c(&
                                  StringLiteral_You_can_t_place_widgets_on_a_layer_different_than_the_UIPanel_that_manages_them__If_you_want_to_move_widgets_to_a_different_layer__parent_them_to_a_new_panel_instead__12f31f0
                                 );
                bRam0000000001341465 = 1;
              }
              lVar9 = param_1[0x1e];
              if (((*(byte *)(_UnityEngine_Object_TypeInfo_12d54e0 + 0x133) >> 2 & 1) != 0) &&
                 (*(int *)(_UnityEngine_Object_TypeInfo_12d54e0 + 0xe0) == 0)) {
                native_sub_4327ec();
              }
              uVar7 = native_UnityEngine_Object__op_Inequality_8d76fc(lVar9,0,0);
              if ((uVar7 & 1) == 0) {
                return;
              }
              if ((param_1[0x1e] != 0) &&
                 (lVar9 = native_UnityEngine_Component__get_gameObject_8da66c(param_1[0x1e],0),
                 lVar9 != 0)) {
                iVar1 = native_UnityEngine_GameObject__get_layer_8de608(lVar9,0);
                lVar9 = native_UnityEngine_Component__get_gameObject_8da66c(param_1,0);
                if (lVar9 != 0) {
                  iVar2 = native_UnityEngine_GameObject__get_layer_8de608(lVar9,0);
                  if (iVar1 == iVar2) {
                    return;
                  }
                  if (((*(byte *)(_UnityEngine_Debug_TypeInfo_12d4338 + 0x133) >> 2 & 1) != 0) &&
                     (*(int *)(_UnityEngine_Debug_TypeInfo_12d4338 + 0xe0) == 0)) {
                    native_sub_4327ec();
                  }
                  native_UnityEngine_Debug__LogWarning_8dcbc8
                            (_StringLiteral_You_can_t_place_widgets_on_a_layer_different_than_the_UIPanel_that_manages_them__If_you_want_to_move_widgets_to_a_different_layer__parent_them_to_a_new_panel_instead__12f31f0
                             ,param_1,0);
                  lVar9 = native_UnityEngine_Component__get_gameObject_8da66c(param_1,0);
                  if (((param_1[0x1e] != 0) &&
                      (lVar5 = native_UnityEngine_Component__get_gameObject_8da66c(param_1[0x1e],0),
                      lVar5 != 0)) &&
                     (uVar3 = native_UnityEngine_GameObject__get_layer_8de608(lVar5,0), lVar9 != 0))
                  {
                    if (pcRam0000000001340bf0 == (code *)0x0) {
                      pcRam0000000001340bf0 = (code *)native_sub_4326f0(&UNK_00e2da37);
                    }
                    /* WARNING: Could not recover jumptable at 0x008de694. Too many branches */
                    /* WARNING: Treating indirect jump as call */
                    (*pcRam0000000001340bf0)(lVar9,uVar3);
                    return;
                  }
                }
              }
                    /* WARNING: Subroutine does not return */
              native_sub_432810();
            }
          }
        }
        return;
      }
    }
    return;
  }
  if ((bRam0000000001341ffe & 1) == 0) {
    native_sub_43273c(&INGUIFont_TypeInfo_12d4c70);
    native_sub_43273c(&UnityEngine_Object_TypeInfo_12d54e0);
    bRam0000000001341ffe = 1;
  }
  plVar6 = (long *)native_sub_4327f8(param_1[0x34],_INGUIFont_TypeInfo_12d4c70);
  if (plVar6 == plVar8) {
    return;
  }
  native_UIWidget__RemoveFromPanel_944688(param_1,0);
  if (plVar8 != (long *)0x0) {
    if (*(byte *)(_UnityEngine_Object_TypeInfo_12d54e0 + 300) <= *(byte *)(*plVar8 + 300)) {
      if (*(long *)(*(long *)(*plVar8 + 200) +
                    (ulong)*(byte *)(_UnityEngine_Object_TypeInfo_12d54e0 + 300) * 8 + -8) !=
          _UnityEngine_Object_TypeInfo_12d54e0) {
        plVar8 = (long *)0x0;
      }
      goto LAB_00ae7a84;
    }
  }
  plVar8 = (long *)0x0;
LAB_00ae7a84:
  param_1[0x34] = (long)plVar8;
  native_sub_4326e0(param_1 + 0x34);
  param_1[0x33] = 0;
  native_sub_4326e0(param_1 + 0x33,0);
                    /* WARNING: Could not recover jumptable at 0x00ae7abc. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(*param_1 + 0x378))(param_1,*(undefined8 *)(*param_1 + 0x380));
  return;
}



/* UILabel$$get_text @ 0xae81a0
 * System_String_o* UILabel__get_text (UILabel_o* __this, const MethodInfo* method); */

/* UILabel$$get_text
   System_String_o* UILabel__get_text (UILabel_o* __this, const MethodInfo* method); */

undefined8 native_UILabel__get_text_ae81a0(long param_1)

{
  return *(undefined8 *)(param_1 + 0x1a8);
}



/* UILabel$$set_text @ 0xae81a8
 * void UILabel__set_text (UILabel_o* __this, System_String_o* value, const MethodInfo* method); */

/* WARNING: Removing unreachable block (ram,0x00432c1c) */
/* WARNING: Removing unreachable block (ram,0x003cc494) */
/* WARNING: Removing unreachable block (ram,0x003cc4b8) */
/* WARNING: Removing unreachable block (ram,0x003cc4d4) */
/* WARNING: Removing unreachable block (ram,0x003cc4dc) */
/* WARNING: Removing unreachable block (ram,0x003cc4f0) */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* UILabel$$set_text
   void UILabel__set_text (UILabel_o* __this, System_String_o* value, const MethodInfo* method); */

void native_UILabel__set_text_ae81a8
               (undefined1 param_1 [16],float param_2,undefined8 param_3,float param_4,long *param_5
               ,long param_6)

{
  int *piVar1;
  int *piVar2;
  long *plVar3;
  undefined8 *puVar4;
  char cVar5;
  bool bVar6;
  int iVar7;
  ulong uVar8;
  ulong uVar9;
  ulong uVar10;
  long lVar11;
  long lVar12;
  int iVar13;
  float fVar14;
  ulong uVar15;
  float fVar17;
  undefined8 uVar16;
  ulong uVar18;
  undefined8 uVar19;
  float fVar20;
  ulong uVar21;
  float fVar22;
  float fVar23;
  undefined8 uVar24;
  
  if ((bRam0000000001342005 & 1) == 0) {
    native_sub_43273c(&StringLiteral__12eaac0);
    bRam0000000001342005 = 1;
  }
  uVar10 = native_System_String__op_Equality_afc18c(param_5[0x35],param_6,0);
  if ((uVar10 & 1) == 0) {
    uVar10 = native_System_String__IsNullOrEmpty_b09430(param_6,0);
    lVar12 = param_5[0x35];
    if ((uVar10 & 1) == 0) {
      uVar10 = native_System_String__op_Inequality_afbbb4(lVar12,param_6,0);
      if ((uVar10 & 1) == 0) {
        return;
      }
      param_5[0x35] = param_6;
    }
    else {
      uVar10 = native_System_String__IsNullOrEmpty_b09430(lVar12,0);
      param_6 = _StringLiteral__12eaac0;
      if ((uVar10 & 1) != 0) {
        return;
      }
      param_5[0x35] = _StringLiteral__12eaac0;
    }
    native_sub_4326e0(param_5 + 0x35,param_6);
    (**(code **)(*param_5 + 0x378))(param_5,*(undefined8 *)(*param_5 + 0x380));
    native_UILabel__ProcessAndRequest_ae7fdc(param_5);
    if ((char)param_5[0x1b] != '\0') {
      if ((bRam000000000134145d & 1) == 0) {
        native_sub_43273c(&Method_UnityEngine_Component_GetComponent_BoxCollider2D____12e2998,0);
        native_sub_43273c(&Method_UnityEngine_Component_GetComponent_BoxCollider____12e2990);
        native_sub_43273c(&NGUITools_TypeInfo_12d53c8);
        native_sub_43273c(&UnityEngine_Object_TypeInfo_12d54e0);
        bRam000000000134145d = 1;
      }
      lVar12 = native_UnityEngine_Component__GetComponent_ActiveAnimation__49daec
                         (param_5,_Method_UnityEngine_Component_GetComponent_BoxCollider____12e2990)
      ;
      if (((*(byte *)(_UnityEngine_Object_TypeInfo_12d54e0 + 0x133) >> 2 & 1) != 0) &&
         (*(int *)(_UnityEngine_Object_TypeInfo_12d54e0 + 0xe0) == 0)) {
        native_sub_4327ec(_UnityEngine_Object_TypeInfo_12d54e0);
      }
      uVar10 = native_UnityEngine_Object__op_Inequality_8d76fc(lVar12,0,0);
      if ((uVar10 & 1) == 0) {
        lVar12 = native_UnityEngine_Component__GetComponent_ActiveAnimation__49daec
                           (param_5,
                            _Method_UnityEngine_Component_GetComponent_BoxCollider2D____12e2998);
        fVar14 = (float)param_3;
        if (((*(byte *)(_NGUITools_TypeInfo_12d53c8 + 0x133) >> 2 & 1) != 0) &&
           (*(int *)(_NGUITools_TypeInfo_12d53c8 + 0xe0) == 0)) {
          native_sub_4327ec(_NGUITools_TypeInfo_12d53c8);
        }
        if ((bRam000000000133f58e & 1) == 0) {
          native_sub_43273c(&NGUITools_TypeInfo_12d53c8,lVar12,0);
          native_sub_43273c(&UnityEngine_Object_TypeInfo_12d54e0);
          native_sub_43273c(&StringLiteral_last_change_12f5390);
          bRam000000000133f58e = 1;
        }
        if (((*(byte *)(_UnityEngine_Object_TypeInfo_12d54e0 + 0x133) >> 2 & 1) != 0) &&
           (*(int *)(_UnityEngine_Object_TypeInfo_12d54e0 + 0xe0) == 0)) {
          native_sub_4327ec();
        }
        uVar10 = native_UnityEngine_Object__op_Inequality_8d76fc(lVar12,0,0);
        if ((uVar10 & 1) == 0) {
          return;
        }
        if (((*(byte *)(_UnityEngine_Object_TypeInfo_12d54e0 + 0x133) >> 2 & 1) != 0) &&
           (*(int *)(_UnityEngine_Object_TypeInfo_12d54e0 + 0xe0) == 0)) {
          native_sub_4327ec();
        }
        uVar10 = native_UnityEngine_Object__op_Inequality_8d76fc(param_5,0,0);
        if ((uVar10 & 1) == 0) {
          return;
        }
        if (param_5 == (long *)0x0) {
LAB_0072ea2c:
                    /* WARNING: Subroutine does not return */
          native_sub_432810();
        }
        lVar11 = *param_5;
        if ((((*(float *)((long)param_5 + 0x104) == 0.0) && (*(float *)(param_5 + 0x21) == 0.0)) &&
            (param_2 = *(float *)((long)param_5 + 0x10c), param_2 == 1.0)) &&
           (param_2 = *(float *)(param_5 + 0x22), param_2 == 1.0)) {
          lVar11 = (**(code **)(lVar11 + 0x1d8))(param_5,*(undefined8 *)(lVar11 + 0x1e0));
          if (lVar11 == 0) goto LAB_0072ea2c;
          if ((*(uint *)(lVar11 + 0x18) == 0) || (*(uint *)(lVar11 + 0x18) < 3)) {
LAB_0072ea30:
            uVar19 = native_sub_43283c();
                    /* WARNING: Subroutine does not return */
            native_sub_4327dc(uVar19,0);
          }
          uVar19 = *(undefined8 *)(lVar11 + 0x20);
          uVar24 = *(undefined8 *)(lVar11 + 0x38);
          fVar14 = (float)native_UnityEngine_Mathf__Clamp01_8d9d9c(0x3f000000,0);
          if (*(uint *)(lVar11 + 0x18) < 3) goto LAB_0072ea30;
          if (lVar12 == 0) goto LAB_0072ea2c;
          uVar16 = *(undefined8 *)(lVar11 + 0x38);
          fVar22 = (float)uVar19;
          fVar17 = (float)((ulong)uVar19 >> 0x20);
          fVar22 = fVar22 + ((float)uVar24 - fVar22) * fVar14;
          fVar17 = fVar17 + ((float)((ulong)uVar24 >> 0x20) - fVar17) * fVar14;
          uVar19 = CONCAT44(fVar17,fVar22);
          fVar20 = (float)uVar16 - (float)*(undefined8 *)(lVar11 + 0x20);
          param_4 = (float)((ulong)uVar16 >> 0x20) -
                    (float)((ulong)*(undefined8 *)(lVar11 + 0x20) >> 0x20);
          uVar10 = CONCAT44(param_4,fVar20);
          fVar14 = (float)native_UnityEngine_Collider2D__get_offset_db8b24(lVar12,0);
          fVar22 = fVar22 - fVar14;
          fVar14 = fVar17 - (float)uVar16;
          if ((fVar22 * fVar22 + fVar14 * fVar14 < 9.9999994e-11) &&
             (uVar24 = uVar19,
             fVar14 = (float)native_UnityEngine_BoxCollider2D__get_size_db8988(lVar12,0),
             fVar20 = fVar20 - fVar14, fVar14 = param_4 - (float)uVar24,
             fVar20 * fVar20 + fVar14 * fVar14 < 9.9999994e-11)) {
            return;
          }
          native_UnityEngine_Collider2D__set_offset_db8bcc(uVar19,fVar17,lVar12,0);
        }
        else {
          fVar22 = (float)(**(code **)(lVar11 + 0x2f8))(param_5,*(undefined8 *)(lVar11 + 0x300));
          if (lVar12 == 0) goto LAB_0072ea2c;
          uVar10 = (ulong)(uint)(fVar14 - fVar22);
          fVar23 = (fVar22 + fVar14) * 0.5;
          fVar17 = (param_2 + param_4) * 0.5;
          param_4 = param_4 - param_2;
          fVar20 = (float)native_UnityEngine_Collider2D__get_offset_db8b24(lVar12,0);
          fVar20 = fVar23 - fVar20;
          param_2 = fVar17 - param_2;
          param_2 = param_2 * param_2;
          if ((fVar20 * fVar20 + param_2 < 9.9999994e-11) &&
             (fVar20 = (float)native_UnityEngine_BoxCollider2D__get_size_db8988(lVar12,0),
             fVar20 = (fVar14 - fVar22) - fVar20,
             fVar20 * fVar20 + (param_4 - param_2) * (param_4 - param_2) < 9.9999994e-11)) {
            return;
          }
          native_UnityEngine_Collider2D__set_offset_db8bcc(fVar23,fVar17,lVar12,0);
        }
        native_UnityEngine_BoxCollider2D__set_size_db8a30(uVar10,param_4,lVar12,0);
        if ((*(byte *)(_NGUITools_TypeInfo_12d53c8 + 0x133) >> 2 & 1) == 0) {
          return;
        }
        if (*(int *)(_NGUITools_TypeInfo_12d53c8 + 0xe0) != 0) {
          return;
        }
      }
      else {
        if (((*(byte *)(_NGUITools_TypeInfo_12d53c8 + 0x133) >> 2 & 1) != 0) &&
           (*(int *)(_NGUITools_TypeInfo_12d53c8 + 0xe0) == 0)) {
          native_sub_4327ec();
        }
        if ((bRam000000000133f58d & 1) == 0) {
          native_sub_43273c(&NGUITools_TypeInfo_12d53c8,lVar12,0);
          native_sub_43273c(&UnityEngine_Object_TypeInfo_12d54e0);
          native_sub_43273c(&StringLiteral_last_change_12f5390);
          bRam000000000133f58d = 1;
        }
        if (((*(byte *)(_UnityEngine_Object_TypeInfo_12d54e0 + 0x133) >> 2 & 1) != 0) &&
           (*(int *)(_UnityEngine_Object_TypeInfo_12d54e0 + 0xe0) == 0)) {
          native_sub_4327ec();
        }
        uVar10 = native_UnityEngine_Object__op_Inequality_8d76fc(lVar12,0,0);
        if ((uVar10 & 1) == 0) {
          return;
        }
        if (((*(byte *)(_UnityEngine_Object_TypeInfo_12d54e0 + 0x133) >> 2 & 1) != 0) &&
           (*(int *)(_UnityEngine_Object_TypeInfo_12d54e0 + 0xe0) == 0)) {
          native_sub_4327ec();
        }
        uVar10 = native_UnityEngine_Object__op_Inequality_8d76fc(param_5,0,0);
        if ((uVar10 & 1) == 0) {
          return;
        }
        if (param_5 == (long *)0x0) {
LAB_0072e730:
                    /* WARNING: Subroutine does not return */
          native_sub_432810();
        }
        lVar11 = *param_5;
        if ((((*(float *)((long)param_5 + 0x104) == 0.0) && (*(float *)(param_5 + 0x21) == 0.0)) &&
            (param_2 = *(float *)((long)param_5 + 0x10c), param_2 == 1.0)) &&
           (param_2 = *(float *)(param_5 + 0x22), param_2 == 1.0)) {
          lVar11 = (**(code **)(lVar11 + 0x1d8))(param_5,*(undefined8 *)(lVar11 + 0x1e0));
          if (lVar11 == 0) goto LAB_0072e730;
          if ((*(uint *)(lVar11 + 0x18) == 0) || (*(uint *)(lVar11 + 0x18) < 3)) {
LAB_0072e734:
            uVar19 = native_sub_43283c();
                    /* WARNING: Subroutine does not return */
            native_sub_4327dc(uVar19,0);
          }
          uVar19 = *(undefined8 *)(lVar11 + 0x20);
          fVar20 = *(float *)(lVar11 + 0x28);
          uVar24 = *(undefined8 *)(lVar11 + 0x38);
          fVar22 = *(float *)(lVar11 + 0x40);
          fVar14 = (float)native_UnityEngine_Mathf__Clamp01_8d9d9c(0x3f000000,0);
          if (*(uint *)(lVar11 + 0x18) < 3) goto LAB_0072e734;
          if (lVar12 == 0) goto LAB_0072e730;
          fVar23 = (float)uVar19;
          fVar17 = (float)((ulong)uVar19 >> 0x20);
          fVar22 = fVar22 - fVar20;
          uVar8 = (ulong)(uint)fVar22;
          fVar17 = fVar17 + ((float)((ulong)uVar24 >> 0x20) - fVar17) * fVar14;
          uVar16 = CONCAT44(fVar17,fVar23 + ((float)uVar24 - fVar23) * fVar14);
          uVar21 = (ulong)(uint)(fVar20 + fVar22 * fVar14);
          fVar22 = (float)((ulong)*(undefined8 *)(lVar11 + 0x38) >> 0x20) -
                   (float)((ulong)*(undefined8 *)(lVar11 + 0x20) >> 0x20);
          uVar15 = CONCAT44(fVar22,(float)*(undefined8 *)(lVar11 + 0x38) -
                                   (float)*(undefined8 *)(lVar11 + 0x20));
          fVar14 = *(float *)(lVar11 + 0x40) - *(float *)(lVar11 + 0x28);
          uVar19 = uVar16;
          uVar24 = native_UnityEngine_BoxCollider__get_center_dba95c(lVar12,0);
          uVar10 = (ulong)(uint)fVar17;
          uVar9 = uVar10;
          uVar18 = uVar21;
          uVar8 = native_UnityEngine_Vector3__op_Inequality_776c48
                            (uVar16,uVar10,uVar21,uVar24,uVar19,uVar8,0);
          if ((uVar8 & 1) == 0) {
            uVar19 = native_UnityEngine_BoxCollider__get_size_dbaab4(lVar12,0);
            uVar9 = native_UnityEngine_Vector3__op_Inequality_776c48
                              (uVar15,fVar22,fVar14,uVar19,uVar9,uVar18,0);
            if ((uVar9 & 1) == 0) {
              return;
            }
          }
          native_UnityEngine_BoxCollider__set_center_dbaa0c(uVar16,uVar10,uVar21,lVar12,0);
        }
        else {
          fVar14 = (float)(**(code **)(lVar11 + 0x2f8))(param_5,*(undefined8 *)(lVar11 + 0x300));
          if (lVar12 == 0) goto LAB_0072e730;
          uVar15 = (ulong)(uint)((float)param_3 - fVar14);
          fVar22 = param_4 - param_2;
          uVar9 = (ulong)(uint)(param_2 + param_4);
          uVar18 = (ulong)(uint)((param_2 + param_4) * 0.5);
          fVar20 = (fVar14 + (float)param_3) * 0.5;
          uVar19 = native_UnityEngine_BoxCollider__get_center_dba95c(lVar12,0);
          uVar24 = 0;
          fVar14 = 0.0;
          uVar10 = uVar18;
          uVar9 = native_UnityEngine_Vector3__op_Inequality_776c48
                            (fVar20,uVar18,0,uVar19,uVar9,param_3,0);
          if ((uVar9 & 1) == 0) {
            uVar19 = native_UnityEngine_BoxCollider__get_size_dbaab4(lVar12,0);
            uVar10 = native_UnityEngine_Vector3__op_Inequality_776c48
                               (uVar15,fVar22,0,uVar19,uVar10,uVar24,0);
            if ((uVar10 & 1) == 0) {
              return;
            }
          }
          native_UnityEngine_BoxCollider__set_center_dbaa0c(fVar20,uVar18,0,lVar12,0);
        }
        native_UnityEngine_BoxCollider__set_size_dbab64(uVar15,fVar22,fVar14,lVar12,0);
        if ((*(byte *)(_NGUITools_TypeInfo_12d53c8 + 0x133) >> 2 & 1) == 0) {
          return;
        }
        if (*(int *)(_NGUITools_TypeInfo_12d53c8 + 0xe0) != 0) {
          return;
        }
      }
      lVar12 = _NGUITools_TypeInfo_12d53c8;
      if ((*(byte *)(_NGUITools_TypeInfo_12d53c8 + 0x133) >> 2 & 1) == 0) {
        return;
      }
      piVar1 = (int *)(_NGUITools_TypeInfo_12d53c8 + 0xe0);
      while (*piVar1 == 1) {
        cVar5 = '\x01';
        bVar6 = (bool)ExclusiveMonitorPass(piVar1,0x10);
        if (bVar6) {
          *piVar1 = 1;
          cVar5 = ExclusiveMonitorsStatus();
        }
        if (cVar5 == '\0') {
          DataMemoryBarrier(2,3);
          return;
        }
      }
      ClearExclusiveLocal();
      DataMemoryBarrier(2,3);
      lVar11 = native_sub_432c38();
      if (lVar11 == lRam00000000013451d0) {
        iRam00000000013451d8 = iRam00000000013451d8 + 1;
      }
      else {
        iVar13 = 0;
        do {
          iVar7 = iRam0000000001345190;
          if (iRam0000000001345190 == iVar13) {
            cVar5 = '\x01';
            bVar6 = (bool)ExclusiveMonitorPass(0x1345190,0x10);
            if (bVar6) {
              cVar5 = ExclusiveMonitorsStatus();
              iRam0000000001345190 = iVar13 + 1;
            }
            if (cVar5 != '\0') goto code_r0x003cc248;
            bVar6 = true;
          }
          else {
            ClearExclusiveLocal();
code_r0x003cc248:
            bVar6 = false;
          }
        } while ((iVar7 != 2) && (iVar13 = iVar7, !bVar6));
        while (iVar7 != 0) {
          native_sub_432bb4(0x1345190,2,0xffffffff);
          do {
            iVar7 = iRam0000000001345190;
            cVar5 = '\x01';
            bVar6 = (bool)ExclusiveMonitorPass(0x1345190,0x10);
            if (bVar6) {
              iRam0000000001345190 = 2;
              cVar5 = ExclusiveMonitorsStatus();
            }
          } while (cVar5 != '\0');
        }
        iRam00000000013451d8 = 1;
        lRam00000000013451d0 = lVar11;
      }
      while (*piVar1 == 1) {
        cVar5 = '\x01';
        bVar6 = (bool)ExclusiveMonitorPass(piVar1,0x10);
        if (bVar6) {
          *piVar1 = 1;
          cVar5 = ExclusiveMonitorsStatus();
        }
        if (cVar5 == '\0') {
          DataMemoryBarrier(2,3);
          if (iRam00000000013451d8 < 1) {
            return;
          }
          if (iRam00000000013451d8 + -1 != 0) {
            iRam00000000013451d8 = iRam00000000013451d8 + -1;
            return;
          }
          lRam00000000013451d0 = 0;
          iRam00000000013451d8 = 0;
          do {
            iVar13 = iRam0000000001345190;
            cVar5 = '\x01';
            bVar6 = (bool)ExclusiveMonitorPass(0x1345190,0x10);
            if (bVar6) {
              iRam0000000001345190 = 0;
              cVar5 = ExclusiveMonitorsStatus();
            }
          } while (cVar5 != '\0');
          if (iVar13 != 2) {
            lRam00000000013451d0 = 0;
            iRam00000000013451d8 = 0;
            return;
          }
          (*(code *)&DAT_0155b260)(0x62,0x1345190,0x81,1,0,0,0);
          return;
        }
      }
      ClearExclusiveLocal();
      DataMemoryBarrier(2,3);
      piVar2 = (int *)(lVar12 + 0xdc);
      do {
        if (*piVar2 != 1) {
          ClearExclusiveLocal();
          DataMemoryBarrier(2,3);
          puVar4 = (undefined8 *)(lVar12 + 0xe8);
          uVar19 = native_sub_3aad3c();
          do {
            cVar5 = '\x01';
            bVar6 = (bool)ExclusiveMonitorPass(puVar4,0x10);
            if (bVar6) {
              *puVar4 = uVar19;
              cVar5 = ExclusiveMonitorsStatus();
            }
          } while (cVar5 != '\0');
          DataMemoryBarrier(2,3);
          do {
            cVar5 = '\x01';
            bVar6 = (bool)ExclusiveMonitorPass(piVar2,0x10);
            if (bVar6) {
              *piVar2 = 1;
              cVar5 = ExclusiveMonitorsStatus();
            }
          } while (cVar5 != '\0');
          DataMemoryBarrier(2,3);
          iVar13 = iRam00000000013451d8 + -1;
          if ((0 < iRam00000000013451d8) && (iRam00000000013451d8 = iVar13, iVar13 == 0)) {
            lRam00000000013451d0 = 0;
            iRam00000000013451d8 = 0;
            do {
              iVar13 = iRam0000000001345190;
              cVar5 = '\x01';
              bVar6 = (bool)ExclusiveMonitorPass(0x1345190,0x10);
              if (bVar6) {
                iRam0000000001345190 = 0;
                cVar5 = ExclusiveMonitorsStatus();
              }
            } while (cVar5 != '\0');
            if (iVar13 == 2) {
              native_sub_432c0c(0x1345190,1,0);
            }
          }
          if (((*(byte *)(lVar12 + 0x133) >> 2 & 1) != 0) &&
             (lVar12 = native_sub_3c573c(lVar12,&UNK_00edd9af,0xffffffff,0x800), lVar12 != 0)) {
            native_sub_3d704c(lVar12,0,0,&stack0xffffffffffffffb8);
          }
          do {
            cVar5 = '\x01';
            bVar6 = (bool)ExclusiveMonitorPass(piVar1,0x10);
            if (bVar6) {
              *piVar1 = 1;
              cVar5 = ExclusiveMonitorsStatus();
            }
          } while (cVar5 != '\0');
          DataMemoryBarrier(2,3);
          do {
            cVar5 = '\x01';
            bVar6 = (bool)ExclusiveMonitorPass(puVar4,0x10);
            if (bVar6) {
              *puVar4 = 0;
              cVar5 = ExclusiveMonitorsStatus();
            }
          } while (cVar5 != '\0');
          DataMemoryBarrier(2,3);
          return;
        }
        cVar5 = '\x01';
        bVar6 = (bool)ExclusiveMonitorPass(piVar2,0x10);
        if (bVar6) {
          *piVar2 = 1;
          cVar5 = ExclusiveMonitorsStatus();
        }
      } while (cVar5 != '\0');
      DataMemoryBarrier(2,3);
      iVar13 = iRam00000000013451d8 + -1;
      if ((0 < iRam00000000013451d8) && (iRam00000000013451d8 = iVar13, iVar13 == 0)) {
        lRam00000000013451d0 = 0;
        iRam00000000013451d8 = 0;
        do {
          iVar13 = iRam0000000001345190;
          cVar5 = '\x01';
          bVar6 = (bool)ExclusiveMonitorPass(0x1345190,0x10);
          if (bVar6) {
            iRam0000000001345190 = 0;
            cVar5 = ExclusiveMonitorsStatus();
          }
        } while (cVar5 != '\0');
        if (iVar13 == 2) {
          native_sub_432c0c(0x1345190,1,0);
        }
      }
      lVar11 = native_sub_3aad3c();
      plVar3 = (long *)(lVar12 + 0xe8);
      do {
        lVar12 = *plVar3;
        if (lVar12 != lVar11) {
          ClearExclusiveLocal();
          break;
        }
        cVar5 = '\x01';
        bVar6 = (bool)ExclusiveMonitorPass(plVar3,0x10);
        if (bVar6) {
          *plVar3 = lVar11;
          cVar5 = ExclusiveMonitorsStatus();
        }
      } while (cVar5 != '\0');
      DataMemoryBarrier(2,3);
      if (lVar12 != lVar11) {
        do {
          iVar13 = *piVar1;
          if (iVar13 != 1) {
            ClearExclusiveLocal();
            break;
          }
          cVar5 = '\x01';
          bVar6 = (bool)ExclusiveMonitorPass(piVar1,0x10);
          if (bVar6) {
            *piVar1 = 1;
            cVar5 = ExclusiveMonitorsStatus();
          }
        } while (cVar5 != '\0');
        DataMemoryBarrier(2,3);
        while (iVar13 == 0) {
          native_sub_3a30dc(1,0);
          do {
            iVar13 = *piVar1;
            if (iVar13 != 1) {
              ClearExclusiveLocal();
              break;
            }
            cVar5 = '\x01';
            bVar6 = (bool)ExclusiveMonitorPass(piVar1,0x10);
            if (bVar6) {
              *piVar1 = 1;
              cVar5 = ExclusiveMonitorsStatus();
            }
          } while (cVar5 != '\0');
          DataMemoryBarrier(2,3);
        }
      }
      return;
    }
  }
  return;
}



/* UILabel$$get_defaultFontSize @ 0xae82a4
 * int32_t UILabel__get_defaultFontSize (UILabel_o* __this, const MethodInfo* method); */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* UILabel$$get_defaultFontSize
   int32_t UILabel__get_defaultFontSize (UILabel_o* __this, const MethodInfo* method); */

ulong native_UILabel__get_defaultFontSize_ae82a4(long param_1)

{
  undefined8 uVar1;
  ulong uVar2;
  long *plVar3;
  undefined8 *puVar4;
  long lVar5;
  int *piVar6;
  
  if ((bRam0000000001342006 & 1) == 0) {
    native_sub_43273c(&INGUIFont_TypeInfo_12d4c70);
    native_sub_43273c(&UnityEngine_Object_TypeInfo_12d54e0);
    bRam0000000001342006 = 1;
  }
  uVar1 = native_UILabel__get_trueTypeFont_ae74d0(param_1);
  if (((*(byte *)(_UnityEngine_Object_TypeInfo_12d54e0 + 0x133) >> 2 & 1) != 0) &&
     (*(int *)(_UnityEngine_Object_TypeInfo_12d54e0 + 0xe0) == 0)) {
    native_sub_4327ec(_UnityEngine_Object_TypeInfo_12d54e0);
  }
  uVar2 = native_UnityEngine_Object__op_Inequality_8d76fc(uVar1,0,0);
  if ((uVar2 & 1) == 0) {
    plVar3 = (long *)native_UILabel__get_font_ae77e8(param_1);
    if (plVar3 != (long *)0x0) {
      lVar5 = *plVar3;
      if ((ulong)*(ushort *)(lVar5 + 0x12a) != 0) {
        uVar2 = 0;
        piVar6 = (int *)(*(long *)(lVar5 + 0xb0) + 8);
        do {
          if (*(long *)(piVar6 + -2) == _INGUIFont_TypeInfo_12d4c70) {
            puVar4 = (undefined8 *)(lVar5 + (long)(*piVar6 + 0x19) * 0x10 + 0x138);
            goto LAB_00ae83ac;
          }
          uVar2 = uVar2 + 1;
          piVar6 = piVar6 + 4;
        } while (uVar2 < *(ushort *)(lVar5 + 0x12a));
      }
      puVar4 = (undefined8 *)native_sub_3c9b34(plVar3,_INGUIFont_TypeInfo_12d4c70,0x19);
LAB_00ae83ac:
                    /* WARNING: Could not recover jumptable at 0x00ae83bc. Too many branches */
                    /* WARNING: Treating indirect jump as call */
      uVar2 = (*(code *)*puVar4)(plVar3,puVar4[1]);
      return uVar2;
    }
    uVar2 = 0x10;
  }
  else {
    uVar2 = (ulong)*(uint *)(param_1 + 0x1b0);
  }
  return uVar2;
}



/* UILabel$$get_fontSize @ 0xae83c0
 * int32_t UILabel__get_fontSize (UILabel_o* __this, const MethodInfo* method); */

/* UILabel$$get_fontSize
   int32_t UILabel__get_fontSize (UILabel_o* __this, const MethodInfo* method); */

undefined4 native_UILabel__get_fontSize_ae83c0(long param_1)

{
  return *(undefined4 *)(param_1 + 0x1b0);
}



/* UILabel$$set_fontSize @ 0xae83c8
 * void UILabel__set_fontSize (UILabel_o* __this, int32_t value, const MethodInfo* method); */

/* WARNING: Removing unreachable block (ram,0x00ae8ab0) */
/* WARNING: Removing unreachable block (ram,0x00ae8ab8) */
/* WARNING: Removing unreachable block (ram,0x00ae8afc) */
/* WARNING: Removing unreachable block (ram,0x00ae8b04) */
/* WARNING: Removing unreachable block (ram,0x00ae8c74) */
/* WARNING: Removing unreachable block (ram,0x00ae8c80) */
/* WARNING: Removing unreachable block (ram,0x00ae9254) */
/* WARNING: Removing unreachable block (ram,0x00ae9338) */
/* WARNING: Removing unreachable block (ram,0x00ae938c) */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* UILabel$$set_fontSize
   void UILabel__set_fontSize (UILabel_o* __this, int32_t value, const MethodInfo* method); */

void native_UILabel__set_fontSize_ae83c8
               (undefined1 param_1 [16],float param_2,long *param_3,undefined4 param_4)

{
  ulong *puVar1;
  bool bVar2;
  int iVar3;
  undefined4 uVar4;
  int iVar5;
  undefined4 uVar6;
  uint uVar7;
  uint uVar8;
  undefined8 uVar9;
  ulong uVar10;
  ulong uVar11;
  undefined8 *puVar12;
  long lVar13;
  long lVar14;
  long *plVar15;
  char cVar16;
  float fVar17;
  float fVar18;
  float fVar19;
  float fVar20;
  
  iVar3 = native_UnityEngine_Mathf__Clamp_8e5208(param_4,0,0x100,0);
  if ((int)param_3[0x36] == iVar3) {
    return;
  }
  *(int *)(param_3 + 0x36) = iVar3;
  *(undefined1 *)(param_3 + 0xb) = 1;
  *(undefined1 *)((long)param_3 + 0x25c) = 1;
  if ((bRam0000000001342014 & 1) == 0) {
    native_sub_43273c(&UnityEngine_Object_TypeInfo_12d54e0);
    bRam0000000001342014 = 1;
  }
  uVar9 = native_UILabel__get_ambigiousFont_ae8074(param_3);
  if (((*(byte *)(_UnityEngine_Object_TypeInfo_12d54e0 + 0x133) >> 2 & 1) != 0) &&
     (*(int *)(_UnityEngine_Object_TypeInfo_12d54e0 + 0xe0) == 0)) {
    native_sub_4327ec(_UnityEngine_Object_TypeInfo_12d54e0);
  }
  uVar10 = native_UnityEngine_Object__op_Inequality_8d76fc(uVar9,0,0);
  if ((uVar10 & 1) == 0) {
    return;
  }
  if ((bRam0000000001342018 & 1) == 0) {
    native_sub_43273c(&NGUIText_TypeInfo_12d53c0);
    native_sub_43273c(&UnityEngine_Object_TypeInfo_12d54e0);
    native_sub_43273c(&StringLiteral__12eaac0);
    bRam0000000001342018 = 1;
  }
  uVar10 = native_UILabel__get_isValid_ae9740(param_3);
  if ((uVar10 & 1) == 0) {
    return;
  }
  fVar17 = *(float *)((long)param_3 + 0x10c);
  fVar18 = *(float *)((long)param_3 + 0x104);
  fVar19 = *(float *)(param_3 + 0x22);
  fVar20 = *(float *)(param_3 + 0x21);
  uVar6 = 1000000;
  *(undefined1 *)(param_3 + 0xb) = 1;
  *(undefined1 *)((long)param_3 + 0x25c) = 0;
  uVar4 = *(undefined4 *)((long)param_3 + 0xa4);
  if (((*(byte *)(_NGUIText_TypeInfo_12d53c0 + 0x133) >> 2 & 1) != 0) &&
     (*(int *)(_NGUIText_TypeInfo_12d53c0 + 0xe0) == 0)) {
    native_sub_4327ec(_NGUIText_TypeInfo_12d53c0);
  }
  lVar13 = _NGUIText_TypeInfo_12d53c0;
  plVar15 = (long *)(_NGUIText_TypeInfo_12d53c0 + 0xb8);
  *(undefined4 *)(*plVar15 + 0x40) = uVar4;
  lVar14 = param_3[0x15];
  fVar17 = fVar17 - fVar18;
  if (((*(byte *)(lVar13 + 0x133) >> 2 & 1) != 0) && (*(int *)(lVar13 + 0xe0) == 0)) {
    native_sub_4327ec(lVar13);
    plVar15 = (long *)(_NGUIText_TypeInfo_12d53c0 + 0xb8);
    lVar13 = _NGUIText_TypeInfo_12d53c0;
  }
  *(int *)(*(long *)(lVar13 + 0xb8) + 0x44) = (int)lVar14;
  if (fVar17 == 1.0) {
    if (((*(ushort *)(lVar13 + 0x132) >> 10 & 1) != 0) && (*(int *)(lVar13 + 0xe0) == 0)) {
      native_sub_4327ec(lVar13);
      plVar15 = (long *)(_NGUIText_TypeInfo_12d53c0 + 0xb8);
      lVar13 = _NGUIText_TypeInfo_12d53c0;
    }
    uVar4 = *(undefined4 *)(*plVar15 + 0x40);
  }
  else {
    if (((*(ushort *)(lVar13 + 0x132) >> 10 & 1) != 0) && (*(int *)(lVar13 + 0xe0) == 0)) {
      native_sub_4327ec(lVar13);
      plVar15 = (long *)(_NGUIText_TypeInfo_12d53c0 + 0xb8);
    }
    uVar4 = native_UnityEngine_Mathf__RoundToInt_8e50f0(fVar17 * (float)*(int *)(*plVar15 + 0x40),0)
    ;
    lVar13 = _NGUIText_TypeInfo_12d53c0;
  }
  fVar19 = fVar19 - fVar20;
  if (((*(byte *)(lVar13 + 0x133) >> 2 & 1) != 0) && (*(int *)(lVar13 + 0xe0) == 0)) {
    native_sub_4327ec(lVar13);
    lVar13 = _NGUIText_TypeInfo_12d53c0;
  }
  plVar15 = (long *)(lVar13 + 0xb8);
  *(undefined4 *)(*plVar15 + 0x48) = uVar4;
  if (fVar19 == 1.0) {
    if (((*(ushort *)(lVar13 + 0x132) >> 10 & 1) != 0) && (*(int *)(lVar13 + 0xe0) == 0)) {
      native_sub_4327ec(lVar13);
      lVar13 = _NGUIText_TypeInfo_12d53c0;
    }
    uVar4 = *(undefined4 *)(*(long *)(lVar13 + 0xb8) + 0x44);
  }
  else {
    if (((*(ushort *)(lVar13 + 0x132) >> 10 & 1) != 0) && (*(int *)(lVar13 + 0xe0) == 0)) {
      native_sub_4327ec(lVar13);
      plVar15 = (long *)(_NGUIText_TypeInfo_12d53c0 + 0xb8);
    }
    uVar4 = native_UnityEngine_Mathf__RoundToInt_8e50f0(fVar19 * (float)*(int *)(*plVar15 + 0x44),0)
    ;
    lVar13 = _NGUIText_TypeInfo_12d53c0;
  }
  if (((*(byte *)(lVar13 + 0x133) >> 2 & 1) != 0) && (*(int *)(lVar13 + 0xe0) == 0)) {
    native_sub_4327ec(lVar13);
    lVar13 = _NGUIText_TypeInfo_12d53c0;
  }
  *(undefined4 *)(*(long *)(lVar13 + 0xb8) + 0x4c) = uVar4;
  uVar9 = native_UILabel__get_defaultFontSize_ae82a4(param_3);
  uVar4 = native_UnityEngine_Mathf__Abs_8e4b54(uVar9,0);
  *(undefined4 *)(param_3 + 0x4f) = uVar4;
  *(undefined4 *)((long)param_3 + 0x274) = 0x3f800000;
  if (((*(byte *)(_NGUIText_TypeInfo_12d53c0 + 0x133) >> 2 & 1) != 0) &&
     (*(int *)(_NGUIText_TypeInfo_12d53c0 + 0xe0) == 0)) {
    native_sub_4327ec();
  }
  lVar14 = *(long *)(_NGUIText_TypeInfo_12d53c0 + 0xb8);
  if (0 < *(int *)(lVar14 + 0x48)) {
    if (((*(byte *)(_NGUIText_TypeInfo_12d53c0 + 0x133) >> 2 & 1) != 0) &&
       (*(int *)(_NGUIText_TypeInfo_12d53c0 + 0xe0) == 0)) {
      native_sub_4327ec();
      lVar14 = *(long *)(_NGUIText_TypeInfo_12d53c0 + 0xb8);
    }
    if (-1 < *(int *)(lVar14 + 0x4c)) {
      uVar9 = native_UILabel__get_trueTypeFont_ae74d0(param_3);
      if (((*(byte *)(_UnityEngine_Object_TypeInfo_12d54e0 + 0x133) >> 2 & 1) != 0) &&
         (*(int *)(_UnityEngine_Object_TypeInfo_12d54e0 + 0xe0) == 0)) {
        native_sub_4327ec(_UnityEngine_Object_TypeInfo_12d54e0);
      }
      uVar10 = native_UnityEngine_Object__op_Inequality_8d76fc(uVar9,0,0);
      uVar4 = 0x3f800000;
      if (((uVar10 & 1) == 0) ||
         (uVar10 = native_UILabel__get_keepCrisp_ae8860(param_3), uVar4 = 0x3f800000,
         (uVar10 & 1) == 0)) {
LAB_00ae8dcc:
        *(undefined4 *)(param_3 + 0x4b) = uVar4;
      }
      else {
        lVar14 = native_UIRect__get_root_c2d7ac(param_3,0);
        if (((*(byte *)(_UnityEngine_Object_TypeInfo_12d54e0 + 0x133) >> 2 & 1) != 0) &&
           (*(int *)(_UnityEngine_Object_TypeInfo_12d54e0 + 0xe0) == 0)) {
          native_sub_4327ec(_UnityEngine_Object_TypeInfo_12d54e0);
        }
        uVar10 = native_UnityEngine_Object__op_Inequality_8d76fc(lVar14,0,0);
        if ((uVar10 & 1) != 0) {
          if (((*(byte *)(_UnityEngine_Object_TypeInfo_12d54e0 + 0x133) >> 2 & 1) != 0) &&
             (*(int *)(_UnityEngine_Object_TypeInfo_12d54e0 + 0xe0) == 0)) {
            native_sub_4327ec();
          }
          uVar10 = native_UnityEngine_Object__op_Inequality_8d76fc(lVar14,0,0);
          if ((uVar10 & 1) != 0) {
            if (lVar14 == 0) goto LAB_00ae93c0;
            uVar4 = native_UIRoot__get_pixelSizeAdjustment_c2f740(lVar14,0);
          }
          goto LAB_00ae8dcc;
        }
      }
      native_UILabel__UpdateNGUIText_aeae48(param_3);
      if (*(int *)((long)param_3 + 0x1e4) == 3) {
        lVar14 = _NGUIText_TypeInfo_12d53c0;
        if ((*(byte *)(_NGUIText_TypeInfo_12d53c0 + 0x133) >> 2 & 1) != 0) {
LAB_00ae8eb4:
          if (*(int *)(lVar14 + 0xe0) == 0) {
            native_sub_4327ec();
            lVar14 = _NGUIText_TypeInfo_12d53c0;
          }
        }
LAB_00ae8ec4:
        plVar15 = (long *)(lVar14 + 0xb8);
        *(undefined4 *)(*plVar15 + 0x44) = 1000000;
LAB_00ae8ecc:
        *(undefined4 *)(*plVar15 + 0x4c) = uVar6;
      }
      else if (*(int *)((long)param_3 + 0x1e4) == 2) {
        iVar3 = *(int *)((long)param_3 + 0x224);
        if (iVar3 < 1) {
          if (((*(ushort *)(_NGUIText_TypeInfo_12d53c0 + 0x132) >> 10 & 1) != 0) &&
             (*(int *)(_NGUIText_TypeInfo_12d53c0 + 0xe0) == 0)) {
            native_sub_4327ec();
          }
          lVar14 = _NGUIText_TypeInfo_12d53c0;
          *(undefined4 *)(*(long *)(_NGUIText_TypeInfo_12d53c0 + 0xb8) + 0x40) = 1000000;
          uVar4 = 1000000;
        }
        else {
          if (((*(ushort *)(_NGUIText_TypeInfo_12d53c0 + 0x132) >> 10 & 1) != 0) &&
             (*(int *)(_NGUIText_TypeInfo_12d53c0 + 0xe0) == 0)) {
            native_sub_4327ec();
          }
          lVar14 = _NGUIText_TypeInfo_12d53c0;
          *(int *)(*(long *)(_NGUIText_TypeInfo_12d53c0 + 0xb8) + 0x40) = iVar3;
          uVar4 = *(undefined4 *)((long)param_3 + 0x224);
        }
        *(undefined4 *)(*(long *)(lVar14 + 0xb8) + 0x48) = uVar4;
        lVar13 = param_3[0x45];
        if ((int)lVar13 < 1) {
          if ((*(ushort *)(lVar14 + 0x132) >> 10 & 1) != 0) goto LAB_00ae8eb4;
          goto LAB_00ae8ec4;
        }
        if (((*(ushort *)(lVar14 + 0x132) >> 10 & 1) != 0) && (*(int *)(lVar14 + 0xe0) == 0)) {
          native_sub_4327ec();
          lVar14 = _NGUIText_TypeInfo_12d53c0;
        }
        plVar15 = (long *)(lVar14 + 0xb8);
        *(int *)(*plVar15 + 0x44) = (int)lVar13;
        uVar6 = (undefined4)param_3[0x45];
        goto LAB_00ae8ecc;
      }
      if ((int)param_3[0x4f] < 1) {
        lVar14 = native_UIRect__get_cachedTransform_c27c58(param_3,0);
        native_UnityEngine_Vector3__get_one_776a20(0);
        if (lVar14 == 0) {
LAB_00ae93c0:
                    /* WARNING: Subroutine does not return */
          native_sub_432810();
        }
        native_UnityEngine_Transform__set_localScale_771e30(lVar14,0);
        param_3[0x4c] = _StringLiteral__12eaac0;
        native_sub_4326e0(param_3 + 0x4c);
        *(undefined4 *)((long)param_3 + 0x274) = 0x3f800000;
      }
      else {
        uVar10 = native_UILabel__get_keepCrisp_ae8860();
        iVar3 = (int)param_3[0x4f];
        if (0 < iVar3) {
          plVar15 = param_3 + 0x4c;
          while( true ) {
            if ((uVar10 & 1) == 0) {
              param_2 = (float)iVar3;
              *(float *)((long)param_3 + 0x274) = param_2 / (float)(int)param_3[0x4f];
              lVar14 = native_UILabel__get_font_ae77e8(param_3);
              if (lVar14 == 0) {
                uVar4 = *(undefined4 *)((long)param_3 + 0x274);
                if (((*(byte *)(_NGUIText_TypeInfo_12d53c0 + 0x133) >> 2 & 1) != 0) &&
                   (*(int *)(_NGUIText_TypeInfo_12d53c0 + 0xe0) == 0)) {
                  native_sub_4327ec(_NGUIText_TypeInfo_12d53c0);
                }
                lVar14 = _NGUIText_TypeInfo_12d53c0;
                *(undefined4 *)(*(long *)(_NGUIText_TypeInfo_12d53c0 + 0xb8) + 0x20) = uVar4;
              }
              else {
                lVar13 = param_3[0x36];
                iVar5 = native_UILabel__get_defaultFontSize_ae82a4(param_3);
                fVar18 = *(float *)((long)param_3 + 0x274);
                if (((*(byte *)(_NGUIText_TypeInfo_12d53c0 + 0x133) >> 2 & 1) != 0) &&
                   (*(int *)(_NGUIText_TypeInfo_12d53c0 + 0xe0) == 0)) {
                  native_sub_4327ec(_NGUIText_TypeInfo_12d53c0);
                }
                lVar14 = _NGUIText_TypeInfo_12d53c0;
                param_2 = (float)iVar5;
                *(float *)(*(long *)(_NGUIText_TypeInfo_12d53c0 + 0xb8) + 0x20) =
                     fVar18 * ((float)(int)lVar13 / param_2);
              }
            }
            else {
              *(int *)(param_3 + 0x4f) = iVar3;
              if (((*(byte *)(_NGUIText_TypeInfo_12d53c0 + 0x133) >> 2 & 1) != 0) &&
                 (*(int *)(_NGUIText_TypeInfo_12d53c0 + 0xe0) == 0)) {
                native_sub_4327ec(_NGUIText_TypeInfo_12d53c0);
              }
              lVar14 = _NGUIText_TypeInfo_12d53c0;
              *(int *)(*(long *)(_NGUIText_TypeInfo_12d53c0 + 0xb8) + 0x1c) = iVar3;
            }
            if (((*(byte *)(lVar14 + 0x133) >> 2 & 1) != 0) && (*(int *)(lVar14 + 0xe0) == 0)) {
              native_sub_4327ec(lVar14);
            }
            native_NGUIText__Update_8088c0(0,0);
            uVar9 = native_UILabel__get_printedText_aea210(param_3);
            cVar16 = '\0';
            if (*(int *)((long)param_3 + 0x1e4) == 1) {
              cVar16 = (char)param_3[0x44];
            }
            if (((*(byte *)(_NGUIText_TypeInfo_12d53c0 + 0x133) >> 2 & 1) != 0) &&
               (*(int *)(_NGUIText_TypeInfo_12d53c0 + 0xe0) == 0)) {
              native_sub_4327ec();
            }
            uVar11 = native_NGUIText__WrapText_80dd68(uVar9,plVar15,0,0,cVar16 != '\0',0);
            iVar5 = *(int *)((long)param_3 + 0x1e4);
            if (((uVar11 & 1) != 0) || (iVar5 != 0)) break;
LAB_00ae90a4:
            if ((iVar3 + -1 < 2) || (iVar3 = iVar3 + -2, iVar3 < 1)) goto LAB_00ae9104;
          }
          if (iVar5 == 2) {
            lVar14 = *plVar15;
            if (((*(byte *)(_NGUIText_TypeInfo_12d53c0 + 0x133) >> 2 & 1) != 0) &&
               (*(int *)(_NGUIText_TypeInfo_12d53c0 + 0xe0) == 0)) {
              native_sub_4327ec();
            }
            uVar4 = native_NGUIText__CalculatePrintedSize_80cd38(lVar14,0,0);
            *(undefined4 *)((long)param_3 + 0x26c) = uVar4;
            *(float *)(param_3 + 0x4e) = param_2;
            if (((uVar11 & 1) == 0) && (0 < *(int *)((long)param_3 + 0x224))) goto LAB_00ae90a4;
            uVar4 = (**(code **)(*param_3 + 0x3b8))(param_3,*(undefined8 *)(*param_3 + 0x3c0));
            uVar6 = native_UnityEngine_Mathf__RoundToInt_8e50f0
                              (*(undefined4 *)((long)param_3 + 0x26c),0);
            uVar7 = native_UnityEngine_Mathf__Max_8e4cd0(uVar4,uVar6,0);
            if (fVar17 != 1.0) {
              uVar7 = native_UnityEngine_Mathf__RoundToInt_8e50f0((float)(int)uVar7 / fVar17,0);
            }
            uVar4 = (**(code **)(*param_3 + 0x3c8))(param_3,*(undefined8 *)(*param_3 + 0x3d0));
            uVar6 = native_UnityEngine_Mathf__RoundToInt_8e50f0((int)param_3[0x4e],0);
            uVar8 = native_UnityEngine_Mathf__Max_8e4cd0(uVar4,uVar6,0);
            if (fVar19 != 1.0) {
              uVar8 = native_UnityEngine_Mathf__RoundToInt_8e50f0((float)(int)uVar8 / fVar19,0);
            }
            iVar3 = (uVar7 & 1) + uVar7;
            iVar5 = (uVar8 & 1) + uVar8;
            if ((*(int *)((long)param_3 + 0xa4) != iVar3) || ((int)param_3[0x15] != iVar5)) {
              lVar14 = param_3[0x18];
              *(int *)((long)param_3 + 0xa4) = iVar3;
              *(int *)(param_3 + 0x15) = iVar5;
              *(int *)((long)param_3 + 0x27c) = iVar3;
              *(int *)(param_3 + 0x50) = iVar5;
joined_r0x00ae9304:
              if (lVar14 != 0) {
                native_UIWidget_OnDimensionsChanged__Invoke_55ba68(lVar14,0);
              }
            }
          }
          else {
            lVar14 = *plVar15;
            if (iVar5 == 3) {
              if (((*(ushort *)(_NGUIText_TypeInfo_12d53c0 + 0x132) >> 10 & 1) != 0) &&
                 (*(int *)(_NGUIText_TypeInfo_12d53c0 + 0xe0) == 0)) {
                native_sub_4327ec();
              }
              uVar4 = native_NGUIText__CalculatePrintedSize_80cd38(lVar14,0,0);
              *(undefined4 *)((long)param_3 + 0x26c) = uVar4;
              *(float *)(param_3 + 0x4e) = param_2;
              uVar4 = (**(code **)(*param_3 + 0x3c8))(param_3,*(undefined8 *)(*param_3 + 0x3d0));
              uVar6 = native_UnityEngine_Mathf__RoundToInt_8e50f0((int)param_3[0x4e],0);
              uVar7 = native_UnityEngine_Mathf__Max_8e4cd0(uVar4,uVar6,0);
              if (fVar19 != 1.0) {
                uVar7 = native_UnityEngine_Mathf__RoundToInt_8e50f0((float)(int)uVar7 / fVar19,0);
              }
              iVar3 = (uVar7 & 1) + uVar7;
              if ((int)param_3[0x15] != iVar3) {
                lVar14 = param_3[0x18];
                *(int *)(param_3 + 0x15) = iVar3;
                *(int *)(param_3 + 0x50) = iVar3;
                goto joined_r0x00ae9304;
              }
            }
            else {
              if (((*(ushort *)(_NGUIText_TypeInfo_12d53c0 + 0x132) >> 10 & 1) != 0) &&
                 (*(int *)(_NGUIText_TypeInfo_12d53c0 + 0xe0) == 0)) {
                native_sub_4327ec();
              }
              uVar4 = native_NGUIText__CalculatePrintedSize_80cd38(lVar14,0,0);
              *(undefined4 *)((long)param_3 + 0x26c) = uVar4;
              *(float *)(param_3 + 0x4e) = param_2;
            }
          }
        }
      }
LAB_00ae9104:
      if (((*(byte *)(_NGUIText_TypeInfo_12d53c0 + 0x133) >> 2 & 1) != 0) &&
         (*(int *)(_NGUIText_TypeInfo_12d53c0 + 0xe0) == 0)) {
        native_sub_4327ec();
      }
      puVar12 = *(undefined8 **)(_NGUIText_TypeInfo_12d53c0 + 0xb8);
      *puVar12 = 0;
      native_sub_4326e0(puVar12,0);
      plVar15 = (long *)(*(long *)(_NGUIText_TypeInfo_12d53c0 + 0xb8) + 8);
      *plVar15 = 0;
      goto native_sub_41086c;
    }
  }
  plVar15 = param_3 + 0x4c;
  param_3[0x4c] = _StringLiteral__12eaac0;
native_sub_41086c:
  if (iRam0000000001345318 != 0) {
    puVar1 = (ulong *)(((ulong)plVar15 >> 0x12 & 0x7fff) * 8 + 0x138ecd8);
    do {
      cVar16 = '\x01';
      bVar2 = (bool)ExclusiveMonitorPass(puVar1,0x10);
      if (bVar2) {
        *puVar1 = *puVar1 | 1L << ((ulong)plVar15 >> 0xc & 0x3f);
        cVar16 = ExclusiveMonitorsStatus();
      }
    } while (cVar16 != '\0');
  }
  return;
}



/* UILabel$$get_fontStyle @ 0xae8424
 * int32_t UILabel__get_fontStyle (UILabel_o* __this, const MethodInfo* method); */

/* UILabel$$get_fontStyle
   int32_t UILabel__get_fontStyle (UILabel_o* __this, const MethodInfo* method); */

undefined4 native_UILabel__get_fontStyle_ae8424(long param_1)

{
  return *(undefined4 *)(param_1 + 0x1b4);
}



/* UILabel$$set_fontStyle @ 0xae842c
 * void UILabel__set_fontStyle (UILabel_o* __this, int32_t value, const MethodInfo* method); */

/* WARNING: Removing unreachable block (ram,0x00ae8ab0) */
/* WARNING: Removing unreachable block (ram,0x00ae8ab8) */
/* WARNING: Removing unreachable block (ram,0x00ae8afc) */
/* WARNING: Removing unreachable block (ram,0x00ae8b04) */
/* WARNING: Removing unreachable block (ram,0x00ae8c74) */
/* WARNING: Removing unreachable block (ram,0x00ae8c80) */
/* WARNING: Removing unreachable block (ram,0x00ae9254) */
/* WARNING: Removing unreachable block (ram,0x00ae9338) */
/* WARNING: Removing unreachable block (ram,0x00ae938c) */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* UILabel$$set_fontStyle
   void UILabel__set_fontStyle (UILabel_o* __this, int32_t value, const MethodInfo* method); */

void native_UILabel__set_fontStyle_ae842c
               (undefined1 param_1 [16],float param_2,long *param_3,int param_4)

{
  ulong *puVar1;
  bool bVar2;
  undefined4 uVar3;
  int iVar4;
  undefined4 uVar5;
  uint uVar6;
  uint uVar7;
  undefined8 uVar8;
  ulong uVar9;
  ulong uVar10;
  undefined8 *puVar11;
  long lVar12;
  long lVar13;
  long *plVar14;
  char cVar15;
  int iVar16;
  float fVar17;
  float fVar18;
  float fVar19;
  float fVar20;
  
  if (*(int *)((long)param_3 + 0x1b4) == param_4) {
    return;
  }
  *(int *)((long)param_3 + 0x1b4) = param_4;
  *(undefined1 *)(param_3 + 0xb) = 1;
  *(undefined1 *)((long)param_3 + 0x25c) = 1;
  if ((bRam0000000001342014 & 1) == 0) {
    native_sub_43273c(&UnityEngine_Object_TypeInfo_12d54e0);
    bRam0000000001342014 = 1;
  }
  uVar8 = native_UILabel__get_ambigiousFont_ae8074(param_3);
  if (((*(byte *)(_UnityEngine_Object_TypeInfo_12d54e0 + 0x133) >> 2 & 1) != 0) &&
     (*(int *)(_UnityEngine_Object_TypeInfo_12d54e0 + 0xe0) == 0)) {
    native_sub_4327ec(_UnityEngine_Object_TypeInfo_12d54e0);
  }
  uVar9 = native_UnityEngine_Object__op_Inequality_8d76fc(uVar8,0,0);
  if ((uVar9 & 1) == 0) {
    return;
  }
  if ((bRam0000000001342018 & 1) == 0) {
    native_sub_43273c(&NGUIText_TypeInfo_12d53c0);
    native_sub_43273c(&UnityEngine_Object_TypeInfo_12d54e0);
    native_sub_43273c(&StringLiteral__12eaac0);
    bRam0000000001342018 = 1;
  }
  uVar9 = native_UILabel__get_isValid_ae9740(param_3);
  if ((uVar9 & 1) == 0) {
    return;
  }
  fVar17 = *(float *)((long)param_3 + 0x10c);
  fVar18 = *(float *)((long)param_3 + 0x104);
  fVar19 = *(float *)(param_3 + 0x22);
  fVar20 = *(float *)(param_3 + 0x21);
  uVar5 = 1000000;
  *(undefined1 *)(param_3 + 0xb) = 1;
  *(undefined1 *)((long)param_3 + 0x25c) = 0;
  uVar3 = *(undefined4 *)((long)param_3 + 0xa4);
  if (((*(byte *)(_NGUIText_TypeInfo_12d53c0 + 0x133) >> 2 & 1) != 0) &&
     (*(int *)(_NGUIText_TypeInfo_12d53c0 + 0xe0) == 0)) {
    native_sub_4327ec(_NGUIText_TypeInfo_12d53c0);
  }
  lVar12 = _NGUIText_TypeInfo_12d53c0;
  plVar14 = (long *)(_NGUIText_TypeInfo_12d53c0 + 0xb8);
  *(undefined4 *)(*plVar14 + 0x40) = uVar3;
  lVar13 = param_3[0x15];
  fVar17 = fVar17 - fVar18;
  if (((*(byte *)(lVar12 + 0x133) >> 2 & 1) != 0) && (*(int *)(lVar12 + 0xe0) == 0)) {
    native_sub_4327ec(lVar12);
    plVar14 = (long *)(_NGUIText_TypeInfo_12d53c0 + 0xb8);
    lVar12 = _NGUIText_TypeInfo_12d53c0;
  }
  *(int *)(*(long *)(lVar12 + 0xb8) + 0x44) = (int)lVar13;
  if (fVar17 == 1.0) {
    if (((*(ushort *)(lVar12 + 0x132) >> 10 & 1) != 0) && (*(int *)(lVar12 + 0xe0) == 0)) {
      native_sub_4327ec(lVar12);
      plVar14 = (long *)(_NGUIText_TypeInfo_12d53c0 + 0xb8);
      lVar12 = _NGUIText_TypeInfo_12d53c0;
    }
    uVar3 = *(undefined4 *)(*plVar14 + 0x40);
  }
  else {
    if (((*(ushort *)(lVar12 + 0x132) >> 10 & 1) != 0) && (*(int *)(lVar12 + 0xe0) == 0)) {
      native_sub_4327ec(lVar12);
      plVar14 = (long *)(_NGUIText_TypeInfo_12d53c0 + 0xb8);
    }
    uVar3 = native_UnityEngine_Mathf__RoundToInt_8e50f0(fVar17 * (float)*(int *)(*plVar14 + 0x40),0)
    ;
    lVar12 = _NGUIText_TypeInfo_12d53c0;
  }
  fVar19 = fVar19 - fVar20;
  if (((*(byte *)(lVar12 + 0x133) >> 2 & 1) != 0) && (*(int *)(lVar12 + 0xe0) == 0)) {
    native_sub_4327ec(lVar12);
    lVar12 = _NGUIText_TypeInfo_12d53c0;
  }
  plVar14 = (long *)(lVar12 + 0xb8);
  *(undefined4 *)(*plVar14 + 0x48) = uVar3;
  if (fVar19 == 1.0) {
    if (((*(ushort *)(lVar12 + 0x132) >> 10 & 1) != 0) && (*(int *)(lVar12 + 0xe0) == 0)) {
      native_sub_4327ec(lVar12);
      lVar12 = _NGUIText_TypeInfo_12d53c0;
    }
    uVar3 = *(undefined4 *)(*(long *)(lVar12 + 0xb8) + 0x44);
  }
  else {
    if (((*(ushort *)(lVar12 + 0x132) >> 10 & 1) != 0) && (*(int *)(lVar12 + 0xe0) == 0)) {
      native_sub_4327ec(lVar12);
      plVar14 = (long *)(_NGUIText_TypeInfo_12d53c0 + 0xb8);
    }
    uVar3 = native_UnityEngine_Mathf__RoundToInt_8e50f0(fVar19 * (float)*(int *)(*plVar14 + 0x44),0)
    ;
    lVar12 = _NGUIText_TypeInfo_12d53c0;
  }
  if (((*(byte *)(lVar12 + 0x133) >> 2 & 1) != 0) && (*(int *)(lVar12 + 0xe0) == 0)) {
    native_sub_4327ec(lVar12);
    lVar12 = _NGUIText_TypeInfo_12d53c0;
  }
  *(undefined4 *)(*(long *)(lVar12 + 0xb8) + 0x4c) = uVar3;
  uVar8 = native_UILabel__get_defaultFontSize_ae82a4(param_3);
  uVar3 = native_UnityEngine_Mathf__Abs_8e4b54(uVar8,0);
  *(undefined4 *)(param_3 + 0x4f) = uVar3;
  *(undefined4 *)((long)param_3 + 0x274) = 0x3f800000;
  if (((*(byte *)(_NGUIText_TypeInfo_12d53c0 + 0x133) >> 2 & 1) != 0) &&
     (*(int *)(_NGUIText_TypeInfo_12d53c0 + 0xe0) == 0)) {
    native_sub_4327ec();
  }
  lVar13 = *(long *)(_NGUIText_TypeInfo_12d53c0 + 0xb8);
  if (0 < *(int *)(lVar13 + 0x48)) {
    if (((*(byte *)(_NGUIText_TypeInfo_12d53c0 + 0x133) >> 2 & 1) != 0) &&
       (*(int *)(_NGUIText_TypeInfo_12d53c0 + 0xe0) == 0)) {
      native_sub_4327ec();
      lVar13 = *(long *)(_NGUIText_TypeInfo_12d53c0 + 0xb8);
    }
    if (-1 < *(int *)(lVar13 + 0x4c)) {
      uVar8 = native_UILabel__get_trueTypeFont_ae74d0(param_3);
      if (((*(byte *)(_UnityEngine_Object_TypeInfo_12d54e0 + 0x133) >> 2 & 1) != 0) &&
         (*(int *)(_UnityEngine_Object_TypeInfo_12d54e0 + 0xe0) == 0)) {
        native_sub_4327ec(_UnityEngine_Object_TypeInfo_12d54e0);
      }
      uVar9 = native_UnityEngine_Object__op_Inequality_8d76fc(uVar8,0,0);
      uVar3 = 0x3f800000;
      if (((uVar9 & 1) == 0) ||
         (uVar9 = native_UILabel__get_keepCrisp_ae8860(param_3), uVar3 = 0x3f800000,
         (uVar9 & 1) == 0)) {
LAB_00ae8dcc:
        *(undefined4 *)(param_3 + 0x4b) = uVar3;
      }
      else {
        lVar13 = native_UIRect__get_root_c2d7ac(param_3,0);
        if (((*(byte *)(_UnityEngine_Object_TypeInfo_12d54e0 + 0x133) >> 2 & 1) != 0) &&
           (*(int *)(_UnityEngine_Object_TypeInfo_12d54e0 + 0xe0) == 0)) {
          native_sub_4327ec(_UnityEngine_Object_TypeInfo_12d54e0);
        }
        uVar9 = native_UnityEngine_Object__op_Inequality_8d76fc(lVar13,0,0);
        if ((uVar9 & 1) != 0) {
          if (((*(byte *)(_UnityEngine_Object_TypeInfo_12d54e0 + 0x133) >> 2 & 1) != 0) &&
             (*(int *)(_UnityEngine_Object_TypeInfo_12d54e0 + 0xe0) == 0)) {
            native_sub_4327ec();
          }
          uVar9 = native_UnityEngine_Object__op_Inequality_8d76fc(lVar13,0,0);
          if ((uVar9 & 1) != 0) {
            if (lVar13 == 0) goto LAB_00ae93c0;
            uVar3 = native_UIRoot__get_pixelSizeAdjustment_c2f740(lVar13,0);
          }
          goto LAB_00ae8dcc;
        }
      }
      native_UILabel__UpdateNGUIText_aeae48(param_3);
      if (*(int *)((long)param_3 + 0x1e4) == 3) {
        lVar13 = _NGUIText_TypeInfo_12d53c0;
        if ((*(byte *)(_NGUIText_TypeInfo_12d53c0 + 0x133) >> 2 & 1) != 0) {
LAB_00ae8eb4:
          if (*(int *)(lVar13 + 0xe0) == 0) {
            native_sub_4327ec();
            lVar13 = _NGUIText_TypeInfo_12d53c0;
          }
        }
LAB_00ae8ec4:
        plVar14 = (long *)(lVar13 + 0xb8);
        *(undefined4 *)(*plVar14 + 0x44) = 1000000;
LAB_00ae8ecc:
        *(undefined4 *)(*plVar14 + 0x4c) = uVar5;
      }
      else if (*(int *)((long)param_3 + 0x1e4) == 2) {
        iVar16 = *(int *)((long)param_3 + 0x224);
        if (iVar16 < 1) {
          if (((*(ushort *)(_NGUIText_TypeInfo_12d53c0 + 0x132) >> 10 & 1) != 0) &&
             (*(int *)(_NGUIText_TypeInfo_12d53c0 + 0xe0) == 0)) {
            native_sub_4327ec();
          }
          lVar13 = _NGUIText_TypeInfo_12d53c0;
          *(undefined4 *)(*(long *)(_NGUIText_TypeInfo_12d53c0 + 0xb8) + 0x40) = 1000000;
          uVar3 = 1000000;
        }
        else {
          if (((*(ushort *)(_NGUIText_TypeInfo_12d53c0 + 0x132) >> 10 & 1) != 0) &&
             (*(int *)(_NGUIText_TypeInfo_12d53c0 + 0xe0) == 0)) {
            native_sub_4327ec();
          }
          lVar13 = _NGUIText_TypeInfo_12d53c0;
          *(int *)(*(long *)(_NGUIText_TypeInfo_12d53c0 + 0xb8) + 0x40) = iVar16;
          uVar3 = *(undefined4 *)((long)param_3 + 0x224);
        }
        *(undefined4 *)(*(long *)(lVar13 + 0xb8) + 0x48) = uVar3;
        lVar12 = param_3[0x45];
        if ((int)lVar12 < 1) {
          if ((*(ushort *)(lVar13 + 0x132) >> 10 & 1) != 0) goto LAB_00ae8eb4;
          goto LAB_00ae8ec4;
        }
        if (((*(ushort *)(lVar13 + 0x132) >> 10 & 1) != 0) && (*(int *)(lVar13 + 0xe0) == 0)) {
          native_sub_4327ec();
          lVar13 = _NGUIText_TypeInfo_12d53c0;
        }
        plVar14 = (long *)(lVar13 + 0xb8);
        *(int *)(*plVar14 + 0x44) = (int)lVar12;
        uVar5 = (undefined4)param_3[0x45];
        goto LAB_00ae8ecc;
      }
      if ((int)param_3[0x4f] < 1) {
        lVar13 = native_UIRect__get_cachedTransform_c27c58(param_3,0);
        native_UnityEngine_Vector3__get_one_776a20(0);
        if (lVar13 == 0) {
LAB_00ae93c0:
                    /* WARNING: Subroutine does not return */
          native_sub_432810();
        }
        native_UnityEngine_Transform__set_localScale_771e30(lVar13,0);
        param_3[0x4c] = _StringLiteral__12eaac0;
        native_sub_4326e0(param_3 + 0x4c);
        *(undefined4 *)((long)param_3 + 0x274) = 0x3f800000;
      }
      else {
        uVar9 = native_UILabel__get_keepCrisp_ae8860();
        iVar16 = (int)param_3[0x4f];
        if (0 < iVar16) {
          plVar14 = param_3 + 0x4c;
          while( true ) {
            if ((uVar9 & 1) == 0) {
              param_2 = (float)iVar16;
              *(float *)((long)param_3 + 0x274) = param_2 / (float)(int)param_3[0x4f];
              lVar13 = native_UILabel__get_font_ae77e8(param_3);
              if (lVar13 == 0) {
                uVar3 = *(undefined4 *)((long)param_3 + 0x274);
                if (((*(byte *)(_NGUIText_TypeInfo_12d53c0 + 0x133) >> 2 & 1) != 0) &&
                   (*(int *)(_NGUIText_TypeInfo_12d53c0 + 0xe0) == 0)) {
                  native_sub_4327ec(_NGUIText_TypeInfo_12d53c0);
                }
                lVar13 = _NGUIText_TypeInfo_12d53c0;
                *(undefined4 *)(*(long *)(_NGUIText_TypeInfo_12d53c0 + 0xb8) + 0x20) = uVar3;
              }
              else {
                lVar12 = param_3[0x36];
                iVar4 = native_UILabel__get_defaultFontSize_ae82a4(param_3);
                fVar18 = *(float *)((long)param_3 + 0x274);
                if (((*(byte *)(_NGUIText_TypeInfo_12d53c0 + 0x133) >> 2 & 1) != 0) &&
                   (*(int *)(_NGUIText_TypeInfo_12d53c0 + 0xe0) == 0)) {
                  native_sub_4327ec(_NGUIText_TypeInfo_12d53c0);
                }
                lVar13 = _NGUIText_TypeInfo_12d53c0;
                param_2 = (float)iVar4;
                *(float *)(*(long *)(_NGUIText_TypeInfo_12d53c0 + 0xb8) + 0x20) =
                     fVar18 * ((float)(int)lVar12 / param_2);
              }
            }
            else {
              *(int *)(param_3 + 0x4f) = iVar16;
              if (((*(byte *)(_NGUIText_TypeInfo_12d53c0 + 0x133) >> 2 & 1) != 0) &&
                 (*(int *)(_NGUIText_TypeInfo_12d53c0 + 0xe0) == 0)) {
                native_sub_4327ec(_NGUIText_TypeInfo_12d53c0);
              }
              lVar13 = _NGUIText_TypeInfo_12d53c0;
              *(int *)(*(long *)(_NGUIText_TypeInfo_12d53c0 + 0xb8) + 0x1c) = iVar16;
            }
            if (((*(byte *)(lVar13 + 0x133) >> 2 & 1) != 0) && (*(int *)(lVar13 + 0xe0) == 0)) {
              native_sub_4327ec(lVar13);
            }
            native_NGUIText__Update_8088c0(0,0);
            uVar8 = native_UILabel__get_printedText_aea210(param_3);
            cVar15 = '\0';
            if (*(int *)((long)param_3 + 0x1e4) == 1) {
              cVar15 = (char)param_3[0x44];
            }
            if (((*(byte *)(_NGUIText_TypeInfo_12d53c0 + 0x133) >> 2 & 1) != 0) &&
               (*(int *)(_NGUIText_TypeInfo_12d53c0 + 0xe0) == 0)) {
              native_sub_4327ec();
            }
            uVar10 = native_NGUIText__WrapText_80dd68(uVar8,plVar14,0,0,cVar15 != '\0',0);
            iVar4 = *(int *)((long)param_3 + 0x1e4);
            if (((uVar10 & 1) != 0) || (iVar4 != 0)) break;
LAB_00ae90a4:
            if ((iVar16 + -1 < 2) || (iVar16 = iVar16 + -2, iVar16 < 1)) goto LAB_00ae9104;
          }
          if (iVar4 == 2) {
            lVar13 = *plVar14;
            if (((*(byte *)(_NGUIText_TypeInfo_12d53c0 + 0x133) >> 2 & 1) != 0) &&
               (*(int *)(_NGUIText_TypeInfo_12d53c0 + 0xe0) == 0)) {
              native_sub_4327ec();
            }
            uVar3 = native_NGUIText__CalculatePrintedSize_80cd38(lVar13,0,0);
            *(undefined4 *)((long)param_3 + 0x26c) = uVar3;
            *(float *)(param_3 + 0x4e) = param_2;
            if (((uVar10 & 1) == 0) && (0 < *(int *)((long)param_3 + 0x224))) goto LAB_00ae90a4;
            uVar3 = (**(code **)(*param_3 + 0x3b8))(param_3,*(undefined8 *)(*param_3 + 0x3c0));
            uVar5 = native_UnityEngine_Mathf__RoundToInt_8e50f0
                              (*(undefined4 *)((long)param_3 + 0x26c),0);
            uVar6 = native_UnityEngine_Mathf__Max_8e4cd0(uVar3,uVar5,0);
            if (fVar17 != 1.0) {
              uVar6 = native_UnityEngine_Mathf__RoundToInt_8e50f0((float)(int)uVar6 / fVar17,0);
            }
            uVar3 = (**(code **)(*param_3 + 0x3c8))(param_3,*(undefined8 *)(*param_3 + 0x3d0));
            uVar5 = native_UnityEngine_Mathf__RoundToInt_8e50f0((int)param_3[0x4e],0);
            uVar7 = native_UnityEngine_Mathf__Max_8e4cd0(uVar3,uVar5,0);
            if (fVar19 != 1.0) {
              uVar7 = native_UnityEngine_Mathf__RoundToInt_8e50f0((float)(int)uVar7 / fVar19,0);
            }
            iVar16 = (uVar6 & 1) + uVar6;
            iVar4 = (uVar7 & 1) + uVar7;
            if ((*(int *)((long)param_3 + 0xa4) != iVar16) || ((int)param_3[0x15] != iVar4)) {
              lVar13 = param_3[0x18];
              *(int *)((long)param_3 + 0xa4) = iVar16;
              *(int *)(param_3 + 0x15) = iVar4;
              *(int *)((long)param_3 + 0x27c) = iVar16;
              *(int *)(param_3 + 0x50) = iVar4;
joined_r0x00ae9304:
              if (lVar13 != 0) {
                native_UIWidget_OnDimensionsChanged__Invoke_55ba68(lVar13,0);
              }
            }
          }
          else {
            lVar13 = *plVar14;
            if (iVar4 == 3) {
              if (((*(ushort *)(_NGUIText_TypeInfo_12d53c0 + 0x132) >> 10 & 1) != 0) &&
                 (*(int *)(_NGUIText_TypeInfo_12d53c0 + 0xe0) == 0)) {
                native_sub_4327ec();
              }
              uVar3 = native_NGUIText__CalculatePrintedSize_80cd38(lVar13,0,0);
              *(undefined4 *)((long)param_3 + 0x26c) = uVar3;
              *(float *)(param_3 + 0x4e) = param_2;
              uVar3 = (**(code **)(*param_3 + 0x3c8))(param_3,*(undefined8 *)(*param_3 + 0x3d0));
              uVar5 = native_UnityEngine_Mathf__RoundToInt_8e50f0((int)param_3[0x4e],0);
              uVar6 = native_UnityEngine_Mathf__Max_8e4cd0(uVar3,uVar5,0);
              if (fVar19 != 1.0) {
                uVar6 = native_UnityEngine_Mathf__RoundToInt_8e50f0((float)(int)uVar6 / fVar19,0);
              }
              iVar16 = (uVar6 & 1) + uVar6;
              if ((int)param_3[0x15] != iVar16) {
                lVar13 = param_3[0x18];
                *(int *)(param_3 + 0x15) = iVar16;
                *(int *)(param_3 + 0x50) = iVar16;
                goto joined_r0x00ae9304;
              }
            }
            else {
              if (((*(ushort *)(_NGUIText_TypeInfo_12d53c0 + 0x132) >> 10 & 1) != 0) &&
                 (*(int *)(_NGUIText_TypeInfo_12d53c0 + 0xe0) == 0)) {
                native_sub_4327ec();
              }
              uVar3 = native_NGUIText__CalculatePrintedSize_80cd38(lVar13,0,0);
              *(undefined4 *)((long)param_3 + 0x26c) = uVar3;
              *(float *)(param_3 + 0x4e) = param_2;
            }
          }
        }
      }
LAB_00ae9104:
      if (((*(byte *)(_NGUIText_TypeInfo_12d53c0 + 0x133) >> 2 & 1) != 0) &&
         (*(int *)(_NGUIText_TypeInfo_12d53c0 + 0xe0) == 0)) {
        native_sub_4327ec();
      }
      puVar11 = *(undefined8 **)(_NGUIText_TypeInfo_12d53c0 + 0xb8);
      *puVar11 = 0;
      native_sub_4326e0(puVar11,0);
      plVar14 = (long *)(*(long *)(_NGUIText_TypeInfo_12d53c0 + 0xb8) + 8);
      *plVar14 = 0;
      goto native_sub_41086c;
    }
  }
  plVar14 = param_3 + 0x4c;
  param_3[0x4c] = _StringLiteral__12eaac0;
native_sub_41086c:
  if (iRam0000000001345318 != 0) {
    puVar1 = (ulong *)(((ulong)plVar14 >> 0x12 & 0x7fff) * 8 + 0x138ecd8);
    do {
      cVar15 = '\x01';
      bVar2 = (bool)ExclusiveMonitorPass(puVar1,0x10);
      if (bVar2) {
        *puVar1 = *puVar1 | 1L << ((ulong)plVar14 >> 0xc & 0x3f);
        cVar15 = ExclusiveMonitorsStatus();
      }
    } while (cVar15 != '\0');
  }
  return;
}



/* UILabel$$get_alignment @ 0xae8450
 * int32_t UILabel__get_alignment (UILabel_o* __this, const MethodInfo* method); */

/* UILabel$$get_alignment
   int32_t UILabel__get_alignment (UILabel_o* __this, const MethodInfo* method); */

undefined4 native_UILabel__get_alignment_ae8450(long param_1)

{
  return *(undefined4 *)(param_1 + 0x1b8);
}



/* UILabel$$set_alignment @ 0xae8458
 * void UILabel__set_alignment (UILabel_o* __this, int32_t value, const MethodInfo* method); */

/* WARNING: Removing unreachable block (ram,0x00ae8ab0) */
/* WARNING: Removing unreachable block (ram,0x00ae8ab8) */
/* WARNING: Removing unreachable block (ram,0x00ae8afc) */
/* WARNING: Removing unreachable block (ram,0x00ae8b04) */
/* WARNING: Removing unreachable block (ram,0x00ae8c74) */
/* WARNING: Removing unreachable block (ram,0x00ae8c80) */
/* WARNING: Removing unreachable block (ram,0x00ae9254) */
/* WARNING: Removing unreachable block (ram,0x00ae9338) */
/* WARNING: Removing unreachable block (ram,0x00ae938c) */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* UILabel$$set_alignment
   void UILabel__set_alignment (UILabel_o* __this, int32_t value, const MethodInfo* method); */

void native_UILabel__set_alignment_ae8458
               (undefined1 param_1 [16],float param_2,long *param_3,int param_4)

{
  ulong *puVar1;
  bool bVar2;
  undefined4 uVar3;
  int iVar4;
  undefined4 uVar5;
  uint uVar6;
  uint uVar7;
  undefined8 uVar8;
  ulong uVar9;
  ulong uVar10;
  undefined8 *puVar11;
  long lVar12;
  long lVar13;
  long *plVar14;
  char cVar15;
  int iVar16;
  float fVar17;
  float fVar18;
  float fVar19;
  float fVar20;
  
  if ((int)param_3[0x37] == param_4) {
    return;
  }
  *(int *)(param_3 + 0x37) = param_4;
  *(undefined1 *)(param_3 + 0xb) = 1;
  *(undefined1 *)((long)param_3 + 0x25c) = 1;
  if ((bRam0000000001342014 & 1) == 0) {
    native_sub_43273c(&UnityEngine_Object_TypeInfo_12d54e0);
    bRam0000000001342014 = 1;
  }
  uVar8 = native_UILabel__get_ambigiousFont_ae8074(param_3);
  if (((*(byte *)(_UnityEngine_Object_TypeInfo_12d54e0 + 0x133) >> 2 & 1) != 0) &&
     (*(int *)(_UnityEngine_Object_TypeInfo_12d54e0 + 0xe0) == 0)) {
    native_sub_4327ec(_UnityEngine_Object_TypeInfo_12d54e0);
  }
  uVar9 = native_UnityEngine_Object__op_Inequality_8d76fc(uVar8,0,0);
  if ((uVar9 & 1) == 0) {
    return;
  }
  if ((bRam0000000001342018 & 1) == 0) {
    native_sub_43273c(&NGUIText_TypeInfo_12d53c0);
    native_sub_43273c(&UnityEngine_Object_TypeInfo_12d54e0);
    native_sub_43273c(&StringLiteral__12eaac0);
    bRam0000000001342018 = 1;
  }
  uVar9 = native_UILabel__get_isValid_ae9740(param_3);
  if ((uVar9 & 1) == 0) {
    return;
  }
  fVar17 = *(float *)((long)param_3 + 0x10c);
  fVar18 = *(float *)((long)param_3 + 0x104);
  fVar19 = *(float *)(param_3 + 0x22);
  fVar20 = *(float *)(param_3 + 0x21);
  uVar5 = 1000000;
  *(undefined1 *)(param_3 + 0xb) = 1;
  *(undefined1 *)((long)param_3 + 0x25c) = 0;
  uVar3 = *(undefined4 *)((long)param_3 + 0xa4);
  if (((*(byte *)(_NGUIText_TypeInfo_12d53c0 + 0x133) >> 2 & 1) != 0) &&
     (*(int *)(_NGUIText_TypeInfo_12d53c0 + 0xe0) == 0)) {
    native_sub_4327ec(_NGUIText_TypeInfo_12d53c0);
  }
  lVar12 = _NGUIText_TypeInfo_12d53c0;
  plVar14 = (long *)(_NGUIText_TypeInfo_12d53c0 + 0xb8);
  *(undefined4 *)(*plVar14 + 0x40) = uVar3;
  lVar13 = param_3[0x15];
  fVar17 = fVar17 - fVar18;
  if (((*(byte *)(lVar12 + 0x133) >> 2 & 1) != 0) && (*(int *)(lVar12 + 0xe0) == 0)) {
    native_sub_4327ec(lVar12);
    plVar14 = (long *)(_NGUIText_TypeInfo_12d53c0 + 0xb8);
    lVar12 = _NGUIText_TypeInfo_12d53c0;
  }
  *(int *)(*(long *)(lVar12 + 0xb8) + 0x44) = (int)lVar13;
  if (fVar17 == 1.0) {
    if (((*(ushort *)(lVar12 + 0x132) >> 10 & 1) != 0) && (*(int *)(lVar12 + 0xe0) == 0)) {
      native_sub_4327ec(lVar12);
      plVar14 = (long *)(_NGUIText_TypeInfo_12d53c0 + 0xb8);
      lVar12 = _NGUIText_TypeInfo_12d53c0;
    }
    uVar3 = *(undefined4 *)(*plVar14 + 0x40);
  }
  else {
    if (((*(ushort *)(lVar12 + 0x132) >> 10 & 1) != 0) && (*(int *)(lVar12 + 0xe0) == 0)) {
      native_sub_4327ec(lVar12);
      plVar14 = (long *)(_NGUIText_TypeInfo_12d53c0 + 0xb8);
    }
    uVar3 = native_UnityEngine_Mathf__RoundToInt_8e50f0(fVar17 * (float)*(int *)(*plVar14 + 0x40),0)
    ;
    lVar12 = _NGUIText_TypeInfo_12d53c0;
  }
  fVar19 = fVar19 - fVar20;
  if (((*(byte *)(lVar12 + 0x133) >> 2 & 1) != 0) && (*(int *)(lVar12 + 0xe0) == 0)) {
    native_sub_4327ec(lVar12);
    lVar12 = _NGUIText_TypeInfo_12d53c0;
  }
  plVar14 = (long *)(lVar12 + 0xb8);
  *(undefined4 *)(*plVar14 + 0x48) = uVar3;
  if (fVar19 == 1.0) {
    if (((*(ushort *)(lVar12 + 0x132) >> 10 & 1) != 0) && (*(int *)(lVar12 + 0xe0) == 0)) {
      native_sub_4327ec(lVar12);
      lVar12 = _NGUIText_TypeInfo_12d53c0;
    }
    uVar3 = *(undefined4 *)(*(long *)(lVar12 + 0xb8) + 0x44);
  }
  else {
    if (((*(ushort *)(lVar12 + 0x132) >> 10 & 1) != 0) && (*(int *)(lVar12 + 0xe0) == 0)) {
      native_sub_4327ec(lVar12);
      plVar14 = (long *)(_NGUIText_TypeInfo_12d53c0 + 0xb8);
    }
    uVar3 = native_UnityEngine_Mathf__RoundToInt_8e50f0(fVar19 * (float)*(int *)(*plVar14 + 0x44),0)
    ;
    lVar12 = _NGUIText_TypeInfo_12d53c0;
  }
  if (((*(byte *)(lVar12 + 0x133) >> 2 & 1) != 0) && (*(int *)(lVar12 + 0xe0) == 0)) {
    native_sub_4327ec(lVar12);
    lVar12 = _NGUIText_TypeInfo_12d53c0;
  }
  *(undefined4 *)(*(long *)(lVar12 + 0xb8) + 0x4c) = uVar3;
  uVar8 = native_UILabel__get_defaultFontSize_ae82a4(param_3);
  uVar3 = native_UnityEngine_Mathf__Abs_8e4b54(uVar8,0);
  *(undefined4 *)(param_3 + 0x4f) = uVar3;
  *(undefined4 *)((long)param_3 + 0x274) = 0x3f800000;
  if (((*(byte *)(_NGUIText_TypeInfo_12d53c0 + 0x133) >> 2 & 1) != 0) &&
     (*(int *)(_NGUIText_TypeInfo_12d53c0 + 0xe0) == 0)) {
    native_sub_4327ec();
  }
  lVar13 = *(long *)(_NGUIText_TypeInfo_12d53c0 + 0xb8);
  if (0 < *(int *)(lVar13 + 0x48)) {
    if (((*(byte *)(_NGUIText_TypeInfo_12d53c0 + 0x133) >> 2 & 1) != 0) &&
       (*(int *)(_NGUIText_TypeInfo_12d53c0 + 0xe0) == 0)) {
      native_sub_4327ec();
      lVar13 = *(long *)(_NGUIText_TypeInfo_12d53c0 + 0xb8);
    }
    if (-1 < *(int *)(lVar13 + 0x4c)) {
      uVar8 = native_UILabel__get_trueTypeFont_ae74d0(param_3);
      if (((*(byte *)(_UnityEngine_Object_TypeInfo_12d54e0 + 0x133) >> 2 & 1) != 0) &&
         (*(int *)(_UnityEngine_Object_TypeInfo_12d54e0 + 0xe0) == 0)) {
        native_sub_4327ec(_UnityEngine_Object_TypeInfo_12d54e0);
      }
      uVar9 = native_UnityEngine_Object__op_Inequality_8d76fc(uVar8,0,0);
      uVar3 = 0x3f800000;
      if (((uVar9 & 1) == 0) ||
         (uVar9 = native_UILabel__get_keepCrisp_ae8860(param_3), uVar3 = 0x3f800000,
         (uVar9 & 1) == 0)) {
LAB_00ae8dcc:
        *(undefined4 *)(param_3 + 0x4b) = uVar3;
      }
      else {
        lVar13 = native_UIRect__get_root_c2d7ac(param_3,0);
        if (((*(byte *)(_UnityEngine_Object_TypeInfo_12d54e0 + 0x133) >> 2 & 1) != 0) &&
           (*(int *)(_UnityEngine_Object_TypeInfo_12d54e0 + 0xe0) == 0)) {
          native_sub_4327ec(_UnityEngine_Object_TypeInfo_12d54e0);
        }
        uVar9 = native_UnityEngine_Object__op_Inequality_8d76fc(lVar13,0,0);
        if ((uVar9 & 1) != 0) {
          if (((*(byte *)(_UnityEngine_Object_TypeInfo_12d54e0 + 0x133) >> 2 & 1) != 0) &&
             (*(int *)(_UnityEngine_Object_TypeInfo_12d54e0 + 0xe0) == 0)) {
            native_sub_4327ec();
          }
          uVar9 = native_UnityEngine_Object__op_Inequality_8d76fc(lVar13,0,0);
          if ((uVar9 & 1) != 0) {
            if (lVar13 == 0) goto LAB_00ae93c0;
            uVar3 = native_UIRoot__get_pixelSizeAdjustment_c2f740(lVar13,0);
          }
          goto LAB_00ae8dcc;
        }
      }
      native_UILabel__UpdateNGUIText_aeae48(param_3);
      if (*(int *)((long)param_3 + 0x1e4) == 3) {
        lVar13 = _NGUIText_TypeInfo_12d53c0;
        if ((*(byte *)(_NGUIText_TypeInfo_12d53c0 + 0x133) >> 2 & 1) != 0) {
LAB_00ae8eb4:
          if (*(int *)(lVar13 + 0xe0) == 0) {
            native_sub_4327ec();
            lVar13 = _NGUIText_TypeInfo_12d53c0;
          }
        }
LAB_00ae8ec4:
        plVar14 = (long *)(lVar13 + 0xb8);
        *(undefined4 *)(*plVar14 + 0x44) = 1000000;
LAB_00ae8ecc:
        *(undefined4 *)(*plVar14 + 0x4c) = uVar5;
      }
      else if (*(int *)((long)param_3 + 0x1e4) == 2) {
        iVar16 = *(int *)((long)param_3 + 0x224);
        if (iVar16 < 1) {
          if (((*(ushort *)(_NGUIText_TypeInfo_12d53c0 + 0x132) >> 10 & 1) != 0) &&
             (*(int *)(_NGUIText_TypeInfo_12d53c0 + 0xe0) == 0)) {
            native_sub_4327ec();
          }
          lVar13 = _NGUIText_TypeInfo_12d53c0;
          *(undefined4 *)(*(long *)(_NGUIText_TypeInfo_12d53c0 + 0xb8) + 0x40) = 1000000;
          uVar3 = 1000000;
        }
        else {
          if (((*(ushort *)(_NGUIText_TypeInfo_12d53c0 + 0x132) >> 10 & 1) != 0) &&
             (*(int *)(_NGUIText_TypeInfo_12d53c0 + 0xe0) == 0)) {
            native_sub_4327ec();
          }
          lVar13 = _NGUIText_TypeInfo_12d53c0;
          *(int *)(*(long *)(_NGUIText_TypeInfo_12d53c0 + 0xb8) + 0x40) = iVar16;
          uVar3 = *(undefined4 *)((long)param_3 + 0x224);
        }
        *(undefined4 *)(*(long *)(lVar13 + 0xb8) + 0x48) = uVar3;
        lVar12 = param_3[0x45];
        if ((int)lVar12 < 1) {
          if ((*(ushort *)(lVar13 + 0x132) >> 10 & 1) != 0) goto LAB_00ae8eb4;
          goto LAB_00ae8ec4;
        }
        if (((*(ushort *)(lVar13 + 0x132) >> 10 & 1) != 0) && (*(int *)(lVar13 + 0xe0) == 0)) {
          native_sub_4327ec();
          lVar13 = _NGUIText_TypeInfo_12d53c0;
        }
        plVar14 = (long *)(lVar13 + 0xb8);
        *(int *)(*plVar14 + 0x44) = (int)lVar12;
        uVar5 = (undefined4)param_3[0x45];
        goto LAB_00ae8ecc;
      }
      if ((int)param_3[0x4f] < 1) {
        lVar13 = native_UIRect__get_cachedTransform_c27c58(param_3,0);
        native_UnityEngine_Vector3__get_one_776a20(0);
        if (lVar13 == 0) {
LAB_00ae93c0:
                    /* WARNING: Subroutine does not return */
          native_sub_432810();
        }
        native_UnityEngine_Transform__set_localScale_771e30(lVar13,0);
        param_3[0x4c] = _StringLiteral__12eaac0;
        native_sub_4326e0(param_3 + 0x4c);
        *(undefined4 *)((long)param_3 + 0x274) = 0x3f800000;
      }
      else {
        uVar9 = native_UILabel__get_keepCrisp_ae8860();
        iVar16 = (int)param_3[0x4f];
        if (0 < iVar16) {
          plVar14 = param_3 + 0x4c;
          while( true ) {
            if ((uVar9 & 1) == 0) {
              param_2 = (float)iVar16;
              *(float *)((long)param_3 + 0x274) = param_2 / (float)(int)param_3[0x4f];
              lVar13 = native_UILabel__get_font_ae77e8(param_3);
              if (lVar13 == 0) {
                uVar3 = *(undefined4 *)((long)param_3 + 0x274);
                if (((*(byte *)(_NGUIText_TypeInfo_12d53c0 + 0x133) >> 2 & 1) != 0) &&
                   (*(int *)(_NGUIText_TypeInfo_12d53c0 + 0xe0) == 0)) {
                  native_sub_4327ec(_NGUIText_TypeInfo_12d53c0);
                }
                lVar13 = _NGUIText_TypeInfo_12d53c0;
                *(undefined4 *)(*(long *)(_NGUIText_TypeInfo_12d53c0 + 0xb8) + 0x20) = uVar3;
              }
              else {
                lVar12 = param_3[0x36];
                iVar4 = native_UILabel__get_defaultFontSize_ae82a4(param_3);
                fVar18 = *(float *)((long)param_3 + 0x274);
                if (((*(byte *)(_NGUIText_TypeInfo_12d53c0 + 0x133) >> 2 & 1) != 0) &&
                   (*(int *)(_NGUIText_TypeInfo_12d53c0 + 0xe0) == 0)) {
                  native_sub_4327ec(_NGUIText_TypeInfo_12d53c0);
                }
                lVar13 = _NGUIText_TypeInfo_12d53c0;
                param_2 = (float)iVar4;
                *(float *)(*(long *)(_NGUIText_TypeInfo_12d53c0 + 0xb8) + 0x20) =
                     fVar18 * ((float)(int)lVar12 / param_2);
              }
            }
            else {
              *(int *)(param_3 + 0x4f) = iVar16;
              if (((*(byte *)(_NGUIText_TypeInfo_12d53c0 + 0x133) >> 2 & 1) != 0) &&
                 (*(int *)(_NGUIText_TypeInfo_12d53c0 + 0xe0) == 0)) {
                native_sub_4327ec(_NGUIText_TypeInfo_12d53c0);
              }
              lVar13 = _NGUIText_TypeInfo_12d53c0;
              *(int *)(*(long *)(_NGUIText_TypeInfo_12d53c0 + 0xb8) + 0x1c) = iVar16;
            }
            if (((*(byte *)(lVar13 + 0x133) >> 2 & 1) != 0) && (*(int *)(lVar13 + 0xe0) == 0)) {
              native_sub_4327ec(lVar13);
            }
            native_NGUIText__Update_8088c0(0,0);
            uVar8 = native_UILabel__get_printedText_aea210(param_3);
            cVar15 = '\0';
            if (*(int *)((long)param_3 + 0x1e4) == 1) {
              cVar15 = (char)param_3[0x44];
            }
            if (((*(byte *)(_NGUIText_TypeInfo_12d53c0 + 0x133) >> 2 & 1) != 0) &&
               (*(int *)(_NGUIText_TypeInfo_12d53c0 + 0xe0) == 0)) {
              native_sub_4327ec();
            }
            uVar10 = native_NGUIText__WrapText_80dd68(uVar8,plVar14,0,0,cVar15 != '\0',0);
            iVar4 = *(int *)((long)param_3 + 0x1e4);
            if (((uVar10 & 1) != 0) || (iVar4 != 0)) break;
LAB_00ae90a4:
            if ((iVar16 + -1 < 2) || (iVar16 = iVar16 + -2, iVar16 < 1)) goto LAB_00ae9104;
          }
          if (iVar4 == 2) {
            lVar13 = *plVar14;
            if (((*(byte *)(_NGUIText_TypeInfo_12d53c0 + 0x133) >> 2 & 1) != 0) &&
               (*(int *)(_NGUIText_TypeInfo_12d53c0 + 0xe0) == 0)) {
              native_sub_4327ec();
            }
            uVar3 = native_NGUIText__CalculatePrintedSize_80cd38(lVar13,0,0);
            *(undefined4 *)((long)param_3 + 0x26c) = uVar3;
            *(float *)(param_3 + 0x4e) = param_2;
            if (((uVar10 & 1) == 0) && (0 < *(int *)((long)param_3 + 0x224))) goto LAB_00ae90a4;
            uVar3 = (**(code **)(*param_3 + 0x3b8))(param_3,*(undefined8 *)(*param_3 + 0x3c0));
            uVar5 = native_UnityEngine_Mathf__RoundToInt_8e50f0
                              (*(undefined4 *)((long)param_3 + 0x26c),0);
            uVar6 = native_UnityEngine_Mathf__Max_8e4cd0(uVar3,uVar5,0);
            if (fVar17 != 1.0) {
              uVar6 = native_UnityEngine_Mathf__RoundToInt_8e50f0((float)(int)uVar6 / fVar17,0);
            }
            uVar3 = (**(code **)(*param_3 + 0x3c8))(param_3,*(undefined8 *)(*param_3 + 0x3d0));
            uVar5 = native_UnityEngine_Mathf__RoundToInt_8e50f0((int)param_3[0x4e],0);
            uVar7 = native_UnityEngine_Mathf__Max_8e4cd0(uVar3,uVar5,0);
            if (fVar19 != 1.0) {
              uVar7 = native_UnityEngine_Mathf__RoundToInt_8e50f0((float)(int)uVar7 / fVar19,0);
            }
            iVar16 = (uVar6 & 1) + uVar6;
            iVar4 = (uVar7 & 1) + uVar7;
            if ((*(int *)((long)param_3 + 0xa4) != iVar16) || ((int)param_3[0x15] != iVar4)) {
              lVar13 = param_3[0x18];
              *(int *)((long)param_3 + 0xa4) = iVar16;
              *(int *)(param_3 + 0x15) = iVar4;
              *(int *)((long)param_3 + 0x27c) = iVar16;
              *(int *)(param_3 + 0x50) = iVar4;
joined_r0x00ae9304:
              if (lVar13 != 0) {
                native_UIWidget_OnDimensionsChanged__Invoke_55ba68(lVar13,0);
              }
            }
          }
          else {
            lVar13 = *plVar14;
            if (iVar4 == 3) {
              if (((*(ushort *)(_NGUIText_TypeInfo_12d53c0 + 0x132) >> 10 & 1) != 0) &&
                 (*(int *)(_NGUIText_TypeInfo_12d53c0 + 0xe0) == 0)) {
                native_sub_4327ec();
              }
              uVar3 = native_NGUIText__CalculatePrintedSize_80cd38(lVar13,0,0);
              *(undefined4 *)((long)param_3 + 0x26c) = uVar3;
              *(float *)(param_3 + 0x4e) = param_2;
              uVar3 = (**(code **)(*param_3 + 0x3c8))(param_3,*(undefined8 *)(*param_3 + 0x3d0));
              uVar5 = native_UnityEngine_Mathf__RoundToInt_8e50f0((int)param_3[0x4e],0);
              uVar6 = native_UnityEngine_Mathf__Max_8e4cd0(uVar3,uVar5,0);
              if (fVar19 != 1.0) {
                uVar6 = native_UnityEngine_Mathf__RoundToInt_8e50f0((float)(int)uVar6 / fVar19,0);
              }
              iVar16 = (uVar6 & 1) + uVar6;
              if ((int)param_3[0x15] != iVar16) {
                lVar13 = param_3[0x18];
                *(int *)(param_3 + 0x15) = iVar16;
                *(int *)(param_3 + 0x50) = iVar16;
                goto joined_r0x00ae9304;
              }
            }
            else {
              if (((*(ushort *)(_NGUIText_TypeInfo_12d53c0 + 0x132) >> 10 & 1) != 0) &&
                 (*(int *)(_NGUIText_TypeInfo_12d53c0 + 0xe0) == 0)) {
                native_sub_4327ec();
              }
              uVar3 = native_NGUIText__CalculatePrintedSize_80cd38(lVar13,0,0);
              *(undefined4 *)((long)param_3 + 0x26c) = uVar3;
              *(float *)(param_3 + 0x4e) = param_2;
            }
          }
        }
      }
LAB_00ae9104:
      if (((*(byte *)(_NGUIText_TypeInfo_12d53c0 + 0x133) >> 2 & 1) != 0) &&
         (*(int *)(_NGUIText_TypeInfo_12d53c0 + 0xe0) == 0)) {
        native_sub_4327ec();
      }
      puVar11 = *(undefined8 **)(_NGUIText_TypeInfo_12d53c0 + 0xb8);
      *puVar11 = 0;
      native_sub_4326e0(puVar11,0);
      plVar14 = (long *)(*(long *)(_NGUIText_TypeInfo_12d53c0 + 0xb8) + 8);
      *plVar14 = 0;
      goto native_sub_41086c;
    }
  }
  plVar14 = param_3 + 0x4c;
  param_3[0x4c] = _StringLiteral__12eaac0;
native_sub_41086c:
  if (iRam0000000001345318 != 0) {
    puVar1 = (ulong *)(((ulong)plVar14 >> 0x12 & 0x7fff) * 8 + 0x138ecd8);
    do {
      cVar15 = '\x01';
      bVar2 = (bool)ExclusiveMonitorPass(puVar1,0x10);
      if (bVar2) {
        *puVar1 = *puVar1 | 1L << ((ulong)plVar14 >> 0xc & 0x3f);
        cVar15 = ExclusiveMonitorsStatus();
      }
    } while (cVar15 != '\0');
  }
  return;
}



/* UILabel$$get_applyGradient @ 0xae847c
 * bool UILabel__get_applyGradient (UILabel_o* __this, const MethodInfo* method); */

/* UILabel$$get_applyGradient
   bool UILabel__get_applyGradient (UILabel_o* __this, const MethodInfo* method); */

undefined1 native_UILabel__get_applyGradient_ae847c(long param_1)

{
  return *(undefined1 *)(param_1 + 0x1e8);
}



/* UILabel$$set_applyGradient @ 0xae8484
 * void UILabel__set_applyGradient (UILabel_o* __this, bool value, const MethodInfo* method); */

/* UILabel$$set_applyGradient
   void UILabel__set_applyGradient (UILabel_o* __this, bool value, const MethodInfo* method); */

void native_UILabel__set_applyGradient_ae8484(long *param_1,byte param_2)

{
  if ((((char)param_1[0x3d] != '\0' ^ param_2) & 1) != 0) {
    *(byte *)(param_1 + 0x3d) = param_2 & 1;
                    /* WARNING: Could not recover jumptable at 0x00ae84ac. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (**(code **)(*param_1 + 0x378))(param_1,*(undefined8 *)(*param_1 + 0x380));
    return;
  }
  return;
}



/* UILabel$$get_gradientTop @ 0xae84b4
 * UnityEngine_Color_o UILabel__get_gradientTop (UILabel_o* __this, const MethodInfo* method); */

/* UILabel$$get_gradientTop
   UnityEngine_Color_o UILabel__get_gradientTop (UILabel_o* __this, const MethodInfo* method); */

undefined4 native_UILabel__get_gradientTop_ae84b4(long param_1)

{
  return *(undefined4 *)(param_1 + 0x1ec);
}



/* UILabel$$set_gradientTop @ 0xae84c8
 * void UILabel__set_gradientTop (UILabel_o* __this, UnityEngine_Color_o value, const MethodInfo* method); */

/* UILabel$$set_gradientTop
   void UILabel__set_gradientTop (UILabel_o* __this, UnityEngine_Color_o value, const MethodInfo*
   method); */

void native_UILabel__set_gradientTop_ae84c8
               (undefined8 param_1,undefined1 param_2 [16],undefined1 param_3 [16],
               undefined1 param_4 [16],long *param_5)

{
  ulong uVar1;
  
  uVar1 = native_UnityEngine_Color__op_Inequality_8d9d34
                    (*(undefined4 *)((long)param_5 + 0x1ec),(int)param_5[0x3e],
                     *(undefined4 *)((long)param_5 + 500),(int)param_5[0x3f],param_1,param_2._0_8_,
                     param_3._0_8_,param_4._0_8_,0);
  if ((uVar1 & 1) != 0) {
    *(int *)((long)param_5 + 0x1ec) = (int)param_1;
    *(int *)(param_5 + 0x3e) = param_2._0_4_;
    *(int *)((long)param_5 + 500) = param_3._0_4_;
    *(int *)(param_5 + 0x3f) = param_4._0_4_;
    if ((char)param_5[0x3d] != '\0') {
                    /* WARNING: Could not recover jumptable at 0x00ae8558. Too many branches */
                    /* WARNING: Treating indirect jump as call */
      (**(code **)(*param_5 + 0x378))(param_5,*(undefined8 *)(*param_5 + 0x380));
      return;
    }
  }
  return;
}



/* UILabel$$get_gradientBottom @ 0xae8570
 * UnityEngine_Color_o UILabel__get_gradientBottom (UILabel_o* __this, const MethodInfo* method); */

/* UILabel$$get_gradientBottom
   UnityEngine_Color_o UILabel__get_gradientBottom (UILabel_o* __this, const MethodInfo* method); */

undefined4 native_UILabel__get_gradientBottom_ae8570(long param_1)

{
  return *(undefined4 *)(param_1 + 0x1fc);
}



/* UILabel$$set_gradientBottom @ 0xae8584
 * void UILabel__set_gradientBottom (UILabel_o* __this, UnityEngine_Color_o value, const MethodInfo* method); */

/* UILabel$$set_gradientBottom
   void UILabel__set_gradientBottom (UILabel_o* __this, UnityEngine_Color_o value, const MethodInfo*
   method); */

void native_UILabel__set_gradientBottom_ae8584
               (undefined8 param_1,undefined1 param_2 [16],undefined1 param_3 [16],
               undefined1 param_4 [16],long *param_5)

{
  ulong uVar1;
  
  uVar1 = native_UnityEngine_Color__op_Inequality_8d9d34
                    (*(undefined4 *)((long)param_5 + 0x1fc),(int)param_5[0x40],
                     *(undefined4 *)((long)param_5 + 0x204),(int)param_5[0x41],param_1,param_2._0_8_
                     ,param_3._0_8_,param_4._0_8_,0);
  if ((uVar1 & 1) != 0) {
    *(int *)((long)param_5 + 0x1fc) = (int)param_1;
    *(int *)(param_5 + 0x40) = param_2._0_4_;
    *(int *)((long)param_5 + 0x204) = param_3._0_4_;
    *(int *)(param_5 + 0x41) = param_4._0_4_;
    if ((char)param_5[0x3d] != '\0') {
                    /* WARNING: Could not recover jumptable at 0x00ae8614. Too many branches */
                    /* WARNING: Treating indirect jump as call */
      (**(code **)(*param_5 + 0x378))(param_5,*(undefined8 *)(*param_5 + 0x380));
      return;
    }
  }
  return;
}



/* UILabel$$get_spacingX @ 0xae862c
 * int32_t UILabel__get_spacingX (UILabel_o* __this, const MethodInfo* method); */

/* UILabel$$get_spacingX
   int32_t UILabel__get_spacingX (UILabel_o* __this, const MethodInfo* method); */

undefined4 native_UILabel__get_spacingX_ae862c(long param_1)

{
  return *(undefined4 *)(param_1 + 0x20c);
}



/* UILabel$$set_spacingX @ 0xae8634
 * void UILabel__set_spacingX (UILabel_o* __this, int32_t value, const MethodInfo* method); */

/* UILabel$$set_spacingX
   void UILabel__set_spacingX (UILabel_o* __this, int32_t value, const MethodInfo* method); */

void native_UILabel__set_spacingX_ae8634(long *param_1,int param_2)

{
  if (*(int *)((long)param_1 + 0x20c) == param_2) {
    return;
  }
  *(int *)((long)param_1 + 0x20c) = param_2;
                    /* WARNING: Could not recover jumptable at 0x00ae8654. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(*param_1 + 0x378))(param_1,*(undefined8 *)(*param_1 + 0x380));
  return;
}



/* UILabel$$get_spacingY @ 0xae8658
 * int32_t UILabel__get_spacingY (UILabel_o* __this, const MethodInfo* method); */

/* UILabel$$get_spacingY
   int32_t UILabel__get_spacingY (UILabel_o* __this, const MethodInfo* method); */

undefined4 native_UILabel__get_spacingY_ae8658(long param_1)

{
  return *(undefined4 *)(param_1 + 0x210);
}



/* UILabel$$set_spacingY @ 0xae8660
 * void UILabel__set_spacingY (UILabel_o* __this, int32_t value, const MethodInfo* method); */

/* UILabel$$set_spacingY
   void UILabel__set_spacingY (UILabel_o* __this, int32_t value, const MethodInfo* method); */

void native_UILabel__set_spacingY_ae8660(long *param_1,int param_2)

{
  if ((int)param_1[0x42] == param_2) {
    return;
  }
  *(int *)(param_1 + 0x42) = param_2;
                    /* WARNING: Could not recover jumptable at 0x00ae8680. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(*param_1 + 0x378))(param_1,*(undefined8 *)(*param_1 + 0x380));
  return;
}



/* UILabel$$get_useFloatSpacing @ 0xae8684
 * bool UILabel__get_useFloatSpacing (UILabel_o* __this, const MethodInfo* method); */

/* UILabel$$get_useFloatSpacing
   bool UILabel__get_useFloatSpacing (UILabel_o* __this, const MethodInfo* method); */

undefined1 native_UILabel__get_useFloatSpacing_ae8684(long param_1)

{
  return *(undefined1 *)(param_1 + 0x214);
}



/* UILabel$$set_useFloatSpacing @ 0xae868c
 * void UILabel__set_useFloatSpacing (UILabel_o* __this, bool value, const MethodInfo* method); */

/* UILabel$$set_useFloatSpacing
   void UILabel__set_useFloatSpacing (UILabel_o* __this, bool value, const MethodInfo* method); */

void native_UILabel__set_useFloatSpacing_ae868c(long param_1,byte param_2)

{
  if (((*(char *)(param_1 + 0x214) != '\0' ^ param_2) & 1) != 0) {
    *(byte *)(param_1 + 0x214) = param_2 & 1;
    *(undefined1 *)(param_1 + 0x58) = 1;
    *(undefined1 *)(param_1 + 0x25c) = 1;
  }
  return;
}



/* UILabel$$get_floatSpacingX @ 0xae86b8
 * float UILabel__get_floatSpacingX (UILabel_o* __this, const MethodInfo* method); */

/* UILabel$$get_floatSpacingX
   float UILabel__get_floatSpacingX (UILabel_o* __this, const MethodInfo* method); */

undefined4 native_UILabel__get_floatSpacingX_ae86b8(long param_1)

{
  return *(undefined4 *)(param_1 + 0x218);
}



/* UILabel$$set_floatSpacingX @ 0xae86c0
 * void UILabel__set_floatSpacingX (UILabel_o* __this, float value, const MethodInfo* method); */

/* UILabel$$set_floatSpacingX
   void UILabel__set_floatSpacingX (UILabel_o* __this, float value, const MethodInfo* method); */

void native_UILabel__set_floatSpacingX_ae86c0(undefined8 param_1,long *param_2)

{
  ulong uVar1;
  
  uVar1 = native_UnityEngine_Mathf__Approximately_8e52a0((int)param_2[0x43],param_1,0);
  if ((uVar1 & 1) != 0) {
    return;
  }
  *(int *)(param_2 + 0x43) = (int)param_1;
                    /* WARNING: Could not recover jumptable at 0x00ae8720. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(*param_2 + 0x378))(param_2,*(undefined8 *)(*param_2 + 0x380));
  return;
}



/* UILabel$$get_floatSpacingY @ 0xae8724
 * float UILabel__get_floatSpacingY (UILabel_o* __this, const MethodInfo* method); */

/* UILabel$$get_floatSpacingY
   float UILabel__get_floatSpacingY (UILabel_o* __this, const MethodInfo* method); */

undefined4 native_UILabel__get_floatSpacingY_ae8724(long param_1)

{
  return *(undefined4 *)(param_1 + 0x21c);
}



/* UILabel$$set_floatSpacingY @ 0xae872c
 * void UILabel__set_floatSpacingY (UILabel_o* __this, float value, const MethodInfo* method); */

/* UILabel$$set_floatSpacingY
   void UILabel__set_floatSpacingY (UILabel_o* __this, float value, const MethodInfo* method); */

void native_UILabel__set_floatSpacingY_ae872c(undefined8 param_1,long *param_2)

{
  ulong uVar1;
  
  uVar1 = native_UnityEngine_Mathf__Approximately_8e52a0
                    (*(undefined4 *)((long)param_2 + 0x21c),param_1,0);
  if ((uVar1 & 1) != 0) {
    return;
  }
  *(int *)((long)param_2 + 0x21c) = (int)param_1;
                    /* WARNING: Could not recover jumptable at 0x00ae878c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(*param_2 + 0x378))(param_2,*(undefined8 *)(*param_2 + 0x380));
  return;
}



/* UILabel$$get_effectiveSpacingY @ 0xae8790
 * float UILabel__get_effectiveSpacingY (UILabel_o* __this, const MethodInfo* method); */

/* UILabel$$get_effectiveSpacingY
   float UILabel__get_effectiveSpacingY (UILabel_o* __this, const MethodInfo* method); */

float native_UILabel__get_effectiveSpacingY_ae8790(long param_1)

{
  if (*(char *)(param_1 + 0x214) != '\0') {
    return *(float *)(param_1 + 0x21c);
  }
  return (float)*(int *)(param_1 + 0x210);
}



/* UILabel$$get_effectiveSpacingX @ 0xae87ac
 * float UILabel__get_effectiveSpacingX (UILabel_o* __this, const MethodInfo* method); */

/* UILabel$$get_effectiveSpacingX
   float UILabel__get_effectiveSpacingX (UILabel_o* __this, const MethodInfo* method); */

float native_UILabel__get_effectiveSpacingX_ae87ac(long param_1)

{
  if (*(char *)(param_1 + 0x214) != '\0') {
    return *(float *)(param_1 + 0x218);
  }
  return (float)*(int *)(param_1 + 0x20c);
}



/* UILabel$$get_overflowEllipsis @ 0xae87c8
 * bool UILabel__get_overflowEllipsis (UILabel_o* __this, const MethodInfo* method); */

/* UILabel$$get_overflowEllipsis
   bool UILabel__get_overflowEllipsis (UILabel_o* __this, const MethodInfo* method); */

undefined1 native_UILabel__get_overflowEllipsis_ae87c8(long param_1)

{
  return *(undefined1 *)(param_1 + 0x220);
}



/* UILabel$$set_overflowEllipsis @ 0xae87d0
 * void UILabel__set_overflowEllipsis (UILabel_o* __this, bool value, const MethodInfo* method); */

/* UILabel$$set_overflowEllipsis
   void UILabel__set_overflowEllipsis (UILabel_o* __this, bool value, const MethodInfo* method); */

void native_UILabel__set_overflowEllipsis_ae87d0(long *param_1,byte param_2)

{
  if ((((char)param_1[0x44] != '\0' ^ param_2) & 1) != 0) {
    *(byte *)(param_1 + 0x44) = param_2 & 1;
                    /* WARNING: Could not recover jumptable at 0x00ae87f8. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (**(code **)(*param_1 + 0x378))(param_1,*(undefined8 *)(*param_1 + 0x380));
    return;
  }
  return;
}



/* UILabel$$get_overflowWidth @ 0xae8800
 * int32_t UILabel__get_overflowWidth (UILabel_o* __this, const MethodInfo* method); */

/* UILabel$$get_overflowWidth
   int32_t UILabel__get_overflowWidth (UILabel_o* __this, const MethodInfo* method); */

undefined4 native_UILabel__get_overflowWidth_ae8800(long param_1)

{
  return *(undefined4 *)(param_1 + 0x224);
}



/* UILabel$$set_overflowWidth @ 0xae8808
 * void UILabel__set_overflowWidth (UILabel_o* __this, int32_t value, const MethodInfo* method); */

/* UILabel$$set_overflowWidth
   void UILabel__set_overflowWidth (UILabel_o* __this, int32_t value, const MethodInfo* method); */

void native_UILabel__set_overflowWidth_ae8808(long *param_1,uint param_2)

{
  param_2 = param_2 & ((int)param_2 >> 0x1f ^ 0xffffffffU);
  if (*(uint *)((long)param_1 + 0x224) == param_2) {
    return;
  }
  *(uint *)((long)param_1 + 0x224) = param_2;
                    /* WARNING: Could not recover jumptable at 0x00ae882c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(*param_1 + 0x378))(param_1,*(undefined8 *)(*param_1 + 0x380));
  return;
}



/* UILabel$$get_overflowHeight @ 0xae8830
 * int32_t UILabel__get_overflowHeight (UILabel_o* __this, const MethodInfo* method); */

/* UILabel$$get_overflowHeight
   int32_t UILabel__get_overflowHeight (UILabel_o* __this, const MethodInfo* method); */

undefined4 native_UILabel__get_overflowHeight_ae8830(long param_1)

{
  return *(undefined4 *)(param_1 + 0x228);
}



/* UILabel$$set_overflowHeight @ 0xae8838
 * void UILabel__set_overflowHeight (UILabel_o* __this, int32_t value, const MethodInfo* method); */

/* UILabel$$set_overflowHeight
   void UILabel__set_overflowHeight (UILabel_o* __this, int32_t value, const MethodInfo* method); */

void native_UILabel__set_overflowHeight_ae8838(long *param_1,uint param_2)

{
  param_2 = param_2 & ((int)param_2 >> 0x1f ^ 0xffffffffU);
  if (*(uint *)(param_1 + 0x45) == param_2) {
    return;
  }
  *(uint *)(param_1 + 0x45) = param_2;
                    /* WARNING: Could not recover jumptable at 0x00ae885c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(*param_1 + 0x378))(param_1,*(undefined8 *)(*param_1 + 0x380));
  return;
}



/* UILabel$$get_keepCrisp @ 0xae8860
 * bool UILabel__get_keepCrisp (UILabel_o* __this, const MethodInfo* method); */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* UILabel$$get_keepCrisp
   bool UILabel__get_keepCrisp (UILabel_o* __this, const MethodInfo* method); */

bool native_UILabel__get_keepCrisp_ae8860(long param_1)

{
  bool bVar1;
  undefined8 uVar2;
  ulong uVar3;
  
  if ((bRam0000000001342007 & 1) == 0) {
    native_sub_43273c(&UnityEngine_Object_TypeInfo_12d54e0);
    bRam0000000001342007 = 1;
  }
  uVar2 = native_UILabel__get_trueTypeFont_ae74d0(param_1);
  if (((*(byte *)(_UnityEngine_Object_TypeInfo_12d54e0 + 0x133) >> 2 & 1) != 0) &&
     (*(int *)(_UnityEngine_Object_TypeInfo_12d54e0 + 0xe0) == 0)) {
    native_sub_4327ec(_UnityEngine_Object_TypeInfo_12d54e0);
  }
  uVar3 = native_UnityEngine_Object__op_Inequality_8d76fc(uVar2,0,0);
  if ((uVar3 & 1) == 0) {
    bVar1 = false;
  }
  else {
    bVar1 = *(int *)(param_1 + 400) == 2;
  }
  return bVar1;
}



/* UILabel$$get_supportEncoding @ 0xae88f4
 * bool UILabel__get_supportEncoding (UILabel_o* __this, const MethodInfo* method); */

/* UILabel$$get_supportEncoding
   bool UILabel__get_supportEncoding (UILabel_o* __this, const MethodInfo* method); */

undefined1 native_UILabel__get_supportEncoding_ae88f4(long param_1)

{
  return *(undefined1 *)(param_1 + 0x1bc);
}



/* UILabel$$set_supportEncoding @ 0xae88fc
 * void UILabel__set_supportEncoding (UILabel_o* __this, bool value, const MethodInfo* method); */

/* UILabel$$set_supportEncoding
   void UILabel__set_supportEncoding (UILabel_o* __this, bool value, const MethodInfo* method); */

void native_UILabel__set_supportEncoding_ae88fc(long param_1,byte param_2)

{
  if (((*(char *)(param_1 + 0x1bc) != '\0' ^ param_2) & 1) != 0) {
    *(byte *)(param_1 + 0x1bc) = param_2 & 1;
    *(undefined1 *)(param_1 + 0x58) = 1;
    *(undefined1 *)(param_1 + 0x25c) = 1;
  }
  return;
}



/* UILabel$$get_symbolStyle @ 0xae8928
 * int32_t UILabel__get_symbolStyle (UILabel_o* __this, const MethodInfo* method); */

/* UILabel$$get_symbolStyle
   int32_t UILabel__get_symbolStyle (UILabel_o* __this, const MethodInfo* method); */

undefined4 native_UILabel__get_symbolStyle_ae8928(long param_1)

{
  return *(undefined4 *)(param_1 + 0x1d8);
}



/* UILabel$$set_symbolStyle @ 0xae8930
 * void UILabel__set_symbolStyle (UILabel_o* __this, int32_t value, const MethodInfo* method); */

/* UILabel$$set_symbolStyle
   void UILabel__set_symbolStyle (UILabel_o* __this, int32_t value, const MethodInfo* method); */

void native_UILabel__set_symbolStyle_ae8930(long param_1,int param_2)

{
  if (*(int *)(param_1 + 0x1d8) != param_2) {
    *(int *)(param_1 + 0x1d8) = param_2;
    *(undefined1 *)(param_1 + 0x58) = 1;
    *(undefined1 *)(param_1 + 0x25c) = 1;
  }
  return;
}



/* UILabel$$get_overflowMethod @ 0xae8950
 * int32_t UILabel__get_overflowMethod (UILabel_o* __this, const MethodInfo* method); */

/* UILabel$$get_overflowMethod
   int32_t UILabel__get_overflowMethod (UILabel_o* __this, const MethodInfo* method); */

undefined4 native_UILabel__get_overflowMethod_ae8950(long param_1)

{
  return *(undefined4 *)(param_1 + 0x1e4);
}



/* UILabel$$set_overflowMethod @ 0xae8958
 * void UILabel__set_overflowMethod (UILabel_o* __this, int32_t value, const MethodInfo* method); */

/* UILabel$$set_overflowMethod
   void UILabel__set_overflowMethod (UILabel_o* __this, int32_t value, const MethodInfo* method); */

void native_UILabel__set_overflowMethod_ae8958(long param_1,int param_2)

{
  if (*(int *)(param_1 + 0x1e4) != param_2) {
    *(int *)(param_1 + 0x1e4) = param_2;
    *(undefined1 *)(param_1 + 0x58) = 1;
    *(undefined1 *)(param_1 + 0x25c) = 1;
  }
  return;
}



/* UILabel$$get_lineWidth @ 0xae8978
 * int32_t UILabel__get_lineWidth (UILabel_o* __this, const MethodInfo* method); */

/* UILabel$$get_lineWidth
   int32_t UILabel__get_lineWidth (UILabel_o* __this, const MethodInfo* method); */

undefined4 native_UILabel__get_lineWidth_ae8978(long param_1)

{
  return *(undefined4 *)(param_1 + 0xa4);
}



/* UILabel$$set_lineWidth @ 0xae8980
 * void UILabel__set_lineWidth (UILabel_o* __this, int32_t value, const MethodInfo* method); */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* UILabel$$set_lineWidth
   void UILabel__set_lineWidth (UILabel_o* __this, int32_t value, const MethodInfo* method); */

void native_UILabel__set_lineWidth_ae8980(long *param_1,undefined8 param_2)

{
  uint uVar1;
  int iVar2;
  uint uVar3;
  uint uVar4;
  uint uVar5;
  uint uVar6;
  undefined4 uVar7;
  uint uVar8;
  uint uVar9;
  int iVar10;
  long *plVar11;
  long lVar12;
  long lVar13;
  ulong uVar14;
  int iVar15;
  undefined8 uVar16;
  float fVar17;
  undefined4 uVar18;
  float fVar19;
  float fVar20;
  float fVar21;
  float fVar22;
  float fVar23;
  float fVar24;
  float fVar25;
  float fVar26;
  ulong uVar27;
  float fVar28;
  float fVar29;
  ulong uVar30;
  ulong uVar31;
  ulong uVar32;
  ulong uVar33;
  ulong uVar34;
  ulong uVar35;
  ulong uVar36;
  float fVar37;
  ulong uVar38;
  float fVar39;
  float fVar40;
  float fVar41;
  
  if ((bRam000000000134144f & 1) == 0) {
    native_sub_43273c(&NGUIMath_TypeInfo_12d53b8,param_2,0);
    native_sub_43273c(&UnityEngine_Object_TypeInfo_12d54e0);
    bRam000000000134144f = 1;
  }
  iVar10 = (**(code **)(*param_1 + 0x3b8))(param_1,*(undefined8 *)(*param_1 + 0x3c0));
  if (iVar10 <= (int)param_2) {
    iVar10 = (int)param_2;
  }
  if (*(int *)((long)param_1 + 0xa4) == iVar10) {
    return;
  }
  if (*(int *)((long)param_1 + 0xdc) == 2) {
    return;
  }
  uVar14 = (**(code **)(*param_1 + 0x178))(param_1,*(undefined8 *)(*param_1 + 0x180));
  if ((uVar14 & 1) == 0) {
    iVar15 = (int)param_1[0x15];
    if ((*(int *)((long)param_1 + 0xa4) == iVar10) && ((int)param_1[0x15] == iVar15)) {
      return;
    }
    iVar2 = *(int *)((long)param_1 + 0xdc);
    *(int *)((long)param_1 + 0xa4) = iVar10;
    *(int *)(param_1 + 0x15) = iVar15;
    if (iVar2 == 0) {
      *(float *)(param_1 + 0x1c) = (float)iVar10 / (float)iVar15;
    }
    else if (iVar2 == 2) {
      uVar18 = native_UnityEngine_Mathf__RoundToInt_8e50f0
                         (*(float *)(param_1 + 0x1c) * (float)iVar15,0);
      *(undefined4 *)((long)param_1 + 0xa4) = uVar18;
    }
    else if (iVar2 == 1) {
      uVar18 = native_UnityEngine_Mathf__RoundToInt_8e50f0
                         ((float)iVar10 / *(float *)(param_1 + 0x1c),0);
      *(undefined4 *)(param_1 + 0x15) = uVar18;
    }
    *(undefined1 *)((long)param_1 + 0x15c) = 1;
    if ((char)param_1[0x1b] != '\0') {
      native_UIWidget__ResizeCollider_949744(param_1);
    }
                    /* WARNING: Could not recover jumptable at 0x00949944. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (**(code **)(*param_1 + 0x378))(param_1,*(undefined8 *)(*param_1 + 0x380));
    return;
  }
  if (param_1[3] == 0) goto LAB_00942094;
  uVar16 = *(undefined8 *)(param_1[3] + 0x10);
  if (((*(byte *)(_UnityEngine_Object_TypeInfo_12d54e0 + 0x133) >> 2 & 1) != 0) &&
     (*(int *)(_UnityEngine_Object_TypeInfo_12d54e0 + 0xe0) == 0)) {
    native_sub_4327ec();
  }
  uVar14 = native_UnityEngine_Object__op_Inequality_8d76fc(uVar16,0,0);
  if ((uVar14 & 1) == 0) {
LAB_00941f6c:
    if (param_1[3] == 0) {
LAB_00942094:
                    /* WARNING: Subroutine does not return */
      native_sub_432810();
    }
    uVar16 = *(undefined8 *)(param_1[3] + 0x10);
    if (((*(byte *)(_UnityEngine_Object_TypeInfo_12d54e0 + 0x133) >> 2 & 1) != 0) &&
       (*(int *)(_UnityEngine_Object_TypeInfo_12d54e0 + 0xe0) == 0)) {
      native_sub_4327ec();
    }
    uVar14 = native_UnityEngine_Object__op_Inequality_8d76fc(uVar16,0,0);
    iVar15 = *(int *)((long)param_1 + 0xa4);
    if ((uVar14 & 1) == 0) {
      if ((*(ushort *)(_NGUIMath_TypeInfo_12d53b8 + 0x132) >> 10 & 1) != 0) {
        iVar2 = *(int *)(_NGUIMath_TypeInfo_12d53b8 + 0xe0);
joined_r0x00941fd4:
        if (iVar2 == 0) {
          native_sub_4327ec(_NGUIMath_TypeInfo_12d53b8);
        }
      }
LAB_00941fe0:
      uVar14 = 0;
      fVar26 = (float)(iVar15 - iVar10);
    }
    else {
      if ((*(ushort *)(_NGUIMath_TypeInfo_12d53b8 + 0x132) >> 10 & 1) != 0) {
        iVar2 = *(int *)(_NGUIMath_TypeInfo_12d53b8 + 0xe0);
joined_r0x00941fc0:
        if (iVar2 == 0) {
          native_sub_4327ec(_NGUIMath_TypeInfo_12d53b8);
        }
      }
LAB_00942018:
      fVar26 = 0.0;
      uVar14 = (ulong)(uint)(float)(iVar10 - iVar15);
    }
  }
  else {
    if (param_1[4] == 0) goto LAB_00942094;
    uVar16 = *(undefined8 *)(param_1[4] + 0x10);
    if (((*(byte *)(_UnityEngine_Object_TypeInfo_12d54e0 + 0x133) >> 2 & 1) != 0) &&
       (*(int *)(_UnityEngine_Object_TypeInfo_12d54e0 + 0xe0) == 0)) {
      native_sub_4327ec();
    }
    uVar14 = native_UnityEngine_Object__op_Inequality_8d76fc(uVar16,0,0);
    if ((uVar14 & 1) == 0) goto LAB_00941f6c;
    if (*(uint *)(param_1 + 0x14) < 9) {
      uVar3 = 1 << (ulong)(*(uint *)(param_1 + 0x14) & 0x1f);
      if ((uVar3 & 0x49) != 0) {
        iVar15 = *(int *)((long)param_1 + 0xa4);
        if ((*(byte *)(_NGUIMath_TypeInfo_12d53b8 + 0x133) >> 2 & 1) != 0) {
          iVar2 = *(int *)(_NGUIMath_TypeInfo_12d53b8 + 0xe0);
          goto joined_r0x00941fc0;
        }
        goto LAB_00942018;
      }
      if ((uVar3 & 0x124) == 0) goto LAB_00942044;
      iVar15 = *(int *)((long)param_1 + 0xa4);
      if ((*(byte *)(_NGUIMath_TypeInfo_12d53b8 + 0x133) >> 2 & 1) != 0) {
        iVar2 = *(int *)(_NGUIMath_TypeInfo_12d53b8 + 0xe0);
        goto joined_r0x00941fd4;
      }
      goto LAB_00941fe0;
    }
LAB_00942044:
    uVar3 = iVar10 - *(int *)((long)param_1 + 0xa4) & 0xfffffffe;
    if (uVar3 == 0) {
      return;
    }
    if (((*(byte *)(_NGUIMath_TypeInfo_12d53b8 + 0x133) >> 2 & 1) != 0) &&
       (*(int *)(_NGUIMath_TypeInfo_12d53b8 + 0xe0) == 0)) {
      native_sub_4327ec();
    }
    uVar14 = (ulong)(uint)((float)(int)uVar3 * 0.5);
    fVar26 = (float)(int)-uVar3 * 0.5;
  }
  uVar27 = 0;
  uVar16 = 0;
  if ((bRam0000000001340478 & 1) == 0) {
    native_sub_43273c(&NGUIMath_TypeInfo_12d53b8,0);
    bRam0000000001340478 = 1;
  }
  if (((*(byte *)(_NGUIMath_TypeInfo_12d53b8 + 0x133) >> 2 & 1) != 0) &&
     (*(int *)(_NGUIMath_TypeInfo_12d53b8 + 0xe0) == 0)) {
    native_sub_4327ec();
  }
  uVar38 = uVar14;
  if ((bRam000000000134047a & 1) == 0) {
    native_sub_43273c(&UnityEngine_Object_TypeInfo_12d54e0);
    bRam000000000134047a = 1;
  }
  if (param_1 == (long *)0x0) goto LAB_00807ccc;
  fVar17 = (float)native_UIWidget__get_pivotOffset_944f8c(param_1,0);
  fVar28 = (float)uVar27;
  uVar30 = uVar27;
  lVar12 = native_UIRect__get_cachedTransform_c27c58(param_1,0);
  if (lVar12 == 0) goto LAB_00807ccc;
  uVar18 = native_UnityEngine_Transform__get_localRotation_771c84(lVar12,0);
  uVar3 = native_UnityEngine_Mathf__FloorToInt_8e506c(fVar26 + 0.5,0);
  uVar4 = native_UnityEngine_Mathf__FloorToInt_8e506c(0x3f000000,0);
  uVar5 = native_UnityEngine_Mathf__FloorToInt_8e506c((float)uVar14 + 0.5,0);
  uVar6 = native_UnityEngine_Mathf__FloorToInt_8e506c(0x3f000000,0);
  if ((fVar17 == 0.5) && ((uVar3 == 0 || (uVar5 == 0)))) {
    uVar3 = uVar3 & 0xfffffffe;
    uVar5 = uVar5 & 0xfffffffe;
  }
  if ((fVar28 == 0.5) && ((uVar4 == 0 || (uVar6 == 0)))) {
    uVar4 = uVar4 & 0xfffffffe;
    uVar6 = uVar6 & 0xfffffffe;
  }
  fVar41 = (float)(int)uVar3;
  fVar26 = (float)(int)uVar6;
  uVar14 = uVar30;
  fVar19 = (float)native_UnityEngine_Quaternion__op_Multiply_7629c0
                            (uVar18,uVar30,uVar38,uVar16,fVar41,fVar26,0,0);
  fVar40 = (float)(int)uVar5;
  uVar31 = uVar30;
  fVar20 = (float)native_UnityEngine_Quaternion__op_Multiply_7629c0
                            (uVar18,uVar30,uVar38,uVar16,fVar40,fVar26,0,0);
  fVar39 = (float)(int)uVar4;
  uVar36 = uVar30;
  fVar21 = (float)native_UnityEngine_Quaternion__op_Multiply_7629c0
                            (uVar18,uVar30,uVar38,uVar16,fVar41,fVar39,0,0);
  uVar32 = uVar30;
  fVar22 = (float)native_UnityEngine_Quaternion__op_Multiply_7629c0
                            (uVar18,uVar30,uVar38,uVar16,fVar40,fVar39,0,0);
  uVar33 = uVar30;
  fVar41 = (float)native_UnityEngine_Quaternion__op_Multiply_7629c0
                            (uVar18,uVar30,uVar38,uVar16,fVar41,0,0,0);
  uVar34 = uVar30;
  fVar23 = (float)native_UnityEngine_Quaternion__op_Multiply_7629c0
                            (uVar18,uVar30,uVar38,uVar16,fVar40,0,0,0);
  fVar29 = (float)uVar34;
  uVar34 = uVar30;
  fVar24 = (float)native_UnityEngine_Quaternion__op_Multiply_7629c0
                            (uVar18,uVar30,uVar38,uVar16,0,fVar26,0,0);
  fVar26 = (float)uVar34;
  uVar34 = uVar30;
  uVar35 = uVar38;
  fVar25 = (float)native_UnityEngine_Quaternion__op_Multiply_7629c0
                            (uVar18,uVar30,uVar38,uVar16,0,fVar39,0,0);
  fVar37 = (float)uVar35;
  uVar35 = uVar34;
  fVar40 = (float)native_UnityEngine_Vector3__get_zero_776668(0);
  fVar39 = fVar37;
  if ((fVar17 == 0.0) && (fVar28 == 1.0)) {
    uVar35 = uVar14 & 0xffffffff;
    fVar40 = fVar19;
  }
  else if ((fVar17 == 1.0) && (fVar28 == 0.0)) {
    uVar35 = uVar32 & 0xffffffff;
    fVar40 = fVar22;
  }
  else if ((fVar17 == 0.0) && (fVar28 == 0.0)) {
    uVar35 = uVar36 & 0xffffffff;
    fVar40 = fVar21;
  }
  else if ((fVar17 == 1.0) && (fVar28 == 1.0)) {
    uVar35 = uVar31 & 0xffffffff;
    fVar40 = fVar20;
  }
  else {
    fVar19 = (float)uVar34;
    fVar20 = (float)uVar33;
    if ((fVar17 == 0.0) && (fVar28 == 0.5)) {
      fVar40 = fVar41 + (fVar24 + fVar25) * 0.5;
      uVar35 = (ulong)(uint)(fVar20 + (fVar26 + fVar19) * 0.5);
      fVar39 = fVar41;
    }
    else if ((fVar17 == 1.0) && (fVar28 == 0.5)) {
      fVar40 = fVar23 + (fVar24 + fVar25) * 0.5;
      fVar19 = fVar26 + fVar19;
      fVar26 = fVar29;
LAB_008078c0:
      uVar35 = (ulong)(uint)(fVar26 + fVar19 * 0.5);
      fVar39 = fVar26;
    }
    else if (fVar17 == 0.5) {
      if (fVar28 == 1.0) {
        fVar40 = fVar24 + (fVar41 + fVar23) * 0.5;
        fVar19 = fVar20 + fVar29;
        goto LAB_008078c0;
      }
      if (fVar28 == 0.0) {
        fVar40 = fVar25 + (fVar41 + fVar23) * 0.5;
        uVar35 = (ulong)(uint)(fVar19 + (fVar20 + fVar29) * 0.5);
      }
      else if (fVar28 == 0.5) {
        fVar40 = (fVar41 + fVar23 + fVar24 + fVar25) * 0.5;
        uVar35 = (ulong)(uint)((fVar29 + fVar20 + fVar26 + fVar19) * 0.5);
        fVar39 = fVar29;
      }
    }
  }
  fVar26 = (float)uVar35;
  uVar7 = (**(code **)(*param_1 + 0x3b8))(param_1,*(undefined8 *)(*param_1 + 0x3c0));
  uVar8 = native_UnityEngine_Mathf__Max_8e4cd0(2,uVar7,0);
  uVar7 = (**(code **)(*param_1 + 0x3c8))(param_1,*(undefined8 *)(*param_1 + 0x3d0));
  uVar9 = native_UnityEngine_Mathf__Max_8e4cd0(2,uVar7,0);
  uVar5 = (uVar5 - uVar3) + *(int *)((long)param_1 + 0xa4);
  uVar6 = (uVar6 - uVar4) + (int)param_1[0x15];
  uVar14 = native_UnityEngine_Vector3__get_zero_776668(0);
  uVar1 = 100000;
  if ((int)uVar5 < 0x186a1) {
    uVar1 = uVar5;
  }
  if ((int)uVar8 <= (int)uVar5) {
    uVar8 = uVar1;
  }
  uVar31 = uVar35;
  fVar19 = fVar39;
  if (uVar8 - uVar5 != 0) {
    uVar31 = (ulong)(uint)(float)(int)(uVar8 - uVar5);
    uVar5 = uVar8;
    fVar19 = fVar17;
    if (uVar3 == 0) {
      fVar20 = (float)native_UnityEngine_Mathf__Lerp_8e5224(0,uVar31,fVar17,0);
      uVar14 = (ulong)(uint)((float)uVar14 + fVar20);
    }
    else {
      uVar36 = 0;
      fVar20 = (float)native_UnityEngine_Mathf__Lerp_8e5224(uVar31,0,fVar17,0);
      uVar14 = (ulong)(uint)((float)uVar14 - fVar20);
      uVar31 = uVar36;
    }
  }
  fVar20 = (float)uVar31;
  uVar3 = 100000;
  if ((int)uVar6 < 0x186a1) {
    uVar3 = uVar6;
  }
  if ((int)uVar9 <= (int)uVar6) {
    uVar9 = uVar3;
  }
  if (uVar9 - uVar6 != 0) {
    fVar21 = (float)(int)(uVar9 - uVar6);
    uVar6 = uVar9;
    fVar19 = fVar28;
    if (uVar4 == 0) {
      fVar20 = fVar21;
      fVar21 = (float)native_UnityEngine_Mathf__Lerp_8e5224(0,fVar21,uVar27 & 0xffffffff,0);
      uVar35 = (ulong)(uint)((float)uVar35 + fVar21);
    }
    else {
      fVar20 = 0.0;
      fVar21 = (float)native_UnityEngine_Mathf__Lerp_8e5224(fVar21,0,uVar27 & 0xffffffff,0);
      uVar35 = (ulong)(uint)((float)uVar35 - fVar21);
    }
  }
  uVar3 = uVar5 & 0xfffffffe;
  if (fVar17 != 0.5) {
    uVar3 = uVar5;
  }
  uVar5 = uVar6 & 0xfffffffe;
  if (fVar28 != 0.5) {
    uVar5 = uVar6;
  }
  fVar21 = (float)native_UnityEngine_Transform__get_localPosition_7717f4(lVar12,0);
  fVar39 = (float)native_UnityEngine_Quaternion__op_Multiply_7629c0
                            (uVar18,uVar30,uVar38,uVar16,uVar14,uVar35,fVar39,0);
  fVar39 = fVar40 + fVar21 + fVar39;
  fVar26 = fVar26 + fVar20 + (float)uVar30;
  uVar27 = (ulong)(uint)fVar26;
  uVar38 = (ulong)(uint)(fVar37 + fVar19 + (float)uVar38);
  native_UnityEngine_Transform__set_localPosition_7718a4(fVar39,uVar27,uVar38,lVar12,0);
  native_UIWidget__SetDimensions_94987c(param_1,uVar3,uVar5,0);
  uVar14 = native_UIRect__get_isAnchored_c2d8cc(param_1,0);
  if ((uVar14 & 1) == 0) {
    return;
  }
  lVar12 = native_UnityEngine_Transform__get_parent_765eb0(lVar12,0);
  if (param_1[3] != 0) {
    uVar16 = *(undefined8 *)(param_1[3] + 0x10);
    if (((*(byte *)(_UnityEngine_Object_TypeInfo_12d54e0 + 0x133) >> 2 & 1) != 0) &&
       (*(int *)(_UnityEngine_Object_TypeInfo_12d54e0 + 0xe0) == 0)) {
      native_sub_4327ec();
    }
    fVar39 = fVar39 - fVar17 * (float)(int)uVar3;
    uVar14 = native_UnityEngine_Object__op_Implicit_8e1b98(uVar16,0);
    if ((uVar14 & 1) != 0) {
      if (param_1[3] == 0) goto LAB_00807ccc;
      native_UIRect_AnchorPoint__SetHorizontal_559078(fVar39,param_1[3],lVar12,0);
    }
    if (param_1[4] != 0) {
      uVar16 = *(undefined8 *)(param_1[4] + 0x10);
      if (((*(byte *)(_UnityEngine_Object_TypeInfo_12d54e0 + 0x133) >> 2 & 1) != 0) &&
         (*(int *)(_UnityEngine_Object_TypeInfo_12d54e0 + 0xe0) == 0)) {
        native_sub_4327ec();
      }
      uVar14 = native_UnityEngine_Object__op_Implicit_8e1b98(uVar16,0);
      if ((uVar14 & 1) != 0) {
        if (param_1[4] == 0) goto LAB_00807ccc;
        native_UIRect_AnchorPoint__SetHorizontal_559078
                  (fVar39 + (float)(int)uVar3,param_1[4],lVar12,0);
      }
      if (param_1[5] != 0) {
        uVar16 = *(undefined8 *)(param_1[5] + 0x10);
        if (((*(byte *)(_UnityEngine_Object_TypeInfo_12d54e0 + 0x133) >> 2 & 1) != 0) &&
           (*(int *)(_UnityEngine_Object_TypeInfo_12d54e0 + 0xe0) == 0)) {
          native_sub_4327ec();
        }
        fVar26 = fVar26 - fVar28 * (float)(int)uVar5;
        uVar14 = native_UnityEngine_Object__op_Implicit_8e1b98(uVar16,0);
        if ((uVar14 & 1) != 0) {
          if (param_1[5] == 0) goto LAB_00807ccc;
          native_UIRect_AnchorPoint__SetVertical_5591e0(fVar26,param_1[5],lVar12,0);
        }
        if (param_1[6] != 0) {
          uVar16 = *(undefined8 *)(param_1[6] + 0x10);
          if (((*(byte *)(_UnityEngine_Object_TypeInfo_12d54e0 + 0x133) >> 2 & 1) != 0) &&
             (*(int *)(_UnityEngine_Object_TypeInfo_12d54e0 + 0xe0) == 0)) {
            native_sub_4327ec();
          }
          uVar14 = native_UnityEngine_Object__op_Implicit_8e1b98(uVar16,0);
          if ((uVar14 & 1) == 0) {
            return;
          }
          lVar13 = param_1[6];
          if (lVar13 != 0) {
            if ((bRam000000000133ea04 & 1) == 0) {
              native_sub_43273c(&UnityEngine_Object_TypeInfo_12d54e0,lVar12,0);
              bRam000000000133ea04 = 1;
            }
            uVar16 = *(undefined8 *)(lVar13 + 0x20);
            if (((*(byte *)(_UnityEngine_Object_TypeInfo_12d54e0 + 0x133) >> 2 & 1) != 0) &&
               (*(int *)(_UnityEngine_Object_TypeInfo_12d54e0 + 0xe0) == 0)) {
              native_sub_4327ec();
            }
            uVar14 = native_UnityEngine_Object__op_Implicit_8e1b98(uVar16,0);
            if ((uVar14 & 1) == 0) {
              if (*(long *)(lVar13 + 0x10) != 0) {
                uVar16 = native_UnityEngine_Transform__get_position_77169c
                                   (*(long *)(lVar13 + 0x10),0);
                if (((*(byte *)(_UnityEngine_Object_TypeInfo_12d54e0 + 0x133) >> 2 & 1) != 0) &&
                   (*(int *)(_UnityEngine_Object_TypeInfo_12d54e0 + 0xe0) == 0)) {
                  native_sub_4327ec();
                }
                uVar14 = native_UnityEngine_Object__op_Inequality_8d76fc(lVar12,0,0);
                if ((uVar14 & 1) != 0) {
                  if (lVar12 == 0) goto LAB_00559338;
                  native_UnityEngine_Transform__InverseTransformPoint_7729a0
                            (uVar16,uVar27,uVar38,lVar12,0);
                }
LAB_00559308:
                uVar18 = native_UnityEngine_Mathf__FloorToInt_8e506c
                                   (((fVar26 + (float)(int)uVar5) - (float)uVar27) + 0.5,0);
                *(undefined4 *)(lVar13 + 0x1c) = uVar18;
                return;
              }
            }
            else {
              plVar11 = *(long **)(lVar13 + 0x20);
              if ((plVar11 != (long *)0x0) &&
                 (lVar12 = (**(code **)(*plVar11 + 0x208))
                                     (plVar11,lVar12,*(undefined8 *)(*plVar11 + 0x210)), lVar12 != 0
                 )) {
                if (*(uint *)(lVar12 + 0x18) < 4) {
                  uVar16 = native_sub_43283c();
                    /* WARNING: Subroutine does not return */
                  native_sub_4327dc(uVar16,0);
                }
                uVar27 = native_UnityEngine_Mathf__Lerp_8e5224
                                   (*(undefined4 *)(lVar12 + 0x48),*(undefined4 *)(lVar12 + 0x30),
                                    *(undefined4 *)(lVar13 + 0x18),0);
                goto LAB_00559308;
              }
            }
LAB_00559338:
                    /* WARNING: Subroutine does not return */
            native_sub_432810();
          }
        }
      }
    }
  }
LAB_00807ccc:
                    /* WARNING: Subroutine does not return */
  native_sub_432810();
}



/* UILabel$$get_lineHeight @ 0xae8988
 * int32_t UILabel__get_lineHeight (UILabel_o* __this, const MethodInfo* method); */

/* UILabel$$get_lineHeight
   int32_t UILabel__get_lineHeight (UILabel_o* __this, const MethodInfo* method); */

undefined4 native_UILabel__get_lineHeight_ae8988(long param_1)

{
  return *(undefined4 *)(param_1 + 0xa8);
}



/* UILabel$$set_lineHeight @ 0xae8990
 * void UILabel__set_lineHeight (UILabel_o* __this, int32_t value, const MethodInfo* method); */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* UILabel$$set_lineHeight
   void UILabel__set_lineHeight (UILabel_o* __this, int32_t value, const MethodInfo* method); */

void native_UILabel__set_lineHeight_ae8990(long *param_1,undefined8 param_2)

{
  uint uVar1;
  int iVar2;
  uint uVar3;
  uint uVar4;
  uint uVar5;
  uint uVar6;
  undefined4 uVar7;
  uint uVar8;
  uint uVar9;
  int iVar10;
  long *plVar11;
  long lVar12;
  long lVar13;
  ulong uVar14;
  int iVar15;
  undefined8 uVar16;
  undefined4 uVar17;
  float fVar18;
  float fVar19;
  float fVar20;
  float fVar21;
  float fVar22;
  float fVar23;
  float fVar24;
  ulong uVar25;
  float fVar26;
  float fVar27;
  ulong uVar28;
  ulong uVar29;
  ulong uVar30;
  ulong uVar31;
  ulong uVar32;
  ulong uVar33;
  ulong uVar34;
  float fVar35;
  float fVar37;
  ulong uVar38;
  float fVar39;
  float fVar40;
  float fVar41;
  float fVar42;
  undefined8 uVar36;
  
  if ((bRam0000000001341450 & 1) == 0) {
    native_sub_43273c(&NGUIMath_TypeInfo_12d53b8,param_2,0);
    native_sub_43273c(&UnityEngine_Object_TypeInfo_12d54e0);
    bRam0000000001341450 = 1;
  }
  iVar10 = (**(code **)(*param_1 + 0x3c8))(param_1,*(undefined8 *)(*param_1 + 0x3d0));
  if (iVar10 <= (int)param_2) {
    iVar10 = (int)param_2;
  }
  if (((int)param_1[0x15] == iVar10) || (*(int *)((long)param_1 + 0xdc) == 1)) {
    return;
  }
  uVar14 = (**(code **)(*param_1 + 0x188))(param_1,*(undefined8 *)(*param_1 + 400));
  if ((uVar14 & 1) == 0) {
    iVar15 = *(int *)((long)param_1 + 0xa4);
    if ((*(int *)((long)param_1 + 0xa4) == iVar15) && ((int)param_1[0x15] == iVar10)) {
      return;
    }
    iVar2 = *(int *)((long)param_1 + 0xdc);
    *(int *)((long)param_1 + 0xa4) = iVar15;
    *(int *)(param_1 + 0x15) = iVar10;
    if (iVar2 == 0) {
      *(float *)(param_1 + 0x1c) = (float)iVar15 / (float)iVar10;
    }
    else if (iVar2 == 2) {
      uVar17 = native_UnityEngine_Mathf__RoundToInt_8e50f0
                         (*(float *)(param_1 + 0x1c) * (float)iVar10,0);
      *(undefined4 *)((long)param_1 + 0xa4) = uVar17;
    }
    else if (iVar2 == 1) {
      uVar17 = native_UnityEngine_Mathf__RoundToInt_8e50f0
                         ((float)iVar15 / *(float *)(param_1 + 0x1c),0);
      *(undefined4 *)(param_1 + 0x15) = uVar17;
    }
    *(undefined1 *)((long)param_1 + 0x15c) = 1;
    if ((char)param_1[0x1b] != '\0') {
      native_UIWidget__ResizeCollider_949744(param_1);
    }
                    /* WARNING: Could not recover jumptable at 0x00949944. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (**(code **)(*param_1 + 0x378))(param_1,*(undefined8 *)(*param_1 + 0x380));
    return;
  }
  if (param_1[5] == 0) goto LAB_00942330;
  uVar16 = *(undefined8 *)(param_1[5] + 0x10);
  if (((*(byte *)(_UnityEngine_Object_TypeInfo_12d54e0 + 0x133) >> 2 & 1) != 0) &&
     (*(int *)(_UnityEngine_Object_TypeInfo_12d54e0 + 0xe0) == 0)) {
    native_sub_4327ec();
  }
  uVar14 = native_UnityEngine_Object__op_Inequality_8d76fc(uVar16,0,0);
  if ((uVar14 & 1) == 0) {
LAB_00942204:
    if (param_1[5] == 0) {
LAB_00942330:
                    /* WARNING: Subroutine does not return */
      native_sub_432810();
    }
    uVar16 = *(undefined8 *)(param_1[5] + 0x10);
    if (((*(byte *)(_UnityEngine_Object_TypeInfo_12d54e0 + 0x133) >> 2 & 1) != 0) &&
       (*(int *)(_UnityEngine_Object_TypeInfo_12d54e0 + 0xe0) == 0)) {
      native_sub_4327ec();
    }
    uVar14 = native_UnityEngine_Object__op_Inequality_8d76fc(uVar16,0,0);
    iVar15 = (int)param_1[0x15];
    if ((uVar14 & 1) != 0) {
      if ((*(ushort *)(_NGUIMath_TypeInfo_12d53b8 + 0x132) >> 10 & 1) != 0) {
        iVar2 = *(int *)(_NGUIMath_TypeInfo_12d53b8 + 0xe0);
joined_r0x00942258:
        if (iVar2 == 0) {
          native_sub_4327ec(_NGUIMath_TypeInfo_12d53b8);
        }
      }
LAB_00942264:
      uVar14 = 0;
      fVar37 = (float)(iVar10 - iVar15);
      goto LAB_00942274;
    }
    if ((*(ushort *)(_NGUIMath_TypeInfo_12d53b8 + 0x132) >> 10 & 1) != 0) {
      iVar2 = *(int *)(_NGUIMath_TypeInfo_12d53b8 + 0xe0);
joined_r0x00942284:
      if (iVar2 == 0) {
        native_sub_4327ec(_NGUIMath_TypeInfo_12d53b8);
      }
    }
LAB_009422b4:
    uVar14 = (ulong)(uint)(float)(iVar15 - iVar10);
    uVar25 = 0;
  }
  else {
    if (param_1[6] == 0) goto LAB_00942330;
    uVar16 = *(undefined8 *)(param_1[6] + 0x10);
    if (((*(byte *)(_UnityEngine_Object_TypeInfo_12d54e0 + 0x133) >> 2 & 1) != 0) &&
       (*(int *)(_UnityEngine_Object_TypeInfo_12d54e0 + 0xe0) == 0)) {
      native_sub_4327ec();
    }
    uVar14 = native_UnityEngine_Object__op_Inequality_8d76fc(uVar16,0,0);
    if ((uVar14 & 1) == 0) goto LAB_00942204;
    if (*(uint *)(param_1 + 0x14) < 3) {
      iVar15 = (int)param_1[0x15];
      if ((*(byte *)(_NGUIMath_TypeInfo_12d53b8 + 0x133) >> 2 & 1) != 0) {
        iVar2 = *(int *)(_NGUIMath_TypeInfo_12d53b8 + 0xe0);
        goto joined_r0x00942284;
      }
      goto LAB_009422b4;
    }
    if (*(uint *)(param_1 + 0x14) - 6 < 3) {
      iVar15 = (int)param_1[0x15];
      if ((*(byte *)(_NGUIMath_TypeInfo_12d53b8 + 0x133) >> 2 & 1) != 0) {
        iVar2 = *(int *)(_NGUIMath_TypeInfo_12d53b8 + 0xe0);
        goto joined_r0x00942258;
      }
      goto LAB_00942264;
    }
    uVar3 = iVar10 - (int)param_1[0x15] & 0xfffffffe;
    if (uVar3 == 0) {
      return;
    }
    if (((*(byte *)(_NGUIMath_TypeInfo_12d53b8 + 0x133) >> 2 & 1) != 0) &&
       (*(int *)(_NGUIMath_TypeInfo_12d53b8 + 0xe0) == 0)) {
      native_sub_4327ec();
    }
    fVar37 = (float)(int)uVar3 * 0.5;
    uVar14 = (ulong)(uint)((float)(int)-uVar3 * 0.5);
LAB_00942274:
    uVar25 = (ulong)(uint)fVar37;
  }
  uVar16 = 0;
  if ((bRam0000000001340478 & 1) == 0) {
    native_sub_43273c(&NGUIMath_TypeInfo_12d53b8,0);
    bRam0000000001340478 = 1;
  }
  if (((*(byte *)(_NGUIMath_TypeInfo_12d53b8 + 0x133) >> 2 & 1) != 0) &&
     (*(int *)(_NGUIMath_TypeInfo_12d53b8 + 0xe0) == 0)) {
    native_sub_4327ec();
  }
  uVar28 = uVar14;
  uVar38 = uVar25;
  if ((bRam000000000134047a & 1) == 0) {
    native_sub_43273c(&UnityEngine_Object_TypeInfo_12d54e0);
    bRam000000000134047a = 1;
  }
  if (param_1 == (long *)0x0) goto LAB_00807ccc;
  fVar37 = (float)native_UIWidget__get_pivotOffset_944f8c(param_1,0);
  fVar26 = (float)uVar28;
  uVar29 = uVar28;
  lVar12 = native_UIRect__get_cachedTransform_c27c58(param_1,0);
  if (lVar12 == 0) goto LAB_00807ccc;
  uVar17 = native_UnityEngine_Transform__get_localRotation_771c84(lVar12,0);
  uVar3 = native_UnityEngine_Mathf__FloorToInt_8e506c(0x3f000000,0);
  uVar4 = native_UnityEngine_Mathf__FloorToInt_8e506c((float)uVar14 + 0.5,0);
  uVar5 = native_UnityEngine_Mathf__FloorToInt_8e506c(0x3f000000,0);
  uVar6 = native_UnityEngine_Mathf__FloorToInt_8e506c((float)uVar25 + 0.5,0);
  if ((fVar37 == 0.5) && ((uVar3 == 0 || (uVar5 == 0)))) {
    uVar3 = uVar3 & 0xfffffffe;
    uVar5 = uVar5 & 0xfffffffe;
  }
  if ((fVar26 == 0.5) && ((uVar4 == 0 || (uVar6 == 0)))) {
    uVar4 = uVar4 & 0xfffffffe;
    uVar6 = uVar6 & 0xfffffffe;
  }
  fVar42 = (float)(int)uVar3;
  fVar40 = (float)(int)uVar6;
  uVar14 = uVar29;
  fVar18 = (float)native_UnityEngine_Quaternion__op_Multiply_7629c0
                            (uVar17,uVar29,uVar16,uVar38,fVar42,fVar40,0,0);
  fVar41 = (float)(int)uVar5;
  uVar25 = uVar29;
  fVar19 = (float)native_UnityEngine_Quaternion__op_Multiply_7629c0
                            (uVar17,uVar29,uVar16,uVar38,fVar41,fVar40,0,0);
  fVar39 = (float)(int)uVar4;
  uVar34 = uVar29;
  fVar20 = (float)native_UnityEngine_Quaternion__op_Multiply_7629c0
                            (uVar17,uVar29,uVar16,uVar38,fVar42,fVar39,0,0);
  uVar30 = uVar29;
  fVar21 = (float)native_UnityEngine_Quaternion__op_Multiply_7629c0
                            (uVar17,uVar29,uVar16,uVar38,fVar41,fVar39,0,0);
  uVar31 = uVar29;
  fVar42 = (float)native_UnityEngine_Quaternion__op_Multiply_7629c0
                            (uVar17,uVar29,uVar16,uVar38,fVar42,0,0,0);
  uVar32 = uVar29;
  fVar22 = (float)native_UnityEngine_Quaternion__op_Multiply_7629c0
                            (uVar17,uVar29,uVar16,uVar38,fVar41,0,0,0);
  fVar27 = (float)uVar32;
  uVar32 = uVar29;
  fVar23 = (float)native_UnityEngine_Quaternion__op_Multiply_7629c0
                            (uVar17,uVar29,uVar16,uVar38,0,fVar40,0,0);
  fVar40 = (float)uVar32;
  uVar32 = uVar29;
  uVar36 = uVar16;
  fVar24 = (float)native_UnityEngine_Quaternion__op_Multiply_7629c0
                            (uVar17,uVar29,uVar16,uVar38,0,fVar39,0,0);
  fVar35 = (float)uVar36;
  uVar33 = uVar32;
  fVar41 = (float)native_UnityEngine_Vector3__get_zero_776668(0);
  fVar39 = fVar35;
  if ((fVar37 == 0.0) && (fVar26 == 1.0)) {
    uVar33 = uVar14 & 0xffffffff;
    fVar41 = fVar18;
  }
  else if ((fVar37 == 1.0) && (fVar26 == 0.0)) {
    uVar33 = uVar30 & 0xffffffff;
    fVar41 = fVar21;
  }
  else if ((fVar37 == 0.0) && (fVar26 == 0.0)) {
    uVar33 = uVar34 & 0xffffffff;
    fVar41 = fVar20;
  }
  else if ((fVar37 == 1.0) && (fVar26 == 1.0)) {
    uVar33 = uVar25 & 0xffffffff;
    fVar41 = fVar19;
  }
  else {
    fVar18 = (float)uVar32;
    fVar19 = (float)uVar31;
    if ((fVar37 == 0.0) && (fVar26 == 0.5)) {
      fVar41 = fVar42 + (fVar23 + fVar24) * 0.5;
      uVar33 = (ulong)(uint)(fVar19 + (fVar40 + fVar18) * 0.5);
      fVar39 = fVar42;
    }
    else if ((fVar37 == 1.0) && (fVar26 == 0.5)) {
      fVar41 = fVar22 + (fVar23 + fVar24) * 0.5;
      fVar18 = fVar40 + fVar18;
      fVar40 = fVar27;
LAB_008078c0:
      uVar33 = (ulong)(uint)(fVar40 + fVar18 * 0.5);
      fVar39 = fVar40;
    }
    else if (fVar37 == 0.5) {
      if (fVar26 == 1.0) {
        fVar41 = fVar23 + (fVar42 + fVar22) * 0.5;
        fVar18 = fVar19 + fVar27;
        goto LAB_008078c0;
      }
      if (fVar26 == 0.0) {
        fVar41 = fVar24 + (fVar42 + fVar22) * 0.5;
        uVar33 = (ulong)(uint)(fVar18 + (fVar19 + fVar27) * 0.5);
      }
      else if (fVar26 == 0.5) {
        fVar41 = (fVar42 + fVar22 + fVar23 + fVar24) * 0.5;
        uVar33 = (ulong)(uint)((fVar27 + fVar19 + fVar40 + fVar18) * 0.5);
        fVar39 = fVar27;
      }
    }
  }
  fVar40 = (float)uVar33;
  uVar7 = (**(code **)(*param_1 + 0x3b8))(param_1,*(undefined8 *)(*param_1 + 0x3c0));
  uVar8 = native_UnityEngine_Mathf__Max_8e4cd0(2,uVar7,0);
  uVar7 = (**(code **)(*param_1 + 0x3c8))(param_1,*(undefined8 *)(*param_1 + 0x3d0));
  uVar9 = native_UnityEngine_Mathf__Max_8e4cd0(2,uVar7,0);
  uVar5 = (uVar5 - uVar3) + *(int *)((long)param_1 + 0xa4);
  uVar6 = (uVar6 - uVar4) + (int)param_1[0x15];
  uVar14 = native_UnityEngine_Vector3__get_zero_776668(0);
  uVar1 = 100000;
  if ((int)uVar5 < 0x186a1) {
    uVar1 = uVar5;
  }
  if ((int)uVar8 <= (int)uVar5) {
    uVar8 = uVar1;
  }
  uVar25 = uVar33;
  fVar18 = fVar39;
  if (uVar8 - uVar5 != 0) {
    uVar25 = (ulong)(uint)(float)(int)(uVar8 - uVar5);
    uVar5 = uVar8;
    fVar18 = fVar37;
    if (uVar3 == 0) {
      fVar19 = (float)native_UnityEngine_Mathf__Lerp_8e5224(0,uVar25,fVar37,0);
      uVar14 = (ulong)(uint)((float)uVar14 + fVar19);
    }
    else {
      uVar34 = 0;
      fVar19 = (float)native_UnityEngine_Mathf__Lerp_8e5224(uVar25,0,fVar37,0);
      uVar14 = (ulong)(uint)((float)uVar14 - fVar19);
      uVar25 = uVar34;
    }
  }
  fVar19 = (float)uVar25;
  uVar3 = 100000;
  if ((int)uVar6 < 0x186a1) {
    uVar3 = uVar6;
  }
  if ((int)uVar9 <= (int)uVar6) {
    uVar9 = uVar3;
  }
  if (uVar9 - uVar6 != 0) {
    fVar20 = (float)(int)(uVar9 - uVar6);
    uVar6 = uVar9;
    fVar18 = fVar26;
    if (uVar4 == 0) {
      fVar19 = fVar20;
      fVar20 = (float)native_UnityEngine_Mathf__Lerp_8e5224(0,fVar20,uVar28 & 0xffffffff,0);
      uVar33 = (ulong)(uint)((float)uVar33 + fVar20);
    }
    else {
      fVar19 = 0.0;
      fVar20 = (float)native_UnityEngine_Mathf__Lerp_8e5224(fVar20,0,uVar28 & 0xffffffff,0);
      uVar33 = (ulong)(uint)((float)uVar33 - fVar20);
    }
  }
  uVar3 = uVar5 & 0xfffffffe;
  if (fVar37 != 0.5) {
    uVar3 = uVar5;
  }
  uVar5 = uVar6 & 0xfffffffe;
  if (fVar26 != 0.5) {
    uVar5 = uVar6;
  }
  fVar20 = (float)native_UnityEngine_Transform__get_localPosition_7717f4(lVar12,0);
  fVar39 = (float)native_UnityEngine_Quaternion__op_Multiply_7629c0
                            (uVar17,uVar29,uVar16,uVar38,uVar14,uVar33,fVar39,0);
  fVar39 = fVar41 + fVar20 + fVar39;
  fVar40 = fVar40 + fVar19 + (float)uVar29;
  uVar25 = (ulong)(uint)fVar40;
  uVar28 = (ulong)(uint)(fVar35 + fVar18 + (float)uVar16);
  native_UnityEngine_Transform__set_localPosition_7718a4(fVar39,uVar25,uVar28,lVar12,0);
  native_UIWidget__SetDimensions_94987c(param_1,uVar3,uVar5,0);
  uVar14 = native_UIRect__get_isAnchored_c2d8cc(param_1,0);
  if ((uVar14 & 1) == 0) {
    return;
  }
  lVar12 = native_UnityEngine_Transform__get_parent_765eb0(lVar12,0);
  if (param_1[3] != 0) {
    uVar16 = *(undefined8 *)(param_1[3] + 0x10);
    if (((*(byte *)(_UnityEngine_Object_TypeInfo_12d54e0 + 0x133) >> 2 & 1) != 0) &&
       (*(int *)(_UnityEngine_Object_TypeInfo_12d54e0 + 0xe0) == 0)) {
      native_sub_4327ec();
    }
    fVar39 = fVar39 - fVar37 * (float)(int)uVar3;
    uVar14 = native_UnityEngine_Object__op_Implicit_8e1b98(uVar16,0);
    if ((uVar14 & 1) != 0) {
      if (param_1[3] == 0) goto LAB_00807ccc;
      native_UIRect_AnchorPoint__SetHorizontal_559078(fVar39,param_1[3],lVar12,0);
    }
    if (param_1[4] != 0) {
      uVar16 = *(undefined8 *)(param_1[4] + 0x10);
      if (((*(byte *)(_UnityEngine_Object_TypeInfo_12d54e0 + 0x133) >> 2 & 1) != 0) &&
         (*(int *)(_UnityEngine_Object_TypeInfo_12d54e0 + 0xe0) == 0)) {
        native_sub_4327ec();
      }
      uVar14 = native_UnityEngine_Object__op_Implicit_8e1b98(uVar16,0);
      if ((uVar14 & 1) != 0) {
        if (param_1[4] == 0) goto LAB_00807ccc;
        native_UIRect_AnchorPoint__SetHorizontal_559078
                  (fVar39 + (float)(int)uVar3,param_1[4],lVar12,0);
      }
      if (param_1[5] != 0) {
        uVar16 = *(undefined8 *)(param_1[5] + 0x10);
        if (((*(byte *)(_UnityEngine_Object_TypeInfo_12d54e0 + 0x133) >> 2 & 1) != 0) &&
           (*(int *)(_UnityEngine_Object_TypeInfo_12d54e0 + 0xe0) == 0)) {
          native_sub_4327ec();
        }
        fVar40 = fVar40 - fVar26 * (float)(int)uVar5;
        uVar14 = native_UnityEngine_Object__op_Implicit_8e1b98(uVar16,0);
        if ((uVar14 & 1) != 0) {
          if (param_1[5] == 0) goto LAB_00807ccc;
          native_UIRect_AnchorPoint__SetVertical_5591e0(fVar40,param_1[5],lVar12,0);
        }
        if (param_1[6] != 0) {
          uVar16 = *(undefined8 *)(param_1[6] + 0x10);
          if (((*(byte *)(_UnityEngine_Object_TypeInfo_12d54e0 + 0x133) >> 2 & 1) != 0) &&
             (*(int *)(_UnityEngine_Object_TypeInfo_12d54e0 + 0xe0) == 0)) {
            native_sub_4327ec();
          }
          uVar14 = native_UnityEngine_Object__op_Implicit_8e1b98(uVar16,0);
          if ((uVar14 & 1) == 0) {
            return;
          }
          lVar13 = param_1[6];
          if (lVar13 != 0) {
            if ((bRam000000000133ea04 & 1) == 0) {
              native_sub_43273c(&UnityEngine_Object_TypeInfo_12d54e0,lVar12,0);
              bRam000000000133ea04 = 1;
            }
            uVar16 = *(undefined8 *)(lVar13 + 0x20);
            if (((*(byte *)(_UnityEngine_Object_TypeInfo_12d54e0 + 0x133) >> 2 & 1) != 0) &&
               (*(int *)(_UnityEngine_Object_TypeInfo_12d54e0 + 0xe0) == 0)) {
              native_sub_4327ec();
            }
            uVar14 = native_UnityEngine_Object__op_Implicit_8e1b98(uVar16,0);
            if ((uVar14 & 1) == 0) {
              if (*(long *)(lVar13 + 0x10) != 0) {
                uVar16 = native_UnityEngine_Transform__get_position_77169c
                                   (*(long *)(lVar13 + 0x10),0);
                if (((*(byte *)(_UnityEngine_Object_TypeInfo_12d54e0 + 0x133) >> 2 & 1) != 0) &&
                   (*(int *)(_UnityEngine_Object_TypeInfo_12d54e0 + 0xe0) == 0)) {
                  native_sub_4327ec();
                }
                uVar14 = native_UnityEngine_Object__op_Inequality_8d76fc(lVar12,0,0);
                if ((uVar14 & 1) != 0) {
                  if (lVar12 == 0) goto LAB_00559338;
                  native_UnityEngine_Transform__InverseTransformPoint_7729a0
                            (uVar16,uVar25,uVar28,lVar12,0);
                }
LAB_00559308:
                uVar17 = native_UnityEngine_Mathf__FloorToInt_8e506c
                                   (((fVar40 + (float)(int)uVar5) - (float)uVar25) + 0.5,0);
                *(undefined4 *)(lVar13 + 0x1c) = uVar17;
                return;
              }
            }
            else {
              plVar11 = *(long **)(lVar13 + 0x20);
              if ((plVar11 != (long *)0x0) &&
                 (lVar12 = (**(code **)(*plVar11 + 0x208))
                                     (plVar11,lVar12,*(undefined8 *)(*plVar11 + 0x210)), lVar12 != 0
                 )) {
                if (*(uint *)(lVar12 + 0x18) < 4) {
                  uVar16 = native_sub_43283c();
                    /* WARNING: Subroutine does not return */
                  native_sub_4327dc(uVar16,0);
                }
                uVar25 = native_UnityEngine_Mathf__Lerp_8e5224
                                   (*(undefined4 *)(lVar12 + 0x48),*(undefined4 *)(lVar12 + 0x30),
                                    *(undefined4 *)(lVar13 + 0x18),0);
                goto LAB_00559308;
              }
            }
LAB_00559338:
                    /* WARNING: Subroutine does not return */
            native_sub_432810();
          }
        }
      }
    }
  }
LAB_00807ccc:
                    /* WARNING: Subroutine does not return */
  native_sub_432810();
}



/* UILabel$$get_multiLine @ 0xae8998
 * bool UILabel__get_multiLine (UILabel_o* __this, const MethodInfo* method); */

/* UILabel$$get_multiLine
   bool UILabel__get_multiLine (UILabel_o* __this, const MethodInfo* method); */

bool native_UILabel__get_multiLine_ae8998(long param_1)

{
  return *(int *)(param_1 + 0x1c0) != 1;
}



/* UILabel$$set_multiLine @ 0xae89a8
 * void UILabel__set_multiLine (UILabel_o* __this, bool value, const MethodInfo* method); */

/* UILabel$$set_multiLine
   void UILabel__set_multiLine (UILabel_o* __this, bool value, const MethodInfo* method); */

void native_UILabel__set_multiLine_ae89a8(long param_1,uint param_2)

{
  if (((*(int *)(param_1 + 0x1c0) != 1 ^ param_2) & 1) != 0) {
    *(undefined1 *)(param_1 + 0x58) = 1;
    *(uint *)(param_1 + 0x1c0) = ~param_2 & 1;
    *(undefined1 *)(param_1 + 0x25c) = 1;
  }
  return;
}



/* UILabel$$get_localCorners @ 0xae89d8
 * UnityEngine_Vector3_array* UILabel__get_localCorners (UILabel_o* __this, const MethodInfo* method); */

/* UILabel$$get_localCorners
   UnityEngine_Vector3_array* UILabel__get_localCorners (UILabel_o* __this, const MethodInfo*
   method); */

undefined8
native_UILabel__get_localCorners_ae89d8(undefined1 param_1 [16],float param_2,long param_3)

{
  undefined8 uVar1;
  long lVar2;
  float fVar3;
  float fVar4;
  int iVar5;
  float fVar6;
  int iVar7;
  float fVar8;
  
  if (*(char *)(param_3 + 0x25c) != '\0') {
    native_UILabel__ProcessText_ae8a14(param_3,0,1);
  }
  fVar3 = (float)native_UIWidget__get_pivotOffset_944f8c(param_3,0);
  lVar2 = *(long *)(param_3 + 0x168);
  if (lVar2 != 0) {
    if (*(int *)(lVar2 + 0x18) != 0) {
      iVar5 = *(int *)(param_3 + 0xa4);
      iVar7 = *(int *)(param_3 + 0xa8);
      *(undefined4 *)(lVar2 + 0x28) = 0;
      fVar6 = (float)iVar5;
      fVar8 = (float)iVar7;
      *(float *)(lVar2 + 0x20) = -(fVar3 * fVar6);
      *(float *)(lVar2 + 0x24) = -(param_2 * fVar8);
      lVar2 = *(long *)(param_3 + 0x168);
      if (lVar2 == 0) goto LAB_0094a27c;
      if (1 < *(uint *)(lVar2 + 0x18)) {
        fVar4 = fVar8 - param_2 * fVar8;
        *(float *)(lVar2 + 0x2c) = -(fVar3 * fVar6);
        *(float *)(lVar2 + 0x30) = fVar4;
        *(undefined4 *)(lVar2 + 0x34) = 0;
        lVar2 = *(long *)(param_3 + 0x168);
        if (lVar2 == 0) goto LAB_0094a27c;
        if (2 < *(uint *)(lVar2 + 0x18)) {
          fVar6 = fVar6 - fVar3 * fVar6;
          *(float *)(lVar2 + 0x38) = fVar6;
          *(float *)(lVar2 + 0x3c) = fVar4;
          *(undefined4 *)(lVar2 + 0x40) = 0;
          lVar2 = *(long *)(param_3 + 0x168);
          if (lVar2 == 0) goto LAB_0094a27c;
          if (3 < *(uint *)(lVar2 + 0x18)) {
            *(float *)(lVar2 + 0x44) = fVar6;
            *(float *)(lVar2 + 0x48) = -(param_2 * fVar8);
            *(undefined4 *)(lVar2 + 0x4c) = 0;
            return *(undefined8 *)(param_3 + 0x168);
          }
        }
      }
    }
    uVar1 = native_sub_43283c();
                    /* WARNING: Subroutine does not return */
    native_sub_4327dc(uVar1,0);
  }
LAB_0094a27c:
                    /* WARNING: Subroutine does not return */
  native_sub_432810();
}



/* UILabel$$get_worldCorners @ 0xae93c4
 * UnityEngine_Vector3_array* UILabel__get_worldCorners (UILabel_o* __this, const MethodInfo* method); */

/* UILabel$$get_worldCorners
   UnityEngine_Vector3_array* UILabel__get_worldCorners (UILabel_o* __this, const MethodInfo*
   method); */

undefined8
native_UILabel__get_worldCorners_ae93c4(undefined1 param_1 [16],float param_2,long param_3)

{
  long lVar1;
  undefined8 uVar2;
  long lVar3;
  float fVar4;
  undefined4 uVar5;
  float fVar6;
  undefined4 uVar7;
  int iVar8;
  float fVar9;
  int iVar10;
  float fVar11;
  float fVar12;
  
  if (*(char *)(param_3 + 0x25c) != '\0') {
    native_UILabel__ProcessText_ae8a14(param_3,0,1);
  }
  fVar4 = (float)native_UIWidget__get_pivotOffset_944f8c(param_3,0);
  iVar10 = *(int *)(param_3 + 0xa4);
  iVar8 = *(int *)(param_3 + 0xa8);
  lVar1 = native_UIRect__get_cachedTransform_c27c58(param_3,0);
  if (lVar1 != 0) {
    fVar11 = (float)iVar10;
    lVar3 = *(long *)(param_3 + 0x168);
    fVar12 = (float)iVar8;
    fVar9 = -(param_2 * fVar12);
    uVar7 = 0;
    fVar6 = fVar9;
    uVar5 = native_UnityEngine_Transform__TransformPoint_77299c(-(fVar4 * fVar11),lVar1,0);
    if (lVar3 != 0) {
      if (*(int *)(lVar3 + 0x18) != 0) {
        *(undefined4 *)(lVar3 + 0x20) = uVar5;
        *(float *)(lVar3 + 0x24) = fVar6;
        *(undefined4 *)(lVar3 + 0x28) = uVar7;
        lVar3 = *(long *)(param_3 + 0x168);
        fVar12 = fVar12 - param_2 * fVar12;
        uVar7 = 0;
        fVar6 = fVar12;
        uVar5 = native_UnityEngine_Transform__TransformPoint_77299c(-(fVar4 * fVar11),lVar1,0);
        if (lVar3 == 0) goto LAB_0094a4ac;
        if (1 < *(uint *)(lVar3 + 0x18)) {
          *(undefined4 *)(lVar3 + 0x2c) = uVar5;
          *(float *)(lVar3 + 0x30) = fVar6;
          *(undefined4 *)(lVar3 + 0x34) = uVar7;
          lVar3 = *(long *)(param_3 + 0x168);
          fVar11 = fVar11 - fVar4 * fVar11;
          uVar7 = 0;
          uVar5 = native_UnityEngine_Transform__TransformPoint_77299c(fVar11,lVar1,0);
          if (lVar3 == 0) goto LAB_0094a4ac;
          if (2 < *(uint *)(lVar3 + 0x18)) {
            *(undefined4 *)(lVar3 + 0x38) = uVar5;
            *(float *)(lVar3 + 0x3c) = fVar12;
            *(undefined4 *)(lVar3 + 0x40) = uVar7;
            lVar3 = *(long *)(param_3 + 0x168);
            uVar7 = 0;
            uVar5 = native_UnityEngine_Transform__TransformPoint_77299c(fVar11,lVar1,0);
            if (lVar3 == 0) goto LAB_0094a4ac;
            if (3 < *(uint *)(lVar3 + 0x18)) {
              *(undefined4 *)(lVar3 + 0x44) = uVar5;
              *(float *)(lVar3 + 0x48) = fVar9;
              *(undefined4 *)(lVar3 + 0x4c) = uVar7;
              return *(undefined8 *)(param_3 + 0x168);
            }
          }
        }
      }
      uVar2 = native_sub_43283c();
                    /* WARNING: Subroutine does not return */
      native_sub_4327dc(uVar2,0);
    }
  }
LAB_0094a4ac:
                    /* WARNING: Subroutine does not return */
  native_sub_432810();
}



/* UILabel$$get_drawingDimensions @ 0xae9400
 * UnityEngine_Vector4_o UILabel__get_drawingDimensions (UILabel_o* __this, const MethodInfo* method); */

/* UILabel$$get_drawingDimensions
   UnityEngine_Vector4_o UILabel__get_drawingDimensions (UILabel_o* __this, const MethodInfo*
   method); */

undefined4
native_UILabel__get_drawingDimensions_ae9400(undefined1 param_1 [16],float param_2,long param_3)

{
  float fVar1;
  ulong uVar2;
  ulong uVar3;
  ulong uVar4;
  ulong uVar5;
  float fVar6;
  float fVar7;
  ulong uVar8;
  ulong uVar9;
  undefined8 uStack_60;
  undefined8 uStack_58;
  
  if (*(char *)(param_3 + 0x25c) != '\0') {
    native_UILabel__ProcessText_ae8a14(param_3,0,1);
  }
  fVar1 = (float)native_UIWidget__get_pivotOffset_944f8c(param_3,0);
  fVar6 = (float)*(int *)(param_3 + 0xa4);
  fVar7 = (float)*(int *)(param_3 + 0xa8);
  uVar9 = (ulong)(uint)-(fVar1 * fVar6);
  uVar4 = (ulong)(uint)(fVar6 - fVar1 * fVar6);
  uVar2 = uVar9;
  if (*(float *)(param_3 + 0x104) != 0.0) {
    uVar2 = native_UnityEngine_Mathf__Lerp_8e5224(uVar9,uVar4,0);
  }
  uVar8 = (ulong)(uint)-(param_2 * fVar7);
  uVar5 = (ulong)(uint)(fVar7 - param_2 * fVar7);
  uVar3 = uVar8;
  if (*(float *)(param_3 + 0x108) != 0.0) {
    uVar3 = native_UnityEngine_Mathf__Lerp_8e5224(uVar8,uVar5,0);
  }
  if (*(float *)(param_3 + 0x10c) != 1.0) {
    uVar4 = native_UnityEngine_Mathf__Lerp_8e5224(uVar9,uVar4,0);
  }
  if (*(float *)(param_3 + 0x110) != 1.0) {
    uVar5 = native_UnityEngine_Mathf__Lerp_8e5224(uVar8,uVar5,0);
  }
  uStack_60 = 0;
  uStack_58 = 0;
  native_UnityEngine_Vector4___ctor_776f24(uVar2,uVar3,uVar4,uVar5,&uStack_60,0);
  return (undefined4)uStack_60;
}



/* UILabel$$get_maxLineCount @ 0xae943c
 * int32_t UILabel__get_maxLineCount (UILabel_o* __this, const MethodInfo* method); */

/* UILabel$$get_maxLineCount
   int32_t UILabel__get_maxLineCount (UILabel_o* __this, const MethodInfo* method); */

undefined4 native_UILabel__get_maxLineCount_ae943c(long param_1)

{
  return *(undefined4 *)(param_1 + 0x1c0);
}



/* UILabel$$set_maxLineCount @ 0xae9444
 * void UILabel__set_maxLineCount (UILabel_o* __this, int32_t value, const MethodInfo* method); */

/* UILabel$$set_maxLineCount
   void UILabel__set_maxLineCount (UILabel_o* __this, int32_t value, const MethodInfo* method); */

void native_UILabel__set_maxLineCount_ae9444(long *param_1,int param_2)

{
  undefined4 uVar1;
  
  if ((int)param_1[0x38] != param_2) {
    uVar1 = native_UnityEngine_Mathf__Max_8e4cd0(param_2,0,0);
    *(undefined4 *)(param_1 + 0x38) = uVar1;
    *(undefined1 *)(param_1 + 0xb) = 1;
    *(undefined1 *)((long)param_1 + 0x25c) = 1;
    if (*(int *)((long)param_1 + 0x1e4) == 0) {
                    /* WARNING: Could not recover jumptable at 0x00ae94ac. Too many branches */
                    /* WARNING: Treating indirect jump as call */
      (**(code **)(*param_1 + 0x3a8))(param_1,*(undefined8 *)(*param_1 + 0x3b0));
      return;
    }
  }
  return;
}



/* UILabel$$get_effectStyle @ 0xae94b0
 * int32_t UILabel__get_effectStyle (UILabel_o* __this, const MethodInfo* method); */

/* UILabel$$get_effectStyle
   int32_t UILabel__get_effectStyle (UILabel_o* __this, const MethodInfo* method); */

undefined4 native_UILabel__get_effectStyle_ae94b0(long param_1)

{
  return *(undefined4 *)(param_1 + 0x1c4);
}



/* UILabel$$set_effectStyle @ 0xae94b8
 * void UILabel__set_effectStyle (UILabel_o* __this, int32_t value, const MethodInfo* method); */

/* UILabel$$set_effectStyle
   void UILabel__set_effectStyle (UILabel_o* __this, int32_t value, const MethodInfo* method); */

void native_UILabel__set_effectStyle_ae94b8(long param_1,int param_2)

{
  if (*(int *)(param_1 + 0x1c4) != param_2) {
    *(int *)(param_1 + 0x1c4) = param_2;
    *(undefined1 *)(param_1 + 0x58) = 1;
    *(undefined1 *)(param_1 + 0x25c) = 1;
  }
  return;
}



/* UILabel$$get_effectColor @ 0xae94d8
 * UnityEngine_Color_o UILabel__get_effectColor (UILabel_o* __this, const MethodInfo* method); */

/* UILabel$$get_effectColor
   UnityEngine_Color_o UILabel__get_effectColor (UILabel_o* __this, const MethodInfo* method); */

undefined4 native_UILabel__get_effectColor_ae94d8(long param_1)

{
  return *(undefined4 *)(param_1 + 0x1c8);
}



/* UILabel$$set_effectColor @ 0xae94ec
 * void UILabel__set_effectColor (UILabel_o* __this, UnityEngine_Color_o value, const MethodInfo* method); */

/* UILabel$$set_effectColor
   void UILabel__set_effectColor (UILabel_o* __this, UnityEngine_Color_o value, const MethodInfo*
   method); */

void native_UILabel__set_effectColor_ae94ec
               (undefined8 param_1,undefined1 param_2 [16],undefined1 param_3 [16],
               undefined1 param_4 [16],long param_5)

{
  ulong uVar1;
  
  uVar1 = native_UnityEngine_Color__op_Inequality_8d9d34
                    (*(undefined4 *)(param_5 + 0x1c8),*(undefined4 *)(param_5 + 0x1cc),
                     *(undefined4 *)(param_5 + 0x1d0),*(undefined4 *)(param_5 + 0x1d4),param_1,
                     param_2._0_8_,param_3._0_8_,param_4._0_8_,0);
  if ((uVar1 & 1) != 0) {
    *(int *)(param_5 + 0x1c8) = (int)param_1;
    *(int *)(param_5 + 0x1cc) = param_2._0_4_;
    *(int *)(param_5 + 0x1d0) = param_3._0_4_;
    *(int *)(param_5 + 0x1d4) = param_4._0_4_;
    if (*(int *)(param_5 + 0x1c4) != 0) {
      *(undefined1 *)(param_5 + 0x58) = 1;
      *(undefined1 *)(param_5 + 0x25c) = 1;
    }
  }
  return;
}



/* UILabel$$get_effectDistance @ 0xae957c
 * UnityEngine_Vector2_o UILabel__get_effectDistance (UILabel_o* __this, const MethodInfo* method); */

/* UILabel$$get_effectDistance
   UnityEngine_Vector2_o UILabel__get_effectDistance (UILabel_o* __this, const MethodInfo* method);
    */

undefined4 native_UILabel__get_effectDistance_ae957c(long param_1)

{
  return *(undefined4 *)(param_1 + 0x1dc);
}



/* UILabel$$set_effectDistance @ 0xae9588
 * void UILabel__set_effectDistance (UILabel_o* __this, UnityEngine_Vector2_o value, const MethodInfo* method); */

/* UILabel$$set_effectDistance
   void UILabel__set_effectDistance (UILabel_o* __this, UnityEngine_Vector2_o value, const
   MethodInfo* method); */

void native_UILabel__set_effectDistance_ae9588(float param_1,float param_2,long param_3)

{
  float fVar1;
  float fVar2;
  
  fVar1 = *(float *)(param_3 + 0x1dc) - param_1;
  fVar2 = *(float *)(param_3 + 0x1e0) - param_2;
  if (9.9999994e-11 <= fVar1 * fVar1 + fVar2 * fVar2) {
    *(float *)(param_3 + 0x1dc) = param_1;
    *(float *)(param_3 + 0x1e0) = param_2;
    *(undefined1 *)(param_3 + 0x58) = 1;
    *(undefined1 *)(param_3 + 0x25c) = 1;
  }
  return;
}



/* UILabel$$get_quadsPerCharacter @ 0xae95cc
 * int32_t UILabel__get_quadsPerCharacter (UILabel_o* __this, const MethodInfo* method); */

/* UILabel$$get_quadsPerCharacter
   int32_t UILabel__get_quadsPerCharacter (UILabel_o* __this, const MethodInfo* method); */

undefined4 native_UILabel__get_quadsPerCharacter_ae95cc(long param_1)

{
  int iVar1;
  undefined4 uVar2;
  
  iVar1 = *(int *)(param_1 + 0x1c4);
  if (iVar1 == 1) {
    return 2;
  }
  if (iVar1 == 2) {
    return 5;
  }
  uVar2 = 9;
  if (iVar1 != 3) {
    uVar2 = 1;
  }
  return uVar2;
}



/* UILabel$$get_shrinkToFit @ 0xae9600
 * bool UILabel__get_shrinkToFit (UILabel_o* __this, const MethodInfo* method); */

/* UILabel$$get_shrinkToFit
   bool UILabel__get_shrinkToFit (UILabel_o* __this, const MethodInfo* method); */

bool native_UILabel__get_shrinkToFit_ae9600(long param_1)

{
  return *(int *)(param_1 + 0x1e4) == 0;
}



/* UILabel$$set_shrinkToFit @ 0xae9610
 * void UILabel__set_shrinkToFit (UILabel_o* __this, bool value, const MethodInfo* method); */

/* UILabel$$set_shrinkToFit
   void UILabel__set_shrinkToFit (UILabel_o* __this, bool value, const MethodInfo* method); */

void native_UILabel__set_shrinkToFit_ae9610(long param_1,uint param_2)

{
  if (((param_2 & 1) != 0) && (*(int *)(param_1 + 0x1e4) != 0)) {
    *(undefined4 *)(param_1 + 0x1e4) = 0;
    *(undefined1 *)(param_1 + 0x58) = 1;
    *(undefined1 *)(param_1 + 0x25c) = 1;
  }
  return;
}



/* UILabel$$get_processedText @ 0xae9630
 * System_String_o* UILabel__get_processedText (UILabel_o* __this, const MethodInfo* method); */

/* UILabel$$get_processedText
   System_String_o* UILabel__get_processedText (UILabel_o* __this, const MethodInfo* method); */

undefined8 native_UILabel__get_processedText_ae9630(long param_1)

{
  int iVar1;
  
  iVar1 = *(int *)(param_1 + 0x27c);
  if (iVar1 == 0) {
    if (*(int *)(param_1 + 0x280) == 0) {
      iVar1 = (int)*(undefined8 *)(param_1 + 0xa4);
      *(undefined8 *)(param_1 + 0x27c) = *(undefined8 *)(param_1 + 0xa4);
    }
    else {
      iVar1 = 0;
    }
  }
  if (iVar1 == *(int *)(param_1 + 0xa4)) {
    iVar1 = *(int *)(param_1 + 0xa8);
    if (*(int *)(param_1 + 0x280) != iVar1) goto LAB_00ae9694;
    if (*(char *)(param_1 + 0x25c) == '\0') goto LAB_00ae96b8;
  }
  else {
    iVar1 = *(int *)(param_1 + 0xa8);
LAB_00ae9694:
    *(int *)(param_1 + 0x27c) = *(int *)(param_1 + 0xa4);
    *(int *)(param_1 + 0x280) = iVar1;
    *(undefined1 *)(param_1 + 0x58) = 1;
    *(undefined1 *)(param_1 + 0x25c) = 1;
  }
  native_UILabel__ProcessText_ae8a14(param_1,0,1);
LAB_00ae96b8:
  return *(undefined8 *)(param_1 + 0x260);
}



/* UILabel$$get_printedSize @ 0xae96c8
 * UnityEngine_Vector2_o UILabel__get_printedSize (UILabel_o* __this, const MethodInfo* method); */

/* UILabel$$get_printedSize
   UnityEngine_Vector2_o UILabel__get_printedSize (UILabel_o* __this, const MethodInfo* method); */

undefined4 native_UILabel__get_printedSize_ae96c8(long param_1)

{
  if (*(char *)(param_1 + 0x25c) != '\0') {
    native_UILabel__ProcessText_ae8a14(param_1,0,1);
  }
  return *(undefined4 *)(param_1 + 0x26c);
}



/* UILabel$$get_localSize @ 0xae9704
 * UnityEngine_Vector2_o UILabel__get_localSize (UILabel_o* __this, const MethodInfo* method); */

/* UILabel$$get_localSize
   UnityEngine_Vector2_o UILabel__get_localSize (UILabel_o* __this, const MethodInfo* method); */

void native_UILabel__get_localSize_ae9704(long *param_1)

{
  long lVar1;
  undefined8 uVar2;
  
  if (*(char *)((long)param_1 + 0x25c) != '\0') {
    native_UILabel__ProcessText_ae8a14(param_1,0,1);
  }
  lVar1 = (**(code **)(*param_1 + 0x1d8))(param_1,*(undefined8 *)(*param_1 + 0x1e0));
  if (lVar1 != 0) {
    if (2 < *(uint *)(lVar1 + 0x18)) {
      return;
    }
    uVar2 = native_sub_43283c();
                    /* WARNING: Subroutine does not return */
    native_sub_4327dc(uVar2,0);
  }
                    /* WARNING: Subroutine does not return */
  native_sub_432810();
}



/* UILabel$$get_isValid @ 0xae9740
 * bool UILabel__get_isValid (UILabel_o* __this, const MethodInfo* method); */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* UILabel$$get_isValid
   bool UILabel__get_isValid (UILabel_o* __this, const MethodInfo* method); */

uint native_UILabel__get_isValid_ae9740(long param_1)

{
  uint uVar1;
  ulong uVar2;
  undefined8 uVar3;
  
  if ((bRam0000000001342008 & 1) == 0) {
    native_sub_43273c(&UnityEngine_Object_TypeInfo_12d54e0);
    bRam0000000001342008 = 1;
  }
  uVar3 = *(undefined8 *)(param_1 + 0x1a0);
  if (((*(byte *)(_UnityEngine_Object_TypeInfo_12d54e0 + 0x133) >> 2 & 1) != 0) &&
     (*(int *)(_UnityEngine_Object_TypeInfo_12d54e0 + 0xe0) == 0)) {
    native_sub_4327ec();
  }
  uVar2 = native_UnityEngine_Object__op_Inequality_8d76fc(uVar3,0,0);
  if ((uVar2 & 1) != 0) {
    return 1;
  }
  uVar3 = *(undefined8 *)(param_1 + 0x198);
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
  uVar1 = native_UnityEngine_Object__CompareBaseObjects_8e9aac(uVar3,0);
  return ~uVar1 & 1;
}



/* UILabel$$get_symbolLabel @ 0xae97f8
 * bool UILabel__get_symbolLabel (UILabel_o* __this, const MethodInfo* method); */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* UILabel$$get_symbolLabel
   bool UILabel__get_symbolLabel (UILabel_o* __this, const MethodInfo* method); */

uint native_UILabel__get_symbolLabel_ae97f8(long param_1)

{
  uint uVar1;
  undefined8 uVar2;
  
  if ((bRam0000000001342009 & 1) == 0) {
    native_sub_43273c(&UnityEngine_Object_TypeInfo_12d54e0);
    bRam0000000001342009 = 1;
  }
  uVar2 = *(undefined8 *)(param_1 + 0x248);
  if (((*(byte *)(_UnityEngine_Object_TypeInfo_12d54e0 + 0x133) >> 2 & 1) != 0) &&
     (*(int *)(_UnityEngine_Object_TypeInfo_12d54e0 + 0xe0) == 0)) {
    native_sub_4327ec();
  }
  if ((bRam0000000001341032 & 1) == 0) {
    native_sub_43273c(&UnityEngine_Object_TypeInfo_12d54e0,0);
    bRam0000000001341032 = 1;
  }
  if (((*(byte *)(_UnityEngine_Object_TypeInfo_12d54e0 + 0x133) >> 2 & 1) != 0) &&
     (*(int *)(_UnityEngine_Object_TypeInfo_12d54e0 + 0xe0) == 0)) {
    native_sub_4327ec();
  }
  uVar1 = native_UnityEngine_Object__CompareBaseObjects_8e9aac(uVar2,0);
  return ~uVar1 & 1;
}



/* UILabel$$get_modifier @ 0xae9860
 * int32_t UILabel__get_modifier (UILabel_o* __this, const MethodInfo* method); */

/* UILabel$$get_modifier
   int32_t UILabel__get_modifier (UILabel_o* __this, const MethodInfo* method); */

undefined4 native_UILabel__get_modifier_ae9860(long param_1)

{
  return *(undefined4 *)(param_1 + 0x22c);
}



/* UILabel$$set_modifier @ 0xae9868
 * void UILabel__set_modifier (UILabel_o* __this, int32_t value, const MethodInfo* method); */

/* WARNING: Removing unreachable block (ram,0x00ae8ab0) */
/* WARNING: Removing unreachable block (ram,0x00ae8ab8) */
/* WARNING: Removing unreachable block (ram,0x00ae8afc) */
/* WARNING: Removing unreachable block (ram,0x00ae8b04) */
/* WARNING: Removing unreachable block (ram,0x00ae8c74) */
/* WARNING: Removing unreachable block (ram,0x00ae8c80) */
/* WARNING: Removing unreachable block (ram,0x00ae9254) */
/* WARNING: Removing unreachable block (ram,0x00ae9338) */
/* WARNING: Removing unreachable block (ram,0x00ae938c) */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* UILabel$$set_modifier
   void UILabel__set_modifier (UILabel_o* __this, int32_t value, const MethodInfo* method); */

void native_UILabel__set_modifier_ae9868
               (undefined1 param_1 [16],float param_2,long *param_3,int param_4)

{
  ulong *puVar1;
  bool bVar2;
  undefined4 uVar3;
  int iVar4;
  undefined4 uVar5;
  uint uVar6;
  uint uVar7;
  undefined8 uVar8;
  ulong uVar9;
  ulong uVar10;
  undefined8 *puVar11;
  long lVar12;
  long lVar13;
  long *plVar14;
  char cVar15;
  int iVar16;
  float fVar17;
  float fVar18;
  float fVar19;
  float fVar20;
  
  if (*(int *)((long)param_3 + 0x22c) == param_4) {
    return;
  }
  *(int *)((long)param_3 + 0x22c) = param_4;
  (**(code **)(*param_3 + 0x378))(param_3,*(undefined8 *)(*param_3 + 0x380));
  if ((bRam0000000001342014 & 1) == 0) {
    native_sub_43273c(&UnityEngine_Object_TypeInfo_12d54e0);
    bRam0000000001342014 = 1;
  }
  uVar8 = native_UILabel__get_ambigiousFont_ae8074(param_3);
  if (((*(byte *)(_UnityEngine_Object_TypeInfo_12d54e0 + 0x133) >> 2 & 1) != 0) &&
     (*(int *)(_UnityEngine_Object_TypeInfo_12d54e0 + 0xe0) == 0)) {
    native_sub_4327ec(_UnityEngine_Object_TypeInfo_12d54e0);
  }
  uVar9 = native_UnityEngine_Object__op_Inequality_8d76fc(uVar8,0,0);
  if ((uVar9 & 1) == 0) {
    return;
  }
  if ((bRam0000000001342018 & 1) == 0) {
    native_sub_43273c(&NGUIText_TypeInfo_12d53c0);
    native_sub_43273c(&UnityEngine_Object_TypeInfo_12d54e0);
    native_sub_43273c(&StringLiteral__12eaac0);
    bRam0000000001342018 = 1;
  }
  uVar9 = native_UILabel__get_isValid_ae9740(param_3);
  if ((uVar9 & 1) == 0) {
    return;
  }
  fVar17 = *(float *)((long)param_3 + 0x10c);
  fVar18 = *(float *)((long)param_3 + 0x104);
  fVar19 = *(float *)(param_3 + 0x22);
  fVar20 = *(float *)(param_3 + 0x21);
  uVar5 = 1000000;
  *(undefined1 *)(param_3 + 0xb) = 1;
  *(undefined1 *)((long)param_3 + 0x25c) = 0;
  uVar3 = *(undefined4 *)((long)param_3 + 0xa4);
  if (((*(byte *)(_NGUIText_TypeInfo_12d53c0 + 0x133) >> 2 & 1) != 0) &&
     (*(int *)(_NGUIText_TypeInfo_12d53c0 + 0xe0) == 0)) {
    native_sub_4327ec(_NGUIText_TypeInfo_12d53c0);
  }
  lVar12 = _NGUIText_TypeInfo_12d53c0;
  plVar14 = (long *)(_NGUIText_TypeInfo_12d53c0 + 0xb8);
  *(undefined4 *)(*plVar14 + 0x40) = uVar3;
  lVar13 = param_3[0x15];
  fVar17 = fVar17 - fVar18;
  if (((*(byte *)(lVar12 + 0x133) >> 2 & 1) != 0) && (*(int *)(lVar12 + 0xe0) == 0)) {
    native_sub_4327ec(lVar12);
    plVar14 = (long *)(_NGUIText_TypeInfo_12d53c0 + 0xb8);
    lVar12 = _NGUIText_TypeInfo_12d53c0;
  }
  *(int *)(*(long *)(lVar12 + 0xb8) + 0x44) = (int)lVar13;
  if (fVar17 == 1.0) {
    if (((*(ushort *)(lVar12 + 0x132) >> 10 & 1) != 0) && (*(int *)(lVar12 + 0xe0) == 0)) {
      native_sub_4327ec(lVar12);
      plVar14 = (long *)(_NGUIText_TypeInfo_12d53c0 + 0xb8);
      lVar12 = _NGUIText_TypeInfo_12d53c0;
    }
    uVar3 = *(undefined4 *)(*plVar14 + 0x40);
  }
  else {
    if (((*(ushort *)(lVar12 + 0x132) >> 10 & 1) != 0) && (*(int *)(lVar12 + 0xe0) == 0)) {
      native_sub_4327ec(lVar12);
      plVar14 = (long *)(_NGUIText_TypeInfo_12d53c0 + 0xb8);
    }
    uVar3 = native_UnityEngine_Mathf__RoundToInt_8e50f0(fVar17 * (float)*(int *)(*plVar14 + 0x40),0)
    ;
    lVar12 = _NGUIText_TypeInfo_12d53c0;
  }
  fVar19 = fVar19 - fVar20;
  if (((*(byte *)(lVar12 + 0x133) >> 2 & 1) != 0) && (*(int *)(lVar12 + 0xe0) == 0)) {
    native_sub_4327ec(lVar12);
    lVar12 = _NGUIText_TypeInfo_12d53c0;
  }
  plVar14 = (long *)(lVar12 + 0xb8);
  *(undefined4 *)(*plVar14 + 0x48) = uVar3;
  if (fVar19 == 1.0) {
    if (((*(ushort *)(lVar12 + 0x132) >> 10 & 1) != 0) && (*(int *)(lVar12 + 0xe0) == 0)) {
      native_sub_4327ec(lVar12);
      lVar12 = _NGUIText_TypeInfo_12d53c0;
    }
    uVar3 = *(undefined4 *)(*(long *)(lVar12 + 0xb8) + 0x44);
  }
  else {
    if (((*(ushort *)(lVar12 + 0x132) >> 10 & 1) != 0) && (*(int *)(lVar12 + 0xe0) == 0)) {
      native_sub_4327ec(lVar12);
      plVar14 = (long *)(_NGUIText_TypeInfo_12d53c0 + 0xb8);
    }
    uVar3 = native_UnityEngine_Mathf__RoundToInt_8e50f0(fVar19 * (float)*(int *)(*plVar14 + 0x44),0)
    ;
    lVar12 = _NGUIText_TypeInfo_12d53c0;
  }
  if (((*(byte *)(lVar12 + 0x133) >> 2 & 1) != 0) && (*(int *)(lVar12 + 0xe0) == 0)) {
    native_sub_4327ec(lVar12);
    lVar12 = _NGUIText_TypeInfo_12d53c0;
  }
  *(undefined4 *)(*(long *)(lVar12 + 0xb8) + 0x4c) = uVar3;
  uVar8 = native_UILabel__get_defaultFontSize_ae82a4(param_3);
  uVar3 = native_UnityEngine_Mathf__Abs_8e4b54(uVar8,0);
  *(undefined4 *)(param_3 + 0x4f) = uVar3;
  *(undefined4 *)((long)param_3 + 0x274) = 0x3f800000;
  if (((*(byte *)(_NGUIText_TypeInfo_12d53c0 + 0x133) >> 2 & 1) != 0) &&
     (*(int *)(_NGUIText_TypeInfo_12d53c0 + 0xe0) == 0)) {
    native_sub_4327ec();
  }
  lVar13 = *(long *)(_NGUIText_TypeInfo_12d53c0 + 0xb8);
  if (0 < *(int *)(lVar13 + 0x48)) {
    if (((*(byte *)(_NGUIText_TypeInfo_12d53c0 + 0x133) >> 2 & 1) != 0) &&
       (*(int *)(_NGUIText_TypeInfo_12d53c0 + 0xe0) == 0)) {
      native_sub_4327ec();
      lVar13 = *(long *)(_NGUIText_TypeInfo_12d53c0 + 0xb8);
    }
    if (-1 < *(int *)(lVar13 + 0x4c)) {
      uVar8 = native_UILabel__get_trueTypeFont_ae74d0(param_3);
      if (((*(byte *)(_UnityEngine_Object_TypeInfo_12d54e0 + 0x133) >> 2 & 1) != 0) &&
         (*(int *)(_UnityEngine_Object_TypeInfo_12d54e0 + 0xe0) == 0)) {
        native_sub_4327ec(_UnityEngine_Object_TypeInfo_12d54e0);
      }
      uVar9 = native_UnityEngine_Object__op_Inequality_8d76fc(uVar8,0,0);
      uVar3 = 0x3f800000;
      if (((uVar9 & 1) == 0) ||
         (uVar9 = native_UILabel__get_keepCrisp_ae8860(param_3), uVar3 = 0x3f800000,
         (uVar9 & 1) == 0)) {
LAB_00ae8dcc:
        *(undefined4 *)(param_3 + 0x4b) = uVar3;
      }
      else {
        lVar13 = native_UIRect__get_root_c2d7ac(param_3,0);
        if (((*(byte *)(_UnityEngine_Object_TypeInfo_12d54e0 + 0x133) >> 2 & 1) != 0) &&
           (*(int *)(_UnityEngine_Object_TypeInfo_12d54e0 + 0xe0) == 0)) {
          native_sub_4327ec(_UnityEngine_Object_TypeInfo_12d54e0);
        }
        uVar9 = native_UnityEngine_Object__op_Inequality_8d76fc(lVar13,0,0);
        if ((uVar9 & 1) != 0) {
          if (((*(byte *)(_UnityEngine_Object_TypeInfo_12d54e0 + 0x133) >> 2 & 1) != 0) &&
             (*(int *)(_UnityEngine_Object_TypeInfo_12d54e0 + 0xe0) == 0)) {
            native_sub_4327ec();
          }
          uVar9 = native_UnityEngine_Object__op_Inequality_8d76fc(lVar13,0,0);
          if ((uVar9 & 1) != 0) {
            if (lVar13 == 0) goto LAB_00ae93c0;
            uVar3 = native_UIRoot__get_pixelSizeAdjustment_c2f740(lVar13,0);
          }
          goto LAB_00ae8dcc;
        }
      }
      native_UILabel__UpdateNGUIText_aeae48(param_3);
      if (*(int *)((long)param_3 + 0x1e4) == 3) {
        lVar13 = _NGUIText_TypeInfo_12d53c0;
        if ((*(byte *)(_NGUIText_TypeInfo_12d53c0 + 0x133) >> 2 & 1) != 0) {
LAB_00ae8eb4:
          if (*(int *)(lVar13 + 0xe0) == 0) {
            native_sub_4327ec();
            lVar13 = _NGUIText_TypeInfo_12d53c0;
          }
        }
LAB_00ae8ec4:
        plVar14 = (long *)(lVar13 + 0xb8);
        *(undefined4 *)(*plVar14 + 0x44) = 1000000;
LAB_00ae8ecc:
        *(undefined4 *)(*plVar14 + 0x4c) = uVar5;
      }
      else if (*(int *)((long)param_3 + 0x1e4) == 2) {
        iVar16 = *(int *)((long)param_3 + 0x224);
        if (iVar16 < 1) {
          if (((*(ushort *)(_NGUIText_TypeInfo_12d53c0 + 0x132) >> 10 & 1) != 0) &&
             (*(int *)(_NGUIText_TypeInfo_12d53c0 + 0xe0) == 0)) {
            native_sub_4327ec();
          }
          lVar13 = _NGUIText_TypeInfo_12d53c0;
          *(undefined4 *)(*(long *)(_NGUIText_TypeInfo_12d53c0 + 0xb8) + 0x40) = 1000000;
          uVar3 = 1000000;
        }
        else {
          if (((*(ushort *)(_NGUIText_TypeInfo_12d53c0 + 0x132) >> 10 & 1) != 0) &&
             (*(int *)(_NGUIText_TypeInfo_12d53c0 + 0xe0) == 0)) {
            native_sub_4327ec();
          }
          lVar13 = _NGUIText_TypeInfo_12d53c0;
          *(int *)(*(long *)(_NGUIText_TypeInfo_12d53c0 + 0xb8) + 0x40) = iVar16;
          uVar3 = *(undefined4 *)((long)param_3 + 0x224);
        }
        *(undefined4 *)(*(long *)(lVar13 + 0xb8) + 0x48) = uVar3;
        lVar12 = param_3[0x45];
        if ((int)lVar12 < 1) {
          if ((*(ushort *)(lVar13 + 0x132) >> 10 & 1) != 0) goto LAB_00ae8eb4;
          goto LAB_00ae8ec4;
        }
        if (((*(ushort *)(lVar13 + 0x132) >> 10 & 1) != 0) && (*(int *)(lVar13 + 0xe0) == 0)) {
          native_sub_4327ec();
          lVar13 = _NGUIText_TypeInfo_12d53c0;
        }
        plVar14 = (long *)(lVar13 + 0xb8);
        *(int *)(*plVar14 + 0x44) = (int)lVar12;
        uVar5 = (undefined4)param_3[0x45];
        goto LAB_00ae8ecc;
      }
      if ((int)param_3[0x4f] < 1) {
        lVar13 = native_UIRect__get_cachedTransform_c27c58(param_3,0);
        native_UnityEngine_Vector3__get_one_776a20(0);
        if (lVar13 == 0) {
LAB_00ae93c0:
                    /* WARNING: Subroutine does not return */
          native_sub_432810();
        }
        native_UnityEngine_Transform__set_localScale_771e30(lVar13,0);
        param_3[0x4c] = _StringLiteral__12eaac0;
        native_sub_4326e0(param_3 + 0x4c);
        *(undefined4 *)((long)param_3 + 0x274) = 0x3f800000;
      }
      else {
        uVar9 = native_UILabel__get_keepCrisp_ae8860();
        iVar16 = (int)param_3[0x4f];
        if (0 < iVar16) {
          plVar14 = param_3 + 0x4c;
          while( true ) {
            if ((uVar9 & 1) == 0) {
              param_2 = (float)iVar16;
              *(float *)((long)param_3 + 0x274) = param_2 / (float)(int)param_3[0x4f];
              lVar13 = native_UILabel__get_font_ae77e8(param_3);
              if (lVar13 == 0) {
                uVar3 = *(undefined4 *)((long)param_3 + 0x274);
                if (((*(byte *)(_NGUIText_TypeInfo_12d53c0 + 0x133) >> 2 & 1) != 0) &&
                   (*(int *)(_NGUIText_TypeInfo_12d53c0 + 0xe0) == 0)) {
                  native_sub_4327ec(_NGUIText_TypeInfo_12d53c0);
                }
                lVar13 = _NGUIText_TypeInfo_12d53c0;
                *(undefined4 *)(*(long *)(_NGUIText_TypeInfo_12d53c0 + 0xb8) + 0x20) = uVar3;
              }
              else {
                lVar12 = param_3[0x36];
                iVar4 = native_UILabel__get_defaultFontSize_ae82a4(param_3);
                fVar18 = *(float *)((long)param_3 + 0x274);
                if (((*(byte *)(_NGUIText_TypeInfo_12d53c0 + 0x133) >> 2 & 1) != 0) &&
                   (*(int *)(_NGUIText_TypeInfo_12d53c0 + 0xe0) == 0)) {
                  native_sub_4327ec(_NGUIText_TypeInfo_12d53c0);
                }
                lVar13 = _NGUIText_TypeInfo_12d53c0;
                param_2 = (float)iVar4;
                *(float *)(*(long *)(_NGUIText_TypeInfo_12d53c0 + 0xb8) + 0x20) =
                     fVar18 * ((float)(int)lVar12 / param_2);
              }
            }
            else {
              *(int *)(param_3 + 0x4f) = iVar16;
              if (((*(byte *)(_NGUIText_TypeInfo_12d53c0 + 0x133) >> 2 & 1) != 0) &&
                 (*(int *)(_NGUIText_TypeInfo_12d53c0 + 0xe0) == 0)) {
                native_sub_4327ec(_NGUIText_TypeInfo_12d53c0);
              }
              lVar13 = _NGUIText_TypeInfo_12d53c0;
              *(int *)(*(long *)(_NGUIText_TypeInfo_12d53c0 + 0xb8) + 0x1c) = iVar16;
            }
            if (((*(byte *)(lVar13 + 0x133) >> 2 & 1) != 0) && (*(int *)(lVar13 + 0xe0) == 0)) {
              native_sub_4327ec(lVar13);
            }
            native_NGUIText__Update_8088c0(0,0);
            uVar8 = native_UILabel__get_printedText_aea210(param_3);
            cVar15 = '\0';
            if (*(int *)((long)param_3 + 0x1e4) == 1) {
              cVar15 = (char)param_3[0x44];
            }
            if (((*(byte *)(_NGUIText_TypeInfo_12d53c0 + 0x133) >> 2 & 1) != 0) &&
               (*(int *)(_NGUIText_TypeInfo_12d53c0 + 0xe0) == 0)) {
              native_sub_4327ec();
            }
            uVar10 = native_NGUIText__WrapText_80dd68(uVar8,plVar14,0,0,cVar15 != '\0',0);
            iVar4 = *(int *)((long)param_3 + 0x1e4);
            if (((uVar10 & 1) != 0) || (iVar4 != 0)) break;
LAB_00ae90a4:
            if ((iVar16 + -1 < 2) || (iVar16 = iVar16 + -2, iVar16 < 1)) goto LAB_00ae9104;
          }
          if (iVar4 == 2) {
            lVar13 = *plVar14;
            if (((*(byte *)(_NGUIText_TypeInfo_12d53c0 + 0x133) >> 2 & 1) != 0) &&
               (*(int *)(_NGUIText_TypeInfo_12d53c0 + 0xe0) == 0)) {
              native_sub_4327ec();
            }
            uVar3 = native_NGUIText__CalculatePrintedSize_80cd38(lVar13,0,0);
            *(undefined4 *)((long)param_3 + 0x26c) = uVar3;
            *(float *)(param_3 + 0x4e) = param_2;
            if (((uVar10 & 1) == 0) && (0 < *(int *)((long)param_3 + 0x224))) goto LAB_00ae90a4;
            uVar3 = (**(code **)(*param_3 + 0x3b8))(param_3,*(undefined8 *)(*param_3 + 0x3c0));
            uVar5 = native_UnityEngine_Mathf__RoundToInt_8e50f0
                              (*(undefined4 *)((long)param_3 + 0x26c),0);
            uVar6 = native_UnityEngine_Mathf__Max_8e4cd0(uVar3,uVar5,0);
            if (fVar17 != 1.0) {
              uVar6 = native_UnityEngine_Mathf__RoundToInt_8e50f0((float)(int)uVar6 / fVar17,0);
            }
            uVar3 = (**(code **)(*param_3 + 0x3c8))(param_3,*(undefined8 *)(*param_3 + 0x3d0));
            uVar5 = native_UnityEngine_Mathf__RoundToInt_8e50f0((int)param_3[0x4e],0);
            uVar7 = native_UnityEngine_Mathf__Max_8e4cd0(uVar3,uVar5,0);
            if (fVar19 != 1.0) {
              uVar7 = native_UnityEngine_Mathf__RoundToInt_8e50f0((float)(int)uVar7 / fVar19,0);
            }
            iVar16 = (uVar6 & 1) + uVar6;
            iVar4 = (uVar7 & 1) + uVar7;
            if ((*(int *)((long)param_3 + 0xa4) != iVar16) || ((int)param_3[0x15] != iVar4)) {
              lVar13 = param_3[0x18];
              *(int *)((long)param_3 + 0xa4) = iVar16;
              *(int *)(param_3 + 0x15) = iVar4;
              *(int *)((long)param_3 + 0x27c) = iVar16;
              *(int *)(param_3 + 0x50) = iVar4;
joined_r0x00ae9304:
              if (lVar13 != 0) {
                native_UIWidget_OnDimensionsChanged__Invoke_55ba68(lVar13,0);
              }
            }
          }
          else {
            lVar13 = *plVar14;
            if (iVar4 == 3) {
              if (((*(ushort *)(_NGUIText_TypeInfo_12d53c0 + 0x132) >> 10 & 1) != 0) &&
                 (*(int *)(_NGUIText_TypeInfo_12d53c0 + 0xe0) == 0)) {
                native_sub_4327ec();
              }
              uVar3 = native_NGUIText__CalculatePrintedSize_80cd38(lVar13,0,0);
              *(undefined4 *)((long)param_3 + 0x26c) = uVar3;
              *(float *)(param_3 + 0x4e) = param_2;
              uVar3 = (**(code **)(*param_3 + 0x3c8))(param_3,*(undefined8 *)(*param_3 + 0x3d0));
              uVar5 = native_UnityEngine_Mathf__RoundToInt_8e50f0((int)param_3[0x4e],0);
              uVar6 = native_UnityEngine_Mathf__Max_8e4cd0(uVar3,uVar5,0);
              if (fVar19 != 1.0) {
                uVar6 = native_UnityEngine_Mathf__RoundToInt_8e50f0((float)(int)uVar6 / fVar19,0);
              }
              iVar16 = (uVar6 & 1) + uVar6;
              if ((int)param_3[0x15] != iVar16) {
                lVar13 = param_3[0x18];
                *(int *)(param_3 + 0x15) = iVar16;
                *(int *)(param_3 + 0x50) = iVar16;
                goto joined_r0x00ae9304;
              }
            }
            else {
              if (((*(ushort *)(_NGUIText_TypeInfo_12d53c0 + 0x132) >> 10 & 1) != 0) &&
                 (*(int *)(_NGUIText_TypeInfo_12d53c0 + 0xe0) == 0)) {
                native_sub_4327ec();
              }
              uVar3 = native_NGUIText__CalculatePrintedSize_80cd38(lVar13,0,0);
              *(undefined4 *)((long)param_3 + 0x26c) = uVar3;
              *(float *)(param_3 + 0x4e) = param_2;
            }
          }
        }
      }
LAB_00ae9104:
      if (((*(byte *)(_NGUIText_TypeInfo_12d53c0 + 0x133) >> 2 & 1) != 0) &&
         (*(int *)(_NGUIText_TypeInfo_12d53c0 + 0xe0) == 0)) {
        native_sub_4327ec();
      }
      puVar11 = *(undefined8 **)(_NGUIText_TypeInfo_12d53c0 + 0xb8);
      *puVar11 = 0;
      native_sub_4326e0(puVar11,0);
      plVar14 = (long *)(*(long *)(_NGUIText_TypeInfo_12d53c0 + 0xb8) + 8);
      *plVar14 = 0;
      goto native_sub_41086c;
    }
  }
  plVar14 = param_3 + 0x4c;
  param_3[0x4c] = _StringLiteral__12eaac0;
native_sub_41086c:
  if (iRam0000000001345318 != 0) {
    puVar1 = (ulong *)(((ulong)plVar14 >> 0x12 & 0x7fff) * 8 + 0x138ecd8);
    do {
      cVar15 = '\x01';
      bVar2 = (bool)ExclusiveMonitorPass(puVar1,0x10);
      if (bVar2) {
        *puVar1 = *puVar1 | 1L << ((ulong)plVar14 >> 0xc & 0x3f);
        cVar15 = ExclusiveMonitorsStatus();
      }
    } while (cVar15 != '\0');
  }
  return;
}



/* UILabel$$OnInit @ 0xae98ac
 * void UILabel__OnInit (UILabel_o* __this, const MethodInfo* method); */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* UILabel$$OnInit
   void UILabel__OnInit (UILabel_o* __this, const MethodInfo* method); */

void native_UILabel__OnInit_ae98ac(long *param_1)

{
  undefined4 uVar1;
  undefined8 uVar2;
  ulong uVar3;
  long lVar4;
  long *plVar5;
  long lVar6;
  long *plVar7;
  
  if ((bRam000000000134200a & 1) == 0) {
    native_sub_43273c(&Method_BetterList_UILabel__Add___12d89f0);
    native_sub_43273c(&UnityEngine_Object_TypeInfo_12d54e0);
    native_sub_43273c(&UILabel_TypeInfo_12d6468);
    bRam000000000134200a = 1;
  }
  native_UIWidget__OnInit_94bac8(param_1,0);
  if (((*(byte *)(_UILabel_TypeInfo_12d6468 + 0x133) >> 2 & 1) != 0) &&
     (*(int *)(_UILabel_TypeInfo_12d6468 + 0xe0) == 0)) {
    native_sub_4327ec();
  }
  if (**(long **)(_UILabel_TypeInfo_12d6468 + 0xb8) == 0) {
                    /* WARNING: Subroutine does not return */
    native_sub_432810();
  }
  native_BetterList_object___Add_ba24d8
            (**(long **)(_UILabel_TypeInfo_12d6468 + 0xb8),param_1,
             _Method_BetterList_UILabel__Add___12d89f0);
  uVar2 = native_UILabel__get_trueTypeFont_ae74d0(param_1);
  native_UILabel__SetActiveFont_ae7d78(param_1,uVar2);
  if (((char)param_1[0xb] != '\0') || (*(char *)((long)param_1 + 0x25c) != '\0')) {
    native_UILabel__ProcessAndRequest_ae7fdc(param_1);
  }
  uVar3 = native_UILabel__get_separateSymbols_ae99d4(param_1);
  if ((uVar3 & 1) != 0) {
    lVar6 = param_1[0x49];
    if (((*(byte *)(_UnityEngine_Object_TypeInfo_12d54e0 + 0x133) >> 2 & 1) != 0) &&
       (*(int *)(_UnityEngine_Object_TypeInfo_12d54e0 + 0xe0) == 0)) {
      native_sub_4327ec();
    }
    uVar3 = native_UnityEngine_Object__op_Equality_8e9a3c(lVar6,0,0);
    if ((uVar3 & 1) != 0) {
      if ((bRam000000000134200d & 1) == 0) {
        native_sub_43273c(&Method_UnityEngine_GameObject_AddComponent_UILabelSymbols____12e48e8);
        native_sub_43273c(&NGUITools_TypeInfo_12d53c8);
        native_sub_43273c(&UnityEngine_Object_TypeInfo_12d54e0);
        native_sub_43273c(&StringLiteral_Label_Symbols_12ef500);
        bRam000000000134200d = 1;
      }
      lVar6 = param_1[0x49];
      if (((*(byte *)(_UnityEngine_Object_TypeInfo_12d54e0 + 0x133) >> 2 & 1) != 0) &&
         (*(int *)(_UnityEngine_Object_TypeInfo_12d54e0 + 0xe0) == 0)) {
        native_sub_4327ec();
      }
      uVar3 = native_UnityEngine_Object__op_Equality_8e9a3c(lVar6,0,0);
      if ((uVar3 & 1) != 0) {
        uVar2 = native_UnityEngine_Component__get_gameObject_8da66c(param_1,0);
        if (((*(byte *)(_NGUITools_TypeInfo_12d53c8 + 0x133) >> 2 & 1) != 0) &&
           (*(int *)(_NGUITools_TypeInfo_12d53c8 + 0xe0) == 0)) {
          native_sub_4327ec(_NGUITools_TypeInfo_12d53c8);
        }
        lVar6 = native_NGUITools__AddChild_72eda0(uVar2,0,0);
        if (lVar6 != 0) {
          plVar5 = param_1 + 0x49;
          native_UnityEngine_GameObject__SetActive_8de698(lVar6,0,0);
          native_UnityEngine_Object__set_name_8e9c08(lVar6,_StringLiteral_Label_Symbols_12ef500,0);
          lVar4 = native_UnityEngine_GameObject__AddComponent_ActiveAnimation__4a2118
                            (lVar6,
                             _Method_UnityEngine_GameObject_AddComponent_UILabelSymbols____12e48e8);
          *plVar5 = lVar4;
          native_sub_4326e0(plVar5,lVar4);
          if ((*plVar5 != 0) &&
             (lVar4 = native_UnityEngine_Component__get_gameObject_8da66c(*plVar5,0), lVar4 != 0)) {
            native_UnityEngine_Object__set_hideFlags_8ea820(lVar4,0x3d,0);
            lVar4 = *plVar5;
            if (lVar4 != 0) {
              *(long **)(lVar4 + 400) = param_1;
              native_sub_4326e0(lVar4 + 400,param_1);
              plVar7 = (long *)param_1[0x49];
              uVar1 = (**(code **)(*param_1 + 0x2a8))(param_1,*(undefined8 *)(*param_1 + 0x2b0));
              if (plVar7 != (long *)0x0) {
                (**(code **)(*plVar7 + 0x2b8))(plVar7,uVar1,*(undefined8 *)(*plVar7 + 0x2c0));
                plVar7 = (long *)*plVar5;
                if (plVar7 != (long *)0x0) {
                  (**(code **)(*plVar7 + 0x2d8))
                            (plVar7,(int)param_1[0x46],*(undefined8 *)(*plVar7 + 0x2e0));
                  if (param_1[0x49] != 0) {
                    lVar4 = *(long *)(param_1[0x49] + 0x18);
                    uVar2 = native_UnityEngine_Component__get_transform_8da62c(param_1,0);
                    if (lVar4 != 0) {
                      native_UIRect_AnchorPoint__Set_558f94(0,0,lVar4,uVar2,0);
                      if (*plVar5 != 0) {
                        lVar4 = *(long *)(*plVar5 + 0x20);
                        uVar2 = native_UnityEngine_Component__get_transform_8da62c(param_1,0);
                        if (lVar4 != 0) {
                          native_UIRect_AnchorPoint__Set_558f94(0x3f800000,0,lVar4,uVar2,0);
                          if (*plVar5 != 0) {
                            lVar4 = *(long *)(*plVar5 + 0x30);
                            uVar2 = native_UnityEngine_Component__get_transform_8da62c(param_1,0);
                            if (lVar4 != 0) {
                              native_UIRect_AnchorPoint__Set_558f94(0x3f800000,0,lVar4,uVar2,0);
                              if (*plVar5 != 0) {
                                lVar4 = *(long *)(*plVar5 + 0x28);
                                uVar2 = native_UnityEngine_Component__get_transform_8da62c
                                                  (param_1,0);
                                if (lVar4 != 0) {
                                  native_UIRect_AnchorPoint__Set_558f94(0,0,lVar4,uVar2,0);
                                  if (*plVar5 != 0) {
                                    *(undefined4 *)(*plVar5 + 0x38) = 1;
                                    if (*plVar5 != 0) {
                                      native_UIRect__ResetAnchors_c2d260(*plVar5,0);
                                      if (*plVar5 != 0) {
                                        native_UIRect__UpdateAnchors_c2ea10(*plVar5,0);
                                        native_UnityEngine_GameObject__SetActive_8de698(lVar6,1,0);
                                        plVar5 = (long *)*plVar5;
                                        if (plVar5 != (long *)0x0) {
                                          if ((char)plVar5[0x11] != '\0') {
                                            return;
                                          }
                                          *(undefined1 *)(plVar5 + 0x11) = 1;
                                          (**(code **)(*plVar5 + 0x228))
                                                    (plVar5,*(undefined8 *)(*plVar5 + 0x230));
                    /* WARNING: Could not recover jumptable at 0x00c2e628. Too many branches */
                    /* WARNING: Treating indirect jump as call */
                                          (**(code **)(*plVar5 + 0x288))
                                                    (plVar5,*(undefined8 *)(*plVar5 + 0x290));
                                          return;
                                        }
                                      }
                                    }
                                  }
                                }
                              }
                            }
                          }
                        }
                      }
                    }
                  }
                }
              }
            }
          }
        }
                    /* WARNING: Subroutine does not return */
        native_sub_432810();
      }
      return;
    }
  }
  return;
}



/* UILabel$$get_pivot @ 0xae9dcc
 * int32_t UILabel__get_pivot (UILabel_o* __this, const MethodInfo* method); */

/* UILabel$$get_pivot
   int32_t UILabel__get_pivot (UILabel_o* __this, const MethodInfo* method); */

undefined4 native_UILabel__get_pivot_ae9dcc(long param_1)

{
  return *(undefined4 *)(param_1 + 0xa0);
}



/* UILabel$$set_pivot @ 0xae9dd4
 * void UILabel__set_pivot (UILabel_o* __this, int32_t value, const MethodInfo* method); */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* UILabel$$set_pivot
   void UILabel__set_pivot (UILabel_o* __this, int32_t value, const MethodInfo* method); */

void native_UILabel__set_pivot_ae9dd4(long param_1,undefined4 param_2)

{
  ulong uVar1;
  long *plVar2;
  undefined8 uVar3;
  
  if ((bRam000000000134200b & 1) == 0) {
    native_sub_43273c(&UnityEngine_Object_TypeInfo_12d54e0);
    bRam000000000134200b = 1;
  }
  native_UIWidget__set_pivot_949adc(param_1,param_2,0);
  uVar3 = *(undefined8 *)(param_1 + 0x248);
  if (((*(byte *)(_UnityEngine_Object_TypeInfo_12d54e0 + 0x133) >> 2 & 1) != 0) &&
     (*(int *)(_UnityEngine_Object_TypeInfo_12d54e0 + 0xe0) == 0)) {
    native_sub_4327ec();
  }
  uVar1 = native_UnityEngine_Object__op_Inequality_8d76fc(uVar3,0,0);
  if ((uVar1 & 1) != 0) {
    plVar2 = *(long **)(param_1 + 0x248);
    if (plVar2 != (long *)0x0) {
                    /* WARNING: Could not recover jumptable at 0x00ae9e78. Too many branches */
                    /* WARNING: Treating indirect jump as call */
      (**(code **)(*plVar2 + 0x2b8))(plVar2,param_2,*(undefined8 *)(*plVar2 + 0x2c0));
      return;
    }
                    /* WARNING: Subroutine does not return */
    native_sub_432810();
  }
  return;
}



/* UILabel$$get_symbolDepth @ 0xae9e90
 * int32_t UILabel__get_symbolDepth (UILabel_o* __this, const MethodInfo* method); */

/* UILabel$$get_symbolDepth
   int32_t UILabel__get_symbolDepth (UILabel_o* __this, const MethodInfo* method); */

undefined4 native_UILabel__get_symbolDepth_ae9e90(long param_1)

{
  return *(undefined4 *)(param_1 + 0x230);
}



/* UILabel$$set_symbolDepth @ 0xae9e98
 * void UILabel__set_symbolDepth (UILabel_o* __this, int32_t value, const MethodInfo* method); */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* UILabel$$set_symbolDepth
   void UILabel__set_symbolDepth (UILabel_o* __this, int32_t value, const MethodInfo* method); */

void native_UILabel__set_symbolDepth_ae9e98(long *param_1,int param_2)

{
  ulong uVar1;
  long *plVar2;
  long lVar3;
  
  if ((bRam000000000134200c & 1) == 0) {
    native_sub_43273c(&UnityEngine_Object_TypeInfo_12d54e0);
    bRam000000000134200c = 1;
  }
  if ((int)param_1[0x46] == param_2) {
    return;
  }
  *(int *)(param_1 + 0x46) = param_2;
  lVar3 = param_1[0x49];
  if (((*(byte *)(_UnityEngine_Object_TypeInfo_12d54e0 + 0x133) >> 2 & 1) != 0) &&
     (*(int *)(_UnityEngine_Object_TypeInfo_12d54e0 + 0xe0) == 0)) {
    native_sub_4327ec();
  }
  uVar1 = native_UnityEngine_Object__op_Inequality_8d76fc(lVar3,0,0);
  if ((uVar1 & 1) != 0) {
    plVar2 = (long *)param_1[0x49];
    if (plVar2 == (long *)0x0) {
                    /* WARNING: Subroutine does not return */
      native_sub_432810();
    }
    (**(code **)(*plVar2 + 0x2d8))(plVar2,param_2,*(undefined8 *)(*plVar2 + 0x2e0));
  }
                    /* WARNING: Could not recover jumptable at 0x00ae9f60. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(*param_1 + 0x378))(param_1,*(undefined8 *)(*param_1 + 0x380));
  return;
}



/* UILabel$$CreateSymbolLabel @ 0xae9adc
 * void UILabel__CreateSymbolLabel (UILabel_o* __this, const MethodInfo* method); */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* UILabel$$CreateSymbolLabel
   void UILabel__CreateSymbolLabel (UILabel_o* __this, const MethodInfo* method); */

void native_UILabel__CreateSymbolLabel_ae9adc(long *param_1)

{
  undefined4 uVar1;
  ulong uVar2;
  undefined8 uVar3;
  long lVar4;
  long *plVar5;
  long lVar6;
  long *plVar7;
  
  if ((bRam000000000134200d & 1) == 0) {
    native_sub_43273c(&Method_UnityEngine_GameObject_AddComponent_UILabelSymbols____12e48e8);
    native_sub_43273c(&NGUITools_TypeInfo_12d53c8);
    native_sub_43273c(&UnityEngine_Object_TypeInfo_12d54e0);
    native_sub_43273c(&StringLiteral_Label_Symbols_12ef500);
    bRam000000000134200d = 1;
  }
  lVar6 = param_1[0x49];
  if (((*(byte *)(_UnityEngine_Object_TypeInfo_12d54e0 + 0x133) >> 2 & 1) != 0) &&
     (*(int *)(_UnityEngine_Object_TypeInfo_12d54e0 + 0xe0) == 0)) {
    native_sub_4327ec();
  }
  uVar2 = native_UnityEngine_Object__op_Equality_8e9a3c(lVar6,0,0);
  if ((uVar2 & 1) != 0) {
    uVar3 = native_UnityEngine_Component__get_gameObject_8da66c(param_1,0);
    if (((*(byte *)(_NGUITools_TypeInfo_12d53c8 + 0x133) >> 2 & 1) != 0) &&
       (*(int *)(_NGUITools_TypeInfo_12d53c8 + 0xe0) == 0)) {
      native_sub_4327ec(_NGUITools_TypeInfo_12d53c8);
    }
    lVar6 = native_NGUITools__AddChild_72eda0(uVar3,0,0);
    if (lVar6 != 0) {
      plVar5 = param_1 + 0x49;
      native_UnityEngine_GameObject__SetActive_8de698(lVar6,0,0);
      native_UnityEngine_Object__set_name_8e9c08(lVar6,_StringLiteral_Label_Symbols_12ef500,0);
      lVar4 = native_UnityEngine_GameObject__AddComponent_ActiveAnimation__4a2118
                        (lVar6,_Method_UnityEngine_GameObject_AddComponent_UILabelSymbols____12e48e8
                        );
      *plVar5 = lVar4;
      native_sub_4326e0(plVar5,lVar4);
      if ((*plVar5 != 0) &&
         (lVar4 = native_UnityEngine_Component__get_gameObject_8da66c(*plVar5,0), lVar4 != 0)) {
        native_UnityEngine_Object__set_hideFlags_8ea820(lVar4,0x3d,0);
        lVar4 = *plVar5;
        if (lVar4 != 0) {
          *(long **)(lVar4 + 400) = param_1;
          native_sub_4326e0(lVar4 + 400,param_1);
          plVar7 = (long *)param_1[0x49];
          uVar1 = (**(code **)(*param_1 + 0x2a8))(param_1,*(undefined8 *)(*param_1 + 0x2b0));
          if (plVar7 != (long *)0x0) {
            (**(code **)(*plVar7 + 0x2b8))(plVar7,uVar1,*(undefined8 *)(*plVar7 + 0x2c0));
            plVar7 = (long *)*plVar5;
            if (plVar7 != (long *)0x0) {
              (**(code **)(*plVar7 + 0x2d8))
                        (plVar7,(int)param_1[0x46],*(undefined8 *)(*plVar7 + 0x2e0));
              if (param_1[0x49] != 0) {
                lVar4 = *(long *)(param_1[0x49] + 0x18);
                uVar3 = native_UnityEngine_Component__get_transform_8da62c(param_1,0);
                if (lVar4 != 0) {
                  native_UIRect_AnchorPoint__Set_558f94(0,0,lVar4,uVar3,0);
                  if (*plVar5 != 0) {
                    lVar4 = *(long *)(*plVar5 + 0x20);
                    uVar3 = native_UnityEngine_Component__get_transform_8da62c(param_1,0);
                    if (lVar4 != 0) {
                      native_UIRect_AnchorPoint__Set_558f94(0x3f800000,0,lVar4,uVar3,0);
                      if (*plVar5 != 0) {
                        lVar4 = *(long *)(*plVar5 + 0x30);
                        uVar3 = native_UnityEngine_Component__get_transform_8da62c(param_1,0);
                        if (lVar4 != 0) {
                          native_UIRect_AnchorPoint__Set_558f94(0x3f800000,0,lVar4,uVar3,0);
                          if (*plVar5 != 0) {
                            lVar4 = *(long *)(*plVar5 + 0x28);
                            uVar3 = native_UnityEngine_Component__get_transform_8da62c(param_1,0);
                            if (lVar4 != 0) {
                              native_UIRect_AnchorPoint__Set_558f94(0,0,lVar4,uVar3,0);
                              if (*plVar5 != 0) {
                                *(undefined4 *)(*plVar5 + 0x38) = 1;
                                if (*plVar5 != 0) {
                                  native_UIRect__ResetAnchors_c2d260(*plVar5,0);
                                  if (*plVar5 != 0) {
                                    native_UIRect__UpdateAnchors_c2ea10(*plVar5,0);
                                    native_UnityEngine_GameObject__SetActive_8de698(lVar6,1,0);
                                    plVar5 = (long *)*plVar5;
                                    if (plVar5 != (long *)0x0) {
                                      if ((char)plVar5[0x11] != '\0') {
                                        return;
                                      }
                                      *(undefined1 *)(plVar5 + 0x11) = 1;
                                      (**(code **)(*plVar5 + 0x228))
                                                (plVar5,*(undefined8 *)(*plVar5 + 0x230));
                    /* WARNING: Could not recover jumptable at 0x00c2e628. Too many branches */
                    /* WARNING: Treating indirect jump as call */
                                      (**(code **)(*plVar5 + 0x288))
                                                (plVar5,*(undefined8 *)(*plVar5 + 0x290));
                                      return;
                                    }
                                  }
                                }
                              }
                            }
                          }
                        }
                      }
                    }
                  }
                }
              }
            }
          }
        }
      }
    }
                    /* WARNING: Subroutine does not return */
    native_sub_432810();
  }
  return;
}



/* UILabel$$OnDisable @ 0xae9f68
 * void UILabel__OnDisable (UILabel_o* __this, const MethodInfo* method); */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* UILabel$$OnDisable
   void UILabel__OnDisable (UILabel_o* __this, const MethodInfo* method); */

void native_UILabel__OnDisable_ae9f68(long param_1)

{
  ulong uVar1;
  long lVar2;
  undefined8 uVar3;
  long *plVar4;
  
  if ((bRam000000000134200e & 1) == 0) {
    native_sub_43273c(&Method_BetterList_UILabel__Remove___12d89f8);
    native_sub_43273c(&UnityEngine_Object_TypeInfo_12d54e0);
    native_sub_43273c(&UILabel_TypeInfo_12d6468);
    bRam000000000134200e = 1;
  }
  native_UILabel__SetActiveFont_ae7d78(param_1,0);
  if (((*(byte *)(_UILabel_TypeInfo_12d6468 + 0x133) >> 2 & 1) != 0) &&
     (*(int *)(_UILabel_TypeInfo_12d6468 + 0xe0) == 0)) {
    native_sub_4327ec();
  }
  if (**(long **)(_UILabel_TypeInfo_12d6468 + 0xb8) != 0) {
    native_BetterList_object___Remove_ba2804
              (**(long **)(_UILabel_TypeInfo_12d6468 + 0xb8),param_1,
               _Method_BetterList_UILabel__Remove___12d89f8);
    uVar3 = *(undefined8 *)(param_1 + 0x248);
    if (((*(byte *)(_UnityEngine_Object_TypeInfo_12d54e0 + 0x133) >> 2 & 1) != 0) &&
       (*(int *)(_UnityEngine_Object_TypeInfo_12d54e0 + 0xe0) == 0)) {
      native_sub_4327ec();
    }
    uVar1 = native_UnityEngine_Object__op_Inequality_8d76fc(uVar3,0,0);
    if ((uVar1 & 1) != 0) {
      plVar4 = (long *)(param_1 + 0x248);
      if (*plVar4 == 0) goto LAB_00aea0e8;
      lVar2 = native_UnityEngine_Component__get_gameObject_8da66c(*plVar4,0);
      uVar1 = native_UnityEngine_Application__get_isPlaying_8d60cc(0);
      if ((uVar1 & 1) == 0) {
        if (((*(byte *)(_UnityEngine_Object_TypeInfo_12d54e0 + 0x133) >> 2 & 1) != 0) &&
           (*(int *)(_UnityEngine_Object_TypeInfo_12d54e0 + 0xe0) == 0)) {
          native_sub_4327ec();
        }
        native_UnityEngine_Object__DestroyImmediate_8ea648(lVar2,0);
      }
      else {
        if (lVar2 == 0) goto LAB_00aea0e8;
        native_UnityEngine_GameObject__SetActive_8de698(lVar2,0,0);
        if (((*(byte *)(_UnityEngine_Object_TypeInfo_12d54e0 + 0x133) >> 2 & 1) != 0) &&
           (*(int *)(_UnityEngine_Object_TypeInfo_12d54e0 + 0xe0) == 0)) {
          native_sub_4327ec();
        }
        native_UnityEngine_Object__Destroy_8ea574(lVar2,0);
      }
      *plVar4 = 0;
      native_sub_4326e0(plVar4,0);
    }
    native_UIWidget__RemoveFromPanel_944688(param_1,0);
    if ((bRam0000000001342710 & 1) == 0) {
      native_sub_43273c(&Method_BetterList_UIRect__Remove___12d8a10,0);
      native_sub_43273c(&UnityEngine_Object_TypeInfo_12d54e0);
      bRam0000000001342710 = 1;
    }
    plVar4 = (long *)(param_1 + 0x70);
    lVar2 = *plVar4;
    if (((*(byte *)(_UnityEngine_Object_TypeInfo_12d54e0 + 0x133) >> 2 & 1) != 0) &&
       (*(int *)(_UnityEngine_Object_TypeInfo_12d54e0 + 0xe0) == 0)) {
      native_sub_4327ec();
    }
    uVar1 = native_UnityEngine_Object__op_Implicit_8e1b98(lVar2,0);
    if ((uVar1 & 1) != 0) {
      if ((*plVar4 == 0) || (lVar2 = *(long *)(*plVar4 + 0x50), lVar2 == 0)) {
                    /* WARNING: Subroutine does not return */
        native_sub_432810();
      }
      native_BetterList_object___Remove_ba2804
                (lVar2,param_1,_Method_BetterList_UIRect__Remove___12d8a10);
    }
    *(undefined8 *)(param_1 + 0x70) = 0;
    native_sub_4326e0(plVar4,0);
    *(undefined8 *)(param_1 + 0x68) = 0;
    native_sub_4326e0((undefined8 *)(param_1 + 0x68),0);
    *(undefined1 *)(param_1 + 0x78) = 0;
    *(undefined1 *)(param_1 + 0x59) = 0;
    return;
  }
LAB_00aea0e8:
                    /* WARNING: Subroutine does not return */
  native_sub_432810();
}



/* UILabel$$SetDirty @ 0xaea0ec
 * void UILabel__SetDirty (UILabel_o* __this, const MethodInfo* method); */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* UILabel$$SetDirty
   void UILabel__SetDirty (UILabel_o* __this, const MethodInfo* method); */

void native_UILabel__SetDirty_aea0ec(long param_1)

{
  ulong *puVar1;
  char cVar2;
  bool bVar3;
  ulong uVar4;
  long *plVar5;
  undefined8 uVar6;
  
  if ((bRam000000000134200f & 1) == 0) {
    native_sub_43273c(&NGUITools_TypeInfo_12d53c8);
    native_sub_43273c(&UnityEngine_Object_TypeInfo_12d54e0);
    bRam000000000134200f = 1;
  }
  native_UIWidget__SetDirty_94b5f8(param_1,0);
  uVar4 = native_UILabel__get_separateSymbols_ae99d4(param_1);
  if ((uVar4 & 1) == 0) {
    uVar6 = *(undefined8 *)(param_1 + 0x248);
    if (((*(byte *)(_UnityEngine_Object_TypeInfo_12d54e0 + 0x133) >> 2 & 1) != 0) &&
       (*(int *)(_UnityEngine_Object_TypeInfo_12d54e0 + 0xe0) == 0)) {
      native_sub_4327ec();
    }
    uVar4 = native_UnityEngine_Object__op_Inequality_8d76fc(uVar6,0,0);
    if ((uVar4 & 1) == 0) {
      return;
    }
    plVar5 = (long *)(param_1 + 0x248);
    if (*plVar5 != 0) {
      uVar6 = native_UnityEngine_Component__get_gameObject_8da66c(*plVar5,0);
      if (((*(byte *)(_NGUITools_TypeInfo_12d53c8 + 0x133) >> 2 & 1) != 0) &&
         (*(int *)(_NGUITools_TypeInfo_12d53c8 + 0xe0) == 0)) {
        native_sub_4327ec(_NGUITools_TypeInfo_12d53c8);
      }
      native_NGUITools__Destroy_731234(uVar6,0);
      *plVar5 = 0;
      if (iRam0000000001345318 != 0) {
        puVar1 = (ulong *)(((ulong)plVar5 >> 0x12 & 0x7fff) * 8 + 0x138ecd8);
        do {
          cVar2 = '\x01';
          bVar3 = (bool)ExclusiveMonitorPass(puVar1,0x10);
          if (bVar3) {
            *puVar1 = *puVar1 | 1L << ((ulong)plVar5 >> 0xc & 0x3f);
            cVar2 = ExclusiveMonitorsStatus();
          }
        } while (cVar2 != '\0');
      }
      return;
    }
  }
  else {
    native_UILabel__CreateSymbolLabel_ae9adc(param_1);
    plVar5 = *(long **)(param_1 + 0x248);
    if (plVar5 != (long *)0x0) {
                    /* WARNING: Could not recover jumptable at 0x00aea164. Too many branches */
                    /* WARNING: Treating indirect jump as call */
      (**(code **)(*plVar5 + 0x368))(plVar5,*(undefined8 *)(*plVar5 + 0x370));
      return;
    }
  }
                    /* WARNING: Subroutine does not return */
  native_sub_432810();
}



/* UILabel$$SetActiveFont @ 0xae7d78
 * void UILabel__SetActiveFont (UILabel_o* __this, UnityEngine_Font_o* fnt, const MethodInfo* method); */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* UILabel$$SetActiveFont
   void UILabel__SetActiveFont (UILabel_o* __this, UnityEngine_Font_o* fnt, const MethodInfo*
   method); */

void native_UILabel__SetActiveFont_ae7d78(long param_1,undefined8 param_2)

{
  undefined8 *puVar1;
  ulong uVar2;
  long lVar3;
  undefined8 uVar4;
  int iStack_34;
  
  if ((bRam0000000001342010 & 1) == 0) {
    native_sub_43273c(&Method_System_Collections_Generic_Dictionary_Font__int__Remove___12d8f18);
    native_sub_43273c(&Method_System_Collections_Generic_Dictionary_Font__int__TryGetValue___12d8f20
                     );
    native_sub_43273c(&Method_System_Collections_Generic_Dictionary_Font__int__set_Item___12d8f28);
    native_sub_43273c(&UnityEngine_Object_TypeInfo_12d54e0);
    native_sub_43273c(&UILabel_TypeInfo_12d6468);
    bRam0000000001342010 = 1;
  }
  iStack_34 = 0;
  uVar4 = *(undefined8 *)(param_1 + 0x250);
  if (((*(byte *)(_UnityEngine_Object_TypeInfo_12d54e0 + 0x133) >> 2 & 1) != 0) &&
     (*(int *)(_UnityEngine_Object_TypeInfo_12d54e0 + 0xe0) == 0)) {
    native_sub_4327ec();
  }
  uVar2 = native_UnityEngine_Object__op_Inequality_8d76fc(uVar4,param_2,0);
  if ((uVar2 & 1) != 0) {
    puVar1 = (undefined8 *)(param_1 + 0x250);
    uVar4 = *puVar1;
    if (((*(byte *)(_UnityEngine_Object_TypeInfo_12d54e0 + 0x133) >> 2 & 1) != 0) &&
       (*(int *)(_UnityEngine_Object_TypeInfo_12d54e0 + 0xe0) == 0)) {
      native_sub_4327ec();
    }
    uVar2 = native_UnityEngine_Object__op_Inequality_8d76fc(uVar4,0,0);
    if ((uVar2 & 1) != 0) {
      if (((*(byte *)(_UILabel_TypeInfo_12d6468 + 0x133) >> 2 & 1) != 0) &&
         (*(int *)(_UILabel_TypeInfo_12d6468 + 0xe0) == 0)) {
        native_sub_4327ec();
      }
      lVar3 = *(long *)(*(long *)(_UILabel_TypeInfo_12d6468 + 0xb8) + 8);
      if (lVar3 == 0) goto LAB_00ae7fd8;
      uVar2 = native_System_Collections_Generic_Dictionary_Font__int___TryGetValue_cd92ec
                        (lVar3,uVar4,&iStack_34,
                         _Method_System_Collections_Generic_Dictionary_Font__int__TryGetValue___12d8f20
                        );
      if ((uVar2 & 1) != 0) {
        iStack_34 = iStack_34 + -1;
        iStack_34 = native_UnityEngine_Mathf__Max_8e4cd0(0,iStack_34,0);
        if (iStack_34 == 0) {
          if (((*(ushort *)(_UILabel_TypeInfo_12d6468 + 0x132) >> 10 & 1) != 0) &&
             (*(int *)(_UILabel_TypeInfo_12d6468 + 0xe0) == 0)) {
            native_sub_4327ec(_UILabel_TypeInfo_12d6468);
          }
          lVar3 = *(long *)(*(long *)(_UILabel_TypeInfo_12d6468 + 0xb8) + 8);
          if (lVar3 == 0) goto LAB_00ae7fd8;
          native_System_Collections_Generic_Dictionary_Font__int___Remove_cd8f58
                    (lVar3,uVar4,
                     _Method_System_Collections_Generic_Dictionary_Font__int__Remove___12d8f18);
        }
        else {
          if (((*(ushort *)(_UILabel_TypeInfo_12d6468 + 0x132) >> 10 & 1) != 0) &&
             (*(int *)(_UILabel_TypeInfo_12d6468 + 0xe0) == 0)) {
            native_sub_4327ec(_UILabel_TypeInfo_12d6468);
          }
          lVar3 = *(long *)(*(long *)(_UILabel_TypeInfo_12d6468 + 0xb8) + 8);
          if (lVar3 == 0) goto LAB_00ae7fd8;
          native_System_Collections_Generic_Dictionary_Font__int___set_Item_cd7510
                    (lVar3,uVar4,iStack_34,
                     _Method_System_Collections_Generic_Dictionary_Font__int__set_Item___12d8f28);
        }
      }
    }
    *puVar1 = param_2;
    native_sub_4326e0(puVar1,param_2);
    if (((*(byte *)(_UnityEngine_Object_TypeInfo_12d54e0 + 0x133) >> 2 & 1) != 0) &&
       (*(int *)(_UnityEngine_Object_TypeInfo_12d54e0 + 0xe0) == 0)) {
      native_sub_4327ec();
    }
    uVar2 = native_UnityEngine_Object__op_Inequality_8d76fc(param_2,0,0);
    if ((uVar2 & 1) != 0) {
      if (((*(byte *)(_UILabel_TypeInfo_12d6468 + 0x133) >> 2 & 1) != 0) &&
         (*(int *)(_UILabel_TypeInfo_12d6468 + 0xe0) == 0)) {
        native_sub_4327ec();
      }
      lVar3 = *(long *)(*(long *)(_UILabel_TypeInfo_12d6468 + 0xb8) + 8);
      if (lVar3 == 0) {
LAB_00ae7fd8:
                    /* WARNING: Subroutine does not return */
        native_sub_432810();
      }
      native_System_Collections_Generic_Dictionary_Font__int___set_Item_cd7510
                (lVar3,param_2,1,
                 _Method_System_Collections_Generic_Dictionary_Font__int__set_Item___12d8f28);
    }
  }
  return;
}



/* UILabel$$get_printedText @ 0xaea210
 * System_String_o* UILabel__get_printedText (UILabel_o* __this, const MethodInfo* method); */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* UILabel$$get_printedText
   System_String_o* UILabel__get_printedText (UILabel_o* __this, const MethodInfo* method); */

undefined8 native_UILabel__get_printedText_aea210(long param_1)

{
  long *plVar1;
  int iVar2;
  ushort uVar3;
  bool bVar4;
  long lVar5;
  undefined8 *puVar6;
  ulong uVar7;
  ulong uVar8;
  long lVar9;
  long *plVar10;
  undefined8 uVar11;
  undefined8 uVar12;
  long lVar13;
  long lVar14;
  int *piVar15;
  code *pcVar16;
  long lVar17;
  long *plVar18;
  long lStack_58;
  
  uVar8 = native_System_String__IsNullOrEmpty_b09430(*(undefined8 *)(param_1 + 0x1a8),0);
  if ((uVar8 & 1) == 0) {
    iVar2 = *(int *)(param_1 + 0x22c);
    if (iVar2 < 2) {
      if ((iVar2 != 0) && (iVar2 == 1)) {
        lVar9 = *(long *)(param_1 + 0x1a8);
        if (lVar9 != 0) {
          if ((bRam0000000001342136 & 1) == 0) {
            native_sub_43273c(&System_Globalization_CultureInfo_TypeInfo_12d4068,0);
            bRam0000000001342136 = 1;
          }
          if (((*(byte *)(_System_Globalization_CultureInfo_TypeInfo_12d4068 + 0x133) >> 2 & 1) != 0
              ) && (*(int *)(_System_Globalization_CultureInfo_TypeInfo_12d4068 + 0xe0) == 0)) {
            native_sub_4327ec();
          }
          plVar10 = (long *)native_System_Globalization_CultureInfo__get_CurrentCulture_b2bdb8(0);
          if (plVar10 != (long *)0x0) {
            plVar10 = (long *)(**(code **)(*plVar10 + 0x1d8))
                                        (plVar10,*(undefined8 *)(*plVar10 + 0x1e0));
            if (plVar10 != (long *)0x0) {
                    /* WARNING: Could not recover jumptable at 0x00b0d14c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
              uVar11 = (**(code **)(*plVar10 + 0x1d8))
                                 (plVar10,lVar9,*(undefined8 *)(*plVar10 + 0x1e0));
              return uVar11;
            }
                    /* WARNING: Subroutine does not return */
            native_sub_432810();
          }
          native_sub_432740(&System_ArgumentNullException_TypeInfo_12d3808);
          uVar11 = native_sub_432808();
          uVar12 = native_sub_432740(&StringLiteral_culture_12f4288);
          native_System_ArgumentNullException___ctor_951bd8(uVar11,uVar12,0);
          uVar12 = native_sub_432740(&Method_System_String_ToUpper___12e6d90);
                    /* WARNING: Subroutine does not return */
          native_sub_4327dc(uVar11,uVar12);
        }
        goto LAB_00aea2b4;
      }
    }
    else {
      if (iVar2 == 2) {
        lVar9 = *(long *)(param_1 + 0x1a8);
        if (lVar9 != 0) {
          if ((bRam0000000001342134 & 1) == 0) {
            native_sub_43273c(&System_Globalization_CultureInfo_TypeInfo_12d4068,0);
            bRam0000000001342134 = 1;
          }
          if (((*(byte *)(_System_Globalization_CultureInfo_TypeInfo_12d4068 + 0x133) >> 2 & 1) != 0
              ) && (*(int *)(_System_Globalization_CultureInfo_TypeInfo_12d4068 + 0xe0) == 0)) {
            native_sub_4327ec();
          }
          plVar10 = (long *)native_System_Globalization_CultureInfo__get_CurrentCulture_b2bdb8(0);
          if (plVar10 != (long *)0x0) {
            plVar10 = (long *)(**(code **)(*plVar10 + 0x1d8))
                                        (plVar10,*(undefined8 *)(*plVar10 + 0x1e0));
            if (plVar10 != (long *)0x0) {
                    /* WARNING: Could not recover jumptable at 0x00b0cfe4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
              uVar11 = (**(code **)(*plVar10 + 0x1b8))
                                 (plVar10,lVar9,*(undefined8 *)(*plVar10 + 0x1c0));
              return uVar11;
            }
                    /* WARNING: Subroutine does not return */
            native_sub_432810();
          }
          native_sub_432740(&System_ArgumentNullException_TypeInfo_12d3808);
          uVar11 = native_sub_432808();
          uVar12 = native_sub_432740(&StringLiteral_culture_12f4288);
          native_System_ArgumentNullException___ctor_951bd8(uVar11,uVar12,0);
          uVar12 = native_sub_432740(&Method_System_String_ToLower___12e6d88);
                    /* WARNING: Subroutine does not return */
          native_sub_4327dc(uVar11,uVar12);
        }
LAB_00aea2b4:
                    /* WARNING: Subroutine does not return */
        native_sub_432810();
      }
      if ((iVar2 == 0xff) && (lVar9 = *(long *)(param_1 + 0x288), lVar9 != 0)) {
        plVar10 = *(long **)(param_1 + 0x1a8);
        lStack_58 = lVar9;
        lVar13 = *(long *)(lVar9 + 0x68);
        if (lVar13 == 0) {
          plVar18 = &lStack_58;
          lVar17 = 1;
        }
        else {
          lVar17 = *(long *)(lVar13 + 0x18);
          if (lVar17 == 0) {
            return 0;
          }
          plVar18 = (long *)(lVar13 + 0x20);
        }
        lVar13 = 0;
        do {
          lVar14 = plVar18[lVar13];
          plVar1 = *(long **)(lVar14 + 0x20);
          lVar5 = *(long *)(lVar14 + 0x28);
          pcVar16 = *(code **)(lVar14 + 0x10);
          if (*(short *)(lVar5 + 0x48) == -1) {
            native_sub_4327f4(lVar5);
          }
          uVar8 = native_sub_432768(lVar5);
          bVar4 = *(char *)(lVar5 + 0x4a) != '\x01';
          if ((uVar8 & 1) == 0) {
            if (bVar4) {
              if ((*(short *)(lVar5 + 0x48) == -1) || (*(long *)(lVar9 + 0x18) == 0))
              goto LAB_005577e0;
              uVar8 = native_sub_432760(lVar5);
              uVar7 = native_sub_432b64(lVar5);
              if ((uVar8 & 1) == 0) {
                uVar3 = *(ushort *)(lVar5 + 0x48);
                if ((uVar7 & 1) == 0) {
                  lVar5 = *plVar10 + (ulong)uVar3 * 0x10;
                  uVar11 = (**(code **)(lVar5 + 0x138))(plVar10,*(undefined8 *)(lVar5 + 0x140));
                  goto LAB_005577ec;
                }
                lVar5 = native_sub_432764(lVar5);
                lVar14 = *plVar10;
                if ((ulong)*(ushort *)(lVar14 + 0x12a) != 0) {
                  uVar8 = 0;
                  piVar15 = (int *)(*(long *)(lVar14 + 0xb0) + 8);
                  do {
                    if (*(long *)(piVar15 + -2) == lVar5) {
                      puVar6 = (undefined8 *)
                               (lVar14 + (long)(int)(*piVar15 + (uint)uVar3) * 0x10 + 0x138);
                      goto LAB_00557614;
                    }
                    uVar8 = uVar8 + 1;
                    piVar15 = piVar15 + 4;
                  } while (uVar8 < *(ushort *)(lVar14 + 0x12a));
                }
                puVar6 = (undefined8 *)native_sub_3c9b34(plVar10,lVar5,(ulong)uVar3);
LAB_00557614:
                pcVar16 = (code *)*puVar6;
                puVar6 = (undefined8 *)puVar6[1];
              }
              else {
                if ((uVar7 & 1) == 0) {
                  uVar11 = *(undefined8 *)
                            (*plVar10 + (ulong)*(ushort *)(lVar5 + 0x48) * 0x10 + 0x140);
                }
                else {
                  lVar14 = *plVar10;
                  if ((ulong)*(ushort *)(lVar14 + 0x12a) != 0) {
                    uVar8 = 0;
                    piVar15 = (int *)(*(long *)(lVar14 + 0xb0) + 8);
                    do {
                      if (*(long *)(piVar15 + -2) == *(long *)(lVar5 + 0x18)) {
                        lVar14 = lVar14 + (long)(int)(*piVar15 + (uint)*(ushort *)(lVar5 + 0x48)) *
                                          0x10 + 0x138;
                        goto LAB_005575ec;
                      }
                      uVar8 = uVar8 + 1;
                      piVar15 = piVar15 + 4;
                    } while (uVar8 < *(ushort *)(lVar14 + 0x12a));
                  }
                  lVar14 = native_sub_3c9b34(plVar10);
LAB_005575ec:
                  uVar11 = *(undefined8 *)(lVar14 + 8);
                }
                puVar6 = (undefined8 *)native_sub_4327e8(uVar11,lVar5);
                pcVar16 = (code *)*puVar6;
              }
              uVar11 = (*pcVar16)(plVar10,puVar6);
            }
            else {
              if ((((plVar1 == (long *)0x0) || (*(short *)(lVar5 + 0x48) == -1)) ||
                  ((*(byte *)(*plVar1 + 0x115) & 1) != 0)) || (*(long *)(lVar9 + 0x18) == 0))
              goto LAB_00557754;
              uVar8 = native_sub_432760(lVar5);
              uVar7 = native_sub_432b64(lVar5);
              if ((uVar8 & 1) == 0) {
                uVar3 = *(ushort *)(lVar5 + 0x48);
                if ((uVar7 & 1) == 0) {
                  lVar5 = *plVar1 + (ulong)uVar3 * 0x10;
                  uVar11 = (**(code **)(lVar5 + 0x138))
                                     (plVar1,plVar10,*(undefined8 *)(lVar5 + 0x140));
                  goto LAB_005577ec;
                }
                lVar5 = native_sub_432764(lVar5);
                lVar14 = *plVar1;
                if ((ulong)*(ushort *)(lVar14 + 0x12a) != 0) {
                  uVar8 = 0;
                  piVar15 = (int *)(*(long *)(lVar14 + 0xb0) + 8);
                  do {
                    if (*(long *)(piVar15 + -2) == lVar5) {
                      puVar6 = (undefined8 *)
                               (lVar14 + (long)(int)(*piVar15 + (uint)uVar3) * 0x10 + 0x138);
                      goto LAB_00557678;
                    }
                    uVar8 = uVar8 + 1;
                    piVar15 = piVar15 + 4;
                  } while (uVar8 < *(ushort *)(lVar14 + 0x12a));
                }
                puVar6 = (undefined8 *)native_sub_3c9b34(plVar1,lVar5,(ulong)uVar3);
LAB_00557678:
                pcVar16 = (code *)*puVar6;
                puVar6 = (undefined8 *)puVar6[1];
              }
              else {
                if ((uVar7 & 1) == 0) {
                  uVar11 = *(undefined8 *)
                            (*plVar1 + (ulong)*(ushort *)(lVar5 + 0x48) * 0x10 + 0x140);
                }
                else {
                  lVar14 = *plVar1;
                  if ((ulong)*(ushort *)(lVar14 + 0x12a) != 0) {
                    uVar8 = 0;
                    piVar15 = (int *)(*(long *)(lVar14 + 0xb0) + 8);
                    do {
                      if (*(long *)(piVar15 + -2) == *(long *)(lVar5 + 0x18)) {
                        lVar14 = lVar14 + (long)(int)(*piVar15 + (uint)*(ushort *)(lVar5 + 0x48)) *
                                          0x10 + 0x138;
                        goto LAB_00557650;
                      }
                      uVar8 = uVar8 + 1;
                      piVar15 = piVar15 + 4;
                    } while (uVar8 < *(ushort *)(lVar14 + 0x12a));
                  }
                  lVar14 = native_sub_3c9b34(plVar1);
LAB_00557650:
                  uVar11 = *(undefined8 *)(lVar14 + 8);
                }
                puVar6 = (undefined8 *)native_sub_4327e8(uVar11,lVar5);
                pcVar16 = (code *)*puVar6;
              }
              uVar11 = (*pcVar16)(plVar1,plVar10,puVar6);
            }
          }
          else if (bVar4) {
LAB_00557754:
            uVar11 = (*pcVar16)(plVar1,plVar10,lVar5);
          }
          else {
LAB_005577e0:
            uVar11 = (*pcVar16)(plVar10,lVar5);
          }
LAB_005577ec:
          lVar13 = lVar13 + 1;
          if (lVar13 == lVar17) {
            return uVar11;
          }
        } while( true );
      }
    }
  }
  return *(undefined8 *)(param_1 + 0x1a8);
}



/* UILabel$$OnFontChanged @ 0xaea2b8
 * void UILabel__OnFontChanged (UnityEngine_Font_o* font, const MethodInfo* method); */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* UILabel$$OnFontChanged
   void UILabel__OnFontChanged (UnityEngine_Font_o* font, const MethodInfo* method); */

void native_UILabel__OnFontChanged_aea2b8(undefined8 param_1)

{
  int iVar1;
  ulong uVar2;
  undefined8 *puVar3;
  byte bVar4;
  long *plVar5;
  long lVar6;
  long lVar7;
  undefined8 uVar8;
  ulong uVar9;
  
  if ((bRam0000000001342011 & 1) == 0) {
    native_sub_43273c(&Method_BetterList_UIDrawCall__Add___12d89a0);
    native_sub_43273c(&Method_BetterList_UIDrawCall__Clear___12d89a8);
    native_sub_43273c(&Method_BetterList_UIDrawCall__Contains___12d89b0);
    native_sub_43273c(&Method_BetterList_UIDrawCall___ctor___12d8998);
    native_sub_43273c(&BetterList_UIDrawCall__TypeInfo_12d2130);
    native_sub_43273c(&UnityEngine_Object_TypeInfo_12d54e0);
    native_sub_43273c(&UILabel_TypeInfo_12d6468);
    bRam0000000001342011 = 1;
  }
  uVar9 = 0;
  while( true ) {
    if (((*(byte *)(_UILabel_TypeInfo_12d6468 + 0x133) >> 2 & 1) != 0) &&
       (*(int *)(_UILabel_TypeInfo_12d6468 + 0xe0) == 0)) {
      native_sub_4327ec();
    }
    plVar5 = *(long **)(_UILabel_TypeInfo_12d6468 + 0xb8);
    lVar7 = *plVar5;
    if (lVar7 == 0) goto LAB_00aea724;
    if ((long)*(int *)(lVar7 + 0x18) <= (long)uVar9) break;
    if (((*(ushort *)(_UILabel_TypeInfo_12d6468 + 0x132) >> 10 & 1) != 0) &&
       (*(int *)(_UILabel_TypeInfo_12d6468 + 0xe0) == 0)) {
      native_sub_4327ec();
      lVar7 = **(long **)(_UILabel_TypeInfo_12d6468 + 0xb8);
      if (lVar7 == 0) goto LAB_00aea724;
    }
    lVar7 = *(long *)(lVar7 + 0x10);
    if (lVar7 == 0) goto LAB_00aea724;
    if (*(uint *)(lVar7 + 0x18) <= uVar9) goto LAB_00aea728;
    plVar5 = *(long **)(lVar7 + uVar9 * 8 + 0x20);
    if (((*(byte *)(_UnityEngine_Object_TypeInfo_12d54e0 + 0x133) >> 2 & 1) != 0) &&
       (*(int *)(_UnityEngine_Object_TypeInfo_12d54e0 + 0xe0) == 0)) {
      native_sub_4327ec();
    }
    uVar2 = native_UnityEngine_Object__op_Inequality_8d76fc(plVar5,0,0);
    if ((uVar2 & 1) != 0) {
      if (plVar5 == (long *)0x0) goto LAB_00aea724;
      lVar7 = native_UILabel__get_trueTypeFont_ae74d0(plVar5);
      if (((*(byte *)(_UnityEngine_Object_TypeInfo_12d54e0 + 0x133) >> 2 & 1) != 0) &&
         (*(int *)(_UnityEngine_Object_TypeInfo_12d54e0 + 0xe0) == 0)) {
        native_sub_4327ec(_UnityEngine_Object_TypeInfo_12d54e0);
      }
      uVar2 = native_UnityEngine_Object__op_Equality_8e9a3c(lVar7,param_1,0);
      if ((uVar2 & 1) != 0) {
        if (lVar7 == 0) goto LAB_00aea724;
        native_UnityEngine_Font__RequestCharactersInTexture_db40bc
                  (lVar7,plVar5[0x35],(int)plVar5[0x4f],*(undefined4 *)((long)plVar5 + 0x1b4),0);
        (**(code **)(*plVar5 + 0x378))(plVar5,*(undefined8 *)(*plVar5 + 0x380));
        lVar7 = plVar5[0x1e];
        if (((*(byte *)(_UnityEngine_Object_TypeInfo_12d54e0 + 0x133) >> 2 & 1) != 0) &&
           (*(int *)(_UnityEngine_Object_TypeInfo_12d54e0 + 0xe0) == 0)) {
          native_sub_4327ec();
        }
        uVar2 = native_UnityEngine_Object__op_Equality_8e9a3c(lVar7,0,0);
        if ((uVar2 & 1) != 0) {
          native_UIWidget__CreatePanel_949fec(plVar5,0);
        }
        if (((*(byte *)(_UILabel_TypeInfo_12d6468 + 0x133) >> 2 & 1) != 0) &&
           (*(int *)(_UILabel_TypeInfo_12d6468 + 0xe0) == 0)) {
          native_sub_4327ec();
        }
        if (*(long *)(*(long *)(_UILabel_TypeInfo_12d6468 + 0xb8) + 0x10) == 0) {
          uVar8 = native_sub_432808(_BetterList_UIDrawCall__TypeInfo_12d2130);
          native_BetterList_object____ctor_ba2d1c
                    (uVar8,_Method_BetterList_UIDrawCall___ctor___12d8998);
          if (((*(byte *)(_UILabel_TypeInfo_12d6468 + 0x133) >> 2 & 1) != 0) &&
             (*(int *)(_UILabel_TypeInfo_12d6468 + 0xe0) == 0)) {
            native_sub_4327ec();
          }
          puVar3 = (undefined8 *)(*(long *)(_UILabel_TypeInfo_12d6468 + 0xb8) + 0x10);
          *puVar3 = uVar8;
          native_sub_4326e0(puVar3,uVar8);
        }
        lVar7 = plVar5[0x2c];
        if (((*(byte *)(_UnityEngine_Object_TypeInfo_12d54e0 + 0x133) >> 2 & 1) != 0) &&
           (*(int *)(_UnityEngine_Object_TypeInfo_12d54e0 + 0xe0) == 0)) {
          native_sub_4327ec();
        }
        uVar2 = native_UnityEngine_Object__op_Inequality_8d76fc(lVar7,0,0);
        if ((uVar2 & 1) != 0) {
          if (((*(byte *)(_UILabel_TypeInfo_12d6468 + 0x133) >> 2 & 1) != 0) &&
             (*(int *)(_UILabel_TypeInfo_12d6468 + 0xe0) == 0)) {
            native_sub_4327ec();
          }
          lVar7 = *(long *)(*(long *)(_UILabel_TypeInfo_12d6468 + 0xb8) + 0x10);
          if (lVar7 == 0) goto LAB_00aea724;
          uVar2 = native_BetterList_object___Contains_ba26c8
                            (lVar7,plVar5[0x2c],_Method_BetterList_UIDrawCall__Contains___12d89b0);
          if ((uVar2 & 1) == 0) {
            if (((*(byte *)(_UILabel_TypeInfo_12d6468 + 0x133) >> 2 & 1) != 0) &&
               (*(int *)(_UILabel_TypeInfo_12d6468 + 0xe0) == 0)) {
              native_sub_4327ec();
            }
            lVar7 = *(long *)(*(long *)(_UILabel_TypeInfo_12d6468 + 0xb8) + 0x10);
            if (lVar7 == 0) goto LAB_00aea724;
            native_BetterList_object___Add_ba24d8
                      (lVar7,plVar5[0x2c],_Method_BetterList_UIDrawCall__Add___12d89a0);
          }
        }
      }
    }
    uVar9 = uVar9 + 1;
  }
  if (((*(ushort *)(_UILabel_TypeInfo_12d6468 + 0x132) >> 10 & 1) != 0) &&
     (*(int *)(_UILabel_TypeInfo_12d6468 + 0xe0) == 0)) {
    native_sub_4327ec();
    plVar5 = *(long **)(_UILabel_TypeInfo_12d6468 + 0xb8);
  }
  lVar7 = plVar5[2];
  if (lVar7 == 0) {
    return;
  }
  if (((*(byte *)(_UILabel_TypeInfo_12d6468 + 0x133) >> 2 & 1) != 0) &&
     (*(int *)(_UILabel_TypeInfo_12d6468 + 0xe0) == 0)) {
    native_sub_4327ec();
    lVar7 = *(long *)(*(long *)(_UILabel_TypeInfo_12d6468 + 0xb8) + 0x10);
    if (lVar7 == 0) goto LAB_00aea724;
  }
  iVar1 = *(int *)(lVar7 + 0x18);
  bVar4 = *(byte *)(_UILabel_TypeInfo_12d6468 + 0x133) >> 2 & 1;
  if (iVar1 < 1) goto LAB_00aea6c0;
  lVar7 = 0;
  do {
    if ((bVar4 != 0) && (*(int *)(_UILabel_TypeInfo_12d6468 + 0xe0) == 0)) {
      native_sub_4327ec();
    }
    lVar6 = *(long *)(*(long *)(_UILabel_TypeInfo_12d6468 + 0xb8) + 0x10);
    if ((lVar6 == 0) || (lVar6 = *(long *)(lVar6 + 0x10), lVar6 == 0)) goto LAB_00aea724;
    if (*(uint *)(lVar6 + 0x18) <= (uint)lVar7) {
LAB_00aea728:
      uVar8 = native_sub_43283c();
                    /* WARNING: Subroutine does not return */
      native_sub_4327dc(uVar8,0);
    }
    lVar6 = *(long *)(lVar6 + lVar7 * 8 + 0x20);
    if (lVar6 == 0) goto LAB_00aea724;
    uVar8 = *(undefined8 *)(lVar6 + 0x30);
    if (((*(byte *)(_UnityEngine_Object_TypeInfo_12d54e0 + 0x133) >> 2 & 1) != 0) &&
       (*(int *)(_UnityEngine_Object_TypeInfo_12d54e0 + 0xe0) == 0)) {
      native_sub_4327ec();
    }
    uVar9 = native_UnityEngine_Object__op_Inequality_8d76fc(uVar8,0,0);
    if ((uVar9 & 1) != 0) {
      if (*(long *)(lVar6 + 0x30) == 0) goto LAB_00aea724;
      native_UIPanel__FillDrawCall_aea734(*(long *)(lVar6 + 0x30),lVar6);
    }
    lVar7 = lVar7 + 1;
    bVar4 = *(byte *)(_UILabel_TypeInfo_12d6468 + 0x133) >> 2 & 1;
  } while ((int)lVar7 < iVar1);
LAB_00aea6c0:
  if ((bVar4 != 0) && (*(int *)(_UILabel_TypeInfo_12d6468 + 0xe0) == 0)) {
    native_sub_4327ec();
  }
  lVar7 = *(long *)(*(long *)(_UILabel_TypeInfo_12d6468 + 0xb8) + 0x10);
  if (lVar7 != 0) {
    *(undefined4 *)(lVar7 + 0x18) = 0;
    return;
  }
LAB_00aea724:
                    /* WARNING: Subroutine does not return */
  native_sub_432810();
}



/* UILabel$$GetSides @ 0xaea7dc
 * UnityEngine_Vector3_array* UILabel__GetSides (UILabel_o* __this, UnityEngine_Transform_o* relativeTo, const MethodInfo* method); */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* UILabel$$GetSides
   UnityEngine_Vector3_array* UILabel__GetSides (UILabel_o* __this, UnityEngine_Transform_o*
   relativeTo, const MethodInfo* method); */

undefined8
native_UILabel__GetSides_aea7dc(undefined1 param_1 [16],float param_2,long param_3,long param_4)

{
  long lVar1;
  long lVar2;
  ulong uVar3;
  undefined8 uVar4;
  long lVar5;
  float fVar6;
  undefined4 uVar7;
  undefined4 uVar8;
  undefined4 uVar9;
  float fVar10;
  int iVar11;
  int iVar12;
  float fVar13;
  float fVar14;
  float fVar15;
  
  if (*(char *)(param_3 + 0x25c) != '\0') {
    native_UILabel__ProcessText_ae8a14(param_3,0,1);
  }
  if ((bRam0000000001341458 & 1) == 0) {
    native_sub_43273c(&UnityEngine_Object_TypeInfo_12d54e0,param_4,0);
    bRam0000000001341458 = 1;
  }
  fVar6 = (float)native_UIWidget__get_pivotOffset_944f8c(param_3);
  iVar11 = *(int *)(param_3 + 0xa4);
  iVar12 = *(int *)(param_3 + 0xa8);
  lVar2 = native_UIRect__get_cachedTransform_c27c58(param_3,0);
  if (lVar2 != 0) {
    fVar15 = (float)iVar12;
    fVar13 = fVar15 - param_2 * fVar15;
    lVar5 = *(long *)(param_3 + 0x168);
    fVar6 = fVar6 * (float)iVar11;
    fVar10 = (fVar13 - param_2 * fVar15) * 0.5;
    uVar8 = 0;
    fVar14 = fVar10;
    uVar7 = native_UnityEngine_Transform__TransformPoint_77299c(-fVar6,lVar2,0);
    if (lVar5 != 0) {
      if (*(int *)(lVar5 + 0x18) != 0) {
        *(undefined4 *)(lVar5 + 0x20) = uVar7;
        *(float *)(lVar5 + 0x24) = fVar14;
        *(undefined4 *)(lVar5 + 0x28) = uVar8;
        fVar14 = (float)iVar11 - fVar6;
        lVar5 = *(long *)(param_3 + 0x168);
        fVar6 = (fVar14 - fVar6) * 0.5;
        uVar8 = 0;
        uVar7 = native_UnityEngine_Transform__TransformPoint_77299c(fVar6,lVar2,0);
        if (lVar5 == 0) goto LAB_0094acc8;
        if (1 < *(uint *)(lVar5 + 0x18)) {
          *(undefined4 *)(lVar5 + 0x2c) = uVar7;
          *(float *)(lVar5 + 0x30) = fVar13;
          *(undefined4 *)(lVar5 + 0x34) = uVar8;
          lVar5 = *(long *)(param_3 + 0x168);
          uVar8 = 0;
          uVar7 = native_UnityEngine_Transform__TransformPoint_77299c(fVar14,lVar2,0);
          if (lVar5 == 0) goto LAB_0094acc8;
          if (2 < *(uint *)(lVar5 + 0x18)) {
            *(undefined4 *)(lVar5 + 0x38) = uVar7;
            *(float *)(lVar5 + 0x3c) = fVar10;
            *(undefined4 *)(lVar5 + 0x40) = uVar8;
            lVar5 = *(long *)(param_3 + 0x168);
            fVar14 = -(param_2 * fVar15);
            uVar8 = 0;
            uVar7 = native_UnityEngine_Transform__TransformPoint_77299c(fVar6,lVar2,0);
            if (lVar5 == 0) goto LAB_0094acc8;
            if (3 < *(uint *)(lVar5 + 0x18)) {
              *(undefined4 *)(lVar5 + 0x44) = uVar7;
              *(float *)(lVar5 + 0x48) = fVar14;
              *(undefined4 *)(lVar5 + 0x4c) = uVar8;
              if (((*(byte *)(_UnityEngine_Object_TypeInfo_12d54e0 + 0x133) >> 2 & 1) != 0) &&
                 (*(int *)(_UnityEngine_Object_TypeInfo_12d54e0 + 0xe0) == 0)) {
                native_sub_4327ec();
              }
              uVar3 = native_UnityEngine_Object__op_Inequality_8d76fc(param_4,0,0);
              if ((uVar3 & 1) != 0) {
                lVar2 = 0;
                uVar3 = 0xffffffffffffffff;
                do {
                  lVar5 = *(long *)(param_3 + 0x168);
                  if (lVar5 == 0) goto LAB_0094acc8;
                  if ((ulong)*(uint *)(lVar5 + 0x18) <= uVar3 + 1) goto LAB_0094accc;
                  if (param_4 == 0) goto LAB_0094acc8;
                  lVar1 = lVar5 + lVar2;
                  uVar8 = *(undefined4 *)(lVar1 + 0x24);
                  uVar9 = *(undefined4 *)(lVar1 + 0x28);
                  uVar7 = native_UnityEngine_Transform__InverseTransformPoint_7729a0
                                    (*(undefined4 *)(lVar1 + 0x20),param_4,0);
                  if ((ulong)*(uint *)(lVar5 + 0x18) <= uVar3 + 1) goto LAB_0094accc;
                  uVar3 = uVar3 + 1;
                  lVar2 = lVar2 + 0xc;
                  *(undefined4 *)(lVar1 + 0x20) = uVar7;
                  *(undefined4 *)(lVar1 + 0x24) = uVar8;
                  *(undefined4 *)(lVar1 + 0x28) = uVar9;
                } while (uVar3 < 3);
              }
              return *(undefined8 *)(param_3 + 0x168);
            }
          }
        }
      }
LAB_0094accc:
      uVar4 = native_sub_43283c();
                    /* WARNING: Subroutine does not return */
      native_sub_4327dc(uVar4,0);
    }
  }
LAB_0094acc8:
                    /* WARNING: Subroutine does not return */
  native_sub_432810();
}



/* UILabel$$UpgradeFrom265 @ 0xaea820
 * void UILabel__UpgradeFrom265 (UILabel_o* __this, const MethodInfo* method); */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* UILabel$$UpgradeFrom265
   void UILabel__UpgradeFrom265 (UILabel_o* __this, const MethodInfo* method); */

void native_UILabel__UpgradeFrom265_aea820
               (undefined1 param_1 [16],float param_2,float param_3,float param_4,long param_5)

{
  int iVar1;
  long *plVar2;
  long lVar3;
  ulong uVar4;
  long lVar5;
  undefined8 uVar6;
  float fVar7;
  float fVar8;
  float fVar9;
  undefined8 uVar10;
  float fVar11;
  undefined8 uVar12;
  float fVar13;
  undefined8 uStack_98;
  undefined8 uStack_90;
  undefined8 uStack_88;
  undefined8 uStack_80;
  undefined8 uStack_78;
  undefined8 uStack_70;
  undefined8 uStack_68;
  
  if ((bRam0000000001342012 & 1) == 0) {
    native_sub_43273c(&NGUITools_TypeInfo_12d53c8);
    native_sub_43273c(&UnityEngine_Object_TypeInfo_12d54e0);
    bRam0000000001342012 = 1;
  }
  native_UILabel__ProcessText_ae8a14(param_5,1,1);
  if (*(char *)(param_5 + 0x234) != '\0') {
    if (*(int *)(param_5 + 0x1e4) != 0) {
      *(undefined4 *)(param_5 + 0x1e4) = 0;
      *(undefined1 *)(param_5 + 0x58) = 1;
      *(undefined1 *)(param_5 + 0x25c) = 1;
    }
    *(undefined4 *)(param_5 + 0x1c0) = 0;
  }
  if (*(int *)(param_5 + 0x238) == 0) {
    if (*(int *)(param_5 + 0x1e4) != 2) {
      *(undefined4 *)(param_5 + 0x1e4) = 2;
      *(undefined1 *)(param_5 + 0x58) = 1;
      *(undefined1 *)(param_5 + 0x25c) = 1;
    }
  }
  else {
    native_UIWidget__set_width_941dec(param_5,*(int *)(param_5 + 0x238),0);
    iVar1 = 3;
    if (*(int *)(param_5 + 0x1c0) < 1) {
      iVar1 = 0;
    }
    if (*(int *)(param_5 + 0x1e4) != iVar1) {
      *(int *)(param_5 + 0x1e4) = iVar1;
      *(undefined1 *)(param_5 + 0x58) = 1;
      *(undefined1 *)(param_5 + 0x25c) = 1;
    }
  }
  if (*(int *)(param_5 + 0x23c) != 0) {
    native_UIWidget__set_height_942098(param_5,*(int *)(param_5 + 0x23c),0);
  }
  uVar6 = *(undefined8 *)(param_5 + 0x1a0);
  if (((*(byte *)(_UnityEngine_Object_TypeInfo_12d54e0 + 0x133) >> 2 & 1) != 0) &&
     (*(int *)(_UnityEngine_Object_TypeInfo_12d54e0 + 0xe0) == 0)) {
    native_sub_4327ec();
  }
  uVar4 = native_UnityEngine_Object__op_Inequality_8d76fc(uVar6,0,0);
  if ((uVar4 & 1) != 0) {
    iVar1 = native_UILabel__get_defaultFontSize_ae82a4(param_5);
    if (*(int *)(param_5 + 0xa8) < iVar1) {
      native_UIWidget__set_height_942098(param_5,iVar1,0);
    }
    native_UILabel__set_fontSize_ae83c8(param_5,iVar1);
  }
  *(undefined8 *)(param_5 + 0x238) = 0;
  *(undefined1 *)(param_5 + 0x234) = 0;
  lVar5 = native_UnityEngine_Component__get_gameObject_8da66c(param_5,0);
  if (((*(byte *)(_NGUITools_TypeInfo_12d53c8 + 0x133) >> 2 & 1) != 0) &&
     (*(int *)(_NGUITools_TypeInfo_12d53c8 + 0xe0) == 0)) {
    native_sub_4327ec(_NGUITools_TypeInfo_12d53c8);
  }
  if ((bRam000000000133f58a & 1) == 0) {
    native_sub_43273c(&Method_UnityEngine_GameObject_GetComponent_BoxCollider2D____12e4948,1,0);
    native_sub_43273c(&Method_UnityEngine_GameObject_GetComponent_BoxCollider____12e4940);
    native_sub_43273c(&NGUITools_TypeInfo_12d53c8);
    native_sub_43273c(&UnityEngine_Object_TypeInfo_12d54e0);
    bRam000000000133f58a = 1;
  }
  if (((*(byte *)(_UnityEngine_Object_TypeInfo_12d54e0 + 0x133) >> 2 & 1) != 0) &&
     (*(int *)(_UnityEngine_Object_TypeInfo_12d54e0 + 0xe0) == 0)) {
    native_sub_4327ec();
  }
  uVar4 = native_UnityEngine_Object__op_Inequality_8d76fc(lVar5,0,0);
  if ((uVar4 & 1) == 0) {
    return;
  }
  if (lVar5 == 0) {
                    /* WARNING: Subroutine does not return */
    native_sub_432810();
  }
  lVar3 = native_UnityEngine_GameObject__GetComponent_BE2_BlockSectionHeader_Custom__4a2214
                    (lVar5,_Method_UnityEngine_GameObject_GetComponent_BoxCollider____12e4940);
  if (((*(byte *)(_UnityEngine_Object_TypeInfo_12d54e0 + 0x133) >> 2 & 1) != 0) &&
     (*(int *)(_UnityEngine_Object_TypeInfo_12d54e0 + 0xe0) == 0)) {
    native_sub_4327ec(_UnityEngine_Object_TypeInfo_12d54e0);
  }
  uVar4 = native_UnityEngine_Object__op_Inequality_8d76fc(lVar3,0,0);
  if ((uVar4 & 1) == 0) {
    lVar5 = native_UnityEngine_GameObject__GetComponent_BE2_BlockSectionHeader_Custom__4a2214
                      (lVar5,_Method_UnityEngine_GameObject_GetComponent_BoxCollider2D____12e4948);
    if (((*(byte *)(_UnityEngine_Object_TypeInfo_12d54e0 + 0x133) >> 2 & 1) != 0) &&
       (*(int *)(_UnityEngine_Object_TypeInfo_12d54e0 + 0xe0) == 0)) {
      native_sub_4327ec(_UnityEngine_Object_TypeInfo_12d54e0);
    }
    uVar4 = native_UnityEngine_Object__op_Inequality_8d76fc(lVar5,0,0);
    if ((uVar4 & 1) == 0) {
      return;
    }
    if (((*(byte *)(_NGUITools_TypeInfo_12d53c8 + 0x133) >> 2 & 1) != 0) &&
       (*(int *)(_NGUITools_TypeInfo_12d53c8 + 0xe0) == 0)) {
      native_sub_4327ec();
    }
    if ((bRam000000000133f58f & 1) == 0) {
      native_sub_43273c(&Method_UnityEngine_GameObject_GetComponent_UIWidget____12e4ae8);
      native_sub_43273c(&NGUIMath_TypeInfo_12d53b8);
      native_sub_43273c(&NGUITools_TypeInfo_12d53c8);
      native_sub_43273c(&UnityEngine_Object_TypeInfo_12d54e0);
      native_sub_43273c(&StringLiteral_last_change_12f5390);
      bRam000000000133f58f = 1;
    }
    uStack_78 = 0;
    uStack_70 = 0;
    uStack_80 = 0;
    if (((*(byte *)(_UnityEngine_Object_TypeInfo_12d54e0 + 0x133) >> 2 & 1) != 0) &&
       (*(int *)(_UnityEngine_Object_TypeInfo_12d54e0 + 0xe0) == 0)) {
      native_sub_4327ec();
    }
    uVar4 = native_UnityEngine_Object__op_Inequality_8d76fc(lVar5,0,0);
    if ((uVar4 & 1) == 0) {
      return;
    }
    if ((lVar5 != 0) &&
       (lVar3 = native_UnityEngine_Component__get_gameObject_8da66c(lVar5,0), lVar3 != 0)) {
      plVar2 = (long *)native_UnityEngine_GameObject__GetComponent_BE2_BlockSectionHeader_Custom__4a2214
                                 (lVar3,
                                  _Method_UnityEngine_GameObject_GetComponent_UIWidget____12e4ae8);
      if (((*(byte *)(_UnityEngine_Object_TypeInfo_12d54e0 + 0x133) >> 2 & 1) != 0) &&
         (*(int *)(_UnityEngine_Object_TypeInfo_12d54e0 + 0xe0) == 0)) {
        native_sub_4327ec(_UnityEngine_Object_TypeInfo_12d54e0);
      }
      uVar4 = native_UnityEngine_Object__op_Inequality_8d76fc(plVar2,0,0);
      if ((uVar4 & 1) == 0) {
        uVar6 = native_UnityEngine_GameObject__get_transform_8de5c8(lVar3,0);
        if (((*(byte *)(_NGUIMath_TypeInfo_12d53b8 + 0x133) >> 2 & 1) != 0) &&
           (*(int *)(_NGUIMath_TypeInfo_12d53b8 + 0xe0) == 0)) {
          native_sub_4327ec(_NGUIMath_TypeInfo_12d53b8);
        }
        native_NGUIMath__CalculateRelativeWidgetBounds_805d80(&uStack_98,uVar6,1,0);
        uStack_70 = uStack_88;
        uStack_78 = uStack_90;
        uStack_80 = uStack_98;
        native_UnityEngine_Bounds__get_center_8d7d98(&uStack_80,0);
        native_UnityEngine_Collider2D__set_offset_db8bcc(lVar5,0);
        uVar6 = native_UnityEngine_Bounds__get_size_8d7ed8(&uStack_80,0);
        native_UnityEngine_Bounds__get_size_8d7ed8(&uStack_80,0);
        native_UnityEngine_BoxCollider2D__set_size_db8a30(uVar6,lVar5,0);
        return;
      }
      if (plVar2 != (long *)0x0) {
        lVar3 = *plVar2;
        if ((((*(float *)((long)plVar2 + 0x104) != 0.0) || (*(float *)(plVar2 + 0x21) != 0.0)) ||
            (param_2 = *(float *)((long)plVar2 + 0x10c), param_2 != 1.0)) ||
           (param_2 = *(float *)(plVar2 + 0x22), param_2 != 1.0)) {
          fVar7 = (float)(**(code **)(lVar3 + 0x2f8))(plVar2,*(undefined8 *)(lVar3 + 0x300));
          uVar4 = (ulong)(uint)(param_3 - fVar7);
          fVar11 = (fVar7 + param_3) * 0.5;
          fVar8 = (param_2 + param_4) * 0.5;
          param_4 = param_4 - param_2;
          fVar9 = (float)native_UnityEngine_Collider2D__get_offset_db8b24(lVar5,0);
          fVar9 = fVar11 - fVar9;
          param_2 = fVar8 - param_2;
          param_2 = param_2 * param_2;
          if ((fVar9 * fVar9 + param_2 < 9.9999994e-11) &&
             (fVar9 = (float)native_UnityEngine_BoxCollider2D__get_size_db8988(lVar5,0),
             fVar9 = (param_3 - fVar7) - fVar9,
             fVar9 * fVar9 + (param_4 - param_2) * (param_4 - param_2) < 9.9999994e-11)) {
            return;
          }
          native_UnityEngine_Collider2D__set_offset_db8bcc(fVar11,fVar8,lVar5,0);
LAB_0072e024:
          native_UnityEngine_BoxCollider2D__set_size_db8a30(uVar4,param_4,lVar5,0);
          if ((*(byte *)(_NGUITools_TypeInfo_12d53c8 + 0x133) >> 2 & 1) == 0) {
            return;
          }
          if (*(int *)(_NGUITools_TypeInfo_12d53c8 + 0xe0) != 0) {
            return;
          }
          native_sub_4327ec();
          return;
        }
        lVar3 = (**(code **)(lVar3 + 0x1d8))(plVar2,*(undefined8 *)(lVar3 + 0x1e0));
        if (lVar3 != 0) {
          if ((*(uint *)(lVar3 + 0x18) != 0) && (2 < *(uint *)(lVar3 + 0x18))) {
            uVar6 = *(undefined8 *)(lVar3 + 0x20);
            uVar12 = *(undefined8 *)(lVar3 + 0x38);
            fVar7 = (float)native_UnityEngine_Mathf__Clamp01_8d9d9c(0x3f000000,0);
            if (2 < *(uint *)(lVar3 + 0x18)) {
              uVar10 = *(undefined8 *)(lVar3 + 0x38);
              fVar9 = (float)uVar6;
              fVar11 = (float)((ulong)uVar6 >> 0x20);
              fVar9 = fVar9 + ((float)uVar12 - fVar9) * fVar7;
              fVar11 = fVar11 + ((float)((ulong)uVar12 >> 0x20) - fVar11) * fVar7;
              uVar6 = CONCAT44(fVar11,fVar9);
              fVar8 = (float)uVar10 - (float)*(undefined8 *)(lVar3 + 0x20);
              param_4 = (float)((ulong)uVar10 >> 0x20) -
                        (float)((ulong)*(undefined8 *)(lVar3 + 0x20) >> 0x20);
              uVar4 = CONCAT44(param_4,fVar8);
              fVar7 = (float)native_UnityEngine_Collider2D__get_offset_db8b24(lVar5,0);
              fVar9 = fVar9 - fVar7;
              fVar7 = fVar11 - (float)uVar10;
              if ((fVar9 * fVar9 + fVar7 * fVar7 < 9.9999994e-11) &&
                 (uVar12 = uVar6,
                 fVar7 = (float)native_UnityEngine_BoxCollider2D__get_size_db8988(lVar5,0),
                 fVar8 = fVar8 - fVar7, fVar7 = param_4 - (float)uVar12,
                 fVar8 * fVar8 + fVar7 * fVar7 < 9.9999994e-11)) {
                return;
              }
              native_UnityEngine_Collider2D__set_offset_db8bcc(uVar6,fVar11,lVar5,0);
              goto LAB_0072e024;
            }
          }
          uVar6 = native_sub_43283c();
                    /* WARNING: Subroutine does not return */
          native_sub_4327dc(uVar6,0);
        }
      }
    }
                    /* WARNING: Subroutine does not return */
    native_sub_432810();
  }
  if (((*(byte *)(_NGUITools_TypeInfo_12d53c8 + 0x133) >> 2 & 1) != 0) &&
     (*(int *)(_NGUITools_TypeInfo_12d53c8 + 0xe0) == 0)) {
    native_sub_4327ec();
  }
  if ((bRam000000000133f58b & 1) == 0) {
    native_sub_43273c(&Method_UnityEngine_GameObject_GetComponent_UIWidget____12e4ae8);
    native_sub_43273c(&NGUIMath_TypeInfo_12d53b8);
    native_sub_43273c(&UnityEngine_Object_TypeInfo_12d54e0);
    bRam000000000133f58b = 1;
  }
  uStack_68 = 0;
  uStack_70 = 0;
  if (((*(byte *)(_UnityEngine_Object_TypeInfo_12d54e0 + 0x133) >> 2 & 1) != 0) &&
     (*(int *)(_UnityEngine_Object_TypeInfo_12d54e0 + 0xe0) == 0)) {
    native_sub_4327ec();
  }
  uVar4 = native_UnityEngine_Object__op_Inequality_8d76fc(lVar3,0,0);
  if ((uVar4 & 1) != 0) {
    if ((lVar3 == 0) ||
       (lVar5 = native_UnityEngine_Component__get_gameObject_8da66c(lVar3,0), lVar5 == 0)) {
LAB_0072dca4:
                    /* WARNING: Subroutine does not return */
      native_sub_432810();
    }
    plVar2 = (long *)native_UnityEngine_GameObject__GetComponent_BE2_BlockSectionHeader_Custom__4a2214
                               (lVar5,
                                _Method_UnityEngine_GameObject_GetComponent_UIWidget____12e4ae8);
    if (((*(byte *)(_UnityEngine_Object_TypeInfo_12d54e0 + 0x133) >> 2 & 1) != 0) &&
       (*(int *)(_UnityEngine_Object_TypeInfo_12d54e0 + 0xe0) == 0)) {
      native_sub_4327ec(_UnityEngine_Object_TypeInfo_12d54e0);
    }
    uVar4 = native_UnityEngine_Object__op_Inequality_8d76fc(plVar2,0,0);
    if ((uVar4 & 1) == 0) {
      uVar6 = native_UnityEngine_GameObject__get_transform_8de5c8(lVar5,0);
      if (((*(byte *)(_NGUIMath_TypeInfo_12d53b8 + 0x133) >> 2 & 1) != 0) &&
         (*(int *)(_NGUIMath_TypeInfo_12d53b8 + 0xe0) == 0)) {
        native_sub_4327ec(_NGUIMath_TypeInfo_12d53b8);
      }
      native_NGUIMath__CalculateRelativeWidgetBounds_805d80(&uStack_88,uVar6,1,0);
      uStack_68 = uStack_80;
      uStack_70 = uStack_88;
      native_UnityEngine_Bounds__get_center_8d7d98(&uStack_70,0);
      native_UnityEngine_BoxCollider__set_center_dbaa0c(lVar3,0);
      uVar4 = native_UnityEngine_Bounds__get_size_8d7ed8(&uStack_70,0);
      native_UnityEngine_Bounds__get_size_8d7ed8(&uStack_70,0);
    }
    else {
      if (plVar2 == (long *)0x0) goto LAB_0072dca4;
      lVar5 = *plVar2;
      if ((((*(float *)((long)plVar2 + 0x104) == 0.0) && (*(float *)(plVar2 + 0x21) == 0.0)) &&
          (param_2 = *(float *)((long)plVar2 + 0x10c), param_2 == 1.0)) &&
         (param_2 = *(float *)(plVar2 + 0x22), param_2 == 1.0)) {
        lVar5 = (**(code **)(lVar5 + 0x1d8))(plVar2,*(undefined8 *)(lVar5 + 0x1e0));
        if (lVar5 == 0) goto LAB_0072dca4;
        if ((*(uint *)(lVar5 + 0x18) == 0) || (*(uint *)(lVar5 + 0x18) < 3)) {
LAB_0072dca8:
          uVar6 = native_sub_43283c();
                    /* WARNING: Subroutine does not return */
          native_sub_4327dc(uVar6,0);
        }
        uVar6 = *(undefined8 *)(lVar5 + 0x20);
        fVar11 = *(float *)(lVar5 + 0x28);
        uVar12 = *(undefined8 *)(lVar5 + 0x38);
        fVar13 = *(float *)(lVar5 + 0x40);
        fVar7 = (float)native_UnityEngine_Mathf__Clamp01_8d9d9c(0x3f000000,0);
        fVar8 = (float)uVar6;
        fVar9 = (float)((ulong)uVar6 >> 0x20);
        fVar9 = fVar9 + ((float)((ulong)uVar12 >> 0x20) - fVar9) * fVar7;
        native_UnityEngine_BoxCollider__set_center_dbaa0c
                  (CONCAT44(fVar9,fVar8 + ((float)uVar12 - fVar8) * fVar7),fVar9,
                   fVar11 + (fVar13 - fVar11) * fVar7,lVar3,0);
        if (*(uint *)(lVar5 + 0x18) < 3) goto LAB_0072dca8;
        uVar4 = CONCAT44((float)((ulong)*(undefined8 *)(lVar5 + 0x38) >> 0x20) -
                         (float)((ulong)*(undefined8 *)(lVar5 + 0x20) >> 0x20),
                         (float)*(undefined8 *)(lVar5 + 0x38) - (float)*(undefined8 *)(lVar5 + 0x20)
                        );
      }
      else {
        fVar7 = (float)(**(code **)(lVar5 + 0x2f8))(plVar2,*(undefined8 *)(lVar5 + 0x300));
        native_UnityEngine_BoxCollider__set_center_dbaa0c
                  ((fVar7 + param_3) * 0.5,(param_2 + param_4) * 0.5,0,lVar3,0);
        uVar4 = (ulong)(uint)(param_3 - fVar7);
      }
    }
    native_UnityEngine_BoxCollider__set_size_dbab64(uVar4,lVar3,0);
  }
  return;
}



/* UILabel$$OnAnchor @ 0xaea9cc
 * void UILabel__OnAnchor (UILabel_o* __this, const MethodInfo* method); */

/* WARNING: Removing unreachable block (ram,0x00432c1c) */
/* WARNING: Removing unreachable block (ram,0x003cc494) */
/* WARNING: Removing unreachable block (ram,0x003cc4b8) */
/* WARNING: Removing unreachable block (ram,0x003cc4d4) */
/* WARNING: Removing unreachable block (ram,0x003cc4dc) */
/* WARNING: Removing unreachable block (ram,0x003cc4f0) */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* UILabel$$OnAnchor
   void UILabel__OnAnchor (UILabel_o* __this, const MethodInfo* method); */

void native_UILabel__OnAnchor_aea9cc
               (undefined1 param_1 [16],float param_2,ulong param_3,long *param_4)

{
  int *piVar1;
  int *piVar2;
  long *plVar3;
  undefined8 *puVar4;
  char cVar5;
  ulong uVar6;
  ulong uVar7;
  long lVar8;
  undefined8 uVar9;
  ulong uVar10;
  bool bVar11;
  long lVar12;
  undefined8 uVar13;
  undefined8 uVar14;
  float fVar15;
  float fVar16;
  float fVar17;
  float fVar18;
  float fVar19;
  float fVar20;
  float fVar21;
  ulong uVar22;
  undefined8 uVar23;
  double dVar24;
  ulong uVar25;
  undefined4 uVar26;
  int iVar27;
  undefined4 uVar28;
  ulong uVar29;
  int iVar30;
  float fVar31;
  undefined4 uVar32;
  int iVar33;
  double dStack_38;
  
  if ((bRam0000000001342013 & 1) == 0) {
    native_sub_43273c(&UnityEngine_Object_TypeInfo_12d54e0);
    bRam0000000001342013 = 1;
  }
  if (*(int *)((long)param_4 + 0x1e4) == 3) {
    if (param_4[6] == 0) {
LAB_00aeaabc:
                    /* WARNING: Subroutine does not return */
      native_sub_432810();
    }
    uVar9 = *(undefined8 *)(param_4[6] + 0x10);
    if (((*(byte *)(_UnityEngine_Object_TypeInfo_12d54e0 + 0x133) >> 2 & 1) != 0) &&
       (*(int *)(_UnityEngine_Object_TypeInfo_12d54e0 + 0xe0) == 0)) {
      native_sub_4327ec();
    }
    uVar10 = native_UnityEngine_Object__op_Inequality_8d76fc(uVar9,0,0);
    if ((uVar10 & 1) != 0) {
      if (param_4[5] == 0) goto LAB_00aeaabc;
      uVar9 = *(undefined8 *)(param_4[5] + 0x10);
      if (((*(byte *)(_UnityEngine_Object_TypeInfo_12d54e0 + 0x133) >> 2 & 1) != 0) &&
         (*(int *)(_UnityEngine_Object_TypeInfo_12d54e0 + 0xe0) == 0)) {
        native_sub_4327ec();
      }
      uVar10 = native_UnityEngine_Object__op_Inequality_8d76fc(uVar9,0,0);
      goto joined_r0x00aeaa9c;
    }
  }
  else if (*(int *)((long)param_4 + 0x1e4) == 2) {
    uVar10 = native_UIRect__get_isFullyAnchored_c2d4f0(param_4,0);
joined_r0x00aeaa9c:
    if ((uVar10 & 1) != 0) {
      *(undefined4 *)((long)param_4 + 0x1e4) = 0;
    }
  }
  if ((bRam0000000001341468 & 1) == 0) {
    native_sub_43273c(&NGUIMath_TypeInfo_12d53b8,0);
    native_sub_43273c(&UnityEngine_Object_TypeInfo_12d54e0);
    bRam0000000001341468 = 1;
  }
  lVar8 = native_UIRect__get_cachedTransform_c27c58(param_4,0);
  if (lVar8 == 0) goto LAB_0094c61c;
  uVar9 = native_UnityEngine_Transform__get_parent_765eb0(lVar8,0);
  fVar15 = (float)native_UnityEngine_Transform__get_localPosition_7717f4(lVar8,0);
  uVar10 = param_3;
  fVar21 = param_2;
  uVar23 = native_UIWidget__get_pivotOffset_944f8c(param_4);
  fVar18 = (float)uVar10;
  if ((param_4[3] == 0) || (param_4[5] == 0)) goto LAB_0094c61c;
  uVar13 = *(undefined8 *)(param_4[3] + 0x10);
  uVar14 = *(undefined8 *)(param_4[5] + 0x10);
  fVar19 = fVar21;
  if (((*(byte *)(_UnityEngine_Object_TypeInfo_12d54e0 + 0x133) >> 2 & 1) != 0) &&
     (*(int *)(_UnityEngine_Object_TypeInfo_12d54e0 + 0xe0) == 0)) {
    native_sub_4327ec();
  }
  uVar10 = native_UnityEngine_Object__op_Equality_8e9a3c(uVar13,uVar14,0);
  if ((uVar10 & 1) == 0) {
LAB_0094beb8:
    *(undefined1 *)((long)param_4 + 0x156) = 1;
    if (param_4[3] == 0) goto LAB_0094c61c;
    uVar13 = *(undefined8 *)(param_4[3] + 0x10);
    if (((*(byte *)(_UnityEngine_Object_TypeInfo_12d54e0 + 0x133) >> 2 & 1) != 0) &&
       (*(int *)(_UnityEngine_Object_TypeInfo_12d54e0 + 0xe0) == 0)) {
      native_sub_4327ec();
    }
    uVar10 = native_UnityEngine_Object__op_Implicit_8e1b98(uVar13,0);
    if ((uVar10 & 1) == 0) {
      fVar16 = fVar15 - (float)uVar23 * (float)*(int *)((long)param_4 + 0xa4);
    }
    else {
      if (param_4[3] == 0) goto LAB_0094c61c;
      lVar8 = native_UIRect_AnchorPoint__GetSides_559348(param_4[3],uVar9,0);
      if (lVar8 == 0) {
        fVar16 = (float)native_UIRect__GetLocalPos_c2df98(param_4,param_4[3],uVar9,0);
      }
      else {
        if ((*(uint *)(lVar8 + 0x18) == 0) || (*(uint *)(lVar8 + 0x18) < 3)) goto LAB_0094c620;
        if (param_4[3] == 0) goto LAB_0094c61c;
        uVar32 = *(undefined4 *)(lVar8 + 0x20);
        uVar26 = *(undefined4 *)(lVar8 + 0x38);
        uVar28 = *(undefined4 *)(param_4[3] + 0x18);
        if (((*(byte *)(_NGUIMath_TypeInfo_12d53b8 + 0x133) >> 2 & 1) != 0) &&
           (*(int *)(_NGUIMath_TypeInfo_12d53b8 + 0xe0) == 0)) {
          native_sub_4327ec(_NGUIMath_TypeInfo_12d53b8);
        }
        fVar16 = (float)native_NGUIMath__Lerp_804dcc(uVar32,uVar26,uVar28,0);
      }
      if (param_4[3] == 0) goto LAB_0094c61c;
      fVar16 = fVar16 + (float)*(int *)(param_4[3] + 0x1c);
    }
    if (param_4[4] == 0) goto LAB_0094c61c;
    uVar13 = *(undefined8 *)(param_4[4] + 0x10);
    if (((*(byte *)(_UnityEngine_Object_TypeInfo_12d54e0 + 0x133) >> 2 & 1) != 0) &&
       (*(int *)(_UnityEngine_Object_TypeInfo_12d54e0 + 0xe0) == 0)) {
      native_sub_4327ec();
    }
    uVar10 = native_UnityEngine_Object__op_Implicit_8e1b98(uVar13,0);
    if ((uVar10 & 1) == 0) {
      fVar19 = fVar15 - (float)uVar23 * (float)*(int *)((long)param_4 + 0xa4);
      fVar17 = fVar19 + (float)*(int *)((long)param_4 + 0xa4);
    }
    else {
      if (param_4[4] == 0) goto LAB_0094c61c;
      lVar8 = native_UIRect_AnchorPoint__GetSides_559348(param_4[4],uVar9,0);
      if (lVar8 == 0) {
        fVar17 = (float)native_UIRect__GetLocalPos_c2df98(param_4,param_4[4],uVar9,0);
      }
      else {
        if ((*(uint *)(lVar8 + 0x18) == 0) || (*(uint *)(lVar8 + 0x18) < 3)) goto LAB_0094c620;
        if (param_4[4] == 0) goto LAB_0094c61c;
        uVar32 = *(undefined4 *)(lVar8 + 0x20);
        uVar26 = *(undefined4 *)(lVar8 + 0x38);
        uVar28 = *(undefined4 *)(param_4[4] + 0x18);
        if (((*(byte *)(_NGUIMath_TypeInfo_12d53b8 + 0x133) >> 2 & 1) != 0) &&
           (*(int *)(_NGUIMath_TypeInfo_12d53b8 + 0xe0) == 0)) {
          native_sub_4327ec(_NGUIMath_TypeInfo_12d53b8);
        }
        fVar17 = (float)native_NGUIMath__Lerp_804dcc(uVar32,uVar26,uVar28,0);
      }
      if (param_4[4] == 0) goto LAB_0094c61c;
      fVar19 = (float)*(int *)(param_4[4] + 0x1c);
      fVar17 = fVar17 + fVar19;
    }
    if (param_4[5] == 0) goto LAB_0094c61c;
    uVar13 = *(undefined8 *)(param_4[5] + 0x10);
    if (((*(byte *)(_UnityEngine_Object_TypeInfo_12d54e0 + 0x133) >> 2 & 1) != 0) &&
       (*(int *)(_UnityEngine_Object_TypeInfo_12d54e0 + 0xe0) == 0)) {
      native_sub_4327ec();
    }
    uVar10 = native_UnityEngine_Object__op_Implicit_8e1b98(uVar13,0);
    if ((uVar10 & 1) == 0) {
      fVar18 = param_2 - fVar21 * (float)(int)param_4[0x15];
    }
    else {
      if (param_4[5] == 0) goto LAB_0094c61c;
      lVar8 = native_UIRect_AnchorPoint__GetSides_559348(param_4[5],uVar9,0);
      if (lVar8 == 0) {
        native_UIRect__GetLocalPos_c2df98(param_4,param_4[5],uVar9,0);
        if (param_4[5] == 0) goto LAB_0094c61c;
        fVar18 = fVar19 + (float)*(int *)(param_4[5] + 0x1c);
      }
      else {
        if (*(uint *)(lVar8 + 0x18) < 4) goto LAB_0094c620;
        if (param_4[5] == 0) goto LAB_0094c61c;
        uVar32 = *(undefined4 *)(lVar8 + 0x48);
        uVar26 = *(undefined4 *)(lVar8 + 0x30);
        uVar28 = *(undefined4 *)(param_4[5] + 0x18);
        if (((*(byte *)(_NGUIMath_TypeInfo_12d53b8 + 0x133) >> 2 & 1) != 0) &&
           (*(int *)(_NGUIMath_TypeInfo_12d53b8 + 0xe0) == 0)) {
          native_sub_4327ec(_NGUIMath_TypeInfo_12d53b8);
        }
        fVar18 = (float)native_NGUIMath__Lerp_804dcc(uVar32,uVar26,uVar28,0);
        if (param_4[5] == 0) goto LAB_0094c61c;
        fVar19 = (float)*(int *)(param_4[5] + 0x1c);
        fVar18 = fVar18 + fVar19;
      }
    }
    if (param_4[6] == 0) goto LAB_0094c61c;
    uVar13 = *(undefined8 *)(param_4[6] + 0x10);
    if (((*(byte *)(_UnityEngine_Object_TypeInfo_12d54e0 + 0x133) >> 2 & 1) != 0) &&
       (*(int *)(_UnityEngine_Object_TypeInfo_12d54e0 + 0xe0) == 0)) {
      native_sub_4327ec();
    }
    uVar10 = native_UnityEngine_Object__op_Implicit_8e1b98(uVar13,0);
    if ((uVar10 & 1) == 0) {
      fVar20 = (float)(int)param_4[0x15];
      fVar19 = param_2 - fVar21 * fVar20;
    }
    else {
      if (param_4[6] == 0) goto LAB_0094c61c;
      lVar8 = native_UIRect_AnchorPoint__GetSides_559348(param_4[6],uVar9,0);
      if (lVar8 != 0) {
        if (*(uint *)(lVar8 + 0x18) < 4) {
LAB_0094c620:
          uVar9 = native_sub_43283c();
                    /* WARNING: Subroutine does not return */
          native_sub_4327dc(uVar9,0);
        }
        if (param_4[6] == 0) goto LAB_0094c61c;
        uVar32 = *(undefined4 *)(lVar8 + 0x48);
        uVar26 = *(undefined4 *)(lVar8 + 0x30);
        uVar28 = *(undefined4 *)(param_4[6] + 0x18);
        if (((*(byte *)(_NGUIMath_TypeInfo_12d53b8 + 0x133) >> 2 & 1) != 0) &&
           (*(int *)(_NGUIMath_TypeInfo_12d53b8 + 0xe0) == 0)) {
          native_sub_4327ec(_NGUIMath_TypeInfo_12d53b8);
        }
        fVar19 = (float)native_NGUIMath__Lerp_804dcc(uVar32,uVar26,uVar28,0);
        if (param_4[6] == 0) goto LAB_0094c61c;
        fVar19 = fVar19 + (float)*(int *)(param_4[6] + 0x1c);
        goto LAB_0094c2a0;
      }
      native_UIRect__GetLocalPos_c2df98(param_4,param_4[6],uVar9,0);
      if (param_4[6] == 0) goto LAB_0094c61c;
      fVar20 = (float)*(int *)(param_4[6] + 0x1c);
    }
    fVar19 = fVar19 + fVar20;
  }
  else {
    if ((param_4[3] == 0) || (param_4[4] == 0)) goto LAB_0094c61c;
    uVar13 = *(undefined8 *)(param_4[3] + 0x10);
    uVar14 = *(undefined8 *)(param_4[4] + 0x10);
    if (((*(byte *)(_UnityEngine_Object_TypeInfo_12d54e0 + 0x133) >> 2 & 1) != 0) &&
       (*(int *)(_UnityEngine_Object_TypeInfo_12d54e0 + 0xe0) == 0)) {
      native_sub_4327ec();
    }
    uVar10 = native_UnityEngine_Object__op_Equality_8e9a3c(uVar13,uVar14,0);
    if ((uVar10 & 1) == 0) goto LAB_0094beb8;
    if ((param_4[3] == 0) || (param_4[6] == 0)) goto LAB_0094c61c;
    uVar13 = *(undefined8 *)(param_4[3] + 0x10);
    uVar14 = *(undefined8 *)(param_4[6] + 0x10);
    if (((*(byte *)(_UnityEngine_Object_TypeInfo_12d54e0 + 0x133) >> 2 & 1) != 0) &&
       (*(int *)(_UnityEngine_Object_TypeInfo_12d54e0 + 0xe0) == 0)) {
      native_sub_4327ec();
    }
    uVar10 = native_UnityEngine_Object__op_Equality_8e9a3c(uVar13,uVar14,0);
    if ((uVar10 & 1) == 0) goto LAB_0094beb8;
    if (param_4[3] == 0) goto LAB_0094c61c;
    lVar8 = native_UIRect_AnchorPoint__GetSides_559348(param_4[3],uVar9,0);
    if (lVar8 == 0) {
      fVar17 = (float)native_UIRect__GetLocalPos_c2df98(param_4,param_4[3],uVar9,0);
      if ((((param_4[3] == 0) || (param_4[5] == 0)) || (param_4[4] == 0)) || (param_4[6] == 0))
      goto LAB_0094c61c;
      fVar16 = fVar17 + (float)*(int *)(param_4[3] + 0x1c);
      fVar17 = fVar17 + (float)*(int *)(param_4[4] + 0x1c);
      bVar11 = 0.0 <= fVar18 || *(char *)((long)param_4 + 0xd9) == '\0';
      fVar18 = fVar19 + (float)*(int *)(param_4[5] + 0x1c);
      fVar19 = fVar19 + (float)*(int *)(param_4[6] + 0x1c);
    }
    else {
      if ((*(uint *)(lVar8 + 0x18) == 0) || (*(uint *)(lVar8 + 0x18) < 3)) goto LAB_0094c620;
      if (param_4[3] == 0) goto LAB_0094c61c;
      uVar32 = *(undefined4 *)(lVar8 + 0x20);
      uVar26 = *(undefined4 *)(lVar8 + 0x38);
      uVar28 = *(undefined4 *)(param_4[3] + 0x18);
      if (((*(byte *)(_NGUIMath_TypeInfo_12d53b8 + 0x133) >> 2 & 1) != 0) &&
         (*(int *)(_NGUIMath_TypeInfo_12d53b8 + 0xe0) == 0)) {
        native_sub_4327ec();
      }
      fVar16 = (float)native_NGUIMath__Lerp_804dcc(uVar32,uVar26,uVar28,0);
      if (param_4[3] == 0) goto LAB_0094c61c;
      if ((*(uint *)(lVar8 + 0x18) == 0) || (*(uint *)(lVar8 + 0x18) < 3)) goto LAB_0094c620;
      if (param_4[4] == 0) goto LAB_0094c61c;
      iVar27 = *(int *)(param_4[3] + 0x1c);
      fVar17 = (float)native_NGUIMath__Lerp_804dcc
                                (*(undefined4 *)(lVar8 + 0x20),*(undefined4 *)(lVar8 + 0x38),
                                 *(undefined4 *)(param_4[4] + 0x18),0);
      if (param_4[4] == 0) goto LAB_0094c61c;
      if (*(uint *)(lVar8 + 0x18) < 4) goto LAB_0094c620;
      if (param_4[5] == 0) goto LAB_0094c61c;
      iVar30 = *(int *)(param_4[4] + 0x1c);
      fVar18 = (float)native_NGUIMath__Lerp_804dcc
                                (*(undefined4 *)(lVar8 + 0x48),*(undefined4 *)(lVar8 + 0x30),
                                 *(undefined4 *)(param_4[5] + 0x18),0);
      if (param_4[5] == 0) goto LAB_0094c61c;
      if (*(uint *)(lVar8 + 0x18) < 4) goto LAB_0094c620;
      if (param_4[6] == 0) goto LAB_0094c61c;
      iVar33 = *(int *)(param_4[5] + 0x1c);
      fVar19 = (float)native_NGUIMath__Lerp_804dcc
                                (*(undefined4 *)(lVar8 + 0x48),*(undefined4 *)(lVar8 + 0x30),
                                 *(undefined4 *)(param_4[6] + 0x18),0);
      if (param_4[6] == 0) goto LAB_0094c61c;
      param_3 = param_3 & 0xffffffff;
      bVar11 = true;
      fVar16 = fVar16 + (float)iVar27;
      fVar17 = fVar17 + (float)iVar30;
      fVar18 = fVar18 + (float)iVar33;
      fVar19 = fVar19 + (float)*(int *)(param_4[6] + 0x1c);
    }
    *(bool *)((long)param_4 + 0x156) = bVar11;
  }
LAB_0094c2a0:
  fVar20 = (float)native_UnityEngine_Mathf__Lerp_8e5224(fVar16,fVar17,uVar23,0);
  fVar21 = (float)native_UnityEngine_Mathf__Lerp_8e5224(fVar18,fVar19,fVar21,0);
  dVar24 = (double)func_0x002c9600((double)fVar20,&dStack_38);
  if (0.0 <= fVar20) {
    if (dVar24 == 0.5) {
      fVar20 = 1.0;
      goto LAB_0094c310;
    }
    fVar31 = (float)(int)(fVar20 + 0.5);
  }
  else if (dVar24 == -0.5) {
    fVar20 = -1.0;
LAB_0094c310:
    fVar31 = (float)dStack_38;
    if (((long)dStack_38 & 1U) != 0) {
      fVar31 = (float)dStack_38 + fVar20;
    }
  }
  else {
    fVar31 = (float)(int)(fVar20 + -0.5);
  }
  dVar24 = (double)func_0x002c9600((double)fVar21,&dStack_38);
  if (0.0 <= fVar21) {
    if (dVar24 == 0.5) {
      fVar21 = 1.0;
      goto LAB_0094c384;
    }
    fVar20 = (float)(int)(fVar21 + 0.5);
  }
  else if (dVar24 == -0.5) {
    fVar21 = -1.0;
LAB_0094c384:
    fVar20 = (float)dStack_38;
    if (((long)dStack_38 & 1U) != 0) {
      fVar20 = (float)dStack_38 + fVar21;
    }
  }
  else {
    fVar20 = (float)(int)(fVar21 + -0.5);
  }
  iVar27 = native_UnityEngine_Mathf__FloorToInt_8e506c((fVar17 - fVar16) + 0.5,0);
  iVar30 = native_UnityEngine_Mathf__FloorToInt_8e506c((fVar19 - fVar18) + 0.5,0);
  if ((*(int *)((long)param_4 + 0xdc) != 0) && (fVar21 = *(float *)(param_4 + 0x1c), fVar21 != 0.0))
  {
    if (*(int *)((long)param_4 + 0xdc) == 2) {
      iVar27 = native_UnityEngine_Mathf__RoundToInt_8e50f0(fVar21 * (float)iVar30,0);
    }
    else {
      iVar30 = native_UnityEngine_Mathf__RoundToInt_8e50f0((float)iVar27 / fVar21,0);
    }
  }
  iVar33 = (**(code **)(*param_4 + 0x3b8))(param_4,*(undefined8 *)(*param_4 + 0x3c0));
  if (iVar27 < iVar33) {
    iVar27 = (**(code **)(*param_4 + 0x3b8))(param_4,*(undefined8 *)(*param_4 + 0x3c0));
  }
  iVar33 = (**(code **)(*param_4 + 0x3c8))(param_4,*(undefined8 *)(*param_4 + 0x3d0));
  if (iVar30 < iVar33) {
    iVar30 = (**(code **)(*param_4 + 0x3c8))(param_4,*(undefined8 *)(*param_4 + 0x3d0));
  }
  fVar21 = 0.001;
  fVar19 = (float)param_3 - (float)param_3;
  fVar18 = fVar19 * fVar19;
  uVar10 = (ulong)(uint)fVar19;
  if (0.001 < fVar18 + (fVar15 - fVar31) * (fVar15 - fVar31) +
                       (param_2 - fVar20) * (param_2 - fVar20)) {
    fVar21 = 0.001;
    lVar8 = native_UIRect__get_cachedTransform_c27c58(param_4,0);
    if (lVar8 == 0) {
LAB_0094c61c:
                    /* WARNING: Subroutine does not return */
      native_sub_432810();
    }
    fVar18 = fVar20;
    native_UnityEngine_Transform__set_localPosition_7718a4(fVar31,lVar8,0);
    uVar10 = param_3;
    if (*(char *)((long)param_4 + 0x156) != '\0') {
      *(undefined1 *)(param_4 + 0xb) = 1;
    }
  }
  if ((*(int *)((long)param_4 + 0xa4) != iVar27) || ((int)param_4[0x15] != iVar30)) {
    *(int *)((long)param_4 + 0xa4) = iVar27;
    *(int *)(param_4 + 0x15) = iVar30;
    if (*(char *)((long)param_4 + 0x156) != '\0') {
      *(undefined1 *)(param_4 + 0xb) = 1;
    }
    if ((char)param_4[0x1b] != '\0') {
      if ((bRam000000000134145d & 1) == 0) {
        native_sub_43273c(&Method_UnityEngine_Component_GetComponent_BoxCollider2D____12e2998);
        native_sub_43273c(&Method_UnityEngine_Component_GetComponent_BoxCollider____12e2990);
        native_sub_43273c(&NGUITools_TypeInfo_12d53c8);
        native_sub_43273c(&UnityEngine_Object_TypeInfo_12d54e0);
        bRam000000000134145d = 1;
      }
      lVar8 = native_UnityEngine_Component__GetComponent_ActiveAnimation__49daec
                        (param_4,_Method_UnityEngine_Component_GetComponent_BoxCollider____12e2990);
      if (((*(byte *)(_UnityEngine_Object_TypeInfo_12d54e0 + 0x133) >> 2 & 1) != 0) &&
         (*(int *)(_UnityEngine_Object_TypeInfo_12d54e0 + 0xe0) == 0)) {
        native_sub_4327ec(_UnityEngine_Object_TypeInfo_12d54e0);
      }
      uVar7 = native_UnityEngine_Object__op_Inequality_8d76fc(lVar8,0,0);
      if ((uVar7 & 1) == 0) {
        lVar8 = native_UnityEngine_Component__GetComponent_ActiveAnimation__49daec
                          (param_4,
                           _Method_UnityEngine_Component_GetComponent_BoxCollider2D____12e2998);
        fVar15 = (float)uVar10;
        if (((*(byte *)(_NGUITools_TypeInfo_12d53c8 + 0x133) >> 2 & 1) != 0) &&
           (*(int *)(_NGUITools_TypeInfo_12d53c8 + 0xe0) == 0)) {
          native_sub_4327ec(_NGUITools_TypeInfo_12d53c8);
        }
        if ((bRam000000000133f58e & 1) == 0) {
          native_sub_43273c(&NGUITools_TypeInfo_12d53c8,lVar8,0);
          native_sub_43273c(&UnityEngine_Object_TypeInfo_12d54e0);
          native_sub_43273c(&StringLiteral_last_change_12f5390);
          bRam000000000133f58e = 1;
        }
        if (((*(byte *)(_UnityEngine_Object_TypeInfo_12d54e0 + 0x133) >> 2 & 1) != 0) &&
           (*(int *)(_UnityEngine_Object_TypeInfo_12d54e0 + 0xe0) == 0)) {
          native_sub_4327ec();
        }
        uVar10 = native_UnityEngine_Object__op_Inequality_8d76fc(lVar8,0,0);
        if ((uVar10 & 1) == 0) {
          return;
        }
        if (((*(byte *)(_UnityEngine_Object_TypeInfo_12d54e0 + 0x133) >> 2 & 1) != 0) &&
           (*(int *)(_UnityEngine_Object_TypeInfo_12d54e0 + 0xe0) == 0)) {
          native_sub_4327ec();
        }
        uVar10 = native_UnityEngine_Object__op_Inequality_8d76fc(param_4,0,0);
        if ((uVar10 & 1) == 0) {
          return;
        }
        if (param_4 == (long *)0x0) {
LAB_0072ea2c:
                    /* WARNING: Subroutine does not return */
          native_sub_432810();
        }
        lVar12 = *param_4;
        if ((((*(float *)((long)param_4 + 0x104) == 0.0) && (*(float *)(param_4 + 0x21) == 0.0)) &&
            (fVar18 = *(float *)((long)param_4 + 0x10c), fVar18 == 1.0)) &&
           (fVar18 = *(float *)(param_4 + 0x22), fVar18 == 1.0)) {
          lVar12 = (**(code **)(lVar12 + 0x1d8))(param_4,*(undefined8 *)(lVar12 + 0x1e0));
          if (lVar12 == 0) goto LAB_0072ea2c;
          if ((*(uint *)(lVar12 + 0x18) == 0) || (*(uint *)(lVar12 + 0x18) < 3)) {
LAB_0072ea30:
            uVar9 = native_sub_43283c();
                    /* WARNING: Subroutine does not return */
            native_sub_4327dc(uVar9,0);
          }
          uVar9 = *(undefined8 *)(lVar12 + 0x20);
          uVar23 = *(undefined8 *)(lVar12 + 0x38);
          fVar21 = (float)native_UnityEngine_Mathf__Clamp01_8d9d9c(0x3f000000,0);
          if (*(uint *)(lVar12 + 0x18) < 3) goto LAB_0072ea30;
          if (lVar8 == 0) goto LAB_0072ea2c;
          uVar13 = *(undefined8 *)(lVar12 + 0x38);
          fVar18 = (float)uVar9;
          fVar16 = (float)((ulong)uVar9 >> 0x20);
          fVar18 = fVar18 + ((float)uVar23 - fVar18) * fVar21;
          fVar16 = fVar16 + ((float)((ulong)uVar23 >> 0x20) - fVar16) * fVar21;
          uVar9 = CONCAT44(fVar16,fVar18);
          fVar19 = (float)uVar13 - (float)*(undefined8 *)(lVar12 + 0x20);
          fVar21 = (float)((ulong)uVar13 >> 0x20) -
                   (float)((ulong)*(undefined8 *)(lVar12 + 0x20) >> 0x20);
          uVar10 = CONCAT44(fVar21,fVar19);
          fVar15 = (float)native_UnityEngine_Collider2D__get_offset_db8b24(lVar8,0);
          fVar18 = fVar18 - fVar15;
          fVar15 = fVar16 - (float)uVar13;
          if ((fVar18 * fVar18 + fVar15 * fVar15 < 9.9999994e-11) &&
             (uVar23 = uVar9,
             fVar15 = (float)native_UnityEngine_BoxCollider2D__get_size_db8988(lVar8,0),
             fVar19 = fVar19 - fVar15, fVar15 = fVar21 - (float)uVar23,
             fVar19 * fVar19 + fVar15 * fVar15 < 9.9999994e-11)) {
            return;
          }
          native_UnityEngine_Collider2D__set_offset_db8bcc(uVar9,fVar16,lVar8,0);
        }
        else {
          fVar19 = (float)(**(code **)(lVar12 + 0x2f8))(param_4,*(undefined8 *)(lVar12 + 0x300));
          if (lVar8 == 0) goto LAB_0072ea2c;
          uVar10 = (ulong)(uint)(fVar15 - fVar19);
          fVar20 = (fVar19 + fVar15) * 0.5;
          fVar17 = (fVar18 + fVar21) * 0.5;
          fVar21 = fVar21 - fVar18;
          fVar16 = (float)native_UnityEngine_Collider2D__get_offset_db8b24(lVar8,0);
          fVar16 = fVar20 - fVar16;
          fVar18 = fVar17 - fVar18;
          fVar18 = fVar18 * fVar18;
          if ((fVar16 * fVar16 + fVar18 < 9.9999994e-11) &&
             (fVar16 = (float)native_UnityEngine_BoxCollider2D__get_size_db8988(lVar8,0),
             fVar16 = (fVar15 - fVar19) - fVar16,
             fVar16 * fVar16 + (fVar21 - fVar18) * (fVar21 - fVar18) < 9.9999994e-11)) {
            return;
          }
          native_UnityEngine_Collider2D__set_offset_db8bcc(fVar20,fVar17,lVar8,0);
        }
        native_UnityEngine_BoxCollider2D__set_size_db8a30(uVar10,fVar21,lVar8,0);
        if ((*(byte *)(_NGUITools_TypeInfo_12d53c8 + 0x133) >> 2 & 1) == 0) {
          return;
        }
        if (*(int *)(_NGUITools_TypeInfo_12d53c8 + 0xe0) != 0) {
          return;
        }
      }
      else {
        if (((*(byte *)(_NGUITools_TypeInfo_12d53c8 + 0x133) >> 2 & 1) != 0) &&
           (*(int *)(_NGUITools_TypeInfo_12d53c8 + 0xe0) == 0)) {
          native_sub_4327ec();
        }
        if ((bRam000000000133f58d & 1) == 0) {
          native_sub_43273c(&NGUITools_TypeInfo_12d53c8,lVar8,0);
          native_sub_43273c(&UnityEngine_Object_TypeInfo_12d54e0);
          native_sub_43273c(&StringLiteral_last_change_12f5390);
          bRam000000000133f58d = 1;
        }
        if (((*(byte *)(_UnityEngine_Object_TypeInfo_12d54e0 + 0x133) >> 2 & 1) != 0) &&
           (*(int *)(_UnityEngine_Object_TypeInfo_12d54e0 + 0xe0) == 0)) {
          native_sub_4327ec();
        }
        uVar7 = native_UnityEngine_Object__op_Inequality_8d76fc(lVar8,0,0);
        if ((uVar7 & 1) == 0) {
          return;
        }
        if (((*(byte *)(_UnityEngine_Object_TypeInfo_12d54e0 + 0x133) >> 2 & 1) != 0) &&
           (*(int *)(_UnityEngine_Object_TypeInfo_12d54e0 + 0xe0) == 0)) {
          native_sub_4327ec();
        }
        uVar7 = native_UnityEngine_Object__op_Inequality_8d76fc(param_4,0,0);
        if ((uVar7 & 1) == 0) {
          return;
        }
        if (param_4 == (long *)0x0) {
LAB_0072e730:
                    /* WARNING: Subroutine does not return */
          native_sub_432810();
        }
        lVar12 = *param_4;
        if ((((*(float *)((long)param_4 + 0x104) == 0.0) && (*(float *)(param_4 + 0x21) == 0.0)) &&
            (fVar18 = *(float *)((long)param_4 + 0x10c), fVar18 == 1.0)) &&
           (fVar18 = *(float *)(param_4 + 0x22), fVar18 == 1.0)) {
          lVar12 = (**(code **)(lVar12 + 0x1d8))(param_4,*(undefined8 *)(lVar12 + 0x1e0));
          if (lVar12 == 0) goto LAB_0072e730;
          if ((*(uint *)(lVar12 + 0x18) == 0) || (*(uint *)(lVar12 + 0x18) < 3)) {
LAB_0072e734:
            uVar9 = native_sub_43283c();
                    /* WARNING: Subroutine does not return */
            native_sub_4327dc(uVar9,0);
          }
          uVar9 = *(undefined8 *)(lVar12 + 0x20);
          fVar18 = *(float *)(lVar12 + 0x28);
          uVar23 = *(undefined8 *)(lVar12 + 0x38);
          fVar15 = *(float *)(lVar12 + 0x40);
          fVar21 = (float)native_UnityEngine_Mathf__Clamp01_8d9d9c(0x3f000000,0);
          if (*(uint *)(lVar12 + 0x18) < 3) goto LAB_0072e734;
          if (lVar8 == 0) goto LAB_0072e730;
          fVar19 = (float)uVar9;
          fVar16 = (float)((ulong)uVar9 >> 0x20);
          fVar15 = fVar15 - fVar18;
          uVar6 = (ulong)(uint)fVar15;
          fVar16 = fVar16 + ((float)((ulong)uVar23 >> 0x20) - fVar16) * fVar21;
          uVar13 = CONCAT44(fVar16,fVar19 + ((float)uVar23 - fVar19) * fVar21);
          uVar29 = (ulong)(uint)(fVar18 + fVar15 * fVar21);
          fVar19 = (float)((ulong)*(undefined8 *)(lVar12 + 0x38) >> 0x20) -
                   (float)((ulong)*(undefined8 *)(lVar12 + 0x20) >> 0x20);
          uVar22 = CONCAT44(fVar19,(float)*(undefined8 *)(lVar12 + 0x38) -
                                   (float)*(undefined8 *)(lVar12 + 0x20));
          fVar21 = *(float *)(lVar12 + 0x40) - *(float *)(lVar12 + 0x28);
          uVar9 = uVar13;
          uVar23 = native_UnityEngine_BoxCollider__get_center_dba95c(lVar8,0);
          uVar10 = (ulong)(uint)fVar16;
          uVar7 = uVar10;
          uVar25 = uVar29;
          uVar6 = native_UnityEngine_Vector3__op_Inequality_776c48
                            (uVar13,uVar10,uVar29,uVar23,uVar9,uVar6,0);
          if ((uVar6 & 1) == 0) {
            uVar9 = native_UnityEngine_BoxCollider__get_size_dbaab4(lVar8,0);
            uVar7 = native_UnityEngine_Vector3__op_Inequality_776c48
                              (uVar22,fVar19,fVar21,uVar9,uVar7,uVar25,0);
            if ((uVar7 & 1) == 0) {
              return;
            }
          }
          native_UnityEngine_BoxCollider__set_center_dbaa0c(uVar13,uVar10,uVar29,lVar8,0);
        }
        else {
          fVar15 = (float)(**(code **)(lVar12 + 0x2f8))(param_4,*(undefined8 *)(lVar12 + 0x300));
          if (lVar8 == 0) goto LAB_0072e730;
          uVar22 = (ulong)(uint)((float)uVar10 - fVar15);
          fVar19 = fVar21 - fVar18;
          uVar25 = (ulong)(uint)(fVar18 + fVar21);
          uVar6 = (ulong)(uint)((fVar18 + fVar21) * 0.5);
          fVar15 = (fVar15 + (float)uVar10) * 0.5;
          uVar9 = native_UnityEngine_BoxCollider__get_center_dba95c(lVar8,0);
          uVar23 = 0;
          fVar21 = 0.0;
          uVar7 = uVar6;
          uVar10 = native_UnityEngine_Vector3__op_Inequality_776c48
                             (fVar15,uVar6,0,uVar9,uVar25,uVar10,0);
          if ((uVar10 & 1) == 0) {
            uVar9 = native_UnityEngine_BoxCollider__get_size_dbaab4(lVar8,0);
            uVar10 = native_UnityEngine_Vector3__op_Inequality_776c48
                               (uVar22,fVar19,0,uVar9,uVar7,uVar23,0);
            if ((uVar10 & 1) == 0) {
              return;
            }
          }
          native_UnityEngine_BoxCollider__set_center_dbaa0c(fVar15,uVar6,0,lVar8,0);
        }
        native_UnityEngine_BoxCollider__set_size_dbab64(uVar22,fVar19,fVar21,lVar8,0);
        if ((*(byte *)(_NGUITools_TypeInfo_12d53c8 + 0x133) >> 2 & 1) == 0) {
          return;
        }
        if (*(int *)(_NGUITools_TypeInfo_12d53c8 + 0xe0) != 0) {
          return;
        }
      }
      lVar8 = _NGUITools_TypeInfo_12d53c8;
      if ((*(byte *)(_NGUITools_TypeInfo_12d53c8 + 0x133) >> 2 & 1) == 0) {
        return;
      }
      piVar1 = (int *)(_NGUITools_TypeInfo_12d53c8 + 0xe0);
      while (*piVar1 == 1) {
        cVar5 = '\x01';
        bVar11 = (bool)ExclusiveMonitorPass(piVar1,0x10);
        if (bVar11) {
          *piVar1 = 1;
          cVar5 = ExclusiveMonitorsStatus();
        }
        if (cVar5 == '\0') {
          DataMemoryBarrier(2,3);
          return;
        }
      }
      ClearExclusiveLocal();
      DataMemoryBarrier(2,3);
      lVar12 = native_sub_432c38();
      if (lVar12 == lRam00000000013451d0) {
        iRam00000000013451d8 = iRam00000000013451d8 + 1;
      }
      else {
        iVar27 = 0;
        do {
          iVar30 = iRam0000000001345190;
          if (iRam0000000001345190 == iVar27) {
            cVar5 = '\x01';
            bVar11 = (bool)ExclusiveMonitorPass(0x1345190,0x10);
            if (bVar11) {
              cVar5 = ExclusiveMonitorsStatus();
              iRam0000000001345190 = iVar27 + 1;
            }
            if (cVar5 != '\0') goto code_r0x003cc248;
            bVar11 = true;
          }
          else {
            ClearExclusiveLocal();
code_r0x003cc248:
            bVar11 = false;
          }
        } while ((iVar30 != 2) && (iVar27 = iVar30, !bVar11));
        while (iVar30 != 0) {
          native_sub_432bb4(0x1345190,2,0xffffffff);
          do {
            iVar30 = iRam0000000001345190;
            cVar5 = '\x01';
            bVar11 = (bool)ExclusiveMonitorPass(0x1345190,0x10);
            if (bVar11) {
              iRam0000000001345190 = 2;
              cVar5 = ExclusiveMonitorsStatus();
            }
          } while (cVar5 != '\0');
        }
        iRam00000000013451d8 = 1;
        lRam00000000013451d0 = lVar12;
      }
      while (*piVar1 == 1) {
        cVar5 = '\x01';
        bVar11 = (bool)ExclusiveMonitorPass(piVar1,0x10);
        if (bVar11) {
          *piVar1 = 1;
          cVar5 = ExclusiveMonitorsStatus();
        }
        if (cVar5 == '\0') {
          DataMemoryBarrier(2,3);
          if (iRam00000000013451d8 < 1) {
            return;
          }
          if (iRam00000000013451d8 + -1 != 0) {
            iRam00000000013451d8 = iRam00000000013451d8 + -1;
            return;
          }
          lRam00000000013451d0 = 0;
          iRam00000000013451d8 = 0;
          do {
            iVar27 = iRam0000000001345190;
            cVar5 = '\x01';
            bVar11 = (bool)ExclusiveMonitorPass(0x1345190,0x10);
            if (bVar11) {
              iRam0000000001345190 = 0;
              cVar5 = ExclusiveMonitorsStatus();
            }
          } while (cVar5 != '\0');
          if (iVar27 != 2) {
            lRam00000000013451d0 = 0;
            iRam00000000013451d8 = 0;
            return;
          }
          (*(code *)&DAT_0155b260)(0x62,0x1345190,0x81,1,0,0,0);
          return;
        }
      }
      ClearExclusiveLocal();
      DataMemoryBarrier(2,3);
      piVar2 = (int *)(lVar8 + 0xdc);
      do {
        if (*piVar2 != 1) {
          ClearExclusiveLocal();
          DataMemoryBarrier(2,3);
          puVar4 = (undefined8 *)(lVar8 + 0xe8);
          uVar9 = native_sub_3aad3c();
          do {
            cVar5 = '\x01';
            bVar11 = (bool)ExclusiveMonitorPass(puVar4,0x10);
            if (bVar11) {
              *puVar4 = uVar9;
              cVar5 = ExclusiveMonitorsStatus();
            }
          } while (cVar5 != '\0');
          DataMemoryBarrier(2,3);
          do {
            cVar5 = '\x01';
            bVar11 = (bool)ExclusiveMonitorPass(piVar2,0x10);
            if (bVar11) {
              *piVar2 = 1;
              cVar5 = ExclusiveMonitorsStatus();
            }
          } while (cVar5 != '\0');
          DataMemoryBarrier(2,3);
          iVar27 = iRam00000000013451d8 + -1;
          if ((0 < iRam00000000013451d8) && (iRam00000000013451d8 = iVar27, iVar27 == 0)) {
            lRam00000000013451d0 = 0;
            iRam00000000013451d8 = 0;
            do {
              iVar27 = iRam0000000001345190;
              cVar5 = '\x01';
              bVar11 = (bool)ExclusiveMonitorPass(0x1345190,0x10);
              if (bVar11) {
                iRam0000000001345190 = 0;
                cVar5 = ExclusiveMonitorsStatus();
              }
            } while (cVar5 != '\0');
            if (iVar27 == 2) {
              native_sub_432c0c(0x1345190,1,0);
            }
          }
          if (((*(byte *)(lVar8 + 0x133) >> 2 & 1) != 0) &&
             (lVar8 = native_sub_3c573c(lVar8,&UNK_00edd9af,0xffffffff,0x800), lVar8 != 0)) {
            native_sub_3d704c(lVar8,0,0,&stack0xffffffffffffffb8);
          }
          do {
            cVar5 = '\x01';
            bVar11 = (bool)ExclusiveMonitorPass(piVar1,0x10);
            if (bVar11) {
              *piVar1 = 1;
              cVar5 = ExclusiveMonitorsStatus();
            }
          } while (cVar5 != '\0');
          DataMemoryBarrier(2,3);
          do {
            cVar5 = '\x01';
            bVar11 = (bool)ExclusiveMonitorPass(puVar4,0x10);
            if (bVar11) {
              *puVar4 = 0;
              cVar5 = ExclusiveMonitorsStatus();
            }
          } while (cVar5 != '\0');
          DataMemoryBarrier(2,3);
          return;
        }
        cVar5 = '\x01';
        bVar11 = (bool)ExclusiveMonitorPass(piVar2,0x10);
        if (bVar11) {
          *piVar2 = 1;
          cVar5 = ExclusiveMonitorsStatus();
        }
      } while (cVar5 != '\0');
      DataMemoryBarrier(2,3);
      iVar27 = iRam00000000013451d8 + -1;
      if ((0 < iRam00000000013451d8) && (iRam00000000013451d8 = iVar27, iVar27 == 0)) {
        lRam00000000013451d0 = 0;
        iRam00000000013451d8 = 0;
        do {
          iVar27 = iRam0000000001345190;
          cVar5 = '\x01';
          bVar11 = (bool)ExclusiveMonitorPass(0x1345190,0x10);
          if (bVar11) {
            iRam0000000001345190 = 0;
            cVar5 = ExclusiveMonitorsStatus();
          }
        } while (cVar5 != '\0');
        if (iVar27 == 2) {
          native_sub_432c0c(0x1345190,1,0);
        }
      }
      lVar12 = native_sub_3aad3c();
      plVar3 = (long *)(lVar8 + 0xe8);
      do {
        lVar8 = *plVar3;
        if (lVar8 != lVar12) {
          ClearExclusiveLocal();
          break;
        }
        cVar5 = '\x01';
        bVar11 = (bool)ExclusiveMonitorPass(plVar3,0x10);
        if (bVar11) {
          *plVar3 = lVar12;
          cVar5 = ExclusiveMonitorsStatus();
        }
      } while (cVar5 != '\0');
      DataMemoryBarrier(2,3);
      if (lVar8 != lVar12) {
        do {
          iVar27 = *piVar1;
          if (iVar27 != 1) {
            ClearExclusiveLocal();
            break;
          }
          cVar5 = '\x01';
          bVar11 = (bool)ExclusiveMonitorPass(piVar1,0x10);
          if (bVar11) {
            *piVar1 = 1;
            cVar5 = ExclusiveMonitorsStatus();
          }
        } while (cVar5 != '\0');
        DataMemoryBarrier(2,3);
        while (iVar27 == 0) {
          native_sub_3a30dc(1,0);
          do {
            iVar27 = *piVar1;
            if (iVar27 != 1) {
              ClearExclusiveLocal();
              break;
            }
            cVar5 = '\x01';
            bVar11 = (bool)ExclusiveMonitorPass(piVar1,0x10);
            if (bVar11) {
              *piVar1 = 1;
              cVar5 = ExclusiveMonitorsStatus();
            }
          } while (cVar5 != '\0');
          DataMemoryBarrier(2,3);
        }
      }
      return;
    }
  }
  return;
}



/* UILabel$$ProcessAndRequest @ 0xae7fdc
 * void UILabel__ProcessAndRequest (UILabel_o* __this, const MethodInfo* method); */

/* WARNING: Removing unreachable block (ram,0x00ae8ab0) */
/* WARNING: Removing unreachable block (ram,0x00ae8ab8) */
/* WARNING: Removing unreachable block (ram,0x00ae8afc) */
/* WARNING: Removing unreachable block (ram,0x00ae8b04) */
/* WARNING: Removing unreachable block (ram,0x00ae8c74) */
/* WARNING: Removing unreachable block (ram,0x00ae8c80) */
/* WARNING: Removing unreachable block (ram,0x00ae9254) */
/* WARNING: Removing unreachable block (ram,0x00ae9338) */
/* WARNING: Removing unreachable block (ram,0x00ae938c) */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* UILabel$$ProcessAndRequest
   void UILabel__ProcessAndRequest (UILabel_o* __this, const MethodInfo* method); */

void native_UILabel__ProcessAndRequest_ae7fdc(undefined1 param_1 [16],float param_2,long *param_3)

{
  ulong *puVar1;
  bool bVar2;
  undefined4 uVar3;
  int iVar4;
  undefined4 uVar5;
  uint uVar6;
  uint uVar7;
  undefined8 uVar8;
  ulong uVar9;
  ulong uVar10;
  undefined8 *puVar11;
  long lVar12;
  long lVar13;
  long *plVar14;
  char cVar15;
  int iVar16;
  float fVar17;
  float fVar18;
  float fVar19;
  float fVar20;
  
  if ((bRam0000000001342014 & 1) == 0) {
    native_sub_43273c(&UnityEngine_Object_TypeInfo_12d54e0);
    bRam0000000001342014 = 1;
  }
  uVar8 = native_UILabel__get_ambigiousFont_ae8074(param_3);
  if (((*(byte *)(_UnityEngine_Object_TypeInfo_12d54e0 + 0x133) >> 2 & 1) != 0) &&
     (*(int *)(_UnityEngine_Object_TypeInfo_12d54e0 + 0xe0) == 0)) {
    native_sub_4327ec(_UnityEngine_Object_TypeInfo_12d54e0);
  }
  uVar9 = native_UnityEngine_Object__op_Inequality_8d76fc(uVar8,0,0);
  if ((uVar9 & 1) == 0) {
    return;
  }
  if ((bRam0000000001342018 & 1) == 0) {
    native_sub_43273c(&NGUIText_TypeInfo_12d53c0);
    native_sub_43273c(&UnityEngine_Object_TypeInfo_12d54e0);
    native_sub_43273c(&StringLiteral__12eaac0);
    bRam0000000001342018 = 1;
  }
  uVar9 = native_UILabel__get_isValid_ae9740(param_3);
  if ((uVar9 & 1) == 0) {
    return;
  }
  fVar17 = *(float *)((long)param_3 + 0x10c);
  fVar18 = *(float *)((long)param_3 + 0x104);
  fVar19 = *(float *)(param_3 + 0x22);
  fVar20 = *(float *)(param_3 + 0x21);
  uVar5 = 1000000;
  *(undefined1 *)(param_3 + 0xb) = 1;
  *(undefined1 *)((long)param_3 + 0x25c) = 0;
  uVar3 = *(undefined4 *)((long)param_3 + 0xa4);
  if (((*(byte *)(_NGUIText_TypeInfo_12d53c0 + 0x133) >> 2 & 1) != 0) &&
     (*(int *)(_NGUIText_TypeInfo_12d53c0 + 0xe0) == 0)) {
    native_sub_4327ec(_NGUIText_TypeInfo_12d53c0);
  }
  lVar12 = _NGUIText_TypeInfo_12d53c0;
  plVar14 = (long *)(_NGUIText_TypeInfo_12d53c0 + 0xb8);
  *(undefined4 *)(*plVar14 + 0x40) = uVar3;
  lVar13 = param_3[0x15];
  fVar17 = fVar17 - fVar18;
  if (((*(byte *)(lVar12 + 0x133) >> 2 & 1) != 0) && (*(int *)(lVar12 + 0xe0) == 0)) {
    native_sub_4327ec(lVar12);
    plVar14 = (long *)(_NGUIText_TypeInfo_12d53c0 + 0xb8);
    lVar12 = _NGUIText_TypeInfo_12d53c0;
  }
  *(int *)(*(long *)(lVar12 + 0xb8) + 0x44) = (int)lVar13;
  if (fVar17 == 1.0) {
    if (((*(ushort *)(lVar12 + 0x132) >> 10 & 1) != 0) && (*(int *)(lVar12 + 0xe0) == 0)) {
      native_sub_4327ec(lVar12);
      plVar14 = (long *)(_NGUIText_TypeInfo_12d53c0 + 0xb8);
      lVar12 = _NGUIText_TypeInfo_12d53c0;
    }
    uVar3 = *(undefined4 *)(*plVar14 + 0x40);
  }
  else {
    if (((*(ushort *)(lVar12 + 0x132) >> 10 & 1) != 0) && (*(int *)(lVar12 + 0xe0) == 0)) {
      native_sub_4327ec(lVar12);
      plVar14 = (long *)(_NGUIText_TypeInfo_12d53c0 + 0xb8);
    }
    uVar3 = native_UnityEngine_Mathf__RoundToInt_8e50f0(fVar17 * (float)*(int *)(*plVar14 + 0x40),0)
    ;
    lVar12 = _NGUIText_TypeInfo_12d53c0;
  }
  fVar19 = fVar19 - fVar20;
  if (((*(byte *)(lVar12 + 0x133) >> 2 & 1) != 0) && (*(int *)(lVar12 + 0xe0) == 0)) {
    native_sub_4327ec(lVar12);
    lVar12 = _NGUIText_TypeInfo_12d53c0;
  }
  plVar14 = (long *)(lVar12 + 0xb8);
  *(undefined4 *)(*plVar14 + 0x48) = uVar3;
  if (fVar19 == 1.0) {
    if (((*(ushort *)(lVar12 + 0x132) >> 10 & 1) != 0) && (*(int *)(lVar12 + 0xe0) == 0)) {
      native_sub_4327ec(lVar12);
      lVar12 = _NGUIText_TypeInfo_12d53c0;
    }
    uVar3 = *(undefined4 *)(*(long *)(lVar12 + 0xb8) + 0x44);
  }
  else {
    if (((*(ushort *)(lVar12 + 0x132) >> 10 & 1) != 0) && (*(int *)(lVar12 + 0xe0) == 0)) {
      native_sub_4327ec(lVar12);
      plVar14 = (long *)(_NGUIText_TypeInfo_12d53c0 + 0xb8);
    }
    uVar3 = native_UnityEngine_Mathf__RoundToInt_8e50f0(fVar19 * (float)*(int *)(*plVar14 + 0x44),0)
    ;
    lVar12 = _NGUIText_TypeInfo_12d53c0;
  }
  if (((*(byte *)(lVar12 + 0x133) >> 2 & 1) != 0) && (*(int *)(lVar12 + 0xe0) == 0)) {
    native_sub_4327ec(lVar12);
    lVar12 = _NGUIText_TypeInfo_12d53c0;
  }
  *(undefined4 *)(*(long *)(lVar12 + 0xb8) + 0x4c) = uVar3;
  uVar8 = native_UILabel__get_defaultFontSize_ae82a4(param_3);
  uVar3 = native_UnityEngine_Mathf__Abs_8e4b54(uVar8,0);
  *(undefined4 *)(param_3 + 0x4f) = uVar3;
  *(undefined4 *)((long)param_3 + 0x274) = 0x3f800000;
  if (((*(byte *)(_NGUIText_TypeInfo_12d53c0 + 0x133) >> 2 & 1) != 0) &&
     (*(int *)(_NGUIText_TypeInfo_12d53c0 + 0xe0) == 0)) {
    native_sub_4327ec();
  }
  lVar13 = *(long *)(_NGUIText_TypeInfo_12d53c0 + 0xb8);
  if (0 < *(int *)(lVar13 + 0x48)) {
    if (((*(byte *)(_NGUIText_TypeInfo_12d53c0 + 0x133) >> 2 & 1) != 0) &&
       (*(int *)(_NGUIText_TypeInfo_12d53c0 + 0xe0) == 0)) {
      native_sub_4327ec();
      lVar13 = *(long *)(_NGUIText_TypeInfo_12d53c0 + 0xb8);
    }
    if (-1 < *(int *)(lVar13 + 0x4c)) {
      uVar8 = native_UILabel__get_trueTypeFont_ae74d0(param_3);
      if (((*(byte *)(_UnityEngine_Object_TypeInfo_12d54e0 + 0x133) >> 2 & 1) != 0) &&
         (*(int *)(_UnityEngine_Object_TypeInfo_12d54e0 + 0xe0) == 0)) {
        native_sub_4327ec(_UnityEngine_Object_TypeInfo_12d54e0);
      }
      uVar9 = native_UnityEngine_Object__op_Inequality_8d76fc(uVar8,0,0);
      uVar3 = 0x3f800000;
      if (((uVar9 & 1) == 0) ||
         (uVar9 = native_UILabel__get_keepCrisp_ae8860(param_3), uVar3 = 0x3f800000,
         (uVar9 & 1) == 0)) {
LAB_00ae8dcc:
        *(undefined4 *)(param_3 + 0x4b) = uVar3;
      }
      else {
        lVar13 = native_UIRect__get_root_c2d7ac(param_3,0);
        if (((*(byte *)(_UnityEngine_Object_TypeInfo_12d54e0 + 0x133) >> 2 & 1) != 0) &&
           (*(int *)(_UnityEngine_Object_TypeInfo_12d54e0 + 0xe0) == 0)) {
          native_sub_4327ec(_UnityEngine_Object_TypeInfo_12d54e0);
        }
        uVar9 = native_UnityEngine_Object__op_Inequality_8d76fc(lVar13,0,0);
        if ((uVar9 & 1) != 0) {
          if (((*(byte *)(_UnityEngine_Object_TypeInfo_12d54e0 + 0x133) >> 2 & 1) != 0) &&
             (*(int *)(_UnityEngine_Object_TypeInfo_12d54e0 + 0xe0) == 0)) {
            native_sub_4327ec();
          }
          uVar9 = native_UnityEngine_Object__op_Inequality_8d76fc(lVar13,0,0);
          if ((uVar9 & 1) != 0) {
            if (lVar13 == 0) goto LAB_00ae93c0;
            uVar3 = native_UIRoot__get_pixelSizeAdjustment_c2f740(lVar13,0);
          }
          goto LAB_00ae8dcc;
        }
      }
      native_UILabel__UpdateNGUIText_aeae48(param_3);
      if (*(int *)((long)param_3 + 0x1e4) == 3) {
        lVar13 = _NGUIText_TypeInfo_12d53c0;
        if ((*(byte *)(_NGUIText_TypeInfo_12d53c0 + 0x133) >> 2 & 1) != 0) {
LAB_00ae8eb4:
          if (*(int *)(lVar13 + 0xe0) == 0) {
            native_sub_4327ec();
            lVar13 = _NGUIText_TypeInfo_12d53c0;
          }
        }
LAB_00ae8ec4:
        plVar14 = (long *)(lVar13 + 0xb8);
        *(undefined4 *)(*plVar14 + 0x44) = 1000000;
LAB_00ae8ecc:
        *(undefined4 *)(*plVar14 + 0x4c) = uVar5;
      }
      else if (*(int *)((long)param_3 + 0x1e4) == 2) {
        iVar16 = *(int *)((long)param_3 + 0x224);
        if (iVar16 < 1) {
          if (((*(ushort *)(_NGUIText_TypeInfo_12d53c0 + 0x132) >> 10 & 1) != 0) &&
             (*(int *)(_NGUIText_TypeInfo_12d53c0 + 0xe0) == 0)) {
            native_sub_4327ec();
          }
          lVar13 = _NGUIText_TypeInfo_12d53c0;
          *(undefined4 *)(*(long *)(_NGUIText_TypeInfo_12d53c0 + 0xb8) + 0x40) = 1000000;
          uVar3 = 1000000;
        }
        else {
          if (((*(ushort *)(_NGUIText_TypeInfo_12d53c0 + 0x132) >> 10 & 1) != 0) &&
             (*(int *)(_NGUIText_TypeInfo_12d53c0 + 0xe0) == 0)) {
            native_sub_4327ec();
          }
          lVar13 = _NGUIText_TypeInfo_12d53c0;
          *(int *)(*(long *)(_NGUIText_TypeInfo_12d53c0 + 0xb8) + 0x40) = iVar16;
          uVar3 = *(undefined4 *)((long)param_3 + 0x224);
        }
        *(undefined4 *)(*(long *)(lVar13 + 0xb8) + 0x48) = uVar3;
        lVar12 = param_3[0x45];
        if ((int)lVar12 < 1) {
          if ((*(ushort *)(lVar13 + 0x132) >> 10 & 1) != 0) goto LAB_00ae8eb4;
          goto LAB_00ae8ec4;
        }
        if (((*(ushort *)(lVar13 + 0x132) >> 10 & 1) != 0) && (*(int *)(lVar13 + 0xe0) == 0)) {
          native_sub_4327ec();
          lVar13 = _NGUIText_TypeInfo_12d53c0;
        }
        plVar14 = (long *)(lVar13 + 0xb8);
        *(int *)(*plVar14 + 0x44) = (int)lVar12;
        uVar5 = (undefined4)param_3[0x45];
        goto LAB_00ae8ecc;
      }
      if ((int)param_3[0x4f] < 1) {
        lVar13 = native_UIRect__get_cachedTransform_c27c58(param_3,0);
        native_UnityEngine_Vector3__get_one_776a20(0);
        if (lVar13 == 0) {
LAB_00ae93c0:
                    /* WARNING: Subroutine does not return */
          native_sub_432810();
        }
        native_UnityEngine_Transform__set_localScale_771e30(lVar13,0);
        param_3[0x4c] = _StringLiteral__12eaac0;
        native_sub_4326e0(param_3 + 0x4c);
        *(undefined4 *)((long)param_3 + 0x274) = 0x3f800000;
      }
      else {
        uVar9 = native_UILabel__get_keepCrisp_ae8860();
        iVar16 = (int)param_3[0x4f];
        if (0 < iVar16) {
          plVar14 = param_3 + 0x4c;
          while( true ) {
            if ((uVar9 & 1) == 0) {
              param_2 = (float)iVar16;
              *(float *)((long)param_3 + 0x274) = param_2 / (float)(int)param_3[0x4f];
              lVar13 = native_UILabel__get_font_ae77e8(param_3);
              if (lVar13 == 0) {
                uVar3 = *(undefined4 *)((long)param_3 + 0x274);
                if (((*(byte *)(_NGUIText_TypeInfo_12d53c0 + 0x133) >> 2 & 1) != 0) &&
                   (*(int *)(_NGUIText_TypeInfo_12d53c0 + 0xe0) == 0)) {
                  native_sub_4327ec(_NGUIText_TypeInfo_12d53c0);
                }
                lVar13 = _NGUIText_TypeInfo_12d53c0;
                *(undefined4 *)(*(long *)(_NGUIText_TypeInfo_12d53c0 + 0xb8) + 0x20) = uVar3;
              }
              else {
                lVar12 = param_3[0x36];
                iVar4 = native_UILabel__get_defaultFontSize_ae82a4(param_3);
                fVar18 = *(float *)((long)param_3 + 0x274);
                if (((*(byte *)(_NGUIText_TypeInfo_12d53c0 + 0x133) >> 2 & 1) != 0) &&
                   (*(int *)(_NGUIText_TypeInfo_12d53c0 + 0xe0) == 0)) {
                  native_sub_4327ec(_NGUIText_TypeInfo_12d53c0);
                }
                lVar13 = _NGUIText_TypeInfo_12d53c0;
                param_2 = (float)iVar4;
                *(float *)(*(long *)(_NGUIText_TypeInfo_12d53c0 + 0xb8) + 0x20) =
                     fVar18 * ((float)(int)lVar12 / param_2);
              }
            }
            else {
              *(int *)(param_3 + 0x4f) = iVar16;
              if (((*(byte *)(_NGUIText_TypeInfo_12d53c0 + 0x133) >> 2 & 1) != 0) &&
                 (*(int *)(_NGUIText_TypeInfo_12d53c0 + 0xe0) == 0)) {
                native_sub_4327ec(_NGUIText_TypeInfo_12d53c0);
              }
              lVar13 = _NGUIText_TypeInfo_12d53c0;
              *(int *)(*(long *)(_NGUIText_TypeInfo_12d53c0 + 0xb8) + 0x1c) = iVar16;
            }
            if (((*(byte *)(lVar13 + 0x133) >> 2 & 1) != 0) && (*(int *)(lVar13 + 0xe0) == 0)) {
              native_sub_4327ec(lVar13);
            }
            native_NGUIText__Update_8088c0(0,0);
            uVar8 = native_UILabel__get_printedText_aea210(param_3);
            cVar15 = '\0';
            if (*(int *)((long)param_3 + 0x1e4) == 1) {
              cVar15 = (char)param_3[0x44];
            }
            if (((*(byte *)(_NGUIText_TypeInfo_12d53c0 + 0x133) >> 2 & 1) != 0) &&
               (*(int *)(_NGUIText_TypeInfo_12d53c0 + 0xe0) == 0)) {
              native_sub_4327ec();
            }
            uVar10 = native_NGUIText__WrapText_80dd68(uVar8,plVar14,0,0,cVar15 != '\0',0);
            iVar4 = *(int *)((long)param_3 + 0x1e4);
            if (((uVar10 & 1) != 0) || (iVar4 != 0)) break;
LAB_00ae90a4:
            if ((iVar16 + -1 < 2) || (iVar16 = iVar16 + -2, iVar16 < 1)) goto LAB_00ae9104;
          }
          if (iVar4 == 2) {
            lVar13 = *plVar14;
            if (((*(byte *)(_NGUIText_TypeInfo_12d53c0 + 0x133) >> 2 & 1) != 0) &&
               (*(int *)(_NGUIText_TypeInfo_12d53c0 + 0xe0) == 0)) {
              native_sub_4327ec();
            }
            uVar3 = native_NGUIText__CalculatePrintedSize_80cd38(lVar13,0,0);
            *(undefined4 *)((long)param_3 + 0x26c) = uVar3;
            *(float *)(param_3 + 0x4e) = param_2;
            if (((uVar10 & 1) == 0) && (0 < *(int *)((long)param_3 + 0x224))) goto LAB_00ae90a4;
            uVar3 = (**(code **)(*param_3 + 0x3b8))(param_3,*(undefined8 *)(*param_3 + 0x3c0));
            uVar5 = native_UnityEngine_Mathf__RoundToInt_8e50f0
                              (*(undefined4 *)((long)param_3 + 0x26c),0);
            uVar6 = native_UnityEngine_Mathf__Max_8e4cd0(uVar3,uVar5,0);
            if (fVar17 != 1.0) {
              uVar6 = native_UnityEngine_Mathf__RoundToInt_8e50f0((float)(int)uVar6 / fVar17,0);
            }
            uVar3 = (**(code **)(*param_3 + 0x3c8))(param_3,*(undefined8 *)(*param_3 + 0x3d0));
            uVar5 = native_UnityEngine_Mathf__RoundToInt_8e50f0((int)param_3[0x4e],0);
            uVar7 = native_UnityEngine_Mathf__Max_8e4cd0(uVar3,uVar5,0);
            if (fVar19 != 1.0) {
              uVar7 = native_UnityEngine_Mathf__RoundToInt_8e50f0((float)(int)uVar7 / fVar19,0);
            }
            iVar16 = (uVar6 & 1) + uVar6;
            iVar4 = (uVar7 & 1) + uVar7;
            if ((*(int *)((long)param_3 + 0xa4) != iVar16) || ((int)param_3[0x15] != iVar4)) {
              lVar13 = param_3[0x18];
              *(int *)((long)param_3 + 0xa4) = iVar16;
              *(int *)(param_3 + 0x15) = iVar4;
              *(int *)((long)param_3 + 0x27c) = iVar16;
              *(int *)(param_3 + 0x50) = iVar4;
joined_r0x00ae9304:
              if (lVar13 != 0) {
                native_UIWidget_OnDimensionsChanged__Invoke_55ba68(lVar13,0);
              }
            }
          }
          else {
            lVar13 = *plVar14;
            if (iVar4 == 3) {
              if (((*(ushort *)(_NGUIText_TypeInfo_12d53c0 + 0x132) >> 10 & 1) != 0) &&
                 (*(int *)(_NGUIText_TypeInfo_12d53c0 + 0xe0) == 0)) {
                native_sub_4327ec();
              }
              uVar3 = native_NGUIText__CalculatePrintedSize_80cd38(lVar13,0,0);
              *(undefined4 *)((long)param_3 + 0x26c) = uVar3;
              *(float *)(param_3 + 0x4e) = param_2;
              uVar3 = (**(code **)(*param_3 + 0x3c8))(param_3,*(undefined8 *)(*param_3 + 0x3d0));
              uVar5 = native_UnityEngine_Mathf__RoundToInt_8e50f0((int)param_3[0x4e],0);
              uVar6 = native_UnityEngine_Mathf__Max_8e4cd0(uVar3,uVar5,0);
              if (fVar19 != 1.0) {
                uVar6 = native_UnityEngine_Mathf__RoundToInt_8e50f0((float)(int)uVar6 / fVar19,0);
              }
              iVar16 = (uVar6 & 1) + uVar6;
              if ((int)param_3[0x15] != iVar16) {
                lVar13 = param_3[0x18];
                *(int *)(param_3 + 0x15) = iVar16;
                *(int *)(param_3 + 0x50) = iVar16;
                goto joined_r0x00ae9304;
              }
            }
            else {
              if (((*(ushort *)(_NGUIText_TypeInfo_12d53c0 + 0x132) >> 10 & 1) != 0) &&
                 (*(int *)(_NGUIText_TypeInfo_12d53c0 + 0xe0) == 0)) {
                native_sub_4327ec();
              }
              uVar3 = native_NGUIText__CalculatePrintedSize_80cd38(lVar13,0,0);
              *(undefined4 *)((long)param_3 + 0x26c) = uVar3;
              *(float *)(param_3 + 0x4e) = param_2;
            }
          }
        }
      }
LAB_00ae9104:
      if (((*(byte *)(_NGUIText_TypeInfo_12d53c0 + 0x133) >> 2 & 1) != 0) &&
         (*(int *)(_NGUIText_TypeInfo_12d53c0 + 0xe0) == 0)) {
        native_sub_4327ec();
      }
      puVar11 = *(undefined8 **)(_NGUIText_TypeInfo_12d53c0 + 0xb8);
      *puVar11 = 0;
      native_sub_4326e0(puVar11,0);
      plVar14 = (long *)(*(long *)(_NGUIText_TypeInfo_12d53c0 + 0xb8) + 8);
      *plVar14 = 0;
      goto native_sub_41086c;
    }
  }
  plVar14 = param_3 + 0x4c;
  param_3[0x4c] = _StringLiteral__12eaac0;
native_sub_41086c:
  if (iRam0000000001345318 != 0) {
    puVar1 = (ulong *)(((ulong)plVar14 >> 0x12 & 0x7fff) * 8 + 0x138ecd8);
    do {
      cVar15 = '\x01';
      bVar2 = (bool)ExclusiveMonitorPass(puVar1,0x10);
      if (bVar2) {
        *puVar1 = *puVar1 | 1L << ((ulong)plVar14 >> 0xc & 0x3f);
        cVar15 = ExclusiveMonitorsStatus();
      }
    } while (cVar15 != '\0');
  }
  return;
}



/* UILabel$$OnEnable @ 0xaeaac0
 * void UILabel__OnEnable (UILabel_o* __this, const MethodInfo* method); */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* UILabel$$OnEnable
   void UILabel__OnEnable (UILabel_o* __this, const MethodInfo* method); */

void native_UILabel__OnEnable_aeaac0(long param_1)

{
  bool bVar1;
  undefined8 uVar2;
  long *plVar3;
  long lVar4;
  char *pcVar5;
  long lVar6;
  
  if ((bRam0000000001342015 & 1) == 0) {
    native_sub_43273c(&Method_System_Action_Font___ctor___12d7f98);
    native_sub_43273c(&System_Action_Font__TypeInfo_12d2058);
    native_sub_43273c(&Method_UILabel_OnFontChanged___12e7838);
    native_sub_43273c(&UILabel_TypeInfo_12d6468);
    bRam0000000001342015 = 1;
  }
  *(undefined1 *)(param_1 + 0x58) = 1;
  *(undefined1 *)(param_1 + 0x25c) = 1;
  native_UIRect__OnEnable_c2e32c(param_1,0);
  if (((*(byte *)(_UILabel_TypeInfo_12d6468 + 0x133) >> 2 & 1) != 0) &&
     (*(int *)(_UILabel_TypeInfo_12d6468 + 0xe0) == 0)) {
    native_sub_4327ec();
  }
  pcVar5 = (char *)(*(long *)(_UILabel_TypeInfo_12d6468 + 0xb8) + 0x18);
  if (*pcVar5 != '\0') {
    return;
  }
  if (((*(byte *)(_UILabel_TypeInfo_12d6468 + 0x133) >> 2 & 1) != 0) &&
     (*(int *)(_UILabel_TypeInfo_12d6468 + 0xe0) == 0)) {
    native_sub_4327ec();
    pcVar5 = (char *)(*(long *)(_UILabel_TypeInfo_12d6468 + 0xb8) + 0x18);
  }
  *pcVar5 = '\x01';
  uVar2 = native_sub_432808(_System_Action_Font__TypeInfo_12d2058);
  native_System_Action_Font____ctor_9867a8
            (uVar2,0,_Method_UILabel_OnFontChanged___12e7838,
             _Method_System_Action_Font___ctor___12d7f98);
  if ((bRam0000000001343695 & 1) == 0) {
    native_sub_43273c(&System_Action_Font__TypeInfo_12d2058,0);
    native_sub_43273c(&UnityEngine_Font_TypeInfo_12d46d8);
    bRam0000000001343695 = 1;
  }
  lVar6 = **(long **)(_UnityEngine_Font_TypeInfo_12d46d8 + 0xb8);
  while ((plVar3 = (long *)native_System_Delegate__Combine_a6cf00(lVar6,uVar2,0),
         plVar3 == (long *)0x0 || (*plVar3 == _System_Action_Font__TypeInfo_12d2058))) {
    lVar4 = native_sub_4272f4(*(undefined8 *)(_UnityEngine_Font_TypeInfo_12d46d8 + 0xb8),plVar3,
                              lVar6);
    bVar1 = lVar6 == lVar4;
    lVar6 = lVar4;
    if (bVar1) {
      return;
    }
  }
  uVar2 = native_sub_432b04(plVar3);
  if ((bRam0000000001343696 & 1) == 0) {
    native_sub_43273c(&System_Action_Font__TypeInfo_12d2058);
    native_sub_43273c(&UnityEngine_Font_TypeInfo_12d46d8);
    bRam0000000001343696 = 1;
  }
  lVar6 = **(long **)(_UnityEngine_Font_TypeInfo_12d46d8 + 0xb8);
  while ((plVar3 = (long *)native_System_Delegate__Remove_a6d1c0(lVar6,uVar2,0),
         plVar3 == (long *)0x0 || (*plVar3 == _System_Action_Font__TypeInfo_12d2058))) {
    lVar4 = native_sub_4272f4(*(undefined8 *)(_UnityEngine_Font_TypeInfo_12d46d8 + 0xb8),plVar3,
                              lVar6);
    bVar1 = lVar6 == lVar4;
    lVar6 = lVar4;
    if (bVar1) {
      return;
    }
  }
  uVar2 = native_sub_432b04(plVar3);
  if (pcRam0000000001343698 == (code *)0x0) {
    pcRam0000000001343698 = (code *)native_sub_4326f0(&UNK_00ec7d87);
  }
                    /* WARNING: Could not recover jumptable at 0x00db3b6c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*pcRam0000000001343698)(uVar2);
  return;
}



/* UILabel$$OnStart @ 0xaeabd8
 * void UILabel__OnStart (UILabel_o* __this, const MethodInfo* method); */

/* WARNING: Removing unreachable block (ram,0x00ae8ab0) */
/* WARNING: Removing unreachable block (ram,0x00ae8ab8) */
/* WARNING: Removing unreachable block (ram,0x00ae8afc) */
/* WARNING: Removing unreachable block (ram,0x00ae8b04) */
/* WARNING: Removing unreachable block (ram,0x00ae8c74) */
/* WARNING: Removing unreachable block (ram,0x00ae8c80) */
/* WARNING: Removing unreachable block (ram,0x00ae9254) */
/* WARNING: Removing unreachable block (ram,0x00ae9338) */
/* WARNING: Removing unreachable block (ram,0x00ae938c) */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* UILabel$$OnStart
   void UILabel__OnStart (UILabel_o* __this, const MethodInfo* method); */

void native_UILabel__OnStart_aeabd8(undefined1 param_1 [16],float param_2,long *param_3)

{
  ulong *puVar1;
  bool bVar2;
  byte bVar3;
  int iVar4;
  undefined4 uVar5;
  uint uVar6;
  uint uVar7;
  undefined4 uVar8;
  ulong uVar9;
  undefined8 *puVar10;
  undefined8 uVar11;
  ulong uVar12;
  long lVar13;
  long lVar14;
  long *plVar15;
  char cVar16;
  int iVar17;
  float fVar18;
  float fVar19;
  float fVar20;
  float fVar21;
  
  if ((bRam0000000001342016 & 1) == 0) {
    native_sub_43273c(&UnityEngine_Object_TypeInfo_12d54e0);
    native_sub_43273c(&StringLiteral_Premultiplied_12f06a8);
    bRam0000000001342016 = 1;
  }
  native_UIWidget__OnStart_94bbd4(param_3,0);
  if (0.0 < *(float *)(param_3 + 0x48)) {
    uVar8 = native_UnityEngine_Mathf__RoundToInt_8e50f0(0);
    *(undefined4 *)(param_3 + 0x47) = uVar8;
    *(undefined4 *)(param_3 + 0x48) = 0;
  }
  if (*(char *)((long)param_3 + 0x244) == '\0') {
    *(undefined4 *)(param_3 + 0x38) = 1;
    *(undefined1 *)((long)param_3 + 0x244) = 1;
  }
  uVar11 = (**(code **)(*param_3 + 0x308))(param_3,*(undefined8 *)(*param_3 + 0x310));
  if (((*(byte *)(_UnityEngine_Object_TypeInfo_12d54e0 + 0x133) >> 2 & 1) != 0) &&
     (*(int *)(_UnityEngine_Object_TypeInfo_12d54e0 + 0xe0) == 0)) {
    native_sub_4327ec(_UnityEngine_Object_TypeInfo_12d54e0);
  }
  uVar12 = native_UnityEngine_Object__op_Inequality_8d76fc(uVar11,0,0);
  if ((uVar12 & 1) == 0) {
LAB_00aead44:
    bVar3 = 0;
  }
  else {
    lVar13 = (**(code **)(*param_3 + 0x308))(param_3,*(undefined8 *)(*param_3 + 0x310));
    if (lVar13 == 0) {
LAB_00aead78:
                    /* WARNING: Subroutine does not return */
      native_sub_432810();
    }
    uVar11 = native_UnityEngine_Material__get_shader_8e3078(lVar13,0);
    if (((*(byte *)(_UnityEngine_Object_TypeInfo_12d54e0 + 0x133) >> 2 & 1) != 0) &&
       (*(int *)(_UnityEngine_Object_TypeInfo_12d54e0 + 0xe0) == 0)) {
      native_sub_4327ec(_UnityEngine_Object_TypeInfo_12d54e0);
    }
    uVar12 = native_UnityEngine_Object__op_Inequality_8d76fc(uVar11,0,0);
    if ((uVar12 & 1) == 0) goto LAB_00aead44;
    lVar13 = (**(code **)(*param_3 + 0x308))(param_3,*(undefined8 *)(*param_3 + 0x310));
    if (((lVar13 == 0) ||
        (lVar13 = native_UnityEngine_Material__get_shader_8e3078(lVar13,0), lVar13 == 0)) ||
       (lVar13 = native_UnityEngine_Object__get_name_8e8098(lVar13,0), lVar13 == 0))
    goto LAB_00aead78;
    bVar3 = native_System_String__Contains_b0bafc(lVar13,_StringLiteral_Premultiplied_12f06a8,0);
    bVar3 = bVar3 & 1;
  }
  *(byte *)(param_3 + 0x4d) = bVar3;
  if (*(char *)((long)param_3 + 0x25c) == '\0') {
    return;
  }
  if ((bRam0000000001342014 & 1) == 0) {
    native_sub_43273c(&UnityEngine_Object_TypeInfo_12d54e0);
    bRam0000000001342014 = 1;
  }
  uVar11 = native_UILabel__get_ambigiousFont_ae8074(param_3);
  if (((*(byte *)(_UnityEngine_Object_TypeInfo_12d54e0 + 0x133) >> 2 & 1) != 0) &&
     (*(int *)(_UnityEngine_Object_TypeInfo_12d54e0 + 0xe0) == 0)) {
    native_sub_4327ec(_UnityEngine_Object_TypeInfo_12d54e0);
  }
  uVar12 = native_UnityEngine_Object__op_Inequality_8d76fc(uVar11,0,0);
  if ((uVar12 & 1) == 0) {
    return;
  }
  if ((bRam0000000001342018 & 1) == 0) {
    native_sub_43273c(&NGUIText_TypeInfo_12d53c0);
    native_sub_43273c(&UnityEngine_Object_TypeInfo_12d54e0);
    native_sub_43273c(&StringLiteral__12eaac0);
    bRam0000000001342018 = 1;
  }
  uVar12 = native_UILabel__get_isValid_ae9740(param_3);
  if ((uVar12 & 1) == 0) {
    return;
  }
  fVar18 = *(float *)((long)param_3 + 0x10c);
  fVar19 = *(float *)((long)param_3 + 0x104);
  fVar20 = *(float *)(param_3 + 0x22);
  fVar21 = *(float *)(param_3 + 0x21);
  uVar5 = 1000000;
  *(undefined1 *)(param_3 + 0xb) = 1;
  *(undefined1 *)((long)param_3 + 0x25c) = 0;
  uVar8 = *(undefined4 *)((long)param_3 + 0xa4);
  if (((*(byte *)(_NGUIText_TypeInfo_12d53c0 + 0x133) >> 2 & 1) != 0) &&
     (*(int *)(_NGUIText_TypeInfo_12d53c0 + 0xe0) == 0)) {
    native_sub_4327ec(_NGUIText_TypeInfo_12d53c0);
  }
  lVar14 = _NGUIText_TypeInfo_12d53c0;
  plVar15 = (long *)(_NGUIText_TypeInfo_12d53c0 + 0xb8);
  *(undefined4 *)(*plVar15 + 0x40) = uVar8;
  lVar13 = param_3[0x15];
  fVar18 = fVar18 - fVar19;
  if (((*(byte *)(lVar14 + 0x133) >> 2 & 1) != 0) && (*(int *)(lVar14 + 0xe0) == 0)) {
    native_sub_4327ec(lVar14);
    plVar15 = (long *)(_NGUIText_TypeInfo_12d53c0 + 0xb8);
    lVar14 = _NGUIText_TypeInfo_12d53c0;
  }
  *(int *)(*(long *)(lVar14 + 0xb8) + 0x44) = (int)lVar13;
  if (fVar18 == 1.0) {
    if (((*(ushort *)(lVar14 + 0x132) >> 10 & 1) != 0) && (*(int *)(lVar14 + 0xe0) == 0)) {
      native_sub_4327ec(lVar14);
      plVar15 = (long *)(_NGUIText_TypeInfo_12d53c0 + 0xb8);
      lVar14 = _NGUIText_TypeInfo_12d53c0;
    }
    uVar8 = *(undefined4 *)(*plVar15 + 0x40);
  }
  else {
    if (((*(ushort *)(lVar14 + 0x132) >> 10 & 1) != 0) && (*(int *)(lVar14 + 0xe0) == 0)) {
      native_sub_4327ec(lVar14);
      plVar15 = (long *)(_NGUIText_TypeInfo_12d53c0 + 0xb8);
    }
    uVar8 = native_UnityEngine_Mathf__RoundToInt_8e50f0(fVar18 * (float)*(int *)(*plVar15 + 0x40),0)
    ;
    lVar14 = _NGUIText_TypeInfo_12d53c0;
  }
  fVar20 = fVar20 - fVar21;
  if (((*(byte *)(lVar14 + 0x133) >> 2 & 1) != 0) && (*(int *)(lVar14 + 0xe0) == 0)) {
    native_sub_4327ec(lVar14);
    lVar14 = _NGUIText_TypeInfo_12d53c0;
  }
  plVar15 = (long *)(lVar14 + 0xb8);
  *(undefined4 *)(*plVar15 + 0x48) = uVar8;
  if (fVar20 == 1.0) {
    if (((*(ushort *)(lVar14 + 0x132) >> 10 & 1) != 0) && (*(int *)(lVar14 + 0xe0) == 0)) {
      native_sub_4327ec(lVar14);
      lVar14 = _NGUIText_TypeInfo_12d53c0;
    }
    uVar8 = *(undefined4 *)(*(long *)(lVar14 + 0xb8) + 0x44);
  }
  else {
    if (((*(ushort *)(lVar14 + 0x132) >> 10 & 1) != 0) && (*(int *)(lVar14 + 0xe0) == 0)) {
      native_sub_4327ec(lVar14);
      plVar15 = (long *)(_NGUIText_TypeInfo_12d53c0 + 0xb8);
    }
    uVar8 = native_UnityEngine_Mathf__RoundToInt_8e50f0(fVar20 * (float)*(int *)(*plVar15 + 0x44),0)
    ;
    lVar14 = _NGUIText_TypeInfo_12d53c0;
  }
  if (((*(byte *)(lVar14 + 0x133) >> 2 & 1) != 0) && (*(int *)(lVar14 + 0xe0) == 0)) {
    native_sub_4327ec(lVar14);
    lVar14 = _NGUIText_TypeInfo_12d53c0;
  }
  *(undefined4 *)(*(long *)(lVar14 + 0xb8) + 0x4c) = uVar8;
  uVar11 = native_UILabel__get_defaultFontSize_ae82a4(param_3);
  uVar8 = native_UnityEngine_Mathf__Abs_8e4b54(uVar11,0);
  *(undefined4 *)(param_3 + 0x4f) = uVar8;
  *(undefined4 *)((long)param_3 + 0x274) = 0x3f800000;
  if (((*(byte *)(_NGUIText_TypeInfo_12d53c0 + 0x133) >> 2 & 1) != 0) &&
     (*(int *)(_NGUIText_TypeInfo_12d53c0 + 0xe0) == 0)) {
    native_sub_4327ec();
  }
  lVar13 = *(long *)(_NGUIText_TypeInfo_12d53c0 + 0xb8);
  if (0 < *(int *)(lVar13 + 0x48)) {
    if (((*(byte *)(_NGUIText_TypeInfo_12d53c0 + 0x133) >> 2 & 1) != 0) &&
       (*(int *)(_NGUIText_TypeInfo_12d53c0 + 0xe0) == 0)) {
      native_sub_4327ec();
      lVar13 = *(long *)(_NGUIText_TypeInfo_12d53c0 + 0xb8);
    }
    if (-1 < *(int *)(lVar13 + 0x4c)) {
      uVar11 = native_UILabel__get_trueTypeFont_ae74d0(param_3);
      if (((*(byte *)(_UnityEngine_Object_TypeInfo_12d54e0 + 0x133) >> 2 & 1) != 0) &&
         (*(int *)(_UnityEngine_Object_TypeInfo_12d54e0 + 0xe0) == 0)) {
        native_sub_4327ec(_UnityEngine_Object_TypeInfo_12d54e0);
      }
      uVar12 = native_UnityEngine_Object__op_Inequality_8d76fc(uVar11,0,0);
      uVar8 = 0x3f800000;
      if (((uVar12 & 1) == 0) ||
         (uVar12 = native_UILabel__get_keepCrisp_ae8860(param_3), uVar8 = 0x3f800000,
         (uVar12 & 1) == 0)) {
LAB_00ae8dcc:
        *(undefined4 *)(param_3 + 0x4b) = uVar8;
      }
      else {
        lVar13 = native_UIRect__get_root_c2d7ac(param_3,0);
        if (((*(byte *)(_UnityEngine_Object_TypeInfo_12d54e0 + 0x133) >> 2 & 1) != 0) &&
           (*(int *)(_UnityEngine_Object_TypeInfo_12d54e0 + 0xe0) == 0)) {
          native_sub_4327ec(_UnityEngine_Object_TypeInfo_12d54e0);
        }
        uVar12 = native_UnityEngine_Object__op_Inequality_8d76fc(lVar13,0,0);
        if ((uVar12 & 1) != 0) {
          if (((*(byte *)(_UnityEngine_Object_TypeInfo_12d54e0 + 0x133) >> 2 & 1) != 0) &&
             (*(int *)(_UnityEngine_Object_TypeInfo_12d54e0 + 0xe0) == 0)) {
            native_sub_4327ec();
          }
          uVar12 = native_UnityEngine_Object__op_Inequality_8d76fc(lVar13,0,0);
          if ((uVar12 & 1) != 0) {
            if (lVar13 == 0) goto LAB_00ae93c0;
            uVar8 = native_UIRoot__get_pixelSizeAdjustment_c2f740(lVar13,0);
          }
          goto LAB_00ae8dcc;
        }
      }
      native_UILabel__UpdateNGUIText_aeae48(param_3);
      if (*(int *)((long)param_3 + 0x1e4) == 3) {
        lVar13 = _NGUIText_TypeInfo_12d53c0;
        if ((*(byte *)(_NGUIText_TypeInfo_12d53c0 + 0x133) >> 2 & 1) != 0) {
LAB_00ae8eb4:
          if (*(int *)(lVar13 + 0xe0) == 0) {
            native_sub_4327ec();
            lVar13 = _NGUIText_TypeInfo_12d53c0;
          }
        }
LAB_00ae8ec4:
        plVar15 = (long *)(lVar13 + 0xb8);
        *(undefined4 *)(*plVar15 + 0x44) = 1000000;
LAB_00ae8ecc:
        *(undefined4 *)(*plVar15 + 0x4c) = uVar5;
      }
      else if (*(int *)((long)param_3 + 0x1e4) == 2) {
        iVar17 = *(int *)((long)param_3 + 0x224);
        if (iVar17 < 1) {
          if (((*(ushort *)(_NGUIText_TypeInfo_12d53c0 + 0x132) >> 10 & 1) != 0) &&
             (*(int *)(_NGUIText_TypeInfo_12d53c0 + 0xe0) == 0)) {
            native_sub_4327ec();
          }
          lVar13 = _NGUIText_TypeInfo_12d53c0;
          *(undefined4 *)(*(long *)(_NGUIText_TypeInfo_12d53c0 + 0xb8) + 0x40) = 1000000;
          uVar8 = 1000000;
        }
        else {
          if (((*(ushort *)(_NGUIText_TypeInfo_12d53c0 + 0x132) >> 10 & 1) != 0) &&
             (*(int *)(_NGUIText_TypeInfo_12d53c0 + 0xe0) == 0)) {
            native_sub_4327ec();
          }
          lVar13 = _NGUIText_TypeInfo_12d53c0;
          *(int *)(*(long *)(_NGUIText_TypeInfo_12d53c0 + 0xb8) + 0x40) = iVar17;
          uVar8 = *(undefined4 *)((long)param_3 + 0x224);
        }
        *(undefined4 *)(*(long *)(lVar13 + 0xb8) + 0x48) = uVar8;
        lVar14 = param_3[0x45];
        if ((int)lVar14 < 1) {
          if ((*(ushort *)(lVar13 + 0x132) >> 10 & 1) != 0) goto LAB_00ae8eb4;
          goto LAB_00ae8ec4;
        }
        if (((*(ushort *)(lVar13 + 0x132) >> 10 & 1) != 0) && (*(int *)(lVar13 + 0xe0) == 0)) {
          native_sub_4327ec();
          lVar13 = _NGUIText_TypeInfo_12d53c0;
        }
        plVar15 = (long *)(lVar13 + 0xb8);
        *(int *)(*plVar15 + 0x44) = (int)lVar14;
        uVar5 = (undefined4)param_3[0x45];
        goto LAB_00ae8ecc;
      }
      if ((int)param_3[0x4f] < 1) {
        lVar13 = native_UIRect__get_cachedTransform_c27c58(param_3,0);
        native_UnityEngine_Vector3__get_one_776a20(0);
        if (lVar13 == 0) {
LAB_00ae93c0:
                    /* WARNING: Subroutine does not return */
          native_sub_432810();
        }
        native_UnityEngine_Transform__set_localScale_771e30(lVar13,0);
        param_3[0x4c] = _StringLiteral__12eaac0;
        native_sub_4326e0(param_3 + 0x4c);
        *(undefined4 *)((long)param_3 + 0x274) = 0x3f800000;
      }
      else {
        uVar12 = native_UILabel__get_keepCrisp_ae8860();
        iVar17 = (int)param_3[0x4f];
        if (0 < iVar17) {
          plVar15 = param_3 + 0x4c;
          while( true ) {
            if ((uVar12 & 1) == 0) {
              param_2 = (float)iVar17;
              *(float *)((long)param_3 + 0x274) = param_2 / (float)(int)param_3[0x4f];
              lVar13 = native_UILabel__get_font_ae77e8(param_3);
              if (lVar13 == 0) {
                uVar8 = *(undefined4 *)((long)param_3 + 0x274);
                if (((*(byte *)(_NGUIText_TypeInfo_12d53c0 + 0x133) >> 2 & 1) != 0) &&
                   (*(int *)(_NGUIText_TypeInfo_12d53c0 + 0xe0) == 0)) {
                  native_sub_4327ec(_NGUIText_TypeInfo_12d53c0);
                }
                lVar13 = _NGUIText_TypeInfo_12d53c0;
                *(undefined4 *)(*(long *)(_NGUIText_TypeInfo_12d53c0 + 0xb8) + 0x20) = uVar8;
              }
              else {
                lVar14 = param_3[0x36];
                iVar4 = native_UILabel__get_defaultFontSize_ae82a4(param_3);
                fVar19 = *(float *)((long)param_3 + 0x274);
                if (((*(byte *)(_NGUIText_TypeInfo_12d53c0 + 0x133) >> 2 & 1) != 0) &&
                   (*(int *)(_NGUIText_TypeInfo_12d53c0 + 0xe0) == 0)) {
                  native_sub_4327ec(_NGUIText_TypeInfo_12d53c0);
                }
                lVar13 = _NGUIText_TypeInfo_12d53c0;
                param_2 = (float)iVar4;
                *(float *)(*(long *)(_NGUIText_TypeInfo_12d53c0 + 0xb8) + 0x20) =
                     fVar19 * ((float)(int)lVar14 / param_2);
              }
            }
            else {
              *(int *)(param_3 + 0x4f) = iVar17;
              if (((*(byte *)(_NGUIText_TypeInfo_12d53c0 + 0x133) >> 2 & 1) != 0) &&
                 (*(int *)(_NGUIText_TypeInfo_12d53c0 + 0xe0) == 0)) {
                native_sub_4327ec(_NGUIText_TypeInfo_12d53c0);
              }
              lVar13 = _NGUIText_TypeInfo_12d53c0;
              *(int *)(*(long *)(_NGUIText_TypeInfo_12d53c0 + 0xb8) + 0x1c) = iVar17;
            }
            if (((*(byte *)(lVar13 + 0x133) >> 2 & 1) != 0) && (*(int *)(lVar13 + 0xe0) == 0)) {
              native_sub_4327ec(lVar13);
            }
            native_NGUIText__Update_8088c0(0,0);
            uVar11 = native_UILabel__get_printedText_aea210(param_3);
            cVar16 = '\0';
            if (*(int *)((long)param_3 + 0x1e4) == 1) {
              cVar16 = (char)param_3[0x44];
            }
            if (((*(byte *)(_NGUIText_TypeInfo_12d53c0 + 0x133) >> 2 & 1) != 0) &&
               (*(int *)(_NGUIText_TypeInfo_12d53c0 + 0xe0) == 0)) {
              native_sub_4327ec();
            }
            uVar9 = native_NGUIText__WrapText_80dd68(uVar11,plVar15,0,0,cVar16 != '\0',0);
            iVar4 = *(int *)((long)param_3 + 0x1e4);
            if (((uVar9 & 1) != 0) || (iVar4 != 0)) break;
LAB_00ae90a4:
            if ((iVar17 + -1 < 2) || (iVar17 = iVar17 + -2, iVar17 < 1)) goto LAB_00ae9104;
          }
          if (iVar4 == 2) {
            lVar13 = *plVar15;
            if (((*(byte *)(_NGUIText_TypeInfo_12d53c0 + 0x133) >> 2 & 1) != 0) &&
               (*(int *)(_NGUIText_TypeInfo_12d53c0 + 0xe0) == 0)) {
              native_sub_4327ec();
            }
            uVar8 = native_NGUIText__CalculatePrintedSize_80cd38(lVar13,0,0);
            *(undefined4 *)((long)param_3 + 0x26c) = uVar8;
            *(float *)(param_3 + 0x4e) = param_2;
            if (((uVar9 & 1) == 0) && (0 < *(int *)((long)param_3 + 0x224))) goto LAB_00ae90a4;
            uVar8 = (**(code **)(*param_3 + 0x3b8))(param_3,*(undefined8 *)(*param_3 + 0x3c0));
            uVar5 = native_UnityEngine_Mathf__RoundToInt_8e50f0
                              (*(undefined4 *)((long)param_3 + 0x26c),0);
            uVar6 = native_UnityEngine_Mathf__Max_8e4cd0(uVar8,uVar5,0);
            if (fVar18 != 1.0) {
              uVar6 = native_UnityEngine_Mathf__RoundToInt_8e50f0((float)(int)uVar6 / fVar18,0);
            }
            uVar8 = (**(code **)(*param_3 + 0x3c8))(param_3,*(undefined8 *)(*param_3 + 0x3d0));
            uVar5 = native_UnityEngine_Mathf__RoundToInt_8e50f0((int)param_3[0x4e],0);
            uVar7 = native_UnityEngine_Mathf__Max_8e4cd0(uVar8,uVar5,0);
            if (fVar20 != 1.0) {
              uVar7 = native_UnityEngine_Mathf__RoundToInt_8e50f0((float)(int)uVar7 / fVar20,0);
            }
            iVar17 = (uVar6 & 1) + uVar6;
            iVar4 = (uVar7 & 1) + uVar7;
            if ((*(int *)((long)param_3 + 0xa4) != iVar17) || ((int)param_3[0x15] != iVar4)) {
              lVar13 = param_3[0x18];
              *(int *)((long)param_3 + 0xa4) = iVar17;
              *(int *)(param_3 + 0x15) = iVar4;
              *(int *)((long)param_3 + 0x27c) = iVar17;
              *(int *)(param_3 + 0x50) = iVar4;
joined_r0x00ae9304:
              if (lVar13 != 0) {
                native_UIWidget_OnDimensionsChanged__Invoke_55ba68(lVar13,0);
              }
            }
          }
          else {
            lVar13 = *plVar15;
            if (iVar4 == 3) {
              if (((*(ushort *)(_NGUIText_TypeInfo_12d53c0 + 0x132) >> 10 & 1) != 0) &&
                 (*(int *)(_NGUIText_TypeInfo_12d53c0 + 0xe0) == 0)) {
                native_sub_4327ec();
              }
              uVar8 = native_NGUIText__CalculatePrintedSize_80cd38(lVar13,0,0);
              *(undefined4 *)((long)param_3 + 0x26c) = uVar8;
              *(float *)(param_3 + 0x4e) = param_2;
              uVar8 = (**(code **)(*param_3 + 0x3c8))(param_3,*(undefined8 *)(*param_3 + 0x3d0));
              uVar5 = native_UnityEngine_Mathf__RoundToInt_8e50f0((int)param_3[0x4e],0);
              uVar6 = native_UnityEngine_Mathf__Max_8e4cd0(uVar8,uVar5,0);
              if (fVar20 != 1.0) {
                uVar6 = native_UnityEngine_Mathf__RoundToInt_8e50f0((float)(int)uVar6 / fVar20,0);
              }
              iVar17 = (uVar6 & 1) + uVar6;
              if ((int)param_3[0x15] != iVar17) {
                lVar13 = param_3[0x18];
                *(int *)(param_3 + 0x15) = iVar17;
                *(int *)(param_3 + 0x50) = iVar17;
                goto joined_r0x00ae9304;
              }
            }
            else {
              if (((*(ushort *)(_NGUIText_TypeInfo_12d53c0 + 0x132) >> 10 & 1) != 0) &&
                 (*(int *)(_NGUIText_TypeInfo_12d53c0 + 0xe0) == 0)) {
                native_sub_4327ec();
              }
              uVar8 = native_NGUIText__CalculatePrintedSize_80cd38(lVar13,0,0);
              *(undefined4 *)((long)param_3 + 0x26c) = uVar8;
              *(float *)(param_3 + 0x4e) = param_2;
            }
          }
        }
      }
LAB_00ae9104:
      if (((*(byte *)(_NGUIText_TypeInfo_12d53c0 + 0x133) >> 2 & 1) != 0) &&
         (*(int *)(_NGUIText_TypeInfo_12d53c0 + 0xe0) == 0)) {
        native_sub_4327ec();
      }
      puVar10 = *(undefined8 **)(_NGUIText_TypeInfo_12d53c0 + 0xb8);
      *puVar10 = 0;
      native_sub_4326e0(puVar10,0);
      plVar15 = (long *)(*(long *)(_NGUIText_TypeInfo_12d53c0 + 0xb8) + 8);
      *plVar15 = 0;
      goto native_sub_41086c;
    }
  }
  plVar15 = param_3 + 0x4c;
  param_3[0x4c] = _StringLiteral__12eaac0;
native_sub_41086c:
  if (iRam0000000001345318 != 0) {
    puVar1 = (ulong *)(((ulong)plVar15 >> 0x12 & 0x7fff) * 8 + 0x138ecd8);
    do {
      cVar16 = '\x01';
      bVar2 = (bool)ExclusiveMonitorPass(puVar1,0x10);
      if (bVar2) {
        *puVar1 = *puVar1 | 1L << ((ulong)plVar15 >> 0xc & 0x3f);
        cVar16 = ExclusiveMonitorsStatus();
      }
    } while (cVar16 != '\0');
  }
  return;
}



/* UILabel$$MarkAsChanged @ 0xaead7c
 * void UILabel__MarkAsChanged (UILabel_o* __this, const MethodInfo* method); */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* UILabel$$MarkAsChanged
   void UILabel__MarkAsChanged (UILabel_o* __this, const MethodInfo* method); */

void native_UILabel__MarkAsChanged_aead7c(long param_1)

{
  ulong uVar1;
  long *plVar2;
  undefined8 uVar3;
  
  if ((bRam0000000001342017 & 1) == 0) {
    native_sub_43273c(&UnityEngine_Object_TypeInfo_12d54e0);
    bRam0000000001342017 = 1;
  }
  *(undefined1 *)(param_1 + 0x58) = 1;
  *(undefined1 *)(param_1 + 0x25c) = 1;
  native_UIWidget__MarkAsChanged_94b6b4(param_1,0);
  uVar3 = *(undefined8 *)(param_1 + 0x248);
  if (((*(byte *)(_UnityEngine_Object_TypeInfo_12d54e0 + 0x133) >> 2 & 1) != 0) &&
     (*(int *)(_UnityEngine_Object_TypeInfo_12d54e0 + 0xe0) == 0)) {
    native_sub_4327ec();
  }
  uVar1 = native_UnityEngine_Object__op_Inequality_8d76fc(uVar3,0,0);
  if ((uVar1 & 1) != 0) {
    plVar2 = *(long **)(param_1 + 0x248);
    if (plVar2 != (long *)0x0) {
      (**(code **)(*plVar2 + 0x2d8))
                (plVar2,*(undefined4 *)(param_1 + 0x230),*(undefined8 *)(*plVar2 + 0x2e0));
      plVar2 = *(long **)(param_1 + 0x248);
      if (plVar2 != (long *)0x0) {
                    /* WARNING: Could not recover jumptable at 0x00aeae34. Too many branches */
                    /* WARNING: Treating indirect jump as call */
        (**(code **)(*plVar2 + 0x378))(plVar2,*(undefined8 *)(*plVar2 + 0x380));
        return;
      }
    }
                    /* WARNING: Subroutine does not return */
    native_sub_432810();
  }
  return;
}



/* UILabel$$ProcessText @ 0xae8a14
 * void UILabel__ProcessText (UILabel_o* __this, bool legacyMode, bool full, const MethodInfo* method); */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* UILabel$$ProcessText
   void UILabel__ProcessText (UILabel_o* __this, bool legacyMode, bool full, const MethodInfo*
   method); */

void native_UILabel__ProcessText_ae8a14
               (undefined1 param_1 [16],float param_2,long *param_3,ulong param_4,ulong param_5)

{
  ulong *puVar1;
  bool bVar2;
  long lVar3;
  undefined4 uVar4;
  int iVar5;
  undefined4 uVar6;
  uint uVar7;
  uint uVar8;
  ulong uVar9;
  long lVar10;
  undefined8 uVar11;
  ulong uVar12;
  undefined8 *puVar13;
  long *plVar14;
  int iVar15;
  char cVar16;
  float fVar17;
  float fVar18;
  float fVar19;
  float fVar20;
  
  if ((bRam0000000001342018 & 1) == 0) {
    native_sub_43273c(&NGUIText_TypeInfo_12d53c0);
    native_sub_43273c(&UnityEngine_Object_TypeInfo_12d54e0);
    native_sub_43273c(&StringLiteral__12eaac0);
    bRam0000000001342018 = 1;
  }
  uVar9 = native_UILabel__get_isValid_ae9740(param_3);
  if ((uVar9 & 1) == 0) {
    return;
  }
  fVar17 = *(float *)((long)param_3 + 0x10c);
  fVar18 = *(float *)((long)param_3 + 0x104);
  fVar19 = *(float *)(param_3 + 0x22);
  fVar20 = *(float *)(param_3 + 0x21);
  iVar15 = 1000000;
  *(undefined1 *)(param_3 + 0xb) = 1;
  *(undefined1 *)((long)param_3 + 0x25c) = 0;
  if ((param_4 & 1) == 0) {
    iVar5 = *(int *)((long)param_3 + 0xa4);
  }
  else {
    iVar5 = iVar15;
    if ((int)param_3[0x47] != 0) {
      iVar5 = (int)param_3[0x47];
    }
  }
  if (((*(byte *)(_NGUIText_TypeInfo_12d53c0 + 0x133) >> 2 & 1) != 0) &&
     (*(int *)(_NGUIText_TypeInfo_12d53c0 + 0xe0) == 0)) {
    native_sub_4327ec(_NGUIText_TypeInfo_12d53c0);
  }
  lVar10 = _NGUIText_TypeInfo_12d53c0;
  plVar14 = (long *)(_NGUIText_TypeInfo_12d53c0 + 0xb8);
  *(int *)(*plVar14 + 0x40) = iVar5;
  if ((param_4 & 1) == 0) {
    iVar5 = (int)param_3[0x15];
  }
  else {
    iVar5 = iVar15;
    if (*(int *)((long)param_3 + 0x23c) != 0) {
      iVar5 = *(int *)((long)param_3 + 0x23c);
    }
  }
  fVar17 = fVar17 - fVar18;
  if (((*(byte *)(lVar10 + 0x133) >> 2 & 1) != 0) && (*(int *)(lVar10 + 0xe0) == 0)) {
    native_sub_4327ec(lVar10);
    plVar14 = (long *)(_NGUIText_TypeInfo_12d53c0 + 0xb8);
    lVar10 = _NGUIText_TypeInfo_12d53c0;
  }
  *(int *)(*(long *)(lVar10 + 0xb8) + 0x44) = iVar5;
  if (fVar17 == 1.0) {
    if (((*(ushort *)(lVar10 + 0x132) >> 10 & 1) != 0) && (*(int *)(lVar10 + 0xe0) == 0)) {
      native_sub_4327ec(lVar10);
      plVar14 = (long *)(_NGUIText_TypeInfo_12d53c0 + 0xb8);
      lVar10 = _NGUIText_TypeInfo_12d53c0;
    }
    uVar4 = *(undefined4 *)(*plVar14 + 0x40);
  }
  else {
    if (((*(ushort *)(lVar10 + 0x132) >> 10 & 1) != 0) && (*(int *)(lVar10 + 0xe0) == 0)) {
      native_sub_4327ec(lVar10);
      plVar14 = (long *)(_NGUIText_TypeInfo_12d53c0 + 0xb8);
    }
    uVar4 = native_UnityEngine_Mathf__RoundToInt_8e50f0(fVar17 * (float)*(int *)(*plVar14 + 0x40),0)
    ;
    lVar10 = _NGUIText_TypeInfo_12d53c0;
  }
  fVar19 = fVar19 - fVar20;
  if (((*(byte *)(lVar10 + 0x133) >> 2 & 1) != 0) && (*(int *)(lVar10 + 0xe0) == 0)) {
    native_sub_4327ec(lVar10);
    lVar10 = _NGUIText_TypeInfo_12d53c0;
  }
  plVar14 = (long *)(lVar10 + 0xb8);
  *(undefined4 *)(*plVar14 + 0x48) = uVar4;
  if (fVar19 == 1.0) {
    if (((*(ushort *)(lVar10 + 0x132) >> 10 & 1) != 0) && (*(int *)(lVar10 + 0xe0) == 0)) {
      native_sub_4327ec(lVar10);
      lVar10 = _NGUIText_TypeInfo_12d53c0;
    }
    uVar4 = *(undefined4 *)(*(long *)(lVar10 + 0xb8) + 0x44);
  }
  else {
    if (((*(ushort *)(lVar10 + 0x132) >> 10 & 1) != 0) && (*(int *)(lVar10 + 0xe0) == 0)) {
      native_sub_4327ec(lVar10);
      plVar14 = (long *)(_NGUIText_TypeInfo_12d53c0 + 0xb8);
    }
    uVar4 = native_UnityEngine_Mathf__RoundToInt_8e50f0(fVar19 * (float)*(int *)(*plVar14 + 0x44),0)
    ;
    lVar10 = _NGUIText_TypeInfo_12d53c0;
  }
  if (((*(byte *)(lVar10 + 0x133) >> 2 & 1) != 0) && (*(int *)(lVar10 + 0xe0) == 0)) {
    native_sub_4327ec(lVar10);
    lVar10 = _NGUIText_TypeInfo_12d53c0;
  }
  *(undefined4 *)(*(long *)(lVar10 + 0xb8) + 0x4c) = uVar4;
  if ((param_4 & 1) == 0) {
    uVar11 = native_UILabel__get_defaultFontSize_ae82a4(param_3);
  }
  else {
    lVar10 = native_UIRect__get_cachedTransform_c27c58(param_3,0);
    if (lVar10 == 0) goto LAB_00ae93c0;
    native_UnityEngine_Transform__get_localScale_771d80(lVar10,0);
    uVar11 = native_UnityEngine_Mathf__RoundToInt_8e50f0(0);
  }
  uVar4 = native_UnityEngine_Mathf__Abs_8e4b54(uVar11,0);
  *(undefined4 *)(param_3 + 0x4f) = uVar4;
  *(undefined4 *)((long)param_3 + 0x274) = 0x3f800000;
  if (((*(byte *)(_NGUIText_TypeInfo_12d53c0 + 0x133) >> 2 & 1) != 0) &&
     (*(int *)(_NGUIText_TypeInfo_12d53c0 + 0xe0) == 0)) {
    native_sub_4327ec();
  }
  lVar10 = *(long *)(_NGUIText_TypeInfo_12d53c0 + 0xb8);
  if (0 < *(int *)(lVar10 + 0x48)) {
    if (((*(byte *)(_NGUIText_TypeInfo_12d53c0 + 0x133) >> 2 & 1) != 0) &&
       (*(int *)(_NGUIText_TypeInfo_12d53c0 + 0xe0) == 0)) {
      native_sub_4327ec();
      lVar10 = *(long *)(_NGUIText_TypeInfo_12d53c0 + 0xb8);
    }
    if (-1 < *(int *)(lVar10 + 0x4c)) {
      uVar11 = native_UILabel__get_trueTypeFont_ae74d0(param_3);
      if (((*(byte *)(_UnityEngine_Object_TypeInfo_12d54e0 + 0x133) >> 2 & 1) != 0) &&
         (*(int *)(_UnityEngine_Object_TypeInfo_12d54e0 + 0xe0) == 0)) {
        native_sub_4327ec(_UnityEngine_Object_TypeInfo_12d54e0);
      }
      uVar9 = native_UnityEngine_Object__op_Inequality_8d76fc(uVar11,0,0);
      uVar4 = 0x3f800000;
      if (((uVar9 & 1) == 0) ||
         (uVar9 = native_UILabel__get_keepCrisp_ae8860(param_3), uVar4 = 0x3f800000,
         (uVar9 & 1) == 0)) {
LAB_00ae8dcc:
        *(undefined4 *)(param_3 + 0x4b) = uVar4;
      }
      else {
        lVar10 = native_UIRect__get_root_c2d7ac(param_3,0);
        if (((*(byte *)(_UnityEngine_Object_TypeInfo_12d54e0 + 0x133) >> 2 & 1) != 0) &&
           (*(int *)(_UnityEngine_Object_TypeInfo_12d54e0 + 0xe0) == 0)) {
          native_sub_4327ec(_UnityEngine_Object_TypeInfo_12d54e0);
        }
        uVar9 = native_UnityEngine_Object__op_Inequality_8d76fc(lVar10,0,0);
        if ((uVar9 & 1) != 0) {
          if (((*(byte *)(_UnityEngine_Object_TypeInfo_12d54e0 + 0x133) >> 2 & 1) != 0) &&
             (*(int *)(_UnityEngine_Object_TypeInfo_12d54e0 + 0xe0) == 0)) {
            native_sub_4327ec();
          }
          uVar9 = native_UnityEngine_Object__op_Inequality_8d76fc(lVar10,0,0);
          if ((uVar9 & 1) != 0) {
            if (lVar10 == 0) goto LAB_00ae93c0;
            uVar4 = native_UIRoot__get_pixelSizeAdjustment_c2f740(lVar10,0);
          }
          goto LAB_00ae8dcc;
        }
      }
      if ((param_5 & 1) != 0) {
        native_UILabel__UpdateNGUIText_aeae48(param_3);
      }
      if (*(int *)((long)param_3 + 0x1e4) == 3) {
        lVar10 = _NGUIText_TypeInfo_12d53c0;
        if ((*(byte *)(_NGUIText_TypeInfo_12d53c0 + 0x133) >> 2 & 1) != 0) {
LAB_00ae8eb4:
          if (*(int *)(lVar10 + 0xe0) == 0) {
            native_sub_4327ec();
            lVar10 = _NGUIText_TypeInfo_12d53c0;
          }
        }
LAB_00ae8ec4:
        plVar14 = (long *)(lVar10 + 0xb8);
        *(undefined4 *)(*plVar14 + 0x44) = 1000000;
LAB_00ae8ecc:
        *(int *)(*plVar14 + 0x4c) = iVar15;
      }
      else if (*(int *)((long)param_3 + 0x1e4) == 2) {
        iVar5 = *(int *)((long)param_3 + 0x224);
        if (iVar5 < 1) {
          if (((*(ushort *)(_NGUIText_TypeInfo_12d53c0 + 0x132) >> 10 & 1) != 0) &&
             (*(int *)(_NGUIText_TypeInfo_12d53c0 + 0xe0) == 0)) {
            native_sub_4327ec();
          }
          lVar10 = _NGUIText_TypeInfo_12d53c0;
          *(undefined4 *)(*(long *)(_NGUIText_TypeInfo_12d53c0 + 0xb8) + 0x40) = 1000000;
          uVar4 = 1000000;
        }
        else {
          if (((*(ushort *)(_NGUIText_TypeInfo_12d53c0 + 0x132) >> 10 & 1) != 0) &&
             (*(int *)(_NGUIText_TypeInfo_12d53c0 + 0xe0) == 0)) {
            native_sub_4327ec();
          }
          lVar10 = _NGUIText_TypeInfo_12d53c0;
          *(int *)(*(long *)(_NGUIText_TypeInfo_12d53c0 + 0xb8) + 0x40) = iVar5;
          uVar4 = *(undefined4 *)((long)param_3 + 0x224);
        }
        *(undefined4 *)(*(long *)(lVar10 + 0xb8) + 0x48) = uVar4;
        lVar3 = param_3[0x45];
        if ((int)lVar3 < 1) {
          if ((*(ushort *)(lVar10 + 0x132) >> 10 & 1) != 0) goto LAB_00ae8eb4;
          goto LAB_00ae8ec4;
        }
        if (((*(ushort *)(lVar10 + 0x132) >> 10 & 1) != 0) && (*(int *)(lVar10 + 0xe0) == 0)) {
          native_sub_4327ec();
          lVar10 = _NGUIText_TypeInfo_12d53c0;
        }
        plVar14 = (long *)(lVar10 + 0xb8);
        *(int *)(*plVar14 + 0x44) = (int)lVar3;
        iVar15 = (int)param_3[0x45];
        goto LAB_00ae8ecc;
      }
      if ((int)param_3[0x4f] < 1) {
        lVar10 = native_UIRect__get_cachedTransform_c27c58(param_3,0);
        native_UnityEngine_Vector3__get_one_776a20(0);
        if (lVar10 == 0) {
LAB_00ae93c0:
                    /* WARNING: Subroutine does not return */
          native_sub_432810();
        }
        native_UnityEngine_Transform__set_localScale_771e30(lVar10,0);
        param_3[0x4c] = _StringLiteral__12eaac0;
        native_sub_4326e0(param_3 + 0x4c);
        *(undefined4 *)((long)param_3 + 0x274) = 0x3f800000;
      }
      else {
        uVar9 = native_UILabel__get_keepCrisp_ae8860();
        iVar15 = (int)param_3[0x4f];
        if (0 < iVar15) {
          plVar14 = param_3 + 0x4c;
          while( true ) {
            if ((uVar9 & 1) == 0) {
              param_2 = (float)iVar15;
              *(float *)((long)param_3 + 0x274) = param_2 / (float)(int)param_3[0x4f];
              lVar10 = native_UILabel__get_font_ae77e8(param_3);
              if (lVar10 == 0) {
                uVar4 = *(undefined4 *)((long)param_3 + 0x274);
                if (((*(byte *)(_NGUIText_TypeInfo_12d53c0 + 0x133) >> 2 & 1) != 0) &&
                   (*(int *)(_NGUIText_TypeInfo_12d53c0 + 0xe0) == 0)) {
                  native_sub_4327ec(_NGUIText_TypeInfo_12d53c0);
                }
                lVar10 = _NGUIText_TypeInfo_12d53c0;
                *(undefined4 *)(*(long *)(_NGUIText_TypeInfo_12d53c0 + 0xb8) + 0x20) = uVar4;
              }
              else {
                lVar3 = param_3[0x36];
                iVar5 = native_UILabel__get_defaultFontSize_ae82a4(param_3);
                fVar18 = *(float *)((long)param_3 + 0x274);
                if (((*(byte *)(_NGUIText_TypeInfo_12d53c0 + 0x133) >> 2 & 1) != 0) &&
                   (*(int *)(_NGUIText_TypeInfo_12d53c0 + 0xe0) == 0)) {
                  native_sub_4327ec(_NGUIText_TypeInfo_12d53c0);
                }
                lVar10 = _NGUIText_TypeInfo_12d53c0;
                param_2 = (float)iVar5;
                *(float *)(*(long *)(_NGUIText_TypeInfo_12d53c0 + 0xb8) + 0x20) =
                     fVar18 * ((float)(int)lVar3 / param_2);
              }
            }
            else {
              *(int *)(param_3 + 0x4f) = iVar15;
              if (((*(byte *)(_NGUIText_TypeInfo_12d53c0 + 0x133) >> 2 & 1) != 0) &&
                 (*(int *)(_NGUIText_TypeInfo_12d53c0 + 0xe0) == 0)) {
                native_sub_4327ec(_NGUIText_TypeInfo_12d53c0);
              }
              lVar10 = _NGUIText_TypeInfo_12d53c0;
              *(int *)(*(long *)(_NGUIText_TypeInfo_12d53c0 + 0xb8) + 0x1c) = iVar15;
            }
            if (((*(byte *)(lVar10 + 0x133) >> 2 & 1) != 0) && (*(int *)(lVar10 + 0xe0) == 0)) {
              native_sub_4327ec(lVar10);
            }
            native_NGUIText__Update_8088c0(0,0);
            uVar11 = native_UILabel__get_printedText_aea210(param_3);
            cVar16 = '\0';
            if (*(int *)((long)param_3 + 0x1e4) == 1) {
              cVar16 = (char)param_3[0x44];
            }
            if (((*(byte *)(_NGUIText_TypeInfo_12d53c0 + 0x133) >> 2 & 1) != 0) &&
               (*(int *)(_NGUIText_TypeInfo_12d53c0 + 0xe0) == 0)) {
              native_sub_4327ec();
            }
            uVar12 = native_NGUIText__WrapText_80dd68(uVar11,plVar14,0,0,cVar16 != '\0',0);
            iVar5 = *(int *)((long)param_3 + 0x1e4);
            if (((uVar12 & 1) != 0) || (iVar5 != 0)) break;
LAB_00ae90a4:
            if ((iVar15 + -1 < 2) || (iVar15 = iVar15 + -2, iVar15 < 1)) goto joined_r0x00ae9398;
          }
          if (iVar5 == 2) {
            lVar10 = *plVar14;
            if (((*(byte *)(_NGUIText_TypeInfo_12d53c0 + 0x133) >> 2 & 1) != 0) &&
               (*(int *)(_NGUIText_TypeInfo_12d53c0 + 0xe0) == 0)) {
              native_sub_4327ec();
            }
            uVar4 = native_NGUIText__CalculatePrintedSize_80cd38(lVar10,0,0);
            *(undefined4 *)((long)param_3 + 0x26c) = uVar4;
            *(float *)(param_3 + 0x4e) = param_2;
            if (((uVar12 & 1) == 0) && (0 < *(int *)((long)param_3 + 0x224))) goto LAB_00ae90a4;
            uVar4 = (**(code **)(*param_3 + 0x3b8))(param_3,*(undefined8 *)(*param_3 + 0x3c0));
            uVar6 = native_UnityEngine_Mathf__RoundToInt_8e50f0
                              (*(undefined4 *)((long)param_3 + 0x26c),0);
            uVar7 = native_UnityEngine_Mathf__Max_8e4cd0(uVar4,uVar6,0);
            if (fVar17 != 1.0) {
              uVar7 = native_UnityEngine_Mathf__RoundToInt_8e50f0((float)(int)uVar7 / fVar17,0);
            }
            uVar4 = (**(code **)(*param_3 + 0x3c8))(param_3,*(undefined8 *)(*param_3 + 0x3d0));
            uVar6 = native_UnityEngine_Mathf__RoundToInt_8e50f0((int)param_3[0x4e],0);
            uVar8 = native_UnityEngine_Mathf__Max_8e4cd0(uVar4,uVar6,0);
            if (fVar19 != 1.0) {
              uVar8 = native_UnityEngine_Mathf__RoundToInt_8e50f0((float)(int)uVar8 / fVar19,0);
            }
            iVar15 = (uVar7 & 1) + uVar7;
            iVar5 = (uVar8 & 1) + uVar8;
            if ((*(int *)((long)param_3 + 0xa4) != iVar15) || ((int)param_3[0x15] != iVar5)) {
              lVar10 = param_3[0x18];
              *(int *)((long)param_3 + 0xa4) = iVar15;
              *(int *)(param_3 + 0x15) = iVar5;
              *(int *)((long)param_3 + 0x27c) = iVar15;
              *(int *)(param_3 + 0x50) = iVar5;
joined_r0x00ae9304:
              if (lVar10 != 0) {
                native_UIWidget_OnDimensionsChanged__Invoke_55ba68(lVar10,0);
              }
            }
          }
          else {
            lVar10 = *plVar14;
            if (iVar5 == 3) {
              if (((*(ushort *)(_NGUIText_TypeInfo_12d53c0 + 0x132) >> 10 & 1) != 0) &&
                 (*(int *)(_NGUIText_TypeInfo_12d53c0 + 0xe0) == 0)) {
                native_sub_4327ec();
              }
              uVar4 = native_NGUIText__CalculatePrintedSize_80cd38(lVar10,0,0);
              *(undefined4 *)((long)param_3 + 0x26c) = uVar4;
              *(float *)(param_3 + 0x4e) = param_2;
              uVar4 = (**(code **)(*param_3 + 0x3c8))(param_3,*(undefined8 *)(*param_3 + 0x3d0));
              uVar6 = native_UnityEngine_Mathf__RoundToInt_8e50f0((int)param_3[0x4e],0);
              uVar7 = native_UnityEngine_Mathf__Max_8e4cd0(uVar4,uVar6,0);
              if (fVar19 != 1.0) {
                uVar7 = native_UnityEngine_Mathf__RoundToInt_8e50f0((float)(int)uVar7 / fVar19,0);
              }
              iVar15 = (uVar7 & 1) + uVar7;
              if ((int)param_3[0x15] != iVar15) {
                lVar10 = param_3[0x18];
                *(int *)(param_3 + 0x15) = iVar15;
                *(int *)(param_3 + 0x50) = iVar15;
                goto joined_r0x00ae9304;
              }
            }
            else {
              if (((*(ushort *)(_NGUIText_TypeInfo_12d53c0 + 0x132) >> 10 & 1) != 0) &&
                 (*(int *)(_NGUIText_TypeInfo_12d53c0 + 0xe0) == 0)) {
                native_sub_4327ec();
              }
              uVar4 = native_NGUIText__CalculatePrintedSize_80cd38(lVar10,0,0);
              *(undefined4 *)((long)param_3 + 0x26c) = uVar4;
              *(float *)(param_3 + 0x4e) = param_2;
            }
          }
          if ((param_4 & 1) != 0) {
            uVar4 = native_UnityEngine_Mathf__RoundToInt_8e50f0
                              (*(undefined4 *)((long)param_3 + 0x26c),0);
            native_UIWidget__set_width_941dec(param_3,uVar4,0);
            uVar4 = native_UnityEngine_Mathf__RoundToInt_8e50f0((int)param_3[0x4e],0);
            native_UIWidget__set_height_942098(param_3,uVar4,0);
            lVar10 = native_UIRect__get_cachedTransform_c27c58(param_3,0);
            native_UnityEngine_Vector3__get_one_776a20(0);
            if (lVar10 == 0) goto LAB_00ae93c0;
            native_UnityEngine_Transform__set_localScale_771e30(lVar10,0);
          }
        }
      }
joined_r0x00ae9398:
      if ((param_5 & 1) == 0) {
        return;
      }
      if (((*(byte *)(_NGUIText_TypeInfo_12d53c0 + 0x133) >> 2 & 1) != 0) &&
         (*(int *)(_NGUIText_TypeInfo_12d53c0 + 0xe0) == 0)) {
        native_sub_4327ec();
      }
      puVar13 = *(undefined8 **)(_NGUIText_TypeInfo_12d53c0 + 0xb8);
      *puVar13 = 0;
      native_sub_4326e0(puVar13,0);
      plVar14 = (long *)(*(long *)(_NGUIText_TypeInfo_12d53c0 + 0xb8) + 8);
      *plVar14 = 0;
      goto native_sub_41086c;
    }
  }
  plVar14 = param_3 + 0x4c;
  param_3[0x4c] = _StringLiteral__12eaac0;
native_sub_41086c:
  if (iRam0000000001345318 != 0) {
    puVar1 = (ulong *)(((ulong)plVar14 >> 0x12 & 0x7fff) * 8 + 0x138ecd8);
    do {
      cVar16 = '\x01';
      bVar2 = (bool)ExclusiveMonitorPass(puVar1,0x10);
      if (bVar2) {
        *puVar1 = *puVar1 | 1L << ((ulong)plVar14 >> 0xc & 0x3f);
        cVar16 = ExclusiveMonitorsStatus();
      }
    } while (cVar16 != '\0');
  }
  return;
}



/* UILabel$$MakePixelPerfect @ 0xaeb5bc
 * void UILabel__MakePixelPerfect (UILabel_o* __this, const MethodInfo* method); */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* UILabel$$MakePixelPerfect
   void UILabel__MakePixelPerfect (UILabel_o* __this, const MethodInfo* method); */

void native_UILabel__MakePixelPerfect_aeb5bc
               (undefined1 param_1 [16],undefined8 param_2,undefined8 param_3,long *param_4)

{
  int iVar1;
  int iVar2;
  int iVar3;
  undefined4 uVar4;
  undefined4 uVar5;
  undefined4 uVar6;
  uint uVar7;
  undefined4 uVar8;
  uint uVar9;
  undefined8 uVar10;
  ulong uVar11;
  long lVar12;
  float fVar13;
  double dVar14;
  float fVar15;
  float fVar16;
  float fVar17;
  double dStack_38;
  
  if ((bRam0000000001342019 & 1) == 0) {
    native_sub_43273c(&UnityEngine_Object_TypeInfo_12d54e0);
    bRam0000000001342019 = 1;
  }
  uVar10 = native_UILabel__get_ambigiousFont_ae8074(param_4);
  if (((*(byte *)(_UnityEngine_Object_TypeInfo_12d54e0 + 0x133) >> 2 & 1) != 0) &&
     (*(int *)(_UnityEngine_Object_TypeInfo_12d54e0 + 0xe0) == 0)) {
    native_sub_4327ec(_UnityEngine_Object_TypeInfo_12d54e0);
  }
  uVar11 = native_UnityEngine_Object__op_Inequality_8d76fc(uVar10,0,0);
  if ((uVar11 & 1) != 0) {
    lVar12 = native_UIRect__get_cachedTransform_c27c58(param_4,0);
    if (lVar12 != 0) {
      native_UnityEngine_Transform__get_localPosition_7717f4(lVar12,0);
      iVar1 = native_UnityEngine_Mathf__RoundToInt_8e50f0(0);
      iVar2 = native_UnityEngine_Mathf__RoundToInt_8e50f0(param_2,0);
      iVar3 = native_UnityEngine_Mathf__RoundToInt_8e50f0(param_3,0);
      lVar12 = native_UIRect__get_cachedTransform_c27c58(param_4,0);
      if (lVar12 != 0) {
        native_UnityEngine_Transform__set_localPosition_7718a4
                  ((float)iVar1,(float)iVar2,(float)iVar3,lVar12,0);
        lVar12 = native_UIRect__get_cachedTransform_c27c58(param_4,0);
        native_UnityEngine_Vector3__get_one_776a20(0);
        if (lVar12 != 0) {
          native_UnityEngine_Transform__set_localScale_771e30(lVar12,0);
          iVar1 = *(int *)((long)param_4 + 0x1e4);
          if (iVar1 != 2) {
            uVar8 = *(undefined4 *)((long)param_4 + 0xa4);
            lVar12 = param_4[0x15];
            if (iVar1 != 3) {
              *(undefined4 *)((long)param_4 + 0xa4) = 100000;
            }
            *(undefined4 *)(param_4 + 0x15) = 100000;
            *(undefined4 *)((long)param_4 + 0x1e4) = 0;
            native_UILabel__ProcessText_ae8a14(param_4,0,1);
            *(int *)((long)param_4 + 0x1e4) = iVar1;
            uVar4 = native_UnityEngine_Mathf__RoundToInt_8e50f0
                              (*(undefined4 *)((long)param_4 + 0x26c),0);
            uVar5 = native_UnityEngine_Mathf__RoundToInt_8e50f0((int)param_4[0x4e],0);
            uVar6 = native_UIWidget__get_minWidth_94ccec(param_4,0);
            uVar9 = native_UnityEngine_Mathf__Max_8e4cd0(uVar4,uVar6,0);
            uVar4 = native_UIWidget__get_minHeight_94ccf4(param_4,0);
            uVar7 = native_UnityEngine_Mathf__Max_8e4cd0(uVar5,uVar4,0);
            uVar8 = native_UnityEngine_Mathf__Max_8e4cd0(uVar8,(uVar9 & 1) + uVar9,0);
            *(undefined4 *)((long)param_4 + 0xa4) = uVar8;
            uVar8 = native_UnityEngine_Mathf__Max_8e4cd0((int)lVar12,(uVar7 & 1) + uVar7,0);
            *(undefined4 *)(param_4 + 0x15) = uVar8;
                    /* WARNING: Could not recover jumptable at 0x00aeb804. Too many branches */
                    /* WARNING: Treating indirect jump as call */
            (**(code **)(*param_4 + 0x378))(param_4,*(undefined8 *)(*param_4 + 0x380));
            return;
          }
          if ((bRam000000000134201a & 1) == 0) {
            native_sub_43273c(&UnityEngine_Object_TypeInfo_12d54e0);
            bRam000000000134201a = 1;
          }
          uVar10 = native_UILabel__get_ambigiousFont_ae8074(param_4);
          if (((*(byte *)(_UnityEngine_Object_TypeInfo_12d54e0 + 0x133) >> 2 & 1) != 0) &&
             (*(int *)(_UnityEngine_Object_TypeInfo_12d54e0 + 0xe0) == 0)) {
            native_sub_4327ec(_UnityEngine_Object_TypeInfo_12d54e0);
          }
          uVar11 = native_UnityEngine_Object__op_Inequality_8d76fc(uVar10,0,0);
          if ((uVar11 & 1) != 0) {
            *(undefined8 *)((long)param_4 + 0xa4) = 0x186a0000186a0;
            native_UILabel__ProcessText_ae8a14(param_4,0,1);
            uVar8 = native_UnityEngine_Mathf__RoundToInt_8e50f0
                              (*(undefined4 *)((long)param_4 + 0x26c),0);
            *(undefined4 *)((long)param_4 + 0xa4) = uVar8;
            uVar9 = native_UnityEngine_Mathf__RoundToInt_8e50f0((int)param_4[0x4e],0);
            *(uint *)(param_4 + 0x15) = uVar9;
            if ((*(uint *)((long)param_4 + 0xa4) & 1) != 0) {
              *(uint *)((long)param_4 + 0xa4) = *(uint *)((long)param_4 + 0xa4) + 1;
            }
            if ((uVar9 & 1) != 0) {
              *(uint *)(param_4 + 0x15) = uVar9 + 1;
            }
                    /* WARNING: Could not recover jumptable at 0x00aeb8f4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
            (**(code **)(*param_4 + 0x378))(param_4,*(undefined8 *)(*param_4 + 0x380));
            return;
          }
          return;
        }
      }
    }
                    /* WARNING: Subroutine does not return */
    native_sub_432810();
  }
  lVar12 = native_UIRect__get_cachedTransform_c27c58(param_4,0);
  fVar15 = (float)param_3;
  fVar16 = (float)param_2;
  if (lVar12 == 0) goto LAB_0094541c;
  fVar13 = (float)native_UnityEngine_Transform__get_localPosition_7717f4(lVar12,0);
  dVar14 = (double)func_0x002c9600((double)fVar15,&dStack_38);
  if (0.0 <= fVar15) {
    if (dVar14 == 0.5) {
      fVar15 = 1.0;
      goto LAB_00945260;
    }
    fVar17 = (float)(int)(fVar15 + 0.5);
  }
  else if (dVar14 == -0.5) {
    fVar15 = -1.0;
LAB_00945260:
    fVar17 = (float)dStack_38;
    if (((long)dStack_38 & 1U) != 0) {
      fVar17 = (float)dStack_38 + fVar15;
    }
  }
  else {
    fVar17 = (float)(int)(fVar15 + -0.5);
  }
  dVar14 = (double)func_0x002c9600((double)fVar13,&dStack_38);
  if (0.0 <= fVar13) {
    if (dVar14 == 0.5) {
      fVar15 = 1.0;
      goto LAB_009452d4;
    }
    fVar13 = (float)(int)(fVar13 + 0.5);
  }
  else if (dVar14 == -0.5) {
    fVar15 = -1.0;
LAB_009452d4:
    fVar13 = (float)dStack_38;
    if (((long)dStack_38 & 1U) != 0) {
      fVar13 = (float)dStack_38 + fVar15;
    }
  }
  else {
    fVar13 = (float)(int)(fVar13 + -0.5);
  }
  dVar14 = (double)func_0x002c9600((double)fVar16,&dStack_38);
  if (0.0 <= fVar16) {
    if (dVar14 == 0.5) {
      fVar16 = 1.0;
      goto LAB_00945348;
    }
    uVar11 = (ulong)(uint)(int)(fVar16 + 0.5);
  }
  else if (dVar14 == -0.5) {
    fVar16 = -1.0;
LAB_00945348:
    fVar15 = (float)dStack_38;
    if (((long)dStack_38 & 1U) != 0) {
      fVar15 = (float)dStack_38 + fVar16;
    }
    uVar11 = (ulong)(uint)fVar15;
  }
  else {
    uVar11 = (ulong)(uint)(int)(fVar16 + -0.5);
  }
  lVar12 = native_UIRect__get_cachedTransform_c27c58(param_4,0);
  if (lVar12 != 0) {
    native_UnityEngine_Transform__set_localPosition_7718a4(fVar13,uVar11,fVar17,lVar12,0);
    lVar12 = native_UIRect__get_cachedTransform_c27c58(param_4,0);
    if (lVar12 != 0) {
      uVar10 = native_UnityEngine_Transform__get_localScale_771d80(lVar12,0);
      lVar12 = native_UIRect__get_cachedTransform_c27c58(param_4,0);
      native_UnityEngine_Mathf__Sign_8e51d8(uVar10,0);
      native_UnityEngine_Mathf__Sign_8e51d8(uVar11,0);
      if (lVar12 != 0) {
        if (pcRam000000000133ff18 == (code *)0x0) {
          pcRam000000000133ff18 = (code *)native_sub_4326f0(&UNK_00e2af52,0);
        }
        (*pcRam000000000133ff18)(lVar12,&stack0xffffffffffffffd0);
        return;
      }
    }
  }
LAB_0094541c:
                    /* WARNING: Subroutine does not return */
  native_sub_432810();
}



/* UILabel$$AssumeNaturalSize @ 0xaeb80c
 * void UILabel__AssumeNaturalSize (UILabel_o* __this, const MethodInfo* method); */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* UILabel$$AssumeNaturalSize
   void UILabel__AssumeNaturalSize (UILabel_o* __this, const MethodInfo* method); */

void native_UILabel__AssumeNaturalSize_aeb80c(long *param_1)

{
  undefined4 uVar1;
  uint uVar2;
  undefined8 uVar3;
  ulong uVar4;
  
  if ((bRam000000000134201a & 1) == 0) {
    native_sub_43273c(&UnityEngine_Object_TypeInfo_12d54e0);
    bRam000000000134201a = 1;
  }
  uVar3 = native_UILabel__get_ambigiousFont_ae8074(param_1);
  if (((*(byte *)(_UnityEngine_Object_TypeInfo_12d54e0 + 0x133) >> 2 & 1) != 0) &&
     (*(int *)(_UnityEngine_Object_TypeInfo_12d54e0 + 0xe0) == 0)) {
    native_sub_4327ec(_UnityEngine_Object_TypeInfo_12d54e0);
  }
  uVar4 = native_UnityEngine_Object__op_Inequality_8d76fc(uVar3,0,0);
  if ((uVar4 & 1) != 0) {
    *(undefined8 *)((long)param_1 + 0xa4) = 0x186a0000186a0;
    native_UILabel__ProcessText_ae8a14(param_1,0,1);
    uVar1 = native_UnityEngine_Mathf__RoundToInt_8e50f0(*(undefined4 *)((long)param_1 + 0x26c),0);
    *(undefined4 *)((long)param_1 + 0xa4) = uVar1;
    uVar2 = native_UnityEngine_Mathf__RoundToInt_8e50f0((int)param_1[0x4e],0);
    *(uint *)(param_1 + 0x15) = uVar2;
    if ((*(uint *)((long)param_1 + 0xa4) & 1) != 0) {
      *(uint *)((long)param_1 + 0xa4) = *(uint *)((long)param_1 + 0xa4) + 1;
    }
    if ((uVar2 & 1) != 0) {
      *(uint *)(param_1 + 0x15) = uVar2 + 1;
    }
                    /* WARNING: Could not recover jumptable at 0x00aeb8f4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (**(code **)(*param_1 + 0x378))(param_1,*(undefined8 *)(*param_1 + 0x380));
    return;
  }
  return;
}



/* UILabel$$GetCharacterIndex @ 0xaeb904
 * int32_t UILabel__GetCharacterIndex (UILabel_o* __this, UnityEngine_Vector3_o worldPos, const MethodInfo* method); */

/* WARNING: Removing unreachable block (ram,0x00aeba34) */
/* WARNING: Removing unreachable block (ram,0x00aeba38) */
/* WARNING: Removing unreachable block (ram,0x00aeba40) */
/* WARNING: Removing unreachable block (ram,0x00aeba48) */
/* WARNING: Removing unreachable block (ram,0x00aeba64) */
/* WARNING: Removing unreachable block (ram,0x00aeba6c) */
/* WARNING: Removing unreachable block (ram,0x00aeba74) */
/* WARNING: Removing unreachable block (ram,0x00aebb4c) */
/* WARNING: Removing unreachable block (ram,0x00aebb50) */
/* WARNING: Removing unreachable block (ram,0x00aebb58) */
/* WARNING: Removing unreachable block (ram,0x00aebb60) */
/* WARNING: Removing unreachable block (ram,0x00aebb7c) */
/* WARNING: Removing unreachable block (ram,0x00aebb84) */
/* WARNING: Removing unreachable block (ram,0x00aebb8c) */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* UILabel$$GetCharacterIndex
   int32_t UILabel__GetCharacterIndex (UILabel_o* __this, UnityEngine_Vector3_o worldPos, const
   MethodInfo* method); */

undefined4
native_UILabel__GetCharacterIndex_aeb904
          (undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

{
  undefined8 uVar1;
  undefined8 uVar2;
  undefined4 uVar3;
  long lVar4;
  ulong uVar5;
  undefined8 uVar6;
  undefined8 *puVar7;
  undefined8 uVar8;
  
  lVar4 = native_UIRect__get_cachedTransform_c27c58(param_4,0);
  if (lVar4 == 0) {
                    /* WARNING: Subroutine does not return */
    native_sub_432810();
  }
  uVar8 = native_UnityEngine_Transform__InverseTransformPoint_7729a0
                    (param_1,param_2,param_3,lVar4,0);
  if ((bRam000000000134201b & 1) == 0) {
    native_sub_43273c(&Method_System_Collections_Generic_List_int__Clear___12dca98);
    native_sub_43273c(&Method_System_Collections_Generic_List_Vector3__Clear___12dd4f0);
    native_sub_43273c(&Method_System_Collections_Generic_List_Vector3__get_Count___12dd500);
    native_sub_43273c(&NGUIText_TypeInfo_12d53c0);
    native_sub_43273c(&UILabel_TypeInfo_12d6468);
    bRam000000000134201b = 1;
  }
  uVar5 = native_UILabel__get_isValid_ae9740(param_4);
  if ((uVar5 & 1) != 0) {
    uVar6 = native_UILabel__get_processedText_ae9630(param_4);
    uVar5 = native_System_String__IsNullOrEmpty_b09430(uVar6,0);
    if ((uVar5 & 1) == 0) {
      native_UILabel__UpdateNGUIText_aeae48(param_4);
      if (((*(ushort *)(_UILabel_TypeInfo_12d6468 + 0x132) >> 10 & 1) != 0) &&
         (*(int *)(_UILabel_TypeInfo_12d6468 + 0xe0) == 0)) {
        native_sub_4327ec();
      }
      uVar2 = *(undefined8 *)(*(long *)(_UILabel_TypeInfo_12d6468 + 0xb8) + 0x20);
      uVar1 = *(undefined8 *)(*(long *)(_UILabel_TypeInfo_12d6468 + 0xb8) + 0x28);
      if (((*(byte *)(_NGUIText_TypeInfo_12d53c0 + 0x133) >> 2 & 1) != 0) &&
         (*(int *)(_NGUIText_TypeInfo_12d53c0 + 0xe0) == 0)) {
        native_sub_4327ec(_NGUIText_TypeInfo_12d53c0);
      }
      native_NGUIText__PrintApproximateCharacterPositions_811e6c(uVar6,uVar2,uVar1,0);
      if (((*(byte *)(_UILabel_TypeInfo_12d6468 + 0x133) >> 2 & 1) != 0) &&
         (*(int *)(_UILabel_TypeInfo_12d6468 + 0xe0) == 0)) {
        native_sub_4327ec();
      }
      lVar4 = *(long *)(*(long *)(_UILabel_TypeInfo_12d6468 + 0xb8) + 0x20);
      if (lVar4 != 0) {
        if (*(int *)(lVar4 + 0x18) < 1) {
          if (((*(byte *)(_NGUIText_TypeInfo_12d53c0 + 0x133) >> 2 & 1) != 0) &&
             (*(int *)(_NGUIText_TypeInfo_12d53c0 + 0xe0) == 0)) {
            native_sub_4327ec();
          }
          puVar7 = *(undefined8 **)(_NGUIText_TypeInfo_12d53c0 + 0xb8);
          *puVar7 = 0;
          native_sub_4326e0(puVar7,0);
          puVar7 = (undefined8 *)(*(long *)(_NGUIText_TypeInfo_12d53c0 + 0xb8) + 8);
          *puVar7 = 0;
          native_sub_4326e0(puVar7,0);
          return 0;
        }
        if (((*(byte *)(_UILabel_TypeInfo_12d6468 + 0x133) >> 2 & 1) != 0) &&
           (*(int *)(_UILabel_TypeInfo_12d6468 + 0xe0) == 0)) {
          native_sub_4327ec();
          lVar4 = *(long *)(*(long *)(_UILabel_TypeInfo_12d6468 + 0xb8) + 0x20);
        }
        native_UILabel__ApplyOffset_aebd14(param_4,lVar4,0);
        if (((*(ushort *)(_UILabel_TypeInfo_12d6468 + 0x132) >> 10 & 1) != 0) &&
           (*(int *)(_UILabel_TypeInfo_12d6468 + 0xe0) == 0)) {
          native_sub_4327ec();
        }
        uVar6 = *(undefined8 *)(*(long *)(_UILabel_TypeInfo_12d6468 + 0xb8) + 0x20);
        uVar2 = *(undefined8 *)(*(long *)(_UILabel_TypeInfo_12d6468 + 0xb8) + 0x28);
        if (((*(byte *)(_NGUIText_TypeInfo_12d53c0 + 0x133) >> 2 & 1) != 0) &&
           (*(int *)(_NGUIText_TypeInfo_12d53c0 + 0xe0) == 0)) {
          native_sub_4327ec(_NGUIText_TypeInfo_12d53c0);
        }
        uVar3 = native_NGUIText__GetApproximateCharacterIndex_80c53c(uVar8,param_2,uVar6,uVar2,0);
        if (((*(byte *)(_UILabel_TypeInfo_12d6468 + 0x133) >> 2 & 1) != 0) &&
           (*(int *)(_UILabel_TypeInfo_12d6468 + 0xe0) == 0)) {
          native_sub_4327ec();
        }
        lVar4 = *(long *)(*(long *)(_UILabel_TypeInfo_12d6468 + 0xb8) + 0x20);
        if (lVar4 != 0) {
          native_System_Collections_Generic_List_Vector3___Clear_d2c0b4
                    (lVar4,_Method_System_Collections_Generic_List_Vector3__Clear___12dd4f0);
          lVar4 = *(long *)(*(long *)(_UILabel_TypeInfo_12d6468 + 0xb8) + 0x28);
          if (lVar4 != 0) {
            native_System_Collections_Generic_List_int___Clear_d392fc
                      (lVar4,_Method_System_Collections_Generic_List_int__Clear___12dca98);
            if (((*(byte *)(_NGUIText_TypeInfo_12d53c0 + 0x133) >> 2 & 1) != 0) &&
               (*(int *)(_NGUIText_TypeInfo_12d53c0 + 0xe0) == 0)) {
              native_sub_4327ec();
            }
            puVar7 = *(undefined8 **)(_NGUIText_TypeInfo_12d53c0 + 0xb8);
            *puVar7 = 0;
            native_sub_4326e0(puVar7,0);
            puVar7 = (undefined8 *)(*(long *)(_NGUIText_TypeInfo_12d53c0 + 0xb8) + 8);
            *puVar7 = 0;
            native_sub_4326e0(puVar7,0);
            return uVar3;
          }
        }
      }
                    /* WARNING: Subroutine does not return */
      native_sub_432810();
    }
  }
  return 0;
}



/* UILabel$$GetCharacterIndex @ 0xaeb974
 * int32_t UILabel__GetCharacterIndex (UILabel_o* __this, UnityEngine_Vector2_o localPos, const MethodInfo* method); */

/* WARNING: Removing unreachable block (ram,0x00aeba34) */
/* WARNING: Removing unreachable block (ram,0x00aeba38) */
/* WARNING: Removing unreachable block (ram,0x00aeba40) */
/* WARNING: Removing unreachable block (ram,0x00aeba48) */
/* WARNING: Removing unreachable block (ram,0x00aeba64) */
/* WARNING: Removing unreachable block (ram,0x00aeba6c) */
/* WARNING: Removing unreachable block (ram,0x00aeba74) */
/* WARNING: Removing unreachable block (ram,0x00aebb4c) */
/* WARNING: Removing unreachable block (ram,0x00aebb50) */
/* WARNING: Removing unreachable block (ram,0x00aebb58) */
/* WARNING: Removing unreachable block (ram,0x00aebb60) */
/* WARNING: Removing unreachable block (ram,0x00aebb7c) */
/* WARNING: Removing unreachable block (ram,0x00aebb84) */
/* WARNING: Removing unreachable block (ram,0x00aebb8c) */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* UILabel$$GetCharacterIndex
   int32_t UILabel__GetCharacterIndex (UILabel_o* __this, UnityEngine_Vector2_o localPos, const
   MethodInfo* method); */

undefined4
native_UILabel__GetCharacterIndex_aeb974(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  undefined8 uVar1;
  undefined8 uVar2;
  undefined4 uVar3;
  ulong uVar4;
  undefined8 uVar5;
  undefined8 *puVar6;
  long lVar7;
  
  if ((bRam000000000134201b & 1) == 0) {
    native_sub_43273c(&Method_System_Collections_Generic_List_int__Clear___12dca98);
    native_sub_43273c(&Method_System_Collections_Generic_List_Vector3__Clear___12dd4f0);
    native_sub_43273c(&Method_System_Collections_Generic_List_Vector3__get_Count___12dd500);
    native_sub_43273c(&NGUIText_TypeInfo_12d53c0);
    native_sub_43273c(&UILabel_TypeInfo_12d6468);
    bRam000000000134201b = 1;
  }
  uVar4 = native_UILabel__get_isValid_ae9740(param_3);
  if ((uVar4 & 1) != 0) {
    uVar5 = native_UILabel__get_processedText_ae9630(param_3);
    uVar4 = native_System_String__IsNullOrEmpty_b09430(uVar5,0);
    if ((uVar4 & 1) == 0) {
      native_UILabel__UpdateNGUIText_aeae48(param_3);
      if (((*(ushort *)(_UILabel_TypeInfo_12d6468 + 0x132) >> 10 & 1) != 0) &&
         (*(int *)(_UILabel_TypeInfo_12d6468 + 0xe0) == 0)) {
        native_sub_4327ec();
      }
      uVar2 = *(undefined8 *)(*(long *)(_UILabel_TypeInfo_12d6468 + 0xb8) + 0x20);
      uVar1 = *(undefined8 *)(*(long *)(_UILabel_TypeInfo_12d6468 + 0xb8) + 0x28);
      if (((*(byte *)(_NGUIText_TypeInfo_12d53c0 + 0x133) >> 2 & 1) != 0) &&
         (*(int *)(_NGUIText_TypeInfo_12d53c0 + 0xe0) == 0)) {
        native_sub_4327ec(_NGUIText_TypeInfo_12d53c0);
      }
      native_NGUIText__PrintApproximateCharacterPositions_811e6c(uVar5,uVar2,uVar1,0);
      if (((*(byte *)(_UILabel_TypeInfo_12d6468 + 0x133) >> 2 & 1) != 0) &&
         (*(int *)(_UILabel_TypeInfo_12d6468 + 0xe0) == 0)) {
        native_sub_4327ec();
      }
      lVar7 = *(long *)(*(long *)(_UILabel_TypeInfo_12d6468 + 0xb8) + 0x20);
      if (lVar7 != 0) {
        if (*(int *)(lVar7 + 0x18) < 1) {
          if (((*(byte *)(_NGUIText_TypeInfo_12d53c0 + 0x133) >> 2 & 1) != 0) &&
             (*(int *)(_NGUIText_TypeInfo_12d53c0 + 0xe0) == 0)) {
            native_sub_4327ec();
          }
          puVar6 = *(undefined8 **)(_NGUIText_TypeInfo_12d53c0 + 0xb8);
          *puVar6 = 0;
          native_sub_4326e0(puVar6,0);
          puVar6 = (undefined8 *)(*(long *)(_NGUIText_TypeInfo_12d53c0 + 0xb8) + 8);
          *puVar6 = 0;
          native_sub_4326e0(puVar6,0);
          return 0;
        }
        if (((*(byte *)(_UILabel_TypeInfo_12d6468 + 0x133) >> 2 & 1) != 0) &&
           (*(int *)(_UILabel_TypeInfo_12d6468 + 0xe0) == 0)) {
          native_sub_4327ec();
          lVar7 = *(long *)(*(long *)(_UILabel_TypeInfo_12d6468 + 0xb8) + 0x20);
        }
        native_UILabel__ApplyOffset_aebd14(param_3,lVar7,0);
        if (((*(ushort *)(_UILabel_TypeInfo_12d6468 + 0x132) >> 10 & 1) != 0) &&
           (*(int *)(_UILabel_TypeInfo_12d6468 + 0xe0) == 0)) {
          native_sub_4327ec();
        }
        uVar5 = *(undefined8 *)(*(long *)(_UILabel_TypeInfo_12d6468 + 0xb8) + 0x20);
        uVar2 = *(undefined8 *)(*(long *)(_UILabel_TypeInfo_12d6468 + 0xb8) + 0x28);
        if (((*(byte *)(_NGUIText_TypeInfo_12d53c0 + 0x133) >> 2 & 1) != 0) &&
           (*(int *)(_NGUIText_TypeInfo_12d53c0 + 0xe0) == 0)) {
          native_sub_4327ec(_NGUIText_TypeInfo_12d53c0);
        }
        uVar3 = native_NGUIText__GetApproximateCharacterIndex_80c53c(param_1,param_2,uVar5,uVar2,0);
        if (((*(byte *)(_UILabel_TypeInfo_12d6468 + 0x133) >> 2 & 1) != 0) &&
           (*(int *)(_UILabel_TypeInfo_12d6468 + 0xe0) == 0)) {
          native_sub_4327ec();
        }
        lVar7 = *(long *)(*(long *)(_UILabel_TypeInfo_12d6468 + 0xb8) + 0x20);
        if (lVar7 != 0) {
          native_System_Collections_Generic_List_Vector3___Clear_d2c0b4
                    (lVar7,_Method_System_Collections_Generic_List_Vector3__Clear___12dd4f0);
          lVar7 = *(long *)(*(long *)(_UILabel_TypeInfo_12d6468 + 0xb8) + 0x28);
          if (lVar7 != 0) {
            native_System_Collections_Generic_List_int___Clear_d392fc
                      (lVar7,_Method_System_Collections_Generic_List_int__Clear___12dca98);
            if (((*(byte *)(_NGUIText_TypeInfo_12d53c0 + 0x133) >> 2 & 1) != 0) &&
               (*(int *)(_NGUIText_TypeInfo_12d53c0 + 0xe0) == 0)) {
              native_sub_4327ec();
            }
            puVar6 = *(undefined8 **)(_NGUIText_TypeInfo_12d53c0 + 0xb8);
            *puVar6 = 0;
            native_sub_4326e0(puVar6,0);
            puVar6 = (undefined8 *)(*(long *)(_NGUIText_TypeInfo_12d53c0 + 0xb8) + 8);
            *puVar6 = 0;
            native_sub_4326e0(puVar6,0);
            return uVar3;
          }
        }
      }
                    /* WARNING: Subroutine does not return */
      native_sub_432810();
    }
  }
  return 0;
}



/* UILabel$$GetCharacterIndexAtPosition @ 0xaeb90c
 * int32_t UILabel__GetCharacterIndexAtPosition (UILabel_o* __this, UnityEngine_Vector3_o worldPos, bool precise, const MethodInfo* method); */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* UILabel$$GetCharacterIndexAtPosition
   int32_t UILabel__GetCharacterIndexAtPosition (UILabel_o* __this, UnityEngine_Vector3_o worldPos,
   bool precise, const MethodInfo* method); */

undefined4
native_UILabel__GetCharacterIndexAtPosition_aeb90c
          (undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,uint param_5)

{
  undefined8 uVar1;
  undefined8 uVar2;
  undefined4 uVar3;
  long lVar4;
  ulong uVar5;
  undefined8 uVar6;
  undefined8 *puVar7;
  undefined8 uVar8;
  
  lVar4 = native_UIRect__get_cachedTransform_c27c58(param_4,0);
  if (lVar4 == 0) {
                    /* WARNING: Subroutine does not return */
    native_sub_432810();
  }
  uVar8 = native_UnityEngine_Transform__InverseTransformPoint_7729a0
                    (param_1,param_2,param_3,lVar4,0);
  if ((bRam000000000134201b & 1) == 0) {
    native_sub_43273c(&Method_System_Collections_Generic_List_int__Clear___12dca98);
    native_sub_43273c(&Method_System_Collections_Generic_List_Vector3__Clear___12dd4f0);
    native_sub_43273c(&Method_System_Collections_Generic_List_Vector3__get_Count___12dd500);
    native_sub_43273c(&NGUIText_TypeInfo_12d53c0);
    native_sub_43273c(&UILabel_TypeInfo_12d6468);
    bRam000000000134201b = 1;
  }
  uVar5 = native_UILabel__get_isValid_ae9740(param_4);
  if ((uVar5 & 1) != 0) {
    uVar6 = native_UILabel__get_processedText_ae9630(param_4);
    uVar5 = native_System_String__IsNullOrEmpty_b09430(uVar6,0);
    if ((uVar5 & 1) == 0) {
      native_UILabel__UpdateNGUIText_aeae48(param_4);
      if ((param_5 & 1) == 0) {
        if (((*(ushort *)(_UILabel_TypeInfo_12d6468 + 0x132) >> 10 & 1) != 0) &&
           (*(int *)(_UILabel_TypeInfo_12d6468 + 0xe0) == 0)) {
          native_sub_4327ec();
        }
        uVar1 = *(undefined8 *)(*(long *)(_UILabel_TypeInfo_12d6468 + 0xb8) + 0x20);
        uVar2 = *(undefined8 *)(*(long *)(_UILabel_TypeInfo_12d6468 + 0xb8) + 0x28);
        if (((*(byte *)(_NGUIText_TypeInfo_12d53c0 + 0x133) >> 2 & 1) != 0) &&
           (*(int *)(_NGUIText_TypeInfo_12d53c0 + 0xe0) == 0)) {
          native_sub_4327ec(_NGUIText_TypeInfo_12d53c0);
        }
        native_NGUIText__PrintApproximateCharacterPositions_811e6c(uVar6,uVar1,uVar2,0);
      }
      else {
        if (((*(ushort *)(_UILabel_TypeInfo_12d6468 + 0x132) >> 10 & 1) != 0) &&
           (*(int *)(_UILabel_TypeInfo_12d6468 + 0xe0) == 0)) {
          native_sub_4327ec();
        }
        uVar1 = *(undefined8 *)(*(long *)(_UILabel_TypeInfo_12d6468 + 0xb8) + 0x20);
        uVar2 = *(undefined8 *)(*(long *)(_UILabel_TypeInfo_12d6468 + 0xb8) + 0x28);
        if (((*(byte *)(_NGUIText_TypeInfo_12d53c0 + 0x133) >> 2 & 1) != 0) &&
           (*(int *)(_NGUIText_TypeInfo_12d53c0 + 0xe0) == 0)) {
          native_sub_4327ec(_NGUIText_TypeInfo_12d53c0);
        }
        native_NGUIText__PrintExactCharacterPositions_812778(uVar6,uVar1,uVar2,0);
      }
      if (((*(byte *)(_UILabel_TypeInfo_12d6468 + 0x133) >> 2 & 1) != 0) &&
         (*(int *)(_UILabel_TypeInfo_12d6468 + 0xe0) == 0)) {
        native_sub_4327ec();
      }
      lVar4 = *(long *)(*(long *)(_UILabel_TypeInfo_12d6468 + 0xb8) + 0x20);
      if (lVar4 != 0) {
        if (*(int *)(lVar4 + 0x18) < 1) {
          if (((*(byte *)(_NGUIText_TypeInfo_12d53c0 + 0x133) >> 2 & 1) != 0) &&
             (*(int *)(_NGUIText_TypeInfo_12d53c0 + 0xe0) == 0)) {
            native_sub_4327ec();
          }
          puVar7 = *(undefined8 **)(_NGUIText_TypeInfo_12d53c0 + 0xb8);
          *puVar7 = 0;
          native_sub_4326e0(puVar7,0);
          puVar7 = (undefined8 *)(*(long *)(_NGUIText_TypeInfo_12d53c0 + 0xb8) + 8);
          *puVar7 = 0;
          native_sub_4326e0(puVar7,0);
          return 0;
        }
        if (((*(byte *)(_UILabel_TypeInfo_12d6468 + 0x133) >> 2 & 1) != 0) &&
           (*(int *)(_UILabel_TypeInfo_12d6468 + 0xe0) == 0)) {
          native_sub_4327ec();
          lVar4 = *(long *)(*(long *)(_UILabel_TypeInfo_12d6468 + 0xb8) + 0x20);
        }
        native_UILabel__ApplyOffset_aebd14(param_4,lVar4,0);
        if ((param_5 & 1) == 0) {
          if (((*(ushort *)(_UILabel_TypeInfo_12d6468 + 0x132) >> 10 & 1) != 0) &&
             (*(int *)(_UILabel_TypeInfo_12d6468 + 0xe0) == 0)) {
            native_sub_4327ec();
          }
          uVar6 = *(undefined8 *)(*(long *)(_UILabel_TypeInfo_12d6468 + 0xb8) + 0x20);
          uVar1 = *(undefined8 *)(*(long *)(_UILabel_TypeInfo_12d6468 + 0xb8) + 0x28);
          if (((*(byte *)(_NGUIText_TypeInfo_12d53c0 + 0x133) >> 2 & 1) != 0) &&
             (*(int *)(_NGUIText_TypeInfo_12d53c0 + 0xe0) == 0)) {
            native_sub_4327ec(_NGUIText_TypeInfo_12d53c0);
          }
          uVar3 = native_NGUIText__GetApproximateCharacterIndex_80c53c(uVar8,param_2,uVar6,uVar1,0);
        }
        else {
          if (((*(ushort *)(_UILabel_TypeInfo_12d6468 + 0x132) >> 10 & 1) != 0) &&
             (*(int *)(_UILabel_TypeInfo_12d6468 + 0xe0) == 0)) {
            native_sub_4327ec();
          }
          uVar6 = *(undefined8 *)(*(long *)(_UILabel_TypeInfo_12d6468 + 0xb8) + 0x20);
          uVar1 = *(undefined8 *)(*(long *)(_UILabel_TypeInfo_12d6468 + 0xb8) + 0x28);
          if (((*(byte *)(_NGUIText_TypeInfo_12d53c0 + 0x133) >> 2 & 1) != 0) &&
             (*(int *)(_NGUIText_TypeInfo_12d53c0 + 0xe0) == 0)) {
            native_sub_4327ec(_NGUIText_TypeInfo_12d53c0);
          }
          uVar3 = native_NGUIText__GetExactCharacterIndex_80c380(uVar8,param_2,uVar6,uVar1,0);
        }
        if (((*(byte *)(_UILabel_TypeInfo_12d6468 + 0x133) >> 2 & 1) != 0) &&
           (*(int *)(_UILabel_TypeInfo_12d6468 + 0xe0) == 0)) {
          native_sub_4327ec();
        }
        lVar4 = *(long *)(*(long *)(_UILabel_TypeInfo_12d6468 + 0xb8) + 0x20);
        if (lVar4 != 0) {
          native_System_Collections_Generic_List_Vector3___Clear_d2c0b4
                    (lVar4,_Method_System_Collections_Generic_List_Vector3__Clear___12dd4f0);
          lVar4 = *(long *)(*(long *)(_UILabel_TypeInfo_12d6468 + 0xb8) + 0x28);
          if (lVar4 != 0) {
            native_System_Collections_Generic_List_int___Clear_d392fc
                      (lVar4,_Method_System_Collections_Generic_List_int__Clear___12dca98);
            if (((*(byte *)(_NGUIText_TypeInfo_12d53c0 + 0x133) >> 2 & 1) != 0) &&
               (*(int *)(_NGUIText_TypeInfo_12d53c0 + 0xe0) == 0)) {
              native_sub_4327ec();
            }
            puVar7 = *(undefined8 **)(_NGUIText_TypeInfo_12d53c0 + 0xb8);
            *puVar7 = 0;
            native_sub_4326e0(puVar7,0);
            puVar7 = (undefined8 *)(*(long *)(_NGUIText_TypeInfo_12d53c0 + 0xb8) + 8);
            *puVar7 = 0;
            native_sub_4326e0(puVar7,0);
            return uVar3;
          }
        }
      }
                    /* WARNING: Subroutine does not return */
      native_sub_432810();
    }
  }
  return 0;
}



/* UILabel$$GetCharacterIndexAtPosition @ 0xaeb97c
 * int32_t UILabel__GetCharacterIndexAtPosition (UILabel_o* __this, UnityEngine_Vector2_o localPos, bool precise, const MethodInfo* method); */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* UILabel$$GetCharacterIndexAtPosition
   int32_t UILabel__GetCharacterIndexAtPosition (UILabel_o* __this, UnityEngine_Vector2_o localPos,
   bool precise, const MethodInfo* method); */

undefined4
native_UILabel__GetCharacterIndexAtPosition_aeb97c
          (undefined8 param_1,undefined8 param_2,undefined8 param_3,ulong param_4)

{
  undefined8 uVar1;
  undefined8 uVar2;
  undefined4 uVar3;
  ulong uVar4;
  undefined8 uVar5;
  undefined8 *puVar6;
  long lVar7;
  
  if ((bRam000000000134201b & 1) == 0) {
    native_sub_43273c(&Method_System_Collections_Generic_List_int__Clear___12dca98);
    native_sub_43273c(&Method_System_Collections_Generic_List_Vector3__Clear___12dd4f0);
    native_sub_43273c(&Method_System_Collections_Generic_List_Vector3__get_Count___12dd500);
    native_sub_43273c(&NGUIText_TypeInfo_12d53c0);
    native_sub_43273c(&UILabel_TypeInfo_12d6468);
    bRam000000000134201b = 1;
  }
  uVar4 = native_UILabel__get_isValid_ae9740(param_3);
  if ((uVar4 & 1) != 0) {
    uVar5 = native_UILabel__get_processedText_ae9630(param_3);
    uVar4 = native_System_String__IsNullOrEmpty_b09430(uVar5,0);
    if ((uVar4 & 1) == 0) {
      native_UILabel__UpdateNGUIText_aeae48(param_3);
      if ((param_4 & 1) == 0) {
        if (((*(ushort *)(_UILabel_TypeInfo_12d6468 + 0x132) >> 10 & 1) != 0) &&
           (*(int *)(_UILabel_TypeInfo_12d6468 + 0xe0) == 0)) {
          native_sub_4327ec();
        }
        uVar1 = *(undefined8 *)(*(long *)(_UILabel_TypeInfo_12d6468 + 0xb8) + 0x20);
        uVar2 = *(undefined8 *)(*(long *)(_UILabel_TypeInfo_12d6468 + 0xb8) + 0x28);
        if (((*(byte *)(_NGUIText_TypeInfo_12d53c0 + 0x133) >> 2 & 1) != 0) &&
           (*(int *)(_NGUIText_TypeInfo_12d53c0 + 0xe0) == 0)) {
          native_sub_4327ec(_NGUIText_TypeInfo_12d53c0);
        }
        native_NGUIText__PrintApproximateCharacterPositions_811e6c(uVar5,uVar1,uVar2,0);
      }
      else {
        if (((*(ushort *)(_UILabel_TypeInfo_12d6468 + 0x132) >> 10 & 1) != 0) &&
           (*(int *)(_UILabel_TypeInfo_12d6468 + 0xe0) == 0)) {
          native_sub_4327ec();
        }
        uVar1 = *(undefined8 *)(*(long *)(_UILabel_TypeInfo_12d6468 + 0xb8) + 0x20);
        uVar2 = *(undefined8 *)(*(long *)(_UILabel_TypeInfo_12d6468 + 0xb8) + 0x28);
        if (((*(byte *)(_NGUIText_TypeInfo_12d53c0 + 0x133) >> 2 & 1) != 0) &&
           (*(int *)(_NGUIText_TypeInfo_12d53c0 + 0xe0) == 0)) {
          native_sub_4327ec(_NGUIText_TypeInfo_12d53c0);
        }
        native_NGUIText__PrintExactCharacterPositions_812778(uVar5,uVar1,uVar2,0);
      }
      if (((*(byte *)(_UILabel_TypeInfo_12d6468 + 0x133) >> 2 & 1) != 0) &&
         (*(int *)(_UILabel_TypeInfo_12d6468 + 0xe0) == 0)) {
        native_sub_4327ec();
      }
      lVar7 = *(long *)(*(long *)(_UILabel_TypeInfo_12d6468 + 0xb8) + 0x20);
      if (lVar7 != 0) {
        if (*(int *)(lVar7 + 0x18) < 1) {
          if (((*(byte *)(_NGUIText_TypeInfo_12d53c0 + 0x133) >> 2 & 1) != 0) &&
             (*(int *)(_NGUIText_TypeInfo_12d53c0 + 0xe0) == 0)) {
            native_sub_4327ec();
          }
          puVar6 = *(undefined8 **)(_NGUIText_TypeInfo_12d53c0 + 0xb8);
          *puVar6 = 0;
          native_sub_4326e0(puVar6,0);
          puVar6 = (undefined8 *)(*(long *)(_NGUIText_TypeInfo_12d53c0 + 0xb8) + 8);
          *puVar6 = 0;
          native_sub_4326e0(puVar6,0);
          return 0;
        }
        if (((*(byte *)(_UILabel_TypeInfo_12d6468 + 0x133) >> 2 & 1) != 0) &&
           (*(int *)(_UILabel_TypeInfo_12d6468 + 0xe0) == 0)) {
          native_sub_4327ec();
          lVar7 = *(long *)(*(long *)(_UILabel_TypeInfo_12d6468 + 0xb8) + 0x20);
        }
        native_UILabel__ApplyOffset_aebd14(param_3,lVar7,0);
        if ((param_4 & 1) == 0) {
          if (((*(ushort *)(_UILabel_TypeInfo_12d6468 + 0x132) >> 10 & 1) != 0) &&
             (*(int *)(_UILabel_TypeInfo_12d6468 + 0xe0) == 0)) {
            native_sub_4327ec();
          }
          uVar5 = *(undefined8 *)(*(long *)(_UILabel_TypeInfo_12d6468 + 0xb8) + 0x20);
          uVar1 = *(undefined8 *)(*(long *)(_UILabel_TypeInfo_12d6468 + 0xb8) + 0x28);
          if (((*(byte *)(_NGUIText_TypeInfo_12d53c0 + 0x133) >> 2 & 1) != 0) &&
             (*(int *)(_NGUIText_TypeInfo_12d53c0 + 0xe0) == 0)) {
            native_sub_4327ec(_NGUIText_TypeInfo_12d53c0);
          }
          uVar3 = native_NGUIText__GetApproximateCharacterIndex_80c53c
                            (param_1,param_2,uVar5,uVar1,0);
        }
        else {
          if (((*(ushort *)(_UILabel_TypeInfo_12d6468 + 0x132) >> 10 & 1) != 0) &&
             (*(int *)(_UILabel_TypeInfo_12d6468 + 0xe0) == 0)) {
            native_sub_4327ec();
          }
          uVar5 = *(undefined8 *)(*(long *)(_UILabel_TypeInfo_12d6468 + 0xb8) + 0x20);
          uVar1 = *(undefined8 *)(*(long *)(_UILabel_TypeInfo_12d6468 + 0xb8) + 0x28);
          if (((*(byte *)(_NGUIText_TypeInfo_12d53c0 + 0x133) >> 2 & 1) != 0) &&
             (*(int *)(_NGUIText_TypeInfo_12d53c0 + 0xe0) == 0)) {
            native_sub_4327ec(_NGUIText_TypeInfo_12d53c0);
          }
          uVar3 = native_NGUIText__GetExactCharacterIndex_80c380(param_1,param_2,uVar5,uVar1,0);
        }
        if (((*(byte *)(_UILabel_TypeInfo_12d6468 + 0x133) >> 2 & 1) != 0) &&
           (*(int *)(_UILabel_TypeInfo_12d6468 + 0xe0) == 0)) {
          native_sub_4327ec();
        }
        lVar7 = *(long *)(*(long *)(_UILabel_TypeInfo_12d6468 + 0xb8) + 0x20);
        if (lVar7 != 0) {
          native_System_Collections_Generic_List_Vector3___Clear_d2c0b4
                    (lVar7,_Method_System_Collections_Generic_List_Vector3__Clear___12dd4f0);
          lVar7 = *(long *)(*(long *)(_UILabel_TypeInfo_12d6468 + 0xb8) + 0x28);
          if (lVar7 != 0) {
            native_System_Collections_Generic_List_int___Clear_d392fc
                      (lVar7,_Method_System_Collections_Generic_List_int__Clear___12dca98);
            if (((*(byte *)(_NGUIText_TypeInfo_12d53c0 + 0x133) >> 2 & 1) != 0) &&
               (*(int *)(_NGUIText_TypeInfo_12d53c0 + 0xe0) == 0)) {
              native_sub_4327ec();
            }
            puVar6 = *(undefined8 **)(_NGUIText_TypeInfo_12d53c0 + 0xb8);
            *puVar6 = 0;
            native_sub_4326e0(puVar6,0);
            puVar6 = (undefined8 *)(*(long *)(_NGUIText_TypeInfo_12d53c0 + 0xb8) + 8);
            *puVar6 = 0;
            native_sub_4326e0(puVar6,0);
            return uVar3;
          }
        }
      }
                    /* WARNING: Subroutine does not return */
      native_sub_432810();
    }
  }
  return 0;
}



/* UILabel$$GetWordAtPosition @ 0xaebf80
 * System_String_o* UILabel__GetWordAtPosition (UILabel_o* __this, UnityEngine_Vector3_o worldPos, const MethodInfo* method); */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* UILabel$$GetWordAtPosition
   System_String_o* UILabel__GetWordAtPosition (UILabel_o* __this, UnityEngine_Vector3_o worldPos,
   const MethodInfo* method); */

long native_UILabel__GetWordAtPosition_aebf80(undefined8 param_1)

{
  short sVar1;
  int iVar2;
  int iVar3;
  ulong uVar4;
  long lVar5;
  long lVar6;
  undefined8 uVar7;
  undefined4 uStack_74;
  int iStack_70;
  undefined1 auStack_6c [4];
  undefined1 auStack_68 [4];
  undefined1 auStack_64 [4];
  undefined1 auStack_60 [4];
  undefined1 auStack_5c [4];
  undefined1 auStack_58 [4];
  undefined4 uStack_54;
  
  iVar2 = native_UILabel__GetCharacterIndexAtPosition_aeb90c(param_1,1);
  if ((bRam000000000134201c & 1) == 0) {
    native_sub_43273c(&char___TypeInfo_12d3090);
    native_sub_43273c(&NGUIText_TypeInfo_12d53c0);
    native_sub_43273c(&
                      Field__PrivateImplementationDetails__A553BADB17A168A36B44DA9D26F99CB2EEC465BFD5E69C5D695D0F2F66629EF5_12ea350
                     );
    bRam000000000134201c = 1;
  }
  lVar5 = native_UILabel__get_printedText_aea210(param_1);
  if (iVar2 != -1) {
    if (lVar5 == 0) {
LAB_00aec12c:
                    /* WARNING: Subroutine does not return */
      native_sub_432810();
    }
    if (iVar2 < *(int *)(lVar5 + 0x10)) {
      lVar6 = native_sub_432750(_char___TypeInfo_12d3090,2);
      if (lVar6 == 0) goto LAB_00aec12c;
      if ((*(int *)(lVar6 + 0x18) == 0) ||
         (*(undefined2 *)(lVar6 + 0x20) = 0x20, *(int *)(lVar6 + 0x18) == 1)) {
        uVar7 = native_sub_43283c();
                    /* WARNING: Subroutine does not return */
        native_sub_4327dc(uVar7,0);
      }
      *(undefined2 *)(lVar6 + 0x22) = 10;
      iVar3 = native_System_String__LastIndexOfAny_b0c688(lVar5,lVar6,iVar2,0);
      uVar7 = native_sub_432750(_char___TypeInfo_12d3090,4);
      native_System_Runtime_CompilerServices_RuntimeHelpers__InitializeArray_7c17e0
                (uVar7,
                 _Field__PrivateImplementationDetails__A553BADB17A168A36B44DA9D26F99CB2EEC465BFD5E69C5D695D0F2F66629EF5_12ea350
                 ,0);
      iVar2 = native_System_String__IndexOfAny_b0c038(lVar5,uVar7,iVar2,0);
      if (iVar2 == -1) {
        iVar2 = *(int *)(lVar5 + 0x10);
      }
      iVar2 = iVar2 - (iVar3 + 1);
      if ((iVar2 != 0) && (0 < iVar2)) {
        lVar5 = native_System_String__Substring_b09fac(lVar5,iVar3 + 1,iVar2,0);
        if (((*(byte *)(_NGUIText_TypeInfo_12d53c0 + 0x133) >> 2 & 1) != 0) &&
           (*(int *)(_NGUIText_TypeInfo_12d53c0 + 0xe0) == 0)) {
          native_sub_4327ec(_NGUIText_TypeInfo_12d53c0);
        }
        if ((bRam0000000001340495 & 1) == 0) {
          native_sub_43273c(&NGUIText_TypeInfo_12d53c0,0);
          bRam0000000001340495 = 1;
        }
        uStack_54 = 0;
        auStack_58[0] = 0;
        auStack_5c[0] = 0;
        auStack_60[0] = 0;
        auStack_64[0] = 0;
        auStack_68[0] = 0;
        auStack_6c[0] = 0;
        uStack_74 = 0;
        iStack_70 = 0;
        if (lVar5 != 0) {
          iVar2 = *(int *)(lVar5 + 0x10);
          if (0 < iVar2) {
            iVar3 = 0;
            do {
              sVar1 = native_System_String__get_Chars_b03810(lVar5,iVar3,0);
              if (sVar1 == 0x5b) {
                uStack_54 = 0;
                auStack_58[0] = 0;
                auStack_5c[0] = 0;
                auStack_60[0] = 0;
                auStack_64[0] = 0;
                auStack_68[0] = 0;
                auStack_6c[0] = 0;
                uStack_74 = 0;
                iStack_70 = iVar3;
                if (((*(byte *)(_NGUIText_TypeInfo_12d53c0 + 0x133) >> 2 & 1) != 0) &&
                   (*(int *)(_NGUIText_TypeInfo_12d53c0 + 0xe0) == 0)) {
                  native_sub_4327ec();
                }
                uVar4 = native_NGUIText__ParseSymbol_8091a4
                                  (lVar5,&iStack_70,0,0,&uStack_54,&uStack_74,auStack_58,auStack_5c,
                                   auStack_60,auStack_64,auStack_68,auStack_6c);
                if ((uVar4 & 1) == 0) goto LAB_0080bc58;
                lVar5 = native_System_String__Remove_b0d628(lVar5,iVar3,iStack_70 - iVar3,0);
                if (lVar5 == 0) {
                    /* WARNING: Subroutine does not return */
                  native_sub_432810();
                }
                iVar2 = *(int *)(lVar5 + 0x10);
              }
              else {
LAB_0080bc58:
                iVar3 = iVar3 + 1;
              }
            } while (iVar3 < iVar2);
          }
        }
        return lVar5;
      }
    }
  }
  return 0;
}



/* UILabel$$GetWordAtPosition @ 0xaec13c
 * System_String_o* UILabel__GetWordAtPosition (UILabel_o* __this, UnityEngine_Vector2_o localPos, const MethodInfo* method); */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* UILabel$$GetWordAtPosition
   System_String_o* UILabel__GetWordAtPosition (UILabel_o* __this, UnityEngine_Vector2_o localPos,
   const MethodInfo* method); */

long native_UILabel__GetWordAtPosition_aec13c(undefined8 param_1)

{
  short sVar1;
  int iVar2;
  int iVar3;
  ulong uVar4;
  long lVar5;
  long lVar6;
  undefined8 uVar7;
  undefined4 uStack_74;
  int iStack_70;
  undefined1 auStack_6c [4];
  undefined1 auStack_68 [4];
  undefined1 auStack_64 [4];
  undefined1 auStack_60 [4];
  undefined1 auStack_5c [4];
  undefined1 auStack_58 [4];
  undefined4 uStack_54;
  
  iVar3 = native_UILabel__GetCharacterIndexAtPosition_aeb97c(param_1,1);
  if ((bRam000000000134201c & 1) == 0) {
    native_sub_43273c(&char___TypeInfo_12d3090);
    native_sub_43273c(&NGUIText_TypeInfo_12d53c0);
    native_sub_43273c(&
                      Field__PrivateImplementationDetails__A553BADB17A168A36B44DA9D26F99CB2EEC465BFD5E69C5D695D0F2F66629EF5_12ea350
                     );
    bRam000000000134201c = 1;
  }
  lVar5 = native_UILabel__get_printedText_aea210(param_1);
  if (iVar3 != -1) {
    if (lVar5 == 0) {
LAB_00aec12c:
                    /* WARNING: Subroutine does not return */
      native_sub_432810();
    }
    if (iVar3 < *(int *)(lVar5 + 0x10)) {
      lVar6 = native_sub_432750(_char___TypeInfo_12d3090,2);
      if (lVar6 == 0) goto LAB_00aec12c;
      if ((*(int *)(lVar6 + 0x18) == 0) ||
         (*(undefined2 *)(lVar6 + 0x20) = 0x20, *(int *)(lVar6 + 0x18) == 1)) {
        uVar7 = native_sub_43283c();
                    /* WARNING: Subroutine does not return */
        native_sub_4327dc(uVar7,0);
      }
      *(undefined2 *)(lVar6 + 0x22) = 10;
      iVar2 = native_System_String__LastIndexOfAny_b0c688(lVar5,lVar6,iVar3,0);
      uVar7 = native_sub_432750(_char___TypeInfo_12d3090,4);
      native_System_Runtime_CompilerServices_RuntimeHelpers__InitializeArray_7c17e0
                (uVar7,
                 _Field__PrivateImplementationDetails__A553BADB17A168A36B44DA9D26F99CB2EEC465BFD5E69C5D695D0F2F66629EF5_12ea350
                 ,0);
      iVar3 = native_System_String__IndexOfAny_b0c038(lVar5,uVar7,iVar3,0);
      if (iVar3 == -1) {
        iVar3 = *(int *)(lVar5 + 0x10);
      }
      iVar3 = iVar3 - (iVar2 + 1);
      if ((iVar3 != 0) && (0 < iVar3)) {
        lVar5 = native_System_String__Substring_b09fac(lVar5,iVar2 + 1,iVar3,0);
        if (((*(byte *)(_NGUIText_TypeInfo_12d53c0 + 0x133) >> 2 & 1) != 0) &&
           (*(int *)(_NGUIText_TypeInfo_12d53c0 + 0xe0) == 0)) {
          native_sub_4327ec(_NGUIText_TypeInfo_12d53c0);
        }
        if ((bRam0000000001340495 & 1) == 0) {
          native_sub_43273c(&NGUIText_TypeInfo_12d53c0,0);
          bRam0000000001340495 = 1;
        }
        uStack_54 = 0;
        auStack_58[0] = 0;
        auStack_5c[0] = 0;
        auStack_60[0] = 0;
        auStack_64[0] = 0;
        auStack_68[0] = 0;
        auStack_6c[0] = 0;
        uStack_74 = 0;
        iStack_70 = 0;
        if (lVar5 != 0) {
          iVar3 = *(int *)(lVar5 + 0x10);
          if (0 < iVar3) {
            iVar2 = 0;
            do {
              sVar1 = native_System_String__get_Chars_b03810(lVar5,iVar2,0);
              if (sVar1 == 0x5b) {
                uStack_54 = 0;
                auStack_58[0] = 0;
                auStack_5c[0] = 0;
                auStack_60[0] = 0;
                auStack_64[0] = 0;
                auStack_68[0] = 0;
                auStack_6c[0] = 0;
                uStack_74 = 0;
                iStack_70 = iVar2;
                if (((*(byte *)(_NGUIText_TypeInfo_12d53c0 + 0x133) >> 2 & 1) != 0) &&
                   (*(int *)(_NGUIText_TypeInfo_12d53c0 + 0xe0) == 0)) {
                  native_sub_4327ec();
                }
                uVar4 = native_NGUIText__ParseSymbol_8091a4
                                  (lVar5,&iStack_70,0,0,&uStack_54,&uStack_74,auStack_58,auStack_5c,
                                   auStack_60,auStack_64,auStack_68,auStack_6c);
                if ((uVar4 & 1) == 0) goto LAB_0080bc58;
                lVar5 = native_System_String__Remove_b0d628(lVar5,iVar2,iStack_70 - iVar2,0);
                if (lVar5 == 0) {
                    /* WARNING: Subroutine does not return */
                  native_sub_432810();
                }
                iVar3 = *(int *)(lVar5 + 0x10);
              }
              else {
LAB_0080bc58:
                iVar2 = iVar2 + 1;
              }
            } while (iVar2 < iVar3);
          }
        }
        return lVar5;
      }
    }
  }
  return 0;
}



/* UILabel$$GetWordAtCharacterIndex @ 0xaebfac
 * System_String_o* UILabel__GetWordAtCharacterIndex (UILabel_o* __this, int32_t characterIndex, const MethodInfo* method); */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* UILabel$$GetWordAtCharacterIndex
   System_String_o* UILabel__GetWordAtCharacterIndex (UILabel_o* __this, int32_t characterIndex,
   const MethodInfo* method); */

long native_UILabel__GetWordAtCharacterIndex_aebfac(undefined8 param_1,int param_2)

{
  short sVar1;
  int iVar2;
  int iVar3;
  ulong uVar4;
  long lVar5;
  long lVar6;
  undefined8 uVar7;
  undefined4 uStack_74;
  int iStack_70;
  undefined1 auStack_6c [4];
  undefined1 auStack_68 [4];
  undefined1 auStack_64 [4];
  undefined1 auStack_60 [4];
  undefined1 auStack_5c [4];
  undefined1 auStack_58 [4];
  undefined4 uStack_54;
  
  if ((bRam000000000134201c & 1) == 0) {
    native_sub_43273c(&char___TypeInfo_12d3090);
    native_sub_43273c(&NGUIText_TypeInfo_12d53c0);
    native_sub_43273c(&
                      Field__PrivateImplementationDetails__A553BADB17A168A36B44DA9D26F99CB2EEC465BFD5E69C5D695D0F2F66629EF5_12ea350
                     );
    bRam000000000134201c = 1;
  }
  lVar5 = native_UILabel__get_printedText_aea210(param_1);
  if (param_2 != -1) {
    if (lVar5 == 0) {
LAB_00aec12c:
                    /* WARNING: Subroutine does not return */
      native_sub_432810();
    }
    if (param_2 < *(int *)(lVar5 + 0x10)) {
      lVar6 = native_sub_432750(_char___TypeInfo_12d3090,2);
      if (lVar6 == 0) goto LAB_00aec12c;
      if ((*(int *)(lVar6 + 0x18) == 0) ||
         (*(undefined2 *)(lVar6 + 0x20) = 0x20, *(int *)(lVar6 + 0x18) == 1)) {
        uVar7 = native_sub_43283c();
                    /* WARNING: Subroutine does not return */
        native_sub_4327dc(uVar7,0);
      }
      *(undefined2 *)(lVar6 + 0x22) = 10;
      iVar2 = native_System_String__LastIndexOfAny_b0c688(lVar5,lVar6,param_2,0);
      uVar7 = native_sub_432750(_char___TypeInfo_12d3090,4);
      native_System_Runtime_CompilerServices_RuntimeHelpers__InitializeArray_7c17e0
                (uVar7,
                 _Field__PrivateImplementationDetails__A553BADB17A168A36B44DA9D26F99CB2EEC465BFD5E69C5D695D0F2F66629EF5_12ea350
                 ,0);
      iVar3 = native_System_String__IndexOfAny_b0c038(lVar5,uVar7,param_2,0);
      if (iVar3 == -1) {
        iVar3 = *(int *)(lVar5 + 0x10);
      }
      iVar3 = iVar3 - (iVar2 + 1);
      if ((iVar3 != 0) && (0 < iVar3)) {
        lVar5 = native_System_String__Substring_b09fac(lVar5,iVar2 + 1,iVar3,0);
        if (((*(byte *)(_NGUIText_TypeInfo_12d53c0 + 0x133) >> 2 & 1) != 0) &&
           (*(int *)(_NGUIText_TypeInfo_12d53c0 + 0xe0) == 0)) {
          native_sub_4327ec(_NGUIText_TypeInfo_12d53c0);
        }
        if ((bRam0000000001340495 & 1) == 0) {
          native_sub_43273c(&NGUIText_TypeInfo_12d53c0,0);
          bRam0000000001340495 = 1;
        }
        uStack_54 = 0;
        auStack_58[0] = 0;
        auStack_5c[0] = 0;
        auStack_60[0] = 0;
        auStack_64[0] = 0;
        auStack_68[0] = 0;
        auStack_6c[0] = 0;
        uStack_74 = 0;
        iStack_70 = 0;
        if (lVar5 != 0) {
          iVar3 = *(int *)(lVar5 + 0x10);
          if (0 < iVar3) {
            iVar2 = 0;
            do {
              sVar1 = native_System_String__get_Chars_b03810(lVar5,iVar2,0);
              if (sVar1 == 0x5b) {
                uStack_54 = 0;
                auStack_58[0] = 0;
                auStack_5c[0] = 0;
                auStack_60[0] = 0;
                auStack_64[0] = 0;
                auStack_68[0] = 0;
                auStack_6c[0] = 0;
                uStack_74 = 0;
                iStack_70 = iVar2;
                if (((*(byte *)(_NGUIText_TypeInfo_12d53c0 + 0x133) >> 2 & 1) != 0) &&
                   (*(int *)(_NGUIText_TypeInfo_12d53c0 + 0xe0) == 0)) {
                  native_sub_4327ec();
                }
                uVar4 = native_NGUIText__ParseSymbol_8091a4
                                  (lVar5,&iStack_70,0,0,&uStack_54,&uStack_74,auStack_58,auStack_5c,
                                   auStack_60,auStack_64,auStack_68,auStack_6c);
                if ((uVar4 & 1) == 0) goto LAB_0080bc58;
                lVar5 = native_System_String__Remove_b0d628(lVar5,iVar2,iStack_70 - iVar2,0);
                if (lVar5 == 0) {
                    /* WARNING: Subroutine does not return */
                  native_sub_432810();
                }
                iVar3 = *(int *)(lVar5 + 0x10);
              }
              else {
LAB_0080bc58:
                iVar2 = iVar2 + 1;
              }
            } while (iVar2 < iVar3);
          }
        }
        return lVar5;
      }
    }
  }
  return 0;
}



/* UILabel$$GetUrlAtPosition @ 0xaec168
 * System_String_o* UILabel__GetUrlAtPosition (UILabel_o* __this, UnityEngine_Vector3_o worldPos, const MethodInfo* method); */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* UILabel$$GetUrlAtPosition
   System_String_o* UILabel__GetUrlAtPosition (UILabel_o* __this, UnityEngine_Vector3_o worldPos,
   const MethodInfo* method); */

long native_UILabel__GetUrlAtPosition_aec168(undefined8 param_1)

{
  short sVar1;
  int iVar2;
  int iVar3;
  int iVar4;
  int iVar5;
  long lVar6;
  undefined *puVar7;
  undefined8 uVar8;
  undefined8 uVar9;
  undefined8 uVar10;
  long lVar11;
  
  iVar2 = native_UILabel__GetCharacterIndexAtPosition_aeb90c(param_1,1);
  if ((bRam000000000134201d & 1) == 0) {
    native_sub_43273c(&StringLiteral___url__12f3268);
    native_sub_43273c(&StringLiteral___12f3410);
    native_sub_43273c(&StringLiteral__url__12f3378);
    bRam000000000134201d = 1;
  }
  lVar6 = native_UILabel__get_printedText_aea210(param_1);
  if (iVar2 == -1) {
    return 0;
  }
  if (lVar6 == 0) {
                    /* WARNING: Subroutine does not return */
    native_sub_432810();
  }
  if (*(int *)(lVar6 + 0x10) + -6 <= iVar2) {
    return 0;
  }
  sVar1 = native_System_String__get_Chars_b03810(lVar6,iVar2,0);
  if (((((sVar1 != 0x5b) ||
        (sVar1 = native_System_String__get_Chars_b03810(lVar6,iVar2 + 1,0), sVar1 != 0x75)) ||
       (sVar1 = native_System_String__get_Chars_b03810(lVar6,iVar2 + 2,0), sVar1 != 0x72)) ||
      ((sVar1 = native_System_String__get_Chars_b03810(lVar6,iVar2 + 3,0), sVar1 != 0x6c ||
       (sVar1 = native_System_String__get_Chars_b03810(lVar6,iVar2 + 4,0), iVar3 = iVar2,
       sVar1 != 0x3d)))) &&
     (iVar3 = native_System_String__LastIndexOf_b0cac8(lVar6,_StringLiteral__url__12f3378,iVar2,0),
     iVar3 == -1)) {
    return 0;
  }
  iVar3 = iVar3 + 5;
  iVar4 = native_System_String__IndexOf_b0c054(lVar6,_StringLiteral___12f3410,iVar3,0);
  if ((iVar4 == -1) ||
     ((iVar5 = native_System_String__IndexOf_b0c054(lVar6,_StringLiteral___url__12f3268,iVar4,0),
      iVar5 != -1 && (iVar5 < iVar2)))) {
    return 0;
  }
  iVar4 = iVar4 - iVar3;
  if ((bRam0000000001342123 & 1) == 0) {
    native_sub_43273c(&string_TypeInfo_12d5f28,iVar3,iVar4,0);
    bRam0000000001342123 = 1;
  }
  if (iVar3 < 0) {
    puVar7 = &StringLiteral_StartIndex_cannot_be_less_than_zero__12f1060;
  }
  else {
    iVar2 = *(int *)(lVar6 + 0x10);
    if (iVar3 <= iVar2) {
      if (iVar4 < 0) {
        puVar7 = &StringLiteral_Length_cannot_be_less_than_zero__12ef570;
      }
      else {
        if (iVar3 <= iVar2 - iVar4) {
          if (iVar4 == 0) {
            lVar6 = **(long **)(_string_TypeInfo_12d5f28 + 0xb8);
          }
          else if ((iVar3 != 0) || (iVar2 != iVar4)) {
            lVar11 = native_sub_3bca18(iVar4);
            if (lVar11 == 0) {
                    /* WARNING: Subroutine does not return */
              native_sub_432810();
            }
            native_System_Buffer__Memcpy_85e1a8
                      (lVar11 + 0x14,lVar6 + (long)iVar3 * 2 + 0x14,iVar4 * 2,0);
            return lVar11;
          }
          return lVar6;
        }
        puVar7 = &StringLiteral_Index_and_length_must_refer_to_a_location_within_the_string__12ee7f0
        ;
      }
      uVar8 = native_sub_432740(puVar7);
      uVar8 = native_System_Environment__GetResourceString_beaba8(uVar8,0);
      native_sub_432740(&System_ArgumentOutOfRangeException_TypeInfo_12d3810);
      uVar9 = native_sub_432808();
      puVar7 = &StringLiteral_length_12f5428;
      goto code_r0x00b0a0e0;
    }
    puVar7 = &StringLiteral_startIndex_cannot_be_larger_than_length_of_string__12f6240;
  }
  uVar8 = native_sub_432740(puVar7);
  uVar8 = native_System_Environment__GetResourceString_beaba8(uVar8,0);
  native_sub_432740(&System_ArgumentOutOfRangeException_TypeInfo_12d3810);
  uVar9 = native_sub_432808();
  puVar7 = &StringLiteral_startIndex_12f6228;
code_r0x00b0a0e0:
  uVar10 = native_sub_432740(puVar7);
  native_System_ArgumentOutOfRangeException___ctor_951f98(uVar9,uVar10,uVar8,0);
  uVar8 = native_sub_432740(&Method_System_String_Substring___12e6d80);
                    /* WARNING: Subroutine does not return */
  native_sub_4327dc(uVar9,uVar8);
}



/* UILabel$$GetUrlAtPosition @ 0xaec350
 * System_String_o* UILabel__GetUrlAtPosition (UILabel_o* __this, UnityEngine_Vector2_o localPos, const MethodInfo* method); */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* UILabel$$GetUrlAtPosition
   System_String_o* UILabel__GetUrlAtPosition (UILabel_o* __this, UnityEngine_Vector2_o localPos,
   const MethodInfo* method); */

long native_UILabel__GetUrlAtPosition_aec350(undefined8 param_1)

{
  short sVar1;
  int iVar2;
  int iVar3;
  int iVar4;
  int iVar5;
  long lVar6;
  undefined *puVar7;
  undefined8 uVar8;
  undefined8 uVar9;
  undefined8 uVar10;
  long lVar11;
  
  iVar5 = native_UILabel__GetCharacterIndexAtPosition_aeb97c(param_1,1);
  if ((bRam000000000134201d & 1) == 0) {
    native_sub_43273c(&StringLiteral___url__12f3268);
    native_sub_43273c(&StringLiteral___12f3410);
    native_sub_43273c(&StringLiteral__url__12f3378);
    bRam000000000134201d = 1;
  }
  lVar6 = native_UILabel__get_printedText_aea210(param_1);
  if (iVar5 == -1) {
    return 0;
  }
  if (lVar6 == 0) {
                    /* WARNING: Subroutine does not return */
    native_sub_432810();
  }
  if (*(int *)(lVar6 + 0x10) + -6 <= iVar5) {
    return 0;
  }
  sVar1 = native_System_String__get_Chars_b03810(lVar6,iVar5,0);
  if (((((sVar1 != 0x5b) ||
        (sVar1 = native_System_String__get_Chars_b03810(lVar6,iVar5 + 1,0), sVar1 != 0x75)) ||
       (sVar1 = native_System_String__get_Chars_b03810(lVar6,iVar5 + 2,0), sVar1 != 0x72)) ||
      ((sVar1 = native_System_String__get_Chars_b03810(lVar6,iVar5 + 3,0), sVar1 != 0x6c ||
       (sVar1 = native_System_String__get_Chars_b03810(lVar6,iVar5 + 4,0), iVar2 = iVar5,
       sVar1 != 0x3d)))) &&
     (iVar2 = native_System_String__LastIndexOf_b0cac8(lVar6,_StringLiteral__url__12f3378,iVar5,0),
     iVar2 == -1)) {
    return 0;
  }
  iVar2 = iVar2 + 5;
  iVar3 = native_System_String__IndexOf_b0c054(lVar6,_StringLiteral___12f3410,iVar2,0);
  if ((iVar3 == -1) ||
     ((iVar4 = native_System_String__IndexOf_b0c054(lVar6,_StringLiteral___url__12f3268,iVar3,0),
      iVar4 != -1 && (iVar4 < iVar5)))) {
    return 0;
  }
  iVar3 = iVar3 - iVar2;
  if ((bRam0000000001342123 & 1) == 0) {
    native_sub_43273c(&string_TypeInfo_12d5f28,iVar2,iVar3,0);
    bRam0000000001342123 = 1;
  }
  if (iVar2 < 0) {
    puVar7 = &StringLiteral_StartIndex_cannot_be_less_than_zero__12f1060;
  }
  else {
    iVar5 = *(int *)(lVar6 + 0x10);
    if (iVar2 <= iVar5) {
      if (iVar3 < 0) {
        puVar7 = &StringLiteral_Length_cannot_be_less_than_zero__12ef570;
      }
      else {
        if (iVar2 <= iVar5 - iVar3) {
          if (iVar3 == 0) {
            lVar6 = **(long **)(_string_TypeInfo_12d5f28 + 0xb8);
          }
          else if ((iVar2 != 0) || (iVar5 != iVar3)) {
            lVar11 = native_sub_3bca18(iVar3);
            if (lVar11 == 0) {
                    /* WARNING: Subroutine does not return */
              native_sub_432810();
            }
            native_System_Buffer__Memcpy_85e1a8
                      (lVar11 + 0x14,lVar6 + (long)iVar2 * 2 + 0x14,iVar3 * 2,0);
            return lVar11;
          }
          return lVar6;
        }
        puVar7 = &StringLiteral_Index_and_length_must_refer_to_a_location_within_the_string__12ee7f0
        ;
      }
      uVar8 = native_sub_432740(puVar7);
      uVar8 = native_System_Environment__GetResourceString_beaba8(uVar8,0);
      native_sub_432740(&System_ArgumentOutOfRangeException_TypeInfo_12d3810);
      uVar9 = native_sub_432808();
      puVar7 = &StringLiteral_length_12f5428;
      goto code_r0x00b0a0e0;
    }
    puVar7 = &StringLiteral_startIndex_cannot_be_larger_than_length_of_string__12f6240;
  }
  uVar8 = native_sub_432740(puVar7);
  uVar8 = native_System_Environment__GetResourceString_beaba8(uVar8,0);
  native_sub_432740(&System_ArgumentOutOfRangeException_TypeInfo_12d3810);
  uVar9 = native_sub_432808();
  puVar7 = &StringLiteral_startIndex_12f6228;
code_r0x00b0a0e0:
  uVar10 = native_sub_432740(puVar7);
  native_System_ArgumentOutOfRangeException___ctor_951f98(uVar9,uVar10,uVar8,0);
  uVar8 = native_sub_432740(&Method_System_String_Substring___12e6d80);
                    /* WARNING: Subroutine does not return */
  native_sub_4327dc(uVar9,uVar8);
}



/* UILabel$$GetUrlAtCharacterIndex @ 0xaec194
 * System_String_o* UILabel__GetUrlAtCharacterIndex (UILabel_o* __this, int32_t characterIndex, const MethodInfo* method); */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* UILabel$$GetUrlAtCharacterIndex
   System_String_o* UILabel__GetUrlAtCharacterIndex (UILabel_o* __this, int32_t characterIndex,
   const MethodInfo* method); */

long native_UILabel__GetUrlAtCharacterIndex_aec194(undefined8 param_1,int param_2)

{
  short sVar1;
  int iVar2;
  int iVar3;
  int iVar4;
  long lVar5;
  undefined *puVar6;
  undefined8 uVar7;
  undefined8 uVar8;
  undefined8 uVar9;
  long lVar10;
  
  if ((bRam000000000134201d & 1) == 0) {
    native_sub_43273c(&StringLiteral___url__12f3268);
    native_sub_43273c(&StringLiteral___12f3410);
    native_sub_43273c(&StringLiteral__url__12f3378);
    bRam000000000134201d = 1;
  }
  lVar5 = native_UILabel__get_printedText_aea210(param_1);
  if (param_2 == -1) {
    return 0;
  }
  if (lVar5 == 0) {
                    /* WARNING: Subroutine does not return */
    native_sub_432810();
  }
  if (*(int *)(lVar5 + 0x10) + -6 <= param_2) {
    return 0;
  }
  sVar1 = native_System_String__get_Chars_b03810(lVar5,param_2,0);
  if (((((sVar1 != 0x5b) ||
        (sVar1 = native_System_String__get_Chars_b03810(lVar5,param_2 + 1,0), sVar1 != 0x75)) ||
       (sVar1 = native_System_String__get_Chars_b03810(lVar5,param_2 + 2,0), sVar1 != 0x72)) ||
      ((sVar1 = native_System_String__get_Chars_b03810(lVar5,param_2 + 3,0), sVar1 != 0x6c ||
       (sVar1 = native_System_String__get_Chars_b03810(lVar5,param_2 + 4,0), iVar2 = param_2,
       sVar1 != 0x3d)))) &&
     (iVar2 = native_System_String__LastIndexOf_b0cac8(lVar5,_StringLiteral__url__12f3378,param_2,0)
     , iVar2 == -1)) {
    return 0;
  }
  iVar2 = iVar2 + 5;
  iVar3 = native_System_String__IndexOf_b0c054(lVar5,_StringLiteral___12f3410,iVar2,0);
  if ((iVar3 == -1) ||
     ((iVar4 = native_System_String__IndexOf_b0c054(lVar5,_StringLiteral___url__12f3268,iVar3,0),
      iVar4 != -1 && (iVar4 < param_2)))) {
    return 0;
  }
  iVar3 = iVar3 - iVar2;
  if ((bRam0000000001342123 & 1) == 0) {
    native_sub_43273c(&string_TypeInfo_12d5f28,iVar2,iVar3,0);
    bRam0000000001342123 = 1;
  }
  if (iVar2 < 0) {
    puVar6 = &StringLiteral_StartIndex_cannot_be_less_than_zero__12f1060;
  }
  else {
    iVar4 = *(int *)(lVar5 + 0x10);
    if (iVar2 <= iVar4) {
      if (iVar3 < 0) {
        puVar6 = &StringLiteral_Length_cannot_be_less_than_zero__12ef570;
      }
      else {
        if (iVar2 <= iVar4 - iVar3) {
          if (iVar3 == 0) {
            lVar5 = **(long **)(_string_TypeInfo_12d5f28 + 0xb8);
          }
          else if ((iVar2 != 0) || (iVar4 != iVar3)) {
            lVar10 = native_sub_3bca18(iVar3);
            if (lVar10 == 0) {
                    /* WARNING: Subroutine does not return */
              native_sub_432810();
            }
            native_System_Buffer__Memcpy_85e1a8
                      (lVar10 + 0x14,lVar5 + (long)iVar2 * 2 + 0x14,iVar3 * 2,0);
            return lVar10;
          }
          return lVar5;
        }
        puVar6 = &StringLiteral_Index_and_length_must_refer_to_a_location_within_the_string__12ee7f0
        ;
      }
      uVar7 = native_sub_432740(puVar6);
      uVar7 = native_System_Environment__GetResourceString_beaba8(uVar7,0);
      native_sub_432740(&System_ArgumentOutOfRangeException_TypeInfo_12d3810);
      uVar8 = native_sub_432808();
      puVar6 = &StringLiteral_length_12f5428;
      goto code_r0x00b0a0e0;
    }
    puVar6 = &StringLiteral_startIndex_cannot_be_larger_than_length_of_string__12f6240;
  }
  uVar7 = native_sub_432740(puVar6);
  uVar7 = native_System_Environment__GetResourceString_beaba8(uVar7,0);
  native_sub_432740(&System_ArgumentOutOfRangeException_TypeInfo_12d3810);
  uVar8 = native_sub_432808();
  puVar6 = &StringLiteral_startIndex_12f6228;
code_r0x00b0a0e0:
  uVar9 = native_sub_432740(puVar6);
  native_System_ArgumentOutOfRangeException___ctor_951f98(uVar8,uVar9,uVar7,0);
  uVar7 = native_sub_432740(&Method_System_String_Substring___12e6d80);
                    /* WARNING: Subroutine does not return */
  native_sub_4327dc(uVar8,uVar7);
}



/* UILabel$$GetCharacterIndex @ 0xaec37c
 * int32_t UILabel__GetCharacterIndex (UILabel_o* __this, int32_t currentIndex, int32_t key, const MethodInfo* method); */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* UILabel$$GetCharacterIndex
   int32_t UILabel__GetCharacterIndex (UILabel_o* __this, int32_t currentIndex, int32_t key, const
   MethodInfo* method); */

int native_UILabel__GetCharacterIndex_aec37c(long param_1,int param_2,undefined4 param_3)

{
  undefined8 uVar1;
  undefined8 uVar2;
  int iVar3;
  int iVar4;
  ulong uVar5;
  long lVar6;
  undefined8 *puVar7;
  long lVar8;
  long lVar9;
  long lVar10;
  uint uVar11;
  float fVar12;
  float fVar13;
  float fVar14;
  
  if ((bRam000000000134201e & 1) == 0) {
    native_sub_43273c(&Method_System_Collections_Generic_List_int__Clear___12dca98);
    native_sub_43273c(&Method_System_Collections_Generic_List_Vector3__Clear___12dd4f0);
    native_sub_43273c(&Method_System_Collections_Generic_List_Vector3__get_Count___12dd500);
    native_sub_43273c(&Method_System_Collections_Generic_List_int__get_Count___12dcad0);
    native_sub_43273c(&Method_System_Collections_Generic_List_Vector3__get_Item___12dd508);
    native_sub_43273c(&Method_System_Collections_Generic_List_int__get_Item___12dcad8);
    native_sub_43273c(&NGUIText_TypeInfo_12d53c0);
    native_sub_43273c(&UILabel_TypeInfo_12d6468);
    bRam000000000134201e = 1;
  }
  uVar5 = native_UILabel__get_isValid_ae9740(param_1);
  if ((uVar5 & 1) == 0) {
LAB_00aec7ac:
    iVar4 = param_2;
  }
  else {
    lVar6 = native_UILabel__get_processedText_ae9630(param_1);
    uVar5 = native_System_String__IsNullOrEmpty_b09430(lVar6,0);
    if ((uVar5 & 1) != 0) {
      return 0;
    }
    iVar4 = native_UILabel__get_defaultFontSize_ae82a4(param_1);
    native_UILabel__UpdateNGUIText_aeae48(param_1);
    if (((*(byte *)(_UILabel_TypeInfo_12d6468 + 0x133) >> 2 & 1) != 0) &&
       (*(int *)(_UILabel_TypeInfo_12d6468 + 0xe0) == 0)) {
      native_sub_4327ec();
    }
    uVar1 = *(undefined8 *)(*(long *)(_UILabel_TypeInfo_12d6468 + 0xb8) + 0x20);
    uVar2 = *(undefined8 *)(*(long *)(_UILabel_TypeInfo_12d6468 + 0xb8) + 0x28);
    if (((*(byte *)(_NGUIText_TypeInfo_12d53c0 + 0x133) >> 2 & 1) != 0) &&
       (*(int *)(_NGUIText_TypeInfo_12d53c0 + 0xe0) == 0)) {
      native_sub_4327ec(_NGUIText_TypeInfo_12d53c0);
    }
    native_NGUIText__PrintApproximateCharacterPositions_811e6c(lVar6,uVar1,uVar2,0);
    lVar8 = *(long *)(*(long *)(_UILabel_TypeInfo_12d6468 + 0xb8) + 0x20);
    if (lVar8 == 0) goto LAB_00aec834;
    if (0 < *(int *)(lVar8 + 0x18)) {
      if (((*(byte *)(_UILabel_TypeInfo_12d6468 + 0x133) >> 2 & 1) != 0) &&
         (*(int *)(_UILabel_TypeInfo_12d6468 + 0xe0) == 0)) {
        native_sub_4327ec();
        lVar8 = *(long *)(*(long *)(_UILabel_TypeInfo_12d6468 + 0xb8) + 0x20);
      }
      native_UILabel__ApplyOffset_aebd14(param_1,lVar8,0);
      lVar8 = *(long *)(*(long *)(_UILabel_TypeInfo_12d6468 + 0xb8) + 0x28);
      if (lVar8 == 0) goto LAB_00aec834;
      iVar3 = *(int *)(lVar8 + 0x18);
      if (0 < iVar3) {
        lVar10 = 0;
        lVar8 = 0;
LAB_00aec54c:
        if (((*(byte *)(_UILabel_TypeInfo_12d6468 + 0x133) >> 2 & 1) != 0) &&
           (*(int *)(_UILabel_TypeInfo_12d6468 + 0xe0) == 0)) {
          native_sub_4327ec();
        }
        lVar9 = *(long *)(*(long *)(_UILabel_TypeInfo_12d6468 + 0xb8) + 0x28);
        if (lVar9 == 0) goto LAB_00aec834;
        uVar11 = (uint)lVar8;
        if (*(uint *)(lVar9 + 0x18) <= uVar11) {
          native_System_ThrowHelper__ThrowArgumentOutOfRangeException_9fe0f4(0);
        }
        if (*(int *)(*(long *)(lVar9 + 0x10) + lVar8 * 4 + 0x20) == param_2) {
          if (((*(byte *)(_UILabel_TypeInfo_12d6468 + 0x133) >> 2 & 1) != 0) &&
             (*(int *)(_UILabel_TypeInfo_12d6468 + 0xe0) == 0)) {
            native_sub_4327ec();
          }
          lVar8 = *(long *)(*(long *)(_UILabel_TypeInfo_12d6468 + 0xb8) + 0x20);
          if (lVar8 == 0) goto LAB_00aec834;
          if (*(uint *)(lVar8 + 0x18) <= uVar11) {
            native_System_ThrowHelper__ThrowArgumentOutOfRangeException_9fe0f4(0);
          }
          lVar10 = *(long *)(lVar8 + 0x10) + lVar10;
          fVar14 = *(float *)(lVar10 + 0x20);
          fVar13 = *(float *)(lVar10 + 0x24);
          switch(param_3) {
          case 0x111:
            if (*(char *)(param_1 + 0x214) == '\0') {
              fVar12 = (float)*(int *)(param_1 + 0x210);
            }
            else {
              fVar12 = *(float *)(param_1 + 0x21c);
            }
            fVar13 = fVar13 + fVar12 + (float)iVar4;
            break;
          case 0x112:
            if (*(char *)(param_1 + 0x214) == '\0') {
              fVar12 = (float)*(int *)(param_1 + 0x210);
            }
            else {
              fVar12 = *(float *)(param_1 + 0x21c);
            }
            fVar13 = fVar13 - (fVar12 + (float)iVar4);
            break;
          case 0x116:
            fVar12 = -1000.0;
            goto code_r0x00aec634;
          case 0x117:
            fVar12 = 1000.0;
code_r0x00aec634:
            fVar14 = fVar14 + fVar12;
          }
          if (((*(byte *)(_UILabel_TypeInfo_12d6468 + 0x133) >> 2 & 1) != 0) &&
             (*(int *)(_UILabel_TypeInfo_12d6468 + 0xe0) == 0)) {
            native_sub_4327ec();
          }
          uVar1 = *(undefined8 *)(*(long *)(_UILabel_TypeInfo_12d6468 + 0xb8) + 0x20);
          uVar2 = *(undefined8 *)(*(long *)(_UILabel_TypeInfo_12d6468 + 0xb8) + 0x28);
          if (((*(byte *)(_NGUIText_TypeInfo_12d53c0 + 0x133) >> 2 & 1) != 0) &&
             (*(int *)(_NGUIText_TypeInfo_12d53c0 + 0xe0) == 0)) {
            native_sub_4327ec(_NGUIText_TypeInfo_12d53c0);
          }
          iVar4 = native_NGUIText__GetApproximateCharacterIndex_80c53c(fVar14,fVar13,uVar1,uVar2,0);
          if (iVar4 != param_2) {
            if (((*(byte *)(_UILabel_TypeInfo_12d6468 + 0x133) >> 2 & 1) != 0) &&
               (*(int *)(_UILabel_TypeInfo_12d6468 + 0xe0) == 0)) {
              native_sub_4327ec();
            }
            lVar6 = *(long *)(*(long *)(_UILabel_TypeInfo_12d6468 + 0xb8) + 0x20);
            if (lVar6 != 0) {
              native_System_Collections_Generic_List_Vector3___Clear_d2c0b4
                        (lVar6,_Method_System_Collections_Generic_List_Vector3__Clear___12dd4f0);
              lVar6 = *(long *)(*(long *)(_UILabel_TypeInfo_12d6468 + 0xb8) + 0x28);
              if (lVar6 != 0) {
                native_System_Collections_Generic_List_int___Clear_d392fc
                          (lVar6,_Method_System_Collections_Generic_List_int__Clear___12dca98);
                return iVar4;
              }
            }
            goto LAB_00aec834;
          }
        }
        else if ((int)(uVar11 + 1) < iVar3) goto code_r0x00aec540;
      }
      if (((*(byte *)(_UILabel_TypeInfo_12d6468 + 0x133) >> 2 & 1) != 0) &&
         (*(int *)(_UILabel_TypeInfo_12d6468 + 0xe0) == 0)) {
        native_sub_4327ec();
      }
      lVar8 = *(long *)(*(long *)(_UILabel_TypeInfo_12d6468 + 0xb8) + 0x20);
      if (lVar8 == 0) goto LAB_00aec834;
      native_System_Collections_Generic_List_Vector3___Clear_d2c0b4
                (lVar8,_Method_System_Collections_Generic_List_Vector3__Clear___12dd4f0);
      lVar8 = *(long *)(*(long *)(_UILabel_TypeInfo_12d6468 + 0xb8) + 0x28);
      if (lVar8 == 0) goto LAB_00aec834;
      native_System_Collections_Generic_List_int___Clear_d392fc
                (lVar8,_Method_System_Collections_Generic_List_int__Clear___12dca98);
    }
    if (((*(byte *)(_NGUIText_TypeInfo_12d53c0 + 0x133) >> 2 & 1) != 0) &&
       (*(int *)(_NGUIText_TypeInfo_12d53c0 + 0xe0) == 0)) {
      native_sub_4327ec();
    }
    puVar7 = *(undefined8 **)(_NGUIText_TypeInfo_12d53c0 + 0xb8);
    *puVar7 = 0;
    native_sub_4326e0(puVar7,0);
    puVar7 = (undefined8 *)(*(long *)(_NGUIText_TypeInfo_12d53c0 + 0xb8) + 8);
    *puVar7 = 0;
    native_sub_4326e0(puVar7,0);
    iVar4 = 0;
    switch(param_3) {
    case 0x111:
    case 0x116:
      break;
    case 0x112:
    case 0x117:
      if (lVar6 == 0) {
LAB_00aec834:
                    /* WARNING: Subroutine does not return */
        native_sub_432810();
      }
      iVar4 = *(int *)(lVar6 + 0x10);
      break;
    default:
      goto LAB_00aec7ac;
    }
  }
  return iVar4;
code_r0x00aec540:
  lVar8 = lVar8 + 1;
  lVar10 = lVar10 + 0xc;
  goto LAB_00aec54c;
}



/* UILabel$$PrintOverlay @ 0xaec838
 * void UILabel__PrintOverlay (UILabel_o* __this, int32_t start, int32_t end, UIGeometry_o* caret, UIGeometry_o* highlight, UnityEngine_Color_o caretColor, UnityEngine_Color_o highlightColor, const MethodInfo* method); */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* UILabel$$PrintOverlay
   void UILabel__PrintOverlay (UILabel_o* __this, int32_t start, int32_t end, UIGeometry_o* caret,
   UIGeometry_o* highlight, UnityEngine_Color_o caretColor, UnityEngine_Color_o highlightColor,
   const MethodInfo* method); */

void native_UILabel__PrintOverlay_aec838
               (undefined8 param_1,undefined8 param_2,undefined4 param_3,float param_4,
               undefined8 param_5,undefined8 param_6,undefined8 param_7,float param_8,long param_9,
               int param_10,int param_11,long param_12,long param_13)

{
  int iVar1;
  int iVar2;
  int iVar3;
  ulong uVar4;
  undefined8 uVar5;
  undefined8 *puVar6;
  long lVar7;
  long lVar8;
  float fVar9;
  undefined8 uStack_c0;
  undefined8 uStack_b8;
  undefined8 uStack_b0;
  undefined8 uStack_a8;
  
  if ((bRam000000000134201f & 1) == 0) {
    native_sub_43273c(&Method_System_Collections_Generic_List_Vector2__Add___12dd4b0);
    native_sub_43273c(&Method_System_Collections_Generic_List_Color__Add___12dc690);
    native_sub_43273c(&Method_System_Collections_Generic_List_Vector3__get_Count___12dd500);
    native_sub_43273c(&NGUIText_TypeInfo_12d53c0);
    bRam000000000134201f = 1;
  }
  uStack_b0 = 0;
  uStack_a8 = 0;
  uStack_c0 = 0;
  uStack_b8 = 0;
  if (param_12 != 0) {
    native_UIGeometry__Clear_9ef4e4(param_12,0);
  }
  if (param_13 != 0) {
    native_UIGeometry__Clear_9ef4e4(param_13,0);
  }
  uVar4 = native_UILabel__get_isValid_ae9740(param_9);
  if ((uVar4 & 1) != 0) {
    uVar5 = native_UILabel__get_processedText_ae9630(param_9);
    native_UILabel__UpdateNGUIText_aeae48(param_9);
    if ((param_12 == 0) || (lVar7 = *(long *)(param_12 + 0x10), lVar7 == 0)) goto LAB_00aecb80;
    iVar1 = *(int *)(lVar7 + 0x18);
    fVar9 = *(float *)(param_9 + 0x8c);
    if ((param_10 == param_11) || (param_13 == 0)) {
      if (((*(byte *)(_NGUIText_TypeInfo_12d53c0 + 0x133) >> 2 & 1) != 0) &&
         (*(int *)(_NGUIText_TypeInfo_12d53c0 + 0xe0) == 0)) {
        native_sub_4327ec();
      }
      native_NGUIText__PrintCaretAndSelection_812fec(uVar5,param_10,param_11,lVar7,0,0);
    }
    else {
      if ((param_13 == 0) || (lVar8 = *(long *)(param_13 + 0x10), lVar8 == 0)) goto LAB_00aecb80;
      iVar2 = *(int *)(lVar8 + 0x18);
      if (((*(byte *)(_NGUIText_TypeInfo_12d53c0 + 0x133) >> 2 & 1) != 0) &&
         (*(int *)(_NGUIText_TypeInfo_12d53c0 + 0xe0) == 0)) {
        native_sub_4327ec();
      }
      native_NGUIText__PrintCaretAndSelection_812fec(uVar5,param_10,param_11,lVar7,lVar8,0);
      lVar7 = *(long *)(param_13 + 0x10);
      if (lVar7 == 0) goto LAB_00aecb80;
      if (iVar2 < *(int *)(lVar7 + 0x18)) {
        native_UILabel__ApplyOffset_aebd14(param_9,lVar7,iVar2);
        native_UnityEngine_Color___ctor_8d980c(param_5,param_6,param_7,param_8 * fVar9,&uStack_c0,0)
        ;
        if (*(long *)(param_13 + 0x10) == 0) goto LAB_00aecb80;
        iVar3 = *(int *)(*(long *)(param_13 + 0x10) + 0x18);
        for (; iVar2 < iVar3; iVar2 = iVar2 + 1) {
          if (*(long *)(param_13 + 0x18) == 0) goto LAB_00aecb80;
          native_System_Collections_Generic_List_Vector2___Add_d293ec
                    (0x3f000000,0x3f000000,*(long *)(param_13 + 0x18),
                     _Method_System_Collections_Generic_List_Vector2__Add___12dd4b0);
          if (*(long *)(param_13 + 0x20) == 0) goto LAB_00aecb80;
          native_System_Collections_Generic_List_Color___Add_d07158
                    (uStack_c0 & 0xffffffff,uStack_c0._4_4_,uStack_b8 & 0xffffffff,uStack_b8._4_4_,
                     *(long *)(param_13 + 0x20),
                     _Method_System_Collections_Generic_List_Color__Add___12dc690);
        }
      }
    }
    native_UILabel__ApplyOffset_aebd14(param_9,*(undefined8 *)(param_12 + 0x10),iVar1);
    native_UnityEngine_Color___ctor_8d980c(param_1,param_2,param_3,param_4 * fVar9,&uStack_b0,0);
    if (*(long *)(param_12 + 0x10) == 0) {
LAB_00aecb80:
                    /* WARNING: Subroutine does not return */
      native_sub_432810();
    }
    iVar2 = *(int *)(*(long *)(param_12 + 0x10) + 0x18);
    for (; iVar1 < iVar2; iVar1 = iVar1 + 1) {
      if (*(long *)(param_12 + 0x18) == 0) goto LAB_00aecb80;
      native_System_Collections_Generic_List_Vector2___Add_d293ec
                (0x3f000000,0x3f000000,*(long *)(param_12 + 0x18),
                 _Method_System_Collections_Generic_List_Vector2__Add___12dd4b0);
      if (*(long *)(param_12 + 0x20) == 0) goto LAB_00aecb80;
      native_System_Collections_Generic_List_Color___Add_d07158
                (uStack_b0 & 0xffffffff,uStack_b0._4_4_,uStack_a8 & 0xffffffff,uStack_a8._4_4_,
                 *(long *)(param_12 + 0x20),
                 _Method_System_Collections_Generic_List_Color__Add___12dc690);
    }
    if (((*(byte *)(_NGUIText_TypeInfo_12d53c0 + 0x133) >> 2 & 1) != 0) &&
       (*(int *)(_NGUIText_TypeInfo_12d53c0 + 0xe0) == 0)) {
      native_sub_4327ec();
    }
    puVar6 = *(undefined8 **)(_NGUIText_TypeInfo_12d53c0 + 0xb8);
    *puVar6 = 0;
    native_sub_4326e0(puVar6,0);
    puVar6 = (undefined8 *)(*(long *)(_NGUIText_TypeInfo_12d53c0 + 0xb8) + 8);
    *puVar6 = 0;
    native_sub_4326e0(puVar6,0);
  }
  return;
}



/* UILabel$$get_premultipliedAlphaShader @ 0xaecb84
 * bool UILabel__get_premultipliedAlphaShader (UILabel_o* __this, const MethodInfo* method); */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* UILabel$$get_premultipliedAlphaShader
   bool UILabel__get_premultipliedAlphaShader (UILabel_o* __this, const MethodInfo* method); */

void native_UILabel__get_premultipliedAlphaShader_aecb84(undefined8 param_1)

{
  long *plVar1;
  undefined8 *puVar2;
  long lVar3;
  ulong uVar4;
  int *piVar5;
  
  if ((bRam0000000001342020 & 1) == 0) {
    native_sub_43273c(&INGUIFont_TypeInfo_12d4c70);
    bRam0000000001342020 = 1;
  }
  plVar1 = (long *)native_UILabel__get_font_ae77e8(param_1);
  if (plVar1 == (long *)0x0) {
    return;
  }
  lVar3 = *plVar1;
  if ((ulong)*(ushort *)(lVar3 + 0x12a) != 0) {
    uVar4 = 0;
    piVar5 = (int *)(*(long *)(lVar3 + 0xb0) + 8);
    do {
      if (*(long *)(piVar5 + -2) == _INGUIFont_TypeInfo_12d4c70) {
        puVar2 = (undefined8 *)(lVar3 + (long)(*piVar5 + 0x11) * 0x10 + 0x138);
        goto LAB_00aecc30;
      }
      uVar4 = uVar4 + 1;
      piVar5 = piVar5 + 4;
    } while (uVar4 < *(ushort *)(lVar3 + 0x12a));
  }
  puVar2 = (undefined8 *)native_sub_3c9b34(plVar1,_INGUIFont_TypeInfo_12d4c70,0x11);
LAB_00aecc30:
                    /* WARNING: Could not recover jumptable at 0x00aecc40. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)*puVar2)(plVar1,puVar2[1]);
  return;
}



/* UILabel$$get_packedFontShader @ 0xaecc44
 * bool UILabel__get_packedFontShader (UILabel_o* __this, const MethodInfo* method); */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* UILabel$$get_packedFontShader
   bool UILabel__get_packedFontShader (UILabel_o* __this, const MethodInfo* method); */

void native_UILabel__get_packedFontShader_aecc44(undefined8 param_1)

{
  long *plVar1;
  undefined8 *puVar2;
  long lVar3;
  ulong uVar4;
  int *piVar5;
  
  if ((bRam0000000001342021 & 1) == 0) {
    native_sub_43273c(&INGUIFont_TypeInfo_12d4c70);
    bRam0000000001342021 = 1;
  }
  plVar1 = (long *)native_UILabel__get_font_ae77e8(param_1);
  if (plVar1 == (long *)0x0) {
    return;
  }
  lVar3 = *plVar1;
  if ((ulong)*(ushort *)(lVar3 + 0x12a) != 0) {
    uVar4 = 0;
    piVar5 = (int *)(*(long *)(lVar3 + 0xb0) + 8);
    do {
      if (*(long *)(piVar5 + -2) == _INGUIFont_TypeInfo_12d4c70) {
        puVar2 = (undefined8 *)(lVar3 + (long)(*piVar5 + 0x12) * 0x10 + 0x138);
        goto LAB_00aeccf0;
      }
      uVar4 = uVar4 + 1;
      piVar5 = piVar5 + 4;
    } while (uVar4 < *(ushort *)(lVar3 + 0x12a));
  }
  puVar2 = (undefined8 *)native_sub_3c9b34(plVar1,_INGUIFont_TypeInfo_12d4c70,0x12);
LAB_00aeccf0:
                    /* WARNING: Could not recover jumptable at 0x00aecd00. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)*puVar2)(plVar1,puVar2[1]);
  return;
}



/* UILabel$$get_separateSymbols @ 0xae99d4
 * bool UILabel__get_separateSymbols (UILabel_o* __this, const MethodInfo* method); */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* UILabel$$get_separateSymbols
   bool UILabel__get_separateSymbols (UILabel_o* __this, const MethodInfo* method); */

bool native_UILabel__get_separateSymbols_ae99d4(undefined8 param_1)

{
  bool bVar1;
  long *plVar2;
  ulong uVar3;
  long lVar4;
  long lVar5;
  
  if ((bRam0000000001342022 & 1) == 0) {
    native_sub_43273c(&NGUIFont_TypeInfo_12d53b0);
    native_sub_43273c(&UnityEngine_Object_TypeInfo_12d54e0);
    bRam0000000001342022 = 1;
  }
  plVar2 = (long *)native_UILabel__get_font_ae77e8(param_1);
  if (plVar2 != (long *)0x0) {
    if (*(byte *)(_NGUIFont_TypeInfo_12d53b0 + 300) <= *(byte *)(*plVar2 + 300)) {
      if (*(long *)(*(long *)(*plVar2 + 200) +
                    (ulong)*(byte *)(_NGUIFont_TypeInfo_12d53b0 + 300) * 8 + -8) !=
          _NGUIFont_TypeInfo_12d53b0) {
        plVar2 = (long *)0x0;
      }
      goto LAB_00ae9a58;
    }
  }
  plVar2 = (long *)0x0;
LAB_00ae9a58:
  if (((*(byte *)(_UnityEngine_Object_TypeInfo_12d54e0 + 0x133) >> 2 & 1) != 0) &&
     (*(int *)(_UnityEngine_Object_TypeInfo_12d54e0 + 0xe0) == 0)) {
    native_sub_4327ec();
  }
  uVar3 = native_UnityEngine_Object__op_Inequality_8d76fc(plVar2,0,0);
  if ((uVar3 & 1) == 0) {
    bVar1 = false;
  }
  else {
    if (plVar2 == (long *)0x0) {
                    /* WARNING: Subroutine does not return */
      native_sub_432810();
    }
    lVar4 = native_NGUIFont__get_symbolAtlas_8007c8(plVar2,0);
    bVar1 = false;
    if (lVar4 != 0) {
      lVar4 = native_NGUIFont__get_symbolAtlas_8007c8(plVar2,0);
      lVar5 = native_NGUIFont__get_atlas_7fe8f0(plVar2,0);
      bVar1 = lVar4 != lVar5;
    }
  }
  return bVar1;
}



/* UILabel$$OnFill @ 0xaecd04
 * void UILabel__OnFill (UILabel_o* __this, System_Collections_Generic_List_Vector3__o* verts, System_Collections_Generic_List_Vector2__o* uvs, System_Collections_Generic_List_Color__o* cols, const MethodInfo* method); */

/* WARNING: Removing unreachable block (ram,0x00aed588) */
/* WARNING: Removing unreachable block (ram,0x00aed3b0) */
/* WARNING: Removing unreachable block (ram,0x00aed2b0) */
/* WARNING: Removing unreachable block (ram,0x00aed2bc) */
/* WARNING: Removing unreachable block (ram,0x00aed2f8) */
/* WARNING: Removing unreachable block (ram,0x00aed300) */
/* WARNING: Removing unreachable block (ram,0x00aed308) */
/* WARNING: Removing unreachable block (ram,0x00aed2e8) */
/* WARNING: Removing unreachable block (ram,0x00aed1a8) */
/* WARNING: Removing unreachable block (ram,0x00aed140) */
/* WARNING: Removing unreachable block (ram,0x00aed0c0) */
/* WARNING: Removing unreachable block (ram,0x00aed190) */
/* WARNING: Removing unreachable block (ram,0x00aed1c0) */
/* WARNING: Removing unreachable block (ram,0x00aed1e8) */
/* WARNING: Removing unreachable block (ram,0x00aed1f0) */
/* WARNING: Removing unreachable block (ram,0x00aed1f4) */
/* WARNING: Removing unreachable block (ram,0x00aed358) */
/* WARNING: Removing unreachable block (ram,0x00aed3ec) */
/* WARNING: Removing unreachable block (ram,0x00aed830) */
/* WARNING: Removing unreachable block (ram,0x00aed83c) */
/* WARNING: Removing unreachable block (ram,0x00aed864) */
/* WARNING: Removing unreachable block (ram,0x00aed86c) */
/* WARNING: Removing unreachable block (ram,0x00aed874) */
/* WARNING: Removing unreachable block (ram,0x00aed87c) */
/* WARNING: Removing unreachable block (ram,0x00aed880) */
/* WARNING: Removing unreachable block (ram,0x00aed884) */
/* WARNING: Removing unreachable block (ram,0x00aed89c) */
/* WARNING: Removing unreachable block (ram,0x00aed858) */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* UILabel$$OnFill
   void UILabel__OnFill (UILabel_o* __this, System_Collections_Generic_List_Vector3__o* verts,
   System_Collections_Generic_List_Vector2__o* uvs, System_Collections_Generic_List_Color__o* cols,
   const MethodInfo* method); */

void native_UILabel__OnFill_aecd04(long *param_1,long param_2,long param_3,long param_4)

{
  long *plVar1;
  undefined4 uVar2;
  ushort uVar3;
  bool bVar4;
  int iVar5;
  long lVar6;
  ulong uVar7;
  undefined8 uVar8;
  undefined8 *puVar9;
  long lVar10;
  long lVar11;
  int *piVar12;
  undefined1 *puVar13;
  long lVar14;
  ulong uVar15;
  ulong uVar16;
  code *pcVar17;
  long lVar18;
  undefined4 uVar19;
  undefined4 uVar20;
  float fVar21;
  undefined4 uVar22;
  float fVar23;
  undefined4 uVar24;
  float fVar25;
  float fVar26;
  undefined4 uStack_8c;
  
  if ((bRam0000000001342023 & 1) == 0) {
    native_sub_43273c(&Method_System_Collections_Generic_List_Vector2__AddRange___12dd4b8);
    native_sub_43273c(&Method_System_Collections_Generic_List_Color__AddRange___12dc698);
    native_sub_43273c(&Method_System_Collections_Generic_List_Vector3__AddRange___12dd4e8);
    native_sub_43273c(&Method_System_Collections_Generic_List_Vector3__get_Count___12dd500);
    native_sub_43273c(&UnityEngine_Object_TypeInfo_12d54e0);
    bRam0000000001342023 = 1;
  }
  uVar7 = native_UILabel__get_separateSymbols_ae99d4(param_1);
  if ((uVar7 & 1) != 0) {
    lVar14 = param_1[0x49];
    if (((*(byte *)(_UnityEngine_Object_TypeInfo_12d54e0 + 0x133) >> 2 & 1) != 0) &&
       (*(int *)(_UnityEngine_Object_TypeInfo_12d54e0 + 0xe0) == 0)) {
      native_sub_4327ec();
    }
    uVar7 = native_UnityEngine_Object__op_Inequality_8d76fc(lVar14,0,0);
    if ((uVar7 & 1) != 0) {
      iVar5 = native_UnityEngine_Time__get_frameCount_770964(0);
      lVar14 = param_1[0x49];
      if (lVar14 != 0) {
        if (iVar5 == *(int *)(lVar14 + 0x198)) {
          lVar14 = *(long *)(lVar14 + 0x1a0);
          if (lVar14 != 0) {
            if (*(int *)(lVar14 + 0x18) == 0) {
              return;
            }
            if (param_2 != 0) {
              native_System_Collections_Generic_List_Vector3___AddRange_d2c084
                        (param_2,lVar14,
                         _Method_System_Collections_Generic_List_Vector3__AddRange___12dd4e8);
              if ((param_1[0x49] != 0) && (param_3 != 0)) {
                native_System_Collections_Generic_List_Vector2___AddRange_d29650
                          (param_3,*(undefined8 *)(param_1[0x49] + 0x1a8),
                           _Method_System_Collections_Generic_List_Vector2__AddRange___12dd4b8);
                if ((param_1[0x49] != 0) && (param_4 != 0)) {
                  native_System_Collections_Generic_List_Color___AddRange_d073d4
                            (param_4,*(undefined8 *)(param_1[0x49] + 0x1b0),
                             _Method_System_Collections_Generic_List_Color__AddRange___12dc698);
                  lVar14 = param_1[0x49];
                  if (lVar14 != 0) {
                    if ((bRam0000000001342031 & 1) == 0) {
                      native_sub_43273c(&
                                        Method_System_Collections_Generic_List_Color__Clear___12dc6a0
                                       );
                      native_sub_43273c(&
                                        Method_System_Collections_Generic_List_Vector2__Clear___12dd4c0
                                       );
                      native_sub_43273c(&
                                        Method_System_Collections_Generic_List_Vector3__Clear___12dd4f0
                                       );
                      bRam0000000001342031 = 1;
                    }
                    if (*(long *)(lVar14 + 0x1a0) != 0) {
                      native_System_Collections_Generic_List_Vector3___Clear_d2c0b4
                                (*(long *)(lVar14 + 0x1a0),
                                 _Method_System_Collections_Generic_List_Vector3__Clear___12dd4f0);
                      if (*(long *)(lVar14 + 0x1a8) != 0) {
                        native_System_Collections_Generic_List_Vector2___Clear_d29680
                                  (*(long *)(lVar14 + 0x1a8),
                                   _Method_System_Collections_Generic_List_Vector2__Clear___12dd4c0)
                        ;
                        if (*(long *)(lVar14 + 0x1b0) != 0) {
                          native_System_Collections_Generic_List_Color___Clear_d07404
                                    (*(long *)(lVar14 + 0x1b0),
                                     _Method_System_Collections_Generic_List_Color__Clear___12dc6a0)
                          ;
                          if (*(long *)(lVar14 + 0x1b8) != 0) {
                            native_System_Collections_Generic_List_Vector3___Clear_d2c0b4
                                      (*(long *)(lVar14 + 0x1b8),
                                       _Method_System_Collections_Generic_List_Vector3__Clear___12dd4f0
                                      );
                            if (*(long *)(lVar14 + 0x1c0) != 0) {
                              native_System_Collections_Generic_List_Vector2___Clear_d29680
                                        (*(long *)(lVar14 + 0x1c0),
                                         _Method_System_Collections_Generic_List_Vector2__Clear___12dd4c0
                                        );
                              if (*(long *)(lVar14 + 0x1c8) != 0) {
                                native_System_Collections_Generic_List_Color___Clear_d07404
                                          (*(long *)(lVar14 + 0x1c8),
                                           _Method_System_Collections_Generic_List_Color__Clear___12dc6a0
                                          );
                                *(undefined4 *)(lVar14 + 0x198) = 0xffffffff;
                                return;
                              }
                            }
                          }
                        }
                      }
                    }
                    /* WARNING: Subroutine does not return */
                    native_sub_432810();
                  }
                }
              }
            }
          }
        }
        else {
          native_UILabelSymbols__ClearCache_aecee8(lVar14);
          lVar14 = param_1[0x49];
          if (lVar14 != 0) {
            native_UILabel__Fill_aecfc8
                      (param_1,param_2,param_3,param_4,*(undefined8 *)(lVar14 + 0x1b8),
                       *(undefined8 *)(lVar14 + 0x1c0),*(undefined8 *)(lVar14 + 0x1c8));
            if (param_1[0x49] != 0) {
              *(int *)(param_1[0x49] + 0x198) = iVar5;
              return;
            }
          }
        }
      }
                    /* WARNING: Subroutine does not return */
      native_sub_432810();
    }
  }
  if ((bRam0000000001342024 & 1) == 0) {
    native_sub_43273c(&Method_System_Collections_Generic_List_Color__Clear___12dc6a0);
    native_sub_43273c(&Method_System_Collections_Generic_List_Vector2__Clear___12dd4c0);
    native_sub_43273c(&Method_System_Collections_Generic_List_Vector3__Clear___12dd4f0);
    native_sub_43273c(&Method_System_Collections_Generic_List_Vector3__get_Count___12dd500);
    native_sub_43273c(&Method_System_Collections_Generic_List_Color__get_Count___12dc6a8);
    native_sub_43273c(&Method_System_Collections_Generic_List_Color__get_Item___12dc6b0);
    native_sub_43273c(&Method_System_Collections_Generic_List_Vector3__get_Item___12dd508);
    native_sub_43273c(&Method_System_Collections_Generic_List_Vector3__set_Item___12dd510);
    native_sub_43273c(&Method_System_Collections_Generic_List_Color__set_Item___12dc6b8);
    native_sub_43273c(&NGUIText_TypeInfo_12d53c0);
    native_sub_43273c(&NGUITools_TypeInfo_12d53c8);
    bRam0000000001342024 = 1;
  }
  uVar7 = native_UILabel__get_isValid_ae9740(param_1);
  if ((uVar7 & 1) == 0) {
    return;
  }
  if (param_2 != 0) {
    uStack_8c = *(undefined4 *)(param_2 + 0x18);
    uVar20 = *(undefined4 *)((long)param_1 + 0x8c);
    uVar19 = (undefined4)param_1[0x12];
    uVar24 = *(undefined4 *)((long)param_1 + 0x94);
    uVar22 = (undefined4)param_1[0x13];
    uVar7 = native_UILabel__get_premultipliedAlphaShader_aecb84(param_1);
    if ((uVar7 & 1) != 0) {
      if (((*(byte *)(_NGUITools_TypeInfo_12d53c8 + 0x133) >> 2 & 1) != 0) &&
         (*(int *)(_NGUITools_TypeInfo_12d53c8 + 0xe0) == 0)) {
        native_sub_4327ec();
      }
      uVar19 = native_NGUITools__ApplyPMA_732e54(uVar19,0);
    }
    uVar8 = native_UILabel__get_processedText_ae9630(param_1);
    uVar2 = *(undefined4 *)(param_2 + 0x18);
    native_UILabel__UpdateNGUIText_aeae48(param_1);
    if (((*(byte *)(_NGUIText_TypeInfo_12d53c0 + 0x133) >> 2 & 1) != 0) &&
       (*(int *)(_NGUIText_TypeInfo_12d53c0 + 0xe0) == 0)) {
      native_sub_4327ec();
    }
    lVar14 = _NGUIText_TypeInfo_12d53c0;
    lVar11 = *(long *)(_NGUIText_TypeInfo_12d53c0 + 0xb8);
    *(undefined4 *)(lVar11 + 0x30) = uVar19;
    *(undefined4 *)(lVar11 + 0x34) = uVar24;
    *(undefined4 *)(lVar11 + 0x38) = uVar22;
    *(undefined4 *)(lVar11 + 0x3c) = uVar20;
    if (((*(byte *)(lVar14 + 0x133) >> 2 & 1) != 0) && (*(int *)(lVar14 + 0xe0) == 0)) {
      native_sub_4327ec();
    }
    native_NGUIText__Print_80f81c(uVar8,param_2,param_3,param_4,0,0,0,0);
    if (((*(byte *)(_NGUIText_TypeInfo_12d53c0 + 0x133) >> 2 & 1) != 0) &&
       (*(int *)(_NGUIText_TypeInfo_12d53c0 + 0xe0) == 0)) {
      native_sub_4327ec();
    }
    puVar9 = *(undefined8 **)(_NGUIText_TypeInfo_12d53c0 + 0xb8);
    *puVar9 = 0;
    native_sub_4326e0(puVar9,0);
    puVar9 = (undefined8 *)(*(long *)(_NGUIText_TypeInfo_12d53c0 + 0xb8) + 8);
    *puVar9 = 0;
    native_sub_4326e0(puVar9,0);
    native_UILabel__ApplyOffset_aebd14(param_1,param_2,uVar2);
    uVar7 = native_UILabel__get_packedFontShader_aecc44(param_1);
    if ((uVar7 & 1) != 0) {
      return;
    }
    if (*(int *)((long)param_1 + 0x1c4) != 0) {
      uVar19 = *(undefined4 *)(param_2 + 0x18);
      fVar23 = *(float *)(param_1 + 0x3c);
      fVar25 = *(float *)((long)param_1 + 0x1dc);
      fVar21 = -fVar23;
      native_UILabel__ApplyShadow_aed918
                (fVar25,fVar21,param_1,param_2,param_3,param_4,uStack_8c,uVar19);
      if ((*(uint *)((long)param_1 + 0x1c4) & 0xfffffffe) == 2) {
        uVar24 = *(undefined4 *)(param_2 + 0x18);
        fVar26 = -fVar25;
        native_UILabel__ApplyShadow_aed918
                  (fVar26,fVar23,param_1,param_2,param_3,param_4,uVar19,uVar24);
        uStack_8c = *(undefined4 *)(param_2 + 0x18);
        native_UILabel__ApplyShadow_aed918
                  (fVar25,fVar23,param_1,param_2,param_3,param_4,uVar24,uStack_8c);
        uVar19 = *(undefined4 *)(param_2 + 0x18);
        native_UILabel__ApplyShadow_aed918
                  (fVar26,fVar21,param_1,param_2,param_3,param_4,uStack_8c,uVar19);
        if (*(int *)((long)param_1 + 0x1c4) == 3) {
          uVar24 = *(undefined4 *)(param_2 + 0x18);
          native_UILabel__ApplyShadow_aed918(fVar26,0,param_1,param_2,param_3,param_4,uVar19,uVar24)
          ;
          uVar19 = *(undefined4 *)(param_2 + 0x18);
          native_UILabel__ApplyShadow_aed918(fVar25,0,param_1,param_2,param_3,param_4,uVar24,uVar19)
          ;
          uStack_8c = *(undefined4 *)(param_2 + 0x18);
          native_UILabel__ApplyShadow_aed918
                    (0,fVar23,param_1,param_2,param_3,param_4,uVar19,uStack_8c);
          native_UILabel__ApplyShadow_aed918
                    (0,fVar21,param_1,param_2,param_3,param_4,uStack_8c,
                     *(undefined4 *)(param_2 + 0x18));
        }
      }
    }
    if (((*(byte *)(_NGUIText_TypeInfo_12d53c0 + 0x133) >> 2 & 1) != 0) &&
       (*(int *)(_NGUIText_TypeInfo_12d53c0 + 0xe0) == 0)) {
      native_sub_4327ec();
    }
    if (*(int *)(*(long *)(_NGUIText_TypeInfo_12d53c0 + 0xb8) + 0x88) == 3) {
      if (param_4 == 0) goto LAB_00aed914;
      uVar7 = (ulong)*(uint *)(param_4 + 0x18);
      if (0 < (int)*(uint *)(param_4 + 0x18)) {
        uVar15 = 0;
        uVar16 = uVar7 - 1;
        lVar14 = 0x20;
        while( true ) {
          if (uVar7 <= uVar15) {
            native_System_ThrowHelper__ThrowArgumentOutOfRangeException_9fe0f4(0);
          }
          if (*(float *)(*(long *)(param_4 + 0x10) + lVar14) == -1.0) {
            native_UnityEngine_Color__get_white_8d9e10(0);
            native_System_Collections_Generic_List_Color___set_Item_d06de4
                      (param_4,uVar15 & 0xffffffff,
                       _Method_System_Collections_Generic_List_Color__set_Item___12dc6b8);
          }
          if (uVar16 == uVar15) break;
          uVar7 = (ulong)*(uint *)(param_4 + 0x18);
          uVar15 = uVar15 + 1;
          lVar14 = lVar14 + 0x10;
        }
      }
    }
    lVar14 = param_1[0x19];
    if (lVar14 == 0) {
      return;
    }
    lVar11 = *(long *)(lVar14 + 0x68);
    if (lVar11 == 0) {
      puVar13 = &stack0xffffffffffffff98;
      lVar18 = 1;
    }
    else {
      lVar18 = *(long *)(lVar11 + 0x18);
      if (lVar18 == 0) {
        return;
      }
      puVar13 = (undefined1 *)(lVar11 + 0x20);
    }
    lVar11 = 0;
    do {
      lVar10 = *(long *)(puVar13 + lVar11 * 8);
      plVar1 = *(long **)(lVar10 + 0x20);
      lVar6 = *(long *)(lVar10 + 0x28);
      pcVar17 = *(code **)(lVar10 + 0x10);
      if (*(short *)(lVar6 + 0x48) == -1) {
        native_sub_4327f4(lVar6);
      }
      uVar7 = native_sub_432768(lVar6);
      bVar4 = *(char *)(lVar6 + 0x4a) != '\x05';
      if ((uVar7 & 1) == 0) {
        if (bVar4) {
          if ((*(short *)(lVar6 + 0x48) == -1) || (*(long *)(lVar14 + 0x18) == 0))
          goto LAB_0055c0c4;
          uVar7 = native_sub_432760(lVar6);
          uVar15 = native_sub_432b64(lVar6);
          if ((uVar7 & 1) == 0) {
            uVar3 = *(ushort *)(lVar6 + 0x48);
            if ((uVar15 & 1) == 0) {
              lVar6 = *param_1 + (ulong)uVar3 * 0x10;
              (**(code **)(lVar6 + 0x138))
                        (param_1,uStack_8c,param_2,param_3,param_4,*(undefined8 *)(lVar6 + 0x140));
              goto LAB_0055c0e0;
            }
            lVar6 = native_sub_432764(lVar6);
            lVar10 = *param_1;
            if ((ulong)*(ushort *)(lVar10 + 0x12a) != 0) {
              uVar7 = 0;
              piVar12 = (int *)(*(long *)(lVar10 + 0xb0) + 8);
              do {
                if (*(long *)(piVar12 + -2) == lVar6) {
                  puVar9 = (undefined8 *)
                           (lVar10 + (long)(int)(*piVar12 + (uint)uVar3) * 0x10 + 0x138);
                  goto LAB_0055beb0;
                }
                uVar7 = uVar7 + 1;
                piVar12 = piVar12 + 4;
              } while (uVar7 < *(ushort *)(lVar10 + 0x12a));
            }
            puVar9 = (undefined8 *)native_sub_3c9b34(param_1,lVar6,(ulong)uVar3);
LAB_0055beb0:
            pcVar17 = (code *)*puVar9;
            puVar9 = (undefined8 *)puVar9[1];
          }
          else {
            if ((uVar15 & 1) == 0) {
              uVar8 = *(undefined8 *)(*param_1 + (ulong)*(ushort *)(lVar6 + 0x48) * 0x10 + 0x140);
            }
            else {
              lVar10 = *param_1;
              if ((ulong)*(ushort *)(lVar10 + 0x12a) != 0) {
                uVar7 = 0;
                piVar12 = (int *)(*(long *)(lVar10 + 0xb0) + 8);
                do {
                  if (*(long *)(piVar12 + -2) == *(long *)(lVar6 + 0x18)) {
                    lVar10 = lVar10 + (long)(int)(*piVar12 + (uint)*(ushort *)(lVar6 + 0x48)) * 0x10
                             + 0x138;
                    goto LAB_0055be88;
                  }
                  uVar7 = uVar7 + 1;
                  piVar12 = piVar12 + 4;
                } while (uVar7 < *(ushort *)(lVar10 + 0x12a));
              }
              lVar10 = native_sub_3c9b34(param_1);
LAB_0055be88:
              uVar8 = *(undefined8 *)(lVar10 + 8);
            }
            puVar9 = (undefined8 *)native_sub_4327e8(uVar8,lVar6);
            pcVar17 = (code *)*puVar9;
          }
          (*pcVar17)(param_1,uStack_8c,param_2,param_3,param_4,puVar9);
        }
        else {
          if ((((plVar1 == (long *)0x0) || (*(short *)(lVar6 + 0x48) == -1)) ||
              ((*(byte *)(*plVar1 + 0x115) & 1) != 0)) || (*(long *)(lVar14 + 0x18) == 0))
          goto LAB_0055c024;
          uVar7 = native_sub_432760(lVar6);
          uVar15 = native_sub_432b64(lVar6);
          if ((uVar7 & 1) == 0) {
            uVar3 = *(ushort *)(lVar6 + 0x48);
            if ((uVar15 & 1) == 0) {
              lVar6 = *plVar1 + (ulong)uVar3 * 0x10;
              (**(code **)(lVar6 + 0x138))
                        (plVar1,param_1,uStack_8c,param_2,param_3,param_4,
                         *(undefined8 *)(lVar6 + 0x140));
              goto LAB_0055c0e0;
            }
            lVar6 = native_sub_432764(lVar6);
            lVar10 = *plVar1;
            if ((ulong)*(ushort *)(lVar10 + 0x12a) != 0) {
              uVar7 = 0;
              piVar12 = (int *)(*(long *)(lVar10 + 0xb0) + 8);
              do {
                if (*(long *)(piVar12 + -2) == lVar6) {
                  puVar9 = (undefined8 *)
                           (lVar10 + (long)(int)(*piVar12 + (uint)uVar3) * 0x10 + 0x138);
                  goto LAB_0055bf34;
                }
                uVar7 = uVar7 + 1;
                piVar12 = piVar12 + 4;
              } while (uVar7 < *(ushort *)(lVar10 + 0x12a));
            }
            puVar9 = (undefined8 *)native_sub_3c9b34(plVar1,lVar6,(ulong)uVar3);
LAB_0055bf34:
            pcVar17 = (code *)*puVar9;
            puVar9 = (undefined8 *)puVar9[1];
          }
          else {
            if ((uVar15 & 1) == 0) {
              uVar8 = *(undefined8 *)(*plVar1 + (ulong)*(ushort *)(lVar6 + 0x48) * 0x10 + 0x140);
            }
            else {
              lVar10 = *plVar1;
              if ((ulong)*(ushort *)(lVar10 + 0x12a) != 0) {
                uVar7 = 0;
                piVar12 = (int *)(*(long *)(lVar10 + 0xb0) + 8);
                do {
                  if (*(long *)(piVar12 + -2) == *(long *)(lVar6 + 0x18)) {
                    lVar10 = lVar10 + (long)(int)(*piVar12 + (uint)*(ushort *)(lVar6 + 0x48)) * 0x10
                             + 0x138;
                    goto LAB_0055bf0c;
                  }
                  uVar7 = uVar7 + 1;
                  piVar12 = piVar12 + 4;
                } while (uVar7 < *(ushort *)(lVar10 + 0x12a));
              }
              lVar10 = native_sub_3c9b34(plVar1);
LAB_0055bf0c:
              uVar8 = *(undefined8 *)(lVar10 + 8);
            }
            puVar9 = (undefined8 *)native_sub_4327e8(uVar8,lVar6);
            pcVar17 = (code *)*puVar9;
          }
          (*pcVar17)(plVar1,param_1,uStack_8c,param_2,param_3,param_4,puVar9);
        }
      }
      else if (bVar4) {
LAB_0055c024:
        (*pcVar17)(plVar1,param_1,uStack_8c,param_2,param_3,param_4,lVar6);
      }
      else {
LAB_0055c0c4:
        (*pcVar17)(param_1,uStack_8c,param_2,param_3,param_4,lVar6);
      }
LAB_0055c0e0:
      lVar11 = lVar11 + 1;
      if (lVar11 == lVar18) {
        return;
      }
    } while( true );
  }
LAB_00aed914:
                    /* WARNING: Subroutine does not return */
  native_sub_432810();
}



/* UILabel$$Fill @ 0xaecfc8
 * void UILabel__Fill (UILabel_o* __this, System_Collections_Generic_List_Vector3__o* verts, System_Collections_Generic_List_Vector2__o* uvs, System_Collections_Generic_List_Color__o* cols, System_Collections_Generic_List_Vector3__o* symbolVerts, System_Collections_Generic_List_Vector2__o* symbolUVs, System_Collections_Generic_List_Color__o* symbolCols, const MethodInfo* method); */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* UILabel$$Fill
   void UILabel__Fill (UILabel_o* __this, System_Collections_Generic_List_Vector3__o* verts,
   System_Collections_Generic_List_Vector2__o* uvs, System_Collections_Generic_List_Color__o* cols,
   System_Collections_Generic_List_Vector3__o* symbolVerts,
   System_Collections_Generic_List_Vector2__o* symbolUVs, System_Collections_Generic_List_Color__o*
   symbolCols, const MethodInfo* method); */

void native_UILabel__Fill_aecfc8
               (undefined1 param_1 [16],float param_2,long *param_3,long param_4,long param_5,
               long param_6,long param_7,long param_8,long param_9)

{
  long *plVar1;
  undefined4 uVar2;
  uint uVar3;
  undefined4 uVar4;
  ushort uVar5;
  bool bVar6;
  long lVar7;
  ulong uVar8;
  undefined8 uVar9;
  undefined8 *puVar10;
  long lVar11;
  long lVar12;
  int *piVar13;
  undefined1 *puVar14;
  long lVar15;
  ulong uVar16;
  ulong uVar17;
  code *pcVar18;
  int iVar19;
  long lVar20;
  undefined4 uVar21;
  undefined4 uVar22;
  undefined4 uVar23;
  float fVar24;
  float fVar25;
  float fVar26;
  float fVar27;
  undefined4 uStack_90;
  undefined4 uStack_8c;
  
  if ((bRam0000000001342024 & 1) == 0) {
    native_sub_43273c(&Method_System_Collections_Generic_List_Color__Clear___12dc6a0);
    native_sub_43273c(&Method_System_Collections_Generic_List_Vector2__Clear___12dd4c0);
    native_sub_43273c(&Method_System_Collections_Generic_List_Vector3__Clear___12dd4f0);
    native_sub_43273c(&Method_System_Collections_Generic_List_Vector3__get_Count___12dd500);
    native_sub_43273c(&Method_System_Collections_Generic_List_Color__get_Count___12dc6a8);
    native_sub_43273c(&Method_System_Collections_Generic_List_Color__get_Item___12dc6b0);
    native_sub_43273c(&Method_System_Collections_Generic_List_Vector3__get_Item___12dd508);
    native_sub_43273c(&Method_System_Collections_Generic_List_Vector3__set_Item___12dd510);
    native_sub_43273c(&Method_System_Collections_Generic_List_Color__set_Item___12dc6b8);
    native_sub_43273c(&NGUIText_TypeInfo_12d53c0);
    native_sub_43273c(&NGUITools_TypeInfo_12d53c8);
    bRam0000000001342024 = 1;
  }
  uVar8 = native_UILabel__get_isValid_ae9740(param_3);
  if ((uVar8 & 1) == 0) {
    return;
  }
  if (param_4 != 0) {
    uStack_8c = *(undefined4 *)(param_4 + 0x18);
    if (param_7 == 0) {
      uStack_90 = 0;
    }
    else {
      uStack_90 = *(undefined4 *)(param_7 + 0x18);
    }
    uVar22 = *(undefined4 *)((long)param_3 + 0x8c);
    uVar21 = (undefined4)param_3[0x12];
    fVar25 = *(float *)((long)param_3 + 0x94);
    uVar23 = (undefined4)param_3[0x13];
    uVar8 = native_UILabel__get_premultipliedAlphaShader_aecb84(param_3);
    if ((uVar8 & 1) != 0) {
      if (((*(byte *)(_NGUITools_TypeInfo_12d53c8 + 0x133) >> 2 & 1) != 0) &&
         (*(int *)(_NGUITools_TypeInfo_12d53c8 + 0xe0) == 0)) {
        native_sub_4327ec();
      }
      uVar21 = native_NGUITools__ApplyPMA_732e54(uVar21,0);
      param_2 = fVar25;
    }
    uVar9 = native_UILabel__get_processedText_ae9630(param_3);
    uVar2 = *(undefined4 *)(param_4 + 0x18);
    if (param_7 == 0) {
      uVar8 = 0;
    }
    else {
      uVar8 = (ulong)*(uint *)(param_7 + 0x18);
    }
    native_UILabel__UpdateNGUIText_aeae48(param_3);
    if (((*(byte *)(_NGUIText_TypeInfo_12d53c0 + 0x133) >> 2 & 1) != 0) &&
       (*(int *)(_NGUIText_TypeInfo_12d53c0 + 0xe0) == 0)) {
      native_sub_4327ec();
    }
    lVar15 = _NGUIText_TypeInfo_12d53c0;
    lVar12 = *(long *)(_NGUIText_TypeInfo_12d53c0 + 0xb8);
    *(undefined4 *)(lVar12 + 0x30) = uVar21;
    *(float *)(lVar12 + 0x34) = fVar25;
    *(undefined4 *)(lVar12 + 0x38) = uVar23;
    *(undefined4 *)(lVar12 + 0x3c) = uVar22;
    if (param_7 == 0) {
      if (((*(byte *)(lVar15 + 0x133) >> 2 & 1) != 0) && (*(int *)(lVar15 + 0xe0) == 0)) {
        native_sub_4327ec();
      }
      lVar15 = 0;
      lVar12 = 0;
      lVar20 = 0;
    }
    else {
      native_System_Collections_Generic_List_Vector3___Clear_d2c0b4
                (param_7,_Method_System_Collections_Generic_List_Vector3__Clear___12dd4f0);
      if ((param_8 == 0) ||
         (native_System_Collections_Generic_List_Vector2___Clear_d29680
                    (param_8,_Method_System_Collections_Generic_List_Vector2__Clear___12dd4c0),
         param_9 == 0)) goto LAB_00aed914;
      native_System_Collections_Generic_List_Color___Clear_d07404
                (param_9,_Method_System_Collections_Generic_List_Color__Clear___12dc6a0);
      lVar15 = param_7;
      lVar12 = param_8;
      lVar20 = param_9;
      if (((*(byte *)(_NGUIText_TypeInfo_12d53c0 + 0x133) >> 2 & 1) != 0) &&
         (*(int *)(_NGUIText_TypeInfo_12d53c0 + 0xe0) == 0)) {
        native_sub_4327ec();
      }
    }
    native_NGUIText__Print_80f81c(uVar9,param_4,param_5,param_6,lVar15,lVar12,lVar20,0);
    if (((*(byte *)(_NGUIText_TypeInfo_12d53c0 + 0x133) >> 2 & 1) != 0) &&
       (*(int *)(_NGUIText_TypeInfo_12d53c0 + 0xe0) == 0)) {
      native_sub_4327ec();
    }
    puVar10 = *(undefined8 **)(_NGUIText_TypeInfo_12d53c0 + 0xb8);
    *puVar10 = 0;
    native_sub_4326e0(puVar10,0);
    puVar10 = (undefined8 *)(*(long *)(_NGUIText_TypeInfo_12d53c0 + 0xb8) + 8);
    *puVar10 = 0;
    native_sub_4326e0(puVar10,0);
    fVar25 = (float)native_UILabel__ApplyOffset_aebd14(param_3,param_4,uVar2);
    if (param_7 != 0) {
      uVar3 = *(uint *)(param_7 + 0x18);
      iVar19 = (int)uVar8;
      if (iVar19 < (int)uVar3) {
        lVar15 = ((-(uVar8 >> 0x1f) & 0xfffffffe00000000 | uVar8 << 1) + (long)iVar19) * 4;
        lVar12 = ((long)(int)uVar3 + -1) - (long)iVar19;
        while( true ) {
          if (uVar3 <= (uint)uVar8) {
            native_System_ThrowHelper__ThrowArgumentOutOfRangeException_9fe0f4(0);
          }
          lVar20 = *(long *)(param_7 + 0x10) + lVar15;
          native_System_Collections_Generic_List_Vector3___set_Item_d2ba90
                    (fVar25 + *(float *)(lVar20 + 0x20),param_2 + *(float *)(lVar20 + 0x24),
                     *(undefined4 *)(lVar20 + 0x28),param_7,uVar8,
                     _Method_System_Collections_Generic_List_Vector3__set_Item___12dd510);
          if (lVar12 == 0) break;
          uVar3 = *(uint *)(param_7 + 0x18);
          uVar8 = (ulong)((uint)uVar8 + 1);
          lVar15 = lVar15 + 0xc;
          lVar12 = lVar12 + -1;
        }
      }
    }
    uVar8 = native_UILabel__get_packedFontShader_aecc44(param_3);
    if ((uVar8 & 1) != 0) {
      return;
    }
    if (*(int *)((long)param_3 + 0x1c4) != 0) {
      uVar21 = *(undefined4 *)(param_4 + 0x18);
      if (param_7 == 0) {
        uVar23 = 0;
      }
      else {
        uVar23 = *(undefined4 *)(param_7 + 0x18);
      }
      fVar24 = *(float *)(param_3 + 0x3c);
      fVar26 = *(float *)((long)param_3 + 0x1dc);
      fVar25 = -fVar24;
      native_UILabel__ApplyShadow_aed918
                (fVar26,fVar25,param_3,param_4,param_5,param_6,uStack_8c,uVar21);
      if (param_7 != 0) {
        native_UILabel__ApplyShadow_aed918
                  (fVar26,fVar25,param_3,param_7,param_8,param_9,uStack_90,uVar23);
      }
      if ((*(uint *)((long)param_3 + 0x1c4) & 0xfffffffe) == 2) {
        uVar22 = *(undefined4 *)(param_4 + 0x18);
        if (param_7 == 0) {
          native_UILabel__ApplyShadow_aed918
                    (-fVar26,fVar24,param_3,param_4,param_5,param_6,uVar21,uVar22);
          uStack_8c = *(undefined4 *)(param_4 + 0x18);
          native_UILabel__ApplyShadow_aed918
                    (fVar26,fVar24,param_3,param_4,param_5,param_6,uVar22,uStack_8c);
          uVar21 = *(undefined4 *)(param_4 + 0x18);
          native_UILabel__ApplyShadow_aed918
                    (-fVar26,fVar25,param_3,param_4,param_5,param_6,uStack_8c,uVar21);
          uVar23 = 0;
        }
        else {
          uVar2 = *(undefined4 *)(param_7 + 0x18);
          fVar27 = -fVar26;
          native_UILabel__ApplyShadow_aed918
                    (fVar27,fVar24,param_3,param_4,param_5,param_6,uVar21,uVar22);
          native_UILabel__ApplyShadow_aed918
                    (fVar27,fVar24,param_3,param_7,param_8,param_9,uVar23,uVar2);
          uStack_8c = *(undefined4 *)(param_4 + 0x18);
          uVar4 = *(undefined4 *)(param_7 + 0x18);
          native_UILabel__ApplyShadow_aed918
                    (fVar26,fVar24,param_3,param_4,param_5,param_6,uVar22,uStack_8c);
          native_UILabel__ApplyShadow_aed918
                    (fVar26,fVar24,param_3,param_7,param_8,param_9,uVar2,uVar4);
          uVar21 = *(undefined4 *)(param_4 + 0x18);
          uVar23 = *(undefined4 *)(param_7 + 0x18);
          native_UILabel__ApplyShadow_aed918
                    (fVar27,fVar25,param_3,param_4,param_5,param_6,uStack_8c,uVar21);
          native_UILabel__ApplyShadow_aed918
                    (fVar27,fVar25,param_3,param_7,param_8,param_9,uVar4,uVar23);
        }
        fVar27 = -fVar26;
        if (*(int *)((long)param_3 + 0x1c4) == 3) {
          uVar22 = *(undefined4 *)(param_4 + 0x18);
          if (param_7 == 0) {
            native_UILabel__ApplyShadow_aed918
                      (fVar27,0,param_3,param_4,param_5,param_6,uVar21,uVar22);
            uVar23 = *(undefined4 *)(param_4 + 0x18);
            native_UILabel__ApplyShadow_aed918
                      (fVar26,0,param_3,param_4,param_5,param_6,uVar22,uVar23);
            uVar21 = *(undefined4 *)(param_4 + 0x18);
            native_UILabel__ApplyShadow_aed918
                      (0,fVar24,param_3,param_4,param_5,param_6,uVar23,uVar21);
            uVar23 = *(undefined4 *)(param_4 + 0x18);
            param_7 = param_4;
            param_8 = param_5;
            lVar15 = param_6;
            uStack_8c = uVar21;
          }
          else {
            uVar2 = *(undefined4 *)(param_7 + 0x18);
            native_UILabel__ApplyShadow_aed918
                      (fVar27,0,param_3,param_4,param_5,param_6,uVar21,uVar22);
            native_UILabel__ApplyShadow_aed918
                      (fVar27,0,param_3,param_7,param_8,param_9,uVar23,uVar2);
            uVar23 = *(undefined4 *)(param_4 + 0x18);
            uVar4 = *(undefined4 *)(param_7 + 0x18);
            native_UILabel__ApplyShadow_aed918
                      (fVar26,0,param_3,param_4,param_5,param_6,uVar22,uVar23);
            native_UILabel__ApplyShadow_aed918(fVar26,0,param_3,param_7,param_8,param_9,uVar2,uVar4)
            ;
            uStack_8c = *(undefined4 *)(param_4 + 0x18);
            uVar21 = *(undefined4 *)(param_7 + 0x18);
            native_UILabel__ApplyShadow_aed918
                      (0,fVar24,param_3,param_4,param_5,param_6,uVar23,uStack_8c);
            native_UILabel__ApplyShadow_aed918
                      (0,fVar24,param_3,param_7,param_8,param_9,uVar4,uVar21);
            uVar23 = *(undefined4 *)(param_7 + 0x18);
            native_UILabel__ApplyShadow_aed918
                      (0,fVar25,param_3,param_4,param_5,param_6,uStack_8c,
                       *(undefined4 *)(param_4 + 0x18));
            lVar15 = param_9;
          }
          native_UILabel__ApplyShadow_aed918(0,fVar25,param_3,param_7,param_8,lVar15,uVar21,uVar23);
        }
      }
    }
    if (((*(byte *)(_NGUIText_TypeInfo_12d53c0 + 0x133) >> 2 & 1) != 0) &&
       (*(int *)(_NGUIText_TypeInfo_12d53c0 + 0xe0) == 0)) {
      native_sub_4327ec();
    }
    if (*(int *)(*(long *)(_NGUIText_TypeInfo_12d53c0 + 0xb8) + 0x88) == 3) {
      if (param_6 == 0) goto LAB_00aed914;
      uVar8 = (ulong)*(uint *)(param_6 + 0x18);
      if (0 < (int)*(uint *)(param_6 + 0x18)) {
        uVar16 = 0;
        uVar17 = uVar8 - 1;
        lVar15 = 0x20;
        while( true ) {
          if (uVar8 <= uVar16) {
            native_System_ThrowHelper__ThrowArgumentOutOfRangeException_9fe0f4(0);
          }
          if (*(float *)(*(long *)(param_6 + 0x10) + lVar15) == -1.0) {
            native_UnityEngine_Color__get_white_8d9e10(0);
            native_System_Collections_Generic_List_Color___set_Item_d06de4
                      (param_6,uVar16 & 0xffffffff,
                       _Method_System_Collections_Generic_List_Color__set_Item___12dc6b8);
          }
          if (uVar17 == uVar16) break;
          uVar8 = (ulong)*(uint *)(param_6 + 0x18);
          uVar16 = uVar16 + 1;
          lVar15 = lVar15 + 0x10;
        }
      }
      if ((param_9 != 0) &&
         (uVar8 = (ulong)*(uint *)(param_9 + 0x18), 0 < (int)*(uint *)(param_9 + 0x18))) {
        uVar16 = 0;
        uVar17 = uVar8 - 1;
        lVar15 = 0x20;
        while( true ) {
          if (uVar8 <= uVar16) {
            native_System_ThrowHelper__ThrowArgumentOutOfRangeException_9fe0f4(0);
          }
          if (*(float *)(*(long *)(param_9 + 0x10) + lVar15) == -1.0) {
            native_UnityEngine_Color__get_white_8d9e10(0);
            native_System_Collections_Generic_List_Color___set_Item_d06de4
                      (param_9,uVar16 & 0xffffffff,
                       _Method_System_Collections_Generic_List_Color__set_Item___12dc6b8);
          }
          if (uVar17 == uVar16) break;
          uVar8 = (ulong)*(uint *)(param_9 + 0x18);
          uVar16 = uVar16 + 1;
          lVar15 = lVar15 + 0x10;
        }
      }
    }
    lVar15 = param_3[0x19];
    if (lVar15 == 0) {
      return;
    }
    lVar12 = *(long *)(lVar15 + 0x68);
    if (lVar12 == 0) {
      puVar14 = &stack0xffffffffffffff98;
      lVar20 = 1;
    }
    else {
      lVar20 = *(long *)(lVar12 + 0x18);
      if (lVar20 == 0) {
        return;
      }
      puVar14 = (undefined1 *)(lVar12 + 0x20);
    }
    lVar12 = 0;
    do {
      lVar11 = *(long *)(puVar14 + lVar12 * 8);
      plVar1 = *(long **)(lVar11 + 0x20);
      lVar7 = *(long *)(lVar11 + 0x28);
      pcVar18 = *(code **)(lVar11 + 0x10);
      if (*(short *)(lVar7 + 0x48) == -1) {
        native_sub_4327f4(lVar7);
      }
      uVar8 = native_sub_432768(lVar7);
      bVar6 = *(char *)(lVar7 + 0x4a) != '\x05';
      if ((uVar8 & 1) == 0) {
        if (bVar6) {
          if ((*(short *)(lVar7 + 0x48) == -1) || (*(long *)(lVar15 + 0x18) == 0))
          goto LAB_0055c0c4;
          uVar8 = native_sub_432760(lVar7);
          uVar16 = native_sub_432b64(lVar7);
          if ((uVar8 & 1) == 0) {
            uVar5 = *(ushort *)(lVar7 + 0x48);
            if ((uVar16 & 1) == 0) {
              lVar7 = *param_3 + (ulong)uVar5 * 0x10;
              (**(code **)(lVar7 + 0x138))
                        (param_3,uStack_8c,param_4,param_5,param_6,*(undefined8 *)(lVar7 + 0x140));
              goto LAB_0055c0e0;
            }
            lVar7 = native_sub_432764(lVar7);
            lVar11 = *param_3;
            if ((ulong)*(ushort *)(lVar11 + 0x12a) != 0) {
              uVar8 = 0;
              piVar13 = (int *)(*(long *)(lVar11 + 0xb0) + 8);
              do {
                if (*(long *)(piVar13 + -2) == lVar7) {
                  puVar10 = (undefined8 *)
                            (lVar11 + (long)(int)(*piVar13 + (uint)uVar5) * 0x10 + 0x138);
                  goto LAB_0055beb0;
                }
                uVar8 = uVar8 + 1;
                piVar13 = piVar13 + 4;
              } while (uVar8 < *(ushort *)(lVar11 + 0x12a));
            }
            puVar10 = (undefined8 *)native_sub_3c9b34(param_3,lVar7,(ulong)uVar5);
LAB_0055beb0:
            pcVar18 = (code *)*puVar10;
            puVar10 = (undefined8 *)puVar10[1];
          }
          else {
            if ((uVar16 & 1) == 0) {
              uVar9 = *(undefined8 *)(*param_3 + (ulong)*(ushort *)(lVar7 + 0x48) * 0x10 + 0x140);
            }
            else {
              lVar11 = *param_3;
              if ((ulong)*(ushort *)(lVar11 + 0x12a) != 0) {
                uVar8 = 0;
                piVar13 = (int *)(*(long *)(lVar11 + 0xb0) + 8);
                do {
                  if (*(long *)(piVar13 + -2) == *(long *)(lVar7 + 0x18)) {
                    lVar11 = lVar11 + (long)(int)(*piVar13 + (uint)*(ushort *)(lVar7 + 0x48)) * 0x10
                             + 0x138;
                    goto LAB_0055be88;
                  }
                  uVar8 = uVar8 + 1;
                  piVar13 = piVar13 + 4;
                } while (uVar8 < *(ushort *)(lVar11 + 0x12a));
              }
              lVar11 = native_sub_3c9b34(param_3);
LAB_0055be88:
              uVar9 = *(undefined8 *)(lVar11 + 8);
            }
            puVar10 = (undefined8 *)native_sub_4327e8(uVar9,lVar7);
            pcVar18 = (code *)*puVar10;
          }
          (*pcVar18)(param_3,uStack_8c,param_4,param_5,param_6,puVar10);
        }
        else {
          if ((((plVar1 == (long *)0x0) || (*(short *)(lVar7 + 0x48) == -1)) ||
              ((*(byte *)(*plVar1 + 0x115) & 1) != 0)) || (*(long *)(lVar15 + 0x18) == 0))
          goto LAB_0055c024;
          uVar8 = native_sub_432760(lVar7);
          uVar16 = native_sub_432b64(lVar7);
          if ((uVar8 & 1) == 0) {
            uVar5 = *(ushort *)(lVar7 + 0x48);
            if ((uVar16 & 1) == 0) {
              lVar7 = *plVar1 + (ulong)uVar5 * 0x10;
              (**(code **)(lVar7 + 0x138))
                        (plVar1,param_3,uStack_8c,param_4,param_5,param_6,
                         *(undefined8 *)(lVar7 + 0x140));
              goto LAB_0055c0e0;
            }
            lVar7 = native_sub_432764(lVar7);
            lVar11 = *plVar1;
            if ((ulong)*(ushort *)(lVar11 + 0x12a) != 0) {
              uVar8 = 0;
              piVar13 = (int *)(*(long *)(lVar11 + 0xb0) + 8);
              do {
                if (*(long *)(piVar13 + -2) == lVar7) {
                  puVar10 = (undefined8 *)
                            (lVar11 + (long)(int)(*piVar13 + (uint)uVar5) * 0x10 + 0x138);
                  goto LAB_0055bf34;
                }
                uVar8 = uVar8 + 1;
                piVar13 = piVar13 + 4;
              } while (uVar8 < *(ushort *)(lVar11 + 0x12a));
            }
            puVar10 = (undefined8 *)native_sub_3c9b34(plVar1,lVar7,(ulong)uVar5);
LAB_0055bf34:
            pcVar18 = (code *)*puVar10;
            puVar10 = (undefined8 *)puVar10[1];
          }
          else {
            if ((uVar16 & 1) == 0) {
              uVar9 = *(undefined8 *)(*plVar1 + (ulong)*(ushort *)(lVar7 + 0x48) * 0x10 + 0x140);
            }
            else {
              lVar11 = *plVar1;
              if ((ulong)*(ushort *)(lVar11 + 0x12a) != 0) {
                uVar8 = 0;
                piVar13 = (int *)(*(long *)(lVar11 + 0xb0) + 8);
                do {
                  if (*(long *)(piVar13 + -2) == *(long *)(lVar7 + 0x18)) {
                    lVar11 = lVar11 + (long)(int)(*piVar13 + (uint)*(ushort *)(lVar7 + 0x48)) * 0x10
                             + 0x138;
                    goto LAB_0055bf0c;
                  }
                  uVar8 = uVar8 + 1;
                  piVar13 = piVar13 + 4;
                } while (uVar8 < *(ushort *)(lVar11 + 0x12a));
              }
              lVar11 = native_sub_3c9b34(plVar1);
LAB_0055bf0c:
              uVar9 = *(undefined8 *)(lVar11 + 8);
            }
            puVar10 = (undefined8 *)native_sub_4327e8(uVar9,lVar7);
            pcVar18 = (code *)*puVar10;
          }
          (*pcVar18)(plVar1,param_3,uStack_8c,param_4,param_5,param_6,puVar10);
        }
      }
      else if (bVar6) {
LAB_0055c024:
        (*pcVar18)(plVar1,param_3,uStack_8c,param_4,param_5,param_6,lVar7);
      }
      else {
LAB_0055c0c4:
        (*pcVar18)(param_3,uStack_8c,param_4,param_5,param_6,lVar7);
      }
LAB_0055c0e0:
      lVar12 = lVar12 + 1;
      if (lVar12 == lVar20) {
        return;
      }
    } while( true );
  }
LAB_00aed914:
                    /* WARNING: Subroutine does not return */
  native_sub_432810();
}



/* UILabel$$ApplyOffset @ 0xaebd14
 * UnityEngine_Vector2_o UILabel__ApplyOffset (UILabel_o* __this, System_Collections_Generic_List_Vector3__o* verts, int32_t start, const MethodInfo* method); */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* UILabel$$ApplyOffset
   UnityEngine_Vector2_o UILabel__ApplyOffset (UILabel_o* __this,
   System_Collections_Generic_List_Vector3__o* verts, int32_t start, const MethodInfo* method); */

float native_UILabel__ApplyOffset_aebd14
                (undefined1 param_1 [16],undefined8 param_2,long param_3,long param_4,uint param_5)

{
  long lVar1;
  uint uVar2;
  ulong uVar3;
  long lVar4;
  long lVar5;
  float fVar6;
  float fVar7;
  float fVar8;
  undefined8 uVar9;
  double dVar10;
  double dStack_58;
  
  uVar3 = (ulong)param_5;
  if ((bRam0000000001342025 & 1) == 0) {
    native_sub_43273c(&Method_System_Collections_Generic_List_Vector3__get_Count___12dd500);
    native_sub_43273c(&Method_System_Collections_Generic_List_Vector3__get_Item___12dd508);
    native_sub_43273c(&Method_System_Collections_Generic_List_Vector3__set_Item___12dd510);
    bRam0000000001342025 = 1;
  }
  uVar9 = native_UIWidget__get_pivotOffset_944f8c(param_3,0);
  fVar6 = (float)native_UnityEngine_Mathf__Lerp_8e5224(0,(float)-*(int *)(param_3 + 0xa4),uVar9,0);
  fVar7 = (float)native_UnityEngine_Mathf__Lerp_8e5224((float)*(int *)(param_3 + 0xa8),0,param_2,0);
  fVar8 = (float)native_UnityEngine_Mathf__Lerp_8e5224
                           (*(float *)(param_3 + 0x270) - (float)*(int *)(param_3 + 0xa8),0,param_2,
                            0);
  fVar7 = fVar7 + fVar8;
  dVar10 = (double)func_0x002c9600((double)fVar6,&dStack_58);
  if (0.0 <= fVar6) {
    if (dVar10 == 0.5) {
      fVar6 = 1.0;
      goto LAB_00aebe28;
    }
    fVar8 = (float)(int)(fVar6 + 0.5);
  }
  else if (dVar10 == -0.5) {
    fVar6 = -1.0;
LAB_00aebe28:
    fVar8 = (float)dStack_58;
    if (((long)dStack_58 & 1U) != 0) {
      fVar8 = (float)dStack_58 + fVar6;
    }
  }
  else {
    fVar8 = (float)(int)(fVar6 + -0.5);
  }
  dVar10 = (double)func_0x002c9600((double)fVar7,&dStack_58);
  if (0.0 <= fVar7) {
    if (dVar10 != 0.5) {
      fVar7 = (float)(int)(fVar7 + 0.5);
      goto joined_r0x00aebf64;
    }
    fVar6 = 1.0;
  }
  else {
    if (dVar10 != -0.5) {
      fVar7 = (float)(int)(fVar7 + -0.5);
      goto joined_r0x00aebf64;
    }
    fVar6 = -1.0;
  }
  fVar7 = (float)dStack_58;
  if (((long)dStack_58 & 1U) != 0) {
    fVar7 = (float)dStack_58 + fVar6;
  }
joined_r0x00aebf64:
  if (param_4 == 0) {
                    /* WARNING: Subroutine does not return */
    native_sub_432810();
  }
  uVar2 = *(uint *)(param_4 + 0x18);
  if ((int)param_5 < (int)uVar2) {
    lVar4 = ((-(ulong)(param_5 >> 0x1f) & 0xfffffffe00000000 | uVar3 << 1) + (long)(int)param_5) * 4
    ;
    lVar5 = ((long)(int)uVar2 + -1) - (long)(int)param_5;
    while( true ) {
      if (uVar2 <= (uint)uVar3) {
        native_System_ThrowHelper__ThrowArgumentOutOfRangeException_9fe0f4(0);
      }
      lVar1 = *(long *)(param_4 + 0x10) + lVar4;
      native_System_Collections_Generic_List_Vector3___set_Item_d2ba90
                (fVar8 + *(float *)(lVar1 + 0x20),fVar7 + *(float *)(lVar1 + 0x24),
                 *(undefined4 *)(lVar1 + 0x28),param_4,uVar3,
                 _Method_System_Collections_Generic_List_Vector3__set_Item___12dd510);
      if (lVar5 == 0) break;
      uVar2 = *(uint *)(param_4 + 0x18);
      uVar3 = (ulong)((uint)uVar3 + 1);
      lVar4 = lVar4 + 0xc;
      lVar5 = lVar5 + -1;
    }
  }
  return fVar8;
}



/* UILabel$$ApplyShadow @ 0xaed918
 * void UILabel__ApplyShadow (UILabel_o* __this, System_Collections_Generic_List_Vector3__o* verts, System_Collections_Generic_List_Vector2__o* uvs, System_Collections_Generic_List_Color__o* cols, int32_t start, int32_t end, float x, float y, const MethodInfo* method); */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* UILabel$$ApplyShadow
   void UILabel__ApplyShadow (UILabel_o* __this, System_Collections_Generic_List_Vector3__o* verts,
   System_Collections_Generic_List_Vector2__o* uvs, System_Collections_Generic_List_Color__o* cols,
   int32_t start, int32_t end, float x, float y, const MethodInfo* method); */

void native_UILabel__ApplyShadow_aed918
               (float param_1,float param_2,long param_3,long param_4,long param_5,long param_6,
               uint param_7,int param_8)

{
  undefined4 *puVar1;
  long lVar2;
  float *pfVar3;
  ulong uVar4;
  uint uVar5;
  ulong uVar6;
  long lVar7;
  long lVar8;
  float fVar9;
  ulong uVar10;
  ulong uVar11;
  ulong uVar12;
  ulong uVar13;
  ulong uVar14;
  
  if ((bRam0000000001342026 & 1) == 0) {
    native_sub_43273c(&Method_System_Collections_Generic_List_Vector2__Add___12dd4b0);
    native_sub_43273c(&Method_System_Collections_Generic_List_Color__Add___12dc690);
    native_sub_43273c(&Method_System_Collections_Generic_List_Vector3__Add___12dd4e0);
    native_sub_43273c(&Method_System_Collections_Generic_List_Vector2__get_Item___12dd4d0);
    native_sub_43273c(&Method_System_Collections_Generic_List_Color__get_Item___12dc6b0);
    native_sub_43273c(&Method_System_Collections_Generic_List_Vector3__get_Item___12dd508);
    native_sub_43273c(&Method_System_Collections_Generic_List_Vector3__set_Item___12dd510);
    native_sub_43273c(&Method_System_Collections_Generic_List_Color__set_Item___12dc6b8);
    native_sub_43273c(&NGUITools_TypeInfo_12d53c8);
    bRam0000000001342026 = 1;
  }
  uVar10 = (ulong)*(uint *)(param_3 + 0x1c8);
  uVar11 = (ulong)*(uint *)(param_3 + 0x1cc);
  uVar12 = (ulong)*(uint *)(param_3 + 0x1d0);
  uVar13 = (ulong)(uint)(*(float *)(param_3 + 0x1d4) * *(float *)(param_3 + 0x8c));
  uVar4 = native_UILabel__get_premultipliedAlphaShader_aecb84(param_3);
  if ((uVar4 & 1) != 0) {
    if (((*(byte *)(_NGUITools_TypeInfo_12d53c8 + 0x133) >> 2 & 1) != 0) &&
       (*(int *)(_NGUITools_TypeInfo_12d53c8 + 0xe0) == 0)) {
      native_sub_4327ec();
    }
    uVar10 = native_NGUITools__ApplyPMA_732e54(uVar10,uVar11,uVar12,uVar13,0);
  }
  if ((int)param_7 < param_8) {
    if (param_4 == 0) {
LAB_00aedc20:
                    /* WARNING: Subroutine does not return */
      native_sub_432810();
    }
    uVar4 = (ulong)(int)param_7;
    uVar6 = -(ulong)(param_7 >> 0x1f) & 0xfffffff800000000 | (ulong)param_7 << 3;
    lVar7 = (-(ulong)(param_7 >> 0x1f) & 0xfffffff000000000 | (ulong)param_7 << 4) + 0x2c;
    lVar8 = (long)(int)param_7 * 0xc + 0x20;
    do {
      uVar5 = (uint)uVar4;
      if (*(uint *)(param_4 + 0x18) <= uVar5) {
        native_System_ThrowHelper__ThrowArgumentOutOfRangeException_9fe0f4(0);
      }
      puVar1 = (undefined4 *)(*(long *)(param_4 + 0x10) + lVar8);
      native_System_Collections_Generic_List_Vector3___Add_d2be08
                (*puVar1,puVar1[1],puVar1[2],param_4,
                 _Method_System_Collections_Generic_List_Vector3__Add___12dd4e0);
      if (param_5 == 0) goto LAB_00aedc20;
      if (*(uint *)(param_5 + 0x18) <= uVar5) {
        native_System_ThrowHelper__ThrowArgumentOutOfRangeException_9fe0f4(0);
      }
      lVar2 = *(long *)(param_5 + 0x10) + uVar6;
      native_System_Collections_Generic_List_Vector2___Add_d293ec
                (*(undefined4 *)(lVar2 + 0x20),*(undefined4 *)(lVar2 + 0x24),param_5,
                 _Method_System_Collections_Generic_List_Vector2__Add___12dd4b0);
      if (param_6 == 0) goto LAB_00aedc20;
      if (*(uint *)(param_6 + 0x18) <= uVar5) {
        native_System_ThrowHelper__ThrowArgumentOutOfRangeException_9fe0f4(0);
      }
      puVar1 = (undefined4 *)(*(long *)(param_6 + 0x10) + lVar7);
      native_System_Collections_Generic_List_Color___Add_d07158
                (puVar1[-3],puVar1[-2],puVar1[-1],*puVar1,param_6,
                 _Method_System_Collections_Generic_List_Color__Add___12dc690);
      if (*(uint *)(param_4 + 0x18) <= uVar5) {
        native_System_ThrowHelper__ThrowArgumentOutOfRangeException_9fe0f4(0);
      }
      pfVar3 = (float *)(*(long *)(param_4 + 0x10) + lVar8);
      native_System_Collections_Generic_List_Vector3___set_Item_d2ba90
                (*pfVar3 + param_1,pfVar3[1] + param_2,pfVar3[2],param_4,uVar4 & 0xffffffff,
                 _Method_System_Collections_Generic_List_Vector3__set_Item___12dd510);
      if (*(uint *)(param_6 + 0x18) <= uVar5) {
        native_System_ThrowHelper__ThrowArgumentOutOfRangeException_9fe0f4(0);
      }
      fVar9 = *(float *)(*(long *)(param_6 + 0x10) + lVar7);
      uVar14 = uVar13;
      if (fVar9 != 1.0) {
        uVar14 = (ulong)(uint)((float)uVar13 * fVar9);
      }
      native_System_Collections_Generic_List_Color___set_Item_d06de4
                (uVar10,uVar11,uVar12,uVar14,param_6,uVar4 & 0xffffffff,
                 _Method_System_Collections_Generic_List_Color__set_Item___12dc6b8);
      uVar4 = uVar4 + 1;
      lVar8 = lVar8 + 0xc;
      uVar6 = uVar6 + 8;
      lVar7 = lVar7 + 0x10;
    } while ((long)uVar4 < (long)param_8);
  }
  return;
}



/* UILabel$$CalculateOffsetToFit @ 0xaedc24
 * int32_t UILabel__CalculateOffsetToFit (UILabel_o* __this, System_String_o* text, const MethodInfo* method); */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* UILabel$$CalculateOffsetToFit
   int32_t UILabel__CalculateOffsetToFit (UILabel_o* __this, System_String_o* text, const
   MethodInfo* method); */

undefined4 native_UILabel__CalculateOffsetToFit_aedc24(undefined8 param_1,undefined8 param_2)

{
  long lVar1;
  undefined4 uVar2;
  undefined8 *puVar3;
  
  if ((bRam0000000001342027 & 1) == 0) {
    native_sub_43273c(&NGUIText_TypeInfo_12d53c0);
    bRam0000000001342027 = 1;
  }
  native_UILabel__UpdateNGUIText_aeae48(param_1);
  if (((*(byte *)(_NGUIText_TypeInfo_12d53c0 + 0x133) >> 2 & 1) != 0) &&
     (*(int *)(_NGUIText_TypeInfo_12d53c0 + 0xe0) == 0)) {
    native_sub_4327ec();
  }
  lVar1 = _NGUIText_TypeInfo_12d53c0;
  *(undefined1 *)(*(long *)(_NGUIText_TypeInfo_12d53c0 + 0xb8) + 0x78) = 0;
  *(undefined4 *)(*(long *)(lVar1 + 0xb8) + 0x88) = 0;
  uVar2 = native_NGUIText__CalculateOffsetToFit_80d5ac(param_2,1,0);
  puVar3 = *(undefined8 **)(_NGUIText_TypeInfo_12d53c0 + 0xb8);
  *puVar3 = 0;
  native_sub_4326e0(puVar3,0);
  puVar3 = (undefined8 *)(*(long *)(_NGUIText_TypeInfo_12d53c0 + 0xb8) + 8);
  *puVar3 = 0;
  native_sub_4326e0(puVar3,0);
  return uVar2;
}



/* UILabel$$SetCurrentProgress @ 0xaedce8
 * void UILabel__SetCurrentProgress (UILabel_o* __this, const MethodInfo* method); */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* UILabel$$SetCurrentProgress
   void UILabel__SetCurrentProgress (UILabel_o* __this, const MethodInfo* method); */

void native_UILabel__SetCurrentProgress_aedce8(undefined8 param_1)

{
  ulong uVar1;
  undefined8 uVar2;
  undefined4 uStack_24;
  
  if ((bRam0000000001342028 & 1) == 0) {
    native_sub_43273c(&UnityEngine_Object_TypeInfo_12d54e0);
    native_sub_43273c(&UIProgressBar_TypeInfo_12d6498);
    native_sub_43273c(&StringLiteral_F_12eddd8);
    bRam0000000001342028 = 1;
  }
  uStack_24 = 0;
  uVar2 = **(undefined8 **)(_UIProgressBar_TypeInfo_12d6498 + 0xb8);
  if (((*(byte *)(_UnityEngine_Object_TypeInfo_12d54e0 + 0x133) >> 2 & 1) != 0) &&
     (*(int *)(_UnityEngine_Object_TypeInfo_12d54e0 + 0xe0) == 0)) {
    native_sub_4327ec();
  }
  uVar1 = native_UnityEngine_Object__op_Inequality_8d76fc(uVar2,0,0);
  if ((uVar1 & 1) != 0) {
    if (**(long **)(_UIProgressBar_TypeInfo_12d6498 + 0xb8) == 0) {
                    /* WARNING: Subroutine does not return */
      native_sub_432810();
    }
    uStack_24 = native_UIProgressBar__get_value_c2b6f0
                          (**(long **)(_UIProgressBar_TypeInfo_12d6498 + 0xb8),0);
    uVar2 = native_System_Single__ToString_af8994(&uStack_24,_StringLiteral_F_12eddd8,0);
    native_UILabel__set_text_ae81a8(param_1,uVar2);
  }
  return;
}



/* UILabel$$SetCurrentPercent @ 0xaeddd4
 * void UILabel__SetCurrentPercent (UILabel_o* __this, const MethodInfo* method); */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* UILabel$$SetCurrentPercent
   void UILabel__SetCurrentPercent (UILabel_o* __this, const MethodInfo* method); */

void native_UILabel__SetCurrentPercent_aeddd4(undefined8 param_1)

{
  ulong uVar1;
  undefined8 uVar2;
  float fVar3;
  undefined4 uStack_24;
  
  if ((bRam0000000001342029 & 1) == 0) {
    native_sub_43273c(&UnityEngine_Object_TypeInfo_12d54e0);
    native_sub_43273c(&UIProgressBar_TypeInfo_12d6498);
    native_sub_43273c(&StringLiteral___12eb128);
    bRam0000000001342029 = 1;
  }
  uStack_24 = 0;
  uVar2 = **(undefined8 **)(_UIProgressBar_TypeInfo_12d6498 + 0xb8);
  if (((*(byte *)(_UnityEngine_Object_TypeInfo_12d54e0 + 0x133) >> 2 & 1) != 0) &&
     (*(int *)(_UnityEngine_Object_TypeInfo_12d54e0 + 0xe0) == 0)) {
    native_sub_4327ec();
  }
  uVar1 = native_UnityEngine_Object__op_Inequality_8d76fc(uVar2,0,0);
  if ((uVar1 & 1) != 0) {
    if (**(long **)(_UIProgressBar_TypeInfo_12d6498 + 0xb8) == 0) {
                    /* WARNING: Subroutine does not return */
      native_sub_432810();
    }
    fVar3 = (float)native_UIProgressBar__get_value_c2b6f0
                             (**(long **)(_UIProgressBar_TypeInfo_12d6498 + 0xb8),0);
    uStack_24 = native_UnityEngine_Mathf__RoundToInt_8e50f0(fVar3 * 100.0,0);
    uVar2 = native_System_Int32__ToString_83c60c(&uStack_24,0);
    uVar2 = native_System_String__Concat_afbd68(uVar2,_StringLiteral___12eb128,0);
    native_UILabel__set_text_ae81a8(param_1,uVar2);
  }
  return;
}



/* UILabel$$SetCurrentSelection @ 0xaededc
 * void UILabel__SetCurrentSelection (UILabel_o* __this, const MethodInfo* method); */

/* WARNING: Removing unreachable block (ram,0x00432c1c) */
/* WARNING: Removing unreachable block (ram,0x003cc494) */
/* WARNING: Removing unreachable block (ram,0x003cc4b8) */
/* WARNING: Removing unreachable block (ram,0x003cc4d4) */
/* WARNING: Removing unreachable block (ram,0x003cc4dc) */
/* WARNING: Removing unreachable block (ram,0x003cc4f0) */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* UILabel$$SetCurrentSelection
   void UILabel__SetCurrentSelection (UILabel_o* __this, const MethodInfo* method); */

void native_UILabel__SetCurrentSelection_aededc
               (undefined1 param_1 [16],float param_2,undefined8 param_3,float param_4,long *param_5
               )

{
  int *piVar1;
  int *piVar2;
  undefined8 *puVar3;
  char cVar4;
  bool bVar5;
  int iVar6;
  ulong uVar7;
  ulong uVar8;
  ulong uVar9;
  long *plVar10;
  long lVar11;
  long lVar12;
  int iVar13;
  undefined8 uVar14;
  float fVar15;
  ulong uVar16;
  float fVar18;
  undefined8 uVar17;
  ulong uVar19;
  float fVar20;
  ulong uVar21;
  float fVar22;
  float fVar23;
  undefined8 uVar24;
  
  if ((bRam000000000134202a & 1) == 0) {
    native_sub_43273c(&Localization_TypeInfo_12d50b8);
    native_sub_43273c(&UnityEngine_Object_TypeInfo_12d54e0);
    native_sub_43273c(&UIPopupList_TypeInfo_12d6490);
    bRam000000000134202a = 1;
  }
  if (((*(byte *)(_UIPopupList_TypeInfo_12d6490 + 0x133) >> 2 & 1) != 0) &&
     (*(int *)(_UIPopupList_TypeInfo_12d6490 + 0xe0) == 0)) {
    native_sub_4327ec();
  }
  uVar14 = **(undefined8 **)(_UIPopupList_TypeInfo_12d6490 + 0xb8);
  if (((*(byte *)(_UnityEngine_Object_TypeInfo_12d54e0 + 0x133) >> 2 & 1) != 0) &&
     (*(int *)(_UnityEngine_Object_TypeInfo_12d54e0 + 0xe0) == 0)) {
    native_sub_4327ec(_UnityEngine_Object_TypeInfo_12d54e0);
  }
  uVar9 = native_UnityEngine_Object__op_Inequality_8d76fc(uVar14,0,0);
  if ((uVar9 & 1) == 0) {
    return;
  }
  if (((*(byte *)(_UIPopupList_TypeInfo_12d6490 + 0x133) >> 2 & 1) != 0) &&
     (*(int *)(_UIPopupList_TypeInfo_12d6490 + 0xe0) == 0)) {
    native_sub_4327ec(_UIPopupList_TypeInfo_12d6490);
  }
  plVar10 = (long *)**(long **)(_UIPopupList_TypeInfo_12d6490 + 0xb8);
  if (plVar10 != (long *)0x0) {
    if (*(char *)((long)plVar10 + 0xb9) == '\0') {
      if (((*(ushort *)(_UIPopupList_TypeInfo_12d6490 + 0x132) >> 10 & 1) != 0) &&
         (*(int *)(_UIPopupList_TypeInfo_12d6490 + 0xe0) == 0)) {
        native_sub_4327ec(_UIPopupList_TypeInfo_12d6490);
        plVar10 = (long *)**(long **)(_UIPopupList_TypeInfo_12d6490 + 0xb8);
        if (plVar10 == (long *)0x0) goto LAB_00aee08c;
      }
      lVar11 = (**(code **)(*plVar10 + 0x178))(plVar10,*(undefined8 *)(*plVar10 + 0x180));
    }
    else {
      if (((*(ushort *)(_UIPopupList_TypeInfo_12d6490 + 0x132) >> 10 & 1) != 0) &&
         (*(int *)(_UIPopupList_TypeInfo_12d6490 + 0xe0) == 0)) {
        native_sub_4327ec(_UIPopupList_TypeInfo_12d6490);
        plVar10 = (long *)**(long **)(_UIPopupList_TypeInfo_12d6490 + 0xb8);
        if (plVar10 == (long *)0x0) goto LAB_00aee08c;
      }
      uVar14 = (**(code **)(*plVar10 + 0x178))(plVar10,*(undefined8 *)(*plVar10 + 0x180));
      if (((*(byte *)(_Localization_TypeInfo_12d50b8 + 0x133) >> 2 & 1) != 0) &&
         (*(int *)(_Localization_TypeInfo_12d50b8 + 0xe0) == 0)) {
        native_sub_4327ec(_Localization_TypeInfo_12d50b8);
      }
      lVar11 = native_Localization__Get_7fae58(uVar14,1,0);
    }
    if (param_5 != (long *)0x0) {
      if ((bRam0000000001342005 & 1) == 0) {
        native_sub_43273c(&StringLiteral__12eaac0);
        bRam0000000001342005 = 1;
      }
      uVar9 = native_System_String__op_Equality_afc18c(param_5[0x35],lVar11,0);
      if ((uVar9 & 1) == 0) {
        uVar9 = native_System_String__IsNullOrEmpty_b09430(lVar11,0);
        lVar12 = param_5[0x35];
        if ((uVar9 & 1) == 0) {
          uVar9 = native_System_String__op_Inequality_afbbb4(lVar12,lVar11,0);
          if ((uVar9 & 1) == 0) {
            return;
          }
          param_5[0x35] = lVar11;
        }
        else {
          uVar9 = native_System_String__IsNullOrEmpty_b09430(lVar12,0);
          lVar11 = _StringLiteral__12eaac0;
          if ((uVar9 & 1) != 0) {
            return;
          }
          param_5[0x35] = _StringLiteral__12eaac0;
        }
        native_sub_4326e0(param_5 + 0x35,lVar11);
        (**(code **)(*param_5 + 0x378))(param_5,*(undefined8 *)(*param_5 + 0x380));
        native_UILabel__ProcessAndRequest_ae7fdc(param_5);
        if ((char)param_5[0x1b] != '\0') {
          if ((bRam000000000134145d & 1) == 0) {
            native_sub_43273c(&Method_UnityEngine_Component_GetComponent_BoxCollider2D____12e2998,0)
            ;
            native_sub_43273c(&Method_UnityEngine_Component_GetComponent_BoxCollider____12e2990);
            native_sub_43273c(&NGUITools_TypeInfo_12d53c8);
            native_sub_43273c(&UnityEngine_Object_TypeInfo_12d54e0);
            bRam000000000134145d = 1;
          }
          lVar11 = native_UnityEngine_Component__GetComponent_ActiveAnimation__49daec
                             (param_5,
                              _Method_UnityEngine_Component_GetComponent_BoxCollider____12e2990);
          if (((*(byte *)(_UnityEngine_Object_TypeInfo_12d54e0 + 0x133) >> 2 & 1) != 0) &&
             (*(int *)(_UnityEngine_Object_TypeInfo_12d54e0 + 0xe0) == 0)) {
            native_sub_4327ec(_UnityEngine_Object_TypeInfo_12d54e0);
          }
          uVar9 = native_UnityEngine_Object__op_Inequality_8d76fc(lVar11,0,0);
          if ((uVar9 & 1) == 0) {
            lVar11 = native_UnityEngine_Component__GetComponent_ActiveAnimation__49daec
                               (param_5,
                                _Method_UnityEngine_Component_GetComponent_BoxCollider2D____12e2998)
            ;
            fVar15 = (float)param_3;
            if (((*(byte *)(_NGUITools_TypeInfo_12d53c8 + 0x133) >> 2 & 1) != 0) &&
               (*(int *)(_NGUITools_TypeInfo_12d53c8 + 0xe0) == 0)) {
              native_sub_4327ec(_NGUITools_TypeInfo_12d53c8);
            }
            if ((bRam000000000133f58e & 1) == 0) {
              native_sub_43273c(&NGUITools_TypeInfo_12d53c8,lVar11,0);
              native_sub_43273c(&UnityEngine_Object_TypeInfo_12d54e0);
              native_sub_43273c(&StringLiteral_last_change_12f5390);
              bRam000000000133f58e = 1;
            }
            if (((*(byte *)(_UnityEngine_Object_TypeInfo_12d54e0 + 0x133) >> 2 & 1) != 0) &&
               (*(int *)(_UnityEngine_Object_TypeInfo_12d54e0 + 0xe0) == 0)) {
              native_sub_4327ec();
            }
            uVar9 = native_UnityEngine_Object__op_Inequality_8d76fc(lVar11,0,0);
            if ((uVar9 & 1) == 0) {
              return;
            }
            if (((*(byte *)(_UnityEngine_Object_TypeInfo_12d54e0 + 0x133) >> 2 & 1) != 0) &&
               (*(int *)(_UnityEngine_Object_TypeInfo_12d54e0 + 0xe0) == 0)) {
              native_sub_4327ec();
            }
            uVar9 = native_UnityEngine_Object__op_Inequality_8d76fc(param_5,0,0);
            if ((uVar9 & 1) == 0) {
              return;
            }
            if (param_5 == (long *)0x0) {
LAB_0072ea2c:
                    /* WARNING: Subroutine does not return */
              native_sub_432810();
            }
            lVar12 = *param_5;
            if ((((*(float *)((long)param_5 + 0x104) == 0.0) && (*(float *)(param_5 + 0x21) == 0.0))
                && (param_2 = *(float *)((long)param_5 + 0x10c), param_2 == 1.0)) &&
               (param_2 = *(float *)(param_5 + 0x22), param_2 == 1.0)) {
              lVar12 = (**(code **)(lVar12 + 0x1d8))(param_5,*(undefined8 *)(lVar12 + 0x1e0));
              if (lVar12 == 0) goto LAB_0072ea2c;
              if ((*(uint *)(lVar12 + 0x18) == 0) || (*(uint *)(lVar12 + 0x18) < 3)) {
LAB_0072ea30:
                uVar14 = native_sub_43283c();
                    /* WARNING: Subroutine does not return */
                native_sub_4327dc(uVar14,0);
              }
              uVar14 = *(undefined8 *)(lVar12 + 0x20);
              uVar24 = *(undefined8 *)(lVar12 + 0x38);
              fVar15 = (float)native_UnityEngine_Mathf__Clamp01_8d9d9c(0x3f000000,0);
              if (*(uint *)(lVar12 + 0x18) < 3) goto LAB_0072ea30;
              if (lVar11 == 0) goto LAB_0072ea2c;
              uVar17 = *(undefined8 *)(lVar12 + 0x38);
              fVar22 = (float)uVar14;
              fVar18 = (float)((ulong)uVar14 >> 0x20);
              fVar22 = fVar22 + ((float)uVar24 - fVar22) * fVar15;
              fVar18 = fVar18 + ((float)((ulong)uVar24 >> 0x20) - fVar18) * fVar15;
              uVar14 = CONCAT44(fVar18,fVar22);
              fVar20 = (float)uVar17 - (float)*(undefined8 *)(lVar12 + 0x20);
              param_4 = (float)((ulong)uVar17 >> 0x20) -
                        (float)((ulong)*(undefined8 *)(lVar12 + 0x20) >> 0x20);
              uVar9 = CONCAT44(param_4,fVar20);
              fVar15 = (float)native_UnityEngine_Collider2D__get_offset_db8b24(lVar11,0);
              fVar22 = fVar22 - fVar15;
              fVar15 = fVar18 - (float)uVar17;
              if ((fVar22 * fVar22 + fVar15 * fVar15 < 9.9999994e-11) &&
                 (uVar24 = uVar14,
                 fVar15 = (float)native_UnityEngine_BoxCollider2D__get_size_db8988(lVar11,0),
                 fVar20 = fVar20 - fVar15, fVar15 = param_4 - (float)uVar24,
                 fVar20 * fVar20 + fVar15 * fVar15 < 9.9999994e-11)) {
                return;
              }
              native_UnityEngine_Collider2D__set_offset_db8bcc(uVar14,fVar18,lVar11,0);
            }
            else {
              fVar22 = (float)(**(code **)(lVar12 + 0x2f8))(param_5,*(undefined8 *)(lVar12 + 0x300))
              ;
              if (lVar11 == 0) goto LAB_0072ea2c;
              uVar9 = (ulong)(uint)(fVar15 - fVar22);
              fVar23 = (fVar22 + fVar15) * 0.5;
              fVar18 = (param_2 + param_4) * 0.5;
              param_4 = param_4 - param_2;
              fVar20 = (float)native_UnityEngine_Collider2D__get_offset_db8b24(lVar11,0);
              fVar20 = fVar23 - fVar20;
              param_2 = fVar18 - param_2;
              param_2 = param_2 * param_2;
              if ((fVar20 * fVar20 + param_2 < 9.9999994e-11) &&
                 (fVar20 = (float)native_UnityEngine_BoxCollider2D__get_size_db8988(lVar11,0),
                 fVar20 = (fVar15 - fVar22) - fVar20,
                 fVar20 * fVar20 + (param_4 - param_2) * (param_4 - param_2) < 9.9999994e-11)) {
                return;
              }
              native_UnityEngine_Collider2D__set_offset_db8bcc(fVar23,fVar18,lVar11,0);
            }
            native_UnityEngine_BoxCollider2D__set_size_db8a30(uVar9,param_4,lVar11,0);
            if ((*(byte *)(_NGUITools_TypeInfo_12d53c8 + 0x133) >> 2 & 1) == 0) {
              return;
            }
            if (*(int *)(_NGUITools_TypeInfo_12d53c8 + 0xe0) != 0) {
              return;
            }
          }
          else {
            if (((*(byte *)(_NGUITools_TypeInfo_12d53c8 + 0x133) >> 2 & 1) != 0) &&
               (*(int *)(_NGUITools_TypeInfo_12d53c8 + 0xe0) == 0)) {
              native_sub_4327ec();
            }
            if ((bRam000000000133f58d & 1) == 0) {
              native_sub_43273c(&NGUITools_TypeInfo_12d53c8,lVar11,0);
              native_sub_43273c(&UnityEngine_Object_TypeInfo_12d54e0);
              native_sub_43273c(&StringLiteral_last_change_12f5390);
              bRam000000000133f58d = 1;
            }
            if (((*(byte *)(_UnityEngine_Object_TypeInfo_12d54e0 + 0x133) >> 2 & 1) != 0) &&
               (*(int *)(_UnityEngine_Object_TypeInfo_12d54e0 + 0xe0) == 0)) {
              native_sub_4327ec();
            }
            uVar9 = native_UnityEngine_Object__op_Inequality_8d76fc(lVar11,0,0);
            if ((uVar9 & 1) == 0) {
              return;
            }
            if (((*(byte *)(_UnityEngine_Object_TypeInfo_12d54e0 + 0x133) >> 2 & 1) != 0) &&
               (*(int *)(_UnityEngine_Object_TypeInfo_12d54e0 + 0xe0) == 0)) {
              native_sub_4327ec();
            }
            uVar9 = native_UnityEngine_Object__op_Inequality_8d76fc(param_5,0,0);
            if ((uVar9 & 1) == 0) {
              return;
            }
            if (param_5 == (long *)0x0) {
LAB_0072e730:
                    /* WARNING: Subroutine does not return */
              native_sub_432810();
            }
            lVar12 = *param_5;
            if ((((*(float *)((long)param_5 + 0x104) == 0.0) && (*(float *)(param_5 + 0x21) == 0.0))
                && (param_2 = *(float *)((long)param_5 + 0x10c), param_2 == 1.0)) &&
               (param_2 = *(float *)(param_5 + 0x22), param_2 == 1.0)) {
              lVar12 = (**(code **)(lVar12 + 0x1d8))(param_5,*(undefined8 *)(lVar12 + 0x1e0));
              if (lVar12 == 0) goto LAB_0072e730;
              if ((*(uint *)(lVar12 + 0x18) == 0) || (*(uint *)(lVar12 + 0x18) < 3)) {
LAB_0072e734:
                uVar14 = native_sub_43283c();
                    /* WARNING: Subroutine does not return */
                native_sub_4327dc(uVar14,0);
              }
              uVar14 = *(undefined8 *)(lVar12 + 0x20);
              fVar20 = *(float *)(lVar12 + 0x28);
              uVar24 = *(undefined8 *)(lVar12 + 0x38);
              fVar22 = *(float *)(lVar12 + 0x40);
              fVar15 = (float)native_UnityEngine_Mathf__Clamp01_8d9d9c(0x3f000000,0);
              if (*(uint *)(lVar12 + 0x18) < 3) goto LAB_0072e734;
              if (lVar11 == 0) goto LAB_0072e730;
              fVar23 = (float)uVar14;
              fVar18 = (float)((ulong)uVar14 >> 0x20);
              fVar22 = fVar22 - fVar20;
              uVar7 = (ulong)(uint)fVar22;
              fVar18 = fVar18 + ((float)((ulong)uVar24 >> 0x20) - fVar18) * fVar15;
              uVar17 = CONCAT44(fVar18,fVar23 + ((float)uVar24 - fVar23) * fVar15);
              uVar21 = (ulong)(uint)(fVar20 + fVar22 * fVar15);
              fVar22 = (float)((ulong)*(undefined8 *)(lVar12 + 0x38) >> 0x20) -
                       (float)((ulong)*(undefined8 *)(lVar12 + 0x20) >> 0x20);
              uVar16 = CONCAT44(fVar22,(float)*(undefined8 *)(lVar12 + 0x38) -
                                       (float)*(undefined8 *)(lVar12 + 0x20));
              fVar15 = *(float *)(lVar12 + 0x40) - *(float *)(lVar12 + 0x28);
              uVar14 = uVar17;
              uVar24 = native_UnityEngine_BoxCollider__get_center_dba95c(lVar11,0);
              uVar9 = (ulong)(uint)fVar18;
              uVar8 = uVar9;
              uVar19 = uVar21;
              uVar7 = native_UnityEngine_Vector3__op_Inequality_776c48
                                (uVar17,uVar9,uVar21,uVar24,uVar14,uVar7,0);
              if ((uVar7 & 1) == 0) {
                uVar14 = native_UnityEngine_BoxCollider__get_size_dbaab4(lVar11,0);
                uVar8 = native_UnityEngine_Vector3__op_Inequality_776c48
                                  (uVar16,fVar22,fVar15,uVar14,uVar8,uVar19,0);
                if ((uVar8 & 1) == 0) {
                  return;
                }
              }
              native_UnityEngine_BoxCollider__set_center_dbaa0c(uVar17,uVar9,uVar21,lVar11,0);
            }
            else {
              fVar15 = (float)(**(code **)(lVar12 + 0x2f8))(param_5,*(undefined8 *)(lVar12 + 0x300))
              ;
              if (lVar11 == 0) goto LAB_0072e730;
              uVar16 = (ulong)(uint)((float)param_3 - fVar15);
              fVar22 = param_4 - param_2;
              uVar8 = (ulong)(uint)(param_2 + param_4);
              uVar19 = (ulong)(uint)((param_2 + param_4) * 0.5);
              fVar20 = (fVar15 + (float)param_3) * 0.5;
              uVar14 = native_UnityEngine_BoxCollider__get_center_dba95c(lVar11,0);
              uVar24 = 0;
              fVar15 = 0.0;
              uVar9 = uVar19;
              uVar8 = native_UnityEngine_Vector3__op_Inequality_776c48
                                (fVar20,uVar19,0,uVar14,uVar8,param_3,0);
              if ((uVar8 & 1) == 0) {
                uVar14 = native_UnityEngine_BoxCollider__get_size_dbaab4(lVar11,0);
                uVar9 = native_UnityEngine_Vector3__op_Inequality_776c48
                                  (uVar16,fVar22,0,uVar14,uVar9,uVar24,0);
                if ((uVar9 & 1) == 0) {
                  return;
                }
              }
              native_UnityEngine_BoxCollider__set_center_dbaa0c(fVar20,uVar19,0,lVar11,0);
            }
            native_UnityEngine_BoxCollider__set_size_dbab64(uVar16,fVar22,fVar15,lVar11,0);
            if ((*(byte *)(_NGUITools_TypeInfo_12d53c8 + 0x133) >> 2 & 1) == 0) {
              return;
            }
            if (*(int *)(_NGUITools_TypeInfo_12d53c8 + 0xe0) != 0) {
              return;
            }
          }
          lVar11 = _NGUITools_TypeInfo_12d53c8;
          if ((*(byte *)(_NGUITools_TypeInfo_12d53c8 + 0x133) >> 2 & 1) == 0) {
            return;
          }
          piVar1 = (int *)(_NGUITools_TypeInfo_12d53c8 + 0xe0);
          while (*piVar1 == 1) {
            cVar4 = '\x01';
            bVar5 = (bool)ExclusiveMonitorPass(piVar1,0x10);
            if (bVar5) {
              *piVar1 = 1;
              cVar4 = ExclusiveMonitorsStatus();
            }
            if (cVar4 == '\0') {
              DataMemoryBarrier(2,3);
              return;
            }
          }
          ClearExclusiveLocal();
          DataMemoryBarrier(2,3);
          lVar12 = native_sub_432c38();
          if (lVar12 == lRam00000000013451d0) {
            iRam00000000013451d8 = iRam00000000013451d8 + 1;
          }
          else {
            iVar13 = 0;
            do {
              iVar6 = iRam0000000001345190;
              if (iRam0000000001345190 == iVar13) {
                cVar4 = '\x01';
                bVar5 = (bool)ExclusiveMonitorPass(0x1345190,0x10);
                if (bVar5) {
                  cVar4 = ExclusiveMonitorsStatus();
                  iRam0000000001345190 = iVar13 + 1;
                }
                if (cVar4 != '\0') goto code_r0x003cc248;
                bVar5 = true;
              }
              else {
                ClearExclusiveLocal();
code_r0x003cc248:
                bVar5 = false;
              }
            } while ((iVar6 != 2) && (iVar13 = iVar6, !bVar5));
            while (iVar6 != 0) {
              native_sub_432bb4(0x1345190,2,0xffffffff);
              do {
                iVar6 = iRam0000000001345190;
                cVar4 = '\x01';
                bVar5 = (bool)ExclusiveMonitorPass(0x1345190,0x10);
                if (bVar5) {
                  iRam0000000001345190 = 2;
                  cVar4 = ExclusiveMonitorsStatus();
                }
              } while (cVar4 != '\0');
            }
            iRam00000000013451d8 = 1;
            lRam00000000013451d0 = lVar12;
          }
          while (*piVar1 == 1) {
            cVar4 = '\x01';
            bVar5 = (bool)ExclusiveMonitorPass(piVar1,0x10);
            if (bVar5) {
              *piVar1 = 1;
              cVar4 = ExclusiveMonitorsStatus();
            }
            if (cVar4 == '\0') {
              DataMemoryBarrier(2,3);
              if (iRam00000000013451d8 < 1) {
                return;
              }
              if (iRam00000000013451d8 + -1 != 0) {
                iRam00000000013451d8 = iRam00000000013451d8 + -1;
                return;
              }
              lRam00000000013451d0 = 0;
              iRam00000000013451d8 = 0;
              do {
                iVar13 = iRam0000000001345190;
                cVar4 = '\x01';
                bVar5 = (bool)ExclusiveMonitorPass(0x1345190,0x10);
                if (bVar5) {
                  iRam0000000001345190 = 0;
                  cVar4 = ExclusiveMonitorsStatus();
                }
              } while (cVar4 != '\0');
              if (iVar13 != 2) {
                lRam00000000013451d0 = 0;
                iRam00000000013451d8 = 0;
                return;
              }
              (*(code *)&DAT_0155b260)(0x62,0x1345190,0x81,1,0,0,0);
              return;
            }
          }
          ClearExclusiveLocal();
          DataMemoryBarrier(2,3);
          piVar2 = (int *)(lVar11 + 0xdc);
          do {
            if (*piVar2 != 1) {
              ClearExclusiveLocal();
              DataMemoryBarrier(2,3);
              puVar3 = (undefined8 *)(lVar11 + 0xe8);
              uVar14 = native_sub_3aad3c();
              do {
                cVar4 = '\x01';
                bVar5 = (bool)ExclusiveMonitorPass(puVar3,0x10);
                if (bVar5) {
                  *puVar3 = uVar14;
                  cVar4 = ExclusiveMonitorsStatus();
                }
              } while (cVar4 != '\0');
              DataMemoryBarrier(2,3);
              do {
                cVar4 = '\x01';
                bVar5 = (bool)ExclusiveMonitorPass(piVar2,0x10);
                if (bVar5) {
                  *piVar2 = 1;
                  cVar4 = ExclusiveMonitorsStatus();
                }
              } while (cVar4 != '\0');
              DataMemoryBarrier(2,3);
              iVar13 = iRam00000000013451d8 + -1;
              if ((0 < iRam00000000013451d8) && (iRam00000000013451d8 = iVar13, iVar13 == 0)) {
                lRam00000000013451d0 = 0;
                iRam00000000013451d8 = 0;
                do {
                  iVar13 = iRam0000000001345190;
                  cVar4 = '\x01';
                  bVar5 = (bool)ExclusiveMonitorPass(0x1345190,0x10);
                  if (bVar5) {
                    iRam0000000001345190 = 0;
                    cVar4 = ExclusiveMonitorsStatus();
                  }
                } while (cVar4 != '\0');
                if (iVar13 == 2) {
                  native_sub_432c0c(0x1345190,1,0);
                }
              }
              if (((*(byte *)(lVar11 + 0x133) >> 2 & 1) != 0) &&
                 (lVar11 = native_sub_3c573c(lVar11,&UNK_00edd9af,0xffffffff,0x800), lVar11 != 0)) {
                native_sub_3d704c(lVar11,0,0,&stack0xffffffffffffffb8);
              }
              do {
                cVar4 = '\x01';
                bVar5 = (bool)ExclusiveMonitorPass(piVar1,0x10);
                if (bVar5) {
                  *piVar1 = 1;
                  cVar4 = ExclusiveMonitorsStatus();
                }
              } while (cVar4 != '\0');
              DataMemoryBarrier(2,3);
              do {
                cVar4 = '\x01';
                bVar5 = (bool)ExclusiveMonitorPass(puVar3,0x10);
                if (bVar5) {
                  *puVar3 = 0;
                  cVar4 = ExclusiveMonitorsStatus();
                }
              } while (cVar4 != '\0');
              DataMemoryBarrier(2,3);
              return;
            }
            cVar4 = '\x01';
            bVar5 = (bool)ExclusiveMonitorPass(piVar2,0x10);
            if (bVar5) {
              *piVar2 = 1;
              cVar4 = ExclusiveMonitorsStatus();
            }
          } while (cVar4 != '\0');
          DataMemoryBarrier(2,3);
          iVar13 = iRam00000000013451d8 + -1;
          if ((0 < iRam00000000013451d8) && (iRam00000000013451d8 = iVar13, iVar13 == 0)) {
            lRam00000000013451d0 = 0;
            iRam00000000013451d8 = 0;
            do {
              iVar13 = iRam0000000001345190;
              cVar4 = '\x01';
              bVar5 = (bool)ExclusiveMonitorPass(0x1345190,0x10);
              if (bVar5) {
                iRam0000000001345190 = 0;
                cVar4 = ExclusiveMonitorsStatus();
              }
            } while (cVar4 != '\0');
            if (iVar13 == 2) {
              native_sub_432c0c(0x1345190,1,0);
            }
          }
          lVar12 = native_sub_3aad3c();
          plVar10 = (long *)(lVar11 + 0xe8);
          do {
            lVar11 = *plVar10;
            if (lVar11 != lVar12) {
              ClearExclusiveLocal();
              break;
            }
            cVar4 = '\x01';
            bVar5 = (bool)ExclusiveMonitorPass(plVar10,0x10);
            if (bVar5) {
              *plVar10 = lVar12;
              cVar4 = ExclusiveMonitorsStatus();
            }
          } while (cVar4 != '\0');
          DataMemoryBarrier(2,3);
          if (lVar11 != lVar12) {
            do {
              iVar13 = *piVar1;
              if (iVar13 != 1) {
                ClearExclusiveLocal();
                break;
              }
              cVar4 = '\x01';
              bVar5 = (bool)ExclusiveMonitorPass(piVar1,0x10);
              if (bVar5) {
                *piVar1 = 1;
                cVar4 = ExclusiveMonitorsStatus();
              }
            } while (cVar4 != '\0');
            DataMemoryBarrier(2,3);
            while (iVar13 == 0) {
              native_sub_3a30dc(1,0);
              do {
                iVar13 = *piVar1;
                if (iVar13 != 1) {
                  ClearExclusiveLocal();
                  break;
                }
                cVar4 = '\x01';
                bVar5 = (bool)ExclusiveMonitorPass(piVar1,0x10);
                if (bVar5) {
                  *piVar1 = 1;
                  cVar4 = ExclusiveMonitorsStatus();
                }
              } while (cVar4 != '\0');
              DataMemoryBarrier(2,3);
            }
          }
          return;
        }
      }
      return;
    }
  }
LAB_00aee08c:
                    /* WARNING: Subroutine does not return */
  native_sub_432810();
}



/* UILabel$$Wrap @ 0xaee090
 * bool UILabel__Wrap (UILabel_o* __this, System_String_o* text, System_String_o** final, const MethodInfo* method); */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* UILabel$$Wrap
   bool UILabel__Wrap (UILabel_o* __this, System_String_o* text, System_String_o** final, const
   MethodInfo* method); */

uint native_UILabel__Wrap_aee090(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  long lVar1;
  uint uVar2;
  undefined8 *puVar3;
  
  if ((bRam000000000134202b & 1) == 0) {
    native_sub_43273c(&NGUIText_TypeInfo_12d53c0);
    bRam000000000134202b = 1;
  }
  native_UILabel__UpdateNGUIText_aeae48(param_1);
  if (((*(byte *)(_NGUIText_TypeInfo_12d53c0 + 0x133) >> 2 & 1) != 0) &&
     (*(int *)(_NGUIText_TypeInfo_12d53c0 + 0xe0) == 0)) {
    native_sub_4327ec();
  }
  lVar1 = _NGUIText_TypeInfo_12d53c0;
  *(undefined4 *)(*(long *)(_NGUIText_TypeInfo_12d53c0 + 0xb8) + 0x44) = 1000000;
  *(undefined4 *)(*(long *)(lVar1 + 0xb8) + 0x4c) = 1000000;
  uVar2 = native_NGUIText__WrapText_80dce8(param_2,param_3,0,0);
  puVar3 = *(undefined8 **)(_NGUIText_TypeInfo_12d53c0 + 0xb8);
  *puVar3 = 0;
  native_sub_4326e0(puVar3,0);
  puVar3 = (undefined8 *)(*(long *)(_NGUIText_TypeInfo_12d53c0 + 0xb8) + 8);
  *puVar3 = 0;
  native_sub_4326e0(puVar3,0);
  return uVar2 & 1;
}



/* UILabel$$Wrap @ 0xaee09c
 * bool UILabel__Wrap (UILabel_o* __this, System_String_o* text, System_String_o** final, int32_t height, const MethodInfo* method); */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* UILabel$$Wrap
   bool UILabel__Wrap (UILabel_o* __this, System_String_o* text, System_String_o** final, int32_t
   height, const MethodInfo* method); */

uint native_UILabel__Wrap_aee09c
               (undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined4 param_4)

{
  long lVar1;
  uint uVar2;
  undefined8 *puVar3;
  
  if ((bRam000000000134202b & 1) == 0) {
    native_sub_43273c(&NGUIText_TypeInfo_12d53c0);
    bRam000000000134202b = 1;
  }
  native_UILabel__UpdateNGUIText_aeae48(param_1);
  if (((*(byte *)(_NGUIText_TypeInfo_12d53c0 + 0x133) >> 2 & 1) != 0) &&
     (*(int *)(_NGUIText_TypeInfo_12d53c0 + 0xe0) == 0)) {
    native_sub_4327ec();
  }
  lVar1 = _NGUIText_TypeInfo_12d53c0;
  *(undefined4 *)(*(long *)(_NGUIText_TypeInfo_12d53c0 + 0xb8) + 0x44) = param_4;
  *(undefined4 *)(*(long *)(lVar1 + 0xb8) + 0x4c) = param_4;
  uVar2 = native_NGUIText__WrapText_80dce8(param_2,param_3,0,0);
  puVar3 = *(undefined8 **)(_NGUIText_TypeInfo_12d53c0 + 0xb8);
  *puVar3 = 0;
  native_sub_4326e0(puVar3,0);
  puVar3 = (undefined8 *)(*(long *)(_NGUIText_TypeInfo_12d53c0 + 0xb8) + 8);
  *puVar3 = 0;
  native_sub_4326e0(puVar3,0);
  return uVar2 & 1;
}



/* UILabel$$UpdateNGUIText @ 0xaeae48
 * void UILabel__UpdateNGUIText (UILabel_o* __this, const MethodInfo* method); */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* UILabel$$UpdateNGUIText
   void UILabel__UpdateNGUIText (UILabel_o* __this, const MethodInfo* method); */

void native_UILabel__UpdateNGUIText_aeae48(long *param_1)

{
  bool bVar1;
  byte bVar2;
  int iVar3;
  int iVar4;
  undefined4 uVar5;
  uint uVar6;
  long *plVar7;
  undefined8 *puVar8;
  undefined8 uVar9;
  long *plVar10;
  long lVar11;
  long lVar12;
  ulong uVar13;
  int *piVar14;
  double unaff_x21;
  float fVar15;
  double dVar16;
  float fVar17;
  
  if ((bRam000000000134202c & 1) == 0) {
    native_sub_43273c(&INGUIFont_TypeInfo_12d4c70);
    native_sub_43273c(&NGUIText_TypeInfo_12d53c0);
    native_sub_43273c(&UnityEngine_Object_TypeInfo_12d54e0);
    bRam000000000134202c = 1;
  }
  lVar11 = param_1[0x4f];
  if (((*(byte *)(_NGUIText_TypeInfo_12d53c0 + 0x133) >> 2 & 1) != 0) &&
     (*(int *)(_NGUIText_TypeInfo_12d53c0 + 0xe0) == 0)) {
    native_sub_4327ec();
  }
  lVar12 = _NGUIText_TypeInfo_12d53c0;
  *(int *)(*(long *)(_NGUIText_TypeInfo_12d53c0 + 0xb8) + 0x1c) = (int)lVar11;
  *(undefined4 *)(*(long *)(lVar12 + 0xb8) + 0x28) = *(undefined4 *)((long)param_1 + 0x1b4);
  *(undefined4 *)(*(long *)(lVar12 + 0xb8) + 0x40) = *(undefined4 *)((long)param_1 + 0xa4);
  *(int *)(*(long *)(lVar12 + 0xb8) + 0x44) = (int)param_1[0x15];
  uVar5 = native_UnityEngine_Mathf__RoundToInt_8e50f0
                    ((*(float *)((long)param_1 + 0x10c) - *(float *)((long)param_1 + 0x104)) *
                     (float)*(int *)((long)param_1 + 0xa4),0);
  *(undefined4 *)(*(long *)(_NGUIText_TypeInfo_12d53c0 + 0xb8) + 0x48) = uVar5;
  uVar5 = native_UnityEngine_Mathf__RoundToInt_8e50f0
                    ((*(float *)(param_1 + 0x22) - *(float *)(param_1 + 0x21)) *
                     (float)(int)param_1[0x15],0);
  lVar11 = _NGUIText_TypeInfo_12d53c0;
  *(undefined4 *)(*(long *)(_NGUIText_TypeInfo_12d53c0 + 0xb8) + 0x4c) = uVar5;
  if ((char)param_1[0x3d] == '\0') {
    bVar2 = 0;
  }
  else {
    bVar2 = native_UILabel__get_packedFontShader_aecc44(param_1);
    bVar2 = ~bVar2 & 1;
    lVar11 = _NGUIText_TypeInfo_12d53c0;
  }
  if (((*(byte *)(lVar11 + 0x133) >> 2 & 1) != 0) && (*(int *)(lVar11 + 0xe0) == 0)) {
    native_sub_4327ec(lVar11);
    lVar11 = _NGUIText_TypeInfo_12d53c0;
  }
  *(byte *)(*(long *)(lVar11 + 0xb8) + 0x54) = bVar2;
  uVar9 = *(undefined8 *)((long)param_1 + 0x1ec);
  lVar12 = *(long *)(lVar11 + 0xb8);
  *(undefined8 *)(lVar12 + 0x70) = *(undefined8 *)((long)param_1 + 500);
  *(undefined8 *)(lVar12 + 0x68) = uVar9;
  uVar9 = *(undefined8 *)((long)param_1 + 0x1fc);
  lVar12 = *(long *)(lVar11 + 0xb8);
  *(undefined8 *)(lVar12 + 0x60) = *(undefined8 *)((long)param_1 + 0x204);
  *(undefined8 *)(lVar12 + 0x58) = uVar9;
  *(undefined1 *)(*(long *)(lVar11 + 0xb8) + 0x78) = *(undefined1 *)((long)param_1 + 0x1bc);
  *(char *)(*(long *)(lVar11 + 0xb8) + 0x84) = (char)param_1[0x4d];
  *(int *)(*(long *)(lVar11 + 0xb8) + 0x88) = (int)param_1[0x3b];
  *(int *)(*(long *)(lVar11 + 0xb8) + 0x50) = (int)param_1[0x38];
  if (*(char *)((long)param_1 + 0x214) == '\0') {
    fVar15 = (float)*(int *)((long)param_1 + 0x20c);
  }
  else {
    fVar15 = *(float *)(param_1 + 0x43);
  }
  *(float *)(*(long *)(lVar11 + 0xb8) + 0x7c) = fVar15;
  if (*(char *)((long)param_1 + 0x214) == '\0') {
    fVar15 = (float)(int)param_1[0x42];
  }
  else {
    fVar15 = *(float *)((long)param_1 + 0x21c);
  }
  *(float *)(*(long *)(lVar11 + 0xb8) + 0x80) = fVar15;
  *(undefined4 *)(*(long *)(lVar11 + 0xb8) + 0x18) = 0;
  plVar7 = (long *)native_UILabel__get_font_ae77e8(param_1);
  if (plVar7 != (long *)0x0) {
    lVar11 = *plVar7;
    if ((ulong)*(ushort *)(lVar11 + 0x12a) != 0) {
      uVar13 = 0;
      piVar14 = (int *)(*(long *)(lVar11 + 0xb0) + 8);
      do {
        if (*(long *)(piVar14 + -2) == _INGUIFont_TypeInfo_12d4c70) {
          puVar8 = (undefined8 *)(lVar11 + (long)(*piVar14 + 0x1b) * 0x10 + 0x138);
          goto LAB_00aeb09c;
        }
        uVar13 = uVar13 + 1;
        piVar14 = piVar14 + 4;
      } while (uVar13 < *(ushort *)(lVar11 + 0x12a));
    }
    puVar8 = (undefined8 *)native_sub_3c9b34(plVar7,_INGUIFont_TypeInfo_12d4c70,0x1b);
LAB_00aeb09c:
    uVar5 = (*(code *)*puVar8)(plVar7,puVar8[1]);
    if (((*(byte *)(_NGUIText_TypeInfo_12d53c0 + 0x133) >> 2 & 1) != 0) &&
       (*(int *)(_NGUIText_TypeInfo_12d53c0 + 0xe0) == 0)) {
      native_sub_4327ec(_NGUIText_TypeInfo_12d53c0);
    }
    *(undefined4 *)(*(long *)(_NGUIText_TypeInfo_12d53c0 + 0xb8) + 0x18) = uVar5;
  }
  uVar9 = native_UILabel__get_trueTypeFont_ae74d0(param_1);
  if (((*(byte *)(_UnityEngine_Object_TypeInfo_12d54e0 + 0x133) >> 2 & 1) != 0) &&
     (*(int *)(_UnityEngine_Object_TypeInfo_12d54e0 + 0xe0) == 0)) {
    native_sub_4327ec(_UnityEngine_Object_TypeInfo_12d54e0);
  }
  uVar13 = native_UnityEngine_Object__op_Inequality_8d76fc(uVar9,0,0);
  if ((uVar13 & 1) == 0) {
    if (plVar7 == (long *)0x0) {
      uVar5 = *(undefined4 *)((long)param_1 + 0x274);
      if (((*(byte *)(_NGUIText_TypeInfo_12d53c0 + 0x133) >> 2 & 1) != 0) &&
         (*(int *)(_NGUIText_TypeInfo_12d53c0 + 0xe0) == 0)) {
        native_sub_4327ec();
      }
      lVar11 = _NGUIText_TypeInfo_12d53c0;
      bVar1 = false;
      plVar7 = (long *)0x0;
      *(undefined4 *)(*(long *)(_NGUIText_TypeInfo_12d53c0 + 0xb8) + 0x20) = uVar5;
    }
    else {
      lVar11 = *plVar7;
      if ((ulong)*(ushort *)(lVar11 + 0x12a) != 0) {
        uVar13 = 0;
        piVar14 = (int *)(*(long *)(lVar11 + 0xb0) + 8);
        do {
          if (*(long *)(piVar14 + -2) == _INGUIFont_TypeInfo_12d4c70) {
            puVar8 = (undefined8 *)(lVar11 + (long)(*piVar14 + 0x20) * 0x10 + 0x138);
            goto LAB_00aeb1e0;
          }
          uVar13 = uVar13 + 1;
          piVar14 = piVar14 + 4;
        } while (uVar13 < *(ushort *)(lVar11 + 0x12a));
      }
      puVar8 = (undefined8 *)native_sub_3c9b34(plVar7,_INGUIFont_TypeInfo_12d4c70,0x20);
LAB_00aeb1e0:
      plVar7 = (long *)(*(code *)*puVar8)(plVar7,puVar8[1]);
      if (plVar7 == (long *)0x0) {
        fVar15 = *(float *)((long)param_1 + 0x274);
      }
      else {
        lVar12 = *plVar7;
        lVar11 = param_1[0x36];
        if ((ulong)*(ushort *)(lVar12 + 0x12a) != 0) {
          uVar13 = 0;
          piVar14 = (int *)(*(long *)(lVar12 + 0xb0) + 8);
          do {
            if (*(long *)(piVar14 + -2) == _INGUIFont_TypeInfo_12d4c70) {
              puVar8 = (undefined8 *)(lVar12 + (long)(*piVar14 + 0x19) * 0x10 + 0x138);
              goto LAB_00aeb258;
            }
            uVar13 = uVar13 + 1;
            piVar14 = piVar14 + 4;
          } while (uVar13 < *(ushort *)(lVar12 + 0x12a));
        }
        puVar8 = (undefined8 *)native_sub_3c9b34(plVar7,_INGUIFont_TypeInfo_12d4c70,0x19);
LAB_00aeb258:
        iVar3 = (*(code *)*puVar8)(plVar7,puVar8[1]);
        fVar15 = *(float *)((long)param_1 + 0x274) * ((float)(int)lVar11 / (float)iVar3);
      }
      if (((*(byte *)(_NGUIText_TypeInfo_12d53c0 + 0x133) >> 2 & 1) != 0) &&
         (*(int *)(_NGUIText_TypeInfo_12d53c0 + 0xe0) == 0)) {
        native_sub_4327ec();
      }
      lVar11 = _NGUIText_TypeInfo_12d53c0;
      bVar1 = false;
      *(float *)(*(long *)(_NGUIText_TypeInfo_12d53c0 + 0xb8) + 0x20) = fVar15;
    }
  }
  else {
    uVar5 = *(undefined4 *)((long)param_1 + 0x274);
    if (((*(byte *)(_NGUIText_TypeInfo_12d53c0 + 0x133) >> 2 & 1) != 0) &&
       (*(int *)(_NGUIText_TypeInfo_12d53c0 + 0xe0) == 0)) {
      native_sub_4327ec();
    }
    lVar11 = _NGUIText_TypeInfo_12d53c0;
    *(undefined4 *)(*(long *)(_NGUIText_TypeInfo_12d53c0 + 0xb8) + 0x20) = uVar5;
    bVar1 = true;
  }
  if (((*(byte *)(lVar11 + 0x133) >> 2 & 1) != 0) && (*(int *)(lVar11 + 0xe0) == 0)) {
    native_sub_4327ec();
    lVar11 = _NGUIText_TypeInfo_12d53c0;
  }
  plVar10 = *(long **)(lVar11 + 0xb8);
  *plVar10 = (long)plVar7;
  native_sub_4326e0(plVar10,plVar7);
  puVar8 = (undefined8 *)(*(long *)(_NGUIText_TypeInfo_12d53c0 + 0xb8) + 8);
  *puVar8 = uVar9;
  native_sub_4326e0(puVar8,uVar9);
  if ((bVar1) && (uVar13 = native_UILabel__get_keepCrisp_ae8860(param_1), (uVar13 & 1) != 0)) {
    lVar12 = native_UIRect__get_root_c2d7ac(param_1,0);
    if (((*(byte *)(_UnityEngine_Object_TypeInfo_12d54e0 + 0x133) >> 2 & 1) != 0) &&
       (*(int *)(_UnityEngine_Object_TypeInfo_12d54e0 + 0xe0) == 0)) {
      native_sub_4327ec(_UnityEngine_Object_TypeInfo_12d54e0);
    }
    uVar13 = native_UnityEngine_Object__op_Inequality_8d76fc(lVar12,0,0);
    lVar11 = _NGUIText_TypeInfo_12d53c0;
    if ((uVar13 & 1) != 0) {
      if (((*(byte *)(_UnityEngine_Object_TypeInfo_12d54e0 + 0x133) >> 2 & 1) != 0) &&
         (*(int *)(_UnityEngine_Object_TypeInfo_12d54e0 + 0xe0) == 0)) {
        native_sub_4327ec();
      }
      uVar13 = native_UnityEngine_Object__op_Inequality_8d76fc(lVar12,0,0);
      if ((uVar13 & 1) == 0) {
        uVar5 = 0x3f800000;
      }
      else {
        if (lVar12 == 0) {
                    /* WARNING: Subroutine does not return */
          native_sub_432810();
        }
        uVar5 = native_UIRoot__get_pixelSizeAdjustment_c2f740(lVar12,0);
      }
      if (((*(byte *)(_NGUIText_TypeInfo_12d53c0 + 0x133) >> 2 & 1) != 0) &&
         (*(int *)(_NGUIText_TypeInfo_12d53c0 + 0xe0) == 0)) {
        native_sub_4327ec(_NGUIText_TypeInfo_12d53c0);
      }
      lVar11 = _NGUIText_TypeInfo_12d53c0;
      *(undefined4 *)(*(long *)(_NGUIText_TypeInfo_12d53c0 + 0xb8) + 0x24) = uVar5;
    }
  }
  else {
    if (((*(byte *)(_NGUIText_TypeInfo_12d53c0 + 0x133) >> 2 & 1) != 0) &&
       (*(int *)(_NGUIText_TypeInfo_12d53c0 + 0xe0) == 0)) {
      native_sub_4327ec(_NGUIText_TypeInfo_12d53c0);
    }
    lVar11 = _NGUIText_TypeInfo_12d53c0;
    *(undefined4 *)(*(long *)(_NGUIText_TypeInfo_12d53c0 + 0xb8) + 0x24) = 0x3f800000;
  }
  fVar15 = *(float *)(param_1 + 0x4b);
  if (((*(byte *)(lVar11 + 0x133) >> 2 & 1) != 0) && (*(int *)(lVar11 + 0xe0) == 0)) {
    native_sub_4327ec(lVar11);
    lVar11 = _NGUIText_TypeInfo_12d53c0;
  }
  if (fVar15 != *(float *)(*(long *)(lVar11 + 0xb8) + 0x24)) {
    native_UILabel__ProcessText_ae8a14(param_1,0,0);
    uVar5 = *(undefined4 *)((long)param_1 + 0xa4);
    if (((*(byte *)(_NGUIText_TypeInfo_12d53c0 + 0x133) >> 2 & 1) != 0) &&
       (*(int *)(_NGUIText_TypeInfo_12d53c0 + 0xe0) == 0)) {
      native_sub_4327ec();
    }
    lVar11 = _NGUIText_TypeInfo_12d53c0;
    *(undefined4 *)(*(long *)(_NGUIText_TypeInfo_12d53c0 + 0xb8) + 0x40) = uVar5;
    *(int *)(*(long *)(lVar11 + 0xb8) + 0x44) = (int)param_1[0x15];
    uVar5 = native_UnityEngine_Mathf__RoundToInt_8e50f0
                      ((*(float *)((long)param_1 + 0x10c) - *(float *)((long)param_1 + 0x104)) *
                       (float)*(int *)((long)param_1 + 0xa4),0);
    *(undefined4 *)(*(long *)(_NGUIText_TypeInfo_12d53c0 + 0xb8) + 0x48) = uVar5;
    uVar5 = native_UnityEngine_Mathf__RoundToInt_8e50f0
                      ((*(float *)(param_1 + 0x22) - *(float *)(param_1 + 0x21)) *
                       (float)(int)param_1[0x15],0);
    lVar11 = _NGUIText_TypeInfo_12d53c0;
    *(undefined4 *)(*(long *)(_NGUIText_TypeInfo_12d53c0 + 0xb8) + 0x4c) = uVar5;
  }
  iVar3 = (int)param_1[0x37];
  if (iVar3 == 0) {
    uVar6 = (**(code **)(*param_1 + 0x2a8))(param_1,*(undefined8 *)(*param_1 + 0x2b0));
    if (uVar6 < 9) {
      uVar6 = 1 << (ulong)(uVar6 & 0x1f);
      if ((uVar6 & 0x49) == 0) {
        if ((uVar6 & 0x124) == 0) goto LAB_00aeb554;
        if (((*(byte *)(_NGUIText_TypeInfo_12d53c0 + 0x133) >> 2 & 1) != 0) &&
           (*(int *)(_NGUIText_TypeInfo_12d53c0 + 0xe0) == 0)) {
          native_sub_4327ec(_NGUIText_TypeInfo_12d53c0);
        }
        iVar3 = 3;
        lVar11 = _NGUIText_TypeInfo_12d53c0;
      }
      else {
        if (((*(byte *)(_NGUIText_TypeInfo_12d53c0 + 0x133) >> 2 & 1) != 0) &&
           (*(int *)(_NGUIText_TypeInfo_12d53c0 + 0xe0) == 0)) {
          native_sub_4327ec(_NGUIText_TypeInfo_12d53c0);
        }
        iVar3 = 1;
        lVar11 = _NGUIText_TypeInfo_12d53c0;
      }
    }
    else {
LAB_00aeb554:
      if (((*(byte *)(_NGUIText_TypeInfo_12d53c0 + 0x133) >> 2 & 1) != 0) &&
         (*(int *)(_NGUIText_TypeInfo_12d53c0 + 0xe0) == 0)) {
        native_sub_4327ec(_NGUIText_TypeInfo_12d53c0);
      }
      iVar3 = 2;
      lVar11 = _NGUIText_TypeInfo_12d53c0;
    }
  }
  else if (((*(byte *)(lVar11 + 0x133) >> 2 & 1) != 0) && (*(int *)(lVar11 + 0xe0) == 0)) {
    native_sub_4327ec(lVar11);
    lVar11 = _NGUIText_TypeInfo_12d53c0;
  }
  *(int *)(*(long *)(lVar11 + 0xb8) + 0x2c) = iVar3;
  if (((*(byte *)(lVar11 + 0x133) >> 2 & 1) != 0) && (*(int *)(lVar11 + 0xe0) == 0)) {
    native_sub_4327ec(lVar11);
  }
  if ((bRam0000000001340482 & 1) == 0) {
    native_sub_43273c(&NGUIText_TypeInfo_12d53c0);
    bRam0000000001340482 = 1;
  }
  if (((*(byte *)(_NGUIText_TypeInfo_12d53c0 + 0x133) >> 2 & 1) != 0) &&
     (*(int *)(_NGUIText_TypeInfo_12d53c0 + 0xe0) == 0)) {
    native_sub_4327ec();
  }
  if ((bRam0000000001340483 & 1) == 0) {
    native_sub_43273c(&NGUIText_TypeInfo_12d53c0);
    native_sub_43273c(&UnityEngine_Object_TypeInfo_12d54e0);
    native_sub_43273c(&StringLiteral______12eb5e0);
    native_sub_43273c(&StringLiteral_A_12ec020);
    bRam0000000001340483 = 1;
  }
  if (((*(byte *)(_NGUIText_TypeInfo_12d53c0 + 0x133) >> 2 & 1) != 0) &&
     (*(int *)(_NGUIText_TypeInfo_12d53c0 + 0xe0) == 0)) {
    native_sub_4327ec();
  }
  uVar5 = native_UnityEngine_Mathf__RoundToInt_8e50f0
                    ((float)*(int *)(*(long *)(_NGUIText_TypeInfo_12d53c0 + 0xb8) + 0x1c) /
                     *(float *)(*(long *)(_NGUIText_TypeInfo_12d53c0 + 0xb8) + 0x24),0);
  lVar11 = _NGUIText_TypeInfo_12d53c0;
  *(undefined4 *)(*(long *)(_NGUIText_TypeInfo_12d53c0 + 0xb8) + 0x8c) = uVar5;
  lVar12 = *(long *)(lVar11 + 0xb8);
  *(float *)(lVar12 + 0x90) = *(float *)(lVar12 + 0x7c) * *(float *)(lVar12 + 0x20);
  lVar12 = *(long *)(lVar11 + 0xb8);
  *(float *)(lVar12 + 0x94) =
       (*(float *)(lVar12 + 0x80) + (float)*(int *)(lVar12 + 0x1c)) * *(float *)(lVar12 + 0x20);
  plVar7 = *(long **)(lVar11 + 0xb8);
  if (*plVar7 == 0) {
LAB_008089f8:
    bVar1 = false;
  }
  else {
    if (((*(byte *)(lVar11 + 0x133) >> 2 & 1) != 0) && (*(int *)(lVar11 + 0xe0) == 0)) {
      native_sub_4327ec();
      plVar7 = *(long **)(_NGUIText_TypeInfo_12d53c0 + 0xb8);
      lVar11 = _NGUIText_TypeInfo_12d53c0;
    }
    if ((char)plVar7[0xf] == '\0') goto LAB_008089f8;
    if (((*(byte *)(lVar11 + 0x133) >> 2 & 1) != 0) && (*(int *)(lVar11 + 0xe0) == 0)) {
      native_sub_4327ec();
      plVar7 = *(long **)(_NGUIText_TypeInfo_12d53c0 + 0xb8);
      lVar11 = _NGUIText_TypeInfo_12d53c0;
    }
    bVar1 = (int)plVar7[0x11] != 0;
  }
  if (((*(byte *)(lVar11 + 0x133) >> 2 & 1) != 0) && (*(int *)(lVar11 + 0xe0) == 0)) {
    native_sub_4327ec();
    lVar11 = _NGUIText_TypeInfo_12d53c0;
  }
  *(bool *)(*(long *)(lVar11 + 0xb8) + 0x9c) = bVar1;
  lVar11 = *(long *)(*(long *)(lVar11 + 0xb8) + 8);
  if (((*(byte *)(_UnityEngine_Object_TypeInfo_12d54e0 + 0x133) >> 2 & 1) != 0) &&
     (*(int *)(_UnityEngine_Object_TypeInfo_12d54e0 + 0xe0) == 0)) {
    native_sub_4327ec(_UnityEngine_Object_TypeInfo_12d54e0);
  }
  uVar13 = native_UnityEngine_Object__op_Inequality_8d76fc(lVar11,0,0);
  if ((uVar13 & 1) == 0) {
    return;
  }
  if (((*(byte *)(_NGUIText_TypeInfo_12d53c0 + 0x133) >> 2 & 1) != 0) &&
     (*(int *)(_NGUIText_TypeInfo_12d53c0 + 0xe0) == 0)) {
    native_sub_4327ec();
  }
  if (lVar11 == 0) {
                    /* WARNING: Subroutine does not return */
    native_sub_432810();
  }
  native_UnityEngine_Font__RequestCharactersInTexture_db40bc
            (lVar11,_StringLiteral______12eb5e0,
             *(undefined4 *)(*(long *)(_NGUIText_TypeInfo_12d53c0 + 0xb8) + 0x8c),
             *(undefined4 *)(*(long *)(_NGUIText_TypeInfo_12d53c0 + 0xb8) + 0x28),0);
  lVar12 = *(long *)(_NGUIText_TypeInfo_12d53c0 + 0xb8);
  uVar13 = native_UnityEngine_Font__GetCharacterInfo_db404c
                     (lVar11,0x29,lVar12 + 0xc4,*(undefined4 *)(lVar12 + 0x8c),
                      *(undefined4 *)(lVar12 + 0x28),0);
  if ((uVar13 & 1) == 0) {
LAB_00808afc:
    if (((*(byte *)(_NGUIText_TypeInfo_12d53c0 + 0x133) >> 2 & 1) != 0) &&
       (*(int *)(_NGUIText_TypeInfo_12d53c0 + 0xe0) == 0)) {
      native_sub_4327ec();
    }
    native_UnityEngine_Font__RequestCharactersInTexture_db40bc
              (lVar11,_StringLiteral_A_12ec020,
               *(undefined4 *)(*(long *)(_NGUIText_TypeInfo_12d53c0 + 0xb8) + 0x8c),
               *(undefined4 *)(*(long *)(_NGUIText_TypeInfo_12d53c0 + 0xb8) + 0x28),0);
    lVar12 = *(long *)(_NGUIText_TypeInfo_12d53c0 + 0xb8);
    uVar13 = native_UnityEngine_Font__GetCharacterInfo_db404c
                       (lVar11,0x41,lVar12 + 0xc4,*(undefined4 *)(lVar12 + 0x8c),
                        *(undefined4 *)(lVar12 + 0x28),0);
    if ((uVar13 & 1) == 0) {
      fVar15 = 0.0;
      if (((*(byte *)(_NGUIText_TypeInfo_12d53c0 + 0x133) >> 2 & 1) != 0) &&
         (fVar15 = 0.0, *(int *)(_NGUIText_TypeInfo_12d53c0 + 0xe0) == 0)) {
        native_sub_4327ec();
      }
      goto LAB_00808c64;
    }
  }
  else {
    if (((*(byte *)(_NGUIText_TypeInfo_12d53c0 + 0x133) >> 2 & 1) != 0) &&
       (*(int *)(_NGUIText_TypeInfo_12d53c0 + 0xe0) == 0)) {
      native_sub_4327ec();
    }
    iVar3 = native_UnityEngine_CharacterInfo__get_maxY_db3708
                      (*(long *)(_NGUIText_TypeInfo_12d53c0 + 0xb8) + 0xc4,0);
    if (iVar3 == 0) goto LAB_00808afc;
  }
  if (((*(byte *)(_NGUIText_TypeInfo_12d53c0 + 0x133) >> 2 & 1) != 0) &&
     (*(int *)(_NGUIText_TypeInfo_12d53c0 + 0xe0) == 0)) {
    native_sub_4327ec();
  }
  iVar3 = native_UnityEngine_CharacterInfo__get_maxY_db3708
                    (*(long *)(_NGUIText_TypeInfo_12d53c0 + 0xb8) + 0xc4,0);
  iVar4 = native_UnityEngine_CharacterInfo__get_minY_db36a8
                    (*(long *)(_NGUIText_TypeInfo_12d53c0 + 0xb8) + 0xc4,0);
  fVar15 = (((float)*(int *)(*(long *)(_NGUIText_TypeInfo_12d53c0 + 0xb8) + 0x8c) - (float)iVar3) +
           (float)iVar4) * 0.5 + (float)iVar3;
  dVar16 = (double)func_0x002c9600((double)fVar15,&stack0xffffffffffffffd8);
  if (0.0 <= fVar15) {
    if (dVar16 != 0.5) {
      fVar15 = (float)(int)(fVar15 + 0.5);
      goto LAB_00808c64;
    }
    fVar17 = 1.0;
  }
  else {
    if (dVar16 != -0.5) {
      fVar15 = (float)(int)(fVar15 + -0.5);
      goto LAB_00808c64;
    }
    fVar17 = -1.0;
  }
  fVar15 = (float)unaff_x21;
  if (((long)unaff_x21 & 1U) != 0) {
    fVar15 = (float)unaff_x21 + fVar17;
  }
LAB_00808c64:
  *(float *)(*(long *)(_NGUIText_TypeInfo_12d53c0 + 0xb8) + 0x98) = fVar15;
  return;
}



/* UILabel$$OnApplicationPause @ 0xaee174
 * void UILabel__OnApplicationPause (UILabel_o* __this, bool paused, const MethodInfo* method); */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* UILabel$$OnApplicationPause
   void UILabel__OnApplicationPause (UILabel_o* __this, bool paused, const MethodInfo* method); */

void native_UILabel__OnApplicationPause_aee174(long *param_1,ulong param_2)

{
  ulong uVar1;
  long lVar2;
  
  if ((bRam000000000134202d & 1) == 0) {
    native_sub_43273c(&UnityEngine_Object_TypeInfo_12d54e0);
    bRam000000000134202d = 1;
  }
  if ((param_2 & 1) == 0) {
    lVar2 = param_1[0x33];
    if (((*(byte *)(_UnityEngine_Object_TypeInfo_12d54e0 + 0x133) >> 2 & 1) != 0) &&
       (*(int *)(_UnityEngine_Object_TypeInfo_12d54e0 + 0xe0) == 0)) {
      native_sub_4327ec();
    }
    uVar1 = native_UnityEngine_Object__op_Inequality_8d76fc(lVar2,0,0);
    if ((uVar1 & 1) != 0) {
                    /* WARNING: Could not recover jumptable at 0x00aee204. Too many branches */
                    /* WARNING: Treating indirect jump as call */
      (**(code **)(*param_1 + 0x1f8))(param_1,0,*(undefined8 *)(*param_1 + 0x200));
      return;
    }
  }
  return;
}



/* UILabel$$.ctor @ 0xaee218
 * void UILabel___ctor (UILabel_o* __this, const MethodInfo* method); */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* UILabel$$.ctor
   void UILabel___ctor (UILabel_o* __this, const MethodInfo* method); */

void native_UILabel___ctor_aee218
               (undefined1 param_1 [16],undefined4 param_2,undefined4 param_3,undefined4 param_4,
               long param_5)

{
  undefined4 uVar1;
  undefined4 uVar2;
  undefined4 uStack_40;
  undefined4 uStack_3c;
  undefined4 uStack_38;
  undefined4 uStack_34;
  
  if ((bRam000000000134202e & 1) == 0) {
    native_sub_43273c(&StringLiteral__12eaac0);
    bRam000000000134202e = 1;
  }
  *(undefined4 *)(param_5 + 400) = 1;
  *(undefined8 *)(param_5 + 0x1a8) = _StringLiteral__12eaac0;
  native_sub_4326e0(param_5 + 0x1a8);
  *(undefined4 *)(param_5 + 0x1b0) = 0x10;
  *(undefined1 *)(param_5 + 0x1bc) = 1;
  uVar1 = native_UnityEngine_Color__get_black_8d9e24(0);
  *(undefined4 *)(param_5 + 0x1c8) = uVar1;
  *(undefined4 *)(param_5 + 0x1cc) = param_2;
  *(undefined4 *)(param_5 + 0x1d0) = param_3;
  *(undefined4 *)(param_5 + 0x1d4) = param_4;
  *(undefined4 *)(param_5 + 0x1d8) = 1;
  uVar1 = native_UnityEngine_Vector2__get_one_765354(0);
  *(undefined4 *)(param_5 + 0x1dc) = uVar1;
  *(undefined4 *)(param_5 + 0x1e0) = param_2;
  uVar1 = native_UnityEngine_Color__get_white_8d9e10(0);
  *(undefined4 *)(param_5 + 0x1ec) = uVar1;
  *(undefined4 *)(param_5 + 0x1f0) = param_2;
  *(undefined4 *)(param_5 + 500) = param_3;
  uVar1 = 0x3f333333;
  *(undefined4 *)(param_5 + 0x1f8) = param_4;
  uStack_40 = 0;
  uStack_3c = 0;
  uStack_38 = 0;
  uStack_34 = 0;
  native_UnityEngine_Color___ctor_8d9818(0x3f333333,0x3f333333,0x3f333333,&uStack_40,0);
  *(undefined1 *)(param_5 + 0x244) = 1;
  *(undefined4 *)(param_5 + 600) = 0x3f800000;
  *(undefined4 *)(param_5 + 0x1fc) = uStack_40;
  *(ulong *)(param_5 + 0x200) = CONCAT44(uStack_38,uStack_3c);
  *(undefined4 *)(param_5 + 0x208) = uStack_34;
  *(undefined1 *)(param_5 + 0x25c) = 1;
  uVar2 = native_UnityEngine_Vector2__get_zero_765ef0(0);
  *(undefined4 *)(param_5 + 0x26c) = uVar2;
  *(undefined4 *)(param_5 + 0x270) = uVar1;
  *(undefined4 *)(param_5 + 0x274) = 0x3f800000;
  native_UIWidget___ctor_94cd14(param_5,0);
  return;
}



/* UILabel$$.cctor @ 0xaee33c
 * void UILabel___cctor (const MethodInfo* method); */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* UILabel$$.cctor
   void UILabel___cctor (const MethodInfo* method); */

void native_UILabel___cctor_aee33c(void)

{
  ulong *puVar1;
  char cVar2;
  bool bVar3;
  undefined8 uVar4;
  undefined8 *puVar5;
  
  if ((bRam000000000134202f & 1) == 0) {
    native_sub_43273c(&Method_BetterList_UILabel___ctor___12d89e8);
    native_sub_43273c(&BetterList_UILabel__TypeInfo_12d2140);
    native_sub_43273c(&Method_System_Collections_Generic_Dictionary_Font__int___ctor___12d8f10);
    native_sub_43273c(&System_Collections_Generic_Dictionary_Font__int__TypeInfo_12d2280);
    native_sub_43273c(&Method_System_Collections_Generic_List_int___ctor___12dca80);
    native_sub_43273c(&Method_System_Collections_Generic_List_Vector3___ctor___12dd4d8);
    native_sub_43273c(&System_Collections_Generic_List_int__TypeInfo_12d2aa0);
    native_sub_43273c(&System_Collections_Generic_List_Vector3__TypeInfo_12d2c68);
    native_sub_43273c(&UILabel_TypeInfo_12d6468);
    bRam000000000134202f = 1;
  }
  uVar4 = native_sub_432808(_BetterList_UILabel__TypeInfo_12d2140);
  native_BetterList_object____ctor_ba2d1c(uVar4,_Method_BetterList_UILabel___ctor___12d89e8);
  puVar5 = *(undefined8 **)(_UILabel_TypeInfo_12d6468 + 0xb8);
  *puVar5 = uVar4;
  native_sub_4326e0(puVar5,uVar4);
  uVar4 = native_sub_432808(_System_Collections_Generic_Dictionary_Font__int__TypeInfo_12d2280);
  native_System_Collections_Generic_Dictionary_Font__int____ctor_cd7054
            (uVar4,_Method_System_Collections_Generic_Dictionary_Font__int___ctor___12d8f10);
  puVar5 = (undefined8 *)(*(long *)(_UILabel_TypeInfo_12d6468 + 0xb8) + 8);
  *puVar5 = uVar4;
  native_sub_4326e0(puVar5,uVar4);
  *(undefined1 *)(*(long *)(_UILabel_TypeInfo_12d6468 + 0xb8) + 0x18) = 0;
  uVar4 = native_sub_432808(_System_Collections_Generic_List_Vector3__TypeInfo_12d2c68);
  native_System_Collections_Generic_List_Vector3____ctor_d2b070
            (uVar4,_Method_System_Collections_Generic_List_Vector3___ctor___12dd4d8);
  puVar5 = (undefined8 *)(*(long *)(_UILabel_TypeInfo_12d6468 + 0xb8) + 0x20);
  *puVar5 = uVar4;
  native_sub_4326e0(puVar5,uVar4);
  uVar4 = native_sub_432808(_System_Collections_Generic_List_int__TypeInfo_12d2aa0);
  native_System_Collections_Generic_List_int____ctor_d38324
            (uVar4,_Method_System_Collections_Generic_List_int___ctor___12dca80);
  puVar5 = (undefined8 *)(*(long *)(_UILabel_TypeInfo_12d6468 + 0xb8) + 0x28);
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


