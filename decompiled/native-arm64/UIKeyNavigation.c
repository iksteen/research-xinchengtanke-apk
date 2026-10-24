/* ARM64 IL2CPP native pseudocode from Ghidra.
 * Recovered implementation, not original C# source.
 * Function boundaries follow the IL2CPP method address table. */


/* UIKeyNavigation$$get_current @ 0xae5edc
 * UIKeyNavigation_o* UIKeyNavigation__get_current (const MethodInfo* method); */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* UIKeyNavigation$$get_current
   UIKeyNavigation_o* UIKeyNavigation__get_current (const MethodInfo* method); */

void native_UIKeyNavigation__get_current_ae5edc(void)

{
  long lVar1;
  ulong uVar2;
  
  if ((bRam0000000001341fea & 1) == 0) {
    native_sub_43273c(&Method_UnityEngine_GameObject_GetComponent_UIKeyNavigation____12e4ab8);
    native_sub_43273c(&UnityEngine_Object_TypeInfo_12d54e0);
    native_sub_43273c(&UICamera_TypeInfo_12d6410);
    bRam0000000001341fea = 1;
  }
  if (((*(byte *)(_UICamera_TypeInfo_12d6410 + 0x133) >> 2 & 1) != 0) &&
     (*(int *)(_UICamera_TypeInfo_12d6410 + 0xe0) == 0)) {
    native_sub_4327ec();
  }
  lVar1 = native_UICamera__get_hoveredObject_c9114c(0);
  if (((*(byte *)(_UnityEngine_Object_TypeInfo_12d54e0 + 0x133) >> 2 & 1) != 0) &&
     (*(int *)(_UnityEngine_Object_TypeInfo_12d54e0 + 0xe0) == 0)) {
    native_sub_4327ec(_UnityEngine_Object_TypeInfo_12d54e0);
  }
  uVar2 = native_UnityEngine_Object__op_Equality_8e9a3c(lVar1,0,0);
  if ((uVar2 & 1) == 0) {
    if (lVar1 == 0) {
                    /* WARNING: Subroutine does not return */
      native_sub_432810(0);
    }
    native_UnityEngine_GameObject__GetComponent_BE2_BlockSectionHeader_Custom__4a2214
              (lVar1,_Method_UnityEngine_GameObject_GetComponent_UIKeyNavigation____12e4ab8);
  }
  return;
}



/* UIKeyNavigation$$get_isColliderEnabled @ 0xae5fb4
 * bool UIKeyNavigation__get_isColliderEnabled (UIKeyNavigation_o* __this, const MethodInfo* method); */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* UIKeyNavigation$$get_isColliderEnabled
   bool UIKeyNavigation__get_isColliderEnabled (UIKeyNavigation_o* __this, const MethodInfo*
   method); */

undefined8 native_UIKeyNavigation__get_isColliderEnabled_ae5fb4(undefined8 param_1)

{
  ulong uVar1;
  long lVar2;
  undefined8 uVar3;
  
  if ((bRam0000000001341feb & 1) == 0) {
    native_sub_43273c(&Method_UnityEngine_Component_GetComponent_Collider2D____12e29c8);
    native_sub_43273c(&Method_UnityEngine_Component_GetComponent_Collider____12e29c0);
    native_sub_43273c(&UnityEngine_Object_TypeInfo_12d54e0);
    bRam0000000001341feb = 1;
  }
  uVar1 = native_UnityEngine_Behaviour__get_enabled_8d7acc(param_1,0);
  if ((uVar1 & 1) == 0) {
    return 0;
  }
  lVar2 = native_UnityEngine_Component__get_gameObject_8da66c(param_1,0);
  if (lVar2 != 0) {
    uVar1 = native_UnityEngine_GameObject__get_activeInHierarchy_8de728(lVar2,0);
    if ((uVar1 & 1) == 0) {
      return 0;
    }
    lVar2 = native_UnityEngine_Component__GetComponent_ActiveAnimation__49daec
                      (param_1,_Method_UnityEngine_Component_GetComponent_Collider____12e29c0);
    if (((*(byte *)(_UnityEngine_Object_TypeInfo_12d54e0 + 0x133) >> 2 & 1) != 0) &&
       (*(int *)(_UnityEngine_Object_TypeInfo_12d54e0 + 0xe0) == 0)) {
      native_sub_4327ec(_UnityEngine_Object_TypeInfo_12d54e0);
    }
    uVar1 = native_UnityEngine_Object__op_Inequality_8d76fc(lVar2,0,0);
    if ((uVar1 & 1) == 0) {
      lVar2 = native_UnityEngine_Component__GetComponent_ActiveAnimation__49daec
                        (param_1,_Method_UnityEngine_Component_GetComponent_Collider2D____12e29c8);
      if (((*(byte *)(_UnityEngine_Object_TypeInfo_12d54e0 + 0x133) >> 2 & 1) != 0) &&
         (*(int *)(_UnityEngine_Object_TypeInfo_12d54e0 + 0xe0) == 0)) {
        native_sub_4327ec(_UnityEngine_Object_TypeInfo_12d54e0);
      }
      uVar1 = native_UnityEngine_Object__op_Inequality_8d76fc(lVar2,0,0);
      if ((uVar1 & 1) == 0) {
        return 0;
      }
      if (lVar2 != 0) {
        if (pcRam0000000001340940 == (code *)0x0) {
          pcRam0000000001340940 = (code *)native_sub_4326f0(&UNK_00e2c6dd);
        }
                    /* WARNING: Could not recover jumptable at 0x008d7b08. Too many branches */
                    /* WARNING: Treating indirect jump as call */
        uVar3 = (*pcRam0000000001340940)(lVar2);
        return uVar3;
      }
    }
    else if (lVar2 != 0) {
      if (pcRam0000000001343a68 == (code *)0x0) {
        pcRam0000000001343a68 = (code *)native_sub_4326f0(&UNK_00ecb640);
      }
                    /* WARNING: Could not recover jumptable at 0x00dbac48. Too many branches */
                    /* WARNING: Treating indirect jump as call */
      uVar3 = (*pcRam0000000001343a68)(lVar2);
      return uVar3;
    }
  }
                    /* WARNING: Subroutine does not return */
  native_sub_432810();
}



/* UIKeyNavigation$$OnEnable @ 0xae6114
 * void UIKeyNavigation__OnEnable (UIKeyNavigation_o* __this, const MethodInfo* method); */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* UIKeyNavigation$$OnEnable
   void UIKeyNavigation__OnEnable (UIKeyNavigation_o* __this, const MethodInfo* method); */

void native_UIKeyNavigation__OnEnable_ae6114(long param_1)

{
  undefined8 uVar1;
  
  if ((bRam0000000001341fec & 1) == 0) {
    native_sub_43273c(&Method_BetterList_UIKeyNavigation__Add___12d89d8);
    native_sub_43273c(&UIKeyNavigation_TypeInfo_12d6460);
    native_sub_43273c(&StringLiteral_Start_12f1038);
    bRam0000000001341fec = 1;
  }
  if (((*(byte *)(_UIKeyNavigation_TypeInfo_12d6460 + 0x133) >> 2 & 1) != 0) &&
     (*(int *)(_UIKeyNavigation_TypeInfo_12d6460 + 0xe0) == 0)) {
    native_sub_4327ec();
  }
  if (**(long **)(_UIKeyNavigation_TypeInfo_12d6460 + 0xb8) != 0) {
    native_BetterList_object___Add_ba24d8
              (**(long **)(_UIKeyNavigation_TypeInfo_12d6460 + 0xb8),param_1,
               _Method_BetterList_UIKeyNavigation__Add___12d89d8);
    uVar1 = _StringLiteral_Start_12f1038;
    if (*(char *)(param_1 + 0x51) != '\0') {
      if (pcRam0000000001340fd0 == (code *)0x0) {
        pcRam0000000001340fd0 = (code *)native_sub_4326f0(&UNK_00e2f47b);
      }
                    /* WARNING: Could not recover jumptable at 0x008e8d50. Too many branches */
                    /* WARNING: Treating indirect jump as call */
      (*pcRam0000000001340fd0)(0x3a83126f,0,param_1,uVar1);
      return;
    }
    return;
  }
                    /* WARNING: Subroutine does not return */
  native_sub_432810();
}



/* UIKeyNavigation$$Start @ 0xae61e0
 * void UIKeyNavigation__Start (UIKeyNavigation_o* __this, const MethodInfo* method); */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* UIKeyNavigation$$Start
   void UIKeyNavigation__Start (UIKeyNavigation_o* __this, const MethodInfo* method); */

void native_UIKeyNavigation__Start_ae61e0(long param_1)

{
  ulong *puVar1;
  char cVar2;
  bool bVar3;
  byte bVar4;
  uint uVar5;
  ulong uVar6;
  long lVar7;
  long lVar8;
  long *plVar9;
  undefined8 *puVar10;
  long lVar11;
  undefined8 uVar12;
  long lVar13;
  undefined8 uVar14;
  uint uVar15;
  undefined1 auStack_48 [4];
  undefined1 auStack_44 [4];
  
  if ((bRam0000000001341fed & 1) == 0) {
    native_sub_43273c(&UICamera_TypeInfo_12d6410);
    bRam0000000001341fed = 1;
  }
  *(undefined1 *)(param_1 + 0x51) = 1;
  if ((*(char *)(param_1 + 0x50) == '\0') ||
     (uVar6 = native_UIKeyNavigation__get_isColliderEnabled_ae5fb4(param_1), (uVar6 & 1) == 0)) {
    return;
  }
  lVar7 = native_UnityEngine_Component__get_gameObject_8da66c(param_1,0);
  if (((*(byte *)(_UICamera_TypeInfo_12d6410 + 0x133) >> 2 & 1) != 0) &&
     (*(int *)(_UICamera_TypeInfo_12d6410 + 0xe0) == 0)) {
    native_sub_4327ec(_UICamera_TypeInfo_12d6410);
  }
  if ((bRam00000000013428c8 & 1) == 0) {
    native_sub_43273c(&bool_TypeInfo_12d3bd0,0);
    native_sub_43273c(&Method_UnityEngine_GameObject_GetComponent_UIInput____12e4ab0);
    native_sub_43273c(&Method_UnityEngine_GameObject_GetComponent_UIKeyNavigation____12e4ab8);
    native_sub_43273c(&UnityEngine_Object_TypeInfo_12d54e0);
    native_sub_43273c(&UICamera_TypeInfo_12d6410);
    native_sub_43273c(&StringLiteral_OnSelect_12f02c0);
    bRam00000000013428c8 = 1;
  }
  if (((*(byte *)(_UICamera_TypeInfo_12d6410 + 0x133) >> 2 & 1) != 0) &&
     (*(int *)(_UICamera_TypeInfo_12d6410 + 0xe0) == 0)) {
    native_sub_4327ec();
  }
  uVar12 = *(undefined8 *)(*(long *)(_UICamera_TypeInfo_12d6410 + 0xb8) + 0x1e8);
  if (((*(byte *)(_UnityEngine_Object_TypeInfo_12d54e0 + 0x133) >> 2 & 1) != 0) &&
     (*(int *)(_UnityEngine_Object_TypeInfo_12d54e0 + 0xe0) == 0)) {
    native_sub_4327ec(_UnityEngine_Object_TypeInfo_12d54e0);
  }
  uVar6 = native_UnityEngine_Object__op_Equality_8e9a3c(uVar12,lVar7,0);
  if ((uVar6 & 1) != 0) {
    if (((*(ushort *)(_UICamera_TypeInfo_12d6410 + 0x132) >> 10 & 1) != 0) &&
       (*(int *)(_UICamera_TypeInfo_12d6410 + 0xe0) == 0)) {
      native_sub_4327ec(_UICamera_TypeInfo_12d6410);
    }
    native_UICamera__set_hoveredObject_c9622c(lVar7);
    lVar8 = *(long *)(*(long *)(_UICamera_TypeInfo_12d6410 + 0xb8) + 400);
    if (lVar8 != 0) {
      plVar9 = (long *)(lVar8 + 0x48);
      *plVar9 = lVar7;
      if (iRam0000000001345318 != 0) {
        puVar1 = (ulong *)(((ulong)plVar9 >> 0x12 & 0x7fff) * 8 + 0x138ecd8);
        do {
          cVar2 = '\x01';
          bVar3 = (bool)ExclusiveMonitorPass(puVar1,0x10);
          if (bVar3) {
            *puVar1 = *puVar1 | 1L << ((ulong)plVar9 >> 0xc & 0x3f);
            cVar2 = ExclusiveMonitorsStatus();
          }
        } while (cVar2 != '\0');
      }
      return;
    }
    goto LAB_00c97ea8;
  }
  if (((*(ushort *)(_UICamera_TypeInfo_12d6410 + 0x132) >> 10 & 1) != 0) &&
     (*(int *)(_UICamera_TypeInfo_12d6410 + 0xe0) == 0)) {
    native_sub_4327ec(_UICamera_TypeInfo_12d6410);
  }
  native_UICamera__ShowTooltip_c953cc(0);
  plVar9 = (long *)(_UICamera_TypeInfo_12d6410 + 0xb8);
  lVar8 = *plVar9;
  lVar13 = *(long *)(lVar8 + 0xb8);
  if (*(long *)(lVar8 + 0xe0) == 0) {
    if (((*(byte *)(_UICamera_TypeInfo_12d6410 + 0x133) >> 2 & 1) != 0) &&
       (*(int *)(_UICamera_TypeInfo_12d6410 + 0xe0) == 0)) {
      native_sub_4327ec();
      plVar9 = (long *)(_UICamera_TypeInfo_12d6410 + 0xb8);
      lVar8 = *plVar9;
    }
    *(undefined4 *)(lVar8 + 0xd4) = 0xffffff9c;
    lVar8 = *plVar9;
    *(undefined8 *)(lVar8 + 0xe0) = *(undefined8 *)(lVar8 + 400);
    native_sub_4326e0(lVar8 + 0xe0);
    uVar15 = 1;
  }
  else {
    uVar15 = 0;
  }
  if (((*(byte *)(_UICamera_TypeInfo_12d6410 + 0x133) >> 2 & 1) != 0) &&
     (*(int *)(_UICamera_TypeInfo_12d6410 + 0xe0) == 0)) {
    native_sub_4327ec();
  }
  lVar8 = _UICamera_TypeInfo_12d6410;
  *(undefined1 *)(*(long *)(_UICamera_TypeInfo_12d6410 + 0xb8) + 0xe8) = 0;
  uVar12 = *(undefined8 *)(*(long *)(lVar8 + 0xb8) + 0x1e8);
  if (((*(byte *)(_UnityEngine_Object_TypeInfo_12d54e0 + 0x133) >> 2 & 1) != 0) &&
     (*(int *)(_UnityEngine_Object_TypeInfo_12d54e0 + 0xe0) == 0)) {
    native_sub_4327ec(_UnityEngine_Object_TypeInfo_12d54e0);
  }
  uVar6 = native_UnityEngine_Object__op_Implicit_8e1b98(uVar12,0);
  if ((uVar6 & 1) != 0) {
    if (((*(byte *)(_UICamera_TypeInfo_12d6410 + 0x133) >> 2 & 1) != 0) &&
       (*(int *)(_UICamera_TypeInfo_12d6410 + 0xe0) == 0)) {
      native_sub_4327ec();
    }
    uVar14 = *(undefined8 *)(*(long *)(_UICamera_TypeInfo_12d6410 + 0xb8) + 0x1e8);
    auStack_44[0] = 0;
    uVar12 = native_sub_4327fc(_bool_TypeInfo_12d3bd0,auStack_44);
    native_UICamera__Notify_c96a08(uVar14,_StringLiteral_OnSelect_12f02c0,uVar12);
    lVar11 = *(long *)(_UICamera_TypeInfo_12d6410 + 0xb8);
    lVar8 = *(long *)(lVar11 + 0x120);
    if (lVar8 != 0) {
      if (((*(byte *)(_UICamera_TypeInfo_12d6410 + 0x133) >> 2 & 1) != 0) &&
         (*(int *)(_UICamera_TypeInfo_12d6410 + 0xe0) == 0)) {
        native_sub_4327ec(_UICamera_TypeInfo_12d6410);
        lVar11 = *(long *)(_UICamera_TypeInfo_12d6410 + 0xb8);
        lVar8 = *(long *)(lVar11 + 0x120);
        if (lVar8 == 0) goto LAB_00c97ea8;
      }
      native_UICamera_BoolDelegate__Invoke_550030(lVar8,*(undefined8 *)(lVar11 + 0x1e8),0,0);
    }
  }
  if (((*(byte *)(_UICamera_TypeInfo_12d6410 + 0x133) >> 2 & 1) != 0) &&
     (*(int *)(_UICamera_TypeInfo_12d6410 + 0xe0) == 0)) {
    native_sub_4327ec();
  }
  lVar8 = *(long *)(_UICamera_TypeInfo_12d6410 + 0xb8);
  *(long *)(lVar8 + 0x1e8) = lVar7;
  native_sub_4326e0(lVar8 + 0x1e8,lVar7);
  lVar8 = *(long *)(*(long *)(_UICamera_TypeInfo_12d6410 + 0xb8) + 0xe0);
  if (lVar8 == 0) goto LAB_00c97ea8;
  *(undefined4 *)(lVar8 + 0x70) = 0;
  if (((*(byte *)(_UnityEngine_Object_TypeInfo_12d54e0 + 0x133) >> 2 & 1) != 0) &&
     (*(int *)(_UnityEngine_Object_TypeInfo_12d54e0 + 0xe0) == 0)) {
    native_sub_4327ec();
  }
  uVar6 = native_UnityEngine_Object__op_Inequality_8d76fc(lVar7,0,0);
  if ((uVar6 & 1) != 0) {
    if (lVar7 == 0) goto LAB_00c97ea8;
    uVar12 = native_UnityEngine_GameObject__GetComponent_BE2_BlockSectionHeader_Custom__4a2214
                       (lVar7,_Method_UnityEngine_GameObject_GetComponent_UIKeyNavigation____12e4ab8
                       );
    if (((*(byte *)(_UnityEngine_Object_TypeInfo_12d54e0 + 0x133) >> 2 & 1) != 0) &&
       (*(int *)(_UnityEngine_Object_TypeInfo_12d54e0 + 0xe0) == 0)) {
      native_sub_4327ec(_UnityEngine_Object_TypeInfo_12d54e0);
    }
    uVar6 = native_UnityEngine_Object__op_Inequality_8d76fc(uVar12,0,0);
    if ((uVar6 & 1) == 0) {
      uVar12 = native_UnityEngine_GameObject__GetComponent_BE2_BlockSectionHeader_Custom__4a2214
                         (lVar7,_Method_UnityEngine_GameObject_GetComponent_UIInput____12e4ab0);
      if (((*(byte *)(_UnityEngine_Object_TypeInfo_12d54e0 + 0x133) >> 2 & 1) != 0) &&
         (*(int *)(_UnityEngine_Object_TypeInfo_12d54e0 + 0xe0) == 0)) {
        native_sub_4327ec(_UnityEngine_Object_TypeInfo_12d54e0);
      }
      uVar6 = native_UnityEngine_Object__op_Inequality_8d76fc(uVar12,0,0);
      if ((uVar6 & 1) == 0) goto LAB_00c97a78;
    }
    if (((*(byte *)(_UICamera_TypeInfo_12d6410 + 0x133) >> 2 & 1) != 0) &&
       (*(int *)(_UICamera_TypeInfo_12d6410 + 0xe0) == 0)) {
      native_sub_4327ec();
    }
    lVar8 = *(long *)(*(long *)(_UICamera_TypeInfo_12d6410 + 0xb8) + 400);
    if (lVar8 == 0) goto LAB_00c97ea8;
    plVar9 = (long *)(lVar8 + 0x48);
    *plVar9 = lVar7;
    native_sub_4326e0(plVar9,lVar7);
  }
LAB_00c97a78:
  if (((*(byte *)(_UICamera_TypeInfo_12d6410 + 0x133) >> 2 & 1) != 0) &&
     (*(int *)(_UICamera_TypeInfo_12d6410 + 0xe0) == 0)) {
    native_sub_4327ec();
  }
  uVar12 = *(undefined8 *)(*(long *)(_UICamera_TypeInfo_12d6410 + 0xb8) + 0x1e8);
  if (((*(byte *)(_UnityEngine_Object_TypeInfo_12d54e0 + 0x133) >> 2 & 1) != 0) &&
     (*(int *)(_UnityEngine_Object_TypeInfo_12d54e0 + 0xe0) == 0)) {
    native_sub_4327ec(_UnityEngine_Object_TypeInfo_12d54e0);
  }
  uVar5 = native_UnityEngine_Object__op_Implicit_8e1b98(uVar12,0);
  if ((uVar15 & uVar5) == 1) {
    if (((*(byte *)(_UICamera_TypeInfo_12d6410 + 0x133) >> 2 & 1) != 0) &&
       (*(int *)(_UICamera_TypeInfo_12d6410 + 0xe0) == 0)) {
      native_sub_4327ec();
    }
    uVar12 = *(undefined8 *)(*(long *)(_UICamera_TypeInfo_12d6410 + 0xb8) + 0x1e8);
    if (((*(byte *)(_UnityEngine_Object_TypeInfo_12d54e0 + 0x133) >> 2 & 1) != 0) &&
       (*(int *)(_UnityEngine_Object_TypeInfo_12d54e0 + 0xe0) == 0)) {
      native_sub_4327ec(_UnityEngine_Object_TypeInfo_12d54e0);
    }
    uVar6 = native_UnityEngine_Object__op_Inequality_8d76fc(uVar12,0,0);
    if ((uVar6 & 1) == 0) {
      if (((*(ushort *)(_UICamera_TypeInfo_12d6410 + 0x132) >> 10 & 1) != 0) &&
         (*(int *)(_UICamera_TypeInfo_12d6410 + 0xe0) == 0)) {
        native_sub_4327ec(_UICamera_TypeInfo_12d6410);
      }
      if ((**(long **)(_UICamera_TypeInfo_12d6410 + 0xb8) == 0) ||
         (lVar7 = *(long *)(**(long **)(_UICamera_TypeInfo_12d6410 + 0xb8) + 0x10), lVar7 == 0))
      goto LAB_00c97ea8;
      if (*(int *)(lVar7 + 0x18) == 0) {
        uVar12 = native_sub_43283c();
                    /* WARNING: Subroutine does not return */
        native_sub_4327dc(uVar12,0);
      }
      lVar7 = *(long *)(lVar7 + 0x20);
    }
    else {
      if (((*(ushort *)(_UICamera_TypeInfo_12d6410 + 0x132) >> 10 & 1) != 0) &&
         (*(int *)(_UICamera_TypeInfo_12d6410 + 0xe0) == 0)) {
        native_sub_4327ec(_UICamera_TypeInfo_12d6410);
      }
      lVar7 = *(long *)(*(long *)(_UICamera_TypeInfo_12d6410 + 0xb8) + 0x1e8);
      if (lVar7 == 0) goto LAB_00c97ea8;
      native_UnityEngine_GameObject__get_layer_8de608(lVar7,0);
      lVar7 = native_UICamera__FindCameraForLayer_c96d2c();
    }
    if (((*(byte *)(_UnityEngine_Object_TypeInfo_12d54e0 + 0x133) >> 2 & 1) != 0) &&
       (*(int *)(_UnityEngine_Object_TypeInfo_12d54e0 + 0xe0) == 0)) {
      native_sub_4327ec();
    }
    uVar6 = native_UnityEngine_Object__op_Inequality_8d76fc(lVar7,0,0);
    if ((uVar6 & 1) != 0) {
      if (((*(byte *)(_UICamera_TypeInfo_12d6410 + 0x133) >> 2 & 1) != 0) &&
         (*(int *)(_UICamera_TypeInfo_12d6410 + 0xe0) == 0)) {
        native_sub_4327ec();
      }
      plVar9 = (long *)(*(long *)(_UICamera_TypeInfo_12d6410 + 0xb8) + 0xb8);
      *plVar9 = lVar7;
      native_sub_4326e0(plVar9,lVar7);
      if (lVar7 == 0) goto LAB_00c97ea8;
      uVar12 = native_UICamera__get_cachedCamera_c95254(lVar7);
      puVar10 = (undefined8 *)(*(long *)(_UICamera_TypeInfo_12d6410 + 0xb8) + 0xc0);
      *puVar10 = uVar12;
      native_sub_4326e0(puVar10,uVar12);
    }
  }
  if (((*(byte *)(_UICamera_TypeInfo_12d6410 + 0x133) >> 2 & 1) != 0) &&
     (*(int *)(_UICamera_TypeInfo_12d6410 + 0xe0) == 0)) {
    native_sub_4327ec();
  }
  uVar12 = *(undefined8 *)(*(long *)(_UICamera_TypeInfo_12d6410 + 0xb8) + 0x1e8);
  if (((*(byte *)(_UnityEngine_Object_TypeInfo_12d54e0 + 0x133) >> 2 & 1) != 0) &&
     (*(int *)(_UnityEngine_Object_TypeInfo_12d54e0 + 0xe0) == 0)) {
    native_sub_4327ec(_UnityEngine_Object_TypeInfo_12d54e0);
  }
  uVar6 = native_UnityEngine_Object__op_Implicit_8e1b98(uVar12,0);
  if ((uVar6 & 1) != 0) {
    if (((*(byte *)(_UICamera_TypeInfo_12d6410 + 0x133) >> 2 & 1) != 0) &&
       (*(int *)(_UICamera_TypeInfo_12d6410 + 0xe0) == 0)) {
      native_sub_4327ec();
    }
    lVar7 = *(long *)(*(long *)(_UICamera_TypeInfo_12d6410 + 0xb8) + 0x1e8);
    if (lVar7 == 0) goto LAB_00c97ea8;
    uVar6 = native_UnityEngine_GameObject__get_activeInHierarchy_8de728(lVar7,0);
    if ((uVar6 & 1) == 0) {
      bVar4 = 0;
    }
    else {
      if (((*(byte *)(_UICamera_TypeInfo_12d6410 + 0x133) >> 2 & 1) != 0) &&
         (*(int *)(_UICamera_TypeInfo_12d6410 + 0xe0) == 0)) {
        native_sub_4327ec();
      }
      lVar7 = *(long *)(*(long *)(_UICamera_TypeInfo_12d6410 + 0xb8) + 0x1e8);
      if (lVar7 == 0) goto LAB_00c97ea8;
      uVar12 = native_UnityEngine_GameObject__GetComponent_BE2_BlockSectionHeader_Custom__4a2214
                         (lVar7,_Method_UnityEngine_GameObject_GetComponent_UIInput____12e4ab0);
      if (((*(byte *)(_UnityEngine_Object_TypeInfo_12d54e0 + 0x133) >> 2 & 1) != 0) &&
         (*(int *)(_UnityEngine_Object_TypeInfo_12d54e0 + 0xe0) == 0)) {
        native_sub_4327ec(_UnityEngine_Object_TypeInfo_12d54e0);
      }
      bVar4 = native_UnityEngine_Object__op_Inequality_8d76fc(uVar12,0,0);
      bVar4 = bVar4 & 1;
    }
    if (((*(byte *)(_UICamera_TypeInfo_12d6410 + 0x133) >> 2 & 1) != 0) &&
       (*(int *)(_UICamera_TypeInfo_12d6410 + 0xe0) == 0)) {
      native_sub_4327ec();
    }
    lVar7 = _UICamera_TypeInfo_12d6410;
    *(byte *)(*(long *)(_UICamera_TypeInfo_12d6410 + 0xb8) + 0xe8) = bVar4;
    lVar11 = *(long *)(lVar7 + 0xb8);
    lVar8 = *(long *)(lVar11 + 0x120);
    if (lVar8 != 0) {
      if (((*(byte *)(lVar7 + 0x133) >> 2 & 1) != 0) && (*(int *)(lVar7 + 0xe0) == 0)) {
        native_sub_4327ec();
        lVar11 = *(long *)(_UICamera_TypeInfo_12d6410 + 0xb8);
        lVar8 = *(long *)(lVar11 + 0x120);
        if (lVar8 == 0) goto LAB_00c97ea8;
      }
      native_UICamera_BoolDelegate__Invoke_550030(lVar8,*(undefined8 *)(lVar11 + 0x1e8),1,0);
      lVar7 = _UICamera_TypeInfo_12d6410;
    }
    if (((*(byte *)(lVar7 + 0x133) >> 2 & 1) != 0) && (*(int *)(lVar7 + 0xe0) == 0)) {
      native_sub_4327ec();
      lVar7 = _UICamera_TypeInfo_12d6410;
    }
    uVar14 = *(undefined8 *)(*(long *)(lVar7 + 0xb8) + 0x1e8);
    auStack_48[0] = 1;
    uVar12 = native_sub_4327fc(_bool_TypeInfo_12d3bd0,auStack_48);
    native_UICamera__Notify_c96a08(uVar14,_StringLiteral_OnSelect_12f02c0,uVar12);
  }
  if (uVar15 != 0) {
    if (((*(byte *)(_UICamera_TypeInfo_12d6410 + 0x133) >> 2 & 1) != 0) &&
       (*(int *)(_UICamera_TypeInfo_12d6410 + 0xe0) == 0)) {
      native_sub_4327ec();
    }
    plVar9 = (long *)(*(long *)(_UICamera_TypeInfo_12d6410 + 0xb8) + 0xb8);
    *plVar9 = lVar13;
    native_sub_4326e0(plVar9,lVar13);
    if (((*(byte *)(_UnityEngine_Object_TypeInfo_12d54e0 + 0x133) >> 2 & 1) != 0) &&
       (*(int *)(_UnityEngine_Object_TypeInfo_12d54e0 + 0xe0) == 0)) {
      native_sub_4327ec();
    }
    uVar6 = native_UnityEngine_Object__op_Inequality_8d76fc(lVar13,0,0);
    uVar12 = 0;
    if ((uVar6 & 1) != 0) {
      if (lVar13 == 0) {
LAB_00c97ea8:
                    /* WARNING: Subroutine does not return */
        native_sub_432810();
      }
      uVar12 = native_UICamera__get_cachedCamera_c95254(lVar13);
    }
    if (((*(byte *)(_UICamera_TypeInfo_12d6410 + 0x133) >> 2 & 1) != 0) &&
       (*(int *)(_UICamera_TypeInfo_12d6410 + 0xe0) == 0)) {
      native_sub_4327ec();
    }
    puVar10 = (undefined8 *)(*(long *)(_UICamera_TypeInfo_12d6410 + 0xb8) + 0xc0);
    *puVar10 = uVar12;
    native_sub_4326e0(puVar10,uVar12);
    puVar10 = (undefined8 *)(*(long *)(_UICamera_TypeInfo_12d6410 + 0xb8) + 0xe0);
    *puVar10 = 0;
    native_sub_4326e0(puVar10,0);
    *(undefined4 *)(*(long *)(_UICamera_TypeInfo_12d6410 + 0xb8) + 0xd4) = 0xffffff9c;
  }
  return;
}



