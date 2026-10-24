/* ARM64 IL2CPP native pseudocode from Ghidra.
 * Recovered implementation, not original C# source.
 * Function boundaries follow the IL2CPP method address table. */


/* UI2DSprite$$get_sprite2D @ 0x6e81b4
 * UnityEngine_Sprite_o* UI2DSprite__get_sprite2D (UI2DSprite_o* __this, const MethodInfo* method); */

/* UI2DSprite$$get_sprite2D
   UnityEngine_Sprite_o* UI2DSprite__get_sprite2D (UI2DSprite_o* __this, const MethodInfo* method);
    */

undefined8 native_UI2DSprite__get_sprite2D_6e81b4(long param_1)

{
  return *(undefined8 *)(param_1 + 0x200);
}



/* UI2DSprite$$set_sprite2D @ 0x6e81bc
 * void UI2DSprite__set_sprite2D (UI2DSprite_o* __this, UnityEngine_Sprite_o* value, const MethodInfo* method); */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* UI2DSprite$$set_sprite2D
   void UI2DSprite__set_sprite2D (UI2DSprite_o* __this, UnityEngine_Sprite_o* value, const
   MethodInfo* method); */

ulong native_UI2DSprite__set_sprite2D_6e81bc(long *param_1,long param_2)

{
  ulong *puVar1;
  undefined4 uVar2;
  ulong uVar3;
  undefined8 uVar4;
  long lVar5;
  
  if ((bRam000000000133f3c0 & 1) == 0) {
    native_sub_43273c(&UnityEngine_Object_TypeInfo_12d54e0);
    bRam000000000133f3c0 = 1;
  }
  lVar5 = param_1[0x40];
  if (((*(byte *)(_UnityEngine_Object_TypeInfo_12d54e0 + 0x133) >> 2 & 1) != 0) &&
     (*(int *)(_UnityEngine_Object_TypeInfo_12d54e0 + 0xe0) == 0)) {
    native_sub_4327ec();
  }
  uVar3 = native_UnityEngine_Object__op_Inequality_8d76fc(lVar5,param_2,0);
  if ((uVar3 & 1) == 0) {
    return uVar3;
  }
  native_UIWidget__RemoveFromPanel_944688(param_1,0);
  param_1[0x40] = param_2;
  native_sub_4326e0(param_1 + 0x40,param_2);
  param_1[0x45] = 0;
  native_sub_4326e0(param_1 + 0x45,0);
  if ((bRam0000000001341464 & 1) == 0) {
    native_sub_43273c(&NGUITools_TypeInfo_12d53c8,0);
    native_sub_43273c(&UnityEngine_Object_TypeInfo_12d54e0);
    native_sub_43273c(&UIPanel_TypeInfo_12d6478);
    bRam0000000001341464 = 1;
  }
  puVar1 = (ulong *)(param_1 + 0x1e);
  if ((char)param_1[0x11] != '\0') {
    uVar3 = *puVar1;
    if (((*(byte *)(_UnityEngine_Object_TypeInfo_12d54e0 + 0x133) >> 2 & 1) != 0) &&
       (*(int *)(_UnityEngine_Object_TypeInfo_12d54e0 + 0xe0) == 0)) {
      native_sub_4327ec();
    }
    uVar3 = native_UnityEngine_Object__op_Equality_8e9a3c(uVar3,0,0);
    if (((uVar3 & 1) != 0) &&
       (uVar3 = native_UnityEngine_Behaviour__get_enabled_8d7acc(param_1,0), (uVar3 & 1) != 0)) {
      uVar4 = native_UnityEngine_Component__get_gameObject_8da66c(param_1,0);
      if (((*(byte *)(_NGUITools_TypeInfo_12d53c8 + 0x133) >> 2 & 1) != 0) &&
         (*(int *)(_NGUITools_TypeInfo_12d53c8 + 0xe0) == 0)) {
        native_sub_4327ec(_NGUITools_TypeInfo_12d53c8);
      }
      uVar3 = native_NGUITools__GetActive_72d0d4(uVar4,0);
      if ((uVar3 & 1) != 0) {
        uVar4 = native_UIRect__get_cachedTransform_c27c58(param_1,0);
        lVar5 = native_UIRect__get_cachedGameObject_c2d1c0(param_1,0);
        if (lVar5 == 0) {
LAB_0094a1c4:
                    /* WARNING: Subroutine does not return */
          native_sub_432810();
        }
        uVar2 = native_UnityEngine_GameObject__get_layer_8de608(lVar5,0);
        if (((*(byte *)(_UIPanel_TypeInfo_12d6478 + 0x133) >> 2 & 1) != 0) &&
           (*(int *)(_UIPanel_TypeInfo_12d6478 + 0xe0) == 0)) {
          native_sub_4327ec(_UIPanel_TypeInfo_12d6478);
        }
        uVar3 = native_UIPanel__Find_af4e6c(uVar4,1,uVar2,0);
        *puVar1 = uVar3;
        native_sub_4326e0(puVar1,uVar3);
        uVar3 = *puVar1;
        if (((*(byte *)(_UnityEngine_Object_TypeInfo_12d54e0 + 0x133) >> 2 & 1) != 0) &&
           (*(int *)(_UnityEngine_Object_TypeInfo_12d54e0 + 0xe0) == 0)) {
          native_sub_4327ec();
        }
        uVar3 = native_UnityEngine_Object__op_Inequality_8d76fc(uVar3,0,0);
        if ((uVar3 & 1) != 0) {
          *(undefined1 *)((long)param_1 + 0x59) = 0;
          if (param_1[0x1e] == 0) goto LAB_0094a1c4;
          native_UIPanel__AddWidget_af45bc(param_1[0x1e],param_1,0);
          native_UIWidget__CheckLayer_94b7f0(param_1);
          (**(code **)(*param_1 + 0x1f8))(param_1,1,*(undefined8 *)(*param_1 + 0x200));
        }
      }
    }
  }
  return *puVar1;
}



/* UI2DSprite$$get_material @ 0x6e8284
 * UnityEngine_Material_o* UI2DSprite__get_material (UI2DSprite_o* __this, const MethodInfo* method); */

/* UI2DSprite$$get_material
   UnityEngine_Material_o* UI2DSprite__get_material (UI2DSprite_o* __this, const MethodInfo*
   method); */

undefined8 native_UI2DSprite__get_material_6e8284(long param_1)

{
  return *(undefined8 *)(param_1 + 0xb8);
}



/* UI2DSprite$$set_material @ 0x6e828c
 * void UI2DSprite__set_material (UI2DSprite_o* __this, UnityEngine_Material_o* value, const MethodInfo* method); */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* UI2DSprite$$set_material
   void UI2DSprite__set_material (UI2DSprite_o* __this, UnityEngine_Material_o* value, const
   MethodInfo* method); */

void native_UI2DSprite__set_material_6e828c(long *param_1,long param_2)

