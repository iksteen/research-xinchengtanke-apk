/* ARM64 IL2CPP native pseudocode from Ghidra.
 * Recovered implementation, not original C# source.
 * Function boundaries follow the IL2CPP method address table. */


/* UIShowControlScheme$$OnEnable @ 0xc34aa0
 * void UIShowControlScheme__OnEnable (UIShowControlScheme_o* __this, const MethodInfo* method); */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* UIShowControlScheme$$OnEnable
   void UIShowControlScheme__OnEnable (UIShowControlScheme_o* __this, const MethodInfo* method); */

void native_UIShowControlScheme__OnEnable_c34aa0(long param_1)

{
  undefined1 *puVar1;
  int iVar2;
  undefined8 uVar3;
  long *plVar4;
  long lVar5;
  ulong uVar6;
  long lVar7;
  byte bVar8;
  long *plVar9;
  long unaff_x19;
  undefined8 unaff_x20;
  undefined8 uVar10;
  undefined8 unaff_x21;
  undefined1 *unaff_x29;
  undefined1 *puVar11;
  code *unaff_x30;
  
  puVar1 = &stack0xffffffffffffffc0;
  puVar11 = &stack0xfffffffffffffff0;
  if ((bRam0000000001342746 & 1) == 0) {
    native_sub_43273c(&UICamera_OnSchemeChange_TypeInfo_12d7a28);
    native_sub_43273c(&UICamera_TypeInfo_12d6410);
    native_sub_43273c(&Method_UIShowControlScheme_OnScheme___12e78a0);
    bRam0000000001342746 = 1;
  }
  if (((*(byte *)(_UICamera_TypeInfo_12d6410 + 0x133) >> 2 & 1) != 0) &&
     (*(int *)(_UICamera_TypeInfo_12d6410 + 0xe0) == 0)) {
    native_sub_4327ec();
  }
  uVar10 = *(undefined8 *)(*(long *)(_UICamera_TypeInfo_12d6410 + 0xb8) + 200);
  uVar3 = native_sub_432808(_UICamera_OnSchemeChange_TypeInfo_12d7a28);
  native_UICamera_OnSchemeChange___ctor_552eb8
            (uVar3,param_1,_Method_UIShowControlScheme_OnScheme___12e78a0,0);
  plVar4 = (long *)native_System_Delegate__Combine_a6cf00(uVar10,uVar3,0);
  if ((plVar4 == (long *)0x0) || (*plVar4 == _UICamera_OnSchemeChange_TypeInfo_12d7a28)) {
    plVar9 = (long *)(*(long *)(_UICamera_TypeInfo_12d6410 + 0xb8) + 200);
    *plVar9 = (long)plVar4;
    native_sub_4326e0(plVar9,plVar4);
    puVar1 = (undefined1 *)register0x00000008;
    lVar5 = param_1;
    param_1 = unaff_x19;
    uVar10 = unaff_x20;
    uVar3 = unaff_x21;
    puVar11 = unaff_x29;
  }
  else {
    unaff_x30 = native_UIShowControlScheme__OnScheme_c34ba8;
    lVar5 = native_sub_432b04(plVar4);
  }
  *(undefined8 *)(puVar1 + -0x20) = uVar10;
  *(long *)(puVar1 + -0x18) = param_1;
  *(undefined1 **)(puVar1 + -0x10) = puVar11;
  *(code **)(puVar1 + -8) = unaff_x30;
  if ((bRam0000000001342748 & 1) == 0) {
    native_sub_43273c(&UnityEngine_Object_TypeInfo_12d54e0);
    native_sub_43273c(&UICamera_TypeInfo_12d6410);
    bRam0000000001342748 = 1;
  }
  uVar10 = *(undefined8 *)(lVar5 + 0x18);
  if (((*(byte *)(_UnityEngine_Object_TypeInfo_12d54e0 + 0x133) >> 2 & 1) != 0) &&
     (*(int *)(_UnityEngine_Object_TypeInfo_12d54e0 + 0xe0) == 0)) {
    native_sub_4327ec();
  }
  uVar6 = native_UnityEngine_Object__op_Inequality_8d76fc(uVar10,0,0);
  if ((uVar6 & 1) == 0) {
    return;
  }
  if (((*(byte *)(_UICamera_TypeInfo_12d6410 + 0x133) >> 2 & 1) != 0) &&
     (*(int *)(_UICamera_TypeInfo_12d6410 + 0xe0) == 0)) {
    native_sub_4327ec();
  }
  iVar2 = native_UICamera__get_currentScheme_c92518(0);
  if (iVar2 == 2) {
    lVar7 = *(long *)(lVar5 + 0x18);
    if (lVar7 == 0) goto LAB_00c34ca0;
    bVar8 = *(byte *)(lVar5 + 0x22);
  }
  else if (iVar2 == 1) {
    lVar7 = *(long *)(lVar5 + 0x18);
    if (lVar7 == 0) goto LAB_00c34ca0;
    bVar8 = *(byte *)(lVar5 + 0x21);
  }
  else {
    if (iVar2 != 0) {
      return;
    }
    lVar7 = *(long *)(lVar5 + 0x18);
    if (lVar7 == 0) {
LAB_00c34ca0:
                    /* WARNING: Subroutine does not return */
      native_sub_432810();
    }
    bVar8 = *(byte *)(lVar5 + 0x20);
  }
  *(undefined8 *)(puVar1 + -0x30) = uVar3;
  *(undefined8 *)(puVar1 + -0x20) = *(undefined8 *)(puVar1 + -0x20);
  *(undefined8 *)(puVar1 + -0x18) = *(undefined8 *)(puVar1 + -0x18);
  *(undefined8 *)(puVar1 + -0x10) = *(undefined8 *)(puVar1 + -0x10);
  *(undefined8 *)(puVar1 + -8) = *(undefined8 *)(puVar1 + -8);
  if (pcRam0000000001340bf8 == (code *)0x0) {
    pcRam0000000001340bf8 = (code *)native_sub_4326f0(&UNK_00e2da67);
  }
                    /* WARNING: Could not recover jumptable at 0x008de6e4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*pcRam0000000001340bf8)(lVar7,bVar8 & 1);
  return;
}



/* UIShowControlScheme$$OnDisable @ 0xc34ca4
 * void UIShowControlScheme__OnDisable (UIShowControlScheme_o* __this, const MethodInfo* method); */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* UIShowControlScheme$$OnDisable
   void UIShowControlScheme__OnDisable (UIShowControlScheme_o* __this, const MethodInfo* method); */

undefined1  [16] native_UIShowControlScheme__OnDisable_c34ca4(undefined8 param_1)

{
  ulong *puVar1;
  char cVar2;
  bool bVar3;
  undefined8 uVar4;
  long *plVar5;
  long *plVar6;
  undefined8 uVar7;
  undefined1 auVar8 [16];
  undefined1 auVar9 [16];
  
  if ((bRam0000000001342747 & 1) == 0) {
    native_sub_43273c(&UICamera_OnSchemeChange_TypeInfo_12d7a28);
    native_sub_43273c(&UICamera_TypeInfo_12d6410);
    native_sub_43273c(&Method_UIShowControlScheme_OnScheme___12e78a0);
    bRam0000000001342747 = 1;
  }
  if (((*(byte *)(_UICamera_TypeInfo_12d6410 + 0x133) >> 2 & 1) != 0) &&
     (*(int *)(_UICamera_TypeInfo_12d6410 + 0xe0) == 0)) {
    native_sub_4327ec();
  }
  uVar7 = *(undefined8 *)(*(long *)(_UICamera_TypeInfo_12d6410 + 0xb8) + 200);
  uVar4 = native_sub_432808(_UICamera_OnSchemeChange_TypeInfo_12d7a28);
  native_UICamera_OnSchemeChange___ctor_552eb8
            (uVar4,param_1,_Method_UIShowControlScheme_OnScheme___12e78a0,0);
  plVar5 = (long *)native_System_Delegate__Remove_a6d1c0(uVar7,uVar4,0);
  if ((plVar5 != (long *)0x0) && (*plVar5 != _UICamera_OnSchemeChange_TypeInfo_12d7a28)) {
    auVar9._0_8_ = native_sub_432b04(plVar5);
    *(undefined1 *)(auVar9._0_8_ + 0x22) = 1;
    if ((bRam0000000001340ae0 & 1) == 0) {
      native_sub_43273c(&UnityEngine_Object_TypeInfo_12d54e0,0);
      bRam0000000001340ae0 = 1;
    }
    if (((*(byte *)(_UnityEngine_Object_TypeInfo_12d54e0 + 0x133) >> 2 & 1) != 0) &&
       (*(int *)(_UnityEngine_Object_TypeInfo_12d54e0 + 0xe0) == 0)) {
      native_sub_4327ec();
    }
    auVar9._8_8_ = 0;
    return auVar9;
  }
  plVar6 = (long *)(*(long *)(_UICamera_TypeInfo_12d6410 + 0xb8) + 200);
  *plVar6 = (long)plVar5;
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
  auVar8._8_8_ = plVar5;
  auVar8._0_8_ = plVar6;
  return auVar8;
}



/* UIShowControlScheme$$OnScheme @ 0xc34ba8
 * void UIShowControlScheme__OnScheme (UIShowControlScheme_o* __this, const MethodInfo* method); */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* UIShowControlScheme$$OnScheme
   void UIShowControlScheme__OnScheme (UIShowControlScheme_o* __this, const MethodInfo* method); */

void native_UIShowControlScheme__OnScheme_c34ba8(long param_1)

{
  int iVar1;
  ulong uVar2;
  long lVar3;
  byte bVar4;
  undefined8 uVar5;
  
  if ((bRam0000000001342748 & 1) == 0) {
    native_sub_43273c(&UnityEngine_Object_TypeInfo_12d54e0);
    native_sub_43273c(&UICamera_TypeInfo_12d6410);
    bRam0000000001342748 = 1;
  }
  uVar5 = *(undefined8 *)(param_1 + 0x18);
  if (((*(byte *)(_UnityEngine_Object_TypeInfo_12d54e0 + 0x133) >> 2 & 1) != 0) &&
     (*(int *)(_UnityEngine_Object_TypeInfo_12d54e0 + 0xe0) == 0)) {
    native_sub_4327ec();
  }
  uVar2 = native_UnityEngine_Object__op_Inequality_8d76fc(uVar5,0,0);
  if ((uVar2 & 1) == 0) {
    return;
  }
  if (((*(byte *)(_UICamera_TypeInfo_12d6410 + 0x133) >> 2 & 1) != 0) &&
     (*(int *)(_UICamera_TypeInfo_12d6410 + 0xe0) == 0)) {
    native_sub_4327ec();
  }
  iVar1 = native_UICamera__get_currentScheme_c92518(0);
  if (iVar1 == 2) {
    lVar3 = *(long *)(param_1 + 0x18);
    if (lVar3 == 0) goto LAB_00c34ca0;
    bVar4 = *(byte *)(param_1 + 0x22);
  }
  else if (iVar1 == 1) {
    lVar3 = *(long *)(param_1 + 0x18);
    if (lVar3 == 0) goto LAB_00c34ca0;
    bVar4 = *(byte *)(param_1 + 0x21);
  }
  else {
    if (iVar1 != 0) {
      return;
    }
    lVar3 = *(long *)(param_1 + 0x18);
    if (lVar3 == 0) {
LAB_00c34ca0:
                    /* WARNING: Subroutine does not return */
      native_sub_432810();
    }
    bVar4 = *(byte *)(param_1 + 0x20);
  }
  if (pcRam0000000001340bf8 == (code *)0x0) {
    pcRam0000000001340bf8 = (code *)native_sub_4326f0(&UNK_00e2da67);
  }
                    /* WARNING: Could not recover jumptable at 0x008de6e4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*pcRam0000000001340bf8)(lVar3,bVar4 & 1);
  return;
}



/* UIShowControlScheme$$.ctor @ 0xc34da4
 * void UIShowControlScheme___ctor (UIShowControlScheme_o* __this, const MethodInfo* method); */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* UIShowControlScheme$$.ctor
   void UIShowControlScheme___ctor (UIShowControlScheme_o* __this, const MethodInfo* method); */

undefined1  [16] native_UIShowControlScheme___ctor_c34da4(ulong param_1)

{
  undefined1 auVar1 [16];
  
  *(undefined1 *)(param_1 + 0x22) = 1;
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


