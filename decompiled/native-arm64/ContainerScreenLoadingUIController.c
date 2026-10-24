/* ARM64 IL2CPP native pseudocode from Ghidra.
 * Recovered implementation, not original C# source.
 * Function boundaries follow the IL2CPP method address table. */


/* ContainerScreenLoadingUIController$$Start @ 0xde7d30
 * void ContainerScreenLoadingUIController__Start (ContainerScreenLoadingUIController_o* __this, const MethodInfo* method); */

/* ContainerScreenLoadingUIController$$Start
   void ContainerScreenLoadingUIController__Start (ContainerScreenLoadingUIController_o* __this,
   const MethodInfo* method); */

void native_ContainerScreenLoadingUIController__Start_de7d30(long param_1)

{
  *(undefined1 *)(param_1 + 0x18) = 1;
  return;
}



/* ContainerScreenLoadingUIController$$Update @ 0xde7d3c
 * void ContainerScreenLoadingUIController__Update (ContainerScreenLoadingUIController_o* __this, const MethodInfo* method); */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* ContainerScreenLoadingUIController$$Update
   void ContainerScreenLoadingUIController__Update (ContainerScreenLoadingUIController_o* __this,
   const MethodInfo* method); */

undefined8 native_ContainerScreenLoadingUIController__Update_de7d3c(long param_1)

{
  int iVar1;
  ulong uVar2;
  long *plVar3;
  undefined8 *puVar4;
  undefined8 uVar5;
  long *plVar6;
  long lVar7;
  float fVar8;
  float fVar9;
  
  if ((bRam0000000001346eb9 & 1) == 0) {
    native_sub_43273c(&Method_UnityEngine_GameObject_GetComponent_UIProgressBar____12e4ad0);
    bRam0000000001346eb9 = 1;
  }
  iVar1 = *(int *)(param_1 + 0x1c) + 1;
  *(int *)(param_1 + 0x1c) = iVar1;
  if ((0x2d < iVar1) && (*(undefined4 *)(param_1 + 0x1c) = 0, *(char *)(param_1 + 0x18) != '\0')) {
    *(undefined1 *)(param_1 + 0x18) = 0;
    uVar5 = native_ContainerScreenLoadingUIController__LoadNewScene_de7de4(param_1);
    native_UnityEngine_MonoBehaviour__StartCoroutine_8e9174(param_1,uVar5,0);
  }
  if ((*(long *)(param_1 + 0x40) != 0) &&
     (plVar6 = (long *)native_UnityEngine_GameObject__GetComponent_BE2_BlockSectionHeader_Custom__4a2214
                                 (*(long *)(param_1 + 0x40),
                                  _Method_UnityEngine_GameObject_GetComponent_UIProgressBar____12e4ad0
                                 ), plVar6 != (long *)0x0)) {
    fVar9 = *(float *)(param_1 + 0x20);
    if (1.0 < fVar9) {
      fVar9 = 1.0;
    }
    if ((bRam00000000013426fb & 1) == 0) {
      native_sub_43273c(&EventDelegate_TypeInfo_12d4590);
      native_sub_43273c(&NGUITools_TypeInfo_12d53c8);
      native_sub_43273c(&UIProgressBar_TypeInfo_12d6498);
      bRam00000000013426fb = 1;
    }
    fVar9 = (float)native_UnityEngine_Mathf__Clamp01_8d9d9c(fVar9,0);
    if (*(float *)(plVar6 + 7) == fVar9) {
      uVar5 = 0;
    }
    else {
      fVar8 = (float)native_UIProgressBar__get_value_c2b6f0(plVar6);
      *(float *)(plVar6 + 7) = fVar9;
      if (((char)plVar6[8] != '\0') &&
         (fVar9 = (float)native_UIProgressBar__get_value_c2b6f0(plVar6), fVar8 != fVar9)) {
        if (((*(byte *)(_NGUITools_TypeInfo_12d53c8 + 0x133) >> 2 & 1) != 0) &&
           (*(int *)(_NGUITools_TypeInfo_12d53c8 + 0xe0) == 0)) {
          native_sub_4327ec();
        }
        uVar2 = native_NGUITools__GetActive_72d02c(plVar6,0);
        if ((uVar2 & 1) != 0) {
          lVar7 = plVar6[0xd];
          if (((*(byte *)(_EventDelegate_TypeInfo_12d4590 + 0x133) >> 2 & 1) != 0) &&
             (*(int *)(_EventDelegate_TypeInfo_12d4590 + 0xe0) == 0)) {
            native_sub_4327ec();
          }
          uVar2 = native_EventDelegate__IsValid_deef08(lVar7,0);
          if ((uVar2 & 1) != 0) {
            plVar3 = *(long **)(_UIProgressBar_TypeInfo_12d6498 + 0xb8);
            *plVar3 = (long)plVar6;
            native_sub_4326e0(plVar3,plVar6);
            lVar7 = plVar6[0xd];
            if (((*(byte *)(_EventDelegate_TypeInfo_12d4590 + 0x133) >> 2 & 1) != 0) &&
               (*(int *)(_EventDelegate_TypeInfo_12d4590 + 0xe0) == 0)) {
              native_sub_4327ec();
            }
            native_EventDelegate__Execute_deecbc(lVar7,0);
            puVar4 = *(undefined8 **)(_UIProgressBar_TypeInfo_12d6498 + 0xb8);
            *puVar4 = 0;
            native_sub_4326e0(puVar4,0);
          }
        }
        (**(code **)(*plVar6 + 0x1a8))(plVar6,*(undefined8 *)(*plVar6 + 0x1b0));
      }
      uVar5 = 1;
    }
    return uVar5;
  }
                    /* WARNING: Subroutine does not return */
  native_sub_432810();
}



