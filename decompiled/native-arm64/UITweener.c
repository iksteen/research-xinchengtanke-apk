/* ARM64 IL2CPP native pseudocode from Ghidra.
 * Recovered implementation, not original C# source.
 * Function boundaries follow the IL2CPP method address table. */


/* UITweener$$get_amountPerDelta @ 0x9484a8
 * float UITweener__get_amountPerDelta (UITweener_o* __this, const MethodInfo* method); */

/* UITweener$$get_amountPerDelta
   float UITweener__get_amountPerDelta (UITweener_o* __this, const MethodInfo* method); */

float native_UITweener__get_amountPerDelta_9484a8(long param_1)

{
  float fVar1;
  float fVar2;
  
  fVar2 = *(float *)(param_1 + 0x34);
  if (fVar2 == 0.0) {
    fVar1 = 1000.0;
  }
  else if (*(float *)(param_1 + 0x6c) == fVar2) {
    fVar1 = *(float *)(param_1 + 0x70);
  }
  else {
    *(float *)(param_1 + 0x6c) = fVar2;
    fVar1 = (float)native_UnityEngine_Mathf__Sign_8e51d8(*(undefined4 *)(param_1 + 0x70),0);
    fVar1 = ABS(1.0 / fVar2) * fVar1;
    *(float *)(param_1 + 0x70) = fVar1;
  }
  return fVar1;
}



/* UITweener$$get_tweenFactor @ 0x94851c
 * float UITweener__get_tweenFactor (UITweener_o* __this, const MethodInfo* method); */

/* UITweener$$get_tweenFactor
   float UITweener__get_tweenFactor (UITweener_o* __this, const MethodInfo* method); */

undefined4 native_UITweener__get_tweenFactor_94851c(long param_1)

{
  return *(undefined4 *)(param_1 + 0x74);
}



/* UITweener$$set_tweenFactor @ 0x946b90
 * void UITweener__set_tweenFactor (UITweener_o* __this, float value, const MethodInfo* method); */

/* UITweener$$set_tweenFactor
   void UITweener__set_tweenFactor (UITweener_o* __this, float value, const MethodInfo* method); */

void native_UITweener__set_tweenFactor_946b90(long param_1)

{
  undefined4 uVar1;
  
  uVar1 = native_UnityEngine_Mathf__Clamp01_8d9d9c(0);
  *(undefined4 *)(param_1 + 0x74) = uVar1;
  return;
}



/* UITweener$$get_direction @ 0x948524
 * int32_t UITweener__get_direction (UITweener_o* __this, const MethodInfo* method); */

/* UITweener$$get_direction
   int32_t UITweener__get_direction (UITweener_o* __this, const MethodInfo* method); */

undefined4 native_UITweener__get_direction_948524(void)

{
  undefined4 uVar1;
  float fVar2;
  
  fVar2 = (float)native_UITweener__get_amountPerDelta_9484a8();
  uVar1 = 0xffffffff;
  if (0.0 <= fVar2) {
    uVar1 = 1;
  }
  return uVar1;
}



/* UITweener$$Reset @ 0x948544
 * void UITweener__Reset (UITweener_o* __this, const MethodInfo* method); */

/* UITweener$$Reset
   void UITweener__Reset (UITweener_o* __this, const MethodInfo* method); */

void native_UITweener__Reset_948544(long *param_1)

