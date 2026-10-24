/* ARM64 IL2CPP native pseudocode from Ghidra.
 * Recovered implementation, not original C# source.
 * Function boundaries follow the IL2CPP method address table. */


/* MouseLook$$Start @ 0x7fc788
 * void MouseLook__Start (MouseLook_o* __this, const MethodInfo* method); */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* MouseLook$$Start
   void MouseLook__Start (MouseLook_o* __this, const MethodInfo* method); */

void native_MouseLook__Start_7fc788
               (undefined1 param_1 [16],undefined4 param_2,undefined4 param_3,undefined4 param_4,
               long param_5)

{
  long lVar1;
  ulong uVar2;
  undefined8 uVar3;
  undefined4 uVar4;
  undefined8 uStack_30;
  undefined8 uStack_28;
  
  if ((bRam000000000134040e & 1) == 0) {
    native_sub_43273c(&UnityEngine_Object_TypeInfo_12d54e0);
    bRam000000000134040e = 1;
  }
  uStack_30 = 0;
  uStack_28 = 0;
  native_UnityEngine_Cursor__set_visible_8dbe24(0,0);
  lVar1 = native_UnityEngine_Component__get_transform_8da62c(param_5,0);
  if (lVar1 != 0) {
    uVar4 = native_UnityEngine_Transform__get_localRotation_771c84(lVar1,0);
    uStack_30 = CONCAT44(param_2,uVar4);
    uStack_28 = CONCAT44(param_4,param_3);
    uVar4 = native_UnityEngine_Quaternion__get_eulerAngles_762b94(&uStack_30,0);
    *(undefined4 *)(param_5 + 0x44) = uVar4;
    *(undefined4 *)(param_5 + 0x48) = param_2;
    uVar3 = *(undefined8 *)(param_5 + 0x58);
    if (((*(byte *)(_UnityEngine_Object_TypeInfo_12d54e0 + 0x133) >> 2 & 1) != 0) &&
       (*(int *)(_UnityEngine_Object_TypeInfo_12d54e0 + 0xe0) == 0)) {
      native_sub_4327ec();
    }
    uVar2 = native_UnityEngine_Object__op_Implicit_8e1b98(uVar3,0);
    if ((uVar2 & 1) != 0) {
      if ((*(long *)(param_5 + 0x58) == 0) ||
         (lVar1 = native_UnityEngine_GameObject__get_transform_8de5c8(*(long *)(param_5 + 0x58),0),
         lVar1 == 0)) goto LAB_007fc874;
      uVar4 = native_UnityEngine_Transform__get_localRotation_771c84(lVar1,0);
      uStack_30 = CONCAT44(param_2,uVar4);
      uStack_28 = CONCAT44(param_4,param_3);
      uVar4 = native_UnityEngine_Quaternion__get_eulerAngles_762b94(&uStack_30,0);
      *(undefined4 *)(param_5 + 0x4c) = uVar4;
      *(undefined4 *)(param_5 + 0x50) = param_2;
    }
    return;
  }
LAB_007fc874:
                    /* WARNING: Subroutine does not return */
  native_sub_432810();
}



/* MouseLook$$Update @ 0x7fc878
 * void MouseLook__Update (MouseLook_o* __this, const MethodInfo* method); */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* MouseLook$$Update
   void MouseLook__Update (MouseLook_o* __this, const MethodInfo* method); */

void native_MouseLook__Update_7fc878(long param_1)

