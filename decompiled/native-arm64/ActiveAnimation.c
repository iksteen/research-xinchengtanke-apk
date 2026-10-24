/* ARM64 IL2CPP native pseudocode from Ghidra.
 * Recovered implementation, not original C# source.
 * Function boundaries follow the IL2CPP method address table. */


/* ActiveAnimation$$get_playbackTime @ 0x560484
 * float ActiveAnimation__get_playbackTime (ActiveAnimation_o* __this, const MethodInfo* method); */

/* ActiveAnimation$$get_playbackTime
   float ActiveAnimation__get_playbackTime (ActiveAnimation_o* __this, const MethodInfo* method); */

void native_ActiveAnimation__get_playbackTime_560484(long param_1)

{
  undefined8 uStack_68;
  undefined8 uStack_60;
  undefined8 uStack_58;
  undefined8 uStack_50;
  undefined4 uStack_48;
  undefined8 uStack_40;
  undefined8 uStack_38;
  undefined8 uStack_30;
  undefined8 uStack_28;
  undefined4 uStack_20;
  
  uStack_20 = 0;
  uStack_38 = 0;
  uStack_40 = 0;
  uStack_28 = 0;
  uStack_30 = 0;
  if (*(long *)(param_1 + 0x48) != 0) {
    native_UnityEngine_Animator__GetCurrentAnimatorStateInfo_db2d18
              (&uStack_68,*(long *)(param_1 + 0x48),0,0);
    uStack_20 = uStack_48;
    uStack_38 = uStack_60;
    uStack_40 = uStack_68;
    uStack_28 = uStack_50;
    uStack_30 = uStack_58;
    native_UnityEngine_AnimatorStateInfo__get_normalizedTime_db345c(&uStack_40,0);
    native_UnityEngine_Mathf__Clamp01_8d9d9c(0);
    return;
  }
                    /* WARNING: Subroutine does not return */
  native_sub_432810();
}



/* ActiveAnimation$$get_isPlaying @ 0x5604ec
 * bool ActiveAnimation__get_isPlaying (ActiveAnimation_o* __this, const MethodInfo* method); */

/* WARNING: Removing unreachable block (ram,0x00560890) */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* ActiveAnimation$$get_isPlaying
   bool ActiveAnimation__get_isPlaying (ActiveAnimation_o* __this, const MethodInfo* method); */

undefined4 native_ActiveAnimation__get_isPlaying_5604ec(long param_1)

{
  int iVar1;
  ulong uVar2;
  long *plVar3;
  undefined8 *puVar4;
  long *plVar5;
  long lVar6;
  int *piVar7;
  undefined8 uVar8;
  undefined4 uVar9;
  float fVar10;
  float fVar11;
  int iStack_68;
  
  if ((bRam000000000133ea16 & 1) == 0) {
    native_sub_43273c(&UnityEngine_AnimationState_TypeInfo_12d37a8);
    native_sub_43273c(&System_IDisposable_TypeInfo_12d4b00);
    native_sub_43273c(&System_Collections_IEnumerator_TypeInfo_12d4b80);
    native_sub_43273c(&UnityEngine_Object_TypeInfo_12d54e0);
    bRam000000000133ea16 = 1;
  }
  uVar8 = *(undefined8 *)(param_1 + 0x30);
  if (((*(byte *)(_UnityEngine_Object_TypeInfo_12d54e0 + 0x133) >> 2 & 1) != 0) &&
     (*(int *)(_UnityEngine_Object_TypeInfo_12d54e0 + 0xe0) == 0)) {
    native_sub_4327ec();
  }
  uVar2 = native_UnityEngine_Object__op_Equality_8e9a3c(uVar8,0,0);
  if ((uVar2 & 1) == 0) {
    if (*(long *)(param_1 + 0x30) == 0) {
LAB_00560888:
                    /* WARNING: Subroutine does not return */
      native_sub_432810();
    }
    plVar3 = (long *)native_UnityEngine_Animation__GetEnumerator_db18d0(*(long *)(param_1 + 0x30),0)
    ;
    if (plVar3 == (long *)0x0) {
                    /* WARNING: Subroutine does not return */
      native_sub_432810();
    }
LAB_00560608:
    do {
      do {
        lVar6 = *plVar3;
        if ((ulong)*(ushort *)(lVar6 + 0x12a) != 0) {
          uVar2 = 0;
          piVar7 = (int *)(*(long *)(lVar6 + 0xb0) + 8);
          do {
            if (*(long *)(piVar7 + -2) == _System_Collections_IEnumerator_TypeInfo_12d4b80) {
              puVar4 = (undefined8 *)(lVar6 + (long)*piVar7 * 0x10 + 0x138);
              goto LAB_0056065c;
            }
            uVar2 = uVar2 + 1;
            piVar7 = piVar7 + 4;
          } while (uVar2 < *(ushort *)(lVar6 + 0x12a));
        }
        puVar4 = (undefined8 *)
                 native_sub_3c9b34(plVar3,_System_Collections_IEnumerator_TypeInfo_12d4b80,0);
LAB_0056065c:
        uVar2 = (*(code *)*puVar4)(plVar3,puVar4[1]);
        if ((uVar2 & 1) == 0) {
          uVar9 = 0;
          iStack_68 = 200;
          goto LAB_00560794;
        }
        lVar6 = *plVar3;
        if ((ulong)*(ushort *)(lVar6 + 0x12a) != 0) {
          uVar2 = 0;
          piVar7 = (int *)(*(long *)(lVar6 + 0xb0) + 8);
          do {
            if (*(long *)(piVar7 + -2) == _System_Collections_IEnumerator_TypeInfo_12d4b80) {
              puVar4 = (undefined8 *)(lVar6 + (long)(*piVar7 + 1) * 0x10 + 0x138);
              goto LAB_005606c4;
            }
            uVar2 = uVar2 + 1;
            piVar7 = piVar7 + 4;
          } while (uVar2 < *(ushort *)(lVar6 + 0x12a));
        }
        puVar4 = (undefined8 *)
                 native_sub_3c9b34(plVar3,_System_Collections_IEnumerator_TypeInfo_12d4b80,1);
LAB_005606c4:
        plVar5 = (long *)(*(code *)*puVar4)(plVar3,puVar4[1]);
        if (plVar5 == (long *)0x0) {
                    /* WARNING: Subroutine does not return */
          native_sub_432810();
        }
        if (*plVar5 != _UnityEngine_AnimationState_TypeInfo_12d37a8) {
          native_sub_432b04(plVar5);
          goto LAB_00560888;
        }
        lVar6 = *(long *)(param_1 + 0x30);
        uVar8 = native_UnityEngine_AnimationState__get_name_db2b28(plVar5,0);
        if (lVar6 == 0) {
                    /* WARNING: Subroutine does not return */
          native_sub_432810(uVar8,uVar8);
        }
        uVar2 = native_UnityEngine_Animation__IsPlaying_db16f0(lVar6,uVar8,0);
      } while ((uVar2 & 1) == 0);
      if (*(int *)(param_1 + 0x38) == -1) {
        fVar10 = (float)native_UnityEngine_AnimationState__get_time_db29c8(plVar5,0);
        if (0.0 < fVar10) break;
        goto LAB_00560608;
      }
      if (*(int *)(param_1 + 0x38) != 1) break;
      fVar10 = (float)native_UnityEngine_AnimationState__get_time_db29c8(plVar5,0);
      fVar11 = (float)native_UnityEngine_AnimationState__get_length_db2ae8(plVar5,0);
    } while (fVar11 <= fVar10);
    iStack_68 = 0xca;
    uVar9 = 1;
LAB_00560794:
    plVar3 = (long *)native_sub_4327f8(plVar3,_System_IDisposable_TypeInfo_12d4b00);
    if (plVar3 != (long *)0x0) {
      lVar6 = *plVar3;
      if ((ulong)*(ushort *)(lVar6 + 0x12a) != 0) {
        uVar2 = 0;
        piVar7 = (int *)(*(long *)(lVar6 + 0xb0) + 8);
        do {
          if (*(long *)(piVar7 + -2) == _System_IDisposable_TypeInfo_12d4b00) {
            puVar4 = (undefined8 *)(lVar6 + (long)*piVar7 * 0x10 + 0x138);
            goto LAB_00560804;
          }
          uVar2 = uVar2 + 1;
          piVar7 = piVar7 + 4;
        } while (uVar2 < *(ushort *)(lVar6 + 0x12a));
      }
      puVar4 = (undefined8 *)native_sub_3c9b34(plVar3,_System_IDisposable_TypeInfo_12d4b00,0);
LAB_00560804:
      (*(code *)*puVar4)(plVar3,puVar4[1]);
    }
    if (iStack_68 == 200) {
      return 0;
    }
    if (iStack_68 == 0xca) {
      return uVar9;
    }
  }
  else {
    uVar8 = *(undefined8 *)(param_1 + 0x48);
    if (((*(byte *)(_UnityEngine_Object_TypeInfo_12d54e0 + 0x133) >> 2 & 1) != 0) &&
       (*(int *)(_UnityEngine_Object_TypeInfo_12d54e0 + 0xe0) == 0)) {
      native_sub_4327ec();
    }
    uVar2 = native_UnityEngine_Object__op_Inequality_8d76fc(uVar8,0,0);
    if ((uVar2 & 1) != 0) {
      iVar1 = *(int *)(param_1 + 0x38);
      fVar10 = (float)native_ActiveAnimation__get_playbackTime_560484(param_1);
      if (iVar1 == -1) {
        if (fVar10 != 0.0) {
          return 1;
        }
      }
      else if (fVar10 != 1.0) {
        return 1;
      }
    }
  }
  return 0;
}



/* ActiveAnimation$$Finish @ 0x5608e8
 * void ActiveAnimation__Finish (ActiveAnimation_o* __this, const MethodInfo* method); */

