/* ARM64 IL2CPP native pseudocode from Ghidra.
 * Recovered implementation, not original C# source.
 * Function boundaries follow the IL2CPP method address table. */


/* SpringPosition$$Start @ 0x73ec38
 * void SpringPosition__Start (SpringPosition_o* __this, const MethodInfo* method); */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* SpringPosition$$Start
   void SpringPosition__Start (SpringPosition_o* __this, const MethodInfo* method); */

void native_SpringPosition__Start_73ec38(long param_1)

{
  ulong *puVar1;
  char cVar2;
  bool bVar3;
  undefined8 uVar4;
  undefined8 *puVar5;
  
  if ((bRam000000000133f629 & 1) == 0) {
    native_sub_43273c(&Method_NGUITools_FindInParents_UIScrollView____12e5790);
    native_sub_43273c(&NGUITools_TypeInfo_12d53c8);
    bRam000000000133f629 = 1;
  }
  uVar4 = native_UnityEngine_Component__get_transform_8da62c(param_1,0);
  *(undefined8 *)(param_1 + 0x48) = uVar4;
  native_sub_4326e0(param_1 + 0x48);
  if (*(char *)(param_1 + 0x2a) != '\0') {
    uVar4 = native_UnityEngine_Component__get_gameObject_8da66c(param_1,0);
    if (((*(byte *)(_NGUITools_TypeInfo_12d53c8 + 0x133) >> 2 & 1) != 0) &&
       (*(int *)(_NGUITools_TypeInfo_12d53c8 + 0xe0) == 0)) {
      native_sub_4327ec(_NGUITools_TypeInfo_12d53c8);
    }
    uVar4 = native_NGUITools__FindInParents_object__4a5c04
                      (uVar4,_Method_NGUITools_FindInParents_UIScrollView____12e5790);
    puVar5 = (undefined8 *)(param_1 + 0x58);
    *puVar5 = uVar4;
    if (iRam0000000001345318 != 0) {
      puVar1 = (ulong *)(((ulong)puVar5 >> 0x12 & 0x7fff) * 8 + 0x138ecd8);
      do {
        cVar2 = '\x01';
        bVar3 = (bool)ExclusiveMonitorPass(puVar1,0x10);
        if (bVar3) {
          *puVar1 = *puVar1 | 1L << ((ulong)puVar5 >> 0xc & 0x3f);
          cVar2 = ExclusiveMonitorsStatus();
        }
      } while (cVar2 != '\0');
    }
    return;
  }
  return;
}



/* SpringPosition$$Update @ 0x73ed04
 * void SpringPosition__Update (SpringPosition_o* __this, const MethodInfo* method); */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* SpringPosition$$Update
   void SpringPosition__Update (SpringPosition_o* __this, const MethodInfo* method); */

void native_SpringPosition__Update_73ed04
               (undefined1 param_1 [16],undefined8 param_2,ulong param_3,long param_4)

