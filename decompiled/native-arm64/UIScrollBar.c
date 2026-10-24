/* ARM64 IL2CPP native pseudocode from Ghidra.
 * Recovered implementation, not original C# source.
 * Function boundaries follow the IL2CPP method address table. */


/* UIScrollBar$$get_scrollValue @ 0xc309ac
 * float UIScrollBar__get_scrollValue (UIScrollBar_o* __this, const MethodInfo* method); */

/* UIScrollBar$$get_scrollValue
   float UIScrollBar__get_scrollValue (UIScrollBar_o* __this, const MethodInfo* method); */

float native_UIScrollBar__get_scrollValue_c309ac(long param_1)

{
  float fVar1;
  double dVar2;
  float fVar3;
  double dStack_28;
  
  if (*(int *)(param_1 + 100) < 2) {
    return *(float *)(param_1 + 0x38);
  }
  fVar3 = *(float *)(param_1 + 0x38) * (float)(*(int *)(param_1 + 100) + -1);
  dVar2 = (double)func_0x002c9600((double)fVar3,&dStack_28);
  if (0.0 <= fVar3) {
    if (dVar2 != 0.5) {
      fVar1 = (float)(int)(fVar3 + 0.5);
      goto LAB_00c2b798;
    }
    fVar3 = 1.0;
  }
  else {
    if (dVar2 != -0.5) {
      fVar1 = (float)(int)(fVar3 + -0.5);
      goto LAB_00c2b798;
    }
    fVar3 = -1.0;
  }
  fVar1 = (float)dStack_28;
  if (((long)dStack_28 & 1U) != 0) {
    fVar1 = (float)dStack_28 + fVar3;
  }
LAB_00c2b798:
  return fVar1 / (float)(*(int *)(param_1 + 100) + -1);
}



/* UIScrollBar$$set_scrollValue @ 0xc309b0
 * void UIScrollBar__set_scrollValue (UIScrollBar_o* __this, float value, const MethodInfo* method); */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* UIScrollBar$$set_scrollValue
   void UIScrollBar__set_scrollValue (UIScrollBar_o* __this, float value, const MethodInfo* method);
    */

undefined8 native_UIScrollBar__set_scrollValue_c309b0(undefined8 param_1,long *param_2)

{
  ulong uVar1;
  long *plVar2;
  undefined8 *puVar3;
  undefined8 uVar4;
  long lVar5;
  float fVar6;
  float fVar7;
  
  if ((bRam00000000013426fb & 1) == 0) {
    native_sub_43273c(&EventDelegate_TypeInfo_12d4590);
    native_sub_43273c(&NGUITools_TypeInfo_12d53c8);
    native_sub_43273c(&UIProgressBar_TypeInfo_12d6498);
    bRam00000000013426fb = 1;
  }
  fVar6 = (float)native_UnityEngine_Mathf__Clamp01_8d9d9c(param_1,0);
  if (*(float *)(param_2 + 7) == fVar6) {
    uVar4 = 0;
  }
  else {
    fVar7 = (float)native_UIProgressBar__get_value_c2b6f0(param_2);
    *(float *)(param_2 + 7) = fVar6;
    if (((char)param_2[8] != '\0') &&
       (fVar6 = (float)native_UIProgressBar__get_value_c2b6f0(param_2), fVar7 != fVar6)) {
      if (((*(byte *)(_NGUITools_TypeInfo_12d53c8 + 0x133) >> 2 & 1) != 0) &&
         (*(int *)(_NGUITools_TypeInfo_12d53c8 + 0xe0) == 0)) {
        native_sub_4327ec();
      }
      uVar1 = native_NGUITools__GetActive_72d02c(param_2,0);
      if ((uVar1 & 1) != 0) {
        lVar5 = param_2[0xd];
        if (((*(byte *)(_EventDelegate_TypeInfo_12d4590 + 0x133) >> 2 & 1) != 0) &&
           (*(int *)(_EventDelegate_TypeInfo_12d4590 + 0xe0) == 0)) {
          native_sub_4327ec();
        }
        uVar1 = native_EventDelegate__IsValid_deef08(lVar5,0);
        if ((uVar1 & 1) != 0) {
          plVar2 = *(long **)(_UIProgressBar_TypeInfo_12d6498 + 0xb8);
          *plVar2 = (long)param_2;
          native_sub_4326e0(plVar2,param_2);
          lVar5 = param_2[0xd];
          if (((*(byte *)(_EventDelegate_TypeInfo_12d4590 + 0x133) >> 2 & 1) != 0) &&
             (*(int *)(_EventDelegate_TypeInfo_12d4590 + 0xe0) == 0)) {
            native_sub_4327ec();
          }
          native_EventDelegate__Execute_deecbc(lVar5,0);
          puVar3 = *(undefined8 **)(_UIProgressBar_TypeInfo_12d6498 + 0xb8);
          *puVar3 = 0;
          native_sub_4326e0(puVar3,0);
        }
      }
      (**(code **)(*param_2 + 0x1a8))(param_2,*(undefined8 *)(*param_2 + 0x1b0));
    }
    uVar4 = 1;
  }
  return uVar4;
}



/* UIScrollBar$$get_barSize @ 0xc309b8
 * float UIScrollBar__get_barSize (UIScrollBar_o* __this, const MethodInfo* method); */

/* UIScrollBar$$get_barSize
   float UIScrollBar__get_barSize (UIScrollBar_o* __this, const MethodInfo* method); */

undefined4 native_UIScrollBar__get_barSize_c309b8(long param_1)

{
  return *(undefined4 *)(param_1 + 0x84);
}



/* UIScrollBar$$set_barSize @ 0xc309c0
 * void UIScrollBar__set_barSize (UIScrollBar_o* __this, float value, const MethodInfo* method); */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* UIScrollBar$$set_barSize
   void UIScrollBar__set_barSize (UIScrollBar_o* __this, float value, const MethodInfo* method); */

void native_UIScrollBar__set_barSize_c309c0(undefined8 param_1,long *param_2)

{
  ulong uVar1;
  long *plVar2;
  undefined8 *puVar3;
  undefined8 uVar4;
  long lVar5;
  float fVar6;
  
  if ((bRam000000000134272e & 1) == 0) {
    native_sub_43273c(&EventDelegate_TypeInfo_12d4590);
    native_sub_43273c(&NGUITools_TypeInfo_12d53c8);
    native_sub_43273c(&UnityEngine_Object_TypeInfo_12d54e0);
    native_sub_43273c(&UIProgressBar_TypeInfo_12d6498);
    bRam000000000134272e = 1;
  }
  fVar6 = (float)native_UnityEngine_Mathf__Clamp01_8d9d9c(param_1,0);
  if (*(float *)((long)param_2 + 0x84) != fVar6) {
    *(float *)((long)param_2 + 0x84) = fVar6;
    *(undefined1 *)(param_2 + 10) = 1;
    if (((*(byte *)(_NGUITools_TypeInfo_12d53c8 + 0x133) >> 2 & 1) != 0) &&
       (*(int *)(_NGUITools_TypeInfo_12d53c8 + 0xe0) == 0)) {
      native_sub_4327ec();
    }
    uVar1 = native_NGUITools__GetActive_72d02c(param_2,0);
    if ((uVar1 & 1) != 0) {
      uVar4 = **(undefined8 **)(_UIProgressBar_TypeInfo_12d6498 + 0xb8);
      if (((*(byte *)(_UnityEngine_Object_TypeInfo_12d54e0 + 0x133) >> 2 & 1) != 0) &&
         (*(int *)(_UnityEngine_Object_TypeInfo_12d54e0 + 0xe0) == 0)) {
        native_sub_4327ec();
      }
      uVar1 = native_UnityEngine_Object__op_Equality_8e9a3c(uVar4,0,0);
      if (((uVar1 & 1) != 0) && (param_2[0xd] != 0)) {
        plVar2 = *(long **)(_UIProgressBar_TypeInfo_12d6498 + 0xb8);
        *plVar2 = (long)param_2;
        native_sub_4326e0(plVar2,param_2);
        lVar5 = param_2[0xd];
        if (((*(byte *)(_EventDelegate_TypeInfo_12d4590 + 0x133) >> 2 & 1) != 0) &&
           (*(int *)(_EventDelegate_TypeInfo_12d4590 + 0xe0) == 0)) {
          native_sub_4327ec();
        }
        native_EventDelegate__Execute_deecbc(lVar5,0);
        puVar3 = *(undefined8 **)(_UIProgressBar_TypeInfo_12d6498 + 0xb8);
        *puVar3 = 0;
        native_sub_4326e0(puVar3,0);
      }
                    /* WARNING: Could not recover jumptable at 0x00c30b38. Too many branches */
                    /* WARNING: Treating indirect jump as call */
      (**(code **)(*param_2 + 0x1a8))(param_2,*(undefined8 *)(*param_2 + 0x1b0));
      return;
    }
  }
  return;
}



