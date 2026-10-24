/* ARM64 IL2CPP native pseudocode from Ghidra.
 * Recovered implementation, not original C# source.
 * Function boundaries follow the IL2CPP method address table. */


/* UIDrawCall$$get_list @ 0x9e5a18
 * BetterList_UIDrawCall__o* UIDrawCall__get_list (const MethodInfo* method); */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* UIDrawCall$$get_list
   BetterList_UIDrawCall__o* UIDrawCall__get_list (const MethodInfo* method); */

undefined8 native_UIDrawCall__get_list_9e5a18(void)

{
  if ((bRam00000000013418f6 & 1) == 0) {
    native_sub_43273c(&UIDrawCall_TypeInfo_12d6438);
    bRam00000000013418f6 = 1;
  }
  if (((*(byte *)(_UIDrawCall_TypeInfo_12d6438 + 0x133) >> 2 & 1) != 0) &&
     (*(int *)(_UIDrawCall_TypeInfo_12d6438 + 0xe0) == 0)) {
    native_sub_4327ec();
  }
  return **(undefined8 **)(_UIDrawCall_TypeInfo_12d6438 + 0xb8);
}



/* UIDrawCall$$get_activeList @ 0x9e5a7c
 * BetterList_UIDrawCall__o* UIDrawCall__get_activeList (const MethodInfo* method); */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* UIDrawCall$$get_activeList
   BetterList_UIDrawCall__o* UIDrawCall__get_activeList (const MethodInfo* method); */

undefined8 native_UIDrawCall__get_activeList_9e5a7c(void)

{
  if ((bRam00000000013418f7 & 1) == 0) {
    native_sub_43273c(&UIDrawCall_TypeInfo_12d6438);
    bRam00000000013418f7 = 1;
  }
  if (((*(byte *)(_UIDrawCall_TypeInfo_12d6438 + 0x133) >> 2 & 1) != 0) &&
     (*(int *)(_UIDrawCall_TypeInfo_12d6438 + 0xe0) == 0)) {
    native_sub_4327ec();
  }
  return **(undefined8 **)(_UIDrawCall_TypeInfo_12d6438 + 0xb8);
}



/* UIDrawCall$$get_inactiveList @ 0x9e5ae0
 * BetterList_UIDrawCall__o* UIDrawCall__get_inactiveList (const MethodInfo* method); */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* UIDrawCall$$get_inactiveList
   BetterList_UIDrawCall__o* UIDrawCall__get_inactiveList (const MethodInfo* method); */

undefined8 native_UIDrawCall__get_inactiveList_9e5ae0(void)

{
  if ((bRam00000000013418f8 & 1) == 0) {
    native_sub_43273c(&UIDrawCall_TypeInfo_12d6438);
    bRam00000000013418f8 = 1;
  }
  if (((*(byte *)(_UIDrawCall_TypeInfo_12d6438 + 0x133) >> 2 & 1) != 0) &&
     (*(int *)(_UIDrawCall_TypeInfo_12d6438 + 0xe0) == 0)) {
    native_sub_4327ec();
  }
  return *(undefined8 *)(*(long *)(_UIDrawCall_TypeInfo_12d6438 + 0xb8) + 8);
}



/* UIDrawCall$$get_renderQueue @ 0x9e5b44
 * int32_t UIDrawCall__get_renderQueue (UIDrawCall_o* __this, const MethodInfo* method); */

/* UIDrawCall$$get_renderQueue
   int32_t UIDrawCall__get_renderQueue (UIDrawCall_o* __this, const MethodInfo* method); */

undefined4 native_UIDrawCall__get_renderQueue_9e5b44(long param_1)

{
  return *(undefined4 *)(param_1 + 0xd0);
}



/* UIDrawCall$$set_renderQueue @ 0x9e5b4c
 * void UIDrawCall__set_renderQueue (UIDrawCall_o* __this, int32_t value, const MethodInfo* method); */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* UIDrawCall$$set_renderQueue
   void UIDrawCall__set_renderQueue (UIDrawCall_o* __this, int32_t value, const MethodInfo* method);
    */

void native_UIDrawCall__set_renderQueue_9e5b4c(long param_1,int param_2)

{
  ulong uVar1;
  long lVar2;
  undefined8 uVar3;
  
  if ((bRam00000000013418f9 & 1) == 0) {
    native_sub_43273c(&UnityEngine_Object_TypeInfo_12d54e0);
    bRam00000000013418f9 = 1;
  }
  if (*(int *)(param_1 + 0xd0) != param_2) {
    *(int *)(param_1 + 0xd0) = param_2;
    uVar3 = *(undefined8 *)(param_1 + 0xb8);
    if (((*(byte *)(_UnityEngine_Object_TypeInfo_12d54e0 + 0x133) >> 2 & 1) != 0) &&
       (*(int *)(_UnityEngine_Object_TypeInfo_12d54e0 + 0xe0) == 0)) {
      native_sub_4327ec();
    }
    uVar1 = native_UnityEngine_Object__op_Inequality_8d76fc(uVar3,0,0);
    if ((uVar1 & 1) != 0) {
      lVar2 = *(long *)(param_1 + 0xb8);
      if (lVar2 != 0) {
        if (pcRam0000000001340dd0 == (code *)0x0) {
          pcRam0000000001340dd0 = (code *)native_sub_4326f0(&UNK_00e2e6c2);
        }
                    /* WARNING: Could not recover jumptable at 0x008e3938. Too many branches */
                    /* WARNING: Treating indirect jump as call */
        (*pcRam0000000001340dd0)(lVar2,param_2);
        return;
      }
                    /* WARNING: Subroutine does not return */
      native_sub_432810();
    }
  }
  return;
}



/* UIDrawCall$$get_sortingOrder @ 0x9e5c00
 * int32_t UIDrawCall__get_sortingOrder (UIDrawCall_o* __this, const MethodInfo* method); */

/* UIDrawCall$$get_sortingOrder
   int32_t UIDrawCall__get_sortingOrder (UIDrawCall_o* __this, const MethodInfo* method); */

undefined4 native_UIDrawCall__get_sortingOrder_9e5c00(long param_1)

{
  return *(undefined4 *)(param_1 + 0xf8);
}



/* UIDrawCall$$set_sortingOrder @ 0x9e5c08
 * void UIDrawCall__set_sortingOrder (UIDrawCall_o* __this, int32_t value, const MethodInfo* method); */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* UIDrawCall$$set_sortingOrder
   void UIDrawCall__set_sortingOrder (UIDrawCall_o* __this, int32_t value, const MethodInfo*
   method); */

void native_UIDrawCall__set_sortingOrder_9e5c08(long param_1,int param_2)

{
  ulong uVar1;
  long lVar2;
  undefined8 uVar3;
  
  if ((bRam00000000013418fa & 1) == 0) {
    native_sub_43273c(&UnityEngine_Object_TypeInfo_12d54e0);
    bRam00000000013418fa = 1;
  }
  if (*(int *)(param_1 + 0xf8) != param_2) {
    *(int *)(param_1 + 0xf8) = param_2;
    uVar3 = *(undefined8 *)(param_1 + 0xb0);
    if (((*(byte *)(_UnityEngine_Object_TypeInfo_12d54e0 + 0x133) >> 2 & 1) != 0) &&
       (*(int *)(_UnityEngine_Object_TypeInfo_12d54e0 + 0xe0) == 0)) {
      native_sub_4327ec();
    }
    uVar1 = native_UnityEngine_Object__op_Inequality_8d76fc(uVar3,0,0);
    if ((uVar1 & 1) != 0) {
      lVar2 = *(long *)(param_1 + 0xb0);
      if (lVar2 != 0) {
        if (pcRam000000000133f9e8 == (code *)0x0) {
          pcRam000000000133f9e8 = (code *)native_sub_4326f0(&UNK_00e28b72);
        }
                    /* WARNING: Could not recover jumptable at 0x00768e58. Too many branches */
                    /* WARNING: Treating indirect jump as call */
        (*pcRam000000000133f9e8)(lVar2,param_2);
        return;
      }
                    /* WARNING: Subroutine does not return */
      native_sub_432810();
    }
  }
  return;
}



/* UIDrawCall$$get_sortingLayerName @ 0x9e5cbc
 * System_String_o* UIDrawCall__get_sortingLayerName (UIDrawCall_o* __this, const MethodInfo* method); */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* UIDrawCall$$get_sortingLayerName
   System_String_o* UIDrawCall__get_sortingLayerName (UIDrawCall_o* __this, const MethodInfo*
   method); */

undefined8 native_UIDrawCall__get_sortingLayerName_9e5cbc(long param_1)

{
  ulong uVar1;
  undefined8 *puVar2;
  undefined8 uVar3;
  
  if ((bRam00000000013418fb & 1) == 0) {
    native_sub_43273c(&UnityEngine_Object_TypeInfo_12d54e0);
    bRam00000000013418fb = 1;
  }
  puVar2 = (undefined8 *)(param_1 + 0xf0);
  uVar1 = native_System_String__IsNullOrEmpty_b09430(*puVar2,0);
  if ((uVar1 & 1) != 0) {
    uVar3 = *(undefined8 *)(param_1 + 0xb0);
    if (((*(byte *)(_UnityEngine_Object_TypeInfo_12d54e0 + 0x133) >> 2 & 1) != 0) &&
       (*(int *)(_UnityEngine_Object_TypeInfo_12d54e0 + 0xe0) == 0)) {
      native_sub_4327ec();
    }
    uVar1 = native_UnityEngine_Object__op_Equality_8e9a3c(uVar3,0,0);
    if ((uVar1 & 1) != 0) {
      return 0;
    }
    if (*(long *)(param_1 + 0xb0) == 0) {
                    /* WARNING: Subroutine does not return */
      native_sub_432810();
    }
    uVar3 = native_UnityEngine_Renderer__get_sortingLayerName_768cac(*(long *)(param_1 + 0xb0),0);
    *puVar2 = uVar3;
    native_sub_4326e0(puVar2,uVar3);
  }
  return *puVar2;
}



/* UIDrawCall$$set_sortingLayerName @ 0x9e5d7c
 * void UIDrawCall__set_sortingLayerName (UIDrawCall_o* __this, System_String_o* value, const MethodInfo* method); */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* UIDrawCall$$set_sortingLayerName
   void UIDrawCall__set_sortingLayerName (UIDrawCall_o* __this, System_String_o* value, const
   MethodInfo* method); */

void native_UIDrawCall__set_sortingLayerName_9e5d7c(long param_1,undefined8 param_2)

{
  ulong uVar1;
  long lVar2;
  undefined8 uVar3;
  
  if ((bRam00000000013418fc & 1) == 0) {
    native_sub_43273c(&UnityEngine_Object_TypeInfo_12d54e0);
    bRam00000000013418fc = 1;
  }
  uVar3 = *(undefined8 *)(param_1 + 0xb0);
  if (((*(byte *)(_UnityEngine_Object_TypeInfo_12d54e0 + 0x133) >> 2 & 1) != 0) &&
     (*(int *)(_UnityEngine_Object_TypeInfo_12d54e0 + 0xe0) == 0)) {
    native_sub_4327ec();
  }
  uVar1 = native_UnityEngine_Object__op_Inequality_8d76fc(uVar3,0,0);
  if ((uVar1 & 1) != 0) {
    uVar1 = native_System_String__op_Inequality_afbbb4(*(undefined8 *)(param_1 + 0xf0),param_2,0);
    if ((uVar1 & 1) != 0) {
      *(undefined8 *)(param_1 + 0xf0) = param_2;
      native_sub_4326e0((undefined8 *)(param_1 + 0xf0),param_2);
      lVar2 = *(long *)(param_1 + 0xb0);
      if (lVar2 != 0) {
        if (pcRam000000000133f9c8 == (code *)0x0) {
          pcRam000000000133f9c8 = (code *)native_sub_4326f0(&UNK_00e28aad);
        }
                    /* WARNING: Could not recover jumptable at 0x00768d38. Too many branches */
                    /* WARNING: Treating indirect jump as call */
        (*pcRam000000000133f9c8)(lVar2,param_2);
        return;
      }
                    /* WARNING: Subroutine does not return */
      native_sub_432810();
    }
  }
  return;
}



/* UIDrawCall$$get_finalRenderQueue @ 0x9e5e48
 * int32_t UIDrawCall__get_finalRenderQueue (UIDrawCall_o* __this, const MethodInfo* method); */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* UIDrawCall$$get_finalRenderQueue
   int32_t UIDrawCall__get_finalRenderQueue (UIDrawCall_o* __this, const MethodInfo* method); */

ulong native_UIDrawCall__get_finalRenderQueue_9e5e48(long param_1)

{
  ulong uVar1;
  long lVar2;
  undefined8 uVar3;
  
  if ((bRam00000000013418fd & 1) == 0) {
    native_sub_43273c(&UnityEngine_Object_TypeInfo_12d54e0);
    bRam00000000013418fd = 1;
  }
  uVar3 = *(undefined8 *)(param_1 + 0xb8);
  if (((*(byte *)(_UnityEngine_Object_TypeInfo_12d54e0 + 0x133) >> 2 & 1) != 0) &&
     (*(int *)(_UnityEngine_Object_TypeInfo_12d54e0 + 0xe0) == 0)) {
    native_sub_4327ec();
  }
  uVar1 = native_UnityEngine_Object__op_Inequality_8d76fc(uVar3,0,0);
  if ((uVar1 & 1) != 0) {
    lVar2 = *(long *)(param_1 + 0xb8);
    if (lVar2 != 0) {
      if (pcRam0000000001340dc8 == (code *)0x0) {
        pcRam0000000001340dc8 = (code *)native_sub_4326f0(&UNK_00e2e69a);
      }
                    /* WARNING: Could not recover jumptable at 0x008e38e8. Too many branches */
                    /* WARNING: Treating indirect jump as call */
      uVar1 = (*pcRam0000000001340dc8)(lVar2);
      return uVar1;
    }
                    /* WARNING: Subroutine does not return */
    native_sub_432810();
  }
  return (ulong)*(uint *)(param_1 + 0xd0);
}



/* UIDrawCall$$get_cachedTransform @ 0x9e5edc
 * UnityEngine_Transform_o* UIDrawCall__get_cachedTransform (UIDrawCall_o* __this, const MethodInfo* method); */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* UIDrawCall$$get_cachedTransform
   UnityEngine_Transform_o* UIDrawCall__get_cachedTransform (UIDrawCall_o* __this, const MethodInfo*
   method); */

undefined8 native_UIDrawCall__get_cachedTransform_9e5edc(long param_1)

{
  ulong uVar1;
  undefined8 *puVar2;
  undefined8 uVar3;
  
  if ((bRam00000000013418fe & 1) == 0) {
    native_sub_43273c(&UnityEngine_Object_TypeInfo_12d54e0);
    bRam00000000013418fe = 1;
  }
  puVar2 = (undefined8 *)(param_1 + 0x98);
  uVar3 = *puVar2;
  if (((*(byte *)(_UnityEngine_Object_TypeInfo_12d54e0 + 0x133) >> 2 & 1) != 0) &&
     (*(int *)(_UnityEngine_Object_TypeInfo_12d54e0 + 0xe0) == 0)) {
    native_sub_4327ec();
  }
  uVar1 = native_UnityEngine_Object__op_Equality_8e9a3c(uVar3,0,0);
  if ((uVar1 & 1) != 0) {
    uVar3 = native_UnityEngine_Component__get_transform_8da62c(param_1,0);
    *(undefined8 *)(param_1 + 0x98) = uVar3;
    native_sub_4326e0(puVar2,uVar3);
  }
  return *puVar2;
}



/* UIDrawCall$$get_baseMaterial @ 0x9e5f7c
 * UnityEngine_Material_o* UIDrawCall__get_baseMaterial (UIDrawCall_o* __this, const MethodInfo* method); */

/* UIDrawCall$$get_baseMaterial
   UnityEngine_Material_o* UIDrawCall__get_baseMaterial (UIDrawCall_o* __this, const MethodInfo*
   method); */

undefined8 native_UIDrawCall__get_baseMaterial_9e5f7c(long param_1)

{
  return *(undefined8 *)(param_1 + 0x78);
}



/* UIDrawCall$$set_baseMaterial @ 0x9e5f84
 * void UIDrawCall__set_baseMaterial (UIDrawCall_o* __this, UnityEngine_Material_o* value, const MethodInfo* method); */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* UIDrawCall$$set_baseMaterial
   void UIDrawCall__set_baseMaterial (UIDrawCall_o* __this, UnityEngine_Material_o* value, const
   MethodInfo* method); */

void native_UIDrawCall__set_baseMaterial_9e5f84(long param_1,undefined8 param_2)

{
  ulong uVar1;
  undefined8 uVar2;
  
  if ((bRam00000000013418ff & 1) == 0) {
    native_sub_43273c(&UnityEngine_Object_TypeInfo_12d54e0);
    bRam00000000013418ff = 1;
  }
  uVar2 = *(undefined8 *)(param_1 + 0x78);
  if (((*(byte *)(_UnityEngine_Object_TypeInfo_12d54e0 + 0x133) >> 2 & 1) != 0) &&
     (*(int *)(_UnityEngine_Object_TypeInfo_12d54e0 + 0xe0) == 0)) {
    native_sub_4327ec();
  }
  uVar1 = native_UnityEngine_Object__op_Inequality_8d76fc(uVar2,param_2,0);
  if ((uVar1 & 1) != 0) {
    *(undefined8 *)(param_1 + 0x78) = param_2;
    native_sub_4326e0((undefined8 *)(param_1 + 0x78),param_2);
    *(undefined1 *)(param_1 + 0xcc) = 1;
  }
  return;
}



/* UIDrawCall$$get_dynamicMaterial @ 0x9e6020
 * UnityEngine_Material_o* UIDrawCall__get_dynamicMaterial (UIDrawCall_o* __this, const MethodInfo* method); */

/* UIDrawCall$$get_dynamicMaterial
   UnityEngine_Material_o* UIDrawCall__get_dynamicMaterial (UIDrawCall_o* __this, const MethodInfo*
   method); */

undefined8 native_UIDrawCall__get_dynamicMaterial_9e6020(long param_1)

{
  return *(undefined8 *)(param_1 + 0xb8);
}



/* UIDrawCall$$get_mainTexture @ 0x9e6028
 * UnityEngine_Texture_o* UIDrawCall__get_mainTexture (UIDrawCall_o* __this, const MethodInfo* method); */

/* UIDrawCall$$get_mainTexture
   UnityEngine_Texture_o* UIDrawCall__get_mainTexture (UIDrawCall_o* __this, const MethodInfo*
   method); */

undefined8 native_UIDrawCall__get_mainTexture_9e6028(long param_1)

{
  return *(undefined8 *)(param_1 + 0x80);
}



/* UIDrawCall$$set_mainTexture @ 0x9e6030
 * void UIDrawCall__set_mainTexture (UIDrawCall_o* __this, UnityEngine_Texture_o* value, const MethodInfo* method); */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* UIDrawCall$$set_mainTexture
   void UIDrawCall__set_mainTexture (UIDrawCall_o* __this, UnityEngine_Texture_o* value, const
   MethodInfo* method); */

void native_UIDrawCall__set_mainTexture_9e6030(long param_1,undefined8 param_2)

