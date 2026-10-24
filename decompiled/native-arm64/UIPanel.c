/* ARM64 IL2CPP native pseudocode from Ghidra.
 * Recovered implementation, not original C# source.
 * Function boundaries follow the IL2CPP method address table. */


/* UIPanel$$get_sortingLayerName @ 0xaeeff4
 * System_String_o* UIPanel__get_sortingLayerName (UIPanel_o* __this, const MethodInfo* method); */

/* UIPanel$$get_sortingLayerName
   System_String_o* UIPanel__get_sortingLayerName (UIPanel_o* __this, const MethodInfo* method); */

undefined8 native_UIPanel__get_sortingLayerName_aeeff4(long param_1)

{
  return *(undefined8 *)(param_1 + 0x168);
}



/* UIPanel$$set_sortingLayerName @ 0xaeeffc
 * void UIPanel__set_sortingLayerName (UIPanel_o* __this, System_String_o* value, const MethodInfo* method); */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* UIPanel$$set_sortingLayerName
   void UIPanel__set_sortingLayerName (UIPanel_o* __this, System_String_o* value, const MethodInfo*
   method); */

void native_UIPanel__set_sortingLayerName_aeeffc
               (undefined1 param_1 [16],ulong param_2,ulong param_3,ulong param_4,long param_5,
               undefined8 param_6)

{
  uint uVar1;
  bool bVar2;
  int iVar3;
  int iVar4;
  int iVar5;
  ulong uVar6;
  long lVar7;
  long lVar8;
  long lVar9;
  ulong uVar10;
  undefined8 uVar11;
  uint uVar12;
  undefined4 uVar13;
  ulong uVar14;
  undefined8 uVar15;
  undefined8 uVar16;
  ulong uVar17;
  ulong uVar18;
  float fVar19;
  float fStack_48;
  float fStack_44;
  
  if ((bRam0000000001342037 & 1) == 0) {
    native_sub_43273c(&Method_System_Collections_Generic_List_UIPanel__IndexOf___12dd350);
    native_sub_43273c(&UIPanel_TypeInfo_12d6478);
    bRam0000000001342037 = 1;
  }
  uVar6 = native_System_String__op_Inequality_afbbb4(*(undefined8 *)(param_5 + 0x168),param_6,0);
  if ((uVar6 & 1) == 0) {
    return;
  }
  *(undefined8 *)(param_5 + 0x168) = param_6;
  native_sub_4326e0((undefined8 *)(param_5 + 0x168),param_6);
  if (((*(byte *)(_UIPanel_TypeInfo_12d6478 + 0x133) >> 2 & 1) != 0) &&
     (*(int *)(_UIPanel_TypeInfo_12d6478 + 0xe0) == 0)) {
    native_sub_4327ec();
  }
  if (**(long **)(_UIPanel_TypeInfo_12d6478 + 0xb8) == 0) {
                    /* WARNING: Subroutine does not return */
    native_sub_432810();
  }
  iVar3 = native_System_Collections_Generic_List_EventSystem___IndexOf_d41640
                    (**(long **)(_UIPanel_TypeInfo_12d6478 + 0xb8),param_5,
                     _Method_System_Collections_Generic_List_UIPanel__IndexOf___12dd350);
  if ((bRam0000000001342057 & 1) == 0) {
    native_sub_43273c(&Method_System_Collections_Generic_List_UIDrawCall__get_Count___12dd2c8,iVar3)
    ;
    native_sub_43273c(&Method_System_Collections_Generic_List_UIDrawCall__get_Item___12dd2d0);
    native_sub_43273c(&UnityEngine_Object_TypeInfo_12d54e0);
    bRam0000000001342057 = 1;
  }
  lVar7 = native_UIRect__get_cachedTransform_c27c58(param_5,0);
  uVar6 = native_UIPanel__get_usedForUI_aefb4c(param_5);
  if (*(int *)(param_5 + 0x140) == 0) {
    uVar13 = native_UnityEngine_Vector4__get_zero_777178(0);
    *(int *)(param_5 + 0x108) = (int)param_3;
  }
  else {
    uVar13 = native_UIPanel__get_finalClipRegion_af03c8(param_5);
    fVar19 = (float)param_3 * 0.5;
    param_3 = (ulong)(uint)fVar19;
    *(float *)(param_5 + 0x10c) = (float)param_4;
    *(float *)(param_5 + 0x108) = fVar19;
    param_4 = (ulong)(uint)((float)param_4 * 0.5);
  }
  *(undefined4 *)(param_5 + 0x100) = uVar13;
  *(int *)(param_5 + 0x104) = (int)param_2;
  *(int *)(param_5 + 0x10c) = (int)param_4;
  iVar4 = native_UnityEngine_Screen__get_width_76a5e4(0);
  iVar5 = native_UnityEngine_Screen__get_height_76a618(0);
  if (*(float *)(param_5 + 0x108) == 0.0) {
    param_2 = 0x3f000000;
    *(float *)(param_5 + 0x108) = (float)iVar4 * 0.5;
  }
  if (*(float *)(param_5 + 0x10c) == 0.0) {
    param_2 = 0x3f000000;
    *(float *)(param_5 + 0x10c) = (float)iVar5 * 0.5;
  }
  if ((uVar6 & 1) == 0) {
    if (lVar7 == 0) goto LAB_00aef47c;
    fStack_44 = (float)native_UnityEngine_Transform__get_position_77169c(lVar7,0);
    fStack_48 = (float)param_2;
    uVar6 = param_3;
  }
  else {
    lVar8 = native_UIRect__get_cachedTransform_c27c58(param_5,0);
    if (lVar8 == 0) goto LAB_00aef47c;
    lVar8 = native_UnityEngine_Transform__get_parent_765eb0(lVar8,0);
    lVar9 = native_UIRect__get_cachedTransform_c27c58(param_5,0);
    if (lVar9 == 0) goto LAB_00aef47c;
    uVar14 = native_UnityEngine_Transform__get_localPosition_7717f4(lVar9,0);
    uVar6 = param_2;
    uVar18 = param_3;
    uVar17 = param_2;
    if (*(int *)(param_5 + 0x140) != 0) {
      iVar4 = native_UnityEngine_Mathf__RoundToInt_8e50f0(uVar14,0);
      uVar14 = (ulong)(uint)(float)iVar4;
      iVar4 = native_UnityEngine_Mathf__RoundToInt_8e50f0(param_2,0);
      uVar17 = (ulong)(uint)(float)iVar4;
    }
    if (((*(byte *)(_UnityEngine_Object_TypeInfo_12d54e0 + 0x133) >> 2 & 1) != 0) &&
       (*(int *)(_UnityEngine_Object_TypeInfo_12d54e0 + 0xe0) == 0)) {
      native_sub_4327ec();
    }
    uVar10 = native_UnityEngine_Object__op_Inequality_8d76fc(lVar8,0,0);
    param_2 = uVar6;
    if ((uVar10 & 1) != 0) {
      if (lVar8 == 0) goto LAB_00aef47c;
      uVar14 = native_UnityEngine_Transform__TransformPoint_7728d8(uVar14,uVar17,param_3,lVar8,0);
      param_2 = uVar17;
      uVar18 = param_3;
    }
    fStack_44 = (float)native_UIPanel__get_drawCallOffset_aefbf0(param_5);
    if (lVar7 == 0) goto LAB_00aef47c;
    fStack_44 = (float)uVar14 + fStack_44;
    fStack_48 = (float)uVar17 + (float)param_2;
    fVar19 = (float)param_3;
    param_3 = uVar18;
    uVar6 = (ulong)(uint)(fVar19 + (float)uVar18);
  }
  uVar15 = native_UnityEngine_Transform__get_rotation_771a30(lVar7,0);
  uVar18 = param_2;
  uVar17 = param_3;
  uVar16 = native_UnityEngine_Transform__get_lossyScale_772cac(lVar7,0);
  lVar7 = *(long *)(param_5 + 0xb8);
  if (lVar7 != 0) {
    lVar8 = 0;
    do {
      uVar12 = (uint)lVar8;
      if ((int)*(uint *)(lVar7 + 0x18) <= (int)uVar12) {
        return;
      }
      if (*(uint *)(lVar7 + 0x18) <= uVar12) {
        native_System_ThrowHelper__ThrowArgumentOutOfRangeException_9fe0f4(0);
      }
      lVar7 = *(long *)(*(long *)(lVar7 + 0x10) + lVar8 * 8 + 0x20);
      if ((lVar7 == 0) ||
         (lVar9 = native_UIDrawCall__get_cachedTransform_9e5edc(lVar7,0), lVar9 == 0)) break;
      native_UnityEngine_Transform__set_position_77174c(fStack_44,fStack_48,uVar6,lVar9,0);
      native_UnityEngine_Transform__set_rotation_771b8c(uVar15,param_2,param_3,param_4,lVar9,0);
      native_UnityEngine_Transform__set_localScale_771e30(uVar16,uVar18,uVar17,lVar9,0);
      uVar1 = 0;
      if (*(int *)(param_5 + 0xa8) != 2) {
        uVar1 = uVar12;
      }
      native_UIDrawCall__set_renderQueue_9e5b4c(lVar7,uVar1 + *(int *)(param_5 + 0xac),0);
      bVar2 = false;
      if (*(char *)(param_5 + 0xa2) != '\0') {
        if (*(int *)(param_5 + 0x140) == 0) {
          bVar2 = true;
        }
        else {
          bVar2 = *(int *)(param_5 + 0x140) == 4;
        }
      }
      *(bool *)(lVar7 + 0x40) = bVar2;
      if (*(char *)(param_5 + 0x19a) == '\0') {
        iVar4 = 0;
      }
      else if ((*(int *)(param_5 + 0x160) != 0) || (iVar4 = iVar3, *(int *)(param_5 + 0xa8) != 0)) {
        iVar4 = *(int *)(param_5 + 0x160);
      }
      native_UIDrawCall__set_sortingOrder_9e5c08(lVar7,iVar4,0);
      if (*(char *)(param_5 + 0x19a) == '\0') {
        uVar11 = 0;
      }
      else {
        uVar11 = *(undefined8 *)(param_5 + 0x168);
      }
      native_UIDrawCall__set_sortingLayerName_9e5d7c(lVar7,uVar11,0);
      *(undefined8 *)(lVar7 + 0x38) = *(undefined8 *)(param_5 + 0x128);
      native_sub_4326e0(lVar7 + 0x38);
      native_UIDrawCall__set_shadowMode_9e61ec(lVar7,*(undefined4 *)(param_5 + 0x9c),0);
      lVar7 = *(long *)(param_5 + 0xb8);
      lVar8 = lVar8 + 1;
    } while (lVar7 != 0);
  }
LAB_00aef47c:
                    /* WARNING: Subroutine does not return */
  native_sub_432810();
}



/* UIPanel$$get_nextUnusedDepth @ 0xaef4a8
 * int32_t UIPanel__get_nextUnusedDepth (const MethodInfo* method); */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* UIPanel$$get_nextUnusedDepth
   int32_t UIPanel__get_nextUnusedDepth (const MethodInfo* method); */

int native_UIPanel__get_nextUnusedDepth_aef4a8(void)

{
  int iVar1;
  int iVar2;
  long lVar3;
  long lVar4;
  
  if ((bRam0000000001342038 & 1) == 0) {
    native_sub_43273c(&Method_System_Collections_Generic_List_UIPanel__get_Count___12dd368);
    native_sub_43273c(&Method_System_Collections_Generic_List_UIPanel__get_Item___12dd370);
    native_sub_43273c(&UIPanel_TypeInfo_12d6478);
    bRam0000000001342038 = 1;
  }
  if (((*(byte *)(_UIPanel_TypeInfo_12d6478 + 0x133) >> 2 & 1) != 0) &&
     (*(int *)(_UIPanel_TypeInfo_12d6478 + 0xe0) == 0)) {
    native_sub_4327ec();
  }
  if (**(long **)(_UIPanel_TypeInfo_12d6478 + 0xb8) != 0) {
    iVar1 = *(int *)(**(long **)(_UIPanel_TypeInfo_12d6478 + 0xb8) + 0x18);
    if (0 < iVar1) {
      lVar3 = 0;
      iVar2 = -0x80000000;
      while( true ) {
        if (((*(byte *)(_UIPanel_TypeInfo_12d6478 + 0x133) >> 2 & 1) != 0) &&
           (*(int *)(_UIPanel_TypeInfo_12d6478 + 0xe0) == 0)) {
          native_sub_4327ec();
        }
        lVar4 = **(long **)(_UIPanel_TypeInfo_12d6478 + 0xb8);
        if (lVar4 == 0) goto LAB_00aef5d8;
        if (*(uint *)(lVar4 + 0x18) <= (uint)lVar3) {
          native_System_ThrowHelper__ThrowArgumentOutOfRangeException_9fe0f4(0);
        }
        lVar4 = *(long *)(*(long *)(lVar4 + 0x10) + lVar3 * 8 + 0x20);
        if (lVar4 == 0) goto LAB_00aef5d8;
        iVar2 = native_UnityEngine_Mathf__Max_8e4cd0(iVar2,*(undefined4 *)(lVar4 + 0x15c),0);
        if (iVar1 <= (int)((uint)lVar3 + 1)) break;
        lVar3 = lVar3 + 1;
      }
      if (iVar2 != -0x80000000) {
        return iVar2 + 1;
      }
    }
    return 0;
  }
LAB_00aef5d8:
                    /* WARNING: Subroutine does not return */
  native_sub_432810();
}



/* UIPanel$$get_canBeAnchored @ 0xaef5dc
 * bool UIPanel__get_canBeAnchored (UIPanel_o* __this, const MethodInfo* method); */

/* UIPanel$$get_canBeAnchored
   bool UIPanel__get_canBeAnchored (UIPanel_o* __this, const MethodInfo* method); */

bool native_UIPanel__get_canBeAnchored_aef5dc(long param_1)

{
  return *(int *)(param_1 + 0x140) != 0;
}



/* UIPanel$$get_alpha @ 0xaef5ec
 * float UIPanel__get_alpha (UIPanel_o* __this, const MethodInfo* method); */

/* UIPanel$$get_alpha
   float UIPanel__get_alpha (UIPanel_o* __this, const MethodInfo* method); */

undefined4 native_UIPanel__get_alpha_aef5ec(long param_1)

{
  return *(undefined4 *)(param_1 + 0x130);
}



/* UIPanel$$set_alpha @ 0xaef5f4
 * void UIPanel__set_alpha (UIPanel_o* __this, float value, const MethodInfo* method); */

/* UIPanel$$set_alpha
   void UIPanel__set_alpha (UIPanel_o* __this, float value, const MethodInfo* method); */

void native_UIPanel__set_alpha_aef5f4(undefined8 param_1,long *param_2)

{
  int iVar1;
  bool bVar2;
  uint uVar3;
  long lVar4;
  float fVar5;
  float fVar6;
  
  if ((bRam0000000001342039 & 1) == 0) {
    native_sub_43273c(&Method_System_Collections_Generic_List_UIDrawCall__get_Count___12dd2c8);
    native_sub_43273c(&Method_System_Collections_Generic_List_UIDrawCall__get_Item___12dd2d0);
    bRam0000000001342039 = 1;
  }
  fVar5 = (float)native_UnityEngine_Mathf__Clamp01_8d9d9c(param_1,0);
  fVar6 = *(float *)(param_2 + 0x26);
  if (fVar6 == fVar5) {
    return;
  }
  lVar4 = param_2[0x17];
  *(undefined4 *)(param_2 + 0x30) = 0xffffffff;
  *(undefined1 *)((long)param_2 + 0x171) = 1;
  *(float *)(param_2 + 0x26) = fVar5;
  if (lVar4 != 0) {
    iVar1 = *(int *)(lVar4 + 0x18);
    if (iVar1 < 1) {
LAB_00aef6c8:
      if (fVar6 <= 0.001) {
        bVar2 = 0.001 < *(float *)(param_2 + 0x26);
      }
      else {
        bVar2 = false;
      }
                    /* WARNING: Could not recover jumptable at 0x00aef724. Too many branches */
                    /* WARNING: Treating indirect jump as call */
      (**(code **)(*param_2 + 0x1f8))(param_2,bVar2,*(undefined8 *)(*param_2 + 0x200));
      return;
    }
    uVar3 = 0;
    do {
      if (*(uint *)(lVar4 + 0x18) <= uVar3) {
        native_System_ThrowHelper__ThrowArgumentOutOfRangeException_9fe0f4(0);
      }
      lVar4 = *(long *)(*(long *)(lVar4 + 0x10) + (long)(int)uVar3 * 8 + 0x20);
      if (lVar4 == 0) break;
      uVar3 = uVar3 + 1;
      *(undefined1 *)(lVar4 + 0xd8) = 1;
      if (iVar1 <= (int)uVar3) goto LAB_00aef6c8;
      lVar4 = param_2[0x17];
    } while (lVar4 != 0);
  }
                    /* WARNING: Subroutine does not return */
  native_sub_432810();
}



/* UIPanel$$get_alphaProperty @ 0xaef728
 * System_String_o* UIPanel__get_alphaProperty (UIPanel_o* __this, const MethodInfo* method); */

/* UIPanel$$get_alphaProperty
   System_String_o* UIPanel__get_alphaProperty (UIPanel_o* __this, const MethodInfo* method); */

undefined8 native_UIPanel__get_alphaProperty_aef728(long param_1)

{
  return *(undefined8 *)(param_1 + 0x138);
}



/* UIPanel$$set_alphaProperty @ 0xaef730
 * void UIPanel__set_alphaProperty (UIPanel_o* __this, System_String_o* value, const MethodInfo* method); */

/* UIPanel$$set_alphaProperty
   void UIPanel__set_alphaProperty (UIPanel_o* __this, System_String_o* value, const MethodInfo*
   method); */

void native_UIPanel__set_alphaProperty_aef730(long *param_1,long param_2)

{
  ulong uVar1;
  
  uVar1 = native_System_String__op_Inequality_afbbb4(param_1[0x27],param_2,0);
  if ((uVar1 & 1) != 0) {
    param_1[0x27] = param_2;
    native_sub_4326e0(param_1 + 0x27,param_2);
    *(undefined1 *)((long)param_1 + 0x171) = 1;
                    /* WARNING: Could not recover jumptable at 0x00aef784. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (**(code **)(*param_1 + 0x1f8))(param_1,1,*(undefined8 *)(*param_1 + 0x200));
    return;
  }
  return;
}



/* UIPanel$$get_depth @ 0xaef794
 * int32_t UIPanel__get_depth (UIPanel_o* __this, const MethodInfo* method); */

/* UIPanel$$get_depth
   int32_t UIPanel__get_depth (UIPanel_o* __this, const MethodInfo* method); */

undefined4 native_UIPanel__get_depth_aef794(long param_1)

{
  return *(undefined4 *)(param_1 + 0x15c);
}



/* UIPanel$$set_depth @ 0xaef79c
 * void UIPanel__set_depth (UIPanel_o* __this, int32_t value, const MethodInfo* method); */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* UIPanel$$set_depth
   void UIPanel__set_depth (UIPanel_o* __this, int32_t value, const MethodInfo* method); */

void native_UIPanel__set_depth_aef79c(long param_1,int param_2)

{
  long lVar1;
  long lVar2;
  long lVar3;
  
  if ((bRam000000000134203a & 1) == 0) {
    native_sub_43273c(&Method_System_Comparison_UIPanel___ctor___12d8b48);
    native_sub_43273c(&System_Comparison_UIPanel__TypeInfo_12d21e8);
    native_sub_43273c(&Method_System_Collections_Generic_List_UIPanel__Sort___12dd360);
    native_sub_43273c(&Method_UIPanel_CompareFunc___12e7848);
    native_sub_43273c(&UIPanel_TypeInfo_12d6478);
    bRam000000000134203a = 1;
  }
  if (*(int *)(param_1 + 0x15c) == param_2) {
    return;
  }
  *(int *)(param_1 + 0x15c) = param_2;
  if (((*(byte *)(_UIPanel_TypeInfo_12d6478 + 0x133) >> 2 & 1) != 0) &&
     (*(int *)(_UIPanel_TypeInfo_12d6478 + 0xe0) == 0)) {
    native_sub_4327ec();
  }
  lVar3 = **(long **)(_UIPanel_TypeInfo_12d6478 + 0xb8);
  lVar2 = native_sub_432808(_System_Comparison_UIPanel__TypeInfo_12d21e8);
  native_System_Comparison_ABSSequentiable____ctor_bbdf08
            (lVar2,0,_Method_UIPanel_CompareFunc___12e7848,
             _Method_System_Comparison_UIPanel___ctor___12d8b48);
  lVar1 = _Method_System_Collections_Generic_List_UIPanel__Sort___12dd360;
  if (lVar3 == 0) {
                    /* WARNING: Subroutine does not return */
    native_sub_432810();
  }
  if (lVar2 == 0) {
    native_System_ThrowHelper__ThrowArgumentNullException_9fe014(8);
  }
  if (0 < *(int *)(lVar3 + 0x18)) {
                    /* WARNING: Could not recover jumptable at 0x00d426c8. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*(code *)**(undefined8 **)(*(long *)(*(long *)(lVar1 + 0x18) + 0xc0) + 0x118))
              (*(undefined8 *)(lVar3 + 0x10),0,*(int *)(lVar3 + 0x18),lVar2);
    return;
  }
  return;
}



/* UIPanel$$get_sortingOrder @ 0xaef8b0
 * int32_t UIPanel__get_sortingOrder (UIPanel_o* __this, const MethodInfo* method); */

/* UIPanel$$get_sortingOrder
   int32_t UIPanel__get_sortingOrder (UIPanel_o* __this, const MethodInfo* method); */

undefined4 native_UIPanel__get_sortingOrder_aef8b0(long param_1)

{
  return *(undefined4 *)(param_1 + 0x160);
}



/* UIPanel$$set_sortingOrder @ 0xaef8b8
 * void UIPanel__set_sortingOrder (UIPanel_o* __this, int32_t value, const MethodInfo* method); */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* UIPanel$$set_sortingOrder
   void UIPanel__set_sortingOrder (UIPanel_o* __this, int32_t value, const MethodInfo* method); */

void native_UIPanel__set_sortingOrder_aef8b8
               (undefined1 param_1 [16],ulong param_2,ulong param_3,ulong param_4,long param_5,
               int param_6)

{
  uint uVar1;
  bool bVar2;
  int iVar3;
  int iVar4;
  int iVar5;
  long lVar6;
  ulong uVar7;
  long lVar8;
  long lVar9;
  ulong uVar10;
  undefined8 uVar11;
  uint uVar12;
  undefined4 uVar13;
  ulong uVar14;
  undefined8 uVar15;
  undefined8 uVar16;
  ulong uVar17;
  ulong uVar18;
  float fVar19;
  float fStack_48;
  float fStack_44;
  
  if ((bRam000000000134203b & 1) == 0) {
    native_sub_43273c(&Method_System_Collections_Generic_List_UIPanel__IndexOf___12dd350);
    native_sub_43273c(&UIPanel_TypeInfo_12d6478);
    bRam000000000134203b = 1;
  }
  if (*(int *)(param_5 + 0x160) == param_6) {
    return;
  }
  *(int *)(param_5 + 0x160) = param_6;
  if (((*(byte *)(_UIPanel_TypeInfo_12d6478 + 0x133) >> 2 & 1) != 0) &&
     (*(int *)(_UIPanel_TypeInfo_12d6478 + 0xe0) == 0)) {
    native_sub_4327ec();
  }
  if (**(long **)(_UIPanel_TypeInfo_12d6478 + 0xb8) == 0) {
                    /* WARNING: Subroutine does not return */
    native_sub_432810();
  }
  iVar5 = native_System_Collections_Generic_List_EventSystem___IndexOf_d41640
                    (**(long **)(_UIPanel_TypeInfo_12d6478 + 0xb8),param_5,
                     _Method_System_Collections_Generic_List_UIPanel__IndexOf___12dd350);
  if ((bRam0000000001342057 & 1) == 0) {
    native_sub_43273c(&Method_System_Collections_Generic_List_UIDrawCall__get_Count___12dd2c8,iVar5)
    ;
    native_sub_43273c(&Method_System_Collections_Generic_List_UIDrawCall__get_Item___12dd2d0);
    native_sub_43273c(&UnityEngine_Object_TypeInfo_12d54e0);
    bRam0000000001342057 = 1;
  }
  lVar6 = native_UIRect__get_cachedTransform_c27c58(param_5,0);
  uVar7 = native_UIPanel__get_usedForUI_aefb4c(param_5);
  if (*(int *)(param_5 + 0x140) == 0) {
    uVar13 = native_UnityEngine_Vector4__get_zero_777178(0);
    *(int *)(param_5 + 0x108) = (int)param_3;
  }
  else {
    uVar13 = native_UIPanel__get_finalClipRegion_af03c8(param_5);
    fVar19 = (float)param_3 * 0.5;
    param_3 = (ulong)(uint)fVar19;
    *(float *)(param_5 + 0x10c) = (float)param_4;
    *(float *)(param_5 + 0x108) = fVar19;
    param_4 = (ulong)(uint)((float)param_4 * 0.5);
  }
  *(undefined4 *)(param_5 + 0x100) = uVar13;
  *(int *)(param_5 + 0x104) = (int)param_2;
  *(int *)(param_5 + 0x10c) = (int)param_4;
  iVar3 = native_UnityEngine_Screen__get_width_76a5e4(0);
  iVar4 = native_UnityEngine_Screen__get_height_76a618(0);
  if (*(float *)(param_5 + 0x108) == 0.0) {
    param_2 = 0x3f000000;
    *(float *)(param_5 + 0x108) = (float)iVar3 * 0.5;
  }
  if (*(float *)(param_5 + 0x10c) == 0.0) {
    param_2 = 0x3f000000;
    *(float *)(param_5 + 0x10c) = (float)iVar4 * 0.5;
  }
  if ((uVar7 & 1) == 0) {
    if (lVar6 == 0) goto LAB_00aef47c;
    fStack_44 = (float)native_UnityEngine_Transform__get_position_77169c(lVar6,0);
    fStack_48 = (float)param_2;
    uVar7 = param_3;
  }
  else {
    lVar8 = native_UIRect__get_cachedTransform_c27c58(param_5,0);
    if (lVar8 == 0) goto LAB_00aef47c;
    lVar8 = native_UnityEngine_Transform__get_parent_765eb0(lVar8,0);
    lVar9 = native_UIRect__get_cachedTransform_c27c58(param_5,0);
    if (lVar9 == 0) goto LAB_00aef47c;
    uVar14 = native_UnityEngine_Transform__get_localPosition_7717f4(lVar9,0);
    uVar7 = param_2;
    uVar18 = param_3;
    uVar17 = param_2;
    if (*(int *)(param_5 + 0x140) != 0) {
      iVar3 = native_UnityEngine_Mathf__RoundToInt_8e50f0(uVar14,0);
      uVar14 = (ulong)(uint)(float)iVar3;
      iVar3 = native_UnityEngine_Mathf__RoundToInt_8e50f0(param_2,0);
      uVar17 = (ulong)(uint)(float)iVar3;
    }
    if (((*(byte *)(_UnityEngine_Object_TypeInfo_12d54e0 + 0x133) >> 2 & 1) != 0) &&
       (*(int *)(_UnityEngine_Object_TypeInfo_12d54e0 + 0xe0) == 0)) {
      native_sub_4327ec();
    }
    uVar10 = native_UnityEngine_Object__op_Inequality_8d76fc(lVar8,0,0);
    param_2 = uVar7;
    if ((uVar10 & 1) != 0) {
      if (lVar8 == 0) goto LAB_00aef47c;
      uVar14 = native_UnityEngine_Transform__TransformPoint_7728d8(uVar14,uVar17,param_3,lVar8,0);
      param_2 = uVar17;
      uVar18 = param_3;
    }
    fStack_44 = (float)native_UIPanel__get_drawCallOffset_aefbf0(param_5);
    if (lVar6 == 0) goto LAB_00aef47c;
    fStack_44 = (float)uVar14 + fStack_44;
    fStack_48 = (float)uVar17 + (float)param_2;
    fVar19 = (float)param_3;
    param_3 = uVar18;
    uVar7 = (ulong)(uint)(fVar19 + (float)uVar18);
  }
  uVar15 = native_UnityEngine_Transform__get_rotation_771a30(lVar6,0);
  uVar18 = param_2;
  uVar17 = param_3;
  uVar16 = native_UnityEngine_Transform__get_lossyScale_772cac(lVar6,0);
  lVar6 = *(long *)(param_5 + 0xb8);
  if (lVar6 != 0) {
    lVar8 = 0;
    do {
      uVar12 = (uint)lVar8;
      if ((int)*(uint *)(lVar6 + 0x18) <= (int)uVar12) {
        return;
      }
      if (*(uint *)(lVar6 + 0x18) <= uVar12) {
        native_System_ThrowHelper__ThrowArgumentOutOfRangeException_9fe0f4(0);
      }
      lVar6 = *(long *)(*(long *)(lVar6 + 0x10) + lVar8 * 8 + 0x20);
      if ((lVar6 == 0) ||
         (lVar9 = native_UIDrawCall__get_cachedTransform_9e5edc(lVar6,0), lVar9 == 0)) break;
      native_UnityEngine_Transform__set_position_77174c(fStack_44,fStack_48,uVar7,lVar9,0);
      native_UnityEngine_Transform__set_rotation_771b8c(uVar15,param_2,param_3,param_4,lVar9,0);
      native_UnityEngine_Transform__set_localScale_771e30(uVar16,uVar18,uVar17,lVar9,0);
      uVar1 = 0;
      if (*(int *)(param_5 + 0xa8) != 2) {
        uVar1 = uVar12;
      }
      native_UIDrawCall__set_renderQueue_9e5b4c(lVar6,uVar1 + *(int *)(param_5 + 0xac),0);
      bVar2 = false;
      if (*(char *)(param_5 + 0xa2) != '\0') {
        if (*(int *)(param_5 + 0x140) == 0) {
          bVar2 = true;
        }
        else {
          bVar2 = *(int *)(param_5 + 0x140) == 4;
        }
      }
      *(bool *)(lVar6 + 0x40) = bVar2;
      if (*(char *)(param_5 + 0x19a) == '\0') {
        iVar3 = 0;
      }
      else if ((*(int *)(param_5 + 0x160) != 0) || (iVar3 = iVar5, *(int *)(param_5 + 0xa8) != 0)) {
        iVar3 = *(int *)(param_5 + 0x160);
      }
      native_UIDrawCall__set_sortingOrder_9e5c08(lVar6,iVar3,0);
      if (*(char *)(param_5 + 0x19a) == '\0') {
        uVar11 = 0;
      }
      else {
        uVar11 = *(undefined8 *)(param_5 + 0x168);
      }
      native_UIDrawCall__set_sortingLayerName_9e5d7c(lVar6,uVar11,0);
      *(undefined8 *)(lVar6 + 0x38) = *(undefined8 *)(param_5 + 0x128);
      native_sub_4326e0(lVar6 + 0x38);
      native_UIDrawCall__set_shadowMode_9e61ec(lVar6,*(undefined4 *)(param_5 + 0x9c),0);
      lVar6 = *(long *)(param_5 + 0xb8);
      lVar8 = lVar8 + 1;
    } while (lVar6 != 0);
  }
LAB_00aef47c:
                    /* WARNING: Subroutine does not return */
  native_sub_432810();
}



/* UIPanel$$CompareFunc @ 0xaef97c
 * int32_t UIPanel__CompareFunc (UIPanel_o* a, UIPanel_o* b, const MethodInfo* method); */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* UIPanel$$CompareFunc
   int32_t UIPanel__CompareFunc (UIPanel_o* a, UIPanel_o* b, const MethodInfo* method); */

undefined4 native_UIPanel__CompareFunc_aef97c(long param_1,long param_2)

{
  int iVar1;
  int iVar2;
  ulong uVar3;
  
  if ((bRam000000000134203c & 1) == 0) {
    native_sub_43273c(&UnityEngine_Object_TypeInfo_12d54e0);
    bRam000000000134203c = 1;
  }
  if (((*(byte *)(_UnityEngine_Object_TypeInfo_12d54e0 + 0x133) >> 2 & 1) != 0) &&
     (*(int *)(_UnityEngine_Object_TypeInfo_12d54e0 + 0xe0) == 0)) {
    native_sub_4327ec();
  }
  uVar3 = native_UnityEngine_Object__op_Inequality_8d76fc(param_1,param_2,0);
  if ((uVar3 & 1) != 0) {
    if (((*(byte *)(_UnityEngine_Object_TypeInfo_12d54e0 + 0x133) >> 2 & 1) != 0) &&
       (*(int *)(_UnityEngine_Object_TypeInfo_12d54e0 + 0xe0) == 0)) {
      native_sub_4327ec();
    }
    uVar3 = native_UnityEngine_Object__op_Inequality_8d76fc(param_1,0,0);
    if ((uVar3 & 1) != 0) {
      if (((*(byte *)(_UnityEngine_Object_TypeInfo_12d54e0 + 0x133) >> 2 & 1) != 0) &&
         (*(int *)(_UnityEngine_Object_TypeInfo_12d54e0 + 0xe0) == 0)) {
        native_sub_4327ec();
      }
      uVar3 = native_UnityEngine_Object__op_Inequality_8d76fc(param_2,0,0);
      if ((uVar3 & 1) != 0) {
        if ((param_1 == 0) || (param_2 == 0)) {
                    /* WARNING: Subroutine does not return */
          native_sub_432810();
        }
        if (*(int *)(param_1 + 0x15c) < *(int *)(param_2 + 0x15c)) {
          return 0xffffffff;
        }
        if (*(int *)(param_2 + 0x15c) < *(int *)(param_1 + 0x15c)) {
          return 1;
        }
        iVar1 = native_UnityEngine_Object__GetInstanceID_8e0f48(param_1,0);
        iVar2 = native_UnityEngine_Object__GetInstanceID_8e0f48(param_2,0);
        if (iVar2 <= iVar1) {
          return 1;
        }
        return 0xffffffff;
      }
    }
  }
  return 0;
}



/* UIPanel$$get_width @ 0xaefab0
 * float UIPanel__get_width (UIPanel_o* __this, const MethodInfo* method); */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* UIPanel$$get_width
   float UIPanel__get_width (UIPanel_o* __this, const MethodInfo* method); */

undefined1  [16] native_UIPanel__get_width_aefab0(long param_1)

{
  undefined4 uVar1;
  undefined4 extraout_s0;
  undefined4 uVar3;
  undefined4 extraout_var;
  undefined8 uVar4;
  undefined8 extraout_var_00;
  undefined1 auVar2 [16];
  
  if ((bRam0000000001342065 & 1) == 0) {
    native_sub_43273c(&NGUITools_TypeInfo_12d53c8);
    bRam0000000001342065 = 1;
  }
  if (*(int *)(param_1 + 0x140) == 0) {
    if (((*(byte *)(_NGUITools_TypeInfo_12d53c8 + 0x133) >> 2 & 1) != 0) &&
       (*(int *)(_NGUITools_TypeInfo_12d53c8 + 0xe0) == 0)) {
      native_sub_4327ec();
    }
    native_NGUITools__get_screenSize_7338a0(0);
    uVar1 = extraout_s0;
    uVar3 = extraout_var;
    uVar4 = extraout_var_00;
  }
  else {
    uVar1 = *(undefined4 *)(param_1 + 0x14c);
    uVar3 = 0;
    uVar4 = 0;
  }
  auVar2._4_4_ = uVar3;
  auVar2._0_4_ = uVar1;
  auVar2._8_8_ = uVar4;
  return auVar2;
}



/* UIPanel$$get_height @ 0xaefb2c
 * float UIPanel__get_height (UIPanel_o* __this, const MethodInfo* method); */

/* UIPanel$$get_height
   float UIPanel__get_height (UIPanel_o* __this, const MethodInfo* method); */

undefined1  [16] native_UIPanel__get_height_aefb2c(undefined1 param_1 [16],undefined1 param_2 [16])

{
  undefined1 auVar1 [16];
  undefined8 uVar2;
  undefined8 uVar3;
  
  uVar3 = param_2._8_8_;
  uVar2 = param_2._0_8_;
  native_UIPanel__GetViewSize_aefab4();
  auVar1._8_8_ = uVar3;
  auVar1._0_8_ = uVar2;
  return auVar1;
}



/* UIPanel$$get_halfPixelOffset @ 0xaefb44
 * bool UIPanel__get_halfPixelOffset (UIPanel_o* __this, const MethodInfo* method); */

/* UIPanel$$get_halfPixelOffset
   bool UIPanel__get_halfPixelOffset (UIPanel_o* __this, const MethodInfo* method); */

undefined8 native_UIPanel__get_halfPixelOffset_aefb44(void)

{
  return 0;
}



/* UIPanel$$get_usedForUI @ 0xaefb4c
 * bool UIPanel__get_usedForUI (UIPanel_o* __this, const MethodInfo* method); */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* UIPanel$$get_usedForUI
   bool UIPanel__get_usedForUI (UIPanel_o* __this, const MethodInfo* method); */

undefined8 native_UIPanel__get_usedForUI_aefb4c(long param_1)

{
  undefined8 uVar1;
  ulong uVar2;
  long lVar3;
  
  if ((bRam000000000134203d & 1) == 0) {
    native_sub_43273c(&UnityEngine_Object_TypeInfo_12d54e0);
    bRam000000000134203d = 1;
  }
  uVar1 = native_UIRect__get_anchorCamera_c26f1c(param_1,0);
  if (((*(byte *)(_UnityEngine_Object_TypeInfo_12d54e0 + 0x133) >> 2 & 1) != 0) &&
     (*(int *)(_UnityEngine_Object_TypeInfo_12d54e0 + 0xe0) == 0)) {
    native_sub_4327ec(_UnityEngine_Object_TypeInfo_12d54e0);
  }
  uVar2 = native_UnityEngine_Object__op_Inequality_8d76fc(uVar1,0,0);
  if ((uVar2 & 1) != 0) {
    lVar3 = *(long *)(param_1 + 0x80);
    if (lVar3 != 0) {
      if (pcRam00000000013409b0 == (code *)0x0) {
        pcRam00000000013409b0 = (code *)native_sub_4326f0(&UNK_00e2c92c);
      }
                    /* WARNING: Could not recover jumptable at 0x008d86fc. Too many branches */
                    /* WARNING: Treating indirect jump as call */
      uVar1 = (*pcRam00000000013409b0)(lVar3);
      return uVar1;
    }
                    /* WARNING: Subroutine does not return */
    native_sub_432810();
  }
  return 0;
}



/* UIPanel$$get_drawCallOffset @ 0xaefbf0
 * UnityEngine_Vector3_o UIPanel__get_drawCallOffset (UIPanel_o* __this, const MethodInfo* method); */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* UIPanel$$get_drawCallOffset
   UnityEngine_Vector3_o UIPanel__get_drawCallOffset (UIPanel_o* __this, const MethodInfo* method);
    */

void native_UIPanel__get_drawCallOffset_aefbf0
               (undefined1 param_1 [16],undefined1 param_2 [16],long param_3)

{
  undefined8 uVar1;
  ulong uVar2;
  long lVar3;
  undefined8 uVar4;
  undefined4 uVar5;
  undefined4 uVar6;
  
  uVar6 = param_2._4_4_;
  uVar5 = param_2._0_4_;
  if ((bRam000000000134203e & 1) == 0) {
    native_sub_43273c(&UnityEngine_Object_TypeInfo_12d54e0);
    bRam000000000134203e = 1;
  }
  uVar1 = native_UIRect__get_anchorCamera_c26f1c(param_3,0);
  if (((*(byte *)(_UnityEngine_Object_TypeInfo_12d54e0 + 0x133) >> 2 & 1) != 0) &&
     (*(int *)(_UnityEngine_Object_TypeInfo_12d54e0 + 0xe0) == 0)) {
    native_sub_4327ec(_UnityEngine_Object_TypeInfo_12d54e0);
  }
  uVar2 = native_UnityEngine_Object__op_Inequality_8d76fc(uVar1,0,0);
  if ((uVar2 & 1) == 0) {
LAB_00aefcf8:
    native_UnityEngine_Vector3__get_zero_776668(0);
    return;
  }
  if (*(long *)(param_3 + 0x80) != 0) {
    uVar2 = native_UnityEngine_Camera__get_orthographic_8d86c0(*(long *)(param_3 + 0x80),0);
    if ((uVar2 & 1) == 0) goto LAB_00aefcf8;
    uVar4 = native_UIPanel__GetWindowSize_aefd70(param_3);
    uVar1 = native_UIRect__get_root_c2d7ac(param_3,0);
    if (((*(byte *)(_UnityEngine_Object_TypeInfo_12d54e0 + 0x133) >> 2 & 1) != 0) &&
       (*(int *)(_UnityEngine_Object_TypeInfo_12d54e0 + 0xe0) == 0)) {
      native_sub_4327ec(_UnityEngine_Object_TypeInfo_12d54e0);
    }
    uVar2 = native_UnityEngine_Object__op_Inequality_8d76fc(uVar1,0,0);
    if ((uVar2 & 1) != 0) {
      lVar3 = native_UIRect__get_root_c2d7ac(param_3,0);
      if (lVar3 == 0) goto LAB_00aefd6c;
      native_UIRoot__get_pixelSizeAdjustment_c2f740(lVar3,0);
    }
    if (*(long *)(param_3 + 0x80) != 0) {
      native_UnityEngine_Camera__get_orthographicSize_8d8630(*(long *)(param_3 + 0x80),0);
      native_UnityEngine_Mathf__RoundToInt_8e50f0(uVar4,0);
      native_UnityEngine_Mathf__RoundToInt_8e50f0(CONCAT44(uVar6,uVar5),0);
      return;
    }
  }
LAB_00aefd6c:
                    /* WARNING: Subroutine does not return */
  native_sub_432810();
}



/* UIPanel$$get_clipping @ 0xaefe6c
 * int32_t UIPanel__get_clipping (UIPanel_o* __this, const MethodInfo* method); */

/* UIPanel$$get_clipping
   int32_t UIPanel__get_clipping (UIPanel_o* __this, const MethodInfo* method); */

undefined4 native_UIPanel__get_clipping_aefe6c(long param_1)

{
  return *(undefined4 *)(param_1 + 0x140);
}



/* UIPanel$$set_clipping @ 0xaefe74
 * void UIPanel__set_clipping (UIPanel_o* __this, int32_t value, const MethodInfo* method); */

/* UIPanel$$set_clipping
   void UIPanel__set_clipping (UIPanel_o* __this, int32_t value, const MethodInfo* method); */

void native_UIPanel__set_clipping_aefe74(long param_1,int param_2)

{
  if (*(int *)(param_1 + 0x140) != param_2) {
    *(int *)(param_1 + 0x140) = param_2;
    *(undefined1 *)(param_1 + 0x171) = 1;
    *(undefined4 *)(param_1 + 0x17c) = 0xffffffff;
  }
  return;
}



/* UIPanel$$get_parentPanel @ 0xaefe98
 * UIPanel_o* UIPanel__get_parentPanel (UIPanel_o* __this, const MethodInfo* method); */

/* UIPanel$$get_parentPanel
   UIPanel_o* UIPanel__get_parentPanel (UIPanel_o* __this, const MethodInfo* method); */

undefined8 native_UIPanel__get_parentPanel_aefe98(long param_1)

{
  return *(undefined8 *)(param_1 + 0x1a0);
}



/* UIPanel$$get_clipCount @ 0xaefea0
 * int32_t UIPanel__get_clipCount (UIPanel_o* __this, const MethodInfo* method); */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* UIPanel$$get_clipCount
   int32_t UIPanel__get_clipCount (UIPanel_o* __this, const MethodInfo* method); */

int native_UIPanel__get_clipCount_aefea0(long param_1)

{
  ulong uVar1;
  int iVar2;
  
  if ((bRam000000000134203f & 1) == 0) {
    native_sub_43273c(&UnityEngine_Object_TypeInfo_12d54e0);
    bRam000000000134203f = 1;
  }
  iVar2 = 0;
  while( true ) {
    if (((*(byte *)(_UnityEngine_Object_TypeInfo_12d54e0 + 0x133) >> 2 & 1) != 0) &&
       (*(int *)(_UnityEngine_Object_TypeInfo_12d54e0 + 0xe0) == 0)) {
      native_sub_4327ec();
    }
    uVar1 = native_UnityEngine_Object__op_Inequality_8d76fc(param_1,0,0);
    if ((uVar1 & 1) == 0) break;
    if (param_1 == 0) {
                    /* WARNING: Subroutine does not return */
      native_sub_432810();
    }
    if ((*(uint *)(param_1 + 0x140) | 2) == 3) {
      iVar2 = iVar2 + 1;
    }
    param_1 = *(long *)(param_1 + 0x1a0);
  }
  return iVar2;
}



/* UIPanel$$get_hasClipping @ 0xaeff44
 * bool UIPanel__get_hasClipping (UIPanel_o* __this, const MethodInfo* method); */

/* UIPanel$$get_hasClipping
   bool UIPanel__get_hasClipping (UIPanel_o* __this, const MethodInfo* method); */

bool native_UIPanel__get_hasClipping_aeff44(long param_1)

{
  return (*(uint *)(param_1 + 0x140) | 2) == 3;
}



/* UIPanel$$get_hasCumulativeClipping @ 0xaeff58
 * bool UIPanel__get_hasCumulativeClipping (UIPanel_o* __this, const MethodInfo* method); */

/* UIPanel$$get_hasCumulativeClipping
   bool UIPanel__get_hasCumulativeClipping (UIPanel_o* __this, const MethodInfo* method); */

bool native_UIPanel__get_hasCumulativeClipping_aeff58(void)

{
  int iVar1;
  
  iVar1 = native_UIPanel__get_clipCount_aefea0();
  return iVar1 != 0;
}



/* UIPanel$$get_clipsChildren @ 0xaeff74
 * bool UIPanel__get_clipsChildren (UIPanel_o* __this, const MethodInfo* method); */

/* UIPanel$$get_clipsChildren
   bool UIPanel__get_clipsChildren (UIPanel_o* __this, const MethodInfo* method); */

bool native_UIPanel__get_clipsChildren_aeff74(void)

{
  int iVar1;
  
  iVar1 = native_UIPanel__get_clipCount_aefea0();
  return iVar1 != 0;
}



/* UIPanel$$get_clipOffset @ 0xaeff90
 * UnityEngine_Vector2_o UIPanel__get_clipOffset (UIPanel_o* __this, const MethodInfo* method); */

/* UIPanel$$get_clipOffset
   UnityEngine_Vector2_o UIPanel__get_clipOffset (UIPanel_o* __this, const MethodInfo* method); */

undefined4 native_UIPanel__get_clipOffset_aeff90(long param_1)

{
  return *(undefined4 *)(param_1 + 0x174);
}



/* UIPanel$$set_clipOffset @ 0xaeff9c
 * void UIPanel__set_clipOffset (UIPanel_o* __this, UnityEngine_Vector2_o value, const MethodInfo* method); */

/* UIPanel$$set_clipOffset
   void UIPanel__set_clipOffset (UIPanel_o* __this, UnityEngine_Vector2_o value, const MethodInfo*
   method); */

void native_UIPanel__set_clipOffset_aeff9c(float param_1,float param_2,long *param_3)

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
  long lVar11;
  int *piVar12;
  code *pcVar13;
  long lVar14;
  long *plVar15;
  long lStack_58;
  
  if ((ABS(*(float *)((long)param_3 + 0x174) - param_1) <= 0.001) &&
     (ABS(*(float *)(param_3 + 0x2f) - param_2) <= 0.001)) {
    return;
  }
  *(float *)((long)param_3 + 0x174) = param_1;
  *(float *)(param_3 + 0x2f) = param_2;
  native_UIPanel__InvalidateClipping_af000c(param_3);
  lVar9 = param_3[0x22];
  if (lVar9 == 0) {
    return;
  }
  lStack_58 = lVar9;
  lVar10 = *(long *)(lVar9 + 0x68);
  if (lVar10 == 0) {
    plVar15 = &lStack_58;
    lVar14 = 1;
  }
  else {
    lVar14 = *(long *)(lVar10 + 0x18);
    if (lVar14 == 0) {
      return;
    }
    plVar15 = (long *)(lVar10 + 0x20);
  }
  lVar10 = 0;
  do {
    lVar11 = plVar15[lVar10];
    plVar1 = *(long **)(lVar11 + 0x20);
    lVar4 = *(long *)(lVar11 + 0x28);
    pcVar13 = *(code **)(lVar11 + 0x10);
    if (*(short *)(lVar4 + 0x48) == -1) {
      native_sub_4327f4(lVar4);
    }
    uVar7 = native_sub_432768(lVar4);
    bVar3 = *(char *)(lVar4 + 0x4a) != '\x01';
    if ((uVar7 & 1) == 0) {
      if (bVar3) {
        if ((*(short *)(lVar4 + 0x48) == -1) || (*(long *)(lVar9 + 0x18) == 0)) goto LAB_00557bfc;
        uVar7 = native_sub_432760(lVar4);
        uVar8 = native_sub_432b64(lVar4);
        if ((uVar7 & 1) == 0) {
          uVar2 = *(ushort *)(lVar4 + 0x48);
          if ((uVar8 & 1) == 0) {
            lVar4 = *param_3 + (ulong)uVar2 * 0x10;
            (**(code **)(lVar4 + 0x138))(param_3,*(undefined8 *)(lVar4 + 0x140));
            goto LAB_00557c08;
          }
          lVar4 = native_sub_432764(lVar4);
          lVar11 = *param_3;
          if ((ulong)*(ushort *)(lVar11 + 0x12a) != 0) {
            uVar7 = 0;
            piVar12 = (int *)(*(long *)(lVar11 + 0xb0) + 8);
            do {
              if (*(long *)(piVar12 + -2) == lVar4) {
                puVar6 = (undefined8 *)(lVar11 + (long)(int)(*piVar12 + (uint)uVar2) * 0x10 + 0x138)
                ;
                goto LAB_00557a30;
              }
              uVar7 = uVar7 + 1;
              piVar12 = piVar12 + 4;
            } while (uVar7 < *(ushort *)(lVar11 + 0x12a));
          }
          puVar6 = (undefined8 *)native_sub_3c9b34(param_3,lVar4,(ulong)uVar2);
LAB_00557a30:
          pcVar13 = (code *)*puVar6;
          puVar6 = (undefined8 *)puVar6[1];
        }
        else {
          if ((uVar8 & 1) == 0) {
            uVar5 = *(undefined8 *)(*param_3 + (ulong)*(ushort *)(lVar4 + 0x48) * 0x10 + 0x140);
          }
          else {
            lVar11 = *param_3;
            if ((ulong)*(ushort *)(lVar11 + 0x12a) != 0) {
              uVar7 = 0;
              piVar12 = (int *)(*(long *)(lVar11 + 0xb0) + 8);
              do {
                if (*(long *)(piVar12 + -2) == *(long *)(lVar4 + 0x18)) {
                  lVar11 = lVar11 + (long)(int)(*piVar12 + (uint)*(ushort *)(lVar4 + 0x48)) * 0x10 +
                           0x138;
                  goto LAB_00557a08;
                }
                uVar7 = uVar7 + 1;
                piVar12 = piVar12 + 4;
              } while (uVar7 < *(ushort *)(lVar11 + 0x12a));
            }
            lVar11 = native_sub_3c9b34(param_3);
LAB_00557a08:
            uVar5 = *(undefined8 *)(lVar11 + 8);
          }
          puVar6 = (undefined8 *)native_sub_4327e8(uVar5,lVar4);
          pcVar13 = (code *)*puVar6;
        }
        (*pcVar13)(param_3,puVar6);
      }
      else {
        if ((((plVar1 == (long *)0x0) || (*(short *)(lVar4 + 0x48) == -1)) ||
            ((*(byte *)(*plVar1 + 0x115) & 1) != 0)) || (*(long *)(lVar9 + 0x18) == 0))
        goto LAB_00557b70;
        uVar7 = native_sub_432760(lVar4);
        uVar8 = native_sub_432b64(lVar4);
        if ((uVar7 & 1) == 0) {
          uVar2 = *(ushort *)(lVar4 + 0x48);
          if ((uVar8 & 1) == 0) {
            lVar4 = *plVar1 + (ulong)uVar2 * 0x10;
            (**(code **)(lVar4 + 0x138))(plVar1,param_3,*(undefined8 *)(lVar4 + 0x140));
            goto LAB_00557c08;
          }
          lVar4 = native_sub_432764(lVar4);
          lVar11 = *plVar1;
          if ((ulong)*(ushort *)(lVar11 + 0x12a) != 0) {
            uVar7 = 0;
            piVar12 = (int *)(*(long *)(lVar11 + 0xb0) + 8);
            do {
              if (*(long *)(piVar12 + -2) == lVar4) {
                puVar6 = (undefined8 *)(lVar11 + (long)(int)(*piVar12 + (uint)uVar2) * 0x10 + 0x138)
                ;
                goto LAB_00557a94;
              }
              uVar7 = uVar7 + 1;
              piVar12 = piVar12 + 4;
            } while (uVar7 < *(ushort *)(lVar11 + 0x12a));
          }
          puVar6 = (undefined8 *)native_sub_3c9b34(plVar1,lVar4,(ulong)uVar2);
LAB_00557a94:
          pcVar13 = (code *)*puVar6;
          puVar6 = (undefined8 *)puVar6[1];
        }
        else {
          if ((uVar8 & 1) == 0) {
            uVar5 = *(undefined8 *)(*plVar1 + (ulong)*(ushort *)(lVar4 + 0x48) * 0x10 + 0x140);
          }
          else {
            lVar11 = *plVar1;
            if ((ulong)*(ushort *)(lVar11 + 0x12a) != 0) {
              uVar7 = 0;
              piVar12 = (int *)(*(long *)(lVar11 + 0xb0) + 8);
              do {
                if (*(long *)(piVar12 + -2) == *(long *)(lVar4 + 0x18)) {
                  lVar11 = lVar11 + (long)(int)(*piVar12 + (uint)*(ushort *)(lVar4 + 0x48)) * 0x10 +
                           0x138;
                  goto LAB_00557a6c;
                }
                uVar7 = uVar7 + 1;
                piVar12 = piVar12 + 4;
              } while (uVar7 < *(ushort *)(lVar11 + 0x12a));
            }
            lVar11 = native_sub_3c9b34(plVar1);
LAB_00557a6c:
            uVar5 = *(undefined8 *)(lVar11 + 8);
          }
          puVar6 = (undefined8 *)native_sub_4327e8(uVar5,lVar4);
          pcVar13 = (code *)*puVar6;
        }
        (*pcVar13)(plVar1,param_3,puVar6);
      }
    }
    else if (bVar3) {
LAB_00557b70:
      (*pcVar13)(plVar1,param_3,lVar4);
    }
    else {
LAB_00557bfc:
      (*pcVar13)(param_3,lVar4);
    }
LAB_00557c08:
    lVar10 = lVar10 + 1;
    if (lVar10 == lVar14) {
      return;
    }
  } while( true );
}



/* UIPanel$$InvalidateClipping @ 0xaf000c
 * void UIPanel__InvalidateClipping (UIPanel_o* __this, const MethodInfo* method); */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* UIPanel$$InvalidateClipping
   void UIPanel__InvalidateClipping (UIPanel_o* __this, const MethodInfo* method); */

void native_UIPanel__InvalidateClipping_af000c(long param_1)

{
  int iVar1;
  ulong uVar2;
  long lVar3;
  undefined8 uVar4;
  ulong uVar5;
  
  if ((bRam0000000001342040 & 1) == 0) {
    native_sub_43273c(&Method_System_Collections_Generic_List_UIPanel__get_Count___12dd368);
    native_sub_43273c(&Method_System_Collections_Generic_List_UIPanel__get_Item___12dd370);
    native_sub_43273c(&UnityEngine_Object_TypeInfo_12d54e0);
    native_sub_43273c(&UIPanel_TypeInfo_12d6478);
    bRam0000000001342040 = 1;
  }
  *(undefined1 *)(param_1 + 0x171) = 1;
  *(undefined4 *)(param_1 + 0x17c) = 0xffffffff;
  if (((*(byte *)(_UIPanel_TypeInfo_12d6478 + 0x133) >> 2 & 1) != 0) &&
     (*(int *)(_UIPanel_TypeInfo_12d6478 + 0xe0) == 0)) {
    native_sub_4327ec();
  }
  if (**(long **)(_UIPanel_TypeInfo_12d6478 + 0xb8) == 0) {
LAB_00af019c:
                    /* WARNING: Subroutine does not return */
    native_sub_432810();
  }
  iVar1 = *(int *)(**(long **)(_UIPanel_TypeInfo_12d6478 + 0xb8) + 0x18);
  if (0 < iVar1) {
    uVar5 = 0;
    do {
      if (((*(byte *)(_UIPanel_TypeInfo_12d6478 + 0x133) >> 2 & 1) != 0) &&
         (*(int *)(_UIPanel_TypeInfo_12d6478 + 0xe0) == 0)) {
        native_sub_4327ec();
      }
      lVar3 = **(long **)(_UIPanel_TypeInfo_12d6478 + 0xb8);
      if (lVar3 == 0) goto LAB_00af019c;
      if (*(uint *)(lVar3 + 0x18) <= uVar5) {
        native_System_ThrowHelper__ThrowArgumentOutOfRangeException_9fe0f4(0);
      }
      lVar3 = *(long *)(*(long *)(lVar3 + 0x10) + uVar5 * 8 + 0x20);
      if (((*(byte *)(_UnityEngine_Object_TypeInfo_12d54e0 + 0x133) >> 2 & 1) != 0) &&
         (*(int *)(_UnityEngine_Object_TypeInfo_12d54e0 + 0xe0) == 0)) {
        native_sub_4327ec();
      }
      uVar2 = native_UnityEngine_Object__op_Inequality_8d76fc(lVar3,param_1,0);
      if ((uVar2 & 1) != 0) {
        if (lVar3 == 0) goto LAB_00af019c;
        uVar4 = *(undefined8 *)(lVar3 + 0x1a0);
        if (((*(byte *)(_UnityEngine_Object_TypeInfo_12d54e0 + 0x133) >> 2 & 1) != 0) &&
           (*(int *)(_UnityEngine_Object_TypeInfo_12d54e0 + 0xe0) == 0)) {
          native_sub_4327ec();
        }
        uVar2 = native_UnityEngine_Object__op_Equality_8e9a3c(uVar4,param_1,0);
        if ((uVar2 & 1) != 0) {
          native_UIPanel__InvalidateClipping_af000c(lVar3);
        }
      }
      uVar5 = uVar5 + 1;
    } while ((long)uVar5 < (long)iVar1);
  }
  return;
}



/* UIPanel$$get_clipTexture @ 0xaf01a0
 * UnityEngine_Texture2D_o* UIPanel__get_clipTexture (UIPanel_o* __this, const MethodInfo* method); */

/* UIPanel$$get_clipTexture
   UnityEngine_Texture2D_o* UIPanel__get_clipTexture (UIPanel_o* __this, const MethodInfo* method);
    */

undefined8 native_UIPanel__get_clipTexture_af01a0(long param_1)

{
  return *(undefined8 *)(param_1 + 0x128);
}



/* UIPanel$$set_clipTexture @ 0xaf01a8
 * void UIPanel__set_clipTexture (UIPanel_o* __this, UnityEngine_Texture2D_o* value, const MethodInfo* method); */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* UIPanel$$set_clipTexture
   void UIPanel__set_clipTexture (UIPanel_o* __this, UnityEngine_Texture2D_o* value, const
   MethodInfo* method); */

void native_UIPanel__set_clipTexture_af01a8(long param_1,undefined8 param_2)

{
  undefined8 *puVar1;
  ulong *puVar2;
  char cVar3;
  bool bVar4;
  ulong uVar5;
  undefined8 uVar6;
  
  if ((bRam0000000001342041 & 1) == 0) {
    native_sub_43273c(&UnityEngine_Object_TypeInfo_12d54e0);
    bRam0000000001342041 = 1;
  }
  uVar6 = *(undefined8 *)(param_1 + 0x128);
  if (((*(byte *)(_UnityEngine_Object_TypeInfo_12d54e0 + 0x133) >> 2 & 1) != 0) &&
     (*(int *)(_UnityEngine_Object_TypeInfo_12d54e0 + 0xe0) == 0)) {
    native_sub_4327ec();
  }
  uVar5 = native_UnityEngine_Object__op_Inequality_8d76fc(uVar6,param_2,0);
  if ((uVar5 & 1) != 0) {
    puVar1 = (undefined8 *)(param_1 + 0x128);
    *puVar1 = param_2;
    if (iRam0000000001345318 != 0) {
      puVar2 = (ulong *)(((ulong)puVar1 >> 0x12 & 0x7fff) * 8 + 0x138ecd8);
      do {
        cVar3 = '\x01';
        bVar4 = (bool)ExclusiveMonitorPass(puVar2,0x10);
        if (bVar4) {
          *puVar2 = *puVar2 | 1L << ((ulong)puVar1 >> 0xc & 0x3f);
          cVar3 = ExclusiveMonitorsStatus();
        }
      } while (cVar3 != '\0');
    }
    return;
  }
  return;
}



/* UIPanel$$get_clipRange @ 0xaf0244
 * UnityEngine_Vector4_o UIPanel__get_clipRange (UIPanel_o* __this, const MethodInfo* method); */

/* UIPanel$$get_clipRange
   UnityEngine_Vector4_o UIPanel__get_clipRange (UIPanel_o* __this, const MethodInfo* method); */

undefined4 native_UIPanel__get_clipRange_af0244(long param_1)

{
  return *(undefined4 *)(param_1 + 0x144);
}



/* UIPanel$$set_clipRange @ 0xaf0258
 * void UIPanel__set_clipRange (UIPanel_o* __this, UnityEngine_Vector4_o value, const MethodInfo* method); */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* UIPanel$$set_clipRange
   void UIPanel__set_clipRange (UIPanel_o* __this, UnityEngine_Vector4_o value, const MethodInfo*
   method); */

void native_UIPanel__set_clipRange_af0258
               (float param_1,float param_2,float param_3,float param_4,long *param_5)

{
  long *plVar1;
  ushort uVar2;
  bool bVar3;
  long lVar4;
  undefined8 uVar5;
  undefined8 *puVar6;
  ulong uVar7;
  long lVar8;
  ulong uVar9;
  long lVar10;
  long lVar11;
  int *piVar12;
  code *pcVar13;
  long lVar14;
  long *plVar15;
  long lStack_58;
  
  if ((bRam0000000001342042 & 1) == 0) {
    native_sub_43273c(&Method_UnityEngine_Component_GetComponent_UIScrollView____12e2c08);
    native_sub_43273c(&UnityEngine_Object_TypeInfo_12d54e0);
    bRam0000000001342042 = 1;
  }
  if ((((ABS(*(float *)((long)param_5 + 0x144) - param_1) <= 0.001) &&
       (ABS(*(float *)(param_5 + 0x29) - param_2) <= 0.001)) &&
      (ABS(*(float *)((long)param_5 + 0x14c) - param_3) <= 0.001)) &&
     (ABS(*(float *)(param_5 + 0x2a) - param_4) <= 0.001)) {
    return;
  }
  *(float *)((long)param_5 + 0x144) = param_1;
  *(float *)(param_5 + 0x29) = param_2;
  *(float *)((long)param_5 + 0x14c) = param_3;
  *(float *)(param_5 + 0x2a) = param_4;
  *(undefined1 *)((long)param_5 + 0x171) = 1;
  *(undefined4 *)((long)param_5 + 0x17c) = 0xffffffff;
  lVar8 = native_UnityEngine_Component__GetComponent_ActiveAnimation__49daec
                    (param_5,_Method_UnityEngine_Component_GetComponent_UIScrollView____12e2c08);
  if (((*(byte *)(_UnityEngine_Object_TypeInfo_12d54e0 + 0x133) >> 2 & 1) != 0) &&
     (*(int *)(_UnityEngine_Object_TypeInfo_12d54e0 + 0xe0) == 0)) {
    native_sub_4327ec(_UnityEngine_Object_TypeInfo_12d54e0);
  }
  uVar9 = native_UnityEngine_Object__op_Inequality_8d76fc(lVar8,0,0);
  if ((uVar9 & 1) != 0) {
    if (lVar8 == 0) {
                    /* WARNING: Subroutine does not return */
      native_sub_432810();
    }
    native_UIScrollView__UpdatePosition_c33140(lVar8,0);
  }
  lVar8 = param_5[0x22];
  if (lVar8 == 0) {
    return;
  }
  lStack_58 = lVar8;
  lVar10 = *(long *)(lVar8 + 0x68);
  if (lVar10 == 0) {
    plVar15 = &lStack_58;
    lVar14 = 1;
  }
  else {
    lVar14 = *(long *)(lVar10 + 0x18);
    if (lVar14 == 0) {
      return;
    }
    plVar15 = (long *)(lVar10 + 0x20);
  }
  lVar10 = 0;
  do {
    lVar11 = plVar15[lVar10];
    plVar1 = *(long **)(lVar11 + 0x20);
    lVar4 = *(long *)(lVar11 + 0x28);
    pcVar13 = *(code **)(lVar11 + 0x10);
    if (*(short *)(lVar4 + 0x48) == -1) {
      native_sub_4327f4(lVar4);
    }
    uVar9 = native_sub_432768(lVar4);
    bVar3 = *(char *)(lVar4 + 0x4a) != '\x01';
    if ((uVar9 & 1) == 0) {
      if (bVar3) {
        if ((*(short *)(lVar4 + 0x48) == -1) || (*(long *)(lVar8 + 0x18) == 0)) goto LAB_00557bfc;
        uVar9 = native_sub_432760(lVar4);
        uVar7 = native_sub_432b64(lVar4);
        if ((uVar9 & 1) == 0) {
          uVar2 = *(ushort *)(lVar4 + 0x48);
          if ((uVar7 & 1) == 0) {
            lVar4 = *param_5 + (ulong)uVar2 * 0x10;
            (**(code **)(lVar4 + 0x138))(param_5,*(undefined8 *)(lVar4 + 0x140));
            goto LAB_00557c08;
          }
          lVar4 = native_sub_432764(lVar4);
          lVar11 = *param_5;
          if ((ulong)*(ushort *)(lVar11 + 0x12a) != 0) {
            uVar9 = 0;
            piVar12 = (int *)(*(long *)(lVar11 + 0xb0) + 8);
            do {
              if (*(long *)(piVar12 + -2) == lVar4) {
                puVar6 = (undefined8 *)(lVar11 + (long)(int)(*piVar12 + (uint)uVar2) * 0x10 + 0x138)
                ;
                goto LAB_00557a30;
              }
              uVar9 = uVar9 + 1;
              piVar12 = piVar12 + 4;
            } while (uVar9 < *(ushort *)(lVar11 + 0x12a));
          }
          puVar6 = (undefined8 *)native_sub_3c9b34(param_5,lVar4,(ulong)uVar2);
LAB_00557a30:
          pcVar13 = (code *)*puVar6;
          puVar6 = (undefined8 *)puVar6[1];
        }
        else {
          if ((uVar7 & 1) == 0) {
            uVar5 = *(undefined8 *)(*param_5 + (ulong)*(ushort *)(lVar4 + 0x48) * 0x10 + 0x140);
          }
          else {
            lVar11 = *param_5;
            if ((ulong)*(ushort *)(lVar11 + 0x12a) != 0) {
              uVar9 = 0;
              piVar12 = (int *)(*(long *)(lVar11 + 0xb0) + 8);
              do {
                if (*(long *)(piVar12 + -2) == *(long *)(lVar4 + 0x18)) {
                  lVar11 = lVar11 + (long)(int)(*piVar12 + (uint)*(ushort *)(lVar4 + 0x48)) * 0x10 +
                           0x138;
                  goto LAB_00557a08;
                }
                uVar9 = uVar9 + 1;
                piVar12 = piVar12 + 4;
              } while (uVar9 < *(ushort *)(lVar11 + 0x12a));
            }
            lVar11 = native_sub_3c9b34(param_5);
LAB_00557a08:
            uVar5 = *(undefined8 *)(lVar11 + 8);
          }
          puVar6 = (undefined8 *)native_sub_4327e8(uVar5,lVar4);
          pcVar13 = (code *)*puVar6;
        }
        (*pcVar13)(param_5,puVar6);
      }
      else {
        if ((((plVar1 == (long *)0x0) || (*(short *)(lVar4 + 0x48) == -1)) ||
            ((*(byte *)(*plVar1 + 0x115) & 1) != 0)) || (*(long *)(lVar8 + 0x18) == 0))
        goto LAB_00557b70;
        uVar9 = native_sub_432760(lVar4);
        uVar7 = native_sub_432b64(lVar4);
        if ((uVar9 & 1) == 0) {
          uVar2 = *(ushort *)(lVar4 + 0x48);
          if ((uVar7 & 1) == 0) {
            lVar4 = *plVar1 + (ulong)uVar2 * 0x10;
            (**(code **)(lVar4 + 0x138))(plVar1,param_5,*(undefined8 *)(lVar4 + 0x140));
            goto LAB_00557c08;
          }
          lVar4 = native_sub_432764(lVar4);
          lVar11 = *plVar1;
          if ((ulong)*(ushort *)(lVar11 + 0x12a) != 0) {
            uVar9 = 0;
            piVar12 = (int *)(*(long *)(lVar11 + 0xb0) + 8);
            do {
              if (*(long *)(piVar12 + -2) == lVar4) {
                puVar6 = (undefined8 *)(lVar11 + (long)(int)(*piVar12 + (uint)uVar2) * 0x10 + 0x138)
                ;
                goto LAB_00557a94;
              }
              uVar9 = uVar9 + 1;
              piVar12 = piVar12 + 4;
            } while (uVar9 < *(ushort *)(lVar11 + 0x12a));
          }
          puVar6 = (undefined8 *)native_sub_3c9b34(plVar1,lVar4,(ulong)uVar2);
LAB_00557a94:
          pcVar13 = (code *)*puVar6;
          puVar6 = (undefined8 *)puVar6[1];
        }
        else {
          if ((uVar7 & 1) == 0) {
            uVar5 = *(undefined8 *)(*plVar1 + (ulong)*(ushort *)(lVar4 + 0x48) * 0x10 + 0x140);
          }
          else {
            lVar11 = *plVar1;
            if ((ulong)*(ushort *)(lVar11 + 0x12a) != 0) {
              uVar9 = 0;
              piVar12 = (int *)(*(long *)(lVar11 + 0xb0) + 8);
              do {
                if (*(long *)(piVar12 + -2) == *(long *)(lVar4 + 0x18)) {
                  lVar11 = lVar11 + (long)(int)(*piVar12 + (uint)*(ushort *)(lVar4 + 0x48)) * 0x10 +
                           0x138;
                  goto LAB_00557a6c;
                }
                uVar9 = uVar9 + 1;
                piVar12 = piVar12 + 4;
              } while (uVar9 < *(ushort *)(lVar11 + 0x12a));
            }
            lVar11 = native_sub_3c9b34(plVar1);
LAB_00557a6c:
            uVar5 = *(undefined8 *)(lVar11 + 8);
          }
          puVar6 = (undefined8 *)native_sub_4327e8(uVar5,lVar4);
          pcVar13 = (code *)*puVar6;
        }
        (*pcVar13)(plVar1,param_5,puVar6);
      }
    }
    else if (bVar3) {
LAB_00557b70:
      (*pcVar13)(plVar1,param_5,lVar4);
    }
    else {
LAB_00557bfc:
      (*pcVar13)(param_5,lVar4);
    }
LAB_00557c08:
    lVar10 = lVar10 + 1;
    if (lVar10 == lVar14) {
      return;
    }
  } while( true );
}



/* UIPanel$$get_baseClipRegion @ 0xaf03b4
 * UnityEngine_Vector4_o UIPanel__get_baseClipRegion (UIPanel_o* __this, const MethodInfo* method); */

/* UIPanel$$get_baseClipRegion
   UnityEngine_Vector4_o UIPanel__get_baseClipRegion (UIPanel_o* __this, const MethodInfo* method);
    */

undefined4 native_UIPanel__get_baseClipRegion_af03b4(long param_1)

{
  return *(undefined4 *)(param_1 + 0x144);
}



/* UIPanel$$set_baseClipRegion @ 0xaf025c
 * void UIPanel__set_baseClipRegion (UIPanel_o* __this, UnityEngine_Vector4_o value, const MethodInfo* method); */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* UIPanel$$set_baseClipRegion
   void UIPanel__set_baseClipRegion (UIPanel_o* __this, UnityEngine_Vector4_o value, const
   MethodInfo* method); */

void native_UIPanel__set_baseClipRegion_af025c
               (float param_1,float param_2,float param_3,float param_4,long *param_5)

{
  long *plVar1;
  ushort uVar2;
  bool bVar3;
  long lVar4;
  undefined8 uVar5;
  undefined8 *puVar6;
  ulong uVar7;
  long lVar8;
  ulong uVar9;
  long lVar10;
  long lVar11;
  int *piVar12;
  code *pcVar13;
  long lVar14;
  long *plVar15;
  long lStack_58;
  
  if ((bRam0000000001342042 & 1) == 0) {
    native_sub_43273c(&Method_UnityEngine_Component_GetComponent_UIScrollView____12e2c08);
    native_sub_43273c(&UnityEngine_Object_TypeInfo_12d54e0);
    bRam0000000001342042 = 1;
  }
  if ((((ABS(*(float *)((long)param_5 + 0x144) - param_1) <= 0.001) &&
       (ABS(*(float *)(param_5 + 0x29) - param_2) <= 0.001)) &&
      (ABS(*(float *)((long)param_5 + 0x14c) - param_3) <= 0.001)) &&
     (ABS(*(float *)(param_5 + 0x2a) - param_4) <= 0.001)) {
    return;
  }
  *(float *)((long)param_5 + 0x144) = param_1;
  *(float *)(param_5 + 0x29) = param_2;
  *(float *)((long)param_5 + 0x14c) = param_3;
  *(float *)(param_5 + 0x2a) = param_4;
  *(undefined1 *)((long)param_5 + 0x171) = 1;
  *(undefined4 *)((long)param_5 + 0x17c) = 0xffffffff;
  lVar8 = native_UnityEngine_Component__GetComponent_ActiveAnimation__49daec
                    (param_5,_Method_UnityEngine_Component_GetComponent_UIScrollView____12e2c08);
  if (((*(byte *)(_UnityEngine_Object_TypeInfo_12d54e0 + 0x133) >> 2 & 1) != 0) &&
     (*(int *)(_UnityEngine_Object_TypeInfo_12d54e0 + 0xe0) == 0)) {
    native_sub_4327ec(_UnityEngine_Object_TypeInfo_12d54e0);
  }
  uVar9 = native_UnityEngine_Object__op_Inequality_8d76fc(lVar8,0,0);
  if ((uVar9 & 1) != 0) {
    if (lVar8 == 0) {
                    /* WARNING: Subroutine does not return */
      native_sub_432810();
    }
    native_UIScrollView__UpdatePosition_c33140(lVar8,0);
  }
  lVar8 = param_5[0x22];
  if (lVar8 == 0) {
    return;
  }
  lStack_58 = lVar8;
  lVar10 = *(long *)(lVar8 + 0x68);
  if (lVar10 == 0) {
    plVar15 = &lStack_58;
    lVar14 = 1;
  }
  else {
    lVar14 = *(long *)(lVar10 + 0x18);
    if (lVar14 == 0) {
      return;
    }
    plVar15 = (long *)(lVar10 + 0x20);
  }
  lVar10 = 0;
  do {
    lVar11 = plVar15[lVar10];
    plVar1 = *(long **)(lVar11 + 0x20);
    lVar4 = *(long *)(lVar11 + 0x28);
    pcVar13 = *(code **)(lVar11 + 0x10);
    if (*(short *)(lVar4 + 0x48) == -1) {
      native_sub_4327f4(lVar4);
    }
    uVar9 = native_sub_432768(lVar4);
    bVar3 = *(char *)(lVar4 + 0x4a) != '\x01';
    if ((uVar9 & 1) == 0) {
      if (bVar3) {
        if ((*(short *)(lVar4 + 0x48) == -1) || (*(long *)(lVar8 + 0x18) == 0)) goto LAB_00557bfc;
        uVar9 = native_sub_432760(lVar4);
        uVar7 = native_sub_432b64(lVar4);
        if ((uVar9 & 1) == 0) {
          uVar2 = *(ushort *)(lVar4 + 0x48);
          if ((uVar7 & 1) == 0) {
            lVar4 = *param_5 + (ulong)uVar2 * 0x10;
            (**(code **)(lVar4 + 0x138))(param_5,*(undefined8 *)(lVar4 + 0x140));
            goto LAB_00557c08;
          }
          lVar4 = native_sub_432764(lVar4);
          lVar11 = *param_5;
          if ((ulong)*(ushort *)(lVar11 + 0x12a) != 0) {
            uVar9 = 0;
            piVar12 = (int *)(*(long *)(lVar11 + 0xb0) + 8);
            do {
              if (*(long *)(piVar12 + -2) == lVar4) {
                puVar6 = (undefined8 *)(lVar11 + (long)(int)(*piVar12 + (uint)uVar2) * 0x10 + 0x138)
                ;
                goto LAB_00557a30;
              }
              uVar9 = uVar9 + 1;
              piVar12 = piVar12 + 4;
            } while (uVar9 < *(ushort *)(lVar11 + 0x12a));
          }
          puVar6 = (undefined8 *)native_sub_3c9b34(param_5,lVar4,(ulong)uVar2);
LAB_00557a30:
          pcVar13 = (code *)*puVar6;
          puVar6 = (undefined8 *)puVar6[1];
        }
        else {
          if ((uVar7 & 1) == 0) {
            uVar5 = *(undefined8 *)(*param_5 + (ulong)*(ushort *)(lVar4 + 0x48) * 0x10 + 0x140);
          }
          else {
            lVar11 = *param_5;
            if ((ulong)*(ushort *)(lVar11 + 0x12a) != 0) {
              uVar9 = 0;
              piVar12 = (int *)(*(long *)(lVar11 + 0xb0) + 8);
              do {
                if (*(long *)(piVar12 + -2) == *(long *)(lVar4 + 0x18)) {
                  lVar11 = lVar11 + (long)(int)(*piVar12 + (uint)*(ushort *)(lVar4 + 0x48)) * 0x10 +
                           0x138;
                  goto LAB_00557a08;
                }
                uVar9 = uVar9 + 1;
                piVar12 = piVar12 + 4;
              } while (uVar9 < *(ushort *)(lVar11 + 0x12a));
            }
            lVar11 = native_sub_3c9b34(param_5);
LAB_00557a08:
            uVar5 = *(undefined8 *)(lVar11 + 8);
          }
          puVar6 = (undefined8 *)native_sub_4327e8(uVar5,lVar4);
          pcVar13 = (code *)*puVar6;
        }
        (*pcVar13)(param_5,puVar6);
      }
      else {
        if ((((plVar1 == (long *)0x0) || (*(short *)(lVar4 + 0x48) == -1)) ||
            ((*(byte *)(*plVar1 + 0x115) & 1) != 0)) || (*(long *)(lVar8 + 0x18) == 0))
        goto LAB_00557b70;
        uVar9 = native_sub_432760(lVar4);
        uVar7 = native_sub_432b64(lVar4);
        if ((uVar9 & 1) == 0) {
          uVar2 = *(ushort *)(lVar4 + 0x48);
          if ((uVar7 & 1) == 0) {
            lVar4 = *plVar1 + (ulong)uVar2 * 0x10;
            (**(code **)(lVar4 + 0x138))(plVar1,param_5,*(undefined8 *)(lVar4 + 0x140));
            goto LAB_00557c08;
          }
          lVar4 = native_sub_432764(lVar4);
          lVar11 = *plVar1;
          if ((ulong)*(ushort *)(lVar11 + 0x12a) != 0) {
            uVar9 = 0;
            piVar12 = (int *)(*(long *)(lVar11 + 0xb0) + 8);
            do {
              if (*(long *)(piVar12 + -2) == lVar4) {
                puVar6 = (undefined8 *)(lVar11 + (long)(int)(*piVar12 + (uint)uVar2) * 0x10 + 0x138)
                ;
                goto LAB_00557a94;
              }
              uVar9 = uVar9 + 1;
              piVar12 = piVar12 + 4;
            } while (uVar9 < *(ushort *)(lVar11 + 0x12a));
          }
          puVar6 = (undefined8 *)native_sub_3c9b34(plVar1,lVar4,(ulong)uVar2);
LAB_00557a94:
          pcVar13 = (code *)*puVar6;
          puVar6 = (undefined8 *)puVar6[1];
        }
        else {
          if ((uVar7 & 1) == 0) {
            uVar5 = *(undefined8 *)(*plVar1 + (ulong)*(ushort *)(lVar4 + 0x48) * 0x10 + 0x140);
          }
          else {
            lVar11 = *plVar1;
            if ((ulong)*(ushort *)(lVar11 + 0x12a) != 0) {
              uVar9 = 0;
              piVar12 = (int *)(*(long *)(lVar11 + 0xb0) + 8);
              do {
                if (*(long *)(piVar12 + -2) == *(long *)(lVar4 + 0x18)) {
                  lVar11 = lVar11 + (long)(int)(*piVar12 + (uint)*(ushort *)(lVar4 + 0x48)) * 0x10 +
                           0x138;
                  goto LAB_00557a6c;
                }
                uVar9 = uVar9 + 1;
                piVar12 = piVar12 + 4;
              } while (uVar9 < *(ushort *)(lVar11 + 0x12a));
            }
            lVar11 = native_sub_3c9b34(plVar1);
LAB_00557a6c:
            uVar5 = *(undefined8 *)(lVar11 + 8);
          }
          puVar6 = (undefined8 *)native_sub_4327e8(uVar5,lVar4);
          pcVar13 = (code *)*puVar6;
        }
        (*pcVar13)(plVar1,param_5,puVar6);
      }
    }
    else if (bVar3) {
LAB_00557b70:
      (*pcVar13)(plVar1,param_5,lVar4);
    }
    else {
LAB_00557bfc:
      (*pcVar13)(param_5,lVar4);
    }
LAB_00557c08:
    lVar10 = lVar10 + 1;
    if (lVar10 == lVar14) {
      return;
    }
  } while( true );
}



/* UIPanel$$get_finalClipRegion @ 0xaf03c8
 * UnityEngine_Vector4_o UIPanel__get_finalClipRegion (UIPanel_o* __this, const MethodInfo* method); */

/* UIPanel$$get_finalClipRegion
   UnityEngine_Vector4_o UIPanel__get_finalClipRegion (UIPanel_o* __this, const MethodInfo* method);
    */

undefined4
native_UIPanel__get_finalClipRegion_af03c8
          (undefined1 param_1 [16],undefined1 param_2 [16],long param_3)

{
  long lVar1;
  long lVar2;
  float fVar3;
  undefined8 uVar4;
  undefined4 uVar5;
  undefined4 uVar6;
  undefined8 uStack_40;
  undefined8 uStack_38;
  ulong auStack_30 [2];
  
  uVar6 = param_2._4_4_;
  uVar5 = param_2._0_4_;
  uStack_40 = 0;
  uStack_38 = 0;
  uVar4 = native_UIPanel__GetViewSize_aefab4();
  if (*(int *)(param_3 + 0x140) == 0) {
    native_UnityEngine_Vector4___ctor_776f24(0,0,uVar4,CONCAT44(uVar6,uVar5),&uStack_40,0);
    lVar1 = native_UIRect__get_anchorCamera_c26f1c(param_3,0);
    lVar2 = native_UIRect__get_cachedTransform_c27c58(param_3,0);
    if ((lVar2 == 0) || (native_UnityEngine_Transform__get_position_77169c(lVar2,0), lVar1 == 0)) {
                    /* WARNING: Subroutine does not return */
      native_sub_432810();
    }
    fVar3 = (float)native_UnityEngine_Camera__WorldToScreenPoint_8d9158(lVar1,0);
    auStack_30[0] = (ulong)(uint)((float)uStack_40 - (fVar3 - (float)uVar4 * 0.5));
  }
  else {
    auStack_30[0] = 0;
    auStack_30[1] = 0;
    native_UnityEngine_Vector4___ctor_776f24
              (*(float *)(param_3 + 0x144) + *(float *)(param_3 + 0x174),
               *(float *)(param_3 + 0x148) + *(float *)(param_3 + 0x178),uVar4,CONCAT44(uVar6,uVar5)
               ,auStack_30,0);
  }
  return (undefined4)auStack_30[0];
}



/* UIPanel$$get_clipSoftness @ 0xaf04c8
 * UnityEngine_Vector2_o UIPanel__get_clipSoftness (UIPanel_o* __this, const MethodInfo* method); */

/* UIPanel$$get_clipSoftness
   UnityEngine_Vector2_o UIPanel__get_clipSoftness (UIPanel_o* __this, const MethodInfo* method); */

undefined4 native_UIPanel__get_clipSoftness_af04c8(long param_1)

{
  return *(undefined4 *)(param_1 + 0x154);
}



/* UIPanel$$set_clipSoftness @ 0xaf04d4
 * void UIPanel__set_clipSoftness (UIPanel_o* __this, UnityEngine_Vector2_o value, const MethodInfo* method); */

/* UIPanel$$set_clipSoftness
   void UIPanel__set_clipSoftness (UIPanel_o* __this, UnityEngine_Vector2_o value, const MethodInfo*
   method); */

void native_UIPanel__set_clipSoftness_af04d4(float param_1,float param_2,long param_3)

{
  float fVar1;
  float fVar2;
  
  fVar1 = *(float *)(param_3 + 0x154) - param_1;
  fVar2 = *(float *)(param_3 + 0x158) - param_2;
  if (9.9999994e-11 <= fVar1 * fVar1 + fVar2 * fVar2) {
    *(float *)(param_3 + 0x154) = param_1;
    *(float *)(param_3 + 0x158) = param_2;
  }
  return;
}



/* UIPanel$$get_localCorners @ 0xaf050c
 * UnityEngine_Vector3_array* UIPanel__get_localCorners (UIPanel_o* __this, const MethodInfo* method); */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* UIPanel$$get_localCorners
   UnityEngine_Vector3_array* UIPanel__get_localCorners (UIPanel_o* __this, const MethodInfo*
   method); */

long native_UIPanel__get_localCorners_af050c(long *param_1)

{
  long lVar1;
  long lVar2;
  ulong uVar3;
  undefined4 *puVar4;
  ulong uVar5;
  float fVar6;
  undefined4 uVar7;
  float fVar8;
  float fVar9;
  undefined4 uVar10;
  float fVar11;
  undefined4 uVar12;
  undefined8 uVar13;
  undefined8 uVar14;
  undefined8 uVar15;
  
  if ((bRam0000000001342043 & 1) == 0) {
    native_sub_43273c(&UIPanel_TypeInfo_12d6478);
    bRam0000000001342043 = 1;
  }
  if ((int)param_1[0x28] == 0) {
    lVar2 = (**(code **)(*param_1 + 0x1e8))(param_1,*(undefined8 *)(*param_1 + 0x1f0));
    lVar1 = native_UIRect__get_cachedTransform_c27c58(param_1,0);
    if (lVar2 != 0) {
      uVar3 = (ulong)*(uint *)(lVar2 + 0x18);
      uVar5 = 0xffffffffffffffff;
      puVar4 = (undefined4 *)(lVar2 + 0x28);
      while (uVar5 + 1 < uVar3) {
        if (lVar1 == 0) goto LAB_00af06ec;
        uVar10 = puVar4[-1];
        uVar12 = *puVar4;
        uVar7 = native_UnityEngine_Transform__InverseTransformPoint_7729a0(puVar4[-2],lVar1,0);
        uVar3 = (ulong)*(uint *)(lVar2 + 0x18);
        if (uVar3 <= uVar5 + 1) break;
        uVar5 = uVar5 + 1;
        puVar4[-2] = uVar7;
        puVar4[-1] = uVar10;
        *puVar4 = uVar12;
        puVar4 = puVar4 + 3;
        if (2 < uVar5) {
          return lVar2;
        }
      }
      goto LAB_00af06e0;
    }
  }
  else {
    uVar14 = *(undefined8 *)((long)param_1 + 0x174);
    uVar15 = *(undefined8 *)((long)param_1 + 0x144);
    uVar13 = *(undefined8 *)((long)param_1 + 0x14c);
    if (((*(byte *)(_UIPanel_TypeInfo_12d6478 + 0x133) >> 2 & 1) != 0) &&
       (*(int *)(_UIPanel_TypeInfo_12d6478 + 0xe0) == 0)) {
      native_sub_4327ec();
    }
    lVar2 = *(long *)(*(long *)(_UIPanel_TypeInfo_12d6478 + 0xb8) + 0x10);
    if (lVar2 != 0) {
      if (*(int *)(lVar2 + 0x18) != 0) {
        fVar9 = (float)uVar13;
        fVar11 = (float)((ulong)uVar13 >> 0x20);
        fVar6 = ((float)uVar14 + (float)uVar15) - fVar9 * 0.5;
        fVar8 = ((float)((ulong)uVar14 >> 0x20) + (float)((ulong)uVar15 >> 0x20)) - fVar11 * 0.5;
        *(ulong *)(lVar2 + 0x20) = CONCAT44(fVar8,fVar6);
        *(undefined4 *)(lVar2 + 0x28) = 0;
        lVar2 = *(long *)(*(long *)(_UIPanel_TypeInfo_12d6478 + 0xb8) + 0x10);
        if (lVar2 == 0) goto LAB_00af06ec;
        if (1 < *(uint *)(lVar2 + 0x18)) {
          fVar9 = fVar9 + fVar6;
          fVar11 = fVar11 + fVar8;
          *(ulong *)(lVar2 + 0x2c) = CONCAT44(fVar11,fVar6);
          *(undefined4 *)(lVar2 + 0x34) = 0;
          lVar2 = *(long *)(*(long *)(_UIPanel_TypeInfo_12d6478 + 0xb8) + 0x10);
          if (lVar2 == 0) goto LAB_00af06ec;
          if (2 < *(uint *)(lVar2 + 0x18)) {
            *(ulong *)(lVar2 + 0x38) = CONCAT44(fVar11,fVar9);
            *(undefined4 *)(lVar2 + 0x40) = 0;
            lVar2 = *(long *)(*(long *)(_UIPanel_TypeInfo_12d6478 + 0xb8) + 0x10);
            if (lVar2 == 0) goto LAB_00af06ec;
            if (3 < *(uint *)(lVar2 + 0x18)) {
              *(ulong *)(lVar2 + 0x44) = CONCAT44(fVar8,fVar9);
              *(undefined4 *)(lVar2 + 0x4c) = 0;
              return *(long *)(*(long *)(_UIPanel_TypeInfo_12d6478 + 0xb8) + 0x10);
            }
          }
        }
      }
LAB_00af06e0:
      uVar13 = native_sub_43283c();
                    /* WARNING: Subroutine does not return */
      native_sub_4327dc(uVar13,0);
    }
  }
LAB_00af06ec:
                    /* WARNING: Subroutine does not return */
  native_sub_432810();
}



/* UIPanel$$get_worldCorners @ 0xaf06f0
 * UnityEngine_Vector3_array* UIPanel__get_worldCorners (UIPanel_o* __this, const MethodInfo* method); */

/* WARNING: Removing unreachable block (ram,0x00733dd8) */
/* WARNING: Removing unreachable block (ram,0x00733dfc) */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* UIPanel$$get_worldCorners
   UnityEngine_Vector3_array* UIPanel__get_worldCorners (UIPanel_o* __this, const MethodInfo*
   method); */

undefined8
native_UIPanel__get_worldCorners_af06f0
          (undefined1 param_1 [16],float param_2,ulong param_3,ulong param_4,long param_5)

{
  int iVar1;
  int iVar2;
  long lVar3;
  ulong uVar4;
  undefined8 uVar5;
  undefined8 uVar6;
  long lVar7;
  undefined4 uVar8;
  undefined4 uVar9;
  ulong uVar10;
  ulong uVar11;
  ulong uVar12;
  ulong uVar13;
  ulong uVar14;
  float fVar15;
  float fVar16;
  float fVar17;
  float fVar18;
  float fVar19;
  float fVar20;
  float fVar21;
  float fVar22;
  float fVar23;
  float fVar24;
  undefined8 uStack_a0;
  undefined8 uStack_98;
  
  if ((bRam0000000001342044 & 1) == 0) {
    native_sub_43273c(&NGUITools_TypeInfo_12d53c8);
    native_sub_43273c(&UnityEngine_Object_TypeInfo_12d54e0);
    native_sub_43273c(&UIPanel_TypeInfo_12d6478);
    bRam0000000001342044 = 1;
  }
  if (*(int *)(param_5 + 0x140) != 0) {
    fVar16 = *(float *)(param_5 + 0x174);
    fVar18 = *(float *)(param_5 + 0x144);
    fVar22 = *(float *)(param_5 + 0x14c);
    fVar23 = *(float *)(param_5 + 0x178);
    fVar24 = *(float *)(param_5 + 0x148);
    fVar20 = *(float *)(param_5 + 0x150);
    lVar3 = native_UIRect__get_cachedTransform_c27c58(param_5,0);
    if (((*(byte *)(_UIPanel_TypeInfo_12d6478 + 0x133) >> 2 & 1) != 0) &&
       (*(int *)(_UIPanel_TypeInfo_12d6478 + 0xe0) == 0)) {
      native_sub_4327ec(_UIPanel_TypeInfo_12d6478);
    }
    if (lVar3 != 0) {
      lVar7 = *(long *)(*(long *)(_UIPanel_TypeInfo_12d6478 + 0xb8) + 0x10);
      fVar19 = (fVar16 + fVar18) - fVar22 * 0.5;
      fVar18 = (fVar23 + fVar24) - fVar20 * 0.5;
      uVar8 = 0;
      fVar16 = fVar18;
      uVar9 = native_UnityEngine_Transform__TransformPoint_77299c(fVar19,lVar3,0);
      if (lVar7 != 0) {
        if (*(int *)(lVar7 + 0x18) != 0) {
          *(undefined4 *)(lVar7 + 0x20) = uVar9;
          *(float *)(lVar7 + 0x24) = fVar16;
          *(undefined4 *)(lVar7 + 0x28) = uVar8;
          fVar20 = fVar20 + fVar18;
          uVar8 = 0;
          lVar7 = *(long *)(*(long *)(_UIPanel_TypeInfo_12d6478 + 0xb8) + 0x10);
          fVar16 = fVar20;
          uVar9 = native_UnityEngine_Transform__TransformPoint_77299c(fVar19,lVar3,0);
          if (lVar7 == 0) goto LAB_00af0ba8;
          if (1 < *(uint *)(lVar7 + 0x18)) {
            *(undefined4 *)(lVar7 + 0x2c) = uVar9;
            *(float *)(lVar7 + 0x30) = fVar16;
            *(undefined4 *)(lVar7 + 0x34) = uVar8;
            fVar22 = fVar22 + fVar19;
            uVar8 = 0;
            lVar7 = *(long *)(*(long *)(_UIPanel_TypeInfo_12d6478 + 0xb8) + 0x10);
            uVar9 = native_UnityEngine_Transform__TransformPoint_77299c(fVar22,lVar3,0);
            if (lVar7 == 0) goto LAB_00af0ba8;
            if (2 < *(uint *)(lVar7 + 0x18)) {
              *(undefined4 *)(lVar7 + 0x38) = uVar9;
              *(float *)(lVar7 + 0x3c) = fVar20;
              *(undefined4 *)(lVar7 + 0x40) = uVar8;
              uVar8 = 0;
              lVar7 = *(long *)(*(long *)(_UIPanel_TypeInfo_12d6478 + 0xb8) + 0x10);
              uVar9 = native_UnityEngine_Transform__TransformPoint_77299c(fVar22,lVar3,0);
              if (lVar7 == 0) goto LAB_00af0ba8;
              if (3 < *(uint *)(lVar7 + 0x18)) {
                *(undefined4 *)(lVar7 + 0x44) = uVar9;
                *(float *)(lVar7 + 0x48) = fVar18;
                *(undefined4 *)(lVar7 + 0x4c) = uVar8;
                goto LAB_00af08b4;
              }
            }
          }
        }
        goto LAB_00af0bac;
      }
    }
LAB_00af0ba8:
                    /* WARNING: Subroutine does not return */
    native_sub_432810();
  }
  uVar6 = native_UIRect__get_anchorCamera_c26f1c(param_5,0);
  if (((*(byte *)(_UnityEngine_Object_TypeInfo_12d54e0 + 0x133) >> 2 & 1) != 0) &&
     (*(int *)(_UnityEngine_Object_TypeInfo_12d54e0 + 0xe0) == 0)) {
    native_sub_4327ec(_UnityEngine_Object_TypeInfo_12d54e0);
  }
  uVar4 = native_UnityEngine_Object__op_Inequality_8d76fc(uVar6,0,0);
  if ((uVar4 & 1) == 0) {
    fVar20 = (float)native_UIPanel__GetViewSize_aefab4(param_5);
    if (((*(byte *)(_UIPanel_TypeInfo_12d6478 + 0x133) >> 2 & 1) != 0) &&
       (*(int *)(_UIPanel_TypeInfo_12d6478 + 0xe0) == 0)) {
      native_sub_4327ec();
    }
    lVar3 = *(long *)(*(long *)(_UIPanel_TypeInfo_12d6478 + 0xb8) + 0x10);
    if (lVar3 != 0) {
      if (*(int *)(lVar3 + 0x18) != 0) {
        fVar18 = fVar20 * -0.5;
        fVar16 = param_2 * -0.5;
        *(float *)(lVar3 + 0x20) = fVar18;
        *(float *)(lVar3 + 0x24) = fVar16;
        *(undefined4 *)(lVar3 + 0x28) = 0;
        lVar3 = *(long *)(*(long *)(_UIPanel_TypeInfo_12d6478 + 0xb8) + 0x10);
        if (lVar3 == 0) goto LAB_00af0ba8;
        if (1 < *(uint *)(lVar3 + 0x18)) {
          param_2 = param_2 + fVar16;
          *(float *)(lVar3 + 0x2c) = fVar18;
          *(float *)(lVar3 + 0x30) = param_2;
          *(undefined4 *)(lVar3 + 0x34) = 0;
          lVar3 = *(long *)(*(long *)(_UIPanel_TypeInfo_12d6478 + 0xb8) + 0x10);
          if (lVar3 == 0) goto LAB_00af0ba8;
          if (2 < *(uint *)(lVar3 + 0x18)) {
            fVar20 = fVar20 + fVar18;
            *(float *)(lVar3 + 0x38) = fVar20;
            *(float *)(lVar3 + 0x3c) = param_2;
            *(undefined4 *)(lVar3 + 0x40) = 0;
            lVar3 = *(long *)(*(long *)(_UIPanel_TypeInfo_12d6478 + 0xb8) + 0x10);
            if (lVar3 == 0) goto LAB_00af0ba8;
            if (3 < *(uint *)(lVar3 + 0x18)) {
              *(float *)(lVar3 + 0x44) = fVar20;
              *(float *)(lVar3 + 0x48) = fVar16;
              *(undefined4 *)(lVar3 + 0x4c) = 0;
              if (*(char *)(param_5 + 0xa3) != '\0') {
                uVar6 = *(undefined8 *)(param_5 + 0x80);
                if (((*(byte *)(_UnityEngine_Object_TypeInfo_12d54e0 + 0x133) >> 2 & 1) != 0) &&
                   (*(int *)(_UnityEngine_Object_TypeInfo_12d54e0 + 0xe0) == 0)) {
                  native_sub_4327ec();
                }
                uVar4 = native_UnityEngine_Object__op_Equality_8e9a3c(uVar6,0,0);
                if ((uVar4 & 1) == 0) {
                  if ((*(long *)(param_5 + 0x80) == 0) ||
                     (lVar3 = native_UnityEngine_Component__get_transform_8da62c
                                        (*(long *)(param_5 + 0x80),0), lVar3 == 0))
                  goto LAB_00af0ba8;
                  uVar6 = native_UnityEngine_Transform__get_parent_765eb0(lVar3,0);
                  uVar5 = native_UIRect__get_cachedTransform_c27c58(param_5,0);
                  if (((*(byte *)(_UnityEngine_Object_TypeInfo_12d54e0 + 0x133) >> 2 & 1) != 0) &&
                     (*(int *)(_UnityEngine_Object_TypeInfo_12d54e0 + 0xe0) == 0)) {
                    native_sub_4327ec(_UnityEngine_Object_TypeInfo_12d54e0);
                  }
                  uVar4 = native_UnityEngine_Object__op_Inequality_8d76fc(uVar6,uVar5,0);
                  if ((uVar4 & 1) == 0) goto LAB_00af08b4;
                }
                lVar3 = native_UIRect__get_cachedTransform_c27c58(param_5,0);
                if (lVar3 == 0) goto LAB_00af0ba8;
                fVar16 = (float)native_UnityEngine_Transform__get_position_77169c(lVar3,0);
                lVar3 = 0;
                uVar4 = 0xffffffffffffffff;
                do {
                  if (((*(byte *)(_UIPanel_TypeInfo_12d6478 + 0x133) >> 2 & 1) != 0) &&
                     (*(int *)(_UIPanel_TypeInfo_12d6478 + 0xe0) == 0)) {
                    native_sub_4327ec();
                  }
                  lVar7 = *(long *)(*(long *)(_UIPanel_TypeInfo_12d6478 + 0xb8) + 0x10);
                  if (lVar7 == 0) goto LAB_00af0ba8;
                  if ((ulong)*(uint *)(lVar7 + 0x18) <= uVar4 + 1) goto LAB_00af0bac;
                  lVar7 = lVar7 + lVar3;
                  uVar4 = uVar4 + 1;
                  lVar3 = lVar3 + 0xc;
                  *(ulong *)(lVar7 + 0x20) =
                       CONCAT44(fVar20 + (float)((ulong)*(undefined8 *)(lVar7 + 0x20) >> 0x20),
                                fVar16 + (float)*(undefined8 *)(lVar7 + 0x20));
                  *(float *)(lVar7 + 0x28) = param_2 + *(float *)(lVar7 + 0x28);
                } while (uVar4 < 3);
              }
LAB_00af08b4:
              if (((*(byte *)(_UIPanel_TypeInfo_12d6478 + 0x133) >> 2 & 1) != 0) &&
                 (*(int *)(_UIPanel_TypeInfo_12d6478 + 0xe0) == 0)) {
                native_sub_4327ec();
              }
              return *(undefined8 *)(*(long *)(_UIPanel_TypeInfo_12d6478 + 0xb8) + 0x10);
            }
          }
        }
      }
LAB_00af0bac:
      uVar6 = native_sub_43283c();
                    /* WARNING: Subroutine does not return */
      native_sub_4327dc(uVar6,0);
    }
    goto LAB_00af0ba8;
  }
  lVar3 = *(long *)(param_5 + 0x80);
  fVar20 = (float)native_UIRect__get_cameraRayDistance_c2da0c(param_5,0);
  if (((*(byte *)(_NGUITools_TypeInfo_12d53c8 + 0x133) >> 2 & 1) != 0) &&
     (*(int *)(_NGUITools_TypeInfo_12d53c8 + 0xe0) == 0)) {
    native_sub_4327ec();
  }
  if ((bRam000000000133f5cb & 1) == 0) {
    native_sub_43273c(&NGUITools_TypeInfo_12d53c8,0);
    bRam000000000133f5cb = 1;
  }
  if (((*(byte *)(_NGUITools_TypeInfo_12d53c8 + 0x133) >> 2 & 1) != 0) &&
     (*(int *)(_NGUITools_TypeInfo_12d53c8 + 0xe0) == 0)) {
    native_sub_4327ec();
  }
  if ((bRam000000000133f5cd & 1) == 0) {
    native_sub_43273c(&NGUITools_TypeInfo_12d53c8);
    native_sub_43273c(&UnityEngine_Object_TypeInfo_12d54e0);
    bRam000000000133f5cd = 1;
  }
  uStack_a0 = 0;
  uStack_98 = 0;
  if (lVar3 == 0) goto LAB_00733e6c;
  uVar4 = native_UnityEngine_Camera__get_orthographic_8d86c0(lVar3,0);
  if ((uVar4 & 1) == 0) {
    if (((*(byte *)(_NGUITools_TypeInfo_12d53c8 + 0x133) >> 2 & 1) != 0) &&
       (*(int *)(_NGUITools_TypeInfo_12d53c8 + 0xe0) == 0)) {
      native_sub_4327ec();
    }
    uVar8 = 0;
    lVar7 = *(long *)(*(long *)(_NGUITools_TypeInfo_12d53c8 + 0xb8) + 0x38);
    fVar16 = fVar20;
    uVar9 = native_UnityEngine_Camera__ViewportToWorldPoint_8d9168(0,lVar3,0);
    if (lVar7 == 0) goto LAB_00733e6c;
    if (*(int *)(lVar7 + 0x18) == 0) goto LAB_00733e70;
    *(undefined4 *)(lVar7 + 0x20) = uVar9;
    *(undefined4 *)(lVar7 + 0x24) = uVar8;
    *(float *)(lVar7 + 0x28) = fVar16;
    uVar8 = 0x3f800000;
    lVar7 = *(long *)(*(long *)(_NGUITools_TypeInfo_12d53c8 + 0xb8) + 0x38);
    fVar16 = fVar20;
    uVar9 = native_UnityEngine_Camera__ViewportToWorldPoint_8d9168(0,lVar3,0);
    if (lVar7 == 0) goto LAB_00733e6c;
    if (*(uint *)(lVar7 + 0x18) < 2) goto LAB_00733e70;
    *(undefined4 *)(lVar7 + 0x2c) = uVar9;
    *(undefined4 *)(lVar7 + 0x30) = uVar8;
    *(float *)(lVar7 + 0x34) = fVar16;
    uVar9 = 0x3f800000;
    lVar7 = *(long *)(*(long *)(_NGUITools_TypeInfo_12d53c8 + 0xb8) + 0x38);
    fVar16 = fVar20;
    uVar8 = native_UnityEngine_Camera__ViewportToWorldPoint_8d9168(lVar3,0);
    if (lVar7 == 0) goto LAB_00733e6c;
    if (*(uint *)(lVar7 + 0x18) < 3) goto LAB_00733e70;
    *(undefined4 *)(lVar7 + 0x38) = uVar8;
    *(undefined4 *)(lVar7 + 0x3c) = uVar9;
    *(float *)(lVar7 + 0x40) = fVar16;
    fVar18 = 0.0;
    lVar7 = *(long *)(*(long *)(_NGUITools_TypeInfo_12d53c8 + 0xb8) + 0x38);
    fVar16 = (float)native_UnityEngine_Camera__ViewportToWorldPoint_8d9168(0x3f800000,lVar3,0);
    if (lVar7 == 0) goto LAB_00733e6c;
    if (*(uint *)(lVar7 + 0x18) < 4) goto LAB_00733e70;
  }
  else {
    fVar22 = (float)native_UnityEngine_Camera__get_orthographicSize_8d8630(lVar3,0);
    uVar9 = native_UnityEngine_Camera__get_rect_8d8b48(lVar3,0);
    uStack_a0 = CONCAT44(param_2,uVar9);
    uStack_98 = CONCAT44((int)param_4,(int)param_3);
    if (((*(byte *)(_NGUITools_TypeInfo_12d53c8 + 0x133) >> 2 & 1) != 0) &&
       (*(int *)(_NGUITools_TypeInfo_12d53c8 + 0xe0) == 0)) {
      native_sub_4327ec();
    }
    iVar1 = native_UnityEngine_Screen__get_width_76a5e4(0);
    iVar2 = native_UnityEngine_Screen__get_height_76a618(0);
    fVar16 = (float)native_UnityEngine_Rect__get_width_76367c(&uStack_a0,0);
    fVar18 = (float)native_UnityEngine_Rect__get_height_76368c(&uStack_a0,0);
    lVar3 = native_UnityEngine_Component__get_transform_8da62c(lVar3,0);
    if (lVar3 == 0) goto LAB_00733e6c;
    uVar11 = (ulong)(uint)(fVar16 / fVar18);
    fVar21 = -fVar22;
    fVar23 = ((float)iVar1 / (float)iVar2) * (fVar16 / fVar18);
    fVar15 = fVar23 * fVar21;
    uVar10 = native_UnityEngine_Transform__get_rotation_771a30(lVar3,0);
    uVar4 = uVar11;
    uVar13 = param_3;
    fVar16 = (float)native_UnityEngine_Transform__get_position_77169c(lVar3,0);
    lVar3 = *(long *)(*(long *)(_NGUITools_TypeInfo_12d53c8 + 0xb8) + 0x38);
    fVar19 = (float)param_3;
    uVar12 = uVar11;
    uVar14 = param_3;
    fVar24 = (float)native_UnityEngine_Quaternion__op_Multiply_7629c0
                              (uVar10,uVar11,param_3,param_4,fVar15,fVar21,fVar20,0);
    if (lVar3 == 0) goto LAB_00733e6c;
    if (*(int *)(lVar3 + 0x18) == 0) goto LAB_00733e70;
    uVar10 = uVar10 & 0xffffffff;
    fVar18 = (float)uVar4;
    fVar17 = (float)uVar13;
    *(float *)(lVar3 + 0x28) = fVar17 + (float)uVar14;
    *(float *)(lVar3 + 0x20) = fVar16 + fVar24;
    *(float *)(lVar3 + 0x24) = fVar18 + (float)uVar12;
    param_3 = param_3 & 0xffffffff;
    param_4 = param_4 & 0xffffffff;
    lVar3 = *(long *)(*(long *)(_NGUITools_TypeInfo_12d53c8 + 0xb8) + 0x38);
    uVar4 = uVar11;
    fVar24 = fVar19;
    fVar15 = (float)native_UnityEngine_Quaternion__op_Multiply_7629c0
                              (uVar10,uVar11,param_3,param_4,fVar15,fVar22,fVar20,0);
    if (lVar3 == 0) goto LAB_00733e6c;
    if (*(uint *)(lVar3 + 0x18) < 2) goto LAB_00733e70;
    *(float *)(lVar3 + 0x2c) = fVar16 + fVar15;
    *(float *)(lVar3 + 0x30) = fVar18 + (float)uVar4;
    *(float *)(lVar3 + 0x34) = fVar17 + fVar24;
    fVar23 = fVar22 * fVar23;
    lVar3 = *(long *)(*(long *)(_NGUITools_TypeInfo_12d53c8 + 0xb8) + 0x38);
    uVar4 = uVar11;
    fVar24 = fVar19;
    fVar22 = (float)native_UnityEngine_Quaternion__op_Multiply_7629c0
                              (uVar10,uVar11,param_3,param_4,fVar23,fVar22,fVar20,0);
    if (lVar3 == 0) goto LAB_00733e6c;
    if (*(uint *)(lVar3 + 0x18) < 3) goto LAB_00733e70;
    *(float *)(lVar3 + 0x38) = fVar16 + fVar22;
    *(float *)(lVar3 + 0x3c) = fVar18 + (float)uVar4;
    *(float *)(lVar3 + 0x40) = fVar17 + fVar24;
    lVar7 = *(long *)(*(long *)(_NGUITools_TypeInfo_12d53c8 + 0xb8) + 0x38);
    fVar22 = (float)native_UnityEngine_Quaternion__op_Multiply_7629c0
                              (uVar10,uVar11,param_3,param_4,fVar23,fVar21,fVar20,0);
    if (lVar7 == 0) goto LAB_00733e6c;
    if (*(uint *)(lVar7 + 0x18) < 4) goto LAB_00733e70;
    fVar20 = fVar17 + fVar19;
    fVar18 = fVar18 + (float)uVar11;
    fVar16 = fVar16 + fVar22;
  }
  *(float *)(lVar7 + 0x44) = fVar16;
  *(float *)(lVar7 + 0x48) = fVar18;
  *(float *)(lVar7 + 0x4c) = fVar20;
  if (((*(byte *)(_UnityEngine_Object_TypeInfo_12d54e0 + 0x133) >> 2 & 1) != 0) &&
     (*(int *)(_UnityEngine_Object_TypeInfo_12d54e0 + 0xe0) == 0)) {
    native_sub_4327ec();
  }
  uVar4 = native_UnityEngine_Object__op_Inequality_8d76fc(0,0,0);
  if ((uVar4 & 1) == 0) {
    if (((*(byte *)(_NGUITools_TypeInfo_12d53c8 + 0x133) >> 2 & 1) != 0) &&
       (*(int *)(_NGUITools_TypeInfo_12d53c8 + 0xe0) == 0)) {
      native_sub_4327ec();
    }
    return *(undefined8 *)(*(long *)(_NGUITools_TypeInfo_12d53c8 + 0xb8) + 0x38);
  }
  if (((*(byte *)(_NGUITools_TypeInfo_12d53c8 + 0x133) >> 2 & 1) != 0) &&
     (*(int *)(_NGUITools_TypeInfo_12d53c8 + 0xe0) == 0)) {
    native_sub_4327ec();
  }
  lVar3 = *(long *)(*(long *)(_NGUITools_TypeInfo_12d53c8 + 0xb8) + 0x38);
  if ((lVar3 != 0) && (*(int *)(lVar3 + 0x18) == 0)) {
LAB_00733e70:
    uVar6 = native_sub_43283c();
                    /* WARNING: Subroutine does not return */
    native_sub_4327dc(uVar6,0);
  }
LAB_00733e6c:
                    /* WARNING: Subroutine does not return */
  native_sub_432810();
}



/* UIPanel$$GetSides @ 0xaf0bb8
 * UnityEngine_Vector3_array* UIPanel__GetSides (UIPanel_o* __this, UnityEngine_Transform_o* relativeTo, const MethodInfo* method); */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* UIPanel$$GetSides
   UnityEngine_Vector3_array* UIPanel__GetSides (UIPanel_o* __this, UnityEngine_Transform_o*
   relativeTo, const MethodInfo* method); */

long native_UIPanel__GetSides_af0bb8
               (undefined1 param_1 [16],float param_2,undefined8 param_3,undefined4 param_4,
               long param_5,long param_6)

{
  long lVar1;
  uint uVar2;
  int iVar3;
  int iVar4;
  long lVar5;
  ulong uVar6;
  undefined8 uVar7;
  ulong uVar8;
  float *pfVar9;
  undefined4 *puVar10;
  long lVar11;
  undefined4 uVar12;
  undefined8 uVar13;
  undefined4 uVar14;
  undefined4 uVar15;
  float fVar16;
  float fVar17;
  float fVar18;
  float fVar19;
  float fVar20;
  float fVar21;
  float fVar22;
  float fVar23;
  undefined8 uStack_a0;
  undefined8 uStack_98;
  
  if ((bRam0000000001342045 & 1) == 0) {
    native_sub_43273c(&NGUITools_TypeInfo_12d53c8);
    native_sub_43273c(&UnityEngine_Object_TypeInfo_12d54e0);
    native_sub_43273c(&UIRect_TypeInfo_12d64a0);
    bRam0000000001342045 = 1;
  }
  if (*(int *)(param_5 + 0x140) == 0) {
    uVar7 = native_UIRect__get_anchorCamera_c26f1c(param_5,0);
    if (((*(byte *)(_UnityEngine_Object_TypeInfo_12d54e0 + 0x133) >> 2 & 1) != 0) &&
       (*(int *)(_UnityEngine_Object_TypeInfo_12d54e0 + 0xe0) == 0)) {
      native_sub_4327ec(_UnityEngine_Object_TypeInfo_12d54e0);
    }
    uVar6 = native_UnityEngine_Object__op_Inequality_8d76fc(uVar7,0,0);
    if (((uVar6 & 1) == 0) || (*(char *)(param_5 + 0xa3) == '\0')) {
      if ((bRam000000000134270d & 1) == 0) {
        native_sub_43273c(&NGUITools_TypeInfo_12d53c8,param_6,0);
        native_sub_43273c(&UnityEngine_Object_TypeInfo_12d54e0);
        native_sub_43273c(&UIRect_TypeInfo_12d64a0);
        bRam000000000134270d = 1;
      }
      uVar7 = native_UIRect__get_anchorCamera_c26f1c(param_5);
      if (((*(byte *)(_UnityEngine_Object_TypeInfo_12d54e0 + 0x133) >> 2 & 1) != 0) &&
         (*(int *)(_UnityEngine_Object_TypeInfo_12d54e0 + 0xe0) == 0)) {
        native_sub_4327ec(_UnityEngine_Object_TypeInfo_12d54e0);
      }
      uVar6 = native_UnityEngine_Object__op_Inequality_8d76fc(uVar7,0,0);
      if ((uVar6 & 1) == 0) {
        lVar5 = native_UIRect__get_cachedTransform_c27c58(param_5);
        uVar12 = (undefined4)param_3;
        if (lVar5 != 0) {
          uVar14 = native_UnityEngine_Transform__get_position_77169c(lVar5,0);
          lVar5 = 0;
          uVar6 = 0xffffffffffffffff;
          do {
            if (((*(byte *)(_UIRect_TypeInfo_12d64a0 + 0x133) >> 2 & 1) != 0) &&
               (*(int *)(_UIRect_TypeInfo_12d64a0 + 0xe0) == 0)) {
              native_sub_4327ec();
            }
            lVar11 = **(long **)(_UIRect_TypeInfo_12d64a0 + 0xb8);
            if (lVar11 == 0) goto LAB_00c2df88;
            if ((ulong)*(uint *)(lVar11 + 0x18) <= uVar6 + 1) goto LAB_00c2df8c;
            uVar6 = uVar6 + 1;
            lVar11 = lVar11 + lVar5;
            lVar5 = lVar5 + 0xc;
            *(undefined4 *)(lVar11 + 0x20) = uVar14;
            *(float *)(lVar11 + 0x24) = param_2;
            *(undefined4 *)(lVar11 + 0x28) = uVar12;
          } while (uVar6 < 3);
          if (((*(byte *)(_UnityEngine_Object_TypeInfo_12d54e0 + 0x133) >> 2 & 1) != 0) &&
             (*(int *)(_UnityEngine_Object_TypeInfo_12d54e0 + 0xe0) == 0)) {
            native_sub_4327ec();
          }
          uVar6 = native_UnityEngine_Object__op_Inequality_8d76fc(param_6,0,0);
          if ((uVar6 & 1) != 0) {
            lVar5 = 0;
            uVar6 = 0xffffffffffffffff;
            do {
              if (((*(byte *)(_UIRect_TypeInfo_12d64a0 + 0x133) >> 2 & 1) != 0) &&
                 (*(int *)(_UIRect_TypeInfo_12d64a0 + 0xe0) == 0)) {
                native_sub_4327ec();
              }
              lVar11 = **(long **)(_UIRect_TypeInfo_12d64a0 + 0xb8);
              if (lVar11 == 0) goto LAB_00c2df88;
              if ((ulong)*(uint *)(lVar11 + 0x18) <= uVar6 + 1) {
LAB_00c2df8c:
                uVar7 = native_sub_43283c();
                    /* WARNING: Subroutine does not return */
                native_sub_4327dc(uVar7,0);
              }
              if (param_6 == 0) goto LAB_00c2df88;
              lVar1 = lVar11 + lVar5;
              uVar14 = *(undefined4 *)(lVar1 + 0x24);
              uVar15 = *(undefined4 *)(lVar1 + 0x28);
              uVar12 = native_UnityEngine_Transform__InverseTransformPoint_7729a0
                                 (*(undefined4 *)(lVar1 + 0x20),param_6,0);
              if ((ulong)*(uint *)(lVar11 + 0x18) <= uVar6 + 1) goto LAB_00c2df8c;
              uVar6 = uVar6 + 1;
              lVar5 = lVar5 + 0xc;
              *(undefined4 *)(lVar1 + 0x20) = uVar12;
              *(undefined4 *)(lVar1 + 0x24) = uVar14;
              *(undefined4 *)(lVar1 + 0x28) = uVar15;
            } while (uVar6 < 3);
          }
          if (((*(byte *)(_UIRect_TypeInfo_12d64a0 + 0x133) >> 2 & 1) != 0) &&
             (*(int *)(_UIRect_TypeInfo_12d64a0 + 0xe0) == 0)) {
            native_sub_4327ec();
          }
          return **(long **)(_UIRect_TypeInfo_12d64a0 + 0xb8);
        }
LAB_00c2df88:
                    /* WARNING: Subroutine does not return */
        native_sub_432810();
      }
      lVar5 = *(long *)(param_5 + 0x80);
      fVar18 = (float)native_UIRect__get_cameraRayDistance_c2da0c(param_5);
      if (((*(byte *)(_NGUITools_TypeInfo_12d53c8 + 0x133) >> 2 & 1) != 0) &&
         (*(int *)(_NGUITools_TypeInfo_12d53c8 + 0xe0) == 0)) {
        native_sub_4327ec();
      }
      if ((bRam000000000133f5c9 & 1) == 0) {
        native_sub_43273c(&NGUITools_TypeInfo_12d53c8,param_6,0);
        native_sub_43273c(&UnityEngine_Object_TypeInfo_12d54e0);
        bRam000000000133f5c9 = 1;
      }
      uStack_a0 = 0;
      uStack_98 = 0;
      if (lVar5 != 0) {
        uVar6 = native_UnityEngine_Camera__get_orthographic_8d86c0(lVar5,0);
        if ((uVar6 & 1) == 0) {
          if (((*(byte *)(_NGUITools_TypeInfo_12d53c8 + 0x133) >> 2 & 1) != 0) &&
             (*(int *)(_NGUITools_TypeInfo_12d53c8 + 0xe0) == 0)) {
            native_sub_4327ec();
          }
          uVar14 = 0x3f000000;
          lVar11 = *(long *)(*(long *)(_NGUITools_TypeInfo_12d53c8 + 0xb8) + 0x38);
          fVar17 = fVar18;
          uVar12 = native_UnityEngine_Camera__ViewportToWorldPoint_8d9168(0,lVar5,0);
          if (lVar11 != 0) {
            if (*(int *)(lVar11 + 0x18) != 0) {
              *(undefined4 *)(lVar11 + 0x20) = uVar12;
              *(undefined4 *)(lVar11 + 0x24) = uVar14;
              *(float *)(lVar11 + 0x28) = fVar17;
              uVar14 = 0x3f800000;
              lVar11 = *(long *)(*(long *)(_NGUITools_TypeInfo_12d53c8 + 0xb8) + 0x38);
              fVar17 = fVar18;
              uVar12 = native_UnityEngine_Camera__ViewportToWorldPoint_8d9168(0x3f000000,lVar5,0);
              if (lVar11 == 0) goto LAB_00733764;
              if (1 < *(uint *)(lVar11 + 0x18)) {
                *(undefined4 *)(lVar11 + 0x2c) = uVar12;
                *(undefined4 *)(lVar11 + 0x30) = uVar14;
                *(float *)(lVar11 + 0x34) = fVar17;
                uVar14 = 0x3f000000;
                lVar11 = *(long *)(*(long *)(_NGUITools_TypeInfo_12d53c8 + 0xb8) + 0x38);
                fVar17 = fVar18;
                uVar12 = native_UnityEngine_Camera__ViewportToWorldPoint_8d9168(0x3f800000,lVar5,0);
                if (lVar11 == 0) goto LAB_00733764;
                if (2 < *(uint *)(lVar11 + 0x18)) {
                  *(undefined4 *)(lVar11 + 0x38) = uVar12;
                  *(undefined4 *)(lVar11 + 0x3c) = uVar14;
                  *(float *)(lVar11 + 0x40) = fVar17;
                  fVar17 = 0.0;
                  lVar11 = *(long *)(*(long *)(_NGUITools_TypeInfo_12d53c8 + 0xb8) + 0x38);
                  fVar19 = (float)native_UnityEngine_Camera__ViewportToWorldPoint_8d9168
                                            (0x3f000000,lVar5,0);
                  if (lVar11 == 0) goto LAB_00733764;
                  if (3 < *(uint *)(lVar11 + 0x18)) {
LAB_00733648:
                    *(float *)(lVar11 + 0x44) = fVar19;
                    *(float *)(lVar11 + 0x48) = fVar17;
                    *(float *)(lVar11 + 0x4c) = fVar18;
                    if (((*(byte *)(_UnityEngine_Object_TypeInfo_12d54e0 + 0x133) >> 2 & 1) != 0) &&
                       (*(int *)(_UnityEngine_Object_TypeInfo_12d54e0 + 0xe0) == 0)) {
                      native_sub_4327ec();
                    }
                    uVar6 = native_UnityEngine_Object__op_Inequality_8d76fc(param_6,0,0);
                    if ((uVar6 & 1) != 0) {
                      lVar5 = 0;
                      uVar6 = 0xffffffffffffffff;
                      do {
                        if (((*(byte *)(_NGUITools_TypeInfo_12d53c8 + 0x133) >> 2 & 1) != 0) &&
                           (*(int *)(_NGUITools_TypeInfo_12d53c8 + 0xe0) == 0)) {
                          native_sub_4327ec();
                        }
                        lVar11 = *(long *)(*(long *)(_NGUITools_TypeInfo_12d53c8 + 0xb8) + 0x38);
                        if (lVar11 == 0) goto LAB_00733764;
                        if ((ulong)*(uint *)(lVar11 + 0x18) <= uVar6 + 1) goto LAB_00733768;
                        if (param_6 == 0) goto LAB_00733764;
                        lVar1 = lVar11 + lVar5;
                        uVar14 = *(undefined4 *)(lVar1 + 0x24);
                        uVar15 = *(undefined4 *)(lVar1 + 0x28);
                        uVar12 = native_UnityEngine_Transform__InverseTransformPoint_7729a0
                                           (*(undefined4 *)(lVar1 + 0x20),param_6,0);
                        if ((ulong)*(uint *)(lVar11 + 0x18) <= uVar6 + 1) goto LAB_00733768;
                        uVar6 = uVar6 + 1;
                        lVar5 = lVar5 + 0xc;
                        *(undefined4 *)(lVar1 + 0x20) = uVar12;
                        *(undefined4 *)(lVar1 + 0x24) = uVar14;
                        *(undefined4 *)(lVar1 + 0x28) = uVar15;
                      } while (uVar6 < 3);
                    }
                    if (((*(byte *)(_NGUITools_TypeInfo_12d53c8 + 0x133) >> 2 & 1) != 0) &&
                       (*(int *)(_NGUITools_TypeInfo_12d53c8 + 0xe0) == 0)) {
                      native_sub_4327ec();
                    }
                    return *(long *)(*(long *)(_NGUITools_TypeInfo_12d53c8 + 0xb8) + 0x38);
                  }
                }
              }
            }
LAB_00733768:
            uVar7 = native_sub_43283c();
                    /* WARNING: Subroutine does not return */
            native_sub_4327dc(uVar7,0);
          }
        }
        else {
          fVar20 = (float)native_UnityEngine_Camera__get_orthographicSize_8d8630(lVar5,0);
          uVar12 = native_UnityEngine_Camera__get_rect_8d8b48(lVar5,0);
          uStack_a0 = CONCAT44(param_2,uVar12);
          uStack_98 = CONCAT44(param_4,(int)param_3);
          if (((*(byte *)(_NGUITools_TypeInfo_12d53c8 + 0x133) >> 2 & 1) != 0) &&
             (*(int *)(_NGUITools_TypeInfo_12d53c8 + 0xe0) == 0)) {
            native_sub_4327ec();
          }
          iVar3 = native_UnityEngine_Screen__get_width_76a5e4(0);
          iVar4 = native_UnityEngine_Screen__get_height_76a618(0);
          fVar22 = (float)native_UnityEngine_Rect__get_width_76367c(&uStack_a0,0);
          fVar23 = (float)native_UnityEngine_Rect__get_height_76368c(&uStack_a0,0);
          lVar5 = native_UnityEngine_Component__get_transform_8da62c(lVar5,0);
          if (lVar5 != 0) {
            fVar21 = (float)iVar3;
            fVar16 = (float)iVar4;
            uVar12 = native_UnityEngine_Transform__get_rotation_771a30(lVar5,0);
            uVar7 = param_3;
            fVar17 = param_2;
            fVar19 = (float)native_UnityEngine_Transform__get_position_77169c(lVar5,0);
            uVar6 = native_UnityEngine_Mathf__RoundToInt_8e50f0(fVar21,0);
            uVar8 = native_UnityEngine_Mathf__RoundToInt_8e50f0(fVar16,0);
            if ((uVar6 & 1) != 0) {
              fVar19 = fVar19 + -1.0 / fVar21;
            }
            fVar22 = (fVar21 / fVar16) * (fVar22 / fVar23);
            if ((uVar8 & 1) != 0) {
              fVar17 = 1.0 / fVar16 + fVar17;
            }
            if (((*(byte *)(_NGUITools_TypeInfo_12d53c8 + 0x133) >> 2 & 1) != 0) &&
               (*(int *)(_NGUITools_TypeInfo_12d53c8 + 0xe0) == 0)) {
              native_sub_4327ec();
            }
            lVar5 = *(long *)(*(long *)(_NGUITools_TypeInfo_12d53c8 + 0xb8) + 0x38);
            uVar13 = param_3;
            fVar23 = param_2;
            fVar16 = (float)native_UnityEngine_Quaternion__op_Multiply_7629c0
                                      (uVar12,param_2,param_3,param_4,fVar22 * -fVar20,0,fVar18,0);
            if (lVar5 != 0) {
              if (*(int *)(lVar5 + 0x18) != 0) {
                fVar21 = (float)uVar7;
                *(float *)(lVar5 + 0x20) = fVar19 + fVar16;
                *(float *)(lVar5 + 0x24) = fVar17 + fVar23;
                *(float *)(lVar5 + 0x28) = fVar21 + (float)uVar13;
                lVar5 = *(long *)(*(long *)(_NGUITools_TypeInfo_12d53c8 + 0xb8) + 0x38);
                uVar7 = param_3;
                fVar23 = param_2;
                fVar16 = (float)native_UnityEngine_Quaternion__op_Multiply_7629c0
                                          (uVar12,param_2,param_3,param_4,0,fVar20,fVar18,0);
                if (lVar5 == 0) goto LAB_00733764;
                if (1 < *(uint *)(lVar5 + 0x18)) {
                  *(float *)(lVar5 + 0x2c) = fVar19 + fVar16;
                  *(float *)(lVar5 + 0x30) = fVar17 + fVar23;
                  *(float *)(lVar5 + 0x34) = fVar21 + (float)uVar7;
                  lVar5 = *(long *)(*(long *)(_NGUITools_TypeInfo_12d53c8 + 0xb8) + 0x38);
                  uVar7 = param_3;
                  fVar23 = param_2;
                  fVar22 = (float)native_UnityEngine_Quaternion__op_Multiply_7629c0
                                            (uVar12,param_2,param_3,param_4,fVar20 * fVar22,0,fVar18
                                             ,0);
                  if (lVar5 == 0) goto LAB_00733764;
                  if (2 < *(uint *)(lVar5 + 0x18)) {
                    *(float *)(lVar5 + 0x38) = fVar19 + fVar22;
                    *(float *)(lVar5 + 0x3c) = fVar17 + fVar23;
                    *(float *)(lVar5 + 0x40) = fVar21 + (float)uVar7;
                    lVar11 = *(long *)(*(long *)(_NGUITools_TypeInfo_12d53c8 + 0xb8) + 0x38);
                    fVar20 = (float)native_UnityEngine_Quaternion__op_Multiply_7629c0
                                              (uVar12,param_2,param_3,param_4,0,-fVar20,fVar18,0);
                    if (lVar11 == 0) goto LAB_00733764;
                    if (3 < *(uint *)(lVar11 + 0x18)) {
                      fVar18 = fVar21 + (float)param_3;
                      fVar17 = fVar17 + param_2;
                      fVar19 = fVar19 + fVar20;
                      goto LAB_00733648;
                    }
                  }
                }
              }
              goto LAB_00733768;
            }
          }
        }
      }
LAB_00733764:
                    /* WARNING: Subroutine does not return */
      native_sub_432810();
    }
    uVar7 = *(undefined8 *)(param_5 + 0x80);
    uVar13 = native_UIRect__get_cameraRayDistance_c2da0c(param_5,0);
    fVar18 = (float)param_3;
    if (((*(byte *)(_NGUITools_TypeInfo_12d53c8 + 0x133) >> 2 & 1) != 0) &&
       (*(int *)(_NGUITools_TypeInfo_12d53c8 + 0xe0) == 0)) {
      native_sub_4327ec();
    }
    lVar5 = native_NGUITools__GetSides_733774(uVar13,uVar7,0);
    lVar11 = native_UIRect__get_cachedTransform_c27c58(param_5,0);
    if ((lVar11 != 0) &&
       (fVar17 = (float)native_UnityEngine_Transform__get_position_77169c(lVar11,0), lVar5 != 0)) {
      uVar2 = *(uint *)(lVar5 + 0x18);
      uVar6 = 0xffffffffffffffff;
      pfVar9 = (float *)(lVar5 + 0x28);
      do {
        uVar6 = uVar6 + 1;
        if (uVar2 <= uVar6) goto LAB_00af1040;
        *(ulong *)(pfVar9 + -2) =
             CONCAT44(param_2 + (float)((ulong)*(undefined8 *)(pfVar9 + -2) >> 0x20),
                      fVar17 + (float)*(undefined8 *)(pfVar9 + -2));
        *pfVar9 = fVar18 + *pfVar9;
        pfVar9 = pfVar9 + 3;
      } while (uVar6 < 3);
      if (((*(byte *)(_UnityEngine_Object_TypeInfo_12d54e0 + 0x133) >> 2 & 1) != 0) &&
         (*(int *)(_UnityEngine_Object_TypeInfo_12d54e0 + 0xe0) == 0)) {
        native_sub_4327ec();
      }
      uVar6 = native_UnityEngine_Object__op_Inequality_8d76fc(param_6,0,0);
      if ((uVar6 & 1) != 0) {
        uVar8 = (ulong)*(uint *)(lVar5 + 0x18);
        uVar6 = 0xffffffffffffffff;
        puVar10 = (undefined4 *)(lVar5 + 0x28);
        do {
          if (uVar8 <= uVar6 + 1) goto LAB_00af1040;
          if (param_6 == 0) goto LAB_00af104c;
          uVar14 = puVar10[-1];
          uVar15 = *puVar10;
          uVar12 = native_UnityEngine_Transform__InverseTransformPoint_7729a0(puVar10[-2],param_6,0)
          ;
          uVar8 = (ulong)*(uint *)(lVar5 + 0x18);
          if (uVar8 <= uVar6 + 1) goto LAB_00af1040;
          uVar6 = uVar6 + 1;
          puVar10[-2] = uVar12;
          puVar10[-1] = uVar14;
          *puVar10 = uVar15;
          puVar10 = puVar10 + 3;
        } while (uVar6 < 3);
      }
      return lVar5;
    }
  }
  else {
    fVar17 = *(float *)(param_5 + 0x174);
    fVar19 = *(float *)(param_5 + 0x144);
    fVar22 = *(float *)(param_5 + 0x14c);
    fVar20 = *(float *)(param_5 + 0x178);
    fVar23 = *(float *)(param_5 + 0x148);
    fVar18 = *(float *)(param_5 + 0x150);
    lVar5 = native_UIRect__get_cachedTransform_c27c58(param_5,0);
    if (((*(byte *)(_UIRect_TypeInfo_12d64a0 + 0x133) >> 2 & 1) != 0) &&
       (*(int *)(_UIRect_TypeInfo_12d64a0 + 0xe0) == 0)) {
      native_sub_4327ec(_UIRect_TypeInfo_12d64a0);
    }
    if (lVar5 != 0) {
      fVar20 = (fVar20 + fVar23) - fVar18 * 0.5;
      fVar18 = fVar18 + fVar20;
      fVar23 = (fVar17 + fVar19) - fVar22 * 0.5;
      lVar11 = **(long **)(_UIRect_TypeInfo_12d64a0 + 0xb8);
      fVar19 = (fVar20 + fVar18) * 0.5;
      uVar14 = 0;
      fVar17 = fVar19;
      uVar12 = native_UnityEngine_Transform__TransformPoint_77299c(fVar23,lVar5,0);
      if (lVar11 != 0) {
        if (*(int *)(lVar11 + 0x18) != 0) {
          *(undefined4 *)(lVar11 + 0x20) = uVar12;
          *(float *)(lVar11 + 0x24) = fVar17;
          *(undefined4 *)(lVar11 + 0x28) = uVar14;
          fVar22 = fVar22 + fVar23;
          fVar17 = (fVar23 + fVar22) * 0.5;
          uVar14 = 0;
          lVar11 = **(long **)(_UIRect_TypeInfo_12d64a0 + 0xb8);
          uVar12 = native_UnityEngine_Transform__TransformPoint_77299c(fVar17,lVar5,0);
          if (lVar11 == 0) goto LAB_00af104c;
          if (1 < *(uint *)(lVar11 + 0x18)) {
            *(undefined4 *)(lVar11 + 0x2c) = uVar12;
            *(float *)(lVar11 + 0x30) = fVar18;
            *(undefined4 *)(lVar11 + 0x34) = uVar14;
            uVar14 = 0;
            lVar11 = **(long **)(_UIRect_TypeInfo_12d64a0 + 0xb8);
            uVar12 = native_UnityEngine_Transform__TransformPoint_77299c(fVar22,lVar5,0);
            if (lVar11 == 0) goto LAB_00af104c;
            if (2 < *(uint *)(lVar11 + 0x18)) {
              *(undefined4 *)(lVar11 + 0x38) = uVar12;
              *(float *)(lVar11 + 0x3c) = fVar19;
              *(undefined4 *)(lVar11 + 0x40) = uVar14;
              uVar14 = 0;
              lVar11 = **(long **)(_UIRect_TypeInfo_12d64a0 + 0xb8);
              uVar12 = native_UnityEngine_Transform__TransformPoint_77299c(fVar17,lVar5,0);
              if (lVar11 == 0) goto LAB_00af104c;
              if (3 < *(uint *)(lVar11 + 0x18)) {
                *(undefined4 *)(lVar11 + 0x44) = uVar12;
                *(float *)(lVar11 + 0x48) = fVar20;
                *(undefined4 *)(lVar11 + 0x4c) = uVar14;
                if (((*(byte *)(_UnityEngine_Object_TypeInfo_12d54e0 + 0x133) >> 2 & 1) != 0) &&
                   (*(int *)(_UnityEngine_Object_TypeInfo_12d54e0 + 0xe0) == 0)) {
                  native_sub_4327ec();
                }
                uVar6 = native_UnityEngine_Object__op_Inequality_8d76fc(param_6,0,0);
                if ((uVar6 & 1) != 0) {
                  lVar5 = 0;
                  uVar6 = 0xffffffffffffffff;
                  do {
                    if (((*(byte *)(_UIRect_TypeInfo_12d64a0 + 0x133) >> 2 & 1) != 0) &&
                       (*(int *)(_UIRect_TypeInfo_12d64a0 + 0xe0) == 0)) {
                      native_sub_4327ec();
                    }
                    lVar11 = **(long **)(_UIRect_TypeInfo_12d64a0 + 0xb8);
                    if (lVar11 == 0) goto LAB_00af104c;
                    if ((ulong)*(uint *)(lVar11 + 0x18) <= uVar6 + 1) goto LAB_00af1040;
                    if (param_6 == 0) goto LAB_00af104c;
                    lVar1 = lVar11 + lVar5;
                    uVar14 = *(undefined4 *)(lVar1 + 0x24);
                    uVar15 = *(undefined4 *)(lVar1 + 0x28);
                    uVar12 = native_UnityEngine_Transform__InverseTransformPoint_7729a0
                                       (*(undefined4 *)(lVar1 + 0x20),param_6,0);
                    if ((ulong)*(uint *)(lVar11 + 0x18) <= uVar6 + 1) goto LAB_00af1040;
                    uVar6 = uVar6 + 1;
                    lVar5 = lVar5 + 0xc;
                    *(undefined4 *)(lVar1 + 0x20) = uVar12;
                    *(undefined4 *)(lVar1 + 0x24) = uVar14;
                    *(undefined4 *)(lVar1 + 0x28) = uVar15;
                  } while (uVar6 < 3);
                }
                if (((*(byte *)(_UIRect_TypeInfo_12d64a0 + 0x133) >> 2 & 1) != 0) &&
                   (*(int *)(_UIRect_TypeInfo_12d64a0 + 0xe0) == 0)) {
                  native_sub_4327ec();
                }
                return **(long **)(_UIRect_TypeInfo_12d64a0 + 0xb8);
              }
            }
          }
        }
LAB_00af1040:
        uVar7 = native_sub_43283c();
                    /* WARNING: Subroutine does not return */
        native_sub_4327dc(uVar7,0);
      }
    }
  }
LAB_00af104c:
                    /* WARNING: Subroutine does not return */
  native_sub_432810();
}



/* UIPanel$$Invalidate @ 0xaf1050
 * void UIPanel__Invalidate (UIPanel_o* __this, bool includeChildren, const MethodInfo* method); */

/* UIPanel$$Invalidate
   void UIPanel__Invalidate (UIPanel_o* __this, bool includeChildren, const MethodInfo* method); */

void native_UIPanel__Invalidate_af1050(long param_1,uint param_2)

{
  long *plVar1;
  undefined8 uVar2;
  long lVar3;
  long lVar4;
  
  *(undefined4 *)(param_1 + 0x180) = 0xffffffff;
  *(undefined1 *)(param_1 + 0x58) = 1;
  if ((param_2 & 1) == 0) {
    return;
  }
  lVar3 = *(long *)(param_1 + 0x50);
  if (lVar3 != 0) {
    lVar4 = 0;
    do {
      if (*(int *)(lVar3 + 0x18) <= (int)(uint)lVar4) {
        return;
      }
      lVar3 = *(long *)(lVar3 + 0x10);
      if (lVar3 == 0) break;
      if (*(uint *)(lVar3 + 0x18) <= (uint)lVar4) {
        uVar2 = native_sub_43283c();
                    /* WARNING: Subroutine does not return */
        native_sub_4327dc(uVar2,0);
      }
      plVar1 = *(long **)(lVar3 + lVar4 * 8 + 0x20);
      if (plVar1 == (long *)0x0) break;
      (**(code **)(*plVar1 + 0x1f8))(plVar1,1,*(undefined8 *)(*plVar1 + 0x200));
      lVar3 = *(long *)(param_1 + 0x50);
      lVar4 = lVar4 + 1;
    } while (lVar3 != 0);
  }
                    /* WARNING: Subroutine does not return */
  native_sub_432810();
}



/* UIPanel$$CalculateFinalAlpha @ 0xaf1064
 * float UIPanel__CalculateFinalAlpha (UIPanel_o* __this, int32_t frameID, const MethodInfo* method); */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* UIPanel$$CalculateFinalAlpha
   float UIPanel__CalculateFinalAlpha (UIPanel_o* __this, int32_t frameID, const MethodInfo*
   method); */

undefined4 native_UIPanel__CalculateFinalAlpha_af1064(long param_1,int param_2)

{
  long *plVar1;
  undefined8 uVar2;
  ulong uVar3;
  undefined4 uVar4;
  
  if ((bRam0000000001342046 & 1) == 0) {
    native_sub_43273c(&UnityEngine_Object_TypeInfo_12d54e0);
    bRam0000000001342046 = 1;
  }
  if (*(int *)(param_1 + 0x180) != param_2) {
    *(int *)(param_1 + 0x180) = param_2;
    plVar1 = (long *)native_UIRect__get_parent_c2afcc(param_1,0);
    uVar2 = native_UIRect__get_parent_c2afcc(param_1,0);
    if (((*(byte *)(_UnityEngine_Object_TypeInfo_12d54e0 + 0x133) >> 2 & 1) != 0) &&
       (*(int *)(_UnityEngine_Object_TypeInfo_12d54e0 + 0xe0) == 0)) {
      native_sub_4327ec(_UnityEngine_Object_TypeInfo_12d54e0);
    }
    uVar3 = native_UnityEngine_Object__op_Inequality_8d76fc(uVar2,0,0);
    if ((uVar3 & 1) == 0) {
      uVar4 = 0x3f800000;
    }
    else {
      if (plVar1 == (long *)0x0) {
                    /* WARNING: Subroutine does not return */
        native_sub_432810();
      }
      uVar4 = (**(code **)(*plVar1 + 0x1c8))(plVar1,param_2,*(undefined8 *)(*plVar1 + 0x1d0));
    }
    *(undefined4 *)(param_1 + 0x8c) = uVar4;
    uVar3 = native_System_String__IsNullOrEmpty_b09430(*(undefined8 *)(param_1 + 0x138),0);
    if ((uVar3 & 1) != 0) {
      *(float *)(param_1 + 0x8c) = *(float *)(param_1 + 0x8c) * *(float *)(param_1 + 0x130);
    }
  }
  return *(undefined4 *)(param_1 + 0x8c);
}



/* UIPanel$$SetRect @ 0xaf116c
 * void UIPanel__SetRect (UIPanel_o* __this, float x, float y, float width, float height, const MethodInfo* method); */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* UIPanel$$SetRect
   void UIPanel__SetRect (UIPanel_o* __this, float x, float y, float width, float height, const
   MethodInfo* method); */

void native_UIPanel__SetRect_af116c
               (undefined8 param_1,undefined1 param_2 [16],float param_3,float param_4,long param_5)

{
  uint uVar1;
  uint uVar2;
  long lVar3;
  ulong uVar4;
  undefined8 uVar5;
  undefined8 uVar6;
  undefined8 uStack_70;
  undefined8 uStack_68;
  
  if ((bRam0000000001342047 & 1) == 0) {
    native_sub_43273c(&UnityEngine_Object_TypeInfo_12d54e0);
    bRam0000000001342047 = 1;
  }
  uVar1 = native_UnityEngine_Mathf__FloorToInt_8e506c(param_3 + 0.5,0);
  uVar2 = native_UnityEngine_Mathf__FloorToInt_8e506c(param_4 + 0.5,0);
  lVar3 = native_UIRect__get_cachedTransform_c27c58(param_5,0);
  if (lVar3 != 0) {
    uVar1 = uVar1 & 0xfffffffe;
    uVar2 = uVar2 & 0xfffffffe;
    native_UnityEngine_Transform__get_localPosition_7717f4(lVar3,0);
    if ((int)uVar1 < 3) {
      uVar1 = 2;
    }
    if ((int)uVar2 < 3) {
      uVar2 = 2;
    }
    uStack_70 = 0;
    uStack_68 = 0;
    native_UnityEngine_Vector4___ctor_776f24
              ((int)((float)param_1 + 0.5),(int)(param_2._0_4_ + 0.5),(float)(int)uVar1,
               (float)(int)uVar2,&uStack_70,0);
    native_UIPanel__set_baseClipRegion_af025c
              (uStack_70 & 0xffffffff,uStack_70._4_4_,(undefined4)uStack_68,uStack_68._4_4_,param_5)
    ;
    uVar4 = native_UIRect__get_isAnchored_c2d8cc(param_5,0);
    if ((uVar4 & 1) == 0) {
      return;
    }
    uVar5 = native_UnityEngine_Transform__get_parent_765eb0(lVar3,0);
    if (*(long *)(param_5 + 0x18) != 0) {
      uVar6 = *(undefined8 *)(*(long *)(param_5 + 0x18) + 0x10);
      if (((*(byte *)(_UnityEngine_Object_TypeInfo_12d54e0 + 0x133) >> 2 & 1) != 0) &&
         (*(int *)(_UnityEngine_Object_TypeInfo_12d54e0 + 0xe0) == 0)) {
        native_sub_4327ec();
      }
      uVar4 = native_UnityEngine_Object__op_Implicit_8e1b98(uVar6,0);
      if ((uVar4 & 1) != 0) {
        if (*(long *)(param_5 + 0x18) == 0) goto LAB_00af13cc;
        native_UIRect_AnchorPoint__SetHorizontal_559078(param_1,*(long *)(param_5 + 0x18),uVar5,0);
      }
      if (*(long *)(param_5 + 0x20) != 0) {
        uVar6 = *(undefined8 *)(*(long *)(param_5 + 0x20) + 0x10);
        if (((*(byte *)(_UnityEngine_Object_TypeInfo_12d54e0 + 0x133) >> 2 & 1) != 0) &&
           (*(int *)(_UnityEngine_Object_TypeInfo_12d54e0 + 0xe0) == 0)) {
          native_sub_4327ec();
        }
        uVar4 = native_UnityEngine_Object__op_Implicit_8e1b98(uVar6,0);
        if ((uVar4 & 1) != 0) {
          if (*(long *)(param_5 + 0x20) == 0) goto LAB_00af13cc;
          native_UIRect_AnchorPoint__SetHorizontal_559078
                    ((float)param_1 + param_3,*(long *)(param_5 + 0x20),uVar5,0);
        }
        if (*(long *)(param_5 + 0x28) != 0) {
          uVar6 = *(undefined8 *)(*(long *)(param_5 + 0x28) + 0x10);
          if (((*(byte *)(_UnityEngine_Object_TypeInfo_12d54e0 + 0x133) >> 2 & 1) != 0) &&
             (*(int *)(_UnityEngine_Object_TypeInfo_12d54e0 + 0xe0) == 0)) {
            native_sub_4327ec();
          }
          uVar4 = native_UnityEngine_Object__op_Implicit_8e1b98(uVar6,0);
          if ((uVar4 & 1) != 0) {
            if (*(long *)(param_5 + 0x28) == 0) goto LAB_00af13cc;
            native_UIRect_AnchorPoint__SetVertical_5591e0
                      (param_2._0_8_,*(long *)(param_5 + 0x28),uVar5,0);
          }
          if (*(long *)(param_5 + 0x30) != 0) {
            uVar6 = *(undefined8 *)(*(long *)(param_5 + 0x30) + 0x10);
            if (((*(byte *)(_UnityEngine_Object_TypeInfo_12d54e0 + 0x133) >> 2 & 1) != 0) &&
               (*(int *)(_UnityEngine_Object_TypeInfo_12d54e0 + 0xe0) == 0)) {
              native_sub_4327ec();
            }
            uVar4 = native_UnityEngine_Object__op_Implicit_8e1b98(uVar6,0);
            if ((uVar4 & 1) != 0) {
              if (*(long *)(param_5 + 0x30) == 0) goto LAB_00af13cc;
              native_UIRect_AnchorPoint__SetVertical_5591e0
                        (param_2._0_4_ + param_4,*(long *)(param_5 + 0x30),uVar5,0);
            }
            return;
          }
        }
      }
    }
  }
LAB_00af13cc:
                    /* WARNING: Subroutine does not return */
  native_sub_432810();
}



/* UIPanel$$IsVisible @ 0xaf13d0
 * bool UIPanel__IsVisible (UIPanel_o* __this, UnityEngine_Vector3_o a, UnityEngine_Vector3_o b, UnityEngine_Vector3_o c, UnityEngine_Vector3_o d, const MethodInfo* method); */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* UIPanel$$IsVisible
   bool UIPanel__IsVisible (UIPanel_o* __this, UnityEngine_Vector3_o a, UnityEngine_Vector3_o b,
   UnityEngine_Vector3_o c, UnityEngine_Vector3_o d, const MethodInfo* method); */

bool native_UIPanel__IsVisible_af13d0
               (undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
               undefined8 param_5,undefined4 param_6,long param_7)

{
  bool bVar1;
  undefined8 uVar2;
  long lVar3;
  undefined4 uVar4;
  undefined4 uVar5;
  undefined4 uVar6;
  undefined4 uVar7;
  float fVar8;
  float fVar9;
  float fVar10;
  float fVar11;
  undefined4 uStack0000000000000000;
  undefined4 uStack0000000000000004;
  undefined4 in_stack_00000008;
  undefined4 uStack0000000000000010;
  undefined4 uStack0000000000000014;
  undefined4 in_stack_00000018;
  
  if ((bRam0000000001342048 & 1) == 0) {
    native_sub_43273c(&UIPanel_TypeInfo_12d6478);
    bRam0000000001342048 = 1;
  }
  native_UIPanel__UpdateTransformMatrix_af16b4(param_7);
  lVar3 = param_7 + 0xc0;
  uVar4 = native_UnityEngine_Matrix4x4__MultiplyPoint3x4_8e5cec(param_1,param_2,param_3,lVar3,0);
  uVar5 = native_UnityEngine_Matrix4x4__MultiplyPoint3x4_8e5cec(param_4,param_5,param_6,lVar3,0);
  uVar6 = native_UnityEngine_Matrix4x4__MultiplyPoint3x4_8e5cec
                    (uStack0000000000000000,uStack0000000000000004,in_stack_00000008,lVar3,0);
  uVar7 = native_UnityEngine_Matrix4x4__MultiplyPoint3x4_8e5cec
                    (uStack0000000000000010,uStack0000000000000014,in_stack_00000018,lVar3,0);
  if (((*(byte *)(_UIPanel_TypeInfo_12d6478 + 0x133) >> 2 & 1) != 0) &&
     (*(int *)(_UIPanel_TypeInfo_12d6478 + 0xe0) == 0)) {
    native_sub_4327ec();
  }
  lVar3 = *(long *)(*(long *)(_UIPanel_TypeInfo_12d6478 + 0xb8) + 8);
  if (lVar3 != 0) {
    if (*(int *)(lVar3 + 0x18) != 0) {
      *(undefined4 *)(lVar3 + 0x20) = uVar4;
      lVar3 = *(long *)(*(long *)(_UIPanel_TypeInfo_12d6478 + 0xb8) + 8);
      if (lVar3 == 0) goto LAB_00af16a4;
      if (1 < *(uint *)(lVar3 + 0x18)) {
        *(undefined4 *)(lVar3 + 0x24) = uVar5;
        lVar3 = *(long *)(*(long *)(_UIPanel_TypeInfo_12d6478 + 0xb8) + 8);
        if (lVar3 == 0) goto LAB_00af16a4;
        if (2 < *(uint *)(lVar3 + 0x18)) {
          *(undefined4 *)(lVar3 + 0x28) = uVar6;
          lVar3 = *(long *)(*(long *)(_UIPanel_TypeInfo_12d6478 + 0xb8) + 8);
          if (lVar3 == 0) goto LAB_00af16a4;
          if (3 < *(uint *)(lVar3 + 0x18)) {
            *(undefined4 *)(lVar3 + 0x2c) = uVar7;
            fVar8 = (float)native_UnityEngine_Mathf__Min_8e4bc4
                                     (*(undefined8 *)
                                       (*(long *)(_UIPanel_TypeInfo_12d6478 + 0xb8) + 8),0);
            fVar9 = (float)native_UnityEngine_Mathf__Max_8e4c7c
                                     (*(undefined8 *)
                                       (*(long *)(_UIPanel_TypeInfo_12d6478 + 0xb8) + 8),0);
            lVar3 = *(long *)(*(long *)(_UIPanel_TypeInfo_12d6478 + 0xb8) + 8);
            if (lVar3 == 0) goto LAB_00af16a4;
            if (*(int *)(lVar3 + 0x18) != 0) {
              *(int *)(lVar3 + 0x20) = (int)param_2;
              lVar3 = *(long *)(*(long *)(_UIPanel_TypeInfo_12d6478 + 0xb8) + 8);
              if (lVar3 == 0) goto LAB_00af16a4;
              if (1 < *(uint *)(lVar3 + 0x18)) {
                *(int *)(lVar3 + 0x24) = (int)param_5;
                lVar3 = *(long *)(*(long *)(_UIPanel_TypeInfo_12d6478 + 0xb8) + 8);
                if (lVar3 == 0) goto LAB_00af16a4;
                if (2 < *(uint *)(lVar3 + 0x18)) {
                  *(undefined4 *)(lVar3 + 0x28) = uStack0000000000000004;
                  lVar3 = *(long *)(*(long *)(_UIPanel_TypeInfo_12d6478 + 0xb8) + 8);
                  if (lVar3 == 0) goto LAB_00af16a4;
                  if (3 < *(uint *)(lVar3 + 0x18)) {
                    *(undefined4 *)(lVar3 + 0x2c) = uStack0000000000000014;
                    fVar10 = (float)native_UnityEngine_Mathf__Min_8e4bc4
                                              (*(undefined8 *)
                                                (*(long *)(_UIPanel_TypeInfo_12d6478 + 0xb8) + 8),0)
                    ;
                    fVar11 = (float)native_UnityEngine_Mathf__Max_8e4c7c
                                              (*(undefined8 *)
                                                (*(long *)(_UIPanel_TypeInfo_12d6478 + 0xb8) + 8),0)
                    ;
                    if (((fVar9 < *(float *)(param_7 + 0x188)) ||
                        (fVar11 < *(float *)(param_7 + 0x18c))) ||
                       (*(float *)(param_7 + 400) < fVar8)) {
                      bVar1 = false;
                    }
                    else {
                      bVar1 = fVar10 <= *(float *)(param_7 + 0x194);
                    }
                    return bVar1;
                  }
                }
              }
            }
          }
        }
      }
    }
    uVar2 = native_sub_43283c();
                    /* WARNING: Subroutine does not return */
    native_sub_4327dc(uVar2,0);
  }
LAB_00af16a4:
                    /* WARNING: Subroutine does not return */
  native_sub_432810();
}



/* UIPanel$$IsVisible @ 0xaf1784
 * bool UIPanel__IsVisible (UIPanel_o* __this, UnityEngine_Vector3_o worldPos, const MethodInfo* method); */

/* UIPanel$$IsVisible
   bool UIPanel__IsVisible (UIPanel_o* __this, UnityEngine_Vector3_o worldPos, const MethodInfo*
   method); */

bool native_UIPanel__IsVisible_af1784
               (undefined8 param_1,undefined8 param_2,undefined8 param_3,long param_4)

{
  float fVar1;
  
  if (0.001 <= *(float *)(param_4 + 0x130)) {
    if ((*(uint *)(param_4 + 0x140) | 4) == 4) {
      return true;
    }
    native_UIPanel__UpdateTransformMatrix_af16b4(param_4);
    fVar1 = (float)native_UnityEngine_Matrix4x4__MultiplyPoint3x4_8e5cec
                             (param_1,param_2,param_3,param_4 + 0xc0,0);
    if (((*(float *)(param_4 + 0x188) <= fVar1) && (*(float *)(param_4 + 0x18c) <= (float)param_2))
       && (fVar1 <= *(float *)(param_4 + 400))) {
      return (float)param_2 <= *(float *)(param_4 + 0x194);
    }
  }
  return false;
}



/* UIPanel$$IsVisible @ 0xaf1840
 * bool UIPanel__IsVisible (UIPanel_o* __this, UIWidget_o* w, const MethodInfo* method); */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* UIPanel$$IsVisible
   bool UIPanel__IsVisible (UIPanel_o* __this, UIWidget_o* w, const MethodInfo* method); */

undefined8 native_UIPanel__IsVisible_af1840(long param_1,long *param_2)

{
  uint uVar1;
  ulong uVar2;
  undefined8 uVar3;
  long lVar4;
  
  if ((bRam0000000001342049 & 1) == 0) {
    native_sub_43273c(&UnityEngine_Object_TypeInfo_12d54e0);
    bRam0000000001342049 = 1;
  }
  lVar4 = 0;
  do {
    if (((*(byte *)(_UnityEngine_Object_TypeInfo_12d54e0 + 0x133) >> 2 & 1) != 0) &&
       (*(int *)(_UnityEngine_Object_TypeInfo_12d54e0 + 0xe0) == 0)) {
      native_sub_4327ec();
    }
    uVar2 = native_UnityEngine_Object__op_Inequality_8d76fc(param_1,0,0);
    if ((uVar2 & 1) == 0) {
      return 1;
    }
    if (param_1 == 0) goto LAB_00af1974;
    if ((*(uint *)(param_1 + 0x140) | 4) == 4) {
      if (param_2 == (long *)0x0) goto LAB_00af1974;
      if (*(char *)((long)param_2 + 0xd9) != '\0') goto LAB_00af18dc;
    }
    else {
LAB_00af18dc:
      if ((lVar4 == 0) &&
         ((param_2 == (long *)0x0 ||
          (lVar4 = (**(code **)(*param_2 + 0x1e8))(param_2,*(undefined8 *)(*param_2 + 0x1f0)),
          lVar4 == 0)))) {
LAB_00af1974:
                    /* WARNING: Subroutine does not return */
        native_sub_432810();
      }
      uVar1 = *(uint *)(lVar4 + 0x18);
      if ((((uVar1 == 0) || (uVar1 == 1)) || (uVar1 < 3)) || (uVar1 == 3)) {
        uVar3 = native_sub_43283c();
                    /* WARNING: Subroutine does not return */
        native_sub_4327dc(uVar3,0);
      }
      uVar2 = native_UIPanel__IsVisible_af13d0
                        (*(undefined4 *)(lVar4 + 0x20),*(undefined4 *)(lVar4 + 0x24),
                         *(undefined4 *)(lVar4 + 0x28),*(undefined4 *)(lVar4 + 0x2c),
                         *(undefined4 *)(lVar4 + 0x30),*(undefined4 *)(lVar4 + 0x34),param_1);
      if ((uVar2 & 1) == 0) {
        return 0;
      }
    }
    param_1 = *(long *)(param_1 + 0x1a0);
  } while( true );
}



/* UIPanel$$Affects @ 0xaf1984
 * bool UIPanel__Affects (UIPanel_o* __this, UIWidget_o* w, const MethodInfo* method); */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* UIPanel$$Affects
   bool UIPanel__Affects (UIPanel_o* __this, UIWidget_o* w, const MethodInfo* method); */

undefined8 native_UIPanel__Affects_af1984(long param_1,long param_2)

{
  ulong uVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  
  if ((bRam000000000134204a & 1) == 0) {
    native_sub_43273c(&UnityEngine_Object_TypeInfo_12d54e0);
    bRam000000000134204a = 1;
  }
  if (((*(byte *)(_UnityEngine_Object_TypeInfo_12d54e0 + 0x133) >> 2 & 1) != 0) &&
     (*(int *)(_UnityEngine_Object_TypeInfo_12d54e0 + 0xe0) == 0)) {
    native_sub_4327ec();
  }
  uVar1 = native_UnityEngine_Object__op_Equality_8e9a3c(param_2,0,0);
  if ((uVar1 & 1) == 0) {
    if (param_2 == 0) {
LAB_00af1ab0:
                    /* WARNING: Subroutine does not return */
      native_sub_432810();
    }
    uVar3 = *(undefined8 *)(param_2 + 0xf0);
    if (((*(byte *)(_UnityEngine_Object_TypeInfo_12d54e0 + 0x133) >> 2 & 1) != 0) &&
       (*(int *)(_UnityEngine_Object_TypeInfo_12d54e0 + 0xe0) == 0)) {
      native_sub_4327ec();
    }
    uVar1 = native_UnityEngine_Object__op_Equality_8e9a3c(uVar3,0,0);
    if ((uVar1 & 1) == 0) {
      while( true ) {
        if (((*(byte *)(_UnityEngine_Object_TypeInfo_12d54e0 + 0x133) >> 2 & 1) != 0) &&
           (*(int *)(_UnityEngine_Object_TypeInfo_12d54e0 + 0xe0) == 0)) {
          native_sub_4327ec();
        }
        uVar1 = native_UnityEngine_Object__op_Inequality_8d76fc(param_1,0,0);
        if ((uVar1 & 1) == 0) break;
        if (((*(byte *)(_UnityEngine_Object_TypeInfo_12d54e0 + 0x133) >> 2 & 1) != 0) &&
           (*(int *)(_UnityEngine_Object_TypeInfo_12d54e0 + 0xe0) == 0)) {
          native_sub_4327ec();
        }
        uVar1 = native_UnityEngine_Object__op_Equality_8e9a3c(param_1,uVar3,0);
        if ((uVar1 & 1) != 0) {
          return 1;
        }
        if (param_1 == 0) goto LAB_00af1ab0;
        uVar2 = native_UIPanel__get_clipCount_aefea0(param_1);
        if ((int)uVar2 == 0) {
          return uVar2;
        }
        param_1 = *(long *)(param_1 + 0x1a0);
      }
    }
  }
  return 0;
}



/* UIPanel$$RebuildAllDrawCalls @ 0xaf1ab4
 * void UIPanel__RebuildAllDrawCalls (UIPanel_o* __this, const MethodInfo* method); */

/* UIPanel$$RebuildAllDrawCalls
   void UIPanel__RebuildAllDrawCalls (UIPanel_o* __this, const MethodInfo* method); */

void native_UIPanel__RebuildAllDrawCalls_af1ab4(long param_1)

{
  *(undefined1 *)(param_1 + 0x170) = 1;
  return;
}



/* UIPanel$$SetDirty @ 0xaf1ac0
 * void UIPanel__SetDirty (UIPanel_o* __this, const MethodInfo* method); */

/* UIPanel$$SetDirty
   void UIPanel__SetDirty (UIPanel_o* __this, const MethodInfo* method); */

void native_UIPanel__SetDirty_af1ac0(long *param_1)

{
  int iVar1;
  uint uVar2;
  long lVar3;
  
  if ((bRam000000000134204b & 1) == 0) {
    native_sub_43273c(&Method_System_Collections_Generic_List_UIDrawCall__get_Count___12dd2c8);
    native_sub_43273c(&Method_System_Collections_Generic_List_UIDrawCall__get_Item___12dd2d0);
    bRam000000000134204b = 1;
  }
  lVar3 = param_1[0x17];
  if (lVar3 != 0) {
    iVar1 = *(int *)(lVar3 + 0x18);
    if (iVar1 < 1) {
LAB_00af1b60:
                    /* WARNING: Could not recover jumptable at 0x00af1b80. Too many branches */
                    /* WARNING: Treating indirect jump as call */
      (**(code **)(*param_1 + 0x1f8))(param_1,1,*(undefined8 *)(*param_1 + 0x200));
      return;
    }
    uVar2 = 0;
    do {
      if (*(uint *)(lVar3 + 0x18) <= uVar2) {
        native_System_ThrowHelper__ThrowArgumentOutOfRangeException_9fe0f4(0);
      }
      lVar3 = *(long *)(*(long *)(lVar3 + 0x10) + (long)(int)uVar2 * 8 + 0x20);
      if (lVar3 == 0) break;
      uVar2 = uVar2 + 1;
      *(undefined1 *)(lVar3 + 0xd8) = 1;
      if (iVar1 <= (int)uVar2) goto LAB_00af1b60;
      lVar3 = param_1[0x17];
    } while (lVar3 != 0);
  }
                    /* WARNING: Subroutine does not return */
  native_sub_432810();
}



/* UIPanel$$Awake @ 0xaf1b84
 * void UIPanel__Awake (UIPanel_o* __this, const MethodInfo* method); */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* UIPanel$$Awake
   void UIPanel__Awake (UIPanel_o* __this, const MethodInfo* method); */

void native_UIPanel__Awake_af1b84(long param_1)

{
  ulong *puVar1;
  char cVar2;
  bool bVar3;
  undefined8 uVar4;
  
  if ((bRam0000000001342711 & 1) == 0) {
    native_sub_43273c(&NGUITools_TypeInfo_12d53c8,0);
    bRam0000000001342711 = 1;
  }
  uVar4 = native_UnityEngine_Component__get_gameObject_8da66c(param_1,0);
  if (((*(byte *)(_NGUITools_TypeInfo_12d53c8 + 0x133) >> 2 & 1) != 0) &&
     (*(int *)(_NGUITools_TypeInfo_12d53c8 + 0xe0) == 0)) {
    native_sub_4327ec(_NGUITools_TypeInfo_12d53c8);
  }
  native_NGUITools__CheckForPrefabStage_72eb68(uVar4,0);
  *(undefined1 *)(param_1 + 0x88) = 0;
  uVar4 = native_UnityEngine_Component__get_gameObject_8da66c(param_1,0);
  *(undefined8 *)(param_1 + 0x40) = uVar4;
  native_sub_4326e0(param_1 + 0x40);
  uVar4 = native_UnityEngine_Component__get_transform_8da62c(param_1,0);
  *(undefined8 *)(param_1 + 0x48) = uVar4;
  if (iRam0000000001345318 != 0) {
    puVar1 = (ulong *)((param_1 + 0x48U >> 0x12 & 0x7fff) * 8 + 0x138ecd8);
    do {
      cVar2 = '\x01';
      bVar3 = (bool)ExclusiveMonitorPass(puVar1,0x10);
      if (bVar3) {
        *puVar1 = *puVar1 | 1L << (param_1 + 0x48U >> 0xc & 0x3f);
        cVar2 = ExclusiveMonitorsStatus();
      }
    } while (cVar2 != '\0');
  }
  return;
}



/* UIPanel$$FindParent @ 0xaf1b8c
 * void UIPanel__FindParent (UIPanel_o* __this, const MethodInfo* method); */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* UIPanel$$FindParent
   void UIPanel__FindParent (UIPanel_o* __this, const MethodInfo* method); */

void native_UIPanel__FindParent_af1b8c(long param_1)

{
  ulong *puVar1;
  char cVar2;
  bool bVar3;
  long lVar4;
  ulong uVar5;
  undefined8 uVar6;
  
  if ((bRam000000000134204c & 1) == 0) {
    native_sub_43273c(&Method_NGUITools_FindInParents_UIPanel____12e5760);
    native_sub_43273c(&NGUITools_TypeInfo_12d53c8);
    native_sub_43273c(&UnityEngine_Object_TypeInfo_12d54e0);
    bRam000000000134204c = 1;
  }
  lVar4 = native_UIRect__get_cachedTransform_c27c58(param_1,0);
  if (lVar4 != 0) {
    lVar4 = native_UnityEngine_Transform__get_parent_765eb0(lVar4,0);
    if (((*(byte *)(_UnityEngine_Object_TypeInfo_12d54e0 + 0x133) >> 2 & 1) != 0) &&
       (*(int *)(_UnityEngine_Object_TypeInfo_12d54e0 + 0xe0) == 0)) {
      native_sub_4327ec(_UnityEngine_Object_TypeInfo_12d54e0);
    }
    uVar5 = native_UnityEngine_Object__op_Inequality_8d76fc(lVar4,0,0);
    uVar6 = 0;
    if ((uVar5 & 1) != 0) {
      if (lVar4 == 0) goto LAB_00af1c94;
      uVar6 = native_UnityEngine_Component__get_gameObject_8da66c(lVar4,0);
      if (((*(byte *)(_NGUITools_TypeInfo_12d53c8 + 0x133) >> 2 & 1) != 0) &&
         (*(int *)(_NGUITools_TypeInfo_12d53c8 + 0xe0) == 0)) {
        native_sub_4327ec(_NGUITools_TypeInfo_12d53c8);
      }
      uVar6 = native_NGUITools__FindInParents_object__4a5c04
                        (uVar6,_Method_NGUITools_FindInParents_UIPanel____12e5760);
    }
    if (param_1 != 0) {
      *(undefined8 *)(param_1 + 0x1a0) = uVar6;
      if (iRam0000000001345318 != 0) {
        puVar1 = (ulong *)((param_1 + 0x1a0U >> 0x12 & 0x7fff) * 8 + 0x138ecd8);
        do {
          cVar2 = '\x01';
          bVar3 = (bool)ExclusiveMonitorPass(puVar1,0x10);
          if (bVar3) {
            *puVar1 = *puVar1 | 1L << (param_1 + 0x1a0U >> 0xc & 0x3f);
            cVar2 = ExclusiveMonitorsStatus();
          }
        } while (cVar2 != '\0');
      }
      return;
    }
  }
LAB_00af1c94:
                    /* WARNING: Subroutine does not return */
  native_sub_432810();
}



/* UIPanel$$ParentHasChanged @ 0xaf1c98
 * void UIPanel__ParentHasChanged (UIPanel_o* __this, const MethodInfo* method); */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* UIPanel$$ParentHasChanged
   void UIPanel__ParentHasChanged (UIPanel_o* __this, const MethodInfo* method); */

void native_UIPanel__ParentHasChanged_af1c98(long param_1)

{
  ulong *puVar1;
  char cVar2;
  bool bVar3;
  long lVar4;
  ulong uVar5;
  undefined8 uVar6;
  
  native_UIRect__ParentHasChanged_c2f1ac(param_1,0);
  if ((bRam000000000134204c & 1) == 0) {
    native_sub_43273c(&Method_NGUITools_FindInParents_UIPanel____12e5760);
    native_sub_43273c(&NGUITools_TypeInfo_12d53c8);
    native_sub_43273c(&UnityEngine_Object_TypeInfo_12d54e0);
    bRam000000000134204c = 1;
  }
  lVar4 = native_UIRect__get_cachedTransform_c27c58(param_1,0);
  if (lVar4 != 0) {
    lVar4 = native_UnityEngine_Transform__get_parent_765eb0(lVar4,0);
    if (((*(byte *)(_UnityEngine_Object_TypeInfo_12d54e0 + 0x133) >> 2 & 1) != 0) &&
       (*(int *)(_UnityEngine_Object_TypeInfo_12d54e0 + 0xe0) == 0)) {
      native_sub_4327ec(_UnityEngine_Object_TypeInfo_12d54e0);
    }
    uVar5 = native_UnityEngine_Object__op_Inequality_8d76fc(lVar4,0,0);
    uVar6 = 0;
    if ((uVar5 & 1) != 0) {
      if (lVar4 == 0) goto LAB_00af1c94;
      uVar6 = native_UnityEngine_Component__get_gameObject_8da66c(lVar4,0);
      if (((*(byte *)(_NGUITools_TypeInfo_12d53c8 + 0x133) >> 2 & 1) != 0) &&
         (*(int *)(_NGUITools_TypeInfo_12d53c8 + 0xe0) == 0)) {
        native_sub_4327ec(_NGUITools_TypeInfo_12d53c8);
      }
      uVar6 = native_NGUITools__FindInParents_object__4a5c04
                        (uVar6,_Method_NGUITools_FindInParents_UIPanel____12e5760);
    }
    if (param_1 != 0) {
      *(undefined8 *)(param_1 + 0x1a0) = uVar6;
      if (iRam0000000001345318 != 0) {
        puVar1 = (ulong *)((param_1 + 0x1a0U >> 0x12 & 0x7fff) * 8 + 0x138ecd8);
        do {
          cVar2 = '\x01';
          bVar3 = (bool)ExclusiveMonitorPass(puVar1,0x10);
          if (bVar3) {
            *puVar1 = *puVar1 | 1L << (param_1 + 0x1a0U >> 0xc & 0x3f);
            cVar2 = ExclusiveMonitorsStatus();
          }
        } while (cVar2 != '\0');
      }
      return;
    }
  }
LAB_00af1c94:
                    /* WARNING: Subroutine does not return */
  native_sub_432810();
}



/* UIPanel$$OnStart @ 0xaf1cc0
 * void UIPanel__OnStart (UIPanel_o* __this, const MethodInfo* method); */

/* UIPanel$$OnStart
   void UIPanel__OnStart (UIPanel_o* __this, const MethodInfo* method); */

void native_UIPanel__OnStart_af1cc0(long param_1)

{
  undefined4 uVar1;
  long lVar2;
  
  lVar2 = native_UIRect__get_cachedGameObject_c2d1c0((int)param_1,0);
  if (lVar2 != 0) {
    uVar1 = native_UnityEngine_GameObject__get_layer_8de608((int)lVar2,0);
    *(undefined4 *)(param_1 + 0x184) = uVar1;
    return;
  }
                    /* WARNING: Subroutine does not return */
  native_sub_432810();
}



/* UIPanel$$OnEnable @ 0xaf1cf8
 * void UIPanel__OnEnable (UIPanel_o* __this, const MethodInfo* method); */

/* UIPanel$$OnEnable
   void UIPanel__OnEnable (UIPanel_o* __this, const MethodInfo* method); */

void native_UIPanel__OnEnable_af1cf8(long *param_1)

{
  *(undefined1 *)(param_1 + 0x2e) = 1;
  *(undefined8 *)((long)param_1 + 0x17c) = 0xffffffffffffffff;
  (**(code **)(*param_1 + 0x288))(param_1,*(undefined8 *)(*param_1 + 0x290));
  native_UIRect__OnEnable_c2e32c(param_1,0);
  *(undefined4 *)((long)param_1 + 0x17c) = 0xffffffff;
  return;
}



/* UIPanel$$OnInit @ 0xaf1d4c
 * void UIPanel__OnInit (UIPanel_o* __this, const MethodInfo* method); */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* UIPanel$$OnInit
   void UIPanel__OnInit (UIPanel_o* __this, const MethodInfo* method); */

void native_UIPanel__OnInit_af1d4c(long param_1)

{
  ulong uVar1;
  undefined8 uVar2;
  long lVar3;
  long lVar4;
  long lVar5;
  
  if ((bRam000000000134204d & 1) == 0) {
    native_sub_43273c(&Method_System_Comparison_UIPanel___ctor___12d8b48);
    native_sub_43273c(&System_Comparison_UIPanel__TypeInfo_12d21e8);
    native_sub_43273c(&Method_UnityEngine_Component_GetComponent_Rigidbody____12e2ae0);
    native_sub_43273c(&Method_UnityEngine_Component_GetComponent_UICamera____12e2bb0);
    native_sub_43273c(&Method_UnityEngine_GameObject_AddComponent_Rigidbody____12e4840);
    native_sub_43273c(&Method_System_Collections_Generic_List_UIPanel__Add___12dd340);
    native_sub_43273c(&Method_System_Collections_Generic_List_UIPanel__Contains___12dd348);
    native_sub_43273c(&Method_System_Collections_Generic_List_UIPanel__Sort___12dd360);
    native_sub_43273c(&UnityEngine_Object_TypeInfo_12d54e0);
    native_sub_43273c(&Method_UIPanel_CompareFunc___12e7848);
    native_sub_43273c(&UIPanel_TypeInfo_12d6478);
    bRam000000000134204d = 1;
  }
  if (((*(byte *)(_UIPanel_TypeInfo_12d6478 + 0x133) >> 2 & 1) != 0) &&
     (*(int *)(_UIPanel_TypeInfo_12d6478 + 0xe0) == 0)) {
    native_sub_4327ec();
  }
  if (**(long **)(_UIPanel_TypeInfo_12d6478 + 0xb8) == 0) goto LAB_00af207c;
  uVar1 = native_System_Collections_Generic_List_BE2_UI_SelectionPanel___Contains_d40ec8
                    (**(long **)(_UIPanel_TypeInfo_12d6478 + 0xb8),param_1,
                     _Method_System_Collections_Generic_List_UIPanel__Contains___12dd348);
  if ((uVar1 & 1) != 0) {
    return;
  }
  native_UIRect__OnInit_c2e388(param_1,0);
  native_UIPanel__FindParent_af1b8c(param_1);
  uVar2 = native_UnityEngine_Component__GetComponent_ActiveAnimation__49daec
                    (param_1,_Method_UnityEngine_Component_GetComponent_Rigidbody____12e2ae0);
  if (((*(byte *)(_UnityEngine_Object_TypeInfo_12d54e0 + 0x133) >> 2 & 1) != 0) &&
     (*(int *)(_UnityEngine_Object_TypeInfo_12d54e0 + 0xe0) == 0)) {
    native_sub_4327ec(_UnityEngine_Object_TypeInfo_12d54e0);
  }
  uVar1 = native_UnityEngine_Object__op_Equality_8e9a3c(uVar2,0,0);
  if ((uVar1 & 1) != 0) {
    uVar2 = *(undefined8 *)(param_1 + 0x1a0);
    if (((*(byte *)(_UnityEngine_Object_TypeInfo_12d54e0 + 0x133) >> 2 & 1) != 0) &&
       (*(int *)(_UnityEngine_Object_TypeInfo_12d54e0 + 0xe0) == 0)) {
      native_sub_4327ec();
    }
    uVar1 = native_UnityEngine_Object__op_Equality_8e9a3c(uVar2,0,0);
    if ((uVar1 & 1) != 0) {
      uVar2 = native_UIRect__get_anchorCamera_c26f1c(param_1,0);
      if (((*(byte *)(_UnityEngine_Object_TypeInfo_12d54e0 + 0x133) >> 2 & 1) != 0) &&
         (*(int *)(_UnityEngine_Object_TypeInfo_12d54e0 + 0xe0) == 0)) {
        native_sub_4327ec(_UnityEngine_Object_TypeInfo_12d54e0);
      }
      uVar1 = native_UnityEngine_Object__op_Inequality_8d76fc(uVar2,0,0);
      lVar5 = 0;
      if ((uVar1 & 1) != 0) {
        if (*(long *)(param_1 + 0x80) == 0) goto LAB_00af207c;
        lVar5 = native_UnityEngine_Component__GetComponent_ActiveAnimation__49daec
                          (*(long *)(param_1 + 0x80),
                           _Method_UnityEngine_Component_GetComponent_UICamera____12e2bb0);
      }
      if (((*(byte *)(_UnityEngine_Object_TypeInfo_12d54e0 + 0x133) >> 2 & 1) != 0) &&
         (*(int *)(_UnityEngine_Object_TypeInfo_12d54e0 + 0xe0) == 0)) {
        native_sub_4327ec();
      }
      uVar1 = native_UnityEngine_Object__op_Inequality_8d76fc(lVar5,0,0);
      if ((uVar1 & 1) != 0) {
        if (lVar5 == 0) goto LAB_00af207c;
        if (*(uint *)(lVar5 + 0x18) < 2) {
          lVar5 = native_UnityEngine_Component__get_gameObject_8da66c(param_1,0);
          if ((lVar5 == 0) ||
             (lVar5 = native_UnityEngine_GameObject__AddComponent_ActiveAnimation__4a2118
                                (lVar5,
                                 _Method_UnityEngine_GameObject_AddComponent_Rigidbody____12e4840),
             lVar5 == 0)) goto LAB_00af207c;
          native_UnityEngine_Rigidbody__set_isKinematic_dbd0e4(lVar5,1,0);
          native_UnityEngine_Rigidbody__set_useGravity_dbd094(lVar5,0,0);
        }
      }
    }
  }
  *(undefined1 *)(param_1 + 0x170) = 1;
  *(undefined8 *)(param_1 + 0x17c) = 0xffffffffffffffff;
  if (((*(byte *)(_UIPanel_TypeInfo_12d6478 + 0x133) >> 2 & 1) != 0) &&
     (*(int *)(_UIPanel_TypeInfo_12d6478 + 0xe0) == 0)) {
    native_sub_4327ec();
  }
  if (**(long **)(_UIPanel_TypeInfo_12d6478 + 0xb8) != 0) {
    native_System_Collections_Generic_List_int_____Add_d40c00
              (**(long **)(_UIPanel_TypeInfo_12d6478 + 0xb8),param_1,
               _Method_System_Collections_Generic_List_UIPanel__Add___12dd340);
    lVar4 = **(long **)(_UIPanel_TypeInfo_12d6478 + 0xb8);
    lVar3 = native_sub_432808(_System_Comparison_UIPanel__TypeInfo_12d21e8);
    native_System_Comparison_ABSSequentiable____ctor_bbdf08
              (lVar3,0,_Method_UIPanel_CompareFunc___12e7848,
               _Method_System_Comparison_UIPanel___ctor___12d8b48);
    lVar5 = _Method_System_Collections_Generic_List_UIPanel__Sort___12dd360;
    if (lVar4 != 0) {
      if (lVar3 == 0) {
        native_System_ThrowHelper__ThrowArgumentNullException_9fe014(8);
      }
      if (0 < *(int *)(lVar4 + 0x18)) {
                    /* WARNING: Could not recover jumptable at 0x00d426c8. Too many branches */
                    /* WARNING: Treating indirect jump as call */
        (*(code *)**(undefined8 **)(*(long *)(*(long *)(lVar5 + 0x18) + 0xc0) + 0x118))
                  (*(undefined8 *)(lVar4 + 0x10),0,*(int *)(lVar4 + 0x18),lVar3);
        return;
      }
      return;
    }
  }
LAB_00af207c:
                    /* WARNING: Subroutine does not return */
  native_sub_432810();
}



/* UIPanel$$OnDisable @ 0xaf2080
 * void UIPanel__OnDisable (UIPanel_o* __this, const MethodInfo* method); */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* UIPanel$$OnDisable
   void UIPanel__OnDisable (UIPanel_o* __this, const MethodInfo* method); */

void native_UIPanel__OnDisable_af2080(long param_1)

{
  int iVar1;
  ulong uVar2;
  long lVar3;
  undefined8 uVar4;
  long *plVar5;
  ulong uVar6;
  
  if ((bRam000000000134204e & 1) == 0) {
    native_sub_43273c(&Method_System_Collections_Generic_List_UIDrawCall__Clear___12dd2b8);
    native_sub_43273c(&Method_System_Collections_Generic_List_UIPanel__Remove___12dd358);
    native_sub_43273c(&Method_System_Collections_Generic_List_UIDrawCall__get_Count___12dd2c8);
    native_sub_43273c(&Method_System_Collections_Generic_List_UIPanel__get_Count___12dd368);
    native_sub_43273c(&Method_System_Collections_Generic_List_UIDrawCall__get_Item___12dd2d0);
    native_sub_43273c(&UnityEngine_Object_TypeInfo_12d54e0);
    native_sub_43273c(&UIDrawCall_TypeInfo_12d6438);
    native_sub_43273c(&UIPanel_TypeInfo_12d6478);
    bRam000000000134204e = 1;
  }
  lVar3 = *(long *)(param_1 + 0xb8);
  if (lVar3 != 0) {
    iVar1 = *(int *)(lVar3 + 0x18);
    uVar6 = 0;
    do {
      if ((long)iVar1 <= (long)uVar6) {
        native_System_Collections_Generic_List_Action___Clear_d40e80
                  (lVar3,_Method_System_Collections_Generic_List_UIDrawCall__Clear___12dd2b8);
        if (((*(byte *)(_UIPanel_TypeInfo_12d6478 + 0x133) >> 2 & 1) != 0) &&
           (*(int *)(_UIPanel_TypeInfo_12d6478 + 0xe0) == 0)) {
          native_sub_4327ec();
        }
        if (**(long **)(_UIPanel_TypeInfo_12d6478 + 0xb8) != 0) {
          native_System_Collections_Generic_List_BMSymbol___Remove_d41f3c
                    (**(long **)(_UIPanel_TypeInfo_12d6478 + 0xb8),param_1,
                     _Method_System_Collections_Generic_List_UIPanel__Remove___12dd358);
          *(undefined8 *)(param_1 + 0x17c) = 0xffffffffffffffff;
          if (**(long **)(_UIPanel_TypeInfo_12d6478 + 0xb8) != 0) {
            if (*(int *)(**(long **)(_UIPanel_TypeInfo_12d6478 + 0xb8) + 0x18) == 0) {
              if (((*(byte *)(_UIDrawCall_TypeInfo_12d6438 + 0x133) >> 2 & 1) != 0) &&
                 (*(int *)(_UIDrawCall_TypeInfo_12d6438 + 0xe0) == 0)) {
                native_sub_4327ec();
              }
              native_UIDrawCall__ReleaseAll_9e8e70(0);
              if (((*(byte *)(_UIPanel_TypeInfo_12d6478 + 0x133) >> 2 & 1) != 0) &&
                 (*(int *)(_UIPanel_TypeInfo_12d6478 + 0xe0) == 0)) {
                native_sub_4327ec();
              }
              *(undefined4 *)(*(long *)(_UIPanel_TypeInfo_12d6478 + 0xb8) + 0x18) = 0xffffffff;
            }
            if ((bRam0000000001342710 & 1) == 0) {
              native_sub_43273c(&Method_BetterList_UIRect__Remove___12d8a10,0);
              native_sub_43273c(&UnityEngine_Object_TypeInfo_12d54e0);
              bRam0000000001342710 = 1;
            }
            plVar5 = (long *)(param_1 + 0x70);
            lVar3 = *plVar5;
            if (((*(byte *)(_UnityEngine_Object_TypeInfo_12d54e0 + 0x133) >> 2 & 1) != 0) &&
               (*(int *)(_UnityEngine_Object_TypeInfo_12d54e0 + 0xe0) == 0)) {
              native_sub_4327ec();
            }
            uVar6 = native_UnityEngine_Object__op_Implicit_8e1b98(lVar3,0);
            if ((uVar6 & 1) != 0) {
              if ((*plVar5 == 0) || (lVar3 = *(long *)(*plVar5 + 0x50), lVar3 == 0)) {
                    /* WARNING: Subroutine does not return */
                native_sub_432810();
              }
              native_BetterList_object___Remove_ba2804
                        (lVar3,param_1,_Method_BetterList_UIRect__Remove___12d8a10);
            }
            *(undefined8 *)(param_1 + 0x70) = 0;
            native_sub_4326e0(plVar5,0);
            *(undefined8 *)(param_1 + 0x68) = 0;
            native_sub_4326e0((undefined8 *)(param_1 + 0x68),0);
            *(undefined1 *)(param_1 + 0x78) = 0;
            *(undefined1 *)(param_1 + 0x59) = 0;
            return;
          }
        }
        break;
      }
      if (*(uint *)(lVar3 + 0x18) <= uVar6) {
        native_System_ThrowHelper__ThrowArgumentOutOfRangeException_9fe0f4(0);
      }
      uVar4 = *(undefined8 *)(*(long *)(lVar3 + 0x10) + uVar6 * 8 + 0x20);
      if (((*(byte *)(_UnityEngine_Object_TypeInfo_12d54e0 + 0x133) >> 2 & 1) != 0) &&
         (*(int *)(_UnityEngine_Object_TypeInfo_12d54e0 + 0xe0) == 0)) {
        native_sub_4327ec();
      }
      uVar2 = native_UnityEngine_Object__op_Inequality_8d76fc(uVar4,0,0);
      if ((uVar2 & 1) != 0) {
        if (((*(byte *)(_UIDrawCall_TypeInfo_12d6438 + 0x133) >> 2 & 1) != 0) &&
           (*(int *)(_UIDrawCall_TypeInfo_12d6438 + 0xe0) == 0)) {
          native_sub_4327ec();
        }
        native_UIDrawCall__Destroy_9e91c0(uVar4,0);
      }
      lVar3 = *(long *)(param_1 + 0xb8);
      uVar6 = uVar6 + 1;
    } while (lVar3 != 0);
  }
                    /* WARNING: Subroutine does not return */
  native_sub_432810();
}



/* UIPanel$$UpdateTransformMatrix @ 0xaf16b4
 * void UIPanel__UpdateTransformMatrix (UIPanel_o* __this, const MethodInfo* method); */

/* UIPanel$$UpdateTransformMatrix
   void UIPanel__UpdateTransformMatrix (UIPanel_o* __this, const MethodInfo* method); */

void native_UIPanel__UpdateTransformMatrix_af16b4(long param_1)

{
  int iVar1;
  long lVar2;
  float fVar3;
  float fVar4;
  float fVar5;
  float fVar6;
  undefined8 uStack_60;
  undefined8 uStack_58;
  undefined8 uStack_50;
  undefined8 uStack_48;
  undefined8 uStack_40;
  undefined8 uStack_38;
  undefined8 uStack_30;
  undefined8 uStack_28;
  
  iVar1 = native_UnityEngine_Time__get_frameCount_770964(0);
  if ((*(char *)(param_1 + 0x1a8) != '\0') || (*(int *)(param_1 + 0x17c) != iVar1)) {
    *(int *)(param_1 + 0x17c) = iVar1;
    lVar2 = native_UIRect__get_cachedTransform_c27c58(param_1,0);
    if (lVar2 == 0) {
                    /* WARNING: Subroutine does not return */
      native_sub_432810();
    }
    native_UnityEngine_Transform__get_worldToLocalMatrix_772138(&uStack_60,lVar2,0);
    *(undefined8 *)(param_1 + 0xe8) = uStack_38;
    *(undefined8 *)(param_1 + 0xe0) = uStack_40;
    *(undefined8 *)(param_1 + 0xf8) = uStack_28;
    *(undefined8 *)(param_1 + 0xf0) = uStack_30;
    *(undefined8 *)(param_1 + 200) = uStack_58;
    *(undefined8 *)(param_1 + 0xc0) = uStack_60;
    *(undefined8 *)(param_1 + 0xd8) = uStack_48;
    *(undefined8 *)(param_1 + 0xd0) = uStack_50;
    fVar3 = (float)native_UIPanel__GetViewSize_aefab4(param_1);
    fVar4 = (float)uStack_30 * 0.5;
    fVar5 = *(float *)(param_1 + 0x174) + *(float *)(param_1 + 0x144);
    fVar6 = *(float *)(param_1 + 0x178) + *(float *)(param_1 + 0x148);
    *(float *)(param_1 + 0x188) = fVar5 - fVar3 * 0.5;
    *(float *)(param_1 + 0x18c) = fVar6 - fVar4;
    *(float *)(param_1 + 400) = fVar3 * 0.5 + fVar5;
    *(float *)(param_1 + 0x194) = fVar4 + fVar6;
  }
  return;
}



/* UIPanel$$OnAnchor @ 0xaf2294
 * void UIPanel__OnAnchor (UIPanel_o* __this, const MethodInfo* method); */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* UIPanel$$OnAnchor
   void UIPanel__OnAnchor (UIPanel_o* __this, const MethodInfo* method); */

void native_UIPanel__OnAnchor_af2294(undefined1 param_1 [16],float param_2,long param_3)

{
  long lVar1;
  undefined8 uVar2;
  ulong uVar3;
  undefined8 uVar4;
  undefined8 uVar5;
  float fVar6;
  float fVar7;
  float fVar8;
  float fVar9;
  float fVar10;
  float fVar11;
  float fVar12;
  int iVar13;
  undefined4 uVar14;
  int iVar15;
  undefined4 uVar16;
  undefined4 uVar17;
  int iVar18;
  int iVar19;
  undefined8 uStack_90;
  undefined8 uStack_88;
  
  if ((bRam000000000134204f & 1) == 0) {
    native_sub_43273c(&NGUIMath_TypeInfo_12d53b8);
    native_sub_43273c(&UnityEngine_Object_TypeInfo_12d54e0);
    bRam000000000134204f = 1;
  }
  if (*(int *)(param_3 + 0x140) == 0) {
    return;
  }
  lVar1 = native_UIRect__get_cachedTransform_c27c58(param_3,0);
  if (lVar1 == 0) goto LAB_00af2a58;
  uVar2 = native_UnityEngine_Transform__get_parent_765eb0(lVar1,0);
  fVar6 = (float)native_UIPanel__GetViewSize_aefab4(param_3);
  fVar12 = param_2;
  fVar7 = (float)native_UnityEngine_Transform__get_localPosition_7717f4(lVar1,0);
  if ((*(long *)(param_3 + 0x18) == 0) || (*(long *)(param_3 + 0x28) == 0)) goto LAB_00af2a58;
  uVar4 = *(undefined8 *)(*(long *)(param_3 + 0x18) + 0x10);
  uVar5 = *(undefined8 *)(*(long *)(param_3 + 0x28) + 0x10);
  fVar10 = fVar12;
  if (((*(byte *)(_UnityEngine_Object_TypeInfo_12d54e0 + 0x133) >> 2 & 1) != 0) &&
     (*(int *)(_UnityEngine_Object_TypeInfo_12d54e0 + 0xe0) == 0)) {
    native_sub_4327ec();
  }
  uVar3 = native_UnityEngine_Object__op_Equality_8e9a3c(uVar4,uVar5,0);
  if ((uVar3 & 1) == 0) {
LAB_00af2558:
    if (*(long *)(param_3 + 0x18) == 0) goto LAB_00af2a58;
    uVar4 = *(undefined8 *)(*(long *)(param_3 + 0x18) + 0x10);
    if (((*(byte *)(_UnityEngine_Object_TypeInfo_12d54e0 + 0x133) >> 2 & 1) != 0) &&
       (*(int *)(_UnityEngine_Object_TypeInfo_12d54e0 + 0xe0) == 0)) {
      native_sub_4327ec();
    }
    uVar3 = native_UnityEngine_Object__op_Implicit_8e1b98(uVar4,0);
    if ((uVar3 & 1) == 0) {
      fVar8 = *(float *)(param_3 + 0x144);
      fVar10 = fVar6 * -0.5;
    }
    else {
      if (*(long *)(param_3 + 0x18) == 0) goto LAB_00af2a58;
      lVar1 = native_UIRect_AnchorPoint__GetSides_559348(*(long *)(param_3 + 0x18),uVar2,0);
      if (lVar1 == 0) {
        fVar8 = (float)native_UIRect__GetLocalPos_c2df98
                                 (param_3,*(undefined8 *)(param_3 + 0x18),uVar2,0);
      }
      else {
        if ((*(uint *)(lVar1 + 0x18) == 0) || (*(uint *)(lVar1 + 0x18) < 3)) goto LAB_00af2a5c;
        if (*(long *)(param_3 + 0x18) == 0) goto LAB_00af2a58;
        uVar17 = *(undefined4 *)(lVar1 + 0x20);
        uVar14 = *(undefined4 *)(lVar1 + 0x38);
        uVar16 = *(undefined4 *)(*(long *)(param_3 + 0x18) + 0x18);
        if (((*(byte *)(_NGUIMath_TypeInfo_12d53b8 + 0x133) >> 2 & 1) != 0) &&
           (*(int *)(_NGUIMath_TypeInfo_12d53b8 + 0xe0) == 0)) {
          native_sub_4327ec(_NGUIMath_TypeInfo_12d53b8);
        }
        fVar8 = (float)native_NGUIMath__Lerp_804dcc(uVar17,uVar14,uVar16,0);
      }
      if (*(long *)(param_3 + 0x18) == 0) goto LAB_00af2a58;
      fVar10 = (float)*(int *)(*(long *)(param_3 + 0x18) + 0x1c);
    }
    fVar8 = fVar8 + fVar10;
    if (*(long *)(param_3 + 0x20) == 0) goto LAB_00af2a58;
    uVar4 = *(undefined8 *)(*(long *)(param_3 + 0x20) + 0x10);
    if (((*(byte *)(_UnityEngine_Object_TypeInfo_12d54e0 + 0x133) >> 2 & 1) != 0) &&
       (*(int *)(_UnityEngine_Object_TypeInfo_12d54e0 + 0xe0) == 0)) {
      native_sub_4327ec();
    }
    uVar3 = native_UnityEngine_Object__op_Implicit_8e1b98(uVar4,0);
    if ((uVar3 & 1) == 0) {
      fVar10 = fVar6 * 0.5;
      fVar6 = fVar10 + *(float *)(param_3 + 0x144);
    }
    else {
      if (*(long *)(param_3 + 0x20) == 0) goto LAB_00af2a58;
      lVar1 = native_UIRect_AnchorPoint__GetSides_559348(*(long *)(param_3 + 0x20),uVar2,0);
      if (lVar1 == 0) {
        fVar6 = (float)native_UIRect__GetLocalPos_c2df98
                                 (param_3,*(undefined8 *)(param_3 + 0x20),uVar2,0);
      }
      else {
        if ((*(uint *)(lVar1 + 0x18) == 0) || (*(uint *)(lVar1 + 0x18) < 3)) goto LAB_00af2a5c;
        if (*(long *)(param_3 + 0x20) == 0) goto LAB_00af2a58;
        uVar17 = *(undefined4 *)(lVar1 + 0x20);
        uVar14 = *(undefined4 *)(lVar1 + 0x38);
        uVar16 = *(undefined4 *)(*(long *)(param_3 + 0x20) + 0x18);
        if (((*(byte *)(_NGUIMath_TypeInfo_12d53b8 + 0x133) >> 2 & 1) != 0) &&
           (*(int *)(_NGUIMath_TypeInfo_12d53b8 + 0xe0) == 0)) {
          native_sub_4327ec(_NGUIMath_TypeInfo_12d53b8);
        }
        fVar6 = (float)native_NGUIMath__Lerp_804dcc(uVar17,uVar14,uVar16,0);
      }
      if (*(long *)(param_3 + 0x20) == 0) goto LAB_00af2a58;
      fVar10 = (float)*(int *)(*(long *)(param_3 + 0x20) + 0x1c);
      fVar6 = fVar6 + fVar10;
    }
    if (*(long *)(param_3 + 0x28) == 0) goto LAB_00af2a58;
    uVar4 = *(undefined8 *)(*(long *)(param_3 + 0x28) + 0x10);
    if (((*(byte *)(_UnityEngine_Object_TypeInfo_12d54e0 + 0x133) >> 2 & 1) != 0) &&
       (*(int *)(_UnityEngine_Object_TypeInfo_12d54e0 + 0xe0) == 0)) {
      native_sub_4327ec();
    }
    uVar3 = native_UnityEngine_Object__op_Implicit_8e1b98(uVar4,0);
    if ((uVar3 & 1) == 0) {
      fVar9 = *(float *)(param_3 + 0x148);
      fVar10 = param_2 * -0.5;
LAB_00af27e8:
      fVar9 = fVar9 + fVar10;
    }
    else {
      if (*(long *)(param_3 + 0x28) == 0) goto LAB_00af2a58;
      lVar1 = native_UIRect_AnchorPoint__GetSides_559348(*(long *)(param_3 + 0x28),uVar2,0);
      if (lVar1 != 0) {
        if (*(uint *)(lVar1 + 0x18) < 4) goto LAB_00af2a5c;
        if (*(long *)(param_3 + 0x28) == 0) goto LAB_00af2a58;
        uVar17 = *(undefined4 *)(lVar1 + 0x48);
        uVar14 = *(undefined4 *)(lVar1 + 0x30);
        uVar16 = *(undefined4 *)(*(long *)(param_3 + 0x28) + 0x18);
        if (((*(byte *)(_NGUIMath_TypeInfo_12d53b8 + 0x133) >> 2 & 1) != 0) &&
           (*(int *)(_NGUIMath_TypeInfo_12d53b8 + 0xe0) == 0)) {
          native_sub_4327ec(_NGUIMath_TypeInfo_12d53b8);
        }
        fVar9 = (float)native_NGUIMath__Lerp_804dcc(uVar17,uVar14,uVar16,0);
        if (*(long *)(param_3 + 0x28) == 0) goto LAB_00af2a58;
        fVar10 = (float)*(int *)(*(long *)(param_3 + 0x28) + 0x1c);
        goto LAB_00af27e8;
      }
      native_UIRect__GetLocalPos_c2df98(param_3,*(undefined8 *)(param_3 + 0x28),uVar2,0);
      if (*(long *)(param_3 + 0x28) == 0) goto LAB_00af2a58;
      fVar9 = fVar10 + (float)*(int *)(*(long *)(param_3 + 0x28) + 0x1c);
    }
    if (*(long *)(param_3 + 0x30) == 0) goto LAB_00af2a58;
    uVar4 = *(undefined8 *)(*(long *)(param_3 + 0x30) + 0x10);
    if (((*(byte *)(_UnityEngine_Object_TypeInfo_12d54e0 + 0x133) >> 2 & 1) != 0) &&
       (*(int *)(_UnityEngine_Object_TypeInfo_12d54e0 + 0xe0) == 0)) {
      native_sub_4327ec();
    }
    uVar3 = native_UnityEngine_Object__op_Implicit_8e1b98(uVar4,0);
    if ((uVar3 & 1) == 0) {
      fVar11 = *(float *)(param_3 + 0x148);
      fVar10 = param_2 * 0.5;
    }
    else {
      if (*(long *)(param_3 + 0x30) == 0) goto LAB_00af2a58;
      lVar1 = native_UIRect_AnchorPoint__GetSides_559348(*(long *)(param_3 + 0x30),uVar2,0);
      if (lVar1 != 0) {
        if (*(uint *)(lVar1 + 0x18) < 4) {
LAB_00af2a5c:
          uVar2 = native_sub_43283c();
                    /* WARNING: Subroutine does not return */
          native_sub_4327dc(uVar2,0);
        }
        if (*(long *)(param_3 + 0x30) == 0) {
LAB_00af2a58:
                    /* WARNING: Subroutine does not return */
          native_sub_432810();
        }
        uVar17 = *(undefined4 *)(lVar1 + 0x48);
        uVar14 = *(undefined4 *)(lVar1 + 0x30);
        uVar16 = *(undefined4 *)(*(long *)(param_3 + 0x30) + 0x18);
        if (((*(byte *)(_NGUIMath_TypeInfo_12d53b8 + 0x133) >> 2 & 1) != 0) &&
           (*(int *)(_NGUIMath_TypeInfo_12d53b8 + 0xe0) == 0)) {
          native_sub_4327ec(_NGUIMath_TypeInfo_12d53b8);
        }
        fVar10 = (float)native_NGUIMath__Lerp_804dcc(uVar17,uVar14,uVar16,0);
        if (*(long *)(param_3 + 0x30) == 0) goto LAB_00af2a58;
        iVar13 = *(int *)(*(long *)(param_3 + 0x30) + 0x1c);
        goto LAB_00af28a0;
      }
      native_UIRect__GetLocalPos_c2df98(param_3,*(undefined8 *)(param_3 + 0x30),uVar2,0);
      if (*(long *)(param_3 + 0x30) == 0) goto LAB_00af2a58;
      fVar11 = (float)*(int *)(*(long *)(param_3 + 0x30) + 0x1c);
    }
    fVar10 = fVar10 + fVar11;
  }
  else {
    if ((*(long *)(param_3 + 0x18) == 0) || (*(long *)(param_3 + 0x20) == 0)) goto LAB_00af2a58;
    uVar4 = *(undefined8 *)(*(long *)(param_3 + 0x18) + 0x10);
    uVar5 = *(undefined8 *)(*(long *)(param_3 + 0x20) + 0x10);
    if (((*(byte *)(_UnityEngine_Object_TypeInfo_12d54e0 + 0x133) >> 2 & 1) != 0) &&
       (*(int *)(_UnityEngine_Object_TypeInfo_12d54e0 + 0xe0) == 0)) {
      native_sub_4327ec();
    }
    uVar3 = native_UnityEngine_Object__op_Equality_8e9a3c(uVar4,uVar5,0);
    if ((uVar3 & 1) == 0) goto LAB_00af2558;
    if ((*(long *)(param_3 + 0x18) == 0) || (*(long *)(param_3 + 0x30) == 0)) goto LAB_00af2a58;
    uVar4 = *(undefined8 *)(*(long *)(param_3 + 0x18) + 0x10);
    uVar5 = *(undefined8 *)(*(long *)(param_3 + 0x30) + 0x10);
    if (((*(byte *)(_UnityEngine_Object_TypeInfo_12d54e0 + 0x133) >> 2 & 1) != 0) &&
       (*(int *)(_UnityEngine_Object_TypeInfo_12d54e0 + 0xe0) == 0)) {
      native_sub_4327ec();
    }
    uVar3 = native_UnityEngine_Object__op_Equality_8e9a3c(uVar4,uVar5,0);
    if ((uVar3 & 1) == 0) goto LAB_00af2558;
    if (*(long *)(param_3 + 0x18) == 0) goto LAB_00af2a58;
    lVar1 = native_UIRect_AnchorPoint__GetSides_559348(*(long *)(param_3 + 0x18),uVar2,0);
    if (lVar1 == 0) {
      fVar6 = (float)native_UIRect__GetLocalPos_c2df98
                               (param_3,*(undefined8 *)(param_3 + 0x18),uVar2,0);
      if ((((*(long *)(param_3 + 0x18) == 0) || (*(long *)(param_3 + 0x28) == 0)) ||
          (*(long *)(param_3 + 0x20) == 0)) || (*(long *)(param_3 + 0x30) == 0)) goto LAB_00af2a58;
      fVar8 = fVar6 + (float)*(int *)(*(long *)(param_3 + 0x18) + 0x1c);
      fVar9 = fVar10 + (float)*(int *)(*(long *)(param_3 + 0x28) + 0x1c);
      fVar6 = fVar6 + (float)*(int *)(*(long *)(param_3 + 0x20) + 0x1c);
      fVar10 = fVar10 + (float)*(int *)(*(long *)(param_3 + 0x30) + 0x1c);
      goto LAB_00af290c;
    }
    if ((*(uint *)(lVar1 + 0x18) == 0) || (*(uint *)(lVar1 + 0x18) < 3)) goto LAB_00af2a5c;
    if (*(long *)(param_3 + 0x18) == 0) goto LAB_00af2a58;
    uVar17 = *(undefined4 *)(lVar1 + 0x20);
    uVar14 = *(undefined4 *)(lVar1 + 0x38);
    uVar16 = *(undefined4 *)(*(long *)(param_3 + 0x18) + 0x18);
    if (((*(byte *)(_NGUIMath_TypeInfo_12d53b8 + 0x133) >> 2 & 1) != 0) &&
       (*(int *)(_NGUIMath_TypeInfo_12d53b8 + 0xe0) == 0)) {
      native_sub_4327ec();
    }
    fVar8 = (float)native_NGUIMath__Lerp_804dcc(uVar17,uVar14,uVar16,0);
    if (*(long *)(param_3 + 0x18) == 0) goto LAB_00af2a58;
    if ((*(uint *)(lVar1 + 0x18) == 0) || (*(uint *)(lVar1 + 0x18) < 3)) goto LAB_00af2a5c;
    if (*(long *)(param_3 + 0x20) == 0) goto LAB_00af2a58;
    iVar18 = *(int *)(*(long *)(param_3 + 0x18) + 0x1c);
    fVar6 = (float)native_NGUIMath__Lerp_804dcc
                             (*(undefined4 *)(lVar1 + 0x20),*(undefined4 *)(lVar1 + 0x38),
                              *(undefined4 *)(*(long *)(param_3 + 0x20) + 0x18),0);
    if (*(long *)(param_3 + 0x20) == 0) goto LAB_00af2a58;
    if (*(uint *)(lVar1 + 0x18) < 4) goto LAB_00af2a5c;
    if (*(long *)(param_3 + 0x28) == 0) goto LAB_00af2a58;
    iVar19 = *(int *)(*(long *)(param_3 + 0x20) + 0x1c);
    fVar9 = (float)native_NGUIMath__Lerp_804dcc
                             (*(undefined4 *)(lVar1 + 0x48),*(undefined4 *)(lVar1 + 0x30),
                              *(undefined4 *)(*(long *)(param_3 + 0x28) + 0x18),0);
    if (*(long *)(param_3 + 0x28) == 0) goto LAB_00af2a58;
    if (*(uint *)(lVar1 + 0x18) < 4) goto LAB_00af2a5c;
    if (*(long *)(param_3 + 0x30) == 0) goto LAB_00af2a58;
    iVar15 = *(int *)(*(long *)(param_3 + 0x28) + 0x1c);
    fVar10 = (float)native_NGUIMath__Lerp_804dcc
                              (*(undefined4 *)(lVar1 + 0x48),*(undefined4 *)(lVar1 + 0x30),
                               *(undefined4 *)(*(long *)(param_3 + 0x30) + 0x18),0);
    if (*(long *)(param_3 + 0x30) == 0) goto LAB_00af2a58;
    iVar13 = *(int *)(*(long *)(param_3 + 0x30) + 0x1c);
    fVar8 = fVar8 + (float)iVar18;
    fVar9 = fVar9 + (float)iVar15;
    fVar6 = fVar6 + (float)iVar19;
LAB_00af28a0:
    fVar10 = fVar10 + (float)iVar13;
  }
LAB_00af290c:
  fVar7 = fVar7 + *(float *)(param_3 + 0x174);
  fVar12 = fVar12 + *(float *)(param_3 + 0x178);
  fVar8 = fVar8 - fVar7;
  fVar6 = fVar6 - fVar7;
  fVar9 = fVar9 - fVar12;
  fVar10 = fVar10 - fVar12;
  uVar2 = native_UnityEngine_Mathf__Lerp_8e5224(fVar8,fVar6,0x3f000000,0);
  uVar4 = native_UnityEngine_Mathf__Lerp_8e5224(fVar9,fVar10,0x3f000000,0);
  fVar6 = fVar6 - fVar8;
  fVar10 = fVar10 - fVar9;
  fVar12 = (float)native_UnityEngine_Mathf__Max_8d9f90
                            (0x40000000,*(undefined4 *)(param_3 + 0x154),0);
  fVar7 = (float)native_UnityEngine_Mathf__Max_8d9f90(0x40000000,*(undefined4 *)(param_3 + 0x158),0)
  ;
  if (fVar12 <= fVar6) {
    fVar12 = fVar6;
  }
  if (fVar7 <= fVar10) {
    fVar7 = fVar10;
  }
  uStack_90 = 0;
  uStack_88 = 0;
  native_UnityEngine_Vector4___ctor_776f24(uVar2,uVar4,fVar12,fVar7,&uStack_90,0);
  native_UIPanel__set_baseClipRegion_af025c
            (uStack_90 & 0xffffffff,uStack_90._4_4_,uStack_88 & 0xffffffff,uStack_88._4_4_,param_3);
  return;
}



/* UIPanel$$LateUpdate @ 0xaf2a68
 * void UIPanel__LateUpdate (UIPanel_o* __this, const MethodInfo* method); */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* UIPanel$$LateUpdate
   void UIPanel__LateUpdate (UIPanel_o* __this, const MethodInfo* method); */

void native_UIPanel__LateUpdate_af2a68(void)

{
  int iVar1;
  int iVar2;
  bool bVar3;
  int iVar4;
  undefined4 uVar5;
  ulong uVar6;
  long lVar7;
  int iVar8;
  uint uVar9;
  
  if ((bRam0000000001342050 & 1) == 0) {
    native_sub_43273c(&UnityEngine_Debug_TypeInfo_12d4338);
    native_sub_43273c(&Method_System_Collections_Generic_List_UIPanel__Remove___12dd358);
    native_sub_43273c(&Method_System_Collections_Generic_List_UIDrawCall__get_Count___12dd2c8);
    native_sub_43273c(&Method_System_Collections_Generic_List_UIPanel__get_Count___12dd368);
    native_sub_43273c(&Method_System_Collections_Generic_List_UIPanel__get_Item___12dd370);
    native_sub_43273c(&UnityEngine_Object_TypeInfo_12d54e0);
    native_sub_43273c(&UIPanel_TypeInfo_12d6478);
    native_sub_43273c(&StringLiteral_Improperly_destroyed_panel_detected__removing_12ee780);
    bRam0000000001342050 = 1;
  }
  if (((*(byte *)(_UIPanel_TypeInfo_12d6478 + 0x133) >> 2 & 1) != 0) &&
     (*(int *)(_UIPanel_TypeInfo_12d6478 + 0xe0) == 0)) {
    native_sub_4327ec();
  }
  iVar8 = *(int *)(*(long *)(_UIPanel_TypeInfo_12d6478 + 0xb8) + 0x18);
  iVar4 = native_UnityEngine_Time__get_frameCount_770964(0);
  if (iVar8 == iVar4) {
    return;
  }
  uVar5 = native_UnityEngine_Time__get_frameCount_770964(0);
  if (((*(byte *)(_UIPanel_TypeInfo_12d6478 + 0x133) >> 2 & 1) != 0) &&
     (*(int *)(_UIPanel_TypeInfo_12d6478 + 0xe0) == 0)) {
    native_sub_4327ec(_UIPanel_TypeInfo_12d6478);
  }
  lVar7 = _UIPanel_TypeInfo_12d6478;
  *(undefined4 *)(*(long *)(_UIPanel_TypeInfo_12d6478 + 0xb8) + 0x18) = uVar5;
  if (**(long **)(lVar7 + 0xb8) != 0) {
    iVar8 = *(int *)(**(long **)(lVar7 + 0xb8) + 0x18);
    bVar3 = (*(byte *)(lVar7 + 0x133) & 4) == 0;
    if (0 < iVar8) {
      uVar9 = 0;
      do {
        if ((!bVar3) && (*(int *)(lVar7 + 0xe0) == 0)) {
          native_sub_4327ec(lVar7);
          lVar7 = _UIPanel_TypeInfo_12d6478;
        }
        lVar7 = **(long **)(lVar7 + 0xb8);
        if (lVar7 == 0) goto LAB_00af2dd4;
        if (*(uint *)(lVar7 + 0x18) <= uVar9) {
          native_System_ThrowHelper__ThrowArgumentOutOfRangeException_9fe0f4(0);
        }
        lVar7 = *(long *)(*(long *)(lVar7 + 0x10) + (long)(int)uVar9 * 8 + 0x20);
        if (((*(byte *)(_UnityEngine_Object_TypeInfo_12d54e0 + 0x133) >> 2 & 1) != 0) &&
           (*(int *)(_UnityEngine_Object_TypeInfo_12d54e0 + 0xe0) == 0)) {
          native_sub_4327ec();
        }
        uVar6 = native_UnityEngine_Object__op_Implicit_8e1b98(lVar7,0);
        if ((uVar6 & 1) == 0) {
          if (((*(byte *)(_UnityEngine_Debug_TypeInfo_12d4338 + 0x133) >> 2 & 1) != 0) &&
             (*(int *)(_UnityEngine_Debug_TypeInfo_12d4338 + 0xe0) == 0)) {
            native_sub_4327ec();
          }
          native_UnityEngine_Debug__LogWarning_8dcbc8
                    (_StringLiteral_Improperly_destroyed_panel_detected__removing_12ee780,lVar7,0);
          if (((*(byte *)(_UIPanel_TypeInfo_12d6478 + 0x133) >> 2 & 1) != 0) &&
             (*(int *)(_UIPanel_TypeInfo_12d6478 + 0xe0) == 0)) {
            native_sub_4327ec();
          }
          if (**(long **)(_UIPanel_TypeInfo_12d6478 + 0xb8) == 0) goto LAB_00af2dd4;
          native_System_Collections_Generic_List_BMSymbol___Remove_d41f3c
                    (**(long **)(_UIPanel_TypeInfo_12d6478 + 0xb8),lVar7,
                     _Method_System_Collections_Generic_List_UIPanel__Remove___12dd358);
          uVar9 = uVar9 - 1;
          iVar8 = iVar8 + -1;
        }
        else {
          if (lVar7 == 0) goto LAB_00af2dd4;
          native_UIPanel__UpdateSelf_af2dd8(lVar7);
        }
        uVar9 = uVar9 + 1;
        bVar3 = (*(byte *)(_UIPanel_TypeInfo_12d6478 + 0x133) & 4) == 0;
        lVar7 = _UIPanel_TypeInfo_12d6478;
      } while ((int)uVar9 < iVar8);
    }
    if ((!bVar3) && (*(int *)(lVar7 + 0xe0) == 0)) {
      native_sub_4327ec(lVar7);
      lVar7 = _UIPanel_TypeInfo_12d6478;
    }
    if (**(long **)(lVar7 + 0xb8) != 0) {
      iVar8 = *(int *)(**(long **)(lVar7 + 0xb8) + 0x18);
      if (iVar8 < 1) {
        return;
      }
      uVar6 = 0;
      iVar4 = 3000;
      while( true ) {
        if (((*(byte *)(lVar7 + 0x133) >> 2 & 1) != 0) && (*(int *)(lVar7 + 0xe0) == 0)) {
          native_sub_4327ec(lVar7);
          lVar7 = _UIPanel_TypeInfo_12d6478;
        }
        lVar7 = **(long **)(lVar7 + 0xb8);
        if (lVar7 == 0) break;
        if (*(uint *)(lVar7 + 0x18) <= (uint)uVar6) {
          native_System_ThrowHelper__ThrowArgumentOutOfRangeException_9fe0f4(0);
        }
        lVar7 = *(long *)(*(long *)(lVar7 + 0x10) + uVar6 * 8 + 0x20);
        if (lVar7 == 0) break;
        iVar1 = *(int *)(lVar7 + 0xa8);
        if (iVar1 == 0) {
          *(int *)(lVar7 + 0xac) = iVar4;
          native_UIPanel__UpdateDrawCalls_aef0d4(lVar7,uVar6 & 0xffffffff);
          if (*(long *)(lVar7 + 0xb8) == 0) break;
          iVar4 = *(int *)(*(long *)(lVar7 + 0xb8) + 0x18) + iVar4;
        }
        else {
          native_UIPanel__UpdateDrawCalls_aef0d4(lVar7,uVar6 & 0xffffffff);
          if (*(long *)(lVar7 + 0xb8) == 0) break;
          iVar2 = *(int *)(*(long *)(lVar7 + 0xb8) + 0x18);
          if (iVar1 == 1) {
            if (iVar2 != 0) {
              iVar2 = *(int *)(lVar7 + 0xac) + iVar2;
LAB_00af2da0:
              iVar4 = native_UnityEngine_Mathf__Max_8e4cd0(iVar4,iVar2,0);
            }
          }
          else if (iVar2 != 0) {
            iVar2 = *(int *)(lVar7 + 0xac) + 1;
            goto LAB_00af2da0;
          }
        }
        if (iVar8 <= (int)((uint)uVar6 + 1)) {
          return;
        }
        uVar6 = uVar6 + 1;
        lVar7 = _UIPanel_TypeInfo_12d6478;
      }
    }
  }
LAB_00af2dd4:
                    /* WARNING: Subroutine does not return */
  native_sub_432810();
}



/* UIPanel$$UpdateSelf @ 0xaf2dd8
 * void UIPanel__UpdateSelf (UIPanel_o* __this, const MethodInfo* method); */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* UIPanel$$UpdateSelf
   void UIPanel__UpdateSelf (UIPanel_o* __this, const MethodInfo* method); */

void native_UIPanel__UpdateSelf_af2dd8(long param_1)

{
  byte bVar1;
  uint uVar2;
  long lVar3;
  ulong uVar4;
  uint uVar5;
  undefined8 uVar6;
  
  if ((bRam0000000001342051 & 1) == 0) {
    native_sub_43273c(&Method_UnityEngine_Component_GetComponent_UIScrollView____12e2c08);
    native_sub_43273c(&Method_System_Collections_Generic_List_UIDrawCall__RemoveAt___12dd2c0);
    native_sub_43273c(&Method_System_Collections_Generic_List_UIDrawCall__get_Count___12dd2c8);
    native_sub_43273c(&Method_System_Collections_Generic_List_UIDrawCall__get_Item___12dd2d0);
    native_sub_43273c(&UnityEngine_Object_TypeInfo_12d54e0);
    native_sub_43273c(&UIDrawCall_TypeInfo_12d6438);
    bRam0000000001342051 = 1;
  }
  lVar3 = native_UIRect__get_cachedTransform_c27c58(param_1,0);
  if (lVar3 != 0) {
    bVar1 = native_UnityEngine_Transform__get_hasChanged_772dac(lVar3,0);
    *(byte *)(param_1 + 0x1a8) = bVar1 & 1;
    native_UIPanel__UpdateTransformMatrix_af16b4(param_1);
    native_UIPanel__UpdateLayers_af3060(param_1);
    native_UIPanel__UpdateWidgets_af3260(param_1);
    if (*(char *)(param_1 + 0x170) == '\0') {
      uVar6 = *(undefined8 *)(param_1 + 0x80);
      if (((*(byte *)(_UnityEngine_Object_TypeInfo_12d54e0 + 0x133) >> 2 & 1) != 0) &&
         (*(int *)(_UnityEngine_Object_TypeInfo_12d54e0 + 0xe0) == 0)) {
        native_sub_4327ec();
      }
      uVar4 = native_UnityEngine_Object__op_Equality_8e9a3c(uVar6,0,0);
      if ((uVar4 & 1) == 0) {
        if (*(long *)(param_1 + 0x80) == 0) goto LAB_00af305c;
        uVar2 = native_UnityEngine_Camera__get_useOcclusionCulling_8d89d0
                          (*(long *)(param_1 + 0x80),0);
      }
      else {
        uVar2 = 1;
      }
      lVar3 = *(long *)(param_1 + 0xb8);
      if (lVar3 != 0) {
        uVar5 = 0;
        do {
          while( true ) {
            if ((int)*(uint *)(lVar3 + 0x18) <= (int)uVar5) goto LAB_00af2fac;
            if (*(uint *)(lVar3 + 0x18) <= uVar5) {
              native_System_ThrowHelper__ThrowArgumentOutOfRangeException_9fe0f4(0);
            }
            lVar3 = *(long *)(*(long *)(lVar3 + 0x10) + (long)(int)uVar5 * 8 + 0x20);
            if (lVar3 == 0) goto LAB_00af305c;
            if ((*(char *)(lVar3 + 0xd8) == '\0') ||
               (uVar4 = native_UIPanel__FillDrawCall_af3de0(param_1,lVar3,uVar2 & 1),
               (uVar4 & 1) != 0)) break;
            if (((*(byte *)(_UIDrawCall_TypeInfo_12d6438 + 0x133) >> 2 & 1) != 0) &&
               (*(int *)(_UIDrawCall_TypeInfo_12d6438 + 0xe0) == 0)) {
              native_sub_4327ec();
            }
            native_UIDrawCall__Destroy_9e91c0(lVar3,0);
            if (*(long *)(param_1 + 0xb8) == 0) goto LAB_00af305c;
            native_System_Collections_Generic_List_int_____RemoveAt_d42280
                      (*(long *)(param_1 + 0xb8),uVar5,
                       _Method_System_Collections_Generic_List_UIDrawCall__RemoveAt___12dd2c0);
            lVar3 = *(long *)(param_1 + 0xb8);
            if (lVar3 == 0) goto LAB_00af305c;
          }
          lVar3 = *(long *)(param_1 + 0xb8);
          uVar5 = uVar5 + 1;
        } while (lVar3 != 0);
      }
    }
    else {
      *(undefined1 *)(param_1 + 0x170) = 0;
      native_UIPanel__FillAllDrawCalls_af3604(param_1);
LAB_00af2fac:
      if (*(char *)(param_1 + 0x199) != '\0') {
        *(undefined1 *)(param_1 + 0x199) = 0;
        lVar3 = native_UnityEngine_Component__GetComponent_ActiveAnimation__49daec
                          (param_1,
                           _Method_UnityEngine_Component_GetComponent_UIScrollView____12e2c08);
        if (((*(byte *)(_UnityEngine_Object_TypeInfo_12d54e0 + 0x133) >> 2 & 1) != 0) &&
           (*(int *)(_UnityEngine_Object_TypeInfo_12d54e0 + 0xe0) == 0)) {
          native_sub_4327ec(_UnityEngine_Object_TypeInfo_12d54e0);
        }
        uVar4 = native_UnityEngine_Object__op_Inequality_8d76fc(lVar3,0,0);
        if ((uVar4 & 1) != 0) {
          if (lVar3 == 0) goto LAB_00af305c;
          native_UIScrollView__UpdateScrollbars_c3267c(lVar3,0);
        }
      }
      if (*(char *)(param_1 + 0x1a8) == '\0') {
        return;
      }
      lVar3 = *(long *)(param_1 + 0x48);
      *(undefined1 *)(param_1 + 0x1a8) = 0;
      if (lVar3 != 0) {
        if (pcRam000000000133feb8 == (code *)0x0) {
          pcRam000000000133feb8 = (code *)native_sub_4326f0(&UNK_00e2ac71);
        }
                    /* WARNING: Could not recover jumptable at 0x00772e38. Too many branches */
                    /* WARNING: Treating indirect jump as call */
        (*pcRam000000000133feb8)(lVar3,0);
        return;
      }
    }
  }
LAB_00af305c:
                    /* WARNING: Subroutine does not return */
  native_sub_432810();
}



/* UIPanel$$SortWidgets @ 0xaf41ac
 * void UIPanel__SortWidgets (UIPanel_o* __this, const MethodInfo* method); */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* UIPanel$$SortWidgets
   void UIPanel__SortWidgets (UIPanel_o* __this, const MethodInfo* method); */

void native_UIPanel__SortWidgets_af41ac(long param_1)

{
  long lVar1;
  long lVar2;
  long lVar3;
  
  if ((bRam0000000001342052 & 1) == 0) {
    native_sub_43273c(&Method_System_Comparison_UIWidget___ctor___12d8b58);
    native_sub_43273c(&System_Comparison_UIWidget__TypeInfo_12d21f8);
    native_sub_43273c(&Method_System_Collections_Generic_List_UIWidget__Sort___12dd440);
    native_sub_43273c(&Method_UIWidget_PanelCompareFunc___12e7960);
    bRam0000000001342052 = 1;
  }
  *(undefined1 *)(param_1 + 0x198) = 0;
  lVar3 = *(long *)(param_1 + 0xb0);
  lVar2 = native_sub_432808(_System_Comparison_UIWidget__TypeInfo_12d21f8);
  native_System_Comparison_ABSSequentiable____ctor_bbdf08
            (lVar2,0,_Method_UIWidget_PanelCompareFunc___12e7960,
             _Method_System_Comparison_UIWidget___ctor___12d8b58);
  lVar1 = _Method_System_Collections_Generic_List_UIWidget__Sort___12dd440;
  if (lVar3 == 0) {
                    /* WARNING: Subroutine does not return */
    native_sub_432810();
  }
  if (lVar2 == 0) {
    native_System_ThrowHelper__ThrowArgumentNullException_9fe014(8);
  }
  if (0 < *(int *)(lVar3 + 0x18)) {
                    /* WARNING: Could not recover jumptable at 0x00d426c8. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*(code *)**(undefined8 **)(*(long *)(*(long *)(lVar1 + 0x18) + 0xc0) + 0x118))
              (*(undefined8 *)(lVar3 + 0x10),0,*(int *)(lVar3 + 0x18),lVar2);
    return;
  }
  return;
}



/* UIPanel$$FillAllDrawCalls @ 0xaf3604
 * void UIPanel__FillAllDrawCalls (UIPanel_o* __this, const MethodInfo* method); */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* UIPanel$$FillAllDrawCalls
   void UIPanel__FillAllDrawCalls (UIPanel_o* __this, const MethodInfo* method); */

undefined1  [16] native_UIPanel__FillAllDrawCalls_af3604(long param_1)

{
  long *plVar1;
  ulong *puVar2;
  char cVar3;
  bool bVar4;
  undefined4 uVar5;
  int iVar6;
  long *plVar7;
  undefined8 uVar8;
  undefined8 uVar9;
  undefined8 uVar10;
  long *plVar11;
  ulong uVar12;
  undefined8 extraout_x1;
  undefined8 extraout_x1_00;
  undefined8 extraout_x1_01;
  undefined8 extraout_x1_02;
  uint uVar13;
  uint uVar14;
  long lVar15;
  undefined8 uVar16;
  ulong uVar17;
  long lVar18;
  long lVar19;
  int iVar20;
  long *plVar21;
  undefined8 uVar22;
  undefined1 auVar23 [16];
  undefined1 auVar24 [16];
  undefined1 auVar25 [16];
  uint uStack_7c;
  int iStack_6c;
  undefined8 uStack_68;
  
  if ((bRam0000000001342053 & 1) == 0) {
    native_sub_43273c(&Method_System_Collections_Generic_List_UIDrawCall__Add___12dd2b0);
    native_sub_43273c(&Method_System_Collections_Generic_List_UIDrawCall__Clear___12dd2b8);
    native_sub_43273c(&Method_System_Collections_Generic_List_Vector3__get_Count___12dd500);
    native_sub_43273c(&Method_System_Collections_Generic_List_UIWidget__get_Count___12dd448);
    native_sub_43273c(&Method_System_Collections_Generic_List_UIDrawCall__get_Count___12dd2c8);
    native_sub_43273c(&Method_System_Collections_Generic_List_UIWidget__get_Item___12dd450);
    native_sub_43273c(&Method_System_Collections_Generic_List_UIDrawCall__get_Item___12dd2d0);
    native_sub_43273c(&UnityEngine_Object_TypeInfo_12d54e0);
    native_sub_43273c(&UIDrawCall_OnRenderCallback_TypeInfo_12d7a48);
    native_sub_43273c(&UIDrawCall_TypeInfo_12d6438);
    native_sub_43273c(&Method_UIPanel_OnSetAlphaProp___12e7850);
    bRam0000000001342053 = 1;
  }
  lVar15 = *(long *)(param_1 + 0xb8);
  if (lVar15 != 0) {
    uVar17 = 0;
    do {
      if ((long)(int)*(uint *)(lVar15 + 0x18) <= (long)uVar17) {
        native_System_Collections_Generic_List_Action___Clear_d40e80
                  (lVar15,_Method_System_Collections_Generic_List_UIDrawCall__Clear___12dd2b8);
        uVar16 = *(undefined8 *)(param_1 + 0x80);
        if (((*(byte *)(_UnityEngine_Object_TypeInfo_12d54e0 + 0x133) >> 2 & 1) != 0) &&
           (*(int *)(_UnityEngine_Object_TypeInfo_12d54e0 + 0xe0) == 0)) {
          native_sub_4327ec();
        }
        uVar17 = native_UnityEngine_Object__op_Equality_8e9a3c(uVar16,0,0);
        if ((uVar17 & 1) == 0) {
          if (*(long *)(param_1 + 0x80) == 0) break;
          uStack_7c = native_UnityEngine_Camera__get_useOcclusionCulling_8d89d0
                                (*(long *)(param_1 + 0x80),0);
        }
        else {
          uStack_7c = 1;
        }
        if (*(char *)(param_1 + 0x198) != '\0') {
          native_UIPanel__SortWidgets_af41ac(param_1);
        }
        uVar17 = native_System_String__IsNullOrEmpty_b09430(*(undefined8 *)(param_1 + 0x138),0);
        if ((uVar17 & 1) == 0) {
          lVar15 = *(long *)(param_1 + 0x1b0);
          plVar1 = (long *)(param_1 + 0x1b0);
          plVar7 = (long *)native_sub_432808(_UIDrawCall_OnRenderCallback_TypeInfo_12d7a48);
          native_UIDrawCall_OnRenderCallback___ctor_55489c
                    (plVar7,param_1,_Method_UIPanel_OnSetAlphaProp___12e7850,0);
          if (lVar15 == 0) {
            *plVar1 = (long)plVar7;
          }
          else {
            uVar13 = 0;
            plVar7 = (long *)native_System_Delegate__Combine_a6cf00(lVar15,plVar7);
            if ((plVar7 != (long *)0x0) &&
               (*plVar7 != _UIDrawCall_OnRenderCallback_TypeInfo_12d7a48)) goto LAB_00af3dd8;
            *plVar1 = (long)plVar7;
          }
          native_sub_4326e0(plVar1,plVar7);
        }
        lVar15 = *(long *)(param_1 + 0xb0);
        if (lVar15 != 0) {
          iVar20 = *(int *)(lVar15 + 0x18);
          if (0 < iVar20) {
            uVar14 = 0;
            lVar18 = 0;
            uVar16 = 0;
            uVar22 = 0;
            plVar1 = (long *)(param_1 + 0x1b0);
            iStack_6c = 0;
            uStack_68 = 0;
            goto LAB_00af3874;
          }
          iStack_6c = 0;
          lVar18 = 0;
          goto LAB_00af3d00;
        }
        break;
      }
      if (*(uint *)(lVar15 + 0x18) <= uVar17) {
        native_System_ThrowHelper__ThrowArgumentOutOfRangeException_9fe0f4(0);
      }
      uVar16 = *(undefined8 *)(*(long *)(lVar15 + 0x10) + uVar17 * 8 + 0x20);
      if (((*(byte *)(_UIDrawCall_TypeInfo_12d6438 + 0x133) >> 2 & 1) != 0) &&
         (*(int *)(_UIDrawCall_TypeInfo_12d6438 + 0xe0) == 0)) {
        native_sub_4327ec();
      }
      native_UIDrawCall__Destroy_9e91c0(uVar16,0);
      lVar15 = *(long *)(param_1 + 0xb8);
      uVar17 = uVar17 + 1;
    } while (lVar15 != 0);
  }
LAB_00af3dd4:
                    /* WARNING: Subroutine does not return */
  native_sub_432810();
LAB_00af3874:
  if (*(uint *)(lVar15 + 0x18) <= uVar14) {
    native_System_ThrowHelper__ThrowArgumentOutOfRangeException_9fe0f4(0);
  }
  plVar21 = *(long **)(*(long *)(lVar15 + 0x10) + (long)(int)uVar14 * 8 + 0x20);
  if (plVar21 == (long *)0x0) goto LAB_00af3dd4;
  uVar17 = native_UIWidget__get_isVisible_9499c8(plVar21,0);
  if (((uVar17 & 1) == 0) ||
     (uVar17 = native_UIWidget__get_hasVertices_949a68(plVar21,0), (uVar17 & 1) == 0)) {
    plVar11 = plVar21 + 0x2c;
    plVar7 = (long *)0x0;
    plVar21[0x2c] = 0;
  }
  else {
    uVar8 = (**(code **)(*plVar21 + 0x308))(plVar21,*(undefined8 *)(*plVar21 + 0x310));
    if (*(long *)(param_1 + 0x118) != 0) {
      uVar8 = native_UIPanel_OnCreateMaterial__Invoke_557ccc
                        (*(long *)(param_1 + 0x118),plVar21,uVar8,0);
    }
    uVar9 = (**(code **)(*plVar21 + 0x328))(plVar21,*(undefined8 *)(*plVar21 + 0x330));
    uVar10 = (**(code **)(*plVar21 + 0x348))(plVar21,*(undefined8 *)(*plVar21 + 0x350));
    if (((*(byte *)(_UnityEngine_Object_TypeInfo_12d54e0 + 0x133) >> 2 & 1) != 0) &&
       (*(int *)(_UnityEngine_Object_TypeInfo_12d54e0 + 0xe0) == 0)) {
      native_sub_4327ec(_UnityEngine_Object_TypeInfo_12d54e0);
    }
    uVar17 = native_UnityEngine_Object__op_Inequality_8d76fc(uVar22,uVar8,0);
    if ((uVar17 & 1) == 0) {
      if (((*(byte *)(_UnityEngine_Object_TypeInfo_12d54e0 + 0x133) >> 2 & 1) != 0) &&
         (*(int *)(_UnityEngine_Object_TypeInfo_12d54e0 + 0xe0) == 0)) {
        native_sub_4327ec();
      }
      uVar17 = native_UnityEngine_Object__op_Inequality_8d76fc(uVar16,uVar9,0);
      if ((uVar17 & 1) != 0) goto LAB_00af39ac;
      if (((*(byte *)(_UnityEngine_Object_TypeInfo_12d54e0 + 0x133) >> 2 & 1) != 0) &&
         (*(int *)(_UnityEngine_Object_TypeInfo_12d54e0 + 0xe0) == 0)) {
        native_sub_4327ec();
      }
      uVar17 = native_UnityEngine_Object__op_Inequality_8d76fc(uStack_68,uVar10,0);
      if ((uVar17 & 1) != 0) goto LAB_00af39ac;
    }
    else {
LAB_00af39ac:
      if (((*(byte *)(_UnityEngine_Object_TypeInfo_12d54e0 + 0x133) >> 2 & 1) != 0) &&
         (*(int *)(_UnityEngine_Object_TypeInfo_12d54e0 + 0xe0) == 0)) {
        native_sub_4327ec();
      }
      uVar17 = native_UnityEngine_Object__op_Inequality_8d76fc(lVar18,0,0);
      uVar16 = uVar9;
      uVar22 = uVar8;
      uStack_68 = uVar10;
      if ((uVar17 & 1) != 0) {
        if ((lVar18 == 0) || (*(long *)(lVar18 + 0x48) == 0)) goto LAB_00af3dd4;
        if (*(int *)(*(long *)(lVar18 + 0x48) + 0x18) != 0) {
          if (*(long *)(param_1 + 0xb8) == 0) goto LAB_00af3dd4;
          native_System_Collections_Generic_List_int_____Add_d40c00
                    (*(long *)(param_1 + 0xb8),lVar18,
                     _Method_System_Collections_Generic_List_UIDrawCall__Add___12dd2b0);
          native_UIDrawCall__UpdateGeometry_9e6d68(lVar18,iStack_6c,uStack_7c & 1,0);
          *(long *)(lVar18 + 0xe0) = *plVar1;
          native_sub_4326e0(lVar18 + 0xe0);
          *plVar1 = 0;
          native_sub_4326e0(plVar1,0);
          lVar18 = 0;
          iStack_6c = 0;
        }
      }
    }
    if (((*(byte *)(_UnityEngine_Object_TypeInfo_12d54e0 + 0x133) >> 2 & 1) != 0) &&
       (*(int *)(_UnityEngine_Object_TypeInfo_12d54e0 + 0xe0) == 0)) {
      native_sub_4327ec();
    }
    uVar17 = native_UnityEngine_Object__op_Inequality_8d76fc(uVar22,0,0);
    if ((uVar17 & 1) == 0) {
      if (((*(byte *)(_UnityEngine_Object_TypeInfo_12d54e0 + 0x133) >> 2 & 1) != 0) &&
         (*(int *)(_UnityEngine_Object_TypeInfo_12d54e0 + 0xe0) == 0)) {
        native_sub_4327ec();
      }
      uVar17 = native_UnityEngine_Object__op_Inequality_8d76fc(uStack_68,0,0);
      if ((uVar17 & 1) != 0) goto LAB_00af3adc;
      if (((*(byte *)(_UnityEngine_Object_TypeInfo_12d54e0 + 0x133) >> 2 & 1) != 0) &&
         (*(int *)(_UnityEngine_Object_TypeInfo_12d54e0 + 0xe0) == 0)) {
        native_sub_4327ec();
      }
      uVar17 = native_UnityEngine_Object__op_Inequality_8d76fc(uVar16,0,0);
      if ((uVar17 & 1) != 0) goto LAB_00af3adc;
      goto LAB_00af3b98;
    }
LAB_00af3adc:
    if (((*(byte *)(_UnityEngine_Object_TypeInfo_12d54e0 + 0x133) >> 2 & 1) != 0) &&
       (*(int *)(_UnityEngine_Object_TypeInfo_12d54e0 + 0xe0) == 0)) {
      native_sub_4327ec();
    }
    uVar17 = native_UnityEngine_Object__op_Equality_8e9a3c(lVar18,0,0);
    if ((uVar17 & 1) == 0) {
      iVar6 = (**(code **)(*plVar21 + 0x2c8))(plVar21,*(undefined8 *)(*plVar21 + 0x2d0));
      if (lVar18 == 0) goto LAB_00af3dd4;
      if (iVar6 < *(int *)(lVar18 + 0x1c)) {
        *(int *)(lVar18 + 0x1c) = iVar6;
      }
      if (*(int *)(lVar18 + 0x20) < iVar6) {
        *(int *)(lVar18 + 0x20) = iVar6;
      }
    }
    else {
      if (((*(byte *)(_UIDrawCall_TypeInfo_12d6438 + 0x133) >> 2 & 1) != 0) &&
         (*(int *)(_UIDrawCall_TypeInfo_12d6438 + 0xe0) == 0)) {
        native_sub_4327ec();
      }
      lVar18 = native_UIDrawCall__Create_9e8838(param_1,uVar22,uVar16,uStack_68,0);
      uVar5 = (**(code **)(*plVar21 + 0x2c8))(plVar21,*(undefined8 *)(*plVar21 + 0x2d0));
      if (lVar18 == 0) goto LAB_00af3dd4;
      *(long *)(lVar18 + 0x30) = param_1;
      *(undefined4 *)(lVar18 + 0x1c) = uVar5;
      *(undefined4 *)(lVar18 + 0x20) = uVar5;
      native_sub_4326e0((long *)(lVar18 + 0x30),param_1);
      *(undefined8 *)(lVar18 + 0xe8) = *(undefined8 *)(param_1 + 0x120);
      native_sub_4326e0(lVar18 + 0xe8);
    }
    plVar21[0x2c] = lVar18;
    native_sub_4326e0(plVar21 + 0x2c,lVar18);
    if (((*(byte *)(_UnityEngine_Object_TypeInfo_12d54e0 + 0x133) >> 2 & 1) != 0) &&
       (*(int *)(_UnityEngine_Object_TypeInfo_12d54e0 + 0xe0) == 0)) {
      native_sub_4327ec();
    }
    uVar17 = native_UnityEngine_Object__op_Inequality_8d76fc(lVar18,0,0);
    if ((uVar17 & 1) == 0) goto LAB_00af3b98;
    iStack_6c = iStack_6c + 1;
    if (*(char *)(param_1 + 0x99) == '\0') {
      if (*(char *)(param_1 + 0x9a) == '\0') {
        uVar8 = 0;
      }
      else {
        uVar8 = *(undefined8 *)(lVar18 + 0x68);
      }
      uVar9 = 0;
      uVar10 = 0;
    }
    else {
      uVar9 = *(undefined8 *)(lVar18 + 0x50);
      uVar10 = *(undefined8 *)(lVar18 + 0x58);
      if (*(char *)(param_1 + 0x9a) == '\0') {
        uVar8 = 0;
      }
      else {
        uVar8 = *(undefined8 *)(lVar18 + 0x68);
      }
    }
    native_UIWidget__WriteToBuffers_94ccd0
              (plVar21,*(undefined8 *)(lVar18 + 0x48),*(undefined8 *)(lVar18 + 0x60),
               *(undefined8 *)(lVar18 + 0x70),uVar9,uVar10,uVar8,0);
    plVar7 = (long *)plVar21[0x1a];
    if (plVar7 == (long *)0x0) goto LAB_00af3b98;
    plVar11 = plVar1;
    if (*plVar1 != 0) {
      uVar13 = 0;
      plVar7 = (long *)native_System_Delegate__Combine_a6cf00();
      if ((plVar7 == (long *)0x0) || (*plVar7 == _UIDrawCall_OnRenderCallback_TypeInfo_12d7a48)) {
        *plVar1 = (long)plVar7;
        goto LAB_00af3b94;
      }
LAB_00af3dd8:
      auVar24 = native_sub_432b04(plVar7);
      lVar18 = auVar24._8_8_;
      lVar15 = auVar24._0_8_;
      if ((bRam0000000001342056 & 1) == 0) {
        native_sub_43273c(&Method_System_Collections_Generic_List_UIWidget__RemoveAt___12dd438);
        native_sub_43273c(&Method_System_Collections_Generic_List_Vector3__get_Count___12dd500);
        native_sub_43273c(&Method_System_Collections_Generic_List_UIWidget__get_Count___12dd448);
        native_sub_43273c(&Method_System_Collections_Generic_List_UIWidget__get_Item___12dd450);
        native_sub_43273c(&UnityEngine_Object_TypeInfo_12d54e0);
        native_sub_43273c(&UIDrawCall_OnRenderCallback_TypeInfo_12d7a48);
        native_sub_43273c(&Method_UIPanel_OnSetAlphaProp___12e7850);
        bRam0000000001342056 = 1;
      }
      if (((*(byte *)(_UnityEngine_Object_TypeInfo_12d54e0 + 0x133) >> 2 & 1) != 0) &&
         (*(int *)(_UnityEngine_Object_TypeInfo_12d54e0 + 0xe0) == 0)) {
        native_sub_4327ec();
      }
      auVar24 = native_UnityEngine_Object__op_Inequality_8d76fc(lVar18,0,0);
      uVar16 = auVar24._8_8_;
      if ((auVar24._0_8_ & 1) != 0) {
        if (lVar18 == 0) {
LAB_00af41a0:
                    /* WARNING: Subroutine does not return */
          native_sub_432810();
        }
        *(undefined1 *)(lVar18 + 0xd8) = 0;
        auVar24 = native_System_String__IsNullOrEmpty_b09430(*(undefined8 *)(lVar15 + 0x138),0);
        uVar16 = auVar24._8_8_;
        if ((auVar24._0_8_ & 1) == 0) {
          lVar19 = *(long *)(lVar15 + 0x1b0);
          plVar1 = (long *)(lVar15 + 0x1b0);
          plVar7 = (long *)native_sub_432808(_UIDrawCall_OnRenderCallback_TypeInfo_12d7a48);
          native_UIDrawCall_OnRenderCallback___ctor_55489c
                    (plVar7,lVar15,_Method_UIPanel_OnSetAlphaProp___12e7850,0);
          if (lVar19 == 0) {
            *plVar1 = (long)plVar7;
          }
          else {
            plVar7 = (long *)native_System_Delegate__Combine_a6cf00(lVar19,plVar7,0);
            if ((plVar7 != (long *)0x0) &&
               (*plVar7 != _UIDrawCall_OnRenderCallback_TypeInfo_12d7a48)) {
LAB_00af41a4:
              lVar15 = native_sub_432b04(plVar7);
              if ((bRam0000000001342052 & 1) == 0) {
                native_sub_43273c(&Method_System_Comparison_UIWidget___ctor___12d8b58);
                native_sub_43273c(&System_Comparison_UIWidget__TypeInfo_12d21f8);
                native_sub_43273c(&Method_System_Collections_Generic_List_UIWidget__Sort___12dd440);
                native_sub_43273c(&Method_UIWidget_PanelCompareFunc___12e7960);
                bRam0000000001342052 = 1;
              }
              *(undefined1 *)(lVar15 + 0x198) = 0;
              lVar19 = *(long *)(lVar15 + 0xb0);
              lVar18 = native_sub_432808(_System_Comparison_UIWidget__TypeInfo_12d21f8);
              auVar24._8_8_ = lVar18;
              auVar24._0_8_ = lVar19;
              native_System_Comparison_ABSSequentiable____ctor_bbdf08
                        (lVar18,0,_Method_UIWidget_PanelCompareFunc___12e7960,
                         _Method_System_Comparison_UIWidget___ctor___12d8b58);
              lVar15 = _Method_System_Collections_Generic_List_UIWidget__Sort___12dd440;
              if (lVar19 == 0) {
                    /* WARNING: Subroutine does not return */
                native_sub_432810();
              }
              if (lVar18 == 0) {
                auVar24 = native_System_ThrowHelper__ThrowArgumentNullException_9fe014(8);
              }
              if (0 < *(int *)(lVar19 + 0x18)) {
                    /* WARNING: Could not recover jumptable at 0x00d426c8. Too many branches */
                    /* WARNING: Treating indirect jump as call */
                auVar24 = (*(code *)**(undefined8 **)
                                      (*(long *)(*(long *)(lVar15 + 0x18) + 0xc0) + 0x118))
                                    (*(undefined8 *)(lVar19 + 0x10),0,*(int *)(lVar19 + 0x18),lVar18
                                    );
                return auVar24;
              }
              return auVar24;
            }
            *plVar1 = (long)plVar7;
          }
          native_sub_4326e0(plVar1,plVar7);
          uVar16 = extraout_x1;
        }
        if (*(long *)(lVar15 + 0xb0) == 0) goto LAB_00af41a0;
        iVar20 = *(int *)(*(long *)(lVar15 + 0xb0) + 0x18);
        if (iVar20 < 1) {
          iVar6 = 0;
        }
        else {
          uVar17 = 0;
          iVar6 = 0;
          plVar1 = (long *)(lVar15 + 0x1b0);
          do {
            lVar19 = *(long *)(lVar15 + 0xb0);
            if (lVar19 == 0) goto LAB_00af41a0;
            if (*(uint *)(lVar19 + 0x18) <= uVar17) {
              native_System_ThrowHelper__ThrowArgumentOutOfRangeException_9fe0f4(0);
            }
            lVar19 = *(long *)(*(long *)(lVar19 + 0x10) + uVar17 * 8 + 0x20);
            if (((*(byte *)(_UnityEngine_Object_TypeInfo_12d54e0 + 0x133) >> 2 & 1) != 0) &&
               (*(int *)(_UnityEngine_Object_TypeInfo_12d54e0 + 0xe0) == 0)) {
              native_sub_4327ec();
            }
            uVar12 = native_UnityEngine_Object__op_Equality_8e9a3c(lVar19,0,0);
            if ((uVar12 & 1) == 0) {
              if (lVar19 == 0) goto LAB_00af41a0;
              uVar16 = *(undefined8 *)(lVar19 + 0x160);
              if (((*(byte *)(_UnityEngine_Object_TypeInfo_12d54e0 + 0x133) >> 2 & 1) != 0) &&
                 (*(int *)(_UnityEngine_Object_TypeInfo_12d54e0 + 0xe0) == 0)) {
                native_sub_4327ec();
              }
              auVar24 = native_UnityEngine_Object__op_Equality_8e9a3c(uVar16,lVar18,0);
              uVar16 = auVar24._8_8_;
              if ((auVar24._0_8_ & 1) != 0) {
                uVar12 = native_UIWidget__get_isVisible_9499c8(lVar19,0);
                if (((uVar12 & 1) == 0) ||
                   (uVar12 = native_UIWidget__get_hasVertices_949a68(lVar19,0), (uVar12 & 1) == 0))
                {
                  plVar21 = (long *)(lVar19 + 0x160);
                  plVar7 = (long *)0x0;
                  *plVar21 = 0;
                }
                else {
                  iVar6 = iVar6 + 1;
                  if (*(char *)(lVar15 + 0x99) == '\0') {
                    if (*(char *)(lVar15 + 0x9a) == '\0') {
                      uVar16 = 0;
                    }
                    else {
                      uVar16 = *(undefined8 *)(lVar18 + 0x68);
                    }
                    uVar22 = 0;
                    uVar8 = 0;
                  }
                  else {
                    uVar22 = *(undefined8 *)(lVar18 + 0x50);
                    uVar8 = *(undefined8 *)(lVar18 + 0x58);
                    if (*(char *)(lVar15 + 0x9a) == '\0') {
                      uVar16 = 0;
                    }
                    else {
                      uVar16 = *(undefined8 *)(lVar18 + 0x68);
                    }
                  }
                  native_UIWidget__WriteToBuffers_94ccd0
                            (lVar19,*(undefined8 *)(lVar18 + 0x48),*(undefined8 *)(lVar18 + 0x60),
                             *(undefined8 *)(lVar18 + 0x70),uVar22,uVar8,uVar16,0);
                  plVar7 = *(long **)(lVar19 + 0xd0);
                  uVar16 = 0;
                  if (plVar7 == (long *)0x0) goto LAB_00af4018;
                  plVar21 = plVar1;
                  if (*plVar1 == 0) {
                    *plVar1 = (long)plVar7;
                  }
                  else {
                    plVar7 = (long *)native_System_Delegate__Combine_a6cf00(*plVar1,plVar7,0);
                    if ((plVar7 != (long *)0x0) &&
                       (*plVar7 != _UIDrawCall_OnRenderCallback_TypeInfo_12d7a48))
                    goto LAB_00af41a4;
                    *plVar1 = (long)plVar7;
                  }
                }
                native_sub_4326e0(plVar21,plVar7);
                uVar16 = extraout_x1_00;
              }
LAB_00af4018:
              uVar17 = uVar17 + 1;
            }
            else {
              if (*(long *)(lVar15 + 0xb0) == 0) goto LAB_00af41a0;
              native_System_Collections_Generic_List_int_____RemoveAt_d42280
                        (*(long *)(lVar15 + 0xb0),uVar17 & 0xffffffff,
                         _Method_System_Collections_Generic_List_UIWidget__RemoveAt___12dd438);
              iVar20 = iVar20 + -1;
              uVar16 = extraout_x1_01;
            }
          } while ((long)uVar17 < (long)iVar20);
        }
        if (*(long *)(lVar18 + 0x48) == 0) goto LAB_00af41a0;
        if (*(int *)(*(long *)(lVar18 + 0x48) + 0x18) != 0) {
          native_UIDrawCall__UpdateGeometry_9e6d68(lVar18,iVar6,uVar13 & 1,0);
          *(undefined8 *)(lVar18 + 0xe0) = *(undefined8 *)(lVar15 + 0x1b0);
          native_sub_4326e0(lVar18 + 0xe0);
          *(undefined8 *)(lVar15 + 0x1b0) = 0;
          native_sub_4326e0(lVar15 + 0x1b0,0);
          uVar22 = 1;
          uVar16 = extraout_x1_02;
          goto LAB_00af4180;
        }
      }
      uVar22 = 0;
LAB_00af4180:
      auVar25._8_8_ = uVar16;
      auVar25._0_8_ = uVar22;
      return auVar25;
    }
    *plVar1 = (long)plVar7;
  }
LAB_00af3b94:
  native_sub_4326e0(plVar11,plVar7);
LAB_00af3b98:
  uVar14 = uVar14 + 1;
  if (iVar20 <= (int)uVar14) goto LAB_00af3d00;
  lVar15 = *(long *)(param_1 + 0xb0);
  if (lVar15 == 0) goto LAB_00af3dd4;
  goto LAB_00af3874;
LAB_00af3d00:
  if (((*(byte *)(_UnityEngine_Object_TypeInfo_12d54e0 + 0x133) >> 2 & 1) != 0) &&
     (*(int *)(_UnityEngine_Object_TypeInfo_12d54e0 + 0xe0) == 0)) {
    native_sub_4327ec();
  }
  auVar24 = native_UnityEngine_Object__op_Inequality_8d76fc(lVar18,0,0);
  if ((auVar24._0_8_ & 1) == 0) {
    return auVar24;
  }
  if ((lVar18 != 0) && (*(long *)(lVar18 + 0x48) != 0)) {
    if (*(int *)(*(long *)(lVar18 + 0x48) + 0x18) == 0) {
      return auVar24;
    }
    if (*(long *)(param_1 + 0xb8) != 0) {
      native_System_Collections_Generic_List_int_____Add_d40c00
                (*(long *)(param_1 + 0xb8),lVar18,
                 _Method_System_Collections_Generic_List_UIDrawCall__Add___12dd2b0);
      native_UIDrawCall__UpdateGeometry_9e6d68(lVar18,iStack_6c,uStack_7c & 1,0);
      uVar17 = param_1 + 0x1b0;
      *(undefined8 *)(lVar18 + 0xe0) = *(undefined8 *)(param_1 + 0x1b0);
      native_sub_4326e0(lVar18 + 0xe0);
      *(undefined8 *)(param_1 + 0x1b0) = 0;
      if (iRam0000000001345318 != 0) {
        puVar2 = (ulong *)((uVar17 >> 0x12 & 0x7fff) * 8 + 0x138ecd8);
        do {
          cVar3 = '\x01';
          bVar4 = (bool)ExclusiveMonitorPass(puVar2,0x10);
          if (bVar4) {
            *puVar2 = *puVar2 | 1L << (uVar17 >> 0xc & 0x3f);
            cVar3 = ExclusiveMonitorsStatus();
          }
        } while (cVar3 != '\0');
      }
      auVar23._8_8_ = 0;
      auVar23._0_8_ = uVar17;
      return auVar23;
    }
  }
  goto LAB_00af3dd4;
}



/* UIPanel$$OnSetAlphaProp @ 0xaf4264
 * void UIPanel__OnSetAlphaProp (UIPanel_o* __this, UnityEngine_Material_o* mat, const MethodInfo* method); */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* UIPanel$$OnSetAlphaProp
   void UIPanel__OnSetAlphaProp (UIPanel_o* __this, UnityEngine_Material_o* mat, const MethodInfo*
   method); */

void native_UIPanel__OnSetAlphaProp_af4264(long param_1,long param_2)

{
  undefined4 uVar1;
  ulong uVar2;
  undefined4 uVar3;
  
  if ((bRam0000000001342054 & 1) == 0) {
    native_sub_43273c(&UnityEngine_Object_TypeInfo_12d54e0);
    bRam0000000001342054 = 1;
  }
  if (((*(byte *)(_UnityEngine_Object_TypeInfo_12d54e0 + 0x133) >> 2 & 1) != 0) &&
     (*(int *)(_UnityEngine_Object_TypeInfo_12d54e0 + 0xe0) == 0)) {
    native_sub_4327ec();
  }
  uVar2 = native_UnityEngine_Object__op_Inequality_8d76fc(param_2,0,0);
  if ((uVar2 & 1) != 0) {
    if (param_2 != 0) {
      uVar3 = *(undefined4 *)(param_1 + 0x130);
      uVar1 = native_UnityEngine_Shader__PropertyToID_76b308(*(undefined8 *)(param_1 + 0x138),0,0);
      if (pcRam0000000001340e10 == (code *)0x0) {
        pcRam0000000001340e10 = (code *)native_sub_4326f0(&UNK_00e2e850);
      }
                    /* WARNING: Could not recover jumptable at 0x008e4128. Too many branches */
                    /* WARNING: Treating indirect jump as call */
      (*pcRam0000000001340e10)(uVar3,param_2,uVar1);
      return;
    }
                    /* WARNING: Subroutine does not return */
    native_sub_432810();
  }
  return;
}



/* UIPanel$$FillDrawCall @ 0xaea734
 * bool UIPanel__FillDrawCall (UIPanel_o* __this, UIDrawCall_o* dc, const MethodInfo* method); */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* UIPanel$$FillDrawCall
   bool UIPanel__FillDrawCall (UIPanel_o* __this, UIDrawCall_o* dc, const MethodInfo* method); */

long native_UIPanel__FillDrawCall_aea734(long param_1,long param_2)

{
  long *plVar1;
  uint uVar2;
  ulong uVar3;
  long *plVar4;
  long *plVar5;
  ulong uVar6;
  long lVar7;
  long lVar8;
  undefined8 uVar9;
  undefined8 uVar10;
  long lVar11;
  undefined8 uVar12;
  long lVar13;
  int iVar14;
  int iVar15;
  
  if ((bRam0000000001342055 & 1) == 0) {
    native_sub_43273c(&UnityEngine_Object_TypeInfo_12d54e0);
    bRam0000000001342055 = 1;
  }
  uVar12 = *(undefined8 *)(param_1 + 0x80);
  if (((*(byte *)(_UnityEngine_Object_TypeInfo_12d54e0 + 0x133) >> 2 & 1) != 0) &&
     (*(int *)(_UnityEngine_Object_TypeInfo_12d54e0 + 0xe0) == 0)) {
    native_sub_4327ec();
  }
  uVar3 = native_UnityEngine_Object__op_Equality_8e9a3c(uVar12,0,0);
  if ((uVar3 & 1) == 0) {
    if (*(long *)(param_1 + 0x80) == 0) {
                    /* WARNING: Subroutine does not return */
      native_sub_432810();
    }
    uVar2 = native_UnityEngine_Camera__get_useOcclusionCulling_8d89d0(*(long *)(param_1 + 0x80),0);
  }
  else {
    uVar2 = 1;
  }
  if ((bRam0000000001342056 & 1) == 0) {
    native_sub_43273c(&Method_System_Collections_Generic_List_UIWidget__RemoveAt___12dd438);
    native_sub_43273c(&Method_System_Collections_Generic_List_Vector3__get_Count___12dd500);
    native_sub_43273c(&Method_System_Collections_Generic_List_UIWidget__get_Count___12dd448);
    native_sub_43273c(&Method_System_Collections_Generic_List_UIWidget__get_Item___12dd450);
    native_sub_43273c(&UnityEngine_Object_TypeInfo_12d54e0);
    native_sub_43273c(&UIDrawCall_OnRenderCallback_TypeInfo_12d7a48);
    native_sub_43273c(&Method_UIPanel_OnSetAlphaProp___12e7850);
    bRam0000000001342056 = 1;
  }
  if (((*(byte *)(_UnityEngine_Object_TypeInfo_12d54e0 + 0x133) >> 2 & 1) != 0) &&
     (*(int *)(_UnityEngine_Object_TypeInfo_12d54e0 + 0xe0) == 0)) {
    native_sub_4327ec();
  }
  uVar3 = native_UnityEngine_Object__op_Inequality_8d76fc(param_2,0,0);
  if ((uVar3 & 1) == 0) {
    return 0;
  }
  if (param_2 != 0) {
    *(undefined1 *)(param_2 + 0xd8) = 0;
    uVar3 = native_System_String__IsNullOrEmpty_b09430(*(undefined8 *)(param_1 + 0x138),0);
    if ((uVar3 & 1) == 0) {
      lVar13 = *(long *)(param_1 + 0x1b0);
      plVar1 = (long *)(param_1 + 0x1b0);
      plVar4 = (long *)native_sub_432808(_UIDrawCall_OnRenderCallback_TypeInfo_12d7a48);
      native_UIDrawCall_OnRenderCallback___ctor_55489c
                (plVar4,param_1,_Method_UIPanel_OnSetAlphaProp___12e7850,0);
      if (lVar13 == 0) {
        *plVar1 = (long)plVar4;
      }
      else {
        plVar4 = (long *)native_System_Delegate__Combine_a6cf00(lVar13,plVar4,0);
        if ((plVar4 != (long *)0x0) && (*plVar4 != _UIDrawCall_OnRenderCallback_TypeInfo_12d7a48)) {
LAB_00af41a4:
          lVar13 = native_sub_432b04(plVar4);
          if ((bRam0000000001342052 & 1) == 0) {
            native_sub_43273c(&Method_System_Comparison_UIWidget___ctor___12d8b58);
            native_sub_43273c(&System_Comparison_UIWidget__TypeInfo_12d21f8);
            native_sub_43273c(&Method_System_Collections_Generic_List_UIWidget__Sort___12dd440);
            native_sub_43273c(&Method_UIWidget_PanelCompareFunc___12e7960);
            bRam0000000001342052 = 1;
          }
          *(undefined1 *)(lVar13 + 0x198) = 0;
          lVar11 = *(long *)(lVar13 + 0xb0);
          lVar7 = native_sub_432808(_System_Comparison_UIWidget__TypeInfo_12d21f8);
          native_System_Comparison_ABSSequentiable____ctor_bbdf08
                    (lVar7,0,_Method_UIWidget_PanelCompareFunc___12e7960,
                     _Method_System_Comparison_UIWidget___ctor___12d8b58);
          lVar13 = _Method_System_Collections_Generic_List_UIWidget__Sort___12dd440;
          if (lVar11 == 0) {
                    /* WARNING: Subroutine does not return */
            native_sub_432810();
          }
          lVar8 = lVar11;
          if (lVar7 == 0) {
            lVar8 = native_System_ThrowHelper__ThrowArgumentNullException_9fe014(8);
          }
          if (*(int *)(lVar11 + 0x18) < 1) {
            return lVar8;
          }
                    /* WARNING: Could not recover jumptable at 0x00d426c8. Too many branches */
                    /* WARNING: Treating indirect jump as call */
          lVar13 = (*(code *)**(undefined8 **)(*(long *)(*(long *)(lVar13 + 0x18) + 0xc0) + 0x118))
                             (*(undefined8 *)(lVar11 + 0x10),0,*(int *)(lVar11 + 0x18),lVar7);
          return lVar13;
        }
        *plVar1 = (long)plVar4;
      }
      native_sub_4326e0(plVar1,plVar4);
    }
    if (*(long *)(param_1 + 0xb0) != 0) {
      iVar14 = *(int *)(*(long *)(param_1 + 0xb0) + 0x18);
      if (iVar14 < 1) {
        iVar15 = 0;
      }
      else {
        uVar3 = 0;
        iVar15 = 0;
        plVar1 = (long *)(param_1 + 0x1b0);
        do {
          lVar13 = *(long *)(param_1 + 0xb0);
          if (lVar13 == 0) goto LAB_00af41a0;
          if (*(uint *)(lVar13 + 0x18) <= uVar3) {
            native_System_ThrowHelper__ThrowArgumentOutOfRangeException_9fe0f4(0);
          }
          lVar13 = *(long *)(*(long *)(lVar13 + 0x10) + uVar3 * 8 + 0x20);
          if (((*(byte *)(_UnityEngine_Object_TypeInfo_12d54e0 + 0x133) >> 2 & 1) != 0) &&
             (*(int *)(_UnityEngine_Object_TypeInfo_12d54e0 + 0xe0) == 0)) {
            native_sub_4327ec();
          }
          uVar6 = native_UnityEngine_Object__op_Equality_8e9a3c(lVar13,0,0);
          if ((uVar6 & 1) == 0) {
            if (lVar13 == 0) goto LAB_00af41a0;
            uVar12 = *(undefined8 *)(lVar13 + 0x160);
            if (((*(byte *)(_UnityEngine_Object_TypeInfo_12d54e0 + 0x133) >> 2 & 1) != 0) &&
               (*(int *)(_UnityEngine_Object_TypeInfo_12d54e0 + 0xe0) == 0)) {
              native_sub_4327ec();
            }
            uVar6 = native_UnityEngine_Object__op_Equality_8e9a3c(uVar12,param_2,0);
            if ((uVar6 & 1) != 0) {
              uVar6 = native_UIWidget__get_isVisible_9499c8(lVar13,0);
              if (((uVar6 & 1) == 0) ||
                 (uVar6 = native_UIWidget__get_hasVertices_949a68(lVar13,0), (uVar6 & 1) == 0)) {
                plVar5 = (long *)(lVar13 + 0x160);
                plVar4 = (long *)0x0;
                *plVar5 = 0;
              }
              else {
                iVar15 = iVar15 + 1;
                if (*(char *)(param_1 + 0x99) == '\0') {
                  if (*(char *)(param_1 + 0x9a) == '\0') {
                    uVar12 = 0;
                  }
                  else {
                    uVar12 = *(undefined8 *)(param_2 + 0x68);
                  }
                  uVar9 = 0;
                  uVar10 = 0;
                }
                else {
                  uVar9 = *(undefined8 *)(param_2 + 0x50);
                  uVar10 = *(undefined8 *)(param_2 + 0x58);
                  if (*(char *)(param_1 + 0x9a) == '\0') {
                    uVar12 = 0;
                  }
                  else {
                    uVar12 = *(undefined8 *)(param_2 + 0x68);
                  }
                }
                native_UIWidget__WriteToBuffers_94ccd0
                          (lVar13,*(undefined8 *)(param_2 + 0x48),*(undefined8 *)(param_2 + 0x60),
                           *(undefined8 *)(param_2 + 0x70),uVar9,uVar10,uVar12,0);
                plVar4 = *(long **)(lVar13 + 0xd0);
                if (plVar4 == (long *)0x0) goto LAB_00af4018;
                plVar5 = plVar1;
                if (*plVar1 == 0) {
                  *plVar1 = (long)plVar4;
                }
                else {
                  plVar4 = (long *)native_System_Delegate__Combine_a6cf00(*plVar1,plVar4,0);
                  if ((plVar4 != (long *)0x0) &&
                     (*plVar4 != _UIDrawCall_OnRenderCallback_TypeInfo_12d7a48)) goto LAB_00af41a4;
                  *plVar1 = (long)plVar4;
                }
              }
              native_sub_4326e0(plVar5,plVar4);
            }
LAB_00af4018:
            uVar3 = uVar3 + 1;
          }
          else {
            if (*(long *)(param_1 + 0xb0) == 0) goto LAB_00af41a0;
            native_System_Collections_Generic_List_int_____RemoveAt_d42280
                      (*(long *)(param_1 + 0xb0),uVar3 & 0xffffffff,
                       _Method_System_Collections_Generic_List_UIWidget__RemoveAt___12dd438);
            iVar14 = iVar14 + -1;
          }
        } while ((long)uVar3 < (long)iVar14);
      }
      if (*(long *)(param_2 + 0x48) != 0) {
        if (*(int *)(*(long *)(param_2 + 0x48) + 0x18) == 0) {
          return 0;
        }
        native_UIDrawCall__UpdateGeometry_9e6d68(param_2,iVar15,uVar2 & 1,0);
        *(undefined8 *)(param_2 + 0xe0) = *(undefined8 *)(param_1 + 0x1b0);
        native_sub_4326e0(param_2 + 0xe0);
        *(undefined8 *)(param_1 + 0x1b0) = 0;
        native_sub_4326e0(param_1 + 0x1b0,0);
        return 1;
      }
    }
  }
LAB_00af41a0:
                    /* WARNING: Subroutine does not return */
  native_sub_432810();
}



/* UIPanel$$FillDrawCall @ 0xaf3de0
 * bool UIPanel__FillDrawCall (UIPanel_o* __this, UIDrawCall_o* dc, bool needsCulling, const MethodInfo* method); */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* UIPanel$$FillDrawCall
   bool UIPanel__FillDrawCall (UIPanel_o* __this, UIDrawCall_o* dc, bool needsCulling, const
   MethodInfo* method); */

long native_UIPanel__FillDrawCall_af3de0(long param_1,long param_2,uint param_3)

{
  long *plVar1;
  ulong uVar2;
  long *plVar3;
  long *plVar4;
  ulong uVar5;
  long lVar6;
  long lVar7;
  undefined8 uVar8;
  undefined8 uVar9;
  long lVar10;
  long lVar11;
  int iVar12;
  int iVar13;
  undefined8 uVar14;
  
  if ((bRam0000000001342056 & 1) == 0) {
    native_sub_43273c(&Method_System_Collections_Generic_List_UIWidget__RemoveAt___12dd438);
    native_sub_43273c(&Method_System_Collections_Generic_List_Vector3__get_Count___12dd500);
    native_sub_43273c(&Method_System_Collections_Generic_List_UIWidget__get_Count___12dd448);
    native_sub_43273c(&Method_System_Collections_Generic_List_UIWidget__get_Item___12dd450);
    native_sub_43273c(&UnityEngine_Object_TypeInfo_12d54e0);
    native_sub_43273c(&UIDrawCall_OnRenderCallback_TypeInfo_12d7a48);
    native_sub_43273c(&Method_UIPanel_OnSetAlphaProp___12e7850);
    bRam0000000001342056 = 1;
  }
  if (((*(byte *)(_UnityEngine_Object_TypeInfo_12d54e0 + 0x133) >> 2 & 1) != 0) &&
     (*(int *)(_UnityEngine_Object_TypeInfo_12d54e0 + 0xe0) == 0)) {
    native_sub_4327ec();
  }
  uVar2 = native_UnityEngine_Object__op_Inequality_8d76fc(param_2,0,0);
  if ((uVar2 & 1) == 0) {
    return 0;
  }
  if (param_2 != 0) {
    *(undefined1 *)(param_2 + 0xd8) = 0;
    uVar2 = native_System_String__IsNullOrEmpty_b09430(*(undefined8 *)(param_1 + 0x138),0);
    if ((uVar2 & 1) == 0) {
      lVar11 = *(long *)(param_1 + 0x1b0);
      plVar1 = (long *)(param_1 + 0x1b0);
      plVar3 = (long *)native_sub_432808(_UIDrawCall_OnRenderCallback_TypeInfo_12d7a48);
      native_UIDrawCall_OnRenderCallback___ctor_55489c
                (plVar3,param_1,_Method_UIPanel_OnSetAlphaProp___12e7850,0);
      if (lVar11 == 0) {
        *plVar1 = (long)plVar3;
      }
      else {
        plVar3 = (long *)native_System_Delegate__Combine_a6cf00(lVar11,plVar3,0);
        if ((plVar3 != (long *)0x0) && (*plVar3 != _UIDrawCall_OnRenderCallback_TypeInfo_12d7a48)) {
LAB_00af41a4:
          lVar11 = native_sub_432b04(plVar3);
          if ((bRam0000000001342052 & 1) == 0) {
            native_sub_43273c(&Method_System_Comparison_UIWidget___ctor___12d8b58);
            native_sub_43273c(&System_Comparison_UIWidget__TypeInfo_12d21f8);
            native_sub_43273c(&Method_System_Collections_Generic_List_UIWidget__Sort___12dd440);
            native_sub_43273c(&Method_UIWidget_PanelCompareFunc___12e7960);
            bRam0000000001342052 = 1;
          }
          *(undefined1 *)(lVar11 + 0x198) = 0;
          lVar10 = *(long *)(lVar11 + 0xb0);
          lVar6 = native_sub_432808(_System_Comparison_UIWidget__TypeInfo_12d21f8);
          native_System_Comparison_ABSSequentiable____ctor_bbdf08
                    (lVar6,0,_Method_UIWidget_PanelCompareFunc___12e7960,
                     _Method_System_Comparison_UIWidget___ctor___12d8b58);
          lVar11 = _Method_System_Collections_Generic_List_UIWidget__Sort___12dd440;
          if (lVar10 == 0) {
                    /* WARNING: Subroutine does not return */
            native_sub_432810();
          }
          lVar7 = lVar10;
          if (lVar6 == 0) {
            lVar7 = native_System_ThrowHelper__ThrowArgumentNullException_9fe014(8);
          }
          if (*(int *)(lVar10 + 0x18) < 1) {
            return lVar7;
          }
                    /* WARNING: Could not recover jumptable at 0x00d426c8. Too many branches */
                    /* WARNING: Treating indirect jump as call */
          lVar11 = (*(code *)**(undefined8 **)(*(long *)(*(long *)(lVar11 + 0x18) + 0xc0) + 0x118))
                             (*(undefined8 *)(lVar10 + 0x10),0,*(int *)(lVar10 + 0x18),lVar6);
          return lVar11;
        }
        *plVar1 = (long)plVar3;
      }
      native_sub_4326e0(plVar1,plVar3);
    }
    if (*(long *)(param_1 + 0xb0) != 0) {
      iVar12 = *(int *)(*(long *)(param_1 + 0xb0) + 0x18);
      if (iVar12 < 1) {
        iVar13 = 0;
      }
      else {
        uVar2 = 0;
        iVar13 = 0;
        plVar1 = (long *)(param_1 + 0x1b0);
        do {
          lVar11 = *(long *)(param_1 + 0xb0);
          if (lVar11 == 0) goto LAB_00af41a0;
          if (*(uint *)(lVar11 + 0x18) <= uVar2) {
            native_System_ThrowHelper__ThrowArgumentOutOfRangeException_9fe0f4(0);
          }
          lVar11 = *(long *)(*(long *)(lVar11 + 0x10) + uVar2 * 8 + 0x20);
          if (((*(byte *)(_UnityEngine_Object_TypeInfo_12d54e0 + 0x133) >> 2 & 1) != 0) &&
             (*(int *)(_UnityEngine_Object_TypeInfo_12d54e0 + 0xe0) == 0)) {
            native_sub_4327ec();
          }
          uVar5 = native_UnityEngine_Object__op_Equality_8e9a3c(lVar11,0,0);
          if ((uVar5 & 1) == 0) {
            if (lVar11 == 0) goto LAB_00af41a0;
            uVar14 = *(undefined8 *)(lVar11 + 0x160);
            if (((*(byte *)(_UnityEngine_Object_TypeInfo_12d54e0 + 0x133) >> 2 & 1) != 0) &&
               (*(int *)(_UnityEngine_Object_TypeInfo_12d54e0 + 0xe0) == 0)) {
              native_sub_4327ec();
            }
            uVar5 = native_UnityEngine_Object__op_Equality_8e9a3c(uVar14,param_2,0);
            if ((uVar5 & 1) != 0) {
              uVar5 = native_UIWidget__get_isVisible_9499c8(lVar11,0);
              if (((uVar5 & 1) == 0) ||
                 (uVar5 = native_UIWidget__get_hasVertices_949a68(lVar11,0), (uVar5 & 1) == 0)) {
                plVar4 = (long *)(lVar11 + 0x160);
                plVar3 = (long *)0x0;
                *plVar4 = 0;
              }
              else {
                iVar13 = iVar13 + 1;
                if (*(char *)(param_1 + 0x99) == '\0') {
                  if (*(char *)(param_1 + 0x9a) == '\0') {
                    uVar14 = 0;
                  }
                  else {
                    uVar14 = *(undefined8 *)(param_2 + 0x68);
                  }
                  uVar8 = 0;
                  uVar9 = 0;
                }
                else {
                  uVar8 = *(undefined8 *)(param_2 + 0x50);
                  uVar9 = *(undefined8 *)(param_2 + 0x58);
                  if (*(char *)(param_1 + 0x9a) == '\0') {
                    uVar14 = 0;
                  }
                  else {
                    uVar14 = *(undefined8 *)(param_2 + 0x68);
                  }
                }
                native_UIWidget__WriteToBuffers_94ccd0
                          (lVar11,*(undefined8 *)(param_2 + 0x48),*(undefined8 *)(param_2 + 0x60),
                           *(undefined8 *)(param_2 + 0x70),uVar8,uVar9,uVar14,0);
                plVar3 = *(long **)(lVar11 + 0xd0);
                if (plVar3 == (long *)0x0) goto LAB_00af4018;
                plVar4 = plVar1;
                if (*plVar1 == 0) {
                  *plVar1 = (long)plVar3;
                }
                else {
                  plVar3 = (long *)native_System_Delegate__Combine_a6cf00(*plVar1,plVar3,0);
                  if ((plVar3 != (long *)0x0) &&
                     (*plVar3 != _UIDrawCall_OnRenderCallback_TypeInfo_12d7a48)) goto LAB_00af41a4;
                  *plVar1 = (long)plVar3;
                }
              }
              native_sub_4326e0(plVar4,plVar3);
            }
LAB_00af4018:
            uVar2 = uVar2 + 1;
          }
          else {
            if (*(long *)(param_1 + 0xb0) == 0) goto LAB_00af41a0;
            native_System_Collections_Generic_List_int_____RemoveAt_d42280
                      (*(long *)(param_1 + 0xb0),uVar2 & 0xffffffff,
                       _Method_System_Collections_Generic_List_UIWidget__RemoveAt___12dd438);
            iVar12 = iVar12 + -1;
          }
        } while ((long)uVar2 < (long)iVar12);
      }
      if (*(long *)(param_2 + 0x48) != 0) {
        if (*(int *)(*(long *)(param_2 + 0x48) + 0x18) == 0) {
          return 0;
        }
        native_UIDrawCall__UpdateGeometry_9e6d68(param_2,iVar13,param_3 & 1,0);
        *(undefined8 *)(param_2 + 0xe0) = *(undefined8 *)(param_1 + 0x1b0);
        native_sub_4326e0(param_2 + 0xe0);
        *(undefined8 *)(param_1 + 0x1b0) = 0;
        native_sub_4326e0(param_1 + 0x1b0,0);
        return 1;
      }
    }
  }
LAB_00af41a0:
                    /* WARNING: Subroutine does not return */
  native_sub_432810();
}



/* UIPanel$$UpdateDrawCalls @ 0xaef0d4
 * void UIPanel__UpdateDrawCalls (UIPanel_o* __this, int32_t sortOrder, const MethodInfo* method); */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* UIPanel$$UpdateDrawCalls
   void UIPanel__UpdateDrawCalls (UIPanel_o* __this, int32_t sortOrder, const MethodInfo* method);
    */

void native_UIPanel__UpdateDrawCalls_aef0d4
               (undefined1 param_1 [16],ulong param_2,ulong param_3,ulong param_4,long param_5,
               int param_6)

{
  uint uVar1;
  bool bVar2;
  int iVar3;
  int iVar4;
  long lVar5;
  ulong uVar6;
  long lVar7;
  long lVar8;
  ulong uVar9;
  undefined8 uVar10;
  uint uVar11;
  undefined4 uVar12;
  ulong uVar13;
  undefined8 uVar14;
  undefined8 uVar15;
  ulong uVar16;
  ulong uVar17;
  float fVar18;
  float fStack_48;
  float fStack_44;
  
  if ((bRam0000000001342057 & 1) == 0) {
    native_sub_43273c(&Method_System_Collections_Generic_List_UIDrawCall__get_Count___12dd2c8);
    native_sub_43273c(&Method_System_Collections_Generic_List_UIDrawCall__get_Item___12dd2d0);
    native_sub_43273c(&UnityEngine_Object_TypeInfo_12d54e0);
    bRam0000000001342057 = 1;
  }
  lVar5 = native_UIRect__get_cachedTransform_c27c58(param_5,0);
  uVar6 = native_UIPanel__get_usedForUI_aefb4c(param_5);
  if (*(int *)(param_5 + 0x140) == 0) {
    uVar12 = native_UnityEngine_Vector4__get_zero_777178(0);
    *(int *)(param_5 + 0x108) = (int)param_3;
  }
  else {
    uVar12 = native_UIPanel__get_finalClipRegion_af03c8(param_5);
    fVar18 = (float)param_3 * 0.5;
    param_3 = (ulong)(uint)fVar18;
    *(float *)(param_5 + 0x10c) = (float)param_4;
    *(float *)(param_5 + 0x108) = fVar18;
    param_4 = (ulong)(uint)((float)param_4 * 0.5);
  }
  *(undefined4 *)(param_5 + 0x100) = uVar12;
  *(int *)(param_5 + 0x104) = (int)param_2;
  *(int *)(param_5 + 0x10c) = (int)param_4;
  iVar3 = native_UnityEngine_Screen__get_width_76a5e4(0);
  iVar4 = native_UnityEngine_Screen__get_height_76a618(0);
  if (*(float *)(param_5 + 0x108) == 0.0) {
    param_2 = 0x3f000000;
    *(float *)(param_5 + 0x108) = (float)iVar3 * 0.5;
  }
  if (*(float *)(param_5 + 0x10c) == 0.0) {
    param_2 = 0x3f000000;
    *(float *)(param_5 + 0x10c) = (float)iVar4 * 0.5;
  }
  if ((uVar6 & 1) == 0) {
    if (lVar5 == 0) goto LAB_00aef47c;
    fStack_44 = (float)native_UnityEngine_Transform__get_position_77169c(lVar5,0);
    fStack_48 = (float)param_2;
    uVar6 = param_3;
  }
  else {
    lVar7 = native_UIRect__get_cachedTransform_c27c58(param_5,0);
    if (lVar7 == 0) goto LAB_00aef47c;
    lVar7 = native_UnityEngine_Transform__get_parent_765eb0(lVar7,0);
    lVar8 = native_UIRect__get_cachedTransform_c27c58(param_5,0);
    if (lVar8 == 0) goto LAB_00aef47c;
    uVar13 = native_UnityEngine_Transform__get_localPosition_7717f4(lVar8,0);
    uVar6 = param_2;
    uVar17 = param_3;
    uVar16 = param_2;
    if (*(int *)(param_5 + 0x140) != 0) {
      iVar3 = native_UnityEngine_Mathf__RoundToInt_8e50f0(uVar13,0);
      uVar13 = (ulong)(uint)(float)iVar3;
      iVar3 = native_UnityEngine_Mathf__RoundToInt_8e50f0(param_2,0);
      uVar16 = (ulong)(uint)(float)iVar3;
    }
    if (((*(byte *)(_UnityEngine_Object_TypeInfo_12d54e0 + 0x133) >> 2 & 1) != 0) &&
       (*(int *)(_UnityEngine_Object_TypeInfo_12d54e0 + 0xe0) == 0)) {
      native_sub_4327ec();
    }
    uVar9 = native_UnityEngine_Object__op_Inequality_8d76fc(lVar7,0,0);
    param_2 = uVar6;
    if ((uVar9 & 1) != 0) {
      if (lVar7 == 0) goto LAB_00aef47c;
      uVar13 = native_UnityEngine_Transform__TransformPoint_7728d8(uVar13,uVar16,param_3,lVar7,0);
      param_2 = uVar16;
      uVar17 = param_3;
    }
    fStack_44 = (float)native_UIPanel__get_drawCallOffset_aefbf0(param_5);
    if (lVar5 == 0) goto LAB_00aef47c;
    fStack_44 = (float)uVar13 + fStack_44;
    fStack_48 = (float)uVar16 + (float)param_2;
    fVar18 = (float)param_3;
    param_3 = uVar17;
    uVar6 = (ulong)(uint)(fVar18 + (float)uVar17);
  }
  uVar14 = native_UnityEngine_Transform__get_rotation_771a30(lVar5,0);
  uVar17 = param_2;
  uVar16 = param_3;
  uVar15 = native_UnityEngine_Transform__get_lossyScale_772cac(lVar5,0);
  lVar5 = *(long *)(param_5 + 0xb8);
  if (lVar5 != 0) {
    lVar7 = 0;
    do {
      uVar11 = (uint)lVar7;
      if ((int)*(uint *)(lVar5 + 0x18) <= (int)uVar11) {
        return;
      }
      if (*(uint *)(lVar5 + 0x18) <= uVar11) {
        native_System_ThrowHelper__ThrowArgumentOutOfRangeException_9fe0f4(0);
      }
      lVar5 = *(long *)(*(long *)(lVar5 + 0x10) + lVar7 * 8 + 0x20);
      if ((lVar5 == 0) ||
         (lVar8 = native_UIDrawCall__get_cachedTransform_9e5edc(lVar5,0), lVar8 == 0)) break;
      native_UnityEngine_Transform__set_position_77174c(fStack_44,fStack_48,uVar6,lVar8,0);
      native_UnityEngine_Transform__set_rotation_771b8c(uVar14,param_2,param_3,param_4,lVar8,0);
      native_UnityEngine_Transform__set_localScale_771e30(uVar15,uVar17,uVar16,lVar8,0);
      uVar1 = 0;
      if (*(int *)(param_5 + 0xa8) != 2) {
        uVar1 = uVar11;
      }
      native_UIDrawCall__set_renderQueue_9e5b4c(lVar5,uVar1 + *(int *)(param_5 + 0xac),0);
      bVar2 = false;
      if (*(char *)(param_5 + 0xa2) != '\0') {
        if (*(int *)(param_5 + 0x140) == 0) {
          bVar2 = true;
        }
        else {
          bVar2 = *(int *)(param_5 + 0x140) == 4;
        }
      }
      *(bool *)(lVar5 + 0x40) = bVar2;
      if (*(char *)(param_5 + 0x19a) == '\0') {
        iVar3 = 0;
      }
      else if ((*(int *)(param_5 + 0x160) != 0) || (iVar3 = param_6, *(int *)(param_5 + 0xa8) != 0))
      {
        iVar3 = *(int *)(param_5 + 0x160);
      }
      native_UIDrawCall__set_sortingOrder_9e5c08(lVar5,iVar3,0);
      if (*(char *)(param_5 + 0x19a) == '\0') {
        uVar10 = 0;
      }
      else {
        uVar10 = *(undefined8 *)(param_5 + 0x168);
      }
      native_UIDrawCall__set_sortingLayerName_9e5d7c(lVar5,uVar10,0);
      *(undefined8 *)(lVar5 + 0x38) = *(undefined8 *)(param_5 + 0x128);
      native_sub_4326e0(lVar5 + 0x38);
      native_UIDrawCall__set_shadowMode_9e61ec(lVar5,*(undefined4 *)(param_5 + 0x9c),0);
      lVar5 = *(long *)(param_5 + 0xb8);
      lVar7 = lVar7 + 1;
    } while (lVar5 != 0);
  }
LAB_00aef47c:
                    /* WARNING: Subroutine does not return */
  native_sub_432810();
}



/* UIPanel$$UpdateLayers @ 0xaf3060
 * void UIPanel__UpdateLayers (UIPanel_o* __this, const MethodInfo* method); */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* UIPanel$$UpdateLayers
   void UIPanel__UpdateLayers (UIPanel_o* __this, const MethodInfo* method); */

void native_UIPanel__UpdateLayers_af3060(long param_1)

{
  int iVar1;
  int iVar2;
  undefined4 uVar3;
  long lVar4;
  ulong uVar5;
  undefined8 uVar6;
  long lVar7;
  ulong uVar8;
  
  if ((bRam0000000001342058 & 1) == 0) {
    native_sub_43273c(&Method_System_Collections_Generic_List_UIWidget__get_Count___12dd448);
    native_sub_43273c(&Method_System_Collections_Generic_List_UIDrawCall__get_Count___12dd2c8);
    native_sub_43273c(&Method_System_Collections_Generic_List_UIWidget__get_Item___12dd450);
    native_sub_43273c(&Method_System_Collections_Generic_List_UIDrawCall__get_Item___12dd2d0);
    native_sub_43273c(&UnityEngine_Object_TypeInfo_12d54e0);
    bRam0000000001342058 = 1;
  }
  iVar1 = *(int *)(param_1 + 0x184);
  lVar4 = native_UIRect__get_cachedGameObject_c2d1c0(param_1,0);
  if (lVar4 != 0) {
    iVar2 = native_UnityEngine_GameObject__get_layer_8de608(lVar4,0);
    if (iVar1 == iVar2) {
      return;
    }
    if (*(long *)(param_1 + 0x40) != 0) {
      uVar3 = native_UnityEngine_GameObject__get_layer_8de608(*(long *)(param_1 + 0x40),0);
      lVar4 = *(long *)(param_1 + 0xb0);
      *(undefined4 *)(param_1 + 0x184) = uVar3;
      if (lVar4 != 0) {
        iVar1 = *(int *)(lVar4 + 0x18);
        if (iVar1 < 1) {
LAB_00af31e0:
          native_UIRect__ResetAnchors_c2d260(param_1,0);
          lVar4 = *(long *)(param_1 + 0xb8);
          if (lVar4 != 0) {
            lVar7 = 0;
            do {
              if ((int)*(uint *)(lVar4 + 0x18) <= (int)(uint)lVar7) {
                return;
              }
              if (*(uint *)(lVar4 + 0x18) <= (uint)lVar7) {
                native_System_ThrowHelper__ThrowArgumentOutOfRangeException_9fe0f4(0);
              }
              lVar4 = *(long *)(*(long *)(lVar4 + 0x10) + lVar7 * 8 + 0x20);
              if ((lVar4 == 0) ||
                 (lVar4 = native_UnityEngine_Component__get_gameObject_8da66c(lVar4,0), lVar4 == 0))
              break;
              native_UnityEngine_GameObject__set_layer_8de648
                        (lVar4,*(undefined4 *)(param_1 + 0x184),0);
              lVar4 = *(long *)(param_1 + 0xb8);
              lVar7 = lVar7 + 1;
            } while (lVar4 != 0);
          }
        }
        else {
          uVar8 = 0;
          do {
            if (*(uint *)(lVar4 + 0x18) <= uVar8) {
              native_System_ThrowHelper__ThrowArgumentOutOfRangeException_9fe0f4(0);
            }
            lVar4 = *(long *)(*(long *)(lVar4 + 0x10) + uVar8 * 8 + 0x20);
            if (((*(byte *)(_UnityEngine_Object_TypeInfo_12d54e0 + 0x133) >> 2 & 1) != 0) &&
               (*(int *)(_UnityEngine_Object_TypeInfo_12d54e0 + 0xe0) == 0)) {
              native_sub_4327ec();
            }
            uVar5 = native_UnityEngine_Object__op_Implicit_8e1b98(lVar4,0);
            if ((uVar5 & 1) != 0) {
              if (lVar4 == 0) break;
              uVar6 = native_UIRect__get_parent_c2afcc(lVar4,0);
              if (((*(byte *)(_UnityEngine_Object_TypeInfo_12d54e0 + 0x133) >> 2 & 1) != 0) &&
                 (*(int *)(_UnityEngine_Object_TypeInfo_12d54e0 + 0xe0) == 0)) {
                native_sub_4327ec(_UnityEngine_Object_TypeInfo_12d54e0);
              }
              uVar5 = native_UnityEngine_Object__op_Equality_8e9a3c(uVar6,param_1,0);
              if ((uVar5 & 1) != 0) {
                lVar4 = native_UnityEngine_Component__get_gameObject_8da66c(lVar4,0);
                if (lVar4 == 0) break;
                native_UnityEngine_GameObject__set_layer_8de648
                          (lVar4,*(undefined4 *)(param_1 + 0x184),0);
              }
            }
            uVar8 = uVar8 + 1;
            if ((long)iVar1 <= (long)uVar8) goto LAB_00af31e0;
            lVar4 = *(long *)(param_1 + 0xb0);
          } while (lVar4 != 0);
        }
      }
    }
  }
                    /* WARNING: Subroutine does not return */
  native_sub_432810();
}



/* UIPanel$$UpdateWidgets @ 0xaf3260
 * void UIPanel__UpdateWidgets (UIPanel_o* __this, const MethodInfo* method); */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* UIPanel$$UpdateWidgets
   void UIPanel__UpdateWidgets (UIPanel_o* __this, const MethodInfo* method); */

void native_UIPanel__UpdateWidgets_af3260(long param_1)

{
  int iVar1;
  int iVar2;
  undefined4 uVar3;
  uint uVar4;
  ulong uVar5;
  bool bVar6;
  long lVar7;
  bool bVar8;
  undefined8 uVar9;
  bool bVar10;
  uint uVar11;
  float fVar12;
  
  if ((bRam0000000001342059 & 1) == 0) {
    native_sub_43273c(&Method_System_Collections_Generic_List_UIWidget__get_Count___12dd448);
    native_sub_43273c(&Method_System_Collections_Generic_List_UIWidget__get_Item___12dd450);
    native_sub_43273c(&UnityEngine_Object_TypeInfo_12d54e0);
    native_sub_43273c(&UIScrollView_TypeInfo_12d64b8);
    bRam0000000001342059 = 1;
  }
  iVar2 = native_UIPanel__get_clipCount_aefea0(param_1);
  if (*(char *)(param_1 + 0xa1) == '\0') {
    uVar11 = 0;
    bVar6 = false;
    while( true ) {
      if (((*(byte *)(_UIScrollView_TypeInfo_12d64b8 + 0x133) >> 2 & 1) != 0) &&
         (*(int *)(_UIScrollView_TypeInfo_12d64b8 + 0xe0) == 0)) {
        native_sub_4327ec();
      }
      lVar7 = **(long **)(_UIScrollView_TypeInfo_12d64b8 + 0xb8);
      if (lVar7 == 0) break;
      if (*(int *)(lVar7 + 0x18) <= (int)uVar11) {
        bVar10 = bVar6;
        if (bVar6 != (*(char *)(param_1 + 0x1b8) != '\0')) goto LAB_00af32ec;
        goto LAB_00af32fc;
      }
      if (((*(byte *)(_UIScrollView_TypeInfo_12d64b8 + 0x133) >> 2 & 1) != 0) &&
         (*(int *)(_UIScrollView_TypeInfo_12d64b8 + 0xe0) == 0)) {
        native_sub_4327ec();
        lVar7 = **(long **)(_UIScrollView_TypeInfo_12d64b8 + 0xb8);
        if (lVar7 == 0) break;
      }
      lVar7 = *(long *)(lVar7 + 0x10);
      if (lVar7 == 0) break;
      if (*(uint *)(lVar7 + 0x18) <= uVar11) {
        uVar9 = native_sub_43283c();
                    /* WARNING: Subroutine does not return */
        native_sub_4327dc(uVar9,0);
      }
      lVar7 = *(long *)(lVar7 + (long)(int)uVar11 * 8 + 0x20);
      if (lVar7 == 0) break;
      uVar9 = *(undefined8 *)(lVar7 + 0x98);
      if (((*(byte *)(_UnityEngine_Object_TypeInfo_12d54e0 + 0x133) >> 2 & 1) != 0) &&
         (*(int *)(_UnityEngine_Object_TypeInfo_12d54e0 + 0xe0) == 0)) {
        native_sub_4327ec();
      }
      uVar5 = native_UnityEngine_Object__op_Equality_8e9a3c(uVar9,param_1,0);
      if (((uVar5 & 1) != 0) &&
         (uVar5 = native_UIScrollView__get_isDragging_c31798(lVar7,0), (uVar5 & 1) != 0)) {
        bVar6 = true;
      }
      uVar11 = uVar11 + 1;
    }
  }
  else {
    bVar6 = false;
    bVar10 = false;
    if (*(char *)(param_1 + 0x1b8) != '\0') {
LAB_00af32ec:
      *(bool *)(param_1 + 0x1b8) = bVar6;
      *(undefined1 *)(param_1 + 0x171) = 1;
      bVar10 = bVar6;
    }
LAB_00af32fc:
    uVar3 = native_UnityEngine_Time__get_frameCount_770964(0);
    lVar7 = *(long *)(param_1 + 0xb0);
    if (lVar7 != 0) {
      iVar1 = *(int *)(lVar7 + 0x18);
      if (iVar1 < 1) {
LAB_00af35d0:
        *(undefined1 *)(param_1 + 0x171) = 0;
        return;
      }
      uVar11 = 0;
      bVar6 = false;
      do {
        if (*(uint *)(lVar7 + 0x18) <= uVar11) {
          native_System_ThrowHelper__ThrowArgumentOutOfRangeException_9fe0f4(0);
        }
        lVar7 = *(long *)(*(long *)(lVar7 + 0x10) + (long)(int)uVar11 * 8 + 0x20);
        if (lVar7 == 0) break;
        uVar9 = *(undefined8 *)(lVar7 + 0xf0);
        if (((*(byte *)(_UnityEngine_Object_TypeInfo_12d54e0 + 0x133) >> 2 & 1) != 0) &&
           (*(int *)(_UnityEngine_Object_TypeInfo_12d54e0 + 0xe0) == 0)) {
          native_sub_4327ec();
        }
        uVar5 = native_UnityEngine_Object__op_Equality_8e9a3c(uVar9,param_1,0);
        if (((uVar5 & 1) != 0) &&
           (uVar5 = native_UnityEngine_Behaviour__get_enabled_8d7acc(lVar7,0), (uVar5 & 1) != 0)) {
          uVar5 = native_UIWidget__UpdateTransform_94c678(lVar7,uVar3,0);
          if ((((uVar5 & 1) != 0) || (*(char *)(param_1 + 0x171) != '\0')) ||
             ((*(char *)(param_1 + 0x1a8) != '\0' && (*(char *)(param_1 + 0xa2) == '\0')))) {
            if (bVar10 == false) {
              fVar12 = (float)native_UIWidget__CalculateCumulativeAlpha_94af50(lVar7,uVar3,0);
              bVar8 = 0.001 < fVar12;
              if ((*(char *)(param_1 + 0xa2) != '\0') ||
                 ((iVar2 == 0 && (*(char *)(lVar7 + 0xd9) == '\0')))) goto LAB_00af33e4;
              uVar4 = native_UIPanel__IsVisible_af1840(param_1,lVar7);
              uVar4 = uVar4 & 1;
            }
            else {
              bVar8 = true;
LAB_00af33e4:
              uVar4 = 1;
            }
            native_UIWidget__UpdateVisibility_94b00c(lVar7,bVar8,uVar4,0);
          }
          uVar5 = native_UIWidget__UpdateGeometry_94c928(lVar7,uVar3,0);
          if ((uVar5 & 1) != 0) {
            if (*(char *)(param_1 + 0x170) == '\0') {
              uVar9 = *(undefined8 *)(lVar7 + 0x160);
              if (((*(byte *)(_UnityEngine_Object_TypeInfo_12d54e0 + 0x133) >> 2 & 1) != 0) &&
                 (*(int *)(_UnityEngine_Object_TypeInfo_12d54e0 + 0xe0) == 0)) {
                native_sub_4327ec();
              }
              uVar5 = native_UnityEngine_Object__op_Inequality_8d76fc(uVar9,0,0);
              if ((uVar5 & 1) != 0) {
                if (*(long *)(lVar7 + 0x160) != 0) {
                  bVar6 = true;
                  *(undefined1 *)(*(long *)(lVar7 + 0x160) + 0xd8) = 1;
                  goto LAB_00af34a0;
                }
                break;
              }
              native_UIPanel__FindDrawCall_af4308(param_1,lVar7);
            }
            bVar6 = true;
          }
        }
LAB_00af34a0:
        uVar11 = uVar11 + 1;
        if (iVar1 <= (int)uVar11) {
          if ((bVar6) && (*(long *)(param_1 + 0x90) != 0)) {
            native_UIPanel_OnGeometryUpdated__Invoke_558110(*(long *)(param_1 + 0x90),0);
          }
          goto LAB_00af35d0;
        }
        lVar7 = *(long *)(param_1 + 0xb0);
      } while (lVar7 != 0);
    }
  }
                    /* WARNING: Subroutine does not return */
  native_sub_432810();
}



/* UIPanel$$FindDrawCall @ 0xaf4308
 * UIDrawCall_o* UIPanel__FindDrawCall (UIPanel_o* __this, UIWidget_o* w, const MethodInfo* method); */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* UIPanel$$FindDrawCall
   UIDrawCall_o* UIPanel__FindDrawCall (UIPanel_o* __this, UIWidget_o* w, const MethodInfo* method);
    */

long native_UIPanel__FindDrawCall_af4308(long param_1,long *param_2)

{
  int iVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  int iVar5;
  int iVar6;
  long lVar7;
  long lVar8;
  undefined8 uVar9;
  ulong uVar10;
  long lVar11;
  
  if ((bRam000000000134205a & 1) == 0) {
    native_sub_43273c(&Method_System_Collections_Generic_List_UIDrawCall__get_Count___12dd2c8);
    native_sub_43273c(&Method_System_Collections_Generic_List_UIDrawCall__get_Item___12dd2d0);
    native_sub_43273c(&UnityEngine_Object_TypeInfo_12d54e0);
    bRam000000000134205a = 1;
  }
  if (param_2 != (long *)0x0) {
    uVar2 = (**(code **)(*param_2 + 0x308))(param_2,*(undefined8 *)(*param_2 + 0x310));
    uVar3 = (**(code **)(*param_2 + 0x328))(param_2,*(undefined8 *)(*param_2 + 0x330));
    uVar4 = (**(code **)(*param_2 + 0x348))(param_2,*(undefined8 *)(*param_2 + 0x350));
    iVar1 = (**(code **)(*param_2 + 0x2c8))(param_2,*(undefined8 *)(*param_2 + 0x2d0));
    uVar10 = 0;
    lVar11 = 0x100000000;
    do {
      lVar7 = *(long *)(param_1 + 0xb8);
      if (lVar7 == 0) goto LAB_00af45b8;
      if ((long)(int)*(uint *)(lVar7 + 0x18) <= (long)uVar10) goto LAB_00af458c;
      if (*(uint *)(lVar7 + 0x18) <= uVar10) {
        native_System_ThrowHelper__ThrowArgumentOutOfRangeException_9fe0f4(0);
      }
      lVar7 = *(long *)(*(long *)(lVar7 + 0x10) + uVar10 * 8 + 0x20);
      if (uVar10 == 0) {
        iVar6 = -0x80000000;
      }
      else {
        lVar8 = *(long *)(param_1 + 0xb8);
        if (lVar8 == 0) goto LAB_00af45b8;
        if (*(uint *)(lVar8 + 0x18) <= (int)uVar10 - 1U) {
          native_System_ThrowHelper__ThrowArgumentOutOfRangeException_9fe0f4(0);
        }
        lVar8 = *(long *)(*(long *)(lVar8 + 0x10) + uVar10 * 8 + 0x18);
        if (lVar8 == 0) goto LAB_00af45b8;
        iVar6 = *(int *)(lVar8 + 0x20) + 1;
      }
      lVar8 = *(long *)(param_1 + 0xb8);
      if (lVar8 == 0) goto LAB_00af45b8;
      uVar10 = uVar10 + 1;
      if (uVar10 == *(uint *)(lVar8 + 0x18)) {
        iVar5 = 0x7fffffff;
      }
      else {
        if (*(uint *)(lVar8 + 0x18) <= uVar10) {
          native_System_ThrowHelper__ThrowArgumentOutOfRangeException_9fe0f4(0);
        }
        lVar8 = *(long *)(*(long *)(lVar8 + 0x10) + (lVar11 >> 0x1d) + 0x20);
        if (lVar8 == 0) goto LAB_00af45b8;
        iVar5 = *(int *)(lVar8 + 0x1c) + -1;
      }
      lVar11 = lVar11 + 0x100000000;
    } while ((iVar1 < iVar6) || (iVar5 < iVar1));
    if (lVar7 != 0) {
      uVar9 = *(undefined8 *)(lVar7 + 0x78);
      if (((*(byte *)(_UnityEngine_Object_TypeInfo_12d54e0 + 0x133) >> 2 & 1) != 0) &&
         (*(int *)(_UnityEngine_Object_TypeInfo_12d54e0 + 0xe0) == 0)) {
        native_sub_4327ec();
      }
      uVar10 = native_UnityEngine_Object__op_Equality_8e9a3c(uVar9,uVar2,0);
      if ((uVar10 & 1) != 0) {
        uVar2 = *(undefined8 *)(lVar7 + 0x88);
        if (((*(byte *)(_UnityEngine_Object_TypeInfo_12d54e0 + 0x133) >> 2 & 1) != 0) &&
           (*(int *)(_UnityEngine_Object_TypeInfo_12d54e0 + 0xe0) == 0)) {
          native_sub_4327ec();
        }
        uVar10 = native_UnityEngine_Object__op_Equality_8e9a3c(uVar2,uVar4,0);
        if ((uVar10 & 1) != 0) {
          uVar2 = *(undefined8 *)(lVar7 + 0x80);
          if (((*(byte *)(_UnityEngine_Object_TypeInfo_12d54e0 + 0x133) >> 2 & 1) != 0) &&
             (*(int *)(_UnityEngine_Object_TypeInfo_12d54e0 + 0xe0) == 0)) {
            native_sub_4327ec();
          }
          uVar10 = native_UnityEngine_Object__op_Equality_8e9a3c(uVar2,uVar3,0);
          if ((uVar10 & 1) != 0) {
            uVar10 = native_UIWidget__get_isVisible_9499c8(param_2,0);
            if ((uVar10 & 1) == 0) {
              return 0;
            }
            param_2[0x2c] = lVar7;
            native_sub_4326e0(param_2 + 0x2c,lVar7);
            uVar10 = native_UIWidget__get_hasVertices_949a68(param_2,0);
            if ((uVar10 & 1) == 0) {
              return lVar7;
            }
            *(undefined1 *)(lVar7 + 0xd8) = 1;
            return lVar7;
          }
        }
      }
LAB_00af458c:
      *(undefined1 *)(param_1 + 0x170) = 1;
      return 0;
    }
  }
LAB_00af45b8:
                    /* WARNING: Subroutine does not return */
  native_sub_432810();
}



/* UIPanel$$AddWidget @ 0xaf45bc
 * void UIPanel__AddWidget (UIPanel_o* __this, UIWidget_o* w, const MethodInfo* method); */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* UIPanel$$AddWidget
   void UIPanel__AddWidget (UIPanel_o* __this, UIWidget_o* w, const MethodInfo* method); */

void native_UIPanel__AddWidget_af45bc(long param_1,long *param_2)

{
  uint uVar1;
  int iVar2;
  long lVar3;
  uint uVar4;
  long lVar5;
  
  if ((bRam000000000134205b & 1) == 0) {
    native_sub_43273c(&Method_System_Collections_Generic_List_UIWidget__Add___12dd418);
    native_sub_43273c(&Method_System_Collections_Generic_List_UIWidget__Insert___12dd428);
    native_sub_43273c(&Method_System_Collections_Generic_List_UIWidget__get_Count___12dd448);
    native_sub_43273c(&Method_System_Collections_Generic_List_UIWidget__get_Item___12dd450);
    bRam000000000134205b = 1;
  }
  lVar3 = *(long *)(param_1 + 0xb0);
  *(undefined1 *)(param_1 + 0x199) = 1;
  if (lVar3 == 0) goto LAB_00af4760;
  if (*(int *)(lVar3 + 0x18) == 0) {
    native_System_Collections_Generic_List_int_____Add_d40c00
              (lVar3,param_2,_Method_System_Collections_Generic_List_UIWidget__Add___12dd418);
  }
  else if (*(char *)(param_1 + 0x198) == '\0') {
    iVar2 = native_UIWidget__PanelCompareFunc_94b448
                      (param_2,*(undefined8 *)(*(long *)(lVar3 + 0x10) + 0x20),0);
    lVar3 = *(long *)(param_1 + 0xb0);
    if (lVar3 == 0) goto LAB_00af4760;
    if (iVar2 == -1) {
      uVar4 = 0;
    }
    else {
      uVar4 = *(uint *)(lVar3 + 0x18) - 1;
      lVar5 = (-(ulong)(uVar4 >> 0x1f) & 0xfffffff800000000 | (ulong)uVar4 << 3) + 0x20;
      uVar1 = *(uint *)(lVar3 + 0x18);
      do {
        uVar4 = uVar1;
        if ((int)uVar4 < 1) goto LAB_00af4728;
        lVar3 = *(long *)(param_1 + 0xb0);
        if (lVar3 == 0) goto LAB_00af4760;
        if (*(uint *)(lVar3 + 0x18) <= uVar4 - 1) {
          native_System_ThrowHelper__ThrowArgumentOutOfRangeException_9fe0f4(0);
        }
        iVar2 = native_UIWidget__PanelCompareFunc_94b448
                          (param_2,*(undefined8 *)(*(long *)(lVar3 + 0x10) + lVar5),0);
        lVar5 = lVar5 + -8;
        uVar1 = uVar4 - 1;
      } while (iVar2 == -1);
      lVar3 = *(long *)(param_1 + 0xb0);
      if (lVar3 == 0) goto LAB_00af4760;
    }
    native_System_Collections_Generic_List_EventSystem___Insert_d417a4
              (lVar3,uVar4,param_2,
               _Method_System_Collections_Generic_List_UIWidget__Insert___12dd428);
  }
  else {
    native_System_Collections_Generic_List_int_____Add_d40c00
              (lVar3,param_2,_Method_System_Collections_Generic_List_UIWidget__Add___12dd418);
    native_UIPanel__SortWidgets_af41ac(param_1);
  }
LAB_00af4728:
  native_UIPanel__FindDrawCall_af4308(param_1,param_2);
  if (param_2 != (long *)0x0) {
                    /* WARNING: Could not recover jumptable at 0x00af475c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (**(code **)(*param_2 + 0x408))(param_2,param_1,*(undefined8 *)(*param_2 + 0x410));
    return;
  }
LAB_00af4760:
                    /* WARNING: Subroutine does not return */
  native_sub_432810();
}



/* UIPanel$$RemoveWidget @ 0xaf4764
 * void UIPanel__RemoveWidget (UIPanel_o* __this, UIWidget_o* w, const MethodInfo* method); */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* UIPanel$$RemoveWidget
   void UIPanel__RemoveWidget (UIPanel_o* __this, UIWidget_o* w, const MethodInfo* method); */

void native_UIPanel__RemoveWidget_af4764(long param_1,long *param_2)

{
  int iVar1;
  ulong uVar2;
  long lVar3;
  
  if ((bRam000000000134205c & 1) == 0) {
    native_sub_43273c(&Method_System_Collections_Generic_List_UIWidget__Remove___12dd430);
    native_sub_43273c(&UnityEngine_Object_TypeInfo_12d54e0);
    bRam000000000134205c = 1;
  }
  if (*(long *)(param_1 + 0xb0) != 0) {
    uVar2 = native_System_Collections_Generic_List_BMSymbol___Remove_d41f3c
                      (*(long *)(param_1 + 0xb0),param_2,
                       _Method_System_Collections_Generic_List_UIWidget__Remove___12dd430);
    if ((uVar2 & 1) == 0) {
      return;
    }
    if (param_2 != (long *)0x0) {
      lVar3 = param_2[0x2c];
      if (((*(byte *)(_UnityEngine_Object_TypeInfo_12d54e0 + 0x133) >> 2 & 1) != 0) &&
         (*(int *)(_UnityEngine_Object_TypeInfo_12d54e0 + 0xe0) == 0)) {
        native_sub_4327ec();
      }
      uVar2 = native_UnityEngine_Object__op_Inequality_8d76fc(lVar3,0,0);
      if ((uVar2 & 1) == 0) {
        return;
      }
      iVar1 = (**(code **)(*param_2 + 0x2c8))(param_2,*(undefined8 *)(*param_2 + 0x2d0));
      lVar3 = param_2[0x2c];
      if (lVar3 != 0) {
        if ((iVar1 == *(int *)(lVar3 + 0x1c)) || (iVar1 == *(int *)(lVar3 + 0x20))) {
          *(undefined1 *)(param_1 + 0x170) = 1;
          lVar3 = param_2[0x2c];
          if (lVar3 == 0) goto LAB_00af4898;
        }
        *(undefined1 *)(lVar3 + 0xd8) = 1;
        param_2[0x2c] = 0;
        native_sub_4326e0(param_2 + 0x2c,0);
                    /* WARNING: Could not recover jumptable at 0x00af4884. Too many branches */
                    /* WARNING: Treating indirect jump as call */
        (**(code **)(*param_2 + 0x418))(param_2,param_1,*(undefined8 *)(*param_2 + 0x420));
        return;
      }
    }
  }
LAB_00af4898:
                    /* WARNING: Subroutine does not return */
  native_sub_432810();
}



/* UIPanel$$Refresh @ 0xaf489c
 * void UIPanel__Refresh (UIPanel_o* __this, const MethodInfo* method); */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* UIPanel$$Refresh
   void UIPanel__Refresh (UIPanel_o* __this, const MethodInfo* method); */

void native_UIPanel__Refresh_af489c(long param_1)

{
  int iVar1;
  int iVar2;
  bool bVar3;
  int iVar4;
  undefined4 uVar5;
  ulong uVar6;
  long lVar7;
  int iVar8;
  long lVar9;
  uint uVar10;
  
  if ((bRam000000000134205d & 1) == 0) {
    native_sub_43273c(&Method_System_Collections_Generic_List_UIPanel__get_Count___12dd368);
    native_sub_43273c(&Method_System_Collections_Generic_List_UIPanel__get_Item___12dd370);
    native_sub_43273c(&UIPanel_TypeInfo_12d6478);
    bRam000000000134205d = 1;
  }
  *(undefined1 *)(param_1 + 0x170) = 1;
  if (((*(byte *)(_UIPanel_TypeInfo_12d6478 + 0x133) >> 2 & 1) != 0) &&
     (*(int *)(_UIPanel_TypeInfo_12d6478 + 0xe0) == 0)) {
    native_sub_4327ec();
  }
  lVar7 = _UIPanel_TypeInfo_12d6478;
  *(undefined4 *)(*(long *)(_UIPanel_TypeInfo_12d6478 + 0xb8) + 0x18) = 0xffffffff;
  lVar9 = **(long **)(lVar7 + 0xb8);
  if (lVar9 != 0) {
    if (*(int *)(lVar9 + 0x18) < 1) {
      return;
    }
    if (((*(byte *)(lVar7 + 0x133) >> 2 & 1) != 0) && (*(int *)(lVar7 + 0xe0) == 0)) {
      native_sub_4327ec();
      lVar9 = **(long **)(_UIPanel_TypeInfo_12d6478 + 0xb8);
      if (lVar9 == 0) goto LAB_00af498c;
    }
    if (*(int *)(lVar9 + 0x18) == 0) {
      native_System_ThrowHelper__ThrowArgumentOutOfRangeException_9fe0f4(0);
    }
    if (*(long *)(*(long *)(lVar9 + 0x10) + 0x20) != 0) {
      if ((bRam0000000001342050 & 1) == 0) {
        native_sub_43273c(&UnityEngine_Debug_TypeInfo_12d4338);
        native_sub_43273c(&Method_System_Collections_Generic_List_UIPanel__Remove___12dd358);
        native_sub_43273c(&Method_System_Collections_Generic_List_UIDrawCall__get_Count___12dd2c8);
        native_sub_43273c(&Method_System_Collections_Generic_List_UIPanel__get_Count___12dd368);
        native_sub_43273c(&Method_System_Collections_Generic_List_UIPanel__get_Item___12dd370);
        native_sub_43273c(&UnityEngine_Object_TypeInfo_12d54e0);
        native_sub_43273c(&UIPanel_TypeInfo_12d6478);
        native_sub_43273c(&StringLiteral_Improperly_destroyed_panel_detected__removing_12ee780);
        bRam0000000001342050 = 1;
      }
      if (((*(byte *)(_UIPanel_TypeInfo_12d6478 + 0x133) >> 2 & 1) != 0) &&
         (*(int *)(_UIPanel_TypeInfo_12d6478 + 0xe0) == 0)) {
        native_sub_4327ec();
      }
      iVar8 = *(int *)(*(long *)(_UIPanel_TypeInfo_12d6478 + 0xb8) + 0x18);
      iVar4 = native_UnityEngine_Time__get_frameCount_770964(0);
      if (iVar8 == iVar4) {
        return;
      }
      uVar5 = native_UnityEngine_Time__get_frameCount_770964(0);
      if (((*(byte *)(_UIPanel_TypeInfo_12d6478 + 0x133) >> 2 & 1) != 0) &&
         (*(int *)(_UIPanel_TypeInfo_12d6478 + 0xe0) == 0)) {
        native_sub_4327ec(_UIPanel_TypeInfo_12d6478);
      }
      lVar7 = _UIPanel_TypeInfo_12d6478;
      *(undefined4 *)(*(long *)(_UIPanel_TypeInfo_12d6478 + 0xb8) + 0x18) = uVar5;
      if (**(long **)(lVar7 + 0xb8) != 0) {
        iVar8 = *(int *)(**(long **)(lVar7 + 0xb8) + 0x18);
        bVar3 = (*(byte *)(lVar7 + 0x133) & 4) == 0;
        if (0 < iVar8) {
          uVar10 = 0;
          do {
            if ((!bVar3) && (*(int *)(lVar7 + 0xe0) == 0)) {
              native_sub_4327ec(lVar7);
              lVar7 = _UIPanel_TypeInfo_12d6478;
            }
            lVar7 = **(long **)(lVar7 + 0xb8);
            if (lVar7 == 0) goto LAB_00af2dd4;
            if (*(uint *)(lVar7 + 0x18) <= uVar10) {
              native_System_ThrowHelper__ThrowArgumentOutOfRangeException_9fe0f4(0);
            }
            lVar7 = *(long *)(*(long *)(lVar7 + 0x10) + (long)(int)uVar10 * 8 + 0x20);
            if (((*(byte *)(_UnityEngine_Object_TypeInfo_12d54e0 + 0x133) >> 2 & 1) != 0) &&
               (*(int *)(_UnityEngine_Object_TypeInfo_12d54e0 + 0xe0) == 0)) {
              native_sub_4327ec();
            }
            uVar6 = native_UnityEngine_Object__op_Implicit_8e1b98(lVar7,0);
            if ((uVar6 & 1) == 0) {
              if (((*(byte *)(_UnityEngine_Debug_TypeInfo_12d4338 + 0x133) >> 2 & 1) != 0) &&
                 (*(int *)(_UnityEngine_Debug_TypeInfo_12d4338 + 0xe0) == 0)) {
                native_sub_4327ec();
              }
              native_UnityEngine_Debug__LogWarning_8dcbc8
                        (_StringLiteral_Improperly_destroyed_panel_detected__removing_12ee780,lVar7,
                         0);
              if (((*(byte *)(_UIPanel_TypeInfo_12d6478 + 0x133) >> 2 & 1) != 0) &&
                 (*(int *)(_UIPanel_TypeInfo_12d6478 + 0xe0) == 0)) {
                native_sub_4327ec();
              }
              if (**(long **)(_UIPanel_TypeInfo_12d6478 + 0xb8) == 0) goto LAB_00af2dd4;
              native_System_Collections_Generic_List_BMSymbol___Remove_d41f3c
                        (**(long **)(_UIPanel_TypeInfo_12d6478 + 0xb8),lVar7,
                         _Method_System_Collections_Generic_List_UIPanel__Remove___12dd358);
              uVar10 = uVar10 - 1;
              iVar8 = iVar8 + -1;
            }
            else {
              if (lVar7 == 0) goto LAB_00af2dd4;
              native_UIPanel__UpdateSelf_af2dd8(lVar7);
            }
            uVar10 = uVar10 + 1;
            bVar3 = (*(byte *)(_UIPanel_TypeInfo_12d6478 + 0x133) & 4) == 0;
            lVar7 = _UIPanel_TypeInfo_12d6478;
          } while ((int)uVar10 < iVar8);
        }
        if ((!bVar3) && (*(int *)(lVar7 + 0xe0) == 0)) {
          native_sub_4327ec(lVar7);
          lVar7 = _UIPanel_TypeInfo_12d6478;
        }
        if (**(long **)(lVar7 + 0xb8) != 0) {
          iVar8 = *(int *)(**(long **)(lVar7 + 0xb8) + 0x18);
          if (iVar8 < 1) {
            return;
          }
          uVar6 = 0;
          iVar4 = 3000;
          while( true ) {
            if (((*(byte *)(lVar7 + 0x133) >> 2 & 1) != 0) && (*(int *)(lVar7 + 0xe0) == 0)) {
              native_sub_4327ec(lVar7);
              lVar7 = _UIPanel_TypeInfo_12d6478;
            }
            lVar7 = **(long **)(lVar7 + 0xb8);
            if (lVar7 == 0) break;
            if (*(uint *)(lVar7 + 0x18) <= (uint)uVar6) {
              native_System_ThrowHelper__ThrowArgumentOutOfRangeException_9fe0f4(0);
            }
            lVar7 = *(long *)(*(long *)(lVar7 + 0x10) + uVar6 * 8 + 0x20);
            if (lVar7 == 0) break;
            iVar1 = *(int *)(lVar7 + 0xa8);
            if (iVar1 == 0) {
              *(int *)(lVar7 + 0xac) = iVar4;
              native_UIPanel__UpdateDrawCalls_aef0d4(lVar7,uVar6 & 0xffffffff);
              if (*(long *)(lVar7 + 0xb8) == 0) break;
              iVar4 = *(int *)(*(long *)(lVar7 + 0xb8) + 0x18) + iVar4;
            }
            else {
              native_UIPanel__UpdateDrawCalls_aef0d4(lVar7,uVar6 & 0xffffffff);
              if (*(long *)(lVar7 + 0xb8) == 0) break;
              iVar2 = *(int *)(*(long *)(lVar7 + 0xb8) + 0x18);
              if (iVar1 == 1) {
                if (iVar2 != 0) {
                  iVar2 = *(int *)(lVar7 + 0xac) + iVar2;
LAB_00af2da0:
                  iVar4 = native_UnityEngine_Mathf__Max_8e4cd0(iVar4,iVar2,0);
                }
              }
              else if (iVar2 != 0) {
                iVar2 = *(int *)(lVar7 + 0xac) + 1;
                goto LAB_00af2da0;
              }
            }
            if (iVar8 <= (int)((uint)uVar6 + 1)) {
              return;
            }
            uVar6 = uVar6 + 1;
            lVar7 = _UIPanel_TypeInfo_12d6478;
          }
        }
      }
LAB_00af2dd4:
                    /* WARNING: Subroutine does not return */
      native_sub_432810();
    }
  }
LAB_00af498c:
                    /* WARNING: Subroutine does not return */
  native_sub_432810();
}



/* UIPanel$$CalculateConstrainOffset @ 0xaf4990
 * UnityEngine_Vector3_o UIPanel__CalculateConstrainOffset (UIPanel_o* __this, UnityEngine_Vector2_o min, UnityEngine_Vector2_o max, const MethodInfo* method); */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* UIPanel$$CalculateConstrainOffset
   UnityEngine_Vector3_o UIPanel__CalculateConstrainOffset (UIPanel_o* __this, UnityEngine_Vector2_o
   min, UnityEngine_Vector2_o max, const MethodInfo* method); */

void native_UIPanel__CalculateConstrainOffset_af4990
               (undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
               long param_5)

{
  float fVar1;
  undefined8 uVar2;
  float fVar3;
  undefined8 uVar4;
  float fVar5;
  undefined8 uVar6;
  float fVar7;
  float fVar8;
  float fVar9;
  
  uVar2 = param_2;
  uVar4 = param_3;
  uVar6 = param_4;
  if ((bRam000000000134205e & 1) == 0) {
    native_sub_43273c(&NGUIMath_TypeInfo_12d53b8);
    bRam000000000134205e = 1;
  }
  fVar7 = (float)uVar2;
  fVar5 = (float)uVar6;
  fVar3 = (float)uVar4;
  fVar1 = (float)native_UIPanel__get_finalClipRegion_af03c8(param_5);
  fVar9 = fVar1 - fVar3 * 0.5;
  fVar8 = fVar7 - fVar5 * 0.5;
  fVar1 = fVar1 + fVar3 * 0.5;
  fVar7 = fVar7 + fVar5 * 0.5;
  if ((*(char *)(param_5 + 0xa4) != '\0') && (*(int *)(param_5 + 0x140) == 3)) {
    fVar9 = fVar9 + *(float *)(param_5 + 0x154);
    fVar8 = fVar8 + *(float *)(param_5 + 0x158);
    fVar1 = fVar1 - *(float *)(param_5 + 0x154);
    fVar7 = fVar7 - *(float *)(param_5 + 0x158);
  }
  if (((*(byte *)(_NGUIMath_TypeInfo_12d53b8 + 0x133) >> 2 & 1) != 0) &&
     (*(int *)(_NGUIMath_TypeInfo_12d53b8 + 0xe0) == 0)) {
    native_sub_4327ec();
  }
  native_NGUIMath__ConstrainRect_805500(param_1,param_2,param_3,param_4,fVar9,fVar8,fVar1,fVar7,0);
  return;
}



/* UIPanel$$ConstrainTargetToBounds @ 0xaf4a98
 * bool UIPanel__ConstrainTargetToBounds (UIPanel_o* __this, UnityEngine_Transform_o* target, UnityEngine_Bounds_o* targetBounds, bool immediate, const MethodInfo* method); */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* UIPanel$$ConstrainTargetToBounds
   bool UIPanel__ConstrainTargetToBounds (UIPanel_o* __this, UnityEngine_Transform_o* target,
   UnityEngine_Bounds_o* targetBounds, bool immediate, const MethodInfo* method); */

undefined8
native_UIPanel__ConstrainTargetToBounds_af4a98
          (undefined1 param_1 [16],ulong param_2,long *param_3,long param_4,undefined8 param_5,
          uint param_6)

{
  long lVar1;
  ulong uVar2;
  ulong uVar3;
  undefined8 uVar4;
  float fVar5;
  ulong uVar6;
  ulong uVar7;
  float fVar8;
  float fVar9;
  float fStack_70;
  float fStack_6c;
  float fStack_68;
  
  if ((bRam000000000134205f & 1) == 0) {
    native_sub_43273c(&Method_UnityEngine_Component_GetComponent_SpringPosition____12e2b10);
    native_sub_43273c(&UnityEngine_Object_TypeInfo_12d54e0);
    bRam000000000134205f = 1;
  }
  fStack_68 = 0.0;
  fStack_70 = 0.0;
  fStack_6c = 0.0;
  uVar6 = native_UnityEngine_Bounds__get_min_8d7f18(param_5,0);
  uVar3 = param_2;
  uVar7 = native_UnityEngine_Bounds__get_max_8d7f88(param_5,0);
  fVar9 = 1.0;
  if ((int)param_3[0x28] == 0) {
    lVar1 = native_UIRect__get_root_c2d7ac(param_3,0);
    if (((*(byte *)(_UnityEngine_Object_TypeInfo_12d54e0 + 0x133) >> 2 & 1) != 0) &&
       (*(int *)(_UnityEngine_Object_TypeInfo_12d54e0 + 0xe0) == 0)) {
      native_sub_4327ec(_UnityEngine_Object_TypeInfo_12d54e0);
    }
    uVar2 = native_UnityEngine_Object__op_Inequality_8d76fc(lVar1,0,0);
    if ((uVar2 & 1) != 0) {
      if (lVar1 == 0) goto LAB_00af4d34;
      fVar5 = (float)native_UIRoot__get_pixelSizeAdjustment_c2f740(lVar1,0);
      fVar9 = 1.0;
      if (fVar5 != 1.0) {
        uVar6 = (ulong)(uint)((float)uVar6 / fVar5);
        param_2 = (ulong)(uint)((float)param_2 / fVar5);
        uVar7 = (ulong)(uint)((float)uVar7 / fVar5);
        uVar3 = (ulong)(uint)((float)uVar3 / fVar5);
        fVar9 = fVar5;
      }
    }
  }
  fStack_70 = (float)(**(code **)(*param_3 + 0x2a8))
                               (uVar6,param_2,uVar7,uVar3,param_3,*(undefined8 *)(*param_3 + 0x2b0))
  ;
  fStack_70 = fVar9 * fStack_70;
  fVar8 = fVar9 * (float)param_2;
  fStack_68 = fVar9 * (float)uVar7;
  fVar9 = fStack_68;
  fStack_6c = fVar8;
  fVar5 = (float)native_UnityEngine_Vector3__get_sqrMagnitude_776910(&fStack_70,0);
  if (fVar5 <= 0.0) {
    uVar4 = 0;
  }
  else {
    if (param_4 == 0) {
LAB_00af4d34:
                    /* WARNING: Subroutine does not return */
      native_sub_432810();
    }
    if ((param_6 & 1) == 0) {
      uVar4 = native_UnityEngine_Component__get_gameObject_8da66c(param_4,0);
      fVar5 = (float)native_UnityEngine_Transform__get_localPosition_7717f4(param_4,0);
      lVar1 = native_SpringPosition__Begin_73f250
                        (fVar5 + fStack_70,fVar8 + fStack_6c,fVar9 + fStack_68,0x41500000,uVar4,0);
      if (lVar1 == 0) goto LAB_00af4d34;
      *(undefined2 *)(lVar1 + 0x28) = 0x100;
    }
    else {
      fVar5 = (float)native_UnityEngine_Transform__get_localPosition_7717f4();
      fVar8 = fVar8 + fStack_6c;
      fVar9 = fVar9 + fStack_68;
      native_UnityEngine_Transform__set_localPosition_7718a4
                (fVar5 + fStack_70,fVar8,fVar9,param_4,0);
      fVar5 = (float)native_UnityEngine_Bounds__get_center_8d7d98(param_5,0);
      native_UnityEngine_Bounds__set_center_8d7ecc
                (fVar5 + fStack_70,fVar8 + fStack_6c,fVar9 + fStack_68,param_5,0);
      lVar1 = native_UnityEngine_Component__GetComponent_ActiveAnimation__49daec
                        (param_4,
                         _Method_UnityEngine_Component_GetComponent_SpringPosition____12e2b10);
      if (((*(byte *)(_UnityEngine_Object_TypeInfo_12d54e0 + 0x133) >> 2 & 1) != 0) &&
         (*(int *)(_UnityEngine_Object_TypeInfo_12d54e0 + 0xe0) == 0)) {
        native_sub_4327ec(_UnityEngine_Object_TypeInfo_12d54e0);
      }
      uVar3 = native_UnityEngine_Object__op_Inequality_8d76fc(lVar1,0,0);
      if ((uVar3 & 1) != 0) {
        if (lVar1 == 0) goto LAB_00af4d34;
        native_UnityEngine_Behaviour__set_enabled_8d7b0c(lVar1,0,0);
      }
    }
    uVar4 = 1;
  }
  return uVar4;
}



/* UIPanel$$ConstrainTargetToBounds @ 0xaf4d38
 * bool UIPanel__ConstrainTargetToBounds (UIPanel_o* __this, UnityEngine_Transform_o* target, bool immediate, const MethodInfo* method); */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* UIPanel$$ConstrainTargetToBounds
   bool UIPanel__ConstrainTargetToBounds (UIPanel_o* __this, UnityEngine_Transform_o* target, bool
   immediate, const MethodInfo* method); */

uint native_UIPanel__ConstrainTargetToBounds_af4d38
               (undefined8 param_1,undefined8 param_2,uint param_3)

{
  uint uVar1;
  undefined8 uVar2;
  undefined8 uStack_68;
  undefined8 uStack_60;
  undefined8 uStack_58;
  undefined8 uStack_50;
  undefined8 uStack_48;
  undefined8 uStack_40;
  
  if ((bRam0000000001342060 & 1) == 0) {
    native_sub_43273c(&NGUIMath_TypeInfo_12d53b8);
    bRam0000000001342060 = 1;
  }
  uStack_50 = 0;
  uStack_48 = 0;
  uStack_40 = 0;
  uVar2 = native_UIRect__get_cachedTransform_c27c58(param_1,0);
  if (((*(byte *)(_NGUIMath_TypeInfo_12d53b8 + 0x133) >> 2 & 1) != 0) &&
     (*(int *)(_NGUIMath_TypeInfo_12d53b8 + 0xe0) == 0)) {
    native_sub_4327ec(_NGUIMath_TypeInfo_12d53b8);
  }
  native_NGUIMath__CalculateRelativeWidgetBounds_805e1c(&uStack_68,uVar2,param_2,0);
  uStack_40 = uStack_58;
  uStack_48 = uStack_60;
  uStack_50 = uStack_68;
  uVar1 = native_UIPanel__ConstrainTargetToBounds_af4a98(param_1,param_2,&uStack_50,param_3 & 1);
  return uVar1 & 1;
}



/* UIPanel$$Find @ 0xaf4e04
 * UIPanel_o* UIPanel__Find (UnityEngine_Transform_o* trans, const MethodInfo* method); */

/* WARNING: Removing unreachable block (ram,0x00af4f94) */
/* WARNING: Removing unreachable block (ram,0x00af4fa0) */
/* WARNING: Removing unreachable block (ram,0x00af4fa8) */
/* WARNING: Removing unreachable block (ram,0x00730304) */
/* WARNING: Removing unreachable block (ram,0x00730340) */
/* WARNING: Removing unreachable block (ram,0x00730480) */
/* WARNING: Removing unreachable block (ram,0x0073049c) */
/* WARNING: Removing unreachable block (ram,0x007304a4) */
/* WARNING: Removing unreachable block (ram,0x007304a8) */
/* WARNING: Removing unreachable block (ram,0x007304c0) */
/* WARNING: Removing unreachable block (ram,0x007304c4) */
/* WARNING: Removing unreachable block (ram,0x007304e8) */
/* WARNING: Removing unreachable block (ram,0x007304f0) */
/* WARNING: Removing unreachable block (ram,0x007304f8) */
/* WARNING: Removing unreachable block (ram,0x00730510) */
/* WARNING: Removing unreachable block (ram,0x0073051c) */
/* WARNING: Removing unreachable block (ram,0x00730524) */
/* WARNING: Removing unreachable block (ram,0x00730528) */
/* WARNING: Removing unreachable block (ram,0x0073053c) */
/* WARNING: Removing unreachable block (ram,0x00730550) */
/* WARNING: Removing unreachable block (ram,0x00730558) */
/* WARNING: Removing unreachable block (ram,0x00730560) */
/* WARNING: Removing unreachable block (ram,0x0073056c) */
/* WARNING: Removing unreachable block (ram,0x00730578) */
/* WARNING: Removing unreachable block (ram,0x00730580) */
/* WARNING: Removing unreachable block (ram,0x00730588) */
/* WARNING: Removing unreachable block (ram,0x0073059c) */
/* WARNING: Removing unreachable block (ram,0x007305cc) */
/* WARNING: Removing unreachable block (ram,0x00730608) */
/* WARNING: Removing unreachable block (ram,0x007305dc) */
/* WARNING: Removing unreachable block (ram,0x00730e20) */
/* WARNING: Removing unreachable block (ram,0x007305e4) */
/* WARNING: Removing unreachable block (ram,0x00730e24) */
/* WARNING: Removing unreachable block (ram,0x007305f4) */
/* WARNING: Removing unreachable block (ram,0x00730604) */
/* WARNING: Removing unreachable block (ram,0x0073060c) */
/* WARNING: Removing unreachable block (ram,0x00730624) */
/* WARNING: Removing unreachable block (ram,0x00730630) */
/* WARNING: Removing unreachable block (ram,0x00730638) */
/* WARNING: Removing unreachable block (ram,0x0073063c) */
/* WARNING: Removing unreachable block (ram,0x00730650) */
/* WARNING: Removing unreachable block (ram,0x00730664) */
/* WARNING: Removing unreachable block (ram,0x0073066c) */
/* WARNING: Removing unreachable block (ram,0x00730674) */
/* WARNING: Removing unreachable block (ram,0x00730680) */
/* WARNING: Removing unreachable block (ram,0x0073068c) */
/* WARNING: Removing unreachable block (ram,0x0073069c) */
/* WARNING: Removing unreachable block (ram,0x007306a4) */
/* WARNING: Removing unreachable block (ram,0x007306ac) */
/* WARNING: Removing unreachable block (ram,0x007306b4) */
/* WARNING: Removing unreachable block (ram,0x007306c0) */
/* WARNING: Removing unreachable block (ram,0x007306cc) */
/* WARNING: Removing unreachable block (ram,0x007306d4) */
/* WARNING: Removing unreachable block (ram,0x007306e4) */
/* WARNING: Removing unreachable block (ram,0x007306f4) */
/* WARNING: Removing unreachable block (ram,0x00730704) */
/* WARNING: Removing unreachable block (ram,0x00730db8) */
/* WARNING: Removing unreachable block (ram,0x00730dc8) */
/* WARNING: Removing unreachable block (ram,0x00730718) */
/* WARNING: Removing unreachable block (ram,0x00730694) */
/* WARNING: Removing unreachable block (ram,0x00730724) */
/* WARNING: Removing unreachable block (ram,0x00730730) */
/* WARNING: Removing unreachable block (ram,0x00730738) */
/* WARNING: Removing unreachable block (ram,0x0073073c) */
/* WARNING: Removing unreachable block (ram,0x00730750) */
/* WARNING: Removing unreachable block (ram,0x00730754) */
/* WARNING: Removing unreachable block (ram,0x00730778) */
/* WARNING: Removing unreachable block (ram,0x00730780) */
/* WARNING: Removing unreachable block (ram,0x00730788) */
/* WARNING: Removing unreachable block (ram,0x0073079c) */
/* WARNING: Removing unreachable block (ram,0x007307a0) */
/* WARNING: Removing unreachable block (ram,0x007307b8) */
/* WARNING: Removing unreachable block (ram,0x007307cc) */
/* WARNING: Removing unreachable block (ram,0x007307d0) */
/* WARNING: Removing unreachable block (ram,0x007307d4) */
/* WARNING: Removing unreachable block (ram,0x007307e0) */
/* WARNING: Removing unreachable block (ram,0x007307e8) */
/* WARNING: Removing unreachable block (ram,0x007307ec) */
/* WARNING: Removing unreachable block (ram,0x007308c4) */
/* WARNING: Removing unreachable block (ram,0x007308c8) */
/* WARNING: Removing unreachable block (ram,0x00730800) */
/* WARNING: Removing unreachable block (ram,0x00730814) */
/* WARNING: Removing unreachable block (ram,0x0073081c) */
/* WARNING: Removing unreachable block (ram,0x00730820) */
/* WARNING: Removing unreachable block (ram,0x00730830) */
/* WARNING: Removing unreachable block (ram,0x00730850) */
/* WARNING: Removing unreachable block (ram,0x00730870) */
/* WARNING: Removing unreachable block (ram,0x00730888) */
/* WARNING: Removing unreachable block (ram,0x007308cc) */
/* WARNING: Removing unreachable block (ram,0x007308e8) */
/* WARNING: Removing unreachable block (ram,0x007308a0) */
/* WARNING: Removing unreachable block (ram,0x007308bc) */
/* WARNING: Removing unreachable block (ram,0x007308ec) */
/* WARNING: Removing unreachable block (ram,0x00730900) */
/* WARNING: Removing unreachable block (ram,0x00730924) */
/* WARNING: Removing unreachable block (ram,0x0073092c) */
/* WARNING: Removing unreachable block (ram,0x00730934) */
/* WARNING: Removing unreachable block (ram,0x00730948) */
/* WARNING: Removing unreachable block (ram,0x0073095c) */
/* WARNING: Removing unreachable block (ram,0x00730964) */
/* WARNING: Removing unreachable block (ram,0x00730968) */
/* WARNING: Removing unreachable block (ram,0x0073098c) */
/* WARNING: Removing unreachable block (ram,0x00730998) */
/* WARNING: Removing unreachable block (ram,0x00730a4c) */
/* WARNING: Removing unreachable block (ram,0x007309ac) */
/* WARNING: Removing unreachable block (ram,0x007309bc) */
/* WARNING: Removing unreachable block (ram,0x00730e14) */
/* WARNING: Removing unreachable block (ram,0x007309c4) */
/* WARNING: Removing unreachable block (ram,0x007309d0) */
/* WARNING: Removing unreachable block (ram,0x007309e4) */
/* WARNING: Removing unreachable block (ram,0x007309f8) */
/* WARNING: Removing unreachable block (ram,0x007309fc) */
/* WARNING: Removing unreachable block (ram,0x00730a48) */
/* WARNING: Removing unreachable block (ram,0x00730a54) */
/* WARNING: Removing unreachable block (ram,0x00730a70) */
/* WARNING: Removing unreachable block (ram,0x00730a78) */
/* WARNING: Removing unreachable block (ram,0x00730a80) */
/* WARNING: Removing unreachable block (ram,0x00730a9c) */
/* WARNING: Removing unreachable block (ram,0x00730aac) */
/* WARNING: Removing unreachable block (ram,0x00730ac4) */
/* WARNING: Removing unreachable block (ram,0x00730b64) */
/* WARNING: Removing unreachable block (ram,0x00730b14) */
/* WARNING: Removing unreachable block (ram,0x00730b48) */
/* WARNING: Removing unreachable block (ram,0x00730ba4) */
/* WARNING: Removing unreachable block (ram,0x00730bb0) */
/* WARNING: Removing unreachable block (ram,0x00730bb8) */
/* WARNING: Removing unreachable block (ram,0x00730bbc) */
/* WARNING: Removing unreachable block (ram,0x00730bd0) */
/* WARNING: Removing unreachable block (ram,0x00730bd8) */
/* WARNING: Removing unreachable block (ram,0x00730be8) */
/* WARNING: Removing unreachable block (ram,0x00730bf8) */
/* WARNING: Removing unreachable block (ram,0x00730c08) */
/* WARNING: Removing unreachable block (ram,0x00730c1c) */
/* WARNING: Removing unreachable block (ram,0x00730c28) */
/* WARNING: Removing unreachable block (ram,0x00730c30) */
/* WARNING: Removing unreachable block (ram,0x00730c34) */
/* WARNING: Removing unreachable block (ram,0x00730c48) */
/* WARNING: Removing unreachable block (ram,0x00730c4c) */
/* WARNING: Removing unreachable block (ram,0x00730c68) */
/* WARNING: Removing unreachable block (ram,0x00730c70) */
/* WARNING: Removing unreachable block (ram,0x00730c78) */
/* WARNING: Removing unreachable block (ram,0x00730ca4) */
/* WARNING: Removing unreachable block (ram,0x00730ca8) */
/* WARNING: Removing unreachable block (ram,0x00730ccc) */
/* WARNING: Removing unreachable block (ram,0x00730cd4) */
/* WARNING: Removing unreachable block (ram,0x00730cdc) */
/* WARNING: Removing unreachable block (ram,0x00730ce0) */
/* WARNING: Removing unreachable block (ram,0x00730d1c) */
/* WARNING: Removing unreachable block (ram,0x00730d80) */
/* WARNING: Removing unreachable block (ram,0x00730d98) */
/* WARNING: Removing unreachable block (ram,0x00730da0) */
/* WARNING: Removing unreachable block (ram,0x00730da8) */
/* WARNING: Removing unreachable block (ram,0x00730cf4) */
/* WARNING: Removing unreachable block (ram,0x00730d04) */
/* WARNING: Removing unreachable block (ram,0x00730dec) */
/* WARNING: Removing unreachable block (ram,0x00730c8c) */
/* WARNING: Removing unreachable block (ram,0x00730ca0) */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* UIPanel$$Find
   UIPanel_o* UIPanel__Find (UnityEngine_Transform_o* trans, const MethodInfo* method); */

undefined8 native_UIPanel__Find_af4e04(long param_1)

{
  undefined8 uVar1;
  ulong uVar2;
  
  if ((bRam0000000001342061 & 1) == 0) {
    native_sub_43273c(&UIPanel_TypeInfo_12d6478);
    bRam0000000001342061 = 1;
  }
  if (((*(byte *)(_UIPanel_TypeInfo_12d6478 + 0x133) >> 2 & 1) != 0) &&
     (*(int *)(_UIPanel_TypeInfo_12d6478 + 0xe0) == 0)) {
    native_sub_4327ec();
  }
  if ((bRam0000000001342063 & 1) == 0) {
    native_sub_43273c(&Method_NGUITools_FindInParents_UIPanel____12e5768);
    native_sub_43273c(&NGUITools_TypeInfo_12d53c8);
    native_sub_43273c(&UnityEngine_Object_TypeInfo_12d54e0);
    bRam0000000001342063 = 1;
  }
  if (((*(byte *)(_NGUITools_TypeInfo_12d53c8 + 0x133) >> 2 & 1) != 0) &&
     (*(int *)(_NGUITools_TypeInfo_12d53c8 + 0xe0) == 0)) {
    native_sub_4327ec();
  }
  uVar1 = native_NGUITools__FindInParents_object__4a5cac
                    (param_1,_Method_NGUITools_FindInParents_UIPanel____12e5768);
  if (((*(byte *)(_UnityEngine_Object_TypeInfo_12d54e0 + 0x133) >> 2 & 1) != 0) &&
     (*(int *)(_UnityEngine_Object_TypeInfo_12d54e0 + 0xe0) == 0)) {
    native_sub_4327ec(_UnityEngine_Object_TypeInfo_12d54e0);
  }
  uVar2 = native_UnityEngine_Object__op_Inequality_8d76fc(uVar1,0,0);
  if ((uVar2 & 1) == 0) {
    while( true ) {
      if (param_1 == 0) {
                    /* WARNING: Subroutine does not return */
        native_sub_432810();
      }
      uVar1 = native_UnityEngine_Transform__get_parent_765eb0(param_1,0);
      if (((*(byte *)(_UnityEngine_Object_TypeInfo_12d54e0 + 0x133) >> 2 & 1) != 0) &&
         (*(int *)(_UnityEngine_Object_TypeInfo_12d54e0 + 0xe0) == 0)) {
        native_sub_4327ec(_UnityEngine_Object_TypeInfo_12d54e0);
      }
      uVar2 = native_UnityEngine_Object__op_Inequality_8d76fc(uVar1,0,0);
      if ((uVar2 & 1) == 0) break;
      param_1 = native_UnityEngine_Transform__get_parent_765eb0(param_1,0);
    }
    uVar1 = 0;
  }
  return uVar1;
}



/* UIPanel$$Find @ 0xaf4fec
 * UIPanel_o* UIPanel__Find (UnityEngine_Transform_o* trans, bool createIfMissing, const MethodInfo* method); */

/* WARNING: Removing unreachable block (ram,0x007308a0) */
/* WARNING: Removing unreachable block (ram,0x007308bc) */
/* WARNING: Removing unreachable block (ram,0x00730b14) */
/* WARNING: Removing unreachable block (ram,0x00730b48) */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* UIPanel$$Find
   UIPanel_o* UIPanel__Find (UnityEngine_Transform_o* trans, bool createIfMissing, const MethodInfo*
   method); */

long native_UIPanel__Find_af4fec(long param_1,ulong param_2)

{
  bool bVar1;
  int iVar2;
  int iVar3;
  uint uVar4;
  uint uVar5;
  undefined4 uVar6;
  long lVar7;
  long lVar8;
  long lVar9;
  ulong uVar10;
  undefined8 uVar11;
  long lVar12;
  uint uVar13;
  undefined8 uVar14;
  undefined8 uStack_a8;
  undefined8 uStack_a0;
  long lStack_98;
  undefined8 uStack_90;
  undefined8 uStack_88;
  long lStack_80;
  
  if ((bRam0000000001342062 & 1) == 0) {
    native_sub_43273c(&UIPanel_TypeInfo_12d6478);
    bRam0000000001342062 = 1;
  }
  if (((*(byte *)(_UIPanel_TypeInfo_12d6478 + 0x133) >> 2 & 1) != 0) &&
     (*(int *)(_UIPanel_TypeInfo_12d6478 + 0xe0) == 0)) {
    native_sub_4327ec();
  }
  if ((bRam0000000001342063 & 1) == 0) {
    native_sub_43273c(&Method_NGUITools_FindInParents_UIPanel____12e5768);
    native_sub_43273c(&NGUITools_TypeInfo_12d53c8);
    native_sub_43273c(&UnityEngine_Object_TypeInfo_12d54e0);
    bRam0000000001342063 = 1;
  }
  if (((*(byte *)(_NGUITools_TypeInfo_12d53c8 + 0x133) >> 2 & 1) != 0) &&
     (*(int *)(_NGUITools_TypeInfo_12d53c8 + 0xe0) == 0)) {
    native_sub_4327ec();
  }
  lVar9 = native_NGUITools__FindInParents_object__4a5cac
                    (param_1,_Method_NGUITools_FindInParents_UIPanel____12e5768);
  if (((*(byte *)(_UnityEngine_Object_TypeInfo_12d54e0 + 0x133) >> 2 & 1) != 0) &&
     (*(int *)(_UnityEngine_Object_TypeInfo_12d54e0 + 0xe0) == 0)) {
    native_sub_4327ec(_UnityEngine_Object_TypeInfo_12d54e0);
  }
  uVar10 = native_UnityEngine_Object__op_Inequality_8d76fc(lVar9,0,0);
  if ((uVar10 & 1) != 0) {
    return lVar9;
  }
  while( true ) {
    if (param_1 == 0) {
                    /* WARNING: Subroutine does not return */
      native_sub_432810();
    }
    uVar11 = native_UnityEngine_Transform__get_parent_765eb0(param_1,0);
    if (((*(byte *)(_UnityEngine_Object_TypeInfo_12d54e0 + 0x133) >> 2 & 1) != 0) &&
       (*(int *)(_UnityEngine_Object_TypeInfo_12d54e0 + 0xe0) == 0)) {
      native_sub_4327ec(_UnityEngine_Object_TypeInfo_12d54e0);
    }
    uVar10 = native_UnityEngine_Object__op_Inequality_8d76fc(uVar11,0,0);
    if ((uVar10 & 1) == 0) break;
    param_1 = native_UnityEngine_Transform__get_parent_765eb0(param_1,0);
  }
  if ((param_2 & 1) == 0) {
    return 0;
  }
  if (((*(byte *)(_NGUITools_TypeInfo_12d53c8 + 0x133) >> 2 & 1) != 0) &&
     (*(int *)(_NGUITools_TypeInfo_12d53c8 + 0xe0) == 0)) {
    native_sub_4327ec();
  }
  if ((bRam000000000133f5a5 & 1) == 0) {
    native_sub_43273c(&Method_UnityEngine_Component_GetComponentInChildren_UICamera____12e2cb8,0,
                      0xffffffff,0);
    native_sub_43273c(&Method_UnityEngine_Component_GetComponentInChildren_UIPanel____12e2cd0);
    native_sub_43273c(&Method_UnityEngine_Component_GetComponent_Camera____12e29a8);
    native_sub_43273c(&Method_System_Collections_Generic_List_Enumerator_UIRoot__Dispose___12da6c0);
    native_sub_43273c(&Method_System_Collections_Generic_List_Enumerator_UIRoot__MoveNext___12da6c8)
    ;
    native_sub_43273c(&
                      Method_System_Collections_Generic_List_Enumerator_UIRoot__get_Current___12da6d0
                     );
    native_sub_43273c(&Method_UnityEngine_GameObject_AddComponent_AudioListener____12e4748);
    native_sub_43273c(&Method_UnityEngine_GameObject_AddComponent_UICamera____12e48c8);
    native_sub_43273c(&Method_UnityEngine_GameObject_AddComponent_UIPanel____12e48f0);
    native_sub_43273c(&Method_UnityEngine_GameObject_AddComponent_UIRoot____12e48f8);
    native_sub_43273c(&Method_System_Collections_Generic_List_UIRoot__GetEnumerator___12dd388);
    native_sub_43273c(&Method_System_Collections_Generic_List_UIRoot__get_Count___12dd398);
    native_sub_43273c(&Method_System_Collections_Generic_List_UIPanel__get_Count___12dd368);
    native_sub_43273c(&Method_System_Collections_Generic_List_UIPanel__get_Item___12dd370);
    native_sub_43273c(&Method_NGUITools_AddChild_Camera____12e56c8);
    native_sub_43273c(&Method_NGUITools_FindActive_AudioListener____12e5700);
    native_sub_43273c(&Method_NGUITools_FindActive_Camera____12e5708);
    native_sub_43273c(&Method_NGUITools_FindInParents_UIRoot____12e5780);
    native_sub_43273c(&NGUITools_TypeInfo_12d53c8);
    native_sub_43273c(&UnityEngine_Object_TypeInfo_12d54e0);
    native_sub_43273c(&UIPanel_TypeInfo_12d6478);
    native_sub_43273c(&UIRoot_TypeInfo_12d64a8);
    native_sub_43273c(&StringLiteral_2D_UI_12ebc08);
    native_sub_43273c(&StringLiteral_UI_Root__3D__12f2920);
    native_sub_43273c(&StringLiteral_UI_12f2910);
    native_sub_43273c(&StringLiteral_UI_Root_12f2918);
    bRam000000000133f5a5 = 1;
  }
  uStack_88 = 0;
  lStack_80 = 0;
  uStack_90 = 0;
  if (((*(byte *)(_UnityEngine_Object_TypeInfo_12d54e0 + 0x133) >> 2 & 1) != 0) &&
     (*(int *)(_UnityEngine_Object_TypeInfo_12d54e0 + 0xe0) == 0)) {
    native_sub_4327ec();
  }
  uVar10 = native_UnityEngine_Object__op_Inequality_8d76fc(param_1,0,0);
  lVar9 = 0;
  if ((uVar10 & 1) != 0) {
    if (param_1 == 0) goto LAB_00730ca0;
    uVar11 = native_UnityEngine_Component__get_gameObject_8da66c(param_1,0);
    if (((*(byte *)(_NGUITools_TypeInfo_12d53c8 + 0x133) >> 2 & 1) != 0) &&
       (*(int *)(_NGUITools_TypeInfo_12d53c8 + 0xe0) == 0)) {
      native_sub_4327ec(_NGUITools_TypeInfo_12d53c8);
    }
    lVar9 = native_NGUITools__FindInParents_object__4a5c04
                      (uVar11,_Method_NGUITools_FindInParents_UIRoot____12e5780);
  }
  if (((*(byte *)(_UnityEngine_Object_TypeInfo_12d54e0 + 0x133) >> 2 & 1) != 0) &&
     (*(int *)(_UnityEngine_Object_TypeInfo_12d54e0 + 0xe0) == 0)) {
    native_sub_4327ec();
  }
  uVar10 = native_UnityEngine_Object__op_Equality_8e9a3c(lVar9,0,0);
  if ((uVar10 & 1) != 0) {
    if (((*(byte *)(_UIRoot_TypeInfo_12d64a8 + 0x133) >> 2 & 1) != 0) &&
       (*(int *)(_UIRoot_TypeInfo_12d64a8 + 0xe0) == 0)) {
      native_sub_4327ec();
    }
    lVar12 = **(long **)(_UIRoot_TypeInfo_12d64a8 + 0xb8);
    if (lVar12 == 0) goto LAB_00730ca0;
    if (0 < *(int *)(lVar12 + 0x18)) {
      if (((*(byte *)(_UIRoot_TypeInfo_12d64a8 + 0x133) >> 2 & 1) != 0) &&
         (*(int *)(_UIRoot_TypeInfo_12d64a8 + 0xe0) == 0)) {
        native_sub_4327ec();
        lVar12 = **(long **)(_UIRoot_TypeInfo_12d64a8 + 0xb8);
        if (lVar12 == 0) goto LAB_00730ca0;
      }
      native_System_Collections_Generic_List_BE2_Op_FunctionLocalVariable___GetEnumerator_d414fc
                (&uStack_a8,lVar12,
                 _Method_System_Collections_Generic_List_UIRoot__GetEnumerator___12dd388);
      lStack_80 = lStack_98;
      uStack_88 = uStack_a0;
      uStack_90 = uStack_a8;
      do {
        uVar10 = native_System_Collections_Generic_List_Enumerator_BE2_Op_FunctionLocalVariable___MoveNext_7e8f30
                           (&uStack_90,
                            _Method_System_Collections_Generic_List_Enumerator_UIRoot__MoveNext___12da6c8
                           );
        lVar12 = lStack_80;
        lVar7 = lVar9;
        if ((uVar10 & 1) == 0) break;
        if (lStack_80 == 0) {
                    /* WARNING: Subroutine does not return */
          native_sub_432810();
        }
        lVar7 = native_UnityEngine_Component__get_gameObject_8da66c(lStack_80,0);
        if (lVar7 == 0) {
                    /* WARNING: Subroutine does not return */
          native_sub_432810();
        }
        iVar2 = native_UnityEngine_GameObject__get_layer_8de608(lVar7,0);
        lVar7 = lVar12;
      } while (iVar2 != -1);
      lVar9 = lVar7;
      native_System_Collections_Generic_List_Enumerator_BE2_Op_FunctionLocalVariable___Dispose_7e8f2c
                (&uStack_90,
                 _Method_System_Collections_Generic_List_Enumerator_UIRoot__Dispose___12da6c0);
    }
  }
  if (((*(byte *)(_UnityEngine_Object_TypeInfo_12d54e0 + 0x133) >> 2 & 1) != 0) &&
     (*(int *)(_UnityEngine_Object_TypeInfo_12d54e0 + 0xe0) == 0)) {
    native_sub_4327ec();
  }
  uVar10 = native_UnityEngine_Object__op_Equality_8e9a3c(lVar9,0,0);
  if ((uVar10 & 1) != 0) {
    if (((*(byte *)(_UIPanel_TypeInfo_12d6478 + 0x133) >> 2 & 1) != 0) &&
       (*(int *)(_UIPanel_TypeInfo_12d6478 + 0xe0) == 0)) {
      native_sub_4327ec();
    }
    if (**(long **)(_UIPanel_TypeInfo_12d6478 + 0xb8) == 0) goto LAB_00730ca0;
    iVar2 = *(int *)(**(long **)(_UIPanel_TypeInfo_12d6478 + 0xb8) + 0x18);
    if (0 < iVar2) {
      lVar12 = 0;
      while( true ) {
        if (((*(byte *)(_UIPanel_TypeInfo_12d6478 + 0x133) >> 2 & 1) != 0) &&
           (*(int *)(_UIPanel_TypeInfo_12d6478 + 0xe0) == 0)) {
          native_sub_4327ec();
        }
        lVar7 = **(long **)(_UIPanel_TypeInfo_12d6478 + 0xb8);
        if (lVar7 == 0) goto LAB_00730ca0;
        if (*(uint *)(lVar7 + 0x18) <= (uint)lVar12) {
          native_System_ThrowHelper__ThrowArgumentOutOfRangeException_9fe0f4(0);
        }
        lVar7 = *(long *)(*(long *)(lVar7 + 0x10) + lVar12 * 8 + 0x20);
        if ((lVar7 == 0) ||
           (lVar8 = native_UnityEngine_Component__get_gameObject_8da66c(lVar7,0), lVar8 == 0))
        goto LAB_00730ca0;
        iVar3 = native_UnityEngine_Object__get_hideFlags_8ea7e0(lVar8,0);
        if ((iVar3 == 0) &&
           (iVar3 = native_UnityEngine_GameObject__get_layer_8de608(lVar8,0), iVar3 == -1)) {
          uVar11 = native_UnityEngine_Component__get_transform_8da62c(lVar7,0);
          if (param_1 != 0) {
            native_UnityEngine_Transform__set_parent_771f18(param_1,uVar11,0);
            native_UnityEngine_Vector3__get_one_776a20(0);
            native_UnityEngine_Transform__set_localScale_771e30(param_1,0);
            return lVar7;
          }
          goto LAB_00730ca0;
        }
        if (iVar2 <= (int)((uint)lVar12 + 1)) break;
        lVar12 = lVar12 + 1;
      }
    }
  }
  if (((*(byte *)(_UnityEngine_Object_TypeInfo_12d54e0 + 0x133) >> 2 & 1) != 0) &&
     (*(int *)(_UnityEngine_Object_TypeInfo_12d54e0 + 0xe0) == 0)) {
    native_sub_4327ec();
  }
  uVar10 = native_UnityEngine_Object__op_Inequality_8d76fc(lVar9,0,0);
  if ((uVar10 & 1) != 0) {
    if (lVar9 == 0) goto LAB_00730ca0;
    lVar12 = native_UnityEngine_Component__GetComponentInChildren_Animation__49db98
                       (lVar9,
                        _Method_UnityEngine_Component_GetComponentInChildren_UICamera____12e2cb8);
    if (((*(byte *)(_UnityEngine_Object_TypeInfo_12d54e0 + 0x133) >> 2 & 1) != 0) &&
       (*(int *)(_UnityEngine_Object_TypeInfo_12d54e0 + 0xe0) == 0)) {
      native_sub_4327ec(_UnityEngine_Object_TypeInfo_12d54e0);
    }
    uVar10 = native_UnityEngine_Object__op_Inequality_8d76fc(lVar12,0,0);
    if ((uVar10 & 1) != 0) {
      if ((lVar12 == 0) ||
         (lVar12 = native_UnityEngine_Component__GetComponent_ActiveAnimation__49daec
                             (lVar12,_Method_UnityEngine_Component_GetComponent_Camera____12e29a8),
         lVar12 == 0)) goto LAB_00730ca0;
      uVar4 = native_UnityEngine_Camera__get_orthographic_8d86c0(lVar12,0);
      if ((uVar4 & 1) == 0) {
        lVar9 = 0;
        param_1 = 0;
      }
    }
  }
  if (((*(byte *)(_UnityEngine_Object_TypeInfo_12d54e0 + 0x133) >> 2 & 1) != 0) &&
     (*(int *)(_UnityEngine_Object_TypeInfo_12d54e0 + 0xe0) == 0)) {
    native_sub_4327ec();
  }
  uVar10 = native_UnityEngine_Object__op_Equality_8e9a3c(lVar9,0,0);
  if ((uVar10 & 1) == 0) {
    if (lVar9 == 0) goto LAB_00730ca0;
  }
  else {
    if (((*(byte *)(_NGUITools_TypeInfo_12d53c8 + 0x133) >> 2 & 1) != 0) &&
       (*(int *)(_NGUITools_TypeInfo_12d53c8 + 0xe0) == 0)) {
      native_sub_4327ec();
    }
    lVar12 = native_NGUITools__AddChild_72eda0(0,0);
    if (lVar12 == 0) goto LAB_00730ca0;
    lVar9 = native_UnityEngine_GameObject__AddComponent_ActiveAnimation__4a2118
                      (lVar12,_Method_UnityEngine_GameObject_AddComponent_UIRoot____12e48f8);
    iVar2 = native_UnityEngine_LayerMask__NameToLayer_8dfe14(_StringLiteral_UI_12f2910,0);
    if (iVar2 == -1) {
      iVar2 = native_UnityEngine_LayerMask__NameToLayer_8dfe14(_StringLiteral_2D_UI_12ebc08,0);
    }
    native_UnityEngine_GameObject__set_layer_8de648(lVar12,iVar2,0);
    native_UnityEngine_Object__set_name_8e9c08(lVar12,_StringLiteral_UI_Root_12f2918,0);
    if (lVar9 == 0) goto LAB_00730ca0;
    *(undefined4 *)(lVar9 + 0x18) = 0;
    native_UIRoot__UpdateScale_c2fb2c(lVar9,1,0);
  }
  lVar12 = native_UnityEngine_Component__GetComponentInChildren_Animation__49db98
                     (lVar9,_Method_UnityEngine_Component_GetComponentInChildren_UIPanel____12e2cd0)
  ;
  if (((*(byte *)(_UnityEngine_Object_TypeInfo_12d54e0 + 0x133) >> 2 & 1) != 0) &&
     (*(int *)(_UnityEngine_Object_TypeInfo_12d54e0 + 0xe0) == 0)) {
    native_sub_4327ec(_UnityEngine_Object_TypeInfo_12d54e0);
  }
  uVar10 = native_UnityEngine_Object__op_Equality_8e9a3c(lVar12,0,0);
  if ((uVar10 & 1) != 0) {
    if (((*(byte *)(_NGUITools_TypeInfo_12d53c8 + 0x133) >> 2 & 1) != 0) &&
       (*(int *)(_NGUITools_TypeInfo_12d53c8 + 0xe0) == 0)) {
      native_sub_4327ec();
    }
    lVar12 = native_NGUITools__FindActive_AudioListener__4a5b30
                       (_Method_NGUITools_FindActive_Camera____12e5708);
    lVar7 = native_UnityEngine_Component__get_gameObject_8da66c(lVar9,0);
    if ((lVar7 == 0) ||
       (uVar4 = native_UnityEngine_GameObject__get_layer_8de608(lVar7,0), lVar12 == 0))
    goto LAB_00730ca0;
    uVar5 = *(uint *)(lVar12 + 0x18);
    uVar4 = 1 << (ulong)(uVar4 & 0x1f);
    if ((int)uVar5 < 1) {
      bVar1 = false;
      uVar11 = 0xbf800000;
    }
    else {
      uVar13 = 0;
      bVar1 = false;
      uVar11 = 0xbf800000;
      do {
        if (uVar5 <= uVar13) {
          uVar11 = native_sub_43283c();
                    /* WARNING: Subroutine does not return */
          native_sub_4327dc(uVar11,0);
        }
        lVar7 = *(long *)(lVar12 + (long)(int)uVar13 * 8 + 0x20);
        if (lVar7 == 0) goto LAB_00730ca0;
        iVar2 = native_UnityEngine_Camera__get_clearFlags_8d8ab8(lVar7,0);
        if ((iVar2 == 2) ||
           (iVar2 = native_UnityEngine_Camera__get_clearFlags_8d8ab8(lVar7,0), iVar2 == 1)) {
          bVar1 = true;
        }
        uVar14 = native_UnityEngine_Camera__get_depth_8d87e0(lVar7,0);
        uVar11 = native_UnityEngine_Mathf__Max_8d9f90(uVar11,uVar14,0);
        uVar5 = native_UnityEngine_Camera__get_cullingMask_8d88b0(lVar7,0);
        native_UnityEngine_Camera__set_cullingMask_8d88f0(lVar7,uVar5 & ~uVar4,0);
        uVar5 = *(uint *)(lVar12 + 0x18);
        uVar13 = uVar13 + 1;
      } while ((int)uVar13 < (int)uVar5);
    }
    uVar14 = native_UnityEngine_Component__get_gameObject_8da66c(lVar9,0);
    if (((*(byte *)(_NGUITools_TypeInfo_12d53c8 + 0x133) >> 2 & 1) != 0) &&
       (*(int *)(_NGUITools_TypeInfo_12d53c8 + 0xe0) == 0)) {
      native_sub_4327ec(_NGUITools_TypeInfo_12d53c8);
    }
    lVar12 = native_NGUITools__AddChild_Camera__4a4ff0
                       (uVar14,0,_Method_NGUITools_AddChild_Camera____12e56c8);
    if ((lVar12 == 0) ||
       (lVar7 = native_UnityEngine_Component__get_gameObject_8da66c(lVar12,0), lVar7 == 0))
    goto LAB_00730ca0;
    native_UnityEngine_GameObject__AddComponent_ActiveAnimation__4a2118
              (lVar7,_Method_UnityEngine_GameObject_AddComponent_UICamera____12e48c8);
    uVar6 = 2;
    if (bVar1) {
      uVar6 = 3;
    }
    native_UnityEngine_Camera__set_clearFlags_8d8af8(lVar12,uVar6,0);
    native_UnityEngine_Color__get_grey_8d9e54(0);
    native_UnityEngine_Camera__set_backgroundColor_8d8a10(lVar12,0);
    native_UnityEngine_Camera__set_cullingMask_8d88f0(lVar12,uVar4,0);
    native_UnityEngine_Camera__set_depth_8d8820((float)uVar11 + 1.0,lVar12,0);
    native_UnityEngine_Camera__set_orthographic_8d8700(lVar12,1,0);
    native_UnityEngine_Camera__set_orthographicSize_8d8670(0x3f800000,lVar12,0);
    native_UnityEngine_Camera__set_nearClipPlane_8d84c0(0xc1200000,lVar12,0);
    native_UnityEngine_Camera__set_farClipPlane_8d8550(0x41200000,lVar12,0);
    if (((*(byte *)(_NGUITools_TypeInfo_12d53c8 + 0x133) >> 2 & 1) != 0) &&
       (*(int *)(_NGUITools_TypeInfo_12d53c8 + 0xe0) == 0)) {
      native_sub_4327ec();
    }
    lVar7 = native_NGUITools__FindActive_AudioListener__4a5b30
                      (_Method_NGUITools_FindActive_AudioListener____12e5700);
    if ((lVar7 == 0) || (*(long *)(lVar7 + 0x18) == 0)) {
      lVar12 = native_UnityEngine_Component__get_gameObject_8da66c(lVar12,0);
      if (lVar12 == 0) goto LAB_00730ca0;
      native_UnityEngine_GameObject__AddComponent_ActiveAnimation__4a2118
                (lVar12,_Method_UnityEngine_GameObject_AddComponent_AudioListener____12e4748);
    }
    lVar9 = native_UnityEngine_Component__get_gameObject_8da66c(lVar9,0);
    if (lVar9 == 0) goto LAB_00730ca0;
    lVar12 = native_UnityEngine_GameObject__AddComponent_ActiveAnimation__4a2118
                       (lVar9,_Method_UnityEngine_GameObject_AddComponent_UIPanel____12e48f0);
  }
  if (((*(byte *)(_UnityEngine_Object_TypeInfo_12d54e0 + 0x133) >> 2 & 1) != 0) &&
     (*(int *)(_UnityEngine_Object_TypeInfo_12d54e0 + 0xe0) == 0)) {
    native_sub_4327ec();
  }
  uVar10 = native_UnityEngine_Object__op_Inequality_8d76fc(param_1,0,0);
  if ((uVar10 & 1) == 0) {
    return lVar12;
  }
  for (; param_1 != 0; param_1 = native_UnityEngine_Transform__get_parent_765eb0(param_1,0)) {
    uVar11 = native_UnityEngine_Transform__get_parent_765eb0(param_1,0);
    if (((*(byte *)(_UnityEngine_Object_TypeInfo_12d54e0 + 0x133) >> 2 & 1) != 0) &&
       (*(int *)(_UnityEngine_Object_TypeInfo_12d54e0 + 0xe0) == 0)) {
      native_sub_4327ec(_UnityEngine_Object_TypeInfo_12d54e0);
    }
    uVar10 = native_UnityEngine_Object__op_Inequality_8d76fc(uVar11,0,0);
    if ((uVar10 & 1) == 0) {
      if (lVar12 != 0) {
        lVar9 = native_UnityEngine_Component__get_transform_8da62c(lVar12,0);
        if (((*(byte *)(_NGUITools_TypeInfo_12d53c8 + 0x133) >> 2 & 1) != 0) &&
           (*(int *)(_NGUITools_TypeInfo_12d53c8 + 0xe0) == 0)) {
          native_sub_4327ec(_NGUITools_TypeInfo_12d53c8);
        }
        if (lVar9 != 0) {
          uVar10 = native_UnityEngine_Transform__IsChildOf_772d5c(lVar9,param_1,0);
          if ((uVar10 & 1) == 0) {
            uVar11 = native_UnityEngine_Component__get_transform_8da62c(lVar12,0);
            native_UnityEngine_Transform__set_parent_771f18(param_1,uVar11,0);
            native_UnityEngine_Vector3__get_one_776a20(0);
            native_UnityEngine_Transform__set_localScale_771e30(param_1,0);
            native_UnityEngine_Vector3__get_zero_776668(0);
            native_UnityEngine_Transform__set_localPosition_7718a4(param_1,0);
            uVar11 = native_UIRect__get_cachedTransform_c27c58(lVar12,0);
            lVar9 = native_UIRect__get_cachedGameObject_c2d1c0(lVar12,0);
            if (lVar9 != 0) {
              uVar6 = native_UnityEngine_GameObject__get_layer_8de608(lVar9,0);
              if (((*(byte *)(_NGUITools_TypeInfo_12d53c8 + 0x133) >> 2 & 1) != 0) &&
                 (*(int *)(_NGUITools_TypeInfo_12d53c8 + 0xe0) == 0)) {
                native_sub_4327ec(_NGUITools_TypeInfo_12d53c8);
              }
              native_NGUITools__SetChildLayer_730f0c(uVar11,uVar6);
              return lVar12;
            }
          }
          else {
            lVar9 = native_UnityEngine_Component__get_gameObject_8da66c(param_1,0);
            if (lVar9 != 0) {
              lVar9 = native_UnityEngine_GameObject__AddComponent_ActiveAnimation__4a2118
                                (lVar9,
                                 _Method_UnityEngine_GameObject_AddComponent_UIPanel____12e48f0);
              return lVar9;
            }
          }
        }
      }
      break;
    }
  }
LAB_00730ca0:
                    /* WARNING: Subroutine does not return */
  native_sub_432810();
}



/* UIPanel$$Find @ 0xaf4e6c
 * UIPanel_o* UIPanel__Find (UnityEngine_Transform_o* trans, bool createIfMissing, int32_t layer, const MethodInfo* method); */

/* WARNING: Removing unreachable block (ram,0x007308a0) */
/* WARNING: Removing unreachable block (ram,0x007308bc) */
/* WARNING: Removing unreachable block (ram,0x00730b14) */
/* WARNING: Removing unreachable block (ram,0x00730b48) */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* UIPanel$$Find
   UIPanel_o* UIPanel__Find (UnityEngine_Transform_o* trans, bool createIfMissing, int32_t layer,
   const MethodInfo* method); */

long native_UIPanel__Find_af4e6c(long param_1,ulong param_2,int param_3)

{
  bool bVar1;
  int iVar2;
  int iVar3;
  uint uVar4;
  uint uVar5;
  undefined4 uVar6;
  long lVar7;
  long lVar8;
  long lVar9;
  ulong uVar10;
  undefined8 uVar11;
  long lVar12;
  uint uVar13;
  undefined8 uVar14;
  undefined8 uStack_a8;
  undefined8 uStack_a0;
  long lStack_98;
  undefined8 uStack_90;
  undefined8 uStack_88;
  long lStack_80;
  
  if ((bRam0000000001342063 & 1) == 0) {
    native_sub_43273c(&Method_NGUITools_FindInParents_UIPanel____12e5768);
    native_sub_43273c(&NGUITools_TypeInfo_12d53c8);
    native_sub_43273c(&UnityEngine_Object_TypeInfo_12d54e0);
    bRam0000000001342063 = 1;
  }
  if (((*(byte *)(_NGUITools_TypeInfo_12d53c8 + 0x133) >> 2 & 1) != 0) &&
     (*(int *)(_NGUITools_TypeInfo_12d53c8 + 0xe0) == 0)) {
    native_sub_4327ec();
  }
  lVar9 = native_NGUITools__FindInParents_object__4a5cac
                    (param_1,_Method_NGUITools_FindInParents_UIPanel____12e5768);
  if (((*(byte *)(_UnityEngine_Object_TypeInfo_12d54e0 + 0x133) >> 2 & 1) != 0) &&
     (*(int *)(_UnityEngine_Object_TypeInfo_12d54e0 + 0xe0) == 0)) {
    native_sub_4327ec(_UnityEngine_Object_TypeInfo_12d54e0);
  }
  uVar10 = native_UnityEngine_Object__op_Inequality_8d76fc(lVar9,0,0);
  if ((uVar10 & 1) != 0) {
    return lVar9;
  }
  while( true ) {
    if (param_1 == 0) {
                    /* WARNING: Subroutine does not return */
      native_sub_432810();
    }
    uVar11 = native_UnityEngine_Transform__get_parent_765eb0(param_1,0);
    if (((*(byte *)(_UnityEngine_Object_TypeInfo_12d54e0 + 0x133) >> 2 & 1) != 0) &&
       (*(int *)(_UnityEngine_Object_TypeInfo_12d54e0 + 0xe0) == 0)) {
      native_sub_4327ec(_UnityEngine_Object_TypeInfo_12d54e0);
    }
    uVar10 = native_UnityEngine_Object__op_Inequality_8d76fc(uVar11,0,0);
    if ((uVar10 & 1) == 0) break;
    param_1 = native_UnityEngine_Transform__get_parent_765eb0(param_1,0);
  }
  if ((param_2 & 1) == 0) {
    return 0;
  }
  if (((*(byte *)(_NGUITools_TypeInfo_12d53c8 + 0x133) >> 2 & 1) != 0) &&
     (*(int *)(_NGUITools_TypeInfo_12d53c8 + 0xe0) == 0)) {
    native_sub_4327ec();
  }
  if ((bRam000000000133f5a5 & 1) == 0) {
    native_sub_43273c(&Method_UnityEngine_Component_GetComponentInChildren_UICamera____12e2cb8,0,
                      param_3,0);
    native_sub_43273c(&Method_UnityEngine_Component_GetComponentInChildren_UIPanel____12e2cd0);
    native_sub_43273c(&Method_UnityEngine_Component_GetComponent_Camera____12e29a8);
    native_sub_43273c(&Method_System_Collections_Generic_List_Enumerator_UIRoot__Dispose___12da6c0);
    native_sub_43273c(&Method_System_Collections_Generic_List_Enumerator_UIRoot__MoveNext___12da6c8)
    ;
    native_sub_43273c(&
                      Method_System_Collections_Generic_List_Enumerator_UIRoot__get_Current___12da6d0
                     );
    native_sub_43273c(&Method_UnityEngine_GameObject_AddComponent_AudioListener____12e4748);
    native_sub_43273c(&Method_UnityEngine_GameObject_AddComponent_UICamera____12e48c8);
    native_sub_43273c(&Method_UnityEngine_GameObject_AddComponent_UIPanel____12e48f0);
    native_sub_43273c(&Method_UnityEngine_GameObject_AddComponent_UIRoot____12e48f8);
    native_sub_43273c(&Method_System_Collections_Generic_List_UIRoot__GetEnumerator___12dd388);
    native_sub_43273c(&Method_System_Collections_Generic_List_UIRoot__get_Count___12dd398);
    native_sub_43273c(&Method_System_Collections_Generic_List_UIPanel__get_Count___12dd368);
    native_sub_43273c(&Method_System_Collections_Generic_List_UIPanel__get_Item___12dd370);
    native_sub_43273c(&Method_NGUITools_AddChild_Camera____12e56c8);
    native_sub_43273c(&Method_NGUITools_FindActive_AudioListener____12e5700);
    native_sub_43273c(&Method_NGUITools_FindActive_Camera____12e5708);
    native_sub_43273c(&Method_NGUITools_FindInParents_UIRoot____12e5780);
    native_sub_43273c(&NGUITools_TypeInfo_12d53c8);
    native_sub_43273c(&UnityEngine_Object_TypeInfo_12d54e0);
    native_sub_43273c(&UIPanel_TypeInfo_12d6478);
    native_sub_43273c(&UIRoot_TypeInfo_12d64a8);
    native_sub_43273c(&StringLiteral_2D_UI_12ebc08);
    native_sub_43273c(&StringLiteral_UI_Root__3D__12f2920);
    native_sub_43273c(&StringLiteral_UI_12f2910);
    native_sub_43273c(&StringLiteral_UI_Root_12f2918);
    bRam000000000133f5a5 = 1;
  }
  uStack_88 = 0;
  lStack_80 = 0;
  uStack_90 = 0;
  if (((*(byte *)(_UnityEngine_Object_TypeInfo_12d54e0 + 0x133) >> 2 & 1) != 0) &&
     (*(int *)(_UnityEngine_Object_TypeInfo_12d54e0 + 0xe0) == 0)) {
    native_sub_4327ec();
  }
  uVar10 = native_UnityEngine_Object__op_Inequality_8d76fc(param_1,0,0);
  lVar9 = 0;
  if ((uVar10 & 1) != 0) {
    if (param_1 == 0) goto LAB_00730ca0;
    uVar11 = native_UnityEngine_Component__get_gameObject_8da66c(param_1,0);
    if (((*(byte *)(_NGUITools_TypeInfo_12d53c8 + 0x133) >> 2 & 1) != 0) &&
       (*(int *)(_NGUITools_TypeInfo_12d53c8 + 0xe0) == 0)) {
      native_sub_4327ec(_NGUITools_TypeInfo_12d53c8);
    }
    lVar9 = native_NGUITools__FindInParents_object__4a5c04
                      (uVar11,_Method_NGUITools_FindInParents_UIRoot____12e5780);
  }
  if (((*(byte *)(_UnityEngine_Object_TypeInfo_12d54e0 + 0x133) >> 2 & 1) != 0) &&
     (*(int *)(_UnityEngine_Object_TypeInfo_12d54e0 + 0xe0) == 0)) {
    native_sub_4327ec();
  }
  uVar10 = native_UnityEngine_Object__op_Equality_8e9a3c(lVar9,0,0);
  if ((uVar10 & 1) != 0) {
    if (((*(byte *)(_UIRoot_TypeInfo_12d64a8 + 0x133) >> 2 & 1) != 0) &&
       (*(int *)(_UIRoot_TypeInfo_12d64a8 + 0xe0) == 0)) {
      native_sub_4327ec();
    }
    lVar12 = **(long **)(_UIRoot_TypeInfo_12d64a8 + 0xb8);
    if (lVar12 == 0) goto LAB_00730ca0;
    if (0 < *(int *)(lVar12 + 0x18)) {
      if (((*(byte *)(_UIRoot_TypeInfo_12d64a8 + 0x133) >> 2 & 1) != 0) &&
         (*(int *)(_UIRoot_TypeInfo_12d64a8 + 0xe0) == 0)) {
        native_sub_4327ec();
        lVar12 = **(long **)(_UIRoot_TypeInfo_12d64a8 + 0xb8);
        if (lVar12 == 0) goto LAB_00730ca0;
      }
      native_System_Collections_Generic_List_BE2_Op_FunctionLocalVariable___GetEnumerator_d414fc
                (&uStack_a8,lVar12,
                 _Method_System_Collections_Generic_List_UIRoot__GetEnumerator___12dd388);
      lStack_80 = lStack_98;
      uStack_88 = uStack_a0;
      uStack_90 = uStack_a8;
      do {
        uVar10 = native_System_Collections_Generic_List_Enumerator_BE2_Op_FunctionLocalVariable___MoveNext_7e8f30
                           (&uStack_90,
                            _Method_System_Collections_Generic_List_Enumerator_UIRoot__MoveNext___12da6c8
                           );
        lVar12 = lStack_80;
        lVar7 = lVar9;
        if ((uVar10 & 1) == 0) break;
        if (lStack_80 == 0) {
                    /* WARNING: Subroutine does not return */
          native_sub_432810();
        }
        lVar7 = native_UnityEngine_Component__get_gameObject_8da66c(lStack_80,0);
        if (lVar7 == 0) {
                    /* WARNING: Subroutine does not return */
          native_sub_432810();
        }
        iVar2 = native_UnityEngine_GameObject__get_layer_8de608(lVar7,0);
        lVar7 = lVar12;
      } while (iVar2 != param_3);
      lVar9 = lVar7;
      native_System_Collections_Generic_List_Enumerator_BE2_Op_FunctionLocalVariable___Dispose_7e8f2c
                (&uStack_90,
                 _Method_System_Collections_Generic_List_Enumerator_UIRoot__Dispose___12da6c0);
    }
  }
  if (((*(byte *)(_UnityEngine_Object_TypeInfo_12d54e0 + 0x133) >> 2 & 1) != 0) &&
     (*(int *)(_UnityEngine_Object_TypeInfo_12d54e0 + 0xe0) == 0)) {
    native_sub_4327ec();
  }
  uVar10 = native_UnityEngine_Object__op_Equality_8e9a3c(lVar9,0,0);
  if ((uVar10 & 1) != 0) {
    if (((*(byte *)(_UIPanel_TypeInfo_12d6478 + 0x133) >> 2 & 1) != 0) &&
       (*(int *)(_UIPanel_TypeInfo_12d6478 + 0xe0) == 0)) {
      native_sub_4327ec();
    }
    if (**(long **)(_UIPanel_TypeInfo_12d6478 + 0xb8) == 0) goto LAB_00730ca0;
    iVar2 = *(int *)(**(long **)(_UIPanel_TypeInfo_12d6478 + 0xb8) + 0x18);
    if (0 < iVar2) {
      lVar12 = 0;
      while( true ) {
        if (((*(byte *)(_UIPanel_TypeInfo_12d6478 + 0x133) >> 2 & 1) != 0) &&
           (*(int *)(_UIPanel_TypeInfo_12d6478 + 0xe0) == 0)) {
          native_sub_4327ec();
        }
        lVar7 = **(long **)(_UIPanel_TypeInfo_12d6478 + 0xb8);
        if (lVar7 == 0) goto LAB_00730ca0;
        if (*(uint *)(lVar7 + 0x18) <= (uint)lVar12) {
          native_System_ThrowHelper__ThrowArgumentOutOfRangeException_9fe0f4(0);
        }
        lVar7 = *(long *)(*(long *)(lVar7 + 0x10) + lVar12 * 8 + 0x20);
        if ((lVar7 == 0) ||
           (lVar8 = native_UnityEngine_Component__get_gameObject_8da66c(lVar7,0), lVar8 == 0))
        goto LAB_00730ca0;
        iVar3 = native_UnityEngine_Object__get_hideFlags_8ea7e0(lVar8,0);
        if ((iVar3 == 0) &&
           (iVar3 = native_UnityEngine_GameObject__get_layer_8de608(lVar8,0), iVar3 == param_3)) {
          uVar11 = native_UnityEngine_Component__get_transform_8da62c(lVar7,0);
          if (param_1 != 0) {
            native_UnityEngine_Transform__set_parent_771f18(param_1,uVar11,0);
            native_UnityEngine_Vector3__get_one_776a20(0);
            native_UnityEngine_Transform__set_localScale_771e30(param_1,0);
            return lVar7;
          }
          goto LAB_00730ca0;
        }
        if (iVar2 <= (int)((uint)lVar12 + 1)) break;
        lVar12 = lVar12 + 1;
      }
    }
  }
  if (((*(byte *)(_UnityEngine_Object_TypeInfo_12d54e0 + 0x133) >> 2 & 1) != 0) &&
     (*(int *)(_UnityEngine_Object_TypeInfo_12d54e0 + 0xe0) == 0)) {
    native_sub_4327ec();
  }
  uVar10 = native_UnityEngine_Object__op_Inequality_8d76fc(lVar9,0,0);
  if ((uVar10 & 1) != 0) {
    if (lVar9 == 0) goto LAB_00730ca0;
    lVar12 = native_UnityEngine_Component__GetComponentInChildren_Animation__49db98
                       (lVar9,
                        _Method_UnityEngine_Component_GetComponentInChildren_UICamera____12e2cb8);
    if (((*(byte *)(_UnityEngine_Object_TypeInfo_12d54e0 + 0x133) >> 2 & 1) != 0) &&
       (*(int *)(_UnityEngine_Object_TypeInfo_12d54e0 + 0xe0) == 0)) {
      native_sub_4327ec(_UnityEngine_Object_TypeInfo_12d54e0);
    }
    uVar10 = native_UnityEngine_Object__op_Inequality_8d76fc(lVar12,0,0);
    if ((uVar10 & 1) != 0) {
      if ((lVar12 == 0) ||
         (lVar12 = native_UnityEngine_Component__GetComponent_ActiveAnimation__49daec
                             (lVar12,_Method_UnityEngine_Component_GetComponent_Camera____12e29a8),
         lVar12 == 0)) goto LAB_00730ca0;
      uVar4 = native_UnityEngine_Camera__get_orthographic_8d86c0(lVar12,0);
      if ((uVar4 & 1) == 0) {
        lVar9 = 0;
        param_1 = 0;
      }
    }
  }
  if (((*(byte *)(_UnityEngine_Object_TypeInfo_12d54e0 + 0x133) >> 2 & 1) != 0) &&
     (*(int *)(_UnityEngine_Object_TypeInfo_12d54e0 + 0xe0) == 0)) {
    native_sub_4327ec();
  }
  uVar10 = native_UnityEngine_Object__op_Equality_8e9a3c(lVar9,0,0);
  if ((uVar10 & 1) == 0) {
    if (lVar9 == 0) goto LAB_00730ca0;
  }
  else {
    if (((*(byte *)(_NGUITools_TypeInfo_12d53c8 + 0x133) >> 2 & 1) != 0) &&
       (*(int *)(_NGUITools_TypeInfo_12d53c8 + 0xe0) == 0)) {
      native_sub_4327ec();
    }
    lVar12 = native_NGUITools__AddChild_72eda0(0,0);
    if (lVar12 == 0) goto LAB_00730ca0;
    lVar9 = native_UnityEngine_GameObject__AddComponent_ActiveAnimation__4a2118
                      (lVar12,_Method_UnityEngine_GameObject_AddComponent_UIRoot____12e48f8);
    if ((param_3 == -1) &&
       (param_3 = native_UnityEngine_LayerMask__NameToLayer_8dfe14(_StringLiteral_UI_12f2910,0),
       param_3 == -1)) {
      param_3 = native_UnityEngine_LayerMask__NameToLayer_8dfe14(_StringLiteral_2D_UI_12ebc08,0);
    }
    native_UnityEngine_GameObject__set_layer_8de648(lVar12,param_3,0);
    native_UnityEngine_Object__set_name_8e9c08(lVar12,_StringLiteral_UI_Root_12f2918,0);
    if (lVar9 == 0) goto LAB_00730ca0;
    *(undefined4 *)(lVar9 + 0x18) = 0;
    native_UIRoot__UpdateScale_c2fb2c(lVar9,1,0);
  }
  lVar12 = native_UnityEngine_Component__GetComponentInChildren_Animation__49db98
                     (lVar9,_Method_UnityEngine_Component_GetComponentInChildren_UIPanel____12e2cd0)
  ;
  if (((*(byte *)(_UnityEngine_Object_TypeInfo_12d54e0 + 0x133) >> 2 & 1) != 0) &&
     (*(int *)(_UnityEngine_Object_TypeInfo_12d54e0 + 0xe0) == 0)) {
    native_sub_4327ec(_UnityEngine_Object_TypeInfo_12d54e0);
  }
  uVar10 = native_UnityEngine_Object__op_Equality_8e9a3c(lVar12,0,0);
  if ((uVar10 & 1) != 0) {
    if (((*(byte *)(_NGUITools_TypeInfo_12d53c8 + 0x133) >> 2 & 1) != 0) &&
       (*(int *)(_NGUITools_TypeInfo_12d53c8 + 0xe0) == 0)) {
      native_sub_4327ec();
    }
    lVar12 = native_NGUITools__FindActive_AudioListener__4a5b30
                       (_Method_NGUITools_FindActive_Camera____12e5708);
    lVar7 = native_UnityEngine_Component__get_gameObject_8da66c(lVar9,0);
    if ((lVar7 == 0) ||
       (uVar4 = native_UnityEngine_GameObject__get_layer_8de608(lVar7,0), lVar12 == 0))
    goto LAB_00730ca0;
    uVar5 = *(uint *)(lVar12 + 0x18);
    uVar4 = 1 << (ulong)(uVar4 & 0x1f);
    if ((int)uVar5 < 1) {
      bVar1 = false;
      uVar11 = 0xbf800000;
    }
    else {
      uVar13 = 0;
      bVar1 = false;
      uVar11 = 0xbf800000;
      do {
        if (uVar5 <= uVar13) {
          uVar11 = native_sub_43283c();
                    /* WARNING: Subroutine does not return */
          native_sub_4327dc(uVar11,0);
        }
        lVar7 = *(long *)(lVar12 + (long)(int)uVar13 * 8 + 0x20);
        if (lVar7 == 0) goto LAB_00730ca0;
        iVar2 = native_UnityEngine_Camera__get_clearFlags_8d8ab8(lVar7,0);
        if ((iVar2 == 2) ||
           (iVar2 = native_UnityEngine_Camera__get_clearFlags_8d8ab8(lVar7,0), iVar2 == 1)) {
          bVar1 = true;
        }
        uVar14 = native_UnityEngine_Camera__get_depth_8d87e0(lVar7,0);
        uVar11 = native_UnityEngine_Mathf__Max_8d9f90(uVar11,uVar14,0);
        uVar5 = native_UnityEngine_Camera__get_cullingMask_8d88b0(lVar7,0);
        native_UnityEngine_Camera__set_cullingMask_8d88f0(lVar7,uVar5 & ~uVar4,0);
        uVar5 = *(uint *)(lVar12 + 0x18);
        uVar13 = uVar13 + 1;
      } while ((int)uVar13 < (int)uVar5);
    }
    uVar14 = native_UnityEngine_Component__get_gameObject_8da66c(lVar9,0);
    if (((*(byte *)(_NGUITools_TypeInfo_12d53c8 + 0x133) >> 2 & 1) != 0) &&
       (*(int *)(_NGUITools_TypeInfo_12d53c8 + 0xe0) == 0)) {
      native_sub_4327ec(_NGUITools_TypeInfo_12d53c8);
    }
    lVar12 = native_NGUITools__AddChild_Camera__4a4ff0
                       (uVar14,0,_Method_NGUITools_AddChild_Camera____12e56c8);
    if ((lVar12 == 0) ||
       (lVar7 = native_UnityEngine_Component__get_gameObject_8da66c(lVar12,0), lVar7 == 0))
    goto LAB_00730ca0;
    native_UnityEngine_GameObject__AddComponent_ActiveAnimation__4a2118
              (lVar7,_Method_UnityEngine_GameObject_AddComponent_UICamera____12e48c8);
    uVar6 = 2;
    if (bVar1) {
      uVar6 = 3;
    }
    native_UnityEngine_Camera__set_clearFlags_8d8af8(lVar12,uVar6,0);
    native_UnityEngine_Color__get_grey_8d9e54(0);
    native_UnityEngine_Camera__set_backgroundColor_8d8a10(lVar12,0);
    native_UnityEngine_Camera__set_cullingMask_8d88f0(lVar12,uVar4,0);
    native_UnityEngine_Camera__set_depth_8d8820((float)uVar11 + 1.0,lVar12,0);
    native_UnityEngine_Camera__set_orthographic_8d8700(lVar12,1,0);
    native_UnityEngine_Camera__set_orthographicSize_8d8670(0x3f800000,lVar12,0);
    native_UnityEngine_Camera__set_nearClipPlane_8d84c0(0xc1200000,lVar12,0);
    native_UnityEngine_Camera__set_farClipPlane_8d8550(0x41200000,lVar12,0);
    if (((*(byte *)(_NGUITools_TypeInfo_12d53c8 + 0x133) >> 2 & 1) != 0) &&
       (*(int *)(_NGUITools_TypeInfo_12d53c8 + 0xe0) == 0)) {
      native_sub_4327ec();
    }
    lVar7 = native_NGUITools__FindActive_AudioListener__4a5b30
                      (_Method_NGUITools_FindActive_AudioListener____12e5700);
    if ((lVar7 == 0) || (*(long *)(lVar7 + 0x18) == 0)) {
      lVar12 = native_UnityEngine_Component__get_gameObject_8da66c(lVar12,0);
      if (lVar12 == 0) goto LAB_00730ca0;
      native_UnityEngine_GameObject__AddComponent_ActiveAnimation__4a2118
                (lVar12,_Method_UnityEngine_GameObject_AddComponent_AudioListener____12e4748);
    }
    lVar9 = native_UnityEngine_Component__get_gameObject_8da66c(lVar9,0);
    if (lVar9 == 0) goto LAB_00730ca0;
    lVar12 = native_UnityEngine_GameObject__AddComponent_ActiveAnimation__4a2118
                       (lVar9,_Method_UnityEngine_GameObject_AddComponent_UIPanel____12e48f0);
  }
  if (((*(byte *)(_UnityEngine_Object_TypeInfo_12d54e0 + 0x133) >> 2 & 1) != 0) &&
     (*(int *)(_UnityEngine_Object_TypeInfo_12d54e0 + 0xe0) == 0)) {
    native_sub_4327ec();
  }
  uVar10 = native_UnityEngine_Object__op_Inequality_8d76fc(param_1,0,0);
  if ((uVar10 & 1) == 0) {
    return lVar12;
  }
  for (; param_1 != 0; param_1 = native_UnityEngine_Transform__get_parent_765eb0(param_1,0)) {
    uVar11 = native_UnityEngine_Transform__get_parent_765eb0(param_1,0);
    if (((*(byte *)(_UnityEngine_Object_TypeInfo_12d54e0 + 0x133) >> 2 & 1) != 0) &&
       (*(int *)(_UnityEngine_Object_TypeInfo_12d54e0 + 0xe0) == 0)) {
      native_sub_4327ec(_UnityEngine_Object_TypeInfo_12d54e0);
    }
    uVar10 = native_UnityEngine_Object__op_Inequality_8d76fc(uVar11,0,0);
    if ((uVar10 & 1) == 0) {
      if (lVar12 != 0) {
        lVar9 = native_UnityEngine_Component__get_transform_8da62c(lVar12,0);
        if (((*(byte *)(_NGUITools_TypeInfo_12d53c8 + 0x133) >> 2 & 1) != 0) &&
           (*(int *)(_NGUITools_TypeInfo_12d53c8 + 0xe0) == 0)) {
          native_sub_4327ec(_NGUITools_TypeInfo_12d53c8);
        }
        if (lVar9 != 0) {
          uVar10 = native_UnityEngine_Transform__IsChildOf_772d5c(lVar9,param_1,0);
          if ((uVar10 & 1) == 0) {
            uVar11 = native_UnityEngine_Component__get_transform_8da62c(lVar12,0);
            native_UnityEngine_Transform__set_parent_771f18(param_1,uVar11,0);
            native_UnityEngine_Vector3__get_one_776a20(0);
            native_UnityEngine_Transform__set_localScale_771e30(param_1,0);
            native_UnityEngine_Vector3__get_zero_776668(0);
            native_UnityEngine_Transform__set_localPosition_7718a4(param_1,0);
            uVar11 = native_UIRect__get_cachedTransform_c27c58(lVar12,0);
            lVar9 = native_UIRect__get_cachedGameObject_c2d1c0(lVar12,0);
            if (lVar9 != 0) {
              uVar6 = native_UnityEngine_GameObject__get_layer_8de608(lVar9,0);
              if (((*(byte *)(_NGUITools_TypeInfo_12d53c8 + 0x133) >> 2 & 1) != 0) &&
                 (*(int *)(_NGUITools_TypeInfo_12d53c8 + 0xe0) == 0)) {
                native_sub_4327ec(_NGUITools_TypeInfo_12d53c8);
              }
              native_NGUITools__SetChildLayer_730f0c(uVar11,uVar6);
              return lVar12;
            }
          }
          else {
            lVar9 = native_UnityEngine_Component__get_gameObject_8da66c(param_1,0);
            if (lVar9 != 0) {
              lVar9 = native_UnityEngine_GameObject__AddComponent_ActiveAnimation__4a2118
                                (lVar9,
                                 _Method_UnityEngine_GameObject_AddComponent_UIPanel____12e48f0);
              return lVar9;
            }
          }
        }
      }
      break;
    }
  }
LAB_00730ca0:
                    /* WARNING: Subroutine does not return */
  native_sub_432810();
}



/* UIPanel$$GetWindowSize @ 0xaefd70
 * UnityEngine_Vector2_o UIPanel__GetWindowSize (UIPanel_o* __this, const MethodInfo* method); */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* UIPanel$$GetWindowSize
   UnityEngine_Vector2_o UIPanel__GetWindowSize (UIPanel_o* __this, const MethodInfo* method); */

undefined1  [16]
native_UIPanel__GetWindowSize_aefd70(undefined1 param_1 [16],undefined8 param_2,undefined8 param_3)

{
  undefined4 uVar1;
  long lVar2;
  ulong uVar3;
  float fVar4;
  undefined1 auVar5 [16];
  ulong uVar6;
  undefined8 uVar7;
  
  if ((bRam0000000001342064 & 1) == 0) {
    native_sub_43273c(&NGUITools_TypeInfo_12d53c8);
    native_sub_43273c(&UnityEngine_Object_TypeInfo_12d54e0);
    bRam0000000001342064 = 1;
  }
  lVar2 = native_UIRect__get_root_c2d7ac(param_3,0);
  if (((*(byte *)(_NGUITools_TypeInfo_12d53c8 + 0x133) >> 2 & 1) != 0) &&
     (*(int *)(_NGUITools_TypeInfo_12d53c8 + 0xe0) == 0)) {
    native_sub_4327ec(_NGUITools_TypeInfo_12d53c8);
  }
  auVar5 = native_NGUITools__get_screenSize_7338a0(0);
  uVar7 = auVar5._8_8_;
  uVar6 = auVar5._0_8_;
  if (((*(byte *)(_UnityEngine_Object_TypeInfo_12d54e0 + 0x133) >> 2 & 1) != 0) &&
     (*(int *)(_UnityEngine_Object_TypeInfo_12d54e0 + 0xe0) == 0)) {
    native_sub_4327ec();
  }
  uVar3 = native_UnityEngine_Object__op_Inequality_8d76fc(lVar2,0,0);
  if ((uVar3 & 1) != 0) {
    uVar1 = native_UnityEngine_Mathf__RoundToInt_8e50f0(param_2,0);
    if (lVar2 == 0) {
                    /* WARNING: Subroutine does not return */
      native_sub_432810();
    }
    fVar4 = (float)native_UIRoot__GetPixelSizeAdjustment_c2f7d0(lVar2,uVar1,0);
    uVar6 = (ulong)(uint)(auVar5._0_4_ * fVar4);
    uVar7 = 0;
  }
  auVar5._8_8_ = uVar7;
  auVar5._0_8_ = uVar6;
  return auVar5;
}



/* UIPanel$$GetViewSize @ 0xaefab4
 * UnityEngine_Vector2_o UIPanel__GetViewSize (UIPanel_o* __this, const MethodInfo* method); */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* UIPanel$$GetViewSize
   UnityEngine_Vector2_o UIPanel__GetViewSize (UIPanel_o* __this, const MethodInfo* method); */

undefined1  [16] native_UIPanel__GetViewSize_aefab4(long param_1)

{
  undefined4 uVar1;
  undefined4 extraout_s0;
  undefined4 uVar3;
  undefined4 extraout_var;
  undefined8 uVar4;
  undefined8 extraout_var_00;
  undefined1 auVar2 [16];
  
  if ((bRam0000000001342065 & 1) == 0) {
    native_sub_43273c(&NGUITools_TypeInfo_12d53c8);
    bRam0000000001342065 = 1;
  }
  if (*(int *)(param_1 + 0x140) == 0) {
    if (((*(byte *)(_NGUITools_TypeInfo_12d53c8 + 0x133) >> 2 & 1) != 0) &&
       (*(int *)(_NGUITools_TypeInfo_12d53c8 + 0xe0) == 0)) {
      native_sub_4327ec();
    }
    native_NGUITools__get_screenSize_7338a0(0);
    uVar1 = extraout_s0;
    uVar3 = extraout_var;
    uVar4 = extraout_var_00;
  }
  else {
    uVar1 = *(undefined4 *)(param_1 + 0x14c);
    uVar3 = 0;
    uVar4 = 0;
  }
  auVar2._4_4_ = uVar3;
  auVar2._0_4_ = uVar1;
  auVar2._8_8_ = uVar4;
  return auVar2;
}



/* UIPanel$$.ctor @ 0xaf5060
 * void UIPanel___ctor (UIPanel_o* __this, const MethodInfo* method); */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* UIPanel$$.ctor
   void UIPanel___ctor (UIPanel_o* __this, const MethodInfo* method); */

void native_UIPanel___ctor_af5060(long param_1)

{
  undefined8 uVar1;
  undefined4 uVar2;
  undefined4 uVar3;
  undefined8 uStack_b0;
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
  undefined8 uStack_38;
  undefined8 uStack_30;
  undefined8 uStack_28;
  
  if ((bRam0000000001342066 & 1) == 0) {
    native_sub_43273c(&Method_System_Collections_Generic_List_UIDrawCall___ctor___12dd2a8);
    native_sub_43273c(&Method_System_Collections_Generic_List_UIWidget___ctor___12dd410);
    native_sub_43273c(&System_Collections_Generic_List_UIWidget__TypeInfo_12d2c48);
    native_sub_43273c(&System_Collections_Generic_List_UIDrawCall__TypeInfo_12d2c08);
    native_sub_43273c(&UIRect_TypeInfo_12d64a0);
    bRam0000000001342066 = 1;
  }
  *(undefined1 *)(param_1 + 0x98) = 1;
  *(undefined1 *)(param_1 + 0xa1) = 1;
  *(undefined1 *)(param_1 + 0xa4) = 1;
  *(undefined4 *)(param_1 + 0xac) = 3000;
  uVar1 = native_sub_432808(_System_Collections_Generic_List_UIWidget__TypeInfo_12d2c48);
  native_System_Collections_Generic_List_XmlEventCache_XmlEvent______ctor_d3ff44
            (uVar1,_Method_System_Collections_Generic_List_UIWidget___ctor___12dd410);
  *(undefined8 *)(param_1 + 0xb0) = uVar1;
  native_sub_4326e0(param_1 + 0xb0,uVar1);
  uVar1 = native_sub_432808(_System_Collections_Generic_List_UIDrawCall__TypeInfo_12d2c08);
  native_System_Collections_Generic_List_XmlEventCache_XmlEvent______ctor_d3ff44
            (uVar1,_Method_System_Collections_Generic_List_UIDrawCall___ctor___12dd2a8);
  *(undefined8 *)(param_1 + 0xb8) = uVar1;
  native_sub_4326e0(param_1 + 0xb8,uVar1);
  native_UnityEngine_Matrix4x4__get_identity_8e5d8c(&uStack_60,0);
  uStack_98 = uStack_58;
  uStack_a0 = uStack_60;
  uStack_88 = uStack_48;
  uStack_90 = uStack_50;
  uStack_78 = uStack_38;
  uStack_80 = uStack_40;
  uStack_68 = uStack_28;
  uStack_70 = uStack_30;
  *(undefined8 *)(param_1 + 200) = uStack_58;
  *(undefined8 *)(param_1 + 0xc0) = uStack_60;
  *(undefined8 *)(param_1 + 0xd8) = uStack_48;
  *(undefined8 *)(param_1 + 0xd0) = uStack_50;
  *(undefined8 *)(param_1 + 0xe8) = uStack_38;
  *(undefined8 *)(param_1 + 0xe0) = uStack_40;
  *(undefined8 *)(param_1 + 0xf8) = uStack_28;
  *(undefined8 *)(param_1 + 0xf0) = uStack_30;
  uStack_60 = 0;
  uStack_58 = 0;
  native_UnityEngine_Vector4___ctor_776f24(0,0,0x3f800000,0x3f800000,&uStack_60,0);
  *(undefined4 *)(param_1 + 0x130) = 0x3f800000;
  *(undefined8 *)(param_1 + 0x108) = uStack_58;
  *(undefined8 *)(param_1 + 0x100) = uStack_60;
  uVar3 = 0;
  uStack_b0 = 0;
  uStack_a8 = 0;
  native_UnityEngine_Vector4___ctor_776f24(0,0,0x43960000,0x43480000,&uStack_b0,0);
  *(undefined8 *)(param_1 + 0x14c) = uStack_a8;
  *(undefined8 *)(param_1 + 0x144) = uStack_b0;
  *(undefined8 *)(param_1 + 0x154) = 0x4080000040800000;
  uVar2 = native_UnityEngine_Vector2__get_zero_765ef0(0);
  *(undefined4 *)(param_1 + 0x174) = uVar2;
  *(undefined4 *)(param_1 + 0x178) = uVar3;
  *(undefined4 *)(param_1 + 0x17c) = 0xffffffff;
  *(undefined4 *)(param_1 + 0x184) = 0xffffffff;
  uVar2 = native_UnityEngine_Vector2__get_zero_765ef0(0);
  *(undefined4 *)(param_1 + 0x188) = uVar2;
  *(undefined4 *)(param_1 + 0x18c) = uVar3;
  uVar2 = native_UnityEngine_Vector2__get_zero_765ef0(0);
  *(undefined4 *)(param_1 + 400) = uVar2;
  *(undefined4 *)(param_1 + 0x194) = uVar3;
  if (((*(byte *)(_UIRect_TypeInfo_12d64a0 + 0x133) >> 2 & 1) != 0) &&
     (*(int *)(_UIRect_TypeInfo_12d64a0 + 0xe0) == 0)) {
    native_sub_4327ec();
  }
  native_UIRect___ctor_c2f37c(param_1,0);
  return;
}



/* UIPanel$$.cctor @ 0xaf525c
 * void UIPanel___cctor (const MethodInfo* method); */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* UIPanel$$.cctor
   void UIPanel___cctor (const MethodInfo* method); */

void native_UIPanel___cctor_af525c(void)

{
  undefined8 uVar1;
  undefined8 *puVar2;
  
  if ((bRam0000000001342067 & 1) == 0) {
    native_sub_43273c(&Method_System_Collections_Generic_List_UIPanel___ctor___12dd338);
    native_sub_43273c(&System_Collections_Generic_List_UIPanel__TypeInfo_12d2c28);
    native_sub_43273c(&float___TypeInfo_12d3388);
    native_sub_43273c(&UIPanel_TypeInfo_12d6478);
    native_sub_43273c(&UnityEngine_Vector3___TypeInfo_12d3478);
    bRam0000000001342067 = 1;
  }
  uVar1 = native_sub_432808(_System_Collections_Generic_List_UIPanel__TypeInfo_12d2c28);
  native_System_Collections_Generic_List_XmlEventCache_XmlEvent______ctor_d3ff44
            (uVar1,_Method_System_Collections_Generic_List_UIPanel___ctor___12dd338);
  puVar2 = *(undefined8 **)(_UIPanel_TypeInfo_12d6478 + 0xb8);
  *puVar2 = uVar1;
  native_sub_4326e0(puVar2,uVar1);
  uVar1 = native_sub_432750(_float___TypeInfo_12d3388,4);
  puVar2 = (undefined8 *)(*(long *)(_UIPanel_TypeInfo_12d6478 + 0xb8) + 8);
  *puVar2 = uVar1;
  native_sub_4326e0(puVar2,uVar1);
  uVar1 = native_sub_432750(_UnityEngine_Vector3___TypeInfo_12d3478,4);
  puVar2 = (undefined8 *)(*(long *)(_UIPanel_TypeInfo_12d6478 + 0xb8) + 0x10);
  *puVar2 = uVar1;
  native_sub_4326e0(puVar2,uVar1);
  *(undefined4 *)(*(long *)(_UIPanel_TypeInfo_12d6478 + 0xb8) + 0x18) = 0xffffffff;
  return;
}


