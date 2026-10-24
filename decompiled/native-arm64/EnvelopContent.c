/* ARM64 IL2CPP native pseudocode from Ghidra.
 * Recovered implementation, not original C# source.
 * Function boundaries follow the IL2CPP method address table. */


/* EnvelopContent$$Start @ 0xded124
 * void EnvelopContent__Start (EnvelopContent_o* __this, const MethodInfo* method); */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* EnvelopContent$$Start
   void EnvelopContent__Start (EnvelopContent_o* __this, const MethodInfo* method); */

void native_EnvelopContent__Start_ded124(long param_1)

{
  char cVar1;
  uint uVar2;
  uint uVar3;
  undefined8 uVar4;
  ulong uVar5;
  long lVar6;
  long *plVar7;
  undefined8 *puVar8;
  undefined8 uVar9;
  float fVar10;
  int iVar11;
  float fVar12;
  int iVar13;
  float fVar14;
  float fVar15;
  undefined8 uStack_a8;
  undefined8 uStack_a0;
  undefined8 uStack_98;
  undefined8 uStack_90;
  undefined8 uStack_88;
  undefined8 uStack_80;
  
  *(undefined1 *)(param_1 + 0x39) = 1;
  if ((bRam0000000001346ee6 & 1) == 0) {
    native_sub_43273c(&Method_UnityEngine_Component_GetComponent_UIWidget____12e2c30);
    native_sub_43273c(&UnityEngine_Debug_TypeInfo_12d4338);
    native_sub_43273c(&NGUIMath_TypeInfo_12d53b8);
    native_sub_43273c(&NGUITools_TypeInfo_12d53c8);
    native_sub_43273c(&UnityEngine_Object_TypeInfo_12d54e0);
    native_sub_43273c(&StringLiteral_UpdateAnchors_12f2d00);
    native_sub_43273c(&
                      StringLiteral_Target_Root_object_should_not_be_a_parent_of_Envelop_Content__Make_it_a_sibling_instead__12f1558
                     );
    native_sub_43273c(&
                      StringLiteral_Target_Root_object_cannot_be_the_same_object_that_has_Envelop_Content__Make_it_a_sibling_instead__12f1550
                     );
    bRam0000000001346ee6 = 1;
  }
  uStack_90 = 0;
  uStack_88 = 0;
  uStack_80 = 0;
  uVar9 = *(undefined8 *)(param_1 + 0x18);
  uVar4 = native_UnityEngine_Component__get_transform_8da62c(param_1,0);
  if (((*(byte *)(_UnityEngine_Object_TypeInfo_12d54e0 + 0x133) >> 2 & 1) != 0) &&
     (*(int *)(_UnityEngine_Object_TypeInfo_12d54e0 + 0xe0) == 0)) {
    native_sub_4327ec(_UnityEngine_Object_TypeInfo_12d54e0);
  }
  uVar5 = native_UnityEngine_Object__op_Equality_8e9a3c(uVar9,uVar4,0);
  if ((uVar5 & 1) == 0) {
    uVar9 = *(undefined8 *)(param_1 + 0x18);
    uVar4 = native_UnityEngine_Component__get_transform_8da62c(param_1,0);
    if (((*(byte *)(_NGUITools_TypeInfo_12d53c8 + 0x133) >> 2 & 1) != 0) &&
       (*(int *)(_NGUITools_TypeInfo_12d53c8 + 0xe0) == 0)) {
      native_sub_4327ec(_NGUITools_TypeInfo_12d53c8);
    }
    uVar5 = native_NGUITools__IsChild_730ee8(uVar9,uVar4,0);
    if ((uVar5 & 1) == 0) {
      lVar6 = native_UnityEngine_Component__get_transform_8da62c(param_1,0);
      if (lVar6 != 0) {
        uVar4 = native_UnityEngine_Transform__get_parent_765eb0(lVar6,0);
        uVar9 = *(undefined8 *)(param_1 + 0x18);
        cVar1 = *(char *)(param_1 + 0x38);
        if (((*(byte *)(_NGUIMath_TypeInfo_12d53b8 + 0x133) >> 2 & 1) != 0) &&
           (*(int *)(_NGUIMath_TypeInfo_12d53b8 + 0xe0) == 0)) {
          native_sub_4327ec(_NGUIMath_TypeInfo_12d53b8);
        }
        native_NGUIMath__CalculateRelativeWidgetBounds_805b00
                  (&uStack_a8,uVar4,uVar9,cVar1 == '\0',1,0);
        uStack_80 = uStack_98;
        uStack_88 = uStack_a0;
        uStack_90 = uStack_a8;
        fVar10 = (float)native_UnityEngine_Bounds__get_min_8d7f18(&uStack_90,0);
        fVar14 = (float)*(int *)(param_1 + 0x20);
        fVar10 = fVar10 + fVar14;
        native_UnityEngine_Bounds__get_min_8d7f18(&uStack_90,0);
        iVar11 = *(int *)(param_1 + 0x28);
        fVar12 = (float)native_UnityEngine_Bounds__get_max_8d7f88(&uStack_90,0);
        fVar15 = (float)*(int *)(param_1 + 0x24);
        fVar12 = fVar12 + fVar15;
        native_UnityEngine_Bounds__get_max_8d7f88(&uStack_90,0);
        iVar13 = *(int *)(param_1 + 0x2c);
        if (0 < *(int *)(param_1 + 0x30)) {
          fVar12 = (float)native_UnityEngine_Mathf__Max_8d9f90
                                    (fVar12,fVar10 + (float)*(int *)(param_1 + 0x30),0);
        }
        uVar5 = (ulong)(uint)(fVar14 + (float)iVar11);
        fVar15 = fVar15 + (float)iVar13;
        if (0 < *(int *)(param_1 + 0x34)) {
          uVar5 = native_UnityEngine_Mathf__Min_8e4bb8
                            (uVar5,fVar15 - (float)*(int *)(param_1 + 0x34),0);
        }
        uVar2 = native_UnityEngine_Mathf__RoundToInt_8e50f0(fVar12 - fVar10,0);
        uVar3 = native_UnityEngine_Mathf__RoundToInt_8e50f0(fVar15 - (float)uVar5,0);
        plVar7 = (long *)native_UnityEngine_Component__GetComponent_ActiveAnimation__49daec
                                   (param_1,
                                    _Method_UnityEngine_Component_GetComponent_UIWidget____12e2c30);
        if (plVar7 != (long *)0x0) {
          (**(code **)(*plVar7 + 0x268))
                    (fVar10,uVar5,(float)(int)((uVar2 & 1) + uVar2),
                     (float)(int)((uVar3 & 1) + uVar3),plVar7,*(undefined8 *)(*plVar7 + 0x270));
          native_UnityEngine_Component__BroadcastMessage_8dac98
                    (param_1,_StringLiteral_UpdateAnchors_12f2d00,1,0);
          uVar4 = native_UnityEngine_Component__get_gameObject_8da66c(param_1,0);
          if (((*(byte *)(_NGUITools_TypeInfo_12d53c8 + 0x133) >> 2 & 1) != 0) &&
             (*(int *)(_NGUITools_TypeInfo_12d53c8 + 0xe0) == 0)) {
            native_sub_4327ec(_NGUITools_TypeInfo_12d53c8);
          }
          native_NGUITools__UpdateWidgetCollider_72e07c(uVar4,0);
          return;
        }
      }
                    /* WARNING: Subroutine does not return */
      native_sub_432810();
    }
    if (((*(byte *)(_UnityEngine_Debug_TypeInfo_12d4338 + 0x133) >> 2 & 1) != 0) &&
       (*(int *)(_UnityEngine_Debug_TypeInfo_12d4338 + 0xe0) == 0)) {
      native_sub_4327ec();
    }
    puVar8 = (undefined8 *)
             &
             StringLiteral_Target_Root_object_should_not_be_a_parent_of_Envelop_Content__Make_it_a_sibling_instead__12f1558
    ;
  }
  else {
    if (((*(byte *)(_UnityEngine_Debug_TypeInfo_12d4338 + 0x133) >> 2 & 1) != 0) &&
       (*(int *)(_UnityEngine_Debug_TypeInfo_12d4338 + 0xe0) == 0)) {
      native_sub_4327ec();
    }
    puVar8 = (undefined8 *)
             &
             StringLiteral_Target_Root_object_cannot_be_the_same_object_that_has_Envelop_Content__Make_it_a_sibling_instead__12f1550
    ;
  }
  native_UnityEngine_Debug__LogError_8dc6f8(*puVar8,param_1,0);
  return;
}



