/* ARM64 IL2CPP native pseudocode from Ghidra.
 * Recovered implementation, not original C# source.
 * Function boundaries follow the IL2CPP method address table. */


/* TweenPosition$$get_cachedTransform @ 0x6e5944
 * UnityEngine_Transform_o* TweenPosition__get_cachedTransform (TweenPosition_o* __this, const MethodInfo* method); */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* TweenPosition$$get_cachedTransform
   UnityEngine_Transform_o* TweenPosition__get_cachedTransform (TweenPosition_o* __this, const
   MethodInfo* method); */

undefined8 native_TweenPosition__get_cachedTransform_6e5944(long param_1)

{
  ulong uVar1;
  undefined8 *puVar2;
  undefined8 uVar3;
  
  if ((bRam000000000133f3a9 & 1) == 0) {
    native_sub_43273c(&UnityEngine_Object_TypeInfo_12d54e0);
    bRam000000000133f3a9 = 1;
  }
  puVar2 = (undefined8 *)(param_1 + 0xa0);
  uVar3 = *puVar2;
  if (((*(byte *)(_UnityEngine_Object_TypeInfo_12d54e0 + 0x133) >> 2 & 1) != 0) &&
     (*(int *)(_UnityEngine_Object_TypeInfo_12d54e0 + 0xe0) == 0)) {
    native_sub_4327ec();
  }
  uVar1 = native_UnityEngine_Object__op_Equality_8e9a3c(uVar3,0,0);
  if ((uVar1 & 1) != 0) {
    uVar3 = native_UnityEngine_Component__get_transform_8da62c(param_1,0);
    *(undefined8 *)(param_1 + 0xa0) = uVar3;
    native_sub_4326e0(puVar2,uVar3);
  }
  return *puVar2;
}



/* TweenPosition$$get_position @ 0x6e59e4
 * UnityEngine_Vector3_o TweenPosition__get_position (TweenPosition_o* __this, const MethodInfo* method); */

/* TweenPosition$$get_position
   UnityEngine_Vector3_o TweenPosition__get_position (TweenPosition_o* __this, const MethodInfo*
   method); */

undefined4 native_TweenPosition__get_position_6e59e4(long param_1)

{
  char cVar1;
  long lVar2;
  undefined8 uStack_30;
  undefined4 uStack_28;
  
  cVar1 = *(char *)(param_1 + 0x98);
  lVar2 = native_TweenPosition__get_cachedTransform_6e5944();
  if (lVar2 == 0) {
                    /* WARNING: Subroutine does not return */
    native_sub_432810();
  }
  if (cVar1 != '\0') {
    uStack_28 = 0;
    uStack_30 = 0;
    if (pcRam000000000133fed0 == (code *)0x0) {
      pcRam000000000133fed0 = (code *)native_sub_4326f0(&UNK_00e2acd5,0);
    }
    (*pcRam000000000133fed0)(lVar2,&uStack_30);
    return (undefined4)uStack_30;
  }
  uStack_28 = 0;
  uStack_30 = 0;
  if (pcRam000000000133fee0 == (code *)0x0) {
    pcRam000000000133fee0 = (code *)native_sub_4326f0(&UNK_00e2ad5b,0);
  }
  (*pcRam000000000133fee0)(lVar2,&uStack_30);
  return (undefined4)uStack_30;
}



/* TweenPosition$$set_position @ 0x6e5a24
 * void TweenPosition__set_position (TweenPosition_o* __this, UnityEngine_Vector3_o value, const MethodInfo* method); */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* TweenPosition$$set_position
   void TweenPosition__set_position (TweenPosition_o* __this, UnityEngine_Vector3_o value, const
   MethodInfo* method); */

void native_TweenPosition__set_position_6e5a24
               (float param_1,float param_2,float param_3,long param_4)

