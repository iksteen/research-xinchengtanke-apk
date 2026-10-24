/* ARM64 IL2CPP native pseudocode from Ghidra.
 * Recovered implementation, not original C# source.
 * Function boundaries follow the IL2CPP method address table. */


/* UICenterOnChild$$get_centeredObject @ 0x9dc77c
 * UnityEngine_GameObject_o* UICenterOnChild__get_centeredObject (UICenterOnChild_o* __this, const MethodInfo* method); */

/* UICenterOnChild$$get_centeredObject
   UnityEngine_GameObject_o* UICenterOnChild__get_centeredObject (UICenterOnChild_o* __this, const
   MethodInfo* method); */

undefined8 native_UICenterOnChild__get_centeredObject_9dc77c(long param_1)

{
  return *(undefined8 *)(param_1 + 0x38);
}



/* UICenterOnChild$$Start @ 0x9dc784
 * void UICenterOnChild__Start (UICenterOnChild_o* __this, const MethodInfo* method); */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* UICenterOnChild$$Start
   void UICenterOnChild__Start (UICenterOnChild_o* __this, const MethodInfo* method); */

void native_UICenterOnChild__Start_9dc784(long param_1)

{
  uint uVar1;
  byte bVar2;
  undefined1 *puVar3;
  int iVar4;
  ulong uVar5;
  undefined8 uVar6;
  long *plVar7;
  long lVar8;
  ulong uVar9;
  long lVar10;
  undefined8 uVar11;
  long lVar12;
  undefined8 unaff_x19;
  undefined8 unaff_x20;
  long *plVar13;
  long *unaff_x21;
  long lVar14;
  long unaff_x22;
  undefined8 unaff_x23;
  uint uVar15;
  undefined *unaff_x24;
  uint uVar16;
  undefined8 unaff_x25;
  long lVar17;
  undefined8 unaff_x26;
  uint uVar18;
  int iVar19;
  undefined8 unaff_x27;
  long lVar20;
  undefined *unaff_x28;
  undefined8 unaff_x29;
  undefined8 unaff_x30;
  float fVar21;
  float fVar22;
  float fVar23;
  ulong uVar24;
  float fVar25;
  float fVar26;
  undefined4 uVar27;
  undefined8 uVar28;
  float fVar29;
  float fVar30;
  undefined8 unaff_d8;
  undefined8 unaff_d9;
  undefined8 unaff_d10;
  undefined8 unaff_d11;
  undefined8 unaff_d12;
  float fVar31;
  undefined8 unaff_d13;
  
  puVar3 = (undefined1 *)register0x00000008;
native_UICenterOnChild__Recenter_9dc788:
  *(undefined8 *)(puVar3 + -0x90) = unaff_d13;
  *(undefined8 *)(puVar3 + -0x88) = unaff_d12;
  *(undefined8 *)(puVar3 + -0x80) = unaff_d11;
  *(undefined8 *)(puVar3 + -0x78) = unaff_d10;
  *(undefined8 *)(puVar3 + -0x70) = unaff_d9;
  *(undefined8 *)(puVar3 + -0x68) = unaff_d8;
  *(undefined **)(puVar3 + -0x60) = unaff_x28;
  *(undefined8 *)(puVar3 + -0x58) = unaff_x27;
  *(undefined8 *)(puVar3 + -0x50) = unaff_x26;
  *(undefined8 *)(puVar3 + -0x48) = unaff_x25;
  *(undefined **)(puVar3 + -0x40) = unaff_x24;
  *(undefined8 *)(puVar3 + -0x38) = unaff_x23;
  *(long *)(puVar3 + -0x30) = unaff_x22;
  *(long **)(puVar3 + -0x28) = unaff_x21;
  *(undefined8 *)(puVar3 + -0x20) = unaff_x20;
  *(undefined8 *)(puVar3 + -0x18) = unaff_x19;
  *(undefined8 *)(puVar3 + -0x10) = unaff_x29;
  *(undefined8 *)(puVar3 + -8) = unaff_x30;
  if ((bRam00000000013418b3 & 1) == 0) {
    native_sub_43273c(&Method_UnityEngine_Component_GetComponent_UIGrid____12e2bc0);
    native_sub_43273c(&Method_UnityEngine_Component_GetComponent_UIWrapContent____12e2c38);
    native_sub_43273c(&UnityEngine_Debug_TypeInfo_12d4338);
    native_sub_43273c(&Method_System_Collections_Generic_List_Transform__get_Count___12dd1a8);
    native_sub_43273c(&Method_System_Collections_Generic_List_Transform__get_Item___12dd1b0);
    native_sub_43273c(&NGUIMath_TypeInfo_12d53b8);
    native_sub_43273c(&Method_NGUITools_FindInParents_UIScrollView____12e5790);
    native_sub_43273c(&NGUITools_TypeInfo_12d53c8);
    native_sub_43273c(&UnityEngine_Object_TypeInfo_12d54e0);
    native_sub_43273c(&UIProgressBar_OnDragFinished_TypeInfo_12d7a88);
    native_sub_43273c(&System_Type_TypeInfo_12d6340);
    native_sub_43273c(&UICamera_TypeInfo_12d6410);
    native_sub_43273c(&Method_UICenterOnChild_OnDragFinished___12e77f0);
    native_sub_43273c(&UIScrollView_var_12d1958);
    native_sub_43273c(&StringLiteral__requires__12eaef8);
    native_sub_43273c(&StringLiteral__on_a_parent_object_in_order_to_work_12eaee0);
    bRam00000000013418b3 = 1;
  }
  *(undefined4 *)(puVar3 + -0x98) = 0;
  *(undefined8 *)(puVar3 + -0xa0) = 0;
  *(undefined4 *)(puVar3 + -0xa8) = 0;
  *(undefined8 *)(puVar3 + -0xb0) = 0;
  unaff_x28 = &UnityEngine_Object_TypeInfo_12d54e0;
  plVar13 = (long *)(param_1 + 0x30);
  lVar14 = *plVar13;
  if (((*(byte *)(_UnityEngine_Object_TypeInfo_12d54e0 + 0x133) >> 2 & 1) != 0) &&
     (*(int *)(_UnityEngine_Object_TypeInfo_12d54e0 + 0xe0) == 0)) {
    native_sub_4327ec();
  }
  uVar5 = native_UnityEngine_Object__op_Equality_8e9a3c(lVar14,0,0);
  if ((uVar5 & 1) != 0) {
    uVar6 = native_UnityEngine_Component__get_gameObject_8da66c(param_1,0);
    if (((*(byte *)(_NGUITools_TypeInfo_12d53c8 + 0x133) >> 2 & 1) != 0) &&
       (*(int *)(_NGUITools_TypeInfo_12d53c8 + 0xe0) == 0)) {
      native_sub_4327ec(_NGUITools_TypeInfo_12d53c8);
    }
    lVar14 = native_NGUITools__FindInParents_object__4a5c04
                       (uVar6,_Method_NGUITools_FindInParents_UIScrollView____12e5790);
    *plVar13 = lVar14;
    native_sub_4326e0(plVar13,lVar14);
    lVar14 = *plVar13;
    if (((*(byte *)(_UnityEngine_Object_TypeInfo_12d54e0 + 0x133) >> 2 & 1) != 0) &&
       (*(int *)(_UnityEngine_Object_TypeInfo_12d54e0 + 0xe0) == 0)) {
      native_sub_4327ec();
    }
    uVar5 = native_UnityEngine_Object__op_Equality_8e9a3c(lVar14,0,0);
    if ((uVar5 & 1) != 0) {
      plVar13 = (long *)native_System_Object__GetType_adb48c(param_1,0);
      if (plVar13 == (long *)0x0) {
        uVar6 = 0;
      }
      else {
        uVar6 = (**(code **)(*plVar13 + 0x168))(plVar13,*(undefined8 *)(*plVar13 + 0x170));
      }
      uVar28 = _UIScrollView_var_12d1958;
      if (((*(byte *)(_System_Type_TypeInfo_12d6340 + 0x133) >> 2 & 1) != 0) &&
         (*(int *)(_System_Type_TypeInfo_12d6340 + 0xe0) == 0)) {
        native_sub_4327ec();
      }
      plVar13 = (long *)native_System_Type__GetTypeFromHandle_b0fb24(uVar28,0);
      uVar28 = _StringLiteral__requires__12eaef8;
      if (plVar13 == (long *)0x0) {
        uVar11 = 0;
      }
      else {
        uVar11 = (**(code **)(*plVar13 + 0x168))(plVar13,*(undefined8 *)(*plVar13 + 0x170));
      }
      uVar6 = native_System_String__Concat_afcabc
                        (uVar6,uVar28,uVar11,
                         _StringLiteral__on_a_parent_object_in_order_to_work_12eaee0,0);
      if (((*(byte *)(_UnityEngine_Debug_TypeInfo_12d4338 + 0x133) >> 2 & 1) != 0) &&
         (*(int *)(_UnityEngine_Debug_TypeInfo_12d4338 + 0xe0) == 0)) {
        native_sub_4327ec(_UnityEngine_Debug_TypeInfo_12d4338);
      }
      native_UnityEngine_Debug__LogWarning_8dcbc8(uVar6,param_1,0);
      native_UnityEngine_Behaviour__set_enabled_8d7b0c(param_1,0,0);
      return;
    }
    lVar14 = *plVar13;
    if (((*(byte *)(_UnityEngine_Object_TypeInfo_12d54e0 + 0x133) >> 2 & 1) != 0) &&
       (*(int *)(_UnityEngine_Object_TypeInfo_12d54e0 + 0xe0) == 0)) {
      native_sub_4327ec();
    }
    uVar5 = native_UnityEngine_Object__op_Implicit_8e1b98(lVar14,0);
    if ((uVar5 & 1) != 0) {
      lVar14 = *plVar13;
      if (lVar14 == 0) goto LAB_009dd300;
      *(long *)(lVar14 + 0x100) = param_1;
      native_sub_4326e0(lVar14 + 0x100,param_1);
    }
    if (*plVar13 == 0) goto LAB_009dd300;
    uVar6 = *(undefined8 *)(*plVar13 + 0x38);
    if (((*(byte *)(_UnityEngine_Object_TypeInfo_12d54e0 + 0x133) >> 2 & 1) != 0) &&
       (*(int *)(_UnityEngine_Object_TypeInfo_12d54e0 + 0xe0) == 0)) {
      native_sub_4327ec();
    }
    uVar5 = native_UnityEngine_Object__op_Inequality_8d76fc(uVar6,0,0);
    if ((uVar5 & 1) != 0) {
      if ((*plVar13 == 0) || (lVar14 = *(long *)(*plVar13 + 0x38), lVar14 == 0)) goto LAB_009dd300;
      unaff_x21 = (long *)(lVar14 + 0x18);
      unaff_x22 = *unaff_x21;
      unaff_x23 = native_sub_432808(_UIProgressBar_OnDragFinished_TypeInfo_12d7a88);
      native_UIProgressBar_OnDragFinished___ctor_558c74
                (unaff_x23,param_1,_Method_UICenterOnChild_OnDragFinished___12e77f0,0);
      plVar7 = (long *)native_System_Delegate__Combine_a6cf00(unaff_x22,unaff_x23,0);
      if ((plVar7 == (long *)0x0) || (*plVar7 == _UIProgressBar_OnDragFinished_TypeInfo_12d7a88)) {
        *unaff_x21 = (long)plVar7;
        native_sub_4326e0(unaff_x21,plVar7);
        goto LAB_009dca78;
      }
LAB_009dd310:
      unaff_x24 = &UIProgressBar_OnDragFinished_TypeInfo_12d7a88;
      lVar14 = native_sub_432b04(plVar7);
      *(long **)(puVar3 + -0xf0) = plVar13;
      *(long *)(puVar3 + -0xe8) = param_1;
      *(undefined1 **)(puVar3 + -0xe0) = puVar3 + -0x10;
      *(code **)(puVar3 + -0xd8) = native_UICenterOnChild__OnEnable_9dd318;
      if ((bRam00000000013418b1 & 1) == 0) {
        native_sub_43273c(&UnityEngine_Object_TypeInfo_12d54e0);
        bRam00000000013418b1 = 1;
      }
      uVar6 = *(undefined8 *)(lVar14 + 0x30);
      if (((*(byte *)(_UnityEngine_Object_TypeInfo_12d54e0 + 0x133) >> 2 & 1) != 0) &&
         (*(int *)(_UnityEngine_Object_TypeInfo_12d54e0 + 0xe0) == 0)) {
        native_sub_4327ec();
      }
      uVar5 = native_UnityEngine_Object__op_Implicit_8e1b98(uVar6,0);
      if ((uVar5 & 1) == 0) {
        return;
      }
      lVar8 = *(long *)(lVar14 + 0x30);
      if (lVar8 == 0) {
                    /* WARNING: Subroutine does not return */
        native_sub_432810();
      }
      *(long *)(lVar8 + 0x100) = lVar14;
      native_sub_4326e0(lVar8 + 0x100,lVar14);
      unaff_x29 = *(undefined8 *)(puVar3 + -0xe0);
      unaff_x30 = *(undefined8 *)(puVar3 + -0xd8);
      unaff_x20 = *(undefined8 *)(puVar3 + -0xf0);
      unaff_x19 = *(undefined8 *)(puVar3 + -0xe8);
      puVar3 = puVar3 + -0xd0;
      param_1 = lVar14;
      goto native_UICenterOnChild__Recenter_9dc788;
    }
LAB_009dca78:
    if (*plVar13 == 0) goto LAB_009dd300;
    uVar6 = *(undefined8 *)(*plVar13 + 0x40);
    if (((*(byte *)(_UnityEngine_Object_TypeInfo_12d54e0 + 0x133) >> 2 & 1) != 0) &&
       (*(int *)(_UnityEngine_Object_TypeInfo_12d54e0 + 0xe0) == 0)) {
      native_sub_4327ec();
    }
    uVar5 = native_UnityEngine_Object__op_Inequality_8d76fc(uVar6,0,0);
    if ((uVar5 & 1) == 0) goto LAB_009dcb28;
    if ((*plVar13 == 0) || (lVar14 = *(long *)(*plVar13 + 0x40), lVar14 == 0)) goto LAB_009dd300;
    unaff_x21 = (long *)(lVar14 + 0x18);
    unaff_x22 = *unaff_x21;
    unaff_x23 = native_sub_432808(_UIProgressBar_OnDragFinished_TypeInfo_12d7a88);
    native_UIProgressBar_OnDragFinished___ctor_558c74
              (unaff_x23,param_1,_Method_UICenterOnChild_OnDragFinished___12e77f0,0);
    plVar7 = (long *)native_System_Delegate__Combine_a6cf00(unaff_x22,unaff_x23,0);
    if ((plVar7 != (long *)0x0) && (*plVar7 != _UIProgressBar_OnDragFinished_TypeInfo_12d7a88))
    goto LAB_009dd310;
    *unaff_x21 = (long)plVar7;
    native_sub_4326e0(unaff_x21,plVar7);
  }
LAB_009dcb28:
  if (*plVar13 == 0) goto LAB_009dd300;
  uVar6 = *(undefined8 *)(*plVar13 + 0x98);
  if (((*(byte *)(_UnityEngine_Object_TypeInfo_12d54e0 + 0x133) >> 2 & 1) != 0) &&
     (*(int *)(_UnityEngine_Object_TypeInfo_12d54e0 + 0xe0) == 0)) {
    native_sub_4327ec();
  }
  uVar5 = native_UnityEngine_Object__op_Equality_8e9a3c(uVar6,0,0);
  if ((uVar5 & 1) != 0) {
    return;
  }
  lVar14 = native_UnityEngine_Component__get_transform_8da62c(param_1,0);
  if (lVar14 == 0) goto LAB_009dd300;
  iVar4 = native_UnityEngine_Transform__get_childCount_772a64(lVar14,0);
  if (iVar4 == 0) {
    return;
  }
  if (((*plVar13 == 0) || (plVar7 = *(long **)(*plVar13 + 0x98), plVar7 == (long *)0x0)) ||
     (lVar8 = (**(code **)(*plVar7 + 0x1e8))(plVar7,*(undefined8 *)(*plVar7 + 0x1f0)), lVar8 == 0))
  goto LAB_009dd300;
  if (*(uint *)(lVar8 + 0x18) < 3) {
    uVar6 = native_sub_43283c();
                    /* WARNING: Subroutine does not return */
    native_sub_4327dc(uVar6,0);
  }
  lVar12 = *plVar13;
  if (lVar12 == 0) goto LAB_009dd300;
  uVar6 = *(undefined8 *)(lVar8 + 0x38);
  uVar28 = *(undefined8 *)(lVar8 + 0x20);
  fVar30 = *(float *)(lVar12 + 0x2c);
  fVar22 = *(float *)(lVar8 + 0x40);
  fVar29 = *(float *)(lVar8 + 0x28);
  fVar25 = *(float *)(lVar12 + 200) * fVar30;
  uVar5 = (ulong)(uint)fVar25;
  *(ulong *)(puVar3 + -0xa0) =
       CONCAT44((float)((ulong)*(undefined8 *)(lVar12 + 0xc0) >> 0x20) * fVar30,
                (float)*(undefined8 *)(lVar12 + 0xc0) * fVar30);
  *(float *)(puVar3 + -0x98) = fVar25;
  bVar2 = *(byte *)(_NGUIMath_TypeInfo_12d53b8 + 0x133);
  *(undefined8 *)(puVar3 + -200) = 0;
  *(ulong *)(puVar3 + -0xd0) =
       CONCAT44(((float)((ulong)uVar6 >> 0x20) + (float)((ulong)uVar28 >> 0x20)) * 0.5,
                ((float)uVar6 + (float)uVar28) * 0.5);
  if (((bVar2 >> 2 & 1) != 0) && (*(int *)(_NGUIMath_TypeInfo_12d53b8 + 0xe0) == 0)) {
    native_sub_4327ec();
  }
  uVar24 = 0x40000000;
  fVar30 = (fVar22 + fVar29) * 0.5;
  fVar22 = (float)native_NGUIMath__SpringDampen_80634c(0x41100000,puVar3 + -0xa0,0);
  uVar6 = *(undefined8 *)(puVar3 + -0xd0);
  fVar25 = (float)uVar24;
  fVar29 = (float)uVar5;
  lVar8 = native_UnityEngine_Component__GetComponent_ActiveAnimation__49daec
                    (param_1,_Method_UnityEngine_Component_GetComponent_UIGrid____12e2bc0);
  if (((*(byte *)(_UnityEngine_Object_TypeInfo_12d54e0 + 0x133) >> 2 & 1) != 0) &&
     (*(int *)(_UnityEngine_Object_TypeInfo_12d54e0 + 0xe0) == 0)) {
    native_sub_4327ec(_UnityEngine_Object_TypeInfo_12d54e0);
  }
  fVar22 = (float)*(undefined8 *)(puVar3 + -0xd0) - fVar22 * 0.01;
  fVar25 = (float)((ulong)uVar6 >> 0x20) - fVar25 * 0.01;
  fVar29 = fVar30 - fVar29 * 0.01;
  uVar9 = native_UnityEngine_Object__op_Inequality_8d76fc(lVar8,0,0);
  if ((uVar9 & 1) == 0) {
    iVar4 = native_UnityEngine_Transform__get_childCount_772a64(lVar14,0);
    uVar27 = (undefined4)uVar5;
    fVar23 = (float)uVar24;
    if (0 < iVar4) {
      fVar31 = 3.4028235e+38;
      lVar8 = 0;
      uVar15 = 0;
      uVar16 = 0;
      iVar19 = 0;
      *(undefined4 *)(puVar3 + -0xb4) = 0;
      goto LAB_009dcdc0;
    }
    lVar12 = 0;
  }
  else {
    if (lVar8 == 0) goto LAB_009dd300;
    lVar12 = native_UIGrid__GetChildList_9dd490(lVar8);
    uVar27 = (undefined4)uVar5;
    fVar23 = (float)uVar24;
    if (lVar12 == 0) goto LAB_009dd300;
    uVar16 = *(uint *)(lVar12 + 0x18);
    if (0 < (int)uVar16) {
      fVar31 = 3.4028235e+38;
      lVar20 = 0;
      lVar8 = 0;
      uVar15 = 0;
      iVar4 = 0;
      *(undefined4 *)(puVar3 + -0xb4) = 0;
      uVar1 = uVar16;
      goto LAB_009dccf0;
    }
  }
  *(undefined4 *)(puVar3 + -0xb4) = 0;
  uVar15 = 0;
  lVar8 = 0;
  goto LAB_009dcf28;
LAB_009dccf0:
  uVar18 = (uint)lVar20;
  if (uVar1 <= uVar18) {
    native_System_ThrowHelper__ThrowArgumentOutOfRangeException_9fe0f4(0);
  }
  lVar17 = *(long *)(*(long *)(lVar12 + 0x10) + lVar20 * 8 + 0x20);
  if ((lVar17 == 0) ||
     (lVar10 = native_UnityEngine_Component__get_gameObject_8da66c(lVar17,0), lVar10 == 0))
  goto LAB_009dd300;
  uVar9 = native_UnityEngine_GameObject__get_activeInHierarchy_8de728(lVar10,0);
  fVar26 = (float)uVar5;
  fVar23 = (float)uVar24;
  if ((uVar9 & 1) != 0) {
    fVar21 = (float)native_UnityEngine_Transform__get_position_77169c(lVar17,0);
    fVar21 = fVar21 - fVar22;
    fVar23 = fVar23 - fVar25;
    fVar26 = fVar26 - fVar29;
    uVar5 = (ulong)(uint)fVar26;
    uVar24 = (ulong)(uint)(fVar26 * fVar26);
    fVar23 = fVar26 * fVar26 + fVar21 * fVar21 + fVar23 * fVar23;
    if (fVar23 < fVar31) {
      *(int *)(puVar3 + -0xb4) = iVar4;
      lVar8 = lVar17;
      uVar15 = uVar18;
      fVar31 = fVar23;
    }
    iVar4 = iVar4 + 1;
  }
  uVar27 = (undefined4)uVar5;
  fVar23 = (float)uVar24;
  if ((int)uVar16 <= (int)(uVar18 + 1)) goto LAB_009dcf28;
  uVar1 = *(uint *)(lVar12 + 0x18);
  lVar20 = lVar20 + 1;
  goto LAB_009dccf0;
  while( true ) {
    uVar9 = native_UnityEngine_GameObject__get_activeInHierarchy_8de728(lVar20,0);
    fVar26 = (float)uVar5;
    fVar23 = (float)uVar24;
    if ((uVar9 & 1) != 0) {
      fVar21 = (float)native_UnityEngine_Transform__get_position_77169c(lVar12,0);
      fVar21 = fVar21 - fVar22;
      fVar23 = fVar23 - fVar25;
      fVar26 = fVar26 - fVar29;
      uVar5 = (ulong)(uint)fVar26;
      uVar24 = (ulong)(uint)(fVar26 * fVar26);
      fVar23 = fVar26 * fVar26 + fVar21 * fVar21 + fVar23 * fVar23;
      if (fVar23 < fVar31) {
        *(int *)(puVar3 + -0xb4) = iVar19;
        lVar8 = lVar12;
        uVar15 = uVar16;
        fVar31 = fVar23;
      }
      iVar19 = iVar19 + 1;
    }
    uVar27 = (undefined4)uVar5;
    fVar23 = (float)uVar24;
    uVar16 = uVar16 + 1;
    if (iVar4 <= (int)uVar16) break;
LAB_009dcdc0:
    lVar12 = native_UnityEngine_Transform__GetChild_772ef0(lVar14,uVar16,0);
    if ((lVar12 == 0) ||
       (lVar20 = native_UnityEngine_Component__get_gameObject_8da66c(lVar12,0), lVar20 == 0))
    goto LAB_009dd300;
  }
  lVar12 = 0;
LAB_009dcf28:
  if (*(float *)(param_1 + 0x1c) <= 0.0) goto LAB_009dd2bc;
  if (((*(byte *)(_UICamera_TypeInfo_12d6410 + 0x133) >> 2 & 1) != 0) &&
     (*(int *)(_UICamera_TypeInfo_12d6410 + 0xe0) == 0)) {
    native_sub_4327ec();
  }
  if (*(long *)(*(long *)(_UICamera_TypeInfo_12d6410 + 0xb8) + 0xe0) == 0) goto LAB_009dd2bc;
  uVar28 = *(undefined8 *)(param_1 + 0x38);
  if (((*(byte *)(_UnityEngine_Object_TypeInfo_12d54e0 + 0x133) >> 2 & 1) != 0) &&
     (*(int *)(_UnityEngine_Object_TypeInfo_12d54e0 + 0xe0) == 0)) {
    native_sub_4327ec();
  }
  uVar5 = native_UnityEngine_Object__op_Inequality_8d76fc(uVar28,0,0);
  if ((uVar5 & 1) == 0) goto LAB_009dd2bc;
  if (*(long *)(param_1 + 0x38) == 0) goto LAB_009dd300;
  uVar28 = native_UnityEngine_GameObject__get_transform_8de5c8(*(long *)(param_1 + 0x38),0);
  if (lVar12 == 0) {
    uVar11 = native_UnityEngine_Transform__GetChild_772ef0(lVar14,uVar15,0);
  }
  else {
    if (*(uint *)(lVar12 + 0x18) <= uVar15) {
      native_System_ThrowHelper__ThrowArgumentOutOfRangeException_9fe0f4(0);
    }
    uVar11 = *(undefined8 *)(*(long *)(lVar12 + 0x10) + (long)(int)uVar15 * 8 + 0x20);
  }
  if (((*(byte *)(_UnityEngine_Object_TypeInfo_12d54e0 + 0x133) >> 2 & 1) != 0) &&
     (*(int *)(_UnityEngine_Object_TypeInfo_12d54e0 + 0xe0) == 0)) {
    native_sub_4327ec();
  }
  uVar5 = native_UnityEngine_Object__op_Equality_8e9a3c(uVar28,uVar11,0);
  if ((uVar5 & 1) == 0) goto LAB_009dd2bc;
  if (((*(byte *)(_UICamera_TypeInfo_12d6410 + 0x133) >> 2 & 1) != 0) &&
     (*(int *)(_UICamera_TypeInfo_12d6410 + 0xe0) == 0)) {
    native_sub_4327ec();
  }
  lVar20 = *(long *)(*(long *)(_UICamera_TypeInfo_12d6410 + 0xb8) + 0xe0);
  if (lVar20 == 0) {
LAB_009dd300:
                    /* WARNING: Subroutine does not return */
    native_sub_432810();
  }
  uVar28 = *(undefined8 *)(lVar20 + 0x2c);
  *(undefined4 *)(puVar3 + -0xa8) = 0;
  *(undefined8 *)(puVar3 + -0xb0) = uVar28;
  lVar20 = native_UnityEngine_Component__get_transform_8da62c(param_1,0);
  if (lVar20 == 0) goto LAB_009dd300;
  native_UnityEngine_Transform__get_rotation_771a30(lVar20,0);
  fVar22 = (float)native_UnityEngine_Quaternion__op_Multiply_7629c0(0);
  *(float *)(puVar3 + -0xb0) = fVar22;
  *(float *)(puVar3 + -0xac) = fVar23;
  *(undefined4 *)(puVar3 + -0xa8) = uVar27;
  if (*plVar13 == 0) goto LAB_009dd300;
  iVar4 = *(int *)(*plVar13 + 0x18);
  if (iVar4 != 0) {
    if (iVar4 == 1) {
      fVar22 = -fVar23;
    }
    else {
      fVar22 = (float)native_UnityEngine_Vector3__get_magnitude_77684c(puVar3 + -0xb0,0);
    }
  }
  fVar25 = *(float *)(param_1 + 0x1c);
  if (ABS(fVar22) <= fVar25) goto LAB_009dd2bc;
  if (fVar22 <= fVar25) {
    if (-fVar25 <= fVar22) goto LAB_009dd2bc;
    if (lVar12 != 0) {
      uVar16 = *(uint *)(lVar12 + 0x18);
      if ((int)(uVar16 - 1) <= *(int *)(puVar3 + -0xb4)) {
        uVar28 = native_UnityEngine_Component__GetComponent_ActiveAnimation__49daec
                           (param_1,
                            _Method_UnityEngine_Component_GetComponent_UIWrapContent____12e2c38);
        if (((*(byte *)(_UnityEngine_Object_TypeInfo_12d54e0 + 0x133) >> 2 & 1) != 0) &&
           (*(int *)(_UnityEngine_Object_TypeInfo_12d54e0 + 0xe0) == 0)) {
          native_sub_4327ec(_UnityEngine_Object_TypeInfo_12d54e0);
        }
        uVar5 = native_UnityEngine_Object__op_Equality_8e9a3c(uVar28,0,0);
        iVar4 = *(int *)(lVar12 + 0x18);
        if ((uVar5 & 1) != 0) goto LAB_009dd248;
        goto LAB_009dd1c0;
      }
      uVar15 = *(int *)(puVar3 + -0xb4) + 1;
      goto LAB_009dd0f8;
    }
    iVar4 = native_UnityEngine_Transform__get_childCount_772a64(lVar14,0);
    if (iVar4 + -1 <= *(int *)(puVar3 + -0xb4)) {
      uVar28 = native_UnityEngine_Component__GetComponent_ActiveAnimation__49daec
                         (param_1,
                          _Method_UnityEngine_Component_GetComponent_UIWrapContent____12e2c38);
      if (((*(byte *)(_UnityEngine_Object_TypeInfo_12d54e0 + 0x133) >> 2 & 1) != 0) &&
         (*(int *)(_UnityEngine_Object_TypeInfo_12d54e0 + 0xe0) == 0)) {
        native_sub_4327ec(_UnityEngine_Object_TypeInfo_12d54e0);
      }
      uVar5 = native_UnityEngine_Object__op_Equality_8e9a3c(uVar28,0,0);
      if ((uVar5 & 1) != 0) goto LAB_009dd29c;
      goto LAB_009dd168;
    }
    iVar4 = *(int *)(puVar3 + -0xb4) + 1;
  }
  else {
    if (lVar12 != 0) {
      uVar15 = *(int *)(puVar3 + -0xb4) - 1;
      if (*(int *)(puVar3 + -0xb4) < 1) {
        uVar28 = native_UnityEngine_Component__GetComponent_ActiveAnimation__49daec
                           (param_1,
                            _Method_UnityEngine_Component_GetComponent_UIWrapContent____12e2c38);
        if (((*(byte *)(_UnityEngine_Object_TypeInfo_12d54e0 + 0x133) >> 2 & 1) != 0) &&
           (*(int *)(_UnityEngine_Object_TypeInfo_12d54e0 + 0xe0) == 0)) {
          native_sub_4327ec(_UnityEngine_Object_TypeInfo_12d54e0);
        }
        uVar5 = native_UnityEngine_Object__op_Equality_8e9a3c(uVar28,0,0);
        iVar4 = *(int *)(lVar12 + 0x18);
        if ((uVar5 & 1) == 0) {
LAB_009dd248:
          uVar15 = iVar4 - 1;
          if (iVar4 == 0) goto LAB_009dd100;
          goto LAB_009dd108;
        }
LAB_009dd1c0:
        if (iVar4 == 0) {
          native_System_ThrowHelper__ThrowArgumentOutOfRangeException_9fe0f4(0);
        }
        lVar14 = *(long *)(lVar12 + 0x10);
      }
      else {
        uVar16 = *(uint *)(lVar12 + 0x18);
LAB_009dd0f8:
        if (uVar16 <= uVar15) {
LAB_009dd100:
          native_System_ThrowHelper__ThrowArgumentOutOfRangeException_9fe0f4(0);
        }
LAB_009dd108:
        lVar14 = *(long *)(lVar12 + 0x10) + (long)(int)uVar15 * 8;
      }
      lVar8 = *(long *)(lVar14 + 0x20);
      goto LAB_009dd2bc;
    }
    iVar4 = *(int *)(puVar3 + -0xb4) + -1;
    if (*(int *)(puVar3 + -0xb4) < 1) {
      uVar28 = native_UnityEngine_Component__GetComponent_ActiveAnimation__49daec
                         (param_1,
                          _Method_UnityEngine_Component_GetComponent_UIWrapContent____12e2c38);
      if (((*(byte *)(_UnityEngine_Object_TypeInfo_12d54e0 + 0x133) >> 2 & 1) != 0) &&
         (*(int *)(_UnityEngine_Object_TypeInfo_12d54e0 + 0xe0) == 0)) {
        native_sub_4327ec(_UnityEngine_Object_TypeInfo_12d54e0);
      }
      uVar5 = native_UnityEngine_Object__op_Equality_8e9a3c(uVar28,0,0);
      if ((uVar5 & 1) == 0) {
LAB_009dd29c:
        iVar4 = native_UnityEngine_Transform__get_childCount_772a64(lVar14,0);
        iVar4 = iVar4 + -1;
      }
      else {
LAB_009dd168:
        iVar4 = 0;
      }
    }
  }
  lVar8 = native_UnityEngine_Transform__GetChild_772ef0(lVar14,iVar4,0);
LAB_009dd2bc:
  native_UICenterOnChild__CenterOn_9dd7e8
            (*(undefined8 *)(puVar3 + -0xd0),(float)((ulong)uVar6 >> 0x20),fVar30,param_1,lVar8);
  return;
}



