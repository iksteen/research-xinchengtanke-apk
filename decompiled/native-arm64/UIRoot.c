/* ARM64 IL2CPP native pseudocode from Ghidra.
 * Recovered implementation, not original C# source.
 * Function boundaries follow the IL2CPP method address table. */


/* UIRoot$$get_constraint @ 0xc2f554
 * int32_t UIRoot__get_constraint (UIRoot_o* __this, const MethodInfo* method); */

/* UIRoot$$get_constraint
   int32_t UIRoot__get_constraint (UIRoot_o* __this, const MethodInfo* method); */

undefined4 native_UIRoot__get_constraint_c2f554(long param_1)

{
  bool bVar1;
  undefined4 uVar2;
  
  bVar1 = *(char *)(param_1 + 0x2d) == '\0';
  if (*(char *)(param_1 + 0x2c) != '\0') {
    uVar2 = 0;
    if (bVar1) {
      uVar2 = 2;
    }
    return uVar2;
  }
  uVar2 = 3;
  if (bVar1) {
    uVar2 = 1;
  }
  return uVar2;
}



/* UIRoot$$get_activeScaling @ 0xc2f57c
 * int32_t UIRoot__get_activeScaling (UIRoot_o* __this, const MethodInfo* method); */

/* UIRoot$$get_activeScaling
   int32_t UIRoot__get_activeScaling (UIRoot_o* __this, const MethodInfo* method); */

int native_UIRoot__get_activeScaling_c2f57c(long param_1)

{
  int iVar1;
  
  iVar1 = *(int *)(param_1 + 0x18);
  if (iVar1 == 2) {
    iVar1 = 1;
  }
  return iVar1;
}



/* UIRoot$$get_activeHeight @ 0xc2f58c
 * int32_t UIRoot__get_activeHeight (UIRoot_o* __this, const MethodInfo* method); */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* UIRoot$$get_activeHeight
   int32_t UIRoot__get_activeHeight (UIRoot_o* __this, const MethodInfo* method); */

int native_UIRoot__get_activeHeight_c2f58c(undefined1 param_1 [16],float param_2,long param_3)

{
  bool bVar1;
  bool bVar2;
  bool bVar3;
  int iVar4;
  uint uVar5;
  int iVar6;
  double unaff_x19;
  float fVar7;
  double dVar8;
  float fVar9;
  float fVar10;
  double dVar11;
  
  if ((bRam000000000134271d & 1) == 0) {
    native_sub_43273c(&NGUIMath_TypeInfo_12d53b8);
    native_sub_43273c(&NGUITools_TypeInfo_12d53c8);
    bRam000000000134271d = 1;
  }
  if (*(int *)(param_3 + 0x18) == 0) {
    if (((*(byte *)(_NGUITools_TypeInfo_12d53c8 + 0x133) >> 2 & 1) != 0) &&
       (*(int *)(_NGUITools_TypeInfo_12d53c8 + 0xe0) == 0)) {
      native_sub_4327ec();
    }
    fVar7 = (float)native_NGUITools__get_screenSize_7338a0(0);
    fVar10 = (float)*(int *)(param_3 + 0x24);
    fVar9 = fVar7 / param_2;
    if ((param_2 < fVar10) || (fVar10 = (float)*(int *)(param_3 + 0x28), fVar10 < param_2)) {
      fVar7 = fVar9 * fVar10;
      param_2 = fVar10;
    }
    bVar1 = false;
    bVar2 = true;
    bVar3 = false;
    if (*(char *)(param_3 + 0x2f) != '\0') {
      bVar1 = false;
      bVar2 = false;
      bVar3 = true;
      if (!NAN(param_2) && !NAN(fVar7)) {
        bVar1 = param_2 < fVar7;
        bVar2 = param_2 == fVar7;
        bVar3 = false;
      }
    }
    fVar7 = param_2 / fVar9;
    if (bVar2 || bVar1 != bVar3) {
      fVar7 = param_2;
    }
    iVar6 = native_UnityEngine_Mathf__RoundToInt_8e50f0(fVar7,0);
    if (*(char *)(param_3 + 0x2e) == '\0') {
      return iVar6;
    }
    if (((*(byte *)(_NGUIMath_TypeInfo_12d53b8 + 0x133) >> 2 & 1) != 0) &&
       (*(int *)(_NGUIMath_TypeInfo_12d53b8 + 0xe0) == 0)) {
      native_sub_4327ec();
    }
    fVar7 = (float)native_UnityEngine_Screen__get_dpi_76a64c(0);
    iVar4 = native_UnityEngine_Application__get_platform_8d6250(0);
    if (fVar7 == 0.0) {
      if ((iVar4 == 0xb) || (iVar4 == 8)) {
        fVar7 = 160.0;
      }
      else {
        fVar7 = 96.0;
      }
    }
    uVar5 = native_UnityEngine_Mathf__RoundToInt_8e50f0((96.0 / fVar7) * (float)iVar6,0);
    return (uVar5 & 1) + uVar5;
  }
  if (*(char *)(param_3 + 0x2c) == '\0') {
    if (*(char *)(param_3 + 0x2d) != '\0') {
      return *(int *)(param_3 + 0x20);
    }
    iVar6 = 1;
  }
  else {
    iVar6 = 0;
    if (*(char *)(param_3 + 0x2d) == '\0') {
      iVar6 = 2;
    }
  }
  if (((*(byte *)(_NGUITools_TypeInfo_12d53c8 + 0x133) >> 2 & 1) != 0) &&
     (*(int *)(_NGUITools_TypeInfo_12d53c8 + 0xe0) == 0)) {
    native_sub_4327ec();
  }
  fVar7 = (float)native_NGUITools__get_screenSize_7338a0(0);
  iVar4 = *(int *)(param_3 + 0x20);
  fVar7 = fVar7 / param_2;
  fVar9 = (float)*(int *)(param_3 + 0x1c) / (float)iVar4;
  if (iVar6 == 0) {
    if (fVar9 <= fVar7) {
      return iVar4;
    }
  }
  else if (iVar6 == 1) {
    if (fVar7 <= fVar9) {
      return iVar4;
    }
  }
  else if (iVar6 != 2) {
    return iVar4;
  }
  fVar7 = (float)*(int *)(param_3 + 0x1c) / fVar7;
  if ((bRam0000000001340eb1 & 1) == 0) {
    native_sub_43273c(&System_Math_TypeInfo_12d51c0);
    bRam0000000001340eb1 = 1;
  }
  if (((*(byte *)(_System_Math_TypeInfo_12d51c0 + 0x133) >> 2 & 1) != 0) &&
     (*(int *)(_System_Math_TypeInfo_12d51c0 + 0xe0) == 0)) {
    native_sub_4327ec();
  }
  dVar11 = (double)fVar7;
  dVar8 = (double)func_0x002c9600(dVar11,&stack0xffffffffffffffe8);
  if (0.0 <= fVar7) {
    if (dVar8 != 0.5) {
      unaff_x19 = (double)(long)(dVar11 + 0.5);
      goto code_r0x008e51b0;
    }
    dVar8 = 1.0;
  }
  else {
    if (dVar8 != -0.5) {
      unaff_x19 = (double)(long)(dVar11 + -0.5);
      goto code_r0x008e51b0;
    }
    dVar8 = -1.0;
  }
  if (((long)unaff_x19 & 1U) != 0) {
    unaff_x19 = unaff_x19 + dVar8;
  }
code_r0x008e51b0:
  dVar8 = -unaff_x19;
  if (unaff_x19 != INFINITY) {
    dVar8 = unaff_x19;
  }
  return (int)dVar8;
}