/* EnvelopContent$$OnEnable @ 0xded4e0
 * void EnvelopContent__OnEnable (EnvelopContent_o* __this, const MethodInfo* method); */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* EnvelopContent$$OnEnable
   void EnvelopContent__OnEnable (EnvelopContent_o* __this, const MethodInfo* method); */

void native_EnvelopContent__OnEnable_ded4e0(long param_1)

{
  char cVar1;
  uint uVar2;
  uint uVar3;
  undefined8 uVar4;
  ulong uVar5;
  long lVar6;
  long *plVar7;
  undefined8 *puVar8;
  undefined8 uVar9;
  float fVar10;
  int iVar11;
  float fVar12;
  int iVar13;
  float fVar14;
  float fVar15;
  undefined8 uStack_a8;
  undefined8 uStack_a0;
  undefined8 uStack_98;
  undefined8 uStack_90;
  undefined8 uStack_88;
  undefined8 uStack_80;
  
  if (*(char *)(param_1 + 0x39) == '\0') {
    return;
  }
  if ((bRam0000000001346ee6 & 1) == 0) {
    native_sub_43273c(&Method_UnityEngine_Component_GetComponent_UIWidget____12e2c30);
    native_sub_43273c(&UnityEngine_Debug_TypeInfo_12d4338);
    native_sub_43273c(&NGUIMath_TypeInfo_12d53b8);
    native_sub_43273c(&NGUITools_TypeInfo_12d53c8);
    native_sub_43273c(&UnityEngine_Object_TypeInfo_12d54e0);
    native_sub_43273c(&StringLiteral_UpdateAnchors_12f2d00);
    native_sub_43273c(&
                      StringLiteral_Target_Root_object_should_not_be_a_parent_of_Envelop_Content__Make_it_a_sibling_instead__12f1558
                     );
    native_sub_43273c(&
                      StringLiteral_Target_Root_object_cannot_be_the_same_object_that_has_Envelop_Content__Make_it_a_sibling_instead__12f1550
                     );
    bRam0000000001346ee6 = 1;
  }
  uStack_90 = 0;
  uStack_88 = 0;
  uStack_80 = 0;
  uVar9 = *(undefined8 *)(param_1 + 0x18);
  uVar4 = native_UnityEngine_Component__get_transform_8da62c(param_1,0);
  if (((*(byte *)(_UnityEngine_Object_TypeInfo_12d54e0 + 0x133) >> 2 & 1) != 0) &&
     (*(int *)(_UnityEngine_Object_TypeInfo_12d54e0 + 0xe0) == 0)) {
    native_sub_4327ec(_UnityEngine_Object_TypeInfo_12d54e0);
  }
  uVar5 = native_UnityEngine_Object__op_Equality_8e9a3c(uVar9,uVar4,0);
  if ((uVar5 & 1) == 0) {
    uVar9 = *(undefined8 *)(param_1 + 0x18);
    uVar4 = native_UnityEngine_Component__get_transform_8da62c(param_1,0);
    if (((*(byte *)(_NGUITools_TypeInfo_12d53c8 + 0x133) >> 2 & 1) != 0) &&
       (*(int *)(_NGUITools_TypeInfo_12d53c8 + 0xe0) == 0)) {
      native_sub_4327ec(_NGUITools_TypeInfo_12d53c8);
    }
    uVar5 = native_NGUITools__IsChild_730ee8(uVar9,uVar4,0);
    if ((uVar5 & 1) == 0) {
      lVar6 = native_UnityEngine_Component__get_transform_8da62c(param_1,0);
      if (lVar6 != 0) {
        uVar4 = native_UnityEngine_Transform__get_parent_765eb0(lVar6,0);
        uVar9 = *(undefined8 *)(param_1 + 0x18);
        cVar1 = *(char *)(param_1 + 0x38);
        if (((*(byte *)(_NGUIMath_TypeInfo_12d53b8 + 0x133) >> 2 & 1) != 0) &&
           (*(int *)(_NGUIMath_TypeInfo_12d53b8 + 0xe0) == 0)) {
          native_sub_4327ec(_NGUIMath_TypeInfo_12d53b8);
        }
        native_NGUIMath__CalculateRelativeWidgetBounds_805b00
                  (&uStack_a8,uVar4,uVar9,cVar1 == '\0',1,0);
        uStack_80 = uStack_98;
        uStack_88 = uStack_a0;
        uStack_90 = uStack_a8;
        fVar10 = (float)native_UnityEngine_Bounds__get_min_8d7f18(&uStack_90,0);
        fVar14 = (float)*(int *)(param_1 + 0x20);
        fVar10 = fVar10 + fVar14;
        native_UnityEngine_Bounds__get_min_8d7f18(&uStack_90,0);
        iVar11 = *(int *)(param_1 + 0x28);
        fVar12 = (float)native_UnityEngine_Bounds__get_max_8d7f88(&uStack_90,0);
        fVar15 = (float)*(int *)(param_1 + 0x24);
        fVar12 = fVar12 + fVar15;
        native_UnityEngine_Bounds__get_max_8d7f88(&uStack_90,0);
        iVar13 = *(int *)(param_1 + 0x2c);
        if (0 < *(int *)(param_1 + 0x30)) {
          fVar12 = (float)native_UnityEngine_Mathf__Max_8d9f90
                                    (fVar12,fVar10 + (float)*(int *)(param_1 + 0x30),0);
        }
        uVar5 = (ulong)(uint)(fVar14 + (float)iVar11);
        fVar15 = fVar15 + (float)iVar13;
        if (0 < *(int *)(param_1 + 0x34)) {
          uVar5 = native_UnityEngine_Mathf__Min_8e4bb8
                            (uVar5,fVar15 - (float)*(int *)(param_1 + 0x34),0);
        }
        uVar2 = native_UnityEngine_Mathf__RoundToInt_8e50f0(fVar12 - fVar10,0);
        uVar3 = native_UnityEngine_Mathf__RoundToInt_8e50f0(fVar15 - (float)uVar5,0);
        plVar7 = (long *)native_UnityEngine_Component__GetComponent_ActiveAnimation__49daec
                                   (param_1,
                                    _Method_UnityEngine_Component_GetComponent_UIWidget____12e2c30);
        if (plVar7 != (long *)0x0) {
          (**(code **)(*plVar7 + 0x268))
                    (fVar10,uVar5,(float)(int)((uVar2 & 1) + uVar2),
                     (float)(int)((uVar3 & 1) + uVar3),plVar7,*(undefined8 *)(*plVar7 + 0x270));
          native_UnityEngine_Component__BroadcastMessage_8dac98
                    (param_1,_StringLiteral_UpdateAnchors_12f2d00,1,0);
          uVar4 = native_UnityEngine_Component__get_gameObject_8da66c(param_1,0);
          if (((*(byte *)(_NGUITools_TypeInfo_12d53c8 + 0x133) >> 2 & 1) != 0) &&
             (*(int *)(_NGUITools_TypeInfo_12d53c8 + 0xe0) == 0)) {
            native_sub_4327ec(_NGUITools_TypeInfo_12d53c8);
          }
          native_NGUITools__UpdateWidgetCollider_72e07c(uVar4,0);
          return;
        }
      }
                    /* WARNING: Subroutine does not return */
      native_sub_432810();
    }
    if (((*(byte *)(_UnityEngine_Debug_TypeInfo_12d4338 + 0x133) >> 2 & 1) != 0) &&
       (*(int *)(_UnityEngine_Debug_TypeInfo_12d4338 + 0xe0) == 0)) {
      native_sub_4327ec();
    }
    puVar8 = (undefined8 *)
             &
             StringLiteral_Target_Root_object_should_not_be_a_parent_of_Envelop_Content__Make_it_a_sibling_instead__12f1558
    ;
  }
  else {
    if (((*(byte *)(_UnityEngine_Debug_TypeInfo_12d4338 + 0x133) >> 2 & 1) != 0) &&
       (*(int *)(_UnityEngine_Debug_TypeInfo_12d4338 + 0xe0) == 0)) {
      native_sub_4327ec();
    }
    puVar8 = (undefined8 *)
             &
             StringLiteral_Target_Root_object_cannot_be_the_same_object_that_has_Envelop_Content__Make_it_a_sibling_instead__12f1550
    ;
  }
  native_UnityEngine_Debug__LogError_8dc6f8(*puVar8,param_1,0);
  return;
}



