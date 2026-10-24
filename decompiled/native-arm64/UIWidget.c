/* ARM64 IL2CPP native pseudocode from Ghidra.
 * Recovered implementation, not original C# source.
 * Function boundaries follow the IL2CPP method address table. */


/* UIWidget$$get_onRender @ 0x949588
 * UIDrawCall_OnRenderCallback_o* UIWidget__get_onRender (UIWidget_o* __this, const MethodInfo* method); */

/* UIWidget$$get_onRender
   UIDrawCall_OnRenderCallback_o* UIWidget__get_onRender (UIWidget_o* __this, const MethodInfo*
   method); */

undefined8 native_UIWidget__get_onRender_949588(long param_1)

{
  return *(undefined8 *)(param_1 + 0xd0);
}



/* UIWidget$$set_onRender @ 0x949590
 * void UIWidget__set_onRender (UIWidget_o* __this, UIDrawCall_OnRenderCallback_o* value, const MethodInfo* method); */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* UIWidget$$set_onRender
   void UIWidget__set_onRender (UIWidget_o* __this, UIDrawCall_OnRenderCallback_o* value, const
   MethodInfo* method); */

undefined1  [16] native_UIWidget__set_onRender_949590(long param_1,undefined8 param_2)

{
  ulong *puVar1;
  char cVar2;
  bool bVar3;
  ulong uVar4;
  long *plVar5;
  long lVar6;
  long *plVar7;
  undefined8 uVar8;
  long *plVar9;
  undefined4 extraout_s0;
  undefined4 extraout_s0_00;
  undefined4 extraout_s0_01;
  undefined4 uVar10;
  undefined4 extraout_var;
  undefined1 auVar11 [16];
  undefined4 extraout_var_00;
  undefined4 extraout_var_01;
  undefined4 uVar13;
  undefined8 extraout_var_02;
  undefined8 extraout_var_03;
  undefined8 extraout_var_04;
  undefined1 auVar12 [16];
  
  if ((bRam000000000134144d & 1) == 0) {
    native_sub_43273c(&UnityEngine_Object_TypeInfo_12d54e0);
    native_sub_43273c(&UIDrawCall_OnRenderCallback_TypeInfo_12d7a48);
    bRam000000000134144d = 1;
  }
  plVar7 = (long *)(param_1 + 0xd0);
  uVar4 = native_System_Delegate__op_Inequality_a6d404(*plVar7,param_2,0);
  uVar10 = extraout_s0;
  uVar13 = extraout_var;
  uVar8 = extraout_var_02;
  if ((uVar4 & 1) != 0) {
    uVar8 = *(undefined8 *)(param_1 + 0x160);
    if (((*(byte *)(_UnityEngine_Object_TypeInfo_12d54e0 + 0x133) >> 2 & 1) != 0) &&
       (*(int *)(_UnityEngine_Object_TypeInfo_12d54e0 + 0xe0) == 0)) {
      native_sub_4327ec();
    }
    uVar4 = native_UnityEngine_Object__op_Inequality_8d76fc(uVar8,0,0);
    if ((uVar4 & 1) != 0) {
      if (*(long *)(param_1 + 0x160) == 0) goto LAB_00949724;
      plVar9 = (long *)(*(long *)(param_1 + 0x160) + 0xe0);
      if ((*plVar9 != 0) && (*plVar7 != 0)) {
        plVar5 = (long *)native_System_Delegate__Remove_a6d1c0(*plVar9,*plVar7,0);
        if ((plVar5 != (long *)0x0) && (*plVar5 != _UIDrawCall_OnRenderCallback_TypeInfo_12d7a48))
        goto LAB_00949728;
        *plVar9 = (long)plVar5;
        native_sub_4326e0(plVar9,plVar5);
      }
    }
    *(undefined8 *)(param_1 + 0xd0) = param_2;
    native_sub_4326e0(plVar7,param_2);
    uVar8 = *(undefined8 *)(param_1 + 0x160);
    if (((*(byte *)(_UnityEngine_Object_TypeInfo_12d54e0 + 0x133) >> 2 & 1) != 0) &&
       (*(int *)(_UnityEngine_Object_TypeInfo_12d54e0 + 0xe0) == 0)) {
      native_sub_4327ec();
    }
    uVar4 = native_UnityEngine_Object__op_Inequality_8d76fc(uVar8,0,0);
    uVar10 = extraout_s0_00;
    uVar13 = extraout_var_00;
    uVar8 = extraout_var_03;
    if ((uVar4 & 1) != 0) {
      if (*(long *)(param_1 + 0x160) != 0) {
        plVar7 = (long *)(*(long *)(param_1 + 0x160) + 0xe0);
        plVar5 = (long *)native_System_Delegate__Combine_a6cf00(*plVar7,param_2,0);
        if ((plVar5 == (long *)0x0) || (*plVar5 == _UIDrawCall_OnRenderCallback_TypeInfo_12d7a48)) {
          *plVar7 = (long)plVar5;
          if (iRam0000000001345318 != 0) {
            puVar1 = (ulong *)(((ulong)plVar7 >> 0x12 & 0x7fff) * 8 + 0x138ecd8);
            do {
              cVar2 = '\x01';
              bVar3 = (bool)ExclusiveMonitorPass(puVar1,0x10);
              if (bVar3) {
                *puVar1 = *puVar1 | 1L << ((ulong)plVar7 >> 0xc & 0x3f);
                cVar2 = ExclusiveMonitorsStatus();
              }
            } while (cVar2 != '\0');
          }
          auVar11._4_4_ = extraout_var_01;
          auVar11._0_4_ = extraout_s0_01;
          auVar11._8_8_ = extraout_var_04;
          return auVar11;
        }
LAB_00949728:
        lVar6 = native_sub_432b04(plVar5);
        return ZEXT416(*(uint *)(lVar6 + 0x104));
      }
LAB_00949724:
                    /* WARNING: Subroutine does not return */
      native_sub_432810();
    }
  }
  auVar12._4_4_ = uVar13;
  auVar12._0_4_ = uVar10;
  auVar12._8_8_ = uVar8;
  return auVar12;
}



/* UIWidget$$get_drawRegion @ 0x949730
 * UnityEngine_Vector4_o UIWidget__get_drawRegion (UIWidget_o* __this, const MethodInfo* method); */

/* UIWidget$$get_drawRegion
   UnityEngine_Vector4_o UIWidget__get_drawRegion (UIWidget_o* __this, const MethodInfo* method); */

undefined4 native_UIWidget__get_drawRegion_949730(long param_1)

{
  return *(undefined4 *)(param_1 + 0x104);
}



/* UIWidget$$set_drawRegion @ 0x94561c
 * void UIWidget__set_drawRegion (UIWidget_o* __this, UnityEngine_Vector4_o value, const MethodInfo* method); */

/* UIWidget$$set_drawRegion
   void UIWidget__set_drawRegion (UIWidget_o* __this, UnityEngine_Vector4_o value, const MethodInfo*
   method); */

void native_UIWidget__set_drawRegion_94561c
               (float param_1,float param_2,float param_3,float param_4,long *param_5)

