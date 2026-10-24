/* ARM64 IL2CPP native pseudocode from Ghidra.
 * Recovered implementation, not original C# source.
 * Function boundaries follow the IL2CPP method address table. */


/* UIPlaySound$$get_canPlay @ 0xaf68bc
 * bool UIPlaySound__get_canPlay (UIPlaySound_o* __this, const MethodInfo* method); */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* UIPlaySound$$get_canPlay
   bool UIPlaySound__get_canPlay (UIPlaySound_o* __this, const MethodInfo* method); */

undefined8 native_UIPlaySound__get_canPlay_af68bc(undefined8 param_1)

{
  ulong uVar1;
  long *plVar2;
  undefined8 uVar3;
  
  if ((bRam0000000001342076 & 1) == 0) {
    native_sub_43273c(&Method_UnityEngine_Component_GetComponent_UIButton____12e2ba0);
    native_sub_43273c(&UnityEngine_Object_TypeInfo_12d54e0);
    bRam0000000001342076 = 1;
  }
  uVar1 = native_UnityEngine_Behaviour__get_enabled_8d7acc(param_1,0);
  if ((uVar1 & 1) == 0) {
    uVar3 = 0;
  }
  else {
    plVar2 = (long *)native_UnityEngine_Component__GetComponent_ActiveAnimation__49daec
                               (param_1,
                                _Method_UnityEngine_Component_GetComponent_UIButton____12e2ba0);
    if (((*(byte *)(_UnityEngine_Object_TypeInfo_12d54e0 + 0x133) >> 2 & 1) != 0) &&
       (*(int *)(_UnityEngine_Object_TypeInfo_12d54e0 + 0xe0) == 0)) {
      native_sub_4327ec(_UnityEngine_Object_TypeInfo_12d54e0);
    }
    uVar1 = native_UnityEngine_Object__op_Equality_8e9a3c(plVar2,0,0);
    if ((uVar1 & 1) == 0) {
      if (plVar2 != (long *)0x0) {
                    /* WARNING: Could not recover jumptable at 0x00af6988. Too many branches */
                    /* WARNING: Treating indirect jump as call */
        uVar3 = (**(code **)(*plVar2 + 0x178))(plVar2,*(undefined8 *)(*plVar2 + 0x180));
        return uVar3;
      }
                    /* WARNING: Subroutine does not return */
      native_sub_432810();
    }
    uVar3 = 1;
  }
  return uVar3;
}



/* UIPlaySound$$OnEnable @ 0xaf6990
 * void UIPlaySound__OnEnable (UIPlaySound_o* __this, const MethodInfo* method); */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* UIPlaySound$$OnEnable
   void UIPlaySound__OnEnable (UIPlaySound_o* __this, const MethodInfo* method); */

long native_UIPlaySound__OnEnable_af6990(long param_1)

{
  ulong uVar1;
  undefined8 *puVar2;
  long *plVar3;
  long lVar4;
  ulong uVar5;
  undefined8 uVar6;
  undefined8 uVar7;
  float fVar8;
  undefined4 uVar9;
  float fVar10;
  
  lVar4 = param_1;
  if ((bRam0000000001342077 & 1) == 0) {
    lVar4 = native_sub_43273c(&NGUITools_TypeInfo_12d53c8);
    bRam0000000001342077 = 1;
  }
  if (*(int *)(param_1 + 0x20) != 6) {
    return lVar4;
  }
  uVar7 = *(undefined8 *)(param_1 + 0x18);
  fVar10 = *(float *)(param_1 + 0x24);
  uVar9 = *(undefined4 *)(param_1 + 0x28);
  if (((*(byte *)(_NGUITools_TypeInfo_12d53c8 + 0x133) >> 2 & 1) != 0) &&
     (*(int *)(_NGUITools_TypeInfo_12d53c8 + 0xe0) == 0)) {
    native_sub_4327ec();
  }
  if ((bRam000000000133f584 & 1) == 0) {
    native_sub_43273c(&UnityEngine_AudioListener___TypeInfo_12d3020,0);
    native_sub_43273c(&UnityEngine_AudioListener_var_12d12e8);
    native_sub_43273c(&UnityEngine_Camera_var_12d1350);
    native_sub_43273c(&UnityEngine_Camera_TypeInfo_12d3cf0);
    native_sub_43273c(&Method_UnityEngine_Component_GetComponent_AudioSource____12e2918);
    native_sub_43273c(&Method_UnityEngine_GameObject_AddComponent_AudioListener____12e4748);
    native_sub_43273c(&Method_UnityEngine_GameObject_AddComponent_AudioSource____12e4750);
    native_sub_43273c(&NGUITools_TypeInfo_12d53c8);
    native_sub_43273c(&UnityEngine_Object_TypeInfo_12d54e0);
    native_sub_43273c(&System_Type_TypeInfo_12d6340);
    bRam000000000133f584 = 1;
  }
  fVar8 = (float)native_UnityEngine_Time__get_unscaledTime_770860(0);
  if (((*(byte *)(_NGUITools_TypeInfo_12d53c8 + 0x133) >> 2 & 1) != 0) &&
     (*(int *)(_NGUITools_TypeInfo_12d53c8 + 0xe0) == 0)) {
    native_sub_4327ec();
  }
  uVar6 = *(undefined8 *)(*(long *)(_NGUITools_TypeInfo_12d53c8 + 0xb8) + 0x20);
  if (((*(byte *)(_UnityEngine_Object_TypeInfo_12d54e0 + 0x133) >> 2 & 1) != 0) &&
     (*(int *)(_UnityEngine_Object_TypeInfo_12d54e0 + 0xe0) == 0)) {
    native_sub_4327ec(_UnityEngine_Object_TypeInfo_12d54e0);
  }
  uVar1 = native_UnityEngine_Object__op_Equality_8e9a3c(uVar6,uVar7,0);
  if ((uVar1 & 1) != 0) {
    if (((*(byte *)(_NGUITools_TypeInfo_12d53c8 + 0x133) >> 2 & 1) != 0) &&
       (*(int *)(_NGUITools_TypeInfo_12d53c8 + 0xe0) == 0)) {
      native_sub_4327ec(_NGUITools_TypeInfo_12d53c8);
    }
    if (fVar8 < *(float *)(*(long *)(_NGUITools_TypeInfo_12d53c8 + 0xb8) + 0x18) + 0.1) {
      return 0;
    }
  }
  if (((*(byte *)(_NGUITools_TypeInfo_12d53c8 + 0x133) >> 2 & 1) != 0) &&
     (*(int *)(_NGUITools_TypeInfo_12d53c8 + 0xe0) == 0)) {
    native_sub_4327ec(_NGUITools_TypeInfo_12d53c8);
  }
  puVar2 = (undefined8 *)(*(long *)(_NGUITools_TypeInfo_12d53c8 + 0xb8) + 0x20);
  *puVar2 = uVar7;
  native_sub_4326e0(puVar2,uVar7);
  *(float *)(*(long *)(_NGUITools_TypeInfo_12d53c8 + 0xb8) + 0x18) = fVar8;
  fVar8 = (float)native_NGUITools__get_soundVolume_72c59c();
  fVar8 = fVar8 * fVar10;
  if (((*(byte *)(_UnityEngine_Object_TypeInfo_12d54e0 + 0x133) >> 2 & 1) != 0) &&
     (*(int *)(_UnityEngine_Object_TypeInfo_12d54e0 + 0xe0) == 0)) {
    native_sub_4327ec();
  }
  uVar1 = native_UnityEngine_Object__op_Inequality_8d76fc(uVar7,0,0);
  if (fVar8 <= 0.01) {
    return 0;
  }
  if ((uVar1 & 1) == 0) {
    return 0;
  }
  if (((*(byte *)(_NGUITools_TypeInfo_12d53c8 + 0x133) >> 2 & 1) != 0) &&
     (*(int *)(_NGUITools_TypeInfo_12d53c8 + 0xe0) == 0)) {
    native_sub_4327ec();
  }
  uVar6 = **(undefined8 **)(_NGUITools_TypeInfo_12d53c8 + 0xb8);
  if (((*(byte *)(_UnityEngine_Object_TypeInfo_12d54e0 + 0x133) >> 2 & 1) != 0) &&
     (*(int *)(_UnityEngine_Object_TypeInfo_12d54e0 + 0xe0) == 0)) {
    native_sub_4327ec(_UnityEngine_Object_TypeInfo_12d54e0);
  }
  uVar1 = native_UnityEngine_Object__op_Equality_8e9a3c(uVar6,0,0);
  if ((uVar1 & 1) == 0) {
    if (((*(byte *)(_NGUITools_TypeInfo_12d53c8 + 0x133) >> 2 & 1) != 0) &&
       (*(int *)(_NGUITools_TypeInfo_12d53c8 + 0xe0) == 0)) {
      native_sub_4327ec();
    }
    uVar1 = native_NGUITools__GetActive_72d02c
                      (**(undefined8 **)(_NGUITools_TypeInfo_12d53c8 + 0xb8));
    if ((uVar1 & 1) == 0) goto LAB_0072ca44;
  }
  else {
LAB_0072ca44:
    uVar6 = _UnityEngine_AudioListener_var_12d12e8;
    if (((*(byte *)(_System_Type_TypeInfo_12d6340 + 0x133) >> 2 & 1) != 0) &&
       (*(int *)(_System_Type_TypeInfo_12d6340 + 0xe0) == 0)) {
      native_sub_4327ec();
    }
    uVar6 = native_System_Type__GetTypeFromHandle_b0fb24(uVar6,0);
    if (((*(byte *)(_UnityEngine_Object_TypeInfo_12d54e0 + 0x133) >> 2 & 1) != 0) &&
       (*(int *)(_UnityEngine_Object_TypeInfo_12d54e0 + 0xe0) == 0)) {
      native_sub_4327ec(_UnityEngine_Object_TypeInfo_12d54e0);
    }
    uVar6 = native_UnityEngine_Object__FindObjectsOfType_8ea6cc(uVar6,0);
    lVar4 = native_sub_4327f8(uVar6,_UnityEngine_AudioListener___TypeInfo_12d3020);
    if ((lVar4 != 0) && (0 < (int)*(ulong *)(lVar4 + 0x18))) {
      uVar1 = 0;
      uVar5 = *(ulong *)(lVar4 + 0x18) & 0xffffffff;
      do {
        if (uVar5 <= uVar1) {
LAB_0072cfa0:
          uVar7 = native_sub_43283c();
                    /* WARNING: Subroutine does not return */
          native_sub_4327dc(uVar7,0);
        }
        uVar6 = *(undefined8 *)(lVar4 + 0x20 + uVar1 * 8);
        if (((*(byte *)(_NGUITools_TypeInfo_12d53c8 + 0x133) >> 2 & 1) != 0) &&
           (*(int *)(_NGUITools_TypeInfo_12d53c8 + 0xe0) == 0)) {
          native_sub_4327ec();
        }
        uVar5 = native_NGUITools__GetActive_72d02c(uVar6);
        if ((uVar5 & 1) != 0) {
          if (*(uint *)(lVar4 + 0x18) <= (uint)uVar1) goto LAB_0072cfa0;
          uVar6 = *(undefined8 *)(lVar4 + 0x20 + uVar1 * 8);
          if (((*(byte *)(_NGUITools_TypeInfo_12d53c8 + 0x133) >> 2 & 1) != 0) &&
             (*(int *)(_NGUITools_TypeInfo_12d53c8 + 0xe0) == 0)) {
            native_sub_4327ec();
          }
          puVar2 = *(undefined8 **)(_NGUITools_TypeInfo_12d53c8 + 0xb8);
          *puVar2 = uVar6;
          native_sub_4326e0(puVar2,uVar6);
          break;
        }
        uVar5 = (ulong)*(uint *)(lVar4 + 0x18);
        uVar1 = uVar1 + 1;
      } while ((long)uVar1 < (long)(int)*(uint *)(lVar4 + 0x18));
    }
    if (((*(byte *)(_NGUITools_TypeInfo_12d53c8 + 0x133) >> 2 & 1) != 0) &&
       (*(int *)(_NGUITools_TypeInfo_12d53c8 + 0xe0) == 0)) {
      native_sub_4327ec();
    }
    uVar6 = **(undefined8 **)(_NGUITools_TypeInfo_12d53c8 + 0xb8);
    if (((*(byte *)(_UnityEngine_Object_TypeInfo_12d54e0 + 0x133) >> 2 & 1) != 0) &&
       (*(int *)(_UnityEngine_Object_TypeInfo_12d54e0 + 0xe0) == 0)) {
      native_sub_4327ec(_UnityEngine_Object_TypeInfo_12d54e0);
    }
    uVar1 = native_UnityEngine_Object__op_Equality_8e9a3c(uVar6,0,0);
    if ((uVar1 & 1) != 0) {
      plVar3 = (long *)native_UnityEngine_Camera__get_main_8d93c0(0);
      if (((*(byte *)(_UnityEngine_Object_TypeInfo_12d54e0 + 0x133) >> 2 & 1) != 0) &&
         (*(int *)(_UnityEngine_Object_TypeInfo_12d54e0 + 0xe0) == 0)) {
        native_sub_4327ec(_UnityEngine_Object_TypeInfo_12d54e0);
      }
      uVar1 = native_UnityEngine_Object__op_Equality_8e9a3c(plVar3,0,0);
      uVar6 = _UnityEngine_Camera_var_12d1350;
      if ((uVar1 & 1) != 0) {
        if (((*(byte *)(_System_Type_TypeInfo_12d6340 + 0x133) >> 2 & 1) != 0) &&
           (*(int *)(_System_Type_TypeInfo_12d6340 + 0xe0) == 0)) {
          native_sub_4327ec();
        }
        uVar6 = native_System_Type__GetTypeFromHandle_b0fb24(uVar6,0);
        if (((*(byte *)(_UnityEngine_Object_TypeInfo_12d54e0 + 0x133) >> 2 & 1) != 0) &&
           (*(int *)(_UnityEngine_Object_TypeInfo_12d54e0 + 0xe0) == 0)) {
          native_sub_4327ec(_UnityEngine_Object_TypeInfo_12d54e0);
        }
        plVar3 = (long *)native_UnityEngine_Object__FindObjectOfType_8ea870(uVar6,0);
        if (plVar3 == (long *)0x0) {
          plVar3 = (long *)0x0;
        }
        else if (*plVar3 != _UnityEngine_Camera_TypeInfo_12d3cf0) {
          plVar3 = (long *)0x0;
        }
      }
      if (((*(byte *)(_UnityEngine_Object_TypeInfo_12d54e0 + 0x133) >> 2 & 1) != 0) &&
         (*(int *)(_UnityEngine_Object_TypeInfo_12d54e0 + 0xe0) == 0)) {
        native_sub_4327ec();
      }
      uVar1 = native_UnityEngine_Object__op_Inequality_8d76fc(plVar3,0,0);
      if ((uVar1 & 1) != 0) {
        if ((plVar3 == (long *)0x0) ||
           (lVar4 = native_UnityEngine_Component__get_gameObject_8da66c(plVar3,0), lVar4 == 0))
        goto LAB_0072cfac;
        uVar6 = native_UnityEngine_GameObject__AddComponent_ActiveAnimation__4a2118
                          (lVar4,
                           _Method_UnityEngine_GameObject_AddComponent_AudioListener____12e4748);
        if (((*(byte *)(_NGUITools_TypeInfo_12d53c8 + 0x133) >> 2 & 1) != 0) &&
           (*(int *)(_NGUITools_TypeInfo_12d53c8 + 0xe0) == 0)) {
          native_sub_4327ec(_NGUITools_TypeInfo_12d53c8);
        }
        puVar2 = *(undefined8 **)(_NGUITools_TypeInfo_12d53c8 + 0xb8);
        *puVar2 = uVar6;
        native_sub_4326e0(puVar2,uVar6);
      }
    }
  }
  if (((*(byte *)(_NGUITools_TypeInfo_12d53c8 + 0x133) >> 2 & 1) != 0) &&
     (*(int *)(_NGUITools_TypeInfo_12d53c8 + 0xe0) == 0)) {
    native_sub_4327ec();
  }
  uVar6 = **(undefined8 **)(_NGUITools_TypeInfo_12d53c8 + 0xb8);
  if (((*(byte *)(_UnityEngine_Object_TypeInfo_12d54e0 + 0x133) >> 2 & 1) != 0) &&
     (*(int *)(_UnityEngine_Object_TypeInfo_12d54e0 + 0xe0) == 0)) {
    native_sub_4327ec(_UnityEngine_Object_TypeInfo_12d54e0);
  }
  uVar1 = native_UnityEngine_Object__op_Inequality_8d76fc(uVar6,0,0);
  if ((uVar1 & 1) == 0) {
    return 0;
  }
  if (((*(byte *)(_NGUITools_TypeInfo_12d53c8 + 0x133) >> 2 & 1) != 0) &&
     (*(int *)(_NGUITools_TypeInfo_12d53c8 + 0xe0) == 0)) {
    native_sub_4327ec();
  }
  if (**(long **)(_NGUITools_TypeInfo_12d53c8 + 0xb8) != 0) {
    uVar1 = native_UnityEngine_Behaviour__get_enabled_8d7acc
                      (**(long **)(_NGUITools_TypeInfo_12d53c8 + 0xb8),0);
    if ((uVar1 & 1) == 0) {
      return 0;
    }
    if (((*(byte *)(_NGUITools_TypeInfo_12d53c8 + 0x133) >> 2 & 1) != 0) &&
       (*(int *)(_NGUITools_TypeInfo_12d53c8 + 0xe0) == 0)) {
      native_sub_4327ec();
    }
    if (**(long **)(_NGUITools_TypeInfo_12d53c8 + 0xb8) != 0) {
      native_UnityEngine_Component__get_gameObject_8da66c
                (**(long **)(_NGUITools_TypeInfo_12d53c8 + 0xb8),0);
      uVar1 = native_NGUITools__GetActive_72d0d4();
      if ((uVar1 & 1) == 0) {
        return 0;
      }
      if (((*(byte *)(_NGUITools_TypeInfo_12d53c8 + 0x133) >> 2 & 1) != 0) &&
         (*(int *)(_NGUITools_TypeInfo_12d53c8 + 0xe0) == 0)) {
        native_sub_4327ec();
      }
      uVar6 = *(undefined8 *)(*(long *)(_NGUITools_TypeInfo_12d53c8 + 0xb8) + 8);
      if (((*(byte *)(_UnityEngine_Object_TypeInfo_12d54e0 + 0x133) >> 2 & 1) != 0) &&
         (*(int *)(_UnityEngine_Object_TypeInfo_12d54e0 + 0xe0) == 0)) {
        native_sub_4327ec(_UnityEngine_Object_TypeInfo_12d54e0);
      }
      uVar1 = native_UnityEngine_Object__op_Implicit_8e1b98(uVar6,0);
      if ((uVar1 & 1) == 0) {
        if (((*(byte *)(_NGUITools_TypeInfo_12d53c8 + 0x133) >> 2 & 1) != 0) &&
           (*(int *)(_NGUITools_TypeInfo_12d53c8 + 0xe0) == 0)) {
          native_sub_4327ec();
        }
        if (**(long **)(_NGUITools_TypeInfo_12d53c8 + 0xb8) == 0) goto LAB_0072cfac;
        uVar6 = native_UnityEngine_Component__GetComponent_ActiveAnimation__49daec
                          (**(long **)(_NGUITools_TypeInfo_12d53c8 + 0xb8),
                           _Method_UnityEngine_Component_GetComponent_AudioSource____12e2918);
        puVar2 = (undefined8 *)(*(long *)(_NGUITools_TypeInfo_12d53c8 + 0xb8) + 8);
        *puVar2 = uVar6;
        native_sub_4326e0(puVar2,uVar6);
        uVar6 = *(undefined8 *)(*(long *)(_NGUITools_TypeInfo_12d53c8 + 0xb8) + 8);
        if (((*(byte *)(_UnityEngine_Object_TypeInfo_12d54e0 + 0x133) >> 2 & 1) != 0) &&
           (*(int *)(_UnityEngine_Object_TypeInfo_12d54e0 + 0xe0) == 0)) {
          native_sub_4327ec();
        }
        uVar1 = native_UnityEngine_Object__op_Equality_8e9a3c(uVar6,0,0);
        if ((uVar1 & 1) != 0) {
          if (((*(byte *)(_NGUITools_TypeInfo_12d53c8 + 0x133) >> 2 & 1) != 0) &&
             (*(int *)(_NGUITools_TypeInfo_12d53c8 + 0xe0) == 0)) {
            native_sub_4327ec();
          }
          if ((**(long **)(_NGUITools_TypeInfo_12d53c8 + 0xb8) == 0) ||
             (lVar4 = native_UnityEngine_Component__get_gameObject_8da66c
                                (**(long **)(_NGUITools_TypeInfo_12d53c8 + 0xb8),0), lVar4 == 0))
          goto LAB_0072cfac;
          uVar6 = native_UnityEngine_GameObject__AddComponent_ActiveAnimation__4a2118
                            (lVar4,
                             _Method_UnityEngine_GameObject_AddComponent_AudioSource____12e4750);
          puVar2 = (undefined8 *)(*(long *)(_NGUITools_TypeInfo_12d53c8 + 0xb8) + 8);
          *puVar2 = uVar6;
          native_sub_4326e0(puVar2,uVar6);
        }
      }
      if (((*(byte *)(_NGUITools_TypeInfo_12d53c8 + 0x133) >> 2 & 1) != 0) &&
         (*(int *)(_NGUITools_TypeInfo_12d53c8 + 0xe0) == 0)) {
        native_sub_4327ec();
      }
      lVar4 = *(long *)(*(long *)(_NGUITools_TypeInfo_12d53c8 + 0xb8) + 8);
      if (lVar4 != 0) {
        native_UnityEngine_AudioSource__set_priority_dc11dc(lVar4,0x32,0);
        lVar4 = *(long *)(*(long *)(_NGUITools_TypeInfo_12d53c8 + 0xb8) + 8);
        if (lVar4 != 0) {
          native_UnityEngine_AudioSource__set_pitch_dc0fe8(uVar9,lVar4,0);
          lVar4 = *(long *)(*(long *)(_NGUITools_TypeInfo_12d53c8 + 0xb8) + 8);
          if (lVar4 != 0) {
            native_UnityEngine_AudioSource__PlayOneShot_dc10cc(fVar8,lVar4,uVar7,0);
            return *(long *)(*(long *)(_NGUITools_TypeInfo_12d53c8 + 0xb8) + 8);
          }
        }
      }
    }
  }
LAB_0072cfac:
                    /* WARNING: Subroutine does not return */
  native_sub_432810();
}