/* UIKeyNavigation$$OnDisable @ 0xae6280
 * void UIKeyNavigation__OnDisable (UIKeyNavigation_o* __this, const MethodInfo* method); */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* UIKeyNavigation$$OnDisable
   void UIKeyNavigation__OnDisable (UIKeyNavigation_o* __this, const MethodInfo* method); */

undefined8 native_UIKeyNavigation__OnDisable_ae6280(undefined8 param_1)

{
  bool bVar1;
  long lVar2;
  long *plVar3;
  ulong uVar4;
  undefined8 *puVar5;
  undefined8 uVar6;
  long lVar7;
  uint uVar8;
  long lVar9;
  ulong uVar10;
  
  if ((bRam0000000001341fee & 1) == 0) {
    native_sub_43273c(&Method_BetterList_UIKeyNavigation__Remove___12d89e0);
    native_sub_43273c(&UIKeyNavigation_TypeInfo_12d6460);
    bRam0000000001341fee = 1;
  }
  if (((*(byte *)(_UIKeyNavigation_TypeInfo_12d6460 + 0x133) >> 2 & 1) != 0) &&
     (*(int *)(_UIKeyNavigation_TypeInfo_12d6460 + 0xe0) == 0)) {
    native_sub_4327ec();
  }
  lVar2 = **(long **)(_UIKeyNavigation_TypeInfo_12d6460 + 0xb8);
  if (lVar2 == 0) {
                    /* WARNING: Subroutine does not return */
    native_sub_432810();
  }
  if ((*(long *)(lVar2 + 0x10) != 0) &&
     (plVar3 = (long *)(*(code *)**(undefined8 **)
                                   (*(long *)(*(long *)(
                                                  _Method_BetterList_UIKeyNavigation__Remove___12d89e0
                                                  + 0x18) + 0xc0) + 0x30))(),
     0 < *(int *)(lVar2 + 0x18))) {
    uVar10 = 0;
    lVar9 = 0x20;
    do {
      lVar7 = *(long *)(lVar2 + 0x10);
      if (lVar7 == 0) goto code_r0x00ba2974;
      if (*(uint *)(lVar7 + 0x18) <= uVar10) goto code_r0x00ba2978;
      if (plVar3 == (long *)0x0) goto code_r0x00ba2974;
      uVar4 = (**(code **)(*plVar3 + 0x1b8))
                        (plVar3,*(undefined8 *)(lVar7 + uVar10 * 8 + 0x20),param_1,
                         *(undefined8 *)(*plVar3 + 0x1c0));
      if ((uVar4 & 1) != 0) {
        lVar7 = *(long *)(lVar2 + 0x10);
        *(int *)(lVar2 + 0x18) = *(int *)(lVar2 + 0x18) + -1;
        if (lVar7 == 0) goto code_r0x00ba2974;
        if (*(uint *)(lVar7 + 0x18) <= (uint)uVar10) goto code_r0x00ba2978;
        puVar5 = (undefined8 *)(lVar7 + uVar10 * 8 + 0x20);
        *puVar5 = 0;
        native_sub_4326e0(puVar5,0);
        lVar7 = *(long *)(lVar2 + 0x10);
        uVar8 = *(uint *)(lVar2 + 0x18);
        bVar1 = lVar7 == 0;
        if ((int)uVar8 <= (int)(uint)uVar10) goto code_r0x00ba294c;
        uVar10 = uVar10 & 0xffffffff;
        goto code_r0x00ba2904;
      }
      uVar10 = uVar10 + 1;
      lVar9 = lVar9 + 8;
    } while ((long)uVar10 < (long)*(int *)(lVar2 + 0x18));
  }
  return 0;
  while( true ) {
    uVar4 = uVar10 + 1;
    if (*(uint *)(lVar7 + 0x18) <= uVar4) goto code_r0x00ba2978;
    *(undefined8 *)(lVar7 + lVar9) = *(undefined8 *)(lVar7 + uVar10 * 8 + 0x28);
    native_sub_4326e0();
    lVar7 = *(long *)(lVar2 + 0x10);
    uVar8 = *(uint *)(lVar2 + 0x18);
    lVar9 = lVar9 + 8;
    bVar1 = lVar7 == 0;
    uVar10 = uVar4;
    if ((long)(int)uVar8 <= (long)uVar4) break;
code_r0x00ba2904:
    if (bVar1) goto code_r0x00ba2974;
  }
code_r0x00ba294c:
  if (!bVar1) {
    if (uVar8 < *(uint *)(lVar7 + 0x18)) {
      puVar5 = (undefined8 *)(lVar7 + (long)(int)uVar8 * 8 + 0x20);
      *puVar5 = 0;
      native_sub_4326e0(puVar5,0);
      return 1;
    }
code_r0x00ba2978:
    uVar6 = native_sub_43283c();
                    /* WARNING: Subroutine does not return */
    native_sub_4327dc(uVar6,0);
  }
code_r0x00ba2974:
                    /* WARNING: Subroutine does not return */
  native_sub_432810();
}



/* UIKeyNavigation$$IsActive @ 0xae630c
 * bool UIKeyNavigation__IsActive (UnityEngine_GameObject_o* go, const MethodInfo* method); */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* UIKeyNavigation$$IsActive
   bool UIKeyNavigation__IsActive (UnityEngine_GameObject_o* go, const MethodInfo* method); */

undefined8 native_UIKeyNavigation__IsActive_ae630c(long param_1)

{
  ulong uVar1;
  long lVar2;
  undefined8 uVar3;
  
  if ((bRam0000000001341fef & 1) == 0) {
    native_sub_43273c(&Method_UnityEngine_GameObject_GetComponent_Collider2D____12e4980);
    native_sub_43273c(&Method_UnityEngine_GameObject_GetComponent_Collider____12e4978);
    native_sub_43273c(&UnityEngine_Object_TypeInfo_12d54e0);
    bRam0000000001341fef = 1;
  }
  if (((*(byte *)(_UnityEngine_Object_TypeInfo_12d54e0 + 0x133) >> 2 & 1) != 0) &&
     (*(int *)(_UnityEngine_Object_TypeInfo_12d54e0 + 0xe0) == 0)) {
    native_sub_4327ec();
  }
  uVar1 = native_UnityEngine_Object__op_Implicit_8e1b98(param_1,0);
  if ((uVar1 & 1) == 0) {
    return 0;
  }
  if (param_1 != 0) {
    uVar1 = native_UnityEngine_GameObject__get_activeInHierarchy_8de728(param_1,0);
    if ((uVar1 & 1) == 0) {
      return 0;
    }
    lVar2 = native_UnityEngine_GameObject__GetComponent_BE2_BlockSectionHeader_Custom__4a2214
                      (param_1,_Method_UnityEngine_GameObject_GetComponent_Collider____12e4978);
    if (((*(byte *)(_UnityEngine_Object_TypeInfo_12d54e0 + 0x133) >> 2 & 1) != 0) &&
       (*(int *)(_UnityEngine_Object_TypeInfo_12d54e0 + 0xe0) == 0)) {
      native_sub_4327ec(_UnityEngine_Object_TypeInfo_12d54e0);
    }
    uVar1 = native_UnityEngine_Object__op_Inequality_8d76fc(lVar2,0,0);
    if ((uVar1 & 1) == 0) {
      lVar2 = native_UnityEngine_GameObject__GetComponent_BE2_BlockSectionHeader_Custom__4a2214
                        (param_1,_Method_UnityEngine_GameObject_GetComponent_Collider2D____12e4980);
      if (((*(byte *)(_UnityEngine_Object_TypeInfo_12d54e0 + 0x133) >> 2 & 1) != 0) &&
         (*(int *)(_UnityEngine_Object_TypeInfo_12d54e0 + 0xe0) == 0)) {
        native_sub_4327ec(_UnityEngine_Object_TypeInfo_12d54e0);
      }
      uVar1 = native_UnityEngine_Object__op_Inequality_8d76fc(lVar2,0,0);
      if ((uVar1 & 1) == 0) {
        return 0;
      }
      if (lVar2 != 0) {
        if (pcRam0000000001340940 == (code *)0x0) {
          pcRam0000000001340940 = (code *)native_sub_4326f0(&UNK_00e2c6dd);
        }
                    /* WARNING: Could not recover jumptable at 0x008d7b08. Too many branches */
                    /* WARNING: Treating indirect jump as call */
        uVar3 = (*pcRam0000000001340940)(lVar2);
        return uVar3;
      }
    }
    else if (lVar2 != 0) {
      if (pcRam0000000001343a68 == (code *)0x0) {
        pcRam0000000001343a68 = (code *)native_sub_4326f0(&UNK_00ecb640);
      }
                    /* WARNING: Could not recover jumptable at 0x00dbac48. Too many branches */
                    /* WARNING: Treating indirect jump as call */
      uVar3 = (*pcRam0000000001343a68)(lVar2);
      return uVar3;
    }
  }
                    /* WARNING: Subroutine does not return */
  native_sub_432810();
}



/* UIKeyNavigation$$GetLeft @ 0xae647c
 * UnityEngine_GameObject_o* UIKeyNavigation__GetLeft (UIKeyNavigation_o* __this, const MethodInfo* method); */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* UIKeyNavigation$$GetLeft
   UnityEngine_GameObject_o* UIKeyNavigation__GetLeft (UIKeyNavigation_o* __this, const MethodInfo*
   method); */

undefined8
native_UIKeyNavigation__GetLeft_ae647c
          (undefined1 param_1 [16],ulong param_2,ulong param_3,long param_4)

