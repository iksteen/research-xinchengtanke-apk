/* ARM64 IL2CPP native pseudocode from Ghidra.
 * Recovered implementation, not original C# source.
 * Function boundaries follow the IL2CPP method address table. */


/* UIEventListener$$get_isColliderEnabled @ 0x9e9d04
 * bool UIEventListener__get_isColliderEnabled (UIEventListener_o* __this, const MethodInfo* method); */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* UIEventListener$$get_isColliderEnabled
   bool UIEventListener__get_isColliderEnabled (UIEventListener_o* __this, const MethodInfo*
   method); */

undefined8 native_UIEventListener__get_isColliderEnabled_9e9d04(long param_1)

{
  long lVar1;
  ulong uVar2;
  undefined8 uVar3;
  
  if ((bRam0000000001341919 & 1) == 0) {
    native_sub_43273c(&Method_UnityEngine_Component_GetComponent_Collider2D____12e29c8);
    native_sub_43273c(&Method_UnityEngine_Component_GetComponent_Collider____12e29c0);
    native_sub_43273c(&UnityEngine_Object_TypeInfo_12d54e0);
    bRam0000000001341919 = 1;
  }
  if (*(char *)(param_1 + 0x98) == '\0') {
    return 1;
  }
  lVar1 = native_UnityEngine_Component__GetComponent_ActiveAnimation__49daec
                    (param_1,_Method_UnityEngine_Component_GetComponent_Collider____12e29c0);
  if (((*(byte *)(_UnityEngine_Object_TypeInfo_12d54e0 + 0x133) >> 2 & 1) != 0) &&
     (*(int *)(_UnityEngine_Object_TypeInfo_12d54e0 + 0xe0) == 0)) {
    native_sub_4327ec(_UnityEngine_Object_TypeInfo_12d54e0);
  }
  uVar2 = native_UnityEngine_Object__op_Inequality_8d76fc(lVar1,0,0);
  if ((uVar2 & 1) == 0) {
    lVar1 = native_UnityEngine_Component__GetComponent_ActiveAnimation__49daec
                      (param_1,_Method_UnityEngine_Component_GetComponent_Collider2D____12e29c8);
    if (((*(byte *)(_UnityEngine_Object_TypeInfo_12d54e0 + 0x133) >> 2 & 1) != 0) &&
       (*(int *)(_UnityEngine_Object_TypeInfo_12d54e0 + 0xe0) == 0)) {
      native_sub_4327ec(_UnityEngine_Object_TypeInfo_12d54e0);
    }
    uVar2 = native_UnityEngine_Object__op_Inequality_8d76fc(lVar1,0,0);
    if ((uVar2 & 1) == 0) {
      return 0;
    }
    if (lVar1 != 0) {
      if (pcRam0000000001340940 == (code *)0x0) {
        pcRam0000000001340940 = (code *)native_sub_4326f0(&UNK_00e2c6dd);
      }
                    /* WARNING: Could not recover jumptable at 0x008d7b08. Too many branches */
                    /* WARNING: Treating indirect jump as call */
      uVar3 = (*pcRam0000000001340940)(lVar1);
      return uVar3;
    }
  }
  else if (lVar1 != 0) {
    if (pcRam0000000001343a68 == (code *)0x0) {
      pcRam0000000001343a68 = (code *)native_sub_4326f0(&UNK_00ecb640);
    }
                    /* WARNING: Could not recover jumptable at 0x00dbac48. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    uVar3 = (*pcRam0000000001343a68)(lVar1);
    return uVar3;
  }
                    /* WARNING: Subroutine does not return */
  native_sub_432810();
}



/* UIEventListener$$OnSubmit @ 0x9e9e48
 * void UIEventListener__OnSubmit (UIEventListener_o* __this, const MethodInfo* method); */

/* UIEventListener$$OnSubmit
   void UIEventListener__OnSubmit (UIEventListener_o* __this, const MethodInfo* method); */

void native_UIEventListener__OnSubmit_9e9e48(long param_1)

{
  long *plVar1;
  ushort uVar2;
  bool bVar3;
  long lVar4;
  undefined8 uVar5;
  undefined8 *puVar6;
  ulong uVar7;
  ulong uVar8;
  long *plVar9;
  long lVar10;
  long lVar11;
  int *piVar12;
  long lVar13;
  code *pcVar14;
  long lVar15;
  long *plVar16;
  long lStack_58;
  
  uVar8 = native_UIEventListener__get_isColliderEnabled_9e9d04();
  if (((uVar8 & 1) == 0) || (lVar13 = *(long *)(param_1 + 0x20), lVar13 == 0)) {
    return;
  }
  plVar9 = (long *)native_UnityEngine_Component__get_gameObject_8da66c(param_1,0);
  lStack_58 = lVar13;
  lVar10 = *(long *)(lVar13 + 0x68);
  if (lVar10 == 0) {
    plVar16 = &lStack_58;
    lVar15 = 1;
  }
  else {
    lVar15 = *(long *)(lVar10 + 0x18);
    if (lVar15 == 0) {
      return;
    }
    plVar16 = (long *)(lVar10 + 0x20);
  }
  lVar10 = 0;
  do {
    lVar11 = plVar16[lVar10];
    plVar1 = *(long **)(lVar11 + 0x20);
    lVar4 = *(long *)(lVar11 + 0x28);
    pcVar14 = *(code **)(lVar11 + 0x10);
    if (*(short *)(lVar4 + 0x48) == -1) {
      native_sub_4327f4(lVar4);
    }
    uVar8 = native_sub_432768(lVar4);
    bVar3 = *(char *)(lVar4 + 0x4a) != '\x01';
    if ((uVar8 & 1) == 0) {
      if (bVar3) {
        if ((*(short *)(lVar4 + 0x48) == -1) || (*(long *)(lVar13 + 0x18) == 0)) goto LAB_00556754;
        uVar8 = native_sub_432760(lVar4);
        uVar7 = native_sub_432b64(lVar4);
        if ((uVar8 & 1) == 0) {
          uVar2 = *(ushort *)(lVar4 + 0x48);
          if ((uVar7 & 1) == 0) {
            lVar4 = *plVar9 + (ulong)uVar2 * 0x10;
            (**(code **)(lVar4 + 0x138))(plVar9,*(undefined8 *)(lVar4 + 0x140));
            goto LAB_00556760;
          }
          lVar4 = native_sub_432764(lVar4);
          lVar11 = *plVar9;
          if ((ulong)*(ushort *)(lVar11 + 0x12a) != 0) {
            uVar8 = 0;
            piVar12 = (int *)(*(long *)(lVar11 + 0xb0) + 8);
            do {
              if (*(long *)(piVar12 + -2) == lVar4) {
                puVar6 = (undefined8 *)(lVar11 + (long)(int)(*piVar12 + (uint)uVar2) * 0x10 + 0x138)
                ;
                goto LAB_00556588;
              }
              uVar8 = uVar8 + 1;
              piVar12 = piVar12 + 4;
            } while (uVar8 < *(ushort *)(lVar11 + 0x12a));
          }
          puVar6 = (undefined8 *)native_sub_3c9b34(plVar9,lVar4,(ulong)uVar2);
LAB_00556588:
          pcVar14 = (code *)*puVar6;
          puVar6 = (undefined8 *)puVar6[1];
        }
        else {
          if ((uVar7 & 1) == 0) {
            uVar5 = *(undefined8 *)(*plVar9 + (ulong)*(ushort *)(lVar4 + 0x48) * 0x10 + 0x140);
          }
          else {
            lVar11 = *plVar9;
            if ((ulong)*(ushort *)(lVar11 + 0x12a) != 0) {
              uVar8 = 0;
              piVar12 = (int *)(*(long *)(lVar11 + 0xb0) + 8);
              do {
                if (*(long *)(piVar12 + -2) == *(long *)(lVar4 + 0x18)) {
                  lVar11 = lVar11 + (long)(int)(*piVar12 + (uint)*(ushort *)(lVar4 + 0x48)) * 0x10 +
                           0x138;
                  goto LAB_00556560;
                }
                uVar8 = uVar8 + 1;
                piVar12 = piVar12 + 4;
              } while (uVar8 < *(ushort *)(lVar11 + 0x12a));
            }
            lVar11 = native_sub_3c9b34(plVar9);
LAB_00556560:
            uVar5 = *(undefined8 *)(lVar11 + 8);
          }
          puVar6 = (undefined8 *)native_sub_4327e8(uVar5,lVar4);
          pcVar14 = (code *)*puVar6;
        }
        (*pcVar14)(plVar9,puVar6);
      }
      else {
        if ((((plVar1 == (long *)0x0) || (*(short *)(lVar4 + 0x48) == -1)) ||
            ((*(byte *)(*plVar1 + 0x115) & 1) != 0)) || (*(long *)(lVar13 + 0x18) == 0))
        goto LAB_005566c8;
        uVar8 = native_sub_432760(lVar4);
        uVar7 = native_sub_432b64(lVar4);
        if ((uVar8 & 1) == 0) {
          uVar2 = *(ushort *)(lVar4 + 0x48);
          if ((uVar7 & 1) == 0) {
            lVar4 = *plVar1 + (ulong)uVar2 * 0x10;
            (**(code **)(lVar4 + 0x138))(plVar1,plVar9,*(undefined8 *)(lVar4 + 0x140));
            goto LAB_00556760;
          }
          lVar4 = native_sub_432764(lVar4);
          lVar11 = *plVar1;
          if ((ulong)*(ushort *)(lVar11 + 0x12a) != 0) {
            uVar8 = 0;
            piVar12 = (int *)(*(long *)(lVar11 + 0xb0) + 8);
            do {
              if (*(long *)(piVar12 + -2) == lVar4) {
                puVar6 = (undefined8 *)(lVar11 + (long)(int)(*piVar12 + (uint)uVar2) * 0x10 + 0x138)
                ;
                goto LAB_005565ec;
              }
              uVar8 = uVar8 + 1;
              piVar12 = piVar12 + 4;
            } while (uVar8 < *(ushort *)(lVar11 + 0x12a));
          }
          puVar6 = (undefined8 *)native_sub_3c9b34(plVar1,lVar4,(ulong)uVar2);
LAB_005565ec:
          pcVar14 = (code *)*puVar6;
          puVar6 = (undefined8 *)puVar6[1];
        }
        else {
          if ((uVar7 & 1) == 0) {
            uVar5 = *(undefined8 *)(*plVar1 + (ulong)*(ushort *)(lVar4 + 0x48) * 0x10 + 0x140);
          }
          else {
            lVar11 = *plVar1;
            if ((ulong)*(ushort *)(lVar11 + 0x12a) != 0) {
              uVar8 = 0;
              piVar12 = (int *)(*(long *)(lVar11 + 0xb0) + 8);
              do {
                if (*(long *)(piVar12 + -2) == *(long *)(lVar4 + 0x18)) {
                  lVar11 = lVar11 + (long)(int)(*piVar12 + (uint)*(ushort *)(lVar4 + 0x48)) * 0x10 +
                           0x138;
                  goto LAB_005565c4;
                }
                uVar8 = uVar8 + 1;
                piVar12 = piVar12 + 4;
              } while (uVar8 < *(ushort *)(lVar11 + 0x12a));
            }
            lVar11 = native_sub_3c9b34(plVar1);
LAB_005565c4:
            uVar5 = *(undefined8 *)(lVar11 + 8);
          }
          puVar6 = (undefined8 *)native_sub_4327e8(uVar5,lVar4);
          pcVar14 = (code *)*puVar6;
        }
        (*pcVar14)(plVar1,plVar9,puVar6);
      }
    }
    else if (bVar3) {
LAB_005566c8:
      (*pcVar14)(plVar1,plVar9,lVar4);
    }
    else {
LAB_00556754:
      (*pcVar14)(plVar9,lVar4);
    }
LAB_00556760:
    lVar10 = lVar10 + 1;
    if (lVar10 == lVar15) {
      return;
    }
  } while( true );
}



/* UIEventListener$$OnClick @ 0x9e9e98
 * void UIEventListener__OnClick (UIEventListener_o* __this, const MethodInfo* method); */

/* UIEventListener$$OnClick
   void UIEventListener__OnClick (UIEventListener_o* __this, const MethodInfo* method); */

void native_UIEventListener__OnClick_9e9e98(long param_1)

{
  long *plVar1;
  ushort uVar2;
  bool bVar3;
  long lVar4;
  undefined8 uVar5;
  undefined8 *puVar6;
  ulong uVar7;
  ulong uVar8;
  long *plVar9;
  long lVar10;
  long lVar11;
  int *piVar12;
  long lVar13;
  code *pcVar14;
  long lVar15;
  long *plVar16;
  long lStack_58;
  
  uVar8 = native_UIEventListener__get_isColliderEnabled_9e9d04();
  if (((uVar8 & 1) == 0) || (lVar13 = *(long *)(param_1 + 0x28), lVar13 == 0)) {
    return;
  }
  plVar9 = (long *)native_UnityEngine_Component__get_gameObject_8da66c(param_1,0);
  lStack_58 = lVar13;
  lVar10 = *(long *)(lVar13 + 0x68);
  if (lVar10 == 0) {
    plVar16 = &lStack_58;
    lVar15 = 1;
  }
  else {
    lVar15 = *(long *)(lVar10 + 0x18);
    if (lVar15 == 0) {
      return;
    }
    plVar16 = (long *)(lVar10 + 0x20);
  }
  lVar10 = 0;
  do {
    lVar11 = plVar16[lVar10];
    plVar1 = *(long **)(lVar11 + 0x20);
    lVar4 = *(long *)(lVar11 + 0x28);
    pcVar14 = *(code **)(lVar11 + 0x10);
    if (*(short *)(lVar4 + 0x48) == -1) {
      native_sub_4327f4(lVar4);
    }
    uVar8 = native_sub_432768(lVar4);
    bVar3 = *(char *)(lVar4 + 0x4a) != '\x01';
    if ((uVar8 & 1) == 0) {
      if (bVar3) {
        if ((*(short *)(lVar4 + 0x48) == -1) || (*(long *)(lVar13 + 0x18) == 0)) goto LAB_00556754;
        uVar8 = native_sub_432760(lVar4);
        uVar7 = native_sub_432b64(lVar4);
        if ((uVar8 & 1) == 0) {
          uVar2 = *(ushort *)(lVar4 + 0x48);
          if ((uVar7 & 1) == 0) {
            lVar4 = *plVar9 + (ulong)uVar2 * 0x10;
            (**(code **)(lVar4 + 0x138))(plVar9,*(undefined8 *)(lVar4 + 0x140));
            goto LAB_00556760;
          }
          lVar4 = native_sub_432764(lVar4);
          lVar11 = *plVar9;
          if ((ulong)*(ushort *)(lVar11 + 0x12a) != 0) {
            uVar8 = 0;
            piVar12 = (int *)(*(long *)(lVar11 + 0xb0) + 8);
            do {
              if (*(long *)(piVar12 + -2) == lVar4) {
                puVar6 = (undefined8 *)(lVar11 + (long)(int)(*piVar12 + (uint)uVar2) * 0x10 + 0x138)
                ;
                goto LAB_00556588;
              }
              uVar8 = uVar8 + 1;
              piVar12 = piVar12 + 4;
            } while (uVar8 < *(ushort *)(lVar11 + 0x12a));
          }
          puVar6 = (undefined8 *)native_sub_3c9b34(plVar9,lVar4,(ulong)uVar2);
LAB_00556588:
          pcVar14 = (code *)*puVar6;
          puVar6 = (undefined8 *)puVar6[1];
        }
        else {
          if ((uVar7 & 1) == 0) {
            uVar5 = *(undefined8 *)(*plVar9 + (ulong)*(ushort *)(lVar4 + 0x48) * 0x10 + 0x140);
          }
          else {
            lVar11 = *plVar9;
            if ((ulong)*(ushort *)(lVar11 + 0x12a) != 0) {
              uVar8 = 0;
              piVar12 = (int *)(*(long *)(lVar11 + 0xb0) + 8);
              do {
                if (*(long *)(piVar12 + -2) == *(long *)(lVar4 + 0x18)) {
                  lVar11 = lVar11 + (long)(int)(*piVar12 + (uint)*(ushort *)(lVar4 + 0x48)) * 0x10 +
                           0x138;
                  goto LAB_00556560;
                }
                uVar8 = uVar8 + 1;
                piVar12 = piVar12 + 4;
              } while (uVar8 < *(ushort *)(lVar11 + 0x12a));
            }
            lVar11 = native_sub_3c9b34(plVar9);
LAB_00556560:
            uVar5 = *(undefined8 *)(lVar11 + 8);
          }
          puVar6 = (undefined8 *)native_sub_4327e8(uVar5,lVar4);
          pcVar14 = (code *)*puVar6;
        }
        (*pcVar14)(plVar9,puVar6);
      }
      else {
        if ((((plVar1 == (long *)0x0) || (*(short *)(lVar4 + 0x48) == -1)) ||
            ((*(byte *)(*plVar1 + 0x115) & 1) != 0)) || (*(long *)(lVar13 + 0x18) == 0))
        goto LAB_005566c8;
        uVar8 = native_sub_432760(lVar4);
        uVar7 = native_sub_432b64(lVar4);
        if ((uVar8 & 1) == 0) {
          uVar2 = *(ushort *)(lVar4 + 0x48);
          if ((uVar7 & 1) == 0) {
            lVar4 = *plVar1 + (ulong)uVar2 * 0x10;
            (**(code **)(lVar4 + 0x138))(plVar1,plVar9,*(undefined8 *)(lVar4 + 0x140));
            goto LAB_00556760;
          }
          lVar4 = native_sub_432764(lVar4);
          lVar11 = *plVar1;
          if ((ulong)*(ushort *)(lVar11 + 0x12a) != 0) {
            uVar8 = 0;
            piVar12 = (int *)(*(long *)(lVar11 + 0xb0) + 8);
            do {
              if (*(long *)(piVar12 + -2) == lVar4) {
                puVar6 = (undefined8 *)(lVar11 + (long)(int)(*piVar12 + (uint)uVar2) * 0x10 + 0x138)
                ;
                goto LAB_005565ec;
              }
              uVar8 = uVar8 + 1;
              piVar12 = piVar12 + 4;
            } while (uVar8 < *(ushort *)(lVar11 + 0x12a));
          }
          puVar6 = (undefined8 *)native_sub_3c9b34(plVar1,lVar4,(ulong)uVar2);
LAB_005565ec:
          pcVar14 = (code *)*puVar6;
          puVar6 = (undefined8 *)puVar6[1];
        }
        else {
          if ((uVar7 & 1) == 0) {
            uVar5 = *(undefined8 *)(*plVar1 + (ulong)*(ushort *)(lVar4 + 0x48) * 0x10 + 0x140);
          }
          else {
            lVar11 = *plVar1;
            if ((ulong)*(ushort *)(lVar11 + 0x12a) != 0) {
              uVar8 = 0;
              piVar12 = (int *)(*(long *)(lVar11 + 0xb0) + 8);
              do {
                if (*(long *)(piVar12 + -2) == *(long *)(lVar4 + 0x18)) {
                  lVar11 = lVar11 + (long)(int)(*piVar12 + (uint)*(ushort *)(lVar4 + 0x48)) * 0x10 +
                           0x138;
                  goto LAB_005565c4;
                }
                uVar8 = uVar8 + 1;
                piVar12 = piVar12 + 4;
              } while (uVar8 < *(ushort *)(lVar11 + 0x12a));
            }
            lVar11 = native_sub_3c9b34(plVar1);
LAB_005565c4:
            uVar5 = *(undefined8 *)(lVar11 + 8);
          }
          puVar6 = (undefined8 *)native_sub_4327e8(uVar5,lVar4);
          pcVar14 = (code *)*puVar6;
        }
        (*pcVar14)(plVar1,plVar9,puVar6);
      }
    }
    else if (bVar3) {
LAB_005566c8:
      (*pcVar14)(plVar1,plVar9,lVar4);
    }
    else {
LAB_00556754:
      (*pcVar14)(plVar9,lVar4);
    }
LAB_00556760:
    lVar10 = lVar10 + 1;
    if (lVar10 == lVar15) {
      return;
    }
  } while( true );
}



/* UIEventListener$$OnDoubleClick @ 0x9e9ee8
 * void UIEventListener__OnDoubleClick (UIEventListener_o* __this, const MethodInfo* method); */

/* UIEventListener$$OnDoubleClick
   void UIEventListener__OnDoubleClick (UIEventListener_o* __this, const MethodInfo* method); */

void native_UIEventListener__OnDoubleClick_9e9ee8(long param_1)

{
  long *plVar1;
  ushort uVar2;
  bool bVar3;
  long lVar4;
  undefined8 uVar5;
  undefined8 *puVar6;
  ulong uVar7;
  ulong uVar8;
  long *plVar9;
  long lVar10;
  long lVar11;
  int *piVar12;
  long lVar13;
  code *pcVar14;
  long lVar15;
  long *plVar16;
  long lStack_58;
  
  uVar8 = native_UIEventListener__get_isColliderEnabled_9e9d04();
  if (((uVar8 & 1) == 0) || (lVar13 = *(long *)(param_1 + 0x30), lVar13 == 0)) {
    return;
  }
  plVar9 = (long *)native_UnityEngine_Component__get_gameObject_8da66c(param_1,0);
  lStack_58 = lVar13;
  lVar10 = *(long *)(lVar13 + 0x68);
  if (lVar10 == 0) {
    plVar16 = &lStack_58;
    lVar15 = 1;
  }
  else {
    lVar15 = *(long *)(lVar10 + 0x18);
    if (lVar15 == 0) {
      return;
    }
    plVar16 = (long *)(lVar10 + 0x20);
  }
  lVar10 = 0;
  do {
    lVar11 = plVar16[lVar10];
    plVar1 = *(long **)(lVar11 + 0x20);
    lVar4 = *(long *)(lVar11 + 0x28);
    pcVar14 = *(code **)(lVar11 + 0x10);
    if (*(short *)(lVar4 + 0x48) == -1) {
      native_sub_4327f4(lVar4);
    }
    uVar8 = native_sub_432768(lVar4);
    bVar3 = *(char *)(lVar4 + 0x4a) != '\x01';
    if ((uVar8 & 1) == 0) {
      if (bVar3) {
        if ((*(short *)(lVar4 + 0x48) == -1) || (*(long *)(lVar13 + 0x18) == 0)) goto LAB_00556754;
        uVar8 = native_sub_432760(lVar4);
        uVar7 = native_sub_432b64(lVar4);
        if ((uVar8 & 1) == 0) {
          uVar2 = *(ushort *)(lVar4 + 0x48);
          if ((uVar7 & 1) == 0) {
            lVar4 = *plVar9 + (ulong)uVar2 * 0x10;
            (**(code **)(lVar4 + 0x138))(plVar9,*(undefined8 *)(lVar4 + 0x140));
            goto LAB_00556760;
          }
          lVar4 = native_sub_432764(lVar4);
          lVar11 = *plVar9;
          if ((ulong)*(ushort *)(lVar11 + 0x12a) != 0) {
            uVar8 = 0;
            piVar12 = (int *)(*(long *)(lVar11 + 0xb0) + 8);
            do {
              if (*(long *)(piVar12 + -2) == lVar4) {
                puVar6 = (undefined8 *)(lVar11 + (long)(int)(*piVar12 + (uint)uVar2) * 0x10 + 0x138)
                ;
                goto LAB_00556588;
              }
              uVar8 = uVar8 + 1;
              piVar12 = piVar12 + 4;
            } while (uVar8 < *(ushort *)(lVar11 + 0x12a));
          }
          puVar6 = (undefined8 *)native_sub_3c9b34(plVar9,lVar4,(ulong)uVar2);
LAB_00556588:
          pcVar14 = (code *)*puVar6;
          puVar6 = (undefined8 *)puVar6[1];
        }
        else {
          if ((uVar7 & 1) == 0) {
            uVar5 = *(undefined8 *)(*plVar9 + (ulong)*(ushort *)(lVar4 + 0x48) * 0x10 + 0x140);
          }
          else {
            lVar11 = *plVar9;
            if ((ulong)*(ushort *)(lVar11 + 0x12a) != 0) {
              uVar8 = 0;
              piVar12 = (int *)(*(long *)(lVar11 + 0xb0) + 8);
              do {
                if (*(long *)(piVar12 + -2) == *(long *)(lVar4 + 0x18)) {
                  lVar11 = lVar11 + (long)(int)(*piVar12 + (uint)*(ushort *)(lVar4 + 0x48)) * 0x10 +
                           0x138;
                  goto LAB_00556560;
                }
                uVar8 = uVar8 + 1;
                piVar12 = piVar12 + 4;
              } while (uVar8 < *(ushort *)(lVar11 + 0x12a));
            }
            lVar11 = native_sub_3c9b34(plVar9);
LAB_00556560:
            uVar5 = *(undefined8 *)(lVar11 + 8);
          }
          puVar6 = (undefined8 *)native_sub_4327e8(uVar5,lVar4);
          pcVar14 = (code *)*puVar6;
        }
        (*pcVar14)(plVar9,puVar6);
      }
      else {
        if ((((plVar1 == (long *)0x0) || (*(short *)(lVar4 + 0x48) == -1)) ||
            ((*(byte *)(*plVar1 + 0x115) & 1) != 0)) || (*(long *)(lVar13 + 0x18) == 0))
        goto LAB_005566c8;
        uVar8 = native_sub_432760(lVar4);
        uVar7 = native_sub_432b64(lVar4);
        if ((uVar8 & 1) == 0) {
          uVar2 = *(ushort *)(lVar4 + 0x48);
          if ((uVar7 & 1) == 0) {
            lVar4 = *plVar1 + (ulong)uVar2 * 0x10;
            (**(code **)(lVar4 + 0x138))(plVar1,plVar9,*(undefined8 *)(lVar4 + 0x140));
            goto LAB_00556760;
          }
          lVar4 = native_sub_432764(lVar4);
          lVar11 = *plVar1;
          if ((ulong)*(ushort *)(lVar11 + 0x12a) != 0) {
            uVar8 = 0;
            piVar12 = (int *)(*(long *)(lVar11 + 0xb0) + 8);
            do {
              if (*(long *)(piVar12 + -2) == lVar4) {
                puVar6 = (undefined8 *)(lVar11 + (long)(int)(*piVar12 + (uint)uVar2) * 0x10 + 0x138)
                ;
                goto LAB_005565ec;
              }
              uVar8 = uVar8 + 1;
              piVar12 = piVar12 + 4;
            } while (uVar8 < *(ushort *)(lVar11 + 0x12a));
          }
          puVar6 = (undefined8 *)native_sub_3c9b34(plVar1,lVar4,(ulong)uVar2);
LAB_005565ec:
          pcVar14 = (code *)*puVar6;
          puVar6 = (undefined8 *)puVar6[1];
        }
        else {
          if ((uVar7 & 1) == 0) {
            uVar5 = *(undefined8 *)(*plVar1 + (ulong)*(ushort *)(lVar4 + 0x48) * 0x10 + 0x140);
          }
          else {
            lVar11 = *plVar1;
            if ((ulong)*(ushort *)(lVar11 + 0x12a) != 0) {
              uVar8 = 0;
              piVar12 = (int *)(*(long *)(lVar11 + 0xb0) + 8);
              do {
                if (*(long *)(piVar12 + -2) == *(long *)(lVar4 + 0x18)) {
                  lVar11 = lVar11 + (long)(int)(*piVar12 + (uint)*(ushort *)(lVar4 + 0x48)) * 0x10 +
                           0x138;
                  goto LAB_005565c4;
                }
                uVar8 = uVar8 + 1;
                piVar12 = piVar12 + 4;
              } while (uVar8 < *(ushort *)(lVar11 + 0x12a));
            }
            lVar11 = native_sub_3c9b34(plVar1);
LAB_005565c4:
            uVar5 = *(undefined8 *)(lVar11 + 8);
          }
          puVar6 = (undefined8 *)native_sub_4327e8(uVar5,lVar4);
          pcVar14 = (code *)*puVar6;
        }
        (*pcVar14)(plVar1,plVar9,puVar6);
      }
    }
    else if (bVar3) {
LAB_005566c8:
      (*pcVar14)(plVar1,plVar9,lVar4);
    }
    else {
LAB_00556754:
      (*pcVar14)(plVar9,lVar4);
    }
LAB_00556760:
    lVar10 = lVar10 + 1;
    if (lVar10 == lVar15) {
      return;
    }
  } while( true );
}



/* UIEventListener$$OnHover @ 0x9e9f38
 * void UIEventListener__OnHover (UIEventListener_o* __this, bool isOver, const MethodInfo* method); */

/* UIEventListener$$OnHover
   void UIEventListener__OnHover (UIEventListener_o* __this, bool isOver, const MethodInfo* method);
    */

void native_UIEventListener__OnHover_9e9f38(long param_1,uint param_2)

{
  long *plVar1;
  ushort uVar2;
  bool bVar3;
  long lVar4;
  undefined8 uVar5;
  undefined8 *puVar6;
  ulong uVar7;
  ulong uVar8;
  long *plVar9;
  long lVar10;
  long lVar11;
  int *piVar12;
  long lVar13;
  code *pcVar14;
  long lVar15;
  long *plVar16;
  long lStack_58;
  
  uVar8 = native_UIEventListener__get_isColliderEnabled_9e9d04();
  if (((uVar8 & 1) == 0) || (lVar13 = *(long *)(param_1 + 0x38), lVar13 == 0)) {
    return;
  }
  plVar9 = (long *)native_UnityEngine_Component__get_gameObject_8da66c(param_1,0);
  param_2 = param_2 & 1;
  lStack_58 = lVar13;
  lVar10 = *(long *)(lVar13 + 0x68);
  if (lVar10 == 0) {
    plVar16 = &lStack_58;
    lVar15 = 1;
  }
  else {
    lVar15 = *(long *)(lVar10 + 0x18);
    if (lVar15 == 0) {
      return;
    }
    plVar16 = (long *)(lVar10 + 0x20);
  }
  lVar10 = 0;
  do {
    lVar11 = plVar16[lVar10];
    plVar1 = *(long **)(lVar11 + 0x20);
    lVar4 = *(long *)(lVar11 + 0x28);
    pcVar14 = *(code **)(lVar11 + 0x10);
    if (*(short *)(lVar4 + 0x48) == -1) {
      native_sub_4327f4(lVar4);
    }
    uVar8 = native_sub_432768(lVar4);
    bVar3 = *(char *)(lVar4 + 0x4a) != '\x02';
    if ((uVar8 & 1) == 0) {
      if (bVar3) {
        if ((*(short *)(lVar4 + 0x48) == -1) || (*(long *)(lVar13 + 0x18) == 0)) goto LAB_00555078;
        uVar8 = native_sub_432760(lVar4);
        uVar7 = native_sub_432b64(lVar4);
        if ((uVar8 & 1) == 0) {
          uVar2 = *(ushort *)(lVar4 + 0x48);
          if ((uVar7 & 1) == 0) {
            lVar4 = *plVar9 + (ulong)uVar2 * 0x10;
            (**(code **)(lVar4 + 0x138))(plVar9,param_2,*(undefined8 *)(lVar4 + 0x140));
            goto LAB_00555088;
          }
          lVar4 = native_sub_432764(lVar4);
          lVar11 = *plVar9;
          if ((ulong)*(ushort *)(lVar11 + 0x12a) != 0) {
            uVar8 = 0;
            piVar12 = (int *)(*(long *)(lVar11 + 0xb0) + 8);
            do {
              if (*(long *)(piVar12 + -2) == lVar4) {
                puVar6 = (undefined8 *)(lVar11 + (long)(int)(*piVar12 + (uint)uVar2) * 0x10 + 0x138)
                ;
                goto LAB_00554e9c;
              }
              uVar8 = uVar8 + 1;
              piVar12 = piVar12 + 4;
            } while (uVar8 < *(ushort *)(lVar11 + 0x12a));
          }
          puVar6 = (undefined8 *)native_sub_3c9b34(plVar9,lVar4,(ulong)uVar2);
LAB_00554e9c:
          pcVar14 = (code *)*puVar6;
          puVar6 = (undefined8 *)puVar6[1];
        }
        else {
          if ((uVar7 & 1) == 0) {
            uVar5 = *(undefined8 *)(*plVar9 + (ulong)*(ushort *)(lVar4 + 0x48) * 0x10 + 0x140);
          }
          else {
            lVar11 = *plVar9;
            if ((ulong)*(ushort *)(lVar11 + 0x12a) != 0) {
              uVar8 = 0;
              piVar12 = (int *)(*(long *)(lVar11 + 0xb0) + 8);
              do {
                if (*(long *)(piVar12 + -2) == *(long *)(lVar4 + 0x18)) {
                  lVar11 = lVar11 + (long)(int)(*piVar12 + (uint)*(ushort *)(lVar4 + 0x48)) * 0x10 +
                           0x138;
                  goto LAB_00554e74;
                }
                uVar8 = uVar8 + 1;
                piVar12 = piVar12 + 4;
              } while (uVar8 < *(ushort *)(lVar11 + 0x12a));
            }
            lVar11 = native_sub_3c9b34(plVar9);
LAB_00554e74:
            uVar5 = *(undefined8 *)(lVar11 + 8);
          }
          puVar6 = (undefined8 *)native_sub_4327e8(uVar5,lVar4);
          pcVar14 = (code *)*puVar6;
        }
        (*pcVar14)(plVar9,param_2,puVar6);
      }
      else {
        if ((((plVar1 == (long *)0x0) || (*(short *)(lVar4 + 0x48) == -1)) ||
            ((*(byte *)(*plVar1 + 0x115) & 1) != 0)) || (*(long *)(lVar13 + 0x18) == 0))
        goto LAB_00554fe8;
        uVar8 = native_sub_432760(lVar4);
        uVar7 = native_sub_432b64(lVar4);
        if ((uVar8 & 1) == 0) {
          uVar2 = *(ushort *)(lVar4 + 0x48);
          if ((uVar7 & 1) == 0) {
            lVar4 = *plVar1 + (ulong)uVar2 * 0x10;
            (**(code **)(lVar4 + 0x138))(plVar1,plVar9,param_2,*(undefined8 *)(lVar4 + 0x140));
            goto LAB_00555088;
          }
          lVar4 = native_sub_432764(lVar4);
          lVar11 = *plVar1;
          if ((ulong)*(ushort *)(lVar11 + 0x12a) != 0) {
            uVar8 = 0;
            piVar12 = (int *)(*(long *)(lVar11 + 0xb0) + 8);
            do {
              if (*(long *)(piVar12 + -2) == lVar4) {
                puVar6 = (undefined8 *)(lVar11 + (long)(int)(*piVar12 + (uint)uVar2) * 0x10 + 0x138)
                ;
                goto LAB_00554f08;
              }
              uVar8 = uVar8 + 1;
              piVar12 = piVar12 + 4;
            } while (uVar8 < *(ushort *)(lVar11 + 0x12a));
          }
          puVar6 = (undefined8 *)native_sub_3c9b34(plVar1,lVar4,(ulong)uVar2);
LAB_00554f08:
          pcVar14 = (code *)*puVar6;
          puVar6 = (undefined8 *)puVar6[1];
        }
        else {
          if ((uVar7 & 1) == 0) {
            uVar5 = *(undefined8 *)(*plVar1 + (ulong)*(ushort *)(lVar4 + 0x48) * 0x10 + 0x140);
          }
          else {
            lVar11 = *plVar1;
            if ((ulong)*(ushort *)(lVar11 + 0x12a) != 0) {
              uVar8 = 0;
              piVar12 = (int *)(*(long *)(lVar11 + 0xb0) + 8);
              do {
                if (*(long *)(piVar12 + -2) == *(long *)(lVar4 + 0x18)) {
                  lVar11 = lVar11 + (long)(int)(*piVar12 + (uint)*(ushort *)(lVar4 + 0x48)) * 0x10 +
                           0x138;
                  goto LAB_00554ee0;
                }
                uVar8 = uVar8 + 1;
                piVar12 = piVar12 + 4;
              } while (uVar8 < *(ushort *)(lVar11 + 0x12a));
            }
            lVar11 = native_sub_3c9b34(plVar1);
LAB_00554ee0:
            uVar5 = *(undefined8 *)(lVar11 + 8);
          }
          puVar6 = (undefined8 *)native_sub_4327e8(uVar5,lVar4);
          pcVar14 = (code *)*puVar6;
        }
        (*pcVar14)(plVar1,plVar9,param_2,puVar6);
      }
    }
    else if (bVar3) {
LAB_00554fe8:
      (*pcVar14)(plVar1,plVar9,param_2,lVar4);
    }
    else {
LAB_00555078:
      (*pcVar14)(plVar9,param_2,lVar4);
    }
LAB_00555088:
    lVar10 = lVar10 + 1;
    if (lVar10 == lVar15) {
      return;
    }
  } while( true );
}



/* UIEventListener$$OnPress @ 0x9e9f9c
 * void UIEventListener__OnPress (UIEventListener_o* __this, bool isPressed, const MethodInfo* method); */

/* UIEventListener$$OnPress
   void UIEventListener__OnPress (UIEventListener_o* __this, bool isPressed, const MethodInfo*
   method); */

void native_UIEventListener__OnPress_9e9f9c(long param_1,uint param_2)

{
  long *plVar1;
  ushort uVar2;
  bool bVar3;
  long lVar4;
  undefined8 uVar5;
  undefined8 *puVar6;
  ulong uVar7;
  ulong uVar8;
  long *plVar9;
  long lVar10;
  long lVar11;
  int *piVar12;
  long lVar13;
  code *pcVar14;
  long lVar15;
  long *plVar16;
  long lStack_58;
  
  uVar8 = native_UIEventListener__get_isColliderEnabled_9e9d04();
  if (((uVar8 & 1) == 0) || (lVar13 = *(long *)(param_1 + 0x40), lVar13 == 0)) {
    return;
  }
  plVar9 = (long *)native_UnityEngine_Component__get_gameObject_8da66c(param_1,0);
  param_2 = param_2 & 1;
  lStack_58 = lVar13;
  lVar10 = *(long *)(lVar13 + 0x68);
  if (lVar10 == 0) {
    plVar16 = &lStack_58;
    lVar15 = 1;
  }
  else {
    lVar15 = *(long *)(lVar10 + 0x18);
    if (lVar15 == 0) {
      return;
    }
    plVar16 = (long *)(lVar10 + 0x20);
  }
  lVar10 = 0;
  do {
    lVar11 = plVar16[lVar10];
    plVar1 = *(long **)(lVar11 + 0x20);
    lVar4 = *(long *)(lVar11 + 0x28);
    pcVar14 = *(code **)(lVar11 + 0x10);
    if (*(short *)(lVar4 + 0x48) == -1) {
      native_sub_4327f4(lVar4);
    }
    uVar8 = native_sub_432768(lVar4);
    bVar3 = *(char *)(lVar4 + 0x4a) != '\x02';
    if ((uVar8 & 1) == 0) {
      if (bVar3) {
        if ((*(short *)(lVar4 + 0x48) == -1) || (*(long *)(lVar13 + 0x18) == 0)) goto LAB_00555078;
        uVar8 = native_sub_432760(lVar4);
        uVar7 = native_sub_432b64(lVar4);
        if ((uVar8 & 1) == 0) {
          uVar2 = *(ushort *)(lVar4 + 0x48);
          if ((uVar7 & 1) == 0) {
            lVar4 = *plVar9 + (ulong)uVar2 * 0x10;
            (**(code **)(lVar4 + 0x138))(plVar9,param_2,*(undefined8 *)(lVar4 + 0x140));
            goto LAB_00555088;
          }
          lVar4 = native_sub_432764(lVar4);
          lVar11 = *plVar9;
          if ((ulong)*(ushort *)(lVar11 + 0x12a) != 0) {
            uVar8 = 0;
            piVar12 = (int *)(*(long *)(lVar11 + 0xb0) + 8);
            do {
              if (*(long *)(piVar12 + -2) == lVar4) {
                puVar6 = (undefined8 *)(lVar11 + (long)(int)(*piVar12 + (uint)uVar2) * 0x10 + 0x138)
                ;
                goto LAB_00554e9c;
              }
              uVar8 = uVar8 + 1;
              piVar12 = piVar12 + 4;
            } while (uVar8 < *(ushort *)(lVar11 + 0x12a));
          }
          puVar6 = (undefined8 *)native_sub_3c9b34(plVar9,lVar4,(ulong)uVar2);
LAB_00554e9c:
          pcVar14 = (code *)*puVar6;
          puVar6 = (undefined8 *)puVar6[1];
        }
        else {
          if ((uVar7 & 1) == 0) {
            uVar5 = *(undefined8 *)(*plVar9 + (ulong)*(ushort *)(lVar4 + 0x48) * 0x10 + 0x140);
          }
          else {
            lVar11 = *plVar9;
            if ((ulong)*(ushort *)(lVar11 + 0x12a) != 0) {
              uVar8 = 0;
              piVar12 = (int *)(*(long *)(lVar11 + 0xb0) + 8);
              do {
                if (*(long *)(piVar12 + -2) == *(long *)(lVar4 + 0x18)) {
                  lVar11 = lVar11 + (long)(int)(*piVar12 + (uint)*(ushort *)(lVar4 + 0x48)) * 0x10 +
                           0x138;
                  goto LAB_00554e74;
                }
                uVar8 = uVar8 + 1;
                piVar12 = piVar12 + 4;
              } while (uVar8 < *(ushort *)(lVar11 + 0x12a));
            }
            lVar11 = native_sub_3c9b34(plVar9);
LAB_00554e74:
            uVar5 = *(undefined8 *)(lVar11 + 8);
          }
          puVar6 = (undefined8 *)native_sub_4327e8(uVar5,lVar4);
          pcVar14 = (code *)*puVar6;
        }
        (*pcVar14)(plVar9,param_2,puVar6);
      }
      else {
        if ((((plVar1 == (long *)0x0) || (*(short *)(lVar4 + 0x48) == -1)) ||
            ((*(byte *)(*plVar1 + 0x115) & 1) != 0)) || (*(long *)(lVar13 + 0x18) == 0))
        goto LAB_00554fe8;
        uVar8 = native_sub_432760(lVar4);
        uVar7 = native_sub_432b64(lVar4);
        if ((uVar8 & 1) == 0) {
          uVar2 = *(ushort *)(lVar4 + 0x48);
          if ((uVar7 & 1) == 0) {
            lVar4 = *plVar1 + (ulong)uVar2 * 0x10;
            (**(code **)(lVar4 + 0x138))(plVar1,plVar9,param_2,*(undefined8 *)(lVar4 + 0x140));
            goto LAB_00555088;
          }
          lVar4 = native_sub_432764(lVar4);
          lVar11 = *plVar1;
          if ((ulong)*(ushort *)(lVar11 + 0x12a) != 0) {
            uVar8 = 0;
            piVar12 = (int *)(*(long *)(lVar11 + 0xb0) + 8);
            do {
              if (*(long *)(piVar12 + -2) == lVar4) {
                puVar6 = (undefined8 *)(lVar11 + (long)(int)(*piVar12 + (uint)uVar2) * 0x10 + 0x138)
                ;
                goto LAB_00554f08;
              }
              uVar8 = uVar8 + 1;
              piVar12 = piVar12 + 4;
            } while (uVar8 < *(ushort *)(lVar11 + 0x12a));
          }
          puVar6 = (undefined8 *)native_sub_3c9b34(plVar1,lVar4,(ulong)uVar2);
LAB_00554f08:
          pcVar14 = (code *)*puVar6;
          puVar6 = (undefined8 *)puVar6[1];
        }
        else {
          if ((uVar7 & 1) == 0) {
            uVar5 = *(undefined8 *)(*plVar1 + (ulong)*(ushort *)(lVar4 + 0x48) * 0x10 + 0x140);
          }
          else {
            lVar11 = *plVar1;
            if ((ulong)*(ushort *)(lVar11 + 0x12a) != 0) {
              uVar8 = 0;
              piVar12 = (int *)(*(long *)(lVar11 + 0xb0) + 8);
              do {
                if (*(long *)(piVar12 + -2) == *(long *)(lVar4 + 0x18)) {
                  lVar11 = lVar11 + (long)(int)(*piVar12 + (uint)*(ushort *)(lVar4 + 0x48)) * 0x10 +
                           0x138;
                  goto LAB_00554ee0;
                }
                uVar8 = uVar8 + 1;
                piVar12 = piVar12 + 4;
              } while (uVar8 < *(ushort *)(lVar11 + 0x12a));
            }
            lVar11 = native_sub_3c9b34(plVar1);
LAB_00554ee0:
            uVar5 = *(undefined8 *)(lVar11 + 8);
          }
          puVar6 = (undefined8 *)native_sub_4327e8(uVar5,lVar4);
          pcVar14 = (code *)*puVar6;
        }
        (*pcVar14)(plVar1,plVar9,param_2,puVar6);
      }
    }
    else if (bVar3) {
LAB_00554fe8:
      (*pcVar14)(plVar1,plVar9,param_2,lVar4);
    }
    else {
LAB_00555078:
      (*pcVar14)(plVar9,param_2,lVar4);
    }
LAB_00555088:
    lVar10 = lVar10 + 1;
    if (lVar10 == lVar15) {
      return;
    }
  } while( true );
}



/* UIEventListener$$OnSelect @ 0x9ea000
 * void UIEventListener__OnSelect (UIEventListener_o* __this, bool selected, const MethodInfo* method); */

/* UIEventListener$$OnSelect
   void UIEventListener__OnSelect (UIEventListener_o* __this, bool selected, const MethodInfo*
   method); */

void native_UIEventListener__OnSelect_9ea000(long param_1,uint param_2)

{
  long *plVar1;
  ushort uVar2;
  bool bVar3;
  long lVar4;
  undefined8 uVar5;
  undefined8 *puVar6;
  ulong uVar7;
  ulong uVar8;
  long *plVar9;
  long lVar10;
  long lVar11;
  int *piVar12;
  long lVar13;
  code *pcVar14;
  long lVar15;
  long *plVar16;
  long lStack_58;
  
  uVar8 = native_UIEventListener__get_isColliderEnabled_9e9d04();
  if (((uVar8 & 1) == 0) || (lVar13 = *(long *)(param_1 + 0x48), lVar13 == 0)) {
    return;
  }
  plVar9 = (long *)native_UnityEngine_Component__get_gameObject_8da66c(param_1,0);
  param_2 = param_2 & 1;
  lStack_58 = lVar13;
  lVar10 = *(long *)(lVar13 + 0x68);
  if (lVar10 == 0) {
    plVar16 = &lStack_58;
    lVar15 = 1;
  }
  else {
    lVar15 = *(long *)(lVar10 + 0x18);
    if (lVar15 == 0) {
      return;
    }
    plVar16 = (long *)(lVar10 + 0x20);
  }
  lVar10 = 0;
  do {
    lVar11 = plVar16[lVar10];
    plVar1 = *(long **)(lVar11 + 0x20);
    lVar4 = *(long *)(lVar11 + 0x28);
    pcVar14 = *(code **)(lVar11 + 0x10);
    if (*(short *)(lVar4 + 0x48) == -1) {
      native_sub_4327f4(lVar4);
    }
    uVar8 = native_sub_432768(lVar4);
    bVar3 = *(char *)(lVar4 + 0x4a) != '\x02';
    if ((uVar8 & 1) == 0) {
      if (bVar3) {
        if ((*(short *)(lVar4 + 0x48) == -1) || (*(long *)(lVar13 + 0x18) == 0)) goto LAB_00555078;
        uVar8 = native_sub_432760(lVar4);
        uVar7 = native_sub_432b64(lVar4);
        if ((uVar8 & 1) == 0) {
          uVar2 = *(ushort *)(lVar4 + 0x48);
          if ((uVar7 & 1) == 0) {
            lVar4 = *plVar9 + (ulong)uVar2 * 0x10;
            (**(code **)(lVar4 + 0x138))(plVar9,param_2,*(undefined8 *)(lVar4 + 0x140));
            goto LAB_00555088;
          }
          lVar4 = native_sub_432764(lVar4);
          lVar11 = *plVar9;
          if ((ulong)*(ushort *)(lVar11 + 0x12a) != 0) {
            uVar8 = 0;
            piVar12 = (int *)(*(long *)(lVar11 + 0xb0) + 8);
            do {
              if (*(long *)(piVar12 + -2) == lVar4) {
                puVar6 = (undefined8 *)(lVar11 + (long)(int)(*piVar12 + (uint)uVar2) * 0x10 + 0x138)
                ;
                goto LAB_00554e9c;
              }
              uVar8 = uVar8 + 1;
              piVar12 = piVar12 + 4;
            } while (uVar8 < *(ushort *)(lVar11 + 0x12a));
          }
          puVar6 = (undefined8 *)native_sub_3c9b34(plVar9,lVar4,(ulong)uVar2);
LAB_00554e9c:
          pcVar14 = (code *)*puVar6;
          puVar6 = (undefined8 *)puVar6[1];
        }
        else {
          if ((uVar7 & 1) == 0) {
            uVar5 = *(undefined8 *)(*plVar9 + (ulong)*(ushort *)(lVar4 + 0x48) * 0x10 + 0x140);
          }
          else {
            lVar11 = *plVar9;
            if ((ulong)*(ushort *)(lVar11 + 0x12a) != 0) {
              uVar8 = 0;
              piVar12 = (int *)(*(long *)(lVar11 + 0xb0) + 8);
              do {
                if (*(long *)(piVar12 + -2) == *(long *)(lVar4 + 0x18)) {
                  lVar11 = lVar11 + (long)(int)(*piVar12 + (uint)*(ushort *)(lVar4 + 0x48)) * 0x10 +
                           0x138;
                  goto LAB_00554e74;
                }
                uVar8 = uVar8 + 1;
                piVar12 = piVar12 + 4;
              } while (uVar8 < *(ushort *)(lVar11 + 0x12a));
            }
            lVar11 = native_sub_3c9b34(plVar9);
LAB_00554e74:
            uVar5 = *(undefined8 *)(lVar11 + 8);
          }
          puVar6 = (undefined8 *)native_sub_4327e8(uVar5,lVar4);
          pcVar14 = (code *)*puVar6;
        }
        (*pcVar14)(plVar9,param_2,puVar6);
      }
      else {
        if ((((plVar1 == (long *)0x0) || (*(short *)(lVar4 + 0x48) == -1)) ||
            ((*(byte *)(*plVar1 + 0x115) & 1) != 0)) || (*(long *)(lVar13 + 0x18) == 0))
        goto LAB_00554fe8;
        uVar8 = native_sub_432760(lVar4);
        uVar7 = native_sub_432b64(lVar4);
        if ((uVar8 & 1) == 0) {
          uVar2 = *(ushort *)(lVar4 + 0x48);
          if ((uVar7 & 1) == 0) {
            lVar4 = *plVar1 + (ulong)uVar2 * 0x10;
            (**(code **)(lVar4 + 0x138))(plVar1,plVar9,param_2,*(undefined8 *)(lVar4 + 0x140));
            goto LAB_00555088;
          }
          lVar4 = native_sub_432764(lVar4);
          lVar11 = *plVar1;
          if ((ulong)*(ushort *)(lVar11 + 0x12a) != 0) {
            uVar8 = 0;
            piVar12 = (int *)(*(long *)(lVar11 + 0xb0) + 8);
            do {
              if (*(long *)(piVar12 + -2) == lVar4) {
                puVar6 = (undefined8 *)(lVar11 + (long)(int)(*piVar12 + (uint)uVar2) * 0x10 + 0x138)
                ;
                goto LAB_00554f08;
              }
              uVar8 = uVar8 + 1;
              piVar12 = piVar12 + 4;
            } while (uVar8 < *(ushort *)(lVar11 + 0x12a));
          }
          puVar6 = (undefined8 *)native_sub_3c9b34(plVar1,lVar4,(ulong)uVar2);
LAB_00554f08:
          pcVar14 = (code *)*puVar6;
          puVar6 = (undefined8 *)puVar6[1];
        }
        else {
          if ((uVar7 & 1) == 0) {
            uVar5 = *(undefined8 *)(*plVar1 + (ulong)*(ushort *)(lVar4 + 0x48) * 0x10 + 0x140);
          }
          else {
            lVar11 = *plVar1;
            if ((ulong)*(ushort *)(lVar11 + 0x12a) != 0) {
              uVar8 = 0;
              piVar12 = (int *)(*(long *)(lVar11 + 0xb0) + 8);
              do {
                if (*(long *)(piVar12 + -2) == *(long *)(lVar4 + 0x18)) {
                  lVar11 = lVar11 + (long)(int)(*piVar12 + (uint)*(ushort *)(lVar4 + 0x48)) * 0x10 +
                           0x138;
                  goto LAB_00554ee0;
                }
                uVar8 = uVar8 + 1;
                piVar12 = piVar12 + 4;
              } while (uVar8 < *(ushort *)(lVar11 + 0x12a));
            }
            lVar11 = native_sub_3c9b34(plVar1);
LAB_00554ee0:
            uVar5 = *(undefined8 *)(lVar11 + 8);
          }
          puVar6 = (undefined8 *)native_sub_4327e8(uVar5,lVar4);
          pcVar14 = (code *)*puVar6;
        }
        (*pcVar14)(plVar1,plVar9,param_2,puVar6);
      }
    }
    else if (bVar3) {
LAB_00554fe8:
      (*pcVar14)(plVar1,plVar9,param_2,lVar4);
    }
    else {
LAB_00555078:
      (*pcVar14)(plVar9,param_2,lVar4);
    }
LAB_00555088:
    lVar10 = lVar10 + 1;
    if (lVar10 == lVar15) {
      return;
    }
  } while( true );
}



/* UIEventListener$$OnScroll @ 0x9ea064
 * void UIEventListener__OnScroll (UIEventListener_o* __this, float delta, const MethodInfo* method); */

/* UIEventListener$$OnScroll
   void UIEventListener__OnScroll (UIEventListener_o* __this, float delta, const MethodInfo*
   method); */

void native_UIEventListener__OnScroll_9ea064(undefined8 param_1,long param_2)

{
  long *plVar1;
  ushort uVar2;
  bool bVar3;
  long lVar4;
  undefined8 uVar5;
  undefined8 *puVar6;
  ulong uVar7;
  ulong uVar8;
  long *plVar9;
  long lVar10;
  long lVar11;
  int *piVar12;
  long lVar13;
  code *pcVar14;
  long lVar15;
  long *plVar16;
  long lStack_58;
  
  uVar8 = native_UIEventListener__get_isColliderEnabled_9e9d04();
  if (((uVar8 & 1) == 0) || (lVar13 = *(long *)(param_2 + 0x50), lVar13 == 0)) {
    return;
  }
  plVar9 = (long *)native_UnityEngine_Component__get_gameObject_8da66c(param_2,0);
  lStack_58 = lVar13;
  lVar10 = *(long *)(lVar13 + 0x68);
  if (lVar10 == 0) {
    plVar16 = &lStack_58;
    lVar15 = 1;
  }
  else {
    lVar15 = *(long *)(lVar10 + 0x18);
    if (lVar15 == 0) {
      return;
    }
    plVar16 = (long *)(lVar10 + 0x20);
  }
  lVar10 = 0;
  do {
    lVar11 = plVar16[lVar10];
    plVar1 = *(long **)(lVar11 + 0x20);
    lVar4 = *(long *)(lVar11 + 0x28);
    pcVar14 = *(code **)(lVar11 + 0x10);
    if (*(short *)(lVar4 + 0x48) == -1) {
      native_sub_4327f4(lVar4);
    }
    uVar8 = native_sub_432768(lVar4);
    bVar3 = *(char *)(lVar4 + 0x4a) != '\x02';
    if ((uVar8 & 1) == 0) {
      if (bVar3) {
        if ((*(short *)(lVar4 + 0x48) == -1) || (*(long *)(lVar13 + 0x18) == 0)) goto LAB_00555520;
        uVar8 = native_sub_432760(lVar4);
        uVar7 = native_sub_432b64(lVar4);
        if ((uVar8 & 1) == 0) {
          uVar2 = *(ushort *)(lVar4 + 0x48);
          if ((uVar7 & 1) == 0) {
            lVar4 = *plVar9 + (ulong)uVar2 * 0x10;
            (**(code **)(lVar4 + 0x138))(param_1,plVar9,*(undefined8 *)(lVar4 + 0x140));
            goto LAB_00555530;
          }
          lVar4 = native_sub_432764(lVar4);
          lVar11 = *plVar9;
          if ((ulong)*(ushort *)(lVar11 + 0x12a) != 0) {
            uVar8 = 0;
            piVar12 = (int *)(*(long *)(lVar11 + 0xb0) + 8);
            do {
              if (*(long *)(piVar12 + -2) == lVar4) {
                puVar6 = (undefined8 *)(lVar11 + (long)(int)(*piVar12 + (uint)uVar2) * 0x10 + 0x138)
                ;
                goto LAB_00555344;
              }
              uVar8 = uVar8 + 1;
              piVar12 = piVar12 + 4;
            } while (uVar8 < *(ushort *)(lVar11 + 0x12a));
          }
          puVar6 = (undefined8 *)native_sub_3c9b34(plVar9,lVar4,(ulong)uVar2);
LAB_00555344:
          pcVar14 = (code *)*puVar6;
          puVar6 = (undefined8 *)puVar6[1];
        }
        else {
          if ((uVar7 & 1) == 0) {
            uVar5 = *(undefined8 *)(*plVar9 + (ulong)*(ushort *)(lVar4 + 0x48) * 0x10 + 0x140);
          }
          else {
            lVar11 = *plVar9;
            if ((ulong)*(ushort *)(lVar11 + 0x12a) != 0) {
              uVar8 = 0;
              piVar12 = (int *)(*(long *)(lVar11 + 0xb0) + 8);
              do {
                if (*(long *)(piVar12 + -2) == *(long *)(lVar4 + 0x18)) {
                  lVar11 = lVar11 + (long)(int)(*piVar12 + (uint)*(ushort *)(lVar4 + 0x48)) * 0x10 +
                           0x138;
                  goto LAB_0055531c;
                }
                uVar8 = uVar8 + 1;
                piVar12 = piVar12 + 4;
              } while (uVar8 < *(ushort *)(lVar11 + 0x12a));
            }
            lVar11 = native_sub_3c9b34(plVar9);
LAB_0055531c:
            uVar5 = *(undefined8 *)(lVar11 + 8);
          }
          puVar6 = (undefined8 *)native_sub_4327e8(uVar5,lVar4);
          pcVar14 = (code *)*puVar6;
        }
        (*pcVar14)(param_1,plVar9,puVar6);
      }
      else {
        if ((((plVar1 == (long *)0x0) || (*(short *)(lVar4 + 0x48) == -1)) ||
            ((*(byte *)(*plVar1 + 0x115) & 1) != 0)) || (*(long *)(lVar13 + 0x18) == 0))
        goto LAB_00555490;
        uVar8 = native_sub_432760(lVar4);
        uVar7 = native_sub_432b64(lVar4);
        if ((uVar8 & 1) == 0) {
          uVar2 = *(ushort *)(lVar4 + 0x48);
          if ((uVar7 & 1) == 0) {
            lVar4 = *plVar1 + (ulong)uVar2 * 0x10;
            (**(code **)(lVar4 + 0x138))(param_1,plVar1,plVar9,*(undefined8 *)(lVar4 + 0x140));
            goto LAB_00555530;
          }
          lVar4 = native_sub_432764(lVar4);
          lVar11 = *plVar1;
          if ((ulong)*(ushort *)(lVar11 + 0x12a) != 0) {
            uVar8 = 0;
            piVar12 = (int *)(*(long *)(lVar11 + 0xb0) + 8);
            do {
              if (*(long *)(piVar12 + -2) == lVar4) {
                puVar6 = (undefined8 *)(lVar11 + (long)(int)(*piVar12 + (uint)uVar2) * 0x10 + 0x138)
                ;
                goto LAB_005553b0;
              }
              uVar8 = uVar8 + 1;
              piVar12 = piVar12 + 4;
            } while (uVar8 < *(ushort *)(lVar11 + 0x12a));
          }
          puVar6 = (undefined8 *)native_sub_3c9b34(plVar1,lVar4,(ulong)uVar2);
LAB_005553b0:
          pcVar14 = (code *)*puVar6;
          puVar6 = (undefined8 *)puVar6[1];
        }
        else {
          if ((uVar7 & 1) == 0) {
            uVar5 = *(undefined8 *)(*plVar1 + (ulong)*(ushort *)(lVar4 + 0x48) * 0x10 + 0x140);
          }
          else {
            lVar11 = *plVar1;
            if ((ulong)*(ushort *)(lVar11 + 0x12a) != 0) {
              uVar8 = 0;
              piVar12 = (int *)(*(long *)(lVar11 + 0xb0) + 8);
              do {
                if (*(long *)(piVar12 + -2) == *(long *)(lVar4 + 0x18)) {
                  lVar11 = lVar11 + (long)(int)(*piVar12 + (uint)*(ushort *)(lVar4 + 0x48)) * 0x10 +
                           0x138;
                  goto LAB_00555388;
                }
                uVar8 = uVar8 + 1;
                piVar12 = piVar12 + 4;
              } while (uVar8 < *(ushort *)(lVar11 + 0x12a));
            }
            lVar11 = native_sub_3c9b34(plVar1);
LAB_00555388:
            uVar5 = *(undefined8 *)(lVar11 + 8);
          }
          puVar6 = (undefined8 *)native_sub_4327e8(uVar5,lVar4);
          pcVar14 = (code *)*puVar6;
        }
        (*pcVar14)(param_1,plVar1,plVar9,puVar6);
      }
    }
    else if (bVar3) {
LAB_00555490:
      (*pcVar14)(param_1,plVar1,plVar9,lVar4);
    }
    else {
LAB_00555520:
      (*pcVar14)(param_1,plVar9,lVar4);
    }
LAB_00555530:
    lVar10 = lVar10 + 1;
    if (lVar10 == lVar15) {
      return;
    }
  } while( true );
}



/* UIEventListener$$OnDragStart @ 0x9ea0c8
 * void UIEventListener__OnDragStart (UIEventListener_o* __this, const MethodInfo* method); */

/* UIEventListener$$OnDragStart
   void UIEventListener__OnDragStart (UIEventListener_o* __this, const MethodInfo* method); */

void native_UIEventListener__OnDragStart_9ea0c8(long param_1)

{
  long *plVar1;
  ushort uVar2;
  bool bVar3;
  long lVar4;
  undefined8 uVar5;
  undefined8 *puVar6;
  ulong uVar7;
  ulong uVar8;
  long *plVar9;
  long lVar10;
  long lVar11;
  int *piVar12;
  long lVar13;
  code *pcVar14;
  long lVar15;
  long *plVar16;
  long lStack_58;
  
  lVar13 = *(long *)(param_1 + 0x58);
  if (lVar13 == 0) {
    return;
  }
  plVar9 = (long *)native_UnityEngine_Component__get_gameObject_8da66c(param_1,0);
  lStack_58 = lVar13;
  lVar10 = *(long *)(lVar13 + 0x68);
  if (lVar10 == 0) {
    plVar16 = &lStack_58;
    lVar15 = 1;
  }
  else {
    lVar15 = *(long *)(lVar10 + 0x18);
    if (lVar15 == 0) {
      return;
    }
    plVar16 = (long *)(lVar10 + 0x20);
  }
  lVar10 = 0;
  do {
    lVar11 = plVar16[lVar10];
    plVar1 = *(long **)(lVar11 + 0x20);
    lVar4 = *(long *)(lVar11 + 0x28);
    pcVar14 = *(code **)(lVar11 + 0x10);
    if (*(short *)(lVar4 + 0x48) == -1) {
      native_sub_4327f4(lVar4);
    }
    uVar7 = native_sub_432768(lVar4);
    bVar3 = *(char *)(lVar4 + 0x4a) != '\x01';
    if ((uVar7 & 1) == 0) {
      if (bVar3) {
        if ((*(short *)(lVar4 + 0x48) == -1) || (*(long *)(lVar13 + 0x18) == 0)) goto LAB_00556754;
        uVar7 = native_sub_432760(lVar4);
        uVar8 = native_sub_432b64(lVar4);
        if ((uVar7 & 1) == 0) {
          uVar2 = *(ushort *)(lVar4 + 0x48);
          if ((uVar8 & 1) == 0) {
            lVar4 = *plVar9 + (ulong)uVar2 * 0x10;
            (**(code **)(lVar4 + 0x138))(plVar9,*(undefined8 *)(lVar4 + 0x140));
            goto LAB_00556760;
          }
          lVar4 = native_sub_432764(lVar4);
          lVar11 = *plVar9;
          if ((ulong)*(ushort *)(lVar11 + 0x12a) != 0) {
            uVar7 = 0;
            piVar12 = (int *)(*(long *)(lVar11 + 0xb0) + 8);
            do {
              if (*(long *)(piVar12 + -2) == lVar4) {
                puVar6 = (undefined8 *)(lVar11 + (long)(int)(*piVar12 + (uint)uVar2) * 0x10 + 0x138)
                ;
                goto LAB_00556588;
              }
              uVar7 = uVar7 + 1;
              piVar12 = piVar12 + 4;
            } while (uVar7 < *(ushort *)(lVar11 + 0x12a));
          }
          puVar6 = (undefined8 *)native_sub_3c9b34(plVar9,lVar4,(ulong)uVar2);
LAB_00556588:
          pcVar14 = (code *)*puVar6;
          puVar6 = (undefined8 *)puVar6[1];
        }
        else {
          if ((uVar8 & 1) == 0) {
            uVar5 = *(undefined8 *)(*plVar9 + (ulong)*(ushort *)(lVar4 + 0x48) * 0x10 + 0x140);
          }
          else {
            lVar11 = *plVar9;
            if ((ulong)*(ushort *)(lVar11 + 0x12a) != 0) {
              uVar7 = 0;
              piVar12 = (int *)(*(long *)(lVar11 + 0xb0) + 8);
              do {
                if (*(long *)(piVar12 + -2) == *(long *)(lVar4 + 0x18)) {
                  lVar11 = lVar11 + (long)(int)(*piVar12 + (uint)*(ushort *)(lVar4 + 0x48)) * 0x10 +
                           0x138;
                  goto LAB_00556560;
                }
                uVar7 = uVar7 + 1;
                piVar12 = piVar12 + 4;
              } while (uVar7 < *(ushort *)(lVar11 + 0x12a));
            }
            lVar11 = native_sub_3c9b34(plVar9);
LAB_00556560:
            uVar5 = *(undefined8 *)(lVar11 + 8);
          }
          puVar6 = (undefined8 *)native_sub_4327e8(uVar5,lVar4);
          pcVar14 = (code *)*puVar6;
        }
        (*pcVar14)(plVar9,puVar6);
      }
      else {
        if ((((plVar1 == (long *)0x0) || (*(short *)(lVar4 + 0x48) == -1)) ||
            ((*(byte *)(*plVar1 + 0x115) & 1) != 0)) || (*(long *)(lVar13 + 0x18) == 0))
        goto LAB_005566c8;
        uVar7 = native_sub_432760(lVar4);
        uVar8 = native_sub_432b64(lVar4);
        if ((uVar7 & 1) == 0) {
          uVar2 = *(ushort *)(lVar4 + 0x48);
          if ((uVar8 & 1) == 0) {
            lVar4 = *plVar1 + (ulong)uVar2 * 0x10;
            (**(code **)(lVar4 + 0x138))(plVar1,plVar9,*(undefined8 *)(lVar4 + 0x140));
            goto LAB_00556760;
          }
          lVar4 = native_sub_432764(lVar4);
          lVar11 = *plVar1;
          if ((ulong)*(ushort *)(lVar11 + 0x12a) != 0) {
            uVar7 = 0;
            piVar12 = (int *)(*(long *)(lVar11 + 0xb0) + 8);
            do {
              if (*(long *)(piVar12 + -2) == lVar4) {
                puVar6 = (undefined8 *)(lVar11 + (long)(int)(*piVar12 + (uint)uVar2) * 0x10 + 0x138)
                ;
                goto LAB_005565ec;
              }
              uVar7 = uVar7 + 1;
              piVar12 = piVar12 + 4;
            } while (uVar7 < *(ushort *)(lVar11 + 0x12a));
          }
          puVar6 = (undefined8 *)native_sub_3c9b34(plVar1,lVar4,(ulong)uVar2);
LAB_005565ec:
          pcVar14 = (code *)*puVar6;
          puVar6 = (undefined8 *)puVar6[1];
        }
        else {
          if ((uVar8 & 1) == 0) {
            uVar5 = *(undefined8 *)(*plVar1 + (ulong)*(ushort *)(lVar4 + 0x48) * 0x10 + 0x140);
          }
          else {
            lVar11 = *plVar1;
            if ((ulong)*(ushort *)(lVar11 + 0x12a) != 0) {
              uVar7 = 0;
              piVar12 = (int *)(*(long *)(lVar11 + 0xb0) + 8);
              do {
                if (*(long *)(piVar12 + -2) == *(long *)(lVar4 + 0x18)) {
                  lVar11 = lVar11 + (long)(int)(*piVar12 + (uint)*(ushort *)(lVar4 + 0x48)) * 0x10 +
                           0x138;
                  goto LAB_005565c4;
                }
                uVar7 = uVar7 + 1;
                piVar12 = piVar12 + 4;
              } while (uVar7 < *(ushort *)(lVar11 + 0x12a));
            }
            lVar11 = native_sub_3c9b34(plVar1);
LAB_005565c4:
            uVar5 = *(undefined8 *)(lVar11 + 8);
          }
          puVar6 = (undefined8 *)native_sub_4327e8(uVar5,lVar4);
          pcVar14 = (code *)*puVar6;
        }
        (*pcVar14)(plVar1,plVar9,puVar6);
      }
    }
    else if (bVar3) {
LAB_005566c8:
      (*pcVar14)(plVar1,plVar9,lVar4);
    }
    else {
LAB_00556754:
      (*pcVar14)(plVar9,lVar4);
    }
LAB_00556760:
    lVar10 = lVar10 + 1;
    if (lVar10 == lVar15) {
      return;
    }
  } while( true );
}



/* UIEventListener$$OnDrag @ 0x9ea108
 * void UIEventListener__OnDrag (UIEventListener_o* __this, UnityEngine_Vector2_o delta, const MethodInfo* method); */

/* UIEventListener$$OnDrag
   void UIEventListener__OnDrag (UIEventListener_o* __this, UnityEngine_Vector2_o delta, const
   MethodInfo* method); */

void native_UIEventListener__OnDrag_9ea108(undefined8 param_1,undefined8 param_2,long param_3)

{
  long *plVar1;
  ushort uVar2;
  bool bVar3;
  long lVar4;
  undefined8 uVar5;
  undefined8 *puVar6;
  ulong uVar7;
  ulong uVar8;
  long *plVar9;
  long lVar10;
  long lVar11;
  int *piVar12;
  long lVar13;
  code *pcVar14;
  long lVar15;
  long *plVar16;
  long lStack_68;
  
  lVar13 = *(long *)(param_3 + 0x60);
  if (lVar13 == 0) {
    return;
  }
  plVar9 = (long *)native_UnityEngine_Component__get_gameObject_8da66c(param_3,0);
  lStack_68 = lVar13;
  lVar10 = *(long *)(lVar13 + 0x68);
  if (lVar10 == 0) {
    plVar16 = &lStack_68;
    lVar15 = 1;
  }
  else {
    lVar15 = *(long *)(lVar10 + 0x18);
    if (lVar15 == 0) {
      return;
    }
    plVar16 = (long *)(lVar10 + 0x20);
  }
  lVar10 = 0;
  do {
    lVar11 = plVar16[lVar10];
    plVar1 = *(long **)(lVar11 + 0x20);
    lVar4 = *(long *)(lVar11 + 0x28);
    pcVar14 = *(code **)(lVar11 + 0x10);
    if (*(short *)(lVar4 + 0x48) == -1) {
      native_sub_4327f4(lVar4);
    }
    uVar7 = native_sub_432768(lVar4);
    bVar3 = *(char *)(lVar4 + 0x4a) != '\x02';
    if ((uVar7 & 1) == 0) {
      if (bVar3) {
        if ((*(short *)(lVar4 + 0x48) == -1) || (*(long *)(lVar13 + 0x18) == 0)) goto LAB_005562c0;
        uVar7 = native_sub_432760(lVar4);
        uVar8 = native_sub_432b64(lVar4);
        if ((uVar7 & 1) == 0) {
          uVar2 = *(ushort *)(lVar4 + 0x48);
          if ((uVar8 & 1) == 0) {
            lVar4 = *plVar9 + (ulong)uVar2 * 0x10;
            (**(code **)(lVar4 + 0x138))(param_1,param_2,plVar9,*(undefined8 *)(lVar4 + 0x140));
            goto LAB_005562d4;
          }
          lVar4 = native_sub_432764(lVar4);
          lVar11 = *plVar9;
          if ((ulong)*(ushort *)(lVar11 + 0x12a) != 0) {
            uVar7 = 0;
            piVar12 = (int *)(*(long *)(lVar11 + 0xb0) + 8);
            do {
              if (*(long *)(piVar12 + -2) == lVar4) {
                puVar6 = (undefined8 *)(lVar11 + (long)(int)(*piVar12 + (uint)uVar2) * 0x10 + 0x138)
                ;
                goto LAB_005560d4;
              }
              uVar7 = uVar7 + 1;
              piVar12 = piVar12 + 4;
            } while (uVar7 < *(ushort *)(lVar11 + 0x12a));
          }
          puVar6 = (undefined8 *)native_sub_3c9b34(plVar9,lVar4,(ulong)uVar2);
LAB_005560d4:
          pcVar14 = (code *)*puVar6;
          puVar6 = (undefined8 *)puVar6[1];
        }
        else {
          if ((uVar8 & 1) == 0) {
            uVar5 = *(undefined8 *)(*plVar9 + (ulong)*(ushort *)(lVar4 + 0x48) * 0x10 + 0x140);
          }
          else {
            lVar11 = *plVar9;
            if ((ulong)*(ushort *)(lVar11 + 0x12a) != 0) {
              uVar7 = 0;
              piVar12 = (int *)(*(long *)(lVar11 + 0xb0) + 8);
              do {
                if (*(long *)(piVar12 + -2) == *(long *)(lVar4 + 0x18)) {
                  lVar11 = lVar11 + (long)(int)(*piVar12 + (uint)*(ushort *)(lVar4 + 0x48)) * 0x10 +
                           0x138;
                  goto LAB_005560ac;
                }
                uVar7 = uVar7 + 1;
                piVar12 = piVar12 + 4;
              } while (uVar7 < *(ushort *)(lVar11 + 0x12a));
            }
            lVar11 = native_sub_3c9b34(plVar9);
LAB_005560ac:
            uVar5 = *(undefined8 *)(lVar11 + 8);
          }
          puVar6 = (undefined8 *)native_sub_4327e8(uVar5,lVar4);
          pcVar14 = (code *)*puVar6;
        }
        (*pcVar14)(param_1,param_2,plVar9,puVar6);
      }
      else {
        if ((((plVar1 == (long *)0x0) || (*(short *)(lVar4 + 0x48) == -1)) ||
            ((*(byte *)(*plVar1 + 0x115) & 1) != 0)) || (*(long *)(lVar13 + 0x18) == 0))
        goto LAB_0055622c;
        uVar7 = native_sub_432760(lVar4);
        uVar8 = native_sub_432b64(lVar4);
        if ((uVar7 & 1) == 0) {
          uVar2 = *(ushort *)(lVar4 + 0x48);
          if ((uVar8 & 1) == 0) {
            lVar4 = *plVar1 + (ulong)uVar2 * 0x10;
            (**(code **)(lVar4 + 0x138))
                      (param_1,param_2,plVar1,plVar9,*(undefined8 *)(lVar4 + 0x140));
            goto LAB_005562d4;
          }
          lVar4 = native_sub_432764(lVar4);
          lVar11 = *plVar1;
          if ((ulong)*(ushort *)(lVar11 + 0x12a) != 0) {
            uVar7 = 0;
            piVar12 = (int *)(*(long *)(lVar11 + 0xb0) + 8);
            do {
              if (*(long *)(piVar12 + -2) == lVar4) {
                puVar6 = (undefined8 *)(lVar11 + (long)(int)(*piVar12 + (uint)uVar2) * 0x10 + 0x138)
                ;
                goto LAB_00556148;
              }
              uVar7 = uVar7 + 1;
              piVar12 = piVar12 + 4;
            } while (uVar7 < *(ushort *)(lVar11 + 0x12a));
          }
          puVar6 = (undefined8 *)native_sub_3c9b34(plVar1,lVar4,(ulong)uVar2);
LAB_00556148:
          pcVar14 = (code *)*puVar6;
          puVar6 = (undefined8 *)puVar6[1];
        }
        else {
          if ((uVar8 & 1) == 0) {
            uVar5 = *(undefined8 *)(*plVar1 + (ulong)*(ushort *)(lVar4 + 0x48) * 0x10 + 0x140);
          }
          else {
            lVar11 = *plVar1;
            if ((ulong)*(ushort *)(lVar11 + 0x12a) != 0) {
              uVar7 = 0;
              piVar12 = (int *)(*(long *)(lVar11 + 0xb0) + 8);
              do {
                if (*(long *)(piVar12 + -2) == *(long *)(lVar4 + 0x18)) {
                  lVar11 = lVar11 + (long)(int)(*piVar12 + (uint)*(ushort *)(lVar4 + 0x48)) * 0x10 +
                           0x138;
                  goto LAB_00556120;
                }
                uVar7 = uVar7 + 1;
                piVar12 = piVar12 + 4;
              } while (uVar7 < *(ushort *)(lVar11 + 0x12a));
            }
            lVar11 = native_sub_3c9b34(plVar1);
LAB_00556120:
            uVar5 = *(undefined8 *)(lVar11 + 8);
          }
          puVar6 = (undefined8 *)native_sub_4327e8(uVar5,lVar4);
          pcVar14 = (code *)*puVar6;
        }
        (*pcVar14)(param_1,param_2,plVar1,plVar9,puVar6);
      }
    }
    else if (bVar3) {
LAB_0055622c:
      (*pcVar14)(param_1,param_2,plVar1,plVar9,lVar4);
    }
    else {
LAB_005562c0:
      (*pcVar14)(param_1,param_2,plVar9,lVar4);
    }
LAB_005562d4:
    lVar10 = lVar10 + 1;
    if (lVar10 == lVar15) {
      return;
    }
  } while( true );
}



/* UIEventListener$$OnDragOver @ 0x9ea164
 * void UIEventListener__OnDragOver (UIEventListener_o* __this, const MethodInfo* method); */

/* UIEventListener$$OnDragOver
   void UIEventListener__OnDragOver (UIEventListener_o* __this, const MethodInfo* method); */

void native_UIEventListener__OnDragOver_9ea164(long param_1)

{
  long *plVar1;
  ushort uVar2;
  bool bVar3;
  long lVar4;
  undefined8 uVar5;
  undefined8 *puVar6;
  ulong uVar7;
  ulong uVar8;
  long *plVar9;
  long lVar10;
  long lVar11;
  int *piVar12;
  long lVar13;
  code *pcVar14;
  long lVar15;
  long *plVar16;
  long lStack_58;
  
  uVar8 = native_UIEventListener__get_isColliderEnabled_9e9d04();
  if (((uVar8 & 1) == 0) || (lVar13 = *(long *)(param_1 + 0x68), lVar13 == 0)) {
    return;
  }
  plVar9 = (long *)native_UnityEngine_Component__get_gameObject_8da66c(param_1,0);
  lStack_58 = lVar13;
  lVar10 = *(long *)(lVar13 + 0x68);
  if (lVar10 == 0) {
    plVar16 = &lStack_58;
    lVar15 = 1;
  }
  else {
    lVar15 = *(long *)(lVar10 + 0x18);
    if (lVar15 == 0) {
      return;
    }
    plVar16 = (long *)(lVar10 + 0x20);
  }
  lVar10 = 0;
  do {
    lVar11 = plVar16[lVar10];
    plVar1 = *(long **)(lVar11 + 0x20);
    lVar4 = *(long *)(lVar11 + 0x28);
    pcVar14 = *(code **)(lVar11 + 0x10);
    if (*(short *)(lVar4 + 0x48) == -1) {
      native_sub_4327f4(lVar4);
    }
    uVar8 = native_sub_432768(lVar4);
    bVar3 = *(char *)(lVar4 + 0x4a) != '\x01';
    if ((uVar8 & 1) == 0) {
      if (bVar3) {
        if ((*(short *)(lVar4 + 0x48) == -1) || (*(long *)(lVar13 + 0x18) == 0)) goto LAB_00556754;
        uVar8 = native_sub_432760(lVar4);
        uVar7 = native_sub_432b64(lVar4);
        if ((uVar8 & 1) == 0) {
          uVar2 = *(ushort *)(lVar4 + 0x48);
          if ((uVar7 & 1) == 0) {
            lVar4 = *plVar9 + (ulong)uVar2 * 0x10;
            (**(code **)(lVar4 + 0x138))(plVar9,*(undefined8 *)(lVar4 + 0x140));
            goto LAB_00556760;
          }
          lVar4 = native_sub_432764(lVar4);
          lVar11 = *plVar9;
          if ((ulong)*(ushort *)(lVar11 + 0x12a) != 0) {
            uVar8 = 0;
            piVar12 = (int *)(*(long *)(lVar11 + 0xb0) + 8);
            do {
              if (*(long *)(piVar12 + -2) == lVar4) {
                puVar6 = (undefined8 *)(lVar11 + (long)(int)(*piVar12 + (uint)uVar2) * 0x10 + 0x138)
                ;
                goto LAB_00556588;
              }
              uVar8 = uVar8 + 1;
              piVar12 = piVar12 + 4;
            } while (uVar8 < *(ushort *)(lVar11 + 0x12a));
          }
          puVar6 = (undefined8 *)native_sub_3c9b34(plVar9,lVar4,(ulong)uVar2);
LAB_00556588:
          pcVar14 = (code *)*puVar6;
          puVar6 = (undefined8 *)puVar6[1];
        }
        else {
          if ((uVar7 & 1) == 0) {
            uVar5 = *(undefined8 *)(*plVar9 + (ulong)*(ushort *)(lVar4 + 0x48) * 0x10 + 0x140);
          }
          else {
            lVar11 = *plVar9;
            if ((ulong)*(ushort *)(lVar11 + 0x12a) != 0) {
              uVar8 = 0;
              piVar12 = (int *)(*(long *)(lVar11 + 0xb0) + 8);
              do {
                if (*(long *)(piVar12 + -2) == *(long *)(lVar4 + 0x18)) {
                  lVar11 = lVar11 + (long)(int)(*piVar12 + (uint)*(ushort *)(lVar4 + 0x48)) * 0x10 +
                           0x138;
                  goto LAB_00556560;
                }
                uVar8 = uVar8 + 1;
                piVar12 = piVar12 + 4;
              } while (uVar8 < *(ushort *)(lVar11 + 0x12a));
            }
            lVar11 = native_sub_3c9b34(plVar9);
LAB_00556560:
            uVar5 = *(undefined8 *)(lVar11 + 8);
          }
          puVar6 = (undefined8 *)native_sub_4327e8(uVar5,lVar4);
          pcVar14 = (code *)*puVar6;
        }
        (*pcVar14)(plVar9,puVar6);
      }
      else {
        if ((((plVar1 == (long *)0x0) || (*(short *)(lVar4 + 0x48) == -1)) ||
            ((*(byte *)(*plVar1 + 0x115) & 1) != 0)) || (*(long *)(lVar13 + 0x18) == 0))
        goto LAB_005566c8;
        uVar8 = native_sub_432760(lVar4);
        uVar7 = native_sub_432b64(lVar4);
        if ((uVar8 & 1) == 0) {
          uVar2 = *(ushort *)(lVar4 + 0x48);
          if ((uVar7 & 1) == 0) {
            lVar4 = *plVar1 + (ulong)uVar2 * 0x10;
            (**(code **)(lVar4 + 0x138))(plVar1,plVar9,*(undefined8 *)(lVar4 + 0x140));
            goto LAB_00556760;
          }
          lVar4 = native_sub_432764(lVar4);
          lVar11 = *plVar1;
          if ((ulong)*(ushort *)(lVar11 + 0x12a) != 0) {
            uVar8 = 0;
            piVar12 = (int *)(*(long *)(lVar11 + 0xb0) + 8);
            do {
              if (*(long *)(piVar12 + -2) == lVar4) {
                puVar6 = (undefined8 *)(lVar11 + (long)(int)(*piVar12 + (uint)uVar2) * 0x10 + 0x138)
                ;
                goto LAB_005565ec;
              }
              uVar8 = uVar8 + 1;
              piVar12 = piVar12 + 4;
            } while (uVar8 < *(ushort *)(lVar11 + 0x12a));
          }
          puVar6 = (undefined8 *)native_sub_3c9b34(plVar1,lVar4,(ulong)uVar2);
LAB_005565ec:
          pcVar14 = (code *)*puVar6;
          puVar6 = (undefined8 *)puVar6[1];
        }
        else {
          if ((uVar7 & 1) == 0) {
            uVar5 = *(undefined8 *)(*plVar1 + (ulong)*(ushort *)(lVar4 + 0x48) * 0x10 + 0x140);
          }
          else {
            lVar11 = *plVar1;
            if ((ulong)*(ushort *)(lVar11 + 0x12a) != 0) {
              uVar8 = 0;
              piVar12 = (int *)(*(long *)(lVar11 + 0xb0) + 8);
              do {
                if (*(long *)(piVar12 + -2) == *(long *)(lVar4 + 0x18)) {
                  lVar11 = lVar11 + (long)(int)(*piVar12 + (uint)*(ushort *)(lVar4 + 0x48)) * 0x10 +
                           0x138;
                  goto LAB_005565c4;
                }
                uVar8 = uVar8 + 1;
                piVar12 = piVar12 + 4;
              } while (uVar8 < *(ushort *)(lVar11 + 0x12a));
            }
            lVar11 = native_sub_3c9b34(plVar1);
LAB_005565c4:
            uVar5 = *(undefined8 *)(lVar11 + 8);
          }
          puVar6 = (undefined8 *)native_sub_4327e8(uVar5,lVar4);
          pcVar14 = (code *)*puVar6;
        }
        (*pcVar14)(plVar1,plVar9,puVar6);
      }
    }
    else if (bVar3) {
LAB_005566c8:
      (*pcVar14)(plVar1,plVar9,lVar4);
    }
    else {
LAB_00556754:
      (*pcVar14)(plVar9,lVar4);
    }
LAB_00556760:
    lVar10 = lVar10 + 1;
    if (lVar10 == lVar15) {
      return;
    }
  } while( true );
}



/* UIEventListener$$OnDragOut @ 0x9ea1b4
 * void UIEventListener__OnDragOut (UIEventListener_o* __this, const MethodInfo* method); */

/* UIEventListener$$OnDragOut
   void UIEventListener__OnDragOut (UIEventListener_o* __this, const MethodInfo* method); */

void native_UIEventListener__OnDragOut_9ea1b4(long param_1)

{
  long *plVar1;
  ushort uVar2;
  bool bVar3;
  long lVar4;
  undefined8 uVar5;
  undefined8 *puVar6;
  ulong uVar7;
  ulong uVar8;
  long *plVar9;
  long lVar10;
  long lVar11;
  int *piVar12;
  long lVar13;
  code *pcVar14;
  long lVar15;
  long *plVar16;
  long lStack_58;
  
  uVar8 = native_UIEventListener__get_isColliderEnabled_9e9d04();
  if (((uVar8 & 1) == 0) || (lVar13 = *(long *)(param_1 + 0x70), lVar13 == 0)) {
    return;
  }
  plVar9 = (long *)native_UnityEngine_Component__get_gameObject_8da66c(param_1,0);
  lStack_58 = lVar13;
  lVar10 = *(long *)(lVar13 + 0x68);
  if (lVar10 == 0) {
    plVar16 = &lStack_58;
    lVar15 = 1;
  }
  else {
    lVar15 = *(long *)(lVar10 + 0x18);
    if (lVar15 == 0) {
      return;
    }
    plVar16 = (long *)(lVar10 + 0x20);
  }
  lVar10 = 0;
  do {
    lVar11 = plVar16[lVar10];
    plVar1 = *(long **)(lVar11 + 0x20);
    lVar4 = *(long *)(lVar11 + 0x28);
    pcVar14 = *(code **)(lVar11 + 0x10);
    if (*(short *)(lVar4 + 0x48) == -1) {
      native_sub_4327f4(lVar4);
    }
    uVar8 = native_sub_432768(lVar4);
    bVar3 = *(char *)(lVar4 + 0x4a) != '\x01';
    if ((uVar8 & 1) == 0) {
      if (bVar3) {
        if ((*(short *)(lVar4 + 0x48) == -1) || (*(long *)(lVar13 + 0x18) == 0)) goto LAB_00556754;
        uVar8 = native_sub_432760(lVar4);
        uVar7 = native_sub_432b64(lVar4);
        if ((uVar8 & 1) == 0) {
          uVar2 = *(ushort *)(lVar4 + 0x48);
          if ((uVar7 & 1) == 0) {
            lVar4 = *plVar9 + (ulong)uVar2 * 0x10;
            (**(code **)(lVar4 + 0x138))(plVar9,*(undefined8 *)(lVar4 + 0x140));
            goto LAB_00556760;
          }
          lVar4 = native_sub_432764(lVar4);
          lVar11 = *plVar9;
          if ((ulong)*(ushort *)(lVar11 + 0x12a) != 0) {
            uVar8 = 0;
            piVar12 = (int *)(*(long *)(lVar11 + 0xb0) + 8);
            do {
              if (*(long *)(piVar12 + -2) == lVar4) {
                puVar6 = (undefined8 *)(lVar11 + (long)(int)(*piVar12 + (uint)uVar2) * 0x10 + 0x138)
                ;
                goto LAB_00556588;
              }
              uVar8 = uVar8 + 1;
              piVar12 = piVar12 + 4;
            } while (uVar8 < *(ushort *)(lVar11 + 0x12a));
          }
          puVar6 = (undefined8 *)native_sub_3c9b34(plVar9,lVar4,(ulong)uVar2);
LAB_00556588:
          pcVar14 = (code *)*puVar6;
          puVar6 = (undefined8 *)puVar6[1];
        }
        else {
          if ((uVar7 & 1) == 0) {
            uVar5 = *(undefined8 *)(*plVar9 + (ulong)*(ushort *)(lVar4 + 0x48) * 0x10 + 0x140);
          }
          else {
            lVar11 = *plVar9;
            if ((ulong)*(ushort *)(lVar11 + 0x12a) != 0) {
              uVar8 = 0;
              piVar12 = (int *)(*(long *)(lVar11 + 0xb0) + 8);
              do {
                if (*(long *)(piVar12 + -2) == *(long *)(lVar4 + 0x18)) {
                  lVar11 = lVar11 + (long)(int)(*piVar12 + (uint)*(ushort *)(lVar4 + 0x48)) * 0x10 +
                           0x138;
                  goto LAB_00556560;
                }
                uVar8 = uVar8 + 1;
                piVar12 = piVar12 + 4;
              } while (uVar8 < *(ushort *)(lVar11 + 0x12a));
            }
            lVar11 = native_sub_3c9b34(plVar9);
LAB_00556560:
            uVar5 = *(undefined8 *)(lVar11 + 8);
          }
          puVar6 = (undefined8 *)native_sub_4327e8(uVar5,lVar4);
          pcVar14 = (code *)*puVar6;
        }
        (*pcVar14)(plVar9,puVar6);
      }
      else {
        if ((((plVar1 == (long *)0x0) || (*(short *)(lVar4 + 0x48) == -1)) ||
            ((*(byte *)(*plVar1 + 0x115) & 1) != 0)) || (*(long *)(lVar13 + 0x18) == 0))
        goto LAB_005566c8;
        uVar8 = native_sub_432760(lVar4);
        uVar7 = native_sub_432b64(lVar4);
        if ((uVar8 & 1) == 0) {
          uVar2 = *(ushort *)(lVar4 + 0x48);
          if ((uVar7 & 1) == 0) {
            lVar4 = *plVar1 + (ulong)uVar2 * 0x10;
            (**(code **)(lVar4 + 0x138))(plVar1,plVar9,*(undefined8 *)(lVar4 + 0x140));
            goto LAB_00556760;
          }
          lVar4 = native_sub_432764(lVar4);
          lVar11 = *plVar1;
          if ((ulong)*(ushort *)(lVar11 + 0x12a) != 0) {
            uVar8 = 0;
            piVar12 = (int *)(*(long *)(lVar11 + 0xb0) + 8);
            do {
              if (*(long *)(piVar12 + -2) == lVar4) {
                puVar6 = (undefined8 *)(lVar11 + (long)(int)(*piVar12 + (uint)uVar2) * 0x10 + 0x138)
                ;
                goto LAB_005565ec;
              }
              uVar8 = uVar8 + 1;
              piVar12 = piVar12 + 4;
            } while (uVar8 < *(ushort *)(lVar11 + 0x12a));
          }
          puVar6 = (undefined8 *)native_sub_3c9b34(plVar1,lVar4,(ulong)uVar2);
LAB_005565ec:
          pcVar14 = (code *)*puVar6;
          puVar6 = (undefined8 *)puVar6[1];
        }
        else {
          if ((uVar7 & 1) == 0) {
            uVar5 = *(undefined8 *)(*plVar1 + (ulong)*(ushort *)(lVar4 + 0x48) * 0x10 + 0x140);
          }
          else {
            lVar11 = *plVar1;
            if ((ulong)*(ushort *)(lVar11 + 0x12a) != 0) {
              uVar8 = 0;
              piVar12 = (int *)(*(long *)(lVar11 + 0xb0) + 8);
              do {
                if (*(long *)(piVar12 + -2) == *(long *)(lVar4 + 0x18)) {
                  lVar11 = lVar11 + (long)(int)(*piVar12 + (uint)*(ushort *)(lVar4 + 0x48)) * 0x10 +
                           0x138;
                  goto LAB_005565c4;
                }
                uVar8 = uVar8 + 1;
                piVar12 = piVar12 + 4;
              } while (uVar8 < *(ushort *)(lVar11 + 0x12a));
            }
            lVar11 = native_sub_3c9b34(plVar1);
LAB_005565c4:
            uVar5 = *(undefined8 *)(lVar11 + 8);
          }
          puVar6 = (undefined8 *)native_sub_4327e8(uVar5,lVar4);
          pcVar14 = (code *)*puVar6;
        }
        (*pcVar14)(plVar1,plVar9,puVar6);
      }
    }
    else if (bVar3) {
LAB_005566c8:
      (*pcVar14)(plVar1,plVar9,lVar4);
    }
    else {
LAB_00556754:
      (*pcVar14)(plVar9,lVar4);
    }
LAB_00556760:
    lVar10 = lVar10 + 1;
    if (lVar10 == lVar15) {
      return;
    }
  } while( true );
}



/* UIEventListener$$OnDragEnd @ 0x9ea204
 * void UIEventListener__OnDragEnd (UIEventListener_o* __this, const MethodInfo* method); */

/* UIEventListener$$OnDragEnd
   void UIEventListener__OnDragEnd (UIEventListener_o* __this, const MethodInfo* method); */

void native_UIEventListener__OnDragEnd_9ea204(long param_1)

{
  long *plVar1;
  ushort uVar2;
  bool bVar3;
  long lVar4;
  undefined8 uVar5;
  undefined8 *puVar6;
  ulong uVar7;
  ulong uVar8;
  long *plVar9;
  long lVar10;
  long lVar11;
  int *piVar12;
  long lVar13;
  code *pcVar14;
  long lVar15;
  long *plVar16;
  long lStack_58;
  
  lVar13 = *(long *)(param_1 + 0x78);
  if (lVar13 == 0) {
    return;
  }
  plVar9 = (long *)native_UnityEngine_Component__get_gameObject_8da66c(param_1,0);
  lStack_58 = lVar13;
  lVar10 = *(long *)(lVar13 + 0x68);
  if (lVar10 == 0) {
    plVar16 = &lStack_58;
    lVar15 = 1;
  }
  else {
    lVar15 = *(long *)(lVar10 + 0x18);
    if (lVar15 == 0) {
      return;
    }
    plVar16 = (long *)(lVar10 + 0x20);
  }
  lVar10 = 0;
  do {
    lVar11 = plVar16[lVar10];
    plVar1 = *(long **)(lVar11 + 0x20);
    lVar4 = *(long *)(lVar11 + 0x28);
    pcVar14 = *(code **)(lVar11 + 0x10);
    if (*(short *)(lVar4 + 0x48) == -1) {
      native_sub_4327f4(lVar4);
    }
    uVar7 = native_sub_432768(lVar4);
    bVar3 = *(char *)(lVar4 + 0x4a) != '\x01';
    if ((uVar7 & 1) == 0) {
      if (bVar3) {
        if ((*(short *)(lVar4 + 0x48) == -1) || (*(long *)(lVar13 + 0x18) == 0)) goto LAB_00556754;
        uVar7 = native_sub_432760(lVar4);
        uVar8 = native_sub_432b64(lVar4);
        if ((uVar7 & 1) == 0) {
          uVar2 = *(ushort *)(lVar4 + 0x48);
          if ((uVar8 & 1) == 0) {
            lVar4 = *plVar9 + (ulong)uVar2 * 0x10;
            (**(code **)(lVar4 + 0x138))(plVar9,*(undefined8 *)(lVar4 + 0x140));
            goto LAB_00556760;
          }
          lVar4 = native_sub_432764(lVar4);
          lVar11 = *plVar9;
          if ((ulong)*(ushort *)(lVar11 + 0x12a) != 0) {
            uVar7 = 0;
            piVar12 = (int *)(*(long *)(lVar11 + 0xb0) + 8);
            do {
              if (*(long *)(piVar12 + -2) == lVar4) {
                puVar6 = (undefined8 *)(lVar11 + (long)(int)(*piVar12 + (uint)uVar2) * 0x10 + 0x138)
                ;
                goto LAB_00556588;
              }
              uVar7 = uVar7 + 1;
              piVar12 = piVar12 + 4;
            } while (uVar7 < *(ushort *)(lVar11 + 0x12a));
          }
          puVar6 = (undefined8 *)native_sub_3c9b34(plVar9,lVar4,(ulong)uVar2);
LAB_00556588:
          pcVar14 = (code *)*puVar6;
          puVar6 = (undefined8 *)puVar6[1];
        }
        else {
          if ((uVar8 & 1) == 0) {
            uVar5 = *(undefined8 *)(*plVar9 + (ulong)*(ushort *)(lVar4 + 0x48) * 0x10 + 0x140);
          }
          else {
            lVar11 = *plVar9;
            if ((ulong)*(ushort *)(lVar11 + 0x12a) != 0) {
              uVar7 = 0;
              piVar12 = (int *)(*(long *)(lVar11 + 0xb0) + 8);
              do {
                if (*(long *)(piVar12 + -2) == *(long *)(lVar4 + 0x18)) {
                  lVar11 = lVar11 + (long)(int)(*piVar12 + (uint)*(ushort *)(lVar4 + 0x48)) * 0x10 +
                           0x138;
                  goto LAB_00556560;
                }
                uVar7 = uVar7 + 1;
                piVar12 = piVar12 + 4;
              } while (uVar7 < *(ushort *)(lVar11 + 0x12a));
            }
            lVar11 = native_sub_3c9b34(plVar9);
LAB_00556560:
            uVar5 = *(undefined8 *)(lVar11 + 8);
          }
          puVar6 = (undefined8 *)native_sub_4327e8(uVar5,lVar4);
          pcVar14 = (code *)*puVar6;
        }
        (*pcVar14)(plVar9,puVar6);
      }
      else {
        if ((((plVar1 == (long *)0x0) || (*(short *)(lVar4 + 0x48) == -1)) ||
            ((*(byte *)(*plVar1 + 0x115) & 1) != 0)) || (*(long *)(lVar13 + 0x18) == 0))
        goto LAB_005566c8;
        uVar7 = native_sub_432760(lVar4);
        uVar8 = native_sub_432b64(lVar4);
        if ((uVar7 & 1) == 0) {
          uVar2 = *(ushort *)(lVar4 + 0x48);
          if ((uVar8 & 1) == 0) {
            lVar4 = *plVar1 + (ulong)uVar2 * 0x10;
            (**(code **)(lVar4 + 0x138))(plVar1,plVar9,*(undefined8 *)(lVar4 + 0x140));
            goto LAB_00556760;
          }
          lVar4 = native_sub_432764(lVar4);
          lVar11 = *plVar1;
          if ((ulong)*(ushort *)(lVar11 + 0x12a) != 0) {
            uVar7 = 0;
            piVar12 = (int *)(*(long *)(lVar11 + 0xb0) + 8);
            do {
              if (*(long *)(piVar12 + -2) == lVar4) {
                puVar6 = (undefined8 *)(lVar11 + (long)(int)(*piVar12 + (uint)uVar2) * 0x10 + 0x138)
                ;
                goto LAB_005565ec;
              }
              uVar7 = uVar7 + 1;
              piVar12 = piVar12 + 4;
            } while (uVar7 < *(ushort *)(lVar11 + 0x12a));
          }
          puVar6 = (undefined8 *)native_sub_3c9b34(plVar1,lVar4,(ulong)uVar2);
LAB_005565ec:
          pcVar14 = (code *)*puVar6;
          puVar6 = (undefined8 *)puVar6[1];
        }
        else {
          if ((uVar8 & 1) == 0) {
            uVar5 = *(undefined8 *)(*plVar1 + (ulong)*(ushort *)(lVar4 + 0x48) * 0x10 + 0x140);
          }
          else {
            lVar11 = *plVar1;
            if ((ulong)*(ushort *)(lVar11 + 0x12a) != 0) {
              uVar7 = 0;
              piVar12 = (int *)(*(long *)(lVar11 + 0xb0) + 8);
              do {
                if (*(long *)(piVar12 + -2) == *(long *)(lVar4 + 0x18)) {
                  lVar11 = lVar11 + (long)(int)(*piVar12 + (uint)*(ushort *)(lVar4 + 0x48)) * 0x10 +
                           0x138;
                  goto LAB_005565c4;
                }
                uVar7 = uVar7 + 1;
                piVar12 = piVar12 + 4;
              } while (uVar7 < *(ushort *)(lVar11 + 0x12a));
            }
            lVar11 = native_sub_3c9b34(plVar1);
LAB_005565c4:
            uVar5 = *(undefined8 *)(lVar11 + 8);
          }
          puVar6 = (undefined8 *)native_sub_4327e8(uVar5,lVar4);
          pcVar14 = (code *)*puVar6;
        }
        (*pcVar14)(plVar1,plVar9,puVar6);
      }
    }
    else if (bVar3) {
LAB_005566c8:
      (*pcVar14)(plVar1,plVar9,lVar4);
    }
    else {
LAB_00556754:
      (*pcVar14)(plVar9,lVar4);
    }
LAB_00556760:
    lVar10 = lVar10 + 1;
    if (lVar10 == lVar15) {
      return;
    }
  } while( true );
}



/* UIEventListener$$OnDrop @ 0x9ea244
 * void UIEventListener__OnDrop (UIEventListener_o* __this, UnityEngine_GameObject_o* go, const MethodInfo* method); */

/* UIEventListener$$OnDrop
   void UIEventListener__OnDrop (UIEventListener_o* __this, UnityEngine_GameObject_o* go, const
   MethodInfo* method); */

void native_UIEventListener__OnDrop_9ea244(long param_1,undefined8 param_2)

{
  long *plVar1;
  ushort uVar2;
  bool bVar3;
  long lVar4;
  undefined8 uVar5;
  undefined8 *puVar6;
  ulong uVar7;
  ulong uVar8;
  long *plVar9;
  long lVar10;
  long lVar11;
  int *piVar12;
  long lVar13;
  code *pcVar14;
  long lVar15;
  long *plVar16;
  long lStack_58;
  
  uVar8 = native_UIEventListener__get_isColliderEnabled_9e9d04();
  if (((uVar8 & 1) == 0) || (lVar13 = *(long *)(param_1 + 0x80), lVar13 == 0)) {
    return;
  }
  plVar9 = (long *)native_UnityEngine_Component__get_gameObject_8da66c(param_1,0);
  lStack_58 = lVar13;
  lVar10 = *(long *)(lVar13 + 0x68);
  if (lVar10 == 0) {
    plVar16 = &lStack_58;
    lVar15 = 1;
  }
  else {
    lVar15 = *(long *)(lVar10 + 0x18);
    if (lVar15 == 0) {
      return;
    }
    plVar16 = (long *)(lVar10 + 0x20);
  }
  lVar10 = 0;
  do {
    lVar11 = plVar16[lVar10];
    plVar1 = *(long **)(lVar11 + 0x20);
    lVar4 = *(long *)(lVar11 + 0x28);
    pcVar14 = *(code **)(lVar11 + 0x10);
    if (*(short *)(lVar4 + 0x48) == -1) {
      native_sub_4327f4(lVar4);
    }
    uVar8 = native_sub_432768(lVar4);
    bVar3 = *(char *)(lVar4 + 0x4a) != '\x02';
    if ((uVar8 & 1) == 0) {
      if (bVar3) {
        if ((*(short *)(lVar4 + 0x48) == -1) || (*(long *)(lVar13 + 0x18) == 0)) goto LAB_00555e68;
        uVar8 = native_sub_432760(lVar4);
        uVar7 = native_sub_432b64(lVar4);
        if ((uVar8 & 1) == 0) {
          uVar2 = *(ushort *)(lVar4 + 0x48);
          if ((uVar7 & 1) == 0) {
            lVar4 = *plVar9 + (ulong)uVar2 * 0x10;
            (**(code **)(lVar4 + 0x138))(plVar9,param_2,*(undefined8 *)(lVar4 + 0x140));
            goto LAB_00555e78;
          }
          lVar4 = native_sub_432764(lVar4);
          lVar11 = *plVar9;
          if ((ulong)*(ushort *)(lVar11 + 0x12a) != 0) {
            uVar8 = 0;
            piVar12 = (int *)(*(long *)(lVar11 + 0xb0) + 8);
            do {
              if (*(long *)(piVar12 + -2) == lVar4) {
                puVar6 = (undefined8 *)(lVar11 + (long)(int)(*piVar12 + (uint)uVar2) * 0x10 + 0x138)
                ;
                goto LAB_00555c8c;
              }
              uVar8 = uVar8 + 1;
              piVar12 = piVar12 + 4;
            } while (uVar8 < *(ushort *)(lVar11 + 0x12a));
          }
          puVar6 = (undefined8 *)native_sub_3c9b34(plVar9,lVar4,(ulong)uVar2);
LAB_00555c8c:
          pcVar14 = (code *)*puVar6;
          puVar6 = (undefined8 *)puVar6[1];
        }
        else {
          if ((uVar7 & 1) == 0) {
            uVar5 = *(undefined8 *)(*plVar9 + (ulong)*(ushort *)(lVar4 + 0x48) * 0x10 + 0x140);
          }
          else {
            lVar11 = *plVar9;
            if ((ulong)*(ushort *)(lVar11 + 0x12a) != 0) {
              uVar8 = 0;
              piVar12 = (int *)(*(long *)(lVar11 + 0xb0) + 8);
              do {
                if (*(long *)(piVar12 + -2) == *(long *)(lVar4 + 0x18)) {
                  lVar11 = lVar11 + (long)(int)(*piVar12 + (uint)*(ushort *)(lVar4 + 0x48)) * 0x10 +
                           0x138;
                  goto LAB_00555c64;
                }
                uVar8 = uVar8 + 1;
                piVar12 = piVar12 + 4;
              } while (uVar8 < *(ushort *)(lVar11 + 0x12a));
            }
            lVar11 = native_sub_3c9b34(plVar9);
LAB_00555c64:
            uVar5 = *(undefined8 *)(lVar11 + 8);
          }
          puVar6 = (undefined8 *)native_sub_4327e8(uVar5,lVar4);
          pcVar14 = (code *)*puVar6;
        }
        (*pcVar14)(plVar9,param_2,puVar6);
      }
      else {
        if ((((plVar1 == (long *)0x0) || (*(short *)(lVar4 + 0x48) == -1)) ||
            ((*(byte *)(*plVar1 + 0x115) & 1) != 0)) || (*(long *)(lVar13 + 0x18) == 0))
        goto LAB_00555dd8;
        uVar8 = native_sub_432760(lVar4);
        uVar7 = native_sub_432b64(lVar4);
        if ((uVar8 & 1) == 0) {
          uVar2 = *(ushort *)(lVar4 + 0x48);
          if ((uVar7 & 1) == 0) {
            lVar4 = *plVar1 + (ulong)uVar2 * 0x10;
            (**(code **)(lVar4 + 0x138))(plVar1,plVar9,param_2,*(undefined8 *)(lVar4 + 0x140));
            goto LAB_00555e78;
          }
          lVar4 = native_sub_432764(lVar4);
          lVar11 = *plVar1;
          if ((ulong)*(ushort *)(lVar11 + 0x12a) != 0) {
            uVar8 = 0;
            piVar12 = (int *)(*(long *)(lVar11 + 0xb0) + 8);
            do {
              if (*(long *)(piVar12 + -2) == lVar4) {
                puVar6 = (undefined8 *)(lVar11 + (long)(int)(*piVar12 + (uint)uVar2) * 0x10 + 0x138)
                ;
                goto LAB_00555cf8;
              }
              uVar8 = uVar8 + 1;
              piVar12 = piVar12 + 4;
            } while (uVar8 < *(ushort *)(lVar11 + 0x12a));
          }
          puVar6 = (undefined8 *)native_sub_3c9b34(plVar1,lVar4,(ulong)uVar2);
LAB_00555cf8:
          pcVar14 = (code *)*puVar6;
          puVar6 = (undefined8 *)puVar6[1];
        }
        else {
          if ((uVar7 & 1) == 0) {
            uVar5 = *(undefined8 *)(*plVar1 + (ulong)*(ushort *)(lVar4 + 0x48) * 0x10 + 0x140);
          }
          else {
            lVar11 = *plVar1;
            if ((ulong)*(ushort *)(lVar11 + 0x12a) != 0) {
              uVar8 = 0;
              piVar12 = (int *)(*(long *)(lVar11 + 0xb0) + 8);
              do {
                if (*(long *)(piVar12 + -2) == *(long *)(lVar4 + 0x18)) {
                  lVar11 = lVar11 + (long)(int)(*piVar12 + (uint)*(ushort *)(lVar4 + 0x48)) * 0x10 +
                           0x138;
                  goto LAB_00555cd0;
                }
                uVar8 = uVar8 + 1;
                piVar12 = piVar12 + 4;
              } while (uVar8 < *(ushort *)(lVar11 + 0x12a));
            }
            lVar11 = native_sub_3c9b34(plVar1);
LAB_00555cd0:
            uVar5 = *(undefined8 *)(lVar11 + 8);
          }
          puVar6 = (undefined8 *)native_sub_4327e8(uVar5,lVar4);
          pcVar14 = (code *)*puVar6;
        }
        (*pcVar14)(plVar1,plVar9,param_2,puVar6);
      }
    }
    else if (bVar3) {
LAB_00555dd8:
      (*pcVar14)(plVar1,plVar9,param_2,lVar4);
    }
    else {
LAB_00555e68:
      (*pcVar14)(plVar9,param_2,lVar4);
    }
LAB_00555e78:
    lVar10 = lVar10 + 1;
    if (lVar10 == lVar15) {
      return;
    }
  } while( true );
}



/* UIEventListener$$OnKey @ 0x9ea2a8
 * void UIEventListener__OnKey (UIEventListener_o* __this, int32_t key, const MethodInfo* method); */

/* UIEventListener$$OnKey
   void UIEventListener__OnKey (UIEventListener_o* __this, int32_t key, const MethodInfo* method);
    */

void native_UIEventListener__OnKey_9ea2a8(long param_1,undefined4 param_2)

{
  long *plVar1;
  ushort uVar2;
  bool bVar3;
  long lVar4;
  undefined8 uVar5;
  undefined8 *puVar6;
  ulong uVar7;
  ulong uVar8;
  long *plVar9;
  long lVar10;
  long lVar11;
  int *piVar12;
  long lVar13;
  code *pcVar14;
  long lVar15;
  long *plVar16;
  long lStack_58;
  
  uVar8 = native_UIEventListener__get_isColliderEnabled_9e9d04();
  if (((uVar8 & 1) == 0) || (lVar13 = *(long *)(param_1 + 0x88), lVar13 == 0)) {
    return;
  }
  plVar9 = (long *)native_UnityEngine_Component__get_gameObject_8da66c(param_1,0);
  lStack_58 = lVar13;
  lVar10 = *(long *)(lVar13 + 0x68);
  if (lVar10 == 0) {
    plVar16 = &lStack_58;
    lVar15 = 1;
  }
  else {
    lVar15 = *(long *)(lVar10 + 0x18);
    if (lVar15 == 0) {
      return;
    }
    plVar16 = (long *)(lVar10 + 0x20);
  }
  lVar10 = 0;
  do {
    lVar11 = plVar16[lVar10];
    plVar1 = *(long **)(lVar11 + 0x20);
    lVar4 = *(long *)(lVar11 + 0x28);
    pcVar14 = *(code **)(lVar11 + 0x10);
    if (*(short *)(lVar4 + 0x48) == -1) {
      native_sub_4327f4(lVar4);
    }
    uVar8 = native_sub_432768(lVar4);
    bVar3 = *(char *)(lVar4 + 0x4a) != '\x02';
    if ((uVar8 & 1) == 0) {
      if (bVar3) {
        if ((*(short *)(lVar4 + 0x48) == -1) || (*(long *)(lVar13 + 0x18) == 0)) goto LAB_005559c4;
        uVar8 = native_sub_432760(lVar4);
        uVar7 = native_sub_432b64(lVar4);
        if ((uVar8 & 1) == 0) {
          uVar2 = *(ushort *)(lVar4 + 0x48);
          if ((uVar7 & 1) == 0) {
            lVar4 = *plVar9 + (ulong)uVar2 * 0x10;
            (**(code **)(lVar4 + 0x138))(plVar9,param_2,*(undefined8 *)(lVar4 + 0x140));
            goto LAB_005559d4;
          }
          lVar4 = native_sub_432764(lVar4);
          lVar11 = *plVar9;
          if ((ulong)*(ushort *)(lVar11 + 0x12a) != 0) {
            uVar8 = 0;
            piVar12 = (int *)(*(long *)(lVar11 + 0xb0) + 8);
            do {
              if (*(long *)(piVar12 + -2) == lVar4) {
                puVar6 = (undefined8 *)(lVar11 + (long)(int)(*piVar12 + (uint)uVar2) * 0x10 + 0x138)
                ;
                goto LAB_005557e8;
              }
              uVar8 = uVar8 + 1;
              piVar12 = piVar12 + 4;
            } while (uVar8 < *(ushort *)(lVar11 + 0x12a));
          }
          puVar6 = (undefined8 *)native_sub_3c9b34(plVar9,lVar4,(ulong)uVar2);
LAB_005557e8:
          pcVar14 = (code *)*puVar6;
          puVar6 = (undefined8 *)puVar6[1];
        }
        else {
          if ((uVar7 & 1) == 0) {
            uVar5 = *(undefined8 *)(*plVar9 + (ulong)*(ushort *)(lVar4 + 0x48) * 0x10 + 0x140);
          }
          else {
            lVar11 = *plVar9;
            if ((ulong)*(ushort *)(lVar11 + 0x12a) != 0) {
              uVar8 = 0;
              piVar12 = (int *)(*(long *)(lVar11 + 0xb0) + 8);
              do {
                if (*(long *)(piVar12 + -2) == *(long *)(lVar4 + 0x18)) {
                  lVar11 = lVar11 + (long)(int)(*piVar12 + (uint)*(ushort *)(lVar4 + 0x48)) * 0x10 +
                           0x138;
                  goto LAB_005557c0;
                }
                uVar8 = uVar8 + 1;
                piVar12 = piVar12 + 4;
              } while (uVar8 < *(ushort *)(lVar11 + 0x12a));
            }
            lVar11 = native_sub_3c9b34(plVar9);
LAB_005557c0:
            uVar5 = *(undefined8 *)(lVar11 + 8);
          }
          puVar6 = (undefined8 *)native_sub_4327e8(uVar5,lVar4);
          pcVar14 = (code *)*puVar6;
        }
        (*pcVar14)(plVar9,param_2,puVar6);
      }
      else {
        if ((((plVar1 == (long *)0x0) || (*(short *)(lVar4 + 0x48) == -1)) ||
            ((*(byte *)(*plVar1 + 0x115) & 1) != 0)) || (*(long *)(lVar13 + 0x18) == 0))
        goto LAB_00555934;
        uVar8 = native_sub_432760(lVar4);
        uVar7 = native_sub_432b64(lVar4);
        if ((uVar8 & 1) == 0) {
          uVar2 = *(ushort *)(lVar4 + 0x48);
          if ((uVar7 & 1) == 0) {
            lVar4 = *plVar1 + (ulong)uVar2 * 0x10;
            (**(code **)(lVar4 + 0x138))(plVar1,plVar9,param_2,*(undefined8 *)(lVar4 + 0x140));
            goto LAB_005559d4;
          }
          lVar4 = native_sub_432764(lVar4);
          lVar11 = *plVar1;
          if ((ulong)*(ushort *)(lVar11 + 0x12a) != 0) {
            uVar8 = 0;
            piVar12 = (int *)(*(long *)(lVar11 + 0xb0) + 8);
            do {
              if (*(long *)(piVar12 + -2) == lVar4) {
                puVar6 = (undefined8 *)(lVar11 + (long)(int)(*piVar12 + (uint)uVar2) * 0x10 + 0x138)
                ;
                goto LAB_00555854;
              }
              uVar8 = uVar8 + 1;
              piVar12 = piVar12 + 4;
            } while (uVar8 < *(ushort *)(lVar11 + 0x12a));
          }
          puVar6 = (undefined8 *)native_sub_3c9b34(plVar1,lVar4,(ulong)uVar2);
LAB_00555854:
          pcVar14 = (code *)*puVar6;
          puVar6 = (undefined8 *)puVar6[1];
        }
        else {
          if ((uVar7 & 1) == 0) {
            uVar5 = *(undefined8 *)(*plVar1 + (ulong)*(ushort *)(lVar4 + 0x48) * 0x10 + 0x140);
          }
          else {
            lVar11 = *plVar1;
            if ((ulong)*(ushort *)(lVar11 + 0x12a) != 0) {
              uVar8 = 0;
              piVar12 = (int *)(*(long *)(lVar11 + 0xb0) + 8);
              do {
                if (*(long *)(piVar12 + -2) == *(long *)(lVar4 + 0x18)) {
                  lVar11 = lVar11 + (long)(int)(*piVar12 + (uint)*(ushort *)(lVar4 + 0x48)) * 0x10 +
                           0x138;
                  goto LAB_0055582c;
                }
                uVar8 = uVar8 + 1;
                piVar12 = piVar12 + 4;
              } while (uVar8 < *(ushort *)(lVar11 + 0x12a));
            }
            lVar11 = native_sub_3c9b34(plVar1);
LAB_0055582c:
            uVar5 = *(undefined8 *)(lVar11 + 8);
          }
          puVar6 = (undefined8 *)native_sub_4327e8(uVar5,lVar4);
          pcVar14 = (code *)*puVar6;
        }
        (*pcVar14)(plVar1,plVar9,param_2,puVar6);
      }
    }
    else if (bVar3) {
LAB_00555934:
      (*pcVar14)(plVar1,plVar9,param_2,lVar4);
    }
    else {
LAB_005559c4:
      (*pcVar14)(plVar9,param_2,lVar4);
    }
LAB_005559d4:
    lVar10 = lVar10 + 1;
    if (lVar10 == lVar15) {
      return;
    }
  } while( true );
}



/* UIEventListener$$OnTooltip @ 0x9ea30c
 * void UIEventListener__OnTooltip (UIEventListener_o* __this, bool show, const MethodInfo* method); */

/* UIEventListener$$OnTooltip
   void UIEventListener__OnTooltip (UIEventListener_o* __this, bool show, const MethodInfo* method);
    */

void native_UIEventListener__OnTooltip_9ea30c(long param_1,uint param_2)

{
  long *plVar1;
  ushort uVar2;
  bool bVar3;
  long lVar4;
  undefined8 uVar5;
  undefined8 *puVar6;
  ulong uVar7;
  ulong uVar8;
  long *plVar9;
  long lVar10;
  long lVar11;
  int *piVar12;
  long lVar13;
  code *pcVar14;
  long lVar15;
  long *plVar16;
  long lStack_58;
  
  uVar8 = native_UIEventListener__get_isColliderEnabled_9e9d04();
  if (((uVar8 & 1) == 0) || (lVar13 = *(long *)(param_1 + 0x90), lVar13 == 0)) {
    return;
  }
  plVar9 = (long *)native_UnityEngine_Component__get_gameObject_8da66c(param_1,0);
  param_2 = param_2 & 1;
  lStack_58 = lVar13;
  lVar10 = *(long *)(lVar13 + 0x68);
  if (lVar10 == 0) {
    plVar16 = &lStack_58;
    lVar15 = 1;
  }
  else {
    lVar15 = *(long *)(lVar10 + 0x18);
    if (lVar15 == 0) {
      return;
    }
    plVar16 = (long *)(lVar10 + 0x20);
  }
  lVar10 = 0;
  do {
    lVar11 = plVar16[lVar10];
    plVar1 = *(long **)(lVar11 + 0x20);
    lVar4 = *(long *)(lVar11 + 0x28);
    pcVar14 = *(code **)(lVar11 + 0x10);
    if (*(short *)(lVar4 + 0x48) == -1) {
      native_sub_4327f4(lVar4);
    }
    uVar8 = native_sub_432768(lVar4);
    bVar3 = *(char *)(lVar4 + 0x4a) != '\x02';
    if ((uVar8 & 1) == 0) {
      if (bVar3) {
        if ((*(short *)(lVar4 + 0x48) == -1) || (*(long *)(lVar13 + 0x18) == 0)) goto LAB_00555078;
        uVar8 = native_sub_432760(lVar4);
        uVar7 = native_sub_432b64(lVar4);
        if ((uVar8 & 1) == 0) {
          uVar2 = *(ushort *)(lVar4 + 0x48);
          if ((uVar7 & 1) == 0) {
            lVar4 = *plVar9 + (ulong)uVar2 * 0x10;
            (**(code **)(lVar4 + 0x138))(plVar9,param_2,*(undefined8 *)(lVar4 + 0x140));
            goto LAB_00555088;
          }
          lVar4 = native_sub_432764(lVar4);
          lVar11 = *plVar9;
          if ((ulong)*(ushort *)(lVar11 + 0x12a) != 0) {
            uVar8 = 0;
            piVar12 = (int *)(*(long *)(lVar11 + 0xb0) + 8);
            do {
              if (*(long *)(piVar12 + -2) == lVar4) {
                puVar6 = (undefined8 *)(lVar11 + (long)(int)(*piVar12 + (uint)uVar2) * 0x10 + 0x138)
                ;
                goto LAB_00554e9c;
              }
              uVar8 = uVar8 + 1;
              piVar12 = piVar12 + 4;
            } while (uVar8 < *(ushort *)(lVar11 + 0x12a));
          }
          puVar6 = (undefined8 *)native_sub_3c9b34(plVar9,lVar4,(ulong)uVar2);
LAB_00554e9c:
          pcVar14 = (code *)*puVar6;
          puVar6 = (undefined8 *)puVar6[1];
        }
        else {
          if ((uVar7 & 1) == 0) {
            uVar5 = *(undefined8 *)(*plVar9 + (ulong)*(ushort *)(lVar4 + 0x48) * 0x10 + 0x140);
          }
          else {
            lVar11 = *plVar9;
            if ((ulong)*(ushort *)(lVar11 + 0x12a) != 0) {
              uVar8 = 0;
              piVar12 = (int *)(*(long *)(lVar11 + 0xb0) + 8);
              do {
                if (*(long *)(piVar12 + -2) == *(long *)(lVar4 + 0x18)) {
                  lVar11 = lVar11 + (long)(int)(*piVar12 + (uint)*(ushort *)(lVar4 + 0x48)) * 0x10 +
                           0x138;
                  goto LAB_00554e74;
                }
                uVar8 = uVar8 + 1;
                piVar12 = piVar12 + 4;
              } while (uVar8 < *(ushort *)(lVar11 + 0x12a));
            }
            lVar11 = native_sub_3c9b34(plVar9);
LAB_00554e74:
            uVar5 = *(undefined8 *)(lVar11 + 8);
          }
          puVar6 = (undefined8 *)native_sub_4327e8(uVar5,lVar4);
          pcVar14 = (code *)*puVar6;
        }
        (*pcVar14)(plVar9,param_2,puVar6);
      }
      else {
        if ((((plVar1 == (long *)0x0) || (*(short *)(lVar4 + 0x48) == -1)) ||
            ((*(byte *)(*plVar1 + 0x115) & 1) != 0)) || (*(long *)(lVar13 + 0x18) == 0))
        goto LAB_00554fe8;
        uVar8 = native_sub_432760(lVar4);
        uVar7 = native_sub_432b64(lVar4);
        if ((uVar8 & 1) == 0) {
          uVar2 = *(ushort *)(lVar4 + 0x48);
          if ((uVar7 & 1) == 0) {
            lVar4 = *plVar1 + (ulong)uVar2 * 0x10;
            (**(code **)(lVar4 + 0x138))(plVar1,plVar9,param_2,*(undefined8 *)(lVar4 + 0x140));
            goto LAB_00555088;
          }
          lVar4 = native_sub_432764(lVar4);
          lVar11 = *plVar1;
          if ((ulong)*(ushort *)(lVar11 + 0x12a) != 0) {
            uVar8 = 0;
            piVar12 = (int *)(*(long *)(lVar11 + 0xb0) + 8);
            do {
              if (*(long *)(piVar12 + -2) == lVar4) {
                puVar6 = (undefined8 *)(lVar11 + (long)(int)(*piVar12 + (uint)uVar2) * 0x10 + 0x138)
                ;
                goto LAB_00554f08;
              }
              uVar8 = uVar8 + 1;
              piVar12 = piVar12 + 4;
            } while (uVar8 < *(ushort *)(lVar11 + 0x12a));
          }
          puVar6 = (undefined8 *)native_sub_3c9b34(plVar1,lVar4,(ulong)uVar2);
LAB_00554f08:
          pcVar14 = (code *)*puVar6;
          puVar6 = (undefined8 *)puVar6[1];
        }
        else {
          if ((uVar7 & 1) == 0) {
            uVar5 = *(undefined8 *)(*plVar1 + (ulong)*(ushort *)(lVar4 + 0x48) * 0x10 + 0x140);
          }
          else {
            lVar11 = *plVar1;
            if ((ulong)*(ushort *)(lVar11 + 0x12a) != 0) {
              uVar8 = 0;
              piVar12 = (int *)(*(long *)(lVar11 + 0xb0) + 8);
              do {
                if (*(long *)(piVar12 + -2) == *(long *)(lVar4 + 0x18)) {
                  lVar11 = lVar11 + (long)(int)(*piVar12 + (uint)*(ushort *)(lVar4 + 0x48)) * 0x10 +
                           0x138;
                  goto LAB_00554ee0;
                }
                uVar8 = uVar8 + 1;
                piVar12 = piVar12 + 4;
              } while (uVar8 < *(ushort *)(lVar11 + 0x12a));
            }
            lVar11 = native_sub_3c9b34(plVar1);
LAB_00554ee0:
            uVar5 = *(undefined8 *)(lVar11 + 8);
          }
          puVar6 = (undefined8 *)native_sub_4327e8(uVar5,lVar4);
          pcVar14 = (code *)*puVar6;
        }
        (*pcVar14)(plVar1,plVar9,param_2,puVar6);
      }
    }
    else if (bVar3) {
LAB_00554fe8:
      (*pcVar14)(plVar1,plVar9,param_2,lVar4);
    }
    else {
LAB_00555078:
      (*pcVar14)(plVar9,param_2,lVar4);
    }
LAB_00555088:
    lVar10 = lVar10 + 1;
    if (lVar10 == lVar15) {
      return;
    }
  } while( true );
}



/* UIEventListener$$Clear @ 0x9ea370
 * void UIEventListener__Clear (UIEventListener_o* __this, const MethodInfo* method); */

/* UIEventListener$$Clear
   void UIEventListener__Clear (UIEventListener_o* __this, const MethodInfo* method); */

void native_UIEventListener__Clear_9ea370(long param_1)

{
  ulong *puVar1;
  char cVar2;
  bool bVar3;
  undefined8 *puVar4;
  
  *(undefined8 *)(param_1 + 0x20) = 0;
  native_sub_4326e0((undefined8 *)(param_1 + 0x20),0);
  *(undefined8 *)(param_1 + 0x28) = 0;
  native_sub_4326e0((undefined8 *)(param_1 + 0x28),0);
  *(undefined8 *)(param_1 + 0x30) = 0;
  native_sub_4326e0((undefined8 *)(param_1 + 0x30),0);
  *(undefined8 *)(param_1 + 0x38) = 0;
  native_sub_4326e0((undefined8 *)(param_1 + 0x38),0);
  *(undefined8 *)(param_1 + 0x40) = 0;
  native_sub_4326e0((undefined8 *)(param_1 + 0x40),0);
  *(undefined8 *)(param_1 + 0x48) = 0;
  native_sub_4326e0((undefined8 *)(param_1 + 0x48),0);
  *(undefined8 *)(param_1 + 0x50) = 0;
  native_sub_4326e0((undefined8 *)(param_1 + 0x50),0);
  *(undefined8 *)(param_1 + 0x58) = 0;
  native_sub_4326e0((undefined8 *)(param_1 + 0x58),0);
  *(undefined8 *)(param_1 + 0x60) = 0;
  native_sub_4326e0((undefined8 *)(param_1 + 0x60),0);
  *(undefined8 *)(param_1 + 0x68) = 0;
  native_sub_4326e0((undefined8 *)(param_1 + 0x68),0);
  *(undefined8 *)(param_1 + 0x70) = 0;
  native_sub_4326e0((undefined8 *)(param_1 + 0x70),0);
  *(undefined8 *)(param_1 + 0x78) = 0;
  native_sub_4326e0((undefined8 *)(param_1 + 0x78),0);
  *(undefined8 *)(param_1 + 0x80) = 0;
  native_sub_4326e0((undefined8 *)(param_1 + 0x80),0);
  *(undefined8 *)(param_1 + 0x88) = 0;
  native_sub_4326e0((undefined8 *)(param_1 + 0x88),0);
  puVar4 = (undefined8 *)(param_1 + 0x90);
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



/* UIEventListener$$Get @ 0x9ea474
 * UIEventListener_o* UIEventListener__Get (UnityEngine_GameObject_o* go, const MethodInfo* method); */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* UIEventListener$$Get
   UIEventListener_o* UIEventListener__Get (UnityEngine_GameObject_o* go, const MethodInfo* method);
    */

long native_UIEventListener__Get_9ea474(long param_1)

{
  long lVar1;
  long lVar2;
  ulong uVar3;
  long lVar4;
  undefined8 uVar5;
  
  if ((bRam000000000134191a & 1) == 0) {
    native_sub_43273c(&Method_UnityEngine_GameObject_AddComponent_UIEventListener____12e48d8);
    native_sub_43273c(&Method_UnityEngine_GameObject_GetComponent_UIEventListener____12e4aa0);
    native_sub_43273c(&UnityEngine_Object_TypeInfo_12d54e0);
    bRam000000000134191a = 1;
  }
  if (param_1 == 0) {
                    /* WARNING: Subroutine does not return */
    native_sub_432810();
  }
  lVar2 = native_UnityEngine_GameObject__GetComponent_BE2_BlockSectionHeader_Custom__4a2214
                    (param_1,_Method_UnityEngine_GameObject_GetComponent_UIEventListener____12e4aa0)
  ;
  if (((*(byte *)(_UnityEngine_Object_TypeInfo_12d54e0 + 0x133) >> 2 & 1) != 0) &&
     (*(int *)(_UnityEngine_Object_TypeInfo_12d54e0 + 0xe0) == 0)) {
    native_sub_4327ec(_UnityEngine_Object_TypeInfo_12d54e0);
  }
  uVar3 = native_UnityEngine_Object__op_Equality_8e9a3c(lVar2,0,0);
  lVar4 = _Method_UnityEngine_GameObject_AddComponent_UIEventListener____12e48d8;
  if ((uVar3 & 1) != 0) {
    if ((bRam000000000133e705 & 1) == 0) {
      native_sub_43273c(&System_Type_TypeInfo_12d6340);
      bRam000000000133e705 = 1;
    }
    uVar5 = **(undefined8 **)(lVar4 + 0x30);
    if (((*(byte *)(_System_Type_TypeInfo_12d6340 + 0x133) >> 2 & 1) != 0) &&
       (*(int *)(_System_Type_TypeInfo_12d6340 + 0xe0) == 0)) {
      native_sub_4327ec();
    }
    uVar5 = native_System_Type__GetTypeFromHandle_b0fb24(uVar5,0);
    if (param_1 != 0) {
      uVar5 = native_UnityEngine_GameObject__AddComponent_8de578(param_1,uVar5,0);
      lVar2 = *(long *)(*(long *)(lVar4 + 0x30) + 8);
      if ((*(byte *)(lVar2 + 0x132) & 1) == 0) {
        native_sub_3c9850(lVar2);
      }
      lVar2 = native_sub_4327f8(uVar5,lVar2);
      lVar4 = *(long *)(*(long *)(lVar4 + 0x30) + 8);
      if ((*(byte *)(lVar4 + 0x132) & 1) == 0) {
        native_sub_3c9850(lVar4);
      }
      if (lVar2 != 0) {
        lVar1 = native_sub_4327f8(lVar2,lVar4);
        if (lVar1 != 0) {
          return lVar1;
        }
        native_sub_432b04(lVar2,lVar4);
      }
      return 0;
    }
                    /* WARNING: Subroutine does not return */
    native_sub_432810();
  }
  return lVar2;
}



/* UIEventListener$$.ctor @ 0x9ea540
 * void UIEventListener___ctor (UIEventListener_o* __this, const MethodInfo* method); */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* UIEventListener$$.ctor
   void UIEventListener___ctor (UIEventListener_o* __this, const MethodInfo* method); */

undefined1  [16] native_UIEventListener___ctor_9ea540(ulong param_1)

{
  undefined1 auVar1 [16];
  
  *(undefined1 *)(param_1 + 0x98) = 1;
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