/* UIPlaySound$$OnDisable @ 0xaf6a28
 * void UIPlaySound__OnDisable (UIPlaySound_o* __this, const MethodInfo* method); */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* UIPlaySound$$OnDisable
   void UIPlaySound__OnDisable (UIPlaySound_o* __this, const MethodInfo* method); */

long native_UIPlaySound__OnDisable_af6a28(long param_1)

{
  ulong uVar1;
  undefined8 *puVar2;
  long *plVar3;
  long lVar4;
  ulong uVar5;
  undefined8 uVar6;
  undefined8 uVar7;
  float fVar8;
  undefined4 uVar9;
  float fVar10;
  
  lVar4 = param_1;
  if ((bRam0000000001342078 & 1) == 0) {
    lVar4 = native_sub_43273c(&NGUITools_TypeInfo_12d53c8);
    bRam0000000001342078 = 1;
  }
  if (*(int *)(param_1 + 0x20) != 7) {
    return lVar4;
  }
  uVar7 = *(undefined8 *)(param_1 + 0x18);
  fVar10 = *(float *)(param_1 + 0x24);
  uVar9 = *(undefined4 *)(param_1 + 0x28);
  if (((*(byte *)(_NGUITools_TypeInfo_12d53c8 + 0x133) >> 2 & 1) != 0) &&
     (*(int *)(_NGUITools_TypeInfo_12d53c8 + 0xe0) == 0)) {
    native_sub_4327ec();
  }
  if ((bRam000000000133f584 & 1) == 0) {
    native_sub_43273c(&UnityEngine_AudioListener___TypeInfo_12d3020,0);
    native_sub_43273c(&UnityEngine_AudioListener_var_12d12e8);
    native_sub_43273c(&UnityEngine_Camera_var_12d1350);
    native_sub_43273c(&UnityEngine_Camera_TypeInfo_12d3cf0);
    native_sub_43273c(&Method_UnityEngine_Component_GetComponent_AudioSource____12e2918);
    native_sub_43273c(&Method_UnityEngine_GameObject_AddComponent_AudioListener____12e4748);
    native_sub_43273c(&Method_UnityEngine_GameObject_AddComponent_AudioSource____12e4750);
    native_sub_43273c(&NGUITools_TypeInfo_12d53c8);
    native_sub_43273c(&UnityEngine_Object_TypeInfo_12d54e0);
    native_sub_43273c(&System_Type_TypeInfo_12d6340);
    bRam000000000133f584 = 1;
  }
  fVar8 = (float)native_UnityEngine_Time__get_unscaledTime_770860(0);
  if (((*(byte *)(_NGUITools_TypeInfo_12d53c8 + 0x133) >> 2 & 1) != 0) &&
     (*(int *)(_NGUITools_TypeInfo_12d53c8 + 0xe0) == 0)) {
    native_sub_4327ec();
  }
  uVar6 = *(undefined8 *)(*(long *)(_NGUITools_TypeInfo_12d53c8 + 0xb8) + 0x20);
  if (((*(byte *)(_UnityEngine_Object_TypeInfo_12d54e0 + 0x133) >> 2 & 1) != 0) &&
     (*(int *)(_UnityEngine_Object_TypeInfo_12d54e0 + 0xe0) == 0)) {
    native_sub_4327ec(_UnityEngine_Object_TypeInfo_12d54e0);
  }
  uVar1 = native_UnityEngine_Object__op_Equality_8e9a3c(uVar6,uVar7,0);
  if ((uVar1 & 1) != 0) {
    if (((*(byte *)(_NGUITools_TypeInfo_12d53c8 + 0x133) >> 2 & 1) != 0) &&
       (*(int *)(_NGUITools_TypeInfo_12d53c8 + 0xe0) == 0)) {
      native_sub_4327ec(_NGUITools_TypeInfo_12d53c8);
    }
    if (fVar8 < *(float *)(*(long *)(_NGUITools_TypeInfo_12d53c8 + 0xb8) + 0x18) + 0.1) {
      return 0;
    }
  }
  if (((*(byte *)(_NGUITools_TypeInfo_12d53c8 + 0x133) >> 2 & 1) != 0) &&
     (*(int *)(_NGUITools_TypeInfo_12d53c8 + 0xe0) == 0)) {
    native_sub_4327ec(_NGUITools_TypeInfo_12d53c8);
  }
  puVar2 = (undefined8 *)(*(long *)(_NGUITools_TypeInfo_12d53c8 + 0xb8) + 0x20);
  *puVar2 = uVar7;
  native_sub_4326e0(puVar2,uVar7);
  *(float *)(*(long *)(_NGUITools_TypeInfo_12d53c8 + 0xb8) + 0x18) = fVar8;
  fVar8 = (float)native_NGUITools__get_soundVolume_72c59c();
  fVar8 = fVar8 * fVar10;
  if (((*(byte *)(_UnityEngine_Object_TypeInfo_12d54e0 + 0x133) >> 2 & 1) != 0) &&
     (*(int *)(_UnityEngine_Object_TypeInfo_12d54e0 + 0xe0) == 0)) {
    native_sub_4327ec();
  }
  uVar1 = native_UnityEngine_Object__op_Inequality_8d76fc(uVar7,0,0);
  if (fVar8 <= 0.01) {
    return 0;
  }
  if ((uVar1 & 1) == 0) {
    return 0;
  }
  if (((*(byte *)(_NGUITools_TypeInfo_12d53c8 + 0x133) >> 2 & 1) != 0) &&
     (*(int *)(_NGUITools_TypeInfo_12d53c8 + 0xe0) == 0)) {
    native_sub_4327ec();
  }
  uVar6 = **(undefined8 **)(_NGUITools_TypeInfo_12d53c8 + 0xb8);
  if (((*(byte *)(_UnityEngine_Object_TypeInfo_12d54e0 + 0x133) >> 2 & 1) != 0) &&
     (*(int *)(_UnityEngine_Object_TypeInfo_12d54e0 + 0xe0) == 0)) {
    native_sub_4327ec(_UnityEngine_Object_TypeInfo_12d54e0);
  }
  uVar1 = native_UnityEngine_Object__op_Equality_8e9a3c(uVar6,0,0);
  if ((uVar1 & 1) == 0) {
    if (((*(byte *)(_NGUITools_TypeInfo_12d53c8 + 0x133) >> 2 & 1) != 0) &&
       (*(int *)(_NGUITools_TypeInfo_12d53c8 + 0xe0) == 0)) {
      native_sub_4327ec();
    }
    uVar1 = native_NGUITools__GetActive_72d02c
                      (**(undefined8 **)(_NGUITools_TypeInfo_12d53c8 + 0xb8));
    if ((uVar1 & 1) == 0) goto LAB_0072ca44;
  }
  else {
LAB_0072ca44:
    uVar6 = _UnityEngine_AudioListener_var_12d12e8;
    if (((*(byte *)(_System_Type_TypeInfo_12d6340 + 0x133) >> 2 & 1) != 0) &&
       (*(int *)(_System_Type_TypeInfo_12d6340 + 0xe0) == 0)) {
      native_sub_4327ec();
    }
    uVar6 = native_System_Type__GetTypeFromHandle_b0fb24(uVar6,0);
    if (((*(byte *)(_UnityEngine_Object_TypeInfo_12d54e0 + 0x133) >> 2 & 1) != 0) &&
       (*(int *)(_UnityEngine_Object_TypeInfo_12d54e0 + 0xe0) == 0)) {
      native_sub_4327ec(_UnityEngine_Object_TypeInfo_12d54e0);
    }
    uVar6 = native_UnityEngine_Object__FindObjectsOfType_8ea6cc(uVar6,0);
    lVar4 = native_sub_4327f8(uVar6,_UnityEngine_AudioListener___TypeInfo_12d3020);
    if ((lVar4 != 0) && (0 < (int)*(ulong *)(lVar4 + 0x18))) {
      uVar1 = 0;
      uVar5 = *(ulong *)(lVar4 + 0x18) & 0xffffffff;
      do {
        if (uVar5 <= uVar1) {
LAB_0072cfa0:
          uVar7 = native_sub_43283c();
                    /* WARNING: Subroutine does not return */
          native_sub_4327dc(uVar7,0);
        }
        uVar6 = *(undefined8 *)(lVar4 + 0x20 + uVar1 * 8);
        if (((*(byte *)(_NGUITools_TypeInfo_12d53c8 + 0x133) >> 2 & 1) != 0) &&
           (*(int *)(_NGUITools_TypeInfo_12d53c8 + 0xe0) == 0)) {
          native_sub_4327ec();
        }
        uVar5 = native_NGUITools__GetActive_72d02c(uVar6);
        if ((uVar5 & 1) != 0) {
          if (*(uint *)(lVar4 + 0x18) <= (uint)uVar1) goto LAB_0072cfa0;
          uVar6 = *(undefined8 *)(lVar4 + 0x20 + uVar1 * 8);
          if (((*(byte *)(_NGUITools_TypeInfo_12d53c8 + 0x133) >> 2 & 1) != 0) &&
             (*(int *)(_NGUITools_TypeInfo_12d53c8 + 0xe0) == 0)) {
            native_sub_4327ec();
          }
          puVar2 = *(undefined8 **)(_NGUITools_TypeInfo_12d53c8 + 0xb8);
          *puVar2 = uVar6;
          native_sub_4326e0(puVar2,uVar6);
          break;
        }
        uVar5 = (ulong)*(uint *)(lVar4 + 0x18);
        uVar1 = uVar1 + 1;
      } while ((long)uVar1 < (long)(int)*(uint *)(lVar4 + 0x18));
    }
    if (((*(byte *)(_NGUITools_TypeInfo_12d53c8 + 0x133) >> 2 & 1) != 0) &&
       (*(int *)(_NGUITools_TypeInfo_12d53c8 + 0xe0) == 0)) {
      native_sub_4327ec();
    }
    uVar6 = **(undefined8 **)(_NGUITools_TypeInfo_12d53c8 + 0xb8);
    if (((*(byte *)(_UnityEngine_Object_TypeInfo_12d54e0 + 0x133) >> 2 & 1) != 0) &&
       (*(int *)(_UnityEngine_Object_TypeInfo_12d54e0 + 0xe0) == 0)) {
      native_sub_4327ec(_UnityEngine_Object_TypeInfo_12d54e0);
    }
    uVar1 = native_UnityEngine_Object__op_Equality_8e9a3c(uVar6,0,0);
    if ((uVar1 & 1) != 0) {
      plVar3 = (long *)native_UnityEngine_Camera__get_main_8d93c0(0);
      if (((*(byte *)(_UnityEngine_Object_TypeInfo_12d54e0 + 0x133) >> 2 & 1) != 0) &&
         (*(int *)(_UnityEngine_Object_TypeInfo_12d54e0 + 0xe0) == 0)) {
        native_sub_4327ec(_UnityEngine_Object_TypeInfo_12d54e0);
      }
      uVar1 = native_UnityEngine_Object__op_Equality_8e9a3c(plVar3,0,0);
      uVar6 = _UnityEngine_Camera_var_12d1350;
      if ((uVar1 & 1) != 0) {
        if (((*(byte *)(_System_Type_TypeInfo_12d6340 + 0x133) >> 2 & 1) != 0) &&
           (*(int *)(_System_Type_TypeInfo_12d6340 + 0xe0) == 0)) {
          native_sub_4327ec();
        }
        uVar6 = native_System_Type__GetTypeFromHandle_b0fb24(uVar6,0);
        if (((*(byte *)(_UnityEngine_Object_TypeInfo_12d54e0 + 0x133) >> 2 & 1) != 0) &&
           (*(int *)(_UnityEngine_Object_TypeInfo_12d54e0 + 0xe0) == 0)) {
          native_sub_4327ec(_UnityEngine_Object_TypeInfo_12d54e0);
        }
        plVar3 = (long *)native_UnityEngine_Object__FindObjectOfType_8ea870(uVar6,0);
        if (plVar3 == (long *)0x0) {
          plVar3 = (long *)0x0;
        }
        else if (*plVar3 != _UnityEngine_Camera_TypeInfo_12d3cf0) {
          plVar3 = (long *)0x0;
        }
      }
      if (((*(byte *)(_UnityEngine_Object_TypeInfo_12d54e0 + 0x133) >> 2 & 1) != 0) &&
         (*(int *)(_UnityEngine_Object_TypeInfo_12d54e0 + 0xe0) == 0)) {
        native_sub_4327ec();
      }
      uVar1 = native_UnityEngine_Object__op_Inequality_8d76fc(plVar3,0,0);
      if ((uVar1 & 1) != 0) {
        if ((plVar3 == (long *)0x0) ||
           (lVar4 = native_UnityEngine_Component__get_gameObject_8da66c(plVar3,0), lVar4 == 0))
        goto LAB_0072cfac;
        uVar6 = native_UnityEngine_GameObject__AddComponent_ActiveAnimation__4a2118
                          (lVar4,
                           _Method_UnityEngine_GameObject_AddComponent_AudioListener____12e4748);
        if (((*(byte *)(_NGUITools_TypeInfo_12d53c8 + 0x133) >> 2 & 1) != 0) &&
           (*(int *)(_NGUITools_TypeInfo_12d53c8 + 0xe0) == 0)) {
          native_sub_4327ec(_NGUITools_TypeInfo_12d53c8);
        }
        puVar2 = *(undefined8 **)(_NGUITools_TypeInfo_12d53c8 + 0xb8);
        *puVar2 = uVar6;
        native_sub_4326e0(puVar2,uVar6);
      }
    }
  }
  if (((*(byte *)(_NGUITools_TypeInfo_12d53c8 + 0x133) >> 2 & 1) != 0) &&
     (*(int *)(_NGUITools_TypeInfo_12d53c8 + 0xe0) == 0)) {
    native_sub_4327ec();
  }
  uVar6 = **(undefined8 **)(_NGUITools_TypeInfo_12d53c8 + 0xb8);
  if (((*(byte *)(_UnityEngine_Object_TypeInfo_12d54e0 + 0x133) >> 2 & 1) != 0) &&
     (*(int *)(_UnityEngine_Object_TypeInfo_12d54e0 + 0xe0) == 0)) {
    native_sub_4327ec(_UnityEngine_Object_TypeInfo_12d54e0);
  }
  uVar1 = native_UnityEngine_Object__op_Inequality_8d76fc(uVar6,0,0);
  if ((uVar1 & 1) == 0) {
    return 0;
  }
  if (((*(byte *)(_NGUITools_TypeInfo_12d53c8 + 0x133) >> 2 & 1) != 0) &&
     (*(int *)(_NGUITools_TypeInfo_12d53c8 + 0xe0) == 0)) {
    native_sub_4327ec();
  }
  if (**(long **)(_NGUITools_TypeInfo_12d53c8 + 0xb8) != 0) {
    uVar1 = native_UnityEngine_Behaviour__get_enabled_8d7acc
                      (**(long **)(_NGUITools_TypeInfo_12d53c8 + 0xb8),0);
    if ((uVar1 & 1) == 0) {
      return 0;
    }
    if (((*(byte *)(_NGUITools_TypeInfo_12d53c8 + 0x133) >> 2 & 1) != 0) &&
       (*(int *)(_NGUITools_TypeInfo_12d53c8 + 0xe0) == 0)) {
      native_sub_4327ec();
    }
    if (**(long **)(_NGUITools_TypeInfo_12d53c8 + 0xb8) != 0) {
      native_UnityEngine_Component__get_gameObject_8da66c
                (**(long **)(_NGUITools_TypeInfo_12d53c8 + 0xb8),0);
      uVar1 = native_NGUITools__GetActive_72d0d4();
      if ((uVar1 & 1) == 0) {
        return 0;
      }
      if (((*(byte *)(_NGUITools_TypeInfo_12d53c8 + 0x133) >> 2 & 1) != 0) &&
         (*(int *)(_NGUITools_TypeInfo_12d53c8 + 0xe0) == 0)) {
        native_sub_4327ec();
      }
      uVar6 = *(undefined8 *)(*(long *)(_NGUITools_TypeInfo_12d53c8 + 0xb8) + 8);
      if (((*(byte *)(_UnityEngine_Object_TypeInfo_12d54e0 + 0x133) >> 2 & 1) != 0) &&
         (*(int *)(_UnityEngine_Object_TypeInfo_12d54e0 + 0xe0) == 0)) {
        native_sub_4327ec(_UnityEngine_Object_TypeInfo_12d54e0);
      }
      uVar1 = native_UnityEngine_Object__op_Implicit_8e1b98(uVar6,0);
      if ((uVar1 & 1) == 0) {
        if (((*(byte *)(_NGUITools_TypeInfo_12d53c8 + 0x133) >> 2 & 1) != 0) &&
           (*(int *)(_NGUITools_TypeInfo_12d53c8 + 0xe0) == 0)) {
          native_sub_4327ec();
        }
        if (**(long **)(_NGUITools_TypeInfo_12d53c8 + 0xb8) == 0) goto LAB_0072cfac;
        uVar6 = native_UnityEngine_Component__GetComponent_ActiveAnimation__49daec
                          (**(long **)(_NGUITools_TypeInfo_12d53c8 + 0xb8),
                           _Method_UnityEngine_Component_GetComponent_AudioSource____12e2918);
        puVar2 = (undefined8 *)(*(long *)(_NGUITools_TypeInfo_12d53c8 + 0xb8) + 8);
        *puVar2 = uVar6;
        native_sub_4326e0(puVar2,uVar6);
        uVar6 = *(undefined8 *)(*(long *)(_NGUITools_TypeInfo_12d53c8 + 0xb8) + 8);
        if (((*(byte *)(_UnityEngine_Object_TypeInfo_12d54e0 + 0x133) >> 2 & 1) != 0) &&
           (*(int *)(_UnityEngine_Object_TypeInfo_12d54e0 + 0xe0) == 0)) {
          native_sub_4327ec();
        }
        uVar1 = native_UnityEngine_Object__op_Equality_8e9a3c(uVar6,0,0);
        if ((uVar1 & 1) != 0) {
          if (((*(byte *)(_NGUITools_TypeInfo_12d53c8 + 0x133) >> 2 & 1) != 0) &&
             (*(int *)(_NGUITools_TypeInfo_12d53c8 + 0xe0) == 0)) {
            native_sub_4327ec();
          }
          if ((**(long **)(_NGUITools_TypeInfo_12d53c8 + 0xb8) == 0) ||
             (lVar4 = native_UnityEngine_Component__get_gameObject_8da66c
                                (**(long **)(_NGUITools_TypeInfo_12d53c8 + 0xb8),0), lVar4 == 0))
          goto LAB_0072cfac;
          uVar6 = native_UnityEngine_GameObject__AddComponent_ActiveAnimation__4a2118
                            (lVar4,
                             _Method_UnityEngine_GameObject_AddComponent_AudioSource____12e4750);
          puVar2 = (undefined8 *)(*(long *)(_NGUITools_TypeInfo_12d53c8 + 0xb8) + 8);
          *puVar2 = uVar6;
          native_sub_4326e0(puVar2,uVar6);
        }
      }
      if (((*(byte *)(_NGUITools_TypeInfo_12d53c8 + 0x133) >> 2 & 1) != 0) &&
         (*(int *)(_NGUITools_TypeInfo_12d53c8 + 0xe0) == 0)) {
        native_sub_4327ec();
      }
      lVar4 = *(long *)(*(long *)(_NGUITools_TypeInfo_12d53c8 + 0xb8) + 8);
      if (lVar4 != 0) {
        native_UnityEngine_AudioSource__set_priority_dc11dc(lVar4,0x32,0);
        lVar4 = *(long *)(*(long *)(_NGUITools_TypeInfo_12d53c8 + 0xb8) + 8);
        if (lVar4 != 0) {
          native_UnityEngine_AudioSource__set_pitch_dc0fe8(uVar9,lVar4,0);
          lVar4 = *(long *)(*(long *)(_NGUITools_TypeInfo_12d53c8 + 0xb8) + 8);
          if (lVar4 != 0) {
            native_UnityEngine_AudioSource__PlayOneShot_dc10cc(fVar8,lVar4,uVar7,0);
            return *(long *)(*(long *)(_NGUITools_TypeInfo_12d53c8 + 0xb8) + 8);
          }
        }
      }
    }
  }
LAB_0072cfac:
                    /* WARNING: Subroutine does not return */
  native_sub_432810();
}



