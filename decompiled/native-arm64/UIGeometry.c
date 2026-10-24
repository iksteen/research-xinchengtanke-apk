/* ARM64 IL2CPP native pseudocode from Ghidra.
 * Recovered implementation, not original C# source.
 * Function boundaries follow the IL2CPP method address table. */


/* UIGeometry$$get_hasVertices @ 0x9ef420
 * bool UIGeometry__get_hasVertices (UIGeometry_o* __this, const MethodInfo* method); */

/* UIGeometry$$get_hasVertices
   bool UIGeometry__get_hasVertices (UIGeometry_o* __this, const MethodInfo* method); */

bool native_UIGeometry__get_hasVertices_9ef420(long param_1)

{
  if ((bRam000000000134195e & 1) == 0) {
    native_sub_43273c(&Method_System_Collections_Generic_List_Vector3__get_Count___12dd500);
    bRam000000000134195e = 1;
  }
  if (*(long *)(param_1 + 0x10) != 0) {
    return 0 < *(int *)(*(long *)(param_1 + 0x10) + 0x18);
  }
                    /* WARNING: Subroutine does not return */
  native_sub_432810();
}



/* UIGeometry$$get_hasTransformed @ 0x9ef474
 * bool UIGeometry__get_hasTransformed (UIGeometry_o* __this, const MethodInfo* method); */

/* UIGeometry$$get_hasTransformed
   bool UIGeometry__get_hasTransformed (UIGeometry_o* __this, const MethodInfo* method); */

bool native_UIGeometry__get_hasTransformed_9ef474(long param_1)

{
  int iVar1;
  
  if ((bRam000000000134195f & 1) == 0) {
    native_sub_43273c(&Method_System_Collections_Generic_List_Vector3__get_Count___12dd500);
    bRam000000000134195f = 1;
  }
  if ((*(long *)(param_1 + 0x30) != 0) &&
     (iVar1 = *(int *)(*(long *)(param_1 + 0x30) + 0x18), 0 < iVar1)) {
    if (*(long *)(param_1 + 0x10) != 0) {
      return iVar1 == *(int *)(*(long *)(param_1 + 0x10) + 0x18);
    }
                    /* WARNING: Subroutine does not return */
    native_sub_432810();
  }
  return false;
}



/* UIGeometry$$Clear @ 0x9ef4e4
 * void UIGeometry__Clear (UIGeometry_o* __this, const MethodInfo* method); */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* UIGeometry$$Clear
   void UIGeometry__Clear (UIGeometry_o* __this, const MethodInfo* method); */

void native_UIGeometry__Clear_9ef4e4(long param_1)

{
  long lVar1;
  
  if ((bRam0000000001341960 & 1) == 0) {
    native_sub_43273c(&Method_System_Collections_Generic_List_Color__Clear___12dc6a0);
    native_sub_43273c(&Method_System_Collections_Generic_List_Vector2__Clear___12dd4c0);
    native_sub_43273c(&Method_System_Collections_Generic_List_Vector3__Clear___12dd4f0);
    bRam0000000001341960 = 1;
  }
  if (*(long *)(param_1 + 0x10) != 0) {
    native_System_Collections_Generic_List_Vector3___Clear_d2c0b4
              (*(long *)(param_1 + 0x10),
               _Method_System_Collections_Generic_List_Vector3__Clear___12dd4f0);
    if (*(long *)(param_1 + 0x18) != 0) {
      native_System_Collections_Generic_List_Vector2___Clear_d29680
                (*(long *)(param_1 + 0x18),
                 _Method_System_Collections_Generic_List_Vector2__Clear___12dd4c0);
      if (*(long *)(param_1 + 0x20) != 0) {
        native_System_Collections_Generic_List_Color___Clear_d07404
                  (*(long *)(param_1 + 0x20),
                   _Method_System_Collections_Generic_List_Color__Clear___12dc6a0);
        lVar1 = *(long *)(param_1 + 0x30);
        if (lVar1 != 0) {
          if (0 < *(int *)(lVar1 + 0x18)) {
            native_System_Array__Clear_95191c
                      (*(undefined8 *)(lVar1 + 0x10),0,*(int *)(lVar1 + 0x18),0);
            *(undefined4 *)(lVar1 + 0x18) = 0;
          }
          *(int *)(lVar1 + 0x1c) = *(int *)(lVar1 + 0x1c) + 1;
          return;
        }
      }
    }
  }
                    /* WARNING: Subroutine does not return */
  native_sub_432810();
}