/* WARNING: Removing unreachable block (ram,0x00560c20) */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* ActiveAnimation$$Finish
   void ActiveAnimation__Finish (ActiveAnimation_o* __this, const MethodInfo* method); */

void native_ActiveAnimation__Finish_5608e8(long param_1)

{
  ulong uVar1;
  long *plVar2;
  undefined8 *puVar3;
  long *plVar4;
  long lVar5;
  int *piVar6;
  undefined8 uVar7;
  undefined4 uVar8;
  
  if ((bRam000000000133ea17 & 1) == 0) {
    native_sub_43273c(&UnityEngine_AnimationState_TypeInfo_12d37a8);
    native_sub_43273c(&System_IDisposable_TypeInfo_12d4b00);
    native_sub_43273c(&System_Collections_IEnumerator_TypeInfo_12d4b80);
    native_sub_43273c(&UnityEngine_Object_TypeInfo_12d54e0);
    bRam000000000133ea17 = 1;
  }
  uVar7 = *(undefined8 *)(param_1 + 0x30);
  if (((*(byte *)(_UnityEngine_Object_TypeInfo_12d54e0 + 0x133) >> 2 & 1) != 0) &&
     (*(int *)(_UnityEngine_Object_TypeInfo_12d54e0 + 0xe0) == 0)) {
    native_sub_4327ec();
  }
  uVar1 = native_UnityEngine_Object__op_Inequality_8d76fc(uVar7,0,0);
  if ((uVar1 & 1) == 0) {
    uVar7 = *(undefined8 *)(param_1 + 0x48);
    if (((*(byte *)(_UnityEngine_Object_TypeInfo_12d54e0 + 0x133) >> 2 & 1) != 0) &&
       (*(int *)(_UnityEngine_Object_TypeInfo_12d54e0 + 0xe0) == 0)) {
      native_sub_4327ec();
    }
    uVar1 = native_UnityEngine_Object__op_Inequality_8d76fc(uVar7,0,0);
    if ((uVar1 & 1) != 0) {
      if (*(long *)(param_1 + 0x48) == 0) goto LAB_00560c18;
      uVar8 = 0x3f800000;
      if (*(int *)(param_1 + 0x38) != 1) {
        uVar8 = 0;
      }
      native_UnityEngine_Animator__Play_db2da4
                (uVar8,*(long *)(param_1 + 0x48),*(undefined8 *)(param_1 + 0x50),0,0);
    }
    return;
  }
  if (*(long *)(param_1 + 0x30) != 0) {
    plVar2 = (long *)native_UnityEngine_Animation__GetEnumerator_db18d0(*(long *)(param_1 + 0x30),0)
    ;
    if (plVar2 == (long *)0x0) {
                    /* WARNING: Subroutine does not return */
      native_sub_432810();
    }
    do {
      lVar5 = *plVar2;
      if ((ulong)*(ushort *)(lVar5 + 0x12a) != 0) {
        uVar1 = 0;
        piVar6 = (int *)(*(long *)(lVar5 + 0xb0) + 8);
        do {
          if (*(long *)(piVar6 + -2) == _System_Collections_IEnumerator_TypeInfo_12d4b80) {
            puVar3 = (undefined8 *)(lVar5 + (long)*piVar6 * 0x10 + 0x138);
            goto LAB_005609fc;
          }
          uVar1 = uVar1 + 1;
          piVar6 = piVar6 + 4;
        } while (uVar1 < *(ushort *)(lVar5 + 0x12a));
      }
      puVar3 = (undefined8 *)
               native_sub_3c9b34(plVar2,_System_Collections_IEnumerator_TypeInfo_12d4b80,0);
LAB_005609fc:
      uVar1 = (*(code *)*puVar3)(plVar2,puVar3[1]);
      if ((uVar1 & 1) == 0) {
        plVar2 = (long *)native_sub_4327f8(plVar2,_System_IDisposable_TypeInfo_12d4b00);
        if (plVar2 == (long *)0x0) goto LAB_00560bc4;
        lVar5 = *plVar2;
        if ((ulong)*(ushort *)(lVar5 + 0x12a) == 0) goto LAB_00560b9c;
        uVar1 = 0;
        piVar6 = (int *)(*(long *)(lVar5 + 0xb0) + 8);
        goto LAB_00560b80;
      }
      lVar5 = *plVar2;
      if ((ulong)*(ushort *)(lVar5 + 0x12a) != 0) {
        uVar1 = 0;
        piVar6 = (int *)(*(long *)(lVar5 + 0xb0) + 8);
        do {
          if (*(long *)(piVar6 + -2) == _System_Collections_IEnumerator_TypeInfo_12d4b80) {
            puVar3 = (undefined8 *)(lVar5 + (long)(*piVar6 + 1) * 0x10 + 0x138);
            goto LAB_00560a64;
          }
          uVar1 = uVar1 + 1;
          piVar6 = piVar6 + 4;
        } while (uVar1 < *(ushort *)(lVar5 + 0x12a));
      }
      puVar3 = (undefined8 *)
               native_sub_3c9b34(plVar2,_System_Collections_IEnumerator_TypeInfo_12d4b80,1);
LAB_00560a64:
      plVar4 = (long *)(*(code *)*puVar3)(plVar2,puVar3[1]);
      if ((plVar4 != (long *)0x0) && (*plVar4 != _UnityEngine_AnimationState_TypeInfo_12d37a8)) {
        native_sub_432b04(plVar4);
LAB_00560c10:
                    /* WARNING: Subroutine does not return */
        native_sub_432810();
      }
      if (*(int *)(param_1 + 0x38) == -1) {
        if (plVar4 == (long *)0x0) goto LAB_00560c10;
        native_UnityEngine_AnimationState__set_time_db2a08(0,plVar4,0);
      }
      else if (*(int *)(param_1 + 0x38) == 1) {
        if (plVar4 == (long *)0x0) {
                    /* WARNING: Subroutine does not return */
          native_sub_432810();
        }
        native_UnityEngine_AnimationState__get_length_db2ae8(plVar4,0);
        native_UnityEngine_AnimationState__set_time_db2a08(plVar4,0);
      }
    } while( true );
  }
  goto LAB_00560c18;
  while( true ) {
    uVar1 = uVar1 + 1;
    piVar6 = piVar6 + 4;
    if (*(ushort *)(lVar5 + 0x12a) <= uVar1) break;
LAB_00560b80:
    if (*(long *)(piVar6 + -2) == _System_IDisposable_TypeInfo_12d4b00) {
      puVar3 = (undefined8 *)(lVar5 + (long)*piVar6 * 0x10 + 0x138);
      goto LAB_00560bb8;
    }
  }
LAB_00560b9c:
  puVar3 = (undefined8 *)native_sub_3c9b34(plVar2,_System_IDisposable_TypeInfo_12d4b00,0);
LAB_00560bb8:
  (*(code *)*puVar3)(plVar2,puVar3[1]);
LAB_00560bc4:
  if (*(long *)(param_1 + 0x30) != 0) {
    native_UnityEngine_Animation__Sample_db1670(*(long *)(param_1 + 0x30),0);
    return;
  }
LAB_00560c18:
                    /* WARNING: Subroutine does not return */
  native_sub_432810();
}



/* ActiveAnimation$$Reset @ 0x560c68
 * void ActiveAnimation__Reset (ActiveAnimation_o* __this, const MethodInfo* method); */

/* WARNING: Removing unreachable block (ram,0x00560f98) */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* ActiveAnimation$$Reset
   void ActiveAnimation__Reset (ActiveAnimation_o* __this, const MethodInfo* method); */

void native_ActiveAnimation__Reset_560c68(long param_1)

