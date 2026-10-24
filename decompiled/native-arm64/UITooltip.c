/* ARM64 IL2CPP native pseudocode from Ghidra.
 * Recovered implementation, not original C# source.
 * Function boundaries follow the IL2CPP method address table. */


/* UITooltip$$get_isVisible @ 0x9473fc
 * bool UITooltip__get_isVisible (const MethodInfo* method); */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* UITooltip$$get_isVisible
   bool UITooltip__get_isVisible (const MethodInfo* method); */

bool native_UITooltip__get_isVisible_9473fc(void)

{
  bool bVar1;
  ulong uVar2;
  undefined8 uVar3;
  
  if ((bRam0000000001341439 & 1) == 0) {
    native_sub_43273c(&UnityEngine_Object_TypeInfo_12d54e0);
    native_sub_43273c(&UITooltip_TypeInfo_12d64e8);
    bRam0000000001341439 = 1;
  }
  uVar3 = **(undefined8 **)(_UITooltip_TypeInfo_12d64e8 + 0xb8);
  if (((*(byte *)(_UnityEngine_Object_TypeInfo_12d54e0 + 0x133) >> 2 & 1) != 0) &&
     (*(int *)(_UnityEngine_Object_TypeInfo_12d54e0 + 0xe0) == 0)) {
    native_sub_4327ec();
  }
  uVar2 = native_UnityEngine_Object__op_Inequality_8d76fc(uVar3,0,0);
  if ((uVar2 & 1) == 0) {
    bVar1 = false;
  }
  else {
    if (**(long **)(_UITooltip_TypeInfo_12d64e8 + 0xb8) == 0) {
                    /* WARNING: Subroutine does not return */
      native_sub_432810();
    }
    bVar1 = *(float *)(**(long **)(_UITooltip_TypeInfo_12d64e8 + 0xb8) + 0x50) == 1.0;
  }
  return bVar1;
}



/* UITooltip$$Awake @ 0x9474b4
 * void UITooltip__Awake (UITooltip_o* __this, const MethodInfo* method); */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* UITooltip$$Awake
   void UITooltip__Awake (UITooltip_o* __this, const MethodInfo* method); */

void native_UITooltip__Awake_9474b4(undefined8 param_1)

{
  ulong *puVar1;
  char cVar2;
  bool bVar3;
  undefined8 *puVar4;
  
  if ((bRam000000000134143a & 1) == 0) {
    native_sub_43273c(&UITooltip_TypeInfo_12d64e8);
    bRam000000000134143a = 1;
  }
  puVar4 = *(undefined8 **)(_UITooltip_TypeInfo_12d64e8 + 0xb8);
  *puVar4 = param_1;
  if (iRam0000000001345318 != 0) {
    puVar1 = (ulong *)(((ulong)puVar4 >> 0x12 & 0x7fff) * 8 + 0x138ecd8);
    do {
      cVar2 = '\x01';
      bVar3 = (bool)ExclusiveMonitorPass(puVar1,0x10);
      if (bVar3) {
        *puVar1 = *puVar1 | 1L << ((ulong)puVar4 >> 0xc & 0x3f);
        cVar2 = ExclusiveMonitorsStatus();
      }
    } while (cVar2 != '\0');
  }
  return;
}



/* UITooltip$$OnDestroy @ 0x947508
 * void UITooltip__OnDestroy (UITooltip_o* __this, const MethodInfo* method); */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* UITooltip$$OnDestroy
   void UITooltip__OnDestroy (UITooltip_o* __this, const MethodInfo* method); */

void native_UITooltip__OnDestroy_947508(void)

{
  ulong *puVar1;
  char cVar2;
  bool bVar3;
  undefined8 *puVar4;
  
  if ((bRam000000000134143b & 1) == 0) {
    native_sub_43273c(&UITooltip_TypeInfo_12d64e8);
    bRam000000000134143b = 1;
  }
  puVar4 = *(undefined8 **)(_UITooltip_TypeInfo_12d64e8 + 0xb8);
  *puVar4 = 0;
  if (iRam0000000001345318 != 0) {
    puVar1 = (ulong *)(((ulong)puVar4 >> 0x12 & 0x7fff) * 8 + 0x138ecd8);
    do {
      cVar2 = '\x01';
      bVar3 = (bool)ExclusiveMonitorPass(puVar1,0x10);
      if (bVar3) {
        *puVar1 = *puVar1 | 1L << ((ulong)puVar4 >> 0xc & 0x3f);
        cVar2 = ExclusiveMonitorsStatus();
      }
    } while (cVar2 != '\0');
  }
  return;
}



/* UITooltip$$Start @ 0x947558
 * void UITooltip__Start (UITooltip_o* __this, const MethodInfo* method); */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* UITooltip$$Start
   void UITooltip__Start (UITooltip_o* __this, const MethodInfo* method); */

void native_UITooltip__Start_947558
               (undefined1 param_1 [16],undefined4 param_2,undefined4 param_3,long *param_4)