/* UICenterOnChild$$OnEnable @ 0x9dd318
 * void UICenterOnChild__OnEnable (UICenterOnChild_o* __this, const MethodInfo* method); */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* UICenterOnChild$$OnEnable
   void UICenterOnChild__OnEnable (UICenterOnChild_o* __this, const MethodInfo* method); */

void native_UICenterOnChild__OnEnable_9dd318(long param_1)

{
  uint uVar1;
  byte bVar2;
  int iVar3;
  long *plVar4;
  long lVar5;
  ulong uVar6;
  long lVar7;
  undefined8 uVar8;
  long lVar9;
  ulong uVar10;
  long lVar11;
  long lVar12;
  long unaff_x19;
  long *unaff_x20;
  undefined8 uVar13;
  long *unaff_x21;
  long unaff_x22;
  undefined8 unaff_x23;
  uint uVar14;
  undefined *unaff_x24;
  uint uVar15;
  long lVar16;
  undefined8 unaff_x25;
  undefined8 unaff_x26;
  uint uVar17;
  int iVar18;
  long lVar19;
  undefined8 unaff_x27;
  undefined *unaff_x28;
  undefined1 *unaff_x29;
  code *unaff_x30;
  float fVar20;
  float fVar21;
  float fVar22;
  ulong uVar23;
  float fVar24;
  float fVar25;
  undefined4 uVar26;
  undefined8 uVar27;
  float fVar28;
  float fVar29;
  undefined8 unaff_d8;
  undefined8 unaff_d9;
  undefined8 unaff_d10;
  undefined8 unaff_d11;
  undefined8 unaff_d12;
  float fVar30;
  undefined8 unaff_d13;
  
  do {
    lVar9 = param_1;
    *(long **)((long)register0x00000008 + -0x20) = unaff_x20;
    *(long *)((long)register0x00000008 + -0x18) = unaff_x19;
    *(undefined1 **)((long)register0x00000008 + -0x10) = unaff_x29;
    *(code **)((long)register0x00000008 + -8) = unaff_x30;
    if ((bRam00000000013418b1 & 1) == 0) {
      native_sub_43273c(&UnityEngine_Object_TypeInfo_12d54e0);
      bRam00000000013418b1 = 1;
    }
    uVar13 = *(undefined8 *)(lVar9 + 0x30);
    if (((*(byte *)(_UnityEngine_Object_TypeInfo_12d54e0 + 0x133) >> 2 & 1) != 0) &&
       (*(int *)(_UnityEngine_Object_TypeInfo_12d54e0 + 0xe0) == 0)) {
      native_sub_4327ec();
    }
    uVar10 = native_UnityEngine_Object__op_Implicit_8e1b98(uVar13,0);
    if ((uVar10 & 1) == 0) {
      return;
    }
    lVar12 = *(long *)(lVar9 + 0x30);
    if (lVar12 == 0) {
                    /* WARNING: Subroutine does not return */
      native_sub_432810();
    }
    *(long *)(lVar12 + 0x100) = lVar9;
    native_sub_4326e0(lVar12 + 0x100,lVar9);
    *(undefined8 *)((long)register0x00000008 + -0x90) = unaff_d13;
    *(undefined8 *)((long)register0x00000008 + -0x88) = unaff_d12;
    *(undefined8 *)((long)register0x00000008 + -0x80) = unaff_d11;
    *(undefined8 *)((long)register0x00000008 + -0x78) = unaff_d10;
    *(undefined8 *)((long)register0x00000008 + -0x70) = unaff_d9;
    *(undefined8 *)((long)register0x00000008 + -0x68) = unaff_d8;
    *(undefined **)((long)register0x00000008 + -0x60) = unaff_x28;
    *(undefined8 *)((long)register0x00000008 + -0x58) = unaff_x27;
    *(undefined8 *)((long)register0x00000008 + -0x50) = unaff_x26;
    *(undefined8 *)((long)register0x00000008 + -0x48) = unaff_x25;
    *(undefined **)((long)register0x00000008 + -0x40) = unaff_x24;
    *(undefined8 *)((long)register0x00000008 + -0x38) = unaff_x23;
    *(long *)((long)register0x00000008 + -0x30) = unaff_x22;
    *(long **)((long)register0x00000008 + -0x28) = unaff_x21;
    *(undefined8 *)((long)register0x00000008 + -0x20) =
         *(undefined8 *)((long)register0x00000008 + -0x20);
    *(undefined8 *)((long)register0x00000008 + -0x18) =
         *(undefined8 *)((long)register0x00000008 + -0x18);
    *(undefined8 *)((long)register0x00000008 + -0x10) =
         *(undefined8 *)((long)register0x00000008 + -0x10);
    *(undefined8 *)((long)register0x00000008 + -8) = *(undefined8 *)((long)register0x00000008 + -8);
    unaff_x29 = (undefined1 *)((long)register0x00000008 + -0x10);
    if ((bRam00000000013418b3 & 1) == 0) {
      native_sub_43273c(&Method_UnityEngine_Component_GetComponent_UIGrid____12e2bc0);
      native_sub_43273c(&Method_UnityEngine_Component_GetComponent_UIWrapContent____12e2c38);
      native_sub_43273c(&UnityEngine_Debug_TypeInfo_12d4338);
      native_sub_43273c(&Method_System_Collections_Generic_List_Transform__get_Count___12dd1a8);
      native_sub_43273c(&Method_System_Collections_Generic_List_Transform__get_Item___12dd1b0);
      native_sub_43273c(&NGUIMath_TypeInfo_12d53b8);
      native_sub_43273c(&Method_NGUITools_FindInParents_UIScrollView____12e5790);
      native_sub_43273c(&NGUITools_TypeInfo_12d53c8);
      native_sub_43273c(&UnityEngine_Object_TypeInfo_12d54e0);
      native_sub_43273c(&UIProgressBar_OnDragFinished_TypeInfo_12d7a88);
      native_sub_43273c(&System_Type_TypeInfo_12d6340);
      native_sub_43273c(&UICamera_TypeInfo_12d6410);
      native_sub_43273c(&Method_UICenterOnChild_OnDragFinished___12e77f0);
      native_sub_43273c(&UIScrollView_var_12d1958);
      native_sub_43273c(&StringLiteral__requires__12eaef8);
      native_sub_43273c(&StringLiteral__on_a_parent_object_in_order_to_work_12eaee0);
      bRam00000000013418b3 = 1;
    }
    *(undefined4 *)((long)register0x00000008 + -0x98) = 0;
    *(undefined8 *)((long)register0x00000008 + -0xa0) = 0;
    *(undefined4 *)((long)register0x00000008 + -0xa8) = 0;
    *(undefined8 *)((long)register0x00000008 + -0xb0) = 0;
    unaff_x28 = &UnityEngine_Object_TypeInfo_12d54e0;
    unaff_x20 = (long *)(lVar9 + 0x30);
    lVar12 = *unaff_x20;
    if (((*(byte *)(_UnityEngine_Object_TypeInfo_12d54e0 + 0x133) >> 2 & 1) != 0) &&
       (*(int *)(_UnityEngine_Object_TypeInfo_12d54e0 + 0xe0) == 0)) {
      native_sub_4327ec();
    }
    uVar10 = native_UnityEngine_Object__op_Equality_8e9a3c(lVar12,0,0);
    if ((uVar10 & 1) == 0) goto LAB_009dcb28;
    uVar13 = native_UnityEngine_Component__get_gameObject_8da66c(lVar9,0);
    if (((*(byte *)(_NGUITools_TypeInfo_12d53c8 + 0x133) >> 2 & 1) != 0) &&
       (*(int *)(_NGUITools_TypeInfo_12d53c8 + 0xe0) == 0)) {
      native_sub_4327ec(_NGUITools_TypeInfo_12d53c8);
    }
    lVar12 = native_NGUITools__FindInParents_object__4a5c04
                       (uVar13,_Method_NGUITools_FindInParents_UIScrollView____12e5790);
    *unaff_x20 = lVar12;
    native_sub_4326e0(unaff_x20,lVar12);
    lVar12 = *unaff_x20;
    if (((*(byte *)(_UnityEngine_Object_TypeInfo_12d54e0 + 0x133) >> 2 & 1) != 0) &&
       (*(int *)(_UnityEngine_Object_TypeInfo_12d54e0 + 0xe0) == 0)) {
      native_sub_4327ec();
    }
    uVar10 = native_UnityEngine_Object__op_Equality_8e9a3c(lVar12,0,0);
    if ((uVar10 & 1) != 0) {
      plVar4 = (long *)native_System_Object__GetType_adb48c(lVar9,0);
      if (plVar4 == (long *)0x0) {
        uVar13 = 0;
      }
      else {
        uVar13 = (**(code **)(*plVar4 + 0x168))(plVar4,*(undefined8 *)(*plVar4 + 0x170));
      }
      uVar27 = _UIScrollView_var_12d1958;
      if (((*(byte *)(_System_Type_TypeInfo_12d6340 + 0x133) >> 2 & 1) != 0) &&
         (*(int *)(_System_Type_TypeInfo_12d6340 + 0xe0) == 0)) {
        native_sub_4327ec();
      }
      plVar4 = (long *)native_System_Type__GetTypeFromHandle_b0fb24(uVar27,0);
      uVar27 = _StringLiteral__requires__12eaef8;
      if (plVar4 == (long *)0x0) {
        uVar8 = 0;
      }
      else {
        uVar8 = (**(code **)(*plVar4 + 0x168))(plVar4,*(undefined8 *)(*plVar4 + 0x170));
      }
      uVar13 = native_System_String__Concat_afcabc
                         (uVar13,uVar27,uVar8,
                          _StringLiteral__on_a_parent_object_in_order_to_work_12eaee0,0);
      if (((*(byte *)(_UnityEngine_Debug_TypeInfo_12d4338 + 0x133) >> 2 & 1) != 0) &&
         (*(int *)(_UnityEngine_Debug_TypeInfo_12d4338 + 0xe0) == 0)) {
        native_sub_4327ec(_UnityEngine_Debug_TypeInfo_12d4338);
      }
      native_UnityEngine_Debug__LogWarning_8dcbc8(uVar13,lVar9,0);
      native_UnityEngine_Behaviour__set_enabled_8d7b0c(lVar9,0,0);
      return;
    }
    lVar12 = *unaff_x20;
    if (((*(byte *)(_UnityEngine_Object_TypeInfo_12d54e0 + 0x133) >> 2 & 1) != 0) &&
       (*(int *)(_UnityEngine_Object_TypeInfo_12d54e0 + 0xe0) == 0)) {
      native_sub_4327ec();
    }
    uVar10 = native_UnityEngine_Object__op_Implicit_8e1b98(lVar12,0);
    if ((uVar10 & 1) != 0) {
      lVar12 = *unaff_x20;
      if (lVar12 == 0) goto LAB_009dd300;
      *(long *)(lVar12 + 0x100) = lVar9;
      native_sub_4326e0(lVar12 + 0x100,lVar9);
    }
    if (*unaff_x20 == 0) goto LAB_009dd300;
    uVar13 = *(undefined8 *)(*unaff_x20 + 0x38);
    if (((*(byte *)(_UnityEngine_Object_TypeInfo_12d54e0 + 0x133) >> 2 & 1) != 0) &&
       (*(int *)(_UnityEngine_Object_TypeInfo_12d54e0 + 0xe0) == 0)) {
      native_sub_4327ec();
    }
    uVar10 = native_UnityEngine_Object__op_Inequality_8d76fc(uVar13,0,0);
    if ((uVar10 & 1) == 0) {
LAB_009dca78:
      if (*unaff_x20 == 0) goto LAB_009dd300;
      uVar13 = *(undefined8 *)(*unaff_x20 + 0x40);
      if (((*(byte *)(_UnityEngine_Object_TypeInfo_12d54e0 + 0x133) >> 2 & 1) != 0) &&
         (*(int *)(_UnityEngine_Object_TypeInfo_12d54e0 + 0xe0) == 0)) {
        native_sub_4327ec();
      }
      uVar10 = native_UnityEngine_Object__op_Inequality_8d76fc(uVar13,0,0);
      if ((uVar10 & 1) == 0) goto LAB_009dcb28;
      if ((*unaff_x20 == 0) || (lVar12 = *(long *)(*unaff_x20 + 0x40), lVar12 == 0))
      goto LAB_009dd300;
      unaff_x21 = (long *)(lVar12 + 0x18);
      unaff_x22 = *unaff_x21;
      unaff_x23 = native_sub_432808(_UIProgressBar_OnDragFinished_TypeInfo_12d7a88);
      native_UIProgressBar_OnDragFinished___ctor_558c74
                (unaff_x23,lVar9,_Method_UICenterOnChild_OnDragFinished___12e77f0,0);
      plVar4 = (long *)native_System_Delegate__Combine_a6cf00(unaff_x22,unaff_x23,0);
      if ((plVar4 == (long *)0x0) || (*plVar4 == _UIProgressBar_OnDragFinished_TypeInfo_12d7a88))
      break;
    }
    else {
      if ((*unaff_x20 == 0) || (lVar12 = *(long *)(*unaff_x20 + 0x38), lVar12 == 0))
      goto LAB_009dd300;
      unaff_x21 = (long *)(lVar12 + 0x18);
      unaff_x22 = *unaff_x21;
      unaff_x23 = native_sub_432808(_UIProgressBar_OnDragFinished_TypeInfo_12d7a88);
      native_UIProgressBar_OnDragFinished___ctor_558c74
                (unaff_x23,lVar9,_Method_UICenterOnChild_OnDragFinished___12e77f0,0);
      plVar4 = (long *)native_System_Delegate__Combine_a6cf00(unaff_x22,unaff_x23,0);
      if ((plVar4 == (long *)0x0) || (*plVar4 == _UIProgressBar_OnDragFinished_TypeInfo_12d7a88)) {
        *unaff_x21 = (long)plVar4;
        native_sub_4326e0(unaff_x21,plVar4);
        goto LAB_009dca78;
      }
    }
    unaff_x24 = &UIProgressBar_OnDragFinished_TypeInfo_12d7a88;
    unaff_x30 = native_UICenterOnChild__OnEnable_9dd318;
    param_1 = native_sub_432b04(plVar4);
    register0x00000008 = (BADSPACEBASE *)((long)register0x00000008 + -0xd0);
    unaff_x19 = lVar9;
  } while( true );
  *unaff_x21 = (long)plVar4;
  native_sub_4326e0(unaff_x21,plVar4);
LAB_009dcb28:
  if (*unaff_x20 == 0) goto LAB_009dd300;
  uVar13 = *(undefined8 *)(*unaff_x20 + 0x98);
  if (((*(byte *)(_UnityEngine_Object_TypeInfo_12d54e0 + 0x133) >> 2 & 1) != 0) &&
     (*(int *)(_UnityEngine_Object_TypeInfo_12d54e0 + 0xe0) == 0)) {
    native_sub_4327ec();
  }
  uVar10 = native_UnityEngine_Object__op_Equality_8e9a3c(uVar13,0,0);
  if ((uVar10 & 1) != 0) {
    return;
  }
  lVar12 = native_UnityEngine_Component__get_transform_8da62c(lVar9,0);
  if (lVar12 == 0) goto LAB_009dd300;
  iVar3 = native_UnityEngine_Transform__get_childCount_772a64(lVar12,0);
  if (iVar3 == 0) {
    return;
  }
  if (((*unaff_x20 == 0) || (plVar4 = *(long **)(*unaff_x20 + 0x98), plVar4 == (long *)0x0)) ||
     (lVar5 = (**(code **)(*plVar4 + 0x1e8))(plVar4,*(undefined8 *)(*plVar4 + 0x1f0)), lVar5 == 0))
  goto LAB_009dd300;
  if (*(uint *)(lVar5 + 0x18) < 3) {
    uVar13 = native_sub_43283c();
                    /* WARNING: Subroutine does not return */
    native_sub_4327dc(uVar13,0);
  }
  lVar11 = *unaff_x20;
  if (lVar11 == 0) goto LAB_009dd300;
  uVar13 = *(undefined8 *)(lVar5 + 0x38);
  uVar27 = *(undefined8 *)(lVar5 + 0x20);
  fVar29 = *(float *)(lVar11 + 0x2c);
  fVar21 = *(float *)(lVar5 + 0x40);
  fVar28 = *(float *)(lVar5 + 0x28);
  fVar24 = *(float *)(lVar11 + 200) * fVar29;
  uVar10 = (ulong)(uint)fVar24;
  *(ulong *)((long)register0x00000008 + -0xa0) =
       CONCAT44((float)((ulong)*(undefined8 *)(lVar11 + 0xc0) >> 0x20) * fVar29,
                (float)*(undefined8 *)(lVar11 + 0xc0) * fVar29);
  *(float *)((long)register0x00000008 + -0x98) = fVar24;
  bVar2 = *(byte *)(_NGUIMath_TypeInfo_12d53b8 + 0x133);
  *(undefined8 *)((long)register0x00000008 + -200) = 0;
  *(ulong *)((long)register0x00000008 + -0xd0) =
       CONCAT44(((float)((ulong)uVar13 >> 0x20) + (float)((ulong)uVar27 >> 0x20)) * 0.5,
                ((float)uVar13 + (float)uVar27) * 0.5);
  if (((bVar2 >> 2 & 1) != 0) && (*(int *)(_NGUIMath_TypeInfo_12d53b8 + 0xe0) == 0)) {
    native_sub_4327ec();
  }
  uVar23 = 0x40000000;
  fVar29 = (fVar21 + fVar28) * 0.5;
  fVar21 = (float)native_NGUIMath__SpringDampen_80634c
                            (0x41100000,(undefined1 *)((long)register0x00000008 + -0xa0),0);
  uVar13 = *(undefined8 *)((long)register0x00000008 + -0xd0);
  fVar24 = (float)uVar23;
  fVar28 = (float)uVar10;
  lVar5 = native_UnityEngine_Component__GetComponent_ActiveAnimation__49daec
                    (lVar9,_Method_UnityEngine_Component_GetComponent_UIGrid____12e2bc0);
  if (((*(byte *)(_UnityEngine_Object_TypeInfo_12d54e0 + 0x133) >> 2 & 1) != 0) &&
     (*(int *)(_UnityEngine_Object_TypeInfo_12d54e0 + 0xe0) == 0)) {
    native_sub_4327ec(_UnityEngine_Object_TypeInfo_12d54e0);
  }
  fVar21 = (float)*(undefined8 *)((long)register0x00000008 + -0xd0) - fVar21 * 0.01;
  fVar24 = (float)((ulong)uVar13 >> 0x20) - fVar24 * 0.01;
  fVar28 = fVar29 - fVar28 * 0.01;
  uVar6 = native_UnityEngine_Object__op_Inequality_8d76fc(lVar5,0,0);
  if ((uVar6 & 1) == 0) {
    iVar3 = native_UnityEngine_Transform__get_childCount_772a64(lVar12,0);
    uVar26 = (undefined4)uVar10;
    fVar22 = (float)uVar23;
    if (iVar3 < 1) {
      lVar5 = 0;
LAB_009dcf1c:
      *(undefined4 *)((long)register0x00000008 + -0xb4) = 0;
      uVar14 = 0;
      lVar11 = 0;
    }
    else {
      fVar30 = 3.4028235e+38;
      lVar11 = 0;
      uVar14 = 0;
      uVar15 = 0;
      iVar18 = 0;
      *(undefined4 *)((long)register0x00000008 + -0xb4) = 0;
      do {
        lVar5 = native_UnityEngine_Transform__GetChild_772ef0(lVar12,uVar15,0);
        if ((lVar5 == 0) ||
           (lVar19 = native_UnityEngine_Component__get_gameObject_8da66c(lVar5,0), lVar19 == 0))
        goto LAB_009dd300;
        uVar6 = native_UnityEngine_GameObject__get_activeInHierarchy_8de728(lVar19,0);
        fVar25 = (float)uVar10;
        fVar22 = (float)uVar23;
        if ((uVar6 & 1) != 0) {
          fVar20 = (float)native_UnityEngine_Transform__get_position_77169c(lVar5,0);
          fVar20 = fVar20 - fVar21;
          fVar22 = fVar22 - fVar24;
          fVar25 = fVar25 - fVar28;
          uVar10 = (ulong)(uint)fVar25;
          uVar23 = (ulong)(uint)(fVar25 * fVar25);
          fVar22 = fVar25 * fVar25 + fVar20 * fVar20 + fVar22 * fVar22;
          if (fVar22 < fVar30) {
            *(int *)((long)register0x00000008 + -0xb4) = iVar18;
            lVar11 = lVar5;
            uVar14 = uVar15;
            fVar30 = fVar22;
          }
          iVar18 = iVar18 + 1;
        }
        uVar26 = (undefined4)uVar10;
        fVar22 = (float)uVar23;
        uVar15 = uVar15 + 1;
      } while ((int)uVar15 < iVar3);
      lVar5 = 0;
    }
  }
  else {
    if (lVar5 == 0) goto LAB_009dd300;
    lVar5 = native_UIGrid__GetChildList_9dd490(lVar5);
    uVar26 = (undefined4)uVar10;
    fVar22 = (float)uVar23;
    if (lVar5 == 0) goto LAB_009dd300;
    uVar15 = *(uint *)(lVar5 + 0x18);
    if ((int)uVar15 < 1) goto LAB_009dcf1c;
    fVar30 = 3.4028235e+38;
    lVar19 = 0;
    lVar11 = 0;
    uVar14 = 0;
    iVar3 = 0;
    *(undefined4 *)((long)register0x00000008 + -0xb4) = 0;
    uVar1 = uVar15;
    while( true ) {
      uVar17 = (uint)lVar19;
      if (uVar1 <= uVar17) {
        native_System_ThrowHelper__ThrowArgumentOutOfRangeException_9fe0f4(0);
      }
      lVar16 = *(long *)(*(long *)(lVar5 + 0x10) + lVar19 * 8 + 0x20);
      if ((lVar16 == 0) ||
         (lVar7 = native_UnityEngine_Component__get_gameObject_8da66c(lVar16,0), lVar7 == 0))
      goto LAB_009dd300;
      uVar6 = native_UnityEngine_GameObject__get_activeInHierarchy_8de728(lVar7,0);
      fVar25 = (float)uVar10;
      fVar22 = (float)uVar23;
      if ((uVar6 & 1) != 0) {
        fVar20 = (float)native_UnityEngine_Transform__get_position_77169c(lVar16,0);
        fVar20 = fVar20 - fVar21;
        fVar22 = fVar22 - fVar24;
        fVar25 = fVar25 - fVar28;
        uVar10 = (ulong)(uint)fVar25;
        uVar23 = (ulong)(uint)(fVar25 * fVar25);
        fVar22 = fVar25 * fVar25 + fVar20 * fVar20 + fVar22 * fVar22;
        if (fVar22 < fVar30) {
          *(int *)((long)register0x00000008 + -0xb4) = iVar3;
          lVar11 = lVar16;
          uVar14 = uVar17;
          fVar30 = fVar22;
        }
        iVar3 = iVar3 + 1;
      }
      uVar26 = (undefined4)uVar10;
      fVar22 = (float)uVar23;
      if ((int)uVar15 <= (int)(uVar17 + 1)) break;
      uVar1 = *(uint *)(lVar5 + 0x18);
      lVar19 = lVar19 + 1;
    }
  }
  if (*(float *)(lVar9 + 0x1c) <= 0.0) goto LAB_009dd2bc;
  if (((*(byte *)(_UICamera_TypeInfo_12d6410 + 0x133) >> 2 & 1) != 0) &&
     (*(int *)(_UICamera_TypeInfo_12d6410 + 0xe0) == 0)) {
    native_sub_4327ec();
  }
  if (*(long *)(*(long *)(_UICamera_TypeInfo_12d6410 + 0xb8) + 0xe0) == 0) goto LAB_009dd2bc;
  uVar27 = *(undefined8 *)(lVar9 + 0x38);
  if (((*(byte *)(_UnityEngine_Object_TypeInfo_12d54e0 + 0x133) >> 2 & 1) != 0) &&
     (*(int *)(_UnityEngine_Object_TypeInfo_12d54e0 + 0xe0) == 0)) {
    native_sub_4327ec();
  }
  uVar10 = native_UnityEngine_Object__op_Inequality_8d76fc(uVar27,0,0);
  if ((uVar10 & 1) == 0) goto LAB_009dd2bc;
  if (*(long *)(lVar9 + 0x38) == 0) goto LAB_009dd300;
  uVar27 = native_UnityEngine_GameObject__get_transform_8de5c8(*(long *)(lVar9 + 0x38),0);
  if (lVar5 == 0) {
    uVar8 = native_UnityEngine_Transform__GetChild_772ef0(lVar12,uVar14,0);
  }
  else {
    if (*(uint *)(lVar5 + 0x18) <= uVar14) {
      native_System_ThrowHelper__ThrowArgumentOutOfRangeException_9fe0f4(0);
    }
    uVar8 = *(undefined8 *)(*(long *)(lVar5 + 0x10) + (long)(int)uVar14 * 8 + 0x20);
  }
  if (((*(byte *)(_UnityEngine_Object_TypeInfo_12d54e0 + 0x133) >> 2 & 1) != 0) &&
     (*(int *)(_UnityEngine_Object_TypeInfo_12d54e0 + 0xe0) == 0)) {
    native_sub_4327ec();
  }
  uVar10 = native_UnityEngine_Object__op_Equality_8e9a3c(uVar27,uVar8,0);
  if ((uVar10 & 1) == 0) goto LAB_009dd2bc;
  if (((*(byte *)(_UICamera_TypeInfo_12d6410 + 0x133) >> 2 & 1) != 0) &&
     (*(int *)(_UICamera_TypeInfo_12d6410 + 0xe0) == 0)) {
    native_sub_4327ec();
  }
  lVar19 = *(long *)(*(long *)(_UICamera_TypeInfo_12d6410 + 0xb8) + 0xe0);
  if (lVar19 == 0) {
LAB_009dd300:
                    /* WARNING: Subroutine does not return */
    native_sub_432810();
  }
  uVar27 = *(undefined8 *)(lVar19 + 0x2c);
  *(undefined4 *)((long)register0x00000008 + -0xa8) = 0;
  *(undefined8 *)((long)register0x00000008 + -0xb0) = uVar27;
  lVar19 = native_UnityEngine_Component__get_transform_8da62c(lVar9,0);
  if (lVar19 == 0) goto LAB_009dd300;
  native_UnityEngine_Transform__get_rotation_771a30(lVar19,0);
  fVar21 = (float)native_UnityEngine_Quaternion__op_Multiply_7629c0(0);
  *(float *)((long)register0x00000008 + -0xb0) = fVar21;
  *(float *)((long)register0x00000008 + -0xac) = fVar22;
  *(undefined4 *)((long)register0x00000008 + -0xa8) = uVar26;
  if (*unaff_x20 == 0) goto LAB_009dd300;
  iVar3 = *(int *)(*unaff_x20 + 0x18);
  if (iVar3 != 0) {
    if (iVar3 == 1) {
      fVar21 = -fVar22;
    }
    else {
      fVar21 = (float)native_UnityEngine_Vector3__get_magnitude_77684c
                                ((undefined1 *)((long)register0x00000008 + -0xb0),0);
    }
  }
  fVar24 = *(float *)(lVar9 + 0x1c);
  if (ABS(fVar21) <= fVar24) goto LAB_009dd2bc;
  if (fVar21 <= fVar24) {
    if (-fVar24 <= fVar21) goto LAB_009dd2bc;
    if (lVar5 != 0) {
      uVar15 = *(uint *)(lVar5 + 0x18);
      if ((int)(uVar15 - 1) <= *(int *)((long)register0x00000008 + -0xb4)) {
        uVar27 = native_UnityEngine_Component__GetComponent_ActiveAnimation__49daec
                           (lVar9,
                            _Method_UnityEngine_Component_GetComponent_UIWrapContent____12e2c38);
        if (((*(byte *)(_UnityEngine_Object_TypeInfo_12d54e0 + 0x133) >> 2 & 1) != 0) &&
           (*(int *)(_UnityEngine_Object_TypeInfo_12d54e0 + 0xe0) == 0)) {
          native_sub_4327ec(_UnityEngine_Object_TypeInfo_12d54e0);
        }
        uVar10 = native_UnityEngine_Object__op_Equality_8e9a3c(uVar27,0,0);
        iVar3 = *(int *)(lVar5 + 0x18);
        if ((uVar10 & 1) != 0) goto LAB_009dd248;
        goto LAB_009dd1c0;
      }
      uVar14 = *(int *)((long)register0x00000008 + -0xb4) + 1;
      goto LAB_009dd0f8;
    }
    iVar3 = native_UnityEngine_Transform__get_childCount_772a64(lVar12,0);
    if (iVar3 + -1 <= *(int *)((long)register0x00000008 + -0xb4)) {
      uVar27 = native_UnityEngine_Component__GetComponent_ActiveAnimation__49daec
                         (lVar9,_Method_UnityEngine_Component_GetComponent_UIWrapContent____12e2c38)
      ;
      if (((*(byte *)(_UnityEngine_Object_TypeInfo_12d54e0 + 0x133) >> 2 & 1) != 0) &&
         (*(int *)(_UnityEngine_Object_TypeInfo_12d54e0 + 0xe0) == 0)) {
        native_sub_4327ec(_UnityEngine_Object_TypeInfo_12d54e0);
      }
      uVar10 = native_UnityEngine_Object__op_Equality_8e9a3c(uVar27,0,0);
      if ((uVar10 & 1) != 0) goto LAB_009dd29c;
      goto LAB_009dd168;
    }
    iVar3 = *(int *)((long)register0x00000008 + -0xb4) + 1;
  }
  else {
    if (lVar5 != 0) {
      uVar14 = *(int *)((long)register0x00000008 + -0xb4) - 1;
      if (*(int *)((long)register0x00000008 + -0xb4) < 1) {
        uVar27 = native_UnityEngine_Component__GetComponent_ActiveAnimation__49daec
                           (lVar9,
                            _Method_UnityEngine_Component_GetComponent_UIWrapContent____12e2c38);
        if (((*(byte *)(_UnityEngine_Object_TypeInfo_12d54e0 + 0x133) >> 2 & 1) != 0) &&
           (*(int *)(_UnityEngine_Object_TypeInfo_12d54e0 + 0xe0) == 0)) {
          native_sub_4327ec(_UnityEngine_Object_TypeInfo_12d54e0);
        }
        uVar10 = native_UnityEngine_Object__op_Equality_8e9a3c(uVar27,0,0);
        iVar3 = *(int *)(lVar5 + 0x18);
        if ((uVar10 & 1) == 0) {
LAB_009dd248:
          uVar14 = iVar3 - 1;
          if (iVar3 == 0) goto LAB_009dd100;
          goto LAB_009dd108;
        }
LAB_009dd1c0:
        if (iVar3 == 0) {
          native_System_ThrowHelper__ThrowArgumentOutOfRangeException_9fe0f4(0);
        }
        lVar12 = *(long *)(lVar5 + 0x10);
      }
      else {
        uVar15 = *(uint *)(lVar5 + 0x18);
LAB_009dd0f8:
        if (uVar15 <= uVar14) {
LAB_009dd100:
          native_System_ThrowHelper__ThrowArgumentOutOfRangeException_9fe0f4(0);
        }
LAB_009dd108:
        lVar12 = *(long *)(lVar5 + 0x10) + (long)(int)uVar14 * 8;
      }
      lVar11 = *(long *)(lVar12 + 0x20);
      goto LAB_009dd2bc;
    }
    iVar3 = *(int *)((long)register0x00000008 + -0xb4) + -1;
    if (*(int *)((long)register0x00000008 + -0xb4) < 1) {
      uVar27 = native_UnityEngine_Component__GetComponent_ActiveAnimation__49daec
                         (lVar9,_Method_UnityEngine_Component_GetComponent_UIWrapContent____12e2c38)
      ;
      if (((*(byte *)(_UnityEngine_Object_TypeInfo_12d54e0 + 0x133) >> 2 & 1) != 0) &&
         (*(int *)(_UnityEngine_Object_TypeInfo_12d54e0 + 0xe0) == 0)) {
        native_sub_4327ec(_UnityEngine_Object_TypeInfo_12d54e0);
      }
      uVar10 = native_UnityEngine_Object__op_Equality_8e9a3c(uVar27,0,0);
      if ((uVar10 & 1) == 0) {
LAB_009dd29c:
        iVar3 = native_UnityEngine_Transform__get_childCount_772a64(lVar12,0);
        iVar3 = iVar3 + -1;
      }
      else {
LAB_009dd168:
        iVar3 = 0;
      }
    }
  }
  lVar11 = native_UnityEngine_Transform__GetChild_772ef0(lVar12,iVar3,0);
LAB_009dd2bc:
  native_UICenterOnChild__CenterOn_9dd7e8
            (*(undefined8 *)((long)register0x00000008 + -0xd0),(float)((ulong)uVar13 >> 0x20),fVar29
             ,lVar9,lVar11);
  return;
}



