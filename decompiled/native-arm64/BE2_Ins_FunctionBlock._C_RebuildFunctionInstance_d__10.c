/* ARM64 IL2CPP native pseudocode from Ghidra.
 * Recovered implementation, not original C# source.
 * Function boundaries follow the IL2CPP method address table. */


/* BE2_Ins_FunctionBlock.<C_RebuildFunctionInstance>d__10$$.ctor @ 0x547b2c
 * void BE2_Ins_FunctionBlock__C_RebuildFunctionInstance_d__10___ctor (BE2_Ins_FunctionBlock__C_RebuildFunctionInstance_d__10_o* __this, int32_t __1__state, const MethodInfo* method); */

/* BE2_Ins_FunctionBlock.<C_RebuildFunctionInstance>d__10$$.ctor
   void BE2_Ins_FunctionBlock__C_RebuildFunctionInstance_d__10___ctor
   (BE2_Ins_FunctionBlock__C_RebuildFunctionInstance_d__10_o* __this, int32_t __1__state, const
   MethodInfo* method); */

void native_BE2_Ins_FunctionBlock__C_RebuildFunctionInstance_d__10___ctor_547b2c
               (long param_1,undefined4 param_2)

{
  native_System_Object___ctor_ad2798(param_1,0);
  *(undefined4 *)(param_1 + 0x10) = param_2;
  return;
}



/* BE2_Ins_FunctionBlock.<C_RebuildFunctionInstance>d__10$$System.IDisposable.Dispose @ 0x547b58
 * void BE2_Ins_FunctionBlock__C_RebuildFunctionInstance_d__10__System_IDisposable_Dispose (BE2_Ins_FunctionBlock__C_RebuildFunctionInstance_d__10_o* __this, const MethodInfo* method); */

/* BE2_Ins_FunctionBlock.<C_RebuildFunctionInstance>d__10$$System.IDisposable.Dispose
   void BE2_Ins_FunctionBlock__C_RebuildFunctionInstance_d__10__System_IDisposable_Dispose
   (BE2_Ins_FunctionBlock__C_RebuildFunctionInstance_d__10_o* __this, const MethodInfo* method); */

void native_BE2_Ins_FunctionBlock__C_RebuildFunctionInstance_d__10__System_IDisposable_Dispose_547b58
               (void)

{
  return;
}



/* BE2_Ins_FunctionBlock.<C_RebuildFunctionInstance>d__10$$MoveNext @ 0x547b5c
 * bool BE2_Ins_FunctionBlock__C_RebuildFunctionInstance_d__10__MoveNext (BE2_Ins_FunctionBlock__C_RebuildFunctionInstance_d__10_o* __this, const MethodInfo* method); */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* BE2_Ins_FunctionBlock.<C_RebuildFunctionInstance>d__10$$MoveNext
   bool BE2_Ins_FunctionBlock__C_RebuildFunctionInstance_d__10__MoveNext
   (BE2_Ins_FunctionBlock__C_RebuildFunctionInstance_d__10_o* __this, const MethodInfo* method); */

undefined8
native_BE2_Ins_FunctionBlock__C_RebuildFunctionInstance_d__10__MoveNext_547b5c(long param_1)