{
  ulong uVar1;
  long lVar2;
  ulong uVar3;
  long *plVar4;
  undefined8 uVar5;
  long lVar6;
  undefined8 uVar7;
  ulong uVar8;
  float fVar9;
  float fVar10;
  float fVar11;
  float fVar12;
  float fVar13;
  ulong uVar14;
  ulong uVar15;
  ulong uVar16;
  undefined8 uStack_b0;
  float fStack_a8;
  float fStack_54;
  
  if ((bRam0000000001341ff0 & 1) == 0) {
    native_sub_43273c(&UIKeyNavigation_TypeInfo_12d6460);
    bRam0000000001341ff0 = 1;
  }
  uVar7 = *(undefined8 *)(param_4 + 0x30);
  if (((*(byte *)(_UIKeyNavigation_TypeInfo_12d6460 + 0x133) >> 2 & 1) != 0) &&
     (*(int *)(_UIKeyNavigation_TypeInfo_12d6460 + 0xe0) == 0)) {
    native_sub_4327ec();
  }
  uVar1 = native_UIKeyNavigation__IsActive_ae630c(uVar7);
  if ((uVar1 & 1) == 0) {
    if ((*(uint *)(param_4 + 0x18) | 2) != 3) {
      uVar7 = native_UnityEngine_Vector3__get_left_776b10(0);
      if ((bRam0000000001341ff4 & 1) == 0) {
        native_sub_43273c(&Method_UnityEngine_Component_GetComponent_UIWidget____12e2c30);
        native_sub_43273c(&UnityEngine_Object_TypeInfo_12d54e0);
        native_sub_43273c(&UIKeyNavigation_TypeInfo_12d6460);
        bRam0000000001341ff4 = 1;
      }
      fStack_a8 = 0.0;
      uStack_b0 = 0;
      lVar2 = native_UnityEngine_Component__get_transform_8da62c(param_4,0);
      if (lVar2 != 0) {
        fVar9 = (float)native_UnityEngine_Transform__TransformDirection_7722dc(uVar7,lVar2,0);
        uVar1 = param_2;
        uVar15 = param_3;
        uVar7 = native_UnityEngine_Component__get_gameObject_8da66c(param_4,0);
        if (((*(byte *)(_UIKeyNavigation_TypeInfo_12d6460 + 0x133) >> 2 & 1) != 0) &&
           (*(int *)(_UIKeyNavigation_TypeInfo_12d6460 + 0xe0) == 0)) {
          native_sub_4327ec(_UIKeyNavigation_TypeInfo_12d6460);
        }
        fVar10 = (float)native_UIKeyNavigation__GetCenter_ae6a7c(uVar7);
        fStack_54 = 3.4028235e+38;
        uVar8 = 0;
        uVar7 = 0;
        uVar14 = uVar1;
        uVar16 = uVar15;
        while( true ) {
          if (((*(byte *)(_UIKeyNavigation_TypeInfo_12d6460 + 0x133) >> 2 & 1) != 0) &&
             (*(int *)(_UIKeyNavigation_TypeInfo_12d6460 + 0xe0) == 0)) {
            native_sub_4327ec();
          }
          lVar6 = **(long **)(_UIKeyNavigation_TypeInfo_12d6460 + 0xb8);
          if (lVar6 == 0) break;
          if ((long)*(int *)(lVar6 + 0x18) <= (long)uVar8) {
            return uVar7;
          }
          if (((*(byte *)(_UIKeyNavigation_TypeInfo_12d6460 + 0x133) >> 2 & 1) != 0) &&
             (*(int *)(_UIKeyNavigation_TypeInfo_12d6460 + 0xe0) == 0)) {
            native_sub_4327ec();
            lVar6 = **(long **)(_UIKeyNavigation_TypeInfo_12d6460 + 0xb8);
            if (lVar6 == 0) break;
          }
          lVar6 = *(long *)(lVar6 + 0x10);
          if (lVar6 == 0) break;
          if (*(uint *)(lVar6 + 0x18) <= uVar8) {
            uVar7 = native_sub_43283c();
                    /* WARNING: Subroutine does not return */
            native_sub_4327dc(uVar7,0);
          }
          lVar6 = *(long *)(lVar6 + uVar8 * 8 + 0x20);
          if (((*(byte *)(_UnityEngine_Object_TypeInfo_12d54e0 + 0x133) >> 2 & 1) != 0) &&
             (*(int *)(_UnityEngine_Object_TypeInfo_12d54e0 + 0xe0) == 0)) {
            native_sub_4327ec();
          }
          uVar3 = native_UnityEngine_Object__op_Equality_8e9a3c(lVar6,param_4,0);
          if ((uVar3 & 1) == 0) {
            if (lVar6 == 0) break;
            if ((*(int *)(lVar6 + 0x18) != 3) &&
               (uVar3 = native_UIKeyNavigation__get_isColliderEnabled_ae5fb4(lVar6),
               (uVar3 & 1) != 0)) {
              plVar4 = (long *)native_UnityEngine_Component__GetComponent_ActiveAnimation__49daec
                                         (lVar6,
                                          _Method_UnityEngine_Component_GetComponent_UIWidget____12e2c30
                                         );
              if (((*(byte *)(_UnityEngine_Object_TypeInfo_12d54e0 + 0x133) >> 2 & 1) != 0) &&
                 (*(int *)(_UnityEngine_Object_TypeInfo_12d54e0 + 0xe0) == 0)) {
                native_sub_4327ec(_UnityEngine_Object_TypeInfo_12d54e0);
              }
              uVar3 = native_UnityEngine_Object__op_Inequality_8d76fc(plVar4,0,0);
              fVar12 = (float)uVar16;
              fVar13 = (float)uVar14;
              if ((uVar3 & 1) != 0) {
                if (plVar4 == (long *)0x0) break;
                fVar11 = (float)(**(code **)(*plVar4 + 0x1a8))
                                          (plVar4,*(undefined8 *)(*plVar4 + 0x1b0));
                fVar12 = (float)uVar16;
                fVar13 = (float)uVar14;
                if (fVar11 == 0.0) goto LAB_00ae6808;
              }
              uVar5 = native_UnityEngine_Component__get_gameObject_8da66c(lVar6,0);
              if (((*(byte *)(_UIKeyNavigation_TypeInfo_12d6460 + 0x133) >> 2 & 1) != 0) &&
                 (*(int *)(_UIKeyNavigation_TypeInfo_12d6460 + 0xe0) == 0)) {
                native_sub_4327ec(_UIKeyNavigation_TypeInfo_12d6460);
              }
              fVar11 = (float)native_UIKeyNavigation__GetCenter_ae6a7c(uVar5);
              fVar13 = fVar13 - (float)uVar1;
              fStack_a8 = fVar12 - (float)uVar15;
              uVar16 = (ulong)(uint)fStack_a8;
              uStack_b0 = CONCAT44(fVar13,fVar11 - fVar10);
              fVar12 = (float)native_UnityEngine_Vector3__get_normalized_7631d0(&uStack_b0,0);
              fVar11 = (float)param_3 * (float)uVar16;
              uVar14 = (ulong)(uint)fVar11;
              if (0.707 <= fVar11 + fVar9 * fVar12 + (float)param_2 * fVar13) {
                fVar12 = (float)(uStack_b0 >> 0x20);
                fVar13 = (float)native_UnityEngine_Transform__InverseTransformDirection_772814
                                          (uStack_b0 & 0xffffffff,lVar2,0);
                uVar16 = 0x40000000;
                uVar14 = (ulong)(uint)(fVar12 * 2.0);
                uStack_b0 = CONCAT44(fVar12 * 2.0,fVar13 * 1.0);
                fVar13 = (float)native_UnityEngine_Vector3__get_sqrMagnitude_776910(&uStack_b0,0);
                if (fVar13 <= fStack_54) {
                  uVar7 = native_UnityEngine_Component__get_gameObject_8da66c(lVar6,0);
                  fStack_54 = fVar13;
                }
              }
            }
          }
LAB_00ae6808:
          uVar8 = uVar8 + 1;
        }
      }
                    /* WARNING: Subroutine does not return */
      native_sub_432810();
    }
    uVar7 = 0;
  }
  else {
    uVar7 = *(undefined8 *)(param_4 + 0x30);
  }
  return uVar7;
}



/* UIKeyNavigation$$GetRight @ 0xae6884
 * UnityEngine_GameObject_o* UIKeyNavigation__GetRight (UIKeyNavigation_o* __this, const MethodInfo* method); */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* UIKeyNavigation$$GetRight
   UnityEngine_GameObject_o* UIKeyNavigation__GetRight (UIKeyNavigation_o* __this, const MethodInfo*
   method); */

undefined8
native_UIKeyNavigation__GetRight_ae6884
          (undefined1 param_1 [16],ulong param_2,ulong param_3,long param_4)

{
  long lVar1;
  ulong uVar2;
  long *plVar3;
  undefined8 uVar4;
  ulong uVar5;
  long lVar6;
  undefined8 uVar7;
  ulong uVar8;
  float fVar9;
  float fVar10;
  float fVar11;
  float fVar12;
  float fVar13;
  ulong uVar14;
  ulong uVar15;
  ulong uVar16;
  undefined8 uStack_b0;
  float fStack_a8;
  float fStack_54;
  
  if ((bRam0000000001341ff1 & 1) == 0) {
    native_sub_43273c(&UIKeyNavigation_TypeInfo_12d6460);
    bRam0000000001341ff1 = 1;
  }
  uVar7 = *(undefined8 *)(param_4 + 0x38);
  if (((*(byte *)(_UIKeyNavigation_TypeInfo_12d6460 + 0x133) >> 2 & 1) != 0) &&
     (*(int *)(_UIKeyNavigation_TypeInfo_12d6460 + 0xe0) == 0)) {
    native_sub_4327ec();
  }
  uVar5 = native_UIKeyNavigation__IsActive_ae630c(uVar7);
  if ((uVar5 & 1) == 0) {
    if ((*(uint *)(param_4 + 0x18) | 2) != 3) {
      uVar7 = native_UnityEngine_Vector3__get_right_776b60(0);
      if ((bRam0000000001341ff4 & 1) == 0) {
        native_sub_43273c(&Method_UnityEngine_Component_GetComponent_UIWidget____12e2c30);
        native_sub_43273c(&UnityEngine_Object_TypeInfo_12d54e0);
        native_sub_43273c(&UIKeyNavigation_TypeInfo_12d6460);
        bRam0000000001341ff4 = 1;
      }
      fStack_a8 = 0.0;
      uStack_b0 = 0;
      lVar1 = native_UnityEngine_Component__get_transform_8da62c(param_4,0);
      if (lVar1 != 0) {
        fVar9 = (float)native_UnityEngine_Transform__TransformDirection_7722dc(uVar7,lVar1,0);
        uVar5 = param_2;
        uVar15 = param_3;
        uVar7 = native_UnityEngine_Component__get_gameObject_8da66c(param_4,0);
        if (((*(byte *)(_UIKeyNavigation_TypeInfo_12d6460 + 0x133) >> 2 & 1) != 0) &&
           (*(int *)(_UIKeyNavigation_TypeInfo_12d6460 + 0xe0) == 0)) {
          native_sub_4327ec(_UIKeyNavigation_TypeInfo_12d6460);
        }
        fVar10 = (float)native_UIKeyNavigation__GetCenter_ae6a7c(uVar7);
        fStack_54 = 3.4028235e+38;
        uVar8 = 0;
        uVar7 = 0;
        uVar14 = uVar5;
        uVar16 = uVar15;
        while( true ) {
          if (((*(byte *)(_UIKeyNavigation_TypeInfo_12d6460 + 0x133) >> 2 & 1) != 0) &&
             (*(int *)(_UIKeyNavigation_TypeInfo_12d6460 + 0xe0) == 0)) {
            native_sub_4327ec();
          }
          lVar6 = **(long **)(_UIKeyNavigation_TypeInfo_12d6460 + 0xb8);
          if (lVar6 == 0) break;
          if ((long)*(int *)(lVar6 + 0x18) <= (long)uVar8) {
            return uVar7;
          }
          if (((*(byte *)(_UIKeyNavigation_TypeInfo_12d6460 + 0x133) >> 2 & 1) != 0) &&
             (*(int *)(_UIKeyNavigation_TypeInfo_12d6460 + 0xe0) == 0)) {
            native_sub_4327ec();
            lVar6 = **(long **)(_UIKeyNavigation_TypeInfo_12d6460 + 0xb8);
            if (lVar6 == 0) break;
          }
          lVar6 = *(long *)(lVar6 + 0x10);
          if (lVar6 == 0) break;
          if (*(uint *)(lVar6 + 0x18) <= uVar8) {
            uVar7 = native_sub_43283c();
                    /* WARNING: Subroutine does not return */
            native_sub_4327dc(uVar7,0);
          }
          lVar6 = *(long *)(lVar6 + uVar8 * 8 + 0x20);
          if (((*(byte *)(_UnityEngine_Object_TypeInfo_12d54e0 + 0x133) >> 2 & 1) != 0) &&
             (*(int *)(_UnityEngine_Object_TypeInfo_12d54e0 + 0xe0) == 0)) {
            native_sub_4327ec();
          }
          uVar2 = native_UnityEngine_Object__op_Equality_8e9a3c(lVar6,param_4,0);
          if ((uVar2 & 1) == 0) {
            if (lVar6 == 0) break;
            if ((*(int *)(lVar6 + 0x18) != 3) &&
               (uVar2 = native_UIKeyNavigation__get_isColliderEnabled_ae5fb4(lVar6),
               (uVar2 & 1) != 0)) {
              plVar3 = (long *)native_UnityEngine_Component__GetComponent_ActiveAnimation__49daec
                                         (lVar6,
                                          _Method_UnityEngine_Component_GetComponent_UIWidget____12e2c30
                                         );
              if (((*(byte *)(_UnityEngine_Object_TypeInfo_12d54e0 + 0x133) >> 2 & 1) != 0) &&
                 (*(int *)(_UnityEngine_Object_TypeInfo_12d54e0 + 0xe0) == 0)) {
                native_sub_4327ec(_UnityEngine_Object_TypeInfo_12d54e0);
              }
              uVar2 = native_UnityEngine_Object__op_Inequality_8d76fc(plVar3,0,0);
              fVar12 = (float)uVar16;
              fVar13 = (float)uVar14;
              if ((uVar2 & 1) != 0) {
                if (plVar3 == (long *)0x0) break;
                fVar11 = (float)(**(code **)(*plVar3 + 0x1a8))
                                          (plVar3,*(undefined8 *)(*plVar3 + 0x1b0));
                fVar12 = (float)uVar16;
                fVar13 = (float)uVar14;
                if (fVar11 == 0.0) goto LAB_00ae6808;
              }
              uVar4 = native_UnityEngine_Component__get_gameObject_8da66c(lVar6,0);
              if (((*(byte *)(_UIKeyNavigation_TypeInfo_12d6460 + 0x133) >> 2 & 1) != 0) &&
                 (*(int *)(_UIKeyNavigation_TypeInfo_12d6460 + 0xe0) == 0)) {
                native_sub_4327ec(_UIKeyNavigation_TypeInfo_12d6460);
              }
              fVar11 = (float)native_UIKeyNavigation__GetCenter_ae6a7c(uVar4);
              fVar13 = fVar13 - (float)uVar5;
              fStack_a8 = fVar12 - (float)uVar15;
              uVar16 = (ulong)(uint)fStack_a8;
              uStack_b0 = CONCAT44(fVar13,fVar11 - fVar10);
              fVar12 = (float)native_UnityEngine_Vector3__get_normalized_7631d0(&uStack_b0,0);
              fVar11 = (float)param_3 * (float)uVar16;
              uVar14 = (ulong)(uint)fVar11;
              if (0.707 <= fVar11 + fVar9 * fVar12 + (float)param_2 * fVar13) {
                fVar12 = (float)(uStack_b0 >> 0x20);
                fVar13 = (float)native_UnityEngine_Transform__InverseTransformDirection_772814
                                          (uStack_b0 & 0xffffffff,lVar1,0);
                uVar16 = 0x40000000;
                uVar14 = (ulong)(uint)(fVar12 * 2.0);
                uStack_b0 = CONCAT44(fVar12 * 2.0,fVar13 * 1.0);
                fVar13 = (float)native_UnityEngine_Vector3__get_sqrMagnitude_776910(&uStack_b0,0);
                if (fVar13 <= fStack_54) {
                  uVar7 = native_UnityEngine_Component__get_gameObject_8da66c(lVar6,0);
                  fStack_54 = fVar13;
                }
              }
            }
          }
LAB_00ae6808:
          uVar8 = uVar8 + 1;
        }
      }
                    /* WARNING: Subroutine does not return */
      native_sub_432810();
    }
    uVar7 = 0;
  }
  else {
    uVar7 = *(undefined8 *)(param_4 + 0x38);
  }
  return uVar7;
}



/* UIKeyNavigation$$GetUp @ 0xae692c
 * UnityEngine_GameObject_o* UIKeyNavigation__GetUp (UIKeyNavigation_o* __this, const MethodInfo* method); */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* UIKeyNavigation$$GetUp
   UnityEngine_GameObject_o* UIKeyNavigation__GetUp (UIKeyNavigation_o* __this, const MethodInfo*
   method); */

undefined8
native_UIKeyNavigation__GetUp_ae692c
          (undefined1 param_1 [16],ulong param_2,ulong param_3,long param_4)

{
  long lVar1;
  ulong uVar2;
  long *plVar3;
  undefined8 uVar4;
  ulong uVar5;
  long lVar6;
  undefined8 uVar7;
  ulong uVar8;
  float fVar9;
  float fVar10;
  float fVar11;
  float fVar12;
  float fVar13;
  ulong uVar14;
  ulong uVar15;
  ulong uVar16;
  undefined8 uStack_b0;
  float fStack_a8;
  float fStack_54;
  
  if ((bRam0000000001341ff2 & 1) == 0) {
    native_sub_43273c(&UIKeyNavigation_TypeInfo_12d6460);
    bRam0000000001341ff2 = 1;
  }
  uVar7 = *(undefined8 *)(param_4 + 0x20);
  if (((*(byte *)(_UIKeyNavigation_TypeInfo_12d6460 + 0x133) >> 2 & 1) != 0) &&
     (*(int *)(_UIKeyNavigation_TypeInfo_12d6460 + 0xe0) == 0)) {
    native_sub_4327ec();
  }
  uVar5 = native_UIKeyNavigation__IsActive_ae630c(uVar7);
  if ((uVar5 & 1) == 0) {
    if ((*(uint *)(param_4 + 0x18) & 0xfffffffe) != 2) {
      uVar7 = native_UnityEngine_Vector3__get_up_7628a0(0);
      if ((bRam0000000001341ff4 & 1) == 0) {
        native_sub_43273c(&Method_UnityEngine_Component_GetComponent_UIWidget____12e2c30);
        native_sub_43273c(&UnityEngine_Object_TypeInfo_12d54e0);
        native_sub_43273c(&UIKeyNavigation_TypeInfo_12d6460);
        bRam0000000001341ff4 = 1;
      }
      fStack_a8 = 0.0;
      uStack_b0 = 0;
      lVar1 = native_UnityEngine_Component__get_transform_8da62c(param_4,0);
      if (lVar1 != 0) {
        fVar9 = (float)native_UnityEngine_Transform__TransformDirection_7722dc(uVar7,lVar1,0);
        uVar5 = param_2;
        uVar15 = param_3;
        uVar7 = native_UnityEngine_Component__get_gameObject_8da66c(param_4,0);
        if (((*(byte *)(_UIKeyNavigation_TypeInfo_12d6460 + 0x133) >> 2 & 1) != 0) &&
           (*(int *)(_UIKeyNavigation_TypeInfo_12d6460 + 0xe0) == 0)) {
          native_sub_4327ec(_UIKeyNavigation_TypeInfo_12d6460);
        }
        fVar10 = (float)native_UIKeyNavigation__GetCenter_ae6a7c(uVar7);
        fStack_54 = 3.4028235e+38;
        uVar8 = 0;
        uVar7 = 0;
        uVar14 = uVar5;
        uVar16 = uVar15;
        while( true ) {
          if (((*(byte *)(_UIKeyNavigation_TypeInfo_12d6460 + 0x133) >> 2 & 1) != 0) &&
             (*(int *)(_UIKeyNavigation_TypeInfo_12d6460 + 0xe0) == 0)) {
            native_sub_4327ec();
          }
          lVar6 = **(long **)(_UIKeyNavigation_TypeInfo_12d6460 + 0xb8);
          if (lVar6 == 0) break;
          if ((long)*(int *)(lVar6 + 0x18) <= (long)uVar8) {
            return uVar7;
          }
          if (((*(byte *)(_UIKeyNavigation_TypeInfo_12d6460 + 0x133) >> 2 & 1) != 0) &&
             (*(int *)(_UIKeyNavigation_TypeInfo_12d6460 + 0xe0) == 0)) {
            native_sub_4327ec();
            lVar6 = **(long **)(_UIKeyNavigation_TypeInfo_12d6460 + 0xb8);
            if (lVar6 == 0) break;
          }
          lVar6 = *(long *)(lVar6 + 0x10);
          if (lVar6 == 0) break;
          if (*(uint *)(lVar6 + 0x18) <= uVar8) {
            uVar7 = native_sub_43283c();
                    /* WARNING: Subroutine does not return */
            native_sub_4327dc(uVar7,0);
          }
          lVar6 = *(long *)(lVar6 + uVar8 * 8 + 0x20);
          if (((*(byte *)(_UnityEngine_Object_TypeInfo_12d54e0 + 0x133) >> 2 & 1) != 0) &&
             (*(int *)(_UnityEngine_Object_TypeInfo_12d54e0 + 0xe0) == 0)) {
            native_sub_4327ec();
          }
          uVar2 = native_UnityEngine_Object__op_Equality_8e9a3c(lVar6,param_4,0);
          if ((uVar2 & 1) == 0) {
            if (lVar6 == 0) break;
            if ((*(int *)(lVar6 + 0x18) != 3) &&
               (uVar2 = native_UIKeyNavigation__get_isColliderEnabled_ae5fb4(lVar6),
               (uVar2 & 1) != 0)) {
              plVar3 = (long *)native_UnityEngine_Component__GetComponent_ActiveAnimation__49daec
                                         (lVar6,
                                          _Method_UnityEngine_Component_GetComponent_UIWidget____12e2c30
                                         );
              if (((*(byte *)(_UnityEngine_Object_TypeInfo_12d54e0 + 0x133) >> 2 & 1) != 0) &&
                 (*(int *)(_UnityEngine_Object_TypeInfo_12d54e0 + 0xe0) == 0)) {
                native_sub_4327ec(_UnityEngine_Object_TypeInfo_12d54e0);
              }
              uVar2 = native_UnityEngine_Object__op_Inequality_8d76fc(plVar3,0,0);
              fVar12 = (float)uVar16;
              fVar13 = (float)uVar14;
              if ((uVar2 & 1) != 0) {
                if (plVar3 == (long *)0x0) break;
                fVar11 = (float)(**(code **)(*plVar3 + 0x1a8))
                                          (plVar3,*(undefined8 *)(*plVar3 + 0x1b0));
                fVar12 = (float)uVar16;
                fVar13 = (float)uVar14;
                if (fVar11 == 0.0) goto LAB_00ae6808;
              }
              uVar4 = native_UnityEngine_Component__get_gameObject_8da66c(lVar6,0);
              if (((*(byte *)(_UIKeyNavigation_TypeInfo_12d6460 + 0x133) >> 2 & 1) != 0) &&
                 (*(int *)(_UIKeyNavigation_TypeInfo_12d6460 + 0xe0) == 0)) {
                native_sub_4327ec(_UIKeyNavigation_TypeInfo_12d6460);
              }
              fVar11 = (float)native_UIKeyNavigation__GetCenter_ae6a7c(uVar4);
              fVar13 = fVar13 - (float)uVar5;
              fStack_a8 = fVar12 - (float)uVar15;
              uVar16 = (ulong)(uint)fStack_a8;
              uStack_b0 = CONCAT44(fVar13,fVar11 - fVar10);
              fVar12 = (float)native_UnityEngine_Vector3__get_normalized_7631d0(&uStack_b0,0);
              fVar11 = (float)param_3 * (float)uVar16;
              uVar14 = (ulong)(uint)fVar11;
              if (0.707 <= fVar11 + fVar9 * fVar12 + (float)param_2 * fVar13) {
                fVar12 = (float)(uStack_b0 >> 0x20);
                fVar13 = (float)native_UnityEngine_Transform__InverseTransformDirection_772814
                                          (uStack_b0 & 0xffffffff,lVar1,0);
                uVar16 = 0x3f800000;
                uVar14 = (ulong)(uint)(fVar12 * 1.0);
                uStack_b0 = CONCAT44(fVar12 * 1.0,fVar13 * 2.0);
                fVar13 = (float)native_UnityEngine_Vector3__get_sqrMagnitude_776910(&uStack_b0,0);
                if (fVar13 <= fStack_54) {
                  uVar7 = native_UnityEngine_Component__get_gameObject_8da66c(lVar6,0);
                  fStack_54 = fVar13;
                }
              }
            }
          }
LAB_00ae6808:
          uVar8 = uVar8 + 1;
        }
      }
                    /* WARNING: Subroutine does not return */
      native_sub_432810();
    }
    uVar7 = 0;
  }
  else {
    uVar7 = *(undefined8 *)(param_4 + 0x20);
  }
  return uVar7;
}