/* UICenterOnChild$$OnDisable @ 0x9dd3b4
 * void UICenterOnChild__OnDisable (UICenterOnChild_o* __this, const MethodInfo* method); */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* UICenterOnChild$$OnDisable
   void UICenterOnChild__OnDisable (UICenterOnChild_o* __this, const MethodInfo* method); */

void native_UICenterOnChild__OnDisable_9dd3b4(long param_1)

{
  ulong *puVar1;
  char cVar2;
  bool bVar3;
  ulong uVar4;
  long lVar5;
  undefined8 uVar6;
  
  if ((bRam00000000013418b2 & 1) == 0) {
    native_sub_43273c(&UnityEngine_Object_TypeInfo_12d54e0);
    bRam00000000013418b2 = 1;
  }
  uVar6 = *(undefined8 *)(param_1 + 0x30);
  if (((*(byte *)(_UnityEngine_Object_TypeInfo_12d54e0 + 0x133) >> 2 & 1) != 0) &&
     (*(int *)(_UnityEngine_Object_TypeInfo_12d54e0 + 0xe0) == 0)) {
    native_sub_4327ec();
  }
  uVar4 = native_UnityEngine_Object__op_Implicit_8e1b98(uVar6,0);
  if ((uVar4 & 1) != 0) {
    lVar5 = *(long *)(param_1 + 0x30);
    if (lVar5 != 0) {
      *(undefined8 *)(lVar5 + 0x100) = 0;
      if (iRam0000000001345318 != 0) {
        puVar1 = (ulong *)((lVar5 + 0x100U >> 0x12 & 0x7fff) * 8 + 0x138ecd8);
        do {
          cVar2 = '\x01';
          bVar3 = (bool)ExclusiveMonitorPass(puVar1,0x10);
          if (bVar3) {
            *puVar1 = *puVar1 | 1L << (lVar5 + 0x100U >> 0xc & 0x3f);
            cVar2 = ExclusiveMonitorsStatus();
          }
        } while (cVar2 != '\0');
      }
      return;
    }
                    /* WARNING: Subroutine does not return */
    native_sub_432810();
  }
  return;
}