/* UIRoot$$get_pixelSizeAdjustment @ 0xc2f740
 * float UIRoot__get_pixelSizeAdjustment (UIRoot_o* __this, const MethodInfo* method); */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* UIRoot$$get_pixelSizeAdjustment
   float UIRoot__get_pixelSizeAdjustment (UIRoot_o* __this, const MethodInfo* method); */

float native_UIRoot__get_pixelSizeAdjustment_c2f740
                (undefined1 param_1 [16],undefined1 param_2 [16],long param_3)

{
  int iVar1;
  int iVar2;
  undefined4 uVar3;
  undefined4 uVar4;
  
  uVar4 = param_2._4_4_;
  uVar3 = param_2._0_4_;
  if ((bRam000000000134271e & 1) == 0) {
    native_sub_43273c(&NGUITools_TypeInfo_12d53c8);
    bRam000000000134271e = 1;
  }
  if (((*(byte *)(_NGUITools_TypeInfo_12d53c8 + 0x133) >> 2 & 1) != 0) &&
     (*(int *)(_NGUITools_TypeInfo_12d53c8 + 0xe0) == 0)) {
    native_sub_4327ec();
  }
  native_NGUITools__get_screenSize_7338a0(0);
  iVar1 = native_UnityEngine_Mathf__RoundToInt_8e50f0(CONCAT44(uVar4,uVar3),0);
  if (iVar1 != -1) {
    iVar1 = native_UnityEngine_Mathf__Max_8e4cd0(2,iVar1,0);
    if (*(int *)(param_3 + 0x18) - 1U < 2) {
      iVar2 = native_UIRoot__get_activeHeight_c2f58c(param_3);
    }
    else {
      iVar2 = *(int *)(param_3 + 0x24);
      if ((iVar2 <= iVar1) && (iVar2 = *(int *)(param_3 + 0x28), iVar1 <= iVar2)) {
        return 1.0;
      }
    }
    return (float)iVar2 / (float)iVar1;
  }
  return 1.0;
}



/* UIRoot$$GetPixelSizeAdjustment @ 0xc2b094
 * float UIRoot__GetPixelSizeAdjustment (UnityEngine_GameObject_o* go, const MethodInfo* method); */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* UIRoot$$GetPixelSizeAdjustment
   float UIRoot__GetPixelSizeAdjustment (UnityEngine_GameObject_o* go, const MethodInfo* method); */

float native_UIRoot__GetPixelSizeAdjustment_c2b094
                (undefined1 param_1 [16],undefined1 param_2 [16],undefined8 param_3)