{
  float fVar1;
  float fVar2;
  
  fVar1 = *(float *)((long)param_5 + 0x104) - param_1;
  fVar2 = *(float *)((long)param_5 + 0x10c) - param_3;
  if (9.9999994e-11 <=
      (*(float *)(param_5 + 0x22) - param_4) * (*(float *)(param_5 + 0x22) - param_4) +
      fVar2 * fVar2 +
      fVar1 * fVar1 +
      (*(float *)(param_5 + 0x21) - param_2) * (*(float *)(param_5 + 0x21) - param_2)) {
    *(float *)((long)param_5 + 0x104) = param_1;
    *(float *)(param_5 + 0x21) = param_2;
    *(float *)((long)param_5 + 0x10c) = param_3;
    *(float *)(param_5 + 0x22) = param_4;
    if ((char)param_5[0x1b] != '\0') {
      native_UIWidget__ResizeCollider_949744(param_5);
    }
                    /* WARNING: Could not recover jumptable at 0x009456b0. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (**(code **)(*param_5 + 0x378))(param_5,*(undefined8 *)(*param_5 + 0x380));
    return;
  }
  return;
}



/* UIWidget$$get_pivotOffset @ 0x944f8c
 * UnityEngine_Vector2_o UIWidget__get_pivotOffset (UIWidget_o* __this, const MethodInfo* method); */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* UIWidget$$get_pivotOffset
   UnityEngine_Vector2_o UIWidget__get_pivotOffset (UIWidget_o* __this, const MethodInfo* method);
    */

undefined4 native_UIWidget__get_pivotOffset_944f8c(long *param_1)

{
  int iVar1;
  undefined4 uVar2;
  
  if ((bRam000000000134144e & 1) == 0) {
    native_sub_43273c(&NGUIMath_TypeInfo_12d53b8);
    bRam000000000134144e = 1;
  }
  iVar1 = (**(code **)(*param_1 + 0x2a8))(param_1,*(undefined8 *)(*param_1 + 0x2b0));
  if (((*(byte *)(_NGUIMath_TypeInfo_12d53b8 + 0x133) >> 2 & 1) != 0) &&
     (*(int *)(_NGUIMath_TypeInfo_12d53b8 + 0xe0) == 0)) {
    native_sub_4327ec(_NGUIMath_TypeInfo_12d53b8);
  }
  native_UnityEngine_Vector2__get_zero_765ef0(0,0);
  uVar2 = 0;
  if (iVar1 - 1U < 8) {
    uVar2 = *(undefined4 *)(&UNK_00e2bc10 + (long)(int)(iVar1 - 1U) * 4);
  }
  return uVar2;
}



/* UIWidget$$get_width @ 0x949874
 * int32_t UIWidget__get_width (UIWidget_o* __this, const MethodInfo* method); */

/* UIWidget$$get_width
   int32_t UIWidget__get_width (UIWidget_o* __this, const MethodInfo* method); */

undefined4 native_UIWidget__get_width_949874(long param_1)

{
  return *(undefined4 *)(param_1 + 0xa4);
}



/* UIWidget$$set_width @ 0x941dec
 * void UIWidget__set_width (UIWidget_o* __this, int32_t value, const MethodInfo* method); */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* UIWidget$$set_width
   void UIWidget__set_width (UIWidget_o* __this, int32_t value, const MethodInfo* method); */

void native_UIWidget__set_width_941dec(long *param_1,int param_2)

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
    native_sub_43273c(&NGUIMath_TypeInfo_12d53b8);
    native_sub_43273c(&UnityEngine_Object_TypeInfo_12d54e0);
    bRam000000000134144f = 1;
  }
  iVar10 = (**(code **)(*param_1 + 0x3b8))(param_1,*(undefined8 *)(*param_1 + 0x3c0));
  if (iVar10 <= param_2) {
    iVar10 = param_2;
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



/* UIWidget$$get_height @ 0x949948
 * int32_t UIWidget__get_height (UIWidget_o* __this, const MethodInfo* method); */

/* UIWidget$$get_height
   int32_t UIWidget__get_height (UIWidget_o* __this, const MethodInfo* method); */

undefined4 native_UIWidget__get_height_949948(long param_1)

{
  return *(undefined4 *)(param_1 + 0xa8);
}



/* UIWidget$$set_height @ 0x942098
 * void UIWidget__set_height (UIWidget_o* __this, int32_t value, const MethodInfo* method); */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* UIWidget$$set_height
   void UIWidget__set_height (UIWidget_o* __this, int32_t value, const MethodInfo* method); */

void native_UIWidget__set_height_942098(long *param_1,int param_2)

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
    native_sub_43273c(&NGUIMath_TypeInfo_12d53b8);
    native_sub_43273c(&UnityEngine_Object_TypeInfo_12d54e0);
    bRam0000000001341450 = 1;
  }
  iVar10 = (**(code **)(*param_1 + 0x3c8))(param_1,*(undefined8 *)(*param_1 + 0x3d0));
  if (iVar10 <= param_2) {
    iVar10 = param_2;
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



/* UIWidget$$get_color @ 0x949950
 * UnityEngine_Color_o UIWidget__get_color (UIWidget_o* __this, const MethodInfo* method); */

/* UIWidget$$get_color
   UnityEngine_Color_o UIWidget__get_color (UIWidget_o* __this, const MethodInfo* method); */

undefined4 native_UIWidget__get_color_949950(long param_1)

{
  return *(undefined4 *)(param_1 + 0x90);
}



/* UIWidget$$set_color @ 0x947adc
 * void UIWidget__set_color (UIWidget_o* __this, UnityEngine_Color_o value, const MethodInfo* method); */

/* UIWidget$$set_color
   void UIWidget__set_color (UIWidget_o* __this, UnityEngine_Color_o value, const MethodInfo*
   method); */

void native_UIWidget__set_color_947adc
               (undefined8 param_1,undefined1 param_2 [16],undefined1 param_3 [16],
               undefined1 param_4 [16],long *param_5)

{
  ulong uVar1;
  float fVar2;
  
  uVar1 = native_UnityEngine_Color__op_Inequality_8d9d34
                    ((int)param_5[0x12],*(undefined4 *)((long)param_5 + 0x94),(int)param_5[0x13],
                     *(undefined4 *)((long)param_5 + 0x9c),param_1,param_2._0_8_,param_3._0_8_,
                     param_4._0_8_,0);
  if ((uVar1 & 1) != 0) {
    fVar2 = *(float *)((long)param_5 + 0x9c);
    *(int *)(param_5 + 0x12) = (int)param_1;
    *(int *)((long)param_5 + 0x94) = param_2._0_4_;
    *(int *)(param_5 + 0x13) = param_3._0_4_;
    *(float *)((long)param_5 + 0x9c) = param_4._0_4_;
                    /* WARNING: Could not recover jumptable at 0x00947b5c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (**(code **)(*param_5 + 0x1f8))
              (param_5,fVar2 != param_4._0_4_,*(undefined8 *)(*param_5 + 0x200));
    return;
  }
  return;
}



/* UIWidget$$SetColorNoAlpha @ 0x94995c
 * void UIWidget__SetColorNoAlpha (UIWidget_o* __this, UnityEngine_Color_o c, const MethodInfo* method); */

/* UIWidget$$SetColorNoAlpha
   void UIWidget__SetColorNoAlpha (UIWidget_o* __this, UnityEngine_Color_o c, const MethodInfo*
   method); */

void native_UIWidget__SetColorNoAlpha_94995c
               (float param_1,float param_2,float param_3,long *param_4)

{
  if (((*(float *)(param_4 + 0x12) == param_1) && (*(float *)((long)param_4 + 0x94) == param_2)) &&
     (*(float *)(param_4 + 0x13) == param_3)) {
    return;
  }
  *(float *)(param_4 + 0x12) = param_1;
  *(float *)((long)param_4 + 0x94) = param_2;
  *(float *)(param_4 + 0x13) = param_3;
                    /* WARNING: Could not recover jumptable at 0x00949994. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(*param_4 + 0x1f8))(param_4,0,*(undefined8 *)(*param_4 + 0x200));
  return;
}



/* UIWidget$$get_alpha @ 0x94999c
 * float UIWidget__get_alpha (UIWidget_o* __this, const MethodInfo* method); */

/* UIWidget$$get_alpha
   float UIWidget__get_alpha (UIWidget_o* __this, const MethodInfo* method); */

undefined4 native_UIWidget__get_alpha_94999c(long param_1)

{
  return *(undefined4 *)(param_1 + 0x9c);
}



/* UIWidget$$set_alpha @ 0x9499a4
 * void UIWidget__set_alpha (UIWidget_o* __this, float value, const MethodInfo* method); */

/* UIWidget$$set_alpha
   void UIWidget__set_alpha (UIWidget_o* __this, float value, const MethodInfo* method); */

void native_UIWidget__set_alpha_9499a4(float param_1,long *param_2)

{
  if (*(float *)((long)param_2 + 0x9c) != param_1) {
    *(float *)((long)param_2 + 0x9c) = param_1;
                    /* WARNING: Could not recover jumptable at 0x009499c0. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (**(code **)(*param_2 + 0x1f8))(param_2,1,*(undefined8 *)(*param_2 + 0x200));
    return;
  }
  return;
}



/* UIWidget$$get_isVisible @ 0x9499c8
 * bool UIWidget__get_isVisible (UIWidget_o* __this, const MethodInfo* method); */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* UIWidget$$get_isVisible
   bool UIWidget__get_isVisible (UIWidget_o* __this, const MethodInfo* method); */

undefined8 native_UIWidget__get_isVisible_9499c8(long param_1)

{
  ulong uVar1;
  long lVar2;
  undefined8 uVar3;
  
  if ((bRam0000000001341451 & 1) == 0) {
    native_sub_43273c(&NGUITools_TypeInfo_12d53c8);
    bRam0000000001341451 = 1;
  }
  if ((((*(char *)(param_1 + 0x155) == '\0') || (*(char *)(param_1 + 0x154) == '\0')) ||
      (*(char *)(param_1 + 0x156) == '\0')) || (*(float *)(param_1 + 0x8c) <= 0.001)) {
    return 0;
  }
  if (((*(byte *)(_NGUITools_TypeInfo_12d53c8 + 0x133) >> 2 & 1) != 0) &&
     (*(int *)(_NGUITools_TypeInfo_12d53c8 + 0xe0) == 0)) {
    native_sub_4327ec();
  }
  if ((bRam000000000133f5b6 & 1) == 0) {
    native_sub_43273c(&UnityEngine_Object_TypeInfo_12d54e0,0);
    bRam000000000133f5b6 = 1;
  }
  if (((*(byte *)(_UnityEngine_Object_TypeInfo_12d54e0 + 0x133) >> 2 & 1) != 0) &&
     (*(int *)(_UnityEngine_Object_TypeInfo_12d54e0 + 0xe0) == 0)) {
    native_sub_4327ec();
  }
  uVar1 = native_UnityEngine_Object__op_Implicit_8e1b98(param_1,0);
  if ((uVar1 & 1) == 0) {
    return 0;
  }
  if (param_1 != 0) {
    uVar1 = native_UnityEngine_Behaviour__get_enabled_8d7acc(param_1,0);
    if ((uVar1 & 1) == 0) {
      return 0;
    }
    lVar2 = native_UnityEngine_Component__get_gameObject_8da66c(param_1,0);
    if (lVar2 != 0) {
      if (pcRam0000000001340c08 == (code *)0x0) {
        pcRam0000000001340c08 = (code *)native_sub_4326f0(&UNK_00e2dac2);
      }
                    /* WARNING: Could not recover jumptable at 0x008de764. Too many branches */
                    /* WARNING: Treating indirect jump as call */
      uVar3 = (*pcRam0000000001340c08)(lVar2);
      return uVar3;
    }
  }
                    /* WARNING: Subroutine does not return */
  native_sub_432810();
}



/* UIWidget$$get_hasVertices @ 0x949a68
 * bool UIWidget__get_hasVertices (UIWidget_o* __this, const MethodInfo* method); */

/* UIWidget$$get_hasVertices
   bool UIWidget__get_hasVertices (UIWidget_o* __this, const MethodInfo* method); */

bool native_UIWidget__get_hasVertices_949a68(long param_1)

{
  long lVar1;
  
  lVar1 = *(long *)(param_1 + 0xf8);
  if (lVar1 == 0) {
    return false;
  }
  if ((bRam000000000134195e & 1) == 0) {
    native_sub_43273c(&Method_System_Collections_Generic_List_Vector3__get_Count___12dd500,0);
    bRam000000000134195e = 1;
  }
  lVar1 = *(long *)(lVar1 + 0x10);
  if (lVar1 != 0) {
    return 0 < *(int *)(lVar1 + 0x18);
  }
                    /* WARNING: Subroutine does not return */
  native_sub_432810();
}



/* UIWidget$$get_rawPivot @ 0x949a7c
 * int32_t UIWidget__get_rawPivot (UIWidget_o* __this, const MethodInfo* method); */

/* UIWidget$$get_rawPivot
   int32_t UIWidget__get_rawPivot (UIWidget_o* __this, const MethodInfo* method); */

undefined4 native_UIWidget__get_rawPivot_949a7c(long param_1)

{
  return *(undefined4 *)(param_1 + 0xa0);
}



/* UIWidget$$set_rawPivot @ 0x949a84
 * void UIWidget__set_rawPivot (UIWidget_o* __this, int32_t value, const MethodInfo* method); */

/* UIWidget$$set_rawPivot
   void UIWidget__set_rawPivot (UIWidget_o* __this, int32_t value, const MethodInfo* method); */

void native_UIWidget__set_rawPivot_949a84(long *param_1,int param_2)

{
  if ((int)param_1[0x14] == param_2) {
    return;
  }
  *(int *)(param_1 + 0x14) = param_2;
  if ((char)param_1[0x1b] != '\0') {
    native_UIWidget__ResizeCollider_949744(param_1);
  }
                    /* WARNING: Could not recover jumptable at 0x00949ad0. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(*param_1 + 0x378))(param_1,*(undefined8 *)(*param_1 + 0x380));
  return;
}



/* UIWidget$$get_pivot @ 0x949ad4
 * int32_t UIWidget__get_pivot (UIWidget_o* __this, const MethodInfo* method); */

/* UIWidget$$get_pivot
   int32_t UIWidget__get_pivot (UIWidget_o* __this, const MethodInfo* method); */

undefined4 native_UIWidget__get_pivot_949ad4(long param_1)

{
  return *(undefined4 *)(param_1 + 0xa0);
}



/* UIWidget$$set_pivot @ 0x949adc
 * void UIWidget__set_pivot (UIWidget_o* __this, int32_t value, const MethodInfo* method); */

/* UIWidget$$set_pivot
   void UIWidget__set_pivot (UIWidget_o* __this, int32_t value, const MethodInfo* method); */

void native_UIWidget__set_pivot_949adc
               (undefined1 param_1 [16],ulong param_2,ulong param_3,ulong param_4,long *param_5,
               int param_6)

{
  long lVar1;
  float fVar2;
  float fVar3;
  float fVar4;
  undefined8 uVar5;
  undefined8 uVar6;
  float fVar7;
  float fVar8;
  ulong uVar9;
  ulong uVar10;
  float fVar11;
  float fVar12;
  ulong uVar13;
  ulong uVar14;
  undefined8 uStack_68;
  
  if ((int)param_5[0x14] == param_6) {
    return;
  }
  lVar1 = native_UnityEngine_Component__get_transform_8da62c(param_5,0);
  if (lVar1 != 0) {
    uVar5 = native_UnityEngine_Transform__get_rotation_771a30(lVar1,0);
    uVar9 = param_2;
    uVar13 = param_3;
    uVar14 = param_4;
    uVar6 = native_UnityEngine_Quaternion__Inverse_762204(0);
    lVar1 = (**(code **)(*param_5 + 0x1e8))(param_5,*(undefined8 *)(*param_5 + 0x1f0));
    if (lVar1 != 0) {
      if (*(int *)(lVar1 + 0x18) == 0) {
LAB_00949de0:
        uVar5 = native_sub_43283c();
                    /* WARNING: Subroutine does not return */
        native_sub_4327dc(uVar5,0);
      }
      uVar10 = uVar9;
      fVar2 = (float)native_UnityEngine_Quaternion__op_Multiply_7629c0
                               (uVar6,uVar9,uVar13,uVar14,*(undefined4 *)(lVar1 + 0x20),
                                *(undefined4 *)(lVar1 + 0x24),*(undefined4 *)(lVar1 + 0x28),0);
      *(int *)(param_5 + 0x14) = param_6;
      *(undefined1 *)(param_5 + 0xb) = 1;
      lVar1 = (**(code **)(*param_5 + 0x1e8))(param_5,*(undefined8 *)(*param_5 + 0x1f0));
      if (lVar1 != 0) {
        if (*(int *)(lVar1 + 0x18) == 0) goto LAB_00949de0;
        fVar3 = (float)native_UnityEngine_Quaternion__op_Multiply_7629c0
                                 (uVar6,uVar9,uVar13,uVar14,*(undefined4 *)(lVar1 + 0x20),
                                  *(undefined4 *)(lVar1 + 0x24),*(undefined4 *)(lVar1 + 0x28),0);
        fVar11 = (float)uVar13;
        fVar8 = (float)uVar9;
        lVar1 = native_UIRect__get_cachedTransform_c27c58(param_5,0);
        if (lVar1 != 0) {
          fVar4 = (float)native_UnityEngine_Transform__get_position_77169c(lVar1,0);
          native_UnityEngine_Transform__get_localPosition_7717f4(lVar1,0);
          fVar12 = (float)param_3;
          fVar7 = (float)param_2;
          fVar2 = (float)native_UnityEngine_Quaternion__op_Multiply_7629c0
                                   (uVar5,param_2 & 0xffffffff,param_3 & 0xffffffff,
                                    param_4 & 0xffffffff,fVar2 - fVar3,(float)uVar10 - (float)uVar9,
                                    0,0);
          lVar1 = native_UIRect__get_cachedTransform_c27c58(param_5,0);
          if (lVar1 != 0) {
            fVar8 = fVar8 + fVar7;
            native_UnityEngine_Transform__set_position_77174c
                      (fVar4 + fVar2,fVar8,fVar11 + fVar12,lVar1,0);
            lVar1 = native_UIRect__get_cachedTransform_c27c58(param_5,0);
            if (lVar1 != 0) {
              fVar2 = (float)native_UnityEngine_Transform__get_localPosition_7717f4(lVar1,0);
              func_0x002c9600((double)fVar2,&uStack_68);
              func_0x002c9600((double)fVar8,&uStack_68);
              lVar1 = native_UIRect__get_cachedTransform_c27c58(param_5,0);
              if (lVar1 != 0) {
                if (pcRam000000000133fee8 == (code *)0x0) {
                  pcRam000000000133fee8 = (code *)native_sub_4326f0(&UNK_00e2ada3,0);
                }
                (*pcRam000000000133fee8)(lVar1,&stack0xffffffffffffffd0);
                return;
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



/* UIWidget$$get_depth @ 0x949dec
 * int32_t UIWidget__get_depth (UIWidget_o* __this, const MethodInfo* method); */

/* UIWidget$$get_depth
   int32_t UIWidget__get_depth (UIWidget_o* __this, const MethodInfo* method); */

undefined4 native_UIWidget__get_depth_949dec(long param_1)

{
  return *(undefined4 *)(param_1 + 0xac);
}



/* UIWidget$$set_depth @ 0x949df4
 * void UIWidget__set_depth (UIWidget_o* __this, int32_t value, const MethodInfo* method); */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* UIWidget$$set_depth
   void UIWidget__set_depth (UIWidget_o* __this, int32_t value, const MethodInfo* method); */

void native_UIWidget__set_depth_949df4(long param_1,int param_2)

{
  ulong uVar1;
  undefined8 uVar2;
  
  if ((bRam0000000001341452 & 1) == 0) {
    native_sub_43273c(&UnityEngine_Object_TypeInfo_12d54e0);
    bRam0000000001341452 = 1;
  }
  if (*(int *)(param_1 + 0xac) != param_2) {
    uVar2 = *(undefined8 *)(param_1 + 0xf0);
    if (((*(byte *)(_UnityEngine_Object_TypeInfo_12d54e0 + 0x133) >> 2 & 1) != 0) &&
       (*(int *)(_UnityEngine_Object_TypeInfo_12d54e0 + 0xe0) == 0)) {
      native_sub_4327ec();
    }
    uVar1 = native_UnityEngine_Object__op_Inequality_8d76fc(uVar2,0,0);
    if ((uVar1 & 1) != 0) {
      if (*(long *)(param_1 + 0xf0) == 0) goto LAB_00949f14;
      native_UIPanel__RemoveWidget_af4764(*(long *)(param_1 + 0xf0),param_1,0);
    }
    *(int *)(param_1 + 0xac) = param_2;
    uVar2 = *(undefined8 *)(param_1 + 0xf0);
    if (((*(byte *)(_UnityEngine_Object_TypeInfo_12d54e0 + 0x133) >> 2 & 1) != 0) &&
       (*(int *)(_UnityEngine_Object_TypeInfo_12d54e0 + 0xe0) == 0)) {
      native_sub_4327ec();
    }
    uVar1 = native_UnityEngine_Object__op_Inequality_8d76fc(uVar2,0,0);
    if ((uVar1 & 1) != 0) {
      if (*(long *)(param_1 + 0xf0) != 0) {
        native_UIPanel__AddWidget_af45bc(*(long *)(param_1 + 0xf0),param_1,0);
        uVar1 = native_UnityEngine_Application__get_isPlaying_8d60cc(0);
        if ((uVar1 & 1) != 0) {
          return;
        }
        if (*(long *)(param_1 + 0xf0) != 0) {
          native_UIPanel__SortWidgets_af41ac(*(long *)(param_1 + 0xf0),0);
          if (*(long *)(param_1 + 0xf0) != 0) {
            *(undefined1 *)(*(long *)(param_1 + 0xf0) + 0x170) = 1;
            return;
          }
        }
      }
LAB_00949f14:
                    /* WARNING: Subroutine does not return */
      native_sub_432810();
    }
  }
  return;
}



/* UIWidget$$get_raycastDepth @ 0x949f18
 * int32_t UIWidget__get_raycastDepth (UIWidget_o* __this, const MethodInfo* method); */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* UIWidget$$get_raycastDepth
   int32_t UIWidget__get_raycastDepth (UIWidget_o* __this, const MethodInfo* method); */

int native_UIWidget__get_raycastDepth_949f18(long param_1)

{
  int iVar1;
  ulong uVar2;
  undefined8 uVar3;
  
  if ((bRam0000000001341453 & 1) == 0) {
    native_sub_43273c(&UnityEngine_Object_TypeInfo_12d54e0);
    bRam0000000001341453 = 1;
  }
  uVar3 = *(undefined8 *)(param_1 + 0xf0);
  if (((*(byte *)(_UnityEngine_Object_TypeInfo_12d54e0 + 0x133) >> 2 & 1) != 0) &&
     (*(int *)(_UnityEngine_Object_TypeInfo_12d54e0 + 0xe0) == 0)) {
    native_sub_4327ec();
  }
  uVar2 = native_UnityEngine_Object__op_Equality_8e9a3c(uVar3,0,0);
  if ((uVar2 & 1) != 0) {
    native_UIWidget__CreatePanel_949fec(param_1);
  }
  uVar3 = *(undefined8 *)(param_1 + 0xf0);
  if (((*(byte *)(_UnityEngine_Object_TypeInfo_12d54e0 + 0x133) >> 2 & 1) != 0) &&
     (*(int *)(_UnityEngine_Object_TypeInfo_12d54e0 + 0xe0) == 0)) {
    native_sub_4327ec();
  }
  uVar2 = native_UnityEngine_Object__op_Inequality_8d76fc(uVar3,0,0);
  iVar1 = *(int *)(param_1 + 0xac);
  if ((uVar2 & 1) != 0) {
    if (*(long *)(param_1 + 0xf0) == 0) {
                    /* WARNING: Subroutine does not return */
      native_sub_432810();
    }
    iVar1 = iVar1 + *(int *)(*(long *)(param_1 + 0xf0) + 0x15c) * 1000;
  }
  return iVar1;
}



/* UIWidget$$get_localCorners @ 0x94a1c8
 * UnityEngine_Vector3_array* UIWidget__get_localCorners (UIWidget_o* __this, const MethodInfo* method); */

/* UIWidget$$get_localCorners
   UnityEngine_Vector3_array* UIWidget__get_localCorners (UIWidget_o* __this, const MethodInfo*
   method); */

undefined8
native_UIWidget__get_localCorners_94a1c8(undefined1 param_1 [16],float param_2,long param_3)

{
  undefined8 uVar1;
  long lVar2;
  float fVar3;
  float fVar4;
  int iVar5;
  float fVar6;
  int iVar7;
  float fVar8;
  
  fVar3 = (float)native_UIWidget__get_pivotOffset_944f8c();
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



/* UIWidget$$get_localSize @ 0x94a28c
 * UnityEngine_Vector2_o UIWidget__get_localSize (UIWidget_o* __this, const MethodInfo* method); */

/* UIWidget$$get_localSize
   UnityEngine_Vector2_o UIWidget__get_localSize (UIWidget_o* __this, const MethodInfo* method); */

void native_UIWidget__get_localSize_94a28c(long *param_1)

{
  long lVar1;
  undefined8 uVar2;
  
  lVar1 = (**(code **)(*param_1 + 0x1d8))(param_1,*(undefined8 *)(*param_1 + 0x1e0));
  if (lVar1 == 0) {
                    /* WARNING: Subroutine does not return */
    native_sub_432810();
  }
  if (2 < *(uint *)(lVar1 + 0x18)) {
    return;
  }
  uVar2 = native_sub_43283c();
                    /* WARNING: Subroutine does not return */
  native_sub_4327dc(uVar2,0);
}



/* UIWidget$$get_localCenter @ 0x94a2d8
 * UnityEngine_Vector3_o UIWidget__get_localCenter (UIWidget_o* __this, const MethodInfo* method); */

/* UIWidget$$get_localCenter
   UnityEngine_Vector3_o UIWidget__get_localCenter (UIWidget_o* __this, const MethodInfo* method);
    */

void native_UIWidget__get_localCenter_94a2d8(long *param_1)

{
  long lVar1;
  undefined8 uVar2;
  
  lVar1 = (**(code **)(*param_1 + 0x1d8))(param_1,*(undefined8 *)(*param_1 + 0x1e0));
  if (lVar1 == 0) {
                    /* WARNING: Subroutine does not return */
    native_sub_432810();
  }
  if ((*(uint *)(lVar1 + 0x18) != 0) && (2 < *(uint *)(lVar1 + 0x18))) {
    native_UnityEngine_Mathf__Clamp01_8d9d9c(0x3f000000,0);
    return;
  }
  uVar2 = native_sub_43283c();
                    /* WARNING: Subroutine does not return */
  native_sub_4327dc(uVar2,0);
}



/* UIWidget$$get_worldCorners @ 0x94a360
 * UnityEngine_Vector3_array* UIWidget__get_worldCorners (UIWidget_o* __this, const MethodInfo* method); */

/* UIWidget$$get_worldCorners
   UnityEngine_Vector3_array* UIWidget__get_worldCorners (UIWidget_o* __this, const MethodInfo*
   method); */

undefined8
native_UIWidget__get_worldCorners_94a360(undefined1 param_1 [16],float param_2,long param_3)

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
  
  fVar4 = (float)native_UIWidget__get_pivotOffset_944f8c();
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



/* UIWidget$$get_worldCenter @ 0x94a4bc
 * UnityEngine_Vector3_o UIWidget__get_worldCenter (UIWidget_o* __this, const MethodInfo* method); */

/* UIWidget$$get_worldCenter
   UnityEngine_Vector3_o UIWidget__get_worldCenter (UIWidget_o* __this, const MethodInfo* method);
    */

undefined4
native_UIWidget__get_worldCenter_94a4bc
          (undefined1 param_1 [16],undefined4 param_2,undefined4 param_3,undefined8 param_4)

{
  long lVar1;
  undefined8 uStack_40;
  undefined4 uStack_38;
  undefined4 uStack_30;
  undefined4 uStack_2c;
  undefined4 uStack_28;
  
  lVar1 = native_UIRect__get_cachedTransform_c27c58(param_4,0);
  uStack_30 = native_UIWidget__get_localCenter_94a2d8(param_4);
  if (lVar1 != 0) {
    uStack_38 = 0;
    uStack_40 = 0;
    uStack_2c = param_2;
    uStack_28 = param_3;
    if (pcRam000000000133ff50 == (code *)0x0) {
      pcRam000000000133ff50 = (code *)native_sub_4326f0(&UNK_00e2b1ac,0);
    }
    (*pcRam000000000133ff50)(lVar1,&uStack_30,&uStack_40);
    return (undefined4)uStack_40;
  }
                    /* WARNING: Subroutine does not return */
  native_sub_432810();
}



/* UIWidget$$get_drawingDimensions @ 0x94a4fc
 * UnityEngine_Vector4_o UIWidget__get_drawingDimensions (UIWidget_o* __this, const MethodInfo* method); */

/* UIWidget$$get_drawingDimensions
   UnityEngine_Vector4_o UIWidget__get_drawingDimensions (UIWidget_o* __this, const MethodInfo*
   method); */

undefined4
native_UIWidget__get_drawingDimensions_94a4fc(undefined1 param_1 [16],float param_2,long param_3)

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
  
  fVar1 = (float)native_UIWidget__get_pivotOffset_944f8c();
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



/* UIWidget$$get_material @ 0x94a620
 * UnityEngine_Material_o* UIWidget__get_material (UIWidget_o* __this, const MethodInfo* method); */

/* UIWidget$$get_material
   UnityEngine_Material_o* UIWidget__get_material (UIWidget_o* __this, const MethodInfo* method); */

undefined8 native_UIWidget__get_material_94a620(long param_1)

{
  return *(undefined8 *)(param_1 + 0xb8);
}



/* UIWidget$$set_material @ 0x94a628
 * void UIWidget__set_material (UIWidget_o* __this, UnityEngine_Material_o* value, const MethodInfo* method); */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* UIWidget$$set_material
   void UIWidget__set_material (UIWidget_o* __this, UnityEngine_Material_o* value, const MethodInfo*
   method); */

void native_UIWidget__set_material_94a628(long *param_1,long param_2)

{
  ulong uVar1;
  long lVar2;
  
  if ((bRam0000000001341454 & 1) == 0) {
    native_sub_43273c(&UnityEngine_Object_TypeInfo_12d54e0);
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



/* UIWidget$$get_mainTexture @ 0x94a6e4
 * UnityEngine_Texture_o* UIWidget__get_mainTexture (UIWidget_o* __this, const MethodInfo* method); */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* UIWidget$$get_mainTexture
   UnityEngine_Texture_o* UIWidget__get_mainTexture (UIWidget_o* __this, const MethodInfo* method);
    */

undefined8 native_UIWidget__get_mainTexture_94a6e4(long *param_1)

{
  int iVar1;
  undefined4 uVar2;
  undefined8 uVar3;
  long lVar4;
  ulong uVar5;
  
  if ((bRam0000000001341455 & 1) == 0) {
    native_sub_43273c(&UnityEngine_Object_TypeInfo_12d54e0);
    bRam0000000001341455 = 1;
  }
  lVar4 = (**(code **)(*param_1 + 0x308))(param_1,*(undefined8 *)(*param_1 + 0x310));
  if (((*(byte *)(_UnityEngine_Object_TypeInfo_12d54e0 + 0x133) >> 2 & 1) != 0) &&
     (*(int *)(_UnityEngine_Object_TypeInfo_12d54e0 + 0xe0) == 0)) {
    native_sub_4327ec(_UnityEngine_Object_TypeInfo_12d54e0);
  }
  uVar5 = native_UnityEngine_Object__op_Inequality_8d76fc(lVar4,0,0);
  if ((uVar5 & 1) == 0) {
    return 0;
  }
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
    uVar3 = (*pcRam0000000001340e28)(lVar4,iVar1);
    return uVar3;
  }
  uVar2 = native_UnityEngine_Shader__PropertyToID_76b308(_StringLiteral__MainTex_12f3608,0);
  if (pcRam0000000001340e28 == (code *)0x0) {
    pcRam0000000001340e28 = (code *)native_sub_4326f0(&UNK_00e2e907);
  }
                    /* WARNING: Could not recover jumptable at 0x008e349c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  uVar3 = (*pcRam0000000001340e28)(lVar4,uVar2);
  return uVar3;
}



/* UIWidget$$set_mainTexture @ 0x94a790
 * void UIWidget__set_mainTexture (UIWidget_o* __this, UnityEngine_Texture_o* value, const MethodInfo* method); */

/* UIWidget$$set_mainTexture
   void UIWidget__set_mainTexture (UIWidget_o* __this, UnityEngine_Texture_o* value, const
   MethodInfo* method); */

void native_UIWidget__set_mainTexture_94a790(undefined8 param_1)

{
  long *plVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  
  plVar1 = (long *)native_System_Object__GetType_adb48c(param_1,0);
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



/* UIWidget$$get_shader @ 0x94a814
 * UnityEngine_Shader_o* UIWidget__get_shader (UIWidget_o* __this, const MethodInfo* method); */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* UIWidget$$get_shader
   UnityEngine_Shader_o* UIWidget__get_shader (UIWidget_o* __this, const MethodInfo* method); */

undefined8 native_UIWidget__get_shader_94a814(long *param_1)

{
  undefined8 uVar1;
  long lVar2;
  ulong uVar3;
  
  if ((bRam0000000001341456 & 1) == 0) {
    native_sub_43273c(&UnityEngine_Object_TypeInfo_12d54e0);
    bRam0000000001341456 = 1;
  }
  lVar2 = (**(code **)(*param_1 + 0x308))(param_1,*(undefined8 *)(*param_1 + 0x310));
  if (((*(byte *)(_UnityEngine_Object_TypeInfo_12d54e0 + 0x133) >> 2 & 1) != 0) &&
     (*(int *)(_UnityEngine_Object_TypeInfo_12d54e0 + 0xe0) == 0)) {
    native_sub_4327ec(_UnityEngine_Object_TypeInfo_12d54e0);
  }
  uVar3 = native_UnityEngine_Object__op_Inequality_8d76fc(lVar2,0,0);
  if ((uVar3 & 1) != 0) {
    if (lVar2 != 0) {
      if (pcRam0000000001340da0 == (code *)0x0) {
        pcRam0000000001340da0 = (code *)native_sub_4326f0(&UNK_00e2e5af);
      }
                    /* WARNING: Could not recover jumptable at 0x008e30b4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
      uVar1 = (*pcRam0000000001340da0)(lVar2);
      return uVar1;
    }
                    /* WARNING: Subroutine does not return */
    native_sub_432810();
  }
  return 0;
}



/* UIWidget$$set_shader @ 0x94a8c0
 * void UIWidget__set_shader (UIWidget_o* __this, UnityEngine_Shader_o* value, const MethodInfo* method); */

/* UIWidget$$set_shader
   void UIWidget__set_shader (UIWidget_o* __this, UnityEngine_Shader_o* value, const MethodInfo*
   method); */

void native_UIWidget__set_shader_94a8c0(undefined8 param_1)

{
  long *plVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  
  plVar1 = (long *)native_System_Object__GetType_adb48c(param_1,0);
  uVar3 = 0;
  if (plVar1 != (long *)0x0) {
    uVar3 = (**(code **)(*plVar1 + 0x168))(plVar1,*(undefined8 *)(*plVar1 + 0x170));
  }
  uVar2 = native_sub_432740(&StringLiteral__has_no_shader_setter_12eae80);
  uVar3 = native_System_String__Concat_afbd68(uVar3,uVar2,0);
  native_sub_432740(&System_NotImplementedException_TypeInfo_12d5460);
  uVar2 = native_sub_432808();
  native_System_NotImplementedException___ctor_ad2610(uVar2,uVar3,0);
  uVar3 = native_sub_432740(&Method_UIWidget_set_shader___12e7970);
                    /* WARNING: Subroutine does not return */
  native_sub_4327dc(uVar2,uVar3);
}



/* UIWidget$$get_relativeSize @ 0x94a944
 * UnityEngine_Vector2_o UIWidget__get_relativeSize (UIWidget_o* __this, const MethodInfo* method); */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* UIWidget$$get_relativeSize
   UnityEngine_Vector2_o UIWidget__get_relativeSize (UIWidget_o* __this, const MethodInfo* method);
    */

undefined8 native_UIWidget__get_relativeSize_94a944(void)

{
  undefined8 uVar1;
  
  uVar1 = 0;
  if ((bRam000000000133ff9f & 1) == 0) {
    uVar1 = native_sub_43273c(&UnityEngine_Vector2_TypeInfo_12d66e0);
    bRam000000000133ff9f = 1;
  }
  return uVar1;
}



/* UIWidget$$get_hasBoxCollider @ 0x94a94c
 * bool UIWidget__get_hasBoxCollider (UIWidget_o* __this, const MethodInfo* method); */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* UIWidget$$get_hasBoxCollider
   bool UIWidget__get_hasBoxCollider (UIWidget_o* __this, const MethodInfo* method); */

uint native_UIWidget__get_hasBoxCollider_94a94c(undefined8 param_1)

{
  uint uVar1;
  long *plVar2;
  ulong uVar3;
  undefined8 uVar4;
  
  if ((bRam0000000001341457 & 1) == 0) {
    native_sub_43273c(&UnityEngine_BoxCollider_TypeInfo_12d3bf0);
    native_sub_43273c(&Method_UnityEngine_Component_GetComponent_BoxCollider2D____12e2998);
    native_sub_43273c(&Method_UnityEngine_Component_GetComponent_Collider____12e29c0);
    native_sub_43273c(&UnityEngine_Object_TypeInfo_12d54e0);
    bRam0000000001341457 = 1;
  }
  plVar2 = (long *)native_UnityEngine_Component__GetComponent_ActiveAnimation__49daec
                             (param_1,_Method_UnityEngine_Component_GetComponent_Collider____12e29c0
                             );
  if (((*(byte *)(_UnityEngine_Object_TypeInfo_12d54e0 + 0x133) >> 2 & 1) != 0) &&
     (*(int *)(_UnityEngine_Object_TypeInfo_12d54e0 + 0xe0) == 0)) {
    native_sub_4327ec(_UnityEngine_Object_TypeInfo_12d54e0);
  }
  if (plVar2 != (long *)0x0) {
    if (*(byte *)(_UnityEngine_BoxCollider_TypeInfo_12d3bf0 + 300) <= *(byte *)(*plVar2 + 300)) {
      if (*(long *)(*(long *)(*plVar2 + 200) +
                    (ulong)*(byte *)(_UnityEngine_BoxCollider_TypeInfo_12d3bf0 + 300) * 8 + -8) !=
          _UnityEngine_BoxCollider_TypeInfo_12d3bf0) {
        plVar2 = (long *)0x0;
      }
      goto LAB_0094aa18;
    }
  }
  plVar2 = (long *)0x0;
LAB_0094aa18:
  uVar3 = native_UnityEngine_Object__op_Inequality_8d76fc(plVar2,0,0);
  if ((uVar3 & 1) == 0) {
    uVar4 = native_UnityEngine_Component__GetComponent_ActiveAnimation__49daec
                      (param_1,_Method_UnityEngine_Component_GetComponent_BoxCollider2D____12e2998);
    if (((*(byte *)(_UnityEngine_Object_TypeInfo_12d54e0 + 0x133) >> 2 & 1) != 0) &&
       (*(int *)(_UnityEngine_Object_TypeInfo_12d54e0 + 0xe0) == 0)) {
      native_sub_4327ec(_UnityEngine_Object_TypeInfo_12d54e0);
    }
    if ((bRam0000000001341084 & 1) == 0) {
      native_sub_43273c(&UnityEngine_Object_TypeInfo_12d54e0,0,0);
      bRam0000000001341084 = 1;
    }
    if (((*(byte *)(_UnityEngine_Object_TypeInfo_12d54e0 + 0x133) >> 2 & 1) != 0) &&
       (*(int *)(_UnityEngine_Object_TypeInfo_12d54e0 + 0xe0) == 0)) {
      native_sub_4327ec();
    }
    uVar1 = native_UnityEngine_Object__CompareBaseObjects_8e9aac(uVar4,0);
    return ~uVar1 & 1;
  }
  return 1;
}



/* UIWidget$$SetDimensions @ 0x94987c
 * void UIWidget__SetDimensions (UIWidget_o* __this, int32_t w, int32_t h, const MethodInfo* method); */

/* UIWidget$$SetDimensions
   void UIWidget__SetDimensions (UIWidget_o* __this, int32_t w, int32_t h, const MethodInfo*
   method); */

void native_UIWidget__SetDimensions_94987c(long *param_1,int param_2,int param_3)

{
  int iVar1;
  undefined4 uVar2;
  
  if ((*(int *)((long)param_1 + 0xa4) == param_2) && ((int)param_1[0x15] == param_3)) {
    return;
  }
  iVar1 = *(int *)((long)param_1 + 0xdc);
  *(int *)((long)param_1 + 0xa4) = param_2;
  *(int *)(param_1 + 0x15) = param_3;
  if (iVar1 == 0) {
    *(float *)(param_1 + 0x1c) = (float)param_2 / (float)param_3;
  }
  else if (iVar1 == 2) {
    uVar2 = native_UnityEngine_Mathf__RoundToInt_8e50f0
                      (*(float *)(param_1 + 0x1c) * (float)param_3,0);
    *(undefined4 *)((long)param_1 + 0xa4) = uVar2;
  }
  else if (iVar1 == 1) {
    uVar2 = native_UnityEngine_Mathf__RoundToInt_8e50f0
                      ((float)param_2 / *(float *)(param_1 + 0x1c),0);
    *(undefined4 *)(param_1 + 0x15) = uVar2;
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



/* UIWidget$$GetSides @ 0x94aa9c
 * UnityEngine_Vector3_array* UIWidget__GetSides (UIWidget_o* __this, UnityEngine_Transform_o* relativeTo, const MethodInfo* method); */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* UIWidget$$GetSides
   UnityEngine_Vector3_array* UIWidget__GetSides (UIWidget_o* __this, UnityEngine_Transform_o*
   relativeTo, const MethodInfo* method); */

undefined8
native_UIWidget__GetSides_94aa9c(undefined1 param_1 [16],float param_2,long param_3,long param_4)

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
  
  if ((bRam0000000001341458 & 1) == 0) {
    native_sub_43273c(&UnityEngine_Object_TypeInfo_12d54e0);
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



/* UIWidget$$CalculateFinalAlpha @ 0x94acd8
 * float UIWidget__CalculateFinalAlpha (UIWidget_o* __this, int32_t frameID, const MethodInfo* method); */

/* UIWidget$$CalculateFinalAlpha
   float UIWidget__CalculateFinalAlpha (UIWidget_o* __this, int32_t frameID, const MethodInfo*
   method); */

undefined4 native_UIWidget__CalculateFinalAlpha_94acd8(long param_1,int param_2)

{
  if (*(int *)(param_1 + 0x170) != param_2) {
    *(int *)(param_1 + 0x170) = param_2;
    native_UIWidget__UpdateFinalAlpha_94ad10(param_1);
  }
  return *(undefined4 *)(param_1 + 0x8c);
}



/* UIWidget$$UpdateFinalAlpha @ 0x94ad10
 * void UIWidget__UpdateFinalAlpha (UIWidget_o* __this, int32_t frameID, const MethodInfo* method); */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* UIWidget$$UpdateFinalAlpha
   void UIWidget__UpdateFinalAlpha (UIWidget_o* __this, int32_t frameID, const MethodInfo* method);
    */

void native_UIWidget__UpdateFinalAlpha_94ad10(long param_1,undefined4 param_2)

{
  long *plVar1;
  ulong uVar2;
  float fVar3;
  
  if ((bRam0000000001341459 & 1) == 0) {
    native_sub_43273c(&UnityEngine_Object_TypeInfo_12d54e0);
    bRam0000000001341459 = 1;
  }
  fVar3 = 0.0;
  if ((*(char *)(param_1 + 0x154) != '\0') && (*(char *)(param_1 + 0x156) != '\0')) {
    plVar1 = (long *)native_UIRect__get_parent_c2afcc(param_1,0);
    if (((*(byte *)(_UnityEngine_Object_TypeInfo_12d54e0 + 0x133) >> 2 & 1) != 0) &&
       (*(int *)(_UnityEngine_Object_TypeInfo_12d54e0 + 0xe0) == 0)) {
      native_sub_4327ec(_UnityEngine_Object_TypeInfo_12d54e0);
    }
    uVar2 = native_UnityEngine_Object__op_Inequality_8d76fc(plVar1,0,0);
    if ((uVar2 & 1) == 0) {
      fVar3 = *(float *)(param_1 + 0x9c);
    }
    else {
      if (plVar1 == (long *)0x0) {
                    /* WARNING: Subroutine does not return */
        native_sub_432810();
      }
      fVar3 = (float)(**(code **)(*plVar1 + 0x1c8))(plVar1,param_2,*(undefined8 *)(*plVar1 + 0x1d0))
      ;
      fVar3 = fVar3 * *(float *)(param_1 + 0x9c);
    }
  }
  *(float *)(param_1 + 0x8c) = fVar3;
  return;
}



/* UIWidget$$Invalidate @ 0x94ade4
 * void UIWidget__Invalidate (UIWidget_o* __this, bool includeChildren, const MethodInfo* method); */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* UIWidget$$Invalidate
   void UIWidget__Invalidate (UIWidget_o* __this, bool includeChildren, const MethodInfo* method);
    */

void native_UIWidget__Invalidate_94ade4(long param_1,ulong param_2)

{
  byte bVar1;
  undefined4 uVar2;
  ulong uVar3;
  long *plVar4;
  long lVar5;
  long lVar6;
  undefined8 uVar7;
  float fVar8;
  
  if ((bRam000000000134145a & 1) == 0) {
    native_sub_43273c(&UnityEngine_Object_TypeInfo_12d54e0);
    bRam000000000134145a = 1;
  }
  *(undefined1 *)(param_1 + 0x58) = 1;
  *(undefined4 *)(param_1 + 0x170) = 0xffffffff;
  uVar7 = *(undefined8 *)(param_1 + 0xf0);
  if (((*(byte *)(_UnityEngine_Object_TypeInfo_12d54e0 + 0x133) >> 2 & 1) != 0) &&
     (*(int *)(_UnityEngine_Object_TypeInfo_12d54e0 + 0xe0) == 0)) {
    native_sub_4327ec();
  }
  uVar3 = native_UnityEngine_Object__op_Inequality_8d76fc(uVar7,0,0);
  if ((uVar3 & 1) == 0) {
    return;
  }
  if (*(char *)(param_1 + 0xd9) == '\0') {
    if (*(long *)(param_1 + 0xf0) == 0) goto LAB_0094af4c;
    uVar3 = native_UIPanel__get_hasCumulativeClipping_aeff58(*(long *)(param_1 + 0xf0),0);
    if ((uVar3 & 1) == 0) {
      bVar1 = 1;
      goto LAB_0094ae98;
    }
  }
  if (*(long *)(param_1 + 0xf0) != 0) {
    bVar1 = native_UIPanel__IsVisible_af1840(*(long *)(param_1 + 0xf0),param_1,0);
LAB_0094ae98:
    uVar2 = native_UnityEngine_Time__get_frameCount_770964(0);
    fVar8 = (float)native_UIWidget__CalculateCumulativeAlpha_94af50(param_1,uVar2);
    if ((0.001 < fVar8 == (*(char *)(param_1 + 0x154) == '\0')) ||
       (((bVar1 ^ *(char *)(param_1 + 0x155) != '\0') & 1) != 0)) {
      *(undefined1 *)(param_1 + 0x58) = 1;
      *(bool *)(param_1 + 0x154) = 0.001 < fVar8;
      *(byte *)(param_1 + 0x155) = bVar1 & 1;
    }
    uVar2 = native_UnityEngine_Time__get_frameCount_770964(0);
    native_UIWidget__UpdateFinalAlpha_94ad10(param_1,uVar2);
    if ((param_2 & 1) == 0) {
      return;
    }
    *(undefined1 *)(param_1 + 0x58) = 1;
    lVar5 = *(long *)(param_1 + 0x50);
    if (lVar5 != 0) {
      lVar6 = 0;
      do {
        if (*(int *)(lVar5 + 0x18) <= (int)(uint)lVar6) {
          return;
        }
        lVar5 = *(long *)(lVar5 + 0x10);
        if (lVar5 == 0) break;
        if (*(uint *)(lVar5 + 0x18) <= (uint)lVar6) {
          uVar7 = native_sub_43283c();
                    /* WARNING: Subroutine does not return */
          native_sub_4327dc(uVar7,0);
        }
        plVar4 = *(long **)(lVar5 + lVar6 * 8 + 0x20);
        if (plVar4 == (long *)0x0) break;
        (**(code **)(*plVar4 + 0x1f8))(plVar4,1,*(undefined8 *)(*plVar4 + 0x200));
        lVar5 = *(long *)(param_1 + 0x50);
        lVar6 = lVar6 + 1;
      } while (lVar5 != 0);
    }
                    /* WARNING: Subroutine does not return */
    native_sub_432810();
  }
LAB_0094af4c:
                    /* WARNING: Subroutine does not return */
  native_sub_432810();
}



/* UIWidget$$CalculateCumulativeAlpha @ 0x94af50
 * float UIWidget__CalculateCumulativeAlpha (UIWidget_o* __this, int32_t frameID, const MethodInfo* method); */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* UIWidget$$CalculateCumulativeAlpha
   float UIWidget__CalculateCumulativeAlpha (UIWidget_o* __this, int32_t frameID, const MethodInfo*
   method); */

float native_UIWidget__CalculateCumulativeAlpha_94af50(long param_1,undefined4 param_2)

{
  long *plVar1;
  ulong uVar2;
  float fVar3;
  
  if ((bRam000000000134145b & 1) == 0) {
    native_sub_43273c(&UnityEngine_Object_TypeInfo_12d54e0);
    bRam000000000134145b = 1;
  }
  plVar1 = (long *)native_UIRect__get_parent_c2afcc(param_1,0);
  if (((*(byte *)(_UnityEngine_Object_TypeInfo_12d54e0 + 0x133) >> 2 & 1) != 0) &&
     (*(int *)(_UnityEngine_Object_TypeInfo_12d54e0 + 0xe0) == 0)) {
    native_sub_4327ec(_UnityEngine_Object_TypeInfo_12d54e0);
  }
  uVar2 = native_UnityEngine_Object__op_Inequality_8d76fc(plVar1,0,0);
  if ((uVar2 & 1) == 0) {
    fVar3 = *(float *)(param_1 + 0x9c);
  }
  else {
    if (plVar1 == (long *)0x0) {
                    /* WARNING: Subroutine does not return */
      native_sub_432810();
    }
    fVar3 = (float)(**(code **)(*plVar1 + 0x1c8))(plVar1,param_2,*(undefined8 *)(*plVar1 + 0x1d0));
    fVar3 = fVar3 * *(float *)(param_1 + 0x9c);
  }
  return fVar3;
}



/* UIWidget$$SetRect @ 0x94b05c
 * void UIWidget__SetRect (UIWidget_o* __this, float x, float y, float width, float height, const MethodInfo* method); */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* UIWidget$$SetRect
   void UIWidget__SetRect (UIWidget_o* __this, float x, float y, float width, float height, const
   MethodInfo* method); */

void native_UIWidget__SetRect_94b05c
               (undefined8 param_1,ulong param_2,float param_3,float param_4,long *param_5)

{
  undefined4 uVar1;
  uint uVar2;
  uint uVar3;
  int iVar4;
  uint uVar5;
  long *plVar6;
  long lVar7;
  ulong uVar8;
  long lVar9;
  float fVar10;
  float fVar11;
  ulong uVar12;
  undefined8 uVar13;
  float fVar14;
  float fVar15;
  ulong uVar16;
  
  uVar12 = param_2;
  if ((bRam000000000134145c & 1) == 0) {
    native_sub_43273c(&UnityEngine_Object_TypeInfo_12d54e0);
    bRam000000000134145c = 1;
  }
  uVar13 = native_UIWidget__get_pivotOffset_944f8c(param_5);
  fVar14 = (float)param_1 + param_3;
  fVar10 = (float)native_UnityEngine_Mathf__Lerp_8e5224(param_1,fVar14,uVar13,0);
  fVar15 = (float)param_2 + param_4;
  uVar16 = uVar12;
  fVar11 = (float)native_UnityEngine_Mathf__Lerp_8e5224(param_2,fVar15,uVar12,0);
  uVar2 = native_UnityEngine_Mathf__FloorToInt_8e506c(param_3 + 0.5,0);
  uVar3 = native_UnityEngine_Mathf__FloorToInt_8e506c(param_4 + 0.5,0);
  uVar5 = uVar2 & 0xfffffffe;
  if ((float)uVar13 != 0.5) {
    uVar5 = uVar2;
  }
  uVar2 = uVar3 & 0xfffffffe;
  if ((float)uVar12 != 0.5) {
    uVar2 = uVar3;
  }
  lVar7 = native_UIRect__get_cachedTransform_c27c58(param_5,0);
  if (lVar7 != 0) {
    native_UnityEngine_Transform__get_localPosition_7717f4(lVar7,0);
    iVar4 = (**(code **)(*param_5 + 0x3b8))(param_5,*(undefined8 *)(*param_5 + 0x3c0));
    if ((int)uVar5 < iVar4) {
      uVar5 = (**(code **)(*param_5 + 0x3b8))(param_5,*(undefined8 *)(*param_5 + 0x3c0));
    }
    uVar12 = (ulong)(uint)(int)(fVar11 + 0.5);
    iVar4 = (**(code **)(*param_5 + 0x3c8))(param_5,*(undefined8 *)(*param_5 + 0x3d0));
    if ((int)uVar2 < iVar4) {
      uVar2 = (**(code **)(*param_5 + 0x3c8))(param_5,*(undefined8 *)(*param_5 + 0x3d0));
    }
    native_UnityEngine_Transform__set_localPosition_7718a4
              ((int)(fVar10 + 0.5),uVar12,uVar16,lVar7,0);
    native_UIWidget__set_width_941dec(param_5,uVar5);
    native_UIWidget__set_height_942098(param_5,uVar2);
    uVar8 = native_UIRect__get_isAnchored_c2d8cc(param_5,0);
    if ((uVar8 & 1) == 0) {
      return;
    }
    lVar7 = native_UnityEngine_Transform__get_parent_765eb0(lVar7,0);
    if (param_5[3] != 0) {
      uVar13 = *(undefined8 *)(param_5[3] + 0x10);
      if (((*(byte *)(_UnityEngine_Object_TypeInfo_12d54e0 + 0x133) >> 2 & 1) != 0) &&
         (*(int *)(_UnityEngine_Object_TypeInfo_12d54e0 + 0xe0) == 0)) {
        native_sub_4327ec();
      }
      uVar8 = native_UnityEngine_Object__op_Implicit_8e1b98(uVar13,0);
      if ((uVar8 & 1) != 0) {
        if (param_5[3] == 0) goto LAB_0094b39c;
        native_UIRect_AnchorPoint__SetHorizontal_559078(param_1,param_5[3],lVar7,0);
      }
      if (param_5[4] != 0) {
        uVar13 = *(undefined8 *)(param_5[4] + 0x10);
        if (((*(byte *)(_UnityEngine_Object_TypeInfo_12d54e0 + 0x133) >> 2 & 1) != 0) &&
           (*(int *)(_UnityEngine_Object_TypeInfo_12d54e0 + 0xe0) == 0)) {
          native_sub_4327ec();
        }
        uVar8 = native_UnityEngine_Object__op_Implicit_8e1b98(uVar13,0);
        if ((uVar8 & 1) != 0) {
          if (param_5[4] == 0) goto LAB_0094b39c;
          native_UIRect_AnchorPoint__SetHorizontal_559078(fVar14,param_5[4],lVar7,0);
        }
        if (param_5[5] != 0) {
          uVar13 = *(undefined8 *)(param_5[5] + 0x10);
          if (((*(byte *)(_UnityEngine_Object_TypeInfo_12d54e0 + 0x133) >> 2 & 1) != 0) &&
             (*(int *)(_UnityEngine_Object_TypeInfo_12d54e0 + 0xe0) == 0)) {
            native_sub_4327ec();
          }
          uVar8 = native_UnityEngine_Object__op_Implicit_8e1b98(uVar13,0);
          if ((uVar8 & 1) != 0) {
            if (param_5[5] == 0) goto LAB_0094b39c;
            native_UIRect_AnchorPoint__SetVertical_5591e0(param_2 & 0xffffffff,param_5[5],lVar7,0);
          }
          if (param_5[6] != 0) {
            uVar13 = *(undefined8 *)(param_5[6] + 0x10);
            if (((*(byte *)(_UnityEngine_Object_TypeInfo_12d54e0 + 0x133) >> 2 & 1) != 0) &&
               (*(int *)(_UnityEngine_Object_TypeInfo_12d54e0 + 0xe0) == 0)) {
              native_sub_4327ec();
            }
            uVar8 = native_UnityEngine_Object__op_Implicit_8e1b98(uVar13,0);
            if ((uVar8 & 1) == 0) {
              return;
            }
            lVar9 = param_5[6];
            if (lVar9 != 0) {
              if ((bRam000000000133ea04 & 1) == 0) {
                native_sub_43273c(&UnityEngine_Object_TypeInfo_12d54e0,lVar7,0);
                bRam000000000133ea04 = 1;
              }
              uVar13 = *(undefined8 *)(lVar9 + 0x20);
              if (((*(byte *)(_UnityEngine_Object_TypeInfo_12d54e0 + 0x133) >> 2 & 1) != 0) &&
                 (*(int *)(_UnityEngine_Object_TypeInfo_12d54e0 + 0xe0) == 0)) {
                native_sub_4327ec();
              }
              uVar8 = native_UnityEngine_Object__op_Implicit_8e1b98(uVar13,0);
              if ((uVar8 & 1) == 0) {
                if (*(long *)(lVar9 + 0x10) != 0) {
                  uVar13 = native_UnityEngine_Transform__get_position_77169c
                                     (*(long *)(lVar9 + 0x10),0);
                  if (((*(byte *)(_UnityEngine_Object_TypeInfo_12d54e0 + 0x133) >> 2 & 1) != 0) &&
                     (*(int *)(_UnityEngine_Object_TypeInfo_12d54e0 + 0xe0) == 0)) {
                    native_sub_4327ec();
                  }
                  uVar8 = native_UnityEngine_Object__op_Inequality_8d76fc(lVar7,0,0);
                  if ((uVar8 & 1) != 0) {
                    if (lVar7 == 0) goto LAB_00559338;
                    native_UnityEngine_Transform__InverseTransformPoint_7729a0
                              (uVar13,uVar12,uVar16,lVar7,0);
                  }
LAB_00559308:
                  uVar1 = native_UnityEngine_Mathf__FloorToInt_8e506c
                                    ((fVar15 - (float)uVar12) + 0.5,0);
                  *(undefined4 *)(lVar9 + 0x1c) = uVar1;
                  return;
                }
              }
              else {
                plVar6 = *(long **)(lVar9 + 0x20);
                if ((plVar6 != (long *)0x0) &&
                   (lVar7 = (**(code **)(*plVar6 + 0x208))
                                      (plVar6,lVar7,*(undefined8 *)(*plVar6 + 0x210)), lVar7 != 0))
                {
                  if (*(uint *)(lVar7 + 0x18) < 4) {
                    uVar13 = native_sub_43283c();
                    /* WARNING: Subroutine does not return */
                    native_sub_4327dc(uVar13,0);
                  }
                  uVar12 = native_UnityEngine_Mathf__Lerp_8e5224
                                     (*(undefined4 *)(lVar7 + 0x48),*(undefined4 *)(lVar7 + 0x30),
                                      *(undefined4 *)(lVar9 + 0x18),0);
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
  }
LAB_0094b39c:
                    /* WARNING: Subroutine does not return */
  native_sub_432810();
}



/* UIWidget$$ResizeCollider @ 0x949744
 * void UIWidget__ResizeCollider (UIWidget_o* __this, const MethodInfo* method); */

/* WARNING: Removing unreachable block (ram,0x00432c1c) */
/* WARNING: Removing unreachable block (ram,0x003cc494) */
/* WARNING: Removing unreachable block (ram,0x003cc4b8) */
/* WARNING: Removing unreachable block (ram,0x003cc4d4) */
/* WARNING: Removing unreachable block (ram,0x003cc4dc) */
/* WARNING: Removing unreachable block (ram,0x003cc4f0) */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* UIWidget$$ResizeCollider
   void UIWidget__ResizeCollider (UIWidget_o* __this, const MethodInfo* method); */

void native_UIWidget__ResizeCollider_949744
               (undefined1 param_1 [16],float param_2,undefined8 param_3,float param_4,long *param_5
               )

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
  long lVar10;
  ulong uVar11;
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
  
  if ((bRam000000000134145d & 1) == 0) {
    native_sub_43273c(&Method_UnityEngine_Component_GetComponent_BoxCollider2D____12e2998);
    native_sub_43273c(&Method_UnityEngine_Component_GetComponent_BoxCollider____12e2990);
    native_sub_43273c(&NGUITools_TypeInfo_12d53c8);
    native_sub_43273c(&UnityEngine_Object_TypeInfo_12d54e0);
    bRam000000000134145d = 1;
  }
  lVar10 = native_UnityEngine_Component__GetComponent_ActiveAnimation__49daec
                     (param_5,_Method_UnityEngine_Component_GetComponent_BoxCollider____12e2990);
  if (((*(byte *)(_UnityEngine_Object_TypeInfo_12d54e0 + 0x133) >> 2 & 1) != 0) &&
     (*(int *)(_UnityEngine_Object_TypeInfo_12d54e0 + 0xe0) == 0)) {
    native_sub_4327ec(_UnityEngine_Object_TypeInfo_12d54e0);
  }
  uVar11 = native_UnityEngine_Object__op_Inequality_8d76fc(lVar10,0,0);
  if ((uVar11 & 1) == 0) {
    lVar10 = native_UnityEngine_Component__GetComponent_ActiveAnimation__49daec
                       (param_5,_Method_UnityEngine_Component_GetComponent_BoxCollider2D____12e2998)
    ;
    fVar14 = (float)param_3;
    if (((*(byte *)(_NGUITools_TypeInfo_12d53c8 + 0x133) >> 2 & 1) != 0) &&
       (*(int *)(_NGUITools_TypeInfo_12d53c8 + 0xe0) == 0)) {
      native_sub_4327ec(_NGUITools_TypeInfo_12d53c8);
    }
    if ((bRam000000000133f58e & 1) == 0) {
      native_sub_43273c(&NGUITools_TypeInfo_12d53c8,lVar10,0);
      native_sub_43273c(&UnityEngine_Object_TypeInfo_12d54e0);
      native_sub_43273c(&StringLiteral_last_change_12f5390);
      bRam000000000133f58e = 1;
    }
    if (((*(byte *)(_UnityEngine_Object_TypeInfo_12d54e0 + 0x133) >> 2 & 1) != 0) &&
       (*(int *)(_UnityEngine_Object_TypeInfo_12d54e0 + 0xe0) == 0)) {
      native_sub_4327ec();
    }
    uVar11 = native_UnityEngine_Object__op_Inequality_8d76fc(lVar10,0,0);
    if ((uVar11 & 1) == 0) {
      return;
    }
    if (((*(byte *)(_UnityEngine_Object_TypeInfo_12d54e0 + 0x133) >> 2 & 1) != 0) &&
       (*(int *)(_UnityEngine_Object_TypeInfo_12d54e0 + 0xe0) == 0)) {
      native_sub_4327ec();
    }
    uVar11 = native_UnityEngine_Object__op_Inequality_8d76fc(param_5,0,0);
    if ((uVar11 & 1) == 0) {
      return;
    }
    if (param_5 == (long *)0x0) {
LAB_0072ea2c:
                    /* WARNING: Subroutine does not return */
      native_sub_432810();
    }
    lVar12 = *param_5;
    if ((((*(float *)((long)param_5 + 0x104) == 0.0) && (*(float *)(param_5 + 0x21) == 0.0)) &&
        (param_2 = *(float *)((long)param_5 + 0x10c), param_2 == 1.0)) &&
       (param_2 = *(float *)(param_5 + 0x22), param_2 == 1.0)) {
      lVar12 = (**(code **)(lVar12 + 0x1d8))(param_5,*(undefined8 *)(lVar12 + 0x1e0));
      if (lVar12 == 0) goto LAB_0072ea2c;
      if ((*(uint *)(lVar12 + 0x18) == 0) || (*(uint *)(lVar12 + 0x18) < 3)) {
LAB_0072ea30:
        uVar19 = native_sub_43283c();
                    /* WARNING: Subroutine does not return */
        native_sub_4327dc(uVar19,0);
      }
      uVar19 = *(undefined8 *)(lVar12 + 0x20);
      uVar24 = *(undefined8 *)(lVar12 + 0x38);
      fVar14 = (float)native_UnityEngine_Mathf__Clamp01_8d9d9c(0x3f000000,0);
      if (*(uint *)(lVar12 + 0x18) < 3) goto LAB_0072ea30;
      if (lVar10 == 0) goto LAB_0072ea2c;
      uVar16 = *(undefined8 *)(lVar12 + 0x38);
      fVar22 = (float)uVar19;
      fVar17 = (float)((ulong)uVar19 >> 0x20);
      fVar22 = fVar22 + ((float)uVar24 - fVar22) * fVar14;
      fVar17 = fVar17 + ((float)((ulong)uVar24 >> 0x20) - fVar17) * fVar14;
      uVar19 = CONCAT44(fVar17,fVar22);
      fVar20 = (float)uVar16 - (float)*(undefined8 *)(lVar12 + 0x20);
      param_4 = (float)((ulong)uVar16 >> 0x20) -
                (float)((ulong)*(undefined8 *)(lVar12 + 0x20) >> 0x20);
      uVar11 = CONCAT44(param_4,fVar20);
      fVar14 = (float)native_UnityEngine_Collider2D__get_offset_db8b24(lVar10,0);
      fVar22 = fVar22 - fVar14;
      fVar14 = fVar17 - (float)uVar16;
      if ((fVar22 * fVar22 + fVar14 * fVar14 < 9.9999994e-11) &&
         (uVar24 = uVar19,
         fVar14 = (float)native_UnityEngine_BoxCollider2D__get_size_db8988(lVar10,0),
         fVar20 = fVar20 - fVar14, fVar14 = param_4 - (float)uVar24,
         fVar20 * fVar20 + fVar14 * fVar14 < 9.9999994e-11)) {
        return;
      }
      native_UnityEngine_Collider2D__set_offset_db8bcc(uVar19,fVar17,lVar10,0);
    }
    else {
      fVar22 = (float)(**(code **)(lVar12 + 0x2f8))(param_5,*(undefined8 *)(lVar12 + 0x300));
      if (lVar10 == 0) goto LAB_0072ea2c;
      uVar11 = (ulong)(uint)(fVar14 - fVar22);
      fVar23 = (fVar22 + fVar14) * 0.5;
      fVar17 = (param_2 + param_4) * 0.5;
      param_4 = param_4 - param_2;
      fVar20 = (float)native_UnityEngine_Collider2D__get_offset_db8b24(lVar10,0);
      fVar20 = fVar23 - fVar20;
      param_2 = fVar17 - param_2;
      param_2 = param_2 * param_2;
      if ((fVar20 * fVar20 + param_2 < 9.9999994e-11) &&
         (fVar20 = (float)native_UnityEngine_BoxCollider2D__get_size_db8988(lVar10,0),
         fVar20 = (fVar14 - fVar22) - fVar20,
         fVar20 * fVar20 + (param_4 - param_2) * (param_4 - param_2) < 9.9999994e-11)) {
        return;
      }
      native_UnityEngine_Collider2D__set_offset_db8bcc(fVar23,fVar17,lVar10,0);
    }
    native_UnityEngine_BoxCollider2D__set_size_db8a30(uVar11,param_4,lVar10,0);
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
      native_sub_43273c(&NGUITools_TypeInfo_12d53c8,lVar10,0);
      native_sub_43273c(&UnityEngine_Object_TypeInfo_12d54e0);
      native_sub_43273c(&StringLiteral_last_change_12f5390);
      bRam000000000133f58d = 1;
    }
    if (((*(byte *)(_UnityEngine_Object_TypeInfo_12d54e0 + 0x133) >> 2 & 1) != 0) &&
       (*(int *)(_UnityEngine_Object_TypeInfo_12d54e0 + 0xe0) == 0)) {
      native_sub_4327ec();
    }
    uVar11 = native_UnityEngine_Object__op_Inequality_8d76fc(lVar10,0,0);
    if ((uVar11 & 1) == 0) {
      return;
    }
    if (((*(byte *)(_UnityEngine_Object_TypeInfo_12d54e0 + 0x133) >> 2 & 1) != 0) &&
       (*(int *)(_UnityEngine_Object_TypeInfo_12d54e0 + 0xe0) == 0)) {
      native_sub_4327ec();
    }
    uVar11 = native_UnityEngine_Object__op_Inequality_8d76fc(param_5,0,0);
    if ((uVar11 & 1) == 0) {
      return;
    }
    if (param_5 == (long *)0x0) {
LAB_0072e730:
                    /* WARNING: Subroutine does not return */
      native_sub_432810();
    }
    lVar12 = *param_5;
    if ((((*(float *)((long)param_5 + 0x104) == 0.0) && (*(float *)(param_5 + 0x21) == 0.0)) &&
        (param_2 = *(float *)((long)param_5 + 0x10c), param_2 == 1.0)) &&
       (param_2 = *(float *)(param_5 + 0x22), param_2 == 1.0)) {
      lVar12 = (**(code **)(lVar12 + 0x1d8))(param_5,*(undefined8 *)(lVar12 + 0x1e0));
      if (lVar12 == 0) goto LAB_0072e730;
      if ((*(uint *)(lVar12 + 0x18) == 0) || (*(uint *)(lVar12 + 0x18) < 3)) {
LAB_0072e734:
        uVar19 = native_sub_43283c();
                    /* WARNING: Subroutine does not return */
        native_sub_4327dc(uVar19,0);
      }
      uVar19 = *(undefined8 *)(lVar12 + 0x20);
      fVar20 = *(float *)(lVar12 + 0x28);
      uVar24 = *(undefined8 *)(lVar12 + 0x38);
      fVar22 = *(float *)(lVar12 + 0x40);
      fVar14 = (float)native_UnityEngine_Mathf__Clamp01_8d9d9c(0x3f000000,0);
      if (*(uint *)(lVar12 + 0x18) < 3) goto LAB_0072e734;
      if (lVar10 == 0) goto LAB_0072e730;
      fVar23 = (float)uVar19;
      fVar17 = (float)((ulong)uVar19 >> 0x20);
      fVar22 = fVar22 - fVar20;
      uVar8 = (ulong)(uint)fVar22;
      fVar17 = fVar17 + ((float)((ulong)uVar24 >> 0x20) - fVar17) * fVar14;
      uVar16 = CONCAT44(fVar17,fVar23 + ((float)uVar24 - fVar23) * fVar14);
      uVar21 = (ulong)(uint)(fVar20 + fVar22 * fVar14);
      fVar22 = (float)((ulong)*(undefined8 *)(lVar12 + 0x38) >> 0x20) -
               (float)((ulong)*(undefined8 *)(lVar12 + 0x20) >> 0x20);
      uVar15 = CONCAT44(fVar22,(float)*(undefined8 *)(lVar12 + 0x38) -
                               (float)*(undefined8 *)(lVar12 + 0x20));
      fVar14 = *(float *)(lVar12 + 0x40) - *(float *)(lVar12 + 0x28);
      uVar19 = uVar16;
      uVar24 = native_UnityEngine_BoxCollider__get_center_dba95c(lVar10,0);
      uVar11 = (ulong)(uint)fVar17;
      uVar9 = uVar11;
      uVar18 = uVar21;
      uVar8 = native_UnityEngine_Vector3__op_Inequality_776c48
                        (uVar16,uVar11,uVar21,uVar24,uVar19,uVar8,0);
      if ((uVar8 & 1) == 0) {
        uVar19 = native_UnityEngine_BoxCollider__get_size_dbaab4(lVar10,0);
        uVar9 = native_UnityEngine_Vector3__op_Inequality_776c48
                          (uVar15,fVar22,fVar14,uVar19,uVar9,uVar18,0);
        if ((uVar9 & 1) == 0) {
          return;
        }
      }
      native_UnityEngine_BoxCollider__set_center_dbaa0c(uVar16,uVar11,uVar21,lVar10,0);
    }
    else {
      fVar14 = (float)(**(code **)(lVar12 + 0x2f8))(param_5,*(undefined8 *)(lVar12 + 0x300));
      if (lVar10 == 0) goto LAB_0072e730;
      uVar15 = (ulong)(uint)((float)param_3 - fVar14);
      fVar22 = param_4 - param_2;
      uVar9 = (ulong)(uint)(param_2 + param_4);
      uVar18 = (ulong)(uint)((param_2 + param_4) * 0.5);
      fVar20 = (fVar14 + (float)param_3) * 0.5;
      uVar19 = native_UnityEngine_BoxCollider__get_center_dba95c(lVar10,0);
      uVar24 = 0;
      fVar14 = 0.0;
      uVar11 = uVar18;
      uVar9 = native_UnityEngine_Vector3__op_Inequality_776c48
                        (fVar20,uVar18,0,uVar19,uVar9,param_3,0);
      if ((uVar9 & 1) == 0) {
        uVar19 = native_UnityEngine_BoxCollider__get_size_dbaab4(lVar10,0);
        uVar11 = native_UnityEngine_Vector3__op_Inequality_776c48
                           (uVar15,fVar22,0,uVar19,uVar11,uVar24,0);
        if ((uVar11 & 1) == 0) {
          return;
        }
      }
      native_UnityEngine_BoxCollider__set_center_dbaa0c(fVar20,uVar18,0,lVar10,0);
    }
    native_UnityEngine_BoxCollider__set_size_dbab64(uVar15,fVar22,fVar14,lVar10,0);
    if ((*(byte *)(_NGUITools_TypeInfo_12d53c8 + 0x133) >> 2 & 1) == 0) {
      return;
    }
    if (*(int *)(_NGUITools_TypeInfo_12d53c8 + 0xe0) != 0) {
      return;
    }
  }
  lVar10 = _NGUITools_TypeInfo_12d53c8;
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
  lVar12 = native_sub_432c38();
  if (lVar12 == lRam00000000013451d0) {
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
    lRam00000000013451d0 = lVar12;
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
  piVar2 = (int *)(lVar10 + 0xdc);
  do {
    if (*piVar2 != 1) {
      ClearExclusiveLocal();
      DataMemoryBarrier(2,3);
      puVar4 = (undefined8 *)(lVar10 + 0xe8);
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
      if (((*(byte *)(lVar10 + 0x133) >> 2 & 1) != 0) &&
         (lVar10 = native_sub_3c573c(lVar10,&UNK_00edd9af,0xffffffff,0x800), lVar10 != 0)) {
        native_sub_3d704c(lVar10,0,0,&stack0xffffffffffffffb8);
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
  lVar12 = native_sub_3aad3c();
  plVar3 = (long *)(lVar10 + 0xe8);
  do {
    lVar10 = *plVar3;
    if (lVar10 != lVar12) {
      ClearExclusiveLocal();
      break;
    }
    cVar5 = '\x01';
    bVar6 = (bool)ExclusiveMonitorPass(plVar3,0x10);
    if (bVar6) {
      *plVar3 = lVar12;
      cVar5 = ExclusiveMonitorsStatus();
    }
  } while (cVar5 != '\0');
  DataMemoryBarrier(2,3);
  if (lVar10 != lVar12) {
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



/* UIWidget$$FullCompareFunc @ 0x94b3a0
 * int32_t UIWidget__FullCompareFunc (UIWidget_o* left, UIWidget_o* right, const MethodInfo* method); */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* UIWidget$$FullCompareFunc
   int32_t UIWidget__FullCompareFunc (UIWidget_o* left, UIWidget_o* right, const MethodInfo*
   method); */

ulong native_UIWidget__FullCompareFunc_94b3a0(long *param_1,long *param_2)

{
  uint uVar1;
  int iVar2;
  int iVar3;
  ulong uVar4;
  long lVar5;
  long lVar6;
  
  if ((bRam000000000134145e & 1) == 0) {
    native_sub_43273c(&UIPanel_TypeInfo_12d6478);
    bRam000000000134145e = 1;
  }
  if ((param_1 == (long *)0x0) || (param_2 == (long *)0x0)) {
                    /* WARNING: Subroutine does not return */
    native_sub_432810();
  }
  lVar5 = param_1[0x1e];
  lVar6 = param_2[0x1e];
  if (((*(byte *)(_UIPanel_TypeInfo_12d6478 + 0x133) >> 2 & 1) != 0) &&
     (*(int *)(_UIPanel_TypeInfo_12d6478 + 0xe0) == 0)) {
    native_sub_4327ec();
  }
  uVar4 = native_UIPanel__CompareFunc_aef97c(lVar5,lVar6,0);
  if ((int)uVar4 != 0) {
    return uVar4;
  }
  if ((bRam000000000134145f & 1) == 0) {
    native_sub_43273c(&UnityEngine_Object_TypeInfo_12d54e0);
    bRam000000000134145f = 1;
  }
  if ((param_1 == (long *)0x0) || (param_2 == (long *)0x0)) {
LAB_0094b5b4:
                    /* WARNING: Subroutine does not return */
    native_sub_432810();
  }
  if (*(int *)((long)param_1 + 0xac) < *(int *)((long)param_2 + 0xac)) {
LAB_0094b498:
    uVar4 = 0xffffffff;
  }
  else {
    if (*(int *)((long)param_1 + 0xac) <= *(int *)((long)param_2 + 0xac)) {
      lVar5 = (**(code **)(*param_1 + 0x308))(param_1,*(undefined8 *)(*param_1 + 0x310));
      lVar6 = (**(code **)(*param_2 + 0x308))(param_2,*(undefined8 *)(*param_2 + 0x310));
      if (((*(byte *)(_UnityEngine_Object_TypeInfo_12d54e0 + 0x133) >> 2 & 1) != 0) &&
         (*(int *)(_UnityEngine_Object_TypeInfo_12d54e0 + 0xe0) == 0)) {
        native_sub_4327ec(_UnityEngine_Object_TypeInfo_12d54e0);
      }
      uVar4 = native_UnityEngine_Object__op_Equality_8e9a3c(lVar5,lVar6,0);
      if ((uVar4 & 1) != 0) {
        return 0;
      }
      if (((*(byte *)(_UnityEngine_Object_TypeInfo_12d54e0 + 0x133) >> 2 & 1) != 0) &&
         (*(int *)(_UnityEngine_Object_TypeInfo_12d54e0 + 0xe0) == 0)) {
        native_sub_4327ec();
      }
      uVar4 = native_UnityEngine_Object__op_Equality_8e9a3c(lVar5,0,0);
      if ((uVar4 & 1) == 0) {
        if (((*(byte *)(_UnityEngine_Object_TypeInfo_12d54e0 + 0x133) >> 2 & 1) != 0) &&
           (*(int *)(_UnityEngine_Object_TypeInfo_12d54e0 + 0xe0) == 0)) {
          native_sub_4327ec();
        }
        uVar4 = native_UnityEngine_Object__op_Equality_8e9a3c(lVar6,0,0);
        if ((uVar4 & 1) == 0) {
          if ((lVar5 != 0) &&
             (iVar2 = native_UnityEngine_Object__GetInstanceID_8e0f48(lVar5,0), lVar6 != 0)) {
            iVar3 = native_UnityEngine_Object__GetInstanceID_8e0f48(lVar6,0);
            uVar1 = 1;
            if (iVar2 < iVar3) {
              uVar1 = 0xffffffff;
            }
            return (ulong)uVar1;
          }
          goto LAB_0094b5b4;
        }
        goto LAB_0094b498;
      }
    }
    uVar4 = 1;
  }
  return uVar4;
}



/* UIWidget$$PanelCompareFunc @ 0x94b448
 * int32_t UIWidget__PanelCompareFunc (UIWidget_o* left, UIWidget_o* right, const MethodInfo* method); */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* UIWidget$$PanelCompareFunc
   int32_t UIWidget__PanelCompareFunc (UIWidget_o* left, UIWidget_o* right, const MethodInfo*
   method); */

undefined4 native_UIWidget__PanelCompareFunc_94b448(long *param_1,long *param_2)

{
  undefined4 uVar1;
  int iVar2;
  int iVar3;
  long lVar4;
  long lVar5;
  ulong uVar6;
  
  if ((bRam000000000134145f & 1) == 0) {
    native_sub_43273c(&UnityEngine_Object_TypeInfo_12d54e0);
    bRam000000000134145f = 1;
  }
  if ((param_1 == (long *)0x0) || (param_2 == (long *)0x0)) {
LAB_0094b5b4:
                    /* WARNING: Subroutine does not return */
    native_sub_432810();
  }
  if (*(int *)((long)param_1 + 0xac) < *(int *)((long)param_2 + 0xac)) {
LAB_0094b498:
    uVar1 = 0xffffffff;
  }
  else {
    if (*(int *)((long)param_1 + 0xac) <= *(int *)((long)param_2 + 0xac)) {
      lVar4 = (**(code **)(*param_1 + 0x308))(param_1,*(undefined8 *)(*param_1 + 0x310));
      lVar5 = (**(code **)(*param_2 + 0x308))(param_2,*(undefined8 *)(*param_2 + 0x310));
      if (((*(byte *)(_UnityEngine_Object_TypeInfo_12d54e0 + 0x133) >> 2 & 1) != 0) &&
         (*(int *)(_UnityEngine_Object_TypeInfo_12d54e0 + 0xe0) == 0)) {
        native_sub_4327ec(_UnityEngine_Object_TypeInfo_12d54e0);
      }
      uVar6 = native_UnityEngine_Object__op_Equality_8e9a3c(lVar4,lVar5,0);
      if ((uVar6 & 1) != 0) {
        return 0;
      }
      if (((*(byte *)(_UnityEngine_Object_TypeInfo_12d54e0 + 0x133) >> 2 & 1) != 0) &&
         (*(int *)(_UnityEngine_Object_TypeInfo_12d54e0 + 0xe0) == 0)) {
        native_sub_4327ec();
      }
      uVar6 = native_UnityEngine_Object__op_Equality_8e9a3c(lVar4,0,0);
      if ((uVar6 & 1) == 0) {
        if (((*(byte *)(_UnityEngine_Object_TypeInfo_12d54e0 + 0x133) >> 2 & 1) != 0) &&
           (*(int *)(_UnityEngine_Object_TypeInfo_12d54e0 + 0xe0) == 0)) {
          native_sub_4327ec();
        }
        uVar6 = native_UnityEngine_Object__op_Equality_8e9a3c(lVar5,0,0);
        if ((uVar6 & 1) == 0) {
          if ((lVar4 != 0) &&
             (iVar2 = native_UnityEngine_Object__GetInstanceID_8e0f48(lVar4,0), lVar5 != 0)) {
            iVar3 = native_UnityEngine_Object__GetInstanceID_8e0f48(lVar5,0);
            if (iVar3 <= iVar2) {
              return 1;
            }
            return 0xffffffff;
          }
          goto LAB_0094b5b4;
        }
        goto LAB_0094b498;
      }
    }
    uVar1 = 1;
  }
  return uVar1;
}



/* UIWidget$$CalculateBounds @ 0x94b5b8
 * UnityEngine_Bounds_o UIWidget__CalculateBounds (UIWidget_o* __this, const MethodInfo* method); */

/* UIWidget$$CalculateBounds
   UnityEngine_Bounds_o UIWidget__CalculateBounds (UIWidget_o* __this, const MethodInfo* method); */

void native_UIWidget__CalculateBounds_94b5b8(undefined8 *param_1,undefined8 param_2)

{
  undefined8 uStack_38;
  undefined8 uStack_30;
  undefined8 uStack_28;
  
  native_UIWidget__CalculateBounds_941b98(&uStack_38,param_2,0);
  param_1[2] = uStack_28;
  param_1[1] = uStack_30;
  *param_1 = uStack_38;
  return;
}



/* UIWidget$$CalculateBounds @ 0x941b98
 * UnityEngine_Bounds_o UIWidget__CalculateBounds (UIWidget_o* __this, UnityEngine_Transform_o* relativeParent, const MethodInfo* method); */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* UIWidget$$CalculateBounds
   UnityEngine_Bounds_o UIWidget__CalculateBounds (UIWidget_o* __this, UnityEngine_Transform_o*
   relativeParent, const MethodInfo* method); */

void native_UIWidget__CalculateBounds_941b98
               (undefined8 *param_1,undefined1 param_2 [16],undefined8 param_3,undefined8 param_4,
               long *param_5,long param_6)

{
  ulong uVar1;
  long lVar2;
  undefined4 *puVar3;
  undefined8 uVar4;
  undefined8 uVar5;
  undefined8 uVar6;
  ulong uVar7;
  ulong uVar8;
  ulong uVar9;
  undefined4 uVar10;
  undefined4 uVar11;
  undefined4 uVar12;
  undefined8 uStack_118;
  undefined8 uStack_110;
  undefined8 uStack_108;
  undefined8 uStack_100;
  undefined8 uStack_f8;
  undefined8 uStack_f0;
  undefined8 uStack_e8;
  undefined8 uStack_e0;
  undefined8 uStack_d8;
  undefined8 uStack_d0;
  undefined8 uStack_c8;
  undefined8 uStack_c0;
  undefined8 uStack_b8;
  undefined8 uStack_b0;
  undefined8 uStack_a8;
  undefined8 uStack_a0;
  undefined8 uStack_98;
  undefined8 uStack_90;
  undefined8 uStack_88;
  undefined8 uStack_78;
  undefined8 uStack_70;
  undefined8 uStack_68;
  
  if ((bRam0000000001341460 & 1) == 0) {
    native_sub_43273c(&UnityEngine_Object_TypeInfo_12d54e0);
    bRam0000000001341460 = 1;
  }
  uStack_68 = 0;
  uStack_70 = 0;
  uStack_78 = 0;
  uStack_88 = 0;
  uStack_90 = 0;
  uStack_a8 = 0;
  uStack_b0 = 0;
  uStack_98 = 0;
  uStack_a0 = 0;
  uStack_b8 = 0;
  uStack_c0 = 0;
  uStack_d0 = 0;
  uStack_c8 = 0;
  uStack_d8 = 0;
  if (((*(byte *)(_UnityEngine_Object_TypeInfo_12d54e0 + 0x133) >> 2 & 1) != 0) &&
     (*(int *)(_UnityEngine_Object_TypeInfo_12d54e0 + 0xe0) == 0)) {
    native_sub_4327ec();
  }
  uVar1 = native_UnityEngine_Object__op_Equality_8e9a3c(param_6,0,0);
  if ((uVar1 & 1) == 0) {
    if (param_6 != 0) {
      native_UnityEngine_Transform__get_worldToLocalMatrix_772138(&uStack_118,param_6,0);
      uStack_88 = uStack_e0;
      uStack_90 = uStack_e8;
      uStack_a8 = uStack_100;
      uStack_b0 = uStack_108;
      uStack_98 = uStack_f0;
      uStack_a0 = uStack_f8;
      uStack_b8 = uStack_110;
      uStack_c0 = uStack_118;
      lVar2 = (**(code **)(*param_5 + 0x1e8))(param_5,*(undefined8 *)(*param_5 + 0x1f0));
      if (lVar2 != 0) {
        if (*(int *)(lVar2 + 0x18) == 0) goto LAB_00941ddc;
        uVar7 = (ulong)*(uint *)(lVar2 + 0x24);
        uVar8 = (ulong)*(uint *)(lVar2 + 0x28);
        uVar4 = native_UnityEngine_Matrix4x4__MultiplyPoint3x4_8e5cec
                          (*(undefined4 *)(lVar2 + 0x20),uVar7,uVar8,&uStack_c0,0);
        uVar1 = uVar7;
        uVar9 = uVar8;
        uVar5 = native_UnityEngine_Vector3__get_zero_776668(0);
        native_UnityEngine_Bounds___ctor_8d7d14(uVar4,uVar7,uVar8,uVar5,uVar1,uVar9,&uStack_d8,0);
        uVar1 = 0;
        puVar3 = (undefined4 *)(lVar2 + 0x34);
        do {
          uVar1 = uVar1 + 1;
          if (*(uint *)(lVar2 + 0x18) <= uVar1) goto LAB_00941ddc;
          native_UnityEngine_Matrix4x4__MultiplyPoint3x4_8e5cec
                    (puVar3[-2],puVar3[-1],*puVar3,&uStack_c0,0);
          native_UnityEngine_Bounds__Encapsulate_8d80dc(&uStack_d8,0);
          uVar4 = uStack_c8;
          puVar3 = puVar3 + 3;
          uVar5 = uStack_d8;
          uVar6 = uStack_d0;
        } while (uVar1 < 3);
        goto LAB_00941db4;
      }
    }
  }
  else {
    lVar2 = (**(code **)(*param_5 + 0x1d8))(param_5,*(undefined8 *)(*param_5 + 0x1e0));
    if (lVar2 != 0) {
      if (*(int *)(lVar2 + 0x18) == 0) {
LAB_00941ddc:
        uVar4 = native_sub_43283c();
                    /* WARNING: Subroutine does not return */
        native_sub_4327dc(uVar4,0);
      }
      uVar10 = *(undefined4 *)(lVar2 + 0x20);
      uVar11 = *(undefined4 *)(lVar2 + 0x24);
      uVar12 = *(undefined4 *)(lVar2 + 0x28);
      uVar4 = native_UnityEngine_Vector3__get_zero_776668(0);
      native_UnityEngine_Bounds___ctor_8d7d14
                (uVar10,uVar11,uVar12,uVar4,param_3,param_4,&uStack_78,0);
      uVar1 = 0;
      puVar3 = (undefined4 *)(lVar2 + 0x34);
      do {
        uVar1 = uVar1 + 1;
        if (*(uint *)(lVar2 + 0x18) <= uVar1) goto LAB_00941ddc;
        native_UnityEngine_Bounds__Encapsulate_8d80dc(puVar3[-2],puVar3[-1],*puVar3,&uStack_78,0);
        uVar4 = uStack_68;
        puVar3 = puVar3 + 3;
        uVar5 = uStack_78;
        uVar6 = uStack_70;
      } while (uVar1 < 3);
LAB_00941db4:
      param_1[2] = uVar4;
      param_1[1] = uVar6;
      *param_1 = uVar5;
      return;
    }
  }
                    /* WARNING: Subroutine does not return */
  native_sub_432810();
}



/* UIWidget$$SetDirty @ 0x94b5f8
 * void UIWidget__SetDirty (UIWidget_o* __this, const MethodInfo* method); */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* UIWidget$$SetDirty
   void UIWidget__SetDirty (UIWidget_o* __this, const MethodInfo* method); */

ulong native_UIWidget__SetDirty_94b5f8(long *param_1)

{
  ulong *puVar1;
  undefined4 uVar2;
  undefined8 uVar3;
  ulong uVar4;
  long lVar5;
  
  if ((bRam0000000001341461 & 1) == 0) {
    native_sub_43273c(&UnityEngine_Object_TypeInfo_12d54e0);
    bRam0000000001341461 = 1;
  }
  lVar5 = param_1[0x2c];
  if (((*(byte *)(_UnityEngine_Object_TypeInfo_12d54e0 + 0x133) >> 2 & 1) != 0) &&
     (*(int *)(_UnityEngine_Object_TypeInfo_12d54e0 + 0xe0) == 0)) {
    native_sub_4327ec();
  }
  uVar4 = native_UnityEngine_Object__op_Inequality_8d76fc(lVar5,0,0);
  if ((uVar4 & 1) == 0) {
    uVar4 = native_UIWidget__get_isVisible_9499c8(param_1);
    if ((((uVar4 & 1) != 0) && (uVar4 = 0, param_1[0x1f] != 0)) &&
       (uVar4 = native_UIGeometry__get_hasVertices_9ef420(param_1[0x1f],0), (uVar4 & 1) != 0)) {
      if ((bRam0000000001341464 & 1) == 0) {
        native_sub_43273c(&NGUITools_TypeInfo_12d53c8);
        native_sub_43273c(&UnityEngine_Object_TypeInfo_12d54e0);
        native_sub_43273c(&UIPanel_TypeInfo_12d6478);
        bRam0000000001341464 = 1;
      }
      puVar1 = (ulong *)(param_1 + 0x1e);
      if ((char)param_1[0x11] != '\0') {
        uVar4 = *puVar1;
        if (((*(byte *)(_UnityEngine_Object_TypeInfo_12d54e0 + 0x133) >> 2 & 1) != 0) &&
           (*(int *)(_UnityEngine_Object_TypeInfo_12d54e0 + 0xe0) == 0)) {
          native_sub_4327ec();
        }
        uVar4 = native_UnityEngine_Object__op_Equality_8e9a3c(uVar4,0,0);
        if (((uVar4 & 1) != 0) &&
           (uVar4 = native_UnityEngine_Behaviour__get_enabled_8d7acc(param_1,0), (uVar4 & 1) != 0))
        {
          uVar3 = native_UnityEngine_Component__get_gameObject_8da66c(param_1,0);
          if (((*(byte *)(_NGUITools_TypeInfo_12d53c8 + 0x133) >> 2 & 1) != 0) &&
             (*(int *)(_NGUITools_TypeInfo_12d53c8 + 0xe0) == 0)) {
            native_sub_4327ec(_NGUITools_TypeInfo_12d53c8);
          }
          uVar4 = native_NGUITools__GetActive_72d0d4(uVar3,0);
          if ((uVar4 & 1) != 0) {
            uVar3 = native_UIRect__get_cachedTransform_c27c58(param_1,0);
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
            uVar4 = native_UIPanel__Find_af4e6c(uVar3,1,uVar2,0);
            *puVar1 = uVar4;
            native_sub_4326e0(puVar1,uVar4);
            uVar4 = *puVar1;
            if (((*(byte *)(_UnityEngine_Object_TypeInfo_12d54e0 + 0x133) >> 2 & 1) != 0) &&
               (*(int *)(_UnityEngine_Object_TypeInfo_12d54e0 + 0xe0) == 0)) {
              native_sub_4327ec();
            }
            uVar4 = native_UnityEngine_Object__op_Inequality_8d76fc(uVar4,0,0);
            if ((uVar4 & 1) != 0) {
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
  }
  else {
    if (param_1[0x2c] == 0) {
                    /* WARNING: Subroutine does not return */
      native_sub_432810();
    }
    *(undefined1 *)(param_1[0x2c] + 0xd8) = 1;
  }
  return uVar4;
}



/* UIWidget$$RemoveFromPanel @ 0x944688
 * void UIWidget__RemoveFromPanel (UIWidget_o* __this, const MethodInfo* method); */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* UIWidget$$RemoveFromPanel
   void UIWidget__RemoveFromPanel (UIWidget_o* __this, const MethodInfo* method); */

void native_UIWidget__RemoveFromPanel_944688(long param_1)

{
  ulong *puVar1;
  char cVar2;
  bool bVar3;
  ulong uVar4;
  long *plVar5;
  long lVar6;
  
  if ((bRam0000000001341462 & 1) == 0) {
    native_sub_43273c(&UnityEngine_Object_TypeInfo_12d54e0);
    bRam0000000001341462 = 1;
  }
  plVar5 = (long *)(param_1 + 0xf0);
  lVar6 = *plVar5;
  if (((*(byte *)(_UnityEngine_Object_TypeInfo_12d54e0 + 0x133) >> 2 & 1) != 0) &&
     (*(int *)(_UnityEngine_Object_TypeInfo_12d54e0 + 0xe0) == 0)) {
    native_sub_4327ec();
  }
  uVar4 = native_UnityEngine_Object__op_Inequality_8d76fc(lVar6,0,0);
  if ((uVar4 & 1) != 0) {
    if (*plVar5 == 0) {
                    /* WARNING: Subroutine does not return */
      native_sub_432810();
    }
    native_UIPanel__RemoveWidget_af4764(*plVar5,param_1,0);
    *(undefined8 *)(param_1 + 0xf0) = 0;
    native_sub_4326e0(plVar5,0);
  }
  *(undefined8 *)(param_1 + 0x160) = 0;
  if (iRam0000000001345318 != 0) {
    puVar1 = (ulong *)((param_1 + 0x160U >> 0x12 & 0x7fff) * 8 + 0x138ecd8);
    do {
      cVar2 = '\x01';
      bVar3 = (bool)ExclusiveMonitorPass(puVar1,0x10);
      if (bVar3) {
        *puVar1 = *puVar1 | 1L << (param_1 + 0x160U >> 0xc & 0x3f);
        cVar2 = ExclusiveMonitorsStatus();
      }
    } while (cVar2 != '\0');
  }
  return;
}



/* UIWidget$$MarkAsChanged @ 0x94b6b4
 * void UIWidget__MarkAsChanged (UIWidget_o* __this, const MethodInfo* method); */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* UIWidget$$MarkAsChanged
   void UIWidget__MarkAsChanged (UIWidget_o* __this, const MethodInfo* method); */

void native_UIWidget__MarkAsChanged_94b6b4(long *param_1)

{
  int iVar1;
  int iVar2;
  undefined4 uVar3;
  ulong uVar4;
  undefined8 uVar5;
  long lVar6;
  long lVar7;
  
  if ((bRam0000000001341463 & 1) == 0) {
    native_sub_43273c(&NGUITools_TypeInfo_12d53c8);
    native_sub_43273c(&UnityEngine_Object_TypeInfo_12d54e0);
    bRam0000000001341463 = 1;
  }
  if (((*(byte *)(_NGUITools_TypeInfo_12d53c8 + 0x133) >> 2 & 1) != 0) &&
     (*(int *)(_NGUITools_TypeInfo_12d53c8 + 0xe0) == 0)) {
    native_sub_4327ec();
  }
  uVar4 = native_NGUITools__GetActive_72d02c(param_1,0);
  if ((uVar4 & 1) != 0) {
    *(undefined1 *)(param_1 + 0xb) = 1;
    lVar7 = param_1[0x1e];
    if (((*(byte *)(_UnityEngine_Object_TypeInfo_12d54e0 + 0x133) >> 2 & 1) != 0) &&
       (*(int *)(_UnityEngine_Object_TypeInfo_12d54e0 + 0xe0) == 0)) {
      native_sub_4327ec();
    }
    uVar4 = native_UnityEngine_Object__op_Inequality_8d76fc(lVar7,0,0);
    if (((uVar4 & 1) != 0) &&
       (uVar4 = native_UnityEngine_Behaviour__get_enabled_8d7acc(param_1,0), (uVar4 & 1) != 0)) {
      uVar5 = native_UnityEngine_Component__get_gameObject_8da66c(param_1,0);
      if (((*(byte *)(_NGUITools_TypeInfo_12d53c8 + 0x133) >> 2 & 1) != 0) &&
         (*(int *)(_NGUITools_TypeInfo_12d53c8 + 0xe0) == 0)) {
        native_sub_4327ec(_NGUITools_TypeInfo_12d53c8);
      }
      uVar4 = native_NGUITools__GetActive_72d0d4(uVar5,0);
      if (((uVar4 & 1) != 0) && (*(char *)((long)param_1 + 0x101) == '\0')) {
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
        uVar4 = native_UnityEngine_Object__op_Inequality_8d76fc(lVar7,0,0);
        if ((uVar4 & 1) == 0) {
          return;
        }
        if ((param_1[0x1e] != 0) &&
           (lVar7 = native_UnityEngine_Component__get_gameObject_8da66c(param_1[0x1e],0), lVar7 != 0
           )) {
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
                (lVar6 = native_UnityEngine_Component__get_gameObject_8da66c(param_1[0x1e],0),
                lVar6 != 0)) &&
               (uVar3 = native_UnityEngine_GameObject__get_layer_8de608(lVar6,0), lVar7 != 0)) {
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



/* UIWidget$$CreatePanel @ 0x949fec
 * UIPanel_o* UIWidget__CreatePanel (UIWidget_o* __this, const MethodInfo* method); */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* UIWidget$$CreatePanel
   UIPanel_o* UIWidget__CreatePanel (UIWidget_o* __this, const MethodInfo* method); */

long native_UIWidget__CreatePanel_949fec(long *param_1)

{
  long *plVar1;
  undefined4 uVar2;
  ulong uVar3;
  undefined8 uVar4;
  long lVar5;
  
  if ((bRam0000000001341464 & 1) == 0) {
    native_sub_43273c(&NGUITools_TypeInfo_12d53c8);
    native_sub_43273c(&UnityEngine_Object_TypeInfo_12d54e0);
    native_sub_43273c(&UIPanel_TypeInfo_12d6478);
    bRam0000000001341464 = 1;
  }
  plVar1 = param_1 + 0x1e;
  if ((char)param_1[0x11] != '\0') {
    lVar5 = *plVar1;
    if (((*(byte *)(_UnityEngine_Object_TypeInfo_12d54e0 + 0x133) >> 2 & 1) != 0) &&
       (*(int *)(_UnityEngine_Object_TypeInfo_12d54e0 + 0xe0) == 0)) {
      native_sub_4327ec();
    }
    uVar3 = native_UnityEngine_Object__op_Equality_8e9a3c(lVar5,0,0);
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
        lVar5 = native_UIPanel__Find_af4e6c(uVar4,1,uVar2,0);
        *plVar1 = lVar5;
        native_sub_4326e0(plVar1,lVar5);
        lVar5 = *plVar1;
        if (((*(byte *)(_UnityEngine_Object_TypeInfo_12d54e0 + 0x133) >> 2 & 1) != 0) &&
           (*(int *)(_UnityEngine_Object_TypeInfo_12d54e0 + 0xe0) == 0)) {
          native_sub_4327ec();
        }
        uVar3 = native_UnityEngine_Object__op_Inequality_8d76fc(lVar5,0,0);
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
  return *plVar1;
}



/* UIWidget$$CheckLayer @ 0x94b7f0
 * void UIWidget__CheckLayer (UIWidget_o* __this, const MethodInfo* method); */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* UIWidget$$CheckLayer
   void UIWidget__CheckLayer (UIWidget_o* __this, const MethodInfo* method); */

void native_UIWidget__CheckLayer_94b7f0(long param_1)

{
  int iVar1;
  int iVar2;
  undefined4 uVar3;
  ulong uVar4;
  long lVar5;
  long lVar6;
  undefined8 uVar7;
  
  if ((bRam0000000001341465 & 1) == 0) {
    native_sub_43273c(&UnityEngine_Debug_TypeInfo_12d4338);
    native_sub_43273c(&UnityEngine_Object_TypeInfo_12d54e0);
    native_sub_43273c(&
                      StringLiteral_You_can_t_place_widgets_on_a_layer_different_than_the_UIPanel_that_manages_them__If_you_want_to_move_widgets_to_a_different_layer__parent_them_to_a_new_panel_instead__12f31f0
                     );
    bRam0000000001341465 = 1;
  }
  uVar7 = *(undefined8 *)(param_1 + 0xf0);
  if (((*(byte *)(_UnityEngine_Object_TypeInfo_12d54e0 + 0x133) >> 2 & 1) != 0) &&
     (*(int *)(_UnityEngine_Object_TypeInfo_12d54e0 + 0xe0) == 0)) {
    native_sub_4327ec();
  }
  uVar4 = native_UnityEngine_Object__op_Inequality_8d76fc(uVar7,0,0);
  if ((uVar4 & 1) == 0) {
    return;
  }
  if ((*(long *)(param_1 + 0xf0) != 0) &&
     (lVar5 = native_UnityEngine_Component__get_gameObject_8da66c(*(long *)(param_1 + 0xf0),0),
     lVar5 != 0)) {
    iVar1 = native_UnityEngine_GameObject__get_layer_8de608(lVar5,0);
    lVar5 = native_UnityEngine_Component__get_gameObject_8da66c(param_1,0);
    if (lVar5 != 0) {
      iVar2 = native_UnityEngine_GameObject__get_layer_8de608(lVar5,0);
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
      lVar5 = native_UnityEngine_Component__get_gameObject_8da66c(param_1,0);
      if (((*(long *)(param_1 + 0xf0) != 0) &&
          (lVar6 = native_UnityEngine_Component__get_gameObject_8da66c(*(long *)(param_1 + 0xf0),0),
          lVar6 != 0)) &&
         (uVar3 = native_UnityEngine_GameObject__get_layer_8de608(lVar6,0), lVar5 != 0)) {
        if (pcRam0000000001340bf0 == (code *)0x0) {
          pcRam0000000001340bf0 = (code *)native_sub_4326f0(&UNK_00e2da37);
        }
                    /* WARNING: Could not recover jumptable at 0x008de694. Too many branches */
                    /* WARNING: Treating indirect jump as call */
        (*pcRam0000000001340bf0)(lVar5,uVar3);
        return;
      }
    }
  }
                    /* WARNING: Subroutine does not return */
  native_sub_432810();
}



/* UIWidget$$ParentHasChanged @ 0x94b944
 * void UIWidget__ParentHasChanged (UIWidget_o* __this, const MethodInfo* method); */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* UIWidget$$ParentHasChanged
   void UIWidget__ParentHasChanged (UIWidget_o* __this, const MethodInfo* method); */

ulong native_UIWidget__ParentHasChanged_94b944(long *param_1)

{
  ulong *puVar1;
  undefined4 uVar2;
  ulong uVar3;
  undefined8 uVar4;
  long lVar5;
  
  if ((bRam0000000001341466 & 1) == 0) {
    native_sub_43273c(&UnityEngine_Object_TypeInfo_12d54e0);
    native_sub_43273c(&UIPanel_TypeInfo_12d6478);
    bRam0000000001341466 = 1;
  }
  native_UIRect__ParentHasChanged_c2f1ac(param_1,0);
  lVar5 = param_1[0x1e];
  if (((*(byte *)(_UnityEngine_Object_TypeInfo_12d54e0 + 0x133) >> 2 & 1) != 0) &&
     (*(int *)(_UnityEngine_Object_TypeInfo_12d54e0 + 0xe0) == 0)) {
    native_sub_4327ec();
  }
  uVar3 = native_UnityEngine_Object__op_Inequality_8d76fc(lVar5,0,0);
  if ((uVar3 & 1) != 0) {
    uVar4 = native_UIRect__get_cachedTransform_c27c58(param_1,0);
    lVar5 = native_UIRect__get_cachedGameObject_c2d1c0(param_1,0);
    if (lVar5 == 0) {
                    /* WARNING: Subroutine does not return */
      native_sub_432810();
    }
    uVar2 = native_UnityEngine_GameObject__get_layer_8de608(lVar5,0);
    if (((*(byte *)(_UIPanel_TypeInfo_12d6478 + 0x133) >> 2 & 1) != 0) &&
       (*(int *)(_UIPanel_TypeInfo_12d6478 + 0xe0) == 0)) {
      native_sub_4327ec(_UIPanel_TypeInfo_12d6478);
    }
    uVar4 = native_UIPanel__Find_af4e6c(uVar4,1,uVar2,0);
    lVar5 = param_1[0x1e];
    if (((*(byte *)(_UnityEngine_Object_TypeInfo_12d54e0 + 0x133) >> 2 & 1) != 0) &&
       (*(int *)(_UnityEngine_Object_TypeInfo_12d54e0 + 0xe0) == 0)) {
      native_sub_4327ec(_UnityEngine_Object_TypeInfo_12d54e0);
    }
    uVar3 = native_UnityEngine_Object__op_Inequality_8d76fc(lVar5,uVar4,0);
    if ((uVar3 & 1) != 0) {
      native_UIWidget__RemoveFromPanel_944688(param_1);
      if ((bRam0000000001341464 & 1) == 0) {
        native_sub_43273c(&NGUITools_TypeInfo_12d53c8);
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
           (uVar3 = native_UnityEngine_Behaviour__get_enabled_8d7acc(param_1,0), (uVar3 & 1) != 0))
        {
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
  }
  return uVar3;
}



/* UIWidget$$Awake @ 0x94ba94
 * void UIWidget__Awake (UIWidget_o* __this, const MethodInfo* method); */

/* UIWidget$$Awake
   void UIWidget__Awake (UIWidget_o* __this, const MethodInfo* method); */

void native_UIWidget__Awake_94ba94(long param_1)

{
  byte bVar1;
  
  native_UIRect__Awake_c2e528(param_1,0);
  bVar1 = native_UnityEngine_Application__get_isPlaying_8d60cc(0);
  *(byte *)(param_1 + 0x101) = bVar1 & 1;
  return;
}



/* UIWidget$$OnInit @ 0x94bac8
 * void UIWidget__OnInit (UIWidget_o* __this, const MethodInfo* method); */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* UIWidget$$OnInit
   void UIWidget__OnInit (UIWidget_o* __this, const MethodInfo* method); */

void native_UIWidget__OnInit_94bac8(long *param_1)

{
  int iVar1;
  ulong uVar2;
  long lVar3;
  
  native_UIRect__OnInit_c2e388(param_1,0);
  native_UIWidget__RemoveFromPanel_944688(param_1);
  *(undefined1 *)((long)param_1 + 0x15c) = 1;
  if ((bRam0000000001342712 & 1) == 0) {
    native_sub_43273c(&UnityEngine_Object_TypeInfo_12d54e0,0);
    bRam0000000001342712 = 1;
  }
  lVar3 = param_1[0x10];
  if (((*(byte *)(_UnityEngine_Object_TypeInfo_12d54e0 + 0x133) >> 2 & 1) != 0) &&
     (*(int *)(_UnityEngine_Object_TypeInfo_12d54e0 + 0xe0) == 0)) {
    native_sub_4327ec();
  }
  uVar2 = native_UnityEngine_Object__op_Implicit_8e1b98(lVar3,0);
  if ((uVar2 & 1) == 0) {
    native_UIRect__ResetAnchors_c2d260(param_1);
    native_UIRect__UpdateAnchors_c2ea10(param_1);
    *(undefined4 *)((long)param_1 + 0x5c) = 0xffffffff;
  }
  else if ((char)param_1[0xc] == '\0') {
    native_UIRect__ResetAnchors_c2d260(param_1);
  }
  iVar1 = native_UnityEngine_Time__get_frameCount_770964(0);
  if (*(int *)((long)param_1 + 0x5c) == iVar1) {
    return;
  }
  if (((int)param_1[7] == 1) || (*(char *)((long)param_1 + 0x5a) != '\0')) {
    native_UIRect__UpdateAnchorsInternal_c2e73c(param_1,iVar1);
  }
                    /* WARNING: Could not recover jumptable at 0x00c2e714. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(*param_1 + 0x298))(param_1,*(undefined8 *)(*param_1 + 0x2a0));
  return;
}



/* UIWidget$$UpgradeFrom265 @ 0x94bb04
 * void UIWidget__UpgradeFrom265 (UIWidget_o* __this, const MethodInfo* method); */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* UIWidget$$UpgradeFrom265
   void UIWidget__UpgradeFrom265 (UIWidget_o* __this, const MethodInfo* method); */

void native_UIWidget__UpgradeFrom265_94bb04
               (undefined1 param_1 [16],undefined8 param_2,float param_3,float param_4,long param_5)

{
  undefined4 uVar1;
  long *plVar2;
  ulong uVar3;
  long lVar4;
  long lVar5;
  undefined8 uVar6;
  undefined8 uVar7;
  float fVar8;
  float fVar9;
  float fVar10;
  undefined8 uVar11;
  float fVar12;
  float fVar13;
  undefined8 uStack_98;
  undefined8 uStack_90;
  undefined8 uStack_88;
  undefined8 uStack_80;
  undefined8 uStack_78;
  undefined8 uStack_70;
  undefined8 uStack_68;
  
  if ((bRam0000000001341467 & 1) == 0) {
    native_sub_43273c(&NGUITools_TypeInfo_12d53c8);
    bRam0000000001341467 = 1;
  }
  lVar5 = native_UIRect__get_cachedTransform_c27c58(param_5,0);
  if (lVar5 == 0) {
                    /* WARNING: Subroutine does not return */
    native_sub_432810();
  }
  native_UnityEngine_Transform__get_localScale_771d80(lVar5,0);
  uVar7 = param_2;
  uVar6 = native_UnityEngine_Mathf__RoundToInt_8e50f0(0);
  fVar10 = (float)uVar7;
  uVar1 = native_UnityEngine_Mathf__Abs_8e4b54(uVar6,0);
  *(undefined4 *)(param_5 + 0xa4) = uVar1;
  uVar7 = native_UnityEngine_Mathf__RoundToInt_8e50f0(param_2,0);
  uVar1 = native_UnityEngine_Mathf__Abs_8e4b54(uVar7,0);
  *(undefined4 *)(param_5 + 0xa8) = uVar1;
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
  uVar3 = native_UnityEngine_Object__op_Inequality_8d76fc(lVar5,0,0);
  if ((uVar3 & 1) == 0) {
    return;
  }
  if (lVar5 == 0) {
                    /* WARNING: Subroutine does not return */
    native_sub_432810();
  }
  lVar4 = native_UnityEngine_GameObject__GetComponent_BE2_BlockSectionHeader_Custom__4a2214
                    (lVar5,_Method_UnityEngine_GameObject_GetComponent_BoxCollider____12e4940);
  if (((*(byte *)(_UnityEngine_Object_TypeInfo_12d54e0 + 0x133) >> 2 & 1) != 0) &&
     (*(int *)(_UnityEngine_Object_TypeInfo_12d54e0 + 0xe0) == 0)) {
    native_sub_4327ec(_UnityEngine_Object_TypeInfo_12d54e0);
  }
  uVar3 = native_UnityEngine_Object__op_Inequality_8d76fc(lVar4,0,0);
  if ((uVar3 & 1) == 0) {
    lVar5 = native_UnityEngine_GameObject__GetComponent_BE2_BlockSectionHeader_Custom__4a2214
                      (lVar5,_Method_UnityEngine_GameObject_GetComponent_BoxCollider2D____12e4948);
    if (((*(byte *)(_UnityEngine_Object_TypeInfo_12d54e0 + 0x133) >> 2 & 1) != 0) &&
       (*(int *)(_UnityEngine_Object_TypeInfo_12d54e0 + 0xe0) == 0)) {
      native_sub_4327ec(_UnityEngine_Object_TypeInfo_12d54e0);
    }
    uVar3 = native_UnityEngine_Object__op_Inequality_8d76fc(lVar5,0,0);
    if ((uVar3 & 1) == 0) {
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
    uVar3 = native_UnityEngine_Object__op_Inequality_8d76fc(lVar5,0,0);
    if ((uVar3 & 1) == 0) {
      return;
    }
    if ((lVar5 != 0) &&
       (lVar4 = native_UnityEngine_Component__get_gameObject_8da66c(lVar5,0), lVar4 != 0)) {
      plVar2 = (long *)native_UnityEngine_GameObject__GetComponent_BE2_BlockSectionHeader_Custom__4a2214
                                 (lVar4,
                                  _Method_UnityEngine_GameObject_GetComponent_UIWidget____12e4ae8);
      if (((*(byte *)(_UnityEngine_Object_TypeInfo_12d54e0 + 0x133) >> 2 & 1) != 0) &&
         (*(int *)(_UnityEngine_Object_TypeInfo_12d54e0 + 0xe0) == 0)) {
        native_sub_4327ec(_UnityEngine_Object_TypeInfo_12d54e0);
      }
      uVar3 = native_UnityEngine_Object__op_Inequality_8d76fc(plVar2,0,0);
      if ((uVar3 & 1) == 0) {
        uVar7 = native_UnityEngine_GameObject__get_transform_8de5c8(lVar4,0);
        if (((*(byte *)(_NGUIMath_TypeInfo_12d53b8 + 0x133) >> 2 & 1) != 0) &&
           (*(int *)(_NGUIMath_TypeInfo_12d53b8 + 0xe0) == 0)) {
          native_sub_4327ec(_NGUIMath_TypeInfo_12d53b8);
        }
        native_NGUIMath__CalculateRelativeWidgetBounds_805d80(&uStack_98,uVar7,1,0);
        uStack_70 = uStack_88;
        uStack_78 = uStack_90;
        uStack_80 = uStack_98;
        native_UnityEngine_Bounds__get_center_8d7d98(&uStack_80,0);
        native_UnityEngine_Collider2D__set_offset_db8bcc(lVar5,0);
        uVar7 = native_UnityEngine_Bounds__get_size_8d7ed8(&uStack_80,0);
        native_UnityEngine_Bounds__get_size_8d7ed8(&uStack_80,0);
        native_UnityEngine_BoxCollider2D__set_size_db8a30(uVar7,lVar5,0);
        return;
      }
      if (plVar2 != (long *)0x0) {
        lVar4 = *plVar2;
        if ((((*(float *)((long)plVar2 + 0x104) != 0.0) || (*(float *)(plVar2 + 0x21) != 0.0)) ||
            (fVar10 = *(float *)((long)plVar2 + 0x10c), fVar10 != 1.0)) ||
           (fVar10 = *(float *)(plVar2 + 0x22), fVar10 != 1.0)) {
          fVar9 = (float)(**(code **)(lVar4 + 0x2f8))(plVar2,*(undefined8 *)(lVar4 + 0x300));
          uVar3 = (ulong)(uint)(param_3 - fVar9);
          fVar13 = (fVar9 + param_3) * 0.5;
          fVar12 = (fVar10 + param_4) * 0.5;
          param_4 = param_4 - fVar10;
          fVar8 = (float)native_UnityEngine_Collider2D__get_offset_db8b24(lVar5,0);
          fVar8 = fVar13 - fVar8;
          fVar10 = fVar12 - fVar10;
          fVar10 = fVar10 * fVar10;
          if ((fVar8 * fVar8 + fVar10 < 9.9999994e-11) &&
             (fVar8 = (float)native_UnityEngine_BoxCollider2D__get_size_db8988(lVar5,0),
             fVar8 = (param_3 - fVar9) - fVar8,
             fVar8 * fVar8 + (param_4 - fVar10) * (param_4 - fVar10) < 9.9999994e-11)) {
            return;
          }
          native_UnityEngine_Collider2D__set_offset_db8bcc(fVar13,fVar12,lVar5,0);
LAB_0072e024:
          native_UnityEngine_BoxCollider2D__set_size_db8a30(uVar3,param_4,lVar5,0);
          if ((*(byte *)(_NGUITools_TypeInfo_12d53c8 + 0x133) >> 2 & 1) == 0) {
            return;
          }
          if (*(int *)(_NGUITools_TypeInfo_12d53c8 + 0xe0) != 0) {
            return;
          }
          native_sub_4327ec();
          return;
        }
        lVar4 = (**(code **)(lVar4 + 0x1d8))(plVar2,*(undefined8 *)(lVar4 + 0x1e0));
        if (lVar4 != 0) {
          if ((*(uint *)(lVar4 + 0x18) != 0) && (2 < *(uint *)(lVar4 + 0x18))) {
            uVar7 = *(undefined8 *)(lVar4 + 0x20);
            uVar6 = *(undefined8 *)(lVar4 + 0x38);
            fVar10 = (float)native_UnityEngine_Mathf__Clamp01_8d9d9c(0x3f000000,0);
            if (2 < *(uint *)(lVar4 + 0x18)) {
              uVar11 = *(undefined8 *)(lVar4 + 0x38);
              fVar9 = (float)uVar7;
              fVar12 = (float)((ulong)uVar7 >> 0x20);
              fVar9 = fVar9 + ((float)uVar6 - fVar9) * fVar10;
              fVar12 = fVar12 + ((float)((ulong)uVar6 >> 0x20) - fVar12) * fVar10;
              uVar7 = CONCAT44(fVar12,fVar9);
              fVar8 = (float)uVar11 - (float)*(undefined8 *)(lVar4 + 0x20);
              param_4 = (float)((ulong)uVar11 >> 0x20) -
                        (float)((ulong)*(undefined8 *)(lVar4 + 0x20) >> 0x20);
              uVar3 = CONCAT44(param_4,fVar8);
              fVar10 = (float)native_UnityEngine_Collider2D__get_offset_db8b24(lVar5,0);
              fVar9 = fVar9 - fVar10;
              fVar10 = fVar12 - (float)uVar11;
              if ((fVar9 * fVar9 + fVar10 * fVar10 < 9.9999994e-11) &&
                 (uVar6 = uVar7,
                 fVar10 = (float)native_UnityEngine_BoxCollider2D__get_size_db8988(lVar5,0),
                 fVar8 = fVar8 - fVar10, fVar10 = param_4 - (float)uVar6,
                 fVar8 * fVar8 + fVar10 * fVar10 < 9.9999994e-11)) {
                return;
              }
              native_UnityEngine_Collider2D__set_offset_db8bcc(uVar7,fVar12,lVar5,0);
              goto LAB_0072e024;
            }
          }
          uVar7 = native_sub_43283c();
                    /* WARNING: Subroutine does not return */
          native_sub_4327dc(uVar7,0);
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
  uVar3 = native_UnityEngine_Object__op_Inequality_8d76fc(lVar4,0,0);
  if ((uVar3 & 1) != 0) {
    if ((lVar4 == 0) ||
       (lVar5 = native_UnityEngine_Component__get_gameObject_8da66c(lVar4,0), lVar5 == 0)) {
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
    uVar3 = native_UnityEngine_Object__op_Inequality_8d76fc(plVar2,0,0);
    if ((uVar3 & 1) == 0) {
      uVar7 = native_UnityEngine_GameObject__get_transform_8de5c8(lVar5,0);
      if (((*(byte *)(_NGUIMath_TypeInfo_12d53b8 + 0x133) >> 2 & 1) != 0) &&
         (*(int *)(_NGUIMath_TypeInfo_12d53b8 + 0xe0) == 0)) {
        native_sub_4327ec(_NGUIMath_TypeInfo_12d53b8);
      }
      native_NGUIMath__CalculateRelativeWidgetBounds_805d80(&uStack_88,uVar7,1,0);
      uStack_68 = uStack_80;
      uStack_70 = uStack_88;
      native_UnityEngine_Bounds__get_center_8d7d98(&uStack_70,0);
      native_UnityEngine_BoxCollider__set_center_dbaa0c(lVar4,0);
      uVar3 = native_UnityEngine_Bounds__get_size_8d7ed8(&uStack_70,0);
      native_UnityEngine_Bounds__get_size_8d7ed8(&uStack_70,0);
    }
    else {
      if (plVar2 == (long *)0x0) goto LAB_0072dca4;
      lVar5 = *plVar2;
      if ((((*(float *)((long)plVar2 + 0x104) == 0.0) && (*(float *)(plVar2 + 0x21) == 0.0)) &&
          (fVar10 = *(float *)((long)plVar2 + 0x10c), fVar10 == 1.0)) &&
         (fVar10 = *(float *)(plVar2 + 0x22), fVar10 == 1.0)) {
        lVar5 = (**(code **)(lVar5 + 0x1d8))(plVar2,*(undefined8 *)(lVar5 + 0x1e0));
        if (lVar5 == 0) goto LAB_0072dca4;
        if ((*(uint *)(lVar5 + 0x18) == 0) || (*(uint *)(lVar5 + 0x18) < 3)) {
LAB_0072dca8:
          uVar7 = native_sub_43283c();
                    /* WARNING: Subroutine does not return */
          native_sub_4327dc(uVar7,0);
        }
        uVar7 = *(undefined8 *)(lVar5 + 0x20);
        fVar12 = *(float *)(lVar5 + 0x28);
        uVar6 = *(undefined8 *)(lVar5 + 0x38);
        fVar13 = *(float *)(lVar5 + 0x40);
        fVar10 = (float)native_UnityEngine_Mathf__Clamp01_8d9d9c(0x3f000000,0);
        fVar8 = (float)uVar7;
        fVar9 = (float)((ulong)uVar7 >> 0x20);
        fVar9 = fVar9 + ((float)((ulong)uVar6 >> 0x20) - fVar9) * fVar10;
        native_UnityEngine_BoxCollider__set_center_dbaa0c
                  (CONCAT44(fVar9,fVar8 + ((float)uVar6 - fVar8) * fVar10),fVar9,
                   fVar12 + (fVar13 - fVar12) * fVar10,lVar4,0);
        if (*(uint *)(lVar5 + 0x18) < 3) goto LAB_0072dca8;
        uVar3 = CONCAT44((float)((ulong)*(undefined8 *)(lVar5 + 0x38) >> 0x20) -
                         (float)((ulong)*(undefined8 *)(lVar5 + 0x20) >> 0x20),
                         (float)*(undefined8 *)(lVar5 + 0x38) - (float)*(undefined8 *)(lVar5 + 0x20)
                        );
      }
      else {
        fVar9 = (float)(**(code **)(lVar5 + 0x2f8))(plVar2,*(undefined8 *)(lVar5 + 0x300));
        native_UnityEngine_BoxCollider__set_center_dbaa0c
                  ((fVar9 + param_3) * 0.5,(fVar10 + param_4) * 0.5,0,lVar4,0);
        uVar3 = (ulong)(uint)(param_3 - fVar9);
      }
    }
    native_UnityEngine_BoxCollider__set_size_dbab64(uVar3,lVar4,0);
  }
  return;
}



/* UIWidget$$OnStart @ 0x94bbd4
 * void UIWidget__OnStart (UIWidget_o* __this, const MethodInfo* method); */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* UIWidget$$OnStart
   void UIWidget__OnStart (UIWidget_o* __this, const MethodInfo* method); */

long native_UIWidget__OnStart_94bbd4(long *param_1)

{
  long *plVar1;
  undefined4 uVar2;
  ulong uVar3;
  undefined8 uVar4;
  long lVar5;
  
  if ((bRam0000000001341464 & 1) == 0) {
    native_sub_43273c(&NGUITools_TypeInfo_12d53c8);
    native_sub_43273c(&UnityEngine_Object_TypeInfo_12d54e0);
    native_sub_43273c(&UIPanel_TypeInfo_12d6478);
    bRam0000000001341464 = 1;
  }
  plVar1 = param_1 + 0x1e;
  if ((char)param_1[0x11] != '\0') {
    lVar5 = *plVar1;
    if (((*(byte *)(_UnityEngine_Object_TypeInfo_12d54e0 + 0x133) >> 2 & 1) != 0) &&
       (*(int *)(_UnityEngine_Object_TypeInfo_12d54e0 + 0xe0) == 0)) {
      native_sub_4327ec();
    }
    uVar3 = native_UnityEngine_Object__op_Equality_8e9a3c(lVar5,0,0);
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
        lVar5 = native_UIPanel__Find_af4e6c(uVar4,1,uVar2,0);
        *plVar1 = lVar5;
        native_sub_4326e0(plVar1,lVar5);
        lVar5 = *plVar1;
        if (((*(byte *)(_UnityEngine_Object_TypeInfo_12d54e0 + 0x133) >> 2 & 1) != 0) &&
           (*(int *)(_UnityEngine_Object_TypeInfo_12d54e0 + 0xe0) == 0)) {
          native_sub_4327ec();
        }
        uVar3 = native_UnityEngine_Object__op_Inequality_8d76fc(lVar5,0,0);
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
  return *plVar1;
}



/* UIWidget$$OnAnchor @ 0x94bbd8
 * void UIWidget__OnAnchor (UIWidget_o* __this, const MethodInfo* method); */

/* WARNING: Removing unreachable block (ram,0x00432c1c) */
/* WARNING: Removing unreachable block (ram,0x003cc494) */
/* WARNING: Removing unreachable block (ram,0x003cc4b8) */
/* WARNING: Removing unreachable block (ram,0x003cc4d4) */
/* WARNING: Removing unreachable block (ram,0x003cc4dc) */
/* WARNING: Removing unreachable block (ram,0x003cc4f0) */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* UIWidget$$OnAnchor
   void UIWidget__OnAnchor (UIWidget_o* __this, const MethodInfo* method); */

void native_UIWidget__OnAnchor_94bbd8
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
  
  if ((bRam0000000001341468 & 1) == 0) {
    native_sub_43273c(&NGUIMath_TypeInfo_12d53b8);
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



/* UIWidget$$OnUpdate @ 0x945598
 * void UIWidget__OnUpdate (UIWidget_o* __this, const MethodInfo* method); */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* UIWidget$$OnUpdate
   void UIWidget__OnUpdate (UIWidget_o* __this, const MethodInfo* method); */

ulong native_UIWidget__OnUpdate_945598(long *param_1)

{
  ulong *puVar1;
  undefined4 uVar2;
  ulong uVar3;
  undefined8 uVar4;
  long lVar5;
  
  if ((bRam0000000001341469 & 1) == 0) {
    native_sub_43273c(&UnityEngine_Object_TypeInfo_12d54e0);
    bRam0000000001341469 = 1;
  }
  lVar5 = param_1[0x1e];
  if (((*(byte *)(_UnityEngine_Object_TypeInfo_12d54e0 + 0x133) >> 2 & 1) != 0) &&
     (*(int *)(_UnityEngine_Object_TypeInfo_12d54e0 + 0xe0) == 0)) {
    native_sub_4327ec();
  }
  uVar3 = native_UnityEngine_Object__op_Equality_8e9a3c(lVar5,0,0);
  if ((uVar3 & 1) == 0) {
    return uVar3;
  }
  if ((bRam0000000001341464 & 1) == 0) {
    native_sub_43273c(&NGUITools_TypeInfo_12d53c8);
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



/* UIWidget$$OnApplicationPause @ 0x94c62c
 * void UIWidget__OnApplicationPause (UIWidget_o* __this, bool paused, const MethodInfo* method); */

/* UIWidget$$OnApplicationPause
   void UIWidget__OnApplicationPause (UIWidget_o* __this, bool paused, const MethodInfo* method); */

void native_UIWidget__OnApplicationPause_94c62c(long *param_1,ulong param_2)

{
  if ((param_2 & 1) != 0) {
    return;
  }
                    /* WARNING: Could not recover jumptable at 0x0094c640. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(*param_1 + 0x378))(param_1,*(undefined8 *)(*param_1 + 0x380));
  return;
}



/* UIWidget$$OnDisable @ 0x94c644
 * void UIWidget__OnDisable (UIWidget_o* __this, const MethodInfo* method); */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* UIWidget$$OnDisable
   void UIWidget__OnDisable (UIWidget_o* __this, const MethodInfo* method); */

void native_UIWidget__OnDisable_94c644(long param_1)

{
  ulong uVar1;
  long *plVar2;
  long lVar3;
  
  native_UIWidget__RemoveFromPanel_944688();
  if ((bRam0000000001342710 & 1) == 0) {
    native_sub_43273c(&Method_BetterList_UIRect__Remove___12d8a10,0);
    native_sub_43273c(&UnityEngine_Object_TypeInfo_12d54e0);
    bRam0000000001342710 = 1;
  }
  plVar2 = (long *)(param_1 + 0x70);
  lVar3 = *plVar2;
  if (((*(byte *)(_UnityEngine_Object_TypeInfo_12d54e0 + 0x133) >> 2 & 1) != 0) &&
     (*(int *)(_UnityEngine_Object_TypeInfo_12d54e0 + 0xe0) == 0)) {
    native_sub_4327ec();
  }
  uVar1 = native_UnityEngine_Object__op_Implicit_8e1b98(lVar3,0);
  if ((uVar1 & 1) != 0) {
    if ((*plVar2 == 0) || (lVar3 = *(long *)(*plVar2 + 0x50), lVar3 == 0)) {
                    /* WARNING: Subroutine does not return */
      native_sub_432810();
    }
    native_BetterList_object___Remove_ba2804
              (lVar3,param_1,_Method_BetterList_UIRect__Remove___12d8a10);
  }
  *(undefined8 *)(param_1 + 0x70) = 0;
  native_sub_4326e0(plVar2,0);
  *(undefined8 *)(param_1 + 0x68) = 0;
  native_sub_4326e0((undefined8 *)(param_1 + 0x68),0);
  *(undefined1 *)(param_1 + 0x78) = 0;
  *(undefined1 *)(param_1 + 0x59) = 0;
  return;
}



/* UIWidget$$OnDestroy @ 0x94c66c
 * void UIWidget__OnDestroy (UIWidget_o* __this, const MethodInfo* method); */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* UIWidget$$OnDestroy
   void UIWidget__OnDestroy (UIWidget_o* __this, const MethodInfo* method); */

void native_UIWidget__OnDestroy_94c66c(long param_1)

{
  ulong *puVar1;
  char cVar2;
  bool bVar3;
  ulong uVar4;
  long *plVar5;
  long lVar6;
  
  if ((bRam0000000001341462 & 1) == 0) {
    native_sub_43273c(&UnityEngine_Object_TypeInfo_12d54e0);
    bRam0000000001341462 = 1;
  }
  plVar5 = (long *)(param_1 + 0xf0);
  lVar6 = *plVar5;
  if (((*(byte *)(_UnityEngine_Object_TypeInfo_12d54e0 + 0x133) >> 2 & 1) != 0) &&
     (*(int *)(_UnityEngine_Object_TypeInfo_12d54e0 + 0xe0) == 0)) {
    native_sub_4327ec();
  }
  uVar4 = native_UnityEngine_Object__op_Inequality_8d76fc(lVar6,0,0);
  if ((uVar4 & 1) != 0) {
    if (*plVar5 == 0) {
                    /* WARNING: Subroutine does not return */
      native_sub_432810();
    }
    native_UIPanel__RemoveWidget_af4764(*plVar5,param_1,0);
    *(undefined8 *)(param_1 + 0xf0) = 0;
    native_sub_4326e0(plVar5,0);
  }
  *(undefined8 *)(param_1 + 0x160) = 0;
  if (iRam0000000001345318 != 0) {
    puVar1 = (ulong *)((param_1 + 0x160U >> 0x12 & 0x7fff) * 8 + 0x138ecd8);
    do {
      cVar2 = '\x01';
      bVar3 = (bool)ExclusiveMonitorPass(puVar1,0x10);
      if (bVar3) {
        *puVar1 = *puVar1 | 1L << (param_1 + 0x160U >> 0xc & 0x3f);
        cVar2 = ExclusiveMonitorsStatus();
      }
    } while (cVar2 != '\0');
  }
  return;
}



/* UIWidget$$get_isSelectable @ 0x94c670
 * bool UIWidget__get_isSelectable (UIWidget_o* __this, const MethodInfo* method); */

/* UIWidget$$get_isSelectable
   bool UIWidget__get_isSelectable (UIWidget_o* __this, const MethodInfo* method); */

undefined8 native_UIWidget__get_isSelectable_94c670(void)

{
  return 1;
}



/* UIWidget$$UpdateVisibility @ 0x94b00c
 * bool UIWidget__UpdateVisibility (UIWidget_o* __this, bool visibleByAlpha, bool visibleByPanel, const MethodInfo* method); */

/* UIWidget$$UpdateVisibility
   bool UIWidget__UpdateVisibility (UIWidget_o* __this, bool visibleByAlpha, bool visibleByPanel,
   const MethodInfo* method); */

undefined4 native_UIWidget__UpdateVisibility_94b00c(long param_1,byte param_2,byte param_3)

{
  undefined4 uVar1;
  
  if ((((*(char *)(param_1 + 0x154) == '\0' ^ param_2) & 1) == 0) ||
     (((*(char *)(param_1 + 0x155) != '\0' ^ param_3) & 1) != 0)) {
    uVar1 = 1;
    *(undefined1 *)(param_1 + 0x58) = 1;
    *(byte *)(param_1 + 0x154) = param_2 & 1;
    *(byte *)(param_1 + 0x155) = param_3 & 1;
  }
  else {
    uVar1 = 0;
  }
  return uVar1;
}



/* UIWidget$$UpdateTransform @ 0x94c678
 * bool UIWidget__UpdateTransform (UIWidget_o* __this, int32_t frame, const MethodInfo* method); */

/* UIWidget$$UpdateTransform
   bool UIWidget__UpdateTransform (UIWidget_o* __this, int32_t frame, const MethodInfo* method); */

bool native_UIWidget__UpdateTransform_94c678(undefined1 param_1 [16],float param_2,long param_3)

{
  bool bVar1;
  byte bVar2;
  long lVar3;
  ulong uVar4;
  long lVar5;
  float fVar6;
  undefined4 uVar7;
  float fVar8;
  float fVar9;
  int iVar10;
  undefined4 uVar11;
  float fVar12;
  float fVar13;
  int iVar14;
  float fVar15;
  float fVar16;
  float fVar17;
  
  lVar3 = native_UIRect__get_cachedTransform_c27c58(param_3,0);
  bVar2 = native_UnityEngine_Application__get_isPlaying_8d60cc(0);
  *(byte *)(param_3 + 0x101) = bVar2 & 1;
  if (*(char *)(param_3 + 0x15c) == '\0') {
    if (*(long *)(param_3 + 0xf0) == 0) goto LAB_0094c924;
    if (*(char *)(*(long *)(param_3 + 0xf0) + 0xa0) != '\0') goto LAB_0094c8d0;
    if (lVar3 == 0) goto LAB_0094c924;
    uVar4 = native_UnityEngine_Transform__get_hasChanged_772dac(lVar3,0);
    if ((uVar4 & 1) == 0) goto LAB_0094c8d0;
    *(undefined4 *)(param_3 + 0x174) = 0xffffffff;
    native_UnityEngine_Transform__set_hasChanged_772dec(lVar3,0,0);
    fVar6 = (float)native_UIWidget__get_pivotOffset_944f8c(param_3);
    lVar5 = *(long *)(param_3 + 0xf0);
    if (lVar5 == 0) goto LAB_0094c924;
    iVar10 = *(int *)(param_3 + 0xa4);
    iVar14 = *(int *)(param_3 + 0xa8);
    fVar6 = fVar6 * (float)iVar10;
    param_2 = param_2 * (float)iVar14;
    fVar9 = -param_2;
    fVar13 = 0.0;
    native_UnityEngine_Transform__TransformPoint_77299c(-fVar6,lVar3,0);
    fVar8 = (float)native_UnityEngine_Matrix4x4__MultiplyPoint3x4_8e5cec(lVar5 + 0xc0,0);
    lVar5 = *(long *)(param_3 + 0xf0);
    if (lVar5 == 0) goto LAB_0094c924;
    param_2 = (float)iVar14 - param_2;
    fVar12 = 0.0;
    native_UnityEngine_Transform__TransformPoint_77299c((float)iVar10 - fVar6,lVar3,0);
    fVar6 = (float)native_UnityEngine_Matrix4x4__MultiplyPoint3x4_8e5cec(lVar5 + 0xc0,0);
    fVar15 = *(float *)(param_3 + 0x178) - fVar8;
    fVar16 = *(float *)(param_3 + 0x17c) - fVar9;
    fVar17 = *(float *)(param_3 + 0x180) - fVar13;
    if ((fVar17 * fVar17 + fVar15 * fVar15 + fVar16 * fVar16 <= 1e-06) &&
       (fVar15 = *(float *)(param_3 + 0x184) - fVar6, fVar16 = *(float *)(param_3 + 0x188) - param_2
       , fVar17 = *(float *)(param_3 + 0x18c) - fVar12,
       fVar17 * fVar17 + fVar15 * fVar15 + fVar16 * fVar16 <= 1e-06)) goto LAB_0094c8d0;
    *(float *)(param_3 + 0x178) = fVar8;
    *(float *)(param_3 + 0x17c) = fVar9;
    *(float *)(param_3 + 0x180) = fVar13;
    *(float *)(param_3 + 0x184) = fVar6;
    *(float *)(param_3 + 0x188) = param_2;
    *(undefined1 *)(param_3 + 0x15c) = 1;
  }
  else {
    *(undefined1 *)(param_3 + 0x15c) = 1;
    *(undefined4 *)(param_3 + 0x174) = 0xffffffff;
    if (lVar3 == 0) {
LAB_0094c924:
                    /* WARNING: Subroutine does not return */
      native_sub_432810();
    }
    native_UnityEngine_Transform__set_hasChanged_772dec(lVar3,0,0);
    fVar6 = (float)native_UIWidget__get_pivotOffset_944f8c(param_3);
    lVar5 = *(long *)(param_3 + 0xf0);
    if (lVar5 == 0) goto LAB_0094c924;
    iVar10 = *(int *)(param_3 + 0xa4);
    iVar14 = *(int *)(param_3 + 0xa8);
    fVar6 = fVar6 * (float)iVar10;
    param_2 = param_2 * (float)iVar14;
    fVar8 = -param_2;
    uVar11 = 0;
    native_UnityEngine_Transform__TransformPoint_77299c(-fVar6,lVar3,0);
    uVar7 = native_UnityEngine_Matrix4x4__MultiplyPoint3x4_8e5cec(lVar5 + 0xc0,0);
    lVar5 = *(long *)(param_3 + 0xf0);
    *(undefined4 *)(param_3 + 0x178) = uVar7;
    *(float *)(param_3 + 0x17c) = fVar8;
    *(undefined4 *)(param_3 + 0x180) = uVar11;
    if (lVar5 == 0) goto LAB_0094c924;
    param_2 = (float)iVar14 - param_2;
    fVar12 = 0.0;
    native_UnityEngine_Transform__TransformPoint_77299c((float)iVar10 - fVar6,lVar3,0);
    uVar7 = native_UnityEngine_Matrix4x4__MultiplyPoint3x4_8e5cec(lVar5 + 0xc0,0);
    *(undefined4 *)(param_3 + 0x184) = uVar7;
    *(float *)(param_3 + 0x188) = param_2;
  }
  *(float *)(param_3 + 0x18c) = fVar12;
LAB_0094c8d0:
  if ((*(char *)(param_3 + 0x15c) == '\0') ||
     ((*(long *)(param_3 + 0xc0) != 0 &&
      (native_UIWidget_OnDimensionsChanged__Invoke_55ba68(*(long *)(param_3 + 0xc0),0),
      *(char *)(param_3 + 0x15c) == '\0')))) {
    bVar1 = *(char *)(param_3 + 0x58) != '\0';
  }
  else {
    bVar1 = true;
  }
  return bVar1;
}



/* UIWidget$$UpdateGeometry @ 0x94c928
 * bool UIWidget__UpdateGeometry (UIWidget_o* __this, int32_t frame, const MethodInfo* method); */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* UIWidget$$UpdateGeometry
   bool UIWidget__UpdateGeometry (UIWidget_o* __this, int32_t frame, const MethodInfo* method); */

uint native_UIWidget__UpdateGeometry_94c928(long *param_1,int param_2)

{
  undefined1 uVar1;
  uint uVar2;
  undefined8 uVar3;
  ulong uVar4;
  undefined8 *puVar5;
  long lVar6;
  float fVar7;
  undefined8 uStack_2b0;
  undefined8 uStack_2a8;
  undefined8 uStack_2a0;
  undefined8 uStack_298;
  undefined8 uStack_290;
  undefined8 uStack_288;
  undefined8 uStack_280;
  undefined8 uStack_278;
  undefined8 uStack_270;
  undefined8 uStack_268;
  undefined8 uStack_260;
  undefined8 uStack_258;
  undefined8 uStack_250;
  undefined8 uStack_248;
  undefined8 uStack_240;
  undefined8 uStack_238;
  undefined8 uStack_230;
  undefined8 uStack_228;
  undefined8 uStack_220;
  undefined8 uStack_218;
  undefined8 uStack_210;
  undefined8 uStack_208;
  undefined8 uStack_200;
  undefined8 uStack_1f8;
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
  undefined8 uStack_178;
  undefined8 uStack_170;
  undefined8 uStack_168;
  undefined8 uStack_160;
  undefined8 uStack_158;
  undefined8 uStack_150;
  undefined8 uStack_148;
  undefined8 uStack_140;
  undefined8 uStack_138;
  undefined8 uStack_130;
  undefined8 uStack_128;
  undefined8 uStack_120;
  undefined8 uStack_118;
  undefined8 uStack_110;
  undefined8 uStack_108;
  undefined8 uStack_100;
  undefined8 uStack_f8;
  undefined8 uStack_f0;
  undefined8 uStack_e8;
  undefined8 uStack_e0;
  undefined8 uStack_d8;
  undefined8 uStack_d0;
  undefined8 uStack_c8;
  undefined8 uStack_c0;
  undefined8 uStack_b8;
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
  
  puVar5 = &uStack_2b0;
  if ((bRam000000000134146a & 1) == 0) {
    native_sub_43273c(&UnityEngine_Object_TypeInfo_12d54e0);
    bRam000000000134146a = 1;
  }
  fVar7 = (float)(**(code **)(*param_1 + 0x1c8))(param_1,param_2,*(undefined8 *)(*param_1 + 0x1d0));
  if ((*(char *)((long)param_1 + 0x154) != '\0') && (*(float *)(param_1 + 0x2b) != fVar7)) {
    *(undefined1 *)(param_1 + 0xb) = 1;
  }
  *(float *)(param_1 + 0x2b) = fVar7;
  if ((char)param_1[0xb] == '\0') {
    if (*(char *)((long)param_1 + 0x15c) == '\0') {
LAB_0094cadc:
      uVar2 = 0;
      *(undefined1 *)((long)param_1 + 0x15c) = 0;
      goto LAB_0094cae4;
    }
    if (param_1[0x1f] == 0) goto LAB_0094cccc;
    uVar4 = native_UIGeometry__get_hasVertices_9ef420(param_1[0x1f],0);
    if ((uVar4 & 1) == 0) goto LAB_0094cadc;
    if (*(int *)((long)param_1 + 0x174) != param_2) {
      lVar6 = param_1[0x1e];
      if (lVar6 == 0) goto LAB_0094cccc;
      uStack_48 = *(undefined8 *)(lVar6 + 0xe8);
      uStack_50 = *(undefined8 *)(lVar6 + 0xe0);
      uStack_38 = *(undefined8 *)(lVar6 + 0xf8);
      uStack_40 = *(undefined8 *)(lVar6 + 0xf0);
      uStack_68 = *(undefined8 *)(lVar6 + 200);
      uStack_70 = *(undefined8 *)(lVar6 + 0xc0);
      uStack_58 = *(undefined8 *)(lVar6 + 0xd8);
      uStack_60 = *(undefined8 *)(lVar6 + 0xd0);
      lVar6 = native_UIRect__get_cachedTransform_c27c58(param_1,0);
      if (lVar6 == 0) goto LAB_0094cccc;
      native_UnityEngine_Transform__get_localToWorldMatrix_7657b8(&uStack_b0,lVar6,0);
      uStack_208 = uStack_88;
      uStack_210 = uStack_90;
      uStack_1f8 = uStack_78;
      uStack_200 = uStack_80;
      uStack_228 = uStack_a8;
      uStack_230 = uStack_b0;
      uStack_218 = uStack_98;
      uStack_220 = uStack_a0;
      uStack_1c8 = uStack_48;
      uStack_1d0 = uStack_50;
      uStack_1b8 = uStack_38;
      uStack_1c0 = uStack_40;
      uStack_1e8 = uStack_68;
      uStack_1f0 = uStack_70;
      uStack_1d8 = uStack_58;
      uStack_1e0 = uStack_60;
      native_UnityEngine_Matrix4x4__op_Multiply_8e5bc0(&uStack_b0,&uStack_1f0,&uStack_230,0);
      uStack_248 = uStack_88;
      uStack_250 = uStack_90;
      uStack_238 = uStack_78;
      uStack_240 = uStack_80;
      uStack_268 = uStack_a8;
      uStack_270 = uStack_b0;
      uStack_258 = uStack_98;
      uStack_260 = uStack_a0;
      *(undefined8 *)((long)param_1 + 0x14c) = uStack_78;
      *(undefined8 *)((long)param_1 + 0x144) = uStack_80;
      *(undefined8 *)((long)param_1 + 0x13c) = uStack_88;
      *(undefined8 *)((long)param_1 + 0x134) = uStack_90;
      *(undefined8 *)((long)param_1 + 300) = uStack_98;
      *(undefined8 *)((long)param_1 + 0x124) = uStack_a0;
      *(undefined8 *)((long)param_1 + 0x11c) = uStack_a8;
      *(undefined8 *)((long)param_1 + 0x114) = uStack_b0;
      *(int *)((long)param_1 + 0x174) = param_2;
    }
    uStack_288 = *(undefined8 *)((long)param_1 + 0x13c);
    uStack_290 = *(undefined8 *)((long)param_1 + 0x134);
    uStack_278 = *(undefined8 *)((long)param_1 + 0x14c);
    uStack_280 = *(undefined8 *)((long)param_1 + 0x144);
    uStack_2a8 = *(undefined8 *)((long)param_1 + 0x11c);
    uStack_2b0 = *(undefined8 *)((long)param_1 + 0x114);
    uStack_298 = *(undefined8 *)((long)param_1 + 300);
    uStack_2a0 = *(undefined8 *)((long)param_1 + 0x124);
    lVar6 = param_1[0x1f];
    uStack_70 = uStack_2b0;
    uStack_68 = uStack_2a8;
    uStack_60 = uStack_2a0;
    uStack_58 = uStack_298;
    uStack_50 = uStack_290;
    uStack_48 = uStack_288;
    uStack_40 = uStack_280;
    uStack_38 = uStack_278;
    if ((param_1[0x1e] == 0) || (lVar6 == 0)) goto LAB_0094cccc;
    uVar1 = *(undefined1 *)(param_1[0x1e] + 0x99);
LAB_0094cca0:
    native_UIGeometry__ApplyTransform_9ef590(lVar6,puVar5,uVar1,0);
  }
  else {
    if ((0.001 < fVar7) && (*(char *)((long)param_1 + 0x154) != '\0')) {
      uVar3 = (**(code **)(*param_1 + 0x348))(param_1,*(undefined8 *)(*param_1 + 0x350));
      if (((*(byte *)(_UnityEngine_Object_TypeInfo_12d54e0 + 0x133) >> 2 & 1) != 0) &&
         (*(int *)(_UnityEngine_Object_TypeInfo_12d54e0 + 0xe0) == 0)) {
        native_sub_4327ec(_UnityEngine_Object_TypeInfo_12d54e0);
      }
      uVar4 = native_UnityEngine_Object__op_Inequality_8d76fc(uVar3,0,0);
      if ((uVar4 & 1) == 0) goto LAB_0094ca7c;
      if (param_1[0x1f] == 0) goto LAB_0094cccc;
      uVar2 = native_UIGeometry__get_hasVertices_9ef420(param_1[0x1f],0);
      if ((char)param_1[0x20] != '\0') {
        if (param_1[0x1f] == 0) goto LAB_0094cccc;
        native_UIGeometry__Clear_9ef4e4(param_1[0x1f],0);
        lVar6 = param_1[0x1f];
        if (lVar6 == 0) goto LAB_0094cccc;
        (**(code **)(*param_1 + 0x3f8))
                  (param_1,*(undefined8 *)(lVar6 + 0x10),*(undefined8 *)(lVar6 + 0x18),
                   *(undefined8 *)(lVar6 + 0x20),*(undefined8 *)(*param_1 + 0x400));
      }
      if (param_1[0x1f] == 0) goto LAB_0094cccc;
      uVar4 = native_UIGeometry__get_hasVertices_9ef420(param_1[0x1f],0);
      if ((uVar4 & 1) != 0) {
        if (*(int *)((long)param_1 + 0x174) != param_2) {
          lVar6 = param_1[0x1e];
          if (lVar6 == 0) goto LAB_0094cccc;
          uStack_48 = *(undefined8 *)(lVar6 + 0xe8);
          uStack_50 = *(undefined8 *)(lVar6 + 0xe0);
          uStack_38 = *(undefined8 *)(lVar6 + 0xf8);
          uStack_40 = *(undefined8 *)(lVar6 + 0xf0);
          uStack_68 = *(undefined8 *)(lVar6 + 200);
          uStack_70 = *(undefined8 *)(lVar6 + 0xc0);
          uStack_58 = *(undefined8 *)(lVar6 + 0xd8);
          uStack_60 = *(undefined8 *)(lVar6 + 0xd0);
          lVar6 = native_UIRect__get_cachedTransform_c27c58(param_1,0);
          if (lVar6 == 0) goto LAB_0094cccc;
          native_UnityEngine_Transform__get_localToWorldMatrix_7657b8(&uStack_b0,lVar6,0);
          uStack_108 = uStack_88;
          uStack_110 = uStack_90;
          uStack_f8 = uStack_78;
          uStack_100 = uStack_80;
          uStack_128 = uStack_a8;
          uStack_130 = uStack_b0;
          uStack_118 = uStack_98;
          uStack_120 = uStack_a0;
          uStack_c8 = uStack_48;
          uStack_d0 = uStack_50;
          uStack_b8 = uStack_38;
          uStack_c0 = uStack_40;
          uStack_e8 = uStack_68;
          uStack_f0 = uStack_70;
          uStack_d8 = uStack_58;
          uStack_e0 = uStack_60;
          native_UnityEngine_Matrix4x4__op_Multiply_8e5bc0(&uStack_b0,&uStack_f0,&uStack_130,0);
          uStack_148 = uStack_88;
          uStack_150 = uStack_90;
          uStack_138 = uStack_78;
          uStack_140 = uStack_80;
          uStack_168 = uStack_a8;
          uStack_170 = uStack_b0;
          uStack_158 = uStack_98;
          uStack_160 = uStack_a0;
          *(undefined8 *)((long)param_1 + 0x14c) = uStack_78;
          *(undefined8 *)((long)param_1 + 0x144) = uStack_80;
          *(undefined8 *)((long)param_1 + 0x13c) = uStack_88;
          *(undefined8 *)((long)param_1 + 0x134) = uStack_90;
          *(undefined8 *)((long)param_1 + 300) = uStack_98;
          *(undefined8 *)((long)param_1 + 0x124) = uStack_a0;
          *(undefined8 *)((long)param_1 + 0x11c) = uStack_a8;
          *(undefined8 *)((long)param_1 + 0x114) = uStack_b0;
          *(int *)((long)param_1 + 0x174) = param_2;
        }
        uStack_188 = *(undefined8 *)((long)param_1 + 0x13c);
        uStack_190 = *(undefined8 *)((long)param_1 + 0x134);
        uStack_178 = *(undefined8 *)((long)param_1 + 0x14c);
        uStack_180 = *(undefined8 *)((long)param_1 + 0x144);
        uStack_1a8 = *(undefined8 *)((long)param_1 + 0x11c);
        uStack_1b0 = *(undefined8 *)((long)param_1 + 0x114);
        uStack_198 = *(undefined8 *)((long)param_1 + 300);
        uStack_1a0 = *(undefined8 *)((long)param_1 + 0x124);
        lVar6 = param_1[0x1f];
        uStack_70 = uStack_1b0;
        uStack_68 = uStack_1a8;
        uStack_60 = uStack_1a0;
        uStack_58 = uStack_198;
        uStack_50 = uStack_190;
        uStack_48 = uStack_188;
        uStack_40 = uStack_180;
        uStack_38 = uStack_178;
        if ((param_1[0x1e] == 0) || (lVar6 == 0)) goto LAB_0094cccc;
        uVar1 = *(undefined1 *)(param_1[0x1e] + 0x99);
        puVar5 = &uStack_1b0;
        goto LAB_0094cca0;
      }
LAB_0094cae4:
      *(undefined1 *)(param_1 + 0xb) = 0;
      goto LAB_0094ccb4;
    }
LAB_0094ca7c:
    if (param_1[0x1f] == 0) {
LAB_0094cccc:
                    /* WARNING: Subroutine does not return */
      native_sub_432810();
    }
    uVar4 = native_UIGeometry__get_hasVertices_9ef420(param_1[0x1f],0);
    if ((uVar4 & 1) == 0) goto LAB_0094cadc;
    if ((char)param_1[0x20] != '\0') {
      if (param_1[0x1f] == 0) goto LAB_0094cccc;
      native_UIGeometry__Clear_9ef4e4(param_1[0x1f],0);
    }
  }
  *(undefined1 *)((long)param_1 + 0x15c) = 0;
  *(undefined1 *)(param_1 + 0xb) = 0;
  uVar2 = 1;
LAB_0094ccb4:
  return uVar2 & 1;
}



/* UIWidget$$WriteToBuffers @ 0x94ccd0
 * void UIWidget__WriteToBuffers (UIWidget_o* __this, System_Collections_Generic_List_Vector3__o* v, System_Collections_Generic_List_Vector2__o* u, System_Collections_Generic_List_Color__o* c, System_Collections_Generic_List_Vector3__o* n, System_Collections_Generic_List_Vector4__o* t, System_Collections_Generic_List_Vector4__o* u2, const MethodInfo* method); */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* UIWidget$$WriteToBuffers
   void UIWidget__WriteToBuffers (UIWidget_o* __this, System_Collections_Generic_List_Vector3__o* v,
   System_Collections_Generic_List_Vector2__o* u, System_Collections_Generic_List_Color__o* c,
   System_Collections_Generic_List_Vector3__o* n, System_Collections_Generic_List_Vector4__o* t,
   System_Collections_Generic_List_Vector4__o* u2, const MethodInfo* method); */

void native_UIWidget__WriteToBuffers_94ccd0
               (long param_1,long *param_2,long param_3,long param_4,long param_5,long param_6,
               long param_7)

{
  long *plVar1;
  ushort uVar2;
  int iVar3;
  bool bVar4;
  undefined8 uVar5;
  undefined8 *puVar6;
  ulong uVar7;
  long lVar8;
  int *piVar9;
  undefined1 *puVar10;
  long lVar11;
  ulong uVar12;
  long lVar13;
  long lVar14;
  code *pcVar15;
  long lVar16;
  ulong uVar17;
  undefined4 uVar18;
  
  lVar8 = *(long *)(param_1 + 0xf8);
  if (lVar8 == 0) {
                    /* WARNING: Subroutine does not return */
    native_sub_432810();
  }
  if ((bRam0000000001341962 & 1) == 0) {
    native_sub_43273c(&Method_System_Collections_Generic_List_Vector4__Add___12dd520);
    native_sub_43273c(&Method_System_Collections_Generic_List_Vector2__Add___12dd4b0);
    native_sub_43273c(&Method_System_Collections_Generic_List_Color__Add___12dc690);
    native_sub_43273c(&Method_System_Collections_Generic_List_Vector3__Add___12dd4e0);
    native_sub_43273c(&Method_System_Collections_Generic_List_Vector3__get_Count___12dd500);
    native_sub_43273c(&Method_System_Collections_Generic_List_Vector2__get_Item___12dd4d0);
    native_sub_43273c(&Method_System_Collections_Generic_List_Color__get_Item___12dc6b0);
    native_sub_43273c(&Method_System_Collections_Generic_List_Vector3__get_Item___12dd508);
    bRam0000000001341962 = 1;
  }
  lVar13 = *(long *)(lVar8 + 0x30);
  if ((lVar13 == 0) || (iVar3 = *(int *)(lVar13 + 0x18), iVar3 < 1)) {
    return;
  }
  if (param_5 == 0) {
    lVar14 = 0;
    lVar16 = 0;
    lVar11 = 0;
    uVar12 = 0;
    do {
      if (*(uint *)(lVar13 + 0x18) <= uVar12) {
        native_System_ThrowHelper__ThrowArgumentOutOfRangeException_9fe0f4(0);
      }
      if (param_2 == (long *)0x0) break;
      lVar13 = *(long *)(lVar13 + 0x10) + lVar14;
      native_System_Collections_Generic_List_Vector3___Add_d2be08
                (*(undefined4 *)(lVar13 + 0x20),*(undefined4 *)(lVar13 + 0x24),
                 *(undefined4 *)(lVar13 + 0x28),param_2,
                 _Method_System_Collections_Generic_List_Vector3__Add___12dd4e0);
      lVar13 = *(long *)(lVar8 + 0x18);
      if (lVar13 == 0) break;
      if (*(uint *)(lVar13 + 0x18) <= uVar12) {
        native_System_ThrowHelper__ThrowArgumentOutOfRangeException_9fe0f4(0);
      }
      if (param_3 == 0) break;
      lVar13 = *(long *)(lVar13 + 0x10) + lVar16;
      native_System_Collections_Generic_List_Vector2___Add_d293ec
                (*(undefined4 *)(lVar13 + 0x20),*(undefined4 *)(lVar13 + 0x24),param_3,
                 _Method_System_Collections_Generic_List_Vector2__Add___12dd4b0);
      lVar13 = *(long *)(lVar8 + 0x20);
      if (lVar13 == 0) break;
      if (*(uint *)(lVar13 + 0x18) <= uVar12) {
        native_System_ThrowHelper__ThrowArgumentOutOfRangeException_9fe0f4(0);
      }
      if (param_4 == 0) break;
      lVar13 = *(long *)(lVar13 + 0x10) + lVar11;
      uVar7 = (ulong)*(uint *)(lVar13 + 0x28);
      uVar17 = (ulong)*(uint *)(lVar13 + 0x2c);
      native_System_Collections_Generic_List_Color___Add_d07158
                (*(undefined4 *)(lVar13 + 0x20),*(undefined4 *)(lVar13 + 0x24),uVar7,uVar17,param_4,
                 _Method_System_Collections_Generic_List_Color__Add___12dc690);
      uVar12 = uVar12 + 1;
      if ((long)iVar3 <= (long)uVar12) goto LAB_009efa48;
      lVar13 = *(long *)(lVar8 + 0x30);
      lVar11 = lVar11 + 0x10;
      lVar16 = lVar16 + 8;
      lVar14 = lVar14 + 0xc;
    } while (lVar13 != 0);
  }
  else {
    lVar14 = 0;
    lVar16 = 0;
    lVar11 = 0;
    uVar12 = 0;
    do {
      if (*(uint *)(lVar13 + 0x18) <= uVar12) {
        native_System_ThrowHelper__ThrowArgumentOutOfRangeException_9fe0f4(0);
      }
      if (param_2 == (long *)0x0) break;
      lVar13 = *(long *)(lVar13 + 0x10) + lVar14;
      native_System_Collections_Generic_List_Vector3___Add_d2be08
                (*(undefined4 *)(lVar13 + 0x20),*(undefined4 *)(lVar13 + 0x24),
                 *(undefined4 *)(lVar13 + 0x28),param_2,
                 _Method_System_Collections_Generic_List_Vector3__Add___12dd4e0);
      lVar13 = *(long *)(lVar8 + 0x18);
      if (lVar13 == 0) break;
      if (*(uint *)(lVar13 + 0x18) <= uVar12) {
        native_System_ThrowHelper__ThrowArgumentOutOfRangeException_9fe0f4(0);
      }
      if (param_3 == 0) break;
      lVar13 = *(long *)(lVar13 + 0x10) + lVar16;
      native_System_Collections_Generic_List_Vector2___Add_d293ec
                (*(undefined4 *)(lVar13 + 0x20),*(undefined4 *)(lVar13 + 0x24),param_3,
                 _Method_System_Collections_Generic_List_Vector2__Add___12dd4b0);
      lVar13 = *(long *)(lVar8 + 0x20);
      if (lVar13 == 0) break;
      if (*(uint *)(lVar13 + 0x18) <= uVar12) {
        native_System_ThrowHelper__ThrowArgumentOutOfRangeException_9fe0f4(0);
      }
      if (param_4 == 0) break;
      lVar13 = *(long *)(lVar13 + 0x10) + lVar11;
      native_System_Collections_Generic_List_Color___Add_d07158
                (*(undefined4 *)(lVar13 + 0x20),*(undefined4 *)(lVar13 + 0x24),
                 *(undefined4 *)(lVar13 + 0x28),*(undefined4 *)(lVar13 + 0x2c),param_4,
                 _Method_System_Collections_Generic_List_Color__Add___12dc690);
      native_System_Collections_Generic_List_Vector3___Add_d2be08
                (*(undefined4 *)(lVar8 + 0x38),*(undefined4 *)(lVar8 + 0x3c),
                 *(undefined4 *)(lVar8 + 0x40),param_5,
                 _Method_System_Collections_Generic_List_Vector3__Add___12dd4e0);
      if (param_6 == 0) break;
      uVar7 = (ulong)*(uint *)(lVar8 + 0x4c);
      uVar17 = (ulong)*(uint *)(lVar8 + 0x50);
      native_System_Collections_Generic_List_Vector4___Add_d2e8b0
                (*(undefined4 *)(lVar8 + 0x44),*(undefined4 *)(lVar8 + 0x48),uVar7,uVar17,param_6,
                 _Method_System_Collections_Generic_List_Vector4__Add___12dd520);
      uVar12 = uVar12 + 1;
      if ((long)iVar3 <= (long)uVar12) goto LAB_009efa48;
      lVar13 = *(long *)(lVar8 + 0x30);
      lVar11 = lVar11 + 0x10;
      lVar16 = lVar16 + 8;
      lVar14 = lVar14 + 0xc;
    } while (lVar13 != 0);
  }
LAB_009efb00:
                    /* WARNING: Subroutine does not return */
  native_sub_432810();
LAB_009efa48:
  if (param_7 == 0) {
LAB_009efb04:
    lVar8 = *(long *)(lVar8 + 0x28);
    if (lVar8 == 0) {
      return;
    }
    lVar13 = *(long *)(lVar8 + 0x68);
    if (lVar13 == 0) {
      puVar10 = &stack0xffffffffffffff98;
      lVar11 = 1;
    }
    else {
      lVar11 = *(long *)(lVar13 + 0x18);
      if (lVar11 == 0) {
        return;
      }
      puVar10 = (undefined1 *)(lVar13 + 0x20);
    }
    lVar13 = 0;
    do {
      lVar14 = *(long *)(puVar10 + lVar13 * 8);
      plVar1 = *(long **)(lVar14 + 0x20);
      lVar16 = *(long *)(lVar14 + 0x28);
      pcVar15 = *(code **)(lVar14 + 0x10);
      if (*(short *)(lVar16 + 0x48) == -1) {
        native_sub_4327f4(lVar16);
      }
      uVar12 = native_sub_432768(lVar16);
      bVar4 = *(char *)(lVar16 + 0x4a) != '\x06';
      if ((uVar12 & 1) == 0) {
        if (bVar4) {
          if ((*(short *)(lVar16 + 0x48) == -1) || (*(long *)(lVar8 + 0x18) == 0))
          goto LAB_00556bd4;
          uVar12 = native_sub_432760(lVar16);
          uVar7 = native_sub_432b64(lVar16);
          if ((uVar12 & 1) == 0) {
            uVar2 = *(ushort *)(lVar16 + 0x48);
            if ((uVar7 & 1) == 0) {
              lVar16 = *param_2 + (ulong)uVar2 * 0x10;
              (**(code **)(lVar16 + 0x138))
                        (param_2,param_3,param_4,param_5,param_6,param_7,
                         *(undefined8 *)(lVar16 + 0x140));
              goto LAB_00556bf0;
            }
            lVar16 = native_sub_432764(lVar16);
            lVar14 = *param_2;
            if ((ulong)*(ushort *)(lVar14 + 0x12a) != 0) {
              uVar12 = 0;
              piVar9 = (int *)(*(long *)(lVar14 + 0xb0) + 8);
              do {
                if (*(long *)(piVar9 + -2) == lVar16) {
                  puVar6 = (undefined8 *)
                           (lVar14 + (long)(int)(*piVar9 + (uint)uVar2) * 0x10 + 0x138);
                  goto LAB_005569c0;
                }
                uVar12 = uVar12 + 1;
                piVar9 = piVar9 + 4;
              } while (uVar12 < *(ushort *)(lVar14 + 0x12a));
            }
            puVar6 = (undefined8 *)native_sub_3c9b34(param_2,lVar16,(ulong)uVar2);
LAB_005569c0:
            pcVar15 = (code *)*puVar6;
            puVar6 = (undefined8 *)puVar6[1];
          }
          else {
            if ((uVar7 & 1) == 0) {
              uVar5 = *(undefined8 *)(*param_2 + (ulong)*(ushort *)(lVar16 + 0x48) * 0x10 + 0x140);
            }
            else {
              lVar14 = *param_2;
              if ((ulong)*(ushort *)(lVar14 + 0x12a) != 0) {
                uVar12 = 0;
                piVar9 = (int *)(*(long *)(lVar14 + 0xb0) + 8);
                do {
                  if (*(long *)(piVar9 + -2) == *(long *)(lVar16 + 0x18)) {
                    lVar14 = lVar14 + (long)(int)(*piVar9 + (uint)*(ushort *)(lVar16 + 0x48)) * 0x10
                             + 0x138;
                    goto LAB_00556998;
                  }
                  uVar12 = uVar12 + 1;
                  piVar9 = piVar9 + 4;
                } while (uVar12 < *(ushort *)(lVar14 + 0x12a));
              }
              lVar14 = native_sub_3c9b34(param_2);
LAB_00556998:
              uVar5 = *(undefined8 *)(lVar14 + 8);
            }
            puVar6 = (undefined8 *)native_sub_4327e8(uVar5,lVar16);
            pcVar15 = (code *)*puVar6;
          }
          (*pcVar15)(param_2,param_3,param_4,param_5,param_6,param_7,puVar6);
        }
        else {
          if ((((plVar1 == (long *)0x0) || (*(short *)(lVar16 + 0x48) == -1)) ||
              ((*(byte *)(*plVar1 + 0x115) & 1) != 0)) || (*(long *)(lVar8 + 0x18) == 0))
          goto LAB_00556b34;
          uVar12 = native_sub_432760(lVar16);
          uVar7 = native_sub_432b64(lVar16);
          if ((uVar12 & 1) == 0) {
            uVar2 = *(ushort *)(lVar16 + 0x48);
            if ((uVar7 & 1) == 0) {
              lVar16 = *plVar1 + (ulong)uVar2 * 0x10;
              (**(code **)(lVar16 + 0x138))
                        (plVar1,param_2,param_3,param_4,param_5,param_6,param_7,
                         *(undefined8 *)(lVar16 + 0x140));
              goto LAB_00556bf0;
            }
            lVar16 = native_sub_432764(lVar16);
            lVar14 = *plVar1;
            if ((ulong)*(ushort *)(lVar14 + 0x12a) != 0) {
              uVar12 = 0;
              piVar9 = (int *)(*(long *)(lVar14 + 0xb0) + 8);
              do {
                if (*(long *)(piVar9 + -2) == lVar16) {
                  puVar6 = (undefined8 *)
                           (lVar14 + (long)(int)(*piVar9 + (uint)uVar2) * 0x10 + 0x138);
                  goto LAB_00556a44;
                }
                uVar12 = uVar12 + 1;
                piVar9 = piVar9 + 4;
              } while (uVar12 < *(ushort *)(lVar14 + 0x12a));
            }
            puVar6 = (undefined8 *)native_sub_3c9b34(plVar1,lVar16,(ulong)uVar2);
LAB_00556a44:
            pcVar15 = (code *)*puVar6;
            puVar6 = (undefined8 *)puVar6[1];
          }
          else {
            if ((uVar7 & 1) == 0) {
              uVar5 = *(undefined8 *)(*plVar1 + (ulong)*(ushort *)(lVar16 + 0x48) * 0x10 + 0x140);
            }
            else {
              lVar14 = *plVar1;
              if ((ulong)*(ushort *)(lVar14 + 0x12a) != 0) {
                uVar12 = 0;
                piVar9 = (int *)(*(long *)(lVar14 + 0xb0) + 8);
                do {
                  if (*(long *)(piVar9 + -2) == *(long *)(lVar16 + 0x18)) {
                    lVar14 = lVar14 + (long)(int)(*piVar9 + (uint)*(ushort *)(lVar16 + 0x48)) * 0x10
                             + 0x138;
                    goto LAB_00556a1c;
                  }
                  uVar12 = uVar12 + 1;
                  piVar9 = piVar9 + 4;
                } while (uVar12 < *(ushort *)(lVar14 + 0x12a));
              }
              lVar14 = native_sub_3c9b34(plVar1);
LAB_00556a1c:
              uVar5 = *(undefined8 *)(lVar14 + 8);
            }
            puVar6 = (undefined8 *)native_sub_4327e8(uVar5,lVar16);
            pcVar15 = (code *)*puVar6;
          }
          (*pcVar15)(plVar1,param_2,param_3,param_4,param_5,param_6,param_7,puVar6);
        }
      }
      else if (bVar4) {
LAB_00556b34:
        (*pcVar15)(plVar1,param_2,param_3,param_4,param_5,param_6,param_7,lVar16);
      }
      else {
LAB_00556bd4:
        (*pcVar15)(param_2,param_3,param_4,param_5,param_6,param_7,lVar16);
      }
LAB_00556bf0:
      lVar13 = lVar13 + 1;
      if (lVar13 == lVar11) {
        return;
      }
    } while( true );
  }
  native_UnityEngine_Vector4__get_zero_777178(0);
  lVar13 = *(long *)(lVar8 + 0x10);
  if (lVar13 != 0) {
    iVar3 = *(int *)(lVar13 + 0x18);
    if (iVar3 < 1) goto LAB_009efb04;
    lVar11 = 0;
    uVar12 = 0;
    do {
      lVar16 = lVar13;
      if (*(uint *)(lVar13 + 0x18) <= uVar12) {
        native_System_ThrowHelper__ThrowArgumentOutOfRangeException_9fe0f4(0);
        lVar16 = *(long *)(lVar8 + 0x10);
        if (lVar16 == 0) break;
      }
      uVar18 = *(undefined4 *)(*(long *)(lVar13 + 0x10) + lVar11 + 0x20);
      if (*(uint *)(lVar16 + 0x18) <= uVar12) {
        native_System_ThrowHelper__ThrowArgumentOutOfRangeException_9fe0f4(0);
      }
      native_System_Collections_Generic_List_Vector4___Add_d2e8b0
                (uVar18,*(undefined4 *)(*(long *)(lVar16 + 0x10) + lVar11 + 0x24),uVar7,uVar17,
                 param_7,_Method_System_Collections_Generic_List_Vector4__Add___12dd520);
      uVar12 = uVar12 + 1;
      if ((long)iVar3 <= (long)uVar12) goto LAB_009efb04;
      lVar13 = *(long *)(lVar8 + 0x10);
      lVar11 = lVar11 + 0xc;
    } while (lVar13 != 0);
  }
  goto LAB_009efb00;
}



/* UIWidget$$MakePixelPerfect @ 0x9451e4
 * void UIWidget__MakePixelPerfect (UIWidget_o* __this, const MethodInfo* method); */

/* UIWidget$$MakePixelPerfect
   void UIWidget__MakePixelPerfect (UIWidget_o* __this, const MethodInfo* method); */

void native_UIWidget__MakePixelPerfect_9451e4
               (undefined1 param_1 [16],float param_2,float param_3,undefined8 param_4)

{
  float fVar1;
  long lVar2;
  float fVar3;
  double dVar4;
  undefined8 uVar5;
  float fVar6;
  ulong uVar7;
  float fVar8;
  double dStack_38;
  
  lVar2 = native_UIRect__get_cachedTransform_c27c58(param_4,0);
  if (lVar2 == 0) goto LAB_0094541c;
  fVar3 = (float)native_UnityEngine_Transform__get_localPosition_7717f4(lVar2,0);
  dVar4 = (double)func_0x002c9600((double)param_3,&dStack_38);
  if (0.0 <= param_3) {
    if (dVar4 == 0.5) {
      fVar6 = 1.0;
      goto LAB_00945260;
    }
    fVar8 = (float)(int)(param_3 + 0.5);
  }
  else if (dVar4 == -0.5) {
    fVar6 = -1.0;
LAB_00945260:
    fVar8 = (float)dStack_38;
    if (((long)dStack_38 & 1U) != 0) {
      fVar8 = (float)dStack_38 + fVar6;
    }
  }
  else {
    fVar8 = (float)(int)(param_3 + -0.5);
  }
  dVar4 = (double)func_0x002c9600((double)fVar3,&dStack_38);
  if (0.0 <= fVar3) {
    if (dVar4 == 0.5) {
      fVar3 = 1.0;
      goto LAB_009452d4;
    }
    fVar6 = (float)(int)(fVar3 + 0.5);
  }
  else if (dVar4 == -0.5) {
    fVar3 = -1.0;
LAB_009452d4:
    fVar6 = (float)dStack_38;
    if (((long)dStack_38 & 1U) != 0) {
      fVar6 = (float)dStack_38 + fVar3;
    }
  }
  else {
    fVar6 = (float)(int)(fVar3 + -0.5);
  }
  dVar4 = (double)func_0x002c9600((double)param_2,&dStack_38);
  if (0.0 <= param_2) {
    if (dVar4 == 0.5) {
      fVar3 = 1.0;
      goto LAB_00945348;
    }
    uVar7 = (ulong)(uint)(int)(param_2 + 0.5);
  }
  else if (dVar4 == -0.5) {
    fVar3 = -1.0;
LAB_00945348:
    fVar1 = (float)dStack_38;
    if (((long)dStack_38 & 1U) != 0) {
      fVar1 = (float)dStack_38 + fVar3;
    }
    uVar7 = (ulong)(uint)fVar1;
  }
  else {
    uVar7 = (ulong)(uint)(int)(param_2 + -0.5);
  }
  lVar2 = native_UIRect__get_cachedTransform_c27c58(param_4,0);
  if (lVar2 != 0) {
    native_UnityEngine_Transform__set_localPosition_7718a4(fVar6,uVar7,fVar8,lVar2,0);
    lVar2 = native_UIRect__get_cachedTransform_c27c58(param_4,0);
    if (lVar2 != 0) {
      uVar5 = native_UnityEngine_Transform__get_localScale_771d80(lVar2,0);
      lVar2 = native_UIRect__get_cachedTransform_c27c58(param_4,0);
      native_UnityEngine_Mathf__Sign_8e51d8(uVar5,0);
      native_UnityEngine_Mathf__Sign_8e51d8(uVar7,0);
      if (lVar2 != 0) {
        if (pcRam000000000133ff18 == (code *)0x0) {
          pcRam000000000133ff18 = (code *)native_sub_4326f0(&UNK_00e2af52,0);
        }
        (*pcRam000000000133ff18)(lVar2,&stack0xffffffffffffffd0);
        return;
      }
    }
  }
LAB_0094541c:
                    /* WARNING: Subroutine does not return */
  native_sub_432810();
}



/* UIWidget$$get_minWidth @ 0x94ccec
 * int32_t UIWidget__get_minWidth (UIWidget_o* __this, const MethodInfo* method); */

/* UIWidget$$get_minWidth
   int32_t UIWidget__get_minWidth (UIWidget_o* __this, const MethodInfo* method); */

undefined8 native_UIWidget__get_minWidth_94ccec(void)

{
  return 2;
}



/* UIWidget$$get_minHeight @ 0x94ccf4
 * int32_t UIWidget__get_minHeight (UIWidget_o* __this, const MethodInfo* method); */

/* UIWidget$$get_minHeight
   int32_t UIWidget__get_minHeight (UIWidget_o* __this, const MethodInfo* method); */

undefined8 native_UIWidget__get_minHeight_94ccf4(void)

{
  return 2;
}



/* UIWidget$$get_border @ 0x94ccfc
 * UnityEngine_Vector4_o UIWidget__get_border (UIWidget_o* __this, const MethodInfo* method); */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* UIWidget$$get_border
   UnityEngine_Vector4_o UIWidget__get_border (UIWidget_o* __this, const MethodInfo* method); */

undefined8 native_UIWidget__get_border_94ccfc(void)

{
  undefined8 uVar1;
  
  uVar1 = 0;
  if ((bRam000000000133ffba & 1) == 0) {
    uVar1 = native_sub_43273c(&UnityEngine_Vector4_TypeInfo_12d6710);
    bRam000000000133ffba = 1;
  }
  return uVar1;
}



/* UIWidget$$set_border @ 0x94cd04
 * void UIWidget__set_border (UIWidget_o* __this, UnityEngine_Vector4_o value, const MethodInfo* method); */

/* UIWidget$$set_border
   void UIWidget__set_border (UIWidget_o* __this, UnityEngine_Vector4_o value, const MethodInfo*
   method); */

void native_UIWidget__set_border_94cd04(void)

{
  return;
}



/* UIWidget$$OnFill @ 0x94cd08
 * void UIWidget__OnFill (UIWidget_o* __this, System_Collections_Generic_List_Vector3__o* verts, System_Collections_Generic_List_Vector2__o* uvs, System_Collections_Generic_List_Color__o* cols, const MethodInfo* method); */

/* UIWidget$$OnFill
   void UIWidget__OnFill (UIWidget_o* __this, System_Collections_Generic_List_Vector3__o* verts,
   System_Collections_Generic_List_Vector2__o* uvs, System_Collections_Generic_List_Color__o* cols,
   const MethodInfo* method); */

void native_UIWidget__OnFill_94cd08(void)

{
  return;
}



/* UIWidget$$OnAddToPanel @ 0x94cd0c
 * void UIWidget__OnAddToPanel (UIWidget_o* __this, UIPanel_o* p, const MethodInfo* method); */

/* UIWidget$$OnAddToPanel
   void UIWidget__OnAddToPanel (UIWidget_o* __this, UIPanel_o* p, const MethodInfo* method); */

void native_UIWidget__OnAddToPanel_94cd0c(void)

{
  return;
}



/* UIWidget$$OnRemoveFromPanel @ 0x94cd10
 * void UIWidget__OnRemoveFromPanel (UIWidget_o* __this, UIPanel_o* p, const MethodInfo* method); */

/* UIWidget$$OnRemoveFromPanel
   void UIWidget__OnRemoveFromPanel (UIWidget_o* __this, UIPanel_o* p, const MethodInfo* method); */

void native_UIWidget__OnRemoveFromPanel_94cd10(void)

{
  return;
}



/* UIWidget$$.ctor @ 0x94cd14
 * void UIWidget___ctor (UIWidget_o* __this, const MethodInfo* method); */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* UIWidget$$.ctor
   void UIWidget___ctor (UIWidget_o* __this, const MethodInfo* method); */

void native_UIWidget___ctor_94cd14
               (undefined1 param_1 [16],undefined4 param_2,undefined4 param_3,undefined4 param_4,
               long param_5)

{
  undefined8 uVar1;
  undefined4 uVar2;
  undefined8 uStack_30;
  undefined8 uStack_28;
  
  if ((bRam000000000134146b & 1) == 0) {
    native_sub_43273c(&UIGeometry_TypeInfo_12d6448);
    native_sub_43273c(&UIRect_TypeInfo_12d64a0);
    native_sub_43273c(&UnityEngine_Vector3___TypeInfo_12d3478);
    bRam000000000134146b = 1;
  }
  uVar2 = native_UnityEngine_Color__get_white_8d9e10(0);
  *(undefined4 *)(param_5 + 0x90) = uVar2;
  *(undefined4 *)(param_5 + 0x94) = param_2;
  *(undefined4 *)(param_5 + 0xa8) = 100;
  *(undefined4 *)(param_5 + 0x98) = param_3;
  *(undefined4 *)(param_5 + 0x9c) = param_4;
  *(undefined4 *)(param_5 + 0xe0) = 0x3f800000;
  *(undefined8 *)(param_5 + 0xa0) = 0x6400000004;
  uVar1 = native_sub_432808(_UIGeometry_TypeInfo_12d6448);
  native_UIGeometry___ctor_9efb74(uVar1,0);
  *(undefined8 *)(param_5 + 0xf8) = uVar1;
  native_sub_4326e0(param_5 + 0xf8,uVar1);
  *(undefined2 *)(param_5 + 0x100) = 0x101;
  uStack_30 = 0;
  uStack_28 = 0;
  native_UnityEngine_Vector4___ctor_776f24(0,0,0x3f800000,0x3f800000,&uStack_30,0);
  *(undefined8 *)(param_5 + 0x10c) = uStack_28;
  *(undefined8 *)(param_5 + 0x104) = uStack_30;
  *(undefined2 *)(param_5 + 0x154) = 0x101;
  *(undefined1 *)(param_5 + 0x156) = 1;
  uVar1 = native_sub_432750(_UnityEngine_Vector3___TypeInfo_12d3478,4);
  *(undefined8 *)(param_5 + 0x168) = uVar1;
  native_sub_4326e0(param_5 + 0x168);
  *(undefined8 *)(param_5 + 0x170) = 0xffffffffffffffff;
  if (((*(byte *)(_UIRect_TypeInfo_12d64a0 + 0x133) >> 2 & 1) != 0) &&
     (*(int *)(_UIRect_TypeInfo_12d64a0 + 0xe0) == 0)) {
    native_sub_4327ec();
  }
  native_UIRect___ctor_c2f37c(param_5,0);
  return;
}