{
  int iVar1;
  undefined8 uVar2;
  undefined8 *puVar3;
  undefined8 uVar4;
  long lVar5;
  long lVar6;
  ulong uVar7;
  ulong uVar8;
  int *piVar9;
  long lVar10;
  long *plVar11;
  long *plVar12;
  
  if ((bRam000000000133e9a5 & 1) == 0) {
    native_sub_43273c(&MG_BlocksEngine2_Block_I_BE2_BlockLayout_TypeInfo_12d4de0);
    native_sub_43273c(&MG_BlocksEngine2_Block_I_BE2_BlockSectionBody_TypeInfo_12d4df0);
    native_sub_43273c(&MG_BlocksEngine2_Block_I_BE2_BlockSection_TypeInfo_12d4de8);
    native_sub_43273c(&MG_BlocksEngine2_Block_I_BE2_Block_TypeInfo_12d4dd8);
    native_sub_43273c(&UnityEngine_Object_TypeInfo_12d54e0);
    native_sub_43273c(&UnityEngine_WaitForEndOfFrame_TypeInfo_12d6738);
    bRam000000000133e9a5 = 1;
  }
  if (*(int *)(param_1 + 0x10) != 1) {
    if (*(int *)(param_1 + 0x10) != 0) {
      return 0;
    }
    *(undefined4 *)(param_1 + 0x10) = 0xffffffff;
    uVar2 = native_sub_432808(_UnityEngine_WaitForEndOfFrame_TypeInfo_12d6738);
    native_UnityEngine_WaitForEndOfFrame___ctor_7775b8(uVar2,0);
    *(undefined8 *)(param_1 + 0x18) = uVar2;
    native_sub_4326e0(param_1 + 0x18,uVar2);
    *(undefined4 *)(param_1 + 0x10) = 1;
    return 1;
  }
  lVar10 = *(long *)(param_1 + 0x20);
  *(undefined4 *)(param_1 + 0x10) = 0xffffffff;
  if ((lVar10 != 0) && (plVar11 = *(long **)(lVar10 + 0x40), plVar11 != (long *)0x0)) {
    lVar5 = *plVar11;
    if ((ulong)*(ushort *)(lVar5 + 0x12a) != 0) {
      uVar7 = 0;
      piVar9 = (int *)(*(long *)(lVar5 + 0xb0) + 8);
      do {
        if (*(long *)(piVar9 + -2) == _MG_BlocksEngine2_Block_I_BE2_Block_TypeInfo_12d4dd8) {
          puVar3 = (undefined8 *)(lVar5 + (long)(*piVar9 + 3) * 0x10 + 0x138);
          goto LAB_00547ca0;
        }
        uVar7 = uVar7 + 1;
        piVar9 = piVar9 + 4;
      } while (uVar7 < *(ushort *)(lVar5 + 0x12a));
    }
    puVar3 = (undefined8 *)
             native_sub_3c9b34(plVar11,_MG_BlocksEngine2_Block_I_BE2_Block_TypeInfo_12d4dd8,3);
LAB_00547ca0:
    plVar11 = (long *)(*(code *)*puVar3)(plVar11,puVar3[1]);
    if (plVar11 != (long *)0x0) {
      lVar5 = *plVar11;
      if ((ulong)*(ushort *)(lVar5 + 0x12a) != 0) {
        uVar7 = 0;
        piVar9 = (int *)(*(long *)(lVar5 + 0xb0) + 8);
        do {
          if (*(long *)(piVar9 + -2) == _MG_BlocksEngine2_Block_I_BE2_BlockLayout_TypeInfo_12d4de0)
          {
            puVar3 = (undefined8 *)(lVar5 + (long)(*piVar9 + 2) * 0x10 + 0x138);
            goto LAB_00547d14;
          }
          uVar7 = uVar7 + 1;
          piVar9 = piVar9 + 4;
        } while (uVar7 < *(ushort *)(lVar5 + 0x12a));
      }
      puVar3 = (undefined8 *)
               native_sub_3c9b34(plVar11,_MG_BlocksEngine2_Block_I_BE2_BlockLayout_TypeInfo_12d4de0,
                                 2);
LAB_00547d14:
      lVar5 = (*(code *)*puVar3)(plVar11,puVar3[1]);
      if (lVar5 != 0) {
        if (*(int *)(lVar5 + 0x18) == 0) goto LAB_0054841c;
        plVar11 = *(long **)(lVar5 + 0x20);
        if (plVar11 != (long *)0x0) {
          lVar5 = *plVar11;
          if ((ulong)*(ushort *)(lVar5 + 0x12a) != 0) {
            uVar7 = 0;
            piVar9 = (int *)(*(long *)(lVar5 + 0xb0) + 8);
            do {
              if (*(long *)(piVar9 + -2) ==
                  _MG_BlocksEngine2_Block_I_BE2_BlockSection_TypeInfo_12d4de8) {
                puVar3 = (undefined8 *)(lVar5 + (long)(*piVar9 + 2) * 0x10 + 0x138);
                goto LAB_00547d94;
              }
              uVar7 = uVar7 + 1;
              piVar9 = piVar9 + 4;
            } while (uVar7 < *(ushort *)(lVar5 + 0x12a));
          }
          puVar3 = (undefined8 *)
                   native_sub_3c9b34(plVar11,
                                     _MG_BlocksEngine2_Block_I_BE2_BlockSection_TypeInfo_12d4de8,2);
LAB_00547d94:
          plVar11 = (long *)(*(code *)*puVar3)(plVar11,puVar3[1]);
          if (plVar11 != (long *)0x0) {
            lVar5 = *plVar11;
            if ((ulong)*(ushort *)(lVar5 + 0x12a) != 0) {
              uVar7 = 0;
              piVar9 = (int *)(*(long *)(lVar5 + 0xb0) + 8);
              do {
                if (*(long *)(piVar9 + -2) ==
                    _MG_BlocksEngine2_Block_I_BE2_BlockSectionBody_TypeInfo_12d4df0) {
                  puVar3 = (undefined8 *)(lVar5 + (long)(*piVar9 + 6) * 0x10 + 0x138);
                  goto LAB_00547e08;
                }
                uVar7 = uVar7 + 1;
                piVar9 = piVar9 + 4;
              } while (uVar7 < *(ushort *)(lVar5 + 0x12a));
            }
            puVar3 = (undefined8 *)
                     native_sub_3c9b34(plVar11,
                                       _MG_BlocksEngine2_Block_I_BE2_BlockSectionBody_TypeInfo_12d4df0
                                       ,6);
LAB_00547e08:
            iVar1 = (*(code *)*puVar3)(plVar11,puVar3[1]);
            if (-1 < iVar1 + -1) {
              uVar7 = (ulong)(iVar1 + -1);
              do {
                lVar5 = *plVar11;
                if ((ulong)*(ushort *)(lVar5 + 0x12a) != 0) {
                  uVar8 = 0;
                  piVar9 = (int *)(*(long *)(lVar5 + 0xb0) + 8);
                  do {
                    if (*(long *)(piVar9 + -2) ==
                        _MG_BlocksEngine2_Block_I_BE2_BlockSectionBody_TypeInfo_12d4df0) {
                      puVar3 = (undefined8 *)(lVar5 + (long)(*piVar9 + 2) * 0x10 + 0x138);
                      goto LAB_00547e80;
                    }
                    uVar8 = uVar8 + 1;
                    piVar9 = piVar9 + 4;
                  } while (uVar8 < *(ushort *)(lVar5 + 0x12a));
                }
                puVar3 = (undefined8 *)
                         native_sub_3c9b34(plVar11,
                                           _MG_BlocksEngine2_Block_I_BE2_BlockSectionBody_TypeInfo_12d4df0
                                           ,2);
LAB_00547e80:
                lVar5 = (*(code *)*puVar3)(plVar11,puVar3[1]);
                if (lVar5 == 0) goto LAB_00548418;
                if (*(uint *)(lVar5 + 0x18) <= uVar7) goto LAB_0054841c;
                plVar12 = *(long **)(lVar5 + uVar7 * 8 + 0x20);
                if (((*(byte *)(_UnityEngine_Object_TypeInfo_12d54e0 + 0x133) >> 2 & 1) == 0) ||
                   (*(int *)(_UnityEngine_Object_TypeInfo_12d54e0 + 0xe0) != 0)) {
                  if (plVar12 != (long *)0x0) goto LAB_00547ec0;
LAB_00547ed4:
                  plVar12 = (long *)0x0;
                }
                else {
                  native_sub_4327ec();
                  if (plVar12 == (long *)0x0) goto LAB_00547ed4;
LAB_00547ec0:
                  if (*(byte *)(*plVar12 + 300) <
                      *(byte *)(_UnityEngine_Object_TypeInfo_12d54e0 + 300)) goto LAB_00547ed4;
                  if (*(long *)(*(long *)(*plVar12 + 200) +
                                (ulong)*(byte *)(_UnityEngine_Object_TypeInfo_12d54e0 + 300) * 8 +
                               -8) != _UnityEngine_Object_TypeInfo_12d54e0) {
                    plVar12 = (long *)0x0;
                  }
                }
                uVar8 = native_UnityEngine_Object__op_Implicit_8e1b98(plVar12,0);
                if ((uVar8 & 1) != 0) {
                  lVar5 = *plVar11;
                  if ((ulong)*(ushort *)(lVar5 + 0x12a) != 0) {
                    uVar8 = 0;
                    piVar9 = (int *)(*(long *)(lVar5 + 0xb0) + 8);
                    do {
                      if (*(long *)(piVar9 + -2) ==
                          _MG_BlocksEngine2_Block_I_BE2_BlockSectionBody_TypeInfo_12d4df0) {
                        puVar3 = (undefined8 *)(lVar5 + (long)(*piVar9 + 2) * 0x10 + 0x138);
                        goto LAB_00547f64;
                      }
                      uVar8 = uVar8 + 1;
                      piVar9 = piVar9 + 4;
                    } while (uVar8 < *(ushort *)(lVar5 + 0x12a));
                  }
                  puVar3 = (undefined8 *)
                           native_sub_3c9b34(plVar11,
                                             _MG_BlocksEngine2_Block_I_BE2_BlockSectionBody_TypeInfo_12d4df0
                                             ,2);
LAB_00547f64:
                  lVar5 = (*(code *)*puVar3)(plVar11,puVar3[1]);
                  if (lVar5 == 0) goto LAB_00548418;
                  if (*(uint *)(lVar5 + 0x18) <= uVar7) goto LAB_0054841c;
                  plVar12 = *(long **)(lVar5 + uVar7 * 8 + 0x20);
                  if (plVar12 == (long *)0x0) goto LAB_00548418;
                  lVar5 = *plVar12;
                  if ((ulong)*(ushort *)(lVar5 + 0x12a) != 0) {
                    uVar8 = 0;
                    piVar9 = (int *)(*(long *)(lVar5 + 0xb0) + 8);
                    do {
                      if (*(long *)(piVar9 + -2) ==
                          _MG_BlocksEngine2_Block_I_BE2_Block_TypeInfo_12d4dd8) {
                        puVar3 = (undefined8 *)(lVar5 + (long)*piVar9 * 0x10 + 0x138);
                        goto LAB_00547fe0;
                      }
                      uVar8 = uVar8 + 1;
                      piVar9 = piVar9 + 4;
                    } while (uVar8 < *(ushort *)(lVar5 + 0x12a));
                  }
                  puVar3 = (undefined8 *)
                           native_sub_3c9b34(plVar12,
                                             _MG_BlocksEngine2_Block_I_BE2_Block_TypeInfo_12d4dd8,0)
                  ;
LAB_00547fe0:
                  lVar5 = (*(code *)*puVar3)(plVar12,puVar3[1]);
                  if (lVar5 == 0) goto LAB_00548418;
                  uVar2 = native_UnityEngine_Component__get_gameObject_8da66c(lVar5,0);
                  if (((*(byte *)(_UnityEngine_Object_TypeInfo_12d54e0 + 0x133) >> 2 & 1) != 0) &&
                     (*(int *)(_UnityEngine_Object_TypeInfo_12d54e0 + 0xe0) == 0)) {
                    native_sub_4327ec(_UnityEngine_Object_TypeInfo_12d54e0);
                  }
                  native_UnityEngine_Object__Destroy_8ea574(uVar2,0);
                }
                uVar7 = uVar7 - 1;
              } while (-1 < (int)uVar7);
            }
            if ((*(long *)(lVar10 + 0x80) != 0) &&
               (plVar11 = *(long **)(*(long *)(lVar10 + 0x80) + 0x40), plVar11 != (long *)0x0)) {
              lVar5 = *plVar11;
              if ((ulong)*(ushort *)(lVar5 + 0x12a) != 0) {
                uVar7 = 0;
                piVar9 = (int *)(*(long *)(lVar5 + 0xb0) + 8);
                do {
                  if (*(long *)(piVar9 + -2) == _MG_BlocksEngine2_Block_I_BE2_Block_TypeInfo_12d4dd8
                     ) {
                    puVar3 = (undefined8 *)(lVar5 + (long)(*piVar9 + 3) * 0x10 + 0x138);
                    goto LAB_00548094;
                  }
                  uVar7 = uVar7 + 1;
                  piVar9 = piVar9 + 4;
                } while (uVar7 < *(ushort *)(lVar5 + 0x12a));
              }
              puVar3 = (undefined8 *)
                       native_sub_3c9b34(plVar11,
                                         _MG_BlocksEngine2_Block_I_BE2_Block_TypeInfo_12d4dd8,3);
LAB_00548094:
              plVar11 = (long *)(*(code *)*puVar3)(plVar11,puVar3[1]);
              if (plVar11 != (long *)0x0) {
                lVar5 = *plVar11;
                if ((ulong)*(ushort *)(lVar5 + 0x12a) != 0) {
                  uVar7 = 0;
                  piVar9 = (int *)(*(long *)(lVar5 + 0xb0) + 8);
                  do {
                    if (*(long *)(piVar9 + -2) ==
                        _MG_BlocksEngine2_Block_I_BE2_BlockLayout_TypeInfo_12d4de0) {
                      puVar3 = (undefined8 *)(lVar5 + (long)(*piVar9 + 2) * 0x10 + 0x138);
                      goto LAB_00548100;
                    }
                    uVar7 = uVar7 + 1;
                    piVar9 = piVar9 + 4;
                  } while (uVar7 < *(ushort *)(lVar5 + 0x12a));
                }
                puVar3 = (undefined8 *)
                         native_sub_3c9b34(plVar11,
                                           _MG_BlocksEngine2_Block_I_BE2_BlockLayout_TypeInfo_12d4de0
                                           ,2);
LAB_00548100:
                lVar5 = (*(code *)*puVar3)(plVar11,puVar3[1]);
                if (lVar5 != 0) {
                  if (*(int *)(lVar5 + 0x18) == 0) {
LAB_0054841c:
                    uVar2 = native_sub_43283c();
                    /* WARNING: Subroutine does not return */
                    native_sub_4327dc(uVar2,0);
                  }
                  plVar11 = *(long **)(lVar5 + 0x20);
                  if (plVar11 != (long *)0x0) {
                    lVar5 = *plVar11;
                    if ((ulong)*(ushort *)(lVar5 + 0x12a) != 0) {
                      uVar7 = 0;
                      piVar9 = (int *)(*(long *)(lVar5 + 0xb0) + 8);
                      do {
                        if (*(long *)(piVar9 + -2) ==
                            _MG_BlocksEngine2_Block_I_BE2_BlockSection_TypeInfo_12d4de8) {
                          puVar3 = (undefined8 *)(lVar5 + (long)(*piVar9 + 2) * 0x10 + 0x138);
                          goto LAB_00548178;
                        }
                        uVar7 = uVar7 + 1;
                        piVar9 = piVar9 + 4;
                      } while (uVar7 < *(ushort *)(lVar5 + 0x12a));
                    }
                    puVar3 = (undefined8 *)
                             native_sub_3c9b34(plVar11,
                                               _MG_BlocksEngine2_Block_I_BE2_BlockSection_TypeInfo_12d4de8
                                               ,2);
LAB_00548178:
                    plVar11 = (long *)(*(code *)*puVar3)(plVar11,puVar3[1]);
                    if (plVar11 != (long *)0x0) {
                      lVar5 = *plVar11;
                      if ((ulong)*(ushort *)(lVar5 + 0x12a) != 0) {
                        uVar7 = 0;
                        piVar9 = (int *)(*(long *)(lVar5 + 0xb0) + 8);
                        do {
                          if (*(long *)(piVar9 + -2) ==
                              _MG_BlocksEngine2_Block_I_BE2_BlockSectionBody_TypeInfo_12d4df0) {
                            puVar3 = (undefined8 *)(lVar5 + (long)(*piVar9 + 2) * 0x10 + 0x138);
                            goto LAB_005481e4;
                          }
                          uVar7 = uVar7 + 1;
                          piVar9 = piVar9 + 4;
                        } while (uVar7 < *(ushort *)(lVar5 + 0x12a));
                      }
                      puVar3 = (undefined8 *)
                               native_sub_3c9b34(plVar11,
                                                 _MG_BlocksEngine2_Block_I_BE2_BlockSectionBody_TypeInfo_12d4df0
                                                 ,2);
LAB_005481e4:
                      lVar5 = (*(code *)*puVar3)(plVar11,puVar3[1]);
                      if (lVar5 != 0) {
                        if ((int)*(ulong *)(lVar5 + 0x18) < 1) {
                          return 0;
                        }
                        uVar7 = 0;
                        uVar8 = *(ulong *)(lVar5 + 0x18) & 0xffffffff;
                        while (uVar7 < uVar8) {
                          plVar11 = *(long **)(lVar10 + 0x40);
                          if (plVar11 == (long *)0x0) goto LAB_00548418;
                          lVar6 = *plVar11;
                          uVar2 = *(undefined8 *)(lVar5 + uVar7 * 8 + 0x20);
                          if ((ulong)*(ushort *)(lVar6 + 0x12a) != 0) {
                            uVar8 = 0;
                            piVar9 = (int *)(*(long *)(lVar6 + 0xb0) + 8);
                            do {
                              if (*(long *)(piVar9 + -2) ==
                                  _MG_BlocksEngine2_Block_I_BE2_Block_TypeInfo_12d4dd8) {
                                puVar3 = (undefined8 *)(lVar6 + (long)(*piVar9 + 3) * 0x10 + 0x138);
                                goto LAB_0054827c;
                              }
                              uVar8 = uVar8 + 1;
                              piVar9 = piVar9 + 4;
                            } while (uVar8 < *(ushort *)(lVar6 + 0x12a));
                          }
                          puVar3 = (undefined8 *)
                                   native_sub_3c9b34(plVar11,
                                                  _MG_BlocksEngine2_Block_I_BE2_Block_TypeInfo_12d4dd8
                                                  ,3);
LAB_0054827c:
                          plVar11 = (long *)(*(code *)*puVar3)(plVar11,puVar3[1]);
                          if (plVar11 == (long *)0x0) goto LAB_00548418;
                          lVar6 = *plVar11;
                          if ((ulong)*(ushort *)(lVar6 + 0x12a) != 0) {
                            uVar8 = 0;
                            piVar9 = (int *)(*(long *)(lVar6 + 0xb0) + 8);
                            do {
                              if (*(long *)(piVar9 + -2) ==
                                  _MG_BlocksEngine2_Block_I_BE2_BlockLayout_TypeInfo_12d4de0) {
                                puVar3 = (undefined8 *)(lVar6 + (long)(*piVar9 + 2) * 0x10 + 0x138);
                                goto LAB_005482e8;
                              }
                              uVar8 = uVar8 + 1;
                              piVar9 = piVar9 + 4;
                            } while (uVar8 < *(ushort *)(lVar6 + 0x12a));
                          }
                          puVar3 = (undefined8 *)
                                   native_sub_3c9b34(plVar11,
                                                  _MG_BlocksEngine2_Block_I_BE2_BlockLayout_TypeInfo_12d4de0
                                                  ,2);
LAB_005482e8:
                          lVar6 = (*(code *)*puVar3)(plVar11,puVar3[1]);
                          if (lVar6 == 0) goto LAB_00548418;
                          if (*(int *)(lVar6 + 0x18) == 0) break;
                          plVar11 = *(long **)(lVar6 + 0x20);
                          if (plVar11 == (long *)0x0) goto LAB_00548418;
                          lVar6 = *plVar11;
                          if ((ulong)*(ushort *)(lVar6 + 0x12a) != 0) {
                            uVar8 = 0;
                            piVar9 = (int *)(*(long *)(lVar6 + 0xb0) + 8);
                            do {
                              if (*(long *)(piVar9 + -2) ==
                                  _MG_BlocksEngine2_Block_I_BE2_BlockSection_TypeInfo_12d4de8) {
                                puVar3 = (undefined8 *)(lVar6 + (long)(*piVar9 + 2) * 0x10 + 0x138);
                                goto LAB_00548360;
                              }
                              uVar8 = uVar8 + 1;
                              piVar9 = piVar9 + 4;
                            } while (uVar8 < *(ushort *)(lVar6 + 0x12a));
                          }
                          puVar3 = (undefined8 *)
                                   native_sub_3c9b34(plVar11,
                                                  _MG_BlocksEngine2_Block_I_BE2_BlockSection_TypeInfo_12d4de8
                                                  ,2);
LAB_00548360:
                          plVar11 = (long *)(*(code *)*puVar3)(plVar11,puVar3[1]);
                          if (plVar11 == (long *)0x0) goto LAB_00548418;
                          lVar6 = *plVar11;
                          if ((ulong)*(ushort *)(lVar6 + 0x12a) != 0) {
                            uVar8 = 0;
                            piVar9 = (int *)(*(long *)(lVar6 + 0xb0) + 8);
                            do {
                              if (*(long *)(piVar9 + -2) ==
                                  _MG_BlocksEngine2_Block_I_BE2_BlockSectionBody_TypeInfo_12d4df0) {
                                puVar3 = (undefined8 *)(lVar6 + (long)*piVar9 * 0x10 + 0x138);
                                goto LAB_005483c8;
                              }
                              uVar8 = uVar8 + 1;
                              piVar9 = piVar9 + 4;
                            } while (uVar8 < *(ushort *)(lVar6 + 0x12a));
                          }
                          puVar3 = (undefined8 *)
                                   native_sub_3c9b34(plVar11,
                                                  _MG_BlocksEngine2_Block_I_BE2_BlockSectionBody_TypeInfo_12d4df0
                                                  ,0);
LAB_005483c8:
                          uVar4 = (*(code *)*puVar3)(plVar11,puVar3[1]);
                          native_BE2_Ins_FunctionBlock__InstantiateNoViewBlockRecursive_60780c
                                    (lVar10,uVar2,uVar4,0);
                          uVar8 = (ulong)*(uint *)(lVar5 + 0x18);
                          uVar7 = uVar7 + 1;
                          if ((long)(int)*(uint *)(lVar5 + 0x18) <= (long)uVar7) {
                            return 0;
                          }
                        }
                        goto LAB_0054841c;
                      }
                    }
                  }
                }
              }
            }
          }
        }
      }
    }
  }
LAB_00548418:
                    /* WARNING: Subroutine does not return */
  native_sub_432810();
}



