/* ARM64 IL2CPP native pseudocode from Ghidra.
 * Recovered implementation, not original C# source.
 * Function boundaries follow the IL2CPP method address table. */


/* UIDragDropItem$$IsDragged @ 0x9e00d8
 * bool UIDragDropItem__IsDragged (UnityEngine_GameObject_o* go, const MethodInfo* method); */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* UIDragDropItem$$IsDragged
   bool UIDragDropItem__IsDragged (UnityEngine_GameObject_o* go, const MethodInfo* method); */

undefined8 native_UIDragDropItem__IsDragged_9e00d8(undefined8 param_1)

{
  ulong uVar1;
  undefined8 uVar2;
  uint uVar3;
  uint uVar4;
  long lVar5;
  
  if ((bRam00000000013418c5 & 1) == 0) {
    native_sub_43273c(&UnityEngine_Debug_TypeInfo_12d4338);
    native_sub_43273c(&Method_System_Collections_Generic_List_UIDragDropItem__RemoveAt___12dd290);
    native_sub_43273c(&Method_System_Collections_Generic_List_UIDragDropItem__get_Count___12dd298);
    native_sub_43273c(&Method_System_Collections_Generic_List_UIDragDropItem__get_Item___12dd2a0);
    native_sub_43273c(&UnityEngine_Object_TypeInfo_12d54e0);
    native_sub_43273c(&UIDragDropItem_TypeInfo_12d6428);
    native_sub_43273c(&
                      StringLiteral_UIDragDropItem_has_been_destroyed_without_calling_its_OnDragDropEnd___function_12f2930
                     );
    bRam00000000013418c5 = 1;
  }
  uVar3 = 0;
  while( true ) {
    if (((*(byte *)(_UIDragDropItem_TypeInfo_12d6428 + 0x133) >> 2 & 1) != 0) &&
       (*(int *)(_UIDragDropItem_TypeInfo_12d6428 + 0xe0) == 0)) {
      native_sub_4327ec();
    }
    lVar5 = **(long **)(_UIDragDropItem_TypeInfo_12d6428 + 0xb8);
    if (lVar5 == 0) break;
    if (*(int *)(lVar5 + 0x18) <= (int)uVar3) {
      return 0;
    }
    if (((*(byte *)(_UIDragDropItem_TypeInfo_12d6428 + 0x133) >> 2 & 1) != 0) &&
       (*(int *)(_UIDragDropItem_TypeInfo_12d6428 + 0xe0) == 0)) {
      native_sub_4327ec();
      lVar5 = **(long **)(_UIDragDropItem_TypeInfo_12d6428 + 0xb8);
      if (lVar5 == 0) break;
    }
    if (*(uint *)(lVar5 + 0x18) <= uVar3) {
      native_System_ThrowHelper__ThrowArgumentOutOfRangeException_9fe0f4(0);
    }
    lVar5 = *(long *)(*(long *)(lVar5 + 0x10) + (long)(int)uVar3 * 8 + 0x20);
    if (((*(byte *)(_UnityEngine_Object_TypeInfo_12d54e0 + 0x133) >> 2 & 1) != 0) &&
       (*(int *)(_UnityEngine_Object_TypeInfo_12d54e0 + 0xe0) == 0)) {
      native_sub_4327ec();
    }
    uVar1 = native_UnityEngine_Object__op_Implicit_8e1b98(lVar5,0);
    if ((uVar1 & 1) == 0) {
      if (((*(byte *)(_UnityEngine_Debug_TypeInfo_12d4338 + 0x133) >> 2 & 1) != 0) &&
         (*(int *)(_UnityEngine_Debug_TypeInfo_12d4338 + 0xe0) == 0)) {
        native_sub_4327ec();
      }
      native_UnityEngine_Debug__LogWarning_8dca9c
                (_StringLiteral_UIDragDropItem_has_been_destroyed_without_calling_its_OnDragDropEnd___function_12f2930
                 ,0);
      if (((*(byte *)(_UIDragDropItem_TypeInfo_12d6428 + 0x133) >> 2 & 1) != 0) &&
         (*(int *)(_UIDragDropItem_TypeInfo_12d6428 + 0xe0) == 0)) {
        native_sub_4327ec();
      }
      if (**(long **)(_UIDragDropItem_TypeInfo_12d6428 + 0xb8) == 0) break;
      uVar4 = uVar3 - 1;
      native_System_Collections_Generic_List_int_____RemoveAt_d42280
                (**(long **)(_UIDragDropItem_TypeInfo_12d6428 + 0xb8),uVar3,
                 _Method_System_Collections_Generic_List_UIDragDropItem__RemoveAt___12dd290);
    }
    else {
      if (lVar5 == 0) break;
      uVar2 = native_UnityEngine_Component__get_gameObject_8da66c(lVar5,0);
      if (((*(byte *)(_UnityEngine_Object_TypeInfo_12d54e0 + 0x133) >> 2 & 1) != 0) &&
         (*(int *)(_UnityEngine_Object_TypeInfo_12d54e0 + 0xe0) == 0)) {
        native_sub_4327ec(_UnityEngine_Object_TypeInfo_12d54e0);
      }
      uVar1 = native_UnityEngine_Object__op_Equality_8e9a3c(uVar2,param_1,0);
      uVar4 = uVar3;
      if ((uVar1 & 1) != 0) {
        return 1;
      }
    }
    uVar3 = uVar4 + 1;
  }
                    /* WARNING: Subroutine does not return */
  native_sub_432810();
}



/* UIDragDropItem$$Awake @ 0x9e0300
 * void UIDragDropItem__Awake (UIDragDropItem_o* __this, const MethodInfo* method); */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* UIDragDropItem$$Awake
   void UIDragDropItem__Awake (UIDragDropItem_o* __this, const MethodInfo* method); */

void native_UIDragDropItem__Awake_9e0300(long param_1)

