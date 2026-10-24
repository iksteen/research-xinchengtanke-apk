/* ARM64 IL2CPP native pseudocode from Ghidra.
 * Recovered implementation, not original C# source.
 * Function boundaries follow the IL2CPP method address table. */


/* UISpriteCollection$$get_mainTexture @ 0xc37af4
 * UnityEngine_Texture_o* UISpriteCollection__get_mainTexture (UISpriteCollection_o* __this, const MethodInfo* method); */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* UISpriteCollection$$get_mainTexture
   UnityEngine_Texture_o* UISpriteCollection__get_mainTexture (UISpriteCollection_o* __this, const
   MethodInfo* method); */

undefined8 native_UISpriteCollection__get_mainTexture_c37af4(undefined8 param_1)

{
  int iVar1;
  undefined4 uVar2;
  undefined8 uVar3;
  long *plVar4;
  undefined8 *puVar5;
  long lVar6;
  ulong uVar7;
  int *piVar8;
  
  if ((bRam0000000001342766 & 1) == 0) {
    native_sub_43273c(&INGUIAtlas_TypeInfo_12d4c68);
    native_sub_43273c(&UnityEngine_Object_TypeInfo_12d54e0);
    bRam0000000001342766 = 1;
  }
  plVar4 = (long *)native_UISpriteCollection__get_atlas_c37c0c(param_1);
  lVar6 = 0;
  if (plVar4 != (long *)0x0) {
    lVar6 = *plVar4;
    if ((ulong)*(ushort *)(lVar6 + 0x12a) != 0) {
      uVar7 = 0;
      piVar8 = (int *)(*(long *)(lVar6 + 0xb0) + 8);
      do {
        if (*(long *)(piVar8 + -2) == _INGUIAtlas_TypeInfo_12d4c68) {
          puVar5 = (undefined8 *)(lVar6 + (long)*piVar8 * 0x10 + 0x138);
          goto LAB_00c37b9c;
        }
        uVar7 = uVar7 + 1;
        piVar8 = piVar8 + 4;
      } while (uVar7 < *(ushort *)(lVar6 + 0x12a));
    }
    puVar5 = (undefined8 *)native_sub_3c9b34(plVar4,_INGUIAtlas_TypeInfo_12d4c68,0);
LAB_00c37b9c:
    lVar6 = (*(code *)*puVar5)(plVar4,puVar5[1]);
  }
  if (((*(byte *)(_UnityEngine_Object_TypeInfo_12d54e0 + 0x133) >> 2 & 1) != 0) &&
     (*(int *)(_UnityEngine_Object_TypeInfo_12d54e0 + 0xe0) == 0)) {
    native_sub_4327ec();
  }
  uVar7 = native_UnityEngine_Object__op_Inequality_8d76fc(lVar6,0,0);
  if ((uVar7 & 1) == 0) {
    return 0;
  }
  if (lVar6 == 0) {
                    /* WARNING: Subroutine does not return */
    native_sub_432810();
  }
  if ((bRam0000000001340db2 & 1) == 0) {
    native_sub_43273c(&StringLiteral__MainTex_12f3608,0);
    bRam0000000001340db2 = 1;
  }
  if (pcRam0000000001340db8 == (code *)0x0) {
    pcRam0000000001340db8 = (code *)native_sub_4326f0(&UNK_00e2e607);
  }
  iVar1 = (*pcRam0000000001340db8)(lVar6,0x80);
  if (-1 < iVar1) {
    if (pcRam0000000001340e28 == (code *)0x0) {
      pcRam0000000001340e28 = (code *)native_sub_4326f0(&UNK_00e2e907);
    }
                    /* WARNING: Could not recover jumptable at 0x008e33d0. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    uVar3 = (*pcRam0000000001340e28)(lVar6,iVar1);
    return uVar3;
  }
  uVar2 = native_UnityEngine_Shader__PropertyToID_76b308(_StringLiteral__MainTex_12f3608,0);
  if (pcRam0000000001340e28 == (code *)0x0) {
    pcRam0000000001340e28 = (code *)native_sub_4326f0(&UNK_00e2e907);
  }
                    /* WARNING: Could not recover jumptable at 0x008e349c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  uVar3 = (*pcRam0000000001340e28)(lVar6,uVar2);
  return uVar3;
}



/* UISpriteCollection$$set_mainTexture @ 0xc37c58
 * void UISpriteCollection__set_mainTexture (UISpriteCollection_o* __this, UnityEngine_Texture_o* value, const MethodInfo* method); */

/* UISpriteCollection$$set_mainTexture
   void UISpriteCollection__set_mainTexture (UISpriteCollection_o* __this, UnityEngine_Texture_o*
   value, const MethodInfo* method); */

void native_UISpriteCollection__set_mainTexture_c37c58(undefined8 param_1)

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



/* UISpriteCollection$$get_material @ 0xc37c60
 * UnityEngine_Material_o* UISpriteCollection__get_material (UISpriteCollection_o* __this, const MethodInfo* method); */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* UISpriteCollection$$get_material
   UnityEngine_Material_o* UISpriteCollection__get_material (UISpriteCollection_o* __this, const
   MethodInfo* method); */

undefined8 native_UISpriteCollection__get_material_c37c60(long param_1)

{
  ulong uVar1;
  long *plVar2;
  undefined8 *puVar3;
  long lVar4;
  int *piVar5;
  undefined8 uVar6;
  
  if ((bRam0000000001342767 & 1) == 0) {
    native_sub_43273c(&INGUIAtlas_TypeInfo_12d4c68);
    native_sub_43273c(&UnityEngine_Object_TypeInfo_12d54e0);
    bRam0000000001342767 = 1;
  }
  uVar6 = *(undefined8 *)(param_1 + 0xb8);
  if (((*(byte *)(_UnityEngine_Object_TypeInfo_12d54e0 + 0x133) >> 2 & 1) != 0) &&
     (*(int *)(_UnityEngine_Object_TypeInfo_12d54e0 + 0xe0) == 0)) {
    native_sub_4327ec();
  }
  uVar1 = native_UnityEngine_Object__op_Inequality_8d76fc(uVar6,0,0);
  if ((uVar1 & 1) == 0) {
    plVar2 = (long *)native_UISpriteCollection__get_atlas_c37c0c(param_1);
    if (plVar2 != (long *)0x0) {
      lVar4 = *plVar2;
      if ((ulong)*(ushort *)(lVar4 + 0x12a) != 0) {
        uVar1 = 0;
        piVar5 = (int *)(*(long *)(lVar4 + 0xb0) + 8);
        do {
          if (*(long *)(piVar5 + -2) == _INGUIAtlas_TypeInfo_12d4c68) {
            puVar3 = (undefined8 *)(lVar4 + (long)*piVar5 * 0x10 + 0x138);
            goto LAB_00c37d54;
          }
          uVar1 = uVar1 + 1;
          piVar5 = piVar5 + 4;
        } while (uVar1 < *(ushort *)(lVar4 + 0x12a));
      }
      puVar3 = (undefined8 *)native_sub_3c9b34(plVar2,_INGUIAtlas_TypeInfo_12d4c68,0);
LAB_00c37d54:
                    /* WARNING: Could not recover jumptable at 0x00c37d64. Too many branches */
                    /* WARNING: Treating indirect jump as call */
      uVar6 = (*(code *)*puVar3)(plVar2,puVar3[1]);
      return uVar6;
    }
    uVar6 = 0;
  }
  return uVar6;
}



/* UISpriteCollection$$set_material @ 0xc37d68
 * void UISpriteCollection__set_material (UISpriteCollection_o* __this, UnityEngine_Material_o* value, const MethodInfo* method); */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* UISpriteCollection$$set_material
   void UISpriteCollection__set_material (UISpriteCollection_o* __this, UnityEngine_Material_o*
   value, const MethodInfo* method); */

void native_UISpriteCollection__set_material_c37d68(long *param_1,long param_2)

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



/* UISpriteCollection$$get_atlas @ 0xc37c0c
 * INGUIAtlas_o* UISpriteCollection__get_atlas (UISpriteCollection_o* __this, const MethodInfo* method); */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* UISpriteCollection$$get_atlas
   INGUIAtlas_o* UISpriteCollection__get_atlas (UISpriteCollection_o* __this, const MethodInfo*
   method); */

long * native_UISpriteCollection__get_atlas_c37c0c(long param_1)

{
  long lVar1;
  int iVar2;
  ulong uVar3;
  long *plVar4;
  long lVar5;
  long *plStack_28;
  
  if ((bRam0000000001342768 & 1) == 0) {
    native_sub_43273c(&INGUIAtlas_TypeInfo_12d4c68);
    bRam0000000001342768 = 1;
  }
  lVar1 = _INGUIAtlas_TypeInfo_12d4c68;
  plVar4 = *(long **)(param_1 + 0x200);
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



/* UISpriteCollection$$set_atlas @ 0xc37d70
 * void UISpriteCollection__set_atlas (UISpriteCollection_o* __this, INGUIAtlas_o* value, const MethodInfo* method); */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* UISpriteCollection$$set_atlas
   void UISpriteCollection__set_atlas (UISpriteCollection_o* __this, INGUIAtlas_o* value, const
   MethodInfo* method); */

void native_UISpriteCollection__set_atlas_c37d70(long *param_1,long *param_2)

{
  long *plVar1;
  
  if ((bRam0000000001342769 & 1) == 0) {
    native_sub_43273c(&
                      Method_System_Collections_Generic_Dictionary_object__UISpriteCollection_Sprite__Clear___12d9630
                     );
    native_sub_43273c(&INGUIAtlas_TypeInfo_12d4c68);
    native_sub_43273c(&UnityEngine_Object_TypeInfo_12d54e0);
    bRam0000000001342769 = 1;
  }
  plVar1 = (long *)native_sub_4327f8(param_1[0x40],_INGUIAtlas_TypeInfo_12d4c68);
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
      goto LAB_00c37e3c;
    }
  }
  param_2 = (long *)0x0;
LAB_00c37e3c:
  param_1[0x40] = (long)param_2;
  native_sub_4326e0(param_1 + 0x40);
  if (param_1[0x41] == 0) {
                    /* WARNING: Subroutine does not return */
    native_sub_432810();
  }
  native_System_Collections_Generic_Dictionary_object__UISpriteCollection_Sprite___Clear_ce3c78
            (param_1[0x41],
             _Method_System_Collections_Generic_Dictionary_object__UISpriteCollection_Sprite__Clear___12d9630
            );
                    /* WARNING: Could not recover jumptable at 0x00c37e7c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(*param_1 + 0x378))(param_1,*(undefined8 *)(*param_1 + 0x380));
  return;
}



/* UISpriteCollection$$get_pixelSize @ 0xc37e84
 * float UISpriteCollection__get_pixelSize (UISpriteCollection_o* __this, const MethodInfo* method); */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* UISpriteCollection$$get_pixelSize
   float UISpriteCollection__get_pixelSize (UISpriteCollection_o* __this, const MethodInfo* method);
    */

undefined1  [16] native_UISpriteCollection__get_pixelSize_c37e84(undefined8 param_1)

{
  long *plVar1;
  undefined8 *puVar2;
  long lVar3;
  ulong uVar4;
  int *piVar5;
  undefined4 extraout_s0;
  undefined4 extraout_var;
  undefined8 extraout_var_00;
  undefined1 auVar6 [16];
  
  if ((bRam000000000134276a & 1) == 0) {
    native_sub_43273c(&INGUIAtlas_TypeInfo_12d4c68);
    bRam000000000134276a = 1;
  }
  plVar1 = (long *)native_UISpriteCollection__get_atlas_c37c0c(param_1);
  if (plVar1 == (long *)0x0) {
    return ZEXT816(0x3f800000);
  }
  lVar3 = *plVar1;
  if ((ulong)*(ushort *)(lVar3 + 0x12a) != 0) {
    uVar4 = 0;
    piVar5 = (int *)(*(long *)(lVar3 + 0xb0) + 8);
    do {
      if (*(long *)(piVar5 + -2) == _INGUIAtlas_TypeInfo_12d4c68) {
        puVar2 = (undefined8 *)(lVar3 + (long)(*piVar5 + 5) * 0x10 + 0x138);
        goto LAB_00c37f34;
      }
      uVar4 = uVar4 + 1;
      piVar5 = piVar5 + 4;
    } while (uVar4 < *(ushort *)(lVar3 + 0x12a));
  }
  puVar2 = (undefined8 *)native_sub_3c9b34(plVar1,_INGUIAtlas_TypeInfo_12d4c68,5);
LAB_00c37f34:
                    /* WARNING: Could not recover jumptable at 0x00c37f44. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)*puVar2)(plVar1,puVar2[1]);
  auVar6._4_4_ = extraout_var;
  auVar6._0_4_ = extraout_s0;
  auVar6._8_8_ = extraout_var_00;
  return auVar6;
}



/* UISpriteCollection$$get_premultipliedAlpha @ 0xc37f48
 * bool UISpriteCollection__get_premultipliedAlpha (UISpriteCollection_o* __this, const MethodInfo* method); */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* UISpriteCollection$$get_premultipliedAlpha
   bool UISpriteCollection__get_premultipliedAlpha (UISpriteCollection_o* __this, const MethodInfo*
   method); */

void native_UISpriteCollection__get_premultipliedAlpha_c37f48(undefined8 param_1)

{
  long *plVar1;
  undefined8 *puVar2;
  long lVar3;
  ulong uVar4;
  int *piVar5;
  
  if ((bRam000000000134276b & 1) == 0) {
    native_sub_43273c(&INGUIAtlas_TypeInfo_12d4c68);
    bRam000000000134276b = 1;
  }
  plVar1 = (long *)native_UISpriteCollection__get_atlas_c37c0c(param_1);
  if (plVar1 == (long *)0x0) {
    return;
  }
  lVar3 = *plVar1;
  if ((ulong)*(ushort *)(lVar3 + 0x12a) != 0) {
    uVar4 = 0;
    piVar5 = (int *)(*(long *)(lVar3 + 0xb0) + 8);
    do {
      if (*(long *)(piVar5 + -2) == _INGUIAtlas_TypeInfo_12d4c68) {
        puVar2 = (undefined8 *)(lVar3 + (long)(*piVar5 + 7) * 0x10 + 0x138);
        goto LAB_00c37ff4;
      }
      uVar4 = uVar4 + 1;
      piVar5 = piVar5 + 4;
    } while (uVar4 < *(ushort *)(lVar3 + 0x12a));
  }
  puVar2 = (undefined8 *)native_sub_3c9b34(plVar1,_INGUIAtlas_TypeInfo_12d4c68,7);
LAB_00c37ff4:
                    /* WARNING: Could not recover jumptable at 0x00c38004. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)*puVar2)(plVar1,puVar2[1]);
  return;
}



/* UISpriteCollection$$get_border @ 0xc38008
 * UnityEngine_Vector4_o UISpriteCollection__get_border (UISpriteCollection_o* __this, const MethodInfo* method); */

/* UISpriteCollection$$get_border
   UnityEngine_Vector4_o UISpriteCollection__get_border (UISpriteCollection_o* __this, const
   MethodInfo* method); */

undefined1  [16] native_UISpriteCollection__get_border_c38008(long param_1)

{
  long lVar1;
  undefined4 extraout_s0;
  undefined4 uVar3;
  undefined4 extraout_var;
  undefined8 uVar4;
  undefined8 extraout_var_00;
  undefined1 auVar2 [16];
  undefined8 uStack_20;
  undefined8 uStack_18;
  
  lVar1 = *(long *)(param_1 + 0x210);
  if (lVar1 == 0) {
    native_UIWidget__get_border_94ccfc(param_1,0);
    uStack_20._0_4_ = extraout_s0;
    uVar3 = extraout_var;
    uVar4 = extraout_var_00;
  }
  else {
    uStack_20 = 0;
    uStack_18 = 0;
    native_UnityEngine_Vector4___ctor_776f24
              ((float)*(int *)(lVar1 + 0x28),(float)*(int *)(lVar1 + 0x34),
               (float)*(int *)(lVar1 + 0x2c),(float)*(int *)(lVar1 + 0x30),&uStack_20,0);
    uVar3 = 0;
    uVar4 = 0;
  }
  auVar2._4_4_ = uVar3;
  auVar2._0_4_ = (undefined4)uStack_20;
  auVar2._8_8_ = uVar4;
  return auVar2;
}



/* UISpriteCollection$$get_padding @ 0xc3806c
 * UnityEngine_Vector4_o UISpriteCollection__get_padding (UISpriteCollection_o* __this, const MethodInfo* method); */

/* UISpriteCollection$$get_padding
   UnityEngine_Vector4_o UISpriteCollection__get_padding (UISpriteCollection_o* __this, const
   MethodInfo* method); */

float native_UISpriteCollection__get_padding_c3806c(long param_1)

{
  undefined8 uStack_30;
  undefined8 uStack_28;
  
  uStack_28 = 0;
  uStack_30 = 0;
  native_UnityEngine_Vector4___ctor_776f24(0,0,0,0,&uStack_30,0);
  if (*(long *)(param_1 + 0x210) == 0) {
  }
  else {
    uStack_30._0_4_ = (float)*(int *)(*(long *)(param_1 + 0x210) + 0x38);
  }
  return (float)uStack_30;
}



/* UISpriteCollection$$OnFill @ 0xc380e8
 * void UISpriteCollection__OnFill (UISpriteCollection_o* __this, System_Collections_Generic_List_Vector3__o* verts, System_Collections_Generic_List_Vector2__o* uvs, System_Collections_Generic_List_Color__o* cols, const MethodInfo* method); */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* UISpriteCollection$$OnFill
   void UISpriteCollection__OnFill (UISpriteCollection_o* __this,
   System_Collections_Generic_List_Vector3__o* verts, System_Collections_Generic_List_Vector2__o*
   uvs, System_Collections_Generic_List_Color__o* cols, const MethodInfo* method); */

void native_UISpriteCollection__OnFill_c380e8
               (long *param_1,long param_2,undefined8 param_3,undefined8 param_4)

{
  long *plVar1;
  long lVar2;
  undefined4 uVar3;
  uint uVar4;
  undefined4 uVar5;
  undefined4 uVar6;
  long *plVar7;
  ulong uVar8;
  long lVar9;
  long lVar10;
  long lVar11;
  uint uVar12;
  undefined4 uVar13;
  float fVar14;
  undefined4 uVar15;
  undefined8 uVar16;
  undefined4 uVar17;
  undefined8 uVar18;
  float fVar19;
  undefined1 auStack_238 [88];
  undefined8 uStack_1e0;
  undefined8 uStack_1d8;
  undefined8 uStack_1d0;
  undefined8 uStack_1c8;
  ulong auStack_1c0 [4];
  undefined8 uStack_1a0;
  undefined8 uStack_198;
  long lStack_190;
  undefined8 uStack_188;
  undefined8 uStack_180;
  undefined8 uStack_178;
  undefined8 uStack_170;
  undefined8 uStack_168;
  ulong uStack_160;
  undefined8 uStack_150;
  long lStack_148;
  undefined8 uStack_140;
  undefined8 uStack_138;
  undefined8 uStack_130;
  undefined8 uStack_128;
  ulong uStack_120;
  ulong uStack_118;
  undefined1 auStack_108 [16];
  undefined8 uStack_f8;
  long lStack_f0;
  undefined8 uStack_e8;
  undefined8 uStack_e0;
  undefined8 uStack_d8;
  undefined8 uStack_d0;
  ulong uStack_c8;
  ulong uStack_c0;
  
  if ((bRam000000000134276c & 1) == 0) {
    native_sub_43273c(&
                      Method_System_Collections_Generic_Dictionary_object__UISpriteCollection_Sprite__GetEnumerator___12d9648
                     );
    native_sub_43273c(&
                      Method_System_Collections_Generic_Dictionary_Enumerator_object__UISpriteCollection_Sprite__Dispose___12dacd8
                     );
    native_sub_43273c(&
                      Method_System_Collections_Generic_Dictionary_Enumerator_object__UISpriteCollection_Sprite__MoveNext___12dace0
                     );
    native_sub_43273c(&
                      Method_System_Collections_Generic_Dictionary_Enumerator_object__UISpriteCollection_Sprite__get_Current___12dad10
                     );
    native_sub_43273c(&
                      Method_System_Collections_Generic_KeyValuePair_object__UISpriteCollection_Sprite__get_Value___12dbef0
                     );
    native_sub_43273c(&Method_System_Collections_Generic_List_Vector3__get_Count___12dd500);
    native_sub_43273c(&Method_System_Collections_Generic_List_Vector3__get_Item___12dd508);
    native_sub_43273c(&Method_System_Collections_Generic_List_Vector3__set_Item___12dd510);
    native_sub_43273c(&NGUIMath_TypeInfo_12d53b8);
    native_sub_43273c(&NGUITools_TypeInfo_12d53c8);
    native_sub_43273c(&UnityEngine_Object_TypeInfo_12d54e0);
    bRam000000000134276c = 1;
  }
  func_0x002c8be0(auStack_108,0,0x58);
  uStack_160 = 0;
  uStack_1a0 = 0;
  uStack_198 = 0;
  auStack_1c0[2] = 0;
  auStack_1c0[3] = 0;
  auStack_1c0[0] = 0;
  auStack_1c0[1] = 0;
  uStack_1d0 = 0;
  uStack_1c8 = 0;
  uStack_1e0 = 0;
  uStack_1d8 = 0;
  uStack_128 = 0;
  uStack_130 = 0;
  uStack_118 = 0;
  uStack_120 = 0;
  lStack_148 = 0;
  uStack_150 = 0;
  uStack_138 = 0;
  uStack_140 = 0;
  uStack_178 = 0;
  uStack_180 = 0;
  uStack_168 = 0;
  uStack_170 = 0;
  uStack_188 = 0;
  lStack_190 = 0;
  plVar7 = (long *)(**(code **)(*param_1 + 0x328))(param_1,*(undefined8 *)(*param_1 + 0x330));
  if (((*(byte *)(_UnityEngine_Object_TypeInfo_12d54e0 + 0x133) >> 2 & 1) != 0) &&
     (*(int *)(_UnityEngine_Object_TypeInfo_12d54e0 + 0xe0) == 0)) {
    native_sub_4327ec(_UnityEngine_Object_TypeInfo_12d54e0);
  }
  uVar8 = native_UnityEngine_Object__op_Equality_8e9a3c(plVar7,0,0);
  if ((uVar8 & 1) == 0) {
    if ((param_2 == 0) || (param_1[0x41] == 0)) {
                    /* WARNING: Subroutine does not return */
      native_sub_432810();
    }
    uVar3 = *(undefined4 *)(param_2 + 0x18);
    native_System_Collections_Generic_Dictionary_object__UISpriteCollection_Sprite___GetEnumerator_ce40ec
              (auStack_238,param_1[0x41],
               _Method_System_Collections_Generic_Dictionary_object__UISpriteCollection_Sprite__GetEnumerator___12d9648
              );
    func_0x002ca3e0(auStack_108,auStack_238,0x58);
    plVar1 = param_1 + 0x42;
    while (uVar8 = native_System_Collections_Generic_Dictionary_Enumerator_object__UISpriteCollection_Sprite___MoveNext_b57134
                             (auStack_108,
                              _Method_System_Collections_Generic_Dictionary_Enumerator_object__UISpriteCollection_Sprite__MoveNext___12dace0
                             ), (uVar8 & 1) != 0) {
      uStack_128 = uStack_d0;
      uStack_130 = uStack_d8;
      uStack_118 = uStack_c0;
      uStack_120 = uStack_c8;
      lStack_148 = lStack_f0;
      uStack_150 = uStack_f8;
      uStack_138 = uStack_e0;
      uStack_140 = uStack_e8;
      uStack_160 = uStack_c0;
      uStack_178 = uStack_d8;
      uStack_180 = uStack_e0;
      uStack_168 = uStack_c8;
      uStack_170 = uStack_d0;
      uStack_188 = uStack_e8;
      lStack_190 = lStack_f0;
      if ((uStack_c0 & 0xff) != 0) {
        *plVar1 = lStack_f0;
        uVar16 = uStack_d0;
        lVar9 = lStack_f0;
        uVar18 = uStack_f8;
        native_sub_4326e0(plVar1);
        uVar6 = (undefined4)lVar9;
        fVar14 = (float)uVar18;
        uVar5 = (undefined4)uVar16;
        if (*plVar1 != 0) {
          uVar13 = native_UnityEngine_Color32__op_Implicit_8da288(uStack_178._4_4_,0);
          uStack_1a0 = CONCAT44(uVar5,uVar13);
          fVar14 = fVar14 * *(float *)((long)param_1 + 0x8c);
          uStack_198 = CONCAT44(fVar14,uVar6);
          if (fVar14 != 0.0) {
            lVar9 = *plVar1;
            if (lVar9 == 0) {
                    /* WARNING: Subroutine does not return */
              native_sub_432810();
            }
            native_UnityEngine_Rect___ctor_7635c8
                      ((float)*(int *)(lVar9 + 0x18),(float)*(int *)(lVar9 + 0x1c),
                       (float)*(int *)(lVar9 + 0x20),(float)*(int *)(lVar9 + 0x24),auStack_1c0 + 2,0
                      );
            lVar9 = *plVar1;
            if (lVar9 == 0) {
                    /* WARNING: Subroutine does not return */
              native_sub_432810();
            }
            native_UnityEngine_Rect___ctor_7635c8
                      ((float)(*(int *)(lVar9 + 0x28) + *(int *)(lVar9 + 0x18)),
                       (float)(*(int *)(lVar9 + 0x30) + *(int *)(lVar9 + 0x1c)),
                       (float)((*(int *)(lVar9 + 0x20) - *(int *)(lVar9 + 0x28)) -
                              *(int *)(lVar9 + 0x2c)),
                       (float)((*(int *)(lVar9 + 0x24) - *(int *)(lVar9 + 0x30)) -
                              *(int *)(lVar9 + 0x34)),auStack_1c0,0);
            if (plVar7 == (long *)0x0) {
                    /* WARNING: Subroutine does not return */
              native_sub_432810();
            }
            uVar8 = auStack_1c0[2] & 0xffffffff;
            uVar13 = (undefined4)(auStack_1c0[2] >> 0x20);
            uVar15 = (undefined4)auStack_1c0[3];
            uVar17 = (undefined4)(auStack_1c0[3] >> 0x20);
            uVar5 = (**(code **)(*plVar7 + 0x178))(plVar7,*(undefined8 *)(*plVar7 + 0x180));
            uVar6 = (**(code **)(*plVar7 + 0x198))(plVar7,*(undefined8 *)(*plVar7 + 0x1a0));
            if (((*(byte *)(_NGUIMath_TypeInfo_12d53b8 + 0x133) >> 2 & 1) != 0) &&
               (*(int *)(_NGUIMath_TypeInfo_12d53b8 + 0xe0) == 0)) {
              native_sub_4327ec();
            }
            uVar5 = native_NGUIMath__ConvertToTexCoords_803574(uVar8,uVar5,uVar6,0);
            *(undefined4 *)(param_1 + 0x3b) = uVar5;
            *(undefined4 *)((long)param_1 + 0x1dc) = uVar13;
            *(undefined4 *)(param_1 + 0x3c) = uVar15;
            *(undefined4 *)((long)param_1 + 0x1e4) = uVar17;
            uVar8 = auStack_1c0[0] & 0xffffffff;
            uVar13 = (undefined4)(auStack_1c0[0] >> 0x20);
            uVar15 = (undefined4)auStack_1c0[1];
            uVar17 = (undefined4)(auStack_1c0[1] >> 0x20);
            uVar5 = (**(code **)(*plVar7 + 0x178))(plVar7,*(undefined8 *)(*plVar7 + 0x180));
            uVar6 = (**(code **)(*plVar7 + 0x198))(plVar7,*(undefined8 *)(*plVar7 + 0x1a0));
            uVar5 = native_NGUIMath__ConvertToTexCoords_803574(uVar8,uVar5,uVar6,0);
            *(undefined4 *)(param_1 + 0x39) = uVar5;
            *(undefined4 *)((long)param_1 + 0x1cc) = uVar13;
            *(undefined4 *)(param_1 + 0x3a) = uVar15;
            *(undefined4 *)((long)param_1 + 0x1d4) = uVar17;
            *(undefined4 *)(param_1 + 0x34) = uStack_168._4_4_;
            (**(code **)(*param_1 + 0x458))(param_1,*(undefined8 *)(*param_1 + 0x460));
            uVar5 = native_UISpriteCollection_Sprite__GetDrawingDimensions_55ae4c(&lStack_190,0);
            uStack_1d0 = CONCAT44(uVar13,uVar5);
            uStack_1c8 = CONCAT44(uVar17,uVar15);
            uVar5 = native_UIBasicSprite__get_drawingUVs_c8c220(param_1,0);
            uStack_1e0 = CONCAT44(uVar13,uVar5);
            uStack_1d8 = CONCAT44(uVar17,uVar15);
            uVar8 = (**(code **)(*param_1 + 0x448))(param_1,*(undefined8 *)(*param_1 + 0x450));
            if ((uVar8 & 1) != 0) {
              uVar8 = uStack_1a0 & 0xffffffff;
              uVar5 = (undefined4)(uStack_1a0 >> 0x20);
              uVar6 = (undefined4)uStack_198;
              uVar13 = (undefined4)((ulong)uStack_198 >> 0x20);
              if (((*(byte *)(_NGUITools_TypeInfo_12d53c8 + 0x133) >> 2 & 1) != 0) &&
                 (*(int *)(_NGUITools_TypeInfo_12d53c8 + 0xe0) == 0)) {
                native_sub_4327ec();
              }
              uVar15 = native_NGUITools__ApplyPMA_732e54(uVar8,0);
              uStack_1a0 = CONCAT44(uVar5,uVar15);
              uStack_198 = CONCAT44(uVar13,uVar6);
            }
            uVar12 = *(uint *)(param_2 + 0x18);
            switch(uStack_168 & 0xffffffff) {
            case 0:
              native_UIBasicSprite__SimpleFill_c8c5ac
                        (param_1,param_2,param_3,param_4,&uStack_1d0,&uStack_1e0,&uStack_1a0,0);
              break;
            case 1:
              native_UIBasicSprite__SlicedFill_c8c7a8
                        (param_1,param_2,param_3,param_4,&uStack_1d0,&uStack_1e0,&uStack_1a0,0);
              break;
            case 2:
              native_UIBasicSprite__TiledFill_c8e1f8
                        (param_1,param_2,param_3,param_4,&uStack_1d0,&uStack_1a0,0);
              break;
            case 3:
              native_UIBasicSprite__FilledFill_c8d2e4
                        (param_1,param_2,param_3,param_4,&uStack_1d0,&uStack_1e0,&uStack_1a0,0);
              break;
            case 4:
              native_UIBasicSprite__AdvancedFill_c8e730
                        (param_1,param_2,param_3,param_4,&uStack_1d0,&uStack_1e0,&uStack_1a0,0);
            }
            lVar9 = (long)(int)uVar12;
            if ((float)uStack_180 == 0.0) {
              uVar4 = *(uint *)(param_2 + 0x18);
              if ((int)uVar12 < (int)uVar4) {
                lVar10 = (long)(int)uVar4;
                lVar11 = lVar9 * 0xc;
                while( true ) {
                  lVar9 = lVar9 + 1;
                  if (uVar4 <= uVar12) {
                    native_System_ThrowHelper__ThrowArgumentOutOfRangeException_9fe0f4(0);
                  }
                  lVar2 = *(long *)(param_2 + 0x10) + lVar11;
                  uVar16 = *(undefined8 *)(lVar2 + 0x20);
                  fVar14 = (float)((ulong)uVar16 >> 0x20) + (float)((ulong)uStack_188 >> 0x20);
                  native_System_Collections_Generic_List_Vector3___set_Item_d2ba90
                            (CONCAT44(fVar14,(float)uVar16 + (float)uStack_188),fVar14,
                             *(undefined4 *)(lVar2 + 0x28),param_2,uVar12,
                             _Method_System_Collections_Generic_List_Vector3__set_Item___12dd510);
                  if (lVar10 <= lVar9) break;
                  uVar4 = *(uint *)(param_2 + 0x18);
                  uVar12 = uVar12 + 1;
                  lVar11 = lVar11 + 0xc;
                }
              }
            }
            else {
              fVar19 = (float)uStack_180 * 0.017453292 * 0.5;
              fVar14 = (float)func_0x002c9f10(fVar19);
              fVar19 = (float)func_0x002ca670(fVar19);
              uVar4 = *(uint *)(param_2 + 0x18);
              if ((int)uVar12 < (int)uVar4) {
                fVar19 = fVar19 * (fVar14 + fVar14);
                lVar10 = (long)(int)uVar4;
                lVar11 = lVar9 * 0xc;
                fVar14 = 1.0 - fVar14 * (fVar14 + fVar14);
                while( true ) {
                  lVar9 = lVar9 + 1;
                  if (uVar4 <= uVar12) {
                    native_System_ThrowHelper__ThrowArgumentOutOfRangeException_9fe0f4(0);
                  }
                  lVar2 = *(long *)(param_2 + 0x10) + lVar11;
                  native_System_Collections_Generic_List_Vector3___set_Item_d2ba90
                            ((fVar14 * *(float *)(lVar2 + 0x20) - fVar19 * *(float *)(lVar2 + 0x24))
                             + (float)uStack_188,
                             fVar19 * *(float *)(lVar2 + 0x20) + fVar14 * *(float *)(lVar2 + 0x24) +
                             uStack_188._4_4_,*(undefined4 *)(lVar2 + 0x28),param_2,uVar12,
                             _Method_System_Collections_Generic_List_Vector3__set_Item___12dd510);
                  if (lVar10 <= lVar9) break;
                  uVar4 = *(uint *)(param_2 + 0x18);
                  uVar12 = uVar12 + 1;
                  lVar11 = lVar11 + 0xc;
                }
              }
            }
          }
        }
      }
    }
    native_System_Collections_Generic_Dictionary_Enumerator_object__UISpriteCollection_Sprite___Dispose_b572f0
              (auStack_108,
               _Method_System_Collections_Generic_Dictionary_Enumerator_object__UISpriteCollection_Sprite__Dispose___12dacd8
              );
    param_1[0x42] = 0;
    native_sub_4326e0(plVar1,0);
    if (param_1[0x19] != 0) {
      native_UIWidget_OnPostFillCallback__Invoke_55bd18
                (param_1[0x19],param_1,uVar3,param_2,param_3,param_4,0);
    }
  }
  return;
}



/* UISpriteCollection$$Add @ 0xc38894
 * void UISpriteCollection__Add (UISpriteCollection_o* __this, Il2CppObject* obj, System_String_o* spriteName, UnityEngine_Vector2_o pos, float width, float height, const MethodInfo* method); */

/* UISpriteCollection$$Add
   void UISpriteCollection__Add (UISpriteCollection_o* __this, Il2CppObject* obj, System_String_o*
   spriteName, UnityEngine_Vector2_o pos, float width, float height, const MethodInfo* method); */

void native_UISpriteCollection__Add_c38894
               (undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
               undefined8 param_5,undefined8 param_6,undefined8 param_7)

{
  undefined4 auStack_28 [2];
  
  auStack_28[0] = 0;
  native_UnityEngine_Color32___ctor_8d9fa0(auStack_28,0xff,0xff,0xff,0xff,0);
  native_UISpriteCollection__AddSprite_c3893c
            (param_1,param_2,param_3,param_4,0x3f000000,0x3f000000,0,param_5,param_6,param_7,
             auStack_28[0],0,0,1);
  return;
}



/* UISpriteCollection$$Add @ 0xc38bec
 * void UISpriteCollection__Add (UISpriteCollection_o* __this, Il2CppObject* obj, System_String_o* spriteName, UnityEngine_Vector2_o pos, float width, float height, UnityEngine_Color32_o color, const MethodInfo* method); */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* UISpriteCollection$$Add
   void UISpriteCollection__Add (UISpriteCollection_o* __this, Il2CppObject* obj, System_String_o*
   spriteName, UnityEngine_Vector2_o pos, float width, float height, UnityEngine_Color32_o color,
   const MethodInfo* method); */

void native_UISpriteCollection__Add_c38bec
               (undefined4 param_1,undefined4 param_2,uint param_3,undefined4 param_4,long *param_5,
               undefined8 param_6,undefined8 param_7,undefined4 param_8)

{
  ulong uVar1;
  long *plVar2;
  undefined8 *puVar3;
  int *piVar4;
  long lVar5;
  long lStack_108;
  undefined8 uStack_100;
  long lStack_f8;
  undefined8 uStack_f0;
  undefined8 uStack_e8;
  undefined8 uStack_e0;
  undefined8 uStack_d8;
  long lStack_d0;
  undefined8 uStack_c8;
  long lStack_c0;
  undefined8 uStack_b8;
  undefined8 uStack_b0;
  undefined8 uStack_a8;
  undefined8 uStack_a0;
  
  if ((bRam000000000134276d & 1) == 0) {
    native_sub_43273c(&UnityEngine_Debug_TypeInfo_12d4338);
    native_sub_43273c(&
                      Method_System_Collections_Generic_Dictionary_object__UISpriteCollection_Sprite__set_Item___12d96a0
                     );
    native_sub_43273c(&INGUIAtlas_TypeInfo_12d4c68);
    native_sub_43273c(&UnityEngine_Object_TypeInfo_12d54e0);
    native_sub_43273c(&StringLiteral_Atlas_must_be_assigned_first_12ec5d0);
    bRam000000000134276d = 1;
  }
  uStack_d8 = 0;
  uStack_e0 = 0;
  uStack_e8 = 0;
  uStack_f0 = 0;
  lStack_f8 = 0;
  uStack_100 = 0;
  lStack_108 = 0;
  lVar5 = param_5[0x40];
  if (((*(byte *)(_UnityEngine_Object_TypeInfo_12d54e0 + 0x133) >> 2 & 1) != 0) &&
     (*(int *)(_UnityEngine_Object_TypeInfo_12d54e0 + 0xe0) == 0)) {
    native_sub_4327ec();
  }
  uVar1 = native_UnityEngine_Object__op_Equality_8e9a3c(lVar5,0,0);
  if ((uVar1 & 1) == 0) {
    uStack_d8 = 0;
    uStack_e0 = 0;
    uStack_e8 = 0;
    uStack_f0 = 0;
    lStack_f8 = 0;
    uStack_100 = 0;
    lStack_108 = 0;
    plVar2 = (long *)native_UISpriteCollection__get_atlas_c37c0c(param_5);
    if (plVar2 != (long *)0x0) {
      lVar5 = *plVar2;
      if ((ulong)*(ushort *)(lVar5 + 0x12a) != 0) {
        uVar1 = 0;
        piVar4 = (int *)(*(long *)(lVar5 + 0xb0) + 8);
        do {
          if (*(long *)(piVar4 + -2) == _INGUIAtlas_TypeInfo_12d4c68) {
            puVar3 = (undefined8 *)(lVar5 + (long)(*piVar4 + 10) * 0x10 + 0x138);
            goto LAB_00c38afc;
          }
          uVar1 = uVar1 + 1;
          piVar4 = piVar4 + 4;
        } while (uVar1 < *(ushort *)(lVar5 + 0x12a));
      }
      puVar3 = (undefined8 *)native_sub_3c9b34(plVar2,_INGUIAtlas_TypeInfo_12d4c68,10);
LAB_00c38afc:
      lStack_108 = (*(code *)*puVar3)(plVar2,param_7,puVar3[1]);
      native_sub_4326e0(&lStack_108,lStack_108);
      if (lStack_108 != 0) {
        uStack_100 = CONCAT44(param_2,param_1);
        lStack_f8 = (ulong)param_3 << 0x20;
        uStack_f0 = CONCAT44(param_8,param_4);
        uStack_e8 = 0x3f0000003f000000;
        uStack_e0 = 0;
        uStack_d8 = CONCAT71(uStack_d8._1_7_,1);
        if (param_5[0x41] == 0) {
                    /* WARNING: Subroutine does not return */
          native_sub_432810();
        }
        uStack_a0 = uStack_d8;
        uStack_b8 = uStack_f0;
        lStack_c0 = lStack_f8;
        uStack_a8 = 0;
        uStack_b0 = 0x3f0000003f000000;
        uStack_c8 = uStack_100;
        lStack_d0 = lStack_108;
        native_System_Collections_Generic_Dictionary_object__UISpriteCollection_Sprite___set_Item_ce38a4
                  (param_5[0x41],param_6,&lStack_d0,
                   _Method_System_Collections_Generic_Dictionary_object__UISpriteCollection_Sprite__set_Item___12d96a0
                  );
        if ((char)param_5[0xb] == '\0') {
          (**(code **)(*param_5 + 0x378))(param_5,*(undefined8 *)(*param_5 + 0x380));
        }
      }
    }
  }
  else {
    if (((*(byte *)(_UnityEngine_Debug_TypeInfo_12d4338 + 0x133) >> 2 & 1) != 0) &&
       (*(int *)(_UnityEngine_Debug_TypeInfo_12d4338 + 0xe0) == 0)) {
      native_sub_4327ec();
    }
    native_UnityEngine_Debug__LogError_8dc5cc(_StringLiteral_Atlas_must_be_assigned_first_12ec5d0,0)
    ;
  }
  return;
}



/* UISpriteCollection$$AddSprite @ 0xc3893c
 * void UISpriteCollection__AddSprite (UISpriteCollection_o* __this, Il2CppObject* id, System_String_o* spriteName, UnityEngine_Vector2_o pos, float width, float height, UnityEngine_Color32_o color, UnityEngine_Vector2_o pivot, float rot, int32_t type, int32_t flip, bool enabled, const MethodInfo* method); */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* UISpriteCollection$$AddSprite
   void UISpriteCollection__AddSprite (UISpriteCollection_o* __this, Il2CppObject* id,
   System_String_o* spriteName, UnityEngine_Vector2_o pos, float width, float height,
   UnityEngine_Color32_o color, UnityEngine_Vector2_o pivot, float rot, int32_t type, int32_t flip,
   bool enabled, const MethodInfo* method); */

void native_UISpriteCollection__AddSprite_c3893c
               (undefined4 param_1,undefined4 param_2,undefined4 param_3,undefined4 param_4,
               undefined4 param_5,undefined4 param_6,undefined4 param_7,long *param_8,
               undefined8 param_9,undefined8 param_10,undefined4 param_11,undefined4 param_12,
               undefined4 param_13,byte param_14)

{
  ulong uVar1;
  long *plVar2;
  undefined8 *puVar3;
  int *piVar4;
  long lVar5;
  long lStack_108;
  undefined8 uStack_100;
  undefined8 uStack_f8;
  undefined8 uStack_f0;
  undefined8 uStack_e8;
  undefined8 uStack_e0;
  ulong uStack_d8;
  long lStack_d0;
  undefined8 uStack_c8;
  undefined8 uStack_c0;
  undefined8 uStack_b8;
  undefined8 uStack_b0;
  undefined8 uStack_a8;
  ulong uStack_a0;
  
  if ((bRam000000000134276d & 1) == 0) {
    native_sub_43273c(&UnityEngine_Debug_TypeInfo_12d4338);
    native_sub_43273c(&
                      Method_System_Collections_Generic_Dictionary_object__UISpriteCollection_Sprite__set_Item___12d96a0
                     );
    native_sub_43273c(&INGUIAtlas_TypeInfo_12d4c68);
    native_sub_43273c(&UnityEngine_Object_TypeInfo_12d54e0);
    native_sub_43273c(&StringLiteral_Atlas_must_be_assigned_first_12ec5d0);
    bRam000000000134276d = 1;
  }
  uStack_d8 = 0;
  uStack_e0 = 0;
  uStack_e8 = 0;
  uStack_f0 = 0;
  uStack_f8 = 0;
  uStack_100 = 0;
  lStack_108 = 0;
  lVar5 = param_8[0x40];
  if (((*(byte *)(_UnityEngine_Object_TypeInfo_12d54e0 + 0x133) >> 2 & 1) != 0) &&
     (*(int *)(_UnityEngine_Object_TypeInfo_12d54e0 + 0xe0) == 0)) {
    native_sub_4327ec();
  }
  uVar1 = native_UnityEngine_Object__op_Equality_8e9a3c(lVar5,0,0);
  if ((uVar1 & 1) == 0) {
    uStack_d8 = 0;
    uStack_e0 = 0;
    uStack_e8 = 0;
    uStack_f0 = 0;
    uStack_f8 = 0;
    uStack_100 = 0;
    lStack_108 = 0;
    plVar2 = (long *)native_UISpriteCollection__get_atlas_c37c0c(param_8);
    if (plVar2 != (long *)0x0) {
      lVar5 = *plVar2;
      if ((ulong)*(ushort *)(lVar5 + 0x12a) != 0) {
        uVar1 = 0;
        piVar4 = (int *)(*(long *)(lVar5 + 0xb0) + 8);
        do {
          if (*(long *)(piVar4 + -2) == _INGUIAtlas_TypeInfo_12d4c68) {
            puVar3 = (undefined8 *)(lVar5 + (long)(*piVar4 + 10) * 0x10 + 0x138);
            goto LAB_00c38afc;
          }
          uVar1 = uVar1 + 1;
          piVar4 = piVar4 + 4;
        } while (uVar1 < *(ushort *)(lVar5 + 0x12a));
      }
      puVar3 = (undefined8 *)native_sub_3c9b34(plVar2,_INGUIAtlas_TypeInfo_12d4c68,10);
LAB_00c38afc:
      lStack_108 = (*(code *)*puVar3)(plVar2,param_10,puVar3[1]);
      native_sub_4326e0(&lStack_108,lStack_108);
      if (lStack_108 != 0) {
        uStack_100 = CONCAT44(param_2,param_1);
        uStack_f8 = CONCAT44(param_3,param_7);
        uStack_f0 = CONCAT44(param_11,param_4);
        uStack_e8 = CONCAT44(param_6,param_5);
        uStack_e0 = CONCAT44(param_13,param_12);
        uStack_d8 = CONCAT71(uStack_d8._1_7_,param_14) & 0xffffffffffffff01;
        if (param_8[0x41] == 0) {
                    /* WARNING: Subroutine does not return */
          native_sub_432810();
        }
        uStack_a0 = uStack_d8;
        uStack_b8 = uStack_f0;
        uStack_c0 = uStack_f8;
        uStack_a8 = uStack_e0;
        uStack_b0 = uStack_e8;
        uStack_c8 = uStack_100;
        lStack_d0 = lStack_108;
        native_System_Collections_Generic_Dictionary_object__UISpriteCollection_Sprite___set_Item_ce38a4
                  (param_8[0x41],param_9,&lStack_d0,
                   _Method_System_Collections_Generic_Dictionary_object__UISpriteCollection_Sprite__set_Item___12d96a0
                  );
        if (((param_14 & 1) != 0) && ((char)param_8[0xb] == '\0')) {
          (**(code **)(*param_8 + 0x378))(param_8,*(undefined8 *)(*param_8 + 0x380));
        }
      }
    }
  }
  else {
    if (((*(byte *)(_UnityEngine_Debug_TypeInfo_12d4338 + 0x133) >> 2 & 1) != 0) &&
       (*(int *)(_UnityEngine_Debug_TypeInfo_12d4338 + 0xe0) == 0)) {
      native_sub_4327ec();
    }
    native_UnityEngine_Debug__LogError_8dc5cc(_StringLiteral_Atlas_must_be_assigned_first_12ec5d0,0)
    ;
  }
  return;
}



/* UISpriteCollection$$GetSprite @ 0xc38c0c
 * System_Nullable_UISpriteCollection_Sprite__o UISpriteCollection__GetSprite (UISpriteCollection_o* __this, Il2CppObject* id, const MethodInfo* method); */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* UISpriteCollection$$GetSprite
   System_Nullable_UISpriteCollection_Sprite__o UISpriteCollection__GetSprite (UISpriteCollection_o*
   __this, Il2CppObject* id, const MethodInfo* method); */

void native_UISpriteCollection__GetSprite_c38c0c
               (undefined8 *param_1,long param_2,undefined8 param_3)

{
  ulong uVar1;
  undefined8 uStack_a8;
  undefined8 uStack_a0;
  undefined8 uStack_98;
  undefined8 uStack_90;
  undefined8 uStack_88;
  undefined8 uStack_80;
  undefined8 uStack_78;
  undefined8 uStack_70;
  undefined8 uStack_68;
  undefined8 uStack_60;
  undefined8 uStack_58;
  undefined8 uStack_50;
  undefined8 uStack_48;
  undefined8 uStack_40;
  
  if ((bRam000000000134276e & 1) == 0) {
    native_sub_43273c(&
                      Method_System_Collections_Generic_Dictionary_object__UISpriteCollection_Sprite__TryGetValue___12d9680
                     );
    native_sub_43273c(&Method_System_Nullable_UISpriteCollection_Sprite___ctor___12dda70);
    bRam000000000134276e = 1;
  }
  uStack_78 = 0;
  uStack_80 = 0;
  uStack_88 = 0;
  uStack_90 = 0;
  uStack_98 = 0;
  uStack_a0 = 0;
  uStack_a8 = 0;
  if (*(long *)(param_2 + 0x208) != 0) {
    uVar1 = native_System_Collections_Generic_Dictionary_object__UISpriteCollection_Sprite___TryGetValue_ce59cc
                      (*(long *)(param_2 + 0x208),param_3,&uStack_a8,
                       _Method_System_Collections_Generic_Dictionary_object__UISpriteCollection_Sprite__TryGetValue___12d9680
                      );
    param_1[6] = 0;
    param_1[7] = 0;
    param_1[4] = 0;
    param_1[5] = 0;
    param_1[2] = 0;
    param_1[3] = 0;
    *param_1 = 0;
    param_1[1] = 0;
    if ((uVar1 & 1) != 0) {
      uStack_40 = uStack_78;
      uStack_58 = uStack_90;
      uStack_60 = uStack_98;
      uStack_48 = uStack_80;
      uStack_50 = uStack_88;
      uStack_68 = uStack_a0;
      uStack_70 = uStack_a8;
      native_System_Nullable_UISpriteCollection_Sprite____ctor_c834d0
                (param_1,&uStack_70,
                 _Method_System_Nullable_UISpriteCollection_Sprite___ctor___12dda70);
    }
    return;
  }
                    /* WARNING: Subroutine does not return */
  native_sub_432810();
}



/* UISpriteCollection$$RemoveSprite @ 0xc38cec
 * bool UISpriteCollection__RemoveSprite (UISpriteCollection_o* __this, Il2CppObject* id, const MethodInfo* method); */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* UISpriteCollection$$RemoveSprite
   bool UISpriteCollection__RemoveSprite (UISpriteCollection_o* __this, Il2CppObject* id, const
   MethodInfo* method); */

undefined8 native_UISpriteCollection__RemoveSprite_c38cec(long *param_1,undefined8 param_2)

{
  ulong uVar1;
  undefined8 uVar2;
  
  if ((bRam000000000134276f & 1) == 0) {
    native_sub_43273c(&
                      Method_System_Collections_Generic_Dictionary_object__UISpriteCollection_Sprite__Remove___12d9668
                     );
    bRam000000000134276f = 1;
  }
  if (param_1[0x41] != 0) {
    uVar1 = native_System_Collections_Generic_Dictionary_object__UISpriteCollection_Sprite___Remove_ce562c
                      (param_1[0x41],param_2,
                       _Method_System_Collections_Generic_Dictionary_object__UISpriteCollection_Sprite__Remove___12d9668
                      );
    if ((uVar1 & 1) == 0) {
      uVar2 = 0;
    }
    else {
      if ((char)param_1[0xb] == '\0') {
        (**(code **)(*param_1 + 0x378))(param_1,*(undefined8 *)(*param_1 + 0x380));
      }
      uVar2 = 1;
    }
    return uVar2;
  }
                    /* WARNING: Subroutine does not return */
  native_sub_432810();
}



/* UISpriteCollection$$SetSprite @ 0xc38d80
 * bool UISpriteCollection__SetSprite (UISpriteCollection_o* __this, Il2CppObject* id, UISpriteCollection_Sprite_o sp, const MethodInfo* method); */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* UISpriteCollection$$SetSprite
   bool UISpriteCollection__SetSprite (UISpriteCollection_o* __this, Il2CppObject* id,
   UISpriteCollection_Sprite_o sp, const MethodInfo* method); */

undefined8
native_UISpriteCollection__SetSprite_c38d80(long *param_1,undefined8 param_2,undefined8 *param_3)

{
  undefined8 uStack_70;
  undefined8 uStack_68;
  undefined8 uStack_60;
  undefined8 uStack_58;
  undefined8 uStack_50;
  undefined8 uStack_48;
  undefined8 uStack_40;
  
  if ((bRam0000000001342770 & 1) == 0) {
    native_sub_43273c(&
                      Method_System_Collections_Generic_Dictionary_object__UISpriteCollection_Sprite__set_Item___12d96a0
                     );
    bRam0000000001342770 = 1;
  }
  uStack_58 = param_3[3];
  uStack_60 = param_3[2];
  uStack_48 = param_3[5];
  uStack_50 = param_3[4];
  uStack_40 = param_3[6];
  uStack_68 = param_3[1];
  uStack_70 = *param_3;
  if (param_1[0x41] != 0) {
    native_System_Collections_Generic_Dictionary_object__UISpriteCollection_Sprite___set_Item_ce38a4
              (param_1[0x41],param_2,&uStack_70,
               _Method_System_Collections_Generic_Dictionary_object__UISpriteCollection_Sprite__set_Item___12d96a0
              );
    if ((char)param_1[0xb] == '\0') {
      (**(code **)(*param_1 + 0x378))(param_1,*(undefined8 *)(*param_1 + 0x380));
    }
    return 1;
  }
                    /* WARNING: Subroutine does not return */
  native_sub_432810();
}



/* UISpriteCollection$$Clear @ 0xc38e48
 * void UISpriteCollection__Clear (UISpriteCollection_o* __this, const MethodInfo* method); */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* UISpriteCollection$$Clear
   void UISpriteCollection__Clear (UISpriteCollection_o* __this, const MethodInfo* method); */

void native_UISpriteCollection__Clear_c38e48(long *param_1)

{
  int iVar1;
  
  if ((bRam0000000001342771 & 1) == 0) {
    native_sub_43273c(&
                      Method_System_Collections_Generic_Dictionary_object__UISpriteCollection_Sprite__Clear___12d9630
                     );
    native_sub_43273c(&
                      Method_System_Collections_Generic_Dictionary_object__UISpriteCollection_Sprite__get_Count___12d9690
                     );
    bRam0000000001342771 = 1;
  }
  if (param_1[0x41] != 0) {
    iVar1 = native_System_Collections_Generic_Dictionary_object__UISpriteCollection_Sprite___get_Count_ce3648
                      (param_1[0x41],
                       _Method_System_Collections_Generic_Dictionary_object__UISpriteCollection_Sprite__get_Count___12d9690
                      );
    if (iVar1 == 0) {
      return;
    }
    if (param_1[0x41] != 0) {
      native_System_Collections_Generic_Dictionary_object__UISpriteCollection_Sprite___Clear_ce3c78
                (param_1[0x41],
                 _Method_System_Collections_Generic_Dictionary_object__UISpriteCollection_Sprite__Clear___12d9630
                );
                    /* WARNING: Could not recover jumptable at 0x00c38ed0. Too many branches */
                    /* WARNING: Treating indirect jump as call */
      (**(code **)(*param_1 + 0x378))(param_1,*(undefined8 *)(*param_1 + 0x380));
      return;
    }
  }
                    /* WARNING: Subroutine does not return */
  native_sub_432810();
}



/* UISpriteCollection$$IsActive @ 0xc38ee4
 * bool UISpriteCollection__IsActive (UISpriteCollection_o* __this, Il2CppObject* id, const MethodInfo* method); */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* UISpriteCollection$$IsActive
   bool UISpriteCollection__IsActive (UISpriteCollection_o* __this, Il2CppObject* id, const
   MethodInfo* method); */

byte native_UISpriteCollection__IsActive_c38ee4(long param_1,undefined8 param_2)

{
  byte bVar1;
  undefined8 uStack_68;
  undefined8 uStack_60;
  undefined8 uStack_58;
  undefined8 uStack_50;
  undefined8 uStack_48;
  undefined8 uStack_40;
  undefined8 uStack_38;
  
  if ((bRam0000000001342772 & 1) == 0) {
    native_sub_43273c(&
                      Method_System_Collections_Generic_Dictionary_object__UISpriteCollection_Sprite__TryGetValue___12d9680
                     );
    bRam0000000001342772 = 1;
  }
  uStack_38 = 0;
  uStack_40 = 0;
  uStack_48 = 0;
  uStack_50 = 0;
  uStack_58 = 0;
  uStack_60 = 0;
  uStack_68 = 0;
  if (*(long *)(param_1 + 0x208) != 0) {
    bVar1 = native_System_Collections_Generic_Dictionary_object__UISpriteCollection_Sprite___TryGetValue_ce59cc
                      (*(long *)(param_1 + 0x208),param_2,&uStack_68,
                       _Method_System_Collections_Generic_Dictionary_object__UISpriteCollection_Sprite__TryGetValue___12d9680
                      );
    return bVar1 & (char)uStack_38 != '\0';
  }
                    /* WARNING: Subroutine does not return */
  native_sub_432810();
}



/* UISpriteCollection$$SetActive @ 0xc38f7c
 * bool UISpriteCollection__SetActive (UISpriteCollection_o* __this, Il2CppObject* id, bool visible, const MethodInfo* method); */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* UISpriteCollection$$SetActive
   bool UISpriteCollection__SetActive (UISpriteCollection_o* __this, Il2CppObject* id, bool visible,
   const MethodInfo* method); */

undefined8
native_UISpriteCollection__SetActive_c38f7c(long *param_1,undefined8 param_2,byte param_3)

{
  ulong uVar1;
  undefined8 uVar2;
  undefined8 uStack_a8;
  undefined8 uStack_a0;
  undefined8 uStack_98;
  undefined8 uStack_90;
  undefined8 uStack_88;
  undefined8 uStack_80;
  ulong uStack_78;
  undefined8 uStack_70;
  undefined8 uStack_68;
  undefined8 uStack_60;
  undefined8 uStack_58;
  undefined8 uStack_50;
  undefined8 uStack_48;
  ulong uStack_40;
  
  if ((bRam0000000001342773 & 1) == 0) {
    native_sub_43273c(&
                      Method_System_Collections_Generic_Dictionary_object__UISpriteCollection_Sprite__TryGetValue___12d9680
                     );
    native_sub_43273c(&
                      Method_System_Collections_Generic_Dictionary_object__UISpriteCollection_Sprite__set_Item___12d96a0
                     );
    bRam0000000001342773 = 1;
  }
  uStack_78 = 0;
  uStack_80 = 0;
  uStack_88 = 0;
  uStack_90 = 0;
  uStack_98 = 0;
  uStack_a0 = 0;
  uStack_a8 = 0;
  if (param_1[0x41] != 0) {
    uVar1 = native_System_Collections_Generic_Dictionary_object__UISpriteCollection_Sprite___TryGetValue_ce59cc
                      (param_1[0x41],param_2,&uStack_a8,
                       _Method_System_Collections_Generic_Dictionary_object__UISpriteCollection_Sprite__TryGetValue___12d9680
                      );
    if ((uVar1 & 1) == 0) {
      uVar2 = 0;
    }
    else {
      if ((((char)uStack_78 != '\0' ^ param_3) & 1) != 0) {
        uStack_78 = CONCAT71(uStack_78._1_7_,param_3) & 0xffffffffffffff01;
        if (param_1[0x41] == 0) goto LAB_00c390ac;
        uStack_40 = uStack_78;
        uStack_58 = uStack_90;
        uStack_60 = uStack_98;
        uStack_48 = uStack_80;
        uStack_50 = uStack_88;
        uStack_68 = uStack_a0;
        uStack_70 = uStack_a8;
        native_System_Collections_Generic_Dictionary_object__UISpriteCollection_Sprite___set_Item_ce38a4
                  (param_1[0x41],param_2,&uStack_70,
                   _Method_System_Collections_Generic_Dictionary_object__UISpriteCollection_Sprite__set_Item___12d96a0
                  );
        if ((*(byte *)(param_1 + 0xb) & 1) == 0) {
          (**(code **)(*param_1 + 0x378))(param_1,*(undefined8 *)(*param_1 + 0x380));
        }
      }
      uVar2 = 1;
    }
    return uVar2;
  }
LAB_00c390ac:
                    /* WARNING: Subroutine does not return */
  native_sub_432810();
}



/* UISpriteCollection$$SetPosition @ 0xc390b0
 * bool UISpriteCollection__SetPosition (UISpriteCollection_o* __this, Il2CppObject* id, UnityEngine_Vector2_o pos, bool visible, const MethodInfo* method); */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* UISpriteCollection$$SetPosition
   bool UISpriteCollection__SetPosition (UISpriteCollection_o* __this, Il2CppObject* id,
   UnityEngine_Vector2_o pos, bool visible, const MethodInfo* method); */

undefined8
native_UISpriteCollection__SetPosition_c390b0
          (float param_1,float param_2,long *param_3,undefined8 param_4,byte param_5)

{
  ulong uVar1;
  undefined8 uStack_b8;
  undefined8 uStack_b0;
  undefined8 uStack_a8;
  undefined8 uStack_a0;
  undefined8 uStack_98;
  undefined8 uStack_90;
  ulong uStack_88;
  undefined8 uStack_80;
  undefined8 uStack_78;
  undefined8 uStack_70;
  undefined8 uStack_68;
  undefined8 uStack_60;
  undefined8 uStack_58;
  ulong uStack_50;
  
  if ((bRam0000000001342774 & 1) == 0) {
    native_sub_43273c(&
                      Method_System_Collections_Generic_Dictionary_object__UISpriteCollection_Sprite__TryGetValue___12d9680
                     );
    native_sub_43273c(&
                      Method_System_Collections_Generic_Dictionary_object__UISpriteCollection_Sprite__set_Item___12d96a0
                     );
    bRam0000000001342774 = 1;
  }
  uStack_88 = 0;
  uStack_90 = 0;
  uStack_98 = 0;
  uStack_a0 = 0;
  uStack_a8 = 0;
  uStack_b0 = 0;
  uStack_b8 = 0;
  if (param_3[0x41] != 0) {
    uVar1 = native_System_Collections_Generic_Dictionary_object__UISpriteCollection_Sprite___TryGetValue_ce59cc
                      (param_3[0x41],param_4,&uStack_b8,
                       _Method_System_Collections_Generic_Dictionary_object__UISpriteCollection_Sprite__TryGetValue___12d9680
                      );
    if ((uVar1 & 1) == 0) {
      return 0;
    }
    if (((float)uStack_b0 - param_1) * ((float)uStack_b0 - param_1) +
        (uStack_b0._4_4_ - param_2) * (uStack_b0._4_4_ - param_2) < 9.9999994e-11) {
      if ((((char)uStack_88 != '\0' ^ param_5) & 1) == 0) {
        return 1;
      }
    }
    else {
      uStack_b0 = CONCAT44(param_2,param_1);
    }
    uStack_88 = CONCAT71(uStack_88._1_7_,param_5) & 0xffffffffffffff01;
    if (param_3[0x41] != 0) {
      uStack_50 = uStack_88;
      uStack_68 = uStack_a0;
      uStack_70 = uStack_a8;
      uStack_58 = uStack_90;
      uStack_60 = uStack_98;
      uStack_78 = uStack_b0;
      uStack_80 = uStack_b8;
      native_System_Collections_Generic_Dictionary_object__UISpriteCollection_Sprite___set_Item_ce38a4
                (param_3[0x41],param_4,&uStack_80,
                 _Method_System_Collections_Generic_Dictionary_object__UISpriteCollection_Sprite__set_Item___12d96a0
                );
      if ((char)param_3[0xb] == '\0') {
        (**(code **)(*param_3 + 0x378))(param_3,*(undefined8 *)(*param_3 + 0x380));
      }
      return 1;
    }
  }
                    /* WARNING: Subroutine does not return */
  native_sub_432810();
}



/* UISpriteCollection$$Rotate @ 0xc39224
 * UnityEngine_Vector2_o UISpriteCollection__Rotate (UnityEngine_Vector2_o pos, float rot, const MethodInfo* method); */

/* UISpriteCollection$$Rotate
   UnityEngine_Vector2_o UISpriteCollection__Rotate (UnityEngine_Vector2_o pos, float rot, const
   MethodInfo* method); */

float native_UISpriteCollection__Rotate_c39224(float param_1,float param_2,float param_3)

{
  float fVar1;
  float fVar2;
  
  fVar2 = param_3 * 0.017453292 * 0.5;
  fVar1 = (float)func_0x002c9f10(fVar2);
  fVar2 = (float)func_0x002ca670(fVar2);
  return param_1 * (1.0 - fVar1 * (fVar1 + fVar1)) - param_2 * fVar2 * (fVar1 + fVar1);
}



/* UISpriteCollection$$GetCurrentSpriteID @ 0xc392a0
 * Il2CppObject* UISpriteCollection__GetCurrentSpriteID (UISpriteCollection_o* __this, const MethodInfo* method); */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* UISpriteCollection$$GetCurrentSpriteID
   Il2CppObject* UISpriteCollection__GetCurrentSpriteID (UISpriteCollection_o* __this, const
   MethodInfo* method); */

undefined8 native_UISpriteCollection__GetCurrentSpriteID_c392a0(long *param_1)

{
  undefined8 uVar1;
  undefined8 uVar2;
  ulong uVar3;
  long lVar4;
  int iVar5;
  undefined8 uVar6;
  undefined4 uVar7;
  float fVar8;
  float fVar9;
  float fVar10;
  float fVar11;
  undefined4 uVar12;
  float in_s3;
  float fVar13;
  float fVar14;
  float fVar15;
  undefined1 auStack_168 [88];
  undefined8 uStack_110;
  undefined8 uStack_108;
  undefined8 uStack_100;
  undefined8 uStack_f8;
  undefined8 uStack_f0;
  undefined8 uStack_e8;
  undefined8 uStack_e0;
  undefined1 auStack_d8 [16];
  undefined8 uStack_c8;
  undefined8 uStack_c0;
  undefined8 uStack_b8;
  undefined8 uStack_b0;
  undefined8 uStack_a8;
  undefined8 uStack_a0;
  undefined8 uStack_98;
  undefined8 uStack_90;
  
  if ((bRam0000000001342775 & 1) == 0) {
    native_sub_43273c(&UICamera_TypeInfo_12d6410);
    bRam0000000001342775 = 1;
  }
  if (((*(byte *)(_UICamera_TypeInfo_12d6410 + 0x133) >> 2 & 1) != 0) &&
     (*(int *)(_UICamera_TypeInfo_12d6410 + 0xe0) == 0)) {
    native_sub_4327ec();
  }
  lVar4 = *(long *)(_UICamera_TypeInfo_12d6410 + 0xb8);
  uVar7 = *(undefined4 *)(lVar4 + 100);
  fVar11 = *(float *)(lVar4 + 0x68);
  uVar12 = *(undefined4 *)(lVar4 + 0x6c);
  if ((bRam0000000001342777 & 1) == 0) {
    native_sub_43273c(&
                      Method_System_Collections_Generic_Dictionary_object__UISpriteCollection_Sprite__GetEnumerator___12d9648
                     );
    native_sub_43273c(&
                      Method_System_Collections_Generic_Dictionary_Enumerator_object__UISpriteCollection_Sprite__Dispose___12dacd8
                     );
    native_sub_43273c(&
                      Method_System_Collections_Generic_Dictionary_Enumerator_object__UISpriteCollection_Sprite__MoveNext___12dace0
                     );
    native_sub_43273c(&
                      Method_System_Collections_Generic_Dictionary_Enumerator_object__UISpriteCollection_Sprite__get_Current___12dad10
                     );
    native_sub_43273c(&
                      Method_System_Collections_Generic_KeyValuePair_object__UISpriteCollection_Sprite__get_Key___12dbee8
                     );
    native_sub_43273c(&
                      Method_System_Collections_Generic_KeyValuePair_object__UISpriteCollection_Sprite__get_Value___12dbef0
                     );
    bRam0000000001342777 = 1;
  }
  func_0x002c8be0(auStack_d8,0,0x58);
  uStack_e0 = 0;
  uStack_f8 = 0;
  uStack_100 = 0;
  uStack_e8 = 0;
  uStack_f0 = 0;
  uStack_108 = 0;
  uStack_110 = 0;
  if (param_1[9] != 0) {
    fVar8 = (float)native_UnityEngine_Transform__InverseTransformPoint_7729a0
                             (uVar7,fVar11,uVar12,param_1[9],0);
    if (param_1[0x41] != 0) {
      native_System_Collections_Generic_Dictionary_object__UISpriteCollection_Sprite___GetEnumerator_ce40ec
                (auStack_168,param_1[0x41],
                 _Method_System_Collections_Generic_Dictionary_object__UISpriteCollection_Sprite__GetEnumerator___12d9648
                );
      func_0x002ca3e0(auStack_d8,auStack_168,0x58);
      do {
        uVar3 = native_System_Collections_Generic_Dictionary_Enumerator_object__UISpriteCollection_Sprite___MoveNext_b57134
                          (auStack_d8,
                           _Method_System_Collections_Generic_Dictionary_Enumerator_object__UISpriteCollection_Sprite__MoveNext___12dace0
                          );
        uVar6 = uStack_c8;
        if ((uVar3 & 1) == 0) {
          iVar5 = 0;
          uVar6 = 0;
          goto LAB_00c3950c;
        }
        uStack_108 = uStack_b8;
        uVar1 = uStack_108;
        uStack_110 = uStack_c0;
        uStack_f8 = uStack_a8;
        uStack_100 = uStack_b0;
        uVar2 = uStack_100;
        uStack_e8 = uStack_98;
        uStack_f0 = uStack_a0;
        uStack_108._0_4_ = (float)uStack_b8;
        uStack_108._4_4_ = (float)((ulong)uStack_b8 >> 0x20);
        uStack_100._0_4_ = (float)uStack_b0;
        uStack_e0 = uStack_90;
        fVar14 = fVar8 - (float)uStack_108;
        fVar15 = fVar11 - uStack_108._4_4_;
        fVar13 = (float)uStack_108;
        fVar9 = uStack_108._4_4_;
        if ((float)uStack_100 != 0.0) {
          fVar13 = (float)uStack_100 * -0.017453292 * 0.5;
          uStack_108 = uVar1;
          uStack_100 = uVar2;
          fVar9 = (float)func_0x002c9f10(fVar13);
          fVar10 = (float)func_0x002ca670(fVar13);
          fVar10 = fVar10 * (fVar9 + fVar9);
          fVar13 = 1.0 - fVar9 * (fVar9 + fVar9);
          fVar9 = fVar15 * fVar10;
          fVar10 = fVar14 * fVar10;
          in_s3 = fVar14 * fVar13;
          fVar13 = fVar15 * fVar13;
          fVar14 = in_s3 - fVar9;
          fVar15 = fVar10 + fVar13;
          uVar1 = uStack_108;
          uVar2 = uStack_100;
        }
        uStack_100 = uVar2;
        uStack_108 = uVar1;
        (**(code **)(*param_1 + 0x458))(param_1,*(undefined8 *)(*param_1 + 0x460));
        fVar10 = (float)native_UISpriteCollection_Sprite__GetDrawingDimensions_55ae4c(&uStack_110,0)
        ;
      } while ((((in_s3 < fVar15) || (fVar9 < fVar14)) || (fVar14 < fVar10)) || (fVar15 < fVar13));
      iVar5 = 2;
LAB_00c3950c:
      native_System_Collections_Generic_Dictionary_Enumerator_object__UISpriteCollection_Sprite___Dispose_b572f0
                (auStack_d8,
                 _Method_System_Collections_Generic_Dictionary_Enumerator_object__UISpriteCollection_Sprite__Dispose___12dacd8
                );
      if ((iVar5 + 2U & 3) != 0) {
        uVar6 = 0;
      }
      return uVar6;
    }
  }
                    /* WARNING: Subroutine does not return */
  native_sub_432810();
}



/* UISpriteCollection$$GetCurrentSprite @ 0xc395a4
 * System_Nullable_UISpriteCollection_Sprite__o UISpriteCollection__GetCurrentSprite (UISpriteCollection_o* __this, const MethodInfo* method); */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* UISpriteCollection$$GetCurrentSprite
   System_Nullable_UISpriteCollection_Sprite__o UISpriteCollection__GetCurrentSprite
   (UISpriteCollection_o* __this, const MethodInfo* method); */

void native_UISpriteCollection__GetCurrentSprite_c395a4(undefined8 *param_1,undefined8 param_2)

{
  long lVar1;
  undefined8 uStack_70;
  undefined8 uStack_68;
  undefined8 uStack_60;
  undefined8 uStack_58;
  undefined8 uStack_50;
  undefined8 uStack_48;
  undefined8 uStack_40;
  undefined8 uStack_38;
  
  if ((bRam0000000001342776 & 1) == 0) {
    native_sub_43273c(&UICamera_TypeInfo_12d6410);
    bRam0000000001342776 = 1;
  }
  if (((*(byte *)(_UICamera_TypeInfo_12d6410 + 0x133) >> 2 & 1) != 0) &&
     (*(int *)(_UICamera_TypeInfo_12d6410 + 0xe0) == 0)) {
    native_sub_4327ec();
  }
  lVar1 = *(long *)(_UICamera_TypeInfo_12d6410 + 0xb8);
  native_UISpriteCollection__GetCurrentSprite_c39640
            (&uStack_70,*(undefined4 *)(lVar1 + 100),*(undefined4 *)(lVar1 + 0x68),
             *(undefined4 *)(lVar1 + 0x6c),param_2);
  param_1[5] = uStack_48;
  param_1[4] = uStack_50;
  param_1[7] = uStack_38;
  param_1[6] = uStack_40;
  param_1[1] = uStack_68;
  *param_1 = uStack_70;
  param_1[3] = uStack_58;
  param_1[2] = uStack_60;
  return;
}



/* UISpriteCollection$$GetCurrentSpriteID @ 0xc39310
 * Il2CppObject* UISpriteCollection__GetCurrentSpriteID (UISpriteCollection_o* __this, UnityEngine_Vector3_o worldPos, const MethodInfo* method); */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* UISpriteCollection$$GetCurrentSpriteID
   Il2CppObject* UISpriteCollection__GetCurrentSpriteID (UISpriteCollection_o* __this,
   UnityEngine_Vector3_o worldPos, const MethodInfo* method); */

undefined8
native_UISpriteCollection__GetCurrentSpriteID_c39310
          (undefined8 param_1,undefined8 param_2,undefined8 param_3,float param_4,long *param_5)

{
  undefined8 uVar1;
  undefined8 uVar2;
  ulong uVar3;
  int iVar4;
  undefined8 uVar5;
  float fVar6;
  float fVar7;
  float fVar8;
  float fVar9;
  float fVar10;
  float fVar11;
  undefined1 auStack_168 [88];
  undefined8 uStack_110;
  undefined8 uStack_108;
  undefined8 uStack_100;
  undefined8 uStack_f8;
  undefined8 uStack_f0;
  undefined8 uStack_e8;
  undefined8 uStack_e0;
  undefined1 auStack_d8 [16];
  undefined8 uStack_c8;
  undefined8 uStack_c0;
  undefined8 uStack_b8;
  undefined8 uStack_b0;
  undefined8 uStack_a8;
  undefined8 uStack_a0;
  undefined8 uStack_98;
  undefined8 uStack_90;
  
  if ((bRam0000000001342777 & 1) == 0) {
    native_sub_43273c(&
                      Method_System_Collections_Generic_Dictionary_object__UISpriteCollection_Sprite__GetEnumerator___12d9648
                     );
    native_sub_43273c(&
                      Method_System_Collections_Generic_Dictionary_Enumerator_object__UISpriteCollection_Sprite__Dispose___12dacd8
                     );
    native_sub_43273c(&
                      Method_System_Collections_Generic_Dictionary_Enumerator_object__UISpriteCollection_Sprite__MoveNext___12dace0
                     );
    native_sub_43273c(&
                      Method_System_Collections_Generic_Dictionary_Enumerator_object__UISpriteCollection_Sprite__get_Current___12dad10
                     );
    native_sub_43273c(&
                      Method_System_Collections_Generic_KeyValuePair_object__UISpriteCollection_Sprite__get_Key___12dbee8
                     );
    native_sub_43273c(&
                      Method_System_Collections_Generic_KeyValuePair_object__UISpriteCollection_Sprite__get_Value___12dbef0
                     );
    bRam0000000001342777 = 1;
  }
  func_0x002c8be0(auStack_d8,0,0x58);
  uStack_e0 = 0;
  uStack_f8 = 0;
  uStack_100 = 0;
  uStack_e8 = 0;
  uStack_f0 = 0;
  uStack_108 = 0;
  uStack_110 = 0;
  if (param_5[9] != 0) {
    fVar6 = (float)native_UnityEngine_Transform__InverseTransformPoint_7729a0
                             (param_1,param_2,param_3,param_5[9],0);
    if (param_5[0x41] != 0) {
      native_System_Collections_Generic_Dictionary_object__UISpriteCollection_Sprite___GetEnumerator_ce40ec
                (auStack_168,param_5[0x41],
                 _Method_System_Collections_Generic_Dictionary_object__UISpriteCollection_Sprite__GetEnumerator___12d9648
                );
      func_0x002ca3e0(auStack_d8,auStack_168,0x58);
      do {
        uVar3 = native_System_Collections_Generic_Dictionary_Enumerator_object__UISpriteCollection_Sprite___MoveNext_b57134
                          (auStack_d8,
                           _Method_System_Collections_Generic_Dictionary_Enumerator_object__UISpriteCollection_Sprite__MoveNext___12dace0
                          );
        uVar5 = uStack_c8;
        if ((uVar3 & 1) == 0) {
          iVar4 = 0;
          uVar5 = 0;
          goto LAB_00c3950c;
        }
        uStack_108 = uStack_b8;
        uVar1 = uStack_108;
        uStack_110 = uStack_c0;
        uStack_f8 = uStack_a8;
        uStack_100 = uStack_b0;
        uVar2 = uStack_100;
        uStack_e8 = uStack_98;
        uStack_f0 = uStack_a0;
        uStack_108._0_4_ = (float)uStack_b8;
        uStack_108._4_4_ = (float)((ulong)uStack_b8 >> 0x20);
        uStack_100._0_4_ = (float)uStack_b0;
        uStack_e0 = uStack_90;
        fVar10 = fVar6 - (float)uStack_108;
        fVar11 = (float)param_2 - uStack_108._4_4_;
        fVar9 = (float)uStack_108;
        fVar7 = uStack_108._4_4_;
        if ((float)uStack_100 != 0.0) {
          fVar9 = (float)uStack_100 * -0.017453292 * 0.5;
          uStack_108 = uVar1;
          uStack_100 = uVar2;
          fVar7 = (float)func_0x002c9f10(fVar9);
          fVar8 = (float)func_0x002ca670(fVar9);
          fVar8 = fVar8 * (fVar7 + fVar7);
          fVar9 = 1.0 - fVar7 * (fVar7 + fVar7);
          fVar7 = fVar11 * fVar8;
          fVar8 = fVar10 * fVar8;
          param_4 = fVar10 * fVar9;
          fVar9 = fVar11 * fVar9;
          fVar10 = param_4 - fVar7;
          fVar11 = fVar8 + fVar9;
          uVar1 = uStack_108;
          uVar2 = uStack_100;
        }
        uStack_100 = uVar2;
        uStack_108 = uVar1;
        (**(code **)(*param_5 + 0x458))(param_5,*(undefined8 *)(*param_5 + 0x460));
        fVar8 = (float)native_UISpriteCollection_Sprite__GetDrawingDimensions_55ae4c(&uStack_110,0);
      } while ((((param_4 < fVar11) || (fVar7 < fVar10)) || (fVar10 < fVar8)) || (fVar11 < fVar9));
      iVar4 = 2;
LAB_00c3950c:
      native_System_Collections_Generic_Dictionary_Enumerator_object__UISpriteCollection_Sprite___Dispose_b572f0
                (auStack_d8,
                 _Method_System_Collections_Generic_Dictionary_Enumerator_object__UISpriteCollection_Sprite__Dispose___12dacd8
                );
      if ((iVar4 + 2U & 3) != 0) {
        uVar5 = 0;
      }
      return uVar5;
    }
  }
                    /* WARNING: Subroutine does not return */
  native_sub_432810();
}



/* UISpriteCollection$$GetCurrentSprite @ 0xc39640
 * System_Nullable_UISpriteCollection_Sprite__o UISpriteCollection__GetCurrentSprite (UISpriteCollection_o* __this, UnityEngine_Vector3_o worldPos, const MethodInfo* method); */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* UISpriteCollection$$GetCurrentSprite
   System_Nullable_UISpriteCollection_Sprite__o UISpriteCollection__GetCurrentSprite
   (UISpriteCollection_o* __this, UnityEngine_Vector3_o worldPos, const MethodInfo* method); */

void native_UISpriteCollection__GetCurrentSprite_c39640
               (undefined8 *param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
               long *param_5)

{
  undefined8 uVar1;
  undefined8 uVar2;
  ulong uVar3;
  float fVar4;
  float fVar5;
  float fVar6;
  float fVar7;
  float fVar8;
  float fVar9;
  float fVar10;
  undefined8 uStack_258;
  undefined8 uStack_250;
  undefined8 uStack_248;
  undefined8 uStack_240;
  undefined8 uStack_238;
  undefined8 uStack_230;
  undefined8 uStack_228;
  undefined8 uStack_220;
  int iStack_200;
  undefined4 uStack_1f8;
  undefined8 uStack_1f0;
  undefined8 uStack_1e8;
  undefined8 uStack_1e0;
  undefined8 uStack_1d8;
  undefined8 uStack_1d0;
  undefined8 uStack_1c8;
  undefined8 uStack_1c0;
  undefined8 uStack_1b8;
  undefined8 uStack_1b0;
  undefined8 uStack_1a8;
  undefined8 uStack_1a0;
  undefined8 uStack_198;
  undefined8 uStack_190;
  undefined8 uStack_188;
  undefined8 uStack_180;
  ulong uStack_170;
  undefined8 uStack_168;
  undefined8 uStack_160;
  undefined8 uStack_158;
  undefined8 uStack_150;
  undefined8 uStack_148;
  undefined8 uStack_140;
  undefined8 uStack_138;
  undefined1 auStack_128 [16];
  ulong uStack_118;
  undefined8 uStack_110;
  undefined8 uStack_108;
  undefined8 uStack_100;
  undefined8 uStack_f8;
  undefined8 uStack_f0;
  undefined8 uStack_e8;
  undefined8 uStack_e0;
  undefined8 uStack_d0;
  undefined8 uStack_c8;
  undefined8 uStack_c0;
  undefined8 uStack_b8;
  undefined8 uStack_b0;
  undefined8 uStack_a8;
  undefined8 uStack_a0;
  
  if ((bRam0000000001342778 & 1) == 0) {
    native_sub_43273c(&
                      Method_System_Collections_Generic_Dictionary_object__UISpriteCollection_Sprite__GetEnumerator___12d9648
                     );
    native_sub_43273c(&
                      Method_System_Collections_Generic_Dictionary_Enumerator_object__UISpriteCollection_Sprite__Dispose___12dacd8
                     );
    native_sub_43273c(&
                      Method_System_Collections_Generic_Dictionary_Enumerator_object__UISpriteCollection_Sprite__MoveNext___12dace0
                     );
    native_sub_43273c(&
                      Method_System_Collections_Generic_Dictionary_Enumerator_object__UISpriteCollection_Sprite__get_Current___12dad10
                     );
    native_sub_43273c(&
                      Method_System_Collections_Generic_KeyValuePair_object__UISpriteCollection_Sprite__get_Value___12dbef0
                     );
    native_sub_43273c(&Method_System_Nullable_UISpriteCollection_Sprite___ctor___12dda70);
    bRam0000000001342778 = 1;
  }
  func_0x002c8be0(auStack_128,0,0x58);
  uStack_180 = 0;
  uStack_148 = 0;
  uStack_150 = 0;
  uStack_138 = 0;
  uStack_140 = 0;
  uStack_168 = 0;
  uStack_170 = 0;
  uStack_158 = 0;
  uStack_160 = 0;
  uStack_198 = 0;
  uStack_1a0 = 0;
  uStack_188 = 0;
  uStack_190 = 0;
  uStack_1b8 = 0;
  uStack_1c0 = 0;
  uStack_1a8 = 0;
  uStack_1b0 = 0;
  uStack_1c8 = 0;
  uStack_1d0 = 0;
  uStack_1e8 = 0;
  uStack_1f0 = 0;
  uStack_1d8 = 0;
  uStack_1e0 = 0;
  uStack_1f8 = 0;
  if (param_5[9] != 0) {
    fVar4 = (float)native_UnityEngine_Transform__InverseTransformPoint_7729a0
                             (param_2,param_3,param_4,param_5[9],0);
    if (param_5[0x41] != 0) {
      native_System_Collections_Generic_Dictionary_object__UISpriteCollection_Sprite___GetEnumerator_ce40ec
                (&uStack_258,param_5[0x41],
                 _Method_System_Collections_Generic_Dictionary_object__UISpriteCollection_Sprite__GetEnumerator___12d9648
                );
      func_0x002ca3e0(auStack_128,&uStack_258,0x58);
      do {
        uVar3 = native_System_Collections_Generic_Dictionary_Enumerator_object__UISpriteCollection_Sprite___MoveNext_b57134
                          (auStack_128,
                           _Method_System_Collections_Generic_Dictionary_Enumerator_object__UISpriteCollection_Sprite__MoveNext___12dace0
                          );
        if ((uVar3 & 1) == 0) {
          iStack_200 = 0xd9;
          goto LAB_00c398d8;
        }
        uStack_148 = uStack_f0;
        uStack_150 = uStack_f8;
        uStack_138 = uStack_e0;
        uStack_140 = uStack_e8;
        uStack_168 = uStack_110;
        uStack_170 = uStack_118;
        uStack_158 = uStack_100;
        uStack_160 = uStack_108;
        uStack_180 = uStack_e0;
        uStack_198 = uStack_f8;
        uStack_1a0 = uStack_100;
        uVar2 = uStack_1a0;
        uStack_188 = uStack_e8;
        uStack_190 = uStack_f0;
        uStack_1a8 = uStack_108;
        uVar1 = uStack_1a8;
        uStack_1b0 = uStack_110;
        uStack_1a8._0_4_ = (float)uStack_108;
        uStack_1a8._4_4_ = (float)((ulong)uStack_108 >> 0x20);
        uStack_1a0._0_4_ = (float)uStack_100;
        fVar9 = fVar4 - (float)uStack_1a8;
        fVar10 = (float)param_3 - uStack_1a8._4_4_;
        uVar3 = uStack_118;
        fVar8 = (float)uStack_1a8;
        fVar5 = uStack_1a8._4_4_;
        if ((float)uStack_1a0 != 0.0) {
          fVar8 = (float)uStack_1a0 * -0.017453292 * 0.5;
          uStack_1a8 = uVar1;
          uStack_1a0 = uVar2;
          fVar5 = (float)func_0x002c9f10(fVar8);
          fVar6 = (float)func_0x002ca670(fVar8);
          fVar6 = fVar6 * (fVar5 + fVar5);
          fVar8 = 1.0 - fVar5 * (fVar5 + fVar5);
          fVar5 = fVar10 * fVar6;
          fVar6 = fVar9 * fVar6;
          fVar9 = fVar9 * fVar8;
          uVar3 = (ulong)(uint)fVar9;
          fVar8 = fVar10 * fVar8;
          fVar9 = fVar9 - fVar5;
          fVar10 = fVar6 + fVar8;
          uVar1 = uStack_1a8;
          uVar2 = uStack_1a0;
        }
        uStack_1a0 = uVar2;
        uStack_1a8 = uVar1;
        fVar7 = (float)uVar3;
        (**(code **)(*param_5 + 0x458))(param_5,*(undefined8 *)(*param_5 + 0x460));
        fVar6 = (float)native_UISpriteCollection_Sprite__GetDrawingDimensions_55ae4c(&uStack_1b0,0);
      } while ((((fVar7 < fVar10) || (fVar5 < fVar9)) || (fVar9 < fVar6)) || (fVar10 < fVar8));
      uStack_220 = 0;
      uStack_228 = 0;
      uStack_230 = 0;
      uStack_238 = 0;
      uStack_240 = 0;
      uStack_248 = 0;
      uStack_250 = 0;
      uStack_258 = 0;
      uStack_a0 = uStack_138;
      uStack_b8 = uStack_150;
      uStack_c0 = uStack_158;
      uStack_a8 = uStack_140;
      uStack_b0 = uStack_148;
      uStack_c8 = uStack_160;
      uStack_d0 = uStack_168;
      native_System_Nullable_UISpriteCollection_Sprite____ctor_c834d0
                (&uStack_258,&uStack_d0,
                 _Method_System_Nullable_UISpriteCollection_Sprite___ctor___12dda70);
      iStack_200 = 0xe4;
      uStack_1c8 = uStack_230;
      uStack_1d0 = uStack_238;
      uStack_1b8 = uStack_220;
      uStack_1c0 = uStack_228;
      uStack_1e8 = uStack_250;
      uStack_1f0 = uStack_258;
      uStack_1d8 = uStack_240;
      uStack_1e0 = uStack_248;
LAB_00c398d8:
      uStack_1f8 = 1;
      native_System_Collections_Generic_Dictionary_Enumerator_object__UISpriteCollection_Sprite___Dispose_b572f0
                (auStack_128,
                 _Method_System_Collections_Generic_Dictionary_Enumerator_object__UISpriteCollection_Sprite__Dispose___12dacd8
                );
      if ((iStack_200 == 0xd9) || (iStack_200 != 0xe4)) {
        param_1[5] = 0;
        param_1[4] = 0;
        param_1[7] = 0;
        param_1[6] = 0;
        param_1[1] = 0;
        *param_1 = 0;
        param_1[3] = 0;
        param_1[2] = 0;
      }
      else {
        param_1[5] = uStack_1c8;
        param_1[4] = uStack_1d0;
        param_1[7] = uStack_1b8;
        param_1[6] = uStack_1c0;
        param_1[1] = uStack_1e8;
        *param_1 = uStack_1f0;
        param_1[3] = uStack_1d8;
        param_1[2] = uStack_1e0;
      }
      return;
    }
  }
                    /* WARNING: Subroutine does not return */
  native_sub_432810();
}



/* UISpriteCollection$$OnClick @ 0xc399a4
 * void UISpriteCollection__OnClick (UISpriteCollection_o* __this, const MethodInfo* method); */

/* UISpriteCollection$$OnClick
   void UISpriteCollection__OnClick (UISpriteCollection_o* __this, const MethodInfo* method); */

void native_UISpriteCollection__OnClick_c399a4(long param_1)

{
  long *plVar1;
  ushort uVar2;
  bool bVar3;
  long lVar4;
  undefined8 uVar5;
  undefined8 *puVar6;
  ulong uVar7;
  ulong uVar8;
  long *plVar9;
  long lVar10;
  long lVar11;
  long lVar12;
  int *piVar13;
  code *pcVar14;
  long lVar15;
  long *plVar16;
  long lStack_58;
  
  if ((*(long *)(param_1 + 0x228) == 0) ||
     (plVar9 = (long *)native_UISpriteCollection__GetCurrentSpriteID_c392a0(), plVar9 == (long *)0x0
     )) {
    return;
  }
  lVar10 = *(long *)(param_1 + 0x228);
  if (lVar10 == 0) {
                    /* WARNING: Subroutine does not return */
    native_sub_432810();
  }
  lStack_58 = lVar10;
  lVar11 = *(long *)(lVar10 + 0x68);
  if (lVar11 == 0) {
    plVar16 = &lStack_58;
    lVar15 = 1;
  }
  else {
    lVar15 = *(long *)(lVar11 + 0x18);
    if (lVar15 == 0) {
      return;
    }
    plVar16 = (long *)(lVar11 + 0x20);
  }
  lVar11 = 0;
  do {
    lVar12 = plVar16[lVar11];
    plVar1 = *(long **)(lVar12 + 0x20);
    lVar4 = *(long *)(lVar12 + 0x28);
    pcVar14 = *(code **)(lVar12 + 0x10);
    if (*(short *)(lVar4 + 0x48) == -1) {
      native_sub_4327f4(lVar4);
    }
    uVar7 = native_sub_432768(lVar4);
    bVar3 = *(char *)(lVar4 + 0x4a) != '\x01';
    if ((uVar7 & 1) == 0) {
      if (bVar3) {
        if ((*(short *)(lVar4 + 0x48) == -1) || (*(long *)(lVar10 + 0x18) == 0)) goto LAB_00559b28;
        uVar7 = native_sub_432760(lVar4);
        uVar8 = native_sub_432b64(lVar4);
        if ((uVar7 & 1) == 0) {
          uVar2 = *(ushort *)(lVar4 + 0x48);
          if ((uVar8 & 1) == 0) {
            lVar4 = *plVar9 + (ulong)uVar2 * 0x10;
            (**(code **)(lVar4 + 0x138))(plVar9,*(undefined8 *)(lVar4 + 0x140));
            goto LAB_00559b34;
          }
          lVar4 = native_sub_432764(lVar4);
          lVar12 = *plVar9;
          if ((ulong)*(ushort *)(lVar12 + 0x12a) != 0) {
            uVar7 = 0;
            piVar13 = (int *)(*(long *)(lVar12 + 0xb0) + 8);
            do {
              if (*(long *)(piVar13 + -2) == lVar4) {
                puVar6 = (undefined8 *)(lVar12 + (long)(int)(*piVar13 + (uint)uVar2) * 0x10 + 0x138)
                ;
                goto LAB_0055995c;
              }
              uVar7 = uVar7 + 1;
              piVar13 = piVar13 + 4;
            } while (uVar7 < *(ushort *)(lVar12 + 0x12a));
          }
          puVar6 = (undefined8 *)native_sub_3c9b34(plVar9,lVar4,(ulong)uVar2);
LAB_0055995c:
          pcVar14 = (code *)*puVar6;
          puVar6 = (undefined8 *)puVar6[1];
        }
        else {
          if ((uVar8 & 1) == 0) {
            uVar5 = *(undefined8 *)(*plVar9 + (ulong)*(ushort *)(lVar4 + 0x48) * 0x10 + 0x140);
          }
          else {
            lVar12 = *plVar9;
            if ((ulong)*(ushort *)(lVar12 + 0x12a) != 0) {
              uVar7 = 0;
              piVar13 = (int *)(*(long *)(lVar12 + 0xb0) + 8);
              do {
                if (*(long *)(piVar13 + -2) == *(long *)(lVar4 + 0x18)) {
                  lVar12 = lVar12 + (long)(int)(*piVar13 + (uint)*(ushort *)(lVar4 + 0x48)) * 0x10 +
                           0x138;
                  goto LAB_00559934;
                }
                uVar7 = uVar7 + 1;
                piVar13 = piVar13 + 4;
              } while (uVar7 < *(ushort *)(lVar12 + 0x12a));
            }
            lVar12 = native_sub_3c9b34(plVar9);
LAB_00559934:
            uVar5 = *(undefined8 *)(lVar12 + 8);
          }
          puVar6 = (undefined8 *)native_sub_4327e8(uVar5,lVar4);
          pcVar14 = (code *)*puVar6;
        }
        (*pcVar14)(plVar9,puVar6);
      }
      else {
        if ((((plVar1 == (long *)0x0) || (*(short *)(lVar4 + 0x48) == -1)) ||
            ((*(byte *)(*plVar1 + 0x115) & 1) != 0)) || (*(long *)(lVar10 + 0x18) == 0))
        goto LAB_00559a9c;
        uVar7 = native_sub_432760(lVar4);
        uVar8 = native_sub_432b64(lVar4);
        if ((uVar7 & 1) == 0) {
          uVar2 = *(ushort *)(lVar4 + 0x48);
          if ((uVar8 & 1) == 0) {
            lVar4 = *plVar1 + (ulong)uVar2 * 0x10;
            (**(code **)(lVar4 + 0x138))(plVar1,plVar9,*(undefined8 *)(lVar4 + 0x140));
            goto LAB_00559b34;
          }
          lVar4 = native_sub_432764(lVar4);
          lVar12 = *plVar1;
          if ((ulong)*(ushort *)(lVar12 + 0x12a) != 0) {
            uVar7 = 0;
            piVar13 = (int *)(*(long *)(lVar12 + 0xb0) + 8);
            do {
              if (*(long *)(piVar13 + -2) == lVar4) {
                puVar6 = (undefined8 *)(lVar12 + (long)(int)(*piVar13 + (uint)uVar2) * 0x10 + 0x138)
                ;
                goto LAB_005599c0;
              }
              uVar7 = uVar7 + 1;
              piVar13 = piVar13 + 4;
            } while (uVar7 < *(ushort *)(lVar12 + 0x12a));
          }
          puVar6 = (undefined8 *)native_sub_3c9b34(plVar1,lVar4,(ulong)uVar2);
LAB_005599c0:
          pcVar14 = (code *)*puVar6;
          puVar6 = (undefined8 *)puVar6[1];
        }
        else {
          if ((uVar8 & 1) == 0) {
            uVar5 = *(undefined8 *)(*plVar1 + (ulong)*(ushort *)(lVar4 + 0x48) * 0x10 + 0x140);
          }
          else {
            lVar12 = *plVar1;
            if ((ulong)*(ushort *)(lVar12 + 0x12a) != 0) {
              uVar7 = 0;
              piVar13 = (int *)(*(long *)(lVar12 + 0xb0) + 8);
              do {
                if (*(long *)(piVar13 + -2) == *(long *)(lVar4 + 0x18)) {
                  lVar12 = lVar12 + (long)(int)(*piVar13 + (uint)*(ushort *)(lVar4 + 0x48)) * 0x10 +
                           0x138;
                  goto LAB_00559998;
                }
                uVar7 = uVar7 + 1;
                piVar13 = piVar13 + 4;
              } while (uVar7 < *(ushort *)(lVar12 + 0x12a));
            }
            lVar12 = native_sub_3c9b34(plVar1);
LAB_00559998:
            uVar5 = *(undefined8 *)(lVar12 + 8);
          }
          puVar6 = (undefined8 *)native_sub_4327e8(uVar5,lVar4);
          pcVar14 = (code *)*puVar6;
        }
        (*pcVar14)(plVar1,plVar9,puVar6);
      }
    }
    else if (bVar3) {
LAB_00559a9c:
      (*pcVar14)(plVar1,plVar9,lVar4);
    }
    else {
LAB_00559b28:
      (*pcVar14)(plVar9,lVar4);
    }
LAB_00559b34:
    lVar11 = lVar11 + 1;
    if (lVar11 == lVar15) {
      return;
    }
  } while( true );
}



/* UISpriteCollection$$OnPress @ 0xc399f0
 * void UISpriteCollection__OnPress (UISpriteCollection_o* __this, bool isPressed, const MethodInfo* method); */

/* UISpriteCollection$$OnPress
   void UISpriteCollection__OnPress (UISpriteCollection_o* __this, bool isPressed, const MethodInfo*
   method); */

void native_UISpriteCollection__OnPress_c399f0(long param_1,uint param_2)

{
  ulong *puVar1;
  long *plVar2;
  ushort uVar3;
  char cVar4;
  bool bVar5;
  long lVar6;
  undefined8 *puVar7;
  ulong uVar8;
  ulong uVar9;
  undefined8 uVar10;
  long lVar11;
  long *plVar12;
  long lVar13;
  long lVar14;
  int *piVar15;
  code *pcVar16;
  long lVar17;
  long *plVar18;
  long lStack_58;
  
  if (*(long *)(param_1 + 0x220) == 0) {
    return;
  }
  lVar11 = *(long *)(param_1 + 0x248);
  puVar7 = (undefined8 *)(param_1 + 0x248);
  if ((param_2 & 1) == 0) {
    if (lVar11 == 0) {
      return;
    }
    native_UISpriteCollection_OnPressCB__Invoke_55a568(*(long *)(param_1 + 0x220),lVar11,0,0);
    *puVar7 = 0;
    if (iRam0000000001345318 != 0) {
      puVar1 = (ulong *)(((ulong)puVar7 >> 0x12 & 0x7fff) * 8 + 0x138ecd8);
      do {
        cVar4 = '\x01';
        bVar5 = (bool)ExclusiveMonitorPass(puVar1,0x10);
        if (bVar5) {
          *puVar1 = *puVar1 | 1L << ((ulong)puVar7 >> 0xc & 0x3f);
          cVar4 = ExclusiveMonitorsStatus();
        }
      } while (cVar4 != '\0');
    }
    return;
  }
  if (lVar11 != 0) {
    return;
  }
  uVar10 = native_UISpriteCollection__GetCurrentSpriteID_c392a0(param_1);
  *(undefined8 *)(param_1 + 0x248) = uVar10;
  native_sub_4326e0(puVar7,uVar10);
  plVar12 = *(long **)(param_1 + 0x248);
  if (plVar12 == (long *)0x0) {
    return;
  }
  lVar11 = *(long *)(param_1 + 0x220);
  if (lVar11 == 0) {
                    /* WARNING: Subroutine does not return */
    native_sub_432810();
  }
  lStack_58 = lVar11;
  lVar13 = *(long *)(lVar11 + 0x68);
  if (lVar13 == 0) {
    plVar18 = &lStack_58;
    lVar17 = 1;
  }
  else {
    lVar17 = *(long *)(lVar13 + 0x18);
    if (lVar17 == 0) {
      return;
    }
    plVar18 = (long *)(lVar13 + 0x20);
  }
  lVar13 = 0;
  do {
    lVar14 = plVar18[lVar13];
    plVar2 = *(long **)(lVar14 + 0x20);
    lVar6 = *(long *)(lVar14 + 0x28);
    pcVar16 = *(code **)(lVar14 + 0x10);
    if (*(short *)(lVar6 + 0x48) == -1) {
      native_sub_4327f4(lVar6);
    }
    uVar8 = native_sub_432768(lVar6);
    bVar5 = *(char *)(lVar6 + 0x4a) != '\x02';
    if ((uVar8 & 1) == 0) {
      if (bVar5) {
        if ((*(short *)(lVar6 + 0x48) == -1) || (*(long *)(lVar11 + 0x18) == 0)) goto LAB_0055a8c4;
        uVar8 = native_sub_432760(lVar6);
        uVar9 = native_sub_432b64(lVar6);
        if ((uVar8 & 1) == 0) {
          uVar3 = *(ushort *)(lVar6 + 0x48);
          if ((uVar9 & 1) == 0) {
            lVar6 = *plVar12 + (ulong)uVar3 * 0x10;
            (**(code **)(lVar6 + 0x138))(plVar12,1,*(undefined8 *)(lVar6 + 0x140));
            goto LAB_0055a8d4;
          }
          lVar6 = native_sub_432764(lVar6);
          lVar14 = *plVar12;
          if ((ulong)*(ushort *)(lVar14 + 0x12a) != 0) {
            uVar8 = 0;
            piVar15 = (int *)(*(long *)(lVar14 + 0xb0) + 8);
            do {
              if (*(long *)(piVar15 + -2) == lVar6) {
                puVar7 = (undefined8 *)(lVar14 + (long)(int)(*piVar15 + (uint)uVar3) * 0x10 + 0x138)
                ;
                goto LAB_0055a6e8;
              }
              uVar8 = uVar8 + 1;
              piVar15 = piVar15 + 4;
            } while (uVar8 < *(ushort *)(lVar14 + 0x12a));
          }
          puVar7 = (undefined8 *)native_sub_3c9b34(plVar12,lVar6,(ulong)uVar3);
LAB_0055a6e8:
          pcVar16 = (code *)*puVar7;
          puVar7 = (undefined8 *)puVar7[1];
        }
        else {
          if ((uVar9 & 1) == 0) {
            uVar10 = *(undefined8 *)(*plVar12 + (ulong)*(ushort *)(lVar6 + 0x48) * 0x10 + 0x140);
          }
          else {
            lVar14 = *plVar12;
            if ((ulong)*(ushort *)(lVar14 + 0x12a) != 0) {
              uVar8 = 0;
              piVar15 = (int *)(*(long *)(lVar14 + 0xb0) + 8);
              do {
                if (*(long *)(piVar15 + -2) == *(long *)(lVar6 + 0x18)) {
                  lVar14 = lVar14 + (long)(int)(*piVar15 + (uint)*(ushort *)(lVar6 + 0x48)) * 0x10 +
                           0x138;
                  goto LAB_0055a6c0;
                }
                uVar8 = uVar8 + 1;
                piVar15 = piVar15 + 4;
              } while (uVar8 < *(ushort *)(lVar14 + 0x12a));
            }
            lVar14 = native_sub_3c9b34(plVar12);
LAB_0055a6c0:
            uVar10 = *(undefined8 *)(lVar14 + 8);
          }
          puVar7 = (undefined8 *)native_sub_4327e8(uVar10,lVar6);
          pcVar16 = (code *)*puVar7;
        }
        (*pcVar16)(plVar12,1,puVar7);
      }
      else {
        if ((((plVar2 == (long *)0x0) || (*(short *)(lVar6 + 0x48) == -1)) ||
            ((*(byte *)(*plVar2 + 0x115) & 1) != 0)) || (*(long *)(lVar11 + 0x18) == 0))
        goto LAB_0055a834;
        uVar8 = native_sub_432760(lVar6);
        uVar9 = native_sub_432b64(lVar6);
        if ((uVar8 & 1) == 0) {
          uVar3 = *(ushort *)(lVar6 + 0x48);
          if ((uVar9 & 1) == 0) {
            lVar6 = *plVar2 + (ulong)uVar3 * 0x10;
            (**(code **)(lVar6 + 0x138))(plVar2,plVar12,1,*(undefined8 *)(lVar6 + 0x140));
            goto LAB_0055a8d4;
          }
          lVar6 = native_sub_432764(lVar6);
          lVar14 = *plVar2;
          if ((ulong)*(ushort *)(lVar14 + 0x12a) != 0) {
            uVar8 = 0;
            piVar15 = (int *)(*(long *)(lVar14 + 0xb0) + 8);
            do {
              if (*(long *)(piVar15 + -2) == lVar6) {
                puVar7 = (undefined8 *)(lVar14 + (long)(int)(*piVar15 + (uint)uVar3) * 0x10 + 0x138)
                ;
                goto LAB_0055a754;
              }
              uVar8 = uVar8 + 1;
              piVar15 = piVar15 + 4;
            } while (uVar8 < *(ushort *)(lVar14 + 0x12a));
          }
          puVar7 = (undefined8 *)native_sub_3c9b34(plVar2,lVar6,(ulong)uVar3);
LAB_0055a754:
          pcVar16 = (code *)*puVar7;
          puVar7 = (undefined8 *)puVar7[1];
        }
        else {
          if ((uVar9 & 1) == 0) {
            uVar10 = *(undefined8 *)(*plVar2 + (ulong)*(ushort *)(lVar6 + 0x48) * 0x10 + 0x140);
          }
          else {
            lVar14 = *plVar2;
            if ((ulong)*(ushort *)(lVar14 + 0x12a) != 0) {
              uVar8 = 0;
              piVar15 = (int *)(*(long *)(lVar14 + 0xb0) + 8);
              do {
                if (*(long *)(piVar15 + -2) == *(long *)(lVar6 + 0x18)) {
                  lVar14 = lVar14 + (long)(int)(*piVar15 + (uint)*(ushort *)(lVar6 + 0x48)) * 0x10 +
                           0x138;
                  goto LAB_0055a72c;
                }
                uVar8 = uVar8 + 1;
                piVar15 = piVar15 + 4;
              } while (uVar8 < *(ushort *)(lVar14 + 0x12a));
            }
            lVar14 = native_sub_3c9b34(plVar2);
LAB_0055a72c:
            uVar10 = *(undefined8 *)(lVar14 + 8);
          }
          puVar7 = (undefined8 *)native_sub_4327e8(uVar10,lVar6);
          pcVar16 = (code *)*puVar7;
        }
        (*pcVar16)(plVar2,plVar12,1,puVar7);
      }
    }
    else if (bVar5) {
LAB_0055a834:
      (*pcVar16)(plVar2,plVar12,1,lVar6);
    }
    else {
LAB_0055a8c4:
      (*pcVar16)(plVar12,1,lVar6);
    }
LAB_0055a8d4:
    lVar13 = lVar13 + 1;
    if (lVar13 == lVar17) {
      return;
    }
  } while( true );
}



/* UISpriteCollection$$OnHover @ 0xc39a90
 * void UISpriteCollection__OnHover (UISpriteCollection_o* __this, bool isOver, const MethodInfo* method); */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* UISpriteCollection$$OnHover
   void UISpriteCollection__OnHover (UISpriteCollection_o* __this, bool isOver, const MethodInfo*
   method); */

void native_UISpriteCollection__OnHover_c39a90(long param_1,ulong param_2)

{
  ulong *puVar1;
  long *plVar2;
  ushort uVar3;
  char cVar4;
  undefined1 *puVar5;
  bool bVar6;
  long lVar7;
  undefined8 *puVar8;
  ulong uVar9;
  undefined8 uVar10;
  long *plVar11;
  ulong uVar12;
  long lVar13;
  long lVar14;
  long lVar15;
  long lVar16;
  int *piVar17;
  long unaff_x19;
  undefined8 unaff_x20;
  undefined8 uVar18;
  undefined8 unaff_x21;
  undefined *unaff_x22;
  undefined *puVar19;
  undefined *unaff_x23;
  code *pcVar20;
  undefined8 unaff_x24;
  undefined8 unaff_x25;
  undefined1 *puVar21;
  undefined8 unaff_x26;
  undefined8 unaff_x27;
  undefined1 *unaff_x29;
  code *unaff_x30;
  
  puVar5 = &stack0xffffffffffffffc0;
  puVar21 = &stack0xfffffffffffffff0;
  if ((bRam0000000001342779 & 1) == 0) {
    native_sub_43273c(&UICamera_MoveDelegate_TypeInfo_12d7a20);
    native_sub_43273c(&UICamera_TypeInfo_12d6410);
    native_sub_43273c(&Method_UISpriteCollection_OnMove___12e78d0);
    bRam0000000001342779 = 1;
  }
  if (*(long *)(param_1 + 0x218) == 0) {
    return;
  }
  puVar19 = &UICamera_TypeInfo_12d6410;
  if ((param_2 & 1) == 0) {
    if (((*(ushort *)(_UICamera_TypeInfo_12d6410 + 0x132) >> 10 & 1) != 0) &&
       (*(int *)(_UICamera_TypeInfo_12d6410 + 0xe0) == 0)) {
      native_sub_4327ec();
    }
    uVar18 = *(undefined8 *)(*(long *)(_UICamera_TypeInfo_12d6410 + 0xb8) + 0x180);
    uVar10 = native_sub_432808(_UICamera_MoveDelegate_TypeInfo_12d7a20);
    native_UICamera_MoveDelegate___ctor_552474
              (uVar10,param_1,_Method_UISpriteCollection_OnMove___12e78d0,0);
    plVar11 = (long *)native_System_Delegate__Remove_a6d1c0(uVar18,uVar10,0);
    lVar16 = *(long *)(_UICamera_TypeInfo_12d6410 + 0xb8);
    if ((plVar11 == (long *)0x0) || (*plVar11 == _UICamera_MoveDelegate_TypeInfo_12d7a20)) {
      *(long **)(lVar16 + 0x180) = plVar11;
      uVar12 = lVar16 + 0x180;
      if (iRam0000000001345318 != 0) {
        puVar1 = (ulong *)((uVar12 >> 0x12 & 0x7fff) * 8 + 0x138ecd8);
        do {
          cVar4 = '\x01';
          bVar6 = (bool)ExclusiveMonitorPass(puVar1,0x10);
          if (bVar6) {
            *puVar1 = *puVar1 | 1L << (uVar12 >> 0xc & 0x3f);
            cVar4 = ExclusiveMonitorsStatus();
          }
        } while (cVar4 != '\0');
      }
      return;
    }
LAB_00c39c54:
    unaff_x21 = uVar10;
    unaff_x20 = uVar18;
    unaff_x23 = &UICamera_MoveDelegate_TypeInfo_12d7a20;
    unaff_x30 = native_UISpriteCollection__OnMove_c39c5c;
    lVar16 = native_sub_432b04(plVar11);
  }
  else {
    if (((*(ushort *)(_UICamera_TypeInfo_12d6410 + 0x132) >> 10 & 1) != 0) &&
       (*(int *)(_UICamera_TypeInfo_12d6410 + 0xe0) == 0)) {
      native_sub_4327ec();
    }
    uVar18 = *(undefined8 *)(*(long *)(_UICamera_TypeInfo_12d6410 + 0xb8) + 0x180);
    uVar10 = native_sub_432808(_UICamera_MoveDelegate_TypeInfo_12d7a20);
    native_UICamera_MoveDelegate___ctor_552474
              (uVar10,param_1,_Method_UISpriteCollection_OnMove___12e78d0,0);
    plVar11 = (long *)native_System_Delegate__Combine_a6cf00(uVar18,uVar10,0);
    lVar16 = *(long *)(_UICamera_TypeInfo_12d6410 + 0xb8);
    if ((plVar11 != (long *)0x0) && (*plVar11 != _UICamera_MoveDelegate_TypeInfo_12d7a20))
    goto LAB_00c39c54;
    *(long **)(lVar16 + 0x180) = plVar11;
    native_sub_4326e0(lVar16 + 0x180,plVar11);
    native_UnityEngine_Vector2__get_zero_765ef0(0);
    puVar5 = (undefined1 *)register0x00000008;
    lVar16 = param_1;
    param_1 = unaff_x19;
    puVar19 = unaff_x22;
    puVar21 = unaff_x29;
  }
  *(undefined8 *)(puVar5 + -0x30) = unaff_x21;
  *(undefined8 *)(puVar5 + -0x20) = unaff_x20;
  *(long *)(puVar5 + -0x18) = param_1;
  *(undefined1 **)(puVar5 + -0x10) = puVar21;
  *(code **)(puVar5 + -8) = unaff_x30;
  if ((bRam000000000134277a & 1) == 0) {
    native_sub_43273c(&UnityEngine_Object_TypeInfo_12d54e0);
    bRam000000000134277a = 1;
  }
  if (((*(byte *)(_UnityEngine_Object_TypeInfo_12d54e0 + 0x133) >> 2 & 1) != 0) &&
     (*(int *)(_UnityEngine_Object_TypeInfo_12d54e0 + 0xe0) == 0)) {
    native_sub_4327ec();
  }
  uVar12 = native_UnityEngine_Object__op_Implicit_8e1b98(lVar16,0);
  if (((uVar12 & 1) == 0) || (*(long *)(lVar16 + 0x218) == 0)) {
    return;
  }
  lVar13 = native_UISpriteCollection__GetCurrentSpriteID_c392a0(lVar16);
  lVar14 = *(long *)(lVar16 + 0x240);
  if (lVar14 == lVar13) {
    return;
  }
  if (lVar14 != 0) {
    if (*(long *)(lVar16 + 0x218) == 0) goto LAB_00c39d44;
    native_UISpriteCollection_OnHoverCB__Invoke_55a0c0(*(long *)(lVar16 + 0x218),lVar14,0,0);
  }
  plVar11 = (long *)(lVar16 + 0x240);
  *plVar11 = lVar13;
  native_sub_4326e0(plVar11,lVar13);
  plVar11 = (long *)*plVar11;
  if (plVar11 == (long *)0x0) {
    return;
  }
  lVar16 = *(long *)(lVar16 + 0x218);
  if (lVar16 != 0) {
    uVar18 = *(undefined8 *)(puVar5 + -0x30);
    *(undefined8 *)(puVar5 + -0x60) = unaff_x27;
    *(undefined8 *)(puVar5 + -0x50) = unaff_x26;
    *(undefined8 *)(puVar5 + -0x48) = unaff_x25;
    *(undefined8 *)(puVar5 + -0x40) = unaff_x24;
    *(undefined **)(puVar5 + -0x38) = unaff_x23;
    *(undefined **)(puVar5 + -0x30) = puVar19;
    *(undefined8 *)(puVar5 + -0x28) = uVar18;
    *(undefined8 *)(puVar5 + -0x20) = *(undefined8 *)(puVar5 + -0x20);
    *(undefined8 *)(puVar5 + -0x18) = *(undefined8 *)(puVar5 + -0x18);
    *(undefined8 *)(puVar5 + -0x10) = *(undefined8 *)(puVar5 + -0x10);
    *(undefined8 *)(puVar5 + -8) = *(undefined8 *)(puVar5 + -8);
    *(long *)(puVar5 + -0x58) = lVar16;
    lVar13 = *(long *)(lVar16 + 0x68);
    if (lVar13 == 0) {
      puVar21 = puVar5 + -0x58;
      lVar14 = 1;
    }
    else {
      lVar14 = *(long *)(lVar13 + 0x18);
      if (lVar14 == 0) {
        return;
      }
      puVar21 = (undefined1 *)(lVar13 + 0x20);
    }
    lVar13 = 0;
    do {
      lVar15 = *(long *)(puVar21 + lVar13 * 8);
      plVar2 = *(long **)(lVar15 + 0x20);
      lVar7 = *(long *)(lVar15 + 0x28);
      pcVar20 = *(code **)(lVar15 + 0x10);
      if (*(short *)(lVar7 + 0x48) == -1) {
        native_sub_4327f4(lVar7);
      }
      uVar12 = native_sub_432768(lVar7);
      bVar6 = *(char *)(lVar7 + 0x4a) != '\x02';
      if ((uVar12 & 1) == 0) {
        if (bVar6) {
          if ((*(short *)(lVar7 + 0x48) == -1) || (*(long *)(lVar16 + 0x18) == 0))
          goto LAB_0055a41c;
          uVar12 = native_sub_432760(lVar7);
          uVar9 = native_sub_432b64(lVar7);
          if ((uVar12 & 1) == 0) {
            uVar3 = *(ushort *)(lVar7 + 0x48);
            if ((uVar9 & 1) == 0) {
              lVar7 = *plVar11 + (ulong)uVar3 * 0x10;
              (**(code **)(lVar7 + 0x138))(plVar11,1,*(undefined8 *)(lVar7 + 0x140));
              goto LAB_0055a42c;
            }
            lVar7 = native_sub_432764(lVar7);
            lVar15 = *plVar11;
            if ((ulong)*(ushort *)(lVar15 + 0x12a) != 0) {
              uVar12 = 0;
              piVar17 = (int *)(*(long *)(lVar15 + 0xb0) + 8);
              do {
                if (*(long *)(piVar17 + -2) == lVar7) {
                  puVar8 = (undefined8 *)
                           (lVar15 + (long)(int)(*piVar17 + (uint)uVar3) * 0x10 + 0x138);
                  goto LAB_0055a240;
                }
                uVar12 = uVar12 + 1;
                piVar17 = piVar17 + 4;
              } while (uVar12 < *(ushort *)(lVar15 + 0x12a));
            }
            puVar8 = (undefined8 *)native_sub_3c9b34(plVar11,lVar7,(ulong)uVar3);
LAB_0055a240:
            pcVar20 = (code *)*puVar8;
            puVar8 = (undefined8 *)puVar8[1];
          }
          else {
            if ((uVar9 & 1) == 0) {
              uVar18 = *(undefined8 *)(*plVar11 + (ulong)*(ushort *)(lVar7 + 0x48) * 0x10 + 0x140);
            }
            else {
              lVar15 = *plVar11;
              if ((ulong)*(ushort *)(lVar15 + 0x12a) != 0) {
                uVar12 = 0;
                piVar17 = (int *)(*(long *)(lVar15 + 0xb0) + 8);
                do {
                  if (*(long *)(piVar17 + -2) == *(long *)(lVar7 + 0x18)) {
                    lVar15 = lVar15 + (long)(int)(*piVar17 + (uint)*(ushort *)(lVar7 + 0x48)) * 0x10
                             + 0x138;
                    goto LAB_0055a218;
                  }
                  uVar12 = uVar12 + 1;
                  piVar17 = piVar17 + 4;
                } while (uVar12 < *(ushort *)(lVar15 + 0x12a));
              }
              lVar15 = native_sub_3c9b34(plVar11);
LAB_0055a218:
              uVar18 = *(undefined8 *)(lVar15 + 8);
            }
            puVar8 = (undefined8 *)native_sub_4327e8(uVar18,lVar7);
            pcVar20 = (code *)*puVar8;
          }
          (*pcVar20)(plVar11,1,puVar8);
        }
        else {
          if ((((plVar2 == (long *)0x0) || (*(short *)(lVar7 + 0x48) == -1)) ||
              ((*(byte *)(*plVar2 + 0x115) & 1) != 0)) || (*(long *)(lVar16 + 0x18) == 0))
          goto LAB_0055a38c;
          uVar12 = native_sub_432760(lVar7);
          uVar9 = native_sub_432b64(lVar7);
          if ((uVar12 & 1) == 0) {
            uVar3 = *(ushort *)(lVar7 + 0x48);
            if ((uVar9 & 1) == 0) {
              lVar7 = *plVar2 + (ulong)uVar3 * 0x10;
              (**(code **)(lVar7 + 0x138))(plVar2,plVar11,1,*(undefined8 *)(lVar7 + 0x140));
              goto LAB_0055a42c;
            }
            lVar7 = native_sub_432764(lVar7);
            lVar15 = *plVar2;
            if ((ulong)*(ushort *)(lVar15 + 0x12a) != 0) {
              uVar12 = 0;
              piVar17 = (int *)(*(long *)(lVar15 + 0xb0) + 8);
              do {
                if (*(long *)(piVar17 + -2) == lVar7) {
                  puVar8 = (undefined8 *)
                           (lVar15 + (long)(int)(*piVar17 + (uint)uVar3) * 0x10 + 0x138);
                  goto LAB_0055a2ac;
                }
                uVar12 = uVar12 + 1;
                piVar17 = piVar17 + 4;
              } while (uVar12 < *(ushort *)(lVar15 + 0x12a));
            }
            puVar8 = (undefined8 *)native_sub_3c9b34(plVar2,lVar7,(ulong)uVar3);
LAB_0055a2ac:
            pcVar20 = (code *)*puVar8;
            puVar8 = (undefined8 *)puVar8[1];
          }
          else {
            if ((uVar9 & 1) == 0) {
              uVar18 = *(undefined8 *)(*plVar2 + (ulong)*(ushort *)(lVar7 + 0x48) * 0x10 + 0x140);
            }
            else {
              lVar15 = *plVar2;
              if ((ulong)*(ushort *)(lVar15 + 0x12a) != 0) {
                uVar12 = 0;
                piVar17 = (int *)(*(long *)(lVar15 + 0xb0) + 8);
                do {
                  if (*(long *)(piVar17 + -2) == *(long *)(lVar7 + 0x18)) {
                    lVar15 = lVar15 + (long)(int)(*piVar17 + (uint)*(ushort *)(lVar7 + 0x48)) * 0x10
                             + 0x138;
                    goto LAB_0055a284;
                  }
                  uVar12 = uVar12 + 1;
                  piVar17 = piVar17 + 4;
                } while (uVar12 < *(ushort *)(lVar15 + 0x12a));
              }
              lVar15 = native_sub_3c9b34(plVar2);
LAB_0055a284:
              uVar18 = *(undefined8 *)(lVar15 + 8);
            }
            puVar8 = (undefined8 *)native_sub_4327e8(uVar18,lVar7);
            pcVar20 = (code *)*puVar8;
          }
          (*pcVar20)(plVar2,plVar11,1,puVar8);
        }
      }
      else if (bVar6) {
LAB_0055a38c:
        (*pcVar20)(plVar2,plVar11,1,lVar7);
      }
      else {
LAB_0055a41c:
        (*pcVar20)(plVar11,1,lVar7);
      }
LAB_0055a42c:
      lVar13 = lVar13 + 1;
      if (lVar13 == lVar14) {
        return;
      }
    } while( true );
  }
LAB_00c39d44:
                    /* WARNING: Subroutine does not return */
  native_sub_432810();
}



/* UISpriteCollection$$OnMove @ 0xc39c5c
 * void UISpriteCollection__OnMove (UISpriteCollection_o* __this, UnityEngine_Vector2_o delta, const MethodInfo* method); */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* UISpriteCollection$$OnMove
   void UISpriteCollection__OnMove (UISpriteCollection_o* __this, UnityEngine_Vector2_o delta, const
   MethodInfo* method); */

void native_UISpriteCollection__OnMove_c39c5c(long param_1)

{
  long *plVar1;
  ushort uVar2;
  bool bVar3;
  long lVar4;
  undefined8 uVar5;
  undefined8 *puVar6;
  ulong uVar7;
  ulong uVar8;
  long lVar9;
  long lVar10;
  long *plVar11;
  long lVar12;
  int *piVar13;
  code *pcVar14;
  long lVar15;
  long *plVar16;
  long lStack_58;
  
  if ((bRam000000000134277a & 1) == 0) {
    native_sub_43273c(&UnityEngine_Object_TypeInfo_12d54e0);
    bRam000000000134277a = 1;
  }
  if (((*(byte *)(_UnityEngine_Object_TypeInfo_12d54e0 + 0x133) >> 2 & 1) != 0) &&
     (*(int *)(_UnityEngine_Object_TypeInfo_12d54e0 + 0xe0) == 0)) {
    native_sub_4327ec();
  }
  uVar8 = native_UnityEngine_Object__op_Implicit_8e1b98(param_1,0);
  if (((uVar8 & 1) == 0) || (*(long *)(param_1 + 0x218) == 0)) {
    return;
  }
  lVar9 = native_UISpriteCollection__GetCurrentSpriteID_c392a0(param_1);
  lVar10 = *(long *)(param_1 + 0x240);
  if (lVar10 == lVar9) {
    return;
  }
  if (lVar10 != 0) {
    if (*(long *)(param_1 + 0x218) == 0) goto LAB_00c39d44;
    native_UISpriteCollection_OnHoverCB__Invoke_55a0c0(*(long *)(param_1 + 0x218),lVar10,0,0);
  }
  plVar11 = (long *)(param_1 + 0x240);
  *plVar11 = lVar9;
  native_sub_4326e0(plVar11,lVar9);
  plVar11 = (long *)*plVar11;
  if (plVar11 == (long *)0x0) {
    return;
  }
  lVar9 = *(long *)(param_1 + 0x218);
  if (lVar9 != 0) {
    lStack_58 = lVar9;
    lVar10 = *(long *)(lVar9 + 0x68);
    if (lVar10 == 0) {
      plVar16 = &lStack_58;
      lVar15 = 1;
    }
    else {
      lVar15 = *(long *)(lVar10 + 0x18);
      if (lVar15 == 0) {
        return;
      }
      plVar16 = (long *)(lVar10 + 0x20);
    }
    lVar10 = 0;
    do {
      lVar12 = plVar16[lVar10];
      plVar1 = *(long **)(lVar12 + 0x20);
      lVar4 = *(long *)(lVar12 + 0x28);
      pcVar14 = *(code **)(lVar12 + 0x10);
      if (*(short *)(lVar4 + 0x48) == -1) {
        native_sub_4327f4(lVar4);
      }
      uVar8 = native_sub_432768(lVar4);
      bVar3 = *(char *)(lVar4 + 0x4a) != '\x02';
      if ((uVar8 & 1) == 0) {
        if (bVar3) {
          if ((*(short *)(lVar4 + 0x48) == -1) || (*(long *)(lVar9 + 0x18) == 0)) goto LAB_0055a41c;
          uVar8 = native_sub_432760(lVar4);
          uVar7 = native_sub_432b64(lVar4);
          if ((uVar8 & 1) == 0) {
            uVar2 = *(ushort *)(lVar4 + 0x48);
            if ((uVar7 & 1) == 0) {
              lVar4 = *plVar11 + (ulong)uVar2 * 0x10;
              (**(code **)(lVar4 + 0x138))(plVar11,1,*(undefined8 *)(lVar4 + 0x140));
              goto LAB_0055a42c;
            }
            lVar4 = native_sub_432764(lVar4);
            lVar12 = *plVar11;
            if ((ulong)*(ushort *)(lVar12 + 0x12a) != 0) {
              uVar8 = 0;
              piVar13 = (int *)(*(long *)(lVar12 + 0xb0) + 8);
              do {
                if (*(long *)(piVar13 + -2) == lVar4) {
                  puVar6 = (undefined8 *)
                           (lVar12 + (long)(int)(*piVar13 + (uint)uVar2) * 0x10 + 0x138);
                  goto LAB_0055a240;
                }
                uVar8 = uVar8 + 1;
                piVar13 = piVar13 + 4;
              } while (uVar8 < *(ushort *)(lVar12 + 0x12a));
            }
            puVar6 = (undefined8 *)native_sub_3c9b34(plVar11,lVar4,(ulong)uVar2);
LAB_0055a240:
            pcVar14 = (code *)*puVar6;
            puVar6 = (undefined8 *)puVar6[1];
          }
          else {
            if ((uVar7 & 1) == 0) {
              uVar5 = *(undefined8 *)(*plVar11 + (ulong)*(ushort *)(lVar4 + 0x48) * 0x10 + 0x140);
            }
            else {
              lVar12 = *plVar11;
              if ((ulong)*(ushort *)(lVar12 + 0x12a) != 0) {
                uVar8 = 0;
                piVar13 = (int *)(*(long *)(lVar12 + 0xb0) + 8);
                do {
                  if (*(long *)(piVar13 + -2) == *(long *)(lVar4 + 0x18)) {
                    lVar12 = lVar12 + (long)(int)(*piVar13 + (uint)*(ushort *)(lVar4 + 0x48)) * 0x10
                             + 0x138;
                    goto LAB_0055a218;
                  }
                  uVar8 = uVar8 + 1;
                  piVar13 = piVar13 + 4;
                } while (uVar8 < *(ushort *)(lVar12 + 0x12a));
              }
              lVar12 = native_sub_3c9b34(plVar11);
LAB_0055a218:
              uVar5 = *(undefined8 *)(lVar12 + 8);
            }
            puVar6 = (undefined8 *)native_sub_4327e8(uVar5,lVar4);
            pcVar14 = (code *)*puVar6;
          }
          (*pcVar14)(plVar11,1,puVar6);
        }
        else {
          if ((((plVar1 == (long *)0x0) || (*(short *)(lVar4 + 0x48) == -1)) ||
              ((*(byte *)(*plVar1 + 0x115) & 1) != 0)) || (*(long *)(lVar9 + 0x18) == 0))
          goto LAB_0055a38c;
          uVar8 = native_sub_432760(lVar4);
          uVar7 = native_sub_432b64(lVar4);
          if ((uVar8 & 1) == 0) {
            uVar2 = *(ushort *)(lVar4 + 0x48);
            if ((uVar7 & 1) == 0) {
              lVar4 = *plVar1 + (ulong)uVar2 * 0x10;
              (**(code **)(lVar4 + 0x138))(plVar1,plVar11,1,*(undefined8 *)(lVar4 + 0x140));
              goto LAB_0055a42c;
            }
            lVar4 = native_sub_432764(lVar4);
            lVar12 = *plVar1;
            if ((ulong)*(ushort *)(lVar12 + 0x12a) != 0) {
              uVar8 = 0;
              piVar13 = (int *)(*(long *)(lVar12 + 0xb0) + 8);
              do {
                if (*(long *)(piVar13 + -2) == lVar4) {
                  puVar6 = (undefined8 *)
                           (lVar12 + (long)(int)(*piVar13 + (uint)uVar2) * 0x10 + 0x138);
                  goto LAB_0055a2ac;
                }
                uVar8 = uVar8 + 1;
                piVar13 = piVar13 + 4;
              } while (uVar8 < *(ushort *)(lVar12 + 0x12a));
            }
            puVar6 = (undefined8 *)native_sub_3c9b34(plVar1,lVar4,(ulong)uVar2);
LAB_0055a2ac:
            pcVar14 = (code *)*puVar6;
            puVar6 = (undefined8 *)puVar6[1];
          }
          else {
            if ((uVar7 & 1) == 0) {
              uVar5 = *(undefined8 *)(*plVar1 + (ulong)*(ushort *)(lVar4 + 0x48) * 0x10 + 0x140);
            }
            else {
              lVar12 = *plVar1;
              if ((ulong)*(ushort *)(lVar12 + 0x12a) != 0) {
                uVar8 = 0;
                piVar13 = (int *)(*(long *)(lVar12 + 0xb0) + 8);
                do {
                  if (*(long *)(piVar13 + -2) == *(long *)(lVar4 + 0x18)) {
                    lVar12 = lVar12 + (long)(int)(*piVar13 + (uint)*(ushort *)(lVar4 + 0x48)) * 0x10
                             + 0x138;
                    goto LAB_0055a284;
                  }
                  uVar8 = uVar8 + 1;
                  piVar13 = piVar13 + 4;
                } while (uVar8 < *(ushort *)(lVar12 + 0x12a));
              }
              lVar12 = native_sub_3c9b34(plVar1);
LAB_0055a284:
              uVar5 = *(undefined8 *)(lVar12 + 8);
            }
            puVar6 = (undefined8 *)native_sub_4327e8(uVar5,lVar4);
            pcVar14 = (code *)*puVar6;
          }
          (*pcVar14)(plVar1,plVar11,1,puVar6);
        }
      }
      else if (bVar3) {
LAB_0055a38c:
        (*pcVar14)(plVar1,plVar11,1,lVar4);
      }
      else {
LAB_0055a41c:
        (*pcVar14)(plVar11,1,lVar4);
      }
LAB_0055a42c:
      lVar10 = lVar10 + 1;
      if (lVar10 == lVar15) {
        return;
      }
    } while( true );
  }
LAB_00c39d44:
                    /* WARNING: Subroutine does not return */
  native_sub_432810();
}



/* UISpriteCollection$$OnDrag @ 0xc39d48
 * void UISpriteCollection__OnDrag (UISpriteCollection_o* __this, UnityEngine_Vector2_o delta, const MethodInfo* method); */

/* UISpriteCollection$$OnDrag
   void UISpriteCollection__OnDrag (UISpriteCollection_o* __this, UnityEngine_Vector2_o delta, const
   MethodInfo* method); */

void native_UISpriteCollection__OnDrag_c39d48(undefined8 param_1,undefined8 param_2,long param_3)

{
  long *plVar1;
  ushort uVar2;
  bool bVar3;
  long lVar4;
  undefined8 uVar5;
  undefined8 *puVar6;
  ulong uVar7;
  ulong uVar8;
  long lVar9;
  long *plVar10;
  long lVar11;
  long lVar12;
  int *piVar13;
  code *pcVar14;
  long lVar15;
  long *plVar16;
  long lStack_68;
  
  lVar9 = *(long *)(param_3 + 0x230);
  if ((lVar9 == 0) || (plVar10 = *(long **)(param_3 + 0x248), plVar10 == (long *)0x0)) {
    return;
  }
  lStack_68 = lVar9;
  lVar11 = *(long *)(lVar9 + 0x68);
  if (lVar11 == 0) {
    plVar16 = &lStack_68;
    lVar15 = 1;
  }
  else {
    lVar15 = *(long *)(lVar11 + 0x18);
    if (lVar15 == 0) {
      return;
    }
    plVar16 = (long *)(lVar11 + 0x20);
  }
  lVar11 = 0;
  do {
    lVar12 = plVar16[lVar11];
    plVar1 = *(long **)(lVar12 + 0x20);
    lVar4 = *(long *)(lVar12 + 0x28);
    pcVar14 = *(code **)(lVar12 + 0x10);
    if (*(short *)(lVar4 + 0x48) == -1) {
      native_sub_4327f4(lVar4);
    }
    uVar7 = native_sub_432768(lVar4);
    bVar3 = *(char *)(lVar4 + 0x4a) != '\x02';
    if ((uVar7 & 1) == 0) {
      if (bVar3) {
        if ((*(short *)(lVar4 + 0x48) == -1) || (*(long *)(lVar9 + 0x18) == 0)) goto LAB_00559f70;
        uVar7 = native_sub_432760(lVar4);
        uVar8 = native_sub_432b64(lVar4);
        if ((uVar7 & 1) == 0) {
          uVar2 = *(ushort *)(lVar4 + 0x48);
          if ((uVar8 & 1) == 0) {
            lVar4 = *plVar10 + (ulong)uVar2 * 0x10;
            (**(code **)(lVar4 + 0x138))(param_1,param_2,plVar10,*(undefined8 *)(lVar4 + 0x140));
            goto LAB_00559f84;
          }
          lVar4 = native_sub_432764(lVar4);
          lVar12 = *plVar10;
          if ((ulong)*(ushort *)(lVar12 + 0x12a) != 0) {
            uVar7 = 0;
            piVar13 = (int *)(*(long *)(lVar12 + 0xb0) + 8);
            do {
              if (*(long *)(piVar13 + -2) == lVar4) {
                puVar6 = (undefined8 *)(lVar12 + (long)(int)(*piVar13 + (uint)uVar2) * 0x10 + 0x138)
                ;
                goto LAB_00559d84;
              }
              uVar7 = uVar7 + 1;
              piVar13 = piVar13 + 4;
            } while (uVar7 < *(ushort *)(lVar12 + 0x12a));
          }
          puVar6 = (undefined8 *)native_sub_3c9b34(plVar10,lVar4,(ulong)uVar2);
LAB_00559d84:
          pcVar14 = (code *)*puVar6;
          puVar6 = (undefined8 *)puVar6[1];
        }
        else {
          if ((uVar8 & 1) == 0) {
            uVar5 = *(undefined8 *)(*plVar10 + (ulong)*(ushort *)(lVar4 + 0x48) * 0x10 + 0x140);
          }
          else {
            lVar12 = *plVar10;
            if ((ulong)*(ushort *)(lVar12 + 0x12a) != 0) {
              uVar7 = 0;
              piVar13 = (int *)(*(long *)(lVar12 + 0xb0) + 8);
              do {
                if (*(long *)(piVar13 + -2) == *(long *)(lVar4 + 0x18)) {
                  lVar12 = lVar12 + (long)(int)(*piVar13 + (uint)*(ushort *)(lVar4 + 0x48)) * 0x10 +
                           0x138;
                  goto LAB_00559d5c;
                }
                uVar7 = uVar7 + 1;
                piVar13 = piVar13 + 4;
              } while (uVar7 < *(ushort *)(lVar12 + 0x12a));
            }
            lVar12 = native_sub_3c9b34(plVar10);
LAB_00559d5c:
            uVar5 = *(undefined8 *)(lVar12 + 8);
          }
          puVar6 = (undefined8 *)native_sub_4327e8(uVar5,lVar4);
          pcVar14 = (code *)*puVar6;
        }
        (*pcVar14)(param_1,param_2,plVar10,puVar6);
      }
      else {
        if ((((plVar1 == (long *)0x0) || (*(short *)(lVar4 + 0x48) == -1)) ||
            ((*(byte *)(*plVar1 + 0x115) & 1) != 0)) || (*(long *)(lVar9 + 0x18) == 0))
        goto LAB_00559edc;
        uVar7 = native_sub_432760(lVar4);
        uVar8 = native_sub_432b64(lVar4);
        if ((uVar7 & 1) == 0) {
          uVar2 = *(ushort *)(lVar4 + 0x48);
          if ((uVar8 & 1) == 0) {
            lVar4 = *plVar1 + (ulong)uVar2 * 0x10;
            (**(code **)(lVar4 + 0x138))
                      (param_1,param_2,plVar1,plVar10,*(undefined8 *)(lVar4 + 0x140));
            goto LAB_00559f84;
          }
          lVar4 = native_sub_432764(lVar4);
          lVar12 = *plVar1;
          if ((ulong)*(ushort *)(lVar12 + 0x12a) != 0) {
            uVar7 = 0;
            piVar13 = (int *)(*(long *)(lVar12 + 0xb0) + 8);
            do {
              if (*(long *)(piVar13 + -2) == lVar4) {
                puVar6 = (undefined8 *)(lVar12 + (long)(int)(*piVar13 + (uint)uVar2) * 0x10 + 0x138)
                ;
                goto LAB_00559df8;
              }
              uVar7 = uVar7 + 1;
              piVar13 = piVar13 + 4;
            } while (uVar7 < *(ushort *)(lVar12 + 0x12a));
          }
          puVar6 = (undefined8 *)native_sub_3c9b34(plVar1,lVar4,(ulong)uVar2);
LAB_00559df8:
          pcVar14 = (code *)*puVar6;
          puVar6 = (undefined8 *)puVar6[1];
        }
        else {
          if ((uVar8 & 1) == 0) {
            uVar5 = *(undefined8 *)(*plVar1 + (ulong)*(ushort *)(lVar4 + 0x48) * 0x10 + 0x140);
          }
          else {
            lVar12 = *plVar1;
            if ((ulong)*(ushort *)(lVar12 + 0x12a) != 0) {
              uVar7 = 0;
              piVar13 = (int *)(*(long *)(lVar12 + 0xb0) + 8);
              do {
                if (*(long *)(piVar13 + -2) == *(long *)(lVar4 + 0x18)) {
                  lVar12 = lVar12 + (long)(int)(*piVar13 + (uint)*(ushort *)(lVar4 + 0x48)) * 0x10 +
                           0x138;
                  goto LAB_00559dd0;
                }
                uVar7 = uVar7 + 1;
                piVar13 = piVar13 + 4;
              } while (uVar7 < *(ushort *)(lVar12 + 0x12a));
            }
            lVar12 = native_sub_3c9b34(plVar1);
LAB_00559dd0:
            uVar5 = *(undefined8 *)(lVar12 + 8);
          }
          puVar6 = (undefined8 *)native_sub_4327e8(uVar5,lVar4);
          pcVar14 = (code *)*puVar6;
        }
        (*pcVar14)(param_1,param_2,plVar1,plVar10,puVar6);
      }
    }
    else if (bVar3) {
LAB_00559edc:
      (*pcVar14)(param_1,param_2,plVar1,plVar10,lVar4);
    }
    else {
LAB_00559f70:
      (*pcVar14)(param_1,param_2,plVar10,lVar4);
    }
LAB_00559f84:
    lVar11 = lVar11 + 1;
    if (lVar11 == lVar15) {
      return;
    }
  } while( true );
}



/* UISpriteCollection$$OnTooltip @ 0xc39d68
 * void UISpriteCollection__OnTooltip (UISpriteCollection_o* __this, bool show, const MethodInfo* method); */

/* UISpriteCollection$$OnTooltip
   void UISpriteCollection__OnTooltip (UISpriteCollection_o* __this, bool show, const MethodInfo*
   method); */

void native_UISpriteCollection__OnTooltip_c39d68(long param_1,uint param_2)

{
  ulong *puVar1;
  long *plVar2;
  ushort uVar3;
  char cVar4;
  bool bVar5;
  long lVar6;
  undefined8 *puVar7;
  ulong uVar8;
  ulong uVar9;
  long lVar10;
  undefined8 uVar11;
  long lVar12;
  long *plVar13;
  long lVar14;
  int *piVar15;
  code *pcVar16;
  long lVar17;
  long *plVar18;
  long lStack_58;
  
  lVar10 = *(long *)(param_1 + 0x238);
  if (lVar10 == 0) {
    return;
  }
  lVar12 = *(long *)(param_1 + 0x250);
  puVar7 = (undefined8 *)(param_1 + 0x250);
  if ((param_2 & 1) == 0) {
    native_UISpriteCollection_OnTooltipCB__Invoke_55aa10(lVar10,lVar12,0,0);
    *puVar7 = 0;
    if (iRam0000000001345318 != 0) {
      puVar1 = (ulong *)(((ulong)puVar7 >> 0x12 & 0x7fff) * 8 + 0x138ecd8);
      do {
        cVar4 = '\x01';
        bVar5 = (bool)ExclusiveMonitorPass(puVar1,0x10);
        if (bVar5) {
          *puVar1 = *puVar1 | 1L << ((ulong)puVar7 >> 0xc & 0x3f);
          cVar4 = ExclusiveMonitorsStatus();
        }
      } while (cVar4 != '\0');
    }
    return;
  }
  if (lVar12 != 0) {
    native_UISpriteCollection_OnTooltipCB__Invoke_55aa10(lVar10,lVar12,0,0);
  }
  uVar11 = native_UISpriteCollection__GetCurrentSpriteID_c392a0(param_1);
  *(undefined8 *)(param_1 + 0x250) = uVar11;
  native_sub_4326e0(puVar7,uVar11);
  plVar13 = *(long **)(param_1 + 0x250);
  if (plVar13 == (long *)0x0) {
    return;
  }
  lVar10 = *(long *)(param_1 + 0x238);
  if (lVar10 == 0) {
                    /* WARNING: Subroutine does not return */
    native_sub_432810();
  }
  lStack_58 = lVar10;
  lVar12 = *(long *)(lVar10 + 0x68);
  if (lVar12 == 0) {
    plVar18 = &lStack_58;
    lVar17 = 1;
  }
  else {
    lVar17 = *(long *)(lVar12 + 0x18);
    if (lVar17 == 0) {
      return;
    }
    plVar18 = (long *)(lVar12 + 0x20);
  }
  lVar12 = 0;
  do {
    lVar14 = plVar18[lVar12];
    plVar2 = *(long **)(lVar14 + 0x20);
    lVar6 = *(long *)(lVar14 + 0x28);
    pcVar16 = *(code **)(lVar14 + 0x10);
    if (*(short *)(lVar6 + 0x48) == -1) {
      native_sub_4327f4(lVar6);
    }
    uVar8 = native_sub_432768(lVar6);
    bVar5 = *(char *)(lVar6 + 0x4a) != '\x02';
    if ((uVar8 & 1) == 0) {
      if (bVar5) {
        if ((*(short *)(lVar6 + 0x48) == -1) || (*(long *)(lVar10 + 0x18) == 0)) goto LAB_0055ad6c;
        uVar8 = native_sub_432760(lVar6);
        uVar9 = native_sub_432b64(lVar6);
        if ((uVar8 & 1) == 0) {
          uVar3 = *(ushort *)(lVar6 + 0x48);
          if ((uVar9 & 1) == 0) {
            lVar6 = *plVar13 + (ulong)uVar3 * 0x10;
            (**(code **)(lVar6 + 0x138))(plVar13,1,*(undefined8 *)(lVar6 + 0x140));
            goto LAB_0055ad7c;
          }
          lVar6 = native_sub_432764(lVar6);
          lVar14 = *plVar13;
          if ((ulong)*(ushort *)(lVar14 + 0x12a) != 0) {
            uVar8 = 0;
            piVar15 = (int *)(*(long *)(lVar14 + 0xb0) + 8);
            do {
              if (*(long *)(piVar15 + -2) == lVar6) {
                puVar7 = (undefined8 *)(lVar14 + (long)(int)(*piVar15 + (uint)uVar3) * 0x10 + 0x138)
                ;
                goto LAB_0055ab90;
              }
              uVar8 = uVar8 + 1;
              piVar15 = piVar15 + 4;
            } while (uVar8 < *(ushort *)(lVar14 + 0x12a));
          }
          puVar7 = (undefined8 *)native_sub_3c9b34(plVar13,lVar6,(ulong)uVar3);
LAB_0055ab90:
          pcVar16 = (code *)*puVar7;
          puVar7 = (undefined8 *)puVar7[1];
        }
        else {
          if ((uVar9 & 1) == 0) {
            uVar11 = *(undefined8 *)(*plVar13 + (ulong)*(ushort *)(lVar6 + 0x48) * 0x10 + 0x140);
          }
          else {
            lVar14 = *plVar13;
            if ((ulong)*(ushort *)(lVar14 + 0x12a) != 0) {
              uVar8 = 0;
              piVar15 = (int *)(*(long *)(lVar14 + 0xb0) + 8);
              do {
                if (*(long *)(piVar15 + -2) == *(long *)(lVar6 + 0x18)) {
                  lVar14 = lVar14 + (long)(int)(*piVar15 + (uint)*(ushort *)(lVar6 + 0x48)) * 0x10 +
                           0x138;
                  goto LAB_0055ab68;
                }
                uVar8 = uVar8 + 1;
                piVar15 = piVar15 + 4;
              } while (uVar8 < *(ushort *)(lVar14 + 0x12a));
            }
            lVar14 = native_sub_3c9b34(plVar13);
LAB_0055ab68:
            uVar11 = *(undefined8 *)(lVar14 + 8);
          }
          puVar7 = (undefined8 *)native_sub_4327e8(uVar11,lVar6);
          pcVar16 = (code *)*puVar7;
        }
        (*pcVar16)(plVar13,1,puVar7);
      }
      else {
        if ((((plVar2 == (long *)0x0) || (*(short *)(lVar6 + 0x48) == -1)) ||
            ((*(byte *)(*plVar2 + 0x115) & 1) != 0)) || (*(long *)(lVar10 + 0x18) == 0))
        goto LAB_0055acdc;
        uVar8 = native_sub_432760(lVar6);
        uVar9 = native_sub_432b64(lVar6);
        if ((uVar8 & 1) == 0) {
          uVar3 = *(ushort *)(lVar6 + 0x48);
          if ((uVar9 & 1) == 0) {
            lVar6 = *plVar2 + (ulong)uVar3 * 0x10;
            (**(code **)(lVar6 + 0x138))(plVar2,plVar13,1,*(undefined8 *)(lVar6 + 0x140));
            goto LAB_0055ad7c;
          }
          lVar6 = native_sub_432764(lVar6);
          lVar14 = *plVar2;
          if ((ulong)*(ushort *)(lVar14 + 0x12a) != 0) {
            uVar8 = 0;
            piVar15 = (int *)(*(long *)(lVar14 + 0xb0) + 8);
            do {
              if (*(long *)(piVar15 + -2) == lVar6) {
                puVar7 = (undefined8 *)(lVar14 + (long)(int)(*piVar15 + (uint)uVar3) * 0x10 + 0x138)
                ;
                goto LAB_0055abfc;
              }
              uVar8 = uVar8 + 1;
              piVar15 = piVar15 + 4;
            } while (uVar8 < *(ushort *)(lVar14 + 0x12a));
          }
          puVar7 = (undefined8 *)native_sub_3c9b34(plVar2,lVar6,(ulong)uVar3);
LAB_0055abfc:
          pcVar16 = (code *)*puVar7;
          puVar7 = (undefined8 *)puVar7[1];
        }
        else {
          if ((uVar9 & 1) == 0) {
            uVar11 = *(undefined8 *)(*plVar2 + (ulong)*(ushort *)(lVar6 + 0x48) * 0x10 + 0x140);
          }
          else {
            lVar14 = *plVar2;
            if ((ulong)*(ushort *)(lVar14 + 0x12a) != 0) {
              uVar8 = 0;
              piVar15 = (int *)(*(long *)(lVar14 + 0xb0) + 8);
              do {
                if (*(long *)(piVar15 + -2) == *(long *)(lVar6 + 0x18)) {
                  lVar14 = lVar14 + (long)(int)(*piVar15 + (uint)*(ushort *)(lVar6 + 0x48)) * 0x10 +
                           0x138;
                  goto LAB_0055abd4;
                }
                uVar8 = uVar8 + 1;
                piVar15 = piVar15 + 4;
              } while (uVar8 < *(ushort *)(lVar14 + 0x12a));
            }
            lVar14 = native_sub_3c9b34(plVar2);
LAB_0055abd4:
            uVar11 = *(undefined8 *)(lVar14 + 8);
          }
          puVar7 = (undefined8 *)native_sub_4327e8(uVar11,lVar6);
          pcVar16 = (code *)*puVar7;
        }
        (*pcVar16)(plVar2,plVar13,1,puVar7);
      }
    }
    else if (bVar5) {
LAB_0055acdc:
      (*pcVar16)(plVar2,plVar13,1,lVar6);
    }
    else {
LAB_0055ad6c:
      (*pcVar16)(plVar13,1,lVar6);
    }
LAB_0055ad7c:
    lVar12 = lVar12 + 1;
    if (lVar12 == lVar17) {
      return;
    }
  } while( true );
}



/* UISpriteCollection$$.ctor @ 0xc39e10
 * void UISpriteCollection___ctor (UISpriteCollection_o* __this, const MethodInfo* method); */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* UISpriteCollection$$.ctor
   void UISpriteCollection___ctor (UISpriteCollection_o* __this, const MethodInfo* method); */

void native_UISpriteCollection___ctor_c39e10
               (undefined1 param_1 [16],undefined4 param_2,undefined4 param_3,undefined4 param_4,
               long param_5)

{
  undefined8 uVar1;
  undefined4 uVar2;
  undefined8 uStack_30;
  undefined8 uStack_28;
  
  if ((bRam000000000134277b & 1) == 0) {
    native_sub_43273c(&
                      Method_System_Collections_Generic_Dictionary_object__UISpriteCollection_Sprite___ctor___12d9620
                     );
    native_sub_43273c(&
                      System_Collections_Generic_Dictionary_object__UISpriteCollection_Sprite__TypeInfo_12d2340
                     );
    native_sub_43273c(&UIBasicSprite_TypeInfo_12d6400);
    bRam000000000134277b = 1;
  }
  uVar1 = native_sub_432808(
                           _System_Collections_Generic_Dictionary_object__UISpriteCollection_Sprite__TypeInfo_12d2340
                           );
  native_System_Collections_Generic_Dictionary_object__UISpriteCollection_Sprite____ctor_ce33d0
            (uVar1,
             _Method_System_Collections_Generic_Dictionary_object__UISpriteCollection_Sprite___ctor___12d9620
            );
  *(undefined8 *)(param_5 + 0x208) = uVar1;
  native_sub_4326e0(param_5 + 0x208,uVar1);
  if (((*(byte *)(_UIBasicSprite_TypeInfo_12d6400 + 0x133) >> 2 & 1) != 0) &&
     (*(int *)(_UIBasicSprite_TypeInfo_12d6400 + 0xe0) == 0)) {
    native_sub_4327ec();
  }
  *(undefined8 *)(param_5 + 0x194) = 0x3f80000000000004;
  uVar2 = native_UnityEngine_Color__get_white_8d9e10(0,0);
  *(undefined4 *)(param_5 + 0x1a8) = uVar2;
  *(undefined4 *)(param_5 + 0x1ac) = param_2;
  *(undefined4 *)(param_5 + 0x1b0) = param_3;
  *(undefined4 *)(param_5 + 0x1b4) = param_4;
  uStack_30 = 0;
  uStack_28 = 0;
  native_UnityEngine_Color___ctor_8d9818(0x3f333333,0x3f333333,0x3f333333,&uStack_30,0);
  *(undefined8 *)(param_5 + 0x1c0) = uStack_28;
  *(undefined8 *)(param_5 + 0x1b8) = uStack_30;
  *(undefined8 *)(param_5 + 0x1f0) = 0x100000001;
  *(undefined8 *)(param_5 + 0x1e8) = 0x100000001;
  *(undefined4 *)(param_5 + 0x1f8) = 1;
  native_UIWidget___ctor_94cd14(param_5,0);
  return;
}