/* BE2_Ins_FunctionBlock.<C_RebuildFunctionInstance>d__10$$System.Collections.Generic.IEnumerator<System.Object>.get_Current @ 0x548428
 * Il2CppObject* BE2_Ins_FunctionBlock__C_RebuildFunctionInstance_d__10__System_Collections_Generic_IEnumerator_System_Object__get_Current (BE2_Ins_FunctionBlock__C_RebuildFunctionInstance_d__10_o* __this, const MethodInfo* method); */

/* BE2_Ins_FunctionBlock.<C_RebuildFunctionInstance>d__10$$System.Collections.Generic.IEnumerator<System.Object>.get_Current
   Il2CppObject*
   BE2_Ins_FunctionBlock__C_RebuildFunctionInstance_d__10__System_Collections_Generic_IEnumerator_System_Object__get_Current
   (BE2_Ins_FunctionBlock__C_RebuildFunctionInstance_d__10_o* __this, const MethodInfo* method); */

undefined8
native_BE2_Ins_FunctionBlock__C_RebuildFunctionInstance_d__10__System_Collections_Generic_IEnumerator_System_Object__get_Current_548428
          (long param_1)

{
  return *(undefined8 *)(param_1 + 0x18);
}



/* BE2_Ins_FunctionBlock.<C_RebuildFunctionInstance>d__10$$System.Collections.IEnumerator.Reset @ 0x548430
 * void BE2_Ins_FunctionBlock__C_RebuildFunctionInstance_d__10__System_Collections_IEnumerator_Reset (BE2_Ins_FunctionBlock__C_RebuildFunctionInstance_d__10_o* __this, const MethodInfo* method); */