{
  int iVar1;
  int iVar2;
  long lVar3;
  ulong uVar4;
  undefined4 uVar5;
  undefined4 uVar6;
  
  uVar6 = param_2._4_4_;
  uVar5 = param_2._0_4_;
  if ((bRam000000000134271f & 1) == 0) {
    native_sub_43273c(&Method_NGUITools_FindInParents_UIRoot____12e5780);
    native_sub_43273c(&NGUITools_TypeInfo_12d53c8);
    native_sub_43273c(&UnityEngine_Object_TypeInfo_12d54e0);
    bRam000000000134271f = 1;
  }
  if (((*(byte *)(_NGUITools_TypeInfo_12d53c8 + 0x133) >> 2 & 1) != 0) &&
     (*(int *)(_NGUITools_TypeInfo_12d53c8 + 0xe0) == 0)) {
    native_sub_4327ec();
  }
  lVar3 = native_NGUITools__FindInParents_object__4a5c04
                    (param_3,_Method_NGUITools_FindInParents_UIRoot____12e5780);
  if (((*(byte *)(_UnityEngine_Object_TypeInfo_12d54e0 + 0x133) >> 2 & 1) != 0) &&
     (*(int *)(_UnityEngine_Object_TypeInfo_12d54e0 + 0xe0) == 0)) {
    native_sub_4327ec(_UnityEngine_Object_TypeInfo_12d54e0);
  }
  uVar4 = native_UnityEngine_Object__op_Inequality_8d76fc(lVar3,0,0);
  if ((uVar4 & 1) == 0) {
    return 1.0;
  }
  if (lVar3 == 0) {
                    /* WARNING: Subroutine does not return */
    native_sub_432810();
  }
  if ((bRam000000000134271e & 1) == 0) {
    native_sub_43273c(&NGUITools_TypeInfo_12d53c8);
    bRam000000000134271e = 1;
  }
  if (((*(byte *)(_NGUITools_TypeInfo_12d53c8 + 0x133) >> 2 & 1) != 0) &&
     (*(int *)(_NGUITools_TypeInfo_12d53c8 + 0xe0) == 0)) {
    native_sub_4327ec();
  }
  native_NGUITools__get_screenSize_7338a0(0);
  iVar1 = native_UnityEngine_Mathf__RoundToInt_8e50f0(CONCAT44(uVar6,uVar5),0);
  if (iVar1 != -1) {
    iVar1 = native_UnityEngine_Mathf__Max_8e4cd0(2,iVar1,0);
    if (*(int *)(lVar3 + 0x18) - 1U < 2) {
      iVar2 = native_UIRoot__get_activeHeight_c2f58c(lVar3);
    }
    else {
      iVar2 = *(int *)(lVar3 + 0x24);
      if ((iVar2 <= iVar1) && (iVar2 = *(int *)(lVar3 + 0x28), iVar1 <= iVar2)) {
        return 1.0;
      }
    }
    return (float)iVar2 / (float)iVar1;
  }
  return 1.0;
}



/* UIRoot$$GetPixelSizeAdjustment @ 0xc2f7d0
 * float UIRoot__GetPixelSizeAdjustment (UIRoot_o* __this, int32_t height, const MethodInfo* method); */

/* UIRoot$$GetPixelSizeAdjustment
   float UIRoot__GetPixelSizeAdjustment (UIRoot_o* __this, int32_t height, const MethodInfo*
   method); */

float native_UIRoot__GetPixelSizeAdjustment_c2f7d0(long param_1,undefined8 param_2)

{
  int iVar1;
  int iVar2;
  
  iVar1 = native_UnityEngine_Mathf__Max_8e4cd0(2,param_2,0);
  if (*(int *)(param_1 + 0x18) - 1U < 2) {
    iVar2 = native_UIRoot__get_activeHeight_c2f58c(param_1);
  }
  else {
    iVar2 = *(int *)(param_1 + 0x24);
    if ((iVar2 <= iVar1) && (iVar2 = *(int *)(param_1 + 0x28), iVar1 <= iVar2)) {
      return 1.0;
    }
  }
  return (float)iVar2 / (float)iVar1;
}



/* UIRoot$$Awake @ 0xc2f848
 * void UIRoot__Awake (UIRoot_o* __this, const MethodInfo* method); */

/* UIRoot$$Awake
   void UIRoot__Awake (UIRoot_o* __this, const MethodInfo* method); */

void native_UIRoot__Awake_c2f848(long param_1)

{
  ulong *puVar1;
  char cVar2;
  bool bVar3;
  undefined8 uVar4;
  
  uVar4 = native_UnityEngine_Component__get_transform_8da62c(param_1,0);
  *(undefined8 *)(param_1 + 0x30) = uVar4;
  if (iRam0000000001345318 != 0) {
    puVar1 = (ulong *)((param_1 + 0x30U >> 0x12 & 0x7fff) * 8 + 0x138ecd8);
    do {
      cVar2 = '\x01';
      bVar3 = (bool)ExclusiveMonitorPass(puVar1,0x10);
      if (bVar3) {
        *puVar1 = *puVar1 | 1L << (param_1 + 0x30U >> 0xc & 0x3f);
        cVar2 = ExclusiveMonitorsStatus();
      }
    } while (cVar2 != '\0');
  }
  return;
}



/* UIRoot$$OnEnable @ 0xc2f878
 * void UIRoot__OnEnable (UIRoot_o* __this, const MethodInfo* method); */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* UIRoot$$OnEnable
   void UIRoot__OnEnable (UIRoot_o* __this, const MethodInfo* method); */

void native_UIRoot__OnEnable_c2f878(undefined8 param_1)