{
  long *plVar1;
  undefined8 uVar2;
  undefined4 uVar3;
  ulong uVar4;
  long lVar5;
  
  if ((bRam0000000001341900 & 1) == 0) {
    native_sub_43273c(&UnityEngine_MaterialPropertyBlock_TypeInfo_12d51b0);
    native_sub_43273c(&UnityEngine_Object_TypeInfo_12d54e0);
    native_sub_43273c(&StringLiteral__MainTex_12f3608);
    bRam0000000001341900 = 1;
  }
  *(undefined8 *)(param_1 + 0x80) = param_2;
  native_sub_4326e0((undefined8 *)(param_1 + 0x80),param_2);
  lVar5 = *(long *)(param_1 + 0x100);
  if (lVar5 == 0) {
    plVar1 = (long *)(param_1 + 0x100);
    lVar5 = native_sub_432808(_UnityEngine_MaterialPropertyBlock_TypeInfo_12d51b0);
    native_UnityEngine_MaterialPropertyBlock___ctor_8e4568(lVar5,0);
    *plVar1 = lVar5;
    native_sub_4326e0(plVar1,lVar5);
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



/* UIDrawCall$$get_shader @ 0x9e6140
 * UnityEngine_Shader_o* UIDrawCall__get_shader (UIDrawCall_o* __this, const MethodInfo* method); */

/* UIDrawCall$$get_shader
   UnityEngine_Shader_o* UIDrawCall__get_shader (UIDrawCall_o* __this, const MethodInfo* method); */

undefined8 native_UIDrawCall__get_shader_9e6140(long param_1)

{
  return *(undefined8 *)(param_1 + 0x88);
}



/* UIDrawCall$$set_shader @ 0x9e6148
 * void UIDrawCall__set_shader (UIDrawCall_o* __this, UnityEngine_Shader_o* value, const MethodInfo* method); */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* UIDrawCall$$set_shader
   void UIDrawCall__set_shader (UIDrawCall_o* __this, UnityEngine_Shader_o* value, const MethodInfo*
   method); */

void native_UIDrawCall__set_shader_9e6148(long param_1,undefined8 param_2)

{
  ulong uVar1;
  undefined8 uVar2;
  
  if ((bRam0000000001341901 & 1) == 0) {
    native_sub_43273c(&UnityEngine_Object_TypeInfo_12d54e0);
    bRam0000000001341901 = 1;
  }
  uVar2 = *(undefined8 *)(param_1 + 0x88);
  if (((*(byte *)(_UnityEngine_Object_TypeInfo_12d54e0 + 0x133) >> 2 & 1) != 0) &&
     (*(int *)(_UnityEngine_Object_TypeInfo_12d54e0 + 0xe0) == 0)) {
    native_sub_4327ec();
  }
  uVar1 = native_UnityEngine_Object__op_Inequality_8d76fc(uVar2,param_2,0);
  if ((uVar1 & 1) != 0) {
    *(undefined8 *)(param_1 + 0x88) = param_2;
    native_sub_4326e0((undefined8 *)(param_1 + 0x88),param_2);
    *(undefined1 *)(param_1 + 0xcc) = 1;
  }
  return;
}



/* UIDrawCall$$get_shadowMode @ 0x9e61e4
 * int32_t UIDrawCall__get_shadowMode (UIDrawCall_o* __this, const MethodInfo* method); */

/* UIDrawCall$$get_shadowMode
   int32_t UIDrawCall__get_shadowMode (UIDrawCall_o* __this, const MethodInfo* method); */

undefined4 native_UIDrawCall__get_shadowMode_9e61e4(long param_1)

{
  return *(undefined4 *)(param_1 + 200);
}



/* UIDrawCall$$set_shadowMode @ 0x9e61ec
 * void UIDrawCall__set_shadowMode (UIDrawCall_o* __this, int32_t value, const MethodInfo* method); */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* UIDrawCall$$set_shadowMode
   void UIDrawCall__set_shadowMode (UIDrawCall_o* __this, int32_t value, const MethodInfo* method);
    */

void native_UIDrawCall__set_shadowMode_9e61ec(long param_1,int param_2)

{
  ulong uVar1;
  long lVar2;
  undefined8 uVar3;
  
  if ((bRam0000000001341902 & 1) == 0) {
    native_sub_43273c(&UnityEngine_Object_TypeInfo_12d54e0);
    bRam0000000001341902 = 1;
  }
  if (*(int *)(param_1 + 200) != param_2) {
    *(int *)(param_1 + 200) = param_2;
    uVar3 = *(undefined8 *)(param_1 + 0xb0);
    if (((*(byte *)(_UnityEngine_Object_TypeInfo_12d54e0 + 0x133) >> 2 & 1) != 0) &&
       (*(int *)(_UnityEngine_Object_TypeInfo_12d54e0 + 0xe0) == 0)) {
      native_sub_4327ec();
    }
    uVar1 = native_UnityEngine_Object__op_Inequality_8d76fc(uVar3,0,0);
    if ((uVar1 & 1) != 0) {
      lVar2 = *(long *)(param_1 + 0xb0);
      if (*(int *)(param_1 + 200) == 0) {
        if (lVar2 != 0) {
          native_UnityEngine_Renderer__set_shadowCastingMode_768c0c(lVar2,0,0);
          lVar2 = *(long *)(param_1 + 0xb0);
          if (lVar2 != 0) {
            uVar3 = 0;
            goto native_UnityEngine_Renderer__set_receiveShadows_768c5c;
          }
        }
      }
      else if (lVar2 != 0) {
        native_UnityEngine_Renderer__set_shadowCastingMode_768c0c
                  (lVar2,*(int *)(param_1 + 200) != 1,0);
        lVar2 = *(long *)(param_1 + 0xb0);
        if (lVar2 != 0) {
          uVar3 = 1;
native_UnityEngine_Renderer__set_receiveShadows_768c5c:
          if (pcRam000000000133f9b8 == (code *)0x0) {
            pcRam000000000133f9b8 = (code *)native_sub_4326f0(&UNK_00e28a47);
          }
                    /* WARNING: Could not recover jumptable at 0x00768ca8. Too many branches */
                    /* WARNING: Treating indirect jump as call */
          (*pcRam000000000133f9b8)(lVar2,uVar3);
          return;
        }
      }
                    /* WARNING: Subroutine does not return */
      native_sub_432810();
    }
  }
  return;
}



/* UIDrawCall$$get_triangles @ 0x9e62ec
 * int32_t UIDrawCall__get_triangles (UIDrawCall_o* __this, const MethodInfo* method); */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* UIDrawCall$$get_triangles
   int32_t UIDrawCall__get_triangles (UIDrawCall_o* __this, const MethodInfo* method); */

undefined4 native_UIDrawCall__get_triangles_9e62ec(long param_1)

{
  undefined4 uVar1;
  ulong uVar2;
  undefined8 uVar3;
  
  if ((bRam0000000001341903 & 1) == 0) {
    native_sub_43273c(&UnityEngine_Object_TypeInfo_12d54e0);
    bRam0000000001341903 = 1;
  }
  uVar3 = *(undefined8 *)(param_1 + 0xa0);
  if (((*(byte *)(_UnityEngine_Object_TypeInfo_12d54e0 + 0x133) >> 2 & 1) != 0) &&
     (*(int *)(_UnityEngine_Object_TypeInfo_12d54e0 + 0xe0) == 0)) {
    native_sub_4327ec();
  }
  uVar2 = native_UnityEngine_Object__op_Inequality_8d76fc(uVar3,0,0);
  if ((uVar2 & 1) == 0) {
    uVar1 = 0;
  }
  else {
    uVar1 = *(undefined4 *)(param_1 + 0xd4);
  }
  return uVar1;
}



/* UIDrawCall$$get_isClipped @ 0x9e636c
 * bool UIDrawCall__get_isClipped (UIDrawCall_o* __this, const MethodInfo* method); */

/* UIDrawCall$$get_isClipped
   bool UIDrawCall__get_isClipped (UIDrawCall_o* __this, const MethodInfo* method); */

bool native_UIDrawCall__get_isClipped_9e636c(long param_1)

{
  return *(int *)(param_1 + 0x90) != 0;
}



/* UIDrawCall$$CreateMaterial @ 0x9e637c
 * void UIDrawCall__CreateMaterial (UIDrawCall_o* __this, const MethodInfo* method); */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* UIDrawCall$$CreateMaterial
   void UIDrawCall__CreateMaterial (UIDrawCall_o* __this, const MethodInfo* method); */

void native_UIDrawCall__CreateMaterial_9e637c(long param_1)

{
  short sVar1;
  int iVar2;
  undefined8 *puVar3;
  ulong uVar4;
  long lVar5;
  undefined8 extraout_x1;
  undefined8 extraout_x1_00;
  ulong uVar6;
  long *plVar7;
  int *piVar8;
  undefined8 uVar9;
  undefined8 uVar10;
  undefined8 uVar11;
  
  if ((bRam0000000001341904 & 1) == 0) {
    native_sub_43273c(&UnityEngine_Debug_TypeInfo_12d4338);
    native_sub_43273c(&UnityEngine_Material_TypeInfo_12d51a8);
    native_sub_43273c(&UnityEngine_Object_TypeInfo_12d54e0);
    native_sub_43273c(&StringLiteral__NGUI___12f32c8);
    native_sub_43273c(&StringLiteral___12eac68);
    native_sub_43273c(&StringLiteral_Hidden__12ee3b0);
    native_sub_43273c(&StringLiteral___TextureClip__12eacd0);
    native_sub_43273c(&StringLiteral_Unlit_Transparent_Colored_12f2c60);
    native_sub_43273c(&StringLiteral___SoftClip__12eacc8);
    native_sub_43273c(&StringLiteral_Unlit_Text_12f2c58);
    native_sub_43273c(&StringLiteral_GUI_Text_Shader_12ee188);
    native_sub_43273c(&StringLiteral__clip_regions_12eae00);
    native_sub_43273c(&StringLiteral__shader_doesn_t_have_a_clipped_shader_version_for__12eaf08);
    native_sub_43273c(&StringLiteral__12eaac0);
    bRam0000000001341904 = 1;
  }
  *(undefined1 *)(param_1 + 0xd9) = 0;
  *(undefined1 *)(param_1 + 0xcd) = 0;
  if (*(long *)(param_1 + 0x30) == 0) goto LAB_009e6ac0;
  iVar2 = native_UIPanel__get_clipCount_aefea0(*(long *)(param_1 + 0x30),0);
  piVar8 = (int *)(param_1 + 0x90);
  *piVar8 = iVar2;
  uVar9 = *(undefined8 *)(param_1 + 0x88);
  if (((*(byte *)(_UnityEngine_Object_TypeInfo_12d54e0 + 0x133) >> 2 & 1) != 0) &&
     (*(int *)(_UnityEngine_Object_TypeInfo_12d54e0 + 0xe0) == 0)) {
    native_sub_4327ec();
  }
  uVar4 = native_UnityEngine_Object__op_Inequality_8d76fc(uVar9,0,0);
  if ((uVar4 & 1) == 0) {
    uVar9 = *(undefined8 *)(param_1 + 0x78);
    if (((*(byte *)(_UnityEngine_Object_TypeInfo_12d54e0 + 0x133) >> 2 & 1) != 0) &&
       (*(int *)(_UnityEngine_Object_TypeInfo_12d54e0 + 0xe0) == 0)) {
      native_sub_4327ec();
    }
    uVar4 = native_UnityEngine_Object__op_Inequality_8d76fc(uVar9,0,0);
    lVar5 = _StringLiteral_Unlit_Transparent_Colored_12f2c60;
    if ((uVar4 & 1) != 0) {
      if (*(long *)(param_1 + 0x78) == 0) goto LAB_009e6ac0;
      lVar5 = native_UnityEngine_Material__get_shader_8e3078(*(long *)(param_1 + 0x78),0);
      goto joined_r0x009e64f8;
    }
  }
  else {
    lVar5 = *(long *)(param_1 + 0x88);
joined_r0x009e64f8:
    if (lVar5 == 0) goto LAB_009e6ac0;
    lVar5 = native_UnityEngine_Object__get_name_8e8098(lVar5,0);
  }
  if (((((lVar5 == 0) ||
        (lVar5 = native_System_String__Replace_afd9ac
                           (lVar5,_StringLiteral_GUI_Text_Shader_12ee188,
                            _StringLiteral_Unlit_Text_12f2c58,0), lVar5 == 0)) ||
       ((2 < *(int *)(lVar5 + 0x10) &&
        (((sVar1 = native_System_String__get_Chars_b03810(lVar5,*(int *)(lVar5 + 0x10) + -2,0),
          sVar1 == 0x20 &&
          (sVar1 = native_System_String__get_Chars_b03810(lVar5,*(int *)(lVar5 + 0x10) + -1,0),
          (ushort)(sVar1 - 0x31U) < 9)) &&
         (lVar5 = native_System_String__Substring_b09fac(lVar5,0,*(int *)(lVar5 + 0x10) + -2,0),
         lVar5 == 0)))))) ||
      ((uVar4 = native_System_String__StartsWith_b0cc2c(lVar5,_StringLiteral_Hidden__12ee3b0,0),
       (uVar4 & 1) != 0 && (lVar5 = native_System_String__Substring_b0a110(lVar5,7,0), lVar5 == 0)))
      ) || (lVar5 = native_System_String__Replace_afd9ac
                              (lVar5,_StringLiteral___SoftClip__12eacc8,_StringLiteral__12eaac0,0),
           lVar5 == 0)) goto LAB_009e6ac0;
  uVar9 = native_System_String__Replace_afd9ac
                    (lVar5,_StringLiteral___TextureClip__12eacd0,_StringLiteral__12eaac0,0);
  uVar10 = *(undefined8 *)(param_1 + 0x30);
  if (((*(byte *)(_UnityEngine_Object_TypeInfo_12d54e0 + 0x133) >> 2 & 1) != 0) &&
     (*(int *)(_UnityEngine_Object_TypeInfo_12d54e0 + 0xe0) == 0)) {
    native_sub_4327ec(_UnityEngine_Object_TypeInfo_12d54e0);
  }
  uVar4 = native_UnityEngine_Object__op_Inequality_8d76fc(uVar10,0,0);
  if ((uVar4 & 1) == 0) {
LAB_009e668c:
    uVar10 = uVar9;
    if (*piVar8 == 0) goto LAB_009e6794;
    uVar10 = native_System_Int32__ToString_83c60c(piVar8,0);
    uVar10 = native_System_String__Concat_afcabc
                       (_StringLiteral_Hidden__12ee3b0,uVar9,_StringLiteral___12eac68,uVar10,0);
    uVar10 = native_UnityEngine_Shader__Find_76b254(uVar10,0);
    native_UIDrawCall__set_shader_9e6148(param_1,uVar10);
    uVar10 = *(undefined8 *)(param_1 + 0x88);
    if (((*(byte *)(_UnityEngine_Object_TypeInfo_12d54e0 + 0x133) >> 2 & 1) != 0) &&
       (*(int *)(_UnityEngine_Object_TypeInfo_12d54e0 + 0xe0) == 0)) {
      native_sub_4327ec();
    }
    uVar4 = native_UnityEngine_Object__op_Equality_8e9a3c(uVar10,0,0);
    if ((uVar4 & 1) != 0) {
      uVar10 = native_System_Int32__ToString_83c60c(piVar8,0);
      uVar10 = native_System_String__Concat_afc654(uVar9,_StringLiteral___12eac68,uVar10,0);
      uVar10 = native_UnityEngine_Shader__Find_76b254(uVar10,0);
      native_UIDrawCall__set_shader_9e6148(param_1,uVar10);
    }
    uVar10 = *(undefined8 *)(param_1 + 0x88);
    if (((*(byte *)(_UnityEngine_Object_TypeInfo_12d54e0 + 0x133) >> 2 & 1) != 0) &&
       (*(int *)(_UnityEngine_Object_TypeInfo_12d54e0 + 0xe0) == 0)) {
      native_sub_4327ec();
    }
    uVar4 = native_UnityEngine_Object__op_Equality_8e9a3c(uVar10,0,0);
    if (((uVar4 & 1) != 0) && (*piVar8 == 1)) {
      *(undefined1 *)(param_1 + 0xcd) = 1;
      uVar10 = native_System_String__Concat_afbd68(uVar9,_StringLiteral___SoftClip__12eacc8,0);
      goto LAB_009e6794;
    }
  }
  else {
    if (*(long *)(param_1 + 0x30) == 0) goto LAB_009e6ac0;
    if (*(int *)(*(long *)(param_1 + 0x30) + 0x140) != 1) goto LAB_009e668c;
    *(undefined1 *)(param_1 + 0xd9) = 1;
    uVar10 = native_System_String__Concat_afc654
                       (_StringLiteral_Hidden__12ee3b0,uVar9,_StringLiteral___TextureClip__12eacd0,0
                       );
LAB_009e6794:
    uVar10 = native_UnityEngine_Shader__Find_76b254(uVar10,0);
    native_UIDrawCall__set_shader_9e6148(param_1,uVar10);
  }
  uVar10 = *(undefined8 *)(param_1 + 0x88);
  if (((*(byte *)(_UnityEngine_Object_TypeInfo_12d54e0 + 0x133) >> 2 & 1) != 0) &&
     (*(int *)(_UnityEngine_Object_TypeInfo_12d54e0 + 0xe0) == 0)) {
    native_sub_4327ec();
  }
  uVar4 = native_UnityEngine_Object__op_Equality_8e9a3c(uVar10,0,0);
  if ((uVar4 & 1) != 0) {
    uVar10 = native_UnityEngine_Shader__Find_76b254
                       (_StringLiteral_Unlit_Transparent_Colored_12f2c60,0);
    native_UIDrawCall__set_shader_9e6148(param_1,uVar10);
  }
  uVar10 = *(undefined8 *)(param_1 + 0x78);
  if (((*(byte *)(_UnityEngine_Object_TypeInfo_12d54e0 + 0x133) >> 2 & 1) != 0) &&
     (*(int *)(_UnityEngine_Object_TypeInfo_12d54e0 + 0xe0) == 0)) {
    native_sub_4327ec();
  }
  uVar4 = native_UnityEngine_Object__op_Inequality_8d76fc(uVar10,0,0);
  if ((uVar4 & 1) == 0) {
    uVar10 = *(undefined8 *)(param_1 + 0x88);
    uVar9 = native_sub_432808(_UnityEngine_Material_TypeInfo_12d51a8);
    native_UnityEngine_Material___ctor_8e2eb4(uVar9,uVar10,0);
    *(undefined8 *)(param_1 + 0xb8) = uVar9;
    native_sub_4326e0((long *)(param_1 + 0xb8),uVar9);
    if (*(long *)(param_1 + 0x88) != 0) {
      lVar5 = *(long *)(param_1 + 0xb8);
      uVar9 = native_UnityEngine_Object__get_name_8e8098(*(long *)(param_1 + 0x88),0);
      uVar9 = native_System_String__Concat_afbd68(_StringLiteral__NGUI___12f32c8,uVar9,0);
      if (lVar5 != 0) {
        native_UnityEngine_Object__set_name_8e9c08(lVar5,uVar9,0);
        lVar5 = *(long *)(param_1 + 0xb8);
        if (lVar5 != 0) {
          if (pcRam0000000001341078 == (code *)0x0) {
            pcRam0000000001341078 = (code *)native_sub_4326f0(&UNK_00e2f8f5);
          }
                    /* WARNING: Could not recover jumptable at 0x008ea86c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
          (*pcRam0000000001341078)(lVar5,0x3c);
          return;
        }
      }
    }
  }
  else {
    uVar11 = *(undefined8 *)(param_1 + 0x78);
    uVar10 = native_sub_432808(_UnityEngine_Material_TypeInfo_12d51a8);
    native_UnityEngine_Material___ctor_8e2f50(uVar10,uVar11,0);
    plVar7 = (long *)(param_1 + 0xb8);
    *(undefined8 *)(param_1 + 0xb8) = uVar10;
    native_sub_4326e0(plVar7,uVar10);
    if (*(long *)(param_1 + 0x78) != 0) {
      lVar5 = *(long *)(param_1 + 0xb8);
      uVar10 = native_UnityEngine_Object__get_name_8e8098(*(long *)(param_1 + 0x78),0);
      uVar10 = native_System_String__Concat_afbd68(_StringLiteral__NGUI___12f32c8,uVar10,0);
      if (lVar5 != 0) {
        native_UnityEngine_Object__set_name_8e9c08(lVar5,uVar10,0);
        if (*plVar7 != 0) {
          native_UnityEngine_Object__set_hideFlags_8ea820(*plVar7,0x3c,0);
          if (*plVar7 != 0) {
            native_UnityEngine_Material__CopyPropertiesFromMaterial_8e3a1c
                      (*plVar7,*(undefined8 *)(param_1 + 0x78),0);
            if ((*(long *)(param_1 + 0x78) != 0) &&
               (lVar5 = native_UnityEngine_Material__get_shaderKeywords_8e3afc
                                  (*(long *)(param_1 + 0x78),0), lVar5 != 0)) {
              if (0 < (int)*(ulong *)(lVar5 + 0x18)) {
                uVar4 = 0;
                uVar6 = *(ulong *)(lVar5 + 0x18) & 0xffffffff;
                do {
                  if (uVar6 <= uVar4) {
                    uVar9 = native_sub_43283c();
                    /* WARNING: Subroutine does not return */
                    native_sub_4327dc(uVar9,0);
                  }
                  if (*plVar7 == 0) goto LAB_009e6ac0;
                  native_UnityEngine_Material__EnableKeyword_8e393c
                            (*plVar7,*(undefined8 *)(lVar5 + 0x20 + uVar4 * 8),0);
                  uVar6 = (ulong)*(uint *)(lVar5 + 0x18);
                  uVar4 = uVar4 + 1;
                } while ((long)uVar4 < (long)(int)*(uint *)(lVar5 + 0x18));
              }
              uVar10 = *(undefined8 *)(param_1 + 0x88);
              if (((*(byte *)(_UnityEngine_Object_TypeInfo_12d54e0 + 0x133) >> 2 & 1) != 0) &&
                 (*(int *)(_UnityEngine_Object_TypeInfo_12d54e0 + 0xe0) == 0)) {
                native_sub_4327ec();
              }
              uVar4 = native_UnityEngine_Object__op_Inequality_8d76fc(uVar10,0,0);
              if ((uVar4 & 1) == 0) {
                if (*piVar8 == 0) {
                  return;
                }
                uVar10 = native_System_Int32__ToString_83c60c(piVar8,0);
                uVar9 = native_System_String__Concat_afcabc
                                  (uVar9,
                                   _StringLiteral__shader_doesn_t_have_a_clipped_shader_version_for__12eaf08
                                   ,uVar10,_StringLiteral__clip_regions_12eae00,0);
                if (((*(byte *)(_UnityEngine_Debug_TypeInfo_12d4338 + 0x133) >> 2 & 1) != 0) &&
                   (*(int *)(_UnityEngine_Debug_TypeInfo_12d4338 + 0xe0) == 0)) {
                  native_sub_4327ec(_UnityEngine_Debug_TypeInfo_12d4338);
                }
                uVar10 = 0;
                if ((bRam0000000001340b52 & 1) == 0) {
                  native_sub_43273c(&UnityEngine_Debug_TypeInfo_12d4338,0);
                  native_sub_43273c(&UnityEngine_ILogger_TypeInfo_12d4c10);
                  bRam0000000001340b52 = 1;
                  uVar10 = extraout_x1;
                }
                if (((*(byte *)(_UnityEngine_Debug_TypeInfo_12d4338 + 0x133) >> 2 & 1) != 0) &&
                   (*(int *)(_UnityEngine_Debug_TypeInfo_12d4338 + 0xe0) == 0)) {
                  native_sub_4327ec();
                  uVar10 = extraout_x1_00;
                }
                if (cRam000000000134112a == '\0') {
                  native_sub_43273c(&UnityEngine_Debug_TypeInfo_12d4338,uVar10);
                  cRam000000000134112a = '\x01';
                }
                if (((*(byte *)(_UnityEngine_Debug_TypeInfo_12d4338 + 0x133) >> 2 & 1) != 0) &&
                   (*(int *)(_UnityEngine_Debug_TypeInfo_12d4338 + 0xe0) == 0)) {
                  native_sub_4327ec();
                }
                plVar7 = *(long **)(*(long *)(_UnityEngine_Debug_TypeInfo_12d4338 + 0xb8) + 8);
                if (plVar7 == (long *)0x0) {
                    /* WARNING: Subroutine does not return */
                  native_sub_432810();
                }
                lVar5 = *plVar7;
                if ((ulong)*(ushort *)(lVar5 + 0x12a) != 0) {
                  uVar4 = 0;
                  piVar8 = (int *)(*(long *)(lVar5 + 0xb0) + 8);
                  do {
                    if (*(long *)(piVar8 + -2) == _UnityEngine_ILogger_TypeInfo_12d4c10) {
                      puVar3 = (undefined8 *)(lVar5 + (long)(*piVar8 + 2) * 0x10 + 0x138);
                      goto code_r0x008dc6d4;
                    }
                    uVar4 = uVar4 + 1;
                    piVar8 = piVar8 + 4;
                  } while (uVar4 < *(ushort *)(lVar5 + 0x12a));
                }
                puVar3 = (undefined8 *)
                         native_sub_3c9b34(plVar7,_UnityEngine_ILogger_TypeInfo_12d4c10,2);
code_r0x008dc6d4:
                    /* WARNING: Could not recover jumptable at 0x008dc6f0. Too many branches */
                    /* WARNING: Treating indirect jump as call */
                (*(code *)*puVar3)(plVar7,0,uVar9,puVar3[1]);
                return;
              }
              lVar5 = *plVar7;
              if (lVar5 != 0) {
                uVar9 = *(undefined8 *)(param_1 + 0x88);
                if (pcRam0000000001340da8 == (code *)0x0) {
                  pcRam0000000001340da8 = (code *)native_sub_4326f0(&UNK_00e2e5d2);
                }
                    /* WARNING: Could not recover jumptable at 0x008e3104. Too many branches */
                    /* WARNING: Treating indirect jump as call */
                (*pcRam0000000001340da8)(lVar5,uVar9);
                return;
              }
            }
          }
        }
      }
    }
  }
