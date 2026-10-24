/* ARM64 IL2CPP native pseudocode from Ghidra.
 * Recovered implementation, not original C# source.
 * Function boundaries follow the IL2CPP method address table. */


/* UIBasicSprite$$get_type @ 0xc8be6c
 * int32_t UIBasicSprite__get_type (UIBasicSprite_o* __this, const MethodInfo* method); */

/* UIBasicSprite$$get_type
   int32_t UIBasicSprite__get_type (UIBasicSprite_o* __this, const MethodInfo* method); */

undefined4 native_UIBasicSprite__get_type_c8be6c(long param_1)

{
  return *(undefined4 *)(param_1 + 400);
}



/* UIBasicSprite$$set_type @ 0xc8be74
 * void UIBasicSprite__set_type (UIBasicSprite_o* __this, int32_t value, const MethodInfo* method); */

/* UIBasicSprite$$set_type
   void UIBasicSprite__set_type (UIBasicSprite_o* __this, int32_t value, const MethodInfo* method);
    */

void native_UIBasicSprite__set_type_c8be74(long *param_1,int param_2)

{
  if ((int)param_1[0x32] == param_2) {
    return;
  }
  *(int *)(param_1 + 0x32) = param_2;
                    /* WARNING: Could not recover jumptable at 0x00c8be94. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(*param_1 + 0x378))(param_1,*(undefined8 *)(*param_1 + 0x380));
  return;
}



/* UIBasicSprite$$get_flip @ 0xc8be98
 * int32_t UIBasicSprite__get_flip (UIBasicSprite_o* __this, const MethodInfo* method); */

/* UIBasicSprite$$get_flip
   int32_t UIBasicSprite__get_flip (UIBasicSprite_o* __this, const MethodInfo* method); */

undefined4 native_UIBasicSprite__get_flip_c8be98(long param_1)

{
  return *(undefined4 *)(param_1 + 0x1a0);
}



/* UIBasicSprite$$set_flip @ 0xc8bea0
 * void UIBasicSprite__set_flip (UIBasicSprite_o* __this, int32_t value, const MethodInfo* method); */

/* UIBasicSprite$$set_flip
   void UIBasicSprite__set_flip (UIBasicSprite_o* __this, int32_t value, const MethodInfo* method);
    */

void native_UIBasicSprite__set_flip_c8bea0(long *param_1,int param_2)

{
  if ((int)param_1[0x34] == param_2) {
    return;
  }
  *(int *)(param_1 + 0x34) = param_2;
                    /* WARNING: Could not recover jumptable at 0x00c8bec0. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(*param_1 + 0x378))(param_1,*(undefined8 *)(*param_1 + 0x380));
  return;
}



/* UIBasicSprite$$get_fillDirection @ 0xc8bec4
 * int32_t UIBasicSprite__get_fillDirection (UIBasicSprite_o* __this, const MethodInfo* method); */

/* UIBasicSprite$$get_fillDirection
   int32_t UIBasicSprite__get_fillDirection (UIBasicSprite_o* __this, const MethodInfo* method); */

undefined4 native_UIBasicSprite__get_fillDirection_c8bec4(long param_1)

{
  return *(undefined4 *)(param_1 + 0x194);
}



/* UIBasicSprite$$set_fillDirection @ 0xc8becc
 * void UIBasicSprite__set_fillDirection (UIBasicSprite_o* __this, int32_t value, const MethodInfo* method); */

/* UIBasicSprite$$set_fillDirection
   void UIBasicSprite__set_fillDirection (UIBasicSprite_o* __this, int32_t value, const MethodInfo*
   method); */

void native_UIBasicSprite__set_fillDirection_c8becc(long param_1,int param_2)

{
  if (*(int *)(param_1 + 0x194) != param_2) {
    *(int *)(param_1 + 0x194) = param_2;
    *(undefined1 *)(param_1 + 0x58) = 1;
  }
  return;
}



/* UIBasicSprite$$get_fillAmount @ 0xc8bee8
 * float UIBasicSprite__get_fillAmount (UIBasicSprite_o* __this, const MethodInfo* method); */

/* UIBasicSprite$$get_fillAmount
   float UIBasicSprite__get_fillAmount (UIBasicSprite_o* __this, const MethodInfo* method); */

undefined4 native_UIBasicSprite__get_fillAmount_c8bee8(long param_1)

{
  return *(undefined4 *)(param_1 + 0x198);
}



/* UIBasicSprite$$set_fillAmount @ 0xc8bef0
 * void UIBasicSprite__set_fillAmount (UIBasicSprite_o* __this, float value, const MethodInfo* method); */

/* UIBasicSprite$$set_fillAmount
   void UIBasicSprite__set_fillAmount (UIBasicSprite_o* __this, float value, const MethodInfo*
   method); */

void native_UIBasicSprite__set_fillAmount_c8bef0(long param_1)

{
  float fVar1;
  
  fVar1 = (float)native_UnityEngine_Mathf__Clamp01_8d9d9c(0);
  if (*(float *)(param_1 + 0x198) != fVar1) {
    *(float *)(param_1 + 0x198) = fVar1;
    *(undefined1 *)(param_1 + 0x58) = 1;
  }
  return;
}



/* UIBasicSprite$$get_minWidth @ 0xc8bf2c
 * int32_t UIBasicSprite__get_minWidth (UIBasicSprite_o* __this, const MethodInfo* method); */

/* UIBasicSprite$$get_minWidth
   int32_t UIBasicSprite__get_minWidth (UIBasicSprite_o* __this, const MethodInfo* method); */

undefined8
native_UIBasicSprite__get_minWidth_c8bf2c
          (undefined1 param_1 [16],float param_2,float param_3,float param_4,long *param_5)

{
  int iVar1;
  uint uVar2;
  undefined8 uVar3;
  float fVar4;
  float fVar5;
  undefined8 uStack_50;
  undefined8 uStack_48;
  
  iVar1 = (**(code **)(*param_5 + 0x428))(param_5,*(undefined8 *)(*param_5 + 0x430));
  if (iVar1 != 1) {
    iVar1 = (**(code **)(*param_5 + 0x428))(param_5,*(undefined8 *)(*param_5 + 0x430));
    if (iVar1 != 4) {
      return 2;
    }
  }
  fVar4 = (float)(**(code **)(*param_5 + 0x3d8))(param_5,*(undefined8 *)(*param_5 + 0x3e0));
  fVar5 = (float)(**(code **)(*param_5 + 0x458))(param_5,*(undefined8 *)(*param_5 + 0x460));
  uStack_50 = 0;
  uStack_48 = 0;
  native_UnityEngine_Vector4___ctor_776f24
            (fVar4 * fVar5,param_2 * fVar5,param_3 * fVar5,param_4 * fVar5,&uStack_50,0);
  uVar2 = native_UnityEngine_Mathf__RoundToInt_8e50f0((float)uStack_50 + (float)uStack_48,0);
  uVar3 = native_UIWidget__get_minWidth_94ccec(param_5,0);
  uVar3 = native_UnityEngine_Mathf__Max_8e4cd0(uVar3,(uVar2 & 1) + uVar2,0);
  return uVar3;
}



/* UIBasicSprite$$get_minHeight @ 0xc8c044
 * int32_t UIBasicSprite__get_minHeight (UIBasicSprite_o* __this, const MethodInfo* method); */

/* UIBasicSprite$$get_minHeight
   int32_t UIBasicSprite__get_minHeight (UIBasicSprite_o* __this, const MethodInfo* method); */

undefined8
native_UIBasicSprite__get_minHeight_c8c044
          (undefined1 param_1 [16],float param_2,float param_3,float param_4,long *param_5)

{
  int iVar1;
  uint uVar2;
  undefined8 uVar3;
  float fVar4;
  float fVar5;
  undefined8 uStack_50;
  undefined8 uStack_48;
  
  iVar1 = (**(code **)(*param_5 + 0x428))(param_5,*(undefined8 *)(*param_5 + 0x430));
  if (iVar1 != 1) {
    iVar1 = (**(code **)(*param_5 + 0x428))(param_5,*(undefined8 *)(*param_5 + 0x430));
    if (iVar1 != 4) {
      return 2;
    }
  }
  fVar4 = (float)(**(code **)(*param_5 + 0x3d8))(param_5,*(undefined8 *)(*param_5 + 0x3e0));
  fVar5 = (float)(**(code **)(*param_5 + 0x458))(param_5,*(undefined8 *)(*param_5 + 0x460));
  uStack_50 = 0;
  uStack_48 = 0;
  native_UnityEngine_Vector4___ctor_776f24
            (fVar4 * fVar5,param_2 * fVar5,param_3 * fVar5,param_4 * fVar5,&uStack_50,0);
  uVar2 = native_UnityEngine_Mathf__RoundToInt_8e50f0(uStack_50._4_4_ + uStack_48._4_4_,0);
  uVar3 = native_UIWidget__get_minHeight_94ccf4(param_5,0);
  uVar3 = native_UnityEngine_Mathf__Max_8e4cd0(uVar3,(uVar2 & 1) + uVar2,0);
  return uVar3;
}



/* UIBasicSprite$$get_invert @ 0xc8c15c
 * bool UIBasicSprite__get_invert (UIBasicSprite_o* __this, const MethodInfo* method); */

/* UIBasicSprite$$get_invert
   bool UIBasicSprite__get_invert (UIBasicSprite_o* __this, const MethodInfo* method); */

undefined1 native_UIBasicSprite__get_invert_c8c15c(long param_1)

{
  return *(undefined1 *)(param_1 + 0x19c);
}



/* UIBasicSprite$$set_invert @ 0xc8c164
 * void UIBasicSprite__set_invert (UIBasicSprite_o* __this, bool value, const MethodInfo* method); */

/* UIBasicSprite$$set_invert
   void UIBasicSprite__set_invert (UIBasicSprite_o* __this, bool value, const MethodInfo* method);
    */

void native_UIBasicSprite__set_invert_c8c164(long param_1,byte param_2)

{
  if (((*(char *)(param_1 + 0x19c) != '\0' ^ param_2) & 1) != 0) {
    *(byte *)(param_1 + 0x19c) = param_2 & 1;
    *(undefined1 *)(param_1 + 0x58) = 1;
  }
  return;
}



/* UIBasicSprite$$get_hasBorder @ 0xc8c18c
 * bool UIBasicSprite__get_hasBorder (UIBasicSprite_o* __this, const MethodInfo* method); */

/* UIBasicSprite$$get_hasBorder
   bool UIBasicSprite__get_hasBorder (UIBasicSprite_o* __this, const MethodInfo* method); */

bool native_UIBasicSprite__get_hasBorder_c8c18c
               (undefined1 param_1 [16],float param_2,float param_3,float param_4,long *param_5)

{
  bool bVar1;
  float fVar2;
  
  fVar2 = (float)(**(code **)(*param_5 + 0x3d8))(param_5,*(undefined8 *)(*param_5 + 0x3e0));
  bVar1 = true;
  if (((param_3 == 0.0) && (fVar2 == 0.0)) && (param_2 == 0.0)) {
    bVar1 = param_4 != 0.0;
  }
  return bVar1;
}



/* UIBasicSprite$$get_premultipliedAlpha @ 0xc8c1d0
 * bool UIBasicSprite__get_premultipliedAlpha (UIBasicSprite_o* __this, const MethodInfo* method); */

/* UIBasicSprite$$get_premultipliedAlpha
   bool UIBasicSprite__get_premultipliedAlpha (UIBasicSprite_o* __this, const MethodInfo* method);
    */

undefined8 native_UIBasicSprite__get_premultipliedAlpha_c8c1d0(void)

{
  return 0;
}



/* UIBasicSprite$$get_pixelSize @ 0xc8c1d8
 * float UIBasicSprite__get_pixelSize (UIBasicSprite_o* __this, const MethodInfo* method); */

/* UIBasicSprite$$get_pixelSize
   float UIBasicSprite__get_pixelSize (UIBasicSprite_o* __this, const MethodInfo* method); */

undefined1  [16] native_UIBasicSprite__get_pixelSize_c8c1d8(void)

{
  return ZEXT816(0x3f800000);
}



/* UIBasicSprite$$get_padding @ 0xc8c1e0
 * UnityEngine_Vector4_o UIBasicSprite__get_padding (UIBasicSprite_o* __this, const MethodInfo* method); */

/* UIBasicSprite$$get_padding
   UnityEngine_Vector4_o UIBasicSprite__get_padding (UIBasicSprite_o* __this, const MethodInfo*
   method); */

undefined4 native_UIBasicSprite__get_padding_c8c1e0(void)

{
  undefined8 uStack_20;
  undefined8 uStack_18;
  
  uStack_20 = 0;
  uStack_18 = 0;
  native_UnityEngine_Vector4___ctor_776f24(0,0,0,0,&uStack_20,0);
  return (undefined4)uStack_20;
}



/* UIBasicSprite$$get_drawingUVs @ 0xc8c220
 * UnityEngine_Vector4_o UIBasicSprite__get_drawingUVs (UIBasicSprite_o* __this, const MethodInfo* method); */

/* UIBasicSprite$$get_drawingUVs
   UnityEngine_Vector4_o UIBasicSprite__get_drawingUVs (UIBasicSprite_o* __this, const MethodInfo*
   method); */

undefined4 native_UIBasicSprite__get_drawingUVs_c8c220(long param_1)

{
  int iVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  undefined8 uVar5;
  undefined8 uStack_40;
  undefined8 uStack_38;
  
  iVar1 = *(int *)(param_1 + 0x1a0);
  param_1 = param_1 + 0x1d8;
  if (iVar1 == 3) {
    uVar2 = native_UnityEngine_Rect__get_xMax_76365c(param_1,0);
    uVar3 = native_UnityEngine_Rect__get_yMax_76366c(param_1,0);
    uVar4 = native_UnityEngine_Rect__get_xMin_76363c(param_1,0);
  }
  else {
    if (iVar1 != 2) {
      if (iVar1 == 1) {
        uVar2 = native_UnityEngine_Rect__get_xMax_76365c(param_1,0);
        uVar3 = native_UnityEngine_Rect__get_yMin_763644(param_1,0);
        uVar4 = native_UnityEngine_Rect__get_xMin_76363c(param_1,0);
      }
      else {
        uVar2 = native_UnityEngine_Rect__get_xMin_76363c(param_1,0);
        uVar3 = native_UnityEngine_Rect__get_yMin_763644(param_1,0);
        uVar4 = native_UnityEngine_Rect__get_xMax_76365c(param_1,0);
      }
      uVar5 = native_UnityEngine_Rect__get_yMax_76366c(param_1,0);
      goto LAB_00c8c328;
    }
    uVar2 = native_UnityEngine_Rect__get_xMin_76363c(param_1,0);
    uVar3 = native_UnityEngine_Rect__get_yMax_76366c(param_1,0);
    uVar4 = native_UnityEngine_Rect__get_xMax_76365c(param_1,0);
  }
  uVar5 = native_UnityEngine_Rect__get_yMin_763644(param_1,0);
LAB_00c8c328:
  uStack_40 = 0;
  uStack_38 = 0;
  native_UnityEngine_Vector4___ctor_776f24(uVar2,uVar3,uVar4,uVar5,&uStack_40,0);
  return (undefined4)uStack_40;
}



/* UIBasicSprite$$get_drawingColor @ 0xc8c368
 * UnityEngine_Color_o UIBasicSprite__get_drawingColor (UIBasicSprite_o* __this, const MethodInfo* method); */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* UIBasicSprite$$get_drawingColor
   UnityEngine_Color_o UIBasicSprite__get_drawingColor (UIBasicSprite_o* __this, const MethodInfo*
   method); */

undefined1  [16] native_UIBasicSprite__get_drawingColor_c8c368(long *param_1)

{
  long lVar1;
  ulong uVar2;
  undefined1 auVar3 [16];
  undefined4 uVar4;
  undefined4 uVar5;
  uint uVar6;
  undefined8 uVar7;
  
  if ((bRam0000000001342874 & 1) == 0) {
    native_sub_43273c(&NGUITools_TypeInfo_12d53c8);
    bRam0000000001342874 = 1;
  }
  uVar4 = *(undefined4 *)((long)param_1 + 0x8c);
  uVar6 = *(uint *)(param_1 + 0x12);
  uVar7 = 0;
  uVar5 = *(undefined4 *)((long)param_1 + 0x94);
  lVar1 = param_1[0x13];
  uVar2 = (**(code **)(*param_1 + 0x448))(param_1,*(undefined8 *)(*param_1 + 0x450));
  auVar3._8_8_ = uVar7;
  auVar3._0_8_ = CONCAT44(0,uVar6);
  if ((uVar2 & 1) != 0) {
    if (((*(byte *)(_NGUITools_TypeInfo_12d53c8 + 0x133) >> 2 & 1) != 0) &&
       (*(int *)(_NGUITools_TypeInfo_12d53c8 + 0xe0) == 0)) {
      native_sub_4327ec();
    }
    auVar3 = native_NGUITools__ApplyPMA_732e54(CONCAT44(0,uVar6),uVar5,(int)lVar1,uVar4,0);
  }
  return auVar3;
}



/* UIBasicSprite$$Fill @ 0xc8c42c
 * void UIBasicSprite__Fill (UIBasicSprite_o* __this, System_Collections_Generic_List_Vector3__o* verts, System_Collections_Generic_List_Vector2__o* uvs, System_Collections_Generic_List_Color__o* cols, UnityEngine_Rect_o outer, UnityEngine_Rect_o inner, const MethodInfo* method); */

/* UIBasicSprite$$Fill
   void UIBasicSprite__Fill (UIBasicSprite_o* __this, System_Collections_Generic_List_Vector3__o*
   verts, System_Collections_Generic_List_Vector2__o* uvs, System_Collections_Generic_List_Color__o*
   cols, UnityEngine_Rect_o outer, UnityEngine_Rect_o inner, const MethodInfo* method); */

void native_UIBasicSprite__Fill_c8c42c
               (undefined4 param_1,undefined4 param_2,undefined4 param_3,undefined4 param_4,
               undefined4 param_5,undefined4 param_6,undefined4 param_7,undefined4 param_8,
               long *param_9,undefined8 param_10,undefined8 param_11,undefined8 param_12)

{
  undefined4 uVar1;
  undefined8 uStack_60;
  undefined8 uStack_58;
  undefined8 uStack_50;
  undefined8 uStack_48;
  undefined8 uStack_40;
  undefined8 uStack_38;
  
  uStack_40 = 0;
  uStack_38 = 0;
  uStack_50 = 0;
  uStack_48 = 0;
  uStack_60 = 0;
  uStack_58 = 0;
  *(undefined4 *)(param_9 + 0x3b) = param_1;
  *(undefined4 *)((long)param_9 + 0x1dc) = param_2;
  *(undefined4 *)(param_9 + 0x3c) = param_3;
  *(undefined4 *)((long)param_9 + 0x1e4) = param_4;
  *(undefined4 *)(param_9 + 0x39) = param_5;
  *(undefined4 *)((long)param_9 + 0x1cc) = param_6;
  *(undefined4 *)(param_9 + 0x3a) = param_7;
  *(undefined4 *)((long)param_9 + 0x1d4) = param_8;
  uVar1 = (**(code **)(*param_9 + 0x2f8))(param_9,*(undefined8 *)(*param_9 + 0x300));
  uStack_40 = CONCAT44(param_2,uVar1);
  uStack_38 = CONCAT44(param_4,param_3);
  uVar1 = native_UIBasicSprite__get_drawingUVs_c8c220(param_9);
  uStack_50 = CONCAT44(param_2,uVar1);
  uStack_48 = CONCAT44(param_4,param_3);
  uVar1 = native_UIBasicSprite__get_drawingColor_c8c368(param_9);
  uStack_60 = CONCAT44(param_2,uVar1);
  uStack_58 = CONCAT44(param_4,param_3);
  uVar1 = (**(code **)(*param_9 + 0x428))(param_9,*(undefined8 *)(*param_9 + 0x430));
  switch(uVar1) {
  case 0:
    native_UIBasicSprite__SimpleFill_c8c5ac
              (param_9,param_10,param_11,param_12,&uStack_40,&uStack_50,&uStack_60);
    break;
  case 1:
    native_UIBasicSprite__SlicedFill_c8c7a8
              (param_9,param_10,param_11,param_12,&uStack_40,&uStack_50,&uStack_60);
    break;
  case 2:
    native_UIBasicSprite__TiledFill_c8e1f8(param_9,param_10,param_11,param_12,&uStack_40,&uStack_60)
    ;
    break;
  case 3:
    native_UIBasicSprite__FilledFill_c8d2e4
              (param_9,param_10,param_11,param_12,&uStack_40,&uStack_50,&uStack_60);
    break;
  case 4:
    native_UIBasicSprite__AdvancedFill_c8e730
              (param_9,param_10,param_11,param_12,&uStack_40,&uStack_50,&uStack_60);
  }
  return;
}



/* UIBasicSprite$$SimpleFill @ 0xc8c5ac
 * void UIBasicSprite__SimpleFill (UIBasicSprite_o* __this, System_Collections_Generic_List_Vector3__o* verts, System_Collections_Generic_List_Vector2__o* uvs, System_Collections_Generic_List_Color__o* cols, UnityEngine_Vector4_o* v, UnityEngine_Vector4_o* u, UnityEngine_Color_o* c, const MethodInfo* method); */

/* WARNING: Removing unreachable block (ram,0x00c8f8d8) */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* UIBasicSprite$$SimpleFill
   void UIBasicSprite__SimpleFill (UIBasicSprite_o* __this,
   System_Collections_Generic_List_Vector3__o* verts, System_Collections_Generic_List_Vector2__o*
   uvs, System_Collections_Generic_List_Color__o* cols, UnityEngine_Vector4_o* v,
   UnityEngine_Vector4_o* u, UnityEngine_Color_o* c, const MethodInfo* method); */

void native_UIBasicSprite__SimpleFill_c8c5ac
               (long *param_1,long param_2,long param_3,long param_4,undefined4 *param_5,
               undefined4 *param_6,undefined4 *param_7)

{
  int iVar1;
  undefined8 uVar2;
  uint uVar3;
  long lVar4;
  float fVar5;
  float fVar6;
  undefined4 uVar7;
  ulong uVar8;
  float fVar9;
  undefined4 uVar10;
  float fVar11;
  undefined4 uVar12;
  float in_s3;
  undefined4 uVar13;
  ulong uVar14;
  ulong uVar15;
  ulong uVar16;
  undefined8 uStack_70;
  undefined8 uStack_68;
  
  if ((bRam0000000001342875 & 1) == 0) {
    native_sub_43273c(&Method_System_Collections_Generic_List_Vector2__Add___12dd4b0);
    native_sub_43273c(&Method_System_Collections_Generic_List_Color__Add___12dc690);
    native_sub_43273c(&Method_System_Collections_Generic_List_Vector3__Add___12dd4e0);
    bRam0000000001342875 = 1;
  }
  if (param_2 != 0) {
    native_System_Collections_Generic_List_Vector3___Add_d2be08
              (*param_5,param_5[1],0,param_2,
               _Method_System_Collections_Generic_List_Vector3__Add___12dd4e0);
    native_System_Collections_Generic_List_Vector3___Add_d2be08
              (*param_5,param_5[3],0,param_2,
               _Method_System_Collections_Generic_List_Vector3__Add___12dd4e0);
    native_System_Collections_Generic_List_Vector3___Add_d2be08
              (param_5[2],param_5[3],0,param_2,
               _Method_System_Collections_Generic_List_Vector3__Add___12dd4e0);
    fVar11 = 0.0;
    native_System_Collections_Generic_List_Vector3___Add_d2be08
              (param_5[2],param_5[1],0,param_2,
               _Method_System_Collections_Generic_List_Vector3__Add___12dd4e0);
    if (param_3 != 0) {
      native_System_Collections_Generic_List_Vector2___Add_d293ec
                (*param_6,param_6[1],param_3,
                 _Method_System_Collections_Generic_List_Vector2__Add___12dd4b0);
      native_System_Collections_Generic_List_Vector2___Add_d293ec
                (*param_6,param_6[3],param_3,
                 _Method_System_Collections_Generic_List_Vector2__Add___12dd4b0);
      native_System_Collections_Generic_List_Vector2___Add_d293ec
                (param_6[2],param_6[3],param_3,
                 _Method_System_Collections_Generic_List_Vector2__Add___12dd4b0);
      fVar9 = (float)param_6[1];
      native_System_Collections_Generic_List_Vector2___Add_d293ec
                (param_6[2],fVar9,param_3,
                 _Method_System_Collections_Generic_List_Vector2__Add___12dd4b0);
      if (*(char *)((long)param_1 + 0x1a4) != '\0') {
        native_UIBasicSprite__AddVertexColours_c8f76c(param_1,param_4,param_7);
        native_UIBasicSprite__AddVertexColours_c8f76c(param_1,param_4,param_7);
        native_UIBasicSprite__AddVertexColours_c8f76c(param_1,param_4,param_7);
        if ((bRam0000000001342877 & 1) == 0) {
          native_sub_43273c(&Method_System_Collections_Generic_List_Color__Add___12dc690);
          bRam0000000001342877 = 1;
        }
        fVar5 = (float)(**(code **)(*param_1 + 0x3d8))(param_1,*(undefined8 *)(*param_1 + 0x3e0));
        fVar6 = (float)(**(code **)(*param_1 + 0x458))(param_1,*(undefined8 *)(*param_1 + 0x460));
        uStack_70 = 0;
        uStack_68 = 0;
        native_UnityEngine_Vector4___ctor_776f24
                  (fVar5 * fVar6,fVar9 * fVar6,fVar11 * fVar6,in_s3 * fVar6,&uStack_70,0);
        fVar11 = (float)uStack_70;
        fVar9 = uStack_70._4_4_;
        fVar5 = (float)uStack_68;
        fVar6 = uStack_68._4_4_;
        iVar1 = (**(code **)(*param_1 + 0x428))(param_1,*(undefined8 *)(*param_1 + 0x430));
        if ((iVar1 == 0) ||
           ((((fVar11 == 0.0 && (fVar9 == 0.0)) && (fVar5 == 0.0)) && (fVar6 == 0.0)))) {
          uVar7 = *param_7;
          uVar10 = param_7[1];
          uVar12 = param_7[2];
          uVar13 = param_7[3];
          uVar8 = (ulong)*(uint *)(param_1 + 0x37);
          uVar15 = (ulong)*(uint *)((long)param_1 + 0x1bc);
          uVar16 = (ulong)*(uint *)(param_1 + 0x38);
          uVar14 = (ulong)*(uint *)((long)param_1 + 0x1c4);
        }
        else {
          uVar7 = *(undefined4 *)((long)param_1 + 0x1bc);
          uVar10 = 0;
          uVar12 = (undefined4)param_1[0x38];
          uVar13 = 0;
          uVar14 = (ulong)*(uint *)((long)param_1 + 0x1c4);
          uVar8 = native_UnityEngine_Color__Lerp_8d9d50
                            ((int)param_1[0x37],uVar7,uVar12,uVar14,(int)param_1[0x35],
                             *(undefined4 *)((long)param_1 + 0x1ac),(int)param_1[0x36],
                             *(undefined4 *)((long)param_1 + 0x1b4),0);
          uVar16 = CONCAT44(uVar13,uVar12);
          uVar12 = param_7[2];
          uVar13 = param_7[3];
          uVar15 = CONCAT44(uVar10,uVar7);
          uVar7 = *param_7;
          uVar10 = param_7[1];
        }
        native_UnityEngine_Color__op_Multiply_8d9c68
                  (uVar7,uVar10,uVar12,uVar13,uVar8,uVar15,uVar16,uVar14,0);
        if (param_4 != 0) {
          native_System_Collections_Generic_List_Color___Add_d07158
                    (param_4,_Method_System_Collections_Generic_List_Color__Add___12dc690);
          return;
        }
                    /* WARNING: Subroutine does not return */
        native_sub_432810();
      }
      if (param_4 != 0) {
        native_System_Collections_Generic_List_Color___Add_d07158
                  (*param_7,param_7[1],param_7[2],param_7[3],param_4,
                   _Method_System_Collections_Generic_List_Color__Add___12dc690);
        native_System_Collections_Generic_List_Color___Add_d07158
                  (*param_7,param_7[1],param_7[2],param_7[3],param_4,
                   _Method_System_Collections_Generic_List_Color__Add___12dc690);
        native_System_Collections_Generic_List_Color___Add_d07158
                  (*param_7,param_7[1],param_7[2],param_7[3],param_4,
                   _Method_System_Collections_Generic_List_Color__Add___12dc690);
        uVar7 = *param_7;
        uVar10 = param_7[1];
        uVar12 = param_7[2];
        uVar13 = param_7[3];
        lVar4 = *(long *)(param_4 + 0x10);
        if (lVar4 == 0) {
code_r0x00d071c8:
                    /* WARNING: Subroutine does not return */
          native_sub_432810();
        }
        uVar3 = *(uint *)(param_4 + 0x18);
        if (uVar3 == *(uint *)(lVar4 + 0x18)) {
          (*(code *)**(undefined8 **)
                      (*(long *)(*(long *)(
                                          _Method_System_Collections_Generic_List_Color__Add___12dc690
                                          + 0x18) + 0xc0) + 0x60))(param_4,uVar3 + 1);
          uVar3 = *(uint *)(param_4 + 0x18);
          lVar4 = *(long *)(param_4 + 0x10);
          *(uint *)(param_4 + 0x18) = uVar3 + 1;
          if (lVar4 == 0) goto code_r0x00d071c8;
        }
        else {
          *(uint *)(param_4 + 0x18) = uVar3 + 1;
        }
        if (*(uint *)(lVar4 + 0x18) <= uVar3) {
          uVar2 = native_sub_43283c();
                    /* WARNING: Subroutine does not return */
          native_sub_4327dc(uVar2,0);
        }
        lVar4 = lVar4 + (long)(int)uVar3 * 0x10;
        *(undefined4 *)(lVar4 + 0x20) = uVar7;
        *(undefined4 *)(lVar4 + 0x24) = uVar10;
        *(undefined4 *)(lVar4 + 0x28) = uVar12;
        *(undefined4 *)(lVar4 + 0x2c) = uVar13;
        *(int *)(param_4 + 0x1c) = *(int *)(param_4 + 0x1c) + 1;
        return;
      }
    }
  }
                    /* WARNING: Subroutine does not return */
  native_sub_432810();
}



/* UIBasicSprite$$SlicedFill @ 0xc8c7a8
 * void UIBasicSprite__SlicedFill (UIBasicSprite_o* __this, System_Collections_Generic_List_Vector3__o* verts, System_Collections_Generic_List_Vector2__o* uvs, System_Collections_Generic_List_Color__o* cols, UnityEngine_Vector4_o* v, UnityEngine_Vector4_o* u, UnityEngine_Color_o* gc, const MethodInfo* method); */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* UIBasicSprite$$SlicedFill
   void UIBasicSprite__SlicedFill (UIBasicSprite_o* __this,
   System_Collections_Generic_List_Vector3__o* verts, System_Collections_Generic_List_Vector2__o*
   uvs, System_Collections_Generic_List_Color__o* cols, UnityEngine_Vector4_o* v,
   UnityEngine_Vector4_o* u, UnityEngine_Color_o* gc, const MethodInfo* method); */

void native_UIBasicSprite__SlicedFill_c8c7a8
               (undefined1 param_1 [16],float param_2,float param_3,float param_4,long *param_5,
               long param_6,long param_7,long param_8,undefined4 *param_9,undefined8 param_10,
               undefined4 *param_11)

{
  ulong uVar1;
  ulong uVar2;
  float fVar3;
  float fVar4;
  bool bVar5;
  undefined8 uVar6;
  long lVar7;
  long lVar8;
  ulong uVar9;
  ulong uVar10;
  float fVar11;
  float fVar12;
  undefined4 uVar13;
  undefined8 uStack_90;
  undefined8 uStack_88;
  
  if ((bRam0000000001342876 & 1) == 0) {
    native_sub_43273c(&Method_System_Collections_Generic_List_Vector2__Add___12dd4b0);
    native_sub_43273c(&Method_System_Collections_Generic_List_Color__Add___12dc690);
    native_sub_43273c(&Method_System_Collections_Generic_List_Vector3__Add___12dd4e0);
    native_sub_43273c(&UIBasicSprite_TypeInfo_12d6400);
    bRam0000000001342876 = 1;
  }
  fVar11 = (float)(**(code **)(*param_5 + 0x3d8))(param_5,*(undefined8 *)(*param_5 + 0x3e0));
  fVar12 = (float)(**(code **)(*param_5 + 0x458))(param_5,*(undefined8 *)(*param_5 + 0x460));
  uStack_90 = 0;
  uStack_88 = 0;
  native_UnityEngine_Vector4___ctor_776f24
            (fVar11 * fVar12,param_2 * fVar12,param_3 * fVar12,param_4 * fVar12,&uStack_90,0);
  fVar11 = (float)uStack_90;
  fVar12 = uStack_90._4_4_;
  fVar3 = (float)uStack_88;
  fVar4 = uStack_88._4_4_;
  if (((((float)uStack_90 == 0.0) && (uStack_90._4_4_ == 0.0)) && ((float)uStack_88 == 0.0)) &&
     (uStack_88._4_4_ == 0.0)) {
    native_UIBasicSprite__SimpleFill_c8c5ac
              (param_5,param_6,param_7,param_8,param_9,param_10,param_11);
    return;
  }
  if (((*(byte *)(_UIBasicSprite_TypeInfo_12d6400 + 0x133) >> 2 & 1) != 0) &&
     (*(int *)(_UIBasicSprite_TypeInfo_12d6400 + 0xe0) == 0)) {
    native_sub_4327ec();
  }
  lVar7 = **(long **)(_UIBasicSprite_TypeInfo_12d6400 + 0xb8);
  if (lVar7 != 0) {
    if (*(int *)(lVar7 + 0x18) == 0) {
LAB_00c8d2d4:
      uVar6 = native_sub_43283c();
                    /* WARNING: Subroutine does not return */
      native_sub_4327dc(uVar6,0);
    }
    *(undefined4 *)(lVar7 + 0x20) = *param_9;
    lVar7 = _UIBasicSprite_TypeInfo_12d6400;
    lVar8 = **(long **)(_UIBasicSprite_TypeInfo_12d6400 + 0xb8);
    if (lVar8 != 0) {
      if (*(int *)(lVar8 + 0x18) == 0) goto LAB_00c8d2d4;
      *(undefined4 *)(lVar8 + 0x24) = param_9[1];
      lVar7 = **(long **)(lVar7 + 0xb8);
      if (lVar7 != 0) {
        if (*(uint *)(lVar7 + 0x18) < 4) goto LAB_00c8d2d4;
        *(undefined4 *)(lVar7 + 0x38) = param_9[2];
        lVar7 = _UIBasicSprite_TypeInfo_12d6400;
        lVar8 = **(long **)(_UIBasicSprite_TypeInfo_12d6400 + 0xb8);
        if (lVar8 != 0) {
          if (*(uint *)(lVar8 + 0x18) < 4) goto LAB_00c8d2d4;
          *(undefined4 *)(lVar8 + 0x3c) = param_9[3];
          if ((*(uint *)(param_5 + 0x34) | 2) == 3) {
            if (((*(byte *)(lVar7 + 0x133) >> 2 & 1) != 0) && (*(int *)(lVar7 + 0xe0) == 0)) {
              native_sub_4327ec();
            }
            lVar7 = **(long **)(_UIBasicSprite_TypeInfo_12d6400 + 0xb8);
            if (lVar7 == 0) goto LAB_00c8d2e0;
            if ((*(int *)(lVar7 + 0x18) == 1) || (*(int *)(lVar7 + 0x18) == 0)) goto LAB_00c8d2d4;
            *(float *)(lVar7 + 0x28) = fVar3 + *(float *)(lVar7 + 0x20);
            lVar7 = **(long **)(_UIBasicSprite_TypeInfo_12d6400 + 0xb8);
            if (lVar7 == 0) goto LAB_00c8d2e0;
            if (*(uint *)(lVar7 + 0x18) < 4) goto LAB_00c8d2d4;
            *(float *)(lVar7 + 0x30) = *(float *)(lVar7 + 0x38) - fVar11;
            lVar7 = *(long *)(*(long *)(_UIBasicSprite_TypeInfo_12d6400 + 0xb8) + 8);
            if (lVar7 == 0) goto LAB_00c8d2e0;
            uVar13 = native_UnityEngine_Rect__get_xMin_76363c(param_5 + 0x3b,0);
            if (*(uint *)(lVar7 + 0x18) < 4) goto LAB_00c8d2d4;
            *(undefined4 *)(lVar7 + 0x38) = uVar13;
            lVar7 = *(long *)(*(long *)(_UIBasicSprite_TypeInfo_12d6400 + 0xb8) + 8);
            if (lVar7 == 0) goto LAB_00c8d2e0;
            uVar13 = native_UnityEngine_Rect__get_xMin_76363c(param_5 + 0x39,0);
            if (*(uint *)(lVar7 + 0x18) < 3) goto LAB_00c8d2d4;
            *(undefined4 *)(lVar7 + 0x30) = uVar13;
            lVar7 = *(long *)(*(long *)(_UIBasicSprite_TypeInfo_12d6400 + 0xb8) + 8);
            if (lVar7 == 0) goto LAB_00c8d2e0;
            uVar13 = native_UnityEngine_Rect__get_xMax_76365c(param_5 + 0x39,0);
            if (*(uint *)(lVar7 + 0x18) < 2) goto LAB_00c8d2d4;
            *(undefined4 *)(lVar7 + 0x28) = uVar13;
            lVar7 = *(long *)(*(long *)(_UIBasicSprite_TypeInfo_12d6400 + 0xb8) + 8);
            if (lVar7 == 0) goto LAB_00c8d2e0;
            uVar13 = native_UnityEngine_Rect__get_xMax_76365c(param_5 + 0x3b,0);
            if (*(int *)(lVar7 + 0x18) == 0) goto LAB_00c8d2d4;
            *(undefined4 *)(lVar7 + 0x20) = uVar13;
          }
          else {
            if (((*(byte *)(lVar7 + 0x133) >> 2 & 1) != 0) && (*(int *)(lVar7 + 0xe0) == 0)) {
              native_sub_4327ec();
            }
            lVar7 = **(long **)(_UIBasicSprite_TypeInfo_12d6400 + 0xb8);
            if (lVar7 == 0) goto LAB_00c8d2e0;
            if ((*(int *)(lVar7 + 0x18) == 1) || (*(int *)(lVar7 + 0x18) == 0)) goto LAB_00c8d2d4;
            *(float *)(lVar7 + 0x28) = fVar11 + *(float *)(lVar7 + 0x20);
            lVar7 = **(long **)(_UIBasicSprite_TypeInfo_12d6400 + 0xb8);
            if (lVar7 == 0) goto LAB_00c8d2e0;
            if (*(uint *)(lVar7 + 0x18) < 4) goto LAB_00c8d2d4;
            *(float *)(lVar7 + 0x30) = *(float *)(lVar7 + 0x38) - fVar3;
            lVar7 = *(long *)(*(long *)(_UIBasicSprite_TypeInfo_12d6400 + 0xb8) + 8);
            if (lVar7 == 0) goto LAB_00c8d2e0;
            uVar13 = native_UnityEngine_Rect__get_xMin_76363c(param_5 + 0x3b,0);
            if (*(int *)(lVar7 + 0x18) == 0) goto LAB_00c8d2d4;
            *(undefined4 *)(lVar7 + 0x20) = uVar13;
            lVar7 = *(long *)(*(long *)(_UIBasicSprite_TypeInfo_12d6400 + 0xb8) + 8);
            if (lVar7 == 0) goto LAB_00c8d2e0;
            uVar13 = native_UnityEngine_Rect__get_xMin_76363c(param_5 + 0x39,0);
            if (*(uint *)(lVar7 + 0x18) < 2) goto LAB_00c8d2d4;
            *(undefined4 *)(lVar7 + 0x28) = uVar13;
            lVar7 = *(long *)(*(long *)(_UIBasicSprite_TypeInfo_12d6400 + 0xb8) + 8);
            if (lVar7 == 0) goto LAB_00c8d2e0;
            uVar13 = native_UnityEngine_Rect__get_xMax_76365c(param_5 + 0x39,0);
            if (*(uint *)(lVar7 + 0x18) < 3) goto LAB_00c8d2d4;
            *(undefined4 *)(lVar7 + 0x30) = uVar13;
            lVar7 = *(long *)(*(long *)(_UIBasicSprite_TypeInfo_12d6400 + 0xb8) + 8);
            if (lVar7 == 0) goto LAB_00c8d2e0;
            uVar13 = native_UnityEngine_Rect__get_xMax_76365c(param_5 + 0x3b,0);
            if (*(uint *)(lVar7 + 0x18) < 4) goto LAB_00c8d2d4;
            *(undefined4 *)(lVar7 + 0x38) = uVar13;
          }
          if ((*(uint *)(param_5 + 0x34) & 0xfffffffe) == 2) {
            if (((*(ushort *)(_UIBasicSprite_TypeInfo_12d6400 + 0x132) >> 10 & 1) != 0) &&
               (*(int *)(_UIBasicSprite_TypeInfo_12d6400 + 0xe0) == 0)) {
              native_sub_4327ec();
            }
            lVar7 = _UIBasicSprite_TypeInfo_12d6400;
            lVar8 = **(long **)(_UIBasicSprite_TypeInfo_12d6400 + 0xb8);
            if (lVar8 != 0) {
              if ((*(int *)(lVar8 + 0x18) != 1) && (*(int *)(lVar8 + 0x18) != 0)) {
                *(float *)(lVar8 + 0x2c) = fVar4 + *(float *)(lVar8 + 0x24);
                lVar8 = **(long **)(lVar7 + 0xb8);
                if (lVar8 == 0) goto LAB_00c8d2e0;
                if (3 < *(uint *)(lVar8 + 0x18)) {
                  *(float *)(lVar8 + 0x34) = *(float *)(lVar8 + 0x3c) - fVar12;
                  lVar7 = *(long *)(*(long *)(lVar7 + 0xb8) + 8);
                  if (lVar7 == 0) goto LAB_00c8d2e0;
                  uVar13 = native_UnityEngine_Rect__get_yMin_763644(param_5 + 0x3b,0);
                  if (3 < *(uint *)(lVar7 + 0x18)) {
                    *(undefined4 *)(lVar7 + 0x3c) = uVar13;
                    lVar7 = *(long *)(*(long *)(_UIBasicSprite_TypeInfo_12d6400 + 0xb8) + 8);
                    if (lVar7 == 0) goto LAB_00c8d2e0;
                    uVar13 = native_UnityEngine_Rect__get_yMin_763644(param_5 + 0x39,0);
                    if (2 < *(uint *)(lVar7 + 0x18)) {
                      *(undefined4 *)(lVar7 + 0x34) = uVar13;
                      lVar7 = *(long *)(*(long *)(_UIBasicSprite_TypeInfo_12d6400 + 0xb8) + 8);
                      if (lVar7 == 0) goto LAB_00c8d2e0;
                      uVar13 = native_UnityEngine_Rect__get_yMax_76366c(param_5 + 0x39,0);
                      if (1 < *(uint *)(lVar7 + 0x18)) {
                        *(undefined4 *)(lVar7 + 0x2c) = uVar13;
                        lVar7 = *(long *)(*(long *)(_UIBasicSprite_TypeInfo_12d6400 + 0xb8) + 8);
                        if (lVar7 == 0) goto LAB_00c8d2e0;
                        uVar13 = native_UnityEngine_Rect__get_yMax_76366c(param_5 + 0x3b,0);
                        if (*(int *)(lVar7 + 0x18) != 0) {
                          *(undefined4 *)(lVar7 + 0x24) = uVar13;
LAB_00c8cec4:
                          uVar10 = 0;
                          do {
                            uVar9 = 0;
                            uVar1 = uVar10 + 1;
                            do {
                              if (((uVar9 == 1) && (uVar10 == 1)) && ((int)param_5[0x3d] == 0)) {
                                uVar9 = 2;
                              }
                              else {
                                if (((*(byte *)(_UIBasicSprite_TypeInfo_12d6400 + 0x133) >> 2 & 1)
                                     != 0) &&
                                   (*(int *)(_UIBasicSprite_TypeInfo_12d6400 + 0xe0) == 0)) {
                                  native_sub_4327ec();
                                }
                                lVar7 = **(long **)(_UIBasicSprite_TypeInfo_12d6400 + 0xb8);
                                if (lVar7 == 0) goto LAB_00c8d2e0;
                                if ((*(uint *)(lVar7 + 0x18) <= uVar10) ||
                                   (*(uint *)(lVar7 + 0x18) <= uVar9)) goto LAB_00c8d2d4;
                                if (param_6 == 0) goto LAB_00c8d2e0;
                                native_System_Collections_Generic_List_Vector3___Add_d2be08
                                          (*(undefined4 *)(lVar7 + uVar10 * 8 + 0x20),
                                           *(undefined4 *)(lVar7 + uVar9 * 8 + 0x24),0,param_6,
                                           _Method_System_Collections_Generic_List_Vector3__Add___12dd4e0
                                          );
                                lVar7 = **(long **)(_UIBasicSprite_TypeInfo_12d6400 + 0xb8);
                                if (lVar7 == 0) goto LAB_00c8d2e0;
                                if ((*(uint *)(lVar7 + 0x18) <= uVar10) ||
                                   (uVar2 = uVar9 + 1, *(uint *)(lVar7 + 0x18) <= uVar2))
                                goto LAB_00c8d2d4;
                                native_System_Collections_Generic_List_Vector3___Add_d2be08
                                          (*(undefined4 *)(lVar7 + 0x20 + uVar10 * 8),
                                           *(undefined4 *)(lVar7 + 0x20 + uVar2 * 8 + 4),0,param_6,
                                           _Method_System_Collections_Generic_List_Vector3__Add___12dd4e0
                                          );
                                lVar7 = **(long **)(_UIBasicSprite_TypeInfo_12d6400 + 0xb8);
                                if (lVar7 == 0) goto LAB_00c8d2e0;
                                if ((*(uint *)(lVar7 + 0x18) <= uVar1) ||
                                   (*(uint *)(lVar7 + 0x18) <= uVar2)) goto LAB_00c8d2d4;
                                lVar8 = uVar1 * 8;
                                native_System_Collections_Generic_List_Vector3___Add_d2be08
                                          (*(undefined4 *)(lVar7 + 0x20 + lVar8),
                                           *(undefined4 *)(lVar7 + 0x20 + uVar2 * 8 + 4),0,param_6,
                                           _Method_System_Collections_Generic_List_Vector3__Add___12dd4e0
                                          );
                                lVar7 = **(long **)(_UIBasicSprite_TypeInfo_12d6400 + 0xb8);
                                if (lVar7 == 0) goto LAB_00c8d2e0;
                                if ((*(uint *)(lVar7 + 0x18) <= uVar1) ||
                                   (*(uint *)(lVar7 + 0x18) <= uVar9)) goto LAB_00c8d2d4;
                                native_System_Collections_Generic_List_Vector3___Add_d2be08
                                          (*(undefined4 *)(lVar7 + 0x20 + lVar8),
                                           *(undefined4 *)(lVar7 + 0x20 + uVar9 * 8 + 4),0,param_6,
                                           _Method_System_Collections_Generic_List_Vector3__Add___12dd4e0
                                          );
                                lVar7 = *(long *)(*(long *)(_UIBasicSprite_TypeInfo_12d6400 + 0xb8)
                                                 + 8);
                                if (lVar7 == 0) goto LAB_00c8d2e0;
                                if ((*(uint *)(lVar7 + 0x18) <= uVar10) ||
                                   (*(uint *)(lVar7 + 0x18) <= uVar9)) goto LAB_00c8d2d4;
                                if (param_7 == 0) goto LAB_00c8d2e0;
                                native_System_Collections_Generic_List_Vector2___Add_d293ec
                                          (*(undefined4 *)(lVar7 + uVar10 * 8 + 0x20),
                                           *(undefined4 *)(lVar7 + uVar9 * 8 + 0x24),param_7,
                                           _Method_System_Collections_Generic_List_Vector2__Add___12dd4b0
                                          );
                                lVar7 = *(long *)(*(long *)(_UIBasicSprite_TypeInfo_12d6400 + 0xb8)
                                                 + 8);
                                if (lVar7 == 0) goto LAB_00c8d2e0;
                                if ((*(uint *)(lVar7 + 0x18) <= uVar10) ||
                                   (*(uint *)(lVar7 + 0x18) <= uVar2)) goto LAB_00c8d2d4;
                                native_System_Collections_Generic_List_Vector2___Add_d293ec
                                          (*(undefined4 *)(lVar7 + 0x20 + uVar10 * 8),
                                           *(undefined4 *)(lVar7 + 0x20 + uVar2 * 8 + 4),param_7,
                                           _Method_System_Collections_Generic_List_Vector2__Add___12dd4b0
                                          );
                                lVar7 = *(long *)(*(long *)(_UIBasicSprite_TypeInfo_12d6400 + 0xb8)
                                                 + 8);
                                if (lVar7 == 0) goto LAB_00c8d2e0;
                                if ((*(uint *)(lVar7 + 0x18) <= uVar1) ||
                                   (*(uint *)(lVar7 + 0x18) <= uVar2)) goto LAB_00c8d2d4;
                                native_System_Collections_Generic_List_Vector2___Add_d293ec
                                          (*(undefined4 *)(lVar7 + 0x20 + lVar8),
                                           *(undefined4 *)(lVar7 + 0x20 + uVar2 * 8 + 4),param_7,
                                           _Method_System_Collections_Generic_List_Vector2__Add___12dd4b0
                                          );
                                lVar7 = *(long *)(*(long *)(_UIBasicSprite_TypeInfo_12d6400 + 0xb8)
                                                 + 8);
                                if (lVar7 == 0) goto LAB_00c8d2e0;
                                if ((*(uint *)(lVar7 + 0x18) <= uVar1) ||
                                   (*(uint *)(lVar7 + 0x18) <= uVar9)) goto LAB_00c8d2d4;
                                native_System_Collections_Generic_List_Vector2___Add_d293ec
                                          (*(undefined4 *)(lVar7 + 0x20 + lVar8),
                                           *(undefined4 *)(lVar7 + 0x20 + uVar9 * 8 + 4),param_7,
                                           _Method_System_Collections_Generic_List_Vector2__Add___12dd4b0
                                          );
                                uVar9 = uVar2;
                                if (*(char *)((long)param_5 + 0x1a4) == '\0') {
                                  if (param_8 == 0) goto LAB_00c8d2e0;
                                  native_System_Collections_Generic_List_Color___Add_d07158
                                            (*param_11,param_11[1],param_11[2],param_11[3],param_8,
                                             _Method_System_Collections_Generic_List_Color__Add___12dc690
                                            );
                                  native_System_Collections_Generic_List_Color___Add_d07158
                                            (*param_11,param_11[1],param_11[2],param_11[3],param_8,
                                             _Method_System_Collections_Generic_List_Color__Add___12dc690
                                            );
                                  native_System_Collections_Generic_List_Color___Add_d07158
                                            (*param_11,param_11[1],param_11[2],param_11[3],param_8,
                                             _Method_System_Collections_Generic_List_Color__Add___12dc690
                                            );
                                  native_System_Collections_Generic_List_Color___Add_d07158
                                            (*param_11,param_11[1],param_11[2],param_11[3],param_8,
                                             _Method_System_Collections_Generic_List_Color__Add___12dc690
                                            );
                                }
                                else {
                                  native_UIBasicSprite__AddVertexColours_c8f76c
                                            (param_5,param_8,param_11);
                                  native_UIBasicSprite__AddVertexColours_c8f76c
                                            (param_5,param_8,param_11);
                                  native_UIBasicSprite__AddVertexColours_c8f76c
                                            (param_5,param_8,param_11);
                                  native_UIBasicSprite__AddVertexColours_c8f76c
                                            (param_5,param_8,param_11);
                                }
                              }
                            } while (uVar9 < 3);
                            bVar5 = 1 < uVar10;
                            uVar10 = uVar1;
                            if (bVar5) {
                              return;
                            }
                          } while( true );
                        }
                      }
                    }
                  }
                }
              }
              goto LAB_00c8d2d4;
            }
          }
          else {
            if (((*(ushort *)(_UIBasicSprite_TypeInfo_12d6400 + 0x132) >> 10 & 1) != 0) &&
               (*(int *)(_UIBasicSprite_TypeInfo_12d6400 + 0xe0) == 0)) {
              native_sub_4327ec();
            }
            lVar7 = _UIBasicSprite_TypeInfo_12d6400;
            lVar8 = **(long **)(_UIBasicSprite_TypeInfo_12d6400 + 0xb8);
            if (lVar8 != 0) {
              if ((*(int *)(lVar8 + 0x18) != 1) && (*(int *)(lVar8 + 0x18) != 0)) {
                *(float *)(lVar8 + 0x2c) = fVar12 + *(float *)(lVar8 + 0x24);
                lVar8 = **(long **)(lVar7 + 0xb8);
                if (lVar8 == 0) goto LAB_00c8d2e0;
                if (3 < *(uint *)(lVar8 + 0x18)) {
                  *(float *)(lVar8 + 0x34) = *(float *)(lVar8 + 0x3c) - fVar4;
                  lVar7 = *(long *)(*(long *)(lVar7 + 0xb8) + 8);
                  if (lVar7 == 0) goto LAB_00c8d2e0;
                  uVar13 = native_UnityEngine_Rect__get_yMin_763644(param_5 + 0x3b,0);
                  if (*(int *)(lVar7 + 0x18) != 0) {
                    *(undefined4 *)(lVar7 + 0x24) = uVar13;
                    lVar7 = *(long *)(*(long *)(_UIBasicSprite_TypeInfo_12d6400 + 0xb8) + 8);
                    if (lVar7 == 0) goto LAB_00c8d2e0;
                    uVar13 = native_UnityEngine_Rect__get_yMin_763644(param_5 + 0x39,0);
                    if (1 < *(uint *)(lVar7 + 0x18)) {
                      *(undefined4 *)(lVar7 + 0x2c) = uVar13;
                      lVar7 = *(long *)(*(long *)(_UIBasicSprite_TypeInfo_12d6400 + 0xb8) + 8);
                      if (lVar7 == 0) goto LAB_00c8d2e0;
                      uVar13 = native_UnityEngine_Rect__get_yMax_76366c(param_5 + 0x39,0);
                      if (2 < *(uint *)(lVar7 + 0x18)) {
                        *(undefined4 *)(lVar7 + 0x34) = uVar13;
                        lVar7 = *(long *)(*(long *)(_UIBasicSprite_TypeInfo_12d6400 + 0xb8) + 8);
                        if (lVar7 == 0) goto LAB_00c8d2e0;
                        uVar13 = native_UnityEngine_Rect__get_yMax_76366c(param_5 + 0x3b,0);
                        if (3 < *(uint *)(lVar7 + 0x18)) {
                          *(undefined4 *)(lVar7 + 0x3c) = uVar13;
                          goto LAB_00c8cec4;
                        }
                      }
                    }
                  }
                }
              }
              goto LAB_00c8d2d4;
            }
          }
        }
      }
    }
  }
LAB_00c8d2e0:
                    /* WARNING: Subroutine does not return */
  native_sub_432810();
}



/* UIBasicSprite$$AddVertexColours @ 0xc8f76c
 * void UIBasicSprite__AddVertexColours (UIBasicSprite_o* __this, System_Collections_Generic_List_Color__o* cols, UnityEngine_Color_o* color, int32_t x, int32_t y, const MethodInfo* method); */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* UIBasicSprite$$AddVertexColours
   void UIBasicSprite__AddVertexColours (UIBasicSprite_o* __this,
   System_Collections_Generic_List_Color__o* cols, UnityEngine_Color_o* color, int32_t x, int32_t y,
   const MethodInfo* method); */

void native_UIBasicSprite__AddVertexColours_c8f76c
               (undefined1 param_1 [16],float param_2,float param_3,float param_4,long *param_5,
               long param_6,undefined4 *param_7,undefined8 param_8,uint param_9)

{
  float fVar1;
  float fVar2;
  int iVar3;
  float fVar4;
  float fVar5;
  undefined4 uVar6;
  ulong uVar7;
  undefined4 uVar8;
  undefined4 uVar9;
  undefined4 uVar10;
  undefined4 uVar11;
  undefined4 uVar12;
  uint uVar13;
  undefined4 uVar15;
  ulong uVar16;
  undefined4 uVar17;
  ulong uVar18;
  undefined4 uVar19;
  undefined8 uStack_70;
  undefined8 uStack_68;
  ulong uVar14;
  
  if ((bRam0000000001342877 & 1) == 0) {
    native_sub_43273c(&Method_System_Collections_Generic_List_Color__Add___12dc690);
    bRam0000000001342877 = 1;
  }
  fVar4 = (float)(**(code **)(*param_5 + 0x3d8))(param_5,*(undefined8 *)(*param_5 + 0x3e0));
  fVar5 = (float)(**(code **)(*param_5 + 0x458))(param_5,*(undefined8 *)(*param_5 + 0x460));
  uStack_70 = 0;
  uStack_68 = 0;
  native_UnityEngine_Vector4___ctor_776f24
            (fVar4 * fVar5,param_2 * fVar5,param_3 * fVar5,param_4 * fVar5,&uStack_70,0);
  fVar4 = (float)uStack_70;
  fVar5 = uStack_70._4_4_;
  fVar1 = (float)uStack_68;
  fVar2 = uStack_68._4_4_;
  iVar3 = (**(code **)(*param_5 + 0x428))(param_5,*(undefined8 *)(*param_5 + 0x430));
  if ((iVar3 == 0) || ((((fVar4 == 0.0 && (fVar5 == 0.0)) && (fVar1 == 0.0)) && (fVar2 == 0.0)))) {
    if (param_9 - 2 < 2) goto LAB_00c8f8d8;
    if (1 < param_9) {
      return;
    }
code_r0x00c8f86c:
    uVar6 = *param_7;
    uVar8 = param_7[1];
    uVar10 = param_7[2];
    uVar12 = param_7[3];
    uVar7 = (ulong)*(uint *)(param_5 + 0x37);
    uVar16 = (ulong)*(uint *)((long)param_5 + 0x1bc);
    uVar18 = (ulong)*(uint *)(param_5 + 0x38);
    uVar14 = (ulong)*(uint *)((long)param_5 + 0x1c4);
  }
  else {
    switch(param_9) {
    case 0:
      goto code_r0x00c8f86c;
    case 1:
      uVar6 = (undefined4)param_5[0x37];
      uVar8 = *(undefined4 *)((long)param_5 + 0x1bc);
      uVar10 = (undefined4)param_5[0x38];
      uVar13 = *(uint *)((long)param_5 + 0x1c4);
      uVar12 = (undefined4)param_5[0x35];
      uVar15 = *(undefined4 *)((long)param_5 + 0x1ac);
      uVar17 = (undefined4)param_5[0x36];
      uVar19 = *(undefined4 *)((long)param_5 + 0x1b4);
      break;
    case 2:
      uVar6 = (undefined4)param_5[0x35];
      uVar8 = *(undefined4 *)((long)param_5 + 0x1ac);
      uVar10 = (undefined4)param_5[0x36];
      uVar13 = *(uint *)((long)param_5 + 0x1b4);
      uVar12 = (undefined4)param_5[0x37];
      uVar15 = *(undefined4 *)((long)param_5 + 0x1bc);
      uVar17 = (undefined4)param_5[0x38];
      uVar19 = *(undefined4 *)((long)param_5 + 0x1c4);
      break;
    case 3:
LAB_00c8f8d8:
      uVar6 = *param_7;
      uVar8 = param_7[1];
      uVar10 = param_7[2];
      uVar12 = param_7[3];
      uVar7 = (ulong)*(uint *)(param_5 + 0x35);
      uVar16 = (ulong)*(uint *)((long)param_5 + 0x1ac);
      uVar18 = (ulong)*(uint *)(param_5 + 0x36);
      uVar14 = (ulong)*(uint *)((long)param_5 + 0x1b4);
      goto LAB_00c8f94c;
    default:
      goto LAB_00c8f96c;
    }
    uVar14 = (ulong)uVar13;
    uVar11 = 0;
    uVar9 = 0;
    uVar7 = native_UnityEngine_Color__Lerp_8d9d50
                      (uVar6,uVar8,uVar10,uVar14,uVar12,uVar15,uVar17,uVar19,0);
    uVar18 = CONCAT44(uVar11,uVar10);
    uVar10 = param_7[2];
    uVar12 = param_7[3];
    uVar16 = CONCAT44(uVar9,uVar8);
    uVar6 = *param_7;
    uVar8 = param_7[1];
  }
LAB_00c8f94c:
  native_UnityEngine_Color__op_Multiply_8d9c68
            (uVar6,uVar8,uVar10,uVar12,uVar7,uVar16,uVar18,uVar14,0);
  if (param_6 == 0) {
                    /* WARNING: Subroutine does not return */
    native_sub_432810();
  }
  native_System_Collections_Generic_List_Color___Add_d07158
            (param_6,_Method_System_Collections_Generic_List_Color__Add___12dc690);
LAB_00c8f96c:
  return;
}



/* UIBasicSprite$$TiledFill @ 0xc8e1f8
 * void UIBasicSprite__TiledFill (UIBasicSprite_o* __this, System_Collections_Generic_List_Vector3__o* verts, System_Collections_Generic_List_Vector2__o* uvs, System_Collections_Generic_List_Color__o* cols, UnityEngine_Vector4_o* v, UnityEngine_Color_o* c, const MethodInfo* method); */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* UIBasicSprite$$TiledFill
   void UIBasicSprite__TiledFill (UIBasicSprite_o* __this,
   System_Collections_Generic_List_Vector3__o* verts, System_Collections_Generic_List_Vector2__o*
   uvs, System_Collections_Generic_List_Color__o* cols, UnityEngine_Vector4_o* v,
   UnityEngine_Color_o* c, const MethodInfo* method); */

void native_UIBasicSprite__TiledFill_c8e1f8
               (long *param_1,long param_2,long param_3,long param_4,float *param_5,
               undefined4 *param_6)

{
  long *plVar1;
  int iVar2;
  int iVar3;
  long *plVar4;
  ulong uVar5;
  float fVar6;
  float fVar7;
  float fVar8;
  float fVar9;
  undefined8 uVar10;
  undefined8 uVar11;
  ulong uVar12;
  ulong uVar13;
  float fVar14;
  float fVar15;
  float fVar16;
  float in_s3;
  float fVar17;
  float fVar18;
  float fStack_ac;
  float fStack_a4;
  uint uStack_58;
  
  if ((bRam0000000001342878 & 1) == 0) {
    native_sub_43273c(&Method_System_Collections_Generic_List_Vector2__Add___12dd4b0);
    native_sub_43273c(&Method_System_Collections_Generic_List_Color__Add___12dc690);
    native_sub_43273c(&Method_System_Collections_Generic_List_Vector3__Add___12dd4e0);
    native_sub_43273c(&UnityEngine_Object_TypeInfo_12d54e0);
    bRam0000000001342878 = 1;
  }
  plVar4 = (long *)(**(code **)(*param_1 + 0x328))(param_1,*(undefined8 *)(*param_1 + 0x330));
  if (((*(byte *)(_UnityEngine_Object_TypeInfo_12d54e0 + 0x133) >> 2 & 1) != 0) &&
     (*(int *)(_UnityEngine_Object_TypeInfo_12d54e0 + 0xe0) == 0)) {
    native_sub_4327ec(_UnityEngine_Object_TypeInfo_12d54e0);
  }
  uVar5 = native_UnityEngine_Object__op_Equality_8e9a3c(plVar4,0,0);
  if ((uVar5 & 1) == 0) {
    plVar1 = param_1 + 0x39;
    fVar6 = (float)native_UnityEngine_Rect__get_width_76367c(plVar1,0);
    if (plVar4 == (long *)0x0) {
LAB_00c8e72c:
                    /* WARNING: Subroutine does not return */
      native_sub_432810();
    }
    iVar2 = (**(code **)(*plVar4 + 0x178))(plVar4,*(undefined8 *)(*plVar4 + 0x180));
    fVar7 = (float)native_UnityEngine_Rect__get_height_76368c(plVar1,0);
    iVar3 = (**(code **)(*plVar4 + 0x198))(plVar4,*(undefined8 *)(*plVar4 + 0x1a0));
    fVar8 = (float)(**(code **)(*param_1 + 0x458))(param_1,*(undefined8 *)(*param_1 + 0x460));
    fVar16 = fVar6 * (float)iVar2 * fVar8;
    fVar6 = 2.0;
    if (2.0 <= fVar16) {
      fVar7 = fVar7 * (float)iVar3;
      fVar8 = fVar7 * fVar8;
      if (2.0 <= fVar8) {
        fVar9 = (float)(**(code **)(*param_1 + 0x468))(param_1,*(undefined8 *)(*param_1 + 0x470));
        if ((*(uint *)(param_1 + 0x34) | 2) == 3) {
          uVar10 = native_UnityEngine_Rect__get_xMax_76365c();
          uStack_58 = native_UnityEngine_Rect__get_xMin_76363c(plVar1,0);
          fStack_a4 = (float)(**(code **)(*param_1 + 0x458))
                                       (param_1,*(undefined8 *)(*param_1 + 0x460));
          fStack_a4 = fVar7 * fStack_a4;
          fVar7 = (float)(**(code **)(*param_1 + 0x458))(param_1,*(undefined8 *)(*param_1 + 0x460));
          fVar9 = fVar9 * fVar7;
        }
        else {
          uVar10 = native_UnityEngine_Rect__get_xMin_76363c(plVar1,0);
          uStack_58 = native_UnityEngine_Rect__get_xMax_76365c(plVar1,0);
          fStack_a4 = (float)(**(code **)(*param_1 + 0x458))
                                       (param_1,*(undefined8 *)(*param_1 + 0x460));
          fStack_a4 = fVar9 * fStack_a4;
          fVar9 = (float)(**(code **)(*param_1 + 0x458))(param_1,*(undefined8 *)(*param_1 + 0x460));
          fVar9 = fVar7 * fVar9;
        }
        if ((*(uint *)(param_1 + 0x34) & 0xfffffffe) == 2) {
          uVar11 = native_UnityEngine_Rect__get_yMax_76366c(plVar1,0);
          uVar5 = native_UnityEngine_Rect__get_yMin_763644(plVar1,0);
          fStack_ac = (float)(**(code **)(*param_1 + 0x458))
                                       (param_1,*(undefined8 *)(*param_1 + 0x460));
          fStack_ac = in_s3 * fStack_ac;
          fVar7 = (float)(**(code **)(*param_1 + 0x458))(param_1,*(undefined8 *)(*param_1 + 0x460));
          fVar6 = fVar6 * fVar7;
        }
        else {
          uVar11 = native_UnityEngine_Rect__get_yMin_763644(plVar1,0);
          uVar5 = native_UnityEngine_Rect__get_yMax_76366c(plVar1,0);
          fStack_ac = (float)(**(code **)(*param_1 + 0x458))
                                       (param_1,*(undefined8 *)(*param_1 + 0x460));
          fStack_ac = fVar6 * fStack_ac;
          fVar6 = (float)(**(code **)(*param_1 + 0x458))(param_1,*(undefined8 *)(*param_1 + 0x460));
          fVar6 = in_s3 * fVar6;
        }
        fVar14 = param_5[1];
        fVar7 = param_5[3];
        if (fVar14 < fVar7) {
          uVar13 = uVar5;
          do {
            fVar17 = *param_5;
            fVar14 = fStack_ac + fVar14;
            fVar18 = fVar8 + fVar14;
            uVar12 = uVar13;
            if (fVar7 < fVar18) {
              uVar12 = native_UnityEngine_Mathf__Lerp_8e5224
                                 (uVar11,uVar13,(fVar7 - fVar14) / fVar8,0);
              fVar7 = param_5[3];
              fVar18 = fVar7;
            }
            fVar15 = param_5[2];
            if (fVar17 < fVar15) {
              do {
                fVar17 = fStack_a4 + fVar17;
                uVar13 = (ulong)uStack_58;
                fVar7 = fVar16 + fVar17;
                if (fVar15 < fVar7) {
                  uVar13 = native_UnityEngine_Mathf__Lerp_8e5224
                                     (uVar10,uStack_58,(fVar15 - fVar17) / fVar16,0);
                  fVar7 = param_5[2];
                }
                if (param_2 == 0) goto LAB_00c8e72c;
                native_System_Collections_Generic_List_Vector3___Add_d2be08
                          (fVar17,fVar14,0,param_2,
                           _Method_System_Collections_Generic_List_Vector3__Add___12dd4e0);
                native_System_Collections_Generic_List_Vector3___Add_d2be08
                          (fVar17,fVar18,0,param_2,
                           _Method_System_Collections_Generic_List_Vector3__Add___12dd4e0);
                native_System_Collections_Generic_List_Vector3___Add_d2be08
                          (fVar7,fVar18,0,param_2,
                           _Method_System_Collections_Generic_List_Vector3__Add___12dd4e0);
                native_System_Collections_Generic_List_Vector3___Add_d2be08
                          (fVar7,fVar14,0,param_2,
                           _Method_System_Collections_Generic_List_Vector3__Add___12dd4e0);
                if (param_3 == 0) goto LAB_00c8e72c;
                native_System_Collections_Generic_List_Vector2___Add_d293ec
                          (uVar10,uVar11,param_3,
                           _Method_System_Collections_Generic_List_Vector2__Add___12dd4b0);
                native_System_Collections_Generic_List_Vector2___Add_d293ec
                          (uVar10,uVar12,param_3,
                           _Method_System_Collections_Generic_List_Vector2__Add___12dd4b0);
                native_System_Collections_Generic_List_Vector2___Add_d293ec
                          (uVar13,uVar12,param_3,
                           _Method_System_Collections_Generic_List_Vector2__Add___12dd4b0);
                native_System_Collections_Generic_List_Vector2___Add_d293ec
                          (uVar13,uVar11,param_3,
                           _Method_System_Collections_Generic_List_Vector2__Add___12dd4b0);
                if (param_4 == 0) goto LAB_00c8e72c;
                native_System_Collections_Generic_List_Color___Add_d07158
                          (*param_6,param_6[1],param_6[2],param_6[3],param_4,
                           _Method_System_Collections_Generic_List_Color__Add___12dc690);
                native_System_Collections_Generic_List_Color___Add_d07158
                          (*param_6,param_6[1],param_6[2],param_6[3],param_4,
                           _Method_System_Collections_Generic_List_Color__Add___12dc690);
                native_System_Collections_Generic_List_Color___Add_d07158
                          (*param_6,param_6[1],param_6[2],param_6[3],param_4,
                           _Method_System_Collections_Generic_List_Color__Add___12dc690);
                native_System_Collections_Generic_List_Color___Add_d07158
                          (*param_6,param_6[1],param_6[2],param_6[3],param_4,
                           _Method_System_Collections_Generic_List_Color__Add___12dc690);
                fVar15 = param_5[2];
                fVar17 = fVar16 + fVar9 + fVar17;
              } while (fVar17 < fVar15);
              fVar7 = param_5[3];
              uVar13 = uVar5 & 0xffffffff;
            }
            fVar14 = fVar8 + fVar6 + fVar14;
          } while (fVar14 < fVar7);
        }
      }
    }
  }
  return;
}



/* UIBasicSprite$$FilledFill @ 0xc8d2e4
 * void UIBasicSprite__FilledFill (UIBasicSprite_o* __this, System_Collections_Generic_List_Vector3__o* verts, System_Collections_Generic_List_Vector2__o* uvs, System_Collections_Generic_List_Color__o* cols, UnityEngine_Vector4_o* v, UnityEngine_Vector4_o* u, UnityEngine_Color_o* c, const MethodInfo* method); */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* UIBasicSprite$$FilledFill
   void UIBasicSprite__FilledFill (UIBasicSprite_o* __this,
   System_Collections_Generic_List_Vector3__o* verts, System_Collections_Generic_List_Vector2__o*
   uvs, System_Collections_Generic_List_Color__o* cols, UnityEngine_Vector4_o* v,
   UnityEngine_Vector4_o* u, UnityEngine_Color_o* c, const MethodInfo* method); */

void native_UIBasicSprite__FilledFill_c8d2e4
               (long param_1,long param_2,long param_3,long param_4,float *param_5,float *param_6,
               undefined4 *param_7)

{
  bool bVar1;
  undefined8 uVar2;
  char cVar3;
  byte bVar4;
  int iVar5;
  ulong uVar6;
  byte bVar7;
  long lVar8;
  long lVar9;
  uint uVar10;
  float fVar11;
  undefined4 uVar12;
  undefined4 uVar13;
  undefined4 uVar14;
  undefined4 uVar15;
  undefined8 uVar16;
  undefined8 uVar17;
  float fVar18;
  undefined4 uVar19;
  undefined4 uVar20;
  
  if ((bRam0000000001342879 & 1) == 0) {
    native_sub_43273c(&Method_System_Collections_Generic_List_Vector2__Add___12dd4b0);
    native_sub_43273c(&Method_System_Collections_Generic_List_Color__Add___12dc690);
    native_sub_43273c(&Method_System_Collections_Generic_List_Vector3__Add___12dd4e0);
    native_sub_43273c(&NGUIMath_TypeInfo_12d53b8);
    native_sub_43273c(&UIBasicSprite_TypeInfo_12d6400);
    bRam0000000001342879 = 1;
  }
  fVar11 = *(float *)(param_1 + 0x198);
  if (fVar11 < 0.001) {
    return;
  }
  if (*(int *)(param_1 + 0x194) == 1) {
    fVar18 = fVar11 * (param_6[3] - param_6[1]);
    if (*(char *)(param_1 + 0x19c) == '\0') {
      param_5[3] = param_5[1] + fVar11 * (param_5[3] - param_5[1]);
      param_6[3] = fVar18 + param_6[1];
    }
    else {
      param_5[1] = param_5[3] - fVar11 * (param_5[3] - param_5[1]);
      param_6[1] = param_6[3] - fVar18;
    }
  }
  else if (*(int *)(param_1 + 0x194) == 0) {
    fVar18 = fVar11 * (param_6[2] - *param_6);
    if (*(char *)(param_1 + 0x19c) == '\0') {
      param_5[2] = *param_5 + fVar11 * (param_5[2] - *param_5);
      param_6[2] = fVar18 + *param_6;
    }
    else {
      *param_5 = param_5[2] - fVar11 * (param_5[2] - *param_5);
      *param_6 = param_6[2] - fVar18;
    }
  }
  if (((*(byte *)(_UIBasicSprite_TypeInfo_12d6400 + 0x133) >> 2 & 1) != 0) &&
     (*(int *)(_UIBasicSprite_TypeInfo_12d6400 + 0xe0) == 0)) {
    native_sub_4327ec();
  }
  lVar8 = **(long **)(_UIBasicSprite_TypeInfo_12d6400 + 0xb8);
  if (lVar8 == 0) goto LAB_00c8e1e8;
  if (*(int *)(lVar8 + 0x18) == 0) {
LAB_00c8e1ec:
    uVar16 = native_sub_43283c();
                    /* WARNING: Subroutine does not return */
    native_sub_4327dc(uVar16,0);
  }
  *(undefined8 *)(lVar8 + 0x20) = *(undefined8 *)param_5;
  lVar8 = **(long **)(_UIBasicSprite_TypeInfo_12d6400 + 0xb8);
  if (lVar8 == 0) goto LAB_00c8e1e8;
  if (*(uint *)(lVar8 + 0x18) < 2) goto LAB_00c8e1ec;
  fVar11 = param_5[3];
  *(float *)(lVar8 + 0x28) = *param_5;
  *(float *)(lVar8 + 0x2c) = fVar11;
  lVar8 = **(long **)(_UIBasicSprite_TypeInfo_12d6400 + 0xb8);
  if (lVar8 == 0) goto LAB_00c8e1e8;
  if (*(uint *)(lVar8 + 0x18) < 3) goto LAB_00c8e1ec;
  *(undefined8 *)(lVar8 + 0x30) = *(undefined8 *)(param_5 + 2);
  lVar8 = **(long **)(_UIBasicSprite_TypeInfo_12d6400 + 0xb8);
  if (lVar8 == 0) goto LAB_00c8e1e8;
  if (*(uint *)(lVar8 + 0x18) < 4) goto LAB_00c8e1ec;
  uVar16 = NEON_rev64(*(undefined8 *)(param_5 + 1),4);
  *(undefined8 *)(lVar8 + 0x38) = uVar16;
  lVar8 = *(long *)(*(long *)(_UIBasicSprite_TypeInfo_12d6400 + 0xb8) + 8);
  if (lVar8 == 0) goto LAB_00c8e1e8;
  if (*(int *)(lVar8 + 0x18) == 0) goto LAB_00c8e1ec;
  *(undefined8 *)(lVar8 + 0x20) = *(undefined8 *)param_6;
  lVar8 = *(long *)(*(long *)(_UIBasicSprite_TypeInfo_12d6400 + 0xb8) + 8);
  if (lVar8 == 0) goto LAB_00c8e1e8;
  if (*(uint *)(lVar8 + 0x18) < 2) goto LAB_00c8e1ec;
  fVar11 = param_6[3];
  *(float *)(lVar8 + 0x28) = *param_6;
  *(float *)(lVar8 + 0x2c) = fVar11;
  lVar8 = *(long *)(*(long *)(_UIBasicSprite_TypeInfo_12d6400 + 0xb8) + 8);
  if (lVar8 == 0) goto LAB_00c8e1e8;
  if (*(uint *)(lVar8 + 0x18) < 3) goto LAB_00c8e1ec;
  *(undefined8 *)(lVar8 + 0x30) = *(undefined8 *)(param_6 + 2);
  lVar8 = *(long *)(*(long *)(_UIBasicSprite_TypeInfo_12d6400 + 0xb8) + 8);
  if (lVar8 == 0) goto LAB_00c8e1e8;
  if (*(uint *)(lVar8 + 0x18) < 4) goto LAB_00c8e1ec;
  uVar19 = 0x3f800000;
  uVar16 = NEON_rev64(*(undefined8 *)(param_6 + 1),4);
  *(undefined8 *)(lVar8 + 0x38) = uVar16;
  fVar11 = *(float *)(param_1 + 0x198);
  if (fVar11 < 1.0) {
    iVar5 = *(int *)(param_1 + 0x194);
    if (iVar5 == 2) {
      if (((*(byte *)(_UIBasicSprite_TypeInfo_12d6400 + 0x133) >> 2 & 1) != 0) &&
         (*(int *)(_UIBasicSprite_TypeInfo_12d6400 + 0xe0) == 0)) {
        native_sub_4327ec();
        fVar11 = *(float *)(param_1 + 0x198);
      }
      uVar6 = native_UIBasicSprite__RadialCut_c8f990
                        (fVar11,**(undefined8 **)(_UIBasicSprite_TypeInfo_12d6400 + 0xb8),
                         (*(undefined8 **)(_UIBasicSprite_TypeInfo_12d6400 + 0xb8))[1],
                         *(undefined1 *)(param_1 + 0x19c),0);
      if ((uVar6 & 1) == 0) {
        return;
      }
      lVar8 = 0;
      uVar6 = 0xffffffffffffffff;
      while( true ) {
        if (((*(byte *)(_UIBasicSprite_TypeInfo_12d6400 + 0x133) >> 2 & 1) != 0) &&
           (*(int *)(_UIBasicSprite_TypeInfo_12d6400 + 0xe0) == 0)) {
          native_sub_4327ec();
        }
        lVar9 = **(long **)(_UIBasicSprite_TypeInfo_12d6400 + 0xb8);
        if (lVar9 == 0) break;
        if ((ulong)*(uint *)(lVar9 + 0x18) <= uVar6 + 1) goto LAB_00c8e1ec;
        if (param_2 == 0) break;
        native_System_Collections_Generic_List_Vector3___Add_d2be08
                  (*(undefined4 *)(lVar9 + lVar8 + 0x20),*(undefined4 *)(lVar9 + lVar8 + 0x24),0,
                   param_2,_Method_System_Collections_Generic_List_Vector3__Add___12dd4e0);
        lVar9 = *(long *)(*(long *)(_UIBasicSprite_TypeInfo_12d6400 + 0xb8) + 8);
        if (lVar9 == 0) break;
        if ((ulong)*(uint *)(lVar9 + 0x18) <= uVar6 + 1) goto LAB_00c8e1ec;
        if ((param_3 == 0) ||
           (native_System_Collections_Generic_List_Vector2___Add_d293ec
                      (*(undefined4 *)(lVar9 + lVar8 + 0x20),*(undefined4 *)(lVar9 + lVar8 + 0x24),
                       param_3,_Method_System_Collections_Generic_List_Vector2__Add___12dd4b0),
           param_4 == 0)) break;
        native_System_Collections_Generic_List_Color___Add_d07158
                  (*param_7,param_7[1],param_7[2],param_7[3],param_4,
                   _Method_System_Collections_Generic_List_Color__Add___12dc690);
        uVar6 = uVar6 + 1;
        lVar8 = lVar8 + 8;
        if (2 < uVar6) {
          return;
        }
      }
      goto LAB_00c8e1e8;
    }
    if (iVar5 == 3) {
      bVar7 = 0;
      while( true ) {
        uVar15 = 0x3f000000;
        if (bVar7 != 0) {
          uVar15 = uVar19;
        }
        uVar13 = 0;
        if (bVar7 != 0) {
          uVar13 = 0x3f000000;
        }
        if (((*(byte *)(_UIBasicSprite_TypeInfo_12d6400 + 0x133) >> 2 & 1) != 0) &&
           (*(int *)(_UIBasicSprite_TypeInfo_12d6400 + 0xe0) == 0)) {
          native_sub_4327ec();
        }
        lVar8 = **(long **)(_UIBasicSprite_TypeInfo_12d6400 + 0xb8);
        if (lVar8 == 0) break;
        uVar14 = native_UnityEngine_Mathf__Lerp_8e5224(*param_5,param_5[2],uVar13,0);
        if (*(int *)(lVar8 + 0x18) == 0) goto LAB_00c8e1ec;
        *(undefined4 *)(lVar8 + 0x20) = uVar14;
        lVar8 = **(long **)(_UIBasicSprite_TypeInfo_12d6400 + 0xb8);
        if (lVar8 == 0) break;
        if ((*(int *)(lVar8 + 0x18) == 1) || (*(int *)(lVar8 + 0x18) == 0)) goto LAB_00c8e1ec;
        *(undefined4 *)(lVar8 + 0x28) = *(undefined4 *)(lVar8 + 0x20);
        lVar8 = **(long **)(_UIBasicSprite_TypeInfo_12d6400 + 0xb8);
        if (lVar8 == 0) break;
        uVar14 = native_UnityEngine_Mathf__Lerp_8e5224(*param_5,param_5[2],uVar15,0);
        if (*(uint *)(lVar8 + 0x18) < 3) goto LAB_00c8e1ec;
        *(undefined4 *)(lVar8 + 0x30) = uVar14;
        lVar8 = **(long **)(_UIBasicSprite_TypeInfo_12d6400 + 0xb8);
        if (lVar8 == 0) break;
        if ((*(uint *)(lVar8 + 0x18) < 3) || (*(uint *)(lVar8 + 0x18) == 3)) goto LAB_00c8e1ec;
        *(undefined4 *)(lVar8 + 0x38) = *(undefined4 *)(lVar8 + 0x30);
        lVar8 = **(long **)(_UIBasicSprite_TypeInfo_12d6400 + 0xb8);
        if (lVar8 == 0) break;
        uVar14 = native_UnityEngine_Mathf__Lerp_8e5224(param_5[1],param_5[3],0,0);
        if (*(int *)(lVar8 + 0x18) == 0) goto LAB_00c8e1ec;
        *(undefined4 *)(lVar8 + 0x24) = uVar14;
        lVar8 = **(long **)(_UIBasicSprite_TypeInfo_12d6400 + 0xb8);
        if (lVar8 == 0) break;
        uVar14 = native_UnityEngine_Mathf__Lerp_8e5224(param_5[1],param_5[3],0x3f800000,0);
        if (*(uint *)(lVar8 + 0x18) < 2) goto LAB_00c8e1ec;
        *(undefined4 *)(lVar8 + 0x2c) = uVar14;
        lVar8 = _UIBasicSprite_TypeInfo_12d6400;
        lVar9 = **(long **)(_UIBasicSprite_TypeInfo_12d6400 + 0xb8);
        if (lVar9 == 0) break;
        if ((*(uint *)(lVar9 + 0x18) < 2) || (*(uint *)(lVar9 + 0x18) == 2)) goto LAB_00c8e1ec;
        *(undefined4 *)(lVar9 + 0x34) = *(undefined4 *)(lVar9 + 0x2c);
        lVar9 = **(long **)(lVar8 + 0xb8);
        if (lVar9 == 0) break;
        if ((*(uint *)(lVar9 + 0x18) == 0) || (*(uint *)(lVar9 + 0x18) < 4)) goto LAB_00c8e1ec;
        *(undefined4 *)(lVar9 + 0x3c) = *(undefined4 *)(lVar9 + 0x24);
        lVar8 = *(long *)(*(long *)(lVar8 + 0xb8) + 8);
        if (lVar8 == 0) break;
        uVar13 = native_UnityEngine_Mathf__Lerp_8e5224(*param_6,param_6[2],uVar13,0);
        if (*(int *)(lVar8 + 0x18) == 0) goto LAB_00c8e1ec;
        *(undefined4 *)(lVar8 + 0x20) = uVar13;
        lVar8 = *(long *)(*(long *)(_UIBasicSprite_TypeInfo_12d6400 + 0xb8) + 8);
        if (lVar8 == 0) break;
        if ((*(int *)(lVar8 + 0x18) == 1) || (*(int *)(lVar8 + 0x18) == 0)) goto LAB_00c8e1ec;
        *(undefined4 *)(lVar8 + 0x28) = *(undefined4 *)(lVar8 + 0x20);
        lVar8 = *(long *)(*(long *)(_UIBasicSprite_TypeInfo_12d6400 + 0xb8) + 8);
        if (lVar8 == 0) break;
        uVar15 = native_UnityEngine_Mathf__Lerp_8e5224(*param_6,param_6[2],uVar15,0);
        if (*(uint *)(lVar8 + 0x18) < 3) goto LAB_00c8e1ec;
        *(undefined4 *)(lVar8 + 0x30) = uVar15;
        lVar8 = *(long *)(*(long *)(_UIBasicSprite_TypeInfo_12d6400 + 0xb8) + 8);
        if (lVar8 == 0) break;
        if ((*(uint *)(lVar8 + 0x18) < 3) || (*(uint *)(lVar8 + 0x18) == 3)) goto LAB_00c8e1ec;
        *(undefined4 *)(lVar8 + 0x38) = *(undefined4 *)(lVar8 + 0x30);
        lVar8 = *(long *)(*(long *)(_UIBasicSprite_TypeInfo_12d6400 + 0xb8) + 8);
        if (lVar8 == 0) break;
        uVar15 = native_UnityEngine_Mathf__Lerp_8e5224(param_6[1],param_6[3],0,0);
        if (*(int *)(lVar8 + 0x18) == 0) goto LAB_00c8e1ec;
        *(undefined4 *)(lVar8 + 0x24) = uVar15;
        lVar8 = *(long *)(*(long *)(_UIBasicSprite_TypeInfo_12d6400 + 0xb8) + 8);
        if (lVar8 == 0) break;
        uVar15 = native_UnityEngine_Mathf__Lerp_8e5224(param_6[1],param_6[3],0x3f800000,0);
        if (*(uint *)(lVar8 + 0x18) < 2) goto LAB_00c8e1ec;
        *(undefined4 *)(lVar8 + 0x2c) = uVar15;
        lVar8 = _UIBasicSprite_TypeInfo_12d6400;
        lVar9 = *(long *)(*(long *)(_UIBasicSprite_TypeInfo_12d6400 + 0xb8) + 8);
        if (lVar9 == 0) break;
        if ((*(uint *)(lVar9 + 0x18) < 2) || (*(uint *)(lVar9 + 0x18) == 2)) goto LAB_00c8e1ec;
        *(undefined4 *)(lVar9 + 0x34) = *(undefined4 *)(lVar9 + 0x2c);
        lVar9 = *(long *)(*(long *)(lVar8 + 0xb8) + 8);
        if (lVar9 == 0) break;
        if ((*(uint *)(lVar9 + 0x18) == 0) || (*(uint *)(lVar9 + 0x18) < 4)) goto LAB_00c8e1ec;
        *(undefined4 *)(lVar9 + 0x3c) = *(undefined4 *)(lVar9 + 0x24);
        fVar11 = *(float *)(param_1 + 0x198);
        bVar4 = *(byte *)(param_1 + 0x19c);
        if (((*(byte *)(lVar8 + 0x133) >> 2 & 1) != 0) && (*(int *)(lVar8 + 0xe0) == 0)) {
          native_sub_4327ec();
        }
        uVar16 = **(undefined8 **)(_UIBasicSprite_TypeInfo_12d6400 + 0xb8);
        uVar2 = (*(undefined8 **)(_UIBasicSprite_TypeInfo_12d6400 + 0xb8))[1];
        uVar17 = native_UnityEngine_Mathf__Clamp01_8d9d9c
                           ((fVar11 + fVar11) - (float)(bVar7 ^ bVar4),0);
        cVar3 = *(char *)(param_1 + 0x19c);
        if (((*(byte *)(_NGUIMath_TypeInfo_12d53b8 + 0x133) >> 2 & 1) != 0) &&
           (*(int *)(_NGUIMath_TypeInfo_12d53b8 + 0xe0) == 0)) {
          native_sub_4327ec();
        }
        uVar15 = native_NGUIMath__RepeatIndex_804e00(bVar7 + 3,4,0);
        uVar6 = native_UIBasicSprite__RadialCut_c8f990(uVar17,uVar16,uVar2,cVar3 == '\0',uVar15);
        if ((uVar6 & 1) != 0) {
          lVar8 = 0;
          uVar6 = 0xffffffffffffffff;
          do {
            if (((*(byte *)(_UIBasicSprite_TypeInfo_12d6400 + 0x133) >> 2 & 1) != 0) &&
               (*(int *)(_UIBasicSprite_TypeInfo_12d6400 + 0xe0) == 0)) {
              native_sub_4327ec();
            }
            lVar9 = **(long **)(_UIBasicSprite_TypeInfo_12d6400 + 0xb8);
            if (lVar9 == 0) goto LAB_00c8e1e8;
            if ((ulong)*(uint *)(lVar9 + 0x18) <= uVar6 + 1) goto LAB_00c8e1ec;
            if (param_2 == 0) goto LAB_00c8e1e8;
            native_System_Collections_Generic_List_Vector3___Add_d2be08
                      (*(undefined4 *)(lVar9 + lVar8 + 0x20),*(undefined4 *)(lVar9 + lVar8 + 0x24),0
                       ,param_2,_Method_System_Collections_Generic_List_Vector3__Add___12dd4e0);
            lVar9 = *(long *)(*(long *)(_UIBasicSprite_TypeInfo_12d6400 + 0xb8) + 8);
            if (lVar9 == 0) goto LAB_00c8e1e8;
            if ((ulong)*(uint *)(lVar9 + 0x18) <= uVar6 + 1) goto LAB_00c8e1ec;
            if ((param_3 == 0) ||
               (native_System_Collections_Generic_List_Vector2___Add_d293ec
                          (*(undefined4 *)(lVar9 + lVar8 + 0x20),
                           *(undefined4 *)(lVar9 + lVar8 + 0x24),param_3,
                           _Method_System_Collections_Generic_List_Vector2__Add___12dd4b0),
               param_4 == 0)) goto LAB_00c8e1e8;
            native_System_Collections_Generic_List_Color___Add_d07158
                      (*param_7,param_7[1],param_7[2],param_7[3],param_4,
                       _Method_System_Collections_Generic_List_Color__Add___12dc690);
            uVar6 = uVar6 + 1;
            lVar8 = lVar8 + 8;
          } while (uVar6 < 3);
        }
        bVar1 = bVar7 != 0;
        bVar7 = 1;
        if (bVar1) {
          return;
        }
      }
      goto LAB_00c8e1e8;
    }
    if (iVar5 == 4) {
      uVar15 = 0x3f000000;
      uVar10 = 0;
      while( true ) {
        uVar13 = uVar15;
        uVar14 = uVar19;
        if (uVar10 < 2) {
          uVar13 = 0;
          uVar14 = uVar15;
        }
        uVar16 = 0;
        uVar20 = 0x3f000000;
        if (uVar10 != 0) {
          uVar20 = uVar15;
          if (uVar10 != 3) {
            uVar20 = uVar19;
          }
          uVar16 = 0;
          if (uVar10 != 3) {
            uVar16 = 0x3f000000;
          }
        }
        if (((*(byte *)(_UIBasicSprite_TypeInfo_12d6400 + 0x133) >> 2 & 1) != 0) &&
           (*(int *)(_UIBasicSprite_TypeInfo_12d6400 + 0xe0) == 0)) {
          native_sub_4327ec();
        }
        lVar8 = **(long **)(_UIBasicSprite_TypeInfo_12d6400 + 0xb8);
        if (lVar8 == 0) break;
        uVar12 = native_UnityEngine_Mathf__Lerp_8e5224(*param_5,param_5[2],uVar13,0);
        if (*(int *)(lVar8 + 0x18) == 0) goto LAB_00c8e1ec;
        *(undefined4 *)(lVar8 + 0x20) = uVar12;
        lVar8 = **(long **)(_UIBasicSprite_TypeInfo_12d6400 + 0xb8);
        if (lVar8 == 0) break;
        if ((*(int *)(lVar8 + 0x18) == 1) || (*(int *)(lVar8 + 0x18) == 0)) goto LAB_00c8e1ec;
        *(undefined4 *)(lVar8 + 0x28) = *(undefined4 *)(lVar8 + 0x20);
        lVar8 = **(long **)(_UIBasicSprite_TypeInfo_12d6400 + 0xb8);
        if (lVar8 == 0) break;
        uVar12 = native_UnityEngine_Mathf__Lerp_8e5224(*param_5,param_5[2],uVar14,0);
        if (*(uint *)(lVar8 + 0x18) < 3) goto LAB_00c8e1ec;
        *(undefined4 *)(lVar8 + 0x30) = uVar12;
        lVar8 = **(long **)(_UIBasicSprite_TypeInfo_12d6400 + 0xb8);
        if (lVar8 == 0) break;
        if ((*(uint *)(lVar8 + 0x18) < 3) || (*(uint *)(lVar8 + 0x18) == 3)) goto LAB_00c8e1ec;
        *(undefined4 *)(lVar8 + 0x38) = *(undefined4 *)(lVar8 + 0x30);
        lVar8 = **(long **)(_UIBasicSprite_TypeInfo_12d6400 + 0xb8);
        if (lVar8 == 0) break;
        uVar12 = native_UnityEngine_Mathf__Lerp_8e5224(param_5[1],param_5[3],uVar16,0);
        if (*(int *)(lVar8 + 0x18) == 0) goto LAB_00c8e1ec;
        *(undefined4 *)(lVar8 + 0x24) = uVar12;
        lVar8 = **(long **)(_UIBasicSprite_TypeInfo_12d6400 + 0xb8);
        if (lVar8 == 0) break;
        uVar12 = native_UnityEngine_Mathf__Lerp_8e5224(param_5[1],param_5[3],uVar20,0);
        if (*(uint *)(lVar8 + 0x18) < 2) goto LAB_00c8e1ec;
        *(undefined4 *)(lVar8 + 0x2c) = uVar12;
        lVar8 = _UIBasicSprite_TypeInfo_12d6400;
        lVar9 = **(long **)(_UIBasicSprite_TypeInfo_12d6400 + 0xb8);
        if (lVar9 == 0) break;
        if ((*(uint *)(lVar9 + 0x18) < 2) || (*(uint *)(lVar9 + 0x18) == 2)) goto LAB_00c8e1ec;
        *(undefined4 *)(lVar9 + 0x34) = *(undefined4 *)(lVar9 + 0x2c);
        lVar9 = **(long **)(lVar8 + 0xb8);
        if (lVar9 == 0) break;
        if ((*(uint *)(lVar9 + 0x18) == 0) || (*(uint *)(lVar9 + 0x18) < 4)) goto LAB_00c8e1ec;
        *(undefined4 *)(lVar9 + 0x3c) = *(undefined4 *)(lVar9 + 0x24);
        lVar8 = *(long *)(*(long *)(lVar8 + 0xb8) + 8);
        if (lVar8 == 0) break;
        uVar13 = native_UnityEngine_Mathf__Lerp_8e5224(*param_6,param_6[2],uVar13,0);
        if (*(int *)(lVar8 + 0x18) == 0) goto LAB_00c8e1ec;
        *(undefined4 *)(lVar8 + 0x20) = uVar13;
        lVar8 = *(long *)(*(long *)(_UIBasicSprite_TypeInfo_12d6400 + 0xb8) + 8);
        if (lVar8 == 0) break;
        if ((*(int *)(lVar8 + 0x18) == 1) || (*(int *)(lVar8 + 0x18) == 0)) goto LAB_00c8e1ec;
        *(undefined4 *)(lVar8 + 0x28) = *(undefined4 *)(lVar8 + 0x20);
        lVar8 = *(long *)(*(long *)(_UIBasicSprite_TypeInfo_12d6400 + 0xb8) + 8);
        if (lVar8 == 0) break;
        uVar13 = native_UnityEngine_Mathf__Lerp_8e5224(*param_6,param_6[2],uVar14,0);
        if (*(uint *)(lVar8 + 0x18) < 3) goto LAB_00c8e1ec;
        *(undefined4 *)(lVar8 + 0x30) = uVar13;
        lVar8 = *(long *)(*(long *)(_UIBasicSprite_TypeInfo_12d6400 + 0xb8) + 8);
        if (lVar8 == 0) break;
        if ((*(uint *)(lVar8 + 0x18) < 3) || (*(uint *)(lVar8 + 0x18) == 3)) goto LAB_00c8e1ec;
        *(undefined4 *)(lVar8 + 0x38) = *(undefined4 *)(lVar8 + 0x30);
        lVar8 = *(long *)(*(long *)(_UIBasicSprite_TypeInfo_12d6400 + 0xb8) + 8);
        if (lVar8 == 0) break;
        uVar13 = native_UnityEngine_Mathf__Lerp_8e5224(param_6[1],param_6[3],uVar16,0);
        if (*(int *)(lVar8 + 0x18) == 0) goto LAB_00c8e1ec;
        *(undefined4 *)(lVar8 + 0x24) = uVar13;
        lVar8 = *(long *)(*(long *)(_UIBasicSprite_TypeInfo_12d6400 + 0xb8) + 8);
        if (lVar8 == 0) break;
        uVar13 = native_UnityEngine_Mathf__Lerp_8e5224(param_6[1],param_6[3],uVar20,0);
        if (*(uint *)(lVar8 + 0x18) < 2) goto LAB_00c8e1ec;
        *(undefined4 *)(lVar8 + 0x2c) = uVar13;
        lVar8 = _UIBasicSprite_TypeInfo_12d6400;
        lVar9 = *(long *)(*(long *)(_UIBasicSprite_TypeInfo_12d6400 + 0xb8) + 8);
        if (lVar9 == 0) break;
        if ((*(uint *)(lVar9 + 0x18) < 2) || (*(uint *)(lVar9 + 0x18) == 2)) goto LAB_00c8e1ec;
        *(undefined4 *)(lVar9 + 0x34) = *(undefined4 *)(lVar9 + 0x2c);
        lVar8 = *(long *)(*(long *)(lVar8 + 0xb8) + 8);
        if (lVar8 == 0) break;
        if ((*(uint *)(lVar8 + 0x18) == 0) || (*(uint *)(lVar8 + 0x18) < 4)) goto LAB_00c8e1ec;
        *(undefined4 *)(lVar8 + 0x3c) = *(undefined4 *)(lVar8 + 0x24);
        fVar11 = *(float *)(param_1 + 0x198);
        if (*(char *)(param_1 + 0x19c) == '\0') {
          if (((*(ushort *)(_NGUIMath_TypeInfo_12d53b8 + 0x132) >> 10 & 1) != 0) &&
             (*(int *)(_NGUIMath_TypeInfo_12d53b8 + 0xe0) == 0)) {
            native_sub_4327ec();
          }
          iVar5 = native_NGUIMath__RepeatIndex_804e00(uVar10 + 2,4,0);
          iVar5 = 3 - iVar5;
        }
        else {
          if (((*(ushort *)(_NGUIMath_TypeInfo_12d53b8 + 0x132) >> 10 & 1) != 0) &&
             (*(int *)(_NGUIMath_TypeInfo_12d53b8 + 0xe0) == 0)) {
            native_sub_4327ec();
          }
          iVar5 = native_NGUIMath__RepeatIndex_804e00(uVar10 + 2,4,0);
        }
        if (((*(byte *)(_UIBasicSprite_TypeInfo_12d6400 + 0x133) >> 2 & 1) != 0) &&
           (*(int *)(_UIBasicSprite_TypeInfo_12d6400 + 0xe0) == 0)) {
          native_sub_4327ec();
        }
        uVar16 = **(undefined8 **)(_UIBasicSprite_TypeInfo_12d6400 + 0xb8);
        uVar2 = (*(undefined8 **)(_UIBasicSprite_TypeInfo_12d6400 + 0xb8))[1];
        uVar17 = native_UnityEngine_Mathf__Clamp01_8d9d9c(fVar11 * 4.0 - (float)iVar5,0);
        cVar3 = *(char *)(param_1 + 0x19c);
        if (((*(byte *)(_NGUIMath_TypeInfo_12d53b8 + 0x133) >> 2 & 1) != 0) &&
           (*(int *)(_NGUIMath_TypeInfo_12d53b8 + 0xe0) == 0)) {
          native_sub_4327ec();
        }
        uVar13 = native_NGUIMath__RepeatIndex_804e00(uVar10 + 2,4,0);
        uVar6 = native_UIBasicSprite__RadialCut_c8f990(uVar17,uVar16,uVar2,cVar3 != '\0',uVar13);
        if ((uVar6 & 1) != 0) {
          lVar8 = 0;
          uVar6 = 0xffffffffffffffff;
          do {
            if (((*(byte *)(_UIBasicSprite_TypeInfo_12d6400 + 0x133) >> 2 & 1) != 0) &&
               (*(int *)(_UIBasicSprite_TypeInfo_12d6400 + 0xe0) == 0)) {
              native_sub_4327ec();
            }
            lVar9 = **(long **)(_UIBasicSprite_TypeInfo_12d6400 + 0xb8);
            if (lVar9 == 0) goto LAB_00c8e1e8;
            if ((ulong)*(uint *)(lVar9 + 0x18) <= uVar6 + 1) goto LAB_00c8e1ec;
            if (param_2 == 0) goto LAB_00c8e1e8;
            native_System_Collections_Generic_List_Vector3___Add_d2be08
                      (*(undefined4 *)(lVar9 + lVar8 + 0x20),*(undefined4 *)(lVar9 + lVar8 + 0x24),0
                       ,param_2,_Method_System_Collections_Generic_List_Vector3__Add___12dd4e0);
            lVar9 = *(long *)(*(long *)(_UIBasicSprite_TypeInfo_12d6400 + 0xb8) + 8);
            if (lVar9 == 0) goto LAB_00c8e1e8;
            if ((ulong)*(uint *)(lVar9 + 0x18) <= uVar6 + 1) goto LAB_00c8e1ec;
            if ((param_3 == 0) ||
               (native_System_Collections_Generic_List_Vector2___Add_d293ec
                          (*(undefined4 *)(lVar9 + lVar8 + 0x20),
                           *(undefined4 *)(lVar9 + lVar8 + 0x24),param_3,
                           _Method_System_Collections_Generic_List_Vector2__Add___12dd4b0),
               param_4 == 0)) goto LAB_00c8e1e8;
            native_System_Collections_Generic_List_Color___Add_d07158
                      (*param_7,param_7[1],param_7[2],param_7[3],param_4,
                       _Method_System_Collections_Generic_List_Color__Add___12dc690);
            uVar6 = uVar6 + 1;
            lVar8 = lVar8 + 8;
          } while (uVar6 < 3);
        }
        bVar1 = 2 < uVar10;
        uVar10 = uVar10 + 1;
        if (bVar1) {
          return;
        }
      }
      goto LAB_00c8e1e8;
    }
  }
  lVar8 = 0;
  uVar6 = 0xffffffffffffffff;
  while( true ) {
    if (((*(byte *)(_UIBasicSprite_TypeInfo_12d6400 + 0x133) >> 2 & 1) != 0) &&
       (*(int *)(_UIBasicSprite_TypeInfo_12d6400 + 0xe0) == 0)) {
      native_sub_4327ec();
    }
    lVar9 = **(long **)(_UIBasicSprite_TypeInfo_12d6400 + 0xb8);
    if (lVar9 == 0) break;
    if ((ulong)*(uint *)(lVar9 + 0x18) <= uVar6 + 1) goto LAB_00c8e1ec;
    if (param_2 == 0) break;
    native_System_Collections_Generic_List_Vector3___Add_d2be08
              (*(undefined4 *)(lVar9 + lVar8 + 0x20),*(undefined4 *)(lVar9 + lVar8 + 0x24),0,param_2
               ,_Method_System_Collections_Generic_List_Vector3__Add___12dd4e0);
    lVar9 = *(long *)(*(long *)(_UIBasicSprite_TypeInfo_12d6400 + 0xb8) + 8);
    if (lVar9 == 0) break;
    if ((ulong)*(uint *)(lVar9 + 0x18) <= uVar6 + 1) goto LAB_00c8e1ec;
    if ((param_3 == 0) ||
       (native_System_Collections_Generic_List_Vector2___Add_d293ec
                  (*(undefined4 *)(lVar9 + lVar8 + 0x20),*(undefined4 *)(lVar9 + lVar8 + 0x24),
                   param_3,_Method_System_Collections_Generic_List_Vector2__Add___12dd4b0),
       param_4 == 0)) break;
    native_System_Collections_Generic_List_Color___Add_d07158
              (*param_7,param_7[1],param_7[2],param_7[3],param_4,
               _Method_System_Collections_Generic_List_Color__Add___12dc690);
    uVar6 = uVar6 + 1;
    lVar8 = lVar8 + 8;
    if (2 < uVar6) {
      return;
    }
  }
LAB_00c8e1e8:
                    /* WARNING: Subroutine does not return */
  native_sub_432810();
}



/* UIBasicSprite$$AdvancedFill @ 0xc8e730
 * void UIBasicSprite__AdvancedFill (UIBasicSprite_o* __this, System_Collections_Generic_List_Vector3__o* verts, System_Collections_Generic_List_Vector2__o* uvs, System_Collections_Generic_List_Color__o* cols, UnityEngine_Vector4_o* v, UnityEngine_Vector4_o* u, UnityEngine_Color_o* c, const MethodInfo* method); */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* UIBasicSprite$$AdvancedFill
   void UIBasicSprite__AdvancedFill (UIBasicSprite_o* __this,
   System_Collections_Generic_List_Vector3__o* verts, System_Collections_Generic_List_Vector2__o*
   uvs, System_Collections_Generic_List_Color__o* cols, UnityEngine_Vector4_o* v,
   UnityEngine_Vector4_o* u, UnityEngine_Color_o* c, const MethodInfo* method); */

void native_UIBasicSprite__AdvancedFill_c8e730
               (undefined1 param_1 [16],float param_2,float param_3,float param_4,long *param_5,
               undefined8 param_6,undefined8 param_7,undefined8 param_8,undefined4 *param_9,
               undefined8 param_10,undefined8 param_11)

{
  long *plVar1;
  ulong uVar2;
  uint uVar3;
  bool bVar4;
  int iVar5;
  int iVar6;
  long *plVar7;
  ulong uVar8;
  undefined8 uVar9;
  long lVar10;
  long lVar11;
  ulong uVar12;
  ulong uVar13;
  float fVar14;
  float fVar15;
  float fVar16;
  float fVar17;
  float fVar18;
  undefined4 uVar19;
  float fVar20;
  undefined4 uVar21;
  float fVar22;
  undefined4 uVar23;
  undefined4 uVar24;
  ulong uVar25;
  undefined4 uVar26;
  undefined4 uVar27;
  undefined4 uVar28;
  undefined4 uVar29;
  float fVar30;
  float fVar31;
  float fVar32;
  float fStack_b8;
  undefined8 uStack_b0;
  undefined8 uStack_a8;
  
  if ((bRam000000000134287a & 1) == 0) {
    native_sub_43273c(&UnityEngine_Object_TypeInfo_12d54e0);
    native_sub_43273c(&UIBasicSprite_TypeInfo_12d6400);
    bRam000000000134287a = 1;
  }
  plVar7 = (long *)(**(code **)(*param_5 + 0x328))(param_5,*(undefined8 *)(*param_5 + 0x330));
  if (((*(byte *)(_UnityEngine_Object_TypeInfo_12d54e0 + 0x133) >> 2 & 1) != 0) &&
     (*(int *)(_UnityEngine_Object_TypeInfo_12d54e0 + 0xe0) == 0)) {
    native_sub_4327ec(_UnityEngine_Object_TypeInfo_12d54e0);
  }
  uVar8 = native_UnityEngine_Object__op_Equality_8e9a3c(plVar7,0,0);
  if ((uVar8 & 1) == 0) {
    fVar14 = (float)(**(code **)(*param_5 + 0x3d8))(param_5,*(undefined8 *)(*param_5 + 0x3e0));
    fVar15 = (float)(**(code **)(*param_5 + 0x458))(param_5,*(undefined8 *)(*param_5 + 0x460));
    uStack_b0 = 0;
    uStack_a8 = 0;
    native_UnityEngine_Vector4___ctor_776f24
              (fVar14 * fVar15,param_2 * fVar15,param_3 * fVar15,param_4 * fVar15,&uStack_b0,0);
    fVar14 = (float)uStack_b0;
    fVar15 = uStack_b0._4_4_;
    fVar32 = (float)uStack_a8;
    fVar20 = uStack_a8._4_4_;
    if (((((float)uStack_b0 != 0.0) || (uStack_b0._4_4_ != 0.0)) || ((float)uStack_a8 != 0.0)) ||
       (uStack_a8._4_4_ != 0.0)) {
      plVar1 = param_5 + 0x39;
      fVar16 = (float)native_UnityEngine_Rect__get_width_76367c(plVar1,0);
      if (plVar7 != (long *)0x0) {
        iVar5 = (**(code **)(*plVar7 + 0x178))(plVar7,*(undefined8 *)(*plVar7 + 0x180));
        fVar17 = (float)native_UnityEngine_Rect__get_height_76368c(plVar1,0);
        iVar6 = (**(code **)(*plVar7 + 0x198))(plVar7,*(undefined8 *)(*plVar7 + 0x1a0));
        fVar18 = (float)(**(code **)(*param_5 + 0x458))(param_5,*(undefined8 *)(*param_5 + 0x460));
        if (((*(byte *)(_UIBasicSprite_TypeInfo_12d6400 + 0x133) >> 2 & 1) != 0) &&
           (*(int *)(_UIBasicSprite_TypeInfo_12d6400 + 0xe0) == 0)) {
          native_sub_4327ec();
        }
        lVar10 = **(long **)(_UIBasicSprite_TypeInfo_12d6400 + 0xb8);
        if (lVar10 != 0) {
          if (*(int *)(lVar10 + 0x18) == 0) {
LAB_00c8f760:
            uVar9 = native_sub_43283c();
                    /* WARNING: Subroutine does not return */
            native_sub_4327dc(uVar9,0);
          }
          *(undefined4 *)(lVar10 + 0x20) = *param_9;
          lVar10 = _UIBasicSprite_TypeInfo_12d6400;
          lVar11 = **(long **)(_UIBasicSprite_TypeInfo_12d6400 + 0xb8);
          if (lVar11 != 0) {
            if (*(int *)(lVar11 + 0x18) == 0) goto LAB_00c8f760;
            *(undefined4 *)(lVar11 + 0x24) = param_9[1];
            lVar10 = **(long **)(lVar10 + 0xb8);
            if (lVar10 != 0) {
              if (*(uint *)(lVar10 + 0x18) < 4) goto LAB_00c8f760;
              *(undefined4 *)(lVar10 + 0x38) = param_9[2];
              lVar10 = _UIBasicSprite_TypeInfo_12d6400;
              lVar11 = **(long **)(_UIBasicSprite_TypeInfo_12d6400 + 0xb8);
              if (lVar11 != 0) {
                if (*(uint *)(lVar11 + 0x18) < 4) goto LAB_00c8f760;
                *(undefined4 *)(lVar11 + 0x3c) = param_9[3];
                if ((*(uint *)(param_5 + 0x34) | 2) == 3) {
                  if (((*(byte *)(lVar10 + 0x133) >> 2 & 1) != 0) && (*(int *)(lVar10 + 0xe0) == 0))
                  {
                    native_sub_4327ec();
                  }
                  lVar10 = **(long **)(_UIBasicSprite_TypeInfo_12d6400 + 0xb8);
                  if (lVar10 == 0) goto LAB_00c8f75c;
                  if ((*(int *)(lVar10 + 0x18) == 1) || (*(int *)(lVar10 + 0x18) == 0))
                  goto LAB_00c8f760;
                  *(float *)(lVar10 + 0x28) = fVar32 + *(float *)(lVar10 + 0x20);
                  lVar10 = **(long **)(_UIBasicSprite_TypeInfo_12d6400 + 0xb8);
                  if (lVar10 == 0) goto LAB_00c8f75c;
                  if (*(uint *)(lVar10 + 0x18) < 4) goto LAB_00c8f760;
                  *(float *)(lVar10 + 0x30) = *(float *)(lVar10 + 0x38) - fVar14;
                  lVar10 = *(long *)(*(long *)(_UIBasicSprite_TypeInfo_12d6400 + 0xb8) + 8);
                  if (lVar10 == 0) goto LAB_00c8f75c;
                  uVar19 = native_UnityEngine_Rect__get_xMin_76363c(param_5 + 0x3b,0);
                  if (*(uint *)(lVar10 + 0x18) < 4) goto LAB_00c8f760;
                  *(undefined4 *)(lVar10 + 0x38) = uVar19;
                  lVar10 = *(long *)(*(long *)(_UIBasicSprite_TypeInfo_12d6400 + 0xb8) + 8);
                  if (lVar10 == 0) goto LAB_00c8f75c;
                  uVar19 = native_UnityEngine_Rect__get_xMin_76363c(plVar1,0);
                  if (*(uint *)(lVar10 + 0x18) < 3) goto LAB_00c8f760;
                  *(undefined4 *)(lVar10 + 0x30) = uVar19;
                  lVar10 = *(long *)(*(long *)(_UIBasicSprite_TypeInfo_12d6400 + 0xb8) + 8);
                  if (lVar10 == 0) goto LAB_00c8f75c;
                  uVar19 = native_UnityEngine_Rect__get_xMax_76365c(plVar1,0);
                  if (*(uint *)(lVar10 + 0x18) < 2) goto LAB_00c8f760;
                  *(undefined4 *)(lVar10 + 0x28) = uVar19;
                  lVar10 = *(long *)(*(long *)(_UIBasicSprite_TypeInfo_12d6400 + 0xb8) + 8);
                  if (lVar10 == 0) goto LAB_00c8f75c;
                  uVar19 = native_UnityEngine_Rect__get_xMax_76365c(param_5 + 0x3b,0);
                  if (*(int *)(lVar10 + 0x18) == 0) goto LAB_00c8f760;
                  *(undefined4 *)(lVar10 + 0x20) = uVar19;
                }
                else {
                  if (((*(byte *)(lVar10 + 0x133) >> 2 & 1) != 0) && (*(int *)(lVar10 + 0xe0) == 0))
                  {
                    native_sub_4327ec();
                  }
                  lVar10 = **(long **)(_UIBasicSprite_TypeInfo_12d6400 + 0xb8);
                  if (lVar10 == 0) goto LAB_00c8f75c;
                  if ((*(int *)(lVar10 + 0x18) == 1) || (*(int *)(lVar10 + 0x18) == 0))
                  goto LAB_00c8f760;
                  *(float *)(lVar10 + 0x28) = fVar14 + *(float *)(lVar10 + 0x20);
                  lVar10 = **(long **)(_UIBasicSprite_TypeInfo_12d6400 + 0xb8);
                  if (lVar10 == 0) goto LAB_00c8f75c;
                  if (*(uint *)(lVar10 + 0x18) < 4) goto LAB_00c8f760;
                  *(float *)(lVar10 + 0x30) = *(float *)(lVar10 + 0x38) - fVar32;
                  lVar10 = *(long *)(*(long *)(_UIBasicSprite_TypeInfo_12d6400 + 0xb8) + 8);
                  if (lVar10 == 0) goto LAB_00c8f75c;
                  uVar19 = native_UnityEngine_Rect__get_xMin_76363c(param_5 + 0x3b,0);
                  if (*(int *)(lVar10 + 0x18) == 0) goto LAB_00c8f760;
                  *(undefined4 *)(lVar10 + 0x20) = uVar19;
                  lVar10 = *(long *)(*(long *)(_UIBasicSprite_TypeInfo_12d6400 + 0xb8) + 8);
                  if (lVar10 == 0) goto LAB_00c8f75c;
                  uVar19 = native_UnityEngine_Rect__get_xMin_76363c(plVar1,0);
                  if (*(uint *)(lVar10 + 0x18) < 2) goto LAB_00c8f760;
                  *(undefined4 *)(lVar10 + 0x28) = uVar19;
                  lVar10 = *(long *)(*(long *)(_UIBasicSprite_TypeInfo_12d6400 + 0xb8) + 8);
                  if (lVar10 == 0) goto LAB_00c8f75c;
                  uVar19 = native_UnityEngine_Rect__get_xMax_76365c(plVar1,0);
                  if (*(uint *)(lVar10 + 0x18) < 3) goto LAB_00c8f760;
                  *(undefined4 *)(lVar10 + 0x30) = uVar19;
                  lVar10 = *(long *)(*(long *)(_UIBasicSprite_TypeInfo_12d6400 + 0xb8) + 8);
                  if (lVar10 == 0) goto LAB_00c8f75c;
                  uVar19 = native_UnityEngine_Rect__get_xMax_76365c(param_5 + 0x3b,0);
                  if (*(uint *)(lVar10 + 0x18) < 4) goto LAB_00c8f760;
                  *(undefined4 *)(lVar10 + 0x38) = uVar19;
                }
                if ((*(uint *)(param_5 + 0x34) & 0xfffffffe) == 2) {
                  if (((*(ushort *)(_UIBasicSprite_TypeInfo_12d6400 + 0x132) >> 10 & 1) != 0) &&
                     (*(int *)(_UIBasicSprite_TypeInfo_12d6400 + 0xe0) == 0)) {
                    native_sub_4327ec();
                  }
                  lVar10 = _UIBasicSprite_TypeInfo_12d6400;
                  lVar11 = **(long **)(_UIBasicSprite_TypeInfo_12d6400 + 0xb8);
                  if (lVar11 != 0) {
                    if ((*(int *)(lVar11 + 0x18) != 1) && (*(int *)(lVar11 + 0x18) != 0)) {
                      *(float *)(lVar11 + 0x2c) = fVar20 + *(float *)(lVar11 + 0x24);
                      lVar11 = **(long **)(lVar10 + 0xb8);
                      if (lVar11 == 0) goto LAB_00c8f75c;
                      if (3 < *(uint *)(lVar11 + 0x18)) {
                        *(float *)(lVar11 + 0x34) = *(float *)(lVar11 + 0x3c) - fVar15;
                        lVar10 = *(long *)(*(long *)(lVar10 + 0xb8) + 8);
                        if (lVar10 == 0) goto LAB_00c8f75c;
                        uVar19 = native_UnityEngine_Rect__get_yMin_763644(param_5 + 0x3b,0);
                        if (3 < *(uint *)(lVar10 + 0x18)) {
                          *(undefined4 *)(lVar10 + 0x3c) = uVar19;
                          lVar10 = *(long *)(*(long *)(_UIBasicSprite_TypeInfo_12d6400 + 0xb8) + 8);
                          if (lVar10 == 0) goto LAB_00c8f75c;
                          uVar19 = native_UnityEngine_Rect__get_yMin_763644(plVar1,0);
                          if (2 < *(uint *)(lVar10 + 0x18)) {
                            *(undefined4 *)(lVar10 + 0x34) = uVar19;
                            lVar10 = *(long *)(*(long *)(_UIBasicSprite_TypeInfo_12d6400 + 0xb8) + 8
                                              );
                            if (lVar10 == 0) goto LAB_00c8f75c;
                            uVar19 = native_UnityEngine_Rect__get_yMax_76366c(plVar1,0);
                            if (1 < *(uint *)(lVar10 + 0x18)) {
                              *(undefined4 *)(lVar10 + 0x2c) = uVar19;
                              lVar10 = *(long *)(*(long *)(_UIBasicSprite_TypeInfo_12d6400 + 0xb8) +
                                                8);
                              if (lVar10 == 0) goto LAB_00c8f75c;
                              uVar19 = native_UnityEngine_Rect__get_yMax_76366c(param_5 + 0x3b,0);
                              if (*(int *)(lVar10 + 0x18) != 0) {
                                *(undefined4 *)(lVar10 + 0x24) = uVar19;
LAB_00c8ee30:
                                fVar14 = fVar16 * (float)iVar5 * fVar18;
                                fVar18 = fVar17 * (float)iVar6 * fVar18;
                                uVar8 = 0;
                                if (fVar18 <= 1.0) {
                                  fVar18 = 1.0;
                                }
                                if (fVar14 <= 1.0) {
                                  fVar14 = 1.0;
                                }
LAB_00c8ee64:
                                uVar2 = uVar8 + 1;
                                uVar25 = 0;
LAB_00c8f6f8:
                                iVar5 = (int)param_5[0x3d];
                                if (((uVar25 != 1) || (uVar8 != 1)) || (iVar5 != 0)) {
                                  uVar13 = uVar25 + 1;
                                  if ((uVar8 != 1) || (uVar25 != 1)) {
                                    iVar5 = (int)uVar25;
                                    if (uVar8 == 1) {
                                      if (iVar5 == 2) {
                                        iVar5 = (int)param_5[0x3f];
                                      }
                                      else {
                                        if (iVar5 != 0) goto LAB_00c8f714;
                                        iVar5 = *(int *)((long)param_5 + 500);
                                      }
                                      if (iVar5 != 0) {
                                        if (iVar5 != 2) {
                                          if (((*(byte *)(_UIBasicSprite_TypeInfo_12d6400 + 0x133)
                                                >> 2 & 1) != 0) &&
                                             (*(int *)(_UIBasicSprite_TypeInfo_12d6400 + 0xe0) == 0)
                                             ) {
                                            native_sub_4327ec();
                                          }
                                          lVar10 = **(long **)(_UIBasicSprite_TypeInfo_12d6400 +
                                                              0xb8);
                                          if (lVar10 != 0) {
                                            uVar12 = (ulong)*(uint *)(lVar10 + 0x18);
                                            if ((((1 < uVar12) && (2 < uVar12)) && (uVar25 < uVar12)
                                                ) && (uVar13 < uVar12)) {
                                              lVar11 = (*(long **)(_UIBasicSprite_TypeInfo_12d6400 +
                                                                  0xb8))[1];
                                              if (lVar11 != 0) {
                                                uVar12 = (ulong)*(uint *)(lVar11 + 0x18);
                                                if (((1 < uVar12) && (2 < uVar12)) &&
                                                   ((uVar25 < uVar12 && (uVar13 < uVar12)))) {
                                                  uVar21 = *(undefined4 *)(lVar10 + 0x30);
                                                  uVar19 = *(undefined4 *)(lVar10 + 0x28);
                                                  uVar24 = *(undefined4 *)(lVar11 + 0x28);
                                                  uVar26 = *(undefined4 *)
                                                            (lVar10 + uVar25 * 8 + 0x24);
                                                  uVar23 = *(undefined4 *)
                                                            (lVar10 + uVar13 * 8 + 0x24);
                                                  uVar27 = *(undefined4 *)(lVar11 + 0x30);
                                                  uVar28 = *(undefined4 *)
                                                            (lVar11 + 0x20 + uVar25 * 8 + 4);
                                                  uVar29 = *(undefined4 *)
                                                            (lVar11 + 0x20 + uVar13 * 8 + 4);
                                                  goto LAB_00c8f6e0;
                                                }
                                                goto LAB_00c8f760;
                                              }
                                              goto LAB_00c8f75c;
                                            }
                                            goto LAB_00c8f760;
                                          }
                                          goto LAB_00c8f75c;
                                        }
                                        if (((*(byte *)(_UIBasicSprite_TypeInfo_12d6400 + 0x133) >>
                                              2 & 1) != 0) &&
                                           (*(int *)(_UIBasicSprite_TypeInfo_12d6400 + 0xe0) == 0))
                                        {
                                          native_sub_4327ec();
                                        }
                                        lVar10 = **(long **)(_UIBasicSprite_TypeInfo_12d6400 + 0xb8)
                                        ;
                                        if (lVar10 == 0) goto LAB_00c8f75c;
                                        uVar12 = (ulong)*(uint *)(lVar10 + 0x18);
                                        if ((((uVar12 < 2) || (uVar12 < 3)) || (uVar12 <= uVar25))
                                           || (uVar12 <= uVar13)) goto LAB_00c8f760;
                                        lVar11 = (*(long **)(_UIBasicSprite_TypeInfo_12d6400 + 0xb8)
                                                 )[1];
                                        if (lVar11 == 0) goto LAB_00c8f75c;
                                        uVar12 = (ulong)*(uint *)(lVar11 + 0x18);
                                        if (((uVar12 < 2) || (uVar12 <= uVar25)) ||
                                           (uVar12 <= uVar13)) goto LAB_00c8f760;
                                        fVar15 = *(float *)(lVar10 + 0x30);
                                        if (*(float *)(lVar10 + 0x28) < fVar15) {
                                          uVar19 = *(undefined4 *)(lVar11 + 0x28);
                                          uVar21 = *(undefined4 *)(lVar10 + uVar25 * 8 + 0x24);
                                          uVar26 = *(undefined4 *)(lVar10 + uVar13 * 8 + 0x24);
                                          uVar23 = *(undefined4 *)(lVar11 + uVar25 * 8 + 0x24);
                                          uVar24 = *(undefined4 *)(lVar11 + uVar13 * 8 + 0x24);
                                          fVar32 = *(float *)(lVar10 + 0x28);
                                          do {
                                            if (((*(byte *)(_UIBasicSprite_TypeInfo_12d6400 + 0x133)
                                                  >> 2 & 1) != 0) &&
                                               (*(int *)(_UIBasicSprite_TypeInfo_12d6400 + 0xe0) ==
                                                0)) {
                                              native_sub_4327ec();
                                            }
                                            lVar10 = *(long *)(*(long *)(
                                                  _UIBasicSprite_TypeInfo_12d6400 + 0xb8) + 8);
                                            if (lVar10 == 0) goto LAB_00c8f75c;
                                            if (*(uint *)(lVar10 + 0x18) < 3) goto LAB_00c8f760;
                                            uVar25 = (ulong)*(uint *)(lVar10 + 0x30);
                                            fVar16 = fVar32 + fVar14;
                                            fVar20 = fVar16;
                                            if (fVar15 < fVar16) {
                                              uVar25 = native_UnityEngine_Mathf__Lerp_8e5224
                                                                 (uVar19,uVar25,
                                                                  (fVar15 - fVar32) / fVar14,0);
                                              fVar20 = fVar15;
                                            }
                                            if (((*(byte *)(_UIBasicSprite_TypeInfo_12d6400 + 0x133)
                                                  >> 2 & 1) != 0) &&
                                               (*(int *)(_UIBasicSprite_TypeInfo_12d6400 + 0xe0) ==
                                                0)) {
                                              native_sub_4327ec();
                                            }
                                            native_UIBasicSprite__Fill_c8fac8
                                                      (fVar32,fVar20,uVar21,uVar26,uVar19,uVar25,
                                                       uVar23,uVar24,param_6,param_7,param_8);
                                            fVar32 = fVar16;
                                          } while (fVar16 < fVar15);
                                        }
                                      }
                                    }
                                    else {
                                      iVar6 = (int)uVar8;
                                      if (iVar5 == 0) {
                                        iVar5 = *(int *)((long)param_5 + 500);
joined_r0x00c8f360:
                                        if (iVar5 != 0) {
LAB_00c8f370:
                                          if (iVar6 == 2) {
                                            iVar5 = (int)param_5[0x3e];
                                          }
                                          else {
                                            if (iVar6 != 0) goto LAB_00c8f610;
                                            iVar5 = *(int *)((long)param_5 + 0x1ec);
                                          }
                                          if (iVar5 != 0) goto LAB_00c8f610;
                                        }
                                      }
                                      else {
                                        if (iVar5 == 2) {
                                          iVar5 = (int)param_5[0x3f];
                                          goto joined_r0x00c8f360;
                                        }
                                        if (iVar5 != 1) goto LAB_00c8f370;
                                        if (iVar6 != 2) {
                                          if ((iVar6 == 0) &&
                                             (iVar5 = *(int *)((long)param_5 + 0x1ec), iVar5 != 0))
                                          goto LAB_00c8f468;
                                          goto LAB_00c8f714;
                                        }
                                        iVar5 = (int)param_5[0x3e];
                                        if (iVar5 == 0) goto LAB_00c8f714;
LAB_00c8f468:
                                        if (iVar5 == 2) {
                                          if (((*(byte *)(_UIBasicSprite_TypeInfo_12d6400 + 0x133)
                                                >> 2 & 1) != 0) &&
                                             (*(int *)(_UIBasicSprite_TypeInfo_12d6400 + 0xe0) == 0)
                                             ) {
                                            native_sub_4327ec();
                                          }
                                          lVar10 = **(long **)(_UIBasicSprite_TypeInfo_12d6400 +
                                                              0xb8);
                                          if (lVar10 != 0) {
                                            uVar12 = (ulong)*(uint *)(lVar10 + 0x18);
                                            if ((((uVar8 < uVar12) && (uVar2 < uVar12)) &&
                                                (uVar25 < uVar12)) && (uVar13 < uVar12)) {
                                              lVar11 = (*(long **)(_UIBasicSprite_TypeInfo_12d6400 +
                                                                  0xb8))[1];
                                              if (lVar11 != 0) {
                                                uVar12 = (ulong)*(uint *)(lVar11 + 0x18);
                                                if (((uVar8 < uVar12) && (uVar2 < uVar12)) &&
                                                   (uVar25 < uVar12)) {
                                                  fVar15 = *(float *)(lVar10 + uVar25 * 8 + 0x24);
                                                  fVar32 = *(float *)(lVar10 + uVar13 * 8 + 0x24);
                                                  if (fVar15 < fVar32) {
                                                    uVar19 = *(undefined4 *)
                                                              (lVar10 + uVar8 * 8 + 0x20);
                                                    uVar21 = *(undefined4 *)
                                                              (lVar10 + uVar2 * 8 + 0x20);
                                                    uVar26 = *(undefined4 *)
                                                              (lVar11 + uVar8 * 8 + 0x20);
                                                    uVar23 = *(undefined4 *)
                                                              (lVar11 + uVar2 * 8 + 0x20);
                                                    uVar24 = *(undefined4 *)
                                                              (lVar11 + uVar25 * 8 + 0x24);
                                                    do {
                                                      if (((*(byte *)(
                                                  _UIBasicSprite_TypeInfo_12d6400 + 0x133) >> 2 & 1)
                                                  != 0) && (*(int *)(_UIBasicSprite_TypeInfo_12d6400
                                                                    + 0xe0) == 0)) {
                                                    native_sub_4327ec();
                                                  }
                                                  lVar10 = *(long *)(*(long *)(
                                                  _UIBasicSprite_TypeInfo_12d6400 + 0xb8) + 8);
                                                  if (lVar10 == 0) goto LAB_00c8f75c;
                                                  if (*(uint *)(lVar10 + 0x18) <= uVar13)
                                                  goto LAB_00c8f760;
                                                  uVar25 = (ulong)*(uint *)(lVar10 + uVar13 * 8 +
                                                                           0x24);
                                                  fVar16 = fVar15 + fVar18;
                                                  fVar20 = fVar16;
                                                  if (fVar32 < fVar16) {
                                                    uVar25 = native_UnityEngine_Mathf__Lerp_8e5224
                                                                       (uVar24,uVar25,
                                                                        (fVar32 - fVar15) / fVar18,0
                                                                       );
                                                    fVar20 = fVar32;
                                                  }
                                                  if (((*(byte *)(_UIBasicSprite_TypeInfo_12d6400 +
                                                                 0x133) >> 2 & 1) != 0) &&
                                                     (*(int *)(_UIBasicSprite_TypeInfo_12d6400 +
                                                              0xe0) == 0)) {
                                                    native_sub_4327ec();
                                                  }
                                                  native_UIBasicSprite__Fill_c8fac8
                                                            (uVar19,uVar21,fVar15,fVar20,uVar26,
                                                             uVar23,uVar24,uVar25,param_6,param_7,
                                                             param_8);
                                                  fVar15 = fVar16;
                                                  } while (fVar16 < fVar32);
                                                  }
                                                  goto LAB_00c8f714;
                                                }
                                                goto LAB_00c8f760;
                                              }
                                              goto LAB_00c8f75c;
                                            }
                                            goto LAB_00c8f760;
                                          }
                                          goto LAB_00c8f75c;
                                        }
LAB_00c8f610:
                                        if (((*(byte *)(_UIBasicSprite_TypeInfo_12d6400 + 0x133) >>
                                              2 & 1) != 0) &&
                                           (*(int *)(_UIBasicSprite_TypeInfo_12d6400 + 0xe0) == 0))
                                        {
                                          native_sub_4327ec();
                                        }
                                        lVar10 = **(long **)(_UIBasicSprite_TypeInfo_12d6400 + 0xb8)
                                        ;
                                        if (lVar10 == 0) goto LAB_00c8f75c;
                                        uVar12 = (ulong)*(uint *)(lVar10 + 0x18);
                                        if ((((uVar12 <= uVar8) || (uVar12 <= uVar2)) ||
                                            (uVar12 <= uVar25)) || (uVar12 <= uVar13))
                                        goto LAB_00c8f760;
                                        lVar11 = (*(long **)(_UIBasicSprite_TypeInfo_12d6400 + 0xb8)
                                                 )[1];
                                        if (lVar11 == 0) goto LAB_00c8f75c;
                                        uVar12 = (ulong)*(uint *)(lVar11 + 0x18);
                                        if (((uVar12 <= uVar8) || (uVar12 <= uVar2)) ||
                                           ((uVar12 <= uVar25 || (uVar12 <= uVar13))))
                                        goto LAB_00c8f760;
                                        uVar19 = *(undefined4 *)(lVar10 + uVar8 * 8 + 0x20);
                                        uVar21 = *(undefined4 *)(lVar10 + uVar2 * 8 + 0x20);
                                        uVar26 = *(undefined4 *)(lVar10 + uVar25 * 8 + 0x24);
                                        uVar23 = *(undefined4 *)(lVar10 + uVar13 * 8 + 0x24);
                                        uVar27 = *(undefined4 *)(lVar11 + uVar2 * 8 + 0x20);
                                        uVar24 = *(undefined4 *)(lVar11 + uVar8 * 8 + 0x20);
                                        uVar28 = *(undefined4 *)(lVar11 + 0x20 + uVar25 * 8 + 4);
                                        uVar29 = *(undefined4 *)(lVar11 + 0x20 + uVar13 * 8 + 4);
LAB_00c8f6e0:
                                        native_UIBasicSprite__Fill_c8fac8
                                                  (uVar19,uVar21,uVar26,uVar23,uVar24,uVar27,uVar28,
                                                   uVar29,param_6,param_7,param_8);
                                      }
                                    }
                                    goto LAB_00c8f714;
                                  }
                                  if (iVar5 == 1) {
                                    if (((*(byte *)(_UIBasicSprite_TypeInfo_12d6400 + 0x133) >> 2 &
                                         1) != 0) &&
                                       (*(int *)(_UIBasicSprite_TypeInfo_12d6400 + 0xe0) == 0)) {
                                      native_sub_4327ec();
                                    }
                                    lVar10 = **(long **)(_UIBasicSprite_TypeInfo_12d6400 + 0xb8);
                                    if (lVar10 == 0) goto LAB_00c8f75c;
                                    uVar3 = *(uint *)(lVar10 + 0x18);
                                    if (((uVar3 < 2) || (uVar3 < 3)) || (uVar3 < 3))
                                    goto LAB_00c8f760;
                                    lVar11 = (*(long **)(_UIBasicSprite_TypeInfo_12d6400 + 0xb8))[1]
                                    ;
                                    if (lVar11 == 0) goto LAB_00c8f75c;
                                    uVar3 = *(uint *)(lVar11 + 0x18);
                                    if (((uVar3 < 2) || (uVar3 < 3)) || (uVar3 < 3))
                                    goto LAB_00c8f760;
                                    native_UIBasicSprite__Fill_c8fac8
                                              (*(undefined4 *)(lVar10 + 0x28),
                                               *(undefined4 *)(lVar10 + 0x30),
                                               *(undefined4 *)(lVar10 + 0x2c),
                                               *(undefined4 *)(lVar10 + 0x34),
                                               *(undefined4 *)(lVar11 + 0x28),
                                               *(undefined4 *)(lVar11 + 0x30),
                                               *(undefined4 *)(lVar11 + 0x2c),
                                               *(undefined4 *)(lVar11 + 0x34),param_6,param_7,
                                               param_8);
                                  }
                                  else if (iVar5 == 2) {
                                    if (((*(byte *)(_UIBasicSprite_TypeInfo_12d6400 + 0x133) >> 2 &
                                         1) != 0) &&
                                       (*(int *)(_UIBasicSprite_TypeInfo_12d6400 + 0xe0) == 0)) {
                                      native_sub_4327ec();
                                    }
                                    lVar10 = **(long **)(_UIBasicSprite_TypeInfo_12d6400 + 0xb8);
                                    if (lVar10 != 0) {
                                      uVar3 = *(uint *)(lVar10 + 0x18);
                                      if (((1 < uVar3) && (2 < uVar3)) && (2 < uVar3)) {
                                        lVar11 = (*(long **)(_UIBasicSprite_TypeInfo_12d6400 + 0xb8)
                                                 )[1];
                                        if (lVar11 != 0) {
                                          if ((*(uint *)(lVar11 + 0x18) & 0xfffffffe) != 0) {
                                            fVar15 = *(float *)(lVar10 + 0x34);
                                            if (*(float *)(lVar10 + 0x2c) < fVar15) {
                                              fVar20 = *(float *)(lVar10 + 0x28);
                                              fVar16 = *(float *)(lVar10 + 0x30);
                                              uVar19 = *(undefined4 *)(lVar11 + 0x28);
                                              uVar21 = *(undefined4 *)(lVar11 + 0x2c);
                                              fVar32 = *(float *)(lVar10 + 0x2c);
                                              do {
                                                if (((*(byte *)(_UIBasicSprite_TypeInfo_12d6400 +
                                                               0x133) >> 2 & 1) != 0) &&
                                                   (*(int *)(_UIBasicSprite_TypeInfo_12d6400 + 0xe0)
                                                    == 0)) {
                                                  native_sub_4327ec();
                                                }
                                                lVar10 = *(long *)(*(long *)(
                                                  _UIBasicSprite_TypeInfo_12d6400 + 0xb8) + 8);
                                                if (lVar10 == 0) goto LAB_00c8f75c;
                                                if (*(uint *)(lVar10 + 0x18) < 3) goto LAB_00c8f760;
                                                uVar26 = *(undefined4 *)(lVar10 + 0x34);
                                                fVar22 = fVar32 + fVar18;
                                                fVar17 = fVar20;
                                                fStack_b8 = fVar22;
                                                if (fVar15 < fVar22) {
                                                  uVar26 = native_UnityEngine_Mathf__Lerp_8e5224
                                                                     (uVar21,uVar26,
                                                                      (fVar15 - fVar32) / fVar18,0);
                                                  fStack_b8 = fVar15;
                                                }
                                                while (fVar17 < fVar16) {
                                                  if (((*(byte *)(_UIBasicSprite_TypeInfo_12d6400 +
                                                                 0x133) >> 2 & 1) != 0) &&
                                                     (*(int *)(_UIBasicSprite_TypeInfo_12d6400 +
                                                              0xe0) == 0)) {
                                                    native_sub_4327ec();
                                                  }
                                                  lVar10 = *(long *)(*(long *)(
                                                  _UIBasicSprite_TypeInfo_12d6400 + 0xb8) + 8);
                                                  if (lVar10 == 0) goto LAB_00c8f75c;
                                                  if (*(uint *)(lVar10 + 0x18) < 3)
                                                  goto LAB_00c8f760;
                                                  uVar25 = (ulong)*(uint *)(lVar10 + 0x30);
                                                  fVar30 = fVar17 + fVar14;
                                                  fVar31 = fVar30;
                                                  if (fVar16 < fVar30) {
                                                    uVar25 = native_UnityEngine_Mathf__Lerp_8e5224
                                                                       (uVar19,uVar25,
                                                                        (fVar16 - fVar17) / fVar14,0
                                                                       );
                                                    fVar31 = fVar16;
                                                  }
                                                  if (((*(byte *)(_UIBasicSprite_TypeInfo_12d6400 +
                                                                 0x133) >> 2 & 1) != 0) &&
                                                     (*(int *)(_UIBasicSprite_TypeInfo_12d6400 +
                                                              0xe0) == 0)) {
                                                    native_sub_4327ec();
                                                  }
                                                  native_UIBasicSprite__Fill_c8fac8
                                                            (fVar17,fVar31,fVar32,fStack_b8,uVar19,
                                                             uVar25,uVar21,uVar26,param_6,param_7,
                                                             param_8);
                                                  fVar17 = fVar30;
                                                }
                                                fVar32 = fVar22;
                                              } while (fVar22 < fVar15);
                                              goto LAB_00c8f714;
                                            }
                                            goto LAB_00c8f710;
                                          }
                                          goto LAB_00c8f760;
                                        }
                                        goto LAB_00c8f75c;
                                      }
                                      goto LAB_00c8f760;
                                    }
                                    goto LAB_00c8f75c;
                                  }
                                }
LAB_00c8f710:
                                uVar13 = 2;
LAB_00c8f714:
                                uVar25 = uVar13;
                                if (2 < uVar13) goto code_r0x00c8f720;
                                goto LAB_00c8f6f8;
                              }
                            }
                          }
                        }
                      }
                    }
                    goto LAB_00c8f760;
                  }
                }
                else {
                  if (((*(ushort *)(_UIBasicSprite_TypeInfo_12d6400 + 0x132) >> 10 & 1) != 0) &&
                     (*(int *)(_UIBasicSprite_TypeInfo_12d6400 + 0xe0) == 0)) {
                    native_sub_4327ec();
                  }
                  lVar10 = _UIBasicSprite_TypeInfo_12d6400;
                  lVar11 = **(long **)(_UIBasicSprite_TypeInfo_12d6400 + 0xb8);
                  if (lVar11 != 0) {
                    if ((*(int *)(lVar11 + 0x18) != 1) && (*(int *)(lVar11 + 0x18) != 0)) {
                      *(float *)(lVar11 + 0x2c) = fVar15 + *(float *)(lVar11 + 0x24);
                      lVar11 = **(long **)(lVar10 + 0xb8);
                      if (lVar11 == 0) goto LAB_00c8f75c;
                      if (3 < *(uint *)(lVar11 + 0x18)) {
                        *(float *)(lVar11 + 0x34) = *(float *)(lVar11 + 0x3c) - fVar20;
                        lVar10 = *(long *)(*(long *)(lVar10 + 0xb8) + 8);
                        if (lVar10 == 0) goto LAB_00c8f75c;
                        uVar19 = native_UnityEngine_Rect__get_yMin_763644(param_5 + 0x3b,0);
                        if (*(int *)(lVar10 + 0x18) != 0) {
                          *(undefined4 *)(lVar10 + 0x24) = uVar19;
                          lVar10 = *(long *)(*(long *)(_UIBasicSprite_TypeInfo_12d6400 + 0xb8) + 8);
                          if (lVar10 == 0) goto LAB_00c8f75c;
                          uVar19 = native_UnityEngine_Rect__get_yMin_763644(plVar1,0);
                          if (1 < *(uint *)(lVar10 + 0x18)) {
                            *(undefined4 *)(lVar10 + 0x2c) = uVar19;
                            lVar10 = *(long *)(*(long *)(_UIBasicSprite_TypeInfo_12d6400 + 0xb8) + 8
                                              );
                            if (lVar10 == 0) goto LAB_00c8f75c;
                            uVar19 = native_UnityEngine_Rect__get_yMax_76366c(plVar1,0);
                            if (2 < *(uint *)(lVar10 + 0x18)) {
                              *(undefined4 *)(lVar10 + 0x34) = uVar19;
                              lVar10 = *(long *)(*(long *)(_UIBasicSprite_TypeInfo_12d6400 + 0xb8) +
                                                8);
                              if (lVar10 == 0) goto LAB_00c8f75c;
                              uVar19 = native_UnityEngine_Rect__get_yMax_76366c(param_5 + 0x3b,0);
                              if (3 < *(uint *)(lVar10 + 0x18)) {
                                *(undefined4 *)(lVar10 + 0x3c) = uVar19;
                                goto LAB_00c8ee30;
                              }
                            }
                          }
                        }
                      }
                    }
                    goto LAB_00c8f760;
                  }
                }
              }
            }
          }
        }
      }
LAB_00c8f75c:
                    /* WARNING: Subroutine does not return */
      native_sub_432810();
    }
    native_UIBasicSprite__SimpleFill_c8c5ac
              (param_5,param_6,param_7,param_8,param_9,param_10,param_11);
  }
  return;
code_r0x00c8f720:
  bVar4 = 1 < uVar8;
  uVar8 = uVar2;
  if (bVar4) {
    return;
  }
  goto LAB_00c8ee64;
}



/* UIBasicSprite$$RadialCut @ 0xc8f990
 * bool UIBasicSprite__RadialCut (UnityEngine_Vector2_array* xy, UnityEngine_Vector2_array* uv, float fill, bool invert, int32_t corner, const MethodInfo* method); */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* UIBasicSprite$$RadialCut
   bool UIBasicSprite__RadialCut (UnityEngine_Vector2_array* xy, UnityEngine_Vector2_array* uv,
   float fill, bool invert, int32_t corner, const MethodInfo* method); */

undefined8
native_UIBasicSprite__RadialCut_c8f990
          (undefined8 param_1,undefined8 param_2,undefined8 param_3,uint param_4,uint param_5)

{
  float fVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  
  if ((bRam000000000134287b & 1) == 0) {
    native_sub_43273c(&UIBasicSprite_TypeInfo_12d6400);
    bRam000000000134287b = 1;
  }
  if (0.001 <= (float)param_1) {
    param_4 = param_5 & 1 ^ param_4;
    if ((param_4 & 1) == 0) {
      if (0.999 < (float)param_1) {
        return 1;
      }
      fVar1 = (float)native_UnityEngine_Mathf__Clamp01_8d9d9c(param_1,0);
    }
    else {
      fVar1 = (float)native_UnityEngine_Mathf__Clamp01_8d9d9c(param_1,0);
      fVar1 = 1.0 - fVar1;
    }
    uVar2 = func_0x002ca670(fVar1 * 1.5707964);
    uVar3 = func_0x002c9f10(fVar1 * 1.5707964);
    if (((*(byte *)(_UIBasicSprite_TypeInfo_12d6400 + 0x133) >> 2 & 1) != 0) &&
       (*(int *)(_UIBasicSprite_TypeInfo_12d6400 + 0xe0) == 0)) {
      native_sub_4327ec();
    }
    param_4 = param_4 & 1;
    native_UIBasicSprite__RadialCut_c8fccc(uVar2,uVar3,param_2,param_4,param_5);
    native_UIBasicSprite__RadialCut_c8fccc(uVar2,uVar3,param_3,param_4,param_5);
    return 1;
  }
  return 0;
}



/* UIBasicSprite$$RadialCut @ 0xc8fccc
 * void UIBasicSprite__RadialCut (UnityEngine_Vector2_array* xy, float cos, float sin, bool invert, int32_t corner, const MethodInfo* method); */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* UIBasicSprite$$RadialCut
   void UIBasicSprite__RadialCut (UnityEngine_Vector2_array* xy, float cos, float sin, bool invert,
   int32_t corner, const MethodInfo* method); */

void native_UIBasicSprite__RadialCut_c8fccc
               (float param_1,float param_2,long param_3,ulong param_4,uint param_5)

{
  uint uVar1;
  uint uVar2;
  uint uVar3;
  uint uVar4;
  undefined8 uVar5;
  undefined4 *puVar6;
  undefined4 uVar7;
  float fVar8;
  float fVar9;
  
  if ((bRam000000000134287c & 1) == 0) {
    native_sub_43273c(&NGUIMath_TypeInfo_12d53b8);
    bRam000000000134287c = 1;
  }
  if (((*(byte *)(_NGUIMath_TypeInfo_12d53b8 + 0x133) >> 2 & 1) != 0) &&
     (*(int *)(_NGUIMath_TypeInfo_12d53b8 + 0xe0) == 0)) {
    native_sub_4327ec();
  }
  uVar2 = native_NGUIMath__RepeatIndex_804e00(param_5 + 1,4,0);
  uVar3 = native_NGUIMath__RepeatIndex_804e00(param_5 + 2,4,0);
  uVar4 = native_NGUIMath__RepeatIndex_804e00(param_5 + 3,4,0);
  if ((param_5 & 1) != 0) {
    if (param_2 <= param_1) {
      fVar8 = 1.0;
      fVar9 = fVar8;
      if ((param_1 <= param_2) || (fVar9 = param_2 / param_1, (param_4 & 1) != 0))
      goto joined_r0x00c90024;
      if (param_3 == 0) goto LAB_00c900e0;
      if ((*(uint *)(param_3 + 0x18) <= param_5) || (*(uint *)(param_3 + 0x18) <= uVar3))
      goto LAB_00c900d4;
      puVar6 = (undefined4 *)(param_3 + 0x20 + (long)(int)uVar3 * 8 + 4);
      uVar7 = native_UnityEngine_Mathf__Lerp_8e5224
                        (*(undefined4 *)(param_3 + 0x20 + (long)(int)param_5 * 8 + 4),*puVar6,fVar9,
                         0);
      if (*(uint *)(param_3 + 0x18) <= uVar3) goto LAB_00c900d4;
      *puVar6 = uVar7;
      if ((*(uint *)(param_3 + 0x18) <= uVar3) || (*(uint *)(param_3 + 0x18) <= uVar4))
      goto LAB_00c900d4;
      fVar8 = 1.0;
      *(undefined4 *)(param_3 + (long)(int)uVar4 * 8 + 0x24) = uVar7;
    }
    else {
      fVar8 = param_1 / param_2;
      if ((param_4 & 1) == 0) {
        fVar9 = 1.0;
joined_r0x00c90024:
        if (param_3 == 0) goto LAB_00c900e0;
      }
      else {
        if (param_3 == 0) goto LAB_00c900e0;
        if ((*(uint *)(param_3 + 0x18) <= param_5) || (*(uint *)(param_3 + 0x18) <= uVar3))
        goto LAB_00c900d4;
        puVar6 = (undefined4 *)(param_3 + 0x20 + (long)(int)uVar3 * 8);
        uVar7 = native_UnityEngine_Mathf__Lerp_8e5224
                          (*(undefined4 *)
                            (param_3 + 0x20 +
                            (-(ulong)(param_5 >> 0x1f) & 0xfffffff800000000 | (ulong)param_5 << 3)),
                           *puVar6,fVar8,0);
        if (*(uint *)(param_3 + 0x18) <= uVar2) goto LAB_00c900d4;
        *(undefined4 *)(param_3 + (long)(int)uVar2 * 8 + 0x20) = uVar7;
        if ((*(uint *)(param_3 + 0x18) <= uVar2) || (*(uint *)(param_3 + 0x18) <= uVar3))
        goto LAB_00c900d4;
        *puVar6 = uVar7;
        fVar9 = 1.0;
      }
    }
    uVar1 = *(uint *)(param_3 + 0x18);
    if (uVar1 <= param_5) goto LAB_00c900d4;
    if ((param_4 & 1) == 0) {
      if ((uVar1 <= uVar3) ||
         (uVar7 = native_UnityEngine_Mathf__Lerp_8e5224
                            (*(undefined4 *)(param_3 + 0x20 + (long)(int)param_5 * 8),
                             *(undefined4 *)
                              (param_3 + 0x20 +
                              (-(ulong)(uVar3 >> 0x1f) & 0xfffffff800000000 | (ulong)uVar3 << 3)),
                             fVar8,0), uVar2 = uVar4, *(uint *)(param_3 + 0x18) <= uVar4))
      goto LAB_00c900d4;
      goto LAB_00c900b0;
    }
    if ((uVar1 <= uVar3) ||
       (uVar7 = native_UnityEngine_Mathf__Lerp_8e5224
                          (*(undefined4 *)(param_3 + 0x20 + (long)(int)param_5 * 8 + 4),
                           *(undefined4 *)(param_3 + 0x20 + (long)(int)uVar3 * 8 + 4),fVar9,0),
       uVar4 = uVar2, *(uint *)(param_3 + 0x18) <= uVar2)) goto LAB_00c900d4;
    goto LAB_00c90074;
  }
  if (param_1 <= param_2) {
    fVar8 = 1.0;
    fVar9 = fVar8;
    if ((param_2 <= param_1) || (fVar9 = param_1 / param_2, (param_4 & 1) == 0))
    goto joined_r0x00c8ff94;
    if (param_3 == 0) goto LAB_00c900e0;
    if ((*(uint *)(param_3 + 0x18) <= param_5) || (*(uint *)(param_3 + 0x18) <= uVar3))
    goto LAB_00c900d4;
    puVar6 = (undefined4 *)(param_3 + 0x20 + (long)(int)uVar3 * 8);
    uVar7 = native_UnityEngine_Mathf__Lerp_8e5224
                      (*(undefined4 *)
                        (param_3 + 0x20 +
                        (-(ulong)(param_5 >> 0x1f) & 0xfffffff800000000 | (ulong)param_5 << 3)),
                       *puVar6,fVar9,0);
    if (*(uint *)(param_3 + 0x18) <= uVar3) goto LAB_00c900d4;
    *puVar6 = uVar7;
    if ((*(uint *)(param_3 + 0x18) <= uVar3) || (*(uint *)(param_3 + 0x18) <= uVar4))
    goto LAB_00c900d4;
    fVar8 = 1.0;
    *(undefined4 *)(param_3 + (long)(int)uVar4 * 8 + 0x20) = uVar7;
  }
  else {
    fVar8 = param_2 / param_1;
    if ((param_4 & 1) == 0) {
      if (param_3 == 0) goto LAB_00c900e0;
      if ((*(uint *)(param_3 + 0x18) <= param_5) || (*(uint *)(param_3 + 0x18) <= uVar3))
      goto LAB_00c900d4;
      puVar6 = (undefined4 *)(param_3 + 0x20 + (long)(int)uVar3 * 8 + 4);
      uVar7 = native_UnityEngine_Mathf__Lerp_8e5224
                        (*(undefined4 *)(param_3 + 0x20 + (long)(int)param_5 * 8 + 4),*puVar6,fVar8,
                         0);
      if (*(uint *)(param_3 + 0x18) <= uVar2) goto LAB_00c900d4;
      *(undefined4 *)(param_3 + (long)(int)uVar2 * 8 + 0x24) = uVar7;
      if ((*(uint *)(param_3 + 0x18) <= uVar2) || (*(uint *)(param_3 + 0x18) <= uVar3))
      goto LAB_00c900d4;
      *puVar6 = uVar7;
      fVar9 = 1.0;
    }
    else {
      fVar9 = 1.0;
joined_r0x00c8ff94:
      if (param_3 == 0) {
LAB_00c900e0:
                    /* WARNING: Subroutine does not return */
        native_sub_432810();
      }
    }
  }
  uVar1 = *(uint *)(param_3 + 0x18);
  if (param_5 < uVar1) {
    if ((param_4 & 1) == 0) {
      if ((uVar3 < uVar1) &&
         (uVar7 = native_UnityEngine_Mathf__Lerp_8e5224
                            (*(undefined4 *)(param_3 + 0x20 + (long)(int)param_5 * 8),
                             *(undefined4 *)
                              (param_3 + 0x20 +
                              (-(ulong)(uVar3 >> 0x1f) & 0xfffffff800000000 | (ulong)uVar3 << 3)),
                             fVar9,0), uVar2 < *(uint *)(param_3 + 0x18))) {
LAB_00c900b0:
        *(undefined4 *)(param_3 + (long)(int)uVar2 * 8 + 0x20) = uVar7;
        return;
      }
    }
    else if ((uVar3 < uVar1) &&
            (uVar7 = native_UnityEngine_Mathf__Lerp_8e5224
                               (*(undefined4 *)(param_3 + 0x20 + (long)(int)param_5 * 8 + 4),
                                *(undefined4 *)(param_3 + 0x20 + (long)(int)uVar3 * 8 + 4),fVar8,0),
            uVar4 < *(uint *)(param_3 + 0x18))) {
LAB_00c90074:
      *(undefined4 *)(param_3 + (long)(int)uVar4 * 8 + 0x24) = uVar7;
      return;
    }
  }
LAB_00c900d4:
  uVar5 = native_sub_43283c();
                    /* WARNING: Subroutine does not return */
  native_sub_4327dc(uVar5,0);
}



/* UIBasicSprite$$Fill @ 0xc8fac8
 * void UIBasicSprite__Fill (System_Collections_Generic_List_Vector3__o* verts, System_Collections_Generic_List_Vector2__o* uvs, System_Collections_Generic_List_Color__o* cols, float v0x, float v1x, float v0y, float v1y, float u0x, float u1x, float u0y, float u1y, UnityEngine_Color_o col, const MethodInfo* method); */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* UIBasicSprite$$Fill
   void UIBasicSprite__Fill (System_Collections_Generic_List_Vector3__o* verts,
   System_Collections_Generic_List_Vector2__o* uvs, System_Collections_Generic_List_Color__o* cols,
   float v0x, float v1x, float v0y, float v1y, float u0x, float u1x, float u0y, float u1y,
   UnityEngine_Color_o col, const MethodInfo* method); */

void native_UIBasicSprite__Fill_c8fac8
               (undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
               undefined4 param_5,undefined4 param_6,undefined4 param_7,undefined4 param_8,
               long param_9,long param_10,long param_11)

{
  undefined8 uVar1;
  uint uVar2;
  long lVar3;
  undefined4 uStack0000000000000000;
  undefined4 uStack0000000000000004;
  undefined4 uStack0000000000000008;
  undefined4 uStack000000000000000c;
  
  if ((bRam000000000134287d & 1) == 0) {
    native_sub_43273c(&Method_System_Collections_Generic_List_Vector2__Add___12dd4b0);
    native_sub_43273c(&Method_System_Collections_Generic_List_Color__Add___12dc690);
    native_sub_43273c(&Method_System_Collections_Generic_List_Vector3__Add___12dd4e0);
    bRam000000000134287d = 1;
  }
  if (param_9 != 0) {
    native_System_Collections_Generic_List_Vector3___Add_d2be08
              (param_1,param_3,0,param_9,
               _Method_System_Collections_Generic_List_Vector3__Add___12dd4e0);
    native_System_Collections_Generic_List_Vector3___Add_d2be08
              (param_1,param_4,0,param_9,
               _Method_System_Collections_Generic_List_Vector3__Add___12dd4e0);
    native_System_Collections_Generic_List_Vector3___Add_d2be08
              (param_2,param_4,0,param_9,
               _Method_System_Collections_Generic_List_Vector3__Add___12dd4e0);
    native_System_Collections_Generic_List_Vector3___Add_d2be08
              (param_2,param_3,0,param_9,
               _Method_System_Collections_Generic_List_Vector3__Add___12dd4e0);
    if (param_10 != 0) {
      native_System_Collections_Generic_List_Vector2___Add_d293ec
                (param_5,param_7,param_10,
                 _Method_System_Collections_Generic_List_Vector2__Add___12dd4b0);
      native_System_Collections_Generic_List_Vector2___Add_d293ec
                (param_5,param_8,param_10,
                 _Method_System_Collections_Generic_List_Vector2__Add___12dd4b0);
      native_System_Collections_Generic_List_Vector2___Add_d293ec
                (param_6,param_8,param_10,
                 _Method_System_Collections_Generic_List_Vector2__Add___12dd4b0);
      native_System_Collections_Generic_List_Vector2___Add_d293ec
                (param_6,param_7,param_10,
                 _Method_System_Collections_Generic_List_Vector2__Add___12dd4b0);
      if (param_11 != 0) {
        native_System_Collections_Generic_List_Color___Add_d07158
                  (uStack0000000000000000,uStack0000000000000004,uStack0000000000000008,
                   uStack000000000000000c,param_11,
                   _Method_System_Collections_Generic_List_Color__Add___12dc690);
        native_System_Collections_Generic_List_Color___Add_d07158
                  (uStack0000000000000000,uStack0000000000000004,uStack0000000000000008,
                   uStack000000000000000c,param_11,
                   _Method_System_Collections_Generic_List_Color__Add___12dc690);
        native_System_Collections_Generic_List_Color___Add_d07158
                  (uStack0000000000000000,uStack0000000000000004,uStack0000000000000008,
                   uStack000000000000000c,param_11,
                   _Method_System_Collections_Generic_List_Color__Add___12dc690);
        lVar3 = *(long *)(param_11 + 0x10);
        if (lVar3 != 0) {
          uVar2 = *(uint *)(param_11 + 0x18);
          if (uVar2 == *(uint *)(lVar3 + 0x18)) {
            (*(code *)**(undefined8 **)
                        (*(long *)(*(long *)(
                                            _Method_System_Collections_Generic_List_Color__Add___12dc690
                                            + 0x18) + 0xc0) + 0x60))(param_11,uVar2 + 1);
            uVar2 = *(uint *)(param_11 + 0x18);
            lVar3 = *(long *)(param_11 + 0x10);
            *(uint *)(param_11 + 0x18) = uVar2 + 1;
            if (lVar3 == 0) goto code_r0x00d071c8;
          }
          else {
            *(uint *)(param_11 + 0x18) = uVar2 + 1;
          }
          if (uVar2 < *(uint *)(lVar3 + 0x18)) {
            lVar3 = lVar3 + (long)(int)uVar2 * 0x10;
            *(undefined4 *)(lVar3 + 0x20) = uStack0000000000000000;
            *(undefined4 *)(lVar3 + 0x24) = uStack0000000000000004;
            *(undefined4 *)(lVar3 + 0x28) = uStack0000000000000008;
            *(undefined4 *)(lVar3 + 0x2c) = uStack000000000000000c;
            *(int *)(param_11 + 0x1c) = *(int *)(param_11 + 0x1c) + 1;
            return;
          }
          uVar1 = native_sub_43283c();
                    /* WARNING: Subroutine does not return */
          native_sub_4327dc(uVar1,0);
        }
code_r0x00d071c8:
                    /* WARNING: Subroutine does not return */
        native_sub_432810();
      }
    }
  }
                    /* WARNING: Subroutine does not return */
  native_sub_432810();
}



/* UIBasicSprite$$.ctor @ 0xc900e4
 * void UIBasicSprite___ctor (UIBasicSprite_o* __this, const MethodInfo* method); */

/* UIBasicSprite$$.ctor
   void UIBasicSprite___ctor (UIBasicSprite_o* __this, const MethodInfo* method); */

void native_UIBasicSprite___ctor_c900e4
               (undefined1 param_1 [16],undefined4 param_2,undefined4 param_3,undefined4 param_4,
               long param_5)

{
  undefined4 uVar1;
  undefined8 uStack_30;
  undefined8 uStack_28;
  
  *(undefined8 *)(param_5 + 0x194) = 0x3f80000000000004;
  uVar1 = native_UnityEngine_Color__get_white_8d9e10(0);
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



/* UIBasicSprite$$.cctor @ 0xc9017c
 * void UIBasicSprite___cctor (const MethodInfo* method); */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* UIBasicSprite$$.cctor
   void UIBasicSprite___cctor (const MethodInfo* method); */

void native_UIBasicSprite___cctor_c9017c(void)

{
  ulong *puVar1;
  char cVar2;
  bool bVar3;
  undefined8 uVar4;
  undefined8 *puVar5;
  
  if ((bRam000000000134287e & 1) == 0) {
    native_sub_43273c(&UIBasicSprite_TypeInfo_12d6400);
    native_sub_43273c(&UnityEngine_Vector2___TypeInfo_12d3470);
    bRam000000000134287e = 1;
  }
  uVar4 = native_sub_432750(_UnityEngine_Vector2___TypeInfo_12d3470,4);
  puVar5 = *(undefined8 **)(_UIBasicSprite_TypeInfo_12d6400 + 0xb8);
  *puVar5 = uVar4;
  native_sub_4326e0(puVar5,uVar4);
  uVar4 = native_sub_432750(_UnityEngine_Vector2___TypeInfo_12d3470,4);
  puVar5 = (undefined8 *)(*(long *)(_UIBasicSprite_TypeInfo_12d6400 + 0xb8) + 8);
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


