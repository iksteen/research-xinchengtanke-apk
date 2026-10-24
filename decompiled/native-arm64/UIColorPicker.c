/* ARM64 IL2CPP native pseudocode from Ghidra.
 * Recovered implementation, not original C# source.
 * Function boundaries follow the IL2CPP method address table. */


/* UIColorPicker$$Start @ 0x9ddf9c
 * void UIColorPicker__Start (UIColorPicker_o* __this, const MethodInfo* method); */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* UIColorPicker$$Start
   void UIColorPicker__Start (UIColorPicker_o* __this, const MethodInfo* method); */

undefined4
native_UIColorPicker__Start_9ddf9c
          (undefined1 param_1 [16],undefined1 param_2 [16],undefined8 param_3,undefined4 param_4,
          long param_5)

{
  uint uVar1;
  undefined4 uVar2;
  undefined8 uVar3;
  long lVar4;
  long lVar5;
  ulong uVar6;
  ulong uVar7;
  undefined8 uVar8;
  undefined8 uVar9;
  undefined8 *puVar10;
  int iVar11;
  long *plVar12;
  int iVar13;
  int iVar14;
  int iVar15;
  float fVar16;
  float fVar17;
  float fVar18;
  undefined8 uVar19;
  float fVar20;
  float fVar21;
  float fVar22;
  undefined8 uVar23;
  float fVar24;
  float fVar25;
  float fVar26;
  
  if ((bRam00000000013418b7 & 1) == 0) {
    native_sub_43273c(&UnityEngine_Color___TypeInfo_12d30a0);
    native_sub_43273c(&Method_UnityEngine_Component_GetComponent_UITexture____12e2c20);
    native_sub_43273c(&UnityEngine_Texture2D_TypeInfo_12d61f0);
    native_sub_43273c(&UICamera_TypeInfo_12d6410);
    bRam00000000013418b7 = 1;
  }
  uVar3 = native_UnityEngine_Component__get_transform_8da62c(param_5,0);
  *(undefined8 *)(param_5 + 0x38) = uVar3;
  native_sub_4326e0(param_5 + 0x38);
  uVar3 = native_UnityEngine_Component__GetComponent_ActiveAnimation__49daec
                    (param_5,_Method_UnityEngine_Component_GetComponent_UITexture____12e2c20);
  *(undefined8 *)(param_5 + 0x40) = uVar3;
  native_sub_4326e0((long *)(param_5 + 0x40),uVar3);
  lVar4 = native_UnityEngine_Component__get_gameObject_8da66c(param_5,0);
  if (lVar4 != 0) {
    uVar2 = native_UnityEngine_GameObject__get_layer_8de608(lVar4,0);
    if (((*(byte *)(_UICamera_TypeInfo_12d6410 + 0x133) >> 2 & 1) != 0) &&
       (*(int *)(_UICamera_TypeInfo_12d6410 + 0xe0) == 0)) {
      native_sub_4327ec(_UICamera_TypeInfo_12d6410);
    }
    uVar3 = native_UICamera__FindCameraForLayer_c96d2c(uVar2,0);
    *(undefined8 *)(param_5 + 0x50) = uVar3;
    native_sub_4326e0((undefined8 *)(param_5 + 0x50),uVar3);
    lVar4 = *(long *)(param_5 + 0x40);
    if (lVar4 != 0) {
      iVar13 = *(int *)(lVar4 + 0xa4);
      *(int *)(param_5 + 0x60) = iVar13;
      iVar11 = *(int *)(lVar4 + 0xa8);
      *(int *)(param_5 + 100) = iVar11;
      lVar4 = native_sub_432750(_UnityEngine_Color___TypeInfo_12d30a0,iVar11 * iVar13);
      iVar13 = *(int *)(param_5 + 100);
      if (iVar13 < 1) {
        iVar11 = *(int *)(param_5 + 0x60);
      }
      else {
        iVar11 = *(int *)(param_5 + 0x60);
        iVar14 = 0;
        do {
          if (0 < iVar11) {
            iVar15 = 0;
            do {
              fVar16 = ((float)iVar14 + -1.0) / (float)iVar13;
              uVar2 = native_UIColorPicker__Sample_9de24c(((float)iVar15 + -1.0) / (float)iVar11);
              if (lVar4 == 0) goto LAB_009de23c;
              uVar1 = iVar15 + iVar14 * iVar11;
              if (*(uint *)(lVar4 + 0x18) <= uVar1) {
                uVar3 = native_sub_43283c();
                    /* WARNING: Subroutine does not return */
                native_sub_4327dc(uVar3,0);
              }
              lVar5 = lVar4 + (long)(int)uVar1 * 0x10;
              *(undefined4 *)(lVar5 + 0x20) = uVar2;
              *(float *)(lVar5 + 0x24) = fVar16;
              *(int *)(lVar5 + 0x28) = (int)param_3;
              *(undefined4 *)(lVar5 + 0x2c) = param_4;
              iVar11 = *(int *)(param_5 + 0x60);
              iVar15 = iVar15 + 1;
            } while (iVar15 < iVar11);
            iVar13 = *(int *)(param_5 + 100);
          }
          iVar14 = iVar14 + 1;
        } while (iVar14 < iVar13);
      }
      lVar5 = native_sub_432808(_UnityEngine_Texture2D_TypeInfo_12d61f0);
      native_UnityEngine_Texture2D___ctor_76f4a4(lVar5,iVar11,iVar13,3,0,0);
      plVar12 = (long *)(param_5 + 0x48);
      *plVar12 = lVar5;
      native_sub_4326e0(plVar12,lVar5);
      if (*plVar12 != 0) {
        native_UnityEngine_Texture2D__SetPixels_76f698(*plVar12,lVar4,0);
        if (*plVar12 != 0) {
          native_UnityEngine_Texture__set_filterMode_76e84c(*plVar12,2,0);
          if (*plVar12 != 0) {
            native_UnityEngine_Texture__set_wrapMode_76e7fc(*plVar12,1,0);
            if (*plVar12 != 0) {
              native_UnityEngine_Texture2D__Apply_76f804(*plVar12,0);
              plVar12 = *(long **)(param_5 + 0x40);
              if (plVar12 != (long *)0x0) {
                (**(code **)(*plVar12 + 0x338))
                          (plVar12,*(undefined8 *)(param_5 + 0x48),*(undefined8 *)(*plVar12 + 0x340)
                          );
                fVar16 = *(float *)(param_5 + 0x18);
                fVar20 = *(float *)(param_5 + 0x1c);
                fVar21 = *(float *)(param_5 + 0x20);
                uVar7 = (ulong)(uint)fVar21;
                uVar2 = *(undefined4 *)(param_5 + 0x24);
                if ((bRam00000000013418bc & 1) == 0) {
                  native_sub_43273c(&EventDelegate_TypeInfo_12d4590);
                  native_sub_43273c(&NGUIMath_TypeInfo_12d53b8);
                  native_sub_43273c(&UnityEngine_Object_TypeInfo_12d54e0);
                  native_sub_43273c(&UIColorPicker_TypeInfo_12d6420);
                  bRam00000000013418bc = 1;
                }
                uVar3 = *(undefined8 *)(param_5 + 0x40);
                if (((*(byte *)(_UnityEngine_Object_TypeInfo_12d54e0 + 0x133) >> 2 & 1) != 0) &&
                   (*(int *)(_UnityEngine_Object_TypeInfo_12d54e0 + 0xe0) == 0)) {
                  native_sub_4327ec();
                }
                uVar6 = native_UnityEngine_Object__op_Equality_8e9a3c(uVar3,0,0);
                if ((uVar6 & 1) == 0) {
                  iVar13 = *(int *)(param_5 + 100);
                  if (0 < iVar13) {
                    iVar14 = *(int *)(param_5 + 0x60);
                    fVar26 = 3.4028235e+38;
                    iVar11 = 0;
                    do {
                      if (0 < iVar14) {
                        iVar15 = 0;
                        fVar24 = ((float)iVar11 + -1.0) / (float)iVar13;
                        do {
                          fVar22 = (float)uVar7;
                          fVar25 = ((float)iVar15 + -1.0) / (float)iVar14;
                          fVar18 = fVar24;
                          fVar17 = (float)native_UIColorPicker__Sample_9de24c(fVar25);
                          fVar22 = fVar22 - fVar21;
                          uVar7 = (ulong)(uint)fVar22;
                          fVar18 = fVar22 * fVar22 +
                                   (fVar17 - fVar16) * (fVar17 - fVar16) +
                                   (fVar18 - fVar20) * (fVar18 - fVar20);
                          if (fVar18 < fVar26) {
                            *(float *)(param_5 + 0x58) = fVar25;
                            *(float *)(param_5 + 0x5c) = fVar24;
                            fVar26 = fVar18;
                          }
                          iVar14 = *(int *)(param_5 + 0x60);
                          iVar15 = iVar15 + 1;
                        } while (iVar15 < iVar14);
                        iVar13 = *(int *)(param_5 + 100);
                      }
                      iVar11 = iVar11 + 1;
                    } while (iVar11 < iVar13);
                  }
                  uVar3 = *(undefined8 *)(param_5 + 0x28);
                  if (((*(byte *)(_UnityEngine_Object_TypeInfo_12d54e0 + 0x133) >> 2 & 1) != 0) &&
                     (*(int *)(_UnityEngine_Object_TypeInfo_12d54e0 + 0xe0) == 0)) {
                    native_sub_4327ec();
                  }
                  uVar7 = native_UnityEngine_Object__op_Inequality_8d76fc(uVar3,0,0);
                  if ((uVar7 & 1) != 0) {
                    plVar12 = *(long **)(param_5 + 0x40);
                    if ((plVar12 == (long *)0x0) ||
                       (lVar4 = (**(code **)(*plVar12 + 0x1d8))
                                          (plVar12,*(undefined8 *)(*plVar12 + 0x1e0)), lVar4 == 0))
                    goto LAB_009def74;
                    if ((*(uint *)(lVar4 + 0x18) == 0) || (*(uint *)(lVar4 + 0x18) < 3)) {
LAB_009def78:
                      uVar3 = native_sub_43283c();
                    /* WARNING: Subroutine does not return */
                      native_sub_4327dc(uVar3,0);
                    }
                    uVar3 = native_UnityEngine_Mathf__Lerp_8e5224
                                      (*(undefined4 *)(lVar4 + 0x20),*(undefined4 *)(lVar4 + 0x38),
                                       *(undefined4 *)(param_5 + 0x58),0);
                    if ((*(uint *)(lVar4 + 0x18) == 0) || (*(uint *)(lVar4 + 0x18) < 3))
                    goto LAB_009def78;
                    uVar19 = native_UnityEngine_Mathf__Lerp_8e5224
                                       (*(undefined4 *)(lVar4 + 0x24),*(undefined4 *)(lVar4 + 0x3c),
                                        *(undefined4 *)(param_5 + 0x5c),0);
                    if (*(long *)(param_5 + 0x38) == 0) {
LAB_009def74:
                    /* WARNING: Subroutine does not return */
                      native_sub_432810();
                    }
                    uVar23 = 0;
                    uVar3 = native_UnityEngine_Transform__TransformPoint_7728d8
                                      (uVar3,uVar19,0,*(long *)(param_5 + 0x38),0);
                    if (*(long *)(param_5 + 0x28) == 0) goto LAB_009def74;
                    uVar8 = native_UnityEngine_Component__get_transform_8da62c
                                      (*(long *)(param_5 + 0x28),0);
                    if (*(long *)(param_5 + 0x50) == 0) goto LAB_009def74;
                    uVar9 = native_UICamera__get_cachedCamera_c95254(*(long *)(param_5 + 0x50),0);
                    if (((*(byte *)(_NGUIMath_TypeInfo_12d53b8 + 0x133) >> 2 & 1) != 0) &&
                       (*(int *)(_NGUIMath_TypeInfo_12d53b8 + 0xe0) == 0)) {
                      native_sub_4327ec(_NGUIMath_TypeInfo_12d53b8);
                    }
                    native_NGUIMath__OverlayPosition_8084b4(uVar3,uVar19,uVar23,uVar8,uVar9,0);
                  }
                  *(float *)(param_5 + 0x18) = fVar16;
                  *(float *)(param_5 + 0x1c) = fVar20;
                  *(float *)(param_5 + 0x20) = fVar21;
                  *(undefined4 *)(param_5 + 0x24) = uVar2;
                  plVar12 = *(long **)(_UIColorPicker_TypeInfo_12d6420 + 0xb8);
                  *plVar12 = param_5;
                  native_sub_4326e0(plVar12,param_5);
                  uVar3 = *(undefined8 *)(param_5 + 0x30);
                  if (((*(byte *)(_EventDelegate_TypeInfo_12d4590 + 0x133) >> 2 & 1) != 0) &&
                     (*(int *)(_EventDelegate_TypeInfo_12d4590 + 0xe0) == 0)) {
                    native_sub_4327ec();
                  }
                  native_EventDelegate__Execute_deecbc(uVar3,0);
                  puVar10 = *(undefined8 **)(_UIColorPicker_TypeInfo_12d6420 + 0xb8);
                  *puVar10 = 0;
                  native_sub_4326e0(puVar10,0);
                }
                else {
                  *(float *)(param_5 + 0x18) = fVar16;
                  *(float *)(param_5 + 0x1c) = fVar20;
                  *(float *)(param_5 + 0x20) = fVar21;
                  *(undefined4 *)(param_5 + 0x24) = uVar2;
                }
                return *(undefined4 *)(param_5 + 0x58);
              }
            }
          }
        }
      }
    }
  }
LAB_009de23c:
                    /* WARNING: Subroutine does not return */
  native_sub_432810();
}