LAB_009e6ac0:
                    /* WARNING: Subroutine does not return */
  native_sub_432810();
}



/* UIDrawCall$$RebuildMaterial @ 0x9e6ad0
 * UnityEngine_Material_o* UIDrawCall__RebuildMaterial (UIDrawCall_o* __this, const MethodInfo* method); */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* UIDrawCall$$RebuildMaterial
   UnityEngine_Material_o* UIDrawCall__RebuildMaterial (UIDrawCall_o* __this, const MethodInfo*
   method); */

undefined8 native_UIDrawCall__RebuildMaterial_9e6ad0(long param_1)

{
  ulong uVar1;
  long *plVar2;
  long lVar3;
  undefined8 uVar4;
  long lVar5;
  long lVar6;
  
  if ((bRam0000000001341905 & 1) == 0) {
    native_sub_43273c(&UnityEngine_Material___TypeInfo_12d32b0);
    native_sub_43273c(&NGUITools_TypeInfo_12d53c8);
    native_sub_43273c(&UnityEngine_Object_TypeInfo_12d54e0);
    bRam0000000001341905 = 1;
  }
  uVar4 = *(undefined8 *)(param_1 + 0xb8);
  if (((*(byte *)(_NGUITools_TypeInfo_12d53c8 + 0x133) >> 2 & 1) != 0) &&
     (*(int *)(_NGUITools_TypeInfo_12d53c8 + 0xe0) == 0)) {
    native_sub_4327ec();
  }
  native_NGUITools__DestroyImmediate_731524(uVar4,0);
  native_UIDrawCall__CreateMaterial_9e637c(param_1);
  if (*(long *)(param_1 + 0xb8) != 0) {
    native_UnityEngine_Material__set_renderQueue_8e38ec
              (*(long *)(param_1 + 0xb8),*(undefined4 *)(param_1 + 0xd0),0);
    uVar4 = *(undefined8 *)(param_1 + 0xb0);
    if (((*(byte *)(_UnityEngine_Object_TypeInfo_12d54e0 + 0x133) >> 2 & 1) != 0) &&
       (*(int *)(_UnityEngine_Object_TypeInfo_12d54e0 + 0xe0) == 0)) {
      native_sub_4327ec();
    }
    uVar1 = native_UnityEngine_Object__op_Inequality_8d76fc(uVar4,0,0);
    if ((uVar1 & 1) == 0) {
LAB_009e6c30:
      return *(undefined8 *)(param_1 + 0xb8);
    }
    lVar5 = *(long *)(param_1 + 0xb0);
    plVar2 = (long *)native_sub_432750(_UnityEngine_Material___TypeInfo_12d32b0,1);
    if (plVar2 != (long *)0x0) {
      lVar6 = *(long *)(param_1 + 0xb8);
      if ((lVar6 != 0) &&
         (lVar3 = native_sub_4327f8(lVar6,*(undefined8 *)(*plVar2 + 0x40)), lVar3 == 0)) {
        uVar4 = native_sub_432830();
                    /* WARNING: Subroutine does not return */
        native_sub_4327dc(uVar4,0);
      }
      if ((int)plVar2[3] == 0) {
        uVar4 = native_sub_43283c();
                    /* WARNING: Subroutine does not return */
        native_sub_4327dc(uVar4,0);
      }
      plVar2[4] = lVar6;
      native_sub_4326e0(plVar2 + 4,lVar6);
      if (lVar5 != 0) {
        native_UnityEngine_Renderer__set_sharedMaterials_768fec(lVar5,plVar2,0);
        if (*(long *)(param_1 + 0xb0) != 0) {
          native_UnityEngine_Renderer__set_sortingLayerName_768cec
                    (*(long *)(param_1 + 0xb0),*(undefined8 *)(param_1 + 0xf0),0);
          if (*(long *)(param_1 + 0xb0) != 0) {
            native_UnityEngine_Renderer__set_sortingOrder_768e0c
                      (*(long *)(param_1 + 0xb0),*(undefined4 *)(param_1 + 0xf8),0);
            goto LAB_009e6c30;
          }
        }
      }
    }
  }
                    /* WARNING: Subroutine does not return */
  native_sub_432810();
}



/* UIDrawCall$$UpdateMaterials @ 0x9e6c60
 * void UIDrawCall__UpdateMaterials (UIDrawCall_o* __this, const MethodInfo* method); */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* UIDrawCall$$UpdateMaterials
   void UIDrawCall__UpdateMaterials (UIDrawCall_o* __this, const MethodInfo* method); */

void native_UIDrawCall__UpdateMaterials_9e6c60(long param_1)

{
  int iVar1;
  int iVar2;
  ulong uVar3;
  undefined8 uVar4;
  
  if ((bRam0000000001341906 & 1) == 0) {
    native_sub_43273c(&UnityEngine_Object_TypeInfo_12d54e0);
    bRam0000000001341906 = 1;
  }
  uVar4 = *(undefined8 *)(param_1 + 0x30);
  if (((*(byte *)(_UnityEngine_Object_TypeInfo_12d54e0 + 0x133) >> 2 & 1) != 0) &&
     (*(int *)(_UnityEngine_Object_TypeInfo_12d54e0 + 0xe0) == 0)) {
    native_sub_4327ec();
  }
  uVar3 = native_UnityEngine_Object__op_Equality_8e9a3c(uVar4,0,0);
  if ((uVar3 & 1) == 0) {
    if (*(char *)(param_1 + 0xcc) == '\0') {
      uVar4 = *(undefined8 *)(param_1 + 0xb8);
      if (((*(byte *)(_UnityEngine_Object_TypeInfo_12d54e0 + 0x133) >> 2 & 1) != 0) &&
         (*(int *)(_UnityEngine_Object_TypeInfo_12d54e0 + 0xe0) == 0)) {
        native_sub_4327ec();
      }
      uVar3 = native_UnityEngine_Object__op_Equality_8e9a3c(uVar4,0,0);
      if ((uVar3 & 1) == 0) {
        if (*(long *)(param_1 + 0x30) == 0) {
LAB_009e6d64:
                    /* WARNING: Subroutine does not return */
          native_sub_432810();
        }
        iVar1 = *(int *)(param_1 + 0x90);
        iVar2 = native_UIPanel__get_clipCount_aefea0(*(long *)(param_1 + 0x30),0);
        if (iVar1 == iVar2) {
          if (*(long *)(param_1 + 0x30) == 0) goto LAB_009e6d64;
          if ((*(char *)(param_1 + 0xd9) == '\0') ==
              (*(int *)(*(long *)(param_1 + 0x30) + 0x140) != 1)) {
            return;
          }
        }
      }
    }
    native_UIDrawCall__RebuildMaterial_9e6ad0(param_1);
    *(undefined1 *)(param_1 + 0xcc) = 0;
  }
  return;
}



/* UIDrawCall$$UpdateGeometry @ 0x9e6d68
 * void UIDrawCall__UpdateGeometry (UIDrawCall_o* __this, int32_t widgetCount, bool needsBounds, const MethodInfo* method); */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* UIDrawCall$$UpdateGeometry
   void UIDrawCall__UpdateGeometry (UIDrawCall_o* __this, int32_t widgetCount, bool needsBounds,
   const MethodInfo* method); */

void native_UIDrawCall__UpdateGeometry_9e6d68(long param_1,undefined4 param_2,uint param_3)

{
  int iVar1;
  long lVar2;
  uint uVar3;
  bool bVar4;
  bool bVar5;
  undefined4 uVar6;
  uint uVar7;
  int iVar8;
  undefined8 uVar9;
  ulong uVar10;
  long *plVar11;
  long lVar12;
  long *plVar13;
  long lVar14;
  long *plVar15;
  undefined4 uVar16;
  undefined4 uVar17;
  undefined4 uVar18;
  uint uStack_84;
  
  if ((bRam0000000001341907 & 1) == 0) {
    native_sub_43273c(&UnityEngine_Debug_TypeInfo_12d4338);
    native_sub_43273c(&Method_UnityEngine_GameObject_AddComponent_MeshFilter____12e4810);
    native_sub_43273c(&Method_UnityEngine_GameObject_AddComponent_MeshRenderer____12e4818);
    native_sub_43273c(&Method_UnityEngine_GameObject_GetComponent_MeshFilter____12e49f0);
    native_sub_43273c(&Method_UnityEngine_GameObject_GetComponent_MeshRenderer____12e49f8);
    native_sub_43273c(&Method_System_Collections_Generic_List_Vector4__Clear___12dd530);
    native_sub_43273c(&Method_System_Collections_Generic_List_Color__Clear___12dc6a0);
    native_sub_43273c(&Method_System_Collections_Generic_List_Vector2__Clear___12dd4c0);
    native_sub_43273c(&Method_System_Collections_Generic_List_Vector3__Clear___12dd4f0);
    native_sub_43273c(&Method_System_Collections_Generic_List_Vector3__get_Count___12dd500);
    native_sub_43273c(&Method_System_Collections_Generic_List_Vector4__get_Count___12dd538);
    native_sub_43273c(&Method_System_Collections_Generic_List_Color__get_Count___12dc6a8);
    native_sub_43273c(&Method_System_Collections_Generic_List_Vector2__get_Count___12dd4c8);
    native_sub_43273c(&Method_System_Collections_Generic_List_Color__get_Item___12dc6b0);
    native_sub_43273c(&Method_System_Collections_Generic_List_Color__set_Item___12dc6b8);
    native_sub_43273c(&UnityEngine_Mesh_TypeInfo_12d5230);
    native_sub_43273c(&NGUITools_TypeInfo_12d53c8);
    native_sub_43273c(&UnityEngine_Object_TypeInfo_12d54e0);
    native_sub_43273c(&UIDrawCall_TypeInfo_12d6438);
    native_sub_43273c(&StringLiteral__NGUI___12f32c8);
    native_sub_43273c(&StringLiteral__NGUI__Mesh_12f32d0);
    native_sub_43273c(&StringLiteral_Too_many_vertices_on_one_panel___12f2780);
    native_sub_43273c(&
                      StringLiteral_UIWidgets_must_fill_the_buffer_with_4_vertices_per_quad__Found__12f2958
                     );
    bRam0000000001341907 = 1;
  }
  uStack_84 = 0;
  *(undefined4 *)(param_1 + 0x18) = param_2;
  if (*(long *)(param_1 + 0x48) == 0) goto LAB_009e783c;
  uVar3 = *(uint *)(*(long *)(param_1 + 0x48) + 0x18);
  uStack_84 = uVar3;
  if ((int)uVar3 < 1) {
LAB_009e71bc:
    if (*(long *)(param_1 + 0xa8) == 0) goto LAB_009e783c;
    uVar9 = native_UnityEngine_MeshFilter__get_mesh_8e8b54(*(long *)(param_1 + 0xa8),0);
    if (((*(byte *)(_UnityEngine_Object_TypeInfo_12d54e0 + 0x133) >> 2 & 1) != 0) &&
       (*(int *)(_UnityEngine_Object_TypeInfo_12d54e0 + 0xe0) == 0)) {
      native_sub_4327ec(_UnityEngine_Object_TypeInfo_12d54e0);
    }
    uVar10 = native_UnityEngine_Object__op_Inequality_8d76fc(uVar9,0,0);
    if ((uVar10 & 1) != 0) {
      if ((*(long *)(param_1 + 0xa8) == 0) ||
         (lVar14 = native_UnityEngine_MeshFilter__get_mesh_8e8b54(*(long *)(param_1 + 0xa8),0),
         lVar14 == 0)) goto LAB_009e783c;
      native_UnityEngine_Mesh__Clear_8e8934(lVar14,0);
    }
    uVar9 = native_System_Int32__ToString_83c60c(&uStack_84,0);
    uVar9 = native_System_String__Concat_afbd68
                      (_StringLiteral_UIWidgets_must_fill_the_buffer_with_4_vertices_per_quad__Found__12f2958
                       ,uVar9,0);
    if (((*(byte *)(_UnityEngine_Debug_TypeInfo_12d4338 + 0x133) >> 2 & 1) != 0) &&
       (*(int *)(_UnityEngine_Debug_TypeInfo_12d4338 + 0xe0) == 0)) {
      native_sub_4327ec(_UnityEngine_Debug_TypeInfo_12d4338);
    }
    native_UnityEngine_Debug__LogError_8dc5cc(uVar9,0);
  }
  else {
    if (*(long *)(param_1 + 0x60) == 0) goto LAB_009e783c;
    if (uVar3 != *(uint *)(*(long *)(param_1 + 0x60) + 0x18)) goto LAB_009e71bc;
    if (*(long *)(param_1 + 0x70) == 0) goto LAB_009e783c;
    if (((uVar3 & 3) != 0) || (uVar3 != *(uint *)(*(long *)(param_1 + 0x70) + 0x18)))
    goto LAB_009e71bc;
    if (((*(byte *)(_UIDrawCall_TypeInfo_12d6438 + 0x133) >> 2 & 1) != 0) &&
       (*(int *)(_UIDrawCall_TypeInfo_12d6438 + 0xe0) == 0)) {
      native_sub_4327ec(_UIDrawCall_TypeInfo_12d6438);
    }
    lVar14 = _UIDrawCall_TypeInfo_12d6438;
    if (*(int *)(*(long *)(_UIDrawCall_TypeInfo_12d6438 + 0xb8) + 0x10) == -1) {
      uVar6 = native_UnityEngine_QualitySettings__get_activeColorSpace_7621d0(0);
      if (((*(byte *)(_UIDrawCall_TypeInfo_12d6438 + 0x133) >> 2 & 1) != 0) &&
         (*(int *)(_UIDrawCall_TypeInfo_12d6438 + 0xe0) == 0)) {
        native_sub_4327ec(_UIDrawCall_TypeInfo_12d6438);
      }
      lVar14 = _UIDrawCall_TypeInfo_12d6438;
      *(undefined4 *)(*(long *)(_UIDrawCall_TypeInfo_12d6438 + 0xb8) + 0x10) = uVar6;
    }
    if (((*(byte *)(lVar14 + 0x133) >> 2 & 1) != 0) && (*(int *)(lVar14 + 0xe0) == 0)) {
      native_sub_4327ec(lVar14);
      lVar14 = _UIDrawCall_TypeInfo_12d6438;
    }
    if (*(int *)(*(long *)(lVar14 + 0xb8) + 0x10) == 1) {
      lVar14 = 0;
      uVar10 = 0;
      do {
        lVar12 = *(long *)(param_1 + 0x70);
        if (lVar12 == 0) goto LAB_009e783c;
        if (*(uint *)(lVar12 + 0x18) <= uVar10) {
          native_System_ThrowHelper__ThrowArgumentOutOfRangeException_9fe0f4(0);
        }
        lVar2 = *(long *)(lVar12 + 0x10) + lVar14;
        uVar18 = *(undefined4 *)(lVar2 + 0x20);
        uVar17 = *(undefined4 *)(lVar2 + 0x24);
        uVar16 = *(undefined4 *)(lVar2 + 0x28);
        uVar6 = *(undefined4 *)(lVar2 + 0x2c);
        if (((*(byte *)(_NGUITools_TypeInfo_12d53c8 + 0x133) >> 2 & 1) != 0) &&
           (*(int *)(_NGUITools_TypeInfo_12d53c8 + 0xe0) == 0)) {
          native_sub_4327ec();
        }
        native_NGUITools__GammaToLinearSpace_736c0c(uVar18,uVar17,uVar16,uVar6,0);
        native_System_Collections_Generic_List_Color___set_Item_d06de4
                  (lVar12,uVar10 & 0xffffffff,
                   _Method_System_Collections_Generic_List_Color__set_Item___12dc6b8);
        uVar10 = uVar10 + 1;
        lVar14 = lVar14 + 0x10;
      } while ((long)uVar10 < (long)(int)uVar3);
    }
    plVar11 = (long *)(param_1 + 0xa8);
    lVar14 = *plVar11;
    if (((*(byte *)(_UnityEngine_Object_TypeInfo_12d54e0 + 0x133) >> 2 & 1) != 0) &&
       (*(int *)(_UnityEngine_Object_TypeInfo_12d54e0 + 0xe0) == 0)) {
      native_sub_4327ec();
    }
    uVar10 = native_UnityEngine_Object__op_Equality_8e9a3c(lVar14,0,0);
    if ((uVar10 & 1) != 0) {
      lVar14 = native_UnityEngine_Component__get_gameObject_8da66c(param_1,0);
      if (lVar14 == 0) goto LAB_009e783c;
      lVar14 = native_UnityEngine_GameObject__GetComponent_BE2_BlockSectionHeader_Custom__4a2214
                         (lVar14,_Method_UnityEngine_GameObject_GetComponent_MeshFilter____12e49f0);
      *plVar11 = lVar14;
      native_sub_4326e0(plVar11,lVar14);
    }
    lVar14 = *plVar11;
    if (((*(byte *)(_UnityEngine_Object_TypeInfo_12d54e0 + 0x133) >> 2 & 1) != 0) &&
       (*(int *)(_UnityEngine_Object_TypeInfo_12d54e0 + 0xe0) == 0)) {
      native_sub_4327ec();
    }
    uVar10 = native_UnityEngine_Object__op_Equality_8e9a3c(lVar14,0,0);
    if ((uVar10 & 1) != 0) {
      lVar14 = native_UnityEngine_Component__get_gameObject_8da66c(param_1,0);
      if (lVar14 == 0) goto LAB_009e783c;
      lVar14 = native_UnityEngine_GameObject__AddComponent_ActiveAnimation__4a2118
                         (lVar14,_Method_UnityEngine_GameObject_AddComponent_MeshFilter____12e4810);
      *plVar11 = lVar14;
      native_sub_4326e0(plVar11,lVar14);
    }
    if ((int)uVar3 < 65000) {
      plVar15 = (long *)(param_1 + 0xc0);
      iVar1 = (uVar3 & 0xfffffffe) + ((int)uVar3 >> 1);
      if (*plVar15 == 0) {
        bVar4 = true;
      }
      else {
        bVar4 = iVar1 != *(int *)(*plVar15 + 0x18);
      }
      plVar13 = (long *)(param_1 + 0xa0);
      lVar14 = *plVar13;
      if (((*(byte *)(_UnityEngine_Object_TypeInfo_12d54e0 + 0x133) >> 2 & 1) != 0) &&
         (*(int *)(_UnityEngine_Object_TypeInfo_12d54e0 + 0xe0) == 0)) {
        native_sub_4327ec();
      }
      uVar10 = native_UnityEngine_Object__op_Equality_8e9a3c(lVar14,0,0);
      if ((uVar10 & 1) != 0) {
        lVar14 = native_sub_432808(_UnityEngine_Mesh_TypeInfo_12d5230);
        native_UnityEngine_Mesh___ctor_8e6a8c(lVar14,0);
        *plVar13 = lVar14;
        native_sub_4326e0(plVar13,lVar14);
        if (*plVar13 == 0) goto LAB_009e783c;
        native_UnityEngine_Object__set_hideFlags_8ea820(*plVar13,0x34,0);
        lVar14 = *(long *)(param_1 + 0xa0);
        uVar9 = *(undefined8 *)(param_1 + 0x78);
        if (((*(byte *)(_UnityEngine_Object_TypeInfo_12d54e0 + 0x133) >> 2 & 1) != 0) &&
           (*(int *)(_UnityEngine_Object_TypeInfo_12d54e0 + 0xe0) == 0)) {
          native_sub_4327ec();
        }
        uVar10 = native_UnityEngine_Object__op_Inequality_8d76fc(uVar9,0,0);
        uVar9 = _StringLiteral__NGUI__Mesh_12f32d0;
        if ((uVar10 & 1) != 0) {
          if (*(long *)(param_1 + 0x78) == 0) goto LAB_009e783c;
          uVar9 = native_UnityEngine_Object__get_name_8e8098(*(long *)(param_1 + 0x78),0);
          uVar9 = native_System_String__Concat_afbd68(_StringLiteral__NGUI___12f32c8,uVar9,0);
        }
        if (lVar14 == 0) goto LAB_009e783c;
        native_UnityEngine_Object__set_name_8e9c08(lVar14,uVar9,0);
        if (((*(byte *)(_UIDrawCall_TypeInfo_12d6438 + 0x133) >> 2 & 1) != 0) &&
           (*(int *)(_UIDrawCall_TypeInfo_12d6438 + 0xe0) == 0)) {
          native_sub_4327ec();
        }
        if (*(int *)(*(long *)(_UIDrawCall_TypeInfo_12d6438 + 0xb8) + 0x30) == 0) {
          if (*plVar13 == 0) goto LAB_009e783c;
          native_UnityEngine_Mesh__MarkDynamic_8e8a88(*plVar13,0);
        }
        bVar4 = true;
      }
      if (*(long *)(param_1 + 0x60) == 0) goto LAB_009e783c;
      if (*(uint *)(*(long *)(param_1 + 0x60) + 0x18) == uVar3) {
        if (*(long *)(param_1 + 0x70) == 0) goto LAB_009e783c;
        if (*(uint *)(*(long *)(param_1 + 0x70) + 0x18) != uVar3) goto LAB_009e7560;
        if (*(long *)(param_1 + 0x68) == 0) goto LAB_009e783c;
        if (*(uint *)(*(long *)(param_1 + 0x68) + 0x18) != uVar3) goto LAB_009e7560;
        if (*(long *)(param_1 + 0x50) == 0) goto LAB_009e783c;
        if (*(uint *)(*(long *)(param_1 + 0x50) + 0x18) != uVar3) goto LAB_009e7560;
        if (*(long *)(param_1 + 0x58) == 0) goto LAB_009e783c;
        if (*(uint *)(*(long *)(param_1 + 0x58) + 0x18) != uVar3) goto LAB_009e7560;
        uVar9 = *(undefined8 *)(param_1 + 0x30);
        if (((*(byte *)(_UnityEngine_Object_TypeInfo_12d54e0 + 0x133) >> 2 & 1) != 0) &&
           (*(int *)(_UnityEngine_Object_TypeInfo_12d54e0 + 0xe0) == 0)) {
          native_sub_4327ec();
        }
        uVar10 = native_UnityEngine_Object__op_Inequality_8d76fc(uVar9,0,0);
        if ((uVar10 & 1) == 0) {
LAB_009e780c:
          bVar5 = false;
        }
        else {
          if (*(long *)(param_1 + 0x30) == 0) goto LAB_009e783c;
          if (*(int *)(*(long *)(param_1 + 0x30) + 0xa8) == 0) goto LAB_009e780c;
          lVar14 = *plVar13;
          if (((*(byte *)(_UnityEngine_Object_TypeInfo_12d54e0 + 0x133) >> 2 & 1) != 0) &&
             (*(int *)(_UnityEngine_Object_TypeInfo_12d54e0 + 0xe0) == 0)) {
            native_sub_4327ec();
          }
          uVar10 = native_UnityEngine_Object__op_Equality_8e9a3c(lVar14,0,0);
          if ((uVar10 & 1) != 0) goto LAB_009e7560;
          if (*plVar13 == 0) goto LAB_009e783c;
          iVar8 = native_UnityEngine_Mesh__get_vertexCount_8e6e68(*plVar13,0);
          if (*(long *)(param_1 + 0x48) == 0) goto LAB_009e783c;
          bVar5 = iVar8 != *(int *)(*(long *)(param_1 + 0x48) + 0x18);
        }
      }
      else {
LAB_009e7560:
        bVar5 = true;
      }
      *(int *)(param_1 + 0xd4) = (int)uVar3 >> 1;
      if (*(long *)(param_1 + 0xa0) == 0) goto LAB_009e783c;
      uVar7 = native_UnityEngine_Mesh__get_vertexCount_8e6e68(*(long *)(param_1 + 0xa0),0);
      if (uVar7 != uVar3) {
        if (*plVar13 == 0) goto LAB_009e783c;
        native_UnityEngine_Mesh__Clear_8e8934(*plVar13,0);
        bVar4 = true;
      }
      if (*plVar13 == 0) goto LAB_009e783c;
      native_UnityEngine_Mesh__SetVertices_8e7888(*plVar13,*(undefined8 *)(param_1 + 0x48),0);
      if (*(long *)(param_1 + 0xa0) == 0) goto LAB_009e783c;
      native_UnityEngine_Mesh__SetUVs_8e7d78
                (*(long *)(param_1 + 0xa0),0,*(undefined8 *)(param_1 + 0x60),0);
      if (*(long *)(param_1 + 0xa0) == 0) goto LAB_009e783c;
      native_UnityEngine_Mesh__SetColors_8e7b70
                (*(long *)(param_1 + 0xa0),*(undefined8 *)(param_1 + 0x70),0);
      lVar14 = *(long *)(param_1 + 0x68);
      if ((lVar14 == 0) || (*(long *)(param_1 + 0xa0) == 0)) goto LAB_009e783c;
      if (*(uint *)(lVar14 + 0x18) != uVar3) {
        lVar14 = 0;
      }
      native_UnityEngine_Mesh__SetUVs_8e7df8(*(long *)(param_1 + 0xa0),1,lVar14,0);
      lVar14 = *(long *)(param_1 + 0x50);
      if ((lVar14 == 0) || (*(long *)(param_1 + 0xa0) == 0)) goto LAB_009e783c;
      if (*(uint *)(lVar14 + 0x18) != uVar3) {
        lVar14 = 0;
      }
      native_UnityEngine_Mesh__SetNormals_8e7980(*(long *)(param_1 + 0xa0),lVar14,0);
      lVar14 = *(long *)(param_1 + 0x58);
      if ((lVar14 == 0) || (*(long *)(param_1 + 0xa0) == 0)) goto LAB_009e783c;
      if (*(uint *)(lVar14 + 0x18) != uVar3) {
        lVar14 = 0;
      }
      uVar9 = native_UnityEngine_Mesh__SetTangents_8e7a78(*(long *)(param_1 + 0xa0),lVar14,0);
      if (bVar4) {
        lVar14 = native_UIDrawCall__GenerateCachedIndexBuffer_9e7840(uVar9,uVar3,iVar1);
        *plVar15 = lVar14;
        native_sub_4326e0(plVar15,lVar14);
        if (*plVar13 == 0) goto LAB_009e783c;
        native_UnityEngine_Mesh__SetTriangles_8e864c(*plVar13,*plVar15,0,param_3 & 1,0);
      }
      if ((bVar5) || (*(char *)(param_1 + 0x40) == '\0')) {
        if (*plVar13 == 0) goto LAB_009e783c;
        native_UnityEngine_Mesh__RecalculateBounds_8e8978(*plVar13,0);
      }
      if (*plVar11 == 0) goto LAB_009e783c;
      native_UnityEngine_MeshFilter__set_mesh_8e8b94(*plVar11,*plVar13,0);
    }
    else {
      *(undefined4 *)(param_1 + 0xd4) = 0;
      uVar9 = *(undefined8 *)(param_1 + 0xa0);
      if (((*(byte *)(_UnityEngine_Object_TypeInfo_12d54e0 + 0x133) >> 2 & 1) != 0) &&
         (*(int *)(_UnityEngine_Object_TypeInfo_12d54e0 + 0xe0) == 0)) {
        native_sub_4327ec();
      }
      uVar10 = native_UnityEngine_Object__op_Inequality_8d76fc(uVar9,0,0);
      if ((uVar10 & 1) != 0) {
        if (*(long *)(param_1 + 0xa0) == 0) goto LAB_009e783c;
        native_UnityEngine_Mesh__Clear_8e8934(*(long *)(param_1 + 0xa0),0);
      }
      uVar9 = native_System_Int32__ToString_83c60c(&uStack_84,0);
      uVar9 = native_System_String__Concat_afbd68
                        (_StringLiteral_Too_many_vertices_on_one_panel___12f2780,uVar9,0);
      if (((*(byte *)(_UnityEngine_Debug_TypeInfo_12d4338 + 0x133) >> 2 & 1) != 0) &&
         (*(int *)(_UnityEngine_Debug_TypeInfo_12d4338 + 0xe0) == 0)) {
        native_sub_4327ec(_UnityEngine_Debug_TypeInfo_12d4338);
      }
      native_UnityEngine_Debug__LogError_8dc5cc(uVar9,0);
    }
    plVar11 = (long *)(param_1 + 0xb0);
    lVar14 = *plVar11;
    if (((*(byte *)(_UnityEngine_Object_TypeInfo_12d54e0 + 0x133) >> 2 & 1) != 0) &&
       (*(int *)(_UnityEngine_Object_TypeInfo_12d54e0 + 0xe0) == 0)) {
      native_sub_4327ec();
    }
    uVar10 = native_UnityEngine_Object__op_Equality_8e9a3c(lVar14,0,0);
    if ((uVar10 & 1) != 0) {
      lVar14 = native_UnityEngine_Component__get_gameObject_8da66c(param_1,0);
      if (lVar14 == 0) goto LAB_009e783c;
      lVar14 = native_UnityEngine_GameObject__GetComponent_BE2_BlockSectionHeader_Custom__4a2214
                         (lVar14,_Method_UnityEngine_GameObject_GetComponent_MeshRenderer____12e49f8
                         );
      *plVar11 = lVar14;
      native_sub_4326e0(plVar11,lVar14);
    }
    lVar14 = *plVar11;
    if (((*(byte *)(_UnityEngine_Object_TypeInfo_12d54e0 + 0x133) >> 2 & 1) != 0) &&
       (*(int *)(_UnityEngine_Object_TypeInfo_12d54e0 + 0xe0) == 0)) {
      native_sub_4327ec();
    }
    uVar10 = native_UnityEngine_Object__op_Equality_8e9a3c(lVar14,0,0);
    if ((uVar10 & 1) != 0) {
      lVar14 = native_UnityEngine_Component__get_gameObject_8da66c(param_1,0);
      if (lVar14 == 0) goto LAB_009e783c;
      uVar9 = native_UnityEngine_GameObject__AddComponent_ActiveAnimation__4a2118
                        (lVar14,_Method_UnityEngine_GameObject_AddComponent_MeshRenderer____12e4818)
      ;
      *(undefined8 *)(param_1 + 0xb0) = uVar9;
      native_sub_4326e0(plVar11,uVar9);
      lVar14 = *(long *)(param_1 + 0xb0);
      if (*(int *)(param_1 + 200) == 0) {
        if (lVar14 == 0) goto LAB_009e783c;
        native_UnityEngine_Renderer__set_shadowCastingMode_768c0c(lVar14,0,0);
        lVar14 = *plVar11;
        if (lVar14 == 0) goto LAB_009e783c;
        uVar9 = 0;
      }
      else {
        if (lVar14 == 0) goto LAB_009e783c;
        native_UnityEngine_Renderer__set_shadowCastingMode_768c0c
                  (lVar14,*(int *)(param_1 + 200) != 1,0);
        lVar14 = *plVar11;
        if (lVar14 == 0) goto LAB_009e783c;
        uVar9 = 1;
      }
      native_UnityEngine_Renderer__set_receiveShadows_768c5c(lVar14,uVar9,0);
    }
    if (*(char *)(param_1 + 0xda) != '\0') {
      *(undefined1 *)(param_1 + 0xda) = 0;
      if (*(long *)(param_1 + 0xe8) != 0) {
        native_UIDrawCall_OnCreateDrawCall__Invoke_5544a8
                  (*(long *)(param_1 + 0xe8),param_1,*(undefined8 *)(param_1 + 0xa8),
                   *(undefined8 *)(param_1 + 0xb0),0);
      }
    }
    native_UIDrawCall__UpdateMaterials_9e6c60(param_1);
  }
  if (*(long *)(param_1 + 0x48) != 0) {
    native_System_Collections_Generic_List_Vector3___Clear_d2c0b4
              (*(long *)(param_1 + 0x48),
               _Method_System_Collections_Generic_List_Vector3__Clear___12dd4f0);
    if (*(long *)(param_1 + 0x60) != 0) {
      native_System_Collections_Generic_List_Vector2___Clear_d29680
                (*(long *)(param_1 + 0x60),
                 _Method_System_Collections_Generic_List_Vector2__Clear___12dd4c0);
      if (*(long *)(param_1 + 0x68) != 0) {
        native_System_Collections_Generic_List_Vector4___Clear_d2eb5c
                  (*(long *)(param_1 + 0x68),
                   _Method_System_Collections_Generic_List_Vector4__Clear___12dd530);
        if (*(long *)(param_1 + 0x70) != 0) {
          native_System_Collections_Generic_List_Color___Clear_d07404
                    (*(long *)(param_1 + 0x70),
                     _Method_System_Collections_Generic_List_Color__Clear___12dc6a0);
          if (*(long *)(param_1 + 0x50) != 0) {
            native_System_Collections_Generic_List_Vector3___Clear_d2c0b4
                      (*(long *)(param_1 + 0x50),
                       _Method_System_Collections_Generic_List_Vector3__Clear___12dd4f0);
            if (*(long *)(param_1 + 0x58) != 0) {
              native_System_Collections_Generic_List_Vector4___Clear_d2eb5c
                        (*(long *)(param_1 + 0x58),
                         _Method_System_Collections_Generic_List_Vector4__Clear___12dd530);
              return;
            }
          }
        }
      }
    }
  }
LAB_009e783c:
                    /* WARNING: Subroutine does not return */
  native_sub_432810();
}