/* UIScrollBar$$Upgrade @ 0xc30b50
 * void UIScrollBar__Upgrade (UIScrollBar_o* __this, const MethodInfo* method); */

/* UIScrollBar$$Upgrade
   void UIScrollBar__Upgrade (UIScrollBar_o* __this, const MethodInfo* method); */

void native_UIScrollBar__Upgrade_c30b50(long param_1)

{
  uint uVar1;
  int iVar2;
  uint uVar3;
  
  iVar2 = *(int *)(param_1 + 0x8c);
  if (iVar2 != 2) {
    uVar3 = 2;
    *(undefined4 *)(param_1 + 0x8c) = 2;
    if (*(byte *)(param_1 + 0x80) == 0) {
      uVar3 = 3;
    }
    uVar1 = (uint)*(byte *)(param_1 + 0x80);
    if (iVar2 != 0) {
      uVar1 = uVar3;
    }
    *(undefined4 *)(param_1 + 0x38) = *(undefined4 *)(param_1 + 0x88);
    *(uint *)(param_1 + 0x3c) = uVar1;
  }
  return;
}



/* UIScrollBar$$OnStart @ 0xc30b84
 * void UIScrollBar__OnStart (UIScrollBar_o* __this, const MethodInfo* method); */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* UIScrollBar$$OnStart
   void UIScrollBar__OnStart (UIScrollBar_o* __this, const MethodInfo* method); */

undefined1  [16]
native_UIScrollBar__OnStart_c30b84(undefined1 param_1 [16],float param_2,long param_3)