/* ContainerScreenLoadingUIController$$LoadNewScene @ 0xde7de4
 * System_Collections_IEnumerator_o* ContainerScreenLoadingUIController__LoadNewScene (ContainerScreenLoadingUIController_o* __this, const MethodInfo* method); */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* ContainerScreenLoadingUIController$$LoadNewScene
   System_Collections_IEnumerator_o* ContainerScreenLoadingUIController__LoadNewScene
   (ContainerScreenLoadingUIController_o* __this, const MethodInfo* method); */

long native_ContainerScreenLoadingUIController__LoadNewScene_de7de4(undefined8 param_1)

{
  long lVar1;
  
  if ((bRam0000000001346eba & 1) == 0) {
    native_sub_43273c(&ContainerScreenLoadingUIController__LoadNewScene_d__6_TypeInfo_12d7198);
    bRam0000000001346eba = 1;
  }
  lVar1 = native_sub_432808(_ContainerScreenLoadingUIController__LoadNewScene_d__6_TypeInfo_12d7198)
  ;
  native_ContainerScreenLoadingUIController__LoadNewScene_d__6___ctor_54b7a8(lVar1,0,0);
  if (lVar1 != 0) {
    *(undefined8 *)(lVar1 + 0x20) = param_1;
    native_sub_4326e0((undefined8 *)(lVar1 + 0x20),param_1);
    return lVar1;
  }
                    /* WARNING: Subroutine does not return */
  native_sub_432810();
}



/* ContainerScreenLoadingUIController$$Awake @ 0xde7e5c
 * void ContainerScreenLoadingUIController__Awake (ContainerScreenLoadingUIController_o* __this, const MethodInfo* method); */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* ContainerScreenLoadingUIController$$Awake
   void ContainerScreenLoadingUIController__Awake (ContainerScreenLoadingUIController_o* __this,
   const MethodInfo* method); */

void native_ContainerScreenLoadingUIController__Awake_de7e5c
               (undefined1 param_1 [16],undefined4 param_2,undefined4 param_3,long param_4)

