/* ARM64 IL2CPP native pseudocode from Ghidra.
 * Recovered implementation, not original C# source.
 * Function boundaries follow the IL2CPP method address table. */


/* UIDragCamera$$Awake @ 0x9df794
 * void UIDragCamera__Awake (UIDragCamera_o* __this, const MethodInfo* method); */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* UIDragCamera$$Awake
   void UIDragCamera__Awake (UIDragCamera_o* __this, const MethodInfo* method); */

void native_UIDragCamera__Awake_9df794(long param_1)

{
  ulong *puVar1;
  char cVar2;
  bool bVar3;
  ulong uVar4;
  undefined8 *puVar5;
  undefined8 uVar6;
  
  if ((bRam00000000013418c0 & 1) == 0) {
    native_sub_43273c(&Method_NGUITools_FindInParents_UIDraggableCamera____12e5748);
    native_sub_43273c(&NGUITools_TypeInfo_12d53c8);
    native_sub_43273c(&UnityEngine_Object_TypeInfo_12d54e0);
    bRam00000000013418c0 = 1;
  }
  puVar5 = (undefined8 *)(param_1 + 0x18);
  uVar6 = *puVar5;
  if (((*(byte *)(_UnityEngine_Object_TypeInfo_12d54e0 + 0x133) >> 2 & 1) != 0) &&
     (*(int *)(_UnityEngine_Object_TypeInfo_12d54e0 + 0xe0) == 0)) {
    native_sub_4327ec();
  }
  uVar4 = native_UnityEngine_Object__op_Equality_8e9a3c(uVar6,0,0);
  if ((uVar4 & 1) != 0) {
    uVar6 = native_UnityEngine_Component__get_gameObject_8da66c(param_1,0);
    if (((*(byte *)(_NGUITools_TypeInfo_12d53c8 + 0x133) >> 2 & 1) != 0) &&
       (*(int *)(_NGUITools_TypeInfo_12d53c8 + 0xe0) == 0)) {
      native_sub_4327ec(_NGUITools_TypeInfo_12d53c8);
    }
    uVar6 = native_NGUITools__FindInParents_object__4a5c04
                      (uVar6,_Method_NGUITools_FindInParents_UIDraggableCamera____12e5748);
    *puVar5 = uVar6;
    if (iRam0000000001345318 != 0) {
      puVar1 = (ulong *)(((ulong)puVar5 >> 0x12 & 0x7fff) * 8 + 0x138ecd8);
      do {
        cVar2 = '\x01';
        bVar3 = (bool)ExclusiveMonitorPass(puVar1,0x10);
        if (bVar3) {
          *puVar1 = *puVar1 | 1L << ((ulong)puVar5 >> 0xc & 0x3f);
          cVar2 = ExclusiveMonitorsStatus();
        }
      } while (cVar2 != '\0');
    }
    return;
  }
  return;
}



/* UIDragCamera$$OnPress @ 0x9df890
 * void UIDragCamera__OnPress (UIDragCamera_o* __this, bool isPressed, const MethodInfo* method); */

/* WARNING: Removing unreachable block (ram,0x009e5538) */
/* WARNING: Removing unreachable block (ram,0x009e5540) */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* UIDragCamera$$OnPress
   void UIDragCamera__OnPress (UIDragCamera_o* __this, bool isPressed, const MethodInfo* method); */

ulong native_UIDragCamera__OnPress_9df890
                (undefined1 param_1 [16],float param_2,float param_3,long param_4,byte param_5)