{
  ulong *puVar1;
  uint uVar2;
  char cVar3;
  bool bVar4;
  undefined1 auVar5 [16];
  undefined1 auVar6 [16];
  ulong uVar7;
  undefined8 uVar8;
  long lVar9;
  long *plVar10;
  long lVar11;
  undefined8 uVar12;
  long *plVar13;
  float extraout_s0;
  float fVar14;
  float fVar15;
  double dVar16;
  undefined8 extraout_d0_02;
  undefined8 extraout_d0_03;
  undefined8 extraout_d0_04;
  undefined8 extraout_d0_05;
  undefined1 auVar17 [16];
  undefined8 extraout_d0;
  undefined8 extraout_d0_00;
  undefined8 extraout_d0_01;
  undefined8 extraout_var;
  undefined8 extraout_var_00;
  undefined8 extraout_var_01;
  undefined1 auVar18 [16];
  undefined8 extraout_var_02;
  undefined8 extraout_var_03;
  undefined8 extraout_var_04;
  undefined8 extraout_var_05;
  undefined1 auVar19 [16];
  float fVar20;
  double unaff_d8;
  
  if ((bRam000000000134272f & 1) == 0) {
    native_sub_43273c(&UIEventListener_BoolDelegate_TypeInfo_12d7a50);
    native_sub_43273c(&Method_UnityEngine_Component_GetComponent_Collider2D____12e29c8);
    native_sub_43273c(&Method_UnityEngine_Component_GetComponent_Collider____12e29c0);
    native_sub_43273c(&UnityEngine_Object_TypeInfo_12d54e0);
    native_sub_43273c(&Method_UISlider_OnDragForeground___12e78b0);
    native_sub_43273c(&Method_UISlider_OnPressForeground___12e78c0);
    native_sub_43273c(&UIEventListener_VectorDelegate_TypeInfo_12d7a58);
    bRam000000000134272f = 1;
  }
  native_UISlider__OnStart_c30e54(param_3);
  uVar12 = *(undefined8 *)(param_3 + 0x30);
  if (((*(byte *)(_UnityEngine_Object_TypeInfo_12d54e0 + 0x133) >> 2 & 1) != 0) &&
     (*(int *)(_UnityEngine_Object_TypeInfo_12d54e0 + 0xe0) == 0)) {
    native_sub_4327ec();
  }
  uVar7 = native_UnityEngine_Object__op_Inequality_8d76fc(uVar12,0,0);
  auVar18._8_8_ = extraout_var;
  auVar18._0_8_ = extraout_d0;
  if ((uVar7 & 1) == 0) {
    return auVar18;
  }
  if (*(long *)(param_3 + 0x30) == 0) {
LAB_00c30e48:
                    /* WARNING: Subroutine does not return */
    native_sub_432810();
  }
  uVar12 = native_UnityEngine_Component__get_gameObject_8da66c(*(long *)(param_3 + 0x30),0);
  uVar8 = native_UnityEngine_Component__get_gameObject_8da66c(param_3,0);
  if (((*(byte *)(_UnityEngine_Object_TypeInfo_12d54e0 + 0x133) >> 2 & 1) != 0) &&
     (*(int *)(_UnityEngine_Object_TypeInfo_12d54e0 + 0xe0) == 0)) {
    native_sub_4327ec(_UnityEngine_Object_TypeInfo_12d54e0);
  }
  uVar7 = native_UnityEngine_Object__op_Inequality_8d76fc(uVar12,uVar8,0);
  auVar5._8_8_ = extraout_var_00;
  auVar5._0_8_ = extraout_d0_00;
  if ((uVar7 & 1) == 0) {
    return auVar5;
  }
  if (*(long *)(param_3 + 0x30) == 0) goto LAB_00c30e48;
  uVar12 = native_UnityEngine_Component__GetComponent_ActiveAnimation__49daec
                     (*(long *)(param_3 + 0x30),
                      _Method_UnityEngine_Component_GetComponent_Collider____12e29c0);
  if (((*(byte *)(_UnityEngine_Object_TypeInfo_12d54e0 + 0x133) >> 2 & 1) != 0) &&
     (*(int *)(_UnityEngine_Object_TypeInfo_12d54e0 + 0xe0) == 0)) {
    native_sub_4327ec(_UnityEngine_Object_TypeInfo_12d54e0);
  }
  uVar7 = native_UnityEngine_Object__op_Inequality_8d76fc(uVar12,0,0);
  if ((uVar7 & 1) == 0) {
    if (*(long *)(param_3 + 0x30) == 0) goto LAB_00c30e48;
    uVar12 = native_UnityEngine_Component__GetComponent_ActiveAnimation__49daec
                       (*(long *)(param_3 + 0x30),
                        _Method_UnityEngine_Component_GetComponent_Collider2D____12e29c8);
    if (((*(byte *)(_UnityEngine_Object_TypeInfo_12d54e0 + 0x133) >> 2 & 1) != 0) &&
       (*(int *)(_UnityEngine_Object_TypeInfo_12d54e0 + 0xe0) == 0)) {
      native_sub_4327ec(_UnityEngine_Object_TypeInfo_12d54e0);
    }
    uVar7 = native_UnityEngine_Object__op_Inequality_8d76fc(uVar12,0,0);
    auVar6._8_8_ = extraout_var_01;
    auVar6._0_8_ = extraout_d0_01;
    if ((uVar7 & 1) == 0) {
      return auVar6;
    }
  }
  if (*(long *)(param_3 + 0x30) == 0) goto LAB_00c30e48;
  uVar12 = native_UnityEngine_Component__get_gameObject_8da66c(*(long *)(param_3 + 0x30),0);
  lVar9 = native_UIEventListener__Get_9ea474(uVar12,0);
  if (lVar9 == 0) goto LAB_00c30e48;
  uVar8 = *(undefined8 *)(lVar9 + 0x40);
  uVar12 = native_sub_432808(_UIEventListener_BoolDelegate_TypeInfo_12d7a50);
  native_UIEventListener_BoolDelegate___ctor_554cb0
            (uVar12,param_3,_Method_UISlider_OnPressForeground___12e78c0,0);
  plVar10 = (long *)native_System_Delegate__Combine_a6cf00(uVar8,uVar12,0);
  if ((plVar10 == (long *)0x0) || (*plVar10 == _UIEventListener_BoolDelegate_TypeInfo_12d7a50)) {
    *(long **)(lVar9 + 0x40) = plVar10;
    native_sub_4326e0((undefined8 *)(lVar9 + 0x40),plVar10);
    plVar13 = (long *)(lVar9 + 0x60);
    lVar9 = *plVar13;
    uVar12 = native_sub_432808(_UIEventListener_VectorDelegate_TypeInfo_12d7a58);
    native_UIEventListener_VectorDelegate___ctor_555edc
              (uVar12,param_3,_Method_UISlider_OnDragForeground___12e78b0,0);
    plVar10 = (long *)native_System_Delegate__Combine_a6cf00(lVar9,uVar12,0);
    if ((plVar10 == (long *)0x0) || (*plVar10 == _UIEventListener_VectorDelegate_TypeInfo_12d7a58))
    {
      *plVar13 = (long)plVar10;
      auVar18 = native_sub_4326e0(plVar13,plVar10);
      if (*(long *)(param_3 + 0x30) != 0) {
        *(undefined1 *)(*(long *)(param_3 + 0x30) + 0xd8) = 1;
        return auVar18;
      }
      goto LAB_00c30e48;
    }
  }
  lVar9 = native_sub_432b04(plVar10);
  if ((bRam000000000134274b & 1) == 0) {
    native_sub_43273c(&UIEventListener_BoolDelegate_TypeInfo_12d7a50);
    native_sub_43273c(&Method_UnityEngine_Component_GetComponent_Collider2D____12e29c8);
    native_sub_43273c(&Method_UnityEngine_Component_GetComponent_Collider____12e29c0);
    native_sub_43273c(&UnityEngine_Object_TypeInfo_12d54e0);
    native_sub_43273c(&Method_UISlider_OnDragBackground___12e78a8);
    native_sub_43273c(&Method_UISlider_OnDragForeground___12e78b0);
    native_sub_43273c(&Method_UISlider_OnPressBackground___12e78b8);
    native_sub_43273c(&Method_UISlider_OnPressForeground___12e78c0);
    native_sub_43273c(&UIEventListener_VectorDelegate_TypeInfo_12d7a58);
    bRam000000000134274b = 1;
  }
  uVar12 = *(undefined8 *)(lVar9 + 0x28);
  if (((*(byte *)(_UnityEngine_Object_TypeInfo_12d54e0 + 0x133) >> 2 & 1) != 0) &&
     (*(int *)(_UnityEngine_Object_TypeInfo_12d54e0 + 0xe0) == 0)) {
    native_sub_4327ec();
  }
  uVar7 = native_UnityEngine_Object__op_Inequality_8d76fc(uVar12,0,0);
  lVar11 = lVar9;
  if ((uVar7 & 1) != 0) {
    if (*(long *)(lVar9 + 0x28) == 0) goto LAB_00c31308;
    uVar12 = native_UnityEngine_Component__GetComponent_ActiveAnimation__49daec
                       (*(long *)(lVar9 + 0x28),
                        _Method_UnityEngine_Component_GetComponent_Collider____12e29c0);
    if (((*(byte *)(_UnityEngine_Object_TypeInfo_12d54e0 + 0x133) >> 2 & 1) != 0) &&
       (*(int *)(_UnityEngine_Object_TypeInfo_12d54e0 + 0xe0) == 0)) {
      native_sub_4327ec(_UnityEngine_Object_TypeInfo_12d54e0);
    }
    uVar7 = native_UnityEngine_Object__op_Inequality_8d76fc(uVar12,0,0);
    if ((uVar7 & 1) == 0) {
      if (*(long *)(lVar9 + 0x28) == 0) goto LAB_00c31308;
      uVar12 = native_UnityEngine_Component__GetComponent_ActiveAnimation__49daec
                         (*(long *)(lVar9 + 0x28),
                          _Method_UnityEngine_Component_GetComponent_Collider2D____12e29c8);
      if (((*(byte *)(_UnityEngine_Object_TypeInfo_12d54e0 + 0x133) >> 2 & 1) != 0) &&
         (*(int *)(_UnityEngine_Object_TypeInfo_12d54e0 + 0xe0) == 0)) {
        native_sub_4327ec(_UnityEngine_Object_TypeInfo_12d54e0);
      }
      uVar7 = native_UnityEngine_Object__op_Inequality_8d76fc(uVar12,0,0);
      if ((uVar7 & 1) == 0) goto LAB_00c30fd0;
    }
    lVar11 = *(long *)(lVar9 + 0x28);
    if (*(long *)(lVar9 + 0x28) == 0) goto LAB_00c31308;
  }
LAB_00c30fd0:
  uVar12 = native_UnityEngine_Component__get_gameObject_8da66c(lVar11,0);
  lVar11 = native_UIEventListener__Get_9ea474(uVar12,0);
  if (lVar11 == 0) goto LAB_00c31308;
  uVar8 = *(undefined8 *)(lVar11 + 0x40);
  uVar12 = native_sub_432808(_UIEventListener_BoolDelegate_TypeInfo_12d7a50);
  native_UIEventListener_BoolDelegate___ctor_554cb0
            (uVar12,lVar9,_Method_UISlider_OnPressBackground___12e78b8,0);
  plVar10 = (long *)native_System_Delegate__Combine_a6cf00(uVar8,uVar12,0);
  if ((plVar10 == (long *)0x0) || (*plVar10 == _UIEventListener_BoolDelegate_TypeInfo_12d7a50)) {
    *(long **)(lVar11 + 0x40) = plVar10;
    native_sub_4326e0((undefined8 *)(lVar11 + 0x40),plVar10);
    plVar13 = (long *)(lVar11 + 0x60);
    lVar11 = *plVar13;
    uVar12 = native_sub_432808(_UIEventListener_VectorDelegate_TypeInfo_12d7a58);
    native_UIEventListener_VectorDelegate___ctor_555edc
              (uVar12,lVar9,_Method_UISlider_OnDragBackground___12e78a8,0);
    plVar10 = (long *)native_System_Delegate__Combine_a6cf00(lVar11,uVar12,0);
    if ((plVar10 == (long *)0x0) || (*plVar10 == _UIEventListener_VectorDelegate_TypeInfo_12d7a58))
    {
      *plVar13 = (long)plVar10;
      native_sub_4326e0(plVar13,plVar10);
      uVar12 = *(undefined8 *)(lVar9 + 0x20);
      if (((*(byte *)(_UnityEngine_Object_TypeInfo_12d54e0 + 0x133) >> 2 & 1) != 0) &&
         (*(int *)(_UnityEngine_Object_TypeInfo_12d54e0 + 0xe0) == 0)) {
        native_sub_4327ec();
      }
      uVar7 = native_UnityEngine_Object__op_Inequality_8d76fc(uVar12,0,0);
      uVar12 = extraout_d0_02;
      uVar8 = extraout_var_02;
      if ((uVar7 & 1) == 0) {
LAB_00c312f0:
        auVar19._8_8_ = uVar8;
        auVar19._0_8_ = uVar12;
        return auVar19;
      }
      if (*(long *)(lVar9 + 0x20) == 0) {
LAB_00c31308:
                    /* WARNING: Subroutine does not return */
        native_sub_432810();
      }
      uVar12 = native_UnityEngine_Component__GetComponent_ActiveAnimation__49daec
                         (*(long *)(lVar9 + 0x20),
                          _Method_UnityEngine_Component_GetComponent_Collider____12e29c0);
      if (((*(byte *)(_UnityEngine_Object_TypeInfo_12d54e0 + 0x133) >> 2 & 1) != 0) &&
         (*(int *)(_UnityEngine_Object_TypeInfo_12d54e0 + 0xe0) == 0)) {
        native_sub_4327ec(_UnityEngine_Object_TypeInfo_12d54e0);
      }
      uVar7 = native_UnityEngine_Object__op_Inequality_8d76fc(uVar12,0,0);
      if ((uVar7 & 1) == 0) {
        if (*(long *)(lVar9 + 0x20) == 0) goto LAB_00c31308;
        uVar12 = native_UnityEngine_Component__GetComponent_ActiveAnimation__49daec
                           (*(long *)(lVar9 + 0x20),
                            _Method_UnityEngine_Component_GetComponent_Collider2D____12e29c8);
        if (((*(byte *)(_UnityEngine_Object_TypeInfo_12d54e0 + 0x133) >> 2 & 1) != 0) &&
           (*(int *)(_UnityEngine_Object_TypeInfo_12d54e0 + 0xe0) == 0)) {
          native_sub_4327ec(_UnityEngine_Object_TypeInfo_12d54e0);
        }
        uVar7 = native_UnityEngine_Object__op_Inequality_8d76fc(uVar12,0,0);
        uVar12 = extraout_d0_03;
        uVar8 = extraout_var_03;
        if ((uVar7 & 1) == 0) goto LAB_00c312f0;
      }
      uVar12 = *(undefined8 *)(lVar9 + 0x30);
      if (((*(byte *)(_UnityEngine_Object_TypeInfo_12d54e0 + 0x133) >> 2 & 1) != 0) &&
         (*(int *)(_UnityEngine_Object_TypeInfo_12d54e0 + 0xe0) == 0)) {
        native_sub_4327ec();
      }
      uVar7 = native_UnityEngine_Object__op_Equality_8e9a3c(uVar12,0,0);
      if ((uVar7 & 1) == 0) {
        if (*(long *)(lVar9 + 0x30) == 0) goto LAB_00c31308;
        uVar8 = *(undefined8 *)(lVar9 + 0x20);
        uVar12 = native_UIRect__get_cachedTransform_c27c58();
        if (((*(byte *)(_UnityEngine_Object_TypeInfo_12d54e0 + 0x133) >> 2 & 1) != 0) &&
           (*(int *)(_UnityEngine_Object_TypeInfo_12d54e0 + 0xe0) == 0)) {
          native_sub_4327ec(_UnityEngine_Object_TypeInfo_12d54e0);
        }
        uVar7 = native_UnityEngine_Object__op_Inequality_8d76fc(uVar8,uVar12,0);
        uVar12 = extraout_d0_04;
        uVar8 = extraout_var_04;
        if ((uVar7 & 1) == 0) goto LAB_00c312f0;
      }
      if (*(long *)(lVar9 + 0x20) == 0) goto LAB_00c31308;
      uVar12 = native_UnityEngine_Component__get_gameObject_8da66c(*(long *)(lVar9 + 0x20),0);
      lVar11 = native_UIEventListener__Get_9ea474(uVar12,0);
      if (lVar11 == 0) goto LAB_00c31308;
      uVar8 = *(undefined8 *)(lVar11 + 0x40);
      uVar12 = native_sub_432808(_UIEventListener_BoolDelegate_TypeInfo_12d7a50);
      native_UIEventListener_BoolDelegate___ctor_554cb0
                (uVar12,lVar9,_Method_UISlider_OnPressForeground___12e78c0,0);
      plVar10 = (long *)native_System_Delegate__Combine_a6cf00(uVar8,uVar12,0);
      if ((plVar10 == (long *)0x0) || (*plVar10 == _UIEventListener_BoolDelegate_TypeInfo_12d7a50))
      {
        *(long **)(lVar11 + 0x40) = plVar10;
        native_sub_4326e0((undefined8 *)(lVar11 + 0x40),plVar10);
        plVar13 = (long *)(lVar11 + 0x60);
        lVar11 = *plVar13;
        uVar12 = native_sub_432808(_UIEventListener_VectorDelegate_TypeInfo_12d7a58);
        native_UIEventListener_VectorDelegate___ctor_555edc
                  (uVar12,lVar9,_Method_UISlider_OnDragForeground___12e78b0,0);
        plVar10 = (long *)native_System_Delegate__Combine_a6cf00(lVar11,uVar12,0);
        if ((plVar10 == (long *)0x0) ||
           (*plVar10 == _UIEventListener_VectorDelegate_TypeInfo_12d7a58)) {
          *plVar13 = (long)plVar10;
          if (iRam0000000001345318 != 0) {
            puVar1 = (ulong *)(((ulong)plVar13 >> 0x12 & 0x7fff) * 8 + 0x138ecd8);
            do {
              cVar3 = '\x01';
              bVar4 = (bool)ExclusiveMonitorPass(puVar1,0x10);
              if (bVar4) {
                *puVar1 = *puVar1 | 1L << ((ulong)plVar13 >> 0xc & 0x3f);
                cVar3 = ExclusiveMonitorsStatus();
              }
            } while (cVar3 != '\0');
          }
          auVar17._8_8_ = extraout_var_05;
          auVar17._0_8_ = extraout_d0_05;
          return auVar17;
        }
      }
    }
  }
  lVar9 = native_sub_432b04(plVar10);
  if ((bRam0000000001342730 & 1) == 0) {
    native_sub_43273c(&UnityEngine_Object_TypeInfo_12d54e0);
    bRam0000000001342730 = 1;
  }
  uVar12 = *(undefined8 *)(lVar9 + 0x30);
  if (((*(byte *)(_UnityEngine_Object_TypeInfo_12d54e0 + 0x133) >> 2 & 1) != 0) &&
     (*(int *)(_UnityEngine_Object_TypeInfo_12d54e0 + 0xe0) == 0)) {
    native_sub_4327ec();
  }
  uVar7 = native_UnityEngine_Object__op_Inequality_8d76fc(uVar12,0,0);
  if ((uVar7 & 1) == 0) {
    if ((bRam00000000013426ff & 1) == 0) {
      native_sub_43273c(&UnityEngine_Object_TypeInfo_12d54e0);
      bRam00000000013426ff = 1;
    }
    uVar12 = *(undefined8 *)(lVar9 + 0x30);
    if (((*(byte *)(_UnityEngine_Object_TypeInfo_12d54e0 + 0x133) >> 2 & 1) != 0) &&
       (*(int *)(_UnityEngine_Object_TypeInfo_12d54e0 + 0xe0) == 0)) {
      native_sub_4327ec();
    }
    uVar7 = native_UnityEngine_Object__op_Inequality_8d76fc(uVar12,0,0);
    if ((uVar7 & 1) != 0) {
      plVar10 = *(long **)(lVar9 + 0x30);
      if ((plVar10 != (long *)0x0) &&
         (lVar11 = (**(code **)(*plVar10 + 0x1d8))(plVar10,*(undefined8 *)(*plVar10 + 0x1e0)),
         lVar11 != 0)) {
        if (*(uint *)(lVar11 + 0x18) < 3) {
          uVar12 = native_sub_43283c();
                    /* WARNING: Subroutine does not return */
          native_sub_4327dc(uVar12,0);
        }
        if (*(uint *)(lVar9 + 0x3c) < 2) {
          fVar14 = *(float *)(lVar11 + 0x38) - *(float *)(lVar11 + 0x20);
          param_2 = extraout_s0 - *(float *)(lVar11 + 0x20);
        }
        else {
          fVar14 = *(float *)(lVar11 + 0x3c) - *(float *)(lVar11 + 0x24);
          param_2 = param_2 - *(float *)(lVar11 + 0x24);
        }
        fVar15 = 1.0 - param_2 / fVar14;
        if ((*(uint *)(lVar9 + 0x3c) | 2) != 3) {
          fVar15 = param_2 / fVar14;
        }
        return ZEXT416((uint)fVar15);
      }
                    /* WARNING: Subroutine does not return */
      native_sub_432810();
    }
  }
  else {
    fVar14 = (float)native_UnityEngine_Mathf__Clamp01_8d9d9c(*(undefined4 *)(lVar9 + 0x84),0);
    plVar10 = *(long **)(lVar9 + 0x30);
    if ((plVar10 == (long *)0x0) ||
       (lVar11 = (**(code **)(*plVar10 + 0x1d8))(plVar10,*(undefined8 *)(*plVar10 + 0x1e0)),
       lVar11 == 0)) {
                    /* WARNING: Subroutine does not return */
      native_sub_432810();
    }
    uVar2 = *(uint *)(lVar11 + 0x18);
    if (uVar2 == 0) goto LAB_00c314fc;
    fVar14 = fVar14 * 0.5;
    if (*(uint *)(lVar9 + 0x3c) < 2) {
      if (uVar2 < 3) {
LAB_00c314fc:
        uVar12 = native_sub_43283c();
                    /* WARNING: Subroutine does not return */
        native_sub_4327dc(uVar12,0);
      }
      fVar15 = (float)native_UnityEngine_Mathf__Lerp_8e5224
                                (*(undefined4 *)(lVar11 + 0x20),*(undefined4 *)(lVar11 + 0x38),
                                 fVar14,0);
      if ((*(uint *)(lVar11 + 0x18) == 0) || (*(uint *)(lVar11 + 0x18) < 3)) goto LAB_00c314fc;
      fVar14 = (float)native_UnityEngine_Mathf__Lerp_8e5224
                                (*(undefined4 *)(lVar11 + 0x20),*(undefined4 *)(lVar11 + 0x38),
                                 1.0 - fVar14,0);
      fVar20 = fVar14 - fVar15;
      if (fVar20 != 0.0) {
        if ((*(uint *)(lVar9 + 0x3c) | 2) == 3) {
          fVar14 = fVar14 - extraout_s0;
        }
        else {
          fVar14 = extraout_s0 - fVar15;
        }
        goto LAB_00c314e4;
      }
    }
    else {
      if ((uVar2 < 2) ||
         (fVar15 = (float)native_UnityEngine_Mathf__Lerp_8e5224
                                    (*(undefined4 *)(lVar11 + 0x24),*(undefined4 *)(lVar11 + 0x30),
                                     fVar14,0), *(uint *)(lVar11 + 0x18) < 4)) goto LAB_00c314fc;
      fVar14 = (float)native_UnityEngine_Mathf__Lerp_8e5224
                                (*(undefined4 *)(lVar11 + 0x48),*(undefined4 *)(lVar11 + 0x3c),
                                 1.0 - fVar14,0);
      fVar20 = fVar14 - fVar15;
      if (fVar20 != 0.0) {
        if ((*(uint *)(lVar9 + 0x3c) | 2) == 3) {
          fVar14 = fVar14 - param_2;
        }
        else {
          fVar14 = param_2 - fVar15;
        }
LAB_00c314e4:
        return ZEXT416((uint)(fVar14 / fVar20));
      }
    }
  }
  fVar14 = *(float *)(lVar9 + 0x38);
  if (*(int *)(lVar9 + 100) < 2) goto LAB_00c2b7a8;
  fVar14 = fVar14 * (float)(*(int *)(lVar9 + 100) + -1);
  dVar16 = (double)func_0x002c9600((double)fVar14,&stack0xffffffffffffff48);
  if (0.0 <= fVar14) {
    if (dVar16 == 0.5) {
      fVar15 = 1.0;
      goto LAB_00c2b764;
    }
    fVar14 = (float)(int)(fVar14 + 0.5);
  }
  else if (dVar16 == -0.5) {
    fVar15 = -1.0;
LAB_00c2b764:
    fVar14 = (float)unaff_d8;
    if (((long)unaff_d8 & 1U) != 0) {
      fVar14 = (float)unaff_d8 + fVar15;
    }
  }
  else {
    fVar14 = (float)(int)(fVar14 + -0.5);
  }
  fVar14 = fVar14 / (float)(*(int *)(lVar9 + 100) + -1);
LAB_00c2b7a8:
  return ZEXT416((uint)fVar14);
}