/* UIColorPicker$$OnDestroy @ 0x9def84
 * void UIColorPicker__OnDestroy (UIColorPicker_o* __this, const MethodInfo* method); */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* UIColorPicker$$OnDestroy
   void UIColorPicker__OnDestroy (UIColorPicker_o* __this, const MethodInfo* method); */

void native_UIColorPicker__OnDestroy_9def84(long param_1)

{
  ulong *puVar1;
  char cVar2;
  bool bVar3;
  undefined8 *puVar4;
  undefined8 uVar5;
  
  if ((bRam00000000013418b8 & 1) == 0) {
    native_sub_43273c(&UnityEngine_Object_TypeInfo_12d54e0);
    bRam00000000013418b8 = 1;
  }
  puVar4 = (undefined8 *)(param_1 + 0x48);
  uVar5 = *puVar4;
  if (((*(byte *)(_UnityEngine_Object_TypeInfo_12d54e0 + 0x133) >> 2 & 1) != 0) &&
     (*(int *)(_UnityEngine_Object_TypeInfo_12d54e0 + 0xe0) == 0)) {
    native_sub_4327ec();
  }
  native_UnityEngine_Object__Destroy_8ea574(uVar5,0);
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



/* UIColorPicker$$OnPress @ 0x9deffc
 * void UIColorPicker__OnPress (UIColorPicker_o* __this, bool pressed, const MethodInfo* method); */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* UIColorPicker$$OnPress
   void UIColorPicker__OnPress (UIColorPicker_o* __this, bool pressed, const MethodInfo* method); */

void native_UIColorPicker__OnPress_9deffc(long param_1,ulong param_2)

{
  ulong *puVar1;
  char cVar2;
  bool bVar3;
  int iVar4;
  ulong uVar5;
  long *plVar6;
  undefined8 uVar7;
  undefined8 uVar8;
  undefined8 *puVar9;
  long lVar10;
  long lVar11;
  undefined8 uVar12;
  float fVar13;
  undefined4 uVar14;
  undefined8 uVar15;
  float fVar16;
  undefined4 uVar17;
  float fVar18;
  undefined4 in_s3;
  
  if ((bRam00000000013418b9 & 1) == 0) {
    native_sub_43273c(&UICamera_TypeInfo_12d6410);
    bRam00000000013418b9 = 1;
  }
  uVar5 = native_UnityEngine_Behaviour__get_enabled_8d7acc(param_1,0);
  if (((uVar5 & 1) != 0) && ((param_2 & 1) != 0)) {
    if (((*(byte *)(_UICamera_TypeInfo_12d6410 + 0x133) >> 2 & 1) != 0) &&
       (*(int *)(_UICamera_TypeInfo_12d6410 + 0xe0) == 0)) {
      native_sub_4327ec();
    }
    iVar4 = native_UICamera__get_currentScheme_c92518(0);
    if (iVar4 != 2) {
      if ((bRam00000000013418ba & 1) == 0) {
        native_sub_43273c(&EventDelegate_TypeInfo_12d4590);
        native_sub_43273c(&NGUIMath_TypeInfo_12d53b8);
        native_sub_43273c(&UnityEngine_Object_TypeInfo_12d54e0);
        native_sub_43273c(&UICamera_TypeInfo_12d6410);
        native_sub_43273c(&UIColorPicker_TypeInfo_12d6420);
        bRam00000000013418ba = 1;
      }
      lVar11 = *(long *)(param_1 + 0x38);
      if (((*(byte *)(_UICamera_TypeInfo_12d6410 + 0x133) >> 2 & 1) != 0) &&
         (*(int *)(_UICamera_TypeInfo_12d6410 + 0xe0) == 0)) {
        native_sub_4327ec();
      }
      if (lVar11 != 0) {
        lVar10 = *(long *)(_UICamera_TypeInfo_12d6410 + 0xb8);
        fVar16 = *(float *)(lVar10 + 0x68);
        fVar18 = *(float *)(lVar10 + 0x6c);
        fVar13 = (float)native_UnityEngine_Transform__InverseTransformPoint_7729a0
                                  (*(undefined4 *)(lVar10 + 100),lVar11,0);
        plVar6 = *(long **)(param_1 + 0x40);
        if (plVar6 != (long *)0x0) {
          lVar11 = (**(code **)(*plVar6 + 0x1d8))(plVar6,*(undefined8 *)(*plVar6 + 0x1e0));
          if (lVar11 != 0) {
            if ((*(uint *)(lVar11 + 0x18) != 0) && (2 < *(uint *)(lVar11 + 0x18))) {
              uVar14 = native_UnityEngine_Mathf__Clamp01_8d9d9c
                                 ((fVar13 - *(float *)(lVar11 + 0x20)) /
                                  (*(float *)(lVar11 + 0x38) - *(float *)(lVar11 + 0x20)),0);
              *(undefined4 *)(param_1 + 0x58) = uVar14;
              if ((*(uint *)(lVar11 + 0x18) != 0) && (2 < *(uint *)(lVar11 + 0x18))) {
                fVar16 = fVar16 - *(float *)(lVar11 + 0x24);
                uVar14 = native_UnityEngine_Mathf__Clamp01_8d9d9c
                                   (fVar16 / (*(float *)(lVar11 + 0x3c) - *(float *)(lVar11 + 0x24))
                                    ,0);
                *(undefined4 *)(param_1 + 0x5c) = uVar14;
                uVar12 = *(undefined8 *)(param_1 + 0x28);
                if (((*(byte *)(_UnityEngine_Object_TypeInfo_12d54e0 + 0x133) >> 2 & 1) != 0) &&
                   (*(int *)(_UnityEngine_Object_TypeInfo_12d54e0 + 0xe0) == 0)) {
                  native_sub_4327ec();
                }
                uVar5 = native_UnityEngine_Object__op_Inequality_8d76fc(uVar12,0,0);
                if ((uVar5 & 1) == 0) {
LAB_009df2ec:
                  uVar17 = *(undefined4 *)(param_1 + 0x5c);
                  uVar14 = native_UIColorPicker__Sample_9de24c(*(undefined4 *)(param_1 + 0x58));
                  *(undefined4 *)(param_1 + 0x18) = uVar14;
                  *(undefined4 *)(param_1 + 0x1c) = uVar17;
                  *(float *)(param_1 + 0x20) = fVar16;
                  *(undefined4 *)(param_1 + 0x24) = in_s3;
                  plVar6 = *(long **)(_UIColorPicker_TypeInfo_12d6420 + 0xb8);
                  *plVar6 = param_1;
                  native_sub_4326e0(plVar6,param_1);
                  uVar12 = *(undefined8 *)(param_1 + 0x30);
                  if (((*(byte *)(_EventDelegate_TypeInfo_12d4590 + 0x133) >> 2 & 1) != 0) &&
                     (*(int *)(_EventDelegate_TypeInfo_12d4590 + 0xe0) == 0)) {
                    native_sub_4327ec();
                  }
                  native_EventDelegate__Execute_deecbc(uVar12,0);
                  puVar9 = *(undefined8 **)(_UIColorPicker_TypeInfo_12d6420 + 0xb8);
                  *puVar9 = 0;
                  if (iRam0000000001345318 != 0) {
                    puVar1 = (ulong *)(((ulong)puVar9 >> 0x12 & 0x7fff) * 8 + 0x138ecd8);
                    do {
                      cVar2 = '\x01';
                      bVar3 = (bool)ExclusiveMonitorPass(puVar1,0x10);
                      if (bVar3) {
                        *puVar1 = *puVar1 | 1L << ((ulong)puVar9 >> 0xc & 0x3f);
                        cVar2 = ExclusiveMonitorsStatus();
                      }
                    } while (cVar2 != '\0');
                  }
                  return;
                }
                if ((*(uint *)(lVar11 + 0x18) != 0) && (2 < *(uint *)(lVar11 + 0x18))) {
                  uVar12 = native_UnityEngine_Mathf__Lerp_8e5224
                                     (*(undefined4 *)(lVar11 + 0x20),*(undefined4 *)(lVar11 + 0x38),
                                      *(undefined4 *)(param_1 + 0x58),0);
                  if ((*(uint *)(lVar11 + 0x18) != 0) && (2 < *(uint *)(lVar11 + 0x18))) {
                    uVar15 = native_UnityEngine_Mathf__Lerp_8e5224
                                       (*(undefined4 *)(lVar11 + 0x24),
                                        *(undefined4 *)(lVar11 + 0x3c),
                                        *(undefined4 *)(param_1 + 0x5c),0);
                    if (*(long *)(param_1 + 0x38) != 0) {
                      fVar16 = fVar18;
                      uVar12 = native_UnityEngine_Transform__TransformPoint_7728d8
                                         (uVar12,uVar15,*(long *)(param_1 + 0x38),0);
                      if (*(long *)(param_1 + 0x28) != 0) {
                        uVar7 = native_UnityEngine_Component__get_transform_8da62c
                                          (*(long *)(param_1 + 0x28),0);
                        if (*(long *)(param_1 + 0x50) != 0) {
                          uVar8 = native_UICamera__get_cachedCamera_c95254
                                            (*(long *)(param_1 + 0x50),0);
                          if (((*(byte *)(_NGUIMath_TypeInfo_12d53b8 + 0x133) >> 2 & 1) != 0) &&
                             (*(int *)(_NGUIMath_TypeInfo_12d53b8 + 0xe0) == 0)) {
                            native_sub_4327ec(_NGUIMath_TypeInfo_12d53b8);
                          }
                          native_NGUIMath__OverlayPosition_8084b4(uVar12,uVar15,uVar7,uVar8,0);
                          goto LAB_009df2ec;
                        }
                      }
                    }
                    goto LAB_009df37c;
                  }
                }
              }
            }
            uVar12 = native_sub_43283c();
                    /* WARNING: Subroutine does not return */
            native_sub_4327dc(uVar12,0);
          }
        }
      }
LAB_009df37c:
                    /* WARNING: Subroutine does not return */
      native_sub_432810();
    }
  }
  return;
}



/* UIColorPicker$$OnDrag @ 0x9df380
 * void UIColorPicker__OnDrag (UIColorPicker_o* __this, UnityEngine_Vector2_o delta, const MethodInfo* method); */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* UIColorPicker$$OnDrag
   void UIColorPicker__OnDrag (UIColorPicker_o* __this, UnityEngine_Vector2_o delta, const
   MethodInfo* method); */

void native_UIColorPicker__OnDrag_9df380(long param_1)

{
  ulong *puVar1;
  char cVar2;
  bool bVar3;
  long *plVar4;
  undefined8 uVar5;
  undefined8 uVar6;
  undefined8 *puVar7;
  ulong uVar8;
  long lVar9;
  long lVar10;
  undefined8 uVar11;
  float fVar12;
  undefined4 uVar13;
  undefined8 uVar14;
  float fVar15;
  undefined4 uVar16;
  float fVar17;
  undefined4 in_s3;
  
  uVar8 = native_UnityEngine_Behaviour__get_enabled_8d7acc(param_1,0);
  if ((uVar8 & 1) == 0) {
    return;
  }
  if ((bRam00000000013418ba & 1) == 0) {
    native_sub_43273c(&EventDelegate_TypeInfo_12d4590);
    native_sub_43273c(&NGUIMath_TypeInfo_12d53b8);
    native_sub_43273c(&UnityEngine_Object_TypeInfo_12d54e0);
    native_sub_43273c(&UICamera_TypeInfo_12d6410);
    native_sub_43273c(&UIColorPicker_TypeInfo_12d6420);
    bRam00000000013418ba = 1;
  }
  lVar10 = *(long *)(param_1 + 0x38);
  if (((*(byte *)(_UICamera_TypeInfo_12d6410 + 0x133) >> 2 & 1) != 0) &&
     (*(int *)(_UICamera_TypeInfo_12d6410 + 0xe0) == 0)) {
    native_sub_4327ec();
  }
  if (lVar10 != 0) {
    lVar9 = *(long *)(_UICamera_TypeInfo_12d6410 + 0xb8);
    fVar15 = *(float *)(lVar9 + 0x68);
    fVar17 = *(float *)(lVar9 + 0x6c);
    fVar12 = (float)native_UnityEngine_Transform__InverseTransformPoint_7729a0
                              (*(undefined4 *)(lVar9 + 100),lVar10,0);
    plVar4 = *(long **)(param_1 + 0x40);
    if (plVar4 != (long *)0x0) {
      lVar10 = (**(code **)(*plVar4 + 0x1d8))(plVar4,*(undefined8 *)(*plVar4 + 0x1e0));
      if (lVar10 != 0) {
        if ((*(uint *)(lVar10 + 0x18) != 0) && (2 < *(uint *)(lVar10 + 0x18))) {
          uVar13 = native_UnityEngine_Mathf__Clamp01_8d9d9c
                             ((fVar12 - *(float *)(lVar10 + 0x20)) /
                              (*(float *)(lVar10 + 0x38) - *(float *)(lVar10 + 0x20)),0);
          *(undefined4 *)(param_1 + 0x58) = uVar13;
          if ((*(uint *)(lVar10 + 0x18) != 0) && (2 < *(uint *)(lVar10 + 0x18))) {
            fVar15 = fVar15 - *(float *)(lVar10 + 0x24);
            uVar13 = native_UnityEngine_Mathf__Clamp01_8d9d9c
                               (fVar15 / (*(float *)(lVar10 + 0x3c) - *(float *)(lVar10 + 0x24)),0);
            *(undefined4 *)(param_1 + 0x5c) = uVar13;
            uVar11 = *(undefined8 *)(param_1 + 0x28);
            if (((*(byte *)(_UnityEngine_Object_TypeInfo_12d54e0 + 0x133) >> 2 & 1) != 0) &&
               (*(int *)(_UnityEngine_Object_TypeInfo_12d54e0 + 0xe0) == 0)) {
              native_sub_4327ec();
            }
            uVar8 = native_UnityEngine_Object__op_Inequality_8d76fc(uVar11,0,0);
            if ((uVar8 & 1) == 0) {
LAB_009df2ec:
              uVar16 = *(undefined4 *)(param_1 + 0x5c);
              uVar13 = native_UIColorPicker__Sample_9de24c(*(undefined4 *)(param_1 + 0x58));
              *(undefined4 *)(param_1 + 0x18) = uVar13;
              *(undefined4 *)(param_1 + 0x1c) = uVar16;
              *(float *)(param_1 + 0x20) = fVar15;
              *(undefined4 *)(param_1 + 0x24) = in_s3;
              plVar4 = *(long **)(_UIColorPicker_TypeInfo_12d6420 + 0xb8);
              *plVar4 = param_1;
              native_sub_4326e0(plVar4,param_1);
              uVar11 = *(undefined8 *)(param_1 + 0x30);
              if (((*(byte *)(_EventDelegate_TypeInfo_12d4590 + 0x133) >> 2 & 1) != 0) &&
                 (*(int *)(_EventDelegate_TypeInfo_12d4590 + 0xe0) == 0)) {
                native_sub_4327ec();
              }
              native_EventDelegate__Execute_deecbc(uVar11,0);
              puVar7 = *(undefined8 **)(_UIColorPicker_TypeInfo_12d6420 + 0xb8);
              *puVar7 = 0;
              if (iRam0000000001345318 != 0) {
                puVar1 = (ulong *)(((ulong)puVar7 >> 0x12 & 0x7fff) * 8 + 0x138ecd8);
                do {
                  cVar2 = '\x01';
                  bVar3 = (bool)ExclusiveMonitorPass(puVar1,0x10);
                  if (bVar3) {
                    *puVar1 = *puVar1 | 1L << ((ulong)puVar7 >> 0xc & 0x3f);
                    cVar2 = ExclusiveMonitorsStatus();
                  }
                } while (cVar2 != '\0');
              }
              return;
            }
            if ((*(uint *)(lVar10 + 0x18) != 0) && (2 < *(uint *)(lVar10 + 0x18))) {
              uVar11 = native_UnityEngine_Mathf__Lerp_8e5224
                                 (*(undefined4 *)(lVar10 + 0x20),*(undefined4 *)(lVar10 + 0x38),
                                  *(undefined4 *)(param_1 + 0x58),0);
              if ((*(uint *)(lVar10 + 0x18) != 0) && (2 < *(uint *)(lVar10 + 0x18))) {
                uVar14 = native_UnityEngine_Mathf__Lerp_8e5224
                                   (*(undefined4 *)(lVar10 + 0x24),*(undefined4 *)(lVar10 + 0x3c),
                                    *(undefined4 *)(param_1 + 0x5c),0);
                if (*(long *)(param_1 + 0x38) != 0) {
                  fVar15 = fVar17;
                  uVar11 = native_UnityEngine_Transform__TransformPoint_7728d8
                                     (uVar11,uVar14,*(long *)(param_1 + 0x38),0);
                  if (*(long *)(param_1 + 0x28) != 0) {
                    uVar5 = native_UnityEngine_Component__get_transform_8da62c
                                      (*(long *)(param_1 + 0x28),0);
                    if (*(long *)(param_1 + 0x50) != 0) {
                      uVar6 = native_UICamera__get_cachedCamera_c95254(*(long *)(param_1 + 0x50),0);
                      if (((*(byte *)(_NGUIMath_TypeInfo_12d53b8 + 0x133) >> 2 & 1) != 0) &&
                         (*(int *)(_NGUIMath_TypeInfo_12d53b8 + 0xe0) == 0)) {
                        native_sub_4327ec(_NGUIMath_TypeInfo_12d53b8);
                      }
                      native_NGUIMath__OverlayPosition_8084b4(uVar11,uVar14,uVar5,uVar6,0);
                      goto LAB_009df2ec;
                    }
                  }
                }
                goto LAB_009df37c;
              }
            }
          }
        }
        uVar11 = native_sub_43283c();
                    /* WARNING: Subroutine does not return */
        native_sub_4327dc(uVar11,0);
      }
    }
  }
LAB_009df37c:
                    /* WARNING: Subroutine does not return */
  native_sub_432810();
}



/* UIColorPicker$$OnPan @ 0x9df3b8
 * void UIColorPicker__OnPan (UIColorPicker_o* __this, UnityEngine_Vector2_o delta, const MethodInfo* method); */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* UIColorPicker$$OnPan
   void UIColorPicker__OnPan (UIColorPicker_o* __this, UnityEngine_Vector2_o delta, const
   MethodInfo* method); */

void native_UIColorPicker__OnPan_9df3b8
               (float param_1,float param_2,undefined1 param_3 [16],undefined4 param_4,long param_5)

{
  ulong *puVar1;
  char cVar2;
  bool bVar3;
  ulong uVar4;
  long *plVar5;
  long lVar6;
  undefined8 uVar7;
  undefined8 uVar8;
  undefined8 *puVar9;
  undefined8 uVar10;
  undefined4 uVar11;
  undefined4 uVar12;
  undefined8 uVar13;
  undefined4 uVar14;
  
  uVar4 = native_UnityEngine_Behaviour__get_enabled_8d7acc(param_5,0);
  if ((uVar4 & 1) == 0) {
    return;
  }
  uVar11 = native_UnityEngine_Mathf__Clamp01_8d9d9c(param_1 + *(float *)(param_5 + 0x58),0);
  *(undefined4 *)(param_5 + 0x58) = uVar11;
  uVar13 = native_UnityEngine_Mathf__Clamp01_8d9d9c(param_2 + *(float *)(param_5 + 0x5c),0);
  uVar11 = *(undefined4 *)(param_5 + 0x58);
  *(int *)(param_5 + 0x5c) = (int)uVar13;
  uVar10 = uVar13;
  if ((bRam00000000013418bb & 1) == 0) {
    native_sub_43273c(&EventDelegate_TypeInfo_12d4590);
    native_sub_43273c(&NGUIMath_TypeInfo_12d53b8);
    native_sub_43273c(&UnityEngine_Object_TypeInfo_12d54e0);
    native_sub_43273c(&UIColorPicker_TypeInfo_12d6420);
    bRam00000000013418bb = 1;
  }
  uVar14 = (undefined4)uVar10;
  uVar11 = native_UnityEngine_Mathf__Clamp01_8d9d9c(uVar11,0);
  uVar12 = native_UnityEngine_Mathf__Clamp01_8d9d9c(uVar13,0);
  *(undefined4 *)(param_5 + 0x58) = uVar11;
  *(undefined4 *)(param_5 + 0x5c) = uVar12;
  uVar10 = *(undefined8 *)(param_5 + 0x28);
  if (((*(byte *)(_UnityEngine_Object_TypeInfo_12d54e0 + 0x133) >> 2 & 1) != 0) &&
     (*(int *)(_UnityEngine_Object_TypeInfo_12d54e0 + 0xe0) == 0)) {
    native_sub_4327ec();
  }
  uVar4 = native_UnityEngine_Object__op_Inequality_8d76fc(uVar10,0,0);
  if ((uVar4 & 1) == 0) {
LAB_009df5f0:
    uVar12 = *(undefined4 *)(param_5 + 0x5c);
    uVar11 = native_UIColorPicker__Sample_9de24c(*(undefined4 *)(param_5 + 0x58));
    *(undefined4 *)(param_5 + 0x18) = uVar11;
    *(undefined4 *)(param_5 + 0x1c) = uVar12;
    *(undefined4 *)(param_5 + 0x20) = uVar14;
    *(undefined4 *)(param_5 + 0x24) = param_4;
    plVar5 = *(long **)(_UIColorPicker_TypeInfo_12d6420 + 0xb8);
    *plVar5 = param_5;
    native_sub_4326e0(plVar5,param_5);
    uVar10 = *(undefined8 *)(param_5 + 0x30);
    if (((*(byte *)(_EventDelegate_TypeInfo_12d4590 + 0x133) >> 2 & 1) != 0) &&
       (*(int *)(_EventDelegate_TypeInfo_12d4590 + 0xe0) == 0)) {
      native_sub_4327ec();
    }
    native_EventDelegate__Execute_deecbc(uVar10,0);
    puVar9 = *(undefined8 **)(_UIColorPicker_TypeInfo_12d6420 + 0xb8);
    *puVar9 = 0;
    if (iRam0000000001345318 != 0) {
      puVar1 = (ulong *)(((ulong)puVar9 >> 0x12 & 0x7fff) * 8 + 0x138ecd8);
      do {
        cVar2 = '\x01';
        bVar3 = (bool)ExclusiveMonitorPass(puVar1,0x10);
        if (bVar3) {
          *puVar1 = *puVar1 | 1L << ((ulong)puVar9 >> 0xc & 0x3f);
          cVar2 = ExclusiveMonitorsStatus();
        }
      } while (cVar2 != '\0');
    }
    return;
  }
  plVar5 = *(long **)(param_5 + 0x40);
  if (plVar5 != (long *)0x0) {
    lVar6 = (**(code **)(*plVar5 + 0x1d8))(plVar5,*(undefined8 *)(*plVar5 + 0x1e0));
    if (lVar6 != 0) {
      if ((*(uint *)(lVar6 + 0x18) != 0) && (2 < *(uint *)(lVar6 + 0x18))) {
        uVar10 = native_UnityEngine_Mathf__Lerp_8e5224
                           (*(undefined4 *)(lVar6 + 0x20),*(undefined4 *)(lVar6 + 0x38),
                            *(undefined4 *)(param_5 + 0x58),0);
        if ((*(uint *)(lVar6 + 0x18) != 0) && (2 < *(uint *)(lVar6 + 0x18))) {
          uVar13 = native_UnityEngine_Mathf__Lerp_8e5224
                             (*(undefined4 *)(lVar6 + 0x24),*(undefined4 *)(lVar6 + 0x3c),
                              *(undefined4 *)(param_5 + 0x5c),0);
          if (*(long *)(param_5 + 0x38) != 0) {
            uVar10 = native_UnityEngine_Transform__TransformPoint_7728d8
                               (uVar10,uVar13,0,*(long *)(param_5 + 0x38),0);
            if (*(long *)(param_5 + 0x28) != 0) {
              uVar7 = native_UnityEngine_Component__get_transform_8da62c
                                (*(long *)(param_5 + 0x28),0);
              if (*(long *)(param_5 + 0x50) != 0) {
                uVar8 = native_UICamera__get_cachedCamera_c95254(*(long *)(param_5 + 0x50),0);
                if (((*(byte *)(_NGUIMath_TypeInfo_12d53b8 + 0x133) >> 2 & 1) != 0) &&
                   (*(int *)(_NGUIMath_TypeInfo_12d53b8 + 0xe0) == 0)) {
                  native_sub_4327ec(_NGUIMath_TypeInfo_12d53b8);
                }
                uVar14 = 0;
                native_NGUIMath__OverlayPosition_8084b4(uVar10,uVar13,uVar7,uVar8,0);
                goto LAB_009df5f0;
              }
            }
          }
          goto LAB_009df670;
        }
      }
      uVar10 = native_sub_43283c();
                    /* WARNING: Subroutine does not return */
      native_sub_4327dc(uVar10,0);
    }
  }
LAB_009df670:
                    /* WARNING: Subroutine does not return */
  native_sub_432810();
}



/* UIColorPicker$$Sample @ 0x9df09c
 * void UIColorPicker__Sample (UIColorPicker_o* __this, const MethodInfo* method); */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* UIColorPicker$$Sample
   void UIColorPicker__Sample (UIColorPicker_o* __this, const MethodInfo* method); */

void native_UIColorPicker__Sample_9df09c(long param_1)

{
  ulong *puVar1;
  char cVar2;
  bool bVar3;
  long *plVar4;
  ulong uVar5;
  undefined8 uVar6;
  undefined8 uVar7;
  undefined8 *puVar8;
  long lVar9;
  long lVar10;
  undefined8 uVar11;
  float fVar12;
  undefined4 uVar13;
  undefined8 uVar14;
  float fVar15;
  undefined4 uVar16;
  float fVar17;
  undefined4 in_s3;
  
  if ((bRam00000000013418ba & 1) == 0) {
    native_sub_43273c(&EventDelegate_TypeInfo_12d4590);
    native_sub_43273c(&NGUIMath_TypeInfo_12d53b8);
    native_sub_43273c(&UnityEngine_Object_TypeInfo_12d54e0);
    native_sub_43273c(&UICamera_TypeInfo_12d6410);
    native_sub_43273c(&UIColorPicker_TypeInfo_12d6420);
    bRam00000000013418ba = 1;
  }
  lVar10 = *(long *)(param_1 + 0x38);
  if (((*(byte *)(_UICamera_TypeInfo_12d6410 + 0x133) >> 2 & 1) != 0) &&
     (*(int *)(_UICamera_TypeInfo_12d6410 + 0xe0) == 0)) {
    native_sub_4327ec();
  }
  if (lVar10 != 0) {
    lVar9 = *(long *)(_UICamera_TypeInfo_12d6410 + 0xb8);
    fVar15 = *(float *)(lVar9 + 0x68);
    fVar17 = *(float *)(lVar9 + 0x6c);
    fVar12 = (float)native_UnityEngine_Transform__InverseTransformPoint_7729a0
                              (*(undefined4 *)(lVar9 + 100),lVar10,0);
    plVar4 = *(long **)(param_1 + 0x40);
    if (plVar4 != (long *)0x0) {
      lVar10 = (**(code **)(*plVar4 + 0x1d8))(plVar4,*(undefined8 *)(*plVar4 + 0x1e0));
      if (lVar10 != 0) {
        if ((*(uint *)(lVar10 + 0x18) != 0) && (2 < *(uint *)(lVar10 + 0x18))) {
          uVar13 = native_UnityEngine_Mathf__Clamp01_8d9d9c
                             ((fVar12 - *(float *)(lVar10 + 0x20)) /
                              (*(float *)(lVar10 + 0x38) - *(float *)(lVar10 + 0x20)),0);
          *(undefined4 *)(param_1 + 0x58) = uVar13;
          if ((*(uint *)(lVar10 + 0x18) != 0) && (2 < *(uint *)(lVar10 + 0x18))) {
            fVar15 = fVar15 - *(float *)(lVar10 + 0x24);
            uVar13 = native_UnityEngine_Mathf__Clamp01_8d9d9c
                               (fVar15 / (*(float *)(lVar10 + 0x3c) - *(float *)(lVar10 + 0x24)),0);
            *(undefined4 *)(param_1 + 0x5c) = uVar13;
            uVar11 = *(undefined8 *)(param_1 + 0x28);
            if (((*(byte *)(_UnityEngine_Object_TypeInfo_12d54e0 + 0x133) >> 2 & 1) != 0) &&
               (*(int *)(_UnityEngine_Object_TypeInfo_12d54e0 + 0xe0) == 0)) {
              native_sub_4327ec();
            }
            uVar5 = native_UnityEngine_Object__op_Inequality_8d76fc(uVar11,0,0);
            if ((uVar5 & 1) == 0) {
LAB_009df2ec:
              uVar16 = *(undefined4 *)(param_1 + 0x5c);
              uVar13 = native_UIColorPicker__Sample_9de24c(*(undefined4 *)(param_1 + 0x58));
              *(undefined4 *)(param_1 + 0x18) = uVar13;
              *(undefined4 *)(param_1 + 0x1c) = uVar16;
              *(float *)(param_1 + 0x20) = fVar15;
              *(undefined4 *)(param_1 + 0x24) = in_s3;
              plVar4 = *(long **)(_UIColorPicker_TypeInfo_12d6420 + 0xb8);
              *plVar4 = param_1;
              native_sub_4326e0(plVar4,param_1);
              uVar11 = *(undefined8 *)(param_1 + 0x30);
              if (((*(byte *)(_EventDelegate_TypeInfo_12d4590 + 0x133) >> 2 & 1) != 0) &&
                 (*(int *)(_EventDelegate_TypeInfo_12d4590 + 0xe0) == 0)) {
                native_sub_4327ec();
              }
              native_EventDelegate__Execute_deecbc(uVar11,0);
              puVar8 = *(undefined8 **)(_UIColorPicker_TypeInfo_12d6420 + 0xb8);
              *puVar8 = 0;
              if (iRam0000000001345318 != 0) {
                puVar1 = (ulong *)(((ulong)puVar8 >> 0x12 & 0x7fff) * 8 + 0x138ecd8);
                do {
                  cVar2 = '\x01';
                  bVar3 = (bool)ExclusiveMonitorPass(puVar1,0x10);
                  if (bVar3) {
                    *puVar1 = *puVar1 | 1L << ((ulong)puVar8 >> 0xc & 0x3f);
                    cVar2 = ExclusiveMonitorsStatus();
                  }
                } while (cVar2 != '\0');
              }
              return;
            }
            if ((*(uint *)(lVar10 + 0x18) != 0) && (2 < *(uint *)(lVar10 + 0x18))) {
              uVar11 = native_UnityEngine_Mathf__Lerp_8e5224
                                 (*(undefined4 *)(lVar10 + 0x20),*(undefined4 *)(lVar10 + 0x38),
                                  *(undefined4 *)(param_1 + 0x58),0);
              if ((*(uint *)(lVar10 + 0x18) != 0) && (2 < *(uint *)(lVar10 + 0x18))) {
                uVar14 = native_UnityEngine_Mathf__Lerp_8e5224
                                   (*(undefined4 *)(lVar10 + 0x24),*(undefined4 *)(lVar10 + 0x3c),
                                    *(undefined4 *)(param_1 + 0x5c),0);
                if (*(long *)(param_1 + 0x38) != 0) {
                  fVar15 = fVar17;
                  uVar11 = native_UnityEngine_Transform__TransformPoint_7728d8
                                     (uVar11,uVar14,*(long *)(param_1 + 0x38),0);
                  if (*(long *)(param_1 + 0x28) != 0) {
                    uVar6 = native_UnityEngine_Component__get_transform_8da62c
                                      (*(long *)(param_1 + 0x28),0);
                    if (*(long *)(param_1 + 0x50) != 0) {
                      uVar7 = native_UICamera__get_cachedCamera_c95254(*(long *)(param_1 + 0x50),0);
                      if (((*(byte *)(_NGUIMath_TypeInfo_12d53b8 + 0x133) >> 2 & 1) != 0) &&
                         (*(int *)(_NGUIMath_TypeInfo_12d53b8 + 0xe0) == 0)) {
                        native_sub_4327ec(_NGUIMath_TypeInfo_12d53b8);
                      }
                      native_NGUIMath__OverlayPosition_8084b4(uVar11,uVar14,uVar6,uVar7,0);
                      goto LAB_009df2ec;
                    }
                  }
                }
                goto LAB_009df37c;
              }
            }
          }
        }
        uVar11 = native_sub_43283c();
                    /* WARNING: Subroutine does not return */
        native_sub_4327dc(uVar11,0);
      }
    }
  }
LAB_009df37c:
                    /* WARNING: Subroutine does not return */
  native_sub_432810();
}



/* UIColorPicker$$Select @ 0x9df43c
 * void UIColorPicker__Select (UIColorPicker_o* __this, UnityEngine_Vector2_o v, const MethodInfo* method); */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* UIColorPicker$$Select
   void UIColorPicker__Select (UIColorPicker_o* __this, UnityEngine_Vector2_o v, const MethodInfo*
   method); */

void native_UIColorPicker__Select_9df43c
               (undefined8 param_1,undefined8 param_2,undefined4 param_3,undefined4 param_4,
               long param_5)

{
  ulong *puVar1;
  char cVar2;
  bool bVar3;
  ulong uVar4;
  long *plVar5;
  long lVar6;
  undefined8 uVar7;
  undefined8 uVar8;
  undefined8 *puVar9;
  undefined8 uVar10;
  undefined4 uVar11;
  undefined4 uVar12;
  undefined8 uVar13;
  
  if ((bRam00000000013418bb & 1) == 0) {
    native_sub_43273c(&EventDelegate_TypeInfo_12d4590);
    native_sub_43273c(&NGUIMath_TypeInfo_12d53b8);
    native_sub_43273c(&UnityEngine_Object_TypeInfo_12d54e0);
    native_sub_43273c(&UIColorPicker_TypeInfo_12d6420);
    bRam00000000013418bb = 1;
  }
  uVar11 = native_UnityEngine_Mathf__Clamp01_8d9d9c(param_1,0);
  uVar12 = native_UnityEngine_Mathf__Clamp01_8d9d9c(param_2,0);
  *(undefined4 *)(param_5 + 0x58) = uVar11;
  *(undefined4 *)(param_5 + 0x5c) = uVar12;
  uVar10 = *(undefined8 *)(param_5 + 0x28);
  if (((*(byte *)(_UnityEngine_Object_TypeInfo_12d54e0 + 0x133) >> 2 & 1) != 0) &&
     (*(int *)(_UnityEngine_Object_TypeInfo_12d54e0 + 0xe0) == 0)) {
    native_sub_4327ec();
  }
  uVar4 = native_UnityEngine_Object__op_Inequality_8d76fc(uVar10,0,0);
  if ((uVar4 & 1) == 0) {
LAB_009df5f0:
    uVar12 = *(undefined4 *)(param_5 + 0x5c);
    uVar11 = native_UIColorPicker__Sample_9de24c(*(undefined4 *)(param_5 + 0x58));
    *(undefined4 *)(param_5 + 0x18) = uVar11;
    *(undefined4 *)(param_5 + 0x1c) = uVar12;
    *(undefined4 *)(param_5 + 0x20) = param_3;
    *(undefined4 *)(param_5 + 0x24) = param_4;
    plVar5 = *(long **)(_UIColorPicker_TypeInfo_12d6420 + 0xb8);
    *plVar5 = param_5;
    native_sub_4326e0(plVar5,param_5);
    uVar10 = *(undefined8 *)(param_5 + 0x30);
    if (((*(byte *)(_EventDelegate_TypeInfo_12d4590 + 0x133) >> 2 & 1) != 0) &&
       (*(int *)(_EventDelegate_TypeInfo_12d4590 + 0xe0) == 0)) {
      native_sub_4327ec();
    }
    native_EventDelegate__Execute_deecbc(uVar10,0);
    puVar9 = *(undefined8 **)(_UIColorPicker_TypeInfo_12d6420 + 0xb8);
    *puVar9 = 0;
    if (iRam0000000001345318 != 0) {
      puVar1 = (ulong *)(((ulong)puVar9 >> 0x12 & 0x7fff) * 8 + 0x138ecd8);
      do {
        cVar2 = '\x01';
        bVar3 = (bool)ExclusiveMonitorPass(puVar1,0x10);
        if (bVar3) {
          *puVar1 = *puVar1 | 1L << ((ulong)puVar9 >> 0xc & 0x3f);
          cVar2 = ExclusiveMonitorsStatus();
        }
      } while (cVar2 != '\0');
    }
    return;
  }
  plVar5 = *(long **)(param_5 + 0x40);
  if (plVar5 != (long *)0x0) {
    lVar6 = (**(code **)(*plVar5 + 0x1d8))(plVar5,*(undefined8 *)(*plVar5 + 0x1e0));
    if (lVar6 != 0) {
      if ((*(uint *)(lVar6 + 0x18) != 0) && (2 < *(uint *)(lVar6 + 0x18))) {
        uVar10 = native_UnityEngine_Mathf__Lerp_8e5224
                           (*(undefined4 *)(lVar6 + 0x20),*(undefined4 *)(lVar6 + 0x38),
                            *(undefined4 *)(param_5 + 0x58),0);
        if ((*(uint *)(lVar6 + 0x18) != 0) && (2 < *(uint *)(lVar6 + 0x18))) {
          uVar13 = native_UnityEngine_Mathf__Lerp_8e5224
                             (*(undefined4 *)(lVar6 + 0x24),*(undefined4 *)(lVar6 + 0x3c),
                              *(undefined4 *)(param_5 + 0x5c),0);
          if (*(long *)(param_5 + 0x38) != 0) {
            uVar10 = native_UnityEngine_Transform__TransformPoint_7728d8
                               (uVar10,uVar13,0,*(long *)(param_5 + 0x38),0);
            if (*(long *)(param_5 + 0x28) != 0) {
              uVar7 = native_UnityEngine_Component__get_transform_8da62c
                                (*(long *)(param_5 + 0x28),0);
              if (*(long *)(param_5 + 0x50) != 0) {
                uVar8 = native_UICamera__get_cachedCamera_c95254(*(long *)(param_5 + 0x50),0);
                if (((*(byte *)(_NGUIMath_TypeInfo_12d53b8 + 0x133) >> 2 & 1) != 0) &&
                   (*(int *)(_NGUIMath_TypeInfo_12d53b8 + 0xe0) == 0)) {
                  native_sub_4327ec(_NGUIMath_TypeInfo_12d53b8);
                }
                param_3 = 0;
                native_NGUIMath__OverlayPosition_8084b4(uVar10,uVar13,uVar7,uVar8,0);
                goto LAB_009df5f0;
              }
            }
          }
          goto LAB_009df670;
        }
      }
      uVar10 = native_sub_43283c();
                    /* WARNING: Subroutine does not return */
      native_sub_4327dc(uVar10,0);
    }
  }
LAB_009df670:
                    /* WARNING: Subroutine does not return */
  native_sub_432810();
}



/* UIColorPicker$$Select @ 0x9dec58
 * UnityEngine_Vector2_o UIColorPicker__Select (UIColorPicker_o* __this, UnityEngine_Color_o c, const MethodInfo* method); */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* UIColorPicker$$Select
   UnityEngine_Vector2_o UIColorPicker__Select (UIColorPicker_o* __this, UnityEngine_Color_o c,
   const MethodInfo* method); */

undefined4
native_UIColorPicker__Select_9dec58
          (float param_1,float param_2,ulong param_3,undefined4 param_4,long param_5)

{
  ulong uVar1;
  ulong uVar2;
  long *plVar3;
  long lVar4;
  undefined8 uVar5;
  undefined8 uVar6;
  undefined8 *puVar7;
  int iVar8;
  int iVar9;
  int iVar10;
  undefined8 uVar11;
  int iVar12;
  float fVar13;
  float fVar14;
  undefined8 uVar15;
  float fVar16;
  undefined8 uVar17;
  float fVar18;
  float fVar19;
  float fVar20;
  float fVar21;
  
  uVar2 = param_3;
  if ((bRam00000000013418bc & 1) == 0) {
    native_sub_43273c(&EventDelegate_TypeInfo_12d4590);
    native_sub_43273c(&NGUIMath_TypeInfo_12d53b8);
    native_sub_43273c(&UnityEngine_Object_TypeInfo_12d54e0);
    native_sub_43273c(&UIColorPicker_TypeInfo_12d6420);
    bRam00000000013418bc = 1;
  }
  uVar11 = *(undefined8 *)(param_5 + 0x40);
  if (((*(byte *)(_UnityEngine_Object_TypeInfo_12d54e0 + 0x133) >> 2 & 1) != 0) &&
     (*(int *)(_UnityEngine_Object_TypeInfo_12d54e0 + 0xe0) == 0)) {
    native_sub_4327ec();
  }
  uVar1 = native_UnityEngine_Object__op_Equality_8e9a3c(uVar11,0,0);
  fVar18 = (float)param_3;
  if ((uVar1 & 1) == 0) {
    iVar9 = *(int *)(param_5 + 100);
    if (0 < iVar9) {
      iVar8 = *(int *)(param_5 + 0x60);
      fVar21 = 3.4028235e+38;
      iVar10 = 0;
      do {
        if (0 < iVar8) {
          iVar12 = 0;
          fVar19 = ((float)iVar10 + -1.0) / (float)iVar9;
          do {
            fVar16 = (float)uVar2;
            fVar20 = ((float)iVar12 + -1.0) / (float)iVar8;
            fVar14 = fVar19;
            fVar13 = (float)native_UIColorPicker__Sample_9de24c(fVar20);
            fVar16 = fVar16 - fVar18;
            uVar2 = (ulong)(uint)fVar16;
            fVar14 = fVar16 * fVar16 +
                     (fVar13 - param_1) * (fVar13 - param_1) +
                     (fVar14 - param_2) * (fVar14 - param_2);
            if (fVar14 < fVar21) {
              *(float *)(param_5 + 0x58) = fVar20;
              *(float *)(param_5 + 0x5c) = fVar19;
              fVar21 = fVar14;
            }
            iVar8 = *(int *)(param_5 + 0x60);
            iVar12 = iVar12 + 1;
          } while (iVar12 < iVar8);
          iVar9 = *(int *)(param_5 + 100);
        }
        iVar10 = iVar10 + 1;
      } while (iVar10 < iVar9);
    }
    uVar11 = *(undefined8 *)(param_5 + 0x28);
    if (((*(byte *)(_UnityEngine_Object_TypeInfo_12d54e0 + 0x133) >> 2 & 1) != 0) &&
       (*(int *)(_UnityEngine_Object_TypeInfo_12d54e0 + 0xe0) == 0)) {
      native_sub_4327ec();
    }
    uVar2 = native_UnityEngine_Object__op_Inequality_8d76fc(uVar11,0,0);
    if ((uVar2 & 1) != 0) {
      plVar3 = *(long **)(param_5 + 0x40);
      if ((plVar3 == (long *)0x0) ||
         (lVar4 = (**(code **)(*plVar3 + 0x1d8))(plVar3,*(undefined8 *)(*plVar3 + 0x1e0)),
         lVar4 == 0)) goto LAB_009def74;
      if ((*(uint *)(lVar4 + 0x18) == 0) || (*(uint *)(lVar4 + 0x18) < 3)) {
LAB_009def78:
        uVar11 = native_sub_43283c();
                    /* WARNING: Subroutine does not return */
        native_sub_4327dc(uVar11,0);
      }
      uVar11 = native_UnityEngine_Mathf__Lerp_8e5224
                         (*(undefined4 *)(lVar4 + 0x20),*(undefined4 *)(lVar4 + 0x38),
                          *(undefined4 *)(param_5 + 0x58),0);
      if ((*(uint *)(lVar4 + 0x18) == 0) || (*(uint *)(lVar4 + 0x18) < 3)) goto LAB_009def78;
      uVar15 = native_UnityEngine_Mathf__Lerp_8e5224
                         (*(undefined4 *)(lVar4 + 0x24),*(undefined4 *)(lVar4 + 0x3c),
                          *(undefined4 *)(param_5 + 0x5c),0);
      if (*(long *)(param_5 + 0x38) == 0) {
LAB_009def74:
                    /* WARNING: Subroutine does not return */
        native_sub_432810();
      }
      uVar17 = 0;
      uVar11 = native_UnityEngine_Transform__TransformPoint_7728d8
                         (uVar11,uVar15,0,*(long *)(param_5 + 0x38),0);
      if (*(long *)(param_5 + 0x28) == 0) goto LAB_009def74;
      uVar5 = native_UnityEngine_Component__get_transform_8da62c(*(long *)(param_5 + 0x28),0);
      if (*(long *)(param_5 + 0x50) == 0) goto LAB_009def74;
      uVar6 = native_UICamera__get_cachedCamera_c95254(*(long *)(param_5 + 0x50),0);
      if (((*(byte *)(_NGUIMath_TypeInfo_12d53b8 + 0x133) >> 2 & 1) != 0) &&
         (*(int *)(_NGUIMath_TypeInfo_12d53b8 + 0xe0) == 0)) {
        native_sub_4327ec(_NGUIMath_TypeInfo_12d53b8);
      }
      native_NGUIMath__OverlayPosition_8084b4(uVar11,uVar15,uVar17,uVar5,uVar6,0);
    }
    *(float *)(param_5 + 0x18) = param_1;
    *(float *)(param_5 + 0x1c) = param_2;
    *(float *)(param_5 + 0x20) = fVar18;
    *(undefined4 *)(param_5 + 0x24) = param_4;
    plVar3 = *(long **)(_UIColorPicker_TypeInfo_12d6420 + 0xb8);
    *plVar3 = param_5;
    native_sub_4326e0(plVar3,param_5);
    uVar11 = *(undefined8 *)(param_5 + 0x30);
    if (((*(byte *)(_EventDelegate_TypeInfo_12d4590 + 0x133) >> 2 & 1) != 0) &&
       (*(int *)(_EventDelegate_TypeInfo_12d4590 + 0xe0) == 0)) {
      native_sub_4327ec();
    }
    native_EventDelegate__Execute_deecbc(uVar11,0);
    puVar7 = *(undefined8 **)(_UIColorPicker_TypeInfo_12d6420 + 0xb8);
    *puVar7 = 0;
    native_sub_4326e0(puVar7,0);
  }
  else {
    *(float *)(param_5 + 0x18) = param_1;
    *(float *)(param_5 + 0x1c) = param_2;
    *(float *)(param_5 + 0x20) = fVar18;
    *(undefined4 *)(param_5 + 0x24) = param_4;
  }
  return *(undefined4 *)(param_5 + 0x58);
}



/* UIColorPicker$$Sample @ 0x9de24c
 * UnityEngine_Color_o UIColorPicker__Sample (float x, float y, const MethodInfo* method); */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* UIColorPicker$$Sample
   UnityEngine_Color_o UIColorPicker__Sample (float x, float y, const MethodInfo* method); */

undefined4 native_UIColorPicker__Sample_9de24c(undefined8 param_1,float param_2,float param_3)

{
  long lVar1;
  undefined8 uVar2;
  undefined8 *puVar3;
  float fVar4;
  float fVar5;
  float fVar6;
  float fVar7;
  float fVar8;
  float fVar9;
  undefined8 uStack_680;
  undefined4 uStack_678;
  undefined4 uStack_674;
  undefined4 uStack_670;
  undefined4 uStack_66c;
  undefined4 uStack_668;
  undefined8 uStack_660;
  undefined4 uStack_658;
  undefined4 uStack_654;
  undefined4 uStack_650;
  undefined8 uStack_64c;
  undefined8 uStack_640;
  undefined4 uStack_638;
  undefined4 uStack_634;
  undefined4 uStack_630;
  undefined4 uStack_62c;
  undefined4 uStack_628;
  undefined8 uStack_620;
  undefined4 uStack_618;
  undefined4 uStack_614;
  undefined4 uStack_610;
  undefined8 uStack_60c;
  undefined8 uStack_600;
  undefined4 uStack_5f8;
  undefined4 uStack_5f4;
  undefined4 uStack_5f0;
  undefined4 uStack_5ec;
  undefined4 uStack_5e8;
  undefined8 uStack_5e0;
  undefined4 uStack_5d8;
  undefined4 uStack_5d4;
  undefined4 uStack_5d0;
  undefined8 uStack_5cc;
  undefined8 uStack_5c0;
  undefined4 uStack_5b8;
  undefined4 uStack_5b4;
  undefined4 uStack_5b0;
  undefined4 uStack_5ac;
  undefined4 uStack_5a8;
  undefined8 uStack_5a0;
  undefined4 uStack_598;
  undefined4 uStack_594;
  undefined4 uStack_590;
  undefined8 uStack_58c;
  undefined8 uStack_580;
  undefined4 uStack_578;
  undefined4 uStack_574;
  undefined4 uStack_570;
  undefined4 uStack_56c;
  undefined4 uStack_568;
  undefined8 uStack_560;
  undefined4 uStack_558;
  undefined4 uStack_554;
  undefined4 uStack_550;
  undefined8 uStack_54c;
  undefined8 uStack_540;
  undefined4 uStack_538;
  undefined4 uStack_534;
  undefined4 uStack_530;
  undefined4 uStack_52c;
  undefined4 uStack_528;
  undefined8 uStack_520;
  undefined4 uStack_518;
  undefined4 uStack_514;
  undefined4 uStack_510;
  undefined8 uStack_50c;
  undefined8 uStack_500;
  undefined4 uStack_4f8;
  undefined4 uStack_4f4;
  undefined4 uStack_4f0;
  undefined4 uStack_4ec;
  undefined4 uStack_4e8;
  undefined8 uStack_4e0;
  undefined4 uStack_4d8;
  undefined4 uStack_4d4;
  undefined4 uStack_4d0;
  undefined8 uStack_4cc;
  undefined8 uStack_4c0;
  undefined4 uStack_4b8;
  undefined4 uStack_4b4;
  undefined4 uStack_4b0;
  undefined4 uStack_4ac;
  undefined4 uStack_4a8;
  undefined8 uStack_4a0;
  undefined4 uStack_498;
  undefined4 uStack_494;
  undefined4 uStack_490;
  undefined8 uStack_48c;
  undefined8 uStack_480;
  undefined4 uStack_478;
  undefined4 uStack_474;
  undefined4 uStack_470;
  undefined4 uStack_46c;
  undefined4 uStack_468;
  undefined8 uStack_460;
  undefined4 uStack_458;
  undefined4 uStack_454;
  undefined4 uStack_450;
  undefined8 uStack_44c;
  undefined8 uStack_440;
  undefined4 uStack_438;
  undefined4 uStack_434;
  undefined4 uStack_430;
  undefined4 uStack_42c;
  undefined4 uStack_428;
  undefined8 uStack_420;
  undefined4 uStack_418;
  undefined4 uStack_414;
  undefined4 uStack_410;
  undefined8 uStack_40c;
  undefined8 uStack_400;
  undefined4 uStack_3f8;
  undefined4 uStack_3f4;
  undefined4 uStack_3f0;
  undefined4 uStack_3ec;
  undefined4 uStack_3e8;
  undefined8 uStack_3e0;
  undefined4 uStack_3d8;
  undefined4 uStack_3d4;
  undefined4 uStack_3d0;
  undefined8 uStack_3cc;
  undefined8 uStack_3c0;
  undefined4 uStack_3b8;
  undefined4 uStack_3b4;
  undefined4 uStack_3b0;
  undefined4 uStack_3ac;
  undefined4 uStack_3a8;
  undefined8 uStack_3a0;
  undefined4 uStack_398;
  undefined4 uStack_394;
  undefined4 uStack_390;
  undefined8 uStack_38c;
  undefined8 uStack_380;
  undefined4 uStack_378;
  undefined4 uStack_374;
  undefined4 uStack_370;
  undefined4 uStack_36c;
  undefined4 uStack_368;
  undefined8 uStack_360;
  undefined4 uStack_358;
  undefined4 uStack_354;
  undefined4 uStack_350;
  undefined8 uStack_34c;
  undefined8 uStack_340;
  undefined4 uStack_338;
  undefined4 uStack_334;
  undefined4 uStack_330;
  undefined4 uStack_32c;
  undefined4 uStack_328;
  undefined8 uStack_320;
  undefined4 uStack_318;
  undefined4 uStack_314;
  undefined4 uStack_310;
  undefined8 uStack_30c;
  undefined8 uStack_300;
  undefined4 uStack_2f8;
  undefined4 uStack_2f4;
  undefined4 uStack_2f0;
  undefined4 uStack_2ec;
  undefined4 uStack_2e8;
  undefined8 uStack_2e0;
  undefined4 uStack_2d8;
  undefined4 uStack_2d4;
  undefined4 uStack_2d0;
  undefined8 uStack_2cc;
  undefined8 uStack_2c0;
  undefined4 uStack_2b8;
  undefined4 uStack_2b4;
  undefined4 uStack_2b0;
  undefined4 uStack_2ac;
  undefined4 uStack_2a8;
  undefined8 uStack_2a0;
  undefined4 uStack_298;
  undefined4 uStack_294;
  undefined4 uStack_290;
  undefined8 uStack_28c;
  undefined8 uStack_280;
  undefined4 uStack_278;
  undefined4 uStack_274;
  undefined4 uStack_270;
  undefined4 uStack_26c;
  undefined4 uStack_268;
  undefined8 uStack_260;
  undefined4 uStack_258;
  undefined4 uStack_254;
  undefined4 uStack_250;
  undefined8 uStack_24c;
  undefined8 uStack_240;
  undefined4 uStack_238;
  undefined4 uStack_234;
  undefined4 uStack_230;
  undefined4 uStack_22c;
  undefined4 uStack_228;
  undefined8 uStack_220;
  undefined4 uStack_218;
  undefined4 uStack_214;
  undefined4 uStack_210;
  undefined8 uStack_20c;
  undefined8 uStack_200;
  undefined4 uStack_1f8;
  undefined4 uStack_1f4;
  undefined4 uStack_1f0;
  undefined4 uStack_1ec;
  undefined4 uStack_1e8;
  undefined8 uStack_1e0;
  undefined4 uStack_1d8;
  undefined4 uStack_1d4;
  undefined4 uStack_1d0;
  undefined8 uStack_1cc;
  undefined8 uStack_1c0;
  undefined4 uStack_1b8;
  undefined4 uStack_1b4;
  undefined4 uStack_1b0;
  undefined4 uStack_1ac;
  undefined4 uStack_1a8;
  undefined8 uStack_1a0;
  undefined4 uStack_198;
  undefined4 uStack_194;
  undefined4 uStack_190;
  undefined8 uStack_18c;
  undefined8 uStack_180;
  undefined4 uStack_178;
  undefined4 uStack_174;
  undefined4 uStack_170;
  undefined4 uStack_16c;
  undefined4 uStack_168;
  undefined8 uStack_160;
  undefined4 uStack_158;
  undefined4 uStack_154;
  undefined4 uStack_150;
  undefined8 uStack_14c;
  undefined8 uStack_140;
  undefined4 uStack_138;
  undefined4 uStack_134;
  undefined4 uStack_130;
  undefined4 uStack_12c;
  undefined4 uStack_128;
  undefined8 uStack_120;
  undefined4 uStack_118;
  undefined4 uStack_114;
  undefined4 uStack_110;
  undefined8 uStack_10c;
  undefined8 uStack_100;
  undefined4 uStack_f8;
  undefined4 uStack_f4;
  undefined4 uStack_f0;
  undefined4 uStack_ec;
  undefined4 uStack_e8;
  undefined8 uStack_e0;
  undefined4 uStack_d8;
  undefined4 uStack_d4;
  undefined4 uStack_d0;
  undefined8 uStack_cc;
  undefined8 uStack_c0;
  undefined4 uStack_b8;
  undefined4 uStack_b4;
  undefined4 uStack_b0;
  undefined4 uStack_ac;
  undefined4 uStack_a8;
  undefined8 uStack_a0;
  undefined8 uStack_98;
  
  if ((bRam00000000013418bd & 1) == 0) {
    native_sub_43273c(&UnityEngine_AnimationCurve_TypeInfo_12d3768);
    native_sub_43273c(&UnityEngine_Keyframe___TypeInfo_12d3298);
    native_sub_43273c(&UIColorPicker_TypeInfo_12d6420);
    bRam00000000013418bd = 1;
  }
  lVar1 = *(long *)(*(long *)(_UIColorPicker_TypeInfo_12d6420 + 0xb8) + 8);
  if (lVar1 == 0) {
    lVar1 = native_sub_432750(_UnityEngine_Keyframe___TypeInfo_12d3298,8);
    uStack_c0 = 0;
    uStack_b8 = 0;
    uStack_b4 = 0;
    uStack_a8 = 0;
    uStack_b0 = 0;
    uStack_ac = 0;
    native_UnityEngine_Keyframe___ctor_8dfc48(0,0x3f800000,&uStack_c0,0);
    if (lVar1 == 0) goto LAB_009dec54;
    uStack_cc = CONCAT44(uStack_a8,uStack_ac);
    uStack_d0 = uStack_b0;
    uStack_d8 = uStack_b8;
    uStack_d4 = uStack_b4;
    uStack_e0 = uStack_c0;
    if (*(int *)(lVar1 + 0x18) == 0) {
LAB_009dec48:
      uVar2 = native_sub_43283c();
                    /* WARNING: Subroutine does not return */
      native_sub_4327dc(uVar2,0);
    }
    *(undefined8 *)(lVar1 + 0x34) = uStack_cc;
    *(ulong *)(lVar1 + 0x2c) = CONCAT44(uStack_b0,uStack_b4);
    *(ulong *)(lVar1 + 0x28) = CONCAT44(uStack_b4,uStack_b8);
    *(undefined8 *)(lVar1 + 0x20) = uStack_c0;
    uStack_100 = 0;
    uStack_f8 = 0;
    uStack_f4 = 0;
    uStack_e8 = 0;
    uStack_f0 = 0;
    uStack_ec = 0;
    native_UnityEngine_Keyframe___ctor_8dfc48(0x3e124925,0x3f800000,&uStack_100,0);
    uStack_10c = CONCAT44(uStack_e8,uStack_ec);
    uStack_110 = uStack_f0;
    uStack_118 = uStack_f8;
    uStack_114 = uStack_f4;
    uStack_120 = uStack_100;
    if (*(uint *)(lVar1 + 0x18) < 2) goto LAB_009dec48;
    *(undefined8 *)(lVar1 + 0x50) = uStack_10c;
    *(ulong *)(lVar1 + 0x48) = CONCAT44(uStack_f0,uStack_f4);
    *(ulong *)(lVar1 + 0x44) = CONCAT44(uStack_f4,uStack_f8);
    *(undefined8 *)(lVar1 + 0x3c) = uStack_100;
    uStack_138 = 0;
    uStack_134 = 0;
    uStack_140 = 0;
    uStack_128 = 0;
    uStack_130 = 0;
    uStack_12c = 0;
    native_UnityEngine_Keyframe___ctor_8dfc48(0x3e924925,0,&uStack_140,0);
    uStack_14c = CONCAT44(uStack_128,uStack_12c);
    uStack_150 = uStack_130;
    uStack_158 = uStack_138;
    uStack_154 = uStack_134;
    uStack_160 = uStack_140;
    if (*(uint *)(lVar1 + 0x18) < 3) goto LAB_009dec48;
    *(undefined8 *)(lVar1 + 0x6c) = uStack_14c;
    *(ulong *)(lVar1 + 100) = CONCAT44(uStack_130,uStack_134);
    *(ulong *)(lVar1 + 0x60) = CONCAT44(uStack_134,uStack_138);
    *(undefined8 *)(lVar1 + 0x58) = uStack_140;
    uStack_178 = 0;
    uStack_174 = 0;
    uStack_180 = 0;
    uStack_168 = 0;
    uStack_170 = 0;
    uStack_16c = 0;
    native_UnityEngine_Keyframe___ctor_8dfc48(0x3edb6db7,0,&uStack_180,0);
    uStack_18c = CONCAT44(uStack_168,uStack_16c);
    uStack_190 = uStack_170;
    uStack_198 = uStack_178;
    uStack_194 = uStack_174;
    uStack_1a0 = uStack_180;
    if (*(uint *)(lVar1 + 0x18) < 4) goto LAB_009dec48;
    *(undefined8 *)(lVar1 + 0x88) = uStack_18c;
    *(ulong *)(lVar1 + 0x80) = CONCAT44(uStack_170,uStack_174);
    *(ulong *)(lVar1 + 0x7c) = CONCAT44(uStack_174,uStack_178);
    *(undefined8 *)(lVar1 + 0x74) = uStack_180;
    uStack_1b8 = 0;
    uStack_1b4 = 0;
    uStack_1c0 = 0;
    uStack_1a8 = 0;
    uStack_1b0 = 0;
    uStack_1ac = 0;
    native_UnityEngine_Keyframe___ctor_8dfc48(0x3f124925,0,&uStack_1c0,0);
    uStack_1cc = CONCAT44(uStack_1a8,uStack_1ac);
    uStack_1d0 = uStack_1b0;
    uStack_1d8 = uStack_1b8;
    uStack_1d4 = uStack_1b4;
    uStack_1e0 = uStack_1c0;
    if (*(uint *)(lVar1 + 0x18) < 5) goto LAB_009dec48;
    *(undefined8 *)(lVar1 + 0xa4) = uStack_1cc;
    *(ulong *)(lVar1 + 0x9c) = CONCAT44(uStack_1b0,uStack_1b4);
    *(ulong *)(lVar1 + 0x98) = CONCAT44(uStack_1b4,uStack_1b8);
    *(undefined8 *)(lVar1 + 0x90) = uStack_1c0;
    uStack_1f8 = 0;
    uStack_1f4 = 0;
    uStack_200 = 0;
    uStack_1e8 = 0;
    uStack_1f0 = 0;
    uStack_1ec = 0;
    native_UnityEngine_Keyframe___ctor_8dfc48(0x3f36db6e,0x3f800000,&uStack_200,0);
    uStack_20c = CONCAT44(uStack_1e8,uStack_1ec);
    uStack_210 = uStack_1f0;
    uStack_218 = uStack_1f8;
    uStack_214 = uStack_1f4;
    uStack_220 = uStack_200;
    if (*(uint *)(lVar1 + 0x18) < 6) goto LAB_009dec48;
    *(undefined8 *)(lVar1 + 0xc0) = uStack_20c;
    *(ulong *)(lVar1 + 0xb8) = CONCAT44(uStack_1f0,uStack_1f4);
    *(ulong *)(lVar1 + 0xb4) = CONCAT44(uStack_1f4,uStack_1f8);
    *(undefined8 *)(lVar1 + 0xac) = uStack_200;
    uStack_238 = 0;
    uStack_234 = 0;
    uStack_240 = 0;
    uStack_228 = 0;
    uStack_230 = 0;
    uStack_22c = 0;
    native_UnityEngine_Keyframe___ctor_8dfc48(0x3f5b6db7,0x3f800000,&uStack_240,0);
    uStack_24c = CONCAT44(uStack_228,uStack_22c);
    uStack_250 = uStack_230;
    uStack_258 = uStack_238;
    uStack_254 = uStack_234;
    uStack_260 = uStack_240;
    if (*(uint *)(lVar1 + 0x18) < 7) goto LAB_009dec48;
    *(undefined8 *)(lVar1 + 0xdc) = uStack_24c;
    *(ulong *)(lVar1 + 0xd4) = CONCAT44(uStack_230,uStack_234);
    *(ulong *)(lVar1 + 0xd0) = CONCAT44(uStack_234,uStack_238);
    *(undefined8 *)(lVar1 + 200) = uStack_240;
    uStack_278 = 0;
    uStack_274 = 0;
    uStack_280 = 0;
    uStack_268 = 0;
    uStack_270 = 0;
    uStack_26c = 0;
    native_UnityEngine_Keyframe___ctor_8dfc48(0x3f800000,0x3f000000,&uStack_280,0);
    uStack_28c = CONCAT44(uStack_268,uStack_26c);
    uStack_290 = uStack_270;
    uStack_298 = uStack_278;
    uStack_294 = uStack_274;
    uStack_2a0 = uStack_280;
    if (*(uint *)(lVar1 + 0x18) < 8) goto LAB_009dec48;
    *(undefined8 *)(lVar1 + 0xf8) = uStack_28c;
    *(ulong *)(lVar1 + 0xf0) = CONCAT44(uStack_270,uStack_274);
    *(ulong *)(lVar1 + 0xec) = CONCAT44(uStack_274,uStack_278);
    *(undefined8 *)(lVar1 + 0xe4) = uStack_280;
    uVar2 = native_sub_432808(_UnityEngine_AnimationCurve_TypeInfo_12d3768);
    native_UnityEngine_AnimationCurve___ctor_8d5df4(uVar2,lVar1,0);
    puVar3 = (undefined8 *)(*(long *)(_UIColorPicker_TypeInfo_12d6420 + 0xb8) + 8);
    *puVar3 = uVar2;
    native_sub_4326e0(puVar3,uVar2);
    lVar1 = native_sub_432750(_UnityEngine_Keyframe___TypeInfo_12d3298,8);
    uStack_2b8 = 0;
    uStack_2b4 = 0;
    uStack_2c0 = 0;
    uStack_2a8 = 0;
    uStack_2b0 = 0;
    uStack_2ac = 0;
    native_UnityEngine_Keyframe___ctor_8dfc48(0,0,&uStack_2c0,0);
    if (lVar1 == 0) goto LAB_009dec54;
    uStack_2cc = CONCAT44(uStack_2a8,uStack_2ac);
    uStack_2d0 = uStack_2b0;
    uStack_2d8 = uStack_2b8;
    uStack_2d4 = uStack_2b4;
    uStack_2e0 = uStack_2c0;
    if (*(int *)(lVar1 + 0x18) == 0) goto LAB_009dec48;
    *(undefined8 *)(lVar1 + 0x34) = uStack_2cc;
    *(ulong *)(lVar1 + 0x2c) = CONCAT44(uStack_2b0,uStack_2b4);
    *(ulong *)(lVar1 + 0x28) = CONCAT44(uStack_2b4,uStack_2b8);
    *(undefined8 *)(lVar1 + 0x20) = uStack_2c0;
    uStack_2f8 = 0;
    uStack_2f4 = 0;
    uStack_300 = 0;
    uStack_2e8 = 0;
    uStack_2f0 = 0;
    uStack_2ec = 0;
    native_UnityEngine_Keyframe___ctor_8dfc48(0x3e124925,0x3f800000,&uStack_300,0);
    uStack_30c = CONCAT44(uStack_2e8,uStack_2ec);
    uStack_310 = uStack_2f0;
    uStack_318 = uStack_2f8;
    uStack_314 = uStack_2f4;
    uStack_320 = uStack_300;
    if (*(uint *)(lVar1 + 0x18) < 2) goto LAB_009dec48;
    *(undefined8 *)(lVar1 + 0x50) = uStack_30c;
    *(ulong *)(lVar1 + 0x48) = CONCAT44(uStack_2f0,uStack_2f4);
    *(ulong *)(lVar1 + 0x44) = CONCAT44(uStack_2f4,uStack_2f8);
    *(undefined8 *)(lVar1 + 0x3c) = uStack_300;
    uStack_338 = 0;
    uStack_334 = 0;
    uStack_340 = 0;
    uStack_328 = 0;
    uStack_330 = 0;
    uStack_32c = 0;
    native_UnityEngine_Keyframe___ctor_8dfc48(0x3e924925,0x3f800000,&uStack_340,0);
    uStack_34c = CONCAT44(uStack_328,uStack_32c);
    uStack_350 = uStack_330;
    uStack_358 = uStack_338;
    uStack_354 = uStack_334;
    uStack_360 = uStack_340;
    if (*(uint *)(lVar1 + 0x18) < 3) goto LAB_009dec48;
    *(undefined8 *)(lVar1 + 0x6c) = uStack_34c;
    *(ulong *)(lVar1 + 100) = CONCAT44(uStack_330,uStack_334);
    *(ulong *)(lVar1 + 0x60) = CONCAT44(uStack_334,uStack_338);
    *(undefined8 *)(lVar1 + 0x58) = uStack_340;
    uStack_378 = 0;
    uStack_374 = 0;
    uStack_380 = 0;
    uStack_368 = 0;
    uStack_370 = 0;
    uStack_36c = 0;
    native_UnityEngine_Keyframe___ctor_8dfc48(0x3edb6db7,0x3f800000,&uStack_380,0);
    uStack_38c = CONCAT44(uStack_368,uStack_36c);
    uStack_390 = uStack_370;
    uStack_398 = uStack_378;
    uStack_394 = uStack_374;
    uStack_3a0 = uStack_380;
    if (*(uint *)(lVar1 + 0x18) < 4) goto LAB_009dec48;
    *(undefined8 *)(lVar1 + 0x88) = uStack_38c;
    *(ulong *)(lVar1 + 0x80) = CONCAT44(uStack_370,uStack_374);
    *(ulong *)(lVar1 + 0x7c) = CONCAT44(uStack_374,uStack_378);
    *(undefined8 *)(lVar1 + 0x74) = uStack_380;
    uStack_3b8 = 0;
    uStack_3b4 = 0;
    uStack_3c0 = 0;
    uStack_3a8 = 0;
    uStack_3b0 = 0;
    uStack_3ac = 0;
    native_UnityEngine_Keyframe___ctor_8dfc48(0x3f124925,0,&uStack_3c0,0);
    uStack_3cc = CONCAT44(uStack_3a8,uStack_3ac);
    uStack_3d0 = uStack_3b0;
    uStack_3d8 = uStack_3b8;
    uStack_3d4 = uStack_3b4;
    uStack_3e0 = uStack_3c0;
    if (*(uint *)(lVar1 + 0x18) < 5) goto LAB_009dec48;
    *(undefined8 *)(lVar1 + 0xa4) = uStack_3cc;
    *(ulong *)(lVar1 + 0x9c) = CONCAT44(uStack_3b0,uStack_3b4);
    *(ulong *)(lVar1 + 0x98) = CONCAT44(uStack_3b4,uStack_3b8);
    *(undefined8 *)(lVar1 + 0x90) = uStack_3c0;
    uStack_3f8 = 0;
    uStack_3f4 = 0;
    uStack_400 = 0;
    uStack_3e8 = 0;
    uStack_3f0 = 0;
    uStack_3ec = 0;
    native_UnityEngine_Keyframe___ctor_8dfc48(0x3f36db6e,0,&uStack_400,0);
    uStack_40c = CONCAT44(uStack_3e8,uStack_3ec);
    uStack_410 = uStack_3f0;
    uStack_418 = uStack_3f8;
    uStack_414 = uStack_3f4;
    uStack_420 = uStack_400;
    if (*(uint *)(lVar1 + 0x18) < 6) goto LAB_009dec48;
    *(undefined8 *)(lVar1 + 0xc0) = uStack_40c;
    *(ulong *)(lVar1 + 0xb8) = CONCAT44(uStack_3f0,uStack_3f4);
    *(ulong *)(lVar1 + 0xb4) = CONCAT44(uStack_3f4,uStack_3f8);
    *(undefined8 *)(lVar1 + 0xac) = uStack_400;
    uStack_438 = 0;
    uStack_434 = 0;
    uStack_440 = 0;
    uStack_428 = 0;
    uStack_430 = 0;
    uStack_42c = 0;
    native_UnityEngine_Keyframe___ctor_8dfc48(0x3f5b6db7,0,&uStack_440,0);
    uStack_44c = CONCAT44(uStack_428,uStack_42c);
    uStack_450 = uStack_430;
    uStack_458 = uStack_438;
    uStack_454 = uStack_434;
    uStack_460 = uStack_440;
    if (*(uint *)(lVar1 + 0x18) < 7) goto LAB_009dec48;
    *(undefined8 *)(lVar1 + 0xdc) = uStack_44c;
    *(ulong *)(lVar1 + 0xd4) = CONCAT44(uStack_430,uStack_434);
    *(ulong *)(lVar1 + 0xd0) = CONCAT44(uStack_434,uStack_438);
    *(undefined8 *)(lVar1 + 200) = uStack_440;
    uStack_478 = 0;
    uStack_474 = 0;
    uStack_480 = 0;
    uStack_468 = 0;
    uStack_470 = 0;
    uStack_46c = 0;
    native_UnityEngine_Keyframe___ctor_8dfc48(0x3f800000,0x3f000000,&uStack_480,0);
    uStack_48c = CONCAT44(uStack_468,uStack_46c);
    uStack_490 = uStack_470;
    uStack_498 = uStack_478;
    uStack_494 = uStack_474;
    uStack_4a0 = uStack_480;
    if (*(uint *)(lVar1 + 0x18) < 8) goto LAB_009dec48;
    *(undefined8 *)(lVar1 + 0xf8) = uStack_48c;
    *(ulong *)(lVar1 + 0xf0) = CONCAT44(uStack_470,uStack_474);
    *(ulong *)(lVar1 + 0xec) = CONCAT44(uStack_474,uStack_478);
    *(undefined8 *)(lVar1 + 0xe4) = uStack_480;
    uVar2 = native_sub_432808(_UnityEngine_AnimationCurve_TypeInfo_12d3768);
    native_UnityEngine_AnimationCurve___ctor_8d5df4(uVar2,lVar1,0);
    puVar3 = (undefined8 *)(*(long *)(_UIColorPicker_TypeInfo_12d6420 + 0xb8) + 0x10);
    *puVar3 = uVar2;
    native_sub_4326e0(puVar3,uVar2);
    lVar1 = native_sub_432750(_UnityEngine_Keyframe___TypeInfo_12d3298,8);
    uStack_4c0 = 0;
    uStack_4b8 = 0;
    uStack_4b4 = 0;
    uStack_4a8 = 0;
    uStack_4b0 = 0;
    uStack_4ac = 0;
    native_UnityEngine_Keyframe___ctor_8dfc48(0,0,&uStack_4c0,0);
    if (lVar1 == 0) goto LAB_009dec54;
    uStack_4cc = CONCAT44(uStack_4a8,uStack_4ac);
    uStack_4d0 = uStack_4b0;
    uStack_4d8 = uStack_4b8;
    uStack_4d4 = uStack_4b4;
    uStack_4e0 = uStack_4c0;
    if (*(int *)(lVar1 + 0x18) == 0) goto LAB_009dec48;
    *(undefined8 *)(lVar1 + 0x34) = uStack_4cc;
    *(ulong *)(lVar1 + 0x2c) = CONCAT44(uStack_4b0,uStack_4b4);
    *(ulong *)(lVar1 + 0x28) = CONCAT44(uStack_4b4,uStack_4b8);
    *(undefined8 *)(lVar1 + 0x20) = uStack_4c0;
    uStack_500 = 0;
    uStack_4f8 = 0;
    uStack_4f4 = 0;
    uStack_4e8 = 0;
    uStack_4f0 = 0;
    uStack_4ec = 0;
    native_UnityEngine_Keyframe___ctor_8dfc48(0x3e124925,0,&uStack_500,0);
    uStack_50c = CONCAT44(uStack_4e8,uStack_4ec);
    uStack_510 = uStack_4f0;
    uStack_518 = uStack_4f8;
    uStack_514 = uStack_4f4;
    uStack_520 = uStack_500;
    if (*(uint *)(lVar1 + 0x18) < 2) goto LAB_009dec48;
    *(undefined8 *)(lVar1 + 0x50) = uStack_50c;
    *(ulong *)(lVar1 + 0x48) = CONCAT44(uStack_4f0,uStack_4f4);
    *(ulong *)(lVar1 + 0x44) = CONCAT44(uStack_4f4,uStack_4f8);
    *(undefined8 *)(lVar1 + 0x3c) = uStack_500;
    uStack_540 = 0;
    uStack_538 = 0;
    uStack_534 = 0;
    uStack_528 = 0;
    uStack_530 = 0;
    uStack_52c = 0;
    native_UnityEngine_Keyframe___ctor_8dfc48(0x3e924925,0,&uStack_540,0);
    uStack_54c = CONCAT44(uStack_528,uStack_52c);
    uStack_550 = uStack_530;
    uStack_558 = uStack_538;
    uStack_554 = uStack_534;
    uStack_560 = uStack_540;
    if (*(uint *)(lVar1 + 0x18) < 3) goto LAB_009dec48;
    *(undefined8 *)(lVar1 + 0x6c) = uStack_54c;
    *(ulong *)(lVar1 + 100) = CONCAT44(uStack_530,uStack_534);
    *(ulong *)(lVar1 + 0x60) = CONCAT44(uStack_534,uStack_538);
    *(undefined8 *)(lVar1 + 0x58) = uStack_540;
    uStack_580 = 0;
    uStack_578 = 0;
    uStack_574 = 0;
    uStack_568 = 0;
    uStack_570 = 0;
    uStack_56c = 0;
    native_UnityEngine_Keyframe___ctor_8dfc48(0x3edb6db7,0x3f800000,&uStack_580,0);
    uStack_58c = CONCAT44(uStack_568,uStack_56c);
    uStack_590 = uStack_570;
    uStack_598 = uStack_578;
    uStack_594 = uStack_574;
    uStack_5a0 = uStack_580;
    if (*(uint *)(lVar1 + 0x18) < 4) goto LAB_009dec48;
    *(undefined8 *)(lVar1 + 0x88) = uStack_58c;
    *(ulong *)(lVar1 + 0x80) = CONCAT44(uStack_570,uStack_574);
    *(ulong *)(lVar1 + 0x7c) = CONCAT44(uStack_574,uStack_578);
    *(undefined8 *)(lVar1 + 0x74) = uStack_580;
    uStack_5c0 = 0;
    uStack_5b8 = 0;
    uStack_5b4 = 0;
    uStack_5a8 = 0;
    uStack_5b0 = 0;
    uStack_5ac = 0;
    native_UnityEngine_Keyframe___ctor_8dfc48(0x3f124925,0x3f800000,&uStack_5c0,0);
    uStack_5cc = CONCAT44(uStack_5a8,uStack_5ac);
    uStack_5d0 = uStack_5b0;
    uStack_5d8 = uStack_5b8;
    uStack_5d4 = uStack_5b4;
    uStack_5e0 = uStack_5c0;
    if (*(uint *)(lVar1 + 0x18) < 5) goto LAB_009dec48;
    *(undefined8 *)(lVar1 + 0xa4) = uStack_5cc;
    *(ulong *)(lVar1 + 0x9c) = CONCAT44(uStack_5b0,uStack_5b4);
    *(ulong *)(lVar1 + 0x98) = CONCAT44(uStack_5b4,uStack_5b8);
    *(undefined8 *)(lVar1 + 0x90) = uStack_5c0;
    uStack_600 = 0;
    uStack_5f8 = 0;
    uStack_5f4 = 0;
    uStack_5e8 = 0;
    uStack_5f0 = 0;
    uStack_5ec = 0;
    native_UnityEngine_Keyframe___ctor_8dfc48(0x3f36db6e,0x3f800000,&uStack_600,0);
    uStack_60c = CONCAT44(uStack_5e8,uStack_5ec);
    uStack_610 = uStack_5f0;
    uStack_618 = uStack_5f8;
    uStack_614 = uStack_5f4;
    uStack_620 = uStack_600;
    if (*(uint *)(lVar1 + 0x18) < 6) goto LAB_009dec48;
    *(undefined8 *)(lVar1 + 0xc0) = uStack_60c;
    *(ulong *)(lVar1 + 0xb8) = CONCAT44(uStack_5f0,uStack_5f4);
    *(ulong *)(lVar1 + 0xb4) = CONCAT44(uStack_5f4,uStack_5f8);
    *(undefined8 *)(lVar1 + 0xac) = uStack_600;
    uStack_640 = 0;
    uStack_638 = 0;
    uStack_634 = 0;
    uStack_628 = 0;
    uStack_630 = 0;
    uStack_62c = 0;
    native_UnityEngine_Keyframe___ctor_8dfc48(0x3f5b6db7,0,&uStack_640,0);
    uStack_64c = CONCAT44(uStack_628,uStack_62c);
    uStack_650 = uStack_630;
    uStack_658 = uStack_638;
    uStack_654 = uStack_634;
    uStack_660 = uStack_640;
    if (*(uint *)(lVar1 + 0x18) < 7) goto LAB_009dec48;
    *(undefined8 *)(lVar1 + 0xdc) = uStack_64c;
    *(ulong *)(lVar1 + 0xd4) = CONCAT44(uStack_630,uStack_634);
    *(ulong *)(lVar1 + 0xd0) = CONCAT44(uStack_634,uStack_638);
    *(undefined8 *)(lVar1 + 200) = uStack_640;
    uStack_680 = 0;
    uStack_678 = 0;
    uStack_674 = 0;
    uStack_668 = 0;
    uStack_670 = 0;
    uStack_66c = 0;
    native_UnityEngine_Keyframe___ctor_8dfc48(0x3f800000,0x3f000000,&uStack_680,0);
    if (*(uint *)(lVar1 + 0x18) < 8) goto LAB_009dec48;
    *(ulong *)(lVar1 + 0xf8) = CONCAT44(uStack_668,uStack_66c);
    *(ulong *)(lVar1 + 0xf0) = CONCAT44(uStack_670,uStack_674);
    *(ulong *)(lVar1 + 0xec) = CONCAT44(uStack_674,uStack_678);
    *(undefined8 *)(lVar1 + 0xe4) = uStack_680;
    uVar2 = native_sub_432808(_UnityEngine_AnimationCurve_TypeInfo_12d3768);
    native_UnityEngine_AnimationCurve___ctor_8d5df4(uVar2,lVar1,0);
    puVar3 = (undefined8 *)(*(long *)(_UIColorPicker_TypeInfo_12d6420 + 0xb8) + 0x18);
    *puVar3 = uVar2;
    native_sub_4326e0(puVar3,uVar2);
    lVar1 = *(long *)(*(long *)(_UIColorPicker_TypeInfo_12d6420 + 0xb8) + 8);
    if (lVar1 == 0) goto LAB_009dec54;
  }
  fVar4 = (float)native_UnityEngine_AnimationCurve__Evaluate_8d5be4(param_1,lVar1,0);
  lVar1 = *(long *)(*(long *)(_UIColorPicker_TypeInfo_12d6420 + 0xb8) + 0x10);
  if (lVar1 != 0) {
    fVar5 = (float)native_UnityEngine_AnimationCurve__Evaluate_8d5be4(param_1,lVar1,0);
    lVar1 = *(long *)(*(long *)(_UIColorPicker_TypeInfo_12d6420 + 0xb8) + 0x18);
    if (lVar1 != 0) {
      fVar6 = (float)native_UnityEngine_AnimationCurve__Evaluate_8d5be4(param_1,lVar1,0);
      fVar9 = 0.5;
      if (0.5 <= param_2) {
        fVar7 = (float)native_UnityEngine_Vector3__get_one_776a20(0);
        fVar8 = (float)native_UnityEngine_Mathf__Clamp01_8d9d9c(param_2 + param_2 + -1.0,0);
        fVar4 = fVar4 + fVar8 * (fVar7 - fVar4);
        fVar5 = fVar5 + fVar8 * (fVar9 - fVar5);
        param_2 = fVar6 + fVar8 * (param_3 - fVar6);
      }
      else {
        param_2 = param_2 + param_2;
        fVar4 = param_2 * fVar4;
        fVar5 = param_2 * fVar5;
        param_2 = param_2 * fVar6;
      }
      uStack_a0 = 0;
      uStack_98 = 0;
      native_UnityEngine_Color___ctor_8d980c(fVar4,fVar5,param_2,0x3f800000,&uStack_a0,0);
      return (undefined4)uStack_a0;
    }
  }
LAB_009dec54:
                    /* WARNING: Subroutine does not return */
  native_sub_432810();
}



/* UIColorPicker$$.ctor @ 0x9df680
 * void UIColorPicker___ctor (UIColorPicker_o* __this, const MethodInfo* method); */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* UIColorPicker$$.ctor
   void UIColorPicker___ctor (UIColorPicker_o* __this, const MethodInfo* method); */

undefined1  [16]
native_UIColorPicker___ctor_9df680
          (undefined1 param_1 [16],undefined4 param_2,undefined4 param_3,undefined4 param_4,
          ulong param_5)

{
  undefined8 uVar1;
  undefined4 uVar2;
  undefined1 auVar3 [16];
  
  if ((bRam00000000013418be & 1) == 0) {
    native_sub_43273c(&Method_System_Collections_Generic_List_EventDelegate___ctor___12dc738);
    native_sub_43273c(&System_Collections_Generic_List_EventDelegate__TypeInfo_12d2a08);
    bRam00000000013418be = 1;
  }
  uVar2 = native_UnityEngine_Color__get_white_8d9e10(0);
  *(undefined4 *)(param_5 + 0x18) = uVar2;
  *(undefined4 *)(param_5 + 0x1c) = param_2;
  *(undefined4 *)(param_5 + 0x20) = param_3;
  *(undefined4 *)(param_5 + 0x24) = param_4;
  uVar1 = native_sub_432808(_System_Collections_Generic_List_EventDelegate__TypeInfo_12d2a08);
  native_System_Collections_Generic_List_XmlEventCache_XmlEvent______ctor_d3ff44
            (uVar1,_Method_System_Collections_Generic_List_EventDelegate___ctor___12dc738);
  *(undefined8 *)(param_5 + 0x30) = uVar1;
  native_sub_4326e0(param_5 + 0x30,uVar1);
  if ((bRam0000000001340ae0 & 1) == 0) {
    native_sub_43273c(&UnityEngine_Object_TypeInfo_12d54e0,0);
    bRam0000000001340ae0 = 1;
  }
  if (((*(byte *)(_UnityEngine_Object_TypeInfo_12d54e0 + 0x133) >> 2 & 1) != 0) &&
     (*(int *)(_UnityEngine_Object_TypeInfo_12d54e0 + 0xe0) == 0)) {
    native_sub_4327ec();
  }
  auVar3._8_8_ = 0;
  auVar3._0_8_ = param_5;
  return auVar3;
}


