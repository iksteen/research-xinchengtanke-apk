/* ARM64 IL2CPP native pseudocode from Ghidra.
 * Recovered implementation, not original C# source.
 * Function boundaries follow the IL2CPP method address table. */


/* UISlider$$get_isColliderEnabled @ 0xc34db4
 * bool UISlider__get_isColliderEnabled (UISlider_o* __this, const MethodInfo* method); */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* UISlider$$get_isColliderEnabled
   bool UISlider__get_isColliderEnabled (UISlider_o* __this, const MethodInfo* method); */

undefined8 native_UISlider__get_isColliderEnabled_c34db4(undefined8 param_1)

{
  long lVar1;
  ulong uVar2;
  undefined8 uVar3;
  
  if ((bRam0000000001342749 & 1) == 0) {
    native_sub_43273c(&Method_UnityEngine_Component_GetComponent_Collider2D____12e29c8);
    native_sub_43273c(&Method_UnityEngine_Component_GetComponent_Collider____12e29c0);
    native_sub_43273c(&UnityEngine_Object_TypeInfo_12d54e0);
    bRam0000000001342749 = 1;
  }
  lVar1 = native_UnityEngine_Component__GetComponent_ActiveAnimation__49daec
                    (param_1,_Method_UnityEngine_Component_GetComponent_Collider____12e29c0);
  if (((*(byte *)(_UnityEngine_Object_TypeInfo_12d54e0 + 0x133) >> 2 & 1) != 0) &&
     (*(int *)(_UnityEngine_Object_TypeInfo_12d54e0 + 0xe0) == 0)) {
    native_sub_4327ec(_UnityEngine_Object_TypeInfo_12d54e0);
  }
  uVar2 = native_UnityEngine_Object__op_Inequality_8d76fc(lVar1,0,0);
  if ((uVar2 & 1) == 0) {
    lVar1 = native_UnityEngine_Component__GetComponent_ActiveAnimation__49daec
                      (param_1,_Method_UnityEngine_Component_GetComponent_Collider2D____12e29c8);
    if (((*(byte *)(_UnityEngine_Object_TypeInfo_12d54e0 + 0x133) >> 2 & 1) != 0) &&
       (*(int *)(_UnityEngine_Object_TypeInfo_12d54e0 + 0xe0) == 0)) {
      native_sub_4327ec(_UnityEngine_Object_TypeInfo_12d54e0);
    }
    uVar2 = native_UnityEngine_Object__op_Inequality_8d76fc(lVar1,0,0);
    if ((uVar2 & 1) == 0) {
      return 0;
    }
    if (lVar1 != 0) {
      if (pcRam0000000001340940 == (code *)0x0) {
        pcRam0000000001340940 = (code *)native_sub_4326f0(&UNK_00e2c6dd);
      }
                    /* WARNING: Could not recover jumptable at 0x008d7b08. Too many branches */
                    /* WARNING: Treating indirect jump as call */
      uVar3 = (*pcRam0000000001340940)(lVar1);
      return uVar3;
    }
  }
  else if (lVar1 != 0) {
    if (pcRam0000000001343a68 == (code *)0x0) {
      pcRam0000000001343a68 = (code *)native_sub_4326f0(&UNK_00ecb640);
    }
                    /* WARNING: Could not recover jumptable at 0x00dbac48. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    uVar3 = (*pcRam0000000001343a68)(lVar1);
    return uVar3;
  }
                    /* WARNING: Subroutine does not return */
  native_sub_432810();
}



/* UISlider$$get_sliderValue @ 0xc34ee8
 * float UISlider__get_sliderValue (UISlider_o* __this, const MethodInfo* method); */

/* UISlider$$get_sliderValue
   float UISlider__get_sliderValue (UISlider_o* __this, const MethodInfo* method); */

float native_UISlider__get_sliderValue_c34ee8(long param_1)

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



/* UISlider$$set_sliderValue @ 0xc34eec
 * void UISlider__set_sliderValue (UISlider_o* __this, float value, const MethodInfo* method); */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* UISlider$$set_sliderValue
   void UISlider__set_sliderValue (UISlider_o* __this, float value, const MethodInfo* method); */

undefined8 native_UISlider__set_sliderValue_c34eec(undefined8 param_1,long *param_2)

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



/* UISlider$$get_inverted @ 0xc34ef4
 * bool UISlider__get_inverted (UISlider_o* __this, const MethodInfo* method); */

/* UISlider$$get_inverted
   bool UISlider__get_inverted (UISlider_o* __this, const MethodInfo* method); */

bool native_UISlider__get_inverted_c34ef4(long param_1)

{
  return (*(uint *)(param_1 + 0x3c) | 2) == 3;
}



/* UISlider$$set_inverted @ 0xc34f08
 * void UISlider__set_inverted (UISlider_o* __this, bool value, const MethodInfo* method); */

/* UISlider$$set_inverted
   void UISlider__set_inverted (UISlider_o* __this, bool value, const MethodInfo* method); */

void native_UISlider__set_inverted_c34f08(void)

{
  return;
}



/* UISlider$$Upgrade @ 0xc34f0c
 * void UISlider__Upgrade (UISlider_o* __this, const MethodInfo* method); */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* UISlider$$Upgrade
   void UISlider__Upgrade (UISlider_o* __this, const MethodInfo* method); */

void native_UISlider__Upgrade_c34f0c(long param_1)

{
  uint uVar1;
  int iVar2;
  ulong uVar3;
  uint uVar4;
  undefined8 uVar5;
  
  if ((bRam000000000134274a & 1) == 0) {
    native_sub_43273c(&Method_UnityEngine_Component_GetComponent_UIWidget____12e2c30);
    native_sub_43273c(&UnityEngine_Object_TypeInfo_12d54e0);
    bRam000000000134274a = 1;
  }
  if (*(int *)(param_1 + 0x7c) != 2) {
    *(undefined4 *)(param_1 + 0x38) = *(undefined4 *)(param_1 + 0x78);
    uVar5 = *(undefined8 *)(param_1 + 0x70);
    if (((*(byte *)(_UnityEngine_Object_TypeInfo_12d54e0 + 0x133) >> 2 & 1) != 0) &&
       (*(int *)(_UnityEngine_Object_TypeInfo_12d54e0 + 0xe0) == 0)) {
      native_sub_4327ec();
    }
    uVar3 = native_UnityEngine_Object__op_Inequality_8d76fc(uVar5,0,0);
    if ((uVar3 & 1) != 0) {
      if (*(long *)(param_1 + 0x70) == 0) {
                    /* WARNING: Subroutine does not return */
        native_sub_432810();
      }
      uVar5 = native_UnityEngine_Component__GetComponent_ActiveAnimation__49daec
                        (*(long *)(param_1 + 0x70),
                         _Method_UnityEngine_Component_GetComponent_UIWidget____12e2c30);
      *(undefined8 *)(param_1 + 0x30) = uVar5;
      native_sub_4326e0();
    }
    iVar2 = *(int *)(param_1 + 0x7c);
    uVar4 = 2;
    *(undefined4 *)(param_1 + 0x7c) = 2;
    if (*(byte *)(param_1 + 0x80) != 0) {
      uVar4 = 3;
    }
    uVar1 = (uint)*(byte *)(param_1 + 0x80);
    if (iVar2 != 0) {
      uVar1 = uVar4;
    }
    *(uint *)(param_1 + 0x3c) = uVar1;
  }
  return;
}



/* UISlider$$OnStart @ 0xc30e54
 * void UISlider__OnStart (UISlider_o* __this, const MethodInfo* method); */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* UISlider$$OnStart
   void UISlider__OnStart (UISlider_o* __this, const MethodInfo* method); */

undefined1  [16] native_UISlider__OnStart_c30e54(undefined1 param_1 [16],float param_2,long param_3)

{
  ulong *puVar1;
  uint uVar2;
  char cVar3;
  bool bVar4;
  ulong uVar5;
  long lVar6;
  long *plVar7;
  long lVar8;
  undefined8 uVar9;
  long *plVar10;
  undefined8 uVar11;
  float extraout_s0;
  float fVar12;
  float fVar13;
  double dVar14;
  undefined8 extraout_d0;
  undefined8 extraout_d0_00;
  undefined8 extraout_d0_01;
  undefined8 extraout_d0_02;
  undefined1 auVar15 [16];
  undefined8 extraout_var;
  undefined8 extraout_var_00;
  undefined8 extraout_var_01;
  undefined8 extraout_var_02;
  undefined1 auVar16 [16];
  float fVar17;
  double unaff_d8;
  
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
  uVar9 = *(undefined8 *)(param_3 + 0x28);
  if (((*(byte *)(_UnityEngine_Object_TypeInfo_12d54e0 + 0x133) >> 2 & 1) != 0) &&
     (*(int *)(_UnityEngine_Object_TypeInfo_12d54e0 + 0xe0) == 0)) {
    native_sub_4327ec();
  }
  uVar5 = native_UnityEngine_Object__op_Inequality_8d76fc(uVar9,0,0);
  lVar6 = param_3;
  if ((uVar5 & 1) != 0) {
    if (*(long *)(param_3 + 0x28) == 0) goto LAB_00c31308;
    uVar9 = native_UnityEngine_Component__GetComponent_ActiveAnimation__49daec
                      (*(long *)(param_3 + 0x28),
                       _Method_UnityEngine_Component_GetComponent_Collider____12e29c0);
    if (((*(byte *)(_UnityEngine_Object_TypeInfo_12d54e0 + 0x133) >> 2 & 1) != 0) &&
       (*(int *)(_UnityEngine_Object_TypeInfo_12d54e0 + 0xe0) == 0)) {
      native_sub_4327ec(_UnityEngine_Object_TypeInfo_12d54e0);
    }
    uVar5 = native_UnityEngine_Object__op_Inequality_8d76fc(uVar9,0,0);
    if ((uVar5 & 1) == 0) {
      if (*(long *)(param_3 + 0x28) == 0) goto LAB_00c31308;
      uVar9 = native_UnityEngine_Component__GetComponent_ActiveAnimation__49daec
                        (*(long *)(param_3 + 0x28),
                         _Method_UnityEngine_Component_GetComponent_Collider2D____12e29c8);
      if (((*(byte *)(_UnityEngine_Object_TypeInfo_12d54e0 + 0x133) >> 2 & 1) != 0) &&
         (*(int *)(_UnityEngine_Object_TypeInfo_12d54e0 + 0xe0) == 0)) {
        native_sub_4327ec(_UnityEngine_Object_TypeInfo_12d54e0);
      }
      uVar5 = native_UnityEngine_Object__op_Inequality_8d76fc(uVar9,0,0);
      if ((uVar5 & 1) == 0) goto LAB_00c30fd0;
    }
    lVar6 = *(long *)(param_3 + 0x28);
    if (*(long *)(param_3 + 0x28) == 0) goto LAB_00c31308;
  }
LAB_00c30fd0:
  uVar9 = native_UnityEngine_Component__get_gameObject_8da66c(lVar6,0);
  lVar6 = native_UIEventListener__Get_9ea474(uVar9,0);
  if (lVar6 == 0) goto LAB_00c31308;
  uVar11 = *(undefined8 *)(lVar6 + 0x40);
  uVar9 = native_sub_432808(_UIEventListener_BoolDelegate_TypeInfo_12d7a50);
  native_UIEventListener_BoolDelegate___ctor_554cb0
            (uVar9,param_3,_Method_UISlider_OnPressBackground___12e78b8,0);
  plVar7 = (long *)native_System_Delegate__Combine_a6cf00(uVar11,uVar9,0);
  if ((plVar7 == (long *)0x0) || (*plVar7 == _UIEventListener_BoolDelegate_TypeInfo_12d7a50)) {
    *(long **)(lVar6 + 0x40) = plVar7;
    native_sub_4326e0((undefined8 *)(lVar6 + 0x40),plVar7);
    plVar10 = (long *)(lVar6 + 0x60);
    lVar6 = *plVar10;
    uVar9 = native_sub_432808(_UIEventListener_VectorDelegate_TypeInfo_12d7a58);
    native_UIEventListener_VectorDelegate___ctor_555edc
              (uVar9,param_3,_Method_UISlider_OnDragBackground___12e78a8,0);
    plVar7 = (long *)native_System_Delegate__Combine_a6cf00(lVar6,uVar9,0);
    if ((plVar7 == (long *)0x0) || (*plVar7 == _UIEventListener_VectorDelegate_TypeInfo_12d7a58)) {
      *plVar10 = (long)plVar7;
      native_sub_4326e0(plVar10,plVar7);
      uVar9 = *(undefined8 *)(param_3 + 0x20);
      if (((*(byte *)(_UnityEngine_Object_TypeInfo_12d54e0 + 0x133) >> 2 & 1) != 0) &&
         (*(int *)(_UnityEngine_Object_TypeInfo_12d54e0 + 0xe0) == 0)) {
        native_sub_4327ec();
      }
      uVar5 = native_UnityEngine_Object__op_Inequality_8d76fc(uVar9,0,0);
      uVar9 = extraout_d0;
      uVar11 = extraout_var;
      if ((uVar5 & 1) == 0) {
LAB_00c312f0:
        auVar16._8_8_ = uVar11;
        auVar16._0_8_ = uVar9;
        return auVar16;
      }
      if (*(long *)(param_3 + 0x20) == 0) {
LAB_00c31308:
                    /* WARNING: Subroutine does not return */
        native_sub_432810();
      }
      uVar9 = native_UnityEngine_Component__GetComponent_ActiveAnimation__49daec
                        (*(long *)(param_3 + 0x20),
                         _Method_UnityEngine_Component_GetComponent_Collider____12e29c0);
      if (((*(byte *)(_UnityEngine_Object_TypeInfo_12d54e0 + 0x133) >> 2 & 1) != 0) &&
         (*(int *)(_UnityEngine_Object_TypeInfo_12d54e0 + 0xe0) == 0)) {
        native_sub_4327ec(_UnityEngine_Object_TypeInfo_12d54e0);
      }
      uVar5 = native_UnityEngine_Object__op_Inequality_8d76fc(uVar9,0,0);
      if ((uVar5 & 1) == 0) {
        if (*(long *)(param_3 + 0x20) == 0) goto LAB_00c31308;
        uVar9 = native_UnityEngine_Component__GetComponent_ActiveAnimation__49daec
                          (*(long *)(param_3 + 0x20),
                           _Method_UnityEngine_Component_GetComponent_Collider2D____12e29c8);
        if (((*(byte *)(_UnityEngine_Object_TypeInfo_12d54e0 + 0x133) >> 2 & 1) != 0) &&
           (*(int *)(_UnityEngine_Object_TypeInfo_12d54e0 + 0xe0) == 0)) {
          native_sub_4327ec(_UnityEngine_Object_TypeInfo_12d54e0);
        }
        uVar5 = native_UnityEngine_Object__op_Inequality_8d76fc(uVar9,0,0);
        uVar9 = extraout_d0_00;
        uVar11 = extraout_var_00;
        if ((uVar5 & 1) == 0) goto LAB_00c312f0;
      }
      uVar9 = *(undefined8 *)(param_3 + 0x30);
      if (((*(byte *)(_UnityEngine_Object_TypeInfo_12d54e0 + 0x133) >> 2 & 1) != 0) &&
         (*(int *)(_UnityEngine_Object_TypeInfo_12d54e0 + 0xe0) == 0)) {
        native_sub_4327ec();
      }
      uVar5 = native_UnityEngine_Object__op_Equality_8e9a3c(uVar9,0,0);
      if ((uVar5 & 1) == 0) {
        if (*(long *)(param_3 + 0x30) == 0) goto LAB_00c31308;
        uVar11 = *(undefined8 *)(param_3 + 0x20);
        uVar9 = native_UIRect__get_cachedTransform_c27c58();
        if (((*(byte *)(_UnityEngine_Object_TypeInfo_12d54e0 + 0x133) >> 2 & 1) != 0) &&
           (*(int *)(_UnityEngine_Object_TypeInfo_12d54e0 + 0xe0) == 0)) {
          native_sub_4327ec(_UnityEngine_Object_TypeInfo_12d54e0);
        }
        uVar5 = native_UnityEngine_Object__op_Inequality_8d76fc(uVar11,uVar9,0);
        uVar9 = extraout_d0_01;
        uVar11 = extraout_var_01;
        if ((uVar5 & 1) == 0) goto LAB_00c312f0;
      }
      if (*(long *)(param_3 + 0x20) == 0) goto LAB_00c31308;
      uVar9 = native_UnityEngine_Component__get_gameObject_8da66c(*(long *)(param_3 + 0x20),0);
      lVar6 = native_UIEventListener__Get_9ea474(uVar9,0);
      if (lVar6 == 0) goto LAB_00c31308;
      uVar11 = *(undefined8 *)(lVar6 + 0x40);
      uVar9 = native_sub_432808(_UIEventListener_BoolDelegate_TypeInfo_12d7a50);
      native_UIEventListener_BoolDelegate___ctor_554cb0
                (uVar9,param_3,_Method_UISlider_OnPressForeground___12e78c0,0);
      plVar7 = (long *)native_System_Delegate__Combine_a6cf00(uVar11,uVar9,0);
      if ((plVar7 == (long *)0x0) || (*plVar7 == _UIEventListener_BoolDelegate_TypeInfo_12d7a50)) {
        *(long **)(lVar6 + 0x40) = plVar7;
        native_sub_4326e0((undefined8 *)(lVar6 + 0x40),plVar7);
        plVar10 = (long *)(lVar6 + 0x60);
        lVar6 = *plVar10;
        uVar9 = native_sub_432808(_UIEventListener_VectorDelegate_TypeInfo_12d7a58);
        native_UIEventListener_VectorDelegate___ctor_555edc
                  (uVar9,param_3,_Method_UISlider_OnDragForeground___12e78b0,0);
        plVar7 = (long *)native_System_Delegate__Combine_a6cf00(lVar6,uVar9,0);
        if ((plVar7 == (long *)0x0) || (*plVar7 == _UIEventListener_VectorDelegate_TypeInfo_12d7a58)
           ) {
          *plVar10 = (long)plVar7;
          if (iRam0000000001345318 != 0) {
            puVar1 = (ulong *)(((ulong)plVar10 >> 0x12 & 0x7fff) * 8 + 0x138ecd8);
            do {
              cVar3 = '\x01';
              bVar4 = (bool)ExclusiveMonitorPass(puVar1,0x10);
              if (bVar4) {
                *puVar1 = *puVar1 | 1L << ((ulong)plVar10 >> 0xc & 0x3f);
                cVar3 = ExclusiveMonitorsStatus();
              }
            } while (cVar3 != '\0');
          }
          auVar15._8_8_ = extraout_var_02;
          auVar15._0_8_ = extraout_d0_02;
          return auVar15;
        }
      }
    }
  }
  lVar6 = native_sub_432b04(plVar7);
  if ((bRam0000000001342730 & 1) == 0) {
    native_sub_43273c(&UnityEngine_Object_TypeInfo_12d54e0);
    bRam0000000001342730 = 1;
  }
  uVar9 = *(undefined8 *)(lVar6 + 0x30);
  if (((*(byte *)(_UnityEngine_Object_TypeInfo_12d54e0 + 0x133) >> 2 & 1) != 0) &&
     (*(int *)(_UnityEngine_Object_TypeInfo_12d54e0 + 0xe0) == 0)) {
    native_sub_4327ec();
  }
  uVar5 = native_UnityEngine_Object__op_Inequality_8d76fc(uVar9,0,0);
  if ((uVar5 & 1) == 0) {
    if ((bRam00000000013426ff & 1) == 0) {
      native_sub_43273c(&UnityEngine_Object_TypeInfo_12d54e0);
      bRam00000000013426ff = 1;
    }
    uVar9 = *(undefined8 *)(lVar6 + 0x30);
    if (((*(byte *)(_UnityEngine_Object_TypeInfo_12d54e0 + 0x133) >> 2 & 1) != 0) &&
       (*(int *)(_UnityEngine_Object_TypeInfo_12d54e0 + 0xe0) == 0)) {
      native_sub_4327ec();
    }
    uVar5 = native_UnityEngine_Object__op_Inequality_8d76fc(uVar9,0,0);
    if ((uVar5 & 1) != 0) {
      plVar7 = *(long **)(lVar6 + 0x30);
      if ((plVar7 != (long *)0x0) &&
         (lVar8 = (**(code **)(*plVar7 + 0x1d8))(plVar7,*(undefined8 *)(*plVar7 + 0x1e0)),
         lVar8 != 0)) {
        if (2 < *(uint *)(lVar8 + 0x18)) {
          if (*(uint *)(lVar6 + 0x3c) < 2) {
            fVar12 = *(float *)(lVar8 + 0x38) - *(float *)(lVar8 + 0x20);
            param_2 = extraout_s0 - *(float *)(lVar8 + 0x20);
          }
          else {
            fVar12 = *(float *)(lVar8 + 0x3c) - *(float *)(lVar8 + 0x24);
            param_2 = param_2 - *(float *)(lVar8 + 0x24);
          }
          fVar13 = 1.0 - param_2 / fVar12;
          if ((*(uint *)(lVar6 + 0x3c) | 2) != 3) {
            fVar13 = param_2 / fVar12;
          }
          return ZEXT416((uint)fVar13);
        }
        uVar9 = native_sub_43283c();
                    /* WARNING: Subroutine does not return */
        native_sub_4327dc(uVar9,0);
      }
                    /* WARNING: Subroutine does not return */
      native_sub_432810();
    }
  }
  else {
    fVar12 = (float)native_UnityEngine_Mathf__Clamp01_8d9d9c(*(undefined4 *)(lVar6 + 0x84),0);
    plVar7 = *(long **)(lVar6 + 0x30);
    if ((plVar7 == (long *)0x0) ||
       (lVar8 = (**(code **)(*plVar7 + 0x1d8))(plVar7,*(undefined8 *)(*plVar7 + 0x1e0)), lVar8 == 0)
       ) {
                    /* WARNING: Subroutine does not return */
      native_sub_432810();
    }
    uVar2 = *(uint *)(lVar8 + 0x18);
    if (uVar2 == 0) goto LAB_00c314fc;
    fVar12 = fVar12 * 0.5;
    if (*(uint *)(lVar6 + 0x3c) < 2) {
      if (uVar2 < 3) {
LAB_00c314fc:
        uVar9 = native_sub_43283c();
                    /* WARNING: Subroutine does not return */
        native_sub_4327dc(uVar9,0);
      }
      fVar13 = (float)native_UnityEngine_Mathf__Lerp_8e5224
                                (*(undefined4 *)(lVar8 + 0x20),*(undefined4 *)(lVar8 + 0x38),fVar12,
                                 0);
      if ((*(uint *)(lVar8 + 0x18) == 0) || (*(uint *)(lVar8 + 0x18) < 3)) goto LAB_00c314fc;
      fVar12 = (float)native_UnityEngine_Mathf__Lerp_8e5224
                                (*(undefined4 *)(lVar8 + 0x20),*(undefined4 *)(lVar8 + 0x38),
                                 1.0 - fVar12,0);
      fVar17 = fVar12 - fVar13;
      if (fVar17 != 0.0) {
        if ((*(uint *)(lVar6 + 0x3c) | 2) == 3) {
          fVar12 = fVar12 - extraout_s0;
        }
        else {
          fVar12 = extraout_s0 - fVar13;
        }
        goto LAB_00c314e4;
      }
    }
    else {
      if ((uVar2 < 2) ||
         (fVar13 = (float)native_UnityEngine_Mathf__Lerp_8e5224
                                    (*(undefined4 *)(lVar8 + 0x24),*(undefined4 *)(lVar8 + 0x30),
                                     fVar12,0), *(uint *)(lVar8 + 0x18) < 4)) goto LAB_00c314fc;
      fVar12 = (float)native_UnityEngine_Mathf__Lerp_8e5224
                                (*(undefined4 *)(lVar8 + 0x48),*(undefined4 *)(lVar8 + 0x3c),
                                 1.0 - fVar12,0);
      fVar17 = fVar12 - fVar13;
      if (fVar17 != 0.0) {
        if ((*(uint *)(lVar6 + 0x3c) | 2) == 3) {
          fVar12 = fVar12 - param_2;
        }
        else {
          fVar12 = param_2 - fVar13;
        }
LAB_00c314e4:
        return ZEXT416((uint)(fVar12 / fVar17));
      }
    }
  }
  fVar12 = *(float *)(lVar6 + 0x38);
  if (*(int *)(lVar6 + 100) < 2) goto LAB_00c2b7a8;
  fVar12 = fVar12 * (float)(*(int *)(lVar6 + 100) + -1);
  dVar14 = (double)func_0x002c9600((double)fVar12,&stack0xffffffffffffff88);
  if (0.0 <= fVar12) {
    if (dVar14 == 0.5) {
      fVar13 = 1.0;
      goto LAB_00c2b764;
    }
    fVar12 = (float)(int)(fVar12 + 0.5);
  }
  else if (dVar14 == -0.5) {
    fVar13 = -1.0;
LAB_00c2b764:
    fVar12 = (float)unaff_d8;
    if (((long)unaff_d8 & 1U) != 0) {
      fVar12 = (float)unaff_d8 + fVar13;
    }
  }
  else {
    fVar12 = (float)(int)(fVar12 + -0.5);
  }
  fVar12 = fVar12 / (float)(*(int *)(lVar6 + 100) + -1);
LAB_00c2b7a8:
  return ZEXT416((uint)fVar12);
}



/* UISlider$$OnPressBackground @ 0xc34ff0
 * void UISlider__OnPressBackground (UISlider_o* __this, UnityEngine_GameObject_o* go, bool isPressed, const MethodInfo* method); */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* UISlider$$OnPressBackground
   void UISlider__OnPressBackground (UISlider_o* __this, UnityEngine_GameObject_o* go, bool
   isPressed, const MethodInfo* method); */

void native_UISlider__OnPressBackground_c34ff0(long param_1,undefined8 param_2,ulong param_3)

{
  long *plVar1;
  ushort uVar2;
  int iVar3;
  long lVar4;
  undefined8 *puVar5;
  ulong uVar6;
  ulong uVar7;
  long lVar8;
  undefined8 extraout_x1;
  undefined8 extraout_x1_00;
  undefined8 extraout_x1_01;
  undefined8 extraout_x1_02;
  undefined8 uVar9;
  long lVar10;
  long lVar11;
  int *piVar12;
  code *pcVar13;
  long lVar14;
  long *plVar15;
  long lStack_48;
  
  if ((bRam000000000134274c & 1) == 0) {
    native_sub_43273c(&UICamera_TypeInfo_12d6410);
    bRam000000000134274c = 1;
  }
  if (((*(byte *)(_UICamera_TypeInfo_12d6410 + 0x133) >> 2 & 1) != 0) &&
     (*(int *)(_UICamera_TypeInfo_12d6410 + 0xe0) == 0)) {
    native_sub_4327ec();
  }
  iVar3 = native_UICamera__get_currentScheme_c92518(0);
  if (iVar3 == 2) {
    return;
  }
  if (((*(byte *)(_UICamera_TypeInfo_12d6410 + 0x133) >> 2 & 1) != 0) &&
     (*(int *)(_UICamera_TypeInfo_12d6410 + 0xe0) == 0)) {
    native_sub_4327ec();
  }
  *(undefined8 *)(param_1 + 0x58) =
       *(undefined8 *)(*(long *)(_UICamera_TypeInfo_12d6410 + 0xb8) + 0xc0);
  native_sub_4326e0();
  native_UICamera__get_lastEventPosition_c94418(0);
  native_UIProgressBar__ScreenToValue_c2c3c0(param_1);
  native_UIProgressBar__Set_c2b7c4(param_1,1);
  if ((param_3 & 1) != 0) {
    return;
  }
  lVar8 = *(long *)(param_1 + 0x18);
  if (lVar8 == 0) {
    return;
  }
  uVar9 = 0;
  lStack_48 = lVar8;
  lVar10 = *(long *)(lVar8 + 0x68);
  if (lVar10 == 0) {
    plVar15 = &lStack_48;
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
      native_sub_4327f4(lVar4,uVar9);
    }
    uVar6 = native_sub_432768(lVar4);
    if ((uVar6 & 1) == 0) {
      if ((((plVar1 == (long *)0x0) || (*(short *)(lVar4 + 0x48) == -1)) ||
          ((*(byte *)(*plVar1 + 0x115) & 1) != 0)) || (*(long *)(lVar8 + 0x18) == 0))
      goto LAB_00558ebc;
      uVar6 = native_sub_432760(lVar4);
      uVar7 = native_sub_432b64(lVar4);
      if ((uVar6 & 1) == 0) {
        uVar2 = *(ushort *)(lVar4 + 0x48);
        if ((uVar7 & 1) == 0) {
          lVar4 = *plVar1 + (ulong)uVar2 * 0x10;
          (**(code **)(lVar4 + 0x138))(plVar1,*(undefined8 *)(lVar4 + 0x140));
          uVar9 = extraout_x1;
          goto LAB_00558ec8;
        }
        lVar4 = native_sub_432764(lVar4);
        lVar11 = *plVar1;
        if ((ulong)*(ushort *)(lVar11 + 0x12a) != 0) {
          uVar6 = 0;
          piVar12 = (int *)(*(long *)(lVar11 + 0xb0) + 8);
          do {
            if (*(long *)(piVar12 + -2) == lVar4) {
              puVar5 = (undefined8 *)(lVar11 + (long)(int)(*piVar12 + (uint)uVar2) * 0x10 + 0x138);
              goto LAB_00558de4;
            }
            uVar6 = uVar6 + 1;
            piVar12 = piVar12 + 4;
          } while (uVar6 < *(ushort *)(lVar11 + 0x12a));
        }
        puVar5 = (undefined8 *)native_sub_3c9b34(plVar1,lVar4,(ulong)uVar2);
LAB_00558de4:
        pcVar13 = (code *)*puVar5;
        puVar5 = (undefined8 *)puVar5[1];
      }
      else {
        if ((uVar7 & 1) == 0) {
          uVar9 = *(undefined8 *)(*plVar1 + (ulong)*(ushort *)(lVar4 + 0x48) * 0x10 + 0x140);
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
                goto LAB_00558dbc;
              }
              uVar6 = uVar6 + 1;
              piVar12 = piVar12 + 4;
            } while (uVar6 < *(ushort *)(lVar11 + 0x12a));
          }
          lVar11 = native_sub_3c9b34(plVar1);
LAB_00558dbc:
          uVar9 = *(undefined8 *)(lVar11 + 8);
        }
        puVar5 = (undefined8 *)native_sub_4327e8(uVar9,lVar4);
        pcVar13 = (code *)*puVar5;
      }
      (*pcVar13)(plVar1,puVar5);
      uVar9 = extraout_x1_00;
    }
    else if (*(char *)(lVar4 + 0x4a) == '\0') {
      (*pcVar13)(lVar4);
      uVar9 = extraout_x1_01;
    }
    else {
LAB_00558ebc:
      (*pcVar13)(plVar1,lVar4);
      uVar9 = extraout_x1_02;
    }