/* UICenterOnChild$$OnDragFinished @ 0x9dd448
 * void UICenterOnChild__OnDragFinished (UICenterOnChild_o* __this, const MethodInfo* method); */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* UICenterOnChild$$OnDragFinished
   void UICenterOnChild__OnDragFinished (UICenterOnChild_o* __this, const MethodInfo* method); */

void native_UICenterOnChild__OnDragFinished_9dd448(long param_1)

{
  uint uVar1;
  byte bVar2;
  int iVar3;
  undefined8 uVar4;
  long *plVar5;
  long lVar6;
  ulong uVar7;
  long lVar8;
  undefined8 uVar9;
  ulong uVar10;
  long lVar11;
  undefined8 unaff_x19;
  long *plVar12;
  undefined8 unaff_x20;
  long lVar13;
  long *unaff_x21;
  long unaff_x22;
  undefined8 unaff_x23;
  uint uVar14;
  undefined *unaff_x24;
  uint uVar15;
  long lVar16;
  undefined8 unaff_x25;
  undefined8 unaff_x26;
  uint uVar17;
  int iVar18;
  long lVar19;
  undefined8 unaff_x27;
  undefined *unaff_x28;
  undefined8 unaff_x29;
  undefined8 unaff_x30;
  float fVar20;
  float fVar21;
  float fVar22;
  ulong uVar23;
  float fVar24;
  float fVar25;
  undefined4 uVar26;
  undefined8 uVar27;
  float fVar28;
  float fVar29;
  undefined8 unaff_d8;
  undefined8 unaff_d9;
  undefined8 unaff_d10;
  undefined8 unaff_d11;
  undefined8 unaff_d12;
  float fVar30;
  undefined8 unaff_d13;
  
  uVar10 = native_UnityEngine_Behaviour__get_enabled_8d7acc(param_1,0);
  if ((uVar10 & 1) == 0) {
    return;
  }
native_UICenterOnChild__Recenter_9dc788:
  *(undefined8 *)((long)register0x00000008 + -0x90) = unaff_d13;
  *(undefined8 *)((long)register0x00000008 + -0x88) = unaff_d12;
  *(undefined8 *)((long)register0x00000008 + -0x80) = unaff_d11;
  *(undefined8 *)((long)register0x00000008 + -0x78) = unaff_d10;
  *(undefined8 *)((long)register0x00000008 + -0x70) = unaff_d9;
  *(undefined8 *)((long)register0x00000008 + -0x68) = unaff_d8;
  *(undefined **)((long)register0x00000008 + -0x60) = unaff_x28;
  *(undefined8 *)((long)register0x00000008 + -0x58) = unaff_x27;
  *(undefined8 *)((long)register0x00000008 + -0x50) = unaff_x26;
  *(undefined8 *)((long)register0x00000008 + -0x48) = unaff_x25;
  *(undefined **)((long)register0x00000008 + -0x40) = unaff_x24;
  *(undefined8 *)((long)register0x00000008 + -0x38) = unaff_x23;
  *(long *)((long)register0x00000008 + -0x30) = unaff_x22;
  *(long **)((long)register0x00000008 + -0x28) = unaff_x21;
  *(undefined8 *)((long)register0x00000008 + -0x20) = unaff_x20;
  *(undefined8 *)((long)register0x00000008 + -0x18) = unaff_x19;
  *(undefined8 *)((long)register0x00000008 + -0x10) = unaff_x29;
  *(undefined8 *)((long)register0x00000008 + -8) = unaff_x30;
  if ((bRam00000000013418b3 & 1) == 0) {
    native_sub_43273c(&Method_UnityEngine_Component_GetComponent_UIGrid____12e2bc0);
    native_sub_43273c(&Method_UnityEngine_Component_GetComponent_UIWrapContent____12e2c38);
    native_sub_43273c(&UnityEngine_Debug_TypeInfo_12d4338);
    native_sub_43273c(&Method_System_Collections_Generic_List_Transform__get_Count___12dd1a8);
    native_sub_43273c(&Method_System_Collections_Generic_List_Transform__get_Item___12dd1b0);
    native_sub_43273c(&NGUIMath_TypeInfo_12d53b8);
    native_sub_43273c(&Method_NGUITools_FindInParents_UIScrollView____12e5790);
    native_sub_43273c(&NGUITools_TypeInfo_12d53c8);
    native_sub_43273c(&UnityEngine_Object_TypeInfo_12d54e0);
    native_sub_43273c(&UIProgressBar_OnDragFinished_TypeInfo_12d7a88);
    native_sub_43273c(&System_Type_TypeInfo_12d6340);
    native_sub_43273c(&UICamera_TypeInfo_12d6410);
    native_sub_43273c(&Method_UICenterOnChild_OnDragFinished___12e77f0);
    native_sub_43273c(&UIScrollView_var_12d1958);
    native_sub_43273c(&StringLiteral__requires__12eaef8);
    native_sub_43273c(&StringLiteral__on_a_parent_object_in_order_to_work_12eaee0);
    bRam00000000013418b3 = 1;
  }
  *(undefined4 *)((long)register0x00000008 + -0x98) = 0;
  *(undefined8 *)((long)register0x00000008 + -0xa0) = 0;
  *(undefined4 *)((long)register0x00000008 + -0xa8) = 0;
  *(undefined8 *)((long)register0x00000008 + -0xb0) = 0;
  unaff_x28 = &UnityEngine_Object_TypeInfo_12d54e0;
  plVar12 = (long *)(param_1 + 0x30);
  lVar13 = *plVar12;
  if (((*(byte *)(_UnityEngine_Object_TypeInfo_12d54e0 + 0x133) >> 2 & 1) != 0) &&
     (*(int *)(_UnityEngine_Object_TypeInfo_12d54e0 + 0xe0) == 0)) {
    native_sub_4327ec();
  }
  uVar10 = native_UnityEngine_Object__op_Equality_8e9a3c(lVar13,0,0);
  if ((uVar10 & 1) != 0) {
    uVar4 = native_UnityEngine_Component__get_gameObject_8da66c(param_1,0);
    if (((*(byte *)(_NGUITools_TypeInfo_12d53c8 + 0x133) >> 2 & 1) != 0) &&
       (*(int *)(_NGUITools_TypeInfo_12d53c8 + 0xe0) == 0)) {
      native_sub_4327ec(_NGUITools_TypeInfo_12d53c8);
    }
    lVar13 = native_NGUITools__FindInParents_object__4a5c04
                       (uVar4,_Method_NGUITools_FindInParents_UIScrollView____12e5790);
    *plVar12 = lVar13;
    native_sub_4326e0(plVar12,lVar13);
    lVar13 = *plVar12;
    if (((*(byte *)(_UnityEngine_Object_TypeInfo_12d54e0 + 0x133) >> 2 & 1) != 0) &&
       (*(int *)(_UnityEngine_Object_TypeInfo_12d54e0 + 0xe0) == 0)) {
      native_sub_4327ec();
    }
    uVar10 = native_UnityEngine_Object__op_Equality_8e9a3c(lVar13,0,0);
    if ((uVar10 & 1) != 0) {
      plVar12 = (long *)native_System_Object__GetType_adb48c(param_1,0);
      if (plVar12 == (long *)0x0) {
        uVar4 = 0;
      }
      else {
        uVar4 = (**(code **)(*plVar12 + 0x168))(plVar12,*(undefined8 *)(*plVar12 + 0x170));
      }
      uVar27 = _UIScrollView_var_12d1958;
      if (((*(byte *)(_System_Type_TypeInfo_12d6340 + 0x133) >> 2 & 1) != 0) &&
         (*(int *)(_System_Type_TypeInfo_12d6340 + 0xe0) == 0)) {
        native_sub_4327ec();
      }
      plVar12 = (long *)native_System_Type__GetTypeFromHandle_b0fb24(uVar27,0);
      uVar27 = _StringLiteral__requires__12eaef8;
      if (plVar12 == (long *)0x0) {
        uVar9 = 0;
      }
      else {
        uVar9 = (**(code **)(*plVar12 + 0x168))(plVar12,*(undefined8 *)(*plVar12 + 0x170));
      }
      uVar4 = native_System_String__Concat_afcabc
                        (uVar4,uVar27,uVar9,
                         _StringLiteral__on_a_parent_object_in_order_to_work_12eaee0,0);
      if (((*(byte *)(_UnityEngine_Debug_TypeInfo_12d4338 + 0x133) >> 2 & 1) != 0) &&
         (*(int *)(_UnityEngine_Debug_TypeInfo_12d4338 + 0xe0) == 0)) {
        native_sub_4327ec(_UnityEngine_Debug_TypeInfo_12d4338);
      }
      native_UnityEngine_Debug__LogWarning_8dcbc8(uVar4,param_1,0);
      native_UnityEngine_Behaviour__set_enabled_8d7b0c(param_1,0,0);
      return;
    }
    lVar13 = *plVar12;
    if (((*(byte *)(_UnityEngine_Object_TypeInfo_12d54e0 + 0x133) >> 2 & 1) != 0) &&
       (*(int *)(_UnityEngine_Object_TypeInfo_12d54e0 + 0xe0) == 0)) {
      native_sub_4327ec();
    }
    uVar10 = native_UnityEngine_Object__op_Implicit_8e1b98(lVar13,0);
    if ((uVar10 & 1) != 0) {
      lVar13 = *plVar12;
      if (lVar13 == 0) goto LAB_009dd300;
      *(long *)(lVar13 + 0x100) = param_1;
      native_sub_4326e0(lVar13 + 0x100,param_1);
    }
    if (*plVar12 == 0) goto LAB_009dd300;
    uVar4 = *(undefined8 *)(*plVar12 + 0x38);
    if (((*(byte *)(_UnityEngine_Object_TypeInfo_12d54e0 + 0x133) >> 2 & 1) != 0) &&
       (*(int *)(_UnityEngine_Object_TypeInfo_12d54e0 + 0xe0) == 0)) {
      native_sub_4327ec();
    }
    uVar10 = native_UnityEngine_Object__op_Inequality_8d76fc(uVar4,0,0);
    if ((uVar10 & 1) != 0) {
      if ((*plVar12 == 0) || (lVar13 = *(long *)(*plVar12 + 0x38), lVar13 == 0)) goto LAB_009dd300;
      unaff_x21 = (long *)(lVar13 + 0x18);
      unaff_x22 = *unaff_x21;
      unaff_x23 = native_sub_432808(_UIProgressBar_OnDragFinished_TypeInfo_12d7a88);
      native_UIProgressBar_OnDragFinished___ctor_558c74
                (unaff_x23,param_1,_Method_UICenterOnChild_OnDragFinished___12e77f0,0);
      plVar5 = (long *)native_System_Delegate__Combine_a6cf00(unaff_x22,unaff_x23,0);
      if ((plVar5 == (long *)0x0) || (*plVar5 == _UIProgressBar_OnDragFinished_TypeInfo_12d7a88)) {
        *unaff_x21 = (long)plVar5;
        native_sub_4326e0(unaff_x21,plVar5);
        goto LAB_009dca78;
      }
LAB_009dd310:
      unaff_x24 = &UIProgressBar_OnDragFinished_TypeInfo_12d7a88;
      lVar13 = native_sub_432b04(plVar5);
      *(long **)((long)register0x00000008 + -0xf0) = plVar12;
      *(long *)((long)register0x00000008 + -0xe8) = param_1;
      *(undefined1 **)((long)register0x00000008 + -0xe0) =
           (undefined1 *)((long)register0x00000008 + -0x10);
      *(code **)((long)register0x00000008 + -0xd8) = native_UICenterOnChild__OnEnable_9dd318;
      if ((bRam00000000013418b1 & 1) == 0) {
        native_sub_43273c(&UnityEngine_Object_TypeInfo_12d54e0);
        bRam00000000013418b1 = 1;
      }
      uVar4 = *(undefined8 *)(lVar13 + 0x30);
      if (((*(byte *)(_UnityEngine_Object_TypeInfo_12d54e0 + 0x133) >> 2 & 1) != 0) &&
         (*(int *)(_UnityEngine_Object_TypeInfo_12d54e0 + 0xe0) == 0)) {
        native_sub_4327ec();
      }
      uVar10 = native_UnityEngine_Object__op_Implicit_8e1b98(uVar4,0);
      if ((uVar10 & 1) == 0) {
        return;
      }
      lVar6 = *(long *)(lVar13 + 0x30);
      if (lVar6 == 0) {
                    /* WARNING: Subroutine does not return */
        native_sub_432810();
      }
      *(long *)(lVar6 + 0x100) = lVar13;
      native_sub_4326e0(lVar6 + 0x100,lVar13);
      unaff_x29 = *(undefined8 *)((long)register0x00000008 + -0xe0);
      unaff_x30 = *(undefined8 *)((long)register0x00000008 + -0xd8);
      unaff_x20 = *(undefined8 *)((long)register0x00000008 + -0xf0);
      unaff_x19 = *(undefined8 *)((long)register0x00000008 + -0xe8);
      register0x00000008 = (BADSPACEBASE *)((long)register0x00000008 + -0xd0);
      param_1 = lVar13;
      goto native_UICenterOnChild__Recenter_9dc788;
    }
LAB_009dca78:
    if (*plVar12 == 0) goto LAB_009dd300;
    uVar4 = *(undefined8 *)(*plVar12 + 0x40);
    if (((*(byte *)(_UnityEngine_Object_TypeInfo_12d54e0 + 0x133) >> 2 & 1) != 0) &&
       (*(int *)(_UnityEngine_Object_TypeInfo_12d54e0 + 0xe0) == 0)) {
      native_sub_4327ec();
    }
    uVar10 = native_UnityEngine_Object__op_Inequality_8d76fc(uVar4,0,0);
    if ((uVar10 & 1) == 0) goto LAB_009dcb28;
    if ((*plVar12 == 0) || (lVar13 = *(long *)(*plVar12 + 0x40), lVar13 == 0)) goto LAB_009dd300;
    unaff_x21 = (long *)(lVar13 + 0x18);
    unaff_x22 = *unaff_x21;
    unaff_x23 = native_sub_432808(_UIProgressBar_OnDragFinished_TypeInfo_12d7a88);
    native_UIProgressBar_OnDragFinished___ctor_558c74
              (unaff_x23,param_1,_Method_UICenterOnChild_OnDragFinished___12e77f0,0);
    plVar5 = (long *)native_System_Delegate__Combine_a6cf00(unaff_x22,unaff_x23,0);
    if ((plVar5 != (long *)0x0) && (*plVar5 != _UIProgressBar_OnDragFinished_TypeInfo_12d7a88))
    goto LAB_009dd310;
    *unaff_x21 = (long)plVar5;
    native_sub_4326e0(unaff_x21,plVar5);
  }
LAB_009dcb28:
  if (*plVar12 == 0) goto LAB_009dd300;
  uVar4 = *(undefined8 *)(*plVar12 + 0x98);
  if (((*(byte *)(_UnityEngine_Object_TypeInfo_12d54e0 + 0x133) >> 2 & 1) != 0) &&
     (*(int *)(_UnityEngine_Object_TypeInfo_12d54e0 + 0xe0) == 0)) {
    native_sub_4327ec();
  }
  uVar10 = native_UnityEngine_Object__op_Equality_8e9a3c(uVar4,0,0);
  if ((uVar10 & 1) != 0) {
    return;
  }
  lVar13 = native_UnityEngine_Component__get_transform_8da62c(param_1,0);
  if (lVar13 == 0) goto LAB_009dd300;
  iVar3 = native_UnityEngine_Transform__get_childCount_772a64(lVar13,0);
  if (iVar3 == 0) {
    return;
  }
  if (((*plVar12 == 0) || (plVar5 = *(long **)(*plVar12 + 0x98), plVar5 == (long *)0x0)) ||
     (lVar6 = (**(code **)(*plVar5 + 0x1e8))(plVar5,*(undefined8 *)(*plVar5 + 0x1f0)), lVar6 == 0))
  goto LAB_009dd300;
  if (*(uint *)(lVar6 + 0x18) < 3) {
    uVar4 = native_sub_43283c();
                    /* WARNING: Subroutine does not return */
    native_sub_4327dc(uVar4,0);
  }
  lVar11 = *plVar12;
  if (lVar11 == 0) goto LAB_009dd300;
  uVar4 = *(undefined8 *)(lVar6 + 0x38);
  uVar27 = *(undefined8 *)(lVar6 + 0x20);
  fVar29 = *(float *)(lVar11 + 0x2c);
  fVar21 = *(float *)(lVar6 + 0x40);
  fVar28 = *(float *)(lVar6 + 0x28);
  fVar24 = *(float *)(lVar11 + 200) * fVar29;
  uVar10 = (ulong)(uint)fVar24;
  *(ulong *)((long)register0x00000008 + -0xa0) =
       CONCAT44((float)((ulong)*(undefined8 *)(lVar11 + 0xc0) >> 0x20) * fVar29,
                (float)*(undefined8 *)(lVar11 + 0xc0) * fVar29);
  *(float *)((long)register0x00000008 + -0x98) = fVar24;
  bVar2 = *(byte *)(_NGUIMath_TypeInfo_12d53b8 + 0x133);
  *(undefined8 *)((long)register0x00000008 + -200) = 0;
  *(ulong *)((long)register0x00000008 + -0xd0) =
       CONCAT44(((float)((ulong)uVar4 >> 0x20) + (float)((ulong)uVar27 >> 0x20)) * 0.5,
                ((float)uVar4 + (float)uVar27) * 0.5);
  if (((bVar2 >> 2 & 1) != 0) && (*(int *)(_NGUIMath_TypeInfo_12d53b8 + 0xe0) == 0)) {
    native_sub_4327ec();
  }
  uVar23 = 0x40000000;
  fVar29 = (fVar21 + fVar28) * 0.5;
  fVar21 = (float)native_NGUIMath__SpringDampen_80634c
                            (0x41100000,(undefined1 *)((long)register0x00000008 + -0xa0),0);
  uVar4 = *(undefined8 *)((long)register0x00000008 + -0xd0);
  fVar24 = (float)uVar23;
  fVar28 = (float)uVar10;
  lVar6 = native_UnityEngine_Component__GetComponent_ActiveAnimation__49daec
                    (param_1,_Method_UnityEngine_Component_GetComponent_UIGrid____12e2bc0);
  if (((*(byte *)(_UnityEngine_Object_TypeInfo_12d54e0 + 0x133) >> 2 & 1) != 0) &&
     (*(int *)(_UnityEngine_Object_TypeInfo_12d54e0 + 0xe0) == 0)) {
    native_sub_4327ec(_UnityEngine_Object_TypeInfo_12d54e0);
  }
  fVar21 = (float)*(undefined8 *)((long)register0x00000008 + -0xd0) - fVar21 * 0.01;
  fVar24 = (float)((ulong)uVar4 >> 0x20) - fVar24 * 0.01;
  fVar28 = fVar29 - fVar28 * 0.01;
  uVar7 = native_UnityEngine_Object__op_Inequality_8d76fc(lVar6,0,0);
  if ((uVar7 & 1) == 0) {
    iVar3 = native_UnityEngine_Transform__get_childCount_772a64(lVar13,0);
    uVar26 = (undefined4)uVar10;
    fVar22 = (float)uVar23;
    if (0 < iVar3) {
      fVar30 = 3.4028235e+38;
      lVar6 = 0;
      uVar14 = 0;
      uVar15 = 0;
      iVar18 = 0;
      *(undefined4 *)((long)register0x00000008 + -0xb4) = 0;
      goto LAB_009dcdc0;
    }
    lVar11 = 0;
  }
  else {
    if (lVar6 == 0) goto LAB_009dd300;
    lVar11 = native_UIGrid__GetChildList_9dd490(lVar6);
    uVar26 = (undefined4)uVar10;
    fVar22 = (float)uVar23;
    if (lVar11 == 0) goto LAB_009dd300;
    uVar15 = *(uint *)(lVar11 + 0x18);
    if (0 < (int)uVar15) {
      fVar30 = 3.4028235e+38;
      lVar19 = 0;
      lVar6 = 0;
      uVar14 = 0;
      iVar3 = 0;
      *(undefined4 *)((long)register0x00000008 + -0xb4) = 0;
      uVar1 = uVar15;
      goto LAB_009dccf0;
    }
  }
  *(undefined4 *)((long)register0x00000008 + -0xb4) = 0;
  uVar14 = 0;
  lVar6 = 0;
  goto LAB_009dcf28;
LAB_009dccf0:
  uVar17 = (uint)lVar19;
  if (uVar1 <= uVar17) {
    native_System_ThrowHelper__ThrowArgumentOutOfRangeException_9fe0f4(0);
  }
  lVar16 = *(long *)(*(long *)(lVar11 + 0x10) + lVar19 * 8 + 0x20);
  if ((lVar16 == 0) ||
     (lVar8 = native_UnityEngine_Component__get_gameObject_8da66c(lVar16,0), lVar8 == 0))
  goto LAB_009dd300;
  uVar7 = native_UnityEngine_GameObject__get_activeInHierarchy_8de728(lVar8,0);
  fVar25 = (float)uVar10;
  fVar22 = (float)uVar23;
  if ((uVar7 & 1) != 0) {
    fVar20 = (float)native_UnityEngine_Transform__get_position_77169c(lVar16,0);
    fVar20 = fVar20 - fVar21;
    fVar22 = fVar22 - fVar24;
    fVar25 = fVar25 - fVar28;
    uVar10 = (ulong)(uint)fVar25;
    uVar23 = (ulong)(uint)(fVar25 * fVar25);
    fVar22 = fVar25 * fVar25 + fVar20 * fVar20 + fVar22 * fVar22;
    if (fVar22 < fVar30) {
      *(int *)((long)register0x00000008 + -0xb4) = iVar3;
      lVar6 = lVar16;
      uVar14 = uVar17;
      fVar30 = fVar22;
    }
    iVar3 = iVar3 + 1;
  }
  uVar26 = (undefined4)uVar10;
  fVar22 = (float)uVar23;
  if ((int)uVar15 <= (int)(uVar17 + 1)) goto LAB_009dcf28;
  uVar1 = *(uint *)(lVar11 + 0x18);
  lVar19 = lVar19 + 1;
  goto LAB_009dccf0;
  while( true ) {
    uVar7 = native_UnityEngine_GameObject__get_activeInHierarchy_8de728(lVar19,0);
    fVar25 = (float)uVar10;
    fVar22 = (float)uVar23;
    if ((uVar7 & 1) != 0) {
      fVar20 = (float)native_UnityEngine_Transform__get_position_77169c(lVar11,0);
      fVar20 = fVar20 - fVar21;
      fVar22 = fVar22 - fVar24;
      fVar25 = fVar25 - fVar28;
      uVar10 = (ulong)(uint)fVar25;
      uVar23 = (ulong)(uint)(fVar25 * fVar25);
      fVar22 = fVar25 * fVar25 + fVar20 * fVar20 + fVar22 * fVar22;
      if (fVar22 < fVar30) {
        *(int *)((long)register0x00000008 + -0xb4) = iVar18;
        lVar6 = lVar11;
        uVar14 = uVar15;
        fVar30 = fVar22;
      }
      iVar18 = iVar18 + 1;
    }
    uVar26 = (undefined4)uVar10;
    fVar22 = (float)uVar23;
    uVar15 = uVar15 + 1;
    if (iVar3 <= (int)uVar15) break;
LAB_009dcdc0:
    lVar11 = native_UnityEngine_Transform__GetChild_772ef0(lVar13,uVar15,0);
    if ((lVar11 == 0) ||
       (lVar19 = native_UnityEngine_Component__get_gameObject_8da66c(lVar11,0), lVar19 == 0))
    goto LAB_009dd300;
  }
  lVar11 = 0;
LAB_009dcf28:
  if (*(float *)(param_1 + 0x1c) <= 0.0) goto LAB_009dd2bc;
  if (((*(byte *)(_UICamera_TypeInfo_12d6410 + 0x133) >> 2 & 1) != 0) &&
     (*(int *)(_UICamera_TypeInfo_12d6410 + 0xe0) == 0)) {
    native_sub_4327ec();
  }
  if (*(long *)(*(long *)(_UICamera_TypeInfo_12d6410 + 0xb8) + 0xe0) == 0) goto LAB_009dd2bc;
  uVar27 = *(undefined8 *)(param_1 + 0x38);
  if (((*(byte *)(_UnityEngine_Object_TypeInfo_12d54e0 + 0x133) >> 2 & 1) != 0) &&
     (*(int *)(_UnityEngine_Object_TypeInfo_12d54e0 + 0xe0) == 0)) {
    native_sub_4327ec();
  }
  uVar10 = native_UnityEngine_Object__op_Inequality_8d76fc(uVar27,0,0);
  if ((uVar10 & 1) == 0) goto LAB_009dd2bc;
  if (*(long *)(param_1 + 0x38) == 0) goto LAB_009dd300;
  uVar27 = native_UnityEngine_GameObject__get_transform_8de5c8(*(long *)(param_1 + 0x38),0);
  if (lVar11 == 0) {
    uVar9 = native_UnityEngine_Transform__GetChild_772ef0(lVar13,uVar14,0);
  }
  else {
    if (*(uint *)(lVar11 + 0x18) <= uVar14) {
      native_System_ThrowHelper__ThrowArgumentOutOfRangeException_9fe0f4(0);
    }
    uVar9 = *(undefined8 *)(*(long *)(lVar11 + 0x10) + (long)(int)uVar14 * 8 + 0x20);
  }
  if (((*(byte *)(_UnityEngine_Object_TypeInfo_12d54e0 + 0x133) >> 2 & 1) != 0) &&
     (*(int *)(_UnityEngine_Object_TypeInfo_12d54e0 + 0xe0) == 0)) {
    native_sub_4327ec();
  }
  uVar10 = native_UnityEngine_Object__op_Equality_8e9a3c(uVar27,uVar9,0);
  if ((uVar10 & 1) == 0) goto LAB_009dd2bc;
  if (((*(byte *)(_UICamera_TypeInfo_12d6410 + 0x133) >> 2 & 1) != 0) &&
     (*(int *)(_UICamera_TypeInfo_12d6410 + 0xe0) == 0)) {
    native_sub_4327ec();
  }
  lVar19 = *(long *)(*(long *)(_UICamera_TypeInfo_12d6410 + 0xb8) + 0xe0);
  if (lVar19 == 0) {
LAB_009dd300:
                    /* WARNING: Subroutine does not return */
    native_sub_432810();
  }
  uVar27 = *(undefined8 *)(lVar19 + 0x2c);
  *(undefined4 *)((long)register0x00000008 + -0xa8) = 0;
  *(undefined8 *)((long)register0x00000008 + -0xb0) = uVar27;
  lVar19 = native_UnityEngine_Component__get_transform_8da62c(param_1,0);
  if (lVar19 == 0) goto LAB_009dd300;
  native_UnityEngine_Transform__get_rotation_771a30(lVar19,0);
  fVar21 = (float)native_UnityEngine_Quaternion__op_Multiply_7629c0(0);
  *(float *)((long)register0x00000008 + -0xb0) = fVar21;
  *(float *)((long)register0x00000008 + -0xac) = fVar22;
  *(undefined4 *)((long)register0x00000008 + -0xa8) = uVar26;
  if (*plVar12 == 0) goto LAB_009dd300;
  iVar3 = *(int *)(*plVar12 + 0x18);
  if (iVar3 != 0) {
    if (iVar3 == 1) {
      fVar21 = -fVar22;
    }
    else {
      fVar21 = (float)native_UnityEngine_Vector3__get_magnitude_77684c
                                ((undefined1 *)((long)register0x00000008 + -0xb0),0);
    }
  }
  fVar24 = *(float *)(param_1 + 0x1c);
  if (ABS(fVar21) <= fVar24) goto LAB_009dd2bc;
  if (fVar21 <= fVar24) {
    if (-fVar24 <= fVar21) goto LAB_009dd2bc;
    if (lVar11 != 0) {
      uVar15 = *(uint *)(lVar11 + 0x18);
      if ((int)(uVar15 - 1) <= *(int *)((long)register0x00000008 + -0xb4)) {
        uVar27 = native_UnityEngine_Component__GetComponent_ActiveAnimation__49daec
                           (param_1,
                            _Method_UnityEngine_Component_GetComponent_UIWrapContent____12e2c38);
        if (((*(byte *)(_UnityEngine_Object_TypeInfo_12d54e0 + 0x133) >> 2 & 1) != 0) &&
           (*(int *)(_UnityEngine_Object_TypeInfo_12d54e0 + 0xe0) == 0)) {
          native_sub_4327ec(_UnityEngine_Object_TypeInfo_12d54e0);
        }
        uVar10 = native_UnityEngine_Object__op_Equality_8e9a3c(uVar27,0,0);
        iVar3 = *(int *)(lVar11 + 0x18);
        if ((uVar10 & 1) != 0) goto LAB_009dd248;
        goto LAB_009dd1c0;
      }
      uVar14 = *(int *)((long)register0x00000008 + -0xb4) + 1;
      goto LAB_009dd0f8;
    }
    iVar3 = native_UnityEngine_Transform__get_childCount_772a64(lVar13,0);
    if (iVar3 + -1 <= *(int *)((long)register0x00000008 + -0xb4)) {
      uVar27 = native_UnityEngine_Component__GetComponent_ActiveAnimation__49daec
                         (param_1,
                          _Method_UnityEngine_Component_GetComponent_UIWrapContent____12e2c38);
      if (((*(byte *)(_UnityEngine_Object_TypeInfo_12d54e0 + 0x133) >> 2 & 1) != 0) &&
         (*(int *)(_UnityEngine_Object_TypeInfo_12d54e0 + 0xe0) == 0)) {
        native_sub_4327ec(_UnityEngine_Object_TypeInfo_12d54e0);
      }
      uVar10 = native_UnityEngine_Object__op_Equality_8e9a3c(uVar27,0,0);
      if ((uVar10 & 1) != 0) goto LAB_009dd29c;
      goto LAB_009dd168;
    }
    iVar3 = *(int *)((long)register0x00000008 + -0xb4) + 1;
  }
  else {
    if (lVar11 != 0) {
      uVar14 = *(int *)((long)register0x00000008 + -0xb4) - 1;
      if (*(int *)((long)register0x00000008 + -0xb4) < 1) {
        uVar27 = native_UnityEngine_Component__GetComponent_ActiveAnimation__49daec
                           (param_1,
                            _Method_UnityEngine_Component_GetComponent_UIWrapContent____12e2c38);
        if (((*(byte *)(_UnityEngine_Object_TypeInfo_12d54e0 + 0x133) >> 2 & 1) != 0) &&
           (*(int *)(_UnityEngine_Object_TypeInfo_12d54e0 + 0xe0) == 0)) {
          native_sub_4327ec(_UnityEngine_Object_TypeInfo_12d54e0);
        }
        uVar10 = native_UnityEngine_Object__op_Equality_8e9a3c(uVar27,0,0);
        iVar3 = *(int *)(lVar11 + 0x18);
        if ((uVar10 & 1) == 0) {
LAB_009dd248:
          uVar14 = iVar3 - 1;
          if (iVar3 == 0) goto LAB_009dd100;
          goto LAB_009dd108;
        }
LAB_009dd1c0:
        if (iVar3 == 0) {
          native_System_ThrowHelper__ThrowArgumentOutOfRangeException_9fe0f4(0);
        }
        lVar13 = *(long *)(lVar11 + 0x10);
      }
      else {
        uVar15 = *(uint *)(lVar11 + 0x18);
LAB_009dd0f8:
        if (uVar15 <= uVar14) {
LAB_009dd100:
          native_System_ThrowHelper__ThrowArgumentOutOfRangeException_9fe0f4(0);
        }
LAB_009dd108:
        lVar13 = *(long *)(lVar11 + 0x10) + (long)(int)uVar14 * 8;
      }
      lVar6 = *(long *)(lVar13 + 0x20);
      goto LAB_009dd2bc;
    }
    iVar3 = *(int *)((long)register0x00000008 + -0xb4) + -1;
    if (*(int *)((long)register0x00000008 + -0xb4) < 1) {
      uVar27 = native_UnityEngine_Component__GetComponent_ActiveAnimation__49daec
                         (param_1,
                          _Method_UnityEngine_Component_GetComponent_UIWrapContent____12e2c38);
      if (((*(byte *)(_UnityEngine_Object_TypeInfo_12d54e0 + 0x133) >> 2 & 1) != 0) &&
         (*(int *)(_UnityEngine_Object_TypeInfo_12d54e0 + 0xe0) == 0)) {
        native_sub_4327ec(_UnityEngine_Object_TypeInfo_12d54e0);
      }
      uVar10 = native_UnityEngine_Object__op_Equality_8e9a3c(uVar27,0,0);
      if ((uVar10 & 1) == 0) {
LAB_009dd29c:
        iVar3 = native_UnityEngine_Transform__get_childCount_772a64(lVar13,0);
        iVar3 = iVar3 + -1;
      }
      else {
LAB_009dd168:
        iVar3 = 0;
      }
    }
  }
  lVar6 = native_UnityEngine_Transform__GetChild_772ef0(lVar13,iVar3,0);
LAB_009dd2bc:
  native_UICenterOnChild__CenterOn_9dd7e8
            (*(undefined8 *)((long)register0x00000008 + -0xd0),(float)((ulong)uVar4 >> 0x20),fVar29,
             param_1,lVar6);
  return;
}