{
  ulong uVar1;
  undefined8 uVar2;
  long lVar3;
  undefined4 uVar4;
  float fVar5;
  undefined8 uStack_48;
  undefined8 uStack_40;
  float fStack_38;
  undefined4 uStack_34;
  
  if ((bRam00000000013418c1 & 1) == 0) {
    native_sub_43273c(&NGUITools_TypeInfo_12d53c8);
    native_sub_43273c(&UnityEngine_Object_TypeInfo_12d54e0);
    bRam00000000013418c1 = 1;
  }
  uVar1 = native_UnityEngine_Behaviour__get_enabled_8d7acc(param_4,0);
  if ((uVar1 & 1) == 0) {
    return uVar1;
  }
  uVar2 = native_UnityEngine_Component__get_gameObject_8da66c(param_4,0);
  if (((*(byte *)(_NGUITools_TypeInfo_12d53c8 + 0x133) >> 2 & 1) != 0) &&
     (*(int *)(_NGUITools_TypeInfo_12d53c8 + 0xe0) == 0)) {
    native_sub_4327ec(_NGUITools_TypeInfo_12d53c8);
  }
  uVar1 = native_NGUITools__GetActive_72d0d4(uVar2,0);
  if ((uVar1 & 1) == 0) {
    return uVar1;
  }
  uVar2 = *(undefined8 *)(param_4 + 0x18);
  if (((*(byte *)(_UnityEngine_Object_TypeInfo_12d54e0 + 0x133) >> 2 & 1) != 0) &&
     (*(int *)(_UnityEngine_Object_TypeInfo_12d54e0 + 0xe0) == 0)) {
    native_sub_4327ec();
  }
  uVar1 = native_UnityEngine_Object__op_Inequality_8d76fc(uVar2,0,0);
  if ((uVar1 & 1) == 0) {
    return uVar1;
  }
  if (*(long *)(param_4 + 0x18) != 0) {
    uVar1 = native_UnityEngine_Behaviour__get_enabled_8d7acc(*(long *)(param_4 + 0x18),0);
    if ((uVar1 & 1) == 0) {
      return uVar1;
    }
    lVar3 = *(long *)(param_4 + 0x18);
    if (lVar3 != 0) {
      if ((bRam00000000013418f2 & 1) == 0) {
        native_sub_43273c(&Method_UnityEngine_Component_GetComponent_SpringPosition____12e2b10);
        native_sub_43273c(&NGUIMath_TypeInfo_12d53b8);
        native_sub_43273c(&UnityEngine_Object_TypeInfo_12d54e0);
        bRam00000000013418f2 = 1;
      }
      if ((param_5 & 1) != 0) {
        *(undefined1 *)(lVar3 + 0x88) = 0;
      }
      uVar2 = *(undefined8 *)(lVar3 + 0x18);
      if (((*(byte *)(_UnityEngine_Object_TypeInfo_12d54e0 + 0x133) >> 2 & 1) != 0) &&
         (*(int *)(_UnityEngine_Object_TypeInfo_12d54e0 + 0xe0) == 0)) {
        native_sub_4327ec();
      }
      uVar1 = native_UnityEngine_Object__op_Inequality_8d76fc(uVar2,0,0);
      if ((uVar1 & 1) == 0) {
        return uVar1;
      }
      *(byte *)(lVar3 + 0x60) = param_5 & 1;
      if ((param_5 & 1) == 0) {
        if (*(int *)(lVar3 + 0x34) != 2) {
          return uVar1;
        }
        if ((bRam00000000013418f1 & 1) == 0) {
          native_sub_43273c(&UnityEngine_Object_TypeInfo_12d54e0);
          bRam00000000013418f1 = 1;
        }
        fStack_38 = 0.0;
        uStack_40 = 0;
        uVar2 = *(undefined8 *)(lVar3 + 0x58);
        if (((*(byte *)(_UnityEngine_Object_TypeInfo_12d54e0 + 0x133) >> 2 & 1) != 0) &&
           (*(int *)(_UnityEngine_Object_TypeInfo_12d54e0 + 0xe0) == 0)) {
          native_sub_4327ec();
        }
        uVar1 = native_UnityEngine_Object__op_Inequality_8d76fc(uVar2,0,0);
        if ((uVar1 & 1) != 0) {
          uVar2 = *(undefined8 *)(lVar3 + 0x18);
          if (((*(byte *)(_UnityEngine_Object_TypeInfo_12d54e0 + 0x133) >> 2 & 1) != 0) &&
             (*(int *)(_UnityEngine_Object_TypeInfo_12d54e0 + 0xe0) == 0)) {
            native_sub_4327ec();
          }
          uVar1 = native_UnityEngine_Object__op_Inequality_8d76fc(uVar2,0,0);
          if ((uVar1 & 1) != 0) {
            uStack_40._0_4_ =
                 (float)native_UIDraggableCamera__CalculateConstrainOffset_9e51fc(lVar3);
            fStack_38 = param_3;
            uStack_40._4_4_ = param_2;
            fVar5 = (float)native_UnityEngine_Vector3__get_sqrMagnitude_776910(&uStack_40,0);
            if (0.0 < fVar5) {
              uVar2 = native_UnityEngine_Component__get_gameObject_8da66c(lVar3,0);
              if (*(long *)(lVar3 + 0x58) != 0) {
                fVar5 = (float)native_UnityEngine_Transform__get_position_77169c
                                         (*(long *)(lVar3 + 0x58),0);
                lVar3 = native_SpringPosition__Begin_73f250
                                  (fVar5 - (float)uStack_40,param_2 - uStack_40._4_4_,
                                   param_3 - fStack_38,0x41500000,uVar2,0);
                if (lVar3 != 0) {
                  *(undefined2 *)(lVar3 + 0x28) = 0x101;
                  return 1;
                }
              }
                    /* WARNING: Subroutine does not return */
              native_sub_432810();
            }
          }
        }
        return 0;
      }
      uVar2 = *(undefined8 *)(lVar3 + 0x18);
      if (((*(byte *)(_NGUIMath_TypeInfo_12d53b8 + 0x133) >> 2 & 1) != 0) &&
         (*(int *)(_NGUIMath_TypeInfo_12d53b8 + 0xe0) == 0)) {
        native_sub_4327ec();
      }
      native_NGUIMath__CalculateAbsoluteWidgetBounds_8055d0(&uStack_48,uVar2,0);
      *(ulong *)(lVar3 + 0x7c) = CONCAT44(uStack_34,fStack_38);
      *(undefined8 *)(lVar3 + 0x74) = uStack_40;
      *(undefined8 *)(lVar3 + 0x6c) = uStack_48;
      uVar4 = native_UnityEngine_Vector2__get_zero_765ef0(0);
      *(undefined4 *)(lVar3 + 100) = uVar4;
      *(float *)(lVar3 + 0x68) = param_2;
      if (*(float *)(lVar3 + 0x2c) == 0.0) {
        *(undefined4 *)(lVar3 + 0x84) = 0;
      }
      lVar3 = native_UnityEngine_Component__GetComponent_ActiveAnimation__49daec
                        (lVar3,_Method_UnityEngine_Component_GetComponent_SpringPosition____12e2b10)
      ;
      if (((*(byte *)(_UnityEngine_Object_TypeInfo_12d54e0 + 0x133) >> 2 & 1) != 0) &&
         (*(int *)(_UnityEngine_Object_TypeInfo_12d54e0 + 0xe0) == 0)) {
        native_sub_4327ec(_UnityEngine_Object_TypeInfo_12d54e0);
      }
      uVar1 = native_UnityEngine_Object__op_Inequality_8d76fc(lVar3,0,0);
      if ((uVar1 & 1) == 0) {
        return uVar1;
      }
      if (lVar3 != 0) {
        uVar1 = native_UnityEngine_Behaviour__set_enabled_8d7b0c(lVar3,0,0);
        return uVar1;
      }
                    /* WARNING: Subroutine does not return */
      native_sub_432810();
    }
  }
                    /* WARNING: Subroutine does not return */
  native_sub_432810();
}