/* UIPlaySound$$OnHover @ 0xaf6ac0
 * void UIPlaySound__OnHover (UIPlaySound_o* __this, bool isOver, const MethodInfo* method); */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* UIPlaySound$$OnHover
   void UIPlaySound__OnHover (UIPlaySound_o* __this, bool isOver, const MethodInfo* method); */

ulong native_UIPlaySound__OnHover_af6ac0(ulong param_1,byte param_2)

{
  undefined8 *puVar1;
  long lVar2;
  long *plVar3;
  ulong uVar4;
  ulong uVar5;
  undefined8 uVar6;
  undefined8 uVar7;
  float fVar8;
  undefined4 uVar9;
  float fVar10;
  
  uVar4 = param_1;
  if ((bRam0000000001342079 & 1) == 0) {
    uVar4 = native_sub_43273c(&NGUITools_TypeInfo_12d53c8);
    bRam0000000001342079 = 1;
  }
  if (*(int *)(param_1 + 0x20) == 1) {
    if (((*(char *)(param_1 + 0x2c) == '\0' ^ param_2) & 1) != 0) {
      return uVar4;
    }
    *(byte *)(param_1 + 0x2c) = param_2 & 1;
  }
  uVar4 = native_UIPlaySound__get_canPlay_af68bc(param_1);
  if ((uVar4 & 1) == 0) {
    return uVar4;
  }
  if ((param_2 & 1) == 0) {
    if (*(int *)(param_1 + 0x20) != 2) {
      return uVar4;
    }
  }
  else if (*(int *)(param_1 + 0x20) != 1) {
    return uVar4;
  }
  uVar7 = *(undefined8 *)(param_1 + 0x18);
  fVar10 = *(float *)(param_1 + 0x24);
  uVar9 = *(undefined4 *)(param_1 + 0x28);
  if (((*(byte *)(_NGUITools_TypeInfo_12d53c8 + 0x133) >> 2 & 1) != 0) &&
     (*(int *)(_NGUITools_TypeInfo_12d53c8 + 0xe0) == 0)) {
    native_sub_4327ec();
  }
  if ((bRam000000000133f584 & 1) == 0) {
    native_sub_43273c(&UnityEngine_AudioListener___TypeInfo_12d3020,0);
    native_sub_43273c(&UnityEngine_AudioListener_var_12d12e8);
    native_sub_43273c(&UnityEngine_Camera_var_12d1350);
    native_sub_43273c(&UnityEngine_Camera_TypeInfo_12d3cf0);
    native_sub_43273c(&Method_UnityEngine_Component_GetComponent_AudioSource____12e2918);
    native_sub_43273c(&Method_UnityEngine_GameObject_AddComponent_AudioListener____12e4748);
    native_sub_43273c(&Method_UnityEngine_GameObject_AddComponent_AudioSource____12e4750);
    native_sub_43273c(&NGUITools_TypeInfo_12d53c8);
    native_sub_43273c(&UnityEngine_Object_TypeInfo_12d54e0);
    native_sub_43273c(&System_Type_TypeInfo_12d6340);
    bRam000000000133f584 = 1;
  }
  fVar8 = (float)native_UnityEngine_Time__get_unscaledTime_770860(0);
  if (((*(byte *)(_NGUITools_TypeInfo_12d53c8 + 0x133) >> 2 & 1) != 0) &&
     (*(int *)(_NGUITools_TypeInfo_12d53c8 + 0xe0) == 0)) {
    native_sub_4327ec();
  }
  uVar6 = *(undefined8 *)(*(long *)(_NGUITools_TypeInfo_12d53c8 + 0xb8) + 0x20);
  if (((*(byte *)(_UnityEngine_Object_TypeInfo_12d54e0 + 0x133) >> 2 & 1) != 0) &&
     (*(int *)(_UnityEngine_Object_TypeInfo_12d54e0 + 0xe0) == 0)) {
    native_sub_4327ec(_UnityEngine_Object_TypeInfo_12d54e0);
  }
  uVar4 = native_UnityEngine_Object__op_Equality_8e9a3c(uVar6,uVar7,0);
  if ((uVar4 & 1) != 0) {
    if (((*(byte *)(_NGUITools_TypeInfo_12d53c8 + 0x133) >> 2 & 1) != 0) &&
       (*(int *)(_NGUITools_TypeInfo_12d53c8 + 0xe0) == 0)) {
      native_sub_4327ec(_NGUITools_TypeInfo_12d53c8);
    }
    if (fVar8 < *(float *)(*(long *)(_NGUITools_TypeInfo_12d53c8 + 0xb8) + 0x18) + 0.1) {
      return 0;
    }
  }
  if (((*(byte *)(_NGUITools_TypeInfo_12d53c8 + 0x133) >> 2 & 1) != 0) &&
     (*(int *)(_NGUITools_TypeInfo_12d53c8 + 0xe0) == 0)) {
    native_sub_4327ec(_NGUITools_TypeInfo_12d53c8);
  }
  puVar1 = (undefined8 *)(*(long *)(_NGUITools_TypeInfo_12d53c8 + 0xb8) + 0x20);
  *puVar1 = uVar7;
  native_sub_4326e0(puVar1,uVar7);
  *(float *)(*(long *)(_NGUITools_TypeInfo_12d53c8 + 0xb8) + 0x18) = fVar8;
  fVar8 = (float)native_NGUITools__get_soundVolume_72c59c();
  fVar8 = fVar8 * fVar10;
  if (((*(byte *)(_UnityEngine_Object_TypeInfo_12d54e0 + 0x133) >> 2 & 1) != 0) &&
     (*(int *)(_UnityEngine_Object_TypeInfo_12d54e0 + 0xe0) == 0)) {
    native_sub_4327ec();
  }
  uVar4 = native_UnityEngine_Object__op_Inequality_8d76fc(uVar7,0,0);
  if (fVar8 <= 0.01) {
    return 0;
  }
  if ((uVar4 & 1) == 0) {
    return 0;
  }
  if (((*(byte *)(_NGUITools_TypeInfo_12d53c8 + 0x133) >> 2 & 1) != 0) &&
     (*(int *)(_NGUITools_TypeInfo_12d53c8 + 0xe0) == 0)) {
    native_sub_4327ec();
  }
  uVar6 = **(undefined8 **)(_NGUITools_TypeInfo_12d53c8 + 0xb8);
  if (((*(byte *)(_UnityEngine_Object_TypeInfo_12d54e0 + 0x133) >> 2 & 1) != 0) &&
     (*(int *)(_UnityEngine_Object_TypeInfo_12d54e0 + 0xe0) == 0)) {
    native_sub_4327ec(_UnityEngine_Object_TypeInfo_12d54e0);
  }
  uVar4 = native_UnityEngine_Object__op_Equality_8e9a3c(uVar6,0,0);
  if ((uVar4 & 1) == 0) {
    if (((*(byte *)(_NGUITools_TypeInfo_12d53c8 + 0x133) >> 2 & 1) != 0) &&
       (*(int *)(_NGUITools_TypeInfo_12d53c8 + 0xe0) == 0)) {
      native_sub_4327ec();
    }
    uVar4 = native_NGUITools__GetActive_72d02c
                      (**(undefined8 **)(_NGUITools_TypeInfo_12d53c8 + 0xb8));
    if ((uVar4 & 1) == 0) goto LAB_0072ca44;
  }
  else {
LAB_0072ca44:
    uVar6 = _UnityEngine_AudioListener_var_12d12e8;
    if (((*(byte *)(_System_Type_TypeInfo_12d6340 + 0x133) >> 2 & 1) != 0) &&
       (*(int *)(_System_Type_TypeInfo_12d6340 + 0xe0) == 0)) {
      native_sub_4327ec();
    }
    uVar6 = native_System_Type__GetTypeFromHandle_b0fb24(uVar6,0);
    if (((*(byte *)(_UnityEngine_Object_TypeInfo_12d54e0 + 0x133) >> 2 & 1) != 0) &&
       (*(int *)(_UnityEngine_Object_TypeInfo_12d54e0 + 0xe0) == 0)) {
      native_sub_4327ec(_UnityEngine_Object_TypeInfo_12d54e0);
    }
    uVar6 = native_UnityEngine_Object__FindObjectsOfType_8ea6cc(uVar6,0);
    lVar2 = native_sub_4327f8(uVar6,_UnityEngine_AudioListener___TypeInfo_12d3020);
    if ((lVar2 != 0) && (0 < (int)*(ulong *)(lVar2 + 0x18))) {
      uVar4 = 0;
      uVar5 = *(ulong *)(lVar2 + 0x18) & 0xffffffff;
      do {
        if (uVar5 <= uVar4) {
LAB_0072cfa0:
          uVar7 = native_sub_43283c();
                    /* WARNING: Subroutine does not return */
          native_sub_4327dc(uVar7,0);
        }
        uVar6 = *(undefined8 *)(lVar2 + 0x20 + uVar4 * 8);
        if (((*(byte *)(_NGUITools_TypeInfo_12d53c8 + 0x133) >> 2 & 1) != 0) &&
           (*(int *)(_NGUITools_TypeInfo_12d53c8 + 0xe0) == 0)) {
          native_sub_4327ec();
        }
        uVar5 = native_NGUITools__GetActive_72d02c(uVar6);
        if ((uVar5 & 1) != 0) {
          if (*(uint *)(lVar2 + 0x18) <= (uint)uVar4) goto LAB_0072cfa0;
          uVar6 = *(undefined8 *)(lVar2 + 0x20 + uVar4 * 8);
          if (((*(byte *)(_NGUITools_TypeInfo_12d53c8 + 0x133) >> 2 & 1) != 0) &&
             (*(int *)(_NGUITools_TypeInfo_12d53c8 + 0xe0) == 0)) {
            native_sub_4327ec();
          }
          puVar1 = *(undefined8 **)(_NGUITools_TypeInfo_12d53c8 + 0xb8);
          *puVar1 = uVar6;
          native_sub_4326e0(puVar1,uVar6);
          break;
        }
        uVar5 = (ulong)*(uint *)(lVar2 + 0x18);
        uVar4 = uVar4 + 1;
      } while ((long)uVar4 < (long)(int)*(uint *)(lVar2 + 0x18));
    }
    if (((*(byte *)(_NGUITools_TypeInfo_12d53c8 + 0x133) >> 2 & 1) != 0) &&
       (*(int *)(_NGUITools_TypeInfo_12d53c8 + 0xe0) == 0)) {
      native_sub_4327ec();
    }
    uVar6 = **(undefined8 **)(_NGUITools_TypeInfo_12d53c8 + 0xb8);
    if (((*(byte *)(_UnityEngine_Object_TypeInfo_12d54e0 + 0x133) >> 2 & 1) != 0) &&
       (*(int *)(_UnityEngine_Object_TypeInfo_12d54e0 + 0xe0) == 0)) {
      native_sub_4327ec(_UnityEngine_Object_TypeInfo_12d54e0);
    }
    uVar4 = native_UnityEngine_Object__op_Equality_8e9a3c(uVar6,0,0);
    if ((uVar4 & 1) != 0) {
      plVar3 = (long *)native_UnityEngine_Camera__get_main_8d93c0(0);
      if (((*(byte *)(_UnityEngine_Object_TypeInfo_12d54e0 + 0x133) >> 2 & 1) != 0) &&
         (*(int *)(_UnityEngine_Object_TypeInfo_12d54e0 + 0xe0) == 0)) {
        native_sub_4327ec(_UnityEngine_Object_TypeInfo_12d54e0);
      }
      uVar4 = native_UnityEngine_Object__op_Equality_8e9a3c(plVar3,0,0);
      uVar6 = _UnityEngine_Camera_var_12d1350;
      if ((uVar4 & 1) != 0) {
        if (((*(byte *)(_System_Type_TypeInfo_12d6340 + 0x133) >> 2 & 1) != 0) &&
           (*(int *)(_System_Type_TypeInfo_12d6340 + 0xe0) == 0)) {
          native_sub_4327ec();
        }
        uVar6 = native_System_Type__GetTypeFromHandle_b0fb24(uVar6,0);
        if (((*(byte *)(_UnityEngine_Object_TypeInfo_12d54e0 + 0x133) >> 2 & 1) != 0) &&
           (*(int *)(_UnityEngine_Object_TypeInfo_12d54e0 + 0xe0) == 0)) {
          native_sub_4327ec(_UnityEngine_Object_TypeInfo_12d54e0);
        }
        plVar3 = (long *)native_UnityEngine_Object__FindObjectOfType_8ea870(uVar6,0);
        if (plVar3 == (long *)0x0) {
          plVar3 = (long *)0x0;
        }
        else if (*plVar3 != _UnityEngine_Camera_TypeInfo_12d3cf0) {
          plVar3 = (long *)0x0;
        }
      }
      if (((*(byte *)(_UnityEngine_Object_TypeInfo_12d54e0 + 0x133) >> 2 & 1) != 0) &&
         (*(int *)(_UnityEngine_Object_TypeInfo_12d54e0 + 0xe0) == 0)) {
        native_sub_4327ec();
      }
      uVar4 = native_UnityEngine_Object__op_Inequality_8d76fc(plVar3,0,0);
      if ((uVar4 & 1) != 0) {
        if ((plVar3 == (long *)0x0) ||
           (lVar2 = native_UnityEngine_Component__get_gameObject_8da66c(plVar3,0), lVar2 == 0))
        goto LAB_0072cfac;
        uVar6 = native_UnityEngine_GameObject__AddComponent_ActiveAnimation__4a2118
                          (lVar2,
                           _Method_UnityEngine_GameObject_AddComponent_AudioListener____12e4748);
        if (((*(byte *)(_NGUITools_TypeInfo_12d53c8 + 0x133) >> 2 & 1) != 0) &&
           (*(int *)(_NGUITools_TypeInfo_12d53c8 + 0xe0) == 0)) {
          native_sub_4327ec(_NGUITools_TypeInfo_12d53c8);
        }
        puVar1 = *(undefined8 **)(_NGUITools_TypeInfo_12d53c8 + 0xb8);
        *puVar1 = uVar6;
        native_sub_4326e0(puVar1,uVar6);
      }
    }
  }
  if (((*(byte *)(_NGUITools_TypeInfo_12d53c8 + 0x133) >> 2 & 1) != 0) &&
     (*(int *)(_NGUITools_TypeInfo_12d53c8 + 0xe0) == 0)) {
    native_sub_4327ec();
  }
  uVar6 = **(undefined8 **)(_NGUITools_TypeInfo_12d53c8 + 0xb8);
  if (((*(byte *)(_UnityEngine_Object_TypeInfo_12d54e0 + 0x133) >> 2 & 1) != 0) &&
     (*(int *)(_UnityEngine_Object_TypeInfo_12d54e0 + 0xe0) == 0)) {
    native_sub_4327ec(_UnityEngine_Object_TypeInfo_12d54e0);
  }
  uVar4 = native_UnityEngine_Object__op_Inequality_8d76fc(uVar6,0,0);
  if ((uVar4 & 1) == 0) {
    return 0;
  }
  if (((*(byte *)(_NGUITools_TypeInfo_12d53c8 + 0x133) >> 2 & 1) != 0) &&
     (*(int *)(_NGUITools_TypeInfo_12d53c8 + 0xe0) == 0)) {
    native_sub_4327ec();
  }
  if (**(long **)(_NGUITools_TypeInfo_12d53c8 + 0xb8) != 0) {
    uVar4 = native_UnityEngine_Behaviour__get_enabled_8d7acc
                      (**(long **)(_NGUITools_TypeInfo_12d53c8 + 0xb8),0);
    if ((uVar4 & 1) == 0) {
      return 0;
    }
    if (((*(byte *)(_NGUITools_TypeInfo_12d53c8 + 0x133) >> 2 & 1) != 0) &&
       (*(int *)(_NGUITools_TypeInfo_12d53c8 + 0xe0) == 0)) {
      native_sub_4327ec();
    }
    if (**(long **)(_NGUITools_TypeInfo_12d53c8 + 0xb8) != 0) {
      native_UnityEngine_Component__get_gameObject_8da66c
                (**(long **)(_NGUITools_TypeInfo_12d53c8 + 0xb8),0);
      uVar4 = native_NGUITools__GetActive_72d0d4();
      if ((uVar4 & 1) == 0) {
        return 0;
      }
      if (((*(byte *)(_NGUITools_TypeInfo_12d53c8 + 0x133) >> 2 & 1) != 0) &&
         (*(int *)(_NGUITools_TypeInfo_12d53c8 + 0xe0) == 0)) {
        native_sub_4327ec();
      }
      uVar6 = *(undefined8 *)(*(long *)(_NGUITools_TypeInfo_12d53c8 + 0xb8) + 8);
      if (((*(byte *)(_UnityEngine_Object_TypeInfo_12d54e0 + 0x133) >> 2 & 1) != 0) &&
         (*(int *)(_UnityEngine_Object_TypeInfo_12d54e0 + 0xe0) == 0)) {
        native_sub_4327ec(_UnityEngine_Object_TypeInfo_12d54e0);
      }
      uVar4 = native_UnityEngine_Object__op_Implicit_8e1b98(uVar6,0);
      if ((uVar4 & 1) == 0) {
        if (((*(byte *)(_NGUITools_TypeInfo_12d53c8 + 0x133) >> 2 & 1) != 0) &&
           (*(int *)(_NGUITools_TypeInfo_12d53c8 + 0xe0) == 0)) {
          native_sub_4327ec();
        }
        if (**(long **)(_NGUITools_TypeInfo_12d53c8 + 0xb8) == 0) goto LAB_0072cfac;
        uVar6 = native_UnityEngine_Component__GetComponent_ActiveAnimation__49daec
                          (**(long **)(_NGUITools_TypeInfo_12d53c8 + 0xb8),
                           _Method_UnityEngine_Component_GetComponent_AudioSource____12e2918);
        puVar1 = (undefined8 *)(*(long *)(_NGUITools_TypeInfo_12d53c8 + 0xb8) + 8);
        *puVar1 = uVar6;
        native_sub_4326e0(puVar1,uVar6);
        uVar6 = *(undefined8 *)(*(long *)(_NGUITools_TypeInfo_12d53c8 + 0xb8) + 8);
        if (((*(byte *)(_UnityEngine_Object_TypeInfo_12d54e0 + 0x133) >> 2 & 1) != 0) &&
           (*(int *)(_UnityEngine_Object_TypeInfo_12d54e0 + 0xe0) == 0)) {
          native_sub_4327ec();
        }
        uVar4 = native_UnityEngine_Object__op_Equality_8e9a3c(uVar6,0,0);
        if ((uVar4 & 1) != 0) {
          if (((*(byte *)(_NGUITools_TypeInfo_12d53c8 + 0x133) >> 2 & 1) != 0) &&
             (*(int *)(_NGUITools_TypeInfo_12d53c8 + 0xe0) == 0)) {
            native_sub_4327ec();
          }
          if ((**(long **)(_NGUITools_TypeInfo_12d53c8 + 0xb8) == 0) ||
             (lVar2 = native_UnityEngine_Component__get_gameObject_8da66c
                                (**(long **)(_NGUITools_TypeInfo_12d53c8 + 0xb8),0), lVar2 == 0))
          goto LAB_0072cfac;
          uVar6 = native_UnityEngine_GameObject__AddComponent_ActiveAnimation__4a2118
                            (lVar2,
                             _Method_UnityEngine_GameObject_AddComponent_AudioSource____12e4750);
          puVar1 = (undefined8 *)(*(long *)(_NGUITools_TypeInfo_12d53c8 + 0xb8) + 8);
          *puVar1 = uVar6;
          native_sub_4326e0(puVar1,uVar6);
        }
      }
      if (((*(byte *)(_NGUITools_TypeInfo_12d53c8 + 0x133) >> 2 & 1) != 0) &&
         (*(int *)(_NGUITools_TypeInfo_12d53c8 + 0xe0) == 0)) {
        native_sub_4327ec();
      }
      lVar2 = *(long *)(*(long *)(_NGUITools_TypeInfo_12d53c8 + 0xb8) + 8);
      if (lVar2 != 0) {
        native_UnityEngine_AudioSource__set_priority_dc11dc(lVar2,0x32,0);
        lVar2 = *(long *)(*(long *)(_NGUITools_TypeInfo_12d53c8 + 0xb8) + 8);
        if (lVar2 != 0) {
          native_UnityEngine_AudioSource__set_pitch_dc0fe8(uVar9,lVar2,0);
          lVar2 = *(long *)(*(long *)(_NGUITools_TypeInfo_12d53c8 + 0xb8) + 8);
          if (lVar2 != 0) {
            native_UnityEngine_AudioSource__PlayOneShot_dc10cc(fVar8,lVar2,uVar7,0);
            return *(ulong *)(*(long *)(_NGUITools_TypeInfo_12d53c8 + 0xb8) + 8);
          }
        }
      }
    }
  }
LAB_0072cfac:
                    /* WARNING: Subroutine does not return */
  native_sub_432810();
}