/* UIDrawCall$$GenerateCachedIndexBuffer @ 0x9e7840
 * System_Int32_array* UIDrawCall__GenerateCachedIndexBuffer (UIDrawCall_o* __this, int32_t vertexCount, int32_t indexCount, const MethodInfo* method); */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* UIDrawCall$$GenerateCachedIndexBuffer
   System_Int32_array* UIDrawCall__GenerateCachedIndexBuffer (UIDrawCall_o* __this, int32_t
   vertexCount, int32_t indexCount, const MethodInfo* method); */

long native_UIDrawCall__GenerateCachedIndexBuffer_9e7840(undefined8 param_1,int param_2,int param_3)

{
  int iVar1;
  undefined8 uVar2;
  uint uVar3;
  long lVar4;
  long lVar5;
  int iVar6;
  ulong uVar7;
  
  if ((bRam0000000001341908 & 1) == 0) {
    native_sub_43273c(&int___TypeInfo_12d3258);
    native_sub_43273c(&Method_System_Collections_Generic_List_int____Add___12dc358);
    native_sub_43273c(&Method_System_Collections_Generic_List_int____RemoveAt___12dc360);
    native_sub_43273c(&Method_System_Collections_Generic_List_int____get_Count___12dc368);
    native_sub_43273c(&Method_System_Collections_Generic_List_int____get_Item___12dc370);
    native_sub_43273c(&UIDrawCall_TypeInfo_12d6438);
    bRam0000000001341908 = 1;
  }
  if (((*(byte *)(_UIDrawCall_TypeInfo_12d6438 + 0x133) >> 2 & 1) != 0) &&
     (*(int *)(_UIDrawCall_TypeInfo_12d6438 + 0xe0) == 0)) {
    native_sub_4327ec();
  }
  lVar4 = *(long *)(*(long *)(_UIDrawCall_TypeInfo_12d6438 + 0xb8) + 0x18);
  if (lVar4 != 0) {
    iVar6 = *(int *)(lVar4 + 0x18);
    if (0 < iVar6) {
      uVar7 = 0;
      do {
        if (((*(byte *)(_UIDrawCall_TypeInfo_12d6438 + 0x133) >> 2 & 1) != 0) &&
           (*(int *)(_UIDrawCall_TypeInfo_12d6438 + 0xe0) == 0)) {
          native_sub_4327ec();
        }
        lVar4 = *(long *)(*(long *)(_UIDrawCall_TypeInfo_12d6438 + 0xb8) + 0x18);
        if (lVar4 == 0) goto LAB_009e7b18;
        if (*(uint *)(lVar4 + 0x18) <= uVar7) {
          native_System_ThrowHelper__ThrowArgumentOutOfRangeException_9fe0f4(0);
        }
        lVar4 = *(long *)(*(long *)(lVar4 + 0x10) + uVar7 * 8 + 0x20);
        if ((lVar4 != 0) && (*(int *)(lVar4 + 0x18) == param_3)) {
          return lVar4;
        }
        uVar7 = uVar7 + 1;
      } while ((long)uVar7 < (long)iVar6);
    }
    lVar4 = native_sub_432750(_int___TypeInfo_12d3258,param_3);
    if (0 < param_2) {
      if (lVar4 == 0) goto LAB_009e7b18;
      uVar3 = 0;
      iVar6 = 0;
      do {
        if (*(uint *)(lVar4 + 0x18) <= uVar3) {
LAB_009e7b0c:
          uVar2 = native_sub_43283c();
                    /* WARNING: Subroutine does not return */
          native_sub_4327dc(uVar2,0);
        }
        *(int *)(lVar4 + (long)(int)uVar3 * 4 + 0x20) = iVar6;
        if ((*(uint *)(lVar4 + 0x18) <= uVar3 + 1) ||
           (*(int *)(lVar4 + (long)(int)(uVar3 + 1) * 4 + 0x20) = iVar6 + 1,
           *(uint *)(lVar4 + 0x18) <= uVar3 + 2)) goto LAB_009e7b0c;
        *(int *)(lVar4 + (long)(int)(uVar3 + 2) * 4 + 0x20) = iVar6 + 2;
        if ((*(uint *)(lVar4 + 0x18) <= uVar3 + 3) ||
           ((*(int *)(lVar4 + (long)(int)(uVar3 + 3) * 4 + 0x20) = iVar6 + 2,
            *(uint *)(lVar4 + 0x18) <= uVar3 + 4 ||
            (*(int *)(lVar4 + (long)(int)(uVar3 + 4) * 4 + 0x20) = iVar6 + 3,
            *(uint *)(lVar4 + 0x18) <= uVar3 + 5)))) goto LAB_009e7b0c;
        iVar1 = iVar6 + 4;
        *(int *)(lVar4 + (long)(int)(uVar3 + 5) * 4 + 0x20) = iVar6;
        uVar3 = uVar3 + 6;
        iVar6 = iVar1;
      } while (iVar1 < param_2);
    }
    if (((*(byte *)(_UIDrawCall_TypeInfo_12d6438 + 0x133) >> 2 & 1) != 0) &&
       (*(int *)(_UIDrawCall_TypeInfo_12d6438 + 0xe0) == 0)) {
      native_sub_4327ec();
    }
    lVar5 = *(long *)(*(long *)(_UIDrawCall_TypeInfo_12d6438 + 0xb8) + 0x18);
    if (lVar5 != 0) {
      if (10 < *(int *)(lVar5 + 0x18)) {
        if (((*(byte *)(_UIDrawCall_TypeInfo_12d6438 + 0x133) >> 2 & 1) != 0) &&
           (*(int *)(_UIDrawCall_TypeInfo_12d6438 + 0xe0) == 0)) {
          native_sub_4327ec();
          lVar5 = *(long *)(*(long *)(_UIDrawCall_TypeInfo_12d6438 + 0xb8) + 0x18);
          if (lVar5 == 0) goto LAB_009e7b18;
        }
        native_System_Collections_Generic_List_int_____RemoveAt_d42280
                  (lVar5,0,_Method_System_Collections_Generic_List_int____RemoveAt___12dc360);
      }
      if (((*(byte *)(_UIDrawCall_TypeInfo_12d6438 + 0x133) >> 2 & 1) != 0) &&
         (*(int *)(_UIDrawCall_TypeInfo_12d6438 + 0xe0) == 0)) {
        native_sub_4327ec();
      }
      lVar5 = *(long *)(*(long *)(_UIDrawCall_TypeInfo_12d6438 + 0xb8) + 0x18);
      if (lVar5 != 0) {
        native_System_Collections_Generic_List_int_____Add_d40c00
                  (lVar5,lVar4,_Method_System_Collections_Generic_List_int____Add___12dc358);
        return lVar4;
      }
    }
  }
LAB_009e7b18:
                    /* WARNING: Subroutine does not return */
  native_sub_432810();
}



/* UIDrawCall$$OnWillRenderObject @ 0x9e7b1c
 * void UIDrawCall__OnWillRenderObject (UIDrawCall_o* __this, const MethodInfo* method); */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* UIDrawCall$$OnWillRenderObject
   void UIDrawCall__OnWillRenderObject (UIDrawCall_o* __this, const MethodInfo* method); */

void native_UIDrawCall__OnWillRenderObject_9e7b1c
               (undefined1 param_1 [16],ulong param_2,undefined1 param_3 [16],ulong param_4,
               long param_5)

