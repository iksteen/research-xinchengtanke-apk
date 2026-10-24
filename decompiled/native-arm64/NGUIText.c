/* ARM64 IL2CPP native pseudocode from Ghidra.
 * Recovered implementation, not original C# source.
 * Function boundaries follow the IL2CPP method address table. */


/* NGUIText$$Update @ 0x808864
 * void NGUIText__Update (const MethodInfo* method); */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* NGUIText$$Update
   void NGUIText__Update (const MethodInfo* method); */

void native_NGUIText__Update_808864(void)

{
  bool bVar1;
  undefined4 uVar2;
  int iVar3;
  int iVar4;
  ulong uVar5;
  long lVar6;
  long *plVar7;
  long lVar8;
  double dVar9;
  float fVar10;
  float fVar11;
  double dStack_28;
  
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
  uVar2 = native_UnityEngine_Mathf__RoundToInt_8e50f0
                    ((float)*(int *)(*(long *)(_NGUIText_TypeInfo_12d53c0 + 0xb8) + 0x1c) /
                     *(float *)(*(long *)(_NGUIText_TypeInfo_12d53c0 + 0xb8) + 0x24),0);
  lVar8 = _NGUIText_TypeInfo_12d53c0;
  *(undefined4 *)(*(long *)(_NGUIText_TypeInfo_12d53c0 + 0xb8) + 0x8c) = uVar2;
  lVar6 = *(long *)(lVar8 + 0xb8);
  *(float *)(lVar6 + 0x90) = *(float *)(lVar6 + 0x7c) * *(float *)(lVar6 + 0x20);
  lVar6 = *(long *)(lVar8 + 0xb8);
  *(float *)(lVar6 + 0x94) =
       (*(float *)(lVar6 + 0x80) + (float)*(int *)(lVar6 + 0x1c)) * *(float *)(lVar6 + 0x20);
  plVar7 = *(long **)(lVar8 + 0xb8);
  if (*plVar7 == 0) {
LAB_008089f8:
    bVar1 = false;
  }
  else {
    if (((*(byte *)(lVar8 + 0x133) >> 2 & 1) != 0) && (*(int *)(lVar8 + 0xe0) == 0)) {
      native_sub_4327ec();
      plVar7 = *(long **)(_NGUIText_TypeInfo_12d53c0 + 0xb8);
      lVar8 = _NGUIText_TypeInfo_12d53c0;
    }
    if ((char)plVar7[0xf] == '\0') goto LAB_008089f8;
    if (((*(byte *)(lVar8 + 0x133) >> 2 & 1) != 0) && (*(int *)(lVar8 + 0xe0) == 0)) {
      native_sub_4327ec();
      plVar7 = *(long **)(_NGUIText_TypeInfo_12d53c0 + 0xb8);
      lVar8 = _NGUIText_TypeInfo_12d53c0;
    }
    bVar1 = (int)plVar7[0x11] != 0;
  }
  if (((*(byte *)(lVar8 + 0x133) >> 2 & 1) != 0) && (*(int *)(lVar8 + 0xe0) == 0)) {
    native_sub_4327ec();
    lVar8 = _NGUIText_TypeInfo_12d53c0;
  }
  *(bool *)(*(long *)(lVar8 + 0xb8) + 0x9c) = bVar1;
  lVar8 = *(long *)(*(long *)(lVar8 + 0xb8) + 8);
  if (((*(byte *)(_UnityEngine_Object_TypeInfo_12d54e0 + 0x133) >> 2 & 1) != 0) &&
     (*(int *)(_UnityEngine_Object_TypeInfo_12d54e0 + 0xe0) == 0)) {
    native_sub_4327ec(_UnityEngine_Object_TypeInfo_12d54e0);
  }
  uVar5 = native_UnityEngine_Object__op_Inequality_8d76fc(lVar8,0,0);
  if ((uVar5 & 1) == 0) {
    return;
  }
  if (((*(byte *)(_NGUIText_TypeInfo_12d53c0 + 0x133) >> 2 & 1) != 0) &&
     (*(int *)(_NGUIText_TypeInfo_12d53c0 + 0xe0) == 0)) {
    native_sub_4327ec();
  }
  if (lVar8 == 0) {
                    /* WARNING: Subroutine does not return */
    native_sub_432810();
  }
  native_UnityEngine_Font__RequestCharactersInTexture_db40bc
            (lVar8,_StringLiteral______12eb5e0,
             *(undefined4 *)(*(long *)(_NGUIText_TypeInfo_12d53c0 + 0xb8) + 0x8c),
             *(undefined4 *)(*(long *)(_NGUIText_TypeInfo_12d53c0 + 0xb8) + 0x28),0);
  lVar6 = *(long *)(_NGUIText_TypeInfo_12d53c0 + 0xb8);
  uVar5 = native_UnityEngine_Font__GetCharacterInfo_db404c
                    (lVar8,0x29,lVar6 + 0xc4,*(undefined4 *)(lVar6 + 0x8c),
                     *(undefined4 *)(lVar6 + 0x28),0);
  if ((uVar5 & 1) == 0) {
LAB_00808afc:
    if (((*(byte *)(_NGUIText_TypeInfo_12d53c0 + 0x133) >> 2 & 1) != 0) &&
       (*(int *)(_NGUIText_TypeInfo_12d53c0 + 0xe0) == 0)) {
      native_sub_4327ec();
    }
    native_UnityEngine_Font__RequestCharactersInTexture_db40bc
              (lVar8,_StringLiteral_A_12ec020,
               *(undefined4 *)(*(long *)(_NGUIText_TypeInfo_12d53c0 + 0xb8) + 0x8c),
               *(undefined4 *)(*(long *)(_NGUIText_TypeInfo_12d53c0 + 0xb8) + 0x28),0);
    lVar6 = *(long *)(_NGUIText_TypeInfo_12d53c0 + 0xb8);
    uVar5 = native_UnityEngine_Font__GetCharacterInfo_db404c
                      (lVar8,0x41,lVar6 + 0xc4,*(undefined4 *)(lVar6 + 0x8c),
                       *(undefined4 *)(lVar6 + 0x28),0);
    if ((uVar5 & 1) == 0) {
      fVar11 = 0.0;
      if (((*(byte *)(_NGUIText_TypeInfo_12d53c0 + 0x133) >> 2 & 1) != 0) &&
         (fVar11 = 0.0, *(int *)(_NGUIText_TypeInfo_12d53c0 + 0xe0) == 0)) {
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
  fVar11 = (((float)*(int *)(*(long *)(_NGUIText_TypeInfo_12d53c0 + 0xb8) + 0x8c) - (float)iVar3) +
           (float)iVar4) * 0.5 + (float)iVar3;
  dVar9 = (double)func_0x002c9600((double)fVar11,&dStack_28);
  if (0.0 <= fVar11) {
    if (dVar9 != 0.5) {
      fVar11 = (float)(int)(fVar11 + 0.5);
      goto LAB_00808c64;
    }
    fVar10 = 1.0;
  }
  else {
    if (dVar9 != -0.5) {
      fVar11 = (float)(int)(fVar11 + -0.5);
      goto LAB_00808c64;
    }
    fVar10 = -1.0;
  }
  fVar11 = (float)dStack_28;
  if (((long)dStack_28 & 1U) != 0) {
    fVar11 = (float)dStack_28 + fVar10;
  }
LAB_00808c64:
  *(float *)(*(long *)(_NGUIText_TypeInfo_12d53c0 + 0xb8) + 0x98) = fVar11;
  return;
}



/* NGUIText$$Update @ 0x8088c0
 * void NGUIText__Update (bool request, const MethodInfo* method); */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* NGUIText$$Update
   void NGUIText__Update (bool request, const MethodInfo* method); */

void native_NGUIText__Update_8088c0(ulong param_1)

{
  bool bVar1;
  undefined4 uVar2;
  int iVar3;
  int iVar4;
  ulong uVar5;
  long lVar6;
  long *plVar7;
  long lVar8;
  double dVar9;
  float fVar10;
  float fVar11;
  double dStack_28;
  
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
  uVar2 = native_UnityEngine_Mathf__RoundToInt_8e50f0
                    ((float)*(int *)(*(long *)(_NGUIText_TypeInfo_12d53c0 + 0xb8) + 0x1c) /
                     *(float *)(*(long *)(_NGUIText_TypeInfo_12d53c0 + 0xb8) + 0x24),0);
  lVar8 = _NGUIText_TypeInfo_12d53c0;
  *(undefined4 *)(*(long *)(_NGUIText_TypeInfo_12d53c0 + 0xb8) + 0x8c) = uVar2;
  lVar6 = *(long *)(lVar8 + 0xb8);
  *(float *)(lVar6 + 0x90) = *(float *)(lVar6 + 0x7c) * *(float *)(lVar6 + 0x20);
  lVar6 = *(long *)(lVar8 + 0xb8);
  *(float *)(lVar6 + 0x94) =
       (*(float *)(lVar6 + 0x80) + (float)*(int *)(lVar6 + 0x1c)) * *(float *)(lVar6 + 0x20);
  plVar7 = *(long **)(lVar8 + 0xb8);
  if (*plVar7 == 0) {
LAB_008089f8:
    bVar1 = false;
  }
  else {
    if (((*(byte *)(lVar8 + 0x133) >> 2 & 1) != 0) && (*(int *)(lVar8 + 0xe0) == 0)) {
      native_sub_4327ec();
      plVar7 = *(long **)(_NGUIText_TypeInfo_12d53c0 + 0xb8);
      lVar8 = _NGUIText_TypeInfo_12d53c0;
    }
    if ((char)plVar7[0xf] == '\0') goto LAB_008089f8;
    if (((*(byte *)(lVar8 + 0x133) >> 2 & 1) != 0) && (*(int *)(lVar8 + 0xe0) == 0)) {
      native_sub_4327ec();
      plVar7 = *(long **)(_NGUIText_TypeInfo_12d53c0 + 0xb8);
      lVar8 = _NGUIText_TypeInfo_12d53c0;
    }
    bVar1 = (int)plVar7[0x11] != 0;
  }
  if (((*(byte *)(lVar8 + 0x133) >> 2 & 1) != 0) && (*(int *)(lVar8 + 0xe0) == 0)) {
    native_sub_4327ec();
    lVar8 = _NGUIText_TypeInfo_12d53c0;
  }
  *(bool *)(*(long *)(lVar8 + 0xb8) + 0x9c) = bVar1;
  lVar8 = *(long *)(*(long *)(lVar8 + 0xb8) + 8);
  if (((*(byte *)(_UnityEngine_Object_TypeInfo_12d54e0 + 0x133) >> 2 & 1) != 0) &&
     (*(int *)(_UnityEngine_Object_TypeInfo_12d54e0 + 0xe0) == 0)) {
    native_sub_4327ec(_UnityEngine_Object_TypeInfo_12d54e0);
  }
  uVar5 = native_UnityEngine_Object__op_Inequality_8d76fc(lVar8,0,0);
  if ((uVar5 & 1) == 0) {
    return;
  }
  if ((param_1 & 1) == 0) {
    return;
  }
  if (((*(byte *)(_NGUIText_TypeInfo_12d53c0 + 0x133) >> 2 & 1) != 0) &&
     (*(int *)(_NGUIText_TypeInfo_12d53c0 + 0xe0) == 0)) {
    native_sub_4327ec();
  }
  if (lVar8 == 0) {
                    /* WARNING: Subroutine does not return */
    native_sub_432810();
  }
  native_UnityEngine_Font__RequestCharactersInTexture_db40bc
            (lVar8,_StringLiteral______12eb5e0,
             *(undefined4 *)(*(long *)(_NGUIText_TypeInfo_12d53c0 + 0xb8) + 0x8c),
             *(undefined4 *)(*(long *)(_NGUIText_TypeInfo_12d53c0 + 0xb8) + 0x28),0);
  lVar6 = *(long *)(_NGUIText_TypeInfo_12d53c0 + 0xb8);
  uVar5 = native_UnityEngine_Font__GetCharacterInfo_db404c
                    (lVar8,0x29,lVar6 + 0xc4,*(undefined4 *)(lVar6 + 0x8c),
                     *(undefined4 *)(lVar6 + 0x28),0);
  if ((uVar5 & 1) == 0) {
LAB_00808afc:
    if (((*(byte *)(_NGUIText_TypeInfo_12d53c0 + 0x133) >> 2 & 1) != 0) &&
       (*(int *)(_NGUIText_TypeInfo_12d53c0 + 0xe0) == 0)) {
      native_sub_4327ec();
    }
    native_UnityEngine_Font__RequestCharactersInTexture_db40bc
              (lVar8,_StringLiteral_A_12ec020,
               *(undefined4 *)(*(long *)(_NGUIText_TypeInfo_12d53c0 + 0xb8) + 0x8c),
               *(undefined4 *)(*(long *)(_NGUIText_TypeInfo_12d53c0 + 0xb8) + 0x28),0);
    lVar6 = *(long *)(_NGUIText_TypeInfo_12d53c0 + 0xb8);
    uVar5 = native_UnityEngine_Font__GetCharacterInfo_db404c
                      (lVar8,0x41,lVar6 + 0xc4,*(undefined4 *)(lVar6 + 0x8c),
                       *(undefined4 *)(lVar6 + 0x28),0);
    if ((uVar5 & 1) == 0) {
      fVar11 = 0.0;
      if (((*(byte *)(_NGUIText_TypeInfo_12d53c0 + 0x133) >> 2 & 1) != 0) &&
         (fVar11 = 0.0, *(int *)(_NGUIText_TypeInfo_12d53c0 + 0xe0) == 0)) {
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
  fVar11 = (((float)*(int *)(*(long *)(_NGUIText_TypeInfo_12d53c0 + 0xb8) + 0x8c) - (float)iVar3) +
           (float)iVar4) * 0.5 + (float)iVar3;
  dVar9 = (double)func_0x002c9600((double)fVar11,&dStack_28);
  if (0.0 <= fVar11) {
    if (dVar9 != 0.5) {
      fVar11 = (float)(int)(fVar11 + 0.5);
      goto LAB_00808c64;
    }
    fVar10 = 1.0;
  }
  else {
    if (dVar9 != -0.5) {
      fVar11 = (float)(int)(fVar11 + -0.5);
      goto LAB_00808c64;
    }
    fVar10 = -1.0;
  }
  fVar11 = (float)dStack_28;
  if (((long)dStack_28 & 1U) != 0) {
    fVar11 = (float)dStack_28 + fVar10;
  }
LAB_00808c64:
  *(float *)(*(long *)(_NGUIText_TypeInfo_12d53c0 + 0xb8) + 0x98) = fVar11;
  return;
}



/* NGUIText$$Prepare @ 0x808c84
 * void NGUIText__Prepare (System_String_o* text, const MethodInfo* method); */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* NGUIText$$Prepare
   void NGUIText__Prepare (System_String_o* text, const MethodInfo* method); */

void native_NGUIText__Prepare_808c84(long param_1)

{
  bool bVar1;
  int iVar2;
  undefined4 uVar3;
  int iVar4;
  ulong uVar5;
  undefined8 *puVar6;
  long *plVar7;
  long lVar8;
  int iVar9;
  undefined8 uVar10;
  int iVar11;
  int iStack_84;
  undefined8 uStack_80;
  undefined1 auStack_78 [4];
  undefined1 auStack_74 [4];
  undefined1 auStack_70 [4];
  undefined1 auStack_6c [4];
  byte abStack_68 [4];
  byte abStack_64 [4];
  
  if ((bRam0000000001340484 & 1) == 0) {
    native_sub_43273c(&NGUIText_TypeInfo_12d53c0);
    native_sub_43273c(&UnityEngine_Object_TypeInfo_12d54e0);
    native_sub_43273c(&System_Text_StringBuilder_TypeInfo_12d5f30);
    bRam0000000001340484 = 1;
  }
  abStack_64[0] = 0;
  abStack_68[0] = 0;
  auStack_6c[0] = 0;
  auStack_70[0] = 0;
  auStack_74[0] = 0;
  auStack_78[0] = 0;
  uStack_80 = 0;
  iStack_84 = 0;
  if (((*(byte *)(_NGUIText_TypeInfo_12d53c0 + 0x133) >> 2 & 1) != 0) &&
     (*(int *)(_NGUIText_TypeInfo_12d53c0 + 0xe0) == 0)) {
    native_sub_4327ec();
  }
  uVar10 = *(undefined8 *)(*(long *)(_NGUIText_TypeInfo_12d53c0 + 0xb8) + 8);
  if (((*(byte *)(_UnityEngine_Object_TypeInfo_12d54e0 + 0x133) >> 2 & 1) != 0) &&
     (*(int *)(_UnityEngine_Object_TypeInfo_12d54e0 + 0xe0) == 0)) {
    native_sub_4327ec(_UnityEngine_Object_TypeInfo_12d54e0);
  }
  uVar5 = native_UnityEngine_Object__op_Inequality_8d76fc(uVar10,0,0);
  if ((uVar5 & 1) == 0) {
    return;
  }
  if (((*(byte *)(_NGUIText_TypeInfo_12d53c0 + 0x133) >> 2 & 1) != 0) &&
     (*(int *)(_NGUIText_TypeInfo_12d53c0 + 0xe0) == 0)) {
    native_sub_4327ec();
  }
  lVar8 = *(long *)(_NGUIText_TypeInfo_12d53c0 + 0xb8);
  if (*(char *)(lVar8 + 0x78) != '\0') {
    if (((*(byte *)(_NGUIText_TypeInfo_12d53c0 + 0x133) >> 2 & 1) != 0) &&
       (*(int *)(_NGUIText_TypeInfo_12d53c0 + 0xe0) == 0)) {
      native_sub_4327ec();
      lVar8 = *(long *)(_NGUIText_TypeInfo_12d53c0 + 0xb8);
    }
    if (*(int *)(lVar8 + 0x88) != 0) {
      if (((*(byte *)(_NGUIText_TypeInfo_12d53c0 + 0x133) >> 2 & 1) != 0) &&
         (*(int *)(_NGUIText_TypeInfo_12d53c0 + 0xe0) == 0)) {
        native_sub_4327ec();
        lVar8 = *(long *)(_NGUIText_TypeInfo_12d53c0 + 0xb8);
      }
      lVar8 = *(long *)(lVar8 + 0xa0);
      if (lVar8 == 0) {
        uVar10 = native_sub_432808(_System_Text_StringBuilder_TypeInfo_12d5f30);
        native_System_Text_StringBuilder___ctor_a4881c(uVar10,0);
        if (((*(byte *)(_NGUIText_TypeInfo_12d53c0 + 0x133) >> 2 & 1) != 0) &&
           (*(int *)(_NGUIText_TypeInfo_12d53c0 + 0xe0) == 0)) {
          native_sub_4327ec();
        }
        puVar6 = (undefined8 *)(*(long *)(_NGUIText_TypeInfo_12d53c0 + 0xb8) + 0xa0);
        *puVar6 = uVar10;
        native_sub_4326e0(puVar6,uVar10);
      }
      else {
        if (((*(byte *)(_NGUIText_TypeInfo_12d53c0 + 0x133) >> 2 & 1) != 0) &&
           (*(int *)(_NGUIText_TypeInfo_12d53c0 + 0xe0) == 0)) {
          native_sub_4327ec();
          lVar8 = *(long *)(*(long *)(_NGUIText_TypeInfo_12d53c0 + 0xb8) + 0xa0);
          if (lVar8 == 0) goto LAB_008091a0;
        }
        native_System_Text_StringBuilder__set_Length_a4945c(lVar8,0,0);
      }
      abStack_64[0] = 0;
      abStack_68[0] = 0;
      auStack_6c[0] = 0;
      auStack_70[0] = 0;
      auStack_74[0] = 0;
      auStack_78[0] = 0;
      if (((*(byte *)(_NGUIText_TypeInfo_12d53c0 + 0x133) >> 2 & 1) != 0) &&
         (*(int *)(_NGUIText_TypeInfo_12d53c0 + 0xe0) == 0)) {
        native_sub_4327ec();
      }
      iVar9 = *(int *)(*(long *)(_NGUIText_TypeInfo_12d53c0 + 0xb8) + 0x28);
      uStack_80 = 0;
      iStack_84 = 0;
      if (param_1 != 0) {
        iVar4 = *(int *)(param_1 + 0x10);
        bVar1 = (*(byte *)(_NGUIText_TypeInfo_12d53c0 + 0x133) & 4) == 0;
        if (0 < iVar4) {
          do {
            if ((!bVar1) && (*(int *)(_NGUIText_TypeInfo_12d53c0 + 0xe0) == 0)) {
              native_sub_4327ec();
            }
            uVar5 = native_NGUIText__ParseSymbol_8091a4
                              (param_1,&iStack_84,0,0,(long)&uStack_80 + 4,&uStack_80,abStack_64,
                               abStack_68,auStack_6c,auStack_70,auStack_74,auStack_78);
            if ((uVar5 & 1) == 0) {
              if (((*(byte *)(_NGUIText_TypeInfo_12d53c0 + 0x133) >> 2 & 1) != 0) &&
                 (*(int *)(_NGUIText_TypeInfo_12d53c0 + 0xe0) == 0)) {
                native_sub_4327ec();
              }
              lVar8 = *(long *)(_NGUIText_TypeInfo_12d53c0 + 0xb8);
              if ((abStack_68[0] & abStack_64[0]) == 0) {
                if (abStack_64[0] == 0) {
                  iVar11 = *(int *)(lVar8 + 0x28);
                  if (abStack_68[0] != 0) {
                    iVar11 = 2;
                  }
                }
                else {
                  iVar11 = 1;
                }
              }
              else {
                iVar11 = 3;
              }
              if (iVar9 != iVar11) {
                if (((*(byte *)(_NGUIText_TypeInfo_12d53c0 + 0x133) >> 2 & 1) != 0) &&
                   (*(int *)(_NGUIText_TypeInfo_12d53c0 + 0xe0) == 0)) {
                  native_sub_4327ec();
                  lVar8 = *(long *)(_NGUIText_TypeInfo_12d53c0 + 0xb8);
                }
                if (*(long *)(lVar8 + 0xa0) == 0) goto LAB_008091a0;
                iVar2 = native_System_Text_StringBuilder__get_Length_a49204
                                  (*(long *)(lVar8 + 0xa0),0);
                if (iVar2 != 0) {
                  if (((*(byte *)(_NGUIText_TypeInfo_12d53c0 + 0x133) >> 2 & 1) != 0) &&
                     (*(int *)(_NGUIText_TypeInfo_12d53c0 + 0xe0) == 0)) {
                    native_sub_4327ec();
                  }
                  plVar7 = *(long **)(*(long *)(_NGUIText_TypeInfo_12d53c0 + 0xb8) + 0xa0);
                  if (plVar7 == (long *)0x0) goto LAB_008091a0;
                  lVar8 = *(long *)(*(long *)(_NGUIText_TypeInfo_12d53c0 + 0xb8) + 8);
                  uVar10 = (**(code **)(*plVar7 + 0x168))(plVar7,*(undefined8 *)(*plVar7 + 0x170));
                  if (lVar8 == 0) goto LAB_008091a0;
                  native_UnityEngine_Font__RequestCharactersInTexture_db40bc
                            (lVar8,uVar10,
                             *(undefined4 *)(*(long *)(_NGUIText_TypeInfo_12d53c0 + 0xb8) + 0x8c),
                             iVar9,0);
                }
                if (((*(byte *)(_NGUIText_TypeInfo_12d53c0 + 0x133) >> 2 & 1) != 0) &&
                   (*(int *)(_NGUIText_TypeInfo_12d53c0 + 0xe0) == 0)) {
                  native_sub_4327ec();
                }
                lVar8 = *(long *)(*(long *)(_NGUIText_TypeInfo_12d53c0 + 0xb8) + 0xa0);
                if (lVar8 == 0) goto LAB_008091a0;
                native_System_Text_StringBuilder__Clear_a49434(lVar8,0);
                iVar9 = iVar11;
              }
              if (((*(byte *)(_NGUIText_TypeInfo_12d53c0 + 0x133) >> 2 & 1) != 0) &&
                 (*(int *)(_NGUIText_TypeInfo_12d53c0 + 0xe0) == 0)) {
                native_sub_4327ec();
              }
              lVar8 = *(long *)(*(long *)(_NGUIText_TypeInfo_12d53c0 + 0xb8) + 0xa0);
              uVar3 = native_System_String__get_Chars_b03810(param_1,iStack_84,0);
              if (lVar8 == 0) goto LAB_008091a0;
              native_System_Text_StringBuilder__Append_a4a9d8(lVar8,uVar3,0);
            }
            else {
              iStack_84 = iStack_84 + -1;
            }
            iStack_84 = iStack_84 + 1;
            bVar1 = (*(byte *)(_NGUIText_TypeInfo_12d53c0 + 0x133) & 4) == 0;
          } while (iStack_84 < iVar4);
        }
        if ((!bVar1) && (*(int *)(_NGUIText_TypeInfo_12d53c0 + 0xe0) == 0)) {
          native_sub_4327ec();
        }
        lVar8 = *(long *)(*(long *)(_NGUIText_TypeInfo_12d53c0 + 0xb8) + 0xa0);
        if (lVar8 != 0) {
          iVar4 = native_System_Text_StringBuilder__get_Length_a49204(lVar8,0);
          if (iVar4 == 0) {
            return;
          }
          if (((*(byte *)(_NGUIText_TypeInfo_12d53c0 + 0x133) >> 2 & 1) != 0) &&
             (*(int *)(_NGUIText_TypeInfo_12d53c0 + 0xe0) == 0)) {
            native_sub_4327ec();
          }
          plVar7 = *(long **)(*(long *)(_NGUIText_TypeInfo_12d53c0 + 0xb8) + 0xa0);
          if (plVar7 != (long *)0x0) {
            uVar10 = (**(code **)(*plVar7 + 0x168))(plVar7,*(undefined8 *)(*plVar7 + 0x170));
            lVar8 = *(long *)(*(long *)(_NGUIText_TypeInfo_12d53c0 + 0xb8) + 8);
            if (lVar8 != 0) {
              native_UnityEngine_Font__RequestCharactersInTexture_db40bc
                        (lVar8,uVar10,
                         *(undefined4 *)(*(long *)(_NGUIText_TypeInfo_12d53c0 + 0xb8) + 0x8c),iVar9,
                         0);
              lVar8 = *(long *)(*(long *)(_NGUIText_TypeInfo_12d53c0 + 0xb8) + 0xa0);
              if (lVar8 != 0) {
                native_System_Text_StringBuilder__Clear_a49434(lVar8,0);
                return;
              }
            }
          }
        }
      }
      goto LAB_008091a0;
    }
  }
  if (((*(byte *)(_NGUIText_TypeInfo_12d53c0 + 0x133) >> 2 & 1) != 0) &&
     (*(int *)(_NGUIText_TypeInfo_12d53c0 + 0xe0) == 0)) {
    native_sub_4327ec();
  }
  lVar8 = *(long *)(_NGUIText_TypeInfo_12d53c0 + 0xb8);
  if (*(long *)(lVar8 + 8) != 0) {
    native_UnityEngine_Font__RequestCharactersInTexture_db40bc
              (*(long *)(lVar8 + 8),param_1,*(undefined4 *)(lVar8 + 0x8c),
               *(undefined4 *)(lVar8 + 0x28),0);
    return;
  }
LAB_008091a0:
                    /* WARNING: Subroutine does not return */
  native_sub_432810();
}



/* NGUIText$$GetSymbol @ 0x809ca4
 * BMSymbol_o* NGUIText__GetSymbol (System_String_o** text, int32_t index, int32_t textLength, const MethodInfo* method); */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* NGUIText$$GetSymbol
   BMSymbol_o* NGUIText__GetSymbol (System_String_o** text, int32_t index, int32_t textLength, const
   MethodInfo* method); */

undefined8
native_NGUIText__GetSymbol_809ca4(undefined8 param_1,undefined4 param_2,undefined4 param_3)

{
  undefined8 *puVar1;
  undefined8 uVar2;
  long lVar3;
  ulong uVar4;
  int *piVar5;
  long *plVar6;
  
  if ((bRam0000000001340485 & 1) == 0) {
    native_sub_43273c(&INGUIFont_TypeInfo_12d4c70);
    native_sub_43273c(&NGUIText_TypeInfo_12d53c0);
    bRam0000000001340485 = 1;
  }
  if (((*(byte *)(_NGUIText_TypeInfo_12d53c0 + 0x133) >> 2 & 1) != 0) &&
     (*(int *)(_NGUIText_TypeInfo_12d53c0 + 0xe0) == 0)) {
    native_sub_4327ec();
  }
  plVar6 = (long *)**(undefined8 **)(_NGUIText_TypeInfo_12d53c0 + 0xb8);
  if (plVar6 == (long *)0x0) {
    return 0;
  }
  if (((*(byte *)(_NGUIText_TypeInfo_12d53c0 + 0x133) >> 2 & 1) != 0) &&
     (*(int *)(_NGUIText_TypeInfo_12d53c0 + 0xe0) == 0)) {
    native_sub_4327ec();
    plVar6 = (long *)**(undefined8 **)(_NGUIText_TypeInfo_12d53c0 + 0xb8);
    if (plVar6 == (long *)0x0) {
                    /* WARNING: Subroutine does not return */
      native_sub_432810();
    }
  }
  lVar3 = *plVar6;
  if ((ulong)*(ushort *)(lVar3 + 0x12a) != 0) {
    uVar4 = 0;
    piVar5 = (int *)(*(long *)(lVar3 + 0xb0) + 8);
    do {
      if (*(long *)(piVar5 + -2) == _INGUIFont_TypeInfo_12d4c70) {
        puVar1 = (undefined8 *)(lVar3 + (long)(*piVar5 + 0x29) * 0x10 + 0x138);
        goto LAB_00809dbc;
      }
      uVar4 = uVar4 + 1;
      piVar5 = piVar5 + 4;
    } while (uVar4 < *(ushort *)(lVar3 + 0x12a));
  }
  puVar1 = (undefined8 *)native_sub_3c9b34(plVar6,_INGUIFont_TypeInfo_12d4c70,0x29);
LAB_00809dbc:
                    /* WARNING: Could not recover jumptable at 0x00809de0. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  uVar2 = (*(code *)*puVar1)(plVar6,param_1,param_2,param_3,puVar1[1]);
  return uVar2;
}



/* NGUIText$$GetGlyphWidth @ 0x809de8
 * float NGUIText__GetGlyphWidth (int32_t ch, int32_t prev, float fontScale, bool bold, bool italic, const MethodInfo* method); */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* NGUIText$$GetGlyphWidth
   float NGUIText__GetGlyphWidth (int32_t ch, int32_t prev, float fontScale, bool bold, bool italic,
   const MethodInfo* method); */

float native_NGUIText__GetGlyphWidth_809de8
                (float param_1,int param_2,int param_3,uint param_4,uint param_5)

{
  undefined4 uVar1;
  ushort uVar2;
  int iVar3;
  ulong uVar4;
  undefined8 *puVar5;
  long lVar6;
  ushort uVar7;
  undefined4 uVar8;
  int *piVar9;
  long *plVar10;
  undefined8 uVar11;
  float fVar12;
  int iVar13;
  int iVar14;
  
  if ((bRam0000000001340486 & 1) == 0) {
    native_sub_43273c(&INGUIFont_TypeInfo_12d4c70);
    native_sub_43273c(&NGUIText_TypeInfo_12d53c0);
    native_sub_43273c(&UnityEngine_Object_TypeInfo_12d54e0);
    bRam0000000001340486 = 1;
  }
  uVar7 = *(ushort *)(_NGUIText_TypeInfo_12d53c0 + 0x132);
  if ((uVar7 >> 10 & 1) == 0) {
    uVar7 = 0;
  }
  else {
    if (*(int *)(_NGUIText_TypeInfo_12d53c0 + 0xe0) == 0) {
      native_sub_4327ec();
      uVar7 = *(ushort *)(_NGUIText_TypeInfo_12d53c0 + 0x132);
    }
    uVar7 = uVar7 & 0x400;
  }
  lVar6 = *(long *)(_NGUIText_TypeInfo_12d53c0 + 0xb8);
  if ((param_2 == 0x20) && (*(int *)(lVar6 + 0x18) != 0)) {
    if ((uVar7 != 0) && (*(int *)(_NGUIText_TypeInfo_12d53c0 + 0xe0) == 0)) {
      native_sub_4327ec();
      lVar6 = *(long *)(_NGUIText_TypeInfo_12d53c0 + 0xb8);
    }
    if (*(long *)(lVar6 + 8) == 0) {
LAB_0080a170:
                    /* WARNING: Subroutine does not return */
      native_sub_432810();
    }
    fVar12 = *(float *)(lVar6 + 0x24);
    iVar13 = *(int *)(lVar6 + 0x18);
    iVar14 = *(int *)(lVar6 + 0x8c);
    iVar3 = native_UnityEngine_Font__get_fontSize_db3bf0(*(long *)(lVar6 + 8),0);
    iVar3 = native_UnityEngine_Mathf__RoundToInt_8e50f0
                      (fVar12 * (float)iVar13 * param_1 * ((float)iVar14 / (float)iVar3),0);
    fVar12 = (float)iVar3;
  }
  else {
    if ((uVar7 != 0) && (*(int *)(_NGUIText_TypeInfo_12d53c0 + 0xe0) == 0)) {
      native_sub_4327ec();
      lVar6 = *(long *)(_NGUIText_TypeInfo_12d53c0 + 0xb8);
    }
    uVar11 = *(undefined8 *)(lVar6 + 8);
    if (((*(byte *)(_UnityEngine_Object_TypeInfo_12d54e0 + 0x133) >> 2 & 1) != 0) &&
       (*(int *)(_UnityEngine_Object_TypeInfo_12d54e0 + 0xe0) == 0)) {
      native_sub_4327ec();
    }
    uVar4 = native_UnityEngine_Object__op_Inequality_8d76fc(uVar11,0,0);
    uVar2 = *(ushort *)(_NGUIText_TypeInfo_12d53c0 + 0x132);
    uVar7 = uVar2 & 0x400;
    if ((uVar4 & 1) == 0) {
      if (((uVar2 & 0x400) != 0) && (*(int *)(_NGUIText_TypeInfo_12d53c0 + 0xe0) == 0)) {
        native_sub_4327ec();
      }
      fVar12 = 0.0;
      plVar10 = (long *)**(undefined8 **)(_NGUIText_TypeInfo_12d53c0 + 0xb8);
      if (plVar10 != (long *)0x0) {
        iVar3 = 0x20;
        if (param_2 != 0x2009) {
          iVar3 = param_2;
        }
        if (((*(byte *)(_NGUIText_TypeInfo_12d53c0 + 0x133) >> 2 & 1) != 0) &&
           (*(int *)(_NGUIText_TypeInfo_12d53c0 + 0xe0) == 0)) {
          native_sub_4327ec();
          plVar10 = (long *)**(undefined8 **)(_NGUIText_TypeInfo_12d53c0 + 0xb8);
          if (plVar10 == (long *)0x0) {
            return 0.0;
          }
        }
        if (((*(byte *)(_NGUIText_TypeInfo_12d53c0 + 0x133) >> 2 & 1) != 0) &&
           (*(int *)(_NGUIText_TypeInfo_12d53c0 + 0xe0) == 0)) {
          native_sub_4327ec();
          plVar10 = (long *)**(undefined8 **)(_NGUIText_TypeInfo_12d53c0 + 0xb8);
          if (plVar10 == (long *)0x0) goto LAB_0080a170;
        }
        lVar6 = *plVar10;
        if ((ulong)*(ushort *)(lVar6 + 0x12a) != 0) {
          uVar4 = 0;
          piVar9 = (int *)(*(long *)(lVar6 + 0xb0) + 8);
          do {
            if (*(long *)(piVar9 + -2) == _INGUIFont_TypeInfo_12d4c70) {
              puVar5 = (undefined8 *)(lVar6 + (long)(*piVar9 + 2) * 0x10 + 0x138);
              goto LAB_0080a11c;
            }
            uVar4 = uVar4 + 1;
            piVar9 = piVar9 + 4;
          } while (uVar4 < *(ushort *)(lVar6 + 0x12a));
        }
        puVar5 = (undefined8 *)native_sub_3c9b34(plVar10,_INGUIFont_TypeInfo_12d4c70,2);
LAB_0080a11c:
        lVar6 = (*(code *)*puVar5)(plVar10,puVar5[1]);
        if (lVar6 == 0) goto LAB_0080a170;
        lVar6 = native_BMFont__GetGlyph_dd1c0c(lVar6,iVar3,0);
        if (lVar6 != 0) {
          iVar3 = *(int *)(lVar6 + 0x2c);
          if (param_3 != 0) {
            iVar13 = native_BMGlyph__GetKerning_dd1ed4(lVar6,param_3,0);
            iVar3 = iVar13 + (iVar3 >> (param_2 == 0x2009));
          }
          fVar12 = (float)iVar3 * param_1;
        }
      }
    }
    else {
      if (((uVar2 & 0x400) != 0) && (*(int *)(_NGUIText_TypeInfo_12d53c0 + 0xe0) == 0)) {
        native_sub_4327ec();
        uVar7 = *(ushort *)(_NGUIText_TypeInfo_12d53c0 + 0x132) & 0x400;
      }
      lVar6 = *(long *)(_NGUIText_TypeInfo_12d53c0 + 0xb8);
      uVar1 = *(undefined4 *)(lVar6 + 0x28);
      uVar8 = 2;
      if ((param_4 & param_5 & 1) != 0) {
        uVar8 = 3;
      }
      if ((param_4 & 1) != 0) {
        uVar1 = 1;
      }
      if ((param_5 & 1) == 0) {
        uVar8 = uVar1;
      }
      if ((uVar7 != 0) && (*(int *)(_NGUIText_TypeInfo_12d53c0 + 0xe0) == 0)) {
        native_sub_4327ec();
        lVar6 = *(long *)(_NGUIText_TypeInfo_12d53c0 + 0xb8);
      }
      if (*(long *)(lVar6 + 8) == 0) goto LAB_0080a170;
      uVar4 = native_UnityEngine_Font__GetCharacterInfo_db404c
                        (*(long *)(lVar6 + 8),param_2,lVar6 + 0xc4,*(undefined4 *)(lVar6 + 0x8c),
                         uVar8,0);
      fVar12 = 0.0;
      if ((uVar4 & 1) != 0) {
        if (((*(byte *)(_NGUIText_TypeInfo_12d53c0 + 0x133) >> 2 & 1) != 0) &&
           (*(int *)(_NGUIText_TypeInfo_12d53c0 + 0xe0) == 0)) {
          native_sub_4327ec();
        }
        iVar3 = native_UnityEngine_CharacterInfo__get_advance_db3618
                          (*(long *)(_NGUIText_TypeInfo_12d53c0 + 0xb8) + 0xc4,0);
        fVar12 = (float)iVar3 * param_1 *
                 *(float *)(*(long *)(_NGUIText_TypeInfo_12d53c0 + 0xb8) + 0x24);
      }
    }
  }
  return fVar12;
}



/* NGUIText$$GetGlyph @ 0x80a174
 * NGUIText_GlyphInfo_o* NGUIText__GetGlyph (int32_t ch, int32_t prev, bool bold, bool italic, float fontScale, const MethodInfo* method); */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* NGUIText$$GetGlyph
   NGUIText_GlyphInfo_o* NGUIText__GetGlyph (int32_t ch, int32_t prev, bool bold, bool italic, float
   fontScale, const MethodInfo* method); */

undefined8
native_NGUIText__GetGlyph_80a174(float param_1,int param_2,int param_3,uint param_4,uint param_5)

{
  undefined4 uVar1;
  ushort uVar2;
  int iVar3;
  int iVar4;
  ulong uVar5;
  undefined8 *puVar6;
  long lVar7;
  long *plVar8;
  long lVar9;
  ushort uVar10;
  long lVar11;
  int *piVar12;
  undefined8 uVar13;
  undefined4 uVar14;
  float fVar15;
  double dVar16;
  float fVar17;
  int iVar18;
  double dStack_48;
  
  if ((bRam0000000001340487 & 1) == 0) {
    native_sub_43273c(&INGUIFont_TypeInfo_12d4c70);
    native_sub_43273c(&NGUIFont_TypeInfo_12d53b0);
    native_sub_43273c(&NGUIText_TypeInfo_12d53c0);
    native_sub_43273c(&UnityEngine_Object_TypeInfo_12d54e0);
    bRam0000000001340487 = 1;
  }
  if (((*(byte *)(_NGUIText_TypeInfo_12d53c0 + 0x133) >> 2 & 1) != 0) &&
     (*(int *)(_NGUIText_TypeInfo_12d53c0 + 0xe0) == 0)) {
    native_sub_4327ec();
  }
  uVar13 = *(undefined8 *)(*(long *)(_NGUIText_TypeInfo_12d53c0 + 0xb8) + 8);
  if (((*(byte *)(_UnityEngine_Object_TypeInfo_12d54e0 + 0x133) >> 2 & 1) != 0) &&
     (*(int *)(_UnityEngine_Object_TypeInfo_12d54e0 + 0xe0) == 0)) {
    native_sub_4327ec(_UnityEngine_Object_TypeInfo_12d54e0);
  }
  uVar5 = native_UnityEngine_Object__op_Inequality_8d76fc(uVar13,0,0);
  uVar2 = *(ushort *)(_NGUIText_TypeInfo_12d53c0 + 0x132);
  uVar10 = uVar2 & 0x400;
  if ((uVar5 & 1) == 0) {
    if (((uVar2 & 0x400) != 0) && (*(int *)(_NGUIText_TypeInfo_12d53c0 + 0xe0) == 0)) {
      native_sub_4327ec();
    }
    plVar8 = (long *)**(undefined8 **)(_NGUIText_TypeInfo_12d53c0 + 0xb8);
    if (plVar8 == (long *)0x0) {
      return 0;
    }
    if (((*(byte *)(_NGUIText_TypeInfo_12d53c0 + 0x133) >> 2 & 1) != 0) &&
       (*(int *)(_NGUIText_TypeInfo_12d53c0 + 0xe0) == 0)) {
      native_sub_4327ec();
      plVar8 = (long *)**(undefined8 **)(_NGUIText_TypeInfo_12d53c0 + 0xb8);
      if (plVar8 == (long *)0x0) goto LAB_0080ad24;
    }
    lVar7 = *plVar8;
    if ((ulong)*(ushort *)(lVar7 + 0x12a) != 0) {
      uVar5 = 0;
      piVar12 = (int *)(*(long *)(lVar7 + 0xb0) + 8);
      do {
        if (*(long *)(piVar12 + -2) == _INGUIFont_TypeInfo_12d4c70) {
          puVar6 = (undefined8 *)(lVar7 + (long)(*piVar12 + 2) * 0x10 + 0x138);
          goto LAB_0080a3e4;
        }
        uVar5 = uVar5 + 1;
        piVar12 = piVar12 + 4;
      } while (uVar5 < *(ushort *)(lVar7 + 0x12a));
    }
    puVar6 = (undefined8 *)native_sub_3c9b34(plVar8,_INGUIFont_TypeInfo_12d4c70,2);
LAB_0080a3e4:
    lVar7 = (*(code *)*puVar6)(plVar8,puVar6[1]);
    if (lVar7 == 0) {
      return 0;
    }
    iVar4 = 0x20;
    if (param_2 != 0x2009) {
      iVar4 = param_2;
    }
    if (((*(byte *)(_NGUIText_TypeInfo_12d53c0 + 0x133) >> 2 & 1) != 0) &&
       (*(int *)(_NGUIText_TypeInfo_12d53c0 + 0xe0) == 0)) {
      native_sub_4327ec();
    }
    plVar8 = (long *)**(undefined8 **)(_NGUIText_TypeInfo_12d53c0 + 0xb8);
    if (plVar8 == (long *)0x0) goto LAB_0080ad24;
    lVar7 = *plVar8;
    if ((ulong)*(ushort *)(lVar7 + 0x12a) != 0) {
      uVar5 = 0;
      piVar12 = (int *)(*(long *)(lVar7 + 0xb0) + 8);
      do {
        if (*(long *)(piVar12 + -2) == _INGUIFont_TypeInfo_12d4c70) {
          puVar6 = (undefined8 *)(lVar7 + (long)(*piVar12 + 2) * 0x10 + 0x138);
          goto LAB_0080a728;
        }
        uVar5 = uVar5 + 1;
        piVar12 = piVar12 + 4;
      } while (uVar5 < *(ushort *)(lVar7 + 0x12a));
    }
    puVar6 = (undefined8 *)native_sub_3c9b34(plVar8,_INGUIFont_TypeInfo_12d4c70,2);
LAB_0080a728:
    lVar7 = (*(code *)*puVar6)(plVar8,puVar6[1]);
    if (lVar7 == 0) goto LAB_0080ad24;
    lVar7 = native_BMFont__GetGlyph_dd1c0c(lVar7,iVar4,0);
    if (lVar7 == 0) {
      return 0;
    }
    iVar3 = 0;
    if (param_3 != 0) {
      iVar3 = native_BMGlyph__GetKerning_dd1ed4(lVar7,param_3,0);
    }
    if (((*(byte *)(_NGUIText_TypeInfo_12d53c0 + 0x133) >> 2 & 1) != 0) &&
       (*(int *)(_NGUIText_TypeInfo_12d53c0 + 0xe0) == 0)) {
      native_sub_4327ec();
    }
    lVar11 = _NGUIText_TypeInfo_12d53c0;
    lVar9 = *(long *)(*(long *)(_NGUIText_TypeInfo_12d53c0 + 0xb8) + 0x10);
    if (lVar9 == 0) goto LAB_0080ad24;
    *(float *)(lVar9 + 0x10) = (float)(*(int *)(lVar7 + 0x24) + iVar3);
    lVar9 = *(long *)(*(long *)(lVar11 + 0xb8) + 0x10);
    if (lVar9 == 0) goto LAB_0080ad24;
    *(float *)(lVar9 + 0x1c) = (float)-*(int *)(lVar7 + 0x28);
    lVar9 = *(long *)(*(long *)(lVar11 + 0xb8) + 0x10);
    if (lVar9 == 0) goto LAB_0080ad24;
    *(float *)(lVar9 + 0x18) = *(float *)(lVar9 + 0x10) + (float)*(int *)(lVar7 + 0x1c);
    lVar9 = *(long *)(*(long *)(lVar11 + 0xb8) + 0x10);
    if (lVar9 == 0) goto LAB_0080ad24;
    *(float *)(lVar9 + 0x14) = *(float *)(lVar9 + 0x1c) - (float)*(int *)(lVar7 + 0x20);
    lVar9 = *(long *)(*(long *)(lVar11 + 0xb8) + 0x10);
    if (lVar9 == 0) goto LAB_0080ad24;
    *(float *)(lVar9 + 0x20) = (float)*(int *)(lVar7 + 0x14);
    lVar9 = *(long *)(*(long *)(lVar11 + 0xb8) + 0x10);
    if (lVar9 == 0) goto LAB_0080ad24;
    *(float *)(lVar9 + 0x24) = (float)(*(int *)(lVar7 + 0x20) + *(int *)(lVar7 + 0x18));
    lVar9 = *(long *)(*(long *)(lVar11 + 0xb8) + 0x10);
    if (lVar9 == 0) goto LAB_0080ad24;
    *(float *)(lVar9 + 0x30) = (float)(*(int *)(lVar7 + 0x1c) + *(int *)(lVar7 + 0x14));
    lVar9 = *(long *)(*(long *)(lVar11 + 0xb8) + 0x10);
    if (lVar9 == 0) goto LAB_0080ad24;
    *(float *)(lVar9 + 0x34) = (float)*(int *)(lVar7 + 0x18);
    lVar9 = *(long *)(*(long *)(lVar11 + 0xb8) + 0x10);
    if (lVar9 == 0) goto LAB_0080ad24;
    *(undefined4 *)(lVar9 + 0x28) = *(undefined4 *)(lVar9 + 0x20);
    lVar9 = *(long *)(*(long *)(lVar11 + 0xb8) + 0x10);
    if (lVar9 == 0) goto LAB_0080ad24;
    *(undefined4 *)(lVar9 + 0x2c) = *(undefined4 *)(lVar9 + 0x34);
    lVar9 = *(long *)(*(long *)(lVar11 + 0xb8) + 0x10);
    if (lVar9 == 0) goto LAB_0080ad24;
    *(undefined4 *)(lVar9 + 0x38) = *(undefined4 *)(lVar9 + 0x30);
    lVar9 = *(long *)(*(long *)(lVar11 + 0xb8) + 0x10);
    if (lVar9 == 0) goto LAB_0080ad24;
    *(undefined4 *)(lVar9 + 0x3c) = *(undefined4 *)(lVar9 + 0x24);
    iVar18 = *(int *)(lVar7 + 0x2c);
    if (iVar4 == 0x20) {
      if (((*(byte *)(lVar11 + 0x133) >> 2 & 1) != 0) && (*(int *)(lVar11 + 0xe0) == 0)) {
        native_sub_4327ec();
        lVar11 = _NGUIText_TypeInfo_12d53c0;
      }
      iVar4 = *(int *)(*(long *)(lVar11 + 0xb8) + 0x18);
      if (((iVar4 != 0) && (iVar18 = iVar4, (*(byte *)(lVar11 + 0x133) >> 2 & 1) != 0)) &&
         (*(int *)(lVar11 + 0xe0) == 0)) {
        native_sub_4327ec();
        lVar11 = _NGUIText_TypeInfo_12d53c0;
        iVar18 = *(int *)(*(long *)(_NGUIText_TypeInfo_12d53c0 + 0xb8) + 0x18);
      }
    }
    if (((*(byte *)(lVar11 + 0x133) >> 2 & 1) != 0) && (*(int *)(lVar11 + 0xe0) == 0)) {
      native_sub_4327ec();
      lVar11 = _NGUIText_TypeInfo_12d53c0;
    }
    plVar8 = (long *)(lVar11 + 0xb8);
    if (*(long *)(*plVar8 + 0x10) == 0) goto LAB_0080ad24;
    *(float *)(*(long *)(*plVar8 + 0x10) + 0x40) = (float)((iVar18 >> (param_2 == 0x2009)) + iVar3);
    if (*(long *)(*plVar8 + 0x10) == 0) goto LAB_0080ad24;
    *(undefined4 *)(*(long *)(*plVar8 + 0x10) + 0x44) = *(undefined4 *)(lVar7 + 0x30);
    if (param_1 == 1.0) goto LAB_0080acd0;
    if (((*(byte *)(lVar11 + 0x133) >> 2 & 1) != 0) && (*(int *)(lVar11 + 0xe0) == 0)) {
      native_sub_4327ec();
      plVar8 = (long *)(_NGUIText_TypeInfo_12d53c0 + 0xb8);
      lVar11 = _NGUIText_TypeInfo_12d53c0;
    }
    lVar7 = *(long *)(*(long *)(lVar11 + 0xb8) + 0x10);
    if (lVar7 == 0) goto LAB_0080ad24;
    *(ulong *)(lVar7 + 0x10) =
         CONCAT44((float)((ulong)*(undefined8 *)(lVar7 + 0x10) >> 0x20) * param_1,
                  (float)*(undefined8 *)(lVar7 + 0x10) * param_1);
    lVar7 = *(long *)(*plVar8 + 0x10);
    if (lVar7 == 0) goto LAB_0080ad24;
    *(ulong *)(lVar7 + 0x18) =
         CONCAT44(param_1 * (float)((ulong)*(undefined8 *)(lVar7 + 0x18) >> 0x20),
                  param_1 * (float)*(undefined8 *)(lVar7 + 0x18));
    lVar7 = *(long *)(*plVar8 + 0x10);
    if (lVar7 == 0) goto LAB_0080ad24;
    param_1 = *(float *)(lVar7 + 0x40) * param_1;
  }
  else {
    if (((uVar2 & 0x400) != 0) && (*(int *)(_NGUIText_TypeInfo_12d53c0 + 0xe0) == 0)) {
      native_sub_4327ec();
      uVar10 = *(ushort *)(_NGUIText_TypeInfo_12d53c0 + 0x132) & 0x400;
    }
    lVar7 = *(long *)(_NGUIText_TypeInfo_12d53c0 + 0xb8);
    uVar1 = *(undefined4 *)(lVar7 + 0x28);
    uVar14 = 2;
    if ((param_4 & param_5 & 1) != 0) {
      uVar14 = 3;
    }
    if ((param_4 & 1) != 0) {
      uVar1 = 1;
    }
    if ((param_5 & 1) == 0) {
      uVar14 = uVar1;
    }
    if ((uVar10 != 0) && (*(int *)(_NGUIText_TypeInfo_12d53c0 + 0xe0) == 0)) {
      native_sub_4327ec();
      lVar7 = *(long *)(_NGUIText_TypeInfo_12d53c0 + 0xb8);
    }
    if (*(long *)(lVar7 + 8) == 0) goto LAB_0080ad24;
    uVar5 = native_UnityEngine_Font__GetCharacterInfo_db404c
                      (*(long *)(lVar7 + 8),param_2,lVar7 + 0xc4,*(undefined4 *)(lVar7 + 0x8c),
                       uVar14,0);
    if ((uVar5 & 1) == 0) {
      return 0;
    }
    if (((*(byte *)(_NGUIText_TypeInfo_12d53c0 + 0x133) >> 2 & 1) != 0) &&
       (*(int *)(_NGUIText_TypeInfo_12d53c0 + 0xe0) == 0)) {
      native_sub_4327ec();
    }
    plVar8 = (long *)**(long **)(_NGUIText_TypeInfo_12d53c0 + 0xb8);
    if (plVar8 == (long *)0x0) {
LAB_0080a330:
      plVar8 = (long *)0x0;
    }
    else {
      if (*(byte *)(*plVar8 + 300) < *(byte *)(_NGUIFont_TypeInfo_12d53b0 + 300)) goto LAB_0080a330;
      if (*(long *)(*(long *)(*plVar8 + 200) +
                    (ulong)*(byte *)(_NGUIFont_TypeInfo_12d53b0 + 300) * 8 + -8) !=
          _NGUIFont_TypeInfo_12d53b0) {
        plVar8 = (long *)0x0;
      }
    }
    if (((*(byte *)(_UnityEngine_Object_TypeInfo_12d54e0 + 0x133) >> 2 & 1) != 0) &&
       (*(int *)(_UnityEngine_Object_TypeInfo_12d54e0 + 0xe0) == 0)) {
      native_sub_4327ec();
    }
    uVar5 = native_UnityEngine_Object__op_Inequality_8d76fc(plVar8,0,0);
    if ((uVar5 & 1) == 0) {
      iVar4 = 0;
    }
    else {
      if (plVar8 == (long *)0x0) goto LAB_0080ad24;
      iVar3 = native_NGUIFont__GetKerning_8042fc(plVar8,param_3,param_2);
      iVar4 = 0;
      if (iVar3 != 0) {
        if (((*(byte *)(_NGUIText_TypeInfo_12d53c0 + 0x133) >> 2 & 1) != 0) &&
           (*(int *)(_NGUIText_TypeInfo_12d53c0 + 0xe0) == 0)) {
          native_sub_4327ec();
        }
        lVar7 = *(long *)(*(long *)(_NGUIText_TypeInfo_12d53c0 + 0xb8) + 8);
        if (lVar7 == 0) goto LAB_0080ad24;
        iVar18 = *(int *)(*(long *)(_NGUIText_TypeInfo_12d53c0 + 0xb8) + 0x8c);
        iVar4 = native_UnityEngine_Font__get_fontSize_db3bf0(lVar7,0);
        iVar4 = native_UnityEngine_Mathf__RoundToInt_8e50f0
                          (((float)iVar18 / (float)iVar4) * (float)iVar3,0);
      }
    }
    if (((*(byte *)(_NGUIText_TypeInfo_12d53c0 + 0x133) >> 2 & 1) != 0) &&
       (*(int *)(_NGUIText_TypeInfo_12d53c0 + 0xe0) == 0)) {
      native_sub_4327ec();
    }
    lVar7 = *(long *)(*(long *)(_NGUIText_TypeInfo_12d53c0 + 0xb8) + 0x10);
    if (lVar7 == 0) goto LAB_0080ad24;
    iVar3 = native_UnityEngine_CharacterInfo__get_minX_db3740
                      (*(long *)(_NGUIText_TypeInfo_12d53c0 + 0xb8) + 0xc4,0);
    *(float *)(lVar7 + 0x10) = (float)(iVar3 + iVar4);
    lVar7 = *(long *)(*(long *)(_NGUIText_TypeInfo_12d53c0 + 0xb8) + 0x10);
    if (lVar7 == 0) goto LAB_0080ad24;
    iVar3 = native_UnityEngine_CharacterInfo__get_maxX_db3778
                      (*(long *)(_NGUIText_TypeInfo_12d53c0 + 0xb8) + 0xc4,0);
    *(float *)(lVar7 + 0x18) = (float)(iVar3 + iVar4);
    lVar7 = *(long *)(*(long *)(_NGUIText_TypeInfo_12d53c0 + 0xb8) + 0x10);
    if (lVar7 == 0) goto LAB_0080ad24;
    iVar3 = native_UnityEngine_CharacterInfo__get_maxY_db3708
                      (*(long *)(_NGUIText_TypeInfo_12d53c0 + 0xb8) + 0xc4,0);
    lVar11 = _NGUIText_TypeInfo_12d53c0;
    *(float *)(lVar7 + 0x14) =
         (float)iVar3 - *(float *)(*(long *)(_NGUIText_TypeInfo_12d53c0 + 0xb8) + 0x98);
    lVar7 = *(long *)(*(long *)(lVar11 + 0xb8) + 0x10);
    if (lVar7 == 0) goto LAB_0080ad24;
    iVar3 = native_UnityEngine_CharacterInfo__get_minY_db36a8(*(long *)(lVar11 + 0xb8) + 0xc4,0);
    lVar11 = _NGUIText_TypeInfo_12d53c0;
    fVar17 = (float)iVar3;
    *(float *)(lVar7 + 0x1c) =
         fVar17 - *(float *)(*(long *)(_NGUIText_TypeInfo_12d53c0 + 0xb8) + 0x98);
    lVar7 = *(long *)(*(long *)(lVar11 + 0xb8) + 0x10);
    uVar14 = native_UnityEngine_CharacterInfo__get_uvTopLeft_db39a8
                       (*(long *)(lVar11 + 0xb8) + 0xc4,0);
    if (lVar7 == 0) goto LAB_0080ad24;
    *(undefined4 *)(lVar7 + 0x20) = uVar14;
    *(float *)(lVar7 + 0x24) = fVar17;
    lVar7 = *(long *)(*(long *)(_NGUIText_TypeInfo_12d53c0 + 0xb8) + 0x10);
    uVar14 = native_UnityEngine_CharacterInfo__get_uvBottomLeft_db394c
                       (*(long *)(_NGUIText_TypeInfo_12d53c0 + 0xb8) + 0xc4,0);
    if (lVar7 == 0) goto LAB_0080ad24;
    *(undefined4 *)(lVar7 + 0x28) = uVar14;
    *(float *)(lVar7 + 0x2c) = fVar17;
    lVar7 = *(long *)(*(long *)(_NGUIText_TypeInfo_12d53c0 + 0xb8) + 0x10);
    uVar14 = native_UnityEngine_CharacterInfo__get_uvBottomRight_db3994
                       (*(long *)(_NGUIText_TypeInfo_12d53c0 + 0xb8) + 0xc4,0);
    if (lVar7 == 0) goto LAB_0080ad24;
    *(undefined4 *)(lVar7 + 0x30) = uVar14;
    *(float *)(lVar7 + 0x34) = fVar17;
    lVar7 = *(long *)(*(long *)(_NGUIText_TypeInfo_12d53c0 + 0xb8) + 0x10);
    uVar14 = native_UnityEngine_CharacterInfo__get_uvTopRight_db39a4
                       (*(long *)(_NGUIText_TypeInfo_12d53c0 + 0xb8) + 0xc4,0);
    if (lVar7 == 0) goto LAB_0080ad24;
    *(undefined4 *)(lVar7 + 0x38) = uVar14;
    *(float *)(lVar7 + 0x3c) = fVar17;
    lVar7 = *(long *)(*(long *)(_NGUIText_TypeInfo_12d53c0 + 0xb8) + 0x10);
    iVar3 = native_UnityEngine_CharacterInfo__get_advance_db3618
                      (*(long *)(_NGUIText_TypeInfo_12d53c0 + 0xb8) + 0xc4,0);
    if (lVar7 == 0) goto LAB_0080ad24;
    *(float *)(lVar7 + 0x40) = (float)(iVar3 + iVar4);
    lVar7 = _NGUIText_TypeInfo_12d53c0;
    lVar11 = *(long *)(*(long *)(_NGUIText_TypeInfo_12d53c0 + 0xb8) + 0x10);
    if (lVar11 == 0) goto LAB_0080ad24;
    *(undefined4 *)(lVar11 + 0x44) = 0;
    lVar7 = *(long *)(*(long *)(lVar7 + 0xb8) + 0x10);
    if (lVar7 == 0) goto LAB_0080ad24;
    fVar17 = *(float *)(lVar7 + 0x10);
    dVar16 = (double)func_0x002c9600((double)fVar17,&dStack_48);
    if (0.0 <= fVar17) {
      if (dVar16 == 0.5) {
        fVar17 = 1.0;
        goto LAB_0080a700;
      }
      fVar15 = (float)(int)(fVar17 + 0.5);
    }
    else if (dVar16 == -0.5) {
      fVar17 = -1.0;
LAB_0080a700:
      fVar15 = (float)dStack_48;
      if (((long)dStack_48 & 1U) != 0) {
        fVar15 = (float)dStack_48 + fVar17;
      }
    }
    else {
      fVar15 = (float)(int)(fVar17 + -0.5);
    }
    *(float *)(lVar7 + 0x10) = fVar15;
    lVar7 = *(long *)(*(long *)(_NGUIText_TypeInfo_12d53c0 + 0xb8) + 0x10);
    if (lVar7 == 0) goto LAB_0080ad24;
    fVar17 = *(float *)(lVar7 + 0x14);
    dVar16 = (double)func_0x002c9600((double)fVar17,&dStack_48);
    if (0.0 <= fVar17) {
      if (dVar16 == 0.5) {
        fVar17 = 1.0;
        goto LAB_0080aa44;
      }
      fVar15 = (float)(int)(fVar17 + 0.5);
    }
    else if (dVar16 == -0.5) {
      fVar17 = -1.0;
LAB_0080aa44:
      fVar15 = (float)dStack_48;
      if (((long)dStack_48 & 1U) != 0) {
        fVar15 = (float)dStack_48 + fVar17;
      }
    }
    else {
      fVar15 = (float)(int)(fVar17 + -0.5);
    }
    *(float *)(lVar7 + 0x14) = fVar15;
    lVar7 = *(long *)(*(long *)(_NGUIText_TypeInfo_12d53c0 + 0xb8) + 0x10);
    if (lVar7 == 0) goto LAB_0080ad24;
    fVar17 = *(float *)(lVar7 + 0x18);
    dVar16 = (double)func_0x002c9600((double)fVar17,&dStack_48);
    if (0.0 <= fVar17) {
      if (dVar16 == 0.5) {
        fVar17 = 1.0;
        goto LAB_0080aad0;
      }
      fVar15 = (float)(int)(fVar17 + 0.5);
    }
    else if (dVar16 == -0.5) {
      fVar17 = -1.0;
LAB_0080aad0:
      fVar15 = (float)dStack_48;
      if (((long)dStack_48 & 1U) != 0) {
        fVar15 = (float)dStack_48 + fVar17;
      }
    }
    else {
      fVar15 = (float)(int)(fVar17 + -0.5);
    }
    *(float *)(lVar7 + 0x18) = fVar15;
    lVar7 = *(long *)(*(long *)(_NGUIText_TypeInfo_12d53c0 + 0xb8) + 0x10);
    if (lVar7 == 0) goto LAB_0080ad24;
    fVar17 = *(float *)(lVar7 + 0x1c);
    dVar16 = (double)func_0x002c9600((double)fVar17,&dStack_48);
    if (0.0 <= fVar17) {
      if (dVar16 == 0.5) {
        fVar17 = 1.0;
        goto LAB_0080ab5c;
      }
      fVar15 = (float)(int)(fVar17 + 0.5);
    }
    else if (dVar16 == -0.5) {
      fVar17 = -1.0;
LAB_0080ab5c:
      fVar15 = (float)dStack_48;
      if (((long)dStack_48 & 1U) != 0) {
        fVar15 = (float)dStack_48 + fVar17;
      }
    }
    else {
      fVar15 = (float)(int)(fVar17 + -0.5);
    }
    *(float *)(lVar7 + 0x1c) = fVar15;
    if (param_2 == 0x20) {
      if (((*(byte *)(_NGUIText_TypeInfo_12d53c0 + 0x133) >> 2 & 1) != 0) &&
         (*(int *)(_NGUIText_TypeInfo_12d53c0 + 0xe0) == 0)) {
        native_sub_4327ec();
      }
      lVar7 = *(long *)(_NGUIText_TypeInfo_12d53c0 + 0xb8);
      if (*(int *)(lVar7 + 0x18) != 0) {
        if (((*(byte *)(_NGUIText_TypeInfo_12d53c0 + 0x133) >> 2 & 1) != 0) &&
           (*(int *)(_NGUIText_TypeInfo_12d53c0 + 0xe0) == 0)) {
          native_sub_4327ec();
          lVar7 = *(long *)(_NGUIText_TypeInfo_12d53c0 + 0xb8);
        }
        if (*(long *)(lVar7 + 8) == 0) goto LAB_0080ad24;
        lVar11 = *(long *)(lVar7 + 0x10);
        iVar3 = *(int *)(lVar7 + 0x18);
        iVar18 = *(int *)(lVar7 + 0x8c);
        iVar4 = native_UnityEngine_Font__get_fontSize_db3bf0(*(long *)(lVar7 + 8),0);
        iVar4 = native_UnityEngine_Mathf__RoundToInt_8e50f0
                          (((float)iVar18 / (float)iVar4) * (float)iVar3,0);
        if (lVar11 == 0) goto LAB_0080ad24;
        *(float *)(lVar11 + 0x40) = (float)iVar4;
      }
    }
    if (((*(byte *)(_NGUIText_TypeInfo_12d53c0 + 0x133) >> 2 & 1) != 0) &&
       (*(int *)(_NGUIText_TypeInfo_12d53c0 + 0xe0) == 0)) {
      native_sub_4327ec();
    }
    plVar8 = (long *)(_NGUIText_TypeInfo_12d53c0 + 0xb8);
    lVar7 = *plVar8;
    param_1 = *(float *)(lVar7 + 0x24) * param_1;
    lVar11 = _NGUIText_TypeInfo_12d53c0;
    if (param_1 == 1.0) goto LAB_0080acd0;
    if (((*(byte *)(_NGUIText_TypeInfo_12d53c0 + 0x133) >> 2 & 1) != 0) &&
       (*(int *)(_NGUIText_TypeInfo_12d53c0 + 0xe0) == 0)) {
      native_sub_4327ec();
      plVar8 = (long *)(_NGUIText_TypeInfo_12d53c0 + 0xb8);
      lVar7 = *plVar8;
    }
    lVar11 = _NGUIText_TypeInfo_12d53c0;
    lVar7 = *(long *)(lVar7 + 0x10);
    if (lVar7 == 0) {
LAB_0080ad24:
                    /* WARNING: Subroutine does not return */
      native_sub_432810();
    }
    *(ulong *)(lVar7 + 0x10) =
         CONCAT44((float)((ulong)*(undefined8 *)(lVar7 + 0x10) >> 0x20) * param_1,
                  (float)*(undefined8 *)(lVar7 + 0x10) * param_1);
    lVar7 = *(long *)(*plVar8 + 0x10);
    if (lVar7 == 0) goto LAB_0080ad24;
    *(ulong *)(lVar7 + 0x18) =
         CONCAT44(param_1 * (float)((ulong)*(undefined8 *)(lVar7 + 0x18) >> 0x20),
                  param_1 * (float)*(undefined8 *)(lVar7 + 0x18));
    lVar7 = *(long *)(*plVar8 + 0x10);
    if (lVar7 == 0) goto LAB_0080ad24;
    param_1 = param_1 * *(float *)(lVar7 + 0x40);
  }
  *(float *)(lVar7 + 0x40) = param_1;
LAB_0080acd0:
  if (((*(byte *)(lVar11 + 0x133) >> 2 & 1) != 0) && (*(int *)(lVar11 + 0xe0) == 0)) {
    native_sub_4327ec();
    lVar11 = _NGUIText_TypeInfo_12d53c0;
  }
  return *(undefined8 *)(*(long *)(lVar11 + 0xb8) + 0x10);
}



/* NGUIText$$ParseAlpha @ 0x80ad28
 * float NGUIText__ParseAlpha (System_String_o* text, int32_t index, const MethodInfo* method); */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* NGUIText$$ParseAlpha
   float NGUIText__ParseAlpha (System_String_o* text, int32_t index, const MethodInfo* method); */

undefined8 native_NGUIText__ParseAlpha_80ad28(long param_1,int param_2)

{
  undefined4 uVar1;
  int iVar2;
  uint uVar3;
  undefined8 uVar4;
  
  if ((bRam0000000001340488 & 1) == 0) {
    native_sub_43273c(&NGUIMath_TypeInfo_12d53b8);
    bRam0000000001340488 = 1;
  }
  if (param_1 == 0) {
                    /* WARNING: Subroutine does not return */
    native_sub_432810();
  }
  uVar1 = native_System_String__get_Chars_b03810(param_1,param_2 + 1,0);
  if (((*(byte *)(_NGUIMath_TypeInfo_12d53b8 + 0x133) >> 2 & 1) != 0) &&
     (*(int *)(_NGUIMath_TypeInfo_12d53b8 + 0xe0) == 0)) {
    native_sub_4327ec(_NGUIMath_TypeInfo_12d53b8);
  }
  iVar2 = native_NGUIMath__HexToDecimal_804ea8(uVar1,0xf);
  uVar4 = native_System_String__get_Chars_b03810(param_1,param_2 + 2,0);
  uVar3 = native_NGUIMath__HexToDecimal_804ea8(uVar4,0xf);
  if (0.0 <= (float)(int)(uVar3 | iVar2 << 4) / 255.0) {
    return 0;
  }
  return 0;
}



/* NGUIText$$ParseColor @ 0x80adf0
 * UnityEngine_Color_o NGUIText__ParseColor (System_String_o* text, int32_t offset, const MethodInfo* method); */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* NGUIText$$ParseColor
   UnityEngine_Color_o NGUIText__ParseColor (System_String_o* text, int32_t offset, const
   MethodInfo* method); */

undefined4 native_NGUIText__ParseColor_80adf0(long param_1,int param_2)

{
  undefined4 uVar1;
  int iVar2;
  uint uVar3;
  int iVar4;
  uint uVar5;
  int iVar6;
  uint uVar7;
  undefined8 uVar8;
  undefined8 uStack_50;
  undefined8 uStack_48;
  
  if ((bRam0000000001340489 & 1) == 0) {
    native_sub_43273c(&NGUIText_TypeInfo_12d53c0);
    bRam0000000001340489 = 1;
  }
  if (((*(byte *)(_NGUIText_TypeInfo_12d53c0 + 0x133) >> 2 & 1) != 0) &&
     (*(int *)(_NGUIText_TypeInfo_12d53c0 + 0xe0) == 0)) {
    native_sub_4327ec();
  }
  if ((bRam000000000134048a & 1) == 0) {
    native_sub_43273c(&NGUIMath_TypeInfo_12d53b8);
    bRam000000000134048a = 1;
  }
  if (param_1 != 0) {
    uVar1 = native_System_String__get_Chars_b03810(param_1,param_2,0);
    if (((*(byte *)(_NGUIMath_TypeInfo_12d53b8 + 0x133) >> 2 & 1) != 0) &&
       (*(int *)(_NGUIMath_TypeInfo_12d53b8 + 0xe0) == 0)) {
      native_sub_4327ec(_NGUIMath_TypeInfo_12d53b8);
    }
    iVar2 = native_NGUIMath__HexToDecimal_804ea8(uVar1,0xf);
    uVar8 = native_System_String__get_Chars_b03810(param_1,param_2 + 1,0);
    uVar3 = native_NGUIMath__HexToDecimal_804ea8(uVar8,0xf);
    uVar8 = native_System_String__get_Chars_b03810(param_1,param_2 + 2,0);
    iVar4 = native_NGUIMath__HexToDecimal_804ea8(uVar8,0xf);
    uVar8 = native_System_String__get_Chars_b03810(param_1,param_2 + 3,0);
    uVar5 = native_NGUIMath__HexToDecimal_804ea8(uVar8,0xf);
    uVar8 = native_System_String__get_Chars_b03810(param_1,param_2 + 4,0);
    iVar6 = native_NGUIMath__HexToDecimal_804ea8(uVar8,0xf);
    uVar8 = native_System_String__get_Chars_b03810(param_1,param_2 + 5,0);
    uVar7 = native_NGUIMath__HexToDecimal_804ea8(uVar8,0xf);
    uStack_50 = 0;
    uStack_48 = 0;
    native_UnityEngine_Color___ctor_8d9818
              ((float)(int)(uVar3 | iVar2 << 4) * 0.003921569,
               (float)(int)(uVar5 | iVar4 << 4) * 0.003921569,
               (float)(int)(uVar7 | iVar6 << 4) * 0.003921569,&uStack_50,0);
    return (undefined4)uStack_50;
  }
                    /* WARNING: Subroutine does not return */
  native_sub_432810();
}



/* NGUIText$$ParseColor24 @ 0x80ae60
 * UnityEngine_Color_o NGUIText__ParseColor24 (System_String_o* text, int32_t offset, const MethodInfo* method); */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* NGUIText$$ParseColor24
   UnityEngine_Color_o NGUIText__ParseColor24 (System_String_o* text, int32_t offset, const
   MethodInfo* method); */

undefined4 native_NGUIText__ParseColor24_80ae60(long param_1,int param_2)

{
  undefined4 uVar1;
  int iVar2;
  uint uVar3;
  int iVar4;
  uint uVar5;
  int iVar6;
  uint uVar7;
  undefined8 uVar8;
  undefined8 uStack_50;
  undefined8 uStack_48;
  
  if ((bRam000000000134048a & 1) == 0) {
    native_sub_43273c(&NGUIMath_TypeInfo_12d53b8);
    bRam000000000134048a = 1;
  }
  if (param_1 != 0) {
    uVar1 = native_System_String__get_Chars_b03810(param_1,param_2,0);
    if (((*(byte *)(_NGUIMath_TypeInfo_12d53b8 + 0x133) >> 2 & 1) != 0) &&
       (*(int *)(_NGUIMath_TypeInfo_12d53b8 + 0xe0) == 0)) {
      native_sub_4327ec(_NGUIMath_TypeInfo_12d53b8);
    }
    iVar2 = native_NGUIMath__HexToDecimal_804ea8(uVar1,0xf);
    uVar8 = native_System_String__get_Chars_b03810(param_1,param_2 + 1,0);
    uVar3 = native_NGUIMath__HexToDecimal_804ea8(uVar8,0xf);
    uVar8 = native_System_String__get_Chars_b03810(param_1,param_2 + 2,0);
    iVar4 = native_NGUIMath__HexToDecimal_804ea8(uVar8,0xf);
    uVar8 = native_System_String__get_Chars_b03810(param_1,param_2 + 3,0);
    uVar5 = native_NGUIMath__HexToDecimal_804ea8(uVar8,0xf);
    uVar8 = native_System_String__get_Chars_b03810(param_1,param_2 + 4,0);
    iVar6 = native_NGUIMath__HexToDecimal_804ea8(uVar8,0xf);
    uVar8 = native_System_String__get_Chars_b03810(param_1,param_2 + 5,0);
    uVar7 = native_NGUIMath__HexToDecimal_804ea8(uVar8,0xf);
    uStack_50 = 0;
    uStack_48 = 0;
    native_UnityEngine_Color___ctor_8d9818
              ((float)(int)(uVar3 | iVar2 << 4) * 0.003921569,
               (float)(int)(uVar5 | iVar4 << 4) * 0.003921569,
               (float)(int)(uVar7 | iVar6 << 4) * 0.003921569,&uStack_50,0);
    return (undefined4)uStack_50;
  }
                    /* WARNING: Subroutine does not return */
  native_sub_432810();
}



/* NGUIText$$ParseColor24 @ 0x80afcc
 * bool NGUIText__ParseColor24 (System_String_o** text, int32_t offset, UnityEngine_Color_o* c, const MethodInfo* method); */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* NGUIText$$ParseColor24
   bool NGUIText__ParseColor24 (System_String_o** text, int32_t offset, UnityEngine_Color_o* c,
   const MethodInfo* method); */

bool native_NGUIText__ParseColor24_80afcc
               (undefined1 param_1 [16],undefined4 param_2,undefined4 param_3,undefined4 param_4,
               long *param_5,int param_6,undefined8 *param_7)

{
  bool bVar1;
  undefined4 uVar2;
  uint uVar3;
  uint uVar4;
  uint uVar5;
  uint uVar6;
  uint uVar7;
  uint uVar8;
  undefined8 uVar9;
  undefined8 uStack_60;
  undefined8 uStack_58;
  
  if ((bRam000000000134048b & 1) == 0) {
    native_sub_43273c(&NGUIMath_TypeInfo_12d53b8);
    bRam000000000134048b = 1;
  }
  if (*param_5 != 0) {
    uVar2 = native_System_String__get_Chars_b03810(*param_5,param_6,0);
    if (((*(byte *)(_NGUIMath_TypeInfo_12d53b8 + 0x133) >> 2 & 1) != 0) &&
       (*(int *)(_NGUIMath_TypeInfo_12d53b8 + 0xe0) == 0)) {
      native_sub_4327ec(_NGUIMath_TypeInfo_12d53b8);
    }
    uVar3 = native_NGUIMath__HexToDecimal_804ea8(uVar2,0xffffffff);
    if (*param_5 != 0) {
      uVar9 = native_System_String__get_Chars_b03810(*param_5,param_6 + 1,0);
      uVar4 = native_NGUIMath__HexToDecimal_804ea8(uVar9,0xffffffff);
      if (*param_5 != 0) {
        uVar9 = native_System_String__get_Chars_b03810(*param_5,param_6 + 2,0);
        uVar5 = native_NGUIMath__HexToDecimal_804ea8(uVar9,0xffffffff);
        if (*param_5 != 0) {
          uVar9 = native_System_String__get_Chars_b03810(*param_5,param_6 + 3,0);
          uVar6 = native_NGUIMath__HexToDecimal_804ea8(uVar9,0xffffffff);
          if (*param_5 != 0) {
            uVar9 = native_System_String__get_Chars_b03810(*param_5,param_6 + 4,0);
            uVar7 = native_NGUIMath__HexToDecimal_804ea8(uVar9,0xffffffff);
            if (*param_5 != 0) {
              uVar9 = native_System_String__get_Chars_b03810(*param_5,param_6 + 5,0);
              uVar8 = native_NGUIMath__HexToDecimal_804ea8(uVar9,0xffffffff);
              bVar1 = (uVar4 | uVar3 | uVar5 | uVar6 | uVar7 | uVar8) == 0xffffffff;
              if (bVar1) {
                uVar2 = native_UnityEngine_Color__get_white_8d9e10(0);
                *(undefined4 *)param_7 = uVar2;
                *(undefined4 *)((long)param_7 + 4) = param_2;
                *(undefined4 *)(param_7 + 1) = param_3;
                *(undefined4 *)((long)param_7 + 0xc) = param_4;
              }
              else {
                uStack_60 = 0;
                uStack_58 = 0;
                native_UnityEngine_Color___ctor_8d9818
                          ((float)(int)(uVar4 | uVar3 << 4) * 0.003921569,
                           (float)(int)(uVar6 | uVar5 << 4) * 0.003921569,
                           (float)(int)(uVar8 | uVar7 << 4) * 0.003921569,&uStack_60,0);
                param_7[1] = uStack_58;
                *param_7 = uStack_60;
              }
              return !bVar1;
            }
          }
        }
      }
    }
  }
                    /* WARNING: Subroutine does not return */
  native_sub_432810();
}



/* NGUIText$$ParseColor32 @ 0x80b1ac
 * UnityEngine_Color_o NGUIText__ParseColor32 (System_String_o* text, int32_t offset, const MethodInfo* method); */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* NGUIText$$ParseColor32
   UnityEngine_Color_o NGUIText__ParseColor32 (System_String_o* text, int32_t offset, const
   MethodInfo* method); */

undefined4 native_NGUIText__ParseColor32_80b1ac(long param_1,int param_2)

{
  undefined4 uVar1;
  int iVar2;
  uint uVar3;
  int iVar4;
  uint uVar5;
  int iVar6;
  uint uVar7;
  int iVar8;
  uint uVar9;
  undefined8 uVar10;
  undefined8 uStack_50;
  undefined8 uStack_48;
  
  if ((bRam000000000134048c & 1) == 0) {
    native_sub_43273c(&NGUIMath_TypeInfo_12d53b8);
    bRam000000000134048c = 1;
  }
  if (param_1 != 0) {
    uVar1 = native_System_String__get_Chars_b03810(param_1,param_2,0);
    if (((*(byte *)(_NGUIMath_TypeInfo_12d53b8 + 0x133) >> 2 & 1) != 0) &&
       (*(int *)(_NGUIMath_TypeInfo_12d53b8 + 0xe0) == 0)) {
      native_sub_4327ec(_NGUIMath_TypeInfo_12d53b8);
    }
    iVar2 = native_NGUIMath__HexToDecimal_804ea8(uVar1,0xf);
    uVar10 = native_System_String__get_Chars_b03810(param_1,param_2 + 1,0);
    uVar3 = native_NGUIMath__HexToDecimal_804ea8(uVar10,0xf);
    uVar10 = native_System_String__get_Chars_b03810(param_1,param_2 + 2,0);
    iVar4 = native_NGUIMath__HexToDecimal_804ea8(uVar10,0xf);
    uVar10 = native_System_String__get_Chars_b03810(param_1,param_2 + 3,0);
    uVar5 = native_NGUIMath__HexToDecimal_804ea8(uVar10,0xf);
    uVar10 = native_System_String__get_Chars_b03810(param_1,param_2 + 4,0);
    iVar6 = native_NGUIMath__HexToDecimal_804ea8(uVar10,0xf);
    uVar10 = native_System_String__get_Chars_b03810(param_1,param_2 + 5,0);
    uVar7 = native_NGUIMath__HexToDecimal_804ea8(uVar10,0xf);
    uVar10 = native_System_String__get_Chars_b03810(param_1,param_2 + 6,0);
    iVar8 = native_NGUIMath__HexToDecimal_804ea8(uVar10,0xf);
    uVar10 = native_System_String__get_Chars_b03810(param_1,param_2 + 7,0);
    uVar9 = native_NGUIMath__HexToDecimal_804ea8(uVar10,0xf);
    uStack_50 = 0;
    uStack_48 = 0;
    native_UnityEngine_Color___ctor_8d980c
              ((float)(int)(uVar3 | iVar2 << 4) * 0.003921569,
               (float)(int)(uVar5 | iVar4 << 4) * 0.003921569,
               (float)(int)(uVar7 | iVar6 << 4) * 0.003921569,
               (float)(int)(uVar9 | iVar8 << 4) * 0.003921569,&uStack_50,0);
    return (undefined4)uStack_50;
  }
                    /* WARNING: Subroutine does not return */
  native_sub_432810();
}



/* NGUIText$$ParseColor32 @ 0x80b358
 * bool NGUIText__ParseColor32 (System_String_o** text, int32_t offset, UnityEngine_Color_o* c, const MethodInfo* method); */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* NGUIText$$ParseColor32
   bool NGUIText__ParseColor32 (System_String_o** text, int32_t offset, UnityEngine_Color_o* c,
   const MethodInfo* method); */

bool native_NGUIText__ParseColor32_80b358
               (undefined1 param_1 [16],undefined4 param_2,undefined4 param_3,undefined4 param_4,
               long *param_5,int param_6,undefined8 *param_7)

{
  bool bVar1;
  undefined4 uVar2;
  uint uVar3;
  uint uVar4;
  uint uVar5;
  uint uVar6;
  uint uVar7;
  uint uVar8;
  uint uVar9;
  uint uVar10;
  undefined8 uVar11;
  undefined8 uStack_70;
  undefined8 uStack_68;
  
  if ((bRam000000000134048d & 1) == 0) {
    native_sub_43273c(&NGUIMath_TypeInfo_12d53b8);
    bRam000000000134048d = 1;
  }
  if (*param_5 != 0) {
    uVar2 = native_System_String__get_Chars_b03810(*param_5,param_6,0);
    if (((*(byte *)(_NGUIMath_TypeInfo_12d53b8 + 0x133) >> 2 & 1) != 0) &&
       (*(int *)(_NGUIMath_TypeInfo_12d53b8 + 0xe0) == 0)) {
      native_sub_4327ec(_NGUIMath_TypeInfo_12d53b8);
    }
    uVar3 = native_NGUIMath__HexToDecimal_804ea8(uVar2,0xffffffff);
    if (*param_5 != 0) {
      uVar11 = native_System_String__get_Chars_b03810(*param_5,param_6 + 1,0);
      uVar4 = native_NGUIMath__HexToDecimal_804ea8(uVar11,0xffffffff);
      if (*param_5 != 0) {
        uVar11 = native_System_String__get_Chars_b03810(*param_5,param_6 + 2,0);
        uVar5 = native_NGUIMath__HexToDecimal_804ea8(uVar11,0xffffffff);
        if (*param_5 != 0) {
          uVar11 = native_System_String__get_Chars_b03810(*param_5,param_6 + 3,0);
          uVar6 = native_NGUIMath__HexToDecimal_804ea8(uVar11,0xffffffff);
          if (*param_5 != 0) {
            uVar11 = native_System_String__get_Chars_b03810(*param_5,param_6 + 4,0);
            uVar7 = native_NGUIMath__HexToDecimal_804ea8(uVar11,0xffffffff);
            if (*param_5 != 0) {
              uVar11 = native_System_String__get_Chars_b03810(*param_5,param_6 + 5,0);
              uVar8 = native_NGUIMath__HexToDecimal_804ea8(uVar11,0xffffffff);
              if (*param_5 != 0) {
                uVar11 = native_System_String__get_Chars_b03810(*param_5,param_6 + 6,0);
                uVar9 = native_NGUIMath__HexToDecimal_804ea8(uVar11,0xffffffff);
                if (*param_5 != 0) {
                  uVar11 = native_System_String__get_Chars_b03810(*param_5,param_6 + 7,0);
                  uVar10 = native_NGUIMath__HexToDecimal_804ea8(uVar11,0xffffffff);
                  bVar1 = (uVar4 | uVar3 | uVar5 | uVar6 | uVar7 | uVar8 | uVar9 | uVar10) ==
                          0xffffffff;
                  if (bVar1) {
                    uVar2 = native_UnityEngine_Color__get_white_8d9e10(0);
                    *(undefined4 *)param_7 = uVar2;
                    *(undefined4 *)((long)param_7 + 4) = param_2;
                    *(undefined4 *)(param_7 + 1) = param_3;
                    *(undefined4 *)((long)param_7 + 0xc) = param_4;
                  }
                  else {
                    uStack_70 = 0;
                    uStack_68 = 0;
                    native_UnityEngine_Color___ctor_8d980c
                              ((float)(int)(uVar4 | uVar3 << 4) * 0.003921569,
                               (float)(int)(uVar6 | uVar5 << 4) * 0.003921569,
                               (float)(int)(uVar8 | uVar7 << 4) * 0.003921569,
                               (float)(int)(uVar10 | uVar9 << 4) * 0.003921569,&uStack_70,0);
                    param_7[1] = uStack_68;
                    *param_7 = uStack_70;
                  }
                  return !bVar1;
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



/* NGUIText$$EncodeColor @ 0x80b59c
 * System_String_o* NGUIText__EncodeColor (UnityEngine_Color_o c, const MethodInfo* method); */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* NGUIText$$EncodeColor
   System_String_o* NGUIText__EncodeColor (UnityEngine_Color_o c, const MethodInfo* method); */

void native_NGUIText__EncodeColor_80b59c
               (undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

{
  if ((bRam000000000134048e & 1) == 0) {
    native_sub_43273c(&NGUIText_TypeInfo_12d53c0);
    bRam000000000134048e = 1;
  }
  if (((*(byte *)(_NGUIText_TypeInfo_12d53c0 + 0x133) >> 2 & 1) != 0) &&
     (*(int *)(_NGUIText_TypeInfo_12d53c0 + 0xe0) == 0)) {
    native_sub_4327ec();
  }
  if ((bRam0000000001340491 & 1) == 0) {
    native_sub_43273c(&NGUIMath_TypeInfo_12d53b8);
    bRam0000000001340491 = 1;
  }
  if (((*(byte *)(_NGUIMath_TypeInfo_12d53b8 + 0x133) >> 2 & 1) != 0) &&
     (*(int *)(_NGUIMath_TypeInfo_12d53b8 + 0xe0) == 0)) {
    native_sub_4327ec();
  }
  native_NGUIMath__ColorToInt_80509c(param_1,param_2,param_3,param_4);
  if ((bRam0000000001340463 & 1) == 0) {
    native_sub_43273c(&StringLiteral_X6_12f3100);
    bRam0000000001340463 = 1;
  }
  native_System_Int32__ToString_83c640(&stack0xffffffffffffffdc,_StringLiteral_X6_12f3100,0);
  return;
}



/* NGUIText$$EncodeColor @ 0x80b6b4
 * System_String_o* NGUIText__EncodeColor (System_String_o* text, UnityEngine_Color_o c, const MethodInfo* method); */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* NGUIText$$EncodeColor
   System_String_o* NGUIText__EncodeColor (System_String_o* text, UnityEngine_Color_o c, const
   MethodInfo* method); */

undefined8
native_NGUIText__EncodeColor_80b6b4
          (undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,long param_5)

{
  long *plVar1;
  long lVar2;
  long lVar3;
  undefined8 uVar4;
  long *plVar5;
  long lVar6;
  undefined8 uVar7;
  ulong uVar8;
  int iVar9;
  uint uVar10;
  long *plVar11;
  uint uVar12;
  
  if ((bRam000000000134048f & 1) == 0) {
    native_sub_43273c(&NGUIText_TypeInfo_12d53c0);
    native_sub_43273c(&string___TypeInfo_12d3398);
    native_sub_43273c(&StringLiteral__c___12f3338);
    native_sub_43273c(&StringLiteral___12f3410);
    native_sub_43273c(&StringLiteral______c__12f3248);
    bRam000000000134048f = 1;
  }
  plVar1 = (long *)native_sub_432750(_string___TypeInfo_12d3398,5);
  if (plVar1 == (long *)0x0) {
                    /* WARNING: Subroutine does not return */
    native_sub_432810();
  }
  if (_StringLiteral__c___12f3338 == 0) {
    lVar3 = 0;
  }
  else {
    lVar2 = native_sub_4327f8(_StringLiteral__c___12f3338,*(undefined8 *)(*plVar1 + 0x40));
    lVar3 = _StringLiteral__c___12f3338;
    if (lVar2 == 0) goto LAB_0080b8e0;
  }
  if ((int)plVar1[3] != 0) {
    plVar1[4] = lVar3;
    native_sub_4326e0();
    if (((*(byte *)(_NGUIText_TypeInfo_12d53c0 + 0x133) >> 2 & 1) != 0) &&
       (*(int *)(_NGUIText_TypeInfo_12d53c0 + 0xe0) == 0)) {
      native_sub_4327ec();
    }
    lVar3 = native_NGUIText__EncodeColor24_80b624(param_1,param_2,param_3,param_4);
    if ((lVar3 != 0) &&
       (lVar2 = native_sub_4327f8(lVar3,*(undefined8 *)(*plVar1 + 0x40)), lVar2 == 0)) {
LAB_0080b8e0:
      uVar4 = native_sub_432830();
                    /* WARNING: Subroutine does not return */
      native_sub_4327dc(uVar4,0);
    }
    if (1 < *(uint *)(plVar1 + 3)) {
      plVar1[5] = lVar3;
      native_sub_4326e0(plVar1 + 5,lVar3);
      if (_StringLiteral___12f3410 == 0) {
        lVar3 = 0;
      }
      else {
        lVar2 = native_sub_4327f8(_StringLiteral___12f3410,*(undefined8 *)(*plVar1 + 0x40));
        lVar3 = _StringLiteral___12f3410;
        if (lVar2 == 0) goto LAB_0080b8e0;
      }
      if (2 < *(uint *)(plVar1 + 3)) {
        plVar1[6] = lVar3;
        native_sub_4326e0();
        if ((param_5 != 0) &&
           (lVar3 = native_sub_4327f8(param_5,*(undefined8 *)(*plVar1 + 0x40)), lVar3 == 0))
        goto LAB_0080b8e0;
        if (3 < *(uint *)(plVar1 + 3)) {
          plVar1[7] = param_5;
          native_sub_4326e0(plVar1 + 7,param_5);
          if (_StringLiteral______c__12f3248 == 0) {
            lVar3 = 0;
          }
          else {
            lVar2 = native_sub_4327f8(_StringLiteral______c__12f3248,*(undefined8 *)(*plVar1 + 0x40)
                                     );
            lVar3 = _StringLiteral______c__12f3248;
            if (lVar2 == 0) goto LAB_0080b8e0;
          }
          if (4 < *(uint *)(plVar1 + 3)) {
            plVar1[8] = lVar3;
            native_sub_4326e0();
            if ((bRam0000000001342142 & 1) == 0) {
              native_sub_43273c(&string___TypeInfo_12d3398,0);
              native_sub_43273c(&string_TypeInfo_12d5f28);
              bRam0000000001342142 = 1;
            }
            if (plVar1 == (long *)0x0) {
              native_sub_432740(&System_ArgumentNullException_TypeInfo_12d3808);
              uVar4 = native_sub_432808();
              uVar7 = native_sub_432740(&StringLiteral_values_12f6a30);
              native_System_ArgumentNullException___ctor_951bd8(uVar4,uVar7,0);
code_r0x00b0df58:
              uVar7 = native_sub_432740(&Method_System_String_Concat___12e6c70);
                    /* WARNING: Subroutine does not return */
              native_sub_4327dc(uVar4,uVar7);
            }
            plVar5 = (long *)native_sub_432750(_string___TypeInfo_12d3398,(int)plVar1[3]);
            uVar10 = *(uint *)(plVar1 + 3);
            if ((int)uVar10 < 1) {
              iVar9 = 0;
            }
            else {
              lVar3 = 0;
              iVar9 = 0;
              plVar11 = plVar5 + 4;
              do {
                uVar12 = (uint)lVar3;
                if (uVar10 <= uVar12) goto code_r0x00b0df2c;
                lVar2 = plVar1[lVar3 + 4];
                if (lVar2 == 0) {
                  lVar2 = **(long **)(_string_TypeInfo_12d5f28 + 0xb8);
                }
                if (plVar5 == (long *)0x0) {
code_r0x00b0df38:
                    /* WARNING: Subroutine does not return */
                  native_sub_432810();
                }
                if ((lVar2 != 0) &&
                   (lVar6 = native_sub_4327f8(lVar2,*(undefined8 *)(*plVar5 + 0x40)), lVar6 == 0)) {
                  uVar4 = native_sub_432830();
                    /* WARNING: Subroutine does not return */
                  native_sub_4327dc(uVar4,0);
                }
                if (*(uint *)(plVar5 + 3) <= uVar12) {
code_r0x00b0df2c:
                  uVar4 = native_sub_43283c();
                    /* WARNING: Subroutine does not return */
                  native_sub_4327dc(uVar4,0);
                }
                *plVar11 = lVar2;
                native_sub_4326e0(plVar11,lVar2);
                if (*(uint *)(plVar5 + 3) <= uVar12) goto code_r0x00b0df2c;
                if (*plVar11 == 0) goto code_r0x00b0df38;
                iVar9 = *(int *)(*plVar11 + 0x10) + iVar9;
                if (iVar9 < 0) {
                  native_sub_432740(&System_OutOfMemoryException_TypeInfo_12d55c0);
                  uVar4 = native_sub_432808();
                  native_System_OutOfMemoryException___ctor_a93fdc(uVar4,0);
                  goto code_r0x00b0df58;
                }
                uVar10 = *(uint *)(plVar1 + 3);
                lVar3 = lVar3 + 1;
                plVar11 = plVar11 + 1;
              } while ((int)lVar3 < (int)uVar10);
            }
            uVar4 = native_sub_3bca18(iVar9);
            if (plVar5 == (long *)0x0) {
code_r0x00b0ddf0:
                    /* WARNING: Subroutine does not return */
              native_sub_432810();
            }
            uVar8 = (ulong)*(uint *)(plVar5 + 3);
            if (0 < (int)*(uint *)(plVar5 + 3)) {
              uVar10 = 0;
              iVar9 = 0;
              do {
                if ((uint)uVar8 <= uVar10) {
code_r0x00b0dde4:
                  uVar4 = native_sub_43283c();
                    /* WARNING: Subroutine does not return */
                  native_sub_4327dc(uVar4,0);
                }
                native_System_String__FillStringChecked_b0a62c
                          (uVar4,iVar9,plVar5[(long)(int)uVar10 + 4]);
                uVar8 = plVar5[3];
                if ((uint)uVar8 <= uVar10) goto code_r0x00b0dde4;
                lVar3 = plVar5[(long)(int)uVar10 + 4];
                if (lVar3 == 0) goto code_r0x00b0ddf0;
                uVar10 = uVar10 + 1;
                iVar9 = *(int *)(lVar3 + 0x10) + iVar9;
              } while ((int)uVar10 < (int)(uint)uVar8);
            }
            return uVar4;
          }
        }
      }
    }
  }
  uVar4 = native_sub_43283c();
                    /* WARNING: Subroutine does not return */
  native_sub_4327dc(uVar4,0);
}



/* NGUIText$$EncodeAlpha @ 0x80b8f0
 * System_String_o* NGUIText__EncodeAlpha (float a, const MethodInfo* method); */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* NGUIText$$EncodeAlpha
   System_String_o* NGUIText__EncodeAlpha (float a, const MethodInfo* method); */

void native_NGUIText__EncodeAlpha_80b8f0(float param_1)

{
  uint uVar1;
  undefined8 uVar2;
  uint uStack_24;
  
  if ((bRam0000000001340490 & 1) == 0) {
    native_sub_43273c(&NGUIMath_TypeInfo_12d53b8);
    bRam0000000001340490 = 1;
  }
  uVar2 = native_UnityEngine_Mathf__RoundToInt_8e50f0(param_1 * 255.0,0);
  uVar1 = native_UnityEngine_Mathf__Clamp_8e5208(uVar2,0,0xff,0);
  if (((*(byte *)(_NGUIMath_TypeInfo_12d53b8 + 0x133) >> 2 & 1) != 0) &&
     (*(int *)(_NGUIMath_TypeInfo_12d53b8 + 0xe0) == 0)) {
    native_sub_4327ec(_NGUIMath_TypeInfo_12d53b8);
  }
  if ((bRam0000000001340462 & 1) == 0) {
    uStack_24 = uVar1;
    native_sub_43273c(&StringLiteral_X2_12f30f0);
    bRam0000000001340462 = 1;
  }
  uStack_24 = uVar1 & 0xff;
  native_System_Int32__ToString_83c640(&uStack_24,_StringLiteral_X2_12f30f0,0);
  return;
}



/* NGUIText$$EncodeColor24 @ 0x80b624
 * System_String_o* NGUIText__EncodeColor24 (UnityEngine_Color_o c, const MethodInfo* method); */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* NGUIText$$EncodeColor24
   System_String_o* NGUIText__EncodeColor24 (UnityEngine_Color_o c, const MethodInfo* method); */

void native_NGUIText__EncodeColor24_80b624
               (undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

{
  if ((bRam0000000001340491 & 1) == 0) {
    native_sub_43273c(&NGUIMath_TypeInfo_12d53b8);
    bRam0000000001340491 = 1;
  }
  if (((*(byte *)(_NGUIMath_TypeInfo_12d53b8 + 0x133) >> 2 & 1) != 0) &&
     (*(int *)(_NGUIMath_TypeInfo_12d53b8 + 0xe0) == 0)) {
    native_sub_4327ec();
  }
  native_NGUIMath__ColorToInt_80509c(param_1,param_2,param_3,param_4);
  if ((bRam0000000001340463 & 1) == 0) {
    native_sub_43273c(&StringLiteral_X6_12f3100);
    bRam0000000001340463 = 1;
  }
  native_System_Int32__ToString_83c640(&stack0xffffffffffffffdc,_StringLiteral_X6_12f3100,0);
  return;
}



/* NGUIText$$EncodeColor32 @ 0x80b984
 * System_String_o* NGUIText__EncodeColor32 (UnityEngine_Color_o c, const MethodInfo* method); */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* NGUIText$$EncodeColor32
   System_String_o* NGUIText__EncodeColor32 (UnityEngine_Color_o c, const MethodInfo* method); */

void native_NGUIText__EncodeColor32_80b984
               (undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

{
  undefined4 uStack_14;
  
  if ((bRam0000000001340492 & 1) == 0) {
    native_sub_43273c(&NGUIMath_TypeInfo_12d53b8);
    bRam0000000001340492 = 1;
  }
  if (((*(byte *)(_NGUIMath_TypeInfo_12d53b8 + 0x133) >> 2 & 1) != 0) &&
     (*(int *)(_NGUIMath_TypeInfo_12d53b8 + 0xe0) == 0)) {
    native_sub_4327ec();
  }
  uStack_14 = native_NGUIMath__ColorToInt_80509c(param_1,param_2,param_3,param_4);
  if ((bRam0000000001340464 & 1) == 0) {
    native_sub_43273c(&StringLiteral_X8_12f3108);
    bRam0000000001340464 = 1;
  }
  native_System_Int32__ToString_83c640(&uStack_14,_StringLiteral_X8_12f3108,0);
  return;
}



/* NGUIText$$ParseSymbol @ 0x80ba10
 * bool NGUIText__ParseSymbol (System_String_o* text, int32_t* index, const MethodInfo* method); */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* NGUIText$$ParseSymbol
   bool NGUIText__ParseSymbol (System_String_o* text, int32_t* index, const MethodInfo* method); */

uint native_NGUIText__ParseSymbol_80ba10(undefined8 param_1,undefined8 param_2)

{
  uint uVar1;
  undefined4 uStack_48;
  undefined1 auStack_44 [4];
  undefined1 auStack_40 [4];
  undefined1 auStack_3c [4];
  undefined1 auStack_38 [4];
  undefined1 auStack_34 [4];
  undefined1 auStack_28 [4];
  undefined4 uStack_24;
  
  if ((bRam0000000001340493 & 1) == 0) {
    native_sub_43273c(&NGUIText_TypeInfo_12d53c0);
    bRam0000000001340493 = 1;
  }
  uStack_24 = 0;
  auStack_28[0] = 0;
  auStack_34[0] = 0;
  auStack_38[0] = 0;
  auStack_3c[0] = 0;
  auStack_40[0] = 0;
  auStack_44[0] = 0;
  uStack_48 = 0;
  if (((*(byte *)(_NGUIText_TypeInfo_12d53c0 + 0x133) >> 2 & 1) != 0) &&
     (*(int *)(_NGUIText_TypeInfo_12d53c0 + 0xe0) == 0)) {
    native_sub_4327ec();
  }
  uVar1 = native_NGUIText__ParseSymbol_8091a4
                    (param_1,param_2,0,0,&uStack_24,&uStack_48,auStack_28,auStack_34,auStack_38,
                     auStack_3c,auStack_40,auStack_44);
  return uVar1 & 1;
}



/* NGUIText$$IsHex @ 0x80bae0
 * bool NGUIText__IsHex (uint16_t ch, const MethodInfo* method); */

/* NGUIText$$IsHex
   bool NGUIText__IsHex (uint16_t ch, const MethodInfo* method); */

bool native_NGUIText__IsHex_80bae0(short param_1)

{
  if ((9 < (ushort)(param_1 - 0x30U)) && (5 < (ushort)(param_1 - 0x61U))) {
    return (ushort)(param_1 - 0x41U) < 6;
  }
  return true;
}



/* NGUIText$$ParseSymbol @ 0x8091a4
 * bool NGUIText__ParseSymbol (System_String_o* text, int32_t* index, BetterList_Color__o* colors, bool premultiply, int32_t* sub, float* fontScaleMult, bool* bold, bool* italic, bool* underline, bool* strike, bool* ignoreColor, bool* forceSpriteColor, const MethodInfo* method); */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* NGUIText$$ParseSymbol
   bool NGUIText__ParseSymbol (System_String_o* text, int32_t* index, BetterList_Color__o* colors,
   bool premultiply, int32_t* sub, float* fontScaleMult, bool* bold, bool* italic, bool* underline,
   bool* strike, bool* ignoreColor, bool* forceSpriteColor, const MethodInfo* method); */

undefined8
native_NGUIText__ParseSymbol_8091a4
          (long param_1,int *param_2,long param_3,ulong param_4,undefined4 *param_5,
          undefined4 *param_6,undefined1 *param_7,undefined1 *param_8,undefined1 *param_9,
          undefined1 *param_10,undefined1 *param_11,undefined1 *param_12)

{
  uint uVar1;
  short sVar2;
  ushort uVar3;
  ushort uVar4;
  uint uVar5;
  uint uVar6;
  int iVar7;
  int iVar8;
  ulong uVar9;
  undefined8 uVar10;
  long lVar11;
  undefined4 uVar12;
  undefined4 uVar13;
  undefined4 uVar14;
  float fVar15;
  undefined4 uVar16;
  undefined4 uStack_90;
  undefined4 uStack_8c;
  undefined8 uStack_88;
  undefined8 uStack_80;
  undefined8 uStack_78;
  long lStack_68;
  
  lStack_68 = param_1;
  if ((bRam0000000001340494 & 1) == 0) {
    native_sub_43273c(&Method_BetterList_Color__Add___12d8928);
    native_sub_43273c(&Method_BetterList_Color__RemoveAt___12d8938);
    native_sub_43273c(&NGUIMath_TypeInfo_12d53b8);
    native_sub_43273c(&NGUIText_TypeInfo_12d53c0);
    bRam0000000001340494 = 1;
  }
  uStack_80 = 0;
  uStack_78 = 0;
  uStack_90 = 0;
  uStack_8c = 0;
  uStack_88 = 0;
  if (param_1 == 0) goto LAB_00809c94;
  iVar7 = *(int *)(param_1 + 0x10);
  if (iVar7 < *param_2 + 3) {
    return 0;
  }
  sVar2 = native_System_String__get_Chars_b03810(param_1,*param_2,0);
  if (sVar2 != 0x5b) {
    return 0;
  }
  uVar5 = native_System_String__get_Chars_b03810(param_1,*param_2 + 1,0);
  uVar6 = native_System_String__get_Chars_b03810(param_1,*param_2 + 2,0);
  if ((uVar6 & 0xffff) == 0x3d) {
    if (((uVar5 & 0xffff | 0x20) == 0x79) &&
       (iVar8 = native_System_String__IndexOf_b0bf48(param_1,0x5d,*param_2 + 4,0), iVar8 != -1)) {
      uVar10 = native_System_String__Substring_b09fac(param_1,*param_2 + 3,iVar8 - (*param_2 + 3),0)
      ;
      uVar9 = native_System_Single__TryParse_af8aac(uVar10,param_6,0);
      if ((uVar9 & 1) != 0) {
        *param_5 = 0;
        iVar8 = iVar8 + 1;
        goto LAB_00809a78;
      }
    }
  }
  else if ((uVar6 & 0xffff) == 0x5d) {
    uVar1 = uVar5 & 0xffff;
    if (uVar1 < 0x55) {
      if (uVar1 < 0x49) {
        if (uVar1 == 0x2d) {
          if ((param_3 != 0) && (1 < *(int *)(param_3 + 0x18))) {
            native_BetterList_Color___RemoveAt_ba1ec8
                      (param_3,*(int *)(param_3 + 0x18) + -1,
                       _Method_BetterList_Color__RemoveAt___12d8938);
          }
          iVar8 = *param_2 + 3;
          goto LAB_00809a78;
        }
        if (uVar1 == 0x42) goto LAB_008094c8;
        if (uVar1 == 0x43) goto LAB_008093a8;
      }
      else {
        if (uVar1 == 0x49) {
LAB_0080947c:
          *param_2 = *param_2 + 3;
          *param_8 = 1;
          return 1;
        }
        if (uVar1 == 0x53) {
LAB_008094ac:
          *param_2 = *param_2 + 3;
LAB_008094c0:
          *param_10 = 1;
          return 1;
        }
        if (uVar1 == 0x54) goto LAB_00809494;
      }
    }
    else if (uVar1 < 0x69) {
      if (uVar1 == 0x55) {
LAB_008093ec:
        *param_2 = *param_2 + 3;
        *param_9 = 1;
        return 1;
      }
      if (uVar1 == 0x62) {
LAB_008094c8:
        *param_2 = *param_2 + 3;
        *param_7 = 1;
        return 1;
      }
      if (uVar1 == 99) {
LAB_008093a8:
        *param_2 = *param_2 + 3;
        param_10 = param_11;
        goto LAB_008094c0;
      }
    }
    else if (uVar1 < 0x74) {
      if (uVar1 == 0x69) goto LAB_0080947c;
      if (uVar1 == 0x73) goto LAB_008094ac;
    }
    else {
      if (uVar1 == 0x74) {
LAB_00809494:
        *param_2 = *param_2 + 3;
        param_10 = param_12;
        goto LAB_008094c0;
      }
      if (uVar1 == 0x75) goto LAB_008093ec;
    }
  }
  if (iVar7 < *param_2 + 4) {
    return 0;
  }
  uVar3 = native_System_String__get_Chars_b03810(param_1,*param_2 + 3,0);
  if (uVar3 == 0x5d) {
    if ((uVar5 & 0xffff) == 0x2f) {
      uVar1 = uVar6 & 0xffff;
      if (uVar1 < 0x62) {
        if (uVar1 < 0x53) {
          if (uVar1 == 0x42) goto LAB_008097e0;
          if (uVar1 == 0x43) goto LAB_008097f4;
          if (uVar1 == 0x49) goto LAB_0080978c;
        }
        else {
          switch(uVar1) {
          case 0x53:
            goto code_r0x00809508;
          case 0x54:
            goto code_r0x008097a0;
          case 0x55:
            goto code_r0x008097b4;
          case 0x59:
            goto code_r0x008097c8;
          }
        }
      }
      else if (uVar1 < 0x73) {
        if (uVar1 == 0x62) {
LAB_008097e0:
          *param_2 = *param_2 + 4;
          *param_7 = 0;
          return 1;
        }
        if (uVar1 == 99) {
LAB_008097f4:
          *param_2 = *param_2 + 4;
          goto code_r0x00809804;
        }
        if (uVar1 == 0x69) {
LAB_0080978c:
          *param_2 = *param_2 + 4;
          *param_8 = 0;
          return 1;
        }
      }
      else {
        switch(uVar1) {
        case 0x73:
code_r0x00809508:
          *param_2 = *param_2 + 4;
          param_11 = param_10;
code_r0x00809804:
          *param_11 = 0;
          return 1;
        case 0x74:
code_r0x008097a0:
          *param_2 = *param_2 + 4;
          param_11 = param_12;
          goto code_r0x00809804;
        case 0x75:
code_r0x008097b4:
          *param_2 = *param_2 + 4;
          *param_9 = 0;
          return 1;
        case 0x79:
code_r0x008097c8:
          *param_2 = *param_2 + 4;
          *param_5 = 0;
          *param_6 = 0;
          return 1;
        }
      }
    }
    if (((*(byte *)(_NGUIText_TypeInfo_12d53c0 + 0x133) >> 2 & 1) != 0) &&
       (*(int *)(_NGUIText_TypeInfo_12d53c0 + 0xe0) == 0)) {
      native_sub_4327ec();
    }
    if (((uVar5 - 0x30 & 0xffff) < 10) || (((uVar5 & 0xffffffdf) - 0x41 & 0xffff) < 6)) {
      if (((*(byte *)(_NGUIText_TypeInfo_12d53c0 + 0x133) >> 2 & 1) != 0) &&
         (*(int *)(_NGUIText_TypeInfo_12d53c0 + 0xe0) == 0)) {
        native_sub_4327ec();
      }
      if (((uVar6 - 0x30 & 0xffff) < 10) || (((uVar6 & 0xffffffdf) - 0x41 & 0xffff) < 6)) {
        if (((*(byte *)(_NGUIMath_TypeInfo_12d53b8 + 0x133) >> 2 & 1) != 0) &&
           (*(int *)(_NGUIMath_TypeInfo_12d53b8 + 0xe0) == 0)) {
          native_sub_4327ec();
        }
        iVar7 = native_NGUIMath__HexToDecimal_804ea8(uVar5,0xf);
        uVar5 = native_NGUIMath__HexToDecimal_804ea8(uVar6,0xf);
        if (((*(byte *)(_NGUIText_TypeInfo_12d53c0 + 0x133) >> 2 & 1) != 0) &&
           (*(int *)(_NGUIText_TypeInfo_12d53c0 + 0xe0) == 0)) {
          native_sub_4327ec(_NGUIText_TypeInfo_12d53c0);
        }
        *(float *)(*(long *)(_NGUIText_TypeInfo_12d53c0 + 0xb8) + 0xc0) =
             (float)(int)(uVar5 | iVar7 << 4) / 255.0;
        iVar8 = *param_2 + 4;
        goto LAB_00809a78;
      }
    }
  }
  if (iVar7 < *param_2 + 5) {
    return 0;
  }
  uVar4 = native_System_String__get_Chars_b03810(param_1,*param_2 + 4,0);
  if (((uVar5 & 0xffff | 0x20) == 0x73) && ((uVar6 & 0xffff | 0x20) == 0x75)) {
    if (uVar3 < 0x62) {
      if (uVar3 == 0x42) {
LAB_0080968c:
        if (uVar4 == 0x3d) {
          iVar8 = native_System_String__IndexOf_b0bf48(param_1,0x5d,*param_2 + 4,0);
          if (iVar8 != -1) {
            uVar10 = native_System_String__Substring_b09fac
                               (param_1,*param_2 + 5,iVar8 - (*param_2 + 5),0);
            uVar9 = native_System_Single__TryParse_af8aac(uVar10,param_6,0);
            if ((uVar9 & 1) != 0) {
              iVar8 = iVar8 + 1;
              *param_5 = 1;
              goto LAB_00809864;
            }
          }
        }
        else if (uVar4 == 0x5d) {
          *param_5 = 1;
          *param_6 = 0x3f400000;
          iVar8 = *param_2 + 5;
LAB_00809864:
          *param_2 = iVar8;
          return 1;
        }
      }
      else if (uVar3 == 0x50) goto LAB_00809744;
    }
    else if (uVar3 == 0x70) {
LAB_00809744:
      if (uVar4 == 0x3d) {
        iVar8 = native_System_String__IndexOf_b0bf48(param_1,0x5d,*param_2 + 4,0);
        if (iVar8 != -1) {
          uVar10 = native_System_String__Substring_b09fac
                             (param_1,*param_2 + 5,iVar8 - (*param_2 + 5),0);
          uVar9 = native_System_Single__TryParse_af8aac(uVar10,param_6,0);
          if ((uVar9 & 1) != 0) {
            *param_5 = 2;
            *param_2 = iVar8 + 1;
            return 1;
          }
        }
      }
      else if (uVar4 == 0x5d) {
        *param_5 = 2;
        *param_6 = 0x3f400000;
        iVar8 = *param_2 + 5;
        goto LAB_00809a78;
      }
    }
    else if (uVar3 == 0x62) goto LAB_0080968c;
  }
  if (iVar7 < *param_2 + 6) {
    return 0;
  }
  sVar2 = native_System_String__get_Chars_b03810(param_1,*param_2 + 5,0);
  if (((uVar5 & 0xffff) == 0x2f) && (sVar2 == 0x5d)) {
    uVar1 = uVar6 & 0xffff;
    if (uVar1 < 0x73) {
      if (uVar1 != 0x53) {
LAB_00809998:
        if ((uVar6 & 0xffff) != 0x55) goto LAB_008099c4;
        goto LAB_008099a0;
      }
LAB_00809960:
      if ((uVar3 | 0x20) != 0x75) goto LAB_00809998;
      if (uVar4 < 0x62) {
        if ((uVar4 != 0x42) && (uVar4 != 0x50)) goto LAB_00809a84;
LAB_00809a68:
        *param_5 = 0;
        *param_6 = 0;
        goto LAB_00809a70;
      }
      if ((uVar4 == 0x70) || (uVar4 == 0x62)) goto LAB_00809a68;
    }
    else {
      if (uVar1 != 0x75) {
        if (uVar1 == 0x73) goto LAB_00809960;
        goto LAB_008099c4;
      }
LAB_008099a0:
      if ((uVar3 | 0x20) != 0x72) goto LAB_008099c4;
      if ((uVar4 | 0x20) == 0x6c) {
LAB_00809a70:
        iVar8 = *param_2 + 6;
        goto LAB_00809a78;
      }
    }
  }
  else {
LAB_008099c4:
    if (((((uVar3 == 0x6c) && ((uVar6 & 0xffff) == 0x72)) && ((uVar5 & 0xffff) == 0x75)) &&
        (uVar4 == 0x3d)) ||
       ((((uVar5 & 0xffff) == 0x55 && ((uVar6 & 0xffff) == 0x52)) && (uVar3 == 0x4c)))) {
      iVar8 = native_System_String__IndexOf_b0bf48(param_1,0x5d,*param_2 + 4,0);
      if (iVar8 == -1) {
        iVar8 = *(int *)(param_1 + 0x10);
      }
      else {
        iVar8 = iVar8 + 1;
      }
      goto LAB_00809a78;
    }
  }
LAB_00809a84:
  if (iVar7 < *param_2 + 8) {
    return 0;
  }
  sVar2 = native_System_String__get_Chars_b03810(param_1,*param_2 + 7,0);
  iVar8 = *param_2;
  if (sVar2 == 0x5d) {
    if (((*(byte *)(_NGUIText_TypeInfo_12d53c0 + 0x133) >> 2 & 1) != 0) &&
       (*(int *)(_NGUIText_TypeInfo_12d53c0 + 0xe0) == 0)) {
      native_sub_4327ec();
    }
    uVar9 = native_NGUIText__ParseColor24_80afcc(&lStack_68,iVar8 + 1,&uStack_80);
    if ((uVar9 & 1) == 0) {
      return 0;
    }
    if ((param_3 != 0) && (uVar5 = *(int *)(param_3 + 0x18) - 1, 0 < *(int *)(param_3 + 0x18))) {
      lVar11 = *(long *)(param_3 + 0x10);
      if (lVar11 == 0) {
LAB_00809c94:
                    /* WARNING: Subroutine does not return */
        native_sub_432810();
      }
      if (*(uint *)(lVar11 + 0x18) <= uVar5) {
        uVar10 = native_sub_43283c();
                    /* WARNING: Subroutine does not return */
        native_sub_4327dc(uVar10,0);
      }
      fVar15 = *(float *)(lVar11 + (long)(int)uVar5 * 0x10 + 0x2c);
      uStack_78 = CONCAT44(fVar15,(undefined4)uStack_78);
      if ((fVar15 == 1.0) || ((param_4 & 1) == 0)) {
        uVar12 = (undefined4)uStack_80;
      }
      else {
        if (((*(byte *)(_NGUIText_TypeInfo_12d53c0 + 0x133) >> 2 & 1) != 0) &&
           (*(int *)(_NGUIText_TypeInfo_12d53c0 + 0xe0) == 0)) {
          native_sub_4327ec();
        }
        lVar11 = *(long *)(_NGUIText_TypeInfo_12d53c0 + 0xb8);
        uVar13 = *(undefined4 *)(lVar11 + 0xac);
        uVar14 = *(undefined4 *)(lVar11 + 0xb0);
        uVar16 = *(undefined4 *)(lVar11 + 0xb4);
        uVar12 = native_UnityEngine_Color__Lerp_8d9d50(*(undefined4 *)(lVar11 + 0xa8),0);
        uStack_80 = CONCAT44(uVar13,uVar12);
        uStack_78 = CONCAT44(uVar16,uVar14);
      }
      native_BetterList_Color___Add_ba1944(uVar12,param_3,_Method_BetterList_Color__Add___12d8928);
    }
    iVar8 = *param_2 + 8;
  }
  else {
    if ((iVar7 < iVar8 + 10) ||
       (sVar2 = native_System_String__get_Chars_b03810(param_1,iVar8 + 9,0), sVar2 != 0x5d)) {
      return 0;
    }
    iVar7 = *param_2;
    if (((*(byte *)(_NGUIText_TypeInfo_12d53c0 + 0x133) >> 2 & 1) != 0) &&
       (*(int *)(_NGUIText_TypeInfo_12d53c0 + 0xe0) == 0)) {
      native_sub_4327ec();
    }
    uVar9 = native_NGUIText__ParseColor32_80b358(&lStack_68,iVar7 + 1,&uStack_90);
    if ((uVar9 & 1) == 0) {
      return 0;
    }
    if (param_3 != 0) {
      if (((param_4 & 1) != 0) && (uStack_88._4_4_ != 1.0)) {
        if (((*(byte *)(_NGUIText_TypeInfo_12d53c0 + 0x133) >> 2 & 1) != 0) &&
           (*(int *)(_NGUIText_TypeInfo_12d53c0 + 0xe0) == 0)) {
          native_sub_4327ec();
        }
        lVar11 = *(long *)(_NGUIText_TypeInfo_12d53c0 + 0xb8);
        uVar12 = *(undefined4 *)(lVar11 + 0xac);
        uVar13 = *(undefined4 *)(lVar11 + 0xb0);
        uVar14 = *(undefined4 *)(lVar11 + 0xb4);
        uStack_90 = native_UnityEngine_Color__Lerp_8d9d50(*(undefined4 *)(lVar11 + 0xa8),0);
        uStack_88 = CONCAT44(uVar14,uVar13);
        uStack_8c = uVar12;
      }
      native_BetterList_Color___Add_ba1944
                (uStack_90,uStack_8c,(undefined4)uStack_88,param_3,
                 _Method_BetterList_Color__Add___12d8928);
    }
    iVar8 = *param_2 + 10;
  }
LAB_00809a78:
  *param_2 = iVar8;
  return 1;
}



/* NGUIText$$StripSymbols @ 0x80bb1c
 * System_String_o* NGUIText__StripSymbols (System_String_o* text, const MethodInfo* method); */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* NGUIText$$StripSymbols
   System_String_o* NGUIText__StripSymbols (System_String_o* text, const MethodInfo* method); */

long native_NGUIText__StripSymbols_80bb1c(long param_1)

{
  short sVar1;
  ulong uVar2;
  int iVar3;
  int iVar4;
  undefined4 uStack_74;
  int iStack_70;
  undefined1 auStack_6c [4];
  undefined1 auStack_68 [4];
  undefined1 auStack_64 [4];
  undefined1 auStack_60 [4];
  undefined1 auStack_5c [4];
  undefined1 auStack_58 [4];
  undefined4 uStack_54;
  
  if ((bRam0000000001340495 & 1) == 0) {
    native_sub_43273c(&NGUIText_TypeInfo_12d53c0);
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
  if (param_1 != 0) {
    iVar4 = *(int *)(param_1 + 0x10);
    if (0 < iVar4) {
      iVar3 = 0;
      do {
        sVar1 = native_System_String__get_Chars_b03810(param_1,iVar3,0);
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
          uVar2 = native_NGUIText__ParseSymbol_8091a4
                            (param_1,&iStack_70,0,0,&uStack_54,&uStack_74,auStack_58,auStack_5c,
                             auStack_60,auStack_64,auStack_68,auStack_6c);
          if ((uVar2 & 1) == 0) goto LAB_0080bc58;
          param_1 = native_System_String__Remove_b0d628(param_1,iVar3,iStack_70 - iVar3,0);
          if (param_1 == 0) {
                    /* WARNING: Subroutine does not return */
            native_sub_432810();
          }
          iVar4 = *(int *)(param_1 + 0x10);
        }
        else {
LAB_0080bc58:
          iVar3 = iVar3 + 1;
        }
      } while (iVar3 < iVar4);
    }
  }
  return param_1;
}



/* NGUIText$$Align @ 0x80bc88
 * void NGUIText__Align (System_Collections_Generic_List_Vector3__o* verts, int32_t indexOffset, float printedWidth, int32_t elements, const MethodInfo* method); */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* NGUIText$$Align
   void NGUIText__Align (System_Collections_Generic_List_Vector3__o* verts, int32_t indexOffset,
   float printedWidth, int32_t elements, const MethodInfo* method); */

void native_NGUIText__Align_80bc88(float param_1,long param_2,uint param_3,int param_4)

{
  uint uVar1;
  long lVar2;
  int iVar3;
  int iVar4;
  uint uVar5;
  uint uVar6;
  long lVar7;
  ulong uVar8;
  long lVar9;
  int iVar10;
  float fVar11;
  float fVar12;
  float fVar13;
  double dVar14;
  float fVar15;
  float fVar16;
  float fVar17;
  double dStack_a8;
  
  uVar8 = (ulong)param_3;
  if ((bRam0000000001340496 & 1) == 0) {
    native_sub_43273c(&Method_System_Collections_Generic_List_Vector3__get_Count___12dd500);
    native_sub_43273c(&Method_System_Collections_Generic_List_Vector3__get_Item___12dd508);
    native_sub_43273c(&Method_System_Collections_Generic_List_Vector3__set_Item___12dd510);
    native_sub_43273c(&NGUIText_TypeInfo_12d53c0);
    bRam0000000001340496 = 1;
  }
  if (((*(byte *)(_NGUIText_TypeInfo_12d53c0 + 0x133) >> 2 & 1) != 0) &&
     (*(int *)(_NGUIText_TypeInfo_12d53c0 + 0xe0) == 0)) {
    native_sub_4327ec();
  }
  lVar7 = *(long *)(_NGUIText_TypeInfo_12d53c0 + 0xb8);
  iVar4 = *(int *)(lVar7 + 0x2c);
  if (iVar4 == 2) {
    if (((*(byte *)(_NGUIText_TypeInfo_12d53c0 + 0x133) >> 2 & 1) != 0) &&
       (*(int *)(_NGUIText_TypeInfo_12d53c0 + 0xe0) == 0)) {
      native_sub_4327ec();
      lVar7 = *(long *)(_NGUIText_TypeInfo_12d53c0 + 0xb8);
    }
    fVar11 = (float)*(int *)(lVar7 + 0x40) - param_1;
    fVar15 = fVar11 * 0.5;
    if (0.0 <= fVar15) {
      if (((*(byte *)(_NGUIText_TypeInfo_12d53c0 + 0x133) >> 2 & 1) != 0) &&
         (*(int *)(_NGUIText_TypeInfo_12d53c0 + 0xe0) == 0)) {
        native_sub_4327ec();
        fVar11 = (float)*(int *)(*(long *)(_NGUIText_TypeInfo_12d53c0 + 0xb8) + 0x40) - param_1;
      }
      uVar5 = native_UnityEngine_Mathf__RoundToInt_8e50f0(fVar11,0);
      uVar6 = native_UnityEngine_Mathf__RoundToInt_8e50f0
                        ((float)*(int *)(*(long *)(_NGUIText_TypeInfo_12d53c0 + 0xb8) + 0x40),0);
      if ((((uVar5 & 1) != 0) && ((uVar6 & 1) == 0)) || ((uVar6 & (uVar5 & 1 ^ 1)) != 0)) {
        if (((*(byte *)(_NGUIText_TypeInfo_12d53c0 + 0x133) >> 2 & 1) != 0) &&
           (*(int *)(_NGUIText_TypeInfo_12d53c0 + 0xe0) == 0)) {
          native_sub_4327ec();
        }
        fVar15 = fVar15 + *(float *)(*(long *)(_NGUIText_TypeInfo_12d53c0 + 0xb8) + 0x20) * 0.5;
      }
      if (param_2 == 0) {
LAB_0080c37c:
                    /* WARNING: Subroutine does not return */
        native_sub_432810();
      }
      uVar5 = *(uint *)(param_2 + 0x18);
      if ((int)param_3 < (int)uVar5) {
        lVar7 = ((-(ulong)(param_3 >> 0x1f) & 0xfffffffe00000000 | uVar8 << 1) + (long)(int)param_3)
                * 4;
        lVar9 = ((long)(int)uVar5 + -1) - (long)(int)param_3;
        while( true ) {
          if (uVar5 <= (uint)uVar8) {
            native_System_ThrowHelper__ThrowArgumentOutOfRangeException_9fe0f4(0);
          }
          lVar2 = *(long *)(param_2 + 0x10) + lVar7;
          native_System_Collections_Generic_List_Vector3___set_Item_d2ba90
                    (fVar15 + *(float *)(lVar2 + 0x20),*(undefined4 *)(lVar2 + 0x24),
                     *(undefined4 *)(lVar2 + 0x28),param_2,uVar8,
                     _Method_System_Collections_Generic_List_Vector3__set_Item___12dd510);
          if (lVar9 == 0) break;
          uVar5 = *(uint *)(param_2 + 0x18);
          uVar8 = (ulong)((uint)uVar8 + 1);
          lVar7 = lVar7 + 0xc;
          lVar9 = lVar9 + -1;
        }
      }
    }
  }
  else if (iVar4 == 4) {
    if (((*(byte *)(_NGUIText_TypeInfo_12d53c0 + 0x133) >> 2 & 1) != 0) &&
       (*(int *)(_NGUIText_TypeInfo_12d53c0 + 0xe0) == 0)) {
      native_sub_4327ec();
      lVar7 = *(long *)(_NGUIText_TypeInfo_12d53c0 + 0xb8);
    }
    fVar11 = (float)*(int *)(lVar7 + 0x40);
    if (fVar11 * 0.65 <= param_1) {
      if (((*(byte *)(_NGUIText_TypeInfo_12d53c0 + 0x133) >> 2 & 1) != 0) &&
         (*(int *)(_NGUIText_TypeInfo_12d53c0 + 0xe0) == 0)) {
        native_sub_4327ec();
        fVar11 = (float)*(int *)(*(long *)(_NGUIText_TypeInfo_12d53c0 + 0xb8) + 0x40);
      }
      if (1.0 <= (fVar11 - param_1) * 0.5) {
        if (param_2 == 0) goto LAB_0080c37c;
        uVar5 = *(uint *)(param_2 + 0x18);
        iVar4 = 0;
        if (param_4 != 0) {
          iVar4 = (int)(uVar5 - param_3) / param_4;
        }
        if (0 < iVar4) {
          if (((*(byte *)(_NGUIText_TypeInfo_12d53c0 + 0x133) >> 2 & 1) != 0) &&
             (*(int *)(_NGUIText_TypeInfo_12d53c0 + 0xe0) == 0)) {
            native_sub_4327ec();
            uVar5 = *(uint *)(param_2 + 0x18);
            fVar11 = (float)*(int *)(*(long *)(_NGUIText_TypeInfo_12d53c0 + 0xb8) + 0x40);
          }
          param_3 = param_4 + param_3;
          if ((int)param_3 < (int)uVar5) {
            iVar3 = param_4;
            if (param_4 < 0) {
              iVar3 = param_4 + 1;
            }
            iVar10 = 1;
            uVar6 = uVar5;
            do {
              if (uVar6 <= param_3) {
                native_System_ThrowHelper__ThrowArgumentOutOfRangeException_9fe0f4(0);
                uVar6 = *(uint *)(param_2 + 0x18);
              }
              lVar7 = *(long *)(param_2 + 0x10);
              uVar1 = param_3 + (iVar3 >> 1);
              fVar15 = *(float *)(lVar7 + (long)(int)param_3 * 0xc + 0x20);
              if (uVar6 <= uVar1) {
                native_System_ThrowHelper__ThrowArgumentOutOfRangeException_9fe0f4(0);
                lVar7 = *(long *)(param_2 + 0x10);
              }
              fVar12 = *(float *)(lVar7 + (long)(int)uVar1 * 0xc + 0x20);
              fVar16 = (fVar11 / param_1) * fVar15;
              fVar17 = (1.0 / (float)(iVar4 + -1)) * (float)iVar10;
              fVar15 = fVar12 - fVar15;
              fVar12 = (fVar11 / param_1) * fVar12;
              fVar13 = (float)native_UnityEngine_Mathf__Lerp_8e5224(fVar16 + fVar15,fVar12,fVar17,0)
              ;
              fVar15 = (float)native_UnityEngine_Mathf__Lerp_8e5224(fVar16,fVar12 - fVar15,fVar17,0)
              ;
              dVar14 = (double)func_0x002c9600((double)fVar15,&dStack_a8);
              if (0.0 <= fVar15) {
                if (dVar14 == 0.5) {
                  fVar15 = 1.0;
                  goto LAB_0080bfc4;
                }
                fVar12 = (float)(int)(fVar15 + 0.5);
              }
              else if (dVar14 == -0.5) {
                fVar15 = -1.0;
LAB_0080bfc4:
                fVar12 = (float)dStack_a8;
                if (((long)dStack_a8 & 1U) != 0) {
                  fVar12 = (float)dStack_a8 + fVar15;
                }
              }
              else {
                fVar12 = (float)(int)(fVar15 + -0.5);
              }
              dVar14 = (double)func_0x002c9600((double)fVar13,&dStack_a8);
              if (0.0 <= fVar13) {
                if (dVar14 == 0.5) {
                  fVar15 = 1.0;
                  goto LAB_0080c030;
                }
                fVar13 = (float)(int)(fVar13 + 0.5);
              }
              else if (dVar14 == -0.5) {
                fVar15 = -1.0;
LAB_0080c030:
                fVar13 = (float)dStack_a8;
                if (((long)dStack_a8 & 1U) != 0) {
                  fVar13 = (float)dStack_a8 + fVar15;
                }
              }
              else {
                fVar13 = (float)(int)(fVar13 + -0.5);
              }
              lVar7 = (long)(int)param_3;
              if (param_4 == 1) {
                if (*(uint *)(param_2 + 0x18) <= param_3) {
                  native_System_ThrowHelper__ThrowArgumentOutOfRangeException_9fe0f4(0);
                }
                lVar7 = *(long *)(param_2 + 0x10) + lVar7 * 0xc;
                native_System_Collections_Generic_List_Vector3___set_Item_d2ba90
                          (fVar12,*(undefined4 *)(lVar7 + 0x24),*(undefined4 *)(lVar7 + 0x28),
                           param_2,param_3,
                           _Method_System_Collections_Generic_List_Vector3__set_Item___12dd510);
                param_3 = param_3 + 1;
              }
              else {
                if (param_4 == 2) {
                  if (*(uint *)(param_2 + 0x18) <= param_3) {
                    native_System_ThrowHelper__ThrowArgumentOutOfRangeException_9fe0f4(0);
                  }
                  lVar7 = *(long *)(param_2 + 0x10) + lVar7 * 0xc;
                  uVar6 = param_3 + 1;
                  native_System_Collections_Generic_List_Vector3___set_Item_d2ba90
                            (fVar12,*(undefined4 *)(lVar7 + 0x24),*(undefined4 *)(lVar7 + 0x28),
                             param_2,param_3,
                             _Method_System_Collections_Generic_List_Vector3__set_Item___12dd510);
                  if (*(uint *)(param_2 + 0x18) <= uVar6) {
                    native_System_ThrowHelper__ThrowArgumentOutOfRangeException_9fe0f4(0);
                  }
                  lVar7 = *(long *)(param_2 + 0x10);
                  param_3 = param_3 + 2;
                }
                else {
                  if (param_4 != 4) goto LAB_0080c1fc;
                  if (*(uint *)(param_2 + 0x18) <= param_3) {
                    native_System_ThrowHelper__ThrowArgumentOutOfRangeException_9fe0f4(0);
                  }
                  lVar7 = *(long *)(param_2 + 0x10) + lVar7 * 0xc;
                  uVar6 = param_3 + 1;
                  native_System_Collections_Generic_List_Vector3___set_Item_d2ba90
                            (fVar12,*(undefined4 *)(lVar7 + 0x24),*(undefined4 *)(lVar7 + 0x28),
                             param_2,param_3,
                             _Method_System_Collections_Generic_List_Vector3__set_Item___12dd510);
                  if (*(uint *)(param_2 + 0x18) <= uVar6) {
                    native_System_ThrowHelper__ThrowArgumentOutOfRangeException_9fe0f4(0);
                  }
                  lVar7 = *(long *)(param_2 + 0x10) + (long)(int)uVar6 * 0xc;
                  uVar1 = param_3 + 2;
                  native_System_Collections_Generic_List_Vector3___set_Item_d2ba90
                            (fVar12,*(undefined4 *)(lVar7 + 0x24),*(undefined4 *)(lVar7 + 0x28),
                             param_2,uVar6,
                             _Method_System_Collections_Generic_List_Vector3__set_Item___12dd510);
                  if (*(uint *)(param_2 + 0x18) <= uVar1) {
                    native_System_ThrowHelper__ThrowArgumentOutOfRangeException_9fe0f4(0);
                  }
                  lVar7 = *(long *)(param_2 + 0x10) + (long)(int)uVar1 * 0xc;
                  uVar6 = param_3 + 3;
                  native_System_Collections_Generic_List_Vector3___set_Item_d2ba90
                            (fVar13,*(undefined4 *)(lVar7 + 0x24),*(undefined4 *)(lVar7 + 0x28),
                             param_2,uVar1,
                             _Method_System_Collections_Generic_List_Vector3__set_Item___12dd510);
                  if (*(uint *)(param_2 + 0x18) <= uVar6) {
                    native_System_ThrowHelper__ThrowArgumentOutOfRangeException_9fe0f4(0);
                  }
                  lVar7 = *(long *)(param_2 + 0x10);
                  param_3 = param_3 + 4;
                }
                lVar7 = lVar7 + (long)(int)uVar6 * 0xc;
                native_System_Collections_Generic_List_Vector3___set_Item_d2ba90
                          (fVar13,*(undefined4 *)(lVar7 + 0x24),*(undefined4 *)(lVar7 + 0x28),
                           param_2,uVar6,
                           _Method_System_Collections_Generic_List_Vector3__set_Item___12dd510);
              }
LAB_0080c1fc:
              if ((int)uVar5 <= (int)param_3) {
                return;
              }
              uVar6 = *(uint *)(param_2 + 0x18);
              iVar10 = iVar10 + 1;
            } while( true );
          }
        }
      }
    }
  }
  else if (iVar4 == 3) {
    if (((*(byte *)(_NGUIText_TypeInfo_12d53c0 + 0x133) >> 2 & 1) != 0) &&
       (*(int *)(_NGUIText_TypeInfo_12d53c0 + 0xe0) == 0)) {
      native_sub_4327ec();
      lVar7 = *(long *)(_NGUIText_TypeInfo_12d53c0 + 0xb8);
    }
    param_1 = (float)*(int *)(lVar7 + 0x40) - param_1;
    if (0.0 <= param_1) {
      if (param_2 == 0) goto LAB_0080c37c;
      uVar5 = *(uint *)(param_2 + 0x18);
      if ((int)param_3 < (int)uVar5) {
        lVar7 = ((-(ulong)(param_3 >> 0x1f) & 0xfffffffe00000000 | uVar8 << 1) + (long)(int)param_3)
                * 4;
        lVar9 = ((long)(int)uVar5 + -1) - (long)(int)param_3;
        while( true ) {
          if (uVar5 <= (uint)uVar8) {
            native_System_ThrowHelper__ThrowArgumentOutOfRangeException_9fe0f4(0);
          }
          lVar2 = *(long *)(param_2 + 0x10) + lVar7;
          native_System_Collections_Generic_List_Vector3___set_Item_d2ba90
                    (param_1 + *(float *)(lVar2 + 0x20),*(undefined4 *)(lVar2 + 0x24),
                     *(undefined4 *)(lVar2 + 0x28),param_2,uVar8,
                     _Method_System_Collections_Generic_List_Vector3__set_Item___12dd510);
          if (lVar9 == 0) break;
          uVar5 = *(uint *)(param_2 + 0x18);
          uVar8 = (ulong)((uint)uVar8 + 1);
          lVar7 = lVar7 + 0xc;
          lVar9 = lVar9 + -1;
        }
      }
    }
  }
  return;
}



/* NGUIText$$GetExactCharacterIndex @ 0x80c380
 * int32_t NGUIText__GetExactCharacterIndex (System_Collections_Generic_List_Vector3__o* verts, System_Collections_Generic_List_int__o* indices, UnityEngine_Vector2_o pos, const MethodInfo* method); */

/* NGUIText$$GetExactCharacterIndex
   int32_t NGUIText__GetExactCharacterIndex (System_Collections_Generic_List_Vector3__o* verts,
   System_Collections_Generic_List_int__o* indices, UnityEngine_Vector2_o pos, const MethodInfo*
   method); */

undefined4
native_NGUIText__GetExactCharacterIndex_80c380
          (float param_1,float param_2,long param_3,long param_4)

{
  int iVar1;
  long lVar2;
  long lVar3;
  ulong uVar4;
  long lVar5;
  long lVar6;
  
  if ((bRam0000000001340497 & 1) == 0) {
    native_sub_43273c(&Method_System_Collections_Generic_List_int__get_Count___12dcad0);
    native_sub_43273c(&Method_System_Collections_Generic_List_Vector3__get_Item___12dd508);
    native_sub_43273c(&Method_System_Collections_Generic_List_int__get_Item___12dcad8);
    bRam0000000001340497 = 1;
  }
  if (param_4 == 0) {
LAB_0080c538:
                    /* WARNING: Subroutine does not return */
    native_sub_432810();
  }
  iVar1 = *(int *)(param_4 + 0x18);
  if (0 < iVar1) {
    if (param_3 == 0) goto LAB_0080c538;
    uVar4 = 0;
    lVar5 = 0;
    lVar3 = 0;
    do {
      if (*(uint *)(param_3 + 0x18) <= uVar4) {
        native_System_ThrowHelper__ThrowArgumentOutOfRangeException_9fe0f4(0);
      }
      lVar2 = *(long *)(param_3 + 0x10);
      if (*(float *)(lVar2 + (lVar5 >> 0x20) * 0xc + 0x20) <= param_1) {
        if ((ulong)*(uint *)(param_3 + 0x18) <= uVar4 + 1) {
          native_System_ThrowHelper__ThrowArgumentOutOfRangeException_9fe0f4(0);
          lVar2 = *(long *)(param_3 + 0x10);
        }
        lVar6 = lVar5 + 0x100000000 >> 0x20;
        if (param_1 <= *(float *)(lVar2 + lVar6 * 0xc + 0x20)) {
          if (*(uint *)(param_3 + 0x18) <= uVar4) {
            native_System_ThrowHelper__ThrowArgumentOutOfRangeException_9fe0f4(0);
            lVar2 = *(long *)(param_3 + 0x10);
          }
          if (*(float *)(lVar2 + (lVar5 >> 0x20) * 0xc + 0x24) <= param_2) {
            if ((ulong)*(uint *)(param_3 + 0x18) <= uVar4 + 1) {
              native_System_ThrowHelper__ThrowArgumentOutOfRangeException_9fe0f4(0);
              lVar2 = *(long *)(param_3 + 0x10);
            }
            if (param_2 <= *(float *)(lVar2 + lVar6 * 0xc + 0x24)) {
              if (*(uint *)(param_4 + 0x18) <= (uint)lVar3) {
                native_System_ThrowHelper__ThrowArgumentOutOfRangeException_9fe0f4(0);
              }
              return *(undefined4 *)(*(long *)(param_4 + 0x10) + lVar3 * 4 + 0x20);
            }
          }
        }
      }
      lVar3 = lVar3 + 1;
      lVar5 = lVar5 + 0x200000000;
      uVar4 = uVar4 + 2;
    } while (lVar3 < iVar1);
  }
  return 0;
}



/* NGUIText$$GetApproximateCharacterIndex @ 0x80c53c
 * int32_t NGUIText__GetApproximateCharacterIndex (System_Collections_Generic_List_Vector3__o* verts, System_Collections_Generic_List_int__o* indices, UnityEngine_Vector2_o pos, const MethodInfo* method); */

/* NGUIText$$GetApproximateCharacterIndex
   int32_t NGUIText__GetApproximateCharacterIndex (System_Collections_Generic_List_Vector3__o*
   verts, System_Collections_Generic_List_int__o* indices, UnityEngine_Vector2_o pos, const
   MethodInfo* method); */

undefined4
native_NGUIText__GetApproximateCharacterIndex_80c53c
          (float param_1,float param_2,long param_3,long param_4)

{
  uint uVar1;
  ulong uVar2;
  long lVar3;
  uint uVar4;
  long lVar5;
  ulong uVar6;
  ulong uVar7;
  float fVar8;
  float fVar9;
  float fVar10;
  float fVar11;
  
  if ((bRam0000000001340498 & 1) == 0) {
    native_sub_43273c(&Method_System_Collections_Generic_List_Vector3__get_Count___12dd500);
    native_sub_43273c(&Method_System_Collections_Generic_List_Vector3__get_Item___12dd508);
    native_sub_43273c(&Method_System_Collections_Generic_List_int__get_Item___12dcad8);
    bRam0000000001340498 = 1;
  }
  if (param_3 != 0) {
    uVar2 = (ulong)*(uint *)(param_3 + 0x18);
    if (0 < (int)*(uint *)(param_3 + 0x18)) {
      fVar9 = 3.4028235e+38;
      lVar5 = 0;
      uVar6 = 0;
      uVar4 = 0;
      uVar7 = uVar2 - 1;
      fVar10 = fVar9;
      do {
        if (uVar2 <= uVar6) {
          native_System_ThrowHelper__ThrowArgumentOutOfRangeException_9fe0f4(0);
        }
        lVar3 = *(long *)(param_3 + 0x10);
        fVar11 = ABS(param_2 - *(float *)(lVar3 + lVar5 + 0x24));
        if (fVar11 <= fVar10) {
          if (*(uint *)(param_3 + 0x18) <= uVar6) {
            native_System_ThrowHelper__ThrowArgumentOutOfRangeException_9fe0f4(0);
            lVar3 = *(long *)(param_3 + 0x10);
          }
          fVar8 = ABS(param_1 - *(float *)(lVar3 + lVar5 + 0x20));
          uVar1 = (uint)uVar6;
          if ((fVar10 <= fVar11) && (fVar11 = fVar10, fVar9 <= fVar8)) goto LAB_0080c610;
        }
        else {
LAB_0080c610:
          uVar1 = uVar4;
          fVar11 = fVar10;
          fVar8 = fVar9;
        }
        fVar9 = fVar8;
        fVar10 = fVar11;
        uVar4 = uVar1;
        if (uVar7 == uVar6) goto joined_r0x0080c6b0;
        uVar2 = (ulong)*(uint *)(param_3 + 0x18);
        uVar6 = uVar6 + 1;
        lVar5 = lVar5 + 0xc;
      } while( true );
    }
    uVar4 = 0;
joined_r0x0080c6b0:
    if (param_4 != 0) {
      if (*(uint *)(param_4 + 0x18) <= uVar4) {
        native_System_ThrowHelper__ThrowArgumentOutOfRangeException_9fe0f4(0);
      }
      return *(undefined4 *)(*(long *)(param_4 + 0x10) + (long)(int)uVar4 * 4 + 0x20);
    }
  }
                    /* WARNING: Subroutine does not return */
  native_sub_432810();
}



/* NGUIText$$IsSpace @ 0x80c6b8
 * bool NGUIText__IsSpace (int32_t ch, const MethodInfo* method); */

/* NGUIText$$IsSpace
   bool NGUIText__IsSpace (int32_t ch, const MethodInfo* method); */

bool native_NGUIText__IsSpace_80c6b8(uint param_1)

{
  if ((param_1 != 0x20) && (param_1 != 0x200a)) {
    return (param_1 | 2) == 0x200b;
  }
  return true;
}



/* NGUIText$$EndLine @ 0x80c6e8
 * void NGUIText__EndLine (System_Text_StringBuilder_o** s, const MethodInfo* method); */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* NGUIText$$EndLine
   void NGUIText__EndLine (System_Text_StringBuilder_o** s, const MethodInfo* method); */

void native_NGUIText__EndLine_80c6e8(long *param_1)

{
  uint uVar1;
  ushort uVar2;
  int iVar3;
  long lVar4;
  undefined8 uVar5;
  undefined8 uVar6;
  undefined8 uVar7;
  long lVar8;
  
  if ((bRam0000000001340499 & 1) == 0) {
    native_sub_43273c(&NGUIText_TypeInfo_12d53c0);
    bRam0000000001340499 = 1;
  }
  if (*param_1 == 0) goto LAB_0080c7e4;
  iVar3 = native_System_Text_StringBuilder__get_Length_a49204(*param_1,0);
  iVar3 = iVar3 + -1;
  if (0 < iVar3) {
    if (*param_1 == 0) goto LAB_0080c7e4;
    uVar2 = native_System_Text_StringBuilder__get_Chars_a49754(*param_1,iVar3,0);
    if (((*(byte *)(_NGUIText_TypeInfo_12d53c0 + 0x133) >> 2 & 1) != 0) &&
       (*(int *)(_NGUIText_TypeInfo_12d53c0 + 0xe0) == 0)) {
      native_sub_4327ec(_NGUIText_TypeInfo_12d53c0);
    }
    if (((uVar2 == 0x20) || (uVar2 == 0x200a)) || ((uVar2 | 2) == 0x200b)) {
      lVar4 = *param_1;
      if (lVar4 != 0) {
        do {
          if (lVar4 == 0) {
code_r0x00a498ac:
                    /* WARNING: Subroutine does not return */
            native_sub_432810();
          }
          uVar1 = iVar3 - *(int *)(lVar4 + 0x24);
          if (-1 < (int)uVar1) {
            if ((int)uVar1 < *(int *)(lVar4 + 0x20)) {
              lVar4 = *(long *)(lVar4 + 0x10);
              if (lVar4 != 0) {
                if (*(uint *)(lVar4 + 0x18) <= uVar1) {
                  uVar5 = native_sub_43283c();
                    /* WARNING: Subroutine does not return */
                  native_sub_4327dc(uVar5,0);
                }
                *(undefined2 *)(lVar4 + (long)(int)uVar1 * 2 + 0x20) = 10;
                return;
              }
              goto code_r0x00a498ac;
            }
            goto code_r0x00a49814;
          }
          lVar4 = *(long *)(lVar4 + 0x18);
          if (lVar4 == 0) {
code_r0x00a49814:
            uVar5 = native_sub_432740(&
                                      StringLiteral_Index_was_out_of_range__Must_be_non_negative_and_less_than_the_size_of_the_collection__12ee818
                                     );
            uVar5 = native_System_Environment__GetResourceString_beaba8(uVar5,0);
            native_sub_432740(&System_ArgumentOutOfRangeException_TypeInfo_12d3810);
            uVar6 = native_sub_432808();
            uVar7 = native_sub_432740(&StringLiteral_index_12f4d30);
            native_System_ArgumentOutOfRangeException___ctor_951f98(uVar6,uVar7,uVar5,0);
            uVar5 = native_sub_432740(&Method_System_Text_StringBuilder_set_Chars___12e6e58);
                    /* WARNING: Subroutine does not return */
            native_sub_4327dc(uVar6,uVar5);
          }
        } while( true );
      }
      goto LAB_0080c7e4;
    }
  }
  lVar4 = *param_1;
  if (lVar4 != 0) {
    lVar8 = *(long *)(lVar4 + 0x10);
    if (lVar8 == 0) {
                    /* WARNING: Subroutine does not return */
      native_sub_432810(lVar4,10,0);
    }
    uVar1 = *(uint *)(lVar4 + 0x20);
    if ((int)uVar1 < *(int *)(lVar8 + 0x18)) {
      *(uint *)(lVar4 + 0x20) = uVar1 + 1;
      if (*(uint *)(lVar8 + 0x18) <= uVar1) {
        uVar5 = native_sub_43283c();
                    /* WARNING: Subroutine does not return */
        native_sub_4327dc(uVar5,0);
      }
      *(undefined2 *)(lVar8 + (long)(int)uVar1 * 2 + 0x20) = 10;
    }
    else {
      native_System_Text_StringBuilder__Append_a49620(lVar4,10,1);
    }
    return;
  }
LAB_0080c7e4:
                    /* WARNING: Subroutine does not return */
  native_sub_432810();
}



/* NGUIText$$ReplaceSpaceWithNewline @ 0x80c7e8
 * void NGUIText__ReplaceSpaceWithNewline (System_Text_StringBuilder_o** s, const MethodInfo* method); */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* NGUIText$$ReplaceSpaceWithNewline
   void NGUIText__ReplaceSpaceWithNewline (System_Text_StringBuilder_o** s, const MethodInfo*
   method); */

void native_NGUIText__ReplaceSpaceWithNewline_80c7e8(long *param_1)

{
  uint uVar1;
  ushort uVar2;
  int iVar3;
  long lVar4;
  undefined8 uVar5;
  undefined8 uVar6;
  undefined8 uVar7;
  
  if ((bRam000000000134049a & 1) == 0) {
    native_sub_43273c(&NGUIText_TypeInfo_12d53c0);
    bRam000000000134049a = 1;
  }
  if (*param_1 != 0) {
    iVar3 = native_System_Text_StringBuilder__get_Length_a49204(*param_1,0);
    iVar3 = iVar3 + -1;
    if (iVar3 < 1) {
      return;
    }
    if (*param_1 != 0) {
      uVar2 = native_System_Text_StringBuilder__get_Chars_a49754(*param_1,iVar3,0);
      if (((*(byte *)(_NGUIText_TypeInfo_12d53c0 + 0x133) >> 2 & 1) != 0) &&
         (*(int *)(_NGUIText_TypeInfo_12d53c0 + 0xe0) == 0)) {
        native_sub_4327ec(_NGUIText_TypeInfo_12d53c0);
      }
      if (((uVar2 != 0x20) && (uVar2 != 0x200a)) && ((uVar2 | 2) != 0x200b)) {
        return;
      }
      lVar4 = *param_1;
      if (lVar4 != 0) {
        do {
          if (lVar4 == 0) {
code_r0x00a498ac:
                    /* WARNING: Subroutine does not return */
            native_sub_432810();
          }
          uVar1 = iVar3 - *(int *)(lVar4 + 0x24);
          if (-1 < (int)uVar1) {
            if ((int)uVar1 < *(int *)(lVar4 + 0x20)) {
              lVar4 = *(long *)(lVar4 + 0x10);
              if (lVar4 != 0) {
                if (uVar1 < *(uint *)(lVar4 + 0x18)) {
                  *(undefined2 *)(lVar4 + (long)(int)uVar1 * 2 + 0x20) = 10;
                  return;
                }
                uVar5 = native_sub_43283c();
                    /* WARNING: Subroutine does not return */
                native_sub_4327dc(uVar5,0);
              }
              goto code_r0x00a498ac;
            }
            goto code_r0x00a49814;
          }
          lVar4 = *(long *)(lVar4 + 0x18);
          if (lVar4 == 0) {
code_r0x00a49814:
            uVar5 = native_sub_432740(&
                                      StringLiteral_Index_was_out_of_range__Must_be_non_negative_and_less_than_the_size_of_the_collection__12ee818
                                     );
            uVar5 = native_System_Environment__GetResourceString_beaba8(uVar5,0);
            native_sub_432740(&System_ArgumentOutOfRangeException_TypeInfo_12d3810);
            uVar6 = native_sub_432808();
            uVar7 = native_sub_432740(&StringLiteral_index_12f4d30);
            native_System_ArgumentOutOfRangeException___ctor_951f98(uVar6,uVar7,uVar5,0);
            uVar5 = native_sub_432740(&Method_System_Text_StringBuilder_set_Chars___12e6e58);
                    /* WARNING: Subroutine does not return */
            native_sub_4327dc(uVar6,uVar5);
          }
        } while( true );
      }
    }
  }
                    /* WARNING: Subroutine does not return */
  native_sub_432810();
}



/* NGUIText$$get_symbolScale @ 0x80c8d8
 * float NGUIText__get_symbolScale (const MethodInfo* method); */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* NGUIText$$get_symbolScale
   float NGUIText__get_symbolScale (const MethodInfo* method); */

float native_NGUIText__get_symbolScale_80c8d8(void)

{
  int iVar1;
  ulong uVar2;
  long *plVar3;
  float fVar4;
  int iVar5;
  
  if ((bRam000000000134049b & 1) == 0) {
    native_sub_43273c(&NGUIFont_TypeInfo_12d53b0);
    native_sub_43273c(&NGUIText_TypeInfo_12d53c0);
    native_sub_43273c(&UnityEngine_Object_TypeInfo_12d54e0);
    bRam000000000134049b = 1;
  }
  if (((*(byte *)(_NGUIText_TypeInfo_12d53c0 + 0x133) >> 2 & 1) != 0) &&
     (*(int *)(_NGUIText_TypeInfo_12d53c0 + 0xe0) == 0)) {
    native_sub_4327ec();
  }
  plVar3 = (long *)**(long **)(_NGUIText_TypeInfo_12d53c0 + 0xb8);
  if (plVar3 != (long *)0x0) {
    if (*(byte *)(_NGUIFont_TypeInfo_12d53b0 + 300) <= *(byte *)(*plVar3 + 300)) {
      if (*(long *)(*(long *)(*plVar3 + 200) +
                    (ulong)*(byte *)(_NGUIFont_TypeInfo_12d53b0 + 300) * 8 + -8) !=
          _NGUIFont_TypeInfo_12d53b0) {
        plVar3 = (long *)0x0;
      }
      goto LAB_0080c98c;
    }
  }
  plVar3 = (long *)0x0;
LAB_0080c98c:
  if (((*(byte *)(_UnityEngine_Object_TypeInfo_12d54e0 + 0x133) >> 2 & 1) != 0) &&
     (*(int *)(_UnityEngine_Object_TypeInfo_12d54e0 + 0xe0) == 0)) {
    native_sub_4327ec();
  }
  uVar2 = native_UnityEngine_Object__op_Equality_8e9a3c(plVar3,0,0);
  if ((uVar2 & 1) == 0) {
    if (plVar3 == (long *)0x0) {
                    /* WARNING: Subroutine does not return */
      native_sub_432810();
    }
    fVar4 = *(float *)(plVar3 + 0xb);
    if (((*(byte *)(_NGUIText_TypeInfo_12d53c0 + 0x133) >> 2 & 1) != 0) &&
       (*(int *)(_NGUIText_TypeInfo_12d53c0 + 0xe0) == 0)) {
      native_sub_4327ec();
    }
    iVar5 = *(int *)(*(long *)(_NGUIText_TypeInfo_12d53c0 + 0xb8) + 0x1c);
    iVar1 = native_NGUIFont__get_defaultSize_8021f0(plVar3);
    fVar4 = (fVar4 * (float)iVar5) / (float)iVar1;
  }
  else {
    fVar4 = 1.0;
  }
  return fVar4;
}



/* NGUIText$$get_symbolOffset @ 0x80ca20
 * float NGUIText__get_symbolOffset (const MethodInfo* method); */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* NGUIText$$get_symbolOffset
   float NGUIText__get_symbolOffset (const MethodInfo* method); */

float native_NGUIText__get_symbolOffset_80ca20(void)

{
  ulong uVar1;
  long *plVar2;
  float fVar3;
  
  if ((bRam000000000134049c & 1) == 0) {
    native_sub_43273c(&NGUIFont_TypeInfo_12d53b0);
    native_sub_43273c(&NGUIText_TypeInfo_12d53c0);
    native_sub_43273c(&UnityEngine_Object_TypeInfo_12d54e0);
    bRam000000000134049c = 1;
  }
  if (((*(byte *)(_NGUIText_TypeInfo_12d53c0 + 0x133) >> 2 & 1) != 0) &&
     (*(int *)(_NGUIText_TypeInfo_12d53c0 + 0xe0) == 0)) {
    native_sub_4327ec();
  }
  plVar2 = (long *)**(long **)(_NGUIText_TypeInfo_12d53c0 + 0xb8);
  if (plVar2 != (long *)0x0) {
    if (*(byte *)(_NGUIFont_TypeInfo_12d53b0 + 300) <= *(byte *)(*plVar2 + 300)) {
      if (*(long *)(*(long *)(*plVar2 + 200) +
                    (ulong)*(byte *)(_NGUIFont_TypeInfo_12d53b0 + 300) * 8 + -8) !=
          _NGUIFont_TypeInfo_12d53b0) {
        plVar2 = (long *)0x0;
      }
      goto LAB_0080cad0;
    }
  }
  plVar2 = (long *)0x0;
LAB_0080cad0:
  if (((*(byte *)(_UnityEngine_Object_TypeInfo_12d54e0 + 0x133) >> 2 & 1) != 0) &&
     (*(int *)(_UnityEngine_Object_TypeInfo_12d54e0 + 0xe0) == 0)) {
    native_sub_4327ec();
  }
  uVar1 = native_UnityEngine_Object__op_Equality_8e9a3c(plVar2,0,0);
  if ((uVar1 & 1) == 0) {
    if (plVar2 == (long *)0x0) {
                    /* WARNING: Subroutine does not return */
      native_sub_432810();
    }
    fVar3 = (float)*(int *)((long)plVar2 + 0x5c);
  }
  else {
    fVar3 = 1.0;
  }
  return fVar3;
}



/* NGUIText$$get_symbolMaxHeight @ 0x80cb28
 * int32_t NGUIText__get_symbolMaxHeight (const MethodInfo* method); */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* NGUIText$$get_symbolMaxHeight
   int32_t NGUIText__get_symbolMaxHeight (const MethodInfo* method); */

undefined4 native_NGUIText__get_symbolMaxHeight_80cb28(void)

{
  undefined4 uVar1;
  ulong uVar2;
  long *plVar3;
  
  if ((bRam000000000134049d & 1) == 0) {
    native_sub_43273c(&NGUIFont_TypeInfo_12d53b0);
    native_sub_43273c(&NGUIText_TypeInfo_12d53c0);
    native_sub_43273c(&UnityEngine_Object_TypeInfo_12d54e0);
    bRam000000000134049d = 1;
  }
  if (((*(byte *)(_NGUIText_TypeInfo_12d53c0 + 0x133) >> 2 & 1) != 0) &&
     (*(int *)(_NGUIText_TypeInfo_12d53c0 + 0xe0) == 0)) {
    native_sub_4327ec();
  }
  plVar3 = (long *)**(long **)(_NGUIText_TypeInfo_12d53c0 + 0xb8);
  if (plVar3 != (long *)0x0) {
    if (*(byte *)(_NGUIFont_TypeInfo_12d53b0 + 300) <= *(byte *)(*plVar3 + 300)) {
      if (*(long *)(*(long *)(*plVar3 + 200) +
                    (ulong)*(byte *)(_NGUIFont_TypeInfo_12d53b0 + 300) * 8 + -8) !=
          _NGUIFont_TypeInfo_12d53b0) {
        plVar3 = (long *)0x0;
      }
      goto LAB_0080cbd8;
    }
  }
  plVar3 = (long *)0x0;
LAB_0080cbd8:
  if (((*(byte *)(_UnityEngine_Object_TypeInfo_12d54e0 + 0x133) >> 2 & 1) != 0) &&
     (*(int *)(_UnityEngine_Object_TypeInfo_12d54e0 + 0xe0) == 0)) {
    native_sub_4327ec();
  }
  uVar2 = native_UnityEngine_Object__op_Equality_8e9a3c(plVar3,0,0);
  if ((uVar2 & 1) == 0) {
    if (plVar3 == (long *)0x0) {
                    /* WARNING: Subroutine does not return */
      native_sub_432810();
    }
    uVar1 = (undefined4)plVar3[0xc];
  }
  else {
    uVar1 = 0;
  }
  return uVar1;
}



/* NGUIText$$get_symbolCentered @ 0x80cc2c
 * bool NGUIText__get_symbolCentered (const MethodInfo* method); */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* NGUIText$$get_symbolCentered
   bool NGUIText__get_symbolCentered (const MethodInfo* method); */

bool native_NGUIText__get_symbolCentered_80cc2c(void)

{
  bool bVar1;
  ulong uVar2;
  long *plVar3;
  
  if ((bRam000000000134049e & 1) == 0) {
    native_sub_43273c(&NGUIFont_TypeInfo_12d53b0);
    native_sub_43273c(&NGUIText_TypeInfo_12d53c0);
    native_sub_43273c(&UnityEngine_Object_TypeInfo_12d54e0);
    bRam000000000134049e = 1;
  }
  if (((*(byte *)(_NGUIText_TypeInfo_12d53c0 + 0x133) >> 2 & 1) != 0) &&
     (*(int *)(_NGUIText_TypeInfo_12d53c0 + 0xe0) == 0)) {
    native_sub_4327ec();
  }
  plVar3 = (long *)**(long **)(_NGUIText_TypeInfo_12d53c0 + 0xb8);
  if (plVar3 != (long *)0x0) {
    if (*(byte *)(_NGUIFont_TypeInfo_12d53b0 + 300) <= *(byte *)(*plVar3 + 300)) {
      if (*(long *)(*(long *)(*plVar3 + 200) +
                    (ulong)*(byte *)(_NGUIFont_TypeInfo_12d53b0 + 300) * 8 + -8) !=
          _NGUIFont_TypeInfo_12d53b0) {
        plVar3 = (long *)0x0;
      }
      goto LAB_0080ccdc;
    }
  }
  plVar3 = (long *)0x0;
LAB_0080ccdc:
  if (((*(byte *)(_UnityEngine_Object_TypeInfo_12d54e0 + 0x133) >> 2 & 1) != 0) &&
     (*(int *)(_UnityEngine_Object_TypeInfo_12d54e0 + 0xe0) == 0)) {
    native_sub_4327ec();
  }
  uVar2 = native_UnityEngine_Object__op_Equality_8e9a3c(plVar3,0,0);
  if ((uVar2 & 1) == 0) {
    if (plVar3 == (long *)0x0) {
                    /* WARNING: Subroutine does not return */
      native_sub_432810();
    }
    bVar1 = *(char *)((long)plVar3 + 100) != '\0';
  }
  else {
    bVar1 = false;
  }
  return bVar1;
}



/* NGUIText$$CalculatePrintedSize @ 0x80cd38
 * UnityEngine_Vector2_o NGUIText__CalculatePrintedSize (System_String_o* text, bool prepare, const MethodInfo* method); */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* NGUIText$$CalculatePrintedSize
   UnityEngine_Vector2_o NGUIText__CalculatePrintedSize (System_String_o* text, bool prepare, const
   MethodInfo* method); */

undefined1  [16] native_NGUIText__CalculatePrintedSize_80cd38(long param_1,ulong param_2)

{
  int iVar1;
  char cVar2;
  char cVar3;
  ushort uVar4;
  int iVar5;
  int iVar6;
  ulong uVar7;
  long lVar8;
  long lVar9;
  ushort uVar10;
  ushort uVar11;
  float fVar12;
  float fVar13;
  double dVar14;
  undefined1 auVar15 [16];
  float fVar16;
  ulong uVar17;
  undefined8 uVar18;
  int iVar19;
  float fVar20;
  float fVar21;
  float fVar22;
  float fVar23;
  int iStack_dc;
  float fStack_d8;
  undefined1 auStack_d4 [4];
  undefined1 auStack_d0 [4];
  undefined1 auStack_cc [4];
  undefined1 auStack_c8 [4];
  char acStack_c4 [4];
  char acStack_c0 [4];
  int iStack_bc;
  long lStack_b8;
  double adStack_b0 [2];
  
  lStack_b8 = param_1;
  if ((bRam000000000134049f & 1) == 0) {
    native_sub_43273c(&Method_BetterList_Color__Clear___12d8930);
    native_sub_43273c(&NGUIText_TypeInfo_12d53c0);
    bRam000000000134049f = 1;
  }
  iStack_bc = 0;
  acStack_c0[0] = '\0';
  acStack_c4[0] = '\0';
  auStack_c8[0] = 0;
  auStack_cc[0] = 0;
  auStack_d0[0] = 0;
  auStack_d4[0] = 0;
  iStack_dc = 0;
  fStack_d8 = 0.0;
  auVar15 = native_UnityEngine_Vector2__get_zero_765ef0(0);
  uVar18 = auVar15._8_8_;
  uVar17 = auVar15._0_8_;
  uVar7 = native_System_String__IsNullOrEmpty_b09430(param_1,0);
  if ((uVar7 & 1) == 0) {
    if ((param_2 & 1) != 0) {
      if (((*(byte *)(_NGUIText_TypeInfo_12d53c0 + 0x133) >> 2 & 1) != 0) &&
         (*(int *)(_NGUIText_TypeInfo_12d53c0 + 0xe0) == 0)) {
        native_sub_4327ec();
      }
      native_NGUIText__Prepare_808c84(param_1);
    }
    if (((*(byte *)(_NGUIText_TypeInfo_12d53c0 + 0x133) >> 2 & 1) != 0) &&
       (*(int *)(_NGUIText_TypeInfo_12d53c0 + 0xe0) == 0)) {
      native_sub_4327ec();
    }
    lVar8 = *(long *)(*(long *)(_NGUIText_TypeInfo_12d53c0 + 0xb8) + 0xb8);
    if (lVar8 != 0) {
      native_BetterList_Color___Clear_ba192c(lVar8,_Method_BetterList_Color__Clear___12d8930);
      lVar8 = *(long *)(_NGUIText_TypeInfo_12d53c0 + 0xb8);
      iVar19 = *(int *)(lVar8 + 0x48);
      func_0x002c9600((double)(*(float *)(lVar8 + 0x80) * *(float *)(lVar8 + 0x20) * 0.5),adStack_b0
                     );
      lVar8 = lStack_b8;
      if (lStack_b8 != 0) {
        iVar1 = *(int *)(lStack_b8 + 0x10);
        iStack_bc = 0;
        acStack_c0[0] = '\0';
        acStack_c4[0] = '\0';
        auStack_c8[0] = 0;
        auStack_cc[0] = 0;
        auStack_d0[0] = 0;
        auStack_d4[0] = 0;
        fVar12 = (float)native_NGUIText__get_symbolScale_80c8d8();
        iVar5 = native_NGUIText__get_symbolMaxHeight_80cb28();
        iStack_dc = 0;
        fStack_d8 = 0.0;
        if (iVar1 < 1) {
          fVar22 = 0.0;
LAB_0080d544:
          if (((*(byte *)(_NGUIText_TypeInfo_12d53c0 + 0x133) >> 2 & 1) != 0) &&
             (*(int *)(_NGUIText_TypeInfo_12d53c0 + 0xe0) == 0)) {
            native_sub_4327ec();
          }
          uVar17 = (ulong)(uint)(int)fVar22;
          uVar18 = 0;
          goto LAB_0080d574;
        }
        fVar22 = 0.0;
        fVar23 = (float)iVar19 + 0.01;
        fVar21 = 0.0;
        uVar10 = 0;
        do {
          uVar4 = native_System_String__get_Chars_b03810(lVar8,iStack_dc,0);
          if (((*(byte *)(_NGUIText_TypeInfo_12d53c0 + 0x133) >> 2 & 1) != 0) &&
             (*(int *)(_NGUIText_TypeInfo_12d53c0 + 0xe0) == 0)) {
            native_sub_4327ec(_NGUIText_TypeInfo_12d53c0);
          }
          lVar8 = lStack_b8;
          lVar9 = *(long *)(_NGUIText_TypeInfo_12d53c0 + 0xb8);
          if (*(char *)(lVar9 + 0x78) == '\0') {
LAB_0080d008:
            if (uVar4 == 10) {
              fVar20 = fVar21;
              if (fVar21 <= fVar22) {
                fVar20 = fVar22;
              }
              if (((*(byte *)(_NGUIText_TypeInfo_12d53c0 + 0x133) >> 2 & 1) != 0) &&
                 (*(int *)(_NGUIText_TypeInfo_12d53c0 + 0xe0) == 0)) {
                native_sub_4327ec();
              }
              fVar21 = 0.0;
              fVar22 = fVar20;
              uVar11 = 0;
              goto LAB_0080d4e4;
            }
            uVar11 = uVar4;
            if (uVar4 < 0x20) goto LAB_0080d4e4;
            if (((*(byte *)(_NGUIText_TypeInfo_12d53c0 + 0x133) >> 2 & 1) != 0) &&
               (*(int *)(_NGUIText_TypeInfo_12d53c0 + 0xe0) == 0)) {
              native_sub_4327ec();
            }
            iVar19 = iStack_dc;
            if (*(char *)(*(long *)(_NGUIText_TypeInfo_12d53c0 + 0xb8) + 0x9c) == '\0') {
              lVar8 = 0;
            }
            else {
              if (((*(byte *)(_NGUIText_TypeInfo_12d53c0 + 0x133) >> 2 & 1) != 0) &&
                 (*(int *)(_NGUIText_TypeInfo_12d53c0 + 0xe0) == 0)) {
                native_sub_4327ec();
              }
              lVar8 = native_NGUIText__GetSymbol_809ca4(&lStack_b8,iVar19,iVar1);
            }
            iVar19 = iStack_bc;
            if (iStack_bc == 0) {
              if (fStack_d8 == 0.0) {
                if (((*(ushort *)(_NGUIText_TypeInfo_12d53c0 + 0x132) >> 10 & 1) != 0) &&
                   (*(int *)(_NGUIText_TypeInfo_12d53c0 + 0xe0) == 0)) {
                  native_sub_4327ec();
                }
                fVar20 = *(float *)(*(long *)(_NGUIText_TypeInfo_12d53c0 + 0xb8) + 0x20);
                cVar2 = acStack_c4[0];
                cVar3 = acStack_c0[0];
              }
              else {
                if (((*(ushort *)(_NGUIText_TypeInfo_12d53c0 + 0x132) >> 10 & 1) != 0) &&
                   (*(int *)(_NGUIText_TypeInfo_12d53c0 + 0xe0) == 0)) {
                  native_sub_4327ec();
                }
                fVar20 = *(float *)(*(long *)(_NGUIText_TypeInfo_12d53c0 + 0xb8) + 0x20) * fStack_d8
                ;
                cVar2 = acStack_c4[0];
                cVar3 = acStack_c0[0];
              }
            }
            else {
              if (((*(byte *)(_NGUIText_TypeInfo_12d53c0 + 0x133) >> 2 & 1) != 0) &&
                 (*(int *)(_NGUIText_TypeInfo_12d53c0 + 0xe0) == 0)) {
                native_sub_4327ec();
              }
              fVar20 = *(float *)(*(long *)(_NGUIText_TypeInfo_12d53c0 + 0xb8) + 0x20) * fStack_d8;
              cVar2 = acStack_c4[0];
              cVar3 = acStack_c0[0];
            }
            acStack_c4[0] = cVar2;
            acStack_c0[0] = cVar3;
            if (lVar8 == 0) {
              if (((*(byte *)(_NGUIText_TypeInfo_12d53c0 + 0x133) >> 2 & 1) != 0) &&
                 (*(int *)(_NGUIText_TypeInfo_12d53c0 + 0xe0) == 0)) {
                native_sub_4327ec();
              }
              lVar8 = native_NGUIText__GetGlyph_80a174
                                (fVar20,uVar4,uVar10,cVar3 != '\0',cVar2 != '\0');
              uVar11 = uVar10;
              if (lVar8 != 0) {
                fVar20 = *(float *)(lVar8 + 0x40);
                lVar9 = _NGUIText_TypeInfo_12d53c0;
                if (iVar19 != 0) {
                  if (iVar19 == 1) {
                    if (((*(ushort *)(_NGUIText_TypeInfo_12d53c0 + 0x132) >> 10 & 1) != 0) &&
                       (*(int *)(_NGUIText_TypeInfo_12d53c0 + 0xe0) == 0)) {
                      native_sub_4327ec();
                    }
                    fVar13 = *(float *)(*(long *)(_NGUIText_TypeInfo_12d53c0 + 0xb8) + 0x20) *
                             (float)*(int *)(*(long *)(_NGUIText_TypeInfo_12d53c0 + 0xb8) + 0x1c) *
                             0.4;
                    fVar16 = *(float *)(lVar8 + 0x14) - fVar13;
                    fVar13 = *(float *)(lVar8 + 0x1c) - fVar13;
                  }
                  else {
                    if (((*(ushort *)(_NGUIText_TypeInfo_12d53c0 + 0x132) >> 10 & 1) != 0) &&
                       (*(int *)(_NGUIText_TypeInfo_12d53c0 + 0xe0) == 0)) {
                      native_sub_4327ec();
                    }
                    fVar13 = *(float *)(*(long *)(_NGUIText_TypeInfo_12d53c0 + 0xb8) + 0x20) *
                             (float)*(int *)(*(long *)(_NGUIText_TypeInfo_12d53c0 + 0xb8) + 0x1c) *
                             0.05;
                    fVar16 = *(float *)(lVar8 + 0x14) + fVar13;
                    fVar13 = *(float *)(lVar8 + 0x1c) + fVar13;
                  }
                  lVar9 = _NGUIText_TypeInfo_12d53c0;
                  *(float *)(lVar8 + 0x14) = fVar16;
                  *(float *)(lVar8 + 0x1c) = fVar13;
                }
                if (((*(byte *)(lVar9 + 0x133) >> 2 & 1) != 0) && (*(int *)(lVar9 + 0xe0) == 0)) {
                  native_sub_4327ec();
                  lVar9 = _NGUIText_TypeInfo_12d53c0;
                }
                fVar20 = fVar21 + fVar20 + *(float *)(*(long *)(lVar9 + 0xb8) + 0x90);
                if (fVar20 <= fVar23) {
                  if (fVar22 < fVar20) {
                    fVar22 = fVar20;
                  }
                }
                else {
                  uVar11 = uVar4;
                  if (fVar21 == 0.0) goto LAB_0080d4e4;
                  if (((*(byte *)(lVar9 + 0x133) >> 2 & 1) != 0) && (*(int *)(lVar9 + 0xe0) == 0)) {
                    native_sub_4327ec();
                    lVar9 = _NGUIText_TypeInfo_12d53c0;
                  }
                }
                if (((*(byte *)(lVar9 + 0x133) >> 2 & 1) != 0) && (*(int *)(lVar9 + 0xe0) == 0)) {
                  native_sub_4327ec();
                }
                fVar21 = fVar20;
                if (iVar19 != 0) {
                  dVar14 = (double)func_0x002c9600((double)fVar20,adStack_b0);
                  if (0.0 <= fVar20) {
                    if (dVar14 == 0.5) {
                      fVar20 = 1.0;
                      goto LAB_0080d480;
                    }
                    fVar21 = (float)(int)(fVar20 + 0.5);
                  }
                  else if (dVar14 == -0.5) {
                    fVar20 = -1.0;
LAB_0080d480:
                    fVar21 = (float)adStack_b0[0];
                    if (((long)adStack_b0[0] & 1U) != 0) {
                      fVar21 = (float)adStack_b0[0] + fVar20;
                    }
                  }
                  else {
                    fVar21 = (float)(int)(fVar20 + -0.5);
                  }
                }
                uVar11 = uVar4;
                if (((*(byte *)(_NGUIText_TypeInfo_12d53c0 + 0x133) >> 2 & 1) != 0) &&
                   (*(int *)(_NGUIText_TypeInfo_12d53c0 + 0xe0) == 0)) {
                  native_sub_4327ec();
                }
              }
              goto LAB_0080d4e4;
            }
            iVar19 = native_BMSymbol__get_paddedHeight_dd218c(lVar8,0);
            if (((iVar5 < iVar19) && (iVar5 != 0)) && (*(char *)(lVar8 + 0x21) == '\0')) {
              fVar20 = fVar20 * ((float)iVar5 / (float)iVar19);
            }
            fVar13 = (float)*(int *)(lVar8 + 0x48);
            if (*(char *)(lVar8 + 0x21) == '\0') {
              fVar20 = fVar12 * fVar20 * (float)*(int *)(lVar8 + 0x48);
              dVar14 = (double)func_0x002c9600((double)fVar20,adStack_b0);
              if (0.0 <= fVar20) {
                if (dVar14 == 0.5) {
                  fVar20 = 1.0;
                  goto LAB_0080d284;
                }
                fVar13 = (float)(int)(fVar20 + 0.5);
              }
              else if (dVar14 == -0.5) {
                fVar20 = -1.0;
LAB_0080d284:
                fVar13 = (float)adStack_b0[0];
                if (((long)adStack_b0[0] & 1U) != 0) {
                  fVar13 = (float)adStack_b0[0] + fVar20;
                }
              }
              else {
                fVar13 = (float)(int)(fVar20 + -0.5);
              }
            }
            fVar20 = fVar21 + fVar13;
            if (fVar20 <= fVar23) {
              if (fVar22 < fVar20) {
                fVar22 = fVar20;
              }
LAB_0080d3b4:
              if (((*(byte *)(_NGUIText_TypeInfo_12d53c0 + 0x133) >> 2 & 1) != 0) &&
                 (*(int *)(_NGUIText_TypeInfo_12d53c0 + 0xe0) == 0)) {
                native_sub_4327ec();
              }
              iVar19 = iStack_dc;
              fVar21 = fVar21 + fVar13 + *(float *)(*(long *)(_NGUIText_TypeInfo_12d53c0 + 0xb8) +
                                                   0x90);
              iVar6 = native_BMSymbol__get_length_dd2140(lVar8,0);
              iStack_dc = iVar19 + iVar6 + -1;
              uVar11 = 0;
              goto LAB_0080d4e4;
            }
            if (fVar21 != 0.0) {
              fVar20 = fVar21;
              if (fVar21 <= fVar22) {
                fVar20 = fVar22;
              }
              if (((*(byte *)(_NGUIText_TypeInfo_12d53c0 + 0x133) >> 2 & 1) != 0) &&
                 (*(int *)(_NGUIText_TypeInfo_12d53c0 + 0xe0) == 0)) {
                native_sub_4327ec();
              }
              fVar21 = 0.0;
              fVar22 = fVar20;
              goto LAB_0080d3b4;
            }
LAB_0080d504:
            if (fVar22 < fVar21) {
              if (((*(byte *)(_NGUIText_TypeInfo_12d53c0 + 0x133) >> 2 & 1) != 0) &&
                 (*(int *)(_NGUIText_TypeInfo_12d53c0 + 0xe0) == 0)) {
                native_sub_4327ec();
              }
              fVar22 = fVar21 - *(float *)(*(long *)(_NGUIText_TypeInfo_12d53c0 + 0xb8) + 0x90);
            }
            goto LAB_0080d544;
          }
          if (((*(byte *)(_NGUIText_TypeInfo_12d53c0 + 0x133) >> 2 & 1) != 0) &&
             (*(int *)(_NGUIText_TypeInfo_12d53c0 + 0xe0) == 0)) {
            native_sub_4327ec(_NGUIText_TypeInfo_12d53c0);
            lVar9 = *(long *)(_NGUIText_TypeInfo_12d53c0 + 0xb8);
          }
          uVar7 = native_NGUIText__ParseSymbol_8091a4
                            (lVar8,&iStack_dc,*(undefined8 *)(lVar9 + 0xb8),
                             *(undefined1 *)(lVar9 + 0x84),&iStack_bc,&fStack_d8,acStack_c0,
                             acStack_c4,auStack_c8,auStack_cc,auStack_d0,auStack_d4);
          if ((uVar7 & 1) == 0) goto LAB_0080d008;
          iStack_dc = iStack_dc + -1;
          uVar11 = uVar10;
LAB_0080d4e4:
          iStack_dc = iStack_dc + 1;
          if (iVar1 <= iStack_dc) goto LAB_0080d504;
          lVar8 = lStack_b8;
          uVar10 = uVar11;
        } while (lStack_b8 != 0);
      }
    }
                    /* WARNING: Subroutine does not return */
    native_sub_432810();
  }
LAB_0080d574:
  auVar15._8_8_ = uVar18;
  auVar15._0_8_ = uVar17;
  return auVar15;
}



/* NGUIText$$CalculateOffsetToFit @ 0x80d5ac
 * int32_t NGUIText__CalculateOffsetToFit (System_String_o* text, bool prepare, const MethodInfo* method); */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* NGUIText$$CalculateOffsetToFit
   int32_t NGUIText__CalculateOffsetToFit (System_String_o* text, bool prepare, const MethodInfo*
   method); */

int native_NGUIText__CalculateOffsetToFit_80d5ac(long param_1,ulong param_2)

{
  undefined4 uVar1;
  ushort uVar2;
  char cVar3;
  undefined2 uVar4;
  int iVar5;
  int iVar6;
  ulong uVar7;
  long lVar8;
  undefined8 uVar9;
  byte bVar10;
  char cVar11;
  long lVar12;
  uint uVar13;
  int iVar14;
  undefined2 uVar15;
  int iVar16;
  float fVar17;
  float fVar18;
  double dVar19;
  float fVar20;
  float fVar21;
  int iStack_dc;
  float fStack_d8;
  undefined1 auStack_d4 [4];
  undefined1 auStack_d0 [4];
  undefined1 auStack_cc [4];
  undefined1 auStack_c8 [4];
  char acStack_c4 [4];
  char acStack_c0 [4];
  int iStack_bc;
  long lStack_b8;
  double adStack_b0 [2];
  
  lStack_b8 = param_1;
  if ((bRam00000000013404a0 & 1) == 0) {
    native_sub_43273c(&Method_BetterList_float__Add___12d8948);
    native_sub_43273c(&Method_BetterList_Color__Clear___12d8930);
    native_sub_43273c(&Method_BetterList_float__Clear___12d8950);
    native_sub_43273c(&NGUIText_TypeInfo_12d53c0);
    bRam00000000013404a0 = 1;
  }
  iStack_bc = 0;
  acStack_c0[0] = '\0';
  acStack_c4[0] = '\0';
  auStack_c8[0] = 0;
  auStack_cc[0] = 0;
  auStack_d0[0] = 0;
  auStack_d4[0] = 0;
  iStack_dc = 0;
  fStack_d8 = 0.0;
  uVar7 = native_System_String__IsNullOrEmpty_b09430(param_1,0);
  if ((uVar7 & 1) == 0) {
    if (((*(byte *)(_NGUIText_TypeInfo_12d53c0 + 0x133) >> 2 & 1) != 0) &&
       (*(int *)(_NGUIText_TypeInfo_12d53c0 + 0xe0) == 0)) {
      native_sub_4327ec();
    }
    if (0 < *(int *)(*(long *)(_NGUIText_TypeInfo_12d53c0 + 0xb8) + 0x48)) {
      if ((param_2 & 1) != 0) {
        if (((*(byte *)(_NGUIText_TypeInfo_12d53c0 + 0x133) >> 2 & 1) != 0) &&
           (*(int *)(_NGUIText_TypeInfo_12d53c0 + 0xe0) == 0)) {
          native_sub_4327ec();
        }
        native_NGUIText__Prepare_808c84(param_1);
      }
      if (((*(byte *)(_NGUIText_TypeInfo_12d53c0 + 0x133) >> 2 & 1) != 0) &&
         (*(int *)(_NGUIText_TypeInfo_12d53c0 + 0xe0) == 0)) {
        native_sub_4327ec();
      }
      lVar8 = *(long *)(*(long *)(_NGUIText_TypeInfo_12d53c0 + 0xb8) + 0xb8);
      if ((lVar8 != 0) &&
         (native_BetterList_Color___Clear_ba192c(lVar8,_Method_BetterList_Color__Clear___12d8930),
         param_1 != 0)) {
        uVar1 = *(undefined4 *)(param_1 + 0x10);
        iStack_bc = 0;
        acStack_c0[0] = '\0';
        acStack_c4[0] = '\0';
        auStack_c8[0] = 0;
        auStack_cc[0] = 0;
        auStack_d0[0] = 0;
        auStack_d4[0] = 0;
        fVar17 = (float)native_NGUIText__get_symbolScale_80c8d8();
        iVar5 = native_NGUIText__get_symbolMaxHeight_80cb28();
        iStack_dc = 0;
        fStack_d8 = 0.0;
        iVar14 = *(int *)(param_1 + 0x10);
        bVar10 = *(byte *)(_NGUIText_TypeInfo_12d53c0 + 0x133) >> 2 & 1;
        if (0 < iVar14) {
          uVar15 = 0;
          do {
            if ((bVar10 != 0) && (*(int *)(_NGUIText_TypeInfo_12d53c0 + 0xe0) == 0)) {
              native_sub_4327ec();
            }
            lVar8 = lStack_b8;
            lVar12 = *(long *)(_NGUIText_TypeInfo_12d53c0 + 0xb8);
            if (*(char *)(lVar12 + 0x78) == '\0') {
LAB_0080d7e8:
              if (((*(byte *)(_NGUIText_TypeInfo_12d53c0 + 0x133) >> 2 & 1) != 0) &&
                 (*(int *)(_NGUIText_TypeInfo_12d53c0 + 0xe0) == 0)) {
                native_sub_4327ec();
              }
              iVar6 = iStack_dc;
              if (*(char *)(*(long *)(_NGUIText_TypeInfo_12d53c0 + 0xb8) + 0x9c) == '\0') {
                lVar8 = 0;
              }
              else {
                if (((*(byte *)(_NGUIText_TypeInfo_12d53c0 + 0x133) >> 2 & 1) != 0) &&
                   (*(int *)(_NGUIText_TypeInfo_12d53c0 + 0xe0) == 0)) {
                  native_sub_4327ec();
                }
                lVar8 = native_NGUIText__GetSymbol_809ca4(&lStack_b8,iVar6,uVar1);
              }
              if (iStack_bc == 0) {
                if (fStack_d8 == 0.0) {
                  if (((*(ushort *)(_NGUIText_TypeInfo_12d53c0 + 0x132) >> 10 & 1) != 0) &&
                     (*(int *)(_NGUIText_TypeInfo_12d53c0 + 0xe0) == 0)) {
                    native_sub_4327ec();
                  }
                  fVar20 = *(float *)(*(long *)(_NGUIText_TypeInfo_12d53c0 + 0xb8) + 0x20);
                }
                else {
                  if (((*(ushort *)(_NGUIText_TypeInfo_12d53c0 + 0x132) >> 10 & 1) != 0) &&
                     (*(int *)(_NGUIText_TypeInfo_12d53c0 + 0xe0) == 0)) {
                    native_sub_4327ec();
                  }
                  fVar20 = *(float *)(*(long *)(_NGUIText_TypeInfo_12d53c0 + 0xb8) + 0x20) *
                           fStack_d8;
                }
              }
              else {
                if (((*(byte *)(_NGUIText_TypeInfo_12d53c0 + 0x133) >> 2 & 1) != 0) &&
                   (*(int *)(_NGUIText_TypeInfo_12d53c0 + 0xe0) == 0)) {
                  native_sub_4327ec();
                }
                fVar20 = *(float *)(*(long *)(_NGUIText_TypeInfo_12d53c0 + 0xb8) + 0x20) * fStack_d8
                ;
              }
              if (lVar8 != 0) {
                iVar6 = native_BMSymbol__get_paddedHeight_dd218c(lVar8,0);
                cVar11 = *(char *)(lVar8 + 0x21);
                if (((iVar5 < iVar6) && (iVar5 != 0)) && (cVar11 == '\0')) {
                  fVar20 = fVar20 * ((float)iVar5 / (float)iVar6);
                }
                if (((*(byte *)(_NGUIText_TypeInfo_12d53c0 + 0x133) >> 2 & 1) != 0) &&
                   (*(int *)(_NGUIText_TypeInfo_12d53c0 + 0xe0) == 0)) {
                  native_sub_4327ec();
                  cVar11 = *(char *)(lVar8 + 0x21);
                }
                lVar12 = *(long *)(*(long *)(_NGUIText_TypeInfo_12d53c0 + 0xb8) + 0xf8);
                fVar21 = *(float *)(*(long *)(_NGUIText_TypeInfo_12d53c0 + 0xb8) + 0x90);
                fVar18 = (float)*(int *)(lVar8 + 0x48);
                if (cVar11 == '\0') {
                  fVar20 = fVar17 * fVar20 * fVar18;
                  dVar19 = (double)func_0x002c9600((double)fVar20,adStack_b0);
                  if (0.0 <= fVar20) {
                    if (dVar19 == 0.5) {
                      fVar20 = (float)adStack_b0[0] + 1.0;
                      goto LAB_0080daf0;
                    }
                    fVar18 = (float)(int)(fVar20 + 0.5);
                  }
                  else if (dVar19 == -0.5) {
                    fVar20 = (float)adStack_b0[0] + -1.0;
LAB_0080daf0:
                    fVar18 = (float)adStack_b0[0];
                    if (((long)adStack_b0[0] & 1U) != 0) {
                      fVar18 = fVar20;
                    }
                  }
                  else {
                    fVar18 = (float)(int)(fVar20 + -0.5);
                  }
                }
                if (lVar12 != 0) {
                  native_BetterList_float___Add_ba3018
                            (fVar21 + fVar18,lVar12,_Method_BetterList_float__Add___12d8948);
                  lVar12 = *(long *)(lVar8 + 0x10);
                  if (lVar12 != 0) {
                    iVar6 = *(int *)(lVar12 + 0x10) + -1;
                    if (0 < iVar6) {
                      iVar16 = 0;
                      do {
                        if (((*(byte *)(_NGUIText_TypeInfo_12d53c0 + 0x133) >> 2 & 1) != 0) &&
                           (*(int *)(_NGUIText_TypeInfo_12d53c0 + 0xe0) == 0)) {
                          native_sub_4327ec();
                        }
                        lVar12 = *(long *)(*(long *)(_NGUIText_TypeInfo_12d53c0 + 0xb8) + 0xf8);
                        if (lVar12 == 0) goto LAB_0080dc54;
                        native_BetterList_float___Add_ba3018
                                  (0,lVar12,_Method_BetterList_float__Add___12d8948);
                        iVar16 = iVar16 + 1;
                      } while (iVar16 < iVar6);
                      lVar12 = *(long *)(lVar8 + 0x10);
                      if (lVar12 == 0) goto LAB_0080dc54;
                    }
                    iStack_dc = iStack_dc + *(int *)(lVar12 + 0x10);
                    uVar4 = 0;
                    goto LAB_0080d964;
                  }
                }
                goto LAB_0080dc54;
              }
              if (lStack_b8 == 0) goto LAB_0080dc54;
              uVar4 = native_System_String__get_Chars_b03810(lStack_b8,iStack_dc,0);
              cVar3 = acStack_c0[0];
              cVar11 = acStack_c4[0];
              if (((*(byte *)(_NGUIText_TypeInfo_12d53c0 + 0x133) >> 2 & 1) != 0) &&
                 (*(int *)(_NGUIText_TypeInfo_12d53c0 + 0xe0) == 0)) {
                native_sub_4327ec(_NGUIText_TypeInfo_12d53c0);
              }
              fVar20 = (float)native_NGUIText__GetGlyphWidth_809de8
                                        (fVar20,uVar4,uVar15,cVar3 != '\0',cVar11 != '\0');
              if (fVar20 != 0.0) {
                if (((*(byte *)(_NGUIText_TypeInfo_12d53c0 + 0x133) >> 2 & 1) != 0) &&
                   (*(int *)(_NGUIText_TypeInfo_12d53c0 + 0xe0) == 0)) {
                  native_sub_4327ec();
                }
                lVar8 = *(long *)(*(long *)(_NGUIText_TypeInfo_12d53c0 + 0xb8) + 0xf8);
                if (lVar8 == 0) goto LAB_0080dc54;
                native_BetterList_float___Add_ba3018
                          (fVar20 + *(float *)(*(long *)(_NGUIText_TypeInfo_12d53c0 + 0xb8) + 0x90),
                           lVar8,_Method_BetterList_float__Add___12d8948);
              }
            }
            else {
              if (((*(byte *)(_NGUIText_TypeInfo_12d53c0 + 0x133) >> 2 & 1) != 0) &&
                 (*(int *)(_NGUIText_TypeInfo_12d53c0 + 0xe0) == 0)) {
                native_sub_4327ec();
                lVar12 = *(long *)(_NGUIText_TypeInfo_12d53c0 + 0xb8);
              }
              uVar7 = native_NGUIText__ParseSymbol_8091a4
                                (lVar8,&iStack_dc,*(undefined8 *)(lVar12 + 0xb8),
                                 *(undefined1 *)(lVar12 + 0x84),&iStack_bc,&fStack_d8,acStack_c0,
                                 acStack_c4,auStack_c8,auStack_cc,auStack_d0,auStack_d4);
              uVar4 = uVar15;
              if ((uVar7 & 1) == 0) goto LAB_0080d7e8;
LAB_0080d964:
              iStack_dc = iStack_dc + -1;
            }
            iStack_dc = iStack_dc + 1;
            bVar10 = *(byte *)(_NGUIText_TypeInfo_12d53c0 + 0x133) >> 2 & 1;
            uVar15 = uVar4;
          } while (iStack_dc < iVar14);
        }
        if ((bVar10 != 0) && (*(int *)(_NGUIText_TypeInfo_12d53c0 + 0xe0) == 0)) {
          native_sub_4327ec();
        }
        lVar8 = *(long *)(*(long *)(_NGUIText_TypeInfo_12d53c0 + 0xb8) + 0xf8);
        if (lVar8 != 0) {
          uVar2 = *(ushort *)(_NGUIText_TypeInfo_12d53c0 + 0x132);
          uVar13 = (uint)uVar2;
          iVar14 = *(int *)(lVar8 + 0x18);
          iVar5 = *(int *)(*(long *)(_NGUIText_TypeInfo_12d53c0 + 0xb8) + 0x48);
          fVar17 = (float)iVar5;
          lVar8 = _NGUIText_TypeInfo_12d53c0;
          if ((0 < iVar14) && (0 < iVar5)) {
            uVar7 = (long)iVar14;
            do {
              if (((uVar2 & 0x400) != 0) && (*(int *)(lVar8 + 0xe0) == 0)) {
                native_sub_4327ec();
                lVar8 = _NGUIText_TypeInfo_12d53c0;
              }
              lVar12 = *(long *)(*(long *)(lVar8 + 0xb8) + 0xf8);
              if ((lVar12 == 0) || (lVar12 = *(long *)(lVar12 + 0x10), lVar12 == 0))
              goto LAB_0080dc54;
              if ((ulong)*(uint *)(lVar12 + 0x18) <= uVar7 - 1) {
                uVar9 = native_sub_43283c();
                    /* WARNING: Subroutine does not return */
                native_sub_4327dc(uVar9,0);
              }
              uVar2 = *(ushort *)(lVar8 + 0x132);
              uVar13 = (uint)uVar2;
              iVar14 = iVar14 + -1;
              fVar17 = fVar17 - *(float *)(lVar12 + uVar7 * 4 + 0x1c);
            } while ((1 < (long)uVar7) && (uVar7 = uVar7 - 1, 0.0 < fVar17));
          }
          if (((uVar13 >> 10 & 1) != 0) && (*(int *)(lVar8 + 0xe0) == 0)) {
            native_sub_4327ec();
            lVar8 = _NGUIText_TypeInfo_12d53c0;
          }
          lVar8 = *(long *)(*(long *)(lVar8 + 0xb8) + 0xf8);
          if (lVar8 != 0) {
            native_BetterList_float___Clear_ba3000(lVar8,_Method_BetterList_float__Clear___12d8950);
            if (fVar17 < 0.0) {
              return iVar14 + 1;
            }
            return iVar14;
          }
        }
      }
LAB_0080dc54:
                    /* WARNING: Subroutine does not return */
      native_sub_432810();
    }
  }
  return 0;
}



/* NGUIText$$GetEndOfLineThatFits @ 0x80dc64
 * System_String_o* NGUIText__GetEndOfLineThatFits (System_String_o* text, const MethodInfo* method); */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* NGUIText$$GetEndOfLineThatFits
   System_String_o* NGUIText__GetEndOfLineThatFits (System_String_o* text, const MethodInfo*
   method); */

long native_NGUIText__GetEndOfLineThatFits_80dc64(long param_1)

{
  int iVar1;
  int iVar2;
  int iVar3;
  undefined *puVar4;
  undefined8 uVar5;
  undefined8 uVar6;
  undefined8 uVar7;
  long lVar8;
  
  if ((bRam00000000013404a1 & 1) == 0) {
    native_sub_43273c(&NGUIText_TypeInfo_12d53c0);
    bRam00000000013404a1 = 1;
  }
  if (param_1 == 0) {
                    /* WARNING: Subroutine does not return */
    native_sub_432810();
  }
  iVar1 = *(int *)(param_1 + 0x10);
  if (((*(byte *)(_NGUIText_TypeInfo_12d53c0 + 0x133) >> 2 & 1) != 0) &&
     (*(int *)(_NGUIText_TypeInfo_12d53c0 + 0xe0) == 0)) {
    native_sub_4327ec();
  }
  iVar3 = native_NGUIText__CalculateOffsetToFit_80d5ac(param_1,1);
  iVar1 = iVar1 - iVar3;
  if ((bRam0000000001342123 & 1) == 0) {
    native_sub_43273c(&string_TypeInfo_12d5f28,iVar3,iVar1,0);
    bRam0000000001342123 = 1;
  }
  if (iVar3 < 0) {
    puVar4 = &StringLiteral_StartIndex_cannot_be_less_than_zero__12f1060;
  }
  else {
    iVar2 = *(int *)(param_1 + 0x10);
    if (iVar3 <= iVar2) {
      if (iVar1 < 0) {
        puVar4 = &StringLiteral_Length_cannot_be_less_than_zero__12ef570;
      }
      else {
        if (iVar3 <= iVar2 - iVar1) {
          if (iVar1 == 0) {
            param_1 = **(long **)(_string_TypeInfo_12d5f28 + 0xb8);
          }
          else if ((iVar3 != 0) || (iVar2 != iVar1)) {
            lVar8 = native_sub_3bca18(iVar1);
            if (lVar8 != 0) {
              native_System_Buffer__Memcpy_85e1a8
                        (lVar8 + 0x14,param_1 + (long)iVar3 * 2 + 0x14,iVar1 * 2,0);
              return lVar8;
            }
                    /* WARNING: Subroutine does not return */
            native_sub_432810();
          }
          return param_1;
        }
        puVar4 = &StringLiteral_Index_and_length_must_refer_to_a_location_within_the_string__12ee7f0
        ;
      }
      uVar5 = native_sub_432740(puVar4);
      uVar5 = native_System_Environment__GetResourceString_beaba8(uVar5,0);
      native_sub_432740(&System_ArgumentOutOfRangeException_TypeInfo_12d3810);
      uVar6 = native_sub_432808();
      puVar4 = &StringLiteral_length_12f5428;
      goto code_r0x00b0a0e0;
    }
    puVar4 = &StringLiteral_startIndex_cannot_be_larger_than_length_of_string__12f6240;
  }
  uVar5 = native_sub_432740(puVar4);
  uVar5 = native_System_Environment__GetResourceString_beaba8(uVar5,0);
  native_sub_432740(&System_ArgumentOutOfRangeException_TypeInfo_12d3810);
  uVar6 = native_sub_432808();
  puVar4 = &StringLiteral_startIndex_12f6228;
code_r0x00b0a0e0:
  uVar7 = native_sub_432740(puVar4);
  native_System_ArgumentOutOfRangeException___ctor_951f98(uVar6,uVar7,uVar5,0);
  uVar5 = native_sub_432740(&Method_System_String_Substring___12e6d80);
                    /* WARNING: Subroutine does not return */
  native_sub_4327dc(uVar6,uVar5);
}



/* NGUIText$$WrapText @ 0x80dce8
 * bool NGUIText__WrapText (System_String_o* text, System_String_o** finalText, bool wrapLineColors, const MethodInfo* method); */

/* WARNING: Removing unreachable block (ram,0x0080e1f0) */
/* WARNING: Removing unreachable block (ram,0x0080e1f4) */
/* WARNING: Removing unreachable block (ram,0x0080e1fc) */
/* WARNING: Removing unreachable block (ram,0x0080e208) */
/* WARNING: Removing unreachable block (ram,0x0080ed30) */
/* WARNING: Removing unreachable block (ram,0x0080ed34) */
/* WARNING: Removing unreachable block (ram,0x0080ed38) */
/* WARNING: Removing unreachable block (ram,0x0080ed3c) */
/* WARNING: Removing unreachable block (ram,0x0080ed40) */
/* WARNING: Removing unreachable block (ram,0x0080f564) */
/* WARNING: Removing unreachable block (ram,0x0080f574) */
/* WARNING: Removing unreachable block (ram,0x0080f580) */
/* WARNING: Removing unreachable block (ram,0x0080f588) */
/* WARNING: Removing unreachable block (ram,0x0080f590) */
/* WARNING: Removing unreachable block (ram,0x0080f59c) */
/* WARNING: Removing unreachable block (ram,0x0080f5b8) */
/* WARNING: Removing unreachable block (ram,0x0080f6bc) */
/* WARNING: Removing unreachable block (ram,0x0080f6c8) */
/* WARNING: Removing unreachable block (ram,0x0080f6cc) */
/* WARNING: Removing unreachable block (ram,0x0080f7a4) */
/* WARNING: Removing unreachable block (ram,0x0080f7b0) */
/* WARNING: Removing unreachable block (ram,0x0080f7b8) */
/* WARNING: Removing unreachable block (ram,0x0080f7c0) */
/* WARNING: Removing unreachable block (ram,0x0080f7cc) */
/* WARNING: Removing unreachable block (ram,0x0080f5bc) */
/* WARNING: Removing unreachable block (ram,0x0080f5cc) */
/* WARNING: Removing unreachable block (ram,0x0080f5d4) */
/* WARNING: Removing unreachable block (ram,0x0080f5dc) */
/* WARNING: Removing unreachable block (ram,0x0080f5ec) */
/* WARNING: Removing unreachable block (ram,0x0080f5f4) */
/* WARNING: Removing unreachable block (ram,0x0080f6d0) */
/* WARNING: Removing unreachable block (ram,0x0080f6dc) */
/* WARNING: Removing unreachable block (ram,0x0080f6e4) */
/* WARNING: Removing unreachable block (ram,0x0080f6ec) */
/* WARNING: Removing unreachable block (ram,0x0080ede4) */
/* WARNING: Removing unreachable block (ram,0x0080efd4) */
/* WARNING: Removing unreachable block (ram,0x0080efd8) */
/* WARNING: Removing unreachable block (ram,0x0080efe0) */
/* WARNING: Removing unreachable block (ram,0x0080efe8) */
/* WARNING: Removing unreachable block (ram,0x0080ef04) */
/* WARNING: Removing unreachable block (ram,0x0080ef08) */
/* WARNING: Removing unreachable block (ram,0x0080ef10) */
/* WARNING: Removing unreachable block (ram,0x0080ef18) */
/* WARNING: Removing unreachable block (ram,0x0080f604) */
/* WARNING: Removing unreachable block (ram,0x0080f614) */
/* WARNING: Removing unreachable block (ram,0x0080f620) */
/* WARNING: Removing unreachable block (ram,0x0080f628) */
/* WARNING: Removing unreachable block (ram,0x0080f630) */
/* WARNING: Removing unreachable block (ram,0x0080f63c) */
/* WARNING: Removing unreachable block (ram,0x0080f65c) */
/* WARNING: Removing unreachable block (ram,0x0080f704) */
/* WARNING: Removing unreachable block (ram,0x0080f710) */
/* WARNING: Removing unreachable block (ram,0x0080f714) */
/* WARNING: Removing unreachable block (ram,0x0080f7d8) */
/* WARNING: Removing unreachable block (ram,0x0080f7e4) */
/* WARNING: Removing unreachable block (ram,0x0080f7ec) */
/* WARNING: Removing unreachable block (ram,0x0080f7f4) */
/* WARNING: Removing unreachable block (ram,0x0080f800) */
/* WARNING: Removing unreachable block (ram,0x0080f660) */
/* WARNING: Removing unreachable block (ram,0x0080f670) */
/* WARNING: Removing unreachable block (ram,0x0080f678) */
/* WARNING: Removing unreachable block (ram,0x0080f680) */
/* WARNING: Removing unreachable block (ram,0x0080f690) */
/* WARNING: Removing unreachable block (ram,0x0080f698) */
/* WARNING: Removing unreachable block (ram,0x0080f718) */
/* WARNING: Removing unreachable block (ram,0x0080f72c) */
/* WARNING: Removing unreachable block (ram,0x0080f734) */
/* WARNING: Removing unreachable block (ram,0x0080f740) */
/* WARNING: Removing unreachable block (ram,0x0080f724) */
/* WARNING: Removing unreachable block (ram,0x0080f744) */
/* WARNING: Removing unreachable block (ram,0x0080f788) */
/* WARNING: Removing unreachable block (ram,0x0080f78c) */
/* WARNING: Removing unreachable block (ram,0x0080f794) */
/* WARNING: Removing unreachable block (ram,0x0080f6f0) */
/* WARNING: Removing unreachable block (ram,0x0080f6f8) */
/* WARNING: Removing unreachable block (ram,0x0080f750) */
/* WARNING: Removing unreachable block (ram,0x0080f754) */
/* WARNING: Removing unreachable block (ram,0x0080f75c) */
/* WARNING: Removing unreachable block (ram,0x0080f768) */
/* WARNING: Removing unreachable block (ram,0x0080f770) */
/* WARNING: Removing unreachable block (ram,0x0080f778) */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* NGUIText$$WrapText
   bool NGUIText__WrapText (System_String_o* text, System_String_o** finalText, bool wrapLineColors,
   const MethodInfo* method); */

bool native_NGUIText__WrapText_80dce8(long param_1,undefined8 *param_2,byte param_3)

{
  byte bVar1;
  int iVar2;
  bool bVar3;
  bool bVar4;
  char cVar5;
  bool bVar6;
  ushort uVar7;
  int iVar8;
  int iVar9;
  uint uVar10;
  int iVar11;
  int iVar12;
  int iVar13;
  ulong uVar14;
  undefined8 uVar15;
  long *plVar16;
  char cVar17;
  long lVar18;
  long lVar19;
  long lVar20;
  int iVar21;
  long lVar22;
  int iVar23;
  uint uVar24;
  float fVar25;
  float fVar26;
  double dVar27;
  undefined4 uVar28;
  float fVar29;
  undefined4 uVar30;
  undefined4 uVar31;
  undefined4 uVar32;
  float fVar33;
  int iVar34;
  float fVar35;
  uint uStack_120;
  uint uStack_fc;
  uint uStack_f0;
  int iStack_e8;
  uint uStack_e0;
  float fStack_dc;
  undefined1 auStack_d8 [4];
  char acStack_d4 [4];
  undefined1 auStack_d0 [4];
  undefined1 auStack_cc [4];
  char acStack_c8 [4];
  char acStack_c4 [4];
  int iStack_c0;
  int iStack_bc;
  long lStack_b8;
  double adStack_b0 [2];
  
  if ((bRam00000000013404a2 & 1) == 0) {
    native_sub_43273c(&NGUIText_TypeInfo_12d53c0);
    bRam00000000013404a2 = 1;
  }
  if (((*(byte *)(_NGUIText_TypeInfo_12d53c0 + 0x133) >> 2 & 1) != 0) &&
     (*(int *)(_NGUIText_TypeInfo_12d53c0 + 0xe0) == 0)) {
    native_sub_4327ec();
  }
  lStack_b8 = param_1;
  if ((bRam00000000013404a3 & 1) == 0) {
    native_sub_43273c(&Method_BetterList_Color__Add___12d8928);
    native_sub_43273c(&Method_BetterList_Color__Clear___12d8930);
    native_sub_43273c(&NGUIText_TypeInfo_12d53c0);
    native_sub_43273c(&System_Text_StringBuilder_TypeInfo_12d5f30);
    native_sub_43273c(&StringLiteral___sub__12f3258);
    native_sub_43273c(&StringLiteral_____12f3240);
    native_sub_43273c(&StringLiteral___12eac68);
    native_sub_43273c(&StringLiteral___y__12f3270);
    native_sub_43273c(&StringLiteral___12f3230);
    native_sub_43273c(&StringLiteral__12eaac0);
    native_sub_43273c(&StringLiteral___12f3410);
    native_sub_43273c(&StringLiteral_____ff_____12f3250);
    native_sub_43273c(&StringLiteral_____12eb7c8);
    bRam00000000013404a3 = 1;
  }
  iStack_c0 = 0;
  iStack_bc = 0;
  acStack_c4[0] = '\0';
  acStack_c8[0] = '\0';
  auStack_cc[0] = 0;
  auStack_d0[0] = 0;
  acStack_d4[0] = '\0';
  auStack_d8[0] = 0;
  fStack_dc = 0.0;
  if (((*(byte *)(_NGUIText_TypeInfo_12d53c0 + 0x133) >> 2 & 1) != 0) &&
     (*(int *)(_NGUIText_TypeInfo_12d53c0 + 0xe0) == 0)) {
    native_sub_4327ec();
  }
  lVar18 = *(long *)(_NGUIText_TypeInfo_12d53c0 + 0xb8);
  if (0 < *(int *)(lVar18 + 0x48)) {
    if (((*(byte *)(_NGUIText_TypeInfo_12d53c0 + 0x133) >> 2 & 1) != 0) &&
       (*(int *)(_NGUIText_TypeInfo_12d53c0 + 0xe0) == 0)) {
      native_sub_4327ec();
      lVar18 = *(long *)(_NGUIText_TypeInfo_12d53c0 + 0xb8);
    }
    if (0 < *(int *)(lVar18 + 0x4c)) {
      if (((*(byte *)(_NGUIText_TypeInfo_12d53c0 + 0x133) >> 2 & 1) != 0) &&
         (*(int *)(_NGUIText_TypeInfo_12d53c0 + 0xe0) == 0)) {
        native_sub_4327ec();
        lVar18 = *(long *)(_NGUIText_TypeInfo_12d53c0 + 0xb8);
      }
      if (1.0 <= *(float *)(lVar18 + 0x94)) {
        uVar7 = *(ushort *)(_NGUIText_TypeInfo_12d53c0 + 0x132);
        if ((uVar7 >> 10 & 1) == 0) {
          uVar7 = 0;
        }
        else {
          if (*(int *)(_NGUIText_TypeInfo_12d53c0 + 0xe0) == 0) {
            native_sub_4327ec();
            uVar7 = *(ushort *)(_NGUIText_TypeInfo_12d53c0 + 0x132);
            lVar18 = *(long *)(_NGUIText_TypeInfo_12d53c0 + 0xb8);
          }
          uVar7 = uVar7 & 0x400;
        }
        iVar8 = *(int *)(lVar18 + 0x50);
        if (iVar8 < 1) {
          if ((uVar7 != 0) && (*(int *)(_NGUIText_TypeInfo_12d53c0 + 0xe0) == 0)) {
            native_sub_4327ec();
            lVar18 = *(long *)(_NGUIText_TypeInfo_12d53c0 + 0xb8);
          }
          fVar25 = (float)*(int *)(lVar18 + 0x4c);
        }
        else {
          if ((uVar7 != 0) && (*(int *)(_NGUIText_TypeInfo_12d53c0 + 0xe0) == 0)) {
            native_sub_4327ec();
            lVar18 = *(long *)(_NGUIText_TypeInfo_12d53c0 + 0xb8);
            iVar8 = *(int *)(lVar18 + 0x50);
          }
          fVar25 = (float)native_UnityEngine_Mathf__Min_8e4bb8
                                    ((float)*(int *)(lVar18 + 0x4c),
                                     *(float *)(lVar18 + 0x94) * (float)iVar8,0);
        }
        if (((*(byte *)(_NGUIText_TypeInfo_12d53c0 + 0x133) >> 2 & 1) != 0) &&
           (*(int *)(_NGUIText_TypeInfo_12d53c0 + 0xe0) == 0)) {
          native_sub_4327ec();
        }
        iVar8 = *(int *)(*(long *)(_NGUIText_TypeInfo_12d53c0 + 0xb8) + 0x50);
        if (iVar8 < 1) {
          iVar8 = 1000000;
        }
        else if (((*(byte *)(_NGUIText_TypeInfo_12d53c0 + 0x133) >> 2 & 1) != 0) &&
                (*(int *)(_NGUIText_TypeInfo_12d53c0 + 0xe0) == 0)) {
          native_sub_4327ec();
          iVar8 = *(int *)(*(long *)(_NGUIText_TypeInfo_12d53c0 + 0xb8) + 0x50);
        }
        if (((*(byte *)(_NGUIText_TypeInfo_12d53c0 + 0x133) >> 2 & 1) != 0) &&
           (*(int *)(_NGUIText_TypeInfo_12d53c0 + 0xe0) == 0)) {
          native_sub_4327ec();
        }
        fVar25 = (float)native_UnityEngine_Mathf__Min_8e4bb8
                                  ((float)iVar8,
                                   fVar25 / *(float *)(*(long *)(_NGUIText_TypeInfo_12d53c0 + 0xb8)
                                                      + 0x94),0);
        iVar8 = native_UnityEngine_Mathf__FloorToInt_8e506c(fVar25 + 0.01,0);
        if (iVar8 != 0) {
          uVar14 = native_System_String__IsNullOrEmpty_b09430(param_1,0);
          if ((uVar14 & 1) != 0) {
            lStack_b8 = _StringLiteral___12eac68;
            param_1 = _StringLiteral___12eac68;
          }
          if (param_1 != 0) {
            iVar2 = *(int *)(param_1 + 0x10);
            if (((*(byte *)(_NGUIText_TypeInfo_12d53c0 + 0x133) >> 2 & 1) != 0) &&
               (*(int *)(_NGUIText_TypeInfo_12d53c0 + 0xe0) == 0)) {
              native_sub_4327ec();
            }
            native_NGUIText__Prepare_808c84(param_1);
            lVar18 = *(long *)(*(long *)(_NGUIText_TypeInfo_12d53c0 + 0xb8) + 0xb8);
            if (lVar18 != 0) {
              native_BetterList_Color___Clear_ba192c
                        (lVar18,_Method_BetterList_Color__Clear___12d8930);
              lVar18 = *(long *)(*(long *)(_NGUIText_TypeInfo_12d53c0 + 0xb8) + 0x100);
              if (lVar18 == 0) {
                uVar15 = native_sub_432808(_System_Text_StringBuilder_TypeInfo_12d5f30);
                native_System_Text_StringBuilder___ctor_a4881c(uVar15,0);
                if (((*(byte *)(_NGUIText_TypeInfo_12d53c0 + 0x133) >> 2 & 1) != 0) &&
                   (*(int *)(_NGUIText_TypeInfo_12d53c0 + 0xe0) == 0)) {
                  native_sub_4327ec();
                }
                lVar18 = *(long *)(_NGUIText_TypeInfo_12d53c0 + 0xb8);
                *(undefined8 *)(lVar18 + 0x100) = uVar15;
                native_sub_4326e0(lVar18 + 0x100,uVar15);
              }
              else {
                if (((*(byte *)(_NGUIText_TypeInfo_12d53c0 + 0x133) >> 2 & 1) != 0) &&
                   (*(int *)(_NGUIText_TypeInfo_12d53c0 + 0xe0) == 0)) {
                  native_sub_4327ec(_NGUIText_TypeInfo_12d53c0);
                  lVar18 = *(long *)(*(long *)(_NGUIText_TypeInfo_12d53c0 + 0xb8) + 0x100);
                  if (lVar18 == 0) goto LAB_0080f80c;
                }
                native_System_Text_StringBuilder__set_Length_a4945c(lVar18,0,0);
              }
              uVar7 = *(ushort *)(_NGUIText_TypeInfo_12d53c0 + 0x132);
              if ((uVar7 >> 10 & 1) == 0) {
                uVar7 = 0;
              }
              else {
                if (*(int *)(_NGUIText_TypeInfo_12d53c0 + 0xe0) == 0) {
                  native_sub_4327ec();
                  uVar7 = *(ushort *)(_NGUIText_TypeInfo_12d53c0 + 0x132);
                }
                uVar7 = uVar7 & 0x400;
              }
              lVar18 = *(long *)(_NGUIText_TypeInfo_12d53c0 + 0xb8);
              iVar34 = *(int *)(lVar18 + 0x48);
              iStack_c0 = 0;
              iStack_bc = 0;
              uVar28 = *(undefined4 *)(lVar18 + 0x30);
              uVar30 = *(undefined4 *)(lVar18 + 0x34);
              uVar31 = *(undefined4 *)(lVar18 + 0x38);
              uVar32 = *(undefined4 *)(lVar18 + 0x3c);
              acStack_c4[0] = '\0';
              acStack_c8[0] = '\0';
              auStack_cc[0] = 0;
              auStack_d0[0] = 0;
              acStack_d4[0] = '\0';
              auStack_d8[0] = 0;
              if ((uVar7 != 0) && (*(int *)(_NGUIText_TypeInfo_12d53c0 + 0xe0) == 0)) {
                native_sub_4327ec();
              }
              if (((*(byte *)(_NGUIText_TypeInfo_12d53c0 + 0x133) >> 2 & 1) != 0) &&
                 (*(int *)(_NGUIText_TypeInfo_12d53c0 + 0xe0) == 0)) {
                native_sub_4327ec();
              }
              fVar25 = (float)native_NGUIText__get_symbolScale_80c8d8();
              iVar9 = native_NGUIText__get_symbolMaxHeight_80cb28();
              fStack_dc = 0.0;
              lVar18 = *(long *)(*(long *)(_NGUIText_TypeInfo_12d53c0 + 0xb8) + 0xb8);
              if (lVar18 != 0) {
                native_BetterList_Color___Add_ba1944
                          (uVar28,uVar30,uVar31,uVar32,lVar18,
                           _Method_BetterList_Color__Add___12d8928);
                lVar18 = *(long *)(_NGUIText_TypeInfo_12d53c0 + 0xb8);
                bVar1 = *(char *)(lVar18 + 0x9c) != '\0' & param_3 & 1;
                if (bVar1 == 1) {
                  if (((*(byte *)(_NGUIText_TypeInfo_12d53c0 + 0x133) >> 2 & 1) != 0) &&
                     (*(int *)(_NGUIText_TypeInfo_12d53c0 + 0xe0) == 0)) {
                    native_sub_4327ec();
                    lVar18 = *(long *)(_NGUIText_TypeInfo_12d53c0 + 0xb8);
                  }
                  if (*(long *)(lVar18 + 0x100) == 0) goto LAB_0080f80c;
                  native_System_Text_StringBuilder__Append_a49d68
                            (*(long *)(lVar18 + 0x100),_StringLiteral___12f3230,0);
                  lVar18 = *(long *)(*(long *)(_NGUIText_TypeInfo_12d53c0 + 0xb8) + 0x100);
                  uVar15 = native_NGUIText__EncodeColor_80b59c(uVar28,uVar30,uVar31,uVar32);
                  if (lVar18 == 0) goto LAB_0080f80c;
                  native_System_Text_StringBuilder__Append_a49d68(lVar18,uVar15,0);
                  lVar18 = *(long *)(*(long *)(_NGUIText_TypeInfo_12d53c0 + 0xb8) + 0x100);
                  if (lVar18 == 0) goto LAB_0080f80c;
                  native_System_Text_StringBuilder__Append_a49d68(lVar18,_StringLiteral___12f3410,0)
                  ;
                }
                if (iVar2 < 1) {
                  iVar21 = 1;
                  uStack_120 = 1;
LAB_0080f438:
                  if (bVar1 != 0) {
                    if (((*(byte *)(_NGUIText_TypeInfo_12d53c0 + 0x133) >> 2 & 1) != 0) &&
                       (*(int *)(_NGUIText_TypeInfo_12d53c0 + 0xe0) == 0)) {
                      native_sub_4327ec();
                    }
                    lVar18 = *(long *)(_NGUIText_TypeInfo_12d53c0 + 0xb8);
                    if (*(long *)(lVar18 + 0xb8) == 0) goto LAB_0080f80c;
                    if (0 < *(int *)(*(long *)(lVar18 + 0xb8) + 0x18)) {
                      if (((*(byte *)(_NGUIText_TypeInfo_12d53c0 + 0x133) >> 2 & 1) != 0) &&
                         (*(int *)(_NGUIText_TypeInfo_12d53c0 + 0xe0) == 0)) {
                        native_sub_4327ec();
                        lVar18 = *(long *)(_NGUIText_TypeInfo_12d53c0 + 0xb8);
                      }
                      if (*(long *)(lVar18 + 0x100) == 0) goto LAB_0080f80c;
                      native_System_Text_StringBuilder__Append_a49d68
                                (*(long *)(lVar18 + 0x100),_StringLiteral_____12f3240,0);
                    }
                  }
                  if (((*(byte *)(_NGUIText_TypeInfo_12d53c0 + 0x133) >> 2 & 1) != 0) &&
                     (*(int *)(_NGUIText_TypeInfo_12d53c0 + 0xe0) == 0)) {
                    native_sub_4327ec();
                  }
                  plVar16 = *(long **)(*(long *)(_NGUIText_TypeInfo_12d53c0 + 0xb8) + 0x100);
                  if (plVar16 != (long *)0x0) {
                    uVar15 = (**(code **)(*plVar16 + 0x168))
                                       (plVar16,*(undefined8 *)(*plVar16 + 0x170));
                    *param_2 = uVar15;
                    native_sub_4326e0(param_2,uVar15);
                    lVar18 = *(long *)(*(long *)(_NGUIText_TypeInfo_12d53c0 + 0xb8) + 0xb8);
                    if (lVar18 != 0) {
                      native_BetterList_Color___Clear_ba192c
                                (lVar18,_Method_BetterList_Color__Clear___12d8930);
                      if (uStack_120 == 0) {
                        return false;
                      }
                      if (iStack_bc != iVar2) {
                        if (((*(byte *)(_NGUIText_TypeInfo_12d53c0 + 0x133) >> 2 & 1) != 0) &&
                           (*(int *)(_NGUIText_TypeInfo_12d53c0 + 0xe0) == 0)) {
                          native_sub_4327ec();
                        }
                        if (*(int *)(*(long *)(_NGUIText_TypeInfo_12d53c0 + 0xb8) + 0x50) == 0) {
                          return iVar21 == 0;
                        }
                        return iVar21 == iVar8;
                      }
                      return true;
                    }
                  }
                }
                else {
                  iVar23 = 0;
                  iVar11 = 0;
                  iVar12 = 0;
                  uStack_120 = 1;
                  iVar13 = 1;
                  fVar35 = 0.0;
                  iStack_e8 = 0;
                  uStack_fc = 0;
                  bVar3 = true;
                  uStack_f0 = 0;
                  while( true ) {
                    uVar10 = native_System_String__get_Chars_b03810(param_1,iVar12,0);
                    if (((*(byte *)(_NGUIText_TypeInfo_12d53c0 + 0x133) >> 2 & 1) != 0) &&
                       (*(int *)(_NGUIText_TypeInfo_12d53c0 + 0xe0) == 0)) {
                      native_sub_4327ec(_NGUIText_TypeInfo_12d53c0);
                    }
                    uVar24 = uVar10 & 0xffff;
                    if ((uVar24 != 0x200a) && (uVar24 != 0x20)) break;
                    uStack_e0 = 1;
LAB_0080e410:
                    bVar6 = iVar13 == iVar8;
                    if (((*(byte *)(_NGUIText_TypeInfo_12d53c0 + 0x133) >> 2 & 1) != 0) &&
                       (*(int *)(_NGUIText_TypeInfo_12d53c0 + 0xe0) == 0)) {
                      native_sub_4327ec();
                    }
                    lVar18 = lStack_b8;
                    lVar19 = *(long *)(_NGUIText_TypeInfo_12d53c0 + 0xb8);
                    if (*(char *)(lVar19 + 0x78) == '\0') {
LAB_0080e608:
                      if (((*(byte *)(_NGUIText_TypeInfo_12d53c0 + 0x133) >> 2 & 1) != 0) &&
                         (*(int *)(_NGUIText_TypeInfo_12d53c0 + 0xe0) == 0)) {
                        native_sub_4327ec();
                      }
                      iVar12 = iStack_bc;
                      if (*(char *)(*(long *)(_NGUIText_TypeInfo_12d53c0 + 0xb8) + 0x9c) == '\0') {
                        lVar18 = 0;
                      }
                      else {
                        if (((*(byte *)(_NGUIText_TypeInfo_12d53c0 + 0x133) >> 2 & 1) != 0) &&
                           (*(int *)(_NGUIText_TypeInfo_12d53c0 + 0xe0) == 0)) {
                          native_sub_4327ec();
                        }
                        lVar18 = native_NGUIText__GetSymbol_809ca4(&lStack_b8,iVar12,iVar2);
                      }
                      iVar12 = iStack_c0;
                      if (iStack_c0 == 0) {
                        if (fStack_dc != 0.0) {
                          if (((*(ushort *)(_NGUIText_TypeInfo_12d53c0 + 0x132) >> 10 & 1) != 0) &&
                             (*(int *)(_NGUIText_TypeInfo_12d53c0 + 0xe0) == 0)) {
                            native_sub_4327ec();
                          }
                          fVar29 = *(float *)(*(long *)(_NGUIText_TypeInfo_12d53c0 + 0xb8) + 0x20) *
                                   fStack_dc;
                          goto joined_r0x0080e830;
                        }
                        if (((*(ushort *)(_NGUIText_TypeInfo_12d53c0 + 0x132) >> 10 & 1) != 0) &&
                           (*(int *)(_NGUIText_TypeInfo_12d53c0 + 0xe0) == 0)) {
                          native_sub_4327ec();
                        }
                        fVar29 = *(float *)(*(long *)(_NGUIText_TypeInfo_12d53c0 + 0xb8) + 0x20);
                        if (lVar18 == 0) goto LAB_0080e770;
LAB_0080e698:
                        iVar11 = native_BMSymbol__get_paddedHeight_dd218c(lVar18,0);
                        cVar17 = *(char *)(lVar18 + 0x21);
                        if (((iVar9 < iVar11) && (iVar9 != 0)) && (cVar17 == '\0')) {
                          fVar29 = fVar29 * ((float)iVar9 / (float)iVar11);
                        }
                        if (((*(byte *)(_NGUIText_TypeInfo_12d53c0 + 0x133) >> 2 & 1) != 0) &&
                           (*(int *)(_NGUIText_TypeInfo_12d53c0 + 0xe0) == 0)) {
                          native_sub_4327ec();
                          cVar17 = *(char *)(lVar18 + 0x21);
                        }
                        fVar33 = *(float *)(*(long *)(_NGUIText_TypeInfo_12d53c0 + 0xb8) + 0x90);
                        fVar26 = (float)*(int *)(lVar18 + 0x48);
                        if (cVar17 == '\0') {
                          fVar29 = fVar25 * fVar29 * (float)*(int *)(lVar18 + 0x48);
                          dVar27 = (double)func_0x002c9600((double)fVar29,adStack_b0);
                          if (0.0 <= fVar29) {
                            if (dVar27 == 0.5) {
                              fVar29 = (float)adStack_b0[0] + 1.0;
                              goto LAB_0080e854;
                            }
                            fVar26 = (float)(int)(fVar29 + 0.5);
                          }
                          else if (dVar27 == -0.5) {
                            fVar29 = (float)adStack_b0[0] + -1.0;
LAB_0080e854:
                            fVar26 = (float)adStack_b0[0];
                            if (((long)adStack_b0[0] & 1U) != 0) {
                              fVar26 = fVar29;
                            }
                          }
                          else {
                            fVar26 = (float)(int)(fVar29 + -0.5);
                          }
                        }
                        fVar33 = fVar33 + fVar26;
                      }
                      else {
                        if (((*(byte *)(_NGUIText_TypeInfo_12d53c0 + 0x133) >> 2 & 1) != 0) &&
                           (*(int *)(_NGUIText_TypeInfo_12d53c0 + 0xe0) == 0)) {
                          native_sub_4327ec();
                        }
                        fVar29 = *(float *)(*(long *)(_NGUIText_TypeInfo_12d53c0 + 0xb8) + 0x20) *
                                 fStack_dc;
joined_r0x0080e830:
                        if (lVar18 != 0) goto LAB_0080e698;
LAB_0080e770:
                        cVar5 = acStack_c4[0];
                        cVar17 = acStack_c8[0];
                        if (((*(byte *)(_NGUIText_TypeInfo_12d53c0 + 0x133) >> 2 & 1) != 0) &&
                           (*(int *)(_NGUIText_TypeInfo_12d53c0 + 0xe0) == 0)) {
                          native_sub_4327ec();
                        }
                        fVar33 = (float)native_NGUIText__GetGlyphWidth_809de8
                                                  (fVar29,uVar24,uStack_fc,cVar5 != '\0',
                                                   cVar17 != '\0');
                        if (((uint)(fVar33 == 0.0) & (uStack_e0 ^ 0xffffffff)) != 0)
                        goto LAB_0080f3b8;
                        if (((*(byte *)(_NGUIText_TypeInfo_12d53c0 + 0x133) >> 2 & 1) != 0) &&
                           (*(int *)(_NGUIText_TypeInfo_12d53c0 + 0xe0) == 0)) {
                          native_sub_4327ec();
                        }
                        fVar33 = fVar33 + *(float *)(*(long *)(_NGUIText_TypeInfo_12d53c0 + 0xb8) +
                                                    0x90);
                      }
                      if (iVar12 != 0) {
                        dVar27 = (double)func_0x002c9600((double)fVar33,adStack_b0);
                        if (0.0 <= fVar33) {
                          if (dVar27 == 0.5) {
                            fVar29 = (float)adStack_b0[0] + 1.0;
                            goto LAB_0080ec40;
                          }
                          fVar33 = (float)(int)(fVar33 + 0.5);
                        }
                        else if (dVar27 == -0.5) {
                          fVar29 = (float)adStack_b0[0] + -1.0;
LAB_0080ec40:
                          fVar33 = (float)adStack_b0[0];
                          if (((long)adStack_b0[0] & 1U) != 0) {
                            fVar33 = fVar29;
                          }
                        }
                        else {
                          fVar33 = (float)(int)(fVar33 + -0.5);
                        }
                      }
                      fVar35 = fVar35 + fVar33;
                      bVar4 = bVar3;
                      if (((uStack_e0 & (uStack_f0 ^ 1)) == 1) &&
                         (iVar12 = iStack_bc - iVar23, iVar12 != 0 && iVar23 <= iStack_bc)) {
                        if ((iStack_bc < iVar2) && (bVar6 && (float)iVar34 <= fVar35)) {
                          if (lStack_b8 == 0) goto LAB_0080f80c;
                          uVar7 = native_System_String__get_Chars_b03810(lStack_b8,iStack_bc,0);
                          if (0x1f < uVar7) {
                            if (((*(byte *)(_NGUIText_TypeInfo_12d53c0 + 0x133) >> 2 & 1) != 0) &&
                               (*(int *)(_NGUIText_TypeInfo_12d53c0 + 0xe0) == 0)) {
                              native_sub_4327ec();
                            }
                            if (((uVar7 != 0x20) && (uVar7 != 0x200a)) && ((uVar7 | 2) != 0x200b))
                            goto LAB_0080ed2c;
                          }
                          iVar12 = iVar12 + -1;
                        }
LAB_0080ed2c:
                        if (((*(byte *)(_NGUIText_TypeInfo_12d53c0 + 0x133) >> 2 & 1) != 0) &&
                           (*(int *)(_NGUIText_TypeInfo_12d53c0 + 0xe0) == 0)) {
                          native_sub_4327ec();
                        }
                        lVar19 = *(long *)(*(long *)(_NGUIText_TypeInfo_12d53c0 + 0xb8) + 0x100);
                        if (lVar19 == 0) goto LAB_0080f80c;
                        native_System_Text_StringBuilder__Append_a49eb4
                                  (lVar19,lStack_b8,iVar23,iVar12 + 1,0);
                        iVar23 = iStack_bc + 1;
                        bVar4 = false;
                      }
                      if ((float)iVar34 < fVar35) {
                        if (!bVar3 && !bVar6) {
                          for (; iVar23 < iVar2; iVar23 = iVar23 + 1) {
                            if (lStack_b8 == 0) goto LAB_0080f80c;
                            uVar7 = native_System_String__get_Chars_b03810(lStack_b8,iVar23,0);
                            if (((*(byte *)(_NGUIText_TypeInfo_12d53c0 + 0x133) >> 2 & 1) != 0) &&
                               (*(int *)(_NGUIText_TypeInfo_12d53c0 + 0xe0) == 0)) {
                              native_sub_4327ec(_NGUIText_TypeInfo_12d53c0);
                            }
                            if (((uVar7 != 0x20) && (uVar7 != 0x200a)) && ((uVar7 | 2) != 0x200b))
                            break;
                          }
                          iStack_bc = iVar23 + -1;
                          if (((*(ushort *)(_NGUIText_TypeInfo_12d53c0 + 0x132) >> 10 & 1) != 0) &&
                             (*(int *)(_NGUIText_TypeInfo_12d53c0 + 0xe0) == 0)) {
                            native_sub_4327ec();
                          }
                          native_NGUIText__EndLine_80c6e8
                                    (*(long *)(_NGUIText_TypeInfo_12d53c0 + 0xb8) + 0x100);
                          fVar35 = 0.0;
                          if (bVar1 == 0) goto LAB_0080f1ac;
                          iVar12 = 0;
                          while( true ) {
                            if (((*(byte *)(_NGUIText_TypeInfo_12d53c0 + 0x133) >> 2 & 1) != 0) &&
                               (*(int *)(_NGUIText_TypeInfo_12d53c0 + 0xe0) == 0)) {
                              native_sub_4327ec();
                            }
                            lVar18 = *(long *)(_NGUIText_TypeInfo_12d53c0 + 0xb8);
                            if (*(long *)(lVar18 + 0xb8) == 0) goto LAB_0080f80c;
                            if (*(int *)(*(long *)(lVar18 + 0xb8) + 0x18) <= iVar12) break;
                            if (((*(byte *)(_NGUIText_TypeInfo_12d53c0 + 0x133) >> 2 & 1) != 0) &&
                               (*(int *)(_NGUIText_TypeInfo_12d53c0 + 0xe0) == 0)) {
                              native_sub_4327ec();
                              lVar18 = *(long *)(_NGUIText_TypeInfo_12d53c0 + 0xb8);
                            }
                            lVar18 = *(long *)(lVar18 + 0x100);
                            if (lVar18 == 0) goto LAB_0080f80c;
                            iVar11 = native_System_Text_StringBuilder__get_Length_a49204(lVar18,0);
                            native_System_Text_StringBuilder__Insert_a4abd0
                                      (lVar18,iVar11 + -1,_StringLiteral_____12f3240,0);
                            iVar12 = iVar12 + 1;
                          }
                          lVar18 = 0;
                          uVar14 = 0;
                          while( true ) {
                            if (((*(byte *)(_NGUIText_TypeInfo_12d53c0 + 0x133) >> 2 & 1) != 0) &&
                               (*(int *)(_NGUIText_TypeInfo_12d53c0 + 0xe0) == 0)) {
                              native_sub_4327ec();
                            }
                            lVar19 = *(long *)(_NGUIText_TypeInfo_12d53c0 + 0xb8);
                            if (*(long *)(lVar19 + 0xb8) == 0) goto LAB_0080f80c;
                            if ((long)*(int *)(*(long *)(lVar19 + 0xb8) + 0x18) <= (long)uVar14)
                            break;
                            if (((*(byte *)(_NGUIText_TypeInfo_12d53c0 + 0x133) >> 2 & 1) != 0) &&
                               (*(int *)(_NGUIText_TypeInfo_12d53c0 + 0xe0) == 0)) {
                              native_sub_4327ec();
                              lVar19 = *(long *)(_NGUIText_TypeInfo_12d53c0 + 0xb8);
                            }
                            if (*(long *)(lVar19 + 0x100) == 0) goto LAB_0080f80c;
                            native_System_Text_StringBuilder__Append_a49d68
                                      (*(long *)(lVar19 + 0x100),_StringLiteral___12f3230,0);
                            lVar19 = *(long *)(*(long *)(_NGUIText_TypeInfo_12d53c0 + 0xb8) + 0xb8);
                            if ((lVar19 == 0) || (lVar19 = *(long *)(lVar19 + 0x10), lVar19 == 0))
                            goto LAB_0080f80c;
                            if (*(uint *)(lVar19 + 0x18) <= uVar14) goto LAB_0080f810;
                            lVar20 = *(long *)(*(long *)(_NGUIText_TypeInfo_12d53c0 + 0xb8) + 0x100)
                            ;
                            lVar19 = lVar19 + lVar18;
                            uVar15 = native_NGUIText__EncodeColor_80b59c
                                               (*(undefined4 *)(lVar19 + 0x20),
                                                *(undefined4 *)(lVar19 + 0x24),
                                                *(undefined4 *)(lVar19 + 0x28),
                                                *(undefined4 *)(lVar19 + 0x2c));
                            if (lVar20 == 0) goto LAB_0080f80c;
                            native_System_Text_StringBuilder__Append_a49d68(lVar20,uVar15,0);
                            lVar19 = *(long *)(*(long *)(_NGUIText_TypeInfo_12d53c0 + 0xb8) + 0x100)
                            ;
                            if (lVar19 == 0) goto LAB_0080f80c;
                            native_System_Text_StringBuilder__Append_a49d68
                                      (lVar19,_StringLiteral___12f3410,0);
                            uVar14 = uVar14 + 1;
                            lVar18 = lVar18 + 0x10;
                          }
                          uStack_fc = 0;
                          iVar13 = iVar13 + 1;
                          bVar3 = true;
                          goto LAB_0080f3b8;
                        }
                        if (((*(byte *)(_NGUIText_TypeInfo_12d53c0 + 0x133) >> 2 & 1) != 0) &&
                           (*(int *)(_NGUIText_TypeInfo_12d53c0 + 0xe0) == 0)) {
                          native_sub_4327ec();
                        }
                        lVar19 = lStack_b8;
                        lVar20 = *(long *)(*(long *)(_NGUIText_TypeInfo_12d53c0 + 0xb8) + 0x100);
                        uVar28 = native_UnityEngine_Mathf__Max_8e4cd0(0,iStack_bc - iVar23,0);
                        if (lVar20 == 0) goto LAB_0080f80c;
                        native_System_Text_StringBuilder__Append_a49eb4
                                  (lVar20,lVar19,iVar23,uVar28,0);
                        if (bVar1 != 0) {
                          if (((*(byte *)(_NGUIText_TypeInfo_12d53c0 + 0x133) >> 2 & 1) != 0) &&
                             (*(int *)(_NGUIText_TypeInfo_12d53c0 + 0xe0) == 0)) {
                            native_sub_4327ec();
                          }
                          lVar19 = *(long *)(_NGUIText_TypeInfo_12d53c0 + 0xb8);
                          if (*(long *)(lVar19 + 0xb8) == 0) goto LAB_0080f80c;
                          if (0 < *(int *)(*(long *)(lVar19 + 0xb8) + 0x18)) {
                            if (((*(byte *)(_NGUIText_TypeInfo_12d53c0 + 0x133) >> 2 & 1) != 0) &&
                               (*(int *)(_NGUIText_TypeInfo_12d53c0 + 0xe0) == 0)) {
                              native_sub_4327ec();
                              lVar19 = *(long *)(_NGUIText_TypeInfo_12d53c0 + 0xb8);
                            }
                            if (*(long *)(lVar19 + 0x100) == 0) goto LAB_0080f80c;
                            native_System_Text_StringBuilder__Append_a49d68
                                      (*(long *)(lVar19 + 0x100),_StringLiteral_____12f3240,0);
                          }
                        }
                        iVar21 = iVar13 + 1;
                        if (bVar6) {
                          if (uStack_e0 == 0) {
                            uStack_120 = uStack_120 & uStack_f0;
                          }
                          goto LAB_0080f438;
                        }
                        if (((*(ushort *)(_NGUIText_TypeInfo_12d53c0 + 0x132) >> 10 & 1) != 0) &&
                           (*(int *)(_NGUIText_TypeInfo_12d53c0 + 0xe0) == 0)) {
                          native_sub_4327ec();
                        }
                        native_NGUIText__EndLine_80c6e8
                                  (*(long *)(_NGUIText_TypeInfo_12d53c0 + 0xb8) + 0x100);
                        if (bVar1 != 0) {
                          iVar23 = 0;
                          while( true ) {
                            if (((*(byte *)(_NGUIText_TypeInfo_12d53c0 + 0x133) >> 2 & 1) != 0) &&
                               (*(int *)(_NGUIText_TypeInfo_12d53c0 + 0xe0) == 0)) {
                              native_sub_4327ec();
                            }
                            lVar19 = *(long *)(_NGUIText_TypeInfo_12d53c0 + 0xb8);
                            if (*(long *)(lVar19 + 0xb8) == 0) goto LAB_0080f80c;
                            if (*(int *)(*(long *)(lVar19 + 0xb8) + 0x18) <= iVar23) break;
                            if (((*(byte *)(_NGUIText_TypeInfo_12d53c0 + 0x133) >> 2 & 1) != 0) &&
                               (*(int *)(_NGUIText_TypeInfo_12d53c0 + 0xe0) == 0)) {
                              native_sub_4327ec();
                              lVar19 = *(long *)(_NGUIText_TypeInfo_12d53c0 + 0xb8);
                            }
                            lVar19 = *(long *)(lVar19 + 0x100);
                            if (lVar19 == 0) goto LAB_0080f80c;
                            iVar13 = native_System_Text_StringBuilder__get_Length_a49204(lVar19,0);
                            native_System_Text_StringBuilder__Insert_a4abd0
                                      (lVar19,iVar13 + -1,_StringLiteral_____12f3240,0);
                            iVar23 = iVar23 + 1;
                          }
                          lVar19 = 0;
                          uVar14 = 0;
                          while( true ) {
                            if (((*(byte *)(_NGUIText_TypeInfo_12d53c0 + 0x133) >> 2 & 1) != 0) &&
                               (*(int *)(_NGUIText_TypeInfo_12d53c0 + 0xe0) == 0)) {
                              native_sub_4327ec();
                            }
                            lVar20 = *(long *)(_NGUIText_TypeInfo_12d53c0 + 0xb8);
                            if (*(long *)(lVar20 + 0xb8) == 0) goto LAB_0080f80c;
                            if ((long)*(int *)(*(long *)(lVar20 + 0xb8) + 0x18) <= (long)uVar14)
                            break;
                            if (((*(byte *)(_NGUIText_TypeInfo_12d53c0 + 0x133) >> 2 & 1) != 0) &&
                               (*(int *)(_NGUIText_TypeInfo_12d53c0 + 0xe0) == 0)) {
                              native_sub_4327ec();
                              lVar20 = *(long *)(_NGUIText_TypeInfo_12d53c0 + 0xb8);
                            }
                            if (*(long *)(lVar20 + 0x100) == 0) goto LAB_0080f80c;
                            native_System_Text_StringBuilder__Append_a49d68
                                      (*(long *)(lVar20 + 0x100),_StringLiteral___12f3230,0);
                            lVar20 = *(long *)(*(long *)(_NGUIText_TypeInfo_12d53c0 + 0xb8) + 0xb8);
                            if ((lVar20 == 0) || (lVar20 = *(long *)(lVar20 + 0x10), lVar20 == 0))
                            goto LAB_0080f80c;
                            if (*(uint *)(lVar20 + 0x18) <= uVar14) goto LAB_0080f810;
                            lVar22 = *(long *)(*(long *)(_NGUIText_TypeInfo_12d53c0 + 0xb8) + 0x100)
                            ;
                            lVar20 = lVar20 + lVar19;
                            uVar15 = native_NGUIText__EncodeColor_80b59c
                                               (*(undefined4 *)(lVar20 + 0x20),
                                                *(undefined4 *)(lVar20 + 0x24),
                                                *(undefined4 *)(lVar20 + 0x28),
                                                *(undefined4 *)(lVar20 + 0x2c));
                            if (lVar22 == 0) goto LAB_0080f80c;
                            native_System_Text_StringBuilder__Append_a49d68(lVar22,uVar15,0);
                            lVar20 = *(long *)(*(long *)(_NGUIText_TypeInfo_12d53c0 + 0xb8) + 0x100)
                            ;
                            if (lVar20 == 0) goto LAB_0080f80c;
                            native_System_Text_StringBuilder__Append_a49d68
                                      (lVar20,_StringLiteral___12f3410,0);
                            uVar14 = uVar14 + 1;
                            lVar19 = lVar19 + 0x10;
                          }
                        }
                        uVar24 = 0;
                        fVar35 = 0.0;
                        if (uStack_e0 == 0) {
                          fVar35 = fVar33;
                          uStack_120 = uStack_120 & uStack_f0;
                        }
                        iVar23 = iStack_bc + uStack_e0;
                        bVar4 = true;
                        iStack_e8 = iStack_bc;
                        iVar13 = iVar21;
                      }
                      iVar12 = iStack_bc;
                      uStack_fc = uVar24;
                      bVar3 = bVar4;
                      if (lVar18 != 0) {
                        iVar11 = native_BMSymbol__get_length_dd2140(lVar18,0);
                        iStack_bc = iVar12 + iVar11 + -1;
                        uStack_fc = 0;
                      }
                    }
                    else {
                      if (((*(byte *)(_NGUIText_TypeInfo_12d53c0 + 0x133) >> 2 & 1) != 0) &&
                         (*(int *)(_NGUIText_TypeInfo_12d53c0 + 0xe0) == 0)) {
                        native_sub_4327ec();
                        lVar19 = *(long *)(_NGUIText_TypeInfo_12d53c0 + 0xb8);
                      }
                      uVar14 = native_NGUIText__ParseSymbol_8091a4
                                         (lVar18,&iStack_bc,*(undefined8 *)(lVar19 + 0xb8),
                                          *(undefined1 *)(lVar19 + 0x84),&iStack_c0,&fStack_dc,
                                          acStack_c4,acStack_c8,auStack_cc,auStack_d0,acStack_d4,
                                          auStack_d8);
                      if ((uVar14 & 1) == 0) goto LAB_0080e608;
                      if (iStack_bc < iStack_e8 + 1) {
                        if (((*(byte *)(_NGUIText_TypeInfo_12d53c0 + 0x133) >> 2 & 1) != 0) &&
                           (*(int *)(_NGUIText_TypeInfo_12d53c0 + 0xe0) == 0)) {
                          native_sub_4327ec();
                        }
                        lVar18 = *(long *)(*(long *)(_NGUIText_TypeInfo_12d53c0 + 0xb8) + 0x100);
                        if (lVar18 == 0) goto LAB_0080f80c;
                        native_System_Text_StringBuilder__Append_a49eb4
                                  (lVar18,lStack_b8,iVar23,iStack_bc - iVar23,0);
                        iVar23 = iStack_bc;
                      }
                      lVar18 = _NGUIText_TypeInfo_12d53c0;
                      if (bVar1 != 0) {
                        if (acStack_d4[0] == '\0') {
                          if (((*(ushort *)(_NGUIText_TypeInfo_12d53c0 + 0x132) >> 10 & 1) != 0) &&
                             (*(int *)(_NGUIText_TypeInfo_12d53c0 + 0xe0) == 0)) {
                            native_sub_4327ec();
                          }
                          lVar18 = *(long *)(_NGUIText_TypeInfo_12d53c0 + 0xb8);
                          lVar19 = *(long *)(lVar18 + 0xb8);
                          if ((lVar19 == 0) || (lVar20 = *(long *)(lVar19 + 0x10), lVar20 == 0))
                          goto LAB_0080f80c;
                          uVar24 = *(int *)(lVar19 + 0x18) - 1;
                          if (*(uint *)(lVar20 + 0x18) <= uVar24) goto LAB_0080f810;
                          lVar20 = lVar20 + (long)(int)uVar24 * 0x10;
                          native_UnityEngine_Color__op_Multiply_8d9c68
                                    (*(undefined4 *)(lVar18 + 0x30),*(undefined4 *)(lVar18 + 0x34),
                                     *(undefined4 *)(lVar18 + 0x38),*(undefined4 *)(lVar18 + 0x3c),
                                     *(undefined4 *)(lVar20 + 0x20),*(undefined4 *)(lVar20 + 0x24),
                                     *(undefined4 *)(lVar20 + 0x28),*(undefined4 *)(lVar20 + 0x2c),0
                                    );
                        }
                        else {
                          if (((*(ushort *)(_NGUIText_TypeInfo_12d53c0 + 0x132) >> 10 & 1) != 0) &&
                             (*(int *)(_NGUIText_TypeInfo_12d53c0 + 0xe0) == 0)) {
                            native_sub_4327ec();
                          }
                          lVar18 = *(long *)(*(long *)(_NGUIText_TypeInfo_12d53c0 + 0xb8) + 0xb8);
                          if ((lVar18 == 0) || (*(long *)(lVar18 + 0x10) == 0)) goto LAB_0080f80c;
                          if (*(uint *)(*(long *)(lVar18 + 0x10) + 0x18) <=
                              *(int *)(lVar18 + 0x18) - 1U) {
LAB_0080f810:
                            uVar15 = native_sub_43283c();
                    /* WARNING: Subroutine does not return */
                            native_sub_4327dc(uVar15,0);
                          }
                        }
                        if (((*(byte *)(_NGUIText_TypeInfo_12d53c0 + 0x133) >> 2 & 1) != 0) &&
                           (*(int *)(_NGUIText_TypeInfo_12d53c0 + 0xe0) == 0)) {
                          native_sub_4327ec();
                        }
                        lVar18 = *(long *)(*(long *)(_NGUIText_TypeInfo_12d53c0 + 0xb8) + 0xb8);
                        if (lVar18 == 0) goto LAB_0080f80c;
                        iVar12 = *(int *)(lVar18 + 0x18) + -2;
                        lVar18 = _NGUIText_TypeInfo_12d53c0;
                        if (0 < iVar12) {
                          uVar24 = 0;
                          do {
                            if (((*(byte *)(lVar18 + 0x133) >> 2 & 1) != 0) &&
                               (*(int *)(lVar18 + 0xe0) == 0)) {
                              native_sub_4327ec();
                              lVar18 = _NGUIText_TypeInfo_12d53c0;
                            }
                            lVar19 = *(long *)(*(long *)(lVar18 + 0xb8) + 0xb8);
                            if ((lVar19 == 0) || (lVar19 = *(long *)(lVar19 + 0x10), lVar19 == 0))
                            goto LAB_0080f80c;
                            if (*(uint *)(lVar19 + 0x18) <= uVar24) goto LAB_0080f810;
                            uVar24 = uVar24 + 1;
                          } while ((int)uVar24 < iVar12);
                        }
                      }
                      if (iVar23 < iStack_bc) {
                        if (((*(ushort *)(lVar18 + 0x132) >> 10 & 1) != 0) &&
                           (*(int *)(lVar18 + 0xe0) == 0)) {
                          native_sub_4327ec();
                          lVar18 = _NGUIText_TypeInfo_12d53c0;
                        }
                        lVar18 = *(long *)(*(long *)(lVar18 + 0xb8) + 0x100);
                        if (lVar18 == 0) goto LAB_0080f80c;
                        native_System_Text_StringBuilder__Append_a49eb4
                                  (lVar18,lStack_b8,iVar23,iStack_bc - iVar23,0);
                      }
                      else {
                        if (((*(ushort *)(lVar18 + 0x132) >> 10 & 1) != 0) &&
                           (*(int *)(lVar18 + 0xe0) == 0)) {
                          native_sub_4327ec();
                          lVar18 = _NGUIText_TypeInfo_12d53c0;
                        }
                        lVar18 = *(long *)(*(long *)(lVar18 + 0xb8) + 0x100);
                        if (lVar18 == 0) goto LAB_0080f80c;
                        native_System_Text_StringBuilder__Append_a4a9d8(lVar18,uVar10,0);
                      }
                      iStack_e8 = iStack_bc;
                      iVar23 = iStack_bc;
                      iStack_bc = iStack_bc + -1;
                    }
LAB_0080f3b8:
                    iVar12 = iStack_bc + 1;
                    iVar21 = iVar13;
                    iStack_bc = iVar12;
                    if (iVar2 <= iVar12) goto LAB_0080f3ec;
                    iVar11 = -iVar23;
                    param_1 = lStack_b8;
                    if (lStack_b8 == 0) goto LAB_0080f80c;
                  }
                  uStack_e0 = (uint)((uVar24 | 2) == 0x200b);
                  uStack_f0 = uStack_f0 | 2 < (uVar10 >> 0xc & 0xf);
                  if ((uVar10 & 0xffff) != 10) goto LAB_0080e410;
                  iVar21 = iVar8;
                  if (iVar13 != iVar8) {
                    if (iVar23 < iStack_bc) {
                      if (((*(ushort *)(_NGUIText_TypeInfo_12d53c0 + 0x132) >> 10 & 1) != 0) &&
                         (*(int *)(_NGUIText_TypeInfo_12d53c0 + 0xe0) == 0)) {
                        native_sub_4327ec();
                      }
                      lVar18 = *(long *)(*(long *)(_NGUIText_TypeInfo_12d53c0 + 0xb8) + 0x100);
                      if (lVar18 == 0) goto LAB_0080f80c;
                      native_System_Text_StringBuilder__Append_a49eb4
                                (lVar18,lStack_b8,iVar23,iVar11 + iStack_bc + 1,0);
                    }
                    else {
                      if (((*(ushort *)(_NGUIText_TypeInfo_12d53c0 + 0x132) >> 10 & 1) != 0) &&
                         (*(int *)(_NGUIText_TypeInfo_12d53c0 + 0xe0) == 0)) {
                        native_sub_4327ec();
                      }
                      lVar18 = *(long *)(*(long *)(_NGUIText_TypeInfo_12d53c0 + 0xb8) + 0x100);
                      if (lVar18 == 0) goto LAB_0080f80c;
                      native_System_Text_StringBuilder__Append_a4a9d8(lVar18,10,0);
                    }
                    if (bVar1 != 0) {
                      iVar23 = 0;
                      while( true ) {
                        if (((*(byte *)(_NGUIText_TypeInfo_12d53c0 + 0x133) >> 2 & 1) != 0) &&
                           (*(int *)(_NGUIText_TypeInfo_12d53c0 + 0xe0) == 0)) {
                          native_sub_4327ec();
                        }
                        lVar18 = *(long *)(_NGUIText_TypeInfo_12d53c0 + 0xb8);
                        if (*(long *)(lVar18 + 0xb8) == 0) goto LAB_0080f80c;
                        if (*(int *)(*(long *)(lVar18 + 0xb8) + 0x18) <= iVar23) break;
                        if (((*(byte *)(_NGUIText_TypeInfo_12d53c0 + 0x133) >> 2 & 1) != 0) &&
                           (*(int *)(_NGUIText_TypeInfo_12d53c0 + 0xe0) == 0)) {
                          native_sub_4327ec();
                          lVar18 = *(long *)(_NGUIText_TypeInfo_12d53c0 + 0xb8);
                        }
                        lVar18 = *(long *)(lVar18 + 0x100);
                        if (lVar18 == 0) goto LAB_0080f80c;
                        iVar12 = native_System_Text_StringBuilder__get_Length_a49204(lVar18,0);
                        native_System_Text_StringBuilder__Insert_a4abd0
                                  (lVar18,iVar12 + -1,_StringLiteral_____12f3240,0);
                        iVar23 = iVar23 + 1;
                      }
                      lVar18 = 0;
                      uVar14 = 0;
                      while( true ) {
                        if (((*(byte *)(_NGUIText_TypeInfo_12d53c0 + 0x133) >> 2 & 1) != 0) &&
                           (*(int *)(_NGUIText_TypeInfo_12d53c0 + 0xe0) == 0)) {
                          native_sub_4327ec();
                        }
                        lVar19 = *(long *)(_NGUIText_TypeInfo_12d53c0 + 0xb8);
                        if (*(long *)(lVar19 + 0xb8) == 0) goto LAB_0080f80c;
                        if ((long)*(int *)(*(long *)(lVar19 + 0xb8) + 0x18) <= (long)uVar14) break;
                        if (((*(byte *)(_NGUIText_TypeInfo_12d53c0 + 0x133) >> 2 & 1) != 0) &&
                           (*(int *)(_NGUIText_TypeInfo_12d53c0 + 0xe0) == 0)) {
                          native_sub_4327ec();
                          lVar19 = *(long *)(_NGUIText_TypeInfo_12d53c0 + 0xb8);
                        }
                        if (*(long *)(lVar19 + 0x100) == 0) goto LAB_0080f80c;
                        native_System_Text_StringBuilder__Append_a49d68
                                  (*(long *)(lVar19 + 0x100),_StringLiteral___12f3230,0);
                        lVar19 = *(long *)(*(long *)(_NGUIText_TypeInfo_12d53c0 + 0xb8) + 0xb8);
                        if ((lVar19 == 0) || (lVar19 = *(long *)(lVar19 + 0x10), lVar19 == 0))
                        goto LAB_0080f80c;
                        if (*(uint *)(lVar19 + 0x18) <= uVar14) goto LAB_0080f810;
                        lVar20 = *(long *)(*(long *)(_NGUIText_TypeInfo_12d53c0 + 0xb8) + 0x100);
                        lVar19 = lVar19 + lVar18;
                        uVar15 = native_NGUIText__EncodeColor_80b59c
                                           (*(undefined4 *)(lVar19 + 0x20),
                                            *(undefined4 *)(lVar19 + 0x24),
                                            *(undefined4 *)(lVar19 + 0x28),
                                            *(undefined4 *)(lVar19 + 0x2c));
                        if (lVar20 == 0) goto LAB_0080f80c;
                        native_System_Text_StringBuilder__Append_a49d68(lVar20,uVar15,0);
                        lVar19 = *(long *)(*(long *)(_NGUIText_TypeInfo_12d53c0 + 0xb8) + 0x100);
                        if (lVar19 == 0) goto LAB_0080f80c;
                        native_System_Text_StringBuilder__Append_a49d68
                                  (lVar19,_StringLiteral___12f3410,0);
                        uVar14 = uVar14 + 1;
                        lVar18 = lVar18 + 0x10;
                      }
                    }
                    iVar23 = iStack_bc + 1;
LAB_0080f1ac:
                    iVar13 = iVar13 + 1;
                    uStack_fc = 0;
                    fVar35 = 0.0;
                    bVar3 = true;
                    goto LAB_0080f3b8;
                  }
LAB_0080f3ec:
                  if (iStack_bc <= iVar23) goto LAB_0080f438;
                  if (((*(byte *)(_NGUIText_TypeInfo_12d53c0 + 0x133) >> 2 & 1) != 0) &&
                     (*(int *)(_NGUIText_TypeInfo_12d53c0 + 0xe0) == 0)) {
                    native_sub_4327ec();
                  }
                  lVar18 = *(long *)(*(long *)(_NGUIText_TypeInfo_12d53c0 + 0xb8) + 0x100);
                  if (lVar18 != 0) {
                    native_System_Text_StringBuilder__Append_a49eb4
                              (lVar18,lStack_b8,iVar23,iStack_bc - iVar23,0);
                    goto LAB_0080f438;
                  }
                }
              }
            }
          }
LAB_0080f80c:
                    /* WARNING: Subroutine does not return */
          native_sub_432810();
        }
      }
    }
  }
  *param_2 = _StringLiteral__12eaac0;
  native_sub_4326e0(param_2,_StringLiteral__12eaac0);
  return false;
}



/* NGUIText$$WrapText @ 0x80dd68
 * bool NGUIText__WrapText (System_String_o* text, System_String_o** finalText, bool keepCharCount, bool wrapLineColors, bool useEllipsis, const MethodInfo* method); */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* NGUIText$$WrapText
   bool NGUIText__WrapText (System_String_o* text, System_String_o** finalText, bool keepCharCount,
   bool wrapLineColors, bool useEllipsis, const MethodInfo* method); */

bool native_NGUIText__WrapText_80dd68
               (long param_1,undefined8 *param_2,uint param_3,byte param_4,byte param_5)

{
  byte bVar1;
  int iVar2;
  byte bVar3;
  byte bVar4;
  char cVar5;
  bool bVar6;
  ushort uVar7;
  int iVar8;
  int iVar9;
  uint uVar10;
  int iVar11;
  int iVar12;
  int iVar13;
  int iVar14;
  ulong uVar15;
  undefined8 uVar16;
  long *plVar17;
  char cVar18;
  long lVar19;
  long lVar20;
  undefined8 *puVar21;
  long lVar22;
  long lVar23;
  uint uVar24;
  float fVar25;
  float fVar26;
  double dVar27;
  float fVar28;
  undefined4 uVar29;
  float fVar30;
  undefined4 uVar31;
  float fVar32;
  undefined4 uVar33;
  undefined4 uVar34;
  float fVar35;
  int iVar36;
  float fVar37;
  uint uStack_120;
  uint uStack_fc;
  uint uStack_f0;
  int iStack_e8;
  uint uStack_e0;
  float fStack_dc;
  undefined1 auStack_d8 [4];
  char acStack_d4 [4];
  undefined1 auStack_d0 [4];
  undefined1 auStack_cc [4];
  char acStack_c8 [4];
  char acStack_c4 [4];
  int iStack_c0;
  int iStack_bc;
  long lStack_b8;
  double adStack_b0 [2];
  
  lStack_b8 = param_1;
  if ((bRam00000000013404a3 & 1) == 0) {
    native_sub_43273c(&Method_BetterList_Color__Add___12d8928);
    native_sub_43273c(&Method_BetterList_Color__Clear___12d8930);
    native_sub_43273c(&NGUIText_TypeInfo_12d53c0);
    native_sub_43273c(&System_Text_StringBuilder_TypeInfo_12d5f30);
    native_sub_43273c(&StringLiteral___sub__12f3258);
    native_sub_43273c(&StringLiteral_____12f3240);
    native_sub_43273c(&StringLiteral___12eac68);
    native_sub_43273c(&StringLiteral___y__12f3270);
    native_sub_43273c(&StringLiteral___12f3230);
    native_sub_43273c(&StringLiteral__12eaac0);
    native_sub_43273c(&StringLiteral___12f3410);
    native_sub_43273c(&StringLiteral_____ff_____12f3250);
    native_sub_43273c(&StringLiteral_____12eb7c8);
    bRam00000000013404a3 = 1;
  }
  iStack_c0 = 0;
  iStack_bc = 0;
  acStack_c4[0] = '\0';
  acStack_c8[0] = '\0';
  auStack_cc[0] = 0;
  auStack_d0[0] = 0;
  acStack_d4[0] = '\0';
  auStack_d8[0] = 0;
  fStack_dc = 0.0;
  if (((*(byte *)(_NGUIText_TypeInfo_12d53c0 + 0x133) >> 2 & 1) != 0) &&
     (*(int *)(_NGUIText_TypeInfo_12d53c0 + 0xe0) == 0)) {
    native_sub_4327ec();
  }
  lVar19 = *(long *)(_NGUIText_TypeInfo_12d53c0 + 0xb8);
  if (0 < *(int *)(lVar19 + 0x48)) {
    if (((*(byte *)(_NGUIText_TypeInfo_12d53c0 + 0x133) >> 2 & 1) != 0) &&
       (*(int *)(_NGUIText_TypeInfo_12d53c0 + 0xe0) == 0)) {
      native_sub_4327ec();
      lVar19 = *(long *)(_NGUIText_TypeInfo_12d53c0 + 0xb8);
    }
    if (0 < *(int *)(lVar19 + 0x4c)) {
      if (((*(byte *)(_NGUIText_TypeInfo_12d53c0 + 0x133) >> 2 & 1) != 0) &&
         (*(int *)(_NGUIText_TypeInfo_12d53c0 + 0xe0) == 0)) {
        native_sub_4327ec();
        lVar19 = *(long *)(_NGUIText_TypeInfo_12d53c0 + 0xb8);
      }
      if (1.0 <= *(float *)(lVar19 + 0x94)) {
        uVar7 = *(ushort *)(_NGUIText_TypeInfo_12d53c0 + 0x132);
        if ((uVar7 >> 10 & 1) == 0) {
          uVar7 = 0;
        }
        else {
          if (*(int *)(_NGUIText_TypeInfo_12d53c0 + 0xe0) == 0) {
            native_sub_4327ec();
            uVar7 = *(ushort *)(_NGUIText_TypeInfo_12d53c0 + 0x132);
            lVar19 = *(long *)(_NGUIText_TypeInfo_12d53c0 + 0xb8);
          }
          uVar7 = uVar7 & 0x400;
        }
        iVar8 = *(int *)(lVar19 + 0x50);
        if (iVar8 < 1) {
          if ((uVar7 != 0) && (*(int *)(_NGUIText_TypeInfo_12d53c0 + 0xe0) == 0)) {
            native_sub_4327ec();
            lVar19 = *(long *)(_NGUIText_TypeInfo_12d53c0 + 0xb8);
          }
          fVar25 = (float)*(int *)(lVar19 + 0x4c);
        }
        else {
          if ((uVar7 != 0) && (*(int *)(_NGUIText_TypeInfo_12d53c0 + 0xe0) == 0)) {
            native_sub_4327ec();
            lVar19 = *(long *)(_NGUIText_TypeInfo_12d53c0 + 0xb8);
            iVar8 = *(int *)(lVar19 + 0x50);
          }
          fVar25 = (float)native_UnityEngine_Mathf__Min_8e4bb8
                                    ((float)*(int *)(lVar19 + 0x4c),
                                     *(float *)(lVar19 + 0x94) * (float)iVar8,0);
        }
        if (((*(byte *)(_NGUIText_TypeInfo_12d53c0 + 0x133) >> 2 & 1) != 0) &&
           (*(int *)(_NGUIText_TypeInfo_12d53c0 + 0xe0) == 0)) {
          native_sub_4327ec();
        }
        iVar8 = *(int *)(*(long *)(_NGUIText_TypeInfo_12d53c0 + 0xb8) + 0x50);
        if (iVar8 < 1) {
          iVar8 = 1000000;
        }
        else if (((*(byte *)(_NGUIText_TypeInfo_12d53c0 + 0x133) >> 2 & 1) != 0) &&
                (*(int *)(_NGUIText_TypeInfo_12d53c0 + 0xe0) == 0)) {
          native_sub_4327ec();
          iVar8 = *(int *)(*(long *)(_NGUIText_TypeInfo_12d53c0 + 0xb8) + 0x50);
        }
        if (((*(byte *)(_NGUIText_TypeInfo_12d53c0 + 0x133) >> 2 & 1) != 0) &&
           (*(int *)(_NGUIText_TypeInfo_12d53c0 + 0xe0) == 0)) {
          native_sub_4327ec();
        }
        fVar25 = (float)native_UnityEngine_Mathf__Min_8e4bb8
                                  ((float)iVar8,
                                   fVar25 / *(float *)(*(long *)(_NGUIText_TypeInfo_12d53c0 + 0xb8)
                                                      + 0x94),0);
        iVar8 = native_UnityEngine_Mathf__FloorToInt_8e506c(fVar25 + 0.01,0);
        if (iVar8 != 0) {
          uVar15 = native_System_String__IsNullOrEmpty_b09430(param_1,0);
          if ((uVar15 & 1) != 0) {
            lStack_b8 = _StringLiteral___12eac68;
            param_1 = _StringLiteral___12eac68;
          }
          if (param_1 != 0) {
            iVar2 = *(int *)(param_1 + 0x10);
            if (((*(byte *)(_NGUIText_TypeInfo_12d53c0 + 0x133) >> 2 & 1) != 0) &&
               (*(int *)(_NGUIText_TypeInfo_12d53c0 + 0xe0) == 0)) {
              native_sub_4327ec();
            }
            native_NGUIText__Prepare_808c84(param_1);
            lVar19 = *(long *)(*(long *)(_NGUIText_TypeInfo_12d53c0 + 0xb8) + 0xb8);
            if (lVar19 != 0) {
              native_BetterList_Color___Clear_ba192c
                        (lVar19,_Method_BetterList_Color__Clear___12d8930);
              lVar19 = *(long *)(*(long *)(_NGUIText_TypeInfo_12d53c0 + 0xb8) + 0x100);
              if (lVar19 == 0) {
                uVar16 = native_sub_432808(_System_Text_StringBuilder_TypeInfo_12d5f30);
                native_System_Text_StringBuilder___ctor_a4881c(uVar16,0);
                if (((*(byte *)(_NGUIText_TypeInfo_12d53c0 + 0x133) >> 2 & 1) != 0) &&
                   (*(int *)(_NGUIText_TypeInfo_12d53c0 + 0xe0) == 0)) {
                  native_sub_4327ec();
                }
                lVar19 = *(long *)(_NGUIText_TypeInfo_12d53c0 + 0xb8);
                *(undefined8 *)(lVar19 + 0x100) = uVar16;
                native_sub_4326e0(lVar19 + 0x100,uVar16);
              }
              else {
                if (((*(byte *)(_NGUIText_TypeInfo_12d53c0 + 0x133) >> 2 & 1) != 0) &&
                   (*(int *)(_NGUIText_TypeInfo_12d53c0 + 0xe0) == 0)) {
                  native_sub_4327ec(_NGUIText_TypeInfo_12d53c0);
                  lVar19 = *(long *)(*(long *)(_NGUIText_TypeInfo_12d53c0 + 0xb8) + 0x100);
                  if (lVar19 == 0) goto LAB_0080f80c;
                }
                native_System_Text_StringBuilder__set_Length_a4945c(lVar19,0,0);
              }
              uVar7 = *(ushort *)(_NGUIText_TypeInfo_12d53c0 + 0x132);
              if ((uVar7 >> 10 & 1) == 0) {
                uVar7 = 0;
              }
              else {
                if (*(int *)(_NGUIText_TypeInfo_12d53c0 + 0xe0) == 0) {
                  native_sub_4327ec();
                  uVar7 = *(ushort *)(_NGUIText_TypeInfo_12d53c0 + 0x132);
                }
                uVar7 = uVar7 & 0x400;
              }
              lVar19 = *(long *)(_NGUIText_TypeInfo_12d53c0 + 0xb8);
              iVar36 = *(int *)(lVar19 + 0x48);
              iStack_c0 = 0;
              iStack_bc = 0;
              uVar29 = *(undefined4 *)(lVar19 + 0x30);
              uVar31 = *(undefined4 *)(lVar19 + 0x34);
              uVar33 = *(undefined4 *)(lVar19 + 0x38);
              uVar34 = *(undefined4 *)(lVar19 + 0x3c);
              acStack_c4[0] = '\0';
              acStack_c8[0] = '\0';
              auStack_cc[0] = 0;
              auStack_d0[0] = 0;
              acStack_d4[0] = '\0';
              auStack_d8[0] = 0;
              if ((param_5 & 1) == 0) {
                if ((uVar7 != 0) && (*(int *)(_NGUIText_TypeInfo_12d53c0 + 0xe0) == 0)) {
                  native_sub_4327ec();
                  lVar19 = *(long *)(_NGUIText_TypeInfo_12d53c0 + 0xb8);
                }
                fVar25 = *(float *)(lVar19 + 0x90);
              }
              else {
                if ((uVar7 != 0) && (*(int *)(_NGUIText_TypeInfo_12d53c0 + 0xe0) == 0)) {
                  native_sub_4327ec();
                  lVar19 = *(long *)(_NGUIText_TypeInfo_12d53c0 + 0xb8);
                }
                fVar28 = *(float *)(lVar19 + 0x90);
                fVar25 = (float)native_NGUIText__GetGlyphWidth_809de8
                                          (*(undefined4 *)(lVar19 + 0x20),0x2e,0x2e,0,0);
                fVar25 = (fVar28 + fVar25) * 3.0;
              }
              if (((*(byte *)(_NGUIText_TypeInfo_12d53c0 + 0x133) >> 2 & 1) != 0) &&
                 (*(int *)(_NGUIText_TypeInfo_12d53c0 + 0xe0) == 0)) {
                native_sub_4327ec();
              }
              fVar28 = (float)native_NGUIText__get_symbolScale_80c8d8();
              iVar9 = native_NGUIText__get_symbolMaxHeight_80cb28();
              fStack_dc = 0.0;
              lVar19 = *(long *)(*(long *)(_NGUIText_TypeInfo_12d53c0 + 0xb8) + 0xb8);
              if (lVar19 != 0) {
                native_BetterList_Color___Add_ba1944
                          (uVar29,uVar31,uVar33,uVar34,lVar19,
                           _Method_BetterList_Color__Add___12d8928);
                lVar19 = *(long *)(_NGUIText_TypeInfo_12d53c0 + 0xb8);
                param_4 = *(char *)(lVar19 + 0x9c) != '\0' & param_4;
                if (param_4 == 1) {
                  if (((*(byte *)(_NGUIText_TypeInfo_12d53c0 + 0x133) >> 2 & 1) != 0) &&
                     (*(int *)(_NGUIText_TypeInfo_12d53c0 + 0xe0) == 0)) {
                    native_sub_4327ec();
                    lVar19 = *(long *)(_NGUIText_TypeInfo_12d53c0 + 0xb8);
                  }
                  if (*(long *)(lVar19 + 0x100) == 0) goto LAB_0080f80c;
                  native_System_Text_StringBuilder__Append_a49d68
                            (*(long *)(lVar19 + 0x100),_StringLiteral___12f3230,0);
                  lVar19 = *(long *)(*(long *)(_NGUIText_TypeInfo_12d53c0 + 0xb8) + 0x100);
                  uVar16 = native_NGUIText__EncodeColor_80b59c(uVar29,uVar31,uVar33,uVar34);
                  if (lVar19 == 0) goto LAB_0080f80c;
                  native_System_Text_StringBuilder__Append_a49d68(lVar19,uVar16,0);
                  lVar19 = *(long *)(*(long *)(_NGUIText_TypeInfo_12d53c0 + 0xb8) + 0x100);
                  if (lVar19 == 0) goto LAB_0080f80c;
                  native_System_Text_StringBuilder__Append_a49d68(lVar19,_StringLiteral___12f3410,0)
                  ;
                }
                if (0 < iVar2) {
                  fVar32 = (float)iVar36;
                  iVar36 = 0;
                  iVar14 = 0;
                  iVar12 = 0;
                  uStack_120 = 1;
                  iVar13 = 1;
                  fVar37 = 0.0;
                  iStack_e8 = 0;
                  uStack_fc = 0;
                  bVar3 = 1;
                  uStack_f0 = 0;
                  do {
                    uVar10 = native_System_String__get_Chars_b03810(param_1,iVar12,0);
                    if (((*(byte *)(_NGUIText_TypeInfo_12d53c0 + 0x133) >> 2 & 1) != 0) &&
                       (*(int *)(_NGUIText_TypeInfo_12d53c0 + 0xe0) == 0)) {
                      native_sub_4327ec(_NGUIText_TypeInfo_12d53c0);
                    }
                    uVar24 = uVar10 & 0xffff;
                    if ((uVar24 != 0x200a) && (uVar24 != 0x20)) {
                      uStack_e0 = (uint)((uVar24 | 2) == 0x200b);
                      uStack_f0 = uStack_f0 | 2 < (uVar10 >> 0xc & 0xf);
                      if ((uVar10 & 0xffff) != 10) goto LAB_0080e410;
                      iVar11 = iVar8;
                      if (iVar13 != iVar8) {
                        if (iVar36 < iStack_bc) {
                          if (((*(ushort *)(_NGUIText_TypeInfo_12d53c0 + 0x132) >> 10 & 1) != 0) &&
                             (*(int *)(_NGUIText_TypeInfo_12d53c0 + 0xe0) == 0)) {
                            native_sub_4327ec();
                          }
                          lVar19 = *(long *)(*(long *)(_NGUIText_TypeInfo_12d53c0 + 0xb8) + 0x100);
                          if (lVar19 == 0) goto LAB_0080f80c;
                          native_System_Text_StringBuilder__Append_a49eb4
                                    (lVar19,lStack_b8,iVar36,iVar14 + iStack_bc + 1,0);
                        }
                        else {
                          if (((*(ushort *)(_NGUIText_TypeInfo_12d53c0 + 0x132) >> 10 & 1) != 0) &&
                             (*(int *)(_NGUIText_TypeInfo_12d53c0 + 0xe0) == 0)) {
                            native_sub_4327ec();
                          }
                          lVar19 = *(long *)(*(long *)(_NGUIText_TypeInfo_12d53c0 + 0xb8) + 0x100);
                          if (lVar19 == 0) goto LAB_0080f80c;
                          native_System_Text_StringBuilder__Append_a4a9d8(lVar19,10,0);
                        }
                        if (param_4 != 0) {
                          iVar36 = 0;
                          while( true ) {
                            if (((*(byte *)(_NGUIText_TypeInfo_12d53c0 + 0x133) >> 2 & 1) != 0) &&
                               (*(int *)(_NGUIText_TypeInfo_12d53c0 + 0xe0) == 0)) {
                              native_sub_4327ec();
                            }
                            lVar19 = *(long *)(_NGUIText_TypeInfo_12d53c0 + 0xb8);
                            if (*(long *)(lVar19 + 0xb8) == 0) goto LAB_0080f80c;
                            if (*(int *)(*(long *)(lVar19 + 0xb8) + 0x18) <= iVar36) break;
                            if (((*(byte *)(_NGUIText_TypeInfo_12d53c0 + 0x133) >> 2 & 1) != 0) &&
                               (*(int *)(_NGUIText_TypeInfo_12d53c0 + 0xe0) == 0)) {
                              native_sub_4327ec();
                              lVar19 = *(long *)(_NGUIText_TypeInfo_12d53c0 + 0xb8);
                            }
                            lVar19 = *(long *)(lVar19 + 0x100);
                            if (lVar19 == 0) goto LAB_0080f80c;
                            iVar12 = native_System_Text_StringBuilder__get_Length_a49204(lVar19,0);
                            native_System_Text_StringBuilder__Insert_a4abd0
                                      (lVar19,iVar12 + -1,_StringLiteral_____12f3240,0);
                            iVar36 = iVar36 + 1;
                          }
                          lVar19 = 0;
                          uVar15 = 0;
                          while( true ) {
                            if (((*(byte *)(_NGUIText_TypeInfo_12d53c0 + 0x133) >> 2 & 1) != 0) &&
                               (*(int *)(_NGUIText_TypeInfo_12d53c0 + 0xe0) == 0)) {
                              native_sub_4327ec();
                            }
                            lVar20 = *(long *)(_NGUIText_TypeInfo_12d53c0 + 0xb8);
                            if (*(long *)(lVar20 + 0xb8) == 0) goto LAB_0080f80c;
                            if ((long)*(int *)(*(long *)(lVar20 + 0xb8) + 0x18) <= (long)uVar15)
                            break;
                            if (((*(byte *)(_NGUIText_TypeInfo_12d53c0 + 0x133) >> 2 & 1) != 0) &&
                               (*(int *)(_NGUIText_TypeInfo_12d53c0 + 0xe0) == 0)) {
                              native_sub_4327ec();
                              lVar20 = *(long *)(_NGUIText_TypeInfo_12d53c0 + 0xb8);
                            }
                            if (*(long *)(lVar20 + 0x100) == 0) goto LAB_0080f80c;
                            native_System_Text_StringBuilder__Append_a49d68
                                      (*(long *)(lVar20 + 0x100),_StringLiteral___12f3230,0);
                            lVar20 = *(long *)(*(long *)(_NGUIText_TypeInfo_12d53c0 + 0xb8) + 0xb8);
                            if ((lVar20 == 0) || (lVar20 = *(long *)(lVar20 + 0x10), lVar20 == 0))
                            goto LAB_0080f80c;
                            if (*(uint *)(lVar20 + 0x18) <= uVar15) goto LAB_0080f810;
                            lVar22 = *(long *)(*(long *)(_NGUIText_TypeInfo_12d53c0 + 0xb8) + 0x100)
                            ;
                            lVar20 = lVar20 + lVar19;
                            uVar16 = native_NGUIText__EncodeColor_80b59c
                                               (*(undefined4 *)(lVar20 + 0x20),
                                                *(undefined4 *)(lVar20 + 0x24),
                                                *(undefined4 *)(lVar20 + 0x28),
                                                *(undefined4 *)(lVar20 + 0x2c));
                            if (lVar22 == 0) goto LAB_0080f80c;
                            native_System_Text_StringBuilder__Append_a49d68(lVar22,uVar16,0);
                            lVar20 = *(long *)(*(long *)(_NGUIText_TypeInfo_12d53c0 + 0xb8) + 0x100)
                            ;
                            if (lVar20 == 0) goto LAB_0080f80c;
                            native_System_Text_StringBuilder__Append_a49d68
                                      (lVar20,_StringLiteral___12f3410,0);
                            uVar15 = uVar15 + 1;
                            lVar19 = lVar19 + 0x10;
                          }
                        }
                        iVar36 = iStack_bc + 1;
LAB_0080f1ac:
                        iVar13 = iVar13 + 1;
                        uStack_fc = 0;
                        fVar37 = 0.0;
                        bVar3 = 1;
                        goto LAB_0080f3b8;
                      }
LAB_0080f3ec:
                      if (iStack_bc <= iVar36) goto LAB_0080f438;
                      if (((*(byte *)(_NGUIText_TypeInfo_12d53c0 + 0x133) >> 2 & 1) != 0) &&
                         (*(int *)(_NGUIText_TypeInfo_12d53c0 + 0xe0) == 0)) {
                        native_sub_4327ec();
                      }
                      lVar19 = *(long *)(*(long *)(_NGUIText_TypeInfo_12d53c0 + 0xb8) + 0x100);
                      if (lVar19 != 0) {
                        native_System_Text_StringBuilder__Append_a49eb4
                                  (lVar19,lStack_b8,iVar36,iStack_bc - iVar36,0);
                        goto LAB_0080f438;
                      }
                      goto LAB_0080f80c;
                    }
                    uStack_e0 = 1;
LAB_0080e410:
                    bVar6 = iVar13 == iVar8;
                    if (((*(byte *)(_NGUIText_TypeInfo_12d53c0 + 0x133) >> 2 & 1) != 0) &&
                       (*(int *)(_NGUIText_TypeInfo_12d53c0 + 0xe0) == 0)) {
                      native_sub_4327ec();
                    }
                    lVar19 = lStack_b8;
                    lVar20 = *(long *)(_NGUIText_TypeInfo_12d53c0 + 0xb8);
                    if (*(char *)(lVar20 + 0x78) == '\0') {
LAB_0080e608:
                      if (((*(byte *)(_NGUIText_TypeInfo_12d53c0 + 0x133) >> 2 & 1) != 0) &&
                         (*(int *)(_NGUIText_TypeInfo_12d53c0 + 0xe0) == 0)) {
                        native_sub_4327ec();
                      }
                      iVar12 = iStack_bc;
                      if (*(char *)(*(long *)(_NGUIText_TypeInfo_12d53c0 + 0xb8) + 0x9c) == '\0') {
                        lVar19 = 0;
                      }
                      else {
                        if (((*(byte *)(_NGUIText_TypeInfo_12d53c0 + 0x133) >> 2 & 1) != 0) &&
                           (*(int *)(_NGUIText_TypeInfo_12d53c0 + 0xe0) == 0)) {
                          native_sub_4327ec();
                        }
                        lVar19 = native_NGUIText__GetSymbol_809ca4(&lStack_b8,iVar12,iVar2);
                      }
                      iVar12 = iStack_c0;
                      if (iStack_c0 == 0) {
                        if (fStack_dc != 0.0) {
                          if (((*(ushort *)(_NGUIText_TypeInfo_12d53c0 + 0x132) >> 10 & 1) != 0) &&
                             (*(int *)(_NGUIText_TypeInfo_12d53c0 + 0xe0) == 0)) {
                            native_sub_4327ec();
                          }
                          fVar30 = *(float *)(*(long *)(_NGUIText_TypeInfo_12d53c0 + 0xb8) + 0x20) *
                                   fStack_dc;
                          goto joined_r0x0080e830;
                        }
                        if (((*(ushort *)(_NGUIText_TypeInfo_12d53c0 + 0x132) >> 10 & 1) != 0) &&
                           (*(int *)(_NGUIText_TypeInfo_12d53c0 + 0xe0) == 0)) {
                          native_sub_4327ec();
                        }
                        fVar30 = *(float *)(*(long *)(_NGUIText_TypeInfo_12d53c0 + 0xb8) + 0x20);
                        if (lVar19 == 0) goto LAB_0080e770;
LAB_0080e698:
                        iVar11 = native_BMSymbol__get_paddedHeight_dd218c(lVar19,0);
                        cVar18 = *(char *)(lVar19 + 0x21);
                        if (((iVar9 < iVar11) && (iVar9 != 0)) && (cVar18 == '\0')) {
                          fVar30 = fVar30 * ((float)iVar9 / (float)iVar11);
                        }
                        if (((*(byte *)(_NGUIText_TypeInfo_12d53c0 + 0x133) >> 2 & 1) != 0) &&
                           (*(int *)(_NGUIText_TypeInfo_12d53c0 + 0xe0) == 0)) {
                          native_sub_4327ec();
                          cVar18 = *(char *)(lVar19 + 0x21);
                        }
                        fVar35 = *(float *)(*(long *)(_NGUIText_TypeInfo_12d53c0 + 0xb8) + 0x90);
                        fVar26 = (float)*(int *)(lVar19 + 0x48);
                        if (cVar18 == '\0') {
                          fVar30 = fVar28 * fVar30 * (float)*(int *)(lVar19 + 0x48);
                          dVar27 = (double)func_0x002c9600((double)fVar30,adStack_b0);
                          if (0.0 <= fVar30) {
                            if (dVar27 == 0.5) {
                              fVar30 = (float)adStack_b0[0] + 1.0;
                              goto LAB_0080e854;
                            }
                            fVar26 = (float)(int)(fVar30 + 0.5);
                          }
                          else if (dVar27 == -0.5) {
                            fVar30 = (float)adStack_b0[0] + -1.0;
LAB_0080e854:
                            fVar26 = (float)adStack_b0[0];
                            if (((long)adStack_b0[0] & 1U) != 0) {
                              fVar26 = fVar30;
                            }
                          }
                          else {
                            fVar26 = (float)(int)(fVar30 + -0.5);
                          }
                        }
                        fVar35 = fVar35 + fVar26;
                      }
                      else {
                        if (((*(byte *)(_NGUIText_TypeInfo_12d53c0 + 0x133) >> 2 & 1) != 0) &&
                           (*(int *)(_NGUIText_TypeInfo_12d53c0 + 0xe0) == 0)) {
                          native_sub_4327ec();
                        }
                        fVar30 = *(float *)(*(long *)(_NGUIText_TypeInfo_12d53c0 + 0xb8) + 0x20) *
                                 fStack_dc;
joined_r0x0080e830:
                        if (lVar19 != 0) goto LAB_0080e698;
LAB_0080e770:
                        cVar5 = acStack_c4[0];
                        cVar18 = acStack_c8[0];
                        if (((*(byte *)(_NGUIText_TypeInfo_12d53c0 + 0x133) >> 2 & 1) != 0) &&
                           (*(int *)(_NGUIText_TypeInfo_12d53c0 + 0xe0) == 0)) {
                          native_sub_4327ec();
                        }
                        fVar35 = (float)native_NGUIText__GetGlyphWidth_809de8
                                                  (fVar30,uVar24,uStack_fc,cVar5 != '\0',
                                                   cVar18 != '\0');
                        if (((uint)(fVar35 == 0.0) & (uStack_e0 ^ 0xffffffff)) != 0)
                        goto LAB_0080f3b8;
                        if (((*(byte *)(_NGUIText_TypeInfo_12d53c0 + 0x133) >> 2 & 1) != 0) &&
                           (*(int *)(_NGUIText_TypeInfo_12d53c0 + 0xe0) == 0)) {
                          native_sub_4327ec();
                        }
                        fVar35 = fVar35 + *(float *)(*(long *)(_NGUIText_TypeInfo_12d53c0 + 0xb8) +
                                                    0x90);
                      }
                      if (iVar12 != 0) {
                        dVar27 = (double)func_0x002c9600((double)fVar35,adStack_b0);
                        if (0.0 <= fVar35) {
                          if (dVar27 == 0.5) {
                            fVar30 = (float)adStack_b0[0] + 1.0;
                            goto LAB_0080ec40;
                          }
                          fVar35 = (float)(int)(fVar35 + 0.5);
                        }
                        else if (dVar27 == -0.5) {
                          fVar30 = (float)adStack_b0[0] + -1.0;
LAB_0080ec40:
                          fVar35 = (float)adStack_b0[0];
                          if (((long)adStack_b0[0] & 1U) != 0) {
                            fVar35 = fVar30;
                          }
                        }
                        else {
                          fVar35 = (float)(int)(fVar35 + -0.5);
                        }
                      }
                      fVar37 = fVar37 + fVar35;
                      bVar1 = (bVar3 | bVar6) & param_5;
                      fVar30 = fVar32 - fVar25;
                      if (bVar1 == 0) {
                        fVar30 = fVar32;
                      }
                      bVar4 = bVar3;
                      if (((uStack_e0 & (uStack_f0 ^ 1)) == 1) &&
                         (iVar11 = iStack_bc - iVar36, iVar11 != 0 && iVar36 <= iStack_bc)) {
                        if ((iStack_bc < iVar2) && (bVar6 && fVar30 <= fVar37)) {
                          if (lStack_b8 == 0) goto LAB_0080f80c;
                          uVar7 = native_System_String__get_Chars_b03810(lStack_b8,iStack_bc,0);
                          if (0x1f < uVar7) {
                            if (((*(byte *)(_NGUIText_TypeInfo_12d53c0 + 0x133) >> 2 & 1) != 0) &&
                               (*(int *)(_NGUIText_TypeInfo_12d53c0 + 0xe0) == 0)) {
                              native_sub_4327ec();
                            }
                            if (((uVar7 != 0x20) && (uVar7 != 0x200a)) && ((uVar7 | 2) != 0x200b))
                            goto LAB_0080ed2c;
                          }
                          iVar11 = iVar11 + -1;
                        }
LAB_0080ed2c:
                        if (((bVar1 == 0) || (fVar37 <= fVar30)) ||
                           ((fVar32 <= fVar37 || (iStack_e8 <= iVar36)))) {
                          if (((*(byte *)(_NGUIText_TypeInfo_12d53c0 + 0x133) >> 2 & 1) != 0) &&
                             (*(int *)(_NGUIText_TypeInfo_12d53c0 + 0xe0) == 0)) {
                            native_sub_4327ec();
                          }
                          lVar20 = *(long *)(*(long *)(_NGUIText_TypeInfo_12d53c0 + 0xb8) + 0x100);
                          if (lVar20 != 0) {
                            native_System_Text_StringBuilder__Append_a49eb4
                                      (lVar20,lStack_b8,iVar36,iVar11 + 1,0);
                            iVar36 = iStack_bc + 1;
                            bVar4 = 0;
                            goto LAB_0080edc0;
                          }
                          goto LAB_0080f80c;
                        }
                        if (iVar36 < iStack_e8) {
                          if (((*(byte *)(_NGUIText_TypeInfo_12d53c0 + 0x133) >> 2 & 1) != 0) &&
                             (*(int *)(_NGUIText_TypeInfo_12d53c0 + 0xe0) == 0)) {
                            native_sub_4327ec();
                          }
                          lVar19 = *(long *)(*(long *)(_NGUIText_TypeInfo_12d53c0 + 0xb8) + 0x100);
                          if (lVar19 == 0) goto LAB_0080f80c;
                          native_System_Text_StringBuilder__Append_a49eb4
                                    (lVar19,lStack_b8,iVar36,iStack_e8 + iVar14 + 1,0);
                        }
                        if (iVar12 == 0) {
                          if (fStack_dc != 0.0) {
                            if (((*(byte *)(_NGUIText_TypeInfo_12d53c0 + 0x133) >> 2 & 1) != 0) &&
                               (*(int *)(_NGUIText_TypeInfo_12d53c0 + 0xe0) == 0)) {
                              native_sub_4327ec();
                            }
                            lVar19 = *(long *)(*(long *)(_NGUIText_TypeInfo_12d53c0 + 0xb8) + 0x100)
                            ;
                            if (lVar19 != 0) {
                              puVar21 = (undefined8 *)&StringLiteral___y__12f3270;
                              goto LAB_0080f5f4;
                            }
                            goto LAB_0080f80c;
                          }
                        }
                        else {
                          if (((*(byte *)(_NGUIText_TypeInfo_12d53c0 + 0x133) >> 2 & 1) != 0) &&
                             (*(int *)(_NGUIText_TypeInfo_12d53c0 + 0xe0) == 0)) {
                            native_sub_4327ec();
                          }
                          lVar19 = *(long *)(*(long *)(_NGUIText_TypeInfo_12d53c0 + 0xb8) + 0x100);
                          if (lVar19 == 0) goto LAB_0080f80c;
                          puVar21 = (undefined8 *)&StringLiteral___sub__12f3258;
LAB_0080f5f4:
                          native_System_Text_StringBuilder__Append_a49d68(lVar19,*puVar21,0);
                        }
                        if (((*(byte *)(_NGUIText_TypeInfo_12d53c0 + 0x133) >> 2 & 1) != 0) &&
                           (*(int *)(_NGUIText_TypeInfo_12d53c0 + 0xe0) == 0)) {
                          native_sub_4327ec();
                        }
                        lVar19 = *(long *)(_NGUIText_TypeInfo_12d53c0 + 0xb8);
LAB_0080f6f0:
                        lVar19 = *(long *)(lVar19 + 0x100);
                        if (lVar19 == 0) goto LAB_0080f80c;
                        puVar21 = (undefined8 *)&StringLiteral_____12eb7c8;
                      }
                      else {
LAB_0080edc0:
                        if ((uStack_e0 == 0 && ((param_5 ^ 1) & 1) == 0) && fVar37 <= fVar30) {
                          iStack_e8 = iStack_bc;
                        }
                        if (fVar37 <= fVar30) {
LAB_0080f388:
                          iVar12 = iStack_bc;
                          uStack_fc = uVar24;
                          bVar3 = bVar4;
                          if (lVar19 != 0) {
                            iVar14 = native_BMSymbol__get_length_dd2140(lVar19,0);
                            iStack_bc = iVar12 + iVar14 + -1;
                            uStack_fc = 0;
                          }
                          goto LAB_0080f3b8;
                        }
                        if (bVar3 == 0 && !bVar6) {
                          for (; iVar36 < iVar2; iVar36 = iVar36 + 1) {
                            if (lStack_b8 == 0) goto LAB_0080f80c;
                            uVar7 = native_System_String__get_Chars_b03810(lStack_b8,iVar36,0);
                            if (((*(byte *)(_NGUIText_TypeInfo_12d53c0 + 0x133) >> 2 & 1) != 0) &&
                               (*(int *)(_NGUIText_TypeInfo_12d53c0 + 0xe0) == 0)) {
                              native_sub_4327ec(_NGUIText_TypeInfo_12d53c0);
                            }
                            if (((uVar7 != 0x20) && (uVar7 != 0x200a)) && ((uVar7 | 2) != 0x200b))
                            break;
                          }
                          iStack_bc = iVar36 + -1;
                          if ((param_3 & 1) == 0) {
                            if (((*(ushort *)(_NGUIText_TypeInfo_12d53c0 + 0x132) >> 10 & 1) != 0)
                               && (*(int *)(_NGUIText_TypeInfo_12d53c0 + 0xe0) == 0)) {
                              native_sub_4327ec();
                            }
                            native_NGUIText__EndLine_80c6e8
                                      (*(long *)(_NGUIText_TypeInfo_12d53c0 + 0xb8) + 0x100);
                          }
                          else {
                            if (((*(ushort *)(_NGUIText_TypeInfo_12d53c0 + 0x132) >> 10 & 1) != 0)
                               && (*(int *)(_NGUIText_TypeInfo_12d53c0 + 0xe0) == 0)) {
                              native_sub_4327ec();
                            }
                            native_NGUIText__ReplaceSpaceWithNewline_80c7e8
                                      (*(long *)(_NGUIText_TypeInfo_12d53c0 + 0xb8) + 0x100);
                          }
                          fVar37 = 0.0;
                          if (param_4 == 0) goto LAB_0080f1ac;
                          iVar12 = 0;
                          while( true ) {
                            if (((*(byte *)(_NGUIText_TypeInfo_12d53c0 + 0x133) >> 2 & 1) != 0) &&
                               (*(int *)(_NGUIText_TypeInfo_12d53c0 + 0xe0) == 0)) {
                              native_sub_4327ec();
                            }
                            lVar19 = *(long *)(_NGUIText_TypeInfo_12d53c0 + 0xb8);
                            if (*(long *)(lVar19 + 0xb8) == 0) goto LAB_0080f80c;
                            if (*(int *)(*(long *)(lVar19 + 0xb8) + 0x18) <= iVar12) break;
                            if (((*(byte *)(_NGUIText_TypeInfo_12d53c0 + 0x133) >> 2 & 1) != 0) &&
                               (*(int *)(_NGUIText_TypeInfo_12d53c0 + 0xe0) == 0)) {
                              native_sub_4327ec();
                              lVar19 = *(long *)(_NGUIText_TypeInfo_12d53c0 + 0xb8);
                            }
                            lVar19 = *(long *)(lVar19 + 0x100);
                            if (lVar19 == 0) goto LAB_0080f80c;
                            iVar14 = native_System_Text_StringBuilder__get_Length_a49204(lVar19,0);
                            native_System_Text_StringBuilder__Insert_a4abd0
                                      (lVar19,iVar14 + -1,_StringLiteral_____12f3240,0);
                            iVar12 = iVar12 + 1;
                          }
                          lVar19 = 0;
                          uVar15 = 0;
                          while( true ) {
                            if (((*(byte *)(_NGUIText_TypeInfo_12d53c0 + 0x133) >> 2 & 1) != 0) &&
                               (*(int *)(_NGUIText_TypeInfo_12d53c0 + 0xe0) == 0)) {
                              native_sub_4327ec();
                            }
                            lVar20 = *(long *)(_NGUIText_TypeInfo_12d53c0 + 0xb8);
                            if (*(long *)(lVar20 + 0xb8) == 0) goto LAB_0080f80c;
                            if ((long)*(int *)(*(long *)(lVar20 + 0xb8) + 0x18) <= (long)uVar15)
                            break;
                            if (((*(byte *)(_NGUIText_TypeInfo_12d53c0 + 0x133) >> 2 & 1) != 0) &&
                               (*(int *)(_NGUIText_TypeInfo_12d53c0 + 0xe0) == 0)) {
                              native_sub_4327ec();
                              lVar20 = *(long *)(_NGUIText_TypeInfo_12d53c0 + 0xb8);
                            }
                            if (*(long *)(lVar20 + 0x100) == 0) goto LAB_0080f80c;
                            native_System_Text_StringBuilder__Append_a49d68
                                      (*(long *)(lVar20 + 0x100),_StringLiteral___12f3230,0);
                            lVar20 = *(long *)(*(long *)(_NGUIText_TypeInfo_12d53c0 + 0xb8) + 0xb8);
                            if ((lVar20 == 0) || (lVar20 = *(long *)(lVar20 + 0x10), lVar20 == 0))
                            goto LAB_0080f80c;
                            if (*(uint *)(lVar20 + 0x18) <= uVar15) goto LAB_0080f810;
                            lVar22 = *(long *)(*(long *)(_NGUIText_TypeInfo_12d53c0 + 0xb8) + 0x100)
                            ;
                            lVar20 = lVar20 + lVar19;
                            uVar16 = native_NGUIText__EncodeColor_80b59c
                                               (*(undefined4 *)(lVar20 + 0x20),
                                                *(undefined4 *)(lVar20 + 0x24),
                                                *(undefined4 *)(lVar20 + 0x28),
                                                *(undefined4 *)(lVar20 + 0x2c));
                            if (lVar22 == 0) goto LAB_0080f80c;
                            native_System_Text_StringBuilder__Append_a49d68(lVar22,uVar16,0);
                            lVar20 = *(long *)(*(long *)(_NGUIText_TypeInfo_12d53c0 + 0xb8) + 0x100)
                            ;
                            if (lVar20 == 0) goto LAB_0080f80c;
                            native_System_Text_StringBuilder__Append_a49d68
                                      (lVar20,_StringLiteral___12f3410,0);
                            uVar15 = uVar15 + 1;
                            lVar19 = lVar19 + 0x10;
                          }
                          uStack_fc = 0;
                          iVar13 = iVar13 + 1;
                          bVar3 = 1;
                          goto LAB_0080f3b8;
                        }
                        if (iStack_bc < 1 || ((param_5 ^ 1) & 1) != 0) {
                          if (((*(byte *)(_NGUIText_TypeInfo_12d53c0 + 0x133) >> 2 & 1) != 0) &&
                             (*(int *)(_NGUIText_TypeInfo_12d53c0 + 0xe0) == 0)) {
                            native_sub_4327ec();
                          }
                          lVar20 = lStack_b8;
                          lVar22 = *(long *)(*(long *)(_NGUIText_TypeInfo_12d53c0 + 0xb8) + 0x100);
                          uVar29 = native_UnityEngine_Mathf__Max_8e4cd0(0,iStack_bc - iVar36,0);
                          if (lVar22 == 0) goto LAB_0080f80c;
                          native_System_Text_StringBuilder__Append_a49eb4
                                    (lVar22,lVar20,iVar36,uVar29,0);
                          if (param_4 != 0) {
                            if (((*(byte *)(_NGUIText_TypeInfo_12d53c0 + 0x133) >> 2 & 1) != 0) &&
                               (*(int *)(_NGUIText_TypeInfo_12d53c0 + 0xe0) == 0)) {
                              native_sub_4327ec();
                            }
                            lVar20 = *(long *)(_NGUIText_TypeInfo_12d53c0 + 0xb8);
                            if (*(long *)(lVar20 + 0xb8) == 0) goto LAB_0080f80c;
                            if (0 < *(int *)(*(long *)(lVar20 + 0xb8) + 0x18)) {
                              if (((*(byte *)(_NGUIText_TypeInfo_12d53c0 + 0x133) >> 2 & 1) != 0) &&
                                 (*(int *)(_NGUIText_TypeInfo_12d53c0 + 0xe0) == 0)) {
                                native_sub_4327ec();
                                lVar20 = *(long *)(_NGUIText_TypeInfo_12d53c0 + 0xb8);
                              }
                              if (*(long *)(lVar20 + 0x100) == 0) goto LAB_0080f80c;
                              native_System_Text_StringBuilder__Append_a49d68
                                        (*(long *)(lVar20 + 0x100),_StringLiteral_____12f3240,0);
                            }
                          }
                          iVar11 = iVar13 + 1;
                          if (!bVar6) {
                            if ((param_3 & 1) == 0) {
                              if (((*(ushort *)(_NGUIText_TypeInfo_12d53c0 + 0x132) >> 10 & 1) != 0)
                                 && (*(int *)(_NGUIText_TypeInfo_12d53c0 + 0xe0) == 0)) {
                                native_sub_4327ec();
                              }
                              native_NGUIText__EndLine_80c6e8
                                        (*(long *)(_NGUIText_TypeInfo_12d53c0 + 0xb8) + 0x100);
                            }
                            else {
                              if (((*(ushort *)(_NGUIText_TypeInfo_12d53c0 + 0x132) >> 10 & 1) != 0)
                                 && (*(int *)(_NGUIText_TypeInfo_12d53c0 + 0xe0) == 0)) {
                                native_sub_4327ec();
                              }
                              native_NGUIText__ReplaceSpaceWithNewline_80c7e8
                                        (*(long *)(_NGUIText_TypeInfo_12d53c0 + 0xb8) + 0x100);
                            }
                            if (param_4 != 0) {
                              iVar36 = 0;
                              while( true ) {
                                if (((*(byte *)(_NGUIText_TypeInfo_12d53c0 + 0x133) >> 2 & 1) != 0)
                                   && (*(int *)(_NGUIText_TypeInfo_12d53c0 + 0xe0) == 0)) {
                                  native_sub_4327ec();
                                }
                                lVar20 = *(long *)(_NGUIText_TypeInfo_12d53c0 + 0xb8);
                                if (*(long *)(lVar20 + 0xb8) == 0) goto LAB_0080f80c;
                                if (*(int *)(*(long *)(lVar20 + 0xb8) + 0x18) <= iVar36) break;
                                if (((*(byte *)(_NGUIText_TypeInfo_12d53c0 + 0x133) >> 2 & 1) != 0)
                                   && (*(int *)(_NGUIText_TypeInfo_12d53c0 + 0xe0) == 0)) {
                                  native_sub_4327ec();
                                  lVar20 = *(long *)(_NGUIText_TypeInfo_12d53c0 + 0xb8);
                                }
                                lVar20 = *(long *)(lVar20 + 0x100);
                                if (lVar20 == 0) goto LAB_0080f80c;
                                iVar13 = native_System_Text_StringBuilder__get_Length_a49204
                                                   (lVar20,0);
                                native_System_Text_StringBuilder__Insert_a4abd0
                                          (lVar20,iVar13 + -1,_StringLiteral_____12f3240,0);
                                iVar36 = iVar36 + 1;
                              }
                              lVar20 = 0;
                              uVar15 = 0;
                              while( true ) {
                                if (((*(byte *)(_NGUIText_TypeInfo_12d53c0 + 0x133) >> 2 & 1) != 0)
                                   && (*(int *)(_NGUIText_TypeInfo_12d53c0 + 0xe0) == 0)) {
                                  native_sub_4327ec();
                                }
                                lVar22 = *(long *)(_NGUIText_TypeInfo_12d53c0 + 0xb8);
                                if (*(long *)(lVar22 + 0xb8) == 0) goto LAB_0080f80c;
                                if ((long)*(int *)(*(long *)(lVar22 + 0xb8) + 0x18) <= (long)uVar15)
                                break;
                                if (((*(byte *)(_NGUIText_TypeInfo_12d53c0 + 0x133) >> 2 & 1) != 0)
                                   && (*(int *)(_NGUIText_TypeInfo_12d53c0 + 0xe0) == 0)) {
                                  native_sub_4327ec();
                                  lVar22 = *(long *)(_NGUIText_TypeInfo_12d53c0 + 0xb8);
                                }
                                if (*(long *)(lVar22 + 0x100) == 0) goto LAB_0080f80c;
                                native_System_Text_StringBuilder__Append_a49d68
                                          (*(long *)(lVar22 + 0x100),_StringLiteral___12f3230,0);
                                lVar22 = *(long *)(*(long *)(_NGUIText_TypeInfo_12d53c0 + 0xb8) +
                                                  0xb8);
                                if ((lVar22 == 0) ||
                                   (lVar22 = *(long *)(lVar22 + 0x10), lVar22 == 0))
                                goto LAB_0080f80c;
                                if (*(uint *)(lVar22 + 0x18) <= uVar15) goto LAB_0080f810;
                                lVar23 = *(long *)(*(long *)(_NGUIText_TypeInfo_12d53c0 + 0xb8) +
                                                  0x100);
                                lVar22 = lVar22 + lVar20;
                                uVar16 = native_NGUIText__EncodeColor_80b59c
                                                   (*(undefined4 *)(lVar22 + 0x20),
                                                    *(undefined4 *)(lVar22 + 0x24),
                                                    *(undefined4 *)(lVar22 + 0x28),
                                                    *(undefined4 *)(lVar22 + 0x2c));
                                if (lVar23 == 0) goto LAB_0080f80c;
                                native_System_Text_StringBuilder__Append_a49d68(lVar23,uVar16,0);
                                lVar22 = *(long *)(*(long *)(_NGUIText_TypeInfo_12d53c0 + 0xb8) +
                                                  0x100);
                                if (lVar22 == 0) goto LAB_0080f80c;
                                native_System_Text_StringBuilder__Append_a49d68
                                          (lVar22,_StringLiteral___12f3410,0);
                                uVar15 = uVar15 + 1;
                                lVar20 = lVar20 + 0x10;
                              }
                            }
                            uVar24 = 0;
                            fVar37 = 0.0;
                            if (uStack_e0 == 0) {
                              fVar37 = fVar35;
                              uStack_120 = uStack_120 & uStack_f0;
                            }
                            iVar36 = iStack_bc + uStack_e0;
                            bVar4 = 1;
                            iStack_e8 = iStack_bc;
                            iVar13 = iVar11;
                            goto LAB_0080f388;
                          }
                          if (uStack_e0 == 0) {
                            uStack_120 = uStack_120 & uStack_f0;
                          }
                          goto LAB_0080f438;
                        }
                        if (iVar36 < iStack_e8) {
                          if (((*(byte *)(_NGUIText_TypeInfo_12d53c0 + 0x133) >> 2 & 1) != 0) &&
                             (*(int *)(_NGUIText_TypeInfo_12d53c0 + 0xe0) == 0)) {
                            native_sub_4327ec();
                          }
                          lVar19 = *(long *)(*(long *)(_NGUIText_TypeInfo_12d53c0 + 0xb8) + 0x100);
                          if (lVar19 == 0) goto LAB_0080f80c;
                          native_System_Text_StringBuilder__Append_a49eb4
                                    (lVar19,lStack_b8,iVar36,(1 - iVar36) + iStack_e8,0);
                        }
                        if (iVar12 == 0) {
                          if (fStack_dc != 0.0) {
                            if (((*(byte *)(_NGUIText_TypeInfo_12d53c0 + 0x133) >> 2 & 1) != 0) &&
                               (*(int *)(_NGUIText_TypeInfo_12d53c0 + 0xe0) == 0)) {
                              native_sub_4327ec();
                            }
                            lVar19 = *(long *)(*(long *)(_NGUIText_TypeInfo_12d53c0 + 0xb8) + 0x100)
                            ;
                            if (lVar19 != 0) {
                              puVar21 = (undefined8 *)&StringLiteral___y__12f3270;
                              goto LAB_0080f698;
                            }
                            goto LAB_0080f80c;
                          }
                        }
                        else {
                          if (((*(byte *)(_NGUIText_TypeInfo_12d53c0 + 0x133) >> 2 & 1) != 0) &&
                             (*(int *)(_NGUIText_TypeInfo_12d53c0 + 0xe0) == 0)) {
                            native_sub_4327ec();
                          }
                          lVar19 = *(long *)(*(long *)(_NGUIText_TypeInfo_12d53c0 + 0xb8) + 0x100);
                          if (lVar19 == 0) goto LAB_0080f80c;
                          puVar21 = (undefined8 *)&StringLiteral___sub__12f3258;
LAB_0080f698:
                          native_System_Text_StringBuilder__Append_a49d68(lVar19,*puVar21,0);
                        }
                        uVar7 = *(ushort *)(_NGUIText_TypeInfo_12d53c0 + 0x132);
                        if ((uVar7 >> 10 & 1) == 0) {
                          uVar7 = 0;
                        }
                        else {
                          if (*(int *)(_NGUIText_TypeInfo_12d53c0 + 0xe0) == 0) {
                            native_sub_4327ec();
                            uVar7 = *(ushort *)(_NGUIText_TypeInfo_12d53c0 + 0x132);
                          }
                          uVar7 = uVar7 & 0x400;
                        }
                        lVar19 = *(long *)(_NGUIText_TypeInfo_12d53c0 + 0xb8);
                        if (*(int *)(lVar19 + 0x88) == 0) {
                          if ((uVar7 != 0) && (*(int *)(_NGUIText_TypeInfo_12d53c0 + 0xe0) == 0)) {
                            native_sub_4327ec();
                            lVar19 = *(long *)(_NGUIText_TypeInfo_12d53c0 + 0xb8);
                          }
                          goto LAB_0080f6f0;
                        }
                        if ((uVar7 != 0) && (*(int *)(_NGUIText_TypeInfo_12d53c0 + 0xe0) == 0)) {
                          native_sub_4327ec();
                          lVar19 = *(long *)(_NGUIText_TypeInfo_12d53c0 + 0xb8);
                        }
                        lVar19 = *(long *)(lVar19 + 0x100);
                        if (lVar19 == 0) goto LAB_0080f80c;
                        puVar21 = (undefined8 *)&StringLiteral_____ff_____12f3250;
                      }
                      native_System_Text_StringBuilder__Append_a49d68(lVar19,*puVar21,0);
                      iVar11 = iVar13;
                      goto LAB_0080f438;
                    }
                    if (((*(byte *)(_NGUIText_TypeInfo_12d53c0 + 0x133) >> 2 & 1) != 0) &&
                       (*(int *)(_NGUIText_TypeInfo_12d53c0 + 0xe0) == 0)) {
                      native_sub_4327ec();
                      lVar20 = *(long *)(_NGUIText_TypeInfo_12d53c0 + 0xb8);
                    }
                    uVar15 = native_NGUIText__ParseSymbol_8091a4
                                       (lVar19,&iStack_bc,*(undefined8 *)(lVar20 + 0xb8),
                                        *(undefined1 *)(lVar20 + 0x84),&iStack_c0,&fStack_dc,
                                        acStack_c4,acStack_c8,auStack_cc,auStack_d0,acStack_d4,
                                        auStack_d8);
                    if ((uVar15 & 1) == 0) goto LAB_0080e608;
                    if (iStack_bc < iStack_e8 + 1) {
                      if (((*(byte *)(_NGUIText_TypeInfo_12d53c0 + 0x133) >> 2 & 1) != 0) &&
                         (*(int *)(_NGUIText_TypeInfo_12d53c0 + 0xe0) == 0)) {
                        native_sub_4327ec();
                      }
                      lVar19 = *(long *)(*(long *)(_NGUIText_TypeInfo_12d53c0 + 0xb8) + 0x100);
                      if (lVar19 == 0) goto LAB_0080f80c;
                      native_System_Text_StringBuilder__Append_a49eb4
                                (lVar19,lStack_b8,iVar36,iStack_bc - iVar36,0);
                      iVar36 = iStack_bc;
                    }
                    lVar19 = _NGUIText_TypeInfo_12d53c0;
                    if (param_4 != 0) {
                      if (acStack_d4[0] == '\0') {
                        if (((*(ushort *)(_NGUIText_TypeInfo_12d53c0 + 0x132) >> 10 & 1) != 0) &&
                           (*(int *)(_NGUIText_TypeInfo_12d53c0 + 0xe0) == 0)) {
                          native_sub_4327ec();
                        }
                        lVar19 = *(long *)(_NGUIText_TypeInfo_12d53c0 + 0xb8);
                        lVar20 = *(long *)(lVar19 + 0xb8);
                        if ((lVar20 == 0) || (lVar22 = *(long *)(lVar20 + 0x10), lVar22 == 0))
                        goto LAB_0080f80c;
                        uVar24 = *(int *)(lVar20 + 0x18) - 1;
                        if (*(uint *)(lVar22 + 0x18) <= uVar24) goto LAB_0080f810;
                        lVar22 = lVar22 + (long)(int)uVar24 * 0x10;
                        native_UnityEngine_Color__op_Multiply_8d9c68
                                  (*(undefined4 *)(lVar19 + 0x30),*(undefined4 *)(lVar19 + 0x34),
                                   *(undefined4 *)(lVar19 + 0x38),*(undefined4 *)(lVar19 + 0x3c),
                                   *(undefined4 *)(lVar22 + 0x20),*(undefined4 *)(lVar22 + 0x24),
                                   *(undefined4 *)(lVar22 + 0x28),*(undefined4 *)(lVar22 + 0x2c),0);
                      }
                      else {
                        if (((*(ushort *)(_NGUIText_TypeInfo_12d53c0 + 0x132) >> 10 & 1) != 0) &&
                           (*(int *)(_NGUIText_TypeInfo_12d53c0 + 0xe0) == 0)) {
                          native_sub_4327ec();
                        }
                        lVar19 = *(long *)(*(long *)(_NGUIText_TypeInfo_12d53c0 + 0xb8) + 0xb8);
                        if ((lVar19 == 0) || (*(long *)(lVar19 + 0x10) == 0)) goto LAB_0080f80c;
                        if (*(uint *)(*(long *)(lVar19 + 0x10) + 0x18) <=
                            *(int *)(lVar19 + 0x18) - 1U) {
LAB_0080f810:
                          uVar16 = native_sub_43283c();
                    /* WARNING: Subroutine does not return */
                          native_sub_4327dc(uVar16,0);
                        }
                      }
                      if (((*(byte *)(_NGUIText_TypeInfo_12d53c0 + 0x133) >> 2 & 1) != 0) &&
                         (*(int *)(_NGUIText_TypeInfo_12d53c0 + 0xe0) == 0)) {
                        native_sub_4327ec();
                      }
                      lVar19 = *(long *)(*(long *)(_NGUIText_TypeInfo_12d53c0 + 0xb8) + 0xb8);
                      if (lVar19 == 0) goto LAB_0080f80c;
                      iVar12 = *(int *)(lVar19 + 0x18) + -2;
                      lVar19 = _NGUIText_TypeInfo_12d53c0;
                      if (0 < iVar12) {
                        uVar24 = 0;
                        do {
                          if (((*(byte *)(lVar19 + 0x133) >> 2 & 1) != 0) &&
                             (*(int *)(lVar19 + 0xe0) == 0)) {
                            native_sub_4327ec();
                            lVar19 = _NGUIText_TypeInfo_12d53c0;
                          }
                          lVar20 = *(long *)(*(long *)(lVar19 + 0xb8) + 0xb8);
                          if ((lVar20 == 0) || (lVar20 = *(long *)(lVar20 + 0x10), lVar20 == 0))
                          goto LAB_0080f80c;
                          if (*(uint *)(lVar20 + 0x18) <= uVar24) goto LAB_0080f810;
                          uVar24 = uVar24 + 1;
                        } while ((int)uVar24 < iVar12);
                      }
                    }
                    if (iVar36 < iStack_bc) {
                      if (((*(ushort *)(lVar19 + 0x132) >> 10 & 1) != 0) &&
                         (*(int *)(lVar19 + 0xe0) == 0)) {
                        native_sub_4327ec();
                        lVar19 = _NGUIText_TypeInfo_12d53c0;
                      }
                      lVar19 = *(long *)(*(long *)(lVar19 + 0xb8) + 0x100);
                      if (lVar19 == 0) goto LAB_0080f80c;
                      native_System_Text_StringBuilder__Append_a49eb4
                                (lVar19,lStack_b8,iVar36,iStack_bc - iVar36,0);
                    }
                    else {
                      if (((*(ushort *)(lVar19 + 0x132) >> 10 & 1) != 0) &&
                         (*(int *)(lVar19 + 0xe0) == 0)) {
                        native_sub_4327ec();
                        lVar19 = _NGUIText_TypeInfo_12d53c0;
                      }
                      lVar19 = *(long *)(*(long *)(lVar19 + 0xb8) + 0x100);
                      if (lVar19 == 0) goto LAB_0080f80c;
                      native_System_Text_StringBuilder__Append_a4a9d8(lVar19,uVar10,0);
                    }
                    iStack_e8 = iStack_bc;
                    iVar36 = iStack_bc;
                    iStack_bc = iStack_bc + -1;
LAB_0080f3b8:
                    iVar12 = iStack_bc + 1;
                    iVar11 = iVar13;
                    iStack_bc = iVar12;
                    if (iVar2 <= iVar12) goto LAB_0080f3ec;
                    iVar14 = -iVar36;
                    param_1 = lStack_b8;
                    if (lStack_b8 == 0) goto LAB_0080f80c;
                  } while( true );
                }
                iVar11 = 1;
                uStack_120 = 1;
LAB_0080f438:
                if (param_4 != 0) {
                  if (((*(byte *)(_NGUIText_TypeInfo_12d53c0 + 0x133) >> 2 & 1) != 0) &&
                     (*(int *)(_NGUIText_TypeInfo_12d53c0 + 0xe0) == 0)) {
                    native_sub_4327ec();
                  }
                  lVar19 = *(long *)(_NGUIText_TypeInfo_12d53c0 + 0xb8);
                  if (*(long *)(lVar19 + 0xb8) == 0) goto LAB_0080f80c;
                  if (0 < *(int *)(*(long *)(lVar19 + 0xb8) + 0x18)) {
                    if (((*(byte *)(_NGUIText_TypeInfo_12d53c0 + 0x133) >> 2 & 1) != 0) &&
                       (*(int *)(_NGUIText_TypeInfo_12d53c0 + 0xe0) == 0)) {
                      native_sub_4327ec();
                      lVar19 = *(long *)(_NGUIText_TypeInfo_12d53c0 + 0xb8);
                    }
                    if (*(long *)(lVar19 + 0x100) == 0) goto LAB_0080f80c;
                    native_System_Text_StringBuilder__Append_a49d68
                              (*(long *)(lVar19 + 0x100),_StringLiteral_____12f3240,0);
                  }
                }
                if (((*(byte *)(_NGUIText_TypeInfo_12d53c0 + 0x133) >> 2 & 1) != 0) &&
                   (*(int *)(_NGUIText_TypeInfo_12d53c0 + 0xe0) == 0)) {
                  native_sub_4327ec();
                }
                plVar17 = *(long **)(*(long *)(_NGUIText_TypeInfo_12d53c0 + 0xb8) + 0x100);
                if (plVar17 != (long *)0x0) {
                  uVar16 = (**(code **)(*plVar17 + 0x168))
                                     (plVar17,*(undefined8 *)(*plVar17 + 0x170));
                  *param_2 = uVar16;
                  native_sub_4326e0(param_2,uVar16);
                  lVar19 = *(long *)(*(long *)(_NGUIText_TypeInfo_12d53c0 + 0xb8) + 0xb8);
                  if (lVar19 != 0) {
                    native_BetterList_Color___Clear_ba192c
                              (lVar19,_Method_BetterList_Color__Clear___12d8930);
                    if (uStack_120 == 0) {
                      return false;
                    }
                    if (iStack_bc != iVar2) {
                      if (((*(byte *)(_NGUIText_TypeInfo_12d53c0 + 0x133) >> 2 & 1) != 0) &&
                         (*(int *)(_NGUIText_TypeInfo_12d53c0 + 0xe0) == 0)) {
                        native_sub_4327ec();
                      }
                      if (*(int *)(*(long *)(_NGUIText_TypeInfo_12d53c0 + 0xb8) + 0x50) == 0) {
                        return iVar11 == 0;
                      }
                      return iVar11 == iVar8;
                    }
                    return true;
                  }
                }
              }
            }
          }
LAB_0080f80c:
                    /* WARNING: Subroutine does not return */
          native_sub_432810();
        }
      }
    }
  }
  *param_2 = _StringLiteral__12eaac0;
  native_sub_4326e0(param_2,_StringLiteral__12eaac0);
  return false;
}



/* NGUIText$$Print @ 0x80f81c
 * void NGUIText__Print (System_String_o* text, System_Collections_Generic_List_Vector3__o* verts, System_Collections_Generic_List_Vector2__o* uvs, System_Collections_Generic_List_Color__o* cols, System_Collections_Generic_List_Vector3__o* sverts, System_Collections_Generic_List_Vector2__o* suvs, System_Collections_Generic_List_Color__o* scols, const MethodInfo* method); */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* NGUIText$$Print
   void NGUIText__Print (System_String_o* text, System_Collections_Generic_List_Vector3__o* verts,
   System_Collections_Generic_List_Vector2__o* uvs, System_Collections_Generic_List_Color__o* cols,
   System_Collections_Generic_List_Vector3__o* sverts, System_Collections_Generic_List_Vector2__o*
   suvs, System_Collections_Generic_List_Color__o* scols, const MethodInfo* method); */

void native_NGUIText__Print_80f81c
               (long param_1,long param_2,long param_3,long param_4,long param_5,long param_6,
               long param_7)

{
  int iVar1;
  float *pfVar2;
  char cVar3;
  bool bVar4;
  ushort uVar5;
  int iVar6;
  int iVar7;
  ulong uVar8;
  long lVar9;
  ulong uVar10;
  undefined8 *puVar11;
  ulong uVar12;
  ulong uVar13;
  char cVar14;
  long lVar15;
  long lVar16;
  int *piVar17;
  ushort uVar18;
  ushort uVar19;
  undefined8 uVar20;
  long *plVar21;
  undefined4 uVar22;
  float fVar23;
  undefined4 uVar24;
  float fVar25;
  float fVar26;
  float fVar27;
  undefined4 uVar28;
  double dVar29;
  ulong uVar30;
  undefined8 uVar31;
  ulong uVar32;
  undefined8 uVar33;
  undefined8 uVar34;
  ulong uVar35;
  undefined4 uVar36;
  int iVar37;
  undefined4 uVar38;
  float fVar39;
  float fVar40;
  uint uVar41;
  float fVar42;
  float fVar43;
  float fVar44;
  uint uVar45;
  float fVar46;
  int iVar47;
  ulong uVar48;
  int iVar49;
  float fVar50;
  float fVar51;
  float fVar52;
  uint uStack_1bc;
  float fStack_1b0;
  float fStack_194;
  float fStack_18c;
  float fStack_188;
  undefined4 uStack_160;
  undefined4 uStack_15c;
  undefined4 uStack_158;
  undefined4 uStack_154;
  undefined4 uStack_13c;
  int iStack_128;
  float fStack_118;
  undefined8 uStack_110;
  undefined8 uStack_108;
  int iStack_100;
  float fStack_fc;
  undefined8 uStack_f8;
  undefined8 uStack_f0;
  char acStack_e4 [4];
  char acStack_e0 [4];
  char acStack_dc [4];
  char acStack_d8 [4];
  char acStack_d4 [4];
  char acStack_d0 [4];
  int iStack_cc;
  undefined8 uStack_c8;
  undefined8 uStack_c0;
  long lStack_b8;
  double adStack_b0 [2];
  
  lStack_b8 = param_1;
  if ((bRam00000000013404a4 & 1) == 0) {
    native_sub_43273c(&Method_BetterList_Color__Add___12d8928);
    native_sub_43273c(&Method_BetterList_Color__Clear___12d8930);
    native_sub_43273c(&INGUIFont_TypeInfo_12d4c70);
    native_sub_43273c(&Method_System_Collections_Generic_List_Vector2__Add___12dd4b0);
    native_sub_43273c(&Method_System_Collections_Generic_List_Color__Add___12dc690);
    native_sub_43273c(&Method_System_Collections_Generic_List_Vector3__Add___12dd4e0);
    native_sub_43273c(&Method_System_Collections_Generic_List_Vector3__get_Count___12dd500);
    native_sub_43273c(&NGUIText_TypeInfo_12d53c0);
    native_sub_43273c(&UnityEngine_Object_TypeInfo_12d54e0);
    bRam00000000013404a4 = 1;
  }
  uStack_c8 = 0;
  uStack_c0 = 0;
  iStack_cc = 0;
  acStack_d0[0] = '\0';
  acStack_d4[0] = '\0';
  acStack_d8[0] = '\0';
  acStack_dc[0] = '\0';
  acStack_e0[0] = '\0';
  acStack_e4[0] = '\0';
  uStack_f8 = 0;
  uStack_f0 = 0;
  fStack_fc = 0.0;
  iStack_100 = 0;
  uStack_110 = 0;
  uStack_108 = 0;
  uVar8 = native_System_String__IsNullOrEmpty_b09430(param_1,0);
  if ((uVar8 & 1) != 0) {
    return;
  }
  if (param_2 == 0) goto LAB_00811e5c;
  iStack_128 = *(int *)(param_2 + 0x18);
  if (param_5 == 0) {
    uStack_13c = 0;
  }
  else {
    uStack_13c = *(undefined4 *)(param_5 + 0x18);
  }
  if (((*(byte *)(_NGUIText_TypeInfo_12d53c0 + 0x133) >> 2 & 1) != 0) &&
     (*(int *)(_NGUIText_TypeInfo_12d53c0 + 0xe0) == 0)) {
    native_sub_4327ec();
  }
  native_NGUIText__Prepare_808c84(param_1);
  lVar9 = *(long *)(*(long *)(_NGUIText_TypeInfo_12d53c0 + 0xb8) + 0xb8);
  if (lVar9 == 0) goto LAB_00811e5c;
  native_BetterList_Color___Clear_ba192c(lVar9,_Method_BetterList_Color__Clear___12d8930);
  lVar9 = *(long *)(*(long *)(_NGUIText_TypeInfo_12d53c0 + 0xb8) + 0xb8);
  native_UnityEngine_Color__get_white_8d9e10(0);
  if (lVar9 == 0) goto LAB_00811e5c;
  native_BetterList_Color___Add_ba1944(lVar9,_Method_BetterList_Color__Add___12d8928);
  lVar9 = _NGUIText_TypeInfo_12d53c0;
  *(undefined4 *)(*(long *)(_NGUIText_TypeInfo_12d53c0 + 0xb8) + 0xc0) = 0x3f800000;
  fVar40 = *(float *)(*(long *)(lVar9 + 0xb8) + 0x80) * *(float *)(*(long *)(lVar9 + 0xb8) + 0x20) *
           0.5;
  dVar29 = (double)func_0x002c9600((double)fVar40,adStack_b0);
  if (0.0 <= fVar40) {
    if (dVar29 == 0.5) {
      fVar40 = 1.0;
      goto LAB_0080fa2c;
    }
    fStack_118 = (float)(int)(fVar40 + 0.5);
  }
  else if (dVar29 == -0.5) {
    fVar40 = -1.0;
LAB_0080fa2c:
    fStack_118 = (float)adStack_b0[0];
    if (((long)adStack_b0[0] & 1U) != 0) {
      fStack_118 = (float)adStack_b0[0] + fVar40;
    }
  }
  else {
    fStack_118 = (float)(int)(fVar40 + -0.5);
  }
  lVar9 = *(long *)(_NGUIText_TypeInfo_12d53c0 + 0xb8);
  uStack_158 = *(undefined4 *)(lVar9 + 0x34);
  uStack_15c = *(undefined4 *)(lVar9 + 0x38);
  uStack_160 = *(undefined4 *)(lVar9 + 0x3c);
  uStack_154 = native_UnityEngine_Color__op_Multiply_8d9c68(*(undefined4 *)(lVar9 + 0x30),0);
  native_UnityEngine_Color__op_Multiply_8d9c68
            (*(undefined4 *)(*(long *)(_NGUIText_TypeInfo_12d53c0 + 0xb8) + 0x30),0);
  if (lStack_b8 == 0) goto LAB_00811e5c;
  iVar1 = *(int *)(lStack_b8 + 0x10);
  uVar28 = 0;
  lVar9 = *(long *)(_NGUIText_TypeInfo_12d53c0 + 0xb8);
  uVar36 = 0;
  uVar38 = 0;
  uVar22 = *(undefined4 *)(lVar9 + 0x30);
  uVar45 = *(uint *)(lVar9 + 0x34);
  uVar41 = *(uint *)(lVar9 + 0x38);
  uVar8 = (ulong)*(uint *)(lVar9 + 0x3c);
  uStack_c8 = 0;
  uStack_c0 = 0;
  iVar49 = *(int *)(lVar9 + 0x48);
  iStack_cc = 0;
  acStack_d0[0] = '\0';
  acStack_d4[0] = '\0';
  acStack_d8[0] = '\0';
  acStack_dc[0] = '\0';
  acStack_e0[0] = '\0';
  acStack_e4[0] = '\0';
  fStack_1b0 = 0.0;
  native_UnityEngine_Color___ctor_8d980c(0,&uStack_f8,0);
  fVar40 = (float)native_NGUIText__get_symbolScale_80c8d8();
  fVar23 = (float)native_NGUIText__get_symbolOffset_80ca20();
  iVar6 = native_NGUIText__get_symbolMaxHeight_80cb28();
  fStack_fc = 0.0;
  uVar20 = *(undefined8 *)(*(long *)(_NGUIText_TypeInfo_12d53c0 + 0xb8) + 8);
  if (((*(byte *)(_UnityEngine_Object_TypeInfo_12d54e0 + 0x133) >> 2 & 1) != 0) &&
     (*(int *)(_UnityEngine_Object_TypeInfo_12d54e0 + 0xe0) == 0)) {
    native_sub_4327ec(_UnityEngine_Object_TypeInfo_12d54e0);
  }
  uVar10 = native_UnityEngine_Object__op_Equality_8e9a3c(uVar20,0,0);
  if ((uVar10 & 1) == 0) {
    fVar25 = 0.0;
  }
  else {
    if (((*(byte *)(_NGUIText_TypeInfo_12d53c0 + 0x133) >> 2 & 1) != 0) &&
       (*(int *)(_NGUIText_TypeInfo_12d53c0 + 0xe0) == 0)) {
      native_sub_4327ec();
    }
    fVar25 = 0.0;
    plVar21 = (long *)**(undefined8 **)(_NGUIText_TypeInfo_12d53c0 + 0xb8);
    if (plVar21 != (long *)0x0) {
      if (((*(byte *)(_NGUIText_TypeInfo_12d53c0 + 0x133) >> 2 & 1) != 0) &&
         (*(int *)(_NGUIText_TypeInfo_12d53c0 + 0xe0) == 0)) {
        native_sub_4327ec();
        plVar21 = (long *)**(undefined8 **)(_NGUIText_TypeInfo_12d53c0 + 0xb8);
        if (plVar21 == (long *)0x0) goto LAB_00811e5c;
      }
      lVar9 = *plVar21;
      if ((ulong)*(ushort *)(lVar9 + 0x12a) != 0) {
        uVar10 = 0;
        piVar17 = (int *)(*(long *)(lVar9 + 0xb0) + 8);
        do {
          if (*(long *)(piVar17 + -2) == _INGUIFont_TypeInfo_12d4c70) {
            puVar11 = (undefined8 *)(lVar9 + (long)(*piVar17 + 0x14) * 0x10 + 0x138);
            goto LAB_0080fc48;
          }
          uVar10 = uVar10 + 1;
          piVar17 = piVar17 + 4;
        } while (uVar10 < *(ushort *)(lVar9 + 0x12a));
      }
      puVar11 = (undefined8 *)native_sub_3c9b34(plVar21,_INGUIFont_TypeInfo_12d4c70,0x14);
LAB_0080fc48:
      uVar24 = (*(code *)*puVar11)(plVar21,puVar11[1]);
      uStack_c8 = CONCAT44(uVar28,uVar24);
      uStack_c0 = CONCAT44(uVar38,uVar36);
      fVar25 = (float)native_UnityEngine_Rect__get_width_76367c(&uStack_c8,0);
      plVar21 = (long *)**(undefined8 **)(_NGUIText_TypeInfo_12d53c0 + 0xb8);
      if (plVar21 == (long *)0x0) goto LAB_00811e5c;
      lVar9 = *plVar21;
      if ((ulong)*(ushort *)(lVar9 + 0x12a) != 0) {
        uVar10 = 0;
        piVar17 = (int *)(*(long *)(lVar9 + 0xb0) + 8);
        do {
          if (*(long *)(piVar17 + -2) == _INGUIFont_TypeInfo_12d4c70) {
            puVar11 = (undefined8 *)(lVar9 + (long)(*piVar17 + 4) * 0x10 + 0x138);
            goto LAB_0080fce8;
          }
          uVar10 = uVar10 + 1;
          piVar17 = piVar17 + 4;
        } while (uVar10 < *(ushort *)(lVar9 + 0x12a));
      }
      puVar11 = (undefined8 *)native_sub_3c9b34(plVar21,_INGUIFont_TypeInfo_12d4c70,4);
LAB_0080fce8:
      iVar7 = (*(code *)*puVar11)(plVar21,puVar11[1]);
      fStack_1b0 = (float)native_UnityEngine_Rect__get_height_76368c(&uStack_c8,0);
      plVar21 = (long *)**(undefined8 **)(_NGUIText_TypeInfo_12d53c0 + 0xb8);
      if (plVar21 == (long *)0x0) goto LAB_00811e5c;
      lVar9 = *plVar21;
      if ((ulong)*(ushort *)(lVar9 + 0x12a) != 0) {
        uVar10 = 0;
        piVar17 = (int *)(*(long *)(lVar9 + 0xb0) + 8);
        do {
          if (*(long *)(piVar17 + -2) == _INGUIFont_TypeInfo_12d4c70) {
            puVar11 = (undefined8 *)(lVar9 + (long)(*piVar17 + 6) * 0x10 + 0x138);
            goto LAB_0080fd78;
          }
          uVar10 = uVar10 + 1;
          piVar17 = piVar17 + 4;
        } while (uVar10 < *(ushort *)(lVar9 + 0x12a));
      }
      puVar11 = (undefined8 *)native_sub_3c9b34(plVar21,_INGUIFont_TypeInfo_12d4c70,6);
LAB_0080fd78:
      fVar25 = fVar25 / (float)iVar7;
      iVar7 = (*(code *)*puVar11)(plVar21,puVar11[1]);
      fStack_1b0 = fStack_1b0 / (float)iVar7;
    }
  }
  iStack_100 = 0;
  if (iVar1 < 1) {
    fStack_194 = 0.0;
  }
  else {
    fVar26 = (float)iVar49 + 0.01;
    fStack_194 = 0.0;
    uVar10 = (ulong)uVar41;
    uVar48 = (ulong)uVar45;
    uVar18 = 0;
    do {
      if (lStack_b8 == 0) goto LAB_00811e5c;
      uVar5 = native_System_String__get_Chars_b03810(lStack_b8,iStack_100,0);
      if (((*(byte *)(_NGUIText_TypeInfo_12d53c0 + 0x133) >> 2 & 1) != 0) &&
         (*(int *)(_NGUIText_TypeInfo_12d53c0 + 0xe0) == 0)) {
        native_sub_4327ec(_NGUIText_TypeInfo_12d53c0);
      }
      lVar9 = lStack_b8;
      lVar15 = *(long *)(_NGUIText_TypeInfo_12d53c0 + 0xb8);
      if (*(char *)(lVar15 + 0x78) == '\0') {
LAB_00810d90:
        uVar13 = uVar10;
        uVar12 = uVar48;
        if (uVar5 == 10) {
          if (((*(byte *)(_NGUIText_TypeInfo_12d53c0 + 0x133) >> 2 & 1) != 0) &&
             (*(int *)(_NGUIText_TypeInfo_12d53c0 + 0xe0) == 0)) {
            native_sub_4327ec();
          }
          lVar9 = *(long *)(_NGUIText_TypeInfo_12d53c0 + 0xb8);
          if (*(int *)(lVar9 + 0x2c) != 1) {
            if (((*(byte *)(_NGUIText_TypeInfo_12d53c0 + 0x133) >> 2 & 1) != 0) &&
               (*(int *)(_NGUIText_TypeInfo_12d53c0 + 0xe0) == 0)) {
              native_sub_4327ec();
              lVar9 = *(long *)(_NGUIText_TypeInfo_12d53c0 + 0xb8);
            }
            native_NGUIText__Align_80bc88
                      (fStack_194 - *(float *)(lVar9 + 0x90),param_2,iStack_128,4);
            iStack_128 = *(int *)(param_2 + 0x18);
            if (param_5 != 0) {
              if (((*(byte *)(_NGUIText_TypeInfo_12d53c0 + 0x133) >> 2 & 1) != 0) &&
                 (*(int *)(_NGUIText_TypeInfo_12d53c0 + 0xe0) == 0)) {
                native_sub_4327ec();
              }
              native_NGUIText__Align_80bc88
                        (fStack_194 -
                         *(float *)(*(long *)(_NGUIText_TypeInfo_12d53c0 + 0xb8) + 0x90),param_5,
                         uStack_13c,4);
              uStack_13c = *(undefined4 *)(param_5 + 0x18);
            }
          }
          if (((*(byte *)(_NGUIText_TypeInfo_12d53c0 + 0x133) >> 2 & 1) != 0) &&
             (*(int *)(_NGUIText_TypeInfo_12d53c0 + 0xe0) == 0)) {
            native_sub_4327ec();
          }
          fStack_194 = 0.0;
          fStack_118 = fStack_118 + *(float *)(*(long *)(_NGUIText_TypeInfo_12d53c0 + 0xb8) + 0x94);
          uVar19 = 0;
        }
        else {
          uVar19 = uVar5;
          if (0x1f < uVar5) {
            if (((*(byte *)(_NGUIText_TypeInfo_12d53c0 + 0x133) >> 2 & 1) != 0) &&
               (*(int *)(_NGUIText_TypeInfo_12d53c0 + 0xe0) == 0)) {
              native_sub_4327ec();
            }
            iVar49 = iStack_100;
            if (*(char *)(*(long *)(_NGUIText_TypeInfo_12d53c0 + 0xb8) + 0x9c) == '\0') {
              lVar9 = 0;
            }
            else {
              if (((*(byte *)(_NGUIText_TypeInfo_12d53c0 + 0x133) >> 2 & 1) != 0) &&
                 (*(int *)(_NGUIText_TypeInfo_12d53c0 + 0xe0) == 0)) {
                native_sub_4327ec();
              }
              lVar9 = native_NGUIText__GetSymbol_809ca4(&lStack_b8,iVar49,iVar1);
            }
            iVar49 = iStack_cc;
            if (iStack_cc == 0) {
              if (fStack_fc == 0.0) {
                if (((*(ushort *)(_NGUIText_TypeInfo_12d53c0 + 0x132) >> 10 & 1) != 0) &&
                   (*(int *)(_NGUIText_TypeInfo_12d53c0 + 0xe0) == 0)) {
                  native_sub_4327ec();
                }
                fVar42 = *(float *)(*(long *)(_NGUIText_TypeInfo_12d53c0 + 0xb8) + 0x20);
              }
              else {
                if (((*(ushort *)(_NGUIText_TypeInfo_12d53c0 + 0x132) >> 10 & 1) != 0) &&
                   (*(int *)(_NGUIText_TypeInfo_12d53c0 + 0xe0) == 0)) {
                  native_sub_4327ec();
                }
                fVar42 = *(float *)(*(long *)(_NGUIText_TypeInfo_12d53c0 + 0xb8) + 0x20) * fStack_fc
                ;
              }
            }
            else {
              if (((*(byte *)(_NGUIText_TypeInfo_12d53c0 + 0x133) >> 2 & 1) != 0) &&
                 (*(int *)(_NGUIText_TypeInfo_12d53c0 + 0xe0) == 0)) {
                native_sub_4327ec();
              }
              fVar42 = *(float *)(*(long *)(_NGUIText_TypeInfo_12d53c0 + 0xb8) + 0x20) * fStack_fc;
            }
            cVar3 = acStack_d0[0];
            cVar14 = acStack_d4[0];
            if (lVar9 == 0) {
              if (((*(byte *)(_NGUIText_TypeInfo_12d53c0 + 0x133) >> 2 & 1) != 0) &&
                 (*(int *)(_NGUIText_TypeInfo_12d53c0 + 0xe0) == 0)) {
                native_sub_4327ec();
              }
              lVar9 = native_NGUIText__GetGlyph_80a174
                                (fVar42,uVar5,uVar18,cVar3 != '\0',cVar14 != '\0');
              uVar19 = uVar18;
              if (lVar9 != 0) {
                fVar44 = *(float *)(lVar9 + 0x40);
                if (iVar49 == 0) {
                  lVar15 = _NGUIText_TypeInfo_12d53c0;
                  if (fStack_fc != 0.0) {
                    if (((*(byte *)(_NGUIText_TypeInfo_12d53c0 + 0x133) >> 2 & 1) != 0) &&
                       (*(int *)(_NGUIText_TypeInfo_12d53c0 + 0xe0) == 0)) {
                      native_sub_4327ec();
                    }
                    fVar50 = *(float *)(lVar9 + 0x14);
                    fVar39 = *(float *)(lVar9 + 0x1c);
                    fVar52 = *(float *)(*(long *)(_NGUIText_TypeInfo_12d53c0 + 0xb8) + 0x20) *
                             (1.0 - fStack_fc) *
                             (float)*(int *)(*(long *)(_NGUIText_TypeInfo_12d53c0 + 0xb8) + 0x1c) *
                             0.5;
                    goto LAB_0081138c;
                  }
                }
                else {
                  if (iVar49 == 1) {
                    if (((*(ushort *)(_NGUIText_TypeInfo_12d53c0 + 0x132) >> 10 & 1) != 0) &&
                       (*(int *)(_NGUIText_TypeInfo_12d53c0 + 0xe0) == 0)) {
                      native_sub_4327ec();
                    }
                    fVar50 = *(float *)(lVar9 + 0x14);
                    fVar39 = *(float *)(lVar9 + 0x1c);
                    fVar52 = *(float *)(*(long *)(_NGUIText_TypeInfo_12d53c0 + 0xb8) + 0x20) *
                             (float)*(int *)(*(long *)(_NGUIText_TypeInfo_12d53c0 + 0xb8) + 0x1c) *
                             0.4;
LAB_0081138c:
                    fVar50 = fVar50 - fVar52;
                    fVar39 = fVar39 - fVar52;
                  }
                  else {
                    if (((*(ushort *)(_NGUIText_TypeInfo_12d53c0 + 0x132) >> 10 & 1) != 0) &&
                       (*(int *)(_NGUIText_TypeInfo_12d53c0 + 0xe0) == 0)) {
                      native_sub_4327ec();
                    }
                    fVar39 = *(float *)(*(long *)(_NGUIText_TypeInfo_12d53c0 + 0xb8) + 0x20) *
                             (float)*(int *)(*(long *)(_NGUIText_TypeInfo_12d53c0 + 0xb8) + 0x1c) *
                             0.05;
                    fVar50 = *(float *)(lVar9 + 0x14) + fVar39;
                    fVar39 = *(float *)(lVar9 + 0x1c) + fVar39;
                  }
                  lVar15 = _NGUIText_TypeInfo_12d53c0;
                  *(float *)(lVar9 + 0x14) = fVar50;
                  *(float *)(lVar9 + 0x1c) = fVar39;
                }
                if (((*(byte *)(lVar15 + 0x133) >> 2 & 1) != 0) && (*(int *)(lVar15 + 0xe0) == 0)) {
                  native_sub_4327ec();
                  lVar15 = _NGUIText_TypeInfo_12d53c0;
                }
                lVar16 = *(long *)(lVar15 + 0xb8);
                fStack_18c = fStack_194 + *(float *)(lVar9 + 0x10);
                fVar50 = *(float *)(lVar9 + 0x14) - fStack_118;
                fVar44 = fVar44 + *(float *)(lVar16 + 0x90);
                fVar39 = fStack_194 + *(float *)(lVar9 + 0x18);
                fStack_188 = *(float *)(lVar9 + 0x1c) - fStack_118;
                fVar52 = fStack_194;
                if (fVar26 < fStack_194 + fVar44) {
                  if (fStack_194 == 0.0) {
                    return;
                  }
                  if (((*(byte *)(lVar15 + 0x133) >> 2 & 1) != 0) && (*(int *)(lVar15 + 0xe0) == 0))
                  {
                    native_sub_4327ec();
                    lVar16 = *(long *)(_NGUIText_TypeInfo_12d53c0 + 0xb8);
                    lVar15 = _NGUIText_TypeInfo_12d53c0;
                  }
                  uVar12 = uVar48 & 0xffffffff;
                  if ((*(int *)(lVar16 + 0x2c) != 1) && (iStack_128 < *(int *)(param_2 + 0x18))) {
                    if (((*(byte *)(lVar15 + 0x133) >> 2 & 1) != 0) &&
                       (*(int *)(lVar15 + 0xe0) == 0)) {
                      native_sub_4327ec();
                      lVar16 = *(long *)(_NGUIText_TypeInfo_12d53c0 + 0xb8);
                    }
                    native_NGUIText__Align_80bc88
                              (fStack_194 - *(float *)(lVar16 + 0x90),param_2,iStack_128,4);
                    iStack_128 = *(int *)(param_2 + 0x18);
                    if (param_5 != 0) {
                      if (((*(byte *)(_NGUIText_TypeInfo_12d53c0 + 0x133) >> 2 & 1) != 0) &&
                         (*(int *)(_NGUIText_TypeInfo_12d53c0 + 0xe0) == 0)) {
                        native_sub_4327ec();
                      }
                      native_NGUIText__Align_80bc88
                                (fStack_194 -
                                 *(float *)(*(long *)(_NGUIText_TypeInfo_12d53c0 + 0xb8) + 0x90),
                                 param_5,uStack_13c,4);
                      uStack_13c = *(undefined4 *)(param_5 + 0x18);
                    }
                  }
                  if (((*(byte *)(_NGUIText_TypeInfo_12d53c0 + 0x133) >> 2 & 1) != 0) &&
                     (*(int *)(_NGUIText_TypeInfo_12d53c0 + 0xe0) == 0)) {
                    native_sub_4327ec();
                  }
                  fVar39 = fVar39 - fStack_194;
                  fStack_18c = fStack_18c - fStack_194;
                  fVar27 = *(float *)(*(long *)(_NGUIText_TypeInfo_12d53c0 + 0xb8) + 0x94);
                  fVar52 = 0.0;
                  fVar50 = fVar50 - fVar27;
                  fStack_188 = fStack_188 - fVar27;
                  fStack_118 = fStack_118 + fVar27;
                  lVar15 = _NGUIText_TypeInfo_12d53c0;
                }
                if (((*(byte *)(lVar15 + 0x133) >> 2 & 1) != 0) && (*(int *)(lVar15 + 0xe0) == 0)) {
                  native_sub_4327ec();
                }
                uVar18 = uVar5;
                if (((uVar5 == 0x20) || (uVar5 == 0x200a)) || ((uVar5 | 2) == 0x200b)) {
                  if (acStack_d8[0] == '\0') {
                    if (acStack_dc[0] != '\0') {
                      uVar18 = 0x2d;
                    }
                  }
                  else {
                    uVar18 = 0x5f;
                  }
                }
                fStack_194 = fVar44 + fVar52;
                if (iVar49 != 0) {
                  dVar29 = (double)func_0x002c9600((double)fStack_194,adStack_b0);
                  if (0.0 <= fStack_194) {
                    if (dVar29 == 0.5) {
                      fVar44 = 1.0;
                      goto LAB_00811614;
                    }
                    fStack_194 = (float)(int)(fStack_194 + 0.5);
                  }
                  else if (dVar29 == -0.5) {
                    fVar44 = -1.0;
LAB_00811614:
                    fStack_194 = (float)adStack_b0[0];
                    if (((long)adStack_b0[0] & 1U) != 0) {
                      fStack_194 = (float)adStack_b0[0] + fVar44;
                    }
                  }
                  else {
                    fStack_194 = (float)(int)(fStack_194 + -0.5);
                  }
                }
                if (((*(byte *)(_NGUIText_TypeInfo_12d53c0 + 0x133) >> 2 & 1) != 0) &&
                   (*(int *)(_NGUIText_TypeInfo_12d53c0 + 0xe0) == 0)) {
                  native_sub_4327ec();
                }
                uVar19 = uVar5;
                if (((uVar18 != 0x20) && (uVar18 != 0x200a)) && ((uVar18 | 2) != 0x200b)) {
                  if (cVar3 == '\0') {
                    uStack_1bc = 0;
                  }
                  else {
                    if (((*(byte *)(_NGUIText_TypeInfo_12d53c0 + 0x133) >> 2 & 1) != 0) &&
                       (*(int *)(_NGUIText_TypeInfo_12d53c0 + 0xe0) == 0)) {
                      native_sub_4327ec();
                    }
                    uVar20 = *(undefined8 *)(*(long *)(_NGUIText_TypeInfo_12d53c0 + 0xb8) + 8);
                    if (((*(byte *)(_UnityEngine_Object_TypeInfo_12d54e0 + 0x133) >> 2 & 1) != 0) &&
                       (*(int *)(_UnityEngine_Object_TypeInfo_12d54e0 + 0xe0) == 0)) {
                      native_sub_4327ec(_UnityEngine_Object_TypeInfo_12d54e0);
                    }
                    uStack_1bc = native_UnityEngine_Object__op_Equality_8e9a3c(uVar20,0,0);
                    uStack_1bc = uStack_1bc & 1;
                  }
                  if (param_3 != 0) {
                    if (((*(byte *)(_NGUIText_TypeInfo_12d53c0 + 0x133) >> 2 & 1) != 0) &&
                       (*(int *)(_NGUIText_TypeInfo_12d53c0 + 0xe0) == 0)) {
                      native_sub_4327ec();
                    }
                    uVar20 = *(undefined8 *)(*(long *)(_NGUIText_TypeInfo_12d53c0 + 0xb8) + 8);
                    if (((*(byte *)(_UnityEngine_Object_TypeInfo_12d54e0 + 0x133) >> 2 & 1) != 0) &&
                       (*(int *)(_UnityEngine_Object_TypeInfo_12d54e0 + 0xe0) == 0)) {
                      native_sub_4327ec(_UnityEngine_Object_TypeInfo_12d54e0);
                    }
                    uVar12 = native_UnityEngine_Object__op_Equality_8e9a3c(uVar20,0,0);
                    if ((uVar12 & 1) != 0) {
                      if (((*(byte *)(_NGUIText_TypeInfo_12d53c0 + 0x133) >> 2 & 1) != 0) &&
                         (*(int *)(_NGUIText_TypeInfo_12d53c0 + 0xe0) == 0)) {
                        native_sub_4327ec();
                      }
                      if (**(long **)(_NGUIText_TypeInfo_12d53c0 + 0xb8) != 0) {
                        fVar44 = (float)native_UnityEngine_Rect__get_xMin_76363c(&uStack_c8,0);
                        *(float *)(lVar9 + 0x20) = fVar44 + fVar25 * *(float *)(lVar9 + 0x20);
                        fVar44 = (float)native_UnityEngine_Rect__get_xMin_76363c(&uStack_c8,0);
                        *(float *)(lVar9 + 0x30) = fVar44 + fVar25 * *(float *)(lVar9 + 0x30);
                        fVar44 = (float)native_UnityEngine_Rect__get_yMax_76366c(&uStack_c8,0);
                        *(float *)(lVar9 + 0x24) = fVar44 - fStack_1b0 * *(float *)(lVar9 + 0x24);
                        fVar44 = (float)native_UnityEngine_Rect__get_yMax_76366c(&uStack_c8,0);
                        fVar44 = fVar44 - fStack_1b0 * *(float *)(lVar9 + 0x34);
                        *(undefined4 *)(lVar9 + 0x28) = *(undefined4 *)(lVar9 + 0x20);
                        *(float *)(lVar9 + 0x34) = fVar44;
                        *(float *)(lVar9 + 0x2c) = fVar44;
                        *(undefined4 *)(lVar9 + 0x38) = *(undefined4 *)(lVar9 + 0x30);
                        *(undefined4 *)(lVar9 + 0x3c) = *(undefined4 *)(lVar9 + 0x24);
                      }
                    }
                    uVar41 = 0;
                    uVar45 = 4;
                    if (uStack_1bc == 0) {
                      uVar45 = 1;
                    }
                    do {
                      native_System_Collections_Generic_List_Vector2___Add_d293ec
                                (*(undefined4 *)(lVar9 + 0x20),*(undefined4 *)(lVar9 + 0x24),param_3
                                 ,_Method_System_Collections_Generic_List_Vector2__Add___12dd4b0);
                      native_System_Collections_Generic_List_Vector2___Add_d293ec
                                (*(undefined4 *)(lVar9 + 0x28),*(undefined4 *)(lVar9 + 0x2c),param_3
                                 ,_Method_System_Collections_Generic_List_Vector2__Add___12dd4b0);
                      native_System_Collections_Generic_List_Vector2___Add_d293ec
                                (*(undefined4 *)(lVar9 + 0x30),*(undefined4 *)(lVar9 + 0x34),param_3
                                 ,_Method_System_Collections_Generic_List_Vector2__Add___12dd4b0);
                      native_System_Collections_Generic_List_Vector2___Add_d293ec
                                (*(undefined4 *)(lVar9 + 0x38),*(undefined4 *)(lVar9 + 0x3c),param_3
                                 ,_Method_System_Collections_Generic_List_Vector2__Add___12dd4b0);
                      uVar41 = uVar41 + 1;
                    } while (uVar41 < uVar45);
                  }
                  if (param_4 != 0) {
                    if ((*(int *)(lVar9 + 0x44) == 0xf) || (*(int *)(lVar9 + 0x44) == 0)) {
                      if (((*(byte *)(_NGUIText_TypeInfo_12d53c0 + 0x133) >> 2 & 1) != 0) &&
                         (*(int *)(_NGUIText_TypeInfo_12d53c0 + 0xe0) == 0)) {
                        native_sub_4327ec();
                      }
                      if (*(char *)(*(long *)(_NGUIText_TypeInfo_12d53c0 + 0xb8) + 0x54) == '\0') {
                        uVar41 = 0;
                        uVar45 = 0x10;
                        if (uStack_1bc == 0) {
                          uVar45 = 4;
                        }
                        do {
                          native_System_Collections_Generic_List_Color___Add_d07158
                                    (uVar22,(int)uVar48,uVar10,uVar8,param_4,
                                     _Method_System_Collections_Generic_List_Color__Add___12dc690);
                          uVar41 = uVar41 + 1;
                        } while (uVar41 < uVar45);
                      }
                      else {
                        if (((*(byte *)(_NGUIText_TypeInfo_12d53c0 + 0x133) >> 2 & 1) != 0) &&
                           (*(int *)(_NGUIText_TypeInfo_12d53c0 + 0xe0) == 0)) {
                          native_sub_4327ec();
                        }
                        uVar28 = uStack_158;
                        uVar36 = uStack_15c;
                        uVar38 = uStack_160;
                        uVar24 = native_UnityEngine_Color__Lerp_8d9d50(uStack_154,0);
                        lVar9 = *(long *)(_NGUIText_TypeInfo_12d53c0 + 0xb8);
                        *(undefined4 *)(lVar9 + 0x108) = uVar24;
                        *(undefined4 *)(lVar9 + 0x10c) = uVar28;
                        *(undefined4 *)(lVar9 + 0x110) = uVar36;
                        *(undefined4 *)(lVar9 + 0x114) = uVar38;
                        uVar28 = uStack_158;
                        uVar36 = uStack_15c;
                        uVar38 = uStack_160;
                        uVar24 = native_UnityEngine_Color__Lerp_8d9d50(uStack_154,0);
                        lVar9 = _NGUIText_TypeInfo_12d53c0;
                        uVar13 = uVar10 & 0xffffffff;
                        uVar41 = 1;
                        lVar15 = *(long *)(_NGUIText_TypeInfo_12d53c0 + 0xb8);
                        uVar45 = 4;
                        if (uStack_1bc == 0) {
                          uVar45 = 1;
                        }
                        *(undefined4 *)(lVar15 + 0x118) = uVar24;
                        *(undefined4 *)(lVar15 + 0x11c) = uVar28;
                        *(undefined4 *)(lVar15 + 0x120) = uVar36;
                        *(undefined4 *)(lVar15 + 0x124) = uVar38;
                        while( true ) {
                          if (((*(byte *)(lVar9 + 0x133) >> 2 & 1) != 0) &&
                             (*(int *)(lVar9 + 0xe0) == 0)) {
                            native_sub_4327ec();
                            lVar9 = _NGUIText_TypeInfo_12d53c0;
                          }
                          lVar9 = *(long *)(lVar9 + 0xb8);
                          native_System_Collections_Generic_List_Color___Add_d07158
                                    (*(undefined4 *)(lVar9 + 0x108),*(undefined4 *)(lVar9 + 0x10c),
                                     *(undefined4 *)(lVar9 + 0x110),*(undefined4 *)(lVar9 + 0x114),
                                     param_4,
                                     _Method_System_Collections_Generic_List_Color__Add___12dc690);
                          lVar9 = *(long *)(_NGUIText_TypeInfo_12d53c0 + 0xb8);
                          native_System_Collections_Generic_List_Color___Add_d07158
                                    (*(undefined4 *)(lVar9 + 0x118),*(undefined4 *)(lVar9 + 0x11c),
                                     *(undefined4 *)(lVar9 + 0x120),*(undefined4 *)(lVar9 + 0x124),
                                     param_4,
                                     _Method_System_Collections_Generic_List_Color__Add___12dc690);
                          lVar9 = *(long *)(_NGUIText_TypeInfo_12d53c0 + 0xb8);
                          native_System_Collections_Generic_List_Color___Add_d07158
                                    (*(undefined4 *)(lVar9 + 0x118),*(undefined4 *)(lVar9 + 0x11c),
                                     *(undefined4 *)(lVar9 + 0x120),*(undefined4 *)(lVar9 + 0x124),
                                     param_4,
                                     _Method_System_Collections_Generic_List_Color__Add___12dc690);
                          lVar9 = *(long *)(_NGUIText_TypeInfo_12d53c0 + 0xb8);
                          native_System_Collections_Generic_List_Color___Add_d07158
                                    (*(undefined4 *)(lVar9 + 0x108),*(undefined4 *)(lVar9 + 0x10c),
                                     *(undefined4 *)(lVar9 + 0x110),*(undefined4 *)(lVar9 + 0x114),
                                     param_4,
                                     _Method_System_Collections_Generic_List_Color__Add___12dc690);
                          if (uVar45 <= uVar41) break;
                          uVar41 = uVar41 + 1;
                          lVar9 = _NGUIText_TypeInfo_12d53c0;
                        }
                      }
                    }
                    else {
                      uVar35 = uVar48 & 0xffffffff;
                      uVar12 = uVar10;
                      uVar32 = uVar8;
                      uVar30 = native_UnityEngine_Color__op_Multiply_8d9c7c
                                         (uVar22,uVar35,uVar10,uVar8,0x3efae148,0);
                      switch(*(int *)(lVar9 + 0x44)) {
                      case 1:
                        uVar12 = (ulong)(uint)((float)uVar12 + 0.51);
                        break;
                      case 2:
                        uVar35 = (ulong)(uint)((float)uVar35 + 0.51);
                        break;
                      case 3:
                        break;
                      case 4:
                        uVar30 = (ulong)(uint)((float)uVar30 + 0.51);
                        break;
                      default:
                        fVar44 = (float)uVar32 + 0.51;
                        if (*(int *)(lVar9 + 0x44) != 8) {
                          fVar44 = (float)uVar32;
                        }
                        uVar32 = (ulong)(uint)fVar44;
                      }
                      uVar41 = 0;
                      uVar45 = 0x10;
                      if (uStack_1bc == 0) {
                        uVar45 = 4;
                      }
                      do {
                        native_System_Collections_Generic_List_Color___Add_d07158
                                  (uVar30,uVar35,uVar12,uVar32,param_4,
                                   _Method_System_Collections_Generic_List_Color__Add___12dc690);
                        uVar41 = uVar41 + 1;
                      } while (uVar41 < uVar45);
                    }
                  }
                  if (((*(byte *)(_NGUIText_TypeInfo_12d53c0 + 0x133) >> 2 & 1) != 0) &&
                     (*(int *)(_NGUIText_TypeInfo_12d53c0 + 0xe0) == 0)) {
                    native_sub_4327ec();
                  }
                  uVar20 = *(undefined8 *)(*(long *)(_NGUIText_TypeInfo_12d53c0 + 0xb8) + 8);
                  if (((*(byte *)(_UnityEngine_Object_TypeInfo_12d54e0 + 0x133) >> 2 & 1) != 0) &&
                     (*(int *)(_UnityEngine_Object_TypeInfo_12d54e0 + 0xe0) == 0)) {
                    native_sub_4327ec(_UnityEngine_Object_TypeInfo_12d54e0);
                  }
                  uVar12 = native_UnityEngine_Object__op_Inequality_8d76fc(uVar20,0,0);
                  if ((uVar12 & 1) == 0) {
                    if (cVar3 == '\0') {
                      if (cVar14 == '\0') goto LAB_008103b4;
                      if (((*(byte *)(_NGUIText_TypeInfo_12d53c0 + 0x133) >> 2 & 1) != 0) &&
                         (*(int *)(_NGUIText_TypeInfo_12d53c0 + 0xe0) == 0)) {
                        native_sub_4327ec();
                      }
                      fVar44 = (float)*(int *)(*(long *)(_NGUIText_TypeInfo_12d53c0 + 0xb8) + 0x1c);
                      fVar44 = fVar44 * 0.1 * ((fStack_188 - fVar50) / fVar44);
                      native_System_Collections_Generic_List_Vector3___Add_d2be08
                                (fStack_18c - fVar44,fVar50,0,param_2,
                                 _Method_System_Collections_Generic_List_Vector3__Add___12dd4e0);
                      native_System_Collections_Generic_List_Vector3___Add_d2be08
                                (fStack_18c + fVar44,fStack_188,0,param_2,
                                 _Method_System_Collections_Generic_List_Vector3__Add___12dd4e0);
                      native_System_Collections_Generic_List_Vector3___Add_d2be08
                                (fVar39 + fVar44,fStack_188,0,param_2,
                                 _Method_System_Collections_Generic_List_Vector3__Add___12dd4e0);
                      fVar39 = fVar39 - fVar44;
                      goto LAB_00810420;
                    }
                    uVar32 = 0;
                    uVar12 = 0xffffffffffffffff;
                    do {
                      if (((*(byte *)(_NGUIText_TypeInfo_12d53c0 + 0x133) >> 2 & 1) != 0) &&
                         (*(int *)(_NGUIText_TypeInfo_12d53c0 + 0xe0) == 0)) {
                        native_sub_4327ec();
                      }
                      lVar15 = *(long *)(_NGUIText_TypeInfo_12d53c0 + 0xb8);
                      lVar9 = *(long *)(lVar15 + 0x128);
                      if (lVar9 == 0) goto LAB_00811e5c;
                      if ((*(uint *)(lVar9 + 0x18) <= uVar32) ||
                         ((ulong)*(uint *)(lVar9 + 0x18) <= uVar32 + 1)) goto LAB_00811e60;
                      lVar9 = lVar9 + uVar32 * 4;
                      fVar44 = *(float *)(lVar9 + 0x20);
                      fVar27 = *(float *)(lVar9 + 0x24);
                      if (cVar14 == '\0') {
                        fVar51 = 0.0;
                      }
                      else {
                        if (((*(byte *)(_NGUIText_TypeInfo_12d53c0 + 0x133) >> 2 & 1) != 0) &&
                           (*(int *)(_NGUIText_TypeInfo_12d53c0 + 0xe0) == 0)) {
                          native_sub_4327ec();
                          lVar15 = *(long *)(_NGUIText_TypeInfo_12d53c0 + 0xb8);
                        }
                        fVar51 = (float)*(int *)(lVar15 + 0x1c) * 0.1 *
                                 ((fStack_188 - fVar50) / (float)*(int *)(lVar15 + 0x1c));
                      }
                      fVar46 = fStack_18c + fVar44;
                      fVar43 = fVar50 + fVar27;
                      native_System_Collections_Generic_List_Vector3___Add_d2be08
                                (fVar46 - fVar51,fVar43,0,param_2,
                                 _Method_System_Collections_Generic_List_Vector3__Add___12dd4e0);
                      fVar27 = fStack_188 + fVar27;
                      native_System_Collections_Generic_List_Vector3___Add_d2be08
                                (fVar46 + fVar51,fVar27,0,param_2,
                                 _Method_System_Collections_Generic_List_Vector3__Add___12dd4e0);
                      fVar44 = fVar39 + fVar44;
                      native_System_Collections_Generic_List_Vector3___Add_d2be08
                                (fVar44 + fVar51,fVar27,0,param_2,
                                 _Method_System_Collections_Generic_List_Vector3__Add___12dd4e0);
                      native_System_Collections_Generic_List_Vector3___Add_d2be08
                                (fVar44 - fVar51,fVar43,0,param_2,
                                 _Method_System_Collections_Generic_List_Vector3__Add___12dd4e0);
                      uVar13 = uVar10 & 0xffffffff;
                      uVar12 = uVar12 + 1;
                      uVar32 = uVar32 + 2;
                    } while (uVar12 < 3);
                  }
                  else {
LAB_008103b4:
                    native_System_Collections_Generic_List_Vector3___Add_d2be08
                              (fStack_18c,fVar50,0,param_2,
                               _Method_System_Collections_Generic_List_Vector3__Add___12dd4e0);
                    native_System_Collections_Generic_List_Vector3___Add_d2be08
                              (fStack_18c,fStack_188,0,param_2,
                               _Method_System_Collections_Generic_List_Vector3__Add___12dd4e0);
                    native_System_Collections_Generic_List_Vector3___Add_d2be08
                              (fVar39,fStack_188,0,param_2,
                               _Method_System_Collections_Generic_List_Vector3__Add___12dd4e0);
LAB_00810420:
                    native_System_Collections_Generic_List_Vector3___Add_d2be08
                              (fVar39,fVar50,0,param_2,
                               _Method_System_Collections_Generic_List_Vector3__Add___12dd4e0);
                  }
                  uVar12 = uVar48 & 0xffffffff;
                  if (acStack_dc[0] != '\0' || acStack_d8[0] != '\0') {
                    uVar28 = 0x5f;
                    if (acStack_dc[0] != '\0') {
                      uVar28 = 0x2d;
                    }
                    if (((*(byte *)(_NGUIText_TypeInfo_12d53c0 + 0x133) >> 2 & 1) != 0) &&
                       (*(int *)(_NGUIText_TypeInfo_12d53c0 + 0xe0) == 0)) {
                      native_sub_4327ec();
                    }
                    lVar9 = native_NGUIText__GetGlyph_80a174(fVar42,uVar28,0,0,0);
                    if (lVar9 != 0) {
                      if (param_3 != 0) {
                        if (((*(byte *)(_NGUIText_TypeInfo_12d53c0 + 0x133) >> 2 & 1) != 0) &&
                           (*(int *)(_NGUIText_TypeInfo_12d53c0 + 0xe0) == 0)) {
                          native_sub_4327ec();
                        }
                        uVar20 = *(undefined8 *)(*(long *)(_NGUIText_TypeInfo_12d53c0 + 0xb8) + 8);
                        if (((*(byte *)(_UnityEngine_Object_TypeInfo_12d54e0 + 0x133) >> 2 & 1) != 0
                            ) && (*(int *)(_UnityEngine_Object_TypeInfo_12d54e0 + 0xe0) == 0)) {
                          native_sub_4327ec(_UnityEngine_Object_TypeInfo_12d54e0);
                        }
                        uVar12 = native_UnityEngine_Object__op_Equality_8e9a3c(uVar20,0,0);
                        if ((uVar12 & 1) != 0) {
                          if (((*(byte *)(_NGUIText_TypeInfo_12d53c0 + 0x133) >> 2 & 1) != 0) &&
                             (*(int *)(_NGUIText_TypeInfo_12d53c0 + 0xe0) == 0)) {
                            native_sub_4327ec();
                          }
                          if (**(long **)(_NGUIText_TypeInfo_12d53c0 + 0xb8) != 0) {
                            fVar42 = (float)native_UnityEngine_Rect__get_xMin_76363c(&uStack_c8,0);
                            *(float *)(lVar9 + 0x20) = fVar42 + fVar25 * *(float *)(lVar9 + 0x20);
                            fVar42 = (float)native_UnityEngine_Rect__get_xMin_76363c(&uStack_c8,0);
                            *(float *)(lVar9 + 0x30) = fVar42 + fVar25 * *(float *)(lVar9 + 0x30);
                            fVar42 = (float)native_UnityEngine_Rect__get_yMax_76366c(&uStack_c8,0);
                            *(float *)(lVar9 + 0x24) =
                                 fVar42 - fStack_1b0 * *(float *)(lVar9 + 0x24);
                            fVar42 = (float)native_UnityEngine_Rect__get_yMax_76366c(&uStack_c8,0);
                            *(float *)(lVar9 + 0x34) =
                                 fVar42 - fStack_1b0 * *(float *)(lVar9 + 0x34);
                          }
                        }
                        uVar41 = 0;
                        fVar42 = (*(float *)(lVar9 + 0x20) + *(float *)(lVar9 + 0x30)) * 0.5;
                        uVar45 = 4;
                        if (uStack_1bc == 0) {
                          uVar45 = 1;
                        }
                        do {
                          native_System_Collections_Generic_List_Vector2___Add_d293ec
                                    (fVar42,*(undefined4 *)(lVar9 + 0x24),param_3,
                                     _Method_System_Collections_Generic_List_Vector2__Add___12dd4b0)
                          ;
                          native_System_Collections_Generic_List_Vector2___Add_d293ec
                                    (fVar42,*(undefined4 *)(lVar9 + 0x34),param_3,
                                     _Method_System_Collections_Generic_List_Vector2__Add___12dd4b0)
                          ;
                          native_System_Collections_Generic_List_Vector2___Add_d293ec
                                    (fVar42,*(undefined4 *)(lVar9 + 0x34),param_3,
                                     _Method_System_Collections_Generic_List_Vector2__Add___12dd4b0)
                          ;
                          native_System_Collections_Generic_List_Vector2___Add_d293ec
                                    (fVar42,*(undefined4 *)(lVar9 + 0x24),param_3,
                                     _Method_System_Collections_Generic_List_Vector2__Add___12dd4b0)
                          ;
                          uVar41 = uVar41 + 1;
                        } while (uVar41 < uVar45);
                      }
                      fVar42 = *(float *)(lVar9 + 0x14) - *(float *)(lVar9 + 0x1c);
                      dVar29 = (double)func_0x002c9600((double)fVar42,adStack_b0);
                      if (0.0 <= fVar42) {
                        if (dVar29 == 0.5) {
                          fVar42 = 1.0;
                          goto LAB_008107c8;
                        }
                        fVar44 = (float)(int)(fVar42 + 0.5);
                      }
                      else if (dVar29 == -0.5) {
                        fVar42 = -1.0;
LAB_008107c8:
                        fVar44 = (float)adStack_b0[0];
                        if (((long)adStack_b0[0] & 1U) != 0) {
                          fVar44 = (float)adStack_b0[0] + fVar42;
                        }
                      }
                      else {
                        fVar44 = (float)(int)(fVar42 + -0.5);
                      }
                      fVar42 = (float)native_UnityEngine_Mathf__Max_8d9f90
                                                (fVar44 + -2.0,0x40000000,0);
                      fVar44 = (*(float *)(lVar9 + 0x14) - fStack_118) + -1.0;
                      fVar42 = fVar44 - fVar42;
                      if (uStack_1bc == 0) {
                        native_System_Collections_Generic_List_Vector3___Add_d2be08
                                  (fVar52,fVar44,0,param_2,
                                   _Method_System_Collections_Generic_List_Vector3__Add___12dd4e0);
                        native_System_Collections_Generic_List_Vector3___Add_d2be08
                                  (fVar52,fVar42,0,param_2,
                                   _Method_System_Collections_Generic_List_Vector3__Add___12dd4e0);
                        native_System_Collections_Generic_List_Vector3___Add_d2be08
                                  (fStack_194,fVar42,0,param_2,
                                   _Method_System_Collections_Generic_List_Vector3__Add___12dd4e0);
                        native_System_Collections_Generic_List_Vector3___Add_d2be08
                                  (fStack_194,fVar44,0,param_2,
                                   _Method_System_Collections_Generic_List_Vector3__Add___12dd4e0);
                      }
                      else {
                        uVar32 = 0;
                        uVar12 = 0xffffffffffffffff;
                        do {
                          if (((*(byte *)(_NGUIText_TypeInfo_12d53c0 + 0x133) >> 2 & 1) != 0) &&
                             (*(int *)(_NGUIText_TypeInfo_12d53c0 + 0xe0) == 0)) {
                            native_sub_4327ec();
                          }
                          lVar9 = *(long *)(*(long *)(_NGUIText_TypeInfo_12d53c0 + 0xb8) + 0x128);
                          if (lVar9 == 0) goto LAB_00811e5c;
                          if ((*(uint *)(lVar9 + 0x18) <= uVar32) ||
                             ((ulong)*(uint *)(lVar9 + 0x18) <= uVar32 + 1)) goto LAB_00811e60;
                          lVar9 = lVar9 + uVar32 * 4;
                          fVar39 = *(float *)(lVar9 + 0x20);
                          fVar50 = *(float *)(lVar9 + 0x24);
                          fVar27 = fVar52 + fVar39;
                          fVar51 = fVar44 + fVar50;
                          native_System_Collections_Generic_List_Vector3___Add_d2be08
                                    (fVar27,fVar51,0,param_2,
                                     _Method_System_Collections_Generic_List_Vector3__Add___12dd4e0)
                          ;
                          fVar50 = fVar42 + fVar50;
                          native_System_Collections_Generic_List_Vector3___Add_d2be08
                                    (fVar27,fVar50,0,param_2,
                                     _Method_System_Collections_Generic_List_Vector3__Add___12dd4e0)
                          ;
                          fVar39 = fStack_194 + fVar39;
                          native_System_Collections_Generic_List_Vector3___Add_d2be08
                                    (fVar39,fVar50,0,param_2,
                                     _Method_System_Collections_Generic_List_Vector3__Add___12dd4e0)
                          ;
                          native_System_Collections_Generic_List_Vector3___Add_d2be08
                                    (fVar39,fVar51,0,param_2,
                                     _Method_System_Collections_Generic_List_Vector3__Add___12dd4e0)
                          ;
                          uVar13 = uVar10 & 0xffffffff;
                          uVar12 = uVar12 + 1;
                          uVar32 = uVar32 + 2;
                        } while (uVar12 < 3);
                      }
                      if (((*(byte *)(_NGUIText_TypeInfo_12d53c0 + 0x133) >> 2 & 1) != 0) &&
                         (*(int *)(_NGUIText_TypeInfo_12d53c0 + 0xe0) == 0)) {
                        native_sub_4327ec();
                      }
                      uVar12 = uVar48 & 0xffffffff;
                      if (*(char *)(*(long *)(_NGUIText_TypeInfo_12d53c0 + 0xb8) + 0x54) == '\0') {
                        uVar41 = 0x10;
                        if (uStack_1bc == 0) {
                          uVar41 = 4;
                        }
                        if (param_4 == 0) goto LAB_00811e5c;
                        uVar45 = 0;
                        do {
                          native_System_Collections_Generic_List_Color___Add_d07158
                                    (uVar22,uVar12,uVar13,uVar8,param_4,
                                     _Method_System_Collections_Generic_List_Color__Add___12dc690);
                          uVar45 = uVar45 + 1;
                        } while (uVar45 < uVar41);
                      }
                      else {
                        uVar28 = uStack_158;
                        uVar36 = uStack_15c;
                        uVar38 = uStack_160;
                        uVar24 = native_UnityEngine_Color__Lerp_8d9d50(uStack_154,0);
                        if (((*(byte *)(_NGUIText_TypeInfo_12d53c0 + 0x133) >> 2 & 1) != 0) &&
                           (*(int *)(_NGUIText_TypeInfo_12d53c0 + 0xe0) == 0)) {
                          native_sub_4327ec();
                        }
                        lVar9 = *(long *)(_NGUIText_TypeInfo_12d53c0 + 0xb8);
                        *(undefined4 *)(lVar9 + 0x108) = uVar24;
                        *(undefined4 *)(lVar9 + 0x10c) = uVar28;
                        *(undefined4 *)(lVar9 + 0x110) = uVar36;
                        *(undefined4 *)(lVar9 + 0x114) = uVar38;
                        uVar28 = uStack_158;
                        uVar36 = uStack_15c;
                        uVar38 = uStack_160;
                        uVar24 = native_UnityEngine_Color__Lerp_8d9d50(uStack_154,0);
                        lVar9 = _NGUIText_TypeInfo_12d53c0;
                        uVar41 = 1;
                        lVar15 = *(long *)(_NGUIText_TypeInfo_12d53c0 + 0xb8);
                        uVar45 = 4;
                        if (uStack_1bc == 0) {
                          uVar45 = 1;
                        }
                        *(undefined4 *)(lVar15 + 0x118) = uVar24;
                        *(undefined4 *)(lVar15 + 0x11c) = uVar28;
                        *(undefined4 *)(lVar15 + 0x120) = uVar36;
                        *(undefined4 *)(lVar15 + 0x124) = uVar38;
                        uVar12 = uVar48 & 0xffffffff;
                        while( true ) {
                          if (((*(byte *)(lVar9 + 0x133) >> 2 & 1) != 0) &&
                             (*(int *)(lVar9 + 0xe0) == 0)) {
                            native_sub_4327ec();
                            lVar9 = _NGUIText_TypeInfo_12d53c0;
                          }
                          if (param_4 == 0) goto LAB_00811e5c;
                          lVar9 = *(long *)(lVar9 + 0xb8);
                          native_System_Collections_Generic_List_Color___Add_d07158
                                    (*(undefined4 *)(lVar9 + 0x108),*(undefined4 *)(lVar9 + 0x10c),
                                     *(undefined4 *)(lVar9 + 0x110),*(undefined4 *)(lVar9 + 0x114),
                                     param_4,
                                     _Method_System_Collections_Generic_List_Color__Add___12dc690);
                          lVar9 = *(long *)(_NGUIText_TypeInfo_12d53c0 + 0xb8);
                          native_System_Collections_Generic_List_Color___Add_d07158
                                    (*(undefined4 *)(lVar9 + 0x118),*(undefined4 *)(lVar9 + 0x11c),
                                     *(undefined4 *)(lVar9 + 0x120),*(undefined4 *)(lVar9 + 0x124),
                                     param_4,
                                     _Method_System_Collections_Generic_List_Color__Add___12dc690);
                          lVar9 = *(long *)(_NGUIText_TypeInfo_12d53c0 + 0xb8);
                          native_System_Collections_Generic_List_Color___Add_d07158
                                    (*(undefined4 *)(lVar9 + 0x118),*(undefined4 *)(lVar9 + 0x11c),
                                     *(undefined4 *)(lVar9 + 0x120),*(undefined4 *)(lVar9 + 0x124),
                                     param_4,
                                     _Method_System_Collections_Generic_List_Color__Add___12dc690);
                          lVar9 = *(long *)(_NGUIText_TypeInfo_12d53c0 + 0xb8);
                          native_System_Collections_Generic_List_Color___Add_d07158
                                    (*(undefined4 *)(lVar9 + 0x108),*(undefined4 *)(lVar9 + 0x10c),
                                     *(undefined4 *)(lVar9 + 0x110),*(undefined4 *)(lVar9 + 0x114),
                                     param_4,
                                     _Method_System_Collections_Generic_List_Color__Add___12dc690);
                          if (uVar45 <= uVar41) break;
                          uVar41 = uVar41 + 1;
                          lVar9 = _NGUIText_TypeInfo_12d53c0;
                        }
                      }
                    }
                  }
                }
              }
            }
            else {
              iVar49 = native_BMSymbol__get_paddedHeight_dd218c(lVar9,0);
              fVar52 = 1.0;
              fVar44 = fVar52;
              if (((iVar6 < iVar49) && (fVar44 = 1.0, iVar6 != 0)) &&
                 (fVar44 = 1.0, *(char *)(lVar9 + 0x21) == '\0')) {
                fVar44 = (float)iVar6 / (float)iVar49;
              }
              if (*(char *)(lVar9 + 0x21) == '\0') {
                if (((*(byte *)(_NGUIText_TypeInfo_12d53c0 + 0x133) >> 2 & 1) == 0) ||
                   (*(int *)(_NGUIText_TypeInfo_12d53c0 + 0xe0) != 0)) {
                  cVar14 = '\0';
                }
                else {
                  native_sub_4327ec();
                  cVar14 = *(char *)(lVar9 + 0x21);
                }
                fVar52 = fVar44 * fVar40 * *(float *)(*(long *)(_NGUIText_TypeInfo_12d53c0 + 0xb8) +
                                                     0x20);
              }
              else {
                cVar14 = '\x01';
              }
              iVar49 = *(int *)(lVar9 + 0x38);
              iVar7 = *(int *)(lVar9 + 0x3c);
              iVar47 = *(int *)(lVar9 + 0x40);
              iVar37 = *(int *)(lVar9 + 0x44);
              fVar39 = (float)*(int *)(lVar9 + 0x48);
              if (cVar14 == '\0') {
                fVar42 = fVar44 * fVar40 * fVar42 * (float)*(int *)(lVar9 + 0x48);
                dVar29 = (double)func_0x002c9600((double)fVar42,adStack_b0);
                if (0.0 <= fVar42) {
                  if (dVar29 == 0.5) {
                    fVar42 = 1.0;
                    goto LAB_0081131c;
                  }
                  fVar39 = (float)(int)(fVar42 + 0.5);
                }
                else if (dVar29 == -0.5) {
                  fVar42 = -1.0;
LAB_0081131c:
                  fVar39 = (float)adStack_b0[0];
                  if (((long)adStack_b0[0] & 1U) != 0) {
                    fVar39 = (float)adStack_b0[0] + fVar42;
                  }
                }
                else {
                  fVar39 = (float)(int)(fVar42 + -0.5);
                }
              }
              fVar42 = fVar23 * fVar44 - (fStack_118 + fVar52 * (float)iVar7);
              if (((*(byte *)(_NGUIText_TypeInfo_12d53c0 + 0x133) >> 2 & 1) != 0) &&
                 (*(int *)(_NGUIText_TypeInfo_12d53c0 + 0xe0) == 0)) {
                native_sub_4327ec();
              }
              fVar44 = fVar42 - fVar52 * (float)iVar37;
              fVar50 = fStack_194 + fVar52 * (float)iVar49;
              uVar13 = native_NGUIText__get_symbolCentered_80cc2c();
              if ((uVar13 & 1) != 0) {
                iVar49 = native_UnityEngine_Mathf__RoundToInt_8e50f0
                                   (fVar52 * (float)*(int *)(lVar9 + 0x44),0);
                if (((*(byte *)(_NGUIText_TypeInfo_12d53c0 + 0x133) >> 2 & 1) != 0) &&
                   (*(int *)(_NGUIText_TypeInfo_12d53c0 + 0xe0) == 0)) {
                  native_sub_4327ec(_NGUIText_TypeInfo_12d53c0);
                }
                iVar7 = native_UnityEngine_Mathf__RoundToInt_8e50f0
                                  (*(float *)(*(long *)(_NGUIText_TypeInfo_12d53c0 + 0xb8) + 0x20) *
                                   (float)*(int *)(*(long *)(_NGUIText_TypeInfo_12d53c0 + 0xb8) +
                                                  0x1c),0);
                iVar49 = iVar49 - iVar7;
                if (iVar49 < 0) {
                  iVar49 = iVar49 + 1;
                }
                fVar44 = fVar44 + (float)(iVar49 >> 1);
                fVar42 = fVar42 + (float)(iVar49 >> 1);
              }
              fVar52 = fVar50 + fVar52 * (float)iVar47;
              if (fVar26 < fStack_194 + fVar39) {
                if (fStack_194 == 0.0) {
                  return;
                }
                if (((*(byte *)(_NGUIText_TypeInfo_12d53c0 + 0x133) >> 2 & 1) != 0) &&
                   (*(int *)(_NGUIText_TypeInfo_12d53c0 + 0xe0) == 0)) {
                  native_sub_4327ec();
                }
                lVar15 = *(long *)(_NGUIText_TypeInfo_12d53c0 + 0xb8);
                if ((*(int *)(lVar15 + 0x2c) != 1) && (iStack_128 < *(int *)(param_2 + 0x18))) {
                  if (((*(byte *)(_NGUIText_TypeInfo_12d53c0 + 0x133) >> 2 & 1) != 0) &&
                     (*(int *)(_NGUIText_TypeInfo_12d53c0 + 0xe0) == 0)) {
                    native_sub_4327ec();
                    lVar15 = *(long *)(_NGUIText_TypeInfo_12d53c0 + 0xb8);
                  }
                  native_NGUIText__Align_80bc88
                            (fStack_194 - *(float *)(lVar15 + 0x90),param_2,iStack_128,4);
                  iStack_128 = *(int *)(param_2 + 0x18);
                  if (param_5 != 0) {
                    if (((*(byte *)(_NGUIText_TypeInfo_12d53c0 + 0x133) >> 2 & 1) != 0) &&
                       (*(int *)(_NGUIText_TypeInfo_12d53c0 + 0xe0) == 0)) {
                      native_sub_4327ec();
                    }
                    native_NGUIText__Align_80bc88
                              (fStack_194 -
                               *(float *)(*(long *)(_NGUIText_TypeInfo_12d53c0 + 0xb8) + 0x90),
                               param_5,uStack_13c,4);
                    uStack_13c = *(undefined4 *)(param_5 + 0x18);
                  }
                }
                if (((*(byte *)(_NGUIText_TypeInfo_12d53c0 + 0x133) >> 2 & 1) != 0) &&
                   (*(int *)(_NGUIText_TypeInfo_12d53c0 + 0xe0) == 0)) {
                  native_sub_4327ec();
                }
                fVar50 = fVar50 - fStack_194;
                fVar52 = fVar52 - fStack_194;
                fVar27 = *(float *)(*(long *)(_NGUIText_TypeInfo_12d53c0 + 0xb8) + 0x94);
                fStack_194 = 0.0;
                fVar44 = fVar44 - fVar27;
                fVar42 = fVar42 - fVar27;
                fStack_118 = fStack_118 + fVar27;
              }
              uVar13 = uVar10 & 0xffffffff;
              native_System_Collections_Generic_List_Vector3___Add_d2be08
                        (fVar50,fVar44,0,param_2,
                         _Method_System_Collections_Generic_List_Vector3__Add___12dd4e0);
              native_System_Collections_Generic_List_Vector3___Add_d2be08
                        (fVar50,fVar42,0,param_2,
                         _Method_System_Collections_Generic_List_Vector3__Add___12dd4e0);
              native_System_Collections_Generic_List_Vector3___Add_d2be08
                        (fVar52,fVar42,0,param_2,
                         _Method_System_Collections_Generic_List_Vector3__Add___12dd4e0);
              uVar20 = 0;
              native_System_Collections_Generic_List_Vector3___Add_d2be08
                        (fVar52,fVar44,0,param_2,
                         _Method_System_Collections_Generic_List_Vector3__Add___12dd4e0);
              if (param_5 != 0) {
                native_System_Collections_Generic_List_Vector3___Add_d2be08
                          (fVar50,fVar44,0,param_5,
                           _Method_System_Collections_Generic_List_Vector3__Add___12dd4e0);
                native_System_Collections_Generic_List_Vector3___Add_d2be08
                          (fVar50,fVar42,0,param_5,
                           _Method_System_Collections_Generic_List_Vector3__Add___12dd4e0);
                native_System_Collections_Generic_List_Vector3___Add_d2be08
                          (fVar52,fVar42,0,param_5,
                           _Method_System_Collections_Generic_List_Vector3__Add___12dd4e0);
                uVar20 = 0;
                native_System_Collections_Generic_List_Vector3___Add_d2be08
                          (fVar52,fVar44,0,param_5,
                           _Method_System_Collections_Generic_List_Vector3__Add___12dd4e0);
              }
              if (((*(byte *)(_NGUIText_TypeInfo_12d53c0 + 0x133) >> 2 & 1) != 0) &&
                 (*(int *)(_NGUIText_TypeInfo_12d53c0 + 0xe0) == 0)) {
                native_sub_4327ec();
              }
              iVar49 = iStack_100;
              uVar32 = (ulong)(uint)fVar39;
              fVar42 = *(float *)(*(long *)(_NGUIText_TypeInfo_12d53c0 + 0xb8) + 0x90);
              iVar7 = native_BMSymbol__get_length_dd2140(lVar9,0);
              iStack_100 = iVar49 + iVar7 + -1;
              if (param_3 != 0) {
                uStack_108 = *(undefined8 *)(lVar9 + 0x54);
                uStack_110 = *(undefined8 *)(lVar9 + 0x4c);
                uVar31 = native_UnityEngine_Rect__get_xMin_76363c(&uStack_110,0);
                uVar32 = native_UnityEngine_Rect__get_yMin_763644(&uStack_110,0);
                uVar33 = native_UnityEngine_Rect__get_xMax_76365c(&uStack_110,0);
                uVar34 = native_UnityEngine_Rect__get_yMax_76366c(&uStack_110,0);
                if (param_6 == 0) {
                  native_System_Collections_Generic_List_Vector2___Add_d293ec
                            (uVar31,uVar32,param_3,
                             _Method_System_Collections_Generic_List_Vector2__Add___12dd4b0);
                  native_System_Collections_Generic_List_Vector2___Add_d293ec
                            (uVar31,uVar34,param_3,
                             _Method_System_Collections_Generic_List_Vector2__Add___12dd4b0);
                  native_System_Collections_Generic_List_Vector2___Add_d293ec
                            (uVar33,uVar34,param_3,
                             _Method_System_Collections_Generic_List_Vector2__Add___12dd4b0);
                  lVar15 = param_3;
                }
                else {
                  native_System_Collections_Generic_List_Vector2___Add_d293ec
                            (0x3f800000,0x3f800000,param_3,
                             _Method_System_Collections_Generic_List_Vector2__Add___12dd4b0);
                  native_System_Collections_Generic_List_Vector2___Add_d293ec
                            (0x3f800000,0x3f800000,param_3,
                             _Method_System_Collections_Generic_List_Vector2__Add___12dd4b0);
                  native_System_Collections_Generic_List_Vector2___Add_d293ec
                            (0x3f800000,0x3f800000,param_3,
                             _Method_System_Collections_Generic_List_Vector2__Add___12dd4b0);
                  native_System_Collections_Generic_List_Vector2___Add_d293ec
                            (0x3f800000,0x3f800000,param_3,
                             _Method_System_Collections_Generic_List_Vector2__Add___12dd4b0);
                  native_System_Collections_Generic_List_Vector2___Add_d293ec
                            (uVar31,uVar32,param_6,
                             _Method_System_Collections_Generic_List_Vector2__Add___12dd4b0);
                  native_System_Collections_Generic_List_Vector2___Add_d293ec
                            (uVar31,uVar34,param_6,
                             _Method_System_Collections_Generic_List_Vector2__Add___12dd4b0);
                  native_System_Collections_Generic_List_Vector2___Add_d293ec
                            (uVar33,uVar34,param_6,
                             _Method_System_Collections_Generic_List_Vector2__Add___12dd4b0);
                  lVar15 = param_6;
                }
                native_System_Collections_Generic_List_Vector2___Add_d293ec
                          (uVar33,uVar32,lVar15,
                           _Method_System_Collections_Generic_List_Vector2__Add___12dd4b0);
              }
              fStack_194 = fStack_194 + fVar39 + fVar42;
              if (param_4 == 0) {
                uVar12 = uVar48 & 0xffffffff;
                uVar19 = 0;
              }
              else {
                uVar12 = uVar48 & 0xffffffff;
                if (((*(byte *)(_NGUIText_TypeInfo_12d53c0 + 0x133) >> 2 & 1) != 0) &&
                   (*(int *)(_NGUIText_TypeInfo_12d53c0 + 0xe0) == 0)) {
                  native_sub_4327ec();
                }
                iVar49 = *(int *)(*(long *)(_NGUIText_TypeInfo_12d53c0 + 0xb8) + 0x88);
                if (iVar49 != 2) {
                  if (((*(byte *)(_NGUIText_TypeInfo_12d53c0 + 0x133) >> 2 & 1) != 0) &&
                     (*(int *)(_NGUIText_TypeInfo_12d53c0 + 0xe0) == 0)) {
                    native_sub_4327ec();
                    iVar49 = *(int *)(*(long *)(_NGUIText_TypeInfo_12d53c0 + 0xb8) + 0x88);
                  }
                  if ((iVar49 != 1) ||
                     ((acStack_e4[0] == '\0' && (*(char *)(lVar9 + 0x20) == '\0')))) {
                    uVar28 = native_UnityEngine_Color__get_white_8d9e10(0);
                    if (((*(byte *)(_NGUIText_TypeInfo_12d53c0 + 0x133) >> 2 & 1) != 0) &&
                       (*(int *)(_NGUIText_TypeInfo_12d53c0 + 0xe0) == 0)) {
                      native_sub_4327ec();
                    }
                    iVar49 = 4;
                    bVar4 = *(int *)(*(long *)(_NGUIText_TypeInfo_12d53c0 + 0xb8) + 0x88) != 3;
                    uVar36 = 0xbf800000;
                    if (bVar4) {
                      uVar36 = uVar28;
                    }
                    uVar13 = 0;
                    if (bVar4) {
                      uVar13 = uVar8;
                    }
                    if (param_7 == 0) {
                      do {
                        native_System_Collections_Generic_List_Color___Add_d07158
                                  (uVar36,uVar32,uVar20,uVar13,param_4,
                                   _Method_System_Collections_Generic_List_Color__Add___12dc690);
                        iVar49 = iVar49 + -1;
                      } while (iVar49 != 0);
                    }
                    else {
                      do {
                        native_System_Collections_Generic_List_Color___Add_d07158
                                  (uStack_f8 & 0xffffffff,uStack_f8._4_4_,uStack_f0 & 0xffffffff,
                                   uStack_f0._4_4_,param_4,
                                   _Method_System_Collections_Generic_List_Color__Add___12dc690);
                        native_System_Collections_Generic_List_Color___Add_d07158
                                  (uVar36,uVar32,uVar20,uVar13,param_7,
                                   _Method_System_Collections_Generic_List_Color__Add___12dc690);
                        iVar49 = iVar49 + -1;
                      } while (iVar49 != 0);
                    }
                    uVar13 = uVar10 & 0xffffffff;
                    uVar12 = uVar48 & 0xffffffff;
                    uVar19 = 0;
                    goto LAB_00811d18;
                  }
                }
                iVar49 = 4;
                if (param_7 == 0) {
                  do {
                    native_System_Collections_Generic_List_Color___Add_d07158
                              (uVar22,uVar12,uVar13,uVar8,param_4,
                               _Method_System_Collections_Generic_List_Color__Add___12dc690);
                    iVar49 = iVar49 + -1;
                  } while (iVar49 != 0);
                  uVar19 = 0;
                }
                else {
                  do {
                    native_System_Collections_Generic_List_Color___Add_d07158
                              (uStack_f8 & 0xffffffff,uStack_f8._4_4_,uStack_f0 & 0xffffffff,
                               uStack_f0._4_4_,param_4,
                               _Method_System_Collections_Generic_List_Color__Add___12dc690);
                    native_System_Collections_Generic_List_Color___Add_d07158
                              (uVar22,uVar12,uVar13,uVar8,param_7,
                               _Method_System_Collections_Generic_List_Color__Add___12dc690);
                    iVar49 = iVar49 + -1;
                  } while (iVar49 != 0);
                  uVar19 = 0;
                }
              }
            }
          }
        }
      }
      else {
        if (((*(byte *)(_NGUIText_TypeInfo_12d53c0 + 0x133) >> 2 & 1) != 0) &&
           (*(int *)(_NGUIText_TypeInfo_12d53c0 + 0xe0) == 0)) {
          native_sub_4327ec(_NGUIText_TypeInfo_12d53c0);
          lVar15 = *(long *)(_NGUIText_TypeInfo_12d53c0 + 0xb8);
        }
        uVar13 = native_NGUIText__ParseSymbol_8091a4
                           (lVar9,&iStack_100,*(undefined8 *)(lVar15 + 0xb8),
                            *(undefined1 *)(lVar15 + 0x84),&iStack_cc,&fStack_fc,acStack_d0,
                            acStack_d4,acStack_d8,acStack_dc,acStack_e0,acStack_e4);
        if ((uVar13 & 1) == 0) goto LAB_00810d90;
        if (acStack_e0[0] == '\0') {
          if (((*(ushort *)(_NGUIText_TypeInfo_12d53c0 + 0x132) >> 10 & 1) != 0) &&
             (*(int *)(_NGUIText_TypeInfo_12d53c0 + 0xe0) == 0)) {
            native_sub_4327ec();
          }
          lVar9 = *(long *)(_NGUIText_TypeInfo_12d53c0 + 0xb8);
          lVar15 = *(long *)(lVar9 + 0xb8);
          if ((lVar15 == 0) || (*(long *)(lVar15 + 0x10) == 0)) goto LAB_00811e5c;
          if (*(uint *)(*(long *)(lVar15 + 0x10) + 0x18) <= *(int *)(lVar15 + 0x18) - 1U)
          goto LAB_00811e60;
          uVar12 = (ulong)*(uint *)(lVar9 + 0x34);
          uVar13 = (ulong)*(uint *)(lVar9 + 0x38);
          fVar42 = *(float *)(lVar9 + 0x3c);
          uVar22 = native_UnityEngine_Color__op_Multiply_8d9c68(*(undefined4 *)(lVar9 + 0x30),0);
          fVar42 = fVar42 * *(float *)(*(long *)(_NGUIText_TypeInfo_12d53c0 + 0xb8) + 0xc0);
        }
        else {
          if (((*(ushort *)(_NGUIText_TypeInfo_12d53c0 + 0x132) >> 10 & 1) != 0) &&
             (*(int *)(_NGUIText_TypeInfo_12d53c0 + 0xe0) == 0)) {
            native_sub_4327ec();
          }
          lVar9 = *(long *)(_NGUIText_TypeInfo_12d53c0 + 0xb8);
          lVar15 = *(long *)(lVar9 + 0xb8);
          if ((lVar15 == 0) || (lVar16 = *(long *)(lVar15 + 0x10), lVar16 == 0)) goto LAB_00811e5c;
          uVar41 = *(int *)(lVar15 + 0x18) - 1;
          if (*(uint *)(lVar16 + 0x18) <= uVar41) {
LAB_00811e60:
            uVar20 = native_sub_43283c();
                    /* WARNING: Subroutine does not return */
            native_sub_4327dc(uVar20,0);
          }
          lVar16 = lVar16 + (long)(int)uVar41 * 0x10;
          uVar13 = (ulong)*(uint *)(lVar16 + 0x28);
          uVar22 = *(undefined4 *)(lVar16 + 0x20);
          uVar12 = (ulong)*(uint *)(lVar16 + 0x24);
          fVar42 = *(float *)(lVar16 + 0x2c) * *(float *)(lVar9 + 0xc0) * *(float *)(lVar9 + 0x3c);
        }
        uVar8 = (ulong)(uint)fVar42;
        if (((*(byte *)(_NGUIText_TypeInfo_12d53c0 + 0x133) >> 2 & 1) != 0) &&
           (*(int *)(_NGUIText_TypeInfo_12d53c0 + 0xe0) == 0)) {
          native_sub_4327ec();
        }
        lVar9 = *(long *)(*(long *)(_NGUIText_TypeInfo_12d53c0 + 0xb8) + 0xb8);
        if (lVar9 == 0) goto LAB_00811e5c;
        iVar49 = *(int *)(lVar9 + 0x18) + -2;
        bVar4 = (*(byte *)(_NGUIText_TypeInfo_12d53c0 + 0x133) & 4) == 0;
        lVar9 = _NGUIText_TypeInfo_12d53c0;
        if (0 < iVar49) {
          uVar10 = 0;
          lVar15 = 0x2c;
          do {
            if ((!bVar4) && (*(int *)(lVar9 + 0xe0) == 0)) {
              native_sub_4327ec();
              lVar9 = _NGUIText_TypeInfo_12d53c0;
            }
            lVar16 = *(long *)(*(long *)(lVar9 + 0xb8) + 0xb8);
            if ((lVar16 == 0) || (lVar16 = *(long *)(lVar16 + 0x10), lVar16 == 0))
            goto LAB_00811e5c;
            if (*(uint *)(lVar16 + 0x18) <= uVar10) goto LAB_00811e60;
            pfVar2 = (float *)(lVar16 + lVar15);
            uVar10 = uVar10 + 1;
            lVar15 = lVar15 + 0x10;
            uVar8 = (ulong)(uint)((float)uVar8 * *pfVar2);
            bVar4 = (*(byte *)(lVar9 + 0x133) & 4) == 0;
          } while ((long)uVar10 < (long)iVar49);
        }
        if ((!bVar4) && (*(int *)(lVar9 + 0xe0) == 0)) {
          native_sub_4327ec();
          lVar9 = _NGUIText_TypeInfo_12d53c0;
        }
        lVar15 = *(long *)(lVar9 + 0xb8);
        if (*(char *)(lVar15 + 0x54) != '\0') {
          if (((*(byte *)(lVar9 + 0x133) >> 2 & 1) != 0) && (*(int *)(lVar9 + 0xe0) == 0)) {
            native_sub_4327ec();
            lVar15 = *(long *)(_NGUIText_TypeInfo_12d53c0 + 0xb8);
          }
          uStack_158 = *(undefined4 *)(lVar15 + 0x5c);
          uStack_15c = *(undefined4 *)(lVar15 + 0x60);
          uStack_160 = *(undefined4 *)(lVar15 + 100);
          uStack_154 = native_UnityEngine_Color__op_Multiply_8d9c68
                                 (*(undefined4 *)(lVar15 + 0x58),0);
          native_UnityEngine_Color__op_Multiply_8d9c68
                    (*(undefined4 *)(*(long *)(_NGUIText_TypeInfo_12d53c0 + 0xb8) + 0x68),0);
        }
        iStack_100 = iStack_100 + -1;
        uVar19 = uVar18;
      }
LAB_00811d18:
      iStack_100 = iStack_100 + 1;
      uVar10 = uVar13;
      uVar48 = uVar12;
      uVar18 = uVar19;
    } while (iStack_100 < iVar1);
  }
  if (((*(byte *)(_NGUIText_TypeInfo_12d53c0 + 0x133) >> 2 & 1) != 0) &&
     (*(int *)(_NGUIText_TypeInfo_12d53c0 + 0xe0) == 0)) {
    native_sub_4327ec();
  }
  lVar9 = *(long *)(_NGUIText_TypeInfo_12d53c0 + 0xb8);
  if ((*(int *)(lVar9 + 0x2c) != 1) && (iStack_128 < *(int *)(param_2 + 0x18))) {
    if (((*(byte *)(_NGUIText_TypeInfo_12d53c0 + 0x133) >> 2 & 1) != 0) &&
       (*(int *)(_NGUIText_TypeInfo_12d53c0 + 0xe0) == 0)) {
      native_sub_4327ec();
      lVar9 = *(long *)(_NGUIText_TypeInfo_12d53c0 + 0xb8);
    }
    native_NGUIText__Align_80bc88(fStack_194 - *(float *)(lVar9 + 0x90),param_2,iStack_128,4);
    if (param_5 != 0) {
      if (((*(byte *)(_NGUIText_TypeInfo_12d53c0 + 0x133) >> 2 & 1) != 0) &&
         (*(int *)(_NGUIText_TypeInfo_12d53c0 + 0xe0) == 0)) {
        native_sub_4327ec();
      }
      native_NGUIText__Align_80bc88
                (fStack_194 - *(float *)(*(long *)(_NGUIText_TypeInfo_12d53c0 + 0xb8) + 0x90),
                 param_5,uStack_13c,4);
    }
  }
  if (((*(byte *)(_NGUIText_TypeInfo_12d53c0 + 0x133) >> 2 & 1) != 0) &&
     (*(int *)(_NGUIText_TypeInfo_12d53c0 + 0xe0) == 0)) {
    native_sub_4327ec();
  }
  lVar9 = *(long *)(*(long *)(_NGUIText_TypeInfo_12d53c0 + 0xb8) + 0xb8);
  if (lVar9 != 0) {
    native_BetterList_Color___Clear_ba192c(lVar9,_Method_BetterList_Color__Clear___12d8930);
    return;
  }
LAB_00811e5c:
                    /* WARNING: Subroutine does not return */
  native_sub_432810();
}



/* NGUIText$$PrintApproximateCharacterPositions @ 0x811e6c
 * void NGUIText__PrintApproximateCharacterPositions (System_String_o* text, System_Collections_Generic_List_Vector3__o* verts, System_Collections_Generic_List_int__o* indices, const MethodInfo* method); */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* NGUIText$$PrintApproximateCharacterPositions
   void NGUIText__PrintApproximateCharacterPositions (System_String_o* text,
   System_Collections_Generic_List_Vector3__o* verts, System_Collections_Generic_List_int__o*
   indices, const MethodInfo* method); */

void native_NGUIText__PrintApproximateCharacterPositions_811e6c
               (long param_1,long param_2,long param_3)

{
  int iVar1;
  char cVar2;
  char cVar3;
  ushort uVar4;
  int iVar5;
  ulong uVar6;
  long lVar7;
  long lVar8;
  int iVar9;
  ushort uVar10;
  float fVar11;
  double dVar12;
  float fVar13;
  int iVar14;
  float fVar15;
  float fVar16;
  float fVar17;
  float fVar18;
  float fVar19;
  float fVar20;
  int iStack_dc;
  float fStack_d8;
  undefined1 auStack_d4 [4];
  undefined1 auStack_d0 [4];
  undefined1 auStack_cc [4];
  undefined1 auStack_c8 [4];
  char acStack_c4 [4];
  char acStack_c0 [4];
  int iStack_bc;
  long lStack_b8;
  double adStack_b0 [2];
  
  lStack_b8 = param_1;
  if ((bRam00000000013404a5 & 1) == 0) {
    native_sub_43273c(&Method_BetterList_Color__Clear___12d8930);
    native_sub_43273c(&Method_System_Collections_Generic_List_Vector3__Add___12dd4e0);
    native_sub_43273c(&Method_System_Collections_Generic_List_int__Add___12dca88);
    native_sub_43273c(&Method_System_Collections_Generic_List_Vector3__get_Count___12dd500);
    native_sub_43273c(&NGUIText_TypeInfo_12d53c0);
    native_sub_43273c(&StringLiteral___12eac68);
    bRam00000000013404a5 = 1;
  }
  iStack_bc = 0;
  acStack_c0[0] = '\0';
  acStack_c4[0] = '\0';
  auStack_c8[0] = 0;
  auStack_cc[0] = 0;
  auStack_d0[0] = 0;
  auStack_d4[0] = 0;
  iStack_dc = 0;
  fStack_d8 = 0.0;
  uVar6 = native_System_String__IsNullOrEmpty_b09430(param_1,0);
  if ((uVar6 & 1) != 0) {
    lStack_b8 = _StringLiteral___12eac68;
    param_1 = _StringLiteral___12eac68;
  }
  if (((*(byte *)(_NGUIText_TypeInfo_12d53c0 + 0x133) >> 2 & 1) != 0) &&
     (*(int *)(_NGUIText_TypeInfo_12d53c0 + 0xe0) == 0)) {
    native_sub_4327ec();
  }
  native_NGUIText__Prepare_808c84(param_1);
  lVar7 = *(long *)(*(long *)(_NGUIText_TypeInfo_12d53c0 + 0xb8) + 0xb8);
  if (lVar7 == 0) goto LAB_008126d4;
  native_BetterList_Color___Clear_ba192c(lVar7,_Method_BetterList_Color__Clear___12d8930);
  lVar7 = *(long *)(_NGUIText_TypeInfo_12d53c0 + 0xb8);
  iVar14 = *(int *)(lVar7 + 0x48);
  fVar13 = *(float *)(lVar7 + 0x80) * *(float *)(lVar7 + 0x20) * 0.5;
  dVar12 = (double)func_0x002c9600((double)fVar13,adStack_b0);
  lVar7 = lStack_b8;
  if (0.0 <= fVar13) {
    if (dVar12 == 0.5) {
      fVar13 = 1.0;
      goto LAB_00811ff0;
    }
    fVar18 = (float)(int)(fVar13 + 0.5);
  }
  else if (dVar12 == -0.5) {
    fVar13 = -1.0;
LAB_00811ff0:
    fVar18 = (float)adStack_b0[0];
    if (((long)adStack_b0[0] & 1U) != 0) {
      fVar18 = (float)adStack_b0[0] + fVar13;
    }
  }
  else {
    fVar18 = (float)(int)(fVar13 + -0.5);
  }
  if ((lStack_b8 != 0) && (param_2 != 0)) {
    iVar1 = *(int *)(lStack_b8 + 0x10);
    iVar9 = *(int *)(param_2 + 0x18);
    iStack_bc = 0;
    acStack_c0[0] = '\0';
    acStack_c4[0] = '\0';
    auStack_c8[0] = 0;
    auStack_cc[0] = 0;
    auStack_d0[0] = 0;
    auStack_d4[0] = 0;
    fVar13 = (float)native_NGUIText__get_symbolScale_80c8d8();
    iVar5 = native_NGUIText__get_symbolMaxHeight_80cb28();
    iStack_dc = 0;
    fStack_d8 = 0.0;
    if (iVar1 < 1) {
      fVar15 = 0.0;
LAB_008126dc:
      if (((*(byte *)(_NGUIText_TypeInfo_12d53c0 + 0x133) >> 2 & 1) != 0) &&
         (*(int *)(_NGUIText_TypeInfo_12d53c0 + 0xe0) == 0)) {
        native_sub_4327ec();
      }
      lVar7 = *(long *)(_NGUIText_TypeInfo_12d53c0 + 0xb8);
      if ((*(int *)(lVar7 + 0x2c) != 1) && (iVar9 < *(int *)(param_2 + 0x18))) {
        if (((*(byte *)(_NGUIText_TypeInfo_12d53c0 + 0x133) >> 2 & 1) != 0) &&
           (*(int *)(_NGUIText_TypeInfo_12d53c0 + 0xe0) == 0)) {
          native_sub_4327ec();
          lVar7 = *(long *)(_NGUIText_TypeInfo_12d53c0 + 0xb8);
        }
        native_NGUIText__Align_80bc88(fVar15 - *(float *)(lVar7 + 0x90),param_2,iVar9,1);
      }
      return;
    }
    uVar10 = 0;
    fVar15 = 0.0;
    fVar20 = (float)iVar14 + 0.01;
    do {
      uVar4 = native_System_String__get_Chars_b03810(lVar7,iStack_dc,0);
      if (((*(byte *)(_NGUIText_TypeInfo_12d53c0 + 0x133) >> 2 & 1) != 0) &&
         (*(int *)(_NGUIText_TypeInfo_12d53c0 + 0xe0) == 0)) {
        native_sub_4327ec(_NGUIText_TypeInfo_12d53c0);
      }
      lVar7 = lStack_b8;
      lVar8 = *(long *)(_NGUIText_TypeInfo_12d53c0 + 0xb8);
      if (*(char *)(lVar8 + 0x78) == '\0') {
LAB_0081215c:
        if (iStack_bc == 0) {
          if (fStack_d8 == 0.0) {
            if (((*(ushort *)(_NGUIText_TypeInfo_12d53c0 + 0x132) >> 10 & 1) != 0) &&
               (*(int *)(_NGUIText_TypeInfo_12d53c0 + 0xe0) == 0)) {
              native_sub_4327ec();
            }
            fVar17 = *(float *)(*(long *)(_NGUIText_TypeInfo_12d53c0 + 0xb8) + 0x20);
          }
          else {
            if (((*(ushort *)(_NGUIText_TypeInfo_12d53c0 + 0x132) >> 10 & 1) != 0) &&
               (*(int *)(_NGUIText_TypeInfo_12d53c0 + 0xe0) == 0)) {
              native_sub_4327ec();
            }
            fVar17 = *(float *)(*(long *)(_NGUIText_TypeInfo_12d53c0 + 0xb8) + 0x20) * fStack_d8;
          }
        }
        else {
          if (((*(byte *)(_NGUIText_TypeInfo_12d53c0 + 0x133) >> 2 & 1) != 0) &&
             (*(int *)(_NGUIText_TypeInfo_12d53c0 + 0xe0) == 0)) {
            native_sub_4327ec();
          }
          fVar17 = *(float *)(*(long *)(_NGUIText_TypeInfo_12d53c0 + 0xb8) + 0x20) * fStack_d8;
        }
        fVar19 = fVar17 * 0.5;
        fVar16 = -fVar18 - fVar19;
        native_System_Collections_Generic_List_Vector3___Add_d2be08
                  (fVar15,fVar16,0,param_2,
                   _Method_System_Collections_Generic_List_Vector3__Add___12dd4e0);
        if (param_3 == 0) break;
        native_System_Collections_Generic_List_int___Add_d39078
                  (param_3,iStack_dc,_Method_System_Collections_Generic_List_int__Add___12dca88);
        if (uVar4 == 10) {
          if (((*(byte *)(_NGUIText_TypeInfo_12d53c0 + 0x133) >> 2 & 1) != 0) &&
             (*(int *)(_NGUIText_TypeInfo_12d53c0 + 0xe0) == 0)) {
            native_sub_4327ec();
          }
          lVar7 = *(long *)(_NGUIText_TypeInfo_12d53c0 + 0xb8);
          if (*(int *)(lVar7 + 0x2c) != 1) {
            if (((*(byte *)(_NGUIText_TypeInfo_12d53c0 + 0x133) >> 2 & 1) != 0) &&
               (*(int *)(_NGUIText_TypeInfo_12d53c0 + 0xe0) == 0)) {
              native_sub_4327ec();
              lVar7 = *(long *)(_NGUIText_TypeInfo_12d53c0 + 0xb8);
            }
            native_NGUIText__Align_80bc88(fVar15 - *(float *)(lVar7 + 0x90),param_2,iVar9,1);
            iVar9 = *(int *)(param_2 + 0x18);
          }
          if (((*(byte *)(_NGUIText_TypeInfo_12d53c0 + 0x133) >> 2 & 1) != 0) &&
             (*(int *)(_NGUIText_TypeInfo_12d53c0 + 0xe0) == 0)) {
            native_sub_4327ec();
          }
          fVar15 = 0.0;
          fVar18 = fVar18 + *(float *)(*(long *)(_NGUIText_TypeInfo_12d53c0 + 0xb8) + 0x94);
          uVar10 = 0;
        }
        else if (uVar4 < 0x20) {
          uVar10 = 0;
        }
        else {
          if (((*(byte *)(_NGUIText_TypeInfo_12d53c0 + 0x133) >> 2 & 1) != 0) &&
             (*(int *)(_NGUIText_TypeInfo_12d53c0 + 0xe0) == 0)) {
            native_sub_4327ec();
          }
          iVar14 = iStack_dc;
          if (*(char *)(*(long *)(_NGUIText_TypeInfo_12d53c0 + 0xb8) + 0x9c) != '\0') {
            if (((*(byte *)(_NGUIText_TypeInfo_12d53c0 + 0x133) >> 2 & 1) != 0) &&
               (*(int *)(_NGUIText_TypeInfo_12d53c0 + 0xe0) == 0)) {
              native_sub_4327ec();
            }
            lVar7 = native_NGUIText__GetSymbol_809ca4(&lStack_b8,iVar14,iVar1);
            if (lVar7 != 0) {
              iVar14 = native_BMSymbol__get_paddedHeight_dd218c(lVar7,0);
              if (((iVar5 < iVar14) && (iVar5 != 0)) && (*(char *)(lVar7 + 0x21) == '\0')) {
                fVar17 = fVar17 * ((float)iVar5 / (float)iVar14);
              }
              iVar14 = *(int *)(lVar7 + 0x48);
              if (*(char *)(lVar7 + 0x21) == '\0') {
                if (((*(ushort *)(_NGUIText_TypeInfo_12d53c0 + 0x132) >> 10 & 1) != 0) &&
                   (*(int *)(_NGUIText_TypeInfo_12d53c0 + 0xe0) == 0)) {
                  native_sub_4327ec();
                }
                fVar17 = fVar13 * fVar17 * (float)iVar14 +
                         *(float *)(*(long *)(_NGUIText_TypeInfo_12d53c0 + 0xb8) + 0x90);
                dVar12 = (double)func_0x002c9600((double)fVar17,adStack_b0);
                if (0.0 <= fVar17) {
                  if (dVar12 == 0.5) {
                    fVar17 = 1.0;
                    goto LAB_00812578;
                  }
                  fVar11 = (float)(int)(fVar17 + 0.5);
                }
                else if (dVar12 == -0.5) {
                  fVar17 = -1.0;
LAB_00812578:
                  fVar11 = (float)adStack_b0[0];
                  if (((long)adStack_b0[0] & 1U) != 0) {
                    fVar11 = (float)adStack_b0[0] + fVar17;
                  }
                }
                else {
                  fVar11 = (float)(int)(fVar17 + -0.5);
                }
              }
              else {
                if (((*(ushort *)(_NGUIText_TypeInfo_12d53c0 + 0x132) >> 10 & 1) != 0) &&
                   (*(int *)(_NGUIText_TypeInfo_12d53c0 + 0xe0) == 0)) {
                  native_sub_4327ec();
                }
                fVar11 = *(float *)(*(long *)(_NGUIText_TypeInfo_12d53c0 + 0xb8) + 0x90) +
                         (float)iVar14;
              }
              fVar17 = fVar15 + fVar11;
              if (fVar20 < fVar15 + fVar11) {
                if (fVar15 == 0.0) {
                  return;
                }
                if (((*(byte *)(_NGUIText_TypeInfo_12d53c0 + 0x133) >> 2 & 1) != 0) &&
                   (*(int *)(_NGUIText_TypeInfo_12d53c0 + 0xe0) == 0)) {
                  native_sub_4327ec();
                }
                lVar8 = *(long *)(_NGUIText_TypeInfo_12d53c0 + 0xb8);
                if ((*(int *)(lVar8 + 0x2c) != 1) && (iVar9 < *(int *)(param_2 + 0x18))) {
                  if (((*(byte *)(_NGUIText_TypeInfo_12d53c0 + 0x133) >> 2 & 1) != 0) &&
                     (*(int *)(_NGUIText_TypeInfo_12d53c0 + 0xe0) == 0)) {
                    native_sub_4327ec();
                    lVar8 = *(long *)(_NGUIText_TypeInfo_12d53c0 + 0xb8);
                  }
                  native_NGUIText__Align_80bc88(fVar15 - *(float *)(lVar8 + 0x90),param_2,iVar9,1);
                  iVar9 = *(int *)(param_2 + 0x18);
                }
                if (((*(byte *)(_NGUIText_TypeInfo_12d53c0 + 0x133) >> 2 & 1) != 0) &&
                   (*(int *)(_NGUIText_TypeInfo_12d53c0 + 0xe0) == 0)) {
                  native_sub_4327ec();
                }
                fVar18 = fVar18 + *(float *)(*(long *)(_NGUIText_TypeInfo_12d53c0 + 0xb8) + 0x94);
                fVar16 = -fVar18 - fVar19;
                fVar17 = fVar11;
              }
              fVar15 = fVar17;
              native_System_Collections_Generic_List_Vector3___Add_d2be08
                        (fVar15,fVar16,0,param_2,
                         _Method_System_Collections_Generic_List_Vector3__Add___12dd4e0);
              native_System_Collections_Generic_List_int___Add_d39078
                        (param_3,iStack_dc + 1,
                         _Method_System_Collections_Generic_List_int__Add___12dca88);
              if (*(long *)(lVar7 + 0x10) != 0) {
                iStack_dc = iStack_dc + *(int *)(*(long *)(lVar7 + 0x10) + 0x10) + -1;
                uVar10 = 0;
                goto LAB_008126b4;
              }
              break;
            }
          }
          cVar3 = acStack_c0[0];
          cVar2 = acStack_c4[0];
          if (((*(byte *)(_NGUIText_TypeInfo_12d53c0 + 0x133) >> 2 & 1) != 0) &&
             (*(int *)(_NGUIText_TypeInfo_12d53c0 + 0xe0) == 0)) {
            native_sub_4327ec();
          }
          fVar17 = (float)native_NGUIText__GetGlyphWidth_809de8
                                    (fVar17,uVar4,uVar10,cVar3 != '\0',cVar2 != '\0');
          if (fVar17 != 0.0) {
            if (((*(byte *)(_NGUIText_TypeInfo_12d53c0 + 0x133) >> 2 & 1) != 0) &&
               (*(int *)(_NGUIText_TypeInfo_12d53c0 + 0xe0) == 0)) {
              native_sub_4327ec();
            }
            lVar7 = *(long *)(_NGUIText_TypeInfo_12d53c0 + 0xb8);
            fVar17 = fVar17 + *(float *)(lVar7 + 0x90);
            fVar11 = fVar15 + fVar17;
            if (fVar20 < fVar11) {
              if (fVar15 == 0.0) {
                return;
              }
              if (((*(byte *)(_NGUIText_TypeInfo_12d53c0 + 0x133) >> 2 & 1) != 0) &&
                 (*(int *)(_NGUIText_TypeInfo_12d53c0 + 0xe0) == 0)) {
                native_sub_4327ec();
                lVar7 = *(long *)(_NGUIText_TypeInfo_12d53c0 + 0xb8);
              }
              if ((*(int *)(lVar7 + 0x2c) != 1) && (iVar9 < *(int *)(param_2 + 0x18))) {
                if (((*(byte *)(_NGUIText_TypeInfo_12d53c0 + 0x133) >> 2 & 1) != 0) &&
                   (*(int *)(_NGUIText_TypeInfo_12d53c0 + 0xe0) == 0)) {
                  native_sub_4327ec();
                  lVar7 = *(long *)(_NGUIText_TypeInfo_12d53c0 + 0xb8);
                }
                native_NGUIText__Align_80bc88(fVar15 - *(float *)(lVar7 + 0x90),param_2,iVar9,1);
                iVar9 = *(int *)(param_2 + 0x18);
              }
              if (((*(byte *)(_NGUIText_TypeInfo_12d53c0 + 0x133) >> 2 & 1) != 0) &&
                 (*(int *)(_NGUIText_TypeInfo_12d53c0 + 0xe0) == 0)) {
                native_sub_4327ec();
              }
              fVar18 = fVar18 + *(float *)(*(long *)(_NGUIText_TypeInfo_12d53c0 + 0xb8) + 0x94);
              fVar16 = -fVar18 - fVar19;
              fVar11 = fVar17;
            }
            fVar15 = fVar11;
            native_System_Collections_Generic_List_Vector3___Add_d2be08
                      (fVar15,fVar16,0,param_2,
                       _Method_System_Collections_Generic_List_Vector3__Add___12dd4e0);
            native_System_Collections_Generic_List_int___Add_d39078
                      (param_3,iStack_dc + 1,
                       _Method_System_Collections_Generic_List_int__Add___12dca88);
            uVar10 = uVar4;
          }
        }
      }
      else {
        if (((*(byte *)(_NGUIText_TypeInfo_12d53c0 + 0x133) >> 2 & 1) != 0) &&
           (*(int *)(_NGUIText_TypeInfo_12d53c0 + 0xe0) == 0)) {
          native_sub_4327ec(_NGUIText_TypeInfo_12d53c0);
          lVar8 = *(long *)(_NGUIText_TypeInfo_12d53c0 + 0xb8);
        }
        uVar6 = native_NGUIText__ParseSymbol_8091a4
                          (lVar7,&iStack_dc,*(undefined8 *)(lVar8 + 0xb8),
                           *(undefined1 *)(lVar8 + 0x84),&iStack_bc,&fStack_d8,acStack_c0,acStack_c4
                           ,auStack_c8,auStack_cc,auStack_d0,auStack_d4);
        if ((uVar6 & 1) == 0) goto LAB_0081215c;
        iStack_dc = iStack_dc + -1;
      }
LAB_008126b4:
      iStack_dc = iStack_dc + 1;
      if (iVar1 <= iStack_dc) goto LAB_008126dc;
      lVar7 = lStack_b8;
    } while (lStack_b8 != 0);
  }
LAB_008126d4:
                    /* WARNING: Subroutine does not return */
  native_sub_432810();
}



/* NGUIText$$PrintExactCharacterPositions @ 0x812778
 * void NGUIText__PrintExactCharacterPositions (System_String_o* text, System_Collections_Generic_List_Vector3__o* verts, System_Collections_Generic_List_int__o* indices, const MethodInfo* method); */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* NGUIText$$PrintExactCharacterPositions
   void NGUIText__PrintExactCharacterPositions (System_String_o* text,
   System_Collections_Generic_List_Vector3__o* verts, System_Collections_Generic_List_int__o*
   indices, const MethodInfo* method); */

void native_NGUIText__PrintExactCharacterPositions_812778(long param_1,long param_2,long param_3)

{
  int iVar1;
  char cVar2;
  char cVar3;
  ushort uVar4;
  int iVar5;
  ulong uVar6;
  long lVar7;
  long lVar8;
  int iVar9;
  ushort uVar10;
  float fVar11;
  double dVar12;
  float fVar13;
  int iVar14;
  float fVar15;
  float fVar16;
  float fVar17;
  int iVar18;
  float fVar19;
  float fVar20;
  int iStack_dc;
  float fStack_d8;
  undefined1 auStack_d4 [4];
  undefined1 auStack_d0 [4];
  undefined1 auStack_cc [4];
  undefined1 auStack_c8 [4];
  char acStack_c4 [4];
  char acStack_c0 [4];
  int iStack_bc;
  long lStack_b8;
  double adStack_b0 [2];
  
  lStack_b8 = param_1;
  if ((bRam00000000013404a6 & 1) == 0) {
    native_sub_43273c(&Method_BetterList_Color__Clear___12d8930);
    native_sub_43273c(&Method_System_Collections_Generic_List_Vector3__Add___12dd4e0);
    native_sub_43273c(&Method_System_Collections_Generic_List_int__Add___12dca88);
    native_sub_43273c(&Method_System_Collections_Generic_List_Vector3__get_Count___12dd500);
    native_sub_43273c(&NGUIText_TypeInfo_12d53c0);
    native_sub_43273c(&StringLiteral___12eac68);
    bRam00000000013404a6 = 1;
  }
  iStack_bc = 0;
  acStack_c0[0] = '\0';
  acStack_c4[0] = '\0';
  auStack_c8[0] = 0;
  auStack_cc[0] = 0;
  auStack_d0[0] = 0;
  auStack_d4[0] = 0;
  iStack_dc = 0;
  fStack_d8 = 0.0;
  uVar6 = native_System_String__IsNullOrEmpty_b09430(param_1,0);
  if ((uVar6 & 1) != 0) {
    lStack_b8 = _StringLiteral___12eac68;
    param_1 = _StringLiteral___12eac68;
  }
  if (((*(byte *)(_NGUIText_TypeInfo_12d53c0 + 0x133) >> 2 & 1) != 0) &&
     (*(int *)(_NGUIText_TypeInfo_12d53c0 + 0xe0) == 0)) {
    native_sub_4327ec();
  }
  native_NGUIText__Prepare_808c84(param_1);
  lVar7 = *(long *)(*(long *)(_NGUIText_TypeInfo_12d53c0 + 0xb8) + 0xb8);
  if (lVar7 == 0) goto LAB_00812f48;
  native_BetterList_Color___Clear_ba192c(lVar7,_Method_BetterList_Color__Clear___12d8930);
  lVar7 = *(long *)(_NGUIText_TypeInfo_12d53c0 + 0xb8);
  iVar14 = *(int *)(lVar7 + 0x1c);
  fVar15 = *(float *)(lVar7 + 0x20);
  iVar18 = *(int *)(lVar7 + 0x48);
  fVar13 = fVar15 * *(float *)(lVar7 + 0x80) * 0.5;
  dVar12 = (double)func_0x002c9600((double)fVar13,adStack_b0);
  lVar7 = lStack_b8;
  if (0.0 <= fVar13) {
    if (dVar12 == 0.5) {
      fVar13 = 1.0;
      goto LAB_008128fc;
    }
    fVar20 = (float)(int)(fVar13 + 0.5);
  }
  else if (dVar12 == -0.5) {
    fVar13 = -1.0;
LAB_008128fc:
    fVar20 = (float)adStack_b0[0];
    if (((long)adStack_b0[0] & 1U) != 0) {
      fVar20 = (float)adStack_b0[0] + fVar13;
    }
  }
  else {
    fVar20 = (float)(int)(fVar13 + -0.5);
  }
  if ((lStack_b8 != 0) && (param_2 != 0)) {
    iVar1 = *(int *)(lStack_b8 + 0x10);
    iVar9 = *(int *)(param_2 + 0x18);
    iStack_bc = 0;
    acStack_c0[0] = '\0';
    acStack_c4[0] = '\0';
    auStack_c8[0] = 0;
    auStack_cc[0] = 0;
    auStack_d0[0] = 0;
    auStack_d4[0] = 0;
    fVar13 = (float)native_NGUIText__get_symbolScale_80c8d8();
    iVar5 = native_NGUIText__get_symbolMaxHeight_80cb28();
    iStack_dc = 0;
    fStack_d8 = 0.0;
    if (iVar1 < 1) {
      fVar11 = 0.0;
LAB_00812f50:
      if (((*(byte *)(_NGUIText_TypeInfo_12d53c0 + 0x133) >> 2 & 1) != 0) &&
         (*(int *)(_NGUIText_TypeInfo_12d53c0 + 0xe0) == 0)) {
        native_sub_4327ec();
      }
      lVar7 = *(long *)(_NGUIText_TypeInfo_12d53c0 + 0xb8);
      if ((*(int *)(lVar7 + 0x2c) != 1) && (iVar9 < *(int *)(param_2 + 0x18))) {
        if (((*(byte *)(_NGUIText_TypeInfo_12d53c0 + 0x133) >> 2 & 1) != 0) &&
           (*(int *)(_NGUIText_TypeInfo_12d53c0 + 0xe0) == 0)) {
          native_sub_4327ec();
          lVar7 = *(long *)(_NGUIText_TypeInfo_12d53c0 + 0xb8);
        }
        native_NGUIText__Align_80bc88(fVar11 - *(float *)(lVar7 + 0x90),param_2,iVar9,2);
      }
      return;
    }
    uVar10 = 0;
    fVar11 = 0.0;
    fVar15 = fVar15 * (float)iVar14;
    fVar19 = (float)iVar18 + 0.01;
    do {
      uVar4 = native_System_String__get_Chars_b03810(lVar7,iStack_dc,0);
      if (((*(byte *)(_NGUIText_TypeInfo_12d53c0 + 0x133) >> 2 & 1) != 0) &&
         (*(int *)(_NGUIText_TypeInfo_12d53c0 + 0xe0) == 0)) {
        native_sub_4327ec(_NGUIText_TypeInfo_12d53c0);
      }
      lVar7 = lStack_b8;
      lVar8 = *(long *)(_NGUIText_TypeInfo_12d53c0 + 0xb8);
      if (*(char *)(lVar8 + 0x78) != '\0') {
        if (((*(byte *)(_NGUIText_TypeInfo_12d53c0 + 0x133) >> 2 & 1) != 0) &&
           (*(int *)(_NGUIText_TypeInfo_12d53c0 + 0xe0) == 0)) {
          native_sub_4327ec(_NGUIText_TypeInfo_12d53c0);
          lVar8 = *(long *)(_NGUIText_TypeInfo_12d53c0 + 0xb8);
        }
        uVar6 = native_NGUIText__ParseSymbol_8091a4
                          (lVar7,&iStack_dc,*(undefined8 *)(lVar8 + 0xb8),
                           *(undefined1 *)(lVar8 + 0x84),&iStack_bc,&fStack_d8,acStack_c0,acStack_c4
                           ,auStack_c8,auStack_cc,auStack_d0,auStack_d4);
        if ((uVar6 & 1) == 0) goto LAB_00812a50;
        iStack_dc = iStack_dc + -1;
        goto LAB_00812f2c;
      }
LAB_00812a50:
      if (iStack_bc == 0) {
        if (fStack_d8 == 0.0) {
          if (((*(ushort *)(_NGUIText_TypeInfo_12d53c0 + 0x132) >> 10 & 1) != 0) &&
             (*(int *)(_NGUIText_TypeInfo_12d53c0 + 0xe0) == 0)) {
            native_sub_4327ec();
          }
          fVar16 = *(float *)(*(long *)(_NGUIText_TypeInfo_12d53c0 + 0xb8) + 0x20);
        }
        else {
          if (((*(ushort *)(_NGUIText_TypeInfo_12d53c0 + 0x132) >> 10 & 1) != 0) &&
             (*(int *)(_NGUIText_TypeInfo_12d53c0 + 0xe0) == 0)) {
            native_sub_4327ec();
          }
          fVar16 = *(float *)(*(long *)(_NGUIText_TypeInfo_12d53c0 + 0xb8) + 0x20) * fStack_d8;
        }
      }
      else {
        if (((*(byte *)(_NGUIText_TypeInfo_12d53c0 + 0x133) >> 2 & 1) != 0) &&
           (*(int *)(_NGUIText_TypeInfo_12d53c0 + 0xe0) == 0)) {
          native_sub_4327ec();
        }
        fVar16 = *(float *)(*(long *)(_NGUIText_TypeInfo_12d53c0 + 0xb8) + 0x20) * fStack_d8;
      }
      if (uVar4 == 10) {
        if (((*(byte *)(_NGUIText_TypeInfo_12d53c0 + 0x133) >> 2 & 1) != 0) &&
           (*(int *)(_NGUIText_TypeInfo_12d53c0 + 0xe0) == 0)) {
          native_sub_4327ec();
        }
        lVar7 = *(long *)(_NGUIText_TypeInfo_12d53c0 + 0xb8);
        if (*(int *)(lVar7 + 0x2c) != 1) {
          if (((*(byte *)(_NGUIText_TypeInfo_12d53c0 + 0x133) >> 2 & 1) != 0) &&
             (*(int *)(_NGUIText_TypeInfo_12d53c0 + 0xe0) == 0)) {
            native_sub_4327ec();
            lVar7 = *(long *)(_NGUIText_TypeInfo_12d53c0 + 0xb8);
          }
          native_NGUIText__Align_80bc88(fVar11 - *(float *)(lVar7 + 0x90),param_2,iVar9,2);
          iVar9 = *(int *)(param_2 + 0x18);
        }
        if (((*(byte *)(_NGUIText_TypeInfo_12d53c0 + 0x133) >> 2 & 1) != 0) &&
           (*(int *)(_NGUIText_TypeInfo_12d53c0 + 0xe0) == 0)) {
          native_sub_4327ec();
        }
        fVar11 = *(float *)(*(long *)(_NGUIText_TypeInfo_12d53c0 + 0xb8) + 0x94);
LAB_00812b74:
        fVar20 = fVar20 + fVar11;
        fVar11 = 0.0;
        uVar10 = 0;
      }
      else {
        if (uVar4 < 0x20) {
          uVar10 = 0;
          goto LAB_00812f2c;
        }
        if (((*(byte *)(_NGUIText_TypeInfo_12d53c0 + 0x133) >> 2 & 1) != 0) &&
           (*(int *)(_NGUIText_TypeInfo_12d53c0 + 0xe0) == 0)) {
          native_sub_4327ec();
        }
        iVar14 = iStack_dc;
        if (*(char *)(*(long *)(_NGUIText_TypeInfo_12d53c0 + 0xb8) + 0x9c) != '\0') {
          if (((*(byte *)(_NGUIText_TypeInfo_12d53c0 + 0x133) >> 2 & 1) != 0) &&
             (*(int *)(_NGUIText_TypeInfo_12d53c0 + 0xe0) == 0)) {
            native_sub_4327ec();
          }
          lVar7 = native_NGUIText__GetSymbol_809ca4(&lStack_b8,iVar14,iVar1);
          if (lVar7 == 0) goto LAB_00812c4c;
          iVar14 = native_BMSymbol__get_paddedHeight_dd218c(lVar7,0);
          if (((iVar5 < iVar14) && (iVar5 != 0)) && (*(char *)(lVar7 + 0x21) == '\0')) {
            fVar16 = fVar16 * ((float)iVar5 / (float)iVar14);
          }
          iVar14 = *(int *)(lVar7 + 0x48);
          if (*(char *)(lVar7 + 0x21) == '\0') {
            if (((*(ushort *)(_NGUIText_TypeInfo_12d53c0 + 0x132) >> 10 & 1) != 0) &&
               (*(int *)(_NGUIText_TypeInfo_12d53c0 + 0xe0) == 0)) {
              native_sub_4327ec();
            }
            fVar16 = fVar13 * fVar16 * (float)iVar14 +
                     *(float *)(*(long *)(_NGUIText_TypeInfo_12d53c0 + 0xb8) + 0x90);
            dVar12 = (double)func_0x002c9600((double)fVar16,adStack_b0);
            if (0.0 <= fVar16) {
              if (dVar12 == 0.5) {
                fVar16 = 1.0;
                goto LAB_00812db8;
              }
              fVar17 = (float)(int)(fVar16 + 0.5);
            }
            else if (dVar12 == -0.5) {
              fVar16 = -1.0;
LAB_00812db8:
              fVar17 = (float)adStack_b0[0];
              if (((long)adStack_b0[0] & 1U) != 0) {
                fVar17 = (float)adStack_b0[0] + fVar16;
              }
            }
            else {
              fVar17 = (float)(int)(fVar16 + -0.5);
            }
          }
          else {
            if (((*(ushort *)(_NGUIText_TypeInfo_12d53c0 + 0x132) >> 10 & 1) != 0) &&
               (*(int *)(_NGUIText_TypeInfo_12d53c0 + 0xe0) == 0)) {
              native_sub_4327ec();
            }
            fVar17 = *(float *)(*(long *)(_NGUIText_TypeInfo_12d53c0 + 0xb8) + 0x90) + (float)iVar14
            ;
          }
          fVar17 = fVar11 + fVar17;
          if (fVar19 < fVar17) {
            if (fVar11 == 0.0) {
              return;
            }
            if (((*(byte *)(_NGUIText_TypeInfo_12d53c0 + 0x133) >> 2 & 1) != 0) &&
               (*(int *)(_NGUIText_TypeInfo_12d53c0 + 0xe0) == 0)) goto LAB_00812e18;
LAB_00812e20:
            lVar7 = *(long *)(_NGUIText_TypeInfo_12d53c0 + 0xb8);
LAB_00812e24:
            if ((*(int *)(lVar7 + 0x2c) != 1) && (iVar9 < *(int *)(param_2 + 0x18))) {
              if (((*(byte *)(_NGUIText_TypeInfo_12d53c0 + 0x133) >> 2 & 1) != 0) &&
                 (*(int *)(_NGUIText_TypeInfo_12d53c0 + 0xe0) == 0)) {
                native_sub_4327ec();
                lVar7 = *(long *)(_NGUIText_TypeInfo_12d53c0 + 0xb8);
              }
              native_NGUIText__Align_80bc88(fVar11 - *(float *)(lVar7 + 0x90),param_2,iVar9,2);
              iVar9 = *(int *)(param_2 + 0x18);
            }
            if (((*(byte *)(_NGUIText_TypeInfo_12d53c0 + 0x133) >> 2 & 1) != 0) &&
               (*(int *)(_NGUIText_TypeInfo_12d53c0 + 0xe0) == 0)) {
              native_sub_4327ec();
            }
            fVar11 = *(float *)(*(long *)(_NGUIText_TypeInfo_12d53c0 + 0xb8) + 0x94);
            iStack_dc = iStack_dc + -1;
            goto LAB_00812b74;
          }
          if (param_3 != 0) {
            native_System_Collections_Generic_List_int___Add_d39078
                      (param_3,iStack_dc,_Method_System_Collections_Generic_List_int__Add___12dca88)
            ;
            native_System_Collections_Generic_List_Vector3___Add_d2be08
                      (fVar11,-fVar20 - fVar15,0,param_2,
                       _Method_System_Collections_Generic_List_Vector3__Add___12dd4e0);
            native_System_Collections_Generic_List_Vector3___Add_d2be08
                      (fVar17,-fVar20,0,param_2,
                       _Method_System_Collections_Generic_List_Vector3__Add___12dd4e0);
            if (*(long *)(lVar7 + 0x10) != 0) {
              iStack_dc = iStack_dc + *(int *)(*(long *)(lVar7 + 0x10) + 0x10) + -1;
              fVar11 = fVar17;
              uVar10 = 0;
              goto LAB_00812f2c;
            }
          }
          break;
        }
LAB_00812c4c:
        cVar3 = acStack_c0[0];
        cVar2 = acStack_c4[0];
        if (((*(byte *)(_NGUIText_TypeInfo_12d53c0 + 0x133) >> 2 & 1) != 0) &&
           (*(int *)(_NGUIText_TypeInfo_12d53c0 + 0xe0) == 0)) {
          native_sub_4327ec();
        }
        fVar16 = (float)native_NGUIText__GetGlyphWidth_809de8
                                  (fVar16,uVar4,uVar10,cVar3 != '\0',cVar2 != '\0');
        if (fVar16 != 0.0) {
          if (((*(byte *)(_NGUIText_TypeInfo_12d53c0 + 0x133) >> 2 & 1) != 0) &&
             (*(int *)(_NGUIText_TypeInfo_12d53c0 + 0xe0) == 0)) {
            native_sub_4327ec();
          }
          lVar7 = *(long *)(_NGUIText_TypeInfo_12d53c0 + 0xb8);
          fVar16 = fVar11 + fVar16 + *(float *)(lVar7 + 0x90);
          if (fVar19 < fVar16) {
            if (fVar11 == 0.0) {
              return;
            }
            if (((*(byte *)(_NGUIText_TypeInfo_12d53c0 + 0x133) >> 2 & 1) != 0) &&
               (*(int *)(_NGUIText_TypeInfo_12d53c0 + 0xe0) == 0)) {
LAB_00812e18:
              native_sub_4327ec();
              goto LAB_00812e20;
            }
            goto LAB_00812e24;
          }
          if (param_3 == 0) break;
          native_System_Collections_Generic_List_int___Add_d39078
                    (param_3,iStack_dc,_Method_System_Collections_Generic_List_int__Add___12dca88);
          native_System_Collections_Generic_List_Vector3___Add_d2be08
                    (fVar11,-fVar20 - fVar15,0,param_2,
                     _Method_System_Collections_Generic_List_Vector3__Add___12dd4e0);
          native_System_Collections_Generic_List_Vector3___Add_d2be08
                    (fVar16,-fVar20,0,param_2,
                     _Method_System_Collections_Generic_List_Vector3__Add___12dd4e0);
          fVar11 = fVar16;
          uVar10 = uVar4;
        }
      }
LAB_00812f2c:
      iStack_dc = iStack_dc + 1;
      if (iVar1 <= iStack_dc) goto LAB_00812f50;
      lVar7 = lStack_b8;
    } while (lStack_b8 != 0);
  }
LAB_00812f48:
                    /* WARNING: Subroutine does not return */
  native_sub_432810();
}



/* NGUIText$$PrintCaretAndSelection @ 0x812fec
 * void NGUIText__PrintCaretAndSelection (System_String_o* text, int32_t start, int32_t end, System_Collections_Generic_List_Vector3__o* caret, System_Collections_Generic_List_Vector3__o* highlight, const MethodInfo* method); */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* NGUIText$$PrintCaretAndSelection
   void NGUIText__PrintCaretAndSelection (System_String_o* text, int32_t start, int32_t end,
   System_Collections_Generic_List_Vector3__o* caret, System_Collections_Generic_List_Vector3__o*
   highlight, const MethodInfo* method); */

void native_NGUIText__PrintCaretAndSelection_812fec
               (long param_1,int param_2,int param_3,long param_4,long param_5)

{
  int iVar1;
  int iVar2;
  bool bVar3;
  bool bVar4;
  char cVar5;
  char cVar6;
  ushort uVar7;
  int iVar8;
  ulong uVar9;
  long lVar10;
  ulong uVar11;
  long lVar12;
  int iVar13;
  ushort uVar14;
  float fVar15;
  double dVar16;
  ulong uVar17;
  float fVar18;
  float fVar19;
  int iVar20;
  float fVar21;
  float fVar22;
  float fVar23;
  float fVar24;
  float fVar25;
  float fVar26;
  undefined4 uStack_100;
  float fStack_ec;
  float fStack_e8;
  float fStack_e4;
  float fStack_dc;
  undefined1 auStack_d8 [4];
  undefined1 auStack_d4 [4];
  undefined1 auStack_d0 [4];
  undefined1 auStack_cc [4];
  char acStack_c8 [4];
  char acStack_c4 [4];
  int iStack_c0;
  int iStack_bc;
  long lStack_b8;
  double adStack_b0 [2];
  
  lStack_b8 = param_1;
  if ((bRam00000000013404a7 & 1) == 0) {
    native_sub_43273c(&Method_BetterList_Color__Clear___12d8930);
    native_sub_43273c(&Method_System_Collections_Generic_List_Vector3__Add___12dd4e0);
    native_sub_43273c(&Method_System_Collections_Generic_List_Vector3__get_Count___12dd500);
    native_sub_43273c(&NGUIText_TypeInfo_12d53c0);
    native_sub_43273c(&StringLiteral___12eac68);
    bRam00000000013404a7 = 1;
  }
  iStack_c0 = 0;
  iStack_bc = 0;
  acStack_c4[0] = '\0';
  acStack_c8[0] = '\0';
  auStack_cc[0] = 0;
  auStack_d0[0] = 0;
  auStack_d4[0] = 0;
  auStack_d8[0] = 0;
  fStack_dc = 0.0;
  uVar9 = native_System_String__IsNullOrEmpty_b09430(param_1,0);
  if ((uVar9 & 1) != 0) {
    lStack_b8 = _StringLiteral___12eac68;
    param_1 = _StringLiteral___12eac68;
  }
  if (((*(byte *)(_NGUIText_TypeInfo_12d53c0 + 0x133) >> 2 & 1) != 0) &&
     (*(int *)(_NGUIText_TypeInfo_12d53c0 + 0xe0) == 0)) {
    native_sub_4327ec();
  }
  native_NGUIText__Prepare_808c84(param_1);
  lVar10 = *(long *)(*(long *)(_NGUIText_TypeInfo_12d53c0 + 0xb8) + 0xb8);
  if (lVar10 == 0) goto LAB_00813df8;
  native_BetterList_Color___Clear_ba192c(lVar10,_Method_BetterList_Color__Clear___12d8930);
  iVar1 = param_3;
  if (param_2 <= param_3) {
    iVar1 = param_2;
    param_2 = param_3;
  }
  if (((*(byte *)(_NGUIText_TypeInfo_12d53c0 + 0x133) >> 2 & 1) != 0) &&
     (*(int *)(_NGUIText_TypeInfo_12d53c0 + 0xe0) == 0)) {
    native_sub_4327ec();
  }
  lVar10 = *(long *)(_NGUIText_TypeInfo_12d53c0 + 0xb8);
  iVar20 = *(int *)(lVar10 + 0x1c);
  fVar18 = *(float *)(lVar10 + 0x20);
  fVar23 = fVar18 * *(float *)(lVar10 + 0x80) * 0.5;
  dVar16 = (double)func_0x002c9600((double)fVar23,adStack_b0);
  if (0.0 <= fVar23) {
    uVar9 = 0x3fe0000000000000;
    if (dVar16 == 0.5) {
      fVar23 = 1.0;
      goto LAB_00813190;
    }
    fVar22 = (float)(int)(fVar23 + 0.5);
    if (param_4 == 0) goto LAB_008131dc;
LAB_008131a8:
    uStack_100 = *(undefined4 *)(param_4 + 0x18);
    if (param_5 != 0) goto LAB_008131b4;
LAB_008131e4:
    iVar13 = 0;
  }
  else {
    uVar9 = 0xbfe0000000000000;
    if (dVar16 == -0.5) {
      fVar23 = -1.0;
LAB_00813190:
      fVar23 = (float)adStack_b0[0] + fVar23;
      uVar9 = (ulong)(uint)fVar23;
      fVar22 = (float)adStack_b0[0];
      if (((long)adStack_b0[0] & 1U) != 0) {
        fVar22 = fVar23;
      }
    }
    else {
      fVar22 = (float)(int)(fVar23 + -0.5);
    }
    if (param_4 != 0) goto LAB_008131a8;
LAB_008131dc:
    uStack_100 = 0;
    if (param_5 == 0) goto LAB_008131e4;
LAB_008131b4:
    iVar13 = *(int *)(param_5 + 0x18);
  }
  if (lStack_b8 == 0) goto LAB_00813df8;
  iVar2 = *(int *)(lStack_b8 + 0x10);
  iStack_c0 = 0;
  iStack_bc = 0;
  acStack_c4[0] = '\0';
  acStack_c8[0] = '\0';
  auStack_cc[0] = 0;
  auStack_d0[0] = 0;
  auStack_d4[0] = 0;
  auStack_d8[0] = 0;
  if (((*(byte *)(_NGUIText_TypeInfo_12d53c0 + 0x133) >> 2 & 1) != 0) &&
     (*(int *)(_NGUIText_TypeInfo_12d53c0 + 0xe0) == 0)) {
    native_sub_4327ec();
  }
  fVar18 = fVar18 * (float)iVar20;
  fVar23 = (float)native_NGUIText__get_symbolScale_80c8d8();
  iVar20 = native_NGUIText__get_symbolMaxHeight_80cb28();
  fStack_dc = 0.0;
  fStack_e4 = (float)native_UnityEngine_Vector2__get_zero_765ef0(0);
  uVar17 = uVar9;
  fStack_ec = (float)native_UnityEngine_Vector2__get_zero_765ef0(0);
  fStack_e8 = (float)uVar17;
  if (iVar2 < 1) {
    bVar3 = false;
    bVar4 = false;
    fVar19 = 0.0;
  }
  else {
    uVar14 = 0;
    bVar3 = false;
    fVar19 = 0.0;
    bVar4 = false;
    uVar17 = uVar9;
    do {
      if (((*(byte *)(_NGUIText_TypeInfo_12d53c0 + 0x133) >> 2 & 1) != 0) &&
         (*(int *)(_NGUIText_TypeInfo_12d53c0 + 0xe0) == 0)) {
        native_sub_4327ec();
      }
      lVar10 = lStack_b8;
      lVar12 = *(long *)(_NGUIText_TypeInfo_12d53c0 + 0xb8);
      uVar9 = uVar17;
      fVar24 = fStack_ec;
      fVar26 = fStack_e8;
      fVar15 = fStack_e4;
      if (*(char *)(lVar12 + 0x78) == '\0') {
LAB_0081344c:
        if (iStack_c0 == 0) {
          if (fStack_dc == 0.0) {
            if (((*(ushort *)(_NGUIText_TypeInfo_12d53c0 + 0x132) >> 10 & 1) != 0) &&
               (*(int *)(_NGUIText_TypeInfo_12d53c0 + 0xe0) == 0)) {
              native_sub_4327ec();
            }
            fVar25 = *(float *)(*(long *)(_NGUIText_TypeInfo_12d53c0 + 0xb8) + 0x20);
          }
          else {
            if (((*(ushort *)(_NGUIText_TypeInfo_12d53c0 + 0x132) >> 10 & 1) != 0) &&
               (*(int *)(_NGUIText_TypeInfo_12d53c0 + 0xe0) == 0)) {
              native_sub_4327ec();
            }
            fVar25 = *(float *)(*(long *)(_NGUIText_TypeInfo_12d53c0 + 0xb8) + 0x20) * fStack_dc;
          }
        }
        else {
          if (((*(byte *)(_NGUIText_TypeInfo_12d53c0 + 0x133) >> 2 & 1) != 0) &&
             (*(int *)(_NGUIText_TypeInfo_12d53c0 + 0xe0) == 0)) {
            native_sub_4327ec();
          }
          fVar25 = *(float *)(*(long *)(_NGUIText_TypeInfo_12d53c0 + 0xb8) + 0x20) * fStack_dc;
        }
        if ((!bVar3 && param_4 != 0) && (param_3 <= iStack_bc)) {
          fVar21 = -fVar22;
          native_System_Collections_Generic_List_Vector3___Add_d2be08
                    (fVar19 + -1.0,fVar21 - fVar18,0,param_4,
                     _Method_System_Collections_Generic_List_Vector3__Add___12dd4e0);
          native_System_Collections_Generic_List_Vector3___Add_d2be08
                    (fVar19 + -1.0,fVar21,0,param_4,
                     _Method_System_Collections_Generic_List_Vector3__Add___12dd4e0);
          native_System_Collections_Generic_List_Vector3___Add_d2be08
                    (fVar19 + 1.0,fVar21,0,param_4,
                     _Method_System_Collections_Generic_List_Vector3__Add___12dd4e0);
          native_System_Collections_Generic_List_Vector3___Add_d2be08
                    (fVar19 + 1.0,fVar21 - fVar18,0,param_4,
                     _Method_System_Collections_Generic_List_Vector3__Add___12dd4e0);
          bVar3 = true;
        }
        if (lStack_b8 == 0) goto LAB_00813df8;
        uVar7 = native_System_String__get_Chars_b03810(lStack_b8,iStack_bc,0);
        if (uVar7 == 10) {
          if (param_4 != 0 && bVar3) {
            if (((*(byte *)(_NGUIText_TypeInfo_12d53c0 + 0x133) >> 2 & 1) != 0) &&
               (*(int *)(_NGUIText_TypeInfo_12d53c0 + 0xe0) == 0)) {
              native_sub_4327ec();
            }
            lVar10 = *(long *)(_NGUIText_TypeInfo_12d53c0 + 0xb8);
            if (*(int *)(lVar10 + 0x2c) != 1) {
              if (((*(byte *)(_NGUIText_TypeInfo_12d53c0 + 0x133) >> 2 & 1) != 0) &&
                 (*(int *)(_NGUIText_TypeInfo_12d53c0 + 0xe0) == 0)) {
                native_sub_4327ec();
                lVar10 = *(long *)(_NGUIText_TypeInfo_12d53c0 + 0xb8);
              }
              native_NGUIText__Align_80bc88(fVar19 - *(float *)(lVar10 + 0x90),param_4,uStack_100,4)
              ;
            }
            param_4 = 0;
          }
          if (param_5 != 0) {
            if (bVar4) {
              native_System_Collections_Generic_List_Vector3___Add_d2be08
                        (fStack_ec,fStack_e8,0,param_5,
                         _Method_System_Collections_Generic_List_Vector3__Add___12dd4e0);
LAB_008137d0:
              native_System_Collections_Generic_List_Vector3___Add_d2be08
                        (fStack_e4,uVar17,0,param_5,
                         _Method_System_Collections_Generic_List_Vector3__Add___12dd4e0);
            }
            else if ((iVar1 <= iStack_bc) && (iStack_bc < param_2)) {
              fVar25 = -fVar22;
              uVar17 = (ulong)(uint)(fVar25 - fVar18);
              native_System_Collections_Generic_List_Vector3___Add_d2be08
                        (fVar19,uVar17,0,param_5,
                         _Method_System_Collections_Generic_List_Vector3__Add___12dd4e0);
              native_System_Collections_Generic_List_Vector3___Add_d2be08
                        (fVar19,fVar25,0,param_5,
                         _Method_System_Collections_Generic_List_Vector3__Add___12dd4e0);
              fStack_e4 = fVar19 + 2.0;
              native_System_Collections_Generic_List_Vector3___Add_d2be08
                        (fStack_e4,fVar25,0,param_5,
                         _Method_System_Collections_Generic_List_Vector3__Add___12dd4e0);
              goto LAB_008137d0;
            }
            if (((*(byte *)(_NGUIText_TypeInfo_12d53c0 + 0x133) >> 2 & 1) != 0) &&
               (*(int *)(_NGUIText_TypeInfo_12d53c0 + 0xe0) == 0)) {
              native_sub_4327ec();
            }
            lVar10 = *(long *)(_NGUIText_TypeInfo_12d53c0 + 0xb8);
            if ((*(int *)(lVar10 + 0x2c) != 1) && (iVar13 < *(int *)(param_5 + 0x18))) {
              if (((*(byte *)(_NGUIText_TypeInfo_12d53c0 + 0x133) >> 2 & 1) != 0) &&
                 (*(int *)(_NGUIText_TypeInfo_12d53c0 + 0xe0) == 0)) {
                native_sub_4327ec();
                lVar10 = *(long *)(_NGUIText_TypeInfo_12d53c0 + 0xb8);
              }
              native_NGUIText__Align_80bc88(fVar19 - *(float *)(lVar10 + 0x90),param_5,iVar13,4);
              iVar13 = *(int *)(param_5 + 0x18);
            }
            bVar4 = false;
          }
          if (((*(byte *)(_NGUIText_TypeInfo_12d53c0 + 0x133) >> 2 & 1) != 0) &&
             (*(int *)(_NGUIText_TypeInfo_12d53c0 + 0xe0) == 0)) {
            native_sub_4327ec();
          }
          fVar19 = 0.0;
          fVar22 = fVar22 + *(float *)(*(long *)(_NGUIText_TypeInfo_12d53c0 + 0xb8) + 0x94);
          uVar14 = 0;
        }
        else {
          if (uVar7 < 0x20) {
            uVar14 = 0;
            goto LAB_00813c3c;
          }
          if (((*(byte *)(_NGUIText_TypeInfo_12d53c0 + 0x133) >> 2 & 1) != 0) &&
             (*(int *)(_NGUIText_TypeInfo_12d53c0 + 0xe0) == 0)) {
            native_sub_4327ec();
          }
          iVar8 = iStack_bc;
          if (*(char *)(*(long *)(_NGUIText_TypeInfo_12d53c0 + 0xb8) + 0x9c) == '\0') {
LAB_00813880:
            cVar6 = acStack_c4[0];
            cVar5 = acStack_c8[0];
            if (((*(byte *)(_NGUIText_TypeInfo_12d53c0 + 0x133) >> 2 & 1) != 0) &&
               (*(int *)(_NGUIText_TypeInfo_12d53c0 + 0xe0) == 0)) {
              native_sub_4327ec();
            }
            fVar21 = (float)native_NGUIText__GetGlyphWidth_809de8
                                      (fVar25,uVar7,uVar14,cVar6 != '\0',cVar5 != '\0');
          }
          else {
            if (((*(byte *)(_NGUIText_TypeInfo_12d53c0 + 0x133) >> 2 & 1) != 0) &&
               (*(int *)(_NGUIText_TypeInfo_12d53c0 + 0xe0) == 0)) {
              native_sub_4327ec();
            }
            lVar10 = native_NGUIText__GetSymbol_809ca4(&lStack_b8,iVar8,iVar2);
            if (lVar10 == 0) goto LAB_00813880;
            iVar8 = native_BMSymbol__get_paddedHeight_dd218c(lVar10,0);
            if (((iVar20 < iVar8) && (iVar20 != 0)) && (*(char *)(lVar10 + 0x21) == '\0')) {
              fVar25 = fVar25 * ((float)iVar20 / (float)iVar8);
            }
            fVar21 = (float)*(int *)(lVar10 + 0x48);
            if (*(char *)(lVar10 + 0x21) == '\0') {
              fVar25 = fVar23 * fVar25 * (float)*(int *)(lVar10 + 0x48);
              dVar16 = (double)func_0x002c9600((double)fVar25,adStack_b0);
              if (0.0 <= fVar25) {
                if (dVar16 == 0.5) {
                  fVar25 = 1.0;
                  goto LAB_00813a00;
                }
                fVar21 = (float)(int)(fVar25 + 0.5);
              }
              else if (dVar16 == -0.5) {
                fVar25 = -1.0;
LAB_00813a00:
                fVar21 = (float)adStack_b0[0];
                if (((long)adStack_b0[0] & 1U) != 0) {
                  fVar21 = (float)adStack_b0[0] + fVar25;
                }
              }
              else {
                fVar21 = (float)(int)(fVar25 + -0.5);
              }
            }
          }
          if (fVar21 == 0.0) goto LAB_00813c3c;
          fVar24 = fVar19 + fVar21;
          fVar26 = -fVar22;
          if (((*(byte *)(_NGUIText_TypeInfo_12d53c0 + 0x133) >> 2 & 1) != 0) &&
             (*(int *)(_NGUIText_TypeInfo_12d53c0 + 0xe0) == 0)) {
            native_sub_4327ec();
          }
          lVar10 = *(long *)(_NGUIText_TypeInfo_12d53c0 + 0xb8);
          uVar9 = (ulong)(uint)(fVar26 - fVar18);
          fVar25 = fVar19;
          if ((float)*(int *)(lVar10 + 0x48) < fVar24 + *(float *)(lVar10 + 0x90)) {
            if (fVar19 == 0.0) {
              return;
            }
            if (param_4 != 0 && bVar3) {
              if (((*(byte *)(_NGUIText_TypeInfo_12d53c0 + 0x133) >> 2 & 1) != 0) &&
                 (*(int *)(_NGUIText_TypeInfo_12d53c0 + 0xe0) == 0)) {
                native_sub_4327ec();
                lVar10 = *(long *)(_NGUIText_TypeInfo_12d53c0 + 0xb8);
              }
              if (*(int *)(lVar10 + 0x2c) != 1) {
                if (((*(byte *)(_NGUIText_TypeInfo_12d53c0 + 0x133) >> 2 & 1) != 0) &&
                   (*(int *)(_NGUIText_TypeInfo_12d53c0 + 0xe0) == 0)) {
                  native_sub_4327ec();
                  lVar10 = *(long *)(_NGUIText_TypeInfo_12d53c0 + 0xb8);
                }
                native_NGUIText__Align_80bc88
                          (fVar19 - *(float *)(lVar10 + 0x90),param_4,uStack_100,4);
              }
              param_4 = 0;
            }
            if (param_5 != 0) {
              if (bVar4) {
                native_System_Collections_Generic_List_Vector3___Add_d2be08
                          (fStack_ec,fStack_e8,0,param_5,
                           _Method_System_Collections_Generic_List_Vector3__Add___12dd4e0);
                uVar9 = uVar17 & 0xffffffff;
LAB_00813aa0:
                native_System_Collections_Generic_List_Vector3___Add_d2be08
                          (fVar15,uVar9,0,param_5,
                           _Method_System_Collections_Generic_List_Vector3__Add___12dd4e0);
              }
              else if ((iVar1 <= iStack_bc) && (iStack_bc < param_2)) {
                native_System_Collections_Generic_List_Vector3___Add_d2be08
                          (fVar19,uVar9,0,param_5,
                           _Method_System_Collections_Generic_List_Vector3__Add___12dd4e0);
                native_System_Collections_Generic_List_Vector3___Add_d2be08
                          (fVar19,fVar26,0,param_5,
                           _Method_System_Collections_Generic_List_Vector3__Add___12dd4e0);
                fVar15 = fVar19 + 2.0;
                native_System_Collections_Generic_List_Vector3___Add_d2be08
                          (fVar15,fVar26,0,param_5,
                           _Method_System_Collections_Generic_List_Vector3__Add___12dd4e0);
                goto LAB_00813aa0;
              }
              if (((*(byte *)(_NGUIText_TypeInfo_12d53c0 + 0x133) >> 2 & 1) != 0) &&
                 (*(int *)(_NGUIText_TypeInfo_12d53c0 + 0xe0) == 0)) {
                native_sub_4327ec();
              }
              lVar10 = *(long *)(_NGUIText_TypeInfo_12d53c0 + 0xb8);
              if ((*(int *)(lVar10 + 0x2c) != 1) && (iVar13 < *(int *)(param_5 + 0x18))) {
                if (((*(byte *)(_NGUIText_TypeInfo_12d53c0 + 0x133) >> 2 & 1) != 0) &&
                   (*(int *)(_NGUIText_TypeInfo_12d53c0 + 0xe0) == 0)) {
                  native_sub_4327ec();
                  lVar10 = *(long *)(_NGUIText_TypeInfo_12d53c0 + 0xb8);
                }
                native_NGUIText__Align_80bc88(fVar19 - *(float *)(lVar10 + 0x90),param_5,iVar13,4);
                iVar13 = *(int *)(param_5 + 0x18);
              }
              bVar4 = false;
            }
            if (((*(byte *)(_NGUIText_TypeInfo_12d53c0 + 0x133) >> 2 & 1) != 0) &&
               (*(int *)(_NGUIText_TypeInfo_12d53c0 + 0xe0) == 0)) {
              native_sub_4327ec();
            }
            fVar25 = fVar19 - fVar19;
            fVar24 = fVar24 - fVar19;
            fVar19 = 0.0;
            fVar15 = *(float *)(*(long *)(_NGUIText_TypeInfo_12d53c0 + 0xb8) + 0x94);
            uVar9 = (ulong)(uint)((fVar26 - fVar18) - fVar15);
            fVar26 = fVar26 - fVar15;
            fVar22 = fVar22 + fVar15;
          }
          if (((*(byte *)(_NGUIText_TypeInfo_12d53c0 + 0x133) >> 2 & 1) != 0) &&
             (*(int *)(_NGUIText_TypeInfo_12d53c0 + 0xe0) == 0)) {
            native_sub_4327ec();
          }
          fVar19 = fVar19 + fVar21 + *(float *)(*(long *)(_NGUIText_TypeInfo_12d53c0 + 0xb8) + 0x90)
          ;
          fVar15 = fVar24;
          uVar14 = uVar7;
          if (param_5 != 0) {
            if ((iStack_bc < iVar1) || (param_2 <= iStack_bc)) {
              if (bVar4) {
                native_System_Collections_Generic_List_Vector3___Add_d2be08
                          (fStack_ec,fStack_e8,0,param_5,
                           _Method_System_Collections_Generic_List_Vector3__Add___12dd4e0);
                native_System_Collections_Generic_List_Vector3___Add_d2be08
                          (fStack_e4,uVar17 & 0xffffffff,0,param_5,
                           _Method_System_Collections_Generic_List_Vector3__Add___12dd4e0);
              }
              bVar4 = false;
            }
            else {
              if (!bVar4) {
                native_System_Collections_Generic_List_Vector3___Add_d2be08
                          (fVar25,uVar9,0,param_5,
                           _Method_System_Collections_Generic_List_Vector3__Add___12dd4e0);
                native_System_Collections_Generic_List_Vector3___Add_d2be08
                          (fVar25,fVar26,0,param_5,
                           _Method_System_Collections_Generic_List_Vector3__Add___12dd4e0);
              }
              bVar4 = true;
            }
          }
        }
      }
      else {
        if (((*(byte *)(_NGUIText_TypeInfo_12d53c0 + 0x133) >> 2 & 1) != 0) &&
           (*(int *)(_NGUIText_TypeInfo_12d53c0 + 0xe0) == 0)) {
          native_sub_4327ec();
          lVar12 = *(long *)(_NGUIText_TypeInfo_12d53c0 + 0xb8);
        }
        uVar11 = native_NGUIText__ParseSymbol_8091a4
                           (lVar10,&iStack_bc,*(undefined8 *)(lVar12 + 0xb8),
                            *(undefined1 *)(lVar12 + 0x84),&iStack_c0,&fStack_dc,acStack_c4,
                            acStack_c8,auStack_cc,auStack_d0,auStack_d4,auStack_d8);
        if ((uVar11 & 1) == 0) goto LAB_0081344c;
        iStack_bc = iStack_bc + -1;
      }
LAB_00813c3c:
      fStack_e4 = fVar15;
      fStack_e8 = fVar26;
      fStack_ec = fVar24;
      iStack_bc = iStack_bc + 1;
      uVar17 = uVar9;
    } while (iStack_bc < iVar2);
  }
  if (param_4 != 0) {
    if (!bVar3) {
      fVar23 = -fVar22;
      native_System_Collections_Generic_List_Vector3___Add_d2be08
                (fVar19 + -1.0,fVar23 - fVar18,0,param_4,
                 _Method_System_Collections_Generic_List_Vector3__Add___12dd4e0);
      native_System_Collections_Generic_List_Vector3___Add_d2be08
                (fVar19 + -1.0,fVar23,0,param_4,
                 _Method_System_Collections_Generic_List_Vector3__Add___12dd4e0);
      native_System_Collections_Generic_List_Vector3___Add_d2be08
                (fVar19 + 1.0,fVar23,0,param_4,
                 _Method_System_Collections_Generic_List_Vector3__Add___12dd4e0);
      native_System_Collections_Generic_List_Vector3___Add_d2be08
                (fVar19 + 1.0,fVar23 - fVar18,0,param_4,
                 _Method_System_Collections_Generic_List_Vector3__Add___12dd4e0);
    }
    if (((*(byte *)(_NGUIText_TypeInfo_12d53c0 + 0x133) >> 2 & 1) != 0) &&
       (*(int *)(_NGUIText_TypeInfo_12d53c0 + 0xe0) == 0)) {
      native_sub_4327ec();
    }
    lVar10 = *(long *)(_NGUIText_TypeInfo_12d53c0 + 0xb8);
    if (*(int *)(lVar10 + 0x2c) != 1) {
      if (((*(byte *)(_NGUIText_TypeInfo_12d53c0 + 0x133) >> 2 & 1) != 0) &&
         (*(int *)(_NGUIText_TypeInfo_12d53c0 + 0xe0) == 0)) {
        native_sub_4327ec();
        lVar10 = *(long *)(_NGUIText_TypeInfo_12d53c0 + 0xb8);
      }
      native_NGUIText__Align_80bc88(fVar19 - *(float *)(lVar10 + 0x90),param_4,uStack_100,4);
    }
  }
  if (param_5 != 0) {
    if (bVar4) {
      native_System_Collections_Generic_List_Vector3___Add_d2be08
                (fStack_ec,fStack_e8,0,param_5,
                 _Method_System_Collections_Generic_List_Vector3__Add___12dd4e0);
LAB_00813d20:
      native_System_Collections_Generic_List_Vector3___Add_d2be08
                (fStack_e4,uVar9,0,param_5,
                 _Method_System_Collections_Generic_List_Vector3__Add___12dd4e0);
    }
    else if ((iVar1 < iStack_bc) && (param_2 == iStack_bc)) {
      fVar22 = -fVar22;
      uVar9 = (ulong)(uint)(fVar22 - fVar18);
      native_System_Collections_Generic_List_Vector3___Add_d2be08
                (fVar19,uVar9,0,param_5,
                 _Method_System_Collections_Generic_List_Vector3__Add___12dd4e0);
      native_System_Collections_Generic_List_Vector3___Add_d2be08
                (fVar19,fVar22,0,param_5,
                 _Method_System_Collections_Generic_List_Vector3__Add___12dd4e0);
      fStack_e4 = fVar19 + 2.0;
      native_System_Collections_Generic_List_Vector3___Add_d2be08
                (fStack_e4,fVar22,0,param_5,
                 _Method_System_Collections_Generic_List_Vector3__Add___12dd4e0);
      goto LAB_00813d20;
    }
    if (((*(byte *)(_NGUIText_TypeInfo_12d53c0 + 0x133) >> 2 & 1) != 0) &&
       (*(int *)(_NGUIText_TypeInfo_12d53c0 + 0xe0) == 0)) {
      native_sub_4327ec();
    }
    lVar10 = *(long *)(_NGUIText_TypeInfo_12d53c0 + 0xb8);
    if ((*(int *)(lVar10 + 0x2c) != 1) && (iVar13 < *(int *)(param_5 + 0x18))) {
      if (((*(byte *)(_NGUIText_TypeInfo_12d53c0 + 0x133) >> 2 & 1) != 0) &&
         (*(int *)(_NGUIText_TypeInfo_12d53c0 + 0xe0) == 0)) {
        native_sub_4327ec();
        lVar10 = *(long *)(_NGUIText_TypeInfo_12d53c0 + 0xb8);
      }
      native_NGUIText__Align_80bc88(fVar19 - *(float *)(lVar10 + 0x90),param_5,iVar13,4);
    }
  }
  if (((*(byte *)(_NGUIText_TypeInfo_12d53c0 + 0x133) >> 2 & 1) != 0) &&
     (*(int *)(_NGUIText_TypeInfo_12d53c0 + 0xe0) == 0)) {
    native_sub_4327ec();
  }
  lVar10 = *(long *)(*(long *)(_NGUIText_TypeInfo_12d53c0 + 0xb8) + 0xb8);
  if (lVar10 != 0) {
    native_BetterList_Color___Clear_ba192c(lVar10,_Method_BetterList_Color__Clear___12d8930);
    return;
  }
LAB_00813df8:
                    /* WARNING: Subroutine does not return */
  native_sub_432810();
}



/* NGUIText$$ReplaceLink @ 0x813dfc
 * bool NGUIText__ReplaceLink (System_String_o** text, int32_t* index, System_String_o* type, System_String_o* prefix, System_String_o* suffix, const MethodInfo* method); */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* NGUIText$$ReplaceLink
   bool NGUIText__ReplaceLink (System_String_o** text, int32_t* index, System_String_o* type,
   System_String_o* prefix, System_String_o* suffix, const MethodInfo* method); */

undefined8
native_NGUIText__ReplaceLink_813dfc
          (long *param_1,int *param_2,long param_3,undefined8 param_4,undefined8 param_5)

{
  short sVar1;
  int iVar2;
  int iVar3;
  int iVar4;
  undefined8 uVar5;
  long lVar6;
  long lVar7;
  ulong uVar8;
  long *plVar9;
  long lVar10;
  long lVar11;
  
LAB_00813ffc:
  if ((bRam00000000013404a8 & 1) == 0) {
    native_sub_43273c(&char___TypeInfo_12d3090);
    native_sub_43273c(&NGUIText_TypeInfo_12d53c0);
    native_sub_43273c(&string___TypeInfo_12d3398);
    native_sub_43273c(&
                      Field__PrivateImplementationDetails__2BB47FF64195EADBDFAF6D62F95A5190EF909363CCA70584BE479841A1C94165_12ea340
                     );
    native_sub_43273c(&StringLiteral___u___url__12f3260);
    native_sub_43273c(&StringLiteral___u__12f34a8);
    native_sub_43273c(&StringLiteral__url__12f3378);
    bRam00000000013404a8 = 1;
  }
  if (*param_2 != -1) {
    if (*param_1 == 0) goto LAB_008143e8;
    iVar2 = native_System_String__IndexOf_b0c054(*param_1,param_3,*param_2,0);
    *param_2 = iVar2;
    if (iVar2 != -1) {
      if (5 < iVar2) {
        iVar2 = iVar2 + -5;
        do {
          if (*param_1 == 0) goto LAB_008143e8;
          sVar1 = native_System_String__get_Chars_b03810(*param_1,iVar2,0);
          if (sVar1 == 0x5b) {
            if (*param_1 == 0) goto LAB_008143e8;
            sVar1 = native_System_String__get_Chars_b03810(*param_1,iVar2 + 1,0);
            if (sVar1 == 0x75) {
              if (*param_1 == 0) goto LAB_008143e8;
              sVar1 = native_System_String__get_Chars_b03810(*param_1,iVar2 + 2,0);
              if (sVar1 == 0x72) {
                if (*param_1 == 0) goto LAB_008143e8;
                sVar1 = native_System_String__get_Chars_b03810(*param_1,iVar2 + 3,0);
                if (sVar1 == 0x6c) {
                  if (*param_1 == 0) goto LAB_008143e8;
                  sVar1 = native_System_String__get_Chars_b03810(*param_1,iVar2 + 4,0);
                  if (sVar1 == 0x3d) goto LAB_00813fc0;
                }
              }
            }
            if (*param_1 == 0) goto LAB_008143e8;
            sVar1 = native_System_String__get_Chars_b03810(*param_1,iVar2 + 1,0);
            if (sVar1 == 0x2f) {
              if (*param_1 == 0) goto LAB_008143e8;
              sVar1 = native_System_String__get_Chars_b03810(*param_1,iVar2 + 2,0);
              if (sVar1 == 0x75) {
                if (*param_1 == 0) goto LAB_008143e8;
                sVar1 = native_System_String__get_Chars_b03810(*param_1,iVar2 + 3,0);
                if (sVar1 == 0x72) {
                  if (*param_1 == 0) goto LAB_008143e8;
                  sVar1 = native_System_String__get_Chars_b03810(*param_1,iVar2 + 4,0);
                  if (sVar1 == 0x6c) break;
                }
              }
            }
          }
          iVar2 = iVar2 + -1;
          if (iVar2 < 0) break;
        } while( true );
      }
      if (param_3 == 0) goto LAB_008143e8;
      iVar3 = *param_2;
      iVar2 = *(int *)(param_3 + 0x10);
      lVar11 = *param_1;
      uVar5 = native_sub_432750(_char___TypeInfo_12d3090,5);
      native_System_Runtime_CompilerServices_RuntimeHelpers__InitializeArray_7c17e0
                (uVar5,
                 _Field__PrivateImplementationDetails__2BB47FF64195EADBDFAF6D62F95A5190EF909363CCA70584BE479841A1C94165_12ea340
                 ,0);
      if (lVar11 == 0) goto LAB_008143e8;
      iVar2 = iVar2 + iVar3;
      iVar3 = native_System_String__IndexOfAny_b0c038(lVar11,uVar5,iVar2,0);
      lVar11 = *param_1;
      if (iVar3 == -1) {
        if (lVar11 == 0) goto LAB_008143e8;
        iVar3 = *(int *)(lVar11 + 0x10);
      }
      lVar6 = native_sub_432750(_char___TypeInfo_12d3090,2);
      if (lVar6 == 0) goto LAB_008143e8;
      if ((*(int *)(lVar6 + 0x18) != 0) &&
         (*(undefined2 *)(lVar6 + 0x20) = 0x2f, *(int *)(lVar6 + 0x18) != 1)) {
        *(undefined2 *)(lVar6 + 0x22) = 0x20;
        if (lVar11 == 0) goto LAB_008143e8;
        iVar4 = native_System_String__IndexOfAny_b0c038(lVar11,lVar6,iVar2,0);
        if ((iVar4 == -1) || (iVar4 - iVar2 == 0)) {
          *param_2 = *(int *)(param_3 + 0x10) + *param_2;
          return 1;
        }
        if (*param_1 == 0) goto LAB_008143e8;
        lVar11 = native_System_String__Substring_b09fac(*param_1,0,*param_2,0);
        if (*param_1 == 0) goto LAB_008143e8;
        lVar6 = native_System_String__Substring_b09fac(*param_1,*param_2,iVar3 - *param_2,0);
        if (*param_1 == 0) goto LAB_008143e8;
        uVar5 = native_System_String__Substring_b0a110(*param_1,iVar3,0);
        if (*param_1 == 0) goto LAB_008143e8;
        lVar7 = native_System_String__Substring_b09fac(*param_1,iVar2,iVar4 - iVar2,0);
        uVar8 = native_System_String__IsNullOrEmpty_b09430(param_4,0);
        if ((uVar8 & 1) == 0) {
          lVar11 = native_System_String__Concat_afbd68(lVar11,param_4,0);
        }
        plVar9 = (long *)native_sub_432750(_string___TypeInfo_12d3398,6);
        if (plVar9 == (long *)0x0) goto LAB_008143e8;
        if ((lVar11 != 0) &&
           (lVar10 = native_sub_4327f8(lVar11,*(undefined8 *)(*plVar9 + 0x40)), lVar10 == 0)) {
LAB_008143f8:
          uVar5 = native_sub_432830();
                    /* WARNING: Subroutine does not return */
          native_sub_4327dc(uVar5,0);
        }
        if ((int)plVar9[3] != 0) {
          plVar9[4] = lVar11;
          native_sub_4326e0(plVar9 + 4,lVar11);
          if (_StringLiteral__url__12f3378 == 0) {
            lVar11 = 0;
          }
          else {
            lVar10 = native_sub_4327f8(_StringLiteral__url__12f3378,*(undefined8 *)(*plVar9 + 0x40))
            ;
            lVar11 = _StringLiteral__url__12f3378;
            if (lVar10 == 0) goto LAB_008143f8;
          }
          if (1 < *(uint *)(plVar9 + 3)) {
            plVar9[5] = lVar11;
            native_sub_4326e0();
            if ((lVar6 != 0) &&
               (lVar11 = native_sub_4327f8(lVar6,*(undefined8 *)(*plVar9 + 0x40)), lVar11 == 0))
            goto LAB_008143f8;
            if (2 < *(uint *)(plVar9 + 3)) {
              plVar9[6] = lVar6;
              native_sub_4326e0(plVar9 + 6,lVar6);
              if (_StringLiteral___u__12f34a8 == 0) {
                lVar11 = 0;
              }
              else {
                lVar6 = native_sub_4327f8(_StringLiteral___u__12f34a8,
                                          *(undefined8 *)(*plVar9 + 0x40));
                lVar11 = _StringLiteral___u__12f34a8;
                if (lVar6 == 0) goto LAB_008143f8;
              }
              if (3 < *(uint *)(plVar9 + 3)) {
                plVar9[7] = lVar11;
                native_sub_4326e0();
                if ((lVar7 != 0) &&
                   (lVar11 = native_sub_4327f8(lVar7,*(undefined8 *)(*plVar9 + 0x40)), lVar11 == 0))
                goto LAB_008143f8;
                if (4 < *(uint *)(plVar9 + 3)) {
                  plVar9[8] = lVar7;
                  native_sub_4326e0(plVar9 + 8,lVar7);
                  if (_StringLiteral___u___url__12f3260 == 0) {
                    lVar11 = 0;
                  }
                  else {
                    lVar6 = native_sub_4327f8(_StringLiteral___u___url__12f3260,
                                              *(undefined8 *)(*plVar9 + 0x40));
                    lVar11 = _StringLiteral___u___url__12f3260;
                    if (lVar6 == 0) goto LAB_008143f8;
                  }
                  if (5 < *(uint *)(plVar9 + 3)) {
                    plVar9[9] = lVar11;
                    native_sub_4326e0();
                    lVar11 = native_System_String__Concat_b0ddf4(plVar9,0);
                    *param_1 = lVar11;
                    native_sub_4326e0(param_1,lVar11);
                    if (*param_1 != 0) {
                      *param_2 = *(int *)(*param_1 + 0x10);
                      uVar8 = native_System_String__IsNullOrEmpty_b09430(param_5,0);
                      if ((uVar8 & 1) == 0) {
                        lVar11 = native_System_String__Concat_afc654(*param_1,param_5,uVar5,0);
                      }
                      else {
                        lVar11 = native_System_String__Concat_afbd68(*param_1,uVar5,0);
                      }
                      *param_1 = lVar11;
                      native_sub_4326e0(param_1,lVar11);
                      return 1;
                    }
LAB_008143e8:
                    /* WARNING: Subroutine does not return */
                    native_sub_432810();
                  }
                }
              }
            }
          }
        }
      }
      uVar5 = native_sub_43283c();
                    /* WARNING: Subroutine does not return */
      native_sub_4327dc(uVar5,0);
    }
  }
  return 0;
LAB_00813fc0:
  if (param_3 == 0) goto LAB_008143e8;
  *param_2 = *(int *)(param_3 + 0x10) + *param_2;
  if (((*(byte *)(_NGUIText_TypeInfo_12d53c0 + 0x133) >> 2 & 1) != 0) &&
     (*(int *)(_NGUIText_TypeInfo_12d53c0 + 0xe0) == 0)) {
    native_sub_4327ec();
  }
  goto LAB_00813ffc;
}



/* NGUIText$$InsertHyperlink @ 0x814404
 * bool NGUIText__InsertHyperlink (System_String_o** text, int32_t* index, System_String_o* keyword, System_String_o* link, System_String_o* prefix, System_String_o* suffix, const MethodInfo* method); */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* NGUIText$$InsertHyperlink
   bool NGUIText__InsertHyperlink (System_String_o** text, int32_t* index, System_String_o* keyword,
   System_String_o* link, System_String_o* prefix, System_String_o* suffix, const MethodInfo*
   method); */

undefined8
native_NGUIText__InsertHyperlink_814404
          (long *param_1,int *param_2,long param_3,undefined8 param_4,undefined8 param_5,
          undefined8 param_6)

{
  short sVar1;
  int iVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  undefined8 uVar5;
  ulong uVar6;
  undefined8 uVar7;
  long lVar8;
  int iVar9;
  
LAB_008145ec:
  if ((bRam00000000013404a9 & 1) == 0) {
    native_sub_43273c(&NGUIText_TypeInfo_12d53c0);
    native_sub_43273c(&StringLiteral___u___url__12f3260);
    native_sub_43273c(&StringLiteral___u__12f34a8);
    native_sub_43273c(&StringLiteral__url__12f3378);
    bRam00000000013404a9 = 1;
  }
  if (*param_1 == 0) {
LAB_00814788:
                    /* WARNING: Subroutine does not return */
    native_sub_432810();
  }
  iVar2 = native_System_String__IndexOf_b0c064(*param_1,param_3,*param_2,1,0);
  if (iVar2 == -1) {
    uVar3 = 0;
  }
  else {
    if (5 < iVar2) {
      iVar9 = iVar2 + -5;
      do {
        if (*param_1 == 0) goto LAB_00814788;
        sVar1 = native_System_String__get_Chars_b03810(*param_1,iVar9,0);
        if (sVar1 == 0x5b) {
          if (*param_1 == 0) goto LAB_00814788;
          sVar1 = native_System_String__get_Chars_b03810(*param_1,iVar9 + 1,0);
          if (sVar1 == 0x75) {
            if (*param_1 == 0) goto LAB_00814788;
            sVar1 = native_System_String__get_Chars_b03810(*param_1,iVar9 + 2,0);
            if (sVar1 == 0x72) {
              if (*param_1 == 0) goto LAB_00814788;
              sVar1 = native_System_String__get_Chars_b03810(*param_1,iVar9 + 3,0);
              if (sVar1 == 0x6c) {
                if (*param_1 == 0) goto LAB_00814788;
                sVar1 = native_System_String__get_Chars_b03810(*param_1,iVar9 + 4,0);
                if (sVar1 == 0x3d) goto LAB_008145b0;
              }
            }
          }
          if (*param_1 == 0) goto LAB_00814788;
          sVar1 = native_System_String__get_Chars_b03810(*param_1,iVar9 + 1,0);
          if (sVar1 == 0x2f) {
            if (*param_1 == 0) goto LAB_00814788;
            sVar1 = native_System_String__get_Chars_b03810(*param_1,iVar9 + 2,0);
            if (sVar1 == 0x75) {
              if (*param_1 == 0) goto LAB_00814788;
              sVar1 = native_System_String__get_Chars_b03810(*param_1,iVar9 + 3,0);
              if (sVar1 == 0x72) {
                if (*param_1 == 0) goto LAB_00814788;
                sVar1 = native_System_String__get_Chars_b03810(*param_1,iVar9 + 4,0);
                if (sVar1 == 0x6c) break;
              }
            }
          }
        }
        iVar9 = iVar9 + -1;
        if (iVar9 < 0) break;
      } while( true );
    }
    if (*param_1 == 0) goto LAB_00814788;
    uVar3 = native_System_String__Substring_b09fac(*param_1,0,iVar2,0);
    uVar4 = native_System_String__Concat_afc654
                      (_StringLiteral__url__12f3378,param_4,_StringLiteral___u__12f34a8,0);
    if ((param_3 == 0) || (*param_1 == 0)) goto LAB_00814788;
    uVar5 = native_System_String__Substring_b09fac(*param_1,iVar2,*(undefined4 *)(param_3 + 0x10),0)
    ;
    uVar6 = native_System_String__IsNullOrEmpty_b09430(param_5,0);
    if ((uVar6 & 1) == 0) {
      uVar5 = native_System_String__Concat_afbd68(param_5,uVar5,0);
    }
    uVar6 = native_System_String__IsNullOrEmpty_b09430(param_6,0);
    if ((uVar6 & 1) == 0) {
      uVar5 = native_System_String__Concat_afbd68(uVar5,param_6,0);
    }
    if (*param_1 == 0) goto LAB_00814788;
    uVar7 = native_System_String__Substring_b0a110(*param_1,*(int *)(param_3 + 0x10) + iVar2,0);
    lVar8 = native_System_String__Concat_afcabc
                      (uVar3,uVar4,uVar5,_StringLiteral___u___url__12f3260,0);
    *param_1 = lVar8;
    native_sub_4326e0(param_1,lVar8);
    if (*param_1 == 0) goto LAB_00814788;
    *param_2 = *(int *)(*param_1 + 0x10);
    lVar8 = native_System_String__Concat_afbd68(*param_1,uVar7,0);
    *param_1 = lVar8;
    native_sub_4326e0(param_1,lVar8);
    uVar3 = 1;
  }
  return uVar3;
LAB_008145b0:
  if (param_3 == 0) goto LAB_00814788;
  *param_2 = *(int *)(param_3 + 0x10) + iVar2;
  if (((*(byte *)(_NGUIText_TypeInfo_12d53c0 + 0x133) >> 2 & 1) != 0) &&
     (*(int *)(_NGUIText_TypeInfo_12d53c0 + 0xe0) == 0)) {
    native_sub_4327ec();
  }
  goto LAB_008145ec;
}



/* NGUIText$$ReplaceLinks @ 0x81478c
 * void NGUIText__ReplaceLinks (System_String_o** text, System_String_o* prefix, System_String_o* suffix, const MethodInfo* method); */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* NGUIText$$ReplaceLinks
   void NGUIText__ReplaceLinks (System_String_o** text, System_String_o* prefix, System_String_o*
   suffix, const MethodInfo* method); */

void native_NGUIText__ReplaceLinks_81478c(long *param_1,undefined8 param_2,undefined8 param_3)

{
  ulong uVar1;
  undefined8 uStack_38;
  
  if ((bRam00000000013404aa & 1) == 0) {
    native_sub_43273c(&NGUIText_TypeInfo_12d53c0);
    native_sub_43273c(&StringLiteral_http____12f4b28);
    native_sub_43273c(&StringLiteral_https____12f4bf8);
    bRam00000000013404aa = 1;
  }
  uStack_38 = 0;
  do {
    if (*param_1 == 0) goto LAB_008148b0;
    if (*(int *)(*param_1 + 0x10) <= uStack_38._4_4_) break;
    if (((*(byte *)(_NGUIText_TypeInfo_12d53c0 + 0x133) >> 2 & 1) != 0) &&
       (*(int *)(_NGUIText_TypeInfo_12d53c0 + 0xe0) == 0)) {
      native_sub_4327ec();
    }
    uVar1 = native_NGUIText__ReplaceLink_813dfc
                      (param_1,(long)&uStack_38 + 4,_StringLiteral_http____12f4b28,param_2,param_3);
  } while ((uVar1 & 1) != 0);
  uStack_38 = uStack_38 & 0xffffffff00000000;
  while (*param_1 != 0) {
    if (*(int *)(*param_1 + 0x10) <= (int)uStack_38) {
      return;
    }
    if (((*(byte *)(_NGUIText_TypeInfo_12d53c0 + 0x133) >> 2 & 1) != 0) &&
       (*(int *)(_NGUIText_TypeInfo_12d53c0 + 0xe0) == 0)) {
      native_sub_4327ec();
    }
    uVar1 = native_NGUIText__ReplaceLink_813dfc
                      (param_1,&uStack_38,_StringLiteral_https____12f4bf8,param_2,param_3);
    if ((uVar1 & 1) == 0) {
      return;
    }
  }
LAB_008148b0:
                    /* WARNING: Subroutine does not return */
  native_sub_432810();
}



/* NGUIText$$.cctor @ 0x8148b4
 * void NGUIText___cctor (const MethodInfo* method); */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* NGUIText$$.cctor
   void NGUIText___cctor (const MethodInfo* method); */

void native_NGUIText___cctor_8148b4
               (undefined1 param_1 [16],undefined4 param_2,undefined4 param_3,undefined4 param_4)

{
  undefined8 uVar1;
  undefined8 *puVar2;
  long lVar3;
  long lVar4;
  undefined4 uVar5;
  undefined8 uStack_40;
  undefined8 uStack_38;
  
  if ((bRam00000000013404ab & 1) == 0) {
    native_sub_43273c(&Method_BetterList_float___ctor___12d8940);
    native_sub_43273c(&Method_BetterList_Color___ctor___12d8920);
    native_sub_43273c(&BetterList_float__TypeInfo_12d2118);
    native_sub_43273c(&BetterList_Color__TypeInfo_12d2110);
    native_sub_43273c(&NGUIText_GlyphInfo_TypeInfo_12d7480);
    native_sub_43273c(&NGUIText_TypeInfo_12d53c0);
    native_sub_43273c(&float___TypeInfo_12d3388);
    native_sub_43273c(&
                      Field__PrivateImplementationDetails__07F953EB3DB1131FBDB6AA2748FD8EC70F792C02BF125F3577B8988B69AF80B0_12ea338
                     );
    bRam00000000013404ab = 1;
  }
  uVar1 = native_sub_432808(_NGUIText_GlyphInfo_TypeInfo_12d7480);
  native_NGUIText_GlyphInfo___ctor_54cdf4(uVar1,0);
  puVar2 = (undefined8 *)(*(long *)(_NGUIText_TypeInfo_12d53c0 + 0xb8) + 0x10);
  *puVar2 = uVar1;
  native_sub_4326e0(puVar2,uVar1);
  lVar3 = _NGUIText_TypeInfo_12d53c0;
  *(undefined4 *)(*(long *)(_NGUIText_TypeInfo_12d53c0 + 0xb8) + 0x18) = 0;
  *(undefined4 *)(*(long *)(lVar3 + 0xb8) + 0x1c) = 0x10;
  *(undefined4 *)(*(long *)(lVar3 + 0xb8) + 0x20) = 0x3f800000;
  *(undefined4 *)(*(long *)(lVar3 + 0xb8) + 0x24) = 0x3f800000;
  *(undefined4 *)(*(long *)(lVar3 + 0xb8) + 0x28) = 0;
  *(undefined4 *)(*(long *)(lVar3 + 0xb8) + 0x2c) = 1;
  uVar5 = native_UnityEngine_Color__get_white_8d9e10(0);
  lVar3 = _NGUIText_TypeInfo_12d53c0;
  lVar4 = *(long *)(_NGUIText_TypeInfo_12d53c0 + 0xb8);
  *(undefined4 *)(lVar4 + 0x30) = uVar5;
  *(undefined4 *)(lVar4 + 0x34) = param_2;
  *(undefined4 *)(lVar4 + 0x38) = param_3;
  *(undefined4 *)(lVar4 + 0x3c) = param_4;
  *(undefined4 *)(*(long *)(lVar3 + 0xb8) + 0x40) = 1000000;
  *(undefined4 *)(*(long *)(lVar3 + 0xb8) + 0x44) = 1000000;
  *(undefined4 *)(*(long *)(lVar3 + 0xb8) + 0x48) = 1000000;
  *(undefined4 *)(*(long *)(lVar3 + 0xb8) + 0x4c) = 1000000;
  *(undefined4 *)(*(long *)(lVar3 + 0xb8) + 0x50) = 0;
  *(undefined1 *)(*(long *)(lVar3 + 0xb8) + 0x54) = 0;
  uVar5 = native_UnityEngine_Color__get_white_8d9e10(0);
  lVar3 = *(long *)(_NGUIText_TypeInfo_12d53c0 + 0xb8);
  *(undefined4 *)(lVar3 + 0x58) = uVar5;
  *(undefined4 *)(lVar3 + 0x5c) = param_2;
  *(undefined4 *)(lVar3 + 0x60) = param_3;
  *(undefined4 *)(lVar3 + 100) = param_4;
  uVar5 = native_UnityEngine_Color__get_white_8d9e10(0);
  lVar3 = _NGUIText_TypeInfo_12d53c0;
  lVar4 = *(long *)(_NGUIText_TypeInfo_12d53c0 + 0xb8);
  *(undefined4 *)(lVar4 + 0x68) = uVar5;
  *(undefined4 *)(lVar4 + 0x6c) = param_2;
  *(undefined4 *)(lVar4 + 0x70) = param_3;
  *(undefined4 *)(lVar4 + 0x74) = param_4;
  *(undefined1 *)(*(long *)(lVar3 + 0xb8) + 0x78) = 0;
  *(undefined4 *)(*(long *)(lVar3 + 0xb8) + 0x7c) = 0;
  *(undefined4 *)(*(long *)(lVar3 + 0xb8) + 0x80) = 0;
  *(undefined1 *)(*(long *)(lVar3 + 0xb8) + 0x84) = 0;
  *(undefined4 *)(*(long *)(lVar3 + 0xb8) + 0x8c) = 0;
  *(undefined4 *)(*(long *)(lVar3 + 0xb8) + 0x90) = 0;
  *(undefined4 *)(*(long *)(lVar3 + 0xb8) + 0x94) = 0;
  *(undefined4 *)(*(long *)(lVar3 + 0xb8) + 0x98) = 0;
  *(undefined1 *)(*(long *)(lVar3 + 0xb8) + 0x9c) = 0;
  uStack_40 = 0;
  uStack_38 = 0;
  native_UnityEngine_Color___ctor_8d980c(0,0,0,0,&uStack_40,0);
  lVar3 = *(long *)(_NGUIText_TypeInfo_12d53c0 + 0xb8);
  *(undefined8 *)(lVar3 + 0xb0) = uStack_38;
  *(undefined8 *)(lVar3 + 0xa8) = uStack_40;
  uVar1 = native_sub_432808(_BetterList_Color__TypeInfo_12d2110);
  native_BetterList_Color____ctor_ba21b8(uVar1,_Method_BetterList_Color___ctor___12d8920);
  puVar2 = (undefined8 *)(*(long *)(_NGUIText_TypeInfo_12d53c0 + 0xb8) + 0xb8);
  *puVar2 = uVar1;
  native_sub_4326e0(puVar2,uVar1);
  *(undefined4 *)(*(long *)(_NGUIText_TypeInfo_12d53c0 + 0xb8) + 0xc0) = 0x3f800000;
  uVar1 = native_sub_432808(_BetterList_float__TypeInfo_12d2118);
  native_BetterList_float____ctor_ba37d0(uVar1,_Method_BetterList_float___ctor___12d8940);
  puVar2 = (undefined8 *)(*(long *)(_NGUIText_TypeInfo_12d53c0 + 0xb8) + 0xf8);
  *puVar2 = uVar1;
  native_sub_4326e0(puVar2,uVar1);
  uVar1 = native_sub_432750(_float___TypeInfo_12d3388,8);
  native_System_Runtime_CompilerServices_RuntimeHelpers__InitializeArray_7c17e0
            (uVar1,
             _Field__PrivateImplementationDetails__07F953EB3DB1131FBDB6AA2748FD8EC70F792C02BF125F3577B8988B69AF80B0_12ea338
             ,0);
  lVar3 = *(long *)(_NGUIText_TypeInfo_12d53c0 + 0xb8);
  *(undefined8 *)(lVar3 + 0x128) = uVar1;
  native_sub_4326e0(lVar3 + 0x128,uVar1);
  return;
}