/* UIDragCamera$$OnDrag @ 0x9dfb50
 * void UIDragCamera__OnDrag (UIDragCamera_o* __this, UnityEngine_Vector2_o delta, const MethodInfo* method); */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* UIDragCamera$$OnDrag
   void UIDragCamera__OnDrag (UIDragCamera_o* __this, UnityEngine_Vector2_o delta, const MethodInfo*
   method); */

void native_UIDragCamera__OnDrag_9dfb50(float param_1,float param_2,long param_3)

{
  int iVar1;
  ulong uVar2;
  undefined8 uVar3;
  long lVar4;
  long lVar5;
  float fVar6;
  float fVar7;
  float fVar8;
  undefined4 uVar9;
  float fVar10;
  float fVar11;
  float fVar12;
  
  if ((bRam00000000013418c2 & 1) == 0) {
    native_sub_43273c(&NGUITools_TypeInfo_12d53c8);
    native_sub_43273c(&UnityEngine_Object_TypeInfo_12d54e0);
    bRam00000000013418c2 = 1;
  }
  uVar2 = native_UnityEngine_Behaviour__get_enabled_8d7acc(param_3,0);
  if ((uVar2 & 1) != 0) {
    uVar3 = native_UnityEngine_Component__get_gameObject_8da66c(param_3,0);
    if (((*(byte *)(_NGUITools_TypeInfo_12d53c8 + 0x133) >> 2 & 1) != 0) &&
       (*(int *)(_NGUITools_TypeInfo_12d53c8 + 0xe0) == 0)) {
      native_sub_4327ec(_NGUITools_TypeInfo_12d53c8);
    }
    uVar2 = native_NGUITools__GetActive_72d0d4(uVar3,0);
    if ((uVar2 & 1) != 0) {
      uVar3 = *(undefined8 *)(param_3 + 0x18);
      if (((*(byte *)(_UnityEngine_Object_TypeInfo_12d54e0 + 0x133) >> 2 & 1) != 0) &&
         (*(int *)(_UnityEngine_Object_TypeInfo_12d54e0 + 0xe0) == 0)) {
        native_sub_4327ec();
      }
      uVar2 = native_UnityEngine_Object__op_Inequality_8d76fc(uVar3,0,0);
      if ((uVar2 & 1) != 0) {
        if (*(long *)(param_3 + 0x18) != 0) {
          uVar2 = native_UnityEngine_Behaviour__get_enabled_8d7acc(*(long *)(param_3 + 0x18),0);
          if ((uVar2 & 1) == 0) {
            return;
          }
          lVar4 = *(long *)(param_3 + 0x18);
          if (lVar4 != 0) {
            fVar10 = param_2;
            if ((bRam00000000013418f3 & 1) == 0) {
              native_sub_43273c(&UICamera_TypeInfo_12d6410);
              bRam00000000013418f3 = 1;
            }
            if ((*(char *)(lVar4 + 0x38) != '\0') && (*(char *)(lVar4 + 0x88) == '\0')) {
              *(undefined1 *)(lVar4 + 0x88) = 1;
              return;
            }
            if (((*(byte *)(_UICamera_TypeInfo_12d6410 + 0x133) >> 2 & 1) != 0) &&
               (*(int *)(_UICamera_TypeInfo_12d6410 + 0xe0) == 0)) {
              native_sub_4327ec();
            }
            lVar5 = *(long *)(*(long *)(_UICamera_TypeInfo_12d6410 + 0xb8) + 0xe0);
            if (lVar5 != 0) {
              *(undefined4 *)(lVar5 + 0x70) = 2;
              if (*(long *)(lVar4 + 0x58) != 0) {
                uVar3 = *(undefined8 *)(lVar4 + 0x20);
                native_UnityEngine_Transform__get_lossyScale_772cac(*(long *)(lVar4 + 0x58),0);
                iVar1 = native_UnityEngine_Screen__get_height_76a618(0);
                if (*(long *)(lVar4 + 0x50) != 0) {
                  fVar6 = (float)native_UnityEngine_Camera__get_orthographicSize_8d8630
                                           (*(long *)(lVar4 + 0x50),0);
                  lVar5 = *(long *)(lVar4 + 0x58);
                  if (lVar5 != 0) {
                    fVar10 = fVar10 * (float)iVar1;
                    param_1 = param_1 * (float)uVar3;
                    fVar6 = (fVar6 + fVar6) / fVar10;
                    fVar7 = param_1 * fVar6;
                    fVar6 = param_2 * (float)((ulong)uVar3 >> 0x20) * fVar6;
                    fVar8 = (float)native_UnityEngine_Transform__get_localPosition_7717f4(lVar5,0);
                    native_UnityEngine_Transform__set_localPosition_7718a4
                              (fVar8 - fVar7,fVar10 - fVar6,param_1 + 0.0,lVar5,0);
                    fVar10 = *(float *)(lVar4 + 0x3c) * 0.01;
                    fVar11 = (float)*(undefined8 *)(lVar4 + 100);
                    fVar12 = (float)((ulong)*(undefined8 *)(lVar4 + 100) >> 0x20);
                    fVar8 = (float)native_UnityEngine_Mathf__Clamp01_8d9d9c(0x3f2b851f,0);
                    fVar7 = (fVar11 - fVar7 * fVar10) - fVar11;
                    *(ulong *)(lVar4 + 100) =
                         CONCAT44(fVar12 + ((fVar12 - fVar6 * fVar10) - fVar12) * fVar8,
                                  fVar11 + fVar7 * fVar8);
                    if (*(int *)(lVar4 + 0x34) == 2) {
                      return;
                    }
                    uVar2 = native_UIDraggableCamera__ConstrainToBounds_9e5464(lVar4,1);
                    if ((uVar2 & 1) == 0) {
                      return;
                    }
                    uVar9 = native_UnityEngine_Vector2__get_zero_765ef0(0);
                    *(undefined4 *)(lVar4 + 100) = uVar9;
                    *(float *)(lVar4 + 0x68) = fVar7;
                    if (*(float *)(lVar4 + 0x2c) != 0.0) {
                      return;
                    }
                    *(undefined4 *)(lVar4 + 0x84) = 0;
                    return;
                  }
                }
              }
            }
                    /* WARNING: Subroutine does not return */
            native_sub_432810();
          }
        }
                    /* WARNING: Subroutine does not return */
        native_sub_432810();
      }
    }
  }
  return;
}



