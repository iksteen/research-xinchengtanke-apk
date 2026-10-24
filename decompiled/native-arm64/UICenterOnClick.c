/* ARM64 IL2CPP native pseudocode from Ghidra.
 * Recovered implementation, not original C# source.
 * Function boundaries follow the IL2CPP method address table. */


/* UICenterOnClick$$OnClick @ 0x9ddcec
 * void UICenterOnClick__OnClick (UICenterOnClick_o* __this, const MethodInfo* method); */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* UICenterOnClick$$OnClick
   void UICenterOnClick__OnClick (UICenterOnClick_o* __this, const MethodInfo* method); */

ulong native_UICenterOnClick__OnClick_9ddcec
                (undefined1 param_1 [16],float param_2,float param_3,undefined8 param_4)

{
  long *plVar1;
  ushort uVar2;
  bool bVar3;
  ulong uVar4;
  undefined8 *puVar5;
  long *plVar6;
  long lVar7;
  undefined8 uVar8;
  long lVar9;
  long lVar10;
  ulong uVar11;
  double dVar12;
  long lVar13;
  int *piVar14;
  undefined8 uVar15;
  code *pcVar16;
  double *pdVar17;
  float fVar18;
  float fVar19;
  double dVar20;
  float fVar21;
  undefined8 uVar22;
  float fVar23;
  float fVar24;
  float fVar25;
  double dStack_58;
  
  if ((bRam00000000013418b6 & 1) == 0) {
    native_sub_43273c(&Method_UnityEngine_Component_GetComponent_UIScrollView____12e2c08);
    native_sub_43273c(&Method_NGUITools_FindInParents_UICenterOnChild____12e5738);
    native_sub_43273c(&Method_NGUITools_FindInParents_UIPanel____12e5760);
    native_sub_43273c(&NGUITools_TypeInfo_12d53c8);
    native_sub_43273c(&UnityEngine_Object_TypeInfo_12d54e0);
    bRam00000000013418b6 = 1;
  }
  uVar8 = native_UnityEngine_Component__get_gameObject_8da66c(param_4,0);
  if (((*(byte *)(_NGUITools_TypeInfo_12d53c8 + 0x133) >> 2 & 1) != 0) &&
     (*(int *)(_NGUITools_TypeInfo_12d53c8 + 0xe0) == 0)) {
    native_sub_4327ec(_NGUITools_TypeInfo_12d53c8);
  }
  lVar9 = native_NGUITools__FindInParents_object__4a5c04
                    (uVar8,_Method_NGUITools_FindInParents_UICenterOnChild____12e5738);
  uVar8 = native_UnityEngine_Component__get_gameObject_8da66c(param_4,0);
  lVar10 = native_NGUITools__FindInParents_object__4a5c04
                     (uVar8,_Method_NGUITools_FindInParents_UIPanel____12e5760);
  if (((*(byte *)(_UnityEngine_Object_TypeInfo_12d54e0 + 0x133) >> 2 & 1) != 0) &&
     (*(int *)(_UnityEngine_Object_TypeInfo_12d54e0 + 0xe0) == 0)) {
    native_sub_4327ec(_UnityEngine_Object_TypeInfo_12d54e0);
  }
  uVar11 = native_UnityEngine_Object__op_Inequality_8d76fc(lVar9,0,0);
  if ((uVar11 & 1) == 0) {
    if (((*(byte *)(_UnityEngine_Object_TypeInfo_12d54e0 + 0x133) >> 2 & 1) != 0) &&
       (*(int *)(_UnityEngine_Object_TypeInfo_12d54e0 + 0xe0) == 0)) {
      native_sub_4327ec();
    }
    uVar11 = native_UnityEngine_Object__op_Inequality_8d76fc(lVar10,0,0);
    if ((uVar11 & 1) == 0) {
      return uVar11;
    }
    if (lVar10 != 0) {
      if (*(int *)(lVar10 + 0x140) == 0) {
        return uVar11;
      }
      lVar9 = native_UnityEngine_Component__GetComponent_ActiveAnimation__49daec
                        (lVar10,_Method_UnityEngine_Component_GetComponent_UIScrollView____12e2c08);
      lVar7 = native_UIRect__get_cachedTransform_c27c58(lVar10,0);
      lVar13 = native_UnityEngine_Component__get_transform_8da62c(param_4,0);
      if (((lVar13 != 0) &&
          (native_UnityEngine_Transform__get_position_77169c(lVar13,0), lVar7 != 0)) &&
         (fVar24 = (float)native_UnityEngine_Transform__InverseTransformPoint_7729a0(lVar7,0),
         lVar9 != 0)) {
        fVar21 = param_2;
        uVar11 = native_UIScrollView__get_canMoveHorizontally_c318a8(lVar9,0);
        if ((uVar11 & 1) == 0) {
          lVar7 = native_UIRect__get_cachedTransform_c27c58(lVar10,0);
          if (lVar7 == 0) goto LAB_009ddf90;
          fVar24 = (float)native_UnityEngine_Transform__get_localPosition_7717f4(lVar7,0);
        }
        else {
          fVar24 = -fVar24;
        }
        uVar11 = native_UIScrollView__get_canMoveVertically_c318e0(lVar9,0);
        if ((uVar11 & 1) == 0) {
          lVar9 = native_UIRect__get_cachedTransform_c27c58(lVar10,0);
          if (lVar9 == 0) goto LAB_009ddf90;
          native_UnityEngine_Transform__get_localPosition_7717f4(lVar9,0);
        }
        else {
          fVar21 = -param_2;
        }
        lVar9 = native_UIRect__get_cachedGameObject_c2d1c0(lVar10,0);
        if ((bRam000000000133f627 & 1) == 0) {
          native_sub_43273c(&Method_UnityEngine_GameObject_AddComponent_SpringPanel____12e4868,0);
          native_sub_43273c(&Method_UnityEngine_GameObject_GetComponent_SpringPanel____12e4a30);
          native_sub_43273c(&UnityEngine_Object_TypeInfo_12d54e0);
          bRam000000000133f627 = 1;
        }
        if (lVar9 != 0) {
          uVar11 = native_UnityEngine_GameObject__GetComponent_BE2_BlockSectionHeader_Custom__4a2214
                             (lVar9,
                              _Method_UnityEngine_GameObject_GetComponent_SpringPanel____12e4a30);
          if (((*(byte *)(_UnityEngine_Object_TypeInfo_12d54e0 + 0x133) >> 2 & 1) != 0) &&
             (*(int *)(_UnityEngine_Object_TypeInfo_12d54e0 + 0xe0) == 0)) {
            native_sub_4327ec(_UnityEngine_Object_TypeInfo_12d54e0);
          }
          uVar4 = native_UnityEngine_Object__op_Equality_8e9a3c(uVar11,0,0);
          if ((uVar4 & 1) != 0) {
            uVar11 = native_UnityEngine_GameObject__AddComponent_ActiveAnimation__4a2118
                               (lVar9,
                                _Method_UnityEngine_GameObject_AddComponent_SpringPanel____12e4868);
          }
          if (uVar11 != 0) {
            *(float *)(uVar11 + 0x18) = fVar24;
            *(float *)(uVar11 + 0x1c) = fVar21;
            *(float *)(uVar11 + 0x20) = -param_3;
            *(undefined4 *)(uVar11 + 0x24) = 0x40c00000;
            *(undefined8 *)(uVar11 + 0x28) = 0;
            native_sub_4326e0((undefined8 *)(uVar11 + 0x28),0);
            native_UnityEngine_Behaviour__set_enabled_8d7b0c(uVar11,1,0);
            return uVar11;
          }
        }
                    /* WARNING: Subroutine does not return */
        native_sub_432810();
      }
    }
LAB_009ddf90:
                    /* WARNING: Subroutine does not return */
    native_sub_432810();
  }
  if (lVar9 == 0) goto LAB_009ddf90;
  uVar11 = native_UnityEngine_Behaviour__get_enabled_8d7acc(lVar9,0);
  if ((uVar11 & 1) == 0) {
    return uVar11;
  }
  lVar10 = native_UnityEngine_Component__get_transform_8da62c(param_4,0);
  if ((bRam00000000013418b5 & 1) == 0) {
    native_sub_43273c(&UnityEngine_Object_TypeInfo_12d54e0);
    bRam00000000013418b5 = 1;
  }
  uVar8 = *(undefined8 *)(lVar9 + 0x30);
  if (((*(byte *)(_UnityEngine_Object_TypeInfo_12d54e0 + 0x133) >> 2 & 1) != 0) &&
     (*(int *)(_UnityEngine_Object_TypeInfo_12d54e0 + 0xe0) == 0)) {
    native_sub_4327ec();
  }
  uVar11 = native_UnityEngine_Object__op_Inequality_8d76fc(uVar8,0,0);
  if ((uVar11 & 1) == 0) {
    return uVar11;
  }
  if (*(long *)(lVar9 + 0x30) == 0) {
LAB_009ddccc:
                    /* WARNING: Subroutine does not return */
    native_sub_432810();
  }
  uVar8 = *(undefined8 *)(*(long *)(lVar9 + 0x30) + 0x98);
  if (((*(byte *)(_UnityEngine_Object_TypeInfo_12d54e0 + 0x133) >> 2 & 1) != 0) &&
     (*(int *)(_UnityEngine_Object_TypeInfo_12d54e0 + 0xe0) == 0)) {
    native_sub_4327ec();
  }
  uVar11 = native_UnityEngine_Object__op_Inequality_8d76fc(uVar8,0,0);
  if ((uVar11 & 1) == 0) {
    return uVar11;
  }
  if (((*(long *)(lVar9 + 0x30) == 0) ||
      (plVar6 = *(long **)(*(long *)(lVar9 + 0x30) + 0x98), plVar6 == (long *)0x0)) ||
     (lVar7 = (**(code **)(*plVar6 + 0x1e8))(plVar6,*(undefined8 *)(*plVar6 + 0x1f0)), lVar7 == 0))
  goto LAB_009ddccc;
  if (*(uint *)(lVar7 + 0x18) < 3) {
    uVar8 = native_sub_43283c();
                    /* WARNING: Subroutine does not return */
    native_sub_4327dc(uVar8,0);
  }
  uVar8 = *(undefined8 *)(lVar7 + 0x38);
  uVar22 = *(undefined8 *)(lVar7 + 0x20);
  fVar21 = ((float)((ulong)uVar8 >> 0x20) + (float)((ulong)uVar22 >> 0x20)) * 0.5;
  fVar23 = (*(float *)(lVar7 + 0x40) + *(float *)(lVar7 + 0x28)) * 0.5;
  fVar24 = fVar21;
  if ((bRam00000000013418b4 & 1) == 0) {
    native_sub_43273c(&UnityEngine_Object_TypeInfo_12d54e0);
    bRam00000000013418b4 = 1;
  }
  if (((*(byte *)(_UnityEngine_Object_TypeInfo_12d54e0 + 0x133) >> 2 & 1) != 0) &&
     (*(int *)(_UnityEngine_Object_TypeInfo_12d54e0 + 0xe0) == 0)) {
    native_sub_4327ec();
  }
  uVar11 = native_UnityEngine_Object__op_Inequality_8d76fc(lVar10,0,0);
  if ((uVar11 & 1) != 0) {
    uVar15 = *(undefined8 *)(lVar9 + 0x30);
    if (((*(byte *)(_UnityEngine_Object_TypeInfo_12d54e0 + 0x133) >> 2 & 1) != 0) &&
       (*(int *)(_UnityEngine_Object_TypeInfo_12d54e0 + 0xe0) == 0)) {
      native_sub_4327ec();
    }
    uVar11 = native_UnityEngine_Object__op_Inequality_8d76fc(uVar15,0,0);
    if ((uVar11 & 1) != 0) {
      if (*(long *)(lVar9 + 0x30) == 0) goto LAB_009ddba0;
      uVar15 = *(undefined8 *)(*(long *)(lVar9 + 0x30) + 0x98);
      if (((*(byte *)(_UnityEngine_Object_TypeInfo_12d54e0 + 0x133) >> 2 & 1) != 0) &&
         (*(int *)(_UnityEngine_Object_TypeInfo_12d54e0 + 0xe0) == 0)) {
        native_sub_4327ec();
      }
      uVar11 = native_UnityEngine_Object__op_Inequality_8d76fc(uVar15,0,0);
      if ((uVar11 & 1) != 0) {
        if (((*(long *)(lVar9 + 0x30) == 0) ||
            (lVar7 = *(long *)(*(long *)(lVar9 + 0x30) + 0x98), lVar7 == 0)) ||
           (lVar7 = native_UIRect__get_cachedTransform_c27c58(lVar7,0), lVar10 == 0))
        goto LAB_009ddba0;
        uVar15 = native_UnityEngine_Component__get_gameObject_8da66c(lVar10,0);
        *(undefined8 *)(lVar9 + 0x38) = uVar15;
        native_sub_4326e0();
        native_UnityEngine_Transform__get_position_77169c(lVar10,0);
        if (lVar7 == 0) goto LAB_009ddba0;
        fVar18 = (float)native_UnityEngine_Transform__InverseTransformPoint_7729a0(lVar7,0);
        fVar19 = (float)native_UnityEngine_Transform__InverseTransformPoint_7729a0
                                  (CONCAT44(fVar21,((float)uVar8 + (float)uVar22) * 0.5),lVar7,0);
        if (*(long *)(lVar9 + 0x30) == 0) goto LAB_009ddba0;
        fVar25 = fVar21;
        uVar11 = native_UIScrollView__get_canMoveHorizontally_c318a8(*(long *)(lVar9 + 0x30),0);
        if (*(long *)(lVar9 + 0x30) == 0) goto LAB_009ddba0;
        fVar18 = fVar18 - fVar19;
        fVar24 = fVar24 - fVar21;
        if ((uVar11 & 1) == 0) {
          fVar18 = 0.0;
        }
        uVar11 = native_UIScrollView__get_canMoveVertically_c318e0(*(long *)(lVar9 + 0x30),0);
        if ((uVar11 & 1) == 0) {
          fVar24 = 0.0;
        }
        fVar21 = (float)native_UnityEngine_Transform__get_localPosition_7717f4(lVar7,0);
        fVar21 = fVar21 - fVar18;
        fVar25 = fVar25 - fVar24;
        dVar20 = (double)func_0x002c9600((double)fVar21,&dStack_58);
        if (0.0 <= fVar21) {
          if (dVar20 == 0.5) {
            fVar24 = 1.0;
            goto LAB_009dda44;
          }
          fVar21 = (float)(int)(fVar21 + 0.5);
        }
        else if (dVar20 == -0.5) {
          fVar24 = -1.0;
LAB_009dda44:
          fVar21 = (float)dStack_58;
          if (((long)dStack_58 & 1U) != 0) {
            fVar21 = (float)dStack_58 + fVar24;
          }
        }
        else {
          fVar21 = (float)(int)(fVar21 + -0.5);
        }
        dVar20 = (double)func_0x002c9600((double)fVar25,&dStack_58);
        if (0.0 <= fVar25) {
          if (dVar20 == 0.5) {
            fVar24 = 1.0;
            goto LAB_009ddab8;
          }
          fVar19 = (float)(int)(fVar25 + 0.5);
        }
        else if (dVar20 == -0.5) {
          fVar24 = -1.0;
LAB_009ddab8:
          fVar19 = (float)dStack_58;
          if (((long)dStack_58 & 1U) != 0) {
            fVar19 = (float)dStack_58 + fVar24;
          }
        }
        else {
          fVar19 = (float)(int)(fVar25 + -0.5);
        }
        dVar20 = (double)func_0x002c9600((double)fVar23,&dStack_58);
        if (0.0 <= fVar23) {
          if (dVar20 == 0.5) {
            fVar24 = 1.0;
            goto LAB_009ddb2c;
          }
          fVar23 = (float)(int)(fVar23 + 0.5);
        }
        else if (dVar20 == -0.5) {
          fVar24 = -1.0;
LAB_009ddb2c:
          fVar23 = (float)dStack_58;
          if (((long)dStack_58 & 1U) != 0) {
            fVar23 = (float)dStack_58 + fVar24;
          }
        }
        else {
          fVar23 = (float)(int)(fVar23 + -0.5);
        }
        if ((*(long *)(lVar9 + 0x30) == 0) ||
           (lVar10 = *(long *)(*(long *)(lVar9 + 0x30) + 0x98), lVar10 == 0)) {
LAB_009ddba0:
                    /* WARNING: Subroutine does not return */
          native_sub_432810();
        }
        uVar8 = native_UIRect__get_cachedGameObject_c2d1c0(lVar10,0);
        lVar10 = native_SpringPanel__Begin_73ea10
                           (fVar21,fVar19,fVar23,*(undefined4 *)(lVar9 + 0x18),uVar8,0);
        if (lVar10 == 0) goto LAB_009ddba0;
        uVar8 = *(undefined8 *)(lVar9 + 0x20);
        puVar5 = (undefined8 *)(lVar10 + 0x28);
        *puVar5 = uVar8;
        goto LAB_009dd9e4;
      }
    }
  }
  puVar5 = (undefined8 *)(lVar9 + 0x38);
  *puVar5 = 0;
  uVar8 = 0;
LAB_009dd9e4:
  native_sub_4326e0(puVar5,uVar8);
  dVar20 = *(double *)(lVar9 + 0x28);
  if (dVar20 == 0.0) {
    return 0;
  }
  plVar6 = *(long **)(lVar9 + 0x38);
  dStack_58 = dVar20;
  lVar9 = *(long *)((long)dVar20 + 0x68);
  if (lVar9 == 0) {
    pdVar17 = &dStack_58;
    lVar10 = 1;
  }
  else {
    lVar10 = *(long *)(lVar9 + 0x18);
    if (lVar10 == 0) {
      return (ulong)dVar20;
    }
    pdVar17 = (double *)(lVar9 + 0x20);
  }
  lVar9 = 0;
  do {
    dVar12 = pdVar17[lVar9];
    plVar1 = *(long **)((long)dVar12 + 0x20);
    lVar7 = *(long *)((long)dVar12 + 0x28);
    pcVar16 = *(code **)((long)dVar12 + 0x10);
    if (*(short *)(lVar7 + 0x48) == -1) {
      native_sub_4327f4(lVar7);
    }
    uVar11 = native_sub_432768(lVar7);
    bVar3 = *(char *)(lVar7 + 0x4a) != '\x01';
    if ((uVar11 & 1) == 0) {
      if (bVar3) {
        if ((*(short *)(lVar7 + 0x48) == -1) || (*(long *)((long)dVar20 + 0x18) == 0))
        goto LAB_005543d8;
        uVar11 = native_sub_432760(lVar7);
        uVar4 = native_sub_432b64(lVar7);
        if ((uVar11 & 1) == 0) {
          uVar2 = *(ushort *)(lVar7 + 0x48);
          if ((uVar4 & 1) == 0) {
            lVar7 = *plVar6 + (ulong)uVar2 * 0x10;
            uVar11 = (**(code **)(lVar7 + 0x138))(plVar6,*(undefined8 *)(lVar7 + 0x140));
            goto LAB_005543e4;
          }
          lVar7 = native_sub_432764(lVar7);
          lVar13 = *plVar6;
          if ((ulong)*(ushort *)(lVar13 + 0x12a) != 0) {
            uVar11 = 0;
            piVar14 = (int *)(*(long *)(lVar13 + 0xb0) + 8);
            do {
              if (*(long *)(piVar14 + -2) == lVar7) {
                puVar5 = (undefined8 *)(lVar13 + (long)(int)(*piVar14 + (uint)uVar2) * 0x10 + 0x138)
                ;
                goto LAB_0055420c;
              }
              uVar11 = uVar11 + 1;
              piVar14 = piVar14 + 4;
            } while (uVar11 < *(ushort *)(lVar13 + 0x12a));
          }
          puVar5 = (undefined8 *)native_sub_3c9b34(plVar6,lVar7,(ulong)uVar2);
LAB_0055420c:
          pcVar16 = (code *)*puVar5;
          puVar5 = (undefined8 *)puVar5[1];
        }
        else {
          if ((uVar4 & 1) == 0) {
            uVar8 = *(undefined8 *)(*plVar6 + (ulong)*(ushort *)(lVar7 + 0x48) * 0x10 + 0x140);
          }
          else {
            lVar13 = *plVar6;
            if ((ulong)*(ushort *)(lVar13 + 0x12a) != 0) {
              uVar11 = 0;
              piVar14 = (int *)(*(long *)(lVar13 + 0xb0) + 8);
              do {
                if (*(long *)(piVar14 + -2) == *(long *)(lVar7 + 0x18)) {
                  lVar13 = lVar13 + (long)(int)(*piVar14 + (uint)*(ushort *)(lVar7 + 0x48)) * 0x10 +
                           0x138;
                  goto LAB_005541e4;
                }
                uVar11 = uVar11 + 1;
                piVar14 = piVar14 + 4;
              } while (uVar11 < *(ushort *)(lVar13 + 0x12a));
            }
            lVar13 = native_sub_3c9b34(plVar6);
LAB_005541e4:
            uVar8 = *(undefined8 *)(lVar13 + 8);
          }
          puVar5 = (undefined8 *)native_sub_4327e8(uVar8,lVar7);
          pcVar16 = (code *)*puVar5;
        }
        uVar11 = (*pcVar16)(plVar6,puVar5);
      }
      else {
        if ((((plVar1 == (long *)0x0) || (*(short *)(lVar7 + 0x48) == -1)) ||
            ((*(byte *)(*plVar1 + 0x115) & 1) != 0)) || (*(long *)((long)dVar20 + 0x18) == 0))
        goto LAB_0055434c;
        uVar11 = native_sub_432760(lVar7);
        uVar4 = native_sub_432b64(lVar7);
        if ((uVar11 & 1) == 0) {
          uVar2 = *(ushort *)(lVar7 + 0x48);
          if ((uVar4 & 1) == 0) {
            lVar7 = *plVar1 + (ulong)uVar2 * 0x10;
            uVar11 = (**(code **)(lVar7 + 0x138))(plVar1,plVar6,*(undefined8 *)(lVar7 + 0x140));
            goto LAB_005543e4;
          }
          lVar7 = native_sub_432764(lVar7);
          lVar13 = *plVar1;
          if ((ulong)*(ushort *)(lVar13 + 0x12a) != 0) {
            uVar11 = 0;
            piVar14 = (int *)(*(long *)(lVar13 + 0xb0) + 8);
            do {
              if (*(long *)(piVar14 + -2) == lVar7) {
                puVar5 = (undefined8 *)(lVar13 + (long)(int)(*piVar14 + (uint)uVar2) * 0x10 + 0x138)
                ;
                goto LAB_00554270;
              }
              uVar11 = uVar11 + 1;
              piVar14 = piVar14 + 4;
            } while (uVar11 < *(ushort *)(lVar13 + 0x12a));
          }
          puVar5 = (undefined8 *)native_sub_3c9b34(plVar1,lVar7,(ulong)uVar2);
LAB_00554270:
          pcVar16 = (code *)*puVar5;
          puVar5 = (undefined8 *)puVar5[1];
        }
        else {
          if ((uVar4 & 1) == 0) {
            uVar8 = *(undefined8 *)(*plVar1 + (ulong)*(ushort *)(lVar7 + 0x48) * 0x10 + 0x140);
          }
          else {
            lVar13 = *plVar1;
            if ((ulong)*(ushort *)(lVar13 + 0x12a) != 0) {
              uVar11 = 0;
              piVar14 = (int *)(*(long *)(lVar13 + 0xb0) + 8);
              do {
                if (*(long *)(piVar14 + -2) == *(long *)(lVar7 + 0x18)) {
                  lVar13 = lVar13 + (long)(int)(*piVar14 + (uint)*(ushort *)(lVar7 + 0x48)) * 0x10 +
                           0x138;
                  goto LAB_00554248;
                }
                uVar11 = uVar11 + 1;
                piVar14 = piVar14 + 4;
              } while (uVar11 < *(ushort *)(lVar13 + 0x12a));
            }
            lVar13 = native_sub_3c9b34(plVar1);
LAB_00554248:
            uVar8 = *(undefined8 *)(lVar13 + 8);
          }
          puVar5 = (undefined8 *)native_sub_4327e8(uVar8,lVar7);
          pcVar16 = (code *)*puVar5;
        }
        uVar11 = (*pcVar16)(plVar1,plVar6,puVar5);
      }
    }
    else if (bVar3) {
LAB_0055434c:
      uVar11 = (*pcVar16)(plVar1,plVar6,lVar7);
    }
    else {
LAB_005543d8:
      uVar11 = (*pcVar16)(plVar6,lVar7);
    }
LAB_005543e4:
    lVar9 = lVar9 + 1;
    if (lVar9 == lVar10) {
      return uVar11;
    }
  } while( true );
}



/* UICenterOnClick$$.ctor @ 0x9ddf94
 * void UICenterOnClick___ctor (UICenterOnClick_o* __this, const MethodInfo* method); */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* UICenterOnClick$$.ctor
   void UICenterOnClick___ctor (UICenterOnClick_o* __this, const MethodInfo* method); */

undefined1  [16] native_UICenterOnClick___ctor_9ddf94(ulong param_1)

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