/* BE2_Ins_FunctionBlock.<C_RebuildFunctionInstance>d__10$$System.Collections.IEnumerator.Reset
   void BE2_Ins_FunctionBlock__C_RebuildFunctionInstance_d__10__System_Collections_IEnumerator_Reset
   (BE2_Ins_FunctionBlock__C_RebuildFunctionInstance_d__10_o* __this, const MethodInfo* method); */

void native_BE2_Ins_FunctionBlock__C_RebuildFunctionInstance_d__10__System_Collections_IEnumerator_Reset_548430
               (void)

{
  undefined8 uVar1;
  undefined8 uVar2;
  
  native_sub_432740(&System_NotSupportedException_TypeInfo_12d5468);
  uVar1 = native_sub_432808();
  native_System_NotSupportedException___ctor_ad264c(uVar1,0);
  uVar2 = native_sub_432740(&
                            Method_BE2_Ins_FunctionBlock__C_RebuildFunctionInstance_d__10_System_Collections_IEnumerator_Reset___12e9660
                           );
                    /* WARNING: Subroutine does not return */
  native_sub_4327dc(uVar1,uVar2);
}



/* BE2_Ins_FunctionBlock.<C_RebuildFunctionInstance>d__10$$System.Collections.IEnumerator.get_Current @ 0x548470
 * Il2CppObject* BE2_Ins_FunctionBlock__C_RebuildFunctionInstance_d__10__System_Collections_IEnumerator_get_Current (BE2_Ins_FunctionBlock__C_RebuildFunctionInstance_d__10_o* __this, const MethodInfo* method); */

/* BE2_Ins_FunctionBlock.<C_RebuildFunctionInstance>d__10$$System.Collections.IEnumerator.get_Current
   Il2CppObject*
   BE2_Ins_FunctionBlock__C_RebuildFunctionInstance_d__10__System_Collections_IEnumerator_get_Current
   (BE2_Ins_FunctionBlock__C_RebuildFunctionInstance_d__10_o* __this, const MethodInfo* method); */

undefined8
native_BE2_Ins_FunctionBlock__C_RebuildFunctionInstance_d__10__System_Collections_IEnumerator_get_Current_548470
          (long param_1)

{
  return *(undefined8 *)(param_1 + 0x18);
}