/* UIKeyNavigation$$GetDown @ 0xae69d4
 * UnityEngine_GameObject_o* UIKeyNavigation__GetDown (UIKeyNavigation_o* __this, const MethodInfo* method); */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* UIKeyNavigation$$GetDown
   UnityEngine_GameObject_o* UIKeyNavigation__GetDown (UIKeyNavigation_o* __this, const MethodInfo*
   method); */

undefined8
native_UIKeyNavigation__GetDown_ae69d4
          (undefined1 param_1 [16],ulong param_2,ulong param_3,long param_4)

{
  long lVar1;
  ulong uVar2;
  long *plVar3;
  undefined8 uVar4;
  ulong uVar5;
  long lVar6;
  undefined8 uVar7;
  ulong uVar8;
  float fVar9;
  float fVar10;
  float fVar11;
  float fVar12;
  float fVar13;
  ulong uVar14;
  ulong uVar15;
  ulong uVar16;
  undefined8 uStack_b0;
  float fStack_a8;
  float fStack_54;
  
  if ((bRam0000000001341ff3 & 1) == 0) {
    native_sub_43273c(&UIKeyNavigation_TypeInfo_12d6460);
    bRam0000000001341ff3 = 1;
  }
  uVar7 = *(undefined8 *)(param_4 + 0x28);
  if (((*(byte *)(_UIKeyNavigation_TypeInfo_12d6460 + 0x133) >> 2 & 1) != 0) &&
     (*(int *)(_UIKeyNavigation_TypeInfo_12d6460 + 0xe0) == 0)) {
    native_sub_4327ec();
  }
  uVar5 = native_UIKeyNavigation__IsActive_ae630c(uVar7);
  if ((uVar5 & 1) == 0) {
    if ((*(uint *)(param_4 + 0x18) & 0xfffffffe) != 2) {
      uVar7 = native_UnityEngine_Vector3__get_down_776ac0(0);
      if ((bRam0000000001341ff4 & 1) == 0) {
        native_sub_43273c(&Method_UnityEngine_Component_GetComponent_UIWidget____12e2c30);
        native_sub_43273c(&UnityEngine_Object_TypeInfo_12d54e0);
        native_sub_43273c(&UIKeyNavigation_TypeInfo_12d6460);
        bRam0000000001341ff4 = 1;
      }
      fStack_a8 = 0.0;
      uStack_b0 = 0;
      lVar1 = native_UnityEngine_Component__get_transform_8da62c(param_4,0);
      if (lVar1 != 0) {
        fVar9 = (float)native_UnityEngine_Transform__TransformDirection_7722dc(uVar7,lVar1,0);
        uVar5 = param_2;
        uVar15 = param_3;
        uVar7 = native_UnityEngine_Component__get_gameObject_8da66c(param_4,0);
        if (((*(byte *)(_UIKeyNavigation_TypeInfo_12d6460 + 0x133) >> 2 & 1) != 0) &&
           (*(int *)(_UIKeyNavigation_TypeInfo_12d6460 + 0xe0) == 0)) {
          native_sub_4327ec(_UIKeyNavigation_TypeInfo_12d6460);
        }
        fVar10 = (float)native_UIKeyNavigation__GetCenter_ae6a7c(uVar7);
        fStack_54 = 3.4028235e+38;
        uVar8 = 0;
        uVar7 = 0;
        uVar14 = uVar5;
        uVar16 = uVar15;
        while( true ) {
          if (((*(byte *)(_UIKeyNavigation_TypeInfo_12d6460 + 0x133) >> 2 & 1) != 0) &&
             (*(int *)(_UIKeyNavigation_TypeInfo_12d6460 + 0xe0) == 0)) {
            native_sub_4327ec();
          }
          lVar6 = **(long **)(_UIKeyNavigation_TypeInfo_12d6460 + 0xb8);
          if (lVar6 == 0) break;
          if ((long)*(int *)(lVar6 + 0x18) <= (long)uVar8) {
            return uVar7;
          }
          if (((*(byte *)(_UIKeyNavigation_TypeInfo_12d6460 + 0x133) >> 2 & 1) != 0) &&
             (*(int *)(_UIKeyNavigation_TypeInfo_12d6460 + 0xe0) == 0)) {
            native_sub_4327ec();
            lVar6 = **(long **)(_UIKeyNavigation_TypeInfo_12d6460 + 0xb8);
            if (lVar6 == 0) break;
          }
          lVar6 = *(long *)(lVar6 + 0x10);
          if (lVar6 == 0) break;
          if (*(uint *)(lVar6 + 0x18) <= uVar8) {
            uVar7 = native_sub_43283c();
                    /* WARNING: Subroutine does not return */
            native_sub_4327dc(uVar7,0);
          }
          lVar6 = *(long *)(lVar6 + uVar8 * 8 + 0x20);
          if (((*(byte *)(_UnityEngine_Object_TypeInfo_12d54e0 + 0x133) >> 2 & 1) != 0) &&
             (*(int *)(_UnityEngine_Object_TypeInfo_12d54e0 + 0xe0) == 0)) {
            native_sub_4327ec();
          }
          uVar2 = native_UnityEngine_Object__op_Equality_8e9a3c(lVar6,param_4,0);
          if ((uVar2 & 1) == 0) {
            if (lVar6 == 0) break;
            if ((*(int *)(lVar6 + 0x18) != 3) &&
               (uVar2 = native_UIKeyNavigation__get_isColliderEnabled_ae5fb4(lVar6),
               (uVar2 & 1) != 0)) {
              plVar3 = (long *)native_UnityEngine_Component__GetComponent_ActiveAnimation__49daec
                                         (lVar6,
                                          _Method_UnityEngine_Component_GetComponent_UIWidget____12e2c30
                                         );
              if (((*(byte *)(_UnityEngine_Object_TypeInfo_12d54e0 + 0x133) >> 2 & 1) != 0) &&
                 (*(int *)(_UnityEngine_Object_TypeInfo_12d54e0 + 0xe0) == 0)) {
                native_sub_4327ec(_UnityEngine_Object_TypeInfo_12d54e0);
              }
              uVar2 = native_UnityEngine_Object__op_Inequality_8d76fc(plVar3,0,0);
              fVar12 = (float)uVar16;
              fVar13 = (float)uVar14;
              if ((uVar2 & 1) != 0) {
                if (plVar3 == (long *)0x0) break;
                fVar11 = (float)(**(code **)(*plVar3 + 0x1a8))
                                          (plVar3,*(undefined8 *)(*plVar3 + 0x1b0));
                fVar12 = (float)uVar16;
                fVar13 = (float)uVar14;
                if (fVar11 == 0.0) goto LAB_00ae6808;
              }
              uVar4 = native_UnityEngine_Component__get_gameObject_8da66c(lVar6,0);
              if (((*(byte *)(_UIKeyNavigation_TypeInfo_12d6460 + 0x133) >> 2 & 1) != 0) &&
                 (*(int *)(_UIKeyNavigation_TypeInfo_12d6460 + 0xe0) == 0)) {
                native_sub_4327ec(_UIKeyNavigation_TypeInfo_12d6460);
              }
              fVar11 = (float)native_UIKeyNavigation__GetCenter_ae6a7c(uVar4);
              fVar13 = fVar13 - (float)uVar5;
              fStack_a8 = fVar12 - (float)uVar15;
              uVar16 = (ulong)(uint)fStack_a8;
              uStack_b0 = CONCAT44(fVar13,fVar11 - fVar10);
              fVar12 = (float)native_UnityEngine_Vector3__get_normalized_7631d0(&uStack_b0,0);
              fVar11 = (float)param_3 * (float)uVar16;
              uVar14 = (ulong)(uint)fVar11;
              if (0.707 <= fVar11 + fVar9 * fVar12 + (float)param_2 * fVar13) {
                fVar12 = (float)(uStack_b0 >> 0x20);
                fVar13 = (float)native_UnityEngine_Transform__InverseTransformDirection_772814
                                          (uStack_b0 & 0xffffffff,lVar1,0);
                uVar16 = 0x3f800000;
                uVar14 = (ulong)(uint)(fVar12 * 1.0);
                uStack_b0 = CONCAT44(fVar12 * 1.0,fVar13 * 2.0);
                fVar13 = (float)native_UnityEngine_Vector3__get_sqrMagnitude_776910(&uStack_b0,0);
                if (fVar13 <= fStack_54) {
                  uVar7 = native_UnityEngine_Component__get_gameObject_8da66c(lVar6,0);
                  fStack_54 = fVar13;
                }
              }
            }
          }
LAB_00ae6808:
          uVar8 = uVar8 + 1;
        }
      }
                    /* WARNING: Subroutine does not return */
      native_sub_432810();
    }
    uVar7 = 0;
  }
  else {
    uVar7 = *(undefined8 *)(param_4 + 0x28);
  }
  return uVar7;
}



/* UIKeyNavigation$$Get @ 0xae6524
 * UnityEngine_GameObject_o* UIKeyNavigation__Get (UIKeyNavigation_o* __this, UnityEngine_Vector3_o myDir, float x, float y, const MethodInfo* method); */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* UIKeyNavigation$$Get
   UnityEngine_GameObject_o* UIKeyNavigation__Get (UIKeyNavigation_o* __this, UnityEngine_Vector3_o
   myDir, float x, float y, const MethodInfo* method); */

undefined8
native_UIKeyNavigation__Get_ae6524
          (undefined8 param_1,ulong param_2,ulong param_3,float param_4,float param_5,
          undefined8 param_6)

{
  long lVar1;
  undefined8 uVar2;
  ulong uVar3;
  long *plVar4;
  undefined8 uVar5;
  long lVar6;
  ulong uVar7;
  float fVar8;
  float fVar9;
  float fVar10;
  float fVar11;
  float fVar12;
  ulong uVar13;
  ulong uVar14;
  ulong uVar15;
  ulong uVar16;
  undefined8 uStack_b0;
  float fStack_a8;
  float fStack_54;
  
  if ((bRam0000000001341ff4 & 1) == 0) {
    native_sub_43273c(&Method_UnityEngine_Component_GetComponent_UIWidget____12e2c30);
    native_sub_43273c(&UnityEngine_Object_TypeInfo_12d54e0);
    native_sub_43273c(&UIKeyNavigation_TypeInfo_12d6460);
    bRam0000000001341ff4 = 1;
  }
  fStack_a8 = 0.0;
  uStack_b0 = 0;
  lVar1 = native_UnityEngine_Component__get_transform_8da62c(param_6,0);
  if (lVar1 != 0) {
    fVar8 = (float)native_UnityEngine_Transform__TransformDirection_7722dc(param_1,lVar1,0);
    uVar13 = param_2;
    uVar15 = param_3;
    uVar2 = native_UnityEngine_Component__get_gameObject_8da66c(param_6,0);
    if (((*(byte *)(_UIKeyNavigation_TypeInfo_12d6460 + 0x133) >> 2 & 1) != 0) &&
       (*(int *)(_UIKeyNavigation_TypeInfo_12d6460 + 0xe0) == 0)) {
      native_sub_4327ec(_UIKeyNavigation_TypeInfo_12d6460);
    }
    fVar9 = (float)native_UIKeyNavigation__GetCenter_ae6a7c(uVar2);
    fStack_54 = 3.4028235e+38;
    uVar7 = 0;
    uVar2 = 0;
    uVar14 = uVar13;
    uVar16 = uVar15;
    while( true ) {
      if (((*(byte *)(_UIKeyNavigation_TypeInfo_12d6460 + 0x133) >> 2 & 1) != 0) &&
         (*(int *)(_UIKeyNavigation_TypeInfo_12d6460 + 0xe0) == 0)) {
        native_sub_4327ec();
      }
      lVar6 = **(long **)(_UIKeyNavigation_TypeInfo_12d6460 + 0xb8);
      if (lVar6 == 0) break;
      if ((long)*(int *)(lVar6 + 0x18) <= (long)uVar7) {
        return uVar2;
      }
      if (((*(byte *)(_UIKeyNavigation_TypeInfo_12d6460 + 0x133) >> 2 & 1) != 0) &&
         (*(int *)(_UIKeyNavigation_TypeInfo_12d6460 + 0xe0) == 0)) {
        native_sub_4327ec();
        lVar6 = **(long **)(_UIKeyNavigation_TypeInfo_12d6460 + 0xb8);
        if (lVar6 == 0) break;
      }
      lVar6 = *(long *)(lVar6 + 0x10);
      if (lVar6 == 0) break;
      if (*(uint *)(lVar6 + 0x18) <= uVar7) {
        uVar2 = native_sub_43283c();
                    /* WARNING: Subroutine does not return */
        native_sub_4327dc(uVar2,0);
      }
      lVar6 = *(long *)(lVar6 + uVar7 * 8 + 0x20);
      if (((*(byte *)(_UnityEngine_Object_TypeInfo_12d54e0 + 0x133) >> 2 & 1) != 0) &&
         (*(int *)(_UnityEngine_Object_TypeInfo_12d54e0 + 0xe0) == 0)) {
        native_sub_4327ec();
      }
      uVar3 = native_UnityEngine_Object__op_Equality_8e9a3c(lVar6,param_6,0);
      if ((uVar3 & 1) == 0) {
        if (lVar6 == 0) break;
        if ((*(int *)(lVar6 + 0x18) != 3) &&
           (uVar3 = native_UIKeyNavigation__get_isColliderEnabled_ae5fb4(lVar6), (uVar3 & 1) != 0))
        {
          plVar4 = (long *)native_UnityEngine_Component__GetComponent_ActiveAnimation__49daec
                                     (lVar6,
                                      _Method_UnityEngine_Component_GetComponent_UIWidget____12e2c30
                                     );
          if (((*(byte *)(_UnityEngine_Object_TypeInfo_12d54e0 + 0x133) >> 2 & 1) != 0) &&
             (*(int *)(_UnityEngine_Object_TypeInfo_12d54e0 + 0xe0) == 0)) {
            native_sub_4327ec(_UnityEngine_Object_TypeInfo_12d54e0);
          }
          uVar3 = native_UnityEngine_Object__op_Inequality_8d76fc(plVar4,0,0);
          fVar11 = (float)uVar16;
          fVar12 = (float)uVar14;
          if ((uVar3 & 1) != 0) {
            if (plVar4 == (long *)0x0) break;
            fVar10 = (float)(**(code **)(*plVar4 + 0x1a8))(plVar4,*(undefined8 *)(*plVar4 + 0x1b0));
            fVar11 = (float)uVar16;
            fVar12 = (float)uVar14;
            if (fVar10 == 0.0) goto LAB_00ae6808;
          }
          uVar5 = native_UnityEngine_Component__get_gameObject_8da66c(lVar6,0);
          if (((*(byte *)(_UIKeyNavigation_TypeInfo_12d6460 + 0x133) >> 2 & 1) != 0) &&
             (*(int *)(_UIKeyNavigation_TypeInfo_12d6460 + 0xe0) == 0)) {
            native_sub_4327ec(_UIKeyNavigation_TypeInfo_12d6460);
          }
          fVar10 = (float)native_UIKeyNavigation__GetCenter_ae6a7c(uVar5);
          fVar12 = fVar12 - (float)uVar13;
          fStack_a8 = fVar11 - (float)uVar15;
          uVar16 = (ulong)(uint)fStack_a8;
          uStack_b0 = CONCAT44(fVar12,fVar10 - fVar9);
          fVar11 = (float)native_UnityEngine_Vector3__get_normalized_7631d0(&uStack_b0,0);
          fVar10 = (float)param_3 * (float)uVar16;
          uVar14 = (ulong)(uint)fVar10;
          if (0.707 <= fVar10 + fVar8 * fVar11 + (float)param_2 * fVar12) {
            fVar11 = (float)(uStack_b0 >> 0x20);
            fVar12 = (float)native_UnityEngine_Transform__InverseTransformDirection_772814
                                      (uStack_b0 & 0xffffffff,lVar1,0);
            uVar16 = (ulong)(uint)param_5;
            uVar14 = (ulong)(uint)(fVar11 * param_5);
            uStack_b0 = CONCAT44(fVar11 * param_5,fVar12 * param_4);
            fVar12 = (float)native_UnityEngine_Vector3__get_sqrMagnitude_776910(&uStack_b0,0);
            if (fVar12 <= fStack_54) {
              uVar2 = native_UnityEngine_Component__get_gameObject_8da66c(lVar6,0);
              fStack_54 = fVar12;
            }
          }
        }
      }
LAB_00ae6808:
      uVar7 = uVar7 + 1;
    }
  }
                    /* WARNING: Subroutine does not return */
  native_sub_432810();
}



/* UIKeyNavigation$$GetCenter @ 0xae6a7c
 * UnityEngine_Vector3_o UIKeyNavigation__GetCenter (UnityEngine_GameObject_o* go, const MethodInfo* method); */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* UIKeyNavigation$$GetCenter
   UnityEngine_Vector3_o UIKeyNavigation__GetCenter (UnityEngine_GameObject_o* go, const MethodInfo*
   method); */

undefined1  [16]
native_UIKeyNavigation__GetCenter_ae6a7c
          (undefined1 param_1 [16],ulong param_2,ulong param_3,long param_4)