/* UICenterOnChild$$OnValidate @ 0x9dd480
 * void UICenterOnChild__OnValidate (UICenterOnChild_o* __this, const MethodInfo* method); */

/* UICenterOnChild$$OnValidate
   void UICenterOnChild__OnValidate (UICenterOnChild_o* __this, const MethodInfo* method); */

void native_UICenterOnChild__OnValidate_9dd480(long param_1)

{
  *(float *)(param_1 + 0x1c) = ABS(*(float *)(param_1 + 0x1c));
  return;
}



/* UICenterOnChild$$Recenter @ 0x9dc788
 * void UICenterOnChild__Recenter (UICenterOnChild_o* __this, const MethodInfo* method); */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* UICenterOnChild$$Recenter
   void UICenterOnChild__Recenter (UICenterOnChild_o* __this, const MethodInfo* method); */

void native_UICenterOnChild__Recenter_9dc788(long param_1)

{
  uint uVar1;
  byte bVar2;
  int iVar3;
  ulong uVar4;
  undefined8 uVar5;
  long *plVar6;
  long lVar7;
  ulong uVar8;
  long lVar9;
  undefined8 uVar10;
  long lVar11;
  undefined8 unaff_x19;
  undefined8 unaff_x20;
  long *plVar12;
  long *unaff_x21;
  long lVar13;
  long unaff_x22;
  undefined8 unaff_x23;
  uint uVar14;
  undefined *unaff_x24;
  uint uVar15;
  undefined8 unaff_x25;
  long lVar16;
  undefined8 unaff_x26;
  uint uVar17;
  int iVar18;
  undefined8 unaff_x27;
  long lVar19;
  undefined *unaff_x28;
  undefined8 unaff_x29;
  undefined8 unaff_x30;
  float fVar20;
  float fVar21;
  float fVar22;
  ulong uVar23;
  float fVar24;
  float fVar25;
  undefined4 uVar26;
  undefined8 uVar27;
  float fVar28;
  float fVar29;
  undefined8 unaff_d8;
  undefined8 unaff_d9;
  undefined8 unaff_d10;
  undefined8 unaff_d11;
  undefined8 unaff_d12;
  float fVar30;
  undefined8 unaff_d13;
  
code_r0x009dc788:
  *(undefined8 *)((long)register0x00000008 + -0x90) = unaff_d13;
  *(undefined8 *)((long)register0x00000008 + -0x88) = unaff_d12;
  *(undefined8 *)((long)register0x00000008 + -0x80) = unaff_d11;
  *(undefined8 *)((long)register0x00000008 + -0x78) = unaff_d10;
  *(undefined8 *)((long)register0x00000008 + -0x70) = unaff_d9;
  *(undefined8 *)((long)register0x00000008 + -0x68) = unaff_d8;
  *(undefined **)((long)register0x00000008 + -0x60) = unaff_x28;
  *(undefined8 *)((long)register0x00000008 + -0x58) = unaff_x27;
  *(undefined8 *)((long)register0x00000008 + -0x50) = unaff_x26;
  *(undefined8 *)((long)register0x00000008 + -0x48) = unaff_x25;
  *(undefined **)((long)register0x00000008 + -0x40) = unaff_x24;
  *(undefined8 *)((long)register0x00000008 + -0x38) = unaff_x23;
  *(long *)((long)register0x00000008 + -0x30) = unaff_x22;
  *(long **)((long)register0x00000008 + -0x28) = unaff_x21;
  *(undefined8 *)((long)register0x00000008 + -0x20) = unaff_x20;
  *(undefined8 *)((long)register0x00000008 + -0x18) = unaff_x19;
  *(undefined8 *)((long)register0x00000008 + -0x10) = unaff_x29;
  *(undefined8 *)((long)register0x00000008 + -8) = unaff_x30;
  if ((bRam00000000013418b3 & 1) == 0) {
    native_sub_43273c(&Method_UnityEngine_Component_GetComponent_UIGrid____12e2bc0);
    native_sub_43273c(&Method_UnityEngine_Component_GetComponent_UIWrapContent____12e2c38);
    native_sub_43273c(&UnityEngine_Debug_TypeInfo_12d4338);
    native_sub_43273c(&Method_System_Collections_Generic_List_Transform__get_Count___12dd1a8);
    native_sub_43273c(&Method_System_Collections_Generic_List_Transform__get_Item___12dd1b0);
    native_sub_43273c(&NGUIMath_TypeInfo_12d53b8);
    native_sub_43273c(&Method_NGUITools_FindInParents_UIScrollView____12e5790);
    native_sub_43273c(&NGUITools_TypeInfo_12d53c8);
    native_sub_43273c(&UnityEngine_Object_TypeInfo_12d54e0);
    native_sub_43273c(&UIProgressBar_OnDragFinished_TypeInfo_12d7a88);
    native_sub_43273c(&System_Type_TypeInfo_12d6340);
    native_sub_43273c(&UICamera_TypeInfo_12d6410);
    native_sub_43273c(&Method_UICenterOnChild_OnDragFinished___12e77f0);
    native_sub_43273c(&UIScrollView_var_12d1958);
    native_sub_43273c(&StringLiteral__requires__12eaef8);
    native_sub_43273c(&StringLiteral__on_a_parent_object_in_order_to_work_12eaee0);
    bRam00000000013418b3 = 1;
  }
  *(undefined4 *)((long)register0x00000008 + -0x98) = 0;
  *(undefined8 *)((long)register0x00000008 + -0xa0) = 0;
  *(undefined4 *)((long)register0x00000008 + -0xa8) = 0;
  *(undefined8 *)((long)register0x00000008 + -0xb0) = 0;
  unaff_x28 = &UnityEngine_Object_TypeInfo_12d54e0;
  plVar12 = (long *)(param_1 + 0x30);
  lVar13 = *plVar12;
  if (((*(byte *)(_UnityEngine_Object_TypeInfo_12d54e0 + 0x133) >> 2 & 1) != 0) &&
     (*(int *)(_UnityEngine_Object_TypeInfo_12d54e0 + 0xe0) == 0)) {
    native_sub_4327ec();
  }
  uVar4 = native_UnityEngine_Object__op_Equality_8e9a3c(lVar13,0,0);
  if ((uVar4 & 1) != 0) {
    uVar5 = native_UnityEngine_Component__get_gameObject_8da66c(param_1,0);
    if (((*(byte *)(_NGUITools_TypeInfo_12d53c8 + 0x133) >> 2 & 1) != 0) &&
       (*(int *)(_NGUITools_TypeInfo_12d53c8 + 0xe0) == 0)) {
      native_sub_4327ec(_NGUITools_TypeInfo_12d53c8);
    }
    lVar13 = native_NGUITools__FindInParents_object__4a5c04
                       (uVar5,_Method_NGUITools_FindInParents_UIScrollView____12e5790);
    *plVar12 = lVar13;
    native_sub_4326e0(plVar12,lVar13);
    lVar13 = *plVar12;
    if (((*(byte *)(_UnityEngine_Object_TypeInfo_12d54e0 + 0x133) >> 2 & 1) != 0) &&
       (*(int *)(_UnityEngine_Object_TypeInfo_12d54e0 + 0xe0) == 0)) {
      native_sub_4327ec();
    }
    uVar4 = native_UnityEngine_Object__op_Equality_8e9a3c(lVar13,0,0);
    if ((uVar4 & 1) != 0) {
      plVar12 = (long *)native_System_Object__GetType_adb48c(param_1,0);
      if (plVar12 == (long *)0x0) {
        uVar5 = 0;
      }
      else {
        uVar5 = (**(code **)(*plVar12 + 0x168))(plVar12,*(undefined8 *)(*plVar12 + 0x170));
      }
      uVar27 = _UIScrollView_var_12d1958;
      if (((*(byte *)(_System_Type_TypeInfo_12d6340 + 0x133) >> 2 & 1) != 0) &&
         (*(int *)(_System_Type_TypeInfo_12d6340 + 0xe0) == 0)) {
        native_sub_4327ec();
      }
      plVar12 = (long *)native_System_Type__GetTypeFromHandle_b0fb24(uVar27,0);
      uVar27 = _StringLiteral__requires__12eaef8;
      if (plVar12 == (long *)0x0) {
        uVar10 = 0;
      }
      else {
        uVar10 = (**(code **)(*plVar12 + 0x168))(plVar12,*(undefined8 *)(*plVar12 + 0x170));
      }
      uVar5 = native_System_String__Concat_afcabc
                        (uVar5,uVar27,uVar10,
                         _StringLiteral__on_a_parent_object_in_order_to_work_12eaee0,0);
      if (((*(byte *)(_UnityEngine_Debug_TypeInfo_12d4338 + 0x133) >> 2 & 1) != 0) &&
         (*(int *)(_UnityEngine_Debug_TypeInfo_12d4338 + 0xe0) == 0)) {
        native_sub_4327ec(_UnityEngine_Debug_TypeInfo_12d4338);
      }
      native_UnityEngine_Debug__LogWarning_8dcbc8(uVar5,param_1,0);
      native_UnityEngine_Behaviour__set_enabled_8d7b0c(param_1,0,0);
      return;
    }
    lVar13 = *plVar12;
    if (((*(byte *)(_UnityEngine_Object_TypeInfo_12d54e0 + 0x133) >> 2 & 1) != 0) &&
       (*(int *)(_UnityEngine_Object_TypeInfo_12d54e0 + 0xe0) == 0)) {
      native_sub_4327ec();
    }
    uVar4 = native_UnityEngine_Object__op_Implicit_8e1b98(lVar13,0);
    if ((uVar4 & 1) != 0) {
      lVar13 = *plVar12;
      if (lVar13 == 0) goto LAB_009dd300;
      *(long *)(lVar13 + 0x100) = param_1;
      native_sub_4326e0(lVar13 + 0x100,param_1);
    }
    if (*plVar12 == 0) goto LAB_009dd300;
    uVar5 = *(undefined8 *)(*plVar12 + 0x38);
    if (((*(byte *)(_UnityEngine_Object_TypeInfo_12d54e0 + 0x133) >> 2 & 1) != 0) &&
       (*(int *)(_UnityEngine_Object_TypeInfo_12d54e0 + 0xe0) == 0)) {
      native_sub_4327ec();
    }
    uVar4 = native_UnityEngine_Object__op_Inequality_8d76fc(uVar5,0,0);
    if ((uVar4 & 1) != 0) {
      if ((*plVar12 == 0) || (lVar13 = *(long *)(*plVar12 + 0x38), lVar13 == 0)) goto LAB_009dd300;
      unaff_x21 = (long *)(lVar13 + 0x18);
      unaff_x22 = *unaff_x21;
      unaff_x23 = native_sub_432808(_UIProgressBar_OnDragFinished_TypeInfo_12d7a88);
      native_UIProgressBar_OnDragFinished___ctor_558c74
                (unaff_x23,param_1,_Method_UICenterOnChild_OnDragFinished___12e77f0,0);
      plVar6 = (long *)native_System_Delegate__Combine_a6cf00(unaff_x22,unaff_x23,0);
      if ((plVar6 == (long *)0x0) || (*plVar6 == _UIProgressBar_OnDragFinished_TypeInfo_12d7a88)) {
        *unaff_x21 = (long)plVar6;
        native_sub_4326e0(unaff_x21,plVar6);
        goto LAB_009dca78;
      }
LAB_009dd310:
      unaff_x24 = &UIProgressBar_OnDragFinished_TypeInfo_12d7a88;
      lVar13 = native_sub_432b04(plVar6);
      *(long **)((long)register0x00000008 + -0xf0) = plVar12;
      *(long *)((long)register0x00000008 + -0xe8) = param_1;
      *(undefined1 **)((long)register0x00000008 + -0xe0) =
           (undefined1 *)((long)register0x00000008 + -0x10);
      *(code **)((long)register0x00000008 + -0xd8) = native_UICenterOnChild__OnEnable_9dd318;
      if ((bRam00000000013418b1 & 1) == 0) {
        native_sub_43273c(&UnityEngine_Object_TypeInfo_12d54e0);
        bRam00000000013418b1 = 1;
      }
      uVar5 = *(undefined8 *)(lVar13 + 0x30);
      if (((*(byte *)(_UnityEngine_Object_TypeInfo_12d54e0 + 0x133) >> 2 & 1) != 0) &&
         (*(int *)(_UnityEngine_Object_TypeInfo_12d54e0 + 0xe0) == 0)) {
        native_sub_4327ec();
      }
      uVar4 = native_UnityEngine_Object__op_Implicit_8e1b98(uVar5,0);
      if ((uVar4 & 1) == 0) {
        return;
      }
      lVar7 = *(long *)(lVar13 + 0x30);
      if (lVar7 == 0) {
                    /* WARNING: Subroutine does not return */
        native_sub_432810();
      }
      *(long *)(lVar7 + 0x100) = lVar13;
      native_sub_4326e0(lVar7 + 0x100,lVar13);
      unaff_x29 = *(undefined8 *)((long)register0x00000008 + -0xe0);
      unaff_x30 = *(undefined8 *)((long)register0x00000008 + -0xd8);
      unaff_x20 = *(undefined8 *)((long)register0x00000008 + -0xf0);
      unaff_x19 = *(undefined8 *)((long)register0x00000008 + -0xe8);
      register0x00000008 = (BADSPACEBASE *)((long)register0x00000008 + -0xd0);
      param_1 = lVar13;
      goto code_r0x009dc788;
    }
LAB_009dca78:
    if (*plVar12 == 0) goto LAB_009dd300;
    uVar5 = *(undefined8 *)(*plVar12 + 0x40);
    if (((*(byte *)(_UnityEngine_Object_TypeInfo_12d54e0 + 0x133) >> 2 & 1) != 0) &&
       (*(int *)(_UnityEngine_Object_TypeInfo_12d54e0 + 0xe0) == 0)) {
      native_sub_4327ec();
    }
    uVar4 = native_UnityEngine_Object__op_Inequality_8d76fc(uVar5,0,0);
    if ((uVar4 & 1) == 0) goto LAB_009dcb28;
    if ((*plVar12 == 0) || (lVar13 = *(long *)(*plVar12 + 0x40), lVar13 == 0)) goto LAB_009dd300;
    unaff_x21 = (long *)(lVar13 + 0x18);
    unaff_x22 = *unaff_x21;
    unaff_x23 = native_sub_432808(_UIProgressBar_OnDragFinished_TypeInfo_12d7a88);
    native_UIProgressBar_OnDragFinished___ctor_558c74
              (unaff_x23,param_1,_Method_UICenterOnChild_OnDragFinished___12e77f0,0);
    plVar6 = (long *)native_System_Delegate__Combine_a6cf00(unaff_x22,unaff_x23,0);
    if ((plVar6 != (long *)0x0) && (*plVar6 != _UIProgressBar_OnDragFinished_TypeInfo_12d7a88))
    goto LAB_009dd310;
    *unaff_x21 = (long)plVar6;
    native_sub_4326e0(unaff_x21,plVar6);
  }
LAB_009dcb28:
  if (*plVar12 == 0) goto LAB_009dd300;
  uVar5 = *(undefined8 *)(*plVar12 + 0x98);
  if (((*(byte *)(_UnityEngine_Object_TypeInfo_12d54e0 + 0x133) >> 2 & 1) != 0) &&
     (*(int *)(_UnityEngine_Object_TypeInfo_12d54e0 + 0xe0) == 0)) {
    native_sub_4327ec();
  }
  uVar4 = native_UnityEngine_Object__op_Equality_8e9a3c(uVar5,0,0);
  if ((uVar4 & 1) != 0) {
    return;
  }
  lVar13 = native_UnityEngine_Component__get_transform_8da62c(param_1,0);
  if (lVar13 == 0) goto LAB_009dd300;
  iVar3 = native_UnityEngine_Transform__get_childCount_772a64(lVar13,0);
  if (iVar3 == 0) {
    return;
  }
  if (((*plVar12 == 0) || (plVar6 = *(long **)(*plVar12 + 0x98), plVar6 == (long *)0x0)) ||
     (lVar7 = (**(code **)(*plVar6 + 0x1e8))(plVar6,*(undefined8 *)(*plVar6 + 0x1f0)), lVar7 == 0))
  goto LAB_009dd300;
  if (*(uint *)(lVar7 + 0x18) < 3) {
    uVar5 = native_sub_43283c();
                    /* WARNING: Subroutine does not return */
    native_sub_4327dc(uVar5,0);
  }
  lVar11 = *plVar12;
  if (lVar11 == 0) goto LAB_009dd300;
  uVar5 = *(undefined8 *)(lVar7 + 0x38);
  uVar27 = *(undefined8 *)(lVar7 + 0x20);
  fVar29 = *(float *)(lVar11 + 0x2c);
  fVar21 = *(float *)(lVar7 + 0x40);
  fVar28 = *(float *)(lVar7 + 0x28);
  fVar24 = *(float *)(lVar11 + 200) * fVar29;
  uVar4 = (ulong)(uint)fVar24;
  *(ulong *)((long)register0x00000008 + -0xa0) =
       CONCAT44((float)((ulong)*(undefined8 *)(lVar11 + 0xc0) >> 0x20) * fVar29,
                (float)*(undefined8 *)(lVar11 + 0xc0) * fVar29);
  *(float *)((long)register0x00000008 + -0x98) = fVar24;
  bVar2 = *(byte *)(_NGUIMath_TypeInfo_12d53b8 + 0x133);
  *(undefined8 *)((long)register0x00000008 + -200) = 0;
  *(ulong *)((long)register0x00000008 + -0xd0) =
       CONCAT44(((float)((ulong)uVar5 >> 0x20) + (float)((ulong)uVar27 >> 0x20)) * 0.5,
                ((float)uVar5 + (float)uVar27) * 0.5);
  if (((bVar2 >> 2 & 1) != 0) && (*(int *)(_NGUIMath_TypeInfo_12d53b8 + 0xe0) == 0)) {
    native_sub_4327ec();
  }
  uVar23 = 0x40000000;
  fVar29 = (fVar21 + fVar28) * 0.5;
  fVar21 = (float)native_NGUIMath__SpringDampen_80634c
                            (0x41100000,(undefined1 *)((long)register0x00000008 + -0xa0),0);
  uVar5 = *(undefined8 *)((long)register0x00000008 + -0xd0);
  fVar24 = (float)uVar23;
  fVar28 = (float)uVar4;
  lVar7 = native_UnityEngine_Component__GetComponent_ActiveAnimation__49daec
                    (param_1,_Method_UnityEngine_Component_GetComponent_UIGrid____12e2bc0);
  if (((*(byte *)(_UnityEngine_Object_TypeInfo_12d54e0 + 0x133) >> 2 & 1) != 0) &&
     (*(int *)(_UnityEngine_Object_TypeInfo_12d54e0 + 0xe0) == 0)) {
    native_sub_4327ec(_UnityEngine_Object_TypeInfo_12d54e0);
  }
  fVar21 = (float)*(undefined8 *)((long)register0x00000008 + -0xd0) - fVar21 * 0.01;
  fVar24 = (float)((ulong)uVar5 >> 0x20) - fVar24 * 0.01;
  fVar28 = fVar29 - fVar28 * 0.01;
  uVar8 = native_UnityEngine_Object__op_Inequality_8d76fc(lVar7,0,0);
  if ((uVar8 & 1) == 0) {
    iVar3 = native_UnityEngine_Transform__get_childCount_772a64(lVar13,0);
    uVar26 = (undefined4)uVar4;
    fVar22 = (float)uVar23;
    if (0 < iVar3) {
      fVar30 = 3.4028235e+38;
      lVar7 = 0;
      uVar14 = 0;
      uVar15 = 0;
      iVar18 = 0;
      *(undefined4 *)((long)register0x00000008 + -0xb4) = 0;
      goto LAB_009dcdc0;
    }
    lVar11 = 0;
  }
  else {
    if (lVar7 == 0) goto LAB_009dd300;
    lVar11 = native_UIGrid__GetChildList_9dd490(lVar7);
    uVar26 = (undefined4)uVar4;
    fVar22 = (float)uVar23;
    if (lVar11 == 0) goto LAB_009dd300;
    uVar15 = *(uint *)(lVar11 + 0x18);
    if (0 < (int)uVar15) {
      fVar30 = 3.4028235e+38;
      lVar19 = 0;
      lVar7 = 0;
      uVar14 = 0;
      iVar3 = 0;
      *(undefined4 *)((long)register0x00000008 + -0xb4) = 0;
      uVar1 = uVar15;
      goto LAB_009dccf0;
    }
  }
  *(undefined4 *)((long)register0x00000008 + -0xb4) = 0;
  uVar14 = 0;
  lVar7 = 0;
  goto LAB_009dcf28;
LAB_009dccf0:
  uVar17 = (uint)lVar19;
  if (uVar1 <= uVar17) {
    native_System_ThrowHelper__ThrowArgumentOutOfRangeException_9fe0f4(0);
  }
  lVar16 = *(long *)(*(long *)(lVar11 + 0x10) + lVar19 * 8 + 0x20);
  if ((lVar16 == 0) ||
     (lVar9 = native_UnityEngine_Component__get_gameObject_8da66c(lVar16,0), lVar9 == 0))
  goto LAB_009dd300;
  uVar8 = native_UnityEngine_GameObject__get_activeInHierarchy_8de728(lVar9,0);
  fVar25 = (float)uVar4;
  fVar22 = (float)uVar23;
  if ((uVar8 & 1) != 0) {
    fVar20 = (float)native_UnityEngine_Transform__get_position_77169c(lVar16,0);
    fVar20 = fVar20 - fVar21;
    fVar22 = fVar22 - fVar24;
    fVar25 = fVar25 - fVar28;
    uVar4 = (ulong)(uint)fVar25;
    uVar23 = (ulong)(uint)(fVar25 * fVar25);
    fVar22 = fVar25 * fVar25 + fVar20 * fVar20 + fVar22 * fVar22;
    if (fVar22 < fVar30) {
      *(int *)((long)register0x00000008 + -0xb4) = iVar3;
      lVar7 = lVar16;
      uVar14 = uVar17;
      fVar30 = fVar22;
    }
    iVar3 = iVar3 + 1;
  }
  uVar26 = (undefined4)uVar4;
  fVar22 = (float)uVar23;
  if ((int)uVar15 <= (int)(uVar17 + 1)) goto LAB_009dcf28;
  uVar1 = *(uint *)(lVar11 + 0x18);
  lVar19 = lVar19 + 1;
  goto LAB_009dccf0;
  while( true ) {
    uVar8 = native_UnityEngine_GameObject__get_activeInHierarchy_8de728(lVar19,0);
    fVar25 = (float)uVar4;
    fVar22 = (float)uVar23;
    if ((uVar8 & 1) != 0) {
      fVar20 = (float)native_UnityEngine_Transform__get_position_77169c(lVar11,0);
      fVar20 = fVar20 - fVar21;
      fVar22 = fVar22 - fVar24;
      fVar25 = fVar25 - fVar28;
      uVar4 = (ulong)(uint)fVar25;
      uVar23 = (ulong)(uint)(fVar25 * fVar25);
      fVar22 = fVar25 * fVar25 + fVar20 * fVar20 + fVar22 * fVar22;
      if (fVar22 < fVar30) {
        *(int *)((long)register0x00000008 + -0xb4) = iVar18;
        lVar7 = lVar11;
        uVar14 = uVar15;
        fVar30 = fVar22;
      }
      iVar18 = iVar18 + 1;
    }
    uVar26 = (undefined4)uVar4;
    fVar22 = (float)uVar23;
    uVar15 = uVar15 + 1;
    if (iVar3 <= (int)uVar15) break;
LAB_009dcdc0:
    lVar11 = native_UnityEngine_Transform__GetChild_772ef0(lVar13,uVar15,0);
    if ((lVar11 == 0) ||
       (lVar19 = native_UnityEngine_Component__get_gameObject_8da66c(lVar11,0), lVar19 == 0))
    goto LAB_009dd300;
  }
  lVar11 = 0;
LAB_009dcf28:
  if (*(float *)(param_1 + 0x1c) <= 0.0) goto LAB_009dd2bc;
  if (((*(byte *)(_UICamera_TypeInfo_12d6410 + 0x133) >> 2 & 1) != 0) &&
     (*(int *)(_UICamera_TypeInfo_12d6410 + 0xe0) == 0)) {
    native_sub_4327ec();
  }
  if (*(long *)(*(long *)(_UICamera_TypeInfo_12d6410 + 0xb8) + 0xe0) == 0) goto LAB_009dd2bc;
  uVar27 = *(undefined8 *)(param_1 + 0x38);
  if (((*(byte *)(_UnityEngine_Object_TypeInfo_12d54e0 + 0x133) >> 2 & 1) != 0) &&
     (*(int *)(_UnityEngine_Object_TypeInfo_12d54e0 + 0xe0) == 0)) {
    native_sub_4327ec();
  }
  uVar4 = native_UnityEngine_Object__op_Inequality_8d76fc(uVar27,0,0);
  if ((uVar4 & 1) == 0) goto LAB_009dd2bc;
  if (*(long *)(param_1 + 0x38) == 0) goto LAB_009dd300;
  uVar27 = native_UnityEngine_GameObject__get_transform_8de5c8(*(long *)(param_1 + 0x38),0);
  if (lVar11 == 0) {
    uVar10 = native_UnityEngine_Transform__GetChild_772ef0(lVar13,uVar14,0);
  }
  else {
    if (*(uint *)(lVar11 + 0x18) <= uVar14) {
      native_System_ThrowHelper__ThrowArgumentOutOfRangeException_9fe0f4(0);
    }
    uVar10 = *(undefined8 *)(*(long *)(lVar11 + 0x10) + (long)(int)uVar14 * 8 + 0x20);
  }
  if (((*(byte *)(_UnityEngine_Object_TypeInfo_12d54e0 + 0x133) >> 2 & 1) != 0) &&
     (*(int *)(_UnityEngine_Object_TypeInfo_12d54e0 + 0xe0) == 0)) {
    native_sub_4327ec();
  }
  uVar4 = native_UnityEngine_Object__op_Equality_8e9a3c(uVar27,uVar10,0);
  if ((uVar4 & 1) == 0) goto LAB_009dd2bc;
  if (((*(byte *)(_UICamera_TypeInfo_12d6410 + 0x133) >> 2 & 1) != 0) &&
     (*(int *)(_UICamera_TypeInfo_12d6410 + 0xe0) == 0)) {
    native_sub_4327ec();
  }
  lVar19 = *(long *)(*(long *)(_UICamera_TypeInfo_12d6410 + 0xb8) + 0xe0);
  if (lVar19 == 0) {
LAB_009dd300:
                    /* WARNING: Subroutine does not return */
    native_sub_432810();
  }
  uVar27 = *(undefined8 *)(lVar19 + 0x2c);
  *(undefined4 *)((long)register0x00000008 + -0xa8) = 0;
  *(undefined8 *)((long)register0x00000008 + -0xb0) = uVar27;
  lVar19 = native_UnityEngine_Component__get_transform_8da62c(param_1,0);
  if (lVar19 == 0) goto LAB_009dd300;
  native_UnityEngine_Transform__get_rotation_771a30(lVar19,0);
  fVar21 = (float)native_UnityEngine_Quaternion__op_Multiply_7629c0(0);
  *(float *)((long)register0x00000008 + -0xb0) = fVar21;
  *(float *)((long)register0x00000008 + -0xac) = fVar22;
  *(undefined4 *)((long)register0x00000008 + -0xa8) = uVar26;
  if (*plVar12 == 0) goto LAB_009dd300;
  iVar3 = *(int *)(*plVar12 + 0x18);
  if (iVar3 != 0) {
    if (iVar3 == 1) {
      fVar21 = -fVar22;
    }
    else {
      fVar21 = (float)native_UnityEngine_Vector3__get_magnitude_77684c
                                ((undefined1 *)((long)register0x00000008 + -0xb0),0);
    }
  }
  fVar24 = *(float *)(param_1 + 0x1c);
  if (ABS(fVar21) <= fVar24) goto LAB_009dd2bc;
  if (fVar21 <= fVar24) {
    if (-fVar24 <= fVar21) goto LAB_009dd2bc;
    if (lVar11 != 0) {
      uVar15 = *(uint *)(lVar11 + 0x18);
      if ((int)(uVar15 - 1) <= *(int *)((long)register0x00000008 + -0xb4)) {
        uVar27 = native_UnityEngine_Component__GetComponent_ActiveAnimation__49daec
                           (param_1,
                            _Method_UnityEngine_Component_GetComponent_UIWrapContent____12e2c38);
        if (((*(byte *)(_UnityEngine_Object_TypeInfo_12d54e0 + 0x133) >> 2 & 1) != 0) &&
           (*(int *)(_UnityEngine_Object_TypeInfo_12d54e0 + 0xe0) == 0)) {
          native_sub_4327ec(_UnityEngine_Object_TypeInfo_12d54e0);
        }
        uVar4 = native_UnityEngine_Object__op_Equality_8e9a3c(uVar27,0,0);
        iVar3 = *(int *)(lVar11 + 0x18);
        if ((uVar4 & 1) != 0) goto LAB_009dd248;
        goto LAB_009dd1c0;
      }
      uVar14 = *(int *)((long)register0x00000008 + -0xb4) + 1;
      goto LAB_009dd0f8;
    }
    iVar3 = native_UnityEngine_Transform__get_childCount_772a64(lVar13,0);
    if (iVar3 + -1 <= *(int *)((long)register0x00000008 + -0xb4)) {
      uVar27 = native_UnityEngine_Component__GetComponent_ActiveAnimation__49daec
                         (param_1,
                          _Method_UnityEngine_Component_GetComponent_UIWrapContent____12e2c38);
      if (((*(byte *)(_UnityEngine_Object_TypeInfo_12d54e0 + 0x133) >> 2 & 1) != 0) &&
         (*(int *)(_UnityEngine_Object_TypeInfo_12d54e0 + 0xe0) == 0)) {
        native_sub_4327ec(_UnityEngine_Object_TypeInfo_12d54e0);
      }
      uVar4 = native_UnityEngine_Object__op_Equality_8e9a3c(uVar27,0,0);
      if ((uVar4 & 1) != 0) goto LAB_009dd29c;
      goto LAB_009dd168;
    }
    iVar3 = *(int *)((long)register0x00000008 + -0xb4) + 1;
  }
  else {
    if (lVar11 != 0) {
      uVar14 = *(int *)((long)register0x00000008 + -0xb4) - 1;
      if (*(int *)((long)register0x00000008 + -0xb4) < 1) {
        uVar27 = native_UnityEngine_Component__GetComponent_ActiveAnimation__49daec
                           (param_1,
                            _Method_UnityEngine_Component_GetComponent_UIWrapContent____12e2c38);
        if (((*(byte *)(_UnityEngine_Object_TypeInfo_12d54e0 + 0x133) >> 2 & 1) != 0) &&
           (*(int *)(_UnityEngine_Object_TypeInfo_12d54e0 + 0xe0) == 0)) {
          native_sub_4327ec(_UnityEngine_Object_TypeInfo_12d54e0);
        }
        uVar4 = native_UnityEngine_Object__op_Equality_8e9a3c(uVar27,0,0);
        iVar3 = *(int *)(lVar11 + 0x18);
        if ((uVar4 & 1) == 0) {
LAB_009dd248:
          uVar14 = iVar3 - 1;
          if (iVar3 == 0) goto LAB_009dd100;
          goto LAB_009dd108;
        }
LAB_009dd1c0:
        if (iVar3 == 0) {
          native_System_ThrowHelper__ThrowArgumentOutOfRangeException_9fe0f4(0);
        }
        lVar13 = *(long *)(lVar11 + 0x10);
      }
      else {
        uVar15 = *(uint *)(lVar11 + 0x18);
LAB_009dd0f8:
        if (uVar15 <= uVar14) {
LAB_009dd100:
          native_System_ThrowHelper__ThrowArgumentOutOfRangeException_9fe0f4(0);
        }
LAB_009dd108:
        lVar13 = *(long *)(lVar11 + 0x10) + (long)(int)uVar14 * 8;
      }
      lVar7 = *(long *)(lVar13 + 0x20);
      goto LAB_009dd2bc;
    }
    iVar3 = *(int *)((long)register0x00000008 + -0xb4) + -1;
    if (*(int *)((long)register0x00000008 + -0xb4) < 1) {
      uVar27 = native_UnityEngine_Component__GetComponent_ActiveAnimation__49daec
                         (param_1,
                          _Method_UnityEngine_Component_GetComponent_UIWrapContent____12e2c38);
      if (((*(byte *)(_UnityEngine_Object_TypeInfo_12d54e0 + 0x133) >> 2 & 1) != 0) &&
         (*(int *)(_UnityEngine_Object_TypeInfo_12d54e0 + 0xe0) == 0)) {
        native_sub_4327ec(_UnityEngine_Object_TypeInfo_12d54e0);
      }
      uVar4 = native_UnityEngine_Object__op_Equality_8e9a3c(uVar27,0,0);
      if ((uVar4 & 1) == 0) {
LAB_009dd29c:
        iVar3 = native_UnityEngine_Transform__get_childCount_772a64(lVar13,0);
        iVar3 = iVar3 + -1;
      }
      else {
LAB_009dd168:
        iVar3 = 0;
      }
    }
  }
  lVar7 = native_UnityEngine_Transform__GetChild_772ef0(lVar13,iVar3,0);
LAB_009dd2bc:
  native_UICenterOnChild__CenterOn_9dd7e8
            (*(undefined8 *)((long)register0x00000008 + -0xd0),(float)((ulong)uVar5 >> 0x20),fVar29,
             param_1,lVar7);
  return;
}