{
  bool bVar1;
  ulong uVar2;
  long lVar3;
  float fVar4;
  undefined4 uVar5;
  float fVar6;
  undefined8 uVar7;
  float fVar8;
  undefined8 uVar9;
  float fVar10;
  float fVar11;
  undefined4 uVar12;
  undefined4 uVar13;
  undefined4 uVar14;
  undefined8 uStack_70;
  float fStack_68;
  
  if ((bRam000000000133f62a & 1) == 0) {
    native_sub_43273c(&NGUIMath_TypeInfo_12d53b8);
    native_sub_43273c(&UnityEngine_Object_TypeInfo_12d54e0);
    bRam000000000133f62a = 1;
  }
  fStack_68 = 0.0;
  uStack_70 = 0;
  if (*(char *)(param_4 + 0x29) == '\0') {
    uVar7 = native_UnityEngine_Time__get_deltaTime_77082c(0);
  }
  else {
    uVar7 = native_UnityEngine_Time__get_unscaledDeltaTime_770894(0);
  }
  bVar1 = *(float *)(param_4 + 0x50) == 0.0;
  if (*(char *)(param_4 + 0x28) == '\0') {
    if (bVar1) {
      if (*(long *)(param_4 + 0x48) == 0) goto LAB_0073f070;
      uVar9 = *(undefined8 *)(param_4 + 0x18);
      fVar10 = *(float *)(param_4 + 0x20);
      fVar4 = (float)native_UnityEngine_Transform__get_localPosition_7717f4
                               (*(long *)(param_4 + 0x48),0);
      fStack_68 = fVar10 - (float)param_3;
      param_3 = (ulong)(uint)fStack_68;
      uStack_70 = CONCAT44((float)((ulong)uVar9 >> 0x20) - (float)param_2,(float)uVar9 - fVar4);
      fVar4 = (float)native_UnityEngine_Vector3__get_magnitude_77684c(&uStack_70,0);
      param_2 = 0x3c23d70a;
      uVar5 = native_UnityEngine_Mathf__Min_8e4bb8(fVar4 * 0.01,0);
      *(undefined4 *)(param_4 + 0x50) = uVar5;
    }
    lVar3 = *(long *)(param_4 + 0x48);
    if (lVar3 == 0) goto LAB_0073f070;
    uVar9 = native_UnityEngine_Transform__get_localPosition_7717f4(lVar3,0);
    uVar14 = *(undefined4 *)(param_4 + 0x18);
    uVar12 = *(undefined4 *)(param_4 + 0x1c);
    uVar13 = *(undefined4 *)(param_4 + 0x20);
    uVar5 = *(undefined4 *)(param_4 + 0x24);
    if (((*(byte *)(_NGUIMath_TypeInfo_12d53b8 + 0x133) >> 2 & 1) != 0) &&
       (*(int *)(_NGUIMath_TypeInfo_12d53b8 + 0xe0) == 0)) {
      native_sub_4327ec();
    }
    native_NGUIMath__SpringLerp_806684(uVar9,param_2,param_3,uVar14,uVar12,uVar13,uVar5,uVar7,0);
    fVar4 = (float)param_2;
    fVar10 = (float)param_3;
    native_UnityEngine_Transform__set_localPosition_7718a4(lVar3,0);
    if (*(long *)(param_4 + 0x48) == 0) goto LAB_0073f070;
    fVar8 = *(float *)(param_4 + 0x50);
    uVar7 = *(undefined8 *)(param_4 + 0x18);
    fVar11 = *(float *)(param_4 + 0x20);
    fVar6 = (float)native_UnityEngine_Transform__get_localPosition_7717f4
                             (*(long *)(param_4 + 0x48),0);
    fStack_68 = fVar11 - fVar10;
    uStack_70 = CONCAT44((float)((ulong)uVar7 >> 0x20) - fVar4,(float)uVar7 - fVar6);
    fVar4 = (float)native_UnityEngine_Vector3__get_sqrMagnitude_776910(&uStack_70,0);
    if (fVar4 <= fVar8 * fVar8) {
      if (*(long *)(param_4 + 0x48) == 0) goto LAB_0073f070;
      native_UnityEngine_Transform__set_localPosition_7718a4
                (*(undefined4 *)(param_4 + 0x18),*(undefined4 *)(param_4 + 0x1c),
                 *(undefined4 *)(param_4 + 0x20),*(long *)(param_4 + 0x48),0);
      goto LAB_0073eff0;
    }
  }
  else {
    if (bVar1) {
      if (*(long *)(param_4 + 0x48) == 0) goto LAB_0073f070;
      uVar9 = *(undefined8 *)(param_4 + 0x18);
      fVar10 = *(float *)(param_4 + 0x20);
      fVar4 = (float)native_UnityEngine_Transform__get_position_77169c(*(long *)(param_4 + 0x48),0);
      fStack_68 = fVar10 - (float)param_3;
      param_3 = (ulong)(uint)fStack_68;
      uStack_70 = CONCAT44((float)((ulong)uVar9 >> 0x20) - (float)param_2,(float)uVar9 - fVar4);
      fVar4 = (float)native_UnityEngine_Vector3__get_magnitude_77684c(&uStack_70,0);
      param_2 = 0x3c23d70a;
      uVar5 = native_UnityEngine_Mathf__Min_8e4bb8(fVar4 * 0.01,0);
      *(undefined4 *)(param_4 + 0x50) = uVar5;
    }
    lVar3 = *(long *)(param_4 + 0x48);
    if (lVar3 == 0) goto LAB_0073f070;
    uVar9 = native_UnityEngine_Transform__get_position_77169c(lVar3,0);
    uVar14 = *(undefined4 *)(param_4 + 0x18);
    uVar12 = *(undefined4 *)(param_4 + 0x1c);
    uVar13 = *(undefined4 *)(param_4 + 0x20);
    uVar5 = *(undefined4 *)(param_4 + 0x24);
    if (((*(byte *)(_NGUIMath_TypeInfo_12d53b8 + 0x133) >> 2 & 1) != 0) &&
       (*(int *)(_NGUIMath_TypeInfo_12d53b8 + 0xe0) == 0)) {
      native_sub_4327ec();
    }
    native_NGUIMath__SpringLerp_806684(uVar9,param_2,param_3,uVar14,uVar12,uVar13,uVar5,uVar7,0);
    fVar4 = (float)param_2;
    fVar10 = (float)param_3;
    native_UnityEngine_Transform__set_position_77174c(lVar3,0);
    if (*(long *)(param_4 + 0x48) == 0) goto LAB_0073f070;
    fVar8 = *(float *)(param_4 + 0x50);
    uVar7 = *(undefined8 *)(param_4 + 0x18);
    fVar11 = *(float *)(param_4 + 0x20);
    fVar6 = (float)native_UnityEngine_Transform__get_position_77169c(*(long *)(param_4 + 0x48),0);
    fStack_68 = fVar11 - fVar10;
    uStack_70 = CONCAT44((float)((ulong)uVar7 >> 0x20) - fVar4,(float)uVar7 - fVar6);
    fVar4 = (float)native_UnityEngine_Vector3__get_sqrMagnitude_776910(&uStack_70,0);
    if (fVar4 <= fVar8 * fVar8) {
      if (*(long *)(param_4 + 0x48) == 0) goto LAB_0073f070;
      native_UnityEngine_Transform__set_position_77174c
                (*(undefined4 *)(param_4 + 0x18),*(undefined4 *)(param_4 + 0x1c),
                 *(undefined4 *)(param_4 + 0x20),*(long *)(param_4 + 0x48),0);
LAB_0073eff0:
      native_SpringPosition__NotifyListeners_73f074(param_4);
      native_UnityEngine_Behaviour__set_enabled_8d7b0c(param_4,0,0);
    }
  }
  uVar7 = *(undefined8 *)(param_4 + 0x58);
  if (((*(byte *)(_UnityEngine_Object_TypeInfo_12d54e0 + 0x133) >> 2 & 1) != 0) &&
     (*(int *)(_UnityEngine_Object_TypeInfo_12d54e0 + 0xe0) == 0)) {
    native_sub_4327ec();
  }
  uVar2 = native_UnityEngine_Object__op_Inequality_8d76fc(uVar7,0,0);
  if ((uVar2 & 1) != 0) {
    if (*(long *)(param_4 + 0x58) == 0) {
LAB_0073f070:
                    /* WARNING: Subroutine does not return */
      native_sub_432810();
    }
    native_UIScrollView__QueueUpdateScrollbars_c3268c(*(long *)(param_4 + 0x58),0);
  }
  return;
}