{
  undefined4 uVar1;
  long *plVar2;
  long lVar3;
  ulong uVar4;
  long lVar5;
  ulong uVar6;
  undefined8 uVar7;
  undefined1 auVar8 [16];
  
  if ((bRam0000000001341ff5 & 1) == 0) {
    native_sub_43273c(&Method_UnityEngine_GameObject_GetComponent_UIWidget____12e4ae8);
    native_sub_43273c(&UnityEngine_Object_TypeInfo_12d54e0);
    native_sub_43273c(&UICamera_TypeInfo_12d6410);
    bRam0000000001341ff5 = 1;
  }
  if (param_4 != 0) {
    plVar2 = (long *)native_UnityEngine_GameObject__GetComponent_BE2_BlockSectionHeader_Custom__4a2214
                               (param_4,
                                _Method_UnityEngine_GameObject_GetComponent_UIWidget____12e4ae8);
    uVar1 = native_UnityEngine_GameObject__get_layer_8de608(param_4,0);
    if (((*(byte *)(_UICamera_TypeInfo_12d6410 + 0x133) >> 2 & 1) != 0) &&
       (*(int *)(_UICamera_TypeInfo_12d6410 + 0xe0) == 0)) {
      native_sub_4327ec(_UICamera_TypeInfo_12d6410);
    }
    lVar3 = native_UICamera__FindCameraForLayer_c96d2c(uVar1,0);
    if (((*(byte *)(_UnityEngine_Object_TypeInfo_12d54e0 + 0x133) >> 2 & 1) != 0) &&
       (*(int *)(_UnityEngine_Object_TypeInfo_12d54e0 + 0xe0) == 0)) {
      native_sub_4327ec(_UnityEngine_Object_TypeInfo_12d54e0);
    }
    uVar4 = native_UnityEngine_Object__op_Inequality_8d76fc(lVar3,0,0);
    if ((uVar4 & 1) == 0) {
      if (((*(byte *)(_UnityEngine_Object_TypeInfo_12d54e0 + 0x133) >> 2 & 1) != 0) &&
         (*(int *)(_UnityEngine_Object_TypeInfo_12d54e0 + 0xe0) == 0)) {
        native_sub_4327ec();
      }
      uVar4 = native_UnityEngine_Object__op_Inequality_8d76fc(plVar2,0,0);
      if ((uVar4 & 1) == 0) {
        lVar3 = native_UnityEngine_GameObject__get_transform_8de5c8(param_4,0);
        if (lVar3 != 0) {
          auVar8 = native_UnityEngine_Transform__get_position_77169c(lVar3,0);
          return auVar8;
        }
      }
      else if ((plVar2 != (long *)0x0) &&
              (lVar3 = (**(code **)(*plVar2 + 0x1e8))(plVar2,*(undefined8 *)(*plVar2 + 0x1f0)),
              lVar3 != 0)) {
        if ((*(uint *)(lVar3 + 0x18) != 0) && (2 < *(uint *)(lVar3 + 0x18))) {
          return ZEXT416((uint)((*(float *)(lVar3 + 0x20) + *(float *)(lVar3 + 0x38)) * 0.5));
        }
LAB_00ae6cf4:
        uVar7 = native_sub_43283c();
                    /* WARNING: Subroutine does not return */
        native_sub_4327dc(uVar7,0);
      }
    }
    else {
      lVar5 = native_UnityEngine_GameObject__get_transform_8de5c8(param_4,0);
      if (lVar5 != 0) {
        uVar4 = native_UnityEngine_Transform__get_position_77169c(lVar5,0);
        if (((*(byte *)(_UnityEngine_Object_TypeInfo_12d54e0 + 0x133) >> 2 & 1) != 0) &&
           (*(int *)(_UnityEngine_Object_TypeInfo_12d54e0 + 0xe0) == 0)) {
          native_sub_4327ec();
        }
        uVar6 = native_UnityEngine_Object__op_Inequality_8d76fc(plVar2,0,0);
        if ((uVar6 & 1) != 0) {
          if ((plVar2 == (long *)0x0) ||
             (lVar5 = (**(code **)(*plVar2 + 0x1e8))(plVar2,*(undefined8 *)(*plVar2 + 0x1f0)),
             lVar5 == 0)) goto LAB_00ae6cf0;
          if ((*(uint *)(lVar5 + 0x18) == 0) || (*(uint *)(lVar5 + 0x18) < 3)) goto LAB_00ae6cf4;
          uVar4 = (ulong)(uint)((*(float *)(lVar5 + 0x20) + *(float *)(lVar5 + 0x38)) * 0.5);
          param_2 = (ulong)(uint)((*(float *)(lVar5 + 0x24) + *(float *)(lVar5 + 0x3c)) * 0.5);
          param_3 = (ulong)(uint)((*(float *)(lVar5 + 0x28) + *(float *)(lVar5 + 0x40)) * 0.5);
        }
        if ((lVar3 != 0) && (lVar3 = native_UICamera__get_cachedCamera_c95254(lVar3,0), lVar3 != 0))
        {
          auVar8 = native_UnityEngine_Camera__WorldToScreenPoint_8d9158
                             (uVar4,param_2,param_3,lVar3,0);
          return auVar8;
        }
      }
    }
  }
LAB_00ae6cf0:
                    /* WARNING: Subroutine does not return */
  native_sub_432810();
}



/* UIKeyNavigation$$OnNavigate @ 0xae6d00
 * void UIKeyNavigation__OnNavigate (UIKeyNavigation_o* __this, int32_t key, const MethodInfo* method); */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* UIKeyNavigation$$OnNavigate
   void UIKeyNavigation__OnNavigate (UIKeyNavigation_o* __this, int32_t key, const MethodInfo*
   method); */

void native_UIKeyNavigation__OnNavigate_ae6d00(undefined8 param_1,undefined4 param_2)

{
  bool bVar1;
  int iVar2;
  undefined4 uVar3;
  int iVar4;
  ulong uVar5;
  long *plVar6;
  undefined8 *puVar7;
  long lVar8;
  long lVar9;
  undefined8 uVar10;
  undefined8 uVar11;
  long lVar12;
  undefined8 uVar13;
  undefined1 auStack_4c [4];
  undefined1 auStack_48 [4];
  undefined1 auStack_44 [4];
  
  if ((bRam0000000001341ff6 & 1) == 0) {
    native_sub_43273c(&UnityEngine_Object_TypeInfo_12d54e0);
    native_sub_43273c(&UICamera_TypeInfo_12d6410);
    native_sub_43273c(&UIKeyNavigation_TypeInfo_12d6460);
    native_sub_43273c(&UIPopupList_TypeInfo_12d6490);
    bRam0000000001341ff6 = 1;
  }
  if (((*(byte *)(_UIPopupList_TypeInfo_12d6490 + 0x133) >> 2 & 1) != 0) &&
     (*(int *)(_UIPopupList_TypeInfo_12d6490 + 0xe0) == 0)) {
    native_sub_4327ec();
  }
  uVar5 = native_UIPopupList__get_isOpen_c264f8(0);
  if ((uVar5 & 1) != 0) {
    return;
  }
  if (((*(byte *)(_UIKeyNavigation_TypeInfo_12d6460 + 0x133) >> 2 & 1) != 0) &&
     (*(int *)(_UIKeyNavigation_TypeInfo_12d6460 + 0xe0) == 0)) {
    native_sub_4327ec();
  }
  iVar4 = *(int *)(*(long *)(_UIKeyNavigation_TypeInfo_12d6460 + 0xb8) + 8);
  iVar2 = native_UnityEngine_Time__get_frameCount_770964(0);
  if (iVar4 == iVar2) {
    return;
  }
  uVar3 = native_UnityEngine_Time__get_frameCount_770964(0);
  if (((*(byte *)(_UIKeyNavigation_TypeInfo_12d6460 + 0x133) >> 2 & 1) != 0) &&
     (*(int *)(_UIKeyNavigation_TypeInfo_12d6460 + 0xe0) == 0)) {
    native_sub_4327ec(_UIKeyNavigation_TypeInfo_12d6460);
  }
  *(undefined4 *)(*(long *)(_UIKeyNavigation_TypeInfo_12d6460 + 0xb8) + 8) = uVar3;
  switch(param_2) {
  case 0x111:
    uVar10 = native_UIKeyNavigation__GetUp_ae692c(param_1);
    break;
  case 0x112:
    uVar10 = native_UIKeyNavigation__GetDown_ae69d4(param_1);
    break;
  case 0x113:
    uVar10 = native_UIKeyNavigation__GetRight_ae6884(param_1);
    break;
  case 0x114:
    uVar10 = native_UIKeyNavigation__GetLeft_ae647c(param_1);
    break;
  default:
    uVar10 = 0;
  }
  if (((*(byte *)(_UnityEngine_Object_TypeInfo_12d54e0 + 0x133) >> 2 & 1) != 0) &&
     (*(int *)(_UnityEngine_Object_TypeInfo_12d54e0 + 0xe0) == 0)) {
    native_sub_4327ec();
  }
  uVar5 = native_UnityEngine_Object__op_Inequality_8d76fc(uVar10,0,0);
  if ((uVar5 & 1) == 0) {
    return;
  }
  if (((*(byte *)(_UICamera_TypeInfo_12d6410 + 0x133) >> 2 & 1) != 0) &&
     (*(int *)(_UICamera_TypeInfo_12d6410 + 0xe0) == 0)) {
    native_sub_4327ec();
  }
  if ((bRam00000000013428c4 & 1) == 0) {
    native_sub_43273c(&bool_TypeInfo_12d3bd0,0);
    native_sub_43273c(&Method_UnityEngine_GameObject_GetComponent_UIKeyNavigation____12e4ab8);
    native_sub_43273c(&UnityEngine_Object_TypeInfo_12d54e0);
    native_sub_43273c(&UICamera_TypeInfo_12d6410);
    native_sub_43273c(&StringLiteral_OnHover_12f0238);
    native_sub_43273c(&StringLiteral_OnSelect_12f02c0);
    bRam00000000013428c4 = 1;
  }
  if (((*(byte *)(_UICamera_TypeInfo_12d6410 + 0x133) >> 2 & 1) != 0) &&
     (*(int *)(_UICamera_TypeInfo_12d6410 + 0xe0) == 0)) {
    native_sub_4327ec();
  }
  uVar11 = *(undefined8 *)(*(long *)(_UICamera_TypeInfo_12d6410 + 0xb8) + 0x1e0);
  if (((*(byte *)(_UnityEngine_Object_TypeInfo_12d54e0 + 0x133) >> 2 & 1) != 0) &&
     (*(int *)(_UnityEngine_Object_TypeInfo_12d54e0 + 0xe0) == 0)) {
    native_sub_4327ec(_UnityEngine_Object_TypeInfo_12d54e0);
  }
  uVar5 = native_UnityEngine_Object__op_Equality_8e9a3c(uVar11,uVar10,0);
  if ((uVar5 & 1) == 0) {
    if (((*(byte *)(_UICamera_TypeInfo_12d6410 + 0x133) >> 2 & 1) != 0) &&
       (*(int *)(_UICamera_TypeInfo_12d6410 + 0xe0) == 0)) {
      native_sub_4327ec();
    }
    plVar6 = (long *)(_UICamera_TypeInfo_12d6410 + 0xb8);
    lVar8 = *plVar6;
    lVar12 = *(long *)(lVar8 + 0xb8);
    if (*(long *)(lVar8 + 0xe0) == 0) {
      if (((*(byte *)(_UICamera_TypeInfo_12d6410 + 0x133) >> 2 & 1) != 0) &&
         (*(int *)(_UICamera_TypeInfo_12d6410 + 0xe0) == 0)) {
        native_sub_4327ec();
        plVar6 = (long *)(_UICamera_TypeInfo_12d6410 + 0xb8);
        lVar8 = *plVar6;
      }
      *(undefined4 *)(lVar8 + 0xd4) = 0xffffff9c;
      lVar8 = *plVar6;
      *(undefined8 *)(lVar8 + 0xe0) = *(undefined8 *)(lVar8 + 400);
      native_sub_4326e0(lVar8 + 0xe0);
      bVar1 = true;
    }
    else {
      bVar1 = false;
    }
    if (((*(byte *)(_UICamera_TypeInfo_12d6410 + 0x133) >> 2 & 1) != 0) &&
       (*(int *)(_UICamera_TypeInfo_12d6410 + 0xe0) == 0)) {
      native_sub_4327ec();
    }
    native_UICamera__ShowTooltip_c953cc(0);
    uVar11 = *(undefined8 *)(*(long *)(_UICamera_TypeInfo_12d6410 + 0xb8) + 0x1e8);
    if (((*(byte *)(_UnityEngine_Object_TypeInfo_12d54e0 + 0x133) >> 2 & 1) != 0) &&
       (*(int *)(_UnityEngine_Object_TypeInfo_12d54e0 + 0xe0) == 0)) {
      native_sub_4327ec();
    }
    uVar5 = native_UnityEngine_Object__op_Implicit_8e1b98(uVar11,0);
    if ((uVar5 & 1) != 0) {
      if (((*(byte *)(_UICamera_TypeInfo_12d6410 + 0x133) >> 2 & 1) != 0) &&
         (*(int *)(_UICamera_TypeInfo_12d6410 + 0xe0) == 0)) {
        native_sub_4327ec();
      }
      iVar4 = native_UICamera__get_currentScheme_c92518();
      if (iVar4 == 2) {
        if (((*(byte *)(_UICamera_TypeInfo_12d6410 + 0x133) >> 2 & 1) != 0) &&
           (*(int *)(_UICamera_TypeInfo_12d6410 + 0xe0) == 0)) {
          native_sub_4327ec();
        }
        uVar13 = *(undefined8 *)(*(long *)(_UICamera_TypeInfo_12d6410 + 0xb8) + 0x1e8);
        auStack_44[0] = 0;
        uVar11 = native_sub_4327fc(_bool_TypeInfo_12d3bd0,auStack_44);
        native_UICamera__Notify_c96a08(uVar13,_StringLiteral_OnSelect_12f02c0,uVar11);
        lVar9 = *(long *)(_UICamera_TypeInfo_12d6410 + 0xb8);
        lVar8 = *(long *)(lVar9 + 0x120);
        if (lVar8 != 0) {
          if (((*(byte *)(_UICamera_TypeInfo_12d6410 + 0x133) >> 2 & 1) != 0) &&
             (*(int *)(_UICamera_TypeInfo_12d6410 + 0xe0) == 0)) {
            native_sub_4327ec();
            lVar9 = *(long *)(_UICamera_TypeInfo_12d6410 + 0xb8);
            lVar8 = *(long *)(lVar9 + 0x120);
            if (lVar8 == 0) goto LAB_00c969f8;
          }
          native_UICamera_BoolDelegate__Invoke_550030(lVar8,*(undefined8 *)(lVar9 + 0x1e8),0,0);
        }
        if (((*(byte *)(_UICamera_TypeInfo_12d6410 + 0x133) >> 2 & 1) != 0) &&
           (*(int *)(_UICamera_TypeInfo_12d6410 + 0xe0) == 0)) {
          native_sub_4327ec();
        }
        lVar8 = *(long *)(_UICamera_TypeInfo_12d6410 + 0xb8);
        *(undefined8 *)(lVar8 + 0x1e8) = 0;
        native_sub_4326e0(lVar8 + 0x1e8,0);
      }
    }
    if (((*(byte *)(_UICamera_TypeInfo_12d6410 + 0x133) >> 2 & 1) != 0) &&
       (*(int *)(_UICamera_TypeInfo_12d6410 + 0xe0) == 0)) {
      native_sub_4327ec();
    }
    uVar11 = *(undefined8 *)(*(long *)(_UICamera_TypeInfo_12d6410 + 0xb8) + 0x1e0);
    if (((*(byte *)(_UnityEngine_Object_TypeInfo_12d54e0 + 0x133) >> 2 & 1) != 0) &&
       (*(int *)(_UnityEngine_Object_TypeInfo_12d54e0 + 0xe0) == 0)) {
      native_sub_4327ec(_UnityEngine_Object_TypeInfo_12d54e0);
    }
    uVar5 = native_UnityEngine_Object__op_Implicit_8e1b98(uVar11,0);
    if ((uVar5 & 1) != 0) {
      if (((*(byte *)(_UICamera_TypeInfo_12d6410 + 0x133) >> 2 & 1) != 0) &&
         (*(int *)(_UICamera_TypeInfo_12d6410 + 0xe0) == 0)) {
        native_sub_4327ec();
      }
      uVar13 = *(undefined8 *)(*(long *)(_UICamera_TypeInfo_12d6410 + 0xb8) + 0x1e0);
      auStack_48[0] = 0;
      uVar11 = native_sub_4327fc(_bool_TypeInfo_12d3bd0,auStack_48);
      native_UICamera__Notify_c96a08(uVar13,_StringLiteral_OnHover_12f0238,uVar11);
      lVar9 = *(long *)(_UICamera_TypeInfo_12d6410 + 0xb8);
      lVar8 = *(long *)(lVar9 + 0x110);
      if (lVar8 != 0) {
        if (((*(byte *)(_UICamera_TypeInfo_12d6410 + 0x133) >> 2 & 1) != 0) &&
           (*(int *)(_UICamera_TypeInfo_12d6410 + 0xe0) == 0)) {
          native_sub_4327ec(_UICamera_TypeInfo_12d6410);
          lVar9 = *(long *)(_UICamera_TypeInfo_12d6410 + 0xb8);
          lVar8 = *(long *)(lVar9 + 0x110);
          if (lVar8 == 0) goto LAB_00c969f8;
        }
        native_UICamera_BoolDelegate__Invoke_550030(lVar8,*(undefined8 *)(lVar9 + 0x1e0),0,0);
      }
    }
    if (((*(byte *)(_UICamera_TypeInfo_12d6410 + 0x133) >> 2 & 1) != 0) &&
       (*(int *)(_UICamera_TypeInfo_12d6410 + 0xe0) == 0)) {
      native_sub_4327ec();
    }
    lVar8 = *(long *)(_UICamera_TypeInfo_12d6410 + 0xb8);
    *(undefined8 *)(lVar8 + 0x1e0) = uVar10;
    native_sub_4326e0(lVar8 + 0x1e0,uVar10);
    lVar8 = _UICamera_TypeInfo_12d6410;
    lVar9 = *(long *)(*(long *)(_UICamera_TypeInfo_12d6410 + 0xb8) + 0xe0);
    if (lVar9 == 0) {
LAB_00c969f8:
                    /* WARNING: Subroutine does not return */
      native_sub_432810();
    }
    *(undefined4 *)(lVar9 + 0x70) = 0;
    uVar10 = *(undefined8 *)(*(long *)(lVar8 + 0xb8) + 0x1e0);
    if (((*(byte *)(_UnityEngine_Object_TypeInfo_12d54e0 + 0x133) >> 2 & 1) != 0) &&
       (*(int *)(_UnityEngine_Object_TypeInfo_12d54e0 + 0xe0) == 0)) {
      native_sub_4327ec();
    }
    uVar5 = native_UnityEngine_Object__op_Implicit_8e1b98(uVar10,0);
    if ((uVar5 & 1) != 0) {
      if (((*(byte *)(_UICamera_TypeInfo_12d6410 + 0x133) >> 2 & 1) != 0) &&
         (*(int *)(_UICamera_TypeInfo_12d6410 + 0xe0) == 0)) {
        native_sub_4327ec();
      }
      lVar8 = *(long *)(*(long *)(_UICamera_TypeInfo_12d6410 + 0xb8) + 400);
      if (lVar8 == 0) goto LAB_00c969f8;
      uVar10 = *(undefined8 *)(*(long *)(_UICamera_TypeInfo_12d6410 + 0xb8) + 0x1e0);
      uVar11 = *(undefined8 *)(lVar8 + 0x48);
      if (((*(byte *)(_UnityEngine_Object_TypeInfo_12d54e0 + 0x133) >> 2 & 1) != 0) &&
         (*(int *)(_UnityEngine_Object_TypeInfo_12d54e0 + 0xe0) == 0)) {
        native_sub_4327ec();
      }
      uVar5 = native_UnityEngine_Object__op_Inequality_8d76fc(uVar10,uVar11,0);
      if ((uVar5 & 1) != 0) {
        if (((*(byte *)(_UICamera_TypeInfo_12d6410 + 0x133) >> 2 & 1) != 0) &&
           (*(int *)(_UICamera_TypeInfo_12d6410 + 0xe0) == 0)) {
          native_sub_4327ec();
        }
        lVar8 = *(long *)(*(long *)(_UICamera_TypeInfo_12d6410 + 0xb8) + 0x1e0);
        if (lVar8 == 0) goto LAB_00c969f8;
        uVar10 = native_UnityEngine_GameObject__GetComponent_BE2_BlockSectionHeader_Custom__4a2214
                           (lVar8,
                            _Method_UnityEngine_GameObject_GetComponent_UIKeyNavigation____12e4ab8);
        if (((*(byte *)(_UnityEngine_Object_TypeInfo_12d54e0 + 0x133) >> 2 & 1) != 0) &&
           (*(int *)(_UnityEngine_Object_TypeInfo_12d54e0 + 0xe0) == 0)) {
          native_sub_4327ec(_UnityEngine_Object_TypeInfo_12d54e0);
        }
        uVar5 = native_UnityEngine_Object__op_Inequality_8d76fc(uVar10,0,0);
        if ((uVar5 & 1) != 0) {
          if (((*(byte *)(_UICamera_TypeInfo_12d6410 + 0x133) >> 2 & 1) != 0) &&
             (*(int *)(_UICamera_TypeInfo_12d6410 + 0xe0) == 0)) {
            native_sub_4327ec();
          }
          lVar8 = *(long *)(*(long *)(_UICamera_TypeInfo_12d6410 + 0xb8) + 400);
          if (lVar8 == 0) goto LAB_00c969f8;
          *(undefined8 *)(lVar8 + 0x48) =
               *(undefined8 *)(*(long *)(_UICamera_TypeInfo_12d6410 + 0xb8) + 0x1e0);
          native_sub_4326e0();
        }
      }
      if (bVar1) {
        if (((*(byte *)(_UICamera_TypeInfo_12d6410 + 0x133) >> 2 & 1) != 0) &&
           (*(int *)(_UICamera_TypeInfo_12d6410 + 0xe0) == 0)) {
          native_sub_4327ec();
        }
        uVar10 = *(undefined8 *)(*(long *)(_UICamera_TypeInfo_12d6410 + 0xb8) + 0x1e0);
        if (((*(byte *)(_UnityEngine_Object_TypeInfo_12d54e0 + 0x133) >> 2 & 1) != 0) &&
           (*(int *)(_UnityEngine_Object_TypeInfo_12d54e0 + 0xe0) == 0)) {
          native_sub_4327ec(_UnityEngine_Object_TypeInfo_12d54e0);
        }
        uVar5 = native_UnityEngine_Object__op_Inequality_8d76fc(uVar10,0,0);
        if ((uVar5 & 1) == 0) {
          if (((*(ushort *)(_UICamera_TypeInfo_12d6410 + 0x132) >> 10 & 1) != 0) &&
             (*(int *)(_UICamera_TypeInfo_12d6410 + 0xe0) == 0)) {
            native_sub_4327ec(_UICamera_TypeInfo_12d6410);
          }
          if ((**(long **)(_UICamera_TypeInfo_12d6410 + 0xb8) == 0) ||
             (lVar8 = *(long *)(**(long **)(_UICamera_TypeInfo_12d6410 + 0xb8) + 0x10), lVar8 == 0))
          goto LAB_00c969f8;
          if (*(int *)(lVar8 + 0x18) == 0) {
            uVar10 = native_sub_43283c();
                    /* WARNING: Subroutine does not return */
            native_sub_4327dc(uVar10,0);
          }
          lVar8 = *(long *)(lVar8 + 0x20);
        }
        else {
          if (((*(ushort *)(_UICamera_TypeInfo_12d6410 + 0x132) >> 10 & 1) != 0) &&
             (*(int *)(_UICamera_TypeInfo_12d6410 + 0xe0) == 0)) {
            native_sub_4327ec(_UICamera_TypeInfo_12d6410);
          }
          lVar8 = *(long *)(*(long *)(_UICamera_TypeInfo_12d6410 + 0xb8) + 0x1e0);
          if (lVar8 == 0) goto LAB_00c969f8;
          native_UnityEngine_GameObject__get_layer_8de608(lVar8,0);
          lVar8 = native_UICamera__FindCameraForLayer_c96d2c();
        }
        if (((*(byte *)(_UnityEngine_Object_TypeInfo_12d54e0 + 0x133) >> 2 & 1) != 0) &&
           (*(int *)(_UnityEngine_Object_TypeInfo_12d54e0 + 0xe0) == 0)) {
          native_sub_4327ec();
        }
        uVar5 = native_UnityEngine_Object__op_Inequality_8d76fc(lVar8,0,0);
        if ((uVar5 & 1) != 0) {
          if (((*(byte *)(_UICamera_TypeInfo_12d6410 + 0x133) >> 2 & 1) != 0) &&
             (*(int *)(_UICamera_TypeInfo_12d6410 + 0xe0) == 0)) {
            native_sub_4327ec();
          }
          plVar6 = (long *)(*(long *)(_UICamera_TypeInfo_12d6410 + 0xb8) + 0xb8);
          *plVar6 = lVar8;
          native_sub_4326e0(plVar6,lVar8);
          if (lVar8 == 0) goto LAB_00c969f8;
          uVar10 = native_UICamera__get_cachedCamera_c95254(lVar8);
          puVar7 = (undefined8 *)(*(long *)(_UICamera_TypeInfo_12d6410 + 0xb8) + 0xc0);
          *puVar7 = uVar10;
          native_sub_4326e0(puVar7,uVar10);
        }
      }
      if (((*(byte *)(_UICamera_TypeInfo_12d6410 + 0x133) >> 2 & 1) != 0) &&
         (*(int *)(_UICamera_TypeInfo_12d6410 + 0xe0) == 0)) {
        native_sub_4327ec();
      }
      lVar9 = *(long *)(_UICamera_TypeInfo_12d6410 + 0xb8);
      lVar8 = *(long *)(lVar9 + 0x110);
      if (lVar8 != 0) {
        if (((*(byte *)(_UICamera_TypeInfo_12d6410 + 0x133) >> 2 & 1) != 0) &&
           (*(int *)(_UICamera_TypeInfo_12d6410 + 0xe0) == 0)) {
          native_sub_4327ec();
          lVar9 = *(long *)(_UICamera_TypeInfo_12d6410 + 0xb8);
          lVar8 = *(long *)(lVar9 + 0x110);
          if (lVar8 == 0) goto LAB_00c969f8;
        }
        native_UICamera_BoolDelegate__Invoke_550030(lVar8,*(undefined8 *)(lVar9 + 0x1e0),1,0);
      }
      if (((*(byte *)(_UICamera_TypeInfo_12d6410 + 0x133) >> 2 & 1) != 0) &&
         (*(int *)(_UICamera_TypeInfo_12d6410 + 0xe0) == 0)) {
        native_sub_4327ec();
      }
      uVar11 = *(undefined8 *)(*(long *)(_UICamera_TypeInfo_12d6410 + 0xb8) + 0x1e0);
      auStack_4c[0] = 1;
      uVar10 = native_sub_4327fc(_bool_TypeInfo_12d3bd0,auStack_4c);
      native_UICamera__Notify_c96a08(uVar11,_StringLiteral_OnHover_12f0238,uVar10);
    }
    if (bVar1) {
      if (((*(byte *)(_UICamera_TypeInfo_12d6410 + 0x133) >> 2 & 1) != 0) &&
         (*(int *)(_UICamera_TypeInfo_12d6410 + 0xe0) == 0)) {
        native_sub_4327ec();
      }
      plVar6 = (long *)(*(long *)(_UICamera_TypeInfo_12d6410 + 0xb8) + 0xb8);
      *plVar6 = lVar12;
      native_sub_4326e0(plVar6,lVar12);
      if (((*(byte *)(_UnityEngine_Object_TypeInfo_12d54e0 + 0x133) >> 2 & 1) != 0) &&
         (*(int *)(_UnityEngine_Object_TypeInfo_12d54e0 + 0xe0) == 0)) {
        native_sub_4327ec();
      }
      uVar5 = native_UnityEngine_Object__op_Inequality_8d76fc(lVar12,0,0);
      uVar10 = 0;
      if ((uVar5 & 1) != 0) {
        if (lVar12 == 0) goto LAB_00c969f8;
        uVar10 = native_UICamera__get_cachedCamera_c95254(lVar12);
      }
      if (((*(byte *)(_UICamera_TypeInfo_12d6410 + 0x133) >> 2 & 1) != 0) &&
         (*(int *)(_UICamera_TypeInfo_12d6410 + 0xe0) == 0)) {
        native_sub_4327ec();
      }
      puVar7 = (undefined8 *)(*(long *)(_UICamera_TypeInfo_12d6410 + 0xb8) + 0xc0);
      *puVar7 = uVar10;
      native_sub_4326e0(puVar7,uVar10);
      puVar7 = (undefined8 *)(*(long *)(_UICamera_TypeInfo_12d6410 + 0xb8) + 0xe0);
      *puVar7 = 0;
      native_sub_4326e0(puVar7,0);
      *(undefined4 *)(*(long *)(_UICamera_TypeInfo_12d6410 + 0xb8) + 0xd4) = 0xffffff9c;
    }
  }
  return;
}