/* UICenterOnChild$$CenterOn @ 0x9dd7e8
 * void UICenterOnChild__CenterOn (UICenterOnChild_o* __this, UnityEngine_Transform_o* target, UnityEngine_Vector3_o panelCenter, const MethodInfo* method); */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* UICenterOnChild$$CenterOn
   void UICenterOnChild__CenterOn (UICenterOnChild_o* __this, UnityEngine_Transform_o* target,
   UnityEngine_Vector3_o panelCenter, const MethodInfo* method); */

void native_UICenterOnChild__CenterOn_9dd7e8
               (undefined8 param_1,float param_2,float param_3,long param_4,long param_5)

{
  long *plVar1;
  ushort uVar2;
  bool bVar3;
  long lVar4;
  ulong uVar5;
  ulong uVar6;
  long lVar7;
  undefined8 *puVar8;
  long *plVar9;
  double dVar10;
  long lVar11;
  int *piVar12;
  undefined8 uVar13;
  code *pcVar14;
  long lVar15;
  double *pdVar16;
  float fVar17;
  float fVar18;
  double dVar19;
  float fVar20;
  float fVar21;
  double dStack_58;
  
  fVar20 = param_2;
  if ((bRam00000000013418b4 & 1) == 0) {
    native_sub_43273c(&UnityEngine_Object_TypeInfo_12d54e0);
    bRam00000000013418b4 = 1;
  }
  if (((*(byte *)(_UnityEngine_Object_TypeInfo_12d54e0 + 0x133) >> 2 & 1) != 0) &&
     (*(int *)(_UnityEngine_Object_TypeInfo_12d54e0 + 0xe0) == 0)) {
    native_sub_4327ec();
  }
  uVar6 = native_UnityEngine_Object__op_Inequality_8d76fc(param_5,0,0);
  if ((uVar6 & 1) != 0) {
    uVar13 = *(undefined8 *)(param_4 + 0x30);
    if (((*(byte *)(_UnityEngine_Object_TypeInfo_12d54e0 + 0x133) >> 2 & 1) != 0) &&
       (*(int *)(_UnityEngine_Object_TypeInfo_12d54e0 + 0xe0) == 0)) {
      native_sub_4327ec();
    }
    uVar6 = native_UnityEngine_Object__op_Inequality_8d76fc(uVar13,0,0);
    if ((uVar6 & 1) != 0) {
      if (*(long *)(param_4 + 0x30) == 0) goto LAB_009ddba0;
      uVar13 = *(undefined8 *)(*(long *)(param_4 + 0x30) + 0x98);
      if (((*(byte *)(_UnityEngine_Object_TypeInfo_12d54e0 + 0x133) >> 2 & 1) != 0) &&
         (*(int *)(_UnityEngine_Object_TypeInfo_12d54e0 + 0xe0) == 0)) {
        native_sub_4327ec();
      }
      uVar6 = native_UnityEngine_Object__op_Inequality_8d76fc(uVar13,0,0);
      if ((uVar6 & 1) != 0) {
        if (((*(long *)(param_4 + 0x30) == 0) ||
            (lVar7 = *(long *)(*(long *)(param_4 + 0x30) + 0x98), lVar7 == 0)) ||
           (lVar7 = native_UIRect__get_cachedTransform_c27c58(lVar7,0), param_5 == 0))
        goto LAB_009ddba0;
        uVar13 = native_UnityEngine_Component__get_gameObject_8da66c(param_5,0);
        *(undefined8 *)(param_4 + 0x38) = uVar13;
        native_sub_4326e0();
        native_UnityEngine_Transform__get_position_77169c(param_5,0);
        if (lVar7 == 0) goto LAB_009ddba0;
        fVar17 = (float)native_UnityEngine_Transform__InverseTransformPoint_7729a0(lVar7,0);
        fVar18 = (float)native_UnityEngine_Transform__InverseTransformPoint_7729a0(param_1,lVar7,0);
        if (*(long *)(param_4 + 0x30) == 0) goto LAB_009ddba0;
        fVar21 = param_2;
        uVar6 = native_UIScrollView__get_canMoveHorizontally_c318a8(*(long *)(param_4 + 0x30),0);
        if (*(long *)(param_4 + 0x30) == 0) goto LAB_009ddba0;
        fVar17 = fVar17 - fVar18;
        fVar20 = fVar20 - param_2;
        if ((uVar6 & 1) == 0) {
          fVar17 = 0.0;
        }
        uVar6 = native_UIScrollView__get_canMoveVertically_c318e0(*(long *)(param_4 + 0x30),0);
        if ((uVar6 & 1) == 0) {
          fVar20 = 0.0;
        }
        fVar18 = (float)native_UnityEngine_Transform__get_localPosition_7717f4(lVar7,0);
        fVar18 = fVar18 - fVar17;
        fVar21 = fVar21 - fVar20;
        dVar19 = (double)func_0x002c9600((double)fVar18,&dStack_58);
        if (0.0 <= fVar18) {
          if (dVar19 == 0.5) {
            fVar20 = 1.0;
            goto LAB_009dda44;
          }
          fVar18 = (float)(int)(fVar18 + 0.5);
        }
        else if (dVar19 == -0.5) {
          fVar20 = -1.0;
LAB_009dda44:
          fVar18 = (float)dStack_58;
          if (((long)dStack_58 & 1U) != 0) {
            fVar18 = (float)dStack_58 + fVar20;
          }
        }
        else {
          fVar18 = (float)(int)(fVar18 + -0.5);
        }
        dVar19 = (double)func_0x002c9600((double)fVar21,&dStack_58);
        if (0.0 <= fVar21) {
          if (dVar19 == 0.5) {
            fVar20 = 1.0;
            goto LAB_009ddab8;
          }
          fVar17 = (float)(int)(fVar21 + 0.5);
        }
        else if (dVar19 == -0.5) {
          fVar20 = -1.0;
LAB_009ddab8:
          fVar17 = (float)dStack_58;
          if (((long)dStack_58 & 1U) != 0) {
            fVar17 = (float)dStack_58 + fVar20;
          }
        }
        else {
          fVar17 = (float)(int)(fVar21 + -0.5);
        }
        dVar19 = (double)func_0x002c9600((double)param_3,&dStack_58);
        if (0.0 <= param_3) {
          if (dVar19 == 0.5) {
            fVar20 = 1.0;
            goto LAB_009ddb2c;
          }
          fVar21 = (float)(int)(param_3 + 0.5);
        }
        else if (dVar19 == -0.5) {
          fVar20 = -1.0;
LAB_009ddb2c:
          fVar21 = (float)dStack_58;
          if (((long)dStack_58 & 1U) != 0) {
            fVar21 = (float)dStack_58 + fVar20;
          }
        }
        else {
          fVar21 = (float)(int)(param_3 + -0.5);
        }
        if ((*(long *)(param_4 + 0x30) == 0) ||
           (lVar7 = *(long *)(*(long *)(param_4 + 0x30) + 0x98), lVar7 == 0)) {
LAB_009ddba0:
                    /* WARNING: Subroutine does not return */
          native_sub_432810();
        }
        uVar13 = native_UIRect__get_cachedGameObject_c2d1c0(lVar7,0);
        lVar7 = native_SpringPanel__Begin_73ea10
                          (fVar18,fVar17,fVar21,*(undefined4 *)(param_4 + 0x18),uVar13,0);
        if (lVar7 == 0) goto LAB_009ddba0;
        uVar13 = *(undefined8 *)(param_4 + 0x20);
        puVar8 = (undefined8 *)(lVar7 + 0x28);
        *puVar8 = uVar13;
        goto LAB_009dd9e4;
      }
    }
  }
  puVar8 = (undefined8 *)(param_4 + 0x38);
  *puVar8 = 0;
  uVar13 = 0;
LAB_009dd9e4:
  native_sub_4326e0(puVar8,uVar13);
  dVar19 = *(double *)(param_4 + 0x28);
  if (dVar19 == 0.0) {
    return;
  }
  plVar9 = *(long **)(param_4 + 0x38);
  dStack_58 = dVar19;
  lVar7 = *(long *)((long)dVar19 + 0x68);
  if (lVar7 == 0) {
    pdVar16 = &dStack_58;
    lVar15 = 1;
  }
  else {
    lVar15 = *(long *)(lVar7 + 0x18);
    if (lVar15 == 0) {
      return;
    }
    pdVar16 = (double *)(lVar7 + 0x20);
  }
  lVar7 = 0;
  do {
    dVar10 = pdVar16[lVar7];
    plVar1 = *(long **)((long)dVar10 + 0x20);
    lVar4 = *(long *)((long)dVar10 + 0x28);
    pcVar14 = *(code **)((long)dVar10 + 0x10);
    if (*(short *)(lVar4 + 0x48) == -1) {
      native_sub_4327f4(lVar4);
    }
    uVar6 = native_sub_432768(lVar4);
    bVar3 = *(char *)(lVar4 + 0x4a) != '\x01';
    if ((uVar6 & 1) == 0) {
      if (bVar3) {
        if ((*(short *)(lVar4 + 0x48) == -1) || (*(long *)((long)dVar19 + 0x18) == 0))
        goto LAB_005543d8;
        uVar6 = native_sub_432760(lVar4);
        uVar5 = native_sub_432b64(lVar4);
        if ((uVar6 & 1) == 0) {
          uVar2 = *(ushort *)(lVar4 + 0x48);
          if ((uVar5 & 1) == 0) {
            lVar4 = *plVar9 + (ulong)uVar2 * 0x10;
            (**(code **)(lVar4 + 0x138))(plVar9,*(undefined8 *)(lVar4 + 0x140));
            goto LAB_005543e4;
          }
          lVar4 = native_sub_432764(lVar4);
          lVar11 = *plVar9;
          if ((ulong)*(ushort *)(lVar11 + 0x12a) != 0) {
            uVar6 = 0;
            piVar12 = (int *)(*(long *)(lVar11 + 0xb0) + 8);
            do {
              if (*(long *)(piVar12 + -2) == lVar4) {
                puVar8 = (undefined8 *)(lVar11 + (long)(int)(*piVar12 + (uint)uVar2) * 0x10 + 0x138)
                ;
                goto LAB_0055420c;
              }
              uVar6 = uVar6 + 1;
              piVar12 = piVar12 + 4;
            } while (uVar6 < *(ushort *)(lVar11 + 0x12a));
          }
          puVar8 = (undefined8 *)native_sub_3c9b34(plVar9,lVar4,(ulong)uVar2);
LAB_0055420c:
          pcVar14 = (code *)*puVar8;
          puVar8 = (undefined8 *)puVar8[1];
        }
        else {
          if ((uVar5 & 1) == 0) {
            uVar13 = *(undefined8 *)(*plVar9 + (ulong)*(ushort *)(lVar4 + 0x48) * 0x10 + 0x140);
          }
          else {
            lVar11 = *plVar9;
            if ((ulong)*(ushort *)(lVar11 + 0x12a) != 0) {
              uVar6 = 0;
              piVar12 = (int *)(*(long *)(lVar11 + 0xb0) + 8);
              do {
                if (*(long *)(piVar12 + -2) == *(long *)(lVar4 + 0x18)) {
                  lVar11 = lVar11 + (long)(int)(*piVar12 + (uint)*(ushort *)(lVar4 + 0x48)) * 0x10 +
                           0x138;
                  goto LAB_005541e4;
                }
                uVar6 = uVar6 + 1;
                piVar12 = piVar12 + 4;
              } while (uVar6 < *(ushort *)(lVar11 + 0x12a));
            }
            lVar11 = native_sub_3c9b34(plVar9);
LAB_005541e4:
            uVar13 = *(undefined8 *)(lVar11 + 8);
          }
          puVar8 = (undefined8 *)native_sub_4327e8(uVar13,lVar4);
          pcVar14 = (code *)*puVar8;
        }
        (*pcVar14)(plVar9,puVar8);
      }
      else {
        if ((((plVar1 == (long *)0x0) || (*(short *)(lVar4 + 0x48) == -1)) ||
            ((*(byte *)(*plVar1 + 0x115) & 1) != 0)) || (*(long *)((long)dVar19 + 0x18) == 0))
        goto LAB_0055434c;
        uVar6 = native_sub_432760(lVar4);
        uVar5 = native_sub_432b64(lVar4);
        if ((uVar6 & 1) == 0) {
          uVar2 = *(ushort *)(lVar4 + 0x48);
          if ((uVar5 & 1) == 0) {
            lVar4 = *plVar1 + (ulong)uVar2 * 0x10;
            (**(code **)(lVar4 + 0x138))(plVar1,plVar9,*(undefined8 *)(lVar4 + 0x140));
            goto LAB_005543e4;
          }
          lVar4 = native_sub_432764(lVar4);
          lVar11 = *plVar1;
          if ((ulong)*(ushort *)(lVar11 + 0x12a) != 0) {
            uVar6 = 0;
            piVar12 = (int *)(*(long *)(lVar11 + 0xb0) + 8);
            do {
              if (*(long *)(piVar12 + -2) == lVar4) {
                puVar8 = (undefined8 *)(lVar11 + (long)(int)(*piVar12 + (uint)uVar2) * 0x10 + 0x138)
                ;
                goto LAB_00554270;
              }
              uVar6 = uVar6 + 1;
              piVar12 = piVar12 + 4;
            } while (uVar6 < *(ushort *)(lVar11 + 0x12a));
          }
          puVar8 = (undefined8 *)native_sub_3c9b34(plVar1,lVar4,(ulong)uVar2);
LAB_00554270:
          pcVar14 = (code *)*puVar8;
          puVar8 = (undefined8 *)puVar8[1];
        }
        else {
          if ((uVar5 & 1) == 0) {
            uVar13 = *(undefined8 *)(*plVar1 + (ulong)*(ushort *)(lVar4 + 0x48) * 0x10 + 0x140);
          }
          else {
            lVar11 = *plVar1;
            if ((ulong)*(ushort *)(lVar11 + 0x12a) != 0) {
              uVar6 = 0;
              piVar12 = (int *)(*(long *)(lVar11 + 0xb0) + 8);
              do {
                if (*(long *)(piVar12 + -2) == *(long *)(lVar4 + 0x18)) {
                  lVar11 = lVar11 + (long)(int)(*piVar12 + (uint)*(ushort *)(lVar4 + 0x48)) * 0x10 +
                           0x138;
                  goto LAB_00554248;
                }
                uVar6 = uVar6 + 1;
                piVar12 = piVar12 + 4;
              } while (uVar6 < *(ushort *)(lVar11 + 0x12a));
            }
            lVar11 = native_sub_3c9b34(plVar1);
LAB_00554248:
            uVar13 = *(undefined8 *)(lVar11 + 8);
          }
          puVar8 = (undefined8 *)native_sub_4327e8(uVar13,lVar4);
          pcVar14 = (code *)*puVar8;
        }
        (*pcVar14)(plVar1,plVar9,puVar8);
      }
    }
    else if (bVar3) {
LAB_0055434c:
      (*pcVar14)(plVar1,plVar9,lVar4);
    }
    else {
LAB_005543d8:
      (*pcVar14)(plVar9,lVar4);
    }
LAB_005543e4:
    lVar7 = lVar7 + 1;
    if (lVar7 == lVar15) {
      return;
    }
  } while( true );
}