{
  ulong uVar1;
  long *plVar2;
  undefined8 *puVar3;
  long *plVar4;
  long lVar5;
  int *piVar6;
  undefined8 uVar7;
  undefined4 uVar8;
  
  if ((bRam000000000133ea18 & 1) == 0) {
    native_sub_43273c(&UnityEngine_AnimationState_TypeInfo_12d37a8);
    native_sub_43273c(&System_IDisposable_TypeInfo_12d4b00);
    native_sub_43273c(&System_Collections_IEnumerator_TypeInfo_12d4b80);
    native_sub_43273c(&UnityEngine_Object_TypeInfo_12d54e0);
    bRam000000000133ea18 = 1;
  }
  uVar7 = *(undefined8 *)(param_1 + 0x30);
  if (((*(byte *)(_UnityEngine_Object_TypeInfo_12d54e0 + 0x133) >> 2 & 1) != 0) &&
     (*(int *)(_UnityEngine_Object_TypeInfo_12d54e0 + 0xe0) == 0)) {
    native_sub_4327ec();
  }
  uVar1 = native_UnityEngine_Object__op_Inequality_8d76fc(uVar7,0,0);
  if ((uVar1 & 1) == 0) {
    uVar7 = *(undefined8 *)(param_1 + 0x48);
    if (((*(byte *)(_UnityEngine_Object_TypeInfo_12d54e0 + 0x133) >> 2 & 1) != 0) &&
       (*(int *)(_UnityEngine_Object_TypeInfo_12d54e0 + 0xe0) == 0)) {
      native_sub_4327ec();
    }
    uVar1 = native_UnityEngine_Object__op_Inequality_8d76fc(uVar7,0,0);
    if ((uVar1 & 1) == 0) {
      return;
    }
    if (*(long *)(param_1 + 0x48) != 0) {
      uVar8 = 0x3f800000;
      if (*(int *)(param_1 + 0x38) != -1) {
        uVar8 = 0;
      }
      native_UnityEngine_Animator__Play_db2da4
                (uVar8,*(long *)(param_1 + 0x48),*(undefined8 *)(param_1 + 0x50),0,0);
      return;
    }
  }
  else if (*(long *)(param_1 + 0x30) != 0) {
    plVar2 = (long *)native_UnityEngine_Animation__GetEnumerator_db18d0(*(long *)(param_1 + 0x30),0)
    ;
    if (plVar2 == (long *)0x0) {
                    /* WARNING: Subroutine does not return */
      native_sub_432810();
    }
    do {
      lVar5 = *plVar2;
      if ((ulong)*(ushort *)(lVar5 + 0x12a) != 0) {
        uVar1 = 0;
        piVar6 = (int *)(*(long *)(lVar5 + 0xb0) + 8);
        do {
          if (*(long *)(piVar6 + -2) == _System_Collections_IEnumerator_TypeInfo_12d4b80) {
            puVar3 = (undefined8 *)(lVar5 + (long)*piVar6 * 0x10 + 0x138);
            goto LAB_00560d80;
          }
          uVar1 = uVar1 + 1;
          piVar6 = piVar6 + 4;
        } while (uVar1 < *(ushort *)(lVar5 + 0x12a));
      }
      puVar3 = (undefined8 *)
               native_sub_3c9b34(plVar2,_System_Collections_IEnumerator_TypeInfo_12d4b80,0);
LAB_00560d80:
      uVar1 = (*(code *)*puVar3)(plVar2,puVar3[1]);
      if ((uVar1 & 1) == 0) {
        plVar2 = (long *)native_sub_4327f8(plVar2,_System_IDisposable_TypeInfo_12d4b00);
        if (plVar2 == (long *)0x0) {
          return;
        }
        lVar5 = *plVar2;
        if ((ulong)*(ushort *)(lVar5 + 0x12a) == 0) goto LAB_00560ec0;
        uVar1 = 0;
        piVar6 = (int *)(*(long *)(lVar5 + 0xb0) + 8);
        goto LAB_00560ea4;
      }
      lVar5 = *plVar2;
      if ((ulong)*(ushort *)(lVar5 + 0x12a) != 0) {
        uVar1 = 0;
        piVar6 = (int *)(*(long *)(lVar5 + 0xb0) + 8);
        do {
          if (*(long *)(piVar6 + -2) == _System_Collections_IEnumerator_TypeInfo_12d4b80) {
            puVar3 = (undefined8 *)(lVar5 + (long)(*piVar6 + 1) * 0x10 + 0x138);
            goto LAB_00560de8;
          }
          uVar1 = uVar1 + 1;
          piVar6 = piVar6 + 4;
        } while (uVar1 < *(ushort *)(lVar5 + 0x12a));
      }
      puVar3 = (undefined8 *)
               native_sub_3c9b34(plVar2,_System_Collections_IEnumerator_TypeInfo_12d4b80,1);
LAB_00560de8:
      plVar4 = (long *)(*(code *)*puVar3)(plVar2,puVar3[1]);
      if ((plVar4 != (long *)0x0) && (*plVar4 != _UnityEngine_AnimationState_TypeInfo_12d37a8)) {
        native_sub_432b04(plVar4);
LAB_00560f88:
                    /* WARNING: Subroutine does not return */
        native_sub_432810();
      }
      if (*(int *)(param_1 + 0x38) == -1) {
        if (plVar4 == (long *)0x0) {
                    /* WARNING: Subroutine does not return */
          native_sub_432810();
        }
        native_UnityEngine_AnimationState__get_length_db2ae8(plVar4,0);
        native_UnityEngine_AnimationState__set_time_db2a08(plVar4,0);
      }
      else if (*(int *)(param_1 + 0x38) == 1) {
        if (plVar4 == (long *)0x0) goto LAB_00560f88;
        native_UnityEngine_AnimationState__set_time_db2a08(0,plVar4,0);
      }
    } while( true );
  }
                    /* WARNING: Subroutine does not return */
  native_sub_432810();
  while( true ) {
    uVar1 = uVar1 + 1;
    piVar6 = piVar6 + 4;
    if (*(ushort *)(lVar5 + 0x12a) <= uVar1) break;
LAB_00560ea4:
    if (*(long *)(piVar6 + -2) == _System_IDisposable_TypeInfo_12d4b00) {
      puVar3 = (undefined8 *)(lVar5 + (long)*piVar6 * 0x10 + 0x138);
      goto LAB_00560edc;
    }
  }
LAB_00560ec0:
  puVar3 = (undefined8 *)native_sub_3c9b34(plVar2,_System_IDisposable_TypeInfo_12d4b00,0);
LAB_00560edc:
  (*(code *)*puVar3)(plVar2,puVar3[1]);
  return;
}



/* ActiveAnimation$$Start @ 0x560fe0
 * void ActiveAnimation__Start (ActiveAnimation_o* __this, const MethodInfo* method); */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* ActiveAnimation$$Start
   void ActiveAnimation__Start (ActiveAnimation_o* __this, const MethodInfo* method); */

void native_ActiveAnimation__Start_560fe0(long param_1)