{
  ulong uVar1;
  long lVar2;
  ulong uVar3;
  long lVar4;
  long lVar5;
  int iVar6;
  undefined8 uVar7;
  float fVar8;
  undefined4 uVar9;
  float fVar10;
  undefined4 uVar11;
  float fVar12;
  float fVar13;
  float fVar14;
  float fVar15;
  float fVar16;
  float fVar17;
  float fVar18;
  float fVar19;
  undefined8 uStack_c0;
  undefined8 uStack_b8;
  undefined8 uStack_b0;
  undefined8 uStack_a8;
  
  if ((bRam0000000001341909 & 1) == 0) {
    native_sub_43273c(&UnityEngine_Debug_TypeInfo_12d4338);
    native_sub_43273c(&NGUIMath_TypeInfo_12d53b8);
    native_sub_43273c(&UnityEngine_Object_TypeInfo_12d54e0);
    native_sub_43273c(&UIDrawCall_TypeInfo_12d6438);
    native_sub_43273c(&StringLiteral__ClipTex_12f3548);
    native_sub_43273c(&
                      StringLiteral_Panel_can_only_be_clipped_properly_if_X_and_Y_rotation_is_left_at_0_12f04e0
                     );
    native_sub_43273c(&StringLiteral__ClipSharpness_12f3540);
    bRam0000000001341909 = 1;
  }
  uStack_b0 = 0;
  uStack_a8 = 0;
  native_UIDrawCall__UpdateMaterials_9e6c60(param_5);
  if (*(long *)(param_5 + 0x100) != 0) {
    if (*(long *)(param_5 + 0xb0) == 0) goto LAB_009e80d8;
    native_UnityEngine_Renderer__SetPropertyBlock_768b2c
              (*(long *)(param_5 + 0xb0),*(long *)(param_5 + 0x100),0);
  }
  lVar5 = *(long *)(param_5 + 0xe0);
  if (lVar5 != 0) {
    uVar7 = *(undefined8 *)(param_5 + 0xb8);
    if (((*(byte *)(_UnityEngine_Object_TypeInfo_12d54e0 + 0x133) >> 2 & 1) != 0) &&
       (*(int *)(_UnityEngine_Object_TypeInfo_12d54e0 + 0xe0) == 0)) {
      native_sub_4327ec();
    }
    uVar1 = native_UnityEngine_Object__op_Inequality_8d76fc(uVar7,0,0);
    lVar4 = 0xb8;
    if ((uVar1 & 1) == 0) {
      lVar4 = 0x78;
    }
    native_UIDrawCall_OnRenderCallback__Invoke_554908(lVar5,*(undefined8 *)(param_5 + lVar4),0);
  }
  uVar7 = *(undefined8 *)(param_5 + 0xb8);
  if (((*(byte *)(_UnityEngine_Object_TypeInfo_12d54e0 + 0x133) >> 2 & 1) != 0) &&
     (*(int *)(_UnityEngine_Object_TypeInfo_12d54e0 + 0xe0) == 0)) {
    native_sub_4327ec();
  }
  uVar1 = native_UnityEngine_Object__op_Equality_8e9a3c(uVar7,0,0);
  if (((uVar1 & 1) != 0) || (*(int *)(param_5 + 0x90) == 0)) {
    return;
  }
  if (*(char *)(param_5 + 0xd9) == '\0') {
    lVar5 = *(long *)(param_5 + 0x30);
    if (*(char *)(param_5 + 0xcd) == '\0') {
      if ((lVar5 != 0) && (lVar4 = native_UIRect__get_cachedTransform_c27c58(lVar5,0), lVar4 != 0))
      {
        fVar12 = (float)native_UnityEngine_Transform__get_localScale_771d80(lVar4,0);
        uVar1 = 0x3f800000;
        fVar13 = (float)param_2;
        iVar6 = 0;
        do {
          if (((*(byte *)(_UnityEngine_Object_TypeInfo_12d54e0 + 0x133) >> 2 & 1) != 0) &&
             (*(int *)(_UnityEngine_Object_TypeInfo_12d54e0 + 0xe0) == 0)) {
            native_sub_4327ec();
          }
          uVar3 = native_UnityEngine_Object__op_Inequality_8d76fc(lVar5,0,0);
          if ((uVar3 & 1) == 0) {
            return;
          }
          if (lVar5 == 0) break;
          uVar3 = native_UIPanel__get_hasClipping_aeff44(lVar5,0);
          fVar16 = (float)uVar1;
          fVar14 = (float)param_2;
          uVar11 = (undefined4)param_4;
          if ((uVar3 & 1) != 0) {
            fVar15 = *(float *)(lVar5 + 0x100);
            fVar19 = *(float *)(lVar5 + 0x104);
            fVar17 = *(float *)(lVar5 + 0x108);
            uVar1 = (ulong)(uint)fVar17;
            fVar18 = *(float *)(lVar5 + 0x10c);
            param_4 = (ulong)(uint)fVar18;
            uVar7 = *(undefined8 *)(param_5 + 0x30);
            if (((*(byte *)(_UnityEngine_Object_TypeInfo_12d54e0 + 0x133) >> 2 & 1) != 0) &&
               (*(int *)(_UnityEngine_Object_TypeInfo_12d54e0 + 0xe0) == 0)) {
              native_sub_4327ec();
            }
            uVar3 = native_UnityEngine_Object__op_Inequality_8d76fc(lVar5,uVar7,0);
            if ((uVar3 & 1) != 0) {
              lVar4 = native_UIRect__get_cachedTransform_c27c58(lVar5,0);
              if (((*(long *)(param_5 + 0x30) == 0) ||
                  (lVar2 = native_UIRect__get_cachedTransform_c27c58(*(long *)(param_5 + 0x30),0),
                  lVar2 == 0)) ||
                 (native_UnityEngine_Transform__get_position_77169c(lVar2,0), lVar4 == 0)) break;
              fVar8 = (float)native_UnityEngine_Transform__InverseTransformPoint_7729a0(lVar4,0);
              fVar15 = fVar15 - fVar8;
              if (fVar12 != 0.0 && fVar12 != 1.0) {
                fVar15 = fVar15 / fVar12;
                uVar1 = (ulong)(uint)(fVar17 / fVar12);
              }
              fVar19 = fVar19 - fVar14;
              if (fVar13 != 0.0 && fVar13 != 1.0) {
                fVar19 = fVar19 / fVar13;
                param_4 = (ulong)(uint)(fVar18 / fVar13);
              }
              if ((*(long *)(param_5 + 0x30) == 0) ||
                 (lVar4 = native_UIRect__get_cachedTransform_c27c58(*(long *)(param_5 + 0x30),0),
                 lVar4 == 0)) break;
              uVar9 = native_UnityEngine_Transform__get_rotation_771a30(lVar4,0);
              uStack_b0 = CONCAT44(fVar14,uVar9);
              uStack_a8 = CONCAT44(uVar11,fVar16);
              fVar8 = (float)native_UnityEngine_Quaternion__get_eulerAngles_762b94(&uStack_b0,0);
              fVar17 = fVar14;
              fVar18 = fVar16;
              lVar4 = native_UIRect__get_cachedTransform_c27c58(lVar5,0);
              if (lVar4 == 0) break;
              uVar9 = native_UnityEngine_Transform__get_rotation_771a30(lVar4,0);
              uStack_b0 = CONCAT44(fVar17,uVar9);
              uStack_a8 = CONCAT44(uVar11,fVar18);
              fVar10 = (float)native_UnityEngine_Quaternion__get_eulerAngles_762b94(&uStack_b0,0);
              if (((*(byte *)(_NGUIMath_TypeInfo_12d53b8 + 0x133) >> 2 & 1) != 0) &&
                 (*(int *)(_NGUIMath_TypeInfo_12d53b8 + 0xe0) == 0)) {
                native_sub_4327ec();
              }
              fVar8 = (float)native_NGUIMath__WrapAngle_804e30(fVar10 - fVar8,0);
              fVar14 = (float)native_NGUIMath__WrapAngle_804e30(fVar17 - fVar14,0);
              native_NGUIMath__WrapAngle_804e30(fVar18 - fVar16,0);
              if ((0.001 < ABS(fVar8)) || (0.001 < ABS(fVar14))) {
                uVar7 = *(undefined8 *)(param_5 + 0x30);
                if (((*(byte *)(_UnityEngine_Debug_TypeInfo_12d4338 + 0x133) >> 2 & 1) != 0) &&
                   (*(int *)(_UnityEngine_Debug_TypeInfo_12d4338 + 0xe0) == 0)) {
                  native_sub_4327ec();
                }
                native_UnityEngine_Debug__LogWarning_8dcbc8
                          (_StringLiteral_Panel_can_only_be_clipped_properly_if_X_and_Y_rotation_is_left_at_0_12f04e0
                           ,uVar7,0);
              }
            }
            param_2 = (ulong)(uint)fVar19;
            native_UIDrawCall__SetClipping_9e80e8(fVar15,param_5,iVar6);
            iVar6 = iVar6 + 1;
          }
          lVar5 = *(long *)(lVar5 + 0x1a0);
        } while( true );
      }
    }
    else if (lVar5 != 0) {
      fVar13 = *(float *)(lVar5 + 0x108);
      fVar14 = *(float *)(lVar5 + 0x10c);
      fVar12 = fVar13 / *(float *)(lVar5 + 0x154);
      if (*(float *)(lVar5 + 0x154) <= 0.0) {
        fVar12 = 1000.0;
      }
      fVar16 = fVar14 / *(float *)(lVar5 + 0x158);
      if (*(float *)(lVar5 + 0x158) <= 0.0) {
        fVar16 = 1000.0;
      }
      if (*(long *)(param_5 + 0xb8) != 0) {
        native_UnityEngine_Material__set_mainTextureOffset_8e3628
                  (-*(float *)(lVar5 + 0x100) / fVar13,-*(float *)(lVar5 + 0x104) / fVar14,
                   *(long *)(param_5 + 0xb8),0);
        if (*(long *)(param_5 + 0xb8) != 0) {
          native_UnityEngine_Material__set_mainTextureScale_8e3714
                    (1.0 / fVar13,1.0 / fVar14,*(long *)(param_5 + 0xb8),0);
          lVar5 = *(long *)(param_5 + 0xb8);
          native_UnityEngine_Vector4__op_Implicit_7772a4(fVar12,fVar16,0);
          if (lVar5 != 0) {
            native_UnityEngine_Material__SetVector_8e41fc
                      (lVar5,_StringLiteral__ClipSharpness_12f3540,0);
            return;
          }
        }
      }
    }
  }
  else {
    lVar5 = *(long *)(param_5 + 0x30);
    if (lVar5 != 0) {
      fVar12 = *(float *)(lVar5 + 0x100);
      fVar16 = *(float *)(lVar5 + 0x104);
      fVar14 = *(float *)(lVar5 + 0x108);
      fVar13 = *(float *)(lVar5 + 0x10c);
      lVar5 = *(long *)(param_5 + 0xb8);
      if (((*(byte *)(_UIDrawCall_TypeInfo_12d6438 + 0x133) >> 2 & 1) != 0) &&
         (*(int *)(_UIDrawCall_TypeInfo_12d6438 + 0xe0) == 0)) {
        native_sub_4327ec();
      }
      lVar4 = *(long *)(*(long *)(_UIDrawCall_TypeInfo_12d6438 + 0xb8) + 0x20);
      if (lVar4 != 0) {
        if (*(int *)(lVar4 + 0x18) == 0) {
          uVar7 = native_sub_43283c();
                    /* WARNING: Subroutine does not return */
          native_sub_4327dc(uVar7,0);
        }
        uVar11 = *(undefined4 *)(lVar4 + 0x20);
        uStack_c0 = 0;
        uStack_b8 = 0;
        native_UnityEngine_Vector4___ctor_776f24
                  (-fVar12 / fVar14,-fVar16 / fVar13,1.0 / fVar14,1.0 / fVar13,&uStack_c0,0);
        if (lVar5 != 0) {
          native_UnityEngine_Material__SetVector_8e425c
                    (uStack_c0 & 0xffffffff,uStack_c0._4_4_,uStack_b8 & 0xffffffff,uStack_b8._4_4_,
                     lVar5,uVar11,0);
          if (*(long *)(param_5 + 0xb8) != 0) {
            native_UnityEngine_Material__SetTexture_8e35c4
                      (*(long *)(param_5 + 0xb8),_StringLiteral__ClipTex_12f3548,
                       *(undefined8 *)(param_5 + 0x38),0);
            return;
          }
        }
      }
    }
  }
LAB_009e80d8:
                    /* WARNING: Subroutine does not return */
  native_sub_432810();
}



/* UIDrawCall$$SetClipping @ 0x9e80e8
 * void UIDrawCall__SetClipping (UIDrawCall_o* __this, int32_t index, UnityEngine_Vector4_o cr, UnityEngine_Vector2_o soft, float angle, const MethodInfo* method); */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* UIDrawCall$$SetClipping
   void UIDrawCall__SetClipping (UIDrawCall_o* __this, int32_t index, UnityEngine_Vector4_o cr,
   UnityEngine_Vector2_o soft, float angle, const MethodInfo* method); */

void native_UIDrawCall__SetClipping_9e80e8
               (float param_1,float param_2,float param_3,float param_4,float param_5,float param_6,
               float param_7,long param_8,uint param_9)

{
  undefined4 uVar1;
  float fVar2;
  float fVar3;
  long lVar4;
  long lVar5;
  undefined8 uVar6;
  undefined8 uVar7;
  undefined8 uStack_a0;
  undefined8 uStack_98;
  undefined8 uStack_90;
  undefined8 uStack_88;
  
  if ((bRam000000000134190a & 1) == 0) {
    native_sub_43273c(&UIDrawCall_TypeInfo_12d6438);
    bRam000000000134190a = 1;
  }
  fVar2 = param_3 / param_5;
  if (param_5 <= 0.0) {
    fVar2 = 1000.0;
  }
  fVar3 = param_4 / param_6;
  if (param_6 <= 0.0) {
    fVar3 = 1000.0;
  }
  if (((*(byte *)(_UIDrawCall_TypeInfo_12d6438 + 0x133) >> 2 & 1) != 0) &&
     (*(int *)(_UIDrawCall_TypeInfo_12d6438 + 0xe0) == 0)) {
    native_sub_4327ec();
  }
  lVar4 = *(long *)(*(long *)(_UIDrawCall_TypeInfo_12d6438 + 0xb8) + 0x20);
  if (lVar4 != 0) {
    if (*(int *)(lVar4 + 0x18) <= (int)param_9) {
      return;
    }
    lVar5 = *(long *)(param_8 + 0xb8);
    if (((*(byte *)(_UIDrawCall_TypeInfo_12d6438 + 0x133) >> 2 & 1) != 0) &&
       (*(int *)(_UIDrawCall_TypeInfo_12d6438 + 0xe0) == 0)) {
      native_sub_4327ec();
      lVar4 = *(long *)(*(long *)(_UIDrawCall_TypeInfo_12d6438 + 0xb8) + 0x20);
      if (lVar4 == 0) goto LAB_009e82e4;
    }
    if (*(uint *)(lVar4 + 0x18) <= param_9) {
LAB_009e82e8:
      uVar6 = native_sub_43283c();
                    /* WARNING: Subroutine does not return */
      native_sub_4327dc(uVar6,0);
    }
    uVar1 = *(undefined4 *)(lVar4 + (long)(int)param_9 * 4 + 0x20);
    uStack_90 = 0;
    uStack_88 = 0;
    native_UnityEngine_Vector4___ctor_776f24
              (-param_1 / param_3,-param_2 / param_4,1.0 / param_3,1.0 / param_4,&uStack_90,0);
    if (lVar5 != 0) {
      native_UnityEngine_Material__SetVector_8e425c
                (uStack_90 & 0xffffffff,uStack_90._4_4_,uStack_88 & 0xffffffff,uStack_88._4_4_,lVar5
                 ,uVar1,0);
      lVar4 = *(long *)(*(long *)(_UIDrawCall_TypeInfo_12d6438 + 0xb8) + 0x28);
      if (lVar4 != 0) {
        if (*(uint *)(lVar4 + 0x18) <= param_9) goto LAB_009e82e8;
        lVar5 = *(long *)(param_8 + 0xb8);
        uVar1 = *(undefined4 *)(lVar4 + (long)(int)param_9 * 4 + 0x20);
        uVar6 = func_0x002c9f10(param_7 * -0.017453292);
        uVar7 = func_0x002ca670(param_7 * -0.017453292);
        uStack_a0 = 0;
        uStack_98 = 0;
        native_UnityEngine_Vector4___ctor_776f24(fVar2,fVar3,uVar6,uVar7,&uStack_a0,0);
        if (lVar5 != 0) {
          native_UnityEngine_Material__SetVector_8e425c
                    (uStack_a0 & 0xffffffff,uStack_a0._4_4_,uStack_98 & 0xffffffff,uStack_98._4_4_,
                     lVar5,uVar1,0);
          return;
        }
      }
    }
  }
LAB_009e82e4:
                    /* WARNING: Subroutine does not return */
  native_sub_432810();
}



/* UIDrawCall$$Awake @ 0x9e82f4
 * void UIDrawCall__Awake (UIDrawCall_o* __this, const MethodInfo* method); */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* UIDrawCall$$Awake
   void UIDrawCall__Awake (UIDrawCall_o* __this, const MethodInfo* method); */

void native_UIDrawCall__Awake_9e82f4(void)

{
  ulong *puVar1;
  char cVar2;
  bool bVar3;
  int iVar4;
  uint uVar5;
  undefined4 uVar6;
  long lVar7;
  long *plVar8;
  undefined8 uVar9;
  
  if ((bRam000000000134190b & 1) == 0) {
    native_sub_43273c(&int___TypeInfo_12d3258);
    native_sub_43273c(&UIDrawCall_TypeInfo_12d6438);
    native_sub_43273c(&StringLiteral_Direct3D_12ed7b0);
    native_sub_43273c(&StringLiteral__ClipArgs0_12f34f8);
    native_sub_43273c(&StringLiteral__ClipRange1_12f3520);
    native_sub_43273c(&StringLiteral__ClipRange2_12f3528);
    native_sub_43273c(&StringLiteral__ClipArgs3_12f3510);
    native_sub_43273c(&StringLiteral__ClipRange0_12f3518);
    native_sub_43273c(&StringLiteral__ClipArgs1_12f3500);
    native_sub_43273c(&StringLiteral__ClipRange4_12f3530);
    native_sub_43273c(&StringLiteral__ClipArgs2_12f3508);
    bRam000000000134190b = 1;
  }
  if (((*(byte *)(_UIDrawCall_TypeInfo_12d6438 + 0x133) >> 2 & 1) != 0) &&
     (*(int *)(_UIDrawCall_TypeInfo_12d6438 + 0xe0) == 0)) {
    native_sub_4327ec();
  }
  lVar7 = _UIDrawCall_TypeInfo_12d6438;
  if (*(int *)(*(long *)(_UIDrawCall_TypeInfo_12d6438 + 0xb8) + 0x30) == -1) {
    iVar4 = native_UnityEngine_Application__get_platform_8d6250(0);
    if ((iVar4 == 2) &&
       (iVar4 = native_UnityEngine_SystemInfo__get_graphicsShaderLevel_76e040(0), iVar4 < 0x28)) {
      lVar7 = native_UnityEngine_SystemInfo__get_graphicsDeviceVersion_76dfd8(0);
      if (lVar7 == 0) goto LAB_009e8658;
      uVar5 = native_System_String__Contains_b0bafc(lVar7,_StringLiteral_Direct3D_12ed7b0,0);
      uVar5 = uVar5 & 1;
    }
    else {
      uVar5 = 0;
    }
    if (((*(byte *)(_UIDrawCall_TypeInfo_12d6438 + 0x133) >> 2 & 1) != 0) &&
       (*(int *)(_UIDrawCall_TypeInfo_12d6438 + 0xe0) == 0)) {
      native_sub_4327ec();
    }
    lVar7 = _UIDrawCall_TypeInfo_12d6438;
    *(uint *)(*(long *)(_UIDrawCall_TypeInfo_12d6438 + 0xb8) + 0x30) = uVar5;
  }
  if (((*(byte *)(lVar7 + 0x133) >> 2 & 1) != 0) && (*(int *)(lVar7 + 0xe0) == 0)) {
    native_sub_4327ec();
    lVar7 = _UIDrawCall_TypeInfo_12d6438;
  }
  if (*(long *)(*(long *)(lVar7 + 0xb8) + 0x20) == 0) {
    lVar7 = native_sub_432750(_int___TypeInfo_12d3258,4);
    uVar6 = native_UnityEngine_Shader__PropertyToID_76b308(_StringLiteral__ClipRange0_12f3518,0);
    if (lVar7 == 0) goto LAB_009e8658;
    if (*(int *)(lVar7 + 0x18) == 0) goto LAB_009e864c;
    *(undefined4 *)(lVar7 + 0x20) = uVar6;
    uVar6 = native_UnityEngine_Shader__PropertyToID_76b308(_StringLiteral__ClipRange1_12f3520,0);
    if (*(uint *)(lVar7 + 0x18) < 2) goto LAB_009e864c;
    *(undefined4 *)(lVar7 + 0x24) = uVar6;
    uVar6 = native_UnityEngine_Shader__PropertyToID_76b308(_StringLiteral__ClipRange2_12f3528,0);
    if (*(uint *)(lVar7 + 0x18) < 3) goto LAB_009e864c;
    *(undefined4 *)(lVar7 + 0x28) = uVar6;
    uVar6 = native_UnityEngine_Shader__PropertyToID_76b308(_StringLiteral__ClipRange4_12f3530,0);
    if (*(uint *)(lVar7 + 0x18) < 4) goto LAB_009e864c;
    *(undefined4 *)(lVar7 + 0x2c) = uVar6;
    if (((*(byte *)(_UIDrawCall_TypeInfo_12d6438 + 0x133) >> 2 & 1) != 0) &&
       (*(int *)(_UIDrawCall_TypeInfo_12d6438 + 0xe0) == 0)) {
      native_sub_4327ec();
    }
    plVar8 = (long *)(*(long *)(_UIDrawCall_TypeInfo_12d6438 + 0xb8) + 0x20);
    *plVar8 = lVar7;
    native_sub_4326e0(plVar8,lVar7);
    lVar7 = _UIDrawCall_TypeInfo_12d6438;
  }
  if (((*(byte *)(lVar7 + 0x133) >> 2 & 1) != 0) && (*(int *)(lVar7 + 0xe0) == 0)) {
    native_sub_4327ec();
    lVar7 = _UIDrawCall_TypeInfo_12d6438;
  }
  if (*(long *)(*(long *)(lVar7 + 0xb8) + 0x28) != 0) {
    return;
  }
  lVar7 = native_sub_432750(_int___TypeInfo_12d3258,4);
  uVar6 = native_UnityEngine_Shader__PropertyToID_76b308(_StringLiteral__ClipArgs0_12f34f8,0);
  if (lVar7 != 0) {
    if (*(int *)(lVar7 + 0x18) != 0) {
      *(undefined4 *)(lVar7 + 0x20) = uVar6;
      uVar6 = native_UnityEngine_Shader__PropertyToID_76b308(_StringLiteral__ClipArgs1_12f3500,0);
      if (1 < *(uint *)(lVar7 + 0x18)) {
        *(undefined4 *)(lVar7 + 0x24) = uVar6;
        uVar6 = native_UnityEngine_Shader__PropertyToID_76b308(_StringLiteral__ClipArgs2_12f3508,0);
        if (2 < *(uint *)(lVar7 + 0x18)) {
          *(undefined4 *)(lVar7 + 0x28) = uVar6;
          uVar6 = native_UnityEngine_Shader__PropertyToID_76b308
                            (_StringLiteral__ClipArgs3_12f3510,0);
          if (3 < *(uint *)(lVar7 + 0x18)) {
            *(undefined4 *)(lVar7 + 0x2c) = uVar6;
            if (((*(byte *)(_UIDrawCall_TypeInfo_12d6438 + 0x133) >> 2 & 1) != 0) &&
               (*(int *)(_UIDrawCall_TypeInfo_12d6438 + 0xe0) == 0)) {
              native_sub_4327ec();
            }
            plVar8 = (long *)(*(long *)(_UIDrawCall_TypeInfo_12d6438 + 0xb8) + 0x28);
            *plVar8 = lVar7;
            if (iRam0000000001345318 != 0) {
              puVar1 = (ulong *)(((ulong)plVar8 >> 0x12 & 0x7fff) * 8 + 0x138ecd8);
              do {
                cVar2 = '\x01';
                bVar3 = (bool)ExclusiveMonitorPass(puVar1,0x10);
                if (bVar3) {
                  *puVar1 = *puVar1 | 1L << ((ulong)plVar8 >> 0xc & 0x3f);
                  cVar2 = ExclusiveMonitorsStatus();
                }
              } while (cVar2 != '\0');
            }
            return;
          }
        }
      }
    }
LAB_009e864c:
    uVar9 = native_sub_43283c();
                    /* WARNING: Subroutine does not return */
    native_sub_4327dc(uVar9,0);
  }
LAB_009e8658:
                    /* WARNING: Subroutine does not return */
  native_sub_432810();
}