{
  char cVar1;
  bool bVar2;
  int iVar3;
  int iVar4;
  ulong uVar5;
  long lVar6;
  long *plVar7;
  undefined8 uVar8;
  int iVar9;
  float fVar10;
  float fVar11;
  
  fVar11 = param_2;
  if ((bRam000000000133f3aa & 1) == 0) {
    native_sub_43273c(&NGUIMath_TypeInfo_12d53b8);
    native_sub_43273c(&UnityEngine_Object_TypeInfo_12d54e0);
    bRam000000000133f3aa = 1;
  }
  uVar8 = *(undefined8 *)(param_4 + 0xa8);
  if (((*(byte *)(_UnityEngine_Object_TypeInfo_12d54e0 + 0x133) >> 2 & 1) != 0) &&
     (*(int *)(_UnityEngine_Object_TypeInfo_12d54e0 + 0xe0) == 0)) {
    native_sub_4327ec();
  }
  uVar5 = native_UnityEngine_Object__op_Equality_8e9a3c(uVar8,0,0);
  if ((uVar5 & 1) == 0) {
    if (*(long *)(param_4 + 0xa8) == 0) goto LAB_006e5b7c;
    uVar5 = native_UIRect__get_isAnchored_c2d8cc(*(long *)(param_4 + 0xa8),0);
    if (((uVar5 & 1) != 0) && (*(char *)(param_4 + 0x98) == '\0')) {
      lVar6 = native_TweenPosition__get_cachedTransform_6e5944(param_4);
      if (lVar6 != 0) {
        fVar10 = (float)native_UnityEngine_Transform__get_localPosition_7717f4(lVar6,0);
        plVar7 = *(long **)(param_4 + 0xa8);
        param_2 = param_2 - fVar11;
        if (((*(byte *)(_NGUIMath_TypeInfo_12d53b8 + 0x133) >> 2 & 1) != 0) &&
           (*(int *)(_NGUIMath_TypeInfo_12d53b8 + 0xe0) == 0)) {
          native_sub_4327ec();
        }
        fVar11 = param_2;
        if ((bRam0000000001340475 & 1) == 0) {
          native_sub_43273c(&UnityEngine_Object_TypeInfo_12d54e0,0);
          bRam0000000001340475 = 1;
        }
        iVar3 = native_UnityEngine_Mathf__FloorToInt_8e506c((param_1 - fVar10) + 0.5,0);
        iVar4 = native_UnityEngine_Mathf__FloorToInt_8e506c(param_2 + 0.5,0);
        if (plVar7 != (long *)0x0) {
          lVar6 = native_UIRect__get_cachedTransform_c27c58(plVar7,0);
          if (lVar6 != 0) {
            fVar10 = (float)native_UnityEngine_Transform__get_localPosition_7717f4(lVar6,0);
            native_UnityEngine_Transform__set_localPosition_7718a4
                      (fVar10 + (float)iVar3,fVar11 + (float)iVar4,param_3 + 0.0,lVar6,0);
            if (plVar7[3] != 0) {
              uVar8 = *(undefined8 *)(plVar7[3] + 0x10);
              if (((*(byte *)(_UnityEngine_Object_TypeInfo_12d54e0 + 0x133) >> 2 & 1) != 0) &&
                 (*(int *)(_UnityEngine_Object_TypeInfo_12d54e0 + 0xe0) == 0)) {
                native_sub_4327ec();
              }
              uVar5 = native_UnityEngine_Object__op_Implicit_8e1b98(uVar8,0);
              if ((uVar5 & 1) == 0) {
                iVar9 = 0;
              }
              else {
                lVar6 = plVar7[3];
                if (lVar6 == 0) goto LAB_00807050;
                iVar9 = 1;
                *(int *)(lVar6 + 0x1c) = *(int *)(lVar6 + 0x1c) + iVar3;
              }
              if (plVar7[4] != 0) {
                uVar8 = *(undefined8 *)(plVar7[4] + 0x10);
                if (((*(byte *)(_UnityEngine_Object_TypeInfo_12d54e0 + 0x133) >> 2 & 1) != 0) &&
                   (*(int *)(_UnityEngine_Object_TypeInfo_12d54e0 + 0xe0) == 0)) {
                  native_sub_4327ec();
                }
                uVar5 = native_UnityEngine_Object__op_Implicit_8e1b98(uVar8,0);
                if ((uVar5 & 1) != 0) {
                  lVar6 = plVar7[4];
                  if (lVar6 == 0) goto LAB_00807050;
                  iVar9 = iVar9 + 1;
                  *(int *)(lVar6 + 0x1c) = *(int *)(lVar6 + 0x1c) + iVar3;
                }
                if (plVar7[5] != 0) {
                  uVar8 = *(undefined8 *)(plVar7[5] + 0x10);
                  if (((*(byte *)(_UnityEngine_Object_TypeInfo_12d54e0 + 0x133) >> 2 & 1) != 0) &&
                     (*(int *)(_UnityEngine_Object_TypeInfo_12d54e0 + 0xe0) == 0)) {
                    native_sub_4327ec();
                  }
                  uVar5 = native_UnityEngine_Object__op_Implicit_8e1b98(uVar8,0);
                  if ((uVar5 & 1) != 0) {
                    lVar6 = plVar7[5];
                    if (lVar6 == 0) goto LAB_00807050;
                    iVar9 = iVar9 + 1;
                    *(int *)(lVar6 + 0x1c) = *(int *)(lVar6 + 0x1c) + iVar4;
                  }
                  if (plVar7[6] != 0) {
                    uVar8 = *(undefined8 *)(plVar7[6] + 0x10);
                    if (((*(byte *)(_UnityEngine_Object_TypeInfo_12d54e0 + 0x133) >> 2 & 1) != 0) &&
                       (*(int *)(_UnityEngine_Object_TypeInfo_12d54e0 + 0xe0) == 0)) {
                      native_sub_4327ec();
                    }
                    uVar5 = native_UnityEngine_Object__op_Implicit_8e1b98(uVar8,0);
                    if ((uVar5 & 1) == 0) {
                      if (iVar9 == 0) {
                        return;
                      }
                    }
                    else {
                      lVar6 = plVar7[6];
                      if (lVar6 == 0) goto LAB_00807050;
                      *(int *)(lVar6 + 0x1c) = *(int *)(lVar6 + 0x1c) + iVar4;
                    }
                    uVar5 = native_UIRect__get_isAnchored_c2d8cc(plVar7,0);
                    if ((uVar5 & 1) == 0) {
                      return;
                    }
                    *(undefined4 *)((long)plVar7 + 0x5c) = 0xffffffff;
                    *(undefined1 *)((long)plVar7 + 0x5a) = 1;
                    iVar3 = native_UnityEngine_Time__get_frameCount_770964(0);
                    if ((bRam0000000001342713 & 1) == 0) {
                      native_sub_43273c(&UnityEngine_Object_TypeInfo_12d54e0);
                      bRam0000000001342713 = 1;
                    }
                    *(int *)((long)plVar7 + 0x5c) = iVar3;
                    *(undefined1 *)((long)plVar7 + 0x5a) = 0;
                    if (plVar7[3] != 0) {
                      uVar8 = *(undefined8 *)(plVar7[3] + 0x10);
                      if (((*(byte *)(_UnityEngine_Object_TypeInfo_12d54e0 + 0x133) >> 2 & 1) != 0)
                         && (*(int *)(_UnityEngine_Object_TypeInfo_12d54e0 + 0xe0) == 0)) {
                        native_sub_4327ec();
                      }
                      uVar5 = native_UnityEngine_Object__op_Implicit_8e1b98(uVar8,0);
                      if ((uVar5 & 1) == 0) {
                        bVar2 = false;
                      }
                      else {
                        if (plVar7[3] == 0) goto LAB_00c2ea0c;
                        uVar8 = *(undefined8 *)(plVar7[3] + 0x20);
                        if (((*(byte *)(_UnityEngine_Object_TypeInfo_12d54e0 + 0x133) >> 2 & 1) != 0
                            ) && (*(int *)(_UnityEngine_Object_TypeInfo_12d54e0 + 0xe0) == 0)) {
                          native_sub_4327ec();
                        }
                        uVar5 = native_UnityEngine_Object__op_Inequality_8d76fc(uVar8,0,0);
                        if ((uVar5 & 1) != 0) {
                          if ((plVar7[3] == 0) || (lVar6 = *(long *)(plVar7[3] + 0x20), lVar6 == 0))
                          goto LAB_00c2ea0c;
                          if (*(int *)(lVar6 + 0x5c) != iVar3) {
                            native_UIRect__Update_c2e62c();
                          }
                        }
                        bVar2 = true;
                      }
                      if (plVar7[5] != 0) {
                        uVar8 = *(undefined8 *)(plVar7[5] + 0x10);
                        if (((*(byte *)(_UnityEngine_Object_TypeInfo_12d54e0 + 0x133) >> 2 & 1) != 0
                            ) && (*(int *)(_UnityEngine_Object_TypeInfo_12d54e0 + 0xe0) == 0)) {
                          native_sub_4327ec();
                        }
                        uVar5 = native_UnityEngine_Object__op_Implicit_8e1b98(uVar8,0);
                        if ((uVar5 & 1) != 0) {
                          if (plVar7[5] == 0) goto LAB_00c2ea0c;
                          uVar8 = *(undefined8 *)(plVar7[5] + 0x20);
                          if (((*(byte *)(_UnityEngine_Object_TypeInfo_12d54e0 + 0x133) >> 2 & 1) !=
                               0) && (*(int *)(_UnityEngine_Object_TypeInfo_12d54e0 + 0xe0) == 0)) {
                            native_sub_4327ec();
                          }
                          uVar5 = native_UnityEngine_Object__op_Inequality_8d76fc(uVar8,0,0);
                          if ((uVar5 & 1) != 0) {
                            if ((plVar7[5] == 0) ||
                               (lVar6 = *(long *)(plVar7[5] + 0x20), lVar6 == 0)) goto LAB_00c2ea0c;
                            if (*(int *)(lVar6 + 0x5c) != iVar3) {
                              native_UIRect__Update_c2e62c();
                            }
                          }
                          bVar2 = true;
                        }
                        if (plVar7[4] != 0) {
                          uVar8 = *(undefined8 *)(plVar7[4] + 0x10);
                          if (((*(byte *)(_UnityEngine_Object_TypeInfo_12d54e0 + 0x133) >> 2 & 1) !=
                               0) && (*(int *)(_UnityEngine_Object_TypeInfo_12d54e0 + 0xe0) == 0)) {
                            native_sub_4327ec();
                          }
                          uVar5 = native_UnityEngine_Object__op_Implicit_8e1b98(uVar8,0);
                          if ((uVar5 & 1) != 0) {
                            if (plVar7[4] == 0) goto LAB_00c2ea0c;
                            uVar8 = *(undefined8 *)(plVar7[4] + 0x20);
                            if (((*(byte *)(_UnityEngine_Object_TypeInfo_12d54e0 + 0x133) >> 2 & 1)
                                 != 0) &&
                               (*(int *)(_UnityEngine_Object_TypeInfo_12d54e0 + 0xe0) == 0)) {
                              native_sub_4327ec();
                            }
                            uVar5 = native_UnityEngine_Object__op_Inequality_8d76fc(uVar8,0,0);
                            if ((uVar5 & 1) != 0) {
                              if ((plVar7[4] == 0) ||
                                 (lVar6 = *(long *)(plVar7[4] + 0x20), lVar6 == 0))
                              goto LAB_00c2ea0c;
                              if (*(int *)(lVar6 + 0x5c) != iVar3) {
                                native_UIRect__Update_c2e62c();
                              }
                            }
                            bVar2 = true;
                          }
                          if (plVar7[6] != 0) {
                            uVar8 = *(undefined8 *)(plVar7[6] + 0x10);
                            if (((*(byte *)(_UnityEngine_Object_TypeInfo_12d54e0 + 0x133) >> 2 & 1)
                                 != 0) &&
                               (*(int *)(_UnityEngine_Object_TypeInfo_12d54e0 + 0xe0) == 0)) {
                              native_sub_4327ec();
                            }
                            uVar5 = native_UnityEngine_Object__op_Implicit_8e1b98(uVar8,0);
                            if ((uVar5 & 1) == 0) {
                              if (!bVar2) {
                                return;
                              }
                            }
                            else {
                              if (plVar7[6] == 0) goto LAB_00c2ea0c;
                              uVar8 = *(undefined8 *)(plVar7[6] + 0x20);
                              if (((*(byte *)(_UnityEngine_Object_TypeInfo_12d54e0 + 0x133) >> 2 & 1
                                   ) != 0) &&
                                 (*(int *)(_UnityEngine_Object_TypeInfo_12d54e0 + 0xe0) == 0)) {
                                native_sub_4327ec();
                              }
                              uVar5 = native_UnityEngine_Object__op_Inequality_8d76fc(uVar8,0,0);
                              if ((uVar5 & 1) != 0) {
                                if ((plVar7[6] == 0) ||
                                   (lVar6 = *(long *)(plVar7[6] + 0x20), lVar6 == 0))
                                goto LAB_00c2ea0c;
                                if (*(int *)(lVar6 + 0x5c) != iVar3) {
                                  native_UIRect__Update_c2e62c();
                                }
                              }
                            }
                    /* WARNING: Could not recover jumptable at 0x00c2e9f4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
                            (**(code **)(*plVar7 + 600))(plVar7,*(undefined8 *)(*plVar7 + 0x260));
                            return;
                          }
                        }
                      }
                    }
LAB_00c2ea0c:
                    /* WARNING: Subroutine does not return */
                    native_sub_432810();
                  }
                }
              }
            }
          }
        }
LAB_00807050:
                    /* WARNING: Subroutine does not return */
        native_sub_432810();
      }
      goto LAB_006e5b7c;
    }
  }
  cVar1 = *(char *)(param_4 + 0x98);
  lVar6 = native_TweenPosition__get_cachedTransform_6e5944(param_4);
  if (lVar6 != 0) {
    if (cVar1 != '\0') {
      if (pcRam000000000133fed8 == (code *)0x0) {
        pcRam000000000133fed8 = (code *)native_sub_4326f0(&UNK_00e2ad18,0);
      }
      (*pcRam000000000133fed8)(lVar6,&stack0xffffffffffffffd0);
      return;
    }
    if (pcRam000000000133fee8 == (code *)0x0) {
      pcRam000000000133fee8 = (code *)native_sub_4326f0(&UNK_00e2ada3,0);
    }
    (*pcRam000000000133fee8)(lVar6,&stack0xffffffffffffffd0);
    return;
  }
LAB_006e5b7c:
                    /* WARNING: Subroutine does not return */
  native_sub_432810();
}



/* TweenPosition$$get_value @ 0x6e59e8
 * UnityEngine_Vector3_o TweenPosition__get_value (TweenPosition_o* __this, const MethodInfo* method); */

/* TweenPosition$$get_value
   UnityEngine_Vector3_o TweenPosition__get_value (TweenPosition_o* __this, const MethodInfo*
   method); */

undefined4 native_TweenPosition__get_value_6e59e8(long param_1)

{
  char cVar1;
  long lVar2;
  undefined8 uStack_30;
  undefined4 uStack_28;
  
  cVar1 = *(char *)(param_1 + 0x98);
  lVar2 = native_TweenPosition__get_cachedTransform_6e5944();
  if (lVar2 == 0) {
                    /* WARNING: Subroutine does not return */
    native_sub_432810();
  }
  if (cVar1 != '\0') {
    uStack_28 = 0;
    uStack_30 = 0;
    if (pcRam000000000133fed0 == (code *)0x0) {
      pcRam000000000133fed0 = (code *)native_sub_4326f0(&UNK_00e2acd5,0);
    }
    (*pcRam000000000133fed0)(lVar2,&uStack_30);
    return (undefined4)uStack_30;
  }
  uStack_28 = 0;
  uStack_30 = 0;
  if (pcRam000000000133fee0 == (code *)0x0) {
    pcRam000000000133fee0 = (code *)native_sub_4326f0(&UNK_00e2ad5b,0);
  }
  (*pcRam000000000133fee0)(lVar2,&uStack_30);
  return (undefined4)uStack_30;
}



/* TweenPosition$$set_value @ 0x6e5a28
 * void TweenPosition__set_value (TweenPosition_o* __this, UnityEngine_Vector3_o value, const MethodInfo* method); */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* TweenPosition$$set_value
   void TweenPosition__set_value (TweenPosition_o* __this, UnityEngine_Vector3_o value, const
   MethodInfo* method); */

void native_TweenPosition__set_value_6e5a28(float param_1,float param_2,float param_3,long param_4)

{
  char cVar1;
  bool bVar2;
  int iVar3;
  int iVar4;
  ulong uVar5;
  long lVar6;
  long *plVar7;
  undefined8 uVar8;
  int iVar9;
  float fVar10;
  float fVar11;
  
  fVar11 = param_2;
  if ((bRam000000000133f3aa & 1) == 0) {
    native_sub_43273c(&NGUIMath_TypeInfo_12d53b8);
    native_sub_43273c(&UnityEngine_Object_TypeInfo_12d54e0);
    bRam000000000133f3aa = 1;
  }
  uVar8 = *(undefined8 *)(param_4 + 0xa8);
  if (((*(byte *)(_UnityEngine_Object_TypeInfo_12d54e0 + 0x133) >> 2 & 1) != 0) &&
     (*(int *)(_UnityEngine_Object_TypeInfo_12d54e0 + 0xe0) == 0)) {
    native_sub_4327ec();
  }
  uVar5 = native_UnityEngine_Object__op_Equality_8e9a3c(uVar8,0,0);
  if ((uVar5 & 1) == 0) {
    if (*(long *)(param_4 + 0xa8) == 0) goto LAB_006e5b7c;
    uVar5 = native_UIRect__get_isAnchored_c2d8cc(*(long *)(param_4 + 0xa8),0);
    if (((uVar5 & 1) != 0) && (*(char *)(param_4 + 0x98) == '\0')) {
      lVar6 = native_TweenPosition__get_cachedTransform_6e5944(param_4);
      if (lVar6 != 0) {
        fVar10 = (float)native_UnityEngine_Transform__get_localPosition_7717f4(lVar6,0);
        plVar7 = *(long **)(param_4 + 0xa8);
        param_2 = param_2 - fVar11;
        if (((*(byte *)(_NGUIMath_TypeInfo_12d53b8 + 0x133) >> 2 & 1) != 0) &&
           (*(int *)(_NGUIMath_TypeInfo_12d53b8 + 0xe0) == 0)) {
          native_sub_4327ec();
        }
        fVar11 = param_2;
        if ((bRam0000000001340475 & 1) == 0) {
          native_sub_43273c(&UnityEngine_Object_TypeInfo_12d54e0,0);
          bRam0000000001340475 = 1;
        }
        iVar3 = native_UnityEngine_Mathf__FloorToInt_8e506c((param_1 - fVar10) + 0.5,0);
        iVar4 = native_UnityEngine_Mathf__FloorToInt_8e506c(param_2 + 0.5,0);
        if (plVar7 != (long *)0x0) {
          lVar6 = native_UIRect__get_cachedTransform_c27c58(plVar7,0);
          if (lVar6 != 0) {
            fVar10 = (float)native_UnityEngine_Transform__get_localPosition_7717f4(lVar6,0);
            native_UnityEngine_Transform__set_localPosition_7718a4
                      (fVar10 + (float)iVar3,fVar11 + (float)iVar4,param_3 + 0.0,lVar6,0);
            if (plVar7[3] != 0) {
              uVar8 = *(undefined8 *)(plVar7[3] + 0x10);
              if (((*(byte *)(_UnityEngine_Object_TypeInfo_12d54e0 + 0x133) >> 2 & 1) != 0) &&
                 (*(int *)(_UnityEngine_Object_TypeInfo_12d54e0 + 0xe0) == 0)) {
                native_sub_4327ec();
              }
              uVar5 = native_UnityEngine_Object__op_Implicit_8e1b98(uVar8,0);
              if ((uVar5 & 1) == 0) {
                iVar9 = 0;
              }
              else {
                lVar6 = plVar7[3];
                if (lVar6 == 0) goto LAB_00807050;
                iVar9 = 1;
                *(int *)(lVar6 + 0x1c) = *(int *)(lVar6 + 0x1c) + iVar3;
              }
              if (plVar7[4] != 0) {
                uVar8 = *(undefined8 *)(plVar7[4] + 0x10);
                if (((*(byte *)(_UnityEngine_Object_TypeInfo_12d54e0 + 0x133) >> 2 & 1) != 0) &&
                   (*(int *)(_UnityEngine_Object_TypeInfo_12d54e0 + 0xe0) == 0)) {
                  native_sub_4327ec();
                }
                uVar5 = native_UnityEngine_Object__op_Implicit_8e1b98(uVar8,0);
                if ((uVar5 & 1) != 0) {
                  lVar6 = plVar7[4];
                  if (lVar6 == 0) goto LAB_00807050;
                  iVar9 = iVar9 + 1;
                  *(int *)(lVar6 + 0x1c) = *(int *)(lVar6 + 0x1c) + iVar3;
                }
                if (plVar7[5] != 0) {
                  uVar8 = *(undefined8 *)(plVar7[5] + 0x10);
                  if (((*(byte *)(_UnityEngine_Object_TypeInfo_12d54e0 + 0x133) >> 2 & 1) != 0) &&
                     (*(int *)(_UnityEngine_Object_TypeInfo_12d54e0 + 0xe0) == 0)) {
                    native_sub_4327ec();
                  }
                  uVar5 = native_UnityEngine_Object__op_Implicit_8e1b98(uVar8,0);
                  if ((uVar5 & 1) != 0) {
                    lVar6 = plVar7[5];
                    if (lVar6 == 0) goto LAB_00807050;
                    iVar9 = iVar9 + 1;
                    *(int *)(lVar6 + 0x1c) = *(int *)(lVar6 + 0x1c) + iVar4;
                  }
                  if (plVar7[6] != 0) {
                    uVar8 = *(undefined8 *)(plVar7[6] + 0x10);
                    if (((*(byte *)(_UnityEngine_Object_TypeInfo_12d54e0 + 0x133) >> 2 & 1) != 0) &&
                       (*(int *)(_UnityEngine_Object_TypeInfo_12d54e0 + 0xe0) == 0)) {
                      native_sub_4327ec();
                    }
                    uVar5 = native_UnityEngine_Object__op_Implicit_8e1b98(uVar8,0);
                    if ((uVar5 & 1) == 0) {
                      if (iVar9 == 0) {
                        return;
                      }
                    }
                    else {
                      lVar6 = plVar7[6];
                      if (lVar6 == 0) goto LAB_00807050;
                      *(int *)(lVar6 + 0x1c) = *(int *)(lVar6 + 0x1c) + iVar4;
                    }
                    uVar5 = native_UIRect__get_isAnchored_c2d8cc(plVar7,0);
                    if ((uVar5 & 1) == 0) {
                      return;
                    }
                    *(undefined4 *)((long)plVar7 + 0x5c) = 0xffffffff;
                    *(undefined1 *)((long)plVar7 + 0x5a) = 1;
                    iVar3 = native_UnityEngine_Time__get_frameCount_770964(0);
                    if ((bRam0000000001342713 & 1) == 0) {
                      native_sub_43273c(&UnityEngine_Object_TypeInfo_12d54e0);
                      bRam0000000001342713 = 1;
                    }
                    *(int *)((long)plVar7 + 0x5c) = iVar3;
                    *(undefined1 *)((long)plVar7 + 0x5a) = 0;
                    if (plVar7[3] != 0) {
                      uVar8 = *(undefined8 *)(plVar7[3] + 0x10);
                      if (((*(byte *)(_UnityEngine_Object_TypeInfo_12d54e0 + 0x133) >> 2 & 1) != 0)
                         && (*(int *)(_UnityEngine_Object_TypeInfo_12d54e0 + 0xe0) == 0)) {
                        native_sub_4327ec();
                      }
                      uVar5 = native_UnityEngine_Object__op_Implicit_8e1b98(uVar8,0);
                      if ((uVar5 & 1) == 0) {
                        bVar2 = false;
                      }
                      else {
                        if (plVar7[3] == 0) goto LAB_00c2ea0c;
                        uVar8 = *(undefined8 *)(plVar7[3] + 0x20);
                        if (((*(byte *)(_UnityEngine_Object_TypeInfo_12d54e0 + 0x133) >> 2 & 1) != 0
                            ) && (*(int *)(_UnityEngine_Object_TypeInfo_12d54e0 + 0xe0) == 0)) {
                          native_sub_4327ec();
                        }
                        uVar5 = native_UnityEngine_Object__op_Inequality_8d76fc(uVar8,0,0);
                        if ((uVar5 & 1) != 0) {
                          if ((plVar7[3] == 0) || (lVar6 = *(long *)(plVar7[3] + 0x20), lVar6 == 0))
                          goto LAB_00c2ea0c;
                          if (*(int *)(lVar6 + 0x5c) != iVar3) {
                            native_UIRect__Update_c2e62c();
                          }
                        }
                        bVar2 = true;
                      }
                      if (plVar7[5] != 0) {
                        uVar8 = *(undefined8 *)(plVar7[5] + 0x10);
                        if (((*(byte *)(_UnityEngine_Object_TypeInfo_12d54e0 + 0x133) >> 2 & 1) != 0
                            ) && (*(int *)(_UnityEngine_Object_TypeInfo_12d54e0 + 0xe0) == 0)) {
                          native_sub_4327ec();
                        }
                        uVar5 = native_UnityEngine_Object__op_Implicit_8e1b98(uVar8,0);
                        if ((uVar5 & 1) != 0) {
                          if (plVar7[5] == 0) goto LAB_00c2ea0c;
                          uVar8 = *(undefined8 *)(plVar7[5] + 0x20);
                          if (((*(byte *)(_UnityEngine_Object_TypeInfo_12d54e0 + 0x133) >> 2 & 1) !=
                               0) && (*(int *)(_UnityEngine_Object_TypeInfo_12d54e0 + 0xe0) == 0)) {
                            native_sub_4327ec();
                          }
                          uVar5 = native_UnityEngine_Object__op_Inequality_8d76fc(uVar8,0,0);
                          if ((uVar5 & 1) != 0) {
                            if ((plVar7[5] == 0) ||
                               (lVar6 = *(long *)(plVar7[5] + 0x20), lVar6 == 0)) goto LAB_00c2ea0c;
                            if (*(int *)(lVar6 + 0x5c) != iVar3) {
                              native_UIRect__Update_c2e62c();
                            }
                          }
                          bVar2 = true;
                        }
                        if (plVar7[4] != 0) {
                          uVar8 = *(undefined8 *)(plVar7[4] + 0x10);
                          if (((*(byte *)(_UnityEngine_Object_TypeInfo_12d54e0 + 0x133) >> 2 & 1) !=
                               0) && (*(int *)(_UnityEngine_Object_TypeInfo_12d54e0 + 0xe0) == 0)) {
                            native_sub_4327ec();
                          }
                          uVar5 = native_UnityEngine_Object__op_Implicit_8e1b98(uVar8,0);
                          if ((uVar5 & 1) != 0) {
                            if (plVar7[4] == 0) goto LAB_00c2ea0c;
                            uVar8 = *(undefined8 *)(plVar7[4] + 0x20);
                            if (((*(byte *)(_UnityEngine_Object_TypeInfo_12d54e0 + 0x133) >> 2 & 1)
                                 != 0) &&
                               (*(int *)(_UnityEngine_Object_TypeInfo_12d54e0 + 0xe0) == 0)) {
                              native_sub_4327ec();
                            }
                            uVar5 = native_UnityEngine_Object__op_Inequality_8d76fc(uVar8,0,0);
                            if ((uVar5 & 1) != 0) {
                              if ((plVar7[4] == 0) ||
                                 (lVar6 = *(long *)(plVar7[4] + 0x20), lVar6 == 0))
                              goto LAB_00c2ea0c;
                              if (*(int *)(lVar6 + 0x5c) != iVar3) {
                                native_UIRect__Update_c2e62c();
                              }
                            }
                            bVar2 = true;
                          }
                          if (plVar7[6] != 0) {
                            uVar8 = *(undefined8 *)(plVar7[6] + 0x10);
                            if (((*(byte *)(_UnityEngine_Object_TypeInfo_12d54e0 + 0x133) >> 2 & 1)
                                 != 0) &&
                               (*(int *)(_UnityEngine_Object_TypeInfo_12d54e0 + 0xe0) == 0)) {
                              native_sub_4327ec();
                            }
                            uVar5 = native_UnityEngine_Object__op_Implicit_8e1b98(uVar8,0);
                            if ((uVar5 & 1) == 0) {
                              if (!bVar2) {
                                return;
                              }
                            }
                            else {
                              if (plVar7[6] == 0) goto LAB_00c2ea0c;
                              uVar8 = *(undefined8 *)(plVar7[6] + 0x20);
                              if (((*(byte *)(_UnityEngine_Object_TypeInfo_12d54e0 + 0x133) >> 2 & 1
                                   ) != 0) &&
                                 (*(int *)(_UnityEngine_Object_TypeInfo_12d54e0 + 0xe0) == 0)) {
                                native_sub_4327ec();
                              }
                              uVar5 = native_UnityEngine_Object__op_Inequality_8d76fc(uVar8,0,0);
                              if ((uVar5 & 1) != 0) {
                                if ((plVar7[6] == 0) ||
                                   (lVar6 = *(long *)(plVar7[6] + 0x20), lVar6 == 0))
                                goto LAB_00c2ea0c;
                                if (*(int *)(lVar6 + 0x5c) != iVar3) {
                                  native_UIRect__Update_c2e62c();
                                }
                              }
                            }
                    /* WARNING: Could not recover jumptable at 0x00c2e9f4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
                            (**(code **)(*plVar7 + 600))(plVar7,*(undefined8 *)(*plVar7 + 0x260));
                            return;
                          }
                        }
                      }
                    }
LAB_00c2ea0c:
                    /* WARNING: Subroutine does not return */
                    native_sub_432810();
                  }
                }
              }
            }
          }
        }
LAB_00807050:
                    /* WARNING: Subroutine does not return */
        native_sub_432810();
      }
      goto LAB_006e5b7c;
    }
  }
  cVar1 = *(char *)(param_4 + 0x98);
  lVar6 = native_TweenPosition__get_cachedTransform_6e5944(param_4);
  if (lVar6 != 0) {
    if (cVar1 != '\0') {
      if (pcRam000000000133fed8 == (code *)0x0) {
        pcRam000000000133fed8 = (code *)native_sub_4326f0(&UNK_00e2ad18,0);
      }
      (*pcRam000000000133fed8)(lVar6,&stack0xffffffffffffffd0);
      return;
    }
    if (pcRam000000000133fee8 == (code *)0x0) {
      pcRam000000000133fee8 = (code *)native_sub_4326f0(&UNK_00e2ada3,0);
    }
    (*pcRam000000000133fee8)(lVar6,&stack0xffffffffffffffd0);
    return;
  }
LAB_006e5b7c:
                    /* WARNING: Subroutine does not return */
  native_sub_432810();
}



/* TweenPosition$$Awake @ 0x6e5b80
 * void TweenPosition__Awake (TweenPosition_o* __this, const MethodInfo* method); */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* TweenPosition$$Awake
   void TweenPosition__Awake (TweenPosition_o* __this, const MethodInfo* method); */

void native_TweenPosition__Awake_6e5b80(long param_1)

{
  ulong *puVar1;
  char cVar2;
  bool bVar3;
  undefined8 uVar4;
  
  if ((bRam000000000133f3ab & 1) == 0) {
    native_sub_43273c(&Method_UnityEngine_Component_GetComponent_UIRect____12e2bf8);
    bRam000000000133f3ab = 1;
  }
  uVar4 = native_UnityEngine_Component__GetComponent_ActiveAnimation__49daec
                    (param_1,_Method_UnityEngine_Component_GetComponent_UIRect____12e2bf8);
  *(undefined8 *)(param_1 + 0xa8) = uVar4;
  if (iRam0000000001345318 != 0) {
    puVar1 = (ulong *)((param_1 + 0xa8U >> 0x12 & 0x7fff) * 8 + 0x138ecd8);
    do {
      cVar2 = '\x01';
      bVar3 = (bool)ExclusiveMonitorPass(puVar1,0x10);
      if (bVar3) {
        *puVar1 = *puVar1 | 1L << (param_1 + 0xa8U >> 0xc & 0x3f);
        cVar2 = ExclusiveMonitorsStatus();
      }
    } while (cVar2 != '\0');
  }
  return;
}



/* TweenPosition$$OnUpdate @ 0x6e5bdc
 * void TweenPosition__OnUpdate (TweenPosition_o* __this, float factor, bool isFinished, const MethodInfo* method); */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* TweenPosition$$OnUpdate
   void TweenPosition__OnUpdate (TweenPosition_o* __this, float factor, bool isFinished, const
   MethodInfo* method); */

void native_TweenPosition__OnUpdate_6e5bdc(float param_1,long param_2)

{
  char cVar1;
  bool bVar2;
  int iVar3;
  int iVar4;
  ulong uVar5;
  long lVar6;
  long *plVar7;
  undefined8 uVar8;
  int iVar9;
  float fVar10;
  float fVar11;
  float fVar12;
  undefined8 uVar13;
  float fVar14;
  float fVar15;
  undefined8 uVar16;
  
  uVar13 = *(undefined8 *)(param_2 + 0x80);
  uVar16 = *(undefined8 *)(param_2 + 0x8c);
  fVar15 = 1.0 - param_1;
  fVar11 = (float)((ulong)uVar13 >> 0x20) * fVar15 + (float)((ulong)uVar16 >> 0x20) * param_1;
  fVar14 = fVar15 * *(float *)(param_2 + 0x88) + *(float *)(param_2 + 0x94) * param_1;
  fVar12 = fVar11;
  if ((bRam000000000133f3aa & 1) == 0) {
    native_sub_43273c(&NGUIMath_TypeInfo_12d53b8);
    native_sub_43273c(&UnityEngine_Object_TypeInfo_12d54e0);
    bRam000000000133f3aa = 1;
  }
  uVar8 = *(undefined8 *)(param_2 + 0xa8);
  if (((*(byte *)(_UnityEngine_Object_TypeInfo_12d54e0 + 0x133) >> 2 & 1) != 0) &&
     (*(int *)(_UnityEngine_Object_TypeInfo_12d54e0 + 0xe0) == 0)) {
    native_sub_4327ec();
  }
  uVar5 = native_UnityEngine_Object__op_Equality_8e9a3c(uVar8,0,0);
  if ((uVar5 & 1) == 0) {
    if (*(long *)(param_2 + 0xa8) == 0) goto LAB_006e5b7c;
    uVar5 = native_UIRect__get_isAnchored_c2d8cc(*(long *)(param_2 + 0xa8),0);
    if (((uVar5 & 1) != 0) && (*(char *)(param_2 + 0x98) == '\0')) {
      lVar6 = native_TweenPosition__get_cachedTransform_6e5944(param_2);
      if (lVar6 != 0) {
        fVar10 = (float)native_UnityEngine_Transform__get_localPosition_7717f4(lVar6,0);
        plVar7 = *(long **)(param_2 + 0xa8);
        fVar11 = fVar11 - fVar12;
        if (((*(byte *)(_NGUIMath_TypeInfo_12d53b8 + 0x133) >> 2 & 1) != 0) &&
           (*(int *)(_NGUIMath_TypeInfo_12d53b8 + 0xe0) == 0)) {
          native_sub_4327ec();
        }
        fVar12 = fVar11;
        if ((bRam0000000001340475 & 1) == 0) {
          native_sub_43273c(&UnityEngine_Object_TypeInfo_12d54e0,0);
          bRam0000000001340475 = 1;
        }
        iVar3 = native_UnityEngine_Mathf__FloorToInt_8e506c
                          ((((float)uVar13 * fVar15 + (float)uVar16 * param_1) - fVar10) + 0.5,0);
        iVar4 = native_UnityEngine_Mathf__FloorToInt_8e506c(fVar11 + 0.5,0);
        if (plVar7 != (long *)0x0) {
          lVar6 = native_UIRect__get_cachedTransform_c27c58(plVar7,0);
          if (lVar6 != 0) {
            fVar11 = (float)native_UnityEngine_Transform__get_localPosition_7717f4(lVar6,0);
            native_UnityEngine_Transform__set_localPosition_7718a4
                      (fVar11 + (float)iVar3,fVar12 + (float)iVar4,fVar14 + 0.0,lVar6,0);
            if (plVar7[3] != 0) {
              uVar13 = *(undefined8 *)(plVar7[3] + 0x10);
              if (((*(byte *)(_UnityEngine_Object_TypeInfo_12d54e0 + 0x133) >> 2 & 1) != 0) &&
                 (*(int *)(_UnityEngine_Object_TypeInfo_12d54e0 + 0xe0) == 0)) {
                native_sub_4327ec();
              }
              uVar5 = native_UnityEngine_Object__op_Implicit_8e1b98(uVar13,0);
              if ((uVar5 & 1) == 0) {
                iVar9 = 0;
              }
              else {
                lVar6 = plVar7[3];
                if (lVar6 == 0) goto LAB_00807050;
                iVar9 = 1;
                *(int *)(lVar6 + 0x1c) = *(int *)(lVar6 + 0x1c) + iVar3;
              }
              if (plVar7[4] != 0) {
                uVar13 = *(undefined8 *)(plVar7[4] + 0x10);
                if (((*(byte *)(_UnityEngine_Object_TypeInfo_12d54e0 + 0x133) >> 2 & 1) != 0) &&
                   (*(int *)(_UnityEngine_Object_TypeInfo_12d54e0 + 0xe0) == 0)) {
                  native_sub_4327ec();
                }
                uVar5 = native_UnityEngine_Object__op_Implicit_8e1b98(uVar13,0);
                if ((uVar5 & 1) != 0) {
                  lVar6 = plVar7[4];
                  if (lVar6 == 0) goto LAB_00807050;
                  iVar9 = iVar9 + 1;
                  *(int *)(lVar6 + 0x1c) = *(int *)(lVar6 + 0x1c) + iVar3;
                }
                if (plVar7[5] != 0) {
                  uVar13 = *(undefined8 *)(plVar7[5] + 0x10);
                  if (((*(byte *)(_UnityEngine_Object_TypeInfo_12d54e0 + 0x133) >> 2 & 1) != 0) &&
                     (*(int *)(_UnityEngine_Object_TypeInfo_12d54e0 + 0xe0) == 0)) {
                    native_sub_4327ec();
                  }
                  uVar5 = native_UnityEngine_Object__op_Implicit_8e1b98(uVar13,0);
                  if ((uVar5 & 1) != 0) {
                    lVar6 = plVar7[5];
                    if (lVar6 == 0) goto LAB_00807050;
                    iVar9 = iVar9 + 1;
                    *(int *)(lVar6 + 0x1c) = *(int *)(lVar6 + 0x1c) + iVar4;
                  }
                  if (plVar7[6] != 0) {
                    uVar13 = *(undefined8 *)(plVar7[6] + 0x10);
                    if (((*(byte *)(_UnityEngine_Object_TypeInfo_12d54e0 + 0x133) >> 2 & 1) != 0) &&
                       (*(int *)(_UnityEngine_Object_TypeInfo_12d54e0 + 0xe0) == 0)) {
                      native_sub_4327ec();
                    }
                    uVar5 = native_UnityEngine_Object__op_Implicit_8e1b98(uVar13,0);
                    if ((uVar5 & 1) == 0) {
                      if (iVar9 == 0) {
                        return;
                      }
                    }
                    else {
                      lVar6 = plVar7[6];
                      if (lVar6 == 0) goto LAB_00807050;
                      *(int *)(lVar6 + 0x1c) = *(int *)(lVar6 + 0x1c) + iVar4;
                    }
                    uVar5 = native_UIRect__get_isAnchored_c2d8cc(plVar7,0);
                    if ((uVar5 & 1) == 0) {
                      return;
                    }
                    *(undefined4 *)((long)plVar7 + 0x5c) = 0xffffffff;
                    *(undefined1 *)((long)plVar7 + 0x5a) = 1;
                    iVar3 = native_UnityEngine_Time__get_frameCount_770964(0);
                    if ((bRam0000000001342713 & 1) == 0) {
                      native_sub_43273c(&UnityEngine_Object_TypeInfo_12d54e0);
                      bRam0000000001342713 = 1;
                    }
                    *(int *)((long)plVar7 + 0x5c) = iVar3;
                    *(undefined1 *)((long)plVar7 + 0x5a) = 0;
                    if (plVar7[3] != 0) {
                      uVar13 = *(undefined8 *)(plVar7[3] + 0x10);
                      if (((*(byte *)(_UnityEngine_Object_TypeInfo_12d54e0 + 0x133) >> 2 & 1) != 0)
                         && (*(int *)(_UnityEngine_Object_TypeInfo_12d54e0 + 0xe0) == 0)) {
                        native_sub_4327ec();
                      }
                      uVar5 = native_UnityEngine_Object__op_Implicit_8e1b98(uVar13,0);
                      if ((uVar5 & 1) == 0) {
                        bVar2 = false;
                      }
                      else {
                        if (plVar7[3] == 0) goto LAB_00c2ea0c;
                        uVar13 = *(undefined8 *)(plVar7[3] + 0x20);
                        if (((*(byte *)(_UnityEngine_Object_TypeInfo_12d54e0 + 0x133) >> 2 & 1) != 0
                            ) && (*(int *)(_UnityEngine_Object_TypeInfo_12d54e0 + 0xe0) == 0)) {
                          native_sub_4327ec();
                        }
                        uVar5 = native_UnityEngine_Object__op_Inequality_8d76fc(uVar13,0,0);
                        if ((uVar5 & 1) != 0) {
                          if ((plVar7[3] == 0) || (lVar6 = *(long *)(plVar7[3] + 0x20), lVar6 == 0))
                          goto LAB_00c2ea0c;
                          if (*(int *)(lVar6 + 0x5c) != iVar3) {
                            native_UIRect__Update_c2e62c();
                          }
                        }
                        bVar2 = true;
                      }
                      if (plVar7[5] != 0) {
                        uVar13 = *(undefined8 *)(plVar7[5] + 0x10);
                        if (((*(byte *)(_UnityEngine_Object_TypeInfo_12d54e0 + 0x133) >> 2 & 1) != 0
                            ) && (*(int *)(_UnityEngine_Object_TypeInfo_12d54e0 + 0xe0) == 0)) {
                          native_sub_4327ec();
                        }
                        uVar5 = native_UnityEngine_Object__op_Implicit_8e1b98(uVar13,0);
                        if ((uVar5 & 1) != 0) {
                          if (plVar7[5] == 0) goto LAB_00c2ea0c;
                          uVar13 = *(undefined8 *)(plVar7[5] + 0x20);
                          if (((*(byte *)(_UnityEngine_Object_TypeInfo_12d54e0 + 0x133) >> 2 & 1) !=
                               0) && (*(int *)(_UnityEngine_Object_TypeInfo_12d54e0 + 0xe0) == 0)) {
                            native_sub_4327ec();
                          }
                          uVar5 = native_UnityEngine_Object__op_Inequality_8d76fc(uVar13,0,0);
                          if ((uVar5 & 1) != 0) {
                            if ((plVar7[5] == 0) ||
                               (lVar6 = *(long *)(plVar7[5] + 0x20), lVar6 == 0)) goto LAB_00c2ea0c;
                            if (*(int *)(lVar6 + 0x5c) != iVar3) {
                              native_UIRect__Update_c2e62c();
                            }
                          }
                          bVar2 = true;
                        }
                        if (plVar7[4] != 0) {
                          uVar13 = *(undefined8 *)(plVar7[4] + 0x10);
                          if (((*(byte *)(_UnityEngine_Object_TypeInfo_12d54e0 + 0x133) >> 2 & 1) !=
                               0) && (*(int *)(_UnityEngine_Object_TypeInfo_12d54e0 + 0xe0) == 0)) {
                            native_sub_4327ec();
                          }
                          uVar5 = native_UnityEngine_Object__op_Implicit_8e1b98(uVar13,0);
                          if ((uVar5 & 1) != 0) {
                            if (plVar7[4] == 0) goto LAB_00c2ea0c;
                            uVar13 = *(undefined8 *)(plVar7[4] + 0x20);
                            if (((*(byte *)(_UnityEngine_Object_TypeInfo_12d54e0 + 0x133) >> 2 & 1)
                                 != 0) &&
                               (*(int *)(_UnityEngine_Object_TypeInfo_12d54e0 + 0xe0) == 0)) {
                              native_sub_4327ec();
                            }
                            uVar5 = native_UnityEngine_Object__op_Inequality_8d76fc(uVar13,0,0);
                            if ((uVar5 & 1) != 0) {
                              if ((plVar7[4] == 0) ||
                                 (lVar6 = *(long *)(plVar7[4] + 0x20), lVar6 == 0))
                              goto LAB_00c2ea0c;
                              if (*(int *)(lVar6 + 0x5c) != iVar3) {
                                native_UIRect__Update_c2e62c();
                              }
                            }
                            bVar2 = true;
                          }
                          if (plVar7[6] != 0) {
                            uVar13 = *(undefined8 *)(plVar7[6] + 0x10);
                            if (((*(byte *)(_UnityEngine_Object_TypeInfo_12d54e0 + 0x133) >> 2 & 1)
                                 != 0) &&
                               (*(int *)(_UnityEngine_Object_TypeInfo_12d54e0 + 0xe0) == 0)) {
                              native_sub_4327ec();
                            }
                            uVar5 = native_UnityEngine_Object__op_Implicit_8e1b98(uVar13,0);
                            if ((uVar5 & 1) == 0) {
                              if (!bVar2) {
                                return;
                              }
                            }
                            else {
                              if (plVar7[6] == 0) goto LAB_00c2ea0c;
                              uVar13 = *(undefined8 *)(plVar7[6] + 0x20);
                              if (((*(byte *)(_UnityEngine_Object_TypeInfo_12d54e0 + 0x133) >> 2 & 1
                                   ) != 0) &&
                                 (*(int *)(_UnityEngine_Object_TypeInfo_12d54e0 + 0xe0) == 0)) {
                                native_sub_4327ec();
                              }
                              uVar5 = native_UnityEngine_Object__op_Inequality_8d76fc(uVar13,0,0);
                              if ((uVar5 & 1) != 0) {
                                if ((plVar7[6] == 0) ||
                                   (lVar6 = *(long *)(plVar7[6] + 0x20), lVar6 == 0))
                                goto LAB_00c2ea0c;
                                if (*(int *)(lVar6 + 0x5c) != iVar3) {
                                  native_UIRect__Update_c2e62c();
                                }
                              }
                            }
                    /* WARNING: Could not recover jumptable at 0x00c2e9f4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
                            (**(code **)(*plVar7 + 600))(plVar7,*(undefined8 *)(*plVar7 + 0x260));
                            return;
                          }
                        }
                      }
                    }
LAB_00c2ea0c:
                    /* WARNING: Subroutine does not return */
                    native_sub_432810();
                  }
                }
              }
            }
          }
        }
LAB_00807050:
                    /* WARNING: Subroutine does not return */
        native_sub_432810();
      }
      goto LAB_006e5b7c;
    }
  }
  cVar1 = *(char *)(param_2 + 0x98);
  lVar6 = native_TweenPosition__get_cachedTransform_6e5944(param_2);
  if (lVar6 != 0) {
    if (cVar1 != '\0') {
      if (pcRam000000000133fed8 == (code *)0x0) {
        pcRam000000000133fed8 = (code *)native_sub_4326f0(&UNK_00e2ad18,0);
      }
      (*pcRam000000000133fed8)(lVar6,&stack0xffffffffffffffd0);
      return;
    }
    if (pcRam000000000133fee8 == (code *)0x0) {
      pcRam000000000133fee8 = (code *)native_sub_4326f0(&UNK_00e2ada3,0);
    }
    (*pcRam000000000133fee8)(lVar6,&stack0xffffffffffffffd0);
    return;
  }
LAB_006e5b7c:
                    /* WARNING: Subroutine does not return */
  native_sub_432810();
}



/* TweenPosition$$Begin @ 0x6e5c14
 * TweenPosition_o* TweenPosition__Begin (UnityEngine_GameObject_o* go, float duration, UnityEngine_Vector3_o pos, const MethodInfo* method); */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* TweenPosition$$Begin
   TweenPosition_o* TweenPosition__Begin (UnityEngine_GameObject_o* go, float duration,
   UnityEngine_Vector3_o pos, const MethodInfo* method); */

long native_TweenPosition__Begin_6e5c14
               (undefined8 param_1,undefined4 param_2,undefined4 param_3,undefined4 param_4,
               undefined8 param_5)

{
  long lVar1;
  undefined4 uVar2;
  undefined4 uVar3;
  undefined4 uVar4;
  
  uVar4 = param_3;
  if ((bRam000000000133f3ac & 1) == 0) {
    native_sub_43273c(&Method_UITweener_Begin_TweenPosition____12e7928);
    bRam000000000133f3ac = 1;
  }
  uVar3 = 0;
  lVar1 = native_UITweener__Begin_object__d8710c
                    (param_1,param_5,_Method_UITweener_Begin_TweenPosition____12e7928);
  if (lVar1 != 0) {
    uVar2 = native_TweenPosition__get_value_6e59e8();
    *(undefined4 *)(lVar1 + 0x80) = uVar2;
    *(undefined4 *)(lVar1 + 0x84) = uVar3;
    *(undefined4 *)(lVar1 + 0x88) = uVar4;
    *(undefined4 *)(lVar1 + 0x8c) = param_2;
    *(undefined4 *)(lVar1 + 0x90) = param_3;
    *(undefined4 *)(lVar1 + 0x94) = param_4;
    if ((float)param_1 <= 0.0) {
      native_UITweener__Sample_948a44(0x3f800000,lVar1,1,0);
      native_UnityEngine_Behaviour__set_enabled_8d7b0c(lVar1,0,0);
    }
    return lVar1;
  }
                    /* WARNING: Subroutine does not return */
  native_sub_432810();
}



/* TweenPosition$$Begin @ 0x6e5cd8
 * TweenPosition_o* TweenPosition__Begin (UnityEngine_GameObject_o* go, float duration, UnityEngine_Vector3_o pos, bool worldSpace, const MethodInfo* method); */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* TweenPosition$$Begin
   TweenPosition_o* TweenPosition__Begin (UnityEngine_GameObject_o* go, float duration,
   UnityEngine_Vector3_o pos, bool worldSpace, const MethodInfo* method); */

long native_TweenPosition__Begin_6e5cd8
               (undefined8 param_1,undefined4 param_2,undefined4 param_3,undefined4 param_4,
               undefined8 param_5,byte param_6)

{
  long lVar1;
  undefined4 uVar2;
  undefined4 uVar3;
  undefined4 uVar4;
  
  uVar4 = param_3;
  if ((bRam000000000133f3ad & 1) == 0) {
    native_sub_43273c(&Method_UITweener_Begin_TweenPosition____12e7928);
    bRam000000000133f3ad = 1;
  }
  uVar3 = 0;
  lVar1 = native_UITweener__Begin_object__d8710c
                    (param_1,param_5,_Method_UITweener_Begin_TweenPosition____12e7928);
  if (lVar1 != 0) {
    *(byte *)(lVar1 + 0x98) = param_6 & 1;
    uVar2 = native_TweenPosition__get_value_6e59e8();
    *(undefined4 *)(lVar1 + 0x80) = uVar2;
    *(undefined4 *)(lVar1 + 0x84) = uVar3;
    *(undefined4 *)(lVar1 + 0x88) = uVar4;
    *(undefined4 *)(lVar1 + 0x8c) = param_2;
    *(undefined4 *)(lVar1 + 0x90) = param_3;
    *(undefined4 *)(lVar1 + 0x94) = param_4;
    if ((float)param_1 <= 0.0) {
      native_UITweener__Sample_948a44(0x3f800000,lVar1,1,0);
      native_UnityEngine_Behaviour__set_enabled_8d7b0c(lVar1,0,0);
    }
    return lVar1;
  }
                    /* WARNING: Subroutine does not return */
  native_sub_432810();
}



/* TweenPosition$$SetStartToCurrentValue @ 0x6e5db0
 * void TweenPosition__SetStartToCurrentValue (TweenPosition_o* __this, const MethodInfo* method); */

/* TweenPosition$$SetStartToCurrentValue
   void TweenPosition__SetStartToCurrentValue (TweenPosition_o* __this, const MethodInfo* method);
    */

void native_TweenPosition__SetStartToCurrentValue_6e5db0
               (undefined1 param_1 [16],undefined4 param_2,undefined4 param_3,long param_4)

{
  undefined4 uVar1;
  
  uVar1 = native_TweenPosition__get_value_6e59e8();
  *(undefined4 *)(param_4 + 0x80) = uVar1;
  *(undefined4 *)(param_4 + 0x84) = param_2;
  *(undefined4 *)(param_4 + 0x88) = param_3;
  return;
}



/* TweenPosition$$SetEndToCurrentValue @ 0x6e5dd8
 * void TweenPosition__SetEndToCurrentValue (TweenPosition_o* __this, const MethodInfo* method); */

/* TweenPosition$$SetEndToCurrentValue
   void TweenPosition__SetEndToCurrentValue (TweenPosition_o* __this, const MethodInfo* method); */

void native_TweenPosition__SetEndToCurrentValue_6e5dd8
               (undefined1 param_1 [16],undefined4 param_2,undefined4 param_3,long param_4)

{
  undefined4 uVar1;
  
  uVar1 = native_TweenPosition__get_value_6e59e8();
  *(undefined4 *)(param_4 + 0x8c) = uVar1;
  *(undefined4 *)(param_4 + 0x90) = param_2;
  *(undefined4 *)(param_4 + 0x94) = param_3;
  return;
}



/* TweenPosition$$SetCurrentValueToStart @ 0x6e5e00
 * void TweenPosition__SetCurrentValueToStart (TweenPosition_o* __this, const MethodInfo* method); */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* TweenPosition$$SetCurrentValueToStart
   void TweenPosition__SetCurrentValueToStart (TweenPosition_o* __this, const MethodInfo* method);
    */

void native_TweenPosition__SetCurrentValueToStart_6e5e00(long param_1)

{
  char cVar1;
  bool bVar2;
  int iVar3;
  int iVar4;
  ulong uVar5;
  long lVar6;
  long *plVar7;
  undefined8 uVar8;
  int iVar9;
  float fVar10;
  float fVar11;
  float fVar12;
  float fVar13;
  float fVar14;
  
  fVar11 = *(float *)(param_1 + 0x80);
  fVar13 = *(float *)(param_1 + 0x84);
  fVar14 = *(float *)(param_1 + 0x88);
  fVar12 = fVar13;
  if ((bRam000000000133f3aa & 1) == 0) {
    native_sub_43273c(&NGUIMath_TypeInfo_12d53b8);
    native_sub_43273c(&UnityEngine_Object_TypeInfo_12d54e0);
    bRam000000000133f3aa = 1;
  }
  uVar8 = *(undefined8 *)(param_1 + 0xa8);
  if (((*(byte *)(_UnityEngine_Object_TypeInfo_12d54e0 + 0x133) >> 2 & 1) != 0) &&
     (*(int *)(_UnityEngine_Object_TypeInfo_12d54e0 + 0xe0) == 0)) {
    native_sub_4327ec();
  }
  uVar5 = native_UnityEngine_Object__op_Equality_8e9a3c(uVar8,0,0);
  if ((uVar5 & 1) == 0) {
    if (*(long *)(param_1 + 0xa8) == 0) goto LAB_006e5b7c;
    uVar5 = native_UIRect__get_isAnchored_c2d8cc(*(long *)(param_1 + 0xa8),0);
    if (((uVar5 & 1) != 0) && (*(char *)(param_1 + 0x98) == '\0')) {
      lVar6 = native_TweenPosition__get_cachedTransform_6e5944(param_1);
      if (lVar6 != 0) {
        fVar10 = (float)native_UnityEngine_Transform__get_localPosition_7717f4(lVar6,0);
        plVar7 = *(long **)(param_1 + 0xa8);
        fVar13 = fVar13 - fVar12;
        if (((*(byte *)(_NGUIMath_TypeInfo_12d53b8 + 0x133) >> 2 & 1) != 0) &&
           (*(int *)(_NGUIMath_TypeInfo_12d53b8 + 0xe0) == 0)) {
          native_sub_4327ec();
        }
        fVar12 = fVar13;
        if ((bRam0000000001340475 & 1) == 0) {
          native_sub_43273c(&UnityEngine_Object_TypeInfo_12d54e0,0);
          bRam0000000001340475 = 1;
        }
        iVar3 = native_UnityEngine_Mathf__FloorToInt_8e506c((fVar11 - fVar10) + 0.5,0);
        iVar4 = native_UnityEngine_Mathf__FloorToInt_8e506c(fVar13 + 0.5,0);
        if (plVar7 != (long *)0x0) {
          lVar6 = native_UIRect__get_cachedTransform_c27c58(plVar7,0);
          if (lVar6 != 0) {
            fVar11 = (float)native_UnityEngine_Transform__get_localPosition_7717f4(lVar6,0);
            native_UnityEngine_Transform__set_localPosition_7718a4
                      (fVar11 + (float)iVar3,fVar12 + (float)iVar4,fVar14 + 0.0,lVar6,0);
            if (plVar7[3] != 0) {
              uVar8 = *(undefined8 *)(plVar7[3] + 0x10);
              if (((*(byte *)(_UnityEngine_Object_TypeInfo_12d54e0 + 0x133) >> 2 & 1) != 0) &&
                 (*(int *)(_UnityEngine_Object_TypeInfo_12d54e0 + 0xe0) == 0)) {
                native_sub_4327ec();
              }
              uVar5 = native_UnityEngine_Object__op_Implicit_8e1b98(uVar8,0);
              if ((uVar5 & 1) == 0) {
                iVar9 = 0;
              }
              else {
                lVar6 = plVar7[3];
                if (lVar6 == 0) goto LAB_00807050;
                iVar9 = 1;
                *(int *)(lVar6 + 0x1c) = *(int *)(lVar6 + 0x1c) + iVar3;
              }
              if (plVar7[4] != 0) {
                uVar8 = *(undefined8 *)(plVar7[4] + 0x10);
                if (((*(byte *)(_UnityEngine_Object_TypeInfo_12d54e0 + 0x133) >> 2 & 1) != 0) &&
                   (*(int *)(_UnityEngine_Object_TypeInfo_12d54e0 + 0xe0) == 0)) {
                  native_sub_4327ec();
                }
                uVar5 = native_UnityEngine_Object__op_Implicit_8e1b98(uVar8,0);
                if ((uVar5 & 1) != 0) {
                  lVar6 = plVar7[4];
                  if (lVar6 == 0) goto LAB_00807050;
                  iVar9 = iVar9 + 1;
                  *(int *)(lVar6 + 0x1c) = *(int *)(lVar6 + 0x1c) + iVar3;
                }
                if (plVar7[5] != 0) {
                  uVar8 = *(undefined8 *)(plVar7[5] + 0x10);
                  if (((*(byte *)(_UnityEngine_Object_TypeInfo_12d54e0 + 0x133) >> 2 & 1) != 0) &&
                     (*(int *)(_UnityEngine_Object_TypeInfo_12d54e0 + 0xe0) == 0)) {
                    native_sub_4327ec();
                  }
                  uVar5 = native_UnityEngine_Object__op_Implicit_8e1b98(uVar8,0);
                  if ((uVar5 & 1) != 0) {
                    lVar6 = plVar7[5];
                    if (lVar6 == 0) goto LAB_00807050;
                    iVar9 = iVar9 + 1;
                    *(int *)(lVar6 + 0x1c) = *(int *)(lVar6 + 0x1c) + iVar4;
                  }
                  if (plVar7[6] != 0) {
                    uVar8 = *(undefined8 *)(plVar7[6] + 0x10);
                    if (((*(byte *)(_UnityEngine_Object_TypeInfo_12d54e0 + 0x133) >> 2 & 1) != 0) &&
                       (*(int *)(_UnityEngine_Object_TypeInfo_12d54e0 + 0xe0) == 0)) {
                      native_sub_4327ec();
                    }
                    uVar5 = native_UnityEngine_Object__op_Implicit_8e1b98(uVar8,0);
                    if ((uVar5 & 1) == 0) {
                      if (iVar9 == 0) {
                        return;
                      }
                    }
                    else {
                      lVar6 = plVar7[6];
                      if (lVar6 == 0) goto LAB_00807050;
                      *(int *)(lVar6 + 0x1c) = *(int *)(lVar6 + 0x1c) + iVar4;
                    }
                    uVar5 = native_UIRect__get_isAnchored_c2d8cc(plVar7,0);
                    if ((uVar5 & 1) == 0) {
                      return;
                    }
                    *(undefined4 *)((long)plVar7 + 0x5c) = 0xffffffff;
                    *(undefined1 *)((long)plVar7 + 0x5a) = 1;
                    iVar3 = native_UnityEngine_Time__get_frameCount_770964(0);
                    if ((bRam0000000001342713 & 1) == 0) {
                      native_sub_43273c(&UnityEngine_Object_TypeInfo_12d54e0);
                      bRam0000000001342713 = 1;
                    }
                    *(int *)((long)plVar7 + 0x5c) = iVar3;
                    *(undefined1 *)((long)plVar7 + 0x5a) = 0;
                    if (plVar7[3] != 0) {
                      uVar8 = *(undefined8 *)(plVar7[3] + 0x10);
                      if (((*(byte *)(_UnityEngine_Object_TypeInfo_12d54e0 + 0x133) >> 2 & 1) != 0)
                         && (*(int *)(_UnityEngine_Object_TypeInfo_12d54e0 + 0xe0) == 0)) {
                        native_sub_4327ec();
                      }
                      uVar5 = native_UnityEngine_Object__op_Implicit_8e1b98(uVar8,0);
                      if ((uVar5 & 1) == 0) {
                        bVar2 = false;
                      }
                      else {
                        if (plVar7[3] == 0) goto LAB_00c2ea0c;
                        uVar8 = *(undefined8 *)(plVar7[3] + 0x20);
                        if (((*(byte *)(_UnityEngine_Object_TypeInfo_12d54e0 + 0x133) >> 2 & 1) != 0
                            ) && (*(int *)(_UnityEngine_Object_TypeInfo_12d54e0 + 0xe0) == 0)) {
                          native_sub_4327ec();
                        }
                        uVar5 = native_UnityEngine_Object__op_Inequality_8d76fc(uVar8,0,0);
                        if ((uVar5 & 1) != 0) {
                          if ((plVar7[3] == 0) || (lVar6 = *(long *)(plVar7[3] + 0x20), lVar6 == 0))
                          goto LAB_00c2ea0c;
                          if (*(int *)(lVar6 + 0x5c) != iVar3) {
                            native_UIRect__Update_c2e62c();
                          }
                        }
                        bVar2 = true;
                      }
                      if (plVar7[5] != 0) {
                        uVar8 = *(undefined8 *)(plVar7[5] + 0x10);
                        if (((*(byte *)(_UnityEngine_Object_TypeInfo_12d54e0 + 0x133) >> 2 & 1) != 0
                            ) && (*(int *)(_UnityEngine_Object_TypeInfo_12d54e0 + 0xe0) == 0)) {
                          native_sub_4327ec();
                        }
                        uVar5 = native_UnityEngine_Object__op_Implicit_8e1b98(uVar8,0);
                        if ((uVar5 & 1) != 0) {
                          if (plVar7[5] == 0) goto LAB_00c2ea0c;
                          uVar8 = *(undefined8 *)(plVar7[5] + 0x20);
                          if (((*(byte *)(_UnityEngine_Object_TypeInfo_12d54e0 + 0x133) >> 2 & 1) !=
                               0) && (*(int *)(_UnityEngine_Object_TypeInfo_12d54e0 + 0xe0) == 0)) {
                            native_sub_4327ec();
                          }
                          uVar5 = native_UnityEngine_Object__op_Inequality_8d76fc(uVar8,0,0);
                          if ((uVar5 & 1) != 0) {
                            if ((plVar7[5] == 0) ||
                               (lVar6 = *(long *)(plVar7[5] + 0x20), lVar6 == 0)) goto LAB_00c2ea0c;
                            if (*(int *)(lVar6 + 0x5c) != iVar3) {
                              native_UIRect__Update_c2e62c();
                            }
                          }
                          bVar2 = true;
                        }
                        if (plVar7[4] != 0) {
                          uVar8 = *(undefined8 *)(plVar7[4] + 0x10);
                          if (((*(byte *)(_UnityEngine_Object_TypeInfo_12d54e0 + 0x133) >> 2 & 1) !=
                               0) && (*(int *)(_UnityEngine_Object_TypeInfo_12d54e0 + 0xe0) == 0)) {
                            native_sub_4327ec();
                          }
                          uVar5 = native_UnityEngine_Object__op_Implicit_8e1b98(uVar8,0);
                          if ((uVar5 & 1) != 0) {
                            if (plVar7[4] == 0) goto LAB_00c2ea0c;
                            uVar8 = *(undefined8 *)(plVar7[4] + 0x20);
                            if (((*(byte *)(_UnityEngine_Object_TypeInfo_12d54e0 + 0x133) >> 2 & 1)
                                 != 0) &&
                               (*(int *)(_UnityEngine_Object_TypeInfo_12d54e0 + 0xe0) == 0)) {
                              native_sub_4327ec();
                            }
                            uVar5 = native_UnityEngine_Object__op_Inequality_8d76fc(uVar8,0,0);
                            if ((uVar5 & 1) != 0) {
                              if ((plVar7[4] == 0) ||
                                 (lVar6 = *(long *)(plVar7[4] + 0x20), lVar6 == 0))
                              goto LAB_00c2ea0c;
                              if (*(int *)(lVar6 + 0x5c) != iVar3) {
                                native_UIRect__Update_c2e62c();
                              }
                            }
                            bVar2 = true;
                          }
                          if (plVar7[6] != 0) {
                            uVar8 = *(undefined8 *)(plVar7[6] + 0x10);
                            if (((*(byte *)(_UnityEngine_Object_TypeInfo_12d54e0 + 0x133) >> 2 & 1)
                                 != 0) &&
                               (*(int *)(_UnityEngine_Object_TypeInfo_12d54e0 + 0xe0) == 0)) {
                              native_sub_4327ec();
                            }
                            uVar5 = native_UnityEngine_Object__op_Implicit_8e1b98(uVar8,0);
                            if ((uVar5 & 1) == 0) {
                              if (!bVar2) {
                                return;
                              }
                            }
                            else {
                              if (plVar7[6] == 0) goto LAB_00c2ea0c;
                              uVar8 = *(undefined8 *)(plVar7[6] + 0x20);
                              if (((*(byte *)(_UnityEngine_Object_TypeInfo_12d54e0 + 0x133) >> 2 & 1
                                   ) != 0) &&
                                 (*(int *)(_UnityEngine_Object_TypeInfo_12d54e0 + 0xe0) == 0)) {
                                native_sub_4327ec();
                              }
                              uVar5 = native_UnityEngine_Object__op_Inequality_8d76fc(uVar8,0,0);
                              if ((uVar5 & 1) != 0) {
                                if ((plVar7[6] == 0) ||
                                   (lVar6 = *(long *)(plVar7[6] + 0x20), lVar6 == 0))
                                goto LAB_00c2ea0c;
                                if (*(int *)(lVar6 + 0x5c) != iVar3) {
                                  native_UIRect__Update_c2e62c();
                                }
                              }
                            }
                    /* WARNING: Could not recover jumptable at 0x00c2e9f4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
                            (**(code **)(*plVar7 + 600))(plVar7,*(undefined8 *)(*plVar7 + 0x260));
                            return;
                          }
                        }
                      }
                    }
LAB_00c2ea0c:
                    /* WARNING: Subroutine does not return */
                    native_sub_432810();
                  }
                }
              }
            }
          }
        }
LAB_00807050:
                    /* WARNING: Subroutine does not return */
        native_sub_432810();
      }
      goto LAB_006e5b7c;
    }
  }
  cVar1 = *(char *)(param_1 + 0x98);
  lVar6 = native_TweenPosition__get_cachedTransform_6e5944(param_1);
  if (lVar6 != 0) {
    if (cVar1 != '\0') {
      if (pcRam000000000133fed8 == (code *)0x0) {
        pcRam000000000133fed8 = (code *)native_sub_4326f0(&UNK_00e2ad18,0);
      }
      (*pcRam000000000133fed8)(lVar6,&stack0xffffffffffffffd0);
      return;
    }
    if (pcRam000000000133fee8 == (code *)0x0) {
      pcRam000000000133fee8 = (code *)native_sub_4326f0(&UNK_00e2ada3,0);
    }
    (*pcRam000000000133fee8)(lVar6,&stack0xffffffffffffffd0);
    return;
  }
LAB_006e5b7c:
                    /* WARNING: Subroutine does not return */
  native_sub_432810();
}



/* TweenPosition$$SetCurrentValueToEnd @ 0x6e5e0c
 * void TweenPosition__SetCurrentValueToEnd (TweenPosition_o* __this, const MethodInfo* method); */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* TweenPosition$$SetCurrentValueToEnd
   void TweenPosition__SetCurrentValueToEnd (TweenPosition_o* __this, const MethodInfo* method); */

void native_TweenPosition__SetCurrentValueToEnd_6e5e0c(long param_1)

{
  char cVar1;
  bool bVar2;
  int iVar3;
  int iVar4;
  ulong uVar5;
  long lVar6;
  long *plVar7;
  undefined8 uVar8;
  int iVar9;
  float fVar10;
  float fVar11;
  float fVar12;
  float fVar13;
  float fVar14;
  
  fVar11 = *(float *)(param_1 + 0x8c);
  fVar13 = *(float *)(param_1 + 0x90);
  fVar14 = *(float *)(param_1 + 0x94);
  fVar12 = fVar13;
  if ((bRam000000000133f3aa & 1) == 0) {
    native_sub_43273c(&NGUIMath_TypeInfo_12d53b8);
    native_sub_43273c(&UnityEngine_Object_TypeInfo_12d54e0);
    bRam000000000133f3aa = 1;
  }
  uVar8 = *(undefined8 *)(param_1 + 0xa8);
  if (((*(byte *)(_UnityEngine_Object_TypeInfo_12d54e0 + 0x133) >> 2 & 1) != 0) &&
     (*(int *)(_UnityEngine_Object_TypeInfo_12d54e0 + 0xe0) == 0)) {
    native_sub_4327ec();
  }
  uVar5 = native_UnityEngine_Object__op_Equality_8e9a3c(uVar8,0,0);
  if ((uVar5 & 1) == 0) {
    if (*(long *)(param_1 + 0xa8) == 0) goto LAB_006e5b7c;
    uVar5 = native_UIRect__get_isAnchored_c2d8cc(*(long *)(param_1 + 0xa8),0);
    if (((uVar5 & 1) != 0) && (*(char *)(param_1 + 0x98) == '\0')) {
      lVar6 = native_TweenPosition__get_cachedTransform_6e5944(param_1);
      if (lVar6 != 0) {
        fVar10 = (float)native_UnityEngine_Transform__get_localPosition_7717f4(lVar6,0);
        plVar7 = *(long **)(param_1 + 0xa8);
        fVar13 = fVar13 - fVar12;
        if (((*(byte *)(_NGUIMath_TypeInfo_12d53b8 + 0x133) >> 2 & 1) != 0) &&
           (*(int *)(_NGUIMath_TypeInfo_12d53b8 + 0xe0) == 0)) {
          native_sub_4327ec();
        }
        fVar12 = fVar13;
        if ((bRam0000000001340475 & 1) == 0) {
          native_sub_43273c(&UnityEngine_Object_TypeInfo_12d54e0,0);
          bRam0000000001340475 = 1;
        }
        iVar3 = native_UnityEngine_Mathf__FloorToInt_8e506c((fVar11 - fVar10) + 0.5,0);
        iVar4 = native_UnityEngine_Mathf__FloorToInt_8e506c(fVar13 + 0.5,0);
        if (plVar7 != (long *)0x0) {
          lVar6 = native_UIRect__get_cachedTransform_c27c58(plVar7,0);
          if (lVar6 != 0) {
            fVar11 = (float)native_UnityEngine_Transform__get_localPosition_7717f4(lVar6,0);
            native_UnityEngine_Transform__set_localPosition_7718a4
                      (fVar11 + (float)iVar3,fVar12 + (float)iVar4,fVar14 + 0.0,lVar6,0);
            if (plVar7[3] != 0) {
              uVar8 = *(undefined8 *)(plVar7[3] + 0x10);
              if (((*(byte *)(_UnityEngine_Object_TypeInfo_12d54e0 + 0x133) >> 2 & 1) != 0) &&
                 (*(int *)(_UnityEngine_Object_TypeInfo_12d54e0 + 0xe0) == 0)) {
                native_sub_4327ec();
              }
              uVar5 = native_UnityEngine_Object__op_Implicit_8e1b98(uVar8,0);
              if ((uVar5 & 1) == 0) {
                iVar9 = 0;
              }
              else {
                lVar6 = plVar7[3];
                if (lVar6 == 0) goto LAB_00807050;
                iVar9 = 1;
                *(int *)(lVar6 + 0x1c) = *(int *)(lVar6 + 0x1c) + iVar3;
              }
              if (plVar7[4] != 0) {
                uVar8 = *(undefined8 *)(plVar7[4] + 0x10);
                if (((*(byte *)(_UnityEngine_Object_TypeInfo_12d54e0 + 0x133) >> 2 & 1) != 0) &&
                   (*(int *)(_UnityEngine_Object_TypeInfo_12d54e0 + 0xe0) == 0)) {
                  native_sub_4327ec();
                }
                uVar5 = native_UnityEngine_Object__op_Implicit_8e1b98(uVar8,0);
                if ((uVar5 & 1) != 0) {
                  lVar6 = plVar7[4];
                  if (lVar6 == 0) goto LAB_00807050;
                  iVar9 = iVar9 + 1;
                  *(int *)(lVar6 + 0x1c) = *(int *)(lVar6 + 0x1c) + iVar3;
                }
                if (plVar7[5] != 0) {
                  uVar8 = *(undefined8 *)(plVar7[5] + 0x10);
                  if (((*(byte *)(_UnityEngine_Object_TypeInfo_12d54e0 + 0x133) >> 2 & 1) != 0) &&
                     (*(int *)(_UnityEngine_Object_TypeInfo_12d54e0 + 0xe0) == 0)) {
                    native_sub_4327ec();
                  }
                  uVar5 = native_UnityEngine_Object__op_Implicit_8e1b98(uVar8,0);
                  if ((uVar5 & 1) != 0) {
                    lVar6 = plVar7[5];
                    if (lVar6 == 0) goto LAB_00807050;
                    iVar9 = iVar9 + 1;
                    *(int *)(lVar6 + 0x1c) = *(int *)(lVar6 + 0x1c) + iVar4;
                  }
                  if (plVar7[6] != 0) {
                    uVar8 = *(undefined8 *)(plVar7[6] + 0x10);
                    if (((*(byte *)(_UnityEngine_Object_TypeInfo_12d54e0 + 0x133) >> 2 & 1) != 0) &&
                       (*(int *)(_UnityEngine_Object_TypeInfo_12d54e0 + 0xe0) == 0)) {
                      native_sub_4327ec();
                    }
                    uVar5 = native_UnityEngine_Object__op_Implicit_8e1b98(uVar8,0);
                    if ((uVar5 & 1) == 0) {
                      if (iVar9 == 0) {
                        return;
                      }
                    }
                    else {
                      lVar6 = plVar7[6];
                      if (lVar6 == 0) goto LAB_00807050;
                      *(int *)(lVar6 + 0x1c) = *(int *)(lVar6 + 0x1c) + iVar4;
                    }
                    uVar5 = native_UIRect__get_isAnchored_c2d8cc(plVar7,0);
                    if ((uVar5 & 1) == 0) {
                      return;
                    }
                    *(undefined4 *)((long)plVar7 + 0x5c) = 0xffffffff;
                    *(undefined1 *)((long)plVar7 + 0x5a) = 1;
                    iVar3 = native_UnityEngine_Time__get_frameCount_770964(0);
                    if ((bRam0000000001342713 & 1) == 0) {
                      native_sub_43273c(&UnityEngine_Object_TypeInfo_12d54e0);
                      bRam0000000001342713 = 1;
                    }
                    *(int *)((long)plVar7 + 0x5c) = iVar3;
                    *(undefined1 *)((long)plVar7 + 0x5a) = 0;
                    if (plVar7[3] != 0) {
                      uVar8 = *(undefined8 *)(plVar7[3] + 0x10);
                      if (((*(byte *)(_UnityEngine_Object_TypeInfo_12d54e0 + 0x133) >> 2 & 1) != 0)
                         && (*(int *)(_UnityEngine_Object_TypeInfo_12d54e0 + 0xe0) == 0)) {
                        native_sub_4327ec();
                      }
                      uVar5 = native_UnityEngine_Object__op_Implicit_8e1b98(uVar8,0);
                      if ((uVar5 & 1) == 0) {
                        bVar2 = false;
                      }
                      else {
                        if (plVar7[3] == 0) goto LAB_00c2ea0c;
                        uVar8 = *(undefined8 *)(plVar7[3] + 0x20);
                        if (((*(byte *)(_UnityEngine_Object_TypeInfo_12d54e0 + 0x133) >> 2 & 1) != 0
                            ) && (*(int *)(_UnityEngine_Object_TypeInfo_12d54e0 + 0xe0) == 0)) {
                          native_sub_4327ec();
                        }
                        uVar5 = native_UnityEngine_Object__op_Inequality_8d76fc(uVar8,0,0);
                        if ((uVar5 & 1) != 0) {
                          if ((plVar7[3] == 0) || (lVar6 = *(long *)(plVar7[3] + 0x20), lVar6 == 0))
                          goto LAB_00c2ea0c;
                          if (*(int *)(lVar6 + 0x5c) != iVar3) {
                            native_UIRect__Update_c2e62c();
                          }
                        }
                        bVar2 = true;
                      }
                      if (plVar7[5] != 0) {
                        uVar8 = *(undefined8 *)(plVar7[5] + 0x10);
                        if (((*(byte *)(_UnityEngine_Object_TypeInfo_12d54e0 + 0x133) >> 2 & 1) != 0
                            ) && (*(int *)(_UnityEngine_Object_TypeInfo_12d54e0 + 0xe0) == 0)) {
                          native_sub_4327ec();
                        }
                        uVar5 = native_UnityEngine_Object__op_Implicit_8e1b98(uVar8,0);
                        if ((uVar5 & 1) != 0) {
                          if (plVar7[5] == 0) goto LAB_00c2ea0c;
                          uVar8 = *(undefined8 *)(plVar7[5] + 0x20);
                          if (((*(byte *)(_UnityEngine_Object_TypeInfo_12d54e0 + 0x133) >> 2 & 1) !=
                               0) && (*(int *)(_UnityEngine_Object_TypeInfo_12d54e0 + 0xe0) == 0)) {
                            native_sub_4327ec();
                          }
                          uVar5 = native_UnityEngine_Object__op_Inequality_8d76fc(uVar8,0,0);
                          if ((uVar5 & 1) != 0) {
                            if ((plVar7[5] == 0) ||
                               (lVar6 = *(long *)(plVar7[5] + 0x20), lVar6 == 0)) goto LAB_00c2ea0c;
                            if (*(int *)(lVar6 + 0x5c) != iVar3) {
                              native_UIRect__Update_c2e62c();
                            }
                          }
                          bVar2 = true;
                        }
                        if (plVar7[4] != 0) {
                          uVar8 = *(undefined8 *)(plVar7[4] + 0x10);
                          if (((*(byte *)(_UnityEngine_Object_TypeInfo_12d54e0 + 0x133) >> 2 & 1) !=
                               0) && (*(int *)(_UnityEngine_Object_TypeInfo_12d54e0 + 0xe0) == 0)) {
                            native_sub_4327ec();
                          }
                          uVar5 = native_UnityEngine_Object__op_Implicit_8e1b98(uVar8,0);
                          if ((uVar5 & 1) != 0) {
                            if (plVar7[4] == 0) goto LAB_00c2ea0c;
                            uVar8 = *(undefined8 *)(plVar7[4] + 0x20);
                            if (((*(byte *)(_UnityEngine_Object_TypeInfo_12d54e0 + 0x133) >> 2 & 1)
                                 != 0) &&
                               (*(int *)(_UnityEngine_Object_TypeInfo_12d54e0 + 0xe0) == 0)) {
                              native_sub_4327ec();
                            }
                            uVar5 = native_UnityEngine_Object__op_Inequality_8d76fc(uVar8,0,0);
                            if ((uVar5 & 1) != 0) {
                              if ((plVar7[4] == 0) ||
                                 (lVar6 = *(long *)(plVar7[4] + 0x20), lVar6 == 0))
                              goto LAB_00c2ea0c;
                              if (*(int *)(lVar6 + 0x5c) != iVar3) {
                                native_UIRect__Update_c2e62c();
                              }
                            }
                            bVar2 = true;
                          }
                          if (plVar7[6] != 0) {
                            uVar8 = *(undefined8 *)(plVar7[6] + 0x10);
                            if (((*(byte *)(_UnityEngine_Object_TypeInfo_12d54e0 + 0x133) >> 2 & 1)
                                 != 0) &&
                               (*(int *)(_UnityEngine_Object_TypeInfo_12d54e0 + 0xe0) == 0)) {
                              native_sub_4327ec();
                            }
                            uVar5 = native_UnityEngine_Object__op_Implicit_8e1b98(uVar8,0);
                            if ((uVar5 & 1) == 0) {
                              if (!bVar2) {
                                return;
                              }
                            }
                            else {
                              if (plVar7[6] == 0) goto LAB_00c2ea0c;
                              uVar8 = *(undefined8 *)(plVar7[6] + 0x20);
                              if (((*(byte *)(_UnityEngine_Object_TypeInfo_12d54e0 + 0x133) >> 2 & 1
                                   ) != 0) &&
                                 (*(int *)(_UnityEngine_Object_TypeInfo_12d54e0 + 0xe0) == 0)) {
                                native_sub_4327ec();
                              }
                              uVar5 = native_UnityEngine_Object__op_Inequality_8d76fc(uVar8,0,0);
                              if ((uVar5 & 1) != 0) {
                                if ((plVar7[6] == 0) ||
                                   (lVar6 = *(long *)(plVar7[6] + 0x20), lVar6 == 0))
                                goto LAB_00c2ea0c;
                                if (*(int *)(lVar6 + 0x5c) != iVar3) {
                                  native_UIRect__Update_c2e62c();
                                }
                              }
                            }
                    /* WARNING: Could not recover jumptable at 0x00c2e9f4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
                            (**(code **)(*plVar7 + 600))(plVar7,*(undefined8 *)(*plVar7 + 0x260));
                            return;
                          }
                        }
                      }
                    }
LAB_00c2ea0c:
                    /* WARNING: Subroutine does not return */
                    native_sub_432810();
                  }
                }
              }
            }
          }
        }
LAB_00807050:
                    /* WARNING: Subroutine does not return */
        native_sub_432810();
      }
      goto LAB_006e5b7c;
    }
  }
  cVar1 = *(char *)(param_1 + 0x98);
  lVar6 = native_TweenPosition__get_cachedTransform_6e5944(param_1);
  if (lVar6 != 0) {
    if (cVar1 != '\0') {
      if (pcRam000000000133fed8 == (code *)0x0) {
        pcRam000000000133fed8 = (code *)native_sub_4326f0(&UNK_00e2ad18,0);
      }
      (*pcRam000000000133fed8)(lVar6,&stack0xffffffffffffffd0);
      return;
    }
    if (pcRam000000000133fee8 == (code *)0x0) {
      pcRam000000000133fee8 = (code *)native_sub_4326f0(&UNK_00e2ada3,0);
    }
    (*pcRam000000000133fee8)(lVar6,&stack0xffffffffffffffd0);
    return;
  }
LAB_006e5b7c:
                    /* WARNING: Subroutine does not return */
  native_sub_432810();
}



/* TweenPosition$$.ctor @ 0x6e5e18
 * void TweenPosition___ctor (TweenPosition_o* __this, const MethodInfo* method); */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* TweenPosition$$.ctor
   void TweenPosition___ctor (TweenPosition_o* __this, const MethodInfo* method); */

void native_TweenPosition___ctor_6e5e18(long param_1)

{
  long lVar1;
  undefined8 uVar2;
  undefined8 uStack_90;
  undefined4 uStack_88;
  undefined4 uStack_84;
  undefined4 uStack_80;
  undefined4 uStack_7c;
  undefined4 uStack_78;
  undefined8 uStack_70;
  undefined4 uStack_68;
  undefined4 uStack_64;
  undefined4 uStack_60;
  undefined8 uStack_5c;
  undefined8 uStack_50;
  undefined4 uStack_48;
  undefined4 uStack_44;
  undefined4 uStack_40;
  undefined4 uStack_3c;
  undefined4 uStack_38;
  
  if ((bRam000000000134144a & 1) == 0) {
    native_sub_43273c(&UnityEngine_AnimationCurve_TypeInfo_12d3768,0);
    native_sub_43273c(&UnityEngine_Keyframe___TypeInfo_12d3298);
    native_sub_43273c(&Method_System_Collections_Generic_List_EventDelegate___ctor___12dc738);
    native_sub_43273c(&System_Collections_Generic_List_EventDelegate__TypeInfo_12d2a08);
    bRam000000000134144a = 1;
  }
  lVar1 = native_sub_432750(_UnityEngine_Keyframe___TypeInfo_12d3298,2);
  uStack_50 = 0;
  uStack_48 = 0;
  uStack_44 = 0;
  uStack_38 = 0;
  uStack_40 = 0;
  uStack_3c = 0;
  native_UnityEngine_Keyframe___ctor_8dfc58(0,0,0,0x3f800000,&uStack_50,0);
  if (lVar1 != 0) {
    uStack_5c = CONCAT44(uStack_38,uStack_3c);
    uStack_60 = uStack_40;
    uStack_68 = uStack_48;
    uStack_64 = uStack_44;
    uStack_70 = uStack_50;
    if (*(int *)(lVar1 + 0x18) != 0) {
      *(undefined8 *)(lVar1 + 0x34) = uStack_5c;
      *(ulong *)(lVar1 + 0x2c) = CONCAT44(uStack_40,uStack_44);
      *(ulong *)(lVar1 + 0x28) = CONCAT44(uStack_44,uStack_48);
      *(undefined8 *)(lVar1 + 0x20) = uStack_50;
      uStack_90 = 0;
      uStack_88 = 0;
      uStack_84 = 0;
      uStack_78 = 0;
      uStack_80 = 0;
      uStack_7c = 0;
      native_UnityEngine_Keyframe___ctor_8dfc58(0x3f800000,0x3f800000,0x3f800000,0,&uStack_90,0);
      if (1 < *(uint *)(lVar1 + 0x18)) {
        *(ulong *)(lVar1 + 0x50) = CONCAT44(uStack_78,uStack_7c);
        *(ulong *)(lVar1 + 0x48) = CONCAT44(uStack_80,uStack_84);
        *(ulong *)(lVar1 + 0x44) = CONCAT44(uStack_84,uStack_88);
        *(undefined8 *)(lVar1 + 0x3c) = uStack_90;
        uVar2 = native_sub_432808(_UnityEngine_AnimationCurve_TypeInfo_12d3768);
        native_UnityEngine_AnimationCurve___ctor_8d5df4(uVar2,lVar1,0);
        *(undefined8 *)(param_1 + 0x20) = uVar2;
        native_sub_4326e0((undefined8 *)(param_1 + 0x20),uVar2);
        *(undefined1 *)(param_1 + 0x28) = 1;
        *(undefined8 *)(param_1 + 0x30) = 0x3f80000000000002;
        uVar2 = native_sub_432808(_System_Collections_Generic_List_EventDelegate__TypeInfo_12d2a08);
        native_System_Collections_Generic_List_XmlEventCache_XmlEvent______ctor_d3ff44
                  (uVar2,_Method_System_Collections_Generic_List_EventDelegate___ctor___12dc738);
        *(undefined8 *)(param_1 + 0x48) = uVar2;
        native_sub_4326e0(param_1 + 0x48,uVar2);
        *(undefined4 *)(param_1 + 0x60) = 0x3f800000;
        *(undefined4 *)(param_1 + 0x70) = 0x447a0000;
        native_UnityEngine_MonoBehaviour___ctor_8e971c(param_1,0);
        return;
      }
    }
    uVar2 = native_sub_43283c();
                    /* WARNING: Subroutine does not return */
    native_sub_4327dc(uVar2,0);
  }
                    /* WARNING: Subroutine does not return */
  native_sub_432810();
}