{
  ulong *puVar1;
  char cVar2;
  bool bVar3;
  ulong uVar4;
  undefined8 *puVar5;
  undefined8 uVar6;
  
  if ((bRam000000000133ea19 & 1) == 0) {
    native_sub_43273c(&EventDelegate_TypeInfo_12d4590);
    native_sub_43273c(&UnityEngine_Object_TypeInfo_12d54e0);
    bRam000000000133ea19 = 1;
  }
  uVar6 = *(undefined8 *)(param_1 + 0x20);
  if (((*(byte *)(_UnityEngine_Object_TypeInfo_12d54e0 + 0x133) >> 2 & 1) != 0) &&
     (*(int *)(_UnityEngine_Object_TypeInfo_12d54e0 + 0xe0) == 0)) {
    native_sub_4327ec();
  }
  uVar4 = native_UnityEngine_Object__op_Inequality_8d76fc(uVar6,0,0);
  if ((uVar4 & 1) != 0) {
    uVar6 = *(undefined8 *)(param_1 + 0x18);
    if (((*(byte *)(_EventDelegate_TypeInfo_12d4590 + 0x133) >> 2 & 1) != 0) &&
       (*(int *)(_EventDelegate_TypeInfo_12d4590 + 0xe0) == 0)) {
      native_sub_4327ec();
    }
    uVar4 = native_EventDelegate__IsValid_deef08(uVar6,0);
    if ((uVar4 & 1) != 0) {
      *(undefined8 *)(param_1 + 0x20) = 0;
      native_sub_4326e0((undefined8 *)(param_1 + 0x20),0);
      puVar5 = (undefined8 *)(param_1 + 0x28);
      *puVar5 = 0;
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
  }
  return;
}



/* ActiveAnimation$$Update @ 0x5610cc
 * void ActiveAnimation__Update (ActiveAnimation_o* __this, const MethodInfo* method); */

/* WARNING: Removing unreachable block (ram,0x0056166c) */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* ActiveAnimation$$Update
   void ActiveAnimation__Update (ActiveAnimation_o* __this, const MethodInfo* method); */

void native_ActiveAnimation__Update_5610cc(long param_1)

{
  bool bVar1;
  ulong uVar2;
  long *plVar3;
  long *plVar4;
  undefined8 *puVar5;
  long lVar6;
  int *piVar7;
  undefined8 uVar8;
  float fVar9;
  float fVar10;
  float fVar11;
  
  if ((bRam000000000133ea1a & 1) == 0) {
    native_sub_43273c(&ActiveAnimation_TypeInfo_12d36b0);
    native_sub_43273c(&UnityEngine_AnimationState_TypeInfo_12d37a8);
    native_sub_43273c(&EventDelegate_TypeInfo_12d4590);
    native_sub_43273c(&System_IDisposable_TypeInfo_12d4b00);
    native_sub_43273c(&System_Collections_IEnumerator_TypeInfo_12d4b80);
    native_sub_43273c(&NGUITools_TypeInfo_12d53c8);
    native_sub_43273c(&UnityEngine_Object_TypeInfo_12d54e0);
    bRam000000000133ea1a = 1;
  }
  fVar9 = (float)native_RealTime__get_deltaTime_73d0b8(0);
  if (fVar9 == 0.0) {
    return;
  }
  uVar8 = *(undefined8 *)(param_1 + 0x48);
  if (((*(byte *)(_UnityEngine_Object_TypeInfo_12d54e0 + 0x133) >> 2 & 1) != 0) &&
     (*(int *)(_UnityEngine_Object_TypeInfo_12d54e0 + 0xe0) == 0)) {
    native_sub_4327ec();
  }
  uVar2 = native_UnityEngine_Object__op_Inequality_8d76fc(uVar8,0,0);
  if ((uVar2 & 1) == 0) {
    uVar8 = *(undefined8 *)(param_1 + 0x30);
    if (((*(byte *)(_UnityEngine_Object_TypeInfo_12d54e0 + 0x133) >> 2 & 1) != 0) &&
       (*(int *)(_UnityEngine_Object_TypeInfo_12d54e0 + 0xe0) == 0)) {
      native_sub_4327ec();
    }
    uVar2 = native_UnityEngine_Object__op_Inequality_8d76fc(uVar8,0,0);
    if ((uVar2 & 1) == 0) {
      native_UnityEngine_Behaviour__set_enabled_8d7b0c(param_1,0,0);
      return;
    }
    if (*(long *)(param_1 + 0x30) != 0) {
      plVar4 = (long *)native_UnityEngine_Animation__GetEnumerator_db18d0
                                 (*(long *)(param_1 + 0x30),0);
      if (plVar4 == (long *)0x0) {
                    /* WARNING: Subroutine does not return */
        native_sub_432810();
      }
      bVar1 = false;
LAB_00561394:
      do {
        lVar6 = *plVar4;
        if ((ulong)*(ushort *)(lVar6 + 0x12a) != 0) {
          uVar2 = 0;
          piVar7 = (int *)(*(long *)(lVar6 + 0xb0) + 8);
          do {
            if (*(long *)(piVar7 + -2) == _System_Collections_IEnumerator_TypeInfo_12d4b80) {
              puVar5 = (undefined8 *)(lVar6 + (long)*piVar7 * 0x10 + 0x138);
              goto LAB_005613e8;
            }
            uVar2 = uVar2 + 1;
            piVar7 = piVar7 + 4;
          } while (uVar2 < *(ushort *)(lVar6 + 0x12a));
        }
        puVar5 = (undefined8 *)
                 native_sub_3c9b34(plVar4,_System_Collections_IEnumerator_TypeInfo_12d4b80,0);
LAB_005613e8:
        uVar2 = (*(code *)*puVar5)(plVar4,puVar5[1]);
        if ((uVar2 & 1) == 0) {
          plVar4 = (long *)native_sub_4327f8(plVar4,_System_IDisposable_TypeInfo_12d4b00);
          if (plVar4 == (long *)0x0) goto LAB_0056149c;
          lVar6 = *plVar4;
          if ((ulong)*(ushort *)(lVar6 + 0x12a) == 0) goto LAB_00561460;
          uVar2 = 0;
          piVar7 = (int *)(*(long *)(lVar6 + 0xb0) + 8);
          goto LAB_00561444;
        }
        lVar6 = *plVar4;
        if ((ulong)*(ushort *)(lVar6 + 0x12a) != 0) {
          uVar2 = 0;
          piVar7 = (int *)(*(long *)(lVar6 + 0xb0) + 8);
          do {
            if (*(long *)(piVar7 + -2) == _System_Collections_IEnumerator_TypeInfo_12d4b80) {
              puVar5 = (undefined8 *)(lVar6 + (long)(*piVar7 + 1) * 0x10 + 0x138);
              goto LAB_005612a4;
            }
            uVar2 = uVar2 + 1;
            piVar7 = piVar7 + 4;
          } while (uVar2 < *(ushort *)(lVar6 + 0x12a));
        }
        puVar5 = (undefined8 *)
                 native_sub_3c9b34(plVar4,_System_Collections_IEnumerator_TypeInfo_12d4b80,1);
LAB_005612a4:
        plVar3 = (long *)(*(code *)*puVar5)(plVar4,puVar5[1]);
        if (plVar3 == (long *)0x0) {
LAB_0056165c:
                    /* WARNING: Subroutine does not return */
          native_sub_432810();
        }
        if (*plVar3 != _UnityEngine_AnimationState_TypeInfo_12d37a8) {
          native_sub_432b04(plVar3);
          goto LAB_0056165c;
        }
        lVar6 = *(long *)(param_1 + 0x30);
        uVar8 = native_UnityEngine_AnimationState__get_name_db2b28(plVar3,0);
        if (lVar6 == 0) {
                    /* WARNING: Subroutine does not return */
          native_sub_432810(uVar8,uVar8);
        }
        uVar2 = native_UnityEngine_Animation__IsPlaying_db16f0(lVar6,uVar8,0);
      } while ((uVar2 & 1) == 0);
      fVar10 = (float)native_UnityEngine_AnimationState__get_speed_db2a58(plVar3,0);
      fVar11 = (float)native_UnityEngine_AnimationState__get_time_db29c8(plVar3,0);
      native_UnityEngine_AnimationState__set_time_db2a08(fVar9 * fVar10 + fVar11,plVar3,0);
      if (0.0 <= fVar9 * fVar10) {
        fVar10 = (float)native_UnityEngine_AnimationState__get_time_db29c8(plVar3,0);
        fVar11 = (float)native_UnityEngine_AnimationState__get_length_db2ae8(plVar3,0);
        if (fVar11 <= fVar10) {
          native_UnityEngine_AnimationState__get_length_db2ae8(plVar3,0);
          native_UnityEngine_AnimationState__set_time_db2a08(plVar3,0);
          goto LAB_00561394;
        }
      }
      else {
        fVar10 = (float)native_UnityEngine_AnimationState__get_time_db29c8(plVar3,0);
        if (fVar10 <= 0.0) {
          native_UnityEngine_AnimationState__set_time_db2a08(0,plVar3,0);
          goto LAB_00561394;
        }
      }
      bVar1 = true;
      goto LAB_00561394;
    }
    goto LAB_00561664;
  }
  if (*(long *)(param_1 + 0x48) == 0) goto LAB_00561664;
  fVar10 = -fVar9;
  if (*(int *)(param_1 + 0x38) != -1) {
    fVar10 = fVar9;
  }
  native_UnityEngine_Animator__Update_db2f20(fVar10,*(long *)(param_1 + 0x48),0);
  uVar2 = native_ActiveAnimation__get_isPlaying_5604ec(param_1);
  if ((uVar2 & 1) != 0) {
    return;
  }
  if (*(long *)(param_1 + 0x48) == 0) goto LAB_00561664;
  native_UnityEngine_Behaviour__set_enabled_8d7b0c(*(long *)(param_1 + 0x48),0,0);
  goto LAB_005614d0;
  while( true ) {
    uVar2 = uVar2 + 1;
    piVar7 = piVar7 + 4;
    if (*(ushort *)(lVar6 + 0x12a) <= uVar2) break;
LAB_00561444:
    if (*(long *)(piVar7 + -2) == _System_IDisposable_TypeInfo_12d4b00) {
      puVar5 = (undefined8 *)(lVar6 + (long)*piVar7 * 0x10 + 0x138);
      goto LAB_00561490;
    }
  }
LAB_00561460:
  puVar5 = (undefined8 *)native_sub_3c9b34(plVar4,_System_IDisposable_TypeInfo_12d4b00,0);
LAB_00561490:
  (*(code *)*puVar5)(plVar4,puVar5[1]);
LAB_0056149c:
  if (*(long *)(param_1 + 0x30) == 0) goto LAB_00561664;
  native_UnityEngine_Animation__Sample_db1670(*(long *)(param_1 + 0x30),0);
  if (bVar1) {
    return;
  }
LAB_005614d0:
  native_UnityEngine_Behaviour__set_enabled_8d7b0c(param_1,0,0);
  if (*(char *)(param_1 + 0x40) != '\0') {
    *(undefined1 *)(param_1 + 0x40) = 0;
    uVar8 = **(undefined8 **)(_ActiveAnimation_TypeInfo_12d36b0 + 0xb8);
    if (((*(byte *)(_UnityEngine_Object_TypeInfo_12d54e0 + 0x133) >> 2 & 1) != 0) &&
       (*(int *)(_UnityEngine_Object_TypeInfo_12d54e0 + 0xe0) == 0)) {
      native_sub_4327ec();
    }
    uVar2 = native_UnityEngine_Object__op_Equality_8e9a3c(uVar8,0,0);
    if ((uVar2 & 1) != 0) {
      plVar4 = *(long **)(_ActiveAnimation_TypeInfo_12d36b0 + 0xb8);
      *plVar4 = param_1;
      native_sub_4326e0(plVar4,param_1);
      uVar8 = *(undefined8 *)(param_1 + 0x18);
      if (((*(byte *)(_EventDelegate_TypeInfo_12d4590 + 0x133) >> 2 & 1) != 0) &&
         (*(int *)(_EventDelegate_TypeInfo_12d4590 + 0xe0) == 0)) {
        native_sub_4327ec();
      }
      native_EventDelegate__Execute_deecbc(uVar8,0);
      uVar8 = *(undefined8 *)(param_1 + 0x20);
      if (((*(byte *)(_UnityEngine_Object_TypeInfo_12d54e0 + 0x133) >> 2 & 1) != 0) &&
         (*(int *)(_UnityEngine_Object_TypeInfo_12d54e0 + 0xe0) == 0)) {
        native_sub_4327ec();
      }
      uVar2 = native_UnityEngine_Object__op_Inequality_8d76fc(uVar8,0,0);
      if (((uVar2 & 1) != 0) &&
         (uVar2 = native_System_String__IsNullOrEmpty_b09430(*(undefined8 *)(param_1 + 0x28),0),
         (uVar2 & 1) == 0)) {
        if (*(long *)(param_1 + 0x20) == 0) {
LAB_00561664:
                    /* WARNING: Subroutine does not return */
          native_sub_432810();
        }
        native_UnityEngine_GameObject__SendMessage_8de464
                  (*(long *)(param_1 + 0x20),*(undefined8 *)(param_1 + 0x28),1,0);
      }
      puVar5 = *(undefined8 **)(_ActiveAnimation_TypeInfo_12d36b0 + 0xb8);
      *puVar5 = 0;
      native_sub_4326e0(puVar5,0);
    }
    if ((*(int *)(param_1 + 0x3c) != 0) && (*(int *)(param_1 + 0x38) == *(int *)(param_1 + 0x3c))) {
      uVar8 = native_UnityEngine_Component__get_gameObject_8da66c(param_1,0);
      if (((*(byte *)(_NGUITools_TypeInfo_12d53c8 + 0x133) >> 2 & 1) != 0) &&
         (*(int *)(_NGUITools_TypeInfo_12d53c8 + 0xe0) == 0)) {
        native_sub_4327ec(_NGUITools_TypeInfo_12d53c8);
      }
      native_NGUITools__SetActive_731af8(uVar8,0,0);
    }
  }
  return;
}



/* ActiveAnimation$$Play @ 0x5616d8
 * void ActiveAnimation__Play (ActiveAnimation_o* __this, System_String_o* clipName, int32_t playDirection, const MethodInfo* method); */

/* WARNING: Removing unreachable block (ram,0x00561bb8) */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* ActiveAnimation$$Play
   void ActiveAnimation__Play (ActiveAnimation_o* __this, System_String_o* clipName, int32_t
   playDirection, const MethodInfo* method); */

void native_ActiveAnimation__Play_5616d8(long param_1,undefined8 param_2,int param_3)

{
  ulong uVar1;
  long *plVar2;
  undefined8 *puVar3;
  long *plVar4;
  long lVar5;
  int *piVar6;
  undefined8 uVar7;
  float fVar8;
  float fVar9;
  undefined4 uVar10;
  
  if ((bRam000000000133ea1b & 1) == 0) {
    native_sub_43273c(&UnityEngine_AnimationState_TypeInfo_12d37a8);
    native_sub_43273c(&System_IDisposable_TypeInfo_12d4b00);
    native_sub_43273c(&System_Collections_IEnumerator_TypeInfo_12d4b80);
    native_sub_43273c(&UnityEngine_Object_TypeInfo_12d54e0);
    bRam000000000133ea1b = 1;
  }
  if (param_3 == 0) {
    param_3 = 1;
    if (*(int *)(param_1 + 0x38) == 1) {
      param_3 = -1;
    }
  }
  uVar7 = *(undefined8 *)(param_1 + 0x30);
  if (((*(byte *)(_UnityEngine_Object_TypeInfo_12d54e0 + 0x133) >> 2 & 1) != 0) &&
     (*(int *)(_UnityEngine_Object_TypeInfo_12d54e0 + 0xe0) == 0)) {
    native_sub_4327ec();
  }
  uVar1 = native_UnityEngine_Object__op_Inequality_8d76fc(uVar7,0,0);
  if ((uVar1 & 1) == 0) {
    uVar7 = *(undefined8 *)(param_1 + 0x48);
    if (((*(byte *)(_UnityEngine_Object_TypeInfo_12d54e0 + 0x133) >> 2 & 1) != 0) &&
       (*(int *)(_UnityEngine_Object_TypeInfo_12d54e0 + 0xe0) == 0)) {
      native_sub_4327ec();
    }
    uVar1 = native_UnityEngine_Object__op_Inequality_8d76fc(uVar7,0,0);
    if ((uVar1 & 1) == 0) {
      return;
    }
    uVar1 = native_UnityEngine_Behaviour__get_enabled_8d7acc(param_1,0);
    if ((((uVar1 & 1) != 0) &&
        (uVar1 = native_ActiveAnimation__get_isPlaying_5604ec(param_1), (uVar1 & 1) != 0)) &&
       (uVar1 = native_System_String__op_Equality_afc18c(*(undefined8 *)(param_1 + 0x50),param_2,0),
       (uVar1 & 1) != 0)) {
      *(int *)(param_1 + 0x38) = param_3;
      return;
    }
    native_UnityEngine_Behaviour__set_enabled_8d7b0c(param_1,1,0);
    puVar3 = (undefined8 *)(param_1 + 0x50);
    *puVar3 = param_2;
    *(undefined1 *)(param_1 + 0x40) = 1;
    *(int *)(param_1 + 0x38) = param_3;
    native_sub_4326e0(puVar3,param_2);
    if (*(long *)(param_1 + 0x48) != 0) {
      uVar10 = 0;
      if (param_3 != 1) {
        uVar10 = 0x3f800000;
      }
      native_UnityEngine_Animator__Play_db2da4(uVar10,*(long *)(param_1 + 0x48),*puVar3,0,0);
      return;
    }
  }
  else {
    native_UnityEngine_Behaviour__set_enabled_8d7b0c(param_1,1,0);
    if (*(long *)(param_1 + 0x30) != 0) {
      native_UnityEngine_Behaviour__set_enabled_8d7b0c(*(long *)(param_1 + 0x30),0,0);
      uVar1 = native_System_String__IsNullOrEmpty_b09430(param_2,0);
      lVar5 = *(long *)(param_1 + 0x30);
      if (lVar5 != 0) {
        if ((uVar1 & 1) == 0) {
          uVar1 = native_UnityEngine_Animation__IsPlaying_db16f0(lVar5,param_2,0);
          if ((uVar1 & 1) == 0) {
            if (*(long *)(param_1 + 0x30) == 0) goto LAB_00561bb0;
            native_UnityEngine_Animation__Play_db1824(*(long *)(param_1 + 0x30),param_2,0);
          }
        }
        else {
          uVar1 = native_UnityEngine_Animation__get_isPlaying_db16b0(lVar5,0);
          if ((uVar1 & 1) == 0) {
            if (*(long *)(param_1 + 0x30) == 0) goto LAB_00561bb0;
            native_UnityEngine_Animation__Play_db1740(*(long *)(param_1 + 0x30),0);
          }
        }
        if (*(long *)(param_1 + 0x30) != 0) {
          plVar2 = (long *)native_UnityEngine_Animation__GetEnumerator_db18d0
                                     (*(long *)(param_1 + 0x30),0);
          if (plVar2 == (long *)0x0) {
                    /* WARNING: Subroutine does not return */
            native_sub_432810();
          }
LAB_005618b0:
          lVar5 = *plVar2;
          if ((ulong)*(ushort *)(lVar5 + 0x12a) != 0) {
            uVar1 = 0;
            piVar6 = (int *)(*(long *)(lVar5 + 0xb0) + 8);
            do {
              if (*(long *)(piVar6 + -2) == _System_Collections_IEnumerator_TypeInfo_12d4b80) {
                puVar3 = (undefined8 *)(lVar5 + (long)*piVar6 * 0x10 + 0x138);
                goto LAB_00561904;
              }
              uVar1 = uVar1 + 1;
              piVar6 = piVar6 + 4;
            } while (uVar1 < *(ushort *)(lVar5 + 0x12a));
          }
          puVar3 = (undefined8 *)
                   native_sub_3c9b34(plVar2,_System_Collections_IEnumerator_TypeInfo_12d4b80,0);
LAB_00561904:
          uVar1 = (*(code *)*puVar3)(plVar2,puVar3[1]);
          if ((uVar1 & 1) != 0) {
            lVar5 = *plVar2;
            if ((ulong)*(ushort *)(lVar5 + 0x12a) != 0) {
              uVar1 = 0;
              piVar6 = (int *)(*(long *)(lVar5 + 0xb0) + 8);
              do {
                if (*(long *)(piVar6 + -2) == _System_Collections_IEnumerator_TypeInfo_12d4b80) {
                  puVar3 = (undefined8 *)(lVar5 + (long)(*piVar6 + 1) * 0x10 + 0x138);
                  goto LAB_0056196c;
                }
                uVar1 = uVar1 + 1;
                piVar6 = piVar6 + 4;
              } while (uVar1 < *(ushort *)(lVar5 + 0x12a));
            }
            puVar3 = (undefined8 *)
                     native_sub_3c9b34(plVar2,_System_Collections_IEnumerator_TypeInfo_12d4b80,1);
LAB_0056196c:
            plVar4 = (long *)(*(code *)*puVar3)(plVar2,puVar3[1]);
            if ((plVar4 == (long *)0x0) || (*plVar4 == _UnityEngine_AnimationState_TypeInfo_12d37a8)
               ) {
              uVar1 = native_System_String__IsNullOrEmpty_b09430(param_2,0);
              if ((uVar1 & 1) != 0) {
                if (plVar4 == (long *)0x0) {
                    /* WARNING: Subroutine does not return */
                  native_sub_432810();
                }
                goto LAB_005619c8;
              }
              if (plVar4 != (long *)0x0) goto code_r0x005619ac;
            }
            else {
              native_sub_432b04(plVar4);
            }
                    /* WARNING: Subroutine does not return */
            native_sub_432810();
          }
          plVar2 = (long *)native_sub_4327f8(plVar2,_System_IDisposable_TypeInfo_12d4b00);
          if (plVar2 == (long *)0x0) goto LAB_00561b48;
          lVar5 = *plVar2;
          if ((ulong)*(ushort *)(lVar5 + 0x12a) == 0) goto LAB_00561ac8;
          uVar1 = 0;
          piVar6 = (int *)(*(long *)(lVar5 + 0xb0) + 8);
          goto LAB_00561aac;
        }
      }
    }
  }
  goto LAB_00561bb0;
code_r0x005619ac:
  uVar7 = native_UnityEngine_AnimationState__get_name_db2b28(plVar4,0);
  uVar1 = native_System_String__op_Equality_afc18c(uVar7,param_2,0);
  if ((uVar1 & 1) != 0) {
LAB_005619c8:
    fVar8 = (float)native_UnityEngine_AnimationState__get_speed_db2a58(plVar4,0);
    native_UnityEngine_AnimationState__set_speed_db2a98(ABS(fVar8) * (float)param_3,plVar4,0);
    if (param_3 == -1) {
      fVar8 = (float)native_UnityEngine_AnimationState__get_time_db29c8(plVar4,0);
      if (fVar8 == 0.0) {
        native_UnityEngine_AnimationState__get_length_db2ae8(plVar4,0);
        native_UnityEngine_AnimationState__set_time_db2a08(plVar4,0);
      }
    }
    else if (param_3 == 1) {
      fVar8 = (float)native_UnityEngine_AnimationState__get_time_db29c8(plVar4,0);
      fVar9 = (float)native_UnityEngine_AnimationState__get_length_db2ae8(plVar4,0);
      if (fVar8 == fVar9) {
        native_UnityEngine_AnimationState__set_time_db2a08(0,plVar4,0);
      }
    }
  }
  goto LAB_005618b0;
  while( true ) {
    uVar1 = uVar1 + 1;
    piVar6 = piVar6 + 4;
    if (*(ushort *)(lVar5 + 0x12a) <= uVar1) break;
LAB_00561aac:
    if (*(long *)(piVar6 + -2) == _System_IDisposable_TypeInfo_12d4b00) {
      puVar3 = (undefined8 *)(lVar5 + (long)*piVar6 * 0x10 + 0x138);
      goto LAB_00561b3c;
    }
  }
LAB_00561ac8:
  puVar3 = (undefined8 *)native_sub_3c9b34(plVar2,_System_IDisposable_TypeInfo_12d4b00,0);
LAB_00561b3c:
  (*(code *)*puVar3)(plVar2,puVar3[1]);
LAB_00561b48:
  *(int *)(param_1 + 0x38) = param_3;
  *(undefined1 *)(param_1 + 0x40) = 1;
  if (*(long *)(param_1 + 0x30) != 0) {
    native_UnityEngine_Animation__Sample_db1670(*(long *)(param_1 + 0x30),0);
    return;
  }
LAB_00561bb0:
                    /* WARNING: Subroutine does not return */
  native_sub_432810();
}



/* ActiveAnimation$$Play @ 0x561c20
 * ActiveAnimation_o* ActiveAnimation__Play (UnityEngine_Animation_o* anim, System_String_o* clipName, int32_t playDirection, int32_t enableBeforePlay, int32_t disableCondition, const MethodInfo* method); */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* ActiveAnimation$$Play
   ActiveAnimation_o* ActiveAnimation__Play (UnityEngine_Animation_o* anim, System_String_o*
   clipName, int32_t playDirection, int32_t enableBeforePlay, int32_t disableCondition, const
   MethodInfo* method); */

long native_ActiveAnimation__Play_561c20
               (long param_1,undefined8 param_2,undefined4 param_3,int param_4,undefined4 param_5)

{
  undefined8 uVar1;
  ulong uVar2;
  long lVar3;
  long lVar4;
  int iVar5;
  long *plVar6;
  uint uVar7;
  
  if ((bRam000000000133ea1c & 1) == 0) {
    native_sub_43273c(&Method_UnityEngine_Component_GetComponent_ActiveAnimation____12e2900);
    native_sub_43273c(&Method_UnityEngine_GameObject_AddComponent_ActiveAnimation____12e4740);
    native_sub_43273c(&Method_UnityEngine_GameObject_GetComponentsInChildren_UIPanel____12e4b70);
    native_sub_43273c(&Method_System_Collections_Generic_List_EventDelegate__Clear___12dc748);
    native_sub_43273c(&NGUITools_TypeInfo_12d53c8);
    native_sub_43273c(&UnityEngine_Object_TypeInfo_12d54e0);
    bRam000000000133ea1c = 1;
  }
  if (param_1 != 0) {
    uVar1 = native_UnityEngine_Component__get_gameObject_8da66c(param_1,0);
    if (((*(byte *)(_NGUITools_TypeInfo_12d53c8 + 0x133) >> 2 & 1) != 0) &&
       (*(int *)(_NGUITools_TypeInfo_12d53c8 + 0xe0) == 0)) {
      native_sub_4327ec(_NGUITools_TypeInfo_12d53c8);
    }
    uVar2 = native_NGUITools__GetActive_72d0d4(uVar1,0);
    if ((uVar2 & 1) == 0) {
      if (param_4 != 1) {
        return 0;
      }
      uVar1 = native_UnityEngine_Component__get_gameObject_8da66c(param_1,0);
      if (((*(byte *)(_NGUITools_TypeInfo_12d53c8 + 0x133) >> 2 & 1) != 0) &&
         (*(int *)(_NGUITools_TypeInfo_12d53c8 + 0xe0) == 0)) {
        native_sub_4327ec(_NGUITools_TypeInfo_12d53c8);
      }
      native_NGUITools__SetActive_731af8(uVar1,1,0);
      lVar3 = native_UnityEngine_Component__get_gameObject_8da66c(param_1,0);
      if ((lVar3 == 0) ||
         (lVar3 = native_UnityEngine_GameObject__GetComponentsInChildren_Collider__4a2650
                            (lVar3,
                             _Method_UnityEngine_GameObject_GetComponentsInChildren_UIPanel____12e4b70
                            ), lVar3 == 0)) goto LAB_00561f0c;
      iVar5 = (int)*(undefined8 *)(lVar3 + 0x18);
      if (0 < iVar5) {
        if (iVar5 != 0) {
          uVar7 = 0;
          do {
            lVar4 = *(long *)(lVar3 + (long)(int)uVar7 * 8 + 0x20);
            if (lVar4 == 0) goto LAB_00561f0c;
            native_UIPanel__Refresh_af489c(lVar4,0);
            uVar7 = uVar7 + 1;
            if (iVar5 <= (int)uVar7) goto LAB_00561da8;
          } while (uVar7 < *(uint *)(lVar3 + 0x18));
        }
        uVar1 = native_sub_43283c();
                    /* WARNING: Subroutine does not return */
        native_sub_4327dc(uVar1,0);
      }
    }
LAB_00561da8:
    lVar3 = native_UnityEngine_Component__GetComponent_ActiveAnimation__49daec
                      (param_1,_Method_UnityEngine_Component_GetComponent_ActiveAnimation____12e2900
                      );
    if (((*(byte *)(_UnityEngine_Object_TypeInfo_12d54e0 + 0x133) >> 2 & 1) != 0) &&
       (*(int *)(_UnityEngine_Object_TypeInfo_12d54e0 + 0xe0) == 0)) {
      native_sub_4327ec(_UnityEngine_Object_TypeInfo_12d54e0);
    }
    uVar2 = native_UnityEngine_Object__op_Equality_8e9a3c(lVar3,0,0);
    if ((uVar2 & 1) != 0) {
      lVar3 = native_UnityEngine_Component__get_gameObject_8da66c(param_1,0);
      if (lVar3 == 0) goto LAB_00561f0c;
      lVar3 = native_UnityEngine_GameObject__AddComponent_ActiveAnimation__4a2118
                        (lVar3,
                         _Method_UnityEngine_GameObject_AddComponent_ActiveAnimation____12e4740);
    }
    if (lVar3 != 0) {
      plVar6 = (long *)(lVar3 + 0x30);
      *plVar6 = param_1;
      native_sub_4326e0(plVar6,param_1);
      *(undefined4 *)(lVar3 + 0x3c) = param_5;
      if (*(long *)(lVar3 + 0x18) != 0) {
        native_System_Collections_Generic_List_Action___Clear_d40e80
                  (*(long *)(lVar3 + 0x18),
                   _Method_System_Collections_Generic_List_EventDelegate__Clear___12dc748);
        native_ActiveAnimation__Play_5616d8(lVar3,param_2,param_3);
        uVar1 = *(undefined8 *)(lVar3 + 0x30);
        if (((*(byte *)(_UnityEngine_Object_TypeInfo_12d54e0 + 0x133) >> 2 & 1) != 0) &&
           (*(int *)(_UnityEngine_Object_TypeInfo_12d54e0 + 0xe0) == 0)) {
          native_sub_4327ec();
        }
        uVar2 = native_UnityEngine_Object__op_Inequality_8d76fc(uVar1,0,0);
        if ((uVar2 & 1) == 0) {
          uVar1 = *(undefined8 *)(lVar3 + 0x48);
          if (((*(byte *)(_UnityEngine_Object_TypeInfo_12d54e0 + 0x133) >> 2 & 1) != 0) &&
             (*(int *)(_UnityEngine_Object_TypeInfo_12d54e0 + 0xe0) == 0)) {
            native_sub_4327ec();
          }
          uVar2 = native_UnityEngine_Object__op_Inequality_8d76fc(uVar1,0,0);
          if ((uVar2 & 1) != 0) {
            if (*(long *)(lVar3 + 0x48) == 0) goto LAB_00561f0c;
            native_UnityEngine_Animator__Update_db2f20(0,*(long *)(lVar3 + 0x48),0);
          }
        }
        else {
          if (*plVar6 == 0) goto LAB_00561f0c;
          native_UnityEngine_Animation__Sample_db1670(*plVar6,0);
        }
        return lVar3;
      }
    }
  }
LAB_00561f0c:
                    /* WARNING: Subroutine does not return */
  native_sub_432810();
}



/* ActiveAnimation$$Play @ 0x561f10
 * ActiveAnimation_o* ActiveAnimation__Play (UnityEngine_Animation_o* anim, System_String_o* clipName, int32_t playDirection, const MethodInfo* method); */

/* WARNING: Removing unreachable block (ram,0x00561cf8) */
/* WARNING: Removing unreachable block (ram,0x00561d14) */
/* WARNING: Removing unreachable block (ram,0x00561d1c) */
/* WARNING: Removing unreachable block (ram,0x00561d24) */
/* WARNING: Removing unreachable block (ram,0x00561d44) */
/* WARNING: Removing unreachable block (ram,0x00561d58) */
/* WARNING: Removing unreachable block (ram,0x00561d68) */
/* WARNING: Removing unreachable block (ram,0x00561d6c) */
/* WARNING: Removing unreachable block (ram,0x00561d70) */
/* WARNING: Removing unreachable block (ram,0x00561d7c) */
/* WARNING: Removing unreachable block (ram,0x00561d90) */
/* WARNING: Removing unreachable block (ram,0x00561d9c) */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* ActiveAnimation$$Play
   ActiveAnimation_o* ActiveAnimation__Play (UnityEngine_Animation_o* anim, System_String_o*
   clipName, int32_t playDirection, const MethodInfo* method); */

long native_ActiveAnimation__Play_561f10(long param_1,undefined8 param_2,undefined4 param_3)

{
  undefined8 uVar1;
  ulong uVar2;
  long lVar3;
  long *plVar4;
  
  if ((bRam000000000133ea1c & 1) == 0) {
    native_sub_43273c(&Method_UnityEngine_Component_GetComponent_ActiveAnimation____12e2900);
    native_sub_43273c(&Method_UnityEngine_GameObject_AddComponent_ActiveAnimation____12e4740);
    native_sub_43273c(&Method_UnityEngine_GameObject_GetComponentsInChildren_UIPanel____12e4b70);
    native_sub_43273c(&Method_System_Collections_Generic_List_EventDelegate__Clear___12dc748);
    native_sub_43273c(&NGUITools_TypeInfo_12d53c8);
    native_sub_43273c(&UnityEngine_Object_TypeInfo_12d54e0);
    bRam000000000133ea1c = 1;
  }
  if (param_1 != 0) {
    uVar1 = native_UnityEngine_Component__get_gameObject_8da66c(param_1,0);
    if (((*(byte *)(_NGUITools_TypeInfo_12d53c8 + 0x133) >> 2 & 1) != 0) &&
       (*(int *)(_NGUITools_TypeInfo_12d53c8 + 0xe0) == 0)) {
      native_sub_4327ec(_NGUITools_TypeInfo_12d53c8);
    }
    uVar2 = native_NGUITools__GetActive_72d0d4(uVar1,0);
    if ((uVar2 & 1) == 0) {
      return 0;
    }
    lVar3 = native_UnityEngine_Component__GetComponent_ActiveAnimation__49daec
                      (param_1,_Method_UnityEngine_Component_GetComponent_ActiveAnimation____12e2900
                      );
    if (((*(byte *)(_UnityEngine_Object_TypeInfo_12d54e0 + 0x133) >> 2 & 1) != 0) &&
       (*(int *)(_UnityEngine_Object_TypeInfo_12d54e0 + 0xe0) == 0)) {
      native_sub_4327ec(_UnityEngine_Object_TypeInfo_12d54e0);
    }
    uVar2 = native_UnityEngine_Object__op_Equality_8e9a3c(lVar3,0,0);
    if ((uVar2 & 1) != 0) {
      lVar3 = native_UnityEngine_Component__get_gameObject_8da66c(param_1,0);
      if (lVar3 == 0) goto LAB_00561f0c;
      lVar3 = native_UnityEngine_GameObject__AddComponent_ActiveAnimation__4a2118
                        (lVar3,
                         _Method_UnityEngine_GameObject_AddComponent_ActiveAnimation____12e4740);
    }
    if (lVar3 != 0) {
      plVar4 = (long *)(lVar3 + 0x30);
      *plVar4 = param_1;
      native_sub_4326e0(plVar4,param_1);
      *(undefined4 *)(lVar3 + 0x3c) = 0;
      if (*(long *)(lVar3 + 0x18) != 0) {
        native_System_Collections_Generic_List_Action___Clear_d40e80
                  (*(long *)(lVar3 + 0x18),
                   _Method_System_Collections_Generic_List_EventDelegate__Clear___12dc748);
        native_ActiveAnimation__Play_5616d8(lVar3,param_2,param_3);
        uVar1 = *(undefined8 *)(lVar3 + 0x30);
        if (((*(byte *)(_UnityEngine_Object_TypeInfo_12d54e0 + 0x133) >> 2 & 1) != 0) &&
           (*(int *)(_UnityEngine_Object_TypeInfo_12d54e0 + 0xe0) == 0)) {
          native_sub_4327ec();
        }
        uVar2 = native_UnityEngine_Object__op_Inequality_8d76fc(uVar1,0,0);
        if ((uVar2 & 1) == 0) {
          uVar1 = *(undefined8 *)(lVar3 + 0x48);
          if (((*(byte *)(_UnityEngine_Object_TypeInfo_12d54e0 + 0x133) >> 2 & 1) != 0) &&
             (*(int *)(_UnityEngine_Object_TypeInfo_12d54e0 + 0xe0) == 0)) {
            native_sub_4327ec();
          }
          uVar2 = native_UnityEngine_Object__op_Inequality_8d76fc(uVar1,0,0);
          if ((uVar2 & 1) != 0) {
            if (*(long *)(lVar3 + 0x48) == 0) goto LAB_00561f0c;
            native_UnityEngine_Animator__Update_db2f20(0,*(long *)(lVar3 + 0x48),0);
          }
        }
        else {
          if (*plVar4 == 0) goto LAB_00561f0c;
          native_UnityEngine_Animation__Sample_db1670(*plVar4,0);
        }
        return lVar3;
      }
    }
  }
LAB_00561f0c:
                    /* WARNING: Subroutine does not return */
  native_sub_432810();
}



/* ActiveAnimation$$Play @ 0x561f1c
 * ActiveAnimation_o* ActiveAnimation__Play (UnityEngine_Animation_o* anim, int32_t playDirection, const MethodInfo* method); */

/* WARNING: Removing unreachable block (ram,0x00561cf8) */
/* WARNING: Removing unreachable block (ram,0x00561d14) */
/* WARNING: Removing unreachable block (ram,0x00561d1c) */
/* WARNING: Removing unreachable block (ram,0x00561d24) */
/* WARNING: Removing unreachable block (ram,0x00561d44) */
/* WARNING: Removing unreachable block (ram,0x00561d58) */
/* WARNING: Removing unreachable block (ram,0x00561d68) */
/* WARNING: Removing unreachable block (ram,0x00561d6c) */
/* WARNING: Removing unreachable block (ram,0x00561d70) */
/* WARNING: Removing unreachable block (ram,0x00561d7c) */
/* WARNING: Removing unreachable block (ram,0x00561d90) */
/* WARNING: Removing unreachable block (ram,0x00561d9c) */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* ActiveAnimation$$Play
   ActiveAnimation_o* ActiveAnimation__Play (UnityEngine_Animation_o* anim, int32_t playDirection,
   const MethodInfo* method); */

long native_ActiveAnimation__Play_561f1c(long param_1,undefined4 param_2)

{
  undefined8 uVar1;
  ulong uVar2;
  long lVar3;
  long *plVar4;
  
  if ((bRam000000000133ea1c & 1) == 0) {
    native_sub_43273c(&Method_UnityEngine_Component_GetComponent_ActiveAnimation____12e2900,0,
                      param_2);
    native_sub_43273c(&Method_UnityEngine_GameObject_AddComponent_ActiveAnimation____12e4740);
    native_sub_43273c(&Method_UnityEngine_GameObject_GetComponentsInChildren_UIPanel____12e4b70);
    native_sub_43273c(&Method_System_Collections_Generic_List_EventDelegate__Clear___12dc748);
    native_sub_43273c(&NGUITools_TypeInfo_12d53c8);
    native_sub_43273c(&UnityEngine_Object_TypeInfo_12d54e0);
    bRam000000000133ea1c = 1;
  }
  if (param_1 != 0) {
    uVar1 = native_UnityEngine_Component__get_gameObject_8da66c(param_1,0);
    if (((*(byte *)(_NGUITools_TypeInfo_12d53c8 + 0x133) >> 2 & 1) != 0) &&
       (*(int *)(_NGUITools_TypeInfo_12d53c8 + 0xe0) == 0)) {
      native_sub_4327ec(_NGUITools_TypeInfo_12d53c8);
    }
    uVar2 = native_NGUITools__GetActive_72d0d4(uVar1,0);
    if ((uVar2 & 1) == 0) {
      return 0;
    }
    lVar3 = native_UnityEngine_Component__GetComponent_ActiveAnimation__49daec
                      (param_1,_Method_UnityEngine_Component_GetComponent_ActiveAnimation____12e2900
                      );
    if (((*(byte *)(_UnityEngine_Object_TypeInfo_12d54e0 + 0x133) >> 2 & 1) != 0) &&
       (*(int *)(_UnityEngine_Object_TypeInfo_12d54e0 + 0xe0) == 0)) {
      native_sub_4327ec(_UnityEngine_Object_TypeInfo_12d54e0);
    }
    uVar2 = native_UnityEngine_Object__op_Equality_8e9a3c(lVar3,0,0);
    if ((uVar2 & 1) != 0) {
      lVar3 = native_UnityEngine_Component__get_gameObject_8da66c(param_1,0);
      if (lVar3 == 0) goto LAB_00561f0c;
      lVar3 = native_UnityEngine_GameObject__AddComponent_ActiveAnimation__4a2118
                        (lVar3,
                         _Method_UnityEngine_GameObject_AddComponent_ActiveAnimation____12e4740);
    }
    if (lVar3 != 0) {
      plVar4 = (long *)(lVar3 + 0x30);
      *plVar4 = param_1;
      native_sub_4326e0(plVar4,param_1);
      *(undefined4 *)(lVar3 + 0x3c) = 0;
      if (*(long *)(lVar3 + 0x18) != 0) {
        native_System_Collections_Generic_List_Action___Clear_d40e80
                  (*(long *)(lVar3 + 0x18),
                   _Method_System_Collections_Generic_List_EventDelegate__Clear___12dc748);
        native_ActiveAnimation__Play_5616d8(lVar3,0,param_2);
        uVar1 = *(undefined8 *)(lVar3 + 0x30);
        if (((*(byte *)(_UnityEngine_Object_TypeInfo_12d54e0 + 0x133) >> 2 & 1) != 0) &&
           (*(int *)(_UnityEngine_Object_TypeInfo_12d54e0 + 0xe0) == 0)) {
          native_sub_4327ec();
        }
        uVar2 = native_UnityEngine_Object__op_Inequality_8d76fc(uVar1,0,0);
        if ((uVar2 & 1) == 0) {
          uVar1 = *(undefined8 *)(lVar3 + 0x48);
          if (((*(byte *)(_UnityEngine_Object_TypeInfo_12d54e0 + 0x133) >> 2 & 1) != 0) &&
             (*(int *)(_UnityEngine_Object_TypeInfo_12d54e0 + 0xe0) == 0)) {
            native_sub_4327ec();
          }
          uVar2 = native_UnityEngine_Object__op_Inequality_8d76fc(uVar1,0,0);
          if ((uVar2 & 1) != 0) {
            if (*(long *)(lVar3 + 0x48) == 0) goto LAB_00561f0c;
            native_UnityEngine_Animator__Update_db2f20(0,*(long *)(lVar3 + 0x48),0);
          }
        }
        else {
          if (*plVar4 == 0) goto LAB_00561f0c;
          native_UnityEngine_Animation__Sample_db1670(*plVar4,0);
        }
        return lVar3;
      }
    }
  }
LAB_00561f0c:
                    /* WARNING: Subroutine does not return */
  native_sub_432810();
}



/* ActiveAnimation$$Play @ 0x561f30
 * ActiveAnimation_o* ActiveAnimation__Play (UnityEngine_Animator_o* anim, System_String_o* clipName, int32_t playDirection, int32_t enableBeforePlay, int32_t disableCondition, const MethodInfo* method); */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* ActiveAnimation$$Play
   ActiveAnimation_o* ActiveAnimation__Play (UnityEngine_Animator_o* anim, System_String_o*
   clipName, int32_t playDirection, int32_t enableBeforePlay, int32_t disableCondition, const
   MethodInfo* method); */

long native_ActiveAnimation__Play_561f30
               (long param_1,undefined8 param_2,undefined4 param_3,int param_4,undefined4 param_5)

{
  long lVar1;
  ulong uVar2;
  undefined8 uVar3;
  long lVar4;
  int iVar5;
  long *plVar6;
  uint uVar7;
  
  if ((bRam000000000133ea1d & 1) == 0) {
    native_sub_43273c(&Method_UnityEngine_Component_GetComponent_ActiveAnimation____12e2900);
    native_sub_43273c(&Method_UnityEngine_GameObject_AddComponent_ActiveAnimation____12e4740);
    native_sub_43273c(&Method_UnityEngine_GameObject_GetComponentsInChildren_UIPanel____12e4b70);
    native_sub_43273c(&Method_System_Collections_Generic_List_EventDelegate__Clear___12dc748);
    native_sub_43273c(&NGUITools_TypeInfo_12d53c8);
    native_sub_43273c(&UnityEngine_Object_TypeInfo_12d54e0);
    bRam000000000133ea1d = 1;
  }
  if (param_4 == 2) {
LAB_00561fc0:
    if (param_1 == 0) goto LAB_0056222c;
  }
  else {
    if (param_1 == 0) goto LAB_0056222c;
    uVar3 = native_UnityEngine_Component__get_gameObject_8da66c(param_1,0);
    if (((*(byte *)(_NGUITools_TypeInfo_12d53c8 + 0x133) >> 2 & 1) != 0) &&
       (*(int *)(_NGUITools_TypeInfo_12d53c8 + 0xe0) == 0)) {
      native_sub_4327ec(_NGUITools_TypeInfo_12d53c8);
    }
    uVar2 = native_NGUITools__GetActive_72d0d4(uVar3,0);
    if ((uVar2 & 1) == 0) {
      if (param_4 != 1) {
        return 0;
      }
      uVar3 = native_UnityEngine_Component__get_gameObject_8da66c(param_1,0);
      if (((*(byte *)(_NGUITools_TypeInfo_12d53c8 + 0x133) >> 2 & 1) != 0) &&
         (*(int *)(_NGUITools_TypeInfo_12d53c8 + 0xe0) == 0)) {
        native_sub_4327ec(_NGUITools_TypeInfo_12d53c8);
      }
      native_NGUITools__SetActive_731af8(uVar3,1,0);
      lVar1 = native_UnityEngine_Component__get_gameObject_8da66c(param_1,0);
      if ((lVar1 == 0) ||
         (lVar1 = native_UnityEngine_GameObject__GetComponentsInChildren_Collider__4a2650
                            (lVar1,
                             _Method_UnityEngine_GameObject_GetComponentsInChildren_UIPanel____12e4b70
                            ), lVar1 == 0)) goto LAB_0056222c;
      iVar5 = (int)*(undefined8 *)(lVar1 + 0x18);
      if (0 < iVar5) {
        if (iVar5 != 0) {
          uVar7 = 0;
          do {
            lVar4 = *(long *)(lVar1 + (long)(int)uVar7 * 8 + 0x20);
            if (lVar4 == 0) goto LAB_0056222c;
            native_UIPanel__Refresh_af489c(lVar4,0);
            uVar7 = uVar7 + 1;
            if (iVar5 <= (int)uVar7) goto LAB_00561fc0;
          } while (uVar7 < *(uint *)(lVar1 + 0x18));
        }
        uVar3 = native_sub_43283c();
                    /* WARNING: Subroutine does not return */
        native_sub_4327dc(uVar3,0);
      }
    }
  }
  lVar1 = native_UnityEngine_Component__GetComponent_ActiveAnimation__49daec
                    (param_1,_Method_UnityEngine_Component_GetComponent_ActiveAnimation____12e2900);
  if (((*(byte *)(_UnityEngine_Object_TypeInfo_12d54e0 + 0x133) >> 2 & 1) != 0) &&
     (*(int *)(_UnityEngine_Object_TypeInfo_12d54e0 + 0xe0) == 0)) {
    native_sub_4327ec(_UnityEngine_Object_TypeInfo_12d54e0);
  }
  uVar2 = native_UnityEngine_Object__op_Equality_8e9a3c(lVar1,0,0);
  if ((uVar2 & 1) != 0) {
    lVar1 = native_UnityEngine_Component__get_gameObject_8da66c(param_1,0);
    if (lVar1 == 0) goto LAB_0056222c;
    lVar1 = native_UnityEngine_GameObject__AddComponent_ActiveAnimation__4a2118
                      (lVar1,_Method_UnityEngine_GameObject_AddComponent_ActiveAnimation____12e4740)
    ;
  }
  if (lVar1 != 0) {
    plVar6 = (long *)(lVar1 + 0x48);
    *plVar6 = param_1;
    native_sub_4326e0(plVar6,param_1);
    *(undefined4 *)(lVar1 + 0x3c) = param_5;
    if (*(long *)(lVar1 + 0x18) != 0) {
      native_System_Collections_Generic_List_Action___Clear_d40e80
                (*(long *)(lVar1 + 0x18),
                 _Method_System_Collections_Generic_List_EventDelegate__Clear___12dc748);
      native_ActiveAnimation__Play_5616d8(lVar1,param_2,param_3);
      uVar3 = *(undefined8 *)(lVar1 + 0x30);
      if (((*(byte *)(_UnityEngine_Object_TypeInfo_12d54e0 + 0x133) >> 2 & 1) != 0) &&
         (*(int *)(_UnityEngine_Object_TypeInfo_12d54e0 + 0xe0) == 0)) {
        native_sub_4327ec();
      }
      uVar2 = native_UnityEngine_Object__op_Inequality_8d76fc(uVar3,0,0);
      if ((uVar2 & 1) == 0) {
        lVar4 = *plVar6;
        if (((*(byte *)(_UnityEngine_Object_TypeInfo_12d54e0 + 0x133) >> 2 & 1) != 0) &&
           (*(int *)(_UnityEngine_Object_TypeInfo_12d54e0 + 0xe0) == 0)) {
          native_sub_4327ec();
        }
        uVar2 = native_UnityEngine_Object__op_Inequality_8d76fc(lVar4,0,0);
        if ((uVar2 & 1) != 0) {
          if (*plVar6 == 0) goto LAB_0056222c;
          native_UnityEngine_Animator__Update_db2f20(0,*plVar6,0);
        }
      }
      else {
        if (*(long *)(lVar1 + 0x30) == 0) goto LAB_0056222c;
        native_UnityEngine_Animation__Sample_db1670(*(long *)(lVar1 + 0x30),0);
      }
      return lVar1;
    }
  }
LAB_0056222c:
                    /* WARNING: Subroutine does not return */
  native_sub_432810();
}



/* ActiveAnimation$$.ctor @ 0x562230
 * void ActiveAnimation___ctor (ActiveAnimation_o* __this, const MethodInfo* method); */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* ActiveAnimation$$.ctor
   void ActiveAnimation___ctor (ActiveAnimation_o* __this, const MethodInfo* method); */

undefined1  [16] native_ActiveAnimation___ctor_562230(ulong param_1)

{
  undefined8 uVar1;
  undefined1 auVar2 [16];
  
  if ((bRam000000000133ea1e & 1) == 0) {
    native_sub_43273c(&Method_System_Collections_Generic_List_EventDelegate___ctor___12dc738);
    native_sub_43273c(&System_Collections_Generic_List_EventDelegate__TypeInfo_12d2a08);
    native_sub_43273c(&StringLiteral__12eaac0);
    bRam000000000133ea1e = 1;
  }
  uVar1 = native_sub_432808(_System_Collections_Generic_List_EventDelegate__TypeInfo_12d2a08);
  native_System_Collections_Generic_List_XmlEventCache_XmlEvent______ctor_d3ff44
            (uVar1,_Method_System_Collections_Generic_List_EventDelegate___ctor___12dc738);
  *(undefined8 *)(param_1 + 0x18) = uVar1;
  native_sub_4326e0((undefined8 *)(param_1 + 0x18),uVar1);
  *(undefined8 *)(param_1 + 0x50) = _StringLiteral__12eaac0;
  native_sub_4326e0(param_1 + 0x50);
  if ((bRam0000000001340ae0 & 1) == 0) {
    native_sub_43273c(&UnityEngine_Object_TypeInfo_12d54e0,0);
    bRam0000000001340ae0 = 1;
  }
  if (((*(byte *)(_UnityEngine_Object_TypeInfo_12d54e0 + 0x133) >> 2 & 1) != 0) &&
     (*(int *)(_UnityEngine_Object_TypeInfo_12d54e0 + 0xe0) == 0)) {
    native_sub_4327ec();
  }
  auVar2._8_8_ = 0;
  auVar2._0_8_ = param_1;
  return auVar2;
}