{
  long lVar1;
  undefined8 *puVar2;
  undefined8 uVar3;
  uint uVar4;
  long lVar5;
  
  if ((bRam0000000001342720 & 1) == 0) {
    native_sub_43273c(&Method_System_Collections_Generic_List_UIRoot__Add___12dd380);
    native_sub_43273c(&UIRoot_TypeInfo_12d64a8);
    bRam0000000001342720 = 1;
  }
  if (((*(byte *)(_UIRoot_TypeInfo_12d64a8 + 0x133) >> 2 & 1) != 0) &&
     (*(int *)(_UIRoot_TypeInfo_12d64a8 + 0xe0) == 0)) {
    native_sub_4327ec();
  }
  lVar1 = **(long **)(_UIRoot_TypeInfo_12d64a8 + 0xb8);
  if (lVar1 == 0) {
                    /* WARNING: Subroutine does not return */
    native_sub_432810();
  }
  lVar5 = *(long *)(lVar1 + 0x10);
  if (lVar5 != 0) {
    uVar4 = *(uint *)(lVar1 + 0x18);
    if (uVar4 == *(uint *)(lVar5 + 0x18)) {
      (*(code *)**(undefined8 **)
                  (*(long *)(*(long *)(_Method_System_Collections_Generic_List_UIRoot__Add___12dd380
                                      + 0x18) + 0xc0) + 0x60))(lVar1,uVar4 + 1);
      uVar4 = *(uint *)(lVar1 + 0x18);
      lVar5 = *(long *)(lVar1 + 0x10);
      *(uint *)(lVar1 + 0x18) = uVar4 + 1;
      if (lVar5 == 0) goto code_r0x00d40c5c;
    }
    else {
      *(uint *)(lVar1 + 0x18) = uVar4 + 1;
    }
    if (uVar4 < *(uint *)(lVar5 + 0x18)) {
      puVar2 = (undefined8 *)(lVar5 + (long)(int)uVar4 * 8 + 0x20);
      *puVar2 = param_1;
      native_sub_4326e0(puVar2,param_1);
      *(int *)(lVar1 + 0x1c) = *(int *)(lVar1 + 0x1c) + 1;
      return;
    }
    uVar3 = native_sub_43283c();
                    /* WARNING: Subroutine does not return */
    native_sub_4327dc(uVar3,0);
  }
code_r0x00d40c5c:
                    /* WARNING: Subroutine does not return */
  native_sub_432810();
}



/* UIRoot$$OnDisable @ 0xc2f904
 * void UIRoot__OnDisable (UIRoot_o* __this, const MethodInfo* method); */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* UIRoot$$OnDisable
   void UIRoot__OnDisable (UIRoot_o* __this, const MethodInfo* method); */

bool native_UIRoot__OnDisable_c2f904(undefined8 param_1)

{
  long lVar1;
  int iVar2;
  long lVar3;
  
  if ((bRam0000000001342721 & 1) == 0) {
    native_sub_43273c(&Method_System_Collections_Generic_List_UIRoot__Remove___12dd390);
    native_sub_43273c(&UIRoot_TypeInfo_12d64a8);
    bRam0000000001342721 = 1;
  }
  if (((*(byte *)(_UIRoot_TypeInfo_12d64a8 + 0x133) >> 2 & 1) != 0) &&
     (*(int *)(_UIRoot_TypeInfo_12d64a8 + 0xe0) == 0)) {
    native_sub_4327ec();
  }
  lVar1 = _Method_System_Collections_Generic_List_UIRoot__Remove___12dd390;
  lVar3 = **(long **)(_UIRoot_TypeInfo_12d64a8 + 0xb8);
  if (lVar3 == 0) {
                    /* WARNING: Subroutine does not return */
    native_sub_432810();
  }
  if (lVar3 == 0) {
                    /* WARNING: Subroutine does not return */
    native_sub_432810(0,param_1);
  }
  iVar2 = (*(code *)**(undefined8 **)
                      (*(long *)(*(long *)(
                                          _Method_System_Collections_Generic_List_UIRoot__Remove___12dd390
                                          + 0x18) + 0xc0) + 0xd8))();
  if (-1 < iVar2) {
    (*(code *)**(undefined8 **)(*(long *)(*(long *)(lVar1 + 0x18) + 0xc0) + 0xe8))(lVar3,iVar2);
  }
  return -1 < iVar2;
}



/* UIRoot$$Start @ 0xc2f990
 * void UIRoot__Start (UIRoot_o* __this, const MethodInfo* method); */

/* WARNING: Removing unreachable block (ram,0x008dac98) */
/* WARNING: Removing unreachable block (ram,0x008dacc0) */
/* WARNING: Removing unreachable block (ram,0x008dacd4) */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* UIRoot$$Start
   void UIRoot__Start (UIRoot_o* __this, const MethodInfo* method); */

void native_UIRoot__Start_c2f990
               (undefined1 param_1 [16],undefined1 param_2 [16],float param_3,long param_4)