{
  ulong uVar1;
  long lVar2;
  
  if ((bRam000000000133f3c1 & 1) == 0) {
    native_sub_43273c(&UnityEngine_Object_TypeInfo_12d54e0);
    bRam000000000133f3c1 = 1;
  }
  lVar2 = param_1[0x17];
  if (((*(byte *)(_UnityEngine_Object_TypeInfo_12d54e0 + 0x133) >> 2 & 1) != 0) &&
     (*(int *)(_UnityEngine_Object_TypeInfo_12d54e0 + 0xe0) == 0)) {
    native_sub_4327ec();
  }
  uVar1 = native_UnityEngine_Object__op_Inequality_8d76fc(lVar2,param_2,0);
  if ((uVar1 & 1) != 0) {
    native_UIWidget__RemoveFromPanel_944688(param_1,0);
    param_1[0x17] = param_2;
    native_sub_4326e0(param_1 + 0x17,param_2);
    *(undefined4 *)(param_1 + 0x46) = 0xffffffff;
                    /* WARNING: Could not recover jumptable at 0x006e8340. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (**(code **)(*param_1 + 0x378))(param_1,*(undefined8 *)(*param_1 + 0x380));
    return;
  }
  return;
}



/* UI2DSprite$$get_shader @ 0x6e8354
 * UnityEngine_Shader_o* UI2DSprite__get_shader (UI2DSprite_o* __this, const MethodInfo* method); */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* UI2DSprite$$get_shader
   UnityEngine_Shader_o* UI2DSprite__get_shader (UI2DSprite_o* __this, const MethodInfo* method); */

undefined8 native_UI2DSprite__get_shader_6e8354(long param_1)

{
  undefined8 *puVar1;
  ulong uVar2;
  long lVar3;
  undefined8 uVar4;
  
  if ((bRam000000000133f3c2 & 1) == 0) {
    native_sub_43273c(&UnityEngine_Object_TypeInfo_12d54e0);
    native_sub_43273c(&StringLiteral_Unlit_Transparent_Colored_12f2c60);
    bRam000000000133f3c2 = 1;
  }
  uVar4 = *(undefined8 *)(param_1 + 0xb8);
  if (((*(byte *)(_UnityEngine_Object_TypeInfo_12d54e0 + 0x133) >> 2 & 1) != 0) &&
     (*(int *)(_UnityEngine_Object_TypeInfo_12d54e0 + 0xe0) == 0)) {
    native_sub_4327ec();
  }
  uVar2 = native_UnityEngine_Object__op_Inequality_8d76fc(uVar4,0,0);
  if ((uVar2 & 1) != 0) {
    lVar3 = *(long *)(param_1 + 0xb8);
    if (lVar3 != 0) {
      if (pcRam0000000001340da0 == (code *)0x0) {
        pcRam0000000001340da0 = (code *)native_sub_4326f0(&UNK_00e2e5af);
      }
                    /* WARNING: Could not recover jumptable at 0x008e30b4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
      uVar4 = (*pcRam0000000001340da0)(lVar3);
      return uVar4;
    }
                    /* WARNING: Subroutine does not return */
    native_sub_432810();
  }
  uVar4 = *(undefined8 *)(param_1 + 0x208);
  if (((*(byte *)(_UnityEngine_Object_TypeInfo_12d54e0 + 0x133) >> 2 & 1) != 0) &&
     (*(int *)(_UnityEngine_Object_TypeInfo_12d54e0 + 0xe0) == 0)) {
    native_sub_4327ec();
  }
  puVar1 = (undefined8 *)(param_1 + 0x208);
  uVar2 = native_UnityEngine_Object__op_Equality_8e9a3c(uVar4,0,0);
  if ((uVar2 & 1) != 0) {
    uVar4 = native_UnityEngine_Shader__Find_76b254
                      (_StringLiteral_Unlit_Transparent_Colored_12f2c60,0);
    *puVar1 = uVar4;
    native_sub_4326e0(puVar1,uVar4);
  }
  return *puVar1;
}



/* UI2DSprite$$set_shader @ 0x6e8458
 * void UI2DSprite__set_shader (UI2DSprite_o* __this, UnityEngine_Shader_o* value, const MethodInfo* method); */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* UI2DSprite$$set_shader
   void UI2DSprite__set_shader (UI2DSprite_o* __this, UnityEngine_Shader_o* value, const MethodInfo*
   method); */

void native_UI2DSprite__set_shader_6e8458(long *param_1,long param_2)

{
  ulong uVar1;
  long lVar2;
  
  if ((bRam000000000133f3c3 & 1) == 0) {
    native_sub_43273c(&UnityEngine_Object_TypeInfo_12d54e0);
    bRam000000000133f3c3 = 1;
  }
  lVar2 = param_1[0x41];
  if (((*(byte *)(_UnityEngine_Object_TypeInfo_12d54e0 + 0x133) >> 2 & 1) != 0) &&
     (*(int *)(_UnityEngine_Object_TypeInfo_12d54e0 + 0xe0) == 0)) {
    native_sub_4327ec();
  }
  uVar1 = native_UnityEngine_Object__op_Inequality_8d76fc(lVar2,param_2,0);
  if ((uVar1 & 1) != 0) {
    native_UIWidget__RemoveFromPanel_944688(param_1,0);
    param_1[0x41] = param_2;
    native_sub_4326e0(param_1 + 0x41,param_2);
    lVar2 = param_1[0x17];
    if (((*(byte *)(_UnityEngine_Object_TypeInfo_12d54e0 + 0x133) >> 2 & 1) != 0) &&
       (*(int *)(_UnityEngine_Object_TypeInfo_12d54e0 + 0xe0) == 0)) {
      native_sub_4327ec();
    }
    uVar1 = native_UnityEngine_Object__op_Equality_8e9a3c(lVar2,0,0);
    if ((uVar1 & 1) != 0) {
      *(undefined4 *)(param_1 + 0x46) = 0xffffffff;
                    /* WARNING: Could not recover jumptable at 0x006e853c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
      (**(code **)(*param_1 + 0x378))(param_1,*(undefined8 *)(*param_1 + 0x380));
      return;
    }
  }
  return;
}



/* UI2DSprite$$get_mainTexture @ 0x6e8550
 * UnityEngine_Texture_o* UI2DSprite__get_mainTexture (UI2DSprite_o* __this, const MethodInfo* method); */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* UI2DSprite$$get_mainTexture
   UnityEngine_Texture_o* UI2DSprite__get_mainTexture (UI2DSprite_o* __this, const MethodInfo*
   method); */

undefined8 native_UI2DSprite__get_mainTexture_6e8550(long param_1)

{
  int iVar1;
  undefined4 uVar2;
  ulong uVar3;
  long lVar4;
  undefined8 uVar5;
  
  if ((bRam000000000133f3c4 & 1) == 0) {
    native_sub_43273c(&UnityEngine_Object_TypeInfo_12d54e0);
    bRam000000000133f3c4 = 1;
  }
  uVar5 = *(undefined8 *)(param_1 + 0x200);
  if (((*(byte *)(_UnityEngine_Object_TypeInfo_12d54e0 + 0x133) >> 2 & 1) != 0) &&
     (*(int *)(_UnityEngine_Object_TypeInfo_12d54e0 + 0xe0) == 0)) {
    native_sub_4327ec();
  }
  uVar3 = native_UnityEngine_Object__op_Inequality_8d76fc(uVar5,0,0);
  if ((uVar3 & 1) == 0) {
    uVar5 = *(undefined8 *)(param_1 + 0xb8);
    if (((*(byte *)(_UnityEngine_Object_TypeInfo_12d54e0 + 0x133) >> 2 & 1) != 0) &&
       (*(int *)(_UnityEngine_Object_TypeInfo_12d54e0 + 0xe0) == 0)) {
      native_sub_4327ec();
    }
    uVar3 = native_UnityEngine_Object__op_Inequality_8d76fc(uVar5,0,0);
    uVar5 = 0;
    if ((uVar3 & 1) != 0) {
      lVar4 = *(long *)(param_1 + 0xb8);
      if (lVar4 != 0) {
        if ((bRam0000000001340db2 & 1) == 0) {
          native_sub_43273c(&StringLiteral__MainTex_12f3608,0);
          bRam0000000001340db2 = 1;
        }
        if (pcRam0000000001340db8 == (code *)0x0) {
          pcRam0000000001340db8 = (code *)native_sub_4326f0(&UNK_00e2e607);
        }
        iVar1 = (*pcRam0000000001340db8)(lVar4,0x80);
        if (-1 < iVar1) {
          if (pcRam0000000001340e28 == (code *)0x0) {
            pcRam0000000001340e28 = (code *)native_sub_4326f0(&UNK_00e2e907);
          }
                    /* WARNING: Could not recover jumptable at 0x008e33d0. Too many branches */
                    /* WARNING: Treating indirect jump as call */
          uVar5 = (*pcRam0000000001340e28)(lVar4,iVar1);
          return uVar5;
        }
        uVar2 = native_UnityEngine_Shader__PropertyToID_76b308(_StringLiteral__MainTex_12f3608,0);
        if (pcRam0000000001340e28 == (code *)0x0) {
          pcRam0000000001340e28 = (code *)native_sub_4326f0(&UNK_00e2e907);
        }
                    /* WARNING: Could not recover jumptable at 0x008e349c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
        uVar5 = (*pcRam0000000001340e28)(lVar4,uVar2);
        return uVar5;
      }
      goto LAB_006e8634;
    }
  }
  else {
    if (*(long *)(param_1 + 0x200) == 0) {
LAB_006e8634:
                    /* WARNING: Subroutine does not return */
      native_sub_432810();
    }
    uVar5 = native_UnityEngine_Sprite__get_texture_76bd60(*(long *)(param_1 + 0x200),0);
  }
  return uVar5;
}



/* UI2DSprite$$get_fixedAspect @ 0x6e8638
 * bool UI2DSprite__get_fixedAspect (UI2DSprite_o* __this, const MethodInfo* method); */

/* UI2DSprite$$get_fixedAspect
   bool UI2DSprite__get_fixedAspect (UI2DSprite_o* __this, const MethodInfo* method); */

undefined1 native_UI2DSprite__get_fixedAspect_6e8638(long param_1)

{
  return *(undefined1 *)(param_1 + 0x220);
}



/* UI2DSprite$$set_fixedAspect @ 0x6e8640
 * void UI2DSprite__set_fixedAspect (UI2DSprite_o* __this, bool value, const MethodInfo* method); */

/* UI2DSprite$$set_fixedAspect
   void UI2DSprite__set_fixedAspect (UI2DSprite_o* __this, bool value, const MethodInfo* method); */

void native_UI2DSprite__set_fixedAspect_6e8640(long *param_1,byte param_2)

{
  undefined8 uStack_30;
  undefined8 uStack_28;
  
  if ((((char)param_1[0x44] != '\0' ^ param_2) & 1) != 0) {
    uStack_28 = 0;
    *(byte *)(param_1 + 0x44) = param_2 & 1;
    uStack_30 = 0;
    native_UnityEngine_Vector4___ctor_776f24(0,0,0x3f800000,0x3f800000,&uStack_30,0);
    *(undefined8 *)((long)param_1 + 0x10c) = uStack_28;
    *(undefined8 *)((long)param_1 + 0x104) = uStack_30;
    (**(code **)(*param_1 + 0x378))(param_1,*(undefined8 *)(*param_1 + 0x380));
  }
  return;
}



/* UI2DSprite$$get_premultipliedAlpha @ 0x6e86c0
 * bool UI2DSprite__get_premultipliedAlpha (UI2DSprite_o* __this, const MethodInfo* method); */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* UI2DSprite$$get_premultipliedAlpha
   bool UI2DSprite__get_premultipliedAlpha (UI2DSprite_o* __this, const MethodInfo* method); */

bool native_UI2DSprite__get_premultipliedAlpha_6e86c0(long *param_1)

{
  uint uVar1;
  long lVar2;
  ulong uVar3;
  
  if ((bRam000000000133f3c5 & 1) == 0) {
    native_sub_43273c(&UnityEngine_Object_TypeInfo_12d54e0);
    native_sub_43273c(&StringLiteral_Premultiplied_12f06a8);
    bRam000000000133f3c5 = 1;
  }
  uVar1 = *(uint *)(param_1 + 0x46);
  if (uVar1 == 0xffffffff) {
    lVar2 = (**(code **)(*param_1 + 0x348))(param_1,*(undefined8 *)(*param_1 + 0x350));
    if (((*(byte *)(_UnityEngine_Object_TypeInfo_12d54e0 + 0x133) >> 2 & 1) != 0) &&
       (*(int *)(_UnityEngine_Object_TypeInfo_12d54e0 + 0xe0) == 0)) {
      native_sub_4327ec(_UnityEngine_Object_TypeInfo_12d54e0);
    }
    uVar3 = native_UnityEngine_Object__op_Inequality_8d76fc(lVar2,0,0);
    if ((uVar3 & 1) == 0) {
      uVar1 = 0;
    }
    else {
      if ((lVar2 == 0) || (lVar2 = native_UnityEngine_Object__get_name_8e8098(lVar2,0), lVar2 == 0))
      {
                    /* WARNING: Subroutine does not return */
        native_sub_432810();
      }
      uVar1 = native_System_String__Contains_b0bafc(lVar2,_StringLiteral_Premultiplied_12f06a8,0);
      uVar1 = uVar1 & 1;
    }
    *(uint *)(param_1 + 0x46) = uVar1;
  }
  return uVar1 == 1;
}



/* UI2DSprite$$get_pixelSize @ 0x6e87a8
 * float UI2DSprite__get_pixelSize (UI2DSprite_o* __this, const MethodInfo* method); */

/* UI2DSprite$$get_pixelSize
   float UI2DSprite__get_pixelSize (UI2DSprite_o* __this, const MethodInfo* method); */

undefined4 native_UI2DSprite__get_pixelSize_6e87a8(long param_1)

{
  return *(undefined4 *)(param_1 + 0x224);
}



/* UI2DSprite$$get_drawingDimensions @ 0x6e87b0
 * UnityEngine_Vector4_o UI2DSprite__get_drawingDimensions (UI2DSprite_o* __this, const MethodInfo* method); */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* UI2DSprite$$get_drawingDimensions
   UnityEngine_Vector4_o UI2DSprite__get_drawingDimensions (UI2DSprite_o* __this, const MethodInfo*
   method); */

undefined4
native_UI2DSprite__get_drawingDimensions_6e87b0
          (undefined1 param_1 [16],float param_2,float param_3,float param_4,long *param_5)

{
  uint uVar1;
  uint uVar2;
  int iVar3;
  int iVar4;
  int iVar5;
  int iVar6;
  ulong uVar7;
  int iVar8;
  long lVar9;
  float fVar10;
  undefined4 uVar11;
  undefined4 uVar12;
  float fVar13;
  undefined8 uVar14;
  undefined8 uVar15;
  ulong uVar16;
  undefined8 uVar17;
  undefined8 uVar18;
  float fVar19;
  float fVar20;
  float fVar21;
  float fVar22;
  float fVar23;
  float fVar24;
  undefined8 uStack_b0;
  undefined8 uStack_a8;
  undefined8 uStack_a0;
  undefined8 uStack_98;
  undefined8 uStack_90;
  undefined8 uStack_88;
  
  if ((bRam000000000133f3c6 & 1) == 0) {
    native_sub_43273c(&UnityEngine_Object_TypeInfo_12d54e0);
    bRam000000000133f3c6 = 1;
  }
  uStack_b0 = 0;
  uStack_a8 = 0;
  fVar10 = (float)native_UIWidget__get_pivotOffset_944f8c(param_5,0);
  uVar16 = (ulong)*(uint *)(param_5 + 0x15);
  lVar9 = param_5[0x40];
  fVar23 = (float)*(int *)((long)param_5 + 0xa4);
  fVar24 = (float)(int)*(uint *)(param_5 + 0x15);
  if (((*(byte *)(_UnityEngine_Object_TypeInfo_12d54e0 + 0x133) >> 2 & 1) != 0) &&
     (*(int *)(_UnityEngine_Object_TypeInfo_12d54e0 + 0xe0) == 0)) {
    native_sub_4327ec();
  }
  fVar21 = -(fVar10 * fVar23);
  fVar22 = -(param_2 * fVar24);
  fVar20 = fVar23 - fVar10 * fVar23;
  fVar19 = fVar24 - param_2 * fVar24;
  uVar7 = native_UnityEngine_Object__op_Inequality_8d76fc(lVar9,0,0);
  if (((uVar7 & 1) != 0) && ((int)param_5[0x32] != 2)) {
    if (param_5[0x40] != 0) {
      uVar11 = native_UnityEngine_Sprite__get_rect_76bc08(param_5[0x40],0);
      uStack_b0 = CONCAT44((int)uVar16,uVar11);
      uStack_a8 = CONCAT44(param_4,param_3);
      native_UnityEngine_Rect__get_width_76367c(&uStack_b0,0);
      uVar1 = native_UnityEngine_Mathf__RoundToInt_8e50f0(0);
      if (param_5[0x40] != 0) {
        uVar11 = native_UnityEngine_Sprite__get_rect_76bc08(param_5[0x40],0);
        uStack_b0 = CONCAT44((int)uVar16,uVar11);
        uStack_a8 = CONCAT44(param_4,param_3);
        native_UnityEngine_Rect__get_height_76368c(&uStack_b0,0);
        uVar2 = native_UnityEngine_Mathf__RoundToInt_8e50f0(0);
        if (param_5[0x40] != 0) {
          native_UnityEngine_Sprite__get_textureRectOffset_76c028(param_5[0x40],0);
          iVar3 = native_UnityEngine_Mathf__RoundToInt_8e50f0(0);
          if (param_5[0x40] != 0) {
            native_UnityEngine_Sprite__get_textureRectOffset_76c028(param_5[0x40],0);
            iVar4 = native_UnityEngine_Mathf__RoundToInt_8e50f0(uVar16,0);
            uVar11 = (undefined4)uVar16;
            if (param_5[0x40] != 0) {
              uVar12 = native_UnityEngine_Sprite__get_rect_76bc08(param_5[0x40],0);
              uStack_b0 = CONCAT44(uVar11,uVar12);
              uStack_a8 = CONCAT44(param_4,param_3);
              fVar22 = (float)native_UnityEngine_Rect__get_width_76367c(&uStack_b0,0);
              if (param_5[0x40] != 0) {
                uVar12 = native_UnityEngine_Sprite__get_textureRect_76bf94(param_5[0x40],0);
                uStack_b0 = CONCAT44(uVar11,uVar12);
                uStack_a8 = CONCAT44(param_4,param_3);
                fVar21 = (float)native_UnityEngine_Rect__get_width_76367c(&uStack_b0,0);
                if (param_5[0x40] != 0) {
                  fVar13 = (float)native_UnityEngine_Sprite__get_textureRectOffset_76c028
                                            (param_5[0x40],0);
                  fVar22 = fVar22 - fVar21;
                  iVar5 = native_UnityEngine_Mathf__RoundToInt_8e50f0(fVar22 - fVar13,0);
                  if (param_5[0x40] != 0) {
                    uVar11 = native_UnityEngine_Sprite__get_rect_76bc08(param_5[0x40],0);
                    uStack_b0 = CONCAT44(fVar22,uVar11);
                    uStack_a8 = CONCAT44(param_4,param_3);
                    fVar21 = (float)native_UnityEngine_Rect__get_height_76368c(&uStack_b0,0);
                    if (param_5[0x40] != 0) {
                      uVar11 = native_UnityEngine_Sprite__get_textureRect_76bf94(param_5[0x40],0);
                      uStack_b0 = CONCAT44(fVar22,uVar11);
                      uStack_a8 = CONCAT44(param_4,param_3);
                      fVar13 = (float)native_UnityEngine_Rect__get_height_76368c(&uStack_b0,0);
                      if (param_5[0x40] != 0) {
                        native_UnityEngine_Sprite__get_textureRectOffset_76c028(param_5[0x40],0);
                        iVar6 = native_UnityEngine_Mathf__RoundToInt_8e50f0
                                          ((fVar21 - fVar13) - fVar22,0);
                        uVar14 = NEON_fmov(0x3f800000,4);
                        if (((0 < (int)uVar1) && (0 < (int)uVar2)) &&
                           (((int)param_5[0x32] == 3 || ((int)param_5[0x32] == 0)))) {
                          uVar17 = NEON_scvtf(CONCAT44(uVar2,uVar1),4);
                          uVar18 = NEON_fmov(0x3f800000,4);
                          uVar14 = NEON_scvtf(*(undefined8 *)((long)param_5 + 0xa4),4);
                          iVar5 = iVar5 + (uVar1 & 1);
                          iVar6 = iVar6 + (uVar2 & 1);
                          uVar14 = CONCAT44(((float)((ulong)uVar18 >> 0x20) /
                                            (float)((ulong)uVar17 >> 0x20)) *
                                            (float)((ulong)uVar14 >> 0x20),
                                            ((float)uVar18 / (float)uVar17) * (float)uVar14);
                        }
                        iVar8 = iVar5;
                        if ((*(uint *)(param_5 + 0x34) | 2) == 3) {
                          iVar8 = iVar3;
                          iVar3 = iVar5;
                        }
                        fVar21 = (float)iVar3 * (float)uVar14 - fVar10 * fVar23;
                        fVar20 = fVar20 - (float)iVar8 * (float)uVar14;
                        iVar3 = iVar6;
                        if ((*(uint *)(param_5 + 0x34) & 0xfffffffe) == 2) {
                          iVar3 = iVar4;
                          iVar4 = iVar6;
                        }
                        param_3 = (float)iVar3;
                        fVar10 = (float)((ulong)uVar14 >> 0x20);
                        fVar22 = (float)iVar4 * fVar10;
                        uVar16 = (ulong)(uint)fVar22;
                        fVar22 = fVar22 - param_2 * fVar24;
                        fVar19 = fVar19 - param_3 * fVar10;
                        goto LAB_006e8acc;
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
LAB_006e8acc:
  fVar10 = (float)uVar16;
  fVar23 = 0.0;
  fVar24 = 0.0;
  if ((char)param_5[0x44] == '\0') {
    fVar23 = (float)(**(code **)(*param_5 + 0x3d8))(param_5,*(undefined8 *)(*param_5 + 0x3e0));
    fVar24 = (float)(**(code **)(*param_5 + 0x458))(param_5,*(undefined8 *)(*param_5 + 0x460));
    uStack_90 = 0;
    uStack_88 = 0;
    native_UnityEngine_Vector4___ctor_776f24
              (fVar23 * fVar24,fVar10 * fVar24,param_3 * fVar24,param_4 * fVar24,&uStack_90,0);
    fVar24 = (float)uStack_90 + (float)uStack_88;
    fVar23 = uStack_90._4_4_ + uStack_88._4_4_;
  }
  uVar14 = native_UnityEngine_Mathf__Lerp_8e5224
                     (fVar21,fVar20 - fVar24,*(undefined4 *)((long)param_5 + 0x104),0);
  uVar17 = native_UnityEngine_Mathf__Lerp_8e5224(fVar22,fVar19 - fVar23,(int)param_5[0x21],0);
  uVar18 = native_UnityEngine_Mathf__Lerp_8e5224
                     (fVar21 + fVar24,fVar20,*(undefined4 *)((long)param_5 + 0x10c),0);
  uVar15 = native_UnityEngine_Mathf__Lerp_8e5224(fVar22 + fVar23,fVar19,(int)param_5[0x22],0);
  uStack_a0 = 0;
  uStack_98 = 0;
  native_UnityEngine_Vector4___ctor_776f24(uVar14,uVar17,uVar18,uVar15,&uStack_a0,0);
  return (undefined4)uStack_a0;
}



/* UI2DSprite$$get_border @ 0x6e8bf8
 * UnityEngine_Vector4_o UI2DSprite__get_border (UI2DSprite_o* __this, const MethodInfo* method); */

/* UI2DSprite$$get_border
   UnityEngine_Vector4_o UI2DSprite__get_border (UI2DSprite_o* __this, const MethodInfo* method); */

undefined4 native_UI2DSprite__get_border_6e8bf8(long param_1)

{
  return *(undefined4 *)(param_1 + 0x210);
}



/* UI2DSprite$$set_border @ 0x6e8c0c
 * void UI2DSprite__set_border (UI2DSprite_o* __this, UnityEngine_Vector4_o value, const MethodInfo* method); */

/* UI2DSprite$$set_border
   void UI2DSprite__set_border (UI2DSprite_o* __this, UnityEngine_Vector4_o value, const MethodInfo*
   method); */

void native_UI2DSprite__set_border_6e8c0c
               (float param_1,float param_2,float param_3,float param_4,long *param_5)

{
  float fVar1;
  float fVar2;
  
  fVar1 = *(float *)((long)param_5 + 0x214) - param_2;
  fVar2 = *(float *)((long)param_5 + 0x21c) - param_4;
  if (9.9999994e-11 <=
      fVar2 * fVar2 +
      (*(float *)(param_5 + 0x43) - param_3) * (*(float *)(param_5 + 0x43) - param_3) +
      (*(float *)(param_5 + 0x42) - param_1) * (*(float *)(param_5 + 0x42) - param_1) +
      fVar1 * fVar1) {
    *(float *)(param_5 + 0x42) = param_1;
    *(float *)((long)param_5 + 0x214) = param_2;
    *(float *)(param_5 + 0x43) = param_3;
    *(float *)((long)param_5 + 0x21c) = param_4;
                    /* WARNING: Could not recover jumptable at 0x006e8c74. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (**(code **)(*param_5 + 0x378))(param_5,*(undefined8 *)(*param_5 + 0x380));
    return;
  }
  return;
}



/* UI2DSprite$$OnUpdate @ 0x6e8c7c
 * void UI2DSprite__OnUpdate (UI2DSprite_o* __this, const MethodInfo* method); */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* UI2DSprite$$OnUpdate
   void UI2DSprite__OnUpdate (UI2DSprite_o* __this, const MethodInfo* method); */

void native_UI2DSprite__OnUpdate_6e8c7c
               (undefined1 param_1 [16],undefined1 param_2 [16],undefined4 param_3,
               undefined4 param_4,long *param_5)

{
  int iVar1;
  int iVar2;
  int iVar3;
  int iVar4;
  int iVar5;
  int iVar6;
  ulong uVar7;
  undefined8 uVar8;
  long lVar9;
  long lVar10;
  undefined4 uVar11;
  undefined4 uVar12;
  float fVar13;
  float fVar14;
  float fVar15;
  undefined4 uVar16;
  float fVar17;
  undefined8 uStack_70;
  undefined8 uStack_68;
  undefined8 uStack_60;
  undefined8 uStack_58;
  
  uVar12 = param_2._4_4_;
  uVar16 = param_2._0_4_;
  if ((bRam000000000133f3c7 & 1) == 0) {
    native_sub_43273c(&UnityEngine_Object_TypeInfo_12d54e0);
    bRam000000000133f3c7 = 1;
  }
  uStack_60 = 0;
  uStack_58 = 0;
  lVar9 = param_5[0x45];
  if (((*(byte *)(_UnityEngine_Object_TypeInfo_12d54e0 + 0x133) >> 2 & 1) != 0) &&
     (*(int *)(_UnityEngine_Object_TypeInfo_12d54e0 + 0xe0) == 0)) {
    native_sub_4327ec();
  }
  uVar7 = native_UnityEngine_Object__op_Inequality_8d76fc(lVar9,0,0);
  if ((uVar7 & 1) != 0) {
    lVar9 = param_5[0x45];
    lVar10 = param_5[0x40];
    if (((*(byte *)(_UnityEngine_Object_TypeInfo_12d54e0 + 0x133) >> 2 & 1) != 0) &&
       (*(int *)(_UnityEngine_Object_TypeInfo_12d54e0 + 0xe0) == 0)) {
      native_sub_4327ec();
    }
    uVar7 = native_UnityEngine_Object__op_Inequality_8d76fc(lVar9,lVar10,0);
    if ((uVar7 & 1) != 0) {
      native_UI2DSprite__set_sprite2D_6e81bc(param_5,param_5[0x45]);
    }
    param_5[0x45] = 0;
    native_sub_4326e0(param_5 + 0x45,0);
  }
  native_UIWidget__OnUpdate_945598(param_5,0);
  if ((char)param_5[0x44] != '\0') {
    uVar8 = (**(code **)(*param_5 + 0x328))(param_5,*(undefined8 *)(*param_5 + 0x330));
    if (((*(byte *)(_UnityEngine_Object_TypeInfo_12d54e0 + 0x133) >> 2 & 1) != 0) &&
       (*(int *)(_UnityEngine_Object_TypeInfo_12d54e0 + 0xe0) == 0)) {
      native_sub_4327ec(_UnityEngine_Object_TypeInfo_12d54e0);
    }
    uVar7 = native_UnityEngine_Object__op_Inequality_8d76fc(uVar8,0,0);
    if ((uVar7 & 1) != 0) {
      if (param_5[0x40] != 0) {
        uVar11 = native_UnityEngine_Sprite__get_rect_76bc08(param_5[0x40],0);
        uStack_60 = CONCAT44(uVar16,uVar11);
        uStack_58 = CONCAT44(param_4,param_3);
        native_UnityEngine_Rect__get_width_76367c(&uStack_60,0);
        iVar1 = native_UnityEngine_Mathf__RoundToInt_8e50f0(0);
        if (param_5[0x40] != 0) {
          uVar11 = native_UnityEngine_Sprite__get_rect_76bc08(param_5[0x40],0);
          uStack_60 = CONCAT44(uVar16,uVar11);
          uStack_58 = CONCAT44(param_4,param_3);
          native_UnityEngine_Rect__get_height_76368c(&uStack_60,0);
          iVar2 = native_UnityEngine_Mathf__RoundToInt_8e50f0(0);
          if (param_5[0x40] != 0) {
            native_UnityEngine_Sprite__get_textureRectOffset_76c028(param_5[0x40],0);
            iVar3 = native_UnityEngine_Mathf__RoundToInt_8e50f0(0);
            if (param_5[0x40] != 0) {
              native_UnityEngine_Sprite__get_textureRectOffset_76c028(param_5[0x40],0);
              iVar4 = native_UnityEngine_Mathf__RoundToInt_8e50f0(CONCAT44(uVar12,uVar16),0);
              if (param_5[0x40] != 0) {
                uVar12 = native_UnityEngine_Sprite__get_rect_76bc08(param_5[0x40],0);
                uStack_60 = CONCAT44(uVar16,uVar12);
                uStack_58 = CONCAT44(param_4,param_3);
                fVar13 = (float)native_UnityEngine_Rect__get_width_76367c(&uStack_60,0);
                if (param_5[0x40] != 0) {
                  uVar12 = native_UnityEngine_Sprite__get_textureRect_76bf94(param_5[0x40],0);
                  uStack_60 = CONCAT44(uVar16,uVar12);
                  uStack_58 = CONCAT44(param_4,param_3);
                  fVar14 = (float)native_UnityEngine_Rect__get_width_76367c(&uStack_60,0);
                  if (param_5[0x40] != 0) {
                    fVar15 = (float)native_UnityEngine_Sprite__get_textureRectOffset_76c028
                                              (param_5[0x40],0);
                    fVar13 = fVar13 - fVar14;
                    iVar5 = native_UnityEngine_Mathf__RoundToInt_8e50f0(fVar13 - fVar15,0);
                    if (param_5[0x40] != 0) {
                      uVar16 = native_UnityEngine_Sprite__get_rect_76bc08(param_5[0x40],0);
                      uStack_60 = CONCAT44(fVar13,uVar16);
                      uStack_58 = CONCAT44(param_4,param_3);
                      fVar14 = (float)native_UnityEngine_Rect__get_height_76368c(&uStack_60,0);
                      if (param_5[0x40] != 0) {
                        uVar16 = native_UnityEngine_Sprite__get_textureRect_76bf94(param_5[0x40],0);
                        uStack_60 = CONCAT44(fVar13,uVar16);
                        uStack_58 = CONCAT44(param_4,param_3);
                        fVar15 = (float)native_UnityEngine_Rect__get_height_76368c(&uStack_60,0);
                        if (param_5[0x40] != 0) {
                          native_UnityEngine_Sprite__get_textureRectOffset_76c028(param_5[0x40],0);
                          iVar6 = native_UnityEngine_Mathf__RoundToInt_8e50f0
                                            ((fVar14 - fVar15) - fVar13,0);
                          fVar13 = (float)*(int *)((long)param_5 + 0xa4);
                          fVar14 = (float)(int)param_5[0x15];
                          fVar15 = (float)(iVar3 + iVar1 + iVar5) / (float)(iVar4 + iVar2 + iVar6);
                          if (fVar13 / fVar14 <= fVar15) {
                            fVar14 = ((fVar14 - fVar13 / fVar15) / fVar14) * 0.5;
                            fVar15 = 1.0;
                            fVar17 = 1.0 - fVar14;
                            fVar13 = 0.0;
                          }
                          else {
                            fVar13 = ((fVar13 - fVar15 * fVar14) / fVar13) * 0.5;
                            fVar17 = 1.0;
                            fVar15 = 1.0 - fVar13;
                            fVar14 = 0.0;
                          }
                          uStack_68 = 0;
                          uStack_70 = 0;
                          native_UnityEngine_Vector4___ctor_776f24
                                    (fVar13,fVar14,fVar15,fVar17,&uStack_70,0);
                          native_UIWidget__set_drawRegion_94561c
                                    (uStack_70 & 0xffffffff,uStack_70._4_4_,(undefined4)uStack_68,
                                     uStack_68._4_4_,param_5,0);
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
                    /* WARNING: Subroutine does not return */
      native_sub_432810();
    }
  }
  return;
}



/* UI2DSprite$$MakePixelPerfect @ 0x6e9000
 * void UI2DSprite__MakePixelPerfect (UI2DSprite_o* __this, const MethodInfo* method); */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* UI2DSprite$$MakePixelPerfect
   void UI2DSprite__MakePixelPerfect (UI2DSprite_o* __this, const MethodInfo* method); */

void native_UI2DSprite__MakePixelPerfect_6e9000
               (undefined1 param_1 [16],undefined4 param_2,undefined4 param_3,undefined4 param_4,
               long *param_5)

{
  uint uVar1;
  uint uVar2;
  undefined8 uVar3;
  ulong uVar4;
  undefined4 uVar5;
  float fVar6;
  float fVar7;
  undefined8 uStack_40;
  undefined8 uStack_38;
  
  if ((bRam000000000133f3c8 & 1) == 0) {
    native_sub_43273c(&UnityEngine_Object_TypeInfo_12d54e0);
    bRam000000000133f3c8 = 1;
  }
  uStack_40 = 0;
  uStack_38 = 0;
  native_UIWidget__MakePixelPerfect_9451e4(param_5,0);
  if ((int)param_5[0x32] != 2) {
    uVar3 = (**(code **)(*param_5 + 0x328))(param_5,*(undefined8 *)(*param_5 + 0x330));
    if (((*(byte *)(_UnityEngine_Object_TypeInfo_12d54e0 + 0x133) >> 2 & 1) != 0) &&
       (*(int *)(_UnityEngine_Object_TypeInfo_12d54e0 + 0xe0) == 0)) {
      native_sub_4327ec(_UnityEngine_Object_TypeInfo_12d54e0);
    }
    uVar4 = native_UnityEngine_Object__op_Equality_8e9a3c(uVar3,0,0);
    if ((uVar4 & 1) == 0) {
      if ((((int)param_5[0x32] == 0) || ((int)param_5[0x32] == 3)) ||
         (uVar4 = native_UIBasicSprite__get_hasBorder_c8c18c(param_5,0), (uVar4 & 1) == 0)) {
        if (((*(byte *)(_UnityEngine_Object_TypeInfo_12d54e0 + 0x133) >> 2 & 1) != 0) &&
           (*(int *)(_UnityEngine_Object_TypeInfo_12d54e0 + 0xe0) == 0)) {
          native_sub_4327ec();
        }
        uVar4 = native_UnityEngine_Object__op_Inequality_8d76fc(uVar3,0,0);
        if ((uVar4 & 1) != 0) {
          if (param_5[0x40] == 0) {
                    /* WARNING: Subroutine does not return */
            native_sub_432810();
          }
          uVar5 = native_UnityEngine_Sprite__get_rect_76bc08(param_5[0x40],0);
          uStack_40 = CONCAT44(param_2,uVar5);
          uStack_38 = CONCAT44(param_4,param_3);
          fVar6 = (float)(**(code **)(*param_5 + 0x458))(param_5,*(undefined8 *)(*param_5 + 0x460));
          fVar7 = (float)native_UnityEngine_Rect__get_width_76367c(&uStack_40,0);
          uVar1 = native_UnityEngine_Mathf__RoundToInt_8e50f0(fVar6 * fVar7,0);
          fVar6 = (float)(**(code **)(*param_5 + 0x458))(param_5,*(undefined8 *)(*param_5 + 0x460));
          fVar7 = (float)native_UnityEngine_Rect__get_height_76368c(&uStack_40,0);
          uVar2 = native_UnityEngine_Mathf__RoundToInt_8e50f0(fVar6 * fVar7,0);
          native_UIWidget__set_width_941dec(param_5,(uVar1 & 1) + uVar1,0);
          native_UIWidget__set_height_942098(param_5,(uVar2 & 1) + uVar2,0);
        }
      }
    }
  }
  return;
}



/* UI2DSprite$$OnFill @ 0x6e91b8
 * void UI2DSprite__OnFill (UI2DSprite_o* __this, System_Collections_Generic_List_Vector3__o* verts, System_Collections_Generic_List_Vector2__o* uvs, System_Collections_Generic_List_Color__o* cols, const MethodInfo* method); */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* UI2DSprite$$OnFill
   void UI2DSprite__OnFill (UI2DSprite_o* __this, System_Collections_Generic_List_Vector3__o* verts,
   System_Collections_Generic_List_Vector2__o* uvs, System_Collections_Generic_List_Color__o* cols,
   const MethodInfo* method); */

void native_UI2DSprite__OnFill_6e91b8
               (undefined1 param_1 [16],float param_2,float param_3,float param_4,long *param_5,
               long param_6,undefined8 param_7,undefined8 param_8)

{
  int iVar1;
  int iVar2;
  long *plVar3;
  ulong uVar4;
  long lVar5;
  undefined4 uVar6;
  float fVar7;
  float fVar8;
  float fVar9;
  undefined8 uStack_90;
  undefined8 uStack_88;
  undefined8 uStack_80;
  float fStack_78;
  float fStack_74;
  undefined8 uStack_70;
  float fStack_68;
  float fStack_64;
  
  if ((bRam000000000133f3c9 & 1) == 0) {
    native_sub_43273c(&Method_System_Collections_Generic_List_Vector3__get_Count___12dd500);
    native_sub_43273c(&UnityEngine_Object_TypeInfo_12d54e0);
    bRam000000000133f3c9 = 1;
  }
  uStack_70 = 0;
  fStack_68 = 0.0;
  fStack_64 = 0.0;
  uStack_80 = 0;
  fStack_78 = 0.0;
  fStack_74 = 0.0;
  plVar3 = (long *)(**(code **)(*param_5 + 0x328))(param_5,*(undefined8 *)(*param_5 + 0x330));
  if (((*(byte *)(_UnityEngine_Object_TypeInfo_12d54e0 + 0x133) >> 2 & 1) != 0) &&
     (*(int *)(_UnityEngine_Object_TypeInfo_12d54e0 + 0xe0) == 0)) {
    native_sub_4327ec(_UnityEngine_Object_TypeInfo_12d54e0);
  }
  uVar4 = native_UnityEngine_Object__op_Equality_8e9a3c(plVar3,0,0);
  if ((uVar4 & 1) != 0) {
    return;
  }
  lVar5 = param_5[0x40];
  if (((*(byte *)(_UnityEngine_Object_TypeInfo_12d54e0 + 0x133) >> 2 & 1) != 0) &&
     (*(int *)(_UnityEngine_Object_TypeInfo_12d54e0 + 0xe0) == 0)) {
    native_sub_4327ec();
  }
  uVar4 = native_UnityEngine_Object__op_Inequality_8d76fc(lVar5,0,0);
  if ((uVar4 & 1) == 0) {
    if (plVar3 == (long *)0x0) goto LAB_006e9530;
    iVar2 = (**(code **)(*plVar3 + 0x178))(plVar3,*(undefined8 *)(*plVar3 + 0x180));
    iVar1 = (**(code **)(*plVar3 + 0x198))(plVar3,*(undefined8 *)(*plVar3 + 0x1a0));
    uStack_90 = 0;
    uStack_88 = 0;
    native_UnityEngine_Rect___ctor_7635c8(0,0,(float)iVar2,(float)iVar1,&uStack_90,0);
    param_2 = uStack_90._4_4_;
    param_3 = (float)uStack_88;
    param_4 = uStack_88._4_4_;
    uVar6 = (undefined4)uStack_90;
  }
  else {
    if (param_5[0x40] == 0) goto LAB_006e9530;
    uVar6 = native_UnityEngine_Sprite__get_textureRect_76bf94(param_5[0x40],0);
  }
  uStack_70 = CONCAT44(param_2,uVar6);
  uStack_80 = uStack_70;
  fStack_68 = param_3;
  fStack_64 = param_4;
  fStack_78 = param_3;
  fStack_74 = param_4;
  fVar7 = (float)(**(code **)(*param_5 + 0x3d8))(param_5,*(undefined8 *)(*param_5 + 0x3e0));
  fVar8 = (float)native_UnityEngine_Rect__get_xMin_76363c(&uStack_80,0);
  native_UnityEngine_Rect__set_xMin_7636a4(fVar8 + fVar7,&uStack_80,0);
  fVar7 = (float)native_UnityEngine_Rect__get_yMin_763644(&uStack_80,0);
  native_UnityEngine_Rect__set_yMin_7636c0(param_2 + fVar7,&uStack_80,0);
  fVar7 = (float)native_UnityEngine_Rect__get_xMax_76365c(&uStack_80,0);
  native_UnityEngine_Rect__set_xMax_7636dc(fVar7 - param_3,&uStack_80,0);
  fVar7 = (float)native_UnityEngine_Rect__get_yMax_76366c(&uStack_80,0);
  native_UnityEngine_Rect__set_yMax_7636ec(fVar7 - param_4,&uStack_80,0);
  if (plVar3 != (long *)0x0) {
    iVar2 = (**(code **)(*plVar3 + 0x178))(plVar3,*(undefined8 *)(*plVar3 + 0x180));
    fVar9 = 1.0 / (float)iVar2;
    iVar2 = (**(code **)(*plVar3 + 0x198))(plVar3,*(undefined8 *)(*plVar3 + 0x1a0));
    fVar8 = 1.0 / (float)iVar2;
    fVar7 = (float)native_UnityEngine_Rect__get_xMin_76363c(&uStack_70,0);
    native_UnityEngine_Rect__set_xMin_7636a4(fVar9 * fVar7,&uStack_70,0);
    fVar7 = (float)native_UnityEngine_Rect__get_xMax_76365c(&uStack_70,0);
    native_UnityEngine_Rect__set_xMax_7636dc(fVar9 * fVar7,&uStack_70,0);
    fVar7 = (float)native_UnityEngine_Rect__get_yMin_763644(&uStack_70,0);
    native_UnityEngine_Rect__set_yMin_7636c0(fVar8 * fVar7,&uStack_70,0);
    fVar7 = (float)native_UnityEngine_Rect__get_yMax_76366c(&uStack_70,0);
    native_UnityEngine_Rect__set_yMax_7636ec(fVar8 * fVar7,&uStack_70,0);
    fVar7 = (float)native_UnityEngine_Rect__get_xMin_76363c(&uStack_80,0);
    native_UnityEngine_Rect__set_xMin_7636a4(fVar9 * fVar7,&uStack_80,0);
    fVar7 = (float)native_UnityEngine_Rect__get_xMax_76365c(&uStack_80,0);
    native_UnityEngine_Rect__set_xMax_7636dc(fVar9 * fVar7,&uStack_80,0);
    fVar7 = (float)native_UnityEngine_Rect__get_yMin_763644(&uStack_80,0);
    native_UnityEngine_Rect__set_yMin_7636c0(fVar8 * fVar7,&uStack_80,0);
    fVar7 = (float)native_UnityEngine_Rect__get_yMax_76366c(&uStack_80,0);
    native_UnityEngine_Rect__set_yMax_7636ec(fVar8 * fVar7,&uStack_80,0);
    if (param_6 != 0) {
      uVar6 = *(undefined4 *)(param_6 + 0x18);
      native_UIBasicSprite__Fill_c8c42c
                (uStack_70 & 0xffffffff,uStack_70._4_4_,fStack_68,fStack_64,(undefined4)uStack_80,
                 uStack_80._4_4_,fStack_78,fStack_74,param_5,param_6,param_7,param_8,0);
      if (param_5[0x19] == 0) {
        return;
      }
      native_UIWidget_OnPostFillCallback__Invoke_55bd18
                (param_5[0x19],param_5,uVar6,param_6,param_7,param_8,0);
      return;
    }
  }
LAB_006e9530:
                    /* WARNING: Subroutine does not return */
  native_sub_432810();
}



/* UI2DSprite$$.ctor @ 0x6e9534
 * void UI2DSprite___ctor (UI2DSprite_o* __this, const MethodInfo* method); */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* UI2DSprite$$.ctor
   void UI2DSprite___ctor (UI2DSprite_o* __this, const MethodInfo* method); */

void native_UI2DSprite___ctor_6e9534
               (undefined1 param_1 [16],undefined4 param_2,undefined4 param_3,undefined4 param_4,
               long param_5)

{
  undefined4 uVar1;
  undefined8 uStack_30;
  undefined8 uStack_28;
  
  if ((bRam000000000133f3ca & 1) == 0) {
    native_sub_43273c(&UIBasicSprite_TypeInfo_12d6400);
    bRam000000000133f3ca = 1;
  }
  uVar1 = native_UnityEngine_Vector4__get_zero_777178(0);
  *(undefined4 *)(param_5 + 0x210) = uVar1;
  *(undefined4 *)(param_5 + 0x214) = param_2;
  *(undefined4 *)(param_5 + 0x218) = param_3;
  *(undefined4 *)(param_5 + 0x21c) = param_4;
  *(undefined4 *)(param_5 + 0x224) = 0x3f800000;
  *(undefined4 *)(param_5 + 0x230) = 0xffffffff;
  if (((*(byte *)(_UIBasicSprite_TypeInfo_12d6400 + 0x133) >> 2 & 1) != 0) &&
     (*(int *)(_UIBasicSprite_TypeInfo_12d6400 + 0xe0) == 0)) {
    native_sub_4327ec();
  }
  *(undefined8 *)(param_5 + 0x194) = 0x3f80000000000004;
  uVar1 = native_UnityEngine_Color__get_white_8d9e10(0,0);
  *(undefined4 *)(param_5 + 0x1a8) = uVar1;
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