{
  ulong *puVar1;
  char cVar2;
  bool bVar3;
  undefined8 uVar4;
  long lVar5;
  undefined8 *puVar6;
  
  if ((bRam00000000013418c6 & 1) == 0) {
    native_sub_43273c(&Method_UnityEngine_GameObject_GetComponent_Collider2D____12e4980);
    native_sub_43273c(&Method_UnityEngine_GameObject_GetComponent_Collider____12e4978);
    bRam00000000013418c6 = 1;
  }
  uVar4 = native_UnityEngine_Component__get_transform_8da62c(param_1,0);
  *(undefined8 *)(param_1 + 0x28) = uVar4;
  native_sub_4326e0(param_1 + 0x28);
  lVar5 = native_UnityEngine_Component__get_gameObject_8da66c(param_1,0);
  if (lVar5 != 0) {
    uVar4 = native_UnityEngine_GameObject__GetComponent_BE2_BlockSectionHeader_Custom__4a2214
                      (lVar5,_Method_UnityEngine_GameObject_GetComponent_Collider____12e4978);
    *(undefined8 *)(param_1 + 0x38) = uVar4;
    native_sub_4326e0();
    lVar5 = native_UnityEngine_Component__get_gameObject_8da66c(param_1,0);
    if (lVar5 != 0) {
      uVar4 = native_UnityEngine_GameObject__GetComponent_BE2_BlockSectionHeader_Custom__4a2214
                        (lVar5,_Method_UnityEngine_GameObject_GetComponent_Collider2D____12e4980);
      puVar6 = (undefined8 *)(param_1 + 0x40);
      *puVar6 = uVar4;
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
  }
                    /* WARNING: Subroutine does not return */
  native_sub_432810();
}



/* UIDragDropItem$$OnEnable @ 0x9e03c4
 * void UIDragDropItem__OnEnable (UIDragDropItem_o* __this, const MethodInfo* method); */

/* UIDragDropItem$$OnEnable
   void UIDragDropItem__OnEnable (UIDragDropItem_o* __this, const MethodInfo* method); */

void native_UIDragDropItem__OnEnable_9e03c4(void)

{
  return;
}



/* UIDragDropItem$$OnDisable @ 0x9e03c8
 * void UIDragDropItem__OnDisable (UIDragDropItem_o* __this, const MethodInfo* method); */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* UIDragDropItem$$OnDisable
   void UIDragDropItem__OnDisable (UIDragDropItem_o* __this, const MethodInfo* method); */

void native_UIDragDropItem__OnDisable_9e03c8(long *param_1)

{
  ulong uVar1;
  ulong *puVar2;
  char cVar3;
  bool bVar4;
  undefined8 uVar5;
  long *plVar6;
  long lVar7;
  undefined8 uVar8;
  undefined1 auVar9 [16];
  
  if ((bRam00000000013418c7 & 1) == 0) {
    native_sub_43273c(&UICamera_BoolDelegate_TypeInfo_12d79e0);
    native_sub_43273c(&UICamera_MoveDelegate_TypeInfo_12d7a20);
    native_sub_43273c(&UICamera_TypeInfo_12d6410);
    native_sub_43273c(&Method_UIDragDropItem_OnGlobalClick___12e77f8);
    native_sub_43273c(&Method_UIDragDropItem_OnGlobalPress___12e7800);
    native_sub_43273c(&UICamera_VoidDelegate_TypeInfo_12d7a40);
    bRam00000000013418c7 = 1;
  }
  if (*(char *)((long)param_1 + 0x79) != '\0') {
    *(undefined1 *)((long)param_1 + 0x79) = 0;
    (**(code **)(*param_1 + 600))(param_1,0,*(undefined8 *)(*param_1 + 0x260));
    if (((*(byte *)(_UICamera_TypeInfo_12d6410 + 0x133) >> 2 & 1) != 0) &&
       (*(int *)(_UICamera_TypeInfo_12d6410 + 0xe0) == 0)) {
      native_sub_4327ec();
    }
    uVar8 = *(undefined8 *)(*(long *)(_UICamera_TypeInfo_12d6410 + 0xb8) + 0x118);
    uVar5 = native_sub_432808(_UICamera_BoolDelegate_TypeInfo_12d79e0);
    native_UICamera_BoolDelegate___ctor_54ffc4
              (uVar5,param_1,_Method_UIDragDropItem_OnGlobalPress___12e7800,0);
    plVar6 = (long *)native_System_Delegate__Remove_a6d1c0(uVar8,uVar5,0);
    lVar7 = *(long *)(_UICamera_TypeInfo_12d6410 + 0xb8);
    if ((plVar6 == (long *)0x0) || (*plVar6 == _UICamera_BoolDelegate_TypeInfo_12d79e0)) {
      *(long **)(lVar7 + 0x118) = plVar6;
      native_sub_4326e0(lVar7 + 0x118,plVar6);
      uVar8 = *(undefined8 *)(*(long *)(_UICamera_TypeInfo_12d6410 + 0xb8) + 0x100);
      uVar5 = native_sub_432808(_UICamera_VoidDelegate_TypeInfo_12d7a40);
      native_UICamera_VoidDelegate___ctor_553c14
                (uVar5,param_1,_Method_UIDragDropItem_OnGlobalClick___12e77f8,0);
      plVar6 = (long *)native_System_Delegate__Remove_a6d1c0(uVar8,uVar5,0);
      lVar7 = *(long *)(_UICamera_TypeInfo_12d6410 + 0xb8);
      if ((plVar6 == (long *)0x0) || (*plVar6 == _UICamera_VoidDelegate_TypeInfo_12d7a40)) {
        *(long **)(lVar7 + 0x100) = plVar6;
        native_sub_4326e0(lVar7 + 0x100,plVar6);
        uVar8 = *(undefined8 *)(*(long *)(_UICamera_TypeInfo_12d6410 + 0xb8) + 0x180);
        uVar5 = native_sub_432808(_UICamera_MoveDelegate_TypeInfo_12d7a20);
        native_UICamera_MoveDelegate___ctor_552474
                  (uVar5,param_1,*(undefined8 *)(*param_1 + 0x220),0);
        plVar6 = (long *)native_System_Delegate__Remove_a6d1c0(uVar8,uVar5,0);
        lVar7 = *(long *)(_UICamera_TypeInfo_12d6410 + 0xb8);
        if ((plVar6 == (long *)0x0) || (*plVar6 == _UICamera_MoveDelegate_TypeInfo_12d7a20)) {
          *(long **)(lVar7 + 0x180) = plVar6;
          uVar1 = lVar7 + 0x180;
          if (iRam0000000001345318 != 0) {
            puVar2 = (ulong *)((uVar1 >> 0x12 & 0x7fff) * 8 + 0x138ecd8);
            do {
              cVar3 = '\x01';
              bVar4 = (bool)ExclusiveMonitorPass(puVar2,0x10);
              if (bVar4) {
                *puVar2 = *puVar2 | 1L << (uVar1 >> 0xc & 0x3f);
                cVar3 = ExclusiveMonitorsStatus();
              }
            } while (cVar3 != '\0');
          }
          return;
        }
      }
    }
    auVar9 = native_sub_432b04(plVar6);
    plVar6 = auVar9._0_8_;
    if (*(char *)((long)plVar6 + 0x79) != '\0') {
      *(undefined1 *)((long)plVar6 + 0x79) = 0;
                    /* WARNING: Could not recover jumptable at 0x009e0628. Too many branches */
                    /* WARNING: Treating indirect jump as call */
      (**(code **)(*plVar6 + 600))(plVar6,auVar9._8_8_,*(undefined8 *)(*plVar6 + 0x260));
      return;
    }
    return;
  }
  return;
}



/* UIDragDropItem$$Start @ 0x9e0630
 * void UIDragDropItem__Start (UIDragDropItem_o* __this, const MethodInfo* method); */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* UIDragDropItem$$Start
   void UIDragDropItem__Start (UIDragDropItem_o* __this, const MethodInfo* method); */

void native_UIDragDropItem__Start_9e0630(long param_1)

{
  ulong *puVar1;
  char cVar2;
  bool bVar3;
  undefined8 uVar4;
  
  if ((bRam00000000013418c8 & 1) == 0) {
    native_sub_43273c(&Method_UnityEngine_Component_GetComponent_UIButton____12e2ba0);
    native_sub_43273c(&Method_UnityEngine_Component_GetComponent_UIDragScrollView____12e2bb8);
    bRam00000000013418c8 = 1;
  }
  uVar4 = native_UnityEngine_Component__GetComponent_ActiveAnimation__49daec
                    (param_1,_Method_UnityEngine_Component_GetComponent_UIButton____12e2ba0);
  *(undefined8 *)(param_1 + 0x48) = uVar4;
  native_sub_4326e0(param_1 + 0x48);
  uVar4 = native_UnityEngine_Component__GetComponent_ActiveAnimation__49daec
                    (param_1,_Method_UnityEngine_Component_GetComponent_UIDragScrollView____12e2bb8)
  ;
  *(undefined8 *)(param_1 + 0x70) = uVar4;
  if (iRam0000000001345318 != 0) {
    puVar1 = (ulong *)((param_1 + 0x70U >> 0x12 & 0x7fff) * 8 + 0x138ecd8);
    do {
      cVar2 = '\x01';
      bVar3 = (bool)ExclusiveMonitorPass(puVar1,0x10);
      if (bVar3) {
        *puVar1 = *puVar1 | 1L << (param_1 + 0x70U >> 0xc & 0x3f);
        cVar2 = ExclusiveMonitorsStatus();
      }
    } while (cVar2 != '\0');
  }
  return;
}



/* UIDragDropItem$$OnPress @ 0x9e06bc
 * void UIDragDropItem__OnPress (UIDragDropItem_o* __this, bool isPressed, const MethodInfo* method); */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* UIDragDropItem$$OnPress
   void UIDragDropItem__OnPress (UIDragDropItem_o* __this, bool isPressed, const MethodInfo*
   method); */

void native_UIDragDropItem__OnPress_9e06bc(long param_1,ulong param_2)

{
  ulong *puVar1;
  char cVar2;
  bool bVar3;
  long lVar4;
  int iVar5;
  long *plVar6;
  long lVar7;
  float fVar8;
  
  if ((bRam00000000013418c9 & 1) == 0) {
    native_sub_43273c(&UICamera_TypeInfo_12d6410);
    bRam00000000013418c9 = 1;
  }
  if (*(char *)(param_1 + 0x1e) != '\0') {
    if (((*(byte *)(_UICamera_TypeInfo_12d6410 + 0x133) >> 2 & 1) != 0) &&
       (*(int *)(_UICamera_TypeInfo_12d6410 + 0xe0) == 0)) {
      native_sub_4327ec();
    }
    lVar4 = *(long *)(_UICamera_TypeInfo_12d6410 + 0xb8);
    iVar5 = *(int *)(lVar4 + 0xd4);
    if (iVar5 != -2) {
      if (((*(byte *)(_UICamera_TypeInfo_12d6410 + 0x133) >> 2 & 1) != 0) &&
         (*(int *)(_UICamera_TypeInfo_12d6410 + 0xe0) == 0)) {
        native_sub_4327ec();
        lVar4 = *(long *)(_UICamera_TypeInfo_12d6410 + 0xb8);
        iVar5 = *(int *)(lVar4 + 0xd4);
      }
      if (iVar5 != -3) {
        if ((param_2 & 1) == 0) {
          if (*(char *)(param_1 + 0x78) != '\0') {
            plVar6 = (long *)(param_1 + 0x80);
            lVar7 = *plVar6;
            if (((*(byte *)(_UICamera_TypeInfo_12d6410 + 0x133) >> 2 & 1) != 0) &&
               (*(int *)(_UICamera_TypeInfo_12d6410 + 0xe0) == 0)) {
              native_sub_4327ec();
              lVar4 = *(long *)(_UICamera_TypeInfo_12d6410 + 0xb8);
            }
            if ((lVar7 == *(long *)(lVar4 + 0xe0)) &&
               ((*(undefined1 *)(param_1 + 0x78) = 0, *(char *)(param_1 + 0x79) == '\0' ||
                (*(char *)(param_1 + 0x1c) == '\0')))) {
              *plVar6 = 0;
              if (iRam0000000001345318 != 0) {
                puVar1 = (ulong *)(((ulong)plVar6 >> 0x12 & 0x7fff) * 8 + 0x138ecd8);
                do {
                  cVar2 = '\x01';
                  bVar3 = (bool)ExclusiveMonitorPass(puVar1,0x10);
                  if (bVar3) {
                    *puVar1 = *puVar1 | 1L << ((ulong)plVar6 >> 0xc & 0x3f);
                    cVar2 = ExclusiveMonitorsStatus();
                  }
                } while (cVar2 != '\0');
              }
              return;
            }
          }
        }
        else if (*(char *)(param_1 + 0x78) == '\0') {
          if (((*(byte *)(_UICamera_TypeInfo_12d6410 + 0x133) >> 2 & 1) != 0) &&
             (*(int *)(_UICamera_TypeInfo_12d6410 + 0xe0) == 0)) {
            native_sub_4327ec();
            lVar4 = *(long *)(_UICamera_TypeInfo_12d6410 + 0xb8);
          }
          *(undefined8 *)(param_1 + 0x80) = *(undefined8 *)(lVar4 + 0xe0);
          native_sub_4326e0((undefined8 *)(param_1 + 0x80));
          fVar8 = (float)native_RealTime__get_time_72d024(0);
          *(undefined1 *)(param_1 + 0x78) = 1;
          *(float *)(param_1 + 0x68) = fVar8 + *(float *)(param_1 + 0x20);
        }
      }
    }
  }
  return;
}



/* UIDragDropItem$$OnClick @ 0x9e0824
 * void UIDragDropItem__OnClick (UIDragDropItem_o* __this, const MethodInfo* method); */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* UIDragDropItem$$OnClick
   void UIDragDropItem__OnClick (UIDragDropItem_o* __this, const MethodInfo* method); */

void native_UIDragDropItem__OnClick_9e0824(long *param_1)

{
  ulong *puVar1;
  int iVar2;
  char cVar3;
  bool bVar4;
  int iVar5;
  undefined4 uVar6;
  long *plVar7;
  ulong uVar8;
  undefined8 uVar9;
  long *plVar10;
  long lVar11;
  undefined8 uVar12;
  float fVar13;
  float fVar14;
  undefined1 auVar15 [16];
  
  if ((bRam00000000013418ca & 1) == 0) {
    native_sub_43273c(&UICamera_BoolDelegate_TypeInfo_12d79e0);
    native_sub_43273c(&Method_System_Collections_Generic_List_UIDragDropItem__get_Count___12dd298);
    native_sub_43273c(&UICamera_MoveDelegate_TypeInfo_12d7a20);
    native_sub_43273c(&UnityEngine_Object_TypeInfo_12d54e0);
    native_sub_43273c(&UICamera_TypeInfo_12d6410);
    native_sub_43273c(&Method_UIDragDropItem_OnGlobalClick___12e77f8);
    native_sub_43273c(&Method_UIDragDropItem_OnGlobalPress___12e7800);
    native_sub_43273c(&UIDragDropItem_TypeInfo_12d6428);
    native_sub_43273c(&UICamera_VoidDelegate_TypeInfo_12d7a40);
    bRam00000000013418ca = 1;
  }
  if (*(char *)((long)param_1 + 0x1e) == '\0') {
    return;
  }
  if (((*(byte *)(_UIDragDropItem_TypeInfo_12d6428 + 0x133) >> 2 & 1) != 0) &&
     (*(int *)(_UIDragDropItem_TypeInfo_12d6428 + 0xe0) == 0)) {
    native_sub_4327ec();
  }
  iVar2 = *(int *)(*(long *)(_UIDragDropItem_TypeInfo_12d6428 + 0xb8) + 8);
  iVar5 = native_UnityEngine_Time__get_frameCount_770964(0);
  if (iVar2 == iVar5) {
    return;
  }
  if (*(char *)((long)param_1 + 0x1c) == '\0') {
    return;
  }
  if (*(char *)((long)param_1 + 0x79) != '\0') {
    return;
  }
  if (((*(byte *)(_UICamera_TypeInfo_12d6410 + 0x133) >> 2 & 1) != 0) &&
     (*(int *)(_UICamera_TypeInfo_12d6410 + 0xe0) == 0)) {
    native_sub_4327ec();
  }
  if (*(int *)(*(long *)(_UICamera_TypeInfo_12d6410 + 0xb8) + 0xd4) != -1) {
    return;
  }
  if (((*(byte *)(_UIDragDropItem_TypeInfo_12d6428 + 0x133) >> 2 & 1) != 0) &&
     (*(int *)(_UIDragDropItem_TypeInfo_12d6428 + 0xe0) == 0)) {
    native_sub_4327ec();
  }
  if (**(long **)(_UIDragDropItem_TypeInfo_12d6428 + 0xb8) == 0) {
LAB_009e0b98:
                    /* WARNING: Subroutine does not return */
    native_sub_432810();
  }
  if (*(int *)(**(long **)(_UIDragDropItem_TypeInfo_12d6428 + 0xb8) + 0x18) != 0) {
    return;
  }
  if (((*(byte *)(_UICamera_TypeInfo_12d6410 + 0x133) >> 2 & 1) != 0) &&
     (*(int *)(_UICamera_TypeInfo_12d6410 + 0xe0) == 0)) {
    native_sub_4327ec();
  }
  param_1[0x10] = *(long *)(*(long *)(_UICamera_TypeInfo_12d6410 + 0xb8) + 0xe0);
  native_sub_4326e0();
  plVar7 = (long *)(**(code **)(*param_1 + 0x1f8))(param_1,*(undefined8 *)(*param_1 + 0x200));
  if (*(char *)((long)param_1 + 0x1c) == '\0') {
    return;
  }
  if (((*(byte *)(_UnityEngine_Object_TypeInfo_12d54e0 + 0x133) >> 2 & 1) != 0) &&
     (*(int *)(_UnityEngine_Object_TypeInfo_12d54e0 + 0xe0) == 0)) {
    native_sub_4327ec();
  }
  uVar8 = native_UnityEngine_Object__op_Inequality_8d76fc(plVar7,0,0);
  if ((uVar8 & 1) == 0) {
    return;
  }
  if (((*(byte *)(_UICamera_TypeInfo_12d6410 + 0x133) >> 2 & 1) != 0) &&
     (*(int *)(_UICamera_TypeInfo_12d6410 + 0xe0) == 0)) {
    native_sub_4327ec();
  }
  uVar12 = *(undefined8 *)(*(long *)(_UICamera_TypeInfo_12d6410 + 0xb8) + 0x180);
  uVar9 = native_sub_432808(_UICamera_MoveDelegate_TypeInfo_12d7a20);
  if (plVar7 == (long *)0x0) goto LAB_009e0b98;
  native_UICamera_MoveDelegate___ctor_552474(uVar9,plVar7,*(undefined8 *)(*plVar7 + 0x220),0);
  uVar8 = 0;
  plVar10 = (long *)native_System_Delegate__Combine_a6cf00(uVar12,uVar9);
  lVar11 = *(long *)(_UICamera_TypeInfo_12d6410 + 0xb8);
  if ((plVar10 == (long *)0x0) || (*plVar10 == _UICamera_MoveDelegate_TypeInfo_12d7a20)) {
    *(long **)(lVar11 + 0x180) = plVar10;
    native_sub_4326e0(lVar11 + 0x180,plVar10);
    uVar12 = *(undefined8 *)(*(long *)(_UICamera_TypeInfo_12d6410 + 0xb8) + 0x118);
    uVar9 = native_sub_432808(_UICamera_BoolDelegate_TypeInfo_12d79e0);
    native_UICamera_BoolDelegate___ctor_54ffc4
              (uVar9,plVar7,_Method_UIDragDropItem_OnGlobalPress___12e7800,0);
    uVar8 = 0;
    plVar10 = (long *)native_System_Delegate__Combine_a6cf00(uVar12,uVar9);
    lVar11 = *(long *)(_UICamera_TypeInfo_12d6410 + 0xb8);
    if ((plVar10 == (long *)0x0) || (*plVar10 == _UICamera_BoolDelegate_TypeInfo_12d79e0)) {
      *(long **)(lVar11 + 0x118) = plVar10;
      native_sub_4326e0(lVar11 + 0x118,plVar10);
      uVar12 = *(undefined8 *)(*(long *)(_UICamera_TypeInfo_12d6410 + 0xb8) + 0x100);
      uVar9 = native_sub_432808(_UICamera_VoidDelegate_TypeInfo_12d7a40);
      native_UICamera_VoidDelegate___ctor_553c14
                (uVar9,plVar7,_Method_UIDragDropItem_OnGlobalClick___12e77f8,0);
      uVar8 = 0;
      plVar10 = (long *)native_System_Delegate__Combine_a6cf00(uVar12,uVar9);
      lVar11 = *(long *)(_UICamera_TypeInfo_12d6410 + 0xb8);
      if ((plVar10 == (long *)0x0) || (*plVar10 == _UICamera_VoidDelegate_TypeInfo_12d7a40)) {
        *(long **)(lVar11 + 0x100) = plVar10;
        uVar8 = lVar11 + 0x100;
        goto native_sub_41086c;
      }
    }
  }
  plVar7 = (long *)native_sub_432b04(plVar10);
  if ((bRam00000000013418cb & 1) == 0) {
    native_sub_43273c(&UICamera_BoolDelegate_TypeInfo_12d79e0);
    native_sub_43273c(&UICamera_MoveDelegate_TypeInfo_12d7a20);
    native_sub_43273c(&UICamera_TypeInfo_12d6410);
    native_sub_43273c(&Method_UIDragDropItem_OnGlobalClick___12e77f8);
    native_sub_43273c(&Method_UIDragDropItem_OnGlobalPress___12e7800);
    native_sub_43273c(&UIDragDropItem_TypeInfo_12d6428);
    native_sub_43273c(&UICamera_VoidDelegate_TypeInfo_12d7a40);
    bRam00000000013418cb = 1;
  }
  if ((uVar8 & 1) == 0) {
    return;
  }
  if (((*(byte *)(_UICamera_TypeInfo_12d6410 + 0x133) >> 2 & 1) != 0) &&
     (*(int *)(_UICamera_TypeInfo_12d6410 + 0xe0) == 0)) {
    native_sub_4327ec();
  }
  if (*(int *)(*(long *)(_UICamera_TypeInfo_12d6410 + 0xb8) + 0xd4) == -1) {
    return;
  }
  uVar6 = native_UnityEngine_Time__get_frameCount_770964(0);
  if (((*(byte *)(_UIDragDropItem_TypeInfo_12d6428 + 0x133) >> 2 & 1) != 0) &&
     (*(int *)(_UIDragDropItem_TypeInfo_12d6428 + 0xe0) == 0)) {
    native_sub_4327ec(_UIDragDropItem_TypeInfo_12d6428);
  }
  *(undefined4 *)(*(long *)(_UIDragDropItem_TypeInfo_12d6428 + 0xb8) + 8) = uVar6;
  if (*(char *)((long)plVar7 + 0x79) != '\0') {
    *(undefined1 *)((long)plVar7 + 0x79) = 0;
    (**(code **)(*plVar7 + 600))(plVar7,0,*(undefined8 *)(*plVar7 + 0x260));
  }
  if (((*(byte *)(_UICamera_TypeInfo_12d6410 + 0x133) >> 2 & 1) != 0) &&
     (*(int *)(_UICamera_TypeInfo_12d6410 + 0xe0) == 0)) {
    native_sub_4327ec();
  }
  uVar12 = *(undefined8 *)(*(long *)(_UICamera_TypeInfo_12d6410 + 0xb8) + 0x118);
  uVar9 = native_sub_432808(_UICamera_BoolDelegate_TypeInfo_12d79e0);
  native_UICamera_BoolDelegate___ctor_54ffc4
            (uVar9,plVar7,_Method_UIDragDropItem_OnGlobalPress___12e7800,0);
  plVar10 = (long *)native_System_Delegate__Remove_a6d1c0(uVar12,uVar9,0);
  lVar11 = *(long *)(_UICamera_TypeInfo_12d6410 + 0xb8);
  if ((plVar10 == (long *)0x0) || (*plVar10 == _UICamera_BoolDelegate_TypeInfo_12d79e0)) {
    *(long **)(lVar11 + 0x118) = plVar10;
    native_sub_4326e0(lVar11 + 0x118,plVar10);
    uVar12 = *(undefined8 *)(*(long *)(_UICamera_TypeInfo_12d6410 + 0xb8) + 0x100);
    uVar9 = native_sub_432808(_UICamera_VoidDelegate_TypeInfo_12d7a40);
    native_UICamera_VoidDelegate___ctor_553c14
              (uVar9,plVar7,_Method_UIDragDropItem_OnGlobalClick___12e77f8,0);
    plVar10 = (long *)native_System_Delegate__Remove_a6d1c0(uVar12,uVar9,0);
    lVar11 = *(long *)(_UICamera_TypeInfo_12d6410 + 0xb8);
    if ((plVar10 == (long *)0x0) || (*plVar10 == _UICamera_VoidDelegate_TypeInfo_12d7a40)) {
      *(long **)(lVar11 + 0x100) = plVar10;
      native_sub_4326e0(lVar11 + 0x100,plVar10);
      uVar12 = *(undefined8 *)(*(long *)(_UICamera_TypeInfo_12d6410 + 0xb8) + 0x180);
      uVar9 = native_sub_432808(_UICamera_MoveDelegate_TypeInfo_12d7a20);
      native_UICamera_MoveDelegate___ctor_552474(uVar9,plVar7,*(undefined8 *)(*plVar7 + 0x220),0);
      plVar10 = (long *)native_System_Delegate__Remove_a6d1c0(uVar12,uVar9,0);
      lVar11 = *(long *)(_UICamera_TypeInfo_12d6410 + 0xb8);
      if ((plVar10 == (long *)0x0) || (*plVar10 == _UICamera_MoveDelegate_TypeInfo_12d7a20)) {
        *(long **)(lVar11 + 0x180) = plVar10;
        uVar8 = lVar11 + 0x180;
        goto native_sub_41086c;
      }
    }
  }
  auVar15 = native_sub_432b04(plVar10);
  uVar9 = auVar15._8_8_;
  plVar7 = auVar15._0_8_;
  if ((bRam00000000013418cc & 1) == 0) {
    native_sub_43273c(&UICamera_BoolDelegate_TypeInfo_12d79e0);
    native_sub_43273c(&UICamera_MoveDelegate_TypeInfo_12d7a20);
    native_sub_43273c(&UICamera_TypeInfo_12d6410);
    native_sub_43273c(&Method_UIDragDropItem_OnGlobalClick___12e77f8);
    native_sub_43273c(&Method_UIDragDropItem_OnGlobalPress___12e7800);
    native_sub_43273c(&UIDragDropItem_TypeInfo_12d6428);
    native_sub_43273c(&UICamera_VoidDelegate_TypeInfo_12d7a40);
    bRam00000000013418cc = 1;
  }
  uVar6 = native_UnityEngine_Time__get_frameCount_770964(0);
  if (((*(byte *)(_UIDragDropItem_TypeInfo_12d6428 + 0x133) >> 2 & 1) != 0) &&
     (*(int *)(_UIDragDropItem_TypeInfo_12d6428 + 0xe0) == 0)) {
    native_sub_4327ec(_UIDragDropItem_TypeInfo_12d6428);
  }
  *(undefined4 *)(*(long *)(_UIDragDropItem_TypeInfo_12d6428 + 0xb8) + 8) = uVar6;
  if (((*(byte *)(_UICamera_TypeInfo_12d6410 + 0x133) >> 2 & 1) != 0) &&
     (*(int *)(_UICamera_TypeInfo_12d6410 + 0xe0) == 0)) {
    native_sub_4327ec();
  }
  if (*(int *)(*(long *)(_UICamera_TypeInfo_12d6410 + 0xb8) + 0xd4) == -1) {
    if (*(char *)((long)plVar7 + 0x79) != '\0') {
      lVar11 = *plVar7;
      *(undefined1 *)((long)plVar7 + 0x79) = 0;
      goto LAB_009e0f8c;
    }
  }
  else if (*(char *)((long)plVar7 + 0x79) != '\0') {
    lVar11 = *plVar7;
    *(undefined1 *)((long)plVar7 + 0x79) = 0;
    uVar9 = 0;
LAB_009e0f8c:
    (**(code **)(lVar11 + 600))(plVar7,uVar9,*(undefined8 *)(lVar11 + 0x260));
  }
  if (((*(byte *)(_UICamera_TypeInfo_12d6410 + 0x133) >> 2 & 1) != 0) &&
     (*(int *)(_UICamera_TypeInfo_12d6410 + 0xe0) == 0)) {
    native_sub_4327ec();
  }
  uVar12 = *(undefined8 *)(*(long *)(_UICamera_TypeInfo_12d6410 + 0xb8) + 0x118);
  uVar9 = native_sub_432808(_UICamera_BoolDelegate_TypeInfo_12d79e0);
  native_UICamera_BoolDelegate___ctor_54ffc4
            (uVar9,plVar7,_Method_UIDragDropItem_OnGlobalPress___12e7800,0);
  plVar10 = (long *)native_System_Delegate__Remove_a6d1c0(uVar12,uVar9,0);
  lVar11 = *(long *)(_UICamera_TypeInfo_12d6410 + 0xb8);
  if ((plVar10 == (long *)0x0) || (*plVar10 == _UICamera_BoolDelegate_TypeInfo_12d79e0)) {
    *(long **)(lVar11 + 0x118) = plVar10;
    native_sub_4326e0(lVar11 + 0x118,plVar10);
    uVar12 = *(undefined8 *)(*(long *)(_UICamera_TypeInfo_12d6410 + 0xb8) + 0x100);
    uVar9 = native_sub_432808(_UICamera_VoidDelegate_TypeInfo_12d7a40);
    native_UICamera_VoidDelegate___ctor_553c14
              (uVar9,plVar7,_Method_UIDragDropItem_OnGlobalClick___12e77f8,0);
    plVar10 = (long *)native_System_Delegate__Remove_a6d1c0(uVar12,uVar9,0);
    lVar11 = *(long *)(_UICamera_TypeInfo_12d6410 + 0xb8);
    if ((plVar10 == (long *)0x0) || (*plVar10 == _UICamera_VoidDelegate_TypeInfo_12d7a40)) {
      *(long **)(lVar11 + 0x100) = plVar10;
      native_sub_4326e0(lVar11 + 0x100,plVar10);
      uVar12 = *(undefined8 *)(*(long *)(_UICamera_TypeInfo_12d6410 + 0xb8) + 0x180);
      uVar9 = native_sub_432808(_UICamera_MoveDelegate_TypeInfo_12d7a20);
      native_UICamera_MoveDelegate___ctor_552474(uVar9,plVar7,*(undefined8 *)(*plVar7 + 0x220),0);
      plVar10 = (long *)native_System_Delegate__Remove_a6d1c0(uVar12,uVar9,0);
      lVar11 = *(long *)(_UICamera_TypeInfo_12d6410 + 0xb8);
      if ((plVar10 == (long *)0x0) || (*plVar10 == _UICamera_MoveDelegate_TypeInfo_12d7a20)) {
        *(long **)(lVar11 + 0x180) = plVar10;
        uVar8 = lVar11 + 0x180;
native_sub_41086c:
        if (iRam0000000001345318 != 0) {
          puVar1 = (ulong *)((uVar8 >> 0x12 & 0x7fff) * 8 + 0x138ecd8);
          do {
            cVar3 = '\x01';
            bVar4 = (bool)ExclusiveMonitorPass(puVar1,0x10);
            if (bVar4) {
              *puVar1 = *puVar1 | 1L << (uVar8 >> 0xc & 0x3f);
              cVar3 = ExclusiveMonitorsStatus();
            }
          } while (cVar3 != '\0');
        }
        return;
      }
    }
  }
  plVar7 = (long *)native_sub_432b04(plVar10);
  if (((((int)plVar7[3] == 3) && ((char)plVar7[0xf] != '\0')) &&
      (*(char *)((long)plVar7 + 0x79) == '\0')) &&
     (fVar14 = *(float *)(plVar7 + 0xd), fVar13 = (float)native_RealTime__get_time_72d024(0),
     fVar14 < fVar13)) {
                    /* WARNING: Could not recover jumptable at 0x009e1188. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (**(code **)(*plVar7 + 0x1f8))(plVar7,*(undefined8 *)(*plVar7 + 0x200));
    return;
  }
  return;
}



/* UIDragDropItem$$OnGlobalPress @ 0x9e0ba4
 * void UIDragDropItem__OnGlobalPress (UIDragDropItem_o* __this, UnityEngine_GameObject_o* go, bool state, const MethodInfo* method); */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* UIDragDropItem$$OnGlobalPress
   void UIDragDropItem__OnGlobalPress (UIDragDropItem_o* __this, UnityEngine_GameObject_o* go, bool
   state, const MethodInfo* method); */

void native_UIDragDropItem__OnGlobalPress_9e0ba4(long *param_1,undefined8 param_2,ulong param_3)

{
  ulong *puVar1;
  char cVar2;
  bool bVar3;
  undefined4 uVar4;
  undefined8 uVar5;
  long *plVar6;
  long *plVar7;
  long lVar8;
  undefined8 uVar9;
  float fVar10;
  float fVar11;
  undefined1 auVar12 [16];
  
  if ((bRam00000000013418cb & 1) == 0) {
    native_sub_43273c(&UICamera_BoolDelegate_TypeInfo_12d79e0);
    native_sub_43273c(&UICamera_MoveDelegate_TypeInfo_12d7a20);
    native_sub_43273c(&UICamera_TypeInfo_12d6410);
    native_sub_43273c(&Method_UIDragDropItem_OnGlobalClick___12e77f8);
    native_sub_43273c(&Method_UIDragDropItem_OnGlobalPress___12e7800);
    native_sub_43273c(&UIDragDropItem_TypeInfo_12d6428);
    native_sub_43273c(&UICamera_VoidDelegate_TypeInfo_12d7a40);
    bRam00000000013418cb = 1;
  }
  if ((param_3 & 1) == 0) {
    return;
  }
  if (((*(byte *)(_UICamera_TypeInfo_12d6410 + 0x133) >> 2 & 1) != 0) &&
     (*(int *)(_UICamera_TypeInfo_12d6410 + 0xe0) == 0)) {
    native_sub_4327ec();
  }
  if (*(int *)(*(long *)(_UICamera_TypeInfo_12d6410 + 0xb8) + 0xd4) == -1) {
    return;
  }
  uVar4 = native_UnityEngine_Time__get_frameCount_770964(0);
  if (((*(byte *)(_UIDragDropItem_TypeInfo_12d6428 + 0x133) >> 2 & 1) != 0) &&
     (*(int *)(_UIDragDropItem_TypeInfo_12d6428 + 0xe0) == 0)) {
    native_sub_4327ec(_UIDragDropItem_TypeInfo_12d6428);
  }
  *(undefined4 *)(*(long *)(_UIDragDropItem_TypeInfo_12d6428 + 0xb8) + 8) = uVar4;
  if (*(char *)((long)param_1 + 0x79) != '\0') {
    *(undefined1 *)((long)param_1 + 0x79) = 0;
    (**(code **)(*param_1 + 600))(param_1,0,*(undefined8 *)(*param_1 + 0x260));
  }
  if (((*(byte *)(_UICamera_TypeInfo_12d6410 + 0x133) >> 2 & 1) != 0) &&
     (*(int *)(_UICamera_TypeInfo_12d6410 + 0xe0) == 0)) {
    native_sub_4327ec();
  }
  uVar9 = *(undefined8 *)(*(long *)(_UICamera_TypeInfo_12d6410 + 0xb8) + 0x118);
  uVar5 = native_sub_432808(_UICamera_BoolDelegate_TypeInfo_12d79e0);
  native_UICamera_BoolDelegate___ctor_54ffc4
            (uVar5,param_1,_Method_UIDragDropItem_OnGlobalPress___12e7800,0);
  plVar6 = (long *)native_System_Delegate__Remove_a6d1c0(uVar9,uVar5,0);
  lVar8 = *(long *)(_UICamera_TypeInfo_12d6410 + 0xb8);
  if ((plVar6 == (long *)0x0) || (*plVar6 == _UICamera_BoolDelegate_TypeInfo_12d79e0)) {
    *(long **)(lVar8 + 0x118) = plVar6;
    native_sub_4326e0(lVar8 + 0x118,plVar6);
    uVar9 = *(undefined8 *)(*(long *)(_UICamera_TypeInfo_12d6410 + 0xb8) + 0x100);
    uVar5 = native_sub_432808(_UICamera_VoidDelegate_TypeInfo_12d7a40);
    native_UICamera_VoidDelegate___ctor_553c14
              (uVar5,param_1,_Method_UIDragDropItem_OnGlobalClick___12e77f8,0);
    plVar6 = (long *)native_System_Delegate__Remove_a6d1c0(uVar9,uVar5,0);
    lVar8 = *(long *)(_UICamera_TypeInfo_12d6410 + 0xb8);
    if ((plVar6 == (long *)0x0) || (*plVar6 == _UICamera_VoidDelegate_TypeInfo_12d7a40)) {
      *(long **)(lVar8 + 0x100) = plVar6;
      native_sub_4326e0(lVar8 + 0x100,plVar6);
      uVar9 = *(undefined8 *)(*(long *)(_UICamera_TypeInfo_12d6410 + 0xb8) + 0x180);
      uVar5 = native_sub_432808(_UICamera_MoveDelegate_TypeInfo_12d7a20);
      native_UICamera_MoveDelegate___ctor_552474(uVar5,param_1,*(undefined8 *)(*param_1 + 0x220),0);
      plVar6 = (long *)native_System_Delegate__Remove_a6d1c0(uVar9,uVar5,0);
      lVar8 = *(long *)(_UICamera_TypeInfo_12d6410 + 0xb8);
      if ((plVar6 == (long *)0x0) || (*plVar6 == _UICamera_MoveDelegate_TypeInfo_12d7a20)) {
        *(long **)(lVar8 + 0x180) = plVar6;
        goto native_sub_41086c;
      }
    }
  }
  auVar12 = native_sub_432b04(plVar6);
  uVar5 = auVar12._8_8_;
  plVar6 = auVar12._0_8_;
  if ((bRam00000000013418cc & 1) == 0) {
    native_sub_43273c(&UICamera_BoolDelegate_TypeInfo_12d79e0);
    native_sub_43273c(&UICamera_MoveDelegate_TypeInfo_12d7a20);
    native_sub_43273c(&UICamera_TypeInfo_12d6410);
    native_sub_43273c(&Method_UIDragDropItem_OnGlobalClick___12e77f8);
    native_sub_43273c(&Method_UIDragDropItem_OnGlobalPress___12e7800);
    native_sub_43273c(&UIDragDropItem_TypeInfo_12d6428);
    native_sub_43273c(&UICamera_VoidDelegate_TypeInfo_12d7a40);
    bRam00000000013418cc = 1;
  }
  uVar4 = native_UnityEngine_Time__get_frameCount_770964(0);
  if (((*(byte *)(_UIDragDropItem_TypeInfo_12d6428 + 0x133) >> 2 & 1) != 0) &&
     (*(int *)(_UIDragDropItem_TypeInfo_12d6428 + 0xe0) == 0)) {
    native_sub_4327ec(_UIDragDropItem_TypeInfo_12d6428);
  }
  *(undefined4 *)(*(long *)(_UIDragDropItem_TypeInfo_12d6428 + 0xb8) + 8) = uVar4;
  if (((*(byte *)(_UICamera_TypeInfo_12d6410 + 0x133) >> 2 & 1) != 0) &&
     (*(int *)(_UICamera_TypeInfo_12d6410 + 0xe0) == 0)) {
    native_sub_4327ec();
  }
  if (*(int *)(*(long *)(_UICamera_TypeInfo_12d6410 + 0xb8) + 0xd4) == -1) {
    if (*(char *)((long)plVar6 + 0x79) != '\0') {
      lVar8 = *plVar6;
      *(undefined1 *)((long)plVar6 + 0x79) = 0;
      goto LAB_009e0f8c;
    }
  }
  else if (*(char *)((long)plVar6 + 0x79) != '\0') {
    lVar8 = *plVar6;
    *(undefined1 *)((long)plVar6 + 0x79) = 0;
    uVar5 = 0;
LAB_009e0f8c:
    (**(code **)(lVar8 + 600))(plVar6,uVar5,*(undefined8 *)(lVar8 + 0x260));
  }
  if (((*(byte *)(_UICamera_TypeInfo_12d6410 + 0x133) >> 2 & 1) != 0) &&
     (*(int *)(_UICamera_TypeInfo_12d6410 + 0xe0) == 0)) {
    native_sub_4327ec();
  }
  uVar9 = *(undefined8 *)(*(long *)(_UICamera_TypeInfo_12d6410 + 0xb8) + 0x118);
  uVar5 = native_sub_432808(_UICamera_BoolDelegate_TypeInfo_12d79e0);
  native_UICamera_BoolDelegate___ctor_54ffc4
            (uVar5,plVar6,_Method_UIDragDropItem_OnGlobalPress___12e7800,0);
  plVar7 = (long *)native_System_Delegate__Remove_a6d1c0(uVar9,uVar5,0);
  lVar8 = *(long *)(_UICamera_TypeInfo_12d6410 + 0xb8);
  if ((plVar7 == (long *)0x0) || (*plVar7 == _UICamera_BoolDelegate_TypeInfo_12d79e0)) {
    *(long **)(lVar8 + 0x118) = plVar7;
    native_sub_4326e0(lVar8 + 0x118,plVar7);
    uVar9 = *(undefined8 *)(*(long *)(_UICamera_TypeInfo_12d6410 + 0xb8) + 0x100);
    uVar5 = native_sub_432808(_UICamera_VoidDelegate_TypeInfo_12d7a40);
    native_UICamera_VoidDelegate___ctor_553c14
              (uVar5,plVar6,_Method_UIDragDropItem_OnGlobalClick___12e77f8,0);
    plVar7 = (long *)native_System_Delegate__Remove_a6d1c0(uVar9,uVar5,0);
    lVar8 = *(long *)(_UICamera_TypeInfo_12d6410 + 0xb8);
    if ((plVar7 == (long *)0x0) || (*plVar7 == _UICamera_VoidDelegate_TypeInfo_12d7a40)) {
      *(long **)(lVar8 + 0x100) = plVar7;
      native_sub_4326e0(lVar8 + 0x100,plVar7);
      uVar9 = *(undefined8 *)(*(long *)(_UICamera_TypeInfo_12d6410 + 0xb8) + 0x180);
      uVar5 = native_sub_432808(_UICamera_MoveDelegate_TypeInfo_12d7a20);
      native_UICamera_MoveDelegate___ctor_552474(uVar5,plVar6,*(undefined8 *)(*plVar6 + 0x220),0);
      plVar7 = (long *)native_System_Delegate__Remove_a6d1c0(uVar9,uVar5,0);
      lVar8 = *(long *)(_UICamera_TypeInfo_12d6410 + 0xb8);
      if ((plVar7 == (long *)0x0) || (*plVar7 == _UICamera_MoveDelegate_TypeInfo_12d7a20)) {
        *(long **)(lVar8 + 0x180) = plVar7;
native_sub_41086c:
        if (iRam0000000001345318 != 0) {
          puVar1 = (ulong *)((lVar8 + 0x180U >> 0x12 & 0x7fff) * 8 + 0x138ecd8);
          do {
            cVar2 = '\x01';
            bVar3 = (bool)ExclusiveMonitorPass(puVar1,0x10);
            if (bVar3) {
              *puVar1 = *puVar1 | 1L << (lVar8 + 0x180U >> 0xc & 0x3f);
              cVar2 = ExclusiveMonitorsStatus();
            }
          } while (cVar2 != '\0');
        }
        return;
      }
    }
  }
  plVar6 = (long *)native_sub_432b04(plVar7);
  if (((((int)plVar6[3] == 3) && ((char)plVar6[0xf] != '\0')) &&
      (*(char *)((long)plVar6 + 0x79) == '\0')) &&
     (fVar11 = *(float *)(plVar6 + 0xd), fVar10 = (float)native_RealTime__get_time_72d024(0),
     fVar11 < fVar10)) {
                    /* WARNING: Could not recover jumptable at 0x009e1188. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (**(code **)(*plVar6 + 0x1f8))(plVar6,*(undefined8 *)(*plVar6 + 0x200));
    return;
  }
  return;
}



/* UIDragDropItem$$OnGlobalClick @ 0x9e0e68
 * void UIDragDropItem__OnGlobalClick (UIDragDropItem_o* __this, UnityEngine_GameObject_o* go, const MethodInfo* method); */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* UIDragDropItem$$OnGlobalClick
   void UIDragDropItem__OnGlobalClick (UIDragDropItem_o* __this, UnityEngine_GameObject_o* go, const
   MethodInfo* method); */

void native_UIDragDropItem__OnGlobalClick_9e0e68(long *param_1,undefined8 param_2)

{
  ulong uVar1;
  ulong *puVar2;
  char cVar3;
  bool bVar4;
  undefined4 uVar5;
  undefined8 uVar6;
  long *plVar7;
  long lVar8;
  undefined8 uVar9;
  float fVar10;
  float fVar11;
  
  if ((bRam00000000013418cc & 1) == 0) {
    native_sub_43273c(&UICamera_BoolDelegate_TypeInfo_12d79e0);
    native_sub_43273c(&UICamera_MoveDelegate_TypeInfo_12d7a20);
    native_sub_43273c(&UICamera_TypeInfo_12d6410);
    native_sub_43273c(&Method_UIDragDropItem_OnGlobalClick___12e77f8);
    native_sub_43273c(&Method_UIDragDropItem_OnGlobalPress___12e7800);
    native_sub_43273c(&UIDragDropItem_TypeInfo_12d6428);
    native_sub_43273c(&UICamera_VoidDelegate_TypeInfo_12d7a40);
    bRam00000000013418cc = 1;
  }
  uVar5 = native_UnityEngine_Time__get_frameCount_770964(0);
  if (((*(byte *)(_UIDragDropItem_TypeInfo_12d6428 + 0x133) >> 2 & 1) != 0) &&
     (*(int *)(_UIDragDropItem_TypeInfo_12d6428 + 0xe0) == 0)) {
    native_sub_4327ec(_UIDragDropItem_TypeInfo_12d6428);
  }
  *(undefined4 *)(*(long *)(_UIDragDropItem_TypeInfo_12d6428 + 0xb8) + 8) = uVar5;
  if (((*(byte *)(_UICamera_TypeInfo_12d6410 + 0x133) >> 2 & 1) != 0) &&
     (*(int *)(_UICamera_TypeInfo_12d6410 + 0xe0) == 0)) {
    native_sub_4327ec();
  }
  if (*(int *)(*(long *)(_UICamera_TypeInfo_12d6410 + 0xb8) + 0xd4) == -1) {
    if (*(char *)((long)param_1 + 0x79) == '\0') goto LAB_009e0f98;
    lVar8 = *param_1;
    *(undefined1 *)((long)param_1 + 0x79) = 0;
  }
  else {
    if (*(char *)((long)param_1 + 0x79) == '\0') goto LAB_009e0f98;
    lVar8 = *param_1;
    *(undefined1 *)((long)param_1 + 0x79) = 0;
    param_2 = 0;
  }
  (**(code **)(lVar8 + 600))(param_1,param_2,*(undefined8 *)(lVar8 + 0x260));
LAB_009e0f98:
  if (((*(byte *)(_UICamera_TypeInfo_12d6410 + 0x133) >> 2 & 1) != 0) &&
     (*(int *)(_UICamera_TypeInfo_12d6410 + 0xe0) == 0)) {
    native_sub_4327ec();
  }
  uVar9 = *(undefined8 *)(*(long *)(_UICamera_TypeInfo_12d6410 + 0xb8) + 0x118);
  uVar6 = native_sub_432808(_UICamera_BoolDelegate_TypeInfo_12d79e0);
  native_UICamera_BoolDelegate___ctor_54ffc4
            (uVar6,param_1,_Method_UIDragDropItem_OnGlobalPress___12e7800,0);
  plVar7 = (long *)native_System_Delegate__Remove_a6d1c0(uVar9,uVar6,0);
  lVar8 = *(long *)(_UICamera_TypeInfo_12d6410 + 0xb8);
  if ((plVar7 == (long *)0x0) || (*plVar7 == _UICamera_BoolDelegate_TypeInfo_12d79e0)) {
    *(long **)(lVar8 + 0x118) = plVar7;
    native_sub_4326e0(lVar8 + 0x118,plVar7);
    uVar9 = *(undefined8 *)(*(long *)(_UICamera_TypeInfo_12d6410 + 0xb8) + 0x100);
    uVar6 = native_sub_432808(_UICamera_VoidDelegate_TypeInfo_12d7a40);
    native_UICamera_VoidDelegate___ctor_553c14
              (uVar6,param_1,_Method_UIDragDropItem_OnGlobalClick___12e77f8,0);
    plVar7 = (long *)native_System_Delegate__Remove_a6d1c0(uVar9,uVar6,0);
    lVar8 = *(long *)(_UICamera_TypeInfo_12d6410 + 0xb8);
    if ((plVar7 == (long *)0x0) || (*plVar7 == _UICamera_VoidDelegate_TypeInfo_12d7a40)) {
      *(long **)(lVar8 + 0x100) = plVar7;
      native_sub_4326e0(lVar8 + 0x100,plVar7);
      uVar9 = *(undefined8 *)(*(long *)(_UICamera_TypeInfo_12d6410 + 0xb8) + 0x180);
      uVar6 = native_sub_432808(_UICamera_MoveDelegate_TypeInfo_12d7a20);
      native_UICamera_MoveDelegate___ctor_552474(uVar6,param_1,*(undefined8 *)(*param_1 + 0x220),0);
      plVar7 = (long *)native_System_Delegate__Remove_a6d1c0(uVar9,uVar6,0);
      lVar8 = *(long *)(_UICamera_TypeInfo_12d6410 + 0xb8);
      if ((plVar7 == (long *)0x0) || (*plVar7 == _UICamera_MoveDelegate_TypeInfo_12d7a20)) {
        *(long **)(lVar8 + 0x180) = plVar7;
        uVar1 = lVar8 + 0x180;
        if (iRam0000000001345318 != 0) {
          puVar2 = (ulong *)((uVar1 >> 0x12 & 0x7fff) * 8 + 0x138ecd8);
          do {
            cVar3 = '\x01';
            bVar4 = (bool)ExclusiveMonitorPass(puVar2,0x10);
            if (bVar4) {
              *puVar2 = *puVar2 | 1L << (uVar1 >> 0xc & 0x3f);
              cVar3 = ExclusiveMonitorsStatus();
            }
          } while (cVar3 != '\0');
        }
        return;
      }
    }
  }
  plVar7 = (long *)native_sub_432b04(plVar7);
  if (((((int)plVar7[3] == 3) && ((char)plVar7[0xf] != '\0')) &&
      (*(char *)((long)plVar7 + 0x79) == '\0')) &&
     (fVar11 = *(float *)(plVar7 + 0xd), fVar10 = (float)native_RealTime__get_time_72d024(0),
     fVar11 < fVar10)) {
                    /* WARNING: Could not recover jumptable at 0x009e1188. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (**(code **)(*plVar7 + 0x1f8))(plVar7,*(undefined8 *)(*plVar7 + 0x200));
    return;
  }
  return;
}



/* UIDragDropItem$$Update @ 0x9e112c
 * void UIDragDropItem__Update (UIDragDropItem_o* __this, const MethodInfo* method); */

/* UIDragDropItem$$Update
   void UIDragDropItem__Update (UIDragDropItem_o* __this, const MethodInfo* method); */

void native_UIDragDropItem__Update_9e112c(long *param_1)

{
  float fVar1;
  float fVar2;
  
  if (((((int)param_1[3] == 3) && ((char)param_1[0xf] != '\0')) &&
      (*(char *)((long)param_1 + 0x79) == '\0')) &&
     (fVar2 = *(float *)(param_1 + 0xd), fVar1 = (float)native_RealTime__get_time_72d024(0),
     fVar2 < fVar1)) {
                    /* WARNING: Could not recover jumptable at 0x009e1188. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (**(code **)(*param_1 + 0x1f8))(param_1,*(undefined8 *)(*param_1 + 0x200));
    return;
  }
  return;
}



/* UIDragDropItem$$OnDragStart @ 0x9e119c
 * void UIDragDropItem__OnDragStart (UIDragDropItem_o* __this, const MethodInfo* method); */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* UIDragDropItem$$OnDragStart
   void UIDragDropItem__OnDragStart (UIDragDropItem_o* __this, const MethodInfo* method); */

void native_UIDragDropItem__OnDragStart_9e119c(long *param_1)

{
  int iVar1;
  ulong uVar2;
  long lVar3;
  
  if ((bRam00000000013418cd & 1) == 0) {
    native_sub_43273c(&UICamera_TypeInfo_12d6410);
    bRam00000000013418cd = 1;
  }
  if ((*(char *)((long)param_1 + 0x1e) != '\0') &&
     (uVar2 = native_UnityEngine_Behaviour__get_enabled_8d7acc(param_1,0), (uVar2 & 1) != 0)) {
    lVar3 = param_1[0x10];
    if (((*(byte *)(_UICamera_TypeInfo_12d6410 + 0x133) >> 2 & 1) != 0) &&
       (*(int *)(_UICamera_TypeInfo_12d6410 + 0xe0) == 0)) {
      native_sub_4327ec();
    }
    if ((lVar3 == *(long *)(*(long *)(_UICamera_TypeInfo_12d6410 + 0xb8) + 0xe0)) &&
       (iVar1 = (int)param_1[3], iVar1 != 3)) {
      if (iVar1 == 2) {
        lVar3 = param_1[0x10];
        if (lVar3 == 0) {
LAB_009e12a4:
                    /* WARNING: Subroutine does not return */
          native_sub_432810();
        }
        if (ABS(*(float *)(lVar3 + 0x30)) < ABS(*(float *)(lVar3 + 0x2c))) {
          return;
        }
      }
      else if (iVar1 == 1) {
        lVar3 = param_1[0x10];
        if (lVar3 == 0) goto LAB_009e12a4;
        if (ABS(*(float *)(lVar3 + 0x2c)) < ABS(*(float *)(lVar3 + 0x30))) {
          return;
        }
      }
                    /* WARNING: Could not recover jumptable at 0x009e12a0. Too many branches */
                    /* WARNING: Treating indirect jump as call */
      (**(code **)(*param_1 + 0x1f8))(param_1,*(undefined8 *)(*param_1 + 0x200));
      return;
    }
  }
  return;
}



/* UIDragDropItem$$StartDragging @ 0x9e12a8
 * UIDragDropItem_o* UIDragDropItem__StartDragging (UIDragDropItem_o* __this, const MethodInfo* method); */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* UIDragDropItem$$StartDragging
   UIDragDropItem_o* UIDragDropItem__StartDragging (UIDragDropItem_o* __this, const MethodInfo*
   method); */

long * native_UIDragDropItem__StartDragging_9e12a8(long *param_1)

{
  undefined8 uVar1;
  ulong uVar2;
  long lVar3;
  undefined8 uVar4;
  long lVar5;
  long lVar6;
  long *plVar7;
  long *plVar8;
  long *plVar9;
  undefined1 auStack_48 [4];
  undefined1 auStack_44 [4];
  
  if ((bRam00000000013418ce & 1) == 0) {
    native_sub_43273c(&bool_TypeInfo_12d3bd0);
    native_sub_43273c(&Method_UnityEngine_Component_GetComponent_UIButtonColor____12e2ba8);
    native_sub_43273c(&Method_UnityEngine_GameObject_GetComponent_UIButtonColor____12e4a90);
    native_sub_43273c(&Method_UnityEngine_GameObject_GetComponent_UIDragDropItem____12e4a98);
    native_sub_43273c(&NGUITools_TypeInfo_12d53c8);
    native_sub_43273c(&UnityEngine_Object_TypeInfo_12d54e0);
    native_sub_43273c(&UICamera_TypeInfo_12d6410);
    native_sub_43273c(&StringLiteral_OnHover_12f0238);
    native_sub_43273c(&StringLiteral_OnPress_12f02b0);
    bRam00000000013418ce = 1;
  }
  if (*(char *)((long)param_1 + 0x1e) == '\0') {
    return (long *)0x0;
  }
  uVar1 = native_UnityEngine_Component__get_transform_8da62c(param_1,0);
  if (((*(byte *)(_UnityEngine_Object_TypeInfo_12d54e0 + 0x133) >> 2 & 1) != 0) &&
     (*(int *)(_UnityEngine_Object_TypeInfo_12d54e0 + 0xe0) == 0)) {
    native_sub_4327ec(_UnityEngine_Object_TypeInfo_12d54e0);
  }
  uVar2 = native_UnityEngine_Object__op_Implicit_8e1b98(uVar1,0);
  if ((uVar2 & 1) == 0) {
    return (long *)0x0;
  }
  lVar3 = native_UnityEngine_Component__get_transform_8da62c(param_1,0);
  if (lVar3 != 0) {
    uVar1 = native_UnityEngine_Transform__get_parent_765eb0(lVar3,0);
    if (((*(byte *)(_UnityEngine_Object_TypeInfo_12d54e0 + 0x133) >> 2 & 1) != 0) &&
       (*(int *)(_UnityEngine_Object_TypeInfo_12d54e0 + 0xe0) == 0)) {
      native_sub_4327ec(_UnityEngine_Object_TypeInfo_12d54e0);
    }
    uVar2 = native_UnityEngine_Object__op_Implicit_8e1b98(uVar1,0);
    if ((uVar2 & 1) == 0) {
      return (long *)0x0;
    }
    if (*(char *)((long)param_1 + 0x79) != '\0') {
      return (long *)0x0;
    }
    if (*(char *)((long)param_1 + 0x1d) == '\0') {
      *(undefined1 *)((long)param_1 + 0x79) = 1;
      (**(code **)(*param_1 + 0x238))(param_1,*(undefined8 *)(*param_1 + 0x240));
      return param_1;
    }
    *(undefined1 *)(param_1 + 0xf) = 0;
    lVar3 = native_UnityEngine_Component__get_transform_8da62c(param_1,0);
    if ((lVar3 != 0) &&
       (lVar3 = native_UnityEngine_Transform__get_parent_765eb0(lVar3,0), lVar3 != 0)) {
      uVar1 = native_UnityEngine_Component__get_gameObject_8da66c(lVar3,0);
      uVar4 = native_UnityEngine_Component__get_gameObject_8da66c(param_1,0);
      if (((*(byte *)(_NGUITools_TypeInfo_12d53c8 + 0x133) >> 2 & 1) != 0) &&
         (*(int *)(_NGUITools_TypeInfo_12d53c8 + 0xe0) == 0)) {
        native_sub_4327ec(_NGUITools_TypeInfo_12d53c8);
      }
      lVar3 = native_NGUITools__AddChild_72ef24(uVar1,uVar4,0);
      if (lVar3 != 0) {
        lVar5 = native_UnityEngine_GameObject__get_transform_8de5c8(lVar3,0);
        lVar6 = native_UnityEngine_Component__get_transform_8da62c(param_1,0);
        if ((lVar6 != 0) &&
           (native_UnityEngine_Transform__get_localPosition_7717f4(lVar6,0), lVar5 != 0)) {
          native_UnityEngine_Transform__set_localPosition_7718a4(lVar5,0);
          lVar5 = native_UnityEngine_GameObject__get_transform_8de5c8(lVar3,0);
          lVar6 = native_UnityEngine_Component__get_transform_8da62c(param_1,0);
          if ((lVar6 != 0) &&
             (native_UnityEngine_Transform__get_localRotation_771c84(lVar6,0), lVar5 != 0)) {
            native_UnityEngine_Transform__set_localRotation_771984(lVar5,0);
            lVar5 = native_UnityEngine_GameObject__get_transform_8de5c8(lVar3,0);
            lVar6 = native_UnityEngine_Component__get_transform_8da62c(param_1,0);
            if ((lVar6 != 0) &&
               (native_UnityEngine_Transform__get_localScale_771d80(lVar6,0), lVar5 != 0)) {
              native_UnityEngine_Transform__set_localScale_771e30(lVar5,0);
              lVar5 = native_UnityEngine_GameObject__GetComponent_BE2_BlockSectionHeader_Custom__4a2214
                                (lVar3,
                                 _Method_UnityEngine_GameObject_GetComponent_UIButtonColor____12e4a90
                                );
              if (((*(byte *)(_UnityEngine_Object_TypeInfo_12d54e0 + 0x133) >> 2 & 1) != 0) &&
                 (*(int *)(_UnityEngine_Object_TypeInfo_12d54e0 + 0xe0) == 0)) {
                native_sub_4327ec(_UnityEngine_Object_TypeInfo_12d54e0);
              }
              uVar2 = native_UnityEngine_Object__op_Inequality_8d76fc(lVar5,0,0);
              if ((uVar2 & 1) != 0) {
                lVar6 = native_UnityEngine_Component__GetComponent_ActiveAnimation__49daec
                                  (param_1,
                                   _Method_UnityEngine_Component_GetComponent_UIButtonColor____12e2ba8
                                  );
                if ((lVar6 == 0) ||
                   (native_UIButtonColor__get_defaultColor_c91cbc(lVar6,0), lVar5 == 0))
                goto LAB_009e17f8;
                native_UIButtonColor__set_defaultColor_c91cf8(lVar5,0);
              }
              plVar9 = param_1 + 0x10;
              if (*plVar9 != 0) {
                uVar4 = *(undefined8 *)(*plVar9 + 0x50);
                uVar1 = native_UnityEngine_Component__get_gameObject_8da66c(param_1,0);
                if (((*(byte *)(_UnityEngine_Object_TypeInfo_12d54e0 + 0x133) >> 2 & 1) != 0) &&
                   (*(int *)(_UnityEngine_Object_TypeInfo_12d54e0 + 0xe0) == 0)) {
                  native_sub_4327ec(_UnityEngine_Object_TypeInfo_12d54e0);
                }
                uVar2 = native_UnityEngine_Object__op_Equality_8e9a3c(uVar4,uVar1,0);
                if ((uVar2 & 1) != 0) {
                  if (*plVar9 == 0) goto LAB_009e17f8;
                  plVar7 = (long *)(*plVar9 + 0x48);
                  *plVar7 = lVar3;
                  native_sub_4326e0(plVar7,lVar3);
                  if (*plVar9 == 0) goto LAB_009e17f8;
                  plVar7 = (long *)(*plVar9 + 0x50);
                  *plVar7 = lVar3;
                  native_sub_4326e0(plVar7,lVar3);
                  if (*plVar9 == 0) goto LAB_009e17f8;
                  plVar7 = (long *)(*plVar9 + 0x58);
                  *plVar7 = lVar3;
                  native_sub_4326e0(plVar7,lVar3);
                  if (*plVar9 == 0) goto LAB_009e17f8;
                  plVar7 = (long *)(*plVar9 + 0x40);
                  *plVar7 = lVar3;
                  native_sub_4326e0(plVar7,lVar3);
                }
              }
              plVar7 = (long *)native_UnityEngine_GameObject__GetComponent_BE2_BlockSectionHeader_Custom__4a2214
                                         (lVar3,
                                          _Method_UnityEngine_GameObject_GetComponent_UIDragDropItem____12e4a98
                                         );
              if (plVar7 != (long *)0x0) {
                plVar7[0x10] = *plVar9;
                native_sub_4326e0();
                *(undefined2 *)(plVar7 + 0xf) = 0x101;
                (**(code **)(*plVar7 + 0x1a8))(plVar7,*(undefined8 *)(*plVar7 + 0x1b0));
                uVar1 = native_UnityEngine_Component__get_gameObject_8da66c(param_1,0);
                (**(code **)(*plVar7 + 0x208))(plVar7,uVar1,*(undefined8 *)(*plVar7 + 0x210));
                (**(code **)(*plVar7 + 0x238))(plVar7,*(undefined8 *)(*plVar7 + 0x240));
                if (((*(byte *)(_UICamera_TypeInfo_12d6410 + 0x133) >> 2 & 1) != 0) &&
                   (*(int *)(_UICamera_TypeInfo_12d6410 + 0xe0) == 0)) {
                  native_sub_4327ec();
                }
                plVar8 = (long *)(*(long *)(_UICamera_TypeInfo_12d6410 + 0xb8) + 0xe0);
                if (*plVar8 == 0) {
                  lVar3 = *plVar9;
                  if (((*(byte *)(_UICamera_TypeInfo_12d6410 + 0x133) >> 2 & 1) != 0) &&
                     (*(int *)(_UICamera_TypeInfo_12d6410 + 0xe0) == 0)) {
                    native_sub_4327ec();
                    plVar8 = (long *)(*(long *)(_UICamera_TypeInfo_12d6410 + 0xb8) + 0xe0);
                  }
                  *plVar8 = lVar3;
                  native_sub_4326e0(plVar8,lVar3);
                }
                param_1[0x10] = 0;
                native_sub_4326e0(plVar9,0);
                uVar1 = native_UnityEngine_Component__get_gameObject_8da66c(param_1,0);
                auStack_44[0] = 0;
                uVar4 = native_sub_4327fc(_bool_TypeInfo_12d3bd0,auStack_44);
                if (((*(byte *)(_UICamera_TypeInfo_12d6410 + 0x133) >> 2 & 1) != 0) &&
                   (*(int *)(_UICamera_TypeInfo_12d6410 + 0xe0) == 0)) {
                  native_sub_4327ec(_UICamera_TypeInfo_12d6410);
                }
                native_UICamera__Notify_c96a08(uVar1,_StringLiteral_OnPress_12f02b0,uVar4,0);
                uVar1 = native_UnityEngine_Component__get_gameObject_8da66c(param_1,0);
                auStack_48[0] = 0;
                uVar4 = native_sub_4327fc(_bool_TypeInfo_12d3bd0,auStack_48);
                native_UICamera__Notify_c96a08(uVar1,_StringLiteral_OnHover_12f0238,uVar4,0);
                return plVar7;
              }
            }
          }
        }
      }
    }
  }
LAB_009e17f8:
                    /* WARNING: Subroutine does not return */
  native_sub_432810();
}



/* UIDragDropItem$$OnClone @ 0x9e17fc
 * void UIDragDropItem__OnClone (UIDragDropItem_o* __this, UnityEngine_GameObject_o* original, const MethodInfo* method); */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* UIDragDropItem$$OnClone
   void UIDragDropItem__OnClone (UIDragDropItem_o* __this, UnityEngine_GameObject_o* original, const
   MethodInfo* method); */

void native_UIDragDropItem__OnClone_9e17fc(long param_1,long param_2)

{
  ulong *puVar1;
  char cVar2;
  bool bVar3;
  long lVar4;
  
  if ((bRam00000000013418cf & 1) == 0) {
    native_sub_43273c(&Method_UnityEngine_GameObject_GetComponent_UIDragDropItem____12e4a98);
    bRam00000000013418cf = 1;
  }
  if ((param_2 != 0) &&
     (lVar4 = native_UnityEngine_GameObject__GetComponent_BE2_BlockSectionHeader_Custom__4a2214
                        (param_2,
                         _Method_UnityEngine_GameObject_GetComponent_UIDragDropItem____12e4a98),
     lVar4 != 0)) {
    *(undefined8 *)(param_1 + 0x30) = *(undefined8 *)(lVar4 + 0x30);
    native_sub_4326e0((undefined8 *)(param_1 + 0x30));
    *(undefined8 *)(param_1 + 0x58) = *(undefined8 *)(lVar4 + 0x58);
    native_sub_4326e0(param_1 + 0x58);
    *(undefined8 *)(param_1 + 0x60) = *(undefined8 *)(lVar4 + 0x60);
    if (iRam0000000001345318 != 0) {
      puVar1 = (ulong *)((param_1 + 0x60U >> 0x12 & 0x7fff) * 8 + 0x138ecd8);
      do {
        cVar2 = '\x01';
        bVar3 = (bool)ExclusiveMonitorPass(puVar1,0x10);
        if (bVar3) {
          *puVar1 = *puVar1 | 1L << (param_1 + 0x60U >> 0xc & 0x3f);
          cVar2 = ExclusiveMonitorsStatus();
        }
      } while (cVar2 != '\0');
    }
    return;
  }
                    /* WARNING: Subroutine does not return */
  native_sub_432810();
}



/* UIDragDropItem$$OnDrag @ 0x9e1894
 * void UIDragDropItem__OnDrag (UIDragDropItem_o* __this, UnityEngine_Vector2_o delta, const MethodInfo* method); */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* UIDragDropItem$$OnDrag
   void UIDragDropItem__OnDrag (UIDragDropItem_o* __this, UnityEngine_Vector2_o delta, const
   MethodInfo* method); */

void native_UIDragDropItem__OnDrag_9e1894(ulong param_1,ulong param_2,long *param_3)

{
  ulong uVar1;
  undefined8 uVar2;
  code *UNRECOVERED_JUMPTABLE;
  long lVar3;
  float fVar4;
  
  if ((bRam00000000013418d0 & 1) == 0) {
    native_sub_43273c(&UnityEngine_Object_TypeInfo_12d54e0);
    native_sub_43273c(&UICamera_TypeInfo_12d6410);
    bRam00000000013418d0 = 1;
  }
  if (((*(char *)((long)param_3 + 0x1e) != '\0') && (*(char *)((long)param_3 + 0x79) != '\0')) &&
     (uVar1 = native_UnityEngine_Behaviour__get_enabled_8d7acc(param_3,0), (uVar1 & 1) != 0)) {
    lVar3 = param_3[0x10];
    if (((*(byte *)(_UICamera_TypeInfo_12d6410 + 0x133) >> 2 & 1) != 0) &&
       (*(int *)(_UICamera_TypeInfo_12d6410 + 0xe0) == 0)) {
      native_sub_4327ec();
    }
    if (lVar3 == *(long *)(*(long *)(_UICamera_TypeInfo_12d6410 + 0xb8) + 0xe0)) {
      lVar3 = param_3[10];
      if (((*(byte *)(_UnityEngine_Object_TypeInfo_12d54e0 + 0x133) >> 2 & 1) != 0) &&
         (*(int *)(_UnityEngine_Object_TypeInfo_12d54e0 + 0xe0) == 0)) {
        native_sub_4327ec();
      }
      uVar1 = native_UnityEngine_Object__op_Inequality_8d76fc(lVar3,0,0);
      if ((uVar1 & 1) == 0) {
        UNRECOVERED_JUMPTABLE = *(code **)(*param_3 + 0x248);
        uVar2 = *(undefined8 *)(*param_3 + 0x250);
      }
      else {
        if (param_3[10] == 0) {
                    /* WARNING: Subroutine does not return */
          native_sub_432810();
        }
        fVar4 = (float)native_UIRoot__get_pixelSizeAdjustment_c2f740(param_3[10],0);
        param_2 = (ulong)(uint)((float)param_2 * fVar4);
        UNRECOVERED_JUMPTABLE = *(code **)(*param_3 + 0x248);
        uVar2 = *(undefined8 *)(*param_3 + 0x250);
        param_1 = (ulong)(uint)((float)param_1 * fVar4);
      }
                    /* WARNING: Could not recover jumptable at 0x009e19dc. Too many branches */
                    /* WARNING: Treating indirect jump as call */
      (*UNRECOVERED_JUMPTABLE)(param_1,param_2,param_3,uVar2);
      return;
    }
  }
  return;
}



/* UIDragDropItem$$OnDragEnd @ 0x9e19e4
 * void UIDragDropItem__OnDragEnd (UIDragDropItem_o* __this, const MethodInfo* method); */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* UIDragDropItem$$OnDragEnd
   void UIDragDropItem__OnDragEnd (UIDragDropItem_o* __this, const MethodInfo* method); */

void native_UIDragDropItem__OnDragEnd_9e19e4(long *param_1)

{
  ulong uVar1;
  undefined8 uVar2;
  long lVar3;
  long lVar4;
  
  if ((bRam00000000013418d1 & 1) == 0) {
    native_sub_43273c(&UnityEngine_Object_TypeInfo_12d54e0);
    native_sub_43273c(&UICamera_TypeInfo_12d6410);
    bRam00000000013418d1 = 1;
  }
  if ((*(char *)((long)param_1 + 0x1e) != '\0') &&
     (uVar1 = native_UnityEngine_Behaviour__get_enabled_8d7acc(param_1,0), (uVar1 & 1) != 0)) {
    lVar4 = param_1[0x10];
    if (((*(byte *)(_UICamera_TypeInfo_12d6410 + 0x133) >> 2 & 1) != 0) &&
       (*(int *)(_UICamera_TypeInfo_12d6410 + 0xe0) == 0)) {
      native_sub_4327ec();
    }
    lVar3 = *(long *)(_UICamera_TypeInfo_12d6410 + 0xb8);
    if (lVar4 == *(long *)(lVar3 + 0xe0)) {
      if (((*(byte *)(_UICamera_TypeInfo_12d6410 + 0x133) >> 2 & 1) != 0) &&
         (*(int *)(_UICamera_TypeInfo_12d6410 + 0xe0) == 0)) {
        native_sub_4327ec();
        lVar3 = *(long *)(_UICamera_TypeInfo_12d6410 + 0xb8);
      }
      uVar2 = native_UnityEngine_RaycastHit__get_collider_dbcd08(lVar3 + 0x88,0);
      if (((*(byte *)(_UnityEngine_Object_TypeInfo_12d54e0 + 0x133) >> 2 & 1) != 0) &&
         (*(int *)(_UnityEngine_Object_TypeInfo_12d54e0 + 0xe0) == 0)) {
        native_sub_4327ec(_UnityEngine_Object_TypeInfo_12d54e0);
      }
      uVar1 = native_UnityEngine_Object__op_Inequality_8d76fc(uVar2,0,0);
      uVar2 = 0;
      if ((uVar1 & 1) != 0) {
        if (((*(byte *)(_UICamera_TypeInfo_12d6410 + 0x133) >> 2 & 1) != 0) &&
           (*(int *)(_UICamera_TypeInfo_12d6410 + 0xe0) == 0)) {
          native_sub_4327ec(_UICamera_TypeInfo_12d6410,0);
        }
        lVar4 = native_UnityEngine_RaycastHit__get_collider_dbcd08
                          (*(long *)(_UICamera_TypeInfo_12d6410 + 0xb8) + 0x88,0);
        if (lVar4 == 0) {
                    /* WARNING: Subroutine does not return */
          native_sub_432810();
        }
        uVar2 = native_UnityEngine_Component__get_gameObject_8da66c(lVar4,0);
      }
      if (*(char *)((long)param_1 + 0x79) != '\0') {
        *(undefined1 *)((long)param_1 + 0x79) = 0;
                    /* WARNING: Could not recover jumptable at 0x009e1b50. Too many branches */
                    /* WARNING: Treating indirect jump as call */
        (**(code **)(*param_1 + 600))(param_1,uVar2,*(undefined8 *)(*param_1 + 0x260));
        return;
      }
    }
  }
  return;
}



/* UIDragDropItem$$StopDragging @ 0x9e0610
 * void UIDragDropItem__StopDragging (UIDragDropItem_o* __this, UnityEngine_GameObject_o* go, const MethodInfo* method); */

/* UIDragDropItem$$StopDragging
   void UIDragDropItem__StopDragging (UIDragDropItem_o* __this, UnityEngine_GameObject_o* go, const
   MethodInfo* method); */

void native_UIDragDropItem__StopDragging_9e0610(long *param_1,undefined8 param_2)

{
  if (*(char *)((long)param_1 + 0x79) != '\0') {
    *(undefined1 *)((long)param_1 + 0x79) = 0;
                    /* WARNING: Could not recover jumptable at 0x009e0628. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (**(code **)(*param_1 + 600))(param_1,param_2,*(undefined8 *)(*param_1 + 0x260));
    return;
  }
  return;
}



/* UIDragDropItem$$OnDragDropStart @ 0x9e1b58
 * void UIDragDropItem__OnDragDropStart (UIDragDropItem_o* __this, const MethodInfo* method); */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* UIDragDropItem$$OnDragDropStart
   void UIDragDropItem__OnDragDropStart (UIDragDropItem_o* __this, const MethodInfo* method); */

void native_UIDragDropItem__OnDragDropStart_9e1b58
               (undefined1 param_1 [16],undefined1 param_2 [16],long param_3)

{
  long *plVar1;
  ulong uVar2;
  long *plVar3;
  long lVar4;
  undefined8 uVar5;
  undefined8 *puVar6;
  undefined1 auVar7 [16];
  
  if ((bRam00000000013418d2 & 1) == 0) {
    native_sub_43273c(&Method_UnityEngine_Component_GetComponent_SpringPosition____12e2b10);
    native_sub_43273c(&Method_UnityEngine_Component_GetComponent_TweenPosition____12e2b78);
    native_sub_43273c(&Method_System_Collections_Generic_List_UIDragDropItem__Add___12dd278);
    native_sub_43273c(&Method_System_Collections_Generic_List_UIDragDropItem__Contains___12dd280);
    native_sub_43273c(&Method_NGUITools_FindInParents_UIGrid____12e5750);
    native_sub_43273c(&Method_NGUITools_FindInParents_UIRoot____12e5788);
    native_sub_43273c(&Method_NGUITools_FindInParents_UITable____12e57a8);
    native_sub_43273c(&NGUITools_TypeInfo_12d53c8);
    native_sub_43273c(&UnityEngine_Object_TypeInfo_12d54e0);
    native_sub_43273c(&UIDragDropItem_TypeInfo_12d6428);
    native_sub_43273c(&UIDragDropRoot_TypeInfo_12d6430);
    bRam00000000013418d2 = 1;
  }
  if (((*(byte *)(_UIDragDropItem_TypeInfo_12d6428 + 0x133) >> 2 & 1) != 0) &&
     (*(int *)(_UIDragDropItem_TypeInfo_12d6428 + 0xe0) == 0)) {
    native_sub_4327ec();
  }
  if (**(long **)(_UIDragDropItem_TypeInfo_12d6428 + 0xb8) != 0) {
    uVar2 = native_System_Collections_Generic_List_BE2_UI_SelectionPanel___Contains_d40ec8
                      (**(long **)(_UIDragDropItem_TypeInfo_12d6428 + 0xb8),param_3,
                       _Method_System_Collections_Generic_List_UIDragDropItem__Contains___12dd280);
    if ((uVar2 & 1) == 0) {
      if (((*(byte *)(_UIDragDropItem_TypeInfo_12d6428 + 0x133) >> 2 & 1) != 0) &&
         (*(int *)(_UIDragDropItem_TypeInfo_12d6428 + 0xe0) == 0)) {
        native_sub_4327ec();
      }
      if (**(long **)(_UIDragDropItem_TypeInfo_12d6428 + 0xb8) == 0) goto LAB_009e20ac;
      native_System_Collections_Generic_List_int_____Add_d40c00
                (**(long **)(_UIDragDropItem_TypeInfo_12d6428 + 0xb8),param_3,
                 _Method_System_Collections_Generic_List_UIDragDropItem__Add___12dd278);
    }
    uVar5 = *(undefined8 *)(param_3 + 0x70);
    if (((*(byte *)(_UnityEngine_Object_TypeInfo_12d54e0 + 0x133) >> 2 & 1) != 0) &&
       (*(int *)(_UnityEngine_Object_TypeInfo_12d54e0 + 0xe0) == 0)) {
      native_sub_4327ec();
    }
    uVar2 = native_UnityEngine_Object__op_Inequality_8d76fc(uVar5,0,0);
    if ((uVar2 & 1) != 0) {
      if (*(long *)(param_3 + 0x70) == 0) goto LAB_009e20ac;
      native_UnityEngine_Behaviour__set_enabled_8d7b0c(*(long *)(param_3 + 0x70),0,0);
    }
    uVar5 = *(undefined8 *)(param_3 + 0x48);
    if (((*(byte *)(_UnityEngine_Object_TypeInfo_12d54e0 + 0x133) >> 2 & 1) != 0) &&
       (*(int *)(_UnityEngine_Object_TypeInfo_12d54e0 + 0xe0) == 0)) {
      native_sub_4327ec();
    }
    uVar2 = native_UnityEngine_Object__op_Inequality_8d76fc(uVar5,0,0);
    if ((uVar2 & 1) == 0) {
      uVar5 = *(undefined8 *)(param_3 + 0x38);
      if (((*(byte *)(_UnityEngine_Object_TypeInfo_12d54e0 + 0x133) >> 2 & 1) != 0) &&
         (*(int *)(_UnityEngine_Object_TypeInfo_12d54e0 + 0xe0) == 0)) {
        native_sub_4327ec();
      }
      uVar2 = native_UnityEngine_Object__op_Inequality_8d76fc(uVar5,0,0);
      if ((uVar2 & 1) == 0) {
        uVar5 = *(undefined8 *)(param_3 + 0x40);
        if (((*(byte *)(_UnityEngine_Object_TypeInfo_12d54e0 + 0x133) >> 2 & 1) != 0) &&
           (*(int *)(_UnityEngine_Object_TypeInfo_12d54e0 + 0xe0) == 0)) {
          native_sub_4327ec();
        }
        uVar2 = native_UnityEngine_Object__op_Inequality_8d76fc(uVar5,0,0);
        if ((uVar2 & 1) != 0) {
          if (*(long *)(param_3 + 0x40) == 0) goto LAB_009e20ac;
          native_UnityEngine_Behaviour__set_enabled_8d7b0c(*(long *)(param_3 + 0x40),0,0);
        }
      }
      else {
        if (*(long *)(param_3 + 0x38) == 0) goto LAB_009e20ac;
        native_UnityEngine_Collider__set_enabled_dbac4c(*(long *)(param_3 + 0x38),0,0);
      }
    }
    else {
      plVar3 = *(long **)(param_3 + 0x48);
      if (plVar3 == (long *)0x0) goto LAB_009e20ac;
      (**(code **)(*plVar3 + 0x188))(plVar3,0,*(undefined8 *)(*plVar3 + 400));
    }
    if (*(long *)(param_3 + 0x28) != 0) {
      uVar5 = native_UnityEngine_Transform__get_parent_765eb0(*(long *)(param_3 + 0x28),0);
      puVar6 = (undefined8 *)(param_3 + 0x30);
      *puVar6 = uVar5;
      native_sub_4326e0(puVar6,uVar5);
      uVar5 = *puVar6;
      if (((*(byte *)(_NGUITools_TypeInfo_12d53c8 + 0x133) >> 2 & 1) != 0) &&
         (*(int *)(_NGUITools_TypeInfo_12d53c8 + 0xe0) == 0)) {
        native_sub_4327ec();
      }
      uVar5 = native_NGUITools__FindInParents_object__4a5cac
                        (uVar5,_Method_NGUITools_FindInParents_UIRoot____12e5788);
      *(undefined8 *)(param_3 + 0x50) = uVar5;
      native_sub_4326e0((undefined8 *)(param_3 + 0x50),uVar5);
      uVar5 = native_NGUITools__FindInParents_object__4a5cac
                        (*(undefined8 *)(param_3 + 0x30),
                         _Method_NGUITools_FindInParents_UIGrid____12e5750);
      plVar3 = (long *)(param_3 + 0x58);
      *(undefined8 *)(param_3 + 0x58) = uVar5;
      native_sub_4326e0(plVar3,uVar5);
      uVar5 = native_NGUITools__FindInParents_object__4a5cac
                        (*(undefined8 *)(param_3 + 0x30),
                         _Method_NGUITools_FindInParents_UITable____12e57a8);
      plVar1 = (long *)(param_3 + 0x60);
      *(undefined8 *)(param_3 + 0x60) = uVar5;
      native_sub_4326e0(plVar1,uVar5);
      uVar5 = **(undefined8 **)(_UIDragDropRoot_TypeInfo_12d6430 + 0xb8);
      if (((*(byte *)(_UnityEngine_Object_TypeInfo_12d54e0 + 0x133) >> 2 & 1) != 0) &&
         (*(int *)(_UnityEngine_Object_TypeInfo_12d54e0 + 0xe0) == 0)) {
        native_sub_4327ec();
      }
      uVar2 = native_UnityEngine_Object__op_Inequality_8d76fc(uVar5,0,0);
      if ((uVar2 & 1) != 0) {
        if (*(long *)(param_3 + 0x28) == 0) goto LAB_009e20ac;
        native_UnityEngine_Transform__set_parent_771f18
                  (*(long *)(param_3 + 0x28),
                   **(undefined8 **)(_UIDragDropRoot_TypeInfo_12d6430 + 0xb8),0);
      }
      if (*(long *)(param_3 + 0x28) != 0) {
        auVar7 = native_UnityEngine_Transform__get_localPosition_7717f4(*(long *)(param_3 + 0x28),0)
        ;
        if (*(long *)(param_3 + 0x28) != 0) {
          native_UnityEngine_Transform__set_localPosition_7718a4
                    (auVar7,param_2,0,*(long *)(param_3 + 0x28),0);
          lVar4 = native_UnityEngine_Component__GetComponent_ActiveAnimation__49daec
                            (param_3,
                             _Method_UnityEngine_Component_GetComponent_TweenPosition____12e2b78);
          if (((*(byte *)(_UnityEngine_Object_TypeInfo_12d54e0 + 0x133) >> 2 & 1) != 0) &&
             (*(int *)(_UnityEngine_Object_TypeInfo_12d54e0 + 0xe0) == 0)) {
            native_sub_4327ec(_UnityEngine_Object_TypeInfo_12d54e0);
          }
          uVar2 = native_UnityEngine_Object__op_Inequality_8d76fc(lVar4,0,0);
          if ((uVar2 & 1) != 0) {
            if (lVar4 == 0) goto LAB_009e20ac;
            native_UnityEngine_Behaviour__set_enabled_8d7b0c(lVar4,0,0);
          }
          lVar4 = native_UnityEngine_Component__GetComponent_ActiveAnimation__49daec
                            (param_3,
                             _Method_UnityEngine_Component_GetComponent_SpringPosition____12e2b10);
          if (((*(byte *)(_UnityEngine_Object_TypeInfo_12d54e0 + 0x133) >> 2 & 1) != 0) &&
             (*(int *)(_UnityEngine_Object_TypeInfo_12d54e0 + 0xe0) == 0)) {
            native_sub_4327ec(_UnityEngine_Object_TypeInfo_12d54e0);
          }
          uVar2 = native_UnityEngine_Object__op_Inequality_8d76fc(lVar4,0,0);
          if ((uVar2 & 1) != 0) {
            if (lVar4 == 0) goto LAB_009e20ac;
            native_UnityEngine_Behaviour__set_enabled_8d7b0c(lVar4,0,0);
          }
          uVar5 = native_UnityEngine_Component__get_gameObject_8da66c(param_3,0);
          if (((*(byte *)(_NGUITools_TypeInfo_12d53c8 + 0x133) >> 2 & 1) != 0) &&
             (*(int *)(_NGUITools_TypeInfo_12d53c8 + 0xe0) == 0)) {
            native_sub_4327ec(_NGUITools_TypeInfo_12d53c8);
          }
          native_NGUITools__MarkParentAsChanged_732e70(uVar5,0);
          lVar4 = *plVar1;
          if (((*(byte *)(_UnityEngine_Object_TypeInfo_12d54e0 + 0x133) >> 2 & 1) != 0) &&
             (*(int *)(_UnityEngine_Object_TypeInfo_12d54e0 + 0xe0) == 0)) {
            native_sub_4327ec();
          }
          uVar2 = native_UnityEngine_Object__op_Inequality_8d76fc(lVar4,0,0);
          if ((uVar2 & 1) != 0) {
            if (*plVar1 == 0) goto LAB_009e20ac;
            native_UITable__set_repositionNow_942384(*plVar1,1,0);
          }
          lVar4 = *plVar3;
          if (((*(byte *)(_UnityEngine_Object_TypeInfo_12d54e0 + 0x133) >> 2 & 1) != 0) &&
             (*(int *)(_UnityEngine_Object_TypeInfo_12d54e0 + 0xe0) == 0)) {
            native_sub_4327ec();
          }
          uVar2 = native_UnityEngine_Object__op_Inequality_8d76fc(lVar4,0,0);
          if ((uVar2 & 1) == 0) {
            return;
          }
          lVar4 = *plVar3;
          if (lVar4 != 0) {
            *(undefined8 *)(lVar4 + 0x68) = 0;
            native_sub_4326e0((undefined8 *)(lVar4 + 0x68),0);
            if (pcRam0000000001340948 == (code *)0x0) {
              pcRam0000000001340948 = (code *)native_sub_4326f0(&UNK_00e2c702);
            }
                    /* WARNING: Could not recover jumptable at 0x008d7b58. Too many branches */
                    /* WARNING: Treating indirect jump as call */
            (*pcRam0000000001340948)(lVar4,1);
            return;
          }
        }
      }
    }
  }
LAB_009e20ac:
                    /* WARNING: Subroutine does not return */
  native_sub_432810();
}



/* UIDragDropItem$$OnDragDropMove @ 0x9e20ec
 * void UIDragDropItem__OnDragDropMove (UIDragDropItem_o* __this, UnityEngine_Vector2_o delta, const MethodInfo* method); */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* UIDragDropItem$$OnDragDropMove
   void UIDragDropItem__OnDragDropMove (UIDragDropItem_o* __this, UnityEngine_Vector2_o delta, const
   MethodInfo* method); */

void native_UIDragDropItem__OnDragDropMove_9e20ec(undefined8 param_1,long param_2)

{
  ulong uVar1;
  long lVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  
  if ((bRam00000000013418d3 & 1) == 0) {
    native_sub_43273c(&UnityEngine_Object_TypeInfo_12d54e0);
    bRam00000000013418d3 = 1;
  }
  uVar3 = *(undefined8 *)(param_2 + 0x30);
  if (((*(byte *)(_UnityEngine_Object_TypeInfo_12d54e0 + 0x133) >> 2 & 1) != 0) &&
     (*(int *)(_UnityEngine_Object_TypeInfo_12d54e0 + 0xe0) == 0)) {
    native_sub_4327ec();
  }
  uVar1 = native_UnityEngine_Object__op_Inequality_8d76fc(uVar3,0,0);
  if ((uVar1 & 1) == 0) {
    return;
  }
  if (*(long *)(param_2 + 0x28) != 0) {
    uVar4 = native_UnityEngine_Transform__InverseTransformDirection_772814
                      (param_1,*(long *)(param_2 + 0x28),0);
    uVar3 = *(undefined8 *)(param_2 + 0x50);
    if (((*(byte *)(_UnityEngine_Object_TypeInfo_12d54e0 + 0x133) >> 2 & 1) != 0) &&
       (*(int *)(_UnityEngine_Object_TypeInfo_12d54e0 + 0xe0) == 0)) {
      native_sub_4327ec();
    }
    uVar1 = native_UnityEngine_Object__op_Inequality_8d76fc(uVar3,0,0);
    if ((uVar1 & 1) != 0) {
      if ((*(long *)(param_2 + 0x50) == 0) ||
         (lVar2 = native_UnityEngine_Component__get_transform_8da62c(*(long *)(param_2 + 0x50),0),
         lVar2 == 0)) goto LAB_009e224c;
      native_UnityEngine_Transform__TransformDirection_7722dc(uVar4,lVar2,0);
    }
    lVar2 = *(long *)(param_2 + 0x28);
    if (lVar2 != 0) {
      native_UnityEngine_Transform__get_localPosition_7717f4(lVar2,0);
      if (pcRam000000000133fee8 == (code *)0x0) {
        pcRam000000000133fee8 = (code *)native_sub_4326f0(&UNK_00e2ada3,0);
      }
      (*pcRam000000000133fee8)(lVar2,&stack0xffffffffffffffd0);
      return;
    }
  }
LAB_009e224c:
                    /* WARNING: Subroutine does not return */
  native_sub_432810();
}



/* UIDragDropItem$$OnDragDropRelease @ 0x9e2250
 * void UIDragDropItem__OnDragDropRelease (UIDragDropItem_o* __this, UnityEngine_GameObject_o* surface, const MethodInfo* method); */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* UIDragDropItem$$OnDragDropRelease
   void UIDragDropItem__OnDragDropRelease (UIDragDropItem_o* __this, UnityEngine_GameObject_o*
   surface, const MethodInfo* method); */

void native_UIDragDropItem__OnDragDropRelease_9e2250
               (undefined1 param_1 [16],undefined1 param_2 [16],long *param_3,undefined8 param_4)

{
  uint uVar1;
  long lVar2;
  long lVar3;
  undefined8 *puVar4;
  ulong uVar5;
  long *plVar6;
  long *plVar7;
  uint uVar8;
  undefined8 uVar9;
  undefined4 uVar10;
  
  if ((bRam00000000013418d4 & 1) == 0) {
    native_sub_43273c(&
                      Method_UnityEngine_Component_GetComponentsInChildren_UIDragScrollView____12e2e30
                     );
    native_sub_43273c(&Method_NGUITools_FindInParents_UIDragDropContainer____12e5740);
    native_sub_43273c(&Method_NGUITools_FindInParents_UIGrid____12e5750);
    native_sub_43273c(&Method_NGUITools_FindInParents_UITable____12e57a8);
    native_sub_43273c(&NGUITools_TypeInfo_12d53c8);
    native_sub_43273c(&UnityEngine_Object_TypeInfo_12d54e0);
    native_sub_43273c(&StringLiteral_EnableDragScrollView_12eda60);
    bRam00000000013418d4 = 1;
  }
  if (*(char *)((long)param_3 + 0x1d) == '\0') {
    lVar2 = native_UnityEngine_Component__GetComponentsInChildren_BE2_UI_SelectionPanel__49de1c
                      (param_3,
                       _Method_UnityEngine_Component_GetComponentsInChildren_UIDragScrollView____12e2e30
                      );
    if (lVar2 == 0) goto LAB_009e2768;
    uVar1 = *(uint *)(lVar2 + 0x18);
    if (0 < (int)uVar1) {
      uVar8 = 0;
      do {
        if (uVar1 <= uVar8) {
          uVar9 = native_sub_43283c();
                    /* WARNING: Subroutine does not return */
          native_sub_4327dc(uVar9,0);
        }
        lVar3 = *(long *)(lVar2 + (long)(int)uVar8 * 8 + 0x20);
        if (lVar3 == 0) goto LAB_009e2768;
        puVar4 = (undefined8 *)(lVar3 + 0x18);
        *puVar4 = 0;
        native_sub_4326e0(puVar4,0);
        uVar1 = *(uint *)(lVar2 + 0x18);
        uVar8 = uVar8 + 1;
      } while ((int)uVar8 < (int)uVar1);
    }
    lVar2 = param_3[9];
    if (((*(byte *)(_UnityEngine_Object_TypeInfo_12d54e0 + 0x133) >> 2 & 1) != 0) &&
       (*(int *)(_UnityEngine_Object_TypeInfo_12d54e0 + 0xe0) == 0)) {
      native_sub_4327ec();
    }
    uVar5 = native_UnityEngine_Object__op_Inequality_8d76fc(lVar2,0,0);
    if ((uVar5 & 1) == 0) {
      lVar2 = param_3[7];
      if (((*(byte *)(_UnityEngine_Object_TypeInfo_12d54e0 + 0x133) >> 2 & 1) != 0) &&
         (*(int *)(_UnityEngine_Object_TypeInfo_12d54e0 + 0xe0) == 0)) {
        native_sub_4327ec();
      }
      uVar5 = native_UnityEngine_Object__op_Inequality_8d76fc(lVar2,0,0);
      if ((uVar5 & 1) == 0) {
        lVar2 = param_3[8];
        if (((*(byte *)(_UnityEngine_Object_TypeInfo_12d54e0 + 0x133) >> 2 & 1) != 0) &&
           (*(int *)(_UnityEngine_Object_TypeInfo_12d54e0 + 0xe0) == 0)) {
          native_sub_4327ec();
        }
        uVar5 = native_UnityEngine_Object__op_Inequality_8d76fc(lVar2,0,0);
        if ((uVar5 & 1) != 0) {
          if (param_3[8] == 0) goto LAB_009e2768;
          native_UnityEngine_Behaviour__set_enabled_8d7b0c(param_3[8],1,0);
        }
      }
      else {
        if (param_3[7] == 0) goto LAB_009e2768;
        native_UnityEngine_Collider__set_enabled_dbac4c(param_3[7],1,0);
      }
    }
    else {
      plVar6 = (long *)param_3[9];
      if (plVar6 == (long *)0x0) goto LAB_009e2768;
      (**(code **)(*plVar6 + 0x188))(plVar6,1,*(undefined8 *)(*plVar6 + 400));
    }
    if (((*(byte *)(_UnityEngine_Object_TypeInfo_12d54e0 + 0x133) >> 2 & 1) != 0) &&
       (*(int *)(_UnityEngine_Object_TypeInfo_12d54e0 + 0xe0) == 0)) {
      native_sub_4327ec();
    }
    uVar5 = native_UnityEngine_Object__op_Implicit_8e1b98(param_4,0);
    lVar2 = 0;
    if ((uVar5 & 1) != 0) {
      if (((*(byte *)(_NGUITools_TypeInfo_12d53c8 + 0x133) >> 2 & 1) != 0) &&
         (*(int *)(_NGUITools_TypeInfo_12d53c8 + 0xe0) == 0)) {
        native_sub_4327ec();
      }
      lVar2 = native_NGUITools__FindInParents_object__4a5c04
                        (param_4,_Method_NGUITools_FindInParents_UIDragDropContainer____12e5740);
    }
    if (((*(byte *)(_UnityEngine_Object_TypeInfo_12d54e0 + 0x133) >> 2 & 1) != 0) &&
       (*(int *)(_UnityEngine_Object_TypeInfo_12d54e0 + 0xe0) == 0)) {
      native_sub_4327ec();
    }
    uVar5 = native_UnityEngine_Object__op_Inequality_8d76fc(lVar2,0,0);
    lVar3 = param_3[5];
    if ((uVar5 & 1) == 0) {
      if (lVar3 == 0) goto LAB_009e2768;
      native_UnityEngine_Transform__set_parent_771f18(lVar3,param_3[6],0);
    }
    else {
      if (lVar2 == 0) goto LAB_009e2768;
      uVar9 = *(undefined8 *)(lVar2 + 0x18);
      if (((*(byte *)(_UnityEngine_Object_TypeInfo_12d54e0 + 0x133) >> 2 & 1) != 0) &&
         (*(int *)(_UnityEngine_Object_TypeInfo_12d54e0 + 0xe0) == 0)) {
        native_sub_4327ec();
      }
      uVar5 = native_UnityEngine_Object__op_Inequality_8d76fc(uVar9,0,0);
      if ((uVar5 & 1) == 0) {
        uVar9 = native_UnityEngine_Component__get_transform_8da62c(lVar2,0);
      }
      else {
        uVar9 = *(undefined8 *)(lVar2 + 0x18);
      }
      if (lVar3 == 0) goto LAB_009e2768;
      native_UnityEngine_Transform__set_parent_771f18(lVar3,uVar9,0);
      if (param_3[5] == 0) goto LAB_009e2768;
      uVar10 = native_UnityEngine_Transform__get_localPosition_7717f4(param_3[5],0);
      if (param_3[5] == 0) goto LAB_009e2768;
      native_UnityEngine_Transform__set_localPosition_7718a4(uVar10,param_2,0,param_3[5],0);
    }
    if (param_3[5] == 0) {
LAB_009e2768:
                    /* WARNING: Subroutine does not return */
      native_sub_432810();
    }
    lVar2 = native_UnityEngine_Transform__get_parent_765eb0(param_3[5],0);
    plVar6 = param_3 + 6;
    *plVar6 = lVar2;
    native_sub_4326e0(plVar6,lVar2);
    lVar2 = *plVar6;
    if (((*(byte *)(_NGUITools_TypeInfo_12d53c8 + 0x133) >> 2 & 1) != 0) &&
       (*(int *)(_NGUITools_TypeInfo_12d53c8 + 0xe0) == 0)) {
      native_sub_4327ec();
    }
    lVar2 = native_NGUITools__FindInParents_object__4a5cac
                      (lVar2,_Method_NGUITools_FindInParents_UIGrid____12e5750);
    plVar7 = param_3 + 0xb;
    *plVar7 = lVar2;
    native_sub_4326e0(plVar7,lVar2);
    lVar2 = native_NGUITools__FindInParents_object__4a5cac
                      (param_3[6],_Method_NGUITools_FindInParents_UITable____12e57a8);
    plVar6 = param_3 + 0xc;
    param_3[0xc] = lVar2;
    native_sub_4326e0(plVar6,lVar2);
    lVar2 = param_3[0xe];
    if (((*(byte *)(_UnityEngine_Object_TypeInfo_12d54e0 + 0x133) >> 2 & 1) != 0) &&
       (*(int *)(_UnityEngine_Object_TypeInfo_12d54e0 + 0xe0) == 0)) {
      native_sub_4327ec();
    }
    uVar5 = native_UnityEngine_Object__op_Inequality_8d76fc(lVar2,0,0);
    if ((uVar5 & 1) != 0) {
      native_UnityEngine_MonoBehaviour__Invoke_8e8cf0
                (0x3a83126f,param_3,_StringLiteral_EnableDragScrollView_12eda60,0);
    }
    uVar9 = native_UnityEngine_Component__get_gameObject_8da66c(param_3,0);
    if (((*(byte *)(_NGUITools_TypeInfo_12d53c8 + 0x133) >> 2 & 1) != 0) &&
       (*(int *)(_NGUITools_TypeInfo_12d53c8 + 0xe0) == 0)) {
      native_sub_4327ec(_NGUITools_TypeInfo_12d53c8);
    }
    native_NGUITools__MarkParentAsChanged_732e70(uVar9,0);
    lVar2 = *plVar6;
    if (((*(byte *)(_UnityEngine_Object_TypeInfo_12d54e0 + 0x133) >> 2 & 1) != 0) &&
       (*(int *)(_UnityEngine_Object_TypeInfo_12d54e0 + 0xe0) == 0)) {
      native_sub_4327ec();
    }
    uVar5 = native_UnityEngine_Object__op_Inequality_8d76fc(lVar2,0,0);
    if ((uVar5 & 1) != 0) {
      if (*plVar6 == 0) goto LAB_009e2768;
      native_UITable__set_repositionNow_942384(*plVar6,1,0);
    }
    lVar2 = *plVar7;
    if (((*(byte *)(_UnityEngine_Object_TypeInfo_12d54e0 + 0x133) >> 2 & 1) != 0) &&
       (*(int *)(_UnityEngine_Object_TypeInfo_12d54e0 + 0xe0) == 0)) {
      native_sub_4327ec();
    }
    uVar5 = native_UnityEngine_Object__op_Inequality_8d76fc(lVar2,0,0);
    if ((uVar5 & 1) != 0) {
      lVar2 = *plVar7;
      if (lVar2 == 0) goto LAB_009e2768;
      *(undefined8 *)(lVar2 + 0x68) = 0;
      native_sub_4326e0((undefined8 *)(lVar2 + 0x68),0);
      native_UnityEngine_Behaviour__set_enabled_8d7b0c(lVar2,1,0);
    }
  }
  (**(code **)(*param_3 + 0x278))(param_3,param_4,*(undefined8 *)(*param_3 + 0x280));
  if (*(char *)((long)param_3 + 0x1d) != '\0') {
                    /* WARNING: Could not recover jumptable at 0x009e274c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (**(code **)(*param_3 + 0x268))(param_3,*(undefined8 *)(*param_3 + 0x270));
    return;
  }
  return;
}



/* UIDragDropItem$$DestroySelf @ 0x9e2778
 * void UIDragDropItem__DestroySelf (UIDragDropItem_o* __this, const MethodInfo* method); */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* UIDragDropItem$$DestroySelf
   void UIDragDropItem__DestroySelf (UIDragDropItem_o* __this, const MethodInfo* method); */

void native_UIDragDropItem__DestroySelf_9e2778(undefined8 param_1)

{
  int iVar1;
  ulong uVar2;
  long *plVar3;
  long *plVar4;
  long lVar5;
  
  if ((bRam00000000013418d5 & 1) == 0) {
    native_sub_43273c(&NGUITools_TypeInfo_12d53c8);
    bRam00000000013418d5 = 1;
  }
  plVar4 = (long *)native_UnityEngine_Component__get_gameObject_8da66c(param_1,0);
  if (((*(byte *)(_NGUITools_TypeInfo_12d53c8 + 0x133) >> 2 & 1) != 0) &&
     (*(int *)(_NGUITools_TypeInfo_12d53c8 + 0xe0) == 0)) {
    native_sub_4327ec(_NGUITools_TypeInfo_12d53c8);
  }
  if ((bRam000000000133f5a9 & 1) == 0) {
    native_sub_43273c(&UnityEngine_GameObject_TypeInfo_12d47d8,0);
    native_sub_43273c(&UnityEngine_Object_TypeInfo_12d54e0);
    native_sub_43273c(&UnityEngine_Transform_TypeInfo_12d6300);
    bRam000000000133f5a9 = 1;
  }
  if (((*(byte *)(_UnityEngine_Object_TypeInfo_12d54e0 + 0x133) >> 2 & 1) != 0) &&
     (*(int *)(_UnityEngine_Object_TypeInfo_12d54e0 + 0xe0) == 0)) {
    native_sub_4327ec();
  }
  uVar2 = native_UnityEngine_Object__op_Implicit_8e1b98(plVar4,0);
  if ((uVar2 & 1) == 0) {
    return;
  }
  if (plVar4 == (long *)0x0) {
LAB_007312fc:
    uVar2 = native_UnityEngine_Application__get_isPlaying_8d60cc(0);
    if ((uVar2 & 1) == 0) {
      if ((*(ushort *)(_UnityEngine_Object_TypeInfo_12d54e0 + 0x132) >> 10 & 1) == 0)
      goto LAB_00731434;
      iVar1 = *(int *)(_UnityEngine_Object_TypeInfo_12d54e0 + 0xe0);
joined_r0x0073133c:
      if (iVar1 == 0) {
        native_sub_4327ec(_UnityEngine_Object_TypeInfo_12d54e0);
      }
LAB_00731434:
      if ((bRam0000000001341058 & 1) == 0) {
        native_sub_43273c(&UnityEngine_Object_TypeInfo_12d54e0,0);
        bRam0000000001341058 = 1;
      }
      if (((*(byte *)(_UnityEngine_Object_TypeInfo_12d54e0 + 0x133) >> 2 & 1) != 0) &&
         (*(int *)(_UnityEngine_Object_TypeInfo_12d54e0 + 0xe0) == 0)) {
        native_sub_4327ec();
      }
      if (pcRam0000000001341050 == (code *)0x0) {
        pcRam0000000001341050 = (code *)native_sub_4326f0(&UNK_00e2f80d);
      }
                    /* WARNING: Could not recover jumptable at 0x008ea6c8. Too many branches */
                    /* WARNING: Treating indirect jump as call */
      (*pcRam0000000001341050)(plVar4,0);
      return;
    }
    if ((*(ushort *)(_UnityEngine_Object_TypeInfo_12d54e0 + 0x132) >> 10 & 1) == 0)
    goto LAB_007313a4;
    iVar1 = *(int *)(_UnityEngine_Object_TypeInfo_12d54e0 + 0xe0);
  }
  else {
    lVar5 = *plVar4;
    if ((*(byte *)(_UnityEngine_Transform_TypeInfo_12d6300 + 300) <= *(byte *)(lVar5 + 300)) &&
       (*(long *)(*(long *)(lVar5 + 200) +
                  (ulong)*(byte *)(_UnityEngine_Transform_TypeInfo_12d6300 + 300) * 8 + -8) ==
        _UnityEngine_Transform_TypeInfo_12d6300)) {
      plVar3 = (long *)native_UnityEngine_Component__get_gameObject_8da66c(plVar4,0);
      uVar2 = native_UnityEngine_Application__get_isPlaying_8d60cc(0);
      if ((uVar2 & 1) == 0) {
        plVar4 = plVar3;
        if (((*(byte *)(_UnityEngine_Object_TypeInfo_12d54e0 + 0x133) >> 2 & 1) != 0) &&
           (*(int *)(_UnityEngine_Object_TypeInfo_12d54e0 + 0xe0) == 0)) {
          native_sub_4327ec();
        }
        goto LAB_00731434;
      }
      if (plVar3 == (long *)0x0) {
LAB_00731468:
                    /* WARNING: Subroutine does not return */
        native_sub_432810();
      }
      native_UnityEngine_GameObject__SetActive_8de698(plVar3,0,0);
      native_UnityEngine_Transform__set_parent_771f18(plVar4,0,0);
      plVar4 = plVar3;
      if (((*(byte *)(_UnityEngine_Object_TypeInfo_12d54e0 + 0x133) >> 2 & 1) != 0) &&
         (*(int *)(_UnityEngine_Object_TypeInfo_12d54e0 + 0xe0) == 0)) {
        native_sub_4327ec();
      }
      goto LAB_007313a4;
    }
    if (lVar5 != _UnityEngine_GameObject_TypeInfo_12d47d8) goto LAB_007312fc;
    lVar5 = native_UnityEngine_GameObject__get_transform_8de5c8(plVar4,0);
    uVar2 = native_UnityEngine_Application__get_isPlaying_8d60cc(0);
    if ((uVar2 & 1) == 0) {
      if ((*(byte *)(_UnityEngine_Object_TypeInfo_12d54e0 + 0x133) >> 2 & 1) == 0)
      goto LAB_00731434;
      iVar1 = *(int *)(_UnityEngine_Object_TypeInfo_12d54e0 + 0xe0);
      goto joined_r0x0073133c;
    }
    native_UnityEngine_GameObject__SetActive_8de698(plVar4,0,0);
    if (lVar5 == 0) goto LAB_00731468;
    native_UnityEngine_Transform__set_parent_771f18(lVar5,0,0);
    if ((*(byte *)(_UnityEngine_Object_TypeInfo_12d54e0 + 0x133) >> 2 & 1) == 0) goto LAB_007313a4;
    iVar1 = *(int *)(_UnityEngine_Object_TypeInfo_12d54e0 + 0xe0);
  }
  if (iVar1 == 0) {
    native_sub_4327ec(_UnityEngine_Object_TypeInfo_12d54e0);
  }
LAB_007313a4:
  if ((bRam0000000001341048 & 1) == 0) {
    native_sub_43273c(&UnityEngine_Object_TypeInfo_12d54e0,0);
    bRam0000000001341048 = 1;
  }
  if (((*(byte *)(_UnityEngine_Object_TypeInfo_12d54e0 + 0x133) >> 2 & 1) != 0) &&
     (*(int *)(_UnityEngine_Object_TypeInfo_12d54e0 + 0xe0) == 0)) {
    native_sub_4327ec();
  }
  if (pcRam0000000001341040 == (code *)0x0) {
    pcRam0000000001341040 = (code *)native_sub_4326f0(&UNK_00e2f7cf);
  }
                    /* WARNING: Could not recover jumptable at 0x008ea5f4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*pcRam0000000001341040)(0,plVar4);
  return;
}



/* UIDragDropItem$$OnDragDropEnd @ 0x9e27f0
 * void UIDragDropItem__OnDragDropEnd (UIDragDropItem_o* __this, UnityEngine_GameObject_o* surface, const MethodInfo* method); */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* UIDragDropItem$$OnDragDropEnd
   void UIDragDropItem__OnDragDropEnd (UIDragDropItem_o* __this, UnityEngine_GameObject_o* surface,
   const MethodInfo* method); */

void native_UIDragDropItem__OnDragDropEnd_9e27f0(long param_1)

{
  ulong *puVar1;
  char cVar2;
  bool bVar3;
  undefined8 *puVar4;
  
  if ((bRam00000000013418d6 & 1) == 0) {
    native_sub_43273c(&Method_System_Collections_Generic_List_UIDragDropItem__Remove___12dd288);
    native_sub_43273c(&UIDragDropItem_TypeInfo_12d6428);
    bRam00000000013418d6 = 1;
  }
  if (((*(byte *)(_UIDragDropItem_TypeInfo_12d6428 + 0x133) >> 2 & 1) != 0) &&
     (*(int *)(_UIDragDropItem_TypeInfo_12d6428 + 0xe0) == 0)) {
    native_sub_4327ec();
  }
  if (**(long **)(_UIDragDropItem_TypeInfo_12d6428 + 0xb8) != 0) {
    native_System_Collections_Generic_List_BMSymbol___Remove_d41f3c
              (**(long **)(_UIDragDropItem_TypeInfo_12d6428 + 0xb8),param_1,
               _Method_System_Collections_Generic_List_UIDragDropItem__Remove___12dd288);
    puVar4 = (undefined8 *)(param_1 + 0x30);
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
                    /* WARNING: Subroutine does not return */
  native_sub_432810();
}



/* UIDragDropItem$$EnableDragScrollView @ 0x9e288c
 * void UIDragDropItem__EnableDragScrollView (UIDragDropItem_o* __this, const MethodInfo* method); */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* UIDragDropItem$$EnableDragScrollView
   void UIDragDropItem__EnableDragScrollView (UIDragDropItem_o* __this, const MethodInfo* method);
    */

void native_UIDragDropItem__EnableDragScrollView_9e288c(long param_1)

{
  ulong uVar1;
  long lVar2;
  undefined8 uVar3;
  
  if ((bRam00000000013418d7 & 1) == 0) {
    native_sub_43273c(&UnityEngine_Object_TypeInfo_12d54e0);
    bRam00000000013418d7 = 1;
  }
  uVar3 = *(undefined8 *)(param_1 + 0x70);
  if (((*(byte *)(_UnityEngine_Object_TypeInfo_12d54e0 + 0x133) >> 2 & 1) != 0) &&
     (*(int *)(_UnityEngine_Object_TypeInfo_12d54e0 + 0xe0) == 0)) {
    native_sub_4327ec();
  }
  uVar1 = native_UnityEngine_Object__op_Inequality_8d76fc(uVar3,0,0);
  if ((uVar1 & 1) != 0) {
    lVar2 = *(long *)(param_1 + 0x70);
    if (lVar2 != 0) {
      if (pcRam0000000001340948 == (code *)0x0) {
        pcRam0000000001340948 = (code *)native_sub_4326f0(&UNK_00e2c702);
      }
                    /* WARNING: Could not recover jumptable at 0x008d7b58. Too many branches */
                    /* WARNING: Treating indirect jump as call */
      (*pcRam0000000001340948)(lVar2,1);
      return;
    }
                    /* WARNING: Subroutine does not return */
    native_sub_432810();
  }
  return;
}



/* UIDragDropItem$$OnApplicationFocus @ 0x9e2920
 * void UIDragDropItem__OnApplicationFocus (UIDragDropItem_o* __this, bool focus, const MethodInfo* method); */

/* UIDragDropItem$$OnApplicationFocus
   void UIDragDropItem__OnApplicationFocus (UIDragDropItem_o* __this, bool focus, const MethodInfo*
   method); */

void native_UIDragDropItem__OnApplicationFocus_9e2920(long *param_1,ulong param_2)

{
  if (((param_2 & 1) == 0) && (*(char *)((long)param_1 + 0x79) != '\0')) {
    *(undefined1 *)((long)param_1 + 0x79) = 0;
                    /* WARNING: Could not recover jumptable at 0x009e2940. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (**(code **)(*param_1 + 600))(param_1,0,*(undefined8 *)(*param_1 + 0x260));
    return;
  }
  return;
}



/* UIDragDropItem$$.ctor @ 0x9e2948
 * void UIDragDropItem___ctor (UIDragDropItem_o* __this, const MethodInfo* method); */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* UIDragDropItem$$.ctor
   void UIDragDropItem___ctor (UIDragDropItem_o* __this, const MethodInfo* method); */

undefined1  [16] native_UIDragDropItem___ctor_9e2948(ulong param_1)

{
  undefined1 auVar1 [16];
  
  *(undefined1 *)(param_1 + 0x1e) = 1;
  *(undefined4 *)(param_1 + 0x20) = 0x3f800000;
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



/* UIDragDropItem$$.cctor @ 0x9e2960
 * void UIDragDropItem___cctor (const MethodInfo* method); */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* UIDragDropItem$$.cctor
   void UIDragDropItem___cctor (const MethodInfo* method); */

void native_UIDragDropItem___cctor_9e2960(void)

{
  undefined8 uVar1;
  undefined8 *puVar2;
  
  if ((bRam00000000013418d8 & 1) == 0) {
    native_sub_43273c(&Method_System_Collections_Generic_List_UIDragDropItem___ctor___12dd270);
    native_sub_43273c(&System_Collections_Generic_List_UIDragDropItem__TypeInfo_12d2c00);
    native_sub_43273c(&UIDragDropItem_TypeInfo_12d6428);
    bRam00000000013418d8 = 1;
  }
  uVar1 = native_sub_432808(_System_Collections_Generic_List_UIDragDropItem__TypeInfo_12d2c00);
  native_System_Collections_Generic_List_XmlEventCache_XmlEvent______ctor_d3ff44
            (uVar1,_Method_System_Collections_Generic_List_UIDragDropItem___ctor___12dd270);
  puVar2 = *(undefined8 **)(_UIDragDropItem_TypeInfo_12d6428 + 0xb8);
  *puVar2 = uVar1;
  native_sub_4326e0(puVar2,uVar1);
  *(undefined4 *)(*(long *)(_UIDragDropItem_TypeInfo_12d6428 + 0xb8) + 8) = 0;
  return;
}