/* UIGeometry$$ApplyTransform @ 0x9ef590
 * void UIGeometry__ApplyTransform (UIGeometry_o* __this, UnityEngine_Matrix4x4_o widgetToPanel, bool generateNormals, const MethodInfo* method); */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* UIGeometry$$ApplyTransform
   void UIGeometry__ApplyTransform (UIGeometry_o* __this, UnityEngine_Matrix4x4_o widgetToPanel,
   bool generateNormals, const MethodInfo* method); */

void native_UIGeometry__ApplyTransform_9ef590
               (undefined1 param_1 [16],undefined4 param_2,undefined4 param_3,long param_4,
               undefined8 param_5,uint param_6)

{
  int iVar1;
  long lVar2;
  long lVar3;
  ulong uVar4;
  long lVar5;
  undefined4 uVar6;
  undefined8 uStack_80;
  undefined8 uStack_78;
  undefined8 uStack_70;
  undefined4 uStack_68;
  
  if ((bRam0000000001341961 & 1) == 0) {
    native_sub_43273c(&Method_System_Collections_Generic_List_Vector3__Add___12dd4e0);
    native_sub_43273c(&Method_System_Collections_Generic_List_Vector3__Clear___12dd4f0);
    native_sub_43273c(&Method_System_Collections_Generic_List_Vector3__get_Count___12dd500);
    native_sub_43273c(&Method_System_Collections_Generic_List_Vector3__get_Item___12dd508);
    bRam0000000001341961 = 1;
  }
  uStack_68 = 0;
  uStack_70 = 0;
  if ((*(long *)(param_4 + 0x10) != 0) && (*(long *)(param_4 + 0x30) != 0)) {
    iVar1 = *(int *)(*(long *)(param_4 + 0x10) + 0x18);
    native_System_Collections_Generic_List_Vector3___Clear_d2c0b4
              (*(long *)(param_4 + 0x30),
               _Method_System_Collections_Generic_List_Vector3__Clear___12dd4f0);
    if (iVar1 < 1) {
      return;
    }
    lVar5 = *(long *)(param_4 + 0x10);
    if (lVar5 != 0) {
      iVar1 = *(int *)(lVar5 + 0x18);
      if (iVar1 < 1) {
LAB_009ef6b8:
        if ((param_6 & 1) == 0) {
          return;
        }
        native_UnityEngine_Vector3__get_back_776a70(0);
        uVar6 = native_UnityEngine_Matrix4x4__MultiplyVector_8e5d44(param_5,0);
        uStack_70 = CONCAT44(param_2,uVar6);
        uStack_68 = param_3;
        uVar6 = native_UnityEngine_Vector3__get_normalized_7631d0(&uStack_70,0);
        *(undefined4 *)(param_4 + 0x38) = uVar6;
        *(undefined4 *)(param_4 + 0x3c) = param_2;
        *(undefined4 *)(param_4 + 0x40) = param_3;
        native_UnityEngine_Vector3__get_right_776b60(0);
        uVar6 = native_UnityEngine_Matrix4x4__MultiplyVector_8e5d44(param_5,0);
        uStack_70 = CONCAT44(param_2,uVar6);
        uStack_68 = param_3;
        native_UnityEngine_Vector3__get_normalized_7631d0(&uStack_70,0);
        uStack_80 = 0;
        uStack_78 = 0;
        native_UnityEngine_Vector4___ctor_776f24(&uStack_80,0);
        *(undefined8 *)(param_4 + 0x4c) = uStack_78;
        *(undefined8 *)(param_4 + 0x44) = uStack_80;
        return;
      }
      lVar3 = 0;
      uVar4 = 0;
      do {
        lVar2 = *(long *)(param_4 + 0x30);
        if (*(uint *)(lVar5 + 0x18) <= uVar4) {
          native_System_ThrowHelper__ThrowArgumentOutOfRangeException_9fe0f4(0);
        }
        lVar5 = *(long *)(lVar5 + 0x10) + lVar3;
        param_2 = *(undefined4 *)(lVar5 + 0x24);
        param_3 = *(undefined4 *)(lVar5 + 0x28);
        native_UnityEngine_Matrix4x4__MultiplyPoint3x4_8e5cec
                  (*(undefined4 *)(lVar5 + 0x20),param_5,0);
        if (lVar2 == 0) break;
        native_System_Collections_Generic_List_Vector3___Add_d2be08
                  (lVar2,_Method_System_Collections_Generic_List_Vector3__Add___12dd4e0);
        uVar4 = uVar4 + 1;
        if ((long)iVar1 <= (long)uVar4) goto LAB_009ef6b8;
        lVar5 = *(long *)(param_4 + 0x10);
        lVar3 = lVar3 + 0xc;
      } while (lVar5 != 0);
    }
  }
                    /* WARNING: Subroutine does not return */
  native_sub_432810();
}