/* UIScrollBar$$LocalToValue @ 0xc31314
 * float UIScrollBar__LocalToValue (UIScrollBar_o* __this, UnityEngine_Vector2_o localPos, const MethodInfo* method); */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* UIScrollBar$$LocalToValue
   float UIScrollBar__LocalToValue (UIScrollBar_o* __this, UnityEngine_Vector2_o localPos, const
   MethodInfo* method); */

float native_UIScrollBar__LocalToValue_c31314(float param_1,float param_2,long param_3)

{
  uint uVar1;
  ulong uVar2;
  long *plVar3;
  long lVar4;
  undefined8 uVar5;
  float fVar6;
  float fVar7;
  double dVar8;
  float fVar9;
  double unaff_d8;
  
  if ((bRam0000000001342730 & 1) == 0) {
    native_sub_43273c(&UnityEngine_Object_TypeInfo_12d54e0);
    bRam0000000001342730 = 1;
  }
  uVar5 = *(undefined8 *)(param_3 + 0x30);
  if (((*(byte *)(_UnityEngine_Object_TypeInfo_12d54e0 + 0x133) >> 2 & 1) != 0) &&
     (*(int *)(_UnityEngine_Object_TypeInfo_12d54e0 + 0xe0) == 0)) {
    native_sub_4327ec();
  }
  uVar2 = native_UnityEngine_Object__op_Inequality_8d76fc(uVar5,0,0);
  if ((uVar2 & 1) == 0) {
    if ((bRam00000000013426ff & 1) == 0) {
      native_sub_43273c(&UnityEngine_Object_TypeInfo_12d54e0);
      bRam00000000013426ff = 1;
    }
    uVar5 = *(undefined8 *)(param_3 + 0x30);
    if (((*(byte *)(_UnityEngine_Object_TypeInfo_12d54e0 + 0x133) >> 2 & 1) != 0) &&
       (*(int *)(_UnityEngine_Object_TypeInfo_12d54e0 + 0xe0) == 0)) {
      native_sub_4327ec();
    }
    uVar2 = native_UnityEngine_Object__op_Inequality_8d76fc(uVar5,0,0);
    if ((uVar2 & 1) != 0) {
      plVar3 = *(long **)(param_3 + 0x30);
      if ((plVar3 != (long *)0x0) &&
         (lVar4 = (**(code **)(*plVar3 + 0x1d8))(plVar3,*(undefined8 *)(*plVar3 + 0x1e0)),
         lVar4 != 0)) {
        if (*(uint *)(lVar4 + 0x18) < 3) {
          uVar5 = native_sub_43283c();
                    /* WARNING: Subroutine does not return */
          native_sub_4327dc(uVar5,0);
        }
        if (*(uint *)(param_3 + 0x3c) < 2) {
          fVar6 = *(float *)(lVar4 + 0x38) - *(float *)(lVar4 + 0x20);
          param_1 = param_1 - *(float *)(lVar4 + 0x20);
        }
        else {
          fVar6 = *(float *)(lVar4 + 0x3c) - *(float *)(lVar4 + 0x24);
          param_1 = param_2 - *(float *)(lVar4 + 0x24);
        }
        fVar7 = 1.0 - param_1 / fVar6;
        if ((*(uint *)(param_3 + 0x3c) | 2) != 3) {
          fVar7 = param_1 / fVar6;
        }
        return fVar7;
      }
                    /* WARNING: Subroutine does not return */
      native_sub_432810();
    }
  }
  else {
    fVar6 = (float)native_UnityEngine_Mathf__Clamp01_8d9d9c(*(undefined4 *)(param_3 + 0x84),0);
    plVar3 = *(long **)(param_3 + 0x30);
    if ((plVar3 == (long *)0x0) ||
       (lVar4 = (**(code **)(*plVar3 + 0x1d8))(plVar3,*(undefined8 *)(*plVar3 + 0x1e0)), lVar4 == 0)
       ) {
                    /* WARNING: Subroutine does not return */
      native_sub_432810();
    }
    uVar1 = *(uint *)(lVar4 + 0x18);
    if (uVar1 == 0) goto LAB_00c314fc;
    fVar6 = fVar6 * 0.5;
    if (*(uint *)(param_3 + 0x3c) < 2) {
      if (uVar1 < 3) {
LAB_00c314fc:
        uVar5 = native_sub_43283c();
                    /* WARNING: Subroutine does not return */
        native_sub_4327dc(uVar5,0);
      }
      fVar7 = (float)native_UnityEngine_Mathf__Lerp_8e5224
                               (*(undefined4 *)(lVar4 + 0x20),*(undefined4 *)(lVar4 + 0x38),fVar6,0)
      ;
      if ((*(uint *)(lVar4 + 0x18) == 0) || (*(uint *)(lVar4 + 0x18) < 3)) goto LAB_00c314fc;
      fVar6 = (float)native_UnityEngine_Mathf__Lerp_8e5224
                               (*(undefined4 *)(lVar4 + 0x20),*(undefined4 *)(lVar4 + 0x38),
                                1.0 - fVar6,0);
      fVar9 = fVar6 - fVar7;
      if (fVar9 != 0.0) {
        if ((*(uint *)(param_3 + 0x3c) | 2) == 3) {
          fVar6 = fVar6 - param_1;
        }
        else {
          fVar6 = param_1 - fVar7;
        }
        goto LAB_00c314e4;
      }
    }
    else {
      if ((uVar1 < 2) ||
         (fVar7 = (float)native_UnityEngine_Mathf__Lerp_8e5224
                                   (*(undefined4 *)(lVar4 + 0x24),*(undefined4 *)(lVar4 + 0x30),
                                    fVar6,0), *(uint *)(lVar4 + 0x18) < 4)) goto LAB_00c314fc;
      fVar6 = (float)native_UnityEngine_Mathf__Lerp_8e5224
                               (*(undefined4 *)(lVar4 + 0x48),*(undefined4 *)(lVar4 + 0x3c),
                                1.0 - fVar6,0);
      fVar9 = fVar6 - fVar7;
      if (fVar9 != 0.0) {
        if ((*(uint *)(param_3 + 0x3c) | 2) == 3) {
          fVar6 = fVar6 - param_2;
        }
        else {
          fVar6 = param_2 - fVar7;
        }
LAB_00c314e4:
        return fVar6 / fVar9;
      }
    }
  }
  if (*(int *)(param_3 + 100) < 2) {
    return *(float *)(param_3 + 0x38);
  }
  fVar6 = *(float *)(param_3 + 0x38) * (float)(*(int *)(param_3 + 100) + -1);
  dVar8 = (double)func_0x002c9600((double)fVar6,&stack0xffffffffffffffd8);
  if (0.0 <= fVar6) {
    if (dVar8 != 0.5) {
      fVar7 = (float)(int)(fVar6 + 0.5);
      goto LAB_00c2b798;
    }
    fVar6 = 1.0;
  }
  else {
    if (dVar8 != -0.5) {
      fVar7 = (float)(int)(fVar6 + -0.5);
      goto LAB_00c2b798;
    }
    fVar6 = -1.0;
  }
  fVar7 = (float)unaff_d8;
  if (((long)unaff_d8 & 1U) != 0) {
    fVar7 = (float)unaff_d8 + fVar6;
  }
LAB_00c2b798:
  return fVar7 / (float)(*(int *)(param_3 + 100) + -1);
}



