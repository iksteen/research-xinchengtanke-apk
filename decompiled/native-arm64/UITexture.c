/* ARM64 IL2CPP native pseudocode from Ghidra.
 * Recovered implementation, not original C# source.
 * Function boundaries follow the IL2CPP method address table. */


/* UITexture$$get_mainTexture @ 0x944430
 * UnityEngine_Texture_o* UITexture__get_mainTexture (UITexture_o* __this, const MethodInfo* method); */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* UITexture$$get_mainTexture
   UnityEngine_Texture_o* UITexture__get_mainTexture (UITexture_o* __this, const MethodInfo*
   method); */

undefined8 native_UITexture__get_mainTexture_944430(long param_1)

{
  int iVar1;
  undefined4 uVar2;
  ulong uVar3;
  long lVar4;
  undefined8 uVar5;
  
  if ((bRam0000000001341420 & 1) == 0) {
    native_sub_43273c(&UnityEngine_Object_TypeInfo_12d54e0);
    bRam0000000001341420 = 1;
  }
  uVar5 = *(undefined8 *)(param_1 + 0x210);
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
      if (lVar4 == 0) {
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
  }
  else {
    uVar5 = *(undefined8 *)(param_1 + 0x210);
  }
  return uVar5;
}



/* UITexture$$set_mainTexture @ 0x94450c
 * void UITexture__set_mainTexture (UITexture_o* __this, UnityEngine_Texture_o* value, const MethodInfo* method); */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* UITexture$$set_mainTexture
   void UITexture__set_mainTexture (UITexture_o* __this, UnityEngine_Texture_o* value, const
   MethodInfo* method); */

void native_UITexture__set_mainTexture_94450c(long *param_1,long param_2)