{
  long lVar1;
  float fVar2;
  float fVar3;
  undefined4 uVar4;
  undefined8 uVar5;
  ulong uVar6;
  undefined8 uVar7;
  ulong uVar8;
  uint uVar9;
  float fVar10;
  ulong uVar11;
  ulong uVar12;
  undefined8 in_d3;
  float fVar13;
  
  if ((bRam000000000134040f & 1) == 0) {
    native_sub_43273c(&UnityEngine_Object_TypeInfo_12d54e0);
    native_sub_43273c(&StringLiteral_Mouse_Y_12efaf8);
    native_sub_43273c(&StringLiteral_Mouse_X_12efaf0);
    bRam000000000134040f = 1;
  }
  native_UnityEngine_Cursor__set_lockState_8dbe98(*(undefined4 *)(param_1 + 0x30),0);
  uVar8 = (ulong)*(uint *)(param_1 + 0x48);
  uVar9 = 0;
  uVar5 = native_UnityEngine_Quaternion__Euler_762bdc(*(undefined4 *)(param_1 + 0x44),uVar8,0);
  native_UnityEngine_Quaternion__Euler_762bdc(*(undefined4 *)(param_1 + 0x4c),0);
  fVar2 = (float)native_UnityEngine_Input__GetAxisRaw_dbd9d8(_StringLiteral_Mouse_X_12efaf0,0);
  fVar3 = (float)native_UnityEngine_Input__GetAxisRaw_dbd9d8(_StringLiteral_Mouse_Y_12efaf8,0);
  fVar10 = *(float *)(param_1 + 0x38);
  fVar13 = *(float *)(param_1 + 0x40);
  uVar4 = native_UnityEngine_Mathf__Lerp_8e5224
                    (*(undefined4 *)(param_1 + 0x20),
                     fVar2 * *(float *)(param_1 + 0x34) * *(float *)(param_1 + 0x3c),
                     1.0 / *(float *)(param_1 + 0x3c),0);
  *(undefined4 *)(param_1 + 0x20) = uVar4;
  uVar6 = native_UnityEngine_Mathf__Lerp_8e5224
                    (*(undefined4 *)(param_1 + 0x24),fVar3 * fVar10 * fVar13,
                     1.0 / *(float *)(param_1 + 0x40),0);
  *(float *)(param_1 + 0x24) = (float)uVar6;
  fVar3 = *(float *)(param_1 + 0x28);
  uVar11 = (ulong)(uint)fVar3;
  fVar10 = *(float *)(param_1 + 0x1c) + (float)uVar6;
  fVar2 = *(float *)(param_1 + 0x18) + *(float *)(param_1 + 0x20);
  *(float *)(param_1 + 0x18) = fVar2;
  *(float *)(param_1 + 0x1c) = fVar10;
  if (fVar3 < 360.0) {
    uVar6 = (ulong)(uint)(fVar3 * -0.5);
    uVar11 = (ulong)(uint)(fVar3 * 0.5);
    uVar4 = native_UnityEngine_Mathf__Clamp_8e51ec(fVar2,uVar6,uVar11,0);
    fVar10 = *(float *)(param_1 + 0x1c);
    *(undefined4 *)(param_1 + 0x18) = uVar4;
  }
  uVar7 = native_UnityEngine_Vector3__get_right_776b60(0);
  uVar12 = (ulong)uVar9;
  uVar5 = native_UnityEngine_Quaternion__op_Multiply_7629c0
                    (uVar5,uVar8,uVar12,in_d3,uVar7,uVar6,uVar11,0);
  uVar7 = native_UnityEngine_Quaternion__AngleAxis_7626c4(-fVar10,uVar5,uVar8,uVar12,0);
  lVar1 = native_UnityEngine_Component__get_transform_8da62c(param_1,0);
  if (lVar1 != 0) {
    native_UnityEngine_Transform__set_localRotation_771984(uVar7,uVar5,uVar8,uVar12,lVar1,0);
    if (*(float *)(param_1 + 0x2c) < 360.0) {
      uVar4 = native_UnityEngine_Mathf__Clamp_8e51ec(*(undefined4 *)(param_1 + 0x1c),0);
      *(undefined4 *)(param_1 + 0x1c) = uVar4;
    }
    lVar1 = native_UnityEngine_Component__get_transform_8da62c(param_1,0);
    if (lVar1 != 0) {
      native_UnityEngine_Transform__get_localRotation_771c84(lVar1,0);
      native_UnityEngine_Quaternion__op_Multiply_76294c(0);
      native_UnityEngine_Transform__set_localRotation_771984(lVar1,0);
      uVar5 = *(undefined8 *)(param_1 + 0x58);
      if (((*(byte *)(_UnityEngine_Object_TypeInfo_12d54e0 + 0x133) >> 2 & 1) != 0) &&
         (*(int *)(_UnityEngine_Object_TypeInfo_12d54e0 + 0xe0) == 0)) {
        native_sub_4327ec();
      }
      uVar6 = native_UnityEngine_Object__op_Implicit_8e1b98(uVar5,0);
      uVar4 = *(undefined4 *)(param_1 + 0x18);
      if ((uVar6 & 1) == 0) {
        lVar1 = native_UnityEngine_Component__get_transform_8da62c(param_1,0);
        native_UnityEngine_Vector3__get_up_7628a0(0);
        if (lVar1 != 0) {
          native_UnityEngine_Transform__InverseTransformDirection_772814(lVar1,0);
          native_UnityEngine_Quaternion__AngleAxis_7626c4(uVar4,0);
          lVar1 = native_UnityEngine_Component__get_transform_8da62c(param_1,0);
          if (lVar1 != 0) {
            native_UnityEngine_Transform__get_localRotation_771c84(lVar1,0);
code_r0x00771984:
            native_UnityEngine_Quaternion__op_Multiply_76294c(0);
            if (pcRam000000000133ff08 == (code *)0x0) {
              pcRam000000000133ff08 = (code *)native_sub_4326f0(&UNK_00e2aec2,0);
            }
            (*pcRam000000000133ff08)(lVar1,&stack0xffffffffffffffd0);
            return;
          }
        }
      }
      else if ((*(long *)(param_1 + 0x58) != 0) &&
              (lVar1 = native_UnityEngine_GameObject__get_transform_8de5c8
                                 (*(long *)(param_1 + 0x58),0), lVar1 != 0)) {
        native_UnityEngine_Transform__get_up_7719dc(lVar1,0);
        uVar5 = native_UnityEngine_Quaternion__AngleAxis_7626c4(uVar4,0);
        if ((*(long *)(param_1 + 0x58) != 0) &&
           (lVar1 = native_UnityEngine_GameObject__get_transform_8de5c8(*(long *)(param_1 + 0x58),0)
           , lVar1 != 0)) {
          native_UnityEngine_Transform__set_localRotation_771984(uVar5,lVar1,0);
          if ((*(long *)(param_1 + 0x58) != 0) &&
             (lVar1 = native_UnityEngine_GameObject__get_transform_8de5c8
                                (*(long *)(param_1 + 0x58),0), lVar1 != 0)) {
            native_UnityEngine_Transform__get_localRotation_771c84(lVar1,0);
            goto code_r0x00771984;
          }
        }
      }
    }
  }
                    /* WARNING: Subroutine does not return */
  native_sub_432810();
}