{
  int iVar1;
  long lVar2;
  ulong uVar3;
  long lVar4;
  undefined8 uVar5;
  float fVar6;
  float fVar7;
  float fVar8;
  
  if ((bRam0000000001342722 & 1) == 0) {
    native_sub_43273c(&Method_UnityEngine_Component_GetComponentInChildren_UIOrthoCamera____12e2cc8)
    ;
    native_sub_43273c(&UnityEngine_Debug_TypeInfo_12d4338);
    native_sub_43273c(&Method_UnityEngine_GameObject_GetComponent_Camera____12e4958);
    native_sub_43273c(&UnityEngine_Object_TypeInfo_12d54e0);
    native_sub_43273c(&
                      StringLiteral_UIRoot_should_not_be_active_at_the_same_time_as_UIOrthoCamera__Disabling_UIOrthoCamera__12f2950
                     );
    bRam0000000001342722 = 1;
  }
  lVar2 = native_UnityEngine_Component__GetComponentInChildren_Animation__49db98
                    (param_4,
                     _Method_UnityEngine_Component_GetComponentInChildren_UIOrthoCamera____12e2cc8);
  if (((*(byte *)(_UnityEngine_Object_TypeInfo_12d54e0 + 0x133) >> 2 & 1) != 0) &&
     (*(int *)(_UnityEngine_Object_TypeInfo_12d54e0 + 0xe0) == 0)) {
    native_sub_4327ec(_UnityEngine_Object_TypeInfo_12d54e0);
  }
  uVar3 = native_UnityEngine_Object__op_Inequality_8d76fc(lVar2,0,0);
  if ((uVar3 & 1) != 0) {
    if (((*(byte *)(_UnityEngine_Debug_TypeInfo_12d4338 + 0x133) >> 2 & 1) != 0) &&
       (*(int *)(_UnityEngine_Debug_TypeInfo_12d4338 + 0xe0) == 0)) {
      native_sub_4327ec();
    }
    native_UnityEngine_Debug__LogWarning_8dcbc8
              (_StringLiteral_UIRoot_should_not_be_active_at_the_same_time_as_UIOrthoCamera__Disabling_UIOrthoCamera__12f2950
               ,lVar2,0);
    if ((lVar2 != 0) &&
       (lVar4 = native_UnityEngine_Component__get_gameObject_8da66c(lVar2,0), lVar4 != 0)) {
      lVar4 = native_UnityEngine_GameObject__GetComponent_BE2_BlockSectionHeader_Custom__4a2214
                        (lVar4,_Method_UnityEngine_GameObject_GetComponent_Camera____12e4958);
      native_UnityEngine_Behaviour__set_enabled_8d7b0c(lVar2,0,0);
      if (((*(byte *)(_UnityEngine_Object_TypeInfo_12d54e0 + 0x133) >> 2 & 1) != 0) &&
         (*(int *)(_UnityEngine_Object_TypeInfo_12d54e0 + 0xe0) == 0)) {
        native_sub_4327ec();
      }
      uVar3 = native_UnityEngine_Object__op_Inequality_8d76fc(lVar4,0,0);
      if ((uVar3 & 1) == 0) {
        return;
      }
      if (lVar4 != 0) {
        if (pcRam00000000013409a8 == (code *)0x0) {
          pcRam00000000013409a8 = (code *)native_sub_4326f0(&UNK_00e2c8f4);
        }
                    /* WARNING: Could not recover jumptable at 0x008d86bc. Too many branches */
                    /* WARNING: Treating indirect jump as call */
        (*pcRam00000000013409a8)(0x3f800000,lVar4);
        return;
      }
    }
                    /* WARNING: Subroutine does not return */
    native_sub_432810();
  }
  if ((bRam0000000001342723 & 1) == 0) {
    native_sub_43273c(&UnityEngine_Object_TypeInfo_12d54e0);
    native_sub_43273c(&StringLiteral_UpdateAnchors_12f2d00);
    bRam0000000001342723 = 1;
  }
  uVar5 = *(undefined8 *)(param_4 + 0x30);
  if (((*(byte *)(_UnityEngine_Object_TypeInfo_12d54e0 + 0x133) >> 2 & 1) != 0) &&
     (*(int *)(_UnityEngine_Object_TypeInfo_12d54e0 + 0xe0) == 0)) {
    native_sub_4327ec();
  }
  uVar3 = native_UnityEngine_Object__op_Inequality_8d76fc(uVar5,0,0);
  if (((uVar3 & 1) != 0) && (iVar1 = native_UIRoot__get_activeHeight_c2f58c(param_4), 0 < iVar1)) {
    if (*(long *)(param_4 + 0x30) == 0) {
LAB_00c2fc68:
                    /* WARNING: Subroutine does not return */
      native_sub_432810();
    }
    fVar7 = 2.0;
    fVar8 = 2.0 / (float)iVar1;
    fVar6 = (float)native_UnityEngine_Transform__get_localScale_771d80(*(long *)(param_4 + 0x30),0);
    if (((1.4013e-45 < ABS(fVar6 - fVar8)) || (1.4013e-45 < ABS(fVar7 - fVar8))) ||
       (1.4013e-45 < ABS(param_3 - fVar8))) {
      if (*(long *)(param_4 + 0x30) == 0) goto LAB_00c2fc68;
      native_UnityEngine_Transform__set_localScale_771e30
                (fVar8,fVar8,fVar8,*(long *)(param_4 + 0x30),0);
    }
  }
  return;
}



/* UIRoot$$Update @ 0xc2fc6c
 * void UIRoot__Update (UIRoot_o* __this, const MethodInfo* method); */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* UIRoot$$Update
   void UIRoot__Update (UIRoot_o* __this, const MethodInfo* method); */

void native_UIRoot__Update_c2fc6c
               (undefined1 param_1 [16],undefined1 param_2 [16],float param_3,long param_4)