/* SpringPosition$$Finish @ 0x73f168
 * void SpringPosition__Finish (SpringPosition_o* __this, const MethodInfo* method); */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* SpringPosition$$Finish
   void SpringPosition__Finish (SpringPosition_o* __this, const MethodInfo* method); */

void native_SpringPosition__Finish_73f168(long param_1)

{
  char cVar1;
  ulong uVar2;
  long lVar3;
  undefined8 uVar4;
  
  if ((bRam000000000133f62b & 1) == 0) {
    native_sub_43273c(&UnityEngine_Object_TypeInfo_12d54e0);
    bRam000000000133f62b = 1;
  }
  uVar2 = native_UnityEngine_Behaviour__get_enabled_8d7acc(param_1,0);
  if ((uVar2 & 1) == 0) {
    return;
  }
  cVar1 = *(char *)(param_1 + 0x28);
  lVar3 = native_UnityEngine_Component__get_transform_8da62c(param_1,0);
  if (lVar3 != 0) {
    if (cVar1 == '\0') {
      native_UnityEngine_Transform__set_localPosition_7718a4
                (*(undefined4 *)(param_1 + 0x18),*(undefined4 *)(param_1 + 0x1c),
                 *(undefined4 *)(param_1 + 0x20),lVar3,0);
    }
    else {
      native_UnityEngine_Transform__set_position_77174c();
    }
    native_SpringPosition__NotifyListeners_73f074(param_1);
    native_UnityEngine_Behaviour__set_enabled_8d7b0c(param_1,0,0);
    uVar4 = *(undefined8 *)(param_1 + 0x58);
    if (((*(byte *)(_UnityEngine_Object_TypeInfo_12d54e0 + 0x133) >> 2 & 1) != 0) &&
       (*(int *)(_UnityEngine_Object_TypeInfo_12d54e0 + 0xe0) == 0)) {
      native_sub_4327ec();
    }
    uVar2 = native_UnityEngine_Object__op_Inequality_8d76fc(uVar4,0,0);
    if ((uVar2 & 1) == 0) {
      return;
    }
    if (*(long *)(param_1 + 0x58) != 0) {
      *(undefined1 *)(*(long *)(param_1 + 0x58) + 0xfa) = 1;
      return;
    }
  }
                    /* WARNING: Subroutine does not return */
  native_sub_432810();
}