/* UIGeometry$$WriteToBuffers @ 0x9ef750
 * void UIGeometry__WriteToBuffers (UIGeometry_o* __this, System_Collections_Generic_List_Vector3__o* v, System_Collections_Generic_List_Vector2__o* u, System_Collections_Generic_List_Color__o* c, System_Collections_Generic_List_Vector3__o* n, System_Collections_Generic_List_Vector4__o* t, System_Collections_Generic_List_Vector4__o* u2, const MethodInfo* method); */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* UIGeometry$$WriteToBuffers
   void UIGeometry__WriteToBuffers (UIGeometry_o* __this,
   System_Collections_Generic_List_Vector3__o* v, System_Collections_Generic_List_Vector2__o* u,
   System_Collections_Generic_List_Color__o* c, System_Collections_Generic_List_Vector3__o* n,
   System_Collections_Generic_List_Vector4__o* t, System_Collections_Generic_List_Vector4__o* u2,
   const MethodInfo* method); */

void native_UIGeometry__WriteToBuffers_9ef750
               (long param_1,long *param_2,long param_3,long param_4,long param_5,long param_6,
               long param_7)

{
  long *plVar1;
  ushort uVar2;
  int iVar3;
  bool bVar4;
  undefined8 uVar5;
  undefined8 *puVar6;
  ulong uVar7;
  long lVar8;
  int *piVar9;
  undefined1 *puVar10;
  long lVar11;
  ulong uVar12;
  long lVar13;
  long lVar14;
  code *pcVar15;
  long lVar16;
  ulong uVar17;
  undefined4 uVar18;
  
  if ((bRam0000000001341962 & 1) == 0) {
    native_sub_43273c(&Method_System_Collections_Generic_List_Vector4__Add___12dd520);
    native_sub_43273c(&Method_System_Collections_Generic_List_Vector2__Add___12dd4b0);
    native_sub_43273c(&Method_System_Collections_Generic_List_Color__Add___12dc690);
    native_sub_43273c(&Method_System_Collections_Generic_List_Vector3__Add___12dd4e0);
    native_sub_43273c(&Method_System_Collections_Generic_List_Vector3__get_Count___12dd500);
    native_sub_43273c(&Method_System_Collections_Generic_List_Vector2__get_Item___12dd4d0);
    native_sub_43273c(&Method_System_Collections_Generic_List_Color__get_Item___12dc6b0);
    native_sub_43273c(&Method_System_Collections_Generic_List_Vector3__get_Item___12dd508);
    bRam0000000001341962 = 1;
  }
  lVar13 = *(long *)(param_1 + 0x30);
  if ((lVar13 == 0) || (iVar3 = *(int *)(lVar13 + 0x18), iVar3 < 1)) {
    return;
  }
  if (param_5 == 0) {
    lVar14 = 0;
    lVar16 = 0;
    lVar11 = 0;
    uVar12 = 0;
    do {
      if (*(uint *)(lVar13 + 0x18) <= uVar12) {
        native_System_ThrowHelper__ThrowArgumentOutOfRangeException_9fe0f4(0);
      }
      if (param_2 == (long *)0x0) break;
      lVar13 = *(long *)(lVar13 + 0x10) + lVar14;
      native_System_Collections_Generic_List_Vector3___Add_d2be08
                (*(undefined4 *)(lVar13 + 0x20),*(undefined4 *)(lVar13 + 0x24),
                 *(undefined4 *)(lVar13 + 0x28),param_2,
                 _Method_System_Collections_Generic_List_Vector3__Add___12dd4e0);
      lVar13 = *(long *)(param_1 + 0x18);
      if (lVar13 == 0) break;
      if (*(uint *)(lVar13 + 0x18) <= uVar12) {
        native_System_ThrowHelper__ThrowArgumentOutOfRangeException_9fe0f4(0);
      }
      if (param_3 == 0) break;
      lVar13 = *(long *)(lVar13 + 0x10) + lVar16;
      native_System_Collections_Generic_List_Vector2___Add_d293ec
                (*(undefined4 *)(lVar13 + 0x20),*(undefined4 *)(lVar13 + 0x24),param_3,
                 _Method_System_Collections_Generic_List_Vector2__Add___12dd4b0);
      lVar13 = *(long *)(param_1 + 0x20);
      if (lVar13 == 0) break;
      if (*(uint *)(lVar13 + 0x18) <= uVar12) {
        native_System_ThrowHelper__ThrowArgumentOutOfRangeException_9fe0f4(0);
      }
      if (param_4 == 0) break;
      lVar13 = *(long *)(lVar13 + 0x10) + lVar11;
      uVar7 = (ulong)*(uint *)(lVar13 + 0x28);
      uVar17 = (ulong)*(uint *)(lVar13 + 0x2c);
      native_System_Collections_Generic_List_Color___Add_d07158
                (*(undefined4 *)(lVar13 + 0x20),*(undefined4 *)(lVar13 + 0x24),uVar7,uVar17,param_4,
                 _Method_System_Collections_Generic_List_Color__Add___12dc690);
      uVar12 = uVar12 + 1;
      if ((long)iVar3 <= (long)uVar12) goto LAB_009efa48;
      lVar13 = *(long *)(param_1 + 0x30);
      lVar11 = lVar11 + 0x10;
      lVar16 = lVar16 + 8;
      lVar14 = lVar14 + 0xc;
    } while (lVar13 != 0);
  }
  else {
    lVar14 = 0;
    lVar16 = 0;
    lVar11 = 0;
    uVar12 = 0;
    do {
      if (*(uint *)(lVar13 + 0x18) <= uVar12) {
        native_System_ThrowHelper__ThrowArgumentOutOfRangeException_9fe0f4(0);
      }
      if (param_2 == (long *)0x0) break;
      lVar13 = *(long *)(lVar13 + 0x10) + lVar14;
      native_System_Collections_Generic_List_Vector3___Add_d2be08
                (*(undefined4 *)(lVar13 + 0x20),*(undefined4 *)(lVar13 + 0x24),
                 *(undefined4 *)(lVar13 + 0x28),param_2,
                 _Method_System_Collections_Generic_List_Vector3__Add___12dd4e0);
      lVar13 = *(long *)(param_1 + 0x18);
      if (lVar13 == 0) break;
      if (*(uint *)(lVar13 + 0x18) <= uVar12) {
        native_System_ThrowHelper__ThrowArgumentOutOfRangeException_9fe0f4(0);
      }
      if (param_3 == 0) break;
      lVar13 = *(long *)(lVar13 + 0x10) + lVar16;
      native_System_Collections_Generic_List_Vector2___Add_d293ec
                (*(undefined4 *)(lVar13 + 0x20),*(undefined4 *)(lVar13 + 0x24),param_3,
                 _Method_System_Collections_Generic_List_Vector2__Add___12dd4b0);
      lVar13 = *(long *)(param_1 + 0x20);
      if (lVar13 == 0) break;
      if (*(uint *)(lVar13 + 0x18) <= uVar12) {
        native_System_ThrowHelper__ThrowArgumentOutOfRangeException_9fe0f4(0);
      }
      if (param_4 == 0) break;
      lVar13 = *(long *)(lVar13 + 0x10) + lVar11;
      native_System_Collections_Generic_List_Color___Add_d07158
                (*(undefined4 *)(lVar13 + 0x20),*(undefined4 *)(lVar13 + 0x24),
                 *(undefined4 *)(lVar13 + 0x28),*(undefined4 *)(lVar13 + 0x2c),param_4,
                 _Method_System_Collections_Generic_List_Color__Add___12dc690);
      native_System_Collections_Generic_List_Vector3___Add_d2be08
                (*(undefined4 *)(param_1 + 0x38),*(undefined4 *)(param_1 + 0x3c),
                 *(undefined4 *)(param_1 + 0x40),param_5,
                 _Method_System_Collections_Generic_List_Vector3__Add___12dd4e0);
      if (param_6 == 0) break;
      uVar7 = (ulong)*(uint *)(param_1 + 0x4c);
      uVar17 = (ulong)*(uint *)(param_1 + 0x50);
      native_System_Collections_Generic_List_Vector4___Add_d2e8b0
                (*(undefined4 *)(param_1 + 0x44),*(undefined4 *)(param_1 + 0x48),uVar7,uVar17,
                 param_6,_Method_System_Collections_Generic_List_Vector4__Add___12dd520);
      uVar12 = uVar12 + 1;
      if ((long)iVar3 <= (long)uVar12) goto LAB_009efa48;
      lVar13 = *(long *)(param_1 + 0x30);
      lVar11 = lVar11 + 0x10;
      lVar16 = lVar16 + 8;
      lVar14 = lVar14 + 0xc;
    } while (lVar13 != 0);
  }
LAB_009efb00:
                    /* WARNING: Subroutine does not return */
  native_sub_432810();
LAB_009efa48:
  if (param_7 == 0) {
LAB_009efb04:
    lVar13 = *(long *)(param_1 + 0x28);
    if (lVar13 == 0) {
      return;
    }
    lVar11 = *(long *)(lVar13 + 0x68);
    if (lVar11 == 0) {
      puVar10 = &stack0xffffffffffffff98;
      lVar16 = 1;
    }
    else {
      lVar16 = *(long *)(lVar11 + 0x18);
      if (lVar16 == 0) {
        return;
      }
      puVar10 = (undefined1 *)(lVar11 + 0x20);
    }
    lVar11 = 0;
    do {
      lVar8 = *(long *)(puVar10 + lVar11 * 8);
      plVar1 = *(long **)(lVar8 + 0x20);
      lVar14 = *(long *)(lVar8 + 0x28);
      pcVar15 = *(code **)(lVar8 + 0x10);
      if (*(short *)(lVar14 + 0x48) == -1) {
        native_sub_4327f4(lVar14);
      }
      uVar12 = native_sub_432768(lVar14);
      bVar4 = *(char *)(lVar14 + 0x4a) != '\x06';
      if ((uVar12 & 1) == 0) {
        if (bVar4) {
          if ((*(short *)(lVar14 + 0x48) == -1) || (*(long *)(lVar13 + 0x18) == 0))
          goto LAB_00556bd4;
          uVar12 = native_sub_432760(lVar14);
          uVar7 = native_sub_432b64(lVar14);
          if ((uVar12 & 1) == 0) {
            uVar2 = *(ushort *)(lVar14 + 0x48);
            if ((uVar7 & 1) == 0) {
              lVar14 = *param_2 + (ulong)uVar2 * 0x10;
              (**(code **)(lVar14 + 0x138))
                        (param_2,param_3,param_4,param_5,param_6,param_7,
                         *(undefined8 *)(lVar14 + 0x140));
              goto LAB_00556bf0;
            }
            lVar14 = native_sub_432764(lVar14);
            lVar8 = *param_2;
            if ((ulong)*(ushort *)(lVar8 + 0x12a) != 0) {
              uVar12 = 0;
              piVar9 = (int *)(*(long *)(lVar8 + 0xb0) + 8);
              do {
                if (*(long *)(piVar9 + -2) == lVar14) {
                  puVar6 = (undefined8 *)(lVar8 + (long)(int)(*piVar9 + (uint)uVar2) * 0x10 + 0x138)
                  ;
                  goto LAB_005569c0;
                }
                uVar12 = uVar12 + 1;
                piVar9 = piVar9 + 4;
              } while (uVar12 < *(ushort *)(lVar8 + 0x12a));
            }
            puVar6 = (undefined8 *)native_sub_3c9b34(param_2,lVar14,(ulong)uVar2);
LAB_005569c0:
            pcVar15 = (code *)*puVar6;
            puVar6 = (undefined8 *)puVar6[1];
          }
          else {
            if ((uVar7 & 1) == 0) {
              uVar5 = *(undefined8 *)(*param_2 + (ulong)*(ushort *)(lVar14 + 0x48) * 0x10 + 0x140);
            }
            else {
              lVar8 = *param_2;
              if ((ulong)*(ushort *)(lVar8 + 0x12a) != 0) {
                uVar12 = 0;
                piVar9 = (int *)(*(long *)(lVar8 + 0xb0) + 8);
                do {
                  if (*(long *)(piVar9 + -2) == *(long *)(lVar14 + 0x18)) {
                    lVar8 = lVar8 + (long)(int)(*piVar9 + (uint)*(ushort *)(lVar14 + 0x48)) * 0x10 +
                            0x138;
                    goto LAB_00556998;
                  }
                  uVar12 = uVar12 + 1;
                  piVar9 = piVar9 + 4;
                } while (uVar12 < *(ushort *)(lVar8 + 0x12a));
              }
              lVar8 = native_sub_3c9b34(param_2);
LAB_00556998:
              uVar5 = *(undefined8 *)(lVar8 + 8);
            }
            puVar6 = (undefined8 *)native_sub_4327e8(uVar5,lVar14);
            pcVar15 = (code *)*puVar6;
          }
          (*pcVar15)(param_2,param_3,param_4,param_5,param_6,param_7,puVar6);
        }
        else {
          if ((((plVar1 == (long *)0x0) || (*(short *)(lVar14 + 0x48) == -1)) ||
              ((*(byte *)(*plVar1 + 0x115) & 1) != 0)) || (*(long *)(lVar13 + 0x18) == 0))
          goto LAB_00556b34;
          uVar12 = native_sub_432760(lVar14);
          uVar7 = native_sub_432b64(lVar14);
          if ((uVar12 & 1) == 0) {
            uVar2 = *(ushort *)(lVar14 + 0x48);
            if ((uVar7 & 1) == 0) {
              lVar14 = *plVar1 + (ulong)uVar2 * 0x10;
              (**(code **)(lVar14 + 0x138))
                        (plVar1,param_2,param_3,param_4,param_5,param_6,param_7,
                         *(undefined8 *)(lVar14 + 0x140));
              goto LAB_00556bf0;
            }
            lVar14 = native_sub_432764(lVar14);
            lVar8 = *plVar1;
            if ((ulong)*(ushort *)(lVar8 + 0x12a) != 0) {
              uVar12 = 0;
              piVar9 = (int *)(*(long *)(lVar8 + 0xb0) + 8);
              do {
                if (*(long *)(piVar9 + -2) == lVar14) {
                  puVar6 = (undefined8 *)(lVar8 + (long)(int)(*piVar9 + (uint)uVar2) * 0x10 + 0x138)
                  ;
                  goto LAB_00556a44;
                }
                uVar12 = uVar12 + 1;
                piVar9 = piVar9 + 4;
              } while (uVar12 < *(ushort *)(lVar8 + 0x12a));
            }
            puVar6 = (undefined8 *)native_sub_3c9b34(plVar1,lVar14,(ulong)uVar2);
LAB_00556a44:
            pcVar15 = (code *)*puVar6;
            puVar6 = (undefined8 *)puVar6[1];
          }
          else {
            if ((uVar7 & 1) == 0) {
              uVar5 = *(undefined8 *)(*plVar1 + (ulong)*(ushort *)(lVar14 + 0x48) * 0x10 + 0x140);
            }
            else {
              lVar8 = *plVar1;
              if ((ulong)*(ushort *)(lVar8 + 0x12a) != 0) {
                uVar12 = 0;
                piVar9 = (int *)(*(long *)(lVar8 + 0xb0) + 8);
                do {
                  if (*(long *)(piVar9 + -2) == *(long *)(lVar14 + 0x18)) {
                    lVar8 = lVar8 + (long)(int)(*piVar9 + (uint)*(ushort *)(lVar14 + 0x48)) * 0x10 +
                            0x138;
                    goto LAB_00556a1c;
                  }
                  uVar12 = uVar12 + 1;
                  piVar9 = piVar9 + 4;
                } while (uVar12 < *(ushort *)(lVar8 + 0x12a));
              }
              lVar8 = native_sub_3c9b34(plVar1);
LAB_00556a1c:
              uVar5 = *(undefined8 *)(lVar8 + 8);
            }
            puVar6 = (undefined8 *)native_sub_4327e8(uVar5,lVar14);
            pcVar15 = (code *)*puVar6;
          }
          (*pcVar15)(plVar1,param_2,param_3,param_4,param_5,param_6,param_7,puVar6);
        }
      }
      else if (bVar4) {
LAB_00556b34:
        (*pcVar15)(plVar1,param_2,param_3,param_4,param_5,param_6,param_7,lVar14);
      }
      else {
LAB_00556bd4:
        (*pcVar15)(param_2,param_3,param_4,param_5,param_6,param_7,lVar14);
      }
LAB_00556bf0:
      lVar11 = lVar11 + 1;
      if (lVar11 == lVar16) {
        return;
      }
    } while( true );
  }
  native_UnityEngine_Vector4__get_zero_777178(0);
  lVar13 = *(long *)(param_1 + 0x10);
  if (lVar13 != 0) {
    iVar3 = *(int *)(lVar13 + 0x18);
    if (iVar3 < 1) goto LAB_009efb04;
    lVar11 = 0;
    uVar12 = 0;
    do {
      lVar16 = lVar13;
      if (*(uint *)(lVar13 + 0x18) <= uVar12) {
        native_System_ThrowHelper__ThrowArgumentOutOfRangeException_9fe0f4(0);
        lVar16 = *(long *)(param_1 + 0x10);
        if (lVar16 == 0) break;
      }
      uVar18 = *(undefined4 *)(*(long *)(lVar13 + 0x10) + lVar11 + 0x20);
      if (*(uint *)(lVar16 + 0x18) <= uVar12) {
        native_System_ThrowHelper__ThrowArgumentOutOfRangeException_9fe0f4(0);
      }
      native_System_Collections_Generic_List_Vector4___Add_d2e8b0
                (uVar18,*(undefined4 *)(*(long *)(lVar16 + 0x10) + lVar11 + 0x24),uVar7,uVar17,
                 param_7,_Method_System_Collections_Generic_List_Vector4__Add___12dd520);
      uVar12 = uVar12 + 1;
      if ((long)iVar3 <= (long)uVar12) goto LAB_009efb04;
      lVar13 = *(long *)(param_1 + 0x10);
      lVar11 = lVar11 + 0xc;
    } while (lVar13 != 0);
  }
  goto LAB_009efb00;
}