{
  int iVar1;
  ulong uVar2;
  undefined8 uVar3;
  float fVar4;
  float fVar5;
  float fVar6;
  
  if ((bRam0000000001342723 & 1) == 0) {
    native_sub_43273c(&UnityEngine_Object_TypeInfo_12d54e0);
    native_sub_43273c(&StringLiteral_UpdateAnchors_12f2d00);
    bRam0000000001342723 = 1;
  }
  uVar3 = *(undefined8 *)(param_4 + 0x30);
  if (((*(byte *)(_UnityEngine_Object_TypeInfo_12d54e0 + 0x133) >> 2 & 1) != 0) &&
     (*(int *)(_UnityEngine_Object_TypeInfo_12d54e0 + 0xe0) == 0)) {
    native_sub_4327ec();
  }
  uVar2 = native_UnityEngine_Object__op_Inequality_8d76fc(uVar3,0,0);
  if (((uVar2 & 1) != 0) && (iVar1 = native_UIRoot__get_activeHeight_c2f58c(param_4), 0 < iVar1)) {
    if (*(long *)(param_4 + 0x30) != 0) {
      fVar5 = 2.0;
      fVar6 = 2.0 / (float)iVar1;
      fVar4 = (float)native_UnityEngine_Transform__get_localScale_771d80
                               (*(long *)(param_4 + 0x30),0);
      if (((ABS(fVar4 - fVar6) <= 1.4013e-45) && (ABS(fVar5 - fVar6) <= 1.4013e-45)) &&
         (ABS(param_3 - fVar6) <= 1.4013e-45)) {
        return;
      }
      if (*(long *)(param_4 + 0x30) != 0) {
        native_UnityEngine_Transform__set_localScale_771e30
                  (fVar6,fVar6,fVar6,*(long *)(param_4 + 0x30),0);
        uVar3 = _StringLiteral_UpdateAnchors_12f2d00;
        if (pcRam0000000001340ad8 == (code *)0x0) {
          pcRam0000000001340ad8 =
               (code *)native_sub_4326f0(&UNK_00e2d1c6,_StringLiteral_UpdateAnchors_12f2d00,1,0);
        }
                    /* WARNING: Could not recover jumptable at 0x008dacf0. Too many branches */
                    /* WARNING: Treating indirect jump as call */
        (*pcRam0000000001340ad8)(param_4,uVar3,0,1);
        return;
      }
    }
                    /* WARNING: Subroutine does not return */
    native_sub_432810();
  }
  return;
}



/* UIRoot$$UpdateScale @ 0xc2fb2c
 * void UIRoot__UpdateScale (UIRoot_o* __this, bool updateAnchors, const MethodInfo* method); */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* UIRoot$$UpdateScale
   void UIRoot__UpdateScale (UIRoot_o* __this, bool updateAnchors, const MethodInfo* method); */

void native_UIRoot__UpdateScale_c2fb2c
               (undefined1 param_1 [16],undefined1 param_2 [16],float param_3,long param_4,
               ulong param_5)

{
  int iVar1;
  ulong uVar2;
  undefined8 uVar3;
  float fVar4;
  float fVar5;
  float fVar6;
  
  if ((bRam0000000001342723 & 1) == 0) {
    native_sub_43273c(&UnityEngine_Object_TypeInfo_12d54e0);
    native_sub_43273c(&StringLiteral_UpdateAnchors_12f2d00);
    bRam0000000001342723 = 1;
  }
  uVar3 = *(undefined8 *)(param_4 + 0x30);
  if (((*(byte *)(_UnityEngine_Object_TypeInfo_12d54e0 + 0x133) >> 2 & 1) != 0) &&
     (*(int *)(_UnityEngine_Object_TypeInfo_12d54e0 + 0xe0) == 0)) {
    native_sub_4327ec();
  }
  uVar2 = native_UnityEngine_Object__op_Inequality_8d76fc(uVar3,0,0);
  if (((uVar2 & 1) != 0) && (iVar1 = native_UIRoot__get_activeHeight_c2f58c(param_4), 0 < iVar1)) {
    if (*(long *)(param_4 + 0x30) == 0) {
LAB_00c2fc68:
                    /* WARNING: Subroutine does not return */
      native_sub_432810();
    }
    fVar5 = 2.0;
    fVar6 = 2.0 / (float)iVar1;
    fVar4 = (float)native_UnityEngine_Transform__get_localScale_771d80(*(long *)(param_4 + 0x30),0);
    if (((1.4013e-45 < ABS(fVar4 - fVar6)) || (1.4013e-45 < ABS(fVar5 - fVar6))) ||
       (1.4013e-45 < ABS(param_3 - fVar6))) {
      if (*(long *)(param_4 + 0x30) == 0) goto LAB_00c2fc68;
      native_UnityEngine_Transform__set_localScale_771e30
                (fVar6,fVar6,fVar6,*(long *)(param_4 + 0x30),0);
      uVar3 = _StringLiteral_UpdateAnchors_12f2d00;
      if ((param_5 & 1) != 0) {
        if (pcRam0000000001340ad8 == (code *)0x0) {
          pcRam0000000001340ad8 =
               (code *)native_sub_4326f0(&UNK_00e2d1c6,_StringLiteral_UpdateAnchors_12f2d00,1,0);
        }
                    /* WARNING: Could not recover jumptable at 0x008dacf0. Too many branches */
                    /* WARNING: Treating indirect jump as call */
        (*pcRam0000000001340ad8)(param_4,uVar3,0,1);
        return;
      }
    }
  }
  return;
}



/* UIRoot$$Broadcast @ 0xc2fc74
 * void UIRoot__Broadcast (System_String_o* funcName, const MethodInfo* method); */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* UIRoot$$Broadcast
   void UIRoot__Broadcast (System_String_o* funcName, const MethodInfo* method); */

void native_UIRoot__Broadcast_c2fc74(undefined8 param_1)