/* MouseLook$$FixedUpdate @ 0x7fcc80
 * void MouseLook__FixedUpdate (MouseLook_o* __this, const MethodInfo* method); */

/* MouseLook$$FixedUpdate
   void MouseLook__FixedUpdate (MouseLook_o* __this, const MethodInfo* method); */

void native_MouseLook__FixedUpdate_7fcc80(long param_1)

{
  ulong uVar1;
  long lVar2;
  long lVar3;
  float fVar4;
  float fVar5;
  undefined4 uVar6;
  undefined4 uVar7;
  float fVar8;
  float fVar9;
  
  uVar1 = native_UnityEngine_Input__GetKey_dbdbe4(*(undefined4 *)(param_1 + 0x78),0);
  if ((uVar1 & 1) == 0) {
    uVar1 = native_UnityEngine_Input__GetKey_dbdbe4(*(undefined4 *)(param_1 + 0x70),0);
    if ((uVar1 & 1) != 0) {
      fVar5 = *(float *)(param_1 + 0x7c);
      fVar8 = *(float *)(param_1 + 0x60);
      fVar4 = (float)native_UnityEngine_Time__get_deltaTime_77082c(0);
      fVar5 = fVar5 - fVar8 * fVar4;
      goto LAB_007fccec;
    }
  }
  else {
    fVar5 = *(float *)(param_1 + 0x7c);
    fVar8 = *(float *)(param_1 + 0x60);
    fVar4 = (float)native_UnityEngine_Time__get_deltaTime_77082c(0);
    fVar5 = fVar5 + fVar8 * fVar4;
LAB_007fccec:
    *(float *)(param_1 + 0x7c) = fVar5;
  }
  uVar1 = native_UnityEngine_Input__GetKey_dbdbe4(*(undefined4 *)(param_1 + 0x74),0);
  if ((uVar1 & 1) == 0) {
    uVar1 = native_UnityEngine_Input__GetKey_dbdbe4(*(undefined4 *)(param_1 + 0x6c),0);
    if ((uVar1 & 1) == 0) goto LAB_007fcd48;
    fVar5 = *(float *)(param_1 + 0x80);
    fVar8 = *(float *)(param_1 + 0x60);
    fVar4 = (float)native_UnityEngine_Time__get_deltaTime_77082c(0);
    fVar5 = fVar5 + fVar8 * fVar4;
  }
  else {
    fVar5 = *(float *)(param_1 + 0x80);
    fVar8 = *(float *)(param_1 + 0x60);
    fVar4 = (float)native_UnityEngine_Time__get_deltaTime_77082c(0);
    fVar5 = fVar5 - fVar8 * fVar4;
  }
  *(float *)(param_1 + 0x80) = fVar5;
LAB_007fcd48:
  uVar6 = *(undefined4 *)(param_1 + 0x7c);
  fVar5 = *(float *)(param_1 + 0x68);
  fVar4 = (float)native_UnityEngine_Time__get_deltaTime_77082c(0);
  uVar6 = native_UnityEngine_Mathf__Lerp_8e5224(uVar6,0,fVar5 * fVar4,0);
  uVar7 = *(undefined4 *)(param_1 + 0x80);
  fVar5 = *(float *)(param_1 + 0x68);
  *(undefined4 *)(param_1 + 0x7c) = uVar6;
  fVar4 = (float)native_UnityEngine_Time__get_deltaTime_77082c(0);
  uVar6 = native_UnityEngine_Mathf__Lerp_8e5224(uVar7,0,fVar5 * fVar4,0);
  uVar7 = *(undefined4 *)(param_1 + 0x7c);
  fVar8 = *(float *)(param_1 + 100);
  *(undefined4 *)(param_1 + 0x80) = uVar6;
  fVar4 = (float)native_UnityEngine_Time__get_deltaTime_77082c(0);
  fVar9 = *(float *)(param_1 + 100);
  fVar5 = (float)native_UnityEngine_Time__get_deltaTime_77082c(0);
  uVar6 = native_UnityEngine_Mathf__Clamp_8e51ec(uVar7,-(fVar8 * fVar4),fVar9 * fVar5,0);
  uVar7 = *(undefined4 *)(param_1 + 0x80);
  fVar8 = *(float *)(param_1 + 100);
  *(undefined4 *)(param_1 + 0x7c) = uVar6;
  fVar4 = (float)native_UnityEngine_Time__get_deltaTime_77082c(0);
  fVar9 = *(float *)(param_1 + 100);
  fVar5 = (float)native_UnityEngine_Time__get_deltaTime_77082c(0);
  uVar6 = native_UnityEngine_Mathf__Clamp_8e51ec(uVar7,-(fVar8 * fVar4),fVar9 * fVar5,0);
  *(undefined4 *)(param_1 + 0x80) = uVar6;
  lVar2 = native_UnityEngine_Component__get_transform_8da62c(param_1,0);
  lVar3 = native_UnityEngine_Component__get_transform_8da62c(param_1,0);
  if (lVar3 != 0) {
    native_UnityEngine_Transform__TransformPoint_7728d8(*(undefined4 *)(param_1 + 0x7c),lVar3,0);
    if (lVar2 != 0) {
      if (pcRam000000000133fed8 == (code *)0x0) {
        pcRam000000000133fed8 = (code *)native_sub_4326f0(&UNK_00e2ad18,0);
      }
      (*pcRam000000000133fed8)(lVar2,&stack0xffffffffffffffd0);
      return;
    }
  }
                    /* WARNING: Subroutine does not return */
  native_sub_432810();
}