/* UIPlaySound$$OnPress @ 0xaf6ba8
 * void UIPlaySound__OnPress (UIPlaySound_o* __this, bool isPressed, const MethodInfo* method); */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* UIPlaySound$$OnPress
   void UIPlaySound__OnPress (UIPlaySound_o* __this, bool isPressed, const MethodInfo* method); */

ulong native_UIPlaySound__OnPress_af6ba8(ulong param_1,byte param_2)

{
  undefined8 *puVar1;
  long lVar2;
  long *plVar3;
  ulong uVar4;
  ulong uVar5;
  undefined8 uVar6;
  undefined8 uVar7;
  float fVar8;
  undefined4 uVar9;
  float fVar10;
  
  uVar4 = param_1;
  if ((bRam000000000134207a & 1) == 0) {
    uVar4 = native_sub_43273c(&NGUITools_TypeInfo_12d53c8);
    bRam000000000134207a = 1;
  }
  if (*(int *)(param_1 + 0x20) == 3) {
    if (((*(char *)(param_1 + 0x2c) == '\0' ^ param_2) & 1) != 0) {
      return uVar4;
    }
    *(byte *)(param_1 + 0x2c) = param_2 & 1;
  }
  uVar4 = native_UIPlaySound__get_canPlay_af68bc(param_1);
  if ((uVar4 & 1) == 0) {
    return uVar4;
  }
  if ((param_2 & 1) == 0) {
    if (*(int *)(param_1 + 0x20) != 4) {
      return uVar4;
    }
  }
  else if (*(int *)(param_1 + 0x20) != 3) {
    return uVar4;
  }
  uVar7 = *(undefined8 *)(param_1 + 0x18);
  fVar10 = *(float *)(param_1 + 0x24);
  uVar9 = *(undefined4 *)(param_1 + 0x28);
  if (((*(byte *)(_NGUITools_TypeInfo_12d53c8 + 0x133) >> 2 & 1) != 0) &&
     (*(int *)(_NGUITools_TypeInfo_12d53c8 + 0xe0) == 0)) {
    native_sub_4327ec();
  }
  if ((bRam000000000133f584 & 1) == 0) {
    native_sub_43273c(&UnityEngine_AudioListener___TypeInfo_12d3020,0);
    native_sub_43273c(&UnityEngine_AudioListener_var_12d12e8);
    native_sub_43273c(&UnityEngine_Camera_var_12d1350);
    native_sub_43273c(&UnityEngine_Camera_TypeInfo_12d3cf0);
    native_sub_43273c(&Method_UnityEngine_Component_GetComponent_AudioSource____12e2918);
    native_sub_43273c(&Method_UnityEngine_GameObject_AddComponent_AudioListener____12e4748);
    native_sub_43273c(&Method_UnityEngine_GameObject_AddComponent_AudioSource____12e4750);
    native_sub_43273c(&NGUITools_TypeInfo_12d53c8);
    native_sub_43273c(&UnityEngine_Object_TypeInfo_12d54e0);
    native_sub_43273c(&System_Type_TypeInfo_12d6340);
    bRam000000000133f584 = 1;
  }
  fVar8 = (float)native_UnityEngine_Time__get_unscaledTime_770860(0);
  if (((*(byte *)(_NGUITools_TypeInfo_12d53c8 + 0x133) >> 2 & 1) != 0) &&
     (*(int *)(_NGUITools_TypeInfo_12d53c8 + 0xe0) == 0)) {
    native_sub_4327ec();
  }
  uVar6 = *(undefined8 *)(*(long *)(_NGUITools_TypeInfo_12d53c8 + 0xb8) + 0x20);
  if (((*(byte *)(_UnityEngine_Object_TypeInfo_12d54e0 + 0x133) >> 2 & 1) != 0) &&
     (*(int *)(_UnityEngine_Object_TypeInfo_12d54e0 + 0xe0) == 0)) {
    native_sub_4327ec(_UnityEngine_Object_TypeInfo_12d54e0);
  }
  uVar4 = native_UnityEngine_Object__op_Equality_8e9a3c(uVar6,uVar7,0);
  if ((uVar4 & 1) != 0) {
    if (((*(byte *)(_NGUITools_TypeInfo_12d53c8 + 0x133) >> 2 & 1) != 0) &&
       (*(int *)(_NGUITools_TypeInfo_12d53c8 + 0xe0) == 0)) {
      native_sub_4327ec(_NGUITools_TypeInfo_12d53c8);
    }
    if (fVar8 < *(float *)(*(long *)(_NGUITools_TypeInfo_12d53c8 + 0xb8) + 0x18) + 0.1) {
      return 0;
    }
  }
  if (((*(byte *)(_NGUITools_TypeInfo_12d53c8 + 0x133) >> 2 & 1) != 0) &&
     (*(int *)(_NGUITools_TypeInfo_12d53c8 + 0xe0) == 0)) {
    native_sub_4327ec(_NGUITools_TypeInfo_12d53c8);
  }
  puVar1 = (undefined8 *)(*(long *)(_NGUITools_TypeInfo_12d53c8 + 0xb8) + 0x20);
  *puVar1 = uVar7;
  native_sub_4326e0(puVar1,uVar7);
  *(float *)(*(long *)(_NGUITools_TypeInfo_12d53c8 + 0xb8) + 0x18) = fVar8;
  fVar8 = (float)native_NGUITools__get_soundVolume_72c59c();
  fVar8 = fVar8 * fVar10;
  if (((*(byte *)(_UnityEngine_Object_TypeInfo_12d54e0 + 0x133) >> 2 & 1) != 0) &&
     (*(int *)(_UnityEngine_Object_TypeInfo_12d54e0 + 0xe0) == 0)) {
    native_sub_4327ec();
  }
  uVar4 = native_UnityEngine_Object__op_Inequality_8d76fc(uVar7,0,0);
  if (fVar8 <= 0.01) {
    return 0;
  }
  if ((uVar4 & 1) == 0) {
    return 0;
  }
  if (((*(byte *)(_NGUITools_TypeInfo_12d53c8 + 0x133) >> 2 & 1) != 0) &&
     (*(int *)(_NGUITools_TypeInfo_12d53c8 + 0xe0) == 0)) {
    native_sub_4327ec();
  }
  uVar6 = **(undefined8 **)(_NGUITools_TypeInfo_12d53c8 + 0xb8);
  if (((*(byte *)(_UnityEngine_Object_TypeInfo_12d54e0 + 0x133) >> 2 & 1) != 0) &&
     (*(int *)(_UnityEngine_Object_TypeInfo_12d54e0 + 0xe0) == 0)) {
    native_sub_4327ec(_UnityEngine_Object_TypeInfo_12d54e0);
  }
  uVar4 = native_UnityEngine_Object__op_Equality_8e9a3c(uVar6,0,0);
  if ((uVar4 & 1) == 0) {
    if (((*(byte *)(_NGUITools_TypeInfo_12d53c8 + 0x133) >> 2 & 1) != 0) &&
       (*(int *)(_NGUITools_TypeInfo_12d53c8 + 0xe0) == 0)) {
      native_sub_4327ec();
    }
    uVar4 = native_NGUITools__GetActive_72d02c
                      (**(undefined8 **)(_NGUITools_TypeInfo_12d53c8 + 0xb8));
    if ((uVar4 & 1) == 0) goto LAB_0072ca44;
  }
  else {
LAB_0072ca44:
    uVar6 = _UnityEngine_AudioListener_var_12d12e8;
    if (((*(byte *)(_System_Type_TypeInfo_12d6340 + 0x133) >> 2 & 1) != 0) &&
       (*(int *)(_System_Type_TypeInfo_12d6340 + 0xe0) == 0)) {
      native_sub_4327ec();
    }
    uVar6 = native_System_Type__GetTypeFromHandle_b0fb24(uVar6,0);
    if (((*(byte *)(_UnityEngine_Object_TypeInfo_12d54e0 + 0x133) >> 2 & 1) != 0) &&
       (*(int *)(_UnityEngine_Object_TypeInfo_12d54e0 + 0xe0) == 0)) {
      native_sub_4327ec(_UnityEngine_Object_TypeInfo_12d54e0);
    }
    uVar6 = native_UnityEngine_Object__FindObjectsOfType_8ea6cc(uVar6,0);
    lVar2 = native_sub_4327f8(uVar6,_UnityEngine_AudioListener___TypeInfo_12d3020);
    if ((lVar2 != 0) && (0 < (int)*(ulong *)(lVar2 + 0x18))) {
      uVar4 = 0;
      uVar5 = *(ulong *)(lVar2 + 0x18) & 0xffffffff;
      do {
        if (uVar5 <= uVar4) {
LAB_0072cfa0:
          uVar7 = native_sub_43283c();
                    /* WARNING: Subroutine does not return */
          native_sub_4327dc(uVar7,0);
        }
        uVar6 = *(undefined8 *)(lVar2 + 0x20 + uVar4 * 8);
        if (((*(byte *)(_NGUITools_TypeInfo_12d53c8 + 0x133) >> 2 & 1) != 0) &&
           (*(int *)(_NGUITools_TypeInfo_12d53c8 + 0xe0) == 0)) {
          native_sub_4327ec();
        }
        uVar5 = native_NGUITools__GetActive_72d02c(uVar6);
        if ((uVar5 & 1) != 0) {
          if (*(uint *)(lVar2 + 0x18) <= (uint)uVar4) goto LAB_0072cfa0;
          uVar6 = *(undefined8 *)(lVar2 + 0x20 + uVar4 * 8);
          if (((*(byte *)(_NGUITools_TypeInfo_12d53c8 + 0x133) >> 2 & 1) != 0) &&
             (*(int *)(_NGUITools_TypeInfo_12d53c8 + 0xe0) == 0)) {
            native_sub_4327ec();
          }
          puVar1 = *(undefined8 **)(_NGUITools_TypeInfo_12d53c8 + 0xb8);
          *puVar1 = uVar6;
          native_sub_4326e0(puVar1,uVar6);
          break;
        }
        uVar5 = (ulong)*(uint *)(lVar2 + 0x18);
        uVar4 = uVar4 + 1;
      } while ((long)uVar4 < (long)(int)*(uint *)(lVar2 + 0x18));
    }
    if (((*(byte *)(_NGUITools_TypeInfo_12d53c8 + 0x133) >> 2 & 1) != 0) &&
       (*(int *)(_NGUITools_TypeInfo_12d53c8 + 0xe0) == 0)) {
      native_sub_4327ec();
    }
    uVar6 = **(undefined8 **)(_NGUITools_TypeInfo_12d53c8 + 0xb8);
    if (((*(byte *)(_UnityEngine_Object_TypeInfo_12d54e0 + 0x133) >> 2 & 1) != 0) &&
       (*(int *)(_UnityEngine_Object_TypeInfo_12d54e0 + 0xe0) == 0)) {
      native_sub_4327ec(_UnityEngine_Object_TypeInfo_12d54e0);
    }
    uVar4 = native_UnityEngine_Object__op_Equality_8e9a3c(uVar6,0,0);
    if ((uVar4 & 1) != 0) {
      plVar3 = (long *)native_UnityEngine_Camera__get_main_8d93c0(0);
      if (((*(byte *)(_UnityEngine_Object_TypeInfo_12d54e0 + 0x133) >> 2 & 1) != 0) &&
         (*(int *)(_UnityEngine_Object_TypeInfo_12d54e0 + 0xe0) == 0)) {
        native_sub_4327ec(_UnityEngine_Object_TypeInfo_12d54e0);
      }
      uVar4 = native_UnityEngine_Object__op_Equality_8e9a3c(plVar3,0,0);
      uVar6 = _UnityEngine_Camera_var_12d1350;
      if ((uVar4 & 1) != 0) {
        if (((*(byte *)(_System_Type_TypeInfo_12d6340 + 0x133) >> 2 & 1) != 0) &&
           (*(int *)(_System_Type_TypeInfo_12d6340 + 0xe0) == 0)) {
          native_sub_4327ec();
        }
        uVar6 = native_System_Type__GetTypeFromHandle_b0fb24(uVar6,0);
        if (((*(byte *)(_UnityEngine_Object_TypeInfo_12d54e0 + 0x133) >> 2 & 1) != 0) &&
           (*(int *)(_UnityEngine_Object_TypeInfo_12d54e0 + 0xe0) == 0)) {
          native_sub_4327ec(_UnityEngine_Object_TypeInfo_12d54e0);
        }
        plVar3 = (long *)native_UnityEngine_Object__FindObjectOfType_8ea870(uVar6,0);
        if (plVar3 == (long *)0x0) {
          plVar3 = (long *)0x0;
        }
        else if (*plVar3 != _UnityEngine_Camera_TypeInfo_12d3cf0) {
          plVar3 = (long *)0x0;
        }
      }
      if (((*(byte *)(_UnityEngine_Object_TypeInfo_12d54e0 + 0x133) >> 2 & 1) != 0) &&
         (*(int *)(_UnityEngine_Object_TypeInfo_12d54e0 + 0xe0) == 0)) {
        native_sub_4327ec();
      }
      uVar4 = native_UnityEngine_Object__op_Inequality_8d76fc(plVar3,0,0);
      if ((uVar4 & 1) != 0) {
        if ((plVar3 == (long *)0x0) ||
           (lVar2 = native_UnityEngine_Component__get_gameObject_8da66c(plVar3,0), lVar2 == 0))
        goto LAB_0072cfac;
        uVar6 = native_UnityEngine_GameObject__AddComponent_ActiveAnimation__4a2118
                          (lVar2,
                           _Method_UnityEngine_GameObject_AddComponent_AudioListener____12e4748);
        if (((*(byte *)(_NGUITools_TypeInfo_12d53c8 + 0x133) >> 2 & 1) != 0) &&
           (*(int *)(_NGUITools_TypeInfo_12d53c8 + 0xe0) == 0)) {
          native_sub_4327ec(_NGUITools_TypeInfo_12d53c8);
        }
        puVar1 = *(undefined8 **)(_NGUITools_TypeInfo_12d53c8 + 0xb8);
        *puVar1 = uVar6;
        native_sub_4326e0(puVar1,uVar6);
      }
    }
  }
  if (((*(byte *)(_NGUITools_TypeInfo_12d53c8 + 0x133) >> 2 & 1) != 0) &&
     (*(int *)(_NGUITools_TypeInfo_12d53c8 + 0xe0) == 0)) {
    native_sub_4327ec();
  }
  uVar6 = **(undefined8 **)(_NGUITools_TypeInfo_12d53c8 + 0xb8);
  if (((*(byte *)(_UnityEngine_Object_TypeInfo_12d54e0 + 0x133) >> 2 & 1) != 0) &&
     (*(int *)(_UnityEngine_Object_TypeInfo_12d54e0 + 0xe0) == 0)) {
    native_sub_4327ec(_UnityEngine_Object_TypeInfo_12d54e0);
  }
  uVar4 = native_UnityEngine_Object__op_Inequality_8d76fc(uVar6,0,0);
  if ((uVar4 & 1) == 0) {
    return 0;
  }
  if (((*(byte *)(_NGUITools_TypeInfo_12d53c8 + 0x133) >> 2 & 1) != 0) &&
     (*(int *)(_NGUITools_TypeInfo_12d53c8 + 0xe0) == 0)) {
    native_sub_4327ec();
  }
  if (**(long **)(_NGUITools_TypeInfo_12d53c8 + 0xb8) != 0) {
    uVar4 = native_UnityEngine_Behaviour__get_enabled_8d7acc
                      (**(long **)(_NGUITools_TypeInfo_12d53c8 + 0xb8),0);
    if ((uVar4 & 1) == 0) {
      return 0;
    }
    if (((*(byte *)(_NGUITools_TypeInfo_12d53c8 + 0x133) >> 2 & 1) != 0) &&
       (*(int *)(_NGUITools_TypeInfo_12d53c8 + 0xe0) == 0)) {
      native_sub_4327ec();
    }
    if (**(long **)(_NGUITools_TypeInfo_12d53c8 + 0xb8) != 0) {
      native_UnityEngine_Component__get_gameObject_8da66c
                (**(long **)(_NGUITools_TypeInfo_12d53c8 + 0xb8),0);
      uVar4 = native_NGUITools__GetActive_72d0d4();
      if ((uVar4 & 1) == 0) {
        return 0;
      }
      if (((*(byte *)(_NGUITools_TypeInfo_12d53c8 + 0x133) >> 2 & 1) != 0) &&
         (*(int *)(_NGUITools_TypeInfo_12d53c8 + 0xe0) == 0)) {
        native_sub_4327ec();
      }
      uVar6 = *(undefined8 *)(*(long *)(_NGUITools_TypeInfo_12d53c8 + 0xb8) + 8);
      if (((*(byte *)(_UnityEngine_Object_TypeInfo_12d54e0 + 0x133) >> 2 & 1) != 0) &&
         (*(int *)(_UnityEngine_Object_TypeInfo_12d54e0 + 0xe0) == 0)) {
        native_sub_4327ec(_UnityEngine_Object_TypeInfo_12d54e0);
      }
      uVar4 = native_UnityEngine_Object__op_Implicit_8e1b98(uVar6,0);
      if ((uVar4 & 1) == 0) {
        if (((*(byte *)(_NGUITools_TypeInfo_12d53c8 + 0x133) >> 2 & 1) != 0) &&
           (*(int *)(_NGUITools_TypeInfo_12d53c8 + 0xe0) == 0)) {
          native_sub_4327ec();
        }
        if (**(long **)(_NGUITools_TypeInfo_12d53c8 + 0xb8) == 0) goto LAB_0072cfac;
        uVar6 = native_UnityEngine_Component__GetComponent_ActiveAnimation__49daec
                          (**(long **)(_NGUITools_TypeInfo_12d53c8 + 0xb8),
                           _Method_UnityEngine_Component_GetComponent_AudioSource____12e2918);
        puVar1 = (undefined8 *)(*(long *)(_NGUITools_TypeInfo_12d53c8 + 0xb8) + 8);
        *puVar1 = uVar6;
        native_sub_4326e0(puVar1,uVar6);
        uVar6 = *(undefined8 *)(*(long *)(_NGUITools_TypeInfo_12d53c8 + 0xb8) + 8);
        if (((*(byte *)(_UnityEngine_Object_TypeInfo_12d54e0 + 0x133) >> 2 & 1) != 0) &&
           (*(int *)(_UnityEngine_Object_TypeInfo_12d54e0 + 0xe0) == 0)) {
          native_sub_4327ec();
        }
        uVar4 = native_UnityEngine_Object__op_Equality_8e9a3c(uVar6,0,0);
        if ((uVar4 & 1) != 0) {
          if (((*(byte *)(_NGUITools_TypeInfo_12d53c8 + 0x133) >> 2 & 1) != 0) &&
             (*(int *)(_NGUITools_TypeInfo_12d53c8 + 0xe0) == 0)) {
            native_sub_4327ec();
          }
          if ((**(long **)(_NGUITools_TypeInfo_12d53c8 + 0xb8) == 0) ||
             (lVar2 = native_UnityEngine_Component__get_gameObject_8da66c
                                (**(long **)(_NGUITools_TypeInfo_12d53c8 + 0xb8),0), lVar2 == 0))
          goto LAB_0072cfac;
          uVar6 = native_UnityEngine_GameObject__AddComponent_ActiveAnimation__4a2118
                            (lVar2,
                             _Method_UnityEngine_GameObject_AddComponent_AudioSource____12e4750);
          puVar1 = (undefined8 *)(*(long *)(_NGUITools_TypeInfo_12d53c8 + 0xb8) + 8);
          *puVar1 = uVar6;
          native_sub_4326e0(puVar1,uVar6);
        }
      }
      if (((*(byte *)(_NGUITools_TypeInfo_12d53c8 + 0x133) >> 2 & 1) != 0) &&
         (*(int *)(_NGUITools_TypeInfo_12d53c8 + 0xe0) == 0)) {
        native_sub_4327ec();
      }
      lVar2 = *(long *)(*(long *)(_NGUITools_TypeInfo_12d53c8 + 0xb8) + 8);
      if (lVar2 != 0) {
        native_UnityEngine_AudioSource__set_priority_dc11dc(lVar2,0x32,0);
        lVar2 = *(long *)(*(long *)(_NGUITools_TypeInfo_12d53c8 + 0xb8) + 8);
        if (lVar2 != 0) {
          native_UnityEngine_AudioSource__set_pitch_dc0fe8(uVar9,lVar2,0);
          lVar2 = *(long *)(*(long *)(_NGUITools_TypeInfo_12d53c8 + 0xb8) + 8);
          if (lVar2 != 0) {
            native_UnityEngine_AudioSource__PlayOneShot_dc10cc(fVar8,lVar2,uVar7,0);
            return *(ulong *)(*(long *)(_NGUITools_TypeInfo_12d53c8 + 0xb8) + 8);
          }
        }
      }
    }
  }
LAB_0072cfac:
                    /* WARNING: Subroutine does not return */
  native_sub_432810();
}



