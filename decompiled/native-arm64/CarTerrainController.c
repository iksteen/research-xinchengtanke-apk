/* ARM64 IL2CPP native pseudocode from Ghidra.
 * Recovered implementation, not original C# source.
 * Function boundaries follow the IL2CPP method address table. */


/* CarTerrainController$$Awake @ 0xdd595c
 * void CarTerrainController__Awake (CarTerrainController_o* __this, const MethodInfo* method); */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* CarTerrainController$$Awake
   void CarTerrainController__Awake (CarTerrainController_o* __this, const MethodInfo* method); */

void native_CarTerrainController__Awake_dd595c(long param_1)

{
  ulong *puVar1;
  char cVar2;
  bool bVar3;
  undefined8 uVar4;
  undefined8 *puVar5;
  
  if ((bRam0000000001346e48 & 1) == 0) {
    native_sub_43273c(&Method_System_Collections_Generic_Dictionary_int__GameObject___ctor___12d90e8
                     );
    native_sub_43273c(&System_Collections_Generic_Dictionary_int__GameObject__TypeInfo_12d22d0);
    bRam0000000001346e48 = 1;
  }
  uVar4 = native_sub_432808(_System_Collections_Generic_Dictionary_int__GameObject__TypeInfo_12d22d0
                           );
  native_System_Collections_Generic_Dictionary_int__BMGlyph____ctor_c200f4
            (uVar4,_Method_System_Collections_Generic_Dictionary_int__GameObject___ctor___12d90e8);
  puVar5 = (undefined8 *)(param_1 + 0x48);
  *puVar5 = uVar4;
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



/* CarTerrainController$$Start @ 0xdd59d4
 * void CarTerrainController__Start (CarTerrainController_o* __this, const MethodInfo* method); */

/* CarTerrainController$$Start
   void CarTerrainController__Start (CarTerrainController_o* __this, const MethodInfo* method); */

void native_CarTerrainController__Start_dd59d4(undefined8 param_1)

{
  int iVar1;
  
  iVar1 = 1;
  do {
    native_CarTerrainController__GetTerrain_dd5a0c(param_1,iVar1);
    iVar1 = iVar1 + 1;
  } while (iVar1 != 4);
  return;
}



/* CarTerrainController$$Update @ 0xdd5ac4
 * void CarTerrainController__Update (CarTerrainController_o* __this, const MethodInfo* method); */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* CarTerrainController$$Update
   void CarTerrainController__Update (CarTerrainController_o* __this, const MethodInfo* method); */

void native_CarTerrainController__Update_dd5ac4
               (undefined1 param_1 [16],undefined1 param_2 [16],float param_3,long param_4)

{
  int iVar1;
  int iVar2;
  int iVar3;
  ulong uVar4;
  long lVar5;
  long lVar6;
  ulong uVar7;
  undefined8 uVar8;
  undefined8 uStack_b8;
  undefined8 uStack_b0;
  ulong uStack_a8;
  undefined4 uStack_a0;
  int iStack_98;
  undefined8 uStack_90;
  undefined8 uStack_88;
  ulong uStack_80;
  undefined8 uStack_70;
  undefined8 uStack_68;
  ulong uStack_60;
  
  if ((bRam0000000001346e49 & 1) == 0) {
    native_sub_43273c(&UnityEngine_Object_TypeInfo_12d54e0);
    bRam0000000001346e49 = 1;
  }
  uVar8 = *(undefined8 *)(param_4 + 0x18);
  if (((*(byte *)(_UnityEngine_Object_TypeInfo_12d54e0 + 0x133) >> 2 & 1) != 0) &&
     (*(int *)(_UnityEngine_Object_TypeInfo_12d54e0 + 0xe0) == 0)) {
    native_sub_4327ec();
  }
  uVar4 = native_UnityEngine_Object__op_Inequality_8d76fc(uVar8,0,0);
  if ((uVar4 & 1) != 0) {
    if ((*(long *)(param_4 + 0x18) == 0) ||
       (lVar5 = native_UnityEngine_Component__get_transform_8da62c(*(long *)(param_4 + 0x18),0),
       lVar5 == 0)) {
                    /* WARNING: Subroutine does not return */
      native_sub_432810();
    }
    native_UnityEngine_Transform__get_position_77169c(lVar5,0);
    iVar3 = native_UnityEngine_Mathf__RoundToInt_8e50f0(param_3 / 56.0,0);
    if (iVar3 != *(int *)(param_4 + 0x50)) {
      *(int *)(param_4 + 0x50) = iVar3;
      if ((bRam0000000001346e4a & 1) == 0) {
        native_sub_43273c(&
                          Method_System_Collections_Generic_Dictionary_int__GameObject__ContainsKey___12d90f8
                         );
        native_sub_43273c(&
                          Method_System_Collections_Generic_Dictionary_int__GameObject__Remove___12d9100
                         );
        native_sub_43273c(&
                          Method_System_Collections_Generic_Dictionary_int__GameObject__get_Item___12d9108
                         );
        native_sub_43273c(&
                          Method_System_Collections_Generic_Dictionary_int__GameObject__get_Keys___12d9110
                         );
        native_sub_43273c(&Method_System_Collections_Generic_List_Enumerator_int__Dispose___12da528)
        ;
        native_sub_43273c(&
                          Method_System_Collections_Generic_Dictionary_KeyCollection_Enumerator_int__GameObject__Dispose___12da8b8
                         );
        native_sub_43273c(&Method_System_Collections_Generic_List_Enumerator_int__MoveNext___12da530
                         );
        native_sub_43273c(&
                          Method_System_Collections_Generic_Dictionary_KeyCollection_Enumerator_int__GameObject__MoveNext___12da8c0
                         );
        native_sub_43273c(&
                          Method_System_Collections_Generic_Dictionary_KeyCollection_Enumerator_int__GameObject__get_Current___12da8c8
                         );
        native_sub_43273c(&
                          Method_System_Collections_Generic_List_Enumerator_int__get_Current___12da538
                         );
        native_sub_43273c(&
                          Method_System_Collections_Generic_Dictionary_KeyCollection_int__GameObject__GetEnumerator___12dbb58
                         );
        native_sub_43273c(&Method_System_Collections_Generic_List_int__Add___12dca88);
        native_sub_43273c(&Method_System_Collections_Generic_List_int__GetEnumerator___12dcaa8);
        native_sub_43273c(&Method_System_Collections_Generic_List_int___ctor___12dca80);
        native_sub_43273c(&System_Collections_Generic_List_int__TypeInfo_12d2aa0);
        native_sub_43273c(&UnityEngine_Object_TypeInfo_12d54e0);
        bRam0000000001346e4a = 1;
      }
      uStack_70 = 0;
      uStack_68 = 0;
      uStack_60 = 0;
      uStack_90 = 0;
      uStack_88 = 0;
      uStack_80 = 0;
      iStack_98 = 0;
      if (*(long *)(param_4 + 0x48) != 0) {
        uVar4 = native_System_Collections_Generic_Dictionary_int__GameObject___ContainsKey_c2084c
                          (*(long *)(param_4 + 0x48),iVar3,
                           _Method_System_Collections_Generic_Dictionary_int__GameObject__ContainsKey___12d90f8
                          );
        if ((uVar4 & 1) == 0) {
          native_CarTerrainController__GetTerrain_dd5a0c(param_4,iVar3);
        }
        if (*(long *)(param_4 + 0x48) != 0) {
          iVar1 = iVar3 + 1;
          uVar4 = native_System_Collections_Generic_Dictionary_int__GameObject___ContainsKey_c2084c
                            (*(long *)(param_4 + 0x48),iVar1,
                             _Method_System_Collections_Generic_Dictionary_int__GameObject__ContainsKey___12d90f8
                            );
          if ((uVar4 & 1) == 0) {
            native_CarTerrainController__GetTerrain_dd5a0c(param_4,iVar1);
          }
          if (*(long *)(param_4 + 0x48) != 0) {
            iVar2 = iVar3 + -1;
            uVar4 = native_System_Collections_Generic_Dictionary_int__GameObject___ContainsKey_c2084c
                              (*(long *)(param_4 + 0x48),iVar2,
                               _Method_System_Collections_Generic_Dictionary_int__GameObject__ContainsKey___12d90f8
                              );
            if ((uVar4 & 1) == 0) {
              native_CarTerrainController__GetTerrain_dd5a0c(param_4,iVar2);
            }
            lVar5 = native_sub_432808(_System_Collections_Generic_List_int__TypeInfo_12d2aa0);
            native_System_Collections_Generic_List_int____ctor_d38324
                      (lVar5,_Method_System_Collections_Generic_List_int___ctor___12dca80);
            if ((*(long *)(param_4 + 0x48) != 0) &&
               (lVar6 = native_System_Collections_Generic_Dictionary_int__GameObject___get_Keys_c2037c
                                  (*(long *)(param_4 + 0x48),
                                   _Method_System_Collections_Generic_Dictionary_int__GameObject__get_Keys___12d9110
                                  ), lVar6 != 0)) {
              native_System_Collections_Generic_Dictionary_KeyCollection_int__GameObject___GetEnumerator_5b2e14
                        (&uStack_b8,lVar6,
                         _Method_System_Collections_Generic_Dictionary_KeyCollection_int__GameObject__GetEnumerator___12dbb58
                        );
              uStack_60 = uStack_a8;
              uStack_68 = uStack_b0;
              uStack_70 = uStack_b8;
              while (uVar4 = native_System_Collections_Generic_Dictionary_KeyCollection_Enumerator_int__GameObject___MoveNext_7f1774
                                       (&uStack_70,
                                        _Method_System_Collections_Generic_Dictionary_KeyCollection_Enumerator_int__GameObject__MoveNext___12da8c0
                                       ), (uVar4 & 1) != 0) {
                if ((((int)uStack_60 != iVar2) && ((int)uStack_60 != iVar3)) &&
                   ((int)uStack_60 != iVar1)) {
                  if (lVar5 == 0) {
                    /* WARNING: Subroutine does not return */
                    native_sub_432810();
                  }
                  native_System_Collections_Generic_List_int___Add_d39078
                            (lVar5,uStack_60 & 0xffffffff,
                             _Method_System_Collections_Generic_List_int__Add___12dca88);
                }
              }
              uStack_a0 = 0xa7;
              iStack_98 = 1;
              native_System_Collections_Generic_Dictionary_KeyCollection_Enumerator_int__GameObject___Dispose_7f1770
                        (&uStack_70,
                         _Method_System_Collections_Generic_Dictionary_KeyCollection_Enumerator_int__GameObject__Dispose___12da8b8
                        );
              iStack_98 = 0;
              if (lVar5 != 0) {
                native_System_Collections_Generic_List_int___GetEnumerator_d3993c
                          (&uStack_b8,lVar5,
                           _Method_System_Collections_Generic_List_int__GetEnumerator___12dcaa8);
                uStack_80 = uStack_a8;
                uStack_88 = uStack_b0;
                uStack_90 = uStack_b8;
                while( true ) {
                  do {
                    uVar7 = native_System_Collections_Generic_List_Enumerator_int___MoveNext_7e8018
                                      (&uStack_90,
                                       _Method_System_Collections_Generic_List_Enumerator_int__MoveNext___12da530
                                      );
                    uVar4 = uStack_80;
                    if ((uVar7 & 1) == 0) {
                      uStack_a0 = 0x109;
                      iStack_98 = iStack_98 + 1;
                      native_System_Collections_Generic_List_Enumerator_int___Dispose_7e8014
                                (&uStack_90,
                                 _Method_System_Collections_Generic_List_Enumerator_int__Dispose___12da528
                                );
                      return;
                    }
                    if (*(long *)(param_4 + 0x48) == 0) {
                    /* WARNING: Subroutine does not return */
                      native_sub_432810();
                    }
                    uVar7 = native_System_Collections_Generic_Dictionary_int__GameObject___ContainsKey_c2084c
                                      (*(long *)(param_4 + 0x48),uStack_80 & 0xffffffff,
                                       _Method_System_Collections_Generic_Dictionary_int__GameObject__ContainsKey___12d90f8
                                      );
                  } while ((uVar7 & 1) == 0);
                  if (*(long *)(param_4 + 0x48) == 0) {
                    /* WARNING: Subroutine does not return */
                    native_sub_432810();
                  }
                  lVar5 = native_System_Collections_Generic_Dictionary_int__GameObject___get_Item_c20514
                                    (*(long *)(param_4 + 0x48),uVar4 & 0xffffffff,
                                     _Method_System_Collections_Generic_Dictionary_int__GameObject__get_Item___12d9108
                                    );
                  if (lVar5 == 0) break;
                  native_UnityEngine_GameObject__SetActive_8de698(lVar5,0,0);
                  if (((*(byte *)(_UnityEngine_Object_TypeInfo_12d54e0 + 0x133) >> 2 & 1) != 0) &&
                     (*(int *)(_UnityEngine_Object_TypeInfo_12d54e0 + 0xe0) == 0)) {
                    native_sub_4327ec();
                  }
                  native_UnityEngine_Object__Destroy_8ea574(lVar5,0);
                  if (*(long *)(param_4 + 0x48) == 0) {
                    /* WARNING: Subroutine does not return */
                    native_sub_432810();
                  }
                  native_System_Collections_Generic_Dictionary_int__GameObject___Remove_c21fb4
                            (*(long *)(param_4 + 0x48),uVar4 & 0xffffffff,
                             _Method_System_Collections_Generic_Dictionary_int__GameObject__Remove___12d9100
                            );
                }
                    /* WARNING: Subroutine does not return */
                native_sub_432810();
              }
            }
          }
        }
      }
                    /* WARNING: Subroutine does not return */
      native_sub_432810();
    }
  }
  return;
}



/* CarTerrainController$$LoadTerrain @ 0xdd5b90
 * void CarTerrainController__LoadTerrain (CarTerrainController_o* __this, int32_t nowiindex, const MethodInfo* method); */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* CarTerrainController$$LoadTerrain
   void CarTerrainController__LoadTerrain (CarTerrainController_o* __this, int32_t nowiindex, const
   MethodInfo* method); */

void native_CarTerrainController__LoadTerrain_dd5b90(long param_1,int param_2)

{
  int iVar1;
  int iVar2;
  ulong uVar3;
  long lVar4;
  long lVar5;
  ulong uVar6;
  undefined8 uStack_b8;
  undefined8 uStack_b0;
  ulong uStack_a8;
  undefined4 uStack_a0;
  int iStack_98;
  undefined8 uStack_90;
  undefined8 uStack_88;
  ulong uStack_80;
  undefined8 uStack_70;
  undefined8 uStack_68;
  ulong uStack_60;
  
  if ((bRam0000000001346e4a & 1) == 0) {
    native_sub_43273c(&
                      Method_System_Collections_Generic_Dictionary_int__GameObject__ContainsKey___12d90f8
                     );
    native_sub_43273c(&
                      Method_System_Collections_Generic_Dictionary_int__GameObject__Remove___12d9100
                     );
    native_sub_43273c(&
                      Method_System_Collections_Generic_Dictionary_int__GameObject__get_Item___12d9108
                     );
    native_sub_43273c(&
                      Method_System_Collections_Generic_Dictionary_int__GameObject__get_Keys___12d9110
                     );
    native_sub_43273c(&Method_System_Collections_Generic_List_Enumerator_int__Dispose___12da528);
    native_sub_43273c(&
                      Method_System_Collections_Generic_Dictionary_KeyCollection_Enumerator_int__GameObject__Dispose___12da8b8
                     );
    native_sub_43273c(&Method_System_Collections_Generic_List_Enumerator_int__MoveNext___12da530);
    native_sub_43273c(&
                      Method_System_Collections_Generic_Dictionary_KeyCollection_Enumerator_int__GameObject__MoveNext___12da8c0
                     );
    native_sub_43273c(&
                      Method_System_Collections_Generic_Dictionary_KeyCollection_Enumerator_int__GameObject__get_Current___12da8c8
                     );
    native_sub_43273c(&Method_System_Collections_Generic_List_Enumerator_int__get_Current___12da538)
    ;
    native_sub_43273c(&
                      Method_System_Collections_Generic_Dictionary_KeyCollection_int__GameObject__GetEnumerator___12dbb58
                     );
    native_sub_43273c(&Method_System_Collections_Generic_List_int__Add___12dca88);
    native_sub_43273c(&Method_System_Collections_Generic_List_int__GetEnumerator___12dcaa8);
    native_sub_43273c(&Method_System_Collections_Generic_List_int___ctor___12dca80);
    native_sub_43273c(&System_Collections_Generic_List_int__TypeInfo_12d2aa0);
    native_sub_43273c(&UnityEngine_Object_TypeInfo_12d54e0);
    bRam0000000001346e4a = 1;
  }
  uStack_70 = 0;
  uStack_68 = 0;
  uStack_60 = 0;
  uStack_90 = 0;
  uStack_88 = 0;
  uStack_80 = 0;
  iStack_98 = 0;
  if (*(long *)(param_1 + 0x48) != 0) {
    uVar3 = native_System_Collections_Generic_Dictionary_int__GameObject___ContainsKey_c2084c
                      (*(long *)(param_1 + 0x48),param_2,
                       _Method_System_Collections_Generic_Dictionary_int__GameObject__ContainsKey___12d90f8
                      );
    if ((uVar3 & 1) == 0) {
      native_CarTerrainController__GetTerrain_dd5a0c(param_1,param_2);
    }
    if (*(long *)(param_1 + 0x48) != 0) {
      iVar1 = param_2 + 1;
      uVar3 = native_System_Collections_Generic_Dictionary_int__GameObject___ContainsKey_c2084c
                        (*(long *)(param_1 + 0x48),iVar1,
                         _Method_System_Collections_Generic_Dictionary_int__GameObject__ContainsKey___12d90f8
                        );
      if ((uVar3 & 1) == 0) {
        native_CarTerrainController__GetTerrain_dd5a0c(param_1,iVar1);
      }
      if (*(long *)(param_1 + 0x48) != 0) {
        iVar2 = param_2 + -1;
        uVar3 = native_System_Collections_Generic_Dictionary_int__GameObject___ContainsKey_c2084c
                          (*(long *)(param_1 + 0x48),iVar2,
                           _Method_System_Collections_Generic_Dictionary_int__GameObject__ContainsKey___12d90f8
                          );
        if ((uVar3 & 1) == 0) {
          native_CarTerrainController__GetTerrain_dd5a0c(param_1,iVar2);
        }
        lVar4 = native_sub_432808(_System_Collections_Generic_List_int__TypeInfo_12d2aa0);
        native_System_Collections_Generic_List_int____ctor_d38324
                  (lVar4,_Method_System_Collections_Generic_List_int___ctor___12dca80);
        if ((*(long *)(param_1 + 0x48) != 0) &&
           (lVar5 = native_System_Collections_Generic_Dictionary_int__GameObject___get_Keys_c2037c
                              (*(long *)(param_1 + 0x48),
                               _Method_System_Collections_Generic_Dictionary_int__GameObject__get_Keys___12d9110
                              ), lVar5 != 0)) {
          native_System_Collections_Generic_Dictionary_KeyCollection_int__GameObject___GetEnumerator_5b2e14
                    (&uStack_b8,lVar5,
                     _Method_System_Collections_Generic_Dictionary_KeyCollection_int__GameObject__GetEnumerator___12dbb58
                    );
          uStack_60 = uStack_a8;
          uStack_68 = uStack_b0;
          uStack_70 = uStack_b8;
          while (uVar3 = native_System_Collections_Generic_Dictionary_KeyCollection_Enumerator_int__GameObject___MoveNext_7f1774
                                   (&uStack_70,
                                    _Method_System_Collections_Generic_Dictionary_KeyCollection_Enumerator_int__GameObject__MoveNext___12da8c0
                                   ), (uVar3 & 1) != 0) {
            if ((((int)uStack_60 != iVar2) && ((int)uStack_60 != param_2)) &&
               ((int)uStack_60 != iVar1)) {
              if (lVar4 == 0) {
                    /* WARNING: Subroutine does not return */
                native_sub_432810();
              }
              native_System_Collections_Generic_List_int___Add_d39078
                        (lVar4,uStack_60 & 0xffffffff,
                         _Method_System_Collections_Generic_List_int__Add___12dca88);
            }
          }
          uStack_a0 = 0xa7;
          iStack_98 = 1;
          native_System_Collections_Generic_Dictionary_KeyCollection_Enumerator_int__GameObject___Dispose_7f1770
                    (&uStack_70,
                     _Method_System_Collections_Generic_Dictionary_KeyCollection_Enumerator_int__GameObject__Dispose___12da8b8
                    );
          iStack_98 = 0;
          if (lVar4 != 0) {
            native_System_Collections_Generic_List_int___GetEnumerator_d3993c
                      (&uStack_b8,lVar4,
                       _Method_System_Collections_Generic_List_int__GetEnumerator___12dcaa8);
            uStack_80 = uStack_a8;
            uStack_88 = uStack_b0;
            uStack_90 = uStack_b8;
            while( true ) {
              do {
                uVar6 = native_System_Collections_Generic_List_Enumerator_int___MoveNext_7e8018
                                  (&uStack_90,
                                   _Method_System_Collections_Generic_List_Enumerator_int__MoveNext___12da530
                                  );
                uVar3 = uStack_80;
                if ((uVar6 & 1) == 0) {
                  uStack_a0 = 0x109;
                  iStack_98 = iStack_98 + 1;
                  native_System_Collections_Generic_List_Enumerator_int___Dispose_7e8014
                            (&uStack_90,
                             _Method_System_Collections_Generic_List_Enumerator_int__Dispose___12da528
                            );
                  return;
                }
                if (*(long *)(param_1 + 0x48) == 0) {
                    /* WARNING: Subroutine does not return */
                  native_sub_432810();
                }
                uVar6 = native_System_Collections_Generic_Dictionary_int__GameObject___ContainsKey_c2084c
                                  (*(long *)(param_1 + 0x48),uStack_80 & 0xffffffff,
                                   _Method_System_Collections_Generic_Dictionary_int__GameObject__ContainsKey___12d90f8
                                  );
              } while ((uVar6 & 1) == 0);
              if (*(long *)(param_1 + 0x48) == 0) {
                    /* WARNING: Subroutine does not return */
                native_sub_432810();
              }
              lVar4 = native_System_Collections_Generic_Dictionary_int__GameObject___get_Item_c20514
                                (*(long *)(param_1 + 0x48),uVar3 & 0xffffffff,
                                 _Method_System_Collections_Generic_Dictionary_int__GameObject__get_Item___12d9108
                                );
              if (lVar4 == 0) break;
              native_UnityEngine_GameObject__SetActive_8de698(lVar4,0,0);
              if (((*(byte *)(_UnityEngine_Object_TypeInfo_12d54e0 + 0x133) >> 2 & 1) != 0) &&
                 (*(int *)(_UnityEngine_Object_TypeInfo_12d54e0 + 0xe0) == 0)) {
                native_sub_4327ec();
              }
              native_UnityEngine_Object__Destroy_8ea574(lVar4,0);
              if (*(long *)(param_1 + 0x48) == 0) {
                    /* WARNING: Subroutine does not return */
                native_sub_432810();
              }
              native_System_Collections_Generic_Dictionary_int__GameObject___Remove_c21fb4
                        (*(long *)(param_1 + 0x48),uVar3 & 0xffffffff,
                         _Method_System_Collections_Generic_Dictionary_int__GameObject__Remove___12d9100
                        );
            }
                    /* WARNING: Subroutine does not return */
            native_sub_432810();
          }
        }
      }
    }
  }
                    /* WARNING: Subroutine does not return */
  native_sub_432810();
}



/* CarTerrainController$$GetTerrain @ 0xdd5a0c
 * void CarTerrainController__GetTerrain (CarTerrainController_o* __this, int32_t getindex, const MethodInfo* method); */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* CarTerrainController$$GetTerrain
   void CarTerrainController__GetTerrain (CarTerrainController_o* __this, int32_t getindex, const
   MethodInfo* method); */

void native_CarTerrainController__GetTerrain_dd5a0c(long param_1,int param_2)

{
  long lVar1;
  long lVar2;
  
  if ((bRam0000000001346e4b & 1) == 0) {
    native_sub_43273c(&Method_System_Collections_Generic_Dictionary_int__GameObject__Add___12d90f0);
    bRam0000000001346e4b = 1;
  }
  lVar1 = native_CarTerrainController__CreateTerrain_dd5fe8(param_1,param_2);
  if ((lVar1 != 0) &&
     (lVar2 = native_UnityEngine_GameObject__get_transform_8de5c8(lVar1,0), lVar2 != 0)) {
    native_UnityEngine_Transform__set_position_77174c(0,0,(float)param_2 * 56.0,lVar2,0);
    native_UnityEngine_GameObject__SetActive_8de698(lVar1,1,0);
    if (*(long *)(param_1 + 0x48) != 0) {
      if (*(long *)(param_1 + 0x48) != 0) {
                    /* WARNING: Could not recover jumptable at 0x00c205f0. Too many branches */
                    /* WARNING: Treating indirect jump as call */
        (*(code *)**(undefined8 **)
                    (*(long *)(*(long *)(
                                        _Method_System_Collections_Generic_Dictionary_int__GameObject__Add___12d90f0
                                        + 0x18) + 0xc0) + 0x48))();
        return;
      }
                    /* WARNING: Subroutine does not return */
      native_sub_432810(0,param_2,lVar1);
    }
  }
                    /* WARNING: Subroutine does not return */
  native_sub_432810();
}



/* CarTerrainController$$CreateTerrain @ 0xdd5fe8
 * UnityEngine_GameObject_o* CarTerrainController__CreateTerrain (CarTerrainController_o* __this, int32_t iindex, const MethodInfo* method); */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* CarTerrainController$$CreateTerrain
   UnityEngine_GameObject_o* CarTerrainController__CreateTerrain (CarTerrainController_o* __this,
   int32_t iindex, const MethodInfo* method); */

undefined8 native_CarTerrainController__CreateTerrain_dd5fe8(long param_1,int param_2)

{
  int iVar1;
  byte bVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  
  if ((bRam0000000001346e4c & 1) == 0) {
    native_sub_43273c(&Method_UnityEngine_Object_Instantiate_GameObject____12e5a68);
    native_sub_43273c(&UnityEngine_Object_TypeInfo_12d54e0);
    bRam0000000001346e4c = 1;
  }
  iVar1 = param_2 % 4 + 3;
  if (-1 < param_2) {
    iVar1 = param_2 % 4;
  }
  switch(iVar1) {
  case 0:
    uVar4 = *(undefined8 *)(param_1 + 0x20);
    uVar3 = *(undefined8 *)(param_1 + 0x28);
    bVar2 = *(byte *)(_UnityEngine_Object_TypeInfo_12d54e0 + 0x133);
    goto joined_r0x00dd60c4;
  case 1:
    uVar3 = *(undefined8 *)(param_1 + 0x30);
    break;
  case 2:
    uVar3 = *(undefined8 *)(param_1 + 0x38);
    break;
  case 3:
    uVar3 = *(undefined8 *)(param_1 + 0x40);
    break;
  default:
    return 0;
  }
  bVar2 = *(byte *)(_UnityEngine_Object_TypeInfo_12d54e0 + 0x133);
  uVar4 = *(undefined8 *)(param_1 + 0x20);
joined_r0x00dd60c4:
  if (((bVar2 >> 2 & 1) != 0) && (*(int *)(_UnityEngine_Object_TypeInfo_12d54e0 + 0xe0) == 0)) {
    native_sub_4327ec();
  }
  uVar3 = native_UnityEngine_Object__Instantiate_GameObject__4a6564
                    (uVar3,uVar4,_Method_UnityEngine_Object_Instantiate_GameObject____12e5a68);
  return uVar3;
}



/* CarTerrainController$$.ctor @ 0xdd60fc
 * void CarTerrainController___ctor (CarTerrainController_o* __this, const MethodInfo* method); */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* CarTerrainController$$.ctor
   void CarTerrainController___ctor (CarTerrainController_o* __this, const MethodInfo* method); */

undefined1  [16] native_CarTerrainController___ctor_dd60fc(ulong param_1)

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