/* UIDragCamera$$OnScroll @ 0x9dfe2c
 * void UIDragCamera__OnScroll (UIDragCamera_o* __this, float delta, const MethodInfo* method); */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* UIDragCamera$$OnScroll
   void UIDragCamera__OnScroll (UIDragCamera_o* __this, float delta, const MethodInfo* method); */

void native_UIDragCamera__OnScroll_9dfe2c(undefined8 param_1,long param_2)

{
  ulong uVar1;
  undefined8 uVar2;
  long lVar3;
  float fVar4;
  float fVar5;
  
  if ((bRam00000000013418c3 & 1) == 0) {
    native_sub_43273c(&NGUITools_TypeInfo_12d53c8);
    native_sub_43273c(&UnityEngine_Object_TypeInfo_12d54e0);
    bRam00000000013418c3 = 1;
  }
  uVar1 = native_UnityEngine_Behaviour__get_enabled_8d7acc(param_2,0);
  if ((uVar1 & 1) != 0) {
    uVar2 = native_UnityEngine_Component__get_gameObject_8da66c(param_2,0);
    if (((*(byte *)(_NGUITools_TypeInfo_12d53c8 + 0x133) >> 2 & 1) != 0) &&
       (*(int *)(_NGUITools_TypeInfo_12d53c8 + 0xe0) == 0)) {
      native_sub_4327ec(_NGUITools_TypeInfo_12d53c8);
    }
    uVar1 = native_NGUITools__GetActive_72d0d4(uVar2,0);
    if ((uVar1 & 1) != 0) {
      uVar2 = *(undefined8 *)(param_2 + 0x18);
      if (((*(byte *)(_UnityEngine_Object_TypeInfo_12d54e0 + 0x133) >> 2 & 1) != 0) &&
         (*(int *)(_UnityEngine_Object_TypeInfo_12d54e0 + 0xe0) == 0)) {
        native_sub_4327ec();
      }
      uVar1 = native_UnityEngine_Object__op_Inequality_8d76fc(uVar2,0,0);
      if ((uVar1 & 1) != 0) {
        if (*(long *)(param_2 + 0x18) != 0) {
          uVar1 = native_UnityEngine_Behaviour__get_enabled_8d7acc(*(long *)(param_2 + 0x18),0);
          if ((uVar1 & 1) == 0) {
            return;
          }
          lVar3 = *(long *)(param_2 + 0x18);
          if (lVar3 != 0) {
            if ((bRam00000000013418f4 & 1) == 0) {
              native_sub_43273c(&NGUITools_TypeInfo_12d53c8);
              bRam00000000013418f4 = 1;
            }
            uVar1 = native_UnityEngine_Behaviour__get_enabled_8d7acc(lVar3,0);
            if ((uVar1 & 1) != 0) {
              uVar2 = native_UnityEngine_Component__get_gameObject_8da66c(lVar3,0);
              if (((*(byte *)(_NGUITools_TypeInfo_12d53c8 + 0x133) >> 2 & 1) != 0) &&
                 (*(int *)(_NGUITools_TypeInfo_12d53c8 + 0xe0) == 0)) {
                native_sub_4327ec(_NGUITools_TypeInfo_12d53c8);
              }
              uVar1 = native_NGUITools__GetActive_72d0d4(uVar2,0);
              if ((uVar1 & 1) != 0) {
                fVar4 = (float)native_UnityEngine_Mathf__Sign_8e51d8
                                         (*(undefined4 *)(lVar3 + 0x84),0);
                fVar5 = (float)native_UnityEngine_Mathf__Sign_8e51d8(param_1,0);
                if (fVar4 == fVar5) {
                  fVar4 = *(float *)(lVar3 + 0x84);
                }
                else {
                  fVar4 = 0.0;
                  *(undefined4 *)(lVar3 + 0x84) = 0;
                }
                *(float *)(lVar3 + 0x84) = fVar4 + *(float *)(lVar3 + 0x28) * (float)param_1;
              }
            }
            return;
          }
        }
                    /* WARNING: Subroutine does not return */
        native_sub_432810();
      }
    }
  }
  return;
}



/* UIDragCamera$$.ctor @ 0x9e0020
 * void UIDragCamera___ctor (UIDragCamera_o* __this, const MethodInfo* method); */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* UIDragCamera$$.ctor
   void UIDragCamera___ctor (UIDragCamera_o* __this, const MethodInfo* method); */

undefined1  [16] native_UIDragCamera___ctor_9e0020(ulong param_1)

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