{
  int iVar1;
  ulong uVar2;
  long lVar3;
  ulong uVar4;
  
  if ((bRam0000000001342724 & 1) == 0) {
    native_sub_43273c(&Method_System_Collections_Generic_List_UIRoot__get_Count___12dd398);
    native_sub_43273c(&Method_System_Collections_Generic_List_UIRoot__get_Item___12dd3a0);
    native_sub_43273c(&UnityEngine_Object_TypeInfo_12d54e0);
    native_sub_43273c(&UIRoot_TypeInfo_12d64a8);
    bRam0000000001342724 = 1;
  }
  if (((*(byte *)(_UIRoot_TypeInfo_12d64a8 + 0x133) >> 2 & 1) != 0) &&
     (*(int *)(_UIRoot_TypeInfo_12d64a8 + 0xe0) == 0)) {
    native_sub_4327ec();
  }
  if (**(long **)(_UIRoot_TypeInfo_12d64a8 + 0xb8) == 0) {
LAB_00c2fdc8:
                    /* WARNING: Subroutine does not return */
    native_sub_432810();
  }
  iVar1 = *(int *)(**(long **)(_UIRoot_TypeInfo_12d64a8 + 0xb8) + 0x18);
  if (0 < iVar1) {
    uVar4 = 0;
    do {
      if (((*(byte *)(_UIRoot_TypeInfo_12d64a8 + 0x133) >> 2 & 1) != 0) &&
         (*(int *)(_UIRoot_TypeInfo_12d64a8 + 0xe0) == 0)) {
        native_sub_4327ec();
      }
      lVar3 = **(long **)(_UIRoot_TypeInfo_12d64a8 + 0xb8);
      if (lVar3 == 0) goto LAB_00c2fdc8;
      if (*(uint *)(lVar3 + 0x18) <= uVar4) {
        native_System_ThrowHelper__ThrowArgumentOutOfRangeException_9fe0f4(0);
      }
      lVar3 = *(long *)(*(long *)(lVar3 + 0x10) + uVar4 * 8 + 0x20);
      if (((*(byte *)(_UnityEngine_Object_TypeInfo_12d54e0 + 0x133) >> 2 & 1) != 0) &&
         (*(int *)(_UnityEngine_Object_TypeInfo_12d54e0 + 0xe0) == 0)) {
        native_sub_4327ec();
      }
      uVar2 = native_UnityEngine_Object__op_Inequality_8d76fc(lVar3,0,0);
      if ((uVar2 & 1) != 0) {
        if (lVar3 == 0) goto LAB_00c2fdc8;
        native_UnityEngine_Component__BroadcastMessage_8dac98(lVar3,param_1,1,0);
      }
      uVar4 = uVar4 + 1;
    } while ((long)uVar4 < (long)iVar1);
  }
  return;
}



/* UIRoot$$Broadcast @ 0xc2fdcc
 * void UIRoot__Broadcast (System_String_o* funcName, Il2CppObject* param, const MethodInfo* method); */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* UIRoot$$Broadcast
   void UIRoot__Broadcast (System_String_o* funcName, Il2CppObject* param, const MethodInfo*
   method); */

void native_UIRoot__Broadcast_c2fdcc(undefined8 param_1,long param_2)