/* UICenterOnChild$$CenterOn @ 0x9ddba4
 * void UICenterOnChild__CenterOn (UICenterOnChild_o* __this, UnityEngine_Transform_o* target, const MethodInfo* method); */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* UICenterOnChild$$CenterOn
   void UICenterOnChild__CenterOn (UICenterOnChild_o* __this, UnityEngine_Transform_o* target, const
   MethodInfo* method); */

void native_UICenterOnChild__CenterOn_9ddba4(long param_1,long param_2)

{
  long *plVar1;
  ushort uVar2;
  bool bVar3;
  long lVar4;
  ulong uVar5;
  undefined8 *puVar6;
  ulong uVar7;
  long *plVar8;
  long lVar9;
  double dVar10;
  long lVar11;
  int *piVar12;
  undefined8 uVar13;
  undefined8 uVar14;
  code *pcVar15;
  long lVar16;
  double *pdVar17;
  float fVar18;
  float fVar19;
  double dVar20;
  float fVar21;
  undefined8 uVar22;
  float fVar23;
  float fVar24;
  float fVar25;
  double dStack_58;
  
  if ((bRam00000000013418b5 & 1) == 0) {
    native_sub_43273c(&UnityEngine_Object_TypeInfo_12d54e0);
    bRam00000000013418b5 = 1;
  }
  uVar14 = *(undefined8 *)(param_1 + 0x30);
  if (((*(byte *)(_UnityEngine_Object_TypeInfo_12d54e0 + 0x133) >> 2 & 1) != 0) &&
     (*(int *)(_UnityEngine_Object_TypeInfo_12d54e0 + 0xe0) == 0)) {
    native_sub_4327ec();
  }
  uVar7 = native_UnityEngine_Object__op_Inequality_8d76fc(uVar14,0,0);
  if ((uVar7 & 1) == 0) {
    return;
  }
  if (*(long *)(param_1 + 0x30) == 0) {
LAB_009ddccc:
                    /* WARNING: Subroutine does not return */
    native_sub_432810();
  }
  uVar14 = *(undefined8 *)(*(long *)(param_1 + 0x30) + 0x98);
  if (((*(byte *)(_UnityEngine_Object_TypeInfo_12d54e0 + 0x133) >> 2 & 1) != 0) &&
     (*(int *)(_UnityEngine_Object_TypeInfo_12d54e0 + 0xe0) == 0)) {
    native_sub_4327ec();
  }
  uVar7 = native_UnityEngine_Object__op_Inequality_8d76fc(uVar14,0,0);
  if ((uVar7 & 1) == 0) {
    return;
  }
  if (((*(long *)(param_1 + 0x30) == 0) ||
      (plVar8 = *(long **)(*(long *)(param_1 + 0x30) + 0x98), plVar8 == (long *)0x0)) ||
     (lVar9 = (**(code **)(*plVar8 + 0x1e8))(plVar8,*(undefined8 *)(*plVar8 + 0x1f0)), lVar9 == 0))
  goto LAB_009ddccc;
  if (*(uint *)(lVar9 + 0x18) < 3) {
    uVar14 = native_sub_43283c();
                    /* WARNING: Subroutine does not return */
    native_sub_4327dc(uVar14,0);
  }
  uVar14 = *(undefined8 *)(lVar9 + 0x38);
  uVar22 = *(undefined8 *)(lVar9 + 0x20);
  fVar21 = ((float)((ulong)uVar14 >> 0x20) + (float)((ulong)uVar22 >> 0x20)) * 0.5;
  fVar23 = (*(float *)(lVar9 + 0x40) + *(float *)(lVar9 + 0x28)) * 0.5;
  fVar24 = fVar21;
  if ((bRam00000000013418b4 & 1) == 0) {
    native_sub_43273c(&UnityEngine_Object_TypeInfo_12d54e0);
    bRam00000000013418b4 = 1;
  }
  if (((*(byte *)(_UnityEngine_Object_TypeInfo_12d54e0 + 0x133) >> 2 & 1) != 0) &&
     (*(int *)(_UnityEngine_Object_TypeInfo_12d54e0 + 0xe0) == 0)) {
    native_sub_4327ec();
  }
  uVar7 = native_UnityEngine_Object__op_Inequality_8d76fc(param_2,0,0);
  if ((uVar7 & 1) != 0) {
    uVar13 = *(undefined8 *)(param_1 + 0x30);
    if (((*(byte *)(_UnityEngine_Object_TypeInfo_12d54e0 + 0x133) >> 2 & 1) != 0) &&
       (*(int *)(_UnityEngine_Object_TypeInfo_12d54e0 + 0xe0) == 0)) {
      native_sub_4327ec();
    }
    uVar7 = native_UnityEngine_Object__op_Inequality_8d76fc(uVar13,0,0);
    if ((uVar7 & 1) != 0) {
      if (*(long *)(param_1 + 0x30) == 0) goto LAB_009ddba0;
      uVar13 = *(undefined8 *)(*(long *)(param_1 + 0x30) + 0x98);
      if (((*(byte *)(_UnityEngine_Object_TypeInfo_12d54e0 + 0x133) >> 2 & 1) != 0) &&
         (*(int *)(_UnityEngine_Object_TypeInfo_12d54e0 + 0xe0) == 0)) {
        native_sub_4327ec();
      }
      uVar7 = native_UnityEngine_Object__op_Inequality_8d76fc(uVar13,0,0);
      if ((uVar7 & 1) != 0) {
        if (((*(long *)(param_1 + 0x30) == 0) ||
            (lVar9 = *(long *)(*(long *)(param_1 + 0x30) + 0x98), lVar9 == 0)) ||
           (lVar9 = native_UIRect__get_cachedTransform_c27c58(lVar9,0), param_2 == 0))
        goto LAB_009ddba0;
        uVar13 = native_UnityEngine_Component__get_gameObject_8da66c(param_2,0);
        *(undefined8 *)(param_1 + 0x38) = uVar13;
        native_sub_4326e0();
        native_UnityEngine_Transform__get_position_77169c(param_2,0);
        if (lVar9 == 0) goto LAB_009ddba0;
        fVar18 = (float)native_UnityEngine_Transform__InverseTransformPoint_7729a0(lVar9,0);
        fVar19 = (float)native_UnityEngine_Transform__InverseTransformPoint_7729a0
                                  (CONCAT44(fVar21,((float)uVar14 + (float)uVar22) * 0.5),lVar9,0);
        if (*(long *)(param_1 + 0x30) == 0) goto LAB_009ddba0;
        fVar25 = fVar21;
        uVar7 = native_UIScrollView__get_canMoveHorizontally_c318a8(*(long *)(param_1 + 0x30),0);
        if (*(long *)(param_1 + 0x30) == 0) goto LAB_009ddba0;
        fVar18 = fVar18 - fVar19;
        fVar24 = fVar24 - fVar21;
        if ((uVar7 & 1) == 0) {
          fVar18 = 0.0;
        }
        uVar7 = native_UIScrollView__get_canMoveVertically_c318e0(*(long *)(param_1 + 0x30),0);
        if ((uVar7 & 1) == 0) {
          fVar24 = 0.0;
        }
        fVar21 = (float)native_UnityEngine_Transform__get_localPosition_7717f4(lVar9,0);
        fVar21 = fVar21 - fVar18;
        fVar25 = fVar25 - fVar24;
        dVar20 = (double)func_0x002c9600((double)fVar21,&dStack_58);
        if (0.0 <= fVar21) {
          if (dVar20 == 0.5) {
            fVar24 = 1.0;
            goto LAB_009dda44;
          }
          fVar21 = (float)(int)(fVar21 + 0.5);
        }
        else if (dVar20 == -0.5) {
          fVar24 = -1.0;
LAB_009dda44:
          fVar21 = (float)dStack_58;
          if (((long)dStack_58 & 1U) != 0) {
            fVar21 = (float)dStack_58 + fVar24;
          }
        }
        else {
          fVar21 = (float)(int)(fVar21 + -0.5);
        }
        dVar20 = (double)func_0x002c9600((double)fVar25,&dStack_58);
        if (0.0 <= fVar25) {
          if (dVar20 == 0.5) {
            fVar24 = 1.0;
            goto LAB_009ddab8;
          }
          fVar19 = (float)(int)(fVar25 + 0.5);
        }
        else if (dVar20 == -0.5) {
          fVar24 = -1.0;
LAB_009ddab8:
          fVar19 = (float)dStack_58;
          if (((long)dStack_58 & 1U) != 0) {
            fVar19 = (float)dStack_58 + fVar24;
          }
        }
        else {
          fVar19 = (float)(int)(fVar25 + -0.5);
        }
        dVar20 = (double)func_0x002c9600((double)fVar23,&dStack_58);
        if (0.0 <= fVar23) {
          if (dVar20 == 0.5) {
            fVar24 = 1.0;
            goto LAB_009ddb2c;
          }
          fVar23 = (float)(int)(fVar23 + 0.5);
        }
        else if (dVar20 == -0.5) {
          fVar24 = -1.0;
LAB_009ddb2c:
          fVar23 = (float)dStack_58;
          if (((long)dStack_58 & 1U) != 0) {
            fVar23 = (float)dStack_58 + fVar24;
          }
        }
        else {
          fVar23 = (float)(int)(fVar23 + -0.5);
        }
        if ((*(long *)(param_1 + 0x30) == 0) ||
           (lVar9 = *(long *)(*(long *)(param_1 + 0x30) + 0x98), lVar9 == 0)) {
LAB_009ddba0:
                    /* WARNING: Subroutine does not return */
          native_sub_432810();
        }
        uVar14 = native_UIRect__get_cachedGameObject_c2d1c0(lVar9,0);
        lVar9 = native_SpringPanel__Begin_73ea10
                          (fVar21,fVar19,fVar23,*(undefined4 *)(param_1 + 0x18),uVar14,0);
        if (lVar9 == 0) goto LAB_009ddba0;
        uVar14 = *(undefined8 *)(param_1 + 0x20);
        puVar6 = (undefined8 *)(lVar9 + 0x28);
        *puVar6 = uVar14;
        goto LAB_009dd9e4;
      }
    }
  }
  puVar6 = (undefined8 *)(param_1 + 0x38);
  *puVar6 = 0;
  uVar14 = 0;
LAB_009dd9e4:
  native_sub_4326e0(puVar6,uVar14);
  dVar20 = *(double *)(param_1 + 0x28);
  if (dVar20 == 0.0) {
    return;
  }
  plVar8 = *(long **)(param_1 + 0x38);
  dStack_58 = dVar20;
  lVar9 = *(long *)((long)dVar20 + 0x68);
  if (lVar9 == 0) {
    pdVar17 = &dStack_58;
    lVar16 = 1;
  }
  else {
    lVar16 = *(long *)(lVar9 + 0x18);
    if (lVar16 == 0) {
      return;
    }
    pdVar17 = (double *)(lVar9 + 0x20);
  }
  lVar9 = 0;
  do {
    dVar10 = pdVar17[lVar9];
    plVar1 = *(long **)((long)dVar10 + 0x20);
    lVar4 = *(long *)((long)dVar10 + 0x28);
    pcVar15 = *(code **)((long)dVar10 + 0x10);
    if (*(short *)(lVar4 + 0x48) == -1) {
      native_sub_4327f4(lVar4);
    }
    uVar7 = native_sub_432768(lVar4);
    bVar3 = *(char *)(lVar4 + 0x4a) != '\x01';
    if ((uVar7 & 1) == 0) {
      if (bVar3) {
        if ((*(short *)(lVar4 + 0x48) == -1) || (*(long *)((long)dVar20 + 0x18) == 0))
        goto LAB_005543d8;
        uVar7 = native_sub_432760(lVar4);
        uVar5 = native_sub_432b64(lVar4);
        if ((uVar7 & 1) == 0) {
          uVar2 = *(ushort *)(lVar4 + 0x48);
          if ((uVar5 & 1) == 0) {
            lVar4 = *plVar8 + (ulong)uVar2 * 0x10;
            (**(code **)(lVar4 + 0x138))(plVar8,*(undefined8 *)(lVar4 + 0x140));
            goto LAB_005543e4;
          }
          lVar4 = native_sub_432764(lVar4);
          lVar11 = *plVar8;
          if ((ulong)*(ushort *)(lVar11 + 0x12a) != 0) {
            uVar7 = 0;
            piVar12 = (int *)(*(long *)(lVar11 + 0xb0) + 8);
            do {
              if (*(long *)(piVar12 + -2) == lVar4) {
                puVar6 = (undefined8 *)(lVar11 + (long)(int)(*piVar12 + (uint)uVar2) * 0x10 + 0x138)
                ;
                goto LAB_0055420c;
              }
              uVar7 = uVar7 + 1;
              piVar12 = piVar12 + 4;
            } while (uVar7 < *(ushort *)(lVar11 + 0x12a));
          }
          puVar6 = (undefined8 *)native_sub_3c9b34(plVar8,lVar4,(ulong)uVar2);
LAB_0055420c:
          pcVar15 = (code *)*puVar6;
          puVar6 = (undefined8 *)puVar6[1];
        }
        else {
          if ((uVar5 & 1) == 0) {
            uVar14 = *(undefined8 *)(*plVar8 + (ulong)*(ushort *)(lVar4 + 0x48) * 0x10 + 0x140);
          }
          else {
            lVar11 = *plVar8;
            if ((ulong)*(ushort *)(lVar11 + 0x12a) != 0) {
              uVar7 = 0;
              piVar12 = (int *)(*(long *)(lVar11 + 0xb0) + 8);
              do {
                if (*(long *)(piVar12 + -2) == *(long *)(lVar4 + 0x18)) {
                  lVar11 = lVar11 + (long)(int)(*piVar12 + (uint)*(ushort *)(lVar4 + 0x48)) * 0x10 +
                           0x138;
                  goto LAB_005541e4;
                }
                uVar7 = uVar7 + 1;
                piVar12 = piVar12 + 4;
              } while (uVar7 < *(ushort *)(lVar11 + 0x12a));
            }
            lVar11 = native_sub_3c9b34(plVar8);
LAB_005541e4:
            uVar14 = *(undefined8 *)(lVar11 + 8);
          }
          puVar6 = (undefined8 *)native_sub_4327e8(uVar14,lVar4);
          pcVar15 = (code *)*puVar6;
        }
        (*pcVar15)(plVar8,puVar6);
      }
      else {
        if ((((plVar1 == (long *)0x0) || (*(short *)(lVar4 + 0x48) == -1)) ||
            ((*(byte *)(*plVar1 + 0x115) & 1) != 0)) || (*(long *)((long)dVar20 + 0x18) == 0))
        goto LAB_0055434c;
        uVar7 = native_sub_432760(lVar4);
        uVar5 = native_sub_432b64(lVar4);
        if ((uVar7 & 1) == 0) {
          uVar2 = *(ushort *)(lVar4 + 0x48);
          if ((uVar5 & 1) == 0) {
            lVar4 = *plVar1 + (ulong)uVar2 * 0x10;
            (**(code **)(lVar4 + 0x138))(plVar1,plVar8,*(undefined8 *)(lVar4 + 0x140));
            goto LAB_005543e4;
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
                goto LAB_00554270;
              }
              uVar7 = uVar7 + 1;
              piVar12 = piVar12 + 4;
            } while (uVar7 < *(ushort *)(lVar11 + 0x12a));
          }
          puVar6 = (undefined8 *)native_sub_3c9b34(plVar1,lVar4,(ulong)uVar2);
LAB_00554270:
          pcVar15 = (code *)*puVar6;
          puVar6 = (undefined8 *)puVar6[1];
        }
        else {
          if ((uVar5 & 1) == 0) {
            uVar14 = *(undefined8 *)(*plVar1 + (ulong)*(ushort *)(lVar4 + 0x48) * 0x10 + 0x140);
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
                  goto LAB_00554248;
                }
                uVar7 = uVar7 + 1;
                piVar12 = piVar12 + 4;
              } while (uVar7 < *(ushort *)(lVar11 + 0x12a));
            }
            lVar11 = native_sub_3c9b34(plVar1);
LAB_00554248:
            uVar14 = *(undefined8 *)(lVar11 + 8);
          }
          puVar6 = (undefined8 *)native_sub_4327e8(uVar14,lVar4);
          pcVar15 = (code *)*puVar6;
        }
        (*pcVar15)(plVar1,plVar8,puVar6);
      }
    }
    else if (bVar3) {
LAB_0055434c:
      (*pcVar15)(plVar1,plVar8,lVar4);
    }
    else {
LAB_005543d8:
      (*pcVar15)(plVar8,lVar4);
    }