/* UIPlaySound$$OnClick @ 0xaf6c90
 * void UIPlaySound__OnClick (UIPlaySound_o* __this, const MethodInfo* method); */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* UIPlaySound$$OnClick
   void UIPlaySound__OnClick (UIPlaySound_o* __this, const MethodInfo* method); */

ulong native_UIPlaySound__OnClick_af6c90(long param_1)

{
  undefined8 *puVar1;
  long lVar2;
  long *plVar3;
  ulong uVar4;
  ulong uVar5;
  undefined8 uVar6;
  undefined8 uVar7;
  float fVar8;
  undefined4 uVar9;
  float fVar10;
  
  if ((bRam000000000134207b & 1) == 0) {
    native_sub_43273c(&NGUITools_TypeInfo_12d53c8);
    bRam000000000134207b = 1;
  }
  uVar4 = native_UIPlaySound__get_canPlay_af68bc(param_1);
  if (((uVar4 & 1) == 0) || (*(int *)(param_1 + 0x20) != 0)) {
    return uVar4;
  }
  uVar7 = *(undefined8 *)(param_1 + 0x18);
  fVar10 = *(float *)(param_1 + 0x24);
  uVar9 = *(undefined4 *)(param_1 + 0x28);
  if (((*(byte *)(_NGUITools_TypeInfo_12d53c8 + 0x133) >> 2 & 1) != 0) &&
     (*(int *)(_NGUITools_TypeInfo_12d53c8 + 0xe0) == 0)) {
    native_sub_4327ec();
  }
  if ((bRam000000000133f584 & 1) == 0) {
    native_sub_43273c(&UnityEngine_AudioListener___TypeInfo_12d3020,0);
    native_sub_43273c(&UnityEngine_AudioListener_var_12d12e8);
    native_sub_43273c(&UnityEngine_Camera_var_12d1350);
    native_sub_43273c(&UnityEngine_Camera_TypeInfo_12d3cf0);
    native_sub_43273c(&Method_UnityEngine_Component_GetComponent_AudioSource____12e2918);
    native_sub_43273c(&Method_UnityEngine_GameObject_AddComponent_AudioListener____12e4748);
    native_sub_43273c(&Method_UnityEngine_GameObject_AddComponent_AudioSource____12e4750);
    native_sub_43273c(&NGUITools_TypeInfo_12d53c8);
    native_sub_43273c(&UnityEngine_Object_TypeInfo_12d54e0);
    native_sub_43273c(&System_Type_TypeInfo_12d6340);
    bRam000000000133f584 = 1;
  }
  fVar8 = (float)native_UnityEngine_Time__get_unscaledTime_770860(0);
  if (((*(byte *)(_NGUITools_TypeInfo_12d53c8 + 0x133) >> 2 & 1) != 0) &&
     (*(int *)(_NGUITools_TypeInfo_12d53c8 + 0xe0) == 0)) {
    native_sub_4327ec();
  }
  uVar6 = *(undefined8 *)(*(long *)(_NGUITools_TypeInfo_12d53c8 + 0xb8) + 0x20);
  if (((*(byte *)(_UnityEngine_Object_TypeInfo_12d54e0 + 0x133) >> 2 & 1) != 0) &&
     (*(int *)(_UnityEngine_Object_TypeInfo_12d54e0 + 0xe0) == 0)) {
    native_sub_4327ec(_UnityEngine_Object_TypeInfo_12d54e0);
  }
  uVar4 = native_UnityEngine_Object__op_Equality_8e9a3c(uVar6,uVar7,0);
  if ((uVar4 & 1) != 0) {
    if (((*(byte *)(_NGUITools_TypeInfo_12d53c8 + 0x133) >> 2 & 1) != 0) &&
       (*(int *)(_NGUITools_TypeInfo_12d53c8 + 0xe0) == 0)) {
      native_sub_4327ec(_NGUITools_TypeInfo_12d53c8);
    }
    if (fVar8 < *(float *)(*(long *)(_NGUITools_TypeInfo_12d53c8 + 0xb8) + 0x18) + 0.1) {
      return 0;
    }
  }
  if (((*(byte *)(_NGUITools_TypeInfo_12d53c8 + 0x133) >> 2 & 1) != 0) &&
     (*(int *)(_NGUITools_TypeInfo_12d53c8 + 0xe0) == 0)) {
    native_sub_4327ec(_NGUITools_TypeInfo_12d53c8);
  }
  puVar1 = (undefined8 *)(*(long *)(_NGUITools_TypeInfo_12d53c8 + 0xb8) + 0x20);
  *puVar1 = uVar7;
  native_sub_4326e0(puVar1,uVar7);
  *(float *)(*(long *)(_NGUITools_TypeInfo_12d53c8 + 0xb8) + 0x18) = fVar8;
  fVar8 = (float)native_NGUITools__get_soundVolume_72c59c();
  fVar8 = fVar8 * fVar10;
  if (((*(byte *)(_UnityEngine_Object_TypeInfo_12d54e0 + 0x133) >> 2 & 1) != 0) &&
     (*(int *)(_UnityEngine_Object_TypeInfo_12d54e0 + 0xe0) == 0)) {
    native_sub_4327ec();
  }
  uVar4 = native_UnityEngine_Object__op_Inequality_8d76fc(uVar7,0,0);
  if (fVar8 <= 0.01) {
    return 0;
  }
  if ((uVar4 & 1) == 0) {
    return 0;
  }
  if (((*(byte *)(_NGUITools_TypeInfo_12d53c8 + 0x133) >> 2 & 1) != 0) &&
     (*(int *)(_NGUITools_TypeInfo_12d53c8 + 0xe0) == 0)) {
    native_sub_4327ec();
  }
  uVar6 = **(undefined8 **)(_NGUITools_TypeInfo_12d53c8 + 0xb8);
  if (((*(byte *)(_UnityEngine_Object_TypeInfo_12d54e0 + 0x133) >> 2 & 1) != 0) &&
     (*(int *)(_UnityEngine_Object_TypeInfo_12d54e0 + 0xe0) == 0)) {
    native_sub_4327ec(_UnityEngine_Object_TypeInfo_12d54e0);
  }
  uVar4 = native_UnityEngine_Object__op_Equality_8e9a3c(uVar6,0,0);
  if ((uVar4 & 1) == 0) {
    if (((*(byte *)(_NGUITools_TypeInfo_12d53c8 + 0x133) >> 2 & 1) != 0) &&
       (*(int *)(_NGUITools_TypeInfo_12d53c8 + 0xe0) == 0)) {
      native_sub_4327ec();
    }
    uVar4 = native_NGUITools__GetActive_72d02c
                      (**(undefined8 **)(_NGUITools_TypeInfo_12d53c8 + 0xb8));
    if ((uVar4 & 1) == 0) goto LAB_0072ca44;
  }
  else {
LAB_0072ca44:
    uVar6 = _UnityEngine_AudioListener_var_12d12e8;
    if (((*(byte *)(_System_Type_TypeInfo_12d6340 + 0x133) >> 2 & 1) != 0) &&
       (*(int *)(_System_Type_TypeInfo_12d6340 + 0xe0) == 0)) {
      native_sub_4327ec();
    }
    uVar6 = native_System_Type__GetTypeFromHandle_b0fb24(uVar6,0);
    if (((*(byte *)(_UnityEngine_Object_TypeInfo_12d54e0 + 0x133) >> 2 & 1) != 0) &&
       (*(int *)(_UnityEngine_Object_TypeInfo_12d54e0 + 0xe0) == 0)) {
      native_sub_4327ec(_UnityEngine_Object_TypeInfo_12d54e0);
    }
    uVar6 = native_UnityEngine_Object__FindObjectsOfType_8ea6cc(uVar6,0);
    lVar2 = native_sub_4327f8(uVar6,_UnityEngine_AudioListener___TypeInfo_12d3020);
    if ((lVar2 != 0) && (0 < (int)*(ulong *)(lVar2 + 0x18))) {
      uVar4 = 0;
      uVar5 = *(ulong *)(lVar2 + 0x18) & 0xffffffff;
      do {
        if (uVar5 <= uVar4) {
LAB_0072cfa0:
          uVar7 = native_sub_43283c();
                    /* WARNING: Subroutine does not return */
          native_sub_4327dc(uVar7,0);
        }
        uVar6 = *(undefined8 *)(lVar2 + 0x20 + uVar4 * 8);
        if (((*(byte *)(_NGUITools_TypeInfo_12d53c8 + 0x133) >> 2 & 1) != 0) &&
           (*(int *)(_NGUITools_TypeInfo_12d53c8 + 0xe0) == 0)) {
          native_sub_4327ec();
        }
        uVar5 = native_NGUITools__GetActive_72d02c(uVar6);
        if ((uVar5 & 1) != 0) {
          if (*(uint *)(lVar2 + 0x18) <= (uint)uVar4) goto LAB_0072cfa0;
          uVar6 = *(undefined8 *)(lVar2 + 0x20 + uVar4 * 8);
          if (((*(byte *)(_NGUITools_TypeInfo_12d53c8 + 0x133) >> 2 & 1) != 0) &&
             (*(int *)(_NGUITools_TypeInfo_12d53c8 + 0xe0) == 0)) {
            native_sub_4327ec();
          }
          puVar1 = *(undefined8 **)(_NGUITools_TypeInfo_12d53c8 + 0xb8);
          *puVar1 = uVar6;
          native_sub_4326e0(puVar1,uVar6);
          break;
        }
        uVar5 = (ulong)*(uint *)(lVar2 + 0x18);
        uVar4 = uVar4 + 1;
      } while ((long)uVar4 < (long)(int)*(uint *)(lVar2 + 0x18));
    }
    if (((*(byte *)(_NGUITools_TypeInfo_12d53c8 + 0x133) >> 2 & 1) != 0) &&
       (*(int *)(_NGUITools_TypeInfo_12d53c8 + 0xe0) == 0)) {
      native_sub_4327ec();
    }
    uVar6 = **(undefined8 **)(_NGUITools_TypeInfo_12d53c8 + 0xb8);
    if (((*(byte *)(_UnityEngine_Object_TypeInfo_12d54e0 + 0x133) >> 2 & 1) != 0) &&
       (*(int *)(_UnityEngine_Object_TypeInfo_12d54e0 + 0xe0) == 0)) {
      native_sub_4327ec(_UnityEngine_Object_TypeInfo_12d54e0);
    }
    uVar4 = native_UnityEngine_Object__op_Equality_8e9a3c(uVar6,0,0);
    if ((uVar4 & 1) != 0) {
      plVar3 = (long *)native_UnityEngine_Camera__get_main_8d93c0(0);
      if (((*(byte *)(_UnityEngine_Object_TypeInfo_12d54e0 + 0x133) >> 2 & 1) != 0) &&
         (*(int *)(_UnityEngine_Object_TypeInfo_12d54e0 + 0xe0) == 0)) {
        native_sub_4327ec(_UnityEngine_Object_TypeInfo_12d54e0);
      }
      uVar4 = native_UnityEngine_Object__op_Equality_8e9a3c(plVar3,0,0);
      uVar6 = _UnityEngine_Camera_var_12d1350;
      if ((uVar4 & 1) != 0) {
        if (((*(byte *)(_System_Type_TypeInfo_12d6340 + 0x133) >> 2 & 1) != 0) &&
           (*(int *)(_System_Type_TypeInfo_12d6340 + 0xe0) == 0)) {
          native_sub_4327ec();
        }
        uVar6 = native_System_Type__GetTypeFromHandle_b0fb24(uVar6,0);
        if (((*(byte *)(_UnityEngine_Object_TypeInfo_12d54e0 + 0x133) >> 2 & 1) != 0) &&
           (*(int *)(_UnityEngine_Object_TypeInfo_12d54e0 + 0xe0) == 0)) {
          native_sub_4327ec(_UnityEngine_Object_TypeInfo_12d54e0);
        }
        plVar3 = (long *)native_UnityEngine_Object__FindObjectOfType_8ea870(uVar6,0);
        if (plVar3 == (long *)0x0) {
          plVar3 = (long *)0x0;
        }
        else if (*plVar3 != _UnityEngine_Camera_TypeInfo_12d3cf0) {
          plVar3 = (long *)0x0;
        }
      }
      if (((*(byte *)(_UnityEngine_Object_TypeInfo_12d54e0 + 0x133) >> 2 & 1) != 0) &&
         (*(int *)(_UnityEngine_Object_TypeInfo_12d54e0 + 0xe0) == 0)) {
        native_sub_4327ec();
      }
      uVar4 = native_UnityEngine_Object__op_Inequality_8d76fc(plVar3,0,0);
      if ((uVar4 & 1) != 0) {
        if ((plVar3 == (long *)0x0) ||
           (lVar2 = native_UnityEngine_Component__get_gameObject_8da66c(plVar3,0), lVar2 == 0))
        goto LAB_0072cfac;
        uVar6 = native_UnityEngine_GameObject__AddComponent_ActiveAnimation__4a2118
                          (lVar2,
                           _Method_UnityEngine_GameObject_AddComponent_AudioListener____12e4748);
        if (((*(byte *)(_NGUITools_TypeInfo_12d53c8 + 0x133) >> 2 & 1) != 0) &&
           (*(int *)(_NGUITools_TypeInfo_12d53c8 + 0xe0) == 0)) {
          native_sub_4327ec(_NGUITools_TypeInfo_12d53c8);
        }
        puVar1 = *(undefined8 **)(_NGUITools_TypeInfo_12d53c8 + 0xb8);
        *puVar1 = uVar6;
        native_sub_4326e0(puVar1,uVar6);
      }
    }
  }
  if (((*(byte *)(_NGUITools_TypeInfo_12d53c8 + 0x133) >> 2 & 1) != 0) &&
     (*(int *)(_NGUITools_TypeInfo_12d53c8 + 0xe0) == 0)) {
    native_sub_4327ec();
  }
  uVar6 = **(undefined8 **)(_NGUITools_TypeInfo_12d53c8 + 0xb8);
  if (((*(byte *)(_UnityEngine_Object_TypeInfo_12d54e0 + 0x133) >> 2 & 1) != 0) &&
     (*(int *)(_UnityEngine_Object_TypeInfo_12d54e0 + 0xe0) == 0)) {
    native_sub_4327ec(_UnityEngine_Object_TypeInfo_12d54e0);
  }
  uVar4 = native_UnityEngine_Object__op_Inequality_8d76fc(uVar6,0,0);
  if ((uVar4 & 1) == 0) {
    return 0;
  }
  if (((*(byte *)(_NGUITools_TypeInfo_12d53c8 + 0x133) >> 2 & 1) != 0) &&
     (*(int *)(_NGUITools_TypeInfo_12d53c8 + 0xe0) == 0)) {
    native_sub_4327ec();
  }
  if (**(long **)(_NGUITools_TypeInfo_12d53c8 + 0xb8) != 0) {
    uVar4 = native_UnityEngine_Behaviour__get_enabled_8d7acc
                      (**(long **)(_NGUITools_TypeInfo_12d53c8 + 0xb8),0);
    if ((uVar4 & 1) == 0) {
      return 0;
    }
    if (((*(byte *)(_NGUITools_TypeInfo_12d53c8 + 0x133) >> 2 & 1) != 0) &&
       (*(int *)(_NGUITools_TypeInfo_12d53c8 + 0xe0) == 0)) {
      native_sub_4327ec();
    }
    if (**(long **)(_NGUITools_TypeInfo_12d53c8 + 0xb8) != 0) {
      native_UnityEngine_Component__get_gameObject_8da66c
                (**(long **)(_NGUITools_TypeInfo_12d53c8 + 0xb8),0);
      uVar4 = native_NGUITools__GetActive_72d0d4();
      if ((uVar4 & 1) == 0) {
        return 0;
      }
      if (((*(byte *)(_NGUITools_TypeInfo_12d53c8 + 0x133) >> 2 & 1) != 0) &&
         (*(int *)(_NGUITools_TypeInfo_12d53c8 + 0xe0) == 0)) {
        native_sub_4327ec();
      }
      uVar6 = *(undefined8 *)(*(long *)(_NGUITools_TypeInfo_12d53c8 + 0xb8) + 8);
      if (((*(byte *)(_UnityEngine_Object_TypeInfo_12d54e0 + 0x133) >> 2 & 1) != 0) &&
         (*(int *)(_UnityEngine_Object_TypeInfo_12d54e0 + 0xe0) == 0)) {
        native_sub_4327ec(_UnityEngine_Object_TypeInfo_12d54e0);
      }
      uVar4 = native_UnityEngine_Object__op_Implicit_8e1b98(uVar6,0);
      if ((uVar4 & 1) == 0) {
        if (((*(byte *)(_NGUITools_TypeInfo_12d53c8 + 0x133) >> 2 & 1) != 0) &&
           (*(int *)(_NGUITools_TypeInfo_12d53c8 + 0xe0) == 0)) {
          native_sub_4327ec();
        }
        if (**(long **)(_NGUITools_TypeInfo_12d53c8 + 0xb8) == 0) goto LAB_0072cfac;
        uVar6 = native_UnityEngine_Component__GetComponent_ActiveAnimation__49daec
                          (**(long **)(_NGUITools_TypeInfo_12d53c8 + 0xb8),
                           _Method_UnityEngine_Component_GetComponent_AudioSource____12e2918);
        puVar1 = (undefined8 *)(*(long *)(_NGUITools_TypeInfo_12d53c8 + 0xb8) + 8);
        *puVar1 = uVar6;
        native_sub_4326e0(puVar1,uVar6);
        uVar6 = *(undefined8 *)(*(long *)(_NGUITools_TypeInfo_12d53c8 + 0xb8) + 8);
        if (((*(byte *)(_UnityEngine_Object_TypeInfo_12d54e0 + 0x133) >> 2 & 1) != 0) &&
           (*(int *)(_UnityEngine_Object_TypeInfo_12d54e0 + 0xe0) == 0)) {
          native_sub_4327ec();
        }
        uVar4 = native_UnityEngine_Object__op_Equality_8e9a3c(uVar6,0,0);
        if ((uVar4 & 1) != 0) {
          if (((*(byte *)(_NGUITools_TypeInfo_12d53c8 + 0x133) >> 2 & 1) != 0) &&
             (*(int *)(_NGUITools_TypeInfo_12d53c8 + 0xe0) == 0)) {
            native_sub_4327ec();
          }
          if ((**(long **)(_NGUITools_TypeInfo_12d53c8 + 0xb8) == 0) ||
             (lVar2 = native_UnityEngine_Component__get_gameObject_8da66c
                                (**(long **)(_NGUITools_TypeInfo_12d53c8 + 0xb8),0), lVar2 == 0))
          goto LAB_0072cfac;
          uVar6 = native_UnityEngine_GameObject__AddComponent_ActiveAnimation__4a2118
                            (lVar2,
                             _Method_UnityEngine_GameObject_AddComponent_AudioSource____12e4750);
          puVar1 = (undefined8 *)(*(long *)(_NGUITools_TypeInfo_12d53c8 + 0xb8) + 8);
          *puVar1 = uVar6;
          native_sub_4326e0(puVar1,uVar6);
        }
      }
      if (((*(byte *)(_NGUITools_TypeInfo_12d53c8 + 0x133) >> 2 & 1) != 0) &&
         (*(int *)(_NGUITools_TypeInfo_12d53c8 + 0xe0) == 0)) {
        native_sub_4327ec();
      }
      lVar2 = *(long *)(*(long *)(_NGUITools_TypeInfo_12d53c8 + 0xb8) + 8);
      if (lVar2 != 0) {
        native_UnityEngine_AudioSource__set_priority_dc11dc(lVar2,0x32,0);
        lVar2 = *(long *)(*(long *)(_NGUITools_TypeInfo_12d53c8 + 0xb8) + 8);
        if (lVar2 != 0) {
          native_UnityEngine_AudioSource__set_pitch_dc0fe8(uVar9,lVar2,0);
          lVar2 = *(long *)(*(long *)(_NGUITools_TypeInfo_12d53c8 + 0xb8) + 8);
          if (lVar2 != 0) {
            native_UnityEngine_AudioSource__PlayOneShot_dc10cc(fVar8,lVar2,uVar7,0);
            return *(ulong *)(*(long *)(_NGUITools_TypeInfo_12d53c8 + 0xb8) + 8);
          }
        }
      }
    }
  }
LAB_0072cfac:
                    /* WARNING: Subroutine does not return */
  native_sub_432810();
}