/* UIKeyNavigation$$OnKey @ 0xae6ecc
 * void UIKeyNavigation__OnKey (UIKeyNavigation_o* __this, int32_t key, const MethodInfo* method); */

/* WARNING: Removing unreachable block (ram,0x009f3040) */
/* WARNING: Removing unreachable block (ram,0x009f3080) */
/* WARNING: Removing unreachable block (ram,0x009f3048) */
/* WARNING: Removing unreachable block (ram,0x009f305c) */
/* WARNING: Removing unreachable block (ram,0x009f3064) */
/* WARNING: Removing unreachable block (ram,0x009f3068) */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* UIKeyNavigation$$OnKey
   void UIKeyNavigation__OnKey (UIKeyNavigation_o* __this, int32_t key, const MethodInfo* method);
    */

void native_UIKeyNavigation__OnKey_ae6ecc(long param_1,int param_2)

{
  ulong *puVar1;
  int iVar2;
  char cVar3;
  bool bVar4;
  byte bVar5;
  int iVar6;
  undefined4 uVar7;
  uint uVar8;
  ulong uVar9;
  long lVar10;
  long *plVar11;
  undefined8 *puVar12;
  long lVar13;
  undefined8 uVar14;
  long lVar15;
  long lVar16;
  undefined8 uVar17;
  uint uVar18;
  undefined1 auStack_48 [4];
  undefined1 auStack_44 [4];
  
  if ((bRam0000000001341ff7 & 1) == 0) {
    native_sub_43273c(&Method_UnityEngine_GameObject_GetComponent_UIInput____12e4ab0);
    native_sub_43273c(&UnityEngine_Object_TypeInfo_12d54e0);
    native_sub_43273c(&UICamera_TypeInfo_12d6410);
    native_sub_43273c(&UIKeyNavigation_TypeInfo_12d6460);
    native_sub_43273c(&UIPopupList_TypeInfo_12d6490);
    bRam0000000001341ff7 = 1;
  }
  if (((*(byte *)(_UIPopupList_TypeInfo_12d6490 + 0x133) >> 2 & 1) != 0) &&
     (*(int *)(_UIPopupList_TypeInfo_12d6490 + 0xe0) == 0)) {
    native_sub_4327ec();
  }
  uVar9 = native_UIPopupList__get_isOpen_c264f8(0);
  if ((uVar9 & 1) != 0) {
    return;
  }
  if (((*(byte *)(_UIKeyNavigation_TypeInfo_12d6460 + 0x133) >> 2 & 1) != 0) &&
     (*(int *)(_UIKeyNavigation_TypeInfo_12d6460 + 0xe0) == 0)) {
    native_sub_4327ec();
  }
  iVar2 = *(int *)(*(long *)(_UIKeyNavigation_TypeInfo_12d6460 + 0xb8) + 8);
  iVar6 = native_UnityEngine_Time__get_frameCount_770964(0);
  if (iVar2 == iVar6) {
    return;
  }
  uVar7 = native_UnityEngine_Time__get_frameCount_770964(0);
  if (((*(byte *)(_UIKeyNavigation_TypeInfo_12d6460 + 0x133) >> 2 & 1) != 0) &&
     (*(int *)(_UIKeyNavigation_TypeInfo_12d6460 + 0xe0) == 0)) {
    native_sub_4327ec(_UIKeyNavigation_TypeInfo_12d6460);
  }
  *(undefined4 *)(*(long *)(_UIKeyNavigation_TypeInfo_12d6460 + 0xb8) + 8) = uVar7;
  if (param_2 != 9) {
    return;
  }
  lVar16 = *(long *)(param_1 + 0x48);
  if (((*(byte *)(_UnityEngine_Object_TypeInfo_12d54e0 + 0x133) >> 2 & 1) != 0) &&
     (*(int *)(_UnityEngine_Object_TypeInfo_12d54e0 + 0xe0) == 0)) {
    native_sub_4327ec();
  }
  uVar9 = native_UnityEngine_Object__op_Equality_8e9a3c(lVar16,0,0);
  if ((uVar9 & 1) != 0) {
    if (((*(byte *)(_UICamera_TypeInfo_12d6410 + 0x133) >> 2 & 1) != 0) &&
       (*(int *)(_UICamera_TypeInfo_12d6410 + 0xe0) == 0)) {
      native_sub_4327ec();
    }
    lVar16 = *(long *)(*(long *)(_UICamera_TypeInfo_12d6410 + 0xb8) + 0x18);
    if (lVar16 == 0) goto LAB_00ae72d8;
    uVar9 = native_UICamera_GetKeyStateFunc__Invoke_551094(lVar16,0x130,0);
    if ((uVar9 & 1) == 0) {
      if (((*(byte *)(_UICamera_TypeInfo_12d6410 + 0x133) >> 2 & 1) != 0) &&
         (*(int *)(_UICamera_TypeInfo_12d6410 + 0xe0) == 0)) {
        native_sub_4327ec();
      }
      lVar16 = *(long *)(*(long *)(_UICamera_TypeInfo_12d6410 + 0xb8) + 0x18);
      if (lVar16 == 0) goto LAB_00ae72d8;
      uVar9 = native_UICamera_GetKeyStateFunc__Invoke_551094(lVar16,0x12f,0);
      if ((uVar9 & 1) == 0) {
        lVar16 = native_UIKeyNavigation__GetRight_ae6884(param_1);
        if (((*(byte *)(_UnityEngine_Object_TypeInfo_12d54e0 + 0x133) >> 2 & 1) != 0) &&
           (*(int *)(_UnityEngine_Object_TypeInfo_12d54e0 + 0xe0) == 0)) {
          native_sub_4327ec(_UnityEngine_Object_TypeInfo_12d54e0);
        }
        uVar9 = native_UnityEngine_Object__op_Equality_8e9a3c(lVar16,0,0);
        if ((uVar9 & 1) != 0) {
          lVar16 = native_UIKeyNavigation__GetDown_ae69d4(param_1);
        }
        if (((*(byte *)(_UnityEngine_Object_TypeInfo_12d54e0 + 0x133) >> 2 & 1) != 0) &&
           (*(int *)(_UnityEngine_Object_TypeInfo_12d54e0 + 0xe0) == 0)) {
          native_sub_4327ec();
        }
        uVar9 = native_UnityEngine_Object__op_Equality_8e9a3c(lVar16,0,0);
        if ((uVar9 & 1) != 0) {
          lVar16 = native_UIKeyNavigation__GetUp_ae692c(param_1);
        }
        if (((*(byte *)(_UnityEngine_Object_TypeInfo_12d54e0 + 0x133) >> 2 & 1) != 0) &&
           (*(int *)(_UnityEngine_Object_TypeInfo_12d54e0 + 0xe0) == 0)) {
          native_sub_4327ec();
        }
        uVar9 = native_UnityEngine_Object__op_Equality_8e9a3c(lVar16,0,0);
        if ((uVar9 & 1) != 0) {
          lVar16 = native_UIKeyNavigation__GetLeft_ae647c(param_1);
        }
        goto LAB_00ae71f8;
      }
    }
    lVar16 = native_UIKeyNavigation__GetLeft_ae647c(param_1);
    if (((*(byte *)(_UnityEngine_Object_TypeInfo_12d54e0 + 0x133) >> 2 & 1) != 0) &&
       (*(int *)(_UnityEngine_Object_TypeInfo_12d54e0 + 0xe0) == 0)) {
      native_sub_4327ec(_UnityEngine_Object_TypeInfo_12d54e0);
    }
    uVar9 = native_UnityEngine_Object__op_Equality_8e9a3c(lVar16,0,0);
    if ((uVar9 & 1) != 0) {
      lVar16 = native_UIKeyNavigation__GetUp_ae692c(param_1);
    }
    if (((*(byte *)(_UnityEngine_Object_TypeInfo_12d54e0 + 0x133) >> 2 & 1) != 0) &&
       (*(int *)(_UnityEngine_Object_TypeInfo_12d54e0 + 0xe0) == 0)) {
      native_sub_4327ec();
    }
    uVar9 = native_UnityEngine_Object__op_Equality_8e9a3c(lVar16,0,0);
    if ((uVar9 & 1) != 0) {
      lVar16 = native_UIKeyNavigation__GetDown_ae69d4(param_1);
    }
    if (((*(byte *)(_UnityEngine_Object_TypeInfo_12d54e0 + 0x133) >> 2 & 1) != 0) &&
       (*(int *)(_UnityEngine_Object_TypeInfo_12d54e0 + 0xe0) == 0)) {
      native_sub_4327ec();
    }
    uVar9 = native_UnityEngine_Object__op_Equality_8e9a3c(lVar16,0,0);
    if ((uVar9 & 1) != 0) {
      lVar16 = native_UIKeyNavigation__GetRight_ae6884(param_1);
    }
  }
LAB_00ae71f8:
  if (((*(byte *)(_UnityEngine_Object_TypeInfo_12d54e0 + 0x133) >> 2 & 1) != 0) &&
     (*(int *)(_UnityEngine_Object_TypeInfo_12d54e0 + 0xe0) == 0)) {
    native_sub_4327ec();
  }
  uVar9 = native_UnityEngine_Object__op_Inequality_8d76fc(lVar16,0,0);
  if ((uVar9 & 1) == 0) {
    return;
  }
  if (((*(byte *)(_UICamera_TypeInfo_12d6410 + 0x133) >> 2 & 1) != 0) &&
     (*(int *)(_UICamera_TypeInfo_12d6410 + 0xe0) == 0)) {
    native_sub_4327ec();
  }
  native_UICamera__set_currentScheme_c94744(2,0);
  native_UICamera__set_hoveredObject_c9622c(lVar16,0);
  if (lVar16 == 0) {
LAB_00ae72d8:
                    /* WARNING: Subroutine does not return */
    native_sub_432810();
  }
  lVar16 = native_UnityEngine_GameObject__GetComponent_BE2_BlockSectionHeader_Custom__4a2214
                     (lVar16,_Method_UnityEngine_GameObject_GetComponent_UIInput____12e4ab0);
  if (((*(byte *)(_UnityEngine_Object_TypeInfo_12d54e0 + 0x133) >> 2 & 1) != 0) &&
     (*(int *)(_UnityEngine_Object_TypeInfo_12d54e0 + 0xe0) == 0)) {
    native_sub_4327ec(_UnityEngine_Object_TypeInfo_12d54e0);
  }
  uVar9 = native_UnityEngine_Object__op_Inequality_8d76fc(lVar16,0,0);
  if ((uVar9 & 1) == 0) {
    return;
  }
  if (lVar16 == 0) goto LAB_00ae72d8;
  if ((bRam000000000134197a & 1) == 0) {
    native_sub_43273c(&UICamera_TypeInfo_12d6410,1,0);
    bRam000000000134197a = 1;
  }
  lVar16 = native_UnityEngine_Component__get_gameObject_8da66c(lVar16,0);
  if (((*(byte *)(_UICamera_TypeInfo_12d6410 + 0x133) >> 2 & 1) != 0) &&
     (*(int *)(_UICamera_TypeInfo_12d6410 + 0xe0) == 0)) {
    native_sub_4327ec(_UICamera_TypeInfo_12d6410);
  }
  if ((bRam00000000013428c8 & 1) == 0) {
    native_sub_43273c(&bool_TypeInfo_12d3bd0,0);
    native_sub_43273c(&Method_UnityEngine_GameObject_GetComponent_UIInput____12e4ab0);
    native_sub_43273c(&Method_UnityEngine_GameObject_GetComponent_UIKeyNavigation____12e4ab8);
    native_sub_43273c(&UnityEngine_Object_TypeInfo_12d54e0);
    native_sub_43273c(&UICamera_TypeInfo_12d6410);
    native_sub_43273c(&StringLiteral_OnSelect_12f02c0);
    bRam00000000013428c8 = 1;
  }
  if (((*(byte *)(_UICamera_TypeInfo_12d6410 + 0x133) >> 2 & 1) != 0) &&
     (*(int *)(_UICamera_TypeInfo_12d6410 + 0xe0) == 0)) {
    native_sub_4327ec();
  }
  uVar14 = *(undefined8 *)(*(long *)(_UICamera_TypeInfo_12d6410 + 0xb8) + 0x1e8);
  if (((*(byte *)(_UnityEngine_Object_TypeInfo_12d54e0 + 0x133) >> 2 & 1) != 0) &&
     (*(int *)(_UnityEngine_Object_TypeInfo_12d54e0 + 0xe0) == 0)) {
    native_sub_4327ec(_UnityEngine_Object_TypeInfo_12d54e0);
  }
  uVar9 = native_UnityEngine_Object__op_Equality_8e9a3c(uVar14,lVar16,0);
  if ((uVar9 & 1) != 0) {
    if (((*(ushort *)(_UICamera_TypeInfo_12d6410 + 0x132) >> 10 & 1) != 0) &&
       (*(int *)(_UICamera_TypeInfo_12d6410 + 0xe0) == 0)) {
      native_sub_4327ec(_UICamera_TypeInfo_12d6410);
    }
    native_UICamera__set_hoveredObject_c9622c(lVar16);
    lVar10 = *(long *)(*(long *)(_UICamera_TypeInfo_12d6410 + 0xb8) + 400);
    if (lVar10 != 0) {
      plVar11 = (long *)(lVar10 + 0x48);
      *plVar11 = lVar16;
      if (iRam0000000001345318 != 0) {
        puVar1 = (ulong *)(((ulong)plVar11 >> 0x12 & 0x7fff) * 8 + 0x138ecd8);
        do {
          cVar3 = '\x01';
          bVar4 = (bool)ExclusiveMonitorPass(puVar1,0x10);
          if (bVar4) {
            *puVar1 = *puVar1 | 1L << ((ulong)plVar11 >> 0xc & 0x3f);
            cVar3 = ExclusiveMonitorsStatus();
          }
        } while (cVar3 != '\0');
      }
      return;
    }
    goto LAB_00c97ea8;
  }
  if (((*(ushort *)(_UICamera_TypeInfo_12d6410 + 0x132) >> 10 & 1) != 0) &&
     (*(int *)(_UICamera_TypeInfo_12d6410 + 0xe0) == 0)) {
    native_sub_4327ec(_UICamera_TypeInfo_12d6410);
  }
  native_UICamera__ShowTooltip_c953cc(0);
  plVar11 = (long *)(_UICamera_TypeInfo_12d6410 + 0xb8);
  lVar10 = *plVar11;
  lVar15 = *(long *)(lVar10 + 0xb8);
  if (*(long *)(lVar10 + 0xe0) == 0) {
    if (((*(byte *)(_UICamera_TypeInfo_12d6410 + 0x133) >> 2 & 1) != 0) &&
       (*(int *)(_UICamera_TypeInfo_12d6410 + 0xe0) == 0)) {
      native_sub_4327ec();
      plVar11 = (long *)(_UICamera_TypeInfo_12d6410 + 0xb8);
      lVar10 = *plVar11;
    }
    *(undefined4 *)(lVar10 + 0xd4) = 0xffffff9c;
    lVar10 = *plVar11;
    *(undefined8 *)(lVar10 + 0xe0) = *(undefined8 *)(lVar10 + 400);
    native_sub_4326e0(lVar10 + 0xe0);
    uVar18 = 1;
  }
  else {
    uVar18 = 0;
  }
  if (((*(byte *)(_UICamera_TypeInfo_12d6410 + 0x133) >> 2 & 1) != 0) &&
     (*(int *)(_UICamera_TypeInfo_12d6410 + 0xe0) == 0)) {
    native_sub_4327ec();
  }
  lVar10 = _UICamera_TypeInfo_12d6410;
  *(undefined1 *)(*(long *)(_UICamera_TypeInfo_12d6410 + 0xb8) + 0xe8) = 0;
  uVar14 = *(undefined8 *)(*(long *)(lVar10 + 0xb8) + 0x1e8);
  if (((*(byte *)(_UnityEngine_Object_TypeInfo_12d54e0 + 0x133) >> 2 & 1) != 0) &&
     (*(int *)(_UnityEngine_Object_TypeInfo_12d54e0 + 0xe0) == 0)) {
    native_sub_4327ec(_UnityEngine_Object_TypeInfo_12d54e0);
  }
  uVar9 = native_UnityEngine_Object__op_Implicit_8e1b98(uVar14,0);
  if ((uVar9 & 1) != 0) {
    if (((*(byte *)(_UICamera_TypeInfo_12d6410 + 0x133) >> 2 & 1) != 0) &&
       (*(int *)(_UICamera_TypeInfo_12d6410 + 0xe0) == 0)) {
      native_sub_4327ec();
    }
    uVar17 = *(undefined8 *)(*(long *)(_UICamera_TypeInfo_12d6410 + 0xb8) + 0x1e8);
    auStack_44[0] = 0;
    uVar14 = native_sub_4327fc(_bool_TypeInfo_12d3bd0,auStack_44);
    native_UICamera__Notify_c96a08(uVar17,_StringLiteral_OnSelect_12f02c0,uVar14);
    lVar13 = *(long *)(_UICamera_TypeInfo_12d6410 + 0xb8);
    lVar10 = *(long *)(lVar13 + 0x120);
    if (lVar10 != 0) {
      if (((*(byte *)(_UICamera_TypeInfo_12d6410 + 0x133) >> 2 & 1) != 0) &&
         (*(int *)(_UICamera_TypeInfo_12d6410 + 0xe0) == 0)) {
        native_sub_4327ec(_UICamera_TypeInfo_12d6410);
        lVar13 = *(long *)(_UICamera_TypeInfo_12d6410 + 0xb8);
        lVar10 = *(long *)(lVar13 + 0x120);
        if (lVar10 == 0) goto LAB_00c97ea8;
      }
      native_UICamera_BoolDelegate__Invoke_550030(lVar10,*(undefined8 *)(lVar13 + 0x1e8),0,0);
    }
  }
  if (((*(byte *)(_UICamera_TypeInfo_12d6410 + 0x133) >> 2 & 1) != 0) &&
     (*(int *)(_UICamera_TypeInfo_12d6410 + 0xe0) == 0)) {
    native_sub_4327ec();
  }
  lVar10 = *(long *)(_UICamera_TypeInfo_12d6410 + 0xb8);
  *(long *)(lVar10 + 0x1e8) = lVar16;
  native_sub_4326e0(lVar10 + 0x1e8,lVar16);
  lVar10 = *(long *)(*(long *)(_UICamera_TypeInfo_12d6410 + 0xb8) + 0xe0);
  if (lVar10 == 0) goto LAB_00c97ea8;
  *(undefined4 *)(lVar10 + 0x70) = 0;
  if (((*(byte *)(_UnityEngine_Object_TypeInfo_12d54e0 + 0x133) >> 2 & 1) != 0) &&
     (*(int *)(_UnityEngine_Object_TypeInfo_12d54e0 + 0xe0) == 0)) {
    native_sub_4327ec();
  }
  uVar9 = native_UnityEngine_Object__op_Inequality_8d76fc(lVar16,0,0);
  if ((uVar9 & 1) != 0) {
    if (lVar16 == 0) goto LAB_00c97ea8;
    uVar14 = native_UnityEngine_GameObject__GetComponent_BE2_BlockSectionHeader_Custom__4a2214
                       (lVar16,
                        _Method_UnityEngine_GameObject_GetComponent_UIKeyNavigation____12e4ab8);
    if (((*(byte *)(_UnityEngine_Object_TypeInfo_12d54e0 + 0x133) >> 2 & 1) != 0) &&
       (*(int *)(_UnityEngine_Object_TypeInfo_12d54e0 + 0xe0) == 0)) {
      native_sub_4327ec(_UnityEngine_Object_TypeInfo_12d54e0);
    }
    uVar9 = native_UnityEngine_Object__op_Inequality_8d76fc(uVar14,0,0);
    if ((uVar9 & 1) == 0) {
      uVar14 = native_UnityEngine_GameObject__GetComponent_BE2_BlockSectionHeader_Custom__4a2214
                         (lVar16,_Method_UnityEngine_GameObject_GetComponent_UIInput____12e4ab0);
      if (((*(byte *)(_UnityEngine_Object_TypeInfo_12d54e0 + 0x133) >> 2 & 1) != 0) &&
         (*(int *)(_UnityEngine_Object_TypeInfo_12d54e0 + 0xe0) == 0)) {
        native_sub_4327ec(_UnityEngine_Object_TypeInfo_12d54e0);
      }
      uVar9 = native_UnityEngine_Object__op_Inequality_8d76fc(uVar14,0,0);
      if ((uVar9 & 1) == 0) goto LAB_00c97a78;
    }
    if (((*(byte *)(_UICamera_TypeInfo_12d6410 + 0x133) >> 2 & 1) != 0) &&
       (*(int *)(_UICamera_TypeInfo_12d6410 + 0xe0) == 0)) {
      native_sub_4327ec();
    }
    lVar10 = *(long *)(*(long *)(_UICamera_TypeInfo_12d6410 + 0xb8) + 400);
    if (lVar10 == 0) goto LAB_00c97ea8;
    plVar11 = (long *)(lVar10 + 0x48);
    *plVar11 = lVar16;
    native_sub_4326e0(plVar11,lVar16);
  }
LAB_00c97a78:
  if (((*(byte *)(_UICamera_TypeInfo_12d6410 + 0x133) >> 2 & 1) != 0) &&
     (*(int *)(_UICamera_TypeInfo_12d6410 + 0xe0) == 0)) {
    native_sub_4327ec();
  }
  uVar14 = *(undefined8 *)(*(long *)(_UICamera_TypeInfo_12d6410 + 0xb8) + 0x1e8);
  if (((*(byte *)(_UnityEngine_Object_TypeInfo_12d54e0 + 0x133) >> 2 & 1) != 0) &&
     (*(int *)(_UnityEngine_Object_TypeInfo_12d54e0 + 0xe0) == 0)) {
    native_sub_4327ec(_UnityEngine_Object_TypeInfo_12d54e0);
  }
  uVar8 = native_UnityEngine_Object__op_Implicit_8e1b98(uVar14,0);
  if ((uVar18 & uVar8) == 1) {
    if (((*(byte *)(_UICamera_TypeInfo_12d6410 + 0x133) >> 2 & 1) != 0) &&
       (*(int *)(_UICamera_TypeInfo_12d6410 + 0xe0) == 0)) {
      native_sub_4327ec();
    }
    uVar14 = *(undefined8 *)(*(long *)(_UICamera_TypeInfo_12d6410 + 0xb8) + 0x1e8);
    if (((*(byte *)(_UnityEngine_Object_TypeInfo_12d54e0 + 0x133) >> 2 & 1) != 0) &&
       (*(int *)(_UnityEngine_Object_TypeInfo_12d54e0 + 0xe0) == 0)) {
      native_sub_4327ec(_UnityEngine_Object_TypeInfo_12d54e0);
    }
    uVar9 = native_UnityEngine_Object__op_Inequality_8d76fc(uVar14,0,0);
    if ((uVar9 & 1) == 0) {
      if (((*(ushort *)(_UICamera_TypeInfo_12d6410 + 0x132) >> 10 & 1) != 0) &&
         (*(int *)(_UICamera_TypeInfo_12d6410 + 0xe0) == 0)) {
        native_sub_4327ec(_UICamera_TypeInfo_12d6410);
      }
      if ((**(long **)(_UICamera_TypeInfo_12d6410 + 0xb8) == 0) ||
         (lVar16 = *(long *)(**(long **)(_UICamera_TypeInfo_12d6410 + 0xb8) + 0x10), lVar16 == 0))
      goto LAB_00c97ea8;
      if (*(int *)(lVar16 + 0x18) == 0) {
        uVar14 = native_sub_43283c();
                    /* WARNING: Subroutine does not return */
        native_sub_4327dc(uVar14,0);
      }
      lVar16 = *(long *)(lVar16 + 0x20);
    }
    else {
      if (((*(ushort *)(_UICamera_TypeInfo_12d6410 + 0x132) >> 10 & 1) != 0) &&
         (*(int *)(_UICamera_TypeInfo_12d6410 + 0xe0) == 0)) {
        native_sub_4327ec(_UICamera_TypeInfo_12d6410);
      }
      lVar16 = *(long *)(*(long *)(_UICamera_TypeInfo_12d6410 + 0xb8) + 0x1e8);
      if (lVar16 == 0) goto LAB_00c97ea8;
      native_UnityEngine_GameObject__get_layer_8de608(lVar16,0);
      lVar16 = native_UICamera__FindCameraForLayer_c96d2c();
    }
    if (((*(byte *)(_UnityEngine_Object_TypeInfo_12d54e0 + 0x133) >> 2 & 1) != 0) &&
       (*(int *)(_UnityEngine_Object_TypeInfo_12d54e0 + 0xe0) == 0)) {
      native_sub_4327ec();
    }
    uVar9 = native_UnityEngine_Object__op_Inequality_8d76fc(lVar16,0,0);
    if ((uVar9 & 1) != 0) {
      if (((*(byte *)(_UICamera_TypeInfo_12d6410 + 0x133) >> 2 & 1) != 0) &&
         (*(int *)(_UICamera_TypeInfo_12d6410 + 0xe0) == 0)) {
        native_sub_4327ec();
      }
      plVar11 = (long *)(*(long *)(_UICamera_TypeInfo_12d6410 + 0xb8) + 0xb8);
      *plVar11 = lVar16;
      native_sub_4326e0(plVar11,lVar16);
      if (lVar16 == 0) goto LAB_00c97ea8;
      uVar14 = native_UICamera__get_cachedCamera_c95254(lVar16);
      puVar12 = (undefined8 *)(*(long *)(_UICamera_TypeInfo_12d6410 + 0xb8) + 0xc0);
      *puVar12 = uVar14;
      native_sub_4326e0(puVar12,uVar14);
    }
  }
  if (((*(byte *)(_UICamera_TypeInfo_12d6410 + 0x133) >> 2 & 1) != 0) &&
     (*(int *)(_UICamera_TypeInfo_12d6410 + 0xe0) == 0)) {
    native_sub_4327ec();
  }
  uVar14 = *(undefined8 *)(*(long *)(_UICamera_TypeInfo_12d6410 + 0xb8) + 0x1e8);
  if (((*(byte *)(_UnityEngine_Object_TypeInfo_12d54e0 + 0x133) >> 2 & 1) != 0) &&
     (*(int *)(_UnityEngine_Object_TypeInfo_12d54e0 + 0xe0) == 0)) {
    native_sub_4327ec(_UnityEngine_Object_TypeInfo_12d54e0);
  }
  uVar9 = native_UnityEngine_Object__op_Implicit_8e1b98(uVar14,0);
  if ((uVar9 & 1) != 0) {
    if (((*(byte *)(_UICamera_TypeInfo_12d6410 + 0x133) >> 2 & 1) != 0) &&
       (*(int *)(_UICamera_TypeInfo_12d6410 + 0xe0) == 0)) {
      native_sub_4327ec();
    }
    lVar16 = *(long *)(*(long *)(_UICamera_TypeInfo_12d6410 + 0xb8) + 0x1e8);
    if (lVar16 == 0) goto LAB_00c97ea8;
    uVar9 = native_UnityEngine_GameObject__get_activeInHierarchy_8de728(lVar16,0);
    if ((uVar9 & 1) == 0) {
      bVar5 = 0;
    }
    else {
      if (((*(byte *)(_UICamera_TypeInfo_12d6410 + 0x133) >> 2 & 1) != 0) &&
         (*(int *)(_UICamera_TypeInfo_12d6410 + 0xe0) == 0)) {
        native_sub_4327ec();
      }
      lVar16 = *(long *)(*(long *)(_UICamera_TypeInfo_12d6410 + 0xb8) + 0x1e8);
      if (lVar16 == 0) goto LAB_00c97ea8;
      uVar14 = native_UnityEngine_GameObject__GetComponent_BE2_BlockSectionHeader_Custom__4a2214
                         (lVar16,_Method_UnityEngine_GameObject_GetComponent_UIInput____12e4ab0);
      if (((*(byte *)(_UnityEngine_Object_TypeInfo_12d54e0 + 0x133) >> 2 & 1) != 0) &&
         (*(int *)(_UnityEngine_Object_TypeInfo_12d54e0 + 0xe0) == 0)) {
        native_sub_4327ec(_UnityEngine_Object_TypeInfo_12d54e0);
      }
      bVar5 = native_UnityEngine_Object__op_Inequality_8d76fc(uVar14,0,0);
      bVar5 = bVar5 & 1;
    }
    if (((*(byte *)(_UICamera_TypeInfo_12d6410 + 0x133) >> 2 & 1) != 0) &&
       (*(int *)(_UICamera_TypeInfo_12d6410 + 0xe0) == 0)) {
      native_sub_4327ec();
    }
    lVar16 = _UICamera_TypeInfo_12d6410;
    *(byte *)(*(long *)(_UICamera_TypeInfo_12d6410 + 0xb8) + 0xe8) = bVar5;
    lVar13 = *(long *)(lVar16 + 0xb8);
    lVar10 = *(long *)(lVar13 + 0x120);
    if (lVar10 != 0) {
      if (((*(byte *)(lVar16 + 0x133) >> 2 & 1) != 0) && (*(int *)(lVar16 + 0xe0) == 0)) {
        native_sub_4327ec();
        lVar13 = *(long *)(_UICamera_TypeInfo_12d6410 + 0xb8);
        lVar10 = *(long *)(lVar13 + 0x120);
        if (lVar10 == 0) goto LAB_00c97ea8;
      }
      native_UICamera_BoolDelegate__Invoke_550030(lVar10,*(undefined8 *)(lVar13 + 0x1e8),1,0);
      lVar16 = _UICamera_TypeInfo_12d6410;
    }
    if (((*(byte *)(lVar16 + 0x133) >> 2 & 1) != 0) && (*(int *)(lVar16 + 0xe0) == 0)) {
      native_sub_4327ec();
      lVar16 = _UICamera_TypeInfo_12d6410;
    }
    uVar17 = *(undefined8 *)(*(long *)(lVar16 + 0xb8) + 0x1e8);
    auStack_48[0] = 1;
    uVar14 = native_sub_4327fc(_bool_TypeInfo_12d3bd0,auStack_48);
    native_UICamera__Notify_c96a08(uVar17,_StringLiteral_OnSelect_12f02c0,uVar14);
  }
  if (uVar18 != 0) {
    if (((*(byte *)(_UICamera_TypeInfo_12d6410 + 0x133) >> 2 & 1) != 0) &&
       (*(int *)(_UICamera_TypeInfo_12d6410 + 0xe0) == 0)) {
      native_sub_4327ec();
    }
    plVar11 = (long *)(*(long *)(_UICamera_TypeInfo_12d6410 + 0xb8) + 0xb8);
    *plVar11 = lVar15;
    native_sub_4326e0(plVar11,lVar15);
    if (((*(byte *)(_UnityEngine_Object_TypeInfo_12d54e0 + 0x133) >> 2 & 1) != 0) &&
       (*(int *)(_UnityEngine_Object_TypeInfo_12d54e0 + 0xe0) == 0)) {
      native_sub_4327ec();
    }
    uVar9 = native_UnityEngine_Object__op_Inequality_8d76fc(lVar15,0,0);
    uVar14 = 0;
    if ((uVar9 & 1) != 0) {
      if (lVar15 == 0) {
LAB_00c97ea8:
                    /* WARNING: Subroutine does not return */
        native_sub_432810();
      }
      uVar14 = native_UICamera__get_cachedCamera_c95254(lVar15);
    }
    if (((*(byte *)(_UICamera_TypeInfo_12d6410 + 0x133) >> 2 & 1) != 0) &&
       (*(int *)(_UICamera_TypeInfo_12d6410 + 0xe0) == 0)) {
      native_sub_4327ec();
    }
    puVar12 = (undefined8 *)(*(long *)(_UICamera_TypeInfo_12d6410 + 0xb8) + 0xc0);
    *puVar12 = uVar14;
    native_sub_4326e0(puVar12,uVar14);
    puVar12 = (undefined8 *)(*(long *)(_UICamera_TypeInfo_12d6410 + 0xb8) + 0xe0);
    *puVar12 = 0;
    native_sub_4326e0(puVar12,0);
    *(undefined4 *)(*(long *)(_UICamera_TypeInfo_12d6410 + 0xb8) + 0xd4) = 0xffffff9c;
  }
  return;
}