{
  long lVar1;
  long *plVar2;
  undefined4 uVar3;
  
  if ((bRam0000000001346ebb & 1) == 0) {
    native_sub_43273c(&StringLiteral_ProgressLoading_12f0708);
    native_sub_43273c(&StringLiteral_background_12f3b58);
    bRam0000000001346ebb = 1;
  }
  lVar1 = native_UnityEngine_Component__get_transform_8da62c(param_4,0);
  if ((lVar1 != 0) &&
     (lVar1 = native_UnityEngine_Transform__Find_772c0c(lVar1,_StringLiteral_background_12f3b58,0),
     lVar1 != 0)) {
    lVar1 = native_UnityEngine_Component__get_gameObject_8da66c(lVar1,0);
    plVar2 = (long *)(param_4 + 0x28);
    *plVar2 = lVar1;
    native_sub_4326e0(plVar2,lVar1);
    if ((*plVar2 != 0) &&
       (lVar1 = native_UnityEngine_GameObject__get_transform_8de5c8(*plVar2,0), lVar1 != 0)) {
      uVar3 = native_UnityEngine_Transform__get_localPosition_7717f4(lVar1,0);
      *(undefined4 *)(param_4 + 0x30) = uVar3;
      *(undefined4 *)(param_4 + 0x34) = param_2;
      *(undefined4 *)(param_4 + 0x38) = param_3;
      lVar1 = native_UnityEngine_Component__get_transform_8da62c(param_4,0);
      if ((lVar1 != 0) &&
         (lVar1 = native_UnityEngine_Transform__Find_772c0c
                            (lVar1,_StringLiteral_ProgressLoading_12f0708,0), lVar1 != 0)) {
        lVar1 = native_UnityEngine_Component__get_gameObject_8da66c(lVar1,0);
        plVar2 = (long *)(param_4 + 0x40);
        *plVar2 = lVar1;
        native_sub_4326e0(plVar2,lVar1);
        if ((*plVar2 != 0) &&
           (lVar1 = native_UnityEngine_GameObject__get_transform_8de5c8(*plVar2,0), lVar1 != 0)) {
          uVar3 = native_UnityEngine_Transform__get_localPosition_7717f4(lVar1,0);
          *(undefined4 *)(param_4 + 0x48) = uVar3;
          *(undefined4 *)(param_4 + 0x4c) = param_2;
          *(undefined4 *)(param_4 + 0x50) = param_3;
          return;
        }
      }
    }
  }
                    /* WARNING: Subroutine does not return */
  native_sub_432810();
}



/* ContainerScreenLoadingUIController$$.ctor @ 0xde7f78
 * void ContainerScreenLoadingUIController___ctor (ContainerScreenLoadingUIController_o* __this, const MethodInfo* method); */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* ContainerScreenLoadingUIController$$.ctor
   void ContainerScreenLoadingUIController___ctor (ContainerScreenLoadingUIController_o* __this,
   const MethodInfo* method); */

undefined1  [16] native_ContainerScreenLoadingUIController___ctor_de7f78(ulong param_1)

{
  undefined1 auVar1 [16];
  
  *(undefined1 *)(param_1 + 0x18) = 1;
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



/* ContainerScreenLoadingUIController$$.cctor @ 0xde7f88
 * void ContainerScreenLoadingUIController___cctor (const MethodInfo* method); */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* ContainerScreenLoadingUIController$$.cctor
   void ContainerScreenLoadingUIController___cctor (const MethodInfo* method); */

void native_ContainerScreenLoadingUIController___cctor_de7f88(void)

{
  ulong *puVar1;
  char cVar2;
  bool bVar3;
  undefined8 *puVar4;
  
  if ((bRam0000000001346ebc & 1) == 0) {
    native_sub_43273c(&ContainerScreenLoadingUIController_TypeInfo_12d3f80);
    native_sub_43273c(&StringLiteral__12eaac0);
    bRam0000000001346ebc = 1;
  }
  puVar4 = *(undefined8 **)(_ContainerScreenLoadingUIController_TypeInfo_12d3f80 + 0xb8);
  *puVar4 = _StringLiteral__12eaac0;
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