/* UIScrollBar$$ForceUpdate @ 0xc3150c
 * void UIScrollBar__ForceUpdate (UIScrollBar_o* __this, const MethodInfo* method); */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* UIScrollBar$$ForceUpdate
   void UIScrollBar__ForceUpdate (UIScrollBar_o* __this, const MethodInfo* method); */

void native_UIScrollBar__ForceUpdate_c3150c
               (undefined1 param_1 [16],float param_2,float param_3,float param_4,long param_5)

{
  uint uVar1;
  bool bVar2;
  int iVar3;
  long lVar4;
  ulong uVar5;
  ulong uVar6;
  long *plVar7;
  ulong uVar8;
  long *plVar9;
  undefined8 uVar10;
  long lVar11;
  undefined4 *puVar12;
  undefined4 uVar13;
  float fVar14;
  float fVar15;
  float fVar16;
  float fVar17;
  undefined8 uVar18;
  undefined8 uVar19;
  undefined4 uVar20;
  float fVar21;
  undefined4 uVar22;
  ulong uVar23;
  float fVar24;
  float fVar25;
  float fVar26;
  float fVar27;
  undefined8 uStack_90;
  undefined8 uStack_88;
  ulong uStack_60;
  ulong uStack_58;
  
  if ((bRam0000000001342731 & 1) == 0) {
    native_sub_43273c(&UnityEngine_Object_TypeInfo_12d54e0);
    bRam0000000001342731 = 1;
  }
  uVar10 = *(undefined8 *)(param_5 + 0x30);
  if (((*(byte *)(_UnityEngine_Object_TypeInfo_12d54e0 + 0x133) >> 2 & 1) != 0) &&
     (*(int *)(_UnityEngine_Object_TypeInfo_12d54e0 + 0xe0) == 0)) {
    native_sub_4327ec();
  }
  uVar5 = native_UnityEngine_Object__op_Inequality_8d76fc(uVar10,0,0);
  if ((uVar5 & 1) != 0) {
    *(undefined1 *)(param_5 + 0x50) = 0;
    fVar16 = (float)native_UnityEngine_Mathf__Clamp01_8d9d9c(*(undefined4 *)(param_5 + 0x84),0);
    fVar16 = fVar16 * 0.5;
    uVar10 = native_UIProgressBar__get_value_c2b6f0(param_5);
    fVar17 = (float)native_UnityEngine_Mathf__Lerp_8e5224(fVar16,1.0 - fVar16,uVar10,0);
    lVar11 = *(long *)(param_5 + 0x30);
    fVar24 = fVar17 - fVar16;
    fVar16 = fVar16 + fVar17;
    uVar1 = *(uint *)(param_5 + 0x3c) | 2;
    if (*(uint *)(param_5 + 0x3c) < 2) {
      if (uVar1 == 3) {
        fVar17 = 1.0 - fVar16;
        fVar14 = 1.0 - fVar24;
        fVar16 = 1.0;
        fVar24 = 0.0;
      }
      else {
        fVar17 = fVar24;
        fVar14 = fVar16;
        fVar16 = 1.0;
        fVar24 = 0.0;
      }
    }
    else if (uVar1 == 3) {
      fVar21 = 1.0 - fVar16;
      fVar16 = 1.0 - fVar24;
      fVar17 = 0.0;
      fVar14 = 1.0;
      fVar24 = fVar21;
    }
    else {
      fVar14 = 1.0;
      fVar17 = 0.0;
    }
    uStack_58 = 0;
    uStack_60 = 0;
    native_UnityEngine_Vector4___ctor_776f24(fVar17,fVar24,fVar14,fVar16,&uStack_60,0);
    uVar5 = uStack_60 >> 0x20;
    uVar23 = uStack_58 & 0xffffffff;
    uVar8 = uStack_58 >> 0x20;
    if (lVar11 != 0) {
      native_UIWidget__set_drawRegion_94561c(uStack_60 & 0xffffffff,uVar5,uVar23,uVar8,lVar11,0);
      uVar10 = *(undefined8 *)(param_5 + 0x20);
      if (((*(byte *)(_UnityEngine_Object_TypeInfo_12d54e0 + 0x133) >> 2 & 1) != 0) &&
         (*(int *)(_UnityEngine_Object_TypeInfo_12d54e0 + 0xe0) == 0)) {
        native_sub_4327ec();
      }
      uVar6 = native_UnityEngine_Object__op_Inequality_8d76fc(uVar10,0,0);
      if ((uVar6 & 1) == 0) {
        return;
      }
      plVar7 = *(long **)(param_5 + 0x30);
      if (plVar7 != (long *)0x0) {
        uVar10 = (**(code **)(*plVar7 + 0x2f8))(plVar7,*(undefined8 *)(*plVar7 + 0x300));
        uVar10 = native_UnityEngine_Mathf__Lerp_8e5224(uVar10,uVar23,0x3f000000,0);
        uVar19 = native_UnityEngine_Mathf__Lerp_8e5224(uVar5,uVar8,0x3f000000,0);
        if ((*(long *)(param_5 + 0x30) != 0) &&
           (lVar11 = native_UIRect__get_cachedTransform_c27c58(), lVar11 != 0)) {
          native_UnityEngine_Transform__TransformPoint_7728d8(uVar10,uVar19,0,lVar11,0);
          native_UIProgressBar__SetThumbPosition_c2ce20(param_5);
          return;
        }
      }
    }
                    /* WARNING: Subroutine does not return */
    native_sub_432810();
  }
  if ((bRam0000000001342700 & 1) == 0) {
    native_sub_43273c(&UnityEngine_Object_TypeInfo_12d54e0);
    native_sub_43273c(&UIBasicSprite_TypeInfo_12d6400);
    bRam0000000001342700 = 1;
  }
  *(undefined1 *)(param_5 + 0x50) = 0;
  plVar7 = *(long **)(param_5 + 0x30);
  if (plVar7 == (long *)0x0) {
LAB_00c2c6d4:
    plVar9 = (long *)0x0;
  }
  else {
    if (*(byte *)(*plVar7 + 300) < *(byte *)(_UIBasicSprite_TypeInfo_12d6400 + 300))
    goto LAB_00c2c6d4;
    plVar9 = plVar7;
    if (*(long *)(*(long *)(*plVar7 + 200) +
                  (ulong)*(byte *)(_UIBasicSprite_TypeInfo_12d6400 + 300) * 8 + -8) !=
        _UIBasicSprite_TypeInfo_12d6400) {
      plVar9 = (long *)0x0;
    }
  }
  if (((*(byte *)(_UnityEngine_Object_TypeInfo_12d54e0 + 0x133) >> 2 & 1) != 0) &&
     (*(int *)(_UnityEngine_Object_TypeInfo_12d54e0 + 0xe0) == 0)) {
    native_sub_4327ec();
  }
  uVar5 = native_UnityEngine_Object__op_Inequality_8d76fc(plVar7,0,0);
  if ((uVar5 & 1) == 0) {
LAB_00c2c824:
    bVar2 = false;
  }
  else {
    if (*(uint *)(param_5 + 0x3c) < 2) {
      if (((*(ushort *)(_UnityEngine_Object_TypeInfo_12d54e0 + 0x132) >> 10 & 1) != 0) &&
         (*(int *)(_UnityEngine_Object_TypeInfo_12d54e0 + 0xe0) == 0)) {
        native_sub_4327ec();
      }
      uVar5 = native_UnityEngine_Object__op_Inequality_8d76fc(plVar9,0,0);
      if ((uVar5 & 1) != 0) {
        if (plVar9 == (long *)0x0) goto LAB_00c2ce1c;
        iVar3 = (**(code **)(*plVar9 + 0x428))(plVar9,*(undefined8 *)(*plVar9 + 0x430));
        if (iVar3 == 3) {
          if (*(uint *)((long)plVar9 + 0x194) < 2) {
            uVar10 = 0;
LAB_00c2c7ec:
            native_UIBasicSprite__set_fillDirection_c8becc(plVar9,uVar10,0);
            native_UIBasicSprite__set_invert_c8c164(plVar9,(*(uint *)(param_5 + 0x3c) | 2) == 3,0);
          }
LAB_00c2c810:
          native_UIProgressBar__get_value_c2b6f0(param_5);
          native_UIBasicSprite__set_fillAmount_c8bef0(plVar9,0);
          goto LAB_00c2c824;
        }
      }
      uVar1 = *(uint *)(param_5 + 0x3c);
      lVar11 = *(long *)(param_5 + 0x30);
      uVar18 = native_UIProgressBar__get_value_c2b6f0(param_5);
      if ((uVar1 | 2) == 3) {
        uVar19 = 0x3f800000;
        fVar16 = 1.0 - (float)uVar18;
        fVar24 = 0.0;
        uVar10 = uVar19;
      }
      else {
        uVar10 = 0x3f800000;
        uVar19 = uVar18;
LAB_00c2c8b8:
        fVar16 = 0.0;
        fVar24 = 0.0;
      }
    }
    else {
      if (((*(ushort *)(_UnityEngine_Object_TypeInfo_12d54e0 + 0x132) >> 10 & 1) != 0) &&
         (*(int *)(_UnityEngine_Object_TypeInfo_12d54e0 + 0xe0) == 0)) {
        native_sub_4327ec();
      }
      uVar5 = native_UnityEngine_Object__op_Inequality_8d76fc(plVar9,0,0);
      if ((uVar5 & 1) != 0) {
        if (plVar9 == (long *)0x0) goto LAB_00c2ce1c;
        iVar3 = (**(code **)(*plVar9 + 0x428))(plVar9,*(undefined8 *)(*plVar9 + 0x430));
        if (iVar3 == 3) {
          if (*(uint *)((long)plVar9 + 0x194) < 2) {
            uVar10 = 1;
            goto LAB_00c2c7ec;
          }
          goto LAB_00c2c810;
        }
      }
      uVar1 = *(uint *)(param_5 + 0x3c);
      lVar11 = *(long *)(param_5 + 0x30);
      uVar10 = native_UIProgressBar__get_value_c2b6f0(param_5);
      if ((uVar1 | 2) != 3) {
        uVar19 = 0x3f800000;
        goto LAB_00c2c8b8;
      }
      uVar19 = 0x3f800000;
      fVar24 = 1.0 - (float)uVar10;
      fVar16 = 0.0;
      uVar10 = uVar19;
    }
    uStack_88 = 0;
    uStack_90 = 0;
    native_UnityEngine_Vector4___ctor_776f24(fVar16,fVar24,uVar19,uVar10,&uStack_90,0);
    param_3 = (float)uStack_88;
    param_4 = (float)((ulong)uStack_88 >> 0x20);
    if (lVar11 == 0) goto LAB_00c2ce1c;
    native_UIWidget__set_drawRegion_94561c(uStack_90 & 0xffffffff,uStack_90._4_4_,lVar11,0);
    if (*(long *)(param_5 + 0x30) == 0) goto LAB_00c2ce1c;
    native_UnityEngine_Behaviour__set_enabled_8d7b0c(*(long *)(param_5 + 0x30),1,0);
    fVar16 = (float)native_UIProgressBar__get_value_c2b6f0(param_5);
    param_2 = 0.001;
    bVar2 = fVar16 < 0.001;
  }
  uVar10 = *(undefined8 *)(param_5 + 0x28);
  if (((*(byte *)(_UnityEngine_Object_TypeInfo_12d54e0 + 0x133) >> 2 & 1) != 0) &&
     (*(int *)(_UnityEngine_Object_TypeInfo_12d54e0 + 0xe0) == 0)) {
    native_sub_4327ec();
  }
  uVar5 = native_UnityEngine_Object__op_Inequality_8d76fc(uVar10,0,0);
  if ((uVar5 & 1) != 0) {
    plVar7 = *(long **)(param_5 + 0x28);
    if (plVar7 == (long *)0x0) {
LAB_00c2c960:
      plVar7 = (long *)0x0;
    }
    else {
      if (*(byte *)(*plVar7 + 300) < *(byte *)(_UIBasicSprite_TypeInfo_12d6400 + 300))
      goto LAB_00c2c960;
      if (*(long *)(*(long *)(*plVar7 + 200) +
                    (ulong)*(byte *)(_UIBasicSprite_TypeInfo_12d6400 + 300) * 8 + -8) !=
          _UIBasicSprite_TypeInfo_12d6400) {
        plVar7 = (long *)0x0;
      }
    }
    if (((*(byte *)(_UnityEngine_Object_TypeInfo_12d54e0 + 0x133) >> 2 & 1) != 0) &&
       (*(int *)(_UnityEngine_Object_TypeInfo_12d54e0 + 0xe0) == 0)) {
      native_sub_4327ec();
    }
    uVar5 = native_UnityEngine_Object__op_Inequality_8d76fc(plVar7,0,0);
    if ((uVar5 & 1) != 0) {
      if (((*(byte *)(_UnityEngine_Object_TypeInfo_12d54e0 + 0x133) >> 2 & 1) != 0) &&
         (*(int *)(_UnityEngine_Object_TypeInfo_12d54e0 + 0xe0) == 0)) {
        native_sub_4327ec();
      }
      uVar5 = native_UnityEngine_Object__op_Inequality_8d76fc(plVar9,0,0);
      if ((uVar5 & 1) != 0) {
        if ((plVar7 == (long *)0x0) || (plVar9 == (long *)0x0)) goto LAB_00c2ce1c;
        if (((*(char *)((long)plVar7 + 0x19c) != '\0') != (*(char *)((long)plVar9 + 0x19c) != '\0'))
           && ((iVar3 = (**(code **)(*plVar7 + 0x428))(plVar7,*(undefined8 *)(*plVar7 + 0x430)),
               iVar3 == 3 &&
               (iVar3 = (**(code **)(*plVar9 + 0x428))(plVar9,*(undefined8 *)(*plVar9 + 0x430)),
               iVar3 == 3)))) {
          param_2 = 1.0;
          native_UIBasicSprite__set_fillAmount_c8bef0(1.0 - *(float *)(plVar9 + 0x33),plVar7,0);
        }
      }
    }
  }
  uVar10 = *(undefined8 *)(param_5 + 0x20);
  if (((*(byte *)(_UnityEngine_Object_TypeInfo_12d54e0 + 0x133) >> 2 & 1) != 0) &&
     (*(int *)(_UnityEngine_Object_TypeInfo_12d54e0 + 0xe0) == 0)) {
    native_sub_4327ec();
  }
  uVar5 = native_UnityEngine_Object__op_Inequality_8d76fc(uVar10,0,0);
  if ((uVar5 & 1) != 0) {
    uVar10 = *(undefined8 *)(param_5 + 0x30);
    if (((*(byte *)(_UnityEngine_Object_TypeInfo_12d54e0 + 0x133) >> 2 & 1) != 0) &&
       (*(int *)(_UnityEngine_Object_TypeInfo_12d54e0 + 0xe0) == 0)) {
      native_sub_4327ec();
    }
    uVar5 = native_UnityEngine_Object__op_Inequality_8d76fc(uVar10,0,0);
    if ((uVar5 & 1) == 0) {
      uVar10 = *(undefined8 *)(param_5 + 0x28);
      if (((*(byte *)(_UnityEngine_Object_TypeInfo_12d54e0 + 0x133) >> 2 & 1) != 0) &&
         (*(int *)(_UnityEngine_Object_TypeInfo_12d54e0 + 0xe0) == 0)) {
        native_sub_4327ec();
      }
      uVar5 = native_UnityEngine_Object__op_Inequality_8d76fc(uVar10,0,0);
      if ((uVar5 & 1) == 0) goto LAB_00c2cdd0;
    }
    uVar10 = *(undefined8 *)(param_5 + 0x30);
    if (((*(byte *)(_UnityEngine_Object_TypeInfo_12d54e0 + 0x133) >> 2 & 1) != 0) &&
       (*(int *)(_UnityEngine_Object_TypeInfo_12d54e0 + 0xe0) == 0)) {
      native_sub_4327ec();
    }
    uVar5 = native_UnityEngine_Object__op_Inequality_8d76fc(uVar10,0,0);
    if ((uVar5 & 1) == 0) {
      plVar7 = *(long **)(param_5 + 0x28);
    }
    else {
      plVar7 = *(long **)(param_5 + 0x30);
    }
    if (plVar7 == (long *)0x0) goto LAB_00c2ce1c;
    lVar11 = (**(code **)(*plVar7 + 0x1d8))(plVar7,*(undefined8 *)(*plVar7 + 0x1e0));
    uVar10 = *(undefined8 *)(param_5 + 0x30);
    if (((*(byte *)(_UnityEngine_Object_TypeInfo_12d54e0 + 0x133) >> 2 & 1) != 0) &&
       (*(int *)(_UnityEngine_Object_TypeInfo_12d54e0 + 0xe0) == 0)) {
      native_sub_4327ec();
    }
    uVar5 = native_UnityEngine_Object__op_Inequality_8d76fc(uVar10,0,0);
    if ((uVar5 & 1) == 0) {
      plVar7 = *(long **)(param_5 + 0x28);
    }
    else {
      plVar7 = *(long **)(param_5 + 0x30);
    }
    if ((plVar7 == (long *)0x0) ||
       (fVar16 = (float)(**(code **)(*plVar7 + 0x3d8))(plVar7,*(undefined8 *)(*plVar7 + 0x3e0)),
       lVar11 == 0)) goto LAB_00c2ce1c;
    uVar1 = *(uint *)(lVar11 + 0x18);
    if ((uVar1 == 0) ||
       (((*(float *)(lVar11 + 0x20) = fVar16 + *(float *)(lVar11 + 0x20), uVar1 == 1 ||
         (*(float *)(lVar11 + 0x2c) = fVar16 + *(float *)(lVar11 + 0x2c), uVar1 < 3)) ||
        (*(float *)(lVar11 + 0x38) = *(float *)(lVar11 + 0x38) - param_3, uVar1 == 3))))
    goto LAB_00c2ce10;
    *(float *)(lVar11 + 0x44) = *(float *)(lVar11 + 0x44) - param_3;
    *(float *)(lVar11 + 0x48) = param_2 + *(float *)(lVar11 + 0x48);
    *(float *)(lVar11 + 0x24) = param_2 + *(float *)(lVar11 + 0x24);
    *(float *)(lVar11 + 0x30) = *(float *)(lVar11 + 0x30) - param_4;
    *(float *)(lVar11 + 0x3c) = *(float *)(lVar11 + 0x3c) - param_4;
    uVar10 = *(undefined8 *)(param_5 + 0x30);
    if (((*(byte *)(_UnityEngine_Object_TypeInfo_12d54e0 + 0x133) >> 2 & 1) != 0) &&
       (*(int *)(_UnityEngine_Object_TypeInfo_12d54e0 + 0xe0) == 0)) {
      native_sub_4327ec();
    }
    uVar5 = native_UnityEngine_Object__op_Inequality_8d76fc(uVar10,0,0);
    if ((uVar5 & 1) == 0) {
      lVar4 = *(long *)(param_5 + 0x28);
    }
    else {
      lVar4 = *(long *)(param_5 + 0x30);
    }
    if (lVar4 == 0) goto LAB_00c2ce1c;
    lVar4 = native_UIRect__get_cachedTransform_c27c58();
    uVar8 = (ulong)*(uint *)(lVar11 + 0x18);
    uVar5 = 0xffffffffffffffff;
    puVar12 = (undefined4 *)(lVar11 + 0x28);
    do {
      if (uVar8 <= uVar5 + 1) goto LAB_00c2ce10;
      if (lVar4 == 0) goto LAB_00c2ce1c;
      uVar20 = puVar12[-1];
      uVar22 = *puVar12;
      uVar13 = native_UnityEngine_Transform__TransformPoint_7728d8(puVar12[-2],lVar4,0);
      uVar1 = *(uint *)(lVar11 + 0x18);
      uVar8 = (ulong)uVar1;
      if (uVar8 <= uVar5 + 1) goto LAB_00c2ce10;
      uVar5 = uVar5 + 1;
      puVar12[-2] = uVar13;
      puVar12[-1] = uVar20;
      *puVar12 = uVar22;
      puVar12 = puVar12 + 3;
    } while (uVar5 < 3);
    if (uVar1 == 0) goto LAB_00c2ce10;
    fVar24 = *(float *)(lVar11 + 0x28);
    fVar17 = (float)*(undefined8 *)(lVar11 + 0x20);
    fVar16 = (float)((ulong)*(undefined8 *)(lVar11 + 0x20) >> 0x20);
    if (*(uint *)(param_5 + 0x3c) < 2) {
      if (uVar1 < 2) {
LAB_00c2ce10:
        uVar10 = native_sub_43283c();
                    /* WARNING: Subroutine does not return */
        native_sub_4327dc(uVar10,0);
      }
      uVar10 = *(undefined8 *)(lVar11 + 0x2c);
      fVar21 = *(float *)(lVar11 + 0x34);
      fVar14 = (float)native_UnityEngine_Mathf__Clamp01_8d9d9c(0x3f000000,0);
      if ((*(uint *)(lVar11 + 0x18) < 3) || (*(uint *)(lVar11 + 0x18) == 3)) goto LAB_00c2ce10;
      fVar15 = (float)uVar10;
      fVar26 = (float)((ulong)uVar10 >> 0x20);
      uVar10 = *(undefined8 *)(lVar11 + 0x38);
      fVar25 = *(float *)(lVar11 + 0x40);
      uVar19 = *(undefined8 *)(lVar11 + 0x44);
      fVar27 = *(float *)(lVar11 + 0x4c);
    }
    else {
      if (uVar1 < 4) goto LAB_00c2ce10;
      uVar10 = *(undefined8 *)(lVar11 + 0x44);
      fVar21 = *(float *)(lVar11 + 0x4c);
      fVar14 = (float)native_UnityEngine_Mathf__Clamp01_8d9d9c(0x3f000000,0);
      if ((*(uint *)(lVar11 + 0x18) < 2) || (*(uint *)(lVar11 + 0x18) == 2)) goto LAB_00c2ce10;
      fVar15 = (float)uVar10;
      fVar26 = (float)((ulong)uVar10 >> 0x20);
      uVar10 = *(undefined8 *)(lVar11 + 0x2c);
      fVar25 = *(float *)(lVar11 + 0x34);
      uVar19 = *(undefined8 *)(lVar11 + 0x38);
      fVar27 = *(float *)(lVar11 + 0x40);
    }
    fVar24 = fVar24 + (fVar21 - fVar24) * fVar14;
    fVar17 = fVar17 + (fVar15 - fVar17) * fVar14;
    fVar16 = fVar16 + (fVar26 - fVar16) * fVar14;
    fVar21 = (float)native_UnityEngine_Mathf__Clamp01_8d9d9c(0x3f000000,0);
    uVar1 = *(uint *)(param_5 + 0x3c);
    fVar15 = (float)native_UIProgressBar__get_value_c2b6f0(param_5);
    fVar14 = 1.0 - fVar15;
    if ((uVar1 | 2) != 3) {
      fVar14 = fVar15;
    }
    fVar14 = (float)native_UnityEngine_Mathf__Clamp01_8d9d9c(fVar14,0);
    fVar15 = (float)((ulong)uVar10 >> 0x20);
    fVar16 = fVar16 + ((fVar15 + ((float)((ulong)uVar19 >> 0x20) - fVar15) * fVar21) - fVar16) *
                      fVar14;
    native_UIProgressBar__SetThumbPosition_c2ce20
              (CONCAT44(fVar16,fVar17 + (((float)uVar10 + ((float)uVar19 - (float)uVar10) * fVar21)
                                        - fVar17) * fVar14),fVar16,
               fVar24 + ((fVar25 + (fVar27 - fVar25) * fVar21) - fVar24) * fVar14,param_5);
  }
LAB_00c2cdd0:
  if (bVar2) {
    if (*(long *)(param_5 + 0x30) == 0) {
LAB_00c2ce1c:
                    /* WARNING: Subroutine does not return */
      native_sub_432810();
    }
    native_UnityEngine_Behaviour__set_enabled_8d7b0c(*(long *)(param_5 + 0x30),0,0);
  }
  return;
}