/* UIKeyNavigation$$OnClick @ 0xae72dc
 * void UIKeyNavigation__OnClick (UIKeyNavigation_o* __this, const MethodInfo* method); */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* UIKeyNavigation$$OnClick
   void UIKeyNavigation__OnClick (UIKeyNavigation_o* __this, const MethodInfo* method); */

void native_UIKeyNavigation__OnClick_ae72dc(long param_1)

{
  bool bVar1;
  int iVar2;
  ulong uVar3;
  long *plVar4;
  undefined8 *puVar5;
  long lVar6;
  long lVar7;
  undefined8 uVar8;
  long lVar9;
  undefined8 uVar10;
  undefined8 uVar11;
  undefined1 auStack_4c [4];
  undefined1 auStack_48 [4];
  undefined1 auStack_44 [4];
  
  if ((bRam0000000001341ff8 & 1) == 0) {
    native_sub_43273c(&NGUITools_TypeInfo_12d53c8);
    native_sub_43273c(&UICamera_TypeInfo_12d6410);
    bRam0000000001341ff8 = 1;
  }
  uVar10 = *(undefined8 *)(param_1 + 0x40);
  if (((*(byte *)(_NGUITools_TypeInfo_12d53c8 + 0x133) >> 2 & 1) != 0) &&
     (*(int *)(_NGUITools_TypeInfo_12d53c8 + 0xe0) == 0)) {
    native_sub_4327ec();
  }
  uVar3 = native_NGUITools__GetActive_72d0d4(uVar10,0);
  if ((uVar3 & 1) == 0) {
    return;
  }
  uVar10 = *(undefined8 *)(param_1 + 0x40);
  if (((*(byte *)(_UICamera_TypeInfo_12d6410 + 0x133) >> 2 & 1) != 0) &&
     (*(int *)(_UICamera_TypeInfo_12d6410 + 0xe0) == 0)) {
    native_sub_4327ec();
  }
  if ((bRam00000000013428c4 & 1) == 0) {
    native_sub_43273c(&bool_TypeInfo_12d3bd0,0);
    native_sub_43273c(&Method_UnityEngine_GameObject_GetComponent_UIKeyNavigation____12e4ab8);
    native_sub_43273c(&UnityEngine_Object_TypeInfo_12d54e0);
    native_sub_43273c(&UICamera_TypeInfo_12d6410);
    native_sub_43273c(&StringLiteral_OnHover_12f0238);
    native_sub_43273c(&StringLiteral_OnSelect_12f02c0);
    bRam00000000013428c4 = 1;
  }
  if (((*(byte *)(_UICamera_TypeInfo_12d6410 + 0x133) >> 2 & 1) != 0) &&
     (*(int *)(_UICamera_TypeInfo_12d6410 + 0xe0) == 0)) {
    native_sub_4327ec();
  }
  uVar8 = *(undefined8 *)(*(long *)(_UICamera_TypeInfo_12d6410 + 0xb8) + 0x1e0);
  if (((*(byte *)(_UnityEngine_Object_TypeInfo_12d54e0 + 0x133) >> 2 & 1) != 0) &&
     (*(int *)(_UnityEngine_Object_TypeInfo_12d54e0 + 0xe0) == 0)) {
    native_sub_4327ec(_UnityEngine_Object_TypeInfo_12d54e0);
  }
  uVar3 = native_UnityEngine_Object__op_Equality_8e9a3c(uVar8,uVar10,0);
  if ((uVar3 & 1) == 0) {
    if (((*(byte *)(_UICamera_TypeInfo_12d6410 + 0x133) >> 2 & 1) != 0) &&
       (*(int *)(_UICamera_TypeInfo_12d6410 + 0xe0) == 0)) {
      native_sub_4327ec();
    }
    plVar4 = (long *)(_UICamera_TypeInfo_12d6410 + 0xb8);
    lVar6 = *plVar4;
    lVar9 = *(long *)(lVar6 + 0xb8);
    if (*(long *)(lVar6 + 0xe0) == 0) {
      if (((*(byte *)(_UICamera_TypeInfo_12d6410 + 0x133) >> 2 & 1) != 0) &&
         (*(int *)(_UICamera_TypeInfo_12d6410 + 0xe0) == 0)) {
        native_sub_4327ec();
        plVar4 = (long *)(_UICamera_TypeInfo_12d6410 + 0xb8);
        lVar6 = *plVar4;
      }
      *(undefined4 *)(lVar6 + 0xd4) = 0xffffff9c;
      lVar6 = *plVar4;
      *(undefined8 *)(lVar6 + 0xe0) = *(undefined8 *)(lVar6 + 400);
      native_sub_4326e0(lVar6 + 0xe0);
      bVar1 = true;
    }
    else {
      bVar1 = false;
    }
    if (((*(byte *)(_UICamera_TypeInfo_12d6410 + 0x133) >> 2 & 1) != 0) &&
       (*(int *)(_UICamera_TypeInfo_12d6410 + 0xe0) == 0)) {
      native_sub_4327ec();
    }
    native_UICamera__ShowTooltip_c953cc(0);
    uVar8 = *(undefined8 *)(*(long *)(_UICamera_TypeInfo_12d6410 + 0xb8) + 0x1e8);
    if (((*(byte *)(_UnityEngine_Object_TypeInfo_12d54e0 + 0x133) >> 2 & 1) != 0) &&
       (*(int *)(_UnityEngine_Object_TypeInfo_12d54e0 + 0xe0) == 0)) {
      native_sub_4327ec();
    }
    uVar3 = native_UnityEngine_Object__op_Implicit_8e1b98(uVar8,0);
    if ((uVar3 & 1) != 0) {
      if (((*(byte *)(_UICamera_TypeInfo_12d6410 + 0x133) >> 2 & 1) != 0) &&
         (*(int *)(_UICamera_TypeInfo_12d6410 + 0xe0) == 0)) {
        native_sub_4327ec();
      }
      iVar2 = native_UICamera__get_currentScheme_c92518();
      if (iVar2 == 2) {
        if (((*(byte *)(_UICamera_TypeInfo_12d6410 + 0x133) >> 2 & 1) != 0) &&
           (*(int *)(_UICamera_TypeInfo_12d6410 + 0xe0) == 0)) {
          native_sub_4327ec();
        }
        uVar11 = *(undefined8 *)(*(long *)(_UICamera_TypeInfo_12d6410 + 0xb8) + 0x1e8);
        auStack_44[0] = 0;
        uVar8 = native_sub_4327fc(_bool_TypeInfo_12d3bd0,auStack_44);
        native_UICamera__Notify_c96a08(uVar11,_StringLiteral_OnSelect_12f02c0,uVar8);
        lVar7 = *(long *)(_UICamera_TypeInfo_12d6410 + 0xb8);
        lVar6 = *(long *)(lVar7 + 0x120);
        if (lVar6 != 0) {
          if (((*(byte *)(_UICamera_TypeInfo_12d6410 + 0x133) >> 2 & 1) != 0) &&
             (*(int *)(_UICamera_TypeInfo_12d6410 + 0xe0) == 0)) {
            native_sub_4327ec();
            lVar7 = *(long *)(_UICamera_TypeInfo_12d6410 + 0xb8);
            lVar6 = *(long *)(lVar7 + 0x120);
            if (lVar6 == 0) goto LAB_00c969f8;
          }
          native_UICamera_BoolDelegate__Invoke_550030(lVar6,*(undefined8 *)(lVar7 + 0x1e8),0,0);
        }
        if (((*(byte *)(_UICamera_TypeInfo_12d6410 + 0x133) >> 2 & 1) != 0) &&
           (*(int *)(_UICamera_TypeInfo_12d6410 + 0xe0) == 0)) {
          native_sub_4327ec();
        }
        lVar6 = *(long *)(_UICamera_TypeInfo_12d6410 + 0xb8);
        *(undefined8 *)(lVar6 + 0x1e8) = 0;
        native_sub_4326e0(lVar6 + 0x1e8,0);
      }
    }
    if (((*(byte *)(_UICamera_TypeInfo_12d6410 + 0x133) >> 2 & 1) != 0) &&
       (*(int *)(_UICamera_TypeInfo_12d6410 + 0xe0) == 0)) {
      native_sub_4327ec();
    }
    uVar8 = *(undefined8 *)(*(long *)(_UICamera_TypeInfo_12d6410 + 0xb8) + 0x1e0);
    if (((*(byte *)(_UnityEngine_Object_TypeInfo_12d54e0 + 0x133) >> 2 & 1) != 0) &&
       (*(int *)(_UnityEngine_Object_TypeInfo_12d54e0 + 0xe0) == 0)) {
      native_sub_4327ec(_UnityEngine_Object_TypeInfo_12d54e0);
    }
    uVar3 = native_UnityEngine_Object__op_Implicit_8e1b98(uVar8,0);
    if ((uVar3 & 1) != 0) {
      if (((*(byte *)(_UICamera_TypeInfo_12d6410 + 0x133) >> 2 & 1) != 0) &&
         (*(int *)(_UICamera_TypeInfo_12d6410 + 0xe0) == 0)) {
        native_sub_4327ec();
      }
      uVar11 = *(undefined8 *)(*(long *)(_UICamera_TypeInfo_12d6410 + 0xb8) + 0x1e0);
      auStack_48[0] = 0;
      uVar8 = native_sub_4327fc(_bool_TypeInfo_12d3bd0,auStack_48);
      native_UICamera__Notify_c96a08(uVar11,_StringLiteral_OnHover_12f0238,uVar8);
      lVar7 = *(long *)(_UICamera_TypeInfo_12d6410 + 0xb8);
      lVar6 = *(long *)(lVar7 + 0x110);
      if (lVar6 != 0) {
        if (((*(byte *)(_UICamera_TypeInfo_12d6410 + 0x133) >> 2 & 1) != 0) &&
           (*(int *)(_UICamera_TypeInfo_12d6410 + 0xe0) == 0)) {
          native_sub_4327ec(_UICamera_TypeInfo_12d6410);
          lVar7 = *(long *)(_UICamera_TypeInfo_12d6410 + 0xb8);
          lVar6 = *(long *)(lVar7 + 0x110);
          if (lVar6 == 0) goto LAB_00c969f8;
        }
        native_UICamera_BoolDelegate__Invoke_550030(lVar6,*(undefined8 *)(lVar7 + 0x1e0),0,0);
      }
    }
    if (((*(byte *)(_UICamera_TypeInfo_12d6410 + 0x133) >> 2 & 1) != 0) &&
       (*(int *)(_UICamera_TypeInfo_12d6410 + 0xe0) == 0)) {
      native_sub_4327ec();
    }
    lVar6 = *(long *)(_UICamera_TypeInfo_12d6410 + 0xb8);
    *(undefined8 *)(lVar6 + 0x1e0) = uVar10;
    native_sub_4326e0(lVar6 + 0x1e0,uVar10);
    lVar6 = _UICamera_TypeInfo_12d6410;
    lVar7 = *(long *)(*(long *)(_UICamera_TypeInfo_12d6410 + 0xb8) + 0xe0);
    if (lVar7 == 0) {
LAB_00c969f8:
                    /* WARNING: Subroutine does not return */
      native_sub_432810();
    }
    *(undefined4 *)(lVar7 + 0x70) = 0;
    uVar10 = *(undefined8 *)(*(long *)(lVar6 + 0xb8) + 0x1e0);
    if (((*(byte *)(_UnityEngine_Object_TypeInfo_12d54e0 + 0x133) >> 2 & 1) != 0) &&
       (*(int *)(_UnityEngine_Object_TypeInfo_12d54e0 + 0xe0) == 0)) {
      native_sub_4327ec();
    }
    uVar3 = native_UnityEngine_Object__op_Implicit_8e1b98(uVar10,0);
    if ((uVar3 & 1) != 0) {
      if (((*(byte *)(_UICamera_TypeInfo_12d6410 + 0x133) >> 2 & 1) != 0) &&
         (*(int *)(_UICamera_TypeInfo_12d6410 + 0xe0) == 0)) {
        native_sub_4327ec();
      }
      lVar6 = *(long *)(*(long *)(_UICamera_TypeInfo_12d6410 + 0xb8) + 400);
      if (lVar6 == 0) goto LAB_00c969f8;
      uVar10 = *(undefined8 *)(*(long *)(_UICamera_TypeInfo_12d6410 + 0xb8) + 0x1e0);
      uVar8 = *(undefined8 *)(lVar6 + 0x48);
      if (((*(byte *)(_UnityEngine_Object_TypeInfo_12d54e0 + 0x133) >> 2 & 1) != 0) &&
         (*(int *)(_UnityEngine_Object_TypeInfo_12d54e0 + 0xe0) == 0)) {
        native_sub_4327ec();
      }
      uVar3 = native_UnityEngine_Object__op_Inequality_8d76fc(uVar10,uVar8,0);
      if ((uVar3 & 1) != 0) {
        if (((*(byte *)(_UICamera_TypeInfo_12d6410 + 0x133) >> 2 & 1) != 0) &&
           (*(int *)(_UICamera_TypeInfo_12d6410 + 0xe0) == 0)) {
          native_sub_4327ec();
        }
        lVar6 = *(long *)(*(long *)(_UICamera_TypeInfo_12d6410 + 0xb8) + 0x1e0);
        if (lVar6 == 0) goto LAB_00c969f8;
        uVar10 = native_UnityEngine_GameObject__GetComponent_BE2_BlockSectionHeader_Custom__4a2214
                           (lVar6,
                            _Method_UnityEngine_GameObject_GetComponent_UIKeyNavigation____12e4ab8);
        if (((*(byte *)(_UnityEngine_Object_TypeInfo_12d54e0 + 0x133) >> 2 & 1) != 0) &&
           (*(int *)(_UnityEngine_Object_TypeInfo_12d54e0 + 0xe0) == 0)) {
          native_sub_4327ec(_UnityEngine_Object_TypeInfo_12d54e0);
        }
        uVar3 = native_UnityEngine_Object__op_Inequality_8d76fc(uVar10,0,0);
        if ((uVar3 & 1) != 0) {
          if (((*(byte *)(_UICamera_TypeInfo_12d6410 + 0x133) >> 2 & 1) != 0) &&
             (*(int *)(_UICamera_TypeInfo_12d6410 + 0xe0) == 0)) {
            native_sub_4327ec();
          }
          lVar6 = *(long *)(*(long *)(_UICamera_TypeInfo_12d6410 + 0xb8) + 400);
          if (lVar6 == 0) goto LAB_00c969f8;
          *(undefined8 *)(lVar6 + 0x48) =
               *(undefined8 *)(*(long *)(_UICamera_TypeInfo_12d6410 + 0xb8) + 0x1e0);
          native_sub_4326e0();
        }
      }
      if (bVar1) {
        if (((*(byte *)(_UICamera_TypeInfo_12d6410 + 0x133) >> 2 & 1) != 0) &&
           (*(int *)(_UICamera_TypeInfo_12d6410 + 0xe0) == 0)) {
          native_sub_4327ec();
        }
        uVar10 = *(undefined8 *)(*(long *)(_UICamera_TypeInfo_12d6410 + 0xb8) + 0x1e0);
        if (((*(byte *)(_UnityEngine_Object_TypeInfo_12d54e0 + 0x133) >> 2 & 1) != 0) &&
           (*(int *)(_UnityEngine_Object_TypeInfo_12d54e0 + 0xe0) == 0)) {
          native_sub_4327ec(_UnityEngine_Object_TypeInfo_12d54e0);
        }
        uVar3 = native_UnityEngine_Object__op_Inequality_8d76fc(uVar10,0,0);
        if ((uVar3 & 1) == 0) {
          if (((*(ushort *)(_UICamera_TypeInfo_12d6410 + 0x132) >> 10 & 1) != 0) &&
             (*(int *)(_UICamera_TypeInfo_12d6410 + 0xe0) == 0)) {
            native_sub_4327ec(_UICamera_TypeInfo_12d6410);
          }
          if ((**(long **)(_UICamera_TypeInfo_12d6410 + 0xb8) == 0) ||
             (lVar6 = *(long *)(**(long **)(_UICamera_TypeInfo_12d6410 + 0xb8) + 0x10), lVar6 == 0))
          goto LAB_00c969f8;
          if (*(int *)(lVar6 + 0x18) == 0) {
            uVar10 = native_sub_43283c();
                    /* WARNING: Subroutine does not return */
            native_sub_4327dc(uVar10,0);
          }
          lVar6 = *(long *)(lVar6 + 0x20);
        }
        else {
          if (((*(ushort *)(_UICamera_TypeInfo_12d6410 + 0x132) >> 10 & 1) != 0) &&
             (*(int *)(_UICamera_TypeInfo_12d6410 + 0xe0) == 0)) {
            native_sub_4327ec(_UICamera_TypeInfo_12d6410);
          }
          lVar6 = *(long *)(*(long *)(_UICamera_TypeInfo_12d6410 + 0xb8) + 0x1e0);
          if (lVar6 == 0) goto LAB_00c969f8;
          native_UnityEngine_GameObject__get_layer_8de608(lVar6,0);
          lVar6 = native_UICamera__FindCameraForLayer_c96d2c();
        }
        if (((*(byte *)(_UnityEngine_Object_TypeInfo_12d54e0 + 0x133) >> 2 & 1) != 0) &&
           (*(int *)(_UnityEngine_Object_TypeInfo_12d54e0 + 0xe0) == 0)) {
          native_sub_4327ec();
        }
        uVar3 = native_UnityEngine_Object__op_Inequality_8d76fc(lVar6,0,0);
        if ((uVar3 & 1) != 0) {
          if (((*(byte *)(_UICamera_TypeInfo_12d6410 + 0x133) >> 2 & 1) != 0) &&
             (*(int *)(_UICamera_TypeInfo_12d6410 + 0xe0) == 0)) {
            native_sub_4327ec();
          }
          plVar4 = (long *)(*(long *)(_UICamera_TypeInfo_12d6410 + 0xb8) + 0xb8);
          *plVar4 = lVar6;
          native_sub_4326e0(plVar4,lVar6);
          if (lVar6 == 0) goto LAB_00c969f8;
          uVar10 = native_UICamera__get_cachedCamera_c95254(lVar6);
          puVar5 = (undefined8 *)(*(long *)(_UICamera_TypeInfo_12d6410 + 0xb8) + 0xc0);
          *puVar5 = uVar10;
          native_sub_4326e0(puVar5,uVar10);
        }
      }
      if (((*(byte *)(_UICamera_TypeInfo_12d6410 + 0x133) >> 2 & 1) != 0) &&
         (*(int *)(_UICamera_TypeInfo_12d6410 + 0xe0) == 0)) {
        native_sub_4327ec();
      }
      lVar7 = *(long *)(_UICamera_TypeInfo_12d6410 + 0xb8);
      lVar6 = *(long *)(lVar7 + 0x110);
      if (lVar6 != 0) {
        if (((*(byte *)(_UICamera_TypeInfo_12d6410 + 0x133) >> 2 & 1) != 0) &&
           (*(int *)(_UICamera_TypeInfo_12d6410 + 0xe0) == 0)) {
          native_sub_4327ec();
          lVar7 = *(long *)(_UICamera_TypeInfo_12d6410 + 0xb8);
          lVar6 = *(long *)(lVar7 + 0x110);
          if (lVar6 == 0) goto LAB_00c969f8;
        }
        native_UICamera_BoolDelegate__Invoke_550030(lVar6,*(undefined8 *)(lVar7 + 0x1e0),1,0);
      }
      if (((*(byte *)(_UICamera_TypeInfo_12d6410 + 0x133) >> 2 & 1) != 0) &&
         (*(int *)(_UICamera_TypeInfo_12d6410 + 0xe0) == 0)) {
        native_sub_4327ec();
      }
      uVar8 = *(undefined8 *)(*(long *)(_UICamera_TypeInfo_12d6410 + 0xb8) + 0x1e0);
      auStack_4c[0] = 1;
      uVar10 = native_sub_4327fc(_bool_TypeInfo_12d3bd0,auStack_4c);
      native_UICamera__Notify_c96a08(uVar8,_StringLiteral_OnHover_12f0238,uVar10);
    }
    if (bVar1) {
      if (((*(byte *)(_UICamera_TypeInfo_12d6410 + 0x133) >> 2 & 1) != 0) &&
         (*(int *)(_UICamera_TypeInfo_12d6410 + 0xe0) == 0)) {
        native_sub_4327ec();
      }
      plVar4 = (long *)(*(long *)(_UICamera_TypeInfo_12d6410 + 0xb8) + 0xb8);
      *plVar4 = lVar9;
      native_sub_4326e0(plVar4,lVar9);
      if (((*(byte *)(_UnityEngine_Object_TypeInfo_12d54e0 + 0x133) >> 2 & 1) != 0) &&
         (*(int *)(_UnityEngine_Object_TypeInfo_12d54e0 + 0xe0) == 0)) {
        native_sub_4327ec();
      }
      uVar3 = native_UnityEngine_Object__op_Inequality_8d76fc(lVar9,0,0);
      uVar10 = 0;
      if ((uVar3 & 1) != 0) {
        if (lVar9 == 0) goto LAB_00c969f8;
        uVar10 = native_UICamera__get_cachedCamera_c95254(lVar9);
      }
      if (((*(byte *)(_UICamera_TypeInfo_12d6410 + 0x133) >> 2 & 1) != 0) &&
         (*(int *)(_UICamera_TypeInfo_12d6410 + 0xe0) == 0)) {
        native_sub_4327ec();
      }
      puVar5 = (undefined8 *)(*(long *)(_UICamera_TypeInfo_12d6410 + 0xb8) + 0xc0);
      *puVar5 = uVar10;
      native_sub_4326e0(puVar5,uVar10);
      puVar5 = (undefined8 *)(*(long *)(_UICamera_TypeInfo_12d6410 + 0xb8) + 0xe0);
      *puVar5 = 0;
      native_sub_4326e0(puVar5,0);
      *(undefined4 *)(*(long *)(_UICamera_TypeInfo_12d6410 + 0xb8) + 0xd4) = 0xffffff9c;
    }
  }
  return;
}