/* SpringPosition$$NotifyListeners @ 0x73f074
 * void SpringPosition__NotifyListeners (SpringPosition_o* __this, const MethodInfo* method); */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* SpringPosition$$NotifyListeners
   void SpringPosition__NotifyListeners (SpringPosition_o* __this, const MethodInfo* method); */

void native_SpringPosition__NotifyListeners_73f074(long param_1)

{
  ulong *puVar1;
  char cVar2;
  bool bVar3;
  long *plVar4;
  ulong uVar5;
  undefined8 *puVar6;
  undefined8 uVar7;
  
  if ((bRam000000000133f62c & 1) == 0) {
    native_sub_43273c(&UnityEngine_Object_TypeInfo_12d54e0);
    native_sub_43273c(&SpringPosition_TypeInfo_12d5e68);
    bRam000000000133f62c = 1;
  }
  plVar4 = *(long **)(_SpringPosition_TypeInfo_12d5e68 + 0xb8);
  *plVar4 = param_1;
  native_sub_4326e0(plVar4,param_1);
  if (*(long *)(param_1 + 0x30) != 0) {
    native_SpringPosition_OnFinished__Invoke_54de90(*(long *)(param_1 + 0x30),0);
  }
  uVar7 = *(undefined8 *)(param_1 + 0x38);
  if (((*(byte *)(_UnityEngine_Object_TypeInfo_12d54e0 + 0x133) >> 2 & 1) != 0) &&
     (*(int *)(_UnityEngine_Object_TypeInfo_12d54e0 + 0xe0) == 0)) {
    native_sub_4327ec();
  }
  uVar5 = native_UnityEngine_Object__op_Inequality_8d76fc(uVar7,0,0);
  if (((uVar5 & 1) != 0) &&
     (uVar5 = native_System_String__IsNullOrEmpty_b09430(*(undefined8 *)(param_1 + 0x40),0),
     (uVar5 & 1) == 0)) {
    if (*(long *)(param_1 + 0x38) == 0) {
                    /* WARNING: Subroutine does not return */
      native_sub_432810();
    }
    native_UnityEngine_GameObject__SendMessage_8de4c0
              (*(long *)(param_1 + 0x38),*(undefined8 *)(param_1 + 0x40),param_1,1,0);
  }
  puVar6 = *(undefined8 **)(_SpringPosition_TypeInfo_12d5e68 + 0xb8);
  *puVar6 = 0;
  if (iRam0000000001345318 != 0) {
    puVar1 = (ulong *)(((ulong)puVar6 >> 0x12 & 0x7fff) * 8 + 0x138ecd8);
    do {
      cVar2 = '\x01';
      bVar3 = (bool)ExclusiveMonitorPass(puVar1,0x10);
      if (bVar3) {
        *puVar1 = *puVar1 | 1L << ((ulong)puVar6 >> 0xc & 0x3f);
        cVar2 = ExclusiveMonitorsStatus();
      }
    } while (cVar2 != '\0');
  }
  return;
}