/* UIPlaySound$$OnSelect @ 0xaf6d30
 * void UIPlaySound__OnSelect (UIPlaySound_o* __this, bool isSelected, const MethodInfo* method); */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* UIPlaySound$$OnSelect
   void UIPlaySound__OnSelect (UIPlaySound_o* __this, bool isSelected, const MethodInfo* method); */

ulong native_UIPlaySound__OnSelect_af6d30(ulong param_1,byte param_2)

{
  undefined8 *puVar1;
  long lVar2;
  long *plVar3;
  ulong uVar4;
  ulong uVar5;
  undefined8 uVar6;
  undefined8 uVar7;
  float fVar8;
  undefined4 uVar9;
  float fVar10;
  
  if ((bRam000000000134207c & 1) == 0) {
    native_sub_43273c(&UICamera_TypeInfo_12d6410);
    bRam000000000134207c = 1;
  }
  uVar4 = native_UIPlaySound__get_canPlay_af68bc(param_1);
  if ((uVar4 & 1) == 0) {
    return uVar4;
  }
  if ((param_2 & 1) != 0) {
    if (((*(byte *)(_UICamera_TypeInfo_12d6410 + 0x133) >> 2 & 1) != 0) &&
       (*(int *)(_UICamera_TypeInfo_12d6410 + 0xe0) == 0)) {
      native_sub_4327ec();
    }
    uVar4 = native_UICamera__get_currentScheme_c92518(0);
    if ((int)uVar4 != 2) {
      return uVar4;
    }
  }
  uVar4 = param_1;
  if ((bRam0000000001342079 & 1) == 0) {
    uVar4 = native_sub_43273c(&NGUITools_TypeInfo_12d53c8);
    bRam0000000001342079 = 1;
  }
  if (*(int *)(param_1 + 0x20) == 1) {
    if ((*(char *)(param_1 + 0x2c) == '\0') != (bool)(param_2 & 1)) {
      return uVar4;
    }
    *(byte *)(param_1 + 0x2c) = param_2 & 1;
  }
  uVar4 = native_UIPlaySound__get_canPlay_af68bc(param_1);
  if ((uVar4 & 1) == 0) {
    return uVar4;
  }
  if ((param_2 & 1) == 0) {
    if (*(int *)(param_1 + 0x20) != 2) {
      return uVar4;
    }
  }
  else if (*(int *)(param_1 + 0x20) != 1) {
    return uVar4;
  }
  uVar7 = *(undefined8 *)(param_1 + 0x18);
  fVar10 = *(float *)(param_1 + 0x24);
  uVar9 = *(undefined4 *)(param_1 + 0x28);
  if (((*(byte *)(_NGUITools_TypeInfo_12d53c8 + 0x133) >> 2 & 1) != 0) &&
     (*(int *)(_NGUITools_TypeInfo_12d53c8 + 0xe0) == 0)) {
    native_sub_4327ec();
  }
  if ((bRam000000000133f584 & 1) == 0) {
    native_sub_43273c(&UnityEngine_AudioListener___TypeInfo_12d3020,0);
    native_sub_43273c(&UnityEngine_AudioListener_var_12d12e8);
    native_sub_43273c(&UnityEngine_Camera_var_12d1350);
    native_sub_43273c(&UnityEngine_Camera_TypeInfo_12d3cf0);
    native_sub_43273c(&Method_UnityEngine_Component_GetComponent_AudioSource____12e2918);
    native_sub_43273c(&Method_UnityEngine_GameObject_AddComponent_AudioListener____12e4748);
    native_sub_43273c(&Method_UnityEngine_GameObject_AddComponent_AudioSource____12e4750);
    native_sub_43273c(&NGUITools_TypeInfo_12d53c8);
    native_sub_43273c(&UnityEngine_Object_TypeInfo_12d54e0);
    native_sub_43273c(&System_Type_TypeInfo_12d6340);
    bRam000000000133f584 = 1;
  }
  fVar8 = (float)native_UnityEngine_Time__get_unscaledTime_770860(0);
  if (((*(byte *)(_NGUITools_TypeInfo_12d53c8 + 0x133) >> 2 & 1) != 0) &&
     (*(int *)(_NGUITools_TypeInfo_12d53c8 + 0xe0) == 0)) {
    native_sub_4327ec();
  }
  uVar6 = *(undefined8 *)(*(long *)(_NGUITools_TypeInfo_12d53c8 + 0xb8) + 0x20);
  if (((*(byte *)(_UnityEngine_Object_TypeInfo_12d54e0 + 0x133) >> 2 & 1) != 0) &&
     (*(int *)(_UnityEngine_Object_TypeInfo_12d54e0 + 0xe0) == 0)) {
    native_sub_4327ec(_UnityEngine_Object_TypeInfo_12d54e0);
  }
  uVar4 = native_UnityEngine_Object__op_Equality_8e9a3c(uVar6,uVar7,0);
  if ((uVar4 & 1) != 0) {
    if (((*(byte *)(_NGUITools_TypeInfo_12d53c8 + 0x133) >> 2 & 1) != 0) &&
       (*(int *)(_NGUITools_TypeInfo_12d53c8 + 0xe0) == 0)) {
      native_sub_4327ec(_NGUITools_TypeInfo_12d53c8);
    }
    if (fVar8 < *(float *)(*(long *)(_NGUITools_TypeInfo_12d53c8 + 0xb8) + 0x18) + 0.1) {
      return 0;
    }
  }
  if (((*(byte *)(_NGUITools_TypeInfo_12d53c8 + 0x133) >> 2 & 1) != 0) &&
     (*(int *)(_NGUITools_TypeInfo_12d53c8 + 0xe0) == 0)) {
    native_sub_4327ec(_NGUITools_TypeInfo_12d53c8);
  }
  puVar1 = (undefined8 *)(*(long *)(_NGUITools_TypeInfo_12d53c8 + 0xb8) + 0x20);
  *puVar1 = uVar7;
  native_sub_4326e0(puVar1,uVar7);
  *(float *)(*(long *)(_NGUITools_TypeInfo_12d53c8 + 0xb8) + 0x18) = fVar8;
  fVar8 = (float)native_NGUITools__get_soundVolume_72c59c();
  fVar8 = fVar8 * fVar10;
  if (((*(byte *)(_UnityEngine_Object_TypeInfo_12d54e0 + 0x133) >> 2 & 1) != 0) &&
     (*(int *)(_UnityEngine_Object_TypeInfo_12d54e0 + 0xe0) == 0)) {
    native_sub_4327ec();
  }
  uVar4 = native_UnityEngine_Object__op_Inequality_8d76fc(uVar7,0,0);
  if (fVar8 <= 0.01) {
    return 0;
  }
  if ((uVar4 & 1) == 0) {
    return 0;
  }
  if (((*(byte *)(_NGUITools_TypeInfo_12d53c8 + 0x133) >> 2 & 1) != 0) &&
     (*(int *)(_NGUITools_TypeInfo_12d53c8 + 0xe0) == 0)) {
    native_sub_4327ec();
  }
  uVar6 = **(undefined8 **)(_NGUITools_TypeInfo_12d53c8 + 0xb8);
  if (((*(byte *)(_UnityEngine_Object_TypeInfo_12d54e0 + 0x133) >> 2 & 1) != 0) &&
     (*(int *)(_UnityEngine_Object_TypeInfo_12d54e0 + 0xe0) == 0)) {
    native_sub_4327ec(_UnityEngine_Object_TypeInfo_12d54e0);
  }
  uVar4 = native_UnityEngine_Object__op_Equality_8e9a3c(uVar6,0,0);
  if ((uVar4 & 1) == 0) {
    if (((*(byte *)(_NGUITools_TypeInfo_12d53c8 + 0x133) >> 2 & 1) != 0) &&
       (*(int *)(_NGUITools_TypeInfo_12d53c8 + 0xe0) == 0)) {
      native_sub_4327ec();
    }
    uVar4 = native_NGUITools__GetActive_72d02c
                      (**(undefined8 **)(_NGUITools_TypeInfo_12d53c8 + 0xb8));
    if ((uVar4 & 1) == 0) goto LAB_0072ca44;
  }
  else {
LAB_0072ca44:
    uVar6 = _UnityEngine_AudioListener_var_12d12e8;
    if (((*(byte *)(_System_Type_TypeInfo_12d6340 + 0x133) >> 2 & 1) != 0) &&
       (*(int *)(_System_Type_TypeInfo_12d6340 + 0xe0) == 0)) {
      native_sub_4327ec();
    }
    uVar6 = native_System_Type__GetTypeFromHandle_b0fb24(uVar6,0);
    if (((*(byte *)(_UnityEngine_Object_TypeInfo_12d54e0 + 0x133) >> 2 & 1) != 0) &&
       (*(int *)(_UnityEngine_Object_TypeInfo_12d54e0 + 0xe0) == 0)) {
      native_sub_4327ec(_UnityEngine_Object_TypeInfo_12d54e0);
    }
    uVar6 = native_UnityEngine_Object__FindObjectsOfType_8ea6cc(uVar6,0);
    lVar2 = native_sub_4327f8(uVar6,_UnityEngine_AudioListener___TypeInfo_12d3020);
    if ((lVar2 != 0) && (0 < (int)*(ulong *)(lVar2 + 0x18))) {
      uVar4 = 0;
      uVar5 = *(ulong *)(lVar2 + 0x18) & 0xffffffff;
      do {
        if (uVar5 <= uVar4) {
LAB_0072cfa0:
          uVar7 = native_sub_43283c();
                    /* WARNING: Subroutine does not return */
          native_sub_4327dc(uVar7,0);
        }
        uVar6 = *(undefined8 *)(lVar2 + 0x20 + uVar4 * 8);
        if (((*(byte *)(_NGUITools_TypeInfo_12d53c8 + 0x133) >> 2 & 1) != 0) &&
           (*(int *)(_NGUITools_TypeInfo_12d53c8 + 0xe0) == 0)) {
          native_sub_4327ec();
        }
        uVar5 = native_NGUITools__GetActive_72d02c(uVar6);
        if ((uVar5 & 1) != 0) {
          if (*(uint *)(lVar2 + 0x18) <= (uint)uVar4) goto LAB_0072cfa0;
          uVar6 = *(undefined8 *)(lVar2 + 0x20 + uVar4 * 8);
          if (((*(byte *)(_NGUITools_TypeInfo_12d53c8 + 0x133) >> 2 & 1) != 0) &&
             (*(int *)(_NGUITools_TypeInfo_12d53c8 + 0xe0) == 0)) {
            native_sub_4327ec();
          }
          puVar1 = *(undefined8 **)(_NGUITools_TypeInfo_12d53c8 + 0xb8);
          *puVar1 = uVar6;
          native_sub_4326e0(puVar1,uVar6);
          break;
        }
        uVar5 = (ulong)*(uint *)(lVar2 + 0x18);
        uVar4 = uVar4 + 1;
      } while ((long)uVar4 < (long)(int)*(uint *)(lVar2 + 0x18));
    }
    if (((*(byte *)(_NGUITools_TypeInfo_12d53c8 + 0x133) >> 2 & 1) != 0) &&
       (*(int *)(_NGUITools_TypeInfo_12d53c8 + 0xe0) == 0)) {
      native_sub_4327ec();
    }
    uVar6 = **(undefined8 **)(_NGUITools_TypeInfo_12d53c8 + 0xb8);
    if (((*(byte *)(_UnityEngine_Object_TypeInfo_12d54e0 + 0x133) >> 2 & 1) != 0) &&
       (*(int *)(_UnityEngine_Object_TypeInfo_12d54e0 + 0xe0) == 0)) {
      native_sub_4327ec(_UnityEngine_Object_TypeInfo_12d54e0);
    }
    uVar4 = native_UnityEngine_Object__op_Equality_8e9a3c(uVar6,0,0);
    if ((uVar4 & 1) != 0) {
      plVar3 = (long *)native_UnityEngine_Camera__get_main_8d93c0(0);
      if (((*(byte *)(_UnityEngine_Object_TypeInfo_12d54e0 + 0x133) >> 2 & 1) != 0) &&
         (*(int *)(_UnityEngine_Object_TypeInfo_12d54e0 + 0xe0) == 0)) {
        native_sub_4327ec(_UnityEngine_Object_TypeInfo_12d54e0);
      }
      uVar4 = native_UnityEngine_Object__op_Equality_8e9a3c(plVar3,0,0);
      uVar6 = _UnityEngine_Camera_var_12d1350;
      if ((uVar4 & 1) != 0) {
        if (((*(byte *)(_System_Type_TypeInfo_12d6340 + 0x133) >> 2 & 1) != 0) &&
           (*(int *)(_System_Type_TypeInfo_12d6340 + 0xe0) == 0)) {
          native_sub_4327ec();
        }
        uVar6 = native_System_Type__GetTypeFromHandle_b0fb24(uVar6,0);
        if (((*(byte *)(_UnityEngine_Object_TypeInfo_12d54e0 + 0x133) >> 2 & 1) != 0) &&
           (*(int *)(_UnityEngine_Object_TypeInfo_12d54e0 + 0xe0) == 0)) {
          native_sub_4327ec(_UnityEngine_Object_TypeInfo_12d54e0);
        }
        plVar3 = (long *)native_UnityEngine_Object__FindObjectOfType_8ea870(uVar6,0);
        if (plVar3 == (long *)0x0) {
          plVar3 = (long *)0x0;
        }
        else if (*plVar3 != _UnityEngine_Camera_TypeInfo_12d3cf0) {
          plVar3 = (long *)0x0;
        }
      }
      if (((*(byte *)(_UnityEngine_Object_TypeInfo_12d54e0 + 0x133) >> 2 & 1) != 0) &&
         (*(int *)(_UnityEngine_Object_TypeInfo_12d54e0 + 0xe0) == 0)) {
        native_sub_4327ec();
      }
      uVar4 = native_UnityEngine_Object__op_Inequality_8d76fc(plVar3,0,0);
      if ((uVar4 & 1) != 0) {
        if ((plVar3 == (long *)0x0) ||
           (lVar2 = native_UnityEngine_Component__get_gameObject_8da66c(plVar3,0), lVar2 == 0))
        goto LAB_0072cfac;
        uVar6 = native_UnityEngine_GameObject__AddComponent_ActiveAnimation__4a2118
                          (lVar2,
                           _Method_UnityEngine_GameObject_AddComponent_AudioListener____12e4748);
        if (((*(byte *)(_NGUITools_TypeInfo_12d53c8 + 0x133) >> 2 & 1) != 0) &&
           (*(int *)(_NGUITools_TypeInfo_12d53c8 + 0xe0) == 0)) {
          native_sub_4327ec(_NGUITools_TypeInfo_12d53c8);
        }
        puVar1 = *(undefined8 **)(_NGUITools_TypeInfo_12d53c8 + 0xb8);
        *puVar1 = uVar6;
        native_sub_4326e0(puVar1,uVar6);
      }
    }
  }
  if (((*(byte *)(_NGUITools_TypeInfo_12d53c8 + 0x133) >> 2 & 1) != 0) &&
     (*(int *)(_NGUITools_TypeInfo_12d53c8 + 0xe0) == 0)) {
    native_sub_4327ec();
  }
  uVar6 = **(undefined8 **)(_NGUITools_TypeInfo_12d53c8 + 0xb8);
  if (((*(byte *)(_UnityEngine_Object_TypeInfo_12d54e0 + 0x133) >> 2 & 1) != 0) &&
     (*(int *)(_UnityEngine_Object_TypeInfo_12d54e0 + 0xe0) == 0)) {
    native_sub_4327ec(_UnityEngine_Object_TypeInfo_12d54e0);
  }
  uVar4 = native_UnityEngine_Object__op_Inequality_8d76fc(uVar6,0,0);
  if ((uVar4 & 1) == 0) {
    return 0;
  }
  if (((*(byte *)(_NGUITools_TypeInfo_12d53c8 + 0x133) >> 2 & 1) != 0) &&
     (*(int *)(_NGUITools_TypeInfo_12d53c8 + 0xe0) == 0)) {
    native_sub_4327ec();
  }
  if (**(long **)(_NGUITools_TypeInfo_12d53c8 + 0xb8) != 0) {
    uVar4 = native_UnityEngine_Behaviour__get_enabled_8d7acc
                      (**(long **)(_NGUITools_TypeInfo_12d53c8 + 0xb8),0);
    if ((uVar4 & 1) == 0) {
      return 0;
    }
    if (((*(byte *)(_NGUITools_TypeInfo_12d53c8 + 0x133) >> 2 & 1) != 0) &&
       (*(int *)(_NGUITools_TypeInfo_12d53c8 + 0xe0) == 0)) {
      native_sub_4327ec();
    }
    if (**(long **)(_NGUITools_TypeInfo_12d53c8 + 0xb8) != 0) {
      native_UnityEngine_Component__get_gameObject_8da66c
                (**(long **)(_NGUITools_TypeInfo_12d53c8 + 0xb8),0);
      uVar4 = native_NGUITools__GetActive_72d0d4();
      if ((uVar4 & 1) == 0) {
        return 0;
      }
      if (((*(byte *)(_NGUITools_TypeInfo_12d53c8 + 0x133) >> 2 & 1) != 0) &&
         (*(int *)(_NGUITools_TypeInfo_12d53c8 + 0xe0) == 0)) {
        native_sub_4327ec();
      }
      uVar6 = *(undefined8 *)(*(long *)(_NGUITools_TypeInfo_12d53c8 + 0xb8) + 8);
      if (((*(byte *)(_UnityEngine_Object_TypeInfo_12d54e0 + 0x133) >> 2 & 1) != 0) &&
         (*(int *)(_UnityEngine_Object_TypeInfo_12d54e0 + 0xe0) == 0)) {
        native_sub_4327ec(_UnityEngine_Object_TypeInfo_12d54e0);
      }
      uVar4 = native_UnityEngine_Object__op_Implicit_8e1b98(uVar6,0);
      if ((uVar4 & 1) == 0) {
        if (((*(byte *)(_NGUITools_TypeInfo_12d53c8 + 0x133) >> 2 & 1) != 0) &&
           (*(int *)(_NGUITools_TypeInfo_12d53c8 + 0xe0) == 0)) {
          native_sub_4327ec();
        }
        if (**(long **)(_NGUITools_TypeInfo_12d53c8 + 0xb8) == 0) goto LAB_0072cfac;
        uVar6 = native_UnityEngine_Component__GetComponent_ActiveAnimation__49daec
                          (**(long **)(_NGUITools_TypeInfo_12d53c8 + 0xb8),
                           _Method_UnityEngine_Component_GetComponent_AudioSource____12e2918);
        puVar1 = (undefined8 *)(*(long *)(_NGUITools_TypeInfo_12d53c8 + 0xb8) + 8);
        *puVar1 = uVar6;
        native_sub_4326e0(puVar1,uVar6);
        uVar6 = *(undefined8 *)(*(long *)(_NGUITools_TypeInfo_12d53c8 + 0xb8) + 8);
        if (((*(byte *)(_UnityEngine_Object_TypeInfo_12d54e0 + 0x133) >> 2 & 1) != 0) &&
           (*(int *)(_UnityEngine_Object_TypeInfo_12d54e0 + 0xe0) == 0)) {
          native_sub_4327ec();
        }
        uVar4 = native_UnityEngine_Object__op_Equality_8e9a3c(uVar6,0,0);
        if ((uVar4 & 1) != 0) {
          if (((*(byte *)(_NGUITools_TypeInfo_12d53c8 + 0x133) >> 2 & 1) != 0) &&
             (*(int *)(_NGUITools_TypeInfo_12d53c8 + 0xe0) == 0)) {
            native_sub_4327ec();
          }
          if ((**(long **)(_NGUITools_TypeInfo_12d53c8 + 0xb8) == 0) ||
             (lVar2 = native_UnityEngine_Component__get_gameObject_8da66c
                                (**(long **)(_NGUITools_TypeInfo_12d53c8 + 0xb8),0), lVar2 == 0))
          goto LAB_0072cfac;
          uVar6 = native_UnityEngine_GameObject__AddComponent_ActiveAnimation__4a2118
                            (lVar2,
                             _Method_UnityEngine_GameObject_AddComponent_AudioSource____12e4750);
          puVar1 = (undefined8 *)(*(long *)(_NGUITools_TypeInfo_12d53c8 + 0xb8) + 8);
          *puVar1 = uVar6;
          native_sub_4326e0(puVar1,uVar6);
        }
      }
      if (((*(byte *)(_NGUITools_TypeInfo_12d53c8 + 0x133) >> 2 & 1) != 0) &&
         (*(int *)(_NGUITools_TypeInfo_12d53c8 + 0xe0) == 0)) {
        native_sub_4327ec();
      }
      lVar2 = *(long *)(*(long *)(_NGUITools_TypeInfo_12d53c8 + 0xb8) + 8);
      if (lVar2 != 0) {
        native_UnityEngine_AudioSource__set_priority_dc11dc(lVar2,0x32,0);
        lVar2 = *(long *)(*(long *)(_NGUITools_TypeInfo_12d53c8 + 0xb8) + 8);
        if (lVar2 != 0) {
          native_UnityEngine_AudioSource__set_pitch_dc0fe8(uVar9,lVar2,0);
          lVar2 = *(long *)(*(long *)(_NGUITools_TypeInfo_12d53c8 + 0xb8) + 8);
          if (lVar2 != 0) {
            native_UnityEngine_AudioSource__PlayOneShot_dc10cc(fVar8,lVar2,uVar7,0);
            return *(ulong *)(*(long *)(_NGUITools_TypeInfo_12d53c8 + 0xb8) + 8);
          }
        }
      }
    }
  }
LAB_0072cfac:
                    /* WARNING: Subroutine does not return */
  native_sub_432810();
}