LAB_00558ec8:
    lVar10 = lVar10 + 1;
    if (lVar10 == lVar14) {
      return;
    }
  } while( true );
}



/* UISlider$$OnDragBackground @ 0xc350d4
 * void UISlider__OnDragBackground (UISlider_o* __this, UnityEngine_GameObject_o* go, UnityEngine_Vector2_o delta, const MethodInfo* method); */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* UISlider$$OnDragBackground
   void UISlider__OnDragBackground (UISlider_o* __this, UnityEngine_GameObject_o* go,
   UnityEngine_Vector2_o delta, const MethodInfo* method); */

undefined8 native_UISlider__OnDragBackground_c350d4(long *param_1)

{
  ulong uVar1;
  long *plVar2;
  undefined8 *puVar3;
  undefined8 uVar4;
  long lVar5;
  float fVar6;
  float fVar7;
  
  if ((bRam000000000134274d & 1) == 0) {
    native_sub_43273c(&UICamera_TypeInfo_12d6410);
    bRam000000000134274d = 1;
  }
  if (((*(byte *)(_UICamera_TypeInfo_12d6410 + 0x133) >> 2 & 1) != 0) &&
     (*(int *)(_UICamera_TypeInfo_12d6410 + 0xe0) == 0)) {
    native_sub_4327ec();
  }
  uVar4 = native_UICamera__get_currentScheme_c92518(0);
  if ((int)uVar4 != 2) {
    if (((*(byte *)(_UICamera_TypeInfo_12d6410 + 0x133) >> 2 & 1) != 0) &&
       (*(int *)(_UICamera_TypeInfo_12d6410 + 0xe0) == 0)) {
      native_sub_4327ec();
    }
    param_1[0xb] = *(long *)(*(long *)(_UICamera_TypeInfo_12d6410 + 0xb8) + 0xc0);
    native_sub_4326e0();
    native_UICamera__get_lastEventPosition_c94418(0);
    uVar4 = native_UIProgressBar__ScreenToValue_c2c3c0(param_1);
    if ((bRam00000000013426fb & 1) == 0) {
      native_sub_43273c(&EventDelegate_TypeInfo_12d4590);
      native_sub_43273c(&NGUITools_TypeInfo_12d53c8);
      native_sub_43273c(&UIProgressBar_TypeInfo_12d6498);
      bRam00000000013426fb = 1;
    }
    fVar6 = (float)native_UnityEngine_Mathf__Clamp01_8d9d9c(uVar4,0);
    if (*(float *)(param_1 + 7) == fVar6) {
      uVar4 = 0;
    }
    else {
      fVar7 = (float)native_UIProgressBar__get_value_c2b6f0(param_1);
      *(float *)(param_1 + 7) = fVar6;
      if (((char)param_1[8] != '\0') &&
         (fVar6 = (float)native_UIProgressBar__get_value_c2b6f0(param_1), fVar7 != fVar6)) {
        if (((*(byte *)(_NGUITools_TypeInfo_12d53c8 + 0x133) >> 2 & 1) != 0) &&
           (*(int *)(_NGUITools_TypeInfo_12d53c8 + 0xe0) == 0)) {
          native_sub_4327ec();
        }
        uVar1 = native_NGUITools__GetActive_72d02c(param_1,0);
        if ((uVar1 & 1) != 0) {
          lVar5 = param_1[0xd];
          if (((*(byte *)(_EventDelegate_TypeInfo_12d4590 + 0x133) >> 2 & 1) != 0) &&
             (*(int *)(_EventDelegate_TypeInfo_12d4590 + 0xe0) == 0)) {
            native_sub_4327ec();
          }
          uVar1 = native_EventDelegate__IsValid_deef08(lVar5,0);
          if ((uVar1 & 1) != 0) {
            plVar2 = *(long **)(_UIProgressBar_TypeInfo_12d6498 + 0xb8);
            *plVar2 = (long)param_1;
            native_sub_4326e0(plVar2,param_1);
            lVar5 = param_1[0xd];
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
        (**(code **)(*param_1 + 0x1a8))(param_1,*(undefined8 *)(*param_1 + 0x1b0));
      }
      uVar4 = 1;
    }
    return uVar4;
  }
  return uVar4;
}



/* UISlider$$OnPressForeground @ 0xc35194
 * void UISlider__OnPressForeground (UISlider_o* __this, UnityEngine_GameObject_o* go, bool isPressed, const MethodInfo* method); */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* UISlider$$OnPressForeground
   void UISlider__OnPressForeground (UISlider_o* __this, UnityEngine_GameObject_o* go, bool
   isPressed, const MethodInfo* method); */

void native_UISlider__OnPressForeground_c35194(long param_1,undefined8 param_2,ulong param_3)

{
  long *plVar1;
  ushort uVar2;
  int iVar3;
  long lVar4;
  undefined8 *puVar5;
  ulong uVar6;
  ulong uVar7;
  long lVar8;
  undefined8 extraout_x1;
  undefined8 extraout_x1_00;
  undefined8 extraout_x1_01;
  undefined8 extraout_x1_02;
  long lVar9;
  long lVar10;
  int *piVar11;
  undefined8 uVar12;
  code *pcVar13;
  long lVar14;
  long *plVar15;
  float fVar16;
  float fVar17;
  long lStack_48;
  
  if ((bRam000000000134274e & 1) == 0) {
    native_sub_43273c(&UnityEngine_Object_TypeInfo_12d54e0);
    native_sub_43273c(&UICamera_TypeInfo_12d6410);
    bRam000000000134274e = 1;
  }
  if (((*(byte *)(_UICamera_TypeInfo_12d6410 + 0x133) >> 2 & 1) != 0) &&
     (*(int *)(_UICamera_TypeInfo_12d6410 + 0xe0) == 0)) {
    native_sub_4327ec();
  }
  iVar3 = native_UICamera__get_currentScheme_c92518(0);
  if (iVar3 == 2) {
    return;
  }
  if (((*(byte *)(_UICamera_TypeInfo_12d6410 + 0x133) >> 2 & 1) != 0) &&
     (*(int *)(_UICamera_TypeInfo_12d6410 + 0xe0) == 0)) {
    native_sub_4327ec();
  }
  *(undefined8 *)(param_1 + 0x58) =
       *(undefined8 *)(*(long *)(_UICamera_TypeInfo_12d6410 + 0xb8) + 0xc0);
  native_sub_4326e0();
  if ((param_3 & 1) != 0) {
    uVar12 = *(undefined8 *)(param_1 + 0x30);
    if (((*(byte *)(_UnityEngine_Object_TypeInfo_12d54e0 + 0x133) >> 2 & 1) != 0) &&
       (*(int *)(_UnityEngine_Object_TypeInfo_12d54e0 + 0xe0) == 0)) {
      native_sub_4327ec();
    }
    uVar7 = native_UnityEngine_Object__op_Equality_8e9a3c(uVar12,0,0);
    fVar16 = 0.0;
    if ((uVar7 & 1) == 0) {
      fVar16 = (float)native_UIProgressBar__get_value_c2b6f0(param_1);
      if (((*(byte *)(_UICamera_TypeInfo_12d6410 + 0x133) >> 2 & 1) != 0) &&
         (*(int *)(_UICamera_TypeInfo_12d6410 + 0xe0) == 0)) {
        native_sub_4327ec();
      }
      native_UICamera__get_lastEventPosition_c94418(0);
      fVar17 = (float)native_UIProgressBar__ScreenToValue_c2c3c0(param_1);
      fVar16 = fVar16 - fVar17;
    }
    *(float *)(param_1 + 0x60) = fVar16;
    return;
  }
  lVar8 = *(long *)(param_1 + 0x18);
  if (lVar8 == 0) {
    return;
  }
  uVar12 = 0;
  lStack_48 = lVar8;
  lVar9 = *(long *)(lVar8 + 0x68);
  if (lVar9 == 0) {
    plVar15 = &lStack_48;
    lVar14 = 1;
  }
  else {
    lVar14 = *(long *)(lVar9 + 0x18);
    if (lVar14 == 0) {
      return;
    }
    plVar15 = (long *)(lVar9 + 0x20);
  }
  lVar9 = 0;
  do {
    lVar10 = plVar15[lVar9];
    plVar1 = *(long **)(lVar10 + 0x20);
    lVar4 = *(long *)(lVar10 + 0x28);
    pcVar13 = *(code **)(lVar10 + 0x10);
    if (*(short *)(lVar4 + 0x48) == -1) {
      native_sub_4327f4(lVar4,uVar12);
    }
    uVar7 = native_sub_432768(lVar4);
    if ((uVar7 & 1) == 0) {
      if ((((plVar1 == (long *)0x0) || (*(short *)(lVar4 + 0x48) == -1)) ||
          ((*(byte *)(*plVar1 + 0x115) & 1) != 0)) || (*(long *)(lVar8 + 0x18) == 0))
      goto LAB_00558ebc;
      uVar7 = native_sub_432760(lVar4);
      uVar6 = native_sub_432b64(lVar4);
      if ((uVar7 & 1) == 0) {
        uVar2 = *(ushort *)(lVar4 + 0x48);
        if ((uVar6 & 1) == 0) {
          lVar4 = *plVar1 + (ulong)uVar2 * 0x10;
          (**(code **)(lVar4 + 0x138))(plVar1,*(undefined8 *)(lVar4 + 0x140));
          uVar12 = extraout_x1;
          goto LAB_00558ec8;
        }
        lVar4 = native_sub_432764(lVar4);
        lVar10 = *plVar1;
        if ((ulong)*(ushort *)(lVar10 + 0x12a) != 0) {
          uVar7 = 0;
          piVar11 = (int *)(*(long *)(lVar10 + 0xb0) + 8);
          do {
            if (*(long *)(piVar11 + -2) == lVar4) {
              puVar5 = (undefined8 *)(lVar10 + (long)(int)(*piVar11 + (uint)uVar2) * 0x10 + 0x138);
              goto LAB_00558de4;
            }
            uVar7 = uVar7 + 1;
            piVar11 = piVar11 + 4;
          } while (uVar7 < *(ushort *)(lVar10 + 0x12a));
        }
        puVar5 = (undefined8 *)native_sub_3c9b34(plVar1,lVar4,(ulong)uVar2);
LAB_00558de4:
        pcVar13 = (code *)*puVar5;
        puVar5 = (undefined8 *)puVar5[1];
      }
      else {
        if ((uVar6 & 1) == 0) {
          uVar12 = *(undefined8 *)(*plVar1 + (ulong)*(ushort *)(lVar4 + 0x48) * 0x10 + 0x140);
        }
        else {
          lVar10 = *plVar1;
          if ((ulong)*(ushort *)(lVar10 + 0x12a) != 0) {
            uVar7 = 0;
            piVar11 = (int *)(*(long *)(lVar10 + 0xb0) + 8);
            do {
              if (*(long *)(piVar11 + -2) == *(long *)(lVar4 + 0x18)) {
                lVar10 = lVar10 + (long)(int)(*piVar11 + (uint)*(ushort *)(lVar4 + 0x48)) * 0x10 +
                         0x138;
                goto LAB_00558dbc;
              }
              uVar7 = uVar7 + 1;
              piVar11 = piVar11 + 4;
            } while (uVar7 < *(ushort *)(lVar10 + 0x12a));
          }
          lVar10 = native_sub_3c9b34(plVar1);
LAB_00558dbc:
          uVar12 = *(undefined8 *)(lVar10 + 8);
        }
        puVar5 = (undefined8 *)native_sub_4327e8(uVar12,lVar4);
        pcVar13 = (code *)*puVar5;
      }
      (*pcVar13)(plVar1,puVar5);
      uVar12 = extraout_x1_00;
    }
    else if (*(char *)(lVar4 + 0x4a) == '\0') {
      (*pcVar13)(lVar4);
      uVar12 = extraout_x1_01;
    }
    else {
LAB_00558ebc:
      (*pcVar13)(plVar1,lVar4);
      uVar12 = extraout_x1_02;
    }
LAB_00558ec8:
    lVar9 = lVar9 + 1;
    if (lVar9 == lVar14) {
      return;
    }
  } while( true );
}



/* UISlider$$OnDragForeground @ 0xc352f0
 * void UISlider__OnDragForeground (UISlider_o* __this, UnityEngine_GameObject_o* go, UnityEngine_Vector2_o delta, const MethodInfo* method); */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* UISlider$$OnDragForeground
   void UISlider__OnDragForeground (UISlider_o* __this, UnityEngine_GameObject_o* go,
   UnityEngine_Vector2_o delta, const MethodInfo* method); */

undefined8 native_UISlider__OnDragForeground_c352f0(long *param_1)

{
  ulong uVar1;
  long *plVar2;
  undefined8 *puVar3;
  undefined8 uVar4;
  long lVar5;
  float fVar6;
  float fVar7;
  
  if ((bRam000000000134274f & 1) == 0) {
    native_sub_43273c(&UICamera_TypeInfo_12d6410);
    bRam000000000134274f = 1;
  }
  if (((*(byte *)(_UICamera_TypeInfo_12d6410 + 0x133) >> 2 & 1) != 0) &&
     (*(int *)(_UICamera_TypeInfo_12d6410 + 0xe0) == 0)) {
    native_sub_4327ec();
  }
  uVar4 = native_UICamera__get_currentScheme_c92518(0);
  if ((int)uVar4 != 2) {
    if (((*(byte *)(_UICamera_TypeInfo_12d6410 + 0x133) >> 2 & 1) != 0) &&
       (*(int *)(_UICamera_TypeInfo_12d6410 + 0xe0) == 0)) {
      native_sub_4327ec();
    }
    param_1[0xb] = *(long *)(*(long *)(_UICamera_TypeInfo_12d6410 + 0xb8) + 0xc0);
    native_sub_4326e0();
    fVar7 = *(float *)(param_1 + 0xc);
    native_UICamera__get_lastEventPosition_c94418(0);
    fVar6 = (float)native_UIProgressBar__ScreenToValue_c2c3c0(param_1);
    if ((bRam00000000013426fb & 1) == 0) {
      native_sub_43273c(&EventDelegate_TypeInfo_12d4590);
      native_sub_43273c(&NGUITools_TypeInfo_12d53c8);
      native_sub_43273c(&UIProgressBar_TypeInfo_12d6498);
      bRam00000000013426fb = 1;
    }
    fVar6 = (float)native_UnityEngine_Mathf__Clamp01_8d9d9c(fVar7 + fVar6,0);
    if (*(float *)(param_1 + 7) == fVar6) {
      uVar4 = 0;
    }
    else {
      fVar7 = (float)native_UIProgressBar__get_value_c2b6f0(param_1);
      *(float *)(param_1 + 7) = fVar6;
      if (((char)param_1[8] != '\0') &&
         (fVar6 = (float)native_UIProgressBar__get_value_c2b6f0(param_1), fVar7 != fVar6)) {
        if (((*(byte *)(_NGUITools_TypeInfo_12d53c8 + 0x133) >> 2 & 1) != 0) &&
           (*(int *)(_NGUITools_TypeInfo_12d53c8 + 0xe0) == 0)) {
          native_sub_4327ec();
        }
        uVar1 = native_NGUITools__GetActive_72d02c(param_1,0);
        if ((uVar1 & 1) != 0) {
          lVar5 = param_1[0xd];
          if (((*(byte *)(_EventDelegate_TypeInfo_12d4590 + 0x133) >> 2 & 1) != 0) &&
             (*(int *)(_EventDelegate_TypeInfo_12d4590 + 0xe0) == 0)) {
            native_sub_4327ec();
          }
          uVar1 = native_EventDelegate__IsValid_deef08(lVar5,0);
          if ((uVar1 & 1) != 0) {
            plVar2 = *(long **)(_UIProgressBar_TypeInfo_12d6498 + 0xb8);
            *plVar2 = (long)param_1;
            native_sub_4326e0(plVar2,param_1);
            lVar5 = param_1[0xd];
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
        (**(code **)(*param_1 + 0x1a8))(param_1,*(undefined8 *)(*param_1 + 0x1b0));
      }
      uVar4 = 1;
    }
    return uVar4;
  }
  return uVar4;
}



/* UISlider$$OnPan @ 0xc353c4
 * void UISlider__OnPan (UISlider_o* __this, UnityEngine_Vector2_o delta, const MethodInfo* method); */

/* UISlider$$OnPan
   void UISlider__OnPan (UISlider_o* __this, UnityEngine_Vector2_o delta, const MethodInfo* method);
    */

void native_UISlider__OnPan_c353c4(float param_1,float param_2,long param_3)

{
  ulong uVar1;
  undefined4 uVar2;
  
  uVar1 = native_UnityEngine_Behaviour__get_enabled_8d7acc(param_3,0);
  if (((uVar1 & 1) == 0) ||
     (uVar1 = native_UISlider__get_isColliderEnabled_c34db4(param_3), (uVar1 & 1) == 0)) {
    return;
  }
  uVar1 = native_UnityEngine_Behaviour__get_enabled_8d7acc(param_3,0);
  if ((uVar1 & 1) != 0) {
    switch(*(undefined4 *)(param_3 + 0x3c)) {
    case 0:
      param_2 = param_1 + *(float *)(param_3 + 0x38);
      break;
    case 1:
      param_2 = *(float *)(param_3 + 0x38) - param_1;
      break;
    case 2:
      param_2 = param_2 + *(float *)(param_3 + 0x38);
      break;
    case 3:
      param_2 = *(float *)(param_3 + 0x38) - param_2;
      break;
    default:
      goto LAB_00c2d124;
    }
    uVar2 = native_UnityEngine_Mathf__Clamp01_8d9d9c(param_2,0);
    native_UIProgressBar__Set_c2b7c4(param_3,1);
    *(undefined4 *)(param_3 + 0x38) = uVar2;
  }
LAB_00c2d124:
  return;
}



/* UISlider$$.ctor @ 0xc31780
 * void UISlider___ctor (UISlider_o* __this, const MethodInfo* method); */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* UISlider$$.ctor
   void UISlider___ctor (UISlider_o* __this, const MethodInfo* method); */

undefined1  [16] native_UISlider___ctor_c31780(ulong param_1)

{
  undefined8 uVar1;
  undefined1 auVar2 [16];
  
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