/* UIDrawCall$$OnEnable @ 0x9e865c
 * void UIDrawCall__OnEnable (UIDrawCall_o* __this, const MethodInfo* method); */

/* UIDrawCall$$OnEnable
   void UIDrawCall__OnEnable (UIDrawCall_o* __this, const MethodInfo* method); */

void native_UIDrawCall__OnEnable_9e865c(long param_1)

{
  *(undefined1 *)(param_1 + 0xcc) = 1;
  return;
}



/* UIDrawCall$$OnDisable @ 0x9e8668
 * void UIDrawCall__OnDisable (UIDrawCall_o* __this, const MethodInfo* method); */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* UIDrawCall$$OnDisable
   void UIDrawCall__OnDisable (UIDrawCall_o* __this, const MethodInfo* method); */

void native_UIDrawCall__OnDisable_9e8668(long param_1)

{
  ulong *puVar1;
  char cVar2;
  bool bVar3;
  ulong uVar4;
  undefined8 *puVar5;
  undefined8 uVar6;
  long lVar7;
  
  if ((bRam000000000134190c & 1) == 0) {
    native_sub_43273c(&UnityEngine_Material___TypeInfo_12d32b0);
    native_sub_43273c(&NGUITools_TypeInfo_12d53c8);
    native_sub_43273c(&UnityEngine_Object_TypeInfo_12d54e0);
    bRam000000000134190c = 1;
  }
  *(undefined8 *)(param_1 + 0x1c) = 0x800000007fffffff;
  *(undefined8 *)(param_1 + 0x30) = 0;
  native_sub_4326e0((undefined8 *)(param_1 + 0x30),0);
  *(undefined8 *)(param_1 + 0x28) = 0;
  native_sub_4326e0((undefined8 *)(param_1 + 0x28),0);
  *(undefined8 *)(param_1 + 0x78) = 0;
  native_sub_4326e0((undefined8 *)(param_1 + 0x78),0);
  *(undefined8 *)(param_1 + 0x80) = 0;
  native_sub_4326e0((undefined8 *)(param_1 + 0x80),0);
  *(undefined8 *)(param_1 + 0x38) = 0;
  native_sub_4326e0((undefined8 *)(param_1 + 0x38),0);
  uVar6 = *(undefined8 *)(param_1 + 0xb0);
  if (((*(byte *)(_UnityEngine_Object_TypeInfo_12d54e0 + 0x133) >> 2 & 1) != 0) &&
     (*(int *)(_UnityEngine_Object_TypeInfo_12d54e0 + 0xe0) == 0)) {
    native_sub_4327ec();
  }
  uVar4 = native_UnityEngine_Object__op_Inequality_8d76fc(uVar6,0,0);
  if ((uVar4 & 1) != 0) {
    lVar7 = *(long *)(param_1 + 0xb0);
    uVar6 = native_sub_432750(_UnityEngine_Material___TypeInfo_12d32b0,0);
    if (lVar7 == 0) {
                    /* WARNING: Subroutine does not return */
      native_sub_432810();
    }
    native_UnityEngine_Renderer__set_sharedMaterials_768fec(lVar7,uVar6,0);
  }
  puVar5 = (undefined8 *)(param_1 + 0xb8);
  uVar6 = *puVar5;
  if (((*(byte *)(_NGUITools_TypeInfo_12d53c8 + 0x133) >> 2 & 1) != 0) &&
     (*(int *)(_NGUITools_TypeInfo_12d53c8 + 0xe0) == 0)) {
    native_sub_4327ec();
  }
  native_NGUITools__DestroyImmediate_731524(uVar6,0);
  *puVar5 = 0;
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



/* UIDrawCall$$OnDestroy @ 0x9e87c0
 * void UIDrawCall__OnDestroy (UIDrawCall_o* __this, const MethodInfo* method); */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* UIDrawCall$$OnDestroy
   void UIDrawCall__OnDestroy (UIDrawCall_o* __this, const MethodInfo* method); */

void native_UIDrawCall__OnDestroy_9e87c0(long param_1)

{
  ulong *puVar1;
  char cVar2;
  bool bVar3;
  undefined8 *puVar4;
  undefined8 uVar5;
  
  if ((bRam000000000134190d & 1) == 0) {
    native_sub_43273c(&NGUITools_TypeInfo_12d53c8);
    bRam000000000134190d = 1;
  }
  puVar4 = (undefined8 *)(param_1 + 0xa0);
  uVar5 = *puVar4;
  if (((*(byte *)(_NGUITools_TypeInfo_12d53c8 + 0x133) >> 2 & 1) != 0) &&
     (*(int *)(_NGUITools_TypeInfo_12d53c8 + 0xe0) == 0)) {
    native_sub_4327ec();
  }
  native_NGUITools__DestroyImmediate_731524(uVar5,0);
  *puVar4 = 0;
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



/* UIDrawCall$$Create @ 0x9e8838
 * UIDrawCall_o* UIDrawCall__Create (UIPanel_o* panel, UnityEngine_Material_o* mat, UnityEngine_Texture_o* tex, UnityEngine_Shader_o* shader, const MethodInfo* method); */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* UIDrawCall$$Create
   UIDrawCall_o* UIDrawCall__Create (UIPanel_o* panel, UnityEngine_Material_o* mat,
   UnityEngine_Texture_o* tex, UnityEngine_Shader_o* shader, const MethodInfo* method); */

long native_UIDrawCall__Create_9e8838
               (long param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

{
  undefined4 uVar1;
  long lVar2;
  long lVar3;
  long lVar4;
  
  if ((bRam000000000134190e & 1) == 0) {
    native_sub_43273c(&UIDrawCall_TypeInfo_12d6438);
    bRam000000000134190e = 1;
  }
  if (((*(byte *)(_UIDrawCall_TypeInfo_12d6438 + 0x133) >> 2 & 1) != 0) &&
     (*(int *)(_UIDrawCall_TypeInfo_12d6438 + 0xe0) == 0)) {
    native_sub_4327ec();
  }
  if ((bRam000000000134190f & 1) == 0) {
    native_sub_43273c(&UIDrawCall_TypeInfo_12d6438);
    bRam000000000134190f = 1;
  }
  if (((*(byte *)(_UIDrawCall_TypeInfo_12d6438 + 0x133) >> 2 & 1) != 0) &&
     (*(int *)(_UIDrawCall_TypeInfo_12d6438 + 0xe0) == 0)) {
    native_sub_4327ec();
  }
  lVar2 = native_UIDrawCall__Create_9e89e0(0);
  if ((((lVar2 != 0) &&
       (lVar3 = native_UnityEngine_Component__get_gameObject_8da66c(lVar2,0), param_1 != 0)) &&
      (lVar4 = native_UIRect__get_cachedGameObject_c2d1c0(param_1,0), lVar4 != 0)) &&
     (uVar1 = native_UnityEngine_GameObject__get_layer_8de608(lVar4,0), lVar3 != 0)) {
    native_UnityEngine_GameObject__set_layer_8de648(lVar3,uVar1,0);
    native_UIDrawCall__set_baseMaterial_9e5f84(lVar2,param_2);
    native_UIDrawCall__set_mainTexture_9e6030(lVar2,param_3);
    native_UIDrawCall__set_shader_9e6148(lVar2,param_4);
    native_UIDrawCall__set_renderQueue_9e5b4c(lVar2,*(undefined4 *)(param_1 + 0xac));
    native_UIDrawCall__set_sortingOrder_9e5c08(lVar2,*(undefined4 *)(param_1 + 0x160));
    *(long *)(lVar2 + 0x28) = param_1;
    native_sub_4326e0((long *)(lVar2 + 0x28),param_1);
    return lVar2;
  }
                    /* WARNING: Subroutine does not return */
  native_sub_432810();
}



/* UIDrawCall$$Create @ 0x9e88c4
 * UIDrawCall_o* UIDrawCall__Create (System_String_o* name, UIPanel_o* pan, UnityEngine_Material_o* mat, UnityEngine_Texture_o* tex, UnityEngine_Shader_o* shader, const MethodInfo* method); */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* UIDrawCall$$Create
   UIDrawCall_o* UIDrawCall__Create (System_String_o* name, UIPanel_o* pan, UnityEngine_Material_o*
   mat, UnityEngine_Texture_o* tex, UnityEngine_Shader_o* shader, const MethodInfo* method); */

long native_UIDrawCall__Create_9e88c4
               (undefined8 param_1,long param_2,undefined8 param_3,undefined8 param_4,
               undefined8 param_5)

{
  undefined4 uVar1;
  long lVar2;
  long lVar3;
  long lVar4;
  
  if ((bRam000000000134190f & 1) == 0) {
    native_sub_43273c(&UIDrawCall_TypeInfo_12d6438);
    bRam000000000134190f = 1;
  }
  if (((*(byte *)(_UIDrawCall_TypeInfo_12d6438 + 0x133) >> 2 & 1) != 0) &&
     (*(int *)(_UIDrawCall_TypeInfo_12d6438 + 0xe0) == 0)) {
    native_sub_4327ec();
  }
  lVar2 = native_UIDrawCall__Create_9e89e0(param_1);
  if ((((lVar2 != 0) &&
       (lVar3 = native_UnityEngine_Component__get_gameObject_8da66c(lVar2,0), param_2 != 0)) &&
      (lVar4 = native_UIRect__get_cachedGameObject_c2d1c0(param_2,0), lVar4 != 0)) &&
     (uVar1 = native_UnityEngine_GameObject__get_layer_8de608(lVar4,0), lVar3 != 0)) {
    native_UnityEngine_GameObject__set_layer_8de648(lVar3,uVar1,0);
    native_UIDrawCall__set_baseMaterial_9e5f84(lVar2,param_3);
    native_UIDrawCall__set_mainTexture_9e6030(lVar2,param_4);
    native_UIDrawCall__set_shader_9e6148(lVar2,param_5);
    native_UIDrawCall__set_renderQueue_9e5b4c(lVar2,*(undefined4 *)(param_2 + 0xac));
    native_UIDrawCall__set_sortingOrder_9e5c08(lVar2,*(undefined4 *)(param_2 + 0x160));
    *(long *)(lVar2 + 0x28) = param_2;
    native_sub_4326e0((long *)(lVar2 + 0x28),param_2);
    return lVar2;
  }
                    /* WARNING: Subroutine does not return */
  native_sub_432810();
}



/* UIDrawCall$$Create @ 0x9e89e0
 * UIDrawCall_o* UIDrawCall__Create (System_String_o* name, const MethodInfo* method); */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* UIDrawCall$$Create
   UIDrawCall_o* UIDrawCall__Create (System_String_o* name, const MethodInfo* method); */

long native_UIDrawCall__Create_9e89e0(long param_1)

{
  ulong uVar1;
  undefined8 uVar2;
  long lVar3;
  
  if ((bRam0000000001341910 & 1) == 0) {
    native_sub_43273c(&Method_BetterList_UIDrawCall__Add___12d89a0);
    native_sub_43273c(&Method_BetterList_UIDrawCall__Pop___12d89c0);
    native_sub_43273c(&Method_UnityEngine_GameObject_AddComponent_UIDrawCall____12e48d0);
    native_sub_43273c(&UnityEngine_GameObject_TypeInfo_12d47d8);
    native_sub_43273c(&NGUITools_TypeInfo_12d53c8);
    native_sub_43273c(&UnityEngine_Object_TypeInfo_12d54e0);
    native_sub_43273c(&UIDrawCall_TypeInfo_12d6438);
    bRam0000000001341910 = 1;
  }
  do {
    if (((*(byte *)(_UIDrawCall_TypeInfo_12d6438 + 0x133) >> 2 & 1) != 0) &&
       (*(int *)(_UIDrawCall_TypeInfo_12d6438 + 0xe0) == 0)) {
      native_sub_4327ec();
    }
    lVar3 = *(long *)(*(long *)(_UIDrawCall_TypeInfo_12d6438 + 0xb8) + 8);
    if (lVar3 == 0) goto LAB_009e8c6c;
    if (*(int *)(lVar3 + 0x18) < 1) {
      lVar3 = native_sub_432808(_UnityEngine_GameObject_TypeInfo_12d47d8);
      native_UnityEngine_GameObject___ctor_8de828(lVar3,param_1,0);
      if (((*(byte *)(_UnityEngine_Object_TypeInfo_12d54e0 + 0x133) >> 2 & 1) != 0) &&
         (*(int *)(_UnityEngine_Object_TypeInfo_12d54e0 + 0xe0) == 0)) {
        native_sub_4327ec();
      }
      native_UnityEngine_Object__DontDestroyOnLoad_8ea7a0(lVar3,0);
      if (lVar3 != 0) {
        lVar3 = native_UnityEngine_GameObject__AddComponent_ActiveAnimation__4a2118
                          (lVar3,_Method_UnityEngine_GameObject_AddComponent_UIDrawCall____12e48d0);
        if (((*(byte *)(_UIDrawCall_TypeInfo_12d6438 + 0x133) >> 2 & 1) != 0) &&
           (*(int *)(_UIDrawCall_TypeInfo_12d6438 + 0xe0) == 0)) {
          native_sub_4327ec(_UIDrawCall_TypeInfo_12d6438);
        }
        if (**(long **)(_UIDrawCall_TypeInfo_12d6438 + 0xb8) != 0) {
          native_BetterList_object___Add_ba24d8
                    (**(long **)(_UIDrawCall_TypeInfo_12d6438 + 0xb8),lVar3,
                     _Method_BetterList_UIDrawCall__Add___12d89a0);
          return lVar3;
        }
      }
      goto LAB_009e8c6c;
    }
    if (((*(byte *)(_UIDrawCall_TypeInfo_12d6438 + 0x133) >> 2 & 1) != 0) &&
       (*(int *)(_UIDrawCall_TypeInfo_12d6438 + 0xe0) == 0)) {
      native_sub_4327ec();
      lVar3 = *(long *)(*(long *)(_UIDrawCall_TypeInfo_12d6438 + 0xb8) + 8);
      if (lVar3 == 0) goto LAB_009e8c6c;
    }
    lVar3 = native_BetterList_object___Pop_ba2abc
                      (lVar3,_Method_BetterList_UIDrawCall__Pop___12d89c0);
    if (((*(byte *)(_UnityEngine_Object_TypeInfo_12d54e0 + 0x133) >> 2 & 1) != 0) &&
       (*(int *)(_UnityEngine_Object_TypeInfo_12d54e0 + 0xe0) == 0)) {
      native_sub_4327ec(_UnityEngine_Object_TypeInfo_12d54e0);
    }
    uVar1 = native_UnityEngine_Object__op_Inequality_8d76fc(lVar3,0,0);
  } while ((uVar1 & 1) == 0);
  if (((*(byte *)(_UIDrawCall_TypeInfo_12d6438 + 0x133) >> 2 & 1) != 0) &&
     (*(int *)(_UIDrawCall_TypeInfo_12d6438 + 0xe0) == 0)) {
    native_sub_4327ec();
  }
  if (**(long **)(_UIDrawCall_TypeInfo_12d6438 + 0xb8) != 0) {
    native_BetterList_object___Add_ba24d8
              (**(long **)(_UIDrawCall_TypeInfo_12d6438 + 0xb8),lVar3,
               _Method_BetterList_UIDrawCall__Add___12d89a0);
    if (param_1 == 0) {
      if (lVar3 != 0) goto LAB_009e8c14;
    }
    else if (lVar3 != 0) {
      native_UnityEngine_Object__set_name_8e9c08(lVar3,param_1,0);
LAB_009e8c14:
      uVar2 = native_UnityEngine_Component__get_gameObject_8da66c(lVar3,0);
      if (((*(byte *)(_NGUITools_TypeInfo_12d53c8 + 0x133) >> 2 & 1) != 0) &&
         (*(int *)(_NGUITools_TypeInfo_12d53c8 + 0xe0) == 0)) {
        native_sub_4327ec(_NGUITools_TypeInfo_12d53c8);
      }
      native_NGUITools__SetActive_731af8(uVar2,1,0);
      return lVar3;
    }
  }
LAB_009e8c6c:
                    /* WARNING: Subroutine does not return */
  native_sub_432810();
}



/* UIDrawCall$$ClearAll @ 0x9e8c70
 * void UIDrawCall__ClearAll (const MethodInfo* method); */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* UIDrawCall$$ClearAll
   void UIDrawCall__ClearAll (const MethodInfo* method); */

void native_UIDrawCall__ClearAll_9e8c70(void)

{
  int iVar1;
  ulong uVar2;
  ulong uVar3;
  undefined8 uVar4;
  long lVar5;
  byte bVar6;
  long lVar7;
  
  if ((bRam0000000001341911 & 1) == 0) {
    native_sub_43273c(&Method_BetterList_UIDrawCall__Clear___12d89a8);
    native_sub_43273c(&NGUITools_TypeInfo_12d53c8);
    native_sub_43273c(&UnityEngine_Object_TypeInfo_12d54e0);
    native_sub_43273c(&UIDrawCall_TypeInfo_12d6438);
    bRam0000000001341911 = 1;
  }
  uVar2 = native_UnityEngine_Application__get_isPlaying_8d60cc(0);
  if (((*(byte *)(_UIDrawCall_TypeInfo_12d6438 + 0x133) >> 2 & 1) != 0) &&
     (*(int *)(_UIDrawCall_TypeInfo_12d6438 + 0xe0) == 0)) {
    native_sub_4327ec(_UIDrawCall_TypeInfo_12d6438);
  }
  if (**(long **)(_UIDrawCall_TypeInfo_12d6438 + 0xb8) != 0) {
    iVar1 = *(int *)(**(long **)(_UIDrawCall_TypeInfo_12d6438 + 0xb8) + 0x18);
    bVar6 = *(byte *)(_UIDrawCall_TypeInfo_12d6438 + 0x133) >> 2 & 1;
    if (0 < iVar1) {
      lVar7 = (long)iVar1 + 3;
      do {
        if ((bVar6 != 0) && (*(int *)(_UIDrawCall_TypeInfo_12d6438 + 0xe0) == 0)) {
          native_sub_4327ec(_UIDrawCall_TypeInfo_12d6438);
        }
        if ((**(long **)(_UIDrawCall_TypeInfo_12d6438 + 0xb8) == 0) ||
           (lVar5 = *(long *)(**(long **)(_UIDrawCall_TypeInfo_12d6438 + 0xb8) + 0x10), lVar5 == 0))
        goto LAB_009e8e60;
        if ((ulong)*(uint *)(lVar5 + 0x18) <= lVar7 - 4U) {
          uVar4 = native_sub_43283c();
                    /* WARNING: Subroutine does not return */
          native_sub_4327dc(uVar4,0);
        }
        lVar5 = *(long *)(lVar5 + lVar7 * 8);
        if (((*(byte *)(_UnityEngine_Object_TypeInfo_12d54e0 + 0x133) >> 2 & 1) != 0) &&
           (*(int *)(_UnityEngine_Object_TypeInfo_12d54e0 + 0xe0) == 0)) {
          native_sub_4327ec();
        }
        uVar3 = native_UnityEngine_Object__op_Implicit_8e1b98(lVar5,0);
        if ((uVar3 & 1) != 0) {
          if (lVar5 == 0) goto LAB_009e8e60;
          uVar4 = native_UnityEngine_Component__get_gameObject_8da66c(lVar5,0);
          if ((uVar2 & 1) == 0) {
            if (((*(ushort *)(_NGUITools_TypeInfo_12d53c8 + 0x132) >> 10 & 1) != 0) &&
               (*(int *)(_NGUITools_TypeInfo_12d53c8 + 0xe0) == 0)) {
              native_sub_4327ec(_NGUITools_TypeInfo_12d53c8);
            }
            native_NGUITools__DestroyImmediate_731524(uVar4,0);
          }
          else {
            if (((*(ushort *)(_NGUITools_TypeInfo_12d53c8 + 0x132) >> 10 & 1) != 0) &&
               (*(int *)(_NGUITools_TypeInfo_12d53c8 + 0xe0) == 0)) {
              native_sub_4327ec(_NGUITools_TypeInfo_12d53c8);
            }
            native_NGUITools__SetActive_731af8(uVar4,0,0);
          }
        }
        lVar5 = lVar7 + -3;
        lVar7 = lVar7 + -1;
        bVar6 = *(byte *)(_UIDrawCall_TypeInfo_12d6438 + 0x133) >> 2 & 1;
      } while (1 < lVar5);
    }
    if ((bVar6 != 0) && (*(int *)(_UIDrawCall_TypeInfo_12d6438 + 0xe0) == 0)) {
      native_sub_4327ec(_UIDrawCall_TypeInfo_12d6438);
    }
    if (**(long **)(_UIDrawCall_TypeInfo_12d6438 + 0xb8) != 0) {
      *(undefined4 *)(**(long **)(_UIDrawCall_TypeInfo_12d6438 + 0xb8) + 0x18) = 0;
      return;
    }
  }
LAB_009e8e60:
                    /* WARNING: Subroutine does not return */
  native_sub_432810();
}



/* UIDrawCall$$ReleaseAll @ 0x9e8e70
 * void UIDrawCall__ReleaseAll (const MethodInfo* method); */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* UIDrawCall$$ReleaseAll
   void UIDrawCall__ReleaseAll (const MethodInfo* method); */

void native_UIDrawCall__ReleaseAll_9e8e70(void)

{
  int iVar1;
  ulong uVar2;
  undefined8 uVar3;
  byte bVar4;
  long lVar5;
  long lVar6;
  
  if ((bRam0000000001341912 & 1) == 0) {
    native_sub_43273c(&UIDrawCall_TypeInfo_12d6438);
    bRam0000000001341912 = 1;
  }
  if (((*(byte *)(_UIDrawCall_TypeInfo_12d6438 + 0x133) >> 2 & 1) != 0) &&
     (*(int *)(_UIDrawCall_TypeInfo_12d6438 + 0xe0) == 0)) {
    native_sub_4327ec();
  }
  native_UIDrawCall__ClearAll_9e8c70();
  if ((bRam0000000001341913 & 1) == 0) {
    native_sub_43273c(&Method_BetterList_UIDrawCall__Clear___12d89a8);
    native_sub_43273c(&NGUITools_TypeInfo_12d53c8);
    native_sub_43273c(&UnityEngine_Object_TypeInfo_12d54e0);
    native_sub_43273c(&UIDrawCall_TypeInfo_12d6438);
    bRam0000000001341913 = 1;
  }
  if (((*(byte *)(_UIDrawCall_TypeInfo_12d6438 + 0x133) >> 2 & 1) != 0) &&
     (*(int *)(_UIDrawCall_TypeInfo_12d6438 + 0xe0) == 0)) {
    native_sub_4327ec();
  }
  lVar5 = *(long *)(*(long *)(_UIDrawCall_TypeInfo_12d6438 + 0xb8) + 8);
  if (lVar5 != 0) {
    iVar1 = *(int *)(lVar5 + 0x18);
    bVar4 = *(byte *)(_UIDrawCall_TypeInfo_12d6438 + 0x133) >> 2 & 1;
    if (0 < iVar1) {
      lVar5 = (long)iVar1 + 3;
      do {
        if ((bVar4 != 0) && (*(int *)(_UIDrawCall_TypeInfo_12d6438 + 0xe0) == 0)) {
          native_sub_4327ec();
        }
        lVar6 = *(long *)(*(long *)(_UIDrawCall_TypeInfo_12d6438 + 0xb8) + 8);
        if ((lVar6 == 0) || (lVar6 = *(long *)(lVar6 + 0x10), lVar6 == 0)) goto LAB_009e9078;
        if ((ulong)*(uint *)(lVar6 + 0x18) <= lVar5 - 4U) {
          uVar3 = native_sub_43283c();
                    /* WARNING: Subroutine does not return */
          native_sub_4327dc(uVar3,0);
        }
        lVar6 = *(long *)(lVar6 + lVar5 * 8);
        if (((*(byte *)(_UnityEngine_Object_TypeInfo_12d54e0 + 0x133) >> 2 & 1) != 0) &&
           (*(int *)(_UnityEngine_Object_TypeInfo_12d54e0 + 0xe0) == 0)) {
          native_sub_4327ec();
        }
        uVar2 = native_UnityEngine_Object__op_Implicit_8e1b98(lVar6,0);
        if ((uVar2 & 1) != 0) {
          if (lVar6 == 0) goto LAB_009e9078;
          uVar3 = native_UnityEngine_Component__get_gameObject_8da66c(lVar6,0);
          if (((*(byte *)(_NGUITools_TypeInfo_12d53c8 + 0x133) >> 2 & 1) != 0) &&
             (*(int *)(_NGUITools_TypeInfo_12d53c8 + 0xe0) == 0)) {
            native_sub_4327ec(_NGUITools_TypeInfo_12d53c8);
          }
          native_NGUITools__DestroyImmediate_731524(uVar3,0);
        }
        lVar6 = lVar5 + -3;
        lVar5 = lVar5 + -1;
        bVar4 = *(byte *)(_UIDrawCall_TypeInfo_12d6438 + 0x133) >> 2 & 1;
      } while (1 < lVar6);
    }
    if ((bVar4 != 0) && (*(int *)(_UIDrawCall_TypeInfo_12d6438 + 0xe0) == 0)) {
      native_sub_4327ec();
    }
    lVar5 = *(long *)(*(long *)(_UIDrawCall_TypeInfo_12d6438 + 0xb8) + 8);
    if (lVar5 != 0) {
      *(undefined4 *)(lVar5 + 0x18) = 0;
      return;
    }
  }
LAB_009e9078:
                    /* WARNING: Subroutine does not return */
  native_sub_432810();
}



/* UIDrawCall$$ReleaseInactive @ 0x9e8ecc
 * void UIDrawCall__ReleaseInactive (const MethodInfo* method); */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* UIDrawCall$$ReleaseInactive
   void UIDrawCall__ReleaseInactive (const MethodInfo* method); */

void native_UIDrawCall__ReleaseInactive_9e8ecc(void)

{
  int iVar1;
  ulong uVar2;
  undefined8 uVar3;
  byte bVar4;
  long lVar5;
  long lVar6;
  
  if ((bRam0000000001341913 & 1) == 0) {
    native_sub_43273c(&Method_BetterList_UIDrawCall__Clear___12d89a8);
    native_sub_43273c(&NGUITools_TypeInfo_12d53c8);
    native_sub_43273c(&UnityEngine_Object_TypeInfo_12d54e0);
    native_sub_43273c(&UIDrawCall_TypeInfo_12d6438);
    bRam0000000001341913 = 1;
  }
  if (((*(byte *)(_UIDrawCall_TypeInfo_12d6438 + 0x133) >> 2 & 1) != 0) &&
     (*(int *)(_UIDrawCall_TypeInfo_12d6438 + 0xe0) == 0)) {
    native_sub_4327ec();
  }
  lVar5 = *(long *)(*(long *)(_UIDrawCall_TypeInfo_12d6438 + 0xb8) + 8);
  if (lVar5 != 0) {
    iVar1 = *(int *)(lVar5 + 0x18);
    bVar4 = *(byte *)(_UIDrawCall_TypeInfo_12d6438 + 0x133) >> 2 & 1;
    if (0 < iVar1) {
      lVar5 = (long)iVar1 + 3;
      do {
        if ((bVar4 != 0) && (*(int *)(_UIDrawCall_TypeInfo_12d6438 + 0xe0) == 0)) {
          native_sub_4327ec();
        }
        lVar6 = *(long *)(*(long *)(_UIDrawCall_TypeInfo_12d6438 + 0xb8) + 8);
        if ((lVar6 == 0) || (lVar6 = *(long *)(lVar6 + 0x10), lVar6 == 0)) goto LAB_009e9078;
        if ((ulong)*(uint *)(lVar6 + 0x18) <= lVar5 - 4U) {
          uVar3 = native_sub_43283c();
                    /* WARNING: Subroutine does not return */
          native_sub_4327dc(uVar3,0);
        }
        lVar6 = *(long *)(lVar6 + lVar5 * 8);
        if (((*(byte *)(_UnityEngine_Object_TypeInfo_12d54e0 + 0x133) >> 2 & 1) != 0) &&
           (*(int *)(_UnityEngine_Object_TypeInfo_12d54e0 + 0xe0) == 0)) {
          native_sub_4327ec();
        }
        uVar2 = native_UnityEngine_Object__op_Implicit_8e1b98(lVar6,0);
        if ((uVar2 & 1) != 0) {
          if (lVar6 == 0) goto LAB_009e9078;
          uVar3 = native_UnityEngine_Component__get_gameObject_8da66c(lVar6,0);
          if (((*(byte *)(_NGUITools_TypeInfo_12d53c8 + 0x133) >> 2 & 1) != 0) &&
             (*(int *)(_NGUITools_TypeInfo_12d53c8 + 0xe0) == 0)) {
            native_sub_4327ec(_NGUITools_TypeInfo_12d53c8);
          }
          native_NGUITools__DestroyImmediate_731524(uVar3,0);
        }
        lVar6 = lVar5 + -3;
        lVar5 = lVar5 + -1;
        bVar4 = *(byte *)(_UIDrawCall_TypeInfo_12d6438 + 0x133) >> 2 & 1;
      } while (1 < lVar6);
    }
    if ((bVar4 != 0) && (*(int *)(_UIDrawCall_TypeInfo_12d6438 + 0xe0) == 0)) {
      native_sub_4327ec();
    }
    lVar5 = *(long *)(*(long *)(_UIDrawCall_TypeInfo_12d6438 + 0xb8) + 8);
    if (lVar5 != 0) {
      *(undefined4 *)(lVar5 + 0x18) = 0;
      return;
    }
  }
LAB_009e9078:
                    /* WARNING: Subroutine does not return */
  native_sub_432810();
}



/* UIDrawCall$$Count @ 0x9e9088
 * int32_t UIDrawCall__Count (UIPanel_o* panel, const MethodInfo* method); */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* UIDrawCall$$Count
   int32_t UIDrawCall__Count (UIPanel_o* panel, const MethodInfo* method); */

int native_UIDrawCall__Count_9e9088(undefined8 param_1)

{
  uint uVar1;
  long lVar2;
  int iVar3;
  undefined8 uVar4;
  uint uVar5;
  
  if ((bRam0000000001341914 & 1) == 0) {
    native_sub_43273c(&UnityEngine_Object_TypeInfo_12d54e0);
    native_sub_43273c(&UIDrawCall_TypeInfo_12d6438);
    bRam0000000001341914 = 1;
  }
  uVar5 = 0;
  iVar3 = 0;
  while( true ) {
    if (((*(byte *)(_UIDrawCall_TypeInfo_12d6438 + 0x133) >> 2 & 1) != 0) &&
       (*(int *)(_UIDrawCall_TypeInfo_12d6438 + 0xe0) == 0)) {
      native_sub_4327ec();
    }
    lVar2 = **(long **)(_UIDrawCall_TypeInfo_12d6438 + 0xb8);
    if (lVar2 == 0) break;
    if (*(int *)(lVar2 + 0x18) <= (int)uVar5) {
      return iVar3;
    }
    if (((*(byte *)(_UIDrawCall_TypeInfo_12d6438 + 0x133) >> 2 & 1) != 0) &&
       (*(int *)(_UIDrawCall_TypeInfo_12d6438 + 0xe0) == 0)) {
      native_sub_4327ec();
      lVar2 = **(long **)(_UIDrawCall_TypeInfo_12d6438 + 0xb8);
      if (lVar2 == 0) break;
    }
    lVar2 = *(long *)(lVar2 + 0x10);
    if (lVar2 == 0) break;
    if (*(uint *)(lVar2 + 0x18) <= uVar5) {
      uVar4 = native_sub_43283c();
                    /* WARNING: Subroutine does not return */
      native_sub_4327dc(uVar4,0);
    }
    lVar2 = *(long *)(lVar2 + (long)(int)uVar5 * 8 + 0x20);
    if (lVar2 == 0) break;
    uVar4 = *(undefined8 *)(lVar2 + 0x28);
    if (((*(byte *)(_UnityEngine_Object_TypeInfo_12d54e0 + 0x133) >> 2 & 1) != 0) &&
       (*(int *)(_UnityEngine_Object_TypeInfo_12d54e0 + 0xe0) == 0)) {
      native_sub_4327ec();
    }
    uVar1 = native_UnityEngine_Object__op_Equality_8e9a3c(uVar4,param_1,0);
    iVar3 = iVar3 + (uVar1 & 1);
    uVar5 = uVar5 + 1;
  }
                    /* WARNING: Subroutine does not return */
  native_sub_432810();
}



/* UIDrawCall$$Destroy @ 0x9e91c0
 * void UIDrawCall__Destroy (UIDrawCall_o* dc, const MethodInfo* method); */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* UIDrawCall$$Destroy
   void UIDrawCall__Destroy (UIDrawCall_o* dc, const MethodInfo* method); */

void native_UIDrawCall__Destroy_9e91c0(long param_1)

{
  int iVar1;
  long *plVar2;
  ulong uVar3;
  long *plVar4;
  undefined8 uVar5;
  long lVar6;
  
  if ((bRam0000000001341915 & 1) == 0) {
    native_sub_43273c(&Method_BetterList_UIDrawCall__Add___12d89a0);
    native_sub_43273c(&Method_BetterList_UIDrawCall__Remove___12d89c8);
    native_sub_43273c(&NGUITools_TypeInfo_12d53c8);
    native_sub_43273c(&UnityEngine_Object_TypeInfo_12d54e0);
    native_sub_43273c(&UIDrawCall_TypeInfo_12d6438);
    bRam0000000001341915 = 1;
  }
  if (((*(byte *)(_UnityEngine_Object_TypeInfo_12d54e0 + 0x133) >> 2 & 1) != 0) &&
     (*(int *)(_UnityEngine_Object_TypeInfo_12d54e0 + 0xe0) == 0)) {
    native_sub_4327ec();
  }
  uVar3 = native_UnityEngine_Object__op_Implicit_8e1b98(param_1,0);
  if ((uVar3 & 1) == 0) {
    return;
  }
  if (param_1 == 0) {
LAB_009e9430:
                    /* WARNING: Subroutine does not return */
    native_sub_432810();
  }
  if (*(long *)(param_1 + 0xe8) == 0) {
    *(undefined8 *)(param_1 + 0xe0) = 0;
    native_sub_4326e0((undefined8 *)(param_1 + 0xe0),0);
    uVar3 = native_UnityEngine_Application__get_isPlaying_8d60cc(0);
    if ((uVar3 & 1) == 0) {
      if (((*(ushort *)(_UIDrawCall_TypeInfo_12d6438 + 0x132) >> 10 & 1) != 0) &&
         (*(int *)(_UIDrawCall_TypeInfo_12d6438 + 0xe0) == 0)) {
        native_sub_4327ec(_UIDrawCall_TypeInfo_12d6438);
      }
      if (**(long **)(_UIDrawCall_TypeInfo_12d6438 + 0xb8) != 0) {
        native_BetterList_object___Remove_ba2804
                  (**(long **)(_UIDrawCall_TypeInfo_12d6438 + 0xb8),param_1,
                   _Method_BetterList_UIDrawCall__Remove___12d89c8);
        plVar2 = (long *)native_UnityEngine_Component__get_gameObject_8da66c(param_1,0);
        if (((*(byte *)(_NGUITools_TypeInfo_12d53c8 + 0x133) >> 2 & 1) != 0) &&
           (*(int *)(_NGUITools_TypeInfo_12d53c8 + 0xe0) == 0)) {
          native_sub_4327ec(_NGUITools_TypeInfo_12d53c8);
        }
        if ((bRam000000000133f5ab & 1) == 0) {
          native_sub_43273c(&UnityEngine_Object_TypeInfo_12d54e0,0);
          bRam000000000133f5ab = 1;
        }
        if (((*(byte *)(_UnityEngine_Object_TypeInfo_12d54e0 + 0x133) >> 2 & 1) != 0) &&
           (*(int *)(_UnityEngine_Object_TypeInfo_12d54e0 + 0xe0) == 0)) {
          native_sub_4327ec();
        }
        uVar3 = native_UnityEngine_Object__op_Inequality_8d76fc(plVar2,0,0);
        if ((uVar3 & 1) == 0) {
          return;
        }
        iVar1 = native_UnityEngine_Application__get_installMode_8d619c(0);
        if (iVar1 != 5) {
          if (((*(ushort *)(_UnityEngine_Object_TypeInfo_12d54e0 + 0x132) >> 10 & 1) != 0) &&
             (*(int *)(_UnityEngine_Object_TypeInfo_12d54e0 + 0xe0) == 0)) {
            native_sub_4327ec(_UnityEngine_Object_TypeInfo_12d54e0);
          }
          goto native_UnityEngine_Object__Destroy_8ea574;
        }
        if (((*(ushort *)(_UnityEngine_Object_TypeInfo_12d54e0 + 0x132) >> 10 & 1) != 0) &&
           (*(int *)(_UnityEngine_Object_TypeInfo_12d54e0 + 0xe0) == 0)) {
          native_sub_4327ec(_UnityEngine_Object_TypeInfo_12d54e0);
        }
        goto native_UnityEngine_Object__DestroyImmediate_8ea648;
      }
    }
    else {
      if (((*(ushort *)(_UIDrawCall_TypeInfo_12d6438 + 0x132) >> 10 & 1) != 0) &&
         (*(int *)(_UIDrawCall_TypeInfo_12d6438 + 0xe0) == 0)) {
        native_sub_4327ec(_UIDrawCall_TypeInfo_12d6438);
      }
      if (**(long **)(_UIDrawCall_TypeInfo_12d6438 + 0xb8) != 0) {
        uVar3 = native_BetterList_object___Remove_ba2804
                          (**(long **)(_UIDrawCall_TypeInfo_12d6438 + 0xb8),param_1,
                           _Method_BetterList_UIDrawCall__Remove___12d89c8);
        if ((uVar3 & 1) != 0) {
          uVar5 = native_UnityEngine_Component__get_gameObject_8da66c(param_1,0);
          if (((*(byte *)(_NGUITools_TypeInfo_12d53c8 + 0x133) >> 2 & 1) != 0) &&
             (*(int *)(_NGUITools_TypeInfo_12d53c8 + 0xe0) == 0)) {
            native_sub_4327ec(_NGUITools_TypeInfo_12d53c8);
          }
          native_NGUITools__SetActive_731af8(uVar5,0,0);
          if (((*(byte *)(_UIDrawCall_TypeInfo_12d6438 + 0x133) >> 2 & 1) != 0) &&
             (*(int *)(_UIDrawCall_TypeInfo_12d6438 + 0xe0) == 0)) {
            native_sub_4327ec();
          }
          lVar6 = *(long *)(*(long *)(_UIDrawCall_TypeInfo_12d6438 + 0xb8) + 8);
          if (lVar6 == 0) goto LAB_009e9430;
          native_BetterList_object___Add_ba24d8
                    (lVar6,param_1,_Method_BetterList_UIDrawCall__Add___12d89a0);
          *(undefined1 *)(param_1 + 0xda) = 1;
        }
        return;
      }
    }
    goto LAB_009e9430;
  }
  plVar4 = (long *)native_UnityEngine_Component__get_gameObject_8da66c(param_1,0);
  if (((*(byte *)(_NGUITools_TypeInfo_12d53c8 + 0x133) >> 2 & 1) != 0) &&
     (*(int *)(_NGUITools_TypeInfo_12d53c8 + 0xe0) == 0)) {
    native_sub_4327ec(_NGUITools_TypeInfo_12d53c8);
  }
  if ((bRam000000000133f5a9 & 1) == 0) {
    native_sub_43273c(&UnityEngine_GameObject_TypeInfo_12d47d8,0);
    native_sub_43273c(&UnityEngine_Object_TypeInfo_12d54e0);
    native_sub_43273c(&UnityEngine_Transform_TypeInfo_12d6300);
    bRam000000000133f5a9 = 1;
  }
  if (((*(byte *)(_UnityEngine_Object_TypeInfo_12d54e0 + 0x133) >> 2 & 1) != 0) &&
     (*(int *)(_UnityEngine_Object_TypeInfo_12d54e0 + 0xe0) == 0)) {
    native_sub_4327ec();
  }
  uVar3 = native_UnityEngine_Object__op_Implicit_8e1b98(plVar4,0);
  if ((uVar3 & 1) == 0) {
    return;
  }
  plVar2 = plVar4;
  if (plVar4 == (long *)0x0) {
LAB_007312fc:
    uVar3 = native_UnityEngine_Application__get_isPlaying_8d60cc(0);
    if ((uVar3 & 1) == 0) {
      if ((*(ushort *)(_UnityEngine_Object_TypeInfo_12d54e0 + 0x132) >> 10 & 1) == 0)
      goto native_UnityEngine_Object__DestroyImmediate_8ea648;
      iVar1 = *(int *)(_UnityEngine_Object_TypeInfo_12d54e0 + 0xe0);
joined_r0x0073133c:
      if (iVar1 == 0) {
        native_sub_4327ec(_UnityEngine_Object_TypeInfo_12d54e0);
      }
native_UnityEngine_Object__DestroyImmediate_8ea648:
      if ((bRam0000000001341058 & 1) == 0) {
        native_sub_43273c(&UnityEngine_Object_TypeInfo_12d54e0,0);
        bRam0000000001341058 = 1;
      }
      if (((*(byte *)(_UnityEngine_Object_TypeInfo_12d54e0 + 0x133) >> 2 & 1) != 0) &&
         (*(int *)(_UnityEngine_Object_TypeInfo_12d54e0 + 0xe0) == 0)) {
        native_sub_4327ec();
      }
      if (pcRam0000000001341050 == (code *)0x0) {
        pcRam0000000001341050 = (code *)native_sub_4326f0(&UNK_00e2f80d);
      }
                    /* WARNING: Could not recover jumptable at 0x008ea6c8. Too many branches */
                    /* WARNING: Treating indirect jump as call */
      (*pcRam0000000001341050)(plVar2,0);
      return;
    }
    if ((*(ushort *)(_UnityEngine_Object_TypeInfo_12d54e0 + 0x132) >> 10 & 1) == 0)
    goto native_UnityEngine_Object__Destroy_8ea574;
    iVar1 = *(int *)(_UnityEngine_Object_TypeInfo_12d54e0 + 0xe0);
  }
  else {
    lVar6 = *plVar4;
    if ((*(byte *)(_UnityEngine_Transform_TypeInfo_12d6300 + 300) <= *(byte *)(lVar6 + 300)) &&
       (*(long *)(*(long *)(lVar6 + 200) +
                  (ulong)*(byte *)(_UnityEngine_Transform_TypeInfo_12d6300 + 300) * 8 + -8) ==
        _UnityEngine_Transform_TypeInfo_12d6300)) {
      plVar2 = (long *)native_UnityEngine_Component__get_gameObject_8da66c(plVar4,0);
      uVar3 = native_UnityEngine_Application__get_isPlaying_8d60cc(0);
      if ((uVar3 & 1) == 0) {
        if (((*(byte *)(_UnityEngine_Object_TypeInfo_12d54e0 + 0x133) >> 2 & 1) != 0) &&
           (*(int *)(_UnityEngine_Object_TypeInfo_12d54e0 + 0xe0) == 0)) {
          native_sub_4327ec();
        }
        goto native_UnityEngine_Object__DestroyImmediate_8ea648;
      }
      if (plVar2 == (long *)0x0) {
LAB_00731468:
                    /* WARNING: Subroutine does not return */
        native_sub_432810();
      }
      native_UnityEngine_GameObject__SetActive_8de698(plVar2,0,0);
      native_UnityEngine_Transform__set_parent_771f18(plVar4,0,0);
      if (((*(byte *)(_UnityEngine_Object_TypeInfo_12d54e0 + 0x133) >> 2 & 1) != 0) &&
         (*(int *)(_UnityEngine_Object_TypeInfo_12d54e0 + 0xe0) == 0)) {
        native_sub_4327ec();
      }
      goto native_UnityEngine_Object__Destroy_8ea574;
    }
    if (lVar6 != _UnityEngine_GameObject_TypeInfo_12d47d8) goto LAB_007312fc;
    lVar6 = native_UnityEngine_GameObject__get_transform_8de5c8(plVar4,0);
    uVar3 = native_UnityEngine_Application__get_isPlaying_8d60cc(0);
    if ((uVar3 & 1) == 0) {
      if ((*(byte *)(_UnityEngine_Object_TypeInfo_12d54e0 + 0x133) >> 2 & 1) == 0)
      goto native_UnityEngine_Object__DestroyImmediate_8ea648;
      iVar1 = *(int *)(_UnityEngine_Object_TypeInfo_12d54e0 + 0xe0);
      goto joined_r0x0073133c;
    }
    native_UnityEngine_GameObject__SetActive_8de698(plVar4,0,0);
    if (lVar6 == 0) goto LAB_00731468;
    native_UnityEngine_Transform__set_parent_771f18(lVar6,0,0);
    if ((*(byte *)(_UnityEngine_Object_TypeInfo_12d54e0 + 0x133) >> 2 & 1) == 0)
    goto native_UnityEngine_Object__Destroy_8ea574;
    iVar1 = *(int *)(_UnityEngine_Object_TypeInfo_12d54e0 + 0xe0);
  }
  if (iVar1 == 0) {
    native_sub_4327ec(_UnityEngine_Object_TypeInfo_12d54e0);
  }
native_UnityEngine_Object__Destroy_8ea574:
  if ((bRam0000000001341048 & 1) == 0) {
    native_sub_43273c(&UnityEngine_Object_TypeInfo_12d54e0,0);
    bRam0000000001341048 = 1;
  }
  if (((*(byte *)(_UnityEngine_Object_TypeInfo_12d54e0 + 0x133) >> 2 & 1) != 0) &&
     (*(int *)(_UnityEngine_Object_TypeInfo_12d54e0 + 0xe0) == 0)) {
    native_sub_4327ec();
  }
  if (pcRam0000000001341040 == (code *)0x0) {
    pcRam0000000001341040 = (code *)native_sub_4326f0(&UNK_00e2f7cf);
  }
                    /* WARNING: Could not recover jumptable at 0x008ea5f4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*pcRam0000000001341040)(0,plVar2);
  return;
}



/* UIDrawCall$$MoveToScene @ 0x9e9434
 * void UIDrawCall__MoveToScene (UnityEngine_SceneManagement_Scene_o scene, const MethodInfo* method); */

/* WARNING: Removing unreachable block (ram,0x009e9960) */
/* WARNING: Removing unreachable block (ram,0x009e9950) */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* UIDrawCall$$MoveToScene
   void UIDrawCall__MoveToScene (UnityEngine_SceneManagement_Scene_o scene, const MethodInfo*
   method); */

void native_UIDrawCall__MoveToScene_9e9434(undefined4 param_1)

{
  bool bVar1;
  long *plVar2;
  undefined8 *puVar3;
  undefined8 uVar4;
  long lVar5;
  ulong uVar6;
  int *piVar7;
  int aiStack_60 [4];
  
  if ((bRam0000000001341916 & 1) == 0) {
    native_sub_43273c(&Method_BetterList_UIDrawCall__GetEnumerator___12d89b8);
    native_sub_43273c(&System_IDisposable_TypeInfo_12d4b00);
    native_sub_43273c(&System_Collections_Generic_IEnumerator_UIDrawCall__TypeInfo_12d2820);
    native_sub_43273c(&System_Collections_IEnumerator_TypeInfo_12d4b80);
    native_sub_43273c(&UnityEngine_SceneManagement_SceneManager_TypeInfo_12d5bc0);
    native_sub_43273c(&UIDrawCall_TypeInfo_12d6438);
    bRam0000000001341916 = 1;
  }
  aiStack_60[2] = 0;
  if (((*(byte *)(_UIDrawCall_TypeInfo_12d6438 + 0x133) >> 2 & 1) != 0) &&
     (*(int *)(_UIDrawCall_TypeInfo_12d6438 + 0xe0) == 0)) {
    native_sub_4327ec();
  }
  if (cRam000000000134199a == '\0') {
    native_sub_43273c(&UIDrawCall_TypeInfo_12d6438);
    cRam000000000134199a = '\x01';
  }
  if (((*(byte *)(_UIDrawCall_TypeInfo_12d6438 + 0x133) >> 2 & 1) != 0) &&
     (*(int *)(_UIDrawCall_TypeInfo_12d6438 + 0xe0) == 0)) {
    native_sub_4327ec();
  }
  if (**(long **)(_UIDrawCall_TypeInfo_12d6438 + 0xb8) != 0) {
    plVar2 = (long *)native_BetterList_object___GetEnumerator_ba21d0
                               (**(long **)(_UIDrawCall_TypeInfo_12d6438 + 0xb8),
                                _Method_BetterList_UIDrawCall__GetEnumerator___12d89b8);
    if (plVar2 == (long *)0x0) {
                    /* WARNING: Subroutine does not return */
      native_sub_432810();
    }
    do {
      lVar5 = *plVar2;
      if ((ulong)*(ushort *)(lVar5 + 0x12a) != 0) {
        uVar6 = 0;
        piVar7 = (int *)(*(long *)(lVar5 + 0xb0) + 8);
        do {
          if (*(long *)(piVar7 + -2) == _System_Collections_IEnumerator_TypeInfo_12d4b80) {
            puVar3 = (undefined8 *)(lVar5 + (long)*piVar7 * 0x10 + 0x138);
            goto LAB_009e95a4;
          }
          uVar6 = uVar6 + 1;
          piVar7 = piVar7 + 4;
        } while (uVar6 < *(ushort *)(lVar5 + 0x12a));
      }
      puVar3 = (undefined8 *)
               native_sub_3c9b34(plVar2,_System_Collections_IEnumerator_TypeInfo_12d4b80,0);
LAB_009e95a4:
      uVar6 = (*(code *)*puVar3)(plVar2,puVar3[1]);
      if ((uVar6 & 1) == 0) {
        aiStack_60[0] = 0x32;
        aiStack_60[2] = 1;
        if (plVar2 == (long *)0x0) goto LAB_009e96d0;
        lVar5 = *plVar2;
        if ((ulong)*(ushort *)(lVar5 + 0x12a) == 0) goto LAB_009e96a8;
        uVar6 = 0;
        piVar7 = (int *)(*(long *)(lVar5 + 0xb0) + 8);
        goto LAB_009e968c;
      }
      lVar5 = *plVar2;
      if ((ulong)*(ushort *)(lVar5 + 0x12a) != 0) {
        uVar6 = 0;
        piVar7 = (int *)(*(long *)(lVar5 + 0xb0) + 8);
        do {
          if (*(long *)(piVar7 + -2) ==
              _System_Collections_Generic_IEnumerator_UIDrawCall__TypeInfo_12d2820) {
            puVar3 = (undefined8 *)(lVar5 + (long)*piVar7 * 0x10 + 0x138);
            goto LAB_009e9608;
          }
          uVar6 = uVar6 + 1;
          piVar7 = piVar7 + 4;
        } while (uVar6 < *(ushort *)(lVar5 + 0x12a));
      }
      puVar3 = (undefined8 *)
               native_sub_3c9b34(plVar2,
                                 _System_Collections_Generic_IEnumerator_UIDrawCall__TypeInfo_12d2820
                                 ,0);
LAB_009e9608:
      lVar5 = (*(code *)*puVar3)(plVar2,puVar3[1]);
      if (lVar5 == 0) {
                    /* WARNING: Subroutine does not return */
        native_sub_432810();
      }
      uVar4 = native_UnityEngine_Component__get_gameObject_8da66c(lVar5,0);
      if (((*(byte *)(_UnityEngine_SceneManagement_SceneManager_TypeInfo_12d5bc0 + 0x133) >> 2 & 1)
           != 0) &&
         (*(int *)(_UnityEngine_SceneManagement_SceneManager_TypeInfo_12d5bc0 + 0xe0) == 0)) {
        native_sub_4327ec();
      }
      native_UnityEngine_SceneManagement_SceneManager__MoveGameObjectToScene_769cf8(uVar4,param_1,0)
      ;
    } while( true );
  }
  goto LAB_009e9948;
  while( true ) {
    uVar6 = uVar6 + 1;
    piVar7 = piVar7 + 4;
    if (*(ushort *)(lVar5 + 0x12a) <= uVar6) break;
LAB_009e98c0:
    if (*(long *)(piVar7 + -2) == _System_IDisposable_TypeInfo_12d4b00) {
      puVar3 = (undefined8 *)(lVar5 + (long)*piVar7 * 0x10 + 0x138);
      goto LAB_009e98f8;
    }
  }
LAB_009e98dc:
  puVar3 = (undefined8 *)native_sub_3c9b34(plVar2,_System_IDisposable_TypeInfo_12d4b00,0);
LAB_009e98f8:
  (*(code *)*puVar3)(plVar2,puVar3[1]);
  return;
  while( true ) {
    uVar6 = uVar6 + 1;
    piVar7 = piVar7 + 4;
    if (*(ushort *)(lVar5 + 0x12a) <= uVar6) break;
LAB_009e968c:
    if (*(long *)(piVar7 + -2) == _System_IDisposable_TypeInfo_12d4b00) {
      puVar3 = (undefined8 *)(lVar5 + (long)*piVar7 * 0x10 + 0x138);
      goto LAB_009e96c4;
    }
  }
LAB_009e96a8:
  puVar3 = (undefined8 *)native_sub_3c9b34(plVar2,_System_IDisposable_TypeInfo_12d4b00,0);
LAB_009e96c4:
  (*(code *)*puVar3)(plVar2,puVar3[1]);
LAB_009e96d0:
  bVar1 = aiStack_60[0] == 0x32;
  if (bVar1) {
    aiStack_60[2] = 0;
  }
  if (((*(byte *)(_UIDrawCall_TypeInfo_12d6438 + 0x133) >> 2 & 1) != 0) &&
     (*(int *)(_UIDrawCall_TypeInfo_12d6438 + 0xe0) == 0)) {
    native_sub_4327ec();
  }
  if (cRam000000000134199b == '\0') {
    native_sub_43273c(&UIDrawCall_TypeInfo_12d6438);
    cRam000000000134199b = '\x01';
  }
  if (((*(byte *)(_UIDrawCall_TypeInfo_12d6438 + 0x133) >> 2 & 1) != 0) &&
     (*(int *)(_UIDrawCall_TypeInfo_12d6438 + 0xe0) == 0)) {
    native_sub_4327ec();
  }
  lVar5 = *(long *)(*(long *)(_UIDrawCall_TypeInfo_12d6438 + 0xb8) + 8);
  if (lVar5 != 0) {
    plVar2 = (long *)native_BetterList_object___GetEnumerator_ba21d0
                               (lVar5,_Method_BetterList_UIDrawCall__GetEnumerator___12d89b8);
    if (plVar2 == (long *)0x0) {
                    /* WARNING: Subroutine does not return */
      native_sub_432810();
    }
    do {
      lVar5 = *plVar2;
      if ((ulong)*(ushort *)(lVar5 + 0x12a) != 0) {
        uVar6 = 0;
        piVar7 = (int *)(*(long *)(lVar5 + 0xb0) + 8);
        do {
          if (*(long *)(piVar7 + -2) == _System_Collections_IEnumerator_TypeInfo_12d4b80) {
            puVar3 = (undefined8 *)(lVar5 + (long)*piVar7 * 0x10 + 0x138);
            goto LAB_009e97d0;
          }
          uVar6 = uVar6 + 1;
          piVar7 = piVar7 + 4;
        } while (uVar6 < *(ushort *)(lVar5 + 0x12a));
      }
      puVar3 = (undefined8 *)
               native_sub_3c9b34(plVar2,_System_Collections_IEnumerator_TypeInfo_12d4b80,0);
LAB_009e97d0:
      uVar6 = (*(code *)*puVar3)(plVar2,puVar3[1]);
      if ((uVar6 & 1) == 0) {
        aiStack_60[(int)(uint)!bVar1] = 100;
        aiStack_60[2] = aiStack_60[2] + 1;
        if (plVar2 == (long *)0x0) {
          return;
        }
        lVar5 = *plVar2;
        if ((ulong)*(ushort *)(lVar5 + 0x12a) == 0) goto LAB_009e98dc;
        uVar6 = 0;
        piVar7 = (int *)(*(long *)(lVar5 + 0xb0) + 8);
        goto LAB_009e98c0;
      }
      lVar5 = *plVar2;
      if ((ulong)*(ushort *)(lVar5 + 0x12a) != 0) {
        uVar6 = 0;
        piVar7 = (int *)(*(long *)(lVar5 + 0xb0) + 8);
        do {
          if (*(long *)(piVar7 + -2) ==
              _System_Collections_Generic_IEnumerator_UIDrawCall__TypeInfo_12d2820) {
            puVar3 = (undefined8 *)(lVar5 + (long)*piVar7 * 0x10 + 0x138);
            goto LAB_009e9834;
          }
          uVar6 = uVar6 + 1;
          piVar7 = piVar7 + 4;
        } while (uVar6 < *(ushort *)(lVar5 + 0x12a));
      }
      puVar3 = (undefined8 *)
               native_sub_3c9b34(plVar2,
                                 _System_Collections_Generic_IEnumerator_UIDrawCall__TypeInfo_12d2820
                                 ,0);
LAB_009e9834:
      lVar5 = (*(code *)*puVar3)(plVar2,puVar3[1]);
      if (lVar5 == 0) {
                    /* WARNING: Subroutine does not return */
        native_sub_432810();
      }
      uVar4 = native_UnityEngine_Component__get_gameObject_8da66c(lVar5,0);
      if (((*(byte *)(_UnityEngine_SceneManagement_SceneManager_TypeInfo_12d5bc0 + 0x133) >> 2 & 1)
           != 0) &&
         (*(int *)(_UnityEngine_SceneManagement_SceneManager_TypeInfo_12d5bc0 + 0xe0) == 0)) {
        native_sub_4327ec();
      }
      native_UnityEngine_SceneManagement_SceneManager__MoveGameObjectToScene_769cf8(uVar4,param_1,0)
      ;
    } while( true );
  }
LAB_009e9948:
                    /* WARNING: Subroutine does not return */
  native_sub_432810();
}



/* UIDrawCall$$.ctor @ 0x9e99d4
 * void UIDrawCall___ctor (UIDrawCall_o* __this, const MethodInfo* method); */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* UIDrawCall$$.ctor
   void UIDrawCall___ctor (UIDrawCall_o* __this, const MethodInfo* method); */

undefined1  [16] native_UIDrawCall___ctor_9e99d4(ulong param_1)

{
  undefined8 uVar1;
  undefined1 auVar2 [16];
  
  if ((bRam0000000001341917 & 1) == 0) {
    native_sub_43273c(&Method_System_Collections_Generic_List_Vector2___ctor___12dd4a8);
    native_sub_43273c(&Method_System_Collections_Generic_List_Vector4___ctor___12dd518);
    native_sub_43273c(&Method_System_Collections_Generic_List_Color___ctor___12dc688);
    native_sub_43273c(&Method_System_Collections_Generic_List_Vector3___ctor___12dd4d8);
    native_sub_43273c(&System_Collections_Generic_List_Vector4__TypeInfo_12d2c70);
    native_sub_43273c(&System_Collections_Generic_List_Vector2__TypeInfo_12d2c60);
    native_sub_43273c(&System_Collections_Generic_List_Vector3__TypeInfo_12d2c68);
    native_sub_43273c(&System_Collections_Generic_List_Color__TypeInfo_12d29f0);
    bRam0000000001341917 = 1;
  }
  *(undefined8 *)(param_1 + 0x1c) = 0x800000007fffffff;
  uVar1 = native_sub_432808(_System_Collections_Generic_List_Vector3__TypeInfo_12d2c68);
  native_System_Collections_Generic_List_Vector3____ctor_d2b070
            (uVar1,_Method_System_Collections_Generic_List_Vector3___ctor___12dd4d8);
  *(undefined8 *)(param_1 + 0x48) = uVar1;
  native_sub_4326e0(param_1 + 0x48,uVar1);
  uVar1 = native_sub_432808(_System_Collections_Generic_List_Vector3__TypeInfo_12d2c68);
  native_System_Collections_Generic_List_Vector3____ctor_d2b070
            (uVar1,_Method_System_Collections_Generic_List_Vector3___ctor___12dd4d8);
  *(undefined8 *)(param_1 + 0x50) = uVar1;
  native_sub_4326e0(param_1 + 0x50,uVar1);
  uVar1 = native_sub_432808(_System_Collections_Generic_List_Vector4__TypeInfo_12d2c70);
  native_System_Collections_Generic_List_Vector4____ctor_d2db24
            (uVar1,_Method_System_Collections_Generic_List_Vector4___ctor___12dd518);
  *(undefined8 *)(param_1 + 0x58) = uVar1;
  native_sub_4326e0(param_1 + 0x58,uVar1);
  uVar1 = native_sub_432808(_System_Collections_Generic_List_Vector2__TypeInfo_12d2c60);
  native_System_Collections_Generic_List_Vector2____ctor_d28690
            (uVar1,_Method_System_Collections_Generic_List_Vector2___ctor___12dd4a8);
  *(undefined8 *)(param_1 + 0x60) = uVar1;
  native_sub_4326e0(param_1 + 0x60,uVar1);
  uVar1 = native_sub_432808(_System_Collections_Generic_List_Vector4__TypeInfo_12d2c70);
  native_System_Collections_Generic_List_Vector4____ctor_d2db24
            (uVar1,_Method_System_Collections_Generic_List_Vector4___ctor___12dd518);
  *(undefined8 *)(param_1 + 0x68) = uVar1;
  native_sub_4326e0(param_1 + 0x68,uVar1);
  uVar1 = native_sub_432808(_System_Collections_Generic_List_Color__TypeInfo_12d29f0);
  native_System_Collections_Generic_List_Color____ctor_d063cc
            (uVar1,_Method_System_Collections_Generic_List_Color___ctor___12dc688);
  *(undefined8 *)(param_1 + 0x70) = uVar1;
  native_sub_4326e0(param_1 + 0x70,uVar1);
  *(undefined1 *)(param_1 + 0xcc) = 1;
  *(undefined4 *)(param_1 + 0xd0) = 3000;
  *(undefined1 *)(param_1 + 0xda) = 1;
  if ((bRam0000000001340ae0 & 1) == 0) {
    native_sub_43273c(&UnityEngine_Object_TypeInfo_12d54e0,0);
    bRam0000000001340ae0 = 1;
  }
  if (((*(byte *)(_UnityEngine_Object_TypeInfo_12d54e0 + 0x133) >> 2 & 1) != 0) &&
     (*(int *)(_UnityEngine_Object_TypeInfo_12d54e0 + 0xe0) == 0)) {
    native_sub_4327ec();
  }
  auVar2._8_8_ = 0;
  auVar2._0_8_ = param_1;
  return auVar2;
}



/* UIDrawCall$$.cctor @ 0x9e9bac
 * void UIDrawCall___cctor (const MethodInfo* method); */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* UIDrawCall$$.cctor
   void UIDrawCall___cctor (const MethodInfo* method); */

void native_UIDrawCall___cctor_9e9bac(void)

{
  undefined8 uVar1;
  undefined8 *puVar2;
  
  if ((bRam0000000001341918 & 1) == 0) {
    native_sub_43273c(&Method_BetterList_UIDrawCall___ctor___12d8998);
    native_sub_43273c(&BetterList_UIDrawCall__TypeInfo_12d2130);
    native_sub_43273c(&Method_System_Collections_Generic_List_int_____ctor___12dc350);
    native_sub_43273c(&System_Collections_Generic_List_int____TypeInfo_12d2948);
    native_sub_43273c(&UIDrawCall_TypeInfo_12d6438);
    bRam0000000001341918 = 1;
  }
  uVar1 = native_sub_432808(_BetterList_UIDrawCall__TypeInfo_12d2130);
  native_BetterList_object____ctor_ba2d1c(uVar1,_Method_BetterList_UIDrawCall___ctor___12d8998);
  puVar2 = *(undefined8 **)(_UIDrawCall_TypeInfo_12d6438 + 0xb8);
  *puVar2 = uVar1;
  native_sub_4326e0(puVar2,uVar1);
  uVar1 = native_sub_432808(_BetterList_UIDrawCall__TypeInfo_12d2130);
  native_BetterList_object____ctor_ba2d1c(uVar1,_Method_BetterList_UIDrawCall___ctor___12d8998);
  puVar2 = (undefined8 *)(*(long *)(_UIDrawCall_TypeInfo_12d6438 + 0xb8) + 8);
  *puVar2 = uVar1;
  native_sub_4326e0(puVar2,uVar1);
  *(undefined4 *)(*(long *)(_UIDrawCall_TypeInfo_12d6438 + 0xb8) + 0x10) = 0xffffffff;
  uVar1 = native_sub_432808(_System_Collections_Generic_List_int____TypeInfo_12d2948);
  native_System_Collections_Generic_List_int______ctor_d40014
            (uVar1,10,_Method_System_Collections_Generic_List_int_____ctor___12dc350);
  puVar2 = (undefined8 *)(*(long *)(_UIDrawCall_TypeInfo_12d6438 + 0xb8) + 0x18);
  *puVar2 = uVar1;
  native_sub_4326e0(puVar2,uVar1);
  puVar2 = (undefined8 *)(*(long *)(_UIDrawCall_TypeInfo_12d6438 + 0xb8) + 0x20);
  *puVar2 = 0;
  native_sub_4326e0(puVar2,0);
  puVar2 = (undefined8 *)(*(long *)(_UIDrawCall_TypeInfo_12d6438 + 0xb8) + 0x28);
  *puVar2 = 0;
  native_sub_4326e0(puVar2,0);
  *(undefined4 *)(*(long *)(_UIDrawCall_TypeInfo_12d6438 + 0xb8) + 0x30) = 0xffffffff;
  return;
}


