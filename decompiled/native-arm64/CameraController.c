/* ARM64 IL2CPP native pseudocode from Ghidra.
 * Recovered implementation, not original C# source.
 * Function boundaries follow the IL2CPP method address table. */


/* TMPro.Examples.CameraController$$Awake @ 0xdd405c
 * void TMPro_Examples_CameraController__Awake (TMPro_Examples_CameraController_o* __this, const MethodInfo* method); */

/* TMPro.Examples.CameraController$$Awake
   void TMPro_Examples_CameraController__Awake (TMPro_Examples_CameraController_o* __this, const
   MethodInfo* method); */

void native_TMPro_Examples_CameraController__Awake_dd405c(long param_1)

{
  int iVar1;
  undefined8 uVar2;
  
  iVar1 = native_UnityEngine_QualitySettings__get_vSyncCount_76219c(0);
  if (iVar1 < 1) {
    uVar2 = 0xffffffff;
  }
  else {
    uVar2 = 0x3c;
  }
  native_UnityEngine_Application__set_targetFrameRate_8d6210(uVar2,0);
  iVar1 = native_UnityEngine_Application__get_platform_8d6250(0);
  if ((iVar1 == 8) || (iVar1 = native_UnityEngine_Application__get_platform_8d6250(0), iVar1 == 0xb)
     ) {
    native_UnityEngine_Input__set_simulateMouseWithTouches_dbdce4(0,0);
  }
  uVar2 = native_UnityEngine_Component__get_transform_8da62c(param_1,0);
  *(undefined8 *)(param_1 + 0x18) = uVar2;
  native_sub_4326e0(param_1 + 0x18);
  *(undefined1 *)(param_1 + 0x52) = *(undefined1 *)(param_1 + 0x50);
  return;
}



/* TMPro.Examples.CameraController$$Start @ 0xdd40ec
 * void TMPro_Examples_CameraController__Start (TMPro_Examples_CameraController_o* __this, const MethodInfo* method); */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* TMPro.Examples.CameraController$$Start
   void TMPro_Examples_CameraController__Start (TMPro_Examples_CameraController_o* __this, const
   MethodInfo* method); */

void native_TMPro_Examples_CameraController__Start_dd40ec(long param_1)

