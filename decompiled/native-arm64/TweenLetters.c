/* ARM64 IL2CPP native pseudocode from Ghidra.
 * Recovered implementation, not original C# source.
 * Function boundaries follow the IL2CPP method address table. */


/* TweenLetters$$OnValidate @ 0x6e448c
 * void TweenLetters__OnValidate (TweenLetters_o* __this, const MethodInfo* method); */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* TweenLetters$$OnValidate
   void TweenLetters__OnValidate (TweenLetters_o* __this, const MethodInfo* method); */

long native_TweenLetters__OnValidate_6e448c(long param_1)

{
  long lVar1;
  
  if ((bRam000000000133f39f & 1) == 0) {
    native_sub_43273c(&NGUITools_TypeInfo_12d53c8);
    native_sub_43273c(&StringLiteral_Upgraded_TweenLetters_12f2d20);
    bRam000000000133f39f = 1;
  }
  lVar1 = *(long *)(param_1 + 0x80);
  if ((lVar1 != 0) && (*(char *)(lVar1 + 0x28) == '\0')) {
    native_TweenLetters_AnimationProperties__Upgrade_54f35c(lVar1,0);
    if (((*(byte *)(_NGUITools_TypeInfo_12d53c8 + 0x133) >> 2 & 1) != 0) &&
       (*(int *)(_NGUITools_TypeInfo_12d53c8 + 0xe0) == 0)) {
      native_sub_4327ec();
    }
    native_NGUITools__SetDirty_72ea3c(param_1,_StringLiteral_Upgraded_TweenLetters_12f2d20,0);
  }
  lVar1 = *(long *)(param_1 + 0x88);
  if ((lVar1 != 0) && (*(char *)(lVar1 + 0x28) == '\0')) {
    native_TweenLetters_AnimationProperties__Upgrade_54f35c(lVar1,0);
    if (((*(byte *)(_NGUITools_TypeInfo_12d53c8 + 0x133) >> 2 & 1) != 0) &&
       (*(int *)(_NGUITools_TypeInfo_12d53c8 + 0xe0) == 0)) {
      native_sub_4327ec();
    }
    return param_1;
  }
  return lVar1;
}



/* TweenLetters$$OnEnable @ 0x6e457c
 * void TweenLetters__OnEnable (TweenLetters_o* __this, const MethodInfo* method); */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* TweenLetters$$OnEnable
   void TweenLetters__OnEnable (TweenLetters_o* __this, const MethodInfo* method); */

void native_TweenLetters__OnEnable_6e457c(long param_1)