/* UIScrollBar$$.ctor @ 0xc31760
 * void UIScrollBar___ctor (UIScrollBar_o* __this, const MethodInfo* method); */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* UIScrollBar$$.ctor
   void UIScrollBar___ctor (UIScrollBar_o* __this, const MethodInfo* method); */

undefined1  [16] native_UIScrollBar___ctor_c31760(ulong param_1)

{
  undefined8 uVar1;
  undefined1 auVar2 [16];
  
  *(undefined4 *)(param_1 + 0x84) = 0x3f800000;
  *(undefined4 *)(param_1 + 0x8c) = 2;
  *(undefined8 *)(param_1 + 0x78) = 0x23f800000;
  if ((bRam0000000001342702 & 1) == 0) {
    native_sub_43273c(&Method_System_Collections_Generic_List_EventDelegate___ctor___12dc738);
    native_sub_43273c(&System_Collections_Generic_List_EventDelegate__TypeInfo_12d2a08);
    bRam0000000001342702 = 1;
  }
  *(undefined4 *)(param_1 + 0x38) = 0x3f800000;
  uVar1 = native_sub_432808(_System_Collections_Generic_List_EventDelegate__TypeInfo_12d2a08);
  native_System_Collections_Generic_List_XmlEventCache_XmlEvent______ctor_d3ff44
            (uVar1,_Method_System_Collections_Generic_List_EventDelegate___ctor___12dc738);
  *(undefined8 *)(param_1 + 0x68) = uVar1;
  native_sub_4326e0(param_1 + 0x68,uVar1);
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