/* SpringPosition$$Begin @ 0x73f250
 * SpringPosition_o* SpringPosition__Begin (UnityEngine_GameObject_o* go, UnityEngine_Vector3_o pos, float strength, const MethodInfo* method); */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* SpringPosition$$Begin
   SpringPosition_o* SpringPosition__Begin (UnityEngine_GameObject_o* go, UnityEngine_Vector3_o pos,
   float strength, const MethodInfo* method); */

long native_SpringPosition__Begin_73f250
               (undefined4 param_1,undefined4 param_2,undefined4 param_3,undefined4 param_4,
               long param_5)

{
  long lVar1;
  ulong uVar2;
  
  if ((bRam000000000133f62d & 1) == 0) {
    native_sub_43273c(&Method_UnityEngine_GameObject_AddComponent_SpringPosition____12e4870);
    native_sub_43273c(&Method_UnityEngine_GameObject_GetComponent_SpringPosition____12e4a38);
    native_sub_43273c(&UnityEngine_Object_TypeInfo_12d54e0);
    bRam000000000133f62d = 1;
  }
  if (param_5 != 0) {
    lVar1 = native_UnityEngine_GameObject__GetComponent_BE2_BlockSectionHeader_Custom__4a2214
                      (param_5,_Method_UnityEngine_GameObject_GetComponent_SpringPosition____12e4a38
                      );
    if (((*(byte *)(_UnityEngine_Object_TypeInfo_12d54e0 + 0x133) >> 2 & 1) != 0) &&
       (*(int *)(_UnityEngine_Object_TypeInfo_12d54e0 + 0xe0) == 0)) {
      native_sub_4327ec(_UnityEngine_Object_TypeInfo_12d54e0);
    }
    uVar2 = native_UnityEngine_Object__op_Equality_8e9a3c(lVar1,0,0);
    if ((uVar2 & 1) != 0) {
      lVar1 = native_UnityEngine_GameObject__AddComponent_ActiveAnimation__4a2118
                        (param_5,
                         _Method_UnityEngine_GameObject_AddComponent_SpringPosition____12e4870);
    }
    if (lVar1 != 0) {
      *(undefined4 *)(lVar1 + 0x18) = param_1;
      *(undefined4 *)(lVar1 + 0x1c) = param_2;
      *(undefined4 *)(lVar1 + 0x20) = param_3;
      *(undefined4 *)(lVar1 + 0x24) = param_4;
      *(undefined8 *)(lVar1 + 0x30) = 0;
      native_sub_4326e0((undefined8 *)(lVar1 + 0x30),0);
      uVar2 = native_UnityEngine_Behaviour__get_enabled_8d7acc(lVar1,0);
      if ((uVar2 & 1) == 0) {
        native_UnityEngine_Behaviour__set_enabled_8d7b0c(lVar1,1,0);
      }
      return lVar1;
    }
  }
                    /* WARNING: Subroutine does not return */
  native_sub_432810();
}



/* SpringPosition$$.ctor @ 0x73f374
 * void SpringPosition___ctor (SpringPosition_o* __this, const MethodInfo* method); */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* SpringPosition$$.ctor
   void SpringPosition___ctor (SpringPosition_o* __this, const MethodInfo* method); */

undefined1  [16]
native_SpringPosition___ctor_73f374
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