LAB_005543e4:
    lVar9 = lVar9 + 1;
    if (lVar9 == lVar16) {
      return;
    }
  } while( true );
}



/* UICenterOnChild$$.ctor @ 0x9ddcdc
 * void UICenterOnChild___ctor (UICenterOnChild_o* __this, const MethodInfo* method); */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* UICenterOnChild$$.ctor
   void UICenterOnChild___ctor (UICenterOnChild_o* __this, const MethodInfo* method); */

undefined1  [16] native_UICenterOnChild___ctor_9ddcdc(ulong param_1)

{
  undefined1 auVar1 [16];
  
  *(undefined4 *)(param_1 + 0x18) = 0x41000000;
  if ((bRam0000000001340ae0 & 1) == 0) {
    native_sub_43273c(&UnityEngine_Object_TypeInfo_12d54e0,0);
    bRam0000000001340ae0 = 1;
  }
  if (((*(byte *)(_UnityEngine_Object_TypeInfo_12d54e0 + 0x133) >> 2 & 1) != 0) &&
     (*(int *)(_UnityEngine_Object_TypeInfo_12d54e0 + 0xe0) == 0)) {
    native_sub_4327ec();
  }
  auVar1._8_8_ = 0;
  auVar1._0_8_ = param_1;
  return auVar1;
}


