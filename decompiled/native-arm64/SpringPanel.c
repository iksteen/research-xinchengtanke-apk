/* ARM64 IL2CPP native pseudocode from Ghidra.
 * Recovered implementation, not original C# source.
 * Function boundaries follow the IL2CPP method address table. */


/* SpringPanel$$Start @ 0x73e578
 * void SpringPanel__Start (SpringPanel_o* __this, const MethodInfo* method); */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* SpringPanel$$Start
   void SpringPanel__Start (SpringPanel_o* __this, const MethodInfo* method); */

void native_SpringPanel__Start_73e578(long param_1)

{
  ulong *puVar1;
  char cVar2;
  bool bVar3;
  undefined8 uVar4;
  
  if ((bRam000000000133f625 & 1) == 0) {
    native_sub_43273c(&Method_UnityEngine_Component_GetComponent_UIPanel____12e2be0);
    native_sub_43273c(&Method_UnityEngine_Component_GetComponent_UIScrollView____12e2c08);
    bRam000000000133f625 = 1;
  }
  uVar4 = native_UnityEngine_Component__GetComponent_ActiveAnimation__49daec
                    (param_1,_Method_UnityEngine_Component_GetComponent_UIPanel____12e2be0);
  *(undefined8 *)(param_1 + 0x30) = uVar4;
  native_sub_4326e0(param_1 + 0x30);
  uVar4 = native_UnityEngine_Component__GetComponent_ActiveAnimation__49daec
                    (param_1,_Method_UnityEngine_Component_GetComponent_UIScrollView____12e2c08);
  *(undefined8 *)(param_1 + 0x40) = uVar4;
  native_sub_4326e0(param_1 + 0x40);
  uVar4 = native_UnityEngine_Component__get_transform_8da62c(param_1,0);
  *(undefined8 *)(param_1 + 0x38) = uVar4;
  if (iRam0000000001345318 != 0) {
    puVar1 = (ulong *)((param_1 + 0x38U >> 0x12 & 0x7fff) * 8 + 0x138ecd8);
    do {
      cVar2 = '\x01';
      bVar3 = (bool)ExclusiveMonitorPass(puVar1,0x10);
      if (bVar3) {
        *puVar1 = *puVar1 | 1L << (param_1 + 0x38U >> 0xc & 0x3f);
        cVar2 = ExclusiveMonitorsStatus();
      }
    } while (cVar2 != '\0');
  }
  return;
}



/* SpringPanel$$Update @ 0x73e620
 * void SpringPanel__Update (SpringPanel_o* __this, const MethodInfo* method); */

/* SpringPanel$$Update
   void SpringPanel__Update (SpringPanel_o* __this, const MethodInfo* method); */

void native_SpringPanel__Update_73e620(long *param_1)