/* UIGeometry$$.ctor @ 0x9efb74
 * void UIGeometry___ctor (UIGeometry_o* __this, const MethodInfo* method); */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* UIGeometry$$.ctor
   void UIGeometry___ctor (UIGeometry_o* __this, const MethodInfo* method); */

undefined1  [16] native_UIGeometry___ctor_9efb74(ulong param_1)

{
  undefined8 uVar1;
  undefined1 auVar2 [16];
  
  if ((bRam0000000001341963 & 1) == 0) {
    native_sub_43273c(&Method_System_Collections_Generic_List_Vector2___ctor___12dd4a8);
    native_sub_43273c(&Method_System_Collections_Generic_List_Color___ctor___12dc688);
    native_sub_43273c(&Method_System_Collections_Generic_List_Vector3___ctor___12dd4d8);
    native_sub_43273c(&System_Collections_Generic_List_Vector2__TypeInfo_12d2c60);
    native_sub_43273c(&System_Collections_Generic_List_Vector3__TypeInfo_12d2c68);
    native_sub_43273c(&System_Collections_Generic_List_Color__TypeInfo_12d29f0);
    bRam0000000001341963 = 1;
  }
  uVar1 = native_sub_432808(_System_Collections_Generic_List_Vector3__TypeInfo_12d2c68);
  native_System_Collections_Generic_List_Vector3____ctor_d2b070
            (uVar1,_Method_System_Collections_Generic_List_Vector3___ctor___12dd4d8);
  *(undefined8 *)(param_1 + 0x10) = uVar1;
  native_sub_4326e0((undefined8 *)(param_1 + 0x10),uVar1);
  uVar1 = native_sub_432808(_System_Collections_Generic_List_Vector2__TypeInfo_12d2c60);
  native_System_Collections_Generic_List_Vector2____ctor_d28690
            (uVar1,_Method_System_Collections_Generic_List_Vector2___ctor___12dd4a8);
  *(undefined8 *)(param_1 + 0x18) = uVar1;
  native_sub_4326e0(param_1 + 0x18,uVar1);
  uVar1 = native_sub_432808(_System_Collections_Generic_List_Color__TypeInfo_12d29f0);
  native_System_Collections_Generic_List_Color____ctor_d063cc
            (uVar1,_Method_System_Collections_Generic_List_Color___ctor___12dc688);
  *(undefined8 *)(param_1 + 0x20) = uVar1;
  native_sub_4326e0(param_1 + 0x20,uVar1);
  uVar1 = native_sub_432808(_System_Collections_Generic_List_Vector3__TypeInfo_12d2c68);
  native_System_Collections_Generic_List_Vector3____ctor_d2b070
            (uVar1,_Method_System_Collections_Generic_List_Vector3___ctor___12dd4d8);
  *(undefined8 *)(param_1 + 0x30) = uVar1;
  native_sub_4326e0(param_1 + 0x30,uVar1);
  auVar2._8_8_ = 0;
  auVar2._0_8_ = param_1;
  return auVar2;
}