{
  if (*(char *)((long)param_1 + 100) != '\0') {
    return;
  }
  (**(code **)(*param_1 + 0x1b8))(param_1,*(undefined8 *)(*param_1 + 0x1c0));
                    /* WARNING: Could not recover jumptable at 0x00948580. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(*param_1 + 0x1c8))(param_1,*(undefined8 *)(*param_1 + 0x1d0));
  return;
}



/* UITweener$$Start @ 0x948584
 * void UITweener__Start (UITweener_o* __this, const MethodInfo* method); */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* UITweener$$Start
   void UITweener__Start (UITweener_o* __this, const MethodInfo* method); */

void native_UITweener__Start_948584(long *param_1)

{
  ulong *puVar1;
  int iVar2;
  char cVar3;
  bool bVar4;
  long *plVar5;
  long lVar6;
  undefined8 uVar7;
  long lVar8;
  long *plVar9;
  long lVar10;
  float fVar11;
  float fVar12;
  float fVar13;
  undefined4 uVar14;
  ulong uVar15;
  
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
    fVar11 = (float)native_UnityEngine_Time__get_deltaTime_77082c(0);
  }
  else {
    fVar11 = (float)native_UnityEngine_Time__get_unscaledDeltaTime_770894(0);
  }
  if (((char)param_1[5] == '\0') || ((char)param_1[8] != '\0')) {
    fVar12 = (float)native_UnityEngine_Time__get_time_7707f8(0);
  }
  else {
    fVar12 = (float)native_UnityEngine_Time__get_unscaledTime_770860(0);
  }
  if (*(char *)((long)param_1 + 100) == '\0') {
    *(undefined1 *)((long)param_1 + 100) = 1;
    *(float *)(param_1 + 0xd) = fVar12;
    if ((*(float *)(param_1 + 0xe) <= 0.0) || ((*(uint *)(param_1 + 6) | 2) != 2)) {
      fVar11 = 0.0;
      fVar13 = fVar12;
      if ((0.0 <= *(float *)(param_1 + 0xe)) || (1 < (int)param_1[6] - 1U)) goto LAB_009486d4;
      fVar13 = *(float *)((long)param_1 + 0x2c);
    }
    else {
      fVar13 = *(float *)((long)param_1 + 0x2c);
    }
    fVar11 = 0.0;
    *(float *)(param_1 + 0xd) = fVar12 + fVar13;
    fVar13 = fVar12 + fVar13;
  }
  else {
    fVar13 = *(float *)(param_1 + 0xd);
  }
LAB_009486d4:
  if (fVar12 < fVar13) {
    return;
  }
  fVar12 = *(float *)((long)param_1 + 0x74);
  if (*(float *)((long)param_1 + 0x34) == 0.0) {
    fVar11 = 1.0;
  }
  else {
    fVar13 = (float)native_UITweener__get_amountPerDelta_9484a8(param_1);
    fVar11 = fVar11 * fVar13 * *(float *)(param_1 + 0xc);
  }
  iVar2 = *(int *)((long)param_1 + 0x1c);
  fVar12 = fVar12 + fVar11;
  *(float *)((long)param_1 + 0x74) = fVar12;
  if (iVar2 == 0) {
    if (((*(float *)((long)param_1 + 0x34) == 0.0) || (1.0 < fVar12)) || (fVar12 < 0.0)) {
      uVar14 = native_UnityEngine_Mathf__Clamp01_8d9d9c(0);
      *(undefined4 *)((long)param_1 + 0x74) = uVar14;
      native_UITweener__Sample_948a44(param_1,1);
      native_UnityEngine_Behaviour__set_enabled_8d7b0c(param_1,0,0);
      uVar7 = **(undefined8 **)(_UITweener_TypeInfo_12d64f0 + 0xb8);
      if (((*(byte *)(_UnityEngine_Object_TypeInfo_12d54e0 + 0x133) >> 2 & 1) != 0) &&
         (*(int *)(_UnityEngine_Object_TypeInfo_12d54e0 + 0xe0) == 0)) {
        native_sub_4327ec();
      }
      uVar15 = native_UnityEngine_Object__op_Inequality_8d76fc(uVar7,param_1,0);
      if ((uVar15 & 1) == 0) {
        return;
      }
      plVar5 = *(long **)(_UITweener_TypeInfo_12d64f0 + 0xb8);
      lVar8 = *plVar5;
      *plVar5 = (long)param_1;
      native_sub_4326e0(plVar5,param_1);
      plVar5 = param_1 + 9;
      if (*plVar5 != 0) {
        plVar9 = param_1 + 0xf;
        *plVar9 = *plVar5;
        native_sub_4326e0(plVar9);
        lVar6 = native_sub_432808(_System_Collections_Generic_List_EventDelegate__TypeInfo_12d2a08);
        native_System_Collections_Generic_List_XmlEventCache_XmlEvent______ctor_d3ff44
                  (lVar6,_Method_System_Collections_Generic_List_EventDelegate___ctor___12dc738);
        param_1[9] = lVar6;
        native_sub_4326e0(plVar5,lVar6);
        lVar6 = *plVar9;
        if (((*(byte *)(_EventDelegate_TypeInfo_12d4590 + 0x133) >> 2 & 1) != 0) &&
           (*(int *)(_EventDelegate_TypeInfo_12d4590 + 0xe0) == 0)) {
          native_sub_4327ec();
        }
        native_EventDelegate__Execute_deecbc(lVar6,0);
        lVar6 = *plVar9;
        if (lVar6 != 0) {
          uVar15 = 0;
          do {
            if ((long)(int)*(uint *)(lVar6 + 0x18) <= (long)uVar15) {
              *plVar9 = 0;
              native_sub_4326e0(plVar9,0);
              goto LAB_00948998;
            }
            if (*(uint *)(lVar6 + 0x18) <= uVar15) {
              native_System_ThrowHelper__ThrowArgumentOutOfRangeException_9fe0f4(0);
            }
            lVar6 = *(long *)(*(long *)(lVar6 + 0x10) + uVar15 * 8 + 0x20);
            if ((lVar6 != 0) && (*(char *)(lVar6 + 0x28) == '\0')) {
              lVar10 = *plVar5;
              if (((*(byte *)(_EventDelegate_TypeInfo_12d4590 + 0x133) >> 2 & 1) != 0) &&
                 (*(int *)(_EventDelegate_TypeInfo_12d4590 + 0xe0) == 0)) {
                native_sub_4327ec();
              }
              native_EventDelegate__Add_def388(lVar10,lVar6,0,0);
            }
            lVar6 = *plVar9;
            uVar15 = uVar15 + 1;
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
      uVar15 = native_UnityEngine_Object__op_Inequality_8d76fc(lVar6,0,0);
      if (((uVar15 & 1) != 0) &&
         (uVar15 = native_System_String__IsNullOrEmpty_b09430(param_1[0xb],0), (uVar15 & 1) == 0)) {
        if (param_1[10] == 0) goto LAB_00948900;
        native_UnityEngine_GameObject__SendMessage_8de4c0(param_1[10],param_1[0xb],param_1,1,0);
      }
      plVar5 = *(long **)(_UITweener_TypeInfo_12d64f0 + 0xb8);
      *plVar5 = lVar8;
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
    if (fVar12 <= 1.0) {
      if (0.0 <= fVar12) goto LAB_00948948;
      fVar11 = *(float *)(param_1 + 0xe);
      *(float *)((long)param_1 + 0x74) = -fVar12 - (float)(int)-fVar12;
    }
    else {
      fVar11 = *(float *)(param_1 + 0xe);
      *(float *)((long)param_1 + 0x74) = ((float)(int)fVar12 - fVar12) + 1.0;
    }
    *(float *)(param_1 + 0xe) = -fVar11;
  }
  else if ((iVar2 == 1) && (1.0 < fVar12)) {
    *(float *)((long)param_1 + 0x74) = fVar12 - (float)(int)fVar12;
  }
LAB_00948948:
  uVar15 = native_UnityEngine_Mathf__Clamp01_8d9d9c(0);
  fVar11 = (float)uVar15;
  switch((int)param_1[3]) {
  case 1:
    fVar11 = (float)func_0x002c9f10((1.0 - fVar11) * 1.5707964);
    fVar11 = 1.0 - fVar11;
    if ((char)param_1[7] != '\0') {
      fVar11 = fVar11 * fVar11;
    }
    uVar15 = (ulong)(uint)fVar11;
    break;
  case 2:
    uVar15 = func_0x002c9f10(fVar11 * 1.5707964);
    if ((char)param_1[7] != '\0') {
      fVar11 = 1.0 - (float)uVar15;
      uVar15 = (ulong)(uint)(1.0 - fVar11 * fVar11);
    }
    break;
  case 3:
    fVar12 = (float)func_0x002c9f10(fVar11 * 6.2831855);
    fVar11 = fVar11 - fVar12 / 6.2831855;
    uVar15 = (ulong)(uint)fVar11;
    if ((char)param_1[7] != '\0') {
      fVar12 = fVar11 + fVar11 + -1.0;
      fVar11 = (float)native_UnityEngine_Mathf__Sign_8e51d8(fVar12,0);
      fVar12 = 1.0 - ABS(fVar12);
      uVar15 = (ulong)(uint)((1.0 - fVar12 * fVar12) * fVar11 * 0.5 + 0.5);
    }
    break;
  case 4:
    uVar15 = native_UITweener__BounceLogic_948e84(uVar15);
    break;
  case 5:
    fVar11 = (float)native_UITweener__BounceLogic_948e84(1.0 - fVar11);
    uVar15 = (ulong)(uint)(1.0 - fVar11);
  }
  if (param_1[4] != 0) {
    uVar15 = native_UnityEngine_AnimationCurve__Evaluate_8d5be4(uVar15,param_1[4],0);
  }
                    /* WARNING: Could not recover jumptable at 0x00948ba4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(*param_1 + 0x1a8))(uVar15,param_1,0,*(undefined8 *)(*param_1 + 0x1b0));
  return;
}



/* UITweener$$Update @ 0x948a24
 * void UITweener__Update (UITweener_o* __this, const MethodInfo* method); */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* UITweener$$Update
   void UITweener__Update (UITweener_o* __this, const MethodInfo* method); */

void native_UITweener__Update_948a24(long *param_1)

{
  ulong *puVar1;
  int iVar2;
  char cVar3;
  bool bVar4;
  long *plVar5;
  long lVar6;
  undefined8 uVar7;
  long lVar8;
  long *plVar9;
  long lVar10;
  float fVar11;
  float fVar12;
  float fVar13;
  undefined4 uVar14;
  ulong uVar15;
  
  if ((char)param_1[8] != '\0') {
    return;
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
    fVar11 = (float)native_UnityEngine_Time__get_deltaTime_77082c(0);
  }
  else {
    fVar11 = (float)native_UnityEngine_Time__get_unscaledDeltaTime_770894(0);
  }
  if (((char)param_1[5] == '\0') || ((char)param_1[8] != '\0')) {
    fVar12 = (float)native_UnityEngine_Time__get_time_7707f8(0);
  }
  else {
    fVar12 = (float)native_UnityEngine_Time__get_unscaledTime_770860(0);
  }
  if (*(char *)((long)param_1 + 100) == '\0') {
    *(undefined1 *)((long)param_1 + 100) = 1;
    *(float *)(param_1 + 0xd) = fVar12;
    if ((*(float *)(param_1 + 0xe) <= 0.0) || ((*(uint *)(param_1 + 6) | 2) != 2)) {
      fVar11 = 0.0;
      fVar13 = fVar12;
      if ((0.0 <= *(float *)(param_1 + 0xe)) || (1 < (int)param_1[6] - 1U)) goto LAB_009486d4;
      fVar13 = *(float *)((long)param_1 + 0x2c);
    }
    else {
      fVar13 = *(float *)((long)param_1 + 0x2c);
    }
    fVar11 = 0.0;
    *(float *)(param_1 + 0xd) = fVar12 + fVar13;
    fVar13 = fVar12 + fVar13;
  }
  else {
    fVar13 = *(float *)(param_1 + 0xd);
  }
LAB_009486d4:
  if (fVar12 < fVar13) {
    return;
  }
  fVar12 = *(float *)((long)param_1 + 0x74);
  if (*(float *)((long)param_1 + 0x34) == 0.0) {
    fVar11 = 1.0;
  }
  else {
    fVar13 = (float)native_UITweener__get_amountPerDelta_9484a8(param_1);
    fVar11 = fVar11 * fVar13 * *(float *)(param_1 + 0xc);
  }
  iVar2 = *(int *)((long)param_1 + 0x1c);
  fVar12 = fVar12 + fVar11;
  *(float *)((long)param_1 + 0x74) = fVar12;
  if (iVar2 == 0) {
    if (((*(float *)((long)param_1 + 0x34) == 0.0) || (1.0 < fVar12)) || (fVar12 < 0.0)) {
      uVar14 = native_UnityEngine_Mathf__Clamp01_8d9d9c(0);
      *(undefined4 *)((long)param_1 + 0x74) = uVar14;
      native_UITweener__Sample_948a44(param_1,1);
      native_UnityEngine_Behaviour__set_enabled_8d7b0c(param_1,0,0);
      uVar7 = **(undefined8 **)(_UITweener_TypeInfo_12d64f0 + 0xb8);
      if (((*(byte *)(_UnityEngine_Object_TypeInfo_12d54e0 + 0x133) >> 2 & 1) != 0) &&
         (*(int *)(_UnityEngine_Object_TypeInfo_12d54e0 + 0xe0) == 0)) {
        native_sub_4327ec();
      }
      uVar15 = native_UnityEngine_Object__op_Inequality_8d76fc(uVar7,param_1,0);
      if ((uVar15 & 1) == 0) {
        return;
      }
      plVar5 = *(long **)(_UITweener_TypeInfo_12d64f0 + 0xb8);
      lVar8 = *plVar5;
      *plVar5 = (long)param_1;
      native_sub_4326e0(plVar5,param_1);
      plVar5 = param_1 + 9;
      if (*plVar5 != 0) {
        plVar9 = param_1 + 0xf;
        *plVar9 = *plVar5;
        native_sub_4326e0(plVar9);
        lVar6 = native_sub_432808(_System_Collections_Generic_List_EventDelegate__TypeInfo_12d2a08);
        native_System_Collections_Generic_List_XmlEventCache_XmlEvent______ctor_d3ff44
                  (lVar6,_Method_System_Collections_Generic_List_EventDelegate___ctor___12dc738);
        param_1[9] = lVar6;
        native_sub_4326e0(plVar5,lVar6);
        lVar6 = *plVar9;
        if (((*(byte *)(_EventDelegate_TypeInfo_12d4590 + 0x133) >> 2 & 1) != 0) &&
           (*(int *)(_EventDelegate_TypeInfo_12d4590 + 0xe0) == 0)) {
          native_sub_4327ec();
        }
        native_EventDelegate__Execute_deecbc(lVar6,0);
        lVar6 = *plVar9;
        if (lVar6 != 0) {
          uVar15 = 0;
          do {
            if ((long)(int)*(uint *)(lVar6 + 0x18) <= (long)uVar15) {
              *plVar9 = 0;
              native_sub_4326e0(plVar9,0);
              goto LAB_00948998;
            }
            if (*(uint *)(lVar6 + 0x18) <= uVar15) {
              native_System_ThrowHelper__ThrowArgumentOutOfRangeException_9fe0f4(0);
            }
            lVar6 = *(long *)(*(long *)(lVar6 + 0x10) + uVar15 * 8 + 0x20);
            if ((lVar6 != 0) && (*(char *)(lVar6 + 0x28) == '\0')) {
              lVar10 = *plVar5;
              if (((*(byte *)(_EventDelegate_TypeInfo_12d4590 + 0x133) >> 2 & 1) != 0) &&
                 (*(int *)(_EventDelegate_TypeInfo_12d4590 + 0xe0) == 0)) {
                native_sub_4327ec();
              }
              native_EventDelegate__Add_def388(lVar10,lVar6,0,0);
            }
            lVar6 = *plVar9;
            uVar15 = uVar15 + 1;
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
      uVar15 = native_UnityEngine_Object__op_Inequality_8d76fc(lVar6,0,0);
      if (((uVar15 & 1) != 0) &&
         (uVar15 = native_System_String__IsNullOrEmpty_b09430(param_1[0xb],0), (uVar15 & 1) == 0)) {
        if (param_1[10] == 0) goto LAB_00948900;
        native_UnityEngine_GameObject__SendMessage_8de4c0(param_1[10],param_1[0xb],param_1,1,0);
      }
      plVar5 = *(long **)(_UITweener_TypeInfo_12d64f0 + 0xb8);
      *plVar5 = lVar8;
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
    if (fVar12 <= 1.0) {
      if (0.0 <= fVar12) goto LAB_00948948;
      fVar11 = *(float *)(param_1 + 0xe);
      *(float *)((long)param_1 + 0x74) = -fVar12 - (float)(int)-fVar12;
    }
    else {
      fVar11 = *(float *)(param_1 + 0xe);
      *(float *)((long)param_1 + 0x74) = ((float)(int)fVar12 - fVar12) + 1.0;
    }
    *(float *)(param_1 + 0xe) = -fVar11;
  }
  else if ((iVar2 == 1) && (1.0 < fVar12)) {
    *(float *)((long)param_1 + 0x74) = fVar12 - (float)(int)fVar12;
  }
LAB_00948948:
  uVar15 = native_UnityEngine_Mathf__Clamp01_8d9d9c(0);
  fVar11 = (float)uVar15;
  switch((int)param_1[3]) {
  case 1:
    fVar11 = (float)func_0x002c9f10((1.0 - fVar11) * 1.5707964);
    fVar11 = 1.0 - fVar11;
    if ((char)param_1[7] != '\0') {
      fVar11 = fVar11 * fVar11;
    }
    uVar15 = (ulong)(uint)fVar11;
    break;
  case 2:
    uVar15 = func_0x002c9f10(fVar11 * 1.5707964);
    if ((char)param_1[7] != '\0') {
      fVar11 = 1.0 - (float)uVar15;
      uVar15 = (ulong)(uint)(1.0 - fVar11 * fVar11);
    }
    break;
  case 3:
    fVar12 = (float)func_0x002c9f10(fVar11 * 6.2831855);
    fVar11 = fVar11 - fVar12 / 6.2831855;
    uVar15 = (ulong)(uint)fVar11;
    if ((char)param_1[7] != '\0') {
      fVar12 = fVar11 + fVar11 + -1.0;
      fVar11 = (float)native_UnityEngine_Mathf__Sign_8e51d8(fVar12,0);
      fVar12 = 1.0 - ABS(fVar12);
      uVar15 = (ulong)(uint)((1.0 - fVar12 * fVar12) * fVar11 * 0.5 + 0.5);
    }
    break;
  case 4:
    uVar15 = native_UITweener__BounceLogic_948e84(uVar15);
    break;
  case 5:
    fVar11 = (float)native_UITweener__BounceLogic_948e84(1.0 - fVar11);
    uVar15 = (ulong)(uint)(1.0 - fVar11);
  }
  if (param_1[4] != 0) {
    uVar15 = native_UnityEngine_AnimationCurve__Evaluate_8d5be4(uVar15,param_1[4],0);
  }
                    /* WARNING: Could not recover jumptable at 0x00948ba4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(*param_1 + 0x1a8))(uVar15,param_1,0,*(undefined8 *)(*param_1 + 0x1b0));
  return;
}



/* UITweener$$FixedUpdate @ 0x948a34
 * void UITweener__FixedUpdate (UITweener_o* __this, const MethodInfo* method); */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* UITweener$$FixedUpdate
   void UITweener__FixedUpdate (UITweener_o* __this, const MethodInfo* method); */

void native_UITweener__FixedUpdate_948a34(long *param_1)

{
  ulong *puVar1;
  int iVar2;
  char cVar3;
  bool bVar4;
  long *plVar5;
  long lVar6;
  undefined8 uVar7;
  long lVar8;
  long *plVar9;
  long lVar10;
  float fVar11;
  float fVar12;
  float fVar13;
  undefined4 uVar14;
  ulong uVar15;
  
  if ((char)param_1[8] == '\0') {
    return;
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
    fVar11 = (float)native_UnityEngine_Time__get_deltaTime_77082c(0);
  }
  else {
    fVar11 = (float)native_UnityEngine_Time__get_unscaledDeltaTime_770894(0);
  }
  if (((char)param_1[5] == '\0') || ((char)param_1[8] != '\0')) {
    fVar12 = (float)native_UnityEngine_Time__get_time_7707f8(0);
  }
  else {
    fVar12 = (float)native_UnityEngine_Time__get_unscaledTime_770860(0);
  }
  if (*(char *)((long)param_1 + 100) == '\0') {
    *(undefined1 *)((long)param_1 + 100) = 1;
    *(float *)(param_1 + 0xd) = fVar12;
    if ((*(float *)(param_1 + 0xe) <= 0.0) || ((*(uint *)(param_1 + 6) | 2) != 2)) {
      fVar11 = 0.0;
      fVar13 = fVar12;
      if ((0.0 <= *(float *)(param_1 + 0xe)) || (1 < (int)param_1[6] - 1U)) goto LAB_009486d4;
      fVar13 = *(float *)((long)param_1 + 0x2c);
    }
    else {
      fVar13 = *(float *)((long)param_1 + 0x2c);
    }
    fVar11 = 0.0;
    *(float *)(param_1 + 0xd) = fVar12 + fVar13;
    fVar13 = fVar12 + fVar13;
  }
  else {
    fVar13 = *(float *)(param_1 + 0xd);
  }
LAB_009486d4:
  if (fVar12 < fVar13) {
    return;
  }
  fVar12 = *(float *)((long)param_1 + 0x74);
  if (*(float *)((long)param_1 + 0x34) == 0.0) {
    fVar11 = 1.0;
  }
  else {
    fVar13 = (float)native_UITweener__get_amountPerDelta_9484a8(param_1);
    fVar11 = fVar11 * fVar13 * *(float *)(param_1 + 0xc);
  }
  iVar2 = *(int *)((long)param_1 + 0x1c);
  fVar12 = fVar12 + fVar11;
  *(float *)((long)param_1 + 0x74) = fVar12;
  if (iVar2 == 0) {
    if (((*(float *)((long)param_1 + 0x34) == 0.0) || (1.0 < fVar12)) || (fVar12 < 0.0)) {
      uVar14 = native_UnityEngine_Mathf__Clamp01_8d9d9c(0);
      *(undefined4 *)((long)param_1 + 0x74) = uVar14;
      native_UITweener__Sample_948a44(param_1,1);
      native_UnityEngine_Behaviour__set_enabled_8d7b0c(param_1,0,0);
      uVar7 = **(undefined8 **)(_UITweener_TypeInfo_12d64f0 + 0xb8);
      if (((*(byte *)(_UnityEngine_Object_TypeInfo_12d54e0 + 0x133) >> 2 & 1) != 0) &&
         (*(int *)(_UnityEngine_Object_TypeInfo_12d54e0 + 0xe0) == 0)) {
        native_sub_4327ec();
      }
      uVar15 = native_UnityEngine_Object__op_Inequality_8d76fc(uVar7,param_1,0);
      if ((uVar15 & 1) == 0) {
        return;
      }
      plVar5 = *(long **)(_UITweener_TypeInfo_12d64f0 + 0xb8);
      lVar8 = *plVar5;
      *plVar5 = (long)param_1;
      native_sub_4326e0(plVar5,param_1);
      plVar5 = param_1 + 9;
      if (*plVar5 != 0) {
        plVar9 = param_1 + 0xf;
        *plVar9 = *plVar5;
        native_sub_4326e0(plVar9);
        lVar6 = native_sub_432808(_System_Collections_Generic_List_EventDelegate__TypeInfo_12d2a08);
        native_System_Collections_Generic_List_XmlEventCache_XmlEvent______ctor_d3ff44
                  (lVar6,_Method_System_Collections_Generic_List_EventDelegate___ctor___12dc738);
        param_1[9] = lVar6;
        native_sub_4326e0(plVar5,lVar6);
        lVar6 = *plVar9;
        if (((*(byte *)(_EventDelegate_TypeInfo_12d4590 + 0x133) >> 2 & 1) != 0) &&
           (*(int *)(_EventDelegate_TypeInfo_12d4590 + 0xe0) == 0)) {
          native_sub_4327ec();
        }
        native_EventDelegate__Execute_deecbc(lVar6,0);
        lVar6 = *plVar9;
        if (lVar6 != 0) {
          uVar15 = 0;
          do {
            if ((long)(int)*(uint *)(lVar6 + 0x18) <= (long)uVar15) {
              *plVar9 = 0;
              native_sub_4326e0(plVar9,0);
              goto LAB_00948998;
            }
            if (*(uint *)(lVar6 + 0x18) <= uVar15) {
              native_System_ThrowHelper__ThrowArgumentOutOfRangeException_9fe0f4(0);
            }
            lVar6 = *(long *)(*(long *)(lVar6 + 0x10) + uVar15 * 8 + 0x20);
            if ((lVar6 != 0) && (*(char *)(lVar6 + 0x28) == '\0')) {
              lVar10 = *plVar5;
              if (((*(byte *)(_EventDelegate_TypeInfo_12d4590 + 0x133) >> 2 & 1) != 0) &&
                 (*(int *)(_EventDelegate_TypeInfo_12d4590 + 0xe0) == 0)) {
                native_sub_4327ec();
              }
              native_EventDelegate__Add_def388(lVar10,lVar6,0,0);
            }
            lVar6 = *plVar9;
            uVar15 = uVar15 + 1;
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
      uVar15 = native_UnityEngine_Object__op_Inequality_8d76fc(lVar6,0,0);
      if (((uVar15 & 1) != 0) &&
         (uVar15 = native_System_String__IsNullOrEmpty_b09430(param_1[0xb],0), (uVar15 & 1) == 0)) {
        if (param_1[10] == 0) goto LAB_00948900;
        native_UnityEngine_GameObject__SendMessage_8de4c0(param_1[10],param_1[0xb],param_1,1,0);
      }
      plVar5 = *(long **)(_UITweener_TypeInfo_12d64f0 + 0xb8);
      *plVar5 = lVar8;
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
    if (fVar12 <= 1.0) {
      if (0.0 <= fVar12) goto LAB_00948948;
      fVar11 = *(float *)(param_1 + 0xe);
      *(float *)((long)param_1 + 0x74) = -fVar12 - (float)(int)-fVar12;
    }
    else {
      fVar11 = *(float *)(param_1 + 0xe);
      *(float *)((long)param_1 + 0x74) = ((float)(int)fVar12 - fVar12) + 1.0;
    }
    *(float *)(param_1 + 0xe) = -fVar11;
  }
  else if ((iVar2 == 1) && (1.0 < fVar12)) {
    *(float *)((long)param_1 + 0x74) = fVar12 - (float)(int)fVar12;
  }
LAB_00948948:
  uVar15 = native_UnityEngine_Mathf__Clamp01_8d9d9c(0);
  fVar11 = (float)uVar15;
  switch((int)param_1[3]) {
  case 1:
    fVar11 = (float)func_0x002c9f10((1.0 - fVar11) * 1.5707964);
    fVar11 = 1.0 - fVar11;
    if ((char)param_1[7] != '\0') {
      fVar11 = fVar11 * fVar11;
    }
    uVar15 = (ulong)(uint)fVar11;
    break;
  case 2:
    uVar15 = func_0x002c9f10(fVar11 * 1.5707964);
    if ((char)param_1[7] != '\0') {
      fVar11 = 1.0 - (float)uVar15;
      uVar15 = (ulong)(uint)(1.0 - fVar11 * fVar11);
    }
    break;
  case 3:
    fVar12 = (float)func_0x002c9f10(fVar11 * 6.2831855);
    fVar11 = fVar11 - fVar12 / 6.2831855;
    uVar15 = (ulong)(uint)fVar11;
    if ((char)param_1[7] != '\0') {
      fVar12 = fVar11 + fVar11 + -1.0;
      fVar11 = (float)native_UnityEngine_Mathf__Sign_8e51d8(fVar12,0);
      fVar12 = 1.0 - ABS(fVar12);
      uVar15 = (ulong)(uint)((1.0 - fVar12 * fVar12) * fVar11 * 0.5 + 0.5);
    }
    break;
  case 4:
    uVar15 = native_UITweener__BounceLogic_948e84(uVar15);
    break;
  case 5:
    fVar11 = (float)native_UITweener__BounceLogic_948e84(1.0 - fVar11);
    uVar15 = (ulong)(uint)(1.0 - fVar11);
  }
  if (param_1[4] != 0) {
    uVar15 = native_UnityEngine_AnimationCurve__Evaluate_8d5be4(uVar15,param_1[4],0);
  }
                    /* WARNING: Could not recover jumptable at 0x00948ba4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(*param_1 + 0x1a8))(uVar15,param_1,0,*(undefined8 *)(*param_1 + 0x1b0));
  return;
}



/* UITweener$$DoUpdate @ 0x948588
 * void UITweener__DoUpdate (UITweener_o* __this, const MethodInfo* method); */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* UITweener$$DoUpdate
   void UITweener__DoUpdate (UITweener_o* __this, const MethodInfo* method); */

void native_UITweener__DoUpdate_948588(long *param_1)

{
  ulong *puVar1;
  int iVar2;
  char cVar3;
  bool bVar4;
  long *plVar5;
  long lVar6;
  undefined8 uVar7;
  long lVar8;
  long *plVar9;
  long lVar10;
  float fVar11;
  float fVar12;
  float fVar13;
  undefined4 uVar14;
  ulong uVar15;
  
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
    fVar11 = (float)native_UnityEngine_Time__get_deltaTime_77082c(0);
  }
  else {
    fVar11 = (float)native_UnityEngine_Time__get_unscaledDeltaTime_770894(0);
  }
  if (((char)param_1[5] == '\0') || ((char)param_1[8] != '\0')) {
    fVar12 = (float)native_UnityEngine_Time__get_time_7707f8(0);
  }
  else {
    fVar12 = (float)native_UnityEngine_Time__get_unscaledTime_770860(0);
  }
  if (*(char *)((long)param_1 + 100) == '\0') {
    *(undefined1 *)((long)param_1 + 100) = 1;
    *(float *)(param_1 + 0xd) = fVar12;
    if ((*(float *)(param_1 + 0xe) <= 0.0) || ((*(uint *)(param_1 + 6) | 2) != 2)) {
      fVar11 = 0.0;
      fVar13 = fVar12;
      if ((0.0 <= *(float *)(param_1 + 0xe)) || (1 < (int)param_1[6] - 1U)) goto LAB_009486d4;
      fVar13 = *(float *)((long)param_1 + 0x2c);
    }
    else {
      fVar13 = *(float *)((long)param_1 + 0x2c);
    }
    fVar11 = 0.0;
    *(float *)(param_1 + 0xd) = fVar12 + fVar13;
    fVar13 = fVar12 + fVar13;
  }
  else {
    fVar13 = *(float *)(param_1 + 0xd);
  }
LAB_009486d4:
  if (fVar12 < fVar13) {
    return;
  }
  fVar12 = *(float *)((long)param_1 + 0x74);
  if (*(float *)((long)param_1 + 0x34) == 0.0) {
    fVar11 = 1.0;
  }
  else {
    fVar13 = (float)native_UITweener__get_amountPerDelta_9484a8(param_1);
    fVar11 = fVar11 * fVar13 * *(float *)(param_1 + 0xc);
  }
  iVar2 = *(int *)((long)param_1 + 0x1c);
  fVar12 = fVar12 + fVar11;
  *(float *)((long)param_1 + 0x74) = fVar12;
  if (iVar2 == 0) {
    if (((*(float *)((long)param_1 + 0x34) == 0.0) || (1.0 < fVar12)) || (fVar12 < 0.0)) {
      uVar14 = native_UnityEngine_Mathf__Clamp01_8d9d9c(0);
      *(undefined4 *)((long)param_1 + 0x74) = uVar14;
      native_UITweener__Sample_948a44(param_1,1);
      native_UnityEngine_Behaviour__set_enabled_8d7b0c(param_1,0,0);
      uVar7 = **(undefined8 **)(_UITweener_TypeInfo_12d64f0 + 0xb8);
      if (((*(byte *)(_UnityEngine_Object_TypeInfo_12d54e0 + 0x133) >> 2 & 1) != 0) &&
         (*(int *)(_UnityEngine_Object_TypeInfo_12d54e0 + 0xe0) == 0)) {
        native_sub_4327ec();
      }
      uVar15 = native_UnityEngine_Object__op_Inequality_8d76fc(uVar7,param_1,0);
      if ((uVar15 & 1) == 0) {
        return;
      }
      plVar5 = *(long **)(_UITweener_TypeInfo_12d64f0 + 0xb8);
      lVar8 = *plVar5;
      *plVar5 = (long)param_1;
      native_sub_4326e0(plVar5,param_1);
      plVar5 = param_1 + 9;
      if (*plVar5 != 0) {
        plVar9 = param_1 + 0xf;
        *plVar9 = *plVar5;
        native_sub_4326e0(plVar9);
        lVar6 = native_sub_432808(_System_Collections_Generic_List_EventDelegate__TypeInfo_12d2a08);
        native_System_Collections_Generic_List_XmlEventCache_XmlEvent______ctor_d3ff44
                  (lVar6,_Method_System_Collections_Generic_List_EventDelegate___ctor___12dc738);
        param_1[9] = lVar6;
        native_sub_4326e0(plVar5,lVar6);
        lVar6 = *plVar9;
        if (((*(byte *)(_EventDelegate_TypeInfo_12d4590 + 0x133) >> 2 & 1) != 0) &&
           (*(int *)(_EventDelegate_TypeInfo_12d4590 + 0xe0) == 0)) {
          native_sub_4327ec();
        }
        native_EventDelegate__Execute_deecbc(lVar6,0);
        lVar6 = *plVar9;
        if (lVar6 != 0) {
          uVar15 = 0;
          do {
            if ((long)(int)*(uint *)(lVar6 + 0x18) <= (long)uVar15) {
              *plVar9 = 0;
              native_sub_4326e0(plVar9,0);
              goto LAB_00948998;
            }
            if (*(uint *)(lVar6 + 0x18) <= uVar15) {
              native_System_ThrowHelper__ThrowArgumentOutOfRangeException_9fe0f4(0);
            }
            lVar6 = *(long *)(*(long *)(lVar6 + 0x10) + uVar15 * 8 + 0x20);
            if ((lVar6 != 0) && (*(char *)(lVar6 + 0x28) == '\0')) {
              lVar10 = *plVar5;
              if (((*(byte *)(_EventDelegate_TypeInfo_12d4590 + 0x133) >> 2 & 1) != 0) &&
                 (*(int *)(_EventDelegate_TypeInfo_12d4590 + 0xe0) == 0)) {
                native_sub_4327ec();
              }
              native_EventDelegate__Add_def388(lVar10,lVar6,0,0);
            }
            lVar6 = *plVar9;
            uVar15 = uVar15 + 1;
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
      uVar15 = native_UnityEngine_Object__op_Inequality_8d76fc(lVar6,0,0);
      if (((uVar15 & 1) != 0) &&
         (uVar15 = native_System_String__IsNullOrEmpty_b09430(param_1[0xb],0), (uVar15 & 1) == 0)) {
        if (param_1[10] == 0) goto LAB_00948900;
        native_UnityEngine_GameObject__SendMessage_8de4c0(param_1[10],param_1[0xb],param_1,1,0);
      }
      plVar5 = *(long **)(_UITweener_TypeInfo_12d64f0 + 0xb8);
      *plVar5 = lVar8;
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
    if (fVar12 <= 1.0) {
      if (0.0 <= fVar12) goto LAB_00948948;
      fVar11 = *(float *)(param_1 + 0xe);
      *(float *)((long)param_1 + 0x74) = -fVar12 - (float)(int)-fVar12;
    }
    else {
      fVar11 = *(float *)(param_1 + 0xe);
      *(float *)((long)param_1 + 0x74) = ((float)(int)fVar12 - fVar12) + 1.0;
    }
    *(float *)(param_1 + 0xe) = -fVar11;
  }
  else if ((iVar2 == 1) && (1.0 < fVar12)) {
    *(float *)((long)param_1 + 0x74) = fVar12 - (float)(int)fVar12;
  }
LAB_00948948:
  uVar15 = native_UnityEngine_Mathf__Clamp01_8d9d9c(0);
  fVar11 = (float)uVar15;
  switch((int)param_1[3]) {
  case 1:
    fVar11 = (float)func_0x002c9f10((1.0 - fVar11) * 1.5707964);
    fVar11 = 1.0 - fVar11;
    if ((char)param_1[7] != '\0') {
      fVar11 = fVar11 * fVar11;
    }
    uVar15 = (ulong)(uint)fVar11;
    break;
  case 2:
    uVar15 = func_0x002c9f10(fVar11 * 1.5707964);
    if ((char)param_1[7] != '\0') {
      fVar11 = 1.0 - (float)uVar15;
      uVar15 = (ulong)(uint)(1.0 - fVar11 * fVar11);
    }
    break;
  case 3:
    fVar12 = (float)func_0x002c9f10(fVar11 * 6.2831855);
    fVar11 = fVar11 - fVar12 / 6.2831855;
    uVar15 = (ulong)(uint)fVar11;
    if ((char)param_1[7] != '\0') {
      fVar12 = fVar11 + fVar11 + -1.0;
      fVar11 = (float)native_UnityEngine_Mathf__Sign_8e51d8(fVar12,0);
      fVar12 = 1.0 - ABS(fVar12);
      uVar15 = (ulong)(uint)((1.0 - fVar12 * fVar12) * fVar11 * 0.5 + 0.5);
    }
    break;
  case 4:
    uVar15 = native_UITweener__BounceLogic_948e84(uVar15);
    break;
  case 5:
    fVar11 = (float)native_UITweener__BounceLogic_948e84(1.0 - fVar11);
    uVar15 = (ulong)(uint)(1.0 - fVar11);
  }
  if (param_1[4] != 0) {
    uVar15 = native_UnityEngine_AnimationCurve__Evaluate_8d5be4(uVar15,param_1[4],0);
  }
                    /* WARNING: Could not recover jumptable at 0x00948ba4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(*param_1 + 0x1a8))(uVar15,param_1,0,*(undefined8 *)(*param_1 + 0x1b0));
  return;
}



/* UITweener$$SetOnFinished @ 0x948ba8
 * void UITweener__SetOnFinished (UITweener_o* __this, EventDelegate_Callback_o* del, const MethodInfo* method); */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* UITweener$$SetOnFinished
   void UITweener__SetOnFinished (UITweener_o* __this, EventDelegate_Callback_o* del, const
   MethodInfo* method); */

undefined8 native_UITweener__SetOnFinished_948ba8(long param_1,undefined8 param_2)

{
  undefined8 uVar1;
  long lVar2;
  
  if ((bRam0000000001341445 & 1) == 0) {
    native_sub_43273c(&EventDelegate_TypeInfo_12d4590);
    bRam0000000001341445 = 1;
  }
  lVar2 = *(long *)(param_1 + 0x48);
  if (((*(byte *)(_EventDelegate_TypeInfo_12d4590 + 0x133) >> 2 & 1) != 0) &&
     (*(int *)(_EventDelegate_TypeInfo_12d4590 + 0xe0) == 0)) {
    native_sub_4327ec();
  }
  if ((bRam0000000001346ef1 & 1) == 0) {
    native_sub_43273c(&EventDelegate_TypeInfo_12d4590,param_2,0);
    native_sub_43273c(&Method_System_Collections_Generic_List_EventDelegate__Add___12dc740);
    native_sub_43273c(&Method_System_Collections_Generic_List_EventDelegate__Clear___12dc748);
    bRam0000000001346ef1 = 1;
  }
  if (lVar2 == 0) {
    uVar1 = 0;
  }
  else {
    uVar1 = native_sub_432808(_EventDelegate_TypeInfo_12d4590);
    native_System_Object___ctor_ad2798(uVar1,0);
    native_EventDelegate__Set_dedf08(uVar1,param_2);
    native_System_Collections_Generic_List_Action___Clear_d40e80
              (lVar2,_Method_System_Collections_Generic_List_EventDelegate__Clear___12dc748);
    native_System_Collections_Generic_List_int_____Add_d40c00
              (lVar2,uVar1,_Method_System_Collections_Generic_List_EventDelegate__Add___12dc740);
  }
  return uVar1;
}



/* UITweener$$SetOnFinished @ 0x948c20
 * void UITweener__SetOnFinished (UITweener_o* __this, EventDelegate_o* del, const MethodInfo* method); */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* UITweener$$SetOnFinished
   void UITweener__SetOnFinished (UITweener_o* __this, EventDelegate_o* del, const MethodInfo*
   method); */

void native_UITweener__SetOnFinished_948c20(long param_1,undefined8 param_2)

{
  undefined8 *puVar1;
  undefined8 uVar2;
  uint uVar3;
  long lVar4;
  long lVar5;
  
  if ((bRam0000000001341446 & 1) == 0) {
    native_sub_43273c(&EventDelegate_TypeInfo_12d4590);
    bRam0000000001341446 = 1;
  }
  lVar5 = *(long *)(param_1 + 0x48);
  if (((*(byte *)(_EventDelegate_TypeInfo_12d4590 + 0x133) >> 2 & 1) != 0) &&
     (*(int *)(_EventDelegate_TypeInfo_12d4590 + 0xe0) == 0)) {
    native_sub_4327ec();
  }
  if ((bRam0000000001346ef2 & 1) == 0) {
    native_sub_43273c(&Method_System_Collections_Generic_List_EventDelegate__Add___12dc740,param_2,0
                     );
    native_sub_43273c(&Method_System_Collections_Generic_List_EventDelegate__Clear___12dc748);
    bRam0000000001346ef2 = 1;
  }
  if (lVar5 == 0) {
    return;
  }
  native_System_Collections_Generic_List_Action___Clear_d40e80
            (lVar5,_Method_System_Collections_Generic_List_EventDelegate__Clear___12dc748);
  lVar4 = *(long *)(lVar5 + 0x10);
  if (lVar4 != 0) {
    uVar3 = *(uint *)(lVar5 + 0x18);
    if (uVar3 == *(uint *)(lVar4 + 0x18)) {
      (*(code *)**(undefined8 **)
                  (*(long *)(*(long *)(
                                      _Method_System_Collections_Generic_List_EventDelegate__Add___12dc740
                                      + 0x18) + 0xc0) + 0x60))(lVar5,uVar3 + 1);
      uVar3 = *(uint *)(lVar5 + 0x18);
      lVar4 = *(long *)(lVar5 + 0x10);
      *(uint *)(lVar5 + 0x18) = uVar3 + 1;
      if (lVar4 == 0) goto code_r0x00d40c5c;
    }
    else {
      *(uint *)(lVar5 + 0x18) = uVar3 + 1;
    }
    if (uVar3 < *(uint *)(lVar4 + 0x18)) {
      puVar1 = (undefined8 *)(lVar4 + (long)(int)uVar3 * 8 + 0x20);
      *puVar1 = param_2;
      native_sub_4326e0(puVar1,param_2);
      *(int *)(lVar5 + 0x1c) = *(int *)(lVar5 + 0x1c) + 1;
      return;
    }
    uVar2 = native_sub_43283c();
                    /* WARNING: Subroutine does not return */
    native_sub_4327dc(uVar2,0);
  }
code_r0x00d40c5c:
                    /* WARNING: Subroutine does not return */
  native_sub_432810();
}



/* UITweener$$AddOnFinished @ 0x948c98
 * void UITweener__AddOnFinished (UITweener_o* __this, EventDelegate_Callback_o* del, const MethodInfo* method); */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* UITweener$$AddOnFinished
   void UITweener__AddOnFinished (UITweener_o* __this, EventDelegate_Callback_o* del, const
   MethodInfo* method); */

long * native_UITweener__AddOnFinished_948c98(long param_1,undefined8 param_2)

{
  uint uVar1;
  ulong uVar2;
  long lVar3;
  long *plVar4;
  ulong uVar5;
  long lVar6;
  
  if ((bRam0000000001341447 & 1) == 0) {
    native_sub_43273c(&EventDelegate_TypeInfo_12d4590);
    bRam0000000001341447 = 1;
  }
  lVar3 = *(long *)(param_1 + 0x48);
  if (((*(byte *)(_EventDelegate_TypeInfo_12d4590 + 0x133) >> 2 & 1) != 0) &&
     (*(int *)(_EventDelegate_TypeInfo_12d4590 + 0xe0) == 0)) {
    native_sub_4327ec();
  }
  if ((bRam0000000001346ef3 & 1) == 0) {
    native_sub_43273c(&EventDelegate_TypeInfo_12d4590,param_2,0);
    bRam0000000001346ef3 = 1;
  }
  if (((*(byte *)(_EventDelegate_TypeInfo_12d4590 + 0x133) >> 2 & 1) != 0) &&
     (*(int *)(_EventDelegate_TypeInfo_12d4590 + 0xe0) == 0)) {
    native_sub_4327ec();
  }
  if ((bRam0000000001346ef4 & 1) == 0) {
    native_sub_43273c(&UnityEngine_Debug_TypeInfo_12d4338);
    native_sub_43273c(&EventDelegate_TypeInfo_12d4590);
    native_sub_43273c(&Method_System_Collections_Generic_List_EventDelegate__Add___12dc740);
    native_sub_43273c(&Method_System_Collections_Generic_List_EventDelegate__get_Count___12dc760);
    native_sub_43273c(&Method_System_Collections_Generic_List_EventDelegate__get_Item___12dc768);
    native_sub_43273c(&StringLiteral_Attempting_to_add_a_callback_to_a_list_that_s_null_12ec670);
    bRam0000000001346ef4 = 1;
  }
  if (lVar3 == 0) {
    if (((*(byte *)(_UnityEngine_Debug_TypeInfo_12d4338 + 0x133) >> 2 & 1) != 0) &&
       (*(int *)(_UnityEngine_Debug_TypeInfo_12d4338 + 0xe0) == 0)) {
      native_sub_4327ec();
    }
    native_UnityEngine_Debug__LogWarning_8dca9c
              (_StringLiteral_Attempting_to_add_a_callback_to_a_list_that_s_null_12ec670,0);
    plVar4 = (long *)0x0;
  }
  else {
    uVar1 = *(uint *)(lVar3 + 0x18);
    if (0 < (int)uVar1) {
      uVar5 = 0;
      lVar6 = (long)(int)uVar1;
      while( true ) {
        if (uVar1 <= uVar5) {
          native_System_ThrowHelper__ThrowArgumentOutOfRangeException_9fe0f4(0);
        }
        plVar4 = *(long **)(*(long *)(lVar3 + 0x10) + uVar5 * 8 + 0x20);
        if ((plVar4 != (long *)0x0) &&
           (uVar2 = (**(code **)(*plVar4 + 0x138))(plVar4,param_2,*(undefined8 *)(*plVar4 + 0x140)),
           (uVar2 & 1) != 0)) {
          return plVar4;
        }
        uVar5 = uVar5 + 1;
        if (lVar6 <= (long)uVar5) break;
        uVar1 = *(uint *)(lVar3 + 0x18);
      }
    }
    plVar4 = (long *)native_sub_432808(_EventDelegate_TypeInfo_12d4590);
    native_System_Object___ctor_ad2798(plVar4,0);
    native_EventDelegate__Set_dedf08(plVar4,param_2);
    if (plVar4 == (long *)0x0) {
                    /* WARNING: Subroutine does not return */
      native_sub_432810();
    }
    *(undefined1 *)(plVar4 + 5) = 0;
    native_System_Collections_Generic_List_int_____Add_d40c00
              (lVar3,plVar4,_Method_System_Collections_Generic_List_EventDelegate__Add___12dc740);
  }
  return plVar4;
}



/* UITweener$$AddOnFinished @ 0x948d10
 * void UITweener__AddOnFinished (UITweener_o* __this, EventDelegate_o* del, const MethodInfo* method); */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* UITweener$$AddOnFinished
   void UITweener__AddOnFinished (UITweener_o* __this, EventDelegate_o* del, const MethodInfo*
   method); */

long * native_UITweener__AddOnFinished_948d10(long param_1,long param_2)

{
  char cVar1;
  bool bVar2;
  ulong uVar3;
  ulong uVar4;
  long lVar5;
  undefined8 extraout_x1;
  undefined8 extraout_x1_00;
  undefined8 uVar6;
  uint uVar7;
  long lVar8;
  int *piVar9;
  long lVar10;
  undefined8 *puVar11;
  long *plVar12;
  undefined8 uVar13;
  long lVar14;
  
  if ((bRam0000000001341448 & 1) == 0) {
    native_sub_43273c(&EventDelegate_TypeInfo_12d4590);
    bRam0000000001341448 = 1;
  }
  lVar10 = *(long *)(param_1 + 0x48);
  if (((*(byte *)(_EventDelegate_TypeInfo_12d4590 + 0x133) >> 2 & 1) != 0) &&
     (*(int *)(_EventDelegate_TypeInfo_12d4590 + 0xe0) == 0)) {
    native_sub_4327ec();
  }
  if ((bRam0000000001346ef5 & 1) == 0) {
    native_sub_43273c(&EventDelegate_TypeInfo_12d4590,param_2,0);
    bRam0000000001346ef5 = 1;
  }
  if (param_2 == 0) {
                    /* WARNING: Subroutine does not return */
    native_sub_432810();
  }
  cVar1 = *(char *)(param_2 + 0x28);
  if (((*(byte *)(_EventDelegate_TypeInfo_12d4590 + 0x133) >> 2 & 1) != 0) &&
     (*(int *)(_EventDelegate_TypeInfo_12d4590 + 0xe0) == 0)) {
    native_sub_4327ec();
  }
  bVar2 = cVar1 != '\0';
  if ((bRam0000000001346ef6 & 1) == 0) {
    native_sub_43273c(&UnityEngine_Debug_TypeInfo_12d4338);
    native_sub_43273c(&EventDelegate_TypeInfo_12d4590);
    native_sub_43273c(&Method_System_Collections_Generic_List_EventDelegate__Add___12dc740);
    native_sub_43273c(&Method_System_Collections_Generic_List_EventDelegate__get_Count___12dc760);
    native_sub_43273c(&Method_System_Collections_Generic_List_EventDelegate__get_Item___12dc768);
    native_sub_43273c(&UnityEngine_Object_TypeInfo_12d54e0);
    native_sub_43273c(&EventDelegate_Parameter___TypeInfo_12d3538);
    native_sub_43273c(&StringLiteral_Attempting_to_add_a_callback_to_a_list_that_s_null_12ec670);
    bRam0000000001346ef6 = 1;
  }
  if (param_2 == 0) goto LAB_00def5fc;
  if (*(char *)(param_2 + 0x38) == '\0') {
    uVar13 = *(undefined8 *)(param_2 + 0x10);
    if (((*(byte *)(_UnityEngine_Object_TypeInfo_12d54e0 + 0x133) >> 2 & 1) != 0) &&
       (*(int *)(_UnityEngine_Object_TypeInfo_12d54e0 + 0xe0) == 0)) {
      native_sub_4327ec();
    }
    uVar4 = native_UnityEngine_Object__op_Equality_8e9a3c(uVar13,0,0);
    if (((uVar4 & 1) == 0) &&
       (uVar4 = native_System_String__IsNullOrEmpty_b09430(*(undefined8 *)(param_2 + 0x18),0),
       (uVar4 & 1) == 0)) {
      if (lVar10 == 0) {
        if (((*(byte *)(_UnityEngine_Debug_TypeInfo_12d4338 + 0x133) >> 2 & 1) != 0) &&
           (*(int *)(_UnityEngine_Debug_TypeInfo_12d4338 + 0xe0) == 0)) {
          native_sub_4327ec();
        }
        uVar13 = _StringLiteral_Attempting_to_add_a_callback_to_a_list_that_s_null_12ec670;
        uVar6 = 0;
        if ((bRam0000000001340b57 & 1) == 0) {
          native_sub_43273c(&UnityEngine_Debug_TypeInfo_12d4338,0);
          native_sub_43273c(&UnityEngine_ILogger_TypeInfo_12d4c10);
          bRam0000000001340b57 = 1;
          uVar6 = extraout_x1;
        }
        if (((*(byte *)(_UnityEngine_Debug_TypeInfo_12d4338 + 0x133) >> 2 & 1) != 0) &&
           (*(int *)(_UnityEngine_Debug_TypeInfo_12d4338 + 0xe0) == 0)) {
          native_sub_4327ec();
          uVar6 = extraout_x1_00;
        }
        if (cRam000000000134112a == '\0') {
          native_sub_43273c(&UnityEngine_Debug_TypeInfo_12d4338,uVar6);
          cRam000000000134112a = '\x01';
        }
        if (((*(byte *)(_UnityEngine_Debug_TypeInfo_12d4338 + 0x133) >> 2 & 1) != 0) &&
           (*(int *)(_UnityEngine_Debug_TypeInfo_12d4338 + 0xe0) == 0)) {
          native_sub_4327ec();
        }
        plVar12 = *(long **)(*(long *)(_UnityEngine_Debug_TypeInfo_12d4338 + 0xb8) + 8);
        if (plVar12 == (long *)0x0) {
                    /* WARNING: Subroutine does not return */
          native_sub_432810();
        }
        lVar10 = *plVar12;
        if ((ulong)*(ushort *)(lVar10 + 0x12a) != 0) {
          uVar4 = 0;
          piVar9 = (int *)(*(long *)(lVar10 + 0xb0) + 8);
          do {
            if (*(long *)(piVar9 + -2) == _UnityEngine_ILogger_TypeInfo_12d4c10) {
              puVar11 = (undefined8 *)(lVar10 + (long)(*piVar9 + 2) * 0x10 + 0x138);
              goto code_r0x008dcba4;
            }
            uVar4 = uVar4 + 1;
            piVar9 = piVar9 + 4;
          } while (uVar4 < *(ushort *)(lVar10 + 0x12a));
        }
        puVar11 = (undefined8 *)native_sub_3c9b34(plVar12,_UnityEngine_ILogger_TypeInfo_12d4c10,2);
code_r0x008dcba4:
                    /* WARNING: Could not recover jumptable at 0x008dcbc0. Too many branches */
                    /* WARNING: Treating indirect jump as call */
        plVar12 = (long *)(*(code *)*puVar11)(plVar12,2,uVar13,puVar11[1]);
        return plVar12;
      }
      uVar7 = *(uint *)(lVar10 + 0x18);
      if (0 < (int)uVar7) {
        uVar4 = 0;
        lVar14 = (long)(int)uVar7;
        while( true ) {
          if (uVar7 <= uVar4) {
            native_System_ThrowHelper__ThrowArgumentOutOfRangeException_9fe0f4(0);
          }
          plVar12 = *(long **)(*(long *)(lVar10 + 0x10) + uVar4 * 8 + 0x20);
          if ((plVar12 != (long *)0x0) &&
             (plVar12 = (long *)(**(code **)(*plVar12 + 0x138))
                                          (plVar12,param_2,*(undefined8 *)(*plVar12 + 0x140)),
             ((ulong)plVar12 & 1) != 0)) {
            return plVar12;
          }
          uVar4 = uVar4 + 1;
          if (lVar14 <= (long)uVar4) break;
          uVar7 = *(uint *)(lVar10 + 0x18);
        }
      }
      uVar13 = *(undefined8 *)(param_2 + 0x10);
      uVar6 = *(undefined8 *)(param_2 + 0x18);
      lVar14 = native_sub_432808(_EventDelegate_TypeInfo_12d4590);
      native_System_Object___ctor_ad2798(lVar14,0);
      native_EventDelegate__Set_dee0d4(lVar14,uVar13,uVar6);
      if (lVar14 != 0) {
        *(bool *)(lVar14 + 0x28) = bVar2;
        if ((*(long *)(param_2 + 0x20) == 0) || (*(long *)(*(long *)(param_2 + 0x20) + 0x18) == 0))
        {
code_r0x00d40c00:
          lVar8 = *(long *)(lVar10 + 0x10);
          if (lVar8 == 0) {
code_r0x00d40c5c:
                    /* WARNING: Subroutine does not return */
            native_sub_432810();
          }
          uVar7 = *(uint *)(lVar10 + 0x18);
          if (uVar7 == *(uint *)(lVar8 + 0x18)) {
            (*(code *)**(undefined8 **)
                        (*(long *)(*(long *)(
                                            _Method_System_Collections_Generic_List_EventDelegate__Add___12dc740
                                            + 0x18) + 0xc0) + 0x60))(lVar10,uVar7 + 1);
            uVar7 = *(uint *)(lVar10 + 0x18);
            lVar8 = *(long *)(lVar10 + 0x10);
            *(uint *)(lVar10 + 0x18) = uVar7 + 1;
            if (lVar8 == 0) goto code_r0x00d40c5c;
          }
          else {
            *(uint *)(lVar10 + 0x18) = uVar7 + 1;
          }
          if (*(uint *)(lVar8 + 0x18) <= uVar7) {
            uVar13 = native_sub_43283c();
                    /* WARNING: Subroutine does not return */
            native_sub_4327dc(uVar13,0);
          }
          plVar12 = (long *)(lVar8 + (long)(int)uVar7 * 8 + 0x20);
          *plVar12 = lVar14;
          plVar12 = (long *)native_sub_4326e0(plVar12,lVar14);
          *(int *)(lVar10 + 0x1c) = *(int *)(lVar10 + 0x1c) + 1;
          return plVar12;
        }
        uVar13 = native_sub_432750(_EventDelegate_Parameter___TypeInfo_12d3538);
        puVar11 = (undefined8 *)(lVar14 + 0x20);
        *puVar11 = uVar13;
        native_sub_4326e0(puVar11,uVar13);
        lVar8 = *(long *)(param_2 + 0x20);
        if (lVar8 != 0) {
          uVar4 = 0;
          do {
            if ((long)(int)*(uint *)(lVar8 + 0x18) <= (long)uVar4) goto code_r0x00d40c00;
            if (*(uint *)(lVar8 + 0x18) <= uVar4) {
LAB_00def68c:
              uVar13 = native_sub_43283c();
                    /* WARNING: Subroutine does not return */
              native_sub_4327dc(uVar13,0);
            }
            plVar12 = (long *)*puVar11;
            if (plVar12 == (long *)0x0) break;
            lVar8 = *(long *)(lVar8 + uVar4 * 8 + 0x20);
            if ((lVar8 != 0) &&
               (lVar5 = native_sub_4327f8(lVar8,*(undefined8 *)(*plVar12 + 0x40)), lVar5 == 0)) {
              uVar13 = native_sub_432830();
                    /* WARNING: Subroutine does not return */
              native_sub_4327dc(uVar13,0);
            }
            if (*(uint *)(plVar12 + 3) <= uVar4) goto LAB_00def68c;
            plVar12[uVar4 + 4] = lVar8;
            native_sub_4326e0(plVar12 + uVar4 + 4,lVar8);
            lVar8 = *(long *)(param_2 + 0x20);
            uVar4 = uVar4 + 1;
          } while (lVar8 != 0);
        }
      }
LAB_00def5fc:
                    /* WARNING: Subroutine does not return */
      native_sub_432810();
    }
  }
  uVar13 = *(undefined8 *)(param_2 + 0x30);
  if (((*(byte *)(_EventDelegate_TypeInfo_12d4590 + 0x133) >> 2 & 1) != 0) &&
     (*(int *)(_EventDelegate_TypeInfo_12d4590 + 0xe0) == 0)) {
    native_sub_4327ec();
  }
  if ((bRam0000000001346ef4 & 1) == 0) {
    native_sub_43273c(&UnityEngine_Debug_TypeInfo_12d4338);
    native_sub_43273c(&EventDelegate_TypeInfo_12d4590);
    native_sub_43273c(&Method_System_Collections_Generic_List_EventDelegate__Add___12dc740);
    native_sub_43273c(&Method_System_Collections_Generic_List_EventDelegate__get_Count___12dc760);
    native_sub_43273c(&Method_System_Collections_Generic_List_EventDelegate__get_Item___12dc768);
    native_sub_43273c(&StringLiteral_Attempting_to_add_a_callback_to_a_list_that_s_null_12ec670);
    bRam0000000001346ef4 = 1;
  }
  if (lVar10 == 0) {
    if (((*(byte *)(_UnityEngine_Debug_TypeInfo_12d4338 + 0x133) >> 2 & 1) != 0) &&
       (*(int *)(_UnityEngine_Debug_TypeInfo_12d4338 + 0xe0) == 0)) {
      native_sub_4327ec();
    }
    native_UnityEngine_Debug__LogWarning_8dca9c
              (_StringLiteral_Attempting_to_add_a_callback_to_a_list_that_s_null_12ec670,0);
    plVar12 = (long *)0x0;
  }
  else {
    uVar7 = *(uint *)(lVar10 + 0x18);
    if (0 < (int)uVar7) {
      uVar4 = 0;
      lVar14 = (long)(int)uVar7;
      while( true ) {
        if (uVar7 <= uVar4) {
          native_System_ThrowHelper__ThrowArgumentOutOfRangeException_9fe0f4(0);
        }
        plVar12 = *(long **)(*(long *)(lVar10 + 0x10) + uVar4 * 8 + 0x20);
        if ((plVar12 != (long *)0x0) &&
           (uVar3 = (**(code **)(*plVar12 + 0x138))
                              (plVar12,uVar13,*(undefined8 *)(*plVar12 + 0x140)), (uVar3 & 1) != 0))
        {
          return plVar12;
        }
        uVar4 = uVar4 + 1;
        if (lVar14 <= (long)uVar4) break;
        uVar7 = *(uint *)(lVar10 + 0x18);
      }
    }
    plVar12 = (long *)native_sub_432808(_EventDelegate_TypeInfo_12d4590);
    native_System_Object___ctor_ad2798(plVar12,0);
    native_EventDelegate__Set_dedf08(plVar12,uVar13);
    if (plVar12 == (long *)0x0) {
                    /* WARNING: Subroutine does not return */
      native_sub_432810();
    }
    *(bool *)(plVar12 + 5) = bVar2;
    native_System_Collections_Generic_List_int_____Add_d40c00
              (lVar10,plVar12,_Method_System_Collections_Generic_List_EventDelegate__Add___12dc740);
  }
  return plVar12;
}



/* UITweener$$RemoveOnFinished @ 0x948d88
 * void UITweener__RemoveOnFinished (UITweener_o* __this, EventDelegate_o* del, const MethodInfo* method); */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* UITweener$$RemoveOnFinished
   void UITweener__RemoveOnFinished (UITweener_o* __this, EventDelegate_o* del, const MethodInfo*
   method); */

bool native_UITweener__RemoveOnFinished_948d88(long param_1,undefined8 param_2)

{
  long lVar1;
  int iVar2;
  long lVar3;
  
  if ((bRam0000000001341449 & 1) == 0) {
    native_sub_43273c(&Method_System_Collections_Generic_List_EventDelegate__Remove___12dc750);
    bRam0000000001341449 = 1;
  }
  if (*(long *)(param_1 + 0x48) != 0) {
    native_System_Collections_Generic_List_BMSymbol___Remove_d41f3c
              (*(long *)(param_1 + 0x48),param_2,
               _Method_System_Collections_Generic_List_EventDelegate__Remove___12dc750);
  }
  lVar1 = _Method_System_Collections_Generic_List_EventDelegate__Remove___12dc750;
  lVar3 = *(long *)(param_1 + 0x78);
  if (lVar3 == 0) {
    return false;
  }
  if (lVar3 == 0) {
                    /* WARNING: Subroutine does not return */
    native_sub_432810(0,param_2);
  }
  iVar2 = (*(code *)**(undefined8 **)
                      (*(long *)(*(long *)(
                                          _Method_System_Collections_Generic_List_EventDelegate__Remove___12dc750
                                          + 0x18) + 0xc0) + 0xd8))();
  if (-1 < iVar2) {
    (*(code *)**(undefined8 **)(*(long *)(*(long *)(lVar1 + 0x18) + 0xc0) + 0xe8))(lVar3,iVar2);
  }
  return -1 < iVar2;
}



/* UITweener$$OnDisable @ 0x948e14
 * void UITweener__OnDisable (UITweener_o* __this, const MethodInfo* method); */

/* UITweener$$OnDisable
   void UITweener__OnDisable (UITweener_o* __this, const MethodInfo* method); */

void native_UITweener__OnDisable_948e14(long param_1)

{
  *(undefined1 *)(param_1 + 100) = 0;
  return;
}



/* UITweener$$Finish @ 0x948e1c
 * void UITweener__Finish (UITweener_o* __this, const MethodInfo* method); */

/* UITweener$$Finish
   void UITweener__Finish (UITweener_o* __this, const MethodInfo* method); */

void native_UITweener__Finish_948e1c(long param_1)

{
  ulong uVar1;
  undefined4 uVar2;
  
  uVar1 = native_UnityEngine_Behaviour__get_enabled_8d7acc(param_1,0);
  if ((uVar1 & 1) == 0) {
    return;
  }
  if (param_1 != 0) {
    uVar2 = 0x3f800000;
    if (*(float *)(param_1 + 0x70) <= 0.0) {
      uVar2 = 0;
    }
    native_UITweener__Sample_948a44(uVar2,param_1,1);
    if (pcRam0000000001340948 == (code *)0x0) {
      pcRam0000000001340948 = (code *)native_sub_4326f0(&UNK_00e2c702);
    }
                    /* WARNING: Could not recover jumptable at 0x008d7b58. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*pcRam0000000001340948)(param_1,0);
    return;
  }
                    /* WARNING: Subroutine does not return */
  native_sub_432810();
}



/* UITweener$$Sample @ 0x948a44
 * void UITweener__Sample (UITweener_o* __this, float factor, bool isFinished, const MethodInfo* method); */

/* UITweener$$Sample
   void UITweener__Sample (UITweener_o* __this, float factor, bool isFinished, const MethodInfo*
   method); */

void native_UITweener__Sample_948a44(long *param_1,uint param_2)

{
  float fVar1;
  float fVar2;
  ulong uVar3;
  
  uVar3 = native_UnityEngine_Mathf__Clamp01_8d9d9c(0);
  fVar2 = (float)uVar3;
  switch((int)param_1[3]) {
  case 1:
    fVar2 = (float)func_0x002c9f10((1.0 - fVar2) * 1.5707964);
    fVar2 = 1.0 - fVar2;
    if ((char)param_1[7] != '\0') {
      fVar2 = fVar2 * fVar2;
    }
    uVar3 = (ulong)(uint)fVar2;
    break;
  case 2:
    uVar3 = func_0x002c9f10(fVar2 * 1.5707964);
    if ((char)param_1[7] != '\0') {
      fVar2 = 1.0 - (float)uVar3;
      uVar3 = (ulong)(uint)(1.0 - fVar2 * fVar2);
    }
    break;
  case 3:
    fVar1 = (float)func_0x002c9f10(fVar2 * 6.2831855);
    fVar2 = fVar2 - fVar1 / 6.2831855;
    uVar3 = (ulong)(uint)fVar2;
    if ((char)param_1[7] != '\0') {
      fVar1 = fVar2 + fVar2 + -1.0;
      fVar2 = (float)native_UnityEngine_Mathf__Sign_8e51d8(fVar1,0);
      fVar1 = 1.0 - ABS(fVar1);
      uVar3 = (ulong)(uint)((1.0 - fVar1 * fVar1) * fVar2 * 0.5 + 0.5);
    }
    break;
  case 4:
    uVar3 = native_UITweener__BounceLogic_948e84(uVar3);
    break;
  case 5:
    fVar2 = (float)native_UITweener__BounceLogic_948e84(1.0 - fVar2);
    uVar3 = (ulong)(uint)(1.0 - fVar2);
  }
  if (param_1[4] != 0) {
    uVar3 = native_UnityEngine_AnimationCurve__Evaluate_8d5be4(uVar3,param_1[4],0);
  }
                    /* WARNING: Could not recover jumptable at 0x00948ba4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(*param_1 + 0x1a8))(uVar3,param_1,param_2 & 1,*(undefined8 *)(*param_1 + 0x1b0));
  return;
}



/* UITweener$$BounceLogic @ 0x948e84
 * float UITweener__BounceLogic (UITweener_o* __this, float val, const MethodInfo* method); */

/* UITweener$$BounceLogic
   float UITweener__BounceLogic (UITweener_o* __this, float val, const MethodInfo* method); */

float native_UITweener__BounceLogic_948e84(float param_1)

{
  if (param_1 < 0.363636) {
    return param_1 * 7.5685 * param_1;
  }
  if (param_1 < 0.727272) {
    return (param_1 + -0.545454) * (param_1 + -0.545454) * 7.5625 + 0.75;
  }
  if (param_1 < 0.90909) {
    return (param_1 + -0.818181) * (param_1 + -0.818181) * 7.5625 + 0.9375;
  }
  return (param_1 + -0.9545454) * (param_1 + -0.9545454) * 7.5625 + 0.984375;
}



/* UITweener$$Play @ 0x948f44
 * void UITweener__Play (UITweener_o* __this, const MethodInfo* method); */

/* UITweener$$Play
   void UITweener__Play (UITweener_o* __this, const MethodInfo* method); */

void native_UITweener__Play_948f44(long *param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00948f50. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(*param_1 + 0x198))(param_1,1,*(undefined8 *)(*param_1 + 0x1a0));
  return;
}



/* UITweener$$PlayForward @ 0x948f54
 * void UITweener__PlayForward (UITweener_o* __this, const MethodInfo* method); */

/* UITweener$$PlayForward
   void UITweener__PlayForward (UITweener_o* __this, const MethodInfo* method); */

void native_UITweener__PlayForward_948f54(long *param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00948f60. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(*param_1 + 0x198))(param_1,1,*(undefined8 *)(*param_1 + 0x1a0));
  return;
}



/* UITweener$$PlayReverse @ 0x948f64
 * void UITweener__PlayReverse (UITweener_o* __this, const MethodInfo* method); */

/* UITweener$$PlayReverse
   void UITweener__PlayReverse (UITweener_o* __this, const MethodInfo* method); */

void native_UITweener__PlayReverse_948f64(long *param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00948f70. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(*param_1 + 0x198))(param_1,0,*(undefined8 *)(*param_1 + 0x1a0));
  return;
}



/* UITweener$$Play @ 0x948f74
 * void UITweener__Play (UITweener_o* __this, bool forward, const MethodInfo* method); */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* UITweener$$Play
   void UITweener__Play (UITweener_o* __this, bool forward, const MethodInfo* method); */

void native_UITweener__Play_948f74(long *param_1,ulong param_2)

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
  
  fVar15 = (float)native_UITweener__get_amountPerDelta_9484a8();
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



/* UITweener$$ResetToBeginning @ 0x948fd4
 * void UITweener__ResetToBeginning (UITweener_o* __this, const MethodInfo* method); */

/* UITweener$$ResetToBeginning
   void UITweener__ResetToBeginning (UITweener_o* __this, const MethodInfo* method); */

void native_UITweener__ResetToBeginning_948fd4(long *param_1)

{
  float fVar1;
  float fVar2;
  undefined4 uVar3;
  ulong uVar4;
  
  *(undefined1 *)((long)param_1 + 100) = 0;
  fVar2 = (float)native_UITweener__get_amountPerDelta_9484a8();
  if (param_1 == (long *)0x0) {
                    /* WARNING: Subroutine does not return */
    native_sub_432810();
  }
  uVar3 = 0x3f800000;
  if (0.0 <= fVar2) {
    uVar3 = 0;
  }
  *(undefined4 *)((long)param_1 + 0x74) = uVar3;
  uVar4 = native_UnityEngine_Mathf__Clamp01_8d9d9c(0);
  fVar2 = (float)uVar4;
  switch((int)param_1[3]) {
  case 1:
    fVar2 = (float)func_0x002c9f10((1.0 - fVar2) * 1.5707964);
    fVar2 = 1.0 - fVar2;
    if ((char)param_1[7] != '\0') {
      fVar2 = fVar2 * fVar2;
    }
    uVar4 = (ulong)(uint)fVar2;
    break;
  case 2:
    uVar4 = func_0x002c9f10(fVar2 * 1.5707964);
    if ((char)param_1[7] != '\0') {
      fVar2 = 1.0 - (float)uVar4;
      uVar4 = (ulong)(uint)(1.0 - fVar2 * fVar2);
    }
    break;
  case 3:
    fVar1 = (float)func_0x002c9f10(fVar2 * 6.2831855);
    fVar2 = fVar2 - fVar1 / 6.2831855;
    uVar4 = (ulong)(uint)fVar2;
    if ((char)param_1[7] != '\0') {
      fVar1 = fVar2 + fVar2 + -1.0;
      fVar2 = (float)native_UnityEngine_Mathf__Sign_8e51d8(fVar1,0);
      fVar1 = 1.0 - ABS(fVar1);
      uVar4 = (ulong)(uint)((1.0 - fVar1 * fVar1) * fVar2 * 0.5 + 0.5);
    }
    break;
  case 4:
    uVar4 = native_UITweener__BounceLogic_948e84(uVar4);
    break;
  case 5:
    fVar2 = (float)native_UITweener__BounceLogic_948e84(1.0 - fVar2);
    uVar4 = (ulong)(uint)(1.0 - fVar2);
  }
  if (param_1[4] != 0) {
    uVar4 = native_UnityEngine_AnimationCurve__Evaluate_8d5be4(uVar4,param_1[4],0);
  }
                    /* WARNING: Could not recover jumptable at 0x00948ba4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(*param_1 + 0x1a8))(uVar4,param_1,0,*(undefined8 *)(*param_1 + 0x1b0));
  return;
}



/* UITweener$$Toggle @ 0x94901c
 * void UITweener__Toggle (UITweener_o* __this, const MethodInfo* method); */

/* UITweener$$Toggle
   void UITweener__Toggle (UITweener_o* __this, const MethodInfo* method); */

void native_UITweener__Toggle_94901c(long param_1)

{
  float fVar1;
  float fVar2;
  float fVar3;
  
  fVar3 = *(float *)(param_1 + 0x74);
  fVar1 = (float)native_UITweener__get_amountPerDelta_9484a8();
  fVar2 = -fVar1;
  if (fVar3 <= 0.0) {
    fVar2 = ABS(fVar1);
  }
  *(float *)(param_1 + 0x70) = fVar2;
  if (pcRam0000000001340948 == (code *)0x0) {
    pcRam0000000001340948 = (code *)native_sub_4326f0(&UNK_00e2c702);
  }
                    /* WARNING: Could not recover jumptable at 0x008d7b58. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*pcRam0000000001340948)(param_1,1);
  return;
}



/* UITweener$$SetStartToCurrentValue @ 0x949068
 * void UITweener__SetStartToCurrentValue (UITweener_o* __this, const MethodInfo* method); */

/* UITweener$$SetStartToCurrentValue
   void UITweener__SetStartToCurrentValue (UITweener_o* __this, const MethodInfo* method); */

void native_UITweener__SetStartToCurrentValue_949068(void)

{
  return;
}



/* UITweener$$SetEndToCurrentValue @ 0x94906c
 * void UITweener__SetEndToCurrentValue (UITweener_o* __this, const MethodInfo* method); */

/* UITweener$$SetEndToCurrentValue
   void UITweener__SetEndToCurrentValue (UITweener_o* __this, const MethodInfo* method); */

void native_UITweener__SetEndToCurrentValue_94906c(void)

{
  return;
}



/* UITweener$$.ctor @ 0x949070
 * void UITweener___ctor (UITweener_o* __this, const MethodInfo* method); */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* UITweener$$.ctor
   void UITweener___ctor (UITweener_o* __this, const MethodInfo* method); */

void native_UITweener___ctor_949070(long param_1)

{
  long lVar1;
  undefined8 uVar2;
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
  
  if ((bRam000000000134144a & 1) == 0) {
    native_sub_43273c(&UnityEngine_AnimationCurve_TypeInfo_12d3768);
    native_sub_43273c(&UnityEngine_Keyframe___TypeInfo_12d3298);
    native_sub_43273c(&Method_System_Collections_Generic_List_EventDelegate___ctor___12dc738);
    native_sub_43273c(&System_Collections_Generic_List_EventDelegate__TypeInfo_12d2a08);
    bRam000000000134144a = 1;
  }
  lVar1 = native_sub_432750(_UnityEngine_Keyframe___TypeInfo_12d3298,2);
  uStack_50 = 0;
  uStack_48 = 0;
  uStack_44 = 0;
  uStack_38 = 0;
  uStack_40 = 0;
  uStack_3c = 0;
  native_UnityEngine_Keyframe___ctor_8dfc58(0,0,0,0x3f800000,&uStack_50,0);
  if (lVar1 != 0) {
    uStack_5c = CONCAT44(uStack_38,uStack_3c);
    uStack_60 = uStack_40;
    uStack_68 = uStack_48;
    uStack_64 = uStack_44;
    uStack_70 = uStack_50;
    if (*(int *)(lVar1 + 0x18) != 0) {
      *(undefined8 *)(lVar1 + 0x34) = uStack_5c;
      *(ulong *)(lVar1 + 0x2c) = CONCAT44(uStack_40,uStack_44);
      *(ulong *)(lVar1 + 0x28) = CONCAT44(uStack_44,uStack_48);
      *(undefined8 *)(lVar1 + 0x20) = uStack_50;
      uStack_90 = 0;
      uStack_88 = 0;
      uStack_84 = 0;
      uStack_78 = 0;
      uStack_80 = 0;
      uStack_7c = 0;
      native_UnityEngine_Keyframe___ctor_8dfc58(0x3f800000,0x3f800000,0x3f800000,0,&uStack_90,0);
      if (1 < *(uint *)(lVar1 + 0x18)) {
        *(ulong *)(lVar1 + 0x50) = CONCAT44(uStack_78,uStack_7c);
        *(ulong *)(lVar1 + 0x48) = CONCAT44(uStack_80,uStack_84);
        *(ulong *)(lVar1 + 0x44) = CONCAT44(uStack_84,uStack_88);
        *(undefined8 *)(lVar1 + 0x3c) = uStack_90;
        uVar2 = native_sub_432808(_UnityEngine_AnimationCurve_TypeInfo_12d3768);
        native_UnityEngine_AnimationCurve___ctor_8d5df4(uVar2,lVar1,0);
        *(undefined8 *)(param_1 + 0x20) = uVar2;
        native_sub_4326e0((undefined8 *)(param_1 + 0x20),uVar2);
        *(undefined1 *)(param_1 + 0x28) = 1;
        *(undefined8 *)(param_1 + 0x30) = 0x3f80000000000002;
        uVar2 = native_sub_432808(_System_Collections_Generic_List_EventDelegate__TypeInfo_12d2a08);
        native_System_Collections_Generic_List_XmlEventCache_XmlEvent______ctor_d3ff44
                  (uVar2,_Method_System_Collections_Generic_List_EventDelegate___ctor___12dc738);
        *(undefined8 *)(param_1 + 0x48) = uVar2;
        native_sub_4326e0(param_1 + 0x48,uVar2);
        *(undefined4 *)(param_1 + 0x60) = 0x3f800000;
        *(undefined4 *)(param_1 + 0x70) = 0x447a0000;
        native_UnityEngine_MonoBehaviour___ctor_8e971c(param_1,0);
        return;
      }
    }
    uVar2 = native_sub_43283c();
                    /* WARNING: Subroutine does not return */
    native_sub_4327dc(uVar2,0);
  }
                    /* WARNING: Subroutine does not return */
  native_sub_432810();
}