{
  long *plVar1;
  undefined8 uVar2;
  undefined4 uVar3;
  ulong uVar4;
  long lVar5;
  long lVar6;
  
  if ((bRam0000000001341421 & 1) == 0) {
    native_sub_43273c(&UnityEngine_Object_TypeInfo_12d54e0);
    bRam0000000001341421 = 1;
  }
  lVar6 = param_1[0x42];
  if (((*(byte *)(_UnityEngine_Object_TypeInfo_12d54e0 + 0x133) >> 2 & 1) != 0) &&
     (*(int *)(_UnityEngine_Object_TypeInfo_12d54e0 + 0xe0) == 0)) {
    native_sub_4327ec();
  }
  uVar4 = native_UnityEngine_Object__op_Inequality_8d76fc(lVar6,param_2,0);
  if ((uVar4 & 1) == 0) {
    return;
  }
  lVar6 = param_1[0x2c];
  if (((*(byte *)(_UnityEngine_Object_TypeInfo_12d54e0 + 0x133) >> 2 & 1) != 0) &&
     (*(int *)(_UnityEngine_Object_TypeInfo_12d54e0 + 0xe0) == 0)) {
    native_sub_4327ec();
  }
  uVar4 = native_UnityEngine_Object__op_Inequality_8d76fc(lVar6,0,0);
  if ((uVar4 & 1) != 0) {
    if (param_1[0x2c] == 0) {
LAB_00944684:
                    /* WARNING: Subroutine does not return */
      native_sub_432810();
    }
    if (*(int *)(param_1[0x2c] + 0x18) == 1) {
      lVar6 = param_1[0x17];
      if (((*(byte *)(_UnityEngine_Object_TypeInfo_12d54e0 + 0x133) >> 2 & 1) != 0) &&
         (*(int *)(_UnityEngine_Object_TypeInfo_12d54e0 + 0xe0) == 0)) {
        native_sub_4327ec();
      }
      uVar4 = native_UnityEngine_Object__op_Equality_8e9a3c(lVar6,0,0);
      if ((uVar4 & 1) != 0) {
        param_1[0x42] = param_2;
        native_sub_4326e0(param_1 + 0x42,param_2);
        lVar6 = param_1[0x2c];
        if (lVar6 != 0) {
          if ((bRam0000000001341900 & 1) == 0) {
            native_sub_43273c(&UnityEngine_MaterialPropertyBlock_TypeInfo_12d51b0,param_2,0);
            native_sub_43273c(&UnityEngine_Object_TypeInfo_12d54e0);
            native_sub_43273c(&StringLiteral__MainTex_12f3608);
            bRam0000000001341900 = 1;
          }
          *(long *)(lVar6 + 0x80) = param_2;
          native_sub_4326e0((long *)(lVar6 + 0x80),param_2);
          lVar5 = *(long *)(lVar6 + 0x100);
          if (lVar5 == 0) {
            plVar1 = (long *)(lVar6 + 0x100);
            lVar6 = native_sub_432808(_UnityEngine_MaterialPropertyBlock_TypeInfo_12d51b0);
            native_UnityEngine_MaterialPropertyBlock___ctor_8e4568(lVar6,0);
            *plVar1 = lVar6;
            native_sub_4326e0(plVar1,lVar6);
            lVar5 = *plVar1;
          }
          if (((*(byte *)(_UnityEngine_Object_TypeInfo_12d54e0 + 0x133) >> 2 & 1) != 0) &&
             (*(int *)(_UnityEngine_Object_TypeInfo_12d54e0 + 0xe0) == 0)) {
            native_sub_4327ec();
          }
          uVar4 = native_UnityEngine_Object__op_Inequality_8d76fc(param_2,0,0);
          uVar2 = _StringLiteral__MainTex_12f3608;
          if ((uVar4 & 1) == 0) {
            param_2 = native_UnityEngine_Texture2D__get_whiteTexture_76ecf8(0);
          }
          if (lVar5 != 0) {
            uVar3 = native_UnityEngine_Shader__PropertyToID_76b308(uVar2,0,param_2,0);
            if (pcRam0000000001340e60 == (code *)0x0) {
              pcRam0000000001340e60 = (code *)native_sub_4326f0(&UNK_00e2ead3);
            }
                    /* WARNING: Could not recover jumptable at 0x008e4738. Too many branches */
                    /* WARNING: Treating indirect jump as call */
            (*pcRam0000000001340e60)(lVar5,uVar3,param_2);
            return;
          }
                    /* WARNING: Subroutine does not return */
          native_sub_432810();
        }
        goto LAB_00944684;
      }
    }
  }
  native_UIWidget__RemoveFromPanel_944688(param_1);
  param_1[0x42] = param_2;
  native_sub_4326e0(param_1 + 0x42,param_2);
  *(undefined4 *)((long)param_1 + 0x234) = 0xffffffff;
                    /* WARNING: Could not recover jumptable at 0x00944680. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(*param_1 + 0x378))(param_1,*(undefined8 *)(*param_1 + 0x380));
  return;
}



/* UITexture$$get_material @ 0x94473c
 * UnityEngine_Material_o* UITexture__get_material (UITexture_o* __this, const MethodInfo* method); */

/* UITexture$$get_material
   UnityEngine_Material_o* UITexture__get_material (UITexture_o* __this, const MethodInfo* method);
    */

undefined8 native_UITexture__get_material_94473c(long param_1)

{
  return *(undefined8 *)(param_1 + 0xb8);
}



/* UITexture$$set_material @ 0x944744
 * void UITexture__set_material (UITexture_o* __this, UnityEngine_Material_o* value, const MethodInfo* method); */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* UITexture$$set_material
   void UITexture__set_material (UITexture_o* __this, UnityEngine_Material_o* value, const
   MethodInfo* method); */

void native_UITexture__set_material_944744(long *param_1,long param_2)

{
  ulong uVar1;
  long lVar2;
  
  if ((bRam0000000001341422 & 1) == 0) {
    native_sub_43273c(&UnityEngine_Object_TypeInfo_12d54e0);
    bRam0000000001341422 = 1;
  }
  lVar2 = param_1[0x17];
  if (((*(byte *)(_UnityEngine_Object_TypeInfo_12d54e0 + 0x133) >> 2 & 1) != 0) &&
     (*(int *)(_UnityEngine_Object_TypeInfo_12d54e0 + 0xe0) == 0)) {
    native_sub_4327ec();
  }
  uVar1 = native_UnityEngine_Object__op_Inequality_8d76fc(lVar2,param_2,0);
  if ((uVar1 & 1) != 0) {
    native_UIWidget__RemoveFromPanel_944688(param_1);
    param_1[0x43] = 0;
    native_sub_4326e0(param_1 + 0x43,0);
    param_1[0x17] = param_2;
    native_sub_4326e0(param_1 + 0x17,param_2);
    *(undefined4 *)((long)param_1 + 0x234) = 0xffffffff;
                    /* WARNING: Could not recover jumptable at 0x00944804. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (**(code **)(*param_1 + 0x378))(param_1,*(undefined8 *)(*param_1 + 0x380));
    return;
  }
  return;
}



/* UITexture$$get_shader @ 0x944818
 * UnityEngine_Shader_o* UITexture__get_shader (UITexture_o* __this, const MethodInfo* method); */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* UITexture$$get_shader
   UnityEngine_Shader_o* UITexture__get_shader (UITexture_o* __this, const MethodInfo* method); */

undefined8 native_UITexture__get_shader_944818(long param_1)

{
  undefined8 *puVar1;
  ulong uVar2;
  long lVar3;
  undefined8 uVar4;
  
  if ((bRam0000000001341423 & 1) == 0) {
    native_sub_43273c(&UnityEngine_Object_TypeInfo_12d54e0);
    native_sub_43273c(&StringLiteral_Unlit_Transparent_Colored_12f2c60);
    bRam0000000001341423 = 1;
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
  uVar4 = *(undefined8 *)(param_1 + 0x218);
  if (((*(byte *)(_UnityEngine_Object_TypeInfo_12d54e0 + 0x133) >> 2 & 1) != 0) &&
     (*(int *)(_UnityEngine_Object_TypeInfo_12d54e0 + 0xe0) == 0)) {
    native_sub_4327ec();
  }
  puVar1 = (undefined8 *)(param_1 + 0x218);
  uVar2 = native_UnityEngine_Object__op_Equality_8e9a3c(uVar4,0,0);
  if ((uVar2 & 1) != 0) {
    uVar4 = native_UnityEngine_Shader__Find_76b254
                      (_StringLiteral_Unlit_Transparent_Colored_12f2c60,0);
    *puVar1 = uVar4;
    native_sub_4326e0(puVar1,uVar4);
  }
  return *puVar1;
}



/* UITexture$$set_shader @ 0x94491c
 * void UITexture__set_shader (UITexture_o* __this, UnityEngine_Shader_o* value, const MethodInfo* method); */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* UITexture$$set_shader
   void UITexture__set_shader (UITexture_o* __this, UnityEngine_Shader_o* value, const MethodInfo*
   method); */

void native_UITexture__set_shader_94491c(long *param_1,long param_2)

{
  ulong uVar1;
  long lVar2;
  undefined8 uVar3;
  
  if ((bRam0000000001341424 & 1) == 0) {
    native_sub_43273c(&UnityEngine_Object_TypeInfo_12d54e0);
    bRam0000000001341424 = 1;
  }
  lVar2 = param_1[0x43];
  if (((*(byte *)(_UnityEngine_Object_TypeInfo_12d54e0 + 0x133) >> 2 & 1) != 0) &&
     (*(int *)(_UnityEngine_Object_TypeInfo_12d54e0 + 0xe0) == 0)) {
    native_sub_4327ec();
  }
  uVar1 = native_UnityEngine_Object__op_Inequality_8d76fc(lVar2,param_2,0);
  if ((uVar1 & 1) == 0) {
    return;
  }
  lVar2 = param_1[0x2c];
  if (((*(byte *)(_UnityEngine_Object_TypeInfo_12d54e0 + 0x133) >> 2 & 1) != 0) &&
     (*(int *)(_UnityEngine_Object_TypeInfo_12d54e0 + 0xe0) == 0)) {
    native_sub_4327ec();
  }
  uVar1 = native_UnityEngine_Object__op_Inequality_8d76fc(lVar2,0,0);
  if ((uVar1 & 1) != 0) {
    if (param_1[0x2c] == 0) {
LAB_00944aa4:
                    /* WARNING: Subroutine does not return */
      native_sub_432810();
    }
    if (*(int *)(param_1[0x2c] + 0x18) == 1) {
      lVar2 = param_1[0x17];
      if (((*(byte *)(_UnityEngine_Object_TypeInfo_12d54e0 + 0x133) >> 2 & 1) != 0) &&
         (*(int *)(_UnityEngine_Object_TypeInfo_12d54e0 + 0xe0) == 0)) {
        native_sub_4327ec();
      }
      uVar1 = native_UnityEngine_Object__op_Equality_8e9a3c(lVar2,0,0);
      if ((uVar1 & 1) != 0) {
        param_1[0x43] = param_2;
        native_sub_4326e0(param_1 + 0x43,param_2);
        lVar2 = param_1[0x2c];
        if (lVar2 != 0) {
          if ((bRam0000000001341901 & 1) == 0) {
            native_sub_43273c(&UnityEngine_Object_TypeInfo_12d54e0,param_2,0);
            bRam0000000001341901 = 1;
          }
          uVar3 = *(undefined8 *)(lVar2 + 0x88);
          if (((*(byte *)(_UnityEngine_Object_TypeInfo_12d54e0 + 0x133) >> 2 & 1) != 0) &&
             (*(int *)(_UnityEngine_Object_TypeInfo_12d54e0 + 0xe0) == 0)) {
            native_sub_4327ec();
          }
          uVar1 = native_UnityEngine_Object__op_Inequality_8d76fc(uVar3,param_2,0);
          if ((uVar1 & 1) != 0) {
            *(long *)(lVar2 + 0x88) = param_2;
            native_sub_4326e0((undefined8 *)(lVar2 + 0x88),param_2);
            *(undefined1 *)(lVar2 + 0xcc) = 1;
          }
          return;
        }
        goto LAB_00944aa4;
      }
    }
  }
  native_UIWidget__RemoveFromPanel_944688(param_1);
  param_1[0x43] = param_2;
  native_sub_4326e0(param_1 + 0x43,param_2);
  *(undefined4 *)((long)param_1 + 0x234) = 0xffffffff;
  param_1[0x17] = 0;
  native_sub_4326e0(param_1 + 0x17,0);
                    /* WARNING: Could not recover jumptable at 0x00944aa0. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(*param_1 + 0x378))(param_1,*(undefined8 *)(*param_1 + 0x380));
  return;
}



/* UITexture$$get_premultipliedAlpha @ 0x944aa8
 * bool UITexture__get_premultipliedAlpha (UITexture_o* __this, const MethodInfo* method); */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* UITexture$$get_premultipliedAlpha
   bool UITexture__get_premultipliedAlpha (UITexture_o* __this, const MethodInfo* method); */

bool native_UITexture__get_premultipliedAlpha_944aa8(long *param_1)

{
  uint uVar1;
  long lVar2;
  ulong uVar3;
  undefined8 uVar4;
  
  if ((bRam0000000001341425 & 1) == 0) {
    native_sub_43273c(&UnityEngine_Object_TypeInfo_12d54e0);
    native_sub_43273c(&StringLiteral_Premultiplied_12f06a8);
    bRam0000000001341425 = 1;
  }
  uVar1 = *(uint *)((long)param_1 + 0x234);
  if (uVar1 != 0xffffffff) goto LAB_00944bc8;
  lVar2 = (**(code **)(*param_1 + 0x308))(param_1,*(undefined8 *)(*param_1 + 0x310));
  if (((*(byte *)(_UnityEngine_Object_TypeInfo_12d54e0 + 0x133) >> 2 & 1) != 0) &&
     (*(int *)(_UnityEngine_Object_TypeInfo_12d54e0 + 0xe0) == 0)) {
    native_sub_4327ec(_UnityEngine_Object_TypeInfo_12d54e0);
  }
  uVar3 = native_UnityEngine_Object__op_Inequality_8d76fc(lVar2,0,0);
  if ((uVar3 & 1) == 0) {
LAB_00944bc0:
    uVar1 = 0;
  }
  else {
    if (lVar2 == 0) {
LAB_00944be0:
                    /* WARNING: Subroutine does not return */
      native_sub_432810();
    }
    uVar4 = native_UnityEngine_Material__get_shader_8e3078(lVar2,0);
    if (((*(byte *)(_UnityEngine_Object_TypeInfo_12d54e0 + 0x133) >> 2 & 1) != 0) &&
       (*(int *)(_UnityEngine_Object_TypeInfo_12d54e0 + 0xe0) == 0)) {
      native_sub_4327ec(_UnityEngine_Object_TypeInfo_12d54e0);
    }
    uVar3 = native_UnityEngine_Object__op_Inequality_8d76fc(uVar4,0,0);
    if ((uVar3 & 1) == 0) goto LAB_00944bc0;
    lVar2 = native_UnityEngine_Material__get_shader_8e3078(lVar2,0);
    if ((lVar2 == 0) || (lVar2 = native_UnityEngine_Object__get_name_8e8098(lVar2,0), lVar2 == 0))
    goto LAB_00944be0;
    uVar1 = native_System_String__Contains_b0bafc(lVar2,_StringLiteral_Premultiplied_12f06a8,0);
    uVar1 = uVar1 & 1;
  }
  *(uint *)((long)param_1 + 0x234) = uVar1;
LAB_00944bc8:
  return uVar1 == 1;
}



/* UITexture$$get_border @ 0x944be4
 * UnityEngine_Vector4_o UITexture__get_border (UITexture_o* __this, const MethodInfo* method); */

/* UITexture$$get_border
   UnityEngine_Vector4_o UITexture__get_border (UITexture_o* __this, const MethodInfo* method); */

undefined4 native_UITexture__get_border_944be4(long param_1)

{
  return *(undefined4 *)(param_1 + 0x220);
}



/* UITexture$$set_border @ 0x944bf8
 * void UITexture__set_border (UITexture_o* __this, UnityEngine_Vector4_o value, const MethodInfo* method); */

/* UITexture$$set_border
   void UITexture__set_border (UITexture_o* __this, UnityEngine_Vector4_o value, const MethodInfo*
   method); */

void native_UITexture__set_border_944bf8
               (float param_1,float param_2,float param_3,float param_4,long *param_5)

{
  float fVar1;
  float fVar2;
  
  fVar1 = *(float *)((long)param_5 + 0x224) - param_2;
  fVar2 = *(float *)((long)param_5 + 0x22c) - param_4;
  if (9.9999994e-11 <=
      fVar2 * fVar2 +
      (*(float *)(param_5 + 0x45) - param_3) * (*(float *)(param_5 + 0x45) - param_3) +
      (*(float *)(param_5 + 0x44) - param_1) * (*(float *)(param_5 + 0x44) - param_1) +
      fVar1 * fVar1) {
    *(float *)(param_5 + 0x44) = param_1;
    *(float *)((long)param_5 + 0x224) = param_2;
    *(float *)(param_5 + 0x45) = param_3;
    *(float *)((long)param_5 + 0x22c) = param_4;
                    /* WARNING: Could not recover jumptable at 0x00944c60. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (**(code **)(*param_5 + 0x378))(param_5,*(undefined8 *)(*param_5 + 0x380));
    return;
  }
  return;
}



/* UITexture$$get_uvRect @ 0x944c68
 * UnityEngine_Rect_o UITexture__get_uvRect (UITexture_o* __this, const MethodInfo* method); */

/* UITexture$$get_uvRect
   UnityEngine_Rect_o UITexture__get_uvRect (UITexture_o* __this, const MethodInfo* method); */

undefined4 native_UITexture__get_uvRect_944c68(long param_1)

{
  return *(undefined4 *)(param_1 + 0x1fc);
}



/* UITexture$$set_uvRect @ 0x944c7c
 * void UITexture__set_uvRect (UITexture_o* __this, UnityEngine_Rect_o value, const MethodInfo* method); */

/* UITexture$$set_uvRect
   void UITexture__set_uvRect (UITexture_o* __this, UnityEngine_Rect_o value, const MethodInfo*
   method); */

void native_UITexture__set_uvRect_944c7c
               (undefined8 param_1,undefined1 param_2 [16],undefined1 param_3 [16],
               undefined1 param_4 [16],long *param_5)

{
  ulong uVar1;
  
  uVar1 = native_UnityEngine_Rect__op_Inequality_763890
                    (*(undefined4 *)((long)param_5 + 0x1fc),(int)param_5[0x40],
                     *(undefined4 *)((long)param_5 + 0x204),(int)param_5[0x41],param_1,param_2._0_8_
                     ,param_3._0_8_,param_4._0_8_,0);
  if ((uVar1 & 1) != 0) {
    *(int *)((long)param_5 + 0x1fc) = (int)param_1;
    *(int *)(param_5 + 0x40) = param_2._0_4_;
    *(int *)((long)param_5 + 0x204) = param_3._0_4_;
    *(int *)(param_5 + 0x41) = param_4._0_4_;
                    /* WARNING: Could not recover jumptable at 0x00944d04. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (**(code **)(*param_5 + 0x378))(param_5,*(undefined8 *)(*param_5 + 0x380));
    return;
  }
  return;
}



/* UITexture$$get_drawingDimensions @ 0x944d1c
 * UnityEngine_Vector4_o UITexture__get_drawingDimensions (UITexture_o* __this, const MethodInfo* method); */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* UITexture$$get_drawingDimensions
   UnityEngine_Vector4_o UITexture__get_drawingDimensions (UITexture_o* __this, const MethodInfo*
   method); */

undefined4
native_UITexture__get_drawingDimensions_944d1c
          (undefined1 param_1 [16],float param_2,float param_3,float param_4,long *param_5)

{
  uint uVar1;
  uint uVar2;
  ulong uVar3;
  long *plVar4;
  long lVar5;
  float fVar6;
  float fVar7;
  undefined8 uVar8;
  undefined8 uVar9;
  undefined8 uVar10;
  undefined8 uVar11;
  float fVar12;
  float fVar13;
  float fVar14;
  float fVar15;
  float fVar16;
  float fVar17;
  float fVar18;
  undefined8 uStack_70;
  undefined8 uStack_68;
  
  if ((bRam0000000001341426 & 1) == 0) {
    native_sub_43273c(&UnityEngine_Object_TypeInfo_12d54e0);
    bRam0000000001341426 = 1;
  }
  fVar6 = (float)native_UIWidget__get_pivotOffset_944f8c(param_5);
  fVar12 = *(float *)(param_5 + 0x15);
  lVar5 = param_5[0x42];
  fVar15 = (float)*(int *)((long)param_5 + 0xa4);
  fVar18 = (float)(int)fVar12;
  if (((*(byte *)(_UnityEngine_Object_TypeInfo_12d54e0 + 0x133) >> 2 & 1) != 0) &&
     (*(int *)(_UnityEngine_Object_TypeInfo_12d54e0 + 0xe0) == 0)) {
    native_sub_4327ec();
  }
  fVar17 = -(fVar6 * fVar15);
  fVar14 = -(param_2 * fVar18);
  fVar16 = fVar15 - fVar6 * fVar15;
  fVar13 = fVar18 - param_2 * fVar18;
  uVar3 = native_UnityEngine_Object__op_Inequality_8d76fc(lVar5,0,0);
  if (((uVar3 & 1) != 0) && ((int)param_5[0x32] != 2)) {
    plVar4 = (long *)param_5[0x42];
    if (plVar4 != (long *)0x0) {
      uVar1 = (**(code **)(*plVar4 + 0x178))(plVar4,*(undefined8 *)(*plVar4 + 0x180));
      plVar4 = (long *)param_5[0x42];
      if (plVar4 != (long *)0x0) {
        uVar2 = (**(code **)(*plVar4 + 0x198))(plVar4,*(undefined8 *)(*plVar4 + 0x1a0));
        fVar7 = 0.0;
        fVar12 = 1.0;
        param_3 = 1.0;
        if (((int)uVar1 < 1) || ((int)uVar2 < 1)) {
          param_4 = 0.0;
        }
        else if (((int)param_5[0x32] == 3) || (param_4 = 0.0, fVar7 = 0.0, (int)param_5[0x32] == 0))
        {
          param_4 = (float)(uVar1 & 1);
          param_3 = (1.0 / (float)(int)uVar1) * (float)*(int *)((long)param_5 + 0xa4);
          fVar12 = (1.0 / (float)(int)uVar2) * (float)(int)param_5[0x15];
          fVar7 = (float)(uVar2 & 1);
        }
        param_3 = param_3 * param_4;
        if ((*(uint *)(param_5 + 0x34) | 2) == 3) {
          fVar17 = param_3 - fVar6 * fVar15;
        }
        else {
          fVar16 = fVar16 - param_3;
        }
        if ((*(uint *)(param_5 + 0x34) & 0xfffffffe) == 2) {
          fVar14 = fVar12 * fVar7 - param_2 * fVar18;
        }
        else {
          fVar13 = fVar13 - fVar12 * fVar7;
        }
        goto LAB_00944eb8;
      }
    }
                    /* WARNING: Subroutine does not return */
    native_sub_432810();
  }
LAB_00944eb8:
  fVar15 = 0.0;
  fVar6 = 0.0;
  if ((char)param_5[0x46] == '\0') {
    fVar6 = (float)(**(code **)(*param_5 + 0x3d8))(param_5,*(undefined8 *)(*param_5 + 0x3e0));
    fVar6 = fVar6 + param_3;
    fVar15 = fVar12 + param_4;
  }
  uVar8 = native_UnityEngine_Mathf__Lerp_8e5224
                    (fVar17,fVar16 - fVar6,*(undefined4 *)((long)param_5 + 0x104),0);
  uVar9 = native_UnityEngine_Mathf__Lerp_8e5224(fVar14,fVar13 - fVar15,(int)param_5[0x21],0);
  uVar10 = native_UnityEngine_Mathf__Lerp_8e5224
                     (fVar17 + fVar6,fVar16,*(undefined4 *)((long)param_5 + 0x10c),0);
  uVar11 = native_UnityEngine_Mathf__Lerp_8e5224(fVar14 + fVar15,fVar13,(int)param_5[0x22],0);
  uStack_70 = 0;
  uStack_68 = 0;
  native_UnityEngine_Vector4___ctor_776f24(uVar8,uVar9,uVar10,uVar11,&uStack_70,0);
  return (undefined4)uStack_70;
}



/* UITexture$$get_fixedAspect @ 0x94500c
 * bool UITexture__get_fixedAspect (UITexture_o* __this, const MethodInfo* method); */

/* UITexture$$get_fixedAspect
   bool UITexture__get_fixedAspect (UITexture_o* __this, const MethodInfo* method); */

undefined1 native_UITexture__get_fixedAspect_94500c(long param_1)

{
  return *(undefined1 *)(param_1 + 0x230);
}



/* UITexture$$set_fixedAspect @ 0x945014
 * void UITexture__set_fixedAspect (UITexture_o* __this, bool value, const MethodInfo* method); */

/* UITexture$$set_fixedAspect
   void UITexture__set_fixedAspect (UITexture_o* __this, bool value, const MethodInfo* method); */

void native_UITexture__set_fixedAspect_945014(long *param_1,byte param_2)

{
  undefined8 uStack_30;
  undefined8 uStack_28;
  
  if ((((char)param_1[0x46] != '\0' ^ param_2) & 1) != 0) {
    uStack_28 = 0;
    *(byte *)(param_1 + 0x46) = param_2 & 1;
    uStack_30 = 0;
    native_UnityEngine_Vector4___ctor_776f24(0,0,0x3f800000,0x3f800000,&uStack_30,0);
    *(undefined8 *)((long)param_1 + 0x10c) = uStack_28;
    *(undefined8 *)((long)param_1 + 0x104) = uStack_30;
    (**(code **)(*param_1 + 0x378))(param_1,*(undefined8 *)(*param_1 + 0x380));
  }
  return;
}



/* UITexture$$MakePixelPerfect @ 0x945094
 * void UITexture__MakePixelPerfect (UITexture_o* __this, const MethodInfo* method); */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* UITexture$$MakePixelPerfect
   void UITexture__MakePixelPerfect (UITexture_o* __this, const MethodInfo* method); */

void native_UITexture__MakePixelPerfect_945094(long *param_1)

{
  uint uVar1;
  int iVar2;
  uint uVar3;
  uint uVar4;
  undefined4 uVar5;
  uint uVar6;
  uint uVar7;
  int iVar8;
  uint uVar9;
  uint uVar10;
  long lVar11;
  long lVar12;
  long *plVar13;
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
  
  if ((bRam0000000001341427 & 1) == 0) {
    native_sub_43273c(&UnityEngine_Object_TypeInfo_12d54e0);
    bRam0000000001341427 = 1;
  }
  native_UIWidget__MakePixelPerfect_9451e4(param_1);
  if ((int)param_1[0x32] == 2) {
    return;
  }
  plVar13 = (long *)(**(code **)(*param_1 + 0x328))(param_1,*(undefined8 *)(*param_1 + 0x330));
  if (((*(byte *)(_UnityEngine_Object_TypeInfo_12d54e0 + 0x133) >> 2 & 1) != 0) &&
     (*(int *)(_UnityEngine_Object_TypeInfo_12d54e0 + 0xe0) == 0)) {
    native_sub_4327ec(_UnityEngine_Object_TypeInfo_12d54e0);
  }
  uVar14 = native_UnityEngine_Object__op_Equality_8e9a3c(plVar13,0,0);
  if ((uVar14 & 1) != 0) {
    return;
  }
  if ((((int)param_1[0x32] != 0) && ((int)param_1[0x32] != 3)) &&
     (uVar14 = native_UIBasicSprite__get_hasBorder_c8c18c(param_1,0), (uVar14 & 1) != 0)) {
    return;
  }
  if (((*(byte *)(_UnityEngine_Object_TypeInfo_12d54e0 + 0x133) >> 2 & 1) != 0) &&
     (*(int *)(_UnityEngine_Object_TypeInfo_12d54e0 + 0xe0) == 0)) {
    native_sub_4327ec();
  }
  uVar14 = native_UnityEngine_Object__op_Inequality_8d76fc(plVar13,0,0);
  if ((uVar14 & 1) == 0) {
    return;
  }
  if (plVar13 == (long *)0x0) {
                    /* WARNING: Subroutine does not return */
    native_sub_432810();
  }
  uVar9 = (**(code **)(*plVar13 + 0x178))(plVar13,*(undefined8 *)(*plVar13 + 0x180));
  uVar10 = (**(code **)(*plVar13 + 0x198))(plVar13,*(undefined8 *)(*plVar13 + 0x1a0));
  iVar15 = (uVar10 & 1) + uVar10;
  native_UIWidget__set_width_941dec(param_1,(uVar9 & 1) + uVar9);
  if ((bRam0000000001341450 & 1) == 0) {
    native_sub_43273c(&NGUIMath_TypeInfo_12d53b8);
    native_sub_43273c(&UnityEngine_Object_TypeInfo_12d54e0);
    bRam0000000001341450 = 1;
  }
  iVar8 = (**(code **)(*param_1 + 0x3c8))(param_1,*(undefined8 *)(*param_1 + 0x3d0));
  if (iVar8 <= iVar15) {
    iVar8 = iVar15;
  }
  if (((int)param_1[0x15] == iVar8) || (*(int *)((long)param_1 + 0xdc) == 1)) {
    return;
  }
  uVar14 = (**(code **)(*param_1 + 0x188))(param_1,*(undefined8 *)(*param_1 + 400));
  if ((uVar14 & 1) == 0) {
    iVar15 = *(int *)((long)param_1 + 0xa4);
    if ((*(int *)((long)param_1 + 0xa4) == iVar15) && ((int)param_1[0x15] == iVar8)) {
      return;
    }
    iVar2 = *(int *)((long)param_1 + 0xdc);
    *(int *)((long)param_1 + 0xa4) = iVar15;
    *(int *)(param_1 + 0x15) = iVar8;
    if (iVar2 == 0) {
      *(float *)(param_1 + 0x1c) = (float)iVar15 / (float)iVar8;
    }
    else if (iVar2 == 2) {
      uVar17 = native_UnityEngine_Mathf__RoundToInt_8e50f0
                         (*(float *)(param_1 + 0x1c) * (float)iVar8,0);
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
      fVar37 = (float)(iVar8 - iVar15);
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
    uVar14 = (ulong)(uint)(float)(iVar15 - iVar8);
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
    uVar9 = iVar8 - (int)param_1[0x15] & 0xfffffffe;
    if (uVar9 == 0) {
      return;
    }
    if (((*(byte *)(_NGUIMath_TypeInfo_12d53b8 + 0x133) >> 2 & 1) != 0) &&
       (*(int *)(_NGUIMath_TypeInfo_12d53b8 + 0xe0) == 0)) {
      native_sub_4327ec();
    }
    fVar37 = (float)(int)uVar9 * 0.5;
    uVar14 = (ulong)(uint)((float)(int)-uVar9 * 0.5);
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
  lVar11 = native_UIRect__get_cachedTransform_c27c58(param_1,0);
  if (lVar11 == 0) goto LAB_00807ccc;
  uVar17 = native_UnityEngine_Transform__get_localRotation_771c84(lVar11,0);
  uVar9 = native_UnityEngine_Mathf__FloorToInt_8e506c(0x3f000000,0);
  uVar3 = native_UnityEngine_Mathf__FloorToInt_8e506c((float)uVar14 + 0.5,0);
  uVar10 = native_UnityEngine_Mathf__FloorToInt_8e506c(0x3f000000,0);
  uVar4 = native_UnityEngine_Mathf__FloorToInt_8e506c((float)uVar25 + 0.5,0);
  if ((fVar37 == 0.5) && ((uVar9 == 0 || (uVar10 == 0)))) {
    uVar9 = uVar9 & 0xfffffffe;
    uVar10 = uVar10 & 0xfffffffe;
  }
  if ((fVar26 == 0.5) && ((uVar3 == 0 || (uVar4 == 0)))) {
    uVar3 = uVar3 & 0xfffffffe;
    uVar4 = uVar4 & 0xfffffffe;
  }
  fVar42 = (float)(int)uVar9;
  fVar40 = (float)(int)uVar4;
  uVar14 = uVar29;
  fVar18 = (float)native_UnityEngine_Quaternion__op_Multiply_7629c0
                            (uVar17,uVar29,uVar16,uVar38,fVar42,fVar40,0,0);
  fVar41 = (float)(int)uVar10;
  uVar25 = uVar29;
  fVar19 = (float)native_UnityEngine_Quaternion__op_Multiply_7629c0
                            (uVar17,uVar29,uVar16,uVar38,fVar41,fVar40,0,0);
  fVar39 = (float)(int)uVar3;
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
  uVar5 = (**(code **)(*param_1 + 0x3b8))(param_1,*(undefined8 *)(*param_1 + 0x3c0));
  uVar6 = native_UnityEngine_Mathf__Max_8e4cd0(2,uVar5,0);
  uVar5 = (**(code **)(*param_1 + 0x3c8))(param_1,*(undefined8 *)(*param_1 + 0x3d0));
  uVar7 = native_UnityEngine_Mathf__Max_8e4cd0(2,uVar5,0);
  uVar10 = (uVar10 - uVar9) + *(int *)((long)param_1 + 0xa4);
  uVar4 = (uVar4 - uVar3) + (int)param_1[0x15];
  uVar14 = native_UnityEngine_Vector3__get_zero_776668(0);
  uVar1 = 100000;
  if ((int)uVar10 < 0x186a1) {
    uVar1 = uVar10;
  }
  if ((int)uVar6 <= (int)uVar10) {
    uVar6 = uVar1;
  }
  uVar25 = uVar33;
  fVar18 = fVar39;
  if (uVar6 - uVar10 != 0) {
    uVar25 = (ulong)(uint)(float)(int)(uVar6 - uVar10);
    uVar10 = uVar6;
    fVar18 = fVar37;
    if (uVar9 == 0) {
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
  uVar9 = 100000;
  if ((int)uVar4 < 0x186a1) {
    uVar9 = uVar4;
  }
  if ((int)uVar7 <= (int)uVar4) {
    uVar7 = uVar9;
  }
  if (uVar7 - uVar4 != 0) {
    fVar20 = (float)(int)(uVar7 - uVar4);
    uVar4 = uVar7;
    fVar18 = fVar26;
    if (uVar3 == 0) {
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
  uVar9 = uVar10 & 0xfffffffe;
  if (fVar37 != 0.5) {
    uVar9 = uVar10;
  }
  uVar10 = uVar4 & 0xfffffffe;
  if (fVar26 != 0.5) {
    uVar10 = uVar4;
  }
  fVar20 = (float)native_UnityEngine_Transform__get_localPosition_7717f4(lVar11,0);
  fVar39 = (float)native_UnityEngine_Quaternion__op_Multiply_7629c0
                            (uVar17,uVar29,uVar16,uVar38,uVar14,uVar33,fVar39,0);
  fVar39 = fVar41 + fVar20 + fVar39;
  fVar40 = fVar40 + fVar19 + (float)uVar29;
  uVar25 = (ulong)(uint)fVar40;
  uVar28 = (ulong)(uint)(fVar35 + fVar18 + (float)uVar16);
  native_UnityEngine_Transform__set_localPosition_7718a4(fVar39,uVar25,uVar28,lVar11,0);
  native_UIWidget__SetDimensions_94987c(param_1,uVar9,uVar10,0);
  uVar14 = native_UIRect__get_isAnchored_c2d8cc(param_1,0);
  if ((uVar14 & 1) == 0) {
    return;
  }
  lVar11 = native_UnityEngine_Transform__get_parent_765eb0(lVar11,0);
  if (param_1[3] != 0) {
    uVar16 = *(undefined8 *)(param_1[3] + 0x10);
    if (((*(byte *)(_UnityEngine_Object_TypeInfo_12d54e0 + 0x133) >> 2 & 1) != 0) &&
       (*(int *)(_UnityEngine_Object_TypeInfo_12d54e0 + 0xe0) == 0)) {
      native_sub_4327ec();
    }
    fVar39 = fVar39 - fVar37 * (float)(int)uVar9;
    uVar14 = native_UnityEngine_Object__op_Implicit_8e1b98(uVar16,0);
    if ((uVar14 & 1) != 0) {
      if (param_1[3] == 0) goto LAB_00807ccc;
      native_UIRect_AnchorPoint__SetHorizontal_559078(fVar39,param_1[3],lVar11,0);
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
                  (fVar39 + (float)(int)uVar9,param_1[4],lVar11,0);
      }
      if (param_1[5] != 0) {
        uVar16 = *(undefined8 *)(param_1[5] + 0x10);
        if (((*(byte *)(_UnityEngine_Object_TypeInfo_12d54e0 + 0x133) >> 2 & 1) != 0) &&
           (*(int *)(_UnityEngine_Object_TypeInfo_12d54e0 + 0xe0) == 0)) {
          native_sub_4327ec();
        }
        fVar40 = fVar40 - fVar26 * (float)(int)uVar10;
        uVar14 = native_UnityEngine_Object__op_Implicit_8e1b98(uVar16,0);
        if ((uVar14 & 1) != 0) {
          if (param_1[5] == 0) goto LAB_00807ccc;
          native_UIRect_AnchorPoint__SetVertical_5591e0(fVar40,param_1[5],lVar11,0);
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
          lVar12 = param_1[6];
          if (lVar12 != 0) {
            if ((bRam000000000133ea04 & 1) == 0) {
              native_sub_43273c(&UnityEngine_Object_TypeInfo_12d54e0,lVar11,0);
              bRam000000000133ea04 = 1;
            }
            uVar16 = *(undefined8 *)(lVar12 + 0x20);
            if (((*(byte *)(_UnityEngine_Object_TypeInfo_12d54e0 + 0x133) >> 2 & 1) != 0) &&
               (*(int *)(_UnityEngine_Object_TypeInfo_12d54e0 + 0xe0) == 0)) {
              native_sub_4327ec();
            }
            uVar14 = native_UnityEngine_Object__op_Implicit_8e1b98(uVar16,0);
            if ((uVar14 & 1) == 0) {
              if (*(long *)(lVar12 + 0x10) != 0) {
                uVar16 = native_UnityEngine_Transform__get_position_77169c
                                   (*(long *)(lVar12 + 0x10),0);
                if (((*(byte *)(_UnityEngine_Object_TypeInfo_12d54e0 + 0x133) >> 2 & 1) != 0) &&
                   (*(int *)(_UnityEngine_Object_TypeInfo_12d54e0 + 0xe0) == 0)) {
                  native_sub_4327ec();
                }
                uVar14 = native_UnityEngine_Object__op_Inequality_8d76fc(lVar11,0,0);
                if ((uVar14 & 1) != 0) {
                  if (lVar11 == 0) goto LAB_00559338;
                  native_UnityEngine_Transform__InverseTransformPoint_7729a0
                            (uVar16,uVar25,uVar28,lVar11,0);
                }
LAB_00559308:
                uVar17 = native_UnityEngine_Mathf__FloorToInt_8e506c
                                   (((fVar40 + (float)(int)uVar10) - (float)uVar25) + 0.5,0);
                *(undefined4 *)(lVar12 + 0x1c) = uVar17;
                return;
              }
            }
            else {
              plVar13 = *(long **)(lVar12 + 0x20);
              if ((plVar13 != (long *)0x0) &&
                 (lVar11 = (**(code **)(*plVar13 + 0x208))
                                     (plVar13,lVar11,*(undefined8 *)(*plVar13 + 0x210)), lVar11 != 0
                 )) {
                if (*(uint *)(lVar11 + 0x18) < 4) {
                  uVar16 = native_sub_43283c();
                    /* WARNING: Subroutine does not return */
                  native_sub_4327dc(uVar16,0);
                }
                uVar25 = native_UnityEngine_Mathf__Lerp_8e5224
                                   (*(undefined4 *)(lVar11 + 0x48),*(undefined4 *)(lVar11 + 0x30),
                                    *(undefined4 *)(lVar12 + 0x18),0);
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



/* UITexture$$OnUpdate @ 0x945420
 * void UITexture__OnUpdate (UITexture_o* __this, const MethodInfo* method); */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* UITexture$$OnUpdate
   void UITexture__OnUpdate (UITexture_o* __this, const MethodInfo* method); */

void native_UITexture__OnUpdate_945420(long *param_1)

{
  uint uVar1;
  uint uVar2;
  long *plVar3;
  ulong uVar4;
  float fVar5;
  float fVar6;
  float fVar7;
  float fVar8;
  undefined8 uStack_40;
  undefined8 uStack_38;
  
  if ((bRam0000000001341428 & 1) == 0) {
    native_sub_43273c(&UnityEngine_Object_TypeInfo_12d54e0);
    bRam0000000001341428 = 1;
  }
  native_UIWidget__OnUpdate_945598(param_1);
  if ((char)param_1[0x46] != '\0') {
    plVar3 = (long *)(**(code **)(*param_1 + 0x328))(param_1,*(undefined8 *)(*param_1 + 0x330));
    if (((*(byte *)(_UnityEngine_Object_TypeInfo_12d54e0 + 0x133) >> 2 & 1) != 0) &&
       (*(int *)(_UnityEngine_Object_TypeInfo_12d54e0 + 0xe0) == 0)) {
      native_sub_4327ec(_UnityEngine_Object_TypeInfo_12d54e0);
    }
    uVar4 = native_UnityEngine_Object__op_Inequality_8d76fc(plVar3,0,0);
    if ((uVar4 & 1) != 0) {
      if (plVar3 == (long *)0x0) {
                    /* WARNING: Subroutine does not return */
        native_sub_432810();
      }
      uVar1 = (**(code **)(*plVar3 + 0x178))(plVar3,*(undefined8 *)(*plVar3 + 0x180));
      uVar2 = (**(code **)(*plVar3 + 0x198))(plVar3,*(undefined8 *)(*plVar3 + 0x1a0));
      fVar5 = (float)*(int *)((long)param_1 + 0xa4);
      fVar6 = (float)(int)param_1[0x15];
      fVar7 = (float)(int)((uVar1 & 1) + uVar1) / (float)(int)((uVar2 & 1) + uVar2);
      if (fVar5 / fVar6 <= fVar7) {
        fVar6 = ((fVar6 - fVar5 / fVar7) / fVar6) * 0.5;
        fVar7 = 1.0;
        fVar8 = 1.0 - fVar6;
        fVar5 = 0.0;
      }
      else {
        fVar5 = ((fVar5 - fVar7 * fVar6) / fVar5) * 0.5;
        fVar8 = 1.0;
        fVar7 = 1.0 - fVar5;
        fVar6 = 0.0;
      }
      uStack_38 = 0;
      uStack_40 = 0;
      native_UnityEngine_Vector4___ctor_776f24(fVar5,fVar6,fVar7,fVar8,&uStack_40,0);
      native_UIWidget__set_drawRegion_94561c
                ((undefined4)uStack_40,uStack_40._4_4_,(undefined4)uStack_38,uStack_38._4_4_,param_1
                );
    }
  }
  return;
}



/* UITexture$$OnFill @ 0x9456b8
 * void UITexture__OnFill (UITexture_o* __this, System_Collections_Generic_List_Vector3__o* verts, System_Collections_Generic_List_Vector2__o* uvs, System_Collections_Generic_List_Color__o* cols, const MethodInfo* method); */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* UITexture$$OnFill
   void UITexture__OnFill (UITexture_o* __this, System_Collections_Generic_List_Vector3__o* verts,
   System_Collections_Generic_List_Vector2__o* uvs, System_Collections_Generic_List_Color__o* cols,
   const MethodInfo* method); */

void native_UITexture__OnFill_9456b8
               (long *param_1,long param_2,undefined8 param_3,undefined8 param_4)

{
  long lVar1;
  undefined4 uVar2;
  int iVar3;
  int iVar4;
  int iVar5;
  int iVar6;
  long *plVar7;
  ulong uVar8;
  float fVar9;
  float fVar10;
  float fVar11;
  float fVar12;
  float fVar13;
  undefined8 uStack_a0;
  undefined8 uStack_98;
  undefined8 uStack_90;
  undefined8 uStack_88;
  
  if ((bRam0000000001341429 & 1) == 0) {
    native_sub_43273c(&Method_System_Collections_Generic_List_Vector3__get_Count___12dd500);
    native_sub_43273c(&UnityEngine_Object_TypeInfo_12d54e0);
    bRam0000000001341429 = 1;
  }
  uStack_90 = 0;
  uStack_88 = 0;
  uStack_a0 = 0;
  uStack_98 = 0;
  plVar7 = (long *)(**(code **)(*param_1 + 0x328))(param_1,*(undefined8 *)(*param_1 + 0x330));
  if (((*(byte *)(_UnityEngine_Object_TypeInfo_12d54e0 + 0x133) >> 2 & 1) != 0) &&
     (*(int *)(_UnityEngine_Object_TypeInfo_12d54e0 + 0xe0) == 0)) {
    native_sub_4327ec(_UnityEngine_Object_TypeInfo_12d54e0);
  }
  uVar8 = native_UnityEngine_Object__op_Equality_8e9a3c(plVar7,0,0);
  if ((uVar8 & 1) != 0) {
    return;
  }
  lVar1 = (long)param_1 + 0x1fc;
  fVar9 = (float)native_UnityEngine_Rect__get_x_7635f4(lVar1,0);
  if (plVar7 != (long *)0x0) {
    iVar3 = (**(code **)(*plVar7 + 0x178))(plVar7,*(undefined8 *)(*plVar7 + 0x180));
    fVar10 = (float)native_UnityEngine_Rect__get_y_763604(lVar1,0);
    iVar4 = (**(code **)(*plVar7 + 0x198))(plVar7,*(undefined8 *)(*plVar7 + 0x1a0));
    iVar5 = (**(code **)(*plVar7 + 0x178))(plVar7,*(undefined8 *)(*plVar7 + 0x180));
    fVar11 = (float)native_UnityEngine_Rect__get_width_76367c(lVar1,0);
    iVar6 = (**(code **)(*plVar7 + 0x198))(plVar7,*(undefined8 *)(*plVar7 + 0x1a0));
    fVar12 = (float)native_UnityEngine_Rect__get_height_76368c(lVar1,0);
    fVar10 = fVar10 * (float)iVar4;
    fVar11 = fVar11 * (float)iVar5;
    fVar12 = fVar12 * (float)iVar6;
    native_UnityEngine_Rect___ctor_7635c8(fVar9 * (float)iVar3,fVar10,fVar11,fVar12,&uStack_90,0);
    uStack_98 = uStack_88;
    uStack_a0 = uStack_90;
    fVar9 = (float)(**(code **)(*param_1 + 0x3d8))(param_1,*(undefined8 *)(*param_1 + 0x3e0));
    fVar13 = (float)native_UnityEngine_Rect__get_xMin_76363c(&uStack_a0,0);
    native_UnityEngine_Rect__set_xMin_7636a4(fVar13 + fVar9,&uStack_a0,0);
    fVar9 = (float)native_UnityEngine_Rect__get_yMin_763644(&uStack_a0,0);
    native_UnityEngine_Rect__set_yMin_7636c0(fVar10 + fVar9,&uStack_a0,0);
    fVar9 = (float)native_UnityEngine_Rect__get_xMax_76365c(&uStack_a0,0);
    native_UnityEngine_Rect__set_xMax_7636dc(fVar9 - fVar11,&uStack_a0,0);
    fVar9 = (float)native_UnityEngine_Rect__get_yMax_76366c(&uStack_a0,0);
    native_UnityEngine_Rect__set_yMax_7636ec(fVar9 - fVar12,&uStack_a0,0);
    iVar3 = (**(code **)(*plVar7 + 0x178))(plVar7,*(undefined8 *)(*plVar7 + 0x180));
    fVar11 = 1.0 / (float)iVar3;
    iVar3 = (**(code **)(*plVar7 + 0x198))(plVar7,*(undefined8 *)(*plVar7 + 0x1a0));
    fVar10 = 1.0 / (float)iVar3;
    fVar9 = (float)native_UnityEngine_Rect__get_xMin_76363c(&uStack_90,0);
    native_UnityEngine_Rect__set_xMin_7636a4(fVar11 * fVar9,&uStack_90,0);
    fVar9 = (float)native_UnityEngine_Rect__get_xMax_76365c(&uStack_90,0);
    native_UnityEngine_Rect__set_xMax_7636dc(fVar11 * fVar9,&uStack_90,0);
    fVar9 = (float)native_UnityEngine_Rect__get_yMin_763644(&uStack_90,0);
    native_UnityEngine_Rect__set_yMin_7636c0(fVar10 * fVar9,&uStack_90,0);
    fVar9 = (float)native_UnityEngine_Rect__get_yMax_76366c(&uStack_90,0);
    native_UnityEngine_Rect__set_yMax_7636ec(fVar10 * fVar9,&uStack_90,0);
    fVar9 = (float)native_UnityEngine_Rect__get_xMin_76363c(&uStack_a0,0);
    native_UnityEngine_Rect__set_xMin_7636a4(fVar11 * fVar9,&uStack_a0,0);
    fVar9 = (float)native_UnityEngine_Rect__get_xMax_76365c(&uStack_a0,0);
    native_UnityEngine_Rect__set_xMax_7636dc(fVar11 * fVar9,&uStack_a0,0);
    fVar9 = (float)native_UnityEngine_Rect__get_yMin_763644(&uStack_a0,0);
    native_UnityEngine_Rect__set_yMin_7636c0(fVar10 * fVar9,&uStack_a0,0);
    fVar9 = (float)native_UnityEngine_Rect__get_yMax_76366c(&uStack_a0,0);
    native_UnityEngine_Rect__set_yMax_7636ec(fVar10 * fVar9,&uStack_a0,0);
    if (param_2 != 0) {
      uVar2 = *(undefined4 *)(param_2 + 0x18);
      native_UIBasicSprite__Fill_c8c42c
                (uStack_90 & 0xffffffff,uStack_90._4_4_,(undefined4)uStack_88,uStack_88._4_4_,
                 (undefined4)uStack_a0,uStack_a0._4_4_,(undefined4)uStack_98,uStack_98._4_4_,param_1
                 ,param_2,param_3,param_4,0);
      if (param_1[0x19] == 0) {
        return;
      }
      native_UIWidget_OnPostFillCallback__Invoke_55bd18
                (param_1[0x19],param_1,uVar2,param_2,param_3,param_4,0);
      return;
    }
  }
                    /* WARNING: Subroutine does not return */
  native_sub_432810();
}



/* UITexture$$.ctor @ 0x945a68
 * void UITexture___ctor (UITexture_o* __this, const MethodInfo* method); */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* UITexture$$.ctor
   void UITexture___ctor (UITexture_o* __this, const MethodInfo* method); */

void native_UITexture___ctor_945a68(long param_1)

{
  undefined4 uVar1;
  undefined4 uVar2;
  undefined4 uVar3;
  undefined4 uVar4;
  undefined8 uStack_30;
  undefined8 uStack_28;
  
  if ((bRam000000000134142a & 1) == 0) {
    native_sub_43273c(&UIBasicSprite_TypeInfo_12d6400);
    bRam000000000134142a = 1;
  }
  uVar3 = 0x3f800000;
  uVar2 = 0;
  uVar4 = 0x3f800000;
  uStack_30 = 0;
  uStack_28 = 0;
  native_UnityEngine_Rect___ctor_7635c8(0,&uStack_30,0);
  *(undefined8 *)(param_1 + 0x204) = uStack_28;
  *(undefined8 *)(param_1 + 0x1fc) = uStack_30;
  uVar1 = native_UnityEngine_Vector4__get_zero_777178(0);
  *(undefined4 *)(param_1 + 0x220) = uVar1;
  *(undefined4 *)(param_1 + 0x224) = uVar2;
  *(undefined4 *)(param_1 + 0x228) = uVar3;
  *(undefined4 *)(param_1 + 0x22c) = uVar4;
  *(undefined4 *)(param_1 + 0x234) = 0xffffffff;
  if (((*(byte *)(_UIBasicSprite_TypeInfo_12d6400 + 0x133) >> 2 & 1) != 0) &&
     (*(int *)(_UIBasicSprite_TypeInfo_12d6400 + 0xe0) == 0)) {
    native_sub_4327ec();
  }
  native_UIBasicSprite___ctor_c900e4(param_1,0);
  return;
}