{
  long lVar1;
  ulong uVar2;
  uint uVar3;
  uint uVar4;
  long *plVar5;
  int iVar6;
  undefined4 uVar7;
  
  if ((bRam000000000134143c & 1) == 0) {
    native_sub_43273c(&Method_UnityEngine_Component_GetComponentsInChildren_UIWidget____12e2e48);
    native_sub_43273c(&Method_System_Collections_Generic_List_UIWidget__Clear___12dd420);
    native_sub_43273c(&Method_System_Collections_Generic_List_UIWidget__RemoveAt___12dd438);
    native_sub_43273c(&Method_System_Collections_Generic_List_UIWidget__get_Count___12dd448);
    native_sub_43273c(&Method_System_Collections_Generic_List_UIWidget__get_Item___12dd450);
    native_sub_43273c(&NGUITools_TypeInfo_12d53c8);
    native_sub_43273c(&UnityEngine_Object_TypeInfo_12d54e0);
    bRam000000000134143c = 1;
  }
  lVar1 = native_UnityEngine_Component__get_transform_8da62c(param_4,0);
  param_4[9] = lVar1;
  native_sub_4326e0(param_4 + 9,lVar1);
  if (param_4[0xe] != 0) {
    native_System_Collections_Generic_List_Action___Clear_d40e80
              (param_4[0xe],_Method_System_Collections_Generic_List_UIWidget__Clear___12dd420);
    native_UnityEngine_Component__GetComponentsInChildren_Component__49de84
              (param_4,param_4[0xe],
               _Method_UnityEngine_Component_GetComponentsInChildren_UIWidget____12e2e48);
    lVar1 = param_4[0xe];
    if (lVar1 != 0) {
      iVar6 = *(int *)(lVar1 + 0x18);
      if (iVar6 < 1) {
LAB_009476cc:
        lVar1 = param_4[9];
        if (lVar1 != 0) {
          uVar7 = native_UnityEngine_Transform__get_localPosition_7717f4(lVar1,0);
          plVar5 = param_4 + 3;
          lVar1 = *plVar5;
          *(undefined4 *)(param_4 + 0xb) = uVar7;
          *(undefined4 *)((long)param_4 + 0x5c) = param_2;
          *(undefined4 *)(param_4 + 0xc) = param_3;
          if (((*(byte *)(_UnityEngine_Object_TypeInfo_12d54e0 + 0x133) >> 2 & 1) != 0) &&
             (*(int *)(_UnityEngine_Object_TypeInfo_12d54e0 + 0xe0) == 0)) {
            native_sub_4327ec();
          }
          uVar2 = native_UnityEngine_Object__op_Equality_8e9a3c(lVar1,0,0);
          if ((uVar2 & 1) != 0) {
            lVar1 = native_UnityEngine_Component__get_gameObject_8da66c(param_4,0);
            if (lVar1 == 0) goto LAB_009477a0;
            uVar7 = native_UnityEngine_GameObject__get_layer_8de608(lVar1,0);
            if (((*(byte *)(_NGUITools_TypeInfo_12d53c8 + 0x133) >> 2 & 1) != 0) &&
               (*(int *)(_NGUITools_TypeInfo_12d53c8 + 0xe0) == 0)) {
              native_sub_4327ec(_NGUITools_TypeInfo_12d53c8);
            }
            lVar1 = native_NGUITools__FindCameraForLayer_72d2e8(uVar7,0);
            *plVar5 = lVar1;
            native_sub_4326e0(plVar5,lVar1);
          }
                    /* WARNING: Could not recover jumptable at 0x0094779c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
          (**(code **)(*param_4 + 0x198))(0,param_4,*(undefined8 *)(*param_4 + 0x1a0));
          return;
        }
      }
      else {
        uVar3 = 0;
        do {
          if (*(uint *)(lVar1 + 0x18) <= uVar3) {
            native_System_ThrowHelper__ThrowArgumentOutOfRangeException_9fe0f4(0);
          }
          plVar5 = *(long **)(*(long *)(lVar1 + 0x10) + (long)(int)uVar3 * 8 + 0x20);
          if (plVar5 == (long *)0x0) break;
          uVar2 = (**(code **)(*plVar5 + 0x398))(plVar5,*(undefined8 *)(*plVar5 + 0x3a0));
          if (((uVar2 & 1) == 0) ||
             (uVar2 = native_UnityEngine_Behaviour__get_enabled_8d7acc(plVar5,0), uVar4 = uVar3,
             (uVar2 & 1) == 0)) {
            if (param_4[0xe] == 0) break;
            uVar4 = uVar3 - 1;
            native_System_Collections_Generic_List_int_____RemoveAt_d42280
                      (param_4[0xe],uVar3,
                       _Method_System_Collections_Generic_List_UIWidget__RemoveAt___12dd438);
            iVar6 = iVar6 + -1;
          }
          uVar3 = uVar4 + 1;
          if (iVar6 <= (int)uVar3) goto LAB_009476cc;
          lVar1 = param_4[0xe];
        } while (lVar1 != 0);
      }
    }
  }
LAB_009477a0:
                    /* WARNING: Subroutine does not return */
  native_sub_432810();
}



/* UITooltip$$Update @ 0x9477a4
 * void UITooltip__Update (UITooltip_o* __this, const MethodInfo* method); */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* UITooltip$$Update
   void UITooltip__Update (UITooltip_o* __this, const MethodInfo* method); */

void native_UITooltip__Update_9477a4(long *param_1)

{
  ulong uVar1;
  long lVar2;
  undefined8 uVar3;
  float fVar4;
  float fVar5;
  undefined8 uVar6;
  float fVar7;
  float fVar8;
  float fVar9;
  float fVar10;
  float fVar11;
  
  if ((bRam000000000134143d & 1) == 0) {
    native_sub_43273c(&UnityEngine_Object_TypeInfo_12d54e0);
    native_sub_43273c(&UICamera_TypeInfo_12d6410);
    bRam000000000134143d = 1;
  }
  lVar2 = param_1[8];
  if (((*(byte *)(_UICamera_TypeInfo_12d6410 + 0x133) >> 2 & 1) != 0) &&
     (*(int *)(_UICamera_TypeInfo_12d6410 + 0xe0) == 0)) {
    native_sub_4327ec();
  }
  if (cRam0000000001341498 == '\0') {
    native_sub_43273c(&UICamera_TypeInfo_12d6410);
    cRam0000000001341498 = '\x01';
  }
  if (((*(byte *)(_UICamera_TypeInfo_12d6410 + 0x133) >> 2 & 1) != 0) &&
     (*(int *)(_UICamera_TypeInfo_12d6410 + 0xe0) == 0)) {
    native_sub_4327ec();
  }
  uVar3 = *(undefined8 *)(*(long *)(_UICamera_TypeInfo_12d6410 + 0xb8) + 0x1b0);
  if (((*(byte *)(_UnityEngine_Object_TypeInfo_12d54e0 + 0x133) >> 2 & 1) != 0) &&
     (*(int *)(_UnityEngine_Object_TypeInfo_12d54e0 + 0xe0) == 0)) {
    native_sub_4327ec(_UnityEngine_Object_TypeInfo_12d54e0);
  }
  uVar1 = native_UnityEngine_Object__op_Inequality_8d76fc(lVar2,uVar3,0);
  if ((uVar1 & 1) == 0) {
    fVar5 = *(float *)(param_1 + 10);
  }
  else {
    param_1[8] = 0;
    native_sub_4326e0(param_1 + 8,0);
    fVar5 = 0.0;
    *(undefined4 *)(param_1 + 10) = 0;
  }
  fVar9 = *(float *)((long)param_1 + 0x54);
  if (fVar9 != fVar5) {
    fVar4 = (float)native_RealTime__get_deltaTime_73d0b8(0);
    fVar5 = (float)native_UnityEngine_Mathf__Lerp_8e5224
                             (fVar9,fVar5,fVar4 * *(float *)(param_1 + 7),0);
    fVar9 = *(float *)(param_1 + 10);
    *(float *)((long)param_1 + 0x54) = fVar5;
    if (ABS(fVar5 - fVar9) < 0.001) {
      *(float *)((long)param_1 + 0x54) = fVar9;
      fVar5 = fVar9;
    }
    (**(code **)(*param_1 + 0x198))(fVar5 * fVar5,param_1,*(undefined8 *)(*param_1 + 0x1a0));
    if (*(char *)((long)param_1 + 0x3c) != '\0') {
      uVar3 = *(undefined8 *)((long)param_1 + 100);
      fVar4 = *(float *)((long)param_1 + 0x6c);
      native_UnityEngine_Vector3__get_one_776a20(0);
      lVar2 = param_1[0xb];
      fVar9 = *(float *)(param_1 + 0xc);
      fVar5 = (float)native_UnityEngine_Mathf__Clamp01_8d9d9c
                               (*(undefined4 *)((long)param_1 + 0x54),0);
      if (param_1[9] != 0) {
        uVar6 = NEON_fmov(0x3e800000,4);
        fVar10 = (float)lVar2;
        fVar8 = fVar10 - (float)uVar3 * (float)uVar6;
        fVar11 = (float)((ulong)lVar2 >> 0x20);
        fVar7 = fVar11 + (float)((ulong)uVar3 >> 0x20) * (float)((ulong)uVar6 >> 0x20);
        fVar4 = fVar9 + fVar4 * -0.25;
        fVar7 = fVar7 + (fVar11 - fVar7) * fVar5;
        native_UnityEngine_Transform__set_localPosition_7718a4
                  (CONCAT44(fVar7,fVar8 + (fVar10 - fVar8) * fVar5),fVar7,
                   fVar4 + fVar5 * (fVar9 - fVar4),param_1[9],0);
        lVar2 = param_1[9];
        if (lVar2 != 0) {
          if (pcRam000000000133ff18 == (code *)0x0) {
            pcRam000000000133ff18 = (code *)native_sub_4326f0(&UNK_00e2af52,0);
          }
          (*pcRam000000000133ff18)(lVar2,&stack0xffffffffffffffd0);
          return;
        }
      }
                    /* WARNING: Subroutine does not return */
      native_sub_432810();
    }
  }
  return;
}



/* UITooltip$$SetAlpha @ 0x947a1c
 * void UITooltip__SetAlpha (UITooltip_o* __this, float val, const MethodInfo* method); */

/* UITooltip$$SetAlpha
   void UITooltip__SetAlpha (UITooltip_o* __this, float val, const MethodInfo* method); */

void native_UITooltip__SetAlpha_947a1c(undefined8 param_1,long param_2)

{
  int iVar1;
  uint uVar2;
  long lVar3;
  
  if ((bRam000000000134143e & 1) == 0) {
    native_sub_43273c(&Method_System_Collections_Generic_List_UIWidget__get_Count___12dd448);
    native_sub_43273c(&Method_System_Collections_Generic_List_UIWidget__get_Item___12dd450);
    bRam000000000134143e = 1;
  }
  lVar3 = *(long *)(param_2 + 0x70);
  if (lVar3 != 0) {
    iVar1 = *(int *)(lVar3 + 0x18);
    if (iVar1 < 1) {
      return;
    }
    uVar2 = 0;
    do {
      if (*(uint *)(lVar3 + 0x18) <= uVar2) {
        native_System_ThrowHelper__ThrowArgumentOutOfRangeException_9fe0f4(0);
      }
      lVar3 = *(long *)(*(long *)(lVar3 + 0x10) + (long)(int)uVar2 * 8 + 0x20);
      if (lVar3 == 0) break;
      native_UIWidget__set_color_947adc
                (*(undefined4 *)(lVar3 + 0x90),*(undefined4 *)(lVar3 + 0x94),
                 *(undefined4 *)(lVar3 + 0x98),param_1);
      uVar2 = uVar2 + 1;
      if (iVar1 <= (int)uVar2) {
        return;
      }
      lVar3 = *(long *)(param_2 + 0x70);
    } while (lVar3 != 0);
  }
                    /* WARNING: Subroutine does not return */
  native_sub_432810();
}



/* UITooltip$$SetText @ 0x947b74
 * void UITooltip__SetText (UITooltip_o* __this, System_String_o* tooltipText, const MethodInfo* method); */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* UITooltip$$SetText
   void UITooltip__SetText (UITooltip_o* __this, System_String_o* tooltipText, const MethodInfo*
   method); */

void native_UITooltip__SetText_947b74
               (undefined1 param_1 [16],float param_2,float param_3,float param_4,long param_5,
               undefined8 param_6)

{
  int iVar1;
  int iVar2;
  ulong uVar3;
  long lVar4;
  long *plVar5;
  undefined8 uVar6;
  undefined4 uVar7;
  float fVar8;
  float fVar9;
  float fVar10;
  double dVar11;
  float fVar12;
  float fVar13;
  undefined4 uVar14;
  double dStack_38;
  
  if ((bRam000000000134143f & 1) == 0) {
    native_sub_43273c(&UnityEngine_Object_TypeInfo_12d54e0);
    native_sub_43273c(&UICamera_TypeInfo_12d6410);
    native_sub_43273c(&StringLiteral_UpdateAnchors_12f2d00);
    bRam000000000134143f = 1;
  }
  uVar6 = *(undefined8 *)(param_5 + 0x20);
  if (((*(byte *)(_UnityEngine_Object_TypeInfo_12d54e0 + 0x133) >> 2 & 1) != 0) &&
     (*(int *)(_UnityEngine_Object_TypeInfo_12d54e0 + 0xe0) == 0)) {
    native_sub_4327ec();
  }
  uVar3 = native_UnityEngine_Object__op_Inequality_8d76fc(uVar6,0,0);
  if (((uVar3 & 1) == 0) ||
     (uVar3 = native_System_String__IsNullOrEmpty_b09430(param_6,0), (uVar3 & 1) != 0)) {
    *(undefined8 *)(param_5 + 0x40) = 0;
    native_sub_4326e0((undefined8 *)(param_5 + 0x40),0);
    *(undefined4 *)(param_5 + 0x50) = 0;
    return;
  }
  *(undefined4 *)(param_5 + 0x50) = 0x3f800000;
  if (((*(byte *)(_UICamera_TypeInfo_12d6410 + 0x133) >> 2 & 1) != 0) &&
     (*(int *)(_UICamera_TypeInfo_12d6410 + 0xe0) == 0)) {
    native_sub_4327ec();
  }
  if (cRam0000000001341498 == '\0') {
    native_sub_43273c(&UICamera_TypeInfo_12d6410);
    cRam0000000001341498 = '\x01';
  }
  if (((*(byte *)(_UICamera_TypeInfo_12d6410 + 0x133) >> 2 & 1) != 0) &&
     (*(int *)(_UICamera_TypeInfo_12d6410 + 0xe0) == 0)) {
    native_sub_4327ec();
  }
  *(undefined8 *)(param_5 + 0x40) =
       *(undefined8 *)(*(long *)(_UICamera_TypeInfo_12d6410 + 0xb8) + 0x1b0);
  native_sub_4326e0((undefined8 *)(param_5 + 0x40));
  if (*(long *)(param_5 + 0x20) == 0) goto LAB_009481b0;
  native_UILabel__set_text_ae81a8(*(long *)(param_5 + 0x20),param_6,0);
  uVar7 = native_UICamera__get_lastEventPosition_c94418(0);
  *(undefined4 *)(param_5 + 0x58) = uVar7;
  *(float *)(param_5 + 0x5c) = param_2;
  *(undefined4 *)(param_5 + 0x60) = 0;
  if ((*(long *)(param_5 + 0x20) == 0) ||
     (lVar4 = native_UnityEngine_Component__get_transform_8da62c(*(long *)(param_5 + 0x20),0),
     lVar4 == 0)) goto LAB_009481b0;
  fVar8 = (float)native_UnityEngine_Transform__get_localPosition_7717f4(lVar4,0);
  fVar13 = param_2;
  fVar9 = (float)native_UnityEngine_Transform__get_localScale_771d80(lVar4,0);
  if (*(long *)(param_5 + 0x20) == 0) goto LAB_009481b0;
  fVar12 = fVar13;
  fVar10 = (float)native_UILabel__get_printedSize_ae96c8(*(long *)(param_5 + 0x20),0);
  fVar13 = fVar13 * fVar12;
  *(undefined4 *)(param_5 + 0x6c) = 0;
  *(float *)(param_5 + 100) = fVar9 * fVar10;
  *(float *)(param_5 + 0x68) = fVar13;
  uVar6 = *(undefined8 *)(param_5 + 0x30);
  if (((*(byte *)(_UnityEngine_Object_TypeInfo_12d54e0 + 0x133) >> 2 & 1) != 0) &&
     (*(int *)(_UnityEngine_Object_TypeInfo_12d54e0 + 0xe0) == 0)) {
    native_sub_4327ec();
  }
  uVar3 = native_UnityEngine_Object__op_Inequality_8d76fc(uVar6,0,0);
  if ((uVar3 & 1) != 0) {
    plVar5 = *(long **)(param_5 + 0x30);
    if (plVar5 == (long *)0x0) goto LAB_009481b0;
    fVar9 = (float)(**(code **)(*plVar5 + 0x3d8))(plVar5,*(undefined8 *)(*plVar5 + 0x3e0));
    lVar4 = *(long *)(param_5 + 0x30);
    *(ulong *)(param_5 + 100) =
         CONCAT44((float)((ulong)*(undefined8 *)(param_5 + 100) >> 0x20) +
                  fVar13 + param_4 + (-param_2 - fVar13) + (-param_2 - fVar13),
                  (float)*(undefined8 *)(param_5 + 100) +
                  fVar9 + param_3 + (fVar8 - fVar9) + (fVar8 - fVar9));
    fVar13 = fVar9 + param_3;
    uVar7 = native_UnityEngine_Mathf__RoundToInt_8e50f0(0);
    if (lVar4 == 0) goto LAB_009481b0;
    native_UIWidget__set_width_941dec(lVar4,uVar7);
    lVar4 = *(long *)(param_5 + 0x30);
    uVar7 = native_UnityEngine_Mathf__RoundToInt_8e50f0(*(undefined4 *)(param_5 + 0x68),0);
    if (lVar4 == 0) goto LAB_009481b0;
    native_UIWidget__set_height_942098(lVar4,uVar7);
  }
  uVar6 = *(undefined8 *)(param_5 + 0x18);
  if (((*(byte *)(_UnityEngine_Object_TypeInfo_12d54e0 + 0x133) >> 2 & 1) != 0) &&
     (*(int *)(_UnityEngine_Object_TypeInfo_12d54e0 + 0xe0) == 0)) {
    native_sub_4327ec();
  }
  uVar3 = native_UnityEngine_Object__op_Inequality_8d76fc(uVar6,0,0);
  fVar8 = *(float *)(param_5 + 0x58);
  if ((uVar3 & 1) == 0) {
    fVar13 = *(float *)(param_5 + 100);
    iVar1 = native_UnityEngine_Screen__get_width_76a5e4(0);
    if ((float)iVar1 < fVar8 + fVar13) {
      iVar1 = native_UnityEngine_Screen__get_width_76a5e4(0);
      *(float *)(param_5 + 0x58) = (float)iVar1 - *(float *)(param_5 + 100);
    }
    if (*(float *)(param_5 + 0x5c) - *(float *)(param_5 + 0x68) < 0.0) {
      *(float *)(param_5 + 0x5c) = *(float *)(param_5 + 0x68);
    }
    fVar13 = *(float *)(param_5 + 0x58);
    iVar1 = native_UnityEngine_Screen__get_width_76a5e4(0);
    fVar8 = *(float *)(param_5 + 0x5c);
    *(float *)(param_5 + 0x58) = fVar13 - (float)iVar1 * 0.5;
    iVar1 = native_UnityEngine_Screen__get_height_76a618(0);
    fVar13 = fVar8 - (float)iVar1 * 0.5;
  }
  else {
    iVar1 = native_UnityEngine_Screen__get_width_76a5e4(0);
    uVar7 = native_UnityEngine_Mathf__Clamp01_8d9d9c(fVar8 / (float)iVar1,0);
    fVar8 = *(float *)(param_5 + 0x5c);
    *(undefined4 *)(param_5 + 0x58) = uVar7;
    iVar1 = native_UnityEngine_Screen__get_height_76a618(0);
    uVar7 = native_UnityEngine_Mathf__Clamp01_8d9d9c(fVar8 / (float)iVar1,0);
    *(undefined4 *)(param_5 + 0x5c) = uVar7;
    if (*(long *)(param_5 + 0x18) == 0) goto LAB_009481b0;
    fVar8 = (float)native_UnityEngine_Camera__get_orthographicSize_8d8630
                             (*(long *)(param_5 + 0x18),0);
    lVar4 = *(long *)(param_5 + 0x48);
    if ((lVar4 == 0) ||
       (lVar4 = native_UnityEngine_Transform__get_parent_765eb0(lVar4,0), lVar4 == 0))
    goto LAB_009481b0;
    native_UnityEngine_Transform__get_lossyScale_772cac(lVar4,0);
    iVar1 = native_UnityEngine_Screen__get_height_76a618(0);
    fVar9 = *(float *)(param_5 + 100);
    fVar13 = ((float)iVar1 * 0.5) / (fVar8 / fVar13);
    iVar1 = native_UnityEngine_Screen__get_width_76a5e4(0);
    fVar8 = *(float *)(param_5 + 0x68);
    iVar2 = native_UnityEngine_Screen__get_height_76a618(0);
    uVar7 = native_UnityEngine_Mathf__Min_8e4bb8
                      (*(undefined4 *)(param_5 + 0x58),1.0 - (fVar9 * fVar13) / (float)iVar1,0);
    *(undefined4 *)(param_5 + 0x58) = uVar7;
    uVar7 = native_UnityEngine_Mathf__Max_8d9f90
                      (*(undefined4 *)(param_5 + 0x5c),(fVar13 * fVar8) / (float)iVar2,0);
    *(undefined4 *)(param_5 + 0x5c) = uVar7;
    if (*(long *)(param_5 + 0x18) == 0) goto LAB_009481b0;
    uVar14 = *(undefined4 *)(param_5 + 0x60);
    lVar4 = *(long *)(param_5 + 0x48);
    native_UnityEngine_Camera__ViewportToWorldPoint_8d9168
              (*(undefined4 *)(param_5 + 0x58),*(long *)(param_5 + 0x18),0);
    if (lVar4 == 0) goto LAB_009481b0;
    native_UnityEngine_Transform__set_position_77174c(lVar4,0);
    lVar4 = *(long *)(param_5 + 0x48);
    if (lVar4 == 0) goto LAB_009481b0;
    fVar13 = (float)native_UnityEngine_Transform__get_localPosition_7717f4(lVar4,0);
    *(float *)(param_5 + 0x58) = fVar13;
    *(undefined4 *)(param_5 + 0x5c) = uVar7;
    *(undefined4 *)(param_5 + 0x60) = uVar14;
    dVar11 = (double)func_0x002c9600((double)fVar13,&dStack_38);
    if (0.0 <= fVar13) {
      if (dVar11 == 0.5) {
        fVar13 = (float)dStack_38 + 1.0;
        goto LAB_00948050;
      }
      fVar8 = (float)(int)(fVar13 + 0.5);
    }
    else if (dVar11 == -0.5) {
      fVar13 = (float)dStack_38 + -1.0;
LAB_00948050:
      fVar8 = (float)dStack_38;
      if (((long)dStack_38 & 1U) != 0) {
        fVar8 = fVar13;
      }
    }
    else {
      fVar8 = (float)(int)(fVar13 + -0.5);
    }
    fVar13 = *(float *)(param_5 + 0x5c);
    *(float *)(param_5 + 0x58) = fVar8;
    dVar11 = (double)func_0x002c9600((double)fVar13,&dStack_38);
    if (0.0 <= fVar13) {
      if (dVar11 == 0.5) {
        fVar8 = (float)dStack_38 + 1.0;
        goto LAB_009480d0;
      }
      fVar13 = (float)(int)(fVar13 + 0.5);
    }
    else if (dVar11 == -0.5) {
      fVar8 = (float)dStack_38 + -1.0;
LAB_009480d0:
      fVar13 = (float)dStack_38;
      if (((long)dStack_38 & 1U) != 0) {
        fVar13 = fVar8;
      }
    }
    else {
      fVar13 = (float)(int)(fVar13 + -0.5);
    }
  }
  *(float *)(param_5 + 0x5c) = fVar13;
  if (*(long *)(param_5 + 0x48) != 0) {
    native_UnityEngine_Transform__set_localPosition_7718a4
              (*(undefined4 *)(param_5 + 0x58),fVar13,*(undefined4 *)(param_5 + 0x60),
               *(long *)(param_5 + 0x48),0);
    uVar6 = *(undefined8 *)(param_5 + 0x28);
    if (((*(byte *)(_UnityEngine_Object_TypeInfo_12d54e0 + 0x133) >> 2 & 1) != 0) &&
       (*(int *)(_UnityEngine_Object_TypeInfo_12d54e0 + 0xe0) == 0)) {
      native_sub_4327ec();
    }
    uVar3 = native_UnityEngine_Object__op_Inequality_8d76fc(uVar6,0,0);
    uVar6 = _StringLiteral_UpdateAnchors_12f2d00;
    if ((uVar3 & 1) == 0) {
      lVar4 = *(long *)(param_5 + 0x20);
      if (lVar4 != 0) {
        if (pcRam0000000001340ad8 == (code *)0x0) {
          pcRam0000000001340ad8 =
               (code *)native_sub_4326f0(&UNK_00e2d1c6,_StringLiteral_UpdateAnchors_12f2d00,0);
        }
                    /* WARNING: Could not recover jumptable at 0x008dac94. Too many branches */
                    /* WARNING: Treating indirect jump as call */
        (*pcRam0000000001340ad8)(lVar4,uVar6,0,0);
        return;
      }
    }
    else {
      lVar4 = *(long *)(param_5 + 0x28);
      if (lVar4 != 0) {
        if (pcRam0000000001340c28 == (code *)0x0) {
          pcRam0000000001340c28 =
               (code *)native_sub_4326f0(&UNK_00e2dba3,_StringLiteral_UpdateAnchors_12f2d00,0);
        }
                    /* WARNING: Could not recover jumptable at 0x008de824. Too many branches */
                    /* WARNING: Treating indirect jump as call */
        (*pcRam0000000001340c28)(lVar4,uVar6,0,0);
        return;
      }
    }
  }
LAB_009481b0:
                    /* WARNING: Subroutine does not return */
  native_sub_432810();
}



/* UITooltip$$ShowText @ 0x9481b4
 * void UITooltip__ShowText (System_String_o* text, const MethodInfo* method); */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* UITooltip$$ShowText
   void UITooltip__ShowText (System_String_o* text, const MethodInfo* method); */

void native_UITooltip__ShowText_9481b4(undefined8 param_1)

{
  ulong uVar1;
  long *plVar2;
  undefined8 uVar3;
  
  if ((bRam0000000001341440 & 1) == 0) {
    native_sub_43273c(&UnityEngine_Object_TypeInfo_12d54e0);
    native_sub_43273c(&UITooltip_TypeInfo_12d64e8);
    bRam0000000001341440 = 1;
  }
  uVar3 = **(undefined8 **)(_UITooltip_TypeInfo_12d64e8 + 0xb8);
  if (((*(byte *)(_UnityEngine_Object_TypeInfo_12d54e0 + 0x133) >> 2 & 1) != 0) &&
     (*(int *)(_UnityEngine_Object_TypeInfo_12d54e0 + 0xe0) == 0)) {
    native_sub_4327ec();
  }
  uVar1 = native_UnityEngine_Object__op_Inequality_8d76fc(uVar3,0,0);
  if ((uVar1 & 1) != 0) {
    plVar2 = (long *)**(long **)(_UITooltip_TypeInfo_12d64e8 + 0xb8);
    if (plVar2 != (long *)0x0) {
                    /* WARNING: Could not recover jumptable at 0x00948264. Too many branches */
                    /* WARNING: Treating indirect jump as call */
      (**(code **)(*plVar2 + 0x1a8))(plVar2,param_1,*(undefined8 *)(*plVar2 + 0x1b0));
      return;
    }
                    /* WARNING: Subroutine does not return */
    native_sub_432810();
  }
  return;
}



/* UITooltip$$Show @ 0x94827c
 * void UITooltip__Show (System_String_o* text, const MethodInfo* method); */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* UITooltip$$Show
   void UITooltip__Show (System_String_o* text, const MethodInfo* method); */

void native_UITooltip__Show_94827c(undefined8 param_1)

{
  ulong uVar1;
  long *plVar2;
  undefined8 uVar3;
  
  if ((bRam0000000001341441 & 1) == 0) {
    native_sub_43273c(&UnityEngine_Object_TypeInfo_12d54e0);
    native_sub_43273c(&UITooltip_TypeInfo_12d64e8);
    bRam0000000001341441 = 1;
  }
  uVar3 = **(undefined8 **)(_UITooltip_TypeInfo_12d64e8 + 0xb8);
  if (((*(byte *)(_UnityEngine_Object_TypeInfo_12d54e0 + 0x133) >> 2 & 1) != 0) &&
     (*(int *)(_UnityEngine_Object_TypeInfo_12d54e0 + 0xe0) == 0)) {
    native_sub_4327ec();
  }
  uVar1 = native_UnityEngine_Object__op_Inequality_8d76fc(uVar3,0,0);
  if ((uVar1 & 1) != 0) {
    plVar2 = (long *)**(long **)(_UITooltip_TypeInfo_12d64e8 + 0xb8);
    if (plVar2 != (long *)0x0) {
                    /* WARNING: Could not recover jumptable at 0x0094832c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
      (**(code **)(*plVar2 + 0x1a8))(plVar2,param_1,*(undefined8 *)(*plVar2 + 0x1b0));
      return;
    }
                    /* WARNING: Subroutine does not return */
    native_sub_432810();
  }
  return;
}



/* UITooltip$$Hide @ 0x948344
 * void UITooltip__Hide (const MethodInfo* method); */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* UITooltip$$Hide
   void UITooltip__Hide (const MethodInfo* method); */

void native_UITooltip__Hide_948344(void)

{
  ulong uVar1;
  undefined8 *puVar2;
  undefined8 uVar3;
  
  if ((bRam0000000001341442 & 1) == 0) {
    native_sub_43273c(&UnityEngine_Object_TypeInfo_12d54e0);
    native_sub_43273c(&UITooltip_TypeInfo_12d64e8);
    bRam0000000001341442 = 1;
  }
  uVar3 = **(undefined8 **)(_UITooltip_TypeInfo_12d64e8 + 0xb8);
  if (((*(byte *)(_UnityEngine_Object_TypeInfo_12d54e0 + 0x133) >> 2 & 1) != 0) &&
     (*(int *)(_UnityEngine_Object_TypeInfo_12d54e0 + 0xe0) == 0)) {
    native_sub_4327ec();
  }
  uVar1 = native_UnityEngine_Object__op_Inequality_8d76fc(uVar3,0,0);
  if ((uVar1 & 1) == 0) {
    return;
  }
  if (**(long **)(_UITooltip_TypeInfo_12d64e8 + 0xb8) != 0) {
    puVar2 = (undefined8 *)(**(long **)(_UITooltip_TypeInfo_12d64e8 + 0xb8) + 0x40);
    *puVar2 = 0;
    native_sub_4326e0(puVar2,0);
    if (**(long **)(_UITooltip_TypeInfo_12d64e8 + 0xb8) != 0) {
      *(undefined4 *)(**(long **)(_UITooltip_TypeInfo_12d64e8 + 0xb8) + 0x50) = 0;
      return;
    }
  }
                    /* WARNING: Subroutine does not return */
  native_sub_432810();
}



/* UITooltip$$.ctor @ 0x948404
 * void UITooltip___ctor (UITooltip_o* __this, const MethodInfo* method); */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* UITooltip$$.ctor
   void UITooltip___ctor (UITooltip_o* __this, const MethodInfo* method); */

undefined1  [16]
native_UITooltip___ctor_948404
          (undefined1 param_1 [16],undefined4 param_2,undefined4 param_3,ulong param_4)

{
  undefined8 uVar1;
  undefined4 uVar2;
  undefined1 auVar3 [16];
  
  if ((bRam0000000001341443 & 1) == 0) {
    native_sub_43273c(&Method_System_Collections_Generic_List_UIWidget___ctor___12dd410);
    native_sub_43273c(&System_Collections_Generic_List_UIWidget__TypeInfo_12d2c48);
    bRam0000000001341443 = 1;
  }
  *(undefined4 *)(param_4 + 0x38) = 0x41200000;
  *(undefined1 *)(param_4 + 0x3c) = 1;
  uVar2 = native_UnityEngine_Vector3__get_zero_776668(0);
  *(undefined4 *)(param_4 + 100) = uVar2;
  *(undefined4 *)(param_4 + 0x68) = param_2;
  *(undefined4 *)(param_4 + 0x6c) = param_3;
  uVar1 = native_sub_432808(_System_Collections_Generic_List_UIWidget__TypeInfo_12d2c48);
  native_System_Collections_Generic_List_XmlEventCache_XmlEvent______ctor_d3ff44
            (uVar1,_Method_System_Collections_Generic_List_UIWidget___ctor___12dd410);
  *(undefined8 *)(param_4 + 0x70) = uVar1;
  native_sub_4326e0(param_4 + 0x70,uVar1);
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


