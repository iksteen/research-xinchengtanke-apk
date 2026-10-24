/* ARM64 IL2CPP native pseudocode from Ghidra.
 * Recovered implementation, not original C# source.
 * Function boundaries follow the IL2CPP method address table. */


/* Slided$$Awake @ 0x73ddf0
 * void Slided__Awake (Slided_o* __this, const MethodInfo* method); */

/* Slided$$Awake
   void Slided__Awake (Slided_o* __this, const MethodInfo* method); */

void native_Slided__Awake_73ddf0(long param_1)

{
  undefined8 uVar1;
  long lVar2;
  undefined4 uVar3;
  undefined4 uVar4;
  undefined4 uVar5;
  
  uVar3 = *(undefined4 *)(param_1 + 0x28);
  uVar4 = *(undefined4 *)(param_1 + 0x2c);
  lVar2 = *(long *)(param_1 + 0x38);
  *(undefined4 *)(param_1 + 0x7c) = uVar3;
  *(undefined4 *)(param_1 + 0x80) = uVar4;
  if (lVar2 != 0) {
    if (*(long *)(lVar2 + 0x18) == 0) {
LAB_0073df10:
      *(undefined4 *)(param_1 + 0x7c) = uVar3;
      *(undefined4 *)(param_1 + 0x80) = uVar4;
      return;
    }
    if ((int)*(long *)(lVar2 + 0x18) == 0) {
LAB_0073df24:
      uVar1 = native_sub_43283c();
                    /* WARNING: Subroutine does not return */
      native_sub_4327dc(uVar1,0);
    }
    if ((*(long *)(lVar2 + 0x20) != 0) &&
       (lVar2 = native_UnityEngine_GameObject__get_transform_8de5c8(*(long *)(lVar2 + 0x20),0),
       lVar2 != 0)) {
      uVar4 = *(undefined4 *)(param_1 + 0x2c);
      uVar5 = *(undefined4 *)(param_1 + 0x30);
      uVar3 = native_UnityEngine_Transform__TransformPoint_7728d8
                        (*(undefined4 *)(param_1 + 0x28),lVar2,0);
      lVar2 = *(long *)(param_1 + 0x38);
      *(undefined4 *)(param_1 + 100) = uVar5;
      *(undefined4 *)(param_1 + 0x68) = uVar3;
      *(undefined4 *)(param_1 + 0x6c) = uVar4;
      *(undefined4 *)(param_1 + 0x70) = uVar5;
      *(undefined4 *)(param_1 + 0x5c) = uVar3;
      *(undefined4 *)(param_1 + 0x60) = uVar4;
      *(undefined4 *)(param_1 + 0x4c) = uVar5;
      *(undefined4 *)(param_1 + 0x50) = uVar3;
      *(undefined4 *)(param_1 + 0x54) = uVar4;
      *(undefined4 *)(param_1 + 0x58) = uVar5;
      *(undefined4 *)(param_1 + 0x44) = uVar3;
      *(undefined4 *)(param_1 + 0x48) = uVar4;
      if (lVar2 != 0) {
        if (*(uint *)(lVar2 + 0x18) <= *(uint *)(param_1 + 0x34)) goto LAB_0073df24;
        lVar2 = *(long *)(lVar2 + (long)(int)*(uint *)(param_1 + 0x34) * 8 + 0x20);
        if ((lVar2 != 0) &&
           (lVar2 = native_UnityEngine_GameObject__get_transform_8de5c8(lVar2,0), lVar2 != 0)) {
          uVar3 = native_UnityEngine_Transform__get_position_77169c(lVar2,0);
          lVar2 = *(long *)(param_1 + 0x38);
          *(undefined4 *)(param_1 + 0x44) = uVar3;
          if (lVar2 != 0) {
            if (*(uint *)(lVar2 + 0x18) <= *(uint *)(param_1 + 0x34)) goto LAB_0073df24;
            lVar2 = *(long *)(lVar2 + (long)(int)*(uint *)(param_1 + 0x34) * 8 + 0x20);
            if ((lVar2 != 0) &&
               (lVar2 = native_UnityEngine_GameObject__get_transform_8de5c8(lVar2,0), lVar2 != 0)) {
              native_UnityEngine_Transform__get_position_77169c(lVar2,0);
              lVar2 = *(long *)(param_1 + 0x38);
              *(undefined4 *)(param_1 + 0x48) = uVar4;
              if (lVar2 != 0) {
                if (*(uint *)(lVar2 + 0x18) <= *(uint *)(param_1 + 0x34)) goto LAB_0073df24;
                lVar2 = *(long *)(lVar2 + (long)(int)*(uint *)(param_1 + 0x34) * 8 + 0x20);
                if ((lVar2 != 0) &&
                   (lVar2 = native_UnityEngine_GameObject__get_transform_8de5c8(lVar2,0), lVar2 != 0
                   )) {
                  native_UnityEngine_Transform__get_position_77169c(lVar2,0);
                  uVar3 = *(undefined4 *)(param_1 + 0x28);
                  uVar4 = *(undefined4 *)(param_1 + 0x2c);
                  *(undefined4 *)(param_1 + 0x4c) = uVar5;
                  goto LAB_0073df10;
                }
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



/* Slided$$Update @ 0x73df30
 * void Slided__Update (Slided_o* __this, const MethodInfo* method); */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* Slided$$Update
   void Slided__Update (Slided_o* __this, const MethodInfo* method); */

void native_Slided__Update_73df30
               (undefined1 param_1 [16],undefined1 param_2 [16],undefined4 param_3,long param_4)

{
  undefined8 uVar1;
  long lVar2;
  float fVar3;
  undefined4 uVar4;
  float fVar5;
  undefined4 uVar6;
  undefined4 uVar7;
  undefined4 uStack_24;
  
  native_Slided__GetInputKey_73df54();
  if ((bRam000000000133f623 & 1) == 0) {
    native_sub_43273c(&Method_UnityEngine_Component_GetComponent_Camera____12e29a8);
    bRam000000000133f623 = 1;
  }
  fVar3 = (float)native_UnityEngine_Time__get_deltaTime_77082c(0);
  *(float *)(param_4 + 0x74) = fVar3 * *(float *)(param_4 + 0x20);
  fVar3 = (float)native_UnityEngine_Time__get_deltaTime_77082c(0);
  fVar5 = *(float *)(param_4 + 0x24);
  lVar2 = *(long *)(param_4 + 0x38);
  *(float *)(param_4 + 0x78) = fVar3 * fVar5;
  if (lVar2 != 0) {
    if (*(uint *)(lVar2 + 0x18) <= *(uint *)(param_4 + 0x34)) goto LAB_0073e2c8;
    lVar2 = *(long *)(lVar2 + (long)(int)*(uint *)(param_4 + 0x34) * 8 + 0x20);
    if (lVar2 != 0) {
      lVar2 = native_UnityEngine_GameObject__get_transform_8de5c8(lVar2,0);
      if (lVar2 != 0) {
        uVar4 = native_UnityEngine_Transform__get_position_77169c(lVar2,0);
        lVar2 = *(long *)(param_4 + 0x38);
        *(undefined4 *)(param_4 + 0x50) = uVar4;
        if (lVar2 != 0) {
          if (*(uint *)(lVar2 + 0x18) <= *(uint *)(param_4 + 0x34)) {
LAB_0073e2c8:
            uVar1 = native_sub_43283c();
                    /* WARNING: Subroutine does not return */
            native_sub_4327dc(uVar1,0);
          }
          lVar2 = *(long *)(lVar2 + (long)(int)*(uint *)(param_4 + 0x34) * 8 + 0x20);
          if ((lVar2 != 0) &&
             (lVar2 = native_UnityEngine_GameObject__get_transform_8de5c8(lVar2,0), lVar2 != 0)) {
            native_UnityEngine_Transform__get_position_77169c(lVar2,0);
            lVar2 = *(long *)(param_4 + 0x38);
            *(float *)(param_4 + 0x54) = fVar5;
            if (lVar2 != 0) {
              if (*(uint *)(lVar2 + 0x18) <= *(uint *)(param_4 + 0x34)) goto LAB_0073e2c8;
              lVar2 = *(long *)(lVar2 + (long)(int)*(uint *)(param_4 + 0x34) * 8 + 0x20);
              if ((lVar2 != 0) &&
                 (lVar2 = native_UnityEngine_GameObject__get_transform_8de5c8(lVar2,0), lVar2 != 0))
              {
                native_UnityEngine_Transform__get_position_77169c(lVar2,0);
                lVar2 = *(long *)(param_4 + 0x38);
                *(undefined4 *)(param_4 + 0x58) = param_3;
                if (lVar2 != 0) {
                  if (*(uint *)(lVar2 + 0x18) <= *(uint *)(param_4 + 0x34)) goto LAB_0073e2c8;
                  lVar2 = *(long *)(lVar2 + (long)(int)*(uint *)(param_4 + 0x34) * 8 + 0x20);
                  if ((lVar2 != 0) &&
                     (lVar2 = native_UnityEngine_GameObject__get_transform_8de5c8(lVar2,0),
                     lVar2 != 0)) {
                    uVar6 = *(undefined4 *)(param_4 + 0x2c);
                    uVar7 = *(undefined4 *)(param_4 + 0x30);
                    uVar4 = native_UnityEngine_Transform__TransformPoint_7728d8
                                      (*(undefined4 *)(param_4 + 0x28),lVar2,0);
                    *(undefined4 *)(param_4 + 0x68) = uVar4;
                    *(undefined4 *)(param_4 + 0x6c) = uVar6;
                    *(undefined4 *)(param_4 + 0x70) = uVar7;
                    uStack_24 = 0;
                    uVar4 = native_UnityEngine_Mathf__SmoothDamp_8e5334
                                      (*(undefined4 *)(param_4 + 0x44),
                                       *(undefined4 *)(param_4 + 0x50),
                                       *(undefined4 *)(param_4 + 0x78),&uStack_24,0);
                    *(undefined4 *)(param_4 + 0x44) = uVar4;
                    uStack_24 = 0;
                    uVar4 = native_UnityEngine_Mathf__SmoothDamp_8e5334
                                      (*(undefined4 *)(param_4 + 0x48),
                                       *(undefined4 *)(param_4 + 0x54),
                                       *(undefined4 *)(param_4 + 0x78),&uStack_24,0);
                    *(undefined4 *)(param_4 + 0x48) = uVar4;
                    uStack_24 = 0;
                    uVar4 = native_UnityEngine_Mathf__SmoothDamp_8e5334
                                      (*(undefined4 *)(param_4 + 0x4c),
                                       *(undefined4 *)(param_4 + 0x58),
                                       *(undefined4 *)(param_4 + 0x78),&uStack_24,0);
                    *(undefined4 *)(param_4 + 0x4c) = uVar4;
                    if ((*(long *)(param_4 + 0x18) != 0) &&
                       (lVar2 = native_UnityEngine_GameObject__get_transform_8de5c8
                                          (*(long *)(param_4 + 0x18),0), lVar2 != 0)) {
                      native_UnityEngine_Transform__set_position_77174c
                                (*(undefined4 *)(param_4 + 0x44),*(undefined4 *)(param_4 + 0x48),
                                 *(undefined4 *)(param_4 + 0x4c),lVar2,0);
                      uStack_24 = 0;
                      uVar4 = native_UnityEngine_Mathf__SmoothDamp_8e5334
                                        (*(undefined4 *)(param_4 + 0x5c),
                                         *(undefined4 *)(param_4 + 0x68),
                                         *(undefined4 *)(param_4 + 0x74),&uStack_24,0);
                      *(undefined4 *)(param_4 + 0x5c) = uVar4;
                      uStack_24 = 0;
                      uVar4 = native_UnityEngine_Mathf__SmoothDamp_8e5334
                                        (*(undefined4 *)(param_4 + 0x60),
                                         *(undefined4 *)(param_4 + 0x6c),
                                         *(undefined4 *)(param_4 + 0x74),&uStack_24,0);
                      *(undefined4 *)(param_4 + 0x60) = uVar4;
                      uStack_24 = 0;
                      uVar4 = native_UnityEngine_Mathf__SmoothDamp_8e5334
                                        (*(undefined4 *)(param_4 + 100),
                                         *(undefined4 *)(param_4 + 0x70),
                                         *(undefined4 *)(param_4 + 0x74),&uStack_24,0);
                      *(undefined4 *)(param_4 + 100) = uVar4;
                      lVar2 = native_UnityEngine_Component__GetComponent_ActiveAnimation__49daec
                                        (param_4,
                                         _Method_UnityEngine_Component_GetComponent_Camera____12e29a8
                                        );
                      if ((lVar2 != 0) &&
                         (lVar2 = native_UnityEngine_Component__get_transform_8da62c(lVar2,0),
                         lVar2 != 0)) {
                        native_UnityEngine_Transform__set_position_77174c
                                  (*(undefined4 *)(param_4 + 0x5c),*(undefined4 *)(param_4 + 0x60),
                                   *(undefined4 *)(param_4 + 100),lVar2,0);
                        lVar2 = native_UnityEngine_Component__GetComponent_ActiveAnimation__49daec
                                          (param_4,
                                           _Method_UnityEngine_Component_GetComponent_Camera____12e29a8
                                          );
                        if (lVar2 != 0) {
                          lVar2 = native_UnityEngine_Component__get_transform_8da62c(lVar2,0);
                          if ((*(long *)(param_4 + 0x18) != 0) &&
                             (uVar1 = native_UnityEngine_GameObject__get_transform_8de5c8
                                                (*(long *)(param_4 + 0x18),0), lVar2 != 0)) {
                            native_UnityEngine_Transform__LookAt_77261c(lVar2,uVar1,0);
                            return;
                          }
                        }
                      }
                    }
                  }
                }
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



/* Slided$$OnTriggerEnter @ 0x73e2d4
 * void Slided__OnTriggerEnter (Slided_o* __this, UnityEngine_Collider_o* other, const MethodInfo* method); */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* Slided$$OnTriggerEnter
   void Slided__OnTriggerEnter (Slided_o* __this, UnityEngine_Collider_o* other, const MethodInfo*
   method); */

void native_Slided__OnTriggerEnter_73e2d4(long param_1)

{
  undefined8 uVar1;
  undefined8 *puVar2;
  undefined8 uVar3;
  undefined8 extraout_x1;
  undefined8 extraout_x1_00;
  long lVar4;
  ulong uVar5;
  int *piVar6;
  long *plVar7;
  
  if ((bRam000000000133f621 & 1) == 0) {
    native_sub_43273c(&UnityEngine_Debug_TypeInfo_12d4338);
    native_sub_43273c(&StringLiteral_Slide_enter__12f0eb8);
    bRam000000000133f621 = 1;
  }
  uVar1 = native_System_Int32__ToString_83c60c(param_1 + 0x34,0);
  uVar1 = native_System_String__Concat_afbd68(_StringLiteral_Slide_enter__12f0eb8,uVar1,0);
  if (((*(byte *)(_UnityEngine_Debug_TypeInfo_12d4338 + 0x133) >> 2 & 1) != 0) &&
     (*(int *)(_UnityEngine_Debug_TypeInfo_12d4338 + 0xe0) == 0)) {
    native_sub_4327ec(_UnityEngine_Debug_TypeInfo_12d4338);
  }
  uVar3 = 0;
  if ((bRam0000000001340b50 & 1) == 0) {
    native_sub_43273c(&UnityEngine_Debug_TypeInfo_12d4338,0);
    native_sub_43273c(&UnityEngine_ILogger_TypeInfo_12d4c10);
    bRam0000000001340b50 = 1;
    uVar3 = extraout_x1;
  }
  if (((*(byte *)(_UnityEngine_Debug_TypeInfo_12d4338 + 0x133) >> 2 & 1) != 0) &&
     (*(int *)(_UnityEngine_Debug_TypeInfo_12d4338 + 0xe0) == 0)) {
    native_sub_4327ec();
    uVar3 = extraout_x1_00;
  }
  if (cRam000000000134112a == '\0') {
    native_sub_43273c(&UnityEngine_Debug_TypeInfo_12d4338,uVar3);
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
  lVar4 = *plVar7;
  if ((ulong)*(ushort *)(lVar4 + 0x12a) != 0) {
    uVar5 = 0;
    piVar6 = (int *)(*(long *)(lVar4 + 0xb0) + 8);
    do {
      if (*(long *)(piVar6 + -2) == _UnityEngine_ILogger_TypeInfo_12d4c10) {
        puVar2 = (undefined8 *)(lVar4 + (long)(*piVar6 + 2) * 0x10 + 0x138);
        goto code_r0x008dc474;
      }
      uVar5 = uVar5 + 1;
      piVar6 = piVar6 + 4;
    } while (uVar5 < *(ushort *)(lVar4 + 0x12a));
  }
  puVar2 = (undefined8 *)native_sub_3c9b34(plVar7,_UnityEngine_ILogger_TypeInfo_12d4c10,2);
code_r0x008dc474:
                    /* WARNING: Could not recover jumptable at 0x008dc490. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)*puVar2)(plVar7,3,uVar1,puVar2[1]);
  return;
}



/* Slided$$OnTriggerExit @ 0x73e374
 * void Slided__OnTriggerExit (Slided_o* __this, UnityEngine_Collider_o* other, const MethodInfo* method); */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* Slided$$OnTriggerExit
   void Slided__OnTriggerExit (Slided_o* __this, UnityEngine_Collider_o* other, const MethodInfo*
   method); */

void native_Slided__OnTriggerExit_73e374(long param_1)

{
  undefined8 uVar1;
  undefined8 *puVar2;
  undefined8 uVar3;
  undefined8 extraout_x1;
  undefined8 extraout_x1_00;
  long lVar4;
  ulong uVar5;
  int *piVar6;
  long *plVar7;
  
  if ((bRam000000000133f622 & 1) == 0) {
    native_sub_43273c(&UnityEngine_Debug_TypeInfo_12d4338);
    native_sub_43273c(&StringLiteral_Slide_exit__12f0ec0);
    bRam000000000133f622 = 1;
  }
  uVar1 = native_System_Int32__ToString_83c60c(param_1 + 0x40,0);
  uVar1 = native_System_String__Concat_afbd68(_StringLiteral_Slide_exit__12f0ec0,uVar1,0);
  if (((*(byte *)(_UnityEngine_Debug_TypeInfo_12d4338 + 0x133) >> 2 & 1) != 0) &&
     (*(int *)(_UnityEngine_Debug_TypeInfo_12d4338 + 0xe0) == 0)) {
    native_sub_4327ec(_UnityEngine_Debug_TypeInfo_12d4338);
  }
  uVar3 = 0;
  if ((bRam0000000001340b50 & 1) == 0) {
    native_sub_43273c(&UnityEngine_Debug_TypeInfo_12d4338,0);
    native_sub_43273c(&UnityEngine_ILogger_TypeInfo_12d4c10);
    bRam0000000001340b50 = 1;
    uVar3 = extraout_x1;
  }
  if (((*(byte *)(_UnityEngine_Debug_TypeInfo_12d4338 + 0x133) >> 2 & 1) != 0) &&
     (*(int *)(_UnityEngine_Debug_TypeInfo_12d4338 + 0xe0) == 0)) {
    native_sub_4327ec();
    uVar3 = extraout_x1_00;
  }
  if (cRam000000000134112a == '\0') {
    native_sub_43273c(&UnityEngine_Debug_TypeInfo_12d4338,uVar3);
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
  lVar4 = *plVar7;
  if ((ulong)*(ushort *)(lVar4 + 0x12a) != 0) {
    uVar5 = 0;
    piVar6 = (int *)(*(long *)(lVar4 + 0xb0) + 8);
    do {
      if (*(long *)(piVar6 + -2) == _UnityEngine_ILogger_TypeInfo_12d4c10) {
        puVar2 = (undefined8 *)(lVar4 + (long)(*piVar6 + 2) * 0x10 + 0x138);
        goto code_r0x008dc474;
      }
      uVar5 = uVar5 + 1;
      piVar6 = piVar6 + 4;
    } while (uVar5 < *(ushort *)(lVar4 + 0x12a));
  }
  puVar2 = (undefined8 *)native_sub_3c9b34(plVar7,_UnityEngine_ILogger_TypeInfo_12d4c10,2);
code_r0x008dc474:
                    /* WARNING: Could not recover jumptable at 0x008dc490. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)*puVar2)(plVar7,3,uVar1,puVar2[1]);
  return;
}



/* Slided$$Reset3DView @ 0x73e414
 * void Slided__Reset3DView (Slided_o* __this, const MethodInfo* method); */

/* Slided$$Reset3DView
   void Slided__Reset3DView (Slided_o* __this, const MethodInfo* method); */

void native_Slided__Reset3DView_73e414(long param_1)

{
  *(undefined8 *)(param_1 + 0x28) = 0;
  return;
}



/* Slided$$Set3DView @ 0x73e41c
 * void Slided__Set3DView (Slided_o* __this, const MethodInfo* method); */

/* Slided$$Set3DView
   void Slided__Set3DView (Slided_o* __this, const MethodInfo* method); */

void native_Slided__Set3DView_73e41c(long param_1)

{
  *(undefined8 *)(param_1 + 0x28) = *(undefined8 *)(param_1 + 0x7c);
  return;
}



/* Slided$$GoToNextSlide @ 0x73e428
 * void Slided__GoToNextSlide (Slided_o* __this, const MethodInfo* method); */

/* Slided$$GoToNextSlide
   void Slided__GoToNextSlide (Slided_o* __this, const MethodInfo* method); */

void native_Slided__GoToNextSlide_73e428(long param_1)

{
  int iVar1;
  int iVar2;
  
  *(int *)(param_1 + 0x40) = *(int *)(param_1 + 0x34);
  iVar1 = *(int *)(param_1 + 0x34) + 1;
  *(int *)(param_1 + 0x34) = iVar1;
  if (*(long *)(param_1 + 0x38) != 0) {
    iVar2 = *(int *)(*(long *)(param_1 + 0x38) + 0x18);
    if (iVar2 <= iVar1) {
      *(int *)(param_1 + 0x34) = iVar2 + -1;
    }
    return;
  }
                    /* WARNING: Subroutine does not return */
  native_sub_432810();
}



/* Slided$$GoToPrevSlide @ 0x73e464
 * void Slided__GoToPrevSlide (Slided_o* __this, const MethodInfo* method); */

/* Slided$$GoToPrevSlide
   void Slided__GoToPrevSlide (Slided_o* __this, const MethodInfo* method); */

void native_Slided__GoToPrevSlide_73e464(long param_1)

{
  uint uVar1;
  
  *(int *)(param_1 + 0x40) = *(int *)(param_1 + 0x34);
  uVar1 = *(int *)(param_1 + 0x34) - 1;
  *(uint *)(param_1 + 0x34) = uVar1 & ((int)uVar1 >> 0x1f ^ 0xffffffffU);
  return;
}



/* Slided$$GoToSlideNumber @ 0x73e47c
 * void Slided__GoToSlideNumber (Slided_o* __this, int32_t num, const MethodInfo* method); */

/* Slided$$GoToSlideNumber
   void Slided__GoToSlideNumber (Slided_o* __this, int32_t num, const MethodInfo* method); */

void native_Slided__GoToSlideNumber_73e47c(long param_1,uint param_2)

{
  undefined4 uVar1;
  int iVar2;
  
  uVar1 = *(undefined4 *)(param_1 + 0x34);
  param_2 = param_2 & ((int)param_2 >> 0x1f ^ 0xffffffffU);
  *(uint *)(param_1 + 0x34) = param_2;
  *(undefined4 *)(param_1 + 0x40) = uVar1;
  if (*(long *)(param_1 + 0x38) != 0) {
    iVar2 = *(int *)(*(long *)(param_1 + 0x38) + 0x18);
    if (iVar2 <= (int)param_2) {
      *(int *)(param_1 + 0x34) = iVar2 + -1;
    }
    return;
  }
                    /* WARNING: Subroutine does not return */
  native_sub_432810();
}



/* Slided$$FacingCamera @ 0x73dfe8
 * void Slided__FacingCamera (Slided_o* __this, const MethodInfo* method); */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* Slided$$FacingCamera
   void Slided__FacingCamera (Slided_o* __this, const MethodInfo* method); */

void native_Slided__FacingCamera_73dfe8
               (undefined1 param_1 [16],undefined1 param_2 [16],undefined4 param_3,long param_4)

{
  undefined8 uVar1;
  long lVar2;
  float fVar3;
  undefined4 uVar4;
  float fVar5;
  undefined4 uVar6;
  undefined4 uVar7;
  undefined4 uStack_24;
  
  if ((bRam000000000133f623 & 1) == 0) {
    native_sub_43273c(&Method_UnityEngine_Component_GetComponent_Camera____12e29a8);
    bRam000000000133f623 = 1;
  }
  fVar3 = (float)native_UnityEngine_Time__get_deltaTime_77082c(0);
  *(float *)(param_4 + 0x74) = fVar3 * *(float *)(param_4 + 0x20);
  fVar3 = (float)native_UnityEngine_Time__get_deltaTime_77082c(0);
  fVar5 = *(float *)(param_4 + 0x24);
  lVar2 = *(long *)(param_4 + 0x38);
  *(float *)(param_4 + 0x78) = fVar3 * fVar5;
  if (lVar2 != 0) {
    if (*(uint *)(lVar2 + 0x18) <= *(uint *)(param_4 + 0x34)) goto LAB_0073e2c8;
    lVar2 = *(long *)(lVar2 + (long)(int)*(uint *)(param_4 + 0x34) * 8 + 0x20);
    if (lVar2 != 0) {
      lVar2 = native_UnityEngine_GameObject__get_transform_8de5c8(lVar2,0);
      if (lVar2 != 0) {
        uVar4 = native_UnityEngine_Transform__get_position_77169c(lVar2,0);
        lVar2 = *(long *)(param_4 + 0x38);
        *(undefined4 *)(param_4 + 0x50) = uVar4;
        if (lVar2 != 0) {
          if (*(uint *)(lVar2 + 0x18) <= *(uint *)(param_4 + 0x34)) {
LAB_0073e2c8:
            uVar1 = native_sub_43283c();
                    /* WARNING: Subroutine does not return */
            native_sub_4327dc(uVar1,0);
          }
          lVar2 = *(long *)(lVar2 + (long)(int)*(uint *)(param_4 + 0x34) * 8 + 0x20);
          if ((lVar2 != 0) &&
             (lVar2 = native_UnityEngine_GameObject__get_transform_8de5c8(lVar2,0), lVar2 != 0)) {
            native_UnityEngine_Transform__get_position_77169c(lVar2,0);
            lVar2 = *(long *)(param_4 + 0x38);
            *(float *)(param_4 + 0x54) = fVar5;
            if (lVar2 != 0) {
              if (*(uint *)(lVar2 + 0x18) <= *(uint *)(param_4 + 0x34)) goto LAB_0073e2c8;
              lVar2 = *(long *)(lVar2 + (long)(int)*(uint *)(param_4 + 0x34) * 8 + 0x20);
              if ((lVar2 != 0) &&
                 (lVar2 = native_UnityEngine_GameObject__get_transform_8de5c8(lVar2,0), lVar2 != 0))
              {
                native_UnityEngine_Transform__get_position_77169c(lVar2,0);
                lVar2 = *(long *)(param_4 + 0x38);
                *(undefined4 *)(param_4 + 0x58) = param_3;
                if (lVar2 != 0) {
                  if (*(uint *)(lVar2 + 0x18) <= *(uint *)(param_4 + 0x34)) goto LAB_0073e2c8;
                  lVar2 = *(long *)(lVar2 + (long)(int)*(uint *)(param_4 + 0x34) * 8 + 0x20);
                  if ((lVar2 != 0) &&
                     (lVar2 = native_UnityEngine_GameObject__get_transform_8de5c8(lVar2,0),
                     lVar2 != 0)) {
                    uVar6 = *(undefined4 *)(param_4 + 0x2c);
                    uVar7 = *(undefined4 *)(param_4 + 0x30);
                    uVar4 = native_UnityEngine_Transform__TransformPoint_7728d8
                                      (*(undefined4 *)(param_4 + 0x28),lVar2,0);
                    *(undefined4 *)(param_4 + 0x68) = uVar4;
                    *(undefined4 *)(param_4 + 0x6c) = uVar6;
                    *(undefined4 *)(param_4 + 0x70) = uVar7;
                    uStack_24 = 0;
                    uVar4 = native_UnityEngine_Mathf__SmoothDamp_8e5334
                                      (*(undefined4 *)(param_4 + 0x44),
                                       *(undefined4 *)(param_4 + 0x50),
                                       *(undefined4 *)(param_4 + 0x78),&uStack_24,0);
                    *(undefined4 *)(param_4 + 0x44) = uVar4;
                    uStack_24 = 0;
                    uVar4 = native_UnityEngine_Mathf__SmoothDamp_8e5334
                                      (*(undefined4 *)(param_4 + 0x48),
                                       *(undefined4 *)(param_4 + 0x54),
                                       *(undefined4 *)(param_4 + 0x78),&uStack_24,0);
                    *(undefined4 *)(param_4 + 0x48) = uVar4;
                    uStack_24 = 0;
                    uVar4 = native_UnityEngine_Mathf__SmoothDamp_8e5334
                                      (*(undefined4 *)(param_4 + 0x4c),
                                       *(undefined4 *)(param_4 + 0x58),
                                       *(undefined4 *)(param_4 + 0x78),&uStack_24,0);
                    *(undefined4 *)(param_4 + 0x4c) = uVar4;
                    if ((*(long *)(param_4 + 0x18) != 0) &&
                       (lVar2 = native_UnityEngine_GameObject__get_transform_8de5c8
                                          (*(long *)(param_4 + 0x18),0), lVar2 != 0)) {
                      native_UnityEngine_Transform__set_position_77174c
                                (*(undefined4 *)(param_4 + 0x44),*(undefined4 *)(param_4 + 0x48),
                                 *(undefined4 *)(param_4 + 0x4c),lVar2,0);
                      uStack_24 = 0;
                      uVar4 = native_UnityEngine_Mathf__SmoothDamp_8e5334
                                        (*(undefined4 *)(param_4 + 0x5c),
                                         *(undefined4 *)(param_4 + 0x68),
                                         *(undefined4 *)(param_4 + 0x74),&uStack_24,0);
                      *(undefined4 *)(param_4 + 0x5c) = uVar4;
                      uStack_24 = 0;
                      uVar4 = native_UnityEngine_Mathf__SmoothDamp_8e5334
                                        (*(undefined4 *)(param_4 + 0x60),
                                         *(undefined4 *)(param_4 + 0x6c),
                                         *(undefined4 *)(param_4 + 0x74),&uStack_24,0);
                      *(undefined4 *)(param_4 + 0x60) = uVar4;
                      uStack_24 = 0;
                      uVar4 = native_UnityEngine_Mathf__SmoothDamp_8e5334
                                        (*(undefined4 *)(param_4 + 100),
                                         *(undefined4 *)(param_4 + 0x70),
                                         *(undefined4 *)(param_4 + 0x74),&uStack_24,0);
                      *(undefined4 *)(param_4 + 100) = uVar4;
                      lVar2 = native_UnityEngine_Component__GetComponent_ActiveAnimation__49daec
                                        (param_4,
                                         _Method_UnityEngine_Component_GetComponent_Camera____12e29a8
                                        );
                      if ((lVar2 != 0) &&
                         (lVar2 = native_UnityEngine_Component__get_transform_8da62c(lVar2,0),
                         lVar2 != 0)) {
                        native_UnityEngine_Transform__set_position_77174c
                                  (*(undefined4 *)(param_4 + 0x5c),*(undefined4 *)(param_4 + 0x60),
                                   *(undefined4 *)(param_4 + 100),lVar2,0);
                        lVar2 = native_UnityEngine_Component__GetComponent_ActiveAnimation__49daec
                                          (param_4,
                                           _Method_UnityEngine_Component_GetComponent_Camera____12e29a8
                                          );
                        if (lVar2 != 0) {
                          lVar2 = native_UnityEngine_Component__get_transform_8da62c(lVar2,0);
                          if ((*(long *)(param_4 + 0x18) != 0) &&
                             (uVar1 = native_UnityEngine_GameObject__get_transform_8de5c8
                                                (*(long *)(param_4 + 0x18),0), lVar2 != 0)) {
                            native_UnityEngine_Transform__LookAt_77261c(lVar2,uVar1,0);
                            return;
                          }
                        }
                      }
                    }
                  }
                }
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



/* Slided$$GetInputKey @ 0x73df54
 * void Slided__GetInputKey (Slided_o* __this, const MethodInfo* method); */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* Slided$$GetInputKey
   void Slided__GetInputKey (Slided_o* __this, const MethodInfo* method); */

void native_Slided__GetInputKey_73df54(long param_1)

{
  uint uVar1;
  ulong uVar2;
  
  if ((bRam000000000133f624 & 1) == 0) {
    native_sub_43273c(&StringLiteral_left_12f5408);
    native_sub_43273c(&StringLiteral_right_12f5e78);
    bRam000000000133f624 = 1;
  }
  uVar2 = native_UnityEngine_Input__GetKeyDown_dbdca4(_StringLiteral_right_12f5e78,0);
  if ((uVar2 & 1) != 0) {
    native_Slided__GoToNextSlide_73e428(param_1);
  }
  uVar2 = native_UnityEngine_Input__GetKeyDown_dbdca4(_StringLiteral_left_12f5408,0);
  if ((uVar2 & 1) != 0) {
    *(int *)(param_1 + 0x40) = *(int *)(param_1 + 0x34);
    uVar1 = *(int *)(param_1 + 0x34) - 1;
    *(uint *)(param_1 + 0x34) = uVar1 & ((int)uVar1 >> 0x1f ^ 0xffffffffU);
  }
  return;
}



/* Slided$$InterpolateValue @ 0x73e4b8
 * float Slided__InterpolateValue (Slided_o* __this, float ValueA, float ValueB, float Smooth, float Velocity, const MethodInfo* method); */

/* Slided$$InterpolateValue
   float Slided__InterpolateValue (Slided_o* __this, float ValueA, float ValueB, float Smooth, float
   Velocity, const MethodInfo* method); */

void native_Slided__InterpolateValue_73e4b8(void)

{
  undefined4 in_s3;
  undefined4 uStack_14;
  
  uStack_14 = in_s3;
  native_UnityEngine_Mathf__SmoothDamp_8e5334(&uStack_14,0);
  return;
}



/* Slided$$InterpolateAngle @ 0x73e4e0
 * float Slided__InterpolateAngle (Slided_o* __this, float ValueA, float ValueB, float Smooth, const MethodInfo* method); */

/* Slided$$InterpolateAngle
   float Slided__InterpolateAngle (Slided_o* __this, float ValueA, float ValueB, float Smooth, const
   MethodInfo* method); */

void native_Slided__InterpolateAngle_73e4e0(undefined8 param_1,undefined8 param_2,float param_3)

{
  float fVar1;
  float fVar2;
  float fVar3;
  float fVar4;
  
  fVar1 = (float)func_0x002c9f10();
  fVar2 = (float)func_0x002ca670(param_1);
  fVar3 = (float)func_0x002c9f10(param_2);
  fVar4 = (float)func_0x002ca670(param_2);
  (*(code *)&DAT_0155b368)(fVar1 - (fVar1 - fVar3) * param_3,fVar2 - (fVar2 - fVar4) * param_3);
  return;
}



/* Slided$$.ctor @ 0x73e554
 * void Slided___ctor (Slided_o* __this, const MethodInfo* method); */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* Slided$$.ctor
   void Slided___ctor (Slided_o* __this, const MethodInfo* method); */

long native_Slided___ctor_73e554(long param_1)

{
  *(undefined8 *)(param_1 + 0x20) = 0x4148000041680000;
  *(undefined4 *)(param_1 + 0x30) = 0x3f666666;
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



/* Slided$$.cctor @ 0x73e574
 * void Slided___cctor (const MethodInfo* method); */

/* Slided$$.cctor
   void Slided___cctor (const MethodInfo* method); */

void native_Slided___cctor_73e574(void)

{
  return;
}