{
  ulong *puVar1;
  char cVar2;
  bool bVar3;
  ulong uVar4;
  long lVar5;
  undefined8 *puVar6;
  undefined8 *puVar7;
  undefined8 uVar8;
  
  if ((bRam0000000001346e42 & 1) == 0) {
    native_sub_43273c(&UnityEngine_GameObject_TypeInfo_12d47d8);
    native_sub_43273c(&UnityEngine_Object_TypeInfo_12d54e0);
    native_sub_43273c(&StringLiteral_Camera_Target_12ecb80);
    bRam0000000001346e42 = 1;
  }
  puVar7 = (undefined8 *)(param_1 + 0x28);
  uVar8 = *puVar7;
  if (((*(byte *)(_UnityEngine_Object_TypeInfo_12d54e0 + 0x133) >> 2 & 1) != 0) &&
     (*(int *)(_UnityEngine_Object_TypeInfo_12d54e0 + 0xe0) == 0)) {
    native_sub_4327ec();
  }
  uVar4 = native_UnityEngine_Object__op_Equality_8e9a3c(uVar8,0,0);
  if ((uVar4 & 1) != 0) {
    lVar5 = native_sub_432808(_UnityEngine_GameObject_TypeInfo_12d47d8);
    native_UnityEngine_GameObject___ctor_8de828(lVar5,_StringLiteral_Camera_Target_12ecb80,0);
    if (lVar5 != 0) {
      uVar8 = native_UnityEngine_GameObject__get_transform_8de5c8(lVar5,0);
      puVar6 = (undefined8 *)(param_1 + 0x20);
      *puVar6 = uVar8;
      native_sub_4326e0(puVar6,uVar8);
      *(undefined8 *)(param_1 + 0x28) = *puVar6;
      if (iRam0000000001345318 != 0) {
        puVar1 = (ulong *)(((ulong)puVar7 >> 0x12 & 0x7fff) * 8 + 0x138ecd8);
        do {
          cVar2 = '\x01';
          bVar3 = (bool)ExclusiveMonitorPass(puVar1,0x10);
          if (bVar3) {
            *puVar1 = *puVar1 | 1L << ((ulong)puVar7 >> 0xc & 0x3f);
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



/* TMPro.Examples.CameraController$$LateUpdate @ 0xdd41ec
 * void TMPro_Examples_CameraController__LateUpdate (TMPro_Examples_CameraController_o* __this, const MethodInfo* method); */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* TMPro.Examples.CameraController$$LateUpdate
   void TMPro_Examples_CameraController__LateUpdate (TMPro_Examples_CameraController_o* __this,
   const MethodInfo* method); */

void native_TMPro_Examples_CameraController__LateUpdate_dd41ec
               (undefined1 param_1 [16],float param_2,float param_3,long param_4)

{
  ulong uVar1;
  long lVar2;
  undefined8 uVar3;
  long lVar4;
  float fVar5;
  float fVar6;
  float fVar7;
  float fVar8;
  
  if ((bRam0000000001346e43 & 1) == 0) {
    native_sub_43273c(&UnityEngine_Object_TypeInfo_12d54e0);
    bRam0000000001346e43 = 1;
  }
  native_TMPro_Examples_CameraController__GetPlayerInput_dd4504(param_4);
  uVar3 = *(undefined8 *)(param_4 + 0x28);
  if (((*(byte *)(_UnityEngine_Object_TypeInfo_12d54e0 + 0x133) >> 2 & 1) != 0) &&
     (*(int *)(_UnityEngine_Object_TypeInfo_12d54e0 + 0xe0) == 0)) {
    native_sub_4327ec();
  }
  uVar1 = native_UnityEngine_Object__op_Inequality_8d76fc(uVar3,0,0);
  if ((uVar1 & 1) == 0) {
    return;
  }
  if (*(int *)(param_4 + 0x4c) == 0) {
    if (*(long *)(param_4 + 0x28) == 0) goto LAB_00dd4500;
    fVar5 = (float)native_UnityEngine_Transform__get_position_77169c(*(long *)(param_4 + 0x28),0);
    fVar7 = *(float *)(param_4 + 0x48);
    lVar4 = *(long *)(param_4 + 0x28);
    fVar8 = 0.0;
    native_UnityEngine_Quaternion__Euler_762bc4(*(undefined4 *)(param_4 + 0x3c),0);
    native_UnityEngine_Quaternion__op_Multiply_7629c0(0);
    if (lVar4 == 0) goto LAB_00dd4500;
    fVar6 = (float)native_UnityEngine_Transform__TransformDirection_7722dc(lVar4,0);
LAB_00dd4350:
    param_2 = param_2 + fVar7;
    param_3 = param_3 + fVar8;
    *(float *)(param_4 + 0x6c) = fVar5 + fVar6;
    *(float *)(param_4 + 0x70) = param_2;
    *(float *)(param_4 + 0x74) = param_3;
  }
  else if (*(int *)(param_4 + 0x4c) == 1) {
    if (*(long *)(param_4 + 0x28) == 0) goto LAB_00dd4500;
    fVar5 = (float)native_UnityEngine_Transform__get_position_77169c(*(long *)(param_4 + 0x28),0);
    fVar7 = *(float *)(param_4 + 0x48);
    fVar8 = 0.0;
    native_UnityEngine_Quaternion__Euler_762bc4(*(undefined4 *)(param_4 + 0x3c),0);
    fVar6 = (float)native_UnityEngine_Quaternion__op_Multiply_7629c0(0);
    goto LAB_00dd4350;
  }
  lVar4 = *(long *)(param_4 + 0x18);
  if (*(char *)(param_4 + 0x50) == '\0') {
    if (lVar4 == 0) goto LAB_00dd4500;
    uVar1 = (ulong)*(uint *)(param_4 + 0x6c);
    param_2 = *(float *)(param_4 + 0x70);
    param_3 = *(float *)(param_4 + 0x74);
  }
  else {
    if (lVar4 == 0) goto LAB_00dd4500;
    uVar3 = native_UnityEngine_Transform__get_position_77169c(lVar4,0);
    native_UnityEngine_Time__get_fixedDeltaTime_7708c8(0);
    uVar1 = native_UnityEngine_Vector3__SmoothDamp_775fe8(uVar3,param_4 + 0x60,0);
  }
  native_UnityEngine_Transform__set_position_77174c(uVar1,lVar4,0);
  lVar4 = *(long *)(param_4 + 0x18);
  if (*(char *)(param_4 + 0x51) == '\0') {
    if (lVar4 != 0) {
      lVar2 = *(long *)(param_4 + 0x28);
      if ((bRam000000000133fe70 & 1) == 0) {
        native_sub_43273c(&UnityEngine_Object_TypeInfo_12d54e0,lVar2,0);
        bRam000000000133fe70 = 1;
      }
      if (((*(byte *)(_UnityEngine_Object_TypeInfo_12d54e0 + 0x133) >> 2 & 1) != 0) &&
         (*(int *)(_UnityEngine_Object_TypeInfo_12d54e0 + 0xe0) == 0)) {
        native_sub_4327ec();
      }
      uVar1 = native_UnityEngine_Object__op_Implicit_8e1b98(lVar2,0);
      if ((uVar1 & 1) != 0) {
        if (lVar2 != 0) {
          native_UnityEngine_Transform__get_position_77169c(lVar2);
          native_UnityEngine_Vector3__get_up_7628a0();
          if (pcRam000000000133ff38 == (code *)0x0) {
            pcRam000000000133ff38 = (code *)native_sub_4326f0(&UNK_00e2b08e);
          }
          (*pcRam000000000133ff38)(lVar4,&stack0xffffffffffffffd0,&stack0xffffffffffffffc0);
          return;
        }
                    /* WARNING: Subroutine does not return */
        native_sub_432810();
      }
      return;
    }
  }
  else if (lVar4 != 0) {
    uVar3 = native_UnityEngine_Transform__get_rotation_771a30(lVar4,0);
    if (*(long *)(param_4 + 0x28) != 0) {
      fVar5 = (float)native_UnityEngine_Transform__get_position_77169c(*(long *)(param_4 + 0x28),0);
      if (*(long *)(param_4 + 0x18) != 0) {
        fVar7 = param_2;
        fVar8 = param_3;
        fVar6 = (float)native_UnityEngine_Transform__get_position_77169c
                                 (*(long *)(param_4 + 0x18),0);
        native_UnityEngine_Quaternion__LookRotation_762858
                  (fVar5 - fVar6,param_2 - fVar7,param_3 - fVar8,0);
        native_UnityEngine_Time__get_deltaTime_77082c(0);
        native_UnityEngine_Quaternion__Lerp_76247c(uVar3,0);
        if (pcRam000000000133fef8 == (code *)0x0) {
          pcRam000000000133fef8 = (code *)native_sub_4326f0(&UNK_00e2ae31,0);
        }
        (*pcRam000000000133fef8)(lVar4,&stack0xffffffffffffffd0);
        return;
      }
    }
  }
LAB_00dd4500:
                    /* WARNING: Subroutine does not return */
  native_sub_432810();
}



/* TMPro.Examples.CameraController$$GetPlayerInput @ 0xdd4504
 * void TMPro_Examples_CameraController__GetPlayerInput (TMPro_Examples_CameraController_o* __this, const MethodInfo* method); */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* TMPro.Examples.CameraController$$GetPlayerInput
   void TMPro_Examples_CameraController__GetPlayerInput (TMPro_Examples_CameraController_o* __this,
   const MethodInfo* method); */

void native_TMPro_Examples_CameraController__GetPlayerInput_dd4504
               (undefined1 param_1 [16],undefined4 param_2,undefined4 param_3,long param_4)

{
  undefined1 uVar1;
  int iVar2;
  int iVar3;
  ulong uVar4;
  long lVar5;
  undefined8 uVar6;
  long *plVar7;
  undefined8 uVar8;
  long *plVar9;
  long lVar10;
  undefined4 uVar11;
  float fVar12;
  float fVar13;
  float fVar14;
  float fVar15;
  float fVar16;
  float fVar17;
  float fVar18;
  undefined8 uStack_1e0;
  undefined8 uStack_1d8;
  undefined8 uStack_1d0;
  undefined8 uStack_1c8;
  undefined8 uStack_1c0;
  undefined8 uStack_1b8;
  undefined8 uStack_180;
  undefined1 auStack_178 [72];
  undefined1 auStack_130 [72];
  undefined8 uStack_e8;
  undefined8 uStack_e0;
  undefined8 uStack_d8;
  undefined8 uStack_d0;
  undefined8 uStack_c8;
  undefined4 uStack_c0;
  undefined1 auStack_b8 [72];
  
  if ((bRam0000000001346e44 & 1) == 0) {
    native_sub_43273c(&UnityEngine_GameObject_TypeInfo_12d47d8);
    native_sub_43273c(&UnityEngine_Object_TypeInfo_12d54e0);
    native_sub_43273c(&StringLiteral_Mouse_Y_12efaf8);
    native_sub_43273c(&StringLiteral_Mouse_X_12efaf0);
    native_sub_43273c(&StringLiteral_Camera_Target_12ecb80);
    native_sub_43273c(&StringLiteral_Mouse_ScrollWheel_12efae8);
    bRam0000000001346e44 = 1;
  }
  func_0x002c8be0(auStack_b8,0,0x44);
  uStack_c0 = 0;
  uStack_c8 = 0;
  uStack_e0 = 0;
  uStack_e8 = 0;
  uStack_d0 = 0;
  uStack_d8 = 0;
  func_0x002c8be0(auStack_130,0,0x44);
  func_0x002c8be0(auStack_178,0,0x44);
  uStack_180 = 0;
  uVar11 = native_UnityEngine_Vector3__get_zero_776668(0);
  *(undefined4 *)(param_4 + 0x80) = uVar11;
  *(undefined4 *)(param_4 + 0x84) = param_2;
  *(undefined4 *)(param_4 + 0x88) = param_3;
  uVar11 = native_UnityEngine_Input__GetAxis_dbd998(_StringLiteral_Mouse_ScrollWheel_12efae8,0);
  *(undefined4 *)(param_4 + 0x8c) = uVar11;
  iVar2 = native_UnityEngine_Input__get_touchCount_dbe094(0);
  uVar4 = native_UnityEngine_Input__GetKey_dbdbe4(0x130,0);
  if ((((uVar4 & 1) == 0) && (uVar4 = native_UnityEngine_Input__GetKey_dbdbe4(0x12f,0), iVar2 < 1))
     && ((uVar4 & 1) == 0)) goto LAB_00dd4c6c;
  fVar12 = 10.0;
  *(float *)(param_4 + 0x8c) = *(float *)(param_4 + 0x8c) * 10.0;
  uVar4 = native_UnityEngine_Input__GetKeyDown_dbdc64(0x69,0);
  if ((uVar4 & 1) != 0) {
    *(undefined4 *)(param_4 + 0x4c) = 1;
  }
  uVar4 = native_UnityEngine_Input__GetKeyDown_dbdc64(0x66,0);
  if ((uVar4 & 1) != 0) {
    *(undefined4 *)(param_4 + 0x4c) = 0;
  }
  uVar4 = native_UnityEngine_Input__GetKeyDown_dbdc64(0x73,0);
  if ((uVar4 & 1) != 0) {
    *(byte *)(param_4 + 0x50) = *(byte *)(param_4 + 0x50) ^ 1;
  }
  uVar4 = native_UnityEngine_Input__GetMouseButton_dbda58(1,0);
  if ((uVar4 & 1) != 0) {
    uVar11 = native_UnityEngine_Input__GetAxis_dbd998(_StringLiteral_Mouse_Y_12efaf8,0);
    *(undefined4 *)(param_4 + 0x7c) = uVar11;
    fVar12 = (float)native_UnityEngine_Input__GetAxis_dbd998(_StringLiteral_Mouse_X_12efaf0,0);
    fVar13 = *(float *)(param_4 + 0x7c);
    *(float *)(param_4 + 0x78) = fVar12;
    if ((0.01 < fVar13) || (fVar13 < -0.01)) {
      fVar12 = *(float *)(param_4 + 0x3c) - fVar13 * *(float *)(param_4 + 0x5c);
      *(float *)(param_4 + 0x3c) = fVar12;
      uVar11 = native_UnityEngine_Mathf__Clamp_8e51ec
                         (fVar12,*(undefined4 *)(param_4 + 0x44),*(undefined4 *)(param_4 + 0x40),0);
      fVar12 = *(float *)(param_4 + 0x78);
      *(undefined4 *)(param_4 + 0x3c) = uVar11;
    }
    if ((0.01 < fVar12) || (fVar12 < -0.01)) {
      fVar12 = *(float *)(param_4 + 0x48) + fVar12 * *(float *)(param_4 + 0x5c);
      *(float *)(param_4 + 0x48) = fVar12;
      fVar13 = fVar12 + -360.0;
      if ((360.0 < fVar12) || (fVar13 = fVar12, fVar12 < 0.0)) {
        fVar12 = fVar13;
        fVar13 = fVar12 + 360.0;
        if (0.0 <= fVar12) {
          fVar13 = fVar12;
        }
        *(float *)(param_4 + 0x48) = fVar13;
      }
    }
  }
  if (iVar2 == 1) {
    native_UnityEngine_Input__GetTouch_dbdb18(&uStack_1c8,0,0);
    func_0x002ca3e0(auStack_b8,&uStack_1c8,0x44);
    iVar3 = native_UnityEngine_Touch__get_phase_dbf524(auStack_b8,0);
    if (iVar3 == 1) {
      native_UnityEngine_Input__GetTouch_dbdb18(&uStack_1c8,0,0);
      func_0x002ca3e0(auStack_b8,&uStack_1c8,0x44);
      fVar13 = (float)native_UnityEngine_Touch__get_deltaPosition_dbf514(auStack_b8,0);
      if ((0.01 < fVar12) || (fVar12 < -0.01)) {
        fVar14 = *(float *)(param_4 + 0x3c) + fVar12 * -0.1;
        *(float *)(param_4 + 0x3c) = fVar14;
        fVar12 = *(float *)(param_4 + 0x44);
        uVar11 = native_UnityEngine_Mathf__Clamp_8e51ec
                           (fVar14,*(float *)(param_4 + 0x44),*(undefined4 *)(param_4 + 0x40),0);
        *(undefined4 *)(param_4 + 0x3c) = uVar11;
      }
      if ((0.01 < fVar13) || (fVar13 < -0.01)) {
        fVar12 = fVar13 * 0.1 + *(float *)(param_4 + 0x48);
        *(float *)(param_4 + 0x48) = fVar12;
        fVar13 = fVar12 + -360.0;
        if ((360.0 < fVar12) || (fVar13 = fVar12, fVar12 < 0.0)) {
          fVar12 = fVar13;
          fVar13 = fVar12 + 360.0;
          if (0.0 <= fVar12) {
            fVar13 = fVar12;
          }
          *(float *)(param_4 + 0x48) = fVar13;
        }
      }
    }
  }
  uVar4 = native_UnityEngine_Input__GetMouseButton_dbda58(0,0);
  if ((uVar4 & 1) != 0) {
    lVar5 = native_UnityEngine_Camera__get_main_8d93c0(0);
    native_UnityEngine_Input__get_mousePosition_dbdd8c(0);
    if (lVar5 == 0) goto LAB_00dd4cd8;
    native_UnityEngine_Camera__ScreenPointToRay_8d9368(&uStack_1c8,lVar5,0);
    uStack_1d0 = uStack_1b8;
    uStack_1d8 = uStack_1c0;
    uStack_1e0 = uStack_1c8;
    uVar4 = native_UnityEngine_Physics__Raycast_dbba48(0x43960000,&uStack_1e0,&uStack_e8,0x5c00,0);
    if ((uVar4 & 1) != 0) {
      uVar6 = native_UnityEngine_RaycastHit__get_transform_dbcde0(&uStack_e8,0);
      uVar8 = *(undefined8 *)(param_4 + 0x28);
      if (((*(byte *)(_UnityEngine_Object_TypeInfo_12d54e0 + 0x133) >> 2 & 1) != 0) &&
         (*(int *)(_UnityEngine_Object_TypeInfo_12d54e0 + 0xe0) == 0)) {
        native_sub_4327ec(_UnityEngine_Object_TypeInfo_12d54e0);
      }
      uVar4 = native_UnityEngine_Object__op_Equality_8e9a3c(uVar6,uVar8,0);
      if ((uVar4 & 1) == 0) {
        uVar6 = native_UnityEngine_RaycastHit__get_transform_dbcde0(&uStack_e8,0);
        *(undefined8 *)(param_4 + 0x28) = uVar6;
        native_sub_4326e0((undefined8 *)(param_4 + 0x28),uVar6);
        *(undefined4 *)(param_4 + 0x48) = 0;
        *(undefined1 *)(param_4 + 0x50) = *(undefined1 *)(param_4 + 0x52);
      }
      else {
        *(undefined4 *)(param_4 + 0x48) = 0;
      }
    }
  }
  uVar4 = native_UnityEngine_Input__GetMouseButton_dbda58(2,0);
  if ((uVar4 & 1) != 0) {
    plVar7 = (long *)(param_4 + 0x20);
    lVar5 = *plVar7;
    if (((*(byte *)(_UnityEngine_Object_TypeInfo_12d54e0 + 0x133) >> 2 & 1) != 0) &&
       (*(int *)(_UnityEngine_Object_TypeInfo_12d54e0 + 0xe0) == 0)) {
      native_sub_4327ec();
    }
    uVar4 = native_UnityEngine_Object__op_Equality_8e9a3c(lVar5,0,0);
    if ((uVar4 & 1) == 0) {
      lVar5 = *(long *)(param_4 + 0x28);
      uVar6 = *(undefined8 *)(param_4 + 0x20);
      if (((*(byte *)(_UnityEngine_Object_TypeInfo_12d54e0 + 0x133) >> 2 & 1) != 0) &&
         (*(int *)(_UnityEngine_Object_TypeInfo_12d54e0 + 0xe0) == 0)) {
        native_sub_4327ec();
      }
      uVar4 = native_UnityEngine_Object__op_Inequality_8d76fc(uVar6,lVar5,0);
      if ((uVar4 & 1) != 0) {
        lVar5 = *(long *)(param_4 + 0x28);
        if (lVar5 == 0) goto LAB_00dd4cd8;
        lVar10 = *plVar7;
        goto LAB_00dd4a70;
      }
    }
    else {
      lVar5 = native_sub_432808(_UnityEngine_GameObject_TypeInfo_12d47d8);
      native_UnityEngine_GameObject___ctor_8de828(lVar5,_StringLiteral_Camera_Target_12ecb80,0);
      if (lVar5 == 0) goto LAB_00dd4cd8;
      uVar6 = native_UnityEngine_GameObject__get_transform_8de5c8(lVar5,0);
      *(undefined8 *)(param_4 + 0x20) = uVar6;
      native_sub_4326e0(plVar7,uVar6);
      lVar10 = *(long *)(param_4 + 0x20);
      lVar5 = *(long *)(param_4 + 0x28);
      if (lVar5 == 0) goto LAB_00dd4cd8;
LAB_00dd4a70:
      plVar9 = (long *)(param_4 + 0x28);
      native_UnityEngine_Transform__get_position_77169c(lVar5,0);
      if (lVar10 == 0) goto LAB_00dd4cd8;
      native_UnityEngine_Transform__set_position_77174c(lVar10,0);
      if (*plVar9 == 0) goto LAB_00dd4cd8;
      lVar5 = *plVar7;
      native_UnityEngine_Transform__get_rotation_771a30(*plVar9,0);
      if (lVar5 == 0) goto LAB_00dd4cd8;
      native_UnityEngine_Transform__set_rotation_771b8c(lVar5,0);
      *plVar9 = *plVar7;
      native_sub_4326e0(plVar9);
      uVar1 = *(undefined1 *)(param_4 + 0x50);
      *(undefined1 *)(param_4 + 0x50) = 0;
      *(undefined1 *)(param_4 + 0x52) = uVar1;
    }
    uVar11 = native_UnityEngine_Input__GetAxis_dbd998(_StringLiteral_Mouse_Y_12efaf8,0);
    *(undefined4 *)(param_4 + 0x7c) = uVar11;
    uVar11 = native_UnityEngine_Input__GetAxis_dbd998(_StringLiteral_Mouse_X_12efaf0,0);
    *(undefined4 *)(param_4 + 0x78) = uVar11;
    if (*(long *)(param_4 + 0x18) == 0) {
LAB_00dd4cd8:
                    /* WARNING: Subroutine does not return */
      native_sub_432810();
    }
    fVar12 = *(float *)(param_4 + 0x7c);
    fVar14 = 0.0;
    fVar13 = (float)native_UnityEngine_Transform__TransformDirection_772810
                              (*(long *)(param_4 + 0x18),0);
    *(float *)(param_4 + 0x80) = fVar13;
    *(float *)(param_4 + 0x84) = fVar12;
    *(float *)(param_4 + 0x88) = fVar14;
    if (*(long *)(param_4 + 0x20) == 0) goto LAB_00dd4cd8;
    fVar12 = -fVar12;
    native_UnityEngine_Transform__Translate_772250
              (-fVar13,fVar12,-fVar14,*(long *)(param_4 + 0x20),0,0);
  }
  if (iVar2 == 2) {
    native_UnityEngine_Input__GetTouch_dbdb18(&uStack_1c8,0,0);
    func_0x002ca3e0(auStack_130,&uStack_1c8,0x44);
    native_UnityEngine_Input__GetTouch_dbdb18(&uStack_1c8,1,0);
    func_0x002ca3e0(auStack_178,&uStack_1c8,0x44);
    fVar15 = (float)native_UnityEngine_Touch__get_position_dbf50c(auStack_130,0);
    fVar14 = fVar12;
    fVar16 = (float)native_UnityEngine_Touch__get_deltaPosition_dbf514(auStack_130,0);
    fVar12 = fVar12 - fVar14;
    fVar17 = (float)native_UnityEngine_Touch__get_position_dbf50c(auStack_178,0);
    fVar13 = fVar14;
    fVar18 = (float)native_UnityEngine_Touch__get_deltaPosition_dbf514(auStack_178,0);
    fVar12 = fVar12 - (fVar14 - fVar13);
    uStack_180 = CONCAT44(fVar12,(fVar15 - fVar16) - (fVar17 - fVar18));
    fVar16 = (float)native_UnityEngine_Vector2__get_magnitude_7752bc(&uStack_180,0);
    fVar14 = (float)native_UnityEngine_Touch__get_position_dbf50c(auStack_130,0);
    fVar13 = fVar12;
    fVar15 = (float)native_UnityEngine_Touch__get_position_dbf50c(auStack_178,0);
    uStack_180 = CONCAT44(fVar12 - fVar13,fVar14 - fVar15);
    fVar12 = (float)native_UnityEngine_Vector2__get_magnitude_7752bc(&uStack_180,0);
    fVar16 = fVar16 - fVar12;
    if ((0.01 < fVar16) || (fVar16 < -0.01)) {
      fVar12 = fVar16 * 0.25 + *(float *)(param_4 + 0x30);
      *(float *)(param_4 + 0x30) = fVar12;
      uVar11 = native_UnityEngine_Mathf__Clamp_8e51ec
                         (fVar12,*(undefined4 *)(param_4 + 0x38),*(undefined4 *)(param_4 + 0x34),0);
      *(undefined4 *)(param_4 + 0x30) = uVar11;
    }
  }
LAB_00dd4c6c:
  fVar12 = *(float *)(param_4 + 0x8c);
  if ((fVar12 < -0.01) || (0.01 < fVar12)) {
    fVar12 = *(float *)(param_4 + 0x30) + fVar12 * -5.0;
    *(float *)(param_4 + 0x30) = fVar12;
    uVar11 = native_UnityEngine_Mathf__Clamp_8e51ec
                       (fVar12,*(undefined4 *)(param_4 + 0x38),*(undefined4 *)(param_4 + 0x34),0);
    *(undefined4 *)(param_4 + 0x30) = uVar11;
  }
  return;
}



/* TMPro.Examples.CameraController$$.ctor @ 0xdd4cdc
 * void TMPro_Examples_CameraController___ctor (TMPro_Examples_CameraController_o* __this, const MethodInfo* method); */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* TMPro.Examples.CameraController$$.ctor
   void TMPro_Examples_CameraController___ctor (TMPro_Examples_CameraController_o* __this, const
   MethodInfo* method); */

undefined1  [16]
native_TMPro_Examples_CameraController___ctor_dd4cdc
          (undefined1 param_1 [16],undefined1 param_2 [16],undefined4 param_3,ulong param_4)

{
  undefined4 uVar1;
  undefined4 uVar2;
  undefined1 auVar3 [16];
  
  uVar2 = 0x41c80000;
  *(undefined4 *)(param_4 + 0x40) = 0x42aa0000;
  *(undefined1 *)(param_4 + 0x50) = 1;
  *(undefined8 *)(param_4 + 0x38) = 0x41f0000040000000;
  *(undefined8 *)(param_4 + 0x30) = 0x42c8000041f00000;
  *(undefined8 *)(param_4 + 0x54) = 0x40a0000041c80000;
  *(undefined4 *)(param_4 + 0x5c) = 0x40000000;
  uVar1 = native_UnityEngine_Vector3__get_zero_776668(0);
  *(undefined4 *)(param_4 + 0x60) = uVar1;
  *(undefined4 *)(param_4 + 100) = uVar2;
  *(undefined4 *)(param_4 + 0x68) = param_3;
  if ((bRam0000000001340ae0 & 1) == 0) {
    native_sub_43273c(&UnityEngine_Object_TypeInfo_12d54e0,0);
    bRam0000000001340ae0 = 1;
  }
  if (((*(byte *)(_UnityEngine_Object_TypeInfo_12d54e0 + 0x133) >> 2 & 1) != 0) &&
     (*(int *)(_UnityEngine_Object_TypeInfo_12d54e0 + 0xe0) == 0)) {
    native_sub_4327ec();
  }
  auVar3._8_8_ = 0;
  auVar3._0_8_ = param_4;
  return auVar3;
}


