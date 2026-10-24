/* ARM64 IL2CPP native pseudocode from Ghidra.
 * Recovered implementation, not original C# source.
 * Function boundaries follow the IL2CPP method address table. */


/* UIDragScrollView$$OnEnable @ 0x9e4740
 * void UIDragScrollView__OnEnable (UIDragScrollView_o* __this, const MethodInfo* method); */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* UIDragScrollView$$OnEnable
   void UIDragScrollView__OnEnable (UIDragScrollView_o* __this, const MethodInfo* method); */

void native_UIDragScrollView__OnEnable_9e4740(long param_1)

{
  ulong *puVar1;
  char cVar2;
  bool bVar3;
  undefined8 uVar4;
  ulong uVar5;
  undefined8 *puVar6;
  undefined8 *puVar7;
  undefined8 uVar8;
  
  if ((bRam00000000013418e7 & 1) == 0) {
    native_sub_43273c(&UnityEngine_Object_TypeInfo_12d54e0);
    bRam00000000013418e7 = 1;
  }
  uVar4 = native_UnityEngine_Component__get_transform_8da62c(param_1,0);
  *(undefined8 *)(param_1 + 0x28) = uVar4;
  native_sub_4326e0(param_1 + 0x28);
  puVar6 = (undefined8 *)(param_1 + 0x18);
  uVar4 = *puVar6;
  if (((*(byte *)(_UnityEngine_Object_TypeInfo_12d54e0 + 0x133) >> 2 & 1) != 0) &&
     (*(int *)(_UnityEngine_Object_TypeInfo_12d54e0 + 0xe0) == 0)) {
    native_sub_4327ec();
  }
  uVar5 = native_UnityEngine_Object__op_Equality_8e9a3c(uVar4,0,0);
  if ((uVar5 & 1) != 0) {
    puVar7 = (undefined8 *)(param_1 + 0x20);
    uVar4 = *puVar7;
    if (((*(byte *)(_UnityEngine_Object_TypeInfo_12d54e0 + 0x133) >> 2 & 1) != 0) &&
       (*(int *)(_UnityEngine_Object_TypeInfo_12d54e0 + 0xe0) == 0)) {
      native_sub_4327ec();
    }
    uVar5 = native_UnityEngine_Object__op_Inequality_8d76fc(uVar4,0,0);
    if ((uVar5 & 1) != 0) {
      *puVar6 = *puVar7;
      native_sub_4326e0(puVar6);
      *puVar7 = 0;
      native_sub_4326e0(puVar7,0);
    }
  }
  if (*(char *)(param_1 + 0x39) == '\0') {
    return;
  }
  if (*(char *)(param_1 + 0x38) == '\0') {
    uVar4 = *(undefined8 *)(param_1 + 0x30);
    if (((*(byte *)(_UnityEngine_Object_TypeInfo_12d54e0 + 0x133) >> 2 & 1) != 0) &&
       (*(int *)(_UnityEngine_Object_TypeInfo_12d54e0 + 0xe0) == 0)) {
      native_sub_4327ec();
    }
    uVar5 = native_UnityEngine_Object__op_Equality_8e9a3c(uVar4,0,0);
    if ((uVar5 & 1) == 0) {
      return;
    }
  }
  if ((bRam00000000013418e8 & 1) == 0) {
    native_sub_43273c(&Method_NGUITools_FindInParents_UIScrollView____12e5798);
    native_sub_43273c(&NGUITools_TypeInfo_12d53c8);
    native_sub_43273c(&UnityEngine_Object_TypeInfo_12d54e0);
    bRam00000000013418e8 = 1;
  }
  uVar4 = *(undefined8 *)(param_1 + 0x28);
  if (((*(byte *)(_NGUITools_TypeInfo_12d53c8 + 0x133) >> 2 & 1) != 0) &&
     (*(int *)(_NGUITools_TypeInfo_12d53c8 + 0xe0) == 0)) {
    native_sub_4327ec();
  }
  uVar4 = native_NGUITools__FindInParents_object__4a5cac
                    (uVar4,_Method_NGUITools_FindInParents_UIScrollView____12e5798);
  puVar6 = (undefined8 *)(param_1 + 0x18);
  uVar8 = *puVar6;
  if (((*(byte *)(_UnityEngine_Object_TypeInfo_12d54e0 + 0x133) >> 2 & 1) != 0) &&
     (*(int *)(_UnityEngine_Object_TypeInfo_12d54e0 + 0xe0) == 0)) {
    native_sub_4327ec(_UnityEngine_Object_TypeInfo_12d54e0);
  }
  uVar5 = native_UnityEngine_Object__op_Equality_8e9a3c(uVar8,0,0);
  if ((uVar5 & 1) == 0) {
    if (*(char *)(param_1 + 0x38) != '\0') {
      uVar8 = *puVar6;
      if (((*(byte *)(_UnityEngine_Object_TypeInfo_12d54e0 + 0x133) >> 2 & 1) != 0) &&
         (*(int *)(_UnityEngine_Object_TypeInfo_12d54e0 + 0xe0) == 0)) {
        native_sub_4327ec();
      }
      uVar5 = native_UnityEngine_Object__op_Inequality_8d76fc(uVar4,uVar8,0);
      if ((uVar5 & 1) != 0) goto LAB_009e4994;
    }
    uVar8 = *puVar6;
    if (((*(byte *)(_UnityEngine_Object_TypeInfo_12d54e0 + 0x133) >> 2 & 1) != 0) &&
       (*(int *)(_UnityEngine_Object_TypeInfo_12d54e0 + 0xe0) == 0)) {
      native_sub_4327ec();
    }
    uVar5 = native_UnityEngine_Object__op_Equality_8e9a3c(uVar8,uVar4,0);
    if ((uVar5 & 1) == 0) goto native_sub_41086c;
  }
  else {
LAB_009e4994:
    *puVar6 = uVar4;
    native_sub_4326e0(puVar6,uVar4);
  }
  *(undefined1 *)(param_1 + 0x38) = 1;
native_sub_41086c:
  *(undefined8 *)(param_1 + 0x30) = *(undefined8 *)(param_1 + 0x18);
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



/* UIDragScrollView$$Start @ 0x9e4a00
 * void UIDragScrollView__Start (UIDragScrollView_o* __this, const MethodInfo* method); */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* UIDragScrollView$$Start
   void UIDragScrollView__Start (UIDragScrollView_o* __this, const MethodInfo* method); */

void native_UIDragScrollView__Start_9e4a00(long param_1)

{
  ulong *puVar1;
  char cVar2;
  bool bVar3;
  ulong uVar4;
  undefined8 uVar5;
  undefined8 *puVar6;
  undefined8 uVar7;
  
  *(undefined1 *)(param_1 + 0x39) = 1;
  if ((bRam00000000013418e8 & 1) == 0) {
    native_sub_43273c(&Method_NGUITools_FindInParents_UIScrollView____12e5798);
    native_sub_43273c(&NGUITools_TypeInfo_12d53c8);
    native_sub_43273c(&UnityEngine_Object_TypeInfo_12d54e0);
    bRam00000000013418e8 = 1;
  }
  uVar5 = *(undefined8 *)(param_1 + 0x28);
  if (((*(byte *)(_NGUITools_TypeInfo_12d53c8 + 0x133) >> 2 & 1) != 0) &&
     (*(int *)(_NGUITools_TypeInfo_12d53c8 + 0xe0) == 0)) {
    native_sub_4327ec();
  }
  uVar5 = native_NGUITools__FindInParents_object__4a5cac
                    (uVar5,_Method_NGUITools_FindInParents_UIScrollView____12e5798);
  puVar6 = (undefined8 *)(param_1 + 0x18);
  uVar7 = *puVar6;
  if (((*(byte *)(_UnityEngine_Object_TypeInfo_12d54e0 + 0x133) >> 2 & 1) != 0) &&
     (*(int *)(_UnityEngine_Object_TypeInfo_12d54e0 + 0xe0) == 0)) {
    native_sub_4327ec(_UnityEngine_Object_TypeInfo_12d54e0);
  }
  uVar4 = native_UnityEngine_Object__op_Equality_8e9a3c(uVar7,0,0);
  if ((uVar4 & 1) == 0) {
    if (*(char *)(param_1 + 0x38) != '\0') {
      uVar7 = *puVar6;
      if (((*(byte *)(_UnityEngine_Object_TypeInfo_12d54e0 + 0x133) >> 2 & 1) != 0) &&
         (*(int *)(_UnityEngine_Object_TypeInfo_12d54e0 + 0xe0) == 0)) {
        native_sub_4327ec();
      }
      uVar4 = native_UnityEngine_Object__op_Inequality_8d76fc(uVar5,uVar7,0);
      if ((uVar4 & 1) != 0) goto LAB_009e4994;
    }
    uVar7 = *puVar6;
    if (((*(byte *)(_UnityEngine_Object_TypeInfo_12d54e0 + 0x133) >> 2 & 1) != 0) &&
       (*(int *)(_UnityEngine_Object_TypeInfo_12d54e0 + 0xe0) == 0)) {
      native_sub_4327ec();
    }
    uVar4 = native_UnityEngine_Object__op_Equality_8e9a3c(uVar7,uVar5,0);
    if ((uVar4 & 1) == 0) goto native_sub_41086c;
  }
  else {
LAB_009e4994:
    *puVar6 = uVar5;
    native_sub_4326e0(puVar6,uVar5);
  }
  *(undefined1 *)(param_1 + 0x38) = 1;
native_sub_41086c:
  *(undefined8 *)(param_1 + 0x30) = *(undefined8 *)(param_1 + 0x18);
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



/* UIDragScrollView$$FindScrollView @ 0x9e4890
 * void UIDragScrollView__FindScrollView (UIDragScrollView_o* __this, const MethodInfo* method); */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* UIDragScrollView$$FindScrollView
   void UIDragScrollView__FindScrollView (UIDragScrollView_o* __this, const MethodInfo* method); */

void native_UIDragScrollView__FindScrollView_9e4890(long param_1)

{
  ulong *puVar1;
  char cVar2;
  bool bVar3;
  ulong uVar4;
  undefined8 uVar5;
  undefined8 *puVar6;
  undefined8 uVar7;
  
  if ((bRam00000000013418e8 & 1) == 0) {
    native_sub_43273c(&Method_NGUITools_FindInParents_UIScrollView____12e5798);
    native_sub_43273c(&NGUITools_TypeInfo_12d53c8);
    native_sub_43273c(&UnityEngine_Object_TypeInfo_12d54e0);
    bRam00000000013418e8 = 1;
  }
  uVar5 = *(undefined8 *)(param_1 + 0x28);
  if (((*(byte *)(_NGUITools_TypeInfo_12d53c8 + 0x133) >> 2 & 1) != 0) &&
     (*(int *)(_NGUITools_TypeInfo_12d53c8 + 0xe0) == 0)) {
    native_sub_4327ec();
  }
  uVar5 = native_NGUITools__FindInParents_object__4a5cac
                    (uVar5,_Method_NGUITools_FindInParents_UIScrollView____12e5798);
  puVar6 = (undefined8 *)(param_1 + 0x18);
  uVar7 = *puVar6;
  if (((*(byte *)(_UnityEngine_Object_TypeInfo_12d54e0 + 0x133) >> 2 & 1) != 0) &&
     (*(int *)(_UnityEngine_Object_TypeInfo_12d54e0 + 0xe0) == 0)) {
    native_sub_4327ec(_UnityEngine_Object_TypeInfo_12d54e0);
  }
  uVar4 = native_UnityEngine_Object__op_Equality_8e9a3c(uVar7,0,0);
  if ((uVar4 & 1) == 0) {
    if (*(char *)(param_1 + 0x38) != '\0') {
      uVar7 = *puVar6;
      if (((*(byte *)(_UnityEngine_Object_TypeInfo_12d54e0 + 0x133) >> 2 & 1) != 0) &&
         (*(int *)(_UnityEngine_Object_TypeInfo_12d54e0 + 0xe0) == 0)) {
        native_sub_4327ec();
      }
      uVar4 = native_UnityEngine_Object__op_Inequality_8d76fc(uVar5,uVar7,0);
      if ((uVar4 & 1) != 0) goto LAB_009e4994;
    }
    uVar7 = *puVar6;
    if (((*(byte *)(_UnityEngine_Object_TypeInfo_12d54e0 + 0x133) >> 2 & 1) != 0) &&
       (*(int *)(_UnityEngine_Object_TypeInfo_12d54e0 + 0xe0) == 0)) {
      native_sub_4327ec();
    }
    uVar4 = native_UnityEngine_Object__op_Equality_8e9a3c(uVar7,uVar5,0);
    if ((uVar4 & 1) == 0) goto native_sub_41086c;
  }
  else {
LAB_009e4994:
    *puVar6 = uVar5;
    native_sub_4326e0(puVar6,uVar5);
  }
  *(undefined1 *)(param_1 + 0x38) = 1;
native_sub_41086c:
  *(undefined8 *)(param_1 + 0x30) = *(undefined8 *)(param_1 + 0x18);
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



/* UIDragScrollView$$OnDisable @ 0x9e4a0c
 * void UIDragScrollView__OnDisable (UIDragScrollView_o* __this, const MethodInfo* method); */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* UIDragScrollView$$OnDisable
   void UIDragScrollView__OnDisable (UIDragScrollView_o* __this, const MethodInfo* method); */

void native_UIDragScrollView__OnDisable_9e4a0c(long param_1)

{
  ulong *puVar1;
  char cVar2;
  bool bVar3;
  ulong uVar4;
  undefined8 uVar5;
  long *plVar6;
  long lVar7;
  
  if ((bRam00000000013418e9 & 1) == 0) {
    native_sub_43273c(&Method_UnityEngine_Component_GetComponentInChildren_UIWrapContent____12e2cf0)
    ;
    native_sub_43273c(&UnityEngine_Object_TypeInfo_12d54e0);
    bRam00000000013418e9 = 1;
  }
  if (*(char *)(param_1 + 0x3a) != '\0') {
    plVar6 = (long *)(param_1 + 0x30);
    lVar7 = *plVar6;
    if (((*(byte *)(_UnityEngine_Object_TypeInfo_12d54e0 + 0x133) >> 2 & 1) != 0) &&
       (*(int *)(_UnityEngine_Object_TypeInfo_12d54e0 + 0xe0) == 0)) {
      native_sub_4327ec();
    }
    uVar4 = native_UnityEngine_Object__op_Inequality_8d76fc(lVar7,0,0);
    if ((uVar4 & 1) != 0) {
      if (*plVar6 != 0) {
        uVar5 = native_UnityEngine_Component__GetComponentInChildren_Animation__49db98
                          (*plVar6,
                           _Method_UnityEngine_Component_GetComponentInChildren_UIWrapContent____12e2cf0
                          );
        if (((*(byte *)(_UnityEngine_Object_TypeInfo_12d54e0 + 0x133) >> 2 & 1) != 0) &&
           (*(int *)(_UnityEngine_Object_TypeInfo_12d54e0 + 0xe0) == 0)) {
          native_sub_4327ec(_UnityEngine_Object_TypeInfo_12d54e0);
        }
        uVar4 = native_UnityEngine_Object__op_Equality_8e9a3c(uVar5,0,0);
        if ((uVar4 & 1) == 0) {
          return;
        }
        if (*plVar6 != 0) {
          native_UIScrollView__Press_c33530(*plVar6,0,0);
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
                    /* WARNING: Subroutine does not return */
      native_sub_432810();
    }
  }
  return;
}



/* UIDragScrollView$$OnPress @ 0x9e4b1c
 * void UIDragScrollView__OnPress (UIDragScrollView_o* __this, bool pressed, const MethodInfo* method); */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* UIDragScrollView$$OnPress
   void UIDragScrollView__OnPress (UIDragScrollView_o* __this, bool pressed, const MethodInfo*
   method); */

void native_UIDragScrollView__OnPress_9e4b1c(long param_1,byte param_2)

{
  ulong *puVar1;
  char cVar2;
  bool bVar3;
  ulong uVar4;
  long *plVar5;
  long lVar6;
  undefined8 uVar7;
  undefined8 uVar8;
  
  if ((bRam00000000013418ea & 1) == 0) {
    native_sub_43273c(&Method_NGUITools_FindInParents_UIScrollView____12e5798);
    native_sub_43273c(&NGUITools_TypeInfo_12d53c8);
    native_sub_43273c(&UnityEngine_Object_TypeInfo_12d54e0);
    bRam00000000013418ea = 1;
  }
  *(byte *)(param_1 + 0x3a) = param_2 & 1;
  if (*(char *)(param_1 + 0x38) != '\0') {
    uVar7 = *(undefined8 *)(param_1 + 0x30);
    uVar8 = *(undefined8 *)(param_1 + 0x18);
    if (((*(byte *)(_UnityEngine_Object_TypeInfo_12d54e0 + 0x133) >> 2 & 1) != 0) &&
       (*(int *)(_UnityEngine_Object_TypeInfo_12d54e0 + 0xe0) == 0)) {
      native_sub_4327ec();
    }
    uVar4 = native_UnityEngine_Object__op_Inequality_8d76fc(uVar7,uVar8,0);
    if ((uVar4 & 1) != 0) {
      *(undefined8 *)(param_1 + 0x30) = *(undefined8 *)(param_1 + 0x18);
      native_sub_4326e0((undefined8 *)(param_1 + 0x30));
      *(undefined1 *)(param_1 + 0x38) = 0;
    }
  }
  plVar5 = (long *)(param_1 + 0x18);
  lVar6 = *plVar5;
  if (((*(byte *)(_UnityEngine_Object_TypeInfo_12d54e0 + 0x133) >> 2 & 1) != 0) &&
     (*(int *)(_UnityEngine_Object_TypeInfo_12d54e0 + 0xe0) == 0)) {
    native_sub_4327ec();
  }
  uVar4 = native_UnityEngine_Object__op_Implicit_8e1b98(lVar6,0);
  if (((uVar4 & 1) != 0) &&
     (uVar4 = native_UnityEngine_Behaviour__get_enabled_8d7acc(param_1,0), (uVar4 & 1) != 0)) {
    uVar7 = native_UnityEngine_Component__get_gameObject_8da66c(param_1,0);
    if (((*(byte *)(_NGUITools_TypeInfo_12d53c8 + 0x133) >> 2 & 1) != 0) &&
       (*(int *)(_NGUITools_TypeInfo_12d53c8 + 0xe0) == 0)) {
      native_sub_4327ec(_NGUITools_TypeInfo_12d53c8);
    }
    uVar4 = native_NGUITools__GetActive_72d0d4(uVar7,0);
    if ((uVar4 & 1) != 0) {
      if (*plVar5 == 0) {
                    /* WARNING: Subroutine does not return */
        native_sub_432810();
      }
      native_UIScrollView__Press_c33530(*plVar5,param_2 & 1,0);
      if (((param_2 & 1) == 0) && (*(char *)(param_1 + 0x38) != '\0')) {
        uVar7 = *(undefined8 *)(param_1 + 0x28);
        if (((*(byte *)(_NGUITools_TypeInfo_12d53c8 + 0x133) >> 2 & 1) != 0) &&
           (*(int *)(_NGUITools_TypeInfo_12d53c8 + 0xe0) == 0)) {
          native_sub_4327ec();
        }
        lVar6 = native_NGUITools__FindInParents_object__4a5cac
                          (uVar7,_Method_NGUITools_FindInParents_UIScrollView____12e5798);
        *plVar5 = lVar6;
        native_sub_4326e0(plVar5,lVar6);
        *(undefined8 *)(param_1 + 0x30) = *(undefined8 *)(param_1 + 0x18);
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
    }
  }
  return;
}



/* UIDragScrollView$$OnDrag @ 0x9e4d00
 * void UIDragScrollView__OnDrag (UIDragScrollView_o* __this, UnityEngine_Vector2_o delta, const MethodInfo* method); */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* UIDragScrollView$$OnDrag
   void UIDragScrollView__OnDrag (UIDragScrollView_o* __this, UnityEngine_Vector2_o delta, const
   MethodInfo* method); */

void native_UIDragScrollView__OnDrag_9e4d00(long param_1)

{
  bool bVar1;
  bool bVar2;
  int iVar3;
  ulong uVar4;
  long *plVar5;
  long lVar6;
  long lVar7;
  undefined8 uVar8;
  long *plVar9;
  float fVar10;
  undefined4 uVar11;
  undefined4 uVar12;
  float fVar15;
  ulong uVar13;
  undefined8 uVar14;
  uint uVar16;
  ulong uVar18;
  float fVar19;
  float fVar20;
  float fVar21;
  float fVar22;
  undefined8 uStack_100;
  undefined8 uStack_f8;
  undefined8 uStack_f0;
  undefined8 uStack_e8;
  undefined8 uStack_e0;
  undefined8 uStack_d8;
  undefined8 uStack_d0;
  undefined8 uStack_c8;
  undefined8 uStack_c0;
  undefined8 uStack_b0;
  undefined8 uStack_a8;
  undefined8 uStack_a0;
  undefined8 uStack_90;
  undefined4 uStack_88;
  undefined8 uStack_80;
  undefined8 uStack_78;
  undefined8 uStack_70;
  undefined4 uStack_54;
  ulong uVar17;
  
  if ((bRam00000000013418eb & 1) == 0) {
    native_sub_43273c(&NGUITools_TypeInfo_12d53c8);
    native_sub_43273c(&UnityEngine_Object_TypeInfo_12d54e0);
    bRam00000000013418eb = 1;
  }
  uVar8 = *(undefined8 *)(param_1 + 0x18);
  if (((*(byte *)(_UnityEngine_Object_TypeInfo_12d54e0 + 0x133) >> 2 & 1) != 0) &&
     (*(int *)(_UnityEngine_Object_TypeInfo_12d54e0 + 0xe0) == 0)) {
    native_sub_4327ec();
  }
  uVar4 = native_UnityEngine_Object__op_Implicit_8e1b98(uVar8,0);
  if ((uVar4 & 1) == 0) {
    return;
  }
  if (((*(byte *)(_NGUITools_TypeInfo_12d53c8 + 0x133) >> 2 & 1) != 0) &&
     (*(int *)(_NGUITools_TypeInfo_12d53c8 + 0xe0) == 0)) {
    native_sub_4327ec();
  }
  uVar4 = native_NGUITools__GetActive_72d02c(param_1,0);
  if ((uVar4 & 1) == 0) {
    return;
  }
  plVar5 = *(long **)(param_1 + 0x18);
  if (plVar5 == (long *)0x0) {
                    /* WARNING: Subroutine does not return */
    native_sub_432810();
  }
  if ((bRam0000000001342741 & 1) == 0) {
    native_sub_43273c(&NGUITools_TypeInfo_12d53c8,0);
    native_sub_43273c(&UICamera_TypeInfo_12d6410);
    bRam0000000001342741 = 1;
  }
  uStack_80 = 0;
  uStack_78 = 0;
  uStack_70 = 0;
  uStack_54 = 0;
  uStack_88 = 0;
  uStack_90 = 0;
  uStack_b0 = 0;
  uStack_a8 = 0;
  uStack_a0 = 0;
  uStack_c8 = 0;
  uStack_c0 = 0;
  uStack_d0 = 0;
  if (*(char *)((long)plVar5 + 0xbc) == '\0') {
    return;
  }
  if (((*(byte *)(_UICamera_TypeInfo_12d6410 + 0x133) >> 2 & 1) != 0) &&
     (*(int *)(_UICamera_TypeInfo_12d6410 + 0xe0) == 0)) {
    native_sub_4327ec();
  }
  iVar3 = native_UICamera__get_currentScheme_c92518(0);
  if (iVar3 == 2) {
    return;
  }
  uVar4 = native_UnityEngine_Behaviour__get_enabled_8d7acc(plVar5,0);
  if ((uVar4 & 1) == 0) {
    return;
  }
  uVar8 = native_UnityEngine_Component__get_gameObject_8da66c(plVar5,0);
  if (((*(byte *)(_NGUITools_TypeInfo_12d53c8 + 0x133) >> 2 & 1) != 0) &&
     (*(int *)(_NGUITools_TypeInfo_12d53c8 + 0xe0) == 0)) {
    native_sub_4327ec(_NGUITools_TypeInfo_12d53c8);
  }
  uVar4 = native_NGUITools__GetActive_72d0d4(uVar8,0);
  if ((uVar4 & 1) == 0) {
    return;
  }
  if (*(char *)((long)plVar5 + 0xe9) == '\0') {
    return;
  }
  lVar6 = _UICamera_TypeInfo_12d6410;
  if (*(int *)((long)plVar5 + 0xec) == -10) {
    if (((*(byte *)(_UICamera_TypeInfo_12d6410 + 0x133) >> 2 & 1) != 0) &&
       (*(int *)(_UICamera_TypeInfo_12d6410 + 0xe0) == 0)) {
      native_sub_4327ec();
    }
    lVar6 = _UICamera_TypeInfo_12d6410;
    *(undefined4 *)((long)plVar5 + 0xec) =
         *(undefined4 *)(*(long *)(_UICamera_TypeInfo_12d6410 + 0xb8) + 0xd4);
  }
  if (((*(byte *)(lVar6 + 0x133) >> 2 & 1) != 0) && (*(int *)(lVar6 + 0xe0) == 0)) {
    native_sub_4327ec();
    lVar6 = _UICamera_TypeInfo_12d6410;
  }
  lVar7 = *(long *)(*(long *)(lVar6 + 0xb8) + 0xe0);
  if (lVar7 == 0) goto LAB_00c340c4;
  *(undefined4 *)(lVar7 + 0x70) = 2;
  if (*(char *)((long)plVar5 + 0x23) == '\0') {
    if ((*(byte *)(lVar6 + 0x133) >> 2 & 1) != 0) {
LAB_00c33d28:
      if (*(int *)(lVar6 + 0xe0) == 0) {
        native_sub_4327ec();
        lVar6 = _UICamera_TypeInfo_12d6410;
      }
    }
LAB_00c33d38:
    lVar7 = *(long *)(*(long *)(lVar6 + 0xb8) + 0xe0);
    if ((lVar7 == 0) || (lVar6 = *(long *)(*(long *)(lVar6 + 0xb8) + 0xc0), lVar6 == 0))
    goto LAB_00c340c4;
    uVar4 = (ulong)*(uint *)(lVar7 + 0x14);
    fVar15 = *(float *)(lVar7 + 0x18);
  }
  else {
    if ((char)plVar5[0x1f] == '\0') {
      *(undefined1 *)(plVar5 + 0x1f) = 1;
      if (((*(byte *)(lVar6 + 0x133) >> 2 & 1) != 0) && (*(int *)(lVar6 + 0xe0) == 0)) {
        native_sub_4327ec();
        lVar6 = _UICamera_TypeInfo_12d6410;
      }
      lVar7 = *(long *)(*(long *)(lVar6 + 0xb8) + 0xe0);
      if (lVar7 == 0) goto LAB_00c340c4;
      plVar5[0x1e] = *(long *)(lVar7 + 0x2c);
      if (plVar5[0xb] != 0) {
        native_UIScrollView_OnDragNotification__Invoke_559534(plVar5[0xb],0);
        lVar6 = _UICamera_TypeInfo_12d6410;
      }
    }
    if (*(char *)((long)plVar5 + 0x23) == '\0') {
      if ((*(ushort *)(lVar6 + 0x132) >> 10 & 1) != 0) goto LAB_00c33d28;
      goto LAB_00c33d38;
    }
    if (((*(ushort *)(lVar6 + 0x132) >> 10 & 1) != 0) && (*(int *)(lVar6 + 0xe0) == 0)) {
      native_sub_4327ec();
      lVar6 = _UICamera_TypeInfo_12d6410;
    }
    lVar7 = *(long *)(*(long *)(lVar6 + 0xb8) + 0xe0);
    if ((lVar7 == 0) || (lVar6 = *(long *)(*(long *)(lVar6 + 0xb8) + 0xc0), lVar6 == 0))
    goto LAB_00c340c4;
    uVar8 = *(undefined8 *)(lVar7 + 0x14);
    fVar15 = (float)((ulong)uVar8 >> 0x20) - (float)((ulong)plVar5[0x1e] >> 0x20);
    uVar4 = CONCAT44(fVar15,(float)uVar8 - (float)plVar5[0x1e]);
  }
  uVar18 = 0;
  native_UnityEngine_Camera__ScreenPointToRay_8d9368(&uStack_e8,uVar4,lVar6,0);
  uStack_c8 = uStack_e0;
  uStack_d0 = uStack_e8;
  uStack_c0 = uStack_d8;
  uStack_54 = 0;
  uStack_70 = uStack_d8;
  uStack_78 = uStack_e0;
  uStack_80 = uStack_e8;
  uStack_f0 = uStack_d8;
  uStack_f8 = uStack_e0;
  uStack_100 = uStack_e8;
  uVar4 = native_UnityEngine_Plane__Raycast_8eb9a4(plVar5 + 0x14,&uStack_100,&uStack_54,0);
  if ((uVar4 & 1) == 0) {
    return;
  }
  fVar10 = (float)native_UnityEngine_Ray__GetPoint_7631f4(uStack_54,&uStack_80,0);
  lVar6 = plVar5[0x16];
  *(float *)(plVar5 + 0x16) = fVar10;
  *(float *)((long)plVar5 + 0xb4) = fVar15;
  fVar10 = fVar10 - (float)lVar6;
  fVar15 = fVar15 - (float)((ulong)lVar6 >> 0x20);
  uVar13 = CONCAT44(fVar15,fVar10);
  uVar16 = -(uint)(fVar10 == 0.0);
  uVar17 = CONCAT44(-(uint)(fVar15 == 0.0),uVar16);
  fVar10 = (float)uVar18 - *(float *)(plVar5 + 0x17);
  uVar4 = (ulong)(uint)fVar10;
  *(float *)(plVar5 + 0x17) = (float)uVar18;
  if ((((uVar16 & 1) == 0) || ((-(uint)(fVar15 == 0.0) & 1) == 0)) || (fVar10 != 0.0)) {
    if (plVar5[0x12] == 0) goto LAB_00c340c4;
    uVar17 = (ulong)(uint)fVar15;
    uVar13 = native_UnityEngine_Transform__InverseTransformDirection_772814(plVar5[0x12],0);
    iVar3 = (int)plVar5[3];
    uVar18 = 0;
    if (iVar3 == 0) {
      uVar17 = 0;
    }
    else if (iVar3 == 1) {
      uVar13 = 0;
      uVar18 = 0;
    }
    else if (iVar3 != 2) {
      uVar13 = (ulong)(uint)((float)uVar13 * *(float *)((long)plVar5 + 0x4c));
      uVar17 = (ulong)(uint)((float)uVar17 * *(float *)(plVar5 + 10));
      uVar18 = (ulong)(uint)((float)uVar4 * 0.0);
    }
    if (plVar5[0x12] == 0) goto LAB_00c340c4;
    uVar11 = native_UnityEngine_Transform__TransformDirection_7722dc(uVar13,plVar5[0x12],0);
    uVar13 = CONCAT44((int)uVar17,uVar11);
    uVar4 = uVar18;
  }
  uVar11 = (undefined4)uVar18;
  fVar15 = (float)(uVar13 >> 0x20);
  if (*(int *)((long)plVar5 + 0x1c) == 0) {
    uVar12 = native_UnityEngine_Vector3__get_zero_776668(0);
    *(undefined4 *)(plVar5 + 0x18) = uVar12;
    *(int *)((long)plVar5 + 0xc4) = (int)uVar17;
    *(undefined4 *)(plVar5 + 0x19) = uVar11;
  }
  else {
    fVar22 = *(float *)(plVar5 + 0x19);
    fVar19 = *(float *)((long)plVar5 + 0x2c) * 0.01;
    fVar20 = (float)plVar5[0x18];
    fVar21 = (float)((ulong)plVar5[0x18] >> 0x20);
    fVar10 = (float)native_UnityEngine_Mathf__Clamp01_8d9d9c(0x3f2b851f,0);
    uVar17 = CONCAT44(fVar21 + ((fVar21 + fVar15 * fVar19) - fVar21) * fVar10,
                      fVar20 + ((fVar20 + (float)uVar13 * fVar19) - fVar20) * fVar10);
    plVar5[0x18] = uVar17;
    *(float *)(plVar5 + 0x19) = fVar22 + fVar10 * ((fVar22 + (float)uVar4 * fVar19) - fVar22);
  }
  if ((*(char *)((long)plVar5 + 0x24) == '\0') || (*(int *)((long)plVar5 + 0x1c) != 2)) {
LAB_00c34014:
    native_UIScrollView__MoveAbsolute_c334b0(uVar13,uVar13 >> 0x20,uVar4,plVar5);
  }
  else {
    plVar9 = (long *)plVar5[0x13];
    (**(code **)(*plVar5 + 0x178))(&uStack_e8,plVar5,*(undefined8 *)(*plVar5 + 0x180));
    uStack_a0 = uStack_d8;
    uStack_a8 = uStack_e0;
    uStack_b0 = uStack_e8;
    uVar8 = native_UnityEngine_Bounds__get_min_8d7f18(&uStack_b0,0);
    uVar18 = uVar17;
    (**(code **)(*plVar5 + 0x178))(&uStack_e8,plVar5,*(undefined8 *)(*plVar5 + 0x180));
    uStack_a0 = uStack_d8;
    uStack_a8 = uStack_e0;
    uStack_b0 = uStack_e8;
    uVar14 = native_UnityEngine_Bounds__get_max_8d7f88(&uStack_b0,0);
    if (plVar9 == (long *)0x0) goto LAB_00c340c4;
    fVar10 = (float)(**(code **)(*plVar9 + 0x2a8))
                              (uVar8,uVar17,uVar14,uVar18,plVar9,*(undefined8 *)(*plVar9 + 0x2b0));
    uStack_90 = CONCAT44((float)uVar17,fVar10);
    uStack_88 = (undefined4)uVar14;
    iVar3 = (int)plVar5[3];
    if (iVar3 == 3) {
      uStack_90 = CONCAT44((float)uVar17 *
                           (float)((ulong)*(undefined8 *)((long)plVar5 + 0x4c) >> 0x20),
                           fVar10 * (float)*(undefined8 *)((long)plVar5 + 0x4c));
    }
    else if (iVar3 == 1) {
      uStack_90 = uVar17 << 0x20;
    }
    else if (iVar3 == 0) {
      uStack_90 = (ulong)(uint)fVar10;
    }
    fVar10 = (float)native_UnityEngine_Vector3__get_magnitude_77684c(&uStack_90,0);
    if (fVar10 <= 1.0) goto LAB_00c34014;
    native_UIScrollView__MoveAbsolute_c334b0
              ((float)uVar13 * 0.5,fVar15 * 0.5,(float)uVar4 * 0.5,plVar5);
    plVar5[0x18] = CONCAT44((float)((ulong)plVar5[0x18] >> 0x20) * 0.5,(float)plVar5[0x18] * 0.5);
    *(float *)(plVar5 + 0x19) = *(float *)(plVar5 + 0x19) * 0.5;
  }
  if (*(char *)((long)plVar5 + 0x21) == '\0') {
    return;
  }
  if ((char)plVar5[4] == '\0') {
    return;
  }
  if (plVar5[0x13] == 0) {
LAB_00c340c4:
                    /* WARNING: Subroutine does not return */
    native_sub_432810();
  }
  if (*(int *)(plVar5[0x13] + 0x140) == 0) {
    return;
  }
  if (*(int *)((long)plVar5 + 0x1c) == 2) {
    return;
  }
  iVar3 = (int)plVar5[3];
  bVar1 = true;
  if ((iVar3 != 0) && (iVar3 != 2)) {
    if (iVar3 == 3) {
      bVar1 = *(float *)((long)plVar5 + 0x4c) != 0.0;
      bVar2 = *(float *)(plVar5 + 10) == 0.0;
      goto LAB_00c34098;
    }
    bVar1 = false;
  }
  bVar2 = 1 < iVar3 - 1U;
LAB_00c34098:
  native_UIScrollView__RestrictWithinBounds_c322ac(plVar5,1,bVar1,!bVar2);
  return;
}



/* UIDragScrollView$$OnScroll @ 0x9e4dc8
 * void UIDragScrollView__OnScroll (UIDragScrollView_o* __this, float delta, const MethodInfo* method); */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* UIDragScrollView$$OnScroll
   void UIDragScrollView__OnScroll (UIDragScrollView_o* __this, float delta, const MethodInfo*
   method); */

void native_UIDragScrollView__OnScroll_9e4dc8(undefined8 param_1,long param_2)

{
  char cVar1;
  byte bVar2;
  ulong uVar3;
  long *plVar4;
  undefined8 uVar5;
  float fVar6;
  float fVar7;
  
  if ((bRam00000000013418ec & 1) == 0) {
    native_sub_43273c(&NGUITools_TypeInfo_12d53c8);
    native_sub_43273c(&UnityEngine_Object_TypeInfo_12d54e0);
    bRam00000000013418ec = 1;
  }
  uVar5 = *(undefined8 *)(param_2 + 0x18);
  if (((*(byte *)(_UnityEngine_Object_TypeInfo_12d54e0 + 0x133) >> 2 & 1) != 0) &&
     (*(int *)(_UnityEngine_Object_TypeInfo_12d54e0 + 0xe0) == 0)) {
    native_sub_4327ec();
  }
  uVar3 = native_UnityEngine_Object__op_Implicit_8e1b98(uVar5,0);
  if ((uVar3 & 1) != 0) {
    if (((*(byte *)(_NGUITools_TypeInfo_12d53c8 + 0x133) >> 2 & 1) != 0) &&
       (*(int *)(_NGUITools_TypeInfo_12d53c8 + 0xe0) == 0)) {
      native_sub_4327ec();
    }
    uVar3 = native_NGUITools__GetActive_72d02c(param_2,0);
    if ((uVar3 & 1) != 0) {
      plVar4 = *(long **)(param_2 + 0x18);
      if (plVar4 != (long *)0x0) {
        if ((bRam0000000001342742 & 1) == 0) {
          native_sub_43273c(&NGUITools_TypeInfo_12d53c8,0);
          bRam0000000001342742 = 1;
        }
        uVar3 = native_UnityEngine_Behaviour__get_enabled_8d7acc(plVar4,0);
        if ((uVar3 & 1) != 0) {
          uVar5 = native_UnityEngine_Component__get_gameObject_8da66c(plVar4,0);
          if (((*(byte *)(_NGUITools_TypeInfo_12d53c8 + 0x133) >> 2 & 1) != 0) &&
             (*(int *)(_NGUITools_TypeInfo_12d53c8 + 0xe0) == 0)) {
            native_sub_4327ec(_NGUITools_TypeInfo_12d53c8);
          }
          uVar3 = native_NGUITools__GetActive_72d0d4(uVar5,0);
          if (((uVar3 & 1) != 0) && (*(float *)(plVar4 + 5) != 0.0)) {
            native_UIScrollView__DisableSpring_c325c4(plVar4);
            cVar1 = *(char *)((long)plVar4 + 0xe9);
            bVar2 = (**(code **)(*plVar4 + 0x1a8))(plVar4,*(undefined8 *)(*plVar4 + 0x1b0));
            *(byte *)((long)plVar4 + 0xe9) = cVar1 != '\0' | bVar2 & 1;
            fVar6 = (float)native_UnityEngine_Mathf__Sign_8e51d8
                                     (*(undefined4 *)((long)plVar4 + 0xcc),0);
            fVar7 = (float)native_UnityEngine_Mathf__Sign_8e51d8(param_1,0);
            if (fVar6 == fVar7) {
              fVar6 = *(float *)((long)plVar4 + 0xcc);
            }
            else {
              fVar6 = 0.0;
              *(undefined4 *)((long)plVar4 + 0xcc) = 0;
            }
            *(float *)((long)plVar4 + 0xcc) = fVar6 + *(float *)(plVar4 + 5) * (float)param_1;
          }
        }
        return;
      }
                    /* WARNING: Subroutine does not return */
      native_sub_432810();
    }
  }
  return;
}



/* UIDragScrollView$$OnPan @ 0x9e4ea4
 * void UIDragScrollView__OnPan (UIDragScrollView_o* __this, UnityEngine_Vector2_o delta, const MethodInfo* method); */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* UIDragScrollView$$OnPan
   void UIDragScrollView__OnPan (UIDragScrollView_o* __this, UnityEngine_Vector2_o delta, const
   MethodInfo* method); */

void native_UIDragScrollView__OnPan_9e4ea4(undefined8 param_1,undefined8 param_2,long param_3)

{
  char cVar1;
  byte bVar2;
  ulong uVar3;
  long *plVar4;
  long *plVar5;
  undefined8 uVar6;
  long lVar7;
  float fVar8;
  float fVar9;
  
  if ((bRam00000000013418ed & 1) == 0) {
    native_sub_43273c(&NGUITools_TypeInfo_12d53c8);
    native_sub_43273c(&UnityEngine_Object_TypeInfo_12d54e0);
    bRam00000000013418ed = 1;
  }
  uVar6 = *(undefined8 *)(param_3 + 0x18);
  if (((*(byte *)(_UnityEngine_Object_TypeInfo_12d54e0 + 0x133) >> 2 & 1) != 0) &&
     (*(int *)(_UnityEngine_Object_TypeInfo_12d54e0 + 0xe0) == 0)) {
    native_sub_4327ec();
  }
  uVar3 = native_UnityEngine_Object__op_Implicit_8e1b98(uVar6,0);
  if ((uVar3 & 1) == 0) {
    return;
  }
  if (((*(byte *)(_NGUITools_TypeInfo_12d53c8 + 0x133) >> 2 & 1) != 0) &&
     (*(int *)(_NGUITools_TypeInfo_12d53c8 + 0xe0) == 0)) {
    native_sub_4327ec();
  }
  uVar3 = native_NGUITools__GetActive_72d02c(param_3,0);
  if ((uVar3 & 1) == 0) {
    return;
  }
  plVar4 = *(long **)(param_3 + 0x18);
  if (plVar4 == (long *)0x0) {
                    /* WARNING: Subroutine does not return */
    native_sub_432810();
  }
  if ((bRam0000000001342744 & 1) == 0) {
    native_sub_43273c(&UnityEngine_Object_TypeInfo_12d54e0,0);
    bRam0000000001342744 = 1;
  }
  lVar7 = plVar4[7];
  if (((*(byte *)(_UnityEngine_Object_TypeInfo_12d54e0 + 0x133) >> 2 & 1) != 0) &&
     (*(int *)(_UnityEngine_Object_TypeInfo_12d54e0 + 0xe0) == 0)) {
    native_sub_4327ec();
  }
  uVar3 = native_UnityEngine_Object__op_Inequality_8d76fc(lVar7,0,0);
  if ((uVar3 & 1) != 0) {
    plVar5 = (long *)plVar4[7];
    if (plVar5 == (long *)0x0) goto LAB_00c34980;
    (**(code **)(*plVar5 + 0x1b8))(param_1,param_2,plVar5,*(undefined8 *)(*plVar5 + 0x1c0));
  }
  lVar7 = plVar4[8];
  if (((*(byte *)(_UnityEngine_Object_TypeInfo_12d54e0 + 0x133) >> 2 & 1) != 0) &&
     (*(int *)(_UnityEngine_Object_TypeInfo_12d54e0 + 0xe0) == 0)) {
    native_sub_4327ec();
  }
  uVar3 = native_UnityEngine_Object__op_Inequality_8d76fc(lVar7,0,0);
  if ((uVar3 & 1) != 0) {
    plVar5 = (long *)plVar4[8];
    if (plVar5 == (long *)0x0) {
LAB_00c34980:
                    /* WARNING: Subroutine does not return */
      native_sub_432810();
    }
    (**(code **)(*plVar5 + 0x1b8))(param_1,param_2,plVar5,*(undefined8 *)(*plVar5 + 0x1c0));
  }
  lVar7 = plVar4[7];
  if (((*(byte *)(_UnityEngine_Object_TypeInfo_12d54e0 + 0x133) >> 2 & 1) != 0) &&
     (*(int *)(_UnityEngine_Object_TypeInfo_12d54e0 + 0xe0) == 0)) {
    native_sub_4327ec();
  }
  uVar3 = native_UnityEngine_Object__op_Equality_8e9a3c(lVar7,0,0);
  if ((uVar3 & 1) == 0) {
LAB_00c3496c:
    return;
  }
  lVar7 = plVar4[8];
  if (((*(byte *)(_UnityEngine_Object_TypeInfo_12d54e0 + 0x133) >> 2 & 1) != 0) &&
     (*(int *)(_UnityEngine_Object_TypeInfo_12d54e0 + 0xe0) == 0)) {
    native_sub_4327ec();
  }
  uVar3 = native_UnityEngine_Object__op_Equality_8e9a3c(lVar7,0,0);
  if ((uVar3 & 1) == 0) {
    return;
  }
  switch((int)plVar4[3]) {
  case 1:
code_r0x00c3492c:
    break;
  case 3:
    if (*(float *)((long)plVar4 + 0x4c) == 0.0) {
      if (*(float *)(plVar4 + 10) == 0.0) {
        return;
      }
      goto code_r0x00c3492c;
    }
  case 0:
  case 2:
    param_2 = param_1;
    break;
  default:
    goto LAB_00c3496c;
  }
  if ((bRam0000000001342742 & 1) == 0) {
    native_sub_43273c(&NGUITools_TypeInfo_12d53c8);
    bRam0000000001342742 = 1;
  }
  uVar3 = native_UnityEngine_Behaviour__get_enabled_8d7acc(plVar4,0);
  if ((uVar3 & 1) != 0) {
    uVar6 = native_UnityEngine_Component__get_gameObject_8da66c(plVar4,0);
    if (((*(byte *)(_NGUITools_TypeInfo_12d53c8 + 0x133) >> 2 & 1) != 0) &&
       (*(int *)(_NGUITools_TypeInfo_12d53c8 + 0xe0) == 0)) {
      native_sub_4327ec(_NGUITools_TypeInfo_12d53c8);
    }
    uVar3 = native_NGUITools__GetActive_72d0d4(uVar6,0);
    if (((uVar3 & 1) != 0) && (*(float *)(plVar4 + 5) != 0.0)) {
      native_UIScrollView__DisableSpring_c325c4(plVar4);
      cVar1 = *(char *)((long)plVar4 + 0xe9);
      bVar2 = (**(code **)(*plVar4 + 0x1a8))(plVar4,*(undefined8 *)(*plVar4 + 0x1b0));
      *(byte *)((long)plVar4 + 0xe9) = cVar1 != '\0' | bVar2 & 1;
      fVar8 = (float)native_UnityEngine_Mathf__Sign_8e51d8(*(undefined4 *)((long)plVar4 + 0xcc),0);
      fVar9 = (float)native_UnityEngine_Mathf__Sign_8e51d8(param_2,0);
      if (fVar8 == fVar9) {
        fVar8 = *(float *)((long)plVar4 + 0xcc);
      }
      else {
        fVar8 = 0.0;
        *(undefined4 *)((long)plVar4 + 0xcc) = 0;
      }
      *(float *)((long)plVar4 + 0xcc) = fVar8 + *(float *)(plVar4 + 5) * (float)param_2;
    }
  }
  return;
}



/* UIDragScrollView$$.ctor @ 0x9e4f88
 * void UIDragScrollView___ctor (UIDragScrollView_o* __this, const MethodInfo* method); */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* UIDragScrollView$$.ctor
   void UIDragScrollView___ctor (UIDragScrollView_o* __this, const MethodInfo* method); */

undefined1  [16] native_UIDragScrollView___ctor_9e4f88(ulong param_1)

{
  undefined1 auVar1 [16];
  
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