/* UIKeyNavigation$$.ctor @ 0xae7390
 * void UIKeyNavigation___ctor (UIKeyNavigation_o* __this, const MethodInfo* method); */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* UIKeyNavigation$$.ctor
   void UIKeyNavigation___ctor (UIKeyNavigation_o* __this, const MethodInfo* method); */

undefined1  [16] native_UIKeyNavigation___ctor_ae7390(ulong param_1)

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



/* UIKeyNavigation$$.cctor @ 0xae7398
 * void UIKeyNavigation___cctor (const MethodInfo* method); */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* UIKeyNavigation$$.cctor
   void UIKeyNavigation___cctor (const MethodInfo* method); */

void native_UIKeyNavigation___cctor_ae7398(void)

{
  undefined8 uVar1;
  undefined8 *puVar2;
  
  if ((bRam0000000001341ff9 & 1) == 0) {
    native_sub_43273c(&Method_BetterList_UIKeyNavigation___ctor___12d89d0);
    native_sub_43273c(&BetterList_UIKeyNavigation__TypeInfo_12d2138);
    native_sub_43273c(&UIKeyNavigation_TypeInfo_12d6460);
    bRam0000000001341ff9 = 1;
  }
  uVar1 = native_sub_432808(_BetterList_UIKeyNavigation__TypeInfo_12d2138);
  native_BetterList_object____ctor_ba2d1c(uVar1,_Method_BetterList_UIKeyNavigation___ctor___12d89d0)
  ;
  puVar2 = *(undefined8 **)(_UIKeyNavigation_TypeInfo_12d6460 + 0xb8);
  *puVar2 = uVar1;
  native_sub_4326e0(puVar2,uVar1);
  *(undefined4 *)(*(long *)(_UIKeyNavigation_TypeInfo_12d6460 + 0xb8) + 8) = 0;
  return;
}