/* EnvelopContent$$Execute @ 0xded130
 * void EnvelopContent__Execute (EnvelopContent_o* __this, const MethodInfo* method); */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* EnvelopContent$$Execute
   void EnvelopContent__Execute (EnvelopContent_o* __this, const MethodInfo* method); */

void native_EnvelopContent__Execute_ded130(long param_1)

{
  char cVar1;
  uint uVar2;
  uint uVar3;
  undefined8 uVar4;
  ulong uVar5;
  long lVar6;
  long *plVar7;
  undefined8 *puVar8;
  undefined8 uVar9;
  float fVar10;
  int iVar11;
  float fVar12;
  int iVar13;
  float fVar14;
  float fVar15;
  undefined8 uStack_a8;
  undefined8 uStack_a0;
  undefined8 uStack_98;
  undefined8 uStack_90;
  undefined8 uStack_88;
  undefined8 uStack_80;
  
  if ((bRam0000000001346ee6 & 1) == 0) {
    native_sub_43273c(&Method_UnityEngine_Component_GetComponent_UIWidget____12e2c30);
    native_sub_43273c(&UnityEngine_Debug_TypeInfo_12d4338);
    native_sub_43273c(&NGUIMath_TypeInfo_12d53b8);
    native_sub_43273c(&NGUITools_TypeInfo_12d53c8);
    native_sub_43273c(&UnityEngine_Object_TypeInfo_12d54e0);
    native_sub_43273c(&StringLiteral_UpdateAnchors_12f2d00);
    native_sub_43273c(&
                      StringLiteral_Target_Root_object_should_not_be_a_parent_of_Envelop_Content__Make_it_a_sibling_instead__12f1558
                     );
    native_sub_43273c(&
                      StringLiteral_Target_Root_object_cannot_be_the_same_object_that_has_Envelop_Content__Make_it_a_sibling_instead__12f1550
                     );
    bRam0000000001346ee6 = 1;
  }
  uStack_90 = 0;
  uStack_88 = 0;
  uStack_80 = 0;
  uVar9 = *(undefined8 *)(param_1 + 0x18);
  uVar4 = native_UnityEngine_Component__get_transform_8da62c(param_1,0);
  if (((*(byte *)(_UnityEngine_Object_TypeInfo_12d54e0 + 0x133) >> 2 & 1) != 0) &&
     (*(int *)(_UnityEngine_Object_TypeInfo_12d54e0 + 0xe0) == 0)) {
    native_sub_4327ec(_UnityEngine_Object_TypeInfo_12d54e0);
  }
  uVar5 = native_UnityEngine_Object__op_Equality_8e9a3c(uVar9,uVar4,0);
  if ((uVar5 & 1) == 0) {
    uVar9 = *(undefined8 *)(param_1 + 0x18);
    uVar4 = native_UnityEngine_Component__get_transform_8da62c(param_1,0);
    if (((*(byte *)(_NGUITools_TypeInfo_12d53c8 + 0x133) >> 2 & 1) != 0) &&
       (*(int *)(_NGUITools_TypeInfo_12d53c8 + 0xe0) == 0)) {
      native_sub_4327ec(_NGUITools_TypeInfo_12d53c8);
    }
    uVar5 = native_NGUITools__IsChild_730ee8(uVar9,uVar4,0);
    if ((uVar5 & 1) == 0) {
      lVar6 = native_UnityEngine_Component__get_transform_8da62c(param_1,0);
      if (lVar6 != 0) {
        uVar4 = native_UnityEngine_Transform__get_parent_765eb0(lVar6,0);
        uVar9 = *(undefined8 *)(param_1 + 0x18);
        cVar1 = *(char *)(param_1 + 0x38);
        if (((*(byte *)(_NGUIMath_TypeInfo_12d53b8 + 0x133) >> 2 & 1) != 0) &&
           (*(int *)(_NGUIMath_TypeInfo_12d53b8 + 0xe0) == 0)) {
          native_sub_4327ec(_NGUIMath_TypeInfo_12d53b8);
        }
        native_NGUIMath__CalculateRelativeWidgetBounds_805b00
                  (&uStack_a8,uVar4,uVar9,cVar1 == '\0',1,0);
        uStack_80 = uStack_98;
        uStack_88 = uStack_a0;
        uStack_90 = uStack_a8;
        fVar10 = (float)native_UnityEngine_Bounds__get_min_8d7f18(&uStack_90,0);
        fVar14 = (float)*(int *)(param_1 + 0x20);
        fVar10 = fVar10 + fVar14;
        native_UnityEngine_Bounds__get_min_8d7f18(&uStack_90,0);
        iVar11 = *(int *)(param_1 + 0x28);
        fVar12 = (float)native_UnityEngine_Bounds__get_max_8d7f88(&uStack_90,0);
        fVar15 = (float)*(int *)(param_1 + 0x24);
        fVar12 = fVar12 + fVar15;
        native_UnityEngine_Bounds__get_max_8d7f88(&uStack_90,0);
        iVar13 = *(int *)(param_1 + 0x2c);
        if (0 < *(int *)(param_1 + 0x30)) {
          fVar12 = (float)native_UnityEngine_Mathf__Max_8d9f90
                                    (fVar12,fVar10 + (float)*(int *)(param_1 + 0x30),0);
        }
        uVar5 = (ulong)(uint)(fVar14 + (float)iVar11);
        fVar15 = fVar15 + (float)iVar13;
        if (0 < *(int *)(param_1 + 0x34)) {
          uVar5 = native_UnityEngine_Mathf__Min_8e4bb8
                            (uVar5,fVar15 - (float)*(int *)(param_1 + 0x34),0);
        }
        uVar2 = native_UnityEngine_Mathf__RoundToInt_8e50f0(fVar12 - fVar10,0);
        uVar3 = native_UnityEngine_Mathf__RoundToInt_8e50f0(fVar15 - (float)uVar5,0);
        plVar7 = (long *)native_UnityEngine_Component__GetComponent_ActiveAnimation__49daec
                                   (param_1,
                                    _Method_UnityEngine_Component_GetComponent_UIWidget____12e2c30);
        if (plVar7 != (long *)0x0) {
          (**(code **)(*plVar7 + 0x268))
                    (fVar10,uVar5,(float)(int)((uVar2 & 1) + uVar2),
                     (float)(int)((uVar3 & 1) + uVar3),plVar7,*(undefined8 *)(*plVar7 + 0x270));
          native_UnityEngine_Component__BroadcastMessage_8dac98
                    (param_1,_StringLiteral_UpdateAnchors_12f2d00,1,0);
          uVar4 = native_UnityEngine_Component__get_gameObject_8da66c(param_1,0);
          if (((*(byte *)(_NGUITools_TypeInfo_12d53c8 + 0x133) >> 2 & 1) != 0) &&
             (*(int *)(_NGUITools_TypeInfo_12d53c8 + 0xe0) == 0)) {
            native_sub_4327ec(_NGUITools_TypeInfo_12d53c8);
          }
          native_NGUITools__UpdateWidgetCollider_72e07c(uVar4,0);
          return;
        }
      }
                    /* WARNING: Subroutine does not return */
      native_sub_432810();
    }
    if (((*(byte *)(_UnityEngine_Debug_TypeInfo_12d4338 + 0x133) >> 2 & 1) != 0) &&
       (*(int *)(_UnityEngine_Debug_TypeInfo_12d4338 + 0xe0) == 0)) {
      native_sub_4327ec();
    }
    puVar8 = (undefined8 *)
             &
             StringLiteral_Target_Root_object_should_not_be_a_parent_of_Envelop_Content__Make_it_a_sibling_instead__12f1558
    ;
  }
  else {
    if (((*(byte *)(_UnityEngine_Debug_TypeInfo_12d4338 + 0x133) >> 2 & 1) != 0) &&
       (*(int *)(_UnityEngine_Debug_TypeInfo_12d4338 + 0xe0) == 0)) {
      native_sub_4327ec();
    }
    puVar8 = (undefined8 *)
             &
             StringLiteral_Target_Root_object_cannot_be_the_same_object_that_has_Envelop_Content__Make_it_a_sibling_instead__12f1550
    ;
  }
  native_UnityEngine_Debug__LogError_8dc6f8(*puVar8,param_1,0);
  return;
}



/* EnvelopContent$$.ctor @ 0xded4f0
 * void EnvelopContent___ctor (EnvelopContent_o* __this, const MethodInfo* method); */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* EnvelopContent$$.ctor
   void EnvelopContent___ctor (EnvelopContent_o* __this, const MethodInfo* method); */

undefined1  [16] native_EnvelopContent___ctor_ded4f0(ulong param_1)

{
  undefined1 auVar1 [16];
  
  *(undefined1 *)(param_1 + 0x38) = 1;
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