/* MouseLook$$.ctor @ 0x7fce5c
 * void MouseLook___ctor (MouseLook_o* __this, const MethodInfo* method); */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* MouseLook$$.ctor
   void MouseLook___ctor (MouseLook_o* __this, const MethodInfo* method); */

long native_MouseLook___ctor_7fce5c(long param_1)

{
  *(undefined8 *)(param_1 + 0x28) = 0x4334000043b40000;
  *(undefined8 *)(param_1 + 0x3c) = 0x4040000040400000;
  *(undefined8 *)(param_1 + 0x34) = 0x4000000040000000;
  *(undefined8 *)(param_1 + 0x60) = 0x40a000003f800000;
  *(undefined4 *)(param_1 + 0x68) = 0x3e4ccccd;
  *(undefined8 *)(param_1 + 0x74) = 0x6400000073;
  *(undefined8 *)(param_1 + 0x6c) = 0x6100000077;
  if ((bRam0000000001340ae0 & 1) == 0) {
    native_sub_43273c(&UnityEngine_Object_TypeInfo_12d54e0,0);
    bRam0000000001340ae0 = 1;
  }
  if (((*(byte *)(_UnityEngine_Object_TypeInfo_12d54e0 + 0x133) >> 2 & 1) != 0) &&
     (*(int *)(_UnityEngine_Object_TypeInfo_12d54e0 + 0xe0) == 0)) {
    native_sub_4327ec();
  }
  return param_1;
}