{
                    /* WARNING: Could not recover jumptable at 0x0073e628. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(*param_1 + 0x178))(param_1,*(undefined8 *)(*param_1 + 0x180));
  return;
}



/* SpringPanel$$AdvanceTowardsPosition @ 0x73e62c
 * void SpringPanel__AdvanceTowardsPosition (SpringPanel_o* __this, const MethodInfo* method); */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* SpringPanel$$AdvanceTowardsPosition
   void SpringPanel__AdvanceTowardsPosition (SpringPanel_o* __this, const MethodInfo* method); */

void native_SpringPanel__AdvanceTowardsPosition_73e62c
               (undefined1 param_1 [16],undefined8 param_2,undefined8 param_3,long param_4)

{
  bool bVar1;
  long lVar2;
  ulong uVar3;
  long *plVar4;
  undefined8 *puVar5;
  float fVar6;
  undefined8 uVar7;
  double dVar8;
  undefined8 uVar9;
  float fVar10;
  undefined8 uVar11;
  float fVar12;
  float fVar13;
  undefined4 uVar14;
  undefined4 uVar15;
  float fVar16;
  undefined4 uVar17;
  float fVar18;
  undefined4 uVar19;
  undefined4 uVar20;
  undefined8 uStack_70;
  float fStack_68;
  double dStack_28;
  
  if ((bRam000000000133f626 & 1) == 0) {
    native_sub_43273c(&NGUIMath_TypeInfo_12d53b8);
    native_sub_43273c(&UnityEngine_Object_TypeInfo_12d54e0);
    native_sub_43273c(&SpringPanel_TypeInfo_12d5e60);
    bRam000000000133f626 = 1;
  }
  fStack_68 = 0.0;
  uStack_70 = 0;
  fVar13 = *(float *)(param_4 + 0x48);
  fVar6 = (float)native_UnityEngine_Time__get_unscaledDeltaTime_770894(0);
  *(float *)(param_4 + 0x48) = fVar13 + fVar6;
  if (*(long *)(param_4 + 0x38) == 0) goto LAB_0073ea0c;
  uVar7 = native_UnityEngine_Transform__get_localPosition_7717f4(*(long *)(param_4 + 0x38),0);
  uVar20 = *(undefined4 *)(param_4 + 0x18);
  uVar19 = *(undefined4 *)(param_4 + 0x1c);
  uVar17 = *(undefined4 *)(param_4 + 0x20);
  uVar14 = *(undefined4 *)(param_4 + 0x24);
  uVar15 = *(undefined4 *)(param_4 + 0x48);
  if (((*(byte *)(_NGUIMath_TypeInfo_12d53b8 + 0x133) >> 2 & 1) != 0) &&
     (*(int *)(_NGUIMath_TypeInfo_12d53b8 + 0xe0) == 0)) {
    native_sub_4327ec();
  }
  uVar9 = param_2;
  uVar11 = param_3;
  fVar6 = (float)native_NGUIMath__SpringLerp_806684
                           (uVar7,param_2,param_3,uVar20,uVar19,uVar17,uVar14,uVar15,0);
  fVar10 = (float)uVar7;
  fVar12 = (float)param_2;
  uStack_70 = CONCAT44(fVar12 - (float)((ulong)*(undefined8 *)(param_4 + 0x18) >> 0x20),
                       fVar10 - (float)*(undefined8 *)(param_4 + 0x18));
  fStack_68 = (float)param_3 - *(float *)(param_4 + 0x20);
  fVar13 = (float)native_UnityEngine_Vector3__get_sqrMagnitude_776910(&uStack_70,0);
  if (0.01 <= fVar13) {
    dVar8 = (double)func_0x002c9600((double)fVar6,&dStack_28);
    if (0.0 <= fVar6) {
      if (dVar8 == 0.5) {
        fVar6 = 1.0;
        goto LAB_0073e7b8;
      }
      fVar13 = (float)(int)(fVar6 + 0.5);
    }
    else if (dVar8 == -0.5) {
      fVar6 = -1.0;
LAB_0073e7b8:
      fVar13 = (float)dStack_28;
      if (((long)dStack_28 & 1U) != 0) {
        fVar13 = (float)dStack_28 + fVar6;
      }
    }
    else {
      fVar13 = (float)(int)(fVar6 + -0.5);
    }
    fVar6 = (float)uVar9;
    dVar8 = (double)func_0x002c9600((double)fVar6,&dStack_28);
    if (0.0 <= fVar6) {
      if (dVar8 == 0.5) {
        fVar6 = 1.0;
        goto LAB_0073e82c;
      }
      fVar18 = (float)(int)(fVar6 + 0.5);
    }
    else if (dVar8 == -0.5) {
      fVar6 = -1.0;
LAB_0073e82c:
      fVar18 = (float)dStack_28;
      if (((long)dStack_28 & 1U) != 0) {
        fVar18 = (float)dStack_28 + fVar6;
      }
    }
    else {
      fVar18 = (float)(int)(fVar6 + -0.5);
    }
    fVar6 = (float)uVar11;
    dVar8 = (double)func_0x002c9600((double)fVar6,&dStack_28);
    if (0.0 <= fVar6) {
      if (dVar8 == 0.5) {
        fVar6 = 1.0;
        goto LAB_0073e8a0;
      }
      fVar16 = (float)(int)(fVar6 + 0.5);
    }
    else if (dVar8 == -0.5) {
      fVar6 = -1.0;
LAB_0073e8a0:
      fVar16 = (float)dStack_28;
      if (((long)dStack_28 & 1U) != 0) {
        fVar16 = (float)dStack_28 + fVar6;
      }
    }
    else {
      fVar16 = (float)(int)(fVar6 + -0.5);
    }
    fStack_68 = fVar16 - (float)param_3;
    uStack_70 = CONCAT44(fVar18 - fVar12,fVar13 - fVar10);
    fVar6 = (float)native_UnityEngine_Vector3__get_sqrMagnitude_776910(&uStack_70,0);
    if (fVar6 < 0.01) {
      return;
    }
    bVar1 = false;
  }
  else {
    fVar13 = *(float *)(param_4 + 0x18);
    fVar18 = *(float *)(param_4 + 0x1c);
    fVar16 = *(float *)(param_4 + 0x20);
    native_UnityEngine_Behaviour__set_enabled_8d7b0c(param_4,0,0);
    bVar1 = true;
  }
  *(undefined4 *)(param_4 + 0x48) = 0;
  if (*(long *)(param_4 + 0x38) != 0) {
    native_UnityEngine_Transform__set_localPosition_7718a4
              (fVar13,fVar18,fVar16,*(long *)(param_4 + 0x38),0);
    lVar2 = *(long *)(param_4 + 0x30);
    if (lVar2 != 0) {
      native_UIPanel__set_clipOffset_aeff9c
                (*(float *)(lVar2 + 0x174) - (fVar13 - fVar10),
                 *(float *)(lVar2 + 0x178) - (fVar18 - fVar12),lVar2,0);
      uVar7 = *(undefined8 *)(param_4 + 0x40);
      if (((*(byte *)(_UnityEngine_Object_TypeInfo_12d54e0 + 0x133) >> 2 & 1) != 0) &&
         (*(int *)(_UnityEngine_Object_TypeInfo_12d54e0 + 0xe0) == 0)) {
        native_sub_4327ec();
      }
      uVar3 = native_UnityEngine_Object__op_Inequality_8d76fc(uVar7,0,0);
      if ((uVar3 & 1) != 0) {
        plVar4 = *(long **)(param_4 + 0x40);
        if (plVar4 == (long *)0x0) goto LAB_0073ea0c;
        (**(code **)(*plVar4 + 0x1b8))(plVar4,0,*(undefined8 *)(*plVar4 + 0x1c0));
      }
      if ((bVar1) && (*(long *)(param_4 + 0x28) != 0)) {
        plVar4 = *(long **)(_SpringPanel_TypeInfo_12d5e60 + 0xb8);
        *plVar4 = param_4;
        native_sub_4326e0(plVar4,param_4);
        if (*(long *)(param_4 + 0x28) == 0) goto LAB_0073ea0c;
        native_SpringPanel_OnFinished__Invoke_54dbe0(*(long *)(param_4 + 0x28),0);
        puVar5 = *(undefined8 **)(_SpringPanel_TypeInfo_12d5e60 + 0xb8);
        *puVar5 = 0;
        native_sub_4326e0(puVar5,0);
      }
      return;
    }
  }
LAB_0073ea0c:
                    /* WARNING: Subroutine does not return */
  native_sub_432810();
}



/* SpringPanel$$Begin @ 0x73ea10
 * SpringPanel_o* SpringPanel__Begin (UnityEngine_GameObject_o* go, UnityEngine_Vector3_o pos, float strength, const MethodInfo* method); */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* SpringPanel$$Begin
   SpringPanel_o* SpringPanel__Begin (UnityEngine_GameObject_o* go, UnityEngine_Vector3_o pos, float
   strength, const MethodInfo* method); */

long native_SpringPanel__Begin_73ea10
               (undefined4 param_1,undefined4 param_2,undefined4 param_3,undefined4 param_4,
               long param_5)

{
  long lVar1;
  ulong uVar2;
  
  if ((bRam000000000133f627 & 1) == 0) {
    native_sub_43273c(&Method_UnityEngine_GameObject_AddComponent_SpringPanel____12e4868);
    native_sub_43273c(&Method_UnityEngine_GameObject_GetComponent_SpringPanel____12e4a30);
    native_sub_43273c(&UnityEngine_Object_TypeInfo_12d54e0);
    bRam000000000133f627 = 1;
  }
  if (param_5 != 0) {
    lVar1 = native_UnityEngine_GameObject__GetComponent_BE2_BlockSectionHeader_Custom__4a2214
                      (param_5,_Method_UnityEngine_GameObject_GetComponent_SpringPanel____12e4a30);
    if (((*(byte *)(_UnityEngine_Object_TypeInfo_12d54e0 + 0x133) >> 2 & 1) != 0) &&
       (*(int *)(_UnityEngine_Object_TypeInfo_12d54e0 + 0xe0) == 0)) {
      native_sub_4327ec(_UnityEngine_Object_TypeInfo_12d54e0);
    }
    uVar2 = native_UnityEngine_Object__op_Equality_8e9a3c(lVar1,0,0);
    if ((uVar2 & 1) != 0) {
      lVar1 = native_UnityEngine_GameObject__AddComponent_ActiveAnimation__4a2118
                        (param_5,_Method_UnityEngine_GameObject_AddComponent_SpringPanel____12e4868)
      ;
    }
    if (lVar1 != 0) {
      *(undefined4 *)(lVar1 + 0x18) = param_1;
      *(undefined4 *)(lVar1 + 0x1c) = param_2;
      *(undefined4 *)(lVar1 + 0x20) = param_3;
      *(undefined4 *)(lVar1 + 0x24) = param_4;
      *(undefined8 *)(lVar1 + 0x28) = 0;
      native_sub_4326e0((undefined8 *)(lVar1 + 0x28),0);
      native_UnityEngine_Behaviour__set_enabled_8d7b0c(lVar1,1,0);
      return lVar1;
    }
  }
                    /* WARNING: Subroutine does not return */
  native_sub_432810();
}



/* SpringPanel$$Stop @ 0x73eb24
 * SpringPanel_o* SpringPanel__Stop (UnityEngine_GameObject_o* go, const MethodInfo* method); */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* SpringPanel$$Stop
   SpringPanel_o* SpringPanel__Stop (UnityEngine_GameObject_o* go, const MethodInfo* method); */

long native_SpringPanel__Stop_73eb24(long param_1)

{
  long lVar1;
  ulong uVar2;
  
  if ((bRam000000000133f628 & 1) == 0) {
    native_sub_43273c(&Method_UnityEngine_GameObject_GetComponent_SpringPanel____12e4a30);
    native_sub_43273c(&UnityEngine_Object_TypeInfo_12d54e0);
    bRam000000000133f628 = 1;
  }
  if (param_1 != 0) {
    lVar1 = native_UnityEngine_GameObject__GetComponent_BE2_BlockSectionHeader_Custom__4a2214
                      (param_1,_Method_UnityEngine_GameObject_GetComponent_SpringPanel____12e4a30);
    if (((*(byte *)(_UnityEngine_Object_TypeInfo_12d54e0 + 0x133) >> 2 & 1) != 0) &&
       (*(int *)(_UnityEngine_Object_TypeInfo_12d54e0 + 0xe0) == 0)) {
      native_sub_4327ec(_UnityEngine_Object_TypeInfo_12d54e0);
    }
    uVar2 = native_UnityEngine_Object__op_Inequality_8d76fc(lVar1,0,0);
    if ((uVar2 & 1) != 0) {
      if (lVar1 == 0) goto LAB_0073ebf8;
      uVar2 = native_UnityEngine_Behaviour__get_enabled_8d7acc(lVar1,0);
      if ((uVar2 & 1) != 0) {
        if (*(long *)(lVar1 + 0x28) != 0) {
          native_SpringPanel_OnFinished__Invoke_54dbe0(*(long *)(lVar1 + 0x28),0);
        }
        native_UnityEngine_Behaviour__set_enabled_8d7b0c(lVar1,0,0);
      }
    }
    return lVar1;
  }
LAB_0073ebf8:
                    /* WARNING: Subroutine does not return */
  native_sub_432810();
}



/* SpringPanel$$.ctor @ 0x73ebfc
 * void SpringPanel___ctor (SpringPanel_o* __this, const MethodInfo* method); */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* SpringPanel$$.ctor
   void SpringPanel___ctor (SpringPanel_o* __this, const MethodInfo* method); */

undefined1  [16]
native_SpringPanel___ctor_73ebfc
          (undefined1 param_1 [16],undefined4 param_2,undefined4 param_3,ulong param_4)

{
  undefined4 uVar1;
  undefined1 auVar2 [16];
  
  uVar1 = native_UnityEngine_Vector3__get_zero_776668(0);
  *(undefined4 *)(param_4 + 0x18) = uVar1;
  *(undefined4 *)(param_4 + 0x1c) = param_2;
  *(undefined4 *)(param_4 + 0x20) = param_3;
  *(undefined4 *)(param_4 + 0x24) = 0x41200000;
  if ((bRam0000000001340ae0 & 1) == 0) {
    native_sub_43273c(&UnityEngine_Object_TypeInfo_12d54e0,0);
    bRam0000000001340ae0 = 1;
  }
  if (((*(byte *)(_UnityEngine_Object_TypeInfo_12d54e0 + 0x133) >> 2 & 1) != 0) &&
     (*(int *)(_UnityEngine_Object_TypeInfo_12d54e0 + 0xe0) == 0)) {
    native_sub_4327ec();
  }
  auVar2._8_8_ = 0;
  auVar2._0_8_ = param_4;
  return auVar2;
}