{
  ulong *puVar1;
  int iVar2;
  char cVar3;
  bool bVar4;
  undefined8 uVar5;
  long *plVar6;
  ulong uVar7;
  long *plVar8;
  long lVar9;
  long lVar10;
  long *plVar11;
  long lVar12;
  float fVar13;
  float fVar14;
  undefined4 uVar15;
  float fVar16;
  undefined1 auVar17 [16];
  
  if ((bRam000000000133f3a0 & 1) == 0) {
    native_sub_43273c(&Method_UnityEngine_Component_GetComponent_UILabel____12e2bd8);
    native_sub_43273c(&UIWidget_OnPostFillCallback_TypeInfo_12d7aa8);
    native_sub_43273c(&Method_TweenLetters_OnPostFill___12e7538);
    bRam000000000133f3a0 = 1;
  }
  *(undefined4 *)(param_1 + 0x98) = 0xffffffff;
  uVar5 = native_UnityEngine_Component__GetComponent_ActiveAnimation__49daec
                    (param_1,_Method_UnityEngine_Component_GetComponent_UILabel____12e2bd8);
  *(undefined8 *)(param_1 + 0x90) = uVar5;
  native_sub_4326e0(param_1 + 0x90);
  if (*(long *)(param_1 + 0x90) == 0) {
                    /* WARNING: Subroutine does not return */
    native_sub_432810();
  }
  plVar8 = (long *)(*(long *)(param_1 + 0x90) + 200);
  lVar9 = *plVar8;
  uVar5 = native_sub_432808(_UIWidget_OnPostFillCallback_TypeInfo_12d7aa8);
  native_UIWidget_OnPostFillCallback___ctor_55bcac
            (uVar5,param_1,_Method_TweenLetters_OnPostFill___12e7538,0);
  plVar6 = (long *)native_System_Delegate__Combine_a6cf00(lVar9,uVar5,0);
  if ((plVar6 == (long *)0x0) || (*plVar6 == _UIWidget_OnPostFillCallback_TypeInfo_12d7aa8)) {
    *plVar8 = (long)plVar6;
    native_sub_4326e0(plVar8,plVar6);
    plVar6 = (long *)(param_1 + 0xb0);
    *(undefined8 *)(param_1 + 0xb0) = *(undefined8 *)(param_1 + 0x80);
    goto native_sub_41086c;
  }
  lVar9 = native_sub_432b04(plVar6);
  if ((bRam000000000133f3a1 & 1) == 0) {
    native_sub_43273c(&UIWidget_OnPostFillCallback_TypeInfo_12d7aa8);
    native_sub_43273c(&Method_TweenLetters_OnPostFill___12e7538);
    bRam000000000133f3a1 = 1;
  }
  native_UITweener__OnDisable_948e14(lVar9,0);
  if (*(long *)(lVar9 + 0x90) == 0) {
                    /* WARNING: Subroutine does not return */
    native_sub_432810();
  }
  plVar6 = (long *)(*(long *)(lVar9 + 0x90) + 200);
  lVar10 = *plVar6;
  uVar5 = native_sub_432808(_UIWidget_OnPostFillCallback_TypeInfo_12d7aa8);
  native_UIWidget_OnPostFillCallback___ctor_55bcac
            (uVar5,lVar9,_Method_TweenLetters_OnPostFill___12e7538,0);
  plVar8 = (long *)native_System_Delegate__Remove_a6d1c0(lVar10,uVar5,0);
  if ((plVar8 == (long *)0x0) || (*plVar8 == _UIWidget_OnPostFillCallback_TypeInfo_12d7aa8)) {
    *plVar6 = (long)plVar8;
    goto native_sub_41086c;
  }
  auVar17 = native_sub_432b04(plVar8);
  plVar6 = auVar17._0_8_;
  native_UnityEngine_Behaviour__set_enabled_8d7b0c(plVar6,1,0);
  lVar9 = 0x80;
  if ((auVar17._8_8_ & 1) == 0) {
    lVar9 = 0x88;
  }
  if (plVar6 == (long *)0x0) {
LAB_006e47f0:
                    /* WARNING: Subroutine does not return */
    native_sub_432810();
  }
  plVar8 = plVar6 + 0x16;
  *plVar8 = *(long *)((long)plVar6 + lVar9);
  native_sub_4326e0(plVar8);
  if (*plVar8 == 0) goto LAB_006e47f0;
  fVar13 = *(float *)(*plVar8 + 0x10);
  if (fVar13 != 0.0) {
    *(float *)((long)plVar6 + 0x34) = fVar13;
  }
  fVar16 = (float)native_UITweener__get_amountPerDelta_9484a8(plVar6,auVar17._8_4_ & 1,0);
  fVar13 = ABS(fVar16);
  if ((auVar17._8_8_ & 1) == 0) {
    fVar13 = -ABS(fVar16);
  }
  *(float *)(plVar6 + 0xe) = fVar13;
  uVar7 = native_UnityEngine_Behaviour__get_enabled_8d7acc(plVar6,0);
  if ((uVar7 & 1) == 0) {
    native_UnityEngine_Behaviour__set_enabled_8d7b0c(plVar6,1,0);
    *(undefined1 *)((long)plVar6 + 100) = 0;
  }
  if ((bRam0000000001341444 & 1) == 0) {
    native_sub_43273c(&EventDelegate_TypeInfo_12d4590);
    native_sub_43273c(&Method_System_Collections_Generic_List_EventDelegate___ctor___12dc738);
    native_sub_43273c(&Method_System_Collections_Generic_List_EventDelegate__get_Count___12dc760);
    native_sub_43273c(&Method_System_Collections_Generic_List_EventDelegate__get_Item___12dc768);
    native_sub_43273c(&System_Collections_Generic_List_EventDelegate__TypeInfo_12d2a08);
    native_sub_43273c(&UnityEngine_Object_TypeInfo_12d54e0);
    native_sub_43273c(&UITweener_TypeInfo_12d64f0);
    bRam0000000001341444 = 1;
  }
  if (((char)plVar6[5] == '\0') || ((char)plVar6[8] != '\0')) {
    fVar13 = (float)native_UnityEngine_Time__get_deltaTime_77082c(0);
  }
  else {
    fVar13 = (float)native_UnityEngine_Time__get_unscaledDeltaTime_770894(0);
  }
  if (((char)plVar6[5] == '\0') || ((char)plVar6[8] != '\0')) {
    fVar16 = (float)native_UnityEngine_Time__get_time_7707f8(0);
  }
  else {
    fVar16 = (float)native_UnityEngine_Time__get_unscaledTime_770860(0);
  }
  if (*(char *)((long)plVar6 + 100) == '\0') {
    *(undefined1 *)((long)plVar6 + 100) = 1;
    *(float *)(plVar6 + 0xd) = fVar16;
    if ((*(float *)(plVar6 + 0xe) <= 0.0) || ((*(uint *)(plVar6 + 6) | 2) != 2)) {
      fVar13 = 0.0;
      fVar14 = fVar16;
      if ((0.0 <= *(float *)(plVar6 + 0xe)) || (1 < (int)plVar6[6] - 1U)) goto LAB_009486d4;
      fVar14 = *(float *)((long)plVar6 + 0x2c);
    }
    else {
      fVar14 = *(float *)((long)plVar6 + 0x2c);
    }
    fVar13 = 0.0;
    *(float *)(plVar6 + 0xd) = fVar16 + fVar14;
    fVar14 = fVar16 + fVar14;
  }
  else {
    fVar14 = *(float *)(plVar6 + 0xd);
  }
LAB_009486d4:
  if (fVar16 < fVar14) {
    return;
  }
  fVar16 = *(float *)((long)plVar6 + 0x74);
  if (*(float *)((long)plVar6 + 0x34) == 0.0) {
    fVar13 = 1.0;
  }
  else {
    fVar14 = (float)native_UITweener__get_amountPerDelta_9484a8(plVar6);
    fVar13 = fVar13 * fVar14 * *(float *)(plVar6 + 0xc);
  }
  iVar2 = *(int *)((long)plVar6 + 0x1c);
  fVar16 = fVar16 + fVar13;
  *(float *)((long)plVar6 + 0x74) = fVar16;
  if (iVar2 == 0) {
    if (((*(float *)((long)plVar6 + 0x34) == 0.0) || (1.0 < fVar16)) || (fVar16 < 0.0)) {
      uVar15 = native_UnityEngine_Mathf__Clamp01_8d9d9c(0);
      *(undefined4 *)((long)plVar6 + 0x74) = uVar15;
      native_UITweener__Sample_948a44(plVar6,1);
      native_UnityEngine_Behaviour__set_enabled_8d7b0c(plVar6,0,0);
      uVar5 = **(undefined8 **)(_UITweener_TypeInfo_12d64f0 + 0xb8);
      if (((*(byte *)(_UnityEngine_Object_TypeInfo_12d54e0 + 0x133) >> 2 & 1) != 0) &&
         (*(int *)(_UnityEngine_Object_TypeInfo_12d54e0 + 0xe0) == 0)) {
        native_sub_4327ec();
      }
      uVar7 = native_UnityEngine_Object__op_Inequality_8d76fc(uVar5,plVar6,0);
      if ((uVar7 & 1) == 0) {
        return;
      }
      plVar8 = *(long **)(_UITweener_TypeInfo_12d64f0 + 0xb8);
      lVar9 = *plVar8;
      *plVar8 = (long)plVar6;
      native_sub_4326e0(plVar8,plVar6);
      plVar8 = plVar6 + 9;
      if (*plVar8 != 0) {
        plVar11 = plVar6 + 0xf;
        *plVar11 = *plVar8;
        native_sub_4326e0(plVar11);
        lVar10 = native_sub_432808(_System_Collections_Generic_List_EventDelegate__TypeInfo_12d2a08)
        ;
        native_System_Collections_Generic_List_XmlEventCache_XmlEvent______ctor_d3ff44
                  (lVar10,_Method_System_Collections_Generic_List_EventDelegate___ctor___12dc738);
        plVar6[9] = lVar10;
        native_sub_4326e0(plVar8,lVar10);
        lVar10 = *plVar11;
        if (((*(byte *)(_EventDelegate_TypeInfo_12d4590 + 0x133) >> 2 & 1) != 0) &&
           (*(int *)(_EventDelegate_TypeInfo_12d4590 + 0xe0) == 0)) {
          native_sub_4327ec();
        }
        native_EventDelegate__Execute_deecbc(lVar10,0);
        lVar10 = *plVar11;
        if (lVar10 != 0) {
          uVar7 = 0;
          do {
            if ((long)(int)*(uint *)(lVar10 + 0x18) <= (long)uVar7) {
              *plVar11 = 0;
              native_sub_4326e0(plVar11,0);
              goto LAB_00948998;
            }
            if (*(uint *)(lVar10 + 0x18) <= uVar7) {
              native_System_ThrowHelper__ThrowArgumentOutOfRangeException_9fe0f4(0);
            }
            lVar10 = *(long *)(*(long *)(lVar10 + 0x10) + uVar7 * 8 + 0x20);
            if ((lVar10 != 0) && (*(char *)(lVar10 + 0x28) == '\0')) {
              lVar12 = *plVar8;
              if (((*(byte *)(_EventDelegate_TypeInfo_12d4590 + 0x133) >> 2 & 1) != 0) &&
                 (*(int *)(_EventDelegate_TypeInfo_12d4590 + 0xe0) == 0)) {
                native_sub_4327ec();
              }
              native_EventDelegate__Add_def388(lVar12,lVar10,0,0);
            }
            lVar10 = *plVar11;
            uVar7 = uVar7 + 1;
          } while (lVar10 != 0);
        }
LAB_00948900:
                    /* WARNING: Subroutine does not return */
        native_sub_432810();
      }
LAB_00948998:
      lVar10 = plVar6[10];
      if (((*(byte *)(_UnityEngine_Object_TypeInfo_12d54e0 + 0x133) >> 2 & 1) != 0) &&
         (*(int *)(_UnityEngine_Object_TypeInfo_12d54e0 + 0xe0) == 0)) {
        native_sub_4327ec();
      }
      uVar7 = native_UnityEngine_Object__op_Inequality_8d76fc(lVar10,0,0);
      if (((uVar7 & 1) != 0) &&
         (uVar7 = native_System_String__IsNullOrEmpty_b09430(plVar6[0xb],0), (uVar7 & 1) == 0)) {
        if (plVar6[10] == 0) goto LAB_00948900;
        native_UnityEngine_GameObject__SendMessage_8de4c0(plVar6[10],plVar6[0xb],plVar6,1,0);
      }
      plVar6 = *(long **)(_UITweener_TypeInfo_12d64f0 + 0xb8);
      *plVar6 = lVar9;
native_sub_41086c:
      if (iRam0000000001345318 != 0) {
        puVar1 = (ulong *)(((ulong)plVar6 >> 0x12 & 0x7fff) * 8 + 0x138ecd8);
        do {
          cVar3 = '\x01';
          bVar4 = (bool)ExclusiveMonitorPass(puVar1,0x10);
          if (bVar4) {
            *puVar1 = *puVar1 | 1L << ((ulong)plVar6 >> 0xc & 0x3f);
            cVar3 = ExclusiveMonitorsStatus();
          }
        } while (cVar3 != '\0');
      }
      return;
    }
  }
  else if (iVar2 == 2) {
    if (fVar16 <= 1.0) {
      if (0.0 <= fVar16) goto LAB_00948948;
      fVar13 = *(float *)(plVar6 + 0xe);
      *(float *)((long)plVar6 + 0x74) = -fVar16 - (float)(int)-fVar16;
    }
    else {
      fVar13 = *(float *)(plVar6 + 0xe);
      *(float *)((long)plVar6 + 0x74) = ((float)(int)fVar16 - fVar16) + 1.0;
    }
    *(float *)(plVar6 + 0xe) = -fVar13;
  }
  else if ((iVar2 == 1) && (1.0 < fVar16)) {
    *(float *)((long)plVar6 + 0x74) = fVar16 - (float)(int)fVar16;
  }
LAB_00948948:
  uVar7 = native_UnityEngine_Mathf__Clamp01_8d9d9c(0);
  fVar13 = (float)uVar7;
  switch((int)plVar6[3]) {
  case 1:
    fVar13 = (float)func_0x002c9f10((1.0 - fVar13) * 1.5707964);
    fVar13 = 1.0 - fVar13;
    if ((char)plVar6[7] != '\0') {
      fVar13 = fVar13 * fVar13;
    }
    uVar7 = (ulong)(uint)fVar13;
    break;
  case 2:
    uVar7 = func_0x002c9f10(fVar13 * 1.5707964);
    if ((char)plVar6[7] != '\0') {
      fVar13 = 1.0 - (float)uVar7;
      uVar7 = (ulong)(uint)(1.0 - fVar13 * fVar13);
    }
    break;
  case 3:
    fVar16 = (float)func_0x002c9f10(fVar13 * 6.2831855);
    fVar13 = fVar13 - fVar16 / 6.2831855;
    uVar7 = (ulong)(uint)fVar13;
    if ((char)plVar6[7] != '\0') {
      fVar16 = fVar13 + fVar13 + -1.0;
      fVar13 = (float)native_UnityEngine_Mathf__Sign_8e51d8(fVar16,0);
      fVar16 = 1.0 - ABS(fVar16);
      uVar7 = (ulong)(uint)((1.0 - fVar16 * fVar16) * fVar13 * 0.5 + 0.5);
    }
    break;
  case 4:
    uVar7 = native_UITweener__BounceLogic_948e84(uVar7);
    break;
  case 5:
    fVar13 = (float)native_UITweener__BounceLogic_948e84(1.0 - fVar13);
    uVar7 = (ulong)(uint)(1.0 - fVar13);
  }
  if (plVar6[4] != 0) {
    uVar7 = native_UnityEngine_AnimationCurve__Evaluate_8d5be4(uVar7,plVar6[4],0);
  }
                    /* WARNING: Could not recover jumptable at 0x00948ba4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(*plVar6 + 0x1a8))(uVar7,plVar6,0,*(undefined8 *)(*plVar6 + 0x1b0));
  return;
}



/* TweenLetters$$OnDisable @ 0x6e4694
 * void TweenLetters__OnDisable (TweenLetters_o* __this, const MethodInfo* method); */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* TweenLetters$$OnDisable
   void TweenLetters__OnDisable (TweenLetters_o* __this, const MethodInfo* method); */

void native_TweenLetters__OnDisable_6e4694(long param_1)

{
  ulong *puVar1;
  int iVar2;
  char cVar3;
  bool bVar4;
  undefined8 uVar5;
  long *plVar6;
  long lVar7;
  ulong uVar8;
  long *plVar9;
  long lVar10;
  long *plVar11;
  long lVar12;
  float fVar13;
  float fVar14;
  undefined4 uVar15;
  float fVar16;
  undefined1 auVar17 [16];
  
  if ((bRam000000000133f3a1 & 1) == 0) {
    native_sub_43273c(&UIWidget_OnPostFillCallback_TypeInfo_12d7aa8);
    native_sub_43273c(&Method_TweenLetters_OnPostFill___12e7538);
    bRam000000000133f3a1 = 1;
  }
  native_UITweener__OnDisable_948e14(param_1,0);
  if (*(long *)(param_1 + 0x90) == 0) {
                    /* WARNING: Subroutine does not return */
    native_sub_432810();
  }
  plVar9 = (long *)(*(long *)(param_1 + 0x90) + 200);
  lVar10 = *plVar9;
  uVar5 = native_sub_432808(_UIWidget_OnPostFillCallback_TypeInfo_12d7aa8);
  native_UIWidget_OnPostFillCallback___ctor_55bcac
            (uVar5,param_1,_Method_TweenLetters_OnPostFill___12e7538,0);
  plVar6 = (long *)native_System_Delegate__Remove_a6d1c0(lVar10,uVar5,0);
  if ((plVar6 == (long *)0x0) || (*plVar6 == _UIWidget_OnPostFillCallback_TypeInfo_12d7aa8)) {
    *plVar9 = (long)plVar6;
    goto native_sub_41086c;
  }
  auVar17 = native_sub_432b04(plVar6);
  plVar9 = auVar17._0_8_;
  native_UnityEngine_Behaviour__set_enabled_8d7b0c(plVar9,1,0);
  lVar10 = 0x80;
  if ((auVar17._8_8_ & 1) == 0) {
    lVar10 = 0x88;
  }
  if (plVar9 == (long *)0x0) {
LAB_006e47f0:
                    /* WARNING: Subroutine does not return */
    native_sub_432810();
  }
  plVar6 = plVar9 + 0x16;
  *plVar6 = *(long *)((long)plVar9 + lVar10);
  native_sub_4326e0(plVar6);
  if (*plVar6 == 0) goto LAB_006e47f0;
  fVar13 = *(float *)(*plVar6 + 0x10);
  if (fVar13 != 0.0) {
    *(float *)((long)plVar9 + 0x34) = fVar13;
  }
  fVar16 = (float)native_UITweener__get_amountPerDelta_9484a8(plVar9,auVar17._8_4_ & 1,0);
  fVar13 = ABS(fVar16);
  if ((auVar17._8_8_ & 1) == 0) {
    fVar13 = -ABS(fVar16);
  }
  *(float *)(plVar9 + 0xe) = fVar13;
  uVar8 = native_UnityEngine_Behaviour__get_enabled_8d7acc(plVar9,0);
  if ((uVar8 & 1) == 0) {
    native_UnityEngine_Behaviour__set_enabled_8d7b0c(plVar9,1,0);
    *(undefined1 *)((long)plVar9 + 100) = 0;
  }
  if ((bRam0000000001341444 & 1) == 0) {
    native_sub_43273c(&EventDelegate_TypeInfo_12d4590);
    native_sub_43273c(&Method_System_Collections_Generic_List_EventDelegate___ctor___12dc738);
    native_sub_43273c(&Method_System_Collections_Generic_List_EventDelegate__get_Count___12dc760);
    native_sub_43273c(&Method_System_Collections_Generic_List_EventDelegate__get_Item___12dc768);
    native_sub_43273c(&System_Collections_Generic_List_EventDelegate__TypeInfo_12d2a08);
    native_sub_43273c(&UnityEngine_Object_TypeInfo_12d54e0);
    native_sub_43273c(&UITweener_TypeInfo_12d64f0);
    bRam0000000001341444 = 1;
  }
  if (((char)plVar9[5] == '\0') || ((char)plVar9[8] != '\0')) {
    fVar13 = (float)native_UnityEngine_Time__get_deltaTime_77082c(0);
  }
  else {
    fVar13 = (float)native_UnityEngine_Time__get_unscaledDeltaTime_770894(0);
  }
  if (((char)plVar9[5] == '\0') || ((char)plVar9[8] != '\0')) {
    fVar16 = (float)native_UnityEngine_Time__get_time_7707f8(0);
  }
  else {
    fVar16 = (float)native_UnityEngine_Time__get_unscaledTime_770860(0);
  }
  if (*(char *)((long)plVar9 + 100) == '\0') {
    *(undefined1 *)((long)plVar9 + 100) = 1;
    *(float *)(plVar9 + 0xd) = fVar16;
    if ((*(float *)(plVar9 + 0xe) <= 0.0) || ((*(uint *)(plVar9 + 6) | 2) != 2)) {
      fVar13 = 0.0;
      fVar14 = fVar16;
      if ((0.0 <= *(float *)(plVar9 + 0xe)) || (1 < (int)plVar9[6] - 1U)) goto LAB_009486d4;
      fVar14 = *(float *)((long)plVar9 + 0x2c);
    }
    else {
      fVar14 = *(float *)((long)plVar9 + 0x2c);
    }
    fVar13 = 0.0;
    *(float *)(plVar9 + 0xd) = fVar16 + fVar14;
    fVar14 = fVar16 + fVar14;
  }
  else {
    fVar14 = *(float *)(plVar9 + 0xd);
  }
LAB_009486d4:
  if (fVar16 < fVar14) {
    return;
  }
  fVar16 = *(float *)((long)plVar9 + 0x74);
  if (*(float *)((long)plVar9 + 0x34) == 0.0) {
    fVar13 = 1.0;
  }
  else {
    fVar14 = (float)native_UITweener__get_amountPerDelta_9484a8(plVar9);
    fVar13 = fVar13 * fVar14 * *(float *)(plVar9 + 0xc);
  }
  iVar2 = *(int *)((long)plVar9 + 0x1c);
  fVar16 = fVar16 + fVar13;
  *(float *)((long)plVar9 + 0x74) = fVar16;
  if (iVar2 == 0) {
    if (((*(float *)((long)plVar9 + 0x34) == 0.0) || (1.0 < fVar16)) || (fVar16 < 0.0)) {
      uVar15 = native_UnityEngine_Mathf__Clamp01_8d9d9c(0);
      *(undefined4 *)((long)plVar9 + 0x74) = uVar15;
      native_UITweener__Sample_948a44(plVar9,1);
      native_UnityEngine_Behaviour__set_enabled_8d7b0c(plVar9,0,0);
      uVar5 = **(undefined8 **)(_UITweener_TypeInfo_12d64f0 + 0xb8);
      if (((*(byte *)(_UnityEngine_Object_TypeInfo_12d54e0 + 0x133) >> 2 & 1) != 0) &&
         (*(int *)(_UnityEngine_Object_TypeInfo_12d54e0 + 0xe0) == 0)) {
        native_sub_4327ec();
      }
      uVar8 = native_UnityEngine_Object__op_Inequality_8d76fc(uVar5,plVar9,0);
      if ((uVar8 & 1) == 0) {
        return;
      }
      plVar6 = *(long **)(_UITweener_TypeInfo_12d64f0 + 0xb8);
      lVar10 = *plVar6;
      *plVar6 = (long)plVar9;
      native_sub_4326e0(plVar6,plVar9);
      plVar6 = plVar9 + 9;
      if (*plVar6 != 0) {
        plVar11 = plVar9 + 0xf;
        *plVar11 = *plVar6;
        native_sub_4326e0(plVar11);
        lVar7 = native_sub_432808(_System_Collections_Generic_List_EventDelegate__TypeInfo_12d2a08);
        native_System_Collections_Generic_List_XmlEventCache_XmlEvent______ctor_d3ff44
                  (lVar7,_Method_System_Collections_Generic_List_EventDelegate___ctor___12dc738);
        plVar9[9] = lVar7;
        native_sub_4326e0(plVar6,lVar7);
        lVar7 = *plVar11;
        if (((*(byte *)(_EventDelegate_TypeInfo_12d4590 + 0x133) >> 2 & 1) != 0) &&
           (*(int *)(_EventDelegate_TypeInfo_12d4590 + 0xe0) == 0)) {
          native_sub_4327ec();
        }
        native_EventDelegate__Execute_deecbc(lVar7,0);
        lVar7 = *plVar11;
        if (lVar7 != 0) {
          uVar8 = 0;
          do {
            if ((long)(int)*(uint *)(lVar7 + 0x18) <= (long)uVar8) {
              *plVar11 = 0;
              native_sub_4326e0(plVar11,0);
              goto LAB_00948998;
            }
            if (*(uint *)(lVar7 + 0x18) <= uVar8) {
              native_System_ThrowHelper__ThrowArgumentOutOfRangeException_9fe0f4(0);
            }
            lVar7 = *(long *)(*(long *)(lVar7 + 0x10) + uVar8 * 8 + 0x20);
            if ((lVar7 != 0) && (*(char *)(lVar7 + 0x28) == '\0')) {
              lVar12 = *plVar6;
              if (((*(byte *)(_EventDelegate_TypeInfo_12d4590 + 0x133) >> 2 & 1) != 0) &&
                 (*(int *)(_EventDelegate_TypeInfo_12d4590 + 0xe0) == 0)) {
                native_sub_4327ec();
              }
              native_EventDelegate__Add_def388(lVar12,lVar7,0,0);
            }
            lVar7 = *plVar11;
            uVar8 = uVar8 + 1;
          } while (lVar7 != 0);
        }
LAB_00948900:
                    /* WARNING: Subroutine does not return */
        native_sub_432810();
      }
LAB_00948998:
      lVar7 = plVar9[10];
      if (((*(byte *)(_UnityEngine_Object_TypeInfo_12d54e0 + 0x133) >> 2 & 1) != 0) &&
         (*(int *)(_UnityEngine_Object_TypeInfo_12d54e0 + 0xe0) == 0)) {
        native_sub_4327ec();
      }
      uVar8 = native_UnityEngine_Object__op_Inequality_8d76fc(lVar7,0,0);
      if (((uVar8 & 1) != 0) &&
         (uVar8 = native_System_String__IsNullOrEmpty_b09430(plVar9[0xb],0), (uVar8 & 1) == 0)) {
        if (plVar9[10] == 0) goto LAB_00948900;
        native_UnityEngine_GameObject__SendMessage_8de4c0(plVar9[10],plVar9[0xb],plVar9,1,0);
      }
      plVar9 = *(long **)(_UITweener_TypeInfo_12d64f0 + 0xb8);
      *plVar9 = lVar10;
native_sub_41086c:
      if (iRam0000000001345318 != 0) {
        puVar1 = (ulong *)(((ulong)plVar9 >> 0x12 & 0x7fff) * 8 + 0x138ecd8);
        do {
          cVar3 = '\x01';
          bVar4 = (bool)ExclusiveMonitorPass(puVar1,0x10);
          if (bVar4) {
            *puVar1 = *puVar1 | 1L << ((ulong)plVar9 >> 0xc & 0x3f);
            cVar3 = ExclusiveMonitorsStatus();
          }
        } while (cVar3 != '\0');
      }
      return;
    }
  }
  else if (iVar2 == 2) {
    if (fVar16 <= 1.0) {
      if (0.0 <= fVar16) goto LAB_00948948;
      fVar13 = *(float *)(plVar9 + 0xe);
      *(float *)((long)plVar9 + 0x74) = -fVar16 - (float)(int)-fVar16;
    }
    else {
      fVar13 = *(float *)(plVar9 + 0xe);
      *(float *)((long)plVar9 + 0x74) = ((float)(int)fVar16 - fVar16) + 1.0;
    }
    *(float *)(plVar9 + 0xe) = -fVar13;
  }
  else if ((iVar2 == 1) && (1.0 < fVar16)) {
    *(float *)((long)plVar9 + 0x74) = fVar16 - (float)(int)fVar16;
  }
LAB_00948948:
  uVar8 = native_UnityEngine_Mathf__Clamp01_8d9d9c(0);
  fVar13 = (float)uVar8;
  switch((int)plVar9[3]) {
  case 1:
    fVar13 = (float)func_0x002c9f10((1.0 - fVar13) * 1.5707964);
    fVar13 = 1.0 - fVar13;
    if ((char)plVar9[7] != '\0') {
      fVar13 = fVar13 * fVar13;
    }
    uVar8 = (ulong)(uint)fVar13;
    break;
  case 2:
    uVar8 = func_0x002c9f10(fVar13 * 1.5707964);
    if ((char)plVar9[7] != '\0') {
      fVar13 = 1.0 - (float)uVar8;
      uVar8 = (ulong)(uint)(1.0 - fVar13 * fVar13);
    }
    break;
  case 3:
    fVar16 = (float)func_0x002c9f10(fVar13 * 6.2831855);
    fVar13 = fVar13 - fVar16 / 6.2831855;
    uVar8 = (ulong)(uint)fVar13;
    if ((char)plVar9[7] != '\0') {
      fVar16 = fVar13 + fVar13 + -1.0;
      fVar13 = (float)native_UnityEngine_Mathf__Sign_8e51d8(fVar16,0);
      fVar16 = 1.0 - ABS(fVar16);
      uVar8 = (ulong)(uint)((1.0 - fVar16 * fVar16) * fVar13 * 0.5 + 0.5);
    }
    break;
  case 4:
    uVar8 = native_UITweener__BounceLogic_948e84(uVar8);
    break;
  case 5:
    fVar13 = (float)native_UITweener__BounceLogic_948e84(1.0 - fVar13);
    uVar8 = (ulong)(uint)(1.0 - fVar13);
  }
  if (plVar9[4] != 0) {
    uVar8 = native_UnityEngine_AnimationCurve__Evaluate_8d5be4(uVar8,plVar9[4],0);
  }
                    /* WARNING: Could not recover jumptable at 0x00948ba4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(*plVar9 + 0x1a8))(uVar8,plVar9,0,*(undefined8 *)(*plVar9 + 0x1b0));
  return;
}



/* TweenLetters$$Play @ 0x6e4770
 * void TweenLetters__Play (TweenLetters_o* __this, bool forward, const MethodInfo* method); */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* TweenLetters$$Play
   void TweenLetters__Play (TweenLetters_o* __this, bool forward, const MethodInfo* method); */

void native_TweenLetters__Play_6e4770(long *param_1,uint param_2)

{
  ulong *puVar1;
  int iVar2;
  char cVar3;
  bool bVar4;
  long *plVar5;
  long lVar6;
  ulong uVar7;
  undefined8 uVar8;
  long lVar9;
  long *plVar10;
  long lVar11;
  float fVar12;
  float fVar13;
  undefined4 uVar14;
  float fVar15;
  
  native_UnityEngine_Behaviour__set_enabled_8d7b0c(param_1,1,0);
  lVar9 = 0x80;
  if ((param_2 & 1) == 0) {
    lVar9 = 0x88;
  }
  if (param_1 == (long *)0x0) {
LAB_006e47f0:
                    /* WARNING: Subroutine does not return */
    native_sub_432810();
  }
  plVar5 = param_1 + 0x16;
  *plVar5 = *(long *)((long)param_1 + lVar9);
  native_sub_4326e0(plVar5);
  if (*plVar5 == 0) goto LAB_006e47f0;
  fVar12 = *(float *)(*plVar5 + 0x10);
  if (fVar12 != 0.0) {
    *(float *)((long)param_1 + 0x34) = fVar12;
  }
  fVar15 = (float)native_UITweener__get_amountPerDelta_9484a8(param_1,param_2 & 1,0);
  fVar12 = ABS(fVar15);
  if ((param_2 & 1) == 0) {
    fVar12 = -ABS(fVar15);
  }
  *(float *)(param_1 + 0xe) = fVar12;
  uVar7 = native_UnityEngine_Behaviour__get_enabled_8d7acc(param_1,0);
  if ((uVar7 & 1) == 0) {
    native_UnityEngine_Behaviour__set_enabled_8d7b0c(param_1,1,0);
    *(undefined1 *)((long)param_1 + 100) = 0;
  }
  if ((bRam0000000001341444 & 1) == 0) {
    native_sub_43273c(&EventDelegate_TypeInfo_12d4590);
    native_sub_43273c(&Method_System_Collections_Generic_List_EventDelegate___ctor___12dc738);
    native_sub_43273c(&Method_System_Collections_Generic_List_EventDelegate__get_Count___12dc760);
    native_sub_43273c(&Method_System_Collections_Generic_List_EventDelegate__get_Item___12dc768);
    native_sub_43273c(&System_Collections_Generic_List_EventDelegate__TypeInfo_12d2a08);
    native_sub_43273c(&UnityEngine_Object_TypeInfo_12d54e0);
    native_sub_43273c(&UITweener_TypeInfo_12d64f0);
    bRam0000000001341444 = 1;
  }
  if (((char)param_1[5] == '\0') || ((char)param_1[8] != '\0')) {
    fVar12 = (float)native_UnityEngine_Time__get_deltaTime_77082c(0);
  }
  else {
    fVar12 = (float)native_UnityEngine_Time__get_unscaledDeltaTime_770894(0);
  }
  if (((char)param_1[5] == '\0') || ((char)param_1[8] != '\0')) {
    fVar15 = (float)native_UnityEngine_Time__get_time_7707f8(0);
  }
  else {
    fVar15 = (float)native_UnityEngine_Time__get_unscaledTime_770860(0);
  }
  if (*(char *)((long)param_1 + 100) == '\0') {
    *(undefined1 *)((long)param_1 + 100) = 1;
    *(float *)(param_1 + 0xd) = fVar15;
    if ((*(float *)(param_1 + 0xe) <= 0.0) || ((*(uint *)(param_1 + 6) | 2) != 2)) {
      fVar12 = 0.0;
      fVar13 = fVar15;
      if ((0.0 <= *(float *)(param_1 + 0xe)) || (1 < (int)param_1[6] - 1U)) goto LAB_009486d4;
      fVar13 = *(float *)((long)param_1 + 0x2c);
    }
    else {
      fVar13 = *(float *)((long)param_1 + 0x2c);
    }
    fVar12 = 0.0;
    *(float *)(param_1 + 0xd) = fVar15 + fVar13;
    fVar13 = fVar15 + fVar13;
  }
  else {
    fVar13 = *(float *)(param_1 + 0xd);
  }
LAB_009486d4:
  if (fVar15 < fVar13) {
    return;
  }
  fVar15 = *(float *)((long)param_1 + 0x74);
  if (*(float *)((long)param_1 + 0x34) == 0.0) {
    fVar12 = 1.0;
  }
  else {
    fVar13 = (float)native_UITweener__get_amountPerDelta_9484a8(param_1);
    fVar12 = fVar12 * fVar13 * *(float *)(param_1 + 0xc);
  }
  iVar2 = *(int *)((long)param_1 + 0x1c);
  fVar15 = fVar15 + fVar12;
  *(float *)((long)param_1 + 0x74) = fVar15;
  if (iVar2 == 0) {
    if (((*(float *)((long)param_1 + 0x34) == 0.0) || (1.0 < fVar15)) || (fVar15 < 0.0)) {
      uVar14 = native_UnityEngine_Mathf__Clamp01_8d9d9c(0);
      *(undefined4 *)((long)param_1 + 0x74) = uVar14;
      native_UITweener__Sample_948a44(param_1,1);
      native_UnityEngine_Behaviour__set_enabled_8d7b0c(param_1,0,0);
      uVar8 = **(undefined8 **)(_UITweener_TypeInfo_12d64f0 + 0xb8);
      if (((*(byte *)(_UnityEngine_Object_TypeInfo_12d54e0 + 0x133) >> 2 & 1) != 0) &&
         (*(int *)(_UnityEngine_Object_TypeInfo_12d54e0 + 0xe0) == 0)) {
        native_sub_4327ec();
      }
      uVar7 = native_UnityEngine_Object__op_Inequality_8d76fc(uVar8,param_1,0);
      if ((uVar7 & 1) == 0) {
        return;
      }
      plVar5 = *(long **)(_UITweener_TypeInfo_12d64f0 + 0xb8);
      lVar9 = *plVar5;
      *plVar5 = (long)param_1;
      native_sub_4326e0(plVar5,param_1);
      plVar5 = param_1 + 9;
      if (*plVar5 != 0) {
        plVar10 = param_1 + 0xf;
        *plVar10 = *plVar5;
        native_sub_4326e0(plVar10);
        lVar6 = native_sub_432808(_System_Collections_Generic_List_EventDelegate__TypeInfo_12d2a08);
        native_System_Collections_Generic_List_XmlEventCache_XmlEvent______ctor_d3ff44
                  (lVar6,_Method_System_Collections_Generic_List_EventDelegate___ctor___12dc738);
        param_1[9] = lVar6;
        native_sub_4326e0(plVar5,lVar6);
        lVar6 = *plVar10;
        if (((*(byte *)(_EventDelegate_TypeInfo_12d4590 + 0x133) >> 2 & 1) != 0) &&
           (*(int *)(_EventDelegate_TypeInfo_12d4590 + 0xe0) == 0)) {
          native_sub_4327ec();
        }
        native_EventDelegate__Execute_deecbc(lVar6,0);
        lVar6 = *plVar10;
        if (lVar6 != 0) {
          uVar7 = 0;
          do {
            if ((long)(int)*(uint *)(lVar6 + 0x18) <= (long)uVar7) {
              *plVar10 = 0;
              native_sub_4326e0(plVar10,0);
              goto LAB_00948998;
            }
            if (*(uint *)(lVar6 + 0x18) <= uVar7) {
              native_System_ThrowHelper__ThrowArgumentOutOfRangeException_9fe0f4(0);
            }
            lVar6 = *(long *)(*(long *)(lVar6 + 0x10) + uVar7 * 8 + 0x20);
            if ((lVar6 != 0) && (*(char *)(lVar6 + 0x28) == '\0')) {
              lVar11 = *plVar5;
              if (((*(byte *)(_EventDelegate_TypeInfo_12d4590 + 0x133) >> 2 & 1) != 0) &&
                 (*(int *)(_EventDelegate_TypeInfo_12d4590 + 0xe0) == 0)) {
                native_sub_4327ec();
              }
              native_EventDelegate__Add_def388(lVar11,lVar6,0,0);
            }
            lVar6 = *plVar10;
            uVar7 = uVar7 + 1;
          } while (lVar6 != 0);
        }
LAB_00948900:
                    /* WARNING: Subroutine does not return */
        native_sub_432810();
      }
LAB_00948998:
      lVar6 = param_1[10];
      if (((*(byte *)(_UnityEngine_Object_TypeInfo_12d54e0 + 0x133) >> 2 & 1) != 0) &&
         (*(int *)(_UnityEngine_Object_TypeInfo_12d54e0 + 0xe0) == 0)) {
        native_sub_4327ec();
      }
      uVar7 = native_UnityEngine_Object__op_Inequality_8d76fc(lVar6,0,0);
      if (((uVar7 & 1) != 0) &&
         (uVar7 = native_System_String__IsNullOrEmpty_b09430(param_1[0xb],0), (uVar7 & 1) == 0)) {
        if (param_1[10] == 0) goto LAB_00948900;
        native_UnityEngine_GameObject__SendMessage_8de4c0(param_1[10],param_1[0xb],param_1,1,0);
      }
      plVar5 = *(long **)(_UITweener_TypeInfo_12d64f0 + 0xb8);
      *plVar5 = lVar9;
      if (iRam0000000001345318 != 0) {
        puVar1 = (ulong *)(((ulong)plVar5 >> 0x12 & 0x7fff) * 8 + 0x138ecd8);
        do {
          cVar3 = '\x01';
          bVar4 = (bool)ExclusiveMonitorPass(puVar1,0x10);
          if (bVar4) {
            *puVar1 = *puVar1 | 1L << ((ulong)plVar5 >> 0xc & 0x3f);
            cVar3 = ExclusiveMonitorsStatus();
          }
        } while (cVar3 != '\0');
      }
      return;
    }
  }
  else if (iVar2 == 2) {
    if (fVar15 <= 1.0) {
      if (0.0 <= fVar15) goto LAB_00948948;
      fVar12 = *(float *)(param_1 + 0xe);
      *(float *)((long)param_1 + 0x74) = -fVar15 - (float)(int)-fVar15;
    }
    else {
      fVar12 = *(float *)(param_1 + 0xe);
      *(float *)((long)param_1 + 0x74) = ((float)(int)fVar15 - fVar15) + 1.0;
    }
    *(float *)(param_1 + 0xe) = -fVar12;
  }
  else if ((iVar2 == 1) && (1.0 < fVar15)) {
    *(float *)((long)param_1 + 0x74) = fVar15 - (float)(int)fVar15;
  }
LAB_00948948:
  uVar7 = native_UnityEngine_Mathf__Clamp01_8d9d9c(0);
  fVar12 = (float)uVar7;
  switch((int)param_1[3]) {
  case 1:
    fVar12 = (float)func_0x002c9f10((1.0 - fVar12) * 1.5707964);
    fVar12 = 1.0 - fVar12;
    if ((char)param_1[7] != '\0') {
      fVar12 = fVar12 * fVar12;
    }
    uVar7 = (ulong)(uint)fVar12;
    break;
  case 2:
    uVar7 = func_0x002c9f10(fVar12 * 1.5707964);
    if ((char)param_1[7] != '\0') {
      fVar12 = 1.0 - (float)uVar7;
      uVar7 = (ulong)(uint)(1.0 - fVar12 * fVar12);
    }
    break;
  case 3:
    fVar15 = (float)func_0x002c9f10(fVar12 * 6.2831855);
    fVar12 = fVar12 - fVar15 / 6.2831855;
    uVar7 = (ulong)(uint)fVar12;
    if ((char)param_1[7] != '\0') {
      fVar15 = fVar12 + fVar12 + -1.0;
      fVar12 = (float)native_UnityEngine_Mathf__Sign_8e51d8(fVar15,0);
      fVar15 = 1.0 - ABS(fVar15);
      uVar7 = (ulong)(uint)((1.0 - fVar15 * fVar15) * fVar12 * 0.5 + 0.5);
    }
    break;
  case 4:
    uVar7 = native_UITweener__BounceLogic_948e84(uVar7);
    break;
  case 5:
    fVar12 = (float)native_UITweener__BounceLogic_948e84(1.0 - fVar12);
    uVar7 = (ulong)(uint)(1.0 - fVar12);
  }
  if (param_1[4] != 0) {
    uVar7 = native_UnityEngine_AnimationCurve__Evaluate_8d5be4(uVar7,param_1[4],0);
  }
                    /* WARNING: Could not recover jumptable at 0x00948ba4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(*param_1 + 0x1a8))(uVar7,param_1,0,*(undefined8 *)(*param_1 + 0x1b0));
  return;
}



/* TweenLetters$$OnPostFill @ 0x6e47f4
 * void TweenLetters__OnPostFill (TweenLetters_o* __this, UIWidget_o* widget, int32_t bufferOffset, System_Collections_Generic_List_Vector3__o* verts, System_Collections_Generic_List_Vector2__o* uvs, System_Collections_Generic_List_Color__o* cols, const MethodInfo* method); */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* TweenLetters$$OnPostFill
   void TweenLetters__OnPostFill (TweenLetters_o* __this, UIWidget_o* widget, int32_t bufferOffset,
   System_Collections_Generic_List_Vector3__o* verts, System_Collections_Generic_List_Vector2__o*
   uvs, System_Collections_Generic_List_Color__o* cols, const MethodInfo* method); */

void native_TweenLetters__OnPostFill_6e47f4
               (long param_1,undefined8 param_2,undefined8 param_3,long param_4,undefined8 param_5,
               long param_6)

{
  int iVar1;
  int iVar2;
  uint uVar3;
  int iVar4;
  uint uVar5;
  int iVar6;
  int iVar7;
  ulong uVar8;
  long lVar9;
  long lVar10;
  undefined8 uVar11;
  ulong uVar12;
  ulong uVar13;
  float fVar14;
  float fVar15;
  float fVar16;
  float fVar17;
  float fVar18;
  float fVar19;
  float fVar20;
  float fVar21;
  float fVar22;
  undefined4 uVar23;
  float fVar24;
  undefined4 uVar25;
  float fVar26;
  float fVar27;
  undefined4 uVar28;
  undefined4 uVar29;
  int iStack_180;
  int iStack_17c;
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
  
  if ((bRam000000000133f3a2 & 1) == 0) {
    native_sub_43273c(&Method_System_Collections_Generic_List_Vector3__get_Count___12dd500);
    native_sub_43273c(&Method_System_Collections_Generic_List_Color__get_Item___12dc6b0);
    native_sub_43273c(&Method_System_Collections_Generic_List_Vector3__get_Item___12dd508);
    native_sub_43273c(&Method_System_Collections_Generic_List_Vector3__set_Item___12dd510);
    native_sub_43273c(&Method_System_Collections_Generic_List_Color__set_Item___12dc6b8);
    native_sub_43273c(&UnityEngine_Object_TypeInfo_12d54e0);
    bRam000000000133f3a2 = 1;
  }
  uStack_c8 = 0;
  uStack_d0 = 0;
  uStack_b8 = 0;
  uStack_c0 = 0;
  uStack_e8 = 0;
  uStack_f0 = 0;
  uStack_d8 = 0;
  uStack_e0 = 0;
  if ((param_4 != 0) && (iVar2 = *(int *)(param_4 + 0x18), iVar2 != 0)) {
    uVar11 = *(undefined8 *)(param_1 + 0x90);
    if (((*(byte *)(_UnityEngine_Object_TypeInfo_12d54e0 + 0x133) >> 2 & 1) != 0) &&
       (*(int *)(_UnityEngine_Object_TypeInfo_12d54e0 + 0xe0) == 0)) {
      native_sub_4327ec();
    }
    uVar8 = native_UnityEngine_Object__op_Equality_8e9a3c(uVar11,0,0);
    if ((uVar8 & 1) == 0) {
      if (*(long *)(param_1 + 0x90) == 0) {
                    /* WARNING: Subroutine does not return */
        native_sub_432810();
      }
      iVar7 = native_UILabel__get_quadsPerCharacter_ae95cc(*(long *)(param_1 + 0x90),0);
      iVar6 = 0;
      if (iVar7 != 0) {
        iVar6 = iVar2 / iVar7;
      }
      iVar1 = iVar6 + 3;
      if (-1 < iVar6) {
        iVar1 = iVar6;
      }
      if (*(long *)(param_1 + 0x90) == 0) {
                    /* WARNING: Subroutine does not return */
        native_sub_432810();
      }
      native_UILabel__get_printedText_aea210(*(long *)(param_1 + 0x90),0);
      iVar1 = iVar1 >> 2;
      if (*(int *)(param_1 + 0x98) != iVar2) {
        *(int *)(param_1 + 0x98) = iVar2;
        native_TweenLetters__SetLetterOrder_6e4f20(param_1,iVar1);
        native_TweenLetters__GetLetterDuration_6e52e0(param_1,iVar1);
      }
      native_UnityEngine_Matrix4x4__get_identity_8e5d8c(&uStack_130,0);
      uStack_c8 = uStack_108;
      uStack_d0 = uStack_110;
      uStack_b8 = uStack_f8;
      uStack_c0 = uStack_100;
      uStack_e8 = uStack_128;
      uStack_f0 = uStack_130;
      uStack_d8 = uStack_118;
      uStack_e0 = uStack_120;
      native_UnityEngine_Vector3__get_zero_776668(0);
      native_UnityEngine_Quaternion__get_identity_7628fc(0);
      native_UnityEngine_Vector3__get_one_776a20(0);
      native_UnityEngine_Vector3__get_zero_776668(0);
      native_UnityEngine_Vector3__get_zero_776668(0);
      native_UnityEngine_Color__get_clear_8d9e68(0);
      if (0 < iVar7) {
        iStack_180 = 0;
        iStack_17c = 0;
        fVar14 = *(float *)(param_1 + 0x74);
        fVar18 = *(float *)(param_1 + 0x34);
        do {
          if (3 < iVar6) {
            uVar8 = 0;
            do {
              lVar9 = *(long *)(param_1 + 0xa0);
              if (lVar9 == 0) {
                    /* WARNING: Subroutine does not return */
                native_sub_432810();
              }
              if (*(uint *)(lVar9 + 0x18) <= uVar8) {
                uVar11 = native_sub_43283c();
                    /* WARNING: Subroutine does not return */
                native_sub_4327dc(uVar11,0);
              }
              uVar3 = *(uint *)(lVar9 + uVar8 * 4 + 0x20);
              lVar9 = (long)(int)uVar3;
              iVar4 = (uVar3 + iStack_180 * iVar1) * 4;
              if (iVar4 < iVar2) {
                lVar10 = *(long *)(param_1 + 0xa8);
                if (lVar10 == 0) {
                    /* WARNING: Subroutine does not return */
                  native_sub_432810();
                }
                if (*(uint *)(lVar10 + 0x18) <= uVar3) {
                  uVar11 = native_sub_43283c();
                    /* WARNING: Subroutine does not return */
                  native_sub_4327dc(uVar11,0);
                }
                lVar10 = lVar10 + lVar9 * 0x30;
                fVar21 = *(float *)(lVar10 + 0x24);
                fVar15 = (float)native_UnityEngine_Mathf__Clamp_8e51ec
                                          (fVar14 * fVar18 - *(float *)(lVar10 + 0x20),0,0);
                lVar10 = *(long *)(param_1 + 0xa8);
                if (lVar10 == 0) {
                    /* WARNING: Subroutine does not return */
                  native_sub_432810();
                }
                if (*(uint *)(lVar10 + 0x18) <= uVar3) {
                  uVar11 = native_sub_43283c();
                    /* WARNING: Subroutine does not return */
                  native_sub_4327dc(uVar11,0);
                }
                if (*(long *)(param_1 + 0x20) == 0) {
                    /* WARNING: Subroutine does not return */
                  native_sub_432810();
                }
                fVar19 = *(float *)(lVar10 + lVar9 * 0x30 + 0x24);
                uVar11 = native_UnityEngine_AnimationCurve__Evaluate_8d5be4
                                   (fVar15 / fVar19,*(long *)(param_1 + 0x20),0);
                fVar15 = (float)native_TweenLetters__GetCenter_6e5490(param_4,iVar4,4);
                lVar10 = *(long *)(param_1 + 0xa8);
                if (lVar10 == 0) {
                    /* WARNING: Subroutine does not return */
                  native_sub_432810();
                }
                if (*(uint *)(lVar10 + 0x18) <= uVar3) {
                  uVar11 = native_sub_43283c();
                    /* WARNING: Subroutine does not return */
                  native_sub_4327dc(uVar11,0);
                }
                lVar10 = lVar10 + lVar9 * 0x30;
                fVar22 = *(float *)(lVar10 + 0x28);
                fVar24 = *(float *)(lVar10 + 0x2c);
                fVar27 = *(float *)(lVar10 + 0x30);
                fVar17 = fVar19;
                fVar20 = fVar21;
                fVar16 = (float)native_UnityEngine_Vector3__get_zero_776668(0);
                lVar10 = *(long *)(param_1 + 0xa8);
                if (lVar10 == 0) {
                    /* WARNING: Subroutine does not return */
                  native_sub_432810();
                }
                if (*(uint *)(lVar10 + 0x18) <= uVar3) {
                  uVar11 = native_sub_43283c();
                    /* WARNING: Subroutine does not return */
                  native_sub_4327dc(uVar11,0);
                }
                lVar10 = lVar10 + lVar9 * 0x30;
                uVar23 = *(undefined4 *)(lVar10 + 0x34);
                uVar25 = *(undefined4 *)(lVar10 + 0x38);
                uVar28 = *(undefined4 *)(lVar10 + 0x3c);
                uVar29 = *(undefined4 *)(lVar10 + 0x40);
                native_UnityEngine_Quaternion__get_identity_7628fc(0);
                fVar26 = (float)uVar11;
                uVar23 = native_UnityEngine_Quaternion__SlerpUnclamped_762398(uVar23,0);
                if (*(long *)(param_1 + 0xa8) == 0) {
                    /* WARNING: Subroutine does not return */
                  native_sub_432810();
                }
                if (*(uint *)(*(long *)(param_1 + 0xa8) + 0x18) <= uVar3) {
                  uVar11 = native_sub_43283c();
                    /* WARNING: Subroutine does not return */
                  native_sub_4327dc(uVar11,0);
                }
                native_UnityEngine_Vector3__get_one_776a20(0);
                if (*(long *)(param_1 + 0xb0) == 0) {
                    /* WARNING: Subroutine does not return */
                  native_sub_432810();
                }
                native_UnityEngine_Mathf__LerpUnclamped_8e5248
                          (*(undefined4 *)(*(long *)(param_1 + 0xb0) + 0xa0),0x3f800000,uVar11,0);
                native_UnityEngine_Matrix4x4__SetTRS_8e57d0
                          (fVar22 + fVar26 * (fVar16 - fVar22),fVar24 + fVar26 * (fVar17 - fVar24),
                           fVar27 + fVar26 * (fVar20 - fVar27),uVar23,uVar25,uVar28,uVar29,
                           &uStack_f0,0);
                if (iVar4 != 0x7ffffffc) {
                  uVar5 = (iStack_17c + uVar3) * 4;
                  uVar13 = (ulong)(int)uVar5;
                  lVar9 = ((-(ulong)((iStack_17c + uVar3 & 0x3fffffff) >> 0x1d) & 0xfffffffe00000000
                           | (ulong)uVar5 << 1) + (long)(int)uVar5) * 4;
                  uVar12 = (uVar13 >> 2) << 6 | 0x2c;
                  do {
                    if (*(uint *)(param_4 + 0x18) <= (uint)uVar13) {
                      native_System_ThrowHelper__ThrowArgumentOutOfRangeException_9fe0f4(0);
                    }
                    lVar10 = *(long *)(param_4 + 0x10) + lVar9;
                    fVar20 = *(float *)(lVar10 + 0x24) - fVar19;
                    fVar16 = *(float *)(lVar10 + 0x28) - fVar21;
                    fVar17 = (float)native_UnityEngine_Matrix4x4__MultiplyPoint3x4_8e5cec
                                              (*(float *)(lVar10 + 0x20) - fVar15,fVar20,fVar16,
                                               &uStack_f0,0);
                    native_System_Collections_Generic_List_Vector3___set_Item_d2ba90
                              (fVar15 + fVar17,fVar19 + fVar20,fVar21 + fVar16,param_4,
                               uVar13 & 0xffffffff,
                               _Method_System_Collections_Generic_List_Vector3__set_Item___12dd510);
                    if (param_6 == 0) {
                    /* WARNING: Subroutine does not return */
                      native_sub_432810();
                    }
                    if (*(uint *)(param_6 + 0x18) <= (uint)uVar13) {
                      native_System_ThrowHelper__ThrowArgumentOutOfRangeException_9fe0f4(0);
                    }
                    lVar10 = *(long *)(param_6 + 0x10) + uVar12;
                    native_System_Collections_Generic_List_Color___set_Item_d06de4
                              (*(undefined4 *)(lVar10 + -0xc),*(undefined4 *)(lVar10 + -8),
                               *(undefined4 *)(lVar10 + -4),param_6,uVar13 & 0xffffffff,
                               _Method_System_Collections_Generic_List_Color__set_Item___12dc6b8);
                    uVar13 = uVar13 + 1;
                    lVar9 = lVar9 + 0xc;
                    uVar12 = uVar12 + 0x10;
                  } while ((long)uVar13 < (long)(iVar4 + 4));
                }
              }
              uVar8 = uVar8 + 1;
            } while ((long)uVar8 < (long)iVar1);
          }
          iStack_180 = iStack_180 + 1;
          iStack_17c = iStack_17c + iVar1;
        } while (iStack_180 < iVar7);
      }
    }
  }
  return;
}



/* TweenLetters$$OnUpdate @ 0x6e5588
 * void TweenLetters__OnUpdate (TweenLetters_o* __this, float factor, bool isFinished, const MethodInfo* method); */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* TweenLetters$$OnUpdate
   void TweenLetters__OnUpdate (TweenLetters_o* __this, float factor, bool isFinished, const
   MethodInfo* method); */

void native_TweenLetters__OnUpdate_6e5588(long param_1,ulong param_2)

{
  bool bVar1;
  ulong uVar2;
  long *plVar3;
  long lVar4;
  undefined8 uVar5;
  
  if ((bRam000000000133f3a3 & 1) == 0) {
    native_sub_43273c(&UnityEngine_Object_TypeInfo_12d54e0);
    bRam000000000133f3a3 = 1;
  }
  uVar5 = *(undefined8 *)(param_1 + 0x90);
  if (((*(byte *)(_UnityEngine_Object_TypeInfo_12d54e0 + 0x133) >> 2 & 1) != 0) &&
     (*(int *)(_UnityEngine_Object_TypeInfo_12d54e0 + 0xe0) == 0)) {
    native_sub_4327ec();
  }
  uVar2 = native_UnityEngine_Object__op_Implicit_8e1b98(uVar5,0);
  if ((uVar2 & 1) != 0) {
    if ((((param_2 & 1) == 0) || (lVar4 = *(long *)(param_1 + 0xb0), lVar4 == 0)) ||
       (lVar4 != *(long *)(param_1 + 0x88))) {
      bVar1 = true;
    }
    else {
      bVar1 = *(float *)(lVar4 + 0xa0) != 0.0;
    }
    if (*(long *)(param_1 + 0x90) != 0) {
      native_UnityEngine_Behaviour__set_enabled_8d7b0c(*(long *)(param_1 + 0x90),bVar1,0);
      plVar3 = *(long **)(param_1 + 0x90);
      if (plVar3 != (long *)0x0) {
                    /* WARNING: Could not recover jumptable at 0x006e5640. Too many branches */
                    /* WARNING: Treating indirect jump as call */
        (**(code **)(*plVar3 + 0x378))(plVar3,*(undefined8 *)(*plVar3 + 0x380));
        return;
      }
    }
                    /* WARNING: Subroutine does not return */
    native_sub_432810();
  }
  return;
}



/* TweenLetters$$SetLetterOrder @ 0x6e4f20
 * void TweenLetters__SetLetterOrder (TweenLetters_o* __this, int32_t letterCount, const MethodInfo* method); */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* TweenLetters$$SetLetterOrder
   void TweenLetters__SetLetterOrder (TweenLetters_o* __this, int32_t letterCount, const MethodInfo*
   method); */

void native_TweenLetters__SetLetterOrder_6e4f20(long param_1,uint param_2)

{
  ulong *puVar1;
  uint uVar2;
  char cVar3;
  bool bVar4;
  long lVar5;
  undefined8 uVar6;
  long *plVar7;
  long lVar8;
  long lVar9;
  undefined4 *puVar10;
  long *plVar11;
  undefined8 *puVar12;
  uint uVar13;
  uint uVar14;
  undefined4 uVar15;
  undefined4 uVar16;
  undefined4 uVar17;
  undefined4 uVar18;
  undefined4 uVar19;
  undefined4 uVar20;
  undefined4 uVar21;
  undefined4 uVar22;
  undefined4 uVar23;
  undefined8 in_d3;
  
  if ((bRam000000000133f3a4 & 1) == 0) {
    native_sub_43273c(&int___TypeInfo_12d3258);
    native_sub_43273c(&TweenLetters_LetterProperties___TypeInfo_12d35a8);
    native_sub_43273c(&System_Random_TypeInfo_12d5868);
    bRam000000000133f3a4 = 1;
  }
  if (param_2 == 0) {
    *(undefined8 *)(param_1 + 0xa8) = 0;
    native_sub_4326e0((undefined8 *)(param_1 + 0xa8),0);
    puVar12 = (undefined8 *)(param_1 + 0xa0);
    *puVar12 = 0;
    if (iRam0000000001345318 != 0) {
      puVar1 = (ulong *)(((ulong)puVar12 >> 0x12 & 0x7fff) * 8 + 0x138ecd8);
      do {
        cVar3 = '\x01';
        bVar4 = (bool)ExclusiveMonitorPass(puVar1,0x10);
        if (bVar4) {
          *puVar1 = *puVar1 | 1L << ((ulong)puVar12 >> 0xc & 0x3f);
          cVar3 = ExclusiveMonitorsStatus();
        }
      } while (cVar3 != '\0');
    }
    return;
  }
  lVar5 = native_sub_432750(_int___TypeInfo_12d3258,param_2);
  plVar11 = (long *)(param_1 + 0xa0);
  *plVar11 = lVar5;
  native_sub_4326e0(plVar11,lVar5);
  uVar6 = native_sub_432750(_TweenLetters_LetterProperties___TypeInfo_12d35a8,param_2);
  *(undefined8 *)(param_1 + 0xa8) = uVar6;
  native_sub_4326e0((long *)(param_1 + 0xa8),uVar6);
  if (0 < (int)param_2) {
    lVar5 = 8;
    uVar13 = param_2;
    do {
      uVar13 = uVar13 - 1;
      if (*(long *)(param_1 + 0xb0) == 0) goto LAB_006e52d0;
      lVar8 = *(long *)(param_1 + 0xa0);
      uVar14 = (int)lVar5 - 8;
      uVar2 = uVar13;
      if (*(int *)(*(long *)(param_1 + 0xb0) + 0x14) != 1) {
        uVar2 = uVar14;
      }
      if (lVar8 == 0) goto LAB_006e52d0;
      if (*(uint *)(lVar8 + 0x18) <= uVar14) goto LAB_006e52d4;
      *(uint *)(lVar8 + lVar5 * 4) = uVar2;
      lVar8 = *(long *)(param_1 + 0xb0);
      if (lVar8 == 0) goto LAB_006e52d0;
      uVar15 = native_UnityEngine_Random__Range_76305c
                         (*(undefined4 *)(lVar8 + 0x58),*(undefined4 *)(lVar8 + 100),0);
      lVar8 = *(long *)(param_1 + 0xb0);
      if (lVar8 == 0) goto LAB_006e52d0;
      uVar16 = native_UnityEngine_Random__Range_76305c
                         (*(undefined4 *)(lVar8 + 0x5c),*(undefined4 *)(lVar8 + 0x68),0);
      lVar8 = *(long *)(param_1 + 0xb0);
      if (lVar8 == 0) goto LAB_006e52d0;
      uVar17 = native_UnityEngine_Random__Range_76305c
                         (*(undefined4 *)(lVar8 + 0x60),*(undefined4 *)(lVar8 + 0x6c),0);
      lVar8 = *(long *)(param_1 + 0xb0);
      if (lVar8 == 0) goto LAB_006e52d0;
      uVar6 = native_UnityEngine_Random__Range_76305c
                        (*(undefined4 *)(lVar8 + 0x70),*(undefined4 *)(lVar8 + 0x7c),0);
      lVar8 = *(long *)(param_1 + 0xb0);
      if (lVar8 == 0) goto LAB_006e52d0;
      uVar18 = native_UnityEngine_Random__Range_76305c
                         (*(undefined4 *)(lVar8 + 0x74),*(undefined4 *)(lVar8 + 0x80),0);
      lVar8 = *(long *)(param_1 + 0xb0);
      if (lVar8 == 0) goto LAB_006e52d0;
      uVar19 = native_UnityEngine_Random__Range_76305c
                         (*(undefined4 *)(lVar8 + 0x78),*(undefined4 *)(lVar8 + 0x84),0);
      uVar20 = native_UnityEngine_Quaternion__Euler_762bdc(uVar6,0);
      lVar8 = *(long *)(param_1 + 0xb0);
      if (lVar8 == 0) goto LAB_006e52d0;
      uVar6 = in_d3;
      uVar21 = native_UnityEngine_Random__Range_76305c
                         (*(undefined4 *)(lVar8 + 0x88),*(undefined4 *)(lVar8 + 0x94),0);
      lVar8 = *(long *)(param_1 + 0xb0);
      if (lVar8 == 0) goto LAB_006e52d0;
      uVar22 = native_UnityEngine_Random__Range_76305c
                         (*(undefined4 *)(lVar8 + 0x8c),*(undefined4 *)(lVar8 + 0x98),0);
      lVar8 = *(long *)(param_1 + 0xb0);
      if (lVar8 == 0) goto LAB_006e52d0;
      uVar23 = native_UnityEngine_Random__Range_76305c
                         (*(undefined4 *)(lVar8 + 0x90),*(undefined4 *)(lVar8 + 0x9c),0);
      lVar8 = *plVar11;
      if (lVar8 == 0) goto LAB_006e52d0;
      if (*(uint *)(lVar8 + 0x18) <= uVar14) goto LAB_006e52d4;
      lVar9 = *(long *)(param_1 + 0xa8);
      if (lVar9 == 0) goto LAB_006e52d0;
      uVar2 = *(uint *)(lVar8 + lVar5 * 4);
      if (*(uint *)(lVar9 + 0x18) <= uVar2) goto LAB_006e52d4;
      lVar9 = lVar9 + (long)(int)uVar2 * 0x30;
      *(undefined4 *)(lVar9 + 0x28) = uVar15;
      *(undefined4 *)(lVar9 + 0x2c) = uVar16;
      lVar5 = lVar5 + 1;
      *(undefined8 *)(lVar9 + 0x20) = 0;
      *(undefined4 *)(lVar9 + 0x38) = uVar18;
      *(undefined4 *)(lVar9 + 0x3c) = uVar19;
      *(undefined4 *)(lVar9 + 0x30) = uVar17;
      *(undefined4 *)(lVar9 + 0x34) = uVar20;
      *(int *)(lVar9 + 0x40) = (int)in_d3;
      *(undefined4 *)(lVar9 + 0x44) = uVar21;
      *(undefined4 *)(lVar9 + 0x48) = uVar22;
      *(undefined4 *)(lVar9 + 0x4c) = uVar23;
      in_d3 = uVar6;
    } while ((int)lVar5 + -8 < (int)param_2);
  }
  if (*(long *)(param_1 + 0xb0) != 0) {
    if (*(int *)(*(long *)(param_1 + 0xb0) + 0x14) == 2) {
      plVar7 = (long *)native_sub_432808(_System_Random_TypeInfo_12d5868);
      native_System_Random___ctor_bffb50(plVar7,0);
      if (1 < (int)param_2) {
        if (plVar7 == (long *)0x0) goto LAB_006e52d0;
        lVar5 = (long)(int)param_2 + 7;
        do {
          uVar13 = (**(code **)(*plVar7 + 0x198))(plVar7,param_2,*(undefined8 *)(*plVar7 + 0x1a0));
          lVar8 = *plVar11;
          if (lVar8 == 0) goto LAB_006e52d0;
          if ((uint)*(ulong *)(lVar8 + 0x18) <= uVar13) {
LAB_006e52d4:
            uVar6 = native_sub_43283c();
                    /* WARNING: Subroutine does not return */
            native_sub_4327dc(uVar6,0);
          }
          puVar10 = (undefined4 *)(lVar8 + (long)(int)uVar13 * 4 + 0x20);
          uVar15 = *puVar10;
          if ((*(ulong *)(lVar8 + 0x18) & 0xffffffff) <= lVar5 - 8U) goto LAB_006e52d4;
          *puVar10 = *(undefined4 *)(lVar8 + lVar5 * 4);
          lVar8 = *plVar11;
          if (lVar8 == 0) goto LAB_006e52d0;
          if ((ulong)*(uint *)(lVar8 + 0x18) <= lVar5 - 8U) goto LAB_006e52d4;
          *(undefined4 *)(lVar8 + lVar5 * 4) = uVar15;
          lVar8 = lVar5 + -7;
          lVar5 = lVar5 + -1;
          param_2 = param_2 - 1;
        } while (2 < lVar8);
      }
    }
    return;
  }
LAB_006e52d0:
                    /* WARNING: Subroutine does not return */
  native_sub_432810();
}



/* TweenLetters$$GetLetterDuration @ 0x6e52e0
 * void TweenLetters__GetLetterDuration (TweenLetters_o* __this, int32_t letterCount, const MethodInfo* method); */

/* TweenLetters$$GetLetterDuration
   void TweenLetters__GetLetterDuration (TweenLetters_o* __this, int32_t letterCount, const
   MethodInfo* method); */

void native_TweenLetters__GetLetterDuration_6e52e0(long param_1,int param_2)

{
  uint uVar1;
  undefined8 uVar2;
  uint uVar3;
  long lVar4;
  ulong uVar5;
  long lVar6;
  undefined4 uVar7;
  float fVar8;
  float fVar9;
  float fVar10;
  float fVar11;
  float fVar12;
  
  lVar4 = *(long *)(param_1 + 0xb0);
  if (lVar4 != 0) {
    if (*(char *)(lVar4 + 0x1c) == '\0') {
      lVar6 = *(long *)(param_1 + 0xa8);
      if (lVar6 != 0) {
        uVar5 = (ulong)*(uint *)(lVar6 + 0x18);
        if (0 < (int)*(uint *)(lVar6 + 0x18)) {
          fVar10 = *(float *)(param_1 + 0x34);
          fVar11 = *(float *)(lVar4 + 0x18);
          fVar12 = fVar10 / (float)param_2;
          fVar9 = 1.0 - fVar11;
          uVar3 = 0;
          fVar8 = 0.0;
          do {
            lVar4 = *(long *)(param_1 + 0xa0);
            if (lVar4 == 0) goto LAB_006e5480;
            if (*(uint *)(lVar4 + 0x18) <= uVar3) goto LAB_006e5484;
            uVar1 = *(uint *)(lVar4 + (long)(int)uVar3 * 4 + 0x20);
            lVar4 = (long)(int)uVar1;
            if ((uint)uVar5 <= uVar1) goto LAB_006e5484;
            *(float *)(lVar6 + lVar4 * 0x30 + 0x20) = fVar8;
            lVar6 = *(long *)(param_1 + 0xa8);
            if (lVar6 == 0) goto LAB_006e5480;
            if (*(uint *)(lVar6 + 0x18) <= uVar1) goto LAB_006e5484;
            *(float *)(lVar6 + lVar4 * 0x30 + 0x24) =
                 (fVar10 * fVar12) / (fVar12 * fVar11 + fVar12 * (float)param_2 * fVar9);
            lVar6 = *(long *)(param_1 + 0xa8);
            if (lVar6 == 0) goto LAB_006e5480;
            uVar5 = *(ulong *)(lVar6 + 0x18);
            if ((uint)uVar5 <= uVar1) goto LAB_006e5484;
            uVar3 = uVar3 + 1;
            fVar8 = fVar8 + fVar9 * *(float *)(lVar6 + lVar4 * 0x30 + 0x24);
          } while ((int)uVar3 < (int)(uint)uVar5);
        }
        return;
      }
    }
    else {
      lVar4 = *(long *)(param_1 + 0xa8);
      if (lVar4 != 0) {
        lVar6 = 0;
        uVar5 = 0;
        do {
          if ((long)*(int *)(lVar4 + 0x18) <= (long)uVar5) {
            return;
          }
          if (*(long *)(param_1 + 0xb0) == 0) break;
          uVar7 = native_UnityEngine_Random__Range_76305c
                            (0,*(float *)(*(long *)(param_1 + 0xb0) + 0x20) *
                               *(float *)(param_1 + 0x34),0);
          if (*(uint *)(lVar4 + 0x18) <= uVar5) {
LAB_006e5484:
            uVar2 = native_sub_43283c();
                    /* WARNING: Subroutine does not return */
            native_sub_4327dc(uVar2,0);
          }
          *(undefined4 *)(lVar4 + lVar6 + 0x20) = uVar7;
          if (*(long *)(param_1 + 0xb0) == 0) break;
          fVar8 = (float)native_UnityEngine_Random__Range_76305c
                                   (*(float *)(*(long *)(param_1 + 0xb0) + 0x24) *
                                    *(float *)(param_1 + 0x34),0);
          lVar4 = *(long *)(param_1 + 0xa8);
          if (lVar4 == 0) break;
          if (*(uint *)(lVar4 + 0x18) <= uVar5) goto LAB_006e5484;
          lVar4 = lVar4 + lVar6;
          lVar6 = lVar6 + 0x30;
          uVar5 = uVar5 + 1;
          *(float *)(lVar4 + 0x24) = fVar8 - *(float *)(lVar4 + 0x20);
          lVar4 = *(long *)(param_1 + 0xa8);
        } while (lVar4 != 0);
      }
    }
  }
LAB_006e5480:
                    /* WARNING: Subroutine does not return */
  native_sub_432810();
}



/* TweenLetters$$ScaleRange @ 0x6e5668
 * float TweenLetters__ScaleRange (TweenLetters_o* __this, float value, float baseMax, float limitMax, const MethodInfo* method); */

/* TweenLetters$$ScaleRange
   float TweenLetters__ScaleRange (TweenLetters_o* __this, float value, float baseMax, float
   limitMax, const MethodInfo* method); */

float native_TweenLetters__ScaleRange_6e5668(float param_1,float param_2,float param_3)

{
  return (param_1 * param_3) / param_2;
}



/* TweenLetters$$GetCenter @ 0x6e5490
 * UnityEngine_Vector3_o TweenLetters__GetCenter (System_Collections_Generic_List_Vector3__o* verts, int32_t firstVert, int32_t length, const MethodInfo* method); */

/* TweenLetters$$GetCenter
   UnityEngine_Vector3_o TweenLetters__GetCenter (System_Collections_Generic_List_Vector3__o* verts,
   int32_t firstVert, int32_t length, const MethodInfo* method); */

void native_TweenLetters__GetCenter_6e5490(long param_1,uint param_2,int param_3)

{
  uint uVar1;
  int iVar2;
  
  if ((bRam000000000133f3a5 & 1) == 0) {
    native_sub_43273c(&Method_System_Collections_Generic_List_Vector3__get_Item___12dd508);
    bRam000000000133f3a5 = 1;
  }
  if (param_1 != 0) {
    if (*(uint *)(param_1 + 0x18) <= param_2) {
      native_System_ThrowHelper__ThrowArgumentOutOfRangeException_9fe0f4(0);
    }
    uVar1 = param_2 + 1;
    if ((int)uVar1 < (int)(param_3 + param_2)) {
      iVar2 = param_3 + -1;
      do {
        if (*(uint *)(param_1 + 0x18) <= uVar1) {
          native_System_ThrowHelper__ThrowArgumentOutOfRangeException_9fe0f4(0);
        }
        uVar1 = uVar1 + 1;
        iVar2 = iVar2 + -1;
      } while (iVar2 != 0);
    }
    NEON_scvtf(CONCAT44(param_3,param_3),4);
    return;
  }
                    /* WARNING: Subroutine does not return */
  native_sub_432810();
}



/* TweenLetters$$.ctor @ 0x6e5674
 * void TweenLetters___ctor (TweenLetters_o* __this, const MethodInfo* method); */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* TweenLetters$$.ctor
   void TweenLetters___ctor (TweenLetters_o* __this, const MethodInfo* method); */

void native_TweenLetters___ctor_6e5674(long param_1)

{
  undefined8 uVar1;
  long lVar2;
  undefined8 uStack_90;
  undefined4 uStack_88;
  undefined4 uStack_84;
  undefined4 uStack_80;
  undefined4 uStack_7c;
  undefined4 uStack_78;
  undefined8 uStack_70;
  undefined4 uStack_68;
  undefined4 uStack_64;
  undefined4 uStack_60;
  undefined8 uStack_5c;
  undefined8 uStack_50;
  undefined4 uStack_48;
  undefined4 uStack_44;
  undefined4 uStack_40;
  undefined4 uStack_3c;
  undefined4 uStack_38;
  
  if ((bRam000000000133f3a6 & 1) == 0) {
    native_sub_43273c(&TweenLetters_AnimationProperties_TypeInfo_12d79a0);
    bRam000000000133f3a6 = 1;
  }
  uVar1 = native_sub_432808(_TweenLetters_AnimationProperties_TypeInfo_12d79a0);
  native_TweenLetters_AnimationProperties___ctor_54f3c0(uVar1,0);
  *(undefined8 *)(param_1 + 0x80) = uVar1;
  native_sub_4326e0((undefined8 *)(param_1 + 0x80),uVar1);
  uVar1 = native_sub_432808(_TweenLetters_AnimationProperties_TypeInfo_12d79a0);
  native_TweenLetters_AnimationProperties___ctor_54f3c0(uVar1,0);
  *(undefined8 *)(param_1 + 0x88) = uVar1;
  native_sub_4326e0(param_1 + 0x88,uVar1);
  *(undefined4 *)(param_1 + 0x98) = 0xffffffff;
  if ((bRam000000000134144a & 1) == 0) {
    native_sub_43273c(&UnityEngine_AnimationCurve_TypeInfo_12d3768,0);
    native_sub_43273c(&UnityEngine_Keyframe___TypeInfo_12d3298);
    native_sub_43273c(&Method_System_Collections_Generic_List_EventDelegate___ctor___12dc738);
    native_sub_43273c(&System_Collections_Generic_List_EventDelegate__TypeInfo_12d2a08);
    bRam000000000134144a = 1;
  }
  lVar2 = native_sub_432750(_UnityEngine_Keyframe___TypeInfo_12d3298,2);
  uStack_50 = 0;
  uStack_48 = 0;
  uStack_44 = 0;
  uStack_38 = 0;
  uStack_40 = 0;
  uStack_3c = 0;
  native_UnityEngine_Keyframe___ctor_8dfc58(0,0,0,0x3f800000,&uStack_50,0);
  if (lVar2 != 0) {
    uStack_5c = CONCAT44(uStack_38,uStack_3c);
    uStack_60 = uStack_40;
    uStack_68 = uStack_48;
    uStack_64 = uStack_44;
    uStack_70 = uStack_50;
    if (*(int *)(lVar2 + 0x18) != 0) {
      *(undefined8 *)(lVar2 + 0x34) = uStack_5c;
      *(ulong *)(lVar2 + 0x2c) = CONCAT44(uStack_40,uStack_44);
      *(ulong *)(lVar2 + 0x28) = CONCAT44(uStack_44,uStack_48);
      *(undefined8 *)(lVar2 + 0x20) = uStack_50;
      uStack_90 = 0;
      uStack_88 = 0;
      uStack_84 = 0;
      uStack_78 = 0;
      uStack_80 = 0;
      uStack_7c = 0;
      native_UnityEngine_Keyframe___ctor_8dfc58(0x3f800000,0x3f800000,0x3f800000,0,&uStack_90,0);
      if (1 < *(uint *)(lVar2 + 0x18)) {
        *(ulong *)(lVar2 + 0x50) = CONCAT44(uStack_78,uStack_7c);
        *(ulong *)(lVar2 + 0x48) = CONCAT44(uStack_80,uStack_84);
        *(ulong *)(lVar2 + 0x44) = CONCAT44(uStack_84,uStack_88);
        *(undefined8 *)(lVar2 + 0x3c) = uStack_90;
        uVar1 = native_sub_432808(_UnityEngine_AnimationCurve_TypeInfo_12d3768);
        native_UnityEngine_AnimationCurve___ctor_8d5df4(uVar1,lVar2,0);
        *(undefined8 *)(param_1 + 0x20) = uVar1;
        native_sub_4326e0((undefined8 *)(param_1 + 0x20),uVar1);
        *(undefined1 *)(param_1 + 0x28) = 1;
        *(undefined8 *)(param_1 + 0x30) = 0x3f80000000000002;
        uVar1 = native_sub_432808(_System_Collections_Generic_List_EventDelegate__TypeInfo_12d2a08);
        native_System_Collections_Generic_List_XmlEventCache_XmlEvent______ctor_d3ff44
                  (uVar1,_Method_System_Collections_Generic_List_EventDelegate___ctor___12dc738);
        *(undefined8 *)(param_1 + 0x48) = uVar1;
        native_sub_4326e0(param_1 + 0x48,uVar1);
        *(undefined4 *)(param_1 + 0x60) = 0x3f800000;
        *(undefined4 *)(param_1 + 0x70) = 0x447a0000;
        native_UnityEngine_MonoBehaviour___ctor_8e971c(param_1,0);
        return;
      }
    }
    uVar1 = native_sub_43283c();
                    /* WARNING: Subroutine does not return */
    native_sub_4327dc(uVar1,0);
  }
                    /* WARNING: Subroutine does not return */
  native_sub_432810();
}