/* UIPlaySound$$Play @ 0xaf6dd0
 * void UIPlaySound__Play (UIPlaySound_o* __this, const MethodInfo* method); */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* UIPlaySound$$Play
   void UIPlaySound__Play (UIPlaySound_o* __this, const MethodInfo* method); */

undefined8 native_UIPlaySound__Play_af6dd0(long param_1)

{
  ulong uVar1;
  undefined8 *puVar2;
  long lVar3;
  long *plVar4;
  ulong uVar5;
  undefined8 uVar6;
  undefined8 uVar7;
  float fVar8;
  undefined4 uVar9;
  float fVar10;
  
  if ((bRam000000000134207d & 1) == 0) {
    native_sub_43273c(&NGUITools_TypeInfo_12d53c8);
    bRam000000000134207d = 1;
  }
  uVar7 = *(undefined8 *)(param_1 + 0x18);
  fVar10 = *(float *)(param_1 + 0x24);
  uVar9 = *(undefined4 *)(param_1 + 0x28);
  if (((*(byte *)(_NGUITools_TypeInfo_12d53c8 + 0x133) >> 2 & 1) != 0) &&
     (*(int *)(_NGUITools_TypeInfo_12d53c8 + 0xe0) == 0)) {
    native_sub_4327ec();
  }
  if ((bRam000000000133f584 & 1) == 0) {
    native_sub_43273c(&UnityEngine_AudioListener___TypeInfo_12d3020,0);
    native_sub_43273c(&UnityEngine_AudioListener_var_12d12e8);
    native_sub_43273c(&UnityEngine_Camera_var_12d1350);
    native_sub_43273c(&UnityEngine_Camera_TypeInfo_12d3cf0);
    native_sub_43273c(&Method_UnityEngine_Component_GetComponent_AudioSource____12e2918);
    native_sub_43273c(&Method_UnityEngine_GameObject_AddComponent_AudioListener____12e4748);
    native_sub_43273c(&Method_UnityEngine_GameObject_AddComponent_AudioSource____12e4750);
    native_sub_43273c(&NGUITools_TypeInfo_12d53c8);
    native_sub_43273c(&UnityEngine_Object_TypeInfo_12d54e0);
    native_sub_43273c(&System_Type_TypeInfo_12d6340);
    bRam000000000133f584 = 1;
  }
  fVar8 = (float)native_UnityEngine_Time__get_unscaledTime_770860(0);
  if (((*(byte *)(_NGUITools_TypeInfo_12d53c8 + 0x133) >> 2 & 1) != 0) &&
     (*(int *)(_NGUITools_TypeInfo_12d53c8 + 0xe0) == 0)) {
    native_sub_4327ec();
  }
  uVar6 = *(undefined8 *)(*(long *)(_NGUITools_TypeInfo_12d53c8 + 0xb8) + 0x20);
  if (((*(byte *)(_UnityEngine_Object_TypeInfo_12d54e0 + 0x133) >> 2 & 1) != 0) &&
     (*(int *)(_UnityEngine_Object_TypeInfo_12d54e0 + 0xe0) == 0)) {
    native_sub_4327ec(_UnityEngine_Object_TypeInfo_12d54e0);
  }
  uVar1 = native_UnityEngine_Object__op_Equality_8e9a3c(uVar6,uVar7,0);
  if ((uVar1 & 1) != 0) {
    if (((*(byte *)(_NGUITools_TypeInfo_12d53c8 + 0x133) >> 2 & 1) != 0) &&
       (*(int *)(_NGUITools_TypeInfo_12d53c8 + 0xe0) == 0)) {
      native_sub_4327ec(_NGUITools_TypeInfo_12d53c8);
    }
    if (fVar8 < *(float *)(*(long *)(_NGUITools_TypeInfo_12d53c8 + 0xb8) + 0x18) + 0.1) {
      return 0;
    }
  }
  if (((*(byte *)(_NGUITools_TypeInfo_12d53c8 + 0x133) >> 2 & 1) != 0) &&
     (*(int *)(_NGUITools_TypeInfo_12d53c8 + 0xe0) == 0)) {
    native_sub_4327ec(_NGUITools_TypeInfo_12d53c8);
  }
  puVar2 = (undefined8 *)(*(long *)(_NGUITools_TypeInfo_12d53c8 + 0xb8) + 0x20);
  *puVar2 = uVar7;
  native_sub_4326e0(puVar2,uVar7);
  *(float *)(*(long *)(_NGUITools_TypeInfo_12d53c8 + 0xb8) + 0x18) = fVar8;
  fVar8 = (float)native_NGUITools__get_soundVolume_72c59c();
  fVar8 = fVar8 * fVar10;
  if (((*(byte *)(_UnityEngine_Object_TypeInfo_12d54e0 + 0x133) >> 2 & 1) != 0) &&
     (*(int *)(_UnityEngine_Object_TypeInfo_12d54e0 + 0xe0) == 0)) {
    native_sub_4327ec();
  }
  uVar1 = native_UnityEngine_Object__op_Inequality_8d76fc(uVar7,0,0);
  if (fVar8 <= 0.01) {
    return 0;
  }
  if ((uVar1 & 1) == 0) {
    return 0;
  }
  if (((*(byte *)(_NGUITools_TypeInfo_12d53c8 + 0x133) >> 2 & 1) != 0) &&
     (*(int *)(_NGUITools_TypeInfo_12d53c8 + 0xe0) == 0)) {
    native_sub_4327ec();
  }
  uVar6 = **(undefined8 **)(_NGUITools_TypeInfo_12d53c8 + 0xb8);
  if (((*(byte *)(_UnityEngine_Object_TypeInfo_12d54e0 + 0x133) >> 2 & 1) != 0) &&
     (*(int *)(_UnityEngine_Object_TypeInfo_12d54e0 + 0xe0) == 0)) {
    native_sub_4327ec(_UnityEngine_Object_TypeInfo_12d54e0);
  }
  uVar1 = native_UnityEngine_Object__op_Equality_8e9a3c(uVar6,0,0);
  if ((uVar1 & 1) == 0) {
    if (((*(byte *)(_NGUITools_TypeInfo_12d53c8 + 0x133) >> 2 & 1) != 0) &&
       (*(int *)(_NGUITools_TypeInfo_12d53c8 + 0xe0) == 0)) {
      native_sub_4327ec();
    }
    uVar1 = native_NGUITools__GetActive_72d02c
                      (**(undefined8 **)(_NGUITools_TypeInfo_12d53c8 + 0xb8));
    if ((uVar1 & 1) == 0) goto LAB_0072ca44;
  }
  else {
LAB_0072ca44:
    uVar6 = _UnityEngine_AudioListener_var_12d12e8;
    if (((*(byte *)(_System_Type_TypeInfo_12d6340 + 0x133) >> 2 & 1) != 0) &&
       (*(int *)(_System_Type_TypeInfo_12d6340 + 0xe0) == 0)) {
      native_sub_4327ec();
    }
    uVar6 = native_System_Type__GetTypeFromHandle_b0fb24(uVar6,0);
    if (((*(byte *)(_UnityEngine_Object_TypeInfo_12d54e0 + 0x133) >> 2 & 1) != 0) &&
       (*(int *)(_UnityEngine_Object_TypeInfo_12d54e0 + 0xe0) == 0)) {
      native_sub_4327ec(_UnityEngine_Object_TypeInfo_12d54e0);
    }
    uVar6 = native_UnityEngine_Object__FindObjectsOfType_8ea6cc(uVar6,0);
    lVar3 = native_sub_4327f8(uVar6,_UnityEngine_AudioListener___TypeInfo_12d3020);
    if ((lVar3 != 0) && (0 < (int)*(ulong *)(lVar3 + 0x18))) {
      uVar1 = 0;
      uVar5 = *(ulong *)(lVar3 + 0x18) & 0xffffffff;
      do {
        if (uVar5 <= uVar1) {
LAB_0072cfa0:
          uVar7 = native_sub_43283c();
                    /* WARNING: Subroutine does not return */
          native_sub_4327dc(uVar7,0);
        }
        uVar6 = *(undefined8 *)(lVar3 + 0x20 + uVar1 * 8);
        if (((*(byte *)(_NGUITools_TypeInfo_12d53c8 + 0x133) >> 2 & 1) != 0) &&
           (*(int *)(_NGUITools_TypeInfo_12d53c8 + 0xe0) == 0)) {
          native_sub_4327ec();
        }
        uVar5 = native_NGUITools__GetActive_72d02c(uVar6);
        if ((uVar5 & 1) != 0) {
          if (*(uint *)(lVar3 + 0x18) <= (uint)uVar1) goto LAB_0072cfa0;
          uVar6 = *(undefined8 *)(lVar3 + 0x20 + uVar1 * 8);
          if (((*(byte *)(_NGUITools_TypeInfo_12d53c8 + 0x133) >> 2 & 1) != 0) &&
             (*(int *)(_NGUITools_TypeInfo_12d53c8 + 0xe0) == 0)) {
            native_sub_4327ec();
          }
          puVar2 = *(undefined8 **)(_NGUITools_TypeInfo_12d53c8 + 0xb8);
          *puVar2 = uVar6;
          native_sub_4326e0(puVar2,uVar6);
          break;
        }
        uVar5 = (ulong)*(uint *)(lVar3 + 0x18);
        uVar1 = uVar1 + 1;
      } while ((long)uVar1 < (long)(int)*(uint *)(lVar3 + 0x18));
    }
    if (((*(byte *)(_NGUITools_TypeInfo_12d53c8 + 0x133) >> 2 & 1) != 0) &&
       (*(int *)(_NGUITools_TypeInfo_12d53c8 + 0xe0) == 0)) {
      native_sub_4327ec();
    }
    uVar6 = **(undefined8 **)(_NGUITools_TypeInfo_12d53c8 + 0xb8);
    if (((*(byte *)(_UnityEngine_Object_TypeInfo_12d54e0 + 0x133) >> 2 & 1) != 0) &&
       (*(int *)(_UnityEngine_Object_TypeInfo_12d54e0 + 0xe0) == 0)) {
      native_sub_4327ec(_UnityEngine_Object_TypeInfo_12d54e0);
    }
    uVar1 = native_UnityEngine_Object__op_Equality_8e9a3c(uVar6,0,0);
    if ((uVar1 & 1) != 0) {
      plVar4 = (long *)native_UnityEngine_Camera__get_main_8d93c0(0);
      if (((*(byte *)(_UnityEngine_Object_TypeInfo_12d54e0 + 0x133) >> 2 & 1) != 0) &&
         (*(int *)(_UnityEngine_Object_TypeInfo_12d54e0 + 0xe0) == 0)) {
        native_sub_4327ec(_UnityEngine_Object_TypeInfo_12d54e0);
      }
      uVar1 = native_UnityEngine_Object__op_Equality_8e9a3c(plVar4,0,0);
      uVar6 = _UnityEngine_Camera_var_12d1350;
      if ((uVar1 & 1) != 0) {
        if (((*(byte *)(_System_Type_TypeInfo_12d6340 + 0x133) >> 2 & 1) != 0) &&
           (*(int *)(_System_Type_TypeInfo_12d6340 + 0xe0) == 0)) {
          native_sub_4327ec();
        }
        uVar6 = native_System_Type__GetTypeFromHandle_b0fb24(uVar6,0);
        if (((*(byte *)(_UnityEngine_Object_TypeInfo_12d54e0 + 0x133) >> 2 & 1) != 0) &&
           (*(int *)(_UnityEngine_Object_TypeInfo_12d54e0 + 0xe0) == 0)) {
          native_sub_4327ec(_UnityEngine_Object_TypeInfo_12d54e0);
        }
        plVar4 = (long *)native_UnityEngine_Object__FindObjectOfType_8ea870(uVar6,0);
        if (plVar4 == (long *)0x0) {
          plVar4 = (long *)0x0;
        }
        else if (*plVar4 != _UnityEngine_Camera_TypeInfo_12d3cf0) {
          plVar4 = (long *)0x0;
        }
      }
      if (((*(byte *)(_UnityEngine_Object_TypeInfo_12d54e0 + 0x133) >> 2 & 1) != 0) &&
         (*(int *)(_UnityEngine_Object_TypeInfo_12d54e0 + 0xe0) == 0)) {
        native_sub_4327ec();
      }
      uVar1 = native_UnityEngine_Object__op_Inequality_8d76fc(plVar4,0,0);
      if ((uVar1 & 1) != 0) {
        if ((plVar4 == (long *)0x0) ||
           (lVar3 = native_UnityEngine_Component__get_gameObject_8da66c(plVar4,0), lVar3 == 0))
        goto LAB_0072cfac;
        uVar6 = native_UnityEngine_GameObject__AddComponent_ActiveAnimation__4a2118
                          (lVar3,
                           _Method_UnityEngine_GameObject_AddComponent_AudioListener____12e4748);
        if (((*(byte *)(_NGUITools_TypeInfo_12d53c8 + 0x133) >> 2 & 1) != 0) &&
           (*(int *)(_NGUITools_TypeInfo_12d53c8 + 0xe0) == 0)) {
          native_sub_4327ec(_NGUITools_TypeInfo_12d53c8);
        }
        puVar2 = *(undefined8 **)(_NGUITools_TypeInfo_12d53c8 + 0xb8);
        *puVar2 = uVar6;
        native_sub_4326e0(puVar2,uVar6);
      }
    }
  }
  if (((*(byte *)(_NGUITools_TypeInfo_12d53c8 + 0x133) >> 2 & 1) != 0) &&
     (*(int *)(_NGUITools_TypeInfo_12d53c8 + 0xe0) == 0)) {
    native_sub_4327ec();
  }
  uVar6 = **(undefined8 **)(_NGUITools_TypeInfo_12d53c8 + 0xb8);
  if (((*(byte *)(_UnityEngine_Object_TypeInfo_12d54e0 + 0x133) >> 2 & 1) != 0) &&
     (*(int *)(_UnityEngine_Object_TypeInfo_12d54e0 + 0xe0) == 0)) {
    native_sub_4327ec(_UnityEngine_Object_TypeInfo_12d54e0);
  }
  uVar1 = native_UnityEngine_Object__op_Inequality_8d76fc(uVar6,0,0);
  if ((uVar1 & 1) == 0) {
    return 0;
  }
  if (((*(byte *)(_NGUITools_TypeInfo_12d53c8 + 0x133) >> 2 & 1) != 0) &&
     (*(int *)(_NGUITools_TypeInfo_12d53c8 + 0xe0) == 0)) {
    native_sub_4327ec();
  }
  if (**(long **)(_NGUITools_TypeInfo_12d53c8 + 0xb8) != 0) {
    uVar1 = native_UnityEngine_Behaviour__get_enabled_8d7acc
                      (**(long **)(_NGUITools_TypeInfo_12d53c8 + 0xb8),0);
    if ((uVar1 & 1) == 0) {
      return 0;
    }
    if (((*(byte *)(_NGUITools_TypeInfo_12d53c8 + 0x133) >> 2 & 1) != 0) &&
       (*(int *)(_NGUITools_TypeInfo_12d53c8 + 0xe0) == 0)) {
      native_sub_4327ec();
    }
    if (**(long **)(_NGUITools_TypeInfo_12d53c8 + 0xb8) != 0) {
      native_UnityEngine_Component__get_gameObject_8da66c
                (**(long **)(_NGUITools_TypeInfo_12d53c8 + 0xb8),0);
      uVar1 = native_NGUITools__GetActive_72d0d4();
      if ((uVar1 & 1) == 0) {
        return 0;
      }
      if (((*(byte *)(_NGUITools_TypeInfo_12d53c8 + 0x133) >> 2 & 1) != 0) &&
         (*(int *)(_NGUITools_TypeInfo_12d53c8 + 0xe0) == 0)) {
        native_sub_4327ec();
      }
      uVar6 = *(undefined8 *)(*(long *)(_NGUITools_TypeInfo_12d53c8 + 0xb8) + 8);
      if (((*(byte *)(_UnityEngine_Object_TypeInfo_12d54e0 + 0x133) >> 2 & 1) != 0) &&
         (*(int *)(_UnityEngine_Object_TypeInfo_12d54e0 + 0xe0) == 0)) {
        native_sub_4327ec(_UnityEngine_Object_TypeInfo_12d54e0);
      }
      uVar1 = native_UnityEngine_Object__op_Implicit_8e1b98(uVar6,0);
      if ((uVar1 & 1) == 0) {
        if (((*(byte *)(_NGUITools_TypeInfo_12d53c8 + 0x133) >> 2 & 1) != 0) &&
           (*(int *)(_NGUITools_TypeInfo_12d53c8 + 0xe0) == 0)) {
          native_sub_4327ec();
        }
        if (**(long **)(_NGUITools_TypeInfo_12d53c8 + 0xb8) == 0) goto LAB_0072cfac;
        uVar6 = native_UnityEngine_Component__GetComponent_ActiveAnimation__49daec
                          (**(long **)(_NGUITools_TypeInfo_12d53c8 + 0xb8),
                           _Method_UnityEngine_Component_GetComponent_AudioSource____12e2918);
        puVar2 = (undefined8 *)(*(long *)(_NGUITools_TypeInfo_12d53c8 + 0xb8) + 8);
        *puVar2 = uVar6;
        native_sub_4326e0(puVar2,uVar6);
        uVar6 = *(undefined8 *)(*(long *)(_NGUITools_TypeInfo_12d53c8 + 0xb8) + 8);
        if (((*(byte *)(_UnityEngine_Object_TypeInfo_12d54e0 + 0x133) >> 2 & 1) != 0) &&
           (*(int *)(_UnityEngine_Object_TypeInfo_12d54e0 + 0xe0) == 0)) {
          native_sub_4327ec();
        }
        uVar1 = native_UnityEngine_Object__op_Equality_8e9a3c(uVar6,0,0);
        if ((uVar1 & 1) != 0) {
          if (((*(byte *)(_NGUITools_TypeInfo_12d53c8 + 0x133) >> 2 & 1) != 0) &&
             (*(int *)(_NGUITools_TypeInfo_12d53c8 + 0xe0) == 0)) {
            native_sub_4327ec();
          }
          if ((**(long **)(_NGUITools_TypeInfo_12d53c8 + 0xb8) == 0) ||
             (lVar3 = native_UnityEngine_Component__get_gameObject_8da66c
                                (**(long **)(_NGUITools_TypeInfo_12d53c8 + 0xb8),0), lVar3 == 0))
          goto LAB_0072cfac;
          uVar6 = native_UnityEngine_GameObject__AddComponent_ActiveAnimation__4a2118
                            (lVar3,
                             _Method_UnityEngine_GameObject_AddComponent_AudioSource____12e4750);
          puVar2 = (undefined8 *)(*(long *)(_NGUITools_TypeInfo_12d53c8 + 0xb8) + 8);
          *puVar2 = uVar6;
          native_sub_4326e0(puVar2,uVar6);
        }
      }
      if (((*(byte *)(_NGUITools_TypeInfo_12d53c8 + 0x133) >> 2 & 1) != 0) &&
         (*(int *)(_NGUITools_TypeInfo_12d53c8 + 0xe0) == 0)) {
        native_sub_4327ec();
      }
      lVar3 = *(long *)(*(long *)(_NGUITools_TypeInfo_12d53c8 + 0xb8) + 8);
      if (lVar3 != 0) {
        native_UnityEngine_AudioSource__set_priority_dc11dc(lVar3,0x32,0);
        lVar3 = *(long *)(*(long *)(_NGUITools_TypeInfo_12d53c8 + 0xb8) + 8);
        if (lVar3 != 0) {
          native_UnityEngine_AudioSource__set_pitch_dc0fe8(uVar9,lVar3,0);
          lVar3 = *(long *)(*(long *)(_NGUITools_TypeInfo_12d53c8 + 0xb8) + 8);
          if (lVar3 != 0) {
            native_UnityEngine_AudioSource__PlayOneShot_dc10cc(fVar8,lVar3,uVar7,0);
            return *(undefined8 *)(*(long *)(_NGUITools_TypeInfo_12d53c8 + 0xb8) + 8);
          }
        }
      }
    }
  }
LAB_0072cfac:
                    /* WARNING: Subroutine does not return */
  native_sub_432810();
}



/* UIPlaySound$$.ctor @ 0xaf6e4c
 * void UIPlaySound___ctor (UIPlaySound_o* __this, const MethodInfo* method); */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* UIPlaySound$$.ctor
   void UIPlaySound___ctor (UIPlaySound_o* __this, const MethodInfo* method); */

undefined1  [16] native_UIPlaySound___ctor_af6e4c(ulong param_1)

{
  undefined8 uVar1;
  undefined1 auVar2 [16];
  
  uVar1 = NEON_fmov(0x3f800000,4);
  *(undefined8 *)(param_1 + 0x24) = uVar1;
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