{
  int iVar1;
  undefined8 uVar2;
  undefined8 *puVar3;
  ulong uVar4;
  undefined8 extraout_x1;
  undefined8 extraout_x1_00;
  undefined8 uVar5;
  int *piVar6;
  long *plVar7;
  long lVar8;
  ulong uVar9;
  
  if ((bRam0000000001342725 & 1) == 0) {
    native_sub_43273c(&UnityEngine_Debug_TypeInfo_12d4338);
    native_sub_43273c(&Method_System_Collections_Generic_List_UIRoot__get_Count___12dd398);
    native_sub_43273c(&Method_System_Collections_Generic_List_UIRoot__get_Item___12dd3a0);
    native_sub_43273c(&UnityEngine_Object_TypeInfo_12d54e0);
    native_sub_43273c(&UIRoot_TypeInfo_12d64a8);
    native_sub_43273c(&
                      StringLiteral_SendMessage_is_bugged_when_you_try_to_pass__null__in_the_parameter_field__It_behaves_as_if_no_parameter_was_specified__12f0d68
                     );
    bRam0000000001342725 = 1;
  }
  if (param_2 == 0) {
    if (((*(byte *)(_UnityEngine_Debug_TypeInfo_12d4338 + 0x133) >> 2 & 1) != 0) &&
       (*(int *)(_UnityEngine_Debug_TypeInfo_12d4338 + 0xe0) == 0)) {
      native_sub_4327ec();
    }
    uVar2 = 
    _StringLiteral_SendMessage_is_bugged_when_you_try_to_pass__null__in_the_parameter_field__It_behaves_as_if_no_parameter_was_specified__12f0d68
    ;
    uVar5 = 0;
    if ((bRam0000000001340b52 & 1) == 0) {
      native_sub_43273c(&UnityEngine_Debug_TypeInfo_12d4338,0);
      native_sub_43273c(&UnityEngine_ILogger_TypeInfo_12d4c10);
      bRam0000000001340b52 = 1;
      uVar5 = extraout_x1;
    }
    if (((*(byte *)(_UnityEngine_Debug_TypeInfo_12d4338 + 0x133) >> 2 & 1) != 0) &&
       (*(int *)(_UnityEngine_Debug_TypeInfo_12d4338 + 0xe0) == 0)) {
      native_sub_4327ec();
      uVar5 = extraout_x1_00;
    }
    if (cRam000000000134112a == '\0') {
      native_sub_43273c(&UnityEngine_Debug_TypeInfo_12d4338,uVar5);
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
    lVar8 = *plVar7;
    if ((ulong)*(ushort *)(lVar8 + 0x12a) != 0) {
      uVar9 = 0;
      piVar6 = (int *)(*(long *)(lVar8 + 0xb0) + 8);
      do {
        if (*(long *)(piVar6 + -2) == _UnityEngine_ILogger_TypeInfo_12d4c10) {
          puVar3 = (undefined8 *)(lVar8 + (long)(*piVar6 + 2) * 0x10 + 0x138);
          goto code_r0x008dc6d4;
        }
        uVar9 = uVar9 + 1;
        piVar6 = piVar6 + 4;
      } while (uVar9 < *(ushort *)(lVar8 + 0x12a));
    }
    puVar3 = (undefined8 *)native_sub_3c9b34(plVar7,_UnityEngine_ILogger_TypeInfo_12d4c10,2);
code_r0x008dc6d4:
                    /* WARNING: Could not recover jumptable at 0x008dc6f0. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*(code *)*puVar3)(plVar7,0,uVar2,puVar3[1]);
    return;
  }
  if (((*(byte *)(_UIRoot_TypeInfo_12d64a8 + 0x133) >> 2 & 1) != 0) &&
     (*(int *)(_UIRoot_TypeInfo_12d64a8 + 0xe0) == 0)) {
    native_sub_4327ec();
  }
  if (**(long **)(_UIRoot_TypeInfo_12d64a8 + 0xb8) == 0) {
LAB_00c2ff94:
                    /* WARNING: Subroutine does not return */
    native_sub_432810();
  }
  iVar1 = *(int *)(**(long **)(_UIRoot_TypeInfo_12d64a8 + 0xb8) + 0x18);
  if (0 < iVar1) {
    uVar9 = 0;
    do {
      if (((*(byte *)(_UIRoot_TypeInfo_12d64a8 + 0x133) >> 2 & 1) != 0) &&
         (*(int *)(_UIRoot_TypeInfo_12d64a8 + 0xe0) == 0)) {
        native_sub_4327ec();
      }
      lVar8 = **(long **)(_UIRoot_TypeInfo_12d64a8 + 0xb8);
      if (lVar8 == 0) goto LAB_00c2ff94;
      if (*(uint *)(lVar8 + 0x18) <= uVar9) {
        native_System_ThrowHelper__ThrowArgumentOutOfRangeException_9fe0f4(0);
      }
      lVar8 = *(long *)(*(long *)(lVar8 + 0x10) + uVar9 * 8 + 0x20);
      if (((*(byte *)(_UnityEngine_Object_TypeInfo_12d54e0 + 0x133) >> 2 & 1) != 0) &&
         (*(int *)(_UnityEngine_Object_TypeInfo_12d54e0 + 0xe0) == 0)) {
        native_sub_4327ec();
      }
      uVar4 = native_UnityEngine_Object__op_Inequality_8d76fc(lVar8,0,0);
      if ((uVar4 & 1) != 0) {
        if (lVar8 == 0) goto LAB_00c2ff94;
        native_UnityEngine_Component__BroadcastMessage_8dabd8(lVar8,param_1,param_2,1,0);
      }
      uVar9 = uVar9 + 1;
    } while ((long)uVar9 < (long)iVar1);
  }
  return;
}



/* UIRoot$$.ctor @ 0xc2ff98
 * void UIRoot___ctor (UIRoot_o* __this, const MethodInfo* method); */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* UIRoot$$.ctor
   void UIRoot___ctor (UIRoot_o* __this, const MethodInfo* method); */

undefined1  [16] native_UIRoot___ctor_c2ff98(ulong param_1)

{
  undefined1 auVar1 [16];
  
  *(undefined1 *)(param_1 + 0x2d) = 1;
  *(undefined8 *)(param_1 + 0x24) = 0x60000000140;
  *(undefined8 *)(param_1 + 0x1c) = 0x2d000000500;
  if ((bRam0000000001340ae0 & 1) == 0) {
    native_sub_43273c(&UnityEngine_Object_TypeInfo_12d54e0,0);
    bRam0000000001340ae0 = 1;
  }
  if (((*(byte *)(_UnityEngine_Object_TypeInfo_12d54e0 + 0x133) >> 2 & 1) != 0) &&
     (*(int *)(_UnityEngine_Object_TypeInfo_12d54e0 + 0xe0) == 0)) {
    native_sub_4327ec();
  }
  auVar1._8_8_ = 0;
  auVar1._0_8_ = param_1;
  return auVar1;
}



/* UIRoot$$.cctor @ 0xc2ffb4
 * void UIRoot___cctor (const MethodInfo* method); */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* UIRoot$$.cctor
   void UIRoot___cctor (const MethodInfo* method); */

void native_UIRoot___cctor_c2ffb4(void)

{
  ulong *puVar1;
  char cVar2;
  bool bVar3;
  undefined8 uVar4;
  undefined8 *puVar5;
  
  if ((bRam0000000001342726 & 1) == 0) {
    native_sub_43273c(&Method_System_Collections_Generic_List_UIRoot___ctor___12dd378);
    native_sub_43273c(&System_Collections_Generic_List_UIRoot__TypeInfo_12d2c30);
    native_sub_43273c(&UIRoot_TypeInfo_12d64a8);
    bRam0000000001342726 = 1;
  }
  uVar4 = native_sub_432808(_System_Collections_Generic_List_UIRoot__TypeInfo_12d2c30);
  native_System_Collections_Generic_List_XmlEventCache_XmlEvent______ctor_d3ff44
            (uVar4,_Method_System_Collections_Generic_List_UIRoot___ctor___12dd378);
  puVar5 = *(undefined8 **)(_UIRoot_TypeInfo_12d64a8 + 0xb8);
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


